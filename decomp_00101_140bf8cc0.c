// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140bf8cc0 FUN_140bf8cc0 body=118 status=ok
// SIG undefined FUN_140bf8cc0(void)

void FUN_140bf8cc0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 2,0);
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



// FUNCTION 140bf8d44 FUN_140bf8d44 body=117 status=ok
// SIG undefined FUN_140bf8d44(void)

undefined8 * FUN_140bf8d44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4a47a0;
  param_1[0xd] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)((longlong)param_1 + 0x84) != 0) {
    FUN_140115c12(param_1 + 0xf,0);
  }
  param_1[0xe] = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 140bf8dc0 FUN_140bf8dc0 body=57 status=ok
// SIG undefined FUN_140bf8dc0(void)

void FUN_140bf8dc0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61208 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61208 = FUN_140002ddd(FUN_1464f1fe7,uVar1,L"GbxMomentSettings");
  }
  return;
}



// FUNCTION 140bf8dfa FUN_140bf8dfa body=54 status=ok
// SIG undefined FUN_140bf8dfa(void)

void FUN_140bf8dfa(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_140bf8e30(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 140bf8e30 FUN_140bf8e30 body=157 status=ok
// SIG undefined FUN_140bf8e30(void)

void FUN_140bf8e30(undefined1 *param_1,char param_2)

{
  undefined1 auStack_68 [40];
  code *local_40;
  undefined1 **local_38;
  undefined1 local_29;
  undefined1 *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_1[8] & 4) == 0) == (bool)param_2) {
    param_1[8] = param_1[8] & 0xfb | param_2 << 2;
    local_38 = &local_28;
    local_40 = FUN_143622dfe;
    local_28 = param_1;
    FUN_144966906(param_1 + 0x138);
    if ((param_1[8] & 4) != 0) {
      local_20 = &local_29;
      local_28 = &LAB_14362218a;
      FUN_144966906(param_1 + 0x138);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf8ece FUN_140bf8ece body=175 status=ok
// SIG undefined FUN_140bf8ece(void)

void FUN_140bf8ece(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x420) != *(int *)(param_1 + 0x44c)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar1 = param_1 + 0x450;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x458);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x460) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x418) + (longlong)iVar3 * 0x168;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x418) + (longlong)iVar3 * 0x168) == param_2)
        break;
        iVar3 = *(int *)(lVar1 + 0x160);
        lVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_140bf8f5d;
    }
  }
  lVar1 = 0;
LAB_140bf8f5d:
  FUN_140bf8f7e(param_2,*(undefined4 *)(lVar1 + 0xc));
  return;
}



// FUNCTION 140bf8f7e FUN_140bf8f7e body=175 status=ok
// SIG undefined FUN_140bf8f7e(void)

void FUN_140bf8f7e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_146e237ec(*(longlong *)(param_1 + 0x68),param_2,param_3);
    return;
  }
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0xe8);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xe0);
  uVar8 = 0;
  if (0 < (int)uVar9) {
    uVar10 = -(uint)param_2;
    if ((int)uVar10 < 0) {
      uVar10 = (uint)param_2;
    }
    uVar11 = (ulonglong)uVar9;
    do {
      uVar11 = uVar11 >> 1;
      uVar7 = (uint)uVar11 + (int)uVar8;
      uVar1 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
      uVar6 = -uVar1;
      if ((int)uVar6 < 0) {
        uVar6 = uVar1;
      }
      if (uVar6 <= uVar10) {
        uVar8 = (ulonglong)(uVar7 + (uVar9 & 1));
      }
      bVar4 = 1 < uVar9;
      uVar9 = (uint)uVar11;
    } while (bVar4);
  }
  iVar2 = *(int *)(lVar3 + uVar8 * 4);
  if (iVar2 < 1 == (bool)(char)param_3) {
    *(int *)(lVar3 + uVar8 * 4) = -iVar2;
  }
  uVar5 = FUN_14491371e();
  FUN_140bf902e(uVar5,param_3);
  return;
}



// FUNCTION 140bf902e FUN_140bf902e body=519 status=ok
// SIG undefined FUN_140bf902e(void)

void FUN_140bf902e(longlong param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar1 = *(uint *)(param_1 + 0x250);
  if (uVar1 != 0xffffffff) {
    uVar9 = *(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x340);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x338);
    uVar6 = 0;
    if (0 < (int)uVar9) {
      uVar5 = -uVar1;
      if ((int)-uVar1 < 0) {
        uVar5 = uVar1;
      }
      uVar10 = (ulonglong)uVar9;
      do {
        uVar10 = uVar10 >> 1;
        uVar8 = (uint)uVar10 + (int)uVar6;
        uVar1 = *(uint *)(lVar3 + (ulonglong)uVar8 * 4);
        uVar7 = -uVar1;
        if ((int)uVar7 < 0) {
          uVar7 = uVar1;
        }
        if (uVar7 <= uVar5) {
          uVar6 = (ulonglong)(uVar8 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar10;
      } while (bVar4);
    }
    iVar2 = *(int *)(lVar3 + uVar6 * 4);
    if (iVar2 < 1 == (bool)param_2) {
      *(int *)(lVar3 + uVar6 * 4) = -iVar2;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x254);
  if (uVar1 != 0xffffffff) {
    uVar9 = *(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x368);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x360);
    uVar6 = 0;
    if (0 < (int)uVar9) {
      uVar5 = -uVar1;
      if ((int)-uVar1 < 0) {
        uVar5 = uVar1;
      }
      uVar10 = (ulonglong)uVar9;
      do {
        uVar10 = uVar10 >> 1;
        uVar8 = (uint)uVar10 + (int)uVar6;
        uVar1 = *(uint *)(lVar3 + (ulonglong)uVar8 * 4);
        uVar7 = -uVar1;
        if ((int)uVar7 < 0) {
          uVar7 = uVar1;
        }
        if (uVar7 <= uVar5) {
          uVar6 = (ulonglong)(uVar8 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar10;
      } while (bVar4);
    }
    iVar2 = *(int *)(lVar3 + uVar6 * 4);
    if (iVar2 < 1 == (bool)param_2) {
      *(int *)(lVar3 + uVar6 * 4) = -iVar2;
    }
  }
  uVar1 = *(uint *)(param_1 + 600);
  if (uVar1 != 0xffffffff) {
    uVar9 = *(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x390);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x388);
    uVar6 = 0;
    if (0 < (int)uVar9) {
      uVar5 = -uVar1;
      if ((int)-uVar1 < 0) {
        uVar5 = uVar1;
      }
      uVar10 = (ulonglong)uVar9;
      do {
        uVar10 = uVar10 >> 1;
        uVar8 = (uint)uVar10 + (int)uVar6;
        uVar1 = *(uint *)(lVar3 + (ulonglong)uVar8 * 4);
        uVar7 = -uVar1;
        if ((int)uVar7 < 0) {
          uVar7 = uVar1;
        }
        if (uVar7 <= uVar5) {
          uVar6 = (ulonglong)(uVar8 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar10;
      } while (bVar4);
    }
    iVar2 = *(int *)(lVar3 + uVar6 * 4);
    if (iVar2 < 1 == (bool)param_2) {
      *(int *)(lVar3 + uVar6 * 4) = -iVar2;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x25c);
  if (uVar1 != 0xffffffff) {
    uVar9 = *(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x3b8);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + 0x3b0);
    uVar6 = 0;
    if (0 < (int)uVar9) {
      uVar5 = -uVar1;
      if ((int)-uVar1 < 0) {
        uVar5 = uVar1;
      }
      uVar10 = (ulonglong)uVar9;
      do {
        uVar10 = uVar10 >> 1;
        uVar8 = (uint)uVar10 + (int)uVar6;
        uVar1 = *(uint *)(lVar3 + (ulonglong)uVar8 * 4);
        uVar7 = -uVar1;
        if ((int)uVar7 < 0) {
          uVar7 = uVar1;
        }
        if (uVar7 <= uVar5) {
          uVar6 = (ulonglong)(uVar8 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar10;
      } while (bVar4);
    }
    iVar2 = *(int *)(lVar3 + uVar6 * 4);
    if (iVar2 < 1 == (bool)param_2) {
      *(int *)(lVar3 + uVar6 * 4) = -iVar2;
    }
  }
  return;
}



// FUNCTION 140bf9248 FUN_140bf9248 body=57 status=ok
// SIG undefined FUN_140bf9248(void)

void FUN_140bf9248(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22fa0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22fa0 = FUN_140002ddd(FUN_14643bf70,uVar1,L"GpsTest_Aggro");
  }
  return;
}



// FUNCTION 140bf9282 FUN_140bf9282 body=32 status=ok
// SIG undefined FUN_140bf9282(void)

undefined8 * FUN_140bf9282(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aac7690;
  return param_1;
}



// FUNCTION 140bf92a2 FUN_140bf92a2 body=102 status=ok
// SIG undefined FUN_140bf92a2(void)

ulonglong FUN_140bf92a2(longlong param_1)

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
LAB_140bf92eb:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140bf92eb;
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



// FUNCTION 140bf9316 FUN_140bf9316 body=61 status=ok
// SIG undefined FUN_140bf9316(void)

void FUN_140bf9316(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_140bf9354(*(longlong *)(param_1 + 0x138),param_2);
  }
  plVar2 = *(longlong **)(param_2 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140bf934f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140bf9354 FUN_140bf9354 body=90 status=ok
// SIG undefined FUN_140bf9354(void)

void FUN_140bf9354(longlong param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    local_10 = param_2;
    FUN_140bf93b0(param_1 + 0x120,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bf93b0 FUN_140bf93b0 body=808 status=ok
// SIG undefined FUN_140bf93b0(void)

int FUN_140bf93b0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  
  iVar10 = (int)param_1[1];
  lVar11 = (longlong)iVar10;
  if (lVar11 == 0) {
    iVar10 = 0;
  }
  else {
    plVar2 = (longlong *)*param_1;
    plVar3 = (longlong *)*param_2;
    plVar9 = (longlong *)plVar2[1];
    if (plVar9 == (longlong *)0x0) {
LAB_140bf958a:
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_140bf958a;
        LOCK();
        iVar13 = (int)plVar9[1];
        bVar17 = iVar6 == iVar13;
        if (bVar17) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar13 = iVar6;
        }
        iVar6 = iVar13;
        UNLOCK();
      } while (!bVar17);
    }
    lVar16 = *plVar2;
    plVar4 = (longlong *)plVar3[1];
    if (plVar4 == (longlong *)0x0) {
      lVar14 = 0;
    }
    else {
      iVar6 = (int)plVar4[1];
      lVar14 = 0;
      do {
        if (iVar6 == 0) goto LAB_140bf9433;
        LOCK();
        iVar13 = (int)plVar4[1];
        bVar17 = iVar6 == iVar13;
        if (bVar17) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
          iVar13 = iVar6;
        }
        iVar6 = iVar13;
        UNLOCK();
      } while (!bVar17);
      lVar14 = *plVar3;
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
LAB_140bf9433:
    if (plVar9 == (longlong *)0x0) {
      lVar16 = 0;
    }
    else {
      LOCK();
      plVar3 = plVar9 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    iVar13 = 0;
    bVar17 = lVar16 == lVar14;
    iVar6 = 0;
    do {
      lVar14 = (longlong)iVar6;
      lVar16 = lVar14;
      iVar15 = iVar6 + 1;
      if (iVar6 + 1 < iVar10) {
        iVar15 = iVar10;
      }
      do {
        lVar16 = lVar16 + 1;
        if (lVar11 <= lVar16) goto LAB_140bf9527;
        plVar3 = (longlong *)*param_2;
        plVar9 = (longlong *)plVar2[lVar16 * 2 + 1];
        if (plVar9 == (longlong *)0x0) {
LAB_140bf95e9:
          plVar9 = (longlong *)0x0;
        }
        else {
          iVar8 = (int)plVar9[1];
          do {
            if (iVar8 == 0) goto LAB_140bf95e9;
            LOCK();
            iVar5 = (int)plVar9[1];
            bVar18 = iVar8 == iVar5;
            if (bVar18) {
              *(int *)(plVar9 + 1) = iVar8 + 1;
              iVar5 = iVar8;
            }
            iVar8 = iVar5;
            UNLOCK();
          } while (!bVar18);
        }
        lVar12 = plVar2[lVar16 * 2];
        plVar4 = (longlong *)plVar3[1];
        if (plVar4 == (longlong *)0x0) {
LAB_140bf95f0:
          lVar7 = 0;
        }
        else {
          iVar8 = (int)plVar4[1];
          do {
            if (iVar8 == 0) goto LAB_140bf95f0;
            LOCK();
            iVar5 = (int)plVar4[1];
            bVar18 = iVar8 == iVar5;
            if (bVar18) {
              *(int *)(plVar4 + 1) = iVar8 + 1;
              iVar5 = iVar8;
            }
            iVar8 = iVar5;
            UNLOCK();
          } while (!bVar18);
          lVar7 = *plVar3;
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
        if (plVar9 == (longlong *)0x0) {
          lVar12 = 0;
        }
        else {
          LOCK();
          plVar3 = plVar9 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      } while (bVar17 == (lVar12 == lVar7));
      iVar15 = (int)lVar16;
LAB_140bf9527:
      iVar8 = iVar15 - iVar6;
      if (bVar17 == false) {
        if (iVar13 != iVar6) {
          memmove(plVar2 + (longlong)iVar13 * 2,plVar2 + lVar14 * 2,(longlong)iVar8 << 4);
        }
        iVar13 = iVar13 + iVar8;
      }
      else {
        FUN_140bf96d8(plVar2 + lVar14 * 2,iVar8);
      }
      bVar17 = (bool)(bVar17 ^ 1);
      iVar6 = iVar15;
    } while (lVar16 < lVar11);
    *(int *)(param_1 + 1) = iVar13;
    iVar10 = iVar10 - iVar13;
  }
  return iVar10;
}



// FUNCTION 140bf96d8 FUN_140bf96d8 body=56 status=ok
// SIG undefined FUN_140bf96d8(void)

void FUN_140bf96d8(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bf9710 FUN_140bf9710 body=55 status=ok
// SIG undefined FUN_140bf9710(void)

void FUN_140bf9710(longlong *param_1)

{
  FUN_140bf9748(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140bf9748 FUN_140bf9748 body=515 status=ok
// SIG undefined FUN_140bf9748(void)

void FUN_140bf9748(longlong *param_1,int param_2)

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
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140bf982d;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x60 + (longlong)iVar6 * 0x78) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
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
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140bf982d;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140bf982d:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1410fd13e(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140bf994c FUN_140bf994c body=3843 status=ok
// SIG undefined FUN_140bf994c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140bf994c(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  void *_Dst;
  ulonglong *puVar1;
  undefined8 uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined3 uVar10;
  undefined1 auVar11 [12];
  longlong *plVar12;
  ulonglong uVar13;
  code *pcVar14;
  code *pcVar15;
  byte bVar16;
  uint *puVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_378 [32];
  double *local_358;
  ulonglong local_350;
  code **local_348;
  undefined1 *local_340;
  wchar_t *local_338;
  code *local_330;
  undefined1 *local_328;
  code **local_320;
  code *local_318;
  code *local_310;
  longlong *local_300;
  longlong local_2f8;
  undefined8 *local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  undefined4 local_2d4;
  undefined1 local_2d0;
  undefined1 local_2c9;
  ulonglong local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2a9;
  double local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double local_288;
  double dStack_280;
  double local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined1 local_260;
  undefined2 local_25f;
  undefined1 local_25d;
  undefined4 local_25c;
  undefined1 local_258;
  undefined4 local_254;
  undefined1 local_250;
  undefined4 local_24c;
  undefined2 local_248;
  longlong local_220;
  undefined8 local_218;
  longlong local_200;
  undefined8 local_1f8;
  undefined4 local_1c4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined1 local_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  longlong local_168;
  ulonglong uStack_160;
  code *local_158;
  double dStack_150;
  undefined1 local_148 [16];
  longlong local_138;
  longlong lStack_130;
  undefined8 local_128;
  longlong local_108;
  undefined8 local_100;
  longlong local_e8;
  undefined8 local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_2f0 = (undefined8 *)(param_7 + 0x250);
  if (param_7 == 0) {
    local_2f0 = (undefined8 *)0x0;
  }
  bVar16 = *(byte *)(param_1 + 0x10);
  if ((bVar16 & 0x10) != 0) {
    local_138 = 0;
    lStack_130 = 0;
    local_148 = ZEXT816(0);
    local_158 = (code *)0x0;
    dStack_150 = 0.0;
    bVar16 = 0;
    local_128 = 0;
    local_24c = 0;
    uStack_268 = 0;
    local_248 = 0x101;
    local_220 = 0;
    local_218 = 0x800000000;
    local_200 = 0;
    local_1f8 = 0x400000000;
    local_260 = 1;
    local_254 = 0;
    local_270 = DAT_14cb76678;
    local_25f = 1;
    local_25d = 0;
    local_250 = 0;
    local_25c = 0x1000000;
    local_258 = 1;
    local_358 = (double *)param_5;
    local_2f8 = param_3;
    FUN_140bfa8b6(param_1,&local_270,0,0);
    local_338 = (wchar_t *)&local_2d4;
    local_2d0 = 0;
    local_2d4 = 3;
    local_298 = (double)*(float *)(param_1 + 0x1c) + *(double *)(param_5 + 0x60);
    local_288 = *(double *)(param_5 + 0x50);
    dStack_280 = *(double *)(param_5 + 0x58);
    uVar27 = 0;
    uVar28 = 0;
    local_278 = *(double *)(param_5 + 0x60) - (double)*(float *)(param_1 + 0x18);
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_358 = &local_288;
    local_2a8 = local_288 + 0.0;
    uStack_2a0 = dStack_280 + 0.0;
    local_330 = (code *)&local_2a9;
    local_340 = &DAT_14cad0f10;
    local_350 = CONCAT44(local_350._4_4_,DAT_14cad0ec4);
    local_348 = (code **)&local_270;
    FUN_1401e2596(param_4,&local_2c8,&local_2c9);
    uVar13 = local_2c8;
    lVar22 = (longlong)(int)uStack_2c0;
    if (lVar22 == 0) {
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      uVar32 = 0;
    }
    else {
      lVar23 = 0;
      do {
        iVar3 = *(int *)(uVar13 + 0xdc + lVar23);
        if (((((iVar3 != 0) && (uVar20 = *(uint *)(uVar13 + 0xd8 + lVar23), -1 < (int)uVar20)) &&
             ((int)uVar20 < DAT_14c9647dc)) &&
            ((plVar18 = (longlong *)
                        ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
             plVar18 != (longlong *)0x0 && ((int)plVar18[2] == iVar3)))) &&
           ((((*(uint *)(plVar18 + 1) & 0x10200000) == 0 &&
             ((plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0 &&
              (lVar19 = (**(code **)(*plVar18 + 0x7b8))
                                  (plVar18,*(undefined8 *)(uVar13 + 0xf0 + lVar23),1,0xffffffff),
              lVar19 != 0)))) &&
            (*(char *)(lVar19 + 0x68 + (ulonglong)*(byte *)(param_1 + 0x11)) == '\x02')))) {
          local_128 = *(undefined8 *)(uVar13 + 0x38 + lVar23);
          puVar1 = (ulonglong *)(uVar13 + 8 + lVar23);
          local_158 = (code *)*puVar1;
          dStack_150 = (double)puVar1[1];
          local_148 = *(undefined1 (*) [16])(uVar13 + 0x18 + lVar23);
          plVar18 = (longlong *)(uVar13 + 0x28 + lVar23);
          local_138 = *plVar18;
          lStack_130 = plVar18[1];
          uVar2 = *(undefined8 *)(uVar13 + 0x58 + lVar23);
          uVar31 = (undefined4)uVar2;
          uVar32 = (undefined4)((ulonglong)uVar2 >> 0x20);
          uVar2 = *(undefined8 *)(uVar13 + 0x60 + lVar23);
          uVar27 = (undefined4)uVar2;
          uVar28 = (undefined4)((ulonglong)uVar2 >> 0x20);
          uVar2 = *(undefined8 *)(uVar13 + 0x68 + lVar23);
          uVar29 = (undefined4)uVar2;
          uVar30 = (undefined4)((ulonglong)uVar2 >> 0x20);
          bVar16 = *(byte *)(uVar13 + 0xad + lVar23);
          goto LAB_140bfa4bc;
        }
        lVar23 = lVar23 + 0x100;
      } while (lVar22 * 0x100 != lVar23);
      uVar27 = 0;
      uVar28 = 0;
      bVar16 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      uVar32 = 0;
    }
LAB_140bfa4bc:
    if (local_2c8 != 0) {
      FUN_1400020a8(local_2c8);
    }
    if (local_200 != 0) {
      FUN_1400020a8();
    }
    param_3 = local_2f8;
    if (local_220 != 0) {
      FUN_1400020a8();
    }
    if ((bVar16 & 1) != 0) {
      dVar4 = *(double *)(param_5 + 0x60);
      *(undefined8 *)(param_5 + 0x60) = local_128;
      *(longlong *)(param_5 + 0x50) = local_138;
      *(longlong *)(param_5 + 0x58) = lStack_130;
      if (((((double)CONCAT44(uVar32,uVar31) != 0.0) || (NAN((double)CONCAT44(uVar32,uVar31)))) ||
          ((double)CONCAT44(uVar28,uVar27) != 0.0)) ||
         (((NAN((double)CONCAT44(uVar28,uVar27)) || ((double)CONCAT44(uVar30,uVar29) != 0.0)) ||
          (NAN((double)CONCAT44(uVar30,uVar29)))))) {
        dVar24 = (double)*(float *)(param_1 + 0x20);
        *(double *)(param_5 + 0x50) =
             (double)CONCAT44(uVar32,uVar31) * dVar24 + *(double *)(param_5 + 0x50);
        *(double *)(param_5 + 0x58) =
             (double)CONCAT44(uVar28,uVar27) * dVar24 + *(double *)(param_5 + 0x58);
        dVar24 = (double)CONCAT44(uVar30,uVar29) * dVar24 + *(double *)(param_5 + 0x60);
        *(double *)(param_5 + 0x60) = dVar24;
      }
      else {
        dVar24 = *(double *)(param_5 + 0x60);
      }
      *(double *)(param_5 + 0x30) =
           *(double *)(param_5 + 0x30) - (double)(float)((double)(float)dVar4 - dVar24);
    }
    bVar16 = *(byte *)(param_1 + 0x10);
  }
  if (((bVar16 & 8) != 0) && ((*(byte *)(param_5 + 1) & 1) == 0)) {
    lVar22 = param_6 + 0x78;
    if (param_6 == 0) {
      lVar22 = 0;
    }
    dVar4 = *(double *)(param_5 + 0x60);
    dVar24 = *(double *)(param_5 + 0x78);
    dVar5 = *(double *)(param_5 + 0x58);
    dVar8 = *(double *)(param_5 + 0x70);
    dVar9 = *(double *)(param_5 + 0x50);
    dVar6 = *(double *)(param_5 + 0x68);
    local_300 = param_2;
    local_2f8 = param_3;
    local_2e8 = param_4;
    memset((void *)((longlong)&local_270 + 4),0,0x104);
    local_198 = 0xffffffff;
    uStack_268 = CONCAT44(0x3f800000,(undefined4)uStack_268);
    local_1c4 = 0xffffffff;
    local_270 = (code *)((ulonglong)local_270 & 0xffffffffffffff00);
    local_168 = 0;
    uStack_160 = 0;
    local_138._1_7_ = (uint7)((ulonglong)local_138 >> 8) & 0xffffff;
    dStack_150 = 0.0;
    lStack_130 = CONCAT62(lStack_130._2_6_,0x101);
    local_108 = 0;
    local_100 = 0x800000000;
    local_e8 = 0;
    local_e0 = 0x400000000;
    local_158 = DAT_14cb76678;
    local_138 = (ulonglong)local_138._1_7_ << 8;
    uVar10 = local_148._9_3_;
    local_148[8] = 1;
    local_148._0_8_ = 0x100000000000000;
    auVar11._9_3_ = uVar10;
    auVar11._0_9_ = local_148._0_9_;
    local_148._4_8_ = auVar11._4_8_;
    local_148._0_4_ = 0x1000101;
    local_148._12_4_ = 0;
    local_358 = (double *)param_5;
    FUN_140bfa8b6(param_1,&local_158,lVar22,local_2f0);
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_358 = &local_288;
    local_2a8 = *(double *)(param_5 + 0x50);
    uStack_2a0 = *(double *)(param_5 + 0x58);
    local_298 = *(double *)(param_5 + 0x60);
    local_330 = (code *)&local_2d4;
    local_338 = (wchar_t *)&DAT_14cad0f08;
    local_340 = &DAT_14cad0f10;
    local_350 = CONCAT44(local_350._4_4_,(uint)*(byte *)(param_1 + 0x11));
    local_348 = &local_158;
    local_288 = dVar9 + dVar6;
    dStack_280 = dVar5 + dVar8;
    local_278 = dVar4 + dVar24;
    FUN_1401e2596(local_2e8,&local_2c8,&local_2a9);
    param_2 = local_300;
    if ((longlong)(int)uStack_2c0 != 0) {
      lVar23 = local_2c8 + 0xb8;
      lVar22 = (longlong)(int)uStack_2c0 << 8;
      do {
        if ((*(byte *)(lVar23 + -0xb) & 3) == 1) {
          lVar22 = FUN_14485cccc(lVar23);
          if ((lVar22 != 0) && ((*(byte *)(lVar22 + 0x62) & 4) != 0)) {
            FUN_140bfb4c0(&local_270,lVar23 + -0xb8);
            pcVar14 = local_270;
            local_270 = (code *)CONCAT44(0x7f7fffff,(undefined4)local_270);
            pcVar15 = local_270;
            local_270._0_1_ = SUB81(pcVar14,0);
            local_270._1_7_ = SUB87(pcVar15,1);
            local_270 = (code *)(CONCAT71(local_270._1_7_,(undefined1)local_270) | 1);
          }
          break;
        }
        lVar23 = lVar23 + 0x100;
        lVar22 = lVar22 + -0x100;
      } while (lVar22 != 0);
    }
    if (local_2c8 != 0) {
      FUN_1400020a8(local_2c8);
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    lVar22 = FUN_14485cccc(&local_1b0);
    if ((lVar22 != 0) && (lVar22 = FUN_14485cccc(&local_1b0), lVar22 != 0)) {
      if (DAT_14cb56270 == 0) {
        local_158 = FUN_1449e2820;
        local_310 = FUN_14081d0ea;
        local_318 = FUN_1427b09ee;
        local_328 = &LAB_148630fef;
        local_330 = FUN_1464b6a91;
        local_338 = L"Engine";
        local_340 = (undefined1 *)0x0;
        local_348 = (code **)CONCAT44(local_348._4_4_,0x10004001);
        local_350 = CONCAT44(local_350._4_4_,8);
        local_358 = (double *)CONCAT44(local_358._4_4_,0x28);
        local_320 = &local_158;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar18 = (longlong *)FUN_144718840(lVar22,DAT_14cb56270);
      if (plVar18 != (longlong *)0x0) {
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_140bfb34a(param_2,iVar3);
        }
        local_2e0 = *param_2;
        lVar23 = (longlong)iVar3 * 0x118;
        local_300 = (longlong *)(local_2e0 + lVar23);
        _Dst = (void *)(local_2e0 + 8 + lVar23);
        *(code **)((longlong)_Dst + -8) = local_270;
        memcpy(_Dst,&uStack_268,0xb8);
        uVar13 = uStack_160;
        lVar22 = local_168;
        *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
        *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
        *(undefined8 *)((longlong)_Dst + 200) = 0;
        *(undefined4 *)((longlong)_Dst + 0xd0) = 0xffffffff;
        *(undefined1 *)((longlong)_Dst + 0xd4) = 0;
        *(undefined8 *)((longlong)_Dst + 0xb8) = local_1b0;
        *(undefined8 *)((longlong)_Dst + 0xc0) = local_1a8;
        *(undefined8 *)((longlong)_Dst + 200) = uStack_1a0;
        *(undefined4 *)((longlong)_Dst + 0xd0) = local_198;
        *(undefined1 *)((longlong)_Dst + 0xd4) = local_194;
        *(undefined8 *)((longlong)_Dst + 0xf8) = local_170;
        *(undefined8 *)((longlong)_Dst + 0xe8) = local_180;
        *(undefined8 *)((longlong)_Dst + 0xf0) = uStack_178;
        *(undefined4 *)((longlong)_Dst + 0xd8) = local_190;
        *(undefined4 *)((longlong)_Dst + 0xdc) = uStack_18c;
        *(undefined4 *)((longlong)_Dst + 0xe0) = uStack_188;
        *(undefined4 *)((longlong)_Dst + 0xe4) = uStack_184;
        *(undefined8 *)((longlong)_Dst + 0x100) = 0;
        *(int *)((longlong)_Dst + 0x108) = (int)uStack_160;
        if ((int)uStack_160 == 0) {
          *(undefined4 *)((longlong)local_300 + 0x114) = 0;
        }
        else {
          puVar21 = (undefined8 *)(local_2e0 + lVar23 + 0x108);
          FUN_1403e149c(puVar21,uStack_160 & 0xffffffff,0);
          FUN_1403e129b(*puVar21,lVar22,uVar13 & 0xffffffff);
        }
        plVar12 = local_300;
        lVar22 = (**(code **)(*plVar18 + 0x20))(plVar18);
        if ((lVar22 != 0) && (0 < *(int *)(lVar22 + 0x2cc))) {
          local_358 = (double *)0x0;
          FUN_145784434(param_1,lVar22 + 0x270,plVar12,param_5);
        }
      }
    }
    param_4 = local_2e8;
    param_3 = local_2f8;
    if (local_168 != 0) {
      FUN_1400020a8();
      param_4 = local_2e8;
      param_3 = local_2f8;
    }
  }
  local_2a8 = 0.0;
  uStack_2a0 = 0.0;
  if ((longlong)(int)param_2[1] != 0) {
    lVar22 = (longlong)(int)param_2[1] * 0x118;
    lVar23 = *param_2 + 0xc0;
    local_2f8 = param_3;
    do {
      lVar19 = FUN_14485cccc(lVar23);
      uVar13 = (ulonglong)uStack_2a0;
      if (lVar19 != 0) {
        uVar27 = *(undefined4 *)(lVar19 + 0xc);
        lVar19 = (longlong)(int)uStack_2a0;
        uVar20 = (int)uStack_2a0 + 1;
        uStack_2a0 = (double)CONCAT44(uStack_2a0._4_4_,uVar20);
        if (uStack_2a0._4_4_ < uVar20) {
          FUN_1447808da(&local_2a8,uVar13 & 0xffffffff);
        }
        *(undefined4 *)((longlong)local_2a8 + lVar19 * 4) = uVar27;
      }
      lVar23 = lVar23 + 0x118;
      lVar22 = lVar22 + -0x118;
      param_3 = local_2f8;
    } while (lVar22 != 0);
  }
  uVar13 = (ulonglong)uStack_2a0;
  if (local_2f0 != (undefined8 *)0x0) {
    uVar20 = *(uint *)(local_2f0 + 1);
    if ((longlong)(int)uVar20 != 0) {
      iVar3 = (int)uStack_2a0;
      lVar22 = (longlong)(int)uStack_2a0;
      uStack_2a0 = (double)CONCAT44(uStack_2a0._4_4_,(int)uStack_2a0 + uVar20);
      if (uStack_2a0._4_4_ - iVar3 < uVar20) {
        FUN_1447808da(&local_2a8,uVar13 & 0xffffffff);
      }
      memcpy((void *)(lVar22 * 4 + (longlong)local_2a8),(void *)*local_2f0,
             (longlong)(int)uVar20 << 2);
    }
  }
  lVar22 = param_6 + 0x78;
  if (param_6 == 0) {
    lVar22 = 0;
  }
  local_24c = 0;
  local_248 = 0x101;
  local_220 = 0;
  local_218 = 0x800000000;
  local_200 = 0;
  local_1f8 = 0x400000000;
  local_260 = 0;
  local_254 = 0;
  local_270 = (code *)0x0;
  uStack_268 = 0;
  local_25f = 1;
  local_25d = 0;
  local_250 = 0;
  local_25c = 0x1000000;
  local_258 = 1;
  local_358 = (double *)param_5;
  FUN_140bfa8b6(param_1,&local_270,lVar22,&local_2a8);
  local_278 = *(double *)(param_5 + 0x30);
  local_288 = *(double *)(param_5 + 0x20);
  dStack_280 = *(double *)(param_5 + 0x28);
  auVar25 = divpd(*(undefined1 (*) [16])(param_5 + 0x38),_DAT_1499387d0);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = *(double *)(param_5 + 0x48);
  auVar26 = divpd(auVar26,_DAT_1499387d0);
  auVar25 = roundpd(auVar25,auVar25,3);
  auVar26 = roundpd(auVar26,auVar26,3);
  dVar8 = (*(double *)*(undefined1 (*) [16])(param_5 + 0x38) - auVar25._0_8_ * (double)DAT_1499387d0
          ) * 0.008726646259971648;
  dVar9 = (*(double *)(param_5 + 0x40) - auVar25._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648
  ;
  dVar6 = (*(double *)(param_5 + 0x48) - auVar26._0_8_ * (double)DAT_1499387d0) *
          0.008726646259971648;
  dVar7 = (0.0 - auVar26._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar4 = sin(dVar8);
  dVar24 = sin(dVar9);
  dVar5 = sin(dVar6);
  sin(dVar7);
  dVar8 = cos(dVar8);
  dVar9 = cos(dVar9);
  dVar6 = cos(dVar6);
  cos(dVar7);
  dVar7 = dVar24 * dVar4 * dVar5 + dVar9 * dVar8 * dVar6;
  local_158 = (code *)(dVar4 * dVar24 * dVar6 - dVar8 * dVar9 * dVar5);
  dStack_150 = -(dVar4 * dVar9 * dVar6) - dVar8 * dVar24 * dVar5;
  local_148._8_4_ = SUB84(dVar7,0);
  local_148._0_8_ = -(dVar9 * dVar4 * dVar5) + dVar24 * dVar8 * dVar6;
  local_148._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  if (*(char *)(param_1 + 0x24) == '\0') {
    puVar17 = (uint *)FUN_140bfa850();
    uVar20 = ~puVar17[1] & *puVar17;
    local_2c8._0_5_ = (uint5)uVar20;
    if ((longlong)DAT_14cb76810 != 0) {
      lVar22 = 0;
      do {
        uVar20 = uVar20 & ~(1 << (*(byte *)(DAT_14cb76808 + lVar22) & 0x1f));
        local_2c8 = CONCAT44(local_2c8._4_4_,uVar20);
        lVar22 = lVar22 + 4;
      } while ((longlong)DAT_14cb76810 * 4 != lVar22);
    }
  }
  else {
    if (*(char *)(param_1 + 0x24) == '\x01') {
      local_350 = param_5 + 4;
      local_358 = *(double **)(param_1 + 0x28);
      local_348 = (code **)&local_270;
      FUN_1479b50ba(param_4,param_3,&local_288,&local_158);
      goto LAB_140bf9cc4;
    }
    FUN_144a9f2d6();
    local_2c8 = local_2c8 & 0xffffff0000000000;
    if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      lVar22 = 0;
      uVar20 = 0;
      do {
        uVar20 = uVar20 | 1 << (*(byte *)(*(longlong *)(param_1 + 0x30) + lVar22) & 0x1f);
        local_2c8 = CONCAT44(local_2c8._4_4_,uVar20);
        lVar22 = lVar22 + 1;
      } while (*(int *)(param_1 + 0x38) != lVar22);
    }
  }
  local_338 = (wchar_t *)&local_2c8;
  local_340 = &DAT_14cad0f10;
  local_350 = CONCAT44(local_350._4_4_,DAT_14cad0ec4);
  local_358 = (double *)param_3;
  local_348 = (code **)&local_270;
  FUN_14052f4ca(param_4,param_5 + 4,&local_288,&local_158);
LAB_140bf9cc4:
  lVar22 = FUN_140877338(param_4);
  if (lVar22 != 0) {
    local_358 = (double *)(param_5 + 4);
    local_350 = local_350 & 0xffffffff00000000;
    FUN_140bfab14(lVar22,param_3,&local_288,&local_158);
  }
  if (local_200 != 0) {
    FUN_1400020a8();
  }
  if (local_220 != 0) {
    FUN_1400020a8();
  }
  if (local_2a8 != 0.0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bfa850 FUN_140bfa850 body=101 status=ok
// SIG undefined FUN_140bfa850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140bfa850(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacfc74) {
    FUN_144b3d300(&DAT_14cacfc74);
    if (DAT_14cacfc74 == -1) {
      _DAT_14cacfc6c = 0x1ffffffff;
      _Init_thread_footer(&DAT_14cacfc74);
    }
  }
  return &DAT_14cacfc6c;
}



// FUNCTION 140bfa8b6 FUN_140bfa8b6 body=605 status=ok
// SIG undefined FUN_140bfa8b6(void)

void FUN_140bfa8b6(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_2 = DAT_14cb76680;
  if ((param_3 != (longlong *)0x0) && (lVar5 = param_3[1], (longlong)(int)lVar5 != 0)) {
    lVar9 = *param_3;
    lVar8 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar9 + lVar8);
      iVar3 = *(int *)(param_2 + 0xf);
      *(uint *)(param_2 + 0xf) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0x7c) < iVar3 + 1U) {
        FUN_1447de67e(param_2 + 0xc,iVar3);
      }
      puVar7 = (undefined8 *)param_2[0xe];
      if ((undefined8 *)param_2[0xe] == (undefined8 *)0x0) {
        puVar7 = param_2 + 0xc;
      }
      *(undefined4 *)((longlong)puVar7 + (longlong)iVar3 * 4) = uVar2;
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar8);
  }
  if ((param_4 != (longlong *)0x0) && (lVar5 = param_4[1], (longlong)(int)lVar5 != 0)) {
    lVar9 = *param_4;
    lVar8 = 0;
    do {
      uVar2 = *(undefined4 *)(lVar9 + lVar8);
      iVar3 = *(int *)(param_2 + 0xf);
      *(uint *)(param_2 + 0xf) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0x7c) < iVar3 + 1U) {
        FUN_1447de67e(param_2 + 0xc,iVar3);
      }
      puVar7 = (undefined8 *)param_2[0xe];
      if ((undefined8 *)param_2[0xe] == (undefined8 *)0x0) {
        puVar7 = param_2 + 0xc;
      }
      *(undefined4 *)((longlong)puVar7 + (longlong)iVar3 * 4) = uVar2;
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar5 * 4 != lVar8);
  }
  if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x1a8) & 1) == 0) {
    uVar2 = *(undefined4 *)(param_5 + 0x140);
    puVar7 = param_2 + 0xc;
    iVar3 = *(int *)(param_2 + 0xf);
    *(uint *)(param_2 + 0xf) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0x7c) < iVar3 + 1U) {
      FUN_1447de67e(puVar7,iVar3);
    }
    puVar6 = (undefined8 *)param_2[0xe];
    if ((undefined8 *)param_2[0xe] == (undefined8 *)0x0) {
      puVar6 = puVar7;
    }
    *(undefined4 *)((longlong)puVar6 + (longlong)iVar3 * 4) = uVar2;
    iVar3 = *(int *)(param_5 + 0x144);
    if (iVar3 != 0) {
      iVar4 = *(int *)(param_2 + 0xf);
      *(uint *)(param_2 + 0xf) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0x7c) < iVar4 + 1U) {
        FUN_1447de67e(puVar7,iVar4);
      }
      if ((undefined8 *)param_2[0xe] != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)param_2[0xe];
      }
      *(int *)((longlong)puVar7 + (longlong)iVar4 * 4) = iVar3;
    }
  }
  iVar3 = *(int *)(param_5 + 0x148);
  if (iVar3 != 0) {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 0x1a8);
    if (((bVar1 & 2) == 0) && (((bVar1 & 1) == 0 || (iVar3 != *(int *)(param_5 + 0x140))))) {
      puVar7 = param_2 + 0xc;
      iVar4 = *(int *)(param_2 + 0xf);
      *(uint *)(param_2 + 0xf) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0x7c) < iVar4 + 1U) {
        FUN_1447de67e(puVar7,iVar4);
      }
      puVar6 = (undefined8 *)param_2[0xe];
      if ((undefined8 *)param_2[0xe] == (undefined8 *)0x0) {
        puVar6 = puVar7;
      }
      *(int *)((longlong)puVar6 + (longlong)iVar4 * 4) = iVar3;
      iVar3 = *(int *)(param_5 + 0x158);
      if ((longlong)iVar3 != 0) {
        lVar5 = *(longlong *)(param_5 + 0x150);
        lVar9 = 0;
        do {
          uVar2 = *(undefined4 *)(lVar5 + lVar9);
          iVar4 = *(int *)(param_2 + 0xf);
          *(uint *)(param_2 + 0xf) = iVar4 + 1U;
          if (*(uint *)((longlong)param_2 + 0x7c) < iVar4 + 1U) {
            FUN_1447de67e(puVar7,iVar4);
          }
          puVar6 = (undefined8 *)param_2[0xe];
          if ((undefined8 *)param_2[0xe] == (undefined8 *)0x0) {
            puVar6 = puVar7;
          }
          *(undefined4 *)((longlong)puVar6 + (longlong)iVar4 * 4) = uVar2;
          lVar9 = lVar9 + 4;
        } while ((longlong)iVar3 * 4 != lVar9);
      }
    }
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_5 + 0x160);
  }
  return;
}



// FUNCTION 140bfab14 FUN_140bfab14 body=2101 status=ok
// SIG undefined FUN_140bfab14(void)

ulonglong FUN_140bfab14(double param_1,longlong *param_2,double *param_3,double *param_4,
                       int *param_5,float param_6)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  float fVar19;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_268 [40];
  undefined8 local_240;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined8 *local_200;
  int local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if (*(int *)((longlong)param_1 + 0x558) != 0) {
    iVar1 = *param_5;
    if (iVar1 == 3) {
      local_228._8_4_ = in_XMM0_Dc;
      local_228._0_8_ = (double)(float)param_5[2];
      local_228._12_4_ = in_XMM0_Dd;
      local_218._8_8_ = 0;
      local_218._0_8_ = (double)(float)param_5[1];
      local_238._8_8_ = 0;
      local_238._0_8_ = (double)(float)param_5[1];
    }
    else {
      if (iVar1 == 2) {
        dVar23 = (double)(float)param_5[1];
        local_238._8_4_ = in_XMM0_Dc;
        local_238._0_8_ = dVar23;
        local_238._12_4_ = in_XMM0_Dd;
        local_218._8_4_ = in_XMM0_Dc;
        local_218._0_8_ = dVar23;
        local_218._12_4_ = in_XMM0_Dd;
      }
      else {
        if (iVar1 == 1) {
          local_228._8_4_ = in_XMM0_Dc;
          local_228._0_8_ = (double)(float)param_5[3];
          local_228._12_4_ = in_XMM0_Dd;
          local_238._8_8_ = 0;
          local_238._0_8_ = (double)(float)param_5[2];
          local_218._8_8_ = 0;
          local_218._0_8_ = (double)(float)param_5[1];
          goto LAB_140bfacf4;
        }
        local_218._8_8_ = 0;
        local_218._0_8_ = DAT_14c8464e0;
        local_238._8_8_ = 0;
        local_238._0_8_ = DAT_14c8464e8;
        in_XMM0_Dc = 0;
        in_XMM0_Dd = 0;
        dVar23 = DAT_14c8464f0;
      }
      local_228._8_4_ = in_XMM0_Dc;
      local_228._0_8_ = dVar23;
      local_228._12_4_ = in_XMM0_Dd;
    }
LAB_140bfacf4:
    dVar8 = local_218._0_8_;
    local_1b8 = -dVar8;
    dVar9 = local_238._0_8_;
    dStack_1b0 = -dVar9;
    dVar10 = local_228._0_8_;
    local_1a8 = -dVar10;
    uStack_1a0 = local_218._0_4_;
    uStack_19c = local_218._4_4_;
    local_198 = local_238._0_4_;
    uStack_194 = local_238._4_4_;
    uStack_190 = local_228._0_4_;
    uStack_18c = local_228._4_4_;
    local_188 = CONCAT71(local_188._1_7_,1);
    dVar23 = *param_4;
    dVar25 = param_4[1];
    dVar24 = dVar25 + dVar25;
    dVar26 = param_4[2];
    dVar3 = dVar26 + dVar26;
    dVar22 = dVar23 * (dVar23 + dVar23);
    dVar27 = param_4[3];
    local_148 = (dVar23 + dVar23) * dVar27;
    local_178 = 1.0 - (dVar25 * dVar24 + dVar26 * dVar3);
    local_158 = dVar23 * dVar24 - dVar3 * dVar27;
    local_138 = dVar23 * dVar3 + dVar24 * dVar27;
    local_118 = *param_3;
    local_170 = dVar3 * dVar27 + dVar23 * dVar24;
    local_150 = 1.0 - (dVar26 * dVar3 + dVar22);
    local_130 = dVar25 * dVar3 - local_148;
    local_110 = param_3[1];
    local_168 = dVar23 * dVar3 - dVar24 * dVar27;
    local_148 = local_148 + dVar25 * dVar3;
    local_128 = 1.0 - (dVar25 * dVar24 + dVar22);
    local_108 = param_3[2];
    local_160 = 0;
    local_140 = 0;
    local_120 = 0;
    local_100 = 0x3ff0000000000000;
    FUN_144b12ece(&local_1b8,&local_1f0);
    local_188 = local_1c0;
    local_198 = local_1d0;
    uStack_194 = uStack_1cc;
    uStack_190 = uStack_1c8;
    uStack_18c = uStack_1c4;
    local_1a8 = local_1e0;
    uStack_1a0 = (undefined4)uStack_1d8;
    uStack_19c = uStack_1d8._4_4_;
    local_1b8 = local_1f0;
    dStack_1b0 = dStack_1e8;
    local_240 = 0;
    local_200 = (undefined8 *)0x0;
    local_1f8 = 0;
    if (0.0 < param_6) {
      lVar12 = FUN_1447210f0(param_1);
      if (((lVar12 == 0) || (plVar17 = *(longlong **)(lVar12 + 0x938), plVar17 == (longlong *)0x0))
         || (cVar11 = (**(code **)(*plVar17 + 0x28))(plVar17,param_6,1), cVar11 == '\0')) {
        local_240 = 0;
      }
      else {
        plVar17 = *(longlong **)(lVar12 + 0x938);
        if ((param_1 == 0.0) || (DAT_14c950c29 == '\0')) {
          if (param_1 != 0.0) goto LAB_140bfaf46;
          local_170 = 0.0;
        }
        else {
          FUN_1456cec3c(param_1);
LAB_140bfaf46:
          local_170 = (double)((longlong)param_1 + 0x3a0);
        }
        local_178 = param_1;
        local_240 = (**(code **)(*plVar17 + 0x20))(plVar17,param_6,&local_178,&local_200);
      }
    }
    if ((longlong)*(int *)((longlong)param_1 + 0x558) != 0) {
      plVar17 = *(longlong **)((longlong)param_1 + 0x550);
      plVar18 = plVar17 + *(int *)((longlong)param_1 + 0x558);
      uVar14 = 0;
      do {
        lVar12 = *plVar17;
        if (lVar12 != 0) {
          fVar19 = (float)FUN_1488e1afe(lVar12);
          uVar20 = (undefined4)*(undefined8 *)(lVar12 + 0x3f8);
          uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x3f8) >> 0x20);
          dVar23 = *(double *)(lVar12 + 0x400);
          dVar25 = *(double *)(lVar12 + 0x408);
          if (((char)local_240 != '\0') && ((longlong)local_1f8 != 0)) {
            lVar15 = (longlong)local_1f8 * 0x88;
            puVar13 = local_200;
            do {
              puVar16 = puVar13;
              if ((*(byte *)(puVar13 + 0x10) & 2) == 0) {
                puVar16 = (undefined8 *)*puVar13;
              }
              if ((*(int *)(puVar16 + 7) == *(int *)(lVar12 + 0x58)) &&
                 (*(char *)((longlong)puVar16 + 0x3c) == *(char *)(lVar12 + 0x118))) {
                uVar20 = (undefined4)puVar16[0xb];
                uVar21 = (undefined4)((ulonglong)puVar16[0xb] >> 0x20);
                dVar23 = (double)puVar16[0xc];
                dVar25 = (double)puVar16[0xd];
                break;
              }
              puVar13 = puVar13 + 0x11;
              lVar15 = lVar15 + -0x88;
            } while (lVar15 != 0);
          }
          dVar26 = (double)fVar19;
          if (((((local_1b8 <= (double)CONCAT44(uVar21,uVar20) + dVar26) &&
                (dVar27 = (double)CONCAT44(uVar21,uVar20) - dVar26,
                dVar27 < (double)CONCAT44(uStack_19c,uStack_1a0) ||
                dVar27 == (double)CONCAT44(uStack_19c,uStack_1a0))) &&
               (dStack_1b0 <= dVar23 + dVar26)) &&
              ((dVar23 - dVar26 < (double)CONCAT44(uStack_194,local_198) ||
                dVar23 - dVar26 == (double)CONCAT44(uStack_194,local_198) &&
               (local_1a8 <= dVar25 + dVar26)))) &&
             (dVar25 - dVar26 < (double)CONCAT44(uStack_18c,uStack_190) ||
              dVar25 - dVar26 == (double)CONCAT44(uStack_18c,uStack_190))) {
            iVar1 = *param_5;
            if (iVar1 == 2) {
              dVar26 = *param_3 - (double)CONCAT44(uVar21,uVar20);
              if ((float)((param_3[2] - dVar25) * (param_3[2] - dVar25) +
                         dVar26 * dVar26 + (param_3[1] - dVar23) * (param_3[1] - dVar23)) <=
                  (fVar19 + (float)param_5[1]) * (fVar19 + (float)param_5[1])) {
LAB_140bfb2a7:
                iVar1 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar1 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                  FUN_1414fa4c8(param_2,iVar1);
                }
                lVar15 = *param_2;
                lVar7 = (longlong)iVar1 * 0x48;
                puVar13 = (undefined8 *)(lVar15 + 0x30 + lVar7);
                *puVar13 = 0;
                puVar13[1] = 0;
                puVar13 = (undefined8 *)(lVar15 + 0x20 + lVar7);
                *puVar13 = 0;
                puVar13[1] = 0;
                puVar13 = (undefined8 *)(lVar15 + 0x10 + lVar7);
                *puVar13 = 0;
                puVar13[1] = 0;
                *(undefined8 *)(lVar15 + lVar7) = 0;
                ((undefined8 *)(lVar15 + lVar7))[1] = 0;
                *(undefined8 *)(lVar15 + 0x40 + lVar7) = 0;
                thunk_FUN_140871de8(*param_2 + lVar7,param_1);
                *(undefined4 *)(*param_2 + 0x28 + lVar7) = *(undefined4 *)(lVar12 + 0x58);
                uVar14 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
              }
            }
            else if ((iVar1 == 1) || (iVar1 == 3)) {
              local_178 = -dVar8;
              local_170 = -dVar9;
              local_168 = -dVar10;
              local_160 = local_218._0_8_;
              local_158 = (double)local_238._0_8_;
              local_150 = (double)local_228._0_8_;
              local_148 = (double)CONCAT71(local_148._1_7_,1);
              dVar25 = dVar25 - param_3[2];
              dVar23 = dVar23 - param_3[1];
              dVar2 = (double)CONCAT44(uVar21,uVar20) - *param_3;
              dVar27 = param_4[2];
              dVar3 = *param_4;
              dVar22 = param_4[1];
              dVar5 = dVar2 * dVar22 - dVar3 * dVar23;
              dVar6 = dVar25 * dVar3 - dVar27 * dVar2;
              dVar4 = dVar23 * dVar27 - dVar22 * dVar25;
              dVar5 = dVar5 + dVar5;
              dVar6 = dVar6 + dVar6;
              dVar4 = dVar4 + dVar4;
              dVar24 = param_4[3];
              local_1e0 = (dVar22 * dVar4 - dVar3 * dVar6) + dVar24 * dVar5 + dVar25;
              dStack_1e8 = (dVar3 * dVar5 - dVar4 * dVar27) + dVar24 * dVar6 + dVar23;
              local_1f0 = (dVar6 * dVar27 - dVar5 * dVar22) + dVar4 * dVar24 + dVar2;
              uStack_1d8 = dVar26;
              cVar11 = FUN_147dbab2a(&local_1f0,SUB84(dVar26 * dVar26,0),&local_178);
              if (cVar11 != '\0') goto LAB_140bfb2a7;
            }
          }
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar18);
      goto LAB_140bfaba6;
    }
  }
  uVar14 = 0;
LAB_140bfaba6:
  if ((local_f0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffff01;
}



// FUNCTION 140bfb34a FUN_140bfb34a body=372 status=ok
// SIG undefined FUN_140bfb34a(void)

void FUN_140bfb34a(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x118;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140bfb3d2;
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
LAB_140bfb3d2:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x118)) {
    uVar7 = uVar5 / 0x118 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x118,8);
  return;
}



// FUNCTION 140bfb4c0 FUN_140bfb4c0 body=310 status=ok
// SIG undefined FUN_140bfb4c0(void)

void FUN_140bfb4c0(byte *param_1,void *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  memcpy(param_1 + 8,param_2,0x100);
  lVar2 = FUN_14485cccc(param_1 + 0xc0);
  if (lVar2 != 0) {
    if (DAT_14cb56270 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148630fef;
      local_50 = FUN_1464b6a91;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar3 = (longlong *)FUN_144718840(lVar2,DAT_14cb56270);
    if (plVar3 != (longlong *)0x0) {
      bVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
      bVar1 = (bVar1 ^ 1) << 3;
      goto LAB_140bfb528;
    }
  }
  bVar1 = 0;
LAB_140bfb528:
  *param_1 = *param_1 & 0xf7 | bVar1;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bfb5f8 FUN_140bfb5f8 body=1015 status=ok
// SIG undefined FUN_140bfb5f8(void)

void FUN_140bfb5f8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  int local_a8;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (100 < *(int *)(param_1 + 0x10)) {
    plVar1 = (longlong *)(param_1 + 8);
    local_a8 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x28);
    FUN_140bfba3e(&local_68,plVar1,param_2);
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    FUN_140bfb9f0(&local_78,*(undefined4 *)(param_1 + 0x10),1);
    iVar3 = *(int *)(param_1 + 0x20);
    iVar6 = (int)uStack_80;
    uVar7 = iVar3 - (int)uStack_80;
    if ((int)uStack_80 < iVar3) {
      uStack_80 = CONCAT44(uStack_80._4_4_,iVar3);
      if ((uint)(uStack_80._4_4_ - iVar6) < uVar7) {
        FUN_14475e4ac(&local_88);
      }
    }
    else {
      if (iVar3 < 0) goto LAB_140bfb9d3;
      if (iVar3 < (int)uStack_80) {
        uStack_80 = CONCAT44(uStack_80._4_4_,iVar3);
        FUN_1401fef06(&local_88);
      }
    }
    iVar3 = *(int *)(param_1 + 0x10);
    iVar6 = (int)uStack_90;
    uVar7 = iVar3 - (int)uStack_90;
    if ((int)uStack_90 < iVar3) {
      uStack_90 = CONCAT44(uStack_90._4_4_,iVar3);
      if ((uint)(uStack_90._4_4_ - iVar6) < uVar7) {
        FUN_1446f48e2(&local_98);
      }
    }
    else {
      if (iVar3 < 0) {
LAB_140bfb9d3:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4();
      }
      if (iVar3 < (int)uStack_90) {
        uStack_90 = CONCAT44(uStack_90._4_4_,iVar3);
        FUN_14479f406(&local_98);
      }
    }
    if (local_60 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_60 + 1);
    }
    plVar2 = (longlong *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) <= local_60) {
      FUN_14481578e(plVar2);
    }
    if (local_60 == 0) {
      uVar12 = 0;
    }
    else {
      plVar9 = local_68 + (longlong)local_60 * 2;
      lVar13 = 0;
      plVar10 = local_68;
      do {
        iVar3 = *(int *)(param_1 + 0x80);
        uVar7 = iVar3 + 1;
        *(uint *)(param_1 + 0x80) = uVar7;
        if (*(uint *)(param_1 + 0x84) < uVar7) {
          FUN_1446f48e2(plVar2);
        }
        *(int *)(*plVar2 + (longlong)iVar3 * 4) = (int)lVar13;
        lVar5 = plVar10[1];
        if ((longlong)(int)lVar5 != 0) {
          lVar4 = *plVar10;
          lVar13 = (longlong)(int)lVar13;
          lVar8 = 0;
          do {
            lVar11 = (longlong)*(int *)(lVar4 + lVar8);
            *(undefined8 *)(local_78 + lVar13 * 8) = *(undefined8 *)(*plVar1 + lVar11 * 8);
            *(undefined4 *)(local_88 + lVar13 * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar11 * 4);
            *(int *)(local_98 + lVar11 * 4) = (int)lVar13;
            lVar13 = lVar13 + 1;
            lVar8 = lVar8 + 4;
          } while ((longlong)(int)lVar5 * 4 != lVar8);
        }
        uVar12 = (undefined4)lVar13;
        plVar10 = plVar10 + 2;
      } while (plVar10 != plVar9);
    }
    iVar3 = *(int *)(param_1 + 0x80);
    *(uint *)(param_1 + 0x80) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x84) < iVar3 + 1U) {
      FUN_1446f48e2(plVar2,iVar3);
    }
    *(undefined4 *)(*plVar2 + (longlong)iVar3 * 4) = uVar12;
    if (plVar1 != &local_78) {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 8) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0x14) = uStack_70._4_4_;
      uStack_70 = 0;
    }
    if ((longlong *)(param_1 + 0x18) != &local_88) {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x18) = local_88;
      local_88 = 0;
      *(int *)(param_1 + 0x20) = (int)uStack_80;
      *(int *)(param_1 + 0x24) = uStack_80._4_4_;
      uStack_80 = 0;
    }
    if (*(int *)(param_1 + 0x40) == (int)uStack_90) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_140393c76(&local_58,*(int *)(param_1 + 0x40),1);
      if (0 < (int)uStack_90) {
        lVar13 = 0;
        do {
          *(undefined1 *)(local_58 + *(int *)(local_98 + lVar13 * 4)) =
               *(undefined1 *)(*(longlong *)(param_1 + 0x38) + lVar13);
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)uStack_90);
      }
      if ((longlong *)(param_1 + 0x38) == &local_58) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x38) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x38) = local_58;
        *(undefined4 *)(param_1 + 0x40) = (undefined4)uStack_50;
        *(undefined4 *)(param_1 + 0x44) = uStack_50._4_4_;
      }
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_144716727(local_68,local_60);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bfb9f0 FUN_140bfb9f0 body=77 status=ok
// SIG undefined FUN_140bfb9f0(void)

void FUN_140bfb9f0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1402e69d2();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146d8cd48();
      return;
    }
  }
  return;
}



// FUNCTION 140bfba3e FUN_140bfba3e body=1984 status=ok
// SIG undefined FUN_140bfba3e(void)

longlong *
FUN_140bfba3e(longlong *param_1,longlong *param_2,longlong param_3,int param_4,int param_5)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  undefined1 *puVar12;
  int iVar13;
  int *piVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  undefined1 auStack_148 [32];
  longlong local_128;
  int *local_120;
  int *local_118;
  longlong *local_110;
  ulonglong local_108;
  longlong local_100;
  longlong local_f8;
  undefined1 local_f0 [4];
  uint local_ec;
  uint *local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_1 = 0;
  param_1[1] = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_110 = param_1;
  local_100 = param_3;
  FUN_140bfc3e2(&local_c8,param_5 - param_4);
  FUN_140bfc48e(&local_d8,(int)param_2[1]);
  lVar8 = (longlong)param_4;
  lVar19 = lVar8 * -0x68 + local_c8;
  local_128 = lVar19;
  if (0 < (int)param_2[1]) {
    lVar17 = 0;
    lVar18 = 0;
    do {
      lVar10 = *param_2;
      *(undefined4 *)(local_d8 + lVar17) = *(undefined4 *)(lVar10 + lVar18 * 8);
      *(undefined4 *)(local_d8 + 4 + lVar17) = *(undefined4 *)(lVar10 + 4 + lVar18 * 8);
      lVar9 = (longlong)*(int *)(lVar10 + lVar18 * 8) * 0x68;
      lVar15 = lVar19 + lVar9;
      iVar3 = *(int *)(lVar19 + 0x28 + lVar9);
      *(uint *)(lVar19 + 0x28 + lVar9) = iVar3 + 1U;
      if (*(uint *)(lVar19 + 0x2c + lVar9) < iVar3 + 1U) {
        FUN_1400cc390(lVar15,iVar3);
        lVar19 = local_128;
      }
      lVar9 = *(longlong *)(lVar15 + 0x20);
      if (*(longlong *)(lVar15 + 0x20) == 0) {
        lVar9 = lVar15;
      }
      *(int *)(lVar9 + (longlong)iVar3 * 4) = (int)lVar18;
      lVar10 = (longlong)*(int *)(lVar10 + 4 + lVar18 * 8) * 0x68;
      lVar15 = lVar19 + lVar10;
      iVar3 = *(int *)(lVar19 + 0x28 + lVar10);
      *(uint *)(lVar19 + 0x28 + lVar10) = iVar3 + 1U;
      if (*(uint *)(lVar19 + 0x2c + lVar10) < iVar3 + 1U) {
        FUN_1400cc390(lVar15,iVar3);
        lVar19 = local_128;
      }
      lVar10 = *(longlong *)(lVar15 + 0x20);
      if (*(longlong *)(lVar15 + 0x20) == 0) {
        lVar10 = lVar15;
      }
      *(int *)(lVar10 + (longlong)iVar3 * 4) = (int)lVar18;
      lVar18 = lVar18 + 1;
      lVar17 = lVar17 + 0xc;
    } while (lVar18 < (int)param_2[1]);
  }
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0x80;
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_e8 = (uint *)0x0;
  uStack_e0 = 0;
  if (param_4 < param_5) {
    local_108 = 0xffffffff;
    do {
      fVar2 = *(float *)(*(longlong *)(local_100 + 0x90) + lVar8 * 4);
      uVar16 = (uint)lVar8;
      if ((int)uStack_b0 != local_84) {
        puVar12 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar12 = local_80;
        }
        for (iVar3 = *(int *)(puVar12 + (ulonglong)(local_70 - 1U & uVar16) * 4); iVar3 != -1;
            iVar3 = *(int *)(local_b8 + (longlong)iVar3 * 0xc + 4)) {
          if (*(uint *)(local_b8 + (longlong)iVar3 * 0xc) == uVar16) goto LAB_140bfbc49;
        }
      }
      if ((fVar2 != 0.0) || (NAN(fVar2))) {
        uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
        if (uStack_e0._4_4_ == 0) {
          FUN_1446f48e2(&local_e8,0);
          lVar19 = local_128;
        }
        *local_e8 = uVar16;
        uVar6 = uStack_e0;
        while (bVar5 = (int)uStack_e0 != 0, uStack_e0 = uVar6, bVar5) {
          iVar3 = (int)uStack_e0 + -1;
          local_ec = local_e8[iVar3];
          lVar17 = (longlong)(int)local_ec;
          uStack_e0._4_4_ = (uint)(uVar6 >> 0x20);
          local_f8 = lVar8;
          if (SBORROW4(0,(int)uStack_e0)) {
            uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar3);
            if (uStack_e0._4_4_ != 0x7fffffff) {
              FUN_1446f48e2(&local_e8);
            }
            memset(local_e8 + -0x80000000,0,0xfffffffffffffffc);
            lVar19 = local_128;
          }
          else {
            if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar3);
            }
            uStack_e0 = CONCAT44(uStack_e0._4_4_,iVar3);
          }
          piVar22 = (int *)(lVar17 * 0x68 + lVar19);
          FUN_1447cbafe(&local_b8,local_f0,&local_ec,0);
          piVar23 = *(int **)(piVar22 + 8);
          if (*(int **)(piVar22 + 8) == (int *)0x0) {
            piVar23 = piVar22;
          }
          lVar19 = local_128;
          if ((longlong)piVar22[10] != 0) {
            piVar20 = piVar23 + piVar22[10];
            piVar21 = piVar22 + 0xe;
            local_120 = piVar21;
            local_118 = piVar20;
            do {
              iVar3 = *piVar23;
              if (*(int *)(local_d8 + 8 + (longlong)iVar3 * 0xc) < 0) {
                puVar1 = (uint *)(local_d8 + (longlong)iVar3 * 0xc);
                uVar16 = 0xffffffff;
                if (*puVar1 == local_ec) {
                  uVar16 = puVar1[1];
                }
                if (puVar1[1] == local_ec) {
                  uVar16 = *puVar1;
                }
                piVar11 = *(int **)(piVar22 + 0x16);
                piVar14 = piVar11;
                if (piVar11 == (int *)0x0) {
                  piVar14 = piVar21;
                }
                iVar4 = piVar22[0x18];
                lVar8 = (longlong)iVar4;
                if (lVar8 != 0) {
                  uVar7 = piVar22[0xc];
                  do {
                    lVar17 = 0;
                    while (*(uint *)((longlong)piVar14 + lVar17) != uVar7) {
                      lVar17 = lVar17 + 4;
                      if (lVar8 * 4 - lVar17 == 0) goto LAB_140bfbd8f;
                    }
                    uVar7 = uVar7 + 1;
                    piVar22[0xc] = uVar7;
                  } while( true );
                }
                uVar7 = piVar22[0xc];
LAB_140bfbd8f:
                lVar17 = (longlong)(int)uVar16;
                if ((uVar16 != 0xffffffff) &&
                   ((fVar2 = *(float *)(*(longlong *)(local_100 + 0x90) + lVar17 * 4), fVar2 != 0.0
                    || (NAN(fVar2))))) {
                  lVar18 = lVar19 + lVar17 * 0x68;
                  lVar15 = *(longlong *)(lVar18 + 0x58);
                  if (*(longlong *)(lVar18 + 0x58) == 0) {
                    lVar15 = lVar18 + 0x38;
                  }
                  while( true ) {
                    if (*(int *)(lVar18 + 0x60) != 0) {
                      lVar19 = 0;
                      do {
                        if (*(uint *)(lVar15 + lVar19) == uVar7) goto LAB_140bfbe0d;
                        lVar19 = lVar19 + 4;
                      } while ((longlong)*(int *)(lVar18 + 0x60) << 2 != lVar19);
                    }
                    lVar19 = local_128;
                    piVar20 = local_118;
                    piVar21 = local_120;
                    if (iVar4 == 0) break;
                    lVar10 = 0;
                    while (*(uint *)((longlong)piVar14 + lVar10) != uVar7) {
                      lVar10 = lVar10 + 4;
                      if (lVar8 * 4 - lVar10 == 0) goto LAB_140bfbe20;
                    }
LAB_140bfbe0d:
                    uVar7 = uVar7 + 1;
                  }
                }
LAB_140bfbe20:
                iVar13 = (int)local_108;
                local_108 = local_108 & 0xffffffff;
                if (iVar13 <= (int)uVar7) {
                  local_108 = (ulonglong)uVar7;
                }
                piVar22[0x18] = iVar4 + 1U;
                if ((uint)piVar22[0x19] < iVar4 + 1U) {
                  FUN_1400cc390(piVar21,iVar4);
                  piVar11 = *(int **)(piVar22 + 0x16);
                  lVar19 = local_128;
                  piVar20 = local_118;
                  piVar21 = local_120;
                }
                if (piVar11 == (int *)0x0) {
                  piVar11 = piVar21;
                }
                piVar11[lVar8] = uVar7;
                puVar1[2] = uVar7;
                if (uVar7 == piVar22[0xc]) {
                  piVar22[0xc] = uVar7 + 1;
                }
                if ((int)local_110[1] <= (int)local_108) {
                  FUN_140bfc200(local_110,(int)local_108 + 1);
                  lVar19 = local_128;
                  piVar20 = local_118;
                  piVar21 = local_120;
                }
                lVar8 = *local_110;
                lVar18 = (longlong)(int)puVar1[2] * 0x10;
                iVar4 = *(int *)(lVar8 + 8 + lVar18);
                *(uint *)(lVar8 + 8 + lVar18) = iVar4 + 1U;
                if (*(uint *)(lVar8 + 0xc + lVar18) < iVar4 + 1U) {
                  FUN_1446f48e2((longlong *)(lVar8 + lVar18),iVar4);
                  lVar19 = local_128;
                  piVar20 = local_118;
                  piVar21 = local_120;
                }
                *(int *)(*(longlong *)(lVar8 + lVar18) + (longlong)iVar4 * 4) = iVar3;
                if ((uVar16 != 0xffffffff) &&
                   ((fVar2 = *(float *)(*(longlong *)(local_100 + 0x90) + lVar17 * 4), fVar2 != 0.0
                    || (NAN(fVar2))))) {
                  lVar8 = lVar19 + lVar17 * 0x68;
                  iVar3 = *(int *)(lVar8 + 0x60);
                  uVar7 = iVar3 + 1;
                  *(uint *)(lVar8 + 0x60) = uVar7;
                  if (*(uint *)(lVar8 + 100) < uVar7) {
                    FUN_1400cc390(lVar8 + 0x38);
                    lVar19 = local_128;
                    piVar20 = local_118;
                    piVar21 = local_120;
                  }
                  uVar6 = uStack_e0;
                  lVar17 = *(longlong *)(lVar8 + 0x58);
                  if (*(longlong *)(lVar8 + 0x58) == 0) {
                    lVar17 = lVar8 + 0x38;
                  }
                  *(uint *)(lVar17 + (longlong)iVar3 * 4) = puVar1[2];
                  if ((int)uStack_b0 != local_84) {
                    puVar12 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar12 = local_80;
                    }
                    for (iVar3 = *(int *)(puVar12 + (ulonglong)(local_70 - 1U & uVar16) * 4);
                        iVar3 != -1; iVar3 = *(int *)(local_b8 + (longlong)iVar3 * 0xc + 4)) {
                      if (*(uint *)(local_b8 + (longlong)iVar3 * 0xc) == uVar16) goto LAB_140bfbd1b;
                    }
                  }
                  lVar8 = (longlong)(int)uStack_e0;
                  uVar7 = (int)uStack_e0 + 1;
                  uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar7);
                  if (uStack_e0._4_4_ < uVar7) {
                    FUN_1446f48e2(&local_e8,uVar6 & 0xffffffff);
                    lVar19 = local_128;
                    piVar20 = local_118;
                    piVar21 = local_120;
                  }
                  local_e8[lVar8] = uVar16;
                }
              }
LAB_140bfbd1b:
              piVar23 = piVar23 + 1;
            } while (piVar23 != piVar20);
          }
          lVar8 = local_f8;
          uVar6 = uStack_e0;
        }
      }
LAB_140bfbc49:
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 != param_5);
    if (local_e8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar6 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar6 != 0) {
    FUN_1447a08a2(&local_b8,0);
  }
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_140bfc290(local_c8,uStack_c0 & 0xffffffff);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return local_110;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bfc200 FUN_140bfc200 body=143 status=ok
// SIG undefined FUN_140bfc200(void)

void FUN_140bfc200(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140bfc2d4(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1467b0fc0(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1467b1020(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140bfc290 FUN_140bfc290 body=67 status=ok
// SIG undefined FUN_140bfc290(void)

void FUN_140bfc290(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x58);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-7] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140bfc2d4 FUN_140bfc2d4 body=269 status=ok
// SIG undefined FUN_140bfc2d4(void)

void FUN_140bfc2d4(longlong param_1,int param_2)

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



// FUNCTION 140bfc3e2 FUN_140bfc3e2 body=170 status=ok
// SIG undefined FUN_140bfc3e2(void)

void FUN_140bfc3e2(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140bfc514(param_1,iVar1);
    }
    if (uVar3 != 0) {
      lVar2 = (longlong)iVar1 * 0x68 + *param_1 + 100;
      do {
        *(undefined8 *)(lVar2 + -0x44) = 0;
        *(undefined8 *)(lVar2 + -0x3c) = 0x800000000;
        *(undefined4 *)(lVar2 + -0x34) = 0;
        *(undefined8 *)(lVar2 + -0xc) = 0;
        *(undefined8 *)(lVar2 + -4) = 0x800000000;
        lVar2 = lVar2 + 0x68;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146d9ee9a(param_1,param_2,iVar1 - param_2);
    FUN_146d9eef4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140bfc48e FUN_140bfc48e body=132 status=ok
// SIG undefined FUN_140bfc48e(void)

void FUN_140bfc48e(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_140bfc682(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0xc + *param_1),
             (int)CONCAT71((uint7)(uint3)(uVar2 >> 8),0xff),(ulonglong)uVar2 * 0xc);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_146d9ef9a(param_1);
  return;
}



// FUNCTION 140bfc514 FUN_140bfc514 body=366 status=ok
// SIG undefined FUN_140bfc514(void)

void FUN_140bfc514(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x68;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140bfc599;
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
LAB_140bfc599:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x68)) {
    uVar7 = uVar5 / 0x68 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x68,8);
  return;
}



// FUNCTION 140bfc682 FUN_140bfc682 body=370 status=ok
// SIG undefined FUN_140bfc682(void)

void FUN_140bfc682(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140bfc70b;
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
LAB_140bfc70b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 140bfc7f4 FUN_140bfc7f4 body=227 status=ok
// SIG undefined FUN_140bfc7f4(void)

void FUN_140bfc7f4(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140bfc8e6();
  if (*(longlong *)(param_2 + 0x68) == DAT_14cbc18c0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  if (*(longlong *)(param_2 + 0x68) == DAT_14cbc18c8) {
    *(undefined4 *)(param_1 + 0x2278) = *(undefined4 *)(param_2 + 0x84);
    if ((*(longlong *)(param_1 + 0x2280) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x2280) + 0x459) == '\0')) {
      cVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x58))(param_1 + 0x28);
      if (cVar1 != '\0') {
        local_1c = 0;
        local_30 = DAT_14cbc18d8;
        local_28 = 0xffffffff;
        local_40 = DAT_14cbc18c0;
        local_38 = 0xffffffff;
        FUN_140f8b8f2(param_1 + 0x140);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bfc8e6 FUN_140bfc8e6 body=127 status=ok
// SIG undefined FUN_140bfc8e6(void)

void FUN_140bfc8e6(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_140bfc966();
  if ((*(byte *)(param_1 + 0x19a1) & 4) != 0) {
    lVar2 = FUN_1447210f0(param_1 + -0x398);
    if (((lVar2 != 0) &&
        (((bVar1 = *(byte *)(lVar2 + 0x152), bVar1 == 1 ||
          ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
         (*(longlong *)(param_2 + 0x68) == DAT_14cbc2848)))) &&
       (*(longlong *)(param_2 + 0x78) == DAT_14cbc2850)) {
      FUN_14081ae08(param_1 + -0x398,1);
      return;
    }
  }
  return;
}



// FUNCTION 140bfc966 FUN_140bfc966 body=230 status=ok
// SIG undefined FUN_140bfc966(void)

void FUN_140bfc966(longlong param_1,longlong param_2,undefined4 param_3)

{
  float fVar1;
  longlong *plVar3;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [36];
  undefined1 local_54 [12];
  undefined8 local_48;
  ulonglong local_40;
  float fVar2;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + -0x220) == '\x03') {
    fVar1 = *(float *)(param_2 + 0x84);
    fVar2 = *(float *)(param_2 + 0x84);
    local_48 = *(undefined8 *)(param_2 + 0x68);
    FUN_1401533ba(local_54,&local_48,1);
    FUN_140bfca4e(param_1 + 0x888,local_54,param_2 + 0x78,
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),fVar2 <= 0.0 && fVar1 != 0.0) &
                  0xffffffff);
  }
  plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3,param_2,param_3);
  }
  if (*(longlong *)(param_1 + 0x968) != 0) {
    FUN_140bfd54c(*(longlong *)(param_1 + 0x968),param_2,param_3);
  }
  FUN_1409d1ca6(param_1 + 0x2a0,param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bfca4e FUN_140bfca4e body=699 status=ok
// SIG undefined FUN_140bfca4e(void)

void FUN_140bfca4e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined1 auStack_178 [40];
  undefined8 *local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  int local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  int local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  longlong *local_d8;
  longlong local_c8 [4];
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined6 local_9e;
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined2 uStack_90;
  undefined1 local_80 [16];
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(char *)((longlong)param_1 + 0xd) == '\0') goto LAB_140bfcc8f;
  local_f0 = *(undefined4 *)(param_1 + 1);
  local_f8 = *param_1;
  local_100 = *(undefined4 *)(param_1 + 4);
  local_108 = param_1[3];
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (iVar1 == 0) goto LAB_140bfcc8f;
  uVar3 = param_1[5];
  if (*(int *)((longlong)param_1 + 0x7c) == 0) {
LAB_140bfccc4:
    uVar5 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xf);
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         ((((int)plVar7[2] != *(int *)((longlong)param_1 + 0x7c) ||
           ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) || ((longlong *)*plVar7 == (longlong *)0x0))
         )) goto LAB_140bfccc4;
      uVar5 = (**(code **)(*(longlong *)*plVar7 + 0x180))();
    }
  }
  plVar7 = (longlong *)FUN_140502abf(uVar5);
  if ((plVar7 != (longlong *)0x0) &&
     (cVar4 = (**(code **)(*plVar7 + 0xd8))(plVar7,&local_f8),
     cVar4 == *(char *)((longlong)param_1 + 0xe))) {
    FUN_144928b90(local_80,1);
    uStack_e0 = DAT_14cb7bba0;
    uStack_e4 = DAT_14cb7bb98._4_4_;
    local_e8 = (int)DAT_14cb7bb98;
    local_150 = param_3;
    FUN_144928d62(local_70,1,&local_e8);
    local_118 = local_f8;
    local_110 = local_f0;
    FUN_14013eb2c(local_80);
    local_120 = local_100;
    local_128 = local_108;
    FUN_14013eb54(local_80);
    local_134 = iVar1;
    local_130 = uVar3;
    FUN_144928d62(local_70,4);
    local_138 = *(undefined4 *)(param_2 + 1);
    local_140 = *param_2;
    FUN_144928d62(local_70,5);
    local_144 = 0xc61c4000;
    local_e8 = 0;
    uStack_e4 = 0;
    local_d8 = (longlong *)0x0;
    puVar6 = &local_144;
    if (param_4 == '\0') {
      puVar6 = (undefined4 *)0x0;
    }
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    local_9e = 0;
    uStack_98 = SUB82(puVar6,0);
    uStack_96 = (undefined6)((ulonglong)puVar6 >> 0x10);
    (**(code **)(*plVar7 + 0xa8))(plVar7,local_80,*local_150,&local_e8);
    if (CONCAT44(uStack_e4,local_e8) != 0) {
      plVar7 = local_d8;
      if (local_d8 == (longlong *)0x0) {
        plVar7 = local_c8;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140bfcc8f:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bfcd0a FUN_140bfcd0a body=206 status=ok
// SIG undefined FUN_140bfcd0a(void)

void FUN_140bfcd0a(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined8 local_94;
  undefined4 local_8c;
  longlong local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  undefined8 local_48;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  undefined2 uStack_38;
  undefined8 uStack_36;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98[0] = 0;
  local_94 = 0;
  local_8c = 0;
  FUN_144976b9c(local_98,param_3);
  if (param_4 == 0) {
    local_88[0] = 0;
    local_78 = (longlong *)0x0;
    local_48 = 0;
    uStack_40 = 0;
    uStack_3e = 0;
    uStack_38 = 0;
    uStack_36 = 0;
    FUN_140bfcdda(param_1,param_2,local_98,local_88);
    if (local_88[0] != 0) {
      plVar1 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar1 = local_68;
      }
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  else {
    FUN_140bfcdda(param_1,param_2,local_98,param_4);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bfcdda FUN_140bfcdda body=1905 status=ok
// SIG undefined FUN_140bfcdda(void)

void FUN_140bfcdda(longlong param_1,char *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  char *pcVar16;
  double dVar17;
  float fVar18;
  undefined1 auStack_d8 [32];
  undefined2 **local_b8;
  longlong local_b0;
  undefined4 *local_a8;
  char *local_a0;
  undefined2 *local_98;
  uint local_90;
  undefined2 *local_88;
  uint local_80;
  undefined2 *local_78;
  uint local_70;
  undefined2 *local_68;
  uint local_60;
  char local_56 [2];
  undefined4 local_54;
  undefined2 *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1401144ce(param_2);
  FUN_140114448(param_2);
  cVar3 = FUN_1411184fc(param_1);
  if ((cVar3 != '\0') || (*(int *)(param_1 + 0x2c) == 0)) goto LAB_140bfd33b;
  cVar3 = FUN_140114204(param_2);
  if (cVar3 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
      FUN_1459825b0(&DAT_14c872ee0);
      atexit(FUN_1427868a5);
      _Init_thread_footer(&DAT_14c872ef8);
    }
    FUN_140b126e4(param_2,&local_50);
    puVar6 = local_50;
    if (local_48 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_146816218(&DAT_14c872ee0,3,
                  L"ERROR: Registry\'s WriteValueInternal() called with invalid address: %ls",puVar6
                 );
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_140bfd33b;
  }
  iVar1 = *(int *)(param_2 + 0x10);
  piVar12 = (int *)&DAT_14c948618;
  piVar10 = (int *)&DAT_14c948620;
  if (((iVar1 != 0) && (1 < *(int *)(param_2 + 0x14))) && (iVar1 != DAT_14c948000)) {
    piVar12 = (int *)(*(longlong *)(param_2 + 0x28) + 0xc);
    piVar10 = (int *)(*(longlong *)(param_2 + 0x28) + 0x14);
  }
  if ((*piVar12 != *(int *)(param_1 + 0x2c)) || (*piVar10 != *(int *)(param_1 + 0x34))) {
    if (*param_2 != '\x01') goto LAB_140bfd33b;
    piVar12 = (int *)&DAT_14c948618;
    piVar10 = (int *)&DAT_14c948620;
    if (((iVar1 != 0) && (1 < *(int *)(param_2 + 0x14))) && (iVar1 != DAT_14c948000)) {
      piVar12 = (int *)(*(longlong *)(param_2 + 0x28) + 0xc);
      piVar10 = (int *)(*(longlong *)(param_2 + 0x28) + 0x14);
    }
    if ((*piVar12 != (int)DAT_14cb7bb98) || (*piVar10 != DAT_14cb7bba0)) goto LAB_140bfd33b;
  }
  local_54 = 0;
  local_56[1] = 0;
  local_56[0] = '\0';
  if ((iVar1 == 0) || ((iVar2 = *(int *)(param_2 + 0x14), iVar2 == 0 || (iVar1 == DAT_14c948000))))
  {
LAB_140bfd448:
    local_48 = DAT_14c948620;
    puVar6 = DAT_14c948618;
  }
  else {
    pcVar5 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      pcVar5 = *(char **)(param_2 + 0x28);
    }
    if (1 < iVar2) {
      pcVar5 = *(char **)(param_2 + 0x28);
    }
    if ((iVar2 == 1) || (iVar2 < 3)) goto LAB_140bfd448;
    local_48 = *(uint *)(pcVar5 + 0x20);
    puVar6 = *(undefined2 **)(pcVar5 + 0x18);
  }
  local_50._0_4_ = (uint)puVar6;
  if (local_48 != 0) {
    uVar4 = local_48 >> 0xd ^ (uint)local_50 - local_48;
    uVar11 = uVar4 << 8 ^ (-0x61c88647 - local_48) - uVar4;
    uVar15 = uVar11 >> 0xd ^ (local_48 - uVar4) - uVar11;
    uVar14 = uVar15 >> 0xc ^ (uVar4 - uVar11) - uVar15;
    uVar4 = uVar14 << 0x10 ^ (uVar11 - uVar15) - uVar14;
    uVar15 = uVar4 >> 5 ^ (uVar15 - uVar14) - uVar4;
    uVar11 = uVar15 >> 3 ^ (uVar14 - uVar4) - uVar15;
    uVar4 = uVar11 << 10 ^ (uVar4 - uVar15) - uVar11;
    local_50._0_4_ = uVar4 >> 0xf ^ uVar15 - (uVar11 + uVar4);
  }
  uVar4 = (uint)local_50;
  local_50 = puVar6;
  uVar7 = FUN_140726908(param_1 + 0x78,uVar4,&local_50);
  if (((*(int *)(param_2 + 0x10) == 0) || (iVar1 = *(int *)(param_2 + 0x14), iVar1 == 0)) ||
     (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
LAB_140bfd461:
    local_48 = DAT_14c948620;
    puVar6 = DAT_14c948618;
  }
  else {
    pcVar5 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      pcVar5 = *(char **)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      pcVar5 = *(char **)(param_2 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 4)) goto LAB_140bfd461;
    local_48 = *(uint *)(pcVar5 + 0x2c);
    puVar6 = *(undefined2 **)(pcVar5 + 0x24);
  }
  local_50._0_4_ = (uint)puVar6;
  if (local_48 != 0) {
    uVar4 = local_48 >> 0xd ^ (uint)local_50 - local_48;
    uVar11 = uVar4 << 8 ^ (-0x61c88647 - local_48) - uVar4;
    uVar15 = uVar11 >> 0xd ^ (local_48 - uVar4) - uVar11;
    uVar14 = uVar15 >> 0xc ^ (uVar4 - uVar11) - uVar15;
    uVar4 = uVar14 << 0x10 ^ (uVar11 - uVar15) - uVar14;
    uVar15 = uVar4 >> 5 ^ (uVar15 - uVar14) - uVar4;
    uVar11 = uVar15 >> 3 ^ (uVar14 - uVar4) - uVar15;
    uVar4 = uVar11 << 10 ^ (uVar4 - uVar15) - uVar11;
    local_50._0_4_ = uVar4 >> 0xf ^ uVar15 - (uVar11 + uVar4);
  }
  uVar4 = (uint)local_50;
  local_50 = puVar6;
  uVar7 = FUN_140726d02(uVar7,uVar4,&local_50);
  if (((*(int *)(param_2 + 0x10) == 0) || (iVar1 = *(int *)(param_2 + 0x14), iVar1 == 0)) ||
     (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
LAB_140bfd47a:
    local_60 = DAT_14c948620;
    local_68 = DAT_14c948618;
  }
  else {
    pcVar5 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      pcVar5 = *(char **)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      pcVar5 = *(char **)(param_2 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 5)) goto LAB_140bfd47a;
    local_60 = *(uint *)(pcVar5 + 0x38);
    local_68 = *(undefined2 **)(pcVar5 + 0x30);
  }
  uVar7 = FUN_14072739f(&local_68,uVar7,local_56 + 1);
  local_b0 = param_1 + 0x38;
  if (((*(int *)(param_2 + 0x10) == 0) || (iVar1 = *(int *)(param_2 + 0x14), iVar1 == 0)) ||
     (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
    local_90 = DAT_14c948620;
    local_78 = DAT_14c948618;
    local_88 = DAT_14c948618;
    local_98 = DAT_14c948618;
    local_80 = local_90;
    local_70 = local_90;
  }
  else {
    pcVar5 = param_2 + 0x18;
    pcVar16 = pcVar5;
    if (0 < *(int *)(param_2 + 0x34)) {
      pcVar16 = *(char **)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      pcVar16 = *(char **)(param_2 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 6)) {
      local_70 = DAT_14c948620;
      local_78 = DAT_14c948618;
    }
    else {
      local_70 = *(uint *)(pcVar16 + 0x44);
      local_78 = *(undefined2 **)(pcVar16 + 0x3c);
    }
    pcVar16 = pcVar5;
    if (0 < *(int *)(param_2 + 0x34)) {
      pcVar16 = *(char **)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      pcVar16 = *(char **)(param_2 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 4)) {
      local_80 = DAT_14c948620;
      local_88 = DAT_14c948618;
    }
    else {
      local_80 = *(uint *)(pcVar16 + 0x2c);
      local_88 = *(undefined2 **)(pcVar16 + 0x24);
    }
    if (0 < *(int *)(param_2 + 0x34)) {
      pcVar5 = *(char **)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      pcVar5 = *(char **)(param_2 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 3)) {
      local_90 = DAT_14c948620;
      local_98 = DAT_14c948618;
    }
    else {
      local_90 = *(uint *)(pcVar5 + 0x20);
      local_98 = *(undefined2 **)(pcVar5 + 0x18);
    }
  }
  local_a0 = local_56;
  local_a8 = &local_54;
  local_b8 = &local_78;
  lVar8 = FUN_143d45262(param_1,&local_98,&local_88,uVar7);
  if (lVar8 != 0) {
    if (*(float **)(param_4 + 0x14) == (float *)0x0) {
      fVar18 = 0.0;
      if (((((*(int *)(param_1 + 0xc) != 0) && (uVar4 = *(uint *)(param_1 + 8), -1 < (int)uVar4)) &&
           ((int)uVar4 < DAT_14c9647dc)) &&
          ((plVar13 = (longlong *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)(param_1 + 0xc))))) &&
         ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
          lVar9 = *plVar13;
        }
        else {
          lVar9 = 0;
        }
        if (((*(longlong *)(lVar9 + 0x30) != 0) &&
            (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x360), lVar9 != 0)) &&
           (plVar13 = *(longlong **)(lVar9 + 0x178), plVar13 != (longlong *)0x0)) {
          dVar17 = (double)(**(code **)(*plVar13 + 0x640))();
          fVar18 = (float)dVar17;
        }
      }
    }
    else {
      fVar18 = **(float **)(param_4 + 0x14);
    }
    FUN_1403a0728(param_3,&local_50);
    if ((local_50 != *(undefined2 **)(lVar8 + 0x38)) ||
       (*(char *)(param_4 + 0x16) != '\0' || local_56[0] != '\0')) {
      local_b0 = CONCAT44(local_b0._4_4_,fVar18);
      local_b8 = (undefined2 **)CONCAT71(local_b8._1_7_,local_56[0]);
      local_a8 = param_4;
      FUN_1405f63aa(param_1,lVar8,local_54,param_3);
    }
  }
LAB_140bfd33b:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bfd54c FUN_140bfd54c body=1582 status=ok
// SIG undefined FUN_140bfd54c(void)

void FUN_140bfd54c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong **pplVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  undefined8 local_1b0;
  int local_1a4;
  longlong *local_1a0;
  longlong local_198;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong *local_168;
  undefined4 local_160;
  uint uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined8 local_ac;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar7 = local_150;
  if ((((*(char *)(param_1 + 0x3c) == '\x01') &&
       (local_140 = *(longlong *)(param_2 + 0x68), local_140 != 0)) &&
      (lVar1 = *(longlong *)(param_2 + 0x78), lVar1 != 0)) &&
     (*(int *)(param_1 + 0x6b0) != *(int *)(param_1 + 0x6dc))) {
    uVar4 = (uint)((ulonglong)local_140 >> 0x10);
    uVar12 = (uint)local_140 & 0xffff;
    lVar10 = param_1 + 0x6e0;
    if (*(longlong *)(param_1 + 0x6e8) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x6e8);
    }
    iVar6 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x6f0) - 1U &
                              (int)((ulonglong)local_140 >> 0x20) +
                              ((uint)local_140 << 0x10 | uVar12) + (uVar4 << 0x13 | uVar4 & 0xffff)
                              + (uVar12 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar10 = *(longlong *)(param_1 + 0x6a8);
      iVar13 = iVar6;
      do {
        if (*(longlong *)(lVar10 + (longlong)iVar13 * 0x60) == local_140) goto LAB_140bfd6a2;
        iVar13 = *(int *)((longlong)iVar13 * 0x60 + lVar10 + 0x58);
      } while (iVar13 != -1);
    }
  }
  goto LAB_140bfd5c4;
  while (iVar6 = *(int *)(lVar14 + 0x58), iVar6 != -1) {
LAB_140bfd6a2:
    lVar14 = lVar10 + (longlong)iVar6 * 0x60;
    if (*(longlong *)(lVar10 + (longlong)iVar6 * 0x60) == local_140) goto LAB_140bfd6bc;
  }
  lVar14 = 0;
LAB_140bfd6bc:
  local_1a0 = (longlong *)(lVar14 + 8);
  lVar10 = lVar14 + 0x18;
  local_138 = (longlong *)&DAT_100000000;
  local_128 = 0xffffffff;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(lVar14 + 0x30) == 0) {
    local_1a4 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    local_1a4 = *(int *)(lVar14 + 0x30);
  }
  local_160 = (undefined4)local_138;
  uStack_15c = local_138._4_4_;
  uStack_158 = (undefined4)uStack_130;
  uStack_154 = uStack_130._4_4_;
  uStack_148 = CONCAT44(uStack_11c,uStack_120);
  local_150 = local_128;
  uVar7 = local_150;
  local_168 = local_1a0;
  local_150._4_4_ = (int)((ulonglong)local_128 >> 0x20);
  if ((local_150._4_4_ != local_1a4) || (uStack_130 != lVar10)) {
    local_198 = param_1 + 0x18;
    iVar6 = local_150._4_4_;
    local_150 = uVar7;
    do {
      lVar14 = *local_168 + (longlong)iVar6 * 0x68;
      if (*(longlong *)(*local_168 + (longlong)iVar6 * 0x68) == lVar1) {
        lVar8 = *(longlong *)(lVar14 + 0x20);
        if (lVar8 == 0) {
          uVar7 = FUN_140067708();
          lVar8 = FUN_14477b664(uVar7);
          *(longlong *)(lVar14 + 0x20) = lVar8;
        }
        lVar9 = *(longlong *)(lVar14 + 0x28);
        if (lVar9 == 0) {
          if ((lVar8 != 0) && (*(longlong *)(lVar14 + 0x18) != 0)) {
            plVar3 = *(longlong **)(lVar8 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
              *(undefined8 *)(lVar14 + 0x28) = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar9 = FUN_144aff482(uVar7,(longlong *)(lVar14 + 0x18));
              *(longlong *)(lVar14 + 0x28) = lVar9;
              if (lVar9 != 0) goto LAB_140bfd7c7;
            }
          }
        }
        else {
LAB_140bfd7c7:
          local_188 = (longlong *)0x0;
          if (*(longlong *)(lVar14 + 8) == 0) {
            local_118 = 0;
            uStack_110 = 0;
            local_108 = 0;
            uStack_104 = 0;
            uStack_100 = 0;
            uStack_fc = 0x3ff00000;
            local_e8 = 0;
            uStack_e0 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            local_d8 = 0x3ff0000000000000;
            uStack_d0 = 0x3ff0000000000000;
            local_c8 = 0x3ff0000000000000;
            uStack_c0 = 0;
            local_b8 = 0x3f800000;
            local_b0 = 0;
            local_ac = 0;
            FUN_1400021e4(&local_140,&local_138);
            local_1b0 = 0;
            local_1b8 = &local_118;
            FUN_14071b0f2(param_1,local_190,&local_138);
            FUN_1403c75f4(&local_188,local_190);
            FUN_144a61ac8(local_190);
            if (local_138 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            FUN_1403c747e(param_1,&local_138);
            FUN_1403c75f4(&local_188,&local_138);
            FUN_144a61ac8(&local_138);
          }
          plVar3 = local_188;
          if ((local_188 != (longlong *)0x0) && (*local_188 != -1)) {
            if ((*(longlong *)(param_1 + 0x20) != 0) &&
               (cVar5 = FUN_144729dda(local_198), cVar5 != '\0')) {
              (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
            }
            local_1b8 = (undefined8 *)((ulonglong)local_1b8 & 0xffffffff00000000);
            FUN_14084a448(plVar3,&local_138,lVar9);
            *(longlong **)(lVar14 + 0x48) = local_138;
            *(longlong *)(lVar14 + 0x50) = uStack_130;
            *(undefined8 *)(lVar14 + 0x58) = local_128;
          }
          pplVar11 = &local_188;
LAB_140bfd95b:
          FUN_144a61ac8(pplVar11);
        }
      }
      else {
        cVar5 = FUN_144904448((undefined8 *)(lVar14 + 0x48));
        if (cVar5 != '\0') {
          lVar8 = *(longlong *)(lVar14 + 0x38);
          if (lVar8 == 0) {
            uVar7 = FUN_140067708();
            lVar8 = FUN_14477b664(uVar7);
            *(longlong *)(lVar14 + 0x38) = lVar8;
          }
          plVar3 = (longlong *)(lVar14 + 0x30);
          if (*(longlong *)(lVar14 + 0x40) != 0) {
LAB_140bfd889:
            plVar2 = *(longlong **)(lVar14 + 0x48);
            if (((plVar2 == (longlong *)0x0) || (*(longlong *)(lVar14 + 0x50) == -1)) ||
               (*plVar2 != *(longlong *)(lVar14 + 0x50))) {
              local_138 = (longlong *)0x0;
            }
            else {
              *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + 1;
              local_138 = plVar2;
              if ((*(longlong *)(param_1 + 0x20) == 0) ||
                 (cVar5 = FUN_144729dda(local_198), cVar5 == '\0')) {
                uVar7 = 0;
              }
              else {
                uVar7 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
              }
              local_1b8 = (undefined8 *)((ulonglong)local_1b8 & 0xffffffff00000000);
              FUN_14071ab80(plVar2,&local_180,plVar3,uVar7);
              local_180 = 0;
              local_178 = 0xffffffffffffffff;
            }
            pplVar11 = (longlong **)&local_138;
            goto LAB_140bfd95b;
          }
          if ((lVar8 != 0) && (*plVar3 != 0)) {
            plVar2 = *(longlong **)(lVar8 + 0xb8);
            if ((plVar2 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
              *(undefined8 *)(lVar14 + 0x40) = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar8 = FUN_144aff482(uVar7,plVar3);
              *(longlong *)(lVar14 + 0x40) = lVar8;
              if (lVar8 != 0) goto LAB_140bfd889;
            }
          }
        }
      }
      local_150 = CONCAT44(local_150._4_4_,(uint)local_150 & ~uStack_15c);
      FUN_1449c0562(&local_160);
      iVar6 = local_150._4_4_;
      uVar7 = local_150;
    } while (local_168 != local_1a0 ||
             (CONCAT44(uStack_154,uStack_158) != lVar10 || local_150._4_4_ != local_1a4));
  }
LAB_140bfd5c4:
  local_150 = uVar7;
  if ((local_90 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bfdb7c FUN_140bfdb7c body=328 status=ok
// SIG undefined FUN_140bfdb7c(void)

void FUN_140bfdb7c(longlong param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  uint5 local_30;
  undefined3 uStack_2b;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if (*(char *)(param_1 + 0x25f8) == '\x01') {
      pcVar2 = (char *)(param_1 + 0x25f9);
    }
    else {
      if (*(longlong *)(param_1 + 0x2618) == 0) goto LAB_140bfdc31;
      pcVar2 = (char *)(*(longlong *)(param_1 + 0x2618) + 0x458);
    }
    if (*pcVar2 == '\x01') {
      _local_30 = DAT_14cbc18c0;
      local_28 = 0xffffffff;
      FUN_140c823b2(param_1 + 0x4d8,&local_40);
      if (local_40 == DAT_14cbc18d0) {
        if (*(int *)(param_1 + 0x2608) == 0) {
          if (*(longlong *)(param_1 + 0x2620) == 0) {
            cVar1 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x58))(param_1 + 0x3c0);
            if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
            }
          }
        }
        else if (0 < *(int *)(param_1 + 0x2608)) {
          if (*(longlong *)(param_1 + 0x2620) != 0) {
            FUN_140e76e82(param_1);
          }
          cVar1 = (**(code **)(*(longlong *)(param_1 + 0x3c0) + 0x58))(param_1 + 0x3c0);
          if (cVar1 == '\0') {
            local_30 = (uint5)(uint)local_30;
            local_40 = DAT_14cbc18c8;
            local_38 = 0xffffffff;
            FUN_141094e00(param_1 + 0x4d8,&local_40,1);
          }
        }
      }
    }
  }
LAB_140bfdc31:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bfdcd4 FUN_140bfdcd4 body=100 status=ok
// SIG undefined FUN_140bfdcd4(void)

void FUN_140bfdcd4(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = DAT_14c9a6400;
  local_10 = 0xffffffff;
  local_28 = DAT_14cbc18c8;
  local_20 = 0xffffffff;
  FUN_1400b1204(param_1 + 0x118);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bfdd42 FUN_140bfdd42 body=67 status=ok
// SIG undefined FUN_140bfdd42(void)

void FUN_140bfdd42(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x308);
  fVar2 = *(float *)(param_1 + 0x2a8) + 0.5 + -0.5;
  if (0.99999994 <= fVar2) {
    fVar2 = 0.99999994;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x2a4);
  param_2[1] = fVar2;
  *(undefined8 *)(param_2 + 2) = uVar1;
  return;
}



// FUNCTION 140bfdd86 FUN_140bfdd86 body=293 status=ok
// SIG undefined FUN_140bfdd86(void)

undefined8 FUN_140bfdd86(longlong param_1,undefined4 param_2)

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
    if (iVar1 == 2) goto LAB_140bfdea5;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140bfdea5;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140bfdea5:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140bfde4e;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140bfde4e;
    }
  }
  uVar6 = 0;
LAB_140bfde4e:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bfdeac FUN_140bfdeac body=202 status=ok
// SIG undefined FUN_140bfdeac(void)

void FUN_140bfdeac(undefined8 param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449027d0(param_1,&local_40);
  lVar3 = *local_40;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x70));
  *(int *)(lVar3 + 0x68) = *(int *)(lVar3 + 0x68) + 1;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  iVar4 = (int)ROUND(param_2 * 100.0 + param_2 * 100.0 + -0.5) >> 1;
  if (iVar4 == *(int *)(lVar3 + 0x58)) {
    if (*(int *)(lVar3 + 0x5c) != 0) goto LAB_140bfdf26;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar3 + 0x5c) + 1;
  }
  *(int *)(lVar3 + 0x58) = iVar4;
  *(int *)(lVar3 + 0x5c) = iVar5;
LAB_140bfdf26:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x70));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bfdf78 FUN_140bfdf78 body=103 status=ok
// SIG undefined FUN_140bfdf78(void)

ulonglong FUN_140bfdf78(longlong param_1)

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
LAB_140bfdfc2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140bfdfc2;
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



// FUNCTION 140bfdfec FUN_140bfdfec body=24 status=ok
// SIG undefined FUN_140bfdfec(void)

void FUN_140bfdfec(longlong *param_1,undefined8 *param_2)

{
  *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x000140bfe001. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))(param_1,param_2 + 1);
  return;
}



// FUNCTION 140bfe004 FUN_140bfe004 body=28 status=ok
// SIG undefined FUN_140bfe004(void)

undefined8 FUN_140bfe004(undefined8 param_1,undefined8 param_2)

{
  FUN_14010d536(param_2,param_1);
  return param_1;
}



// FUNCTION 140bfe026 FUN_140bfe026 body=57 status=ok
// SIG undefined FUN_140bfe026(void)

void FUN_140bfe026(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23470 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23470 = FUN_140002ddd(FUN_14643dc45,uVar1,L"GpsTest_LineOfFire");
  }
  return;
}



// FUNCTION 140bfe060 FUN_140bfe060 body=103 status=ok
// SIG undefined FUN_140bfe060(void)

ulonglong FUN_140bfe060(longlong param_1)

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
LAB_140bfe0aa:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140bfe0aa;
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



// FUNCTION 140bfe0c8 FUN_140bfe0c8 body=180 status=ok
// SIG undefined FUN_140bfe0c8(void)

void FUN_140bfe0c8(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((*(longlong **)(param_1 + 0x28) != (longlong *)0x0) && (*(int *)(param_1 + 0x24) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x20);
    uVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140bfe125;
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x24))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
      goto LAB_140bfe125;
    }
  }
  uVar2 = 0;
LAB_140bfe125:
  lVar3 = FUN_140bfe17c(param_1 + 0x30,uVar2);
  bVar5 = param_2 != 0;
  if ((bVar5) && (lVar4 = param_2, lVar3 != param_2)) {
    do {
      lVar4 = *(longlong *)(lVar4 + 0x120);
      bVar5 = lVar4 != 0;
      if (lVar4 == lVar3) break;
    } while (lVar4 != 0);
  }
  if (!bVar5) {
    return;
  }
  FUN_140bfe1fc(param_1,param_2);
  return;
}



// FUNCTION 140bfe17c FUN_140bfe17c body=80 status=ok
// SIG undefined FUN_140bfe17c(void)

undefined8 FUN_140bfe17c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  plVar3 = *(longlong **)(lVar1 + 0x110);
  if (plVar3 == (longlong *)0x0) {
    FUN_140aa6c08(lVar1);
    plVar3 = *(longlong **)(lVar1 + 0x110);
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140bfe1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar3 + 0x2a0))(plVar3,param_2);
  return uVar2;
}



// FUNCTION 140bfe1cc FUN_140bfe1cc body=47 status=ok
// SIG undefined FUN_140bfe1cc(void)

longlong FUN_140bfe1cc(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if ((param_2 != (longlong *)0x0) &&
     (plVar1 = (longlong *)(**(code **)(*param_2 + 0x5e0))(param_2), plVar1 == param_2)) {
    return plVar1[0x85];
  }
  return 0;
}



// FUNCTION 140bfe1fc FUN_140bfe1fc body=295 status=ok
// SIG undefined FUN_140bfe1fc(void)

void FUN_140bfe1fc(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 uStack_58;
  longlong local_50;
  undefined8 uStack_48;
  longlong local_40;
  undefined8 uStack_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(longlong **)(param_1 + 0x28) != (longlong *)0x0) && (*(int *)(param_1 + 0x24) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x24))) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))();
      if (lVar2 != 0) {
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = 0;
        uStack_38 = 0;
        local_30 = 0;
        uStack_28 = 0;
        local_70 = lVar2;
        local_68 = param_2;
        FUN_140bfe920(&local_70);
        if ((int)uStack_28 != 0) {
          FUN_140d23f24(param_1,&local_70);
        }
        if (local_30 != 0) {
          FUN_1400020a8();
        }
        if (local_40 != 0) {
          FUN_1400020a8();
        }
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        if (local_60 != 0) {
          FUN_1400020a8();
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



// FUNCTION 140bfe324 FUN_140bfe324 body=1531 status=ok
// SIG undefined FUN_140bfe324(void)

void FUN_140bfe324(longlong param_1,undefined8 param_2)

{
  void *_Dst;
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  longlong *plVar17;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((((*(longlong **)(param_1 + 0x28) != (longlong *)0x0) && (*(int *)(param_1 + 0x24) != 0)) &&
        (uVar10 = *(uint *)(param_1 + 0x20), -1 < (int)uVar10)) &&
       (((int)uVar10 < DAT_14c9647dc &&
        (lVar13 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8), lVar13 != 0)))) &&
      (*(int *)(lVar13 + 0x10) == *(int *)(param_1 + 0x24))) &&
     (((*(uint *)(lVar13 + 8) & 0x10200000) == 0 &&
      (lVar13 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(), lVar13 != 0)))) {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    local_98 = lVar13;
    local_90 = param_2;
    FUN_140bfe920(&local_98);
    if ((longlong)(int)uStack_50 != 0) {
      plVar12 = local_58 + (int)uStack_50;
      plVar8 = (longlong *)(param_1 + 0x38);
      plVar17 = local_58;
      do {
        lVar13 = *plVar17;
        if ((lVar13 != 0) && (iVar4 = *(int *)(param_1 + 0x40), (longlong)iVar4 != 0)) {
          lVar14 = *(longlong *)(param_1 + 0x38);
          lVar11 = 0;
          do {
            cVar3 = FUN_140bfebc2(lVar14 + lVar11,lVar13);
            if (cVar3 != '\0') {
              uVar10 = (int)(lVar11 >> 3) * -0x55555555;
              if (uVar10 != 0xffffffff) {
                local_c8 = (longlong)(int)uVar10;
                local_c0 = plVar8;
                local_b8 = plVar12;
                local_b0 = plVar17;
                if ((longlong)*(int *)(param_1 + 0x50) != 0) {
                  lVar13 = *(longlong *)(param_1 + 0x48);
                  local_a8 = (longlong)*(int *)(param_1 + 0x50) * 0x40 + lVar13;
                  do {
                    if ((*(char *)(lVar13 + 0x39) == '\x01') &&
                       ((longlong)*(int *)(lVar13 + 0x30) != 0)) {
                      puVar16 = (uint *)(local_c8 * 0x18 + *local_c0);
                      lVar14 = *(longlong *)(lVar13 + 0x28);
                      local_a0 = (longlong)*(int *)(lVar13 + 0x30) * 0x14 + lVar14;
                      do {
                        uVar1 = puVar16[4];
                        if ((longlong)(int)uVar1 != 0) {
                          lVar11 = *(longlong *)(puVar16 + 2);
                          lVar15 = 0;
                          do {
                            if ((((*(int *)(lVar11 + lVar15) == *(int *)(lVar13 + 0xc)) &&
                                 (lVar6 = *(longlong *)(lVar11 + 8 + lVar15), lVar6 != 0)) &&
                                (puVar16[1] != 0)) &&
                               (((uVar2 = *puVar16, -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc))
                                && ((puVar5 = (undefined8 *)
                                              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                              *(longlong *)
                                               (DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                                    puVar5 != (undefined8 *)0x0 &&
                                    ((*(uint *)(puVar5 + 2) == puVar16[1] &&
                                     ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))))))) {
                              cVar3 = *(char *)(lVar13 + 8);
                              if (cVar3 == '\x01') {
                                if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
                                  plVar8 = (longlong *)*puVar5;
                                }
                                else {
                                  plVar8 = (longlong *)0x0;
                                }
                                lVar6 = (**(code **)(*plVar8 + 0x658))();
                                if (*(longlong *)(lVar11 + 8 + lVar15) == lVar6) {
                                  if ((puVar16[1] == 0) || (uVar2 = *puVar16, (int)uVar2 < 0)) {
LAB_140bfe8ef:
                                    plVar8 = (longlong *)0x0;
                                  }
                                  else {
                                    plVar8 = (longlong *)0x0;
                                    if ((int)uVar2 < DAT_14c9647dc) {
                                      puVar5 = (undefined8 *)
                                               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                               *(longlong *)
                                                (DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                                      if (((puVar5 == (undefined8 *)0x0) ||
                                          (*(uint *)(puVar5 + 2) != puVar16[1])) ||
                                         ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))
                                      goto LAB_140bfe8ef;
                                      plVar8 = (longlong *)*puVar5;
                                    }
                                  }
                                  (**(code **)(*plVar8 + 0x660))(plVar8,0);
                                }
                              }
                              else if (cVar3 == '\x03') {
                                if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
                                  plVar8 = (longlong *)*puVar5;
                                }
                                else {
                                  plVar8 = (longlong *)0x0;
                                }
                                lVar7 = plVar8[0xc6];
                                if (lVar7 == 0) {
                                  if (*(code **)(*plVar8 + 0xa68) == (code *)&LAB_14470a070)
                                  goto LAB_140bfe593;
                                  lVar7 = (**(code **)(*plVar8 + 0xa68))();
                                  lVar6 = *(longlong *)(lVar11 + 8 + lVar15);
                                }
                                if (lVar6 == lVar7) {
                                  if ((puVar16[1] == 0) || (uVar2 = *puVar16, (int)uVar2 < 0)) {
LAB_140bfe907:
                                    uVar9 = 0;
                                  }
                                  else {
                                    uVar9 = 0;
                                    if ((int)uVar2 < DAT_14c9647dc) {
                                      puVar5 = (undefined8 *)
                                               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                               *(longlong *)
                                                (DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                                      if (((puVar5 == (undefined8 *)0x0) ||
                                          (*(uint *)(puVar5 + 2) != puVar16[1])) ||
                                         ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))
                                      goto LAB_140bfe907;
                                      uVar9 = *puVar5;
                                    }
                                  }
                                  FUN_14054853a(uVar9,0);
                                }
                              }
                              else if (cVar3 == '\x02') {
                                if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
                                  plVar8 = (longlong *)*puVar5;
                                }
                                else {
                                  plVar8 = (longlong *)0x0;
                                }
                                lVar6 = (**(code **)(*plVar8 + 0x648))();
                                if (*(longlong *)(lVar11 + 8 + lVar15) == lVar6) {
                                  if ((puVar16[1] == 0) || (uVar2 = *puVar16, (int)uVar2 < 0)) {
LAB_140bfe900:
                                    plVar8 = (longlong *)0x0;
                                  }
                                  else {
                                    plVar8 = (longlong *)0x0;
                                    if ((int)uVar2 < DAT_14c9647dc) {
                                      puVar5 = (undefined8 *)
                                               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                                               *(longlong *)
                                                (DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                                      if (((puVar5 == (undefined8 *)0x0) ||
                                          (*(uint *)(puVar5 + 2) != puVar16[1])) ||
                                         ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))
                                      goto LAB_140bfe900;
                                      plVar8 = (longlong *)*puVar5;
                                    }
                                  }
                                  (**(code **)(*plVar8 + 0x650))(plVar8,0);
                                }
                              }
                            }
LAB_140bfe593:
                            lVar15 = lVar15 + 0x10;
                          } while ((longlong)(int)uVar1 * 0x10 != lVar15);
                        }
                        lVar14 = lVar14 + 0x14;
                      } while (lVar14 != local_a0);
                    }
                    lVar13 = lVar13 + 0x40;
                  } while (lVar13 != local_a8);
                }
                plVar8 = local_c0;
                lVar14 = local_c8;
                lVar13 = *local_c0;
                if (*(longlong *)(lVar13 + 8 + local_c8 * 0x18) != 0) {
                  FUN_1400020a8();
                }
                plVar17 = local_b0;
                plVar12 = local_b8;
                iVar4 = *(int *)(param_1 + 0x40);
                if (~uVar10 + iVar4 != 0) {
                  _Dst = (void *)(lVar13 + lVar14 * 0x18);
                  memmove(_Dst,(void *)((longlong)_Dst + 0x18),
                          (longlong)(int)(~uVar10 + iVar4) * 0x18);
                  iVar4 = *(int *)(param_1 + 0x40);
                }
                *(int *)(param_1 + 0x40) = iVar4 + -1;
                FUN_140bfed04(plVar8);
              }
              break;
            }
            lVar11 = lVar11 + 0x18;
          } while ((longlong)iVar4 * 0x18 != lVar11);
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar12);
      if ((longlong)(int)uStack_60 != 0) {
        plVar8 = local_68 + (int)uStack_60;
        plVar12 = local_68;
        do {
          if (*plVar12 != 0) {
            if ((longlong)*(int *)(param_1 + 0x40) != 0) {
              lVar13 = 0;
              do {
                iVar4 = *(int *)(*(longlong *)(param_1 + 0x38) + 4 + lVar13);
                if ((((iVar4 != 0) &&
                     (uVar10 = *(uint *)(*(longlong *)(param_1 + 0x38) + lVar13), -1 < (int)uVar10))
                    && (((int)uVar10 < DAT_14c9647dc &&
                        ((plVar17 = (longlong *)
                                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                         plVar17 != (longlong *)0x0 && ((int)plVar17[2] == iVar4)))))) &&
                   (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 &&
                    ((*plVar17 != 0 && (*(longlong *)(*plVar17 + 0xa8) == *plVar12))))))
                goto LAB_140bfe795;
                lVar13 = lVar13 + 0x18;
              } while ((longlong)*(int *)(param_1 + 0x40) * 0x18 != lVar13);
            }
            FUN_140bf0996(param_1);
          }
LAB_140bfe795:
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar8);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bfe920 FUN_140bfe920 body=162 status=ok
// SIG undefined FUN_140bfe920(void)

void FUN_140bfe920(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    FUN_140bfe9c4(param_1,param_1[1],param_1 + 8);
    lVar2 = param_1[9];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = param_1[8];
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar3) != 0) {
          local_38 = *(undefined8 *)(*(longlong *)(lVar1 + lVar3) + 0xa8);
          FUN_140bfeb58(param_1 + 6,&local_38);
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)lVar2 * 8 != lVar3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140bfe9c4 FUN_140bfe9c4 body=404 status=ok
// SIG undefined FUN_140bfe9c4(void)

void FUN_140bfe9c4(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar4 = param_2[0x15];
  if (lVar4 != 0) {
    lVar7 = param_1[2];
    lVar8 = (longlong)(int)param_1[3];
    if (lVar8 != 0) {
      lVar6 = 0;
      do {
        if (*(longlong *)(lVar7 + lVar6) == lVar4) goto LAB_140bfea51;
        lVar6 = lVar6 + 8;
      } while (lVar8 * 8 - lVar6 != 0);
    }
    uVar5 = (int)param_1[3] + 1;
    *(uint *)(param_1 + 3) = uVar5;
    if (*(uint *)((longlong)param_1 + 0x1c) < uVar5) {
      FUN_1447d05f2(param_1 + 2);
      lVar7 = param_1[2];
    }
    *(longlong *)(lVar7 + lVar8 * 8) = lVar4;
    if (lVar4 != *param_1) {
      FUN_140eca14a();
      plVar3 = (longlong *)FUN_144718840(lVar4);
      if ((plVar3 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar3 + 0x20))(plVar3), cVar2 == '\0')) {
        lVar7 = param_1[5];
        uVar5 = (int)lVar7 + 1;
        *(uint *)(param_1 + 5) = uVar5;
        if (*(uint *)((longlong)param_1 + 0x2c) < uVar5) {
          FUN_1447d05f2(param_1 + 4);
        }
        *(longlong *)(param_1[4] + (longlong)(int)lVar7 * 8) = lVar4;
      }
    }
LAB_140bfea51:
    if ((longlong)(int)param_1[5] != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(param_1[4] + lVar7) == lVar4) {
          return;
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)param_1[5] * 8 != lVar7);
    }
    if (param_2 != (longlong *)0x0) {
      lVar4 = FUN_14081cebe();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        cVar2 = (**(code **)(*param_2 + 0x4e8))(param_2);
        if (cVar2 == '\0') {
          return;
        }
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_140b24874(param_3,iVar1);
        }
        *(longlong **)(*param_3 + (longlong)iVar1 * 8) = param_2;
      }
    }
    lVar4 = param_2[0x28];
    if ((longlong)(int)lVar4 != 0) {
      lVar7 = param_2[0x27];
      lVar8 = 0;
      do {
        if (*(longlong *)(lVar7 + lVar8) != 0) {
          FUN_140bfe9c4(param_1,*(longlong *)(lVar7 + lVar8),param_3);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar8);
    }
  }
  return;
}



// FUNCTION 140bfeb58 FUN_140bfeb58 body=105 status=ok
// SIG undefined FUN_140bfeb58(void)

ulonglong FUN_140bfeb58(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 8;
    uVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + uVar3 * 8) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_140bfeb90;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447d05f2(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_140bfeb90:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140bfebc2 FUN_140bfebc2 body=320 status=ok
// SIG undefined FUN_140bfebc2(void)

ulonglong FUN_140bfebc2(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar3 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
      param_2 = DAT_14c9647c8;
    }
    else {
      lVar5 = 0;
    }
    uVar3 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        param_2 = 0x23d;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar6;
      }
    }
  }
  uVar6 = *param_1;
  uVar1 = param_1[1];
  local_24 = uVar3;
  if ((uVar6 != local_28) || (uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1), uVar1 != uVar3))
  {
    if (((uVar1 == 0) ||
        ((((int)uVar6 < 0 || (DAT_14c9647dc <= (int)uVar6)) ||
         (lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar5 == 0)))) ||
       ((*(uint *)(lVar5 + 0x10) != uVar1 || ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))) {
      uVar3 = FUN_144729dda(&local_28);
      uVar4 = (ulonglong)uVar3 ^ 1;
    }
    else {
      uVar4 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 140bfed04 FUN_140bfed04 body=151 status=ok
// SIG undefined FUN_140bfed04(void)

void FUN_140bfed04(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x18)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x18,8);
      uVar3 = uVar3 / 0x18;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
    }
  }
  return;
}



// FUNCTION 140bfedaa FUN_140bfedaa body=132 status=ok
// SIG undefined FUN_140bfedaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140bfedaa(undefined8 *param_1,int param_2)

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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bfee3c FUN_140bfee3c body=147 status=ok
// SIG undefined FUN_140bfee3c(void)

undefined8 * FUN_140bfee3c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6847a0;
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b5dfa60;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_14075386c(param_1 + 0x81);
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1407538a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bfeeda FUN_140bfeeda body=713 status=ok
// SIG undefined FUN_140bfeeda(void)

undefined8 FUN_140bfeeda(float *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  ushort *puVar1;
  ulonglong *puVar2;
  float fVar3;
  double dVar4;
  double extraout_XMM0_Qa;
  float fVar5;
  undefined1 auStack_88 [34];
  undefined2 local_66;
  ushort local_64;
  char local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 0x178))(param_2,param_1 + 2,1);
  if (*(char *)(param_1 + 2) == '\x01') {
    fVar3 = param_1[1] - *param_1;
    if (180.0 < fVar3) {
      fVar3 = fVar3 + -360.0;
    }
    else if (fVar3 < -180.0) {
      fVar3 = fVar3 + 360.0;
    }
    local_61 = 0.0 < fVar3;
    (**(code **)(*param_2 + 0x178))(param_2,&local_61,1);
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      fVar3 = (*param_1 * 65536.0) / 360.0;
      local_66 = (undefined2)((ulonglong)(longlong)ROUND(fVar3 + fVar3 + 0.5) >> 1);
      puVar2 = (ulonglong *)param_2[1];
      if (puVar2[1] < *puVar2 + 2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_66,2);
        }
        else {
          thunk_FUN_1457251a8(param_2,&local_66);
        }
      }
      else {
        *puVar2 = *puVar2 + 2;
      }
    }
    else {
      local_64 = 0;
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (ushort *)*puVar2 + 1;
      if ((ushort *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_64,2);
        }
        else {
          thunk_FUN_1457251a8(param_2,&local_64);
        }
      }
      else {
        local_64 = *(ushort *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      dVar4 = (double)FUN_144719204((double)local_64 * 360.0 * 1.52587890625e-05,0x4076800000000000)
      ;
      dVar4 = (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                      (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
      fVar3 = (float)(double)(~-(ulonglong)(180.0 < dVar4) & (ulonglong)dVar4 |
                             (ulonglong)(dVar4 + -360.0) & -(ulonglong)(180.0 < dVar4));
      *param_1 = fVar3;
      if (local_61 == '\0') {
        fVar5 = -90.0;
      }
      else {
        fVar5 = 90.0;
      }
      FUN_144719204((double)(fVar5 + fVar3),0x4076800000000000);
      dVar4 = (double)(~-(ulonglong)(extraout_XMM0_Qa < 0.0) & (ulonglong)extraout_XMM0_Qa |
                      (ulonglong)(extraout_XMM0_Qa + 360.0) & -(ulonglong)(extraout_XMM0_Qa < 0.0));
      param_1[1] = (float)(double)(~-(ulonglong)(180.0 < dVar4) & (ulonglong)dVar4 |
                                  (ulonglong)(dVar4 + -360.0) & -(ulonglong)(180.0 < dVar4));
    }
  }
  *param_4 = 1;
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bff1a4 FUN_140bff1a4 body=2211 status=ok
// SIG undefined FUN_140bff1a4(void)

undefined8 * FUN_140bff1a4(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  code *local_58;
  code *local_50;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14a9bd0f0;
  param_1[1] = param_2;
  if (param_2[0x16] == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_2[0x16] + 0x218);
  }
  param_1[2] = uVar7;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0;
  param_1[9] = 0;
  puVar15 = &DAT_14c846400;
  puVar16 = param_1 + 10;
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  puVar15 = &DAT_14c846400;
  puVar16 = param_1 + 0x1a;
  for (lVar12 = 0x10; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)((longlong)param_2 + 0x2e4);
  fVar22 = *(float *)(param_2 + 0x5d);
  if (fVar22 <= 0.0) {
    fVar22 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x154) = fVar22;
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)((longlong)param_2 + 0x314);
  *(int *)((longlong)param_1 + 0x15c) = (int)param_2[99];
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x31c);
  *(int *)((longlong)param_1 + 0x164) = (int)param_2[100];
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)((longlong)param_2 + 0x324);
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0x32c);
  *(int *)(param_1 + 0x2e) = (int)param_2[0x66];
  *(undefined4 *)((longlong)param_1 + 0x174) = *(undefined4 *)((longlong)param_2 + 0x30c);
  *(int *)(param_1 + 0x2f) = (int)param_2[0x62];
  lVar12 = param_2[0x58];
  *(longlong *)((longlong)param_1 + 0x17c) = param_2[0x57];
  *(longlong *)((longlong)param_1 + 0x184) = lVar12;
  *(int *)((longlong)param_1 + 0x194) = (int)param_2[0x72];
  param_1[0x39] = 0;
  bVar8 = *(byte *)(param_2 + 0x65) & 1;
  bVar1 = *(byte *)(param_1 + 0x3a);
  *(byte *)(param_1 + 0x3a) = bVar1 & 0xfe | bVar8;
  bVar9 = (*(char *)((longlong)param_2 + 0x1fb) == '\x02') * '\x02';
  *(byte *)(param_1 + 0x3a) = bVar1 & 0xfc | bVar8 | bVar9;
  if (*(char *)((longlong)param_2 + 0x1fb) == '\0') {
    bVar10 = (param_2[0x15] != 0) << 2;
  }
  else {
    bVar10 = 0;
  }
  *(byte *)(param_1 + 0x3a) = bVar1 & 0xf8 | bVar8 | bVar9 | bVar10;
  bVar21 = false;
  bVar14 = 0;
  if (*(char *)((longlong)param_2 + 0x1fb) != '\x02') {
    bVar21 = param_2[0x15] != 0;
    bVar14 = bVar21 * '\b';
  }
  *(byte *)(param_1 + 0x3a) = bVar1 & 0xf0 | bVar8 | bVar9 | bVar10 | bVar14;
  bVar20 = (~*(uint *)((longlong)param_2 + 0x2d4) & 10) == 0;
  bVar17 = bVar20 << 4;
  *(byte *)(param_1 + 0x3a) = bVar1 & 0xe0 | bVar8 | bVar9 | bVar10 | bVar14 | bVar17;
  bVar18 = ((~*(uint *)((longlong)param_2 + 0x2d4) & 6) == 0) << 5;
  *(byte *)(param_1 + 0x3a) = bVar1 & 0xc0 | bVar8 | bVar9 | bVar10 | bVar14 | bVar17 | bVar18;
  bVar19 = (*(byte *)((longlong)param_2 + 0x334) & 2) << 5;
  *(byte *)(param_1 + 0x3a) =
       bVar1 & 0x80 | bVar8 | bVar9 | bVar10 | bVar14 | bVar17 | bVar18 | bVar19;
  *(byte *)(param_1 + 0x3a) =
       bVar8 | bVar9 | bVar10 | bVar14 | bVar17 | bVar18 | bVar19 |
       (~bVar21 & *(byte *)((longlong)param_2 + 0x2d4) >> 5 & bVar20) << 7;
  bVar9 = *(byte *)((longlong)param_2 + 0x2d4) >> 6 & 1;
  bVar1 = *(byte *)((longlong)param_1 + 0x1d1);
  *(byte *)((longlong)param_1 + 0x1d1) = bVar1 & 0xfe | bVar9;
  bVar8 = *(byte *)((longlong)param_2 + 0x2d4) >> 6 & 2;
  *(byte *)((longlong)param_1 + 0x1d1) = bVar1 & 0xfc | bVar9 | bVar8;
  bVar10 = *(byte *)((longlong)param_2 + 0x334) & 4;
  *(byte *)((longlong)param_1 + 0x1d1) = bVar1 & 0xf8 | bVar9 | bVar8 | bVar10;
  *(byte *)((longlong)param_1 + 0x1d1) =
       bVar1 & 0xf0 | bVar9 | bVar8 | bVar10 | *(byte *)((longlong)param_2 + 0x334) & 8;
  if ((*(byte *)((longlong)param_2 + 0x2d4) & 2) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined1)param_2[0x5b];
  }
  *(undefined1 *)((longlong)param_1 + 0x1d2) = uVar3;
  bVar9 = *(byte *)((longlong)param_2 + 0x2dc) & 1;
  bVar1 = *(byte *)((longlong)param_1 + 0x1d3);
  *(byte *)((longlong)param_1 + 0x1d3) = bVar1 & 0xfe | bVar9;
  bVar8 = *(byte *)((longlong)param_2 + 0x2dc) & 2;
  *(byte *)((longlong)param_1 + 0x1d3) = bVar1 & 0xfc | bVar9 | bVar8;
  *(byte *)((longlong)param_1 + 0x1d3) =
       bVar1 & 0xf8 | bVar9 | bVar8 | *(byte *)((longlong)param_2 + 0x2d4) >> 2 & 4;
  cVar2 = (**(code **)(*param_2 + 0x620))(param_2);
  bVar1 = *(byte *)((longlong)param_1 + 0x1d4);
  bVar9 = *(byte *)((longlong)param_1 + 0x1d3) & 0xf7 | cVar2 << 3;
  *(byte *)((longlong)param_1 + 0x1d3) = bVar9;
  *(byte *)((longlong)param_1 + 0x1d3) = bVar9 & 0xf | *(char *)((longlong)param_2 + 0x38c) << 4;
  *(byte *)((longlong)param_1 + 0x1d4) = bVar1 & 0xfe;
  *(byte *)((longlong)param_1 + 0x1d4) =
       bVar1 & 0xfc | *(byte *)((longlong)param_2 + 0x334) >> 3 & 2;
  *(char *)((longlong)param_1 + 0x1d5) = (char)param_2[0x67];
  *(undefined1 *)((longlong)param_1 + 0x1d6) = 0;
  uVar3 = (**(code **)(*param_2 + 0x628))(param_2);
  *(undefined1 *)((longlong)param_1 + 0x1d7) = uVar3;
  (**(code **)(*param_2 + 0x630))(param_2,param_1 + 0x3b);
  uVar3 = (**(code **)(*param_2 + 0x600))();
  *(undefined1 *)(param_1 + 0x3d) = uVar3;
  *(byte *)((longlong)param_1 + 0x1e9) = *(byte *)((longlong)param_2 + 0x339) & 7;
  *(longlong *)((longlong)param_1 + 0x1ec) = param_2[3];
  lVar12 = param_2[0x15];
  if (lVar12 != 0) {
    if (DAT_14cae8b20 == 0) {
      local_60 = &local_40;
      local_40 = (code *)&LAB_14355090c;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_147b8e16d;
      local_70 = (code *)&LAB_140810a38;
      local_78 = L"Engine";
      local_80 = 0x800000000;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar6 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1468c5283;
      local_70 = FUN_142809da0;
      local_78 = L"Engine";
      local_80 = 0x400000000;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar12 = *(longlong *)(lVar12 + 0x20);
    if (lVar12 == 0) {
      lVar13 = 0;
    }
    else {
      iVar11 = *(int *)(lVar6 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < iVar11) ||
           (lVar13 = lVar12,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)iVar11 * 8)
           != lVar6 + 0x30)) {
          lVar13 = 0;
        }
      } while ((lVar13 == 0) && (lVar12 = *(longlong *)(lVar12 + 0x20), lVar12 != 0));
    }
LAB_140bff752:
    lVar6 = lVar13;
    lVar12 = lVar6;
    if (*(longlong *)(lVar6 + 0x20) != 0) goto code_r0x000140bff761;
    goto LAB_140bff772;
  }
  uVar7 = 0;
LAB_140bff77b:
  *(undefined8 *)((longlong)param_1 + 500) = uVar7;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0x13f800000;
  *(int *)((longlong)param_1 + 0x224) = (int)param_2[0x5c];
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x22c) =
       *(byte *)((longlong)param_1 + 0x22c) & 0xfc | *(byte *)((longlong)param_2 + 0x394) & 1;
  uVar7 = DAT_14c8463d8;
  param_1[0x46] = DAT_14c8463d0;
  param_1[0x47] = uVar7;
  uVar7 = DAT_14c8463e8;
  param_1[0x48] = DAT_14c8463e0;
  param_1[0x49] = uVar7;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  cVar2 = FUN_14005b4aa(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1[2] + 8) * 2));
  *(byte *)((longlong)param_1 + 0x1d3) = *(byte *)((longlong)param_1 + 0x1d3) & 0xdf | cVar2 << 5;
  cVar2 = FUN_144adbdbb(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1[2] + 8) * 2));
  if (cVar2 != '\0') {
    *(byte *)(param_1 + 0x3a) =
         *(byte *)(param_1 + 0x3a) & 0xf7 | *(byte *)(param_1 + 0x3a) * '\x02' & 8;
  }
  if (DAT_14c760e18 == '\0') {
    *(byte *)(param_1 + 0x3a) =
         *(byte *)(param_1 + 0x3a) & 0xf7 | *(byte *)(param_1 + 0x3a) * '\x02' & 8;
  }
  piVar5 = (int *)FUN_140a83ce8(param_2);
  iVar11 = -1;
  if ((piVar5 != (int *)0x0) && ((*(byte *)(param_1 + 0x3a) & 0xc) == 8)) {
    iVar11 = *piVar5;
  }
  *(int *)((longlong)param_1 + 0x18c) = iVar11;
  iVar4 = *(int *)((longlong)param_2 + 0x304);
  if (*(int *)((longlong)param_2 + 0x304) == -1) {
    iVar4 = iVar11;
  }
  *(int *)(param_1 + 0x32) = iVar4;
  lVar12 = param_1[1];
  param_1[0x33] = lVar12 + 0x3a0;
  if (*(longlong *)(lVar12 + 0x360) != 0) {
    param_1[0x39] = *(longlong *)(lVar12 + 0x360);
  }
  FUN_14029dae6(lVar12,&local_40);
  *(undefined4 *)(param_1 + 8) = (undefined4)local_40;
  *(undefined4 *)((longlong)param_1 + 0x44) = local_40._4_4_;
  *(undefined4 *)(param_1 + 9) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_34;
  lVar12 = param_1[1];
  if (*(longlong **)(lVar12 + 0x340) == (longlong *)0x0) {
LAB_140bff946:
    uVar7 = 0;
  }
  else {
    lVar6 = (**(code **)(**(longlong **)(lVar12 + 0x340) + 0x2b8))();
    lVar12 = param_1[1];
    if (*(char *)(lVar6 + 0x128) != '\x02') goto LAB_140bff946;
    uVar7 = (**(code **)(**(longlong **)(lVar12 + 0x340) + 0x2f0))();
    lVar12 = param_1[1];
  }
  param_1[0x38] = uVar7;
  uVar7 = *(undefined8 *)(lVar12 + 0x350);
  param_1[0x34] = *(undefined8 *)(lVar12 + 0x348);
  param_1[0x35] = uVar7;
  param_1[0x36] = *(undefined8 *)(lVar12 + 0x358);
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(lVar12 + 0x370);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = *(undefined4 *)(lVar12 + 0x374);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(lVar12 + 0x2ec);
  if (((*(byte *)(param_1 + 0x3a) & 0x10) == 0) ||
     ((&DAT_14ca814b8)
      [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1[2] + 8) * 2) * 0xf] != 1))
  goto LAB_140bff9fe;
  cVar2 = *(char *)(param_1 + 0x3d);
  if (cVar2 == '\x01') {
    cVar2 = FUN_14006f626();
    if (cVar2 != '\0') {
      cVar2 = *(char *)(param_1 + 0x3d);
      goto LAB_140bff9db;
    }
LAB_140bff9f0:
    *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xef;
  }
  else {
LAB_140bff9db:
    if ((cVar2 == '\x03') || ((cVar2 == '\x02' && (DAT_14ca964dc == '\0')))) goto LAB_140bff9f0;
  }
  *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0x7f;
LAB_140bff9fe:
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0x3f800000;
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
code_r0x000140bff761:
  lVar13 = *(longlong *)(lVar6 + 0x20);
  if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) goto LAB_140bff752;
  lVar12 = FUN_142840154(lVar6);
LAB_140bff772:
  if (lVar12 == 0) {
    lVar13 = *(longlong *)(lVar6 + 0x20);
    goto LAB_140bff752;
  }
  uVar7 = *(undefined8 *)(lVar12 + 0x18);
  goto LAB_140bff77b;
}



// FUNCTION 140bffa48 FUN_140bffa48 body=49 status=ok
// SIG undefined FUN_140bffa48(void)

longlong FUN_140bffa48(void)

{
  if (DAT_14cb27cd0 == 0) {
    FUN_140f50038(&DAT_14cb27cd0,&PTR_s__Script_StateTreeModule_14ace1ad0);
  }
  return DAT_14cb27cd0;
}



// FUNCTION 140bffa88 FUN_140bffa88 body=170 status=ok
// SIG undefined FUN_140bffa88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140bffa88(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b1dcf30;
  FUN_1447cd778(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140bffb32 FUN_140bffb32 body=725 status=ok
// SIG undefined FUN_140bffb32(void)

void FUN_140bffb32(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_1447210f0();
  if ((lVar3 == 0) || (lVar3 = FUN_1447210f0(param_1), (*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0))
  goto LAB_140bffc6b;
  lVar3 = FUN_1447210f0();
  uVar1 = *(uint *)(lVar3 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  if (((*(uint *)(lVar3 + 8) >> 0x1c & 1) != 0) ||
     (((*(int *)(param_1 + 0x3a4) == 0 && *(int *)(param_1 + 0x3a0) == 0) &&
      *(int *)(param_1 + 0x3a8) == 0) && *(int *)(param_1 + 0x3ac) == 0)) goto LAB_140bffc6b;
  lVar3 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))(param_1 + 0x390);
  if (lVar3 != 0) {
    FUN_140c0004c(lVar3,param_1);
  }
  lVar3 = FUN_1447210f0(param_1);
  if (DAT_14caa7a28 == 0) {
    local_50 = &local_30;
    local_30 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_14588a134;
    local_58 = &LAB_147473291;
    local_60 = FUN_1457f6a1e;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x88;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSubsystem",&DAT_14caa7a28,&DAT_147473290);
  }
  lVar2 = DAT_14caa7a28;
  if ((DAT_14caa7a28 == 0) || (DAT_14c950c29 == '\0')) {
    if (DAT_14caa7a28 != 0) goto LAB_140bffc33;
LAB_140bffe01:
    lVar4 = 0;
  }
  else {
    FUN_1456cec3c(DAT_14caa7a28);
    if (DAT_14caa7a28 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_14588a134;
      local_58 = &LAB_147473291;
      local_60 = FUN_1457f6a1e;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x88;
      FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSubsystem",&DAT_14caa7a28,&DAT_147473290);
      if (DAT_14caa7a28 == 0) goto LAB_140bffe01;
    }
LAB_140bffc33:
    if (*(int *)(lVar2 + 0x38) < *(int *)(DAT_14caa7a28 + 0x38)) goto LAB_140bffe01;
    lVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14caa7a28 + 0x38) * 8) ==
        DAT_14caa7a28 + 0x30) {
      lVar4 = lVar2;
    }
  }
  lVar3 = FUN_1448a6f9c(lVar3 + 0x870,lVar4);
  if (lVar3 != 0) {
    FUN_140bffe08(lVar3,param_1);
  }
LAB_140bffc6b:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1448c0920(param_1,param_2);
  return;
}



// FUNCTION 140bffe08 FUN_140bffe08 body=224 status=ok
// SIG undefined FUN_140bffe08(void)

void FUN_140bffe08(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    local_20 = &local_28;
    FUN_140bffeea(param_1 + 0x58);
    if (param_2 == 0) goto LAB_140bffe75;
  }
  else {
    FUN_1456cec3c(param_2);
    local_20 = &local_28;
    FUN_140bffeea(param_1 + 0x58);
  }
  lVar1 = FUN_1406c3de4();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
      == lVar1 + 0x30)) {
    local_30 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    local_20 = &local_30;
    FUN_140c017aa(param_1 + 0x48);
  }
LAB_140bffe75:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140bffeea FUN_140bffeea body=353 status=ok
// SIG undefined FUN_140bffeea(void)

int FUN_140bffeea(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar5 = (int)param_1[1];
  lVar6 = (longlong)iVar5;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    lVar4 = *(longlong *)*param_2;
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
    }
    iVar7 = 0;
    iVar10 = 0;
    bVar8 = *plVar1 == lVar4;
    do {
      lVar9 = (longlong)iVar10;
      iVar11 = iVar10;
      lVar4 = lVar9;
      iVar3 = iVar10 + 1;
      if (iVar10 + 1 < iVar5) {
        iVar3 = iVar5;
      }
      do {
        lVar4 = lVar4 + 1;
        iVar12 = iVar3;
        if (lVar6 <= lVar4) break;
        lVar2 = *(longlong *)*param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        iVar12 = iVar11 + 1;
        iVar11 = iVar12;
      } while (bVar8 == (plVar1[lVar4] == lVar2));
      if (bVar8 == false) {
        if (iVar7 != iVar10) {
          memmove(plVar1 + iVar7,plVar1 + lVar9,(longlong)(iVar12 - iVar10) << 3);
        }
        iVar7 = iVar7 + (iVar12 - iVar10);
      }
      iVar10 = iVar12;
      bVar8 = (bool)(bVar8 ^ 1);
    } while (lVar4 < lVar6);
    *(int *)(param_1 + 1) = iVar7;
    iVar5 = iVar5 - iVar7;
  }
  return iVar5;
}



// FUNCTION 140c0004c FUN_140c0004c body=2142 status=ok
// SIG undefined FUN_140c0004c(void)

void FUN_140c0004c(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  void *pvVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_a8 [32];
  int local_88;
  byte local_76;
  byte local_75;
  int local_74;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1447210f0(param_2);
  local_60 = param_2;
  if (param_2 == 0) {
    local_50._0_4_ = 0;
    iVar8 = 0;
    uVar14 = (uint)local_50;
LAB_140c000ec:
    local_50._0_4_ = uVar14;
    local_50 = CONCAT44(iVar8,(uint)local_50);
    iVar8 = *(int *)(param_1 + 0xf8);
    lVar9 = (longlong)iVar8;
    param_2 = local_60;
    if (lVar9 != 0) {
      lVar18 = *(longlong *)(param_1 + 0xf0);
      bVar4 = FUN_140c008c4(lVar18,&local_50);
      local_58 = lVar18 + 8;
      iVar7 = 0;
      iVar17 = 0;
      local_70 = param_1;
      local_68 = lVar18;
      do {
        local_75 = bVar4;
        local_76 = local_75 ^ 1;
        lVar18 = (longlong)iVar17;
        iVar6 = iVar17 + 1;
        if (iVar17 + 1 < iVar8) {
          iVar6 = iVar8;
        }
        lVar25 = local_58 + lVar18 * 8;
        bVar4 = local_75 & 1;
        iVar19 = iVar17;
        lVar11 = lVar18;
        local_74 = iVar7;
        do {
          lVar11 = lVar11 + 1;
          iVar20 = iVar6;
          if (lVar9 <= lVar11) break;
          bVar5 = FUN_140c008c4(lVar25,&local_50);
          iVar19 = iVar19 + 1;
          lVar25 = lVar25 + 8;
          iVar20 = iVar19;
        } while (bVar4 == bVar5);
        param_1 = local_70;
        iVar7 = local_74;
        bVar4 = local_76;
        if ((local_75 & 1) == 0) {
          if (local_74 != iVar17) {
            memmove((void *)(local_68 + (longlong)local_74 * 8),(void *)(local_68 + lVar18 * 8),
                    (longlong)(iVar20 - iVar17) << 3);
          }
          iVar7 = iVar7 + (iVar20 - iVar17);
        }
        iVar17 = iVar20;
      } while (lVar11 < lVar9);
      *(int *)(param_1 + 0xf8) = iVar7;
      param_2 = local_60;
    }
  }
  else {
    lVar9 = FUN_1406c3de4();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
         ) != lVar9 + 0x30)) {
      uVar14 = *(uint *)(param_2 + 0xc);
      local_50 = (ulonglong)uVar14;
      if ((int)uVar14 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar8 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar8 = *(int *)(lVar9 + 0x10);
        bVar26 = iVar8 == 0;
        if (bVar26) {
          *(int *)(lVar9 + 0x10) = iVar7;
          iVar8 = 0;
        }
        UNLOCK();
        uVar14 = (uint)local_50;
        if (bVar26) {
          iVar8 = iVar7;
        }
      }
      goto LAB_140c000ec;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
LAB_140c0076a:
      lVar9 = 0;
    }
    else {
      uVar14 = *(uint *)(param_1 + 0x28);
      lVar9 = 0;
      if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)(param_1 + 0x2c) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_140c0076a;
        lVar9 = *plVar12;
      }
    }
    if (lVar9 == param_2) {
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    iVar8 = *(int *)(param_1 + 0xf8);
    if ((longlong)iVar8 != 0) {
      lVar9 = *(longlong *)(param_1 + 0xf0);
      lVar18 = 0;
      do {
        uVar10 = *(ulonglong *)(lVar9 + lVar18);
        if ((((uVar10 >> 0x20 != 0) && (uVar14 = (uint)uVar10, -1 < (int)uVar14)) &&
            ((int)uVar14 < DAT_14c9647dc)) &&
           (((plVar12 = (longlong *)
                        ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0xd & 0x3fff8))),
             plVar12 != (longlong *)0x0 && ((int)plVar12[2] == (int)(uVar10 >> 0x20))) &&
            (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (*plVar12 != 0)))))) {
          if ((*(int *)(param_1 + 0x2c) == 0) ||
             (uVar14 = *(uint *)(param_1 + 0x28), (int)uVar14 < 0)) {
LAB_140c007c7:
            uVar15 = 0;
          }
          else {
            uVar15 = 0;
            if ((int)uVar14 < DAT_14c9647dc) {
              puVar16 = (undefined8 *)
                        ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
              if (((puVar16 == (undefined8 *)0x0) ||
                  (*(int *)(puVar16 + 2) != *(int *)(param_1 + 0x2c))) ||
                 ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)) goto LAB_140c007c7;
              uVar15 = *puVar16;
            }
          }
          FUN_140cb81c0(*plVar12,uVar15);
        }
        lVar18 = lVar18 + 8;
      } while ((longlong)iVar8 * 8 != lVar18);
    }
  }
  iVar8 = *(int *)(param_2 + 0x598);
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_2 + 0x590) + lVar9 * 8) != 0) {
        FUN_140c00c02(param_1);
        iVar8 = *(int *)(param_2 + 0x598);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar8);
  }
  iVar8 = *(int *)(param_1 + 0x84);
  if ((longlong)iVar8 != 0) {
    uVar14 = *(uint *)(param_1 + 0x58);
    iVar17 = uVar14 - iVar8;
    iVar7 = iVar17;
    if (*(int *)(param_1 + 0x80) == -1) {
      bVar26 = false;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x50);
      bVar26 = false;
      iVar6 = *(int *)(param_1 + 0x80);
      uVar23 = uVar14;
      do {
        iVar19 = *(int *)(lVar9 + 4 + (longlong)iVar6 * 0x18);
        if (iVar6 < iVar17) {
          puVar16 = (undefined8 *)(lVar9 + (longlong)iVar6 * 0x18);
          lVar18 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar18 = param_1 + 0x60;
          }
          puVar3 = (undefined8 *)(lVar9 + 0x18 + (longlong)(int)(uVar23 - 1) * 0x18);
          uVar22 = uVar23;
          do {
            puVar21 = puVar3;
            uVar23 = uVar22 - 1;
            uVar24 = uVar22 + 0x1e;
            if (-1 < (int)uVar23) {
              uVar24 = uVar23;
            }
            puVar3 = puVar21 + -3;
            uVar22 = uVar23;
          } while ((*(uint *)(lVar18 + (longlong)((int)uVar24 >> 5) * 4) >> (uVar23 & 0x1f) & 1) ==
                   0);
          uVar15 = puVar21[-3];
          uVar2 = puVar21[-2];
          puVar16[2] = puVar21[-1];
          *puVar16 = uVar15;
          puVar16[1] = uVar2;
          lVar18 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar18 = param_1 + 0x60;
          }
          iVar20 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar20 = iVar6;
          }
          puVar1 = (uint *)(lVar18 + (longlong)(iVar20 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
          bVar26 = true;
        }
        iVar6 = iVar19;
      } while (iVar19 != -1);
      iVar6 = *(int *)(param_1 + 0x58) - uVar14;
      if (iVar6 != 0) {
        pvVar13 = (void *)((longlong)iVar17 * 0x18 + *(longlong *)(param_1 + 0x50));
        memmove(pvVar13,(void *)((longlong)pvVar13 + (longlong)iVar8 * 0x18),(longlong)iVar6 * 0x18)
        ;
        iVar7 = *(int *)(param_1 + 0x58) - iVar8;
      }
    }
    *(int *)(param_1 + 0x58) = iVar7;
    iVar7 = *(int *)(param_1 + 0x78) - uVar14;
    if (iVar7 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x70);
      if (*(longlong *)(param_1 + 0x70) == 0) {
        lVar9 = param_1 + 0x60;
      }
      local_88 = iVar7;
      FUN_14493566c(lVar9,iVar17,lVar9,uVar14);
      iVar17 = *(int *)(param_1 + 0x78) - iVar8;
    }
    iVar8 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar8 = iVar17;
    }
    *(int *)(param_1 + 0x78) = iVar17;
    if (iVar17 % 0x20 != 0) {
      lVar9 = param_1 + 0x60;
      if (*(longlong *)(param_1 + 0x70) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x70);
      }
      bVar4 = -(char)(iVar17 % 0x20);
      *(uint *)(lVar9 + (longlong)(iVar8 >> 5) * 4) =
           (uint)(*(int *)(lVar9 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
    }
    *(undefined8 *)(param_1 + 0x80) = 0xffffffff;
    iVar8 = *(int *)(param_1 + 0x5c);
    if (iVar8 == *(int *)(param_1 + 0x58)) {
      iVar7 = 0;
      if (bVar26) goto LAB_140c00393;
    }
    else {
      FUN_144727cd0(param_1 + 0x50);
      if (bVar26) {
        iVar8 = *(int *)(param_1 + 0x58);
        iVar7 = *(int *)(param_1 + 0x84);
LAB_140c00393:
        if ((uint)(iVar8 - iVar7) < 4) {
          iVar8 = 1;
        }
        else {
          uVar10 = (ulonglong)(iVar8 - iVar7 & 0xfffffffe) + 0xf;
          lVar9 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar8 = 1 << ((byte)lVar9 & 0x1f);
        }
        *(int *)(param_1 + 0x98) = iVar8;
        FUN_140c0119a(param_1 + 0x50);
      }
    }
  }
  iVar8 = *(int *)(param_2 + 0x5a8);
  if ((longlong)iVar8 != 0) {
    lVar9 = *(longlong *)(param_2 + 0x5a0);
    lVar18 = 0;
    do {
      if (*(longlong *)(lVar9 + lVar18) != 0) {
        FUN_140c0092c(param_1);
      }
      lVar18 = lVar18 + 8;
    } while ((longlong)iVar8 * 8 != lVar18);
  }
  iVar8 = *(int *)(param_1 + 0xd4);
  if ((longlong)iVar8 != 0) {
    uVar14 = *(uint *)(param_1 + 0xa8);
    iVar17 = uVar14 - iVar8;
    iVar7 = iVar17;
    if (*(int *)(param_1 + 0xd0) == -1) {
      bVar26 = false;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0xa0);
      bVar26 = false;
      iVar6 = *(int *)(param_1 + 0xd0);
      uVar23 = uVar14;
      do {
        iVar19 = *(int *)(lVar9 + 4 + (longlong)iVar6 * 0x18);
        if (iVar6 < iVar17) {
          puVar16 = (undefined8 *)(lVar9 + (longlong)iVar6 * 0x18);
          lVar18 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar18 = param_1 + 0xb0;
          }
          puVar3 = (undefined8 *)(lVar9 + 0x18 + (longlong)(int)(uVar23 - 1) * 0x18);
          uVar22 = uVar23;
          do {
            puVar21 = puVar3;
            uVar23 = uVar22 - 1;
            uVar24 = uVar22 + 0x1e;
            if (-1 < (int)uVar23) {
              uVar24 = uVar23;
            }
            puVar3 = puVar21 + -3;
            uVar22 = uVar23;
          } while ((*(uint *)(lVar18 + (longlong)((int)uVar24 >> 5) * 4) >> (uVar23 & 0x1f) & 1) ==
                   0);
          uVar15 = puVar21[-3];
          uVar2 = puVar21[-2];
          puVar16[2] = puVar21[-1];
          *puVar16 = uVar15;
          puVar16[1] = uVar2;
          lVar18 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar18 = param_1 + 0xb0;
          }
          iVar20 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar20 = iVar6;
          }
          puVar1 = (uint *)(lVar18 + (longlong)(iVar20 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
          bVar26 = true;
        }
        iVar6 = iVar19;
      } while (iVar19 != -1);
      iVar6 = *(int *)(param_1 + 0xa8) - uVar14;
      if (iVar6 != 0) {
        pvVar13 = (void *)((longlong)iVar17 * 0x18 + *(longlong *)(param_1 + 0xa0));
        memmove(pvVar13,(void *)((longlong)pvVar13 + (longlong)iVar8 * 0x18),(longlong)iVar6 * 0x18)
        ;
        iVar7 = *(int *)(param_1 + 0xa8) - iVar8;
      }
    }
    *(int *)(param_1 + 0xa8) = iVar7;
    iVar7 = *(int *)(param_1 + 200) - uVar14;
    if (iVar7 != 0) {
      lVar9 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar9 = param_1 + 0xb0;
      }
      local_88 = iVar7;
      FUN_14493566c(lVar9,iVar17,lVar9,uVar14);
      iVar17 = *(int *)(param_1 + 200) - iVar8;
    }
    iVar8 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar8 = iVar17;
    }
    *(int *)(param_1 + 200) = iVar17;
    if (iVar17 % 0x20 != 0) {
      lVar9 = param_1 + 0xb0;
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        lVar9 = *(longlong *)(param_1 + 0xc0);
      }
      bVar4 = -(char)(iVar17 % 0x20);
      *(uint *)(lVar9 + (longlong)(iVar8 >> 5) * 4) =
           (uint)(*(int *)(lVar9 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0xffffffff;
    iVar8 = *(int *)(param_1 + 0xac);
    if (iVar8 == *(int *)(param_1 + 0xa8)) {
      iVar7 = 0;
      if (!bVar26) goto LAB_140c00811;
    }
    else {
      FUN_144727cd0(param_1 + 0xa0);
      if (!bVar26) goto LAB_140c00811;
      iVar8 = *(int *)(param_1 + 0xa8);
      iVar7 = *(int *)(param_1 + 0xd4);
    }
    if ((uint)(iVar8 - iVar7) < 4) {
      iVar8 = 1;
    }
    else {
      uVar10 = (ulonglong)(iVar8 - iVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    *(int *)(param_1 + 0xe8) = iVar8;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
LAB_140c00811:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c008c4 FUN_140c008c4 body=104 status=ok
// SIG undefined FUN_140c008c4(void)

ulonglong FUN_140c008c4(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 == *param_2) && (uVar2 == param_2[1])) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  else {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar3 = FUN_144729dda(param_2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 140c0092c FUN_140c0092c body=611 status=ok
// SIG undefined FUN_140c0092c(void)

void FUN_140c0092c(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  
  if (param_2 != 0) {
    uVar11 = (longlong)*(int *)(param_2 + 0x630) / (longlong)*(int *)(param_2 + 0x638);
    uVar5 = (longlong)*(int *)(param_2 + 0x634) / (longlong)*(int *)(param_2 + 0x638);
    if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
      iVar3 = (int)uVar5;
      uVar4 = (uint)(uVar5 >> 0xd) & 0x7ffff ^ (int)uVar11 - iVar3;
      uVar7 = 0x9e3779b9 - (iVar3 + uVar4) ^ uVar4 << 8;
      uVar9 = uVar7 >> 0xd ^ (iVar3 - uVar4) - uVar7;
      uVar10 = uVar9 >> 0xc ^ (uVar4 - uVar7) - uVar9;
      uVar12 = uVar10 << 0x10 ^ (uVar7 - uVar9) - uVar10;
      uVar7 = uVar12 >> 5 ^ (uVar9 - uVar10) - uVar12;
      uVar9 = uVar7 >> 3 ^ (uVar10 - uVar12) - uVar7;
      uVar10 = uVar9 << 10 ^ (uVar12 - uVar7) - uVar9;
      lVar8 = *(longlong *)(param_1 + 0xe0);
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        lVar8 = param_1 + 0xd8;
      }
      iVar13 = *(int *)(lVar8 + (ulonglong)
                                (*(int *)(param_1 + 0xe8) - 1U &
                                (uVar10 >> 0xf ^ uVar7 - (uVar9 + uVar10))) * 4);
      if (iVar13 != -1) {
        uVar5 = uVar11 & 0xffffffff | uVar5 << 0x20;
        plVar1 = (longlong *)(param_1 + 0xa0);
        uVar11 = 0;
        do {
          puVar2 = (ulonglong *)(*plVar1 + (longlong)iVar13 * 0x18);
          if (*puVar2 == uVar5) {
            if (puVar2 == (ulonglong *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar11 = puVar2[1];
            }
            break;
          }
          iVar13 = (int)puVar2[2];
        } while (iVar13 != -1);
        if (uVar11 == param_2 && *(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
          uVar7 = 0x9e3779b9 - (iVar3 + uVar4) ^ uVar4 << 8;
          uVar9 = uVar7 >> 0xd ^ (iVar3 - uVar4) - uVar7;
          uVar4 = uVar9 >> 0xc ^ (uVar4 - uVar7) - uVar9;
          uVar7 = uVar4 << 0x10 ^ (uVar7 - uVar9) - uVar4;
          uVar10 = uVar7 >> 5 ^ (uVar9 - uVar4) - uVar7;
          uVar9 = uVar10 >> 3 ^ (uVar4 - uVar7) - uVar10;
          uVar4 = uVar9 << 10 ^ (uVar7 - uVar10) - uVar9;
          lVar8 = param_1 + 0xd8;
          if (*(longlong *)(param_1 + 0xe0) != 0) {
            lVar8 = *(longlong *)(param_1 + 0xe0);
          }
          iVar3 = *(int *)(lVar8 + ((longlong)(int)(uVar4 >> 0xf ^ uVar10 - (uVar9 + uVar4)) &
                                   (longlong)*(int *)(param_1 + 0xe8) - 1U) * 4);
          if (iVar3 != -1) {
            do {
              puVar2 = (ulonglong *)(*plVar1 + (longlong)iVar3 * 0x18);
              if (*puVar2 == uVar5) {
                iVar13 = *(int *)(lVar8 + (longlong)*(int *)((longlong)puVar2 + 0x14) * 4);
                if (iVar13 == iVar3) {
                  piVar6 = (int *)(lVar8 + (longlong)*(int *)((longlong)puVar2 + 0x14) * 4);
                }
                else {
                  do {
                    piVar6 = (int *)(*plVar1 + (longlong)iVar13 * 0x18 + 0x10);
                    iVar13 = *piVar6;
                  } while (iVar13 != iVar3);
                }
                *piVar6 = (int)puVar2[2];
                FUN_140c00b90(plVar1);
                return;
              }
              iVar3 = (int)puVar2[2];
            } while (iVar3 != -1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c00b90 FUN_140c00b90 body=114 status=ok
// SIG undefined FUN_140c00b90(void)

void FUN_140c00b90(longlong *param_1,int param_2)

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



// FUNCTION 140c00c02 FUN_140c00c02 body=1157 status=ok
// SIG undefined FUN_140c00c02(void)

void FUN_140c00c02(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  
  if (param_2 != 0) {
    uVar7 = (longlong)*(int *)(param_2 + 0x620) / (longlong)*(int *)(param_2 + 0x628);
    uVar12 = (longlong)*(int *)(param_2 + 0x624) / (longlong)*(int *)(param_2 + 0x628);
    if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
      iVar4 = (int)uVar12;
      uVar6 = (uint)(uVar12 >> 0xd) & 0x7ffff ^ (int)uVar7 - iVar4;
      uVar5 = 0x9e3779b9 - (iVar4 + uVar6) ^ uVar6 << 8;
      uVar13 = uVar5 >> 0xd ^ (iVar4 - uVar6) - uVar5;
      uVar20 = uVar13 >> 0xc ^ (uVar6 - uVar5) - uVar13;
      uVar22 = uVar20 << 0x10 ^ (uVar5 - uVar13) - uVar20;
      uVar5 = uVar22 >> 5 ^ (uVar13 - uVar20) - uVar22;
      uVar13 = uVar5 >> 3 ^ (uVar20 - uVar22) - uVar5;
      uVar20 = uVar13 << 10 ^ (uVar22 - uVar5) - uVar13;
      lVar18 = *(longlong *)(param_1 + 0x90);
      if (*(longlong *)(param_1 + 0x90) == 0) {
        lVar18 = param_1 + 0x88;
      }
      iVar16 = *(int *)(lVar18 + (ulonglong)
                                 (*(int *)(param_1 + 0x98) - 1U &
                                 (uVar20 >> 0xf ^ uVar5 - (uVar13 + uVar20))) * 4);
      if (iVar16 != -1) {
        uVar12 = uVar7 & 0xffffffff | uVar12 << 0x20;
        uVar7 = 0;
        do {
          puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar16 * 0x18);
          if (*puVar1 == uVar12) {
            if (puVar1 == (ulonglong *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = puVar1[1];
            }
            break;
          }
          iVar16 = (int)puVar1[2];
        } while (iVar16 != -1);
        if (uVar7 == param_2 && *(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
          uVar13 = 0x9e3779b9 - (iVar4 + uVar6) ^ uVar6 << 8;
          uVar20 = uVar13 >> 0xd ^ (iVar4 - uVar6) - uVar13;
          uVar5 = uVar20 >> 0xc ^ (uVar6 - uVar13) - uVar20;
          uVar6 = uVar5 << 0x10 ^ (uVar13 - uVar20) - uVar5;
          uVar13 = uVar6 >> 5 ^ (uVar20 - uVar5) - uVar6;
          uVar20 = uVar13 >> 3 ^ (uVar5 - uVar6) - uVar13;
          uVar5 = uVar20 << 10 ^ (uVar6 - uVar13) - uVar20;
          lVar18 = param_1 + 0x88;
          if (*(longlong *)(param_1 + 0x90) != 0) {
            lVar18 = *(longlong *)(param_1 + 0x90);
          }
          iVar4 = *(int *)(lVar18 + ((longlong)(int)(uVar5 >> 0xf ^ uVar13 - (uVar20 + uVar5)) &
                                    (longlong)*(int *)(param_1 + 0x98) - 1U) * 4);
          if (iVar4 != -1) {
            lVar19 = *(longlong *)(param_1 + 0x50);
LAB_140c00e01:
            puVar1 = (ulonglong *)(lVar19 + (longlong)iVar4 * 0x18);
            if (*puVar1 != uVar12) goto code_r0x000140c00e11;
            iVar16 = *(int *)(lVar18 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 4);
            if (iVar16 == iVar4) {
              piVar14 = (int *)(lVar18 + (longlong)*(int *)((longlong)puVar1 + 0x14) * 4);
            }
            else {
              do {
                piVar14 = (int *)(lVar19 + (longlong)iVar16 * 0x18 + 0x10);
                iVar16 = *piVar14;
              } while (iVar16 != iVar4);
            }
            *piVar14 = (int)puVar1[2];
            FUN_140c01128();
          }
        }
      }
    }
LAB_140c00e3d:
    FUN_140c01088(param_1 + 0x100,param_2);
    FUN_140c01088(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x1a0) = 0x7fffffff7fffffff;
    *(undefined8 *)(param_1 + 0x1a8) = 0x8000000080000000;
    iVar4 = *(int *)(param_1 + 0x78);
    if (iVar4 == 0) {
      uVar12 = 1;
      uVar7 = 0;
      iVar16 = 0;
      iVar11 = 0;
    }
    else {
      puVar9 = *(uint **)(param_1 + 0x70);
      if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x60);
      }
      uVar5 = *puVar9;
      if (uVar5 == 0) {
        iVar16 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar16 = iVar4 + -1;
        }
        uVar7 = 0;
        uVar12 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar12 = uVar7;
        }
        iVar11 = 0;
        do {
          if (uVar12 == uVar7) {
            return;
          }
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar9[uVar7 + 1];
          uVar7 = uVar7 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar7 = 0;
        iVar11 = 0;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar12 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar16 = (iVar11 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar16) {
        iVar16 = iVar4;
      }
    }
    if (iVar16 != iVar4) {
      puVar9 = (uint *)(param_1 + 0x60);
      if (*(uint **)(param_1 + 0x70) != (uint *)0x0) {
        puVar9 = *(uint **)(param_1 + 0x70);
      }
      iVar15 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar15 = iVar4 + -1;
      }
      iVar15 = iVar15 >> 5;
      uVar5 = 0xffffffff;
      iVar8 = 0x7fffffff;
      iVar10 = -0x80000000;
      iVar21 = -0x80000000;
      iVar23 = 0x7fffffff;
      do {
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar16 * 0x18);
        iVar16 = (int)uVar3;
        if (iVar16 <= iVar23) {
          iVar23 = iVar16;
        }
        *(int *)(param_1 + 0x1a0) = iVar23;
        iVar17 = (int)((ulonglong)uVar3 >> 0x20);
        if (iVar17 <= iVar8) {
          iVar8 = iVar17;
        }
        *(int *)(param_1 + 0x1a4) = iVar8;
        if (iVar21 < iVar16) {
          iVar21 = iVar16;
        }
        *(int *)(param_1 + 0x1a8) = iVar21;
        if (iVar10 < iVar17) {
          iVar10 = iVar17;
        }
        *(int *)(param_1 + 0x1ac) = iVar10;
        uVar5 = ~(uint)uVar12 & uVar5;
        iVar16 = (int)uVar7;
        lVar18 = (longlong)iVar16;
        uVar6 = puVar9[lVar18] & uVar5;
        if (uVar6 == 0) {
          iVar17 = iVar15;
          if (iVar15 < iVar16) {
            iVar17 = iVar16;
          }
          if (iVar15 <= iVar16) {
            return;
          }
          lVar19 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar6 = puVar9[lVar18 + lVar19 + 1];
            if (uVar6 != 0) break;
            lVar19 = lVar19 + 1;
            if (iVar17 - lVar18 == lVar19) {
              return;
            }
          }
          uVar7 = (ulonglong)(iVar16 + (int)lVar19 + 1);
          uVar5 = 0xffffffff;
        }
        uVar12 = (ulonglong)(-uVar6 & uVar6);
        uVar2 = uVar12 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar16 = (iVar11 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      } while (iVar16 < iVar4);
    }
  }
  return;
code_r0x000140c00e11:
  iVar4 = (int)puVar1[2];
  if (iVar4 == -1) goto LAB_140c00e3d;
  goto LAB_140c00e01;
}



// FUNCTION 140c01088 FUN_140c01088 body=159 status=ok
// SIG undefined FUN_140c01088(void)

undefined8 FUN_140c01088(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_14745a1b2(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140c01128 FUN_140c01128 body=114 status=ok
// SIG undefined FUN_140c01128(void)

void FUN_140c01128(longlong *param_1,int param_2)

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



// FUNCTION 140c0119a FUN_140c0119a body=775 status=ok
// SIG undefined FUN_140c0119a(void)

void FUN_140c0119a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_140c0120f;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar9 != uVar3);
LAB_140c0120f:
  iVar18 = (int)param_1[5];
  if (iVar18 == 0) {
    uVar4 = 0;
    uVar13 = 1;
    iVar7 = 0;
    iVar5 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar7 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar7 = iVar18 + -1;
      }
      uVar4 = 0;
      uVar13 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar13 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar13 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar9 = puVar12[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar19 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (iVar5 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar18 <= iVar7) {
      iVar7 = iVar18;
    }
  }
  if (iVar7 < iVar18) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar14 = (longlong)iVar7;
      uVar2 = *(undefined8 *)(lVar8 + lVar14 * 0x18);
      uVar15 = (uint)((ulonglong)uVar2 >> 0x20);
      uVar3 = uVar15 >> 0xd ^ (int)uVar2 - uVar15;
      uVar16 = uVar3 << 8 ^ (-0x61c88647 - uVar3) - uVar15;
      uVar15 = uVar16 >> 0xd ^ (uVar15 - uVar3) - uVar16;
      uVar17 = uVar15 >> 0xc ^ (uVar3 - uVar16) - uVar15;
      uVar3 = uVar17 << 0x10 ^ (uVar16 - uVar15) - uVar17;
      uVar16 = uVar3 >> 5 ^ (uVar15 - uVar17) - uVar3;
      uVar15 = uVar16 >> 3 ^ (uVar17 - uVar3) - uVar16;
      uVar3 = uVar15 << 10 ^ (uVar3 - uVar16) - uVar15;
      uVar19 = (longlong)(int)(uVar3 >> 0xf ^ uVar16 - (uVar15 + uVar3)) &
               (longlong)(int)param_1[9] - 1U;
      iVar18 = (int)uVar19;
      *(int *)(lVar8 + 0x14 + lVar14 * 0x18) = iVar18;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0x10 + lVar14 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar19) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar18 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar18 = (int)param_1[5];
      iVar7 = (int)uVar4;
      lVar8 = (longlong)iVar7;
      uVar3 = puVar12[lVar8] & uVar9;
      if (uVar3 == 0) {
        iVar10 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar10 = iVar18 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar7) {
          iVar11 = iVar7;
        }
        if (iVar10 <= iVar7) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar12[lVar8 + lVar14 + 1];
          if (uVar3 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar11 - lVar8 == lVar14) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar7 + (int)lVar14 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar19 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (iVar5 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar18);
  }
  return;
}



// FUNCTION 140c014a2 FUN_140c014a2 body=775 status=ok
// SIG undefined FUN_140c014a2(void)

void FUN_140c014a2(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_140c01517;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar9 != uVar3);
LAB_140c01517:
  iVar18 = (int)param_1[5];
  if (iVar18 == 0) {
    uVar4 = 0;
    uVar13 = 1;
    iVar7 = 0;
    iVar5 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar7 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar7 = iVar18 + -1;
      }
      uVar4 = 0;
      uVar13 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar13 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar13 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar9 = puVar12[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar19 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (iVar5 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar18 <= iVar7) {
      iVar7 = iVar18;
    }
  }
  if (iVar7 < iVar18) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar14 = (longlong)iVar7;
      uVar2 = *(undefined8 *)(lVar8 + lVar14 * 0x18);
      uVar15 = (uint)((ulonglong)uVar2 >> 0x20);
      uVar3 = uVar15 >> 0xd ^ (int)uVar2 - uVar15;
      uVar16 = uVar3 << 8 ^ (-0x61c88647 - uVar3) - uVar15;
      uVar15 = uVar16 >> 0xd ^ (uVar15 - uVar3) - uVar16;
      uVar17 = uVar15 >> 0xc ^ (uVar3 - uVar16) - uVar15;
      uVar3 = uVar17 << 0x10 ^ (uVar16 - uVar15) - uVar17;
      uVar16 = uVar3 >> 5 ^ (uVar15 - uVar17) - uVar3;
      uVar15 = uVar16 >> 3 ^ (uVar17 - uVar3) - uVar16;
      uVar3 = uVar15 << 10 ^ (uVar3 - uVar16) - uVar15;
      uVar19 = (longlong)(int)(uVar3 >> 0xf ^ uVar16 - (uVar15 + uVar3)) &
               (longlong)(int)param_1[9] - 1U;
      iVar18 = (int)uVar19;
      *(int *)(lVar8 + 0x14 + lVar14 * 0x18) = iVar18;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0x10 + lVar14 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar19) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar18 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar18 = (int)param_1[5];
      iVar7 = (int)uVar4;
      lVar8 = (longlong)iVar7;
      uVar3 = puVar12[lVar8] & uVar9;
      if (uVar3 == 0) {
        iVar10 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar10 = iVar18 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar7) {
          iVar11 = iVar7;
        }
        if (iVar10 <= iVar7) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar12[lVar8 + lVar14 + 1];
          if (uVar3 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar11 - lVar8 == lVar14) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar7 + (int)lVar14 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar19 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (iVar5 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar18);
  }
  return;
}



// FUNCTION 140c017aa FUN_140c017aa body=353 status=ok
// SIG undefined FUN_140c017aa(void)

int FUN_140c017aa(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    lVar5 = *(longlong *)*param_2;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    iVar8 = 0;
    iVar10 = 0;
    bVar4 = *plVar1 == lVar5;
    do {
      lVar9 = (longlong)iVar10;
      iVar11 = iVar10;
      lVar5 = lVar9;
      iVar3 = iVar10 + 1;
      if (iVar10 + 1 < iVar6) {
        iVar3 = iVar6;
      }
      do {
        lVar5 = lVar5 + 1;
        iVar12 = iVar3;
        if (lVar7 <= lVar5) break;
        lVar2 = *(longlong *)*param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        iVar12 = iVar11 + 1;
        iVar11 = iVar12;
      } while (bVar4 == (plVar1[lVar5] == lVar2));
      if (bVar4 == false) {
        if (iVar8 != iVar10) {
          memmove(plVar1 + iVar8,plVar1 + lVar9,(longlong)(iVar12 - iVar10) << 3);
        }
        iVar8 = iVar8 + (iVar12 - iVar10);
      }
      iVar10 = iVar12;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar5 < lVar7);
    *(int *)(param_1 + 1) = iVar8;
    iVar6 = iVar6 - iVar8;
  }
  return iVar6;
}



// FUNCTION 140c0190c FUN_140c0190c body=178 status=ok
// SIG undefined FUN_140c0190c(void)

void FUN_140c0190c(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined ***pppuVar1;
  undefined1 auStack_98 [40];
  longlong local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 & 2) != 0) {
    local_70 = FUN_140c01bae(param_1 + 0x58);
    if (local_70 != 0) {
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14b410fd0;
      local_40 = &local_70;
      local_68[0] = FUN_143da0840;
      FUN_140c019bf(param_2,param_1 + 0x30,local_68);
      if (local_68[0] != (code *)0x0) {
        pppuVar1 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar1 = &local_48;
        }
        (*(code *)(*pppuVar1)[2])();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c019bf FUN_140c019bf body=259 status=ok
// SIG undefined FUN_140c019bf(void)

void FUN_140c019bf(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  FUN_14024dbd6(param_1,local_118,0);
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_118;
  }
  lVar6 = (longlong)(int)local_50;
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      uVar3 = *(undefined8 *)(puVar7 + lVar5);
      cVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3);
      if (cVar2 != '\0') {
        pcVar1 = (code *)*param_3;
        plVar4 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar4 = param_3 + 4;
        }
        local_120 = uVar3;
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*pcVar1)(uVar3,&local_120);
      }
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 != lVar5);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c01ac4 FUN_140c01ac4 body=234 status=ok
// SIG undefined FUN_140c01ac4(void)

bool FUN_140c01ac4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (*(longlong *)(param_2 + 0x18) != *(longlong *)(param_1 + 8))) {
    return false;
  }
  if (((*(char *)(param_1 + 0x20) == '\0') && (lVar2 = *(longlong *)(param_2 + 0x120), lVar2 != 0))
     && (*(longlong *)(lVar2 + 0xa8) == *(longlong *)(param_2 + 0xa8))) {
    lVar1 = FUN_14081cebe();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      return false;
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if ((longlong)*(int *)(param_2 + 0x78) == 0) {
      return false;
    }
    lVar2 = 0;
    while (*(longlong *)(*(longlong *)(param_2 + 0x70) + lVar2) != *(longlong *)(param_1 + 0x10)) {
      lVar2 = lVar2 + 8;
      if ((longlong)*(int *)(param_2 + 0x78) * 8 == lVar2) {
        return false;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    if ((longlong)*(int *)(param_2 + 0x78) == 0) {
      return true;
    }
    lVar2 = 0;
    do {
      bVar3 = *(longlong *)(*(longlong *)(param_2 + 0x70) + lVar2) != *(longlong *)(param_1 + 0x18);
      if (!bVar3) {
        return bVar3;
      }
      bVar4 = (longlong)*(int *)(param_2 + 0x78) * 8 + -8 != lVar2;
      lVar2 = lVar2 + 8;
    } while (bVar4);
    return bVar3;
  }
  return true;
}



// FUNCTION 140c01bae FUN_140c01bae body=398 status=ok
// SIG undefined FUN_140c01bae(void)

longlong FUN_140c01bae(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (lVar4 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar6;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar7 = FUN_140c01d3c();
  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 140c01d3c FUN_140c01d3c body=228 status=ok
// SIG undefined FUN_140c01d3c(void)

longlong FUN_140c01d3c(void)

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
  if (DAT_14cb6a2e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_14875d4f5;
    local_40 = FUN_14185ca32;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GbxGame",L"InventoryMaterialParamsDataAsset",&DAT_14cb6a2e0,
                  FUN_1465258aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6a2e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c01e22 FUN_140c01e22 body=127 status=ok
// SIG undefined FUN_140c01e22(void)

void FUN_140c01e22(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_144837e54(param_3,0);
  lVar2 = *(longlong *)(param_3 + 0x30);
  if (lVar2 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x470))(param_1);
    *(undefined8 *)(param_3 + 0x30) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x480))(param_1);
    *(undefined8 *)(param_3 + 0x38) = uVar1;
    FUN_1400f0d6e(param_1,param_3,0);
    lVar2 = *(longlong *)(param_3 + 0x30);
  }
  if (*(int *)(param_3 + 0x40) != *(int *)(param_3 + 0x44)) {
    uVar1 = FUN_1405b1a32();
    FUN_1446e7478(param_3 + 0x48,lVar2,uVar1,1);
    *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x44);
  }
  return;
}



// FUNCTION 140c01ea2 FUN_140c01ea2 body=74 status=ok
// SIG undefined FUN_140c01ea2(void)

void FUN_140c01ea2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14181ad18();
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[1] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR_FUN_14acb7da0;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  return;
}



// FUNCTION 140c01eec FUN_140c01eec body=427 status=ok
// SIG undefined FUN_140c01eec(void)

undefined8 FUN_140c01eec(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa9780) && (FUN_144b3d300(&DAT_14caa9780), DAT_14caa9780 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14caa9778 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite.ProxyRenderMode",1);
    _Init_thread_footer(&DAT_14caa9780);
  }
  if (DAT_14caa9778 != (longlong *)0x0) {
    (**(code **)(*DAT_14caa9778 + 0xb0))();
  }
  if ((*(longlong *)(param_1 + 0x660) != 0) &&
     ((cVar1 = FUN_140c02098(param_1), cVar1 == '\0' ||
      ((~*(byte *)(param_1 + 0x851) & 0xc) == 0 || (*(byte *)(param_1 + 0x851) & 0x10) != 0)))) {
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x218);
    }
    cVar1 = FUN_14479fe53(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(lVar3 + 8) * 2),1,1);
    if ((((cVar1 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x660) + 0xe0) == '\x01')) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x50), lVar3 != 0)) &&
       ((*(char *)(lVar3 + 1) == '\x01' && (DAT_14c760f50 != 0)))) {
      uVar2 = FUN_14001cc68(0x460,0x10);
      FUN_140c0215a(uVar2,param_1);
      return uVar2;
    }
    cVar1 = FUN_145784aac();
    if (cVar1 != '\0') {
      uVar2 = FUN_14001cc68(0x790,0x10);
      FUN_1474b6b34(uVar2,param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140c02098 FUN_140c02098 body=194 status=ok
// SIG undefined FUN_140c02098(void)

ulonglong FUN_140c02098(longlong param_1)

{
  ulonglong uVar1;
  
  if (((DAT_14c760f34 == '\x01') && (*(longlong *)(param_1 + 0x878) != 0)) &&
     (*(longlong *)(param_1 + 0x880) != 0)) {
    uVar1 = (ulonglong)DAT_14c8442bc;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < (int)DAT_14c8442bc) &&
       (uVar1 = FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == 0xffffffff)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      uVar1 = _Init_thread_footer(&DAT_14c8442bc);
    }
    if ((DAT_14c872bf0 != '\x01') || (DAT_14c872bf1 == '\x01')) {
      return CONCAT71((int7)(uVar1 >> 8),DAT_14c8442b8) ^ 1;
    }
  }
  return 0;
}



// FUNCTION 140c0215a FUN_140c0215a body=2245 status=ok
// SIG undefined FUN_140c0215a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c0215a(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  char cVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  longlong *plVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined4 *puVar24;
  byte bVar25;
  int iVar26;
  byte bVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  bool bVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_138 [40];
  undefined8 *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong local_f8 [2];
  undefined8 local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1409222be();
  *param_1 = &PTR_FUN_14a4169e0;
  param_1[0x59] = param_2[0xcc];
  uVar21 = uRam000000014cad0ee8;
  param_1[0x5c] = _DAT_14cad0ee0;
  param_1[0x5d] = uVar21;
  uVar21 = _DAT_14cad0ed8;
  param_1[0x5a] = _DAT_14cad0ed0;
  param_1[0x5b] = uVar21;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0xffffffff;
  lVar22 = 0;
  param_1[0x61] = 0;
  *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) & 0xe7;
  param_1[0x70] = 0;
  param_1[0x71] = 0x100000000;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0;
  *(undefined2 *)(param_1 + 0x87) = 0;
  *(byte *)((longlong)param_1 + 0x43a) = *(byte *)((longlong)param_1 + 0x43a) & 0xfe;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  if (param_2[0x16] != 0) {
    lVar22 = *(longlong *)(param_2[0x16] + 0x218);
  }
  local_110 = param_1;
  local_108 = param_2;
  (**(code **)(*param_2 + 0xa10))(param_2,&local_e8,*(undefined4 *)(lVar22 + 8));
  *(undefined4 *)(param_1 + 0x61) = (undefined4)local_e8;
  *(undefined4 *)((longlong)param_1 + 0x30c) = local_e8._4_4_;
  *(undefined4 *)(param_1 + 0x62) = uStack_e0;
  *(uint *)((longlong)param_1 + 0x314) = uStack_dc;
  uVar19 = *(uint *)(param_1 + 99);
  *(ushort *)(param_1 + 0x87) =
       (short)((uVar19 & 0x10) << 5) + ((ushort)*(undefined4 *)(param_1 + 0x87) & 0xfd9b) + 100;
  bVar25 = *(byte *)((longlong)param_1 + 0x75) | 0x80;
  *(byte *)((longlong)param_1 + 0x75) = bVar25;
  if (param_2[0xcc] == 0) {
    bVar27 = 0xff;
  }
  else {
    bVar27 = ~*(byte *)(param_2[0xcc] + 0x130) << 7 | 0x7f;
  }
  *(byte *)((longlong)local_110 + 0x75) = bVar27 & bVar25;
  local_110[0x12] = param_1 + 100;
  *(byte *)((longlong)local_110 + 0x76) = *(byte *)((longlong)local_110 + 0x76) & 0xfe;
  *(byte *)((longlong)local_110 + 0x6f) = *(byte *)((longlong)local_110 + 0x6f) & 0xfd;
  *(byte *)((longlong)local_110 + 0x73) = *(byte *)((longlong)local_110 + 0x73) | 0x80;
  *(byte *)((longlong)local_110 + 0x74) = *(byte *)((longlong)local_110 + 0x74) & 0xfe;
  *(uint *)(local_110 + 99) = uVar19 & 0xfffffffb;
  lVar22 = *(longlong *)(local_110[0x59] + 0x218);
  local_100 = *(longlong **)(local_110[0x59] + 0x220);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  plVar23 = (longlong *)(lVar22 + 0x4a0);
  plVar2 = local_110 + 0x53;
  uVar17 = (**(code **)(*(longlong *)(lVar22 + 0x4a0) + 0x60))(plVar23);
  FUN_14008bf44(plVar2,uVar17,1);
  iVar18 = (**(code **)(*(longlong *)(lVar22 + 0x4a0) + 0x60))(plVar23);
  if (0 < iVar18) {
    lVar28 = 0;
    lVar32 = 0;
    lVar29 = 0;
    do {
      lVar30 = *(longlong *)(lVar22 + 0x4b0);
      iVar18 = *(int *)(lVar30 + lVar28);
      iVar26 = *(int *)(local_110 + 0x55);
      if (*(int *)(local_110 + 0x55) <= iVar18) {
        iVar26 = iVar18;
      }
      *(int *)(local_110 + 0x55) = iVar26;
      if ((iVar18 == -1) ||
         (plVar20 = (longlong *)
                    (**(code **)(*local_108 + 0x610))(local_108,*(undefined4 *)(lVar30 + lVar28)),
         plVar20 == (longlong *)0x0)) {
        plVar20 = (longlong *)0x0;
LAB_140c02436:
        uVar19 = *(uint *)(local_110 + 99) | 4;
        *(uint *)(local_110 + 99) = uVar19;
      }
      else {
        uVar19 = (**(code **)(*plVar20 + 0x408))(plVar20);
        if (1 < uVar19) goto LAB_140c02436;
        (**(code **)(*plVar20 + 0x410))(plVar20,&local_e8);
        if (((ushort)local_e8 >> 10 & 1) != 0) goto LAB_140c02436;
        uVar19 = *(uint *)(local_110 + 99);
      }
      if ((uVar19 & 4) != 0) {
        FUN_14003fbd6();
        plVar20 = DAT_14caea080;
      }
      uVar21 = (**(code **)(*plVar20 + 0x2f0))(plVar20);
      *(undefined8 *)(*plVar2 + 8 + lVar32) = uVar21;
      uVar21 = (**(code **)(*plVar20 + 0x2f0))(plVar20);
      *(undefined8 *)(*plVar2 + lVar32) = uVar21;
      *(undefined4 *)(*plVar2 + 0x10 + lVar32) = *(undefined4 *)(lVar30 + lVar28);
      pbVar4 = (byte *)(*plVar2 + 0x50 + lVar32);
      *pbVar4 = *pbVar4 | 8;
      lVar29 = lVar29 + 1;
      iVar18 = (**(code **)(*plVar23 + 0x60))(plVar23);
      lVar32 = lVar32 + 0x60;
      lVar28 = lVar28 + 0x20;
    } while (lVar29 < iVar18);
  }
  uVar21 = DAT_14c996af0;
  local_e8 = "BoundingBox";
  uStack_e0 = 0xb;
  uStack_dc = uStack_dc & 0xffffff00;
  uVar17 = FUN_14001a6c0(&local_e8,1);
  cVar16 = FUN_140498cd4(lVar22,uVar17,uVar21);
  if (cVar16 == '\0') {
    bVar33 = false;
  }
  else {
    iVar18 = FUN_1401f66f6(lVar22,DAT_14c996af0);
    bVar33 = iVar18 != 0;
  }
  iVar18 = FUN_1401f66f6(lVar22);
  uVar21 = DAT_14c9974a8;
  if (iVar18 != 0) {
    local_e8 = "BoundingBox";
    uStack_e0 = 0xb;
    uStack_dc = uStack_dc & 0xffffff00;
    uVar17 = FUN_14001a6c0(&local_e8,1);
    cVar16 = FUN_140498cd4(lVar22,uVar17,uVar21);
    uVar21 = DAT_14c9974a8;
    if (cVar16 != '\0') {
      local_e8 = "TransformToGeometryIndex";
      uStack_e0 = 0x18;
      uStack_dc = uStack_dc & 0xffffff00;
      uVar17 = FUN_14001a6c0(&local_e8,1);
      cVar16 = FUN_140498cd4(lVar22,uVar17,uVar21);
      goto LAB_140c02597;
    }
  }
  cVar16 = '\0';
LAB_140c02597:
  puVar3 = local_110 + 0x5e;
  if (bVar33) {
    uVar19 = FUN_1401f66f6(lVar22,DAT_14c996af0);
    FUN_14098d4d8(puVar3,uVar19);
    uVar21 = DAT_14c996af0;
    local_e8 = "BoundingBox";
    uStack_e0 = 0xb;
    uStack_dc = uStack_dc & 0xffffff00;
    uVar17 = FUN_14001a6c0(&local_e8,1);
    lVar22 = FUN_1429fcaca(lVar22,uVar17,uVar21);
    if (0 < (int)uVar19) {
      lVar28 = 0x28;
      lVar29 = 0x38;
      uVar31 = 0;
      do {
        lVar32 = local_110[0x5e];
        *(undefined4 *)(lVar32 + lVar29) =
             *(undefined4 *)
              (*(longlong *)(*(longlong *)(*(longlong *)(local_110[0x59] + 0x50) + 0x1f8) + 0x58) +
              uVar31 * 4);
        lVar30 = *(longlong *)(lVar22 + 0x10);
        dVar6 = *(double *)(lVar30 + -0x18 + lVar28);
        dVar7 = *(double *)(lVar30 + -0x28 + lVar28);
        dVar8 = *(double *)(lVar30 + -0x20 + lVar28);
        dVar9 = (*(double *)(lVar30 + lVar28) - dVar6) * 0.5;
        dVar34 = (*(double *)(lVar30 + -8 + lVar28) - dVar8) * 0.5;
        dVar35 = (*(double *)(lVar30 + -0x10 + lVar28) - dVar7) * 0.5;
        *(double *)(lVar32 + -0x38 + lVar29) = dVar7 + dVar35;
        *(double *)(lVar32 + -0x30 + lVar29) = dVar8 + dVar34;
        *(double *)(lVar32 + -0x28 + lVar29) = dVar6 + dVar9;
        *(double *)(lVar32 + -0x20 + lVar29) = dVar35;
        *(double *)(lVar32 + -0x18 + lVar29) = dVar34;
        *(double *)(lVar32 + -0x10 + lVar29) = dVar9;
        *(double *)(lVar32 + -8 + lVar29) = SQRT(dVar9 * dVar9 + dVar35 * dVar35 + dVar34 * dVar34);
        uVar31 = uVar31 + 1;
        lVar28 = lVar28 + 0x38;
        lVar29 = lVar29 + 0x40;
      } while (uVar19 != uVar31);
    }
  }
  else if (cVar16 != '\0') {
    FUN_14098d4d8(puVar3,*(undefined4 *)
                          (*(longlong *)(*(longlong *)(local_110[0x59] + 0x50) + 0x1f8) + 0x60));
    uVar21 = DAT_14c9974a8;
    local_e8 = "BoundingBox";
    uStack_e0 = 0xb;
    uStack_dc = uStack_dc & 0xffffff00;
    uVar17 = FUN_14001a6c0(&local_e8,1);
    lVar28 = FUN_1429fcaca(lVar22,uVar17,uVar21);
    uVar21 = DAT_14c9974a8;
    local_e8 = "TransformToGeometryIndex";
    uStack_e0 = 0x18;
    uStack_dc = uStack_dc & 0xffffff00;
    uVar17 = FUN_14001a6c0(&local_e8,1);
    plVar23 = (longlong *)FUN_140619ac2(lVar22,uVar17,uVar21);
    uVar19 = (**(code **)(*plVar23 + 0x60))(plVar23);
    if (0 < (int)uVar19) {
      lVar22 = 0x28;
      uVar31 = 0;
      do {
        lVar29 = (longlong)*(int *)(plVar23[2] + uVar31 * 4);
        if (-1 < lVar29) {
          lVar32 = local_110[0x5e];
          lVar30 = lVar29 * 0x40;
          *(undefined4 *)(lVar32 + 0x38 + lVar30) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(*(longlong *)(local_110[0x59] + 0x50) + 0x1f8) + 0x58)
                + lVar29 * 4);
          lVar29 = *(longlong *)(lVar28 + 0x10);
          dVar6 = *(double *)(lVar29 + -0x18 + lVar22);
          dVar7 = *(double *)(lVar29 + -0x28 + lVar22);
          dVar8 = *(double *)(lVar29 + -0x20 + lVar22);
          dVar9 = (*(double *)(lVar29 + lVar22) - dVar6) * 0.5;
          dVar34 = (*(double *)(lVar29 + -8 + lVar22) - dVar8) * 0.5;
          dVar35 = (*(double *)(lVar29 + -0x10 + lVar22) - dVar7) * 0.5;
          *(double *)(lVar32 + lVar30) = dVar7 + dVar35;
          *(double *)(lVar32 + 8 + lVar30) = dVar8 + dVar34;
          *(double *)(lVar32 + 0x10 + lVar30) = dVar6 + dVar9;
          *(double *)(lVar32 + 0x18 + lVar30) = dVar35;
          *(double *)(lVar32 + 0x20 + lVar30) = dVar34;
          *(double *)(lVar32 + 0x28 + lVar30) = dVar9;
          *(double *)(lVar32 + 0x30 + lVar30) =
               SQRT(dVar9 * dVar9 + dVar35 * dVar35 + dVar34 * dVar34);
        }
        uVar31 = uVar31 + 1;
        lVar22 = lVar22 + 0x38;
      } while (uVar19 != uVar31);
    }
  }
  plVar2 = local_100;
  plVar23 = local_108;
  puVar15 = local_110;
  puVar3 = local_110 + 0x5a;
  lVar22 = 0xff;
  if (*(char *)((longlong)local_108 + 0x1fb) == '\0') {
    lVar29 = 0xff;
    lVar28 = 0;
  }
  else if (*(char *)((longlong)local_108 + 0x1fb) == '\x01') {
    lVar28 = 0x80;
    lVar29 = 0x80;
  }
  else if ((*(byte *)(local_108 + 0x83) & 1) == 0) {
    lVar28 = 0xff;
    lVar29 = 0;
  }
  else {
    lVar22 = 0x80;
    lVar28 = 0;
    lVar29 = 0xff;
  }
  uVar17 = (&DAT_14c758c60)[lVar29];
  uVar5 = (&DAT_14c758c60)[lVar22];
  *(undefined4 *)(local_110 + 2) = (&DAT_14c758c60)[lVar28];
  *(undefined4 *)((longlong)local_110 + 0x14) = uVar17;
  *(undefined4 *)(local_110 + 3) = uVar5;
  *(undefined4 *)((longlong)local_110 + 0x1c) = 0x3f800000;
  local_f8[0] = 0;
  local_f8[1] = 0;
  FUN_140517682(local_108,local_f8);
  puVar24 = (undefined4 *)(**(code **)(*plVar23 + 0x558))(plVar23);
  uVar17 = puVar24[1];
  uVar5 = puVar24[2];
  uVar10 = puVar24[3];
  uVar11 = puVar24[4];
  uVar12 = puVar24[5];
  uVar13 = puVar24[6];
  uVar14 = puVar24[7];
  *(undefined4 *)puVar3 = *puVar24;
  *(undefined4 *)((longlong)puVar15 + 0x2d4) = uVar17;
  *(undefined4 *)(puVar15 + 0x5b) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x2dc) = uVar10;
  *(undefined4 *)(puVar15 + 0x5c) = uVar11;
  *(undefined4 *)((longlong)puVar15 + 0x2e4) = uVar12;
  *(undefined4 *)(puVar15 + 0x5d) = uVar13;
  *(undefined4 *)((longlong)puVar15 + 0x2ec) = uVar14;
  uVar21 = FUN_14327b36c(plVar23,1);
  (**(code **)(*plVar23 + 0x7a8))(plVar23,&local_e8);
  FUN_144910c5a(puVar15,uVar21,&local_e8);
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar23 = plVar2 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_110;
}



// FUNCTION 140c02a20 FUN_140c02a20 body=123 status=ok
// SIG undefined FUN_140c02a20(void)

void FUN_140c02a20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = param_1 + 0x38;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x48);
  }
  FUN_140c02a9b(lVar4,*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000140c02a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140c02a9b FUN_140c02a9b body=75 status=ok
// SIG undefined FUN_140c02a9b(void)

void FUN_140c02a9b(longlong param_1,int param_2)

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



// FUNCTION 140c02ae6 FUN_140c02ae6 body=859 status=ok
// SIG undefined FUN_140c02ae6(void)

void FUN_140c02ae6(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  char cVar10;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  char local_9c;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined7 local_80;
  undefined1 uStack_79;
  undefined5 uStack_78;
  undefined1 local_73;
  undefined1 local_72;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined1 *)(param_1 + 0x19) = 1;
  plVar1 = (longlong *)param_1[0xf];
  if (((plVar1 == (longlong *)0x0) || (param_1[0x10] == -1)) || (*plVar1 != param_1[0x10])) {
    local_c8 = (longlong *)0x0;
    FUN_140c02e42(param_1);
  }
  else {
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + 1;
    local_c8 = plVar1;
    FUN_140c02e42(param_1);
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
    if ((int)plVar1[0x26] < 1) {
      FUN_1400847bc(plVar1 + 0x17,0);
      if ((int)plVar1[0x21] == 0) {
        FUN_140087e46(plVar1);
        if (*plVar1 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_140c02b44;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
        }
      }
    }
  }
LAB_140c02b44:
  lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
  if (lVar5 != 0) {
    iVar3 = FUN_14490d72a(lVar5);
    if (iVar3 == 1) goto LAB_140c02bdc;
  }
  plVar1 = param_1 + 0x13;
  lVar6 = FUN_14494f566(plVar1);
  if (lVar6 != 0) {
    lVar6 = FUN_14494f566(plVar1);
    plVar7 = *(longlong **)(lVar6 + 0x18);
    if (*(code **)(*plVar7 + 0x50) != FUN_144828418) {
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x50))();
    }
    FUN_1447a1fc0(plVar7);
    plVar7 = *(longlong **)(lVar6 + 0x18);
    pcVar2 = *(code **)(*plVar7 + 0x28);
    if (pcVar2 == FUN_14482841c) {
      plVar9 = plVar7 + 3;
      if (plVar7[5] != 0) {
        plVar9 = (longlong *)(plVar7[5] + 8);
      }
    }
    else if (pcVar2 == (code *)&LAB_14010c34c) {
      plVar9 = plVar7 + 2;
    }
    else {
      plVar9 = (longlong *)(*pcVar2)(plVar7);
    }
    if (1 < (int)plVar9[1]) {
      lVar6 = FUN_140a436e4(param_1 + 0xd,lVar5);
      if (lVar6 == 0) {
        cVar10 = '\x02';
      }
      else {
        cVar10 = *(char *)(lVar6 + 0x20);
      }
      plVar7 = (longlong *)FUN_1400f6f32(lVar5);
      if (plVar7 != (longlong *)0x0) {
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2b0))(plVar7);
        if ((plVar7 != (longlong *)0x0) && (cVar10 != '\0')) {
          if (*(int *)((longlong)param_1 + 0xcc) != 0) {
            (**(code **)(*plVar7 + 0x28))(plVar7);
          }
          uVar8 = FUN_14494f566(plVar1);
          uVar8 = FUN_145784abc(uVar8);
          lVar5 = FUN_14494f566(plVar1);
          local_b0 = FUN_140c03056(param_1);
          local_c8 = (longlong *)CONCAT44(local_c8._4_4_,(float)(int)cVar10);
          local_c0 = *(longlong **)(lVar5 + 0x18);
          if (local_c0 != (longlong *)0x0) {
            (**(code **)(*local_c0 + 8))();
          }
          local_b8 = *(undefined4 *)(lVar5 + 0x20);
          local_9c = '\0';
          local_68 = 0;
          local_80 = 0;
          uStack_79 = 0;
          uStack_78 = 0;
          local_73 = 0;
          local_72 = 0;
          local_98 = param_1[0xf];
          local_90 = param_1[0x10];
          local_88 = param_1[0x11];
          local_73 = FUN_140c0309c(param_1 + 0xd);
          local_72 = *(undefined1 *)((longlong)param_1 + 0xd2);
          local_70 = uVar8;
          uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,&local_c8);
          *(undefined4 *)((longlong)param_1 + 0xcc) = uVar4;
          local_98 = 0;
          local_90 = 0xffffffffffffffff;
          if (local_9c == '\x01') {
            local_9c = '\0';
          }
          if (local_c0 != (longlong *)0x0) {
            (**(code **)(*local_c0 + 0x10))();
          }
        }
      }
    }
  }
LAB_140c02bdc:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c02e42 FUN_140c02e42 body=379 status=ok
// SIG undefined FUN_140c02e42(void)

void FUN_140c02e42(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar9 = *param_2;
  if (lVar9 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x198);
  iVar3 = *(int *)(param_1 + 0x194);
  uVar8 = FUN_140316ff8();
  uVar8 = FUN_140c02fbe(uVar8);
  FUN_1447997cc(lVar9,uVar8,(float)(iVar2 + iVar3),0,0);
  lVar9 = *(longlong *)(param_1 + 0x150);
  if (lVar9 == 0) {
    uVar8 = FUN_14043db3a();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x150) = lVar9;
  }
  lVar10 = *(longlong *)(param_1 + 0x158);
  if (lVar10 == 0) {
    if ((lVar9 == 0) || (*(longlong *)(param_1 + 0x148) == 0)) goto LAB_140c02ec4;
    plVar6 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar7 == '\0')) {
      *(undefined8 *)(param_1 + 0x158) = 0;
      goto LAB_140c02ec4;
    }
    uVar8 = (**(code **)(*plVar6 + 0x110))(plVar6);
    lVar10 = FUN_144aff482(uVar8,(longlong *)(param_1 + 0x148));
    *(longlong *)(param_1 + 0x158) = lVar10;
    if (lVar10 == 0) goto LAB_140c02ec4;
  }
  if ((longlong)*(int *)(lVar10 + 0x48) != 0) {
    lVar9 = *(longlong *)(lVar10 + 0x40);
    lVar10 = (longlong)*(int *)(lVar10 + 0x48) << 5;
    do {
      lVar5 = *param_2;
      uVar4 = *(undefined4 *)(lVar9 + 0x1c);
      uVar1 = *(undefined4 *)(lVar9 + 0x18);
      uVar8 = FUN_145784d2a(lVar9);
      FUN_1447997cc(lVar5,uVar8,uVar1,uVar4,0);
      lVar9 = lVar9 + 0x20;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
LAB_140c02ec4:
  FUN_140c030da(param_1,param_2);
  return;
}



// FUNCTION 140c02fbe FUN_140c02fbe body=151 status=ok
// SIG undefined FUN_140c02fbe(void)

void FUN_140c02fbe(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x630);
  if (lVar4 == 0) {
    uVar3 = FUN_1407f787c();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x630) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x638) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x628) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x628));
    }
    *(undefined8 *)(param_1 + 0x638) = uVar3;
    return;
  }
  return;
}



// FUNCTION 140c03056 FUN_140c03056 body=69 status=ok
// SIG undefined FUN_140c03056(void)

undefined8 FUN_140c03056(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14494f566(param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_143d65c14(param_1);
    uVar2 = FUN_14494f566(param_1 + 0x98);
    uVar2 = FUN_140206e00(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140c0309c FUN_140c0309c body=62 status=ok
// SIG undefined FUN_140c0309c(void)

ulonglong FUN_140c0309c(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14494f566(param_1 + 0x30);
  if (lVar1 != 0) {
    uVar2 = FUN_14494f566(param_1 + 0x30);
    uVar2 = FUN_141889c9a(uVar2);
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),*(undefined1 *)(param_1 + 0x61)) ^ 1;
    }
  }
  return 0;
}



// FUNCTION 140c030da FUN_140c030da body=1088 status=ok
// SIG undefined FUN_140c030da(void)

void FUN_140c030da(longlong param_1,longlong *param_2)

{
  uint uVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong *local_88;
  ulonglong uStack_80;
  void *local_78;
  ulonglong uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*param_2 == 0) || (lVar3 = FUN_1449e3f1e(), lVar3 == 0)) goto LAB_140c03474;
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  lVar4 = FUN_14188dce0(param_1);
  if (lVar4 == 0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = *(longlong **)(lVar4 + 0x32b8);
  }
  if (*(longlong **)(param_1 + 0x180) == (longlong *)0x0) {
LAB_140c0324e:
    fVar12 = 0.0;
    if (plVar8 != (longlong *)0x0) goto LAB_140c0325a;
  }
  else {
    if ((((*(int *)(param_1 + 0x17c) != 0) && (uVar1 = *(uint *)(param_1 + 0x178), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       (((lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0 &&
         (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x17c))) &&
        (((*(uint *)(lVar4 + 8) & 0x10200000) == 0 &&
         (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))(), lVar4 != 0)))))) {
      uVar5 = FUN_1407ca880();
      plVar6 = (longlong *)FUN_144718840(lVar4,uVar5);
      if ((plVar8 == (longlong *)0x0) && (plVar6 != (longlong *)0x0)) {
        plVar8 = (longlong *)(**(code **)(*plVar6 + 0x58))(plVar6,&DAT_14cb71330);
      }
    }
    if (((((*(longlong **)(param_1 + 0x180) == (longlong *)0x0) || (*(int *)(param_1 + 0x17c) == 0))
         || (uVar1 = *(uint *)(param_1 + 0x178), (int)uVar1 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar1 ||
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)))) ||
       ((*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0x17c) ||
        (((*(uint *)(lVar4 + 8) & 0x10200000) != 0 ||
         (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))(), lVar4 == 0))))))
    goto LAB_140c0324e;
    lVar7 = FUN_140a3aef4();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_140c0324e;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = *(longlong **)(lVar4 + 0x1aa8);
      goto LAB_140c0324e;
    }
LAB_140c0325a:
    uVar5 = FUN_1403ad4e4();
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar5);
    fVar12 = 0.0;
    if (plVar8 != (longlong *)0x0) {
      uVar5 = FUN_1403ad4e4();
      plVar6 = (longlong *)FUN_144718840(plVar8,uVar5);
      if ((plVar8 != plVar6) && (plVar6 != (longlong *)0x0)) {
        local_68 = 0;
        uStack_60 = 0;
        local_78 = (void *)0x0;
        uStack_70 = 0;
        (**(code **)(*plVar6 + 0x10))(plVar6,&local_78);
        _Src = local_78;
        lVar4 = (longlong)(int)uStack_70;
        uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_70);
        if (lVar4 == 0) {
          uStack_80 = uStack_70 & 0xffffffff;
        }
        else {
          FUN_140c19d4e(&local_88,uStack_70 & 0xffffffff,0);
          memcpy(local_88,_Src,lVar4 << 3);
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        if ((longlong)(int)uStack_80 != 0) {
          plVar8 = local_88;
          do {
            if (*(int *)(lVar3 + 600) != *(int *)(lVar3 + 0x284)) {
              lVar4 = *plVar8;
              uVar1 = (uint)((ulonglong)lVar4 >> 0x10);
              uVar10 = (uint)lVar4 & 0xffff;
              lVar7 = *(longlong *)(lVar3 + 0x290);
              if (*(longlong *)(lVar3 + 0x290) == 0) {
                lVar7 = lVar3 + 0x288;
              }
              iVar11 = *(int *)(lVar7 + (ulonglong)
                                        (*(int *)(lVar3 + 0x298) - 1U &
                                        (int)((ulonglong)lVar4 >> 0x20) +
                                        ((uint)lVar4 << 0x10 | uVar10) +
                                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar10 >> 4)) * 4);
              if (iVar11 != -1) {
                do {
                  plVar6 = (longlong *)(*(longlong *)(lVar3 + 0x250) + (longlong)iVar11 * 0x14);
                  if (*plVar6 == lVar4) {
                    if (plVar6 + 1 != (longlong *)0x0 && plVar6 != (longlong *)0x0) {
                      fVar12 = (float)(int)plVar6[1];
                      goto LAB_140c033c7;
                    }
                    break;
                  }
                  iVar11 = *(int *)((longlong)plVar6 + 0xc);
                } while (iVar11 != -1);
              }
            }
            plVar8 = plVar8 + 1;
          } while (plVar8 != local_88 + (int)uStack_80);
        }
      }
    }
  }
LAB_140c033c7:
  lVar4 = *param_2;
  lVar7 = *(longlong *)(lVar3 + 0x240);
  if (lVar7 == 0) {
    uVar5 = FUN_1407f787c();
    lVar7 = FUN_14477b664(uVar5);
    *(longlong *)(lVar3 + 0x240) = lVar7;
  }
  lVar9 = *(longlong *)(lVar3 + 0x248);
  if (((lVar9 == 0) && (lVar9 = 0, lVar7 != 0)) && (*(longlong *)(lVar3 + 0x238) != 0)) {
    plVar8 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
      lVar9 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar8 + 0x110))(plVar8);
      lVar9 = FUN_144aff482(uVar5,(longlong *)(lVar3 + 0x238));
    }
    *(longlong *)(lVar3 + 0x248) = lVar9;
  }
  local_98 = 0;
  FUN_1447997cc(lVar4,lVar9,fVar12,0);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140c03474:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c0351c FUN_140c0351c body=369 status=ok
// SIG undefined FUN_140c0351c(void)

void FUN_140c0351c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_140c035a1;
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
LAB_140c035a1:
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



// FUNCTION 140c03694 FUN_140c03694 body=88 status=ok
// SIG undefined FUN_140c03694(void)

void FUN_140c03694(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa8);
  if (lVar1 != 0) {
    uVar2 = FUN_1408e1156();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0xb8))(plVar3,*(undefined8 *)(param_1 + 0x20));
      goto LAB_140c036d3;
    }
  }
  uVar2 = 0;
LAB_140c036d3:
  *(undefined8 *)(param_1 + 0x630) = uVar2;
  FUN_140c036ec(param_1);
  return;
}



// FUNCTION 140c036ec FUN_140c036ec body=120 status=ok
// SIG undefined FUN_140c036ec(void)

void FUN_140c036ec(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c03766();
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa8);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1407725cc();
    uVar2 = FUN_144718840(lVar1,uVar2);
  }
  FUN_1407eff2c(&local_28,uVar2);
  *(undefined4 *)(param_1 + 0x5c0) = local_28;
  *(undefined4 *)(param_1 + 0x5c4) = uStack_24;
  *(undefined4 *)(param_1 + 0x5c8) = uStack_20;
  *(undefined4 *)(param_1 + 0x5cc) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c03766 FUN_140c03766 body=180 status=ok
// SIG undefined FUN_140c03766(void)

void FUN_140c03766(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14072811c();
  (**(code **)(*param_1 + 0x380))(param_1);
  if (*(longlong *)(param_1[4] + 0xa8) == 0) {
    param_1[0xab] = 0;
  }
  else {
    lVar1 = FUN_140a40fb0();
    if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
      param_1[0xab] = lVar1;
      if (lVar1 == 0) goto LAB_140c037c1;
    }
    else {
      FUN_1456cec3c(lVar1);
      param_1[0xab] = lVar1;
    }
    FUN_140c0381c(lVar1 + 0x1258,local_20,param_1,&LAB_140d36428);
  }
LAB_140c037c1:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c0381c FUN_140c0381c body=765 status=ok
// SIG undefined FUN_140c0381c(void)

undefined8 * FUN_140c0381c(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

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
  *local_58 = (longlong)&PTR_LAB_14ab9f910;
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
  *local_58 = (longlong)&PTR_FUN_14ab9f000;
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
      if (local_58 == (longlong *)0x0) goto LAB_140c039c8;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_140c039b2;
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
LAB_140c039b2:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140c039c8:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c03b68 FUN_140c03b68 body=240 status=ok
// SIG undefined FUN_140c03b68(void)

void FUN_140c03b68(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40 [3];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar3 = FUN_140c04244();
    lVar4 = FUN_14477b664(uVar3);
    param_2[1] = lVar4;
  }
  lVar5 = *param_2;
  if (param_2[2] == 0) {
    if (lVar4 == 0 || lVar5 == 0) goto LAB_140c03bc6;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_2);
        param_2[2] = lVar4;
        if (lVar4 == 0) goto LAB_140c03bc6;
        lVar5 = *param_2;
        goto LAB_140c03b97;
      }
    }
    param_2[2] = 0;
  }
  else {
LAB_140c03b97:
    FUN_140c0427e(*(undefined8 *)(param_1 + 0x58),param_2);
    local_28 = local_40;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[0] = lVar5;
    FUN_140c03c5a(param_1 + 0x70);
  }
LAB_140c03bc6:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c03c5a FUN_140c03c5a body=1514 status=ok
// SIG undefined FUN_140c03c5a(void)

int FUN_140c03c5a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  bool bVar23;
  bool bVar24;
  int local_94;
  
  iVar1 = (int)param_1[1];
  lVar21 = (longlong)iVar1;
  if (lVar21 == 0) {
    return 0;
  }
  plVar2 = (longlong *)*param_1;
  plVar22 = (longlong *)*param_2;
  if (plVar2[1] == 0) {
    uVar16 = FUN_140c04244();
    lVar12 = FUN_14477b664(uVar16);
    plVar2[1] = lVar12;
  }
  lVar12 = plVar22[1];
  if (lVar12 == 0) {
    lVar12 = FUN_140c04244();
  }
  lVar20 = *plVar22;
  lVar12 = FUN_14477b664(lVar12);
  iVar8 = 0;
  if ((lVar12 != 0) && (plVar22 = *(longlong **)(lVar12 + 0xb8), plVar22 != (longlong *)0x0)) {
    lVar13 = *plVar22;
    pcVar3 = *(code **)(lVar13 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar7 = (*pcVar3)(plVar22);
      iVar8 = 0;
      if (cVar7 == '\0') goto LAB_140c03d20;
      lVar13 = *plVar22;
    }
    pcVar3 = *(code **)(lVar13 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar17 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar17 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar17 = (undefined **)(*pcVar3)(plVar22);
    }
    iVar8 = FUN_144aff48c(ppuVar17);
  }
LAB_140c03d20:
  lVar13 = *plVar2;
  lVar4 = plVar2[1];
  iVar9 = 0;
  if ((lVar4 != 0) && (plVar22 = *(longlong **)(lVar4 + 0xb8), plVar22 != (longlong *)0x0)) {
    lVar14 = *plVar22;
    pcVar3 = *(code **)(lVar14 + 0x108);
    if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
      cVar7 = (*pcVar3)(plVar22);
      iVar9 = 0;
      if (cVar7 == '\0') goto LAB_140c03d9b;
      lVar14 = *plVar22;
    }
    pcVar3 = *(code **)(lVar14 + 0x110);
    if (pcVar3 == (code *)&LAB_144783426) {
      ppuVar17 = &PTR_PTR_14c763408;
    }
    else if (pcVar3 == (code *)&LAB_144783432) {
      ppuVar17 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar17 = (undefined **)(*pcVar3)(plVar22);
    }
    iVar9 = FUN_144aff48c(ppuVar17);
  }
LAB_140c03d9b:
  local_94 = 0;
  if (iVar9 == iVar8) {
    bVar24 = false;
    if ((((lVar13 == lVar20) && (bVar24 = true, lVar4 != lVar12)) && (bVar24 = false, lVar12 != 0))
       && (lVar4 != 0)) {
      iVar8 = *(int *)(lVar12 + 0x38);
      iVar9 = *(int *)(lVar4 + 0x38);
      if ((iVar9 < iVar8) ||
         (bVar24 = true,
         *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar8 * 8) != lVar12 + 0x30)) {
        if (iVar8 < iVar9) {
          bVar24 = false;
        }
        else {
          bVar24 = *(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar9 * 8) == lVar4 + 0x30
          ;
        }
      }
    }
  }
  else {
    bVar24 = false;
  }
  iVar8 = 0;
  do {
    lVar12 = (longlong)iVar8;
    iVar18 = iVar8 + 1;
    iVar9 = iVar18;
    if (iVar18 < iVar1) {
      iVar9 = iVar1;
    }
    if (lVar12 + 1 < lVar21) {
      lVar20 = lVar12 + 2;
      plVar22 = plVar2 + lVar12 * 3 + 4;
      bVar23 = true;
      do {
        plVar5 = (longlong *)*param_2;
        if (*plVar22 == 0) {
          uVar16 = FUN_140c04244();
          lVar13 = FUN_14477b664(uVar16);
          *plVar22 = lVar13;
        }
        lVar13 = plVar5[1];
        if (lVar13 == 0) {
          lVar13 = FUN_140c04244();
        }
        lVar4 = *plVar5;
        lVar13 = FUN_14477b664(lVar13);
        iVar10 = 0;
        if ((lVar13 != 0) && (plVar5 = *(longlong **)(lVar13 + 0xb8), plVar5 != (longlong *)0x0)) {
          lVar14 = *plVar5;
          pcVar3 = *(code **)(lVar14 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar7 = (*pcVar3)(plVar5);
            iVar10 = 0;
            if (cVar7 == '\0') goto LAB_140c03f21;
            lVar14 = *plVar5;
          }
          pcVar3 = *(code **)(lVar14 + 0x110);
          ppuVar17 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar17 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar17 = (undefined **)(*pcVar3)(plVar5);
          }
          iVar10 = FUN_144aff48c(ppuVar17);
        }
LAB_140c03f21:
        lVar14 = plVar22[-1];
        lVar6 = *plVar22;
        iVar11 = 0;
        if ((lVar6 != 0) && (plVar5 = *(longlong **)(lVar6 + 0xb8), plVar5 != (longlong *)0x0)) {
          lVar15 = *plVar5;
          pcVar3 = *(code **)(lVar15 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar7 = (*pcVar3)(plVar5);
            iVar11 = 0;
            if (cVar7 == '\0') goto LAB_140c03f94;
            lVar15 = *plVar5;
          }
          pcVar3 = *(code **)(lVar15 + 0x110);
          ppuVar17 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar17 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar17 = (undefined **)(*pcVar3)(plVar5);
          }
          iVar11 = FUN_144aff48c(ppuVar17);
        }
LAB_140c03f94:
        iVar19 = iVar18;
        if ((iVar11 == iVar10) && (lVar14 == lVar4)) {
          if (lVar6 == lVar13) {
LAB_140c04066:
            if (bVar24 == false) break;
          }
          else {
            if ((lVar13 == 0) || (lVar6 == 0)) goto LAB_140c03fa7;
            iVar10 = *(int *)(lVar13 + 0x38);
            iVar11 = *(int *)(lVar6 + 0x38);
            if ((iVar10 <= iVar11) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar10 * 8) == lVar13 + 0x30))
            goto LAB_140c04066;
            if (iVar10 < iVar11) goto LAB_140c03fa7;
            if ((*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar11 * 8) == lVar6 + 0x30)
                != bVar24) break;
          }
        }
        else {
LAB_140c03fa7:
          if (bVar24 != false) break;
        }
        bVar23 = lVar20 < lVar21;
        iVar18 = iVar18 + 1;
        lVar13 = (1 - lVar21) + lVar20;
        lVar20 = lVar20 + 1;
        plVar22 = plVar22 + 3;
        iVar19 = iVar9;
      } while (lVar13 != 1);
    }
    else {
      bVar23 = false;
      iVar19 = iVar9;
    }
    if (bVar24 == false) {
      if (local_94 != iVar8) {
        memmove(plVar2 + (longlong)local_94 * 3,plVar2 + lVar12 * 3,
                (longlong)(iVar19 - iVar8) * 0x18);
      }
      local_94 = local_94 + (iVar19 - iVar8);
    }
    bVar24 = (bool)(bVar24 ^ 1);
    iVar8 = iVar19;
    if (!bVar23) {
      *(int *)(param_1 + 1) = local_94;
      return iVar1 - local_94;
    }
  } while( true );
}



// FUNCTION 140c04244 FUN_140c04244 body=57 status=ok
// SIG undefined FUN_140c04244(void)

void FUN_140c04244(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb57210 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb57210 = FUN_140002ddd(FUN_1464bbc00,uVar1,L"GbxDialogScriptDef");
  }
  return;
}



// FUNCTION 140c0427e FUN_140c0427e body=3244 status=ok
// SIG undefined FUN_140c0427e(void)

void FUN_140c0427e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  short *psVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  void *pvVar17;
  longlong lVar18;
  short *psVar19;
  longlong lVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong lVar28;
  undefined2 uVar29;
  uint uVar30;
  size_t _Size;
  int iVar31;
  int *piVar32;
  ushort *puVar33;
  longlong lVar34;
  ulonglong uVar35;
  int iVar36;
  ulonglong uVar37;
  undefined1 auStack_138 [40];
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong local_f8;
  uint local_ec;
  longlong *local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined4 *local_a8;
  ulonglong uStack_a0;
  void *local_98;
  ulonglong uStack_90;
  void *local_88;
  ulonglong uStack_80;
  void **local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = param_2;
  local_100 = param_1;
  if ((int)param_1[0xf] != *(int *)((longlong)param_1 + 0xa4)) {
    pvVar17 = (void *)*param_2;
    uVar10 = (uint)((ulonglong)pvVar17 >> 0x10);
    uVar15 = (uint)pvVar17 & 0xffff;
    plVar27 = param_1 + 0x15;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar27 = (longlong *)param_1[0x16];
    }
    iVar11 = *(int *)((longlong)plVar27 +
                     (ulonglong)
                     ((int)param_1[0x17] - 1U &
                     (int)((ulonglong)pvVar17 >> 0x20) + ((uint)pvVar17 << 0x10 | uVar15) +
                     (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar15 >> 4)) * 4);
    if (iVar11 != -1) {
      local_d0 = param_1 + 0xe;
      do {
        plVar27 = (longlong *)(*local_d0 + (longlong)iVar11 * 0x14);
        if ((void *)*plVar27 == pvVar17) {
          if ((plVar27 == (longlong *)0x0) || (plVar27 = plVar27 + 1, plVar27 == (longlong *)0x0))
          break;
          lVar26 = param_2[1];
          if (lVar26 == 0) {
            uVar14 = FUN_140c04244();
            lVar26 = FUN_14477b664(uVar14);
            local_110[1] = lVar26;
            pvVar17 = (void *)*local_110;
          }
          local_c8 = plVar27;
          if (local_110[2] == 0) {
            if (lVar26 == 0 || pvVar17 == (void *)0x0) break;
            plVar27 = *(longlong **)(lVar26 + 0xb8);
            if ((plVar27 == (longlong *)0x0) ||
               (cVar9 = (**(code **)(*plVar27 + 0x108))(plVar27), cVar9 == '\0')) {
              local_110[2] = 0;
              break;
            }
            uVar14 = (**(code **)(*plVar27 + 0x110))(plVar27);
            plVar27 = local_110;
            lVar26 = FUN_144aff482(uVar14,local_110);
            plVar27[2] = lVar26;
            if (lVar26 == 0) break;
            pvVar17 = (void *)*local_110;
          }
          local_78 = &local_88;
          local_88 = pvVar17;
          FUN_1408ff3be(local_100 + 0xc);
          plVar27 = local_110;
          lVar26 = local_110[1];
          if (lVar26 == 0) {
            uVar14 = FUN_140c04244();
            lVar26 = FUN_14477b664(uVar14);
            plVar27[1] = lVar26;
          }
          lVar28 = plVar27[2];
          if (((lVar28 == 0) && (lVar28 = 0, lVar26 != 0)) && (*local_110 != 0)) {
            plVar27 = *(longlong **)(lVar26 + 0xb8);
            if ((plVar27 == (longlong *)0x0) ||
               (cVar9 = (**(code **)(*plVar27 + 0x108))(plVar27), cVar9 == '\0')) {
              lVar28 = 0;
            }
            else {
              uVar14 = (**(code **)(*plVar27 + 0x110))(plVar27);
              lVar28 = FUN_144aff482(uVar14,local_110);
            }
            local_110[2] = lVar28;
          }
          if ((longlong)*(int *)(lVar28 + 0x60) == 0) goto LAB_140c04caf;
          plVar27 = *(longlong **)(lVar28 + 0x58);
          local_c0 = plVar27 + (longlong)*(int *)(lVar28 + 0x60) * 6;
          local_100 = local_100 + 2;
          goto LAB_140c043fa;
        }
        iVar11 = *(int *)((longlong)plVar27 + 0xc);
      } while (iVar11 != -1);
    }
  }
  goto LAB_140c04cc1;
LAB_140c043fa:
  do {
    lVar26 = plVar27[1];
    local_108 = plVar27;
    if (lVar26 == 0) {
      uVar14 = FUN_1407ad36c();
      lVar26 = FUN_14477b664(uVar14);
      local_108[1] = lVar26;
    }
    if (local_108[2] == 0) {
      if ((*local_108 != 0) && (lVar26 != 0)) {
        plVar27 = *(longlong **)(lVar26 + 0xb8);
        if ((plVar27 == (longlong *)0x0) ||
           (cVar9 = (**(code **)(*plVar27 + 0x108))(plVar27), cVar9 == '\0')) {
          local_108[2] = 0;
        }
        else {
          uVar14 = (**(code **)(*plVar27 + 0x110))(plVar27);
          plVar27 = local_108;
          lVar26 = FUN_144aff482(uVar14,local_108);
          plVar27[2] = lVar26;
          if (lVar26 != 0) {
            lVar26 = local_108[1];
            goto LAB_140c04417;
          }
        }
      }
    }
    else {
LAB_140c04417:
      if (lVar26 == 0) {
        lVar26 = FUN_1407ad36c();
      }
      plVar27 = local_108;
      lVar28 = *local_108;
      uVar12 = FUN_14477b664(lVar26);
      uVar10 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
      uVar15 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      uVar15 = uVar15 >> 0x10 ^ uVar15;
      uVar10 = (uint)((ulonglong)lVar28 >> 0x10);
      uVar16 = (uint)lVar28 & 0xffff;
      uVar10 = uVar15 >> 0xd ^
               (((uint)lVar28 << 0x10 | uVar16) + (int)((ulonglong)lVar28 >> 0x20) +
                (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar16 >> 4)) - uVar15;
      uVar16 = uVar10 << 8 ^ (-0x61c88647 - uVar15) - uVar10;
      uVar30 = uVar16 >> 0xd ^ (uVar15 - uVar10) - uVar16;
      uVar10 = uVar30 >> 0xc ^ (uVar10 - uVar16) - uVar30;
      uVar15 = uVar10 << 0x10 ^ (uVar16 - uVar30) - uVar10;
      uVar30 = uVar15 >> 5 ^ (uVar30 - uVar10) - uVar15;
      uVar16 = uVar30 >> 3 ^ (uVar10 - uVar15) - uVar30;
      uVar10 = uVar16 << 10 ^ (uVar15 - uVar30) - uVar16;
      iVar11 = FUN_1405a5be8(local_100,uVar10 >> 0xf ^ uVar30 - (uVar16 + uVar10),plVar27);
      if (iVar11 != -1) {
        lVar26 = *local_100 + (longlong)iVar11 * 0x50;
        if ((lVar26 != 0) &&
           (plVar27 = (longlong *)(*local_100 + (longlong)iVar11 * 0x50 + 0x18),
           plVar27 != (longlong *)0x0)) {
          lVar28 = *local_c8;
          local_78 = (void **)0x0;
          uVar10 = *(uint *)(lVar26 + 0x40);
          uStack_70 = (ulonglong)uVar10;
          if ((longlong)(int)uVar10 != 0) {
            FUN_1446f48e2(&local_78);
          }
          local_e8 = (longlong *)(lVar26 + 0x38);
          local_d8 = plVar27;
          memset(local_78,0,(longlong)(int)uVar10 << 2);
          uVar10 = *(uint *)(lVar26 + 0x40);
          local_e0 = lVar26;
          if (0 < (int)uVar10) {
            lVar26 = 0;
            uVar15 = 0;
            do {
              iVar11 = *(int *)(*local_e8 + 8 + lVar26 * 0x18);
              lVar20 = (longlong)iVar11;
              local_ec = uVar15;
              if (lVar20 == 0) {
                uVar10 = 0xffffffff;
              }
              else {
                local_b0 = (longlong *)(*local_e8 + lVar26 * 0x18);
                local_b8 = *local_b0;
                local_f8 = local_b8 + 0x5c;
                iVar36 = 0;
                iVar31 = 0;
                bVar21 = *(int *)(local_b8 + 0x2c) == (int)lVar28;
                do {
                  lVar34 = (longlong)iVar31;
                  iVar8 = iVar31 + 1;
                  if (iVar31 + 1 < iVar11) {
                    iVar8 = iVar11;
                  }
                  lVar18 = lVar34 * 0x30;
                  piVar32 = (int *)(local_f8 + lVar18);
                  iVar22 = iVar31;
                  do {
                    lVar34 = lVar34 + 1;
                    iVar23 = iVar8;
                    if (lVar20 <= lVar34) break;
                    iVar6 = *piVar32;
                    iVar22 = iVar22 + 1;
                    piVar32 = piVar32 + 0xc;
                    iVar23 = iVar22;
                  } while (bVar21 == (iVar6 == (int)lVar28));
                  if (bVar21 == false) {
                    if (iVar36 != iVar31) {
                      memmove((void *)((longlong)iVar36 * 0x30 + local_b8),
                              (void *)(lVar18 + local_b8),(longlong)(iVar23 - iVar31) * 0x30);
                    }
                    iVar36 = iVar36 + (iVar23 - iVar31);
                  }
                  iVar31 = iVar23;
                  bVar21 = (bool)(bVar21 ^ 1);
                } while (lVar34 < lVar20);
                *(int *)(local_b0 + 1) = iVar36;
                uVar15 = (local_ec + 1) - (uint)(iVar36 == 0);
                uVar10 = -(uint)(iVar36 == 0) | local_ec;
              }
              *(uint *)((longlong)local_78 + lVar26 * 4) = uVar10;
              lVar26 = lVar26 + 1;
              uVar10 = *(uint *)(local_e0 + 0x40);
            } while (lVar26 < (int)uVar10);
          }
          if (uVar10 != 0) {
            lVar26 = *local_e8;
            local_f8 = lVar26 + 0x20;
            iVar11 = 0;
            uVar12 = 0;
            bVar21 = *(int *)(lVar26 + 8) == 0;
            do {
              iVar31 = (int)uVar12;
              uVar15 = iVar31 + 1U;
              if ((int)(iVar31 + 1U) < (int)uVar10) {
                uVar15 = uVar10;
              }
              piVar32 = (int *)(local_f8 + uVar12 * 0x18);
              uVar37 = uVar12;
              uVar35 = uVar12;
              do {
                uVar35 = uVar35 + 1;
                if ((longlong)(int)uVar10 <= (longlong)uVar35) {
                  uVar37 = (ulonglong)uVar15;
                  break;
                }
                iVar36 = *piVar32;
                uVar37 = (ulonglong)((int)uVar37 + 1);
                piVar32 = piVar32 + 6;
              } while (bVar21 == (iVar36 == 0));
              iVar36 = (int)uVar37 - iVar31;
              if (bVar21 == false) {
                if (iVar11 != iVar31) {
                  memmove((void *)(lVar26 + (longlong)iVar11 * 0x18),
                          (void *)(lVar26 + uVar12 * 0x18),(longlong)iVar36 * 0x18);
                }
                iVar11 = iVar11 + iVar36;
              }
              else {
                FUN_1400e1c41(lVar26 + uVar12 * 0x18);
              }
              uVar12 = uVar37;
              bVar21 = (bool)(bVar21 ^ 1);
            } while ((longlong)uVar35 < (longlong)(int)uVar10);
            *(int *)(local_e0 + 0x40) = iVar11;
          }
          plVar27 = local_d8;
          lVar26 = local_e0;
          iVar11 = *(int *)(local_e0 + 0x30);
          if ((longlong)iVar11 != 0) {
            lVar28 = *(longlong *)(local_e0 + 0x28);
            lVar20 = 0;
            do {
              lVar34 = (longlong)*(short *)(lVar28 + 10 + lVar20);
              if (lVar34 != -1) {
                *(undefined2 *)(lVar28 + 10 + lVar20) =
                     *(undefined2 *)((longlong)local_78 + lVar34 * 4);
              }
              lVar20 = lVar20 + 0x10;
            } while ((longlong)iVar11 * 0x10 != lVar20);
          }
          FUN_1400da929(local_d8);
          if (local_78 != (void **)0x0) {
            FUN_1400020a8();
          }
          if (*(int *)(lVar26 + 0x30) != 0) {
            plVar1 = (longlong *)(lVar26 + 0x28);
            if (*(int *)(lVar26 + 0x40) == 0) {
              FUN_1400e1c6c(*(undefined8 *)(lVar26 + 0x18),*(undefined4 *)(lVar26 + 0x20));
              *(undefined4 *)(lVar26 + 0x20) = 0;
              if (*(int *)(lVar26 + 0x24) != 0) {
                FUN_140c04f2c(plVar27);
              }
              *(undefined4 *)(lVar26 + 0x30) = 0;
              if (*(int *)(lVar26 + 0x34) != 0) {
                FUN_140c04f5c(plVar1,0);
              }
            }
            else {
              local_88 = (void *)0x0;
              uVar10 = *(uint *)(lVar26 + 0x20);
              uStack_80 = (ulonglong)uVar10;
              if ((longlong)(int)uVar10 != 0) {
                FUN_1446f48e2(&local_88);
              }
              memset(local_88,0,(longlong)(int)uVar10 << 2);
              FUN_14018053c(plVar1,local_e8,0);
              local_98 = (void *)0x0;
              uVar10 = *(uint *)(lVar26 + 0x20);
              uStack_90 = (ulonglong)uVar10;
              if ((longlong)(int)uVar10 != 0) {
                FUN_1446f48e2(&local_98);
              }
              memset(local_98,0,(longlong)(int)uVar10 << 2);
              if (0 < (int)uStack_80) {
                lVar28 = 0;
                uVar10 = 0;
                do {
                  if (*(int *)((longlong)local_88 + lVar28 * 4) == 0) {
                    lVar20 = *plVar27;
                    lVar34 = (longlong)(int)uVar10;
                    FUN_1400e1cb7(*(undefined8 *)(lVar20 + 0x28 + lVar34 * 0x48));
                    if (*(longlong *)(lVar20 + 0x28 + lVar34 * 0x48) != 0) {
                      FUN_1400020a8();
                    }
                    pvVar17 = (void *)(lVar20 + lVar34 * 0x48);
                    if (*(longlong *)((longlong)pvVar17 + 0x18) != 0) {
                      FUN_1400020a8();
                    }
                    plVar27 = local_d8;
                    iVar11 = *(int *)(lVar26 + 0x20);
                    if (~uVar10 + iVar11 != 0) {
                      memmove(pvVar17,(void *)((longlong)pvVar17 + 0x48),
                              (longlong)(int)(~uVar10 + iVar11) * 0x48);
                      iVar11 = *(int *)(lVar26 + 0x20);
                    }
                    *(int *)(lVar26 + 0x20) = iVar11 + -1;
                    FUN_140c04ff6(plVar27);
                    uVar15 = 0xffffffff;
                  }
                  else {
                    uVar15 = uVar10;
                    uVar10 = uVar10 + 1;
                  }
                  *(uint *)((longlong)local_98 + lVar28 * 4) = uVar15;
                  lVar28 = lVar28 + 1;
                } while (lVar28 < (int)uStack_80);
              }
              iVar11 = *(int *)(lVar26 + 0x30);
              if ((longlong)iVar11 == 0) {
                uStack_a0 = 1;
                uVar10 = 1;
LAB_140c049b2:
                local_a8 = (undefined4 *)0x0;
                FUN_1446f48e2(&local_a8);
                _Size = (longlong)(int)uVar10 << 2;
              }
              else {
                lVar28 = *(longlong *)(lVar26 + 0x28);
                lVar20 = 0;
                do {
                  lVar34 = (longlong)*(short *)(lVar28 + 2 + lVar20);
                  if (lVar34 == -1) {
                    uVar29 = 0xffff;
                  }
                  else {
                    uVar29 = (undefined2)*(undefined4 *)((longlong)local_98 + lVar34 * 4);
                  }
                  *(undefined2 *)(lVar28 + 2 + lVar20) = uVar29;
                  lVar20 = lVar20 + 0x10;
                } while ((longlong)iVar11 * 0x10 != lVar20);
                local_a8 = (undefined4 *)0x0;
                uVar10 = *(int *)(lVar26 + 0x30) + 1;
                uStack_a0 = (ulonglong)uVar10;
                if (uVar10 != 0) goto LAB_140c049b2;
                _Size = 0;
              }
              memset(local_a8,0,_Size);
              *local_a8 = 0xffffffff;
              uVar10 = *(uint *)(lVar26 + 0x30);
              if ((int)uVar10 < 1) {
LAB_140c04ca7:
                lVar28 = *plVar1;
              }
              else {
                lVar28 = 0;
                iVar11 = -1;
                uVar35 = 0;
                uVar12 = 0xffffffff;
                iVar31 = 0;
                do {
                  if ((*(short *)(*plVar1 + 2 + lVar28) == -1) &&
                     (*(short *)(*plVar1 + 10 + lVar28) == -1)) {
                    local_a8[uVar35 + 1] = 0xffffffff;
                  }
                  else {
                    local_a8[uVar35 + 1] = iVar31;
                    iVar31 = iVar31 + 1;
                    if (iVar11 == -1) {
                      iVar11 = (int)uVar35;
                    }
                    if (*(short *)(*plVar1 + lVar28) == -1) {
                      uVar12 = uVar35 & 0xffffffff;
                    }
                  }
                  uVar35 = uVar35 + 1;
                  uVar10 = *(uint *)(lVar26 + 0x30);
                  lVar28 = lVar28 + 0x10;
                } while ((longlong)uVar35 < (longlong)(int)uVar10);
                lVar28 = *plVar1;
                iVar31 = (int)uVar12;
                if ((iVar31 != -1) && (iVar31 != iVar11)) {
                  lVar34 = (longlong)iVar31;
                  lVar20 = (longlong)iVar11;
                  plVar27 = (longlong *)(lVar28 + lVar20 * 0x10);
                  local_78 = (void **)*plVar27;
                  uStack_70 = plVar27[1];
                  puVar3 = (undefined8 *)(lVar28 + lVar34 * 0x10);
                  uVar14 = puVar3[1];
                  puVar4 = (undefined8 *)(lVar28 + lVar20 * 0x10);
                  *puVar4 = *puVar3;
                  puVar4[1] = uVar14;
                  plVar27 = (longlong *)(lVar28 + lVar34 * 0x10);
                  *plVar27 = (longlong)local_78;
                  plVar27[1] = uStack_70;
                  uVar7 = local_a8[lVar20 + 1];
                  local_a8[lVar20 + 1] = local_a8[lVar34 + 1];
                  local_a8[lVar34 + 1] = uVar7;
                  uVar10 = *(uint *)(lVar26 + 0x30);
                  goto LAB_140c04ca7;
                }
              }
              if (uVar10 != 0) {
                local_f8 = lVar28 + 0x1a;
                uVar16 = 0;
                uVar15 = 0;
                bVar21 = (*(ushort *)(lVar28 + 10) & *(ushort *)(lVar28 + 2)) == 0xffff;
                do {
                  uVar12 = (ulonglong)uVar15;
                  uVar30 = uVar15 + 1;
                  if ((int)(uVar15 + 1) < (int)uVar10) {
                    uVar30 = uVar10;
                  }
                  lVar26 = uVar12 * 0x10;
                  puVar33 = (ushort *)(local_f8 + lVar26);
                  uVar24 = uVar15;
                  do {
                    uVar12 = uVar12 + 1;
                    uVar25 = uVar30;
                    if ((longlong)(int)uVar10 <= (longlong)uVar12) break;
                    uVar5 = *puVar33;
                    puVar2 = puVar33 + -4;
                    uVar24 = uVar24 + 1;
                    puVar33 = puVar33 + 8;
                    uVar25 = uVar24;
                  } while (bVar21 == ((uVar5 & *puVar2) == 0xffff));
                  if (bVar21 == false) {
                    if (uVar16 != uVar15) {
                      memmove((void *)((longlong)(int)uVar16 * 0x10 + lVar28),
                              (void *)(lVar26 + lVar28),(longlong)(int)(uVar25 - uVar15) << 4);
                    }
                    uVar16 = uVar16 + (uVar25 - uVar15);
                  }
                  uVar15 = uVar25;
                  bVar21 = (bool)(bVar21 ^ 1);
                } while ((longlong)uVar12 < (longlong)(int)uVar10);
                *(uint *)(local_e0 + 0x30) = uVar16;
                if (uVar16 != 0) {
                  psVar13 = *(short **)(local_e0 + 0x28);
                  psVar19 = psVar13 + (longlong)(int)uVar16 * 8;
                  do {
                    *psVar13 = *(short *)(local_a8 + (longlong)*psVar13 + 1);
                    psVar13[2] = *(short *)(local_a8 + (longlong)psVar13[2] + 1);
                    psVar13[3] = *(short *)(local_a8 + (longlong)psVar13[3] + 1);
                    psVar13[4] = *(short *)(local_a8 + (longlong)psVar13[4] + 1);
                    psVar13 = psVar13 + 8;
                  } while (psVar13 != psVar19);
                }
              }
              if (local_a8 != (undefined4 *)0x0) {
                FUN_1400020a8();
              }
              if (local_98 != (void *)0x0) {
                FUN_1400020a8();
              }
              if (local_88 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
    }
    plVar27 = local_108 + 6;
  } while (plVar27 != local_c0);
LAB_140c04caf:
  FUN_140c0508e(local_d0,*local_110);
LAB_140c04cc1:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c04f2c FUN_140c04f2c body=48 status=ok
// SIG undefined FUN_140c04f2c(void)

void FUN_140c04f2c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x48,8);
  }
  return;
}



// FUNCTION 140c04f5c FUN_140c04f5c body=153 status=ok
// SIG undefined FUN_140c04f5c(void)

void FUN_140c04f5c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      uVar1 = 0x10;
    }
    else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x10,4);
    }
    uVar2 = 0x7fffffff;
    if (0 < (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 140c04ff6 FUN_140c04ff6 body=151 status=ok
// SIG undefined FUN_140c04ff6(void)

void FUN_140c04ff6(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x48)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x48,8);
      uVar3 = uVar3 / 0x48;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x48,8);
    }
  }
  return;
}



// FUNCTION 140c0508e FUN_140c0508e body=159 status=ok
// SIG undefined FUN_140c0508e(void)

undefined8 FUN_140c0508e(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x14) == param_2) {
          FUN_140c0512e(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x14 + 0xc);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140c0512e FUN_140c0512e body=91 status=ok
// SIG undefined FUN_140c0512e(void)

void FUN_140c0512e(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x14;
  lVar5 = (longlong)*(int *)(lVar1 + 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0xc);
  FUN_140c0518a(param_1,param_2,1);
  return;
}



// FUNCTION 140c0518a FUN_140c0518a body=134 status=ok
// SIG undefined FUN_140c0518a(void)

void FUN_140c0518a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140c05210 FUN_140c05210 body=1066 status=ok
// SIG undefined FUN_140c05210(void)

void FUN_140c05210(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined7 uVar8;
  undefined8 unaff_RBP;
  longlong *plVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == (longlong *)0x0) goto LAB_140c0544d;
  if (param_3 != 0) {
    uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(param_3 + 0x2d5)) &
            0xffffffffffffff02;
    uVar3 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 1);
    FUN_140c0563c(param_2,uVar3);
    uVar7 = CONCAT71((int7)((ulonglong)uVar3 >> 8),*(undefined1 *)(param_3 + 0x2d5)) &
            0xffffffffffffff04;
    FUN_140c056bc(param_2,CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 2));
    uVar3 = FUN_140357fa8(param_2,*(undefined4 *)(param_3 + 0x5c8),0);
    uVar7 = CONCAT71((int7)((ulonglong)uVar3 >> 8),*(byte *)(param_3 + 0x2d6)) & 0xffffff02;
    uVar8 = (undefined7)(uVar7 >> 8);
    if (((*(byte *)((longlong)param_2 + 0x2d6) & 2) == 0) == (bool)((byte)uVar7 >> 1)) {
      *(byte *)((longlong)param_2 + 0x2d6) =
           *(byte *)((longlong)param_2 + 0x2d6) & 0xfd | *(byte *)(param_3 + 0x2d6) & 2;
      FUN_1448215fa(param_2);
    }
    FUN_140c0573e(param_2,CONCAT71(uVar8,*(undefined1 *)(param_3 + 0x2e4)) & 0xffffffffffffff01);
  }
  (**(code **)(*param_2 + 0x720))(param_2,0);
  if (DAT_14cad2858 == 0) {
    local_50 = &local_38;
    local_38 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_146395584;
    local_58 = &LAB_147a0ba80;
    local_60 = &LAB_14575ccce;
    local_68 = L"Engine";
    local_70 = 0x40000000000;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x1180;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
  }
  if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
     (plVar9 = param_2,
     *(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8)
     != DAT_14cad2858 + 0x30)) {
    plVar9 = (longlong *)0x0;
  }
  uVar8 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar7 = CONCAT71(uVar8,1);
  if ((longlong *)param_2[0x15] != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*(longlong *)param_2[0x15] + 0x5f0))();
    if ((plVar4 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x79) & 8) == 0)) {
      pcVar2 = *(code **)(*plVar4 + 0x5e8);
      if (pcVar2 == FUN_140972dde) {
        lVar6 = plVar4[0x76];
        if (lVar6 == 0) {
          pcVar2 = *(code **)(*plVar4 + 0x5f8);
          if (pcVar2 == FUN_144784df4) {
            if (*(code **)(plVar4[0x784] + 0x18) == (code *)&LAB_144904684) {
              if (*(int *)((longlong)plVar4 + 0x75b4) != 0) {
                uVar1 = *(uint *)(plVar4 + 0xeb6);
                lVar6 = 0;
                if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140c053c8;
                plVar5 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if ((plVar5 != (longlong *)0x0) &&
                   (((int)plVar5[2] == *(int *)((longlong)plVar4 + 0x75b4) &&
                    ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
                  if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
                    lVar6 = *plVar5;
                  }
                  else {
                    lVar6 = 0;
                  }
                  lVar6 = lVar6 + 0x110;
                  goto LAB_140c0548d;
                }
              }
            }
            else {
              lVar6 = (**(code **)(plVar4[0x784] + 0x18))();
LAB_140c0548d:
              if (lVar6 != 0) {
                lVar6 = *(longlong *)(lVar6 + 0x20);
                goto LAB_140c0549a;
              }
            }
          }
          else {
            lVar6 = (*pcVar2)();
LAB_140c0549a:
            if (lVar6 != 0) {
              lVar6 = *(longlong *)(lVar6 + 0x3b0);
              goto LAB_140c053c8;
            }
          }
          lVar6 = 0;
        }
      }
      else {
        lVar6 = (*pcVar2)(plVar4);
      }
LAB_140c053c8:
      uVar7 = CONCAT71(uVar8,lVar6 != 0);
    }
  }
  (**(code **)(*param_2 + 0x3b0))(param_2,uVar7 & 0xffffffff);
  if (plVar9 != (longlong *)0x0) {
    *(byte *)(plVar9 + 0x18e) = *(byte *)(plVar9 + 0x18e) & 0xef | ((byte)uVar7 ^ 1) << 4;
  }
  if (param_3 != 0) {
    if (DAT_14cad2858 == 0) {
      local_50 = &local_38;
      local_38 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_146395584;
      local_58 = &LAB_147a0ba80;
      local_60 = &LAB_14575ccce;
      local_68 = L"Engine";
      local_70 = 0x40000000000;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if (((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
        (plVar9 != (longlong *)0x0)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
      *(byte *)(plVar9 + 0x18e) = *(byte *)(plVar9 + 0x18e) & 0xf7 | *(byte *)(param_3 + 0xc70) & 8;
    }
  }
LAB_140c0544d:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c0563c FUN_140c0563c body=128 status=ok
// SIG undefined FUN_140c0563c(void)

void FUN_140c0563c(longlong param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  
  if (((*(byte *)(param_1 + 0x2d5) & 2) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x2d5) = *(byte *)(param_1 + 0x2d5) & 0xfd | param_2 * '\x02';
    if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
      bVar2 = *(byte *)(param_1 + 0x9d);
      if ((bVar2 & 1) == 0) {
LAB_140c05698:
        *(byte *)(param_1 + 0x9d) = bVar2 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
        return;
      }
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar1 = FUN_1448abda6(param_1);
        if (lVar1 == 0) {
          bVar2 = *(byte *)(param_1 + 0x9d);
          goto LAB_140c05698;
        }
      }
    }
  }
  return;
}



// FUNCTION 140c056bc FUN_140c056bc body=129 status=ok
// SIG undefined FUN_140c056bc(void)

void FUN_140c056bc(longlong param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  
  if (((*(byte *)(param_1 + 0x2d5) & 4) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x2d5) = *(byte *)(param_1 + 0x2d5) & 0xfb | param_2 << 2;
    if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
      bVar2 = *(byte *)(param_1 + 0x9d);
      if ((bVar2 & 1) == 0) {
LAB_140c05719:
        *(byte *)(param_1 + 0x9d) = bVar2 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
        return;
      }
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar1 = FUN_1448abda6(param_1);
        if (lVar1 == 0) {
          bVar2 = *(byte *)(param_1 + 0x9d);
          goto LAB_140c05719;
        }
      }
    }
  }
  return;
}



// FUNCTION 140c0573e FUN_140c0573e body=146 status=ok
// SIG undefined FUN_140c0573e(void)

void FUN_140c0573e(longlong *param_1,byte param_2)

{
  byte bVar1;
  longlong lVar2;
  
  if (((byte)*(uint *)((longlong)param_1 + 0x2e4) & 1) != param_2) {
    *(uint *)((longlong)param_1 + 0x2e4) =
         *(uint *)((longlong)param_1 + 0x2e4) & 0xfffffffe | (uint)param_2;
    if (param_2 != 0) {
      (**(code **)(*param_1 + 0x310))(param_1);
    }
    if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
      bVar1 = *(byte *)((longlong)param_1 + 0x9d);
      if ((bVar1 & 1) == 0) {
LAB_140c057ac:
        *(byte *)((longlong)param_1 + 0x9d) = bVar1 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
        return;
      }
      if (param_1[0x16] == 0) {
        lVar2 = FUN_1448abda6(param_1);
        if (lVar2 == 0) {
          bVar1 = *(byte *)((longlong)param_1 + 0x9d);
          goto LAB_140c057ac;
        }
      }
    }
  }
  return;
}



// FUNCTION 140c057d0 FUN_140c057d0 body=21 status=ok
// SIG undefined FUN_140c057d0(void)

undefined8 FUN_140c057d0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140c057ec FUN_140c057ec body=680 status=ok
// SIG undefined FUN_140c057ec(void)

void FUN_140c057ec(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_149ef0d00;
  bVar3 = *(byte *)((longlong)param_1 + 0x31);
  *(byte *)((longlong)param_1 + 0x31) = bVar3 & 0xfe;
  lVar7 = DAT_14c968098;
  if (DAT_14c968098 != 0) {
    if ((bVar3 & 0x10) != 0) {
      FUN_14697d42a(param_1,&local_38);
      if ((longlong)*(int *)(local_38 + 0x10) != 0) {
        lVar8 = *(longlong *)(local_38 + 8);
        lVar9 = (longlong)*(int *)(local_38 + 0x10) << 4;
        do {
          FUN_14692fa20(lVar7,lVar8);
          lVar8 = lVar8 + 0x10;
          lVar9 = lVar9 + -0x10;
        } while (lVar9 != 0);
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_30 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
    uVar4 = *(undefined8 *)(lVar7 + 200);
    plVar5 = *(longlong **)(lVar7 + 0xd0);
    if (plVar5 == (longlong *)0x0) {
      FUN_142878456(uVar4,param_1);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_142878456(uVar4,param_1);
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
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c98e0a8);
    FUN_14287c456(&DAT_14c98e058,param_1);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c98e0a8);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c98e100);
    FUN_14287c456(&DAT_14c98e0b0,param_1);
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c98e100);
  }
  lVar7 = FUN_14007026e(&DAT_14c967f20,*(undefined4 *)(param_1 + 4));
  if (lVar7 != 0) {
    FUN_14693080e(lVar7,param_1);
  }
  uVar6 = DAT_14c967f78;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  FUN_1428693e8(param_1 + 0x29);
  plVar5 = (longlong *)param_1[0x39];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_140a50355(param_1[0x36],*(undefined4 *)(param_1 + 0x37));
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x33) == '\x01') {
    *(undefined1 *)(param_1 + 0x33) = 0;
  }
  plVar5 = (longlong *)param_1[0x2a];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if (*(char *)(param_1 + 0x12) == '\x01') {
    if (*(char *)((longlong)param_1 + 0x84) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x84) = 0;
    }
    if (param_1[10] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  plVar5 = (longlong *)param_1[9];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if (param_1[2] != 0) {
    LOCK();
    piVar2 = (int *)(param_1[2] + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c05aa8 FUN_140c05aa8 body=21 status=ok
// SIG undefined FUN_140c05aa8(void)

undefined8 FUN_140c05aa8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140c05acc FUN_140c05acc body=64 status=ok
// SIG undefined FUN_140c05acc(void)

void FUN_140c05acc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140c05b0c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 140c05b0c FUN_140c05b0c body=109 status=ok
// SIG undefined FUN_140c05b0c(void)

ulonglong FUN_140c05b0c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0xc) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
      uVar1 = uVar1 / 0xc;
    }
  }
  return uVar1;
}



// FUNCTION 140c05b7a FUN_140c05b7a body=307 status=ok
// SIG undefined FUN_140c05b7a(void)

void FUN_140c05b7a(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (undefined4)param_2[1];
  local_50 = *param_2;
  FUN_140c05cae(param_1 + 7);
  if (param_3 != '\0') {
    local_60 = *param_2;
    local_58 = (undefined4)param_2[1];
    FUN_1448075d0(&local_50);
    lVar5 = FUN_14060eaf6(&local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0x750) == '\0')) {
      cVar3 = FUN_140c05d9a(param_1);
      if (cVar3 != '\0') {
        plVar6 = (longlong *)FUN_140c05ec4(param_1);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x78))(plVar6,&local_50,param_2);
          if (local_50 != 0) {
            bVar4 = FUN_1405f61f4();
            if ((bVar4 & 5) == 4) {
              local_68 = (undefined4)param_2[1];
              local_70 = *param_2;
              (**(code **)(*param_1 + 0x98))(param_1);
            }
          }
          plVar6 = (longlong *)CONCAT44(uStack_44,local_48);
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
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c05cae FUN_140c05cae body=234 status=ok
// SIG undefined FUN_140c05cae(void)

void FUN_140c05cae(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar8 = uVar5 * 0x10 + -8;
      uVar7 = uVar5;
      while ((*(int *)(*param_1 + lVar8) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0))) {
        local_48 = *(undefined4 *)(param_2 + 1);
        local_50 = *param_2;
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_50,param_3);
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (!bVar6) goto LAB_140c05d4d;
          goto LAB_140c05d8d;
        }
      }
      uVar5 = uVar7 - 1;
      bVar6 = true;
    } while (1 < uVar7);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140c05d8d:
    FUN_14474d06a(param_1,0);
  }
LAB_140c05d4d:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c05d9a FUN_140c05d9a body=188 status=ok
// SIG undefined FUN_140c05d9a(void)

undefined8 FUN_140c05d9a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  
  if (((((*(int *)(param_1 + 0xb0) != 0) && (uVar1 = *(uint *)(param_1 + 0xac), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0xb0))))) &&
     ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar5;
    }
    else {
      lVar3 = 0;
    }
    if (*(int *)(lVar3 + 0x4c) == 3) {
      return 0;
    }
  }
  lVar3 = FUN_140c05e56(param_1);
  if (lVar3 != 0) {
    lVar3 = FUN_140c05e56(param_1);
    if ((*(longlong **)(lVar3 + 0x170) != (longlong *)0x0) &&
       (iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x170) + 0x6b0))(), iVar2 == 1)) {
      if (*(longlong *)(param_1 + 200) == 0) {
        piVar4 = (int *)&DAT_14c948618;
      }
      else {
        piVar4 = (int *)(*(longlong *)(param_1 + 200) + 8);
      }
      return CONCAT71((int7)((ulonglong)piVar4 >> 8),*piVar4 == 0);
    }
  }
  return 0;
}



// FUNCTION 140c05e56 FUN_140c05e56 body=110 status=ok
// SIG undefined FUN_140c05e56(void)

undefined8 FUN_140c05e56(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    uVar1 = *(uint *)(param_1 + 0xa4);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0xa8))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        return *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
      }
    }
  }
  return 0;
}



// FUNCTION 140c05ec4 FUN_140c05ec4 body=204 status=ok
// SIG undefined FUN_140c05ec4(void)

undefined8 FUN_140c05ec4(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_140c05e56();
  lVar3 = FUN_140149a73(uVar2,0);
  if (lVar3 == 0) goto LAB_140c05f84;
  if (*(int *)(param_1 + 0xa8) == 0) {
LAB_140c05f80:
    uVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xa4);
    uVar2 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(int *)(puVar4 + 2) != *(int *)(param_1 + 0xa8) ||
          ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)))) goto LAB_140c05f80;
      uVar2 = *puVar4;
    }
  }
  local_1c = FUN_1409844f4(uVar2);
  lVar3 = FUN_140ee81ae(lVar3);
  if (lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
LAB_140c05f84:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c05faa FUN_140c05faa body=57 status=ok
// SIG undefined FUN_140c05faa(void)

void FUN_140c05faa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb693e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb693e0 = FUN_140002ddd(FUN_14652052a,uVar1,L"GpsTest_Health");
  }
  return;
}



// FUNCTION 140c05fe4 FUN_140c05fe4 body=83 status=ok
// SIG undefined FUN_140c05fe4(void)

void FUN_140c05fe4(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_10 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_10 = 0;
  }
  (**(code **)(*param_1 + 0x28))(param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c06038 FUN_140c06038 body=265 status=ok
// SIG undefined FUN_140c06038(void)

void FUN_140c06038(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = (longlong *)param_1[2];
  bVar2 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar7[1];
    plVar6 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_140c06086;
      }
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar6 = (longlong *)param_1[1];
    bVar2 = false;
  }
LAB_140c06086:
  puVar5 = (undefined8 *)thunk_FUN_1424da030(0x40);
  if (puVar5 != (undefined8 *)0x0) {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    FUN_14003c090(puVar5);
    *puVar5 = &PTR_FUN_149e17b10;
    puVar5[4] = 0;
    puVar5[5] = 0;
    *(undefined4 *)(puVar5 + 6) = local_48;
    *(undefined4 *)((longlong)puVar5 + 0x34) = uStack_44;
    *(undefined4 *)(puVar5 + 7) = uStack_40;
    *(undefined4 *)((longlong)puVar5 + 0x3c) = uStack_3c;
    FUN_14003c0c0(puVar5,puVar5[6],*(undefined4 *)(puVar5 + 7));
  }
  (**(code **)(*plVar6 + 0x40))(plVar6,puVar5);
  if (!bVar2) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x000140c0610f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))(param_1);
  return;
}



// FUNCTION 140c06150 FUN_140c06150 body=31 status=ok
// SIG undefined FUN_140c06150(void)

undefined8 FUN_140c06150(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c06170 FUN_140c06170 body=503 status=ok
// SIG undefined FUN_140c06170(void)

void FUN_140c06170(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
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
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    if (DAT_14cae8b20 == 0) {
      local_40 = &local_28;
      local_28 = (code *)&LAB_14355090c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147b8e16d;
      local_50 = (code *)&LAB_140810a38;
      local_58 = L"Engine";
      local_60 = 0x800000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar2 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1468c5283;
      local_50 = FUN_142809da0;
      local_58 = L"Engine";
      local_60 = 0x400000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
           (lVar4 = lVar3,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar2 + 0x30)) {
          lVar4 = 0;
        }
      } while ((lVar4 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x220) != 0)) {
        FUN_1400337aa();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_140c06368(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c06368 FUN_140c06368 body=399 status=ok
// SIG undefined FUN_140c06368(void)

void FUN_140c06368(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  void *_Dst;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  
  FUN_140bd5ce8();
  lVar5 = FUN_14494250a(param_1);
  if (lVar5 != 0) {
    cVar4 = FUN_14043f538(lVar5);
    if (cVar4 != '\0') {
      *(undefined1 *)(param_1 + 0x14a) = 0;
      *(undefined1 *)(param_1 + 0x152) = 0;
      *(undefined1 *)(param_1 + 0x15a) = 0;
    }
  }
  iVar2 = (int)param_1[0xe5];
  uVar9 = (int)param_1[0xf4] * iVar2;
  uVar3 = *(uint *)(param_1 + 0xf6);
  if (0 < iVar2 && uVar9 != uVar3) {
    plVar1 = param_1 + 0xf5;
    if (uVar3 == 0) {
      *(uint *)(param_1 + 0xf6) = uVar9;
      if (*(uint *)((longlong)param_1 + 0x7b4) < uVar9) {
        FUN_14475e4ac(plVar1);
      }
      memset((void *)*plVar1,0,(longlong)(int)uVar9 << 2);
    }
    else {
      lVar5 = param_1[0xf5];
      *plVar1 = 0;
      param_1[0xf6] = 0;
      *(uint *)(param_1 + 0xf6) = uVar9;
      if ((int)param_1[0xf4] == 0) {
        _Dst = (void *)0x0;
      }
      else {
        FUN_14475e4ac(plVar1);
        _Dst = (void *)*plVar1;
      }
      memset(_Dst,0,(longlong)(int)uVar9 << 2);
      iVar12 = (int)param_1[0xe5];
      if (0 < iVar12) {
        iVar8 = (int)((longlong)(int)uVar3 / (longlong)iVar2);
        uVar6 = (ulonglong)*(uint *)(param_1 + 0xf4);
        if (iVar8 < (int)*(uint *)(param_1 + 0xf4)) {
          uVar6 = (longlong)(int)uVar3 / (longlong)iVar2 & 0xffffffff;
        }
        lVar7 = 0;
        lVar11 = 0;
        lVar10 = lVar5;
        do {
          if (0 < (int)uVar6) {
            uVar13 = 0;
            do {
              *(undefined4 *)((int)param_1[0xf4] * lVar7 + param_1[0xf5] + uVar13 * 4) =
                   *(undefined4 *)(lVar10 + uVar13 * 4);
              uVar13 = uVar13 + 1;
            } while (uVar6 != uVar13);
            iVar12 = (int)param_1[0xe5];
          }
          lVar11 = lVar11 + 1;
          lVar7 = lVar7 + 4;
          lVar10 = lVar10 + (longlong)iVar8 * 4;
        } while (lVar11 < iVar12);
      }
      if (lVar5 != 0) {
        FUN_1400020a8(lVar5);
      }
    }
  }
  if (((*(uint *)(param_1 + 1) & 0x30) == 0) && (*(char *)((longlong)param_1 + 0x95d) != '\x02')) {
    *(int *)(param_1 + 0x11c) = (int)param_1[0xe5];
  }
                    /* WARNING: Could not recover jumptable at 0x000140c064f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xbe0))(param_1);
  return;
}



// FUNCTION 140c06502 FUN_140c06502 body=404 status=ok
// SIG undefined FUN_140c06502(void)

undefined8 * FUN_140c06502(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ab80920;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x3ff00000;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0x3ff0000000000000;
  param_1[0x7f] = 0x3ff0000000000000;
  param_1[0x80] = 0x3ff0000000000000;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  FUN_1446f470e(&local_48,L"Edge",1);
  uVar2 = FUN_140c06698();
  local_50 = 0;
  local_58 = 1;
  lVar3 = FUN_14048696c(param_1,local_48,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x82] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x82];
  }
  param_1[0x39] = lVar3;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x3ff00000;
  param_1[0x7a] = 0x4060000000000000;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0x3ff0000000000000;
  param_1[0x7f] = 0x3ff0000000000000;
  param_1[0x80] = 0x3ff0000000000000;
  param_1[0x81] = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c06698 FUN_140c06698 body=228 status=ok
// SIG undefined FUN_140c06698(void)

longlong FUN_140c06698(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1bcb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_147e31fa7;
    local_40 = &LAB_140c441bd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x770;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavLinkComponent",&DAT_14cb1bcb0,FUN_14641dc54);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1bcb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c0677e FUN_140c0677e body=349 status=ok
// SIG undefined FUN_140c0677e(void)

void FUN_140c0677e(longlong *param_1,byte param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_48 [36];
  byte local_24 [2];
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((((int)(uint)param_2 < (int)param_1[0x181]) &&
       (lVar2 = param_1[0x1ac], lVar2 != DAT_14cb95120)) && (lVar2 != DAT_14cb94e38)) &&
     (lVar2 != DAT_14cb94e50)) {
    if (lVar2 != DAT_14cb94e40) {
      plVar8 = param_1 + 0x17f;
      if ((longlong *)param_1[0x180] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[0x180];
      }
      bVar1 = *(byte *)((longlong)plVar8 + (ulonglong)param_2);
      if (((int)(uint)bVar1 < (int)param_1[0x17e]) &&
         (*(longlong *)(param_1[0x17d] + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8) != 0))
      {
        uVar4 = rand();
        iVar5 = (int)(((float)(uVar4 & 0x7fff) / 32767.0) * 65535.0);
        iVar7 = 0xfffe;
        if (iVar5 < 0xfffe) {
          iVar7 = iVar5;
        }
        *(short *)(param_1 + 0x17c) = (short)iVar7 + 1;
      }
    }
    if (((char)param_1[0x2f] != '\x03') && ((longlong *)param_1[0x36] != (longlong *)0x0)) {
      cVar3 = (**(code **)(*(longlong *)param_1[0x36] + 0x700))();
      if (cVar3 != '\0') {
        local_22 = (undefined2)param_1[0x17c];
        local_24[0] = param_2;
        uVar6 = FUN_14477b072(param_1,DAT_14cb93938);
        (**(code **)(*param_1 + 0x248))(param_1,uVar6,local_24);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c068f2 FUN_140c068f2 body=524 status=ok
// SIG undefined FUN_140c068f2(void)

void FUN_140c068f2(longlong param_1,ulonglong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  byte bVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  
  if (*(longlong *)(param_1 + 0xd60) != DAT_14cb95120) {
    iVar11 = (int)(param_2 & 0xff);
    if (iVar11 < *(int *)(param_1 + 0xc08)) {
      if (param_3 == '\0') {
        bVar7 = (byte)(param_2 & 0xffffffff);
        *(uint *)(param_1 + 0xc10) = *(uint *)(param_1 + 0xc10) | 1 << (bVar7 & 0x1f);
        *(byte *)(param_1 + 0xc14) = bVar7;
      }
      iVar1 = *(int *)(param_1 + 0x94c);
      *(int *)(param_1 + 0x94c) = iVar1 + 1;
      uVar6 = (ulonglong)*(int *)(param_1 + 0x940);
      if ((longlong)uVar6 < 1) {
        *(int *)(param_1 + 0x94c) = iVar1;
      }
      else {
        bVar8 = false;
        do {
          lVar9 = uVar6 * 0x10 + -8;
          uVar10 = uVar6;
          while (((lVar2 = *(longlong *)(param_1 + 0x938), *(int *)(lVar2 + lVar9) != 0 &&
                  (plVar3 = *(longlong **)(lVar2 + -8 + lVar9), plVar3 != (longlong *)0x0)) &&
                 (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2 & 0xffffffff), cVar5 != '\0')
                 )) {
            lVar9 = lVar9 + -0x10;
            bVar4 = uVar10 < 2;
            uVar10 = uVar10 - 1;
            if (bVar4) {
              *(int *)(param_1 + 0x94c) = *(int *)(param_1 + 0x94c) + -1;
              if (bVar8) goto LAB_140c06aef;
              goto LAB_140c0696f;
            }
          }
          uVar6 = uVar10 - 1;
          bVar8 = true;
        } while (1 < uVar10);
        *(int *)(param_1 + 0x94c) = *(int *)(param_1 + 0x94c) + -1;
LAB_140c06aef:
        FUN_14474d06a((longlong *)(param_1 + 0x938),0);
      }
LAB_140c0696f:
      if (iVar11 < *(int *)(param_1 + 0xc08)) {
        lVar9 = param_1 + 0xbf8;
        if (*(longlong *)(param_1 + 0xc00) != 0) {
          lVar9 = *(longlong *)(param_1 + 0xc00);
        }
        bVar7 = *(byte *)(lVar9 + (param_2 & 0xff));
      }
      else {
        bVar7 = 0xff;
      }
      if ((((*(byte *)(param_1 + 0xbe2) & 1) == 0) &&
          (uVar6 = (ulonglong)bVar7, (int)(uint)bVar7 < *(int *)(param_1 + 0xbf0))) &&
         (*(longlong *)(*(longlong *)(param_1 + 0xbe8) + 8 + (ulonglong)bVar7 * 0x80 + uVar6 * 8) !=
          0)) {
        lVar9 = *(longlong *)(param_1 + 0xd60);
        if (((*(byte *)(param_1 + 0xb90) & 2) != 0) && (lVar9 == DAT_14cb94e30)) {
          FUN_145784dac(param_1);
          return;
        }
        if ((lVar9 == DAT_14cb95128) || (lVar9 == DAT_14cb94e40)) {
          FUN_140c06afe(param_1);
          (**(code **)(**(longlong **)
                         (*(longlong *)(param_1 + 0xbe8) + 8 + (ulonglong)bVar7 * 0x80 + uVar6 * 8)
                      + 0x398))();
          if (param_3 != '\0') {
            plVar3 = *(longlong **)
                      (*(longlong *)(param_1 + 0xbe8) + 8 + (ulonglong)bVar7 * 0x80 + uVar6 * 8);
                    /* WARNING: Could not recover jumptable at 0x000140c06ad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x3a0))(plVar3,0);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c06afe FUN_140c06afe body=294 status=ok
// SIG undefined FUN_140c06afe(void)

void FUN_140c06afe(longlong param_1,byte param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  bVar2 = *(byte *)(param_1 + 0xbd8);
  if (*(longlong *)(param_1 + 0xd60) == DAT_14cb95120) {
    if (bVar2 != param_2) {
      *(byte *)(param_1 + 0xbd8) = param_2;
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x12);
      return;
    }
  }
  else if (bVar2 != param_2) {
    if ((int)(uint)bVar2 < *(int *)(param_1 + 0xbf0)) {
      lVar1 = (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8;
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 8 + lVar1);
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 0x10 + lVar1);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x378))();
      }
    }
    else {
      plVar6 = (longlong *)0x0;
    }
    *(byte *)(param_1 + 0xbd8) = param_2;
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x12);
    if (*(longlong *)(param_1 + 0x900) != 0) {
      FUN_148a18f7a(*(longlong *)(param_1 + 0x900),*(undefined1 *)(param_1 + 0xbd8));
    }
    bVar3 = *(byte *)(param_1 + 0xbd8);
    if ((int)(uint)bVar3 < *(int *)(param_1 + 0xbf0)) {
      lVar1 = (ulonglong)bVar3 * 0x80 + (ulonglong)bVar3 * 8;
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 8 + lVar1);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xbe8) + 0x10 + lVar1);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x370))(plVar4,(uint)bVar2);
      }
      if ((plVar5 != (longlong *)0x0) && (plVar5 != plVar6)) {
                    /* WARNING: Could not recover jumptable at 0x000140c06c21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x3b0))(plVar5,plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c06c24 FUN_140c06c24 body=40 status=ok
// SIG undefined FUN_140c06c24(void)

undefined8 FUN_140c06c24(undefined8 param_1,int param_2)

{
  FUN_140c06c4c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c06c4c FUN_140c06c4c body=292 status=ok
// SIG undefined FUN_140c06c4c(void)

void FUN_140c06c4c(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a3c03a0;
  param_1[5] = &PTR_FUN_14a3c0db0;
  param_1[6] = &PTR_LAB_14a3c0df0;
  param_1[0x55] = &PTR_FUN_14a3c0e40;
  param_1[0x56] = &PTR_FUN_14a3c0ec0;
  param_1[0x57] = &PTR_FUN_14a3c0ed0;
  if (param_1[0xe1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xdd] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[0xdb];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0xda];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[0xd9];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0xd7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 140c06d7e FUN_140c06d7e body=31 status=ok
// SIG undefined FUN_140c06d7e(void)

undefined8 FUN_140c06d7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c06d9e FUN_140c06d9e body=107 status=ok
// SIG undefined FUN_140c06d9e(void)

undefined8 * FUN_140c06d9e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14aac06f0;
  lVar2 = param_1[0xcb];
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(lVar2);
      FUN_1400020a8(lVar2);
    }
  }
  if ((longlong *)param_1[0xca] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xca] + 0x10))();
  }
  FUN_140c06e0a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c06e0a FUN_140c06e0a body=1219 status=ok
// SIG undefined FUN_140c06e0a(void)

void FUN_140c06e0a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = &PTR_FUN_14aac0670;
  lVar8 = 0x5e0;
  do {
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + 0x50);
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    FUN_14005bcf4(*(undefined8 *)((longlong)param_1 + lVar8 + 0x18),
                  *(undefined4 *)((longlong)param_1 + lVar8 + 0x20));
    if (*(longlong *)((longlong)param_1 + lVar8 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)((longlong)param_1 + lVar8) != 0) {
      LOCK();
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + lVar8) + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar8 = lVar8 + -0x60;
  } while (lVar8 != 0x2e0);
  lVar8 = 0x340;
  do {
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -8);
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar9 = lVar8 + -0x48;
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -0x10);
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -0x18);
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -0x20);
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -0x28);
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
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -0x30);
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
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -0x38);
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
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar8 = *(longlong *)((longlong)param_1 + lVar8 + -0x40);
    if (lVar8 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar8 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar8;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar8 = *(longlong *)((longlong)param_1 + lVar9);
    if (lVar8 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar8 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar8;
          plVar7 = DAT_14ca843c0;
          plVar6 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c0;
              plVar6 = plVar5;
              if (bVar10) {
                plVar7 = DAT_14ca843c0;
                plVar6 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar6;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar6;
              LOCK();
              bVar10 = plVar6 != DAT_14ca843c8;
              plVar7 = plVar5;
              if (bVar10) {
                plVar6 = DAT_14ca843c8;
                plVar7 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar8 = lVar9;
  } while (lVar9 != 0x100);
  *param_1 = &PTR_FUN_14aac0630;
  if (param_1[0x18] != 0) {
    plVar7 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (param_1[0xe] != 0) {
    plVar7 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  *param_1 = &PTR_LAB_14aabfdc0;
                    /* WARNING: Could not recover jumptable at 0x000140c0712e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 140c072ce FUN_140c072ce body=624 status=ok
// SIG undefined FUN_140c072ce(void)

void FUN_140c072ce(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong local_60;
  undefined8 *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((ulonglong)*(uint *)(param_1 + 0x40) == 0) goto LAB_140c072f5;
  if (*(int *)(param_1 + 0x50) == *(int *)(param_1 + 0x7c)) {
LAB_140c07525:
    lVar22 = 0;
  }
  else {
    uVar18 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
    uVar19 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
    uVar19 = uVar19 >> 0x10 ^ uVar19;
    lVar22 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar22 = *(longlong *)(param_1 + 0x88);
    }
    iVar20 = *(int *)(lVar22 + (ulonglong)
                               (*(int *)(param_1 + 0x90) - 1U &
                               (uVar19 * 0x40 + (uVar18 >> 0x10 ^ uVar18) + (uVar19 >> 2) +
                                0x9e3779b9 ^ uVar19)) * 4);
    if (iVar20 == -1) goto LAB_140c07525;
    lVar6 = *(longlong *)(param_1 + 0x48);
    do {
      lVar21 = (longlong)iVar20 * 0x20;
      lVar22 = lVar6 + lVar21;
      if ((*(ulonglong *)(lVar6 + lVar21) == param_2) &&
         (*(ulonglong *)(lVar6 + 8 + lVar21) == param_3)) break;
      iVar20 = *(int *)(lVar22 + 0x18);
      lVar22 = 0;
    } while (iVar20 != -1);
  }
  uVar5 = *(undefined4 *)(lVar22 + 0x10);
  local_68 = param_2 + 0x200;
  lVar22 = param_2 + 0x70;
  lVar6 = param_2 + 0x68;
  local_60 = (ulonglong)*(uint *)(param_1 + 0x40);
  FUN_140c0753f(local_58,lVar6,lVar22,uVar5);
  puVar15 = local_58[0];
  local_68 = param_2 + 0x1e8;
  FUN_140c0753f(local_58,lVar6,lVar22,uVar5);
  puVar16 = local_58[0];
  FUN_140c075ea(param_2,local_58,uVar5);
  puVar23 = local_58[0];
  FUN_140c076a2(param_2,local_58,uVar5);
  puVar17 = local_58[0];
  local_68 = param_2 + 0x218;
  FUN_140c0753f(local_58,lVar6,lVar22,uVar5);
  if (0 < (int)local_60) {
    lVar22 = 0;
    do {
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar22 * 4);
      uVar7 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar22 * 4 + 0x10);
      uVar12 = *puVar2;
      uVar13 = puVar2[1];
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar22 * 4 + 0x20);
      uVar14 = puVar2[1];
      puVar1 = (undefined8 *)((longlong)puVar16 + lVar22 * 4 + 0x20);
      *puVar1 = *puVar2;
      puVar1[1] = uVar14;
      puVar2 = (undefined8 *)((longlong)puVar16 + lVar22 * 4 + 0x10);
      *puVar2 = uVar12;
      puVar2[1] = uVar13;
      puVar2 = (undefined8 *)((longlong)puVar16 + lVar22 * 4);
      *puVar2 = uVar7;
      puVar2[1] = uVar11;
      auVar4 = *(undefined1 (*) [16])((longlong)puVar15 + lVar22 * 4 + 0x10);
      *(longlong *)((longlong)puVar17 + lVar22) = auVar4._0_8_;
      uVar7 = extractps(auVar4,2);
      *(undefined8 *)((longlong)puVar17 + lVar22 + 8) = uVar7;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar22 * 4);
      uVar7 = puVar2[1];
      *puVar23 = *puVar2;
      puVar23[1] = uVar7;
      puVar3 = (undefined4 *)((longlong)puVar15 + lVar22 * 4);
      uVar5 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar22 * 4 + 0x10);
      uVar7 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar22 * 4 + 0x20);
      uVar12 = puVar2[1];
      puVar1 = (undefined8 *)((longlong)local_58[0] + lVar22 * 4 + 0x20);
      *puVar1 = *puVar2;
      puVar1[1] = uVar12;
      puVar2 = (undefined8 *)((longlong)local_58[0] + lVar22 * 4 + 0x10);
      *puVar2 = uVar7;
      puVar2[1] = uVar11;
      puVar3 = (undefined4 *)((longlong)local_58[0] + lVar22 * 4);
      *puVar3 = uVar5;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      lVar22 = lVar22 + 0xc;
      puVar23 = puVar23 + 2;
    } while (local_60 * 0xc != lVar22);
  }
LAB_140c072f5:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c0753f FUN_140c0753f body=171 status=ok
// SIG undefined FUN_140c0753f(void)

void FUN_140c0753f(longlong *param_1,longlong *param_2,longlong *param_3,uint param_4,
                  longlong *param_5)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  
  if (*param_2 == 0) {
    uVar12 = *(uint *)(*param_3 + 0x1a0);
    lVar3 = *(longlong *)(*param_3 + 0x198);
    uVar10 = 0;
    if (0 < (int)uVar12) {
      uVar5 = -param_4;
      if ((int)-param_4 < 0) {
        uVar5 = param_4;
      }
      uVar8 = (ulonglong)uVar12;
      do {
        uVar8 = uVar8 >> 1;
        uVar9 = (uint)uVar8 + (int)uVar10;
        uVar1 = *(uint *)(lVar3 + (ulonglong)uVar9 * 4);
        uVar7 = -uVar1;
        if ((int)uVar7 < 0) {
          uVar7 = uVar1;
        }
        if (uVar7 <= uVar5) {
          uVar10 = (ulonglong)(uVar9 + (uVar12 & 1));
        }
        bVar4 = 1 < uVar12;
        uVar12 = (uint)uVar8;
      } while (bVar4);
    }
    iVar2 = *(int *)(lVar3 + uVar10 * 4);
    iVar6 = -iVar2;
    if (iVar6 < 0) {
      iVar6 = iVar2;
    }
    iVar6 = iVar6 - param_4;
  }
  else {
    lVar3 = *(longlong *)(*param_2 + 0x400);
    lVar11 = (longlong)(int)param_4;
    param_4 = *(uint *)(lVar3 + 0x10 + lVar11 * 0x18);
    iVar6 = *(int *)(lVar3 + 0x14 + lVar11 * 0x18);
  }
  *param_1 = (longlong)(int)param_4 * 0x30 + *param_5;
  *(int *)(param_1 + 1) = iVar6;
  return;
}



// FUNCTION 140c075ea FUN_140c075ea body=184 status=ok
// SIG undefined FUN_140c075ea(void)

void FUN_140c075ea(longlong param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar13 = *(uint *)(lVar3 + 0x1a0);
    uVar12 = 0;
    if (0 < (int)uVar13) {
      uVar5 = -param_3;
      if ((int)-param_3 < 0) {
        uVar5 = param_3;
      }
      uVar10 = (ulonglong)uVar13;
      do {
        uVar10 = uVar10 >> 1;
        uVar11 = (uint)uVar10 + (int)uVar12;
        uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x198) + (ulonglong)uVar11 * 4);
        uVar9 = -uVar1;
        if ((int)uVar9 < 0) {
          uVar9 = uVar1;
        }
        if (uVar9 <= uVar5) {
          uVar12 = (ulonglong)(uVar11 + (uVar13 & 1));
        }
        bVar4 = 1 < uVar13;
        uVar13 = (uint)uVar10;
      } while (bVar4);
    }
    plVar6 = (longlong *)(lVar3 + 0x138);
    iVar2 = *(int *)(*(longlong *)(lVar3 + 0x198) + uVar12 * 4);
    iVar8 = -iVar2;
    if (iVar8 < 0) {
      iVar8 = iVar2;
    }
    iVar8 = iVar8 - param_3;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x400);
    lVar7 = (longlong)(int)param_3;
    plVar6 = (longlong *)(*(longlong *)(lVar3 + 8 + lVar7 * 0x18) + 0x48);
    iVar8 = *(int *)(lVar3 + 0x14 + lVar7 * 0x18);
    param_3 = *(uint *)(lVar3 + 0x10 + lVar7 * 0x18);
  }
  *param_2 = (longlong)(int)param_3 * 0x10 + *plVar6;
  *(int *)(param_2 + 1) = iVar8;
  return;
}



// FUNCTION 140c076a2 FUN_140c076a2 body=188 status=ok
// SIG undefined FUN_140c076a2(void)

void FUN_140c076a2(longlong param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar13 = *(uint *)(lVar3 + 0x1a0);
    uVar12 = 0;
    if (0 < (int)uVar13) {
      uVar5 = -param_3;
      if ((int)-param_3 < 0) {
        uVar5 = param_3;
      }
      uVar10 = (ulonglong)uVar13;
      do {
        uVar10 = uVar10 >> 1;
        uVar11 = (uint)uVar10 + (int)uVar12;
        uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x198) + (ulonglong)uVar11 * 4);
        uVar9 = -uVar1;
        if ((int)uVar9 < 0) {
          uVar9 = uVar1;
        }
        if (uVar9 <= uVar5) {
          uVar12 = (ulonglong)(uVar11 + (uVar13 & 1));
        }
        bVar4 = 1 < uVar13;
        uVar13 = (uint)uVar10;
      } while (bVar4);
    }
    plVar6 = (longlong *)(lVar3 + 0x118);
    iVar2 = *(int *)(*(longlong *)(lVar3 + 0x198) + uVar12 * 4);
    iVar8 = -iVar2;
    if (iVar8 < 0) {
      iVar8 = iVar2;
    }
    iVar8 = iVar8 - param_3;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x400);
    lVar7 = (longlong)(int)param_3;
    plVar6 = (longlong *)(*(longlong *)(lVar3 + 8 + lVar7 * 0x18) + 0x28);
    iVar8 = *(int *)(lVar3 + 0x14 + lVar7 * 0x18);
    param_3 = *(uint *)(lVar3 + 0x10 + lVar7 * 0x18);
  }
  *param_2 = (longlong)(int)param_3 * 0xc + *plVar6;
  *(int *)(param_2 + 1) = iVar8;
  return;
}



// FUNCTION 140c0775e FUN_140c0775e body=352 status=ok
// SIG undefined FUN_140c0775e(void)

void FUN_140c0775e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  
  if (param_2 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
    if (*(int *)(param_1 + 0x1460) != *(int *)(param_1 + 0x148c)) {
      lVar6 = param_1 + 0x1490;
      if (*(longlong *)(param_1 + 0x1498) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x1498);
      }
      iVar4 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x14a0) - 1U & (uVar3 ^ uVar2)) * 4);
      if (iVar4 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1458) + (longlong)iVar4 * 0x18);
          if (*plVar1 == CONCAT44(uVar3,uVar2)) {
            if (plVar1 == (longlong *)0x0) {
              return;
            }
            lVar6 = plVar1[1];
            if (lVar6 == 0) {
              return;
            }
            fVar8 = (float)(**(code **)(*param_2 + 0x630))(param_2);
            if ((*(float *)(lVar6 + 0x1a0) == fVar8) &&
               (!NAN(*(float *)(lVar6 + 0x1a0)) && !NAN(fVar8))) {
              return;
            }
            *(float *)(lVar6 + 0x1a0) = fVar8;
            if (*(longlong *)(param_1 + 0x58) == 0) {
              return;
            }
            *(undefined8 *)(lVar6 + 0x198) = *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x300);
            return;
          }
          iVar4 = (int)plVar1[2];
        } while (iVar4 != -1);
      }
    }
  }
  return;
}



// FUNCTION 140c078be FUN_140c078be body=38 status=ok
// SIG undefined FUN_140c078be(void)

undefined8 FUN_140c078be(undefined8 param_1,int param_2)

{
  FUN_140c078e4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c078e4 FUN_140c078e4 body=146 status=ok
// SIG undefined FUN_140c078e4(void)

void FUN_140c078e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7c7bb0;
  FUN_140280a77(param_1[0x12d],*(undefined4 *)(param_1 + 0x12e));
  if (param_1[0x12d] != 0) {
    FUN_1400020a8();
  }
  FUN_1448d844e(param_1[299],*(undefined4 *)(param_1 + 300));
  if (param_1[299] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x11e) = 0;
  if (param_1[0x11d] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x115);
  FUN_14064e066(param_1);
  return;
}



// FUNCTION 140c07976 FUN_140c07976 body=171 status=ok
// SIG undefined FUN_140c07976(void)

void FUN_140c07976(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  
  FUN_140c07a7c();
  if (*(char *)((longlong)param_1 + 0x422a) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x422a) = 0;
    (**(code **)(*param_1 + 0xf18))(param_1,1);
  }
  if (((param_1[0x842] != 0) && (*(char *)(param_1[0x842] + 0x51e) != '\0')) ||
     ((param_1[0x841] != 0 && (1 < *(int *)(param_1[0x841] + 0x568))))) {
    bVar2 = FUN_140c07a22(param_1 + 0x857);
    *(byte *)((longlong)param_1 + 0x422b) = bVar2 ^ 1;
    (**(code **)(*param_1 + 0xef8))(param_1);
  }
  FUN_140b89daa(param_1,0);
  lVar1 = param_1[0x3d7];
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0xb2) == '\x01')) {
    *(undefined1 *)(lVar1 + 0xb2) = 0;
    *(undefined1 *)(lVar1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 140c07a22 FUN_140c07a22 body=89 status=ok
// SIG undefined FUN_140c07a22(void)

uint FUN_140c07a22(void)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = FUN_14075fac2();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_140280ec4(lVar2);
    fVar3 = *(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x24);
    uVar1 = -(uint)(fVar3 == 0.0 ||
                   (*(float *)(lVar2 + 200) - *(float *)(lVar2 + 0x24)) / fVar3 <= 1e-08);
  }
  return uVar1 & 0xffffff01;
}



// FUNCTION 140c07a7c FUN_140c07a7c body=388 status=ok
// SIG undefined FUN_140c07a7c(void)

void FUN_140c07a7c(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x3e] + 0x840))();
  }
  lVar6 = param_1[0x57e];
  if (lVar6 == 0) {
    uVar5 = FUN_140aed8fc();
    lVar6 = FUN_14477b664(uVar5);
    param_1[0x57e] = lVar6;
  }
  plVar1 = param_1 + 0x57d;
  lVar7 = param_1[0x57f];
  if (lVar7 == 0) {
    if (lVar6 == 0) {
      return;
    }
    if (*plVar1 == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      param_1[0x57f] = 0;
      return;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar7 = FUN_144aff482(uVar5,plVar1);
    param_1[0x57f] = lVar7;
    if (lVar7 == 0) {
      return;
    }
    lVar6 = param_1[0x57e];
  }
  if (lVar6 == 0) {
    uVar5 = FUN_140aed8fc();
    lVar6 = FUN_14477b664(uVar5);
    param_1[0x57e] = lVar6;
    lVar7 = param_1[0x57f];
    if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar7 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar7 = FUN_144aff482(uVar5,plVar1);
      }
      param_1[0x57f] = lVar7;
    }
  }
  if ((*(byte *)(lVar7 + 0x20) & 4) == 0) {
    return;
  }
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0xe08))(param_1);
  FUN_140c07c00(param_1,*puVar4);
  return;
}



// FUNCTION 140c07c00 FUN_140c07c00 body=273 status=ok
// SIG undefined FUN_140c07c00(void)

void FUN_140c07c00(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x2be0) != param_2) {
    *(longlong *)(param_1 + 0x2be0) = param_2;
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0xb);
    }
    else {
      uVar6 = (uint)uVar1;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
        puVar3 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar3 = DAT_14c998080;
        }
        if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
          lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
          puVar4 = *(uint **)(lVar2 + 0x18);
          if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
            puVar4 = (uint *)(lVar2 + 8);
          }
          *puVar4 = *puVar4 | 0x800;
          *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
        }
      }
    }
  }
  FUN_140c07d12(param_1,local_38,param_2);
  FUN_140c080d8(param_1,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c07d12 FUN_140c07d12 body=559 status=ok
// SIG undefined FUN_140c07d12(void)

longlong * FUN_140c07d12(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar10 = (longlong *)(param_1 + 0x2c00);
  iVar8 = *(uint *)(param_1 + 0x2ca0) + 1;
  lVar5 = (ulonglong)*(uint *)(param_1 + 0x2ca0) << 5;
  local_40 = param_3;
  do {
    iVar8 = iVar8 + -1;
    if (iVar8 < 1) goto LAB_140c07d5d;
    lVar7 = lVar5 + -0x20;
    lVar6 = *(longlong *)(param_1 + 0x2c98);
    if (*(longlong *)(param_1 + 0x2c98) == 0) {
      lVar6 = param_1 + 0x2c18;
    }
    cVar3 = FUN_140c07f42(lVar5 + lVar6 + -0x20,&local_40);
    lVar5 = lVar7;
  } while (cVar3 == '\0');
  lVar5 = param_1 + 0x2c18;
  if (*(longlong *)(param_1 + 0x2c98) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x2c98);
  }
  plVar10 = (longlong *)(lVar5 + lVar7);
LAB_140c07d5d:
  cVar3 = FUN_140c07f42(plVar10,&local_40);
  if (cVar3 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  lVar5 = plVar10[1];
  if (lVar5 == 0) {
    uVar4 = FUN_14184ff62();
    lVar5 = FUN_14477b664(uVar4);
    plVar10[1] = lVar5;
  }
  lVar7 = plVar10[2];
  if (((lVar7 != 0) || (lVar7 = 0, lVar5 == 0)) || (*plVar10 == 0)) goto LAB_140c07d8c;
  plVar1 = *(longlong **)(lVar5 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_140c07f3e:
    lVar7 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar3 == '\0') goto LAB_140c07f3e;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar7 = FUN_144aff482(uVar4,plVar10);
  }
  plVar10[2] = lVar7;
LAB_140c07d8c:
  if (*(int *)(lVar7 + 0x20) != *(int *)(lVar7 + 0x4c)) {
    uVar2 = (uint)((ulonglong)local_40 >> 0x10);
    uVar9 = (uint)local_40 & 0xffff;
    lVar5 = lVar7 + 0x50;
    if (*(longlong *)(lVar7 + 0x58) != 0) {
      lVar5 = *(longlong *)(lVar7 + 0x58);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar7 + 0x60) - 1U &
                             (int)((ulonglong)local_40 >> 0x20) + ((uint)local_40 << 0x10 | uVar9) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar10 = (longlong *)(*(longlong *)(lVar7 + 0x18) + (longlong)iVar8 * 0x28);
        if (*plVar10 == local_40) goto LAB_140c07e06;
        iVar8 = (int)plVar10[4];
      } while (iVar8 != -1);
    }
  }
  plVar10 = (longlong *)0x0;
LAB_140c07e06:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = plVar10[1];
  uVar4 = FUN_14477b664(plVar10[2]);
  lVar5 = FUN_14477b664(uVar4);
  param_2[1] = lVar5;
  param_2[2] = plVar10[3];
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 140c07f42 FUN_140c07f42 body=405 status=ok
// SIG undefined FUN_140c07f42(void)

undefined8 FUN_140c07f42(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  
  lVar5 = param_1[1];
  if (lVar5 == 0) {
    uVar4 = FUN_14184ff62();
    lVar5 = FUN_14477b664(uVar4);
    param_1[1] = lVar5;
  }
  lVar6 = param_1[2];
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*param_1 == 0) {
      return 0;
    }
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      param_1[2] = 0;
      return 0;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar6 = FUN_144aff482(uVar4,param_1);
    param_1[2] = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    lVar5 = param_1[1];
  }
  if (lVar5 == 0) {
    uVar4 = FUN_14184ff62();
    lVar5 = FUN_14477b664(uVar4);
    param_1[1] = lVar5;
    lVar6 = param_1[2];
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*param_1 != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar4,param_1);
      }
      param_1[2] = lVar6;
    }
  }
  if (*(int *)(lVar6 + 0x20) != *(int *)(lVar6 + 0x4c)) {
    lVar5 = *param_2;
    uVar2 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar8 = (uint)lVar5 & 0xffff;
    lVar7 = lVar6 + 0x50;
    if (*(longlong *)(lVar6 + 0x58) != 0) {
      lVar7 = *(longlong *)(lVar6 + 0x58);
    }
    iVar9 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar6 + 0x60) - 1U &
                             (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar8) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        bVar10 = *(longlong *)(*(longlong *)(lVar6 + 0x18) + (longlong)iVar9 * 0x28) == lVar5;
        uVar4 = CONCAT71((int7)(int3)((uint)iVar9 >> 8),bVar10);
        if (bVar10) {
          return uVar4;
        }
        iVar9 = *(int *)(*(longlong *)(lVar6 + 0x18) + (longlong)iVar9 * 0x28 + 0x20);
      } while (iVar9 != -1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 140c080d8 FUN_140c080d8 body=1429 status=ok
// SIG undefined FUN_140c080d8(void)

void FUN_140c080d8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  uint *puVar14;
  longlong *plVar15;
  uint uVar16;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return;
  }
  if (*(byte *)(*(longlong *)(param_1 + 0xa8) + 0x178) < 2) {
    return;
  }
  if (*(longlong *)(param_1 + 0x2bf0) == 0) {
    uVar11 = FUN_140aed8fc();
    uVar11 = FUN_14477b664(uVar11);
    *(undefined8 *)(param_1 + 0x2bf0) = uVar11;
  }
  lVar8 = param_2[1];
  if (lVar8 == 0) {
    lVar8 = FUN_140aed8fc();
  }
  lVar1 = *param_2;
  lVar8 = FUN_14477b664(lVar8);
  iVar7 = 0;
  iVar6 = 0;
  if ((lVar8 != 0) && (plVar15 = *(longlong **)(lVar8 + 0xb8), plVar15 != (longlong *)0x0)) {
    lVar9 = *plVar15;
    pcVar2 = *(code **)(lVar9 + 0x108);
    if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar2)(plVar15);
      iVar6 = 0;
      if (cVar5 == '\0') goto LAB_140c081a3;
      lVar9 = *plVar15;
    }
    pcVar2 = *(code **)(lVar9 + 0x110);
    if (pcVar2 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar2 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar2)(plVar15);
    }
    iVar6 = FUN_144aff48c(ppuVar12);
  }
LAB_140c081a3:
  lVar9 = *(longlong *)(param_1 + 0x2be8);
  lVar3 = *(longlong *)(param_1 + 0x2bf0);
  if ((lVar3 != 0) && (plVar15 = *(longlong **)(lVar3 + 0xb8), plVar15 != (longlong *)0x0)) {
    lVar10 = *plVar15;
    pcVar2 = *(code **)(lVar10 + 0x108);
    if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar2)(plVar15);
      if (cVar5 == '\0') goto LAB_140c08215;
      lVar10 = *plVar15;
    }
    pcVar2 = *(code **)(lVar10 + 0x110);
    if (pcVar2 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar2 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar2)(plVar15);
    }
    iVar7 = FUN_144aff48c(ppuVar12);
  }
LAB_140c08215:
  if ((iVar7 == iVar6) && (lVar9 == lVar1)) {
    if (lVar3 == lVar8) {
      return;
    }
    if ((lVar8 != 0) && (lVar3 != 0)) {
      iVar6 = *(int *)(lVar8 + 0x38);
      iVar7 = *(int *)(lVar3 + 0x38);
      if ((iVar6 <= iVar7) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) == lVar8 + 0x30)) {
        return;
      }
      if ((iVar7 <= iVar6) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar7 * 8) == lVar3 + 0x30)) {
        return;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x2bf0) == 0) {
    uVar11 = FUN_140aed8fc();
    uVar11 = FUN_14477b664(uVar11);
    *(undefined8 *)(param_1 + 0x2bf0) = uVar11;
  }
  lVar8 = param_2[1];
  if (lVar8 == 0) {
    lVar8 = FUN_140aed8fc();
  }
  lVar1 = *param_2;
  lVar8 = FUN_14477b664(lVar8);
  iVar6 = 0;
  if ((lVar8 != 0) && (plVar15 = *(longlong **)(lVar8 + 0xb8), plVar15 != (longlong *)0x0)) {
    lVar9 = *plVar15;
    pcVar2 = *(code **)(lVar9 + 0x108);
    if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar2)(plVar15);
      iVar6 = 0;
      if (cVar5 == '\0') goto LAB_140c082bd;
      lVar9 = *plVar15;
    }
    pcVar2 = *(code **)(lVar9 + 0x110);
    if (pcVar2 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar2 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar2)(plVar15);
    }
    iVar6 = FUN_144aff48c(ppuVar12);
  }
LAB_140c082bd:
  lVar9 = *(longlong *)(param_1 + 0x2be8);
  lVar3 = *(longlong *)(param_1 + 0x2bf0);
  iVar7 = 0;
  if ((lVar3 != 0) && (plVar15 = *(longlong **)(lVar3 + 0xb8), plVar15 != (longlong *)0x0)) {
    lVar10 = *plVar15;
    pcVar2 = *(code **)(lVar10 + 0x108);
    if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
      cVar5 = (*pcVar2)(plVar15);
      iVar7 = 0;
      if (cVar5 == '\0') goto LAB_140c0832f;
      lVar10 = *plVar15;
    }
    pcVar2 = *(code **)(lVar10 + 0x110);
    if (pcVar2 == (code *)&LAB_144783426) {
      ppuVar12 = &PTR_PTR_14c763408;
    }
    else if (pcVar2 == (code *)&LAB_144783432) {
      ppuVar12 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar12 = (undefined **)(*pcVar2)(plVar15);
    }
    iVar7 = FUN_144aff48c(ppuVar12);
  }
LAB_140c0832f:
  if ((iVar7 == iVar6) && (lVar9 == lVar1)) {
    if (lVar3 == lVar8) goto LAB_140c083b6;
    if ((lVar8 != 0) && (lVar3 != 0)) {
      iVar6 = *(int *)(lVar8 + 0x38);
      iVar7 = *(int *)(lVar3 + 0x38);
      if (((iVar6 <= iVar7) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) == lVar8 + 0x30)) ||
         ((iVar7 <= iVar6 &&
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar7 * 8) == lVar3 + 0x30))))
      goto LAB_140c083b6;
    }
  }
  lVar8 = *param_2;
  if (*(longlong *)(param_1 + 0x2be8) != lVar8) {
    *(undefined8 *)(param_1 + 0x2bf8) = 0;
  }
  *(longlong *)(param_1 + 0x2be8) = lVar8;
  if (*(longlong *)(param_1 + 0x2bf0) != param_2[1]) {
    *(undefined8 *)(param_1 + 0x2bf8) = 0;
  }
  FUN_14477b664();
  uVar11 = FUN_14477b664();
  *(undefined8 *)(param_1 + 0x2bf0) = uVar11;
  *(longlong *)(param_1 + 0x2bf8) = param_2[2];
  uVar4 = *(ulonglong *)(param_1 + 0x38);
  if (uVar4 < 0xffffffff00000000) {
    plVar15 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar15 = (longlong *)0x0;
    }
    (**(code **)(*plVar15 + 0x58))(plVar15,param_1,uVar4,0xb);
  }
  else {
    uVar16 = (uint)uVar4;
    if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
      puVar13 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar13 = DAT_14c998080;
      }
      if ((*(uint *)(puVar13 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0) {
        lVar8 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
        puVar14 = *(uint **)(lVar8 + 0x18);
        if (*(uint **)(lVar8 + 0x18) == (uint *)0x0) {
          puVar14 = (uint *)(lVar8 + 8);
        }
        *puVar14 = *puVar14 | 0x800;
        *(byte *)(lVar8 + 0x60) = *(byte *)(lVar8 + 0x60) | 1;
      }
    }
  }
LAB_140c083b6:
  FUN_140c0866e(param_1);
  return;
}



// FUNCTION 140c0866e FUN_140c0866e body=610 status=ok
// SIG undefined FUN_140c0866e(void)

void FUN_140c0866e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  float local_28;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 0x2bd0) = 0xbf800000;
  if ((*(longlong *)(param_1 + 0x1cf0) == 0) ||
     (*(char *)(*(longlong *)(param_1 + 0x1cf0) + 0x24) != '\x01')) goto LAB_140c08791;
  lVar6 = *(longlong *)(param_1 + 0x2bf0);
  if (lVar6 == 0) {
    uVar4 = FUN_140aed8fc();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x2bf0) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 0x2be8);
  lVar5 = *(longlong *)(param_1 + 0x2bf8);
  if (lVar5 == 0) {
    if ((lVar6 == 0) || (*plVar1 == 0)) goto LAB_140c08791;
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0x2bf8) = lVar5;
        if (lVar5 == 0) goto LAB_140c08791;
        lVar6 = *(longlong *)(param_1 + 0x2bf0);
        goto LAB_140c08732;
      }
    }
    *(undefined8 *)(param_1 + 0x2bf8) = 0;
    goto LAB_140c08791;
  }
LAB_140c08732:
  if (lVar6 == 0) {
    uVar4 = FUN_140aed8fc(lVar5);
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x2bf0) = lVar6;
    lVar5 = *(longlong *)(param_1 + 0x2bf8);
    if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
LAB_140c088c9:
        lVar5 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x108))();
        if (cVar3 == '\0') goto LAB_140c088c9;
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_1 + 0x2bf8) = lVar5;
    }
  }
  FUN_140beced4(lVar5,param_1,&local_28,local_24);
  *(float *)(param_1 + 0x2bd0) = local_28;
  if (local_28 <= 0.0) goto LAB_140c08791;
  lVar6 = *(longlong *)(param_1 + 0x2bf0);
  if (lVar6 == 0) {
    uVar4 = FUN_140aed8fc();
    lVar6 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x2bf0) = lVar6;
  }
  lVar5 = *(longlong *)(param_1 + 0x2bf8);
  if (((lVar5 == 0) && (lVar5 = 0, lVar6 != 0)) && (*plVar1 != 0)) {
    plVar2 = *(longlong **)(lVar6 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_140c088cd:
      lVar5 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_140c088cd;
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,plVar1);
    }
    *(longlong *)(param_1 + 0x2bf8) = lVar5;
  }
  if ((*(byte *)(lVar5 + 0x20) & 4) != 0) {
    *(byte *)(param_1 + 0x5b5) = *(byte *)(param_1 + 0x5b5) | 8;
  }
LAB_140c08791:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c088e0 FUN_140c088e0 body=129 status=ok
// SIG undefined FUN_140c088e0(void)

undefined8 * FUN_140c088e0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b937520;
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_140c08962(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c08962 FUN_140c08962 body=360 status=ok
// SIG undefined FUN_140c08962(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c08962(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b3d6cf0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_140c08aca(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140c08aca(param_1 + 0x22);
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_140c08aca(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140c08aca(param_1 + 0xe);
  *param_1 = &PTR_FUN_14ab9ef50;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140ca41dc(param_1 + 4);
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
                    /* WARNING: Could not recover jumptable at 0x000140c08a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140c08aca FUN_140c08aca body=55 status=ok
// SIG undefined FUN_140c08aca(void)

void FUN_140c08aca(longlong *param_1)

{
  FUN_140c08b02(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c08b02 FUN_140c08b02 body=524 status=ok
// SIG undefined FUN_140c08b02(void)

void FUN_140c08b02(longlong *param_1,int param_2)

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
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140c08be3;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar6 * 0x38) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
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
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140c08be3;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140c08be3:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140c08d18 FUN_140c08d18 body=1003 status=ok
// SIG undefined FUN_140c08d18(void)

undefined8 FUN_140c08d18(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  uint *local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 *local_80;
  undefined1 local_74 [4];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = FUN_140c09104();
  local_a8 = param_1;
  FUN_1402057ac(param_2,param_1,uVar7,0);
  pbVar5 = (byte *)*param_2;
  puVar8 = (uint *)0x0;
  if ((pbVar5 != (byte *)0x0) &&
     (puVar8 = (uint *)CONCAT71((int7)((ulonglong)pbVar5 >> 8),~*pbVar5), (~*pbVar5 & 3) == 0)) {
    local_80 = (undefined8 *)CONCAT44(local_80._4_4_,DAT_14cb1d190);
    local_88 = DAT_14cb1d188;
    FUN_1448075d0(&local_70);
    pbVar5 = (byte *)*param_2;
    if (pbVar5 != (byte *)0x0) {
      if ((*pbVar5 & 2) == 0) {
        plVar12 = &DAT_14c9a1288;
      }
      else {
        plVar12 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
      }
      if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
        plVar18 = plVar12 + 8;
        if ((longlong *)plVar12[9] != (longlong *)0x0) {
          plVar18 = (longlong *)plVar12[9];
        }
        iVar17 = *(int *)((longlong)plVar18 +
                         (ulonglong)((int)plVar12[10] - 1U & (uint)local_70) * 4);
        if (iVar17 != -1) {
          do {
            lVar1 = *plVar12 + (longlong)iVar17 * 0x40;
            if (*(uint *)(*plVar12 + (longlong)iVar17 * 0x40) == (uint)local_70) {
              if ((((lVar1 != 0) &&
                   (puVar15 = (undefined8 *)(lVar1 + 0x28), puVar15 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar15 != (byte *)0x0)) && ((*(byte *)*puVar15 & 0x40) == 0))
              goto LAB_140c08e0c;
              break;
            }
            iVar17 = *(int *)(lVar1 + 0x38);
          } while (iVar17 != -1);
        }
      }
    }
    puVar15 = &DAT_14c9a1308;
LAB_140c08e0c:
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    puVar8 = (uint *)*puVar15;
    if ((puVar8 != (uint *)0x0) && ((~(byte)*puVar8 & 3) == 0)) {
      lVar1 = *(longlong *)(puVar8 + 2);
      uVar3 = *(uint *)(lVar1 + 0x48);
      if (uVar3 == 0) {
        uVar16 = 1;
        uVar14 = 0;
        puVar8 = (uint *)0x0;
        iVar17 = 0;
      }
      else {
        puVar8 = *(uint **)(lVar1 + 0x40);
        if (*(uint **)(lVar1 + 0x40) == (uint *)0x0) {
          puVar8 = (uint *)(lVar1 + 0x30);
        }
        uVar6 = *puVar8;
        if (uVar6 == 0) {
          iVar17 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar17 = uVar3 - 1;
          }
          uVar14 = 0;
          uVar16 = (ulonglong)(uint)(iVar17 >> 5);
          if (iVar17 >> 5 < 1) {
            uVar16 = uVar14;
          }
          iVar17 = 0;
          do {
            if (uVar16 == uVar14) goto LAB_140c08fb9;
            iVar17 = iVar17 + 0x20;
            uVar6 = puVar8[uVar14 + 1];
            uVar14 = uVar14 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar14 = 0;
          iVar17 = 0;
        }
        uVar16 = (ulonglong)(-uVar6 & uVar6);
        uVar2 = uVar16 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar6 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        puVar8 = (uint *)(ulonglong)uVar6;
        if ((int)uVar3 <= (int)uVar6) {
          puVar8 = (uint *)(ulonglong)uVar3;
        }
      }
      if ((uint)puVar8 != uVar3) {
        uVar6 = 0xffffffff;
        local_a0 = (uint *)(lVar1 + 0x30);
        do {
          lVar20 = (longlong)(int)puVar8 * 0x40 + *(longlong *)(lVar1 + 0x18);
          if (DAT_14c947fe0 == 0) {
            lVar19 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar19);
            DAT_14c947fe0 = lVar19;
          }
          FUN_140045924(DAT_14c947fe0,&local_70,lVar20,1);
          if (DAT_14caa8580 == 0) {
            FUN_140608a9e();
          }
          FUN_1400702d4(DAT_14caa8580,&local_90,local_70,0);
          if (local_90 != 0) {
            local_88 = (longlong *)0x0;
            FUN_1400bc2c2(lVar20 + 0x28,&local_98,&local_88);
            local_70 = local_98;
            local_68 = 0xc;
            local_60 = 0;
            local_88 = &local_90;
            local_80 = &local_70;
            FUN_145704100(local_a8,local_74,&local_88);
          }
          uVar6 = uVar6 & ~(uint)uVar16;
          puVar8 = *(uint **)(lVar1 + 0x40);
          if (*(uint **)(lVar1 + 0x40) == (uint *)0x0) {
            puVar8 = local_a0;
          }
          uVar4 = *(uint *)(lVar1 + 0x48);
          iVar13 = (int)uVar14;
          lVar20 = (longlong)iVar13;
          uVar11 = puVar8[lVar20] & uVar6;
          if (uVar11 == 0) {
            iVar9 = uVar4 + 0x1e;
            if (-1 < (int)(uVar4 - 1)) {
              iVar9 = uVar4 - 1;
            }
            iVar9 = iVar9 >> 5;
            iVar17 = iVar17 + 0x20;
            iVar10 = iVar9;
            if (iVar9 < iVar13) {
              iVar10 = iVar13;
            }
            if (iVar13 < iVar9) {
              lVar19 = 0;
              do {
                uVar11 = (puVar8 + lVar20 + 1)[lVar19];
                if (uVar11 != 0) {
                  uVar14 = (ulonglong)(iVar13 + (int)lVar19 + 1);
                  uVar6 = 0xffffffff;
                  goto LAB_140c08f8d;
                }
                iVar17 = iVar17 + 0x20;
                lVar19 = lVar19 + 1;
              } while (iVar10 - lVar20 != lVar19);
              uVar6 = 0xffffffff;
              iVar13 = iVar10;
            }
            uVar14 = (ulonglong)(iVar13 + 1);
            uVar11 = uVar4;
          }
          else {
LAB_140c08f8d:
            uVar16 = (ulonglong)(-uVar11 & uVar11);
            uVar2 = uVar16 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            uVar11 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if ((int)uVar4 <= (int)uVar11) {
              uVar11 = uVar4;
            }
          }
          puVar8 = (uint *)(ulonglong)uVar11;
        } while (uVar11 != uVar3);
      }
    }
  }
LAB_140c08fb9:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
}



// FUNCTION 140c09104 FUN_140c09104 body=57 status=ok
// SIG undefined FUN_140c09104(void)

void FUN_140c09104(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1c4e8 == 0) {
    uVar1 = FUN_140cea770();
    DAT_14cb1c4e8 = FUN_140002ddd(FUN_1464206df,uVar1,L"GbxStanceUserData");
  }
  return;
}



// FUNCTION 140c0914c FUN_140c0914c body=70 status=ok
// SIG undefined FUN_140c0914c(void)

undefined8 * FUN_140c0914c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b693f70;
  if (param_1[0x9a] != 0) {
    FUN_1400020a8();
  }
  FUN_140c09192(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c09192 FUN_140c09192 body=493 status=ok
// SIG undefined FUN_140c09192(void)

void FUN_140c09192(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b687a50;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x79] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x79] + 0x50));
  }
  if ((param_1[0x73] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x73] + 0x50));
  }
  if ((param_1[0x6b] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x6b] + 0x50));
  }
  if ((param_1[100] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[100] + 0x50));
  }
  if ((param_1[0x5e] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x5e] + 0x50));
  }
  if ((param_1[0x56] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x56] + 0x50));
  }
  plVar3 = (longlong *)param_1[0x19];
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
  plVar3 = (longlong *)param_1[0x16];
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
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c09386 FUN_140c09386 body=57 status=ok
// SIG undefined FUN_140c09386(void)

void FUN_140c09386(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb231d8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb231d8 = FUN_140002ddd(FUN_14643cf3b,uVar1,L"GpsTest_EffectArea");
  }
  return;
}



// FUNCTION 140c093bf FUN_140c093bf body=9008 status=ok
// SIG undefined FUN_140c093bf(void)

void FUN_140c093bf(longlong *param_1,LARGE_INTEGER *param_2,void **param_3,undefined8 *param_4)

{
  LARGE_INTEGER *pLVar1;
  undefined4 *puVar2;
  DWORD *pDVar3;
  double dVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  LARGE_INTEGER LVar16;
  undefined4 uVar17;
  _struct_19 _Var18;
  _struct_19 _Var19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  undefined1 *puVar24;
  longlong *plVar25;
  undefined2 uVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar31;
  ulonglong uVar32;
  longlong lVar33;
  void **ppvVar34;
  LARGE_INTEGER *pLVar35;
  undefined4 uVar36;
  LARGE_INTEGER LVar37;
  LARGE_INTEGER LVar38;
  ulonglong uVar39;
  undefined4 *puVar40;
  undefined4 *puVar41;
  longlong lVar42;
  bool bVar43;
  float fVar44;
  DWORD DVar45;
  DWORD DVar46;
  float fVar47;
  float fVar48;
  LONG LVar49;
  LONG LVar50;
  float fVar51;
  LARGE_INTEGER LVar52;
  LARGE_INTEGER LVar53;
  float fVar54;
  LARGE_INTEGER LVar55;
  double dVar56;
  float fVar57;
  float fVar58;
  DWORD DVar59;
  LONG LVar60;
  undefined1 auStack_528 [32];
  longlong **local_508;
  longlong **local_500;
  LARGE_INTEGER local_4f8;
  LARGE_INTEGER *local_4f0;
  undefined2 *local_4e8;
  LARGE_INTEGER *local_4d8;
  LARGE_INTEGER local_4d0;
  undefined8 *local_4c8;
  LARGE_INTEGER local_4c0;
  void **local_4b8;
  longlong *local_4b0;
  int local_4a4;
  int local_4a0;
  int local_49c;
  ulonglong local_498;
  ulonglong local_490;
  void *local_488;
  undefined8 uStack_480;
  void *local_478;
  uint local_470;
  int local_46c;
  longlong *local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  longlong local_438;
  undefined8 uStack_430;
  LARGE_INTEGER *local_428;
  undefined8 uStack_420;
  void *local_418;
  undefined8 uStack_410;
  longlong local_408;
  undefined8 uStack_400;
  void *local_3f8;
  undefined8 uStack_3f0;
  void *local_3e8;
  undefined8 uStack_3e0;
  void *local_3d0;
  int local_3c8;
  undefined4 local_3c4;
  void *local_3c0;
  uint local_3b8;
  undefined4 local_3b4;
  longlong *local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  longlong *local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  LARGE_INTEGER local_368;
  LARGE_INTEGER LStack_360;
  _struct_19 local_358;
  LARGE_INTEGER local_350;
  LARGE_INTEGER LStack_348;
  _struct_19 local_340;
  undefined2 local_338;
  undefined1 local_336;
  undefined1 local_330 [24];
  LARGE_INTEGER local_318;
  LARGE_INTEGER LStack_310;
  _struct_19 local_308 [2];
  longlong local_2f8;
  undefined4 local_2f0;
  uint local_2ec;
  undefined4 uStack_2e8;
  int local_2e4;
  undefined1 local_2e0 [8];
  undefined1 *local_2d8;
  int local_2d0;
  undefined **local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  ulonglong uStack_2b0;
  undefined **local_2a8;
  ulonglong uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  char local_288;
  undefined8 local_284;
  undefined4 local_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_258;
  undefined4 local_250;
  undefined8 local_24c;
  undefined4 local_244;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  ulonglong uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong local_208;
  double local_200;
  double local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d4;
  undefined8 uStack_1cc;
  undefined4 local_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  uint uStack_1b8;
  uint local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  int local_1a4;
  undefined8 local_1a0;
  double local_198;
  undefined4 local_190;
  int local_18c;
  double local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  undefined2 local_147;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_528;
  if (*(char *)((longlong)param_4 + 0x83) == '\x01') {
    local_478 = (void *)0x0;
    local_470 = *(uint *)(param_4 + 1);
    lVar29 = (longlong)(int)local_470;
    pvVar5 = (void *)*param_4;
    local_4d8 = param_2;
    local_4c8 = param_4;
    if (lVar29 == 0) {
      local_46c = 0;
    }
    else {
      FUN_140c0b9de(&local_478,local_470,0);
      memcpy(local_478,pvVar5,lVar29 * 0xc);
    }
    local_488 = (void *)0x0;
    uStack_480 = 0;
    iVar31 = *(int *)(local_4c8 + 3);
    local_4b0 = param_1;
    if (iVar31 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar31 * 3);
    }
    if (iVar31 != 0) {
      FUN_14481578e(&local_488);
      if ((longlong)*(int *)(local_4c8 + 3) != 0) {
        puVar40 = (undefined4 *)local_4c8[2];
        puVar2 = puVar40 + (longlong)*(int *)(local_4c8 + 3) * 3;
        puVar27 = local_4c8;
        do {
          puVar41 = puVar40;
          if ((*(byte *)(puVar27 + 8) & 1) != 0) {
            puVar41 = puVar40 + 1;
          }
          lVar29 = (longlong)(int)(uint)uStack_480;
          uVar21 = (uint)uStack_480 + 1;
          if (uStack_480._4_4_ < uVar21) {
            uVar32 = uStack_480 & 0xffffffff;
            uStack_480._0_4_ = uVar21;
            FUN_1446f48e2(&local_488,uVar32);
            puVar27 = local_4c8;
            uVar21 = (uint)uStack_480;
          }
          uStack_480._0_4_ = uVar21;
          uVar21 = (uint)uStack_480;
          *(undefined4 *)((longlong)local_488 + lVar29 * 4) = *puVar41;
          puVar41 = puVar40 + 1;
          if ((*(byte *)(puVar27 + 8) & 1) != 0) {
            puVar41 = puVar40;
          }
          lVar29 = (longlong)(int)(uint)uStack_480;
          uStack_480._0_4_ = (uint)uStack_480 + 1;
          if (uStack_480._4_4_ < (uint)uStack_480) {
            FUN_1446f48e2(&local_488,uVar21);
            puVar27 = local_4c8;
          }
          uVar21 = (uint)uStack_480;
          *(undefined4 *)((longlong)local_488 + lVar29 * 4) = *puVar41;
          lVar29 = (longlong)(int)(uint)uStack_480;
          uStack_480._0_4_ = (uint)uStack_480 + 1;
          if (uStack_480._4_4_ < (uint)uStack_480) {
            FUN_1446f48e2(&local_488,uVar21);
            puVar27 = local_4c8;
          }
          *(undefined4 *)((longlong)local_488 + lVar29 * 4) = puVar40[2];
          puVar40 = puVar40 + 3;
        } while (puVar40 != puVar2);
      }
    }
    pvVar5 = local_478;
    local_4b8 = param_3;
    if (DAT_14c761728 != 0) {
      local_3c0 = (void *)0x0;
      lVar29 = (longlong)(int)local_470;
      local_3b8 = local_470;
      if (lVar29 == 0) {
        local_3b4 = 0;
      }
      else {
        FUN_140c0b9de(&local_3c0,local_470,0);
        memcpy(local_3c0,pvVar5,lVar29 * 0xc);
      }
      pvVar5 = local_488;
      local_3d0 = (void *)0x0;
      lVar29 = (longlong)(int)(uint)uStack_480;
      local_3c8 = (uint)uStack_480;
      if (lVar29 == 0) {
        local_3c4 = 0;
        iVar31 = 0;
      }
      else {
        FUN_144a06ca8(&local_3d0,uStack_480 & 0xffffffff,0);
        memcpy(local_3d0,pvVar5,lVar29 << 2);
        iVar31 = local_3c8;
      }
      uVar21 = local_3b8;
      uVar32 = (ulonglong)local_3b8;
      if ((uVar32 != 0) && (uVar39 = (ulonglong)(uint)(iVar31 / 3), iVar31 == (iVar31 / 3) * 3)) {
        local_3e8 = (void *)0x0;
        uStack_3e0 = 0;
        local_3f8 = (void *)0x0;
        uStack_3f0 = 0;
        local_408 = 0;
        uStack_400 = 0;
        local_418 = (void *)0x0;
        uStack_410 = 0;
        if ((int)local_3b8 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar32);
        }
        FUN_140678446(&local_3e8,uVar32);
        iVar23 = (int)uStack_410;
        uStack_410 = CONCAT44(uStack_410._4_4_,(int)uStack_410 + uVar21);
        if ((uint)(uStack_410._4_4_ - iVar23) < uVar21) {
          FUN_1446f48e2(&local_418);
        }
        local_428 = (LARGE_INTEGER *)0x0;
        uStack_420 = 0;
        iVar23 = 0;
        if (0 < (int)local_3b8) {
          lVar29 = 8;
          lVar42 = 0;
          do {
            uVar28 = uStack_420;
            fVar51 = *(float *)((longlong)local_3c0 + lVar29);
            fVar44 = *(float *)((longlong)local_3c0 + lVar29 + -4);
            fVar47 = *(float *)((longlong)local_3c0 + lVar29 + -8);
            lVar30 = (longlong)(int)uStack_420;
            uVar21 = (int)uStack_420 + 1;
            uStack_420 = CONCAT44(uStack_420._4_4_,uVar21);
            if (uStack_420._4_4_ < uVar21) {
              FUN_140c0b868(&local_428,uVar28 & 0xffffffff);
            }
            local_428[lVar30 * 3] = (LARGE_INTEGER)(double)fVar47;
            local_428[lVar30 * 3 + 1] = (LARGE_INTEGER)(double)fVar44;
            local_428[lVar30 * 3 + 2] = (LARGE_INTEGER)(double)fVar51;
            lVar42 = lVar42 + 1;
            lVar29 = lVar29 + 0xc;
          } while (lVar42 < (int)local_3b8);
          iVar23 = (int)uStack_420;
        }
        local_2c0 = CONCAT26(local_2c0._6_2_,0x10000000000);
        local_2c8 = &PTR_FUN_149f5e4d0;
        uStack_2b8 = 0;
        uStack_2b0 = 0;
        local_2a8 = (undefined **)0x0;
        uStack_2a0 = 0;
        local_298 = 0;
        uStack_290 = 0;
        local_288 = '\0';
        local_284 = 0xffffffffffffffff;
        local_27c = 0xffffffff;
        local_258 = 0;
        local_250 = 0;
        local_278 = 0;
        uStack_270 = 0;
        local_24c = 0xffffffff00000080;
        local_244 = 0;
        local_238 = 0;
        local_230 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_218 = 0;
        uStack_210 = 0;
        local_208 = 0;
        local_1a4 = 0;
        local_1b4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
        iStack_1a8 = 0;
        local_1c4 = 0;
        uStack_1c0 = 0;
        uStack_1bc = 0;
        uStack_1b8 = 0;
        local_1d4 = 0;
        uStack_1cc = 0;
        local_1e4 = 0;
        uStack_1dc = 0;
        local_1a0 = 0x100000000c;
        local_198 = 100000.0;
        local_190 = 0;
        local_188 = 0.0;
        uStack_180 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_148 = 0;
        local_147 = 0x101;
        local_140 = 0;
        uStack_138 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_110 = 0;
        uStack_108 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        if (iVar23 < -0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar23 / 0xc);
        }
        if (0xb < iVar23) {
          FUN_14481578e(&local_178);
        }
        iVar22 = FUN_140c107b0(&local_2c8);
        if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar23);
        }
        lVar29 = local_158 + (longlong)iVar22 * 0xf8;
        local_4c0.QuadPart = local_158 + (longlong)iVar22 * 0xf8 + 0x38;
        if (*(int *)(lVar29 + 0x44) < iVar23) {
          FUN_140c108c0(local_4c0.QuadPart,iVar23);
        }
        uStack_1b8 = 0;
        if ((int)local_1b4 < 0) {
          FUN_140c108c0(&uStack_1c0,0);
        }
        uVar20 = uStack_2a0;
        FUN_140c0bd00(local_2a8,uStack_2a0 & 0xffffffff);
        uVar28 = uStack_2a0 >> 0x20;
        uStack_2a0 = uStack_2a0 & 0xffffffff00000000;
        if (((longlong)uVar20 < 0) && ((int)uVar28 != 0)) {
          FUN_145784e0c(&local_2a8,0);
        }
        bVar43 = (longlong)uStack_2b0 < 0;
        uStack_2b0 = uStack_2b0 & 0xffffffff00000000;
        if (bVar43) {
          FUN_14008b684(&uStack_2b8,0);
        }
        local_284 = 0xffffffffffffffff;
        local_27c = 0xffffffff;
        if ((longlong)uStack_290 < 0) {
          uStack_290 = (ulonglong)uStack_290._4_4_ << 0x20;
          FUN_140c108c0(&local_298,0);
        }
        else {
          uStack_290 = (ulonglong)uStack_290._4_4_ << 0x20;
        }
        FUN_1402a3552(&local_278);
        bVar43 = (longlong)uStack_220 < 0;
        uStack_220 = uStack_220 & 0xffffffff00000000;
        if (bVar43) {
          FUN_14481578e(&local_228,0);
        }
        if (uStack_210 < 0) {
          uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
          FUN_14481578e(&local_218,0);
        }
        else {
          uStack_210 = (ulonglong)uStack_210._4_4_ << 0x20;
        }
        if (local_208 != 0) {
          FUN_145784ef0();
        }
        local_1c4 = 0;
        local_1d4 = 0;
        uStack_1cc = 0;
        local_1e4 = 0;
        uStack_1dc = 0;
        iStack_1a8 = 0;
        if (local_1a4 < 0) {
          FUN_145784e7e(&uStack_1b0,0);
        }
        local_18c = 0;
        QueryPerformanceCounter(&local_368);
        pLVar35 = local_428;
        local_188 = (double)local_368.QuadPart * DAT_14c83f420 + 16777216.0;
        local_200 = (double)DAT_14c75efb8;
        local_1f8 = 1.0;
        if (0 < DAT_14c75efb8) {
          local_1f8 = 1.0 / (double)DAT_14c75efb8;
        }
        local_1f0 = DAT_14c75efbc;
        local_1ec = DAT_14c75efc0;
        local_1e8 = DAT_14c75efc4;
        local_4a4 = iVar22;
        local_4a0 = iVar23;
        local_49c = iVar31;
        local_498 = uVar39;
        local_490 = uVar32;
        if (local_288 == '\x01') {
          lVar29 = (longlong)(int)uStack_420;
          if (lVar29 != 0) {
            lVar42 = 0;
            iVar31 = 0;
            do {
              local_468 = (longlong *)CONCAT44(local_468._4_4_,iVar31);
              local_340 = *(_struct_19 *)((longlong)pLVar35 + lVar42 + 0x10);
              pLVar1 = (LARGE_INTEGER *)((longlong)pLVar35 + lVar42);
              local_350 = *pLVar1;
              local_318 = *pLVar1;
              LStack_348 = pLVar1[1];
              LStack_310 = pLVar1[1];
              local_368 = *(LARGE_INTEGER *)((longlong)pLVar35 + lVar42);
              LStack_360 = ((LARGE_INTEGER *)((longlong)pLVar35 + lVar42))[1];
              local_358 = *(_struct_19 *)((longlong)pLVar35 + lVar42 + 0x10);
              local_308[0] = local_340;
              FUN_140c0c818(&local_2c8,&local_468,&local_368,1);
              iVar31 = iVar31 + 1;
              lVar42 = lVar42 + 0x18;
            } while (lVar29 * 0x18 != lVar42);
          }
          local_2c0._0_5_ = CONCAT14(1,(undefined4)local_2c0);
        }
        else {
          *(undefined8 *)(lVar29 + 8) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar29 + 0x10) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar29 + 0x18) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar29 + 0x20) = 0xffefffffffffffff;
          *(undefined8 *)(lVar29 + 0x28) = 0xffefffffffffffff;
          *(undefined8 *)(lVar29 + 0x30) = 0xffefffffffffffff;
          *(undefined8 *)(lVar29 + 0x48) = 0;
          *(undefined8 *)(lVar29 + 0x50) = 0;
          *(undefined8 *)(lVar29 + 0x58) = 0;
          *(undefined8 *)(lVar29 + 0x60) = 0;
          *(undefined8 *)(lVar29 + 0x68) = 0;
          *(undefined8 *)(lVar29 + 0x70) = 0;
          if ((longlong)(int)uStack_420 != 0) {
            local_4d0.QuadPart = (LONGLONG)(local_428 + (longlong)(int)uStack_420 * 3);
            lVar42 = 0;
            do {
              local_340 = pLVar35[2].s;
              local_350 = *pLVar35;
              LStack_348 = pLVar35[1];
              local_358 = pLVar35[2].s;
              local_368 = *pLVar35;
              LStack_360 = pLVar35[1];
              lVar30 = 0;
              do {
                LVar37 = (&local_350)[lVar30];
                iVar31 = (int)lVar42;
                if ((((double)LVar37 < (double)(&local_368)[lVar30]) ||
                    (iVar23 = _finite((double)(&local_368)[lVar30]), iVar23 == 0)) ||
                   (iVar23 = _finite((double)LVar37), _Var19 = local_340, LVar55 = LStack_348,
                   LVar16 = local_350, _Var18 = local_358, LVar38 = LStack_360, LVar37 = local_368,
                   iVar23 == 0)) {
                  local_368.QuadPart = -0x10000000000001;
                  LStack_360.QuadPart = -0x10000000000001;
                  local_358.LowPart = 0xffffffff;
                  local_358.HighPart = -0x100001;
                  local_350.QuadPart = 0x7fefffffffffffff;
                  LStack_348.QuadPart = 0x7fefffffffffffff;
                  local_340.LowPart = 0xffffffff;
                  local_340.HighPart = 0x7fefffff;
                  goto LAB_140c0a059;
                }
                lVar30 = lVar30 + 1;
              } while (lVar30 != 3);
              DVar59 = local_340.LowPart;
              LVar60 = local_340.HighPart;
              DVar46 = local_358.LowPart;
              LVar50 = local_358.HighPart;
              dVar9 = (double)local_340 - (double)local_358;
              dVar10 = (double)LStack_348 - (double)LStack_360;
              dVar12 = (double)local_350 - (double)local_368;
              dVar4 = dVar12;
              if ((dVar12 <= dVar9 || dVar12 <= dVar10) && (dVar4 = dVar10, dVar10 <= dVar9)) {
                dVar4 = dVar9;
              }
              if (local_198 < dVar4) {
LAB_140c0a059:
                uVar21 = uStack_1b8;
                if (iStack_1a8 <= lVar42) {
                  FUN_140c10d7e(&uStack_1b0,(iVar31 - iStack_1a8) + 1);
                }
                uVar15 = uStack_1b8;
                lVar30 = lVar42 * 0x18;
                *(undefined1 *)(CONCAT44(uStack_1ac,uStack_1b0) + 0x14 + lVar30) = 1;
                *(uint *)(CONCAT44(uStack_1ac,uStack_1b0) + lVar30) = uVar21;
                puVar2 = (undefined4 *)(CONCAT44(uStack_1ac,uStack_1b0) + 4 + lVar30);
                *puVar2 = 0xffffffff;
                puVar2[1] = 0xffffffff;
                puVar2[2] = 0xffffffff;
                puVar2[3] = 0xffffffff;
                lVar30 = (longlong)(int)uStack_1b8;
                uStack_1b8 = uStack_1b8 + 1;
                if (local_1b4 < uStack_1b8) {
                  FUN_140c11858(&uStack_1c0,uVar15);
                }
                lVar33 = CONCAT44(uStack_1bc,uStack_1c0);
                lVar30 = lVar30 * 0x38;
                *(int *)(lVar33 + lVar30) = iVar31;
                pLVar1 = (LARGE_INTEGER *)(lVar33 + 8 + lVar30);
                *pLVar1 = local_368;
                pLVar1[1] = LStack_360;
                *(_struct_19 *)(lVar33 + 0x18 + lVar30) = local_358;
                pDVar3 = (DWORD *)(lVar33 + 0x20 + lVar30);
                *pDVar3 = local_350.s.LowPart;
                pDVar3[1] = local_350.s.HighPart;
                pDVar3[2] = LStack_348._0_4_;
                pDVar3[3] = LStack_348._4_4_;
                *(_struct_19 *)(lVar33 + 0x30 + lVar30) = local_340;
              }
              else {
                iVar23 = *(int *)(lVar29 + 0x40);
                uVar21 = iVar23 + 1;
                *(uint *)(lVar29 + 0x40) = uVar21;
                if (*(uint *)(lVar29 + 0x44) < uVar21) {
                  FUN_140c11858(local_4c0.QuadPart,iVar23);
                }
                lVar30 = *(longlong *)(lVar29 + 0x38);
                lVar33 = (longlong)iVar23 * 0x38;
                *(int *)(lVar30 + lVar33) = iVar31;
                *(_struct_19 *)(lVar30 + 0x18 + lVar33) = local_358;
                pLVar1 = (LARGE_INTEGER *)(lVar30 + 8 + lVar33);
                *pLVar1 = local_368;
                pLVar1[1] = LStack_360;
                pLVar1 = (LARGE_INTEGER *)(lVar30 + 0x20 + lVar33);
                pLVar1->s = (_struct_19)local_350;
                pLVar1[1].s = (_struct_19)LStack_348;
                *(_struct_19 *)(lVar30 + 0x30 + lVar33) = local_340;
                dVar8 = (double)(int)uVar21;
                dVar4 = *(double *)(lVar29 + 0x18);
                DVar45 = SUB84(dVar4,0);
                LVar49 = (LONG)((ulonglong)dVar4 >> 0x20);
                if ((double)_Var18 <= dVar4) {
                  DVar45 = DVar46;
                  LVar49 = LVar50;
                }
                LVar53 = *(LARGE_INTEGER *)(lVar29 + 0x10);
                if ((double)LVar38 <= (double)*(LARGE_INTEGER *)(lVar29 + 0x10)) {
                  LVar53 = LVar38;
                }
                LVar52 = *(LARGE_INTEGER *)(lVar29 + 8);
                if ((double)LVar37 <= (double)*(LARGE_INTEGER *)(lVar29 + 8)) {
                  LVar52 = LVar37;
                }
                *(LARGE_INTEGER *)(lVar29 + 8) = LVar52;
                *(LARGE_INTEGER *)(lVar29 + 0x10) = LVar53;
                *(ulonglong *)(lVar29 + 0x18) = CONCAT44(LVar49,DVar45);
                dVar4 = *(double *)(lVar29 + 0x30);
                DVar46 = SUB84(dVar4,0);
                LVar50 = (LONG)((ulonglong)dVar4 >> 0x20);
                if (dVar4 <= (double)_Var19) {
                  DVar46 = DVar59;
                  LVar50 = LVar60;
                }
                LVar53 = *(LARGE_INTEGER *)(lVar29 + 0x28);
                if ((double)*(LARGE_INTEGER *)(lVar29 + 0x28) <= (double)LVar55) {
                  LVar53 = LVar55;
                }
                LVar55 = *(LARGE_INTEGER *)(lVar29 + 0x20);
                if ((double)*(LARGE_INTEGER *)(lVar29 + 0x20) <= (double)LVar16) {
                  LVar55 = LVar16;
                }
                *(LARGE_INTEGER *)(lVar29 + 0x20) = LVar55;
                *(LARGE_INTEGER *)(lVar29 + 0x28) = LVar53;
                *(ulonglong *)(lVar29 + 0x30) = CONCAT44(LVar50,DVar46);
                dVar4 = dVar9 * 0.5 + (double)_Var18;
                dVar11 = dVar10 * 0.5 + (double)LVar38;
                dVar12 = dVar12 * 0.5 + (double)LVar37;
                dVar56 = dVar4 - *(double *)(lVar29 + 0x58);
                dVar9 = dVar11 - *(double *)(lVar29 + 0x50);
                dVar10 = dVar12 - *(double *)(lVar29 + 0x48);
                dVar14 = dVar10 / dVar8 + *(double *)(lVar29 + 0x48);
                *(double *)(lVar29 + 0x48) = dVar14;
                dVar13 = dVar9 / dVar8 + *(double *)(lVar29 + 0x50);
                *(double *)(lVar29 + 0x50) = dVar13;
                dVar8 = dVar56 / dVar8 + *(double *)(lVar29 + 0x58);
                *(double *)(lVar29 + 0x58) = dVar8;
                *(double *)(lVar29 + 0x60) = (dVar12 - dVar14) * dVar10 + *(double *)(lVar29 + 0x60)
                ;
                *(double *)(lVar29 + 0x68) = (dVar11 - dVar13) * dVar9 + *(double *)(lVar29 + 0x68);
                *(double *)(lVar29 + 0x70) = (dVar4 - dVar8) * dVar56 + *(double *)(lVar29 + 0x70);
              }
              lVar42 = lVar42 + 1;
              pLVar35 = pLVar35 + 3;
            } while (pLVar35 != (LARGE_INTEGER *)local_4d0.QuadPart);
          }
          uVar32 = uStack_170;
          local_18c = local_4a0;
          *(undefined8 *)(lVar29 + 0x78) = 0;
          lVar29 = (longlong)(int)uStack_170;
          uVar21 = (int)uStack_170 + 1;
          uStack_170 = CONCAT44(uStack_170._4_4_,uVar21);
          if (uStack_170._4_4_ < uVar21) {
            FUN_1446f48e2(&local_178,uVar32 & 0xffffffff);
          }
          *(int *)(local_178 + lVar29 * 4) = local_4a4;
          FUN_140c0fff8();
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_318.QuadPart = 0;
        LStack_310 = (LARGE_INTEGER)0x0;
        local_2ec = 0x80;
        uStack_2e8 = 0xffffffff;
        local_2e4 = 0;
        local_2d8 = (undefined1 *)0x0;
        local_2d0 = 0;
        local_4d0.QuadPart = (LONGLONG)&DAT_00000001;
        if (1 < (int)local_490) {
          local_4d0.QuadPart = local_490 & 0xffffffff;
        }
        uVar32 = 0;
        do {
          pvVar5 = local_3c0;
          if (LStack_310._0_4_ != local_2e4) {
            puVar24 = local_2d8;
            if (local_2d8 == (undefined1 *)0x0) {
              puVar24 = local_2e0;
            }
            for (iVar31 = *(int *)(puVar24 + (ulonglong)((uint)uVar32 & local_2d0 + 0x7fffffffU) * 4
                                  ); iVar31 != -1;
                iVar31 = *(int *)(local_318.QuadPart + (longlong)iVar31 * 0xc + 4)) {
              if (uVar32 == *(uint *)(local_318.QuadPart + (longlong)iVar31 * 0xc))
              goto LAB_140c0a438;
            }
          }
          fVar51 = *(float *)((longlong)local_3c0 + uVar32 * 0xc + 8);
          local_458 = (double)fVar51;
          fVar44 = *(float *)((longlong)local_3c0 + uVar32 * 0xc);
          fVar47 = *(float *)((longlong)local_3c0 + uVar32 * 0xc + 4);
          local_460 = (double)fVar47;
          local_468 = (longlong *)(double)fVar44;
          local_440 = (double)(fVar51 + 0.0);
          local_448 = (double)(fVar47 + 0.0);
          local_450 = (double)(fVar44 + 0.0);
          local_438 = 0;
          uStack_430 = 0;
          local_3b0 = &local_438;
          local_4f8.QuadPart = (LONGLONG)local_330;
          local_4f0 = &LStack_360;
          local_350.QuadPart = 0;
          LStack_360.QuadPart = 0;
          local_358.LowPart = 0;
          local_358.HighPart = 0;
          local_4e8 = &local_338;
          local_336 = 0;
          local_338 = 0;
          local_378 = 0;
          local_388 = (longlong *)0x0;
          uStack_380 = 0;
          local_398 = 0;
          local_3a8 = 0;
          uStack_3a0 = 0;
          local_500 = &local_3b0;
          local_508 = &local_468;
          local_368.QuadPart = local_4f8.QuadPart;
          FUN_140990a36(&local_2c8,&local_3a8,&local_368,&local_388);
          uVar39 = uStack_3e0;
          lVar29 = (longlong)(int)(uint)uStack_3e0;
          uVar21 = (uint)uStack_3e0 + 1;
          uStack_3e0 = CONCAT44(uStack_3e0._4_4_,uVar21);
          if (uStack_3e0._4_4_ < uVar21) {
            FUN_140c0b6f2(&local_3e8,uVar39 & 0xffffffff);
          }
          uVar39 = uStack_400;
          puVar27 = (undefined8 *)((longlong)pvVar5 + uVar32 * 0xc);
          *(undefined4 *)((longlong)local_3e8 + lVar29 * 0xc + 8) = *(undefined4 *)(puVar27 + 1);
          *(undefined8 *)((longlong)local_3e8 + lVar29 * 0xc) = *puVar27;
          lVar29 = (longlong)(int)uStack_400;
          uVar21 = (int)uStack_400 + 1;
          uStack_400 = CONCAT44(uStack_400._4_4_,uVar21);
          if (uStack_400._4_4_ < uVar21) {
            FUN_1446f48e2(&local_408,uVar39 & 0xffffffff);
          }
          lVar42 = local_438;
          *(uint *)(local_408 + lVar29 * 4) = (uint)uVar32;
          *(uint *)((longlong)local_418 + uVar32 * 4) = (uint)uStack_3e0 + -1;
          lVar29 = (longlong)(int)uStack_430;
          if (lVar29 != 0) {
            lVar30 = 0;
            do {
              local_368.s.LowPart = *(uint *)(lVar42 + lVar30);
              if (uVar32 != *(uint *)(lVar42 + lVar30)) {
                FUN_1447cbafe(&local_318,&local_468,&local_368,0);
                *(undefined4 *)((longlong)local_418 + (longlong)(int)local_368.s.LowPart * 4) =
                     *(undefined4 *)((longlong)local_418 + uVar32 * 4);
              }
              lVar30 = lVar30 + 4;
            } while (lVar29 * 4 != lVar30);
          }
          if (local_438 != 0) {
            FUN_1400020a8(local_438);
          }
LAB_140c0a438:
          uVar39 = local_498;
          uVar32 = uVar32 + 1;
        } while (uVar32 != local_4d0.QuadPart);
        local_368.QuadPart = 0;
        LStack_360.QuadPart = 0;
        if (local_49c < -2) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(local_498 & 0xffffffff);
        }
        if (2 < local_49c) {
          FUN_14481578e(&local_368,local_498 & 0xffffffff);
          lVar29 = 8;
          uVar32 = 0;
          do {
            iVar31 = *(int *)((longlong)local_418 +
                             (longlong)*(int *)((longlong)local_3d0 + lVar29 + -4) * 4);
            lVar42 = (longlong)iVar31;
            iVar23 = *(int *)((longlong)local_418 +
                             (longlong)*(int *)((longlong)local_3d0 + lVar29) * 4);
            lVar30 = (longlong)iVar23;
            if (iVar31 != iVar23) {
              iVar22 = *(int *)((longlong)local_418 +
                               (longlong)*(int *)((longlong)local_3d0 + lVar29 + -8) * 4);
              lVar33 = (longlong)iVar22;
              if (((iVar22 != iVar31) && (iVar22 != iVar23)) &&
                 (fVar51 = *(float *)((longlong)local_3e8 + lVar33 * 0xc + 8),
                 fVar54 = fVar51 - *(float *)((longlong)local_3e8 + lVar30 * 0xc + 8),
                 fVar44 = *(float *)((longlong)local_3e8 + lVar33 * 0xc + 4),
                 fVar57 = fVar44 - *(float *)((longlong)local_3e8 + lVar30 * 0xc + 4),
                 fVar47 = *(float *)((longlong)local_3e8 + lVar33 * 0xc),
                 fVar58 = fVar47 - *(float *)((longlong)local_3e8 + lVar30 * 0xc),
                 fVar51 = fVar51 - *(float *)((longlong)local_3e8 + lVar42 * 0xc + 8),
                 fVar44 = fVar44 - *(float *)((longlong)local_3e8 + lVar42 * 0xc + 4),
                 fVar47 = fVar47 - *(float *)((longlong)local_3e8 + lVar42 * 0xc),
                 fVar48 = fVar47 * fVar57 - fVar58 * fVar44,
                 fVar47 = fVar51 * fVar58 - fVar54 * fVar47,
                 fVar51 = fVar44 * fVar54 - fVar51 * fVar57,
                 1e-08 < fVar48 * fVar48 + fVar51 * fVar51 + fVar47 * fVar47)) {
                lVar42 = (longlong)(int)(uint)uStack_3f0;
                uVar21 = (uint)uStack_3f0 + 1;
                if (uStack_3f0._4_4_ < uVar21) {
                  uVar28 = uStack_3f0 & 0xffffffff;
                  uStack_3f0._0_4_ = uVar21;
                  FUN_1446f48e2(&local_3f8,uVar28);
                  uVar21 = (uint)uStack_3f0;
                }
                uStack_3f0._0_4_ = uVar21;
                uVar21 = (uint)uStack_3f0;
                *(int *)((longlong)local_3f8 + lVar42 * 4) = iVar22;
                lVar42 = (longlong)(int)(uint)uStack_3f0;
                uStack_3f0._0_4_ = (uint)uStack_3f0 + 1;
                if (uStack_3f0._4_4_ < (uint)uStack_3f0) {
                  FUN_1446f48e2(&local_3f8,uVar21);
                }
                uVar21 = (uint)uStack_3f0;
                *(int *)((longlong)local_3f8 + lVar42 * 4) = iVar31;
                lVar42 = (longlong)(int)(uint)uStack_3f0;
                uStack_3f0._0_4_ = (uint)uStack_3f0 + 1;
                if (uStack_3f0._4_4_ < (uint)uStack_3f0) {
                  FUN_1446f48e2(&local_3f8,uVar21);
                }
                LVar37 = LStack_360;
                *(int *)((longlong)local_3f8 + lVar42 * 4) = iVar23;
                lVar42 = (longlong)(int)LStack_360.s.LowPart;
                uVar21 = LStack_360.s.LowPart + 1;
                LStack_360.s.LowPart = uVar21;
                if ((uint)LStack_360.s.HighPart < uVar21) {
                  FUN_1446f48e2(&local_368,LVar37.QuadPart & 0xffffffff);
                }
                *(int *)(local_368.QuadPart + lVar42 * 4) = (int)uVar32;
              }
            }
            uVar32 = uVar32 + 1;
            lVar29 = lVar29 + 0xc;
          } while ((uVar39 & 0xffffffff) != uVar32);
        }
        pvVar5 = local_3e8;
        uVar21 = (uint)uStack_3e0;
        lVar29 = (longlong)(int)(uint)uStack_3e0;
        local_470 = (uint)uStack_3e0;
        if ((uint)uStack_3e0 == 0 && local_46c == 0) {
          local_46c = 0;
          ppvVar34 = local_4b8;
        }
        else {
          FUN_140c0b9de(&local_478,uStack_3e0 & 0xffffffff);
          ppvVar34 = local_4b8;
          if (uVar21 != 0) {
            memcpy(local_478,pvVar5,lVar29 * 0xc);
          }
        }
        pvVar5 = local_3f8;
        iVar31 = (uint)uStack_3f0;
        lVar29 = (longlong)(int)(uint)uStack_3f0;
        uStack_480 = CONCAT44(uStack_480._4_4_,(uint)uStack_3f0);
        if ((uint)uStack_3f0 == 0 && uStack_480._4_4_ == 0) {
          uStack_480 = uStack_3f0 & 0xffffffff;
        }
        else {
          FUN_144a06ca8(&local_488,uStack_3f0 & 0xffffffff);
          if (iVar31 != 0) {
            memcpy(local_488,pvVar5,lVar29 << 2);
          }
        }
        LVar37 = local_368;
        if (&local_368 != local_4d8 && local_4d8 != (LARGE_INTEGER *)0x0) {
          iVar31 = *(int *)((longlong)local_4d8 + 0xc);
          uVar36 = LStack_360.s.LowPart;
          lVar29 = (longlong)(int)LStack_360.s.LowPart;
          local_4d8[1].s.LowPart = LStack_360.s.LowPart;
          if (LStack_360.s.LowPart == 0 && iVar31 == 0) {
            *(undefined4 *)((longlong)local_4d8 + 0xc) = 0;
          }
          else {
            FUN_144a06ca8(local_4d8,LStack_360.QuadPart & 0xffffffff);
            if (uVar36 != 0) {
              memcpy((void *)*(_struct_19 *)local_4d8,(void *)LVar37,lVar29 << 2);
            }
          }
        }
        pvVar5 = local_418;
        if (&local_418 != ppvVar34 && ppvVar34 != (void **)0x0) {
          iVar31 = (int)uStack_410;
          lVar29 = (longlong)(int)uStack_410;
          *(int *)(ppvVar34 + 1) = (int)uStack_410;
          if ((int)uStack_410 == 0 && *(int *)((longlong)ppvVar34 + 0xc) == 0) {
            *(undefined4 *)((longlong)ppvVar34 + 0xc) = 0;
          }
          else {
            FUN_144a06ca8(ppvVar34,uStack_410 & 0xffffffff);
            if (iVar31 != 0) {
              memcpy(*ppvVar34,pvVar5,lVar29 << 2);
            }
          }
        }
        if ((void *)local_368.QuadPart != (void *)0x0) {
          FUN_1400020a8();
        }
        local_2d0 = 0;
        if (local_2d8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        iVar31 = LStack_310._4_4_;
        LStack_310.s = LStack_310.s & 0xffffffff00000000;
        if (iVar31 != 0) {
          FUN_1447a08a2(&local_318,0);
        }
        uStack_2e8 = 0xffffffff;
        local_2e4 = 0;
        local_2f0 = 0;
        if (0x80 < local_2ec) {
          local_2ec = 0x80;
          FUN_1446efbd8(local_308,0);
        }
        if (local_2f8 != 0) {
          FUN_1400020a8();
        }
        if (local_318.QuadPart != 0) {
          FUN_1400020a8();
        }
        FUN_140c0bb2c(&local_2c8);
        if (local_428 != (LARGE_INTEGER *)0x0) {
          FUN_1400020a8();
        }
        if (local_418 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_408 != 0) {
          FUN_1400020a8();
        }
        if (local_3f8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_3e8 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_3d0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_3c0 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    local_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = uStack_2b0 & 0xffffffff00000000;
    local_2c8 = &PTR_FUN_149f4c0d8;
    uStack_2a0 = 0;
    local_298 = 0;
    local_2a8 = &PTR_LAB_149f4c0e0;
    uStack_290 = uStack_290 & 0xffffffffffffff00;
    FUN_14062dc0c();
    lVar29 = local_2c0;
    if (local_470 == 0) {
      uVar21 = 0;
    }
    else {
      iVar31 = (int)uStack_2b0 + local_470;
      uStack_2b0 = CONCAT44(uStack_2b0._4_4_,iVar31);
      lVar42 = (longlong)(int)uStack_2b8;
      if (lVar42 != 0) {
        lVar30 = 0;
        do {
          plVar25 = *(longlong **)(lVar29 + lVar30);
          if (plVar25 != (longlong *)0x0) {
            (**(code **)(*plVar25 + 8))(plVar25,iVar31);
          }
          lVar30 = lVar30 + 8;
        } while (lVar42 * 8 != lVar30);
      }
      uVar21 = local_470;
      if (0 < (int)local_470) {
        lVar29 = 0;
        do {
          uVar6 = *(undefined8 *)((longlong)local_478 + lVar29);
          *(undefined4 *)(uStack_2a0 + 8 + lVar29) =
               *(undefined4 *)((longlong)local_478 + lVar29 + 8);
          *(undefined8 *)(uStack_2a0 + lVar29) = uVar6;
          lVar29 = lVar29 + 0xc;
        } while ((ulonglong)local_470 * 0xc != lVar29);
      }
    }
    iVar23 = (uint)uStack_480;
    uVar15 = (int)(uint)uStack_480 / 3;
    iVar31 = *(int *)(local_4c8 + 5);
    bVar43 = 0 < iVar31;
    local_368.QuadPart = 0;
    LStack_360.QuadPart = 0;
    if ((int)uVar21 < 0xffff) {
      local_318.QuadPart = 0;
      LStack_310 = (LARGE_INTEGER)0x0;
      if (0 < iVar31) {
        if ((int)(uint)uStack_480 < -2) goto LAB_140c0b469;
        if (2 < (int)(uint)uStack_480) {
          FUN_1448759c8(&local_368,uVar15);
        }
      }
      LVar37.s = *(_struct_19 *)local_4d8;
      uVar21 = local_4d8[1].s.LowPart;
      uVar32 = (ulonglong)uVar21;
      local_4d8->QuadPart = 0;
      local_4d8[1].QuadPart = 0;
      if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar32);
      }
      local_4d0.s = LVar37.s;
      if (uVar32 != 0) {
        FUN_14481578e(local_4d8,uVar32);
      }
      if (iVar23 < -2) {
LAB_140c0b469:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar15);
      }
      if ((int)LStack_310._4_4_ < (int)uVar15) {
        FUN_140c0fda2(&local_318,uVar15);
      }
      pLVar35 = local_4d8;
      if (2 < iVar23) {
        LVar38.s.HighPart = 0;
        LVar38.QuadPart._0_4_ = uVar15;
        lVar29 = 2;
        uVar39 = 0;
        puVar27 = local_4c8;
        LVar37 = local_4d0;
        do {
          LVar16 = LStack_310;
          iVar31 = *(int *)((longlong)local_488 + lVar29 * 4);
          lVar42 = (longlong)iVar31;
          iVar23 = *(int *)((longlong)local_488 + lVar29 * 4 + -4);
          lVar30 = (longlong)iVar23;
          iVar22 = *(int *)((longlong)local_488 + lVar29 * 4 + -8);
          lVar33 = (longlong)iVar22;
          fVar51 = *(float *)((longlong)local_478 + lVar33 * 0xc);
          fVar44 = *(float *)((longlong)local_478 + lVar33 * 0xc + 4);
          fVar47 = *(float *)((longlong)local_478 + lVar33 * 0xc + 8);
          fVar58 = *(float *)((longlong)local_478 + lVar30 * 0xc + 8) - fVar47;
          fVar57 = *(float *)((longlong)local_478 + lVar30 * 0xc + 4) - fVar44;
          fVar48 = *(float *)((longlong)local_478 + lVar30 * 0xc) - fVar51;
          fVar47 = *(float *)((longlong)local_478 + lVar42 * 0xc + 8) - fVar47;
          fVar44 = *(float *)((longlong)local_478 + lVar42 * 0xc + 4) - fVar44;
          fVar51 = *(float *)((longlong)local_478 + lVar42 * 0xc) - fVar51;
          fVar54 = fVar48 * fVar44 - fVar51 * fVar57;
          fVar48 = fVar58 * fVar51 - fVar47 * fVar48;
          fVar51 = fVar57 * fVar47 - fVar44 * fVar58;
          if (0.0001 < SQRT(fVar54 * fVar54 + fVar51 * fVar51 + fVar48 * fVar48)) {
            lVar42 = (longlong)(int)LStack_310._0_4_;
            uVar21 = LStack_310._0_4_ + 1;
            LStack_310.s.LowPart = uVar21;
            if ((uint)LStack_310._4_4_ < uVar21) {
              local_4c0 = LVar38;
              FUN_14172d3d6(&local_318,(ulonglong)LVar16 & 0xffffffff);
              pLVar35 = local_4d8;
              puVar27 = local_4c8;
              LVar37 = local_4d0;
              LVar38 = local_4c0;
            }
            *(short *)(local_318.QuadPart + lVar42 * 6) = (short)iVar22;
            *(short *)(local_318.QuadPart + 2 + lVar42 * 6) = (short)iVar23;
            *(short *)(local_318.QuadPart + 4 + lVar42 * 6) = (short)iVar31;
            if (uVar32 != 0) {
              DVar46 = pLVar35[1].s.LowPart;
              pLVar35[1].s.LowPart = DVar46 + 1;
              if (*(uint *)((longlong)pLVar35 + 0xc) < DVar46 + 1) {
                FUN_1446f48e2(pLVar35,DVar46);
                pLVar35 = local_4d8;
                puVar27 = local_4c8;
                LVar37 = local_4d0;
              }
              *(undefined4 *)(pLVar35->QuadPart + (longlong)(int)DVar46 * 4) =
                   *(undefined4 *)(LVar37.QuadPart + uVar39 * 4);
            }
            LVar16 = LStack_360;
            if (bVar43) {
              uVar36 = LStack_360.s.HighPart;
              if (DAT_14c761728 == 0) {
                if ((longlong)uVar39 < (longlong)*(int *)(puVar27 + 5)) {
                  lVar42 = local_4c8[4];
                  lVar30 = (longlong)(int)LStack_360.s.LowPart;
                  LStack_360.s.LowPart = LStack_360.s.LowPart + 1;
                  if ((uint)LStack_360.s.HighPart < LStack_360.s.LowPart) {
                    FUN_14488eebe(&local_368,LVar16.QuadPart & 0xffffffff);
                  }
                  *(undefined2 *)(local_368.QuadPart + lVar30 * 2) =
                       *(undefined2 *)(lVar42 + uVar39 * 2);
                  bVar43 = true;
                  pLVar35 = local_4d8;
                  puVar27 = local_4c8;
                  LVar37 = local_4d0;
                }
                else {
                  LStack_360.QuadPart = (ulonglong)(uint)LStack_360.s.HighPart << 0x20;
                  if (uVar36 == 0) {
                    bVar43 = false;
                    pLVar35 = local_4d8;
                    puVar27 = local_4c8;
                    LVar37 = local_4d0;
                  }
                  else {
                    bVar43 = false;
                    FUN_1448759c8(&local_368,0);
                    pLVar35 = local_4d8;
                    puVar27 = local_4c8;
                    LVar37 = local_4d0;
                  }
                }
              }
              else {
                if (uVar39 < uVar32) {
                  iVar31 = *(int *)(LVar37.QuadPart + uVar39 * 4);
                  if ((-1 < (longlong)iVar31) && (iVar31 < *(int *)(puVar27 + 5))) {
                    lVar42 = puVar27[4];
                    lVar30 = (longlong)(int)LStack_360.s.LowPart;
                    LStack_360.s.LowPart = LStack_360.s.LowPart + 1;
                    if ((uint)LStack_360.s.HighPart < LStack_360.s.LowPart) {
                      FUN_14488eebe(&local_368,LVar16.QuadPart & 0xffffffff);
                      pLVar35 = local_4d8;
                      puVar27 = local_4c8;
                      LVar37 = local_4d0;
                    }
                    *(undefined2 *)(local_368.QuadPart + lVar30 * 2) =
                         *(undefined2 *)(lVar42 + (longlong)iVar31 * 2);
                    bVar43 = true;
                    goto LAB_140c0ac28;
                  }
                }
                LStack_360.QuadPart = (ulonglong)(uint)LStack_360.s.HighPart << 0x20;
                if (uVar36 != 0) {
                  FUN_1448759c8(&local_368,0);
                }
                bVar43 = false;
                pLVar35 = local_4d8;
                puVar27 = local_4c8;
                LVar37 = local_4d0;
              }
            }
            else {
              bVar43 = false;
            }
          }
LAB_140c0ac28:
          uVar39 = uVar39 + 1;
          lVar29 = lVar29 + 3;
        } while (LVar38.QuadPart != uVar39);
      }
      plVar25 = (longlong *)FUN_14001cc68(0x10,0x10);
      *plVar25 = 0;
      DVar46 = pLVar35[1].s.LowPart;
      LVar37.s = *(_struct_19 *)pLVar35;
      *(DWORD *)(plVar25 + 1) = DVar46;
      if ((longlong)(int)DVar46 == 0) {
        *(undefined4 *)((longlong)plVar25 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(plVar25,DVar46,0);
        memcpy((void *)*plVar25,(void *)LVar37,(longlong)(int)DVar46 << 2);
      }
      ppvVar34 = local_4b8;
      local_468 = plVar25;
      if (DAT_14c75f2f8 == '\0') {
        plVar25 = (longlong *)0x0;
      }
      else {
        plVar25 = (longlong *)FUN_14001cc68(0x10,0x10);
        *plVar25 = 0;
        iVar31 = *(int *)(ppvVar34 + 1);
        pvVar5 = *ppvVar34;
        *(int *)(plVar25 + 1) = iVar31;
        if ((longlong)iVar31 == 0) {
          *(undefined4 *)((longlong)plVar25 + 0xc) = 0;
        }
        else {
          FUN_144a06ca8(plVar25,iVar31,0);
          memcpy((void *)*plVar25,pvVar5,(longlong)iVar31 << 2);
        }
      }
      local_388 = plVar25;
      lVar29 = FUN_14001cc68(0x100,0x10);
      local_508 = &local_468;
      local_4f8.QuadPart = local_4f8.QuadPart & 0xffffffffffffff00;
      local_500 = &local_388;
      FUN_140c0bd64(lVar29,&local_2c8,&local_318,&local_368);
      plVar25 = local_4b0;
      iVar31 = (int)local_4b0[1];
      *(uint *)(local_4b0 + 1) = iVar31 + 1U;
      if (*(uint *)((longlong)local_4b0 + 0xc) < iVar31 + 1U) {
        FUN_140bc4538(local_4b0,iVar31);
      }
      plVar7 = local_388;
      *(longlong *)(*plVar25 + (longlong)iVar31 * 8) = lVar29;
      if (lVar29 != 0) {
        LOCK();
        *(int *)(lVar29 + 8) = *(int *)(lVar29 + 8) + 1;
        UNLOCK();
      }
      if (0 < (int)local_4d8[1].s.LowPart) {
        lVar42 = 0;
        do {
          plVar25 = *(longlong **)(lVar29 + 200);
          uVar36 = 0xffffffff;
          if ((plVar25 != (longlong *)0x0) && ((int)lVar42 < (int)plVar25[1])) {
            uVar36 = *(undefined4 *)(*plVar25 + lVar42 * 4);
          }
          *(undefined4 *)(local_4d8->QuadPart + lVar42 * 4) = uVar36;
          lVar42 = lVar42 + 1;
        } while (lVar42 < (int)local_4d8[1].s.LowPart);
      }
      if (local_388 != (longlong *)0x0) {
        if (*local_388 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar7);
      }
      plVar25 = local_468;
      LVar37 = local_4d0;
      if (local_468 != (longlong *)0x0) {
        if (*local_468 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar25);
        LVar37 = local_4d0;
      }
    }
    else {
      local_318.QuadPart = 0;
      LStack_310 = (LARGE_INTEGER)0x0;
      if (0 < iVar31) {
        if ((int)(uint)uStack_480 < -2) goto LAB_140c0b469;
        if (2 < (int)(uint)uStack_480) {
          FUN_1448759c8(&local_368,uVar15);
        }
      }
      local_4c0.s = *(_struct_19 *)local_4d8;
      uVar21 = local_4d8[1].s.LowPart;
      local_4d0.s.HighPart = 0;
      local_4d0.s.LowPart = uVar21;
      local_4d8->QuadPart = 0;
      local_4d8[1].QuadPart = 0;
      if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(local_4d0.QuadPart);
      }
      if ((undefined8 *)local_4d0.QuadPart != (undefined8 *)0x0) {
        FUN_14481578e(local_4d8,local_4d0.QuadPart);
      }
      if (iVar23 < -2) goto LAB_140c0b469;
      if ((int)LStack_310._4_4_ < (int)uVar15) {
        FUN_1405c2e9e(&local_318,uVar15);
      }
      if (2 < iVar23) {
        lVar29 = 2;
        LVar37.QuadPart = 0;
        do {
          LVar38 = LStack_310;
          iVar31 = *(int *)((longlong)local_488 + lVar29 * 4);
          lVar42 = (longlong)iVar31;
          iVar23 = *(int *)((longlong)local_488 + lVar29 * 4 + -4);
          lVar33 = (longlong)iVar23;
          iVar22 = *(int *)((longlong)local_488 + lVar29 * 4 + -8);
          lVar30 = (longlong)iVar22;
          fVar51 = *(float *)((longlong)local_478 + lVar30 * 0xc);
          fVar44 = *(float *)((longlong)local_478 + lVar30 * 0xc + 4);
          fVar47 = *(float *)((longlong)local_478 + lVar30 * 0xc + 8);
          fVar58 = *(float *)((longlong)local_478 + lVar33 * 0xc + 8) - fVar47;
          fVar57 = *(float *)((longlong)local_478 + lVar33 * 0xc + 4) - fVar44;
          fVar48 = *(float *)((longlong)local_478 + lVar33 * 0xc) - fVar51;
          fVar47 = *(float *)((longlong)local_478 + lVar42 * 0xc + 8) - fVar47;
          fVar44 = *(float *)((longlong)local_478 + lVar42 * 0xc + 4) - fVar44;
          fVar51 = *(float *)((longlong)local_478 + lVar42 * 0xc) - fVar51;
          fVar54 = fVar48 * fVar44 - fVar51 * fVar57;
          fVar48 = fVar58 * fVar51 - fVar47 * fVar48;
          fVar51 = fVar57 * fVar47 - fVar44 * fVar58;
          if (0.0001 < SQRT(fVar54 * fVar54 + fVar51 * fVar51 + fVar48 * fVar48)) {
            lVar42 = (longlong)(int)LStack_310._0_4_;
            uVar21 = LStack_310._0_4_ + 1;
            LStack_310.s.LowPart = uVar21;
            if ((uint)LStack_310._4_4_ < uVar21) {
              FUN_141087970(&local_318,(ulonglong)LVar38 & 0xffffffff);
            }
            *(int *)(local_318.QuadPart + lVar42 * 0xc) = iVar22;
            *(int *)(local_318.QuadPart + 4 + lVar42 * 0xc) = iVar23;
            *(int *)(local_318.QuadPart + 8 + lVar42 * 0xc) = iVar31;
            if ((undefined8 *)local_4d0.QuadPart != (undefined8 *)0x0) {
              DVar46 = local_4d8[1].s.LowPart;
              local_4d8[1].s.LowPart = DVar46 + 1;
              if (*(uint *)((longlong)local_4d8 + 0xc) < DVar46 + 1) {
                FUN_1446f48e2(local_4d8,DVar46);
              }
              *(undefined4 *)(local_4d8->QuadPart + (longlong)(int)DVar46 * 4) =
                   *(undefined4 *)(local_4c0.QuadPart + LVar37.QuadPart * 4);
            }
            LVar38 = LStack_360;
            if (bVar43) {
              uVar36 = LStack_360.s.LowPart;
              uVar17 = LStack_360.s.HighPart;
              if (DAT_14c761728 == 0) {
                if (LVar37.QuadPart < *(int *)(local_4c8 + 5)) {
                  lVar42 = local_4c8[4];
                  LStack_360.s.LowPart = LStack_360.s.LowPart + 1;
                  if ((uint)LStack_360.s.HighPart < LStack_360.s.LowPart) {
                    FUN_14488eebe(&local_368,LVar38.QuadPart & 0xffffffff);
                  }
                  uVar26 = *(undefined2 *)(lVar42 + LVar37.QuadPart * 2);
LAB_140c0b3fd:
                  *(undefined2 *)(local_368.QuadPart + (longlong)(int)uVar36 * 2) = uVar26;
                  bVar43 = true;
                  goto LAB_140c0b42f;
                }
              }
              else if ((ulonglong)LVar37 < (ulonglong)local_4d0) {
                iVar31 = *(int *)(local_4c0.QuadPart + LVar37.QuadPart * 4);
                if ((-1 < (longlong)iVar31) && (iVar31 < *(int *)(local_4c8 + 5))) {
                  lVar42 = local_4c8[4];
                  LStack_360.s.LowPart = LStack_360.s.LowPart + 1;
                  if ((uint)LStack_360.s.HighPart < LStack_360.s.LowPart) {
                    FUN_14488eebe(&local_368,LVar38.QuadPart & 0xffffffff);
                  }
                  uVar26 = *(undefined2 *)(lVar42 + (longlong)iVar31 * 2);
                  goto LAB_140c0b3fd;
                }
              }
              LStack_360.QuadPart = (ulonglong)(uint)LStack_360.s.HighPart << 0x20;
              if (uVar17 != 0) {
                bVar43 = false;
                FUN_1448759c8(&local_368,0);
                goto LAB_140c0b42f;
              }
            }
            bVar43 = false;
          }
LAB_140c0b42f:
          LVar37.QuadPart = LVar37.QuadPart + 1;
          lVar29 = lVar29 + 3;
        } while ((undefined1 *)(ulonglong)uVar15 != (undefined1 *)LVar37.QuadPart);
      }
      plVar25 = (longlong *)FUN_14001cc68(0x10,0x10);
      *plVar25 = 0;
      DVar46 = local_4d8[1].s.LowPart;
      LVar37.s = *(_struct_19 *)local_4d8;
      *(DWORD *)(plVar25 + 1) = DVar46;
      if ((longlong)(int)DVar46 == 0) {
        *(undefined4 *)((longlong)plVar25 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(plVar25,DVar46,0);
        memcpy((void *)*plVar25,(void *)LVar37,(longlong)(int)DVar46 << 2);
      }
      local_468 = plVar25;
      if (DAT_14c75f2f8 == '\0') {
        plVar25 = (longlong *)0x0;
      }
      else {
        plVar25 = (longlong *)FUN_14001cc68(0x10,0x10);
        *plVar25 = 0;
        iVar31 = *(int *)(local_4b8 + 1);
        pvVar5 = *local_4b8;
        *(int *)(plVar25 + 1) = iVar31;
        if ((longlong)iVar31 == 0) {
          *(undefined4 *)((longlong)plVar25 + 0xc) = 0;
        }
        else {
          FUN_144a06ca8(plVar25,iVar31,0);
          memcpy((void *)*plVar25,pvVar5,(longlong)iVar31 << 2);
        }
      }
      local_388 = plVar25;
      lVar29 = FUN_14001cc68(0x100,0x10);
      local_508 = &local_468;
      local_4f8.QuadPart = local_4f8.QuadPart & 0xffffffffffffff00;
      local_500 = &local_388;
      FUN_146e79a44(lVar29,&local_2c8,&local_318,&local_368);
      iVar31 = (int)local_4b0[1];
      *(uint *)(local_4b0 + 1) = iVar31 + 1U;
      if (*(uint *)((longlong)local_4b0 + 0xc) < iVar31 + 1U) {
        FUN_140bc4538(local_4b0,iVar31);
      }
      plVar25 = local_388;
      *(longlong *)(*local_4b0 + (longlong)iVar31 * 8) = lVar29;
      if (lVar29 != 0) {
        LOCK();
        *(int *)(lVar29 + 8) = *(int *)(lVar29 + 8) + 1;
        UNLOCK();
      }
      if (0 < (int)local_4d8[1].s.LowPart) {
        lVar42 = 0;
        do {
          plVar7 = *(longlong **)(lVar29 + 200);
          uVar36 = 0xffffffff;
          if ((plVar7 != (longlong *)0x0) && ((int)lVar42 < (int)plVar7[1])) {
            uVar36 = *(undefined4 *)(*plVar7 + lVar42 * 4);
          }
          *(undefined4 *)(local_4d8->QuadPart + lVar42 * 4) = uVar36;
          lVar42 = lVar42 + 1;
        } while (lVar42 < (int)local_4d8[1].s.LowPart);
      }
      if (local_388 != (longlong *)0x0) {
        if (*local_388 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar25);
      }
      plVar25 = local_468;
      LVar37 = local_4c0;
      if (local_468 != (longlong *)0x0) {
        if (*local_468 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar25);
        LVar37 = local_4c0;
      }
    }
    if ((undefined8 *)LVar37.QuadPart != (undefined8 *)0x0) {
      FUN_1400020a8(LVar37.QuadPart);
    }
    if (local_318.QuadPart != 0) {
      FUN_1400020a8();
    }
    if ((void *)local_368.QuadPart != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1407fbce0(&local_2c8);
    if (local_488 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_478 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_528) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c0b6f2 FUN_140c0b6f2 body=373 status=ok
// SIG undefined FUN_140c0b6f2(void)

void FUN_140c0b6f2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c0b77d;
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
LAB_140c0b77d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 140c0b868 FUN_140c0b868 body=373 status=ok
// SIG undefined FUN_140c0b868(void)

void FUN_140c0b868(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c0b8f3;
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
LAB_140c0b8f3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140c0b9de FUN_140c0b9de body=334 status=ok
// SIG undefined FUN_140c0b9de(void)

void FUN_140c0b9de(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c0ba50;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_140c0ba50:
    iVar5 = (int)(uVar4 / 0xc);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xc,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140c0bb2c FUN_140c0bb2c body=468 status=ok
// SIG undefined FUN_140c0bb2c(void)

void FUN_140c0bb2c(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_1400020a8();
  }
  FUN_140c0bd2f(*(undefined8 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x178));
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    FUN_140c0bb2c(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9e122(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_140c0bd00(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140c0bd00 FUN_140c0bd00 body=47 status=ok
// SIG undefined FUN_140c0bd00(void)

void FUN_140c0bd00(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
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



// FUNCTION 140c0bd2f FUN_140c0bd2f body=52 status=ok
// SIG undefined FUN_140c0bd2f(void)

void FUN_140c0bd2f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1f;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c0bd64 FUN_140c0bd64 body=1171 status=ok
// SIG undefined FUN_140c0bd64(void)

undefined8 *
FUN_140c0bd64(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,undefined1 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  longlong lVar8;
  ushort *puVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0xb0b;
  *param_1 = &PTR_FUN_149f56110;
  FUN_1406306b2();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xe] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x17] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  param_1[0x19] = *param_5;
  *param_5 = 0;
  param_1[0x1a] = *param_6;
  *param_6 = 0;
  *(undefined1 *)(param_1 + 0x1b) = param_7;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  puVar13 = (uint *)(param_1 + 0xf);
  if (*(char *)(param_1 + 0x10) != '\0') {
    puVar13 = (uint *)(param_1 + 0xd);
  }
  uVar7 = *puVar13;
  if (0 < (int)uVar7) {
    lVar8 = param_1[9];
    puVar9 = (ushort *)param_1[0xe];
    uVar14 = (ulonglong)*puVar9;
    fVar1 = *(float *)(lVar8 + 8 + uVar14 * 0xc);
    dVar16 = (double)fVar1;
    fVar2 = *(float *)(lVar8 + uVar14 * 0xc);
    fVar3 = *(float *)(lVar8 + 4 + uVar14 * 0xc);
    dVar17 = (double)fVar3;
    dVar18 = (double)fVar2;
    param_1[0x11] = dVar18;
    param_1[0x12] = dVar17;
    param_1[0x13] = dVar16;
    param_1[0x14] = dVar18;
    param_1[0x15] = dVar17;
    param_1[0x16] = dVar16;
    uVar14 = (ulonglong)puVar9[1];
    fVar4 = *(float *)(lVar8 + 8 + uVar14 * 0xc);
    fVar5 = *(float *)(lVar8 + 4 + uVar14 * 0xc);
    dVar19 = dVar16;
    if (fVar4 <= fVar1) {
      dVar19 = (double)fVar4;
    }
    fVar6 = *(float *)(lVar8 + uVar14 * 0xc);
    dVar20 = dVar17;
    if (fVar5 <= fVar3) {
      dVar20 = (double)fVar5;
    }
    dVar21 = dVar18;
    if (fVar6 <= fVar2) {
      dVar21 = (double)fVar6;
    }
    param_1[0x11] = dVar21;
    param_1[0x12] = dVar20;
    param_1[0x13] = dVar19;
    if (fVar1 <= fVar4) {
      dVar16 = (double)fVar4;
    }
    if (fVar3 <= fVar5) {
      dVar17 = (double)fVar5;
    }
    if (fVar2 <= fVar6) {
      dVar18 = (double)fVar6;
    }
    param_1[0x14] = dVar18;
    param_1[0x15] = dVar17;
    param_1[0x16] = dVar16;
    uVar14 = (ulonglong)puVar9[2];
    dVar10 = (double)*(float *)(lVar8 + 8 + uVar14 * 0xc);
    dVar11 = (double)*(float *)(lVar8 + 4 + uVar14 * 0xc);
    dVar12 = (double)*(float *)(lVar8 + uVar14 * 0xc);
    if (dVar10 <= dVar19) {
      dVar19 = dVar10;
    }
    if (dVar11 <= dVar20) {
      dVar20 = dVar11;
    }
    if (dVar12 <= dVar21) {
      dVar21 = dVar12;
    }
    param_1[0x11] = dVar21;
    param_1[0x12] = dVar20;
    param_1[0x13] = dVar19;
    if (dVar16 <= dVar10) {
      dVar16 = dVar10;
    }
    if (dVar17 <= dVar11) {
      dVar17 = dVar11;
    }
    if (dVar18 <= dVar12) {
      dVar18 = dVar12;
    }
    param_1[0x14] = dVar18;
    param_1[0x15] = dVar17;
    param_1[0x16] = dVar16;
    if (uVar7 != 1) {
      lVar15 = 6;
      do {
        uVar14 = (ulonglong)*(ushort *)((longlong)puVar9 + lVar15);
        dVar10 = (double)*(float *)(lVar8 + 8 + uVar14 * 0xc);
        dVar11 = (double)*(float *)(lVar8 + 4 + uVar14 * 0xc);
        dVar12 = (double)*(float *)(lVar8 + uVar14 * 0xc);
        if (dVar10 <= dVar19) {
          dVar19 = dVar10;
        }
        if (dVar11 <= dVar20) {
          dVar20 = dVar11;
        }
        if (dVar12 <= dVar21) {
          dVar21 = dVar12;
        }
        param_1[0x11] = dVar21;
        param_1[0x12] = dVar20;
        param_1[0x13] = dVar19;
        if (dVar16 <= dVar10) {
          dVar16 = dVar10;
        }
        if (dVar17 <= dVar11) {
          dVar17 = dVar11;
        }
        if (dVar18 <= dVar12) {
          dVar18 = dVar12;
        }
        param_1[0x14] = dVar18;
        param_1[0x15] = dVar17;
        param_1[0x16] = dVar16;
        uVar14 = (ulonglong)*(ushort *)((longlong)puVar9 + lVar15 + 2);
        dVar10 = (double)*(float *)(lVar8 + 8 + uVar14 * 0xc);
        dVar11 = (double)*(float *)(lVar8 + 4 + uVar14 * 0xc);
        dVar12 = (double)*(float *)(lVar8 + uVar14 * 0xc);
        if (dVar10 <= dVar19) {
          dVar19 = dVar10;
        }
        if (dVar11 <= dVar20) {
          dVar20 = dVar11;
        }
        if (dVar12 <= dVar21) {
          dVar21 = dVar12;
        }
        param_1[0x11] = dVar21;
        param_1[0x12] = dVar20;
        param_1[0x13] = dVar19;
        if (dVar16 <= dVar10) {
          dVar16 = dVar10;
        }
        if (dVar17 <= dVar11) {
          dVar17 = dVar11;
        }
        if (dVar18 <= dVar12) {
          dVar18 = dVar12;
        }
        param_1[0x14] = dVar18;
        param_1[0x15] = dVar17;
        param_1[0x16] = dVar16;
        uVar14 = (ulonglong)*(ushort *)((longlong)puVar9 + lVar15 + 4);
        dVar10 = (double)*(float *)(lVar8 + 8 + uVar14 * 0xc);
        dVar11 = (double)*(float *)(lVar8 + 4 + uVar14 * 0xc);
        dVar12 = (double)*(float *)(lVar8 + uVar14 * 0xc);
        if (dVar10 <= dVar19) {
          dVar19 = dVar10;
        }
        if (dVar11 <= dVar20) {
          dVar20 = dVar11;
        }
        if (dVar12 <= dVar21) {
          dVar21 = dVar12;
        }
        param_1[0x11] = dVar21;
        param_1[0x12] = dVar20;
        param_1[0x13] = dVar19;
        if (dVar16 <= dVar10) {
          dVar16 = dVar10;
        }
        if (dVar17 <= dVar11) {
          dVar17 = dVar11;
        }
        if (dVar18 <= dVar12) {
          dVar18 = dVar12;
        }
        param_1[0x14] = dVar18;
        param_1[0x15] = dVar17;
        param_1[0x16] = dVar16;
        lVar15 = lVar15 + 6;
      } while ((ulonglong)uVar7 * 6 != lVar15);
    }
  }
  FUN_140c0c1f8(param_1);
  return param_1;
}



// FUNCTION 140c0c1f8 FUN_140c0c1f8 body=511 status=ok
// SIG undefined FUN_140c0c1f8(void)

void FUN_140c0c1f8(longlong param_1)

{
  undefined1 auStack_208 [32];
  undefined **local_1e8;
  undefined4 local_1e0;
  undefined2 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
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
  undefined8 local_128;
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined2 local_6f;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1e0 = 0;
  local_1dc = 0x401;
  local_1e8 = &PTR_FUN_149f5f4b0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  local_1a4 = 0xffffffffffffffff;
  local_19c = 0xffffffff;
  local_178 = 0;
  local_170 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_16c = 0xffffffff00000080;
  local_164 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_cc = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_fc = 0;
  uStack_f4 = 0;
  local_10c = 0;
  uStack_104 = 0;
  local_c8 = 0x100000000c;
  uStack_c0 = 0x47c35000;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_6f = 0x101;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_120 = (float)DAT_14c75efb8;
  local_28 = 0;
  uStack_20 = 0;
  local_11c = 1.0;
  if (0 < DAT_14c75efb8) {
    local_11c = 1.0 / local_120;
  }
  local_118 = DAT_14c75efbc;
  local_114 = DAT_14c75efc0;
  local_110 = DAT_14c75efc4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e3fcfa(param_1,param_1 + 0x60,&local_1e8);
  }
  else {
    FUN_140c0c3f8(param_1,param_1 + 0x70,&local_1e8);
  }
  FUN_140c0eace(param_1,&local_1e8);
  FUN_140c0c5dc(&local_1e8);
  if ((local_18 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c0c3f8 FUN_140c0c3f8 body=215 status=ok
// SIG undefined FUN_140c0c3f8(void)

void FUN_140c0c3f8(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_2 + 8);
  local_48 = 0;
  uStack_40 = 0;
  FUN_140c0c4d0(&local_48,iVar1);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      uVar2 = uStack_40;
      lVar5 = (longlong)(int)uStack_40;
      uVar3 = (int)uStack_40 + 1;
      uStack_40 = CONCAT44(uStack_40._4_4_,uVar3);
      if (uStack_40._4_4_ < uVar3) {
        FUN_146e7a14a(&local_48,uVar2 & 0xffffffff);
      }
      *(undefined8 *)(local_48 + lVar5 * 0x10) = param_1;
      *(int *)(local_48 + 8 + lVar5 * 0x10) = iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  *(undefined1 *)(param_3 + 0x40) = 0;
  *(undefined4 *)(param_3 + 0x120) = 0x16;
  *(undefined4 *)(param_3 + 0x124) = 0x10;
  *(undefined4 *)(param_3 + 0x128) = 0x7f7fffff;
  *(undefined4 *)(param_3 + 300) = 0;
  *(undefined2 *)(param_3 + 0x178) = 0x100;
  *(undefined1 *)(param_3 + 0x17a) = 1;
  FUN_140c0e1fe(param_3,&local_48);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c0c4d0 FUN_140c0c4d0 body=42 status=ok
// SIG undefined FUN_140c0c4d0(void)

void FUN_140c0c4d0(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_140c0c4fa();
    return;
  }
  return;
}



// FUNCTION 140c0c4fa FUN_140c0c4fa body=226 status=ok
// SIG undefined FUN_140c0c4fa(void)

void FUN_140c0c4fa(longlong param_1,int param_2)

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



// FUNCTION 140c0c5dc FUN_140c0c5dc body=477 status=ok
// SIG undefined FUN_140c0c5dc(void)

void FUN_140c0c5dc(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  FUN_140c0c7e4(*(undefined8 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x170));
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    FUN_140c0c5dc(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_140d9e122(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_140c0c7b9(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140c0c7b9 FUN_140c0c7b9 body=43 status=ok
// SIG undefined FUN_140c0c7b9(void)

void FUN_140c0c7b9(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 140c0c7e4 FUN_140c0c7e4 body=52 status=ok
// SIG undefined FUN_140c0c7e4(void)

void FUN_140c0c7e4(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c0c818 FUN_140c0c818 body=6629 status=ok
// SIG undefined FUN_140c0c818(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_140c0c818(double param_1,uint *param_2,double *param_3,char param_4)

{
  longlong *plVar1;
  double *pdVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong unaff_RDI;
  ulonglong uVar24;
  int iVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong lVar29;
  double *pdVar30;
  uint *puVar31;
  longlong *plVar32;
  bool bVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar68;
  double dVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  undefined4 uVar84;
  undefined4 uVar85;
  undefined1 auStack_188 [40];
  longlong *local_160;
  longlong *local_158;
  uint local_14c;
  undefined8 local_148;
  longlong *local_140;
  longlong local_138;
  double *local_130;
  longlong *local_128;
  longlong local_120;
  longlong local_118;
  double *local_110;
  double local_108;
  double *pdStack_100;
  double local_f8;
  double local_e8;
  undefined8 *local_e0;
  uint local_d4;
  uint local_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  ulonglong local_b0;
  undefined7 uVar25;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *(undefined1 *)((longlong)param_1 + 0x180) = 1;
  if (param_4 == '\0') {
LAB_140c0c8e3:
    bVar33 = false;
  }
  else {
    dVar34 = param_3[3];
    uVar74 = SUB84(dVar34,0);
    uVar76 = (undefined4)((ulonglong)dVar34 >> 0x20);
    if ((dVar34 < *param_3) || (iVar11 = _finite(*param_3), iVar11 == 0)) goto LAB_140c0c8e3;
    unaff_RDI = 0;
    bVar33 = false;
    do {
      iVar11 = _finite((double)CONCAT44(uVar76,uVar74));
      if ((iVar11 == 0) || (bVar33 = 1 < unaff_RDI, unaff_RDI == 2)) break;
      dVar34 = param_3[unaff_RDI + 4];
      uVar74 = SUB84(dVar34,0);
      uVar76 = (undefined4)((ulonglong)dVar34 >> 0x20);
      if (dVar34 < param_3[unaff_RDI + 1]) break;
      iVar11 = _finite(param_3[unaff_RDI + 1]);
      unaff_RDI = unaff_RDI + 1;
    } while (iVar11 != 0);
  }
  plVar20 = (longlong *)((longlong)param_1 + 0x118);
  uVar14 = *param_2;
  iVar11 = *(int *)((longlong)param_1 + 0x120);
  if ((int)uVar14 < iVar11 && -1 < (int)uVar14) {
    puVar31 = (uint *)(*plVar20 + (ulonglong)uVar14 * 0x18);
    if ((puVar31 == (uint *)0x0) || (*(char *)(*plVar20 + 0x14 + (ulonglong)uVar14 * 0x18) == '\0'))
    goto LAB_140c0ca04;
    lVar12 = (longlong)(int)puVar31[2];
    uVar25 = (undefined7)(unaff_RDI >> 8);
    uVar24 = CONCAT71(uVar25,1);
    if (lVar12 != -1) {
      if (bVar33) {
        if ((*(byte *)((longlong)param_1 + 0x40) & 1) == 0) {
          lVar17 = lVar12 * 0x48 + *(longlong *)((longlong)param_1 + 0x20);
          lVar27 = 0;
          do {
            dVar34 = param_3[lVar27];
            if ((dVar34 < *(double *)(lVar17 + lVar27 * 8)) ||
               (pdVar30 = (double *)(lVar17 + 0x18 + lVar27 * 8),
               *pdVar30 <= dVar34 && dVar34 != *pdVar30)) goto LAB_140c0d55e;
            lVar27 = lVar27 + 1;
          } while (lVar27 != 3);
          lVar27 = 3;
          do {
            dVar34 = param_3[lVar27];
            if ((dVar34 < *(double *)(lVar17 + -0x18 + lVar27 * 8)) ||
               (pdVar30 = (double *)(lVar17 + lVar27 * 8), *pdVar30 <= dVar34 && dVar34 != *pdVar30)
               ) goto LAB_140c0d55e;
            lVar27 = lVar27 + 1;
          } while (lVar27 != 6);
          if (0 < (longlong)*(int *)(lVar17 + 0x38)) {
            lVar12 = *(longlong *)(lVar17 + 0x30);
            lVar27 = 0;
            do {
              if (*(uint *)(lVar12 + lVar27) == uVar14) {
                *(double *)(lVar12 + 0x18 + lVar27) = param_3[2];
                dVar34 = param_3[1];
                pdVar30 = (double *)(lVar12 + 8 + lVar27);
                *pdVar30 = *param_3;
                pdVar30[1] = dVar34;
                dVar34 = param_3[4];
                pdVar30 = (double *)(lVar12 + 0x20 + lVar27);
                *pdVar30 = param_3[3];
                pdVar30[1] = dVar34;
                *(double *)(lVar12 + 0x30 + lVar27) = param_3[5];
                break;
              }
              lVar27 = lVar27 + 0x38;
            } while ((longlong)*(int *)(lVar17 + 0x38) * 0x38 - lVar27 != 0);
          }
          *(undefined1 *)(lVar17 + 0x40) = 1;
        }
        else {
          lVar27 = (longlong)(int)puVar31[4] * 0x70 + *(longlong *)((longlong)param_1 + 0x10);
          lVar17 = 0;
          do {
            dVar34 = param_3[lVar17];
            if ((dVar34 < *(double *)(lVar27 + lVar17 * 8)) ||
               (pdVar30 = (double *)(lVar27 + 0x18 + lVar17 * 8),
               *pdVar30 <= dVar34 && dVar34 != *pdVar30)) goto LAB_140c0cced;
            lVar17 = lVar17 + 1;
          } while (lVar17 != 3);
          lVar17 = 3;
          do {
            dVar34 = param_3[lVar17];
            if ((dVar34 < *(double *)(lVar27 + -0x18 + lVar17 * 8)) ||
               (pdVar30 = (double *)(lVar27 + lVar17 * 8), *pdVar30 <= dVar34 && dVar34 != *pdVar30)
               ) goto LAB_140c0cced;
            lVar17 = lVar17 + 1;
          } while (lVar17 != 6);
          lVar12 = *(longlong *)((longlong)param_1 + 0x20) + lVar12 * 0x48;
          if (0 < (longlong)*(int *)(lVar12 + 0x38)) {
            lVar17 = *(longlong *)(lVar12 + 0x30);
            lVar27 = 0;
            do {
              if (*(uint *)(lVar17 + lVar27) == uVar14) {
                *(double *)(lVar17 + 0x18 + lVar27) = param_3[2];
                dVar34 = param_3[1];
                pdVar30 = (double *)(lVar17 + 8 + lVar27);
                *pdVar30 = *param_3;
                pdVar30[1] = dVar34;
                dVar34 = param_3[4];
                pdVar30 = (double *)(lVar17 + 0x20 + lVar27);
                *pdVar30 = param_3[3];
                pdVar30[1] = dVar34;
                *(double *)(lVar17 + 0x30 + lVar27) = param_3[5];
                break;
              }
              lVar27 = lVar27 + 0x38;
            } while ((longlong)*(int *)(lVar12 + 0x38) * 0x38 - lVar27 != 0);
          }
          *(undefined1 *)(lVar12 + 0x40) = 1;
          FUN_140c10eb8(*(longlong *)((longlong)param_1 + 0x20) + (longlong)(int)puVar31[2] * 0x48,
                        *(longlong *)((longlong)param_1 + 0x20) + (longlong)(int)puVar31[2] * 0x48 +
                        0x30);
        }
        uVar18 = CONCAT71(uVar25,1);
        goto LAB_140c0de98;
      }
      if ((*(byte *)((longlong)param_1 + 0x40) & 1) == 0) {
LAB_140c0d55e:
        FUN_1429e5202(lVar12 * 0x48 + *(longlong *)((longlong)param_1 + 0x20));
        puVar31[2] = 0xffffffff;
      }
      else {
LAB_140c0cced:
        FUN_1429e5088(param_1,puVar31[4],param_2);
        puVar31[2] = 0xffffffff;
        puVar31[4] = 0xffffffff;
      }
    }
  }
  else {
LAB_140c0ca04:
    if (iVar11 <= (int)uVar14) {
      FUN_140c10d7e(plVar20,(uVar14 - iVar11) + 1);
    }
    *(undefined1 *)(*plVar20 + 0x14 + (longlong)(int)uVar14 * 0x18) = 1;
    puVar31 = (uint *)((longlong)(int)uVar14 * 0x18 + *plVar20);
    uVar24 = 0;
  }
  uVar16 = uStack_cc;
  uVar14 = local_d0;
  *(undefined1 *)((longlong)param_1 + 0x181) = 1;
  uVar23 = (uint)uVar24;
  local_d0 = SUB84(param_1,0);
  uVar15 = local_d0;
  uStack_cc = (uint)((ulonglong)param_1 >> 0x20);
  uVar9 = uStack_cc;
  uVar18 = uVar24;
  if (bVar33) {
    dVar34 = param_3[5];
    uVar75 = SUB84(dVar34,0);
    uVar77 = (undefined4)((ulonglong)dVar34 >> 0x20);
    dVar69 = param_3[2];
    uVar78 = SUB84(dVar69,0);
    uVar79 = (undefined4)((ulonglong)dVar69 >> 0x20);
    dVar34 = dVar34 - dVar69;
    dVar69 = param_3[4];
    dVar4 = *param_3;
    dVar5 = param_3[1];
    dVar41 = dVar69 - dVar5;
    dVar6 = param_3[3];
    dVar68 = dVar6 - dVar4;
    if ((dVar68 <= dVar41 || dVar68 <= dVar34) && (dVar68 = dVar41, dVar41 <= dVar34)) {
      dVar68 = dVar34;
    }
    uVar74 = SUB84(dVar69,0);
    uVar76 = (int)((ulonglong)dVar69 >> 0x20);
    uVar80 = SUB84(dVar6,0);
    uVar81 = (int)((ulonglong)dVar6 >> 0x20);
    uVar82 = SUB84(dVar5,0);
    uVar83 = (int)((ulonglong)dVar5 >> 0x20);
    uVar84 = SUB84(dVar4,0);
    uVar85 = (int)((ulonglong)dVar4 >> 0x20);
    if (dVar68 < *(double *)((longlong)param_1 + 0x130) ||
        dVar68 == *(double *)((longlong)param_1 + 0x130)) {
      pdVar30 = param_3 + 3;
      uVar7 = puVar31[1];
      lVar12 = (longlong)(int)uVar7;
      if (lVar12 == -1) {
        if (*(char *)((longlong)param_1 + 0x40) == '\x01') {
          local_d0 = uVar14;
          uStack_cc = uVar16;
          FUN_1429e5874(param_1,&local_d0,param_2,param_3);
          puVar31[4] = local_d0;
          puVar31[2] = uStack_cc;
        }
        else {
          lVar12 = *(longlong *)((longlong)param_1 + 0xc0);
          local_d0 = uVar14;
          uStack_cc = uVar16;
          if (lVar12 != 0) goto LAB_140c0d4ad;
          uVar18 = uVar24 & 0xffffffff;
          uVar16 = *param_2;
          uStack_c0._4_4_ = SUB84(param_3[2],0);
          uStack_b8 = (undefined4)((ulonglong)param_3[2] >> 0x20);
          uStack_cc = SUB84(*param_3,0);
          uStack_c8._0_4_ = (undefined4)((ulonglong)*param_3 >> 0x20);
          uStack_c8._4_4_ = SUB84(param_3[1],0);
          uStack_c0._0_4_ = (undefined4)((ulonglong)param_3[1] >> 0x20);
          local_108 = *pdVar30;
          pdStack_100 = (double *)param_3[4];
          local_f8 = param_3[5];
          uVar23 = *(uint *)((longlong)param_1 + 0x38);
          *(uint *)((longlong)param_1 + 0x38) = uVar23 + 1;
          if (*(uint *)((longlong)param_1 + 0x3c) < uVar23 + 1) {
            FUN_140c11858((longlong)param_1 + 0x30,uVar23);
          }
          lVar12 = *(longlong *)((longlong)param_1 + 0x30);
          lVar17 = (longlong)(int)uVar23 * 0x38;
          *(uint *)(lVar12 + lVar17) = uVar16;
          puVar3 = (undefined8 *)(lVar12 + 8 + lVar17);
          *puVar3 = CONCAT44((undefined4)uStack_c8,uStack_cc);
          puVar3[1] = CONCAT44((undefined4)uStack_c0,uStack_c8._4_4_);
          *(ulonglong *)(lVar12 + 0x18 + lVar17) = CONCAT44(uStack_b8,uStack_c0._4_4_);
          pdVar30 = (double *)(lVar12 + 0x20 + lVar17);
          *pdVar30 = local_108;
          pdVar30[1] = (double)pdStack_100;
          *(double *)(lVar12 + 0x30 + lVar17) = local_f8;
          puVar31[1] = uVar23;
          if ((((*(longlong *)((longlong)param_1 + 0xc0) != 0) ||
               (*(double *)((longlong)param_1 + 200) <= 0.0)) ||
              (*(int *)((longlong)param_1 + 0xd8) < 1)) ||
             ((uVar13 = (ulonglong)*(int *)((longlong)param_1 + 0xdc), (longlong)uVar13 < 1 ||
              (*(int *)((longlong)param_1 + 0xe0) < 1)))) goto LAB_140c0de68;
          local_e8 = (double)CONCAT44(local_e8._4_4_,uVar23);
          dVar34 = *(double *)((longlong)param_1 + 0xd0);
          auVar43._8_8_ = 0;
          auVar43._0_8_ = ABS(*param_3 * dVar34) * 2.220446049250313e-16 + *param_3 * dVar34;
          auVar43 = roundpd(auVar43,auVar43,1);
          plVar20 = (longlong *)(longlong)auVar43._0_8_;
          auVar49._8_8_ = 0;
          auVar49._0_8_ = ABS(param_3[3] * dVar34) * 2.220446049250313e-16 + param_3[3] * dVar34;
          auVar43 = roundpd(auVar49,auVar49,1);
          local_158 = (longlong *)(longlong)auVar43._0_8_;
          if ((longlong)local_158 < (longlong)plVar20) {
LAB_140c0e00f:
            local_d4 = (uint)local_d4._1_3_ << 8;
LAB_140c0e017:
            *(int *)((longlong)param_1 + 0xe8) = *(int *)((longlong)param_1 + 0xe8) + 1;
          }
          else {
            auVar63._8_8_ = 0;
            auVar63._0_8_ = ABS(param_3[1] * dVar34) * 2.220446049250313e-16 + param_3[1] * dVar34;
            auVar43 = roundpd(auVar63,auVar63,1);
            local_148 = (longlong *)(longlong)auVar43._0_8_;
            auVar61._8_8_ = 0;
            auVar61._0_8_ = ABS(dVar34 * param_3[4]) * 2.220446049250313e-16 + dVar34 * param_3[4];
            auVar43 = roundpd(auVar61,auVar61,1);
            local_160 = (longlong *)(longlong)auVar43._0_8_;
            if ((longlong)local_160 < (longlong)local_148) goto LAB_140c0e00f;
            uVar18 = (longlong)local_158 + (1 - (longlong)plVar20);
            uVar21 = (longlong)local_160 + (1 - (longlong)local_148);
            uVar22 = uVar21 * uVar18;
            bVar33 = uVar22 - uVar13 == 0;
            local_d4 = CONCAT31(local_d4._1_3_,
                                ((uVar22 < uVar13 || bVar33) && uVar21 <= uVar13) &&
                                uVar18 <= uVar13);
            if ((uVar22 >= uVar13 && !bVar33 || uVar21 > uVar13) || uVar18 > uVar13)
            goto LAB_140c0e017;
            uStack_c8 = (undefined8 *)&local_d4;
            local_160 = (longlong *)((longlong)local_160 + 1);
            local_d0 = uVar15;
            uStack_cc = uVar9;
            do {
              uVar14 = ((uint)plVar20 & 0xff00) << 8 | (uint)plVar20 & 0xff;
              uVar14 = (uVar14 << 4 | uVar14) & 0xf0f0f0f;
              uVar14 = (uVar14 * 4 | uVar14) & 0x33333333;
              plVar28 = local_148;
              do {
                uVar15 = ((uint)plVar28 & 0xff00) << 8 | (uint)plVar28 & 0xff;
                uVar15 = (uVar15 << 4 | uVar15) & 0xf0f0f0f;
                uVar15 = (uVar15 * 4 | uVar15) & 0x33333333;
                cVar10 = FUN_146e35a34(&local_d0,
                                       (uVar15 * 2 | uVar15 * 4) & 0xaaaaaaaa |
                                       (uVar14 * 2 | uVar14) & 0x55555555);
                if (cVar10 == '\0') goto LAB_140c0e01d;
                plVar28 = (longlong *)((longlong)plVar28 + 1);
              } while (local_160 != plVar28);
              bVar33 = plVar20 != local_158;
              plVar20 = (longlong *)((longlong)plVar20 + 1);
            } while (bVar33);
          }
LAB_140c0e01d:
          if ((char)local_d4 == '\x01') {
            pdStack_100 = &local_e8;
            dVar34 = *(double *)((longlong)param_1 + 0xd0);
            auVar65._8_8_ = 0;
            auVar65._0_8_ = ABS(*param_3 * dVar34) * 2.220446049250313e-16 + *param_3 * dVar34;
            auVar43 = roundpd(auVar65,auVar65,1);
            auVar66._8_8_ = 0;
            auVar66._0_8_ = ABS(param_3[3] * dVar34) * 2.220446049250313e-16 + param_3[3] * dVar34;
            auVar49 = roundpd(auVar66,auVar66,1);
            local_160 = (longlong *)(longlong)auVar49._0_8_;
            uVar14 = 0xffffffff;
            local_108 = param_1;
            if ((longlong)auVar43._0_8_ <= (longlong)local_160) {
              auVar67._8_8_ = 0;
              auVar67._0_8_ = ABS(param_3[1] * dVar34) * 2.220446049250313e-16 + param_3[1] * dVar34
              ;
              auVar61 = roundpd(auVar67,auVar67,1);
              auVar40._8_8_ = 0;
              auVar40._0_8_ = ABS(dVar34 * param_3[4]) * 2.220446049250313e-16 + dVar34 * param_3[4]
              ;
              auVar49 = roundpd(auVar40,auVar40,1);
              local_158 = (longlong *)(longlong)auVar49._0_8_;
              lVar12 = (longlong)local_158 + 1;
              plVar20 = (longlong *)(longlong)auVar43._0_8_;
              do {
                if ((longlong)auVar61._0_8_ <= (longlong)local_158) {
                  uVar14 = ((uint)plVar20 & 0xff00) << 8 | (uint)plVar20 & 0xff;
                  uVar14 = (uVar14 << 4 | uVar14) & 0xf0f0f0f;
                  uVar14 = (uVar14 * 4 | uVar14) & 0x33333333;
                  lVar17 = (longlong)auVar61._0_8_;
                  do {
                    uVar15 = ((uint)lVar17 & 0xff00) << 8 | (uint)lVar17 & 0xff;
                    uVar15 = (uVar15 << 4 | uVar15) & 0xf0f0f0f;
                    uVar15 = (uVar15 * 4 | uVar15) & 0x33333333;
                    cVar10 = FUN_146e35ab8(&local_108,
                                           (uVar15 * 2 | uVar15 * 4) & 0xaaaaaaaa |
                                           (uVar14 * 2 | uVar14) & 0x55555555);
                    if (cVar10 == '\0') goto LAB_140c0e1b7;
                    lVar17 = lVar17 + 1;
                  } while (lVar12 != lVar17);
                }
                bVar33 = plVar20 != local_160;
                plVar20 = (longlong *)((longlong)plVar20 + 1);
              } while (bVar33);
LAB_140c0e1b7:
              uVar14 = 0xffffffff;
            }
          }
          else {
            uVar14 = *(uint *)((longlong)param_1 + 0xb8);
            *(uint *)((longlong)param_1 + 0xb8) = uVar14 + 1;
            if (*(uint *)((longlong)param_1 + 0xbc) < uVar14 + 1) {
              FUN_1446f48e2((longlong *)((longlong)param_1 + 0xb0),uVar14);
            }
            *(uint *)(*(longlong *)((longlong)param_1 + 0xb0) + (longlong)(int)uVar14 * 4) = uVar23;
          }
          puVar31[3] = uVar14;
          uVar18 = uVar24 & 0xffffffff;
        }
      }
      else {
        lVar17 = *(longlong *)((longlong)param_1 + 0xc0);
        if (lVar17 == 0) {
          if (((0.0 < *(double *)((longlong)param_1 + 200)) &&
              (0 < *(int *)((longlong)param_1 + 0xd8))) &&
             ((0 < *(int *)((longlong)param_1 + 0xdc) && (0 < *(int *)((longlong)param_1 + 0xe0)))))
          {
            uVar15 = puVar31[3];
            local_d4 = uVar7;
            if (uVar15 == 0xffffffff) {
              lVar17 = lVar12 * 0x38 + *(longlong *)((longlong)param_1 + 0x30);
              local_110 = (double *)(lVar17 + 8);
              uStack_c8 = (undefined8 *)&local_d4;
              dVar34 = *(double *)((longlong)param_1 + 0xd0);
              auVar42._8_8_ = 0;
              auVar42._0_8_ = ABS(*local_110 * dVar34) * 2.220446049250313e-16 + *local_110 * dVar34
              ;
              auVar43 = roundpd(auVar42,auVar42,1);
              plVar20 = (longlong *)(longlong)auVar43._0_8_;
              dVar68 = *(double *)(lVar17 + 0x10) * dVar34;
              auVar44._8_8_ = 0;
              auVar44._0_8_ = ABS(dVar68) * 2.220446049250313e-16 + dVar68;
              auVar43 = roundpd(auVar44,auVar44,1);
              local_160 = (longlong *)(longlong)auVar43._0_8_;
              dVar68 = *(double *)(lVar17 + 0x20) * dVar34;
              auVar45._8_8_ = 0;
              auVar45._0_8_ = ABS(dVar68) * 2.220446049250313e-16 + dVar68;
              auVar43 = roundpd(auVar45,auVar45,1);
              local_140 = (longlong *)(longlong)auVar43._0_8_;
              dVar68 = *(double *)(lVar17 + 0x28) * dVar34;
              auVar46._8_8_ = 0;
              auVar46._0_8_ = ABS(dVar68) * 2.220446049250313e-16 + dVar68;
              auVar43 = roundpd(auVar46,auVar46,1);
              local_128 = (longlong *)(longlong)auVar43._0_8_;
              auVar47._0_8_ = ABS(dVar4 * dVar34) * 2.220446049250313e-16 + dVar4 * dVar34;
              auVar47._8_8_ = 0;
              auVar43 = roundpd(auVar47,auVar47,1);
              local_118 = (longlong)auVar43._0_8_;
              auVar48._0_8_ = ABS(dVar5 * dVar34) * 2.220446049250313e-16 + dVar5 * dVar34;
              auVar48._8_8_ = 0;
              auVar49 = roundpd(auVar48,auVar48,1);
              auVar50._0_8_ = ABS(dVar6 * dVar34) * 2.220446049250313e-16 + dVar6 * dVar34;
              auVar50._8_8_ = 0;
              auVar43 = roundpd(auVar50,auVar50,1);
              local_120 = (longlong)auVar43._0_8_;
              auVar35._0_8_ = ABS(dVar69 * dVar34) * 2.220446049250313e-16 + dVar69 * dVar34;
              auVar35._8_8_ = 0;
              auVar43 = roundpd(auVar35,auVar35,1);
              local_14c = uVar23;
              local_138 = lVar12;
              local_130 = pdVar30;
              if (((local_120 < (longlong)local_140 ||
                   ((longlong)local_160 < (longlong)auVar49._0_8_ || (longlong)plVar20 < local_118))
                   || (longlong)auVar43._0_8_ < (longlong)local_128) &&
                 ((longlong)plVar20 <= (longlong)local_140)) {
                lVar12 = (longlong)local_128 + 1;
                do {
                  if ((longlong)local_160 <= (longlong)local_128) {
                    bVar33 = (longlong)plVar20 < local_118;
                    bVar8 = local_120 < (longlong)plVar20;
                    uVar14 = ((uint)plVar20 & 0xff00) << 8 | (uint)plVar20 & 0xff;
                    uVar14 = (uVar14 << 4 | uVar14) & 0xf0f0f0f;
                    uVar14 = (uVar14 * 4 | uVar14) & 0x33333333;
                    local_148 = (longlong *)
                                (CONCAT44(local_148._4_4_,uVar14 * 2 | uVar14) & 0xffffffff55555555)
                    ;
                    plVar28 = local_160;
                    local_158 = plVar20;
                    do {
                      if (((longlong)auVar43._0_8_ < (longlong)plVar28) ||
                         ((longlong)plVar28 < (longlong)auVar49._0_8_ || (bVar8 || bVar33))) {
                        uVar14 = ((uint)plVar28 & 0xff00) << 8 | (uint)plVar28 & 0xff;
                        uVar14 = (uVar14 << 4 | uVar14) & 0xf0f0f0f;
                        uVar14 = (uVar14 * 4 | uVar14) & 0x33333333;
                        cVar10 = FUN_146e35cea(&local_d0,
                                               (uVar14 * 2 | uVar14 * 4) & 0xaaaaaaaa |
                                               (uint)local_148);
                        plVar20 = local_158;
                        if (cVar10 == '\0') goto LAB_140c0d025;
                      }
                      plVar28 = (longlong *)((longlong)plVar28 + 1);
                    } while ((longlong *)lVar12 != plVar28);
                  }
                  bVar33 = plVar20 != local_140;
                  plVar20 = (longlong *)((longlong)plVar20 + 1);
                } while (bVar33);
              }
LAB_140c0d025:
              pdStack_100 = (double *)&local_d4;
              dVar34 = *(double *)((longlong)param_1 + 0xd0);
              auVar51._8_8_ = 0;
              auVar51._0_8_ = ABS(*param_3 * dVar34) * 2.220446049250313e-16 + *param_3 * dVar34;
              auVar43 = roundpd(auVar51,auVar51,1);
              plVar20 = (longlong *)(longlong)auVar43._0_8_;
              auVar52._8_8_ = 0;
              auVar52._0_8_ = ABS(param_3[1] * dVar34) * 2.220446049250313e-16 + param_3[1] * dVar34
              ;
              auVar43 = roundpd(auVar52,auVar52,1);
              local_160 = (longlong *)(longlong)auVar43._0_8_;
              auVar53._8_8_ = 0;
              auVar53._0_8_ = ABS(param_3[3] * dVar34) * 2.220446049250313e-16 + param_3[3] * dVar34
              ;
              auVar43 = roundpd(auVar53,auVar53,1);
              plVar28 = (longlong *)(longlong)auVar43._0_8_;
              auVar54._8_8_ = 0;
              auVar54._0_8_ = ABS(param_3[4] * dVar34) * 2.220446049250313e-16 + param_3[4] * dVar34
              ;
              auVar43 = roundpd(auVar54,auVar54,1);
              local_140 = (longlong *)(longlong)auVar43._0_8_;
              auVar55._8_8_ = 0;
              auVar55._0_8_ = ABS(*local_110 * dVar34) * 2.220446049250313e-16 + *local_110 * dVar34
              ;
              auVar43 = roundpd(auVar55,auVar55,1);
              local_118 = (longlong)auVar43._0_8_;
              auVar56._8_8_ = 0;
              auVar56._0_8_ =
                   ABS(local_110[1] * dVar34) * 2.220446049250313e-16 + local_110[1] * dVar34;
              auVar49 = roundpd(auVar56,auVar56,1);
              auVar57._8_8_ = 0;
              auVar57._0_8_ =
                   ABS(local_110[3] * dVar34) * 2.220446049250313e-16 + local_110[3] * dVar34;
              auVar43 = roundpd(auVar57,auVar57,1);
              local_120 = (longlong)auVar43._0_8_;
              auVar36._8_8_ = 0;
              auVar36._0_8_ =
                   ABS(dVar34 * local_110[4]) * 2.220446049250313e-16 + dVar34 * local_110[4];
              auVar43 = roundpd(auVar36,auVar36,1);
              uVar15 = 0xffffffff;
              local_108 = param_1;
              if ((((longlong)plVar28 <= local_120 &&
                   ((longlong)auVar49._0_8_ <= (longlong)local_160 && local_118 <= (longlong)plVar20
                   )) && (longlong)local_140 <= (longlong)auVar43._0_8_) ||
                 ((longlong)plVar28 < (longlong)plVar20)) goto LAB_140c0d48a;
              plVar1 = (longlong *)((longlong)local_140 + 1);
              local_128 = plVar28;
              do {
                if ((longlong)local_160 <= (longlong)local_140) {
                  bVar33 = (longlong)plVar20 < local_118;
                  bVar8 = local_120 < (longlong)plVar20;
                  uVar14 = ((uint)plVar20 & 0xff00) << 8 | (uint)plVar20 & 0xff;
                  uVar14 = (uVar14 << 4 | uVar14) & 0xf0f0f0f;
                  uVar14 = (uVar14 * 4 | uVar14) & 0x33333333;
                  local_148 = (longlong *)
                              (CONCAT44(local_148._4_4_,uVar14 * 2 | uVar14) & 0xffffffff55555555);
                  plVar32 = local_160;
                  local_158 = plVar20;
                  do {
                    if (((longlong)auVar43._0_8_ < (longlong)plVar32) ||
                       ((longlong)plVar32 < (longlong)auVar49._0_8_ || (bVar8 || bVar33))) {
                      uVar14 = ((uint)plVar32 & 0xff00) << 8 | (uint)plVar32 & 0xff;
                      uVar14 = (uVar14 << 4 | uVar14) & 0xf0f0f0f;
                      uVar14 = (uVar14 * 4 | uVar14) & 0x33333333;
                      cVar10 = FUN_146e35e2a(&local_108,
                                             (uVar14 * 2 | uVar14 * 4) & 0xaaaaaaaa |
                                             (uint)local_148);
                      plVar20 = local_158;
                      plVar28 = local_128;
                      if (cVar10 == '\0') {
                        local_e0 = (undefined8 *)&local_d4;
                        dVar34 = *(double *)((longlong)param_1 + 0xd0);
                        auVar58._8_8_ = 0;
                        auVar58._0_8_ =
                             ABS(*param_3 * dVar34) * 2.220446049250313e-16 + *param_3 * dVar34;
                        auVar43 = roundpd(auVar58,auVar58,1);
                        auVar59._8_8_ = 0;
                        auVar59._0_8_ =
                             ABS(param_3[3] * dVar34) * 2.220446049250313e-16 + param_3[3] * dVar34;
                        auVar49 = roundpd(auVar59,auVar59,1);
                        local_160 = (longlong *)(longlong)auVar49._0_8_;
                        local_e8 = param_1;
                        if ((longlong)local_160 < (longlong)auVar43._0_8_) goto LAB_140c0d450;
                        auVar60._8_8_ = 0;
                        auVar60._0_8_ =
                             ABS(param_3[1] * dVar34) * 2.220446049250313e-16 + param_3[1] * dVar34;
                        auVar61 = roundpd(auVar60,auVar60,1);
                        auVar37._8_8_ = 0;
                        auVar37._0_8_ =
                             ABS(dVar34 * param_3[4]) * 2.220446049250313e-16 + dVar34 * param_3[4];
                        auVar49 = roundpd(auVar37,auVar37,1);
                        local_158 = (longlong *)(longlong)auVar49._0_8_;
                        lVar12 = (longlong)local_158 + 1;
                        plVar20 = (longlong *)(longlong)auVar43._0_8_;
                        goto LAB_140c0d39d;
                      }
                    }
                    plVar32 = (longlong *)((longlong)plVar32 + 1);
                  } while (plVar1 != plVar32);
                }
                bVar33 = plVar20 != plVar28;
                plVar20 = (longlong *)((longlong)plVar20 + 1);
              } while (bVar33);
              uVar24 = (ulonglong)local_14c;
              uVar15 = 0xffffffff;
              lVar12 = local_138;
              pdVar30 = local_130;
              uVar14 = local_d0;
              uVar16 = uStack_cc;
            }
            goto LAB_140c0de37;
          }
          goto LAB_140c0de3b;
        }
        lVar27 = *(longlong *)(lVar17 + 0x10) + lVar12 * 0x70;
        lVar29 = 0;
        do {
          dVar34 = param_3[lVar29];
          if ((dVar34 < *(double *)(lVar27 + lVar29 * 8)) ||
             (pdVar2 = (double *)(lVar27 + 0x18 + lVar29 * 8),
             *pdVar2 <= dVar34 && dVar34 != *pdVar2)) goto LAB_140c0cccf;
          lVar29 = lVar29 + 1;
        } while (lVar29 != 3);
        lVar29 = 3;
        do {
          dVar34 = param_3[lVar29];
          if ((dVar34 < *(double *)(lVar27 + -0x18 + lVar29 * 8)) ||
             (pdVar2 = (double *)(lVar27 + lVar29 * 8), *pdVar2 <= dVar34 && dVar34 != *pdVar2))
          goto LAB_140c0cccf;
          lVar29 = lVar29 + 1;
        } while (lVar29 != 6);
        lVar27 = (longlong)*(int *)(*(longlong *)(lVar17 + 0x10) + 0x60 + lVar12 * 0x70);
        lVar12 = *(longlong *)(lVar17 + 0x20) + lVar27 * 0x48;
        if (0 < (longlong)*(int *)(lVar12 + 0x38)) {
          lVar17 = *(longlong *)(lVar12 + 0x30);
          lVar29 = 0;
          do {
            if (*(uint *)(lVar17 + lVar29) == *param_2) {
              *(double *)(lVar17 + 0x18 + lVar29) = param_3[2];
              dVar34 = param_3[1];
              pdVar2 = (double *)(lVar17 + 8 + lVar29);
              *pdVar2 = *param_3;
              pdVar2[1] = dVar34;
              dVar34 = param_3[4];
              pdVar2 = (double *)(lVar17 + 0x20 + lVar29);
              *pdVar2 = *pdVar30;
              pdVar2[1] = dVar34;
              *(double *)(lVar17 + 0x30 + lVar29) = param_3[5];
              break;
            }
            lVar29 = lVar29 + 0x38;
          } while ((longlong)*(int *)(lVar12 + 0x38) * 0x38 - lVar29 != 0);
        }
        *(undefined1 *)(lVar12 + 0x40) = 1;
        lVar12 = *(longlong *)(*(longlong *)((longlong)param_1 + 0xc0) + 0x20);
        local_d0 = uVar14;
        uStack_cc = uVar16;
        FUN_140c10eb8(lVar12 + lVar27 * 0x48,lVar12 + lVar27 * 0x48 + 0x30);
      }
      goto LAB_140c0de68;
    }
  }
  else {
    uVar75 = 0xffffffff;
    uVar77 = 0x7fefffff;
    uVar78 = 0xffffffff;
    uVar79 = 0xffefffff;
    uVar74 = uVar75;
    uVar76 = uVar77;
    uVar80 = uVar75;
    uVar81 = uVar77;
    uVar82 = uVar78;
    uVar83 = uVar79;
    uVar84 = uVar78;
    uVar85 = uVar79;
  }
  plVar28 = (longlong *)((longlong)param_1 + 0x108);
  if ((longlong)(int)*puVar31 == -1) {
    uVar18 = uVar24 & 0xffffffff;
    uVar23 = *param_2;
    uVar7 = *(uint *)((longlong)param_1 + 0x110);
    *(uint *)((longlong)param_1 + 0x110) = uVar7 + 1;
    local_160 = plVar20;
    local_d0 = uVar14;
    uStack_cc = uVar16;
    if (*(uint *)((longlong)param_1 + 0x114) < uVar7 + 1) {
      FUN_140c11858(plVar28,uVar7);
    }
    lVar12 = *plVar28;
    lVar17 = (longlong)(int)uVar7 * 0x38;
    *(uint *)(lVar12 + lVar17) = uVar23;
    *(ulonglong *)(lVar12 + 8 + lVar17) = CONCAT44(uVar85,uVar84);
    *(ulonglong *)(lVar12 + 0x10 + lVar17) = CONCAT44(uVar83,uVar82);
    *(ulonglong *)(lVar12 + 0x18 + lVar17) = CONCAT44(uVar79,uVar78);
    *(ulonglong *)(lVar12 + 0x20 + lVar17) = CONCAT44(uVar81,uVar80);
    *(ulonglong *)(lVar12 + 0x28 + lVar17) = CONCAT44(uVar76,uVar74);
    *(ulonglong *)(lVar12 + 0x30 + lVar17) = CONCAT44(uVar77,uVar75);
    *puVar31 = uVar7;
    plVar20 = local_160;
  }
  else {
    lVar12 = *plVar28;
    lVar17 = (longlong)(int)*puVar31 * 0x38;
    *(ulonglong *)(lVar12 + 8 + lVar17) = CONCAT44(uVar85,uVar84);
    *(ulonglong *)(lVar12 + 0x10 + lVar17) = CONCAT44(uVar83,uVar82);
    *(ulonglong *)(lVar12 + 0x18 + lVar17) = CONCAT44(uVar79,uVar78);
    *(ulonglong *)(lVar12 + 0x20 + lVar17) = CONCAT44(uVar81,uVar80);
    *(ulonglong *)(lVar12 + 0x28 + lVar17) = CONCAT44(uVar76,uVar74);
    *(ulonglong *)(lVar12 + 0x30 + lVar17) = CONCAT44(uVar77,uVar75);
    local_d0 = uVar14;
    uStack_cc = uVar16;
  }
  uVar14 = puVar31[1];
  lVar12 = (longlong)(int)uVar14;
  if (lVar12 != -1) {
    if (*(longlong *)((longlong)param_1 + 0xc0) == 0) {
      if ((((*(double *)((longlong)param_1 + 200) <= 0.0) ||
           (*(int *)((longlong)param_1 + 0xd8) < 1)) || (*(int *)((longlong)param_1 + 0xdc) < 1)) ||
         (*(int *)((longlong)param_1 + 0xe0) < 1)) {
        iVar11 = *(int *)((longlong)param_1 + 0x38);
        if ((int)(uVar14 + 1) < iVar11) {
          *(uint *)(*(longlong *)((longlong)param_1 + 0x118) + 4 +
                   (longlong)
                   *(int *)(*(longlong *)((longlong)param_1 + 0x30) + -0x38 +
                           (longlong)iVar11 * 0x38) * 0x18) = uVar14;
          uVar14 = puVar31[1];
          iVar11 = *(int *)((longlong)param_1 + 0x38);
        }
        plVar28 = (longlong *)((longlong)param_1 + 0x30);
        iVar19 = ~uVar14 + iVar11;
        if (iVar19 != 0) {
          iVar26 = 1;
          if (iVar19 < 1) {
            iVar26 = iVar19;
          }
          memmove((void *)((longlong)(int)uVar14 * 0x38 + *(longlong *)((longlong)param_1 + 0x30)),
                  (void *)((longlong)(iVar11 - iVar26) * 0x38 +
                          *(longlong *)((longlong)param_1 + 0x30)),(longlong)iVar26 * 0x38);
          iVar11 = *(int *)((longlong)param_1 + 0x38);
        }
        *(int *)((longlong)param_1 + 0x38) = iVar11 + -1;
      }
      else {
        uVar16 = puVar31[3];
        local_e8 = (double)CONCAT44(local_e8._4_4_,uVar14);
        local_14c = (uint)uVar18;
        if ((longlong)(int)uVar16 == -1) {
          pdStack_100 = &local_e8;
          dVar34 = *(double *)((longlong)param_1 + 0xd0);
          lVar17 = *(longlong *)((longlong)param_1 + 0x30);
          lVar12 = lVar12 * 0x38;
          dVar69 = *(double *)(lVar17 + 8 + lVar12) * dVar34;
          auVar70._8_8_ = 0;
          auVar70._0_8_ = ABS(dVar69) * 2.220446049250313e-16 + dVar69;
          auVar43 = roundpd(auVar70,auVar70,1);
          dVar69 = *(double *)(lVar17 + 0x20 + lVar12) * dVar34;
          auVar71._8_8_ = 0;
          auVar71._0_8_ = ABS(dVar69) * 2.220446049250313e-16 + dVar69;
          auVar49 = roundpd(auVar71,auVar71,1);
          local_160 = (longlong *)(longlong)auVar49._0_8_;
          local_108 = param_1;
          if ((longlong)auVar43._0_8_ <= (longlong)local_160) {
            dVar69 = *(double *)(lVar17 + lVar12 + 0x10) * dVar34;
            auVar62._0_8_ = ABS(dVar69) * 2.220446049250313e-16 + dVar69;
            auVar62._8_8_ = 0;
            auVar61 = roundpd(auVar62,auVar62,1);
            dVar34 = dVar34 * *(double *)(lVar17 + lVar12 + 0x28);
            auVar38._8_8_ = 0;
            auVar38._0_8_ = ABS(dVar34) * 2.220446049250313e-16 + dVar34;
            auVar49 = roundpd(auVar38,auVar38,1);
            local_158 = (longlong *)(longlong)auVar49._0_8_;
            lVar12 = (longlong)local_158 + 1;
            plVar28 = (longlong *)(longlong)auVar43._0_8_;
            do {
              if ((longlong)auVar61._0_8_ <= (longlong)local_158) {
                uVar14 = ((uint)plVar28 & 0xff00) << 8 | (uint)plVar28 & 0xff;
                uVar14 = (uVar14 << 4 | uVar14) & 0xf0f0f0f;
                uVar14 = (uVar14 * 4 | uVar14) & 0x33333333;
                lVar17 = (longlong)auVar61._0_8_;
                do {
                  uVar16 = ((uint)lVar17 & 0xff00) << 8 | (uint)lVar17 & 0xff;
                  uVar16 = (uVar16 << 4 | uVar16) & 0xf0f0f0f;
                  uVar16 = (uVar16 * 4 | uVar16) & 0x33333333;
                  cVar10 = FUN_146e34f9a(&local_108,
                                         (uVar16 * 2 | uVar16 * 4) & 0xaaaaaaaa |
                                         (uVar14 * 2 | uVar14) & 0x55555555);
                  if (cVar10 == '\0') goto LAB_140c0dc1a;
                  lVar17 = lVar17 + 1;
                } while (lVar12 != lVar17);
              }
              bVar33 = plVar28 != local_160;
              plVar28 = (longlong *)((longlong)plVar28 + 1);
            } while (bVar33);
          }
        }
        else {
          iVar11 = *(int *)((longlong)param_1 + 0xb8);
          if ((int)(uVar16 + 1) < iVar11) {
            *(uint *)(*(longlong *)((longlong)param_1 + 0x118) + 0xc +
                     (longlong)
                     *(int *)(*(longlong *)((longlong)param_1 + 0x30) +
                             (longlong)
                             *(int *)(*(longlong *)((longlong)param_1 + 0xb0) + -4 +
                                     (longlong)iVar11 * 4) * 0x38) * 0x18) = uVar16;
            iVar11 = *(int *)((longlong)param_1 + 0xb8);
          }
          iVar19 = ~uVar16 + iVar11;
          if (iVar19 != 0) {
            iVar26 = 1;
            if (iVar19 < 1) {
              iVar26 = iVar19;
            }
            memmove((void *)(*(longlong *)((longlong)param_1 + 0xb0) + (longlong)(int)uVar16 * 4),
                    (void *)(*(longlong *)((longlong)param_1 + 0xb0) +
                            (longlong)(iVar11 - iVar26) * 4),(longlong)iVar26 << 2);
            iVar11 = *(int *)((longlong)param_1 + 0xb8);
          }
          *(int *)((longlong)param_1 + 0xb8) = iVar11 + -1;
          FUN_14479f406((longlong)param_1 + 0xb0);
        }
LAB_140c0dc1a:
        plVar28 = (longlong *)((longlong)param_1 + 0x30);
        iVar11 = *(int *)((longlong)param_1 + 0x38);
        if ((int)(local_e8._0_4_ + 1) < iVar11) {
          local_d4 = (uint)((longlong)iVar11 + -1);
          lVar12 = *plVar28;
          lVar17 = ((longlong)iVar11 + -1) * 0x38;
          local_148 = (longlong *)((longlong)*(int *)(lVar12 + lVar17) * 3);
          lVar27 = (longlong)*(int *)(*plVar20 + 0xc + (longlong)*(int *)(lVar12 + lVar17) * 0x18);
          local_158 = plVar28;
          if (lVar27 == -1) {
            uStack_c8 = (undefined8 *)&local_d4;
            uStack_c0 = &local_e8;
            dVar34 = *(double *)((longlong)param_1 + 0xd0);
            dVar69 = *(double *)(lVar12 + 8 + lVar17) * dVar34;
            auVar72._8_8_ = 0;
            auVar72._0_8_ = ABS(dVar69) * 2.220446049250313e-16 + dVar69;
            auVar43 = roundpd(auVar72,auVar72,1);
            dVar69 = *(double *)(lVar12 + 0x20 + lVar17) * dVar34;
            auVar73._8_8_ = 0;
            auVar73._0_8_ = ABS(dVar69) * 2.220446049250313e-16 + dVar69;
            auVar49 = roundpd(auVar73,auVar73,1);
            local_160 = (longlong *)(longlong)auVar49._0_8_;
            local_d0 = uVar15;
            uStack_cc = uVar9;
            if ((longlong)auVar43._0_8_ <= (longlong)local_160) {
              dVar69 = *(double *)(lVar12 + lVar17 + 0x10) * dVar34;
              auVar64._0_8_ = ABS(dVar69) * 2.220446049250313e-16 + dVar69;
              auVar64._8_8_ = 0;
              auVar61 = roundpd(auVar64,auVar64,1);
              dVar34 = dVar34 * *(double *)(lVar12 + lVar17 + 0x28);
              auVar39._8_8_ = 0;
              auVar39._0_8_ = ABS(dVar34) * 2.220446049250313e-16 + dVar34;
              auVar49 = roundpd(auVar39,auVar39,1);
              plVar20 = (longlong *)(longlong)auVar43._0_8_;
              do {
                if ((longlong)auVar61._0_8_ <= (longlong)auVar49._0_8_) {
                  uVar14 = ((uint)plVar20 & 0xff00) << 8 | (uint)plVar20 & 0xff;
                  uVar14 = (uVar14 << 4 | uVar14) & 0xf0f0f0f;
                  uVar14 = (uVar14 * 4 | uVar14) & 0x33333333;
                  lVar12 = (longlong)auVar61._0_8_;
                  do {
                    uVar15 = ((uint)lVar12 & 0xff00) << 8 | (uint)lVar12 & 0xff;
                    uVar15 = (uVar15 << 4 | uVar15) & 0xf0f0f0f;
                    uVar15 = (uVar15 * 4 | uVar15) & 0x33333333;
                    cVar10 = FUN_146e350da(&local_d0,
                                           (uVar15 * 2 | uVar15 * 4) & 0xaaaaaaaa |
                                           (uVar14 * 2 | uVar14) & 0x55555555);
                    if (cVar10 == '\0') goto LAB_140c0dfa5;
                    lVar12 = lVar12 + 1;
                  } while ((longlong)auVar49._0_8_ + 1 != lVar12);
                }
                bVar33 = plVar20 != local_160;
                plVar20 = (longlong *)((longlong)plVar20 + 1);
              } while (bVar33);
            }
          }
          else {
            *(uint *)(*(longlong *)((longlong)param_1 + 0xb0) + lVar27 * 4) = local_e8._0_4_;
          }
LAB_140c0dfa5:
          *(uint *)(*(longlong *)((longlong)param_1 + 0x118) + 4 + (longlong)local_148 * 8) =
               local_e8._0_4_;
          iVar11 = *(int *)((longlong)param_1 + 0x38);
          plVar28 = local_158;
        }
        iVar19 = ~local_e8._0_4_ + iVar11;
        uVar18 = (ulonglong)local_14c;
        if (iVar19 != 0) {
          iVar26 = 1;
          if (iVar19 < 1) {
            iVar26 = iVar19;
          }
          memmove((void *)((longlong)(int)local_e8._0_4_ * 0x38 +
                          *(longlong *)((longlong)param_1 + 0x30)),
                  (void *)((longlong)(iVar11 - iVar26) * 0x38 +
                          *(longlong *)((longlong)param_1 + 0x30)),(longlong)iVar26 * 0x38);
          iVar11 = *(int *)((longlong)param_1 + 0x38);
        }
        *(int *)((longlong)param_1 + 0x38) = iVar11 + -1;
      }
      FUN_146caa690(plVar28);
    }
    else {
      FUN_1429e5088(*(longlong *)((longlong)param_1 + 0xc0),lVar12,param_2);
    }
    puVar31[1] = 0xffffffff;
    puVar31 = puVar31 + 3;
    goto LAB_140c0cc8b;
  }
  goto LAB_140c0de75;
LAB_140c0cccf:
  local_d0 = uVar14;
  uStack_cc = uVar16;
  FUN_1429e5088(lVar17,lVar12,param_2);
  lVar12 = *(longlong *)((longlong)param_1 + 0xc0);
LAB_140c0d4ad:
  FUN_1429e5874(lVar12,&local_d0,param_2,param_3);
  puVar31[1] = local_d0;
  goto LAB_140c0de68;
LAB_140c0d39d:
  do {
    if ((longlong)auVar61._0_8_ <= (longlong)local_158) {
      uVar14 = ((uint)plVar20 & 0xff00) << 8 | (uint)plVar20 & 0xff;
      uVar14 = (uVar14 << 4 | uVar14) & 0xf0f0f0f;
      uVar14 = (uVar14 * 4 | uVar14) & 0x33333333;
      lVar17 = (longlong)auVar61._0_8_;
      do {
        uVar15 = ((uint)lVar17 & 0xff00) << 8 | (uint)lVar17 & 0xff;
        uVar15 = (uVar15 << 4 | uVar15) & 0xf0f0f0f;
        uVar15 = (uVar15 * 4 | uVar15) & 0x33333333;
        cVar10 = FUN_146e3606a(&local_e8,
                               (uVar15 * 2 | uVar15 * 4) & 0xaaaaaaaa |
                               (uVar14 * 2 | uVar14) & 0x55555555);
        if (cVar10 == '\0') goto LAB_140c0d450;
        lVar17 = lVar17 + 1;
      } while (lVar12 != lVar17);
    }
    bVar33 = plVar20 != local_160;
    plVar20 = (longlong *)((longlong)plVar20 + 1);
  } while (bVar33);
LAB_140c0d450:
  uVar15 = *(uint *)((longlong)param_1 + 0xb8);
  *(uint *)((longlong)param_1 + 0xb8) = uVar15 + 1;
  if (*(uint *)((longlong)param_1 + 0xbc) < uVar15 + 1) {
    FUN_1446f48e2((longlong *)((longlong)param_1 + 0xb0),uVar15);
  }
  *(uint *)(*(longlong *)((longlong)param_1 + 0xb0) + (longlong)(int)uVar15 * 4) = local_d4;
LAB_140c0d48a:
  uVar24 = (ulonglong)local_14c;
  lVar12 = local_138;
  pdVar30 = local_130;
  uVar14 = local_d0;
  uVar16 = uStack_cc;
LAB_140c0de37:
  uStack_cc = uVar16;
  local_d0 = uVar14;
  puVar31[3] = uVar15;
  uVar14 = local_d0;
  uVar16 = uStack_cc;
LAB_140c0de3b:
  uStack_cc = uVar16;
  local_d0 = uVar14;
  lVar17 = *(longlong *)((longlong)param_1 + 0x30);
  lVar12 = lVar12 * 0x38;
  *(double *)(lVar17 + 0x18 + lVar12) = param_3[2];
  dVar34 = param_3[1];
  pdVar2 = (double *)(lVar17 + 8 + lVar12);
  *pdVar2 = *param_3;
  pdVar2[1] = dVar34;
  dVar34 = pdVar30[1];
  pdVar2 = (double *)(lVar17 + 0x20 + lVar12);
  *pdVar2 = *pdVar30;
  pdVar2[1] = dVar34;
  *(double *)(lVar17 + 0x30 + lVar12) = pdVar30[2];
  uVar18 = uVar24;
LAB_140c0de68:
  uVar14 = *puVar31;
  if (uVar14 != 0xffffffff) {
    iVar11 = *(int *)((longlong)param_1 + 0x110);
    if ((int)(uVar14 + 1) < iVar11) {
      *(uint *)(*(longlong *)((longlong)param_1 + 0x118) +
               (longlong)
               *(int *)(*(longlong *)((longlong)param_1 + 0x108) + -0x38 + (longlong)iVar11 * 0x38)
               * 0x18) = uVar14;
      uVar14 = *puVar31;
      iVar11 = *(int *)((longlong)param_1 + 0x110);
    }
    iVar19 = ~uVar14 + iVar11;
    if (iVar19 != 0) {
      iVar26 = 1;
      if (iVar19 < 1) {
        iVar26 = iVar19;
      }
      memmove((void *)((longlong)(int)uVar14 * 0x38 + *(longlong *)((longlong)param_1 + 0x108)),
              (void *)((longlong)(iVar11 - iVar26) * 0x38 + *(longlong *)((longlong)param_1 + 0x108)
                      ),(longlong)iVar26 * 0x38);
      iVar11 = *(int *)((longlong)param_1 + 0x110);
    }
    *(int *)((longlong)param_1 + 0x110) = iVar11 + -1;
    FUN_146caa690((longlong)param_1 + 0x108);
LAB_140c0cc8b:
    *puVar31 = 0xffffffff;
  }
LAB_140c0de75:
  if (((*(longlong *)((longlong)param_1 + 0xc0) == 0) &&
      (*(char *)((longlong)param_1 + 0x40) == '\0')) &&
     (DAT_14c75efe4 < *(int *)((longlong)param_1 + 0x38))) {
    FUN_1429e5b6a(param_1);
  }
LAB_140c0de98:
  *(undefined1 *)((longlong)param_1 + 0x180) = 0;
  if ((local_b0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 140c0e1fe FUN_140c0e1fe body=2253 status=ok
// SIG undefined FUN_140c0e1fe(void)

void FUN_140c0e1fe(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_158 [32];
  longlong *local_138;
  int local_12c;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  undefined8 local_110;
  float fStack_108;
  float afStack_104 [4];
  int local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined1 *)(param_1 + 0xc) = 0;
  uVar6 = *(uint *)(param_2 + 1);
  uVar8 = (ulonglong)uVar6;
  uVar3 = (longlong)(int)uVar6 / (longlong)*(int *)(param_1 + 0x120);
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3 & 0xffffffff,
                  (longlong)(int)uVar6 % (longlong)*(int *)(param_1 + 0x120) & 0xffffffff);
  }
  lVar7 = param_1 + 0x148;
  if (*(int *)(param_1 + 0x154) < (int)uVar3) {
    FUN_14481578e(lVar7,uVar3 & 0xffffffff);
  }
  local_12c = FUN_14096939a(param_1);
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8);
  }
  lVar1 = *(longlong *)(param_1 + 0x168) + (longlong)local_12c * 0x90;
  lVar11 = *(longlong *)(param_1 + 0x168) + (longlong)local_12c * 0x90 + 0x20;
  if (*(int *)(lVar1 + 0x2c) < (int)uVar6) {
    FUN_1409694e8(lVar11,uVar6);
  }
  local_138 = (longlong *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x108) = 0;
  local_120 = lVar7;
  if (*(int *)(param_1 + 0x10c) < 0) {
    FUN_1409694e8(local_138,0);
  }
  iVar5 = *(int *)(param_1 + 0x2c);
  FUN_140c0c7b9(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_146ded910(param_1 + 0x20,0);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_146ded8b0(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_1409694e8(param_1 + 0x30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_1402a3552(param_1 + 0x50);
  if (*(int *)(param_1 + 0xac) < 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    FUN_14481578e(param_1 + 0xa0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  if (*(int *)(param_1 + 0xbc) < 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    FUN_14481578e(param_1 + 0xb0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_146e4f166();
  }
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  if (*(int *)(param_1 + 0x11c) < 0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    FUN_145784e7e(param_1 + 0x110,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  QueryPerformanceCounter((LARGE_INTEGER *)&local_110);
  *(double *)(param_1 + 0x138) = (double)local_110 * DAT_14c83f420 + 16777216.0;
  iVar5 = DAT_14c75efb8;
  fVar13 = (float)DAT_14c75efb8;
  *(float *)(param_1 + 200) = fVar13;
  fVar12 = 1.0;
  if (0 < iVar5) {
    fVar12 = 1.0 / fVar13;
  }
  *(float *)(param_1 + 0xcc) = fVar12;
  *(undefined4 *)(param_1 + 0xd0) = DAT_14c75efbc;
  *(undefined4 *)(param_1 + 0xd4) = DAT_14c75efc0;
  *(undefined4 *)(param_1 + 0xd8) = DAT_14c75efc4;
  local_118 = uVar8;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if ((longlong)(int)param_2[1] != 0) {
      plVar10 = (longlong *)*param_2;
      plVar9 = plVar10 + (longlong)(int)param_2[1] * 2;
      iVar5 = 0;
      do {
        lVar11 = (longlong)(int)plVar10[1];
        lVar7 = *(longlong *)(*plVar10 + 0x48);
        lVar1 = *(longlong *)(*plVar10 + 0x70);
        uVar3 = (ulonglong)*(ushort *)(lVar1 + lVar11 * 6);
        afStack_104[0] = *(float *)(lVar7 + uVar3 * 0xc);
        afStack_104[1] = *(float *)(lVar7 + 4 + uVar3 * 0xc);
        afStack_104[2] = *(float *)(lVar7 + 8 + uVar3 * 0xc);
        uVar3 = (ulonglong)*(ushort *)(lVar1 + 2 + lVar11 * 6);
        fVar12 = *(float *)(lVar7 + 8 + uVar3 * 0xc);
        fStack_108 = afStack_104[2];
        if (fVar12 <= afStack_104[2]) {
          fStack_108 = fVar12;
        }
        fVar13 = *(float *)(lVar7 + uVar3 * 0xc);
        fVar16 = *(float *)(lVar7 + 4 + uVar3 * 0xc);
        local_110._4_4_ = afStack_104[1];
        if (fVar16 <= afStack_104[1]) {
          local_110._4_4_ = fVar16;
        }
        local_110._0_4_ = afStack_104[0];
        if (fVar13 <= afStack_104[0]) {
          local_110._0_4_ = fVar13;
        }
        if (afStack_104[2] <= fVar12) {
          afStack_104[2] = fVar12;
        }
        if (afStack_104[1] <= fVar16) {
          afStack_104[1] = fVar16;
        }
        if (afStack_104[0] <= fVar13) {
          afStack_104[0] = fVar13;
        }
        uVar3 = (ulonglong)*(ushort *)(lVar1 + 4 + lVar11 * 6);
        fVar12 = *(float *)(lVar7 + 8 + uVar3 * 0xc);
        if (fVar12 <= fStack_108) {
          fStack_108 = fVar12;
        }
        fVar13 = *(float *)(lVar7 + uVar3 * 0xc);
        fVar16 = *(float *)(lVar7 + 4 + uVar3 * 0xc);
        if (fVar16 <= (float)local_110._4_4_) {
          local_110._4_4_ = fVar16;
        }
        if (fVar13 <= (float)(undefined4)local_110) {
          local_110._0_4_ = fVar13;
        }
        if (afStack_104[2] <= fVar12) {
          afStack_104[2] = fVar12;
        }
        if (afStack_104[1] <= fVar16) {
          afStack_104[1] = fVar16;
        }
        if (afStack_104[0] <= fVar13) {
          afStack_104[0] = fVar13;
        }
        local_f4 = iVar5;
        FUN_1429eb9a8(param_1,&local_f4,&local_110,1);
        iVar5 = iVar5 + 1;
        plVar10 = plVar10 + 2;
      } while (plVar10 != plVar9);
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined8 *)(lVar1 + 4) = 0x7f7fffff7f7fffff;
    *(undefined8 *)(lVar1 + 0xc) = 0xff7fffff7f7fffff;
    *(undefined1 **)(lVar1 + 0x14) = &DAT_ff7fffffff7fffff;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    local_128 = lVar11;
    if ((longlong)(int)param_2[1] != 0) {
      plVar10 = (longlong *)*param_2;
      plVar9 = plVar10 + (longlong)(int)param_2[1] * 2;
      iVar5 = 0;
      do {
        lVar4 = (longlong)(int)plVar10[1];
        lVar7 = *(longlong *)(*plVar10 + 0x48);
        lVar11 = *(longlong *)(*plVar10 + 0x70);
        uVar3 = (ulonglong)*(ushort *)(lVar11 + lVar4 * 6);
        fVar12 = *(float *)(lVar7 + uVar3 * 0xc);
        fVar13 = *(float *)(lVar7 + 4 + uVar3 * 0xc);
        fVar16 = *(float *)(lVar7 + 8 + uVar3 * 0xc);
        uVar3 = (ulonglong)*(ushort *)(lVar11 + 2 + lVar4 * 6);
        fVar19 = *(float *)(lVar7 + 8 + uVar3 * 0xc);
        fVar21 = fVar16;
        if (fVar19 <= fVar16) {
          fVar21 = fVar19;
        }
        fVar17 = *(float *)(lVar7 + uVar3 * 0xc);
        fVar20 = *(float *)(lVar7 + 4 + uVar3 * 0xc);
        fVar23 = fVar13;
        if (fVar20 <= fVar13) {
          fVar23 = fVar20;
        }
        fVar18 = fVar12;
        if (fVar17 <= fVar12) {
          fVar18 = fVar17;
        }
        if (fVar16 <= fVar19) {
          fVar16 = fVar19;
        }
        if (fVar13 <= fVar20) {
          fVar13 = fVar20;
        }
        if (fVar12 <= fVar17) {
          fVar12 = fVar17;
        }
        uVar3 = (ulonglong)*(ushort *)(lVar11 + 4 + lVar4 * 6);
        fVar19 = *(float *)(lVar7 + 8 + uVar3 * 0xc);
        if (fVar19 <= fVar21) {
          fVar21 = fVar19;
        }
        fVar17 = *(float *)(lVar7 + uVar3 * 0xc);
        fVar20 = *(float *)(lVar7 + 4 + uVar3 * 0xc);
        if (fVar20 <= fVar23) {
          fVar23 = fVar20;
        }
        if (fVar17 <= fVar18) {
          fVar18 = fVar17;
        }
        if (fVar16 <= fVar19) {
          fVar16 = fVar19;
        }
        if (fVar13 <= fVar20) {
          fVar13 = fVar20;
        }
        if (fVar12 <= fVar17) {
          fVar12 = fVar17;
        }
        local_110._4_4_ = fVar23;
        local_110._0_4_ = fVar18;
        fStack_108 = fVar21;
        afStack_104[0] = fVar12;
        afStack_104[1] = fVar13;
        afStack_104[2] = fVar16;
        lVar7 = 0;
        do {
          fVar19 = *(float *)((longlong)&local_110 + lVar7 * 4);
          fVar17 = afStack_104[lVar7];
          if (fVar17 < fVar19) {
LAB_140c0e91b:
            local_110 = (LONGLONG)&DAT_ff7fffffff7fffff;
            fStack_108 = -3.4028235e+38;
            afStack_104[0] = 3.4028235e+38;
            afStack_104[1] = 3.4028235e+38;
            afStack_104[2] = 3.4028235e+38;
            goto LAB_140c0e92f;
          }
          iVar2 = _finite((double)fVar19);
          if (iVar2 == 0) goto LAB_140c0e91b;
          iVar2 = _finite((double)fVar17);
          if (iVar2 == 0) goto LAB_140c0e91b;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 3);
        fVar20 = fVar16 - fVar21;
        fVar22 = fVar13 - fVar23;
        fVar17 = fVar12 - fVar18;
        fVar19 = fVar17;
        if ((fVar17 <= fVar22 || fVar17 <= fVar20) && (fVar19 = fVar22, fVar22 <= fVar20)) {
          fVar19 = fVar20;
        }
        if (*(float *)(param_1 + 0x128) <= fVar19 && fVar19 != *(float *)(param_1 + 0x128)) {
LAB_140c0e92f:
          iVar2 = *(int *)(param_1 + 0x108);
          *(uint *)(param_1 + 0x108) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x10c) < iVar2 + 1U) {
            FUN_140969b20(local_138,iVar2);
          }
          lVar7 = *local_138;
          lVar11 = (longlong)iVar2 * 0x1c;
          *(int *)(lVar7 + lVar11) = iVar5;
          *(LARGE_INTEGER *)(lVar7 + 4 + lVar11) = local_110;
          *(float *)(lVar7 + 0xc + lVar11) = fStack_108;
          *(ulonglong *)(lVar7 + 0x10 + lVar11) = CONCAT44(afStack_104[1],afStack_104[0]);
          *(float *)(lVar7 + 0x18 + lVar11) = afStack_104[2];
        }
        else {
          iVar2 = *(int *)(lVar1 + 0x28);
          uVar6 = iVar2 + 1;
          *(uint *)(lVar1 + 0x28) = uVar6;
          if (*(uint *)(lVar1 + 0x2c) < uVar6) {
            FUN_140969b20(local_128,iVar2);
          }
          lVar7 = *(longlong *)(lVar1 + 0x20);
          lVar11 = (longlong)iVar2 * 0x1c;
          *(int *)(lVar7 + lVar11) = iVar5;
          *(float *)(lVar7 + 0xc + lVar11) = fStack_108;
          *(LARGE_INTEGER *)(lVar7 + 4 + lVar11) = local_110;
          *(ulonglong *)(lVar7 + 0x10 + lVar11) = CONCAT44(afStack_104[1],afStack_104[0]);
          *(float *)(lVar7 + 0x18 + lVar11) = afStack_104[2];
          fVar19 = *(float *)(lVar1 + 0xc);
          if (fVar21 <= *(float *)(lVar1 + 0xc)) {
            fVar19 = fVar21;
          }
          fVar15 = *(float *)(lVar1 + 8);
          if (fVar23 <= *(float *)(lVar1 + 8)) {
            fVar15 = fVar23;
          }
          fVar14 = *(float *)(lVar1 + 4);
          if (fVar18 <= *(float *)(lVar1 + 4)) {
            fVar14 = fVar18;
          }
          *(float *)(lVar1 + 4) = fVar14;
          *(float *)(lVar1 + 8) = fVar15;
          *(float *)(lVar1 + 0xc) = fVar19;
          fVar19 = *(float *)(lVar1 + 0x18);
          if (*(float *)(lVar1 + 0x18) <= fVar16) {
            fVar19 = fVar16;
          }
          fVar16 = *(float *)(lVar1 + 0x14);
          if (*(float *)(lVar1 + 0x14) <= fVar13) {
            fVar16 = fVar13;
          }
          fVar13 = *(float *)(lVar1 + 0x10);
          if (*(float *)(lVar1 + 0x10) <= fVar12) {
            fVar13 = fVar12;
          }
          *(float *)(lVar1 + 0x10) = fVar13;
          *(float *)(lVar1 + 0x14) = fVar16;
          *(float *)(lVar1 + 0x18) = fVar19;
          fVar21 = fVar20 * 0.5 + fVar21;
          fVar23 = fVar22 * 0.5 + fVar23;
          fVar18 = fVar17 * 0.5 + fVar18;
          fVar13 = fVar21 - *(float *)(lVar1 + 0x38);
          fVar12 = fVar23 - *(float *)(lVar1 + 0x34);
          fVar19 = (float)(int)uVar6;
          fVar16 = fVar18 - *(float *)(lVar1 + 0x30);
          fVar20 = fVar16 / fVar19 + *(float *)(lVar1 + 0x30);
          *(float *)(lVar1 + 0x30) = fVar20;
          fVar17 = fVar12 / fVar19 + *(float *)(lVar1 + 0x34);
          *(float *)(lVar1 + 0x34) = fVar17;
          fVar19 = fVar13 / fVar19 + *(float *)(lVar1 + 0x38);
          *(float *)(lVar1 + 0x38) = fVar19;
          *(float *)(lVar1 + 0x3c) = (fVar18 - fVar20) * fVar16 + *(float *)(lVar1 + 0x3c);
          *(float *)(lVar1 + 0x40) = (fVar23 - fVar17) * fVar12 + *(float *)(lVar1 + 0x40);
          *(float *)(lVar1 + 0x44) = (fVar21 - fVar19) * fVar13 + *(float *)(lVar1 + 0x44);
        }
        iVar5 = iVar5 + 1;
        plVar10 = plVar10 + 2;
      } while (plVar10 != plVar9);
    }
    *(int *)(param_1 + 0x130) = (int)local_118;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    iVar5 = *(int *)(param_1 + 0x150);
    *(uint *)(param_1 + 0x150) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x154) < iVar5 + 1U) {
      FUN_1446f48e2(local_120,iVar5);
    }
    *(int *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar5 * 4) = local_12c;
    FUN_1409685f4(param_1);
  }
  if ((local_f0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c0eace FUN_140c0eace body=3952 status=ok
// SIG undefined FUN_140c0eace(void)

void FUN_140c0eace(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  uint *puVar21;
  char cVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  bool bVar31;
  int iVar32;
  longlong lVar33;
  longlong lVar34;
  bool bVar35;
  undefined1 auVar36 [16];
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  longlong *local_298;
  longlong local_290;
  longlong local_288;
  longlong *local_280;
  longlong local_278;
  longlong local_270;
  uint local_264;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  ulonglong local_248;
  ulonglong local_240;
  longlong local_238;
  undefined4 local_230;
  int local_22c;
  undefined4 *local_228;
  undefined8 uStack_220;
  longlong local_218 [5];
  undefined1 local_1ec [4];
  int *local_1e8;
  undefined4 *puStack_1e0;
  undefined1 local_1d8 [16];
  longlong local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined4 uStack_1b8;
  undefined4 local_1b4;
  longlong local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  uint *puStack_190;
  undefined1 local_188 [16];
  longlong local_178;
  undefined4 local_170;
  uint local_16c;
  undefined4 uStack_168;
  int local_164;
  undefined1 local_160 [8];
  undefined1 *local_158;
  int local_150;
  longlong local_148;
  ulonglong uStack_140;
  undefined1 local_138 [16];
  longlong local_128;
  undefined4 local_120;
  uint local_11c;
  undefined4 uStack_118;
  int local_114;
  undefined1 local_110 [8];
  undefined1 *local_108;
  int local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_280 = (longlong *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) < 0) {
    FUN_14062787a(local_280,0);
  }
  local_278 = param_1 + 0xf0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) < 0) {
    FUN_1406275f6(local_278,0);
  }
  local_218[2] = 0;
  local_218[3] = 0;
  local_218[0] = 0;
  local_218[1] = 0;
  plVar11 = *(longlong **)(param_1 + 200);
  if (plVar11 == (longlong *)0x0) {
    uVar30 = 0;
    lVar34 = 0;
  }
  else {
    lVar34 = *plVar11;
    uVar27 = *(uint *)(plVar11 + 1);
    uVar30 = (ulonglong)uVar27;
    *plVar11 = 0;
    plVar11[1] = 0;
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar30);
    }
    if (*(int *)(*(longlong *)(param_1 + 200) + 0xc) < (int)uVar27) {
      FUN_14481578e(*(longlong *)(param_1 + 200),uVar27);
    }
  }
  lVar29 = *(longlong *)(param_1 + 0xb8);
  uVar27 = *(uint *)(param_1 + 0xc0);
  local_248 = (ulonglong)uVar27;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_248);
  }
  local_298 = (longlong *)(param_1 + 0xb8);
  if (local_248 != 0) {
    FUN_1448759c8(local_298,local_248);
  }
  iVar32 = *(int *)(param_2 + 0x18);
  local_290 = lVar29;
  local_288 = lVar34;
  local_240 = uVar30;
  if (iVar32 == 1) {
    lVar33 = (longlong)*(int *)(*(longlong *)(param_2 + 0x10) + 0x30);
    if (*(int *)(*(longlong *)(param_2 + 0x20) + 8 + lVar33 * 0x18) != 0) {
      plVar11 = (longlong *)(*(longlong *)(param_2 + 0x20) + lVar33 * 0x18);
      iVar32 = *(int *)(param_1 + 0xe8);
      *(uint *)(param_1 + 0xe8) = iVar32 + 1U;
      if (*(uint *)(param_1 + 0xec) < iVar32 + 1U) {
        FUN_140c0fee4(local_280,iVar32);
      }
      lVar34 = *(longlong *)(param_1 + 0xe0);
      lVar29 = (longlong)iVar32 * 0x50;
      *(undefined8 *)(lVar34 + lVar29) = 0x7f7fc99e7f7fc99e;
      ((undefined8 *)(lVar34 + lVar29))[1] = 0x7f7fc99e7f7fc99e;
      puVar1 = (undefined8 *)(lVar34 + 0x10 + lVar29);
      *puVar1 = 0xff7fc99eff7fc99e;
      puVar1[1] = 0xff7fc99eff7fc99e;
      puVar1 = (undefined8 *)(lVar34 + 0x20 + lVar29);
      *puVar1 = 0x7f7fc99e7f7fc99e;
      puVar1[1] = 0x7f7fc99e7f7fc99e;
      puVar1 = (undefined8 *)(lVar34 + 0x30 + lVar29);
      *puVar1 = 0xff7fc99eff7fc99e;
      puVar1[1] = 0xff7fc99eff7fc99e;
      puVar1 = (undefined8 *)(lVar34 + 0x40 + lVar29);
      *puVar1 = 0xffffffff00000000;
      puVar1[1] = 0;
      *(int *)(lVar34 + 0x48 + lVar29) = (int)plVar11[1];
      auVar36._0_4_ = (float)*(double *)(param_1 + 0x88);
      auVar36._4_4_ = (float)*(double *)(param_1 + 0x90);
      auVar36._8_4_ = (float)*(double *)(param_1 + 0x98);
      auVar36._12_4_ = 0;
      dVar8 = *(double *)(param_1 + 0xb0);
      dVar19 = *(double *)(param_1 + 0xa0);
      dVar20 = *(double *)(param_1 + 0xa8);
      *(undefined1 (*) [16])(lVar34 + lVar29) = auVar36;
      auVar17._4_4_ = (float)dVar20;
      auVar17._0_4_ = (float)dVar19;
      auVar17._8_4_ = (float)dVar8;
      auVar17._12_4_ = 0;
      *(undefined1 (*) [16])(lVar34 + 0x10 + lVar29) = auVar17;
      lVar34 = plVar11[1];
      if ((longlong)(int)lVar34 != 0) {
        lVar29 = *plVar11;
        lVar33 = 0;
        do {
          uVar2 = *(undefined4 *)(lVar29 + 0xc + lVar33);
          uVar3 = *(undefined4 *)(lVar29 + 8 + lVar33);
          uVar4 = *(undefined4 *)(lVar29 + 4 + lVar33);
          uVar5 = *(undefined4 *)(lVar29 + 0x18 + lVar33);
          uVar6 = *(undefined4 *)(lVar29 + 0x14 + lVar33);
          uVar7 = *(undefined4 *)(lVar29 + 0x10 + lVar33);
          iVar32 = *(int *)(param_1 + 0xf8);
          *(uint *)(param_1 + 0xf8) = iVar32 + 1U;
          if (*(uint *)(param_1 + 0xfc) < iVar32 + 1U) {
            FUN_140c0faee(local_278,iVar32);
          }
          lVar25 = *(longlong *)(param_1 + 0xf0);
          auVar14._4_4_ = uVar3;
          auVar14._0_4_ = uVar4;
          auVar14._8_4_ = uVar2;
          auVar14._12_4_ = 0;
          *(undefined1 (*) [16])(lVar25 + (longlong)iVar32 * 0x20) = auVar14;
          auVar18._4_4_ = uVar6;
          auVar18._0_4_ = uVar7;
          auVar18._8_4_ = uVar5;
          auVar18._12_4_ = 0;
          *(undefined1 (*) [16])(lVar25 + 0x10 + (longlong)iVar32 * 0x20) = auVar18;
          FUN_140c0fa3f(local_218 + 2,local_218,param_1 + 0x60,*(undefined4 *)(lVar29 + lVar33));
          if (((int)local_240 != 0) &&
             (plVar11 = *(longlong **)(param_1 + 200), plVar11 != (longlong *)0x0)) {
            iVar32 = *(int *)(lVar29 + lVar33);
            iVar9 = (int)plVar11[1];
            *(uint *)(plVar11 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)plVar11 + 0xc) < iVar9 + 1U) {
              FUN_1446f48e2(plVar11,iVar9);
            }
            *(undefined4 *)(*plVar11 + (longlong)iVar9 * 4) =
                 *(undefined4 *)(local_288 + (longlong)iVar32 * 4);
          }
          uVar27 = *(uint *)(lVar29 + lVar33);
          if (uVar27 < (uint)local_248) {
            iVar32 = *(int *)(param_1 + 0xc0);
            *(uint *)(param_1 + 0xc0) = iVar32 + 1U;
            if (*(uint *)(param_1 + 0xc4) < iVar32 + 1U) {
              FUN_14488eebe(local_298,iVar32);
            }
            *(undefined2 *)(*local_298 + (longlong)iVar32 * 2) =
                 *(undefined2 *)(local_290 + (ulonglong)uVar27 * 2);
          }
          lVar33 = lVar33 + 0x1c;
        } while ((longlong)(int)lVar34 * 0x1c != lVar33);
      }
      if (*(char *)(param_1 + 0x80) == '\0') {
        FUN_140c0fd24(param_1 + 0x60,local_218);
        lVar34 = local_288;
        lVar29 = local_290;
      }
      else {
        FUN_146e3fe7a(param_1 + 0x60,local_218 + 2);
        lVar34 = local_288;
        lVar29 = local_290;
      }
    }
  }
  else {
    local_128 = 0;
    local_120 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_11c = 0x80;
    uStack_118 = 0xffffffff;
    local_114 = 0;
    local_108 = (undefined1 *)0x0;
    local_100 = 0;
    local_270 = param_2;
    if (0 < iVar32) {
      lVar34 = 0x3c;
      uVar30 = 0;
      do {
        if ((*(byte *)(*(longlong *)(param_2 + 0x10) + lVar34) & 1) != 0) {
          uVar27 = *(uint *)(*(longlong *)(param_2 + 0x10) + -0xc + lVar34);
          FUN_1405dc782(&local_148,&local_198);
          puVar21 = puStack_190;
          param_2 = local_270;
          *puStack_190 = (uint)uVar30;
          puStack_190[1] = uVar27;
          puStack_190[2] = 0xffffffff;
          local_1e8 = (int *)CONCAT44(local_1e8._4_4_,(undefined4)local_198);
          local_2a8 = 0;
          cVar22 = FUN_140263f5a(&local_148,uVar30 & 0xffffffff,puStack_190);
          if (cVar22 == '\0') {
            uVar27 = (int)uStack_140 - local_114;
            iVar32 = 1;
            if (3 < uVar27) {
              uVar23 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
              lVar29 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar29 == 0; lVar29 = lVar29 + -1) {
                }
              }
              iVar32 = 1 << ((byte)lVar29 & 0x1f);
            }
            if (((int)uVar27 < 1) || (iVar32 <= local_100)) {
              uVar27 = (uint)uVar30 & local_100 + 0x7fffffffU;
              puVar21[3] = uVar27;
              puVar24 = local_108;
              if (local_108 == (undefined1 *)0x0) {
                puVar24 = local_110;
              }
              puVar21[2] = *(uint *)(puVar24 + (ulonglong)(local_100 + 0x7fffffffU & uVar27) * 4);
              puVar24 = local_108;
              if (local_108 == (undefined1 *)0x0) {
                puVar24 = local_110;
              }
              *(undefined4 *)(puVar24 + (ulonglong)(local_100 + 0x7fffffffU & uVar27) * 4) =
                   local_1e8._0_4_;
            }
            else {
              local_100 = iVar32;
              FUN_140264164(&local_148);
            }
          }
          iVar32 = *(int *)(param_2 + 0x18);
        }
        uVar30 = uVar30 + 1;
        lVar34 = lVar34 + 0x40;
      } while ((longlong)uVar30 < (longlong)iVar32);
    }
    local_228 = (undefined4 *)0x0;
    uStack_220 = 1;
    FUN_1446f48e2(&local_228,0);
    *local_228 = 0;
    local_178 = 0;
    local_170 = 0;
    local_198 = 0;
    puStack_190 = (uint *)0x0;
    local_16c = 0x80;
    uStack_168 = 0xffffffff;
    local_164 = 0;
    local_158 = (undefined1 *)0x0;
    local_150 = 0;
    if ((int)uStack_220 != 0) {
      local_238 = param_1 + 0x60;
      iVar32 = 0;
      do {
        iVar9 = local_228[(longlong)(int)uStack_220 + -1];
        uStack_220 = CONCAT44(uStack_220._4_4_,(int)uStack_220 + -1);
        FUN_14479f406();
        lVar34 = *(longlong *)(param_2 + 0x10);
        local_22c = iVar9;
        if ((*(byte *)(lVar34 + 0x3c + (longlong)iVar9 * 0x40) & 1) == 0) {
          local_230 = *(undefined4 *)(param_1 + 0xe8);
          local_1e8 = &local_22c;
          puStack_1e0 = &local_230;
          FUN_140c0fbee(&local_198,local_1ec,&local_1e8);
          iVar10 = *(int *)(param_1 + 0xe8);
          *(uint *)(param_1 + 0xe8) = iVar10 + 1U;
          if (*(uint *)(param_1 + 0xec) < iVar10 + 1U) {
            FUN_140c0fee4(local_280,iVar10);
          }
          lVar34 = lVar34 + (longlong)iVar9 * 0x40;
          lVar33 = *local_280;
          lVar25 = (longlong)iVar10 * 0x50;
          lVar29 = lVar33 + lVar25;
          *(undefined8 *)(lVar33 + lVar25) = 0x7f7fc99e7f7fc99e;
          ((undefined8 *)(lVar33 + lVar25))[1] = 0x7f7fc99e7f7fc99e;
          puVar1 = (undefined8 *)(lVar33 + 0x10 + lVar25);
          *puVar1 = 0xff7fc99eff7fc99e;
          puVar1[1] = 0xff7fc99eff7fc99e;
          puVar1 = (undefined8 *)(lVar33 + 0x20 + lVar25);
          *puVar1 = 0x7f7fc99e7f7fc99e;
          puVar1[1] = 0x7f7fc99e7f7fc99e;
          puVar1 = (undefined8 *)(lVar33 + 0x30 + lVar25);
          *puVar1 = 0xff7fc99eff7fc99e;
          puVar1[1] = 0xff7fc99eff7fc99e;
          puVar1 = (undefined8 *)(lVar33 + 0x40 + lVar25);
          *puVar1 = 0xffffffffffffffff;
          puVar1[1] = 0;
          lVar33 = 1;
          local_260 = lVar29;
          local_258 = lVar34;
          do {
            uVar2 = *(undefined4 *)(lVar34 + 0x14 + lVar33 * 0x18);
            uVar3 = *(undefined4 *)(lVar34 + 0x10 + lVar33 * 0x18);
            uVar4 = *(undefined4 *)(lVar34 + 0xc + lVar33 * 0x18);
            auVar12._4_4_ = *(undefined4 *)(lVar34 + 4 + lVar33 * 0x18);
            auVar12._0_4_ = *(undefined4 *)(lVar34 + lVar33 * 0x18);
            auVar12._8_4_ = *(undefined4 *)(lVar34 + 8 + lVar33 * 0x18);
            auVar12._12_4_ = 0;
            *(undefined1 (*) [16])(lVar29 + lVar33 * 0x20) = auVar12;
            auVar15._4_4_ = uVar3;
            auVar15._0_4_ = uVar4;
            auVar15._8_4_ = uVar2;
            auVar15._12_4_ = 0;
            *(undefined1 (*) [16])(lVar29 + 0x10 + lVar33 * 0x20) = auVar15;
            uVar27 = *(uint *)(lVar34 + 0x30 + lVar33 * 4);
            *(uint *)(lVar29 + 0x40 + lVar33 * 4) = uVar27;
            if ((-1 < (int)uVar27) && ((int)uVar27 < *(int *)(param_2 + 0x18))) {
              local_264 = uVar27;
              if ((int)uStack_140 != local_114) {
                puVar24 = local_108;
                if (local_108 == (undefined1 *)0x0) {
                  puVar24 = local_110;
                }
                iVar9 = *(int *)(puVar24 + (ulonglong)(local_100 + 0x7fffffffU & uVar27) * 4);
                while (iVar9 != -1) {
                  lVar25 = local_148 + (longlong)iVar9 * 0x10;
                  if (*(uint *)(local_148 + (longlong)iVar9 * 0x10) == uVar27) {
                    if ((lVar25 != 0) && ((int *)(lVar25 + 4) != (int *)0x0)) {
                      lVar26 = (longlong)*(int *)(lVar25 + 4);
                      lVar25 = *(longlong *)(param_2 + 0x20);
                      *(int *)(lVar29 + 0x40 + lVar33 * 4) = iVar32;
                      *(undefined4 *)(lVar29 + 0x48 + lVar33 * 4) =
                           *(undefined4 *)(lVar25 + 8 + lVar26 * 0x18);
                      local_1c8 = 0;
                      local_1c0 = 0;
                      local_1e8 = (int *)0x0;
                      puStack_1e0 = (undefined4 *)0x0;
                      local_1bc = 0x80;
                      uStack_1b8 = 0xffffffff;
                      local_1b4 = 0;
                      local_1a8 = 0;
                      local_1a0 = 0;
                      lVar28 = (longlong)*(int *)(lVar25 + 8 + lVar26 * 0x18);
                      if (lVar28 != 0) {
                        lVar34 = *(longlong *)(lVar25 + lVar26 * 0x18);
                        lVar29 = 0;
                        local_250 = lVar33;
                        do {
                          uVar2 = *(undefined4 *)(lVar34 + 0xc + lVar29);
                          uVar3 = *(undefined4 *)(lVar34 + 8 + lVar29);
                          uVar4 = *(undefined4 *)(lVar34 + 4 + lVar29);
                          uVar5 = *(undefined4 *)(lVar34 + 0x18 + lVar29);
                          uVar6 = *(undefined4 *)(lVar34 + 0x14 + lVar29);
                          uVar7 = *(undefined4 *)(lVar34 + 0x10 + lVar29);
                          iVar9 = *(int *)(param_1 + 0xf8);
                          *(uint *)(param_1 + 0xf8) = iVar9 + 1U;
                          if (*(uint *)(param_1 + 0xfc) < iVar9 + 1U) {
                            FUN_140c0faee(local_278,iVar9);
                          }
                          lVar33 = *(longlong *)(param_1 + 0xf0);
                          auVar13._4_4_ = uVar3;
                          auVar13._0_4_ = uVar4;
                          auVar13._8_4_ = uVar2;
                          auVar13._12_4_ = 0;
                          *(undefined1 (*) [16])(lVar33 + (longlong)iVar9 * 0x20) = auVar13;
                          auVar16._4_4_ = uVar6;
                          auVar16._0_4_ = uVar7;
                          auVar16._8_4_ = uVar5;
                          auVar16._12_4_ = 0;
                          *(undefined1 (*) [16])(lVar33 + 0x10 + (longlong)iVar9 * 0x20) = auVar16;
                          FUN_140c0fa3f(local_218 + 2,local_218,local_238);
                          if (((int)local_240 != 0) &&
                             (plVar11 = *(longlong **)(param_1 + 200), plVar11 != (longlong *)0x0))
                          {
                            iVar9 = *(int *)(lVar34 + lVar29);
                            iVar10 = (int)plVar11[1];
                            *(uint *)(plVar11 + 1) = iVar10 + 1U;
                            if (*(uint *)((longlong)plVar11 + 0xc) < iVar10 + 1U) {
                              FUN_1446f48e2(plVar11,iVar10);
                            }
                            *(undefined4 *)(*plVar11 + (longlong)iVar10 * 4) =
                                 *(undefined4 *)(local_288 + (longlong)iVar9 * 4);
                          }
                          uVar27 = *(uint *)(lVar34 + lVar29);
                          if (uVar27 < (uint)local_248) {
                            iVar9 = *(int *)(param_1 + 0xc0);
                            *(uint *)(param_1 + 0xc0) = iVar9 + 1U;
                            if (*(uint *)(param_1 + 0xc4) < iVar9 + 1U) {
                              FUN_14488eebe(local_298,iVar9);
                            }
                            *(undefined2 *)(*local_298 + (longlong)iVar9 * 2) =
                                 *(undefined2 *)(local_290 + (ulonglong)uVar27 * 2);
                          }
                          iVar32 = iVar32 + 1;
                          lVar29 = lVar29 + 0x1c;
                        } while (lVar28 * 0x1c != lVar29);
                        local_1a0 = 0;
                        param_2 = local_270;
                        lVar33 = local_250;
                        lVar29 = local_260;
                        lVar34 = local_258;
                        if (local_1a8 != 0) {
                          FUN_1400020a8();
                          param_2 = local_270;
                          lVar33 = local_250;
                          lVar29 = local_260;
                          lVar34 = local_258;
                        }
                      }
                      uVar30 = (ulonglong)puStack_1e0 >> 0x20;
                      puStack_1e0 = (undefined4 *)((ulonglong)puStack_1e0 & 0xffffffff00000000);
                      if ((int)uVar30 != 0) {
                        FUN_14472eb64(&local_1e8,0);
                      }
                      uStack_1b8 = 0xffffffff;
                      local_1b4 = 0;
                      local_1c0 = 0;
                      if (0x80 < local_1bc) {
                        local_1bc = 0x80;
                        FUN_1446efbd8(local_1d8,0);
                      }
                      if (local_1c8 != 0) {
                        FUN_1400020a8();
                      }
                      if (local_1e8 != (int *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    break;
                  }
                  iVar9 = *(int *)(lVar25 + 8);
                }
              }
              uVar30 = uStack_220;
              lVar25 = (longlong)(int)uStack_220;
              uVar27 = (int)uStack_220 + 1;
              uStack_220 = CONCAT44(uStack_220._4_4_,uVar27);
              if (uStack_220._4_4_ < uVar27) {
                FUN_1446f48e2(&local_228,uVar30 & 0xffffffff);
              }
              local_228[lVar25] = local_264;
            }
            bVar35 = lVar33 != 0;
            lVar33 = lVar33 + -1;
          } while (bVar35);
        }
      } while ((int)uStack_220 != 0);
    }
    if (0 < *(int *)(param_1 + 0xe8)) {
      lVar34 = 0;
      do {
        lVar29 = lVar34 * 0x50 + *local_280;
        lVar33 = 0;
        bVar35 = true;
        do {
          bVar31 = bVar35;
          if ((*(int *)(lVar29 + 0x48 + lVar33 * 4) < 1) && ((int)puStack_190 != local_164)) {
            uVar27 = *(uint *)(lVar29 + 0x40 + lVar33 * 4);
            puVar24 = local_158;
            if (local_158 == (undefined1 *)0x0) {
              puVar24 = local_160;
            }
            iVar32 = *(int *)(puVar24 + (ulonglong)(local_150 - 1U & uVar27) * 4);
            while (iVar32 != -1) {
              lVar25 = local_198 + (longlong)iVar32 * 0x10;
              if (*(uint *)(local_198 + (longlong)iVar32 * 0x10) == uVar27) {
                if ((undefined4 *)(lVar25 + 4) != (undefined4 *)0x0 && lVar25 != 0) {
                  *(undefined4 *)(lVar29 + 0x40 + lVar33 * 4) = *(undefined4 *)(lVar25 + 4);
                }
                break;
              }
              iVar32 = *(int *)(lVar25 + 8);
            }
          }
          lVar33 = 1;
          bVar35 = false;
        } while (bVar31);
        lVar34 = lVar34 + 1;
      } while (lVar34 < *(int *)(param_1 + 0xe8));
    }
    if (*(char *)(param_1 + 0x80) == '\0') {
      FUN_140c0fd24(param_1 + 0x60,local_218);
    }
    else {
      FUN_146e3fe7a(param_1 + 0x60,local_218 + 2);
    }
    lVar34 = local_288;
    lVar29 = local_290;
    local_150 = 0;
    if (local_158 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar30 = (ulonglong)puStack_190 >> 0x20;
    puStack_190 = (uint *)((ulonglong)puStack_190 & 0xffffffff00000000);
    if ((int)uVar30 != 0) {
      FUN_14472eb64(&local_198,0);
    }
    uStack_168 = 0xffffffff;
    local_164 = 0;
    local_170 = 0;
    if (0x80 < local_16c) {
      local_16c = 0x80;
      FUN_1446efbd8(local_188,0);
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_198 != 0) {
      FUN_1400020a8();
    }
    if (local_228 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    local_100 = 0;
    if (local_108 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar30 = uStack_140 >> 0x20;
    uStack_140 = uStack_140 & 0xffffffff00000000;
    if ((int)uVar30 != 0) {
      FUN_14472eb64(&local_148,0);
    }
    uStack_118 = 0xffffffff;
    local_114 = 0;
    local_120 = 0;
    if (0x80 < local_11c) {
      local_11c = 0x80;
      FUN_1446efbd8(local_138,0);
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
  }
  if (lVar34 != 0) {
    FUN_1400020a8(lVar34);
  }
  if (lVar29 != 0) {
    FUN_1400020a8(lVar29);
  }
  if (local_218[0] != 0) {
    FUN_1400020a8();
  }
  if (local_218[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c0fa3f FUN_140c0fa3f body=175 status=ok
// SIG undefined FUN_140c0fa3f(void)

void FUN_140c0fa3f(longlong *param_1,longlong *param_2,longlong *param_3,int param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((char)param_3[4] == '\x01') {
    lVar9 = *param_3;
    lVar8 = (longlong)param_4;
    uVar4 = *(undefined4 *)(lVar9 + lVar8 * 0xc);
    uVar5 = *(undefined4 *)(lVar9 + 4 + lVar8 * 0xc);
    uVar6 = *(undefined4 *)(lVar9 + 8 + lVar8 * 0xc);
    iVar7 = (int)param_1[1];
    lVar9 = (longlong)iVar7;
    *(uint *)(param_1 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
      FUN_141087970(param_1,iVar7);
    }
    lVar8 = *param_1;
    *(undefined4 *)(lVar8 + lVar9 * 0xc) = uVar4;
    *(undefined4 *)(lVar8 + 4 + lVar9 * 0xc) = uVar5;
    *(undefined4 *)(lVar8 + 8 + lVar9 * 0xc) = uVar6;
  }
  else {
    lVar9 = param_3[2];
    lVar8 = (longlong)param_4;
    uVar1 = *(undefined2 *)(lVar9 + lVar8 * 6);
    uVar2 = *(undefined2 *)(lVar9 + 2 + lVar8 * 6);
    uVar3 = *(undefined2 *)(lVar9 + 4 + lVar8 * 6);
    iVar7 = (int)param_2[1];
    lVar9 = (longlong)iVar7;
    *(uint *)(param_2 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
      FUN_14172d3d6(param_2,iVar7);
    }
    lVar8 = *param_2;
    *(undefined2 *)(lVar8 + lVar9 * 6) = uVar1;
    *(undefined2 *)(lVar8 + 2 + lVar9 * 6) = uVar2;
    *(undefined2 *)(lVar8 + 4 + lVar9 * 6) = uVar3;
  }
  return;
}



// FUNCTION 140c0faee FUN_140c0faee body=255 status=ok
// SIG undefined FUN_140c0faee(void)

void FUN_140c0faee(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140c0fbee FUN_140c0fbee body=308 status=ok
// SIG undefined FUN_140c0fbee(void)

undefined4 *
FUN_140c0fbee(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405dc782(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  local_48[2] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_140263f5a(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140264164(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c0fd24 FUN_140c0fd24 body=125 status=ok
// SIG undefined FUN_140c0fd24(void)

void FUN_140c0fd24(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405c2e9e(param_1,0);
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_140c0fda2(plVar1,0);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (plVar1 != param_2) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x10) = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 0x18) = (int)param_2[1];
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return;
}



// FUNCTION 140c0fda2 FUN_140c0fda2 body=322 status=ok
// SIG undefined FUN_140c0fda2(void)

void FUN_140c0fda2(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 6;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140c0fe0e;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
      }
    }
LAB_140c0fe0e:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 6)) {
      uVar5 = uVar3 / 6 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,6,2);
  }
  return;
}



// FUNCTION 140c0fee4 FUN_140c0fee4 body=275 status=ok
// SIG undefined FUN_140c0fee4(void)

void FUN_140c0fee4(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x50;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140c0fff8 FUN_140c0fff8 body=1973 status=ok
// SIG undefined FUN_140c0fff8(void)

void FUN_140c0fff8(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  double *pdVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  double dVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  char cVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_128 [32];
  int local_108;
  double *local_100;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  int local_ac;
  int local_a8 [2];
  longlong local_a0;
  longlong *local_98;
  int local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_e8 = (longlong *)(param_1 + 0x150);
  plVar1 = (longlong *)(param_1 + 0x170);
  local_f0 = (longlong *)(param_1 + 0x10);
  local_d0 = param_1 + 0x118;
  local_d8 = param_1 + 0x20;
  local_e0 = param_1 + 0xf4;
  do {
    if (*(int *)(param_1 + 0x158) == 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      break;
    }
    iVar17 = *(int *)(param_1 + 0x158) + -1;
    iVar18 = *(int *)(*local_e8 + (longlong)iVar17 * 4);
    lVar23 = (longlong)iVar18 * 0xf8;
    if (*(int *)(*plVar1 + lVar23) == 2) {
      *(int *)(param_1 + 0x158) = iVar17;
LAB_140c1013b:
      FUN_140c10a08(param_1,iVar18);
      iVar18 = 2;
    }
    else {
      iVar17 = *(int *)(*plVar1 + lVar23 + 0x7c);
      iVar19 = *(int *)(param_1 + 0x18);
      if (iVar19 <= iVar17) {
        *(int *)(param_1 + 0x18) = iVar17 + 1;
        uVar24 = (iVar17 + 1) - iVar19;
        if ((uint)(*(int *)(param_1 + 0x1c) - iVar19) < uVar24) {
          FUN_14008b9bc(local_f0,iVar19);
        }
        FUN_14479f3a2((longlong)iVar19 * 0x70 + *local_f0,uVar24);
      }
      cVar16 = FUN_140c11760(param_1,1);
      if (cVar16 == '\0') break;
      local_a0 = local_d0;
      local_88 = local_d8;
      local_80 = local_f0;
      local_78 = local_e0;
      lVar21 = *(longlong *)(param_1 + 0x170);
      local_a8[0] = iVar17;
      local_98 = plVar1;
      local_90 = iVar18;
      if ((*(int *)(lVar21 + 0x40 + lVar23) <= *(int *)(param_1 + 0x128)) ||
         (*(int *)(param_1 + 300) <= ((int *)(lVar21 + lVar23))[0x1e])) {
        FUN_140c10bc6(local_a8);
        *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + -1;
        goto LAB_140c1013b;
      }
      iVar19 = *(int *)(lVar21 + lVar23);
      if (iVar19 == 0) {
        iVar19 = FUN_140c107b0(param_1);
        iVar20 = FUN_140c107b0();
        *(int *)(*(longlong *)(param_1 + 0x170) + 0xb8 + lVar23) = iVar19;
        *(int *)(*(longlong *)(param_1 + 0x170) + 0xf0 + lVar23) = iVar20;
        lVar21 = *(longlong *)(param_1 + 0x170) + lVar23;
        lVar22 = 0;
        do {
          *(undefined8 *)(lVar21 + 0x88 + lVar22) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar21 + 0x90 + lVar22) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar21 + 0x98 + lVar22) = 0x7fefffffffffffff;
          *(undefined8 *)(lVar21 + 0xa0 + lVar22) = 0xffefffffffffffff;
          *(undefined8 *)(lVar21 + 0xa8 + lVar22) = 0xffefffffffffffff;
          *(undefined8 *)(lVar21 + 0xb0 + lVar22) = 0xffefffffffffffff;
          lVar22 = lVar22 + 0x38;
        } while (lVar22 != 0x70);
        *(undefined4 *)(*plVar1 + 0x80 + lVar23) = 0;
        *(undefined4 *)(*plVar1 + lVar23) = 1;
        lVar21 = *plVar1;
        iVar9 = *(int *)(lVar21 + 0x40 + lVar23);
        iVar27 = iVar9 / 2;
        if (iVar9 < -1) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar27);
        }
        lVar22 = (longlong)iVar19 * 0xf8;
        if (*(int *)(lVar21 + lVar22 + 0x44) < iVar27) {
          FUN_140c108c0(lVar21 + lVar22 + 0x38,iVar27);
          lVar21 = *plVar1;
        }
        lVar26 = (longlong)iVar20 * 0xf8;
        if (*(int *)(lVar21 + 0x44 + lVar26) < iVar27) {
          FUN_140c108c0(lVar21 + lVar26 + 0x38,iVar27);
          lVar21 = *plVar1;
        }
        *(undefined8 *)(lVar21 + 0x58 + lVar22) = 0;
        puVar2 = (undefined8 *)(lVar21 + 0x48 + lVar22);
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar21 = *(longlong *)(param_1 + 0x170);
        *(undefined8 *)(lVar21 + 0x70 + lVar22) = 0;
        puVar2 = (undefined8 *)(lVar21 + 0x60 + lVar22);
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar21 = *(longlong *)(param_1 + 0x170);
        *(undefined8 *)(lVar21 + 0x58 + lVar26) = 0;
        puVar2 = (undefined8 *)(lVar21 + 0x48 + lVar26);
        *puVar2 = 0;
        puVar2[1] = 0;
        lVar21 = *(longlong *)(param_1 + 0x170);
        *(undefined8 *)(lVar21 + 0x70 + lVar26) = 0;
        puVar2 = (undefined8 *)(lVar21 + 0x60 + lVar26);
        *puVar2 = 0;
        puVar2[1] = 0;
        cVar16 = FUN_140c11760(param_1,1);
        if (cVar16 != '\0') {
          lVar21 = *plVar1;
          iVar19 = *(int *)(lVar21 + lVar23);
          goto LAB_140c102c9;
        }
LAB_140c106bc:
        iVar18 = 1;
      }
      else {
LAB_140c102c9:
        if (iVar19 == 1) {
          lVar22 = lVar21 + lVar23;
          if ((DAT_14c75efd0 == '\x01') || (*(int *)(param_1 + 0x138) < 1)) {
            local_ac = *(int *)(lVar21 + 0x40 + lVar23);
          }
          else {
            local_ac = (*(int *)(param_1 + 0x138) - *(int *)(param_1 + 0x13c)) +
                       *(int *)(lVar22 + 0x80);
            if (*(int *)(lVar22 + 0x40) <= local_ac) {
              local_ac = *(int *)(lVar22 + 0x40);
            }
          }
          if (DAT_14c75efc8 == 1) {
            dVar8 = *(double *)(lVar21 + 0x60 + lVar23);
            dVar28 = *(double *)(lVar21 + 0x68 + lVar23);
            dVar29 = *(double *)(lVar21 + 0x70 + lVar23);
            if (dVar28 < dVar8) {
              local_108 = (uint)(dVar8 <= dVar29) * 2;
            }
            else {
              local_108 = (dVar28 <= dVar29) + 1;
            }
          }
          else {
            dVar8 = *(double *)(lVar21 + 0x30 + lVar23) - *(double *)(lVar21 + 0x18 + lVar23);
            dVar29 = *(double *)(lVar21 + 0x28 + lVar23) - *(double *)(lVar21 + 0x10 + lVar23);
            dVar28 = *(double *)(lVar21 + 0x20 + lVar23) - *(double *)(lVar21 + 8 + lVar23);
            local_108 = 0;
            if (dVar28 <= dVar8 || dVar28 <= dVar29) {
              local_108 = (dVar29 <= dVar8) + 1;
            }
          }
          if (DAT_14c75efcc == 1) {
            local_b8 = *(double *)(lVar21 + 0x58 + lVar23);
            pdVar3 = (double *)(lVar21 + 0x48 + lVar23);
            local_c8 = *pdVar3;
            dStack_c0 = pdVar3[1];
          }
          else {
            local_b8 = *(double *)(lVar21 + 0x18 + lVar23);
            local_c8 = *(double *)(lVar21 + 8 + lVar23);
            dStack_c0 = *(double *)(lVar21 + 0x10 + lVar23);
            local_b8 = (*(double *)(lVar21 + 0x30 + lVar23) - local_b8) * 0.5 + local_b8;
            dStack_c0 = (*(double *)(lVar21 + 0x28 + lVar23) - dStack_c0) * 0.5 + dStack_c0;
            local_c8 = (*(double *)(lVar21 + 0x20 + lVar23) - local_c8) * 0.5 + local_c8;
          }
          local_100 = &local_c8;
          FUN_140c113a2(param_1,*(undefined4 *)(lVar22 + 0x80),&local_ac);
          *(int *)(*(longlong *)(param_1 + 0x170) + 0x80 + lVar23) = local_ac;
          cVar16 = FUN_140c11760(param_1,1);
          if (cVar16 == '\0') goto LAB_140c106bc;
          lVar21 = *plVar1;
        }
        iVar19 = *(int *)(lVar21 + 0xb8 + lVar23);
        lVar22 = (longlong)iVar19 * 0xf8;
        if (*(int *)(lVar21 + 0x40 + lVar22) == 0) {
LAB_140c1065e:
          FUN_140c10bc6(local_a8);
          *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + -1;
          FUN_140c10a08(param_1,iVar18);
        }
        else {
          iVar20 = *(int *)(lVar21 + 0xf0 + lVar23);
          lVar26 = (longlong)iVar20 * 0xf8;
          if (*(int *)(lVar21 + 0x40 + lVar26) == 0) goto LAB_140c1065e;
          lVar25 = (longlong)iVar17 * 0x70;
          pbVar4 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x6c + lVar25);
          *pbVar4 = *pbVar4 & 0xfe;
          lVar21 = *(longlong *)(param_1 + 0x10);
          lVar10 = *(longlong *)(param_1 + 0x170);
          *(undefined8 *)(lVar21 + 0x10 + lVar25) = *(undefined8 *)(lVar10 + 0x98 + lVar23);
          puVar2 = (undefined8 *)(lVar10 + 0x88 + lVar23);
          uVar14 = puVar2[1];
          *(undefined8 *)(lVar21 + lVar25) = *puVar2;
          ((undefined8 *)(lVar21 + lVar25))[1] = uVar14;
          *(undefined8 *)(lVar21 + 0x28 + lVar25) = *(undefined8 *)(lVar10 + 0xb0 + lVar23);
          puVar7 = (undefined8 *)(lVar10 + 0xa0 + lVar23);
          uVar14 = puVar7[1];
          puVar2 = (undefined8 *)(lVar21 + 0x18 + lVar25);
          *puVar2 = *puVar7;
          puVar2[1] = uVar14;
          lVar21 = *(longlong *)(param_1 + 0x10);
          lVar10 = *(longlong *)(param_1 + 0x170);
          *(undefined8 *)(lVar10 + 0x18 + lVar22) = *(undefined8 *)(lVar21 + 0x10 + lVar25);
          uVar14 = ((undefined8 *)(lVar21 + lVar25))[1];
          puVar2 = (undefined8 *)(lVar10 + 8 + lVar22);
          *puVar2 = *(undefined8 *)(lVar21 + lVar25);
          puVar2[1] = uVar14;
          *(undefined8 *)(lVar10 + 0x30 + lVar22) = *(undefined8 *)(lVar21 + 0x28 + lVar25);
          puVar2 = (undefined8 *)(lVar21 + 0x18 + lVar25);
          uVar14 = puVar2[1];
          puVar7 = (undefined8 *)(lVar10 + 0x20 + lVar22);
          *puVar7 = *puVar2;
          puVar7[1] = uVar14;
          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar25) =
               *(undefined4 *)(param_1 + 0x18);
          lVar21 = *(longlong *)(param_1 + 0x10);
          lVar10 = *(longlong *)(param_1 + 0x170);
          *(undefined8 *)(lVar21 + 0x40 + lVar25) = *(undefined8 *)(lVar10 + 0xd0 + lVar23);
          puVar7 = (undefined8 *)(lVar10 + 0xc0 + lVar23);
          uVar14 = puVar7[1];
          puVar2 = (undefined8 *)(lVar21 + 0x30 + lVar25);
          *puVar2 = *puVar7;
          puVar2[1] = uVar14;
          *(undefined8 *)(lVar21 + 0x58 + lVar25) = *(undefined8 *)(lVar10 + 0xe8 + lVar23);
          puVar7 = (undefined8 *)(lVar10 + 0xd8 + lVar23);
          uVar14 = puVar7[1];
          puVar2 = (undefined8 *)(lVar21 + 0x48 + lVar25);
          *puVar2 = *puVar7;
          puVar2[1] = uVar14;
          lVar21 = *(longlong *)(param_1 + 0x10);
          lVar10 = *(longlong *)(param_1 + 0x170);
          *(undefined8 *)(lVar10 + 0x18 + lVar26) = *(undefined8 *)(lVar21 + 0x40 + lVar25);
          puVar2 = (undefined8 *)(lVar21 + 0x30 + lVar25);
          uVar14 = puVar2[1];
          puVar7 = (undefined8 *)(lVar10 + 8 + lVar26);
          *puVar7 = *puVar2;
          puVar7[1] = uVar14;
          *(undefined8 *)(lVar10 + 0x30 + lVar26) = *(undefined8 *)(lVar21 + 0x58 + lVar25);
          puVar5 = (undefined4 *)(lVar21 + 0x48 + lVar25);
          uVar11 = puVar5[1];
          uVar12 = puVar5[2];
          uVar13 = puVar5[3];
          puVar6 = (undefined4 *)(lVar10 + 0x20 + lVar26);
          *puVar6 = *puVar5;
          puVar6[1] = uVar11;
          puVar6[2] = uVar12;
          puVar6[3] = uVar13;
          *(int *)(*(longlong *)(param_1 + 0x10) + 100 + lVar25) = *(int *)(param_1 + 0x18) + 1;
          *(int *)(*(longlong *)(param_1 + 0x170) + 0x78 + lVar22) =
               *(int *)(*(longlong *)(param_1 + 0x170) + 0x78 + lVar23) + 1;
          *(int *)(*(longlong *)(param_1 + 0x170) + 0x78 + lVar26) =
               *(int *)(*(longlong *)(param_1 + 0x170) + 0x78 + lVar23) + 1;
          *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x7c + lVar22) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar25);
          *(undefined4 *)(*(longlong *)(param_1 + 0x170) + 0x7c + lVar26) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100 + lVar25);
          iVar18 = *(int *)(param_1 + 0x158);
          *(uint *)(param_1 + 0x158) = iVar18 + 1U;
          if (*(uint *)(param_1 + 0x15c) < iVar18 + 1U) {
            FUN_1446f48e2(local_e8,iVar18);
          }
          *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar18 * 4) = iVar20;
          iVar18 = *(int *)(param_1 + 0x158);
          *(uint *)(param_1 + 0x158) = iVar18 + 1U;
          if (*(uint *)(param_1 + 0x15c) < iVar18 + 1U) {
            FUN_1446f48e2(local_e8,iVar18);
          }
          plVar15 = local_f0;
          *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar18 * 4) = iVar19;
          lVar21 = *(longlong *)(param_1 + 0x10);
          iVar17 = *(int *)(lVar21 + 100 + lVar25) + 1;
          iVar18 = *(int *)(param_1 + 0x18);
          *(int *)(param_1 + 0x18) = iVar17;
          uVar24 = iVar17 - iVar18;
          if ((uint)(*(int *)(param_1 + 0x1c) - iVar18) < uVar24) {
            FUN_14008b9bc(local_f0,iVar18);
            lVar21 = *plVar15;
          }
          FUN_14479f3a2((longlong)iVar18 * 0x70 + lVar21,uVar24);
          *(undefined4 *)(*plVar1 + lVar23) = 2;
        }
        iVar18 = 0;
      }
    }
  } while (iVar18 != 1);
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c107b0 FUN_140c107b0 body=82 status=ok
// SIG undefined FUN_140c107b0(void)

ulonglong FUN_140c107b0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 0x168);
  if ((longlong)iVar1 == 0) {
    uVar3 = FUN_140c10802(param_1 + 0x170,1);
    return uVar3;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x160) + -4 + (longlong)iVar1 * 4);
  *(int *)(param_1 + 0x168) = iVar1 + -1;
  FUN_14479f406(param_1 + 0x160);
  return (ulonglong)uVar2;
}



// FUNCTION 140c10802 FUN_140c10802 body=68 status=ok
// SIG undefined FUN_140c10802(void)

int FUN_140c10802(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_140c11228(param_1,iVar1);
  }
  FUN_140c10846((longlong)iVar1 * 0xf8 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 140c10846 FUN_140c10846 body=121 status=ok
// SIG undefined FUN_140c10846(void)

void FUN_140c10846(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 4) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 6) = 0x7fefffffffffffff;
    *(undefined8 *)(param_1 + 8) = 0xffefffffffffffff;
    *(undefined8 *)(param_1 + 10) = 0xffefffffffffffff;
    *(undefined8 *)(param_1 + 0xc) = 0xffefffffffffffff;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar1 = 0xb0;
    do {
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x28) = 0x7fefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x20) = 0x7fefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x18) = 0x7fefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -0x10) = 0xffefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1 + -8) = 0xffefffffffffffff;
      *(undefined8 *)((longlong)param_1 + lVar1) = 0xffefffffffffffff;
      lVar1 = lVar1 + 0x38;
    } while (lVar1 != 0x120);
    param_1 = param_1 + 0x3e;
  }
  return;
}



// FUNCTION 140c108c0 FUN_140c108c0 body=328 status=ok
// SIG undefined FUN_140c108c0(void)

void FUN_140c108c0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar3) {
              uVar7 = (ulonglong)bVar3;
            }
            uVar9 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140c1092a;
              lVar2 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
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
LAB_140c1092a:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if (param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (iVar8 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar8,0x38,8);
  }
  return;
}



// FUNCTION 140c10a08 FUN_140c10a08 body=444 status=ok
// SIG undefined FUN_140c10a08(void)

void FUN_140c10a08(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 auStack_148 [5];
  undefined4 local_120 [2];
  undefined8 local_118 [2];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120[0] = 0;
  local_118[0] = 0x7fefffffffffffff;
  local_118[1] = 0x7fefffffffffffff;
  local_108 = 0x7fefffffffffffff;
  local_100 = 0xffefffffffffffff;
  uStack_f8 = 0xffefffffffffffff;
  local_f0 = 0xffefffffffffffff;
  local_e8 = 0;
  uStack_e0 = 0;
  lVar10 = 0xb0;
  do {
    *(undefined8 *)((longlong)auStack_148 + lVar10) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar10 + 8) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar10 + 0x10) = 0x7fefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar10 + 0x18) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)auStack_148 + lVar10 + 0x20) = 0xffefffffffffffff;
    *(undefined8 *)((longlong)local_120 + lVar10) = 0xffefffffffffffff;
    lVar10 = lVar10 + 0x38;
  } while (lVar10 != 0x120);
  lVar8 = *(longlong *)(param_1 + 0x170);
  lVar9 = (longlong)param_2 * 0xf8;
  lVar10 = lVar8 + lVar9;
  *(undefined4 *)(lVar8 + lVar9) = 0;
  puVar1 = (undefined8 *)(lVar8 + 8 + lVar9);
  *puVar1 = 0x7fefffffffffffff;
  puVar1[1] = 0x7fefffffffffffff;
  *(undefined8 *)(lVar8 + 0x18 + lVar9) = 0x7fefffffffffffff;
  puVar2 = (undefined4 *)(lVar8 + 0x20 + lVar9);
  *puVar2 = 0xffffffff;
  puVar2[1] = 0xffefffff;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 0xffefffff;
  *(undefined8 *)(lVar8 + 0x30 + lVar9) = 0xffefffffffffffff;
  if (*(longlong *)(lVar8 + 0x38 + lVar9) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(lVar10 + 0x38) = local_e8;
  *(undefined4 *)(lVar10 + 0x40) = (undefined4)uStack_e0;
  *(undefined4 *)(lVar10 + 0x44) = uStack_e0._4_4_;
  *(undefined8 *)(lVar10 + 0x48) = local_d8;
  *(undefined8 *)(lVar10 + 0x50) = uStack_d0;
  *(undefined4 *)(lVar10 + 0x58) = local_c8;
  *(undefined4 *)(lVar10 + 0x5c) = uStack_c4;
  *(undefined4 *)(lVar10 + 0x60) = uStack_c0;
  *(undefined4 *)(lVar10 + 100) = uStack_bc;
  *(undefined4 *)(lVar10 + 0x68) = local_b8;
  *(undefined4 *)(lVar10 + 0x6c) = uStack_b4;
  *(undefined4 *)(lVar10 + 0x70) = uStack_b0;
  *(undefined4 *)(lVar10 + 0x74) = uStack_ac;
  *(undefined4 *)(lVar10 + 0x74) = uStack_ac;
  *(undefined4 *)(lVar10 + 0x78) = uStack_a8;
  *(undefined4 *)(lVar10 + 0x7c) = uStack_a4;
  *(undefined4 *)(lVar10 + 0x80) = uStack_a0;
  lVar8 = 0x88;
  do {
    *(undefined8 *)(lVar10 + 0x10 + lVar8) = *(undefined8 *)((longlong)local_118 + lVar8 + 8);
    uVar7 = *(undefined8 *)((longlong)local_118 + lVar8);
    *(undefined8 *)(lVar10 + lVar8) = *(undefined8 *)((longlong)local_120 + lVar8);
    ((undefined8 *)(lVar10 + lVar8))[1] = uVar7;
    uVar4 = *(undefined4 *)((longlong)&local_108 + lVar8 + 4);
    uVar5 = *(undefined4 *)((longlong)&local_100 + lVar8);
    uVar6 = *(undefined4 *)((longlong)&local_100 + lVar8 + 4);
    puVar2 = (undefined4 *)(lVar10 + 0x18 + lVar8);
    *puVar2 = *(undefined4 *)((longlong)&local_108 + lVar8);
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    *(undefined8 *)(lVar10 + 0x28 + lVar8) = *(undefined8 *)((longlong)&uStack_f8 + lVar8);
    *(undefined4 *)(lVar10 + 0x30 + lVar8) = *(undefined4 *)((longlong)&local_f0 + lVar8);
    lVar8 = lVar8 + 0x38;
  } while (lVar8 != 0xf8);
  iVar3 = *(int *)(param_1 + 0x168);
  *(uint *)(param_1 + 0x168) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x16c) < iVar3 + 1U) {
    FUN_1446f48e2((longlong *)(param_1 + 0x160),iVar3);
  }
  *(int *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar3 * 4) = param_2;
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c10bc6 FUN_140c10bc6 body=438 status=ok
// SIG undefined FUN_140c10bc6(void)

/* WARNING: Removing unreachable block (ram,0x000140c10d76) */

void FUN_140c10bc6(int *param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar10 = (longlong)*(int *)(**(longlong **)(param_1 + 4) + 0x40 + (longlong)param_1[6] * 0xf8);
  if (lVar10 != 0) {
    lVar6 = *(longlong *)(**(longlong **)(param_1 + 4) + 0x38 + (longlong)param_1[6] * 0xf8);
    lVar11 = 0;
    do {
      plVar7 = *(longlong **)(param_1 + 2);
      uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 8);
      iVar5 = *(int *)(lVar6 + lVar11);
      if ((int)plVar7[1] <= iVar5) {
        FUN_140c10d7e(plVar7,(iVar5 - (int)plVar7[1]) + 1);
      }
      lVar9 = (longlong)iVar5 * 0x18;
      *(undefined1 *)(*plVar7 + 0x14 + lVar9) = 1;
      lVar8 = *plVar7;
      *(undefined8 *)(lVar8 + lVar9) = 0xffffffffffffffff;
      *(undefined4 *)(lVar8 + 8 + lVar9) = uVar4;
      *(undefined8 *)(lVar8 + 0xc + lVar9) = 0xffffffffffffffff;
      lVar11 = lVar11 + 0x38;
    } while (lVar10 * 0x38 - lVar11 != 0);
  }
  pbVar2 = (byte *)(**(longlong **)(param_1 + 10) + 0x6c + (longlong)*param_1 * 0x70);
  *pbVar2 = *pbVar2 | 1;
  plVar7 = *(longlong **)(param_1 + 8);
  FUN_140c10de6(&local_90,**(longlong **)(param_1 + 4) + (longlong)param_1[6] * 0xf8 + 0x38);
  iVar5 = (int)plVar7[1];
  lVar10 = (longlong)iVar5;
  *(uint *)(plVar7 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar7 + 0xc) < iVar5 + 1U) {
    FUN_140c119c6(plVar7,iVar5);
  }
  lVar6 = *plVar7;
  *(undefined8 *)(lVar6 + 0x10 + lVar10 * 0x48) = local_80;
  puVar1 = (undefined8 *)(lVar6 + lVar10 * 0x48);
  *puVar1 = local_90;
  puVar1[1] = uStack_88;
  *(undefined8 *)(lVar6 + 0x28 + lVar10 * 0x48) = local_68;
  puVar3 = (undefined4 *)(lVar6 + 0x18 + lVar10 * 0x48);
  *puVar3 = local_78;
  puVar3[1] = uStack_74;
  puVar3[2] = uStack_70;
  puVar3[3] = uStack_6c;
  *(undefined8 *)(lVar6 + 0x30 + lVar10 * 0x48) = 0;
  *(undefined8 *)(lVar6 + 0x30 + lVar10 * 0x48) = local_60;
  *(undefined4 *)(lVar6 + 0x38 + lVar10 * 0x48) = (undefined4)local_58;
  *(undefined4 *)(lVar6 + 0x3c + lVar10 * 0x48) = local_58._4_4_;
  *(undefined1 *)(lVar6 + 0x40 + lVar10 * 0x48) = local_50;
  *(int *)(**(longlong **)(param_1 + 10) + 0x60 + (longlong)*param_1 * 0x70) = iVar5;
  local_58 = 0;
  local_60 = 0;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c10d7e FUN_140c10d7e body=71 status=ok
// SIG undefined FUN_140c10d7e(void)

int FUN_140c10d7e(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_140c110b2(param_1,iVar1);
  }
  FUN_140c10dc5((longlong)iVar1 * 0x18 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 140c10dc5 FUN_140c10dc5 body=32 status=ok
// SIG undefined FUN_140c10dc5(void)

void FUN_140c10dc5(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    param_1[2] = 0xffffffff;
    param_1[3] = 0xffffffff;
    param_1[4] = 0xffffffff;
    *(undefined1 *)(param_1 + 5) = 0;
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 140c10de6 FUN_140c10de6 body=144 status=ok
// SIG undefined FUN_140c10de6(void)

undefined8 * FUN_140c10de6(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_1 = 0x7fefffffffffffff;
  param_1[1] = 0x7fefffffffffffff;
  param_1[2] = 0x7fefffffffffffff;
  param_1[3] = 0xffefffffffffffff;
  param_1[4] = 0xffefffffffffffff;
  param_1[5] = 0xffefffffffffffff;
  puVar1 = param_1 + 6;
  param_1[6] = 0;
  iVar2 = *(int *)(param_2 + 1);
  uVar3 = *param_2;
  *(int *)(param_1 + 7) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_140c10f68(puVar1,iVar2,0);
    FUN_140c10e76(*puVar1,uVar3,iVar2);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_140c10eb8(param_1,puVar1);
  return param_1;
}



// FUNCTION 140c10e76 FUN_140c10e76 body=65 status=ok
// SIG undefined FUN_140c10e76(void)

void FUN_140c10e76(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      *(undefined4 *)(param_1 + lVar4) = *(undefined4 *)(param_2 + lVar4);
      puVar1 = (undefined8 *)(param_2 + 8 + lVar4);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 8 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined8 *)(param_1 + 0x18 + lVar4) = *(undefined8 *)(param_2 + 0x18 + lVar4);
      puVar1 = (undefined8 *)(param_2 + 0x20 + lVar4);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x20 + lVar4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined8 *)(param_1 + 0x30 + lVar4) = *(undefined8 *)(param_2 + 0x30 + lVar4);
      lVar4 = lVar4 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140c10eb8 FUN_140c10eb8 body=175 status=ok
// SIG undefined FUN_140c10eb8(void)

void FUN_140c10eb8(double *param_1,longlong *param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  *param_1 = 1.79769313486232e+308;
  param_1[1] = 1.79769313486232e+308;
  param_1[2] = 1.79769313486232e+308;
  param_1[3] = -1.79769313486232e+308;
  param_1[4] = -1.79769313486232e+308;
  param_1[5] = -1.79769313486232e+308;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    dVar5 = 1.79769313486232e+308;
    dVar6 = -1.79769313486232e+308;
    lVar4 = 0;
    dVar7 = -1.79769313486232e+308;
    dVar8 = -1.79769313486232e+308;
    dVar9 = 1.79769313486232e+308;
    dVar10 = 1.79769313486232e+308;
    do {
      dVar1 = *(double *)(lVar2 + 0x18 + lVar4);
      if (dVar1 <= dVar10) {
        dVar10 = dVar1;
      }
      dVar1 = *(double *)(lVar2 + 0x10 + lVar4);
      if (dVar1 <= dVar9) {
        dVar9 = dVar1;
      }
      dVar1 = *(double *)(lVar2 + 8 + lVar4);
      if (dVar1 <= dVar5) {
        dVar5 = dVar1;
      }
      *param_1 = dVar5;
      param_1[1] = dVar9;
      param_1[2] = dVar10;
      dVar1 = *(double *)(lVar2 + 0x30 + lVar4);
      if (dVar8 <= dVar1) {
        dVar8 = dVar1;
      }
      dVar1 = *(double *)(lVar2 + 0x28 + lVar4);
      if (dVar7 <= dVar1) {
        dVar7 = dVar1;
      }
      dVar1 = *(double *)(lVar2 + 0x20 + lVar4);
      if (dVar6 <= dVar1) {
        dVar6 = dVar1;
      }
      param_1[3] = dVar6;
      param_1[4] = dVar7;
      param_1[5] = dVar8;
      lVar4 = lVar4 + 0x38;
    } while ((longlong)(int)lVar3 * 0x38 - lVar4 != 0);
  }
  return;
}



// FUNCTION 140c10f68 FUN_140c10f68 body=330 status=ok
// SIG undefined FUN_140c10f68(void)

void FUN_140c10f68(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar3) {
              uVar7 = (ulonglong)bVar3;
            }
            uVar9 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140c10fd6;
              lVar2 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
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
LAB_140c10fd6:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if (param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (param_3 < iVar8) {
    FUN_1446f8d3c(param_1,0,iVar8,0x38,8);
    param_3 = iVar8;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140c110b2 FUN_140c110b2 body=373 status=ok
// SIG undefined FUN_140c110b2(void)

void FUN_140c110b2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c1113d;
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
LAB_140c1113d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 140c11228 FUN_140c11228 body=376 status=ok
// SIG undefined FUN_140c11228(void)

void FUN_140c11228(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xf8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c112b0;
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
LAB_140c112b0:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xf8)) {
    uVar7 = uVar5 / 0xf8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xf8,8);
  return;
}



// FUNCTION 140c113a2 FUN_140c113a2 body=958 status=ok
// SIG undefined FUN_140c113a2(void)

void FUN_140c113a2(longlong param_1,int param_2,int *param_3,longlong param_4,int param_5,
                  longlong param_6)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  int iVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  iVar17 = *param_3;
  if (param_2 < iVar17) {
    dVar3 = *(double *)(param_6 + (longlong)param_5 * 8);
    lVar12 = (longlong)param_2;
    lVar15 = lVar12 * 0x38 + 0x30;
    iVar16 = 0;
    do {
      lVar7 = *(longlong *)(param_4 + 0x38);
      dVar4 = *(double *)(lVar7 + -0x18 + lVar15);
      dVar5 = *(double *)(lVar7 + -0x28 + lVar15);
      dVar6 = *(double *)(lVar7 + -0x20 + lVar15);
      dVar4 = (*(double *)(lVar7 + lVar15) - dVar4) * 0.5 + dVar4;
      dVar6 = (*(double *)(lVar7 + -8 + lVar15) - dVar6) * 0.5 + dVar6;
      dVar5 = (*(double *)(lVar7 + -0x10 + lVar15) - dVar5) * 0.5 + dVar5;
      dVar8 = dVar6;
      if ((param_5 != 1) && (dVar8 = dVar5, param_5 == 2)) {
        dVar8 = dVar4;
      }
      lVar13 = (ulonglong)(dVar3 < dVar8) * 0x38;
      lVar19 = *(longlong *)(param_1 + 0x170);
      lVar11 = (longlong)*(int *)(param_4 + 0xb8 + lVar13) * 0xf8;
      iVar17 = *(int *)(lVar19 + 0x40 + lVar11);
      uVar18 = iVar17 + 1;
      *(uint *)(lVar19 + 0x40 + lVar11) = uVar18;
      if (*(uint *)(lVar19 + 0x44 + lVar11) < uVar18) {
        FUN_140c11858(lVar19 + lVar11 + 0x38,iVar17);
      }
      pdVar1 = (double *)(lVar7 + lVar15);
      pdVar14 = (double *)(lVar13 + param_4 + 0x88);
      lVar19 = lVar19 + lVar11;
      lVar7 = *(longlong *)(lVar19 + 0x38);
      lVar11 = (longlong)iVar17 * 0x38;
      *(undefined4 *)(lVar7 + lVar11) = *(undefined4 *)(pdVar1 + -6);
      *(double *)(lVar7 + 0x18 + lVar11) = pdVar1[-3];
      dVar8 = pdVar1[-4];
      pdVar2 = (double *)(lVar7 + 8 + lVar11);
      *pdVar2 = pdVar1[-5];
      pdVar2[1] = dVar8;
      dVar8 = pdVar1[-1];
      pdVar2 = (double *)(lVar7 + 0x20 + lVar11);
      *pdVar2 = pdVar1[-2];
      pdVar2[1] = dVar8;
      dVar8 = (double)(int)uVar18;
      *(double *)(lVar7 + 0x30 + lVar11) = *pdVar1;
      dVar20 = pdVar14[2];
      if (pdVar1[-3] <= pdVar14[2]) {
        dVar20 = pdVar1[-3];
      }
      dVar22 = pdVar14[1];
      if (pdVar1[-4] <= pdVar14[1]) {
        dVar22 = pdVar1[-4];
      }
      dVar23 = pdVar1[-5];
      dVar21 = *pdVar14;
      if (dVar23 <= *pdVar14) {
        dVar21 = dVar23;
      }
      *pdVar14 = dVar21;
      pdVar14[1] = dVar22;
      pdVar14[2] = dVar20;
      dVar20 = pdVar14[5];
      if (pdVar14[5] <= *pdVar1) {
        dVar20 = *pdVar1;
      }
      dVar22 = pdVar14[4];
      if (pdVar14[4] <= pdVar1[-1]) {
        dVar22 = pdVar1[-1];
      }
      dVar23 = pdVar14[3];
      if (pdVar14[3] <= pdVar1[-2]) {
        dVar23 = pdVar1[-2];
      }
      pdVar14[3] = dVar23;
      pdVar14[4] = dVar22;
      pdVar14[5] = dVar20;
      dVar24 = dVar4 - *(double *)(lVar19 + 0x58);
      dVar21 = dVar6 - *(double *)(lVar19 + 0x50);
      dVar20 = dVar5 - *(double *)(lVar19 + 0x48);
      dVar23 = dVar20 / dVar8 + *(double *)(lVar19 + 0x48);
      *(double *)(lVar19 + 0x48) = dVar23;
      dVar22 = dVar21 / dVar8 + *(double *)(lVar19 + 0x50);
      *(double *)(lVar19 + 0x50) = dVar22;
      dVar8 = dVar24 / dVar8 + *(double *)(lVar19 + 0x58);
      *(double *)(lVar19 + 0x58) = dVar8;
      *(double *)(lVar19 + 0x60) = (dVar5 - dVar23) * dVar20 + *(double *)(lVar19 + 0x60);
      *(double *)(lVar19 + 0x68) = (dVar6 - dVar22) * dVar21 + *(double *)(lVar19 + 0x68);
      *(double *)(lVar19 + 0x70) = (dVar4 - dVar8) * dVar24 + *(double *)(lVar19 + 0x70);
      cVar10 = FUN_140c11760(param_1,0);
      iVar17 = *param_3;
      if (cVar10 == '\0') {
        iVar9 = (param_2 - iVar16) + 1;
        if (param_2 - iVar16 == iVar17 + -1) {
          iVar9 = iVar17;
        }
        iVar17 = iVar9;
        *param_3 = iVar17;
        break;
      }
      lVar12 = lVar12 + 1;
      iVar16 = iVar16 + -1;
      lVar15 = lVar15 + 0x38;
    } while (lVar12 < iVar17);
  }
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + (iVar17 - param_2);
  return;
}



// FUNCTION 140c11760 FUN_140c11760 body=247 status=ok
// SIG undefined FUN_140c11760(void)

ulonglong FUN_140c11760(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  int iVar6;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  iVar3 = DAT_14c75efd4;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c75efd0 == '\x01') {
    if (param_2 == '\0') {
      iVar1 = *(int *)(param_1 + 0x148);
      uVar5 = CONCAT71((int7)(local_10 >> 8),1);
      iVar6 = 0;
      if (iVar1 < DAT_14c75efd4) {
        iVar6 = iVar1 + 1;
      }
      *(int *)(param_1 + 0x148) = iVar6;
      if (iVar1 < iVar3) goto LAB_140c117a6;
    }
    BVar4 = QueryPerformanceCounter(&local_18);
    uVar5 = CONCAT44(extraout_var,BVar4);
    if (0.0 < DAT_14c75efd8) {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),
                       ((double)local_18.QuadPart * DAT_14c83f420 + 16777216.0) -
                       *(double *)(param_1 + 0x140) <= (double)DAT_14c75efd8 ||
                       (ABS(*(double *)(param_1 + 0x140)) <= 1e-08 || *(int *)(param_1 + 0x138) < 1)
                      );
      goto LAB_140c117a6;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x138);
    uVar5 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      uVar5 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),*(int *)(param_1 + 0x13c) < (int)uVar2);
      goto LAB_140c117a6;
    }
  }
  uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_140c117a6:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c11858 FUN_140c11858 body=366 status=ok
// SIG undefined FUN_140c11858(void)

void FUN_140c11858(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  
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
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_140c118df;
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
LAB_140c118df:
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



// FUNCTION 140c119c6 FUN_140c119c6 body=373 status=ok
// SIG undefined FUN_140c119c6(void)

void FUN_140c119c6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c11a4f;
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
LAB_140c11a4f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 140c11b3c FUN_140c11b3c body=402 status=ok
// SIG undefined FUN_140c11b3c(void)

void FUN_140c11b3c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1401c3c2c();
  lVar2 = *(longlong *)(param_1 + 0x530);
  if (lVar2 != 0) {
    *(longlong *)(param_1 + 0x620) = lVar2;
    iVar1 = *(int *)(param_1 + 0x140);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x138);
      lVar6 = 0;
      do {
        plVar4 = *(longlong **)(lVar3 + lVar6);
        if ((plVar4 != (longlong *)0x0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(plVar4);
LAB_140c11baf:
          if (DAT_14cac6e60 == 0) {
            local_50 = &local_38;
            local_38 = FUN_144a7958c;
            local_40 = FUN_14081d0ea;
            local_48 = FUN_142b47bc4;
            local_58 = &LAB_1478989f1;
            local_60 = &LAB_146391124;
            local_68 = L"Engine";
            local_70 = 0x10000000000;
            local_78 = 0x10000005;
            local_80 = 0x10;
            local_88 = 0x620;
            FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
          }
          if ((((DAT_14cac6e60 != 0) && (lVar5 = plVar4[2], lVar5 != 0)) &&
              (*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)
               (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
              DAT_14cac6e60 + 0x30)) {
            (**(code **)(*plVar4 + 0x968))(plVar4,lVar2);
          }
        }
        else if (plVar4 != (longlong *)0x0) goto LAB_140c11baf;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c11cd0 FUN_140c11cd0 body=12 status=ok
// SIG undefined FUN_140c11cd0(void)

void FUN_140c11cd0(longlong param_1)

{
  FUN_1406cc568(param_1 + 0x410);
  return;
}



// FUNCTION 140c11cdc FUN_140c11cdc body=40 status=ok
// SIG undefined FUN_140c11cdc(void)

undefined8 FUN_140c11cdc(undefined8 param_1,int param_2)

{
  FUN_140c11d04();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c11d04 FUN_140c11d04 body=156 status=ok
// SIG undefined FUN_140c11d04(void)

void FUN_140c11d04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b08a8d0;
  param_1[5] = &PTR_FUN_14b08abd0;
  param_1[6] = &PTR_FUN_14b08ac00;
  param_1[0x14] = &PTR_FUN_14b08ac30;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_14042c3da(param_1);
  return;
}



// FUNCTION 140c11da0 FUN_140c11da0 body=609 status=ok
// SIG undefined FUN_140c11da0(void)

void FUN_140c11da0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined1 *param_5,int param_6,undefined8 param_7,undefined8 param_8,uint param_9
                  ,undefined8 param_10)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 *_Src;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  uint local_68;
  undefined8 local_60;
  longlong *local_58;
  int local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_6 == 1) {
    cVar2 = (**(code **)(*param_2 + 0x88))(param_2);
    if (cVar2 == '\0') {
      param_5 = param_5 + *(int *)((longlong)param_2 + 0x44);
    }
    else {
      cVar2 = (**(code **)(*param_2 + 0x88))(param_2);
      if (cVar2 == '\0') {
        _Src = param_5 + *(int *)((longlong)param_2 + 0x44);
        param_5 = local_48;
        if (_Src != param_5) {
          if ((*(byte *)((longlong)param_2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_2 + 0x100))(param_2,param_5,_Src,(int)param_2[6]);
          }
          else {
            memcpy(param_5,_Src,
                   (longlong)(int)param_2[6] * (longlong)*(int *)((longlong)param_2 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_2 + 0xa0))(param_2,param_5,local_48);
        param_5 = local_48;
      }
    }
  }
  if ((param_9 >> 0x1a & 1) == 0) {
    lVar3 = (**(code **)(*param_3 + 0x220))(param_3);
    if ((*(byte *)(param_1 + 0x51) & 1) == 0) {
      if (0 < (longlong)*(int *)(param_1 + 0x48)) {
        lVar5 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + lVar5) == lVar3) {
            if (((param_9 >> 0xb & 1) != 0) || (lVar5 = FUN_1404d8156(param_1), lVar3 != lVar5))
            goto LAB_140c11e49;
            break;
          }
          lVar5 = lVar5 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x48) * 0x10 != lVar5);
      }
      FUN_1400020e8(param_4,L"(INVALID)",9);
    }
    else {
LAB_140c11e49:
      if ((param_9 >> 0x13 & 1) == 0) {
        if ((param_9 & 0x40) == 0) {
          FUN_140c12002();
        }
        else {
          FUN_14689a4cc();
        }
        iVar1 = local_50 + -1;
        if (local_50 == 0) {
          iVar1 = 0;
        }
        FUN_1400020e8(param_4,local_58,iVar1);
        if (local_58 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        FUN_14689a626(param_1,&local_58,lVar3);
        puVar4 = (undefined8 *)FUN_1447a1f4a(&local_58);
        iVar1 = *(int *)(puVar4 + 1) + -1;
        if (*(int *)(puVar4 + 1) == 0) {
          iVar1 = 0;
        }
        FUN_1400020e8(param_4,*puVar4,iVar1);
        if (local_58 != (longlong *)0x0) {
          (**(code **)(*local_58 + 0x10))();
        }
      }
    }
  }
  else {
    local_60 = param_10;
    local_68 = param_9;
    local_70 = param_8;
    local_78 = param_7;
    (**(code **)(*param_3 + 0xf0))(param_3,param_4,param_5,0);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c12002 FUN_140c12002 body=333 status=ok
// SIG undefined FUN_140c12002(void)

undefined8 * FUN_140c12002(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x51) & 1) != 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    puVar6 = (undefined4 *)&DAT_149dfb77a;
    do {
      uVar2 = -param_3 & param_3;
      uVar4 = 0xffffffff;
      if (0 < (longlong)*(int *)(param_1 + 0x48)) {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + 8);
        uVar3 = 0;
        do {
          if (*puVar1 == uVar2) {
            uVar4 = uVar3 & 0xffffffff;
            break;
          }
          uVar3 = uVar3 + 1;
          puVar1 = puVar1 + 2;
        } while ((longlong)*(int *)(param_1 + 0x48) != uVar3);
      }
      FUN_1401cfb1c(param_1,&local_58,uVar4);
      puVar5 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar5 = local_58;
      }
      FUN_1407c8b48(param_2,L"%s%s",puVar6,puVar5);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      bVar7 = uVar2 == param_3;
      param_3 = uVar2 ^ param_3;
      puVar6 = &DAT_149e895f6;
      if (bVar7) {
        if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    } while( true );
  }
  uVar4 = 0xffffffff;
  if (0 < (longlong)*(int *)(param_1 + 0x48)) {
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x40) + 8);
    uVar2 = 0;
    do {
      if (*puVar1 == param_3) {
        uVar4 = uVar2 & 0xffffffff;
        break;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 2;
    } while ((longlong)*(int *)(param_1 + 0x48) != uVar2);
  }
  FUN_1401cfb1c(param_1,param_2,uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 140c12158 FUN_140c12158 body=287 status=ok
// SIG undefined FUN_140c12158(void)

undefined8 * FUN_140c12158(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = &PTR_FUN_14aff2260;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffff0300;
  *param_1 = &PTR_FUN_14b30c7c0;
  param_1[6] = 0;
  FUN_1400b22c2(param_1 + 7,&DAT_149e02088);
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)((longlong)param_1 + 0x152) = 0x10001;
  *(undefined2 *)((longlong)param_1 + 0x156) = 1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0xffffffffffffffff;
  *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xf0 | 2;
  param_1[4] = DAT_14cb841e0;
  *(undefined1 *)(param_1 + 5) = 2;
  return param_1;
}



// FUNCTION 140c12278 FUN_140c12278 body=593 status=ok
// SIG undefined FUN_140c12278(void)

void FUN_140c12278(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  code *local_68;
  longlong *local_60;
  PSRWLOCK local_58;
  int local_50;
  longlong local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1449027d0(param_1,&local_68);
  lVar5 = *(longlong *)(local_68 + 0x420);
  local_58 = (PSRWLOCK)(lVar5 + 0x78);
  local_50 = 1;
  AcquireSRWLockExclusive(local_58);
  *(int *)(lVar5 + 0x70) = *(int *)(lVar5 + 0x70) + 1;
  local_40 = 1;
  local_48 = lVar5;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  bVar3 = (byte)param_3 ^ 1;
  uVar4 = FUN_140c124ca(&local_58,(uint)bVar3 + (uint)bVar3);
  local_b8 = local_b8 & 0xffffff00;
  FUN_140c12616(param_1,uVar4,param_2,param_3);
  uVar4 = FUN_140c124ca(&local_58,(uint)bVar3 * 2 + 1);
  local_b8 = CONCAT31(local_b8._1_3_,1);
  FUN_140c12616(param_1,uVar4,param_2 + 0x230,param_3);
  lVar5 = FUN_1400d7050(param_1 + 0x30);
  if (lVar5 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_68 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1459f2e4c;
      local_88 = &LAB_148c39de3;
      local_90 = &LAB_1457a9eb2;
      local_98 = &DAT_149e063b2;
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x3de0;
      local_80 = &local_68;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_140c123a5;
  }
  lVar5 = 0;
LAB_140c123a5:
  FUN_140c12578(local_48,lVar5);
  if (local_50 == 0) {
    ReleaseSRWLockShared(local_58);
  }
  else {
    ReleaseSRWLockExclusive(local_58);
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c124ca FUN_140c124ca body=172 status=ok
// SIG undefined FUN_140c124ca(void)

longlong FUN_140c124ca(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if ((int)plVar1[1] <= (int)param_2) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    FUN_14578532a(&local_98);
    FUN_1457852bc(plVar1,&local_98,(ulonglong)param_2);
    FUN_140c12e4c(&local_98);
    plVar1 = *(longlong **)(param_1 + 0x10);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return (ulonglong)param_2 * 0x70 + *plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c12578 FUN_140c12578 body=109 status=ok
// SIG undefined FUN_140c12578(void)

void FUN_140c12578(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  
  if ((longlong)(int)param_1[1] == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = 0;
    do {
      bVar2 = *(int *)(*param_1 + 0x68 + lVar1) != 0;
      if (bVar2) break;
      bVar3 = (longlong)(int)param_1[1] * 0x70 + -0x70 != lVar1;
      lVar1 = lVar1 + 0x70;
    } while (bVar3);
  }
  if (((char)param_1[0xd] == '\0') && ((bVar2 | *(byte *)((longlong)param_1 + 0x69)) != 1)) {
    FUN_140c125e6(param_2 + 0xd98,&DAT_14cbd95a8);
    return;
  }
  FUN_1403ca8ec(param_2 + 0xd98,&DAT_14cbd95a8);
  return;
}



// FUNCTION 140c125e6 FUN_140c125e6 body=48 status=ok
// SIG undefined FUN_140c125e6(void)

void FUN_140c125e6(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = FUN_144a8c772();
    if (lVar1 != 0) {
      FUN_14129c566(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140c12616 FUN_140c12616 body=2005 status=ok
// SIG undefined FUN_140c12616(void)

void FUN_140c12616(longlong param_1,longlong param_2,longlong param_3,char param_4,byte param_5)

{
  ulonglong *puVar1;
  code *pcVar2;
  void *_Src;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  char *pcVar10;
  wchar_t *pwVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 ***pppuVar14;
  undefined4 uVar15;
  undefined1 auStack_e8 [40];
  undefined8 **local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  ushort local_a8;
  byte local_a0;
  undefined4 local_98 [2];
  ulonglong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_68 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(param_3 + 0x228) & 1) != 0) {
    pcVar10 = "secondary";
    if (param_4 != '\0') {
      pcVar10 = "primary";
    }
    FUN_1400b22c2(&local_90,pcVar10);
    pcVar10 = "";
    if (param_5 != 0) {
      pcVar10 = "_hold";
    }
    FUN_14047a987(&local_90,pcVar10,(uint)param_5 + (uint)param_5 * 4);
    FUN_140775496(param_2,&local_90);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    uVar13 = *(uint *)(param_3 + 0x228);
    bVar3 = (byte)uVar13 & 1;
    if (*(int *)(param_2 + 0x1c) == 0 || *(byte *)(param_2 + 0x18) != bVar3) {
      *(byte *)(param_2 + 0x18) = bVar3;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      uVar13 = *(uint *)(param_3 + 0x228);
    }
    if ((uVar13 & 2) == 0) {
      if ((uVar13 & 4) == 0) {
        uVar13 = -(uVar13 & 1) & 3;
      }
      else {
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 2;
    }
    if (*(int *)(param_2 + 0x6c) == 0 || uVar13 != *(uint *)(param_2 + 0x68)) {
      *(uint *)(param_2 + 0x68) = uVar13;
      *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + 1;
    }
    FUN_1400b22c2(&local_90,"inactive");
    if (&local_90 == (ulonglong *)(param_2 + 0x58)) {
      if (local_90 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_2 + 0x58) != 0) {
        FUN_1400020a8();
      }
      *(ulonglong *)(param_2 + 0x58) = local_90;
      local_90 = 0;
      *(undefined4 *)(param_2 + 0x60) = local_88;
      *(undefined4 *)(param_2 + 100) = local_84;
    }
    if (uVar13 == 3) {
      pcVar10 = "prompt_visible";
LAB_140c1288b:
      FUN_1400b22c2(&local_90,pcVar10);
      if (&local_90 == (ulonglong *)(param_2 + 0x58)) {
        if (local_90 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_2 + 0x58) != 0) {
          FUN_1400020a8();
        }
        *(ulonglong *)(param_2 + 0x58) = local_90;
        local_90 = 0;
        *(undefined4 *)(param_2 + 0x60) = local_88;
        *(undefined4 *)(param_2 + 100) = local_84;
      }
    }
    else {
      if (uVar13 == 2) {
        pcVar10 = "prompt_locked";
        goto LAB_140c1288b;
      }
      if (uVar13 != 0) {
        pcVar10 = "prompt_disabled";
        goto LAB_140c1288b;
      }
    }
    if (*(int *)(param_2 + 0x2c) == 0 || *(byte *)(param_2 + 0x28) != param_5) {
      *(byte *)(param_2 + 0x28) = param_5;
      *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
    }
    bVar3 = *(byte *)(param_3 + 0x228) >> 1 & 1;
    if ((*(byte *)(param_2 + 0x20) != bVar3) || (*(int *)(param_2 + 0x24) == 0)) {
      *(byte *)(param_2 + 0x20) = bVar3;
      *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    }
    if (*(char *)(param_3 + 0x178) == '\x01') {
      lVar6 = FUN_1400d7050(param_1 + 0x30);
      if (lVar6 != 0) {
        lVar7 = FUN_144a5dd5e();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          local_90 = local_90 & 0xffffffffffffff00;
          local_68[0] = 0;
          if (*(char *)(param_3 + 0x179) == '\x01') {
            local_c0 = (undefined8 **)((ulonglong)local_c0 & 0xffffffffffffff00);
            local_98[0] = 0;
            FUN_1456bb102(&local_c0,lVar6);
            FUN_14031eb60(&local_90,&local_c0);
            FUN_140c12ec4(local_68,local_98);
LAB_140c12ba1:
            FUN_144a5ac3a(&local_c0);
          }
          else if (*(char *)(param_3 + 0x179) == '\0') {
            lVar6 = FUN_148db93ac(lVar6);
            if (*(longlong *)(lVar6 + 8) == 0) {
LAB_140c12dac:
              uVar12 = 0;
            }
            else {
              cVar4 = FUN_144729dda(lVar6);
              if (cVar4 == '\0') goto LAB_140c12dac;
              uVar12 = *(undefined8 *)(lVar6 + 8);
            }
            local_c0 = (undefined8 **)((ulonglong)local_c0 & 0xffffffffffffff00);
            local_98[0] = 0;
            FUN_148e4064a(&local_c0,uVar12);
            FUN_14031eb60(&local_90,&local_c0);
            FUN_140c12ec4(local_68,local_98);
            goto LAB_140c12ba1;
          }
          FUN_1448729ea(param_3 + 0x180,&local_c0,&local_90);
          uVar15 = FUN_144a7ecd0(&local_c0);
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
          if (pcVar2 != (code *)0x0) {
            pppuVar14 = &local_c0;
            if (0x18 < local_a8) {
              pppuVar14 = (undefined8 ***)local_c0;
            }
            (*pcVar2)(pppuVar14);
          }
          if (0x18 < local_a8) {
            FUN_1400020a8(local_c0);
          }
          FUN_140c12e98(param_3 + 0xd0,&local_c0,uVar15);
          if ((undefined8 ***)(param_2 + 0x48) == &local_c0) {
            if ((undefined8 ***)local_c0 != (undefined8 ***)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(param_2 + 0x48) != 0) {
              FUN_1400020a8();
            }
            *(undefined8 ***)(param_2 + 0x48) = local_c0;
            local_c0 = (undefined8 ***)0x0;
            *(undefined4 *)(param_2 + 0x50) = local_b8;
            *(undefined4 *)(param_2 + 0x54) = local_b4;
          }
          FUN_144a5ac3a(&local_90);
        }
      }
LAB_140c129e7:
      pwVar11 = L"action_secondaryuse";
      if (param_4 != '\0') {
        pwVar11 = L"action_use";
      }
      FUN_140056680(&local_90,pwVar11);
    }
    else {
      lVar6 = FUN_140103576(param_3);
      puVar1 = (ulonglong *)(param_2 + 0x48);
      if (lVar6 == 0) {
        FUN_1400b22c2(&local_90,"Designer: Add Prompt Text");
        if (puVar1 == &local_90) {
          if (local_90 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_2 + 0x48) != 0) {
            FUN_1400020a8();
          }
          *(ulonglong *)(param_2 + 0x48) = local_90;
          local_90 = 0;
          *(undefined4 *)(param_2 + 0x50) = local_88;
          *(undefined4 *)(param_2 + 0x54) = local_84;
        }
        goto LAB_140c129e7;
      }
      plVar8 = *(longlong **)(lVar6 + 0x18);
      if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
      }
      FUN_1447a1fc0(plVar8);
      plVar8 = *(longlong **)(lVar6 + 0x18);
      pcVar2 = *(code **)(*plVar8 + 0x28);
      if (pcVar2 == FUN_14482841c) {
        puVar9 = (ulonglong *)(plVar8 + 3);
        if (plVar8[5] != 0) {
          puVar9 = (ulonglong *)(plVar8[5] + 8);
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        puVar9 = (ulonglong *)(plVar8 + 2);
      }
      else {
        puVar9 = (ulonglong *)(*pcVar2)(plVar8);
      }
      if (puVar1 != puVar9) {
        iVar5 = (int)puVar9[1];
        _Src = (void *)*puVar9;
        *(int *)(param_2 + 0x50) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x54) == 0) {
          *(undefined4 *)(param_2 + 0x54) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar1,_Src,(longlong)iVar5 * 2);
          }
        }
      }
      if (*(ulonglong *)(lVar6 + 0x28) == 0) goto LAB_140c129e7;
      local_90 = *(ulonglong *)(lVar6 + 0x28);
      lVar6 = FUN_14063edce(&DAT_14cb91658);
      if (lVar6 == 0) goto LAB_140c12719;
      local_c0 = *(undefined8 ***)(lVar6 + 0x18);
      FUN_1400021e4(&local_c0,&local_90);
    }
    FUN_140775538(param_2 + 0x30,&local_90);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    goto LAB_140c12719;
  }
  FUN_140c12dec(param_2,&DAT_149e02088);
  if (*(char *)(param_2 + 0x18) == '\0') {
    if (*(int *)(param_2 + 0x1c) == 0) {
      iVar5 = 1;
      goto LAB_140c129b6;
    }
  }
  else {
    iVar5 = *(int *)(param_2 + 0x1c) + 1;
LAB_140c129b6:
    *(undefined1 *)(param_2 + 0x18) = 0;
    *(int *)(param_2 + 0x1c) = iVar5;
  }
  FUN_1400b22c2(&local_90,"inactive");
  if ((ulonglong *)(param_2 + 0x58) == &local_90) {
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x58) != 0) {
      FUN_1400020a8();
    }
    *(ulonglong *)(param_2 + 0x58) = local_90;
    local_90 = 0;
    *(undefined4 *)(param_2 + 0x60) = local_88;
    *(undefined4 *)(param_2 + 100) = local_84;
  }
  if (*(char *)(param_2 + 0x20) == '\0') {
    if (*(int *)(param_2 + 0x24) == 0) {
      iVar5 = 1;
      goto LAB_140c12a92;
    }
  }
  else {
    iVar5 = *(int *)(param_2 + 0x24) + 1;
LAB_140c12a92:
    *(undefined1 *)(param_2 + 0x20) = 0;
    *(int *)(param_2 + 0x24) = iVar5;
  }
  if (*(char *)(param_2 + 0x28) == '\0') {
    if (*(int *)(param_2 + 0x2c) == 0) {
      iVar5 = 1;
      goto LAB_140c12a56;
    }
  }
  else {
    iVar5 = *(int *)(param_2 + 0x2c) + 1;
LAB_140c12a56:
    *(undefined1 *)(param_2 + 0x28) = 0;
    *(int *)(param_2 + 0x2c) = iVar5;
  }
  if (*(int *)(param_2 + 0x68) == 0) {
    if (*(int *)(param_2 + 0x6c) == 0) {
      iVar5 = 1;
      goto LAB_140c129c4;
    }
  }
  else {
    iVar5 = *(int *)(param_2 + 0x6c) + 1;
LAB_140c129c4:
    *(undefined4 *)(param_2 + 0x68) = 0;
    *(int *)(param_2 + 0x6c) = iVar5;
  }
  FUN_140c12dec(param_2 + 0x30,&DAT_149e02088);
LAB_140c12719:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c12dec FUN_140c12dec body=95 status=ok
// SIG undefined FUN_140c12dec(void)

undefined8 FUN_140c12dec(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28);
  FUN_140775538(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c12e4c FUN_140c12e4c body=76 status=ok
// SIG undefined FUN_140c12e4c(void)

void FUN_140c12e4c(longlong *param_1)

{
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c12e98 FUN_140c12e98 body=44 status=ok
// SIG undefined FUN_140c12e98(void)

undefined8 FUN_140c12e98(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140b41f32(param_1,param_3);
  FUN_140b420f8(param_1,param_2,uVar1);
  return param_2;
}



// FUNCTION 140c12ec4 FUN_140c12ec4 body=66 status=ok
// SIG undefined FUN_140c12ec4(void)

int * FUN_140c12ec4(int *param_1,int *param_2)

{
  if (*param_1 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,*param_1 + -1,1);
    *param_1 = 0;
  }
  *param_1 = *param_2;
  *param_2 = 0;
  return param_1;
}



// FUNCTION 140c12f06 FUN_140c12f06 body=603 status=ok
// SIG undefined FUN_140c12f06(void)

longlong * FUN_140c12f06(longlong param_1,uint param_2,longlong *param_3)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined1 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar11 = (longlong)(int)param_2;
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + lVar11 * 8);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)FUN_14001cc68(0xa0,0x10);
    lVar4 = *param_3;
    iVar5 = 0;
    plVar6[1] = 0;
    *(undefined1 *)(plVar6 + 2) = 1;
    *(undefined8 *)((longlong)plVar6 + 0x14) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)plVar6 + 0x39) = 0;
    *(undefined8 *)((longlong)plVar6 + 0x41) = 0;
    plVar6[6] = 0;
    plVar6[7] = 0;
    plVar6[4] = 0;
    plVar6[5] = 0;
    plVar6[0x12] = 0;
    plVar6[0x10] = 0;
    plVar6[0x11] = 0;
    plVar6[0xe] = 0;
    plVar6[0xf] = 0;
    plVar6[0xc] = 0;
    plVar6[0xd] = 0;
    plVar6[10] = 0;
    plVar6[0xb] = 0;
    *(char *)(plVar6 + 0x13) = (char)param_3[0x13];
    *plVar6 = lVar4;
    lVar4 = *(longlong *)(lVar4 + 0x6a0);
    plVar6[6] = lVar4;
    uVar2 = *(uint *)(lVar4 + 8);
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar2);
    }
    plVar10 = plVar6 + 4;
    iVar9 = 0;
    if (uVar2 != 0) {
      FUN_144717690(plVar10,uVar2);
      iVar9 = (int)plVar6[5];
      iVar5 = *(int *)((longlong)plVar6 + 0x2c);
    }
    *(uint *)(plVar6 + 5) = iVar9 + uVar2;
    if ((uint)(iVar5 - iVar9) < uVar2) {
      FUN_1406600da(plVar10);
    }
    plVar6[10] = lVar4 + 0xb0;
    *(undefined4 *)((longlong)plVar6 + 0x14) = *(undefined4 *)((longlong)param_3 + 0x14);
    *(int *)(plVar6 + 3) = (int)param_3[3];
    *(longlong **)(*(longlong *)(param_1 + 0xa0) + lVar11 * 8) = plVar6;
    if (((((int)param_2 < 0) || (lVar4 = *(longlong *)(param_1 + 0x38), lVar4 == 0)) ||
        (*(int *)(lVar4 + 0x18) <= (int)param_2)) ||
       (*(char *)(*(longlong *)(lVar4 + 0x10) + 0x28 + (ulonglong)param_2 * 0x78) == '\0')) {
      lVar4 = *param_3;
      lVar11 = lVar11 * 0x10;
      sVar1 = *(short *)(*(longlong *)(param_1 + 0xc0) + 8 + lVar11);
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0xc0) + lVar11);
      if (((sVar1 == -1) || (*plVar8 == -1)) ||
         ((sVar1 != *(short *)(lVar4 + 0x5d8) || (*plVar8 != *(longlong *)(lVar4 + 0x5d0))))) {
        *(undefined2 *)(plVar8 + 1) = *(undefined2 *)(lVar4 + 0x5d8);
        *plVar8 = *(longlong *)(lVar4 + 0x5d0);
        *(undefined2 *)((longlong)plVar8 + 10) = *(undefined2 *)(lVar4 + 0x5da);
        local_68[1] = 0;
        local_58 = 1;
        local_54 = 0xffffffffffffffff;
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x50) + lVar11);
        local_68[0] = lVar4;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x18))(plVar8,local_68);
        }
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar11) == 0) {
        if ((char)plVar6[0x13] == '\x01') {
          FUN_142400d60(plVar6[4],(int)plVar6[5]);
        }
        else {
          FUN_1448859f0(plVar10,plVar6[6]);
        }
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x50) + lVar11);
        uVar3 = *(undefined4 *)(puVar7 + 1);
        *(undefined4 *)(plVar6 + 3) = *(undefined4 *)((longlong)plVar6 + 0x14);
        *(undefined4 *)((longlong)plVar6 + 0x14) = uVar3;
        plVar10 = (longlong *)*puVar7;
        (**(code **)(*plVar10 + 0x28))(plVar10,plVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c13176 FUN_140c13176 body=228 status=ok
// SIG undefined FUN_140c13176(void)

longlong FUN_140c13176(void)

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
  if (DAT_14cadb428 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_147ac858d;
    local_40 = FUN_1463ce027;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3b8;
    FUN_14081cfa3(L"/Script/Engine",L"GameSession",&DAT_14cadb428,&DAT_147ac858c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cadb428;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c1325c FUN_140c1325c body=228 status=ok
// SIG undefined FUN_140c1325c(void)

longlong FUN_140c1325c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cae45b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147aee850;
    local_40 = &LAB_1463d2332;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x480;
    FUN_14081cfa3(L"/Script/Engine",&DAT_14a91cf72,&DAT_14cae45b0,FUN_1463d2310);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae45b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c13342 FUN_140c13342 body=228 status=ok
// SIG undefined FUN_140c13342(void)

longlong FUN_140c13342(void)

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
  if (DAT_14cad8708 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_147a92d9f;
    local_40 = FUN_1463c7b3e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x458;
    FUN_14081cfa3(L"/Script/Engine",L"ServerStatReplicator",&DAT_14cad8708,&DAT_147a92d9e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad8708;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c13428 FUN_140c13428 body=50 status=ok
// SIG undefined FUN_140c13428(void)

undefined8 * FUN_140c13428(undefined8 *param_1)

{
  FUN_140c1345a();
  param_1[1] = &DAT_14cb8dda8;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b4151c0;
  return param_1;
}



// FUNCTION 140c1345a FUN_140c1345a body=188 status=ok
// SIG undefined FUN_140c1345a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140c1345a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8de18) {
    FUN_144b3d300(&DAT_14cb8de18);
    if (DAT_14cb8de18 == -1) {
      _DAT_14cb8ddc8 = 0;
      _DAT_14cb8ddd0 = 0;
      _DAT_14cb8dda8 = 0;
      uRam000000014cb8ddb0 = 0;
      _DAT_14cb8ddd4 = 0xffffffff00000080;
      _DAT_14cb8dddc = 0;
      DAT_14cb8dde8 = 0;
      _DAT_14cb8ddf0 = 0;
      DAT_14cb8ddf8 = 0;
      uRam000000014cb8de00 = 0;
      _DAT_14cb8de08 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14cb8de10);
      atexit(FUN_143e68645);
      _Init_thread_footer(&DAT_14cb8de18);
    }
  }
  return &DAT_14cb8dda8;
}



// FUNCTION 140c13516 FUN_140c13516 body=118 status=ok
// SIG undefined FUN_140c13516(void)

longlong * FUN_140c13516(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x40) != 0) && (lVar3 = FUN_140c1358c(), lVar3 != 0)) {
    iVar1 = *(int *)(lVar3 + 0x18);
    if ((-1 < (longlong)iVar1) &&
       ((iVar1 < *(int *)(param_1 + 0x78) &&
        (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8),
        plVar2 != (longlong *)0x0)))) {
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      lVar4 = FUN_1400653da();
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
            lVar4 + 0x30) {
          return (longlong *)0x0;
        }
        return plVar2;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140c1358c FUN_140c1358c body=508 status=ok
// SIG undefined FUN_140c1358c(void)

longlong FUN_140c1358c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    if (DAT_14cac7648 == 0) {
      local_50 = &local_30;
      local_30 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_143242436;
      local_58 = &LAB_14789ef1f;
      local_60 = &LAB_1417b008f;
      local_68 = L"Engine";
      local_70 = 0x8000000000;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x2b0;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
      if (DAT_14cac7648 == 0) goto LAB_140c136b3;
    }
    if (*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(lVar2 + 0x38)) {
      lVar3 = 0;
      if ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8)
           != DAT_14cac7648 + 0x30) || (lVar2 = *param_2, lVar2 == 0)) goto LAB_140c136b5;
      lVar4 = param_1 + 0x108;
      if (*(longlong *)(param_1 + 0x188) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x188);
      }
      if ((longlong)*(int *)(param_1 + 400) != 0) {
        lVar5 = 0;
        do {
          lVar3 = *(longlong *)(lVar4 + lVar5);
          if (((((lVar3 != 0) && (*(int *)(lVar3 + 0x4c) != 0)) &&
               (uVar1 = *(uint *)(lVar3 + 0x48), -1 < (int)uVar1)) &&
              (((((int)uVar1 < DAT_14c9647dc &&
                 (lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0)
                 ) && ((*(int *)(lVar6 + 0x10) == *(int *)(lVar3 + 0x4c) &&
                       (((*(uint *)(lVar6 + 8) & 0x10200000) == 0 &&
                        (*(longlong *)(lVar3 + 0x50) != 0)))))) &&
               (lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x50) + 0xe8), lVar6 != 0)))) &&
             (((lVar6 = *(longlong *)(lVar6 + 0x10), lVar6 != 0 &&
               (*(int *)(lVar2 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
               lVar2 + 0x30)))) goto LAB_140c136b5;
          lVar5 = lVar5 + 8;
        } while ((longlong)*(int *)(param_1 + 400) * 8 != lVar5);
      }
    }
  }
LAB_140c136b3:
  lVar3 = 0;
LAB_140c136b5:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 140c13792 FUN_140c13792 body=1268 status=ok
// SIG undefined FUN_140c13792(void)

ulonglong FUN_140c13792(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  size_t sVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  char cVar13;
  longlong *plVar14;
  char *pcVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  uint uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pbVar1 = (byte *)*param_2;
  if (((pbVar1 != (byte *)0x0) && ((~*pbVar1 & 3) == 0)) &&
     (lVar12 = *(longlong *)(pbVar1 + 8), *(int *)(lVar12 + 0x28) != *(int *)(lVar12 + 0x54))) {
    lVar19 = lVar12 + 0x58;
    if (*(longlong *)(lVar12 + 0x60) != 0) {
      lVar19 = *(longlong *)(lVar12 + 0x60);
    }
    iVar4 = *(int *)(lVar19 + (ulonglong)(*(int *)(lVar12 + 0x68) - 1U & DAT_14cb8a090) * 4);
    if (iVar4 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar12 + 0x18) + (longlong)iVar4 * 0x40) == DAT_14cb8a090) {
          lVar12 = *(longlong *)(pbVar1 + 8);
          if (*(int *)(lVar12 + 0x28) != *(int *)(lVar12 + 0x54)) {
            lVar19 = lVar12 + 0x58;
            if (*(longlong *)(lVar12 + 0x60) != 0) {
              lVar19 = *(longlong *)(lVar12 + 0x60);
            }
            iVar4 = *(int *)(lVar19 + (ulonglong)(*(int *)(lVar12 + 0x68) - 1U & DAT_14cb8a0b8) * 4)
            ;
            if (iVar4 != -1) {
              uVar6 = 0;
              goto LAB_140c13878;
            }
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x40 + *(longlong *)(lVar12 + 0x18) + 0x38);
      } while (iVar4 != -1);
    }
  }
  goto LAB_140c13a83;
  while (iVar4 = *(int *)((longlong)iVar4 * 0x40 + *(longlong *)(lVar12 + 0x18) + 0x38), iVar4 != -1
        ) {
LAB_140c13878:
    if (*(uint *)(*(longlong *)(lVar12 + 0x18) + (longlong)iVar4 * 0x40) == DAT_14cb8a0b8) {
      lVar12 = *(longlong *)(pbVar1 + 8);
      if (*(int *)(lVar12 + 0x28) == *(int *)(lVar12 + 0x54)) goto LAB_140c138e0;
      lVar19 = lVar12 + 0x58;
      if (*(longlong *)(lVar12 + 0x60) != 0) {
        lVar19 = *(longlong *)(lVar12 + 0x60);
      }
      iVar4 = *(int *)(lVar19 + (ulonglong)(*(int *)(lVar12 + 0x68) - 1U & DAT_14cb8a090) * 4);
      if (iVar4 == -1) goto LAB_140c138e0;
      goto LAB_140c138c5;
    }
  }
  goto LAB_140c13a28;
  while (iVar4 = *(int *)(lVar19 + 0x38), iVar4 != -1) {
LAB_140c138c5:
    lVar19 = *(longlong *)(lVar12 + 0x18) + (longlong)iVar4 * 0x40;
    if (*(uint *)(*(longlong *)(lVar12 + 0x18) + (longlong)iVar4 * 0x40) == DAT_14cb8a090) {
      if (((lVar19 != 0) && (puVar10 = (undefined8 *)(lVar19 + 0x28), puVar10 != (undefined8 *)0x0))
         && (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
      goto LAB_140c138fd;
      break;
    }
  }
LAB_140c138e0:
  puVar10 = &DAT_14c9a1308;
LAB_140c138fd:
  pbVar1 = (byte *)*puVar10;
  if (((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) ||
     (pcVar2 = *(char **)(pbVar1 + 8), pcVar2 == (char *)0x0)) {
LAB_140c13909:
    cVar13 = '\0';
  }
  else {
    uVar6 = FUN_140c13c87();
    sVar7 = strlen(pcVar2);
    uVar3 = (uint)sVar7;
    if (uVar3 == 0) {
LAB_140c13bae:
      uVar8 = 0;
      uVar17 = 0;
    }
    else {
      lVar12 = (longlong)(int)uVar3;
      pcVar15 = pcVar2 + lVar12 + -1;
      uVar9 = 0;
      if (pcVar15 < pcVar2) {
        lVar19 = 0;
      }
      else {
        do {
          if (9 < (byte)(*pcVar15 - 0x30U)) break;
          uVar9 = uVar9 + 1;
          pcVar15 = pcVar15 + -1;
        } while (pcVar2 <= pcVar15);
        lVar19 = 0;
        if ((((uVar9 != 0) && ((int)uVar9 < (int)uVar3)) && (lVar19 = 0, uVar9 < 0xb)) &&
           (lVar16 = -(ulonglong)uVar9, pcVar2[lVar16 + lVar12 + -1] == '_')) {
          if ((uVar9 == 1) || (pcVar2[lVar16 + lVar12] != '0')) {
            lVar18 = 0;
            do {
              lVar19 = (longlong)pcVar2[lVar16 + lVar12] + lVar18 * 10;
              lVar18 = lVar19 + -0x30;
              lVar16 = lVar16 + 1;
            } while (lVar16 != 0);
            if (lVar18 < 0x7fffffff) {
              uVar3 = ~uVar9 + uVar3;
              lVar19 = lVar19 + -0x2f;
              goto LAB_140c13af4;
            }
          }
          lVar19 = 0;
        }
LAB_140c13af4:
        if (uVar3 == 0) goto LAB_140c13bae;
      }
      uStack_a0._0_5_ = (uint5)uVar3;
      local_a8 = pcVar2;
      uVar3 = FUN_14001a6c0(&local_a8,1);
      uVar17 = lVar19 << 0x20;
      uVar8 = (ulonglong)uVar3;
    }
    if (uVar6 == 0) goto LAB_140c13909;
    cVar13 = '\0';
    iVar4 = FUN_1448e5bf4(uVar6,uVar17 | uVar8,0);
    if (iVar4 != -1) {
      cVar13 = *(char *)(*(longlong *)(uVar6 + 0x40) + 8 + (longlong)iVar4 * 0x10);
    }
  }
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar11 = &DAT_14c9a1288;
    }
    else {
      plVar11 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar11[2] != *(int *)((longlong)plVar11 + 0x3c)) {
      plVar14 = plVar11 + 8;
      if ((longlong *)plVar11[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar11[9];
      }
      iVar4 = *(int *)((longlong)plVar14 + (ulonglong)((int)plVar11[10] - 1U & DAT_14cb8a0b8) * 4);
      if (iVar4 != -1) {
        do {
          lVar12 = *plVar11 + (longlong)iVar4 * 0x40;
          if (*(uint *)(*plVar11 + (longlong)iVar4 * 0x40) == DAT_14cb8a0b8) {
            if (((lVar12 != 0) &&
                (puVar10 = (undefined8 *)(lVar12 + 0x28), puVar10 != (undefined8 *)0x0)) &&
               (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
            goto LAB_140c13981;
            break;
          }
          iVar4 = *(int *)(lVar12 + 0x38);
        } while (iVar4 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_140c13981:
  if (((byte *)*puVar10 != (byte *)0x0) && ((*(byte *)*puVar10 & 3) != 0)) {
    uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    if (cVar13 == '\0') {
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_44 = 0;
      FUN_140008118(&local_a8,puVar10);
      pcVar2 = local_a8;
      local_50 = 0;
      FUN_140076e46(uStack_a0 & 0xffffffff,local_a8,&local_50);
      uVar5 = local_50;
      (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*(byte *)(param_1 + 7)])(param_1);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = pcVar2;
      uVar5 = FUN_14477b664(uVar5);
      uVar5 = FUN_14477b664(uVar5);
      param_1[1] = uVar5;
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 7) = 0;
    }
    else if (cVar13 == '\x01') {
      local_7c = 0;
      uStack_78 = 0;
      local_a8 = (char *)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      uStack_8f = 0;
      uStack_88 = 0;
      uStack_87 = 0;
      uStack_80 = uStack_80 & 0xffffff00;
      uVar5 = FUN_140c13ce0();
      FUN_1446e7478(puVar10,&local_a8,uVar5,0);
      (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*(byte *)(param_1 + 7)])(param_1);
      *param_1 = local_a8;
      local_a8 = (char *)0x0;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_a0._4_4_;
      uStack_a0 = 0;
      FUN_140c13cc0(param_1 + 2,&local_98);
      param_1[5] = CONCAT44(local_7c,uStack_80);
      *(undefined4 *)(param_1 + 6) = uStack_78;
      *(undefined1 *)(param_1 + 7) = 1;
      FUN_140679fa8(&local_a8);
    }
    goto LAB_140c13a28;
  }
LAB_140c13a83:
  uVar6 = 0;
LAB_140c13a28:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c13c87 FUN_140c13c87 body=57 status=ok
// SIG undefined FUN_140c13c87(void)

void FUN_140c13c87(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62728 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62728 = FUN_14171c317(FUN_1464f8834,uVar1,L"EGbxRewardType");
  }
  return;
}



// FUNCTION 140c13cc0 FUN_140c13cc0 body=32 status=ok
// SIG undefined FUN_140c13cc0(void)

void FUN_140c13cc0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  return;
}



// FUNCTION 140c13ce0 FUN_140c13ce0 body=57 status=ok
// SIG undefined FUN_140c13ce0(void)

void FUN_140c13ce0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb629b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb629b8 = FUN_140002ddd(FUN_1464f9545,uVar1,L"GbxRewardsSet");
  }
  return;
}



// FUNCTION 140c13d1a FUN_140c13d1a body=209 status=ok
// SIG undefined FUN_140c13d1a(void)

undefined8 * FUN_140c13d1a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1401b309e(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 3);
  }
  FUN_140c13dec(param_1 + 2,param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xf] = param_2[0xf];
  uVar6 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar8 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar8;
  param_1[0xb] = uVar6;
  param_1[0xc] = uVar7;
  return param_1;
}



// FUNCTION 140c13dec FUN_140c13dec body=428 status=ok
// SIG undefined FUN_140c13dec(void)

longlong * FUN_140c13dec(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined *puVar5;
  bool bVar6;
  
  lVar4 = *param_2;
  *param_1 = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  plVar1 = param_2 + 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951a88) {
    FUN_144b3d300(&DAT_14c951a88);
    if (DAT_14c951a88 == -1) {
      uVar3 = FUN_140342cba();
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar3,FUN_1468c7f1e);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
  }
  if (*plVar1 == 0) {
    if ((int)param_2[4] != 0) goto LAB_140c13f13;
  }
  else {
    cVar2 = FUN_144729dda(param_2 + 2);
    if ((cVar2 != '\0') || ((int)param_2[4] == 0)) {
      lVar4 = *plVar1;
      goto LAB_140c13e59;
    }
LAB_140c13f13:
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      puVar5 = *(undefined **)(lVar4 + 8);
      if (DAT_14c951a40 == 0) {
        bVar6 = puVar5 != (undefined *)0x0;
        if (puVar5 != &DAT_14c951a38 && bVar6) {
          do {
            puVar5 = *(undefined **)(puVar5 + 0x30);
            bVar6 = puVar5 != (undefined *)0x0;
            if (puVar5 == &DAT_14c951a38) break;
          } while (puVar5 != (undefined *)0x0);
        }
        if (!bVar6) goto LAB_140c13f83;
      }
      else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c951a40) == 0) goto LAB_140c13f83;
      *plVar1 = lVar4;
      goto LAB_140c13e59;
    }
LAB_140c13f83:
    if (*plVar1 != 0) {
      *plVar1 = 0;
      param_2[2] = 0;
    }
  }
  lVar4 = 0;
LAB_140c13e59:
  param_1[1] = lVar4;
  param_1[2] = param_2[2];
  FUN_1406fa324(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 140c13f98 FUN_140c13f98 body=3268 status=ok
// SIG undefined FUN_140c13f98(void)

void FUN_140c13f98(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  uint *puVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  undefined1 auStack_178 [32];
  uint *local_158;
  longlong *local_150;
  int local_144;
  uint *local_140;
  uint *local_138;
  uint *local_130;
  uint local_124;
  uint *local_120;
  ulonglong local_118;
  longlong *local_110;
  ulonglong local_108;
  ulonglong local_100;
  longlong *local_f8;
  char local_ec [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  char local_b9;
  uint *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  longlong lStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_f8 = param_1;
  cVar5 = (**(code **)(*param_1 + 0x300))();
  local_150 = param_1;
  if (cVar5 == '\0') {
    local_158 = (uint *)(param_1 + 0x5d);
    local_140 = (uint *)(param_1 + 0x5f);
    local_e8 = (longlong *)&DAT_100000000;
    local_d8 = (longlong *)&DAT_ffffffff;
    uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
    uStack_e0 = local_140;
    if ((int)param_1[0x62] == 0) {
      iVar17 = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      iVar17 = (int)local_150[0x62];
    }
    local_88 = (undefined4)uStack_e0;
    uStack_84 = uStack_e0._4_4_;
    lStack_78 = uStack_d0;
    local_80 = local_d8;
    plVar2 = local_80;
    uStack_90 = local_e8;
    local_98 = local_158;
    local_80._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
    if ((local_80._4_4_ != iVar17) || (uStack_e0 != local_140)) {
      iVar23 = local_80._4_4_;
      local_80 = plVar2;
      do {
        lVar20 = *(longlong *)local_98;
        lVar14 = *(longlong *)(lVar20 + 0x10 + (longlong)iVar23 * 0x20);
        if (lVar14 != 0) {
          plVar2 = (longlong *)(lVar14 + 0x80);
          local_b8 = (uint *)&DAT_100000000;
          local_a8 = 0xffffffff;
          uStack_a0 = 0;
          plStack_b0 = plVar2;
          if (*(int *)(lVar14 + 0x98) == 0) {
            iVar6 = 0;
          }
          else {
            FUN_1449c0562(&local_b8);
            iVar6 = *(int *)(lVar14 + 0x98);
          }
          plVar15 = (longlong *)(lVar14 + 0x70);
          local_c8 = CONCAT44(uStack_9c,uStack_a0);
          uStack_d0 = local_a8;
          lVar14 = uStack_d0;
          uStack_e0 = local_b8;
          local_d8 = plStack_b0;
          uStack_d0._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
          iVar7 = uStack_d0._4_4_;
          local_e8 = plVar15;
          if ((uStack_d0._4_4_ != iVar6) || (uStack_d0 = lVar14, plStack_b0 != plVar2)) {
            do {
              uStack_d0 = lVar14;
              lVar14 = *(longlong *)(*local_e8 + 0x10 + (longlong)iVar7 * 0x20);
              if (*(longlong *)(lVar14 + 0x30) != 0) {
                FUN_140c14cda(&local_f8,lVar14 + 0x30);
              }
              uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
              FUN_1449c0562(&uStack_e0);
              iVar7 = uStack_d0._4_4_;
              lVar14 = uStack_d0;
            } while (local_e8 != plVar15 || (local_d8 != plVar2 || uStack_d0._4_4_ != iVar6));
          }
          FUN_140c14cda(&local_f8,*(longlong *)((longlong)iVar23 * 0x20 + lVar20 + 0x10) + 0x30);
        }
        local_80 = (longlong *)CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
        FUN_1449c0562(&uStack_90);
        iVar23 = local_80._4_4_;
        plVar2 = local_80;
      } while (local_98 != local_158 ||
               ((uint *)CONCAT44(uStack_84,local_88) != local_140 || local_80._4_4_ != iVar17));
    }
  }
  else {
    uVar16 = 0;
    lStack_78 = 0;
    local_70 = 0;
    local_98 = (uint *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_ec[0] = '\0';
    local_138 = (uint *)(param_1 + 0x41);
    local_e8 = (longlong *)0x100000000;
    local_d8._0_4_ = 0xffffffff;
    local_d8._4_4_ = 0;
    uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
    uStack_e0 = local_138;
    if ((int)param_1[0x44] == 0) {
      uVar24 = 1;
      iVar17 = 0;
      uVar13 = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      uVar13 = (ulonglong)local_e8 & 0xffffffff;
      uVar24 = (ulonglong)local_e8 >> 0x20;
      uVar16 = (ulonglong)*(uint *)(param_1 + 0x44);
      iVar17 = (uint)uStack_d0;
    }
    local_110 = param_1 + 0x3f;
    uVar22 = (uint)local_d8;
    uVar9 = local_d8._4_4_;
    puVar19 = uStack_e0;
    if (local_d8._4_4_ != (uint)uVar16 || uStack_e0 != local_138) {
      do {
        local_118 = uVar16;
        local_120 = puVar19;
        lVar20 = *local_110;
        lVar14 = (longlong)(int)uVar9 * 0x70;
        local_e8 = *(longlong **)(lVar20 + 0x10 + lVar14);
        local_124 = uVar22;
        local_100 = uVar13;
        if ((local_e8 != (longlong *)0x0) &&
           (FUN_14042e430(&local_98,&local_b8,&local_e8,local_ec), plVar2 = local_f8,
           local_ec[0] == '\0')) {
          plVar15 = (longlong *)(lVar20 + lVar14 + 0x10);
          if ((longlong *)*plVar15 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar15 + 8))();
            FUN_14070f4f8(plVar2,&local_e8);
            FUN_140c14c5e(local_e8,*plVar15);
            puVar19 = uStack_e0;
            *plVar15 = 0;
            if (uStack_e0 != (uint *)0x0) {
              LOCK();
              puVar1 = uStack_e0 + 2;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if (*puVar1 == 0) {
                (*(code *)**(undefined8 **)uStack_e0)(uStack_e0);
                LOCK();
                puVar1 = puVar19 + 3;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if (*puVar1 == 0) {
                  (**(code **)(*(longlong *)puVar19 + 0x10))(puVar19);
                }
              }
            }
          }
        }
        local_158 = (uint *)(lVar20 + lVar14 + 0x28);
        local_d8._4_4_ = *(uint *)(lVar20 + lVar14 + 0x40);
        uVar16 = 1;
        if (local_d8._4_4_ == 0) {
          uVar13 = 0;
          iVar23 = 0;
          uVar22 = 0;
        }
        else {
          puVar19 = *(uint **)(lVar20 + 0x38 + lVar14);
          if (puVar19 == (uint *)0x0) {
            puVar19 = local_158;
          }
          uVar22 = *puVar19;
          if (uVar22 == 0) {
            iVar23 = local_d8._4_4_ + 0x1e;
            if (-1 < (int)(local_d8._4_4_ - 1)) {
              iVar23 = local_d8._4_4_ - 1;
            }
            uVar18 = 0;
            uVar10 = (ulonglong)(uint)(iVar23 >> 5);
            if (iVar23 >> 5 < 1) {
              uVar10 = uVar18;
            }
            uVar13 = (ulonglong)((int)uVar10 + 1);
            iVar23 = (int)uVar10 * 0x20 + 0x20;
            iVar6 = 0;
            do {
              uVar22 = local_d8._4_4_;
              if (uVar10 == uVar18) goto LAB_140c1424c;
              iVar6 = iVar6 + 0x20;
              uVar22 = puVar19[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar22 == 0);
            uVar13 = uVar18 & 0xffffffff;
            iVar23 = iVar6;
          }
          else {
            uVar13 = 0;
            iVar23 = 0;
          }
          uVar16 = (ulonglong)(-uVar22 & uVar22);
          uVar10 = uVar16 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          uVar22 = (iVar23 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if ((int)local_d8._4_4_ <= (int)uVar22) {
            uVar22 = local_d8._4_4_;
          }
        }
LAB_140c1424c:
        local_140 = (uint *)(lVar20 + lVar14 + 0x40);
        local_e8 = (longlong *)CONCAT44(1 << ((byte)local_d8._4_4_ & 0x1f),(int)local_d8._4_4_ >> 5)
        ;
        local_d8._0_4_ = -1 << ((byte)local_d8._4_4_ & 0x1f);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,local_d8._4_4_) & 0xffffffffffffffe0;
        local_144 = iVar17;
        local_108 = uVar24;
        uStack_e0 = local_158;
        if (*local_140 != local_d8._4_4_) {
          local_130 = local_158;
          FUN_1449c0562(&local_e8);
        }
        uVar9 = local_d8._4_4_;
        local_130 = uStack_e0;
        if ((uVar22 != local_d8._4_4_) || (local_158 != uStack_e0)) {
          uVar21 = 0xffffffff;
          do {
            iVar17 = (int)uVar13;
            lVar11 = *(longlong *)(lVar20 + lVar14 + 0x18);
            local_e8 = *(longlong **)(lVar11 + 0x10 + (longlong)(int)uVar22 * 0x20);
            FUN_14042e430(&local_98,&local_b8,&local_e8,local_ec);
            plVar2 = local_f8;
            if (local_ec[0] == '\0') {
              plVar15 = (longlong *)((longlong)(int)uVar22 * 0x20 + lVar11 + 0x10);
              if ((longlong *)*plVar15 != (longlong *)0x0) {
                uVar8 = (**(code **)(*(longlong *)*plVar15 + 8))();
                FUN_14070f4f8(plVar2,&local_e8,uVar8);
                FUN_140c14c5e(local_e8,*plVar15);
                puVar19 = uStack_e0;
                *plVar15 = 0;
                if (uStack_e0 != (uint *)0x0) {
                  LOCK();
                  puVar1 = uStack_e0 + 2;
                  *puVar1 = *puVar1 - 1;
                  UNLOCK();
                  if (*puVar1 == 0) {
                    (*(code *)**(undefined8 **)uStack_e0)(uStack_e0);
                    LOCK();
                    puVar1 = puVar19 + 3;
                    *puVar1 = *puVar1 - 1;
                    UNLOCK();
                    if (*puVar1 == 0) {
                      (**(code **)(*(longlong *)puVar19 + 0x10))(puVar19);
                    }
                  }
                }
              }
            }
            uVar21 = uVar21 & ~(uint)uVar16;
            puVar19 = *(uint **)(lVar20 + lVar14 + 0x38);
            if (puVar19 == (uint *)0x0) {
              puVar19 = local_158;
            }
            uVar3 = *local_140;
            lVar11 = (longlong)iVar17;
            uVar22 = puVar19[lVar11] & uVar21;
            if (uVar22 == 0) {
              iVar6 = uVar3 + 0x1e;
              if (-1 < (int)(uVar3 - 1)) {
                iVar6 = uVar3 - 1;
              }
              iVar6 = iVar6 >> 5;
              iVar23 = iVar23 + 0x20;
              iVar7 = iVar6;
              if (iVar6 < iVar17) {
                iVar7 = iVar17;
              }
              if (iVar17 < iVar6) {
                lVar12 = 0;
                do {
                  uVar22 = puVar19[lVar11 + lVar12 + 1];
                  if (uVar22 != 0) {
                    uVar13 = (ulonglong)(iVar17 + (int)lVar12 + 1);
                    uVar21 = 0xffffffff;
                    goto LAB_140c14406;
                  }
                  iVar23 = iVar23 + 0x20;
                  lVar12 = lVar12 + 1;
                } while (iVar7 - lVar11 != lVar12);
                uVar21 = 0xffffffff;
                iVar17 = iVar7;
              }
              uVar13 = (ulonglong)(iVar17 + 1);
              uVar22 = uVar3;
            }
            else {
LAB_140c14406:
              uVar16 = (ulonglong)(-uVar22 & uVar22);
              uVar24 = uVar16 * 2 + 1;
              lVar11 = 0x3f;
              if (uVar24 != 0) {
                for (; uVar24 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              uVar22 = (iVar23 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
              if ((int)uVar3 <= (int)uVar22) {
                uVar22 = uVar3;
              }
            }
          } while ((uVar22 != uVar9) || (local_158 != local_130));
        }
        uVar22 = local_124 & ~(uint)local_108;
        puVar19 = *(uint **)(local_120 + 4);
        if (*(uint **)(local_120 + 4) == (uint *)0x0) {
          puVar19 = local_120;
        }
        uVar21 = local_120[6];
        iVar23 = (int)local_100;
        lVar20 = (longlong)iVar23;
        uVar9 = puVar19[lVar20] & uVar22;
        uVar13 = local_100;
        iVar17 = local_144;
        if (uVar9 == 0) {
          iVar6 = uVar21 + 0x1e;
          if (-1 < (int)(uVar21 - 1)) {
            iVar6 = uVar21 - 1;
          }
          iVar6 = iVar6 >> 5;
          iVar17 = local_144 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar23) {
            iVar7 = iVar23;
          }
          if (iVar23 < iVar6) {
            lVar14 = 0;
            do {
              uVar9 = puVar19[lVar20 + lVar14 + 1];
              if (uVar9 != 0) {
                uVar22 = 0xffffffff;
                uVar13 = (ulonglong)(iVar23 + (int)lVar14 + 1);
                goto LAB_140c144d1;
              }
              iVar17 = iVar17 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar7 - lVar20 != lVar14);
            uVar22 = 0xffffffff;
            iVar23 = iVar7;
          }
          uVar13 = (ulonglong)(iVar23 + 1);
          uVar24 = local_108;
          uVar9 = uVar21;
        }
        else {
LAB_140c144d1:
          uVar24 = (ulonglong)(-uVar9 & uVar9);
          uVar16 = uVar24 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          uVar9 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if ((int)uVar21 <= (int)uVar9) {
            uVar9 = uVar21;
          }
        }
        puVar19 = local_120;
        uVar16 = local_118;
      } while (uVar9 != (uint)local_118 || local_120 != local_138);
    }
    iVar17 = 0;
    FUN_14570f31c(local_110,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar4 = local_150;
    plVar2 = local_150 + 0x49;
    lStack_78 = 0;
    local_70 = 0;
    local_98 = (uint *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b9 = '\0';
    plVar15 = local_150 + 0x4b;
    local_b8 = (uint *)0x100000000;
    local_a8._0_4_ = 0xffffffff;
    local_a8._4_4_ = 0;
    uStack_a0 = 0;
    plStack_b0 = plVar15;
    if ((int)local_150[0x4e] != 0) {
      FUN_1449c0562(&local_b8);
      iVar17 = (int)plVar4[0x4e];
    }
    uStack_d0._0_4_ = (uint)local_a8;
    uStack_d0._4_4_ = local_a8._4_4_;
    local_c8 = CONCAT44(uStack_9c,uStack_a0);
    uStack_e0 = local_b8;
    local_d8 = plStack_b0;
    local_e8 = plVar2;
    if ((local_a8._4_4_ != iVar17) || (plStack_b0 != plVar15)) {
      do {
        lVar20 = *local_e8;
        lVar14 = (longlong)(int)uStack_d0._4_4_;
        puVar19 = *(uint **)(lVar20 + 0x10 + lVar14 * 0x20);
        if ((puVar19 != (uint *)0x0) &&
           (local_b8 = puVar19, FUN_14042e430(&local_98,local_ec,&local_b8,&local_b9),
           local_b9 == '\0')) {
          FUN_140c14cda(&local_f8,lVar20 + lVar14 * 0x20 + 0x10);
        }
        uStack_d0._0_4_ = (uint)uStack_d0 & ~uStack_e0._4_4_;
        FUN_1449c0562(&uStack_e0);
      } while (((uStack_d0._4_4_ != iVar17) || (local_d8 != plVar15)) || (local_e8 != plVar2));
    }
    iVar17 = 0;
    FUN_1410f1df6(plVar2,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar2 = local_150 + 0x53;
    lStack_78 = 0;
    local_70 = 0;
    local_98 = (uint *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b9 = '\0';
    plVar15 = local_150 + 0x55;
    local_b8 = (uint *)&DAT_100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = 0;
    plStack_b0 = plVar15;
    if ((int)local_150[0x58] != 0) {
      FUN_1449c0562(&local_b8);
      iVar17 = (int)local_150[0x58];
    }
    uStack_d0 = local_a8;
    lVar20 = uStack_d0;
    local_c8 = CONCAT44(uStack_9c,uStack_a0);
    uStack_e0 = local_b8;
    local_d8 = plStack_b0;
    uStack_d0._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
    iVar23 = uStack_d0._4_4_;
    local_e8 = plVar2;
    if ((uStack_d0._4_4_ != iVar17) || (uStack_d0 = lVar20, plStack_b0 != plVar15)) {
      do {
        uStack_d0 = lVar20;
        lVar20 = *local_e8;
        puVar19 = *(uint **)(lVar20 + 0x10 + (longlong)iVar23 * 0x20);
        if ((puVar19 != (uint *)0x0) &&
           (local_b8 = puVar19, FUN_14042e430(&local_98,local_ec,&local_b8,&local_b9),
           local_b9 == '\0')) {
          FUN_140c14cda(&local_f8,lVar20 + (longlong)iVar23 * 0x20 + 0x10);
        }
        uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
        FUN_1449c0562(&uStack_e0);
        iVar23 = uStack_d0._4_4_;
        lVar20 = uStack_d0;
      } while (((uStack_d0._4_4_ != iVar17) || (local_d8 != plVar15)) || (local_e8 != plVar2));
    }
    FUN_14570f388(plVar2,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar2 = local_80;
  }
  local_80 = plVar2;
  FUN_14042ef50(local_150);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c14c5e FUN_140c14c5e body=123 status=ok
// SIG undefined FUN_140c14c5e(void)

void FUN_140c14c5e(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x38);
    plVar2 = (longlong *)0x0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140c14cae;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x3c) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      plVar2 = (longlong *)*puVar3;
      goto LAB_140c14cae;
    }
  }
  plVar2 = (longlong *)0x0;
LAB_140c14cae:
  (**(code **)(*plVar2 + 0x2f0))(plVar2,param_2,1);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  *param_2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 140c14cda FUN_140c14cda body=150 status=ok
// SIG undefined FUN_140c14cda(void)

void FUN_140c14cda(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = (longlong *)*param_2;
  if (plVar2 != (longlong *)0x0) {
    uVar3 = *param_1;
    uVar4 = (**(code **)(*plVar2 + 8))(plVar2);
    FUN_14070f4f8(uVar3,&local_30,uVar4);
    FUN_140c14c5e(local_30,*param_2);
    *param_2 = 0;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_28 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)local_28 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c14d72 FUN_140c14d72 body=329 status=ok
// SIG undefined FUN_140c14d72(void)

void FUN_140c14d72(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar10 = *param_2;
  uVar6 = FUN_140082ff6();
  cVar5 = FUN_1448093f4(lVar10,uVar6);
  if (cVar5 != '\0') {
    local_48 = *param_2;
    local_40 = (longlong *)param_2[1];
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    if (*(byte *)(param_1 + 0x30) != 0) {
      lVar10 = 0;
      uVar8 = 0;
      bVar9 = *(byte *)(param_1 + 0x30);
      do {
        if ((bVar9 & 1) != 0) {
          if ((uVar8 == 0) || (*(char *)(param_1 + 0x40) == '\0')) {
            if ((*(uint *)(local_48 + 0x28c) >> ((uint)uVar8 & 0x1f) & 1) == 0) {
              if ((int)(uint)uVar8 < *(int *)(local_48 + 0x280)) {
                lVar7 = local_48 + 0x208;
                if (*(longlong *)(local_48 + 0x278) != 0) {
                  lVar7 = *(longlong *)(local_48 + 0x278);
                }
                if (*(char *)(lVar7 + lVar10) != '\0') goto LAB_140c14dff;
              }
              FUN_140c15006(local_48,uVar8 & 0xffffffff);
              plVar3 = *(longlong **)(param_1 + 0x48);
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x10))(plVar3,&local_48,1 << ((byte)uVar8 & 0x1f));
              }
            }
          }
          else {
            FUN_140c14ebc(local_48,uVar8 & 0xffffffff);
          }
        }
LAB_140c14dff:
        uVar8 = uVar8 + 1;
        lVar10 = lVar10 + 0x38;
        bVar4 = 1 < bVar9;
        bVar9 = bVar9 >> 1;
      } while (bVar4);
    }
    plVar3 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
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
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c14ebc FUN_140c14ebc body=330 status=ok
// SIG undefined FUN_140c14ebc(void)

void FUN_140c14ebc(longlong param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar19 [16];
  
  uVar1 = (uint)param_2;
  iVar2 = *(int *)(param_1 + 0x280) - uVar1;
  if (iVar2 != 0 && (int)uVar1 <= *(int *)(param_1 + 0x280)) {
    uVar3 = iVar2 - 1;
    auVar8 = pmovsxbq(in_XMM1,0xffff);
    auVar8._0_8_ = auVar8._0_8_ & 0xffffffff00000000 | (ulonglong)*(uint *)(param_1 + 0x288);
    iVar13 = uVar1 + 1;
    iVar15 = uVar1 + 2;
    iVar17 = uVar1 + 3;
    auVar19 = pmovsxbd(unaff_XMM7,0x4040404);
    auVar11 = ZEXT416(*(uint *)(param_1 + 0x28c));
    iVar4 = 4;
    uVar12 = uVar1;
    do {
      auVar10 = auVar11;
      auVar7 = auVar8;
      auVar9._0_4_ = (int)(float)(uVar12 * 0x800000 + 0x3f800000);
      auVar9._4_4_ = (int)(float)(iVar13 * 0x800000 + 0x3f800000);
      auVar9._8_4_ = (int)(float)(iVar15 * 0x800000 + 0x3f800000);
      auVar9._12_4_ = (int)(float)(iVar17 * 0x800000 + 0x3f800000);
      auVar11 = auVar9 | auVar10;
      auVar8 = ~auVar9 & auVar7;
      uVar12 = uVar12 + auVar19._0_4_;
      iVar13 = iVar13 + auVar19._4_4_;
      iVar15 = iVar15 + auVar19._8_4_;
      iVar17 = iVar17 + auVar19._12_4_;
      iVar5 = iVar4 + -4;
      iVar6 = iVar4 + (iVar2 + 3U & 0xfffffffc);
      iVar4 = iVar5;
    } while (iVar6 != 8);
    uVar12 = -iVar5;
    uVar14 = uVar12 | 1;
    uVar16 = uVar12 | 2;
    uVar18 = uVar12 | 3;
    auVar19._0_4_ = -(uint)(((uVar12 < uVar3) * uVar12 | (uVar12 >= uVar3) * uVar3) == uVar12);
    auVar19._4_4_ = -(uint)(((uVar14 < uVar3) * uVar14 | (uVar14 >= uVar3) * uVar3) == uVar14);
    auVar19._8_4_ = -(uint)(((uVar16 < uVar3) * uVar16 | (uVar16 >= uVar3) * uVar3) == uVar16);
    auVar19._12_4_ = -(uint)(((uVar18 < uVar3) * uVar18 | (uVar18 >= uVar3) * uVar3) == uVar18);
    auVar9 = blendvps(auVar10,auVar11,auVar19);
    auVar8 = blendvps(auVar7,auVar8,auVar19);
    auVar11._0_8_ = auVar8._8_8_;
    auVar11._8_4_ = auVar8._8_4_;
    auVar11._12_4_ = auVar8._12_4_;
    auVar7._0_8_ = auVar9._8_8_;
    auVar7._8_4_ = auVar9._8_4_;
    auVar7._12_4_ = auVar9._12_4_;
    *(uint *)(param_1 + 0x28c) = SUB164(auVar7 | auVar9,4) | SUB164(auVar7 | auVar9,0);
    *(uint *)(param_1 + 0x288) = SUB164(auVar11 & auVar8,4) & SUB164(auVar11 & auVar8,0);
    FUN_148a223ae(param_1 + 0x208,uVar1,CONCAT71((uint7)(uint3)(uVar12 >> 8),1));
  }
  *(uint *)(param_1 + 0x28c) = *(uint *)(param_1 + 0x28c) | 1 << (param_2 & 0x1f);
  return;
}



// FUNCTION 140c15006 FUN_140c15006 body=130 status=ok
// SIG undefined FUN_140c15006(void)

undefined8 FUN_140c15006(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = param_1 + 0x208;
  uVar4 = (uint)param_2;
  if ((int)uVar4 < *(int *)(param_1 + 0x280)) {
    lVar1 = *(longlong *)(param_1 + 0x278);
    lVar2 = lVar1;
    if (lVar1 == 0) {
      lVar2 = lVar3;
    }
    if (*(char *)(lVar2 + (ulonglong)uVar4 * 0x38) != '\0') {
      return 0;
    }
  }
  else {
    FUN_140c15088(lVar3,uVar4 + 1,1);
    lVar1 = *(longlong *)(param_1 + 0x278);
  }
  if (lVar1 != 0) {
    lVar3 = lVar1;
  }
  *(undefined1 *)(lVar3 + (ulonglong)uVar4 * 0x38) = 1;
  uVar4 = 1 << (param_2 & 0x1f);
  *(uint *)(param_1 + 0x288) = *(uint *)(param_1 + 0x288) | uVar4;
  return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
}



// FUNCTION 140c15088 FUN_140c15088 body=151 status=ok
// SIG undefined FUN_140c15088(void)

void FUN_140c15088(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x78) = param_2;
    if ((uint)(*(int *)(param_1 + 0x7c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_148a278c6(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x70);
    if (*(longlong *)(param_1 + 0x70) == 0) {
      lVar2 = param_1;
    }
    memset((void *)((longlong)iVar1 * 0x38 + lVar2),0,(longlong)(param_2 - iVar1) * 0x38);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_148a27954(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_148a279bc(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140c15120 FUN_140c15120 body=206 status=ok
// SIG undefined FUN_140c15120(void)

void FUN_140c15120(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar3 < 8) {
    FUN_1406276ca(param_2,param_1 + 0x10);
  }
  else {
    FUN_140c151f0(param_1 + 0x10,param_2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c151f0 FUN_140c151f0 body=571 status=ok
// SIG undefined FUN_140c151f0(void)

void FUN_140c151f0(undefined8 *param_1,longlong *param_2,char param_3)

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
  local_24 = 4;
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
    FUN_1403b0476(param_2,param_1);
    goto LAB_140c1531a;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) << 2,
             (longlong)*(int *)((longlong)param_1 + 0xc) << 2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_140c1531a;
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
LAB_140c15307:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28 << 2);
  }
  else {
    if (local_24 == 4) {
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
      if (local_28 < 0x20000000) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_28;
        if (*(uint *)((longlong)param_1 + 0xc) != local_28) {
          FUN_14481578e(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_1446f48e2(param_1,iVar4);
        }
        goto LAB_140c15307;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_140c1531a:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c1542c FUN_140c1542c body=154 status=ok
// SIG undefined FUN_140c1542c(void)

undefined1 FUN_140c1542c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    lVar4 = FUN_140c154c8();
    if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x170), lVar4 != 0)) &&
       (lVar1 = *param_2, lVar1 != 0)) {
      uVar3 = FUN_1408966e4(param_1);
      local_28 = lVar1;
      uVar5 = FUN_1403363fe(lVar4);
      lVar4 = FUN_1403362f0(lVar4,uVar3,uVar5);
      if (lVar4 != 0) {
        if (*(char *)(lVar4 + 0x11) == '\0') {
          uVar2 = *(undefined1 *)(lVar4 + 0x12);
        }
        else {
          uVar2 = 1;
        }
        goto LAB_140c15499;
      }
    }
  }
  uVar2 = 0;
LAB_140c15499:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c154c8 FUN_140c154c8 body=75 status=ok
// SIG undefined FUN_140c154c8(void)

longlong FUN_140c154c8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x958) + 0x10))(param_1 + 0x958);
  if (lVar1 != 0) {
    lVar2 = FUN_1406f6176();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}


