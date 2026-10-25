// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1402218d6 FUN_1402218d6 body=74 status=ok
// SIG undefined FUN_1402218d6(void)

longlong FUN_1402218d6(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x41) == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x48);
  }
  else if ((*(char *)(param_1 + 0x41) == '\0') && (*(longlong *)(param_1 + 0x20) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x70);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 140221920 FUN_140221920 body=661 status=ok
// SIG undefined FUN_140221920(void)

undefined4 FUN_140221920(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  
  iVar2 = *(int *)((longlong)param_3 + 0xc);
  FUN_144a65a1e(*param_3,(int)param_3[1]);
  *(undefined4 *)(param_3 + 1) = 0;
  if ((iVar2 < 0) && (*(int *)((longlong)param_3 + 0xc) != 0)) {
    FUN_145811e2e(param_3,0);
  }
  plVar7 = (longlong *)FUN_14107a796(param_1,*param_2);
  if (plVar7 != (longlong *)0x0) {
    iVar2 = (int)plVar7[5];
    if (iVar2 == 0) {
      uVar13 = 1;
      uVar17 = 0;
      iVar16 = 0;
      iVar6 = 0;
    }
    else {
      puVar8 = (uint *)plVar7[4];
      if ((uint *)plVar7[4] == (uint *)0x0) {
        puVar8 = (uint *)(plVar7 + 2);
      }
      uVar12 = *puVar8;
      if (uVar12 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar17 = 0;
        uVar13 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar13 = uVar17;
        }
        iVar16 = 0;
        do {
          if (uVar13 == uVar17) goto LAB_140221a0d;
          iVar16 = iVar16 + 0x20;
          uVar12 = puVar8[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar17 = 0;
        iVar16 = 0;
      }
      uVar13 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar13 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar6 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar12 = 0xffffffff;
      do {
        lVar18 = (longlong)iVar6 * 0x90 + *plVar7;
        cVar5 = (**(code **)(*param_1 + 0x2e8))(param_1,lVar18,param_2);
        if (cVar5 != '\0') {
          lVar14 = 0x48;
          if (*(longlong *)(lVar18 + 0x48) == *(longlong *)(lVar18 + 0x30)) {
            lVar14 = 0x30;
          }
          iVar6 = (int)param_3[1];
          lVar15 = (longlong)iVar6;
          *(uint *)(param_3 + 1) = iVar6 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar6 + 1U) {
            FUN_14011bb82(param_3,iVar6);
          }
          lVar4 = *param_3;
          *(undefined8 *)(lVar4 + lVar15 * 0x18) = *(undefined8 *)(lVar18 + lVar14);
          *(undefined8 *)(lVar4 + 8 + lVar15 * 0x18) = *(undefined8 *)(lVar18 + 8 + lVar14);
          lVar18 = *(longlong *)(lVar18 + 0x10 + lVar14);
          *(longlong *)(lVar4 + 0x10 + lVar15 * 0x18) = lVar18;
          if (lVar18 != 0) {
            LOCK();
            *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
            UNLOCK();
          }
        }
        uVar12 = uVar12 & ~(uint)uVar13;
        puVar8 = (uint *)plVar7[4];
        if ((uint *)plVar7[4] == (uint *)0x0) {
          puVar8 = (uint *)(plVar7 + 2);
        }
        iVar3 = (int)plVar7[5];
        iVar6 = (int)uVar17;
        lVar18 = (longlong)iVar6;
        uVar11 = puVar8[lVar18] & uVar12;
        if (uVar11 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar6) {
            iVar10 = iVar6;
          }
          if (iVar6 < iVar9) {
            lVar14 = 0;
            do {
              uVar11 = puVar8[lVar18 + lVar14 + 1];
              if (uVar11 != 0) {
                uVar17 = (ulonglong)(iVar6 + (int)lVar14 + 1);
                uVar12 = 0xffffffff;
                goto LAB_140221b57;
              }
              iVar16 = iVar16 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar10 - lVar18 != lVar14);
            uVar12 = 0xffffffff;
            iVar6 = iVar10;
          }
          uVar17 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_140221b57:
          uVar13 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar13 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar6 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
  }
LAB_140221a0d:
  return (int)param_3[1];
}



// FUNCTION 140221bb6 FUN_140221bb6 body=26 status=ok
// SIG undefined FUN_140221bb6(void)

void FUN_140221bb6(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
  FUN_140221bd8(uVar1);
  return;
}



// FUNCTION 140221bd8 FUN_140221bd8 body=80 status=ok
// SIG undefined FUN_140221bd8(void)

void FUN_140221bd8(longlong param_1)

{
  if (*(int *)(param_1 + 0x14) < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_146ea0880(param_1 + 8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    return;
  }
  FUN_140221dc0(param_1 + 0x20);
  FUN_140221c28(param_1 + 0x20);
  return;
}



// FUNCTION 140221c28 FUN_140221c28 body=407 status=ok
// SIG undefined FUN_140221c28(void)

void FUN_140221c28(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar9 = 0;
    uVar12 = 1;
    iVar3 = 0;
    iVar10 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar9 = 0;
      uVar12 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar12 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar12 == uVar9) goto LAB_140221d62;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar7[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar3 * 0x20) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)uVar9;
      lVar11 = (longlong)iVar3;
      uVar4 = puVar7[lVar11] & uVar13;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar5 <= iVar3) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar7[lVar11 + lVar8 + 1];
          if (uVar4 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar6 - lVar11 == lVar8) goto LAB_140221d62;
        }
        uVar9 = (ulonglong)(iVar3 + (int)lVar8 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
LAB_140221d62:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 140221dc0 FUN_140221dc0 body=481 status=ok
// SIG undefined FUN_140221dc0(void)

void FUN_140221dc0(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar2 = (int)param_1[9];
  iVar8 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar8 >> 2) {
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar11 = 0;
      uVar13 = 1;
      iVar8 = 0;
      iVar10 = 0;
    }
    else {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        uVar11 = 0;
        uVar13 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar13 = uVar11;
        }
        iVar10 = 0;
        do {
          if (uVar13 == uVar11) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar9 = puVar12[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar11 = 0;
        iVar10 = 0;
      }
      uVar13 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      uVar9 = 0xffffffff;
      do {
        *(undefined4 *)
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x1c + (longlong)iVar8 * 0x20) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar13 & uVar9;
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 2);
        }
        iVar3 = (int)param_1[5];
        iVar8 = (int)uVar11;
        lVar14 = (longlong)iVar8;
        uVar7 = puVar12[lVar14] & uVar9;
        if (uVar7 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar8) {
            iVar6 = iVar8;
          }
          if (iVar8 < iVar5) {
            lVar15 = 0;
            do {
              uVar7 = puVar12[lVar14 + lVar15 + 1];
              if (uVar7 != 0) {
                uVar11 = (ulonglong)(iVar8 + (int)lVar15 + 1);
                uVar9 = 0xffffffff;
                goto LAB_140221f09;
              }
              iVar10 = iVar10 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar6 - lVar14 != lVar15);
            uVar9 = 0xffffffff;
            iVar8 = iVar6;
          }
          uVar11 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar3;
        }
        else {
LAB_140221f09:
          uVar13 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar14 = 0;
    do {
      *(undefined4 *)((longlong)plVar4 + lVar14 * 4) = 0xffffffff;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)param_1[9]);
  }
  return;
}



// FUNCTION 140221fa2 FUN_140221fa2 body=181 status=ok
// SIG undefined FUN_140221fa2(void)

void FUN_140221fa2(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x128;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x130);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x138) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar4 * 0x18);
        if (*puVar3 == param_2) break;
        iVar4 = (int)puVar3[2];
        puVar3 = (ulonglong *)0x0;
      } while (iVar4 != -1);
      goto LAB_14022202a;
    }
  }
  puVar3 = (ulonglong *)0x0;
LAB_14022202a:
  if ((longlong)(int)puVar3[1] == -1) {
    return;
  }
  FUN_140222058(*(undefined8 *)(*(longlong *)(param_1 + 0xe0) + (longlong)(int)puVar3[1] * 8));
  return;
}



// FUNCTION 140222058 FUN_140222058 body=401 status=ok
// SIG undefined FUN_140222058(void)

void FUN_140222058(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x420) != *(int *)(param_1 + 0x44c)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x450;
    if (*(longlong *)(param_1 + 0x458) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x458);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x460) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x418) + (longlong)iVar3 * 0x168;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x418) + (longlong)iVar3 * 0x168) == param_2)
        break;
        iVar3 = *(int *)(lVar2 + 0x160);
        lVar2 = 0;
      } while (iVar3 != -1);
      goto LAB_1402220fc;
    }
  }
  lVar2 = 0;
LAB_1402220fc:
  iVar3 = *(int *)(lVar2 + 0xc);
  if (iVar3 != -1) {
    FUN_1402221ea(param_2,&local_50,iVar3);
    local_40 = local_50;
    local_38 = local_48;
    local_78 = param_2 + 0xf8;
    FUN_144a41dda(&local_50,param_2 + 0x68,param_2 + 0x70,iVar3);
    local_68 = 0;
    uStack_60 = 0;
    FUN_1402222a4(param_1 + 0x2d0,&local_68,&local_40,0);
    local_70 = *(undefined4 *)(param_1 + 0x414);
    local_78 = CONCAT44(local_78._4_4_,(undefined4)uStack_60);
    FUN_141d55bd0(local_50,local_68,*(undefined8 *)(param_1 + 0x2e0),0);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402221ea FUN_1402221ea body=185 status=ok
// SIG undefined FUN_1402221ea(void)

void FUN_1402221ea(longlong param_1,longlong *param_2,uint param_3)

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
    uVar13 = *(uint *)(lVar3 + 0xe8);
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
        uVar1 = *(uint *)(*(longlong *)(lVar3 + 0xe0) + (ulonglong)uVar11 * 4);
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
    plVar6 = (longlong *)(lVar3 + 0x48);
    iVar2 = *(int *)(*(longlong *)(lVar3 + 0xe0) + uVar12 * 4);
    iVar8 = -iVar2;
    if (iVar8 < 0) {
      iVar8 = iVar2;
    }
    iVar8 = iVar8 - param_3;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1f8);
    lVar7 = (longlong)(int)param_3;
    plVar6 = (longlong *)(*(longlong *)(lVar3 + 8 + lVar7 * 0x18) + 0x28);
    iVar8 = *(int *)(lVar3 + 0x14 + lVar7 * 0x18);
    param_3 = *(uint *)(lVar3 + 0x10 + lVar7 * 0x18);
  }
  *param_2 = (longlong)(int)param_3 * 0xc + *plVar6;
  *(int *)(param_2 + 1) = iVar8;
  return;
}



// FUNCTION 1402222a4 FUN_1402222a4 body=640 status=ok
// SIG undefined FUN_1402222a4(void)

void FUN_1402222a4(longlong *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  FUN_1401637d6(param_2,(int)param_1[1]);
  if (param_4 == '\0') {
    FUN_140aacae8(param_2,(int)param_1[1],1);
    FUN_141d55b40(*param_2,*param_3,*param_1,(int)param_1[1]);
    return;
  }
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    lVar7 = 0;
    do {
      lVar4 = (longlong)*(int *)(lVar2 + 4 + lVar7);
      lVar6 = *param_3;
      lVar5 = (longlong)*(int *)(lVar2 + lVar7);
      fVar14 = *(float *)(lVar6 + 8 + lVar5 * 0xc);
      fVar8 = *(float *)(lVar6 + 8 + lVar4 * 0xc) - fVar14;
      fVar11 = *(float *)(lVar6 + lVar5 * 0xc);
      fVar13 = *(float *)(lVar6 + 4 + lVar5 * 0xc);
      fVar9 = *(float *)(lVar6 + 4 + lVar4 * 0xc) - fVar13;
      fVar10 = *(float *)(lVar6 + lVar4 * 0xc) - fVar11;
      lVar4 = (longlong)*(int *)(lVar2 + 8 + lVar7);
      fVar14 = *(float *)(lVar6 + 8 + lVar4 * 0xc) - fVar14;
      fVar13 = *(float *)(lVar6 + 4 + lVar4 * 0xc) - fVar13;
      fVar11 = *(float *)(lVar6 + lVar4 * 0xc) - fVar11;
      fVar12 = fVar11 * fVar9 - fVar10 * fVar13;
      fVar11 = fVar14 * fVar10 - fVar8 * fVar11;
      fVar14 = fVar13 * fVar8 - fVar14 * fVar9;
      fVar13 = fVar12 * fVar12 + fVar14 * fVar14 + fVar11 * fVar11;
      if (fVar13 < 1e-08) {
        *(undefined4 *)(param_2 + 1) = 0;
        if (*(int *)((longlong)param_2 + 0xc) == 0) {
          return;
        }
        FUN_140163800(param_2,0);
        return;
      }
      iVar1 = (int)param_2[1];
      lVar6 = (longlong)iVar1;
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_140aacb36(param_2,iVar1);
      }
      fVar13 = 1.0 / SQRT(fVar13);
      lVar4 = *param_2;
      *(float *)(lVar4 + lVar6 * 0xc) = fVar14 * fVar13;
      *(float *)(lVar4 + 4 + lVar6 * 0xc) = fVar11 * fVar13;
      *(float *)(lVar4 + 8 + lVar6 * 0xc) = fVar12 * fVar13;
      lVar7 = lVar7 + 0xc;
    } while ((longlong)(int)lVar3 * 0xc != lVar7);
  }
  return;
}



// FUNCTION 140222524 FUN_140222524 body=58 status=ok
// SIG undefined FUN_140222524(void)

void FUN_140222524(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar2 * 8);
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 140222560 FUN_140222560 body=78 status=ok
// SIG undefined FUN_140222560(void)

void FUN_140222560(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab63570;
  param_1[0x72] = &PTR_LAB_14ab63bb0;
  param_1[0x73] = &PTR_LAB_14ab63bd0;
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1402225ae FUN_1402225ae body=251 status=ok
// SIG undefined FUN_1402225ae(void)

void FUN_1402225ae(longlong param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1402226f0(param_1 + 0xe8);
    FUN_1402226aa(param_1 + 0x98);
    FUN_144b3e9f0(local_1c,1);
    if (DAT_14cb1d000 != 0) {
      pvVar2 = TlsGetValue(DAT_14cb1d000);
      TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar2 + 1));
    }
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x250));
    FUN_140222736(param_1 + 0x220,*(undefined8 *)(param_1 + 0x78));
    if (DAT_14cb1d000 != 0) {
      pvVar2 = TlsGetValue(DAT_14cb1d000);
      TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar2 + -1));
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x250));
    lVar1 = *(longlong *)(param_1 + 0x70);
    if (0 < *(int *)(lVar1 + 0x4f8)) {
      *(int *)(lVar1 + 0x4f8) = *(int *)(lVar1 + 0x4f8) + -1;
    }
    if (0 < *(int *)(lVar1 + 0x588)) {
      *(int *)(lVar1 + 0x588) = *(int *)(lVar1 + 0x588) + -1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402226aa FUN_1402226aa body=70 status=ok
// SIG undefined FUN_1402226aa(void)

void FUN_1402226aa(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_144903b84();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1447a08a2(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1402226f0 FUN_1402226f0 body=70 status=ok
// SIG undefined FUN_1402226f0(void)

void FUN_1402226f0(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_140222a80();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14472eb64(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140222736 FUN_140222736 body=85 status=ok
// SIG undefined FUN_140222736(void)

void FUN_140222736(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if ((*(longlong **)(param_1 + 0x28) == (longlong *)0x0) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 8))(), cVar1 == '\0')) {
    FUN_144b3ea50(param_2);
    FUN_144b3ead0(param_2,0);
  }
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))();
  }
  FUN_14022278c(param_1,param_2);
  return;
}



// FUNCTION 14022278c FUN_14022278c body=339 status=ok
// SIG undefined FUN_14022278c(void)

void FUN_14022278c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  longlong local_80;
  undefined4 local_78;
  int local_74;
  longlong local_60;
  undefined4 local_58;
  uint local_54;
  longlong local_50 [5];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_144b3ec20(param_2,local_88);
  iVar1 = (**(code **)(*DAT_14c82b500 + 0x20))();
  lVar2 = *(longlong *)(param_1 + 0x10);
  local_a8 = &local_98;
  local_98 = 0;
  local_90 = 0;
  FUN_1402228e0(lVar2,2,iVar1 + 1,0xff);
  if (lVar2 != 0) {
    lVar2 = lVar2 + 0x18;
  }
  FUN_144b3ee10(param_2,local_88,lVar2,iVar1 + 1);
  if ((local_50[0] != 0) && (*(int *)(local_50[0] + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,local_50[0],0);
    FUN_144b3ec00(local_50);
  }
  local_58 = 0;
  if ((local_60 != 0) && (-1 < (int)local_54)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_60,(ulonglong)local_54 << 4);
  }
  local_60 = 0;
  local_54 = 0x80000000;
  local_78 = 0;
  if ((-1 < (longlong)local_74) && (local_80 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_80,(longlong)local_74 << 2);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402228e0 FUN_1402228e0 body=107 status=ok
// SIG undefined FUN_1402228e0(void)

void FUN_1402228e0(longlong param_1,undefined1 param_2,undefined2 param_3,undefined4 param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x20) = param_2;
  *(undefined2 *)(param_1 + 0x22) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  FUN_14022294c(param_1 + 0x28,param_5);
  if ((int)param_5[1] != 0) {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
  }
  if (*param_5 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14022294c FUN_14022294c body=306 status=ok
// SIG undefined FUN_14022294c(void)

void FUN_14022294c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1402229d5;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1402229ae:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1402229ae;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1402229d5;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1402229d5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140222a80 FUN_140222a80 body=481 status=ok
// SIG undefined FUN_140222a80(void)

void FUN_140222a80(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar2 = (int)param_1[9];
  iVar8 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar8 >> 2) {
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar11 = 0;
      uVar13 = 1;
      iVar8 = 0;
      iVar10 = 0;
    }
    else {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        uVar11 = 0;
        uVar13 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar13 = uVar11;
        }
        iVar10 = 0;
        do {
          if (uVar13 == uVar11) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar9 = puVar12[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar11 = 0;
        iVar10 = 0;
      }
      uVar13 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      uVar9 = 0xffffffff;
      do {
        *(undefined4 *)
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0xc + (longlong)iVar8 * 0x10) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar13 & uVar9;
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 2);
        }
        iVar3 = (int)param_1[5];
        iVar8 = (int)uVar11;
        lVar14 = (longlong)iVar8;
        uVar7 = puVar12[lVar14] & uVar9;
        if (uVar7 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar8) {
            iVar6 = iVar8;
          }
          if (iVar8 < iVar5) {
            lVar15 = 0;
            do {
              uVar7 = puVar12[lVar14 + lVar15 + 1];
              if (uVar7 != 0) {
                uVar11 = (ulonglong)(iVar8 + (int)lVar15 + 1);
                uVar9 = 0xffffffff;
                goto LAB_140222bc9;
              }
              iVar10 = iVar10 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar6 - lVar14 != lVar15);
            uVar9 = 0xffffffff;
            iVar8 = iVar6;
          }
          uVar11 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar3;
        }
        else {
LAB_140222bc9:
          uVar13 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar14 = 0;
    do {
      *(undefined4 *)((longlong)plVar4 + lVar14 * 4) = 0xffffffff;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)param_1[9]);
  }
  return;
}



// FUNCTION 140222c62 FUN_140222c62 body=485 status=ok
// SIG undefined FUN_140222c62(void)

void FUN_140222c62(undefined8 param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == (uint *)0x0) goto LAB_140222e04;
  puVar1 = param_2 + 0x48;
  cVar4 = FUN_144904448(puVar1);
  if ((cVar4 == '\0') || (*(char *)((longlong)param_2 + 0x13a) != '\0')) goto LAB_140222e04;
  if (param_2[1] == 0) {
LAB_140222e27:
    uVar8 = 0;
  }
  else {
    uVar2 = *param_2;
    uVar8 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar7 + 2) != param_2[1] || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))))
      goto LAB_140222e27;
      uVar8 = *puVar7;
    }
  }
  FUN_14026e798(local_40,uVar8);
  lVar6 = FUN_140206ee8(param_2 + 0x36,local_40);
  if (lVar6 == 0) {
    FUN_14072d42a(puVar1,0);
  }
  else {
    iVar5 = _finite((double)*(float *)(lVar6 + 0x48));
    if ((((iVar5 != 0) && (*(char *)(lVar6 + 0x41) == '\0')) &&
        (plVar3 = *(longlong **)puVar1, plVar3 != (longlong *)0x0)) &&
       ((*(longlong *)(param_2 + 0x4a) != -1 && (*plVar3 == *(longlong *)(param_2 + 0x4a))))) {
      *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + 1;
      local_68 = 0;
      FUN_14084a448(plVar3,&local_58,lVar6,uVar8);
      local_58 = 0;
      local_50 = 0xffffffffffffffff;
      *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + -1;
      if ((int)plVar3[0x26] < 1) {
        FUN_1400847bc(plVar3 + 0x17,0);
        if ((int)plVar3[0x21] == 0) {
          FUN_140087e46(plVar3);
          if (*plVar3 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_140222dfd;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar3);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar3);
          }
        }
      }
    }
  }
LAB_140222dfd:
  *(undefined1 *)((longlong)param_2 + 0x13a) = 1;
LAB_140222e04:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140222e48 FUN_140222e48 body=1063 status=ok
// SIG undefined FUN_140222e48(void)

undefined8 *
FUN_140222e48(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  __uint64 *p_Var3;
  longlong *plVar4;
  undefined2 *puVar5;
  bool bVar6;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined1 local_a8 [16];
  longlong *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  longlong *local_78;
  __uint64 *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14026e798(&local_58,param_5);
  local_68 = local_58;
  local_60 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  lVar2 = FUN_140206ee8(param_3,&local_68);
  if (lVar2 != 0) {
    local_70 = (__uint64 *)0x0;
    if (local_58 == 0 || param_5 == 0) {
LAB_140222fc8:
      p_Var3 = (__uint64 *)0x0;
      bVar6 = false;
    }
    else {
      local_88 = *(undefined2 **)(param_5 + 0x18);
      FUN_1400021e4(&local_88,&local_98);
      plVar4 = local_98;
      if (local_90 == 0) {
        plVar4 = (longlong *)&DAT_149dfb77a;
      }
      FUN_140056680(&local_88,plVar4);
      local_b8 = local_b8 & 0xffffff00;
      FUN_14084a140(local_58,&local_78,&local_88,0);
      FUN_1403c75f4(&local_70,&local_78);
      if (local_78 != (longlong *)0x0) {
        *(int *)(local_78 + 0x21) = (int)local_78[0x21] + -1;
        if (((int)local_78[0x26] < 1) &&
           (FUN_1400847bc(local_78 + 0x17,0), (int)local_78[0x21] == 0)) {
          FUN_140087e46(local_78);
          if (*local_78 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_140222f8e;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_78);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_78);
          }
        }
LAB_140222f8e:
        local_78 = (longlong *)0x0;
      }
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_70 == (__uint64 *)0x0) goto LAB_140222fc8;
      bVar6 = *local_70 != 0xffffffffffffffff;
      p_Var3 = local_70;
    }
    if ((param_2 != 0) && (!bVar6)) {
      local_98 = *(longlong **)(param_2 + 0x18);
      FUN_1400021e4(&local_98,&local_88);
      puVar5 = local_88;
      if (local_80 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      FUN_140056680(local_a8,puVar5);
      FUN_14084feb6(&local_98,param_2,local_a8);
      FUN_1403c75f4(&local_70,&local_98);
      plVar4 = local_98;
      if (local_98 != (longlong *)0x0) {
        *(int *)(local_98 + 0x21) = (int)local_98[0x21] + -1;
        if (((int)local_98[0x26] < 1) && (FUN_1400847bc(local_98 + 0x17,0), (int)plVar4[0x21] == 0))
        {
          FUN_140087e46(plVar4);
          if (*plVar4 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_14022306f;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar4);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar4);
          }
        }
LAB_14022306f:
        local_98 = (longlong *)0x0;
      }
      p_Var3 = local_70;
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
        p_Var3 = local_70;
      }
    }
    if (p_Var3 != (__uint64 *)0x0) {
      FUN_144904532(p_Var3,param_4);
      if (((param_6 != 0) && (*local_70 != 0xffffffffffffffff)) && (DAT_14cb25ab0 == '\x01')) {
        AK::SoundEngine::SetSwitch(*(uint *)(param_6 + 0x48),*(uint *)(param_6 + 0x38),*local_70);
      }
      local_b8 = 0;
      FUN_14084a448(local_70,param_1,lVar2,param_5);
      p_Var3 = local_70;
      if (((local_70 != (__uint64 *)0x0) &&
          (*(int *)(local_70 + 0x21) = (int)local_70[0x21] + -1, (int)local_70[0x26] < 1)) &&
         (FUN_1400847bc(local_70 + 0x17,0), (int)p_Var3[0x21] == 0)) {
        FUN_140087e46(p_Var3);
        if (*p_Var3 != 0xffffffffffffffff) {
          if (DAT_14cb259f8 == 0) goto LAB_140223156;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),p_Var3);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),p_Var3);
        }
      }
      goto LAB_140223156;
    }
  }
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  param_1[2] = 0;
LAB_140223156:
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_50 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140223270 FUN_140223270 body=1494 status=ok
// SIG undefined FUN_140223270(void)

void FUN_140223270(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_168 [32];
  undefined4 *local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_130;
  wchar_t *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 *local_110;
  code *local_108;
  code *local_100;
  int local_ec;
  longlong *local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  float local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [24];
  undefined1 local_98 [24];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar8 = *(longlong **)(param_1 + 0x28);
  if (plVar8 == (longlong *)0x0) goto LAB_140223691;
  if (*(int *)(param_1 + 0x38) == 0) {
LAB_14022365a:
    local_e8 = (longlong *)0x0;
    local_ec = 0;
    local_e0 = 0;
  }
  else {
    (**(code **)(*plVar8 + 0x718))(plVar8,local_98,local_b0);
    if ((longlong)*(int *)(param_1 + 0x38) == 0) goto LAB_14022365a;
    puVar11 = *(uint **)(param_1 + 0x30);
    puVar9 = puVar11 + (longlong)*(int *)(param_1 + 0x38) * 4;
    fVar14 = 0.0;
    local_e8 = (longlong *)0x0;
    local_ec = 0;
    local_e0 = 0;
    do {
      plVar8 = *(longlong **)(puVar11 + 2);
      if ((((puVar11[1] != 0 && plVar8 != (longlong *)0x0) && (uVar5 = *puVar11, -1 < (int)uVar5))
          && ((int)uVar5 < DAT_14c9647dc)) &&
         (((lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar7 != 0 &&
           (*(uint *)(lVar7 + 0x10) == puVar11[1])) && ((*(uint *)(lVar7 + 8) & 0x10200000) == 0))))
      {
        if (*(code **)(*plVar8 + 8) == (code *)&LAB_1449493aa) {
          plVar4 = plVar8 + -0xa6;
        }
        else {
          plVar4 = (longlong *)(**(code **)(*plVar8 + 8))(plVar8);
        }
        if (plVar4 != (longlong *)0x0) {
          if (DAT_14cac9ca8 == 0) {
            local_d8 = FUN_141030f22;
            local_100 = FUN_14081d0ea;
            local_108 = FUN_14081d0ea;
            local_110 = &local_d8;
            local_118 = &LAB_1478c0a72;
            local_120 = &LAB_1417b2375;
            local_128 = L"Engine";
            local_130 = 0x1000000000;
            local_138 = 0x10000004;
            local_140 = 8;
            local_148 = (undefined4 *)CONCAT44(local_148._4_4_,0x390);
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          }
          if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
              DAT_14cac9ca8 + 0x30)) {
            lVar7 = FUN_140223847();
            local_b4 = 0;
            local_b8 = 0.0;
            local_bc = 0;
            local_148 = &local_bc;
            local_140 = CONCAT31(local_140._1_3_,1);
            FUN_140223f22(plVar8,lVar7 + 0x38,&local_b4,&local_b8);
            if (plVar4[0x39] == 0) {
LAB_1402235ed:
              local_c8 = DAT_14c8464f0;
              local_d8 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_d0 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            }
            else {
              lVar6 = *(longlong *)(plVar4[0x39] + 0x120);
              fVar13 = local_b8;
              if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0xa8), lVar6 != 0)) {
                lVar3 = FUN_1400b1372();
                lVar6 = *(longlong *)(lVar6 + 0x10);
                if (((*(int *)(lVar6 + 0x38) < *(int *)(lVar3 + 0x38)) ||
                    (fVar13 = local_b8,
                    *(longlong *)
                     (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
                    lVar3 + 0x30)) &&
                   (fVar13 = *(float *)(lVar7 + 0x54), local_b8 <= *(float *)(lVar7 + 0x54))) {
                  fVar13 = local_b8;
                }
              }
              local_b8 = fVar13;
              lVar7 = plVar4[0x39];
              if (lVar7 == 0) goto LAB_1402235ed;
              local_d8 = *(code **)(lVar7 + 0x260);
              uStack_d0 = *(longlong **)(lVar7 + 0x268);
              local_c8 = *(undefined8 *)(lVar7 + 0x270);
            }
            local_148 = (undefined4 *)CONCAT44(local_148._4_4_,local_b4);
            local_140 = local_bc;
            fVar13 = (float)FUN_14022393c(&local_d8,local_98,local_b0,local_b8);
            if (fVar14 < fVar13) {
              local_d8 = (code *)0x0;
              uStack_d0 = (longlong *)0x0;
              lVar7 = (**(code **)(*plVar8 + 8))(plVar8);
              if (lVar7 == 0) {
                local_d8 = (code *)0x0;
                iVar2 = 0;
              }
              else {
                uVar5 = *(uint *)(lVar7 + 0xc);
                local_d8 = (code *)CONCAT44(local_d8._4_4_,uVar5);
                if ((int)uVar5 < DAT_14c9647dc) {
                  lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
                }
                else {
                  lVar7 = 0;
                }
                iVar2 = *(int *)(lVar7 + 0x10);
                if (*(int *)(lVar7 + 0x10) == 0) {
                  LOCK();
                  iVar2 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar10 = DAT_14c964868 + 1;
                  bVar12 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar2;
                  if (bVar12) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar10);
                  }
                  LOCK();
                  iVar2 = *(int *)(lVar7 + 0x10);
                  bVar12 = iVar2 == 0;
                  if (bVar12) {
                    *(int *)(lVar7 + 0x10) = iVar10;
                    iVar2 = 0;
                  }
                  UNLOCK();
                  if (bVar12) {
                    iVar2 = iVar10;
                  }
                }
              }
              local_d8 = (code *)CONCAT44(iVar2,(undefined4)local_d8);
              cVar1 = FUN_14493c216(&local_d8,0);
              local_e8 = plVar8;
              if (cVar1 != '\0') {
                local_e8 = uStack_d0;
              }
              local_e0 = (ulonglong)local_d8 & 0xffffffff;
              local_ec = local_d8._4_4_;
              fVar14 = fVar13;
            }
          }
        }
      }
      puVar11 = puVar11 + 4;
    } while (puVar11 != puVar9);
  }
  if ((*(char *)(param_1 + 0x128) != '\0') || (*(longlong **)(param_1 + 0x58) == local_e8))
  goto LAB_140223691;
  uVar5 = (uint)local_e0;
  *(uint *)(param_1 + 0x50) = uVar5;
  *(int *)(param_1 + 0x54) = local_ec;
  *(longlong **)(param_1 + 0x58) = local_e8;
  if ((local_e8 == (longlong *)0x0) ||
     ((((local_ec == 0 || ((int)uVar5 < 0)) || (DAT_14c9647dc <= (int)uVar5)) ||
      ((lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (local_e0 >> 0x10 & 0xffff) * 8), lVar7 == 0 ||
       (*(int *)(lVar7 + 0x10) != local_ec)))))) {
    lVar6 = *(longlong *)(param_1 + 0x28);
LAB_14022375a:
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x28);
    plVar8 = local_e8;
    if ((*(uint *)(lVar7 + 8) & 0x10200000) != 0) goto LAB_14022375a;
  }
  FUN_140b75e76(lVar6 + 0x3d88,plVar8);
LAB_140223691:
  if ((local_80 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140223847 FUN_140223847 body=244 status=ok
// SIG undefined FUN_140223847(void)

longlong * FUN_140223847(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb8d8d0 == (longlong *)0x0) {
    memset(&DAT_14cb8d8d8,0,0xb8);
    FUN_145bfeaea(&DAT_14cb8d8d8);
    DAT_14cb8d8d0 = (longlong *)&DAT_14cb8d8d8;
  }
  plVar1 = DAT_14cb8d8d0;
  plVar3 = DAT_14cb8d8d0 + 1;
  if ((char)DAT_14cb8d8d0[2] == '\0') {
LAB_140223874:
    if (*plVar3 == 0) goto LAB_1402238e1;
    cVar2 = FUN_1449e3c20(DAT_14cb8d8d0);
    if (cVar2 == '\0') goto LAB_14022388a;
  }
  else {
    if ((char)DAT_14cb8d8d0[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_140223874;
    }
LAB_1402238e1:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_14022388a;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_usability",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_14022388a:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022393c FUN_14022393c body=555 status=ok
// SIG undefined FUN_14022393c(void)

void FUN_14022393c(double *param_1,double *param_2,undefined8 *param_3,float param_4,float param_5,
                  float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_108 [32];
  float *local_e8;
  float local_d4;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_98 = *param_1;
  dStack_90 = param_1[1];
  local_b8 = *param_1;
  dStack_b0 = param_1[1];
  local_a8 = (double)param_4 + param_1[2];
  local_88 = param_1[2] - (double)param_6;
  dVar8 = local_a8 - param_2[2];
  dVar7 = dStack_b0 - param_2[1];
  dVar9 = local_b8 - *param_2;
  dVar3 = (double)FUN_144719204((int)*param_3,0x4076800000000000);
  dVar4 = (double)FUN_144719204((int)param_3[1],0x4076800000000000);
  dVar1 = sin(dVar3 * 0.017453292519943295);
  dVar3 = cos(dVar3 * 0.017453292519943295);
  dVar2 = sin(dVar4 * 0.017453292519943295);
  dVar4 = cos(dVar4 * 0.017453292519943295);
  dVar8 = (double)((float)SQRT(dVar8 * dVar8 + dVar9 * dVar9 + dVar7 * dVar7) * 100.0);
  local_c0 = dVar1 * dVar8 + param_2[2];
  local_c8 = dVar2 * dVar3 * dVar8 + param_2[1];
  local_d0 = dVar4 * dVar3 * dVar8 + *param_2;
  local_e8 = &local_d4;
  local_d4 = -1.0;
  cVar5 = FUN_140223b68(&local_98,&local_b8,param_2);
  fVar6 = 0.0;
  if (cVar5 != '\0') {
    if (local_d4 <= param_5) {
      fVar6 = (param_5 - local_d4) / param_5;
    }
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar6);
}



// FUNCTION 140223b68 FUN_140223b68 body=953 status=ok
// SIG undefined FUN_140223b68(void)

byte FUN_140223b68(double *param_1,double *param_2,double *param_3,double *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  *param_5 = -1.0;
  dVar1 = param_3[2];
  dVar11 = param_4[2] - dVar1;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar15 = param_4[1] - dVar3;
  dVar10 = *param_4 - dVar2;
  if (((9.999999747378752e-05 < ABS(dVar10)) || (9.999999747378752e-05 < ABS(dVar15))) ||
     (9.999999747378752e-05 < ABS(dVar11))) {
    dVar4 = param_1[2];
    dVar7 = param_2[2] - dVar4;
    dVar5 = *param_1;
    dVar6 = param_1[1];
    dVar9 = param_2[1] - dVar6;
    dVar8 = *param_2 - dVar5;
    if (((9.999999747378752e-05 < ABS(dVar8)) || (9.999999747378752e-05 < ABS(dVar9))) ||
       (9.999999747378752e-05 < ABS(dVar7))) {
      fVar16 = (float)(dVar11 * dVar7 + dVar10 * dVar8 + dVar15 * dVar9);
      fVar17 = (float)(dVar11 * dVar11 + dVar10 * dVar10 + dVar15 * dVar15);
      fVar18 = (float)(dVar7 * dVar7 + dVar8 * dVar8 + dVar9 * dVar9) * fVar17 - fVar16 * fVar16;
      if (1e-08 < ABS(fVar18)) {
        fVar14 = (float)((dVar4 - dVar1) * dVar11 +
                        (dVar5 - dVar2) * dVar10 + dVar15 * (dVar6 - dVar3));
        fVar18 = (fVar14 * fVar16 -
                 (float)((dVar4 - dVar1) * dVar7 + (dVar5 - dVar2) * dVar8 + (dVar6 - dVar3) * dVar9
                        ) * fVar17) / fVar18;
        fVar17 = (fVar16 * fVar18 + fVar14) / fVar17;
        dVar12 = (double)fVar18;
        dVar13 = (double)fVar17;
        dVar1 = (dVar7 * dVar12 + dVar4) - (dVar11 * dVar13 + dVar1);
        dVar3 = (dVar9 * dVar12 + dVar6) - (dVar15 * dVar13 + dVar3);
        dVar2 = (dVar8 * dVar12 + dVar5) - (dVar10 * dVar13 + dVar2);
        *param_5 = (float)SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3);
        return (fVar17 <= 1.0 && fVar18 <= 1.0) & -(0.0 <= fVar17) & -(0.0 <= fVar18);
      }
    }
  }
  return 0;
}



// FUNCTION 140223f22 FUN_140223f22 body=760 status=ok
// SIG undefined FUN_140223f22(void)

void FUN_140223f22(longlong *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  char param_6)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  undefined1 local_78 [16];
  double local_68;
  code *local_60 [3];
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar3 = (longlong *)(**(code **)(*param_1 + 8))();
  if (plVar3 != (longlong *)0x0) {
    if (DAT_14cac9ca8 == 0) {
      local_90 = local_60;
      local_60[0] = FUN_141030f22;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_14081d0ea;
      local_98 = &LAB_1478c0a72;
      local_a0 = &LAB_1417b2375;
      local_a8 = L"Engine";
      local_b0 = 0x1000000000;
      local_b8 = 0x10000004;
      local_c0 = 8;
      local_c8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    iVar1 = *(int *)(DAT_14cac9ca8 + 0x38);
    if ((iVar1 <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)iVar1 * 8) == DAT_14cac9ca8 + 0x30
       )) {
      fVar6 = param_2[2];
      local_c8 = CONCAT31(local_c8._1_3_,1);
      (**(code **)(*plVar3 + 800))
                (plVar3,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),local_60,local_78);
      *param_3 = param_2[1];
      *param_4 = *param_2;
      if (DAT_14cb6a468 == 0) {
        local_90 = &local_48;
        local_48 = FUN_140940a0a;
        local_80 = FUN_14081d0ea;
        local_88 = (code *)&LAB_146522c10;
        local_98 = &LAB_14876160d;
        local_a0 = &LAB_140e30382;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10000004;
        local_c0 = 0x10;
        local_c8 = 0x9c0;
        FUN_14081cfa3(L"/Script/GbxGame",L"InventoryPickup",&DAT_14cb6a468,FUN_146526160);
      }
      if ((((*(int *)(DAT_14cb6a468 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cb6a468 + 0x38) * 8) ==
            DAT_14cb6a468 + 0x30)) && (-1 < (char)plVar3[0x12d])) && (plVar3[0xf2] != 0)) {
        if (plVar3[0x9d] == 0) {
          fVar4 = 0.0;
        }
        else {
          fVar4 = *(float *)(plVar3[0x9d] + 0xd0);
        }
        fVar5 = *param_4;
        if (*param_4 <= fVar4) {
          fVar5 = fVar4;
        }
        *param_4 = fVar5;
      }
      if (param_6 != '\0') {
        *param_3 = param_2[3] * *param_3;
        *param_4 = param_2[4] * *param_4;
        if (((plVar3[0x39] == 0) || (lVar2 = *(longlong *)(plVar3[0x39] + 0x120), lVar2 == 0)) ||
           (*(longlong *)(lVar2 + 0xa8) == 0)) {
          fVar6 = fVar6 * param_2[5];
        }
        else {
          fVar6 = fVar6 * param_2[6];
        }
      }
      *param_5 = (float)((double)fVar6 * local_68);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022421c FUN_14022421c body=351 status=ok
// SIG undefined FUN_14022421c(void)

undefined8 FUN_14022421c(longlong param_1,longlong param_2)

{
  char cVar1;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x1990) == '\0') {
    if (param_2 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_50 = &local_30;
        local_30 = FUN_141030f22;
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
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
         (*(longlong *)(param_2 + 0xf48) == param_1)) goto LAB_1402242d2;
    }
    if (*(longlong **)(param_1 + 0x3f70) != (longlong *)0x0) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x3f70) + 0x80))();
      if (cVar1 != '\0') goto LAB_1402242d2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
LAB_1402242d2:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022439a FUN_14022439a body=983 status=ok
// SIG undefined FUN_14022439a(void)

ulonglong FUN_14022439a(longlong *param_1,longlong *param_2,longlong *param_3,double *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  double *pdVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  bool bVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  undefined7 uVar9;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar9 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar8 = CONCAT71(uVar9,1);
  if (((*(byte *)(param_1 + 0xc) & 8) == 0) && ((longlong *)param_1[0x78] != param_2)) {
    bVar10 = param_1 == (longlong *)0x0;
    if ((!bVar10) && (plVar7 = param_1, param_1 != param_3)) {
      do {
        plVar7 = (longlong *)plVar7[0x2d];
        bVar10 = plVar7 == (longlong *)0x0;
      } while (!bVar10 && plVar7 != param_3);
    }
    if (bVar10) {
      bVar10 = param_1 != (longlong *)0x0;
      if ((bVar10) && (plVar7 = param_1, param_1 != param_2)) {
        do {
          plVar7 = (longlong *)plVar7[0x2d];
          bVar10 = plVar7 != (longlong *)0x0;
        } while (plVar7 != param_2 && bVar10);
      }
      if ((((param_1 != param_3) && (!bVar10)) && ((longlong *)param_1[0x36] != param_3)) &&
         ((cVar2 = (**(code **)(*param_1 + 0x4e8))(param_1,param_3), cVar2 == '\0' &&
          ((param_3 == (longlong *)0x0 ||
           (cVar2 = (**(code **)(*param_3 + 0x4e8))(param_3,param_1), cVar2 == '\0')))))) {
        if (((*(byte *)(param_1 + 0xc) & 0x84) == 0) ||
           (((longlong *)param_1[0x39] != (longlong *)0x0 &&
            (iVar3 = (**(code **)(*(longlong *)param_1[0x39] + 0x570))(), iVar3 != 0)))) {
          lVar4 = (**(code **)(*param_1 + 0x640))(param_1);
          if (((lVar4 != 0) && (lVar1 = *(longlong *)(lVar4 + 0xa8), lVar1 != 0)) &&
             (lVar6 = (**(code **)(*param_1 + 0x638))(param_1), lVar6 != 0)) {
            if (DAT_14cad2858 == 0) {
              local_60 = &local_48;
              local_48 = FUN_144a7958c;
              local_50 = FUN_14081d0ea;
              local_58 = &LAB_146395584;
              local_68 = &LAB_147a0ba80;
              local_70 = &LAB_14575ccce;
              local_78 = L"Engine";
              local_80 = 0x40000000000;
              local_88 = 0x10000004;
              local_90 = 0x10;
              local_98 = 0x1180;
              FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe)
              ;
            }
            if (((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                  (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) ||
               (lVar1 == param_1[0x2d])) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
            }
          }
          if (DAT_14cac0fa8 == (longlong *)0x0) {
            local_60 = &local_48;
            local_48 = FUN_141030f22;
            local_50 = FUN_14081d0ea;
            local_58 = &LAB_141117124;
            local_68 = &LAB_14786c867;
            local_70 = &LAB_145abcadb;
            local_78 = L"Game";
            local_80 = 0;
            local_88 = 0x10000004;
            local_90 = 8;
            local_98 = 0x438;
            FUN_14081cfa3(L"/Script/Engine",L"GameNetworkManager",&DAT_14cac0fa8,&DAT_14786c866);
          }
          plVar7 = DAT_14cac0fa8;
          lVar4 = DAT_14cac0fa8[0x22];
          if (lVar4 == 0) {
            (**(code **)(*DAT_14cac0fa8 + 1000))(DAT_14cac0fa8);
            lVar4 = plVar7[0x22];
          }
          if (*(char *)(lVar4 + 0x42d) == '\x01') {
            lVar4 = param_1[0x39];
            if (lVar4 == 0) {
              pdVar5 = (double *)&DAT_14c8464e0;
              dVar11 = DAT_14c8464f0;
            }
            else {
              pdVar5 = (double *)(lVar4 + 0x260);
              dVar11 = *(double *)(lVar4 + 0x270);
            }
            uVar8 = CONCAT71(uVar9,(dVar11 - param_4[2]) * (dVar11 - param_4[2]) +
                                   (pdVar5[1] - param_4[1]) * (pdVar5[1] - param_4[1]) +
                                   (*pdVar5 - *param_4) * (*pdVar5 - *param_4) <
                                   (double)*(float *)((longlong)param_1 + 0x194));
          }
        }
        else {
          uVar8 = 0;
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 140224796 FUN_140224796 body=120 status=ok
// SIG undefined FUN_140224796(void)

ulonglong FUN_140224796(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x640))();
  if (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0xa8);
    if (lVar1 != 0 && lVar1 == param_2) {
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  uVar2 = 0;
  if ((param_2 != 0) && (lVar1 = param_1[0x39], lVar1 != 0)) {
    if (*(longlong *)(param_2 + 0x1c8) == 0) {
      uVar2 = 0;
    }
    else {
      do {
        lVar1 = *(longlong *)(lVar1 + 0x120);
        uVar2 = (ulonglong)(lVar1 != 0);
      } while (lVar1 != *(longlong *)(param_2 + 0x1c8) && lVar1 != 0);
    }
  }
  return uVar2;
}



// FUNCTION 140224850 FUN_140224850 body=110 status=ok
// SIG undefined FUN_140224850(void)

void FUN_140224850(longlong param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x17c9) == '\x01') {
    if (DAT_14cb71f68 == '\x01') {
      FUN_14022492a(param_1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x17ca) == '\0') {
    FUN_1402248be(param_1);
    if (DAT_14cb71f68 == '\x01') {
      FUN_14022589e(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1402248be FUN_1402248be body=108 status=ok
// SIG undefined FUN_1402248be(void)

void FUN_1402248be(longlong *param_1,undefined4 param_2)

{
  if ((*(byte *)(param_1 + 0x86) & 1) == 0) {
    (**(code **)(*param_1 + 0x310))(param_1,param_2);
  }
  if (DAT_14c9a62a8 != 0) {
    FUN_1449292ca(param_1);
  }
  if (DAT_14cb71f68 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014022490b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x3a0))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14022492a FUN_14022492a body=292 status=ok
// SIG undefined FUN_14022492a(void)

void FUN_14022492a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((*(longlong *)(param_1 + 0x768) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x768) + 0x32b8), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0xae8), lVar1 != 0)) {
    lVar3 = FUN_14016d2a8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      *(undefined1 *)(param_1 + 0x1579) = *(undefined1 *)(lVar1 + 0x1579);
      *(undefined1 *)(param_1 + 0x157a) = *(undefined1 *)(lVar1 + 0x157a);
      *(undefined1 *)(param_1 + 0x6e6) = *(undefined1 *)(lVar1 + 0x6e6);
      *(undefined1 *)(param_1 + 0x1608) = *(undefined1 *)(lVar1 + 0x1608);
      *(undefined1 *)(param_1 + 0x157c) = *(undefined1 *)(lVar1 + 0x157c);
      *(undefined1 *)(param_1 + 0x6c4) = *(undefined1 *)(lVar1 + 0x6c4);
      *(undefined4 *)(param_1 + 0x57c) = *(undefined4 *)(lVar1 + 0x57c);
      *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(lVar1 + 0x578);
      *(undefined1 *)(param_1 + 0x6e9) = *(undefined1 *)(lVar1 + 0x6e9);
      *(undefined1 *)(param_1 + 0x6ea) = *(undefined1 *)(lVar1 + 0x6ea);
      *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(lVar1 + 0x6b8);
      *(undefined4 *)(param_1 + 0x684) = *(undefined4 *)(lVar1 + 0x684);
      uVar2 = *(undefined8 *)(lVar1 + 0x588);
      *(undefined8 *)(param_1 + 0x580) = *(undefined8 *)(lVar1 + 0x580);
      *(undefined8 *)(param_1 + 0x588) = uVar2;
      *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(lVar1 + 0x590);
    }
  }
  return;
}



// FUNCTION 140224a4e FUN_140224a4e body=3662 status=ok
// SIG undefined FUN_140224a4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140224a4e(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  double dVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  double *pdVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined1 auStack_118 [32];
  uint local_f8;
  int local_f4;
  uint local_f0;
  int iStack_ec;
  longlong *local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((char)param_1[0xe3] != '\0') goto LAB_1402256ba;
  lVar11 = param_1[199];
  if (lVar11 != 0) {
    plVar12 = (longlong *)param_1[4];
    lVar10 = *(longlong *)(lVar11 + 0x11e8);
    if (lVar10 != 0) {
      pdVar9 = (double *)&DAT_14c846480;
      if (*(longlong *)(lVar11 + 0x1c8) != 0) {
        pdVar9 = (double *)(*(longlong *)(lVar11 + 0x1c8) + 0x240);
      }
      dVar29 = *pdVar9;
      auVar36 = *(undefined1 (*) [16])(pdVar9 + 8);
      dVar25 = *(double *)(lVar10 + 0x128);
      dVar33 = *(double *)(lVar10 + 0x130);
      dVar4 = -dVar29;
      dVar21 = -pdVar9[1];
      dVar26 = pdVar9[2] * -1.0;
      dVar22 = pdVar9[3] * 1.0;
      dVar30 = dVar33 * dVar4 - dVar21 * dVar25;
      dVar32 = *(double *)(lVar10 + 0x138) * dVar21 - dVar26 * dVar33;
      dVar23 = dVar25 * dVar26 - *(double *)(lVar10 + 0x138) * dVar4;
      dVar32 = dVar32 + dVar32;
      dVar23 = dVar23 + dVar23;
      dVar30 = dVar30 + dVar30;
      auVar27 = divpd(_DAT_149934d80,auVar36);
      auVar35._0_8_ =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar36._0_8_)) & auVar27._0_8_) *
           ((dVar30 * dVar21 - dVar23 * dVar26) + dVar22 * dVar32 + dVar25);
      auVar35._8_8_ =
           (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar36._8_8_)) & auVar27._8_8_) *
           (dVar29 * dVar30 + dVar26 * dVar32 + dVar22 * dVar23 + dVar33);
      dVar33 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(pdVar9[10])) &
                       (ulonglong)(1.0 / pdVar9[10])) *
               (dVar30 * dVar22 + *(double *)(lVar10 + 0x138) + (dVar23 * dVar4 - dVar32 * dVar21));
      *(undefined1 (*) [16])(param_1 + 0xcd) = auVar35;
      param_1[0xcf] = (longlong)dVar33;
      auVar36 = divpd(auVar35,*(undefined1 (*) [16])(plVar12 + 0x50));
      dVar33 = dVar33 / (double)plVar12[0x52];
      *(undefined1 (*) [16])(param_1 + 0xcd) = auVar36;
      dVar34 = auVar36._0_8_;
      dVar37 = auVar36._8_8_;
      param_1[0xcf] = (longlong)dVar33;
      dVar25 = dVar34 * dVar34 + dVar37 * dVar37;
      dVar30 = dVar33 * dVar33 + dVar25;
      *(float *)(param_1 + 0xd0) = (float)SQRT(dVar30);
      *(float *)((longlong)param_1 + 0x684) = (float)SQRT(dVar25);
      dVar23 = *(double *)(lVar10 + 0x128);
      dVar32 = *(double *)(lVar10 + 0x130);
      dVar24 = dVar32 * dVar4 - dVar21 * dVar23;
      dVar28 = *(double *)(lVar10 + 0x138) * dVar21 - dVar26 * dVar32;
      dVar31 = dVar23 * dVar26 - *(double *)(lVar10 + 0x138) * dVar4;
      dVar28 = dVar28 + dVar28;
      dVar31 = dVar31 + dVar31;
      dVar24 = dVar24 + dVar24;
      dVar20 = dVar24 * dVar22 + *(double *)(lVar10 + 0x138) + (dVar31 * dVar4 - dVar28 * dVar21);
      dVar23 = (dVar24 * dVar21 - dVar31 * dVar26) + dVar22 * dVar28 + dVar23;
      dVar29 = dVar29 * dVar24 + dVar26 * dVar28 + dVar22 * dVar31 + dVar32;
      param_1[0xd1] = (longlong)dVar23;
      param_1[0xd2] = (longlong)dVar29;
      dVar29 = dVar23 * dVar23 + dVar29 * dVar29;
      param_1[0xd3] = (longlong)dVar20;
      *(float *)(param_1 + 0xd4) = (float)SQRT(dVar20 * dVar20 + dVar29);
      *(float *)((longlong)param_1 + 0x6a4) = (float)SQRT(dVar29);
      if ((*(longlong *)(&DAT_00001ce8 + lVar10) == 0) ||
         (*(byte *)(*(longlong *)(&DAT_00001ce8 + lVar10) + 0x178) < 2)) {
        cVar7 = *(char *)(lVar10 + 0x1ee0);
joined_r0x000140224e6d:
        if (cVar7 != '\0') {
LAB_140224e6f:
          if (0.0 < *(float *)(param_1 + 0xcc)) {
            fVar17 = *(float *)(lVar10 + 0x1ed8 + (ulonglong)(dVar33 <= 0.0) * 4) /
                     *(float *)(param_1 + 0xcc);
            auVar36 = ZEXT416((uint)fVar17);
            if (1.0 <= fVar17) {
              auVar36 = ZEXT416(0x3f800000);
            }
            if (auVar36._0_4_ <= 0.0) {
              auVar27._12_4_ = 0;
              auVar27._0_12_ = auVar36._4_12_;
              auVar36 = auVar27 << 0x20;
            }
            dVar33 = dVar33 * (double)auVar36._0_4_;
            dVar30 = dVar33 * dVar33 + dVar25;
          }
        }
      }
      else {
        plVar13 = *(longlong **)(lVar10 + 0x1eb8);
        if (plVar13 != (longlong *)0x0) {
          if (*(code **)(*plVar13 + 0x40) != (code *)&LAB_1449cc0ea) {
            cVar7 = (**(code **)(*plVar13 + 0x40))();
            goto joined_r0x000140224e6d;
          }
          if ((*(char *)((longlong)plVar13 + 0xb2) != '\0') ||
             ((*(char *)((longlong)plVar13 + 0x79) == '\0' &&
              (((int)plVar13[4] < 1 || ((char)plVar13[0xf] != '\x01')))))) goto LAB_140224e22;
          goto LAB_140224e6f;
        }
      }
LAB_140224e22:
      if (((dVar30 != 1.0) || (dVar29 = dVar37, dVar25 = dVar33, dVar23 = dVar34, NAN(dVar30))) &&
         (dVar29 = DAT_14c8464e8, dVar25 = DAT_14c8464f0, dVar23 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar30)) {
        dVar30 = 1.0 / SQRT(dVar30);
        dVar29 = dVar37 * dVar30;
        dVar25 = dVar33 * dVar30;
        dVar23 = dVar34 * dVar30;
      }
      *(float *)((longlong)param_1 + 0x6ac) = (float)dVar23;
      *(float *)(param_1 + 0xd6) = (float)dVar29;
      *(float *)((longlong)param_1 + 0x6b4) = (float)dVar25;
      dVar25 = dVar23 * dVar23 + dVar29 * dVar29;
      dVar33 = 0.0;
      if (dVar25 <= 0.0) {
        *(undefined4 *)(param_1 + 0xd7) = 0;
        fVar17 = 180.0;
      }
      else {
        dVar32 = dVar23;
        dVar30 = dVar29;
        if (9.99999993922529e-09 < dVar25) {
          dVar33 = 1.0 / SQRT(dVar25);
          dVar32 = dVar23 * dVar33;
          dVar30 = dVar29 * dVar33;
          dVar33 = dVar33 * 0.0;
        }
        dVar24 = DAT_14c8462d8 * DAT_14c8462d8 + DAT_14c8462e0 * DAT_14c8462e0;
        dVar20 = 0.0;
        dVar28 = DAT_14c8462e0;
        dVar31 = DAT_14c8462d8;
        if (9.99999993922529e-09 < dVar24) {
          dVar20 = 1.0 / SQRT(dVar24);
          dVar31 = DAT_14c8462d8 * dVar20;
          dVar28 = DAT_14c8462e0 * dVar20;
          dVar20 = dVar20 * 0.0;
        }
        dVar30 = dVar30 * dVar28 + dVar32 * dVar31 + dVar33 * dVar20;
        dVar33 = dVar30;
        if (1.0 <= dVar30) {
          dVar33 = 1.0;
        }
        dVar33 = acos((double)(-(ulonglong)(dVar30 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar30 < -1.0) & (ulonglong)dVar33));
        if ((float)dVar29 <= 0.0) {
          dVar33 = -dVar33;
        }
        *(float *)(param_1 + 0xd7) = (float)(dVar33 * 57.29577951308232);
        dVar33 = -DAT_14c8462e0;
        dVar30 = -DAT_14c8462d8;
        dVar32 = 0.0;
        if (dVar25 <= 9.99999993922529e-09) {
          dVar25 = 0.0;
        }
        else {
          dVar25 = 1.0 / SQRT(dVar25);
          dVar23 = dVar23 * dVar25;
          dVar29 = dVar29 * dVar25;
          dVar25 = dVar25 * 0.0;
        }
        fVar17 = *(float *)(param_1 + 0xd6);
        dVar24 = DAT_14c8462d8 * DAT_14c8462d8 + DAT_14c8462e0 * DAT_14c8462e0;
        if (9.99999993922529e-09 < dVar24) {
          dVar32 = 1.0 / SQRT(dVar24);
          dVar30 = dVar30 * dVar32;
          dVar33 = dVar33 * dVar32;
          dVar32 = dVar32 * 0.0;
        }
        dVar33 = dVar29 * dVar33 + dVar23 * dVar30 + dVar25 * dVar32;
        dVar25 = dVar33;
        if (1.0 <= dVar33) {
          dVar25 = 1.0;
        }
        dVar25 = acos((double)(-(ulonglong)(dVar33 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar33 < -1.0) & (ulonglong)dVar25));
        if (0.0 < fVar17) {
          dVar25 = -dVar25;
        }
        fVar17 = (float)(dVar25 * 57.29577951308232);
      }
      *(float *)((longlong)param_1 + 0x6bc) = fVar17;
      dVar25 = *(double *)(lVar10 + 0x388);
      dVar33 = *(double *)(lVar10 + 0x390);
      dVar30 = dVar33 * dVar4 - dVar21 * dVar25;
      dVar29 = *(double *)(lVar10 + 0x398) * dVar21 - dVar26 * dVar33;
      dVar23 = dVar25 * dVar26 - *(double *)(lVar10 + 0x398) * dVar4;
      dVar29 = dVar29 + dVar29;
      dVar23 = dVar23 + dVar23;
      dVar30 = dVar30 + dVar30;
      dVar21 = (dVar30 * dVar21 - dVar23 * dVar26) + dVar22 * dVar29 + dVar25;
      dVar22 = (dVar26 * dVar29 - dVar30 * dVar4) + dVar22 * dVar23 + dVar33;
      dVar26 = 0.0;
      if (((dVar22 != 0.0) || (NAN(dVar22))) || ((dVar21 != 0.0 || (NAN(dVar21))))) {
        dVar26 = atan2(dVar22,dVar21);
      }
      *(float *)(param_1 + 0xd8) = (float)(dVar26 * 57.29577951308232);
      uVar6 = (**(code **)(*(longlong *)(lVar10 + 0x178) + 0xd0))(lVar10 + 0x178);
      *(undefined1 *)((longlong)param_1 + 0x6e6) = uVar6;
      uVar6 = (**(code **)(*(longlong *)(lVar10 + 0x178) + 0xf0))(lVar10 + 0x178);
      *(undefined1 *)((longlong)param_1 + 0x6e7) = uVar6;
      *(byte *)(param_1 + 0xdd) = *(byte *)(lVar10 + 0x1f18) & 1;
      bVar2 = (&DAT_00001100)[lVar10];
      if ((0xc < bVar2) || (bVar16 = true, (0x1028U >> (bVar2 & 0x1f) & 1) == 0)) {
        bVar16 = bVar2 == 0xd;
      }
      *(bool *)((longlong)param_1 + 0x6c4) = bVar16;
      if ((*(longlong *)(&DAT_00001ce8 + lVar10) == 0) ||
         (*(byte *)(*(longlong *)(&DAT_00001ce8 + lVar10) + 0x178) < 2)) {
        uVar6 = *(char *)(lVar10 + 0x1ee0) != '\0';
      }
      else {
        plVar13 = *(longlong **)(lVar10 + 0x1eb8);
        if (plVar13 == (longlong *)0x0) {
LAB_1402252ee:
          uVar6 = 0;
        }
        else if (*(code **)(*plVar13 + 0x40) == (code *)&LAB_1449cc0ea) {
          if (*(char *)((longlong)plVar13 + 0xb2) != '\0') goto LAB_1402252ee;
          if (*(char *)((longlong)plVar13 + 0x79) == '\0') {
            if ((int)plVar13[4] < 1) goto LAB_1402252ee;
            uVar6 = (undefined1)plVar13[0xf];
          }
          else {
            uVar6 = 1;
          }
        }
        else {
          uVar6 = (**(code **)(*plVar13 + 0x40))();
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x6e9) = uVar6;
      if ((*(longlong *)(&DAT_00001ce8 + lVar10) == 0) ||
         (*(byte *)(*(longlong *)(&DAT_00001ce8 + lVar10) + 0x178) < 2)) {
        uVar6 = *(char *)(lVar10 + 0x1ee9) != '\0';
      }
      else {
        plVar13 = *(longlong **)(lVar10 + 0x1eb8);
        if (plVar13 == (longlong *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar13 + 0x70))(plVar13,1);
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x6ea) = uVar6;
      iVar8 = *(int *)(&DAT_00002bb0 + lVar10);
      *(bool *)((longlong)param_1 + 0x6e4) = 0 < iVar8;
      lVar11 = param_1[0xdc];
      *(int *)(param_1 + 0xdc) = iVar8;
      *(bool *)((longlong)param_1 + 0x6e5) = (int)lVar11 < iVar8;
      bVar16 = 10.0 <= *(float *)((longlong)param_1 + 0x684);
      *(bool *)((longlong)param_1 + 0x664) = bVar16;
      uVar6 = 1;
      if (!bVar16) {
        uVar6 = (undefined1)param_1[0xb6];
      }
      *(undefined1 *)((longlong)param_1 + 0x665) = uVar6;
      if (*(char *)((longlong)param_1 + 0x6c4) == '\x01') {
        param_1[0xdb] = param_1[0xcf];
        param_1[0xd9] = param_1[0xcd];
        param_1[0xda] = param_1[0xce];
      }
    }
    uVar6 = (**(code **)(*plVar12 + 0x480))(plVar12,DAT_14c9abbf0);
    *(undefined1 *)((longlong)param_1 + 0x6eb) = uVar6;
  }
  if (((((*(int *)((longlong)param_1 + 0x64c) == 0) ||
        (uVar3 = *(uint *)(param_1 + 0xc9), (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)) ||
      ((plVar12 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar12 == (longlong *)0x0 || ((int)plVar12[2] != *(int *)((longlong)param_1 + 0x64c))))) ||
     (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (lVar11 = *plVar12, lVar11 == 0)))) {
    *(undefined4 *)(param_1 + 0xdf) = 0;
    lVar11 = DAT_14c846500;
    param_1[0xe0] = DAT_14c8464f8;
    param_1[0xe1] = lVar11;
    lVar11 = DAT_14c846508;
LAB_140225658:
    param_1[0xe2] = lVar11;
  }
  else {
    lVar10 = (**(code **)(*param_1 + 0x180))(param_1);
    uVar5 = DAT_14cb71f80;
    if (lVar10 == 0) {
LAB_140225631:
      *(undefined4 *)(param_1 + 0xdf) = *(undefined4 *)(lVar11 + 0x684);
      lVar10 = *(longlong *)(lVar11 + 0x588);
      param_1[0xe0] = *(longlong *)(lVar11 + 0x580);
      param_1[0xe1] = lVar10;
      lVar11 = *(longlong *)(lVar11 + 0x590);
      goto LAB_140225658;
    }
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_f0,uVar5,lVar10);
    plVar12 = local_e8;
    lVar10 = CONCAT44(iStack_ec,local_f0);
    if ((lVar10 == 0) || (local_e8 == (longlong *)0x0)) {
      plVar12 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_e8 + 0xc) = *(int *)((longlong)local_e8 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar13 = local_e8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar13 = local_e8 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_e8 + 0x10))(local_e8);
        }
      }
    }
    if (plVar12 == (longlong *)0x0) goto LAB_140225631;
    iVar8 = (int)plVar12[1];
    do {
      plVar13 = (longlong *)0x0;
      if (iVar8 == 0) break;
      LOCK();
      iVar14 = (int)plVar12[1];
      bVar16 = iVar8 == iVar14;
      if (bVar16) {
        *(int *)(plVar12 + 1) = iVar8 + 1;
        iVar14 = iVar8;
      }
      iVar8 = iVar14;
      UNLOCK();
      plVar13 = plVar12;
    } while (!bVar16);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    if (plVar13 == (longlong *)0x0) goto LAB_140225631;
    if ((lVar10 != 0) && (DAT_14cb71bf8 != '\0')) {
      iStack_ec = 0;
      if (param_1[200] == 0) {
        local_f0 = 0;
        iVar8 = 0;
      }
      else {
        local_f0 = *(uint *)(param_1[200] + 0xc);
        if ((int)local_f0 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((local_f0 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_f0 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar8 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar14 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar14);
          }
          LOCK();
          iVar8 = *(int *)(lVar15 + 0x10);
          bVar16 = iVar8 == 0;
          if (bVar16) {
            *(int *)(lVar15 + 0x10) = iVar14;
            iVar8 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar8 = iVar14;
          }
        }
      }
      local_f4 = 0;
      iStack_ec = iVar8;
      if (*(longlong *)(lVar11 + 0x640) == 0) {
        local_f8 = 0;
        iVar8 = 0;
      }
      else {
        local_f8 = *(uint *)(*(longlong *)(lVar11 + 0x640) + 0xc);
        if ((int)local_f8 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((local_f8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_f8 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar8 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar14 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar14);
          }
          LOCK();
          iVar8 = *(int *)(lVar15 + 0x10);
          bVar16 = iVar8 == 0;
          if (bVar16) {
            *(int *)(lVar15 + 0x10) = iVar14;
            iVar8 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar8 = iVar14;
          }
        }
      }
      local_f4 = iVar8;
      FUN_144877af8(lVar10,&local_f8,&local_f0,0);
    }
    *(undefined4 *)(param_1 + 0xdf) = *(undefined4 *)(lVar11 + 0x684);
    lVar10 = *(longlong *)(lVar11 + 0x588);
    param_1[0xe0] = *(longlong *)(lVar11 + 0x580);
    param_1[0xe1] = lVar10;
    param_1[0xe2] = *(longlong *)(lVar11 + 0x590);
    LOCK();
    plVar12 = plVar13 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  fVar18 = (float)FUN_144945460(param_1,DAT_14cadddf8);
  fVar19 = (float)FUN_144945460(param_1,DAT_14cadde18);
  fVar17 = 1.0 - fVar18;
  if (1.0 <= 1.0 - fVar18) {
    fVar17 = 1.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x6ec) = fVar17;
  fVar17 = 1.0 - fVar19;
  if (1.0 <= 1.0 - fVar19) {
    fVar17 = 1.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  *(float *)(param_1 + 0xde) = fVar17;
LAB_1402256ba:
  if ((local_e0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022589e FUN_14022589e body=4364 status=ok
// SIG undefined FUN_14022589e(void)

void FUN_14022589e(longlong param_1,float param_2)

{
  longlong *plVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  byte bVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  undefined1 local_b8 [8];
  double local_b0;
  double local_a0;
  double local_98;
  double local_90;
  code *local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar1 = (longlong *)(param_1 + 0x768);
  plVar16 = *(longlong **)(param_1 + 0x768);
  if (plVar16 != (longlong *)0x0) {
    pcVar3 = *(code **)(*plVar16 + 0x5e8);
    if (pcVar3 == FUN_140972dde) {
      if (plVar16[0x76] == 0) {
        pcVar3 = *(code **)(*plVar16 + 0x5f8);
        if (pcVar3 == FUN_144784df4) {
          if (*(code **)(plVar16[0x784] + 0x18) == (code *)&LAB_144904684) {
            if (((((*(int *)((longlong)plVar16 + 0x75b4) != 0) &&
                  (uVar2 = *(uint *)(plVar16 + 0xeb6), -1 < (int)uVar2)) &&
                 ((int)uVar2 < DAT_14c9647dc)) &&
                ((plVar15 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                 plVar15 != (longlong *)0x0 &&
                 ((int)plVar15[2] == *(int *)((longlong)plVar16 + 0x75b4))))) &&
               ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
                lVar11 = *plVar15;
              }
              else {
                lVar11 = 0;
              }
              lVar11 = lVar11 + 0x110;
              goto LAB_140225d55;
            }
          }
          else {
            lVar11 = (**(code **)(plVar16[0x784] + 0x18))(plVar16 + 0x784);
LAB_140225d55:
            if (lVar11 != 0) {
              lVar11 = *(longlong *)(lVar11 + 0x20);
              goto LAB_140225d62;
            }
          }
        }
        else {
          lVar11 = (*pcVar3)();
LAB_140225d62:
          if (lVar11 != 0) {
            lVar11 = *(longlong *)(lVar11 + 0x3b0);
            goto LAB_140225d72;
          }
        }
        goto LAB_1402259a2;
      }
    }
    else {
      lVar11 = (*pcVar3)();
LAB_140225d72:
      if (lVar11 == 0) {
LAB_1402259a2:
        if (*(char *)(param_1 + 0x1578) != '\x01') goto LAB_1402259af;
      }
    }
    if ((*plVar1 != 0) && (*(char *)(param_1 + 0x718) == '\0')) {
      plVar16 = *(longlong **)(&DAT_00006850 + *plVar1);
      if (plVar16 != (longlong *)0x0) {
        if ((*(byte *)(plVar16 + 0x6d5) & 4) == 0) {
          cVar7 = (**(code **)(plVar16[0x2f] + 0xd8))(plVar16 + 0x2f);
          if ((cVar7 == '\0') || (plVar16[0x842] == 0)) {
            bVar17 = false;
          }
          else {
            bVar17 = plVar16[0x57c] == DAT_14cbc6c58;
          }
        }
        else {
          bVar17 = true;
        }
        *(bool *)(param_1 + 0x1579) = bVar17;
        *(bool *)(param_1 + 0x157b) = *(int *)(*(longlong *)(param_1 + 0x768) + 0x6700) != 0;
        *(byte *)(param_1 + 0x157a) = *(byte *)(plVar16 + 0x6d5) & 1;
        uVar8 = (**(code **)(*plVar16 + 0xeb8))(plVar16);
        *(undefined1 *)(param_1 + 0x157c) = uVar8;
        *(undefined1 *)(param_1 + 0x157d) = *(undefined1 *)((longlong)plVar16 + 0x422c);
        uVar8 = (**(code **)(*plVar16 + 0xf38))(plVar16);
        *(undefined1 *)(param_1 + 0x157e) = uVar8;
        uVar8 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x768) + 0x3b48) + 0x60))
                          (*(longlong *)(param_1 + 0x768) + 0x3b48);
        *(undefined1 *)(param_1 + 0x157f) = uVar8;
        lVar11 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x768) + 0x3ac8) + 0x28))();
        if (lVar11 == 0) {
          bVar17 = false;
        }
        else {
          bVar17 = (*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0;
        }
        *(bool *)(param_1 + 0x1580) = bVar17;
        *(bool *)(param_1 + 0x1581) = (char)plVar16[0x220] == '\r';
        if (*(char *)(param_1 + 0x157e) == '\x01') {
          *(char *)(param_1 + 0x1582) = (char)plVar16[0x889];
        }
        if (((*(byte *)(plVar16 + 0x897) & 2) == 0) || ((char)plVar16[0x220] != '\n')) {
          bVar17 = false;
        }
        else {
          bVar17 = plVar16[0x22] != 0;
        }
        *(bool *)(param_1 + 0x158c) = bVar17;
        if ((char)plVar16[0x220] == '\n') {
          lVar11 = plVar16[0x22];
          *(bool *)(param_1 + 0x1583) = lVar11 != 0;
          if (lVar11 == 0) goto LAB_140225eb3;
          lVar11 = plVar16[0x3a2];
          if ((DAT_14c950c29 == '\x01') && (lVar11 != 0)) {
            FUN_1456cec3c(lVar11);
          }
          plVar15 = (longlong *)plVar16[0x3a3];
          if (plVar15 != (longlong *)0x0 && lVar11 != 0) {
            (**(code **)(*plVar15 + 0x40))(plVar15,&local_88,plVar16);
            *(float *)(param_1 + 0x1584) =
                 (float)((double)plVar16[0x27] * local_78 +
                        (double)plVar16[0x25] * (double)local_88 + (double)plVar16[0x26] * local_80)
            ;
            (**(code **)(*plVar15 + 0x30))(plVar15,&local_88);
            *(float *)(param_1 + 0x1588) =
                 (float)((double)plVar16[0x27] * local_78 +
                        (double)plVar16[0x25] * (double)local_88 + (double)plVar16[0x26] * local_80)
            ;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x1583) = 0;
LAB_140225eb3:
          *(undefined8 *)(param_1 + 0x1584) = 0;
        }
        bVar17 = plVar16[0x57c] == DAT_14cbc6c68;
        if ((!bVar17) || (uVar8 = 1, *(char *)(param_1 + 0x158e) == '\x01')) {
          uVar8 = 0;
        }
        *(undefined1 *)(param_1 + 0x158d) = uVar8;
        *(bool *)(param_1 + 0x158e) = bVar17;
        if (*(char *)(param_1 + 0x1583) == '\0') {
          *(byte *)(param_1 + 0x1594) = *(byte *)(param_1 + 0x6c4);
          *(byte *)(param_1 + 0x1595) = *(byte *)(param_1 + 0x6c4) ^ 1;
          *(undefined2 *)(param_1 + 0x1596) = 0;
          *(undefined1 *)(param_1 + 0x1598) = 0;
          *(undefined8 *)(param_1 + 0x159c) = 0;
          *(undefined4 *)(param_1 + 0x15a4) = 0;
        }
        else {
          fVar23 = 1.0 - *(float *)(param_1 + 0x6b4);
          if (1.0 <= fVar23) {
            fVar23 = 1.0;
          }
          if (fVar23 <= 0.0) {
            fVar23 = 0.0;
          }
          *(float *)(param_1 + 0x1590) = fVar23;
          *(undefined2 *)(param_1 + 0x1594) = 0;
          *(byte *)(param_1 + 0x1596) = *(byte *)(param_1 + 0x158c) ^ 1;
          *(undefined2 *)(param_1 + 0x1597) = 0;
          *(undefined8 *)(param_1 + 0x159c) = 0;
          *(undefined4 *)(param_1 + 0x15a4) = 0;
          lVar11 = plVar16[0x3a2];
          if ((DAT_14c950c29 == '\x01') && (lVar11 != 0)) {
            FUN_1456cec3c(lVar11);
          }
          plVar15 = (longlong *)plVar16[0x3a3];
          if (plVar15 != (longlong *)0x0 && lVar11 != 0) {
            (**(code **)(*(longlong *)(&DAT_00001100 + *plVar1) + 0x30))
                      (&DAT_00001100 + *plVar1,local_b8);
            local_a0 = 0.0;
            local_98 = local_b0;
            local_90 = 0.0;
            FUN_144a76660(&local_a0,&local_88);
            (**(code **)(*plVar15 + 0x38))(plVar15,&local_a0,plVar16);
            dVar25 = local_a0 * local_a0 + local_98 * local_98;
            if ((dVar25 != 1.0) || (NAN(dVar25))) {
              dVar21 = DAT_14c8464e8;
              dVar26 = DAT_14c8464f0;
              dVar22 = DAT_14c8464e0;
              if (9.99999993922529e-09 <= dVar25) {
                dVar21 = local_98 * (1.0 / SQRT(dVar25));
                dVar22 = local_a0 * (1.0 / SQRT(dVar25));
                dVar26 = 0.0;
              }
            }
            else {
              dVar21 = local_98;
              dVar26 = (double)(-(ulonglong)(local_90 == 0.0) & (ulonglong)local_90);
              dVar22 = local_a0;
            }
            dVar21 = (-dVar22 * (double)local_88 - dVar21 * local_80) - dVar26 * local_78;
            dVar25 = dVar21;
            if (1.0 <= dVar21) {
              dVar25 = 1.0;
            }
            dVar25 = acos((double)(-(ulonglong)(dVar21 < -1.0) & 0xbff0000000000000 |
                                  ~-(ulonglong)(dVar21 < -1.0) & (ulonglong)dVar25));
            (**(code **)(*plVar15 + 0x40))(plVar15,&local_a0,plVar16);
            uVar18 = -(ulonglong)
                      (0.0 <= local_78 * local_90 +
                              (double)local_88 * local_a0 + local_80 * local_98);
            *(float *)(param_1 + 0x159c) =
                 (float)(double)(~uVar18 & (ulonglong)-(dVar25 * 57.29577951308232) |
                                (ulonglong)(dVar25 * 57.29577951308232) & uVar18);
            cVar7 = (**(code **)(*plVar15 + 0x98))(plVar15);
            if (cVar7 != '\0') {
              *(undefined1 *)(param_1 + 0x1597) = 1;
              *(undefined1 *)(param_1 + 0x1598) = *(undefined1 *)(param_1 + 0x158c);
              dVar25 = (double)plVar16[0x25];
              dVar21 = (double)plVar16[0x26];
              dVar26 = (double)plVar16[0x27];
              dVar22 = dVar26 * dVar26 + dVar25 * dVar25 + dVar21 * dVar21;
              if (((dVar22 != 1.0) || (dVar24 = dVar26, dVar4 = dVar21, dVar5 = dVar25, NAN(dVar22))
                  ) && (dVar24 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
                       9.99999993922529e-09 <= dVar22)) {
                dVar22 = 1.0 / SQRT(dVar22);
                dVar24 = dVar26 * dVar22;
                dVar4 = dVar21 * dVar22;
                dVar5 = dVar25 * dVar22;
              }
              (**(code **)(*plVar15 + 0x40))(plVar15,&local_a0,plVar16);
              *(float *)(param_1 + 0x15a0) =
                   (float)(local_90 * dVar24 + local_a0 * dVar5 + local_98 * dVar4);
              (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
              *(float *)(param_1 + 0x15a4) =
                   (float)(dVar24 * local_90 + dVar5 * local_a0 + dVar4 * local_98);
            }
          }
        }
      }
      plVar16 = *(longlong **)(&DAT_00006850 + *(longlong *)(param_1 + 0x768));
      if ((((plVar16 == (longlong *)0x0) || (*(char *)(param_1 + 0x6c4) == '\0')) ||
          ((cVar7 = FUN_14022753c(plVar16 + 0x3e1), cVar7 == '\0' ||
           ((double)*(float *)(param_1 + 0x15b8) < (double)plVar16[0x27])))) ||
         ((cVar7 = (**(code **)(*plVar16 + 0x878))(plVar16,plVar16 + 0x60d), cVar7 != '\0' &&
          (dVar25 = (double)plVar16[0x611], (**(code **)(*plVar16 + 0x578))(plVar16,&local_88),
          local_78 - (double)*(float *)(param_1 + 0x15bc) <= dVar25)))) {
        fVar20 = 0.0;
        fVar23 = 0.0 - *(float *)(param_1 + 0x15ac);
        if (1e-08 <= fVar23 * fVar23) {
          param_2 = param_2 * *(float *)(param_1 + 0x15b4);
          if (param_2 <= fVar23) {
            fVar23 = param_2;
          }
          if (fVar23 <= -param_2) {
            fVar23 = -param_2;
          }
          fVar20 = *(float *)(param_1 + 0x15ac) + fVar23;
        }
        *(float *)(param_1 + 0x15ac) = fVar20;
      }
      else {
        if (*(float *)(param_1 + 0x15b0) <= 0.0) {
          fVar23 = 1.0;
        }
        else {
          fVar23 = 1.0;
          fVar20 = 1.0 - *(float *)(param_1 + 0x15ac);
          if (1e-08 <= fVar20 * fVar20) {
            param_2 = *(float *)(param_1 + 0x15b0) * param_2;
            if (1.0 <= param_2) {
              param_2 = 1.0;
            }
            if (param_2 <= 0.0) {
              param_2 = 0.0;
            }
            fVar23 = *(float *)(param_1 + 0x15ac) + fVar20 * param_2;
          }
        }
        *(float *)(param_1 + 0x15ac) = fVar23;
      }
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x768) + 0x3b38) + 0x18))
                (*(longlong *)(param_1 + 0x768) + 0x3b38);
      uVar19 = *(undefined4 *)(param_1 + 0x15c0);
      uVar13 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x768) + 0x3b38) + 0x18))
                         (*(longlong *)(param_1 + 0x768) + 0x3b38);
      bVar10 = FUN_140226b70(uVar13);
      *(byte *)(param_1 + 0x15c0) = bVar10;
      *(byte *)(param_1 + 0x15c1) = bVar10;
      (&DAT_000015c2)[param_1] = 0;
      *(byte *)(param_1 + 0x15c3) = bVar10 ^ 1;
      cVar7 = *(char *)(param_1 + 0x15c5);
      bVar6 = 1;
      if (bVar10 == 0) {
        bVar6 = (byte)uVar19;
      }
      *(byte *)(param_1 + 0x15c5) = bVar6;
      bVar9 = 0;
      bVar10 = bVar6;
      if (cVar7 != '\0') {
        bVar10 = 0;
      }
      *(byte *)(param_1 + 0x15c4) = bVar10;
      if (cVar7 == '\x01') {
        bVar9 = bVar6 ^ 1;
      }
      *(byte *)(param_1 + 0x15c6) = bVar9;
      *(byte *)(param_1 + 0x15a8) =
           *(byte *)(param_1 + 0x15a8) & 0xfe | 0.0 < *(float *)(param_1 + 0x15ac);
    }
  }
LAB_1402259af:
  plVar16 = plVar1;
  if (((((*(int *)(param_1 + 0x15e8) == 0) || (uVar2 = *(uint *)(param_1 + 0x15e4), (int)uVar2 < 0))
       || (DAT_14c9647dc <= (int)uVar2)) ||
      (((plVar15 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar15 == (longlong *)0x0 || ((int)plVar15[2] != *(int *)(param_1 + 0x15e8))) ||
       (((*(uint *)(plVar15 + 1) & 0x10200000) != 0 ||
        (plVar16 = plVar15, (*(uint *)(plVar15 + 1) & 0x10200000) == 0)))))) && (*plVar16 != 0)) {
    bVar6 = FUN_140226a92();
  }
  else {
    bVar6 = 0;
  }
  *(bool *)(param_1 + 0x160e) = bVar6 != 0;
  *(byte *)(param_1 + 0x160f) = bVar6 & 1;
  *(byte *)(param_1 + 0x1610) = bVar6 >> 1 & 1;
  if ((*(longlong *)(param_1 + 0x1600) == 0) ||
     ((((plVar16 = plVar1, *(int *)(param_1 + 0x15e8) != 0 &&
        (uVar2 = *(uint *)(param_1 + 0x15e4), -1 < (int)uVar2)) &&
       (((int)uVar2 < DAT_14c9647dc &&
        ((((plVar15 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar15 != (longlong *)0x0 && ((int)plVar15[2] == *(int *)(param_1 + 0x15e8))) &&
          ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) &&
         (plVar16 = plVar15, (*(uint *)(plVar15 + 1) & 0x10200000) != 0)))))) ||
      ((*plVar16 == 0 || (*(longlong *)(param_1 + 0x1570) == 0)))))) {
LAB_140225ae5:
    lVar11 = *plVar1;
  }
  else {
    cVar7 = *(char *)(param_1 + 0x15e1);
    FUN_140226d16(param_1);
    if (cVar7 != *(char *)(param_1 + 0x15e1)) {
      FUN_140ef938e(param_1,*(undefined8 *)(param_1 + 0x1600));
    }
    if (*(char *)(param_1 + 0x172a) != '\x01') goto LAB_140225ae5;
    FUN_140227966(param_1,*(undefined8 *)(param_1 + 0x1600));
    lVar11 = *(longlong *)(param_1 + 0x768);
    lVar12 = *(longlong *)(lVar11 + 0x3c0);
    if (lVar12 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_d0 = &local_88;
        local_88 = FUN_141030f22;
        local_c0 = FUN_14081d0ea;
        local_c8 = &LAB_1459f2e4c;
        local_d8 = &LAB_148c39de3;
        local_e0 = &LAB_1457a9eb2;
        local_e8 = &DAT_149e063b2;
        local_f0 = 0;
        local_f8 = 0x10000004;
        local_100 = 0x10;
        local_108 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
         (lVar11 = FUN_14030d330(lVar12), lVar11 != 0)) {
        *(undefined4 *)(param_1 + 0x17c4) = *(undefined4 *)(lVar11 + 0x36c);
      }
      goto LAB_140225ae5;
    }
  }
  if (((lVar11 == 0) ||
      (lVar11 = (**(code **)(*(longlong *)(lVar11 + 0x3c20) + 0x18))(lVar11 + 0x3c20), lVar11 == 0))
     || (lVar11 = *(longlong *)(lVar11 + 0x20), lVar11 == 0)) {
    *(undefined8 *)(param_1 + 0x1720) = 0;
  }
  else {
    cVar7 = FUN_140227868(param_1 + 0x1720,*(undefined8 *)(lVar11 + 0x428));
    if (cVar7 == '\0') {
      lVar12 = *(longlong *)(lVar11 + 0x428);
      if (lVar12 == 0) {
LAB_1402269a4:
        lVar12 = 0;
      }
      else {
        lVar14 = FUN_144a78c84();
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) goto LAB_1402269a4;
      }
      FUN_14485c47a(param_1 + 0x1720,lVar12);
    }
    lVar11 = *(longlong *)(lVar11 + 0x1700);
    if (lVar11 != 0) {
      *(undefined1 *)(param_1 + 0x16b8) = 1;
      uVar8 = FUN_1402096b0();
      *(undefined1 *)(param_1 + 0x1710) = uVar8;
      *(undefined1 *)(param_1 + 0x1711) = *(undefined1 *)(lVar11 + 0x1cd9);
      uVar13 = *(undefined8 *)(lVar11 + 0x1bf0);
      *(undefined8 *)(param_1 + 0x16c0) = *(undefined8 *)(lVar11 + 0x1be8);
      *(undefined8 *)(param_1 + 0x16c8) = uVar13;
      *(undefined4 *)(param_1 + 0x16d0) = *(undefined4 *)(lVar11 + 0x1c00);
      *(undefined4 *)(param_1 + 0x16d4) = *(undefined4 *)(lVar11 + 0x1c04);
      bVar6 = *(byte *)(lVar11 + 0x1d09);
      *(byte *)(param_1 + 0x1713) = bVar6;
      dVar25 = 0.0;
      if (bVar6 == 0) {
        dVar25 = 1.0;
      }
      dVar24 = *(double *)(lVar11 + 0x870) * dVar25;
      dVar21 = *(double *)(lVar11 + 0x860);
      dVar26 = *(double *)(lVar11 + 0x868);
      *(double *)(param_1 + 0x16e0) = dVar21;
      *(double *)(param_1 + 0x16e8) = dVar26;
      *(double *)(param_1 + 0x16f0) = dVar24;
      dVar22 = *(double *)(lVar11 + 0x888);
      uVar13 = *(undefined8 *)(lVar11 + 0x880);
      *(undefined8 *)(param_1 + 0x16f8) = *(undefined8 *)(lVar11 + 0x878);
      *(undefined8 *)(param_1 + 0x1700) = uVar13;
      *(double *)(param_1 + 0x1708) = dVar25 * dVar22;
      *(float *)(param_1 + 0x16d8) =
           (float)SQRT(dVar24 * dVar24 + dVar21 * dVar21 + dVar26 * dVar26);
      bVar10 = 0;
      if ((*(char *)(param_1 + 0x1712) == '\x01') &&
         (bVar10 = bVar6 ^ 1, *(char *)(lVar11 + 0x1cda) != '\0')) {
        bVar10 = 0;
      }
      *(byte *)(param_1 + 0x1714) = bVar10;
      *(undefined1 *)(param_1 + 0x1712) = *(undefined1 *)(lVar11 + 0x1cda);
      *(undefined4 *)(param_1 + 0x1718) = *(undefined4 *)(lVar11 + 0x1cf8);
      uVar19 = *(undefined4 *)(lVar11 + 0x1cfc);
      goto LAB_140225b98;
    }
  }
  *(undefined1 *)(param_1 + 0x16b8) = 0;
  uVar13 = DAT_14c8463f8;
  *(undefined8 *)(param_1 + 0x16c0) = DAT_14c8463f0;
  *(undefined8 *)(param_1 + 0x16c8) = uVar13;
  *(undefined8 *)(param_1 + 0x16d0) = 0;
  *(undefined4 *)(param_1 + 0x16d8) = 0;
  dVar25 = DAT_14c8464e8;
  *(double *)(param_1 + 0x16e0) = DAT_14c8464e0;
  *(double *)(param_1 + 0x16e8) = dVar25;
  *(double *)(param_1 + 0x16f0) = DAT_14c8464f0;
  dVar25 = DAT_14c8464e8;
  *(double *)(param_1 + 0x16f8) = DAT_14c8464e0;
  *(double *)(param_1 + 0x1700) = dVar25;
  *(double *)(param_1 + 0x1708) = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x1710) = 0;
  *(undefined1 *)(param_1 + 0x1714) = 0;
  *(undefined1 *)(param_1 + 0x1712) = 0;
  *(undefined4 *)(param_1 + 0x1718) = 0;
  uVar19 = 0;
LAB_140225b98:
  *(undefined4 *)(param_1 + 0x171c) = uVar19;
  lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa8);
  if (lVar11 != 0) {
    lVar12 = FUN_1402269ac();
    if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8
         ) == lVar12 + 0x30)) {
      *(undefined1 *)(param_1 + 0x1728) = *(undefined1 *)(lVar11 + 0xbc0);
      *(undefined1 *)(param_1 + 0x1729) = *(undefined1 *)(lVar11 + 0xbc1);
    }
  }
  *(undefined1 *)(param_1 + 0x17c8) = 0;
  if ((((*(longlong *)(param_1 + 0x768) != 0) && (cVar7 = FUN_140226bbe(), cVar7 != '\0')) &&
      (lVar11 = *(longlong *)(param_1 + 0x20), lVar11 != 0)) &&
     ((lVar12 = *(longlong *)(lVar11 + 0xb0), lVar12 != 0 ||
      (lVar12 = FUN_1448abda6(lVar11), lVar12 != 0)))) {
    fVar20 = *(float *)(lVar12 + 0x6f4) + 0.0001;
    fVar23 = 0.2;
    if (0.2 <= fVar20) {
      fVar23 = fVar20;
    }
    if ((*(int *)(lVar11 + 0x3d4) < 0) &&
       ((lVar14 = *(longlong *)(lVar11 + 0xb0), lVar14 != 0 ||
        (lVar14 = FUN_1448abda6(lVar11), lVar14 != 0)))) {
      fVar20 = (float)*(double *)(lVar14 + 0x6d0);
    }
    else {
      fVar20 = *(float *)(lVar11 + 0x3c8);
    }
    *(bool *)(param_1 + 0x17c8) = (double)fVar23 < *(double *)(lVar12 + 0x6d0) - (double)fVar20;
  }
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402269ac FUN_1402269ac body=228 status=ok
// SIG undefined FUN_1402269ac(void)

longlong FUN_1402269ac(void)

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
  if (DAT_14cba8b10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_143d83bb4;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14650e910;
    local_38 = &LAB_148bffb5d;
    local_40 = &LAB_145a2e011;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xc50;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacterStandIn",&DAT_14cba8b10,&DAT_148bffb5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba8b10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140226a92 FUN_140226a92 body=221 status=ok
// SIG undefined FUN_140226a92(void)

ulonglong FUN_140226a92(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),*(char *)(param_1 + 0x62fa));
  if (*(char *)(param_1 + 0x62fa) != '\0') {
    uVar2 = FUN_1403ae46b();
    if ((((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x78f0))) &&
        (lVar3 = (ulonglong)uVar2 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar3 != 0)) &&
       (((*(longlong *)(lVar3 + 0x20) != 0 && (*(longlong **)(lVar3 + 0x28) != (longlong *)0x0)) &&
        (lVar3 = (**(code **)(**(longlong **)(lVar3 + 0x28) + 8))(), lVar3 != 0)))) {
      lVar4 = FUN_140227782();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
         (*(char *)(lVar3 + 0xccc) != '\0')) goto LAB_140226aa5;
    }
    if ((((*(longlong *)(param_1 + 0x11e8) == 0) ||
         ((*(byte *)(*(longlong *)(param_1 + 0x11e8) + 0x36a8) & 4) == 0)) &&
        (cVar1 = (**(code **)(*(longlong *)(param_1 + 0x3b60) + 0x50))(param_1 + 0x3b60),
        cVar1 == '\0')) && (cVar1 = FUN_140338496(param_1 + 0x60e8,0), cVar1 == '\0'))
    goto LAB_140226aa7;
  }
LAB_140226aa5:
  uVar5 = 0;
LAB_140226aa7:
  return uVar5 & 0xffffffff;
}



// FUNCTION 140226b70 FUN_140226b70 body=77 status=ok
// SIG undefined FUN_140226b70(void)

longlong FUN_140226b70(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((char)param_1[0x5b] != '\0') {
    lVar4 = *param_1;
    piVar1 = (int *)(lVar4 + 0x1550);
    if ((longlong)*piVar1 != 0) {
      plVar2 = (longlong *)(lVar4 + 0x1548);
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(*plVar2 + lVar5);
        if ((lVar3 != 0) &&
           (lVar4 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1),
           *(char *)(lVar3 + 0x40) == (char)param_1[0x5b])) {
          return lVar4;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*piVar1 * 0x10 != lVar5);
    }
    *(undefined1 *)(param_1 + 0x5b) = 0;
  }
  return 0;
}



// FUNCTION 140226bbe FUN_140226bbe body=321 status=ok
// SIG undefined FUN_140226bbe(void)

undefined8 FUN_140226bbe(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      lVar1 = *(longlong *)(param_1 + 0x3c0);
      if (lVar1 == 0) goto LAB_140226be5;
    }
    if ((((DAT_14cbadd90 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
        DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
LAB_140226be5:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 140226d16 FUN_140226d16 body=1764 status=ok
// SIG undefined FUN_140226d16(void)

void FUN_140226d16(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
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
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x1614) = 0;
    *(undefined4 *)(param_1 + 0x17c0) = 0;
    *(undefined4 *)(param_1 + 0x1608) = 0;
    *(undefined2 *)(param_1 + 0x160c) = 0;
    *(undefined8 *)(param_1 + 0x15ec) = 0;
    uVar15 = DAT_14c846518._4_4_;
    uVar14 = (undefined4)DAT_14c846518;
    uVar12 = DAT_14c846510._4_4_;
    *(undefined4 *)(param_1 + 0x15c8) = (undefined4)DAT_14c846510;
    *(undefined4 *)(param_1 + 0x15cc) = uVar12;
    *(undefined4 *)(param_1 + 0x15d0) = uVar14;
    *(undefined4 *)(param_1 + 0x15d4) = uVar15;
    *(undefined8 *)(param_1 + 0x15d8) = DAT_14c846520;
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if (DAT_14cbbd498 == 0) {
    local_50 = &local_30;
    local_30 = FUN_140940982;
    local_40 = FUN_14081d0ea;
    local_48 = (code *)&LAB_146572ba2;
    local_58 = &LAB_148ca13ba;
    local_60 = (code *)&LAB_140e51436;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 8;
    local_88 = 0x1068;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
  }
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cbbd498 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) != DAT_14cbbd498 + 0x30)) {
    *(undefined1 *)(param_1 + 0x1608) = 0;
    uVar3 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x1608) = *(undefined1 *)(param_2 + 0xe39);
    uVar3 = *(undefined1 *)(param_2 + 0xe3a);
  }
  *(undefined1 *)(param_1 + 0x1609) = uVar3;
  uVar3 = FUN_1402273fc(param_2);
  *(undefined1 *)(param_1 + 0x160a) = uVar3;
  uVar3 = FUN_14022747e(param_2);
  *(undefined1 *)(param_1 + 0x160b) = uVar3;
  *(byte *)(param_1 + 0x160d) = *(byte *)(param_2 + 0x60) >> 7;
  if (((((*(int *)(param_1 + 0x15e8) == 0) || (uVar2 = *(uint *)(param_1 + 0x15e4), (int)uVar2 < 0))
       || (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar8 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0x15e8))))) ||
     ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) {
    plVar8 = (longlong *)(param_1 + 0x768);
LAB_140226e06:
    plVar8 = (longlong *)*plVar8;
    if (plVar8 != (longlong *)0x0) {
      if (DAT_14cb6fd70 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_1487a9cc9;
        local_60 = FUN_1465433f8;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,DAT_14cb6fd70);
      if (plVar8 != (longlong *)0x0) {
        if (DAT_14cb6fd70 == 0) {
          local_50 = &local_30;
          local_30 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_1427b09ee;
          local_58 = &LAB_1487a9cc9;
          local_60 = FUN_1465433f8;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10004001;
          local_80 = 8;
          local_88 = 0x28;
          FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
        }
        plVar5 = (longlong *)FUN_144718840(plVar8,DAT_14cb6fd70);
        if ((plVar8 != plVar5) && (plVar5 != (longlong *)0x0)) {
          pcVar6 = (char *)(**(code **)(*plVar5 + 0x20))(plVar5);
          if (*pcVar6 != '\0') {
            bVar1 = *(byte *)(param_2 + 0xbd8);
            if ((((int)(uint)bVar1 < *(int *)(param_2 + 0xbf0)) &&
                (lVar7 = *(longlong *)
                          (*(longlong *)(param_2 + 0xbe8) + 0x28 +
                          (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), lVar7 != 0)) &&
               (*(longlong *)(*(longlong *)(lVar7 + 0x38) + 0x70) != 0)) {
              pcVar6 = (char *)(**(code **)(*plVar5 + 0x20))(plVar5);
              *(bool *)(param_1 + 0x160c) = (byte)(*pcVar6 - 1U) < 2 || pcVar6[1] != '\0';
              lVar7 = (**(code **)(*plVar5 + 0x18))(plVar5);
              plVar8 = (longlong *)(**(code **)(*plVar5 + 0x28))(plVar5);
              if (plVar8 == (longlong *)0x0) {
                uVar12 = 0;
              }
              else {
                uVar12 = (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined1 *)(lVar7 + 1));
              }
              *(undefined4 *)(param_1 + 0x161c) = uVar12;
              uVar12 = FUN_14023bf44(plVar5);
              *(undefined4 *)(param_1 + 0x1614) = uVar12;
              uVar12 = FUN_1402274fc(plVar5);
              *(undefined4 *)(param_1 + 0x17c0) = uVar12;
              fVar17 = *(float *)(param_1 + 0x1614);
              if (*(char *)(param_1 + 0x160c) != '\x01') {
                fVar17 = 1.0 - fVar17;
              }
              *(float *)(param_1 + 0x1618) = *(float *)(param_1 + 0x161c) * fVar17;
              goto LAB_140226e7e;
            }
          }
          *(undefined1 *)(param_1 + 0x160c) = 0;
          *(undefined4 *)(param_1 + 0x1614) = 0;
          *(undefined4 *)(param_1 + 0x17c0) = 0;
        }
      }
    }
  }
  else if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) goto LAB_140226e06;
LAB_140226e7e:
  if (*(char *)(param_1 + 0x172a) == '\x01') {
    lVar7 = 0xd18;
    iVar4 = *(int *)(param_2 + 0xd20);
  }
  else {
    lVar7 = 0xd08;
    iVar4 = *(int *)(param_2 + 0xd10);
  }
  if (((0 < iVar4) && (**(longlong **)(param_2 + lVar7) != 0)) &&
     (lVar7 = *(longlong *)(**(longlong **)(param_2 + lVar7) + 0x48), lVar7 != 0)) {
    if (DAT_14cb63950 == 0) {
      local_50 = &local_30;
      local_30 = FUN_144a7958c;
      local_40 = FUN_14081d0ea;
      local_48 = (code *)&LAB_1464ec72a;
      local_58 = &LAB_1486f5f75;
      local_60 = (code *)&LAB_140945686;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30)) {
      uVar2 = *(uint *)(lVar7 + 0xc);
      *(uint *)(param_1 + 0x15ec) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar4 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar4 = *(int *)(lVar7 + 0x10);
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(lVar7 + 0x10) = iVar9;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar4 = iVar9;
        }
      }
      goto LAB_140226f36;
    }
  }
  *(undefined4 *)(param_1 + 0x15ec) = 0;
  iVar4 = 0;
LAB_140226f36:
  *(int *)(param_1 + 0x15f0) = iVar4;
  lVar7 = *(longlong *)(param_2 + 0x1c8);
  if (lVar7 == 0) {
    uVar11 = 0;
    uVar13 = 0x3ff00000;
    uVar12 = 0;
    uVar14 = 0x3ff00000;
    uVar15 = 0;
    uVar16 = 0x3ff00000;
  }
  else {
    uVar12 = *(undefined4 *)(lVar7 + 0x280);
    uVar14 = *(undefined4 *)(lVar7 + 0x284);
    uVar15 = *(undefined4 *)(lVar7 + 0x288);
    uVar16 = *(undefined4 *)(lVar7 + 0x28c);
    uVar11 = (undefined4)*(undefined8 *)(lVar7 + 0x290);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x290) >> 0x20);
  }
  *(undefined4 *)(param_1 + 0x15c8) = uVar12;
  *(undefined4 *)(param_1 + 0x15cc) = uVar14;
  *(undefined4 *)(param_1 + 0x15d0) = uVar15;
  *(undefined4 *)(param_1 + 0x15d4) = uVar16;
  *(ulonglong *)(param_1 + 0x15d8) = CONCAT44(uVar13,uVar11);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
}



// FUNCTION 1402273fc FUN_1402273fc body=129 status=ok
// SIG undefined FUN_1402273fc(void)

ulonglong FUN_1402273fc(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(param_1 + 0xd60) != DAT_14cb94e40) {
    if ((*(char *)(param_1 + 0x178) != '\x03') &&
       ((*(longlong **)(param_1 + 0x1b0) == (longlong *)0x0 ||
        (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x700))(), cVar3 == '\0')))) {
      bVar1 = *(byte *)(param_1 + 0xbd8);
      if (((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) &&
         ((plVar2 = *(longlong **)
                     (*(longlong *)(param_1 + 0xbe8) + 8 +
                     (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar2 != (longlong *)0x0 &&
          (cVar3 = (**(code **)(*plVar2 + 0x2b8))(), cVar3 != '\0')))) goto LAB_140227423;
    }
    uVar4 = 0;
  }
LAB_140227423:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14022747e FUN_14022747e body=126 status=ok
// SIG undefined FUN_14022747e(void)

undefined8 FUN_14022747e(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0xd60) == DAT_14cb95100) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0xd60) >> 8),1);
  }
  if ((*(char *)(param_1 + 0x178) != '\x03') &&
     ((*(longlong **)(param_1 + 0x1b0) == (longlong *)0x0 ||
      (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x700))(), cVar3 == '\0')))) {
    bVar1 = *(byte *)(param_1 + 0xbd8);
    if (((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) &&
       (plVar2 = *(longlong **)
                  (*(longlong *)(param_1 + 0xbe8) + 0x20 +
                  (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001402274f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar2 + 0x2b8))();
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1402274fc FUN_1402274fc body=63 status=ok
// SIG undefined FUN_1402274fc(void)

undefined8 FUN_1402274fc(longlong *param_1)

{
  char *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)(**(code **)(*param_1 + 0x18))();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
  if ((plVar2 != (longlong *)0x0) && (*pcVar1 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014022752d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14022753c FUN_14022753c body=480 status=ok
// SIG undefined FUN_14022753c(void)

undefined8 FUN_14022753c(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*param_1 != 0) && (cVar2 = FUN_14022771e(), cVar2 != '\0')) &&
     ((*(byte *)(param_1 + 2) & 1) == 0)) {
    if ((*(byte *)(param_1 + 2) & 2) == 0) {
      uVar10 = (undefined4)DAT_14c8464e0;
      uVar11 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
      uVar8 = (undefined4)DAT_14c8464e8;
      uVar9 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
      uVar6 = (undefined4)DAT_14c8464f0;
      uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar10 = (undefined4)param_1[4];
      uVar11 = (undefined4)((ulonglong)param_1[4] >> 0x20);
      uVar8 = (undefined4)param_1[5];
      uVar9 = (undefined4)((ulonglong)param_1[5] >> 0x20);
      uVar6 = (undefined4)param_1[6];
      uVar7 = (undefined4)((ulonglong)param_1[6] >> 0x20);
      if ((param_1[7] != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
    }
    if (((((double)CONCAT44(uVar11,uVar10) != 0.0) || (NAN((double)CONCAT44(uVar11,uVar10)))) ||
        (((double)CONCAT44(uVar9,uVar8) != 0.0 ||
         ((NAN((double)CONCAT44(uVar9,uVar8)) || ((double)CONCAT44(uVar7,uVar6) != 0.0)))))) ||
       (NAN((double)CONCAT44(uVar7,uVar6)))) {
      lVar3 = FUN_14069294b();
      cVar2 = FUN_140692c1e(lVar3,param_1[7]);
      if (cVar2 != '\0') {
        if (((*(longlong **)(&DAT_00001ce8 + *param_1) == (longlong *)0x0) ||
            (cVar2 = (**(code **)(**(longlong **)(&DAT_00001ce8 + *param_1) + 0x700))(),
            cVar2 == '\0')) || ((char)param_1[0x102] != '\0')) {
LAB_140227705:
          uVar4 = 1;
          goto LAB_1402275bc;
        }
        if ((longlong)*(int *)(lVar3 + 0x80) != 0) {
          plVar1 = (longlong *)*param_1;
          lVar5 = 0;
          uVar4 = 0;
          do {
            if (*(char *)(*(longlong *)(lVar3 + 0x78) + lVar5) == (char)plVar1[0x220]) {
              if ((((double)plVar1[0x27] < (double)-*(float *)(lVar3 + 0x8c)) ||
                  ((double)*(float *)(lVar3 + 0x88) < (double)plVar1[0x27])) ||
                 ((plVar1[0x22] != 0 &&
                  ((**(code **)(*plVar1 + 0x578))(plVar1,local_68),
                  (float)(double)param_1[0x9c] < (float)local_58 + *(float *)(lVar3 + 0x90)))))
              goto LAB_1402275ba;
              goto LAB_140227705;
            }
            lVar5 = lVar5 + 1;
          } while (*(int *)(lVar3 + 0x80) != lVar5);
          goto LAB_1402275bc;
        }
      }
    }
  }
LAB_1402275ba:
  uVar4 = 0;
LAB_1402275bc:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14022771e FUN_14022771e body=99 status=ok
// SIG undefined FUN_14022771e(void)

ulonglong FUN_14022771e(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((((longlong *)param_1[0x39d] != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*(longlong *)param_1[0x39d] + 0x940))(), cVar1 != '\0')) &&
      (uVar2 = (**(code **)(*param_1 + 0xe78))(param_1,0x10), (char)uVar2 != '\0')) &&
     ((((char)param_1[0x220] != '\0' && ((char)param_1[0x378] == '\0')) &&
      ((char)param_1[0x23e] == '\0')))) {
    return CONCAT71((int7)((ulonglong)uVar2 >> 8),(char)param_1[0x36e]) ^ 1;
  }
  return 0;
}



// FUNCTION 140227782 FUN_140227782 body=228 status=ok
// SIG undefined FUN_140227782(void)

longlong FUN_140227782(void)

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
  if (DAT_14cba4778 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1418e961e;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465be84e;
    local_38 = &LAB_148bc9ebe;
    local_40 = &LAB_1459a892e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xce8;
    FUN_14081cfa3(L"/Script/OakGame",L"GrenadeGadget",&DAT_14cba4778,FUN_1465be826);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba4778;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140227868 FUN_140227868 body=252 status=ok
// SIG undefined FUN_140227868(void)

ulonglong FUN_140227868(uint *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
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
    uVar4 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar4 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar4 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar4 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar4 = uVar6;
      }
    }
  }
  local_24 = uVar4;
  if ((*param_1 != local_28) ||
     (uVar3 = CONCAT71((uint7)(uint3)(*param_1 >> 8),1), param_1[1] != uVar4)) {
    cVar2 = FUN_144729dda(param_1);
    if (cVar2 == '\0') {
      uVar3 = FUN_144729dda(&local_28);
      uVar3 = uVar3 ^ 1;
    }
    else {
      uVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140227966 FUN_140227966 body=4633 status=ok
// SIG undefined FUN_140227966(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140227966(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  bool bVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar52;
  double dVar53;
  undefined1 auVar51 [16];
  double dVar54;
  double dVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  double dVar64;
  double dVar65;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  undefined4 local_340;
  undefined4 local_338;
  undefined8 local_330;
  undefined2 *local_328;
  undefined1 *local_320;
  undefined1 *local_318;
  undefined1 *local_310;
  undefined1 *local_308;
  code *local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  double dVar6;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x768) + 0x3c0);
  if (lVar20 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_310 = local_148;
      local_148._0_8_ = FUN_141030f22;
      local_300 = FUN_14081d0ea;
      local_308 = &LAB_1459f2e4c;
      local_318 = &LAB_148c39de3;
      local_320 = &LAB_1457a9eb2;
      local_328 = &DAT_149e063b2;
      local_330 = 0;
      local_338 = 0x10000004;
      local_340 = 0x10;
      local_348 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar20 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar20 = *(longlong *)(lVar20 + 0x2500), lVar20 != 0)) {
      lVar8 = *(longlong *)(lVar20 + 0x39d8);
      uVar56 = *(undefined8 *)(lVar8 + 0xf0);
      uVar14 = *(undefined8 *)(lVar8 + 0xf8);
      *(undefined8 *)(param_1 + 0x17a0) = *(undefined8 *)(lVar8 + 0x100);
      *(undefined8 *)(param_1 + 0x1790) = uVar56;
      *(undefined8 *)(param_1 + 0x1798) = uVar14;
      lVar20 = *(longlong *)(lVar20 + 0x39d8);
      uVar56 = *(undefined8 *)(lVar20 + 0x108);
      uVar14 = *(undefined8 *)(lVar20 + 0x110);
      *(undefined8 *)(param_1 + 0x17b8) = *(undefined8 *)(lVar20 + 0x118);
      *(undefined8 *)(param_1 + 0x17a8) = uVar56;
      *(undefined8 *)(param_1 + 0x17b0) = uVar14;
    }
  }
  dVar54 = local_288;
  dVar55 = dStack_280;
  if (((param_2 != 0) && (*(char *)(param_1 + 0x172b) != '\0')) &&
     (0.0 < *(float *)(param_1 + 0x1614))) {
    bVar7 = *(byte *)(param_2 + 0xbd8);
    if ((int)(uint)bVar7 < *(int *)(param_2 + 0xbf0)) {
      lVar20 = *(longlong *)
                (*(longlong *)(param_2 + 0xbe8) + 0x28 +
                (ulonglong)bVar7 * 0x80 + (ulonglong)bVar7 * 8);
    }
    else {
      lVar20 = 0;
    }
    local_2c8 = 0.0;
    dStack_2c0 = 0.0;
    local_2b8 = 0.0;
    dStack_2b0 = 1.0;
    local_2a8 = 0.0;
    dStack_2a0 = 0.0;
    local_298 = 0.0;
    uStack_290 = 0;
    local_288 = 1.0;
    dStack_280 = 1.0;
    local_278 = 1.0;
    dStack_270 = 0.0;
    dVar54 = 1.0;
    dVar55 = 1.0;
    if (((lVar20 != 0) &&
        (dVar54 = local_288, dVar55 = dStack_280,
        *(longlong *)(*(longlong *)(lVar20 + 0x38) + 0x70) != 0)) &&
       (uVar16 = FUN_140228b80(lVar20,&local_2c8), auVar31 = _DAT_149934d80, dVar54 = local_288,
       dVar55 = dStack_280, (char)uVar16 != '\0')) {
      auVar43._8_8_ = dStack_280;
      auVar43._0_8_ = local_288;
      auVar30._8_8_ = dStack_270;
      auVar30._0_8_ = local_278;
      auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_280));
      auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_288));
      uVar17 = movmskpd(uVar16,auVar36);
      auVar47._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_270));
      auVar47._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_278));
      iVar18 = movmskpd((int)lVar20,auVar47);
      uVar19 = iVar18 << 2 | uVar17;
      dVar54 = DAT_14c8464c0;
      dVar55 = DAT_14c8464c8;
      dVar27 = DAT_14c8464d0;
      uVar56 = uRam000000014c8464d8;
      dVar28 = DAT_14c846480;
      dVar49 = DAT_14c846488;
      dVar23 = DAT_14c846490;
      dVar24 = DAT_14c846498;
      dVar25 = DAT_14c8464b0;
      dVar26 = DAT_14c8464a0;
      dVar52 = DAT_14c8464a8;
      if (uVar19 != 0) {
        auVar36 = divpd(_DAT_149934d80,auVar43);
        auVar43 = divpd(ZEXT816(0x3ff0000000000000),auVar30);
        dVar54 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_288)) & auVar36._0_8_);
        dVar55 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_280)) & auVar36._8_8_);
        dVar27 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_278)) & auVar43._0_8_);
        dVar28 = -local_2c8;
        dVar49 = -dStack_2c0;
        dVar23 = local_2b8 * -1.0;
        dVar24 = dStack_2b0 * 1.0;
        dVar26 = local_2a8 * dVar54;
        dVar53 = dStack_2a0 * dVar55;
        dVar25 = local_298 * dVar27;
        dVar29 = dVar53 * dVar28 - dVar49 * dVar26;
        dVar50 = dVar25 * dVar49 - dVar23 * dVar53;
        dVar52 = dVar26 * dVar23 - dVar28 * dVar25;
        dVar50 = dVar50 + dVar50;
        dVar52 = dVar52 + dVar52;
        dVar29 = dVar29 + dVar29;
        uVar56 = 0;
        dVar25 = 0.0 - (dVar24 * dVar29 + dVar25 + (dVar52 * dVar28 - dVar50 * dVar49));
        dVar26 = 0.0 - ((dVar29 * dVar49 - dVar52 * dVar23) + dVar24 * dVar50 + dVar26);
        dVar52 = 0.0 - (dVar29 * local_2c8 + dVar23 * dVar50 + dVar24 * dVar52 + dVar53);
      }
      auVar43 = *(undefined1 (*) [16])(param_1 + 6000);
      dVar29 = auVar43._0_8_;
      dVar53 = auVar43._8_8_;
      dVar50 = SUB168(*(undefined1 (*) [16])(param_1 + 0x1780),0);
      auVar59._8_8_ = dVar55;
      auVar59._0_8_ = dVar54;
      auVar43 = minpd(auVar59,auVar43);
      auVar61._8_8_ = uVar56;
      auVar61._0_8_ = dVar27;
      auVar30 = minpd(auVar61,*(undefined1 (*) [16])(param_1 + 0x1780));
      auVar60._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
      auVar60._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
      iVar18 = movmskpd(uVar17,auVar60);
      auVar62._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
      auVar62._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
      uVar17 = movmskpd(uVar19,auVar62);
      if ((uVar17 & 0x3fffffff) == 0 && iVar18 == 0) {
        dVar12 = *(double *)(param_1 + 0x1730);
        dVar13 = *(double *)(param_1 + 0x1738);
        dVar63 = *(double *)(param_1 + 0x1740);
        dVar55 = *(double *)(param_1 + 0x1748);
        dVar54 = *(double *)(param_1 + 0x1748);
        dVar3 = *(double *)(param_1 + 0x1730);
        dVar27 = *(double *)(param_1 + 0x1730);
        dVar4 = *(double *)(param_1 + 0x1738);
        dVar58 = *(double *)(param_1 + 0x1738);
        dVar5 = *(double *)(param_1 + 0x1740);
        dVar6 = *(double *)(param_1 + 0x1740);
        dVar11 = dVar28 * dVar6 * 1.0 + dVar24 * dVar58 + dVar23 * dVar27 * -1.0 + dVar49 * dVar54;
        local_2f8._8_4_ = SUB84(dVar11,0);
        local_2f8._0_8_ =
             dVar49 * dVar5 * -1.0 + dVar23 * dVar4 + dVar24 * dVar3 * 1.0 + dVar28 * dVar55;
        local_2f8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        dVar27 = dVar23 * dVar6 * -1.0 +
                 ((dVar27 * dVar28 * -1.0 + dVar24 * dVar54) - dVar49 * dVar58);
        local_2e8._8_4_ = SUB84(dVar27,0);
        local_2e8._0_8_ =
             dVar24 * dVar5 * 1.0 + ((dVar3 * dVar49 * 1.0 + dVar23 * dVar55) - dVar28 * dVar4);
        local_2e8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        dVar26 = dVar26 * dVar29;
        dVar52 = dVar52 * dVar53;
        dVar25 = dVar25 * dVar50;
        dVar27 = dVar52 * dVar12 - dVar26 * dVar13;
        dVar28 = dVar25 * dVar13 - dVar52 * dVar63;
        dVar49 = dVar26 * dVar63 - dVar25 * dVar12;
        dVar28 = dVar28 + dVar28;
        dVar49 = dVar49 + dVar49;
        dVar27 = dVar27 + dVar27;
        local_e8 = (dVar27 * dVar13 - dVar63 * dVar49) + dVar55 * dVar28 + dVar26 +
                   *(double *)(param_1 + 0x1750);
        dStack_e0 = (dVar28 * dVar63 - dVar27 * dVar12) + dVar54 * dVar49 + dVar52 +
                    *(double *)(param_1 + 0x1758);
        local_d8 = (dVar49 * dVar12 - dVar13 * dVar28) + dVar55 * dVar27 + dVar25 +
                   *(double *)(param_1 + 0x1760);
      }
      else {
        dVar11 = *(double *)(param_1 + 0x1730);
        dVar12 = *(double *)(param_1 + 0x1738);
        dVar13 = *(double *)(param_1 + 0x1740);
        dVar58 = dVar12 + dVar12;
        dVar63 = dVar13 + dVar13;
        dVar4 = dVar11 * (dVar11 + dVar11);
        dVar5 = dVar12 * dVar58;
        auVar10._8_4_ = SUB84(dVar5,0);
        auVar10._0_8_ = dVar4;
        auVar10._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        local_2f8._0_8_ = 1.0 - (dVar4 + dVar5);
        local_2f8._8_8_ = 0.0 - (dVar4 + auVar10._8_8_);
        dVar6 = *(double *)(param_1 + 0x1730) * dVar63;
        dVar3 = *(double *)(param_1 + 0x1748);
        dVar64 = dVar63 * dVar3;
        dVar65 = (dVar11 + dVar11) * *(double *)(param_1 + 0x1748);
        dVar3 = dVar58 * dVar3;
        dStack_180 = (dVar63 * dVar12 - dVar65) * dVar50;
        local_2e8._8_4_ = SUB84(dVar55 * dVar53,0);
        local_2e8._0_8_ = dVar54 * dVar29;
        local_2e8._12_4_ = (int)((ulonglong)(dVar55 * dVar53) >> 0x20);
        local_1c8 = (1.0 - (dVar13 * dVar63 + dVar5)) * dVar29;
        dVar4 = (1.0 - (dVar13 * dVar63 + dVar4)) * dVar53;
        dStack_1c0 = (dVar58 * dVar11 + dVar64) * dVar29;
        local_198 = (dVar63 * dVar12 + dVar65) * dVar53;
        local_188 = (dVar3 + dVar6) * dVar50;
        local_1b8 = (dVar6 - dVar3) * dVar29;
        local_178 = (double)local_2f8._0_8_ * dVar50;
        uStack_1b0 = 0;
        local_1a8._8_4_ = SUB84(dVar4,0);
        local_1a8._0_8_ = (dVar58 * dVar11 - dVar64) * dVar53;
        local_1a8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        uStack_190 = 0;
        uStack_170 = 0;
        local_168 = *(undefined8 *)(param_1 + 0x1750);
        uStack_160 = *(undefined8 *)(param_1 + 0x1758);
        local_158 = *(undefined8 *)(param_1 + 0x1760);
        uStack_150 = 0x3ff0000000000000;
        dVar29 = dVar49 + dVar49;
        dVar53 = dVar23 + dVar23;
        dVar58 = dVar28 * (dVar28 + dVar28);
        dVar3 = (dVar28 + dVar28) * dVar24;
        local_228 = (dVar29 * dVar28 - dVar53 * dVar24) * dVar55;
        dStack_200 = (dVar53 * dVar49 - dVar3) * dVar27;
        local_248 = ((double)DAT_149934d80 - (dVar23 * dVar53 + dVar49 * dVar29)) * dVar54;
        dStack_220 = (DAT_149934d80._8_8_ - (dVar23 * dVar53 + dVar58)) * dVar55;
        dStack_240 = (dVar29 * dVar28 + dVar53 * dVar24) * dVar54;
        local_218 = (dVar53 * dVar49 + dVar3) * dVar55;
        local_208 = (dVar29 * dVar24 + dVar28 * dVar53) * dVar27;
        local_238 = (dVar28 * dVar53 - dVar29 * dVar24) * dVar54;
        uStack_230 = 0;
        uStack_210 = 0;
        local_1f8 = (1.0 - (dVar58 + dVar49 * dVar29)) * dVar27;
        uStack_1f0 = 0;
        uStack_1d0 = 0x3ff0000000000000;
        local_1e8 = dVar26;
        dStack_1e0 = dVar52;
        local_1d8 = dVar25;
        FUN_1447fea8d(local_148);
        FUN_144a1c686(local_148,0x3e45798ee0000000);
        auVar34._8_8_ = -(ulonglong)(0.0 <= (double)local_2e8._8_8_);
        auVar34._0_8_ = -(ulonglong)(0.0 <= (double)local_2e8._0_8_);
        auVar43 = blendvpd(_DAT_149936790,auVar31,auVar34);
        uVar22 = -(ulonglong)(0.0 <= dVar27 * dVar50);
        dVar54 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
        dVar55 = auVar43._0_8_;
        local_148._8_8_ = (double)local_148._8_8_ * dVar55;
        local_148._0_8_ = (double)local_148._0_8_ * dVar55;
        local_138._0_8_ = (double)local_138._0_8_ * dVar55;
        dVar55 = auVar43._8_8_;
        local_118 = local_118 * dVar55;
        local_120 = local_120 * dVar55;
        local_128 = dVar55 * local_128;
        local_f8 = local_f8 * dVar54;
        local_100 = local_100 * dVar54;
        local_108 = dVar54 * local_108;
        FUN_14481fd10(&local_268,local_148);
        auVar38._0_8_ = local_268 * local_268;
        auVar38._8_8_ = dStack_260 * dStack_260;
        dVar54 = local_258 * local_258 + auVar38._0_8_;
        dVar55 = dStack_250 * dStack_250 + auVar38._8_8_;
        auVar41._0_8_ = dVar54 + dVar55;
        auVar41._8_8_ = dVar54 + dVar55;
        auVar43 = sqrtpd(auVar38,auVar41);
        auVar31 = divpd(auVar31,auVar43);
        auVar42._0_8_ = auVar31._0_8_ * local_258;
        auVar42._8_8_ = auVar31._8_8_ * dStack_250;
        local_2f8._8_8_ =
             (ulonglong)(dStack_260 * auVar31._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
        local_2f8._0_8_ =
             (ulonglong)(local_268 * auVar31._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
        auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
        auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
        local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar31);
      }
      fVar39 = *(float *)(param_1 + 0x1614);
      if (fVar39 < 0.5) {
        fVar39 = (fVar39 + fVar39) * (fVar39 + fVar39) * 0.5;
      }
      else {
        fVar39 = 1.0 - (fVar39 + fVar39 + -1.0);
        fVar39 = (1.0 - fVar39 * fVar39) * 0.5 + 0.5;
      }
      dVar54 = local_288;
      dVar55 = dStack_280;
      if (0.0 < fVar39) {
        auVar31 = *(undefined1 (*) [16])(param_1 + 0x17a8);
        auVar43 = divpd(auVar31,_DAT_1499387d0);
        auVar40._8_8_ = 0;
        auVar40._0_8_ = *(double *)(param_1 + 0x17b8);
        auVar30 = divpd(auVar40,_DAT_1499387d0);
        auVar43 = roundpd(auVar43,auVar43,3);
        auVar30 = roundpd(auVar30,auVar30,3);
        dVar49 = (auVar31._0_8_ - auVar43._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar23 = (auVar31._8_8_ - auVar43._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar54 = (*(double *)(param_1 + 0x17b8) - auVar30._0_8_ * (double)DAT_1499387d0) *
                 0.008726646259971648;
        dVar55 = (0.0 - auVar30._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        local_2d8 = sin(dVar49);
        dVar27 = sin(dVar23);
        dVar28 = sin(dVar54);
        sin(dVar55);
        dVar49 = cos(dVar49);
        dVar23 = cos(dVar23);
        dVar54 = cos(dVar54);
        cos(dVar55);
        auVar51._0_8_ = -(dVar23 * local_2d8 * dVar28) + dVar27 * dVar49 * dVar54;
        auVar51._8_8_ = dVar27 * local_2d8 * dVar28 + dVar23 * dVar49 * dVar54;
        auVar44._0_8_ = local_2d8 * dVar27 * dVar54 - dVar49 * dVar23 * dVar28;
        auVar44._8_8_ = -(local_2d8 * dVar23 * dVar54) - dVar49 * dVar27 * dVar28;
        local_148 = auVar44;
        local_138 = auVar51;
        dVar54 = *(double *)(param_1 + 0x17a0);
        dVar55 = *(double *)(param_1 + 0x1790);
        dVar27 = *(double *)(param_1 + 0x1798);
        if ((1e-05 < fVar39) &&
           (local_148 = local_2f8, local_138 = local_2e8, dVar54 = local_d8, dVar55 = local_e8,
           dVar27 = dStack_e0, fVar39 < 0.99999)) {
          dVar55 = (double)(fVar39 + 0.0);
          dVar27 = (double)(fVar39 + 0.0);
          dVar24 = (double)DAT_149934d80 - dVar55;
          dVar26 = DAT_149934d80._8_8_ - dVar27;
          dVar54 = (double)local_2e8._0_8_ * auVar51._0_8_ + (double)local_2f8._0_8_ * auVar44._0_8_
          ;
          dVar28 = (double)local_2e8._8_8_ * auVar51._8_8_ + (double)local_2f8._8_8_ * auVar44._8_8_
          ;
          auVar32._8_8_ = -(ulonglong)(0.0 <= dVar54 + dVar28);
          auVar32._0_8_ = -(ulonglong)(0.0 <= dVar54 + dVar28);
          auVar46._0_8_ = 0.0 - auVar44._0_8_;
          auVar46._8_8_ = 0.0 - auVar44._8_8_;
          auVar31 = blendvpd(auVar46,auVar44,auVar32);
          auVar45._0_8_ = 0.0 - auVar51._0_8_;
          auVar45._8_8_ = 0.0 - auVar51._8_8_;
          dVar49 = auVar31._0_8_ * dVar24 + (double)local_2f8._0_8_ * dVar55;
          dVar23 = auVar31._8_8_ * dVar26 + (double)local_2f8._8_8_ * dVar27;
          auVar31 = blendvpd(auVar45,auVar51,auVar32);
          dVar54 = auVar31._0_8_ * dVar24 + (double)local_2e8._0_8_ * dVar55;
          dVar28 = auVar31._8_8_ * dVar26 + (double)local_2e8._8_8_ * dVar27;
          dVar25 = dVar54 * dVar54 + dVar49 * dVar49;
          dVar52 = dVar28 * dVar28 + dVar23 * dVar23;
          auVar48._0_8_ = dVar25 + dVar52;
          auVar48._8_8_ = dVar25 + dVar52;
          auVar33._8_8_ = -(ulonglong)(1e-08 <= auVar48._8_8_);
          auVar33._0_8_ = -(ulonglong)(1e-08 <= auVar48._0_8_);
          auVar31 = sqrtpd(auVar48,auVar48);
          auVar31 = divpd(_DAT_149934d80,auVar31);
          auVar57._0_8_ = auVar31._0_8_ * dVar54;
          auVar57._8_8_ = auVar31._8_8_ * dVar28;
          local_138 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar57,auVar33);
          local_148._8_8_ =
               (ulonglong)(dVar23 * auVar31._8_8_) & -(ulonglong)(1e-08 <= auVar48._8_8_);
          local_148._0_8_ =
               (ulonglong)(dVar49 * auVar31._0_8_) & -(ulonglong)(1e-08 <= auVar48._0_8_);
          dVar54 = *(double *)(param_1 + 0x17a0) * dVar24 + local_d8 * dVar55;
          dVar55 = *(double *)(param_1 + 0x1790) * dVar24 + local_e8 * dVar55;
          dVar27 = *(double *)(param_1 + 0x1798) * dVar26 + dStack_e0 * dVar27;
        }
        *(double *)(param_1 + 0x1790) = dVar55;
        *(double *)(param_1 + 0x1798) = dVar27;
        *(double *)(param_1 + 0x17a0) = dVar54;
        FUN_1448052ee(local_148,&local_1c8);
        *(double *)(param_1 + 0x17b8) = local_1b8;
        *(double *)(param_1 + 0x17a8) = local_1c8;
        *(double *)(param_1 + 0x17b0) = dStack_1c0;
        dVar54 = local_288;
        dVar55 = dStack_280;
      }
    }
  }
  dStack_280 = dVar55;
  local_288 = dVar54;
  lVar20 = *(longlong *)(param_1 + 0x768);
  plVar9 = *(longlong **)(lVar20 + 0x75e0);
  if (plVar9 != (longlong *)0x0) {
    iVar18 = (int)plVar9[1];
    do {
      if (iVar18 == 0) goto LAB_140227b3f;
      LOCK();
      iVar15 = (int)plVar9[1];
      bVar21 = iVar18 == iVar15;
      if (bVar21) {
        *(int *)(plVar9 + 1) = iVar18 + 1;
        iVar15 = iVar18;
      }
      iVar18 = iVar15;
      UNLOCK();
    } while (!bVar21);
    lVar20 = *(longlong *)(lVar20 + 0x75d8);
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
    auVar31 = _DAT_1499387d0;
    if ((lVar20 != 0) &&
       (((((*(double *)(lVar20 + 0x568) != DAT_14c8464f8 ||
           (NAN(*(double *)(lVar20 + 0x568)) || NAN(DAT_14c8464f8))) ||
          (*(double *)(lVar20 + 0x570) != DAT_14c846500)) ||
         ((NAN(*(double *)(lVar20 + 0x570)) || NAN(DAT_14c846500) ||
          (*(double *)(lVar20 + 0x578) != DAT_14c846508)))) ||
        (NAN(*(double *)(lVar20 + 0x578)) || NAN(DAT_14c846508))))) {
      auVar43 = *(undefined1 (*) [16])(param_1 + 0x17a8);
      dVar54 = (double)DAT_1499387d0;
      dVar55 = DAT_1499387d0._8_8_;
      auVar30 = divpd(auVar43,_DAT_1499387d0);
      auVar35._8_8_ = 0;
      auVar35._0_8_ = *(double *)(param_1 + 0x17b8);
      auVar36 = divpd(auVar35,_DAT_1499387d0);
      auVar30 = roundpd(auVar30,auVar30,3);
      auVar36 = roundpd(auVar36,auVar36,3);
      dVar49 = (auVar43._0_8_ - auVar30._0_8_ * dVar54) * 0.008726646259971648;
      dVar52 = (auVar43._8_8_ - auVar30._8_8_ * dVar55) * 0.008726646259971648;
      dVar27 = (*(double *)(param_1 + 0x17b8) - auVar36._0_8_ * dVar54) * 0.008726646259971648;
      dVar28 = (0.0 - auVar36._8_8_ * dVar55) * 0.008726646259971648;
      dVar23 = sin(dVar49);
      dVar24 = sin(dVar52);
      dVar25 = sin(dVar27);
      sin(dVar28);
      dVar26 = cos(dVar49);
      dVar52 = cos(dVar52);
      dVar27 = cos(dVar27);
      cos(dVar28);
      dVar50 = -(dVar52 * dVar23 * dVar25) + dVar24 * dVar26 * dVar27;
      dVar53 = dVar24 * dVar23 * dVar25 + dVar52 * dVar26 * dVar27;
      dVar49 = dVar23 * dVar24 * dVar27 - dVar26 * dVar52 * dVar25;
      dVar23 = -(dVar23 * dVar52 * dVar27) - dVar26 * dVar24 * dVar25;
      auVar43 = *(undefined1 (*) [16])(lVar20 + 0x568);
      auVar30 = divpd(auVar43,auVar31);
      auVar37._8_8_ = 0;
      auVar37._0_8_ = *(double *)(lVar20 + 0x578);
      auVar36 = divpd(auVar37,auVar31);
      auVar31 = roundpd(auVar30,auVar30,3);
      auVar30 = roundpd(auVar36,auVar36,3);
      dVar27 = (auVar43._0_8_ - auVar31._0_8_ * dVar54) * 0.008726646259971648;
      dVar28 = (auVar43._8_8_ - auVar31._8_8_ * dVar55) * 0.008726646259971648;
      dVar54 = (*(double *)(lVar20 + 0x578) - auVar30._0_8_ * dVar54) * 0.008726646259971648;
      dVar55 = (0.0 - auVar30._8_8_ * dVar55) * 0.008726646259971648;
      dVar24 = sin(dVar27);
      dVar25 = sin(dVar28);
      dVar26 = sin(dVar54);
      sin(dVar55);
      dVar27 = cos(dVar27);
      dVar28 = cos(dVar28);
      dVar52 = cos(dVar54);
      cos(dVar55);
      dVar54 = -(dVar28 * dVar24 * dVar26) + dVar25 * dVar27 * dVar52;
      dVar55 = dVar25 * dVar24 * dVar26 + dVar28 * dVar27 * dVar52;
      dVar29 = dVar24 * dVar25 * dVar52 - dVar27 * dVar28 * dVar26;
      dVar27 = -(dVar24 * dVar28 * dVar52) - dVar27 * dVar25 * dVar26;
      local_148._8_8_ =
           dVar29 * dVar50 * 1.0 + dVar55 * dVar23 + dVar49 * dVar54 * -1.0 + dVar53 * dVar27;
      local_148._0_8_ =
           dVar27 * dVar50 * -1.0 + dVar54 * dVar23 + dVar49 * dVar55 * 1.0 + dVar53 * dVar29;
      local_138._8_8_ =
           dVar54 * dVar50 * -1.0 + ((dVar49 * dVar29 * -1.0 + dVar53 * dVar55) - dVar23 * dVar27);
      local_138._0_8_ =
           dVar55 * dVar50 * 1.0 + ((dVar49 * dVar27 * 1.0 + dVar53 * dVar54) - dVar23 * dVar29);
      FUN_1448052ee(local_148,&local_1c8);
      *(double *)(param_1 + 0x17b8) = local_1b8;
      *(double *)(param_1 + 0x17a8) = local_1c8;
      *(double *)(param_1 + 0x17b0) = dStack_1c0;
    }
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
LAB_140227b3f:
  if ((local_c0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140228b80 FUN_140228b80 body=64 status=ok
// SIG undefined FUN_140228b80(void)

undefined8 FUN_140228b80(ulonglong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined7 uVar4;
  
  if (((*(int *)(*(longlong *)(param_1 + 0x30) + 0xd20) < 1) ||
      (lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x30) + 0xd18), lVar1 == 0)) ||
     (lVar1 = *(longlong *)(lVar1 + 0x48), lVar1 == 0)) {
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_140228bc0(param_1,lVar1,param_2);
    param_1 = uVar3 & 0xffffffff;
    uVar4 = (undefined7)(uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & (byte)param_1);
}



// FUNCTION 140228bc0 FUN_140228bc0 body=2698 status=ok
// SIG undefined FUN_140228bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140228bc0(longlong param_1,longlong *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  undefined4 uVar15;
  int iVar16;
  undefined8 uVar17;
  uint uVar18;
  longlong lVar19;
  double *pdVar20;
  double *pdVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStack_308 [32];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  longlong local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
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
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158 [4];
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if ((param_2 == (longlong *)0x0) ||
     (cVar14 = (**(code **)(*param_2 + 0x4c8))
                         (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x70)),
     cVar14 == '\0')) {
    uVar17 = 0;
    goto LAB_140228f1f;
  }
  local_280 = 0;
  FUN_14022964b(local_158,param_2,*(longlong *)(param_1 + 0x38) + 0x70);
  pdVar20 = local_158;
  pdVar21 = param_3;
  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
    *pdVar21 = *pdVar20;
    pdVar20 = pdVar20 + 1;
    pdVar21 = pdVar21 + 1;
  }
  lVar19 = *(longlong *)(param_1 + 0x38);
  if ((*(byte *)(lVar19 + 0x6c) & 1) == 0) {
    cVar14 = (**(code **)(*param_2 + 0x4c8))(param_2,*(undefined8 *)(lVar19 + 0x80));
    if ((cVar14 != '\0') &&
       (cVar14 = (**(code **)(*param_2 + 0x4c8))
                           (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x88)),
       cVar14 != '\0')) {
      FUN_14022964b(local_158,param_2,*(longlong *)(param_1 + 0x38) + 0x80,0);
      FUN_14022964b(&local_1d8,param_2,*(longlong *)(param_1 + 0x38) + 0x88,0);
      local_2d8 = local_128 - local_1a8;
      local_2e8 = local_138 - (double)local_1b8._0_8_;
      dStack_2e0 = dStack_130 - (double)local_1b8._8_8_;
      dVar26 = local_2d8 * local_2d8 + local_2e8 * local_2e8 + dStack_2e0 * dStack_2e0;
      if ((dVar26 != 1.0) || (NAN(dVar26))) {
        if (9.99999993922529e-09 <= dVar26) {
          dVar26 = 1.0 / SQRT(dVar26);
          local_2d8 = local_2d8 * dVar26;
          dStack_2e0 = dStack_2e0 * dVar26;
          local_2e8 = local_2e8 * dVar26;
        }
        else {
          local_2d8 = DAT_14c8464f0;
          local_2e8 = DAT_14c8464e0;
          dStack_2e0 = DAT_14c8464e8;
        }
      }
      dVar26 = (double)(float)SQRT((param_3[6] - local_1a8) * (param_3[6] - local_1a8) +
                                   (param_3[4] - (double)local_1b8._0_8_) *
                                   (param_3[4] - (double)local_1b8._0_8_) +
                                   (param_3[5] - (double)local_1b8._8_8_) *
                                   (param_3[5] - (double)local_1b8._8_8_));
      param_3[4] = (double)local_1b8._0_8_ - local_2e8 * dVar26;
      param_3[5] = (double)local_1b8._8_8_ - dStack_2e0 * dVar26;
      param_3[6] = local_1a8 - local_2d8 * dVar26;
      param_3[7] = 0.0;
      pdVar20 = &local_2e8;
      pdVar21 = &local_258;
      goto LAB_14022919d;
    }
  }
  else {
    cVar14 = (**(code **)(*param_2 + 0x4c8))(param_2,*(undefined8 *)(lVar19 + 0x78));
    if (cVar14 != '\0') {
      FUN_14022964b(local_158,param_2,*(longlong *)(param_1 + 0x38) + 0x78,0);
      local_248 = local_128 - param_3[6];
      local_258 = local_138 - param_3[4];
      dStack_250 = dStack_130 - param_3[5];
      dVar26 = local_248 * local_248 + local_258 * local_258 + dStack_250 * dStack_250;
      if ((dVar26 != 1.0) || (NAN(dVar26))) {
        if (9.99999993922529e-09 <= dVar26) {
          dVar26 = 1.0 / SQRT(dVar26);
          local_248 = local_248 * dVar26;
          dStack_250 = dStack_250 * dVar26;
          local_258 = dVar26 * local_258;
        }
        else {
          local_248 = DAT_14c8464f0;
          local_258 = DAT_14c8464e0;
          dStack_250 = DAT_14c8464e8;
        }
      }
      pdVar20 = &local_258;
      pdVar21 = &local_1d8;
LAB_14022919d:
      FUN_144afe7fe(pdVar20,pdVar21);
      dVar26 = pdVar21[1];
      dVar2 = pdVar21[2];
      dVar3 = pdVar21[3];
      *param_3 = *pdVar21;
      param_3[1] = dVar26;
      param_3[2] = dVar2;
      param_3[3] = dVar3;
    }
  }
  if (local_280 != 0) {
    uVar15 = (**(code **)(*param_2 + 0x4a8))(param_2,&local_2e8,local_280,2);
    auVar32 = _DAT_149934d80;
    dVar26 = local_2a8._0_8_;
    dVar5 = local_2a8._8_8_;
    dVar2 = local_298._0_8_;
    auVar27 = *(undefined1 (*) [16])(param_3 + 8);
    dVar3 = auVar27._0_8_;
    dVar6 = auVar27._8_8_;
    auVar1 = *(undefined1 (*) [16])(param_3 + 10);
    dVar4 = auVar1._0_8_;
    auVar27 = minpd(auVar27,local_2a8);
    auVar31 = minpd(auVar1,local_298);
    auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
    auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
    iVar16 = movmskpd(uVar15,auVar28);
    auVar27._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
    auVar27._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
    uVar18 = movmskpd((int)param_2,auVar27);
    if ((uVar18 & 0x3fffffff) == 0 && iVar16 == 0) {
      dVar35 = *param_3;
      dVar30 = param_3[1];
      dVar12 = param_3[2];
      dVar10 = param_3[3];
      dVar25 = dVar30 * local_2d8 * -1.0 +
               dVar12 * dStack_2e0 + dVar10 * local_2e8 * 1.0 + dVar35 * dStack_2d0;
      dVar29 = dVar35 * local_2d8 * 1.0 +
               dVar10 * dStack_2e0 + dVar12 * local_2e8 * -1.0 + dVar30 * dStack_2d0;
      auVar32._0_8_ =
           dVar10 * local_2d8 * 1.0 +
           ((local_2e8 * dVar30 * 1.0 + dVar12 * dStack_2d0) - dVar35 * dStack_2e0);
      auVar32._8_8_ =
           dVar12 * local_2d8 * -1.0 +
           ((local_2e8 * dVar35 * -1.0 + dVar10 * dStack_2d0) - dVar30 * dStack_2e0);
      dVar34 = param_3[4] * dVar26;
      dVar36 = param_3[5] * dVar5;
      dVar10 = param_3[6] * dVar2;
      dVar11 = param_3[7] * local_298._8_8_;
      dVar35 = dVar36 * local_2e8 - dStack_2e0 * dVar34;
      dVar30 = dVar10 * dStack_2e0 - local_2d8 * dVar36;
      dVar12 = dVar34 * local_2d8 - local_2e8 * dVar10;
      dVar13 = dVar11 * dStack_2d0 - dStack_2d0 * dVar11;
      dVar30 = dVar30 + dVar30;
      dVar12 = dVar12 + dVar12;
      dVar35 = dVar35 + dVar35;
      dVar13 = dVar13 + dVar13;
      local_f8 = (dVar35 * dStack_2e0 - local_2d8 * dVar12) + dStack_2d0 * dVar30 + dVar34 +
                 local_2c8;
      dStack_f0 = (dVar30 * local_2d8 - dVar35 * local_2e8) + dStack_2d0 * dVar12 + dVar36 +
                  dStack_2c0;
      local_e8 = (dVar12 * local_2e8 - dStack_2e0 * dVar30) + dStack_2d0 * dVar35 + dVar10 +
                 (double)CONCAT44(uStack_2b4,local_2b8);
      dStack_2b0 = (dVar13 * dStack_2d0 - dVar13 * dStack_2d0) + dStack_2d0 * dVar13 + dVar11 +
                   dStack_2b0;
    }
    else {
      dVar30 = dStack_2e0 + dStack_2e0;
      dVar25 = local_2d8 + local_2d8;
      dVar35 = local_2e8 * (local_2e8 + local_2e8);
      local_188 = (1.0 - (dVar35 + dStack_2e0 * dVar30)) * dVar2;
      dVar29 = (local_2e8 + local_2e8) * dStack_2d0;
      local_198 = (dVar30 * dStack_2d0 + local_2e8 * dVar25) * dVar2;
      dStack_190 = (dVar25 * dStack_2e0 - dVar29) * dVar2;
      local_1d8 = ((double)DAT_149934d80 - (local_2d8 * dVar25 + dStack_2e0 * dVar30)) * dVar26;
      dVar35 = (DAT_149934d80._8_8_ - (local_2d8 * dVar25 + dVar35)) * dVar5;
      dStack_1d0 = (dVar30 * local_2e8 + dVar25 * dStack_2d0) * dVar26;
      local_1a8 = (dVar25 * dStack_2e0 + dVar29) * dVar5;
      local_1c8 = (local_2e8 * dVar25 - dVar30 * dStack_2d0) * dVar26;
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar35,0);
      local_1b8._0_8_ = (dVar30 * local_2e8 - dVar25 * dStack_2d0) * dVar5;
      local_1b8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = local_2c8;
      dStack_170 = dStack_2c0;
      local_168 = local_2b8;
      uStack_164 = uStack_2b4;
      uStack_160 = 0;
      uStack_15c = 0x3ff00000;
      dVar10 = *param_3;
      dVar11 = param_3[1];
      dVar13 = param_3[2];
      dVar34 = dVar11 + dVar11;
      dVar29 = dVar13 + dVar13;
      dVar12 = dVar10 * (dVar10 + dVar10);
      local_208 = (1.0 - (dVar12 + dVar11 * dVar34)) * dVar4;
      dVar25 = param_3[3];
      dVar35 = dVar29 * dVar25;
      dVar30 = (dVar10 + dVar10) * param_3[3];
      dVar25 = dVar34 * dVar25;
      local_218 = (dVar25 + *param_3 * dVar29) * dVar4;
      local_238 = (dVar34 * dVar10 - dVar35) * dVar6;
      dStack_210 = (dVar29 * dVar11 - dVar30) * dVar4;
      local_258 = ((double)DAT_149934d80 - (dVar13 * dVar29 + dVar11 * dVar34)) * dVar3;
      dStack_230 = (DAT_149934d80._8_8_ - (dVar13 * dVar29 + dVar12)) * dVar6;
      dStack_250 = (dVar34 * dVar10 + dVar35) * dVar3;
      local_228 = (dVar29 * dVar11 + dVar30) * dVar6;
      local_248 = (*param_3 * dVar29 - dVar25) * dVar3;
      uStack_240 = 0;
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = param_3[4];
      dStack_1f0 = param_3[5];
      local_1e8 = param_3[6];
      uStack_1e0 = 0x3ff0000000000000;
      FUN_1447fea8d(local_158);
      FUN_144a1c686(local_158,0x3e45798ee0000000);
      auVar31._8_8_ = -(ulonglong)(0.0 <= dVar5 * dVar6);
      auVar31._0_8_ = -(ulonglong)(0.0 <= dVar26 * dVar3);
      auVar27 = blendvpd(_DAT_149936790,auVar32,auVar31);
      uVar22 = -(ulonglong)(0.0 <= dVar2 * dVar4);
      dVar25 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
      dVar29 = auVar27._0_8_;
      local_158[2] = local_158[2] * dVar29;
      local_158[1] = local_158[1] * dVar29;
      local_158[0] = local_158[0] * dVar29;
      dVar29 = auVar27._8_8_;
      local_128 = local_128 * dVar29;
      dStack_130 = dStack_130 * dVar29;
      local_138 = dVar29 * local_138;
      local_108 = local_108 * dVar25;
      local_110 = local_110 * dVar25;
      local_118 = dVar25 * local_118;
      FUN_14481fd10(&local_278,local_158);
      dVar25 = local_268 * local_268 + local_278 * local_278;
      dVar29 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar24._0_8_ = dVar25 + dVar29;
      auVar24._8_8_ = dVar25 + dVar29;
      auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_);
      auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_);
      auVar27 = sqrtpd(auVar24,auVar24);
      auVar27 = divpd(auVar32,auVar27);
      auVar33._0_8_ = auVar27._0_8_ * local_268;
      auVar33._8_8_ = auVar27._8_8_ * dStack_260;
      dVar25 = (double)((ulonglong)(local_278 * auVar27._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_));
      dVar29 = (double)((ulonglong)(dStack_270 * auVar27._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_));
      auVar32 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar23);
      dStack_2b0 = 0.0;
    }
    dVar35 = auVar1._8_8_ * local_298._8_8_;
    *param_3 = dVar25;
    param_3[1] = dVar29;
    *(undefined1 (*) [16])(param_3 + 2) = auVar32;
    auVar8._8_4_ = SUB84(dStack_f0,0);
    auVar8._0_8_ = local_f8;
    auVar8._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
    *(undefined1 (*) [16])(param_3 + 4) = auVar8;
    auVar1._8_4_ = SUB84(dStack_2b0,0);
    auVar1._0_8_ = local_e8;
    auVar1._12_4_ = (int)((ulonglong)dStack_2b0 >> 0x20);
    *(undefined1 (*) [16])(param_3 + 6) = auVar1;
    auVar9._8_4_ = SUB84(dVar6 * dVar5,0);
    auVar9._0_8_ = dVar3 * dVar26;
    auVar9._12_4_ = (int)((ulonglong)(dVar6 * dVar5) >> 0x20);
    *(undefined1 (*) [16])(param_3 + 8) = auVar9;
    auVar7._8_4_ = SUB84(dVar35,0);
    auVar7._0_8_ = dVar4 * dVar2;
    auVar7._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    *(undefined1 (*) [16])(param_3 + 10) = auVar7;
  }
  uVar17 = 1;
LAB_140228f1f:
  if ((local_d0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17;
}



// FUNCTION 14022964b FUN_14022964b body=523 status=ok
// SIG undefined FUN_14022964b(void)

undefined8 *
FUN_14022964b(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3ff00000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0;
  if (DAT_14cac7cb8 == 0) {
    local_60 = &local_48;
    local_48 = FUN_144a7958c;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_1417963e0;
    local_68 = &LAB_1478a2d90;
    local_70 = &LAB_146395589;
    local_78 = L"Engine";
    local_80 = 0x20000000000;
    local_88 = 0x10000005;
    local_90 = 0x10;
    local_98 = 0xad0;
    FUN_14081cfa3(L"/Script/Engine",L"SkinnedMeshComponent",&DAT_14cac7cb8,FUN_146395562);
  }
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cac7cb8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cac7cb8 + 0x38) * 8) != DAT_14cac7cb8 + 0x30)) {
    lVar7 = FUN_144a7a726();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
         ) == lVar7 + 0x30)) {
      lVar7 = FUN_147a29a7a(param_2,*param_3);
      if (lVar7 != 0) {
        FUN_144a7484c(lVar7 + 0x48,&local_48);
        uVar3 = *(undefined8 *)(lVar7 + 0x30);
        uVar4 = *(undefined8 *)(lVar7 + 0x38);
        uVar1 = *(undefined8 *)(lVar7 + 0x40);
        uVar5 = *(undefined8 *)(lVar7 + 0x60);
        uVar6 = *(undefined8 *)(lVar7 + 0x68);
        uVar2 = *(undefined8 *)(lVar7 + 0x70);
        *(undefined4 *)param_1 = (undefined4)local_48;
        *(undefined4 *)((longlong)param_1 + 4) = local_48._4_4_;
        *(undefined4 *)(param_1 + 1) = uStack_40;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3c;
        param_1[2] = local_38;
        param_1[3] = uStack_30;
        param_1[4] = uVar3;
        param_1[5] = uVar4;
        param_1[6] = uVar1;
        param_1[7] = 0;
        param_1[8] = uVar5;
        param_1[9] = uVar6;
        param_1[10] = uVar2;
        param_1[0xb] = 0;
      }
    }
  }
  else {
    lVar7 = FUN_140229858(param_2,*param_3);
    if (lVar7 != 0) {
      FUN_1402299d4(lVar7,param_1);
      if (param_4 != (undefined8 *)0x0) {
        *param_4 = *(undefined8 *)(lVar7 + 0x30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140229858 FUN_140229858 body=379 status=ok
// SIG undefined FUN_140229858(void)

undefined8 FUN_140229858(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong local_28;
  
  local_28 = param_2;
  uVar1 = *(uint *)(param_1 + 0x7a8);
  uVar12 = (ulonglong)uVar1;
  lVar11 = *(longlong *)(param_1 + 0x7a0);
  uVar13 = 0;
  iVar3 = (int)((ulonglong)param_2 >> 0x20);
  if (0 < (int)uVar1) {
    do {
      uVar10 = (int)(uVar12 >> 1) + (int)uVar13;
      lVar8 = (ulonglong)uVar10 * 0x10;
      iVar9 = *(int *)(lVar11 + lVar8) - (int)param_2;
      if (iVar9 == 0) {
        iVar9 = *(int *)(lVar11 + 4 + lVar8) - iVar3;
      }
      uVar14 = (uint)uVar12;
      if (iVar9 < 0) {
        uVar13 = (ulonglong)(uVar10 + (uVar14 & 1));
      }
      uVar12 = uVar12 >> 1;
    } while (1 < uVar14);
  }
  if ((int)uVar13 < (int)uVar1) {
    piVar6 = (int *)(lVar11 + uVar13 * 0x10);
    iVar9 = (int)param_2 - *piVar6;
    if (iVar9 == 0) {
      iVar9 = iVar3 - piVar6[1];
    }
    plVar4 = (longlong *)0x0;
    if (-1 < iVar9) {
      plVar4 = (longlong *)(piVar6 + 2);
    }
  }
  else {
    plVar4 = (longlong *)0x0;
  }
  plVar7 = &local_28;
  if (plVar4 != (longlong *)0x0) {
    plVar7 = plVar4;
  }
  lVar11 = *plVar7;
  plVar4 = *(longlong **)(param_1 + 0x658);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar4 != (longlong *)0x0) != 0) goto LAB_14022999b;
    if (plVar4 == (longlong *)0x0) {
      return 0;
    }
LAB_140229984:
    bVar2 = DAT_14c950c29 & plVar4 != (longlong *)0x0;
  }
  else {
    if (DAT_14c950c29 == 0) goto LAB_140229915;
LAB_14022999b:
    FUN_1456cec3c(plVar4);
    plVar4 = *(longlong **)(param_1 + 0x658);
    if (plVar4 == (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x660);
      goto LAB_140229984;
    }
    bVar2 = DAT_14c950c29 & 1;
  }
  if (bVar2 != 0) {
    FUN_1456cec3c(plVar4);
  }
LAB_140229915:
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else if ((longlong)*(int *)(param_1 + 0x9e8) != 0) {
    lVar8 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x9e0) + lVar8) == lVar11) {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x9e0) + 8 + lVar8);
        break;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x9e8) * 0x10 != lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x000140229965. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar4 + 0x3e0))(plVar4,lVar11);
  return uVar5;
}



// FUNCTION 1402299d4 FUN_1402299d4 body=470 status=ok
// SIG undefined FUN_1402299d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1402299d4(longlong param_1,double *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x50);
  auVar9 = divpd(auVar1,_DAT_1499387d0);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *(double *)(param_1 + 0x60);
  auVar10 = divpd(auVar10,_DAT_1499387d0);
  auVar9 = roundpd(auVar9,auVar9,3);
  auVar10 = roundpd(auVar10,auVar10,3);
  dVar7 = (auVar1._0_8_ - auVar9._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar8 = (auVar1._8_8_ - auVar9._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar5 = (*(double *)(param_1 + 0x60) - auVar10._0_8_ * (double)DAT_1499387d0) *
          0.008726646259971648;
  dVar6 = (0.0 - auVar10._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar2 = sin(dVar7);
  dVar3 = sin(dVar8);
  dVar4 = sin(dVar5);
  sin(dVar6);
  dVar7 = cos(dVar7);
  dVar8 = cos(dVar8);
  dVar5 = cos(dVar5);
  cos(dVar6);
  dVar6 = dVar3 * dVar2 * dVar4 + dVar8 * dVar7 * dVar5;
  *param_2 = dVar2 * dVar3 * dVar5 - dVar7 * dVar8 * dVar4;
  param_2[1] = -(dVar2 * dVar8 * dVar5) - dVar7 * dVar3 * dVar4;
  auVar1._8_4_ = SUB84(dVar6,0);
  auVar1._0_8_ = -(dVar8 * dVar2 * dVar4) + dVar3 * dVar7 * dVar5;
  auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar1;
  dVar3 = *(double *)(param_1 + 0x40);
  dVar2 = *(double *)(param_1 + 0x48);
  param_2[4] = *(double *)(param_1 + 0x38);
  param_2[5] = dVar3;
  param_2[6] = dVar2;
  param_2[7] = 0.0;
  dVar3 = *(double *)(param_1 + 0x70);
  dVar2 = *(double *)(param_1 + 0x78);
  param_2[8] = *(double *)(param_1 + 0x68);
  param_2[9] = dVar3;
  param_2[10] = dVar2;
  param_2[0xb] = 0.0;
  return param_2;
}



// FUNCTION 140229baa FUN_140229baa body=1555 status=ok
// SIG undefined FUN_140229baa(void)

void FUN_140229baa(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  double _Y;
  char cVar4;
  int iVar5;
  char *pcVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  bool bVar15;
  double dVar16;
  double _X;
  double dVar17;
  double dVar18;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 *local_d8;
  longlong local_c8;
  undefined4 local_c0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar12 = param_2[8];
  if (lVar12 == 0) {
LAB_14022a154:
    *param_3 = 0;
    *(undefined4 *)(param_3 + 1) = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    *(undefined8 *)((longlong)param_3 + 0x1e) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
  }
  if ((*(char *)((longlong)param_3 + 0x25) != '\0') ||
     (((((lVar8 = *param_2, (char)param_2[2] == '\x04' && (*(int *)((longlong)param_3 + 0x14) != 0))
        && (uVar2 = *(uint *)(param_3 + 2), -1 < (int)uVar2)) &&
       (((int)uVar2 < DAT_14c9647dc &&
        (lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar9 != 0)))) &&
      ((*(int *)(lVar9 + 0x10) == *(int *)((longlong)param_3 + 0x14) &&
       (((*(uint *)(lVar9 + 8) & 0x10200000) == 0 && ((char)param_3[3] == '\x01'))))))))
  goto LAB_140229de4;
  if (((param_4 == '\0') && (*(char *)(param_2[1] + 0x9e8) == '\0')) ||
     ((((pcVar6 = *(char **)(lVar8 + 0x10), *pcVar6 == '\x01' && (*(char *)(lVar12 + 0x161) == '\0')
        ) || (param_2[5] != 0)) || (pcVar6[0x40] == '\x01')))) goto LAB_14022a154;
  lVar9 = param_2[7];
  if ((param_4 == '\0') && (lVar3 = param_2[1], *(char *)(lVar3 + 0x90) == '\x01')) {
    dVar18 = *(double *)(lVar3 + 0x28) - *(double *)(*(longlong *)(lVar8 + 0x18) + 0xd8);
    dVar16 = *(double *)(lVar3 + 0x20) - *(double *)(*(longlong *)(lVar8 + 0x18) + 0xd0);
    dVar17 = dVar16 * dVar16 + dVar18 * dVar18;
    if (((dVar17 != 1.0) || (_X = dVar16, _Y = dVar18, NAN(dVar17))) &&
       (_X = DAT_14c8464e0, _Y = DAT_14c8464e8, 9.99999993922529e-09 <= dVar17)) {
      _X = dVar16 * (1.0 / SQRT(dVar17));
      _Y = dVar18 * (1.0 / SQRT(dVar17));
    }
    if (((_X != 0.0) || (NAN(_X))) || ((_Y != 0.0 || (NAN(_Y))))) {
      atan2(_Y,_X);
      pcVar6 = *(char **)(*param_2 + 0x10);
    }
  }
  local_64 = *(undefined4 *)(pcVar6 + 0x44);
  if (*(int *)(param_1 + 0x2c) == 0) {
LAB_140229f15:
    local_e0 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x28);
    local_e0 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x2c) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_140229f15;
      local_e0 = *puVar7;
    }
  }
  local_d8 = &local_64;
  local_e8 = (int)lVar9;
  lVar8 = FUN_14022a302(lVar12,*(undefined8 *)(lVar8 + 0x18),lVar8 + 0x30,param_2 + 3);
  if (lVar8 == 0) {
    if ((char)param_2[9] == '\x01') {
      *param_3 = 0;
      *(undefined4 *)(param_3 + 1) = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      *(undefined8 *)((longlong)param_3 + 0x1e) = 0;
    }
    else {
      puVar1 = (uint *)(param_3 + 2);
      if ((((*(int *)((longlong)param_3 + 0x14) == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) ||
          (DAT_14c9647dc <= (int)uVar2)) ||
         (((lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar12 == 0 ||
           (*(int *)(lVar12 + 0x10) != *(int *)((longlong)param_3 + 0x14))) ||
          (((*(uint *)(lVar12 + 8) & 0x10200000) != 0 ||
           ((lVar12 = param_2[3], lVar12 != 0 && (lVar12 != *param_3 && *param_3 != 0)))))))) {
        *param_3 = 0;
        *(undefined4 *)(param_3 + 1) = 0;
        *(undefined8 *)((longlong)param_3 + 0x1e) = 0;
        puVar1[0] = 0;
        puVar1[1] = 0;
        param_3[3] = 0;
        *(undefined1 *)(param_3 + 3) = 2;
        *(undefined4 *)(param_3 + 4) = 0;
      }
    }
    goto LAB_140229de4;
  }
  puVar1 = (uint *)(param_3 + 2);
  cVar4 = FUN_14022a1c4(puVar1,lVar8);
  uVar2 = *(uint *)(lVar8 + 0xc);
  *(uint *)(param_3 + 2) = uVar2;
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  iVar5 = *(int *)(lVar8 + 0x10);
  if (*(int *)(lVar8 + 0x10) == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar10 = DAT_14c964868 + 1;
    bVar15 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar15) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar10);
    }
    LOCK();
    iVar5 = *(int *)(lVar8 + 0x10);
    bVar15 = iVar5 == 0;
    if (bVar15) {
      *(int *)(lVar8 + 0x10) = iVar10;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar15) {
      iVar5 = iVar10;
    }
  }
  *(int *)((longlong)param_3 + 0x14) = iVar5;
  if (cVar4 != '\0') goto LAB_140229de4;
  puVar7 = (undefined8 *)*param_2;
  if (((((iVar5 == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar13 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar13 == (longlong *)0x0 || ((int)plVar13[2] != iVar5)))) ||
     ((lVar8 = puVar7[3], (*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (*plVar13 == 0)))) {
    plVar13 = &DAT_14c846480;
    plVar11 = &local_c8;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *plVar11 = *plVar13;
      plVar13 = plVar13 + 1;
      plVar11 = plVar11 + 1;
    }
  }
  else {
    local_e8 = *(undefined4 *)(lVar8 + 0x54);
    FUN_1449432a4(*plVar13,&local_c8,0,0x7f7fffff);
    dVar18 = (double)*(float *)(lVar8 + 0x50);
    puVar7 = (undefined8 *)*param_2;
    local_a8 = dVar18 * local_a8;
    dStack_a0 = dVar18 * dStack_a0;
    local_98 = dVar18 * local_98;
  }
  iVar5 = (**(code **)(*(longlong *)*puVar7 + 0x18))();
  dVar18 = local_a8 * local_a8 + dStack_a0 * dStack_a0;
  if (iVar5 != 1) {
    dVar18 = local_98 * local_98 + dVar18;
  }
  *(float *)(param_3 + 4) = (float)SQRT(dVar18);
  *(undefined4 *)((longlong)param_3 + 0x1c) = local_64;
  if (*(int *)((longlong)param_3 + 0x14) == 0) {
LAB_14022a11c:
    uVar14 = 0;
  }
  else {
    uVar2 = *puVar1;
    uVar14 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)((longlong)param_3 + 0x14) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_14022a11c;
      uVar14 = *puVar7;
    }
  }
  FUN_14022b110(lVar12,&local_c8,uVar14);
  if (DAT_14c950c29 == '\x01') {
    if (local_c8 == 0) {
      local_c8 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *param_3 = local_c8;
  *(undefined4 *)(param_3 + 1) = local_c0;
  *(undefined1 *)(param_3 + 3) = 1;
LAB_140229de4:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14022a1c4 FUN_14022a1c4 body=317 status=ok
// SIG undefined FUN_14022a1c4(void)

bool FUN_14022a1c4(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
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
  }
  uVar5 = *param_1;
  uVar1 = param_1[1];
  bVar7 = true;
  if ((uVar5 != uVar4) || (uVar1 != uVar3)) {
    if ((uVar1 == 0) ||
       (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x10) != uVar1 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      if ((uVar3 != 0) &&
         (((-1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0 &&
           (*(uint *)(lVar6 + 0x10) == uVar3)))))) {
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 14022a302 FUN_14022a302 body=1688 status=ok
// SIG undefined FUN_14022a302(void)

longlong FUN_14022a302(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                      float param_5,longlong param_6,float *param_7)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  double dVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  float *pfVar16;
  bool bVar17;
  float fVar18;
  double dVar19;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  undefined1 auStack_248 [32];
  longlong *local_228;
  longlong *local_220;
  longlong local_210;
  longlong *local_208;
  undefined8 local_200;
  longlong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  float local_1a8;
  char local_1a4;
  double local_1a0;
  undefined1 local_190 [8];
  double local_188;
  double dStack_180;
  undefined1 local_140 [64];
  undefined1 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_1f0 = param_3;
  dVar19 = (double)FUN_144719204(SUB84(*(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20),0),
                                 0x4076800000000000);
  dVar19 = (double)(~-(ulonglong)(dVar19 < 0.0) & (ulonglong)dVar19 |
                   (ulonglong)(dVar19 + 360.0) & -(ulonglong)(dVar19 < 0.0));
  auVar20._0_8_ = ~-(ulonglong)(180.0 < dVar19) & (ulonglong)dVar19;
  auVar20._8_8_ =
       ~CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) & CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc) |
       CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (ulonglong)(dVar19 + -360.0) & -(ulonglong)(180.0 < dVar19);
  auVar21._4_12_ = SUB1612(auVar20 | auVar4,4);
  auVar21._0_4_ = (float)SUB168(auVar20 | auVar4,0);
  local_200 = param_1;
  lVar8 = FUN_14022af78(param_1,auVar21._0_8_);
  if (lVar8 == 0) {
LAB_14022a8c6:
    lVar12 = 0;
  }
  else {
    fVar23 = *(float *)(param_2 + 0x58);
    lVar8 = FUN_14022a99c(lVar8,*param_4,4);
    if (lVar8 == 0) {
      lVar8 = FUN_14022b0b8();
      if (lVar8 == 0) goto LAB_14022a8c6;
      fVar23 = 3.4028235e+38;
    }
    local_1b0 = *(undefined8 *)(param_2 + 0xe0);
    local_1c0 = *(undefined8 *)(param_2 + 0xd0);
    uStack_1b8 = *(undefined8 *)(param_2 + 0xd8);
    local_1d0 = *(undefined8 *)(param_2 + 0x20);
    lVar12 = 0;
    local_1d8 = 0;
    local_1c8 = 0;
    local_100 = (undefined1 *)0x0;
    local_f8 = 0x400000000;
    iVar2 = *(int *)(lVar8 + 0x38);
    local_208 = param_4;
    if ((longlong)iVar2 != 0) {
      lVar12 = *(longlong *)(lVar8 + 0x30);
      local_210 = param_2 + 0x50;
      fVar22 = 3.4028235e+38;
      lVar13 = 0;
      do {
        lVar11 = *(longlong *)(lVar12 + 8 + lVar13);
        if (lVar11 != 0) {
          local_228 = (longlong *)CONCAT44(local_228._4_4_,0x7f7fffff);
          FUN_14022ad2a(&local_1d8,&local_1a8,lVar11,local_210);
          (**(code **)(**(longlong **)(lVar12 + 8 + lVar13) + 0x2b0))();
          fVar18 = (float)FUN_14022aac6(local_1f0,local_190);
          dVar19 = (double)FUN_144719204(SUB84((double)fVar18 - local_1a0,0),0x4076800000000000);
          uVar6 = local_f8;
          dVar19 = (double)(~-(ulonglong)(dVar19 < 0.0) & (ulonglong)dVar19 |
                           (ulonglong)(dVar19 + 360.0) & -(ulonglong)(dVar19 < 0.0));
          fVar18 = ABS((float)(double)(~-(ulonglong)(180.0 < dVar19) & (ulonglong)dVar19 |
                                      (ulonglong)(dVar19 + -360.0) & -(ulonglong)(180.0 < dVar19)));
          if (fVar18 <= fVar22 + 10.0) {
            uVar7 = local_f8._4_4_;
            if ((fVar18 < fVar22 + -10.0) &&
               (local_f8 = (ulonglong)local_f8._4_4_ << 0x20, fVar22 = fVar18, (longlong)uVar6 < 0))
            {
              FUN_147e44396(local_140);
              uVar7 = local_f8._4_4_;
            }
            uVar6 = local_f8;
            lVar11 = (longlong)(int)local_f8;
            uVar10 = (int)local_f8 + 1;
            local_f8 = CONCAT44(local_f8._4_4_,uVar10);
            if (uVar7 < uVar10) {
              FUN_147e44466(local_140,uVar6 & 0xffffffff);
            }
            puVar9 = local_100;
            if (local_100 == (undefined1 *)0x0) {
              puVar9 = local_140;
            }
            *(undefined4 *)(puVar9 + lVar11 * 0x10) = *(undefined4 *)(lVar12 + lVar13);
            lVar3 = *(longlong *)(lVar12 + 8 + lVar13);
            *(longlong *)(puVar9 + lVar11 * 0x10 + 8) = lVar3;
            if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
              FUN_1456cec3c();
            }
          }
        }
        lVar13 = lVar13 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar13);
      lVar12 = (longlong)(int)local_f8;
      if (lVar12 == 0) {
        lVar12 = 0;
      }
      else if (((fVar23 == 3.4028235e+38) && (!NAN(fVar23))) || (*local_208 == 0)) {
        *param_7 = *(float *)(lVar8 + 0x20);
        puVar9 = local_140;
        if (local_100 != (undefined1 *)0x0) {
          puVar9 = local_100;
        }
        lVar12 = *(longlong *)(puVar9 + 8);
      }
      else {
        puVar9 = local_140;
        if (local_100 != (undefined1 *)0x0) {
          puVar9 = local_100;
        }
        lVar13 = *(longlong *)(puVar9 + 8);
        if (param_6 != 0) {
          lVar11 = 0;
          do {
            lVar13 = param_6;
            if (*(longlong *)(puVar9 + lVar11 + 8) == param_6) break;
            lVar11 = lVar11 + 0x10;
            lVar13 = *(longlong *)(puVar9 + 8);
          } while (lVar12 << 4 != lVar11);
        }
        lVar11 = 0;
        fVar23 = 3.4028235e+38;
        bVar17 = false;
        plVar14 = local_208;
        local_1f8 = lVar8;
        do {
          if (*(longlong *)(puVar9 + lVar11 + 8) != 0) {
            uVar1 = *(undefined4 *)(puVar9 + lVar11);
            local_1e8 = *plVar14;
            if (((local_1e8 == 0) || (DAT_14c950c29 == '\0')) ||
               (FUN_1456cec3c(local_1e8), *(longlong *)(puVar9 + lVar11 + 8) != 0)) {
              local_228 = (longlong *)CONCAT44(local_228._4_4_,*(undefined4 *)(param_2 + 0x54));
              local_1e0 = uVar1;
              FUN_1449432a4(*(undefined4 *)(param_2 + 0x54),&local_1a8,0,0x7f7fffff);
              dVar19 = (double)*(float *)(param_2 + 0x50) * local_188;
              dVar5 = (double)*(float *)(param_2 + 0x50) * dStack_180;
            }
            else {
              puVar15 = &DAT_14c846480;
              pfVar16 = &local_1a8;
              for (lVar8 = 0xc; plVar14 = local_208, dVar19 = local_188, dVar5 = dStack_180,
                  local_1e0 = uVar1, lVar8 != 0; lVar8 = lVar8 + -1) {
                *(undefined8 *)pfVar16 = *puVar15;
                puVar15 = puVar15 + 1;
                pfVar16 = pfVar16 + 2;
              }
            }
            fVar22 = param_5 - (float)SQRT(dVar19 * dVar19 + dVar5 * dVar5);
            if (((0.0 <= fVar22) &&
                (local_228 = plVar14, local_220 = &local_1e8,
                FUN_1401590d2(local_200,&local_1a8,fVar22,local_210), local_1a4 == '\x01')) &&
               (ABS(1.0 - local_1a8) < fVar23)) {
              lVar13 = *(longlong *)(puVar9 + lVar11 + 8);
              bVar17 = true;
              fVar23 = ABS(1.0 - local_1a8);
            }
          }
          lVar11 = lVar11 + 0x10;
        } while (lVar12 * 0x10 != lVar11);
        lVar12 = 0;
        if (bVar17) {
          lVar12 = lVar13;
        }
        fVar23 = *(float *)(local_1f8 + 0x20);
        fVar22 = (float)FUN_144867862(local_210,lVar12);
        *param_7 = fVar22 * fVar23;
      }
    }
    if (local_100 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar12;
}



// FUNCTION 14022a99c FUN_14022a99c body=145 status=ok
// SIG undefined FUN_14022a99c(void)

longlong FUN_14022a99c(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x10);
  plVar5 = plVar1;
  do {
    if ((longlong)(int)plVar5[1] != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(*plVar5 + lVar4) == param_2) {
          iVar3 = (int)((ulonglong)((longlong)plVar5 - (longlong)plVar1) >> 3) * 0x286bca1b;
          if (iVar3 < 0) {
            return 0;
          }
          do {
            lVar4 = FUN_14022aa2e(param_1,iVar3,param_3);
            if (lVar4 != 0) {
              return lVar4;
            }
            bVar2 = 0 < iVar3;
            iVar3 = iVar3 + -1;
          } while (bVar2);
          return 0;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)plVar5[1] * 8 != lVar4);
    }
    plVar5 = plVar5 + 0x13;
  } while (plVar5 != plVar1 + (longlong)*(int *)(param_1 + 0x18) * 0x13);
  return 0;
}



// FUNCTION 14022aa2e FUN_14022aa2e body=151 status=ok
// SIG undefined FUN_14022aa2e(void)

longlong FUN_14022aa2e(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  int *piVar2;
  
  if (param_3 == '\x04') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    piVar2 = (int *)((longlong)param_2 * 0x98 + lVar1 + 0x38);
  }
  else if (param_3 == '\x06') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(int *)(lVar1 + 0x48 + (longlong)param_2 * 0x98) < 1) {
      return 0;
    }
    piVar2 = (int *)((longlong)param_2 * 0x98 + lVar1 + 0x58);
  }
  else if (param_3 == '\x02') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    piVar2 = (int *)((longlong)param_2 * 0x98 + lVar1 + 8);
  }
  else {
    if (param_3 != '\x03') {
      return 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(int *)(lVar1 + 0x68 + (longlong)param_2 * 0x98) < 1) {
      return 0;
    }
    piVar2 = (int *)((longlong)param_2 * 0x98 + lVar1 + 0x78);
  }
  if (*piVar2 < 1) {
    return 0;
  }
  return lVar1 + (longlong)param_2 * 0x98;
}



// FUNCTION 14022aac6 FUN_14022aac6 body=612 status=ok
// SIG undefined FUN_14022aac6(void)

void FUN_14022aac6(longlong param_1,double *param_2,float param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  double _Y;
  double dVar6;
  double dVar7;
  double _X;
  double dVar8;
  float fVar9;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(char *)(param_1 + 0x40) == '\0') {
      dVar7 = *(double *)(param_1 + 0x10) - param_2[1];
      dVar8 = *(double *)(param_1 + 8) - *param_2;
      if ((((dVar7 != 0.0) || (NAN(dVar7))) || (dVar8 != 0.0)) || (NAN(dVar8))) {
        atan2(dVar7,dVar8);
      }
    }
    else {
      if (param_4[1] <= param_3) {
        param_3 = param_4[1];
      }
      dVar7 = *(double *)(param_1 + 0x30);
      dVar8 = *(double *)(param_1 + 0x28);
      dVar1 = *(double *)(param_1 + 8);
      dVar2 = *(double *)(param_1 + 0x10);
      dVar3 = *param_2;
      dVar6 = param_2[1];
      _Y = dVar2 - dVar6;
      _X = dVar1 - dVar3;
      if (((_Y != 0.0) || (NAN(_Y))) || ((_X != 0.0 || (NAN(_X))))) {
        dVar6 = atan2(_Y,_X);
        fVar9 = (float)(dVar6 * 57.29577951308232);
        dVar3 = *param_2;
        dVar6 = param_2[1];
      }
      else {
        fVar9 = 0.0;
      }
      dVar3 = ((double)param_3 * dVar8 + dVar1) - dVar3;
      dVar6 = (dVar7 * (double)param_3 + dVar2) - dVar6;
      if (((dVar6 != 0.0) || (NAN(dVar6))) || ((dVar3 != 0.0 || (NAN(dVar3))))) {
        dVar7 = atan2(dVar6,dVar3);
        fVar4 = (float)(dVar7 * 57.29577951308232);
      }
      else {
        fVar4 = 0.0;
      }
      dVar7 = (double)FUN_144719204((double)(fVar4 - fVar9),0x4076800000000000);
      dVar7 = (double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar7 |
                      (ulonglong)(dVar7 + 360.0) & -(ulonglong)(dVar7 < 0.0));
      fVar5 = (float)(double)(~-(ulonglong)(180.0 < dVar7) & (ulonglong)dVar7 |
                             (ulonglong)(dVar7 + -360.0) & -(ulonglong)(180.0 < dVar7));
      fVar4 = ABS(fVar5);
      if (*param_4 <= ABS(fVar5)) {
        fVar4 = *param_4;
      }
      FUN_144719204((double)(fVar4 * (float)(-(uint)(0.0 < fVar5) & 0x3f800000 |
                                            ~-(uint)(0.0 < fVar5) &
                                            -(uint)(fVar5 < 0.0) & 0xbf800000) + fVar9),
                    0x4076800000000000);
    }
  }
  return;
}



// FUNCTION 14022ad2a FUN_14022ad2a body=588 status=ok
// SIG undefined FUN_14022ad2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_14022ad2a(longlong param_1,undefined8 *param_2,longlong param_3,float *param_4,
             undefined4 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined1 auStack_158 [32];
  float local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_100 [8];
  double local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_3 == 0) {
    puVar9 = &DAT_14c846480;
    puVar10 = &local_e8;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    dVar11 = (double)local_c8._0_8_;
    dVar5 = (double)local_c8._8_8_;
  }
  else {
    local_138 = param_4[1];
    FUN_1449432a4(param_3,&local_e8,param_3,param_5);
    dVar2 = (double)*param_4;
    dVar11 = dVar2 * (double)local_c8._0_8_;
    dVar5 = dVar2 * (double)local_c8._8_8_;
    local_b8 = dVar2 * local_b8;
    dStack_b0 = dStack_b0 * 0.0;
    local_c8._8_4_ = SUB84(dVar5,0);
    local_c8._0_8_ = dVar11;
    local_c8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  }
  dVar7 = local_b8;
  dVar2 = (double)(float)*(double *)(param_1 + 8) * 0.017453292519943295;
  dVar3 = sin(dVar2);
  dVar4 = cos(dVar2);
  local_128 = (undefined4)local_e8;
  uStack_124 = local_e8._4_4_;
  uStack_120 = uStack_e0;
  uStack_11c = uStack_dc;
  local_118 = local_d8;
  uStack_110 = uStack_d0;
  FUN_1448052ee(&local_128,local_100);
  param_2[2] = DAT_14cb1c858;
  uVar6 = _DAT_14cb1c850;
  *param_2 = _DAT_14cb1c848;
  param_2[1] = uVar6;
  dVar2 = *(double *)(param_1 + 0x28);
  dVar1 = *(double *)(param_1 + 0x20);
  param_2[3] = (dVar4 * dVar11 - dVar5 * dVar3) + *(double *)(param_1 + 0x18);
  param_2[4] = dVar3 * dVar11 + dVar5 * dVar4 + dVar1;
  param_2[5] = dVar7 + dVar2;
  dVar11 = (double)FUN_144719204(SUB84((double)(float)local_f8 + *(double *)(param_1 + 8),0));
  dVar11 = (double)(~-(ulonglong)(dVar11 < 0.0) & (ulonglong)dVar11 |
                   (ulonglong)(dVar11 + 360.0) & -(ulonglong)(dVar11 < 0.0));
  param_2[1] = ~-(ulonglong)(180.0 < dVar11) & (ulonglong)dVar11 |
               (ulonglong)(dVar11 + -360.0) & -(ulonglong)(180.0 < dVar11);
  if ((local_80 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022af78 FUN_14022af78 body=320 status=ok
// SIG undefined FUN_14022af78(void)

longlong FUN_14022af78(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  
  if ((longlong)*(int *)(param_1 + 0x108) == 0) {
    lVar3 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x100);
    lVar2 = (longlong)*(int *)(param_1 + 0x108) * 0x28;
    lVar3 = 0;
    fVar7 = 3.4028235e+38;
    do {
      dVar6 = (double)FUN_144719204(SUB84((double)(param_2 - *(float *)(lVar4 + 8)),0),
                                    0x4076800000000000);
      dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                      (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
      fVar5 = ABS((float)(double)(~-(ulonglong)(180.0 < dVar6) & (ulonglong)dVar6 |
                                 (ulonglong)(dVar6 + -360.0) & -(ulonglong)(180.0 < dVar6)));
      lVar1 = lVar4;
      if (fVar7 <= fVar5) {
        fVar5 = fVar7;
        lVar1 = lVar3;
      }
      lVar3 = lVar1;
      lVar4 = lVar4 + 0x28;
      lVar2 = lVar2 + -0x28;
      fVar7 = fVar5;
    } while (lVar2 != 0);
  }
  return lVar3;
}



// FUNCTION 14022b0b8 FUN_14022b0b8 body=88 status=ok
// SIG undefined FUN_14022b0b8(void)

longlong FUN_14022b0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_140159b42();
  if (-1 < iVar2) {
    do {
      lVar3 = FUN_14022aa2e(param_1,iVar2,param_4);
      if (lVar3 != 0) {
        return lVar3;
      }
      bVar1 = 0 < iVar2;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  }
  return 0;
}



// FUNCTION 14022b110 FUN_14022b110 body=121 status=ok
// SIG undefined FUN_14022b110(void)

undefined8 FUN_14022b110(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140653234(local_38,param_3,0);
  FUN_1404a739e(param_1 + 0x1b8,local_48,local_38);
  FUN_1404a1882(local_48,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022b18a FUN_14022b18a body=236 status=ok
// SIG undefined FUN_14022b18a(void)

void FUN_14022b18a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if ((*(byte *)(param_2 + 0x20) & 0xc) == 4) {
    if ((*(byte *)(param_2 + 0x20) & 0x10) == 0) {
      iVar3 = *(int *)(param_1 + 0x5a0);
      *(uint *)(param_1 + 0x5a0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x5a4) < iVar3 + 1U) {
        FUN_1400f155a((longlong *)(param_1 + 0x598),iVar3);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x598) + (longlong)iVar3 * 8) = param_2;
      bVar2 = *(byte *)(param_2 + 0x20) | 0x10;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x598);
      iVar3 = *(int *)(param_1 + 0x5a0);
      uVar4 = 0xffffffff;
      if ((longlong)iVar3 != 0) {
        lVar8 = (longlong)iVar3 << 3;
        lVar6 = 0;
        do {
          if (*(longlong *)(lVar1 + lVar6 * 8) == param_2) {
            uVar4 = (uint)lVar6;
            break;
          }
          lVar6 = lVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      iVar5 = ~uVar4 + iVar3;
      if (iVar5 != 0) {
        iVar7 = 1;
        if (iVar5 < 1) {
          iVar7 = iVar5;
        }
        memmove((void *)(lVar1 + (longlong)(int)uVar4 * 8),
                (void *)(lVar1 + (longlong)(iVar3 - iVar7) * 8),(longlong)iVar7 << 3);
        iVar3 = *(int *)(param_1 + 0x5a0);
      }
      *(int *)(param_1 + 0x5a0) = iVar3 + -1;
      bVar2 = *(byte *)(param_2 + 0x20) & 0xef;
    }
    *(byte *)(param_2 + 0x20) = bVar2 & 0xfb;
  }
  return;
}



// FUNCTION 14022b276 FUN_14022b276 body=1416 status=ok
// SIG undefined FUN_14022b276(void)

/* WARNING: Removing unreachable block (ram,0x00014022b7d3) */
/* WARNING: Removing unreachable block (ram,0x00014022b7dd) */

undefined8 *
FUN_14022b276(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined4 local_90;
  undefined4 local_88;
  float fStack_84;
  undefined4 local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(float *)(param_3 + 2) <= 1.0 && *(float *)(param_3 + 2) != 1.0) {
    bVar8 = true;
    if (*(int *)(param_1 + 0x1aa0) - 1U < 2) {
      if ((*(int *)(param_1 + 0x1a98) != -1) && (*(int *)(param_1 + 0x1a9c) != -1)) {
LAB_14022b5e1:
        dVar4 = *(double *)(param_1 + 0x1aa8);
        if (((-DAT_14cb1d020 < dVar4) &&
            (((dVar4 < DAT_14cb1d020 && (-DAT_14cb1d028 < *(double *)(param_1 + 0x1ab0))) &&
             (*(double *)(param_1 + 0x1ab0) < DAT_14cb1d028)))) &&
           ((-DAT_14cb1d030 < *(double *)(param_1 + 0x1ab8) &&
            (*(double *)(param_1 + 0x1ab8) < DAT_14cb1d030)))) {
          iVar7 = _finite(dVar4);
          if (iVar7 != 0) {
            iVar7 = _finite(*(double *)(param_1 + 0x1ab0));
            if (iVar7 != 0) {
              iVar7 = _finite(*(double *)(param_1 + 0x1ab8));
              bVar8 = iVar7 == 0;
            }
          }
        }
      }
    }
    else if (*(int *)(param_1 + 0x1aa0) == 3) goto LAB_14022b5e1;
    if (!bVar8) goto LAB_14022b314;
    local_108 = param_3[0x29];
    uStack_100 = param_3[0x2a];
    local_98 = (double)param_3[0x2b];
    fVar9 = *(float *)((longlong)param_3 + 0x194);
  }
  else {
LAB_14022b314:
    local_108 = param_3[0x29];
    uStack_100 = param_3[0x2a];
    fVar9 = *(float *)((longlong)param_3 + 0x194);
    local_98 = (double)param_3[0x2b] - (double)fVar9;
  }
  local_54 = 0xffffffff;
  local_60 = 0xffffffffffffffff;
  local_a8 = (undefined4)local_108;
  uStack_a4 = local_108._4_4_;
  uStack_a0 = (undefined4)uStack_100;
  uStack_9c = uStack_100._4_4_;
  local_90 = 0x44fa0000;
  local_68 = *param_3;
  local_80 = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_3 + 0x32);
  local_78 = param_3[8];
  plStack_70 = (longlong *)param_3[9];
  if (plStack_70 == (longlong *)0x0) {
    plStack_70 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)plStack_70 + 0xc) = *(int *)((longlong)plStack_70 + 0xc) + 1;
    UNLOCK();
  }
  _local_88 = CONCAT44(fVar9,uVar3);
  local_58 = 1;
  if (*(int *)(param_1 + 0x1aa0) - 1U < 2) {
    if ((*(int *)(param_1 + 0x1a98) == -1) || (*(int *)(param_1 + 0x1a9c) == -1))
    goto LAB_14022b4c2;
  }
  else if (*(int *)(param_1 + 0x1aa0) != 3) goto LAB_14022b4c2;
  dVar4 = *(double *)(param_1 + 0x1aa8);
  if ((-DAT_14cb1d020 < dVar4) &&
     ((((dVar4 < DAT_14cb1d020 && (-DAT_14cb1d028 < *(double *)(param_1 + 0x1ab0))) &&
       (*(double *)(param_1 + 0x1ab0) < DAT_14cb1d028)) &&
      ((-DAT_14cb1d030 < *(double *)(param_1 + 0x1ab8) &&
       (*(double *)(param_1 + 0x1ab8) < DAT_14cb1d030)))))) {
    iVar7 = _finite(dVar4);
    if (iVar7 != 0) {
      iVar7 = _finite(*(double *)(param_1 + 0x1ab0));
      if (iVar7 != 0) {
        iVar7 = _finite(*(double *)(param_1 + 0x1ab8));
        if (iVar7 != 0) {
          if (*(int *)(param_1 + 0x1aa0) == 2) {
            local_60 = *(undefined8 *)(param_1 + 0x1a98);
          }
          else {
            local_60 = 0xffffffffffffffff;
          }
        }
      }
    }
  }
LAB_14022b4c2:
  local_108 = 0xffffffffffffffff;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  local_e8 = DAT_14cb1d030;
  dStack_d0 = DAT_14cb1d030;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  local_b8 = 0xffffffff;
  local_f8 = DAT_14cb1d020;
  dStack_f0 = DAT_14cb1d028;
  dStack_e0 = DAT_14cb1d020;
  dStack_d8 = DAT_14cb1d028;
  iVar7 = FUN_14022b7ff(&local_a8);
  plVar6 = plStack_c0;
  if (iVar7 == 0) {
    *param_4 = local_54;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_100;
    *param_2 = local_108;
    param_2[2] = local_f8;
    param_2[3] = dStack_f0;
    param_2[4] = local_e8;
    param_2[5] = dStack_e0;
    param_2[6] = dStack_d8;
    param_2[7] = dStack_d0;
    param_2[8] = local_c8;
    param_2[9] = plStack_c0;
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    *(undefined4 *)(param_2 + 10) = local_b8;
  }
  else {
    *param_4 = 0xffffffff;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0xffffffffffffffff;
    dVar4 = DAT_14cb1d028;
    param_2[2] = DAT_14cb1d020;
    param_2[3] = dVar4;
    param_2[4] = DAT_14cb1d030;
    dVar4 = DAT_14cb1d028;
    param_2[5] = DAT_14cb1d020;
    param_2[6] = dVar4;
    param_2[7] = DAT_14cb1d030;
    param_2[8] = 0;
    param_2[9] = 0;
    *(undefined4 *)(param_2 + 10) = 0xffffffff;
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_c0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_c0)(plStack_c0);
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
  dVar4 = DAT_14cb1d020;
  dVar5 = DAT_14cb1d028;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    dVar4 = DAT_14cb1d020;
    dVar5 = DAT_14cb1d028;
    if (*piVar1 == 0) {
      (**(code **)(*plStack_70 + 0x10))();
      dVar4 = DAT_14cb1d020;
      dVar5 = DAT_14cb1d028;
    }
  }
  DAT_14cb1d028._4_4_ = (undefined4)((ulonglong)dVar5 >> 0x20);
  DAT_14cb1d028._0_4_ = SUB84(dVar5,0);
  DAT_14cb1d020._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
  DAT_14cb1d020._0_4_ = SUB84(dVar4,0);
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
  DAT_14cb1d020 = dVar4;
  DAT_14cb1d028 = dVar5;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022b7ff FUN_14022b7ff body=511 status=ok
// SIG undefined FUN_14022b7ff(void)

undefined4 FUN_14022b7ff(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  LPVOID pvVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  uVar8 = DAT_14cb1c870;
  uVar7 = DAT_14cb1c868;
  uVar6 = DAT_14cb1c860;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((0x1e < *(uint *)(param_1 + 5)) && (*(uint *)(param_1 + 5) == 0x200)) {
    local_68 = param_1[2];
    local_78 = *param_1;
    uStack_70 = param_1[1];
    uStack_a0 = DAT_14cb1c860;
    uStack_98 = DAT_14cb1c868;
    uStack_90 = DAT_14cb1c870;
    local_88 = 0xffffffffffffffff;
    local_80 = 3;
    local_60 = DAT_14cb1c860;
    local_58 = DAT_14cb1c868;
    local_50 = DAT_14cb1c870;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    local_38 = 0xffffffff;
    *param_2 = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 1) = 3;
    local_b8._0_4_ = (undefined4)local_78;
    local_b8._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_b0._0_4_ = (undefined4)uStack_70;
    uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_a8._0_4_ = (undefined4)local_68;
    local_a8._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
    uStack_a0._0_4_ = (undefined4)uVar6;
    uStack_a0._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_98._0_4_ = (undefined4)uVar7;
    uStack_98._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_90._0_4_ = (undefined4)uVar8;
    uStack_90._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
    *(undefined4 *)(param_2 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)param_2 + 0x14) = local_b8._4_4_;
    *(undefined4 *)(param_2 + 3) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_b0._4_4_;
    *(undefined4 *)(param_2 + 4) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_2 + 0x24) = local_a8._4_4_;
    *(undefined4 *)(param_2 + 5) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_a0._4_4_;
    *(undefined4 *)(param_2 + 6) = (undefined4)uStack_98;
    *(undefined4 *)((longlong)param_2 + 0x34) = uStack_98._4_4_;
    *(undefined4 *)(param_2 + 7) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_90._4_4_;
    local_b8 = local_78;
    uStack_b0 = uStack_70;
    local_a8 = local_68;
    uStack_a0 = uVar6;
    uStack_98 = uVar7;
    uStack_90 = uVar8;
    FUN_144a7c4b8(param_2 + 8,&local_48);
    plVar9 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    uVar10 = 0;
    goto LAB_14022b8e2;
  }
  if (param_1[8] == 0) {
    uVar10 = 4;
    goto LAB_14022b8e2;
  }
  lVar3 = *(longlong *)(param_1[8] + 0x598);
  if (DAT_14cb1d000 == 0) {
LAB_14022b90c:
    bVar5 = false;
  }
  else {
    pvVar11 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar11 + 1));
    if ((int)pvVar11 != 0) goto LAB_14022b90c;
    AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x250));
    bVar5 = true;
  }
  uVar10 = 5;
  if ((*(longlong *)(lVar3 + 0x78) != 0) &&
     (lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x78) + 0x140), lVar4 != 0)) {
    uVar10 = FUN_14022b9ff(lVar4,param_1,param_2);
  }
  if (bVar5) {
    ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x250));
  }
  if (DAT_14cb1d000 != 0) {
    pvVar11 = TlsGetValue(DAT_14cb1d000);
    TlsSetValue(DAT_14cb1d000,(LPVOID)(longlong)((int)pvVar11 + -1));
  }
LAB_14022b8e2:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022b9ff FUN_14022b9ff body=1722 status=ok
// SIG undefined FUN_14022b9ff(void)

undefined8 FUN_14022b9ff(longlong param_1,double *param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar23;
  undefined1 auVar22 [16];
  double dVar24;
  double dVar26;
  undefined1 auVar25 [16];
  uint uVar27;
  uint uVar29;
  uint uVar30;
  undefined1 auVar28 [16];
  uint uVar31;
  ulonglong uVar32;
  undefined1 auVar33 [16];
  float unaff_XMM6_Da;
  float unaff_XMM6_Db;
  float unaff_XMM6_Dc;
  float unaff_XMM6_Dd;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float unaff_XMM7_Da;
  float unaff_XMM7_Db;
  float unaff_XMM7_Dc;
  float unaff_XMM7_Dd;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_198 [40];
  double local_170;
  undefined **local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  double local_128;
  double dStack_120;
  undefined **local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined4 local_d8;
  undefined **local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [16];
  ulonglong local_70;
  
  dVar26 = DAT_14cb1c870;
  dVar24 = DAT_14cb1c868;
  dVar23 = DAT_14cb1c860;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar11 = *(uint *)(param_2 + 5);
  if ((uVar11 < 0x1f) || (uVar11 != 0x200)) {
    dStack_b0 = 0.0;
    dStack_a8 = 0.0;
    dStack_a0 = 0.0;
    local_c8 = &PTR_FUN_14ab9efb8;
    local_98 = (float)*param_2 * 0.01;
    fStack_94 = (float)param_2[1] * 0.01;
    fStack_90 = (float)param_2[2] * 0.01;
    fStack_8c = (float)param_2[2] * 0.01;
    auVar21._0_4_ = *(float *)(param_2 + 3) * 0.01;
    auVar21._4_4_ = auVar21._0_4_;
    auVar21._8_4_ = auVar21._0_4_;
    auVar21._12_4_ = auVar21._0_4_;
    iVar10 = -0x80000000;
    if (uVar11 != 0xffffffff) {
      iVar10 = 1 << ((byte)uVar11 & 0x1f);
    }
    local_b8 = (double)CONCAT44(local_b8._4_4_,iVar10);
    local_88 = auVar21;
    cVar7 = FUN_144b3f1f0(&local_c8);
    if (cVar7 == '\0') {
      uVar9 = 9;
      goto LAB_14022bcd8;
    }
    plVar8 = (longlong *)FUN_144b3f1e0(param_1);
    if (plVar8 == (longlong *)0x0) {
      uVar9 = 6;
      goto LAB_14022bcd8;
    }
    uVar11 = *(uint *)(param_2 + 9);
    uVar3 = *(uint *)((longlong)param_2 + 0x4c);
    if ((((int)(uVar11 | uVar3) < 0) ||
        (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (ulonglong)uVar11 * 0x120),
        lVar15 == 0)) ||
       (lVar14 = *(longlong *)(lVar15 + 0x20), *(int *)(lVar14 + 0x20) <= (int)uVar3)) {
      bVar13 = 0;
LAB_14022baea:
      if (*(int *)(param_2 + 5) == -1) {
LAB_14022bd16:
        if (*(char *)(param_2 + 10) == '\x01') {
          uVar9 = FUN_140181538(param_2[8]);
          FUN_14022c11a(&local_128,uVar9);
          lVar15 = (longlong)dStack_120._0_4_;
          if (lVar15 != 0) {
            local_170 = local_128;
            lVar14 = 0;
            do {
              lVar4 = *(longlong *)((longlong)local_170 + lVar14);
              if ((lVar4 != 0) &&
                 (*(float *)(param_2 + 4) < *(float *)(lVar4 + 0x38) ||
                  *(float *)(param_2 + 4) == *(float *)(lVar4 + 0x38))) {
                uVar12 = FUN_14022c0ba(lVar4);
                local_b8 = (double)CONCAT44(local_b8._4_4_,uVar12);
                (**(code **)(*plVar8 + 0x18))(plVar8,&local_168,&local_c8,&local_138);
                uVar11 = (uint)local_168;
                if ((uint)local_168 != 0xffffffff) {
                  uVar12 = FUN_140e14fac(lVar4);
                  *(undefined4 *)((longlong)param_2 + 0x54) = uVar12;
                  goto LAB_14022bde1;
                }
              }
              lVar14 = lVar14 + 8;
            } while (lVar15 * 8 != lVar14);
          }
          uVar11 = 0xffffffff;
LAB_14022bde1:
          if (local_128 != 0.0) {
            FUN_1400020a8();
          }
          if (uVar11 != 0xffffffff) goto LAB_14022bb24;
        }
        dVar6 = param_2[9];
        uVar11 = *(uint *)(param_2 + 9) | *(uint *)((longlong)param_2 + 0x4c);
        if ((bool)(bVar13 & -1 < (int)uVar11)) {
          fVar16 = *(float *)(param_2 + 4) * 0.01;
          auVar18._0_4_ =
               -(uint)(unaff_XMM6_Da - fVar16 <= local_98 && local_98 <= unaff_XMM7_Da + fVar16);
          auVar18._4_4_ =
               -(uint)(unaff_XMM6_Db - fVar16 <= fStack_94 && fStack_94 <= unaff_XMM7_Db + fVar16);
          auVar18._8_4_ =
               -(uint)(unaff_XMM6_Dc - fVar16 <= fStack_90 && fStack_90 <= unaff_XMM7_Dc + fVar16);
          auVar18._12_4_ =
               -(uint)(unaff_XMM6_Dd - fVar16 <= fStack_8c && fStack_8c <= unaff_XMM7_Dd + fVar16);
          uVar12 = movmskps(CONCAT31((int3)(uVar11 >> 8),-1 < (int)uVar11),auVar18);
          if ((~(byte)uVar12 & 7) == 0) {
            *(undefined4 *)((longlong)param_2 + 0x54) = *(undefined4 *)(param_2 + 5);
            dVar26 = DAT_14cb1c870;
            dVar24 = DAT_14cb1c868;
            dVar23 = DAT_14cb1c860;
            local_158 = param_2[2];
            local_168 = (undefined **)*param_2;
            dStack_160 = param_2[1];
            dStack_150 = DAT_14cb1c860;
            dStack_148 = DAT_14cb1c868;
            dStack_140 = DAT_14cb1c870;
            dStack_120 = (double)CONCAT44(dStack_120._4_4_,2);
            *param_3 = dVar6;
            *(uint *)(param_3 + 1) = 2;
            local_128 = dVar6;
            local_118 = local_168;
            dStack_110 = dStack_160;
            local_108 = local_158;
            goto LAB_14022bf8c;
          }
        }
        *(undefined4 *)((longlong)param_2 + 0x54) = 0xffffffff;
        uVar9 = 10;
        goto LAB_14022bcd8;
      }
      *(int *)((longlong)param_2 + 0x54) = *(int *)(param_2 + 5);
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_128,&local_c8,&local_138);
      uVar11 = local_128._0_4_;
      if (local_128._0_4_ == 0xffffffff) goto LAB_14022bd16;
LAB_14022bb24:
      *(uint *)param_3 = uVar11 >> 0x16;
      *(uint *)((longlong)param_3 + 4) = uVar11 & 0x3fffff;
      *(uint *)(param_3 + 1) = 2;
      param_3[2] = (double)local_138 * 100.0;
      param_3[3] = (double)fStack_134 * 100.0;
      param_3[4] = (double)fStack_130 * 100.0;
      dVar23 = DAT_14cb1c868;
      param_3[5] = DAT_14cb1c860;
      param_3[6] = dVar23;
      param_3[7] = DAT_14cb1c870;
    }
    else {
      lVar4 = *(longlong *)(lVar14 + 0x38);
      auVar36 = *(undefined1 (*) [16])(*(longlong *)(lVar14 + 0x18) + (ulonglong)uVar3 * 0x18);
      auVar21 = pmovzxwd(auVar21,auVar36);
      auVar35._0_4_ = (float)auVar21._0_4_ * *(float *)(lVar4 + 0xa0) + *(float *)(lVar4 + 0xb0);
      auVar35._4_4_ = (float)auVar21._4_4_ * *(float *)(lVar4 + 0xa4) + *(float *)(lVar4 + 0xb4);
      auVar35._8_4_ = (float)auVar21._8_4_ * *(float *)(lVar4 + 0xa8) + *(float *)(lVar4 + 0xb8);
      auVar35._12_4_ = (float)auVar21._12_4_ * *(float *)(lVar4 + 0xac) + *(float *)(lVar4 + 0xbc);
      auVar20._0_4_ = (float)auVar36._8_2_ * *(float *)(lVar4 + 0xa0) + *(float *)(lVar4 + 0xb0);
      auVar20._4_4_ = (float)auVar36._10_2_ * *(float *)(lVar4 + 0xa4) + *(float *)(lVar4 + 0xb4);
      auVar20._8_4_ = (float)auVar36._12_2_ * *(float *)(lVar4 + 0xa8) + *(float *)(lVar4 + 0xb8);
      auVar20._12_4_ = (float)auVar36._14_2_ * *(float *)(lVar4 + 0xac) + *(float *)(lVar4 + 0xbc);
      if (*(byte *)(lVar15 + 0x40) != 0) {
        uVar27 = (uint)*(byte *)(lVar15 + 0x40);
        auVar22._0_4_ = 0x16a8300 << uVar27;
        auVar22._4_4_ = 0x502ab000 << uVar27;
        auVar22._8_4_ = 0xa2a8c00 << uVar27;
        auVar22._12_4_ = 0 << uVar27;
        auVar28._4_4_ = auVar35._8_4_;
        auVar28._0_4_ = auVar35._4_4_;
        auVar28._8_4_ = auVar35._0_4_;
        auVar28._12_4_ = auVar35._12_4_;
        auVar25._0_4_ = 0xa154c00 << uVar27;
        auVar25._4_4_ = 0x1554300 << uVar27;
        auVar25._8_4_ = 0x50157000 << uVar27;
        auVar25._12_4_ = 0 << uVar27;
        auVar21 = blendvps(auVar35,auVar28,auVar22);
        auVar36._4_4_ = auVar35._0_4_;
        auVar36._0_4_ = auVar35._8_4_;
        auVar36._8_4_ = auVar35._4_4_;
        auVar36._12_4_ = auVar35._12_4_;
        auVar21 = blendvps(auVar21,auVar36,auVar25);
        uVar32 = (ulonglong)uVar27;
        uVar27 = (0xae71e0U >> uVar32) << 0x1f;
        uVar29 = (0xb9e306U >> uVar32) << 0x1f;
        uVar30 = (0xeb903cU >> uVar32) << 0x1f;
        uVar31 = (0U >> uVar32) << 0x1f;
        auVar33._4_4_ = auVar20._8_4_;
        auVar33._0_4_ = auVar20._4_4_;
        auVar33._8_4_ = auVar20._0_4_;
        auVar33._12_4_ = auVar20._12_4_;
        auVar36 = blendvps(auVar20,auVar33,auVar22);
        auVar5._4_4_ = auVar20._0_4_;
        auVar5._0_4_ = auVar20._8_4_;
        auVar5._8_4_ = auVar20._4_4_;
        auVar5._12_4_ = auVar20._12_4_;
        auVar36 = blendvps(auVar36,auVar5,auVar25);
        auVar34._0_8_ = CONCAT44(auVar21._4_4_ ^ uVar29,auVar21._0_4_ ^ uVar27);
        auVar34._8_4_ = auVar21._8_4_ ^ uVar30;
        auVar34._12_4_ = auVar21._12_4_ ^ uVar31;
        auVar37._0_4_ = auVar36._0_4_ ^ uVar27;
        auVar37._4_4_ = auVar36._4_4_ ^ uVar29;
        auVar37._8_4_ = auVar36._8_4_ ^ uVar30;
        auVar37._12_4_ = auVar36._12_4_ ^ uVar31;
        auVar19._8_4_ = auVar34._8_4_;
        auVar19._0_8_ = auVar34._0_8_;
        auVar19._12_4_ = auVar34._12_4_;
        auVar35 = minps(auVar34,auVar37);
        auVar20 = maxps(auVar19,auVar37);
      }
      unaff_XMM6_Da = auVar35._0_4_ + *(float *)(lVar15 + 0x50);
      unaff_XMM6_Db = auVar35._4_4_ + *(float *)(lVar15 + 0x54);
      unaff_XMM6_Dc = auVar35._8_4_ + *(float *)(lVar15 + 0x58);
      unaff_XMM6_Dd = auVar35._12_4_ + *(float *)(lVar15 + 0x5c);
      unaff_XMM7_Da = auVar20._0_4_ + *(float *)(lVar15 + 0x50);
      unaff_XMM7_Db = auVar20._4_4_ + *(float *)(lVar15 + 0x54);
      unaff_XMM7_Dc = auVar20._8_4_ + *(float *)(lVar15 + 0x58);
      unaff_XMM7_Dd = auVar20._12_4_ + *(float *)(lVar15 + 0x5c);
      auVar17._0_4_ = -(uint)(local_98 <= unaff_XMM7_Da && unaff_XMM6_Da <= local_98);
      auVar17._4_4_ = -(uint)(fStack_94 <= unaff_XMM7_Db && unaff_XMM6_Db <= fStack_94);
      auVar17._8_4_ = -(uint)(fStack_90 <= unaff_XMM7_Dc && unaff_XMM6_Dc <= fStack_90);
      auVar17._12_4_ = -(uint)(fStack_8c <= unaff_XMM7_Dd && unaff_XMM6_Dd <= fStack_8c);
      uVar12 = movmskps((int)lVar15,auVar17);
      if ((~(byte)uVar12 & 7) != 0) {
        bVar13 = 1;
        goto LAB_14022baea;
      }
      *(undefined4 *)((longlong)param_2 + 0x54) = *(undefined4 *)(param_2 + 5);
      dVar26 = DAT_14cb1c870;
      dVar24 = DAT_14cb1c868;
      dVar23 = DAT_14cb1c860;
      local_118 = (undefined **)param_2[2];
      local_128 = *param_2;
      dStack_120 = param_2[1];
      local_100 = DAT_14cb1c870;
      dStack_110 = DAT_14cb1c860;
      local_108 = DAT_14cb1c868;
      *(uint *)param_3 = uVar11;
      *(uint *)((longlong)param_3 + 4) = uVar3;
      *(uint *)(param_3 + 1) = 2;
      param_3[2] = local_128;
      param_3[3] = dStack_120;
      param_3[4] = (double)local_118;
      param_3[5] = dVar23;
      param_3[6] = dVar24;
      param_3[7] = dVar26;
    }
    param_3[8] = 0.0;
    plVar8 = (longlong *)param_3[9];
    if (plVar8 != (longlong *)0x0) {
      param_3[9] = 0.0;
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
    *(uint *)(param_3 + 10) = 0xffffffff;
  }
  else {
    local_108 = param_2[2];
    local_118 = (undefined **)*param_2;
    dStack_110 = param_2[1];
    dStack_b0 = DAT_14cb1c860;
    dStack_a8 = DAT_14cb1c868;
    dStack_a0 = DAT_14cb1c870;
    local_128 = -NAN;
    dStack_120 = (double)CONCAT44(dStack_120._4_4_,3);
    *param_3 = -NAN;
    *(uint *)(param_3 + 1) = 3;
    local_c8 = local_118;
    dStack_c0 = dStack_110;
    local_b8 = local_108;
LAB_14022bf8c:
    local_d8 = 0xffffffff;
    plStack_e0 = (longlong *)0x0;
    local_e8 = 0;
    param_3[2] = (double)local_118;
    param_3[3] = dStack_110;
    param_3[4] = local_108;
    param_3[5] = dVar23;
    param_3[6] = dVar24;
    param_3[7] = dVar26;
    local_100 = dVar23;
    local_f8 = dVar24;
    local_f0 = dVar26;
    FUN_144a7c4b8(param_3 + 8,&local_e8);
    plVar8 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_e0)(plStack_e0);
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
  uVar9 = 0;
LAB_14022bcd8:
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14022c0ba FUN_14022c0ba body=96 status=ok
// SIG undefined FUN_14022c0ba(void)

int FUN_14022c0ba(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar1 = FUN_14477bcf0();
    if ((longlong)*(int *)(lVar1 + 0xc0) != 0) {
      iVar2 = 0x15;
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar1 + 0xb8) + lVar3) == param_1) {
          if (iVar2 == 0x14) {
            return -0x80000000;
          }
          if (iVar2 == -1) {
            return -0x80000000;
          }
          return 1 << ((byte)iVar2 & 0x1f);
        }
        iVar2 = iVar2 + 1;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar1 + 0xc0) * 8 != lVar3);
    }
  }
  return -0x80000000;
}



// FUNCTION 14022c11a FUN_14022c11a body=247 status=ok
// SIG undefined FUN_14022c11a(void)

longlong * FUN_14022c11a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar2 != 0)) {
    lVar4 = FUN_14477bcf0();
    if ((longlong)*(int *)(lVar4 + 0xc0) != 0) {
      plVar8 = *(longlong **)(lVar4 + 0xb8);
      plVar1 = plVar8 + *(int *)(lVar4 + 0xc0);
      do {
        lVar4 = *plVar8;
        if (lVar4 != 0) {
          lVar5 = FUN_14477bcf0();
          if ((longlong)*(int *)(lVar5 + 0xc0) != 0) {
            iVar6 = 0x15;
            lVar7 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar5 + 0xb8) + lVar7) == lVar4) {
                if ((iVar6 != 0x14) && (uVar3 = 1 << ((byte)iVar6 & 0x1f), iVar6 != -1))
                goto LAB_14022c1cb;
                break;
              }
              iVar6 = iVar6 + 1;
              lVar7 = lVar7 + 8;
            } while ((longlong)*(int *)(lVar5 + 0xc0) * 8 != lVar7);
          }
          uVar3 = 0x80000000;
LAB_14022c1cb:
          if ((*(uint *)(lVar2 + 0x648) & uVar3) != 0) {
            iVar6 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar6 + 1U;
            if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
              FUN_141806580(param_1,iVar6);
            }
            *(longlong *)(*param_1 + (longlong)iVar6 * 8) = lVar4;
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
  }
  return param_1;
}



// FUNCTION 14022c211 FUN_14022c211 body=355 status=ok
// SIG undefined FUN_14022c211(void)

longlong * FUN_14022c211(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  void *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_14022c376(param_1);
    lVar4 = param_2[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar2 = *param_2;
      lVar6 = 0;
      do {
        uVar3 = *(undefined8 *)(lVar2 + lVar6);
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_1469b5d0e(param_1,iVar1);
        }
        *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar3;
        lVar6 = lVar6 + 0x10;
      } while ((longlong)(int)lVar4 * 0x10 != lVar6);
      lVar4 = param_2[1];
      if ((longlong)(int)lVar4 != 0) {
        lVar2 = *param_2;
        lVar6 = 0;
        do {
          FUN_14022c211(&local_58,*(longlong *)(lVar2 + lVar6) + 0x600);
          lVar5 = (longlong)(int)local_50;
          if (lVar5 != 0) {
            iVar1 = (int)param_1[1];
            *(uint *)(param_1 + 1) = iVar1 + local_50;
            if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < local_50) {
              FUN_1469b5d0e(param_1,iVar1);
            }
            memmove((void *)((longlong)iVar1 * 8 + *param_1),local_58,lVar5 << 3);
            local_50 = 0;
          }
          if (local_58 != (void *)0x0) {
            FUN_1400020a8();
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)(int)lVar4 * 0x10 != lVar6);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022c376 FUN_14022c376 body=304 status=ok
// SIG undefined FUN_14022c376(void)

void FUN_14022c376(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
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
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14022c3d7;
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
LAB_14022c3d7:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14022c4a6 FUN_14022c4a6 body=84 status=ok
// SIG undefined FUN_14022c4a6(void)

void FUN_14022c4a6(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = *param_1;
  if ((ulonglong)(longlong)(int)param_1[0x86] <= (ulonglong)(uVar1 - param_1[1])) {
    FUN_14594733c(param_1,(ulonglong)(uVar1 - param_1[1]) + 1);
    uVar1 = *param_1;
  }
  *param_1 = uVar1 + 1;
  puVar2 = param_1 + 4;
  if (*(uint **)(param_1 + 0x84) != (uint *)0x0) {
    puVar2 = *(uint **)(param_1 + 0x84);
  }
  puVar2[uVar1 & param_1[2]] = *param_2;
  return;
}



// FUNCTION 14022c4fa FUN_14022c4fa body=318 status=ok
// SIG undefined FUN_14022c4fa(void)

void FUN_14022c4fa(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  byte local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = FUN_14022c706();
  if (cVar3 == '\0') {
    puVar4 = (undefined8 *)FUN_14022c656(param_1);
    puVar4[10] = *param_3;
    plVar2 = (longlong *)param_3[1];
    plVar5 = (longlong *)puVar4[0xb];
    if (plVar5 == plVar2) {
      local_44 = 1;
    }
    else {
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)puVar4[0xb];
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      puVar4[0xb] = plVar2;
      local_44 = (local_44 & 0xfc) + 1;
    }
    local_88 = &local_78;
    local_78 = 0;
    local_70 = 0x3f800000;
    local_6c = 0;
    uStack_64 = 0;
    local_5c = 0x3f800000;
    uStack_54 = 0x3f80000000000000;
    local_4c = 0;
    local_80 = 0;
    FUN_14023a0a8(puVar4,param_1,9,param_2);
    *puVar4 = 0x3f800000;
    puVar4[1] = 0x3f80000000000000;
    puVar4[2] = 0;
  }
  puVar4 = (undefined8 *)param_3[1];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022c656 FUN_14022c656 body=111 status=ok
// SIG undefined FUN_14022c656(void)

longlong FUN_14022c656(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((0 < *(int *)(param_1 + 0x8f8)) && (*(int *)(param_1 + 0x8a8) != 0)) {
    lVar2 = param_1 + 0x260;
    if (*(longlong *)(param_1 + 0x8a0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x8a0);
    }
    if (*(char *)(lVar2 + 0x18 + (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20) == '\0') {
      lVar2 = FUN_14696a5ca(param_1);
      return lVar2;
    }
  }
  iVar1 = FUN_14022c6c6(param_1 + 0x210);
  return (longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x210);
}



// FUNCTION 14022c6c6 FUN_14022c6c6 body=64 status=ok
// SIG undefined FUN_14022c6c6(void)

int FUN_14022c6c6(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14287666a(param_1,iVar1);
  }
  FUN_142876636((longlong)iVar1 * 0x60 + *param_1,1);
  return iVar1;
}



// FUNCTION 14022c706 FUN_14022c706 body=456 status=ok
// SIG undefined FUN_14022c706(void)

ulonglong FUN_14022c706(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_88 [40];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((0 < (longlong)(int)param_1[0x25]) &&
     (lVar6 = (longlong)*(int *)(param_1[0x24] + -4 + (longlong)(int)param_1[0x25] * 4), lVar6 != -1
     )) {
    lVar6 = lVar6 * 0x40;
    plVar1 = (longlong *)(param_1[0x26] + lVar6);
    if (*(char *)(param_1[0x26] + 0x34 + lVar6) == '\0') {
      if (((*param_1 == 0) || (param_1[1] == 0)) || (*(int *)(param_1[1] + 8) < 1)) {
        lVar6 = 0;
      }
      else {
        lVar6 = param_1[2];
      }
      fVar2 = *(float *)(lVar6 + 0x398);
      lVar7 = lVar6 + 0x390;
      if (fVar2 != 0.0) {
        lVar7 = lVar6 + 0x398;
      }
      if (NAN(fVar2)) {
        lVar7 = lVar6 + 0x398;
      }
      fVar2 = *(float *)(lVar6 + 0x390 + (ulonglong)(-(uint)(fVar2 != 0.0) & 1) * 8);
      fVar3 = *(float *)(lVar7 + 4);
      if ((0.0 < fVar2 * fVar3) && ((longlong)(int)plVar1[1] != 0)) {
        lVar6 = *plVar1;
        lVar7 = (longlong)(int)plVar1[1] * 0x24;
        while( true ) {
          uVar4 = FUN_146948f3a(lVar6,&local_60);
          fVar8 = local_54;
          if (fVar3 <= local_54) {
            fVar8 = fVar3;
          }
          fVar9 = local_5c;
          if (local_5c <= 0.0) {
            fVar9 = 0.0;
          }
          uVar5 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          if (fVar8 < fVar9) break;
          fVar10 = local_58;
          if (fVar2 <= local_58) {
            fVar10 = fVar2;
          }
          fVar11 = local_60;
          if (local_60 <= 0.0) {
            fVar11 = 0.0;
          }
          if ((fVar10 < fVar11) || ((fVar8 - fVar9) * (fVar10 - fVar11) <= 0.0)) break;
          lVar6 = lVar6 + 0x24;
          uVar5 = 0;
          lVar7 = lVar7 + -0x24;
          if (lVar7 == 0) break;
        }
        goto LAB_14022c89e;
      }
    }
    else if ((*(byte *)(plVar1 + 6) & 1) != 0) {
      uVar5 = (ulonglong)
              -(uint)(ABS(*(float *)((longlong)plVar1 + 0x14) - *(float *)((longlong)plVar1 + 0x2c))
                      <= 1e-08 || ABS(*(float *)(plVar1 + 2) - *(float *)(plVar1 + 5)) <= 1e-08);
      goto LAB_14022c89e;
    }
  }
  uVar5 = 0;
LAB_14022c89e:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffffffffff01;
}



// FUNCTION 14022c8da FUN_14022c8da body=583 status=ok
// SIG undefined FUN_14022c8da(void)

void FUN_14022c8da(longlong param_1,uint param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  char local_70;
  longlong *local_68;
  longlong *plStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0xffffffff) {
    if ((longlong)*(int *)(param_1 + 0x68) != 0) {
      lVar6 = 0;
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0x60) + lVar6) == param_2) goto LAB_14022ca85;
        lVar6 = lVar6 + 4;
      } while ((longlong)*(int *)(param_1 + 0x68) * 4 != lVar6);
    }
    if (((((int)param_2 < 0) || (lVar6 = *(longlong *)(param_1 + 0x38), lVar6 == 0)) ||
        (*(int *)(lVar6 + 0x18) <= (int)param_2)) ||
       (*(char *)(*(longlong *)(lVar6 + 0x10) + 0x28 + (ulonglong)param_2 * 0x78) == '\0')) {
      local_70 = *(char *)(param_1 + 0x26);
      local_80 = param_3[1];
      local_78 = 0;
      if (local_70 == '\x01') {
        plVar4 = (longlong *)FUN_14001cc68(0x48,0x10);
        plVar4[1] = (longlong)&DAT_100000001;
        *plVar4 = (longlong)&PTR_FUN_14a7be1f0;
        plVar5 = plVar4 + 2;
        FUN_144905dee(plVar5,param_3,param_1,param_2);
        uVar3 = DAT_14cacb0b8;
        local_68 = plVar5;
        plStack_60 = plVar4;
        if (plVar4 == (longlong *)0x0) {
          FUN_1447d2a40(&local_80,param_3,&local_68,DAT_14cacb0b8);
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          FUN_1447d2a40(&local_80,param_3,&local_68,uVar3);
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
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
      iVar2 = *(int *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x68) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x6c) < iVar2 + 1U) {
        FUN_1446f48e2(param_1 + 0x60,iVar2);
      }
      *(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar2 * 4) = param_2;
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x50) + (longlong)(int)param_2 * 0x10);
      if (plVar5 != (longlong *)0x0) {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)(int)param_2 * 0x10);
        uStack_54 = (undefined4)plVar4[1];
        local_68 = (longlong *)*param_3;
        plStack_60 = (longlong *)param_3[1];
        local_58 = (undefined4)param_3[2];
        uStack_50 = *(undefined4 *)((longlong)param_3 + 0x14);
        uStack_4c = *(undefined4 *)((longlong)param_3 + 0x1c);
        local_48 = (undefined4)param_3[4];
        uStack_44 = *(undefined4 *)((longlong)param_3 + 0x24);
        uStack_40 = (undefined4)param_3[5];
        uStack_3c = *(undefined4 *)((longlong)param_3 + 0x2c);
        if ((plVar5[1] != 0) && ((*(byte *)(plVar5[1] + 0x24) & 7) != 0)) {
          FUN_144b1fcbe(&local_68,plVar5);
          FUN_144b1fd46(&local_68,*plVar4);
          FUN_144b1fe18(&local_68,*plVar4);
          plVar5 = (longlong *)*plVar4;
        }
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_68);
      }
      if (local_70 == '\x01') {
        FUN_1447d2706(local_80 + 0x148,local_78);
      }
    }
  }
LAB_14022ca85:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022cb22 FUN_14022cb22 body=179 status=ok
// SIG undefined FUN_14022cb22(void)

void * FUN_14022cb22(void *param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  iVar3 = *(int *)((longlong)param_2 + 0x28);
  pvVar2 = *(void **)((longlong)param_2 + 0x20);
  *(int *)((longlong)param_1 + 0x28) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
    iVar3 = 0;
    uVar1 = 4;
  }
  else {
    if (pvVar2 != (void *)0x0) {
      param_2 = pvVar2;
    }
    FUN_1447ab012(param_1,iVar3,0);
    pvVar2 = *(void **)((longlong)param_1 + 0x20);
    if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memcpy(pvVar2,param_2,(longlong)iVar3 << 3);
    iVar3 = *(int *)((longlong)param_1 + 0x28);
    uVar1 = *(uint *)((longlong)param_1 + 0x2c);
  }
  *(uint *)((longlong)param_1 + 0x28) = iVar3 + 1U;
  if (uVar1 < iVar3 + 1U) {
    FUN_14022cbd6(param_1,iVar3);
  }
  pvVar2 = *(void **)((longlong)param_1 + 0x20);
  if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
    pvVar2 = param_1;
  }
  *(undefined4 *)((longlong)pvVar2 + (longlong)iVar3 * 8) = param_3;
  *(undefined4 *)((longlong)pvVar2 + (longlong)iVar3 * 8 + 4) = param_4;
  return param_1;
}



// FUNCTION 14022cbd6 FUN_14022cbd6 body=518 status=ok
// SIG undefined FUN_14022cbd6(void)

void FUN_14022cbd6(void *param_1,int param_2)

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
  
  uVar3 = *(uint *)((longlong)param_1 + 0x28);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 5) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
    _Src = *(void **)((longlong)param_1 + 0x20);
joined_r0x00014022cd6c:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (4 < *(uint *)((longlong)param_1 + 0x2c)) {
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
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_14022cc5d;
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
LAB_14022cc5d:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x20);
    }
    else {
      *(uint *)((longlong)param_1 + 0x2c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x20);
      if (uVar6 < 5) goto joined_r0x00014022cd6c;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x20,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,uVar8,8);
  return;
}



// FUNCTION 14022cddc FUN_14022cddc body=665 status=ok
// SIG undefined FUN_14022cddc(void)

void FUN_14022cddc(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_4d8 [32];
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 uStack_460;
  char local_368;
  undefined1 local_358 [768];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x2000000000;
  FUN_14022d076(param_3,local_358,param_2);
  uVar5 = (int)local_50 - 1;
  if (1 < (int)local_50) {
    lVar8 = 0;
    do {
      puVar6 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar6 = local_358;
      }
      local_4a8 = *(undefined8 *)(puVar6 + lVar8 + 0x10);
      uVar3 = *(undefined8 *)(puVar6 + lVar8);
      uVar4 = *(undefined8 *)((longlong)(puVar6 + lVar8) + 8);
      local_490 = *(undefined8 *)(puVar6 + lVar8 + 0x28);
      local_4a0 = *(undefined8 *)(puVar6 + lVar8 + 0x18);
      uStack_498 = *(undefined8 *)((longlong)(puVar6 + lVar8 + 0x18) + 8);
      local_4b8._0_4_ = (undefined4)uVar3;
      local_4b8._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_4b0._0_4_ = (undefined4)uVar4;
      uStack_4b0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_488 = (undefined4)local_4b8;
      uStack_484 = local_4b8._4_4_;
      uStack_480 = (undefined4)uStack_4b0;
      uStack_47c = uStack_4b0._4_4_;
      local_368 = '\x01';
      iVar2 = *(int *)(param_1 + 0x948);
      *(uint *)(param_1 + 0x948) = iVar2 + 1U;
      local_4b8 = uVar3;
      uStack_4b0 = uVar4;
      local_478 = local_4a8;
      local_470 = local_4a0;
      local_468 = uStack_498;
      uStack_460 = local_490;
      if (*(uint *)(param_1 + 0x94c) < iVar2 + 1U) {
        FUN_14022ddbe(param_1,iVar2);
      }
      lVar7 = *(longlong *)(param_1 + 0x940);
      if (*(longlong *)(param_1 + 0x940) == 0) {
        lVar7 = param_1;
      }
      *(undefined1 *)(lVar7 + 0x120 + (longlong)iVar2 * 0x128) = 0xff;
      FUN_144906012(lVar7 + (longlong)iVar2 * 0x128,&local_488);
      if (local_368 == '\x02') {
        local_368 = 0xff;
        FUN_140302978();
      }
      lVar8 = lVar8 + 0x18;
    } while ((ulonglong)uVar5 * 0x18 != lVar8);
    uVar5 = (int)local_50 - 1;
  }
  puVar6 = local_358;
  if (local_58 != (undefined1 *)0x0) {
    puVar6 = local_58;
  }
  puVar1 = (undefined8 *)(puVar6 + (longlong)(int)uVar5 * 0x18);
  local_488 = *(undefined4 *)puVar1;
  uStack_484 = *(undefined4 *)((longlong)puVar1 + 4);
  local_4b8 = *puVar1;
  uStack_480 = *(undefined4 *)(puVar1 + 1);
  uStack_47c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_4b0 = puVar1[1];
  local_4a8 = *(undefined8 *)(puVar6 + (longlong)(int)uVar5 * 0x18 + 0x10);
  local_4a0 = *(undefined8 *)(param_3 + 0x48);
  uStack_498 = *(undefined8 *)(param_3 + 0x50);
  local_490 = *(undefined8 *)(param_3 + 0x58);
  local_368 = '\x01';
  iVar2 = *(int *)(param_1 + 0x948);
  *(uint *)(param_1 + 0x948) = iVar2 + 1U;
  local_478 = local_4a8;
  local_470 = local_4a0;
  local_468 = uStack_498;
  uStack_460 = local_490;
  if (*(uint *)(param_1 + 0x94c) < iVar2 + 1U) {
    FUN_14022ddbe(param_1,iVar2);
  }
  lVar8 = *(longlong *)(param_1 + 0x940);
  if (*(longlong *)(param_1 + 0x940) == 0) {
    lVar8 = param_1;
  }
  *(undefined1 *)(lVar8 + 0x120 + (longlong)iVar2 * 0x128) = 0xff;
  FUN_144906012(lVar8 + (longlong)iVar2 * 0x128,&local_488);
  if (local_368 == '\x02') {
    local_368 = -1;
    FUN_140302978();
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_4d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022d076 FUN_14022d076 body=1670 status=ok
// SIG undefined FUN_14022d076(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14022d076(longlong param_1,longlong param_2,double *param_3,float param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  double dVar11;
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_148 [40];
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar9 = *(int *)(param_2 + 0x308);
  *(uint *)(param_2 + 0x308) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x30c) < iVar9 + 1U) {
    FUN_147e43da8(param_2,iVar9);
  }
  lVar8 = *(longlong *)(param_2 + 0x300);
  if (*(longlong *)(param_2 + 0x300) == 0) {
    lVar8 = param_2;
  }
  *(double *)(lVar8 + 0x10 + (longlong)iVar9 * 0x18) = param_3[2];
  dVar15 = param_3[1];
  pdVar1 = (double *)(lVar8 + (longlong)iVar9 * 0x18);
  *pdVar1 = *param_3;
  pdVar1[1] = dVar15;
  if (*(float *)(param_1 + 0xcc) <= 1.0 && *(float *)(param_1 + 0xcc) != 1.0) {
    iVar9 = *(int *)(param_2 + 0x308);
    *(uint *)(param_2 + 0x308) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x30c) < iVar9 + 1U) {
      FUN_147e43da8(param_2,iVar9);
    }
    lVar8 = *(longlong *)(param_2 + 0x300);
    if (*(longlong *)(param_2 + 0x300) == 0) {
      lVar8 = param_2;
    }
    *(undefined8 *)(lVar8 + 0x10 + (longlong)iVar9 * 0x18) = *(undefined8 *)(param_1 + 0x40);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    puVar2 = (undefined8 *)(lVar8 + (longlong)iVar9 * 0x18);
    *puVar2 = *(undefined8 *)(param_1 + 0x30);
    puVar2[1] = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_148);
  }
  dVar15 = *(double *)(param_1 + 0x78);
  dVar18 = *(double *)(param_1 + 0x80);
  local_110 = *(double *)(param_1 + 0x88);
  local_b8 = param_3[2] - local_110;
  local_c0 = param_3[1] - dVar18;
  local_c8 = *param_3 - dVar15;
  if (*(char *)(param_1 + 0xfa) == '\x01') {
    local_d0 = *(double *)(param_1 + 0x40) - local_110;
    dVar11 = *(double *)(param_1 + 0x30);
    local_d8 = *(double *)(param_1 + 0x38);
    local_110 = *(double *)(param_1 + 0x28) - local_110;
  }
  else {
    dVar11 = *(double *)(param_1 + 0x30);
    local_d8 = *(double *)(param_1 + 0x38);
    local_110 = local_b8;
    local_d0 = local_b8;
  }
  local_118 = *(double *)(param_1 + 0x20) - dVar18;
  local_120 = *(double *)(param_1 + 0x18) - dVar15;
  local_d8 = local_d8 - dVar18;
  auVar17._0_8_ = dVar11 - dVar15;
  auVar17._8_8_ = 0;
  local_e0 = auVar17._0_8_;
  FUN_14022d702(&local_108,&local_120,&local_e0);
  auVar3 = _DAT_149934d80;
  dVar15 = local_f8 * local_f8 + local_108 * local_108;
  dVar18 = dStack_100 * dStack_100 + 0.0;
  auVar16._0_8_ = dVar15 + dVar18;
  auVar16._8_8_ = dVar15 + dVar18;
  auVar24._8_8_ = -(ulonglong)(1e-08 <= auVar16._8_8_);
  auVar24._0_8_ = -(ulonglong)(1e-08 <= auVar16._0_8_);
  auVar19 = sqrtpd(auVar17,auVar16);
  auVar17 = divpd(_DAT_149934d80,auVar19);
  dVar15 = dStack_100 * auVar17._8_8_;
  auVar19._8_4_ = SUB84(dVar15,0);
  auVar19._0_8_ = local_108 * auVar17._0_8_;
  auVar19._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar22 = blendvpd(ZEXT816(0x3ff0000000000000),auVar19,auVar24);
  if ((-(ulonglong)(1e-08 <= auVar16._0_8_) & 1) == 0) {
    dVar15 = 0.0;
  }
  else {
    dVar15 = local_f8 * auVar17._0_8_;
  }
  fVar10 = (float)FUN_14022d910(param_1);
  if (3.1415927 < fVar10) {
    dVar15 = -dVar15;
    uVar23 = auVar22._8_8_;
    auVar22._0_8_ = auVar22._0_8_ ^ 0x8000000000000000;
    auVar22._8_8_ = uVar23 ^ 0x8000000000000000;
  }
  FUN_14022d702(&local_108,&local_c8,&local_e0);
  dVar18 = dStack_f0;
  if (1.0 <= dStack_f0) {
    dVar18 = 1.0;
  }
  dVar18 = acos((double)(~-(ulonglong)(dStack_f0 < -1.0) & (ulonglong)dVar18 |
                        (ulonglong)((uint)(-(ulonglong)(dStack_f0 < -1.0) >> 0x20) & 0xbff00000) <<
                        0x20));
  dVar11 = local_f8 * local_f8 + local_108 * local_108;
  dVar14 = dStack_100 * dStack_100 + 0.0;
  auVar12._0_8_ = dVar11 + dVar14;
  auVar12._8_8_ = dVar11 + dVar14;
  auVar19 = sqrtpd(auVar12,auVar12);
  auVar24 = divpd(auVar3,auVar19);
  dStack_100 = dStack_100 * auVar24._8_8_;
  auVar13._8_8_ = -(ulonglong)(1e-08 <= auVar12._8_8_);
  auVar13._0_8_ = -(ulonglong)(1e-08 <= auVar12._0_8_);
  auVar3._8_4_ = SUB84(dStack_100,0);
  auVar3._0_8_ = local_108 * auVar24._0_8_;
  auVar3._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
  auVar19 = blendvpd(ZEXT816(0x3ff0000000000000),auVar3,auVar13);
  local_108 = auVar19._0_8_;
  if ((-(ulonglong)(1e-08 <= auVar12._0_8_) & 1) == 0) {
    dVar11 = 0.0;
  }
  else {
    dVar11 = local_f8 * auVar24._0_8_;
  }
  fVar10 = (float)(dVar18 + dVar18);
  dVar18 = auVar19._8_8_;
  if (dVar15 * dVar11 + local_108 * auVar22._0_8_ + auVar22._8_8_ * dVar18 < 0.0) {
    fVar10 = 6.2831855 - fVar10;
    dVar11 = -dVar11;
    dVar18 = -dVar18;
    local_108 = -local_108;
  }
  param_4 = ABS(*(float *)(param_1 + 0xcc) * fVar10) / param_4;
  iVar7 = (int)ROUND(-0.5 - (param_4 + param_4)) >> 1;
  iVar5 = -iVar7;
  iVar9 = 4;
  if (iVar5 < 4) {
    iVar9 = iVar5;
  }
  dVar15 = (double)(fVar10 / (float)iVar9) * 0.5;
  dVar14 = sin(dVar15);
  dStack_f0 = cos(dVar15);
  local_108 = local_108 * dVar14;
  dStack_100 = dVar18 * dVar14;
  local_f8 = dVar11 * dVar14;
  if (iVar7 < -1) {
    iVar9 = iVar9 + -1;
    dVar11 = local_c8;
    dVar18 = local_b8;
    dVar15 = local_c0;
    do {
      dVar20 = dStack_100 * dVar18 - dVar15 * local_f8;
      dVar20 = dVar20 + dVar20;
      dVar21 = local_108 * dVar15 - dVar11 * dStack_100;
      dVar21 = dVar21 + dVar21;
      dVar14 = local_f8 * dVar11 - dVar18 * local_108;
      dVar14 = dVar14 + dVar14;
      dVar18 = (local_108 * dVar14 - dVar20 * dStack_100) + dStack_f0 * dVar21 + dVar18;
      dVar15 = (local_f8 * dVar20 - dVar21 * local_108) + dStack_f0 * dVar14 + dVar15;
      dVar11 = (dStack_100 * dVar21 - dVar14 * local_f8) + dVar20 * dStack_f0 + dVar11;
      dVar14 = *(double *)(param_1 + 0x88);
      dVar20 = *(double *)(param_1 + 0x80);
      dVar21 = *(double *)(param_1 + 0x78);
      iVar5 = *(int *)(param_2 + 0x308);
      lVar8 = (longlong)iVar5;
      *(uint *)(param_2 + 0x308) = iVar5 + 1U;
      if (*(uint *)(param_2 + 0x30c) < iVar5 + 1U) {
        FUN_147e43da8(param_2,iVar5);
      }
      lVar6 = *(longlong *)(param_2 + 0x300);
      if (*(longlong *)(param_2 + 0x300) == 0) {
        lVar6 = param_2;
      }
      *(double *)(lVar6 + lVar8 * 0x18) = dVar21 + dVar11;
      *(double *)(lVar6 + 8 + lVar8 * 0x18) = dVar20 + dVar15;
      *(double *)(lVar6 + 0x10 + lVar8 * 0x18) = dVar14 + dVar18;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = *(int *)(param_2 + 0x308);
  *(uint *)(param_2 + 0x308) = iVar9 + 1U;
  if (*(uint *)(param_2 + 0x30c) < iVar9 + 1U) {
    FUN_147e43da8(param_2,iVar9);
  }
  lVar8 = *(longlong *)(param_2 + 0x300);
  if (*(longlong *)(param_2 + 0x300) == 0) {
    lVar8 = param_2;
  }
  *(undefined8 *)(lVar8 + 0x10 + (longlong)iVar9 * 0x18) = *(undefined8 *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  puVar2 = (undefined8 *)(lVar8 + (longlong)iVar9 * 0x18);
  *puVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar2[1] = uVar4;
  if ((local_b0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14022d702 FUN_14022d702 body=526 status=ok
// SIG undefined FUN_14022d702(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14022d702(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined4 uVar11;
  uint uVar12;
  
  dVar4 = (param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]) *
          (param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
  if (dVar4 < 0.0) {
    dVar4 = sqrt(dVar4);
  }
  else {
    dVar4 = SQRT(dVar4);
  }
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = *param_3;
  uVar11 = SUB84(dVar3,0);
  uVar12 = (uint)((ulonglong)dVar3 >> 0x20);
  dVar5 = param_2[2];
  dVar3 = dVar5 * param_3[2] + dVar1 * dVar3 + dVar2 * param_3[1] + dVar4;
  dVar8 = param_3[2];
  dVar9 = param_3[1];
  if (dVar3 < dVar4 * 9.999999974752427e-07) {
    if ((ABS(dVar1) <= ABS(dVar2)) || (ABS(dVar1) <= ABS(dVar5))) {
      dVar8 = -DAT_14c8463b0;
      dVar9 = -DAT_14c8463a8;
      uVar12 = (uint)((ulonglong)DAT_14c8463a0 >> 0x20) ^ 0x80000000;
      uVar11 = (undefined4)DAT_14c8463a0;
      dVar3 = 0.0;
    }
    else {
      uVar11 = (undefined4)DAT_14c846388;
      uVar12 = (uint)((ulonglong)DAT_14c846388 >> 0x20);
      dVar3 = 0.0;
      dVar8 = DAT_14c846398;
      dVar9 = DAT_14c846390;
    }
  }
  *param_1 = dVar2 * dVar8 - dVar9 * dVar5;
  param_1[1] = dVar5 * (double)CONCAT44(uVar12,uVar11) - dVar8 * dVar1;
  param_1[2] = dVar1 * dVar9 - (double)CONCAT44(uVar12,uVar11) * dVar2;
  param_1[3] = dVar3;
  dVar4 = *param_1;
  dVar1 = param_1[1];
  dVar2 = param_1[2];
  dVar3 = param_1[3];
  dVar5 = dVar2 * dVar2 + dVar4 * dVar4;
  dVar8 = dVar3 * dVar3 + dVar1 * dVar1;
  auVar6._0_8_ = dVar5 + dVar8;
  auVar6._8_8_ = dVar5 + dVar8;
  auVar7 = sqrtpd(auVar6,auVar6);
  auVar7 = divpd(_DAT_149934d80,auVar7);
  auVar10._0_8_ = auVar7._0_8_ * dVar2;
  auVar10._8_8_ = auVar7._8_8_ * dVar3;
  *param_1 = (double)((ulonglong)(dVar4 * auVar7._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar6._0_8_));
  param_1[1] = (double)((ulonglong)(dVar1 * auVar7._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar6._8_8_));
  auVar7._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar6._8_8_);
  auVar7._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar6._0_8_);
  auVar7 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar10,auVar7);
  *(undefined1 (*) [16])(param_1 + 2) = auVar7;
  return param_1;
}



// FUNCTION 14022d910 FUN_14022d910 body=1198 status=ok
// SIG undefined FUN_14022d910(void)

void FUN_14022d910(longlong param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  fVar1 = *(float *)(param_1 + 0xcc);
  if (1.0 <= fVar1) {
    dVar2 = ((*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x88)) *
             (*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x88)) +
            (*(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x78)) *
            (*(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x78)) +
            (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x80)) *
            (*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x80))) / (double)(fVar1 * fVar1);
    dVar3 = dVar2;
    if (1.0 <= dVar2) {
      dVar3 = 1.0;
    }
    acos((double)(-(ulonglong)(dVar2 < -1.0) & 0xbff0000000000000 |
                 ~-(ulonglong)(dVar2 < -1.0) & (ulonglong)dVar3));
  }
  return;
}



// FUNCTION 14022ddbe FUN_14022ddbe body=567 status=ok
// SIG undefined FUN_14022ddbe(void)

void FUN_14022ddbe(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x948);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 9) {
    *(undefined4 *)((longlong)param_1 + 0x94c) = 8;
    _Src = *(void **)((longlong)param_1 + 0x940);
joined_r0x00014022df7f:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x128);
    param_2 = 0;
    uVar5 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (8 < *(uint *)((longlong)param_1 + 0x94c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar5 = lVar4 * 0x128;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar2) {
              uVar6 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14022de4c;
              lVar4 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_14022de4c:
    uVar5 = uVar5 / 0x128;
    uVar7 = (uint)uVar5;
    if ((int)uVar7 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x94c) = 0x7fffffff;
      uVar5 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x940);
    }
    else {
      *(uint *)((longlong)param_1 + 0x94c) = uVar7;
      _Src = *(void **)((longlong)param_1 + 0x940);
      if (uVar7 < 9) goto joined_r0x00014022df7f;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x940,0,uVar5,0x128);
      memmove(*(void **)((longlong)param_1 + 0x940),param_1,(longlong)param_2 * 0x128);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x940,param_2,uVar5,0x128);
  return;
}



// FUNCTION 14022dff6 FUN_14022dff6 body=1151 status=ok
// SIG undefined FUN_14022dff6(void)

void FUN_14022dff6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_14022e0e1;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_14022e0e1:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_38);
            goto LAB_14022e1ae;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_38,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_38,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
LAB_14022e1ae:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(byte *)(param_1 + 0x968) = *(byte *)(param_1 + 0x968) & 0xf7;
  FUN_14022e476(param_1);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022e476 FUN_14022e476 body=197 status=ok
// SIG undefined FUN_14022e476(void)

void FUN_14022e476(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = FUN_1447210f0();
  FUN_14022e5c4(&local_30,uVar6);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_28;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_30 != 0) {
        uVar5 = (**(code **)(*param_1 + 0x6a0))(param_1);
        FUN_14022e6fc(local_30,param_1,uVar5);
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14022e5c4 FUN_14022e5c4 body=310 status=ok
// SIG undefined FUN_14022e5c4(void)

longlong * FUN_14022e5c4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb83a48;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022e6fc FUN_14022e6fc body=536 status=ok
// SIG undefined FUN_14022e6fc(void)

void FUN_14022e6fc(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  uint local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1 + 0x28;
  if (param_3 == '\0') {
    local_3c = 0;
    if (param_2 == 0) {
      local_40 = 0;
      iVar2 = 0;
    }
    else {
      local_40 = *(uint *)(param_2 + 0xc);
      if ((int)local_40 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar2 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar2 = *(int *)(lVar3 + 0x10);
        bVar8 = iVar2 == 0;
        if (bVar8) {
          *(int *)(lVar3 + 0x10) = iVar5;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar2 = iVar5;
        }
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x228);
    if (*(longlong *)(param_1 + 0x228) == 0) {
      lVar3 = lVar4;
    }
    local_3c = iVar2;
    if ((longlong)*(int *)(param_1 + 0x230) != 0) {
      lVar6 = (longlong)*(int *)(param_1 + 0x230) << 3;
      uVar7 = 0;
      do {
        cVar1 = FUN_14022e9b6(lVar3,&local_40);
        if (cVar1 != '\0') {
          if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x230))) {
            if (*(longlong *)(param_1 + 0x228) != 0) {
              lVar4 = *(longlong *)(param_1 + 0x228);
            }
            *(undefined8 *)(lVar4 + (ulonglong)(uVar7 & 0x7fffffff) * 8) = 0;
          }
          break;
        }
        lVar3 = lVar3 + 8;
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
  }
  else {
    local_3c = 0;
    if (param_2 == 0) {
      local_40 = 0;
      iVar2 = 0;
    }
    else {
      local_40 = *(uint *)(param_2 + 0xc);
      if ((int)local_40 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar2 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar2 = *(int *)(lVar3 + 0x10);
        bVar8 = iVar2 == 0;
        if (bVar8) {
          *(int *)(lVar3 + 0x10) = iVar5;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar2 = iVar5;
        }
      }
    }
    local_3c = iVar2;
    FUN_14022e916(lVar4);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14022e916 FUN_14022e916 body=159 status=ok
// SIG undefined FUN_14022e916(void)

int FUN_14022e916(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar3 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x208) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x208) << 3;
    iVar2 = 0;
    do {
      cVar1 = FUN_14022e9b6(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar2 != 1) {
          return -iVar2;
        }
        break;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x208);
  *(uint *)(param_1 + 0x208) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x20c) < iVar2 + 1U) {
    FUN_1488dc5aa(param_1,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x200);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar3 = param_1;
  }
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 8) = *param_2;
  return iVar2;
}



// FUNCTION 14022e9b6 FUN_14022e9b6 body=159 status=ok
// SIG undefined FUN_14022e9b6(void)

bool FUN_14022e9b6(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  bVar5 = true;
  if ((uVar1 != uVar3) || (uVar2 != param_2[1])) {
    if ((uVar2 == 0) ||
       (((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)) ||
        ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
      if ((param_2[1] != 0) &&
         (((-1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
          ((lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar4 != 0 &&
           (*(uint *)(lVar4 + 0x10) == param_2[1])))))) {
        bVar5 = (*(uint *)(lVar4 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar5 = false;
    }
  }
  return bVar5;
}



// FUNCTION 14022ea56 FUN_14022ea56 body=686 status=ok
// SIG undefined FUN_14022ea56(void)

undefined8 FUN_14022ea56(undefined8 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_d8 [32];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14c979cd0 == '\0') {
    fVar4 = (param_2[3] - param_2[1]) * 0.5 * DAT_14c75ed74;
    fVar5 = (param_2[2] - *param_2) * 0.5 * DAT_14c75ed74;
    fVar8 = param_2[3] + fVar4;
    fVar9 = param_2[2] + fVar5;
    fVar4 = param_2[1] - fVar4;
    fVar5 = *param_2 - fVar5;
    fVar1 = *param_3;
    fVar2 = param_3[1];
    fVar10 = param_3[7] * 0.0;
    fVar6 = param_3[9] * 0.0;
    fVar7 = fVar6 + fVar10 + param_3[0xb];
    fVar10 = param_3[9] * fVar2 + fVar10;
    fVar6 = fVar1 * param_3[7] + fVar6 + fVar7;
    fVar11 = fVar10 + fVar7;
    fVar10 = fVar10 + fVar6;
    fVar12 = fVar6;
    if (fVar6 <= fVar11) {
      fVar12 = fVar11;
    }
    if (fVar12 <= fVar10) {
      fVar12 = fVar10;
    }
    fVar13 = fVar7;
    if (fVar7 <= fVar12) {
      fVar13 = fVar12;
    }
    if (fVar5 <= fVar13) {
      if (fVar11 <= fVar6) {
        fVar6 = fVar11;
      }
      if (fVar10 <= fVar6) {
        fVar6 = fVar10;
      }
      if (fVar6 <= fVar7) {
        fVar7 = fVar6;
      }
      if (fVar7 <= fVar9) {
        fVar10 = param_3[8] * 0.0;
        fVar6 = param_3[10] * 0.0;
        fVar7 = fVar6 + fVar10 + param_3[0xc];
        fVar10 = param_3[10] * fVar2 + fVar10;
        fVar6 = fVar1 * param_3[8] + fVar6 + fVar7;
        fVar11 = fVar10 + fVar7;
        fVar10 = fVar10 + fVar6;
        fVar12 = fVar6;
        if (fVar6 <= fVar11) {
          fVar12 = fVar11;
        }
        if (fVar12 <= fVar10) {
          fVar12 = fVar10;
        }
        fVar13 = fVar7;
        if (fVar7 <= fVar12) {
          fVar13 = fVar12;
        }
        if (fVar4 <= fVar13) {
          if (fVar11 <= fVar6) {
            fVar6 = fVar11;
          }
          if (fVar10 <= fVar6) {
            fVar6 = fVar10;
          }
          if (fVar6 <= fVar7) {
            fVar7 = fVar6;
          }
          if (fVar7 <= fVar8) goto LAB_14022ec0e;
        }
      }
    }
    fVar7 = param_3[2];
    fVar6 = fVar7 * 0.0;
    local_a8 = CONCAT44(param_3[4] + fVar6,fVar6 + param_3[3]);
    local_98 = CONCAT44(fVar2 * fVar7,fVar6);
    local_a0 = CONCAT44(fVar6,fVar1 * fVar7);
    FUN_144b01024(&local_a8,&local_b8);
    if ((((local_b0 < fVar5) || (fVar9 < local_b8)) || (local_ac < fVar4)) || (fVar8 < local_b4)) {
      uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(param_3 + 0xe) >> 8),
                       *(char *)(*(longlong *)(param_3 + 0xe) + 0x35) != '\x02');
      goto LAB_14022ec10;
    }
  }
LAB_14022ec0e:
  uVar3 = 0;
LAB_14022ec10:
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022ed06 FUN_14022ed06 body=376 status=ok
// SIG undefined FUN_14022ed06(void)

void FUN_14022ed06(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x128);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 5) {
    uVar6 = 4;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (4 < *(uint *)(param_1 + 300)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14022ed91;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_14022ed91:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 / 0x48)) {
      uVar6 = uVar4 / 0x48 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 300) = (int)uVar6;
  FUN_14022ee7e(param_1,param_2,uVar6,0x48);
  return;
}



// FUNCTION 14022ee7e FUN_14022ee7e body=149 status=ok
// SIG undefined FUN_14022ee7e(void)

void FUN_14022ee7e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x120);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x120,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x120),param_1,(longlong)param_2 * 0x48);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x120,param_2,param_3,param_4);
  return;
}



// FUNCTION 14022ef14 FUN_14022ef14 body=124 status=ok
// SIG undefined FUN_14022ef14(void)

void FUN_14022ef14(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x2b8))();
  lVar2 = param_1[0x17];
  if (lVar2 != 0) {
    plVar4 = (longlong *)FUN_14015bd0c(param_3);
    *plVar4 = lVar2;
    iVar1 = (int)plVar4[6];
    *(uint *)(plVar4 + 6) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar4 + 0x34) < iVar1 + 1U) {
      FUN_140df0cf8(plVar4 + 1,iVar1);
    }
    plVar5 = plVar4 + 1;
    if ((longlong *)plVar4[5] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar4[5];
    }
    plVar5[(longlong)iVar1 * 2] = lVar3;
    plVar5[(longlong)iVar1 * 2 + 1] = 0;
  }
  return;
}



// FUNCTION 14022ef98 FUN_14022ef98 body=1055 status=ok
// SIG undefined FUN_14022ef98(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14022ef98(undefined4 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  PVOID pvVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 uVar7;
  PSRWLOCK SRWLock;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_1178 [40];
  PSRWLOCK local_1150;
  undefined4 local_1148;
  undefined4 uStack_1144;
  undefined4 uStack_1140;
  undefined4 uStack_113c;
  undefined1 local_1130 [4];
  undefined1 local_112c [4];
  longlong *local_1128 [2];
  undefined8 local_1118;
  longlong *local_1110;
  undefined4 local_1108;
  undefined4 uStack_1104;
  undefined4 uStack_1100;
  undefined4 uStack_10fc;
  longlong *local_10f8 [2];
  longlong *local_10e8 [2];
  undefined4 local_10d8;
  undefined4 uStack_10d4;
  undefined4 uStack_10d0;
  undefined4 uStack_10cc;
  int local_10bc;
  undefined8 local_10b8;
  longlong *local_10b0;
  undefined8 *local_10a8;
  ulonglong *local_10a0;
  longlong local_1098;
  undefined4 local_1090;
  longlong *local_1088;
  longlong *local_1080;
  undefined8 *local_1078;
  char local_1070;
  longlong local_1068 [512];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1178;
  local_10d8 = *param_1;
  uStack_10d4 = param_1[1];
  uStack_10d0 = param_1[2];
  uStack_10cc = param_1[3];
  uVar7 = FUN_14022f3b8(&local_10d8,param_2,&local_10bc);
  if (param_3 != 0 && (char)uVar7 == '\0') {
    if (local_10bc == 2) {
      SRWLock = (PSRWLOCK)FUN_1412fb076();
      AcquireSRWLockShared(SRWLock);
      local_1088 = local_1068;
      local_1070 = '\0';
      local_1078 = &local_68;
      iVar3 = *(int *)&SRWLock[0x32].Ptr;
      local_1150 = SRWLock;
      local_1080 = local_1088;
      if ((longlong)iVar3 != 0) {
        pvVar4 = SRWLock[0x31].Ptr;
        lVar10 = 0;
        do {
          puVar5 = *(undefined8 **)((longlong)pvVar4 + lVar10);
          if (((char)param_2 != '\0') || ((*(byte *)(puVar5 + 6) & 2) == 0)) {
            iVar6 = *(int *)(puVar5 + 1) + -1;
            if (*(int *)(puVar5 + 1) == 0) {
              iVar6 = 0;
            }
            lVar8 = FUN_1449668a2(&local_1088,*puVar5,iVar6);
            puVar9 = *(undefined4 **)(lVar8 + 8);
            if (*(undefined4 **)(lVar8 + 0x10) <= puVar9 + 1) {
              FUN_140213274(lVar8,2);
              puVar9 = *(undefined4 **)(lVar8 + 8);
            }
            *puVar9 = 0x20002c;
            *(undefined4 **)(lVar8 + 8) = puVar9 + 1;
          }
          lVar10 = lVar10 + 8;
        } while ((longlong)iVar3 * 8 != lVar10);
      }
      if ((char)param_2 != '\0') {
        iVar3 = *(int *)&local_1150[10].Ptr + -1;
        if (*(int *)&local_1150[10].Ptr == 0) {
          iVar3 = 0;
        }
        lVar10 = FUN_1449668a2(&local_1088,local_1150[9].Ptr,iVar3);
        puVar9 = *(undefined4 **)(lVar10 + 8);
        if (*(undefined4 **)(lVar10 + 0x10) <= puVar9 + 1) {
          FUN_140213274(lVar10,2);
          puVar9 = *(undefined4 **)(lVar10 + 8);
        }
        *puVar9 = 0x20002c;
        *(undefined4 **)(lVar10 + 8) = puVar9 + 1;
      }
      local_1080 = (longlong *)((longlong)local_1080 + -4);
      FUN_14006620a(&local_68,local_1088,
                    (ulonglong)((longlong)local_1080 - (longlong)local_1088) >> 1);
      local_1108 = (undefined4)local_68;
      uStack_1104 = local_68._4_4_;
      uStack_1100 = uStack_60;
      uStack_10fc = uStack_5c;
      FUN_140233b1a(local_10f8);
      local_68 = L"LongPackageNames_InvalidRoot";
      uStack_60 = 0x1c;
      FUN_1446e940c(local_112c,&local_68);
      local_68 = L"Core";
      uStack_60 = 4;
      FUN_1446e940c(local_1130,&local_68);
      FUN_140208bae(local_1128,local_1130,local_112c,
                    L"Path does not start with a valid root. Path must begin with one of: {0}");
      FUN_14023409e(&local_1118,local_1128,1);
      local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
      FUN_14023423e(local_58,local_10f8);
      local_10a0 = &local_48;
      local_10a8 = &local_68;
      FUN_14010d304(&local_1098);
      local_10b8 = local_1118;
      local_10b0 = local_1110;
      if (local_1110 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1110 + 1) = (int)local_1110[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_10e8,&local_10b8,&local_1098);
      FUN_14007f2db(local_1098,local_1090);
      if (local_1098 != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x10))();
      }
      if (local_1110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1110 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_1110)(local_1110);
          LOCK();
          piVar2 = (int *)((longlong)local_1110 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_1110 + 0x10))(local_1110);
          }
        }
      }
      if (local_10f8[0] != (longlong *)0x0) {
        (**(code **)(*local_10f8[0] + 0x10))();
      }
      FUN_140008f88(param_3,local_10e8);
      if (local_10e8[0] != (longlong *)0x0) {
        (**(code **)(*local_10e8[0] + 0x10))();
      }
      if (local_1128[0] != (longlong *)0x0) {
        (**(code **)(*local_1128[0] + 0x10))();
      }
      if (CONCAT44(uStack_1104,local_1108) != 0) {
        FUN_1400020a8();
      }
      if (local_1070 == '\x01') {
        FUN_1400020a8(local_1088);
      }
      ReleaseSRWLockShared(local_1150);
    }
    else {
      local_1148 = *param_1;
      uStack_1144 = param_1[1];
      uStack_1140 = param_1[2];
      uStack_113c = param_1[3];
      FUN_1427b5a38(&local_1088);
      FUN_140008f88(param_3,&local_1088);
      if (local_1088 != (longlong *)0x0) {
        (**(code **)(*local_1088 + 0x10))();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1178) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022f3b8 FUN_14022f3b8 body=720 status=ok
// SIG undefined FUN_14022f3b8(void)

ulonglong FUN_14022f3b8(longlong *param_1,char param_2,undefined4 *param_3)

{
  short sVar1;
  uint uVar2;
  longlong lVar3;
  ushort *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ushort *local_68;
  uint local_60;
  longlong local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = (undefined4)*param_1;
  uStack_74 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_70 = (undefined4)param_1[1];
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0xc);
  cVar5 = FUN_1449072f6(&local_78,param_3);
  if (cVar5 == '\0') {
    uVar12 = 0;
    goto LAB_14022f516;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c948490) && (FUN_144b3d300(&DAT_14c948490), DAT_14c948490 == -1)) {
    FUN_1400684da(&DAT_14c9482f8);
    atexit(FUN_1427b7fa2);
    _Init_thread_footer(&DAT_14c948490);
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9482f8);
  local_58 = *param_1;
  uStack_50 = *(uint *)(param_1 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_1 + 0xc);
  puVar7 = (undefined8 *)FUN_14022f68a(&DAT_14c948430);
  if (puVar7 == (undefined8 *)0x0) {
    if (param_2 == '\0') goto LAB_14022f4fe;
    local_88 = (undefined4)*param_1;
    uStack_84 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_80 = (undefined4)param_1[1];
    uStack_7c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_98 = DAT_14c948340;
    local_90 = DAT_14c948348 + -1;
    uVar10 = 0;
    if (DAT_14c948348 == 0) {
      local_90 = 0;
    }
    cVar5 = FUN_14474d122();
    if (cVar5 == '\0') goto LAB_14022f4fe;
    uVar12 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (param_3 != (undefined4 *)0x0) goto LAB_14022f582;
  }
  else {
    puVar7 = (undefined8 *)*puVar7;
    if ((param_2 != '\0') || ((*(byte *)(puVar7 + 6) & 2) == 0)) {
      lVar3 = *param_1;
      uVar2 = *(uint *)(param_1 + 1);
      puVar4 = (ushort *)*puVar7;
      uVar11 = 0;
      uVar12 = (ulonglong)(*(int *)(puVar7 + 1) - 1);
      if (*(int *)(puVar7 + 1) == 0) {
        uVar12 = uVar11;
      }
LAB_14022f47a:
      uVar13 = (uint)(uVar12 + uVar11);
      if (2 < (int)uVar13) {
        uVar8 = uVar12 + uVar11 & 0xffffffff;
        if (((puVar4[uVar8 - 1] != 0x2f) && (puVar4[uVar8 - 1] != 0x5c)) ||
           (puVar4[uVar8 - 2] == 0x3a)) goto LAB_14022f4b4;
LAB_14022f4a0:
        uVar11 = uVar11 - 1;
        goto LAB_14022f47a;
      }
      if (uVar13 == 2) {
        if (((puVar4[1] != 0x5c) && (puVar4[1] != 0x2f)) ||
           ((*puVar4 - 0x2f < 0x2e &&
            ((0x200000000801U >> ((ulonglong)(*puVar4 - 0x2f) & 0x3f) & 1) != 0))))
        goto LAB_14022f4b4;
        goto LAB_14022f4a0;
      }
      if (uVar13 == 0) goto LAB_14022f4fe;
LAB_14022f4b4:
      if ((int)uVar13 <= (int)uVar2) {
        uVar6 = (int)uVar2 >> 0x1f & uVar2;
        uVar9 = uVar2 - uVar6;
        if ((int)uVar13 < (int)uVar9) {
          uVar9 = uVar13;
        }
        uStack_50 = 0;
        if (0 < (int)uVar9) {
          uStack_50 = uVar9;
        }
        local_58 = lVar3 + (longlong)(int)uVar6 * 2;
        local_68 = puVar4;
        local_60 = uVar13;
        cVar5 = FUN_14005b3f4();
        if (cVar5 != '\0') {
          if (uVar13 == uVar2) {
LAB_14022f578:
            uVar12 = CONCAT71((int7)(uVar11 >> 8),1);
            if (param_3 != (undefined4 *)0x0) {
              uVar10 = 0;
              goto LAB_14022f582;
            }
            goto LAB_14022f509;
          }
          iVar14 = (int)uVar12;
          if ((puVar4[(longlong)iVar14 + (uVar11 - 1)] == 0x2f) ||
             (puVar4[(longlong)iVar14 + (uVar11 - 1)] == 0x5c)) {
            if ((iVar14 + (int)uVar11 != 1) ||
               ((*(short *)(lVar3 + 2) != 0x2f && (*(short *)(lVar3 + 2) != 0x5c))))
            goto LAB_14022f578;
          }
          else {
            sVar1 = *(short *)(lVar3 + (longlong)iVar14 * 2 + uVar11 * 2);
            if ((sVar1 == 0x5c) || (sVar1 == 0x2f)) goto LAB_14022f578;
          }
        }
      }
    }
LAB_14022f4fe:
    uVar12 = 0;
    if (param_3 != (undefined4 *)0x0) {
      uVar10 = 2;
LAB_14022f582:
      *param_3 = uVar10;
    }
  }
LAB_14022f509:
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9482f8);
LAB_14022f516:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 14022f68a FUN_14022f68a body=411 status=ok
// SIG undefined FUN_14022f68a(void)

longlong FUN_14022f68a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined2 uVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_70;
  undefined1 *local_68;
  ulonglong *local_60;
  char local_58;
  undefined1 local_50 [32];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = *param_3;
  }
  if (*(int *)(param_2 + 1) != 0) {
    local_70 = local_50;
    local_58 = '\0';
    local_60 = &local_30;
    local_88 = *(undefined4 *)param_2;
    uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_80 = *(undefined4 *)(param_2 + 1);
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_68 = local_70;
    cVar2 = FUN_14022f826();
    if (cVar2 != '\0') {
      local_98 = 0;
      local_90 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_b8 = *(undefined4 *)param_2;
      uStack_b4 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_b0 = *(undefined4 *)(param_2 + 1);
      uStack_ac = *(undefined4 *)((longlong)param_2 + 0xc);
      FUN_140a8f91e(&local_b8,&local_98);
      lVar3 = FUN_1449668a2(&local_70,local_98,local_90);
      uVar1 = *(undefined2 *)(param_1 + 0x24);
      puVar4 = *(undefined2 **)(lVar3 + 8);
      if (*(undefined2 **)(lVar3 + 0x10) <= puVar4 + 1) {
        FUN_140213274(lVar3,1);
        puVar4 = *(undefined2 **)(lVar3 + 8);
      }
      *(undefined2 **)(lVar3 + 8) = puVar4 + 1;
      *puVar4 = uVar1;
      FUN_1449668a2(lVar3,local_a8,local_a0);
      *param_2 = local_70;
      *(int *)(param_2 + 1) = (int)((ulonglong)((longlong)local_68 - (longlong)local_70) >> 1);
    }
    local_c8 = *param_2;
    local_c0 = *(undefined4 *)(param_2 + 1);
    local_bc = *(undefined4 *)((longlong)param_2 + 0xc);
    lVar3 = FUN_14022f884(param_1,&local_c8,param_3,*(undefined2 *)(param_1 + 0x24));
    if (local_58 == '\x01') {
      FUN_1400020a8(local_70);
    }
    if (lVar3 != 0) goto LAB_14022f738;
  }
  lVar3 = 0;
  if (*(int *)(param_1 + 0x18) < 0) {
    lVar3 = param_1;
  }
LAB_14022f738:
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14022f826 FUN_14022f826 body=94 status=ok
// SIG undefined FUN_14022f826(void)

undefined2 FUN_14022f826(longlong *param_1)

{
  short sVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      sVar1 = *(short *)(*param_1 + uVar3 * 2);
      if (sVar1 == 0x2f) {
        return 0;
      }
      if (sVar1 == 0x3a) {
        if (uVar2 - 1 == (int)uVar3) {
          return 1;
        }
        sVar1 = *(short *)(*param_1 + 2 + uVar3 * 2);
        if (sVar1 == 0x3a) {
          return 0;
        }
        return CONCAT11((char)((ushort)sVar1 >> 8),sVar1 != 0x5c && sVar1 != 0x2f);
      }
      if (sVar1 == 0x5c) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  return 0;
}



// FUNCTION 14022f884 FUN_14022f884 body=552 status=ok
// SIG undefined FUN_14022f884(void)

longlong FUN_14022f884(longlong param_1,undefined4 *param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a0;
  int local_98;
  char local_89;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  int iStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = (longlong *)0x0;
  uStack_60 = 0;
  local_78 = 0;
  iStack_70 = 0;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  FUN_144907528(&local_88,&local_68);
  local_58 = local_68;
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  uVar4 = FUN_14022faad(*(uint *)(param_1 + 0x18) & 0x7fffffff,param_1 + 8,&local_58,&local_89);
  lVar5 = 0;
  if (local_89 == '\x01') {
    lVar7 = (ulonglong)uVar4 * 0x20 + *(longlong *)(param_1 + 0x10);
    lVar1 = *(longlong *)(param_1 + 8);
    lVar9 = (ulonglong)uVar4 * 0x10;
    local_a0 = *(undefined8 *)(lVar1 + lVar9);
    iVar10 = *(int *)(lVar1 + 8 + lVar9);
    local_98 = iVar10 + -1;
    if (iVar10 == 0) {
      local_98 = 0;
    }
    local_b8 = *param_2;
    uStack_b4 = param_2[1];
    uStack_b0 = param_2[2];
    uStack_ac = param_2[3];
    cVar3 = FUN_14022fd12(&local_b8,&local_a0,&local_78);
    if (cVar3 != '\0') {
      puVar8 = (undefined8 *)(lVar1 + lVar9);
      lVar5 = lVar7;
      if (iStack_70 == 0) {
        if (*(int *)(lVar7 + 0x18) < 0) {
          if (param_3 != (longlong *)0x0) {
            lVar1 = param_3[1];
            lVar7 = *param_3;
            local_58 = param_3;
            uVar6 = FUN_14681c31c();
            iVar10 = *(int *)(puVar8 + 1) + -1;
            if (*(int *)(puVar8 + 1) == 0) {
              iVar10 = 0;
            }
            FUN_1449668a2(uVar6,*puVar8,iVar10);
            FUN_1467ac698(param_3,(ulonglong)(lVar1 - lVar7) >> 1 & 0xffffffff,param_4);
          }
          goto LAB_14022f9b8;
        }
      }
      else {
        iVar10 = -1;
        if (param_3 != (longlong *)0x0) {
          uVar11 = (ulonglong)(param_3[1] - *param_3) >> 1;
          iVar10 = (int)uVar11;
          local_58 = param_3;
          uVar6 = FUN_14681c31c();
          iVar2 = *(int *)(puVar8 + 1) + -1;
          if (*(int *)(puVar8 + 1) == 0) {
            iVar2 = 0;
          }
          FUN_1449668a2(uVar6,*puVar8,iVar2);
          FUN_1467ac698(param_3,uVar11 & 0xffffffff,param_4);
        }
        local_c8 = (undefined4)local_78;
        uStack_c4 = local_78._4_4_;
        iStack_c0 = iStack_70;
        uStack_bc = uStack_6c;
        lVar5 = FUN_14022f884(lVar7,&local_c8,param_3,param_4);
        if (lVar5 != 0) goto LAB_14022f9b8;
        lVar5 = 0;
        if (*(int *)(lVar7 + 0x18) < 0) {
          lVar5 = lVar7;
        }
        if ((param_3 == (longlong *)0x0) || (*(int *)(lVar7 + 0x18) < 0)) goto LAB_14022f9b8;
        param_3[1] = param_3[1] +
                     (longlong)((int)((ulonglong)(param_3[1] - *param_3) >> 1) - iVar10) * -2;
      }
      lVar5 = 0;
    }
  }
LAB_14022f9b8:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14022faad FUN_14022faad body=611 status=ok
// SIG undefined FUN_14022faad(void)

uint FUN_14022faad(uint param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  short sVar1;
  int iVar2;
  ushort *puVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  int local_74;
  longlong local_70;
  ushort *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar8 = *param_2;
  uVar10 = 0;
  local_80 = param_4;
  if (0 < (int)param_1) {
    uVar7 = (ulonglong)param_1;
    do {
      uVar13 = (int)(uVar7 >> 1) + uVar10;
      lVar5 = (ulonglong)uVar13 * 0x10;
      local_58 = *param_3;
      iStack_50 = (int)param_3[1];
      uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_68 = *(ushort **)(lVar8 + lVar5);
      iVar2 = *(int *)(lVar8 + 8 + lVar5);
      local_60 = 0;
      if (iVar2 != 0) {
        local_60 = iVar2 + -1;
      }
      uVar12 = (uint)uVar7;
      cVar4 = FUN_14490770e(&local_68,&local_58);
      if (cVar4 != '\0') {
        uVar10 = uVar13 + (uVar12 & 1);
      }
      uVar7 = uVar7 >> 1;
    } while (1 < uVar12);
  }
  bVar9 = false;
  if ((int)uVar10 < (int)param_1) {
    lVar5 = *(longlong *)(lVar8 + (ulonglong)uVar10 * 0x10);
    iVar2 = *(int *)(lVar8 + 8 + (ulonglong)uVar10 * 0x10);
    uVar13 = iVar2 - 1;
    if (iVar2 == 0) {
      uVar13 = 0;
    }
    puVar3 = (ushort *)*param_3;
    uVar12 = *(uint *)(param_3 + 1);
    lVar8 = 0;
LAB_14022fb73:
    iVar11 = (int)((ulonglong)uVar12 + lVar8);
    if (iVar11 < 3) {
      if (iVar11 != 2) {
        if (iVar11 == 0) {
          bVar9 = false;
          goto LAB_14022fc19;
        }
LAB_14022fbb1:
        bVar9 = false;
        local_74 = iVar2;
        local_70 = (longlong)(int)uVar12;
        if ((int)(uVar12 + (int)lVar8) <= (int)uVar13) {
          uVar6 = (int)uVar13 >> 0x1f & uVar13;
          iStack_50 = uVar13 - uVar6;
          if (iVar11 < iStack_50) {
            iStack_50 = iVar11;
          }
          if (iStack_50 < 1) {
            iStack_50 = 0;
          }
          local_58 = lVar5 + (longlong)(int)uVar6 * 2;
          local_68 = puVar3;
          local_60 = iVar11;
          local_5c = *(undefined4 *)((longlong)param_3 + 0xc);
          cVar4 = FUN_14005b3f4();
          if (cVar4 != '\0') {
            bVar9 = true;
            if (iVar11 + ((uint)(iVar2 != 0) - local_74) != 0) {
              if ((puVar3[(longlong)(int)uVar12 + lVar8 + -1] == 0x2f) ||
                 (puVar3[(longlong)(int)uVar12 + lVar8 + -1] == 0x5c)) {
                bVar9 = true;
                if (uVar12 + (int)lVar8 == 1) {
                  bVar9 = *(short *)(lVar5 + 2) != 0x2f && *(short *)(lVar5 + 2) != 0x5c;
                }
              }
              else {
                sVar1 = *(short *)(local_70 * 2 + lVar5 + lVar8 * 2);
                bVar9 = sVar1 == 0x2f || sVar1 == 0x5c;
              }
            }
          }
        }
        goto LAB_14022fc19;
      }
      if (((puVar3[1] != 0x5c) && (puVar3[1] != 0x2f)) ||
         ((*puVar3 - 0x2f < 0x2e &&
          ((0x200000000801U >> ((ulonglong)(*puVar3 - 0x2f) & 0x3f) & 1) != 0))))
      goto LAB_14022fbb1;
    }
    else {
      uVar7 = (ulonglong)uVar12 + lVar8 & 0xffffffff;
      if (((puVar3[uVar7 - 1] != 0x2f) && (puVar3[uVar7 - 1] != 0x5c)) ||
         (puVar3[uVar7 - 2] == 0x3a)) goto LAB_14022fbb1;
    }
    lVar8 = lVar8 + -1;
    goto LAB_14022fb73;
  }
LAB_14022fc19:
  *local_80 = bVar9;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14022fd12 FUN_14022fd12 body=507 status=ok
// SIG undefined FUN_14022fd12(void)

uint FUN_14022fd12(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  short sVar1;
  uint uVar2;
  ushort *puVar3;
  longlong lVar4;
  bool bVar5;
  short *psVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = (ushort *)*param_2;
  uVar10 = (ulonglong)*(int *)(param_2 + 1);
LAB_14022fd38:
  uVar9 = (uint)uVar10;
  if (2 < (int)uVar9) {
    if (((puVar3[(uVar10 & 0xffffffff) - 1] != 0x2f) && (puVar3[(uVar10 & 0xffffffff) - 1] != 0x5c))
       || (puVar3[(uVar10 & 0xffffffff) - 2] == 0x3a)) goto LAB_14022fd73;
LAB_14022fd5a:
    uVar10 = uVar10 - 1;
    *(int *)(param_2 + 1) = (int)uVar10;
    goto LAB_14022fd38;
  }
  if (uVar9 == 2) {
    if (((puVar3[1] != 0x5c) && (puVar3[1] != 0x2f)) ||
       ((*puVar3 - 0x2f < 0x2e &&
        ((0x200000000801U >> ((ulonglong)(*puVar3 - 0x2f) & 0x3f) & 1) != 0)))) goto LAB_14022fd73;
    goto LAB_14022fd5a;
  }
  if (uVar9 == 0) goto LAB_14022ff07;
LAB_14022fd73:
  uVar2 = *(uint *)(param_1 + 1);
  uVar11 = 0;
  if ((int)uVar9 <= (int)uVar2) {
    uVar8 = (int)uVar2 >> 0x1f & uVar2;
    local_40 = uVar2 - uVar8;
    if ((int)uVar9 < (int)local_40) {
      local_40 = uVar9;
    }
    lVar4 = *param_1;
    if ((int)local_40 < 1) {
      local_40 = uVar11;
    }
    local_48 = lVar4 + (longlong)(int)uVar8 * 2;
    local_58 = *(undefined4 *)param_2;
    uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_50 = *(undefined4 *)(param_2 + 1);
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
    cVar7 = FUN_14005b3f4(&local_58,&local_48);
    if (cVar7 != '\0') {
      if (uVar2 != uVar9) {
        if ((puVar3[uVar10 - 1] == 0x2f) || (puVar3[uVar10 - 1] == 0x5c)) {
          if (uVar9 == 1) {
            uVar11 = 0;
            if ((*(short *)(lVar4 + 2) == 0x2f) || (uVar11 = 0, *(short *)(lVar4 + 2) == 0x5c))
            goto LAB_14022fdc7;
          }
          uVar9 = -uVar9;
        }
        else {
          sVar1 = *(short *)(lVar4 + uVar10 * 2);
          if ((sVar1 != 0x2f) && (sVar1 != 0x5c)) {
LAB_14022ff07:
            uVar11 = 0;
            goto LAB_14022fdc7;
          }
          uVar9 = ~uVar9;
        }
        uVar8 = uVar2;
        if ((int)(uVar9 + uVar2) < (int)uVar2) {
          uVar8 = uVar9 + uVar2;
        }
        uVar9 = 0;
        if (0 < (int)uVar8) {
          uVar9 = uVar8;
        }
        *param_3 = (lVar4 + (longlong)(int)uVar2 * 2) - (ulonglong)(uVar9 * 2);
        *(uint *)(param_3 + 1) = uVar9;
        uVar11 = 1;
        if (0 < (int)uVar8) {
          uVar10 = (ulonglong)uVar9;
          psVar6 = (short *)((longlong)(int)uVar2 * 2 + (ulonglong)uVar9 * -2 + lVar4);
          do {
            if ((*psVar6 != 0x5c) && (*psVar6 != 0x2f)) break;
            *param_3 = (longlong)(psVar6 + 1);
            *(int *)(param_3 + 1) = (int)(uVar10 - 1);
            bVar5 = 1 < (longlong)uVar10;
            uVar10 = uVar10 - 1;
            psVar6 = psVar6 + 1;
          } while (bVar5);
        }
        goto LAB_14022fdd5;
      }
      uVar11 = 1;
    }
  }
LAB_14022fdc7:
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
LAB_14022fdd5:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 14022ff0e FUN_14022ff0e body=616 status=ok
// SIG undefined FUN_14022ff0e(void)

undefined8
FUN_14022ff0e(undefined8 param_1,longlong *param_2,undefined8 param_3,byte *param_4,longlong param_5
             )

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined1 auStack_68 [40];
  uint local_40;
  byte local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
  uVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  if (uVar2 < 0x19) {
    bVar5 = false;
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
    bVar5 = iVar3 != 0x1a;
  }
  local_39 = (*(int *)(param_5 + 0x80) != -1) << 3 |
             (0 < *(int *)(param_5 + 0x7c)) << 2 | *(byte *)(param_5 + 0x78) & 3;
  (**(code **)(*param_2 + 0x178))(param_2,&local_39,bVar5 * '\x02' + '\x02');
  uVar2 = (uint)local_39;
  *(byte *)(param_5 + 0x78) = local_39 & 3 | *(byte *)(param_5 + 0x78) & 0xfc;
  uVar4 = (uint)local_39;
  *param_4 = 1;
  bVar1 = FUN_140230178(param_2,param_5 + 0x30,*(undefined1 *)(param_5 + 0x84));
  *param_4 = *param_4 & bVar1;
  if (*(char *)(param_5 + 0x86) == '\0') {
    FUN_1402302ae(param_5 + 0x48,param_2);
  }
  else if (*(char *)(param_5 + 0x86) == '\x01') {
    FUN_14032b138(param_5 + 0x48,param_2);
  }
  bVar1 = FUN_140230178(param_2,param_5,*(undefined1 *)(param_5 + 0x85));
  *param_4 = *param_4 & bVar1;
  if ((*(byte *)(param_5 + 0x78) & 2) != 0) {
    bVar1 = FUN_140230178(param_2,param_5 + 0x18,*(undefined1 *)(param_5 + 0x85));
    *param_4 = *param_4 & bVar1;
  }
  if (((byte)((uVar2 & 4) >> 2) & bVar5) != 0) {
    local_40 = *(uint *)(param_5 + 0x7c);
    (**(code **)(*param_2 + 0x188))(param_2,&local_40);
    *(uint *)(param_5 + 0x7c) = local_40;
  }
  if ((bVar5 & (byte)((uVar4 & 8) >> 3)) != 0) {
    local_40 = *(uint *)(param_5 + 0x80);
    (**(code **)(*param_2 + 0x188))(param_2,&local_40);
    *(uint *)(param_5 + 0x80) = local_40;
  }
  uVar2 = (**(code **)(*param_2 + 0x48))(param_2);
  if (uVar2 < 0x23) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(byte *)(param_5 + 0x78) = *(byte *)(param_5 + 0x78) & 0xfb;
    }
  }
  else {
    local_40 = CONCAT31(local_40._1_3_,*(byte *)(param_5 + 0x78) >> 2) & 0xffffff01;
    (**(code **)(*param_2 + 0x178))(param_2,&local_40,1);
    *(byte *)(param_5 + 0x78) = *(byte *)(param_5 + 0x78) & 0xfb | (char)local_40 * '\x04' & 4U;
    if ((local_40 & 1) != 0) {
      bVar1 = FUN_140230178(param_2,param_5 + 0x60,*(undefined1 *)(param_5 + 0x85));
      *param_4 = *param_4 & bVar1;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140230178 FUN_140230178 body=45 status=ok
// SIG undefined FUN_140230178(void)

void FUN_140230178(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x02') {
    FUN_1401fdd6d(param_2,param_1);
    return;
  }
  if (param_3 != '\x01') {
    FUN_1402301a5(param_2);
    return;
  }
  FUN_147a92c27(param_2);
  return;
}



// FUNCTION 1402301a5 FUN_1402301a5 body=218 status=ok
// SIG undefined FUN_1402301a5(void)

void FUN_1402301a5(double *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_58 [44];
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  if (0x16 < uVar1) {
    iVar2 = (**(code **)(*param_2 + 0x48))(param_2);
    if (iVar2 != 0x1a) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  local_24 = (float)param_1[2];
  local_28 = (float)param_1[1];
  local_2c = (float)*param_1;
  FUN_147aac86a(&local_2c,param_2);
  *param_1 = (double)local_2c;
  param_1[1] = (double)local_28;
  param_1[2] = (double)local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402302ae FUN_1402302ae body=648 status=ok
// SIG undefined FUN_1402302ae(void)

void FUN_1402302ae(double *param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong *puVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  undefined1 auStack_68 [44];
  char local_3c;
  byte local_3b;
  byte local_3a;
  byte local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar2 = *(byte *)(param_2 + 5);
  bVar5 = false;
  local_39 = 0;
  local_3a = 0;
  local_3b = 0;
  bVar4 = false;
  local_3c = false;
  if ((bVar2 & 1) == 0) {
    dVar6 = (*param_1 * 256.0) / 360.0;
    local_39 = (byte)((ulonglong)(longlong)ROUND(dVar6 + dVar6 + 0.5) >> 1);
    dVar6 = (param_1[1] * 256.0) / 360.0;
    local_3a = (byte)((ulonglong)(longlong)ROUND(dVar6 + dVar6 + 0.5) >> 1);
    dVar6 = (param_1[2] * 256.0) / 360.0;
    local_3b = (byte)((ulonglong)(longlong)ROUND(dVar6 + dVar6 + 0.5) >> 1);
    local_3c = local_39 != 0;
    bVar4 = local_3a != 0;
    bVar5 = local_3b != 0;
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_3c,1);
  if (local_3c == '\0') {
    local_39 = 0;
  }
  else {
    puVar3 = (ulonglong *)param_2[1];
    pbVar1 = (byte *)*puVar3 + 1;
    if ((byte *)puVar3[1] < pbVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_39,1);
    }
    else {
      local_39 = *(byte *)*puVar3;
      *puVar3 = (ulonglong)pbVar1;
    }
  }
  local_3c = bVar4;
  (**(code **)(*param_2 + 0x178))(param_2,&local_3c,1);
  if (local_3c == '\0') {
    local_3a = 0;
  }
  else {
    puVar3 = (ulonglong *)param_2[1];
    pbVar1 = (byte *)*puVar3 + 1;
    if ((byte *)puVar3[1] < pbVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_3a,1);
    }
    else {
      local_3a = *(byte *)*puVar3;
      *puVar3 = (ulonglong)pbVar1;
    }
  }
  local_3c = bVar5;
  (**(code **)(*param_2 + 0x178))(param_2,&local_3c,1);
  if (local_3c == '\0') {
    local_3b = 0;
  }
  else {
    puVar3 = (ulonglong *)param_2[1];
    pbVar1 = (byte *)*puVar3 + 1;
    if ((byte *)puVar3[1] < pbVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_3b,1);
    }
    else {
      local_3b = *(byte *)*puVar3;
      *puVar3 = (ulonglong)pbVar1;
    }
  }
  if ((bVar2 & 1) != 0) {
    *param_1 = (double)local_39 * 360.0 * 0.00390625;
    param_1[1] = (double)local_3a * 360.0 * 0.00390625;
    param_1[2] = (double)local_3b * 360.0 * 0.00390625;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140230538 FUN_140230538 body=285 status=ok
// SIG undefined FUN_140230538(void)

undefined8 FUN_140230538(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  char extraout_AL;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  undefined7 extraout_var;
  longlong lVar7;
  
  lVar1 = param_3 + 8;
  uVar4 = FUN_1403e7f2a(lVar1);
  if ((char)uVar4 != '\0') {
    lVar7 = param_2 + 0x48;
    if (*(longlong *)(param_2 + 0x48) == *(longlong *)(param_2 + 0x30)) {
      lVar7 = param_2 + 0x30;
    }
    uVar4 = CONCAT71((int7)((ulonglong)(param_2 + 0x30) >> 8),*(byte *)(param_3 + 0x21));
    if ((*(byte *)(param_3 + 0x21) & 1) != 0) {
      cVar2 = FUN_140230656(lVar1);
      cVar3 = FUN_140230656(lVar7);
      if (cVar2 != cVar3) {
        return 0;
      }
      cVar2 = FUN_140230860(lVar1);
      cVar3 = FUN_140230860(lVar7);
      if (cVar2 != cVar3) {
        return 0;
      }
      cVar2 = FUN_14023075c(lVar1);
      uVar5 = FUN_14023075c(lVar7);
      if (cVar2 != (char)uVar5) {
        return 0;
      }
      uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),*(undefined1 *)(param_3 + 0x21));
    }
    if ((uVar4 & 2) != 0) {
      cVar2 = FUN_140f47498(lVar1);
      cVar3 = FUN_140f47498(lVar7);
      if (cVar2 != cVar3) {
        return 0;
      }
      cVar2 = FUN_144a8fce0(lVar1);
      cVar3 = FUN_144a8fce0(lVar7);
      if (cVar2 != cVar3) {
        return 0;
      }
      cVar2 = FUN_144aa26b8(lVar1);
      uVar4 = FUN_144aa26b8(lVar7);
      if (cVar2 != (char)uVar4) {
        return 0;
      }
    }
  }
  uVar6 = (undefined7)(uVar4 >> 8);
  if ((((*(char *)(param_3 + 0x20) == '\a') ||
       (*(char *)(param_3 + 0x20) == *(char *)(param_2 + 0x28))) &&
      ((*(char *)(param_3 + 0x22) == '\0' ||
       (*(char *)(param_3 + 0x22) == *(char *)(param_2 + 0x70))))) &&
     ((*(int *)(param_3 + 0x24) == 0 ||
      (FUN_147d93052(param_2 + 0x60), uVar6 = extraout_var, extraout_AL != '\0')))) {
    return CONCAT71(uVar6,1);
  }
  return 0;
}



// FUNCTION 140230656 FUN_140230656 body=261 status=ok
// SIG undefined FUN_140230656(void)

undefined8 FUN_140230656(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    local_48 = *param_1;
    local_40 = 0;
    local_38 = param_1[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1402df5c4(&local_30,&local_48);
    plVar1 = local_28;
    param_1[1] = local_30;
    local_30 = 0;
    plVar3 = (longlong *)param_1[2];
    if (local_28 == plVar3) {
LAB_140230738:
      plVar3 = local_28;
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
    else {
      local_28 = (longlong *)0x0;
      param_1[2] = plVar1;
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
        goto LAB_140230738;
      }
    }
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      uVar6 = 0;
      goto LAB_14023067c;
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x40)) & 0xffffffffffffff02
  ;
  uVar6 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 1);
LAB_14023067c:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14023075c FUN_14023075c body=259 status=ok
// SIG undefined FUN_14023075c(void)

ulonglong FUN_14023075c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    local_48 = *param_1;
    local_40 = 0;
    local_38 = param_1[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1402df5c4(&local_30,&local_48);
    plVar1 = local_28;
    param_1[1] = local_30;
    local_30 = 0;
    plVar3 = (longlong *)param_1[2];
    if (local_28 == plVar3) {
LAB_14023083c:
      plVar3 = local_28;
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
    else {
      local_28 = (longlong *)0x0;
      param_1[2] = plVar1;
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
        goto LAB_14023083c;
      }
    }
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      uVar5 = 0;
      goto LAB_140230780;
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x41)) & 0xffffffffffffff01
  ;
LAB_140230780:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140230860 FUN_140230860 body=262 status=ok
// SIG undefined FUN_140230860(void)

undefined8 FUN_140230860(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    local_48 = *param_1;
    local_40 = 0;
    local_38 = param_1[2];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1402df5c4(&local_30,&local_48);
    plVar1 = local_28;
    param_1[1] = local_30;
    local_30 = 0;
    plVar3 = (longlong *)param_1[2];
    if (local_28 == plVar3) {
LAB_140230943:
      plVar3 = local_28;
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
    else {
      local_28 = (longlong *)0x0;
      param_1[2] = plVar1;
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
        goto LAB_140230943;
      }
    }
    lVar4 = param_1[1];
    if (lVar4 == 0) {
      uVar6 = 0;
      goto LAB_140230887;
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0x40)) & 0xffffffffffffff04
  ;
  uVar6 = CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 2);
LAB_140230887:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140230967 FUN_140230967 body=71 status=ok
// SIG undefined FUN_140230967(void)

void FUN_140230967(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_1402309ae(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14aff3b00;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x4c) = 1;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x54) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x61) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x69) = 0;
  return;
}



// FUNCTION 1402309ae FUN_1402309ae body=106 status=ok
// SIG undefined FUN_1402309ae(void)

undefined8 * FUN_1402309ae(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a7be9c0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 140230a18 FUN_140230a18 body=21 status=ok
// SIG undefined FUN_140230a18(void)

undefined4 * FUN_140230a18(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 140230a2e FUN_140230a2e body=53 status=ok
// SIG undefined FUN_140230a2e(void)

undefined8 FUN_140230a2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140230a63();
  FUN_140230ad0(&DAT_14c8731a8,param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 140230a63 FUN_140230a63 body=108 status=ok
// SIG undefined FUN_140230a63(void)

undefined * FUN_140230a63(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c873208) {
    FUN_144b3d300(&DAT_14c873208);
    if (DAT_14c873208 == -1) {
      FUN_1456e8dae(&DAT_14c8731a8);
      atexit((_func_5014 *)&LAB_142787b5f);
      _Init_thread_footer(&DAT_14c873208);
    }
  }
  return &DAT_14c8731a8;
}



// FUNCTION 140230ad0 FUN_140230ad0 body=163 status=ok
// SIG undefined FUN_140230ad0(void)

undefined8 * FUN_140230ad0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  undefined8 local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_140230b74(param_1,&local_38);
  uVar1 = (ulonglong)local_28;
  if ((&DAT_149e346c0)[uVar1] == '\x01') {
    *param_2 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_30._4_4_;
    local_30 = 0;
  }
  else {
    FUN_140056680(param_2,param_3);
    uVar1 = (ulonglong)local_28;
  }
  (*(code *)(&PTR_FUN_149e346d0)[uVar1])(&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140230b74 FUN_140230b74 body=1267 status=ok
// SIG undefined FUN_140230b74(void)

longlong *
FUN_140230b74(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4,char param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined1 auStack_138 [40];
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  longlong *local_108 [2];
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *plStack_e0;
  longlong *local_d8 [2];
  longlong *local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  wchar_t **local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  int local_70;
  byte local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar8 = param_1 + 0x18;
  if (param_5 != '\0') {
    lVar8 = param_1 + 0x48;
  }
  FUN_1449078e7(&local_78,param_3,lVar8);
  if ((&DAT_149e19eee)[local_68] == '\0') {
    FUN_14023423e(&local_60,&local_78);
    (*(code *)(&PTR_FUN_149e19f00)[local_68])(&local_78);
    local_68 = 2;
    FUN_14023423e(param_2,&local_60);
    *(undefined1 *)(param_2 + 2) = 1;
    if (local_60 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_60 + 0x10))();
    }
    goto LAB_140230d7d;
  }
  lVar8 = (longlong)local_70;
  if (lVar8 == 0) {
    FUN_140056680(param_2,param_3);
  }
  else {
    local_b8 = 0;
    uStack_b0 = 0;
    iVar10 = (int)((ulonglong)
                   (*(longlong *)(local_78 + 0x48 + (longlong)(local_70 + -1) * 0x60) - param_3) >>
                  1);
    if (iVar10 < 1) {
LAB_140230c49:
      puVar13 = (uint *)(local_78 + 0x30);
      do {
        uVar4 = puVar13[-0xc];
        uVar5 = puVar13[-0xb];
        uVar6 = puVar13[-10];
        uVar7 = puVar13[-9];
        if (uVar7 == 0xdcc637f7 &&
            (uVar6 == 0x8a8001a1 && (uVar5 == 0x85d94664 && uVar4 == 0x3ed3a25))) {
          uVar12 = (ulonglong)*puVar13;
          lVar11 = *(longlong *)(puVar13 + -6);
LAB_140230d47:
          FUN_1400020e8(&local_b8,lVar11,uVar12);
        }
        else if (uVar7 == 0xcac61362 &&
                 (uVar6 == 0x9d5447ff && (uVar5 == 0x508941bb && uVar4 == 0x48ff0754))) {
          FUN_140002184(&local_b8,(short)puVar13[-6]);
        }
        else if ((((uVar4 == 0xe11f9937) && (uVar5 == 0xaf714ac5)) && (uVar6 == 0x88a4e04e)) &&
                (uVar7 == 0x723a753c)) {
          lVar11 = (longlong)(int)puVar13[-6];
          if ((lVar11 < 0) || ((int)param_4[1] <= (int)puVar13[-6])) {
            if (param_5 == '\0') {
              lVar11 = *(longlong *)(puVar13 + -4);
              uVar12 = (ulonglong)(*(longlong *)(puVar13 + -2) - lVar11) >> 1;
              goto LAB_140230d47;
            }
            local_e8 = 0;
            plStack_e0 = (longlong *)0x0;
            FUN_1413a4536(local_d8,lVar11,0);
            local_60 = L"InvalidArgumentIndex";
            local_58 = 0x14;
            FUN_1446e940c(local_10c,&local_60);
            local_60 = L"StringFormatter";
            local_58 = 0xf;
            FUN_1446e940c(local_110,&local_60);
            FUN_140208bae(local_108,local_110,local_10c,L"Invalid argument index: {0}");
            FUN_14023409e(&local_f8,local_108,1);
            local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
            FUN_14023423e(local_50,local_d8);
            local_90 = &local_40;
            local_98 = &local_60;
            FUN_14010d304(&local_88);
            local_a8 = local_f8;
            local_a0 = local_f0;
            if (local_f0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(&local_c8,&local_a8,&local_88);
            FUN_14007f2db(local_88,local_80);
            if (local_88 != 0) {
              FUN_1400020a8();
            }
            if (local_50[0] != (longlong *)0x0) {
              (**(code **)(*local_50[0] + 0x10))();
            }
            if (local_f0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_f0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_f0)(local_f0);
                LOCK();
                piVar2 = (int *)((longlong)local_f0 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_f0 + 0x10))(local_f0);
                }
              }
            }
            if (local_d8[0] != (longlong *)0x0) {
              (**(code **)(*local_d8[0] + 0x10))();
            }
            *param_2 = (longlong)local_c8;
            if (local_c8 == (longlong *)0x0) {
              *(undefined4 *)(param_2 + 1) = local_c0;
              *(undefined1 *)(param_2 + 2) = 1;
            }
            else {
              (**(code **)(*local_c8 + 8))();
              *(undefined4 *)(param_2 + 1) = local_c0;
              *(undefined1 *)(param_2 + 2) = 1;
              if (local_c8 != (longlong *)0x0) {
                (**(code **)(*local_c8 + 0x10))();
              }
            }
            if (local_108[0] != (longlong *)0x0) {
              (**(code **)(*local_108[0] + 0x10))();
            }
            plVar1 = plStack_e0;
            if (plStack_e0 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_e0 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plStack_e0)(plStack_e0);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
            goto LAB_140230d7d;
          }
          FUN_140231068(lVar11 * 0x20 + *param_4,&local_b8);
        }
        puVar9 = puVar13 + 0xc;
        puVar13 = puVar13 + 0x18;
      } while (puVar9 != (uint *)(lVar8 * 0x60 + local_78));
    }
    else {
      FUN_1446f8c06(&local_b8,iVar10 + 1);
      lVar8 = (longlong)local_70;
      if (lVar8 != 0) goto LAB_140230c49;
    }
    *param_2 = local_b8;
    local_b8 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_b0._4_4_;
  }
  *(undefined1 *)(param_2 + 2) = 0;
LAB_140230d7d:
  (*(code *)(&PTR_FUN_149e19f00)[local_68])();
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140231068 FUN_140231068 body=352 status=ok
// SIG undefined FUN_140231068(void)

void FUN_140231068(int *param_1,undefined8 param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58,0);
  }
  switch(*param_1) {
  case 0:
    uVar3 = *(undefined8 *)(param_1 + 2);
    pwVar2 = L"%lld";
    break;
  case 1:
    uVar3 = *(undefined8 *)(param_1 + 2);
    pwVar2 = L"%llu";
    break;
  case 2:
    FUN_140002266(&local_30,&DAT_149e02016,*(undefined8 *)(param_1 + 2));
    goto LAB_14023111f;
  default:
    goto switchD_1402310dd_caseD_3;
  case 4:
    strlen(*(char **)(param_1 + 2));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 5:
    wcslen(*(wchar_t **)(param_1 + 2));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 6:
    wcslen(*(wchar_t **)(param_1 + 2));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 7:
    strlen(*(char **)(param_1 + 2));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_140002266(&local_30,pwVar2,uVar3);
LAB_14023111f:
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
switchD_1402310dd_caseD_3:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140231228 FUN_140231228 body=119 status=ok
// SIG undefined FUN_140231228(void)

undefined8 FUN_140231228(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caefeb0);
  iVar1 = *(int *)(param_1 + 0x38);
  lVar2 = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caefeb0);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      FUN_1402312a0(&DAT_14cafb2e8,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 4;
    } while ((longlong)iVar1 * 4 != lVar3);
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
  }
  return 0;
}



// FUNCTION 1402312a0 FUN_1402312a0 body=93 status=ok
// SIG undefined FUN_1402312a0(void)

void FUN_1402312a0(PSRWLOCK param_1,int param_2)

{
  undefined8 *puVar1;
  PVOID pvVar2;
  longlong lVar3;
  
  AcquireSRWLockExclusive(param_1);
  lVar3 = (longlong)param_2 * 0x28;
  FUN_1402312fe(param_1 + 3,(PVOID)((longlong)param_1[1].Ptr + lVar3));
  pvVar2 = param_1[1].Ptr;
  *(undefined4 *)((longlong)pvVar2 + lVar3) = 5;
  puVar1 = (undefined8 *)((longlong)pvVar2 + lVar3 + 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)((longlong)pvVar2 + lVar3 + 4);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((longlong)pvVar2 + lVar3 + 0x20) = 0x9e00;
                    /* WARNING: Could not recover jumptable at 0x0001402312f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(param_1);
  return;
}



// FUNCTION 1402312fe FUN_1402312fe body=292 status=ok
// SIG undefined FUN_1402312fe(void)

undefined8 FUN_1402312fe(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = FUN_14490dc6d(param_2);
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar5 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar4 * 0x98;
        lVar1 = lVar2 + lVar7;
        if ((((*(int *)(lVar2 + lVar7) == *param_2) &&
             (*(longlong *)(lVar1 + 8) == *(longlong *)(param_2 + 2))) &&
            (*(longlong *)(lVar1 + 0x10) == *(longlong *)(param_2 + 4))) &&
           ((*(longlong *)(lVar1 + 0x18) == *(longlong *)(param_2 + 6) &&
            (*(longlong *)(lVar1 + 0x20) == *(longlong *)(param_2 + 8))))) {
          iVar8 = *(int *)((longlong)plVar5 + (longlong)*(int *)(lVar1 + 0x94) * 4);
          if (iVar8 == iVar4) {
            piVar6 = (int *)((longlong)plVar5 + (longlong)*(int *)(lVar1 + 0x94) * 4);
          }
          else {
            do {
              piVar6 = (int *)((longlong)iVar8 * 0x98 + lVar2 + 0x90);
              iVar8 = *piVar6;
            } while (iVar8 != iVar4);
          }
          *piVar6 = *(int *)(lVar1 + 0x90);
          lVar2 = *param_1;
          FUN_140231422(lVar2 + lVar7 + 0x38);
          puVar3 = *(undefined8 **)(lVar2 + lVar7 + 0x30);
          if (puVar3 != (undefined8 *)0x0) {
            LOCK();
            piVar6 = (int *)(puVar3 + 1);
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (*piVar6 == 0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          FUN_140231494(param_1,iVar4);
          return 1;
        }
        iVar4 = *(int *)(lVar1 + 0x90);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 140231422 FUN_140231422 body=52 status=ok
// SIG undefined FUN_140231422(void)

void FUN_140231422(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_140231456(lVar1,*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140231456 FUN_140231456 body=62 status=ok
// SIG undefined FUN_140231456(void)

void FUN_140231456(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      puVar2 = (undefined8 *)*plVar3;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140231494 FUN_140231494 body=122 status=ok
// SIG undefined FUN_140231494(void)

void FUN_140231494(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x98) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x98) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x98 + 4) = uVar5;
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



// FUNCTION 14023150e FUN_14023150e body=202 status=ok
// SIG undefined FUN_14023150e(void)

void FUN_14023150e(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = *(byte *)(param_1 + 0xbd8);
  if (((int)(uint)bVar2 < *(int *)(param_1 + 0xbf0)) &&
     (plVar3 = *(longlong **)
                (*(longlong *)(param_1 + 0xbe8) + 0x28 +
                (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x300))(plVar3,param_2);
  }
  uVar4 = FUN_140231a4a(*(undefined8 *)(param_1 + 0x3f0));
  FUN_1402315da(uVar4,&local_28);
  if (local_28 != 0) {
    *(undefined4 *)(param_2 + 0x13c) = *(undefined4 *)(local_28 + 0x154);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
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



// FUNCTION 1402315da FUN_1402315da body=83 status=ok
// SIG undefined FUN_1402315da(void)

longlong * FUN_1402315da(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_14023162e();
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



// FUNCTION 14023162e FUN_14023162e body=57 status=ok
// SIG undefined FUN_14023162e(void)

void FUN_14023162e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbd450 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbd450 = FUN_140002ddd(FUN_14660eae1,uVar1,L"OakWeaponClassData");
  }
  return;
}



// FUNCTION 140231668 FUN_140231668 body=197 status=ok
// SIG undefined FUN_140231668(void)

void FUN_140231668(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 0x108) & 1) != 0) {
    plVar2 = (longlong *)FUN_1401654a2(*(undefined8 *)(param_1 + 0x30));
    if (plVar2 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar2 + 0x48))(plVar2,0);
      if (cVar1 != '\0') {
        *(undefined1 *)(param_2 + 0x118) = 0;
      }
    }
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    lVar3 = FUN_140832a06(*(longlong *)(param_1 + 0xa8) + 0x1b0);
    if (lVar3 == 0) {
      lVar3 = FUN_14011c349();
      lVar3 = FUN_140832a06(lVar3 + 0x460);
      if (lVar3 == 0) goto LAB_140231691;
    }
    lVar4 = FUN_148f154ba(param_2 + 0xa40);
    *(byte *)(lVar4 + 10) = *(byte *)(lVar4 + 10) | 1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(lVar4 + 0x498) = lVar3;
  }
LAB_140231691:
  FUN_14023172e(param_1,param_2);
  return;
}



// FUNCTION 14023172e FUN_14023172e body=681 status=ok
// SIG undefined FUN_14023172e(void)

void FUN_14023172e(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  byte local_71;
  longlong local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  byte *local_40;
  longlong *local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_70 = param_2;
  FUN_1402319d8(*(longlong *)(param_1 + 0x88) + 0xec,param_2 + 0x148);
  *(undefined4 *)(param_2 + 0x138) = 0;
  *(undefined1 *)(param_2 + 0x140) = *(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0xe8);
  if (*(char *)(param_2 + 0x118) == '\x01') {
    *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0xe4);
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (((0 < *(int *)(lVar2 + 0xd20)) && (**(longlong **)(lVar2 + 0xd18) != 0)) &&
       (plVar3 = *(longlong **)(**(longlong **)(lVar2 + 0xd18) + 0x48), plVar3 != (longlong *)0x0))
    {
      local_71 = 0;
      if (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0xdc) != 0) {
        cVar5 = (**(code **)(*plVar3 + 0x4c8))(plVar3);
        if (cVar5 != '\0') {
          (**(code **)(*plVar3 + 0x4a8))
                    (plVar3,&local_d8,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0xdc),0);
          *(undefined4 *)(param_2 + 0x120) = local_b8;
          *(undefined4 *)(param_2 + 0x124) = uStack_b4;
          *(undefined4 *)(param_2 + 0x128) = uStack_b0;
          *(undefined4 *)(param_2 + 300) = uStack_ac;
          *(undefined8 *)(param_2 + 0x130) = local_a8;
          goto LAB_140231858;
        }
      }
      local_68 = &LAB_14435e6e6;
      local_58 = 0;
      local_48 = &PTR_LAB_14b9e0fe0;
      local_40 = &local_71;
      local_38 = &local_70;
      (**(code **)(*(longlong *)(lVar2 + 0x8c0) + 0x48))(lVar2 + 0x8c0,1);
      if ((local_71 & 1) == 0) {
        if ((*(byte *)(*(longlong *)(param_1 + 0x88) + 0x6c) & 1) == 0) {
          cVar5 = (**(code **)(*plVar3 + 0x4c8))
                            (plVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x80));
          if (cVar5 != '\0') {
            (**(code **)(*plVar3 + 0x4a8))
                      (plVar3,&local_d8,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x80),0);
            *(undefined4 *)(local_70 + 0x120) = local_b8;
            *(undefined4 *)(local_70 + 0x124) = uStack_b4;
            *(undefined4 *)(local_70 + 0x128) = uStack_b0;
            *(undefined4 *)(local_70 + 300) = uStack_ac;
            *(undefined8 *)(local_70 + 0x130) = local_a8;
            goto LAB_140231858;
          }
        }
        lVar2 = *(longlong *)(param_1 + 0x30);
        bVar1 = *(byte *)(lVar2 + 0xbd8);
        *(undefined8 *)(local_70 + 0x130) = DAT_14c8464f0;
        uVar4 = DAT_14c8464e8;
        *(undefined8 *)(local_70 + 0x120) = DAT_14c8464e0;
        *(undefined8 *)(local_70 + 0x128) = uVar4;
        local_c8 = DAT_14c846508;
        local_d8 = (undefined4)DAT_14c8464f8;
        uStack_d4 = DAT_14c8464f8._4_4_;
        uStack_d0 = (undefined4)DAT_14c846500;
        uStack_cc = DAT_14c846500._4_4_;
        if (((int)(uint)bVar1 < *(int *)(lVar2 + 0xbf0)) &&
           (plVar3 = *(longlong **)
                      (*(longlong *)(lVar2 + 0xbe8) + 8 +
                      (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), plVar3 != (longlong *)0x0)) {
          (**(code **)(*plVar3 + 0x2d8))(plVar3,local_70 + 0x120,&local_d8);
        }
      }
    }
  }
LAB_140231858:
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402319d8 FUN_1402319d8 body=114 status=ok
// SIG undefined FUN_1402319d8(void)

void FUN_1402319d8(char *param_1,undefined8 *param_2)

{
  *(undefined8 *)((longlong)param_2 + 0xc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0xbf800000bf800000;
  if (*param_1 == '\x01') {
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 8);
  }
  if (param_1[1] == '\x01') {
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  }
  if (param_1[2] == '\x01') {
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x10);
  }
  if (param_1[3] == '\x01') {
    *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  }
  if (param_1[4] == '\x01') {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 140231a4a FUN_140231a4a body=1078 status=ok
// SIG undefined FUN_140231a4a(void)

longlong * FUN_140231a4a(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)(param_1 + 0xb8);
  if (*(longlong *)(param_1 + 0xb8) != 0) goto LAB_140231a7b;
  puVar1 = (uint *)(param_1 + 0x70);
  if (((((*(int *)(param_1 + 0x74) == 0) || (uVar4 = *puVar1, (int)uVar4 < 0)) ||
       (DAT_14c9647dc <= (int)uVar4)) ||
      ((plVar11 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_1 + 0x74))))) ||
     (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 ||
      (plVar11 = (longlong *)*plVar11, plVar11 == (longlong *)0x0)))) {
    if (*(longlong *)(param_1 + 0x78) == 0) goto LAB_140231a7b;
    plVar11 = (longlong *)FUN_140007850();
    cVar5 = (*(code *)PTR_FUN_14c758760)();
    if ((plVar11 == (longlong *)0x0) || (cVar5 == '\0')) {
      if (plVar11 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x70) = 0;
        goto LAB_140231a7b;
      }
      uVar4 = *(uint *)((longlong)plVar11 + 0xc);
      *puVar1 = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar6 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar6 = *(int *)(lVar14 + 0x10);
        bVar15 = iVar6 == 0;
        if (bVar15) {
          *(int *)(lVar14 + 0x10) = iVar13;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar15) {
          iVar6 = iVar13;
        }
      }
      *(int *)(param_1 + 0x74) = iVar6;
    }
    else {
      uVar4 = *(uint *)((longlong)plVar11 + 0xc);
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      if ((*(uint *)(lVar14 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(puVar1,plVar11);
      }
    }
    if ((*(uint *)(plVar11 + 1) >> 0x1e & 1) != 0) goto LAB_140231a7b;
  }
  if (DAT_14c949118 == 0) {
    local_50 = FUN_140631fbe;
    lVar14 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar14;
    FUN_1446f470e(local_48,L"Class",1);
    local_68 = &LAB_146891e90;
    local_70 = &LAB_146273097;
    local_80 = L"Engine";
    local_78 = 199;
    local_88 = 0x20;
    local_90 = 0x10000000;
    local_98 = (wchar_t *)CONCAT44(local_98._4_4_,8);
    local_60 = &local_50;
    FUN_14574b4b2(lVar14);
    DAT_14c949118 = lVar14;
    uVar8 = FUN_144a7a812();
    lVar14 = DAT_14c949118;
    uVar9 = FUN_1449e2fb2();
    local_98 = L"Class";
    FUN_14574b446(uVar9,lVar14,uVar8,L"/Script/CoreUObject");
  }
  if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
        DAT_14c949118 + 0x30)) && (lVar14 = FUN_140126fc0(), lVar14 != 0)) &&
     ((*(int *)(lVar14 + 0x38) <= (int)plVar11[7] &&
      (*(longlong *)(plVar11[6] + (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)))) {
    plVar10 = (longlong *)plVar11[0x22];
    if (plVar10 == (longlong *)0x0) {
      (**(code **)(*plVar11 + 1000))(plVar11);
      plVar10 = (longlong *)plVar11[0x22];
    }
    lVar14 = (**(code **)(*plVar10 + 0x690))();
    if (lVar14 != 0) {
      lVar7 = FUN_140231e82();
      if ((lVar7 == 0) || (*(int *)(lVar14 + 0x38) < *(int *)(lVar7 + 0x38))) {
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        if (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30) {
          lVar12 = lVar14;
        }
      }
      uVar8 = 0;
      FUN_140005f6c(plVar3,lVar12,0,0);
      lVar7 = *plVar3;
      if (lVar7 != 0) {
        uVar8 = FUN_140231e82();
        cVar5 = FUN_1448093f4(lVar7,uVar8);
        if (cVar5 == '\0') {
          uVar8 = 0;
        }
        else {
          uVar8 = *(undefined8 *)(param_1 + 0xb8);
          plVar11 = *(longlong **)(param_1 + 0xc0);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            FUN_1446e7478(param_1 + 0xa8,uVar8,lVar14,0);
            LOCK();
            plVar10 = plVar11 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            goto LAB_140231a7b;
          }
        }
      }
      FUN_1446e7478(param_1 + 0xa8,uVar8,lVar14,0);
    }
  }
LAB_140231a7b:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 140231e82 FUN_140231e82 body=57 status=ok
// SIG undefined FUN_140231e82(void)

void FUN_140231e82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69ff8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69ff8 = FUN_140002ddd(FUN_14652488b,uVar1,L"InventoryTypeClassData");
  }
  return;
}



// FUNCTION 140231ec6 FUN_140231ec6 body=95 status=ok
// SIG undefined FUN_140231ec6(void)

void FUN_140231ec6(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0;
  do {
    FUN_144732568(*(undefined8 *)(param_1 + 0x38 + lVar1),*(undefined4 *)(param_1 + 0x40 + lVar1));
    if (*(longlong *)(param_1 + 0x38 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x20);
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140231f26 FUN_140231f26 body=3089 status=ok
// SIG undefined FUN_140231f26(void)

longlong FUN_140231f26(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  void *pvVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  uint *local_140;
  longlong *local_138;
  longlong *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  int local_c8;
  undefined4 local_c4;
  longlong *local_c0;
  longlong *local_b8;
  uint *puStack_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong *local_70;
  int iStack_68;
  uint uStack_64;
  uint *local_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar18 = (longlong *)(param_1 + 0x298);
  lVar24 = *(longlong *)(param_1 + 0x298);
  local_138 = plVar18;
  if ((*(byte *)(param_1 + 0x68) & 2) == 0) {
    if (lVar24 != 0) {
      if (*(char *)(param_1 + 0x310) == '\x01') {
        puVar20 = (undefined8 *)(param_1 + 800);
        puVar21 = (undefined8 *)(lVar24 + 0x30);
        for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar21 = *puVar20;
          puVar20 = puVar20 + 1;
          puVar21 = puVar21 + 1;
        }
        goto LAB_1402320ce;
      }
      plVar17 = (longlong *)FUN_145d503e6(param_1 + -0x390);
      if (plVar17 != (longlong *)0x0) {
        lVar24 = FUN_140861c56();
        plVar18 = local_138;
        if (((*(int *)(lVar24 + 0x38) <= *(int *)(plVar17[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar17[2] + 0x30) + (longlong)*(int *)(lVar24 + 0x38) * 8)
             == lVar24 + 0x30)) &&
           (cVar7 = (**(code **)(*plVar17 + 0x360))(plVar17,*local_138 + 0x30), cVar7 != '\0'))
        goto LAB_1402320ce;
      }
    }
    lVar24 = 0;
  }
  else {
    if ((lVar24 != 0) && (lVar24 = *(longlong *)(param_1 + 0x40), lVar24 != 0)) {
      lVar10 = (**(code **)(*(longlong *)(lVar24 + 0x28) + 0x10))(lVar24 + 0x28);
      lVar24 = *(longlong *)(lVar10 + 8);
      plVar18 = *(longlong **)(lVar10 + 0x10);
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
      }
      if (lVar24 == 0) {
        lVar24 = 0;
      }
      else {
        FUN_140232b8e(lVar24,&local_98);
        if ((local_98 == 0) || (lVar10 = FUN_140232b38(), lVar10 == 0)) {
LAB_140232095:
          lVar24 = 0;
        }
        else {
          uVar16 = *(uint *)(lVar24 + 0x30);
          uVar13 = uVar16 & 0xffff;
          if (*(int *)(lVar10 + 0x30) <= (int)uVar13) goto LAB_140232095;
          lVar24 = *(longlong *)(lVar10 + 0x28);
          if (*(longlong *)(lVar10 + 0x28) == 0) {
            lVar24 = lVar10 + 0x18;
          }
          if ((*(uint *)(lVar24 + (ulonglong)(uVar13 >> 5) * 4) >> (uVar16 & 0x1f) & 1) == 0)
          goto LAB_140232095;
          if (uVar16 >> 0x10 !=
              (uint)*(ushort *)(*(longlong *)(lVar10 + 8) + 0x11c + (ulonglong)uVar13 * 0x128))
          goto LAB_140232095;
          plVar17 = (longlong *)(param_1 + 0x3a8);
          puVar2 = (uint *)(param_1 + 0x3b8);
          iVar8 = *(int *)(param_1 + 0x3d0);
          uStack_64 = 1;
          if (iVar8 == 0) {
            iStack_68 = 0;
            local_50 = 0;
            iVar22 = 0;
          }
          else {
            local_140 = *(uint **)(param_1 + 0x3c8);
            if (*(uint **)(param_1 + 0x3c8) == (uint *)0x0) {
              local_140 = puVar2;
            }
            uVar16 = *local_140;
            if (uVar16 == 0) {
              iVar22 = iVar8 + 0x1e;
              if (-1 < iVar8 + -1) {
                iVar22 = iVar8 + -1;
              }
              uVar23 = 0;
              uVar12 = (ulonglong)(uint)(iVar22 >> 5);
              if (iVar22 >> 5 < 1) {
                uVar12 = uVar23;
              }
              iStack_68 = (int)uVar12 + 1;
              local_148 = (ulonglong)local_148._4_4_ << 0x20;
              do {
                local_50 = (int)uVar12 * 0x20 + 0x20;
                iVar22 = iVar8;
                if (uVar12 == uVar23) goto LAB_140232056;
                local_148 = CONCAT44(local_148._4_4_,(int)local_148 + 0x20);
                uVar16 = local_140[uVar23 + 1];
                uVar23 = uVar23 + 1;
              } while (uVar16 == 0);
              iStack_68 = (int)uVar23;
            }
            else {
              local_148 = (ulonglong)local_148._4_4_ << 0x20;
              iStack_68 = 0;
            }
            uStack_64 = -uVar16 & uVar16;
            uVar12 = (ulonglong)uStack_64 * 2 + 1;
            lVar24 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar24 == 0; lVar24 = lVar24 + -1) {
              }
            }
            iVar22 = ((int)local_148 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
            local_50 = (int)local_148;
            if (iVar8 <= iVar22) {
              iVar22 = iVar8;
            }
          }
LAB_140232056:
          local_58 = (void *)CONCAT44(iVar22,0xffffffff);
          local_70 = plVar17;
          local_60 = puVar2;
          if (iVar22 == iVar8) goto LAB_140232095;
          local_130 = (longlong *)((ulonglong)uVar13 * 0x128 + *(longlong *)(lVar10 + 8) + 0xf0);
          lVar24 = 0;
          do {
            local_148 = *local_70;
            local_140 = (uint *)((longlong)iVar22 * 5);
            plVar4 = (longlong *)*local_130;
            if (plVar4 == (longlong *)0x0) {
              local_c0 = (longlong *)CONCAT44(local_c0._4_4_,0xffff);
            }
            else {
              (**(code **)(*plVar4 + 0x58))
                        (plVar4,&local_c0,*(undefined4 *)(local_148 + (longlong)iVar22 * 0x14));
            }
            uVar16 = (uint)local_c0 & 0xffff;
            if ((int)uVar16 < *(int *)(lVar10 + 0x30)) {
              lVar19 = *(longlong *)(lVar10 + 0x28);
              if (*(longlong *)(lVar10 + 0x28) == 0) {
                lVar19 = lVar10 + 0x18;
              }
              if (((*(uint *)(lVar19 + (ulonglong)(uVar16 >> 5) * 4) >> ((uint)local_c0 & 0x1f) & 1)
                   != 0) &&
                 ((uint)local_c0 >> 0x10 ==
                  (uint)*(ushort *)(*(longlong *)(lVar10 + 8) + 0x11c + (ulonglong)uVar16 * 0x128)))
              {
                lVar24 = local_148 + (longlong)local_140 * 4;
                iVar8 = *(int *)(lVar24 + 8);
                if (iVar8 == 0) goto LAB_140232095;
                uVar16 = *(uint *)(lVar24 + 4);
                lVar24 = 0;
                if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c9647dc)) {
                  plVar17 = (longlong *)
                            ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
                  if ((plVar17 == (longlong *)0x0) ||
                     (((int)plVar17[2] != iVar8 || ((*(uint *)(plVar17 + 1) & 0x10200000) != 0))))
                  goto LAB_140232095;
                  lVar24 = *plVar17;
                }
                break;
              }
            }
            local_58 = (void *)CONCAT44(local_58._4_4_,(uint)local_58 & ~uStack_64);
            FUN_1449c0562(&iStack_68);
            iVar22 = local_58._4_4_;
          } while (((local_58._4_4_ != iVar8) || (local_60 != puVar2)) || (local_70 != plVar17));
        }
        plVar17 = (longlong *)CONCAT44(uStack_8c,local_90);
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar17 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
        }
      }
      if (plVar18 != (longlong *)0x0) {
        LOCK();
        plVar17 = plVar18 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar1 = (int *)((longlong)plVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
      if (lVar24 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x70);
        local_128 = (longlong *)0x0;
        uStack_120 = (uint *)0x0;
        FUN_1400bbfc4(&local_70,lVar24);
        pvVar5 = local_58;
        puVar2 = local_60;
        local_128 = local_70;
        uStack_120 = (uint *)CONCAT44(uStack_64,iStack_68);
        iVar8 = (uint)local_58;
        cVar7 = (*(code *)PTR_FUN_14c758760)();
        uVar16 = *(uint *)(lVar24 + 0xc);
        if (cVar7 == '\0') {
LAB_14023224e:
          if ((int)uVar16 < DAT_14c9647dc) {
            lVar24 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
          }
          else {
            lVar24 = 0;
          }
          uVar13 = *(uint *)(lVar24 + 0x10);
          if (*(uint *)(lVar24 + 0x10) == 0) {
            LOCK();
            iVar22 = DAT_14c964868 + 1;
            UNLOCK();
            uVar15 = DAT_14c964868 + 1;
            bVar26 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar22;
            if (bVar26) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar15);
            }
            LOCK();
            uVar13 = *(uint *)(lVar24 + 0x10);
            bVar26 = uVar13 == 0;
            if (bVar26) {
              *(uint *)(lVar24 + 0x10) = uVar15;
              uVar13 = 0;
            }
            UNLOCK();
            if (bVar26) {
              uVar13 = uVar15;
            }
          }
          uVar12 = (ulonglong)uVar13;
          uVar13 = uVar16;
        }
        else {
          uVar13 = 0;
          if ((int)uVar16 < DAT_14c9647dc) {
            lVar24 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
          }
          else {
            lVar24 = 0;
          }
          uVar12 = 0;
          if ((*(uint *)(lVar24 + 8) & 0x8400000) == 0) goto LAB_14023224e;
        }
        local_110 = (longlong *)((ulonglong)uVar13 | uVar12 << 0x20);
        local_108 = (undefined4)local_128;
        uStack_104 = local_128._4_4_;
        uStack_100 = (undefined4)uStack_120;
        uStack_fc = uStack_120._4_4_;
        local_f8 = (void *)0x0;
        local_f0 = iVar8;
        if (iVar8 == 0) {
          local_ec = 0;
          local_e0 = local_128;
          uStack_d8 = uStack_120;
          local_c8 = 0;
          local_e8 = local_110;
LAB_1402322e7:
          local_d0 = (void *)0x0;
          local_c4 = 0;
          local_a0 = 0;
          local_110 = local_e8;
          local_c0 = local_e8;
LAB_140232318:
          local_a8 = (undefined2 *)0x0;
          local_9c = 0;
          iVar8 = 0;
          local_e8 = local_c0;
          local_b8 = local_e0;
          puStack_b0 = uStack_d8;
        }
        else {
          FUN_1446dd670(&local_f8,(ulonglong)pvVar5 & 0xffffffff,0);
          memcpy(local_f8,puVar2,(longlong)iVar8 * 2);
          pvVar5 = local_f8;
          local_c8 = local_f0;
          lVar24 = (longlong)local_f0;
          local_e8 = local_110;
          local_e0 = (longlong *)CONCAT44(uStack_104,local_108);
          uStack_d8 = (uint *)CONCAT44(uStack_fc,uStack_100);
          local_d0 = (void *)0x0;
          if (lVar24 == 0) goto LAB_1402322e7;
          FUN_1446dd670(&local_d0,local_f0,0);
          memcpy(local_d0,pvVar5,lVar24 * 2);
          pvVar5 = local_d0;
          local_a0 = local_c8;
          lVar24 = (longlong)local_c8;
          local_c0 = local_e8;
          local_b8 = local_e0;
          puStack_b0 = uStack_d8;
          local_a8 = (undefined2 *)0x0;
          if (lVar24 == 0) goto LAB_140232318;
          FUN_1446dd670(&local_a8,local_c8,0);
          memcpy(local_a8,pvVar5,lVar24 * 2);
          iVar8 = local_a0;
        }
        puVar6 = puStack_b0;
        plVar18 = local_b8;
        uVar16 = 0;
        iVar22 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar22 = 0;
        }
        if (0 < iVar22) {
          puVar11 = &DAT_149dfb77a;
          if (iVar8 != 0) {
            puVar11 = local_a8;
          }
          lVar24 = 0;
          uVar12 = 0;
          do {
            uVar16 = ((uint)(ushort)puVar11[lVar24] +
                     (uint)(0x19 < (ushort)puVar11[lVar24] - 0x61) * 0x20) - 0x20;
            uVar13 = (uint)(uVar12 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar12 ^ uVar16) & 0xff) * 4);
            uVar16 = uVar13 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar16 >> 8 & 0xff) * 4)
            ;
            uVar12 = (ulonglong)uVar16;
            lVar24 = lVar24 + 1;
          } while (iVar22 != (int)lVar24);
        }
        if (local_a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (*(int *)(lVar10 + 0xa8) != *(int *)(lVar10 + 0xd4)) {
          uVar15 = (uint)((ulonglong)plVar18 >> 0x10);
          uVar14 = (uint)plVar18 & 0xffff;
          uVar13 = (uint)((ulonglong)puVar6 >> 0x10);
          uVar9 = (uint)puVar6 & 0xffff;
          uVar15 = (uVar14 >> 4) +
                   ((uint)plVar18 << 0x10 | uVar14) + (int)((ulonglong)plVar18 >> 0x20) +
                   (uVar15 << 0x13 | uVar15 & 0xffff);
          uVar15 = (uVar15 >> 2) + 0x9e3779b9 +
                   uVar15 * 0x40 +
                   (uVar9 >> 4) +
                   ((uint)puVar6 << 0x10 | uVar9) + (int)((ulonglong)puVar6 >> 0x20) +
                   (uVar13 << 0x13 | uVar13 & 0xffff) ^ uVar15;
          uVar9 = uVar15 >> 0xd ^ -uVar15;
          uVar13 = uVar9 << 8 ^ (-0x61c88647 - uVar15) - uVar9;
          uVar14 = uVar13 >> 0xd ^ (uVar15 - uVar9) - uVar13;
          uVar15 = uVar14 >> 0xc ^ (uVar9 - uVar13) - uVar14;
          uVar9 = uVar15 << 0x10 ^ (uVar13 - uVar14) - uVar15;
          uVar13 = uVar9 >> 5 ^ (uVar14 - uVar15) - uVar9;
          uVar14 = uVar13 >> 3 ^ (uVar15 - uVar9) - uVar13;
          uVar15 = uVar14 << 10 ^ (uVar9 - uVar13) - uVar14;
          uVar13 = uVar16 >> 0xd ^ (uVar15 >> 0xf ^ uVar13 - (uVar14 + uVar15)) - uVar16;
          uVar15 = uVar13 << 8 ^ (-0x61c88647 - uVar16) - uVar13;
          uVar16 = uVar15 >> 0xd ^ (uVar16 - uVar13) - uVar15;
          uVar9 = uVar16 >> 0xc ^ (uVar13 - uVar15) - uVar16;
          uVar13 = uVar9 << 0x10 ^ (uVar15 - uVar16) - uVar9;
          uVar15 = uVar13 >> 5 ^ (uVar16 - uVar9) - uVar13;
          uVar16 = uVar15 >> 3 ^ (uVar9 - uVar13) - uVar15;
          uVar13 = uVar16 << 10 ^ (uVar13 - uVar15) - uVar16;
          lVar24 = lVar10 + 0xd8;
          if (*(longlong *)(lVar10 + 0xe0) != 0) {
            lVar24 = *(longlong *)(lVar10 + 0xe0);
          }
          iVar8 = *(int *)(lVar24 + (ulonglong)
                                    (*(int *)(lVar10 + 0xe8) - 1U &
                                    (uVar13 >> 0xf ^ uVar15 - (uVar16 + uVar13))) * 4);
          if (iVar8 != -1) {
            do {
              pvVar5 = local_d0;
              local_70 = local_e8;
              iStack_68 = (int)local_e0;
              uStack_64 = local_e0._4_4_;
              local_60 = uStack_d8;
              local_58 = (void *)0x0;
              lVar24 = (longlong)local_c8;
              local_50 = local_c8;
              if (lVar24 == 0) {
                local_4c = 0;
              }
              else {
                FUN_1446dd670(&local_58,local_c8,0);
                memcpy(local_58,pvVar5,lVar24 * 2);
              }
              lVar24 = *(longlong *)(lVar10 + 0xa0);
              lVar25 = (longlong)iVar8 * 0x90;
              local_98 = *(longlong *)(lVar24 + lVar25);
              puVar3 = (undefined4 *)(lVar24 + 8 + lVar25);
              local_90 = *puVar3;
              uStack_8c = puVar3[1];
              uStack_88 = puVar3[2];
              uStack_84 = puVar3[3];
              local_80 = (void *)0x0;
              local_78 = *(int *)(lVar24 + 0x20 + lVar25);
              lVar19 = (longlong)local_78;
              pvVar5 = *(void **)(lVar24 + 0x18 + lVar25);
              if (lVar19 == 0) {
                local_74 = 0;
              }
              else {
                FUN_1446dd670(&local_80,local_78,0);
                memcpy(local_80,pvVar5,lVar19 * 2);
              }
              cVar7 = FUN_144a7afa6(&local_90,&iStack_68);
              if (local_80 != (void *)0x0) {
                FUN_1400020a8();
              }
              if (local_58 != (void *)0x0) {
                FUN_1400020a8();
              }
              if (cVar7 != '\0') {
                lVar25 = lVar25 + *(longlong *)(lVar10 + 0xa0);
                goto LAB_1402323ce;
              }
              iVar8 = *(int *)(*(longlong *)(lVar10 + 0xa0) + 0x88 + lVar25);
            } while (iVar8 != -1);
          }
        }
        lVar25 = 0;
LAB_1402323ce:
        if (local_d0 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_f8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (puVar2 != (uint *)0x0) {
          FUN_1400020a8(puVar2);
        }
        if ((lVar25 != 0) && (lVar24 = FUN_1489506dc(lVar25 + 0x28), lVar24 != 0)) {
          puVar20 = &DAT_14c846480;
          if (*(longlong *)(lVar24 + 0x1c8) != 0) {
            puVar20 = (undefined8 *)(*(longlong *)(lVar24 + 0x1c8) + 0x240);
          }
          puVar21 = (undefined8 *)(*local_138 + 0x30);
          for (lVar24 = 0xc; plVar18 = local_138, lVar24 != 0; lVar24 = lVar24 + -1) {
            *puVar21 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar21 = puVar21 + 1;
          }
          goto LAB_1402320ce;
        }
      }
    }
    plVar18 = (longlong *)(param_1 + 0x70);
LAB_1402320ce:
    lVar24 = *plVar18;
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar24;
}



// FUNCTION 140232b38 FUN_140232b38 body=85 status=ok
// SIG undefined FUN_140232b38(void)

undefined8 FUN_140232b38(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (plVar3 == (longlong *)0x0) {
      return 0;
    }
    if ((int)plVar3[2] != *(int *)(param_1 + 0x14)) {
      return 0;
    }
    if ((*(uint *)(plVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    if (*plVar3 == 0) {
      return 0;
    }
    uVar2 = *(undefined8 *)(*plVar3 + 0x548);
  }
  return uVar2;
}



// FUNCTION 140232b8e FUN_140232b8e body=176 status=ok
// SIG undefined FUN_140232b8e(void)

undefined8 * FUN_140232b8e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if ((((*(int *)(param_1 + 0x24) == 0) || (uVar3 = *(uint *)(param_1 + 0x20), (int)uVar3 < 0)) ||
      (DAT_14c9647dc <= (int)uVar3)) ||
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x24))) ||
      (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar4 = *plVar6, lVar4 == 0)))))) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  uVar5 = *(undefined8 *)(lVar4 + 0x5d8);
  plVar6 = *(longlong **)(lVar4 + 0x5e0);
  if (plVar6 == (longlong *)0x0) {
    *param_2 = uVar5;
    param_2[1] = 0;
    return param_2;
  }
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  *param_2 = uVar5;
  param_2[1] = plVar6;
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar6 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 != 0) {
    return param_2;
  }
  (**(code **)*plVar6)(plVar6);
  LOCK();
  piVar2 = (int *)((longlong)plVar6 + 0xc);
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (*piVar2 != 0) {
    return param_2;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
  return param_2;
}



// FUNCTION 140232c3e FUN_140232c3e body=446 status=ok
// SIG undefined FUN_140232c3e(void)

undefined1 *
FUN_140232c3e(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_1447262c2(param_4);
  if (lVar4 != 0) {
    lVar5 = FUN_140232dfe();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_140232d6a;
  }
  lVar4 = FUN_1400e8a68(param_4);
  if (lVar4 != 0) {
    uVar3 = FUN_140232fad();
    if ((((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(lVar4 + 0x78f0))) &&
        (lVar4 = (ulonglong)uVar3 * 0x48 + *(longlong *)(lVar4 + 0x78e8), lVar4 != 0)) &&
       ((*(longlong *)(lVar4 + 0x20) != 0 && (*(longlong **)(lVar4 + 0x28) != (longlong *)0x0)))) {
      lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x28) + 8))();
      if (lVar4 != 0) {
        lVar5 = FUN_140232dfe();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
LAB_140232d6a:
          *(undefined8 *)(param_2 + 0x30) = 0;
          *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
          *param_2 = 0;
          *(undefined4 *)(param_2 + 0x28) = 0;
          FUN_1456bb102(param_2,lVar4);
          if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return param_2;
        }
      }
    }
  }
  FUN_140232ee4(param_4,&local_30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  if (local_30 != 0) {
    *(undefined4 *)(param_2 + 0x38) = 1;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    FUN_1408403ca(param_2,&local_30);
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
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 140232dfe FUN_140232dfe body=228 status=ok
// SIG undefined FUN_140232dfe(void)

longlong FUN_140232dfe(void)

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
  if (DAT_14cbbfd48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1418e9fba;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146522c26;
    local_38 = &LAB_148cb06b7;
    local_40 = &LAB_145a235df;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xb30;
    FUN_14081cfa3(L"/Script/OakGame",L"RepairKit",&DAT_14cbbfd48,FUN_1466147c8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbfd48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140232ee4 FUN_140232ee4 body=143 status=ok
// SIG undefined FUN_140232ee4(void)

longlong * FUN_140232ee4(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  
  if ((*param_1 == '\x03') && (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0))
  {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_140232ef4;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 8);
    bVar9 = true;
    if (lVar4 != 0) {
      uVar8 = FUN_140232f74();
      cVar6 = FUN_1448093f4(lVar4,uVar8);
      if (cVar6 != '\0') {
        *param_2 = lVar4;
        param_2[1] = (longlong)plVar3;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        bVar9 = false;
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
    if (!bVar9) {
      return param_2;
    }
  }
LAB_140232ef4:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140232f74 FUN_140232f74 body=57 status=ok
// SIG undefined FUN_140232f74(void)

void FUN_140232f74(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a5a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a5a8 = FUN_140002ddd(FUN_14652672e,uVar1,L"InventoryStatsContainer");
  }
  return;
}



// FUNCTION 140232fad FUN_140232fad body=703 status=ok
// SIG undefined FUN_140232fad(void)

uint FUN_140232fad(void)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbcbdf0 == (longlong *)0x0) {
    memset(&DAT_14cbcbdf8,0,0x810);
    FUN_1461632d4(&DAT_14cbcbdf8);
    DAT_14cbcbdf0 = (longlong *)&DAT_14cbcbdf8;
  }
  plVar1 = DAT_14cbcbdf0;
  plVar7 = DAT_14cbcbdf0 + 1;
  cVar2 = (char)DAT_14cbcbdf0[2];
  plVar8 = plVar7;
  if (cVar2 == '\0') {
LAB_140232fe8:
    if (*plVar8 == 0) goto LAB_140233134;
    plVar8 = plVar7;
    if (cVar2 != '\0') {
      if (cVar2 == '\x02') {
        plVar8 = (longlong *)(*plVar7 + 0x30);
        goto LAB_140232ffd;
      }
LAB_1402330c9:
      if (((DAT_14c9a1ab0 == 0) || (*plVar7 == 0)) ||
         (plVar7 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar7 + 0x28)),
         plVar7 == (longlong *)0x0)) goto LAB_140233015;
      puVar10 = &DAT_14c9485f0;
      if ((undefined4 *)plVar1[1] != (undefined4 *)0x0) {
        puVar10 = (undefined4 *)plVar1[1];
      }
      cVar2 = (**(code **)(*plVar7 + 0x2a0))(plVar7,plVar1,puVar10);
LAB_140233119:
      if (cVar2 == '\0') goto LAB_140233015;
      goto LAB_14023317e;
    }
LAB_140232ffd:
    if (*plVar8 == 0) goto LAB_1402330c9;
    if ((((int)DAT_14cbcbdf0[3] != *(int *)(*plVar8 + 0x44)) && (DAT_14c9a1ab0 != 0)) &&
       ((*plVar7 != 0 &&
        (plVar7 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar7 + 0x28)),
        plVar7 != (longlong *)0x0)))) {
      cVar2 = (**(code **)(*plVar7 + 0x2a8))(plVar7,plVar1);
      goto LAB_140233119;
    }
  }
  else {
    if (cVar2 == '\x02') {
      plVar8 = (longlong *)(*plVar7 + 0x30);
      goto LAB_140232fe8;
    }
LAB_140233134:
    lVar4 = FUN_140162146();
    if (lVar4 != 0) {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      FUN_1446ddda2(&local_58,"def_globals_oak_inventory",0);
      FUN_140024ada(&local_58,plVar1);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
LAB_14023317e:
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
LAB_140233015:
  lVar4 = plVar1[5];
  if (lVar4 == 0) {
    uVar5 = FUN_145d8612a();
    lVar4 = FUN_14477b664(uVar5);
    plVar1[5] = lVar4;
  }
  lVar6 = plVar1[6];
  if (lVar6 == 0) {
    uVar9 = 0xffffffff;
    if ((lVar4 == 0) || (plVar1[4] == 0)) goto LAB_140233072;
    plVar7 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar2 == '\0')) {
      plVar1[6] = 0;
      goto LAB_140233072;
    }
    uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
    lVar6 = FUN_144aff482(uVar5,plVar1 + 4);
    plVar1[6] = lVar6;
    if (lVar6 == 0) goto LAB_140233072;
  }
  uVar9 = 0xffffffff;
  if ((longlong)*(int *)(lVar6 + 0x20) != 0) {
    plVar7 = *(longlong **)(lVar6 + 0x18);
    plVar8 = plVar7 + (longlong)*(int *)(lVar6 + 0x20) * 7;
    uVar3 = 0;
    do {
      if (plVar1[0x12] == *plVar7) {
        uVar9 = -(uint)((int)plVar7[1] == 0) | uVar3;
        break;
      }
      uVar3 = uVar3 + (int)plVar7[1];
      plVar7 = plVar7 + 7;
    } while (plVar7 != plVar8);
  }
LAB_140233072:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14023326e FUN_14023326e body=2219 status=ok
// SIG undefined FUN_14023326e(void)

undefined8
FUN_14023326e(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,int param_5
             )

{
  longlong *plVar1;
  void *_Src;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  longlong local_c8 [2];
  undefined1 local_b8 [16];
  void *local_a8;
  undefined8 uStack_a0;
  void *local_98;
  int local_90;
  int local_8c;
  longlong *local_88;
  undefined4 local_80;
  void *local_78;
  int local_70;
  longlong local_68;
  ulonglong uStack_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140056680(&local_78);
  if (param_5 == 1) {
    FUN_14020fad6(&local_78);
    uVar2 = 1000;
    uVar3 = 8;
  }
  else {
    uVar2 = 0x400;
    uVar3 = 0;
  }
  if (param_2 < 1000) {
    FUN_140e6da68(&local_88,param_2,param_3,param_4);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    local_48 = local_88;
    local_88 = (longlong *)0x0;
    local_40 = local_80;
    FUN_140e82300();
    plVar1 = local_88;
    if (local_88 != DAT_14c844840) {
      local_88 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    local_80 = 0;
    FUN_140056680(&local_98,L"Number");
    FUN_140233eec(&local_68,&local_98,&local_58);
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      local_48 = (longlong *)0x0;
      local_40 = 0;
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    FUN_140056680(&local_98,&DAT_149e060e8);
    FUN_140233b1a(&local_88,&local_98);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    local_48 = local_88;
    local_88 = (longlong *)0x0;
    local_40 = local_80;
    FUN_140e82300();
    plVar1 = local_88;
    if (local_88 != DAT_14c844840) {
      local_88 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    local_80 = 0;
    FUN_140056680(&local_a8,L"Unit");
    FUN_140233eec(&local_68,&local_a8,&local_58);
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      local_48 = (longlong *)0x0;
      local_40 = 0;
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_58 = L"ComputerMemoryFormatting";
    local_50 = 0x18;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = L"Internationalization";
    local_50 = 0x14;
    FUN_1446e940c(&local_a8,&local_58);
    local_58 = L"{Number} {Unit}";
    local_50 = 0xf;
    FUN_140208c1e(&local_88,&local_a8,&local_98,&local_58);
    puVar5 = local_b8;
  }
  else {
    for (; 999999 < param_2; param_2 = param_2 / uVar2) {
      uVar3 = uVar3 + 1;
    }
    FUN_1402347c4(&local_88,(double)(longlong)param_2 / (double)(int)uVar2,param_3,param_4);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    local_48 = local_88;
    local_88 = (longlong *)0x0;
    local_40 = local_80;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    plVar1 = local_88;
    if (local_88 != DAT_14c844840) {
      local_88 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    local_80 = 0;
    FUN_140056680(&local_98,L"Number");
    FUN_140233eec(&local_68,&local_98,&local_58);
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      local_48 = (longlong *)0x0;
      local_40 = 0;
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    FUN_14006620a(&local_a8,L"KMGTPEZYkMGTPEZY" + uVar3,1);
    _Src = local_78;
    local_90 = (int)uStack_a0;
    if ((int)uStack_a0 < 2) {
      local_98 = (void *)0x0;
      local_90 = local_70;
      if ((longlong)local_70 == 0) {
        local_8c = 0;
      }
      else {
        FUN_1446dd670(&local_98,local_70,0);
        memcpy(local_98,_Src,(longlong)local_70 * 2);
      }
    }
    else {
      iVar4 = local_70 + -1;
      if (local_70 == 0) {
        iVar4 = 0;
      }
      local_98 = local_a8;
      local_8c = uStack_a0._4_4_;
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      if (iVar4 + local_90 < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar4);
      }
      if (local_8c < iVar4 + local_90) {
        FUN_1446f8c06(&local_98);
      }
      FUN_1400020e8(&local_98,local_78,iVar4);
    }
    FUN_140233b1a(&local_88,&local_98);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    local_48 = local_88;
    local_88 = (longlong *)0x0;
    local_40 = local_80;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
    plVar1 = local_88;
    if (local_88 != DAT_14c844840) {
      local_88 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
    local_80 = 0;
    FUN_140056680(local_c8,L"Unit");
    FUN_140233eec(&local_68,local_c8,&local_58);
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x10))();
      local_48 = (longlong *)0x0;
      local_40 = 0;
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_58 = L"ComputerMemoryFormatting";
    local_50 = 0x18;
    FUN_1446e940c(&local_98,&local_58);
    local_58 = L"Internationalization";
    local_50 = 0x14;
    FUN_1446e940c(&local_a8,&local_58);
    local_58 = L"{Number} {Unit}";
    local_50 = 0xf;
    FUN_140208c1e(&local_88,&local_a8,&local_98,&local_58);
    puVar5 = local_d8;
  }
  FUN_14023409e(puVar5,&local_88,1);
  FUN_140233c04(param_1,puVar5,&local_68);
  if (local_88 != (longlong *)0x0) {
    (**(code **)(*local_88 + 0x10))();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14010f8af(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140233b1a FUN_140233b1a body=234 status=ok
// SIG undefined FUN_140233b1a(void)

undefined8 * FUN_140233b1a(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  
  if (*(int *)(param_2 + 8) < 2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844850) {
      FUN_144b3d300(&DAT_14c844850);
      if (DAT_14c844850 == -1) {
        DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[1] = 0;
        *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
        DAT_14c844840[2] = -1;
        DAT_14c844840[3] = 0;
        DAT_14c844840[4] = 0;
        DAT_14c844840[5] = 0;
        if (DAT_14c844840 != (longlong *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
      }
    }
    plVar1 = DAT_14c844840;
    *param_1 = DAT_14c844840;
    puVar2 = &DAT_14c844848;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
  }
  else {
    FUN_140009cf2(param_1);
    puVar2 = (uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = *puVar2 | 0x12;
  return param_1;
}



// FUNCTION 140233c04 FUN_140233c04 body=165 status=ok
// SIG undefined FUN_140233c04(void)

undefined8 FUN_140233c04(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140233caa(&local_30,param_3);
  local_38 = 0;
  FUN_140233db2(param_1,param_2,&local_30,0);
  FUN_14010f8af(local_30,local_28);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140233caa FUN_140233caa body=77 status=ok
// SIG undefined FUN_140233caa(void)

undefined8 * FUN_140233caa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140234488(param_1,iVar1,0);
    FUN_140233cf7(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 140233cf7 FUN_140233cf7 body=52 status=ok
// SIG undefined FUN_140233cf7(void)

void FUN_140233cf7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140233d2c(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 140233d2c FUN_140233d2c body=134 status=ok
// SIG undefined FUN_140233d2c(void)

undefined8 * FUN_140233d2c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
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
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  plVar2 = (longlong *)param_2[4];
  if (plVar2 == (longlong *)0x0) {
    param_1[4] = 0;
    uVar5 = 0;
  }
  else {
    param_1[4] = plVar2;
    (**(code **)(*plVar2 + 8))();
    uVar5 = *(undefined4 *)(param_2 + 5);
  }
  *(undefined4 *)(param_1 + 5) = uVar5;
  return param_1;
}



// FUNCTION 140233db2 FUN_140233db2 body=167 status=ok
// SIG undefined FUN_140233db2(void)

longlong *
FUN_140233db2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_5;
  FUN_140234686(local_40);
  lVar1 = FUN_14001cc68(0x40,0x10);
  FUN_140233e5a(lVar1,local_40,param_2,param_3);
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar1;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140233e5a FUN_140233e5a body=146 status=ok
// SIG undefined FUN_140233e5a(void)

undefined8 *
FUN_140233e5a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149e193d0;
  param_1[2] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140008de0(param_1);
  *param_1 = &PTR_FUN_149e19490;
  param_1[4] = *param_3;
  lVar1 = param_3[1];
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[6] = 0;
  param_1[6] = *param_4;
  *param_4 = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_4 + 1);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  return param_1;
}



// FUNCTION 140233eec FUN_140233eec body=340 status=ok
// SIG undefined FUN_140233eec(void)

longlong FUN_140233eec(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  uint uVar7;
  wchar_t *_Str2;
  uint uVar8;
  longlong lVar9;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar9 = *param_1;
  uVar8 = 0;
  if (0 < (int)uVar2) {
    _Str2 = L"";
    if (*(int *)(param_2 + 1) != 0) {
      _Str2 = (wchar_t *)*param_2;
    }
    uVar8 = 0;
    uVar7 = uVar2;
    do {
      uVar1 = (uVar7 >> 1) + uVar8;
      lVar5 = (ulonglong)uVar1 * 0x30;
      pwVar6 = L"";
      if (*(int *)(lVar9 + 8 + lVar5) != 0) {
        pwVar6 = *(wchar_t **)(lVar9 + lVar5);
      }
      iVar4 = wcscmp(pwVar6,_Str2);
      if (iVar4 < 0) {
        uVar8 = uVar1 + (uVar7 & 1);
      }
      bVar3 = 1 < uVar7;
      uVar7 = uVar7 >> 1;
    } while (bVar3);
    if ((int)uVar8 < (int)uVar2) {
      lVar5 = (ulonglong)uVar8 * 0x30;
      if (*(int *)(lVar9 + 8 + lVar5) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = *(wchar_t **)(lVar9 + lVar5);
      }
      iVar4 = wcscmp(_Str2,pwVar6);
      if (-1 < iVar4) {
        lVar5 = lVar9 + lVar5;
        FUN_14010f8af(lVar5,1);
        goto LAB_140233fd4;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_140234572(param_1,uVar2);
    lVar9 = *param_1;
  }
  lVar5 = (ulonglong)uVar8 * 0x30;
  memmove((void *)(lVar9 + lVar5 + 0x30),(void *)(lVar9 + lVar5),(ulonglong)(uVar2 - uVar8) * 0x30);
  lVar5 = lVar5 + *param_1;
LAB_140233fd4:
  FUN_140234040(lVar5,param_2,param_3);
  return lVar5 + 0x10;
}



// FUNCTION 140234040 FUN_140234040 body=94 status=ok
// SIG undefined FUN_140234040(void)

undefined8 * FUN_140234040(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 2) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  if (*(longlong *)(param_3 + 4) == 0) {
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  else {
    FUN_14023423e(param_1 + 4,param_3 + 4);
  }
  return param_1;
}



// FUNCTION 14023409e FUN_14023409e body=272 status=ok
// SIG undefined FUN_14023409e(void)

undefined8 * FUN_14023409e(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *plStack_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140234344(&local_50);
  local_60 = (longlong *)*param_2;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 8))();
  }
  local_58 = (undefined4)param_2[1];
  puVar3 = (undefined8 *)FUN_14001cc68(0x98,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_149e191c0;
  local_40 = local_50;
  local_38 = plStack_48;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_48 + 1) = (int)plStack_48[1] + 1;
    UNLOCK();
  }
  FUN_1402341b0(puVar3 + 2,&local_60,param_3,&local_40);
  *param_1 = puVar3 + 2;
  param_1[1] = puVar3;
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x10))();
  }
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar2 = (int *)((longlong)plStack_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402341b0 FUN_1402341b0 body=141 status=ok
// SIG undefined FUN_1402341b0(void)

undefined1 *
FUN_1402341b0(undefined1 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = 0;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 8) = *param_4;
  lVar3 = param_4[1];
  *(longlong *)(param_1 + 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  FUN_14023423e(param_1 + 0x18);
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_140234ee4(param_1);
  plVar4 = (longlong *)param_4[1];
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
  return param_1;
}



// FUNCTION 14023423e FUN_14023423e body=261 status=ok
// SIG undefined FUN_14023423e(void)

longlong * FUN_14023423e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar2 = DAT_14c844840;
  plVar1 = (longlong *)*param_2;
  if (plVar1 != DAT_14c844840) {
    *param_2 = (longlong)DAT_14c844840;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  *(undefined4 *)(param_2 + 1) = 0;
  return param_1;
}



// FUNCTION 140234344 FUN_140234344 body=323 status=ok
// SIG undefined FUN_140234344(void)

longlong * FUN_140234344(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844988) {
    FUN_144b3d300(&DAT_14c844988);
    if (DAT_14c844988 == -1) {
      plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar3[1] = (longlong)&DAT_100000001;
      *plVar3 = (longlong)&PTR_FUN_149e19260;
      plVar1 = plVar3 + 2;
      FUN_1456e92ee(plVar1);
      local_38 = plVar1;
      local_30 = plVar3;
      FUN_1456e924e(&local_38,plVar1);
      plVar1 = local_30;
      DAT_14c844978 = local_38;
      DAT_14c844980 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_30 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
      atexit(FUN_142760d99);
      _Init_thread_footer(&DAT_14c844988);
    }
  }
  *param_1 = (longlong)DAT_14c844978;
  plVar1 = DAT_14c844980;
  param_1[1] = (longlong)DAT_14c844980;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar1 + 1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140234488 FUN_140234488 body=233 status=ok
// SIG undefined FUN_140234488(void)

void FUN_140234488(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140234572 FUN_140234572 body=275 status=ok
// SIG undefined FUN_140234572(void)

void FUN_140234572(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
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



// FUNCTION 140234686 FUN_140234686 body=316 status=ok
// SIG undefined FUN_140234686(void)

undefined8
FUN_140234686(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined1 param_4,
             undefined1 param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  code *local_68;
  longlong **local_60;
  int local_58;
  undefined1 local_54;
  undefined1 local_53;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((DAT_14c846b14 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83f0fc)) {
    FUN_144b3d300(&DAT_14c83f0fc);
    if (DAT_14c83f0fc == -1) {
      uVar3 = FUN_14118da1c();
      bVar1 = FUN_14054d46e(uVar3,L"nothreading");
      DAT_14c83f0f8 = bVar1 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
  }
  if ((longlong)(int)param_3[1] == 0) {
    iVar4 = 0;
  }
  else {
    lVar5 = (longlong)(int)param_3[1] * 0x30;
    lVar6 = *param_3 + 0x10;
    iVar4 = 0;
    do {
      iVar2 = FUN_14010c306(lVar6);
      iVar4 = iVar4 + iVar2;
      lVar6 = lVar6 + 0x30;
      lVar5 = lVar5 + -0x30;
    } while (lVar5 != 0);
  }
  local_60 = &local_50;
  local_68 = FUN_142762696;
  local_53 = param_5;
  local_58 = iVar4;
  local_54 = param_4;
  local_50 = param_3;
  FUN_14010c352(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402347c4 FUN_1402347c4 body=513 status=ok
// SIG undefined FUN_1402347c4(void)

longlong * FUN_1402347c4(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_88 [3];
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844be8) {
    FUN_144b3d300(&DAT_14c844be8);
    if (DAT_14c844be8 == -1) {
      FUN_1456bade4(&DAT_14c844b48);
      DAT_14c844be0 = &DAT_14c844b48;
      atexit(FUN_142761918);
      _Init_thread_footer(&DAT_14c844be8);
    }
  }
  puVar5 = (undefined8 *)*param_4;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(DAT_14c844be0 + 0x38);
    plVar3 = *(longlong **)(DAT_14c844be0 + 0x40);
    if (plVar3 != (longlong *)0x0) {
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
  }
  lVar4 = (**(code **)(*(longlong *)*puVar5 + 0x80))();
  puVar5 = (undefined8 *)(lVar4 + 0x8c);
  if (param_3 != (undefined8 *)0x0) {
    puVar5 = param_3;
  }
  local_88[0] = 0;
  local_88[1] = 0;
  local_58 = puVar5[2];
  local_68 = *puVar5;
  uStack_60 = puVar5[1];
  FUN_140235a22((int)param_2,lVar4);
  lVar4 = FUN_14001cc68(0x70,0x10);
  local_88[2] = *param_4;
  local_70 = param_4[1];
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  local_68 = CONCAT44(local_68._4_4_,3);
  local_58 = 0;
  local_50 = 0;
  local_98 = local_88 + 2;
  uStack_60 = param_2;
  FUN_1402349c6(lVar4,local_88,&local_68,param_3);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402349c6 FUN_1402349c6 body=277 status=ok
// SIG undefined FUN_1402349c6(void)

undefined8 *
FUN_1402349c6(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_5;
  local_60 = param_5[1];
  *param_5 = 0;
  param_5[1] = 0;
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  if (*(longlong *)(param_3 + 4) == 0) {
    local_48 = 0;
    local_40 = 0;
  }
  else {
    FUN_14023423e(&local_48,param_3 + 4);
  }
  local_78 = &local_68;
  FUN_140234adc(param_1,param_2,&local_58,param_4);
  *param_1 = &PTR_FUN_149e19790;
  plVar3 = *(longlong **)(param_3 + 4);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
    *(undefined8 *)(param_3 + 4) = 0;
    param_3[6] = 0;
  }
  plVar3 = (longlong *)param_5[1];
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140234adc FUN_140234adc body=291 status=ok
// SIG undefined FUN_140234adc(void)

undefined8 *
FUN_140234adc(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149e193d0;
  param_1[2] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140008de0();
  *param_1 = &PTR_LAB_149e196d0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(param_1 + 4) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  if (*(longlong *)(param_3 + 4) == 0) {
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  else {
    FUN_14023423e(param_1 + 6,param_3 + 4);
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = *param_5;
  param_1[0xd] = param_5[1];
  *param_5 = 0;
  param_5[1] = 0;
  if (param_1 + 8 != param_4 && param_4 != (undefined8 *)0x0) {
    param_1[10] = param_4[2];
    uVar4 = *(undefined4 *)((longlong)param_4 + 4);
    uVar5 = *(undefined4 *)(param_4 + 1);
    uVar6 = *(undefined4 *)((longlong)param_4 + 0xc);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)param_4;
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
    *(undefined4 *)(param_1 + 9) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar6;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  plVar3 = *(longlong **)(param_3 + 4);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))();
    *(undefined8 *)(param_3 + 4) = 0;
    param_3[6] = 0;
  }
  plVar3 = (longlong *)param_5[1];
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



// FUNCTION 140234c00 FUN_140234c00 body=738 status=ok
// SIG undefined FUN_140234c00(void)

longlong FUN_140234c00(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8 [42];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = *(longlong *)(param_1 + 0x1a8);
  if (lVar4 != 0) goto LAB_140234c30;
  local_e8[0] = 0;
  lVar4 = FUN_140236d20(param_1 + 8);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149e18e90;
  plVar5[2] = lVar4;
  plVar7 = plVar5;
  if (lVar4 == 0) {
    FUN_14275eb3a();
    lVar4 = FUN_140236d20(&DAT_14c844a10,local_e8);
    plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149e18e90;
    plVar6[2] = lVar4;
    if (plVar6 == plVar5) {
      if (plVar5 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar3 = *piVar1;
          UNLOCK();
          plVar2 = plVar6;
joined_r0x000140234eae:
          plVar7 = plVar5;
          if (iVar3 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
      }
    }
    else {
      plVar7 = plVar6;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar3 = *piVar1;
          UNLOCK();
          plVar2 = plVar5;
          plVar5 = plVar6;
          goto joined_r0x000140234eae;
        }
      }
    }
  }
  FUN_140236d9a(local_e8,param_1 + 8,lVar4);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b8));
  if (*(longlong *)(param_1 + 0x1a8) == 0) {
    plVar5 = (longlong *)FUN_14001cc68(0xb8,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_149e18eb0;
    FUN_1456e9496(plVar5 + 2,local_e8);
    if (plVar5 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1a8) = 0x10;
      plVar6 = *(longlong **)(param_1 + 0x1b0);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x1b0) = 0;
LAB_140234e10:
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        if (plVar5 != (longlong *)0x0) goto LAB_140234d47;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x1a8) = plVar5 + 2;
      plVar6 = *(longlong **)(param_1 + 0x1b0);
      if (plVar5 == plVar6) {
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      else {
        *(longlong **)(param_1 + 0x1b0) = plVar5;
        if (plVar6 != (longlong *)0x0) goto LAB_140234e10;
      }
LAB_140234d47:
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1b8));
  lVar4 = *(longlong *)(param_1 + 0x1a8);
  FUN_1456e91d4(local_e8);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
LAB_140234c30:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140234ee4 FUN_140234ee4 body=2877 status=ok
// SIG undefined FUN_140234ee4(void)

void FUN_140234ee4(char *param_1)

{
  uint uVar1;
  longlong *plVar2;
  char *pcVar3;
  wchar_t **ppwVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  wchar_t *pwVar12;
  int *piVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined8 uVar19;
  char *pcVar20;
  undefined2 *puVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  wchar_t *pwVar25;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  longlong local_150;
  undefined1 local_148 [4];
  undefined1 local_144 [4];
  longlong *local_140 [2];
  undefined8 local_130;
  longlong *local_128;
  wchar_t *local_120;
  undefined4 local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined8 local_100;
  longlong *local_f8;
  wchar_t **local_f0;
  undefined1 *local_e8;
  wchar_t *local_e0;
  undefined4 local_d8;
  byte local_d0;
  wchar_t *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  wchar_t *local_a8;
  int *piStack_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar2 = (longlong *)(param_1 + 0x40);
  iVar18 = *(int *)(param_1 + 0x4c);
  FUN_1449079f2(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  param_1[0x48] = '\0';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  if ((iVar18 < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
    FUN_141151e80(plVar2,0);
  }
  if (*param_1 == '\0') {
    uVar19 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))();
    FUN_1447a1fc0(uVar19);
    pcVar20 = (char *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
    pcVar3 = param_1 + 0x30;
    if (pcVar3 != pcVar20) {
      iVar18 = *(int *)(pcVar20 + 8);
      pvVar11 = *(void **)pcVar20;
      *(int *)(param_1 + 0x38) = iVar18;
      if (iVar18 == 0 && *(int *)(param_1 + 0x3c) == 0) {
        param_1[0x3c] = '\0';
        param_1[0x3d] = '\0';
        param_1[0x3e] = '\0';
        param_1[0x3f] = '\0';
      }
      else {
        FUN_1446dd670(pcVar3,iVar18);
        if (iVar18 != 0) {
          memcpy(*(void **)pcVar3,pvVar11,(longlong)iVar18 * 2);
        }
      }
    }
    FUN_1409d10d4(&local_a8,param_1 + 0x18);
    ppwVar4 = (wchar_t **)(param_1 + 0x50);
    if (ppwVar4 != &local_a8) {
      pwVar12 = *ppwVar4;
      *ppwVar4 = local_a8;
      local_a8 = (wchar_t *)0x0;
      if (pwVar12 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)pwVar12 + 0x10))();
      }
      piVar13 = *(int **)(param_1 + 0x58);
      *(int **)(param_1 + 0x58) = piStack_a0;
      piStack_a0 = (int *)0x0;
      if (piVar13 != (int *)0x0) {
        LOCK();
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (*piVar13 == 0) {
          if (*(longlong *)(piVar13 + 2) != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(piVar13);
        }
      }
    }
    piVar13 = piStack_a0;
    *(longlong **)(param_1 + 0x60) = local_98;
    if (piStack_a0 != (int *)0x0) {
      LOCK();
      *piStack_a0 = *piStack_a0 + -1;
      UNLOCK();
      if (*piStack_a0 == 0) {
        if (*(longlong *)(piStack_a0 + 2) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(piVar13);
      }
    }
    if (local_a8 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_a8 + 0x10))();
    }
  }
  param_1[0x68] = '\x01';
  param_1[0x69] = '\0';
  param_1[0x6a] = '\0';
  param_1[0x6b] = '\0';
  param_1[0x80] = '\0';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  param_1[0x84] = '\x01';
  param_1[0x85] = '\0';
  param_1[0x86] = '\0';
  param_1[0x87] = '\0';
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar21 = &DAT_149dfb77a;
  }
  else {
    puVar21 = *(undefined2 **)(param_1 + 0x30);
  }
  FUN_1449078e7(&local_c8,puVar21,*(longlong *)(param_1 + 8) + 0x18);
  pwVar12 = local_c8;
  if ((&DAT_149e19eee)[local_b8 & 0xff] == '\x01') {
    local_c8 = (wchar_t *)0x0;
    uVar15 = (undefined4)uStack_c0;
    uVar16 = uStack_c0._4_4_;
    uStack_c0 = (int *)0x0;
    (*(code *)(&PTR_FUN_149e19f00)[local_b8 & 0xff])(&local_c8);
    local_b8 = CONCAT71(local_b8._1_7_,2);
    FUN_1449079f2(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(wchar_t **)(param_1 + 0x40) = pwVar12;
    *(undefined4 *)(param_1 + 0x48) = uVar15;
    *(undefined4 *)(param_1 + 0x4c) = uVar16;
    uVar22 = 0;
    FUN_1449079f2(0,0);
    iVar18 = *(int *)(param_1 + 0x48);
    if (0 < iVar18) {
      do {
        lVar14 = *plVar2;
        lVar23 = (longlong)(int)uVar22 * 0x60;
        lVar24 = lVar14 + lVar23;
        iVar7 = *(int *)(lVar14 + lVar23);
        iVar8 = *(int *)(lVar14 + 4 + lVar23);
        iVar9 = *(int *)(lVar14 + 8 + lVar23);
        iVar10 = *(int *)(lVar14 + 0xc + lVar23);
        if (lVar24 == -0x18 ||
            (iVar10 != -0x2ded87d8 ||
            (iVar9 != -0x4be91625 || (iVar8 != -0x6be7b6e1 || iVar7 != 0x595a123b)))) {
          if ((iVar10 == -0x1ec66a21 &&
              (iVar9 == -0x7eda0a3b && (iVar8 == -0x5556bdf4 && iVar7 == 0x460b9845))) &&
              lVar24 != -0x18) {
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
            goto LAB_140235245;
          }
          if ((iVar10 == -0x2cabdab9 &&
              (iVar9 == -0x6df9aa9a && (iVar8 == -0x62b7b29b && iVar7 == 0x5fd9ef1a))) &&
              lVar24 != -0x18) {
            param_1[0x68] = '\x02';
            param_1[0x69] = '\0';
            param_1[0x6a] = '\0';
            param_1[0x6b] = '\0';
            uVar1 = uVar22 + 1;
            if ((int)uVar1 < iVar18 && -2 < (int)uVar22) {
              lVar23 = (ulonglong)uVar1 * 0x60;
              lVar24 = lVar14 + lVar23;
              if (lVar24 != -0x18 &&
                  (*(int *)(lVar14 + 0xc + lVar23) == 0x5bdf8d43 &&
                  (*(int *)(lVar14 + 8 + lVar23) == -0x43eee727 &&
                  (*(int *)(lVar14 + 4 + lVar23) == 0x34d44d08 &&
                  *(int *)(lVar14 + lVar23) == -0x69f11528)))) {
                uVar22 = uVar1;
                if ((param_1[1] & 1U) == 0) {
                  *(int *)(param_1 + 0x80) = *(int *)(lVar24 + 0x20) + *(int *)(param_1 + 0x80) + 1;
                }
                else {
                  local_a8 = (wchar_t *)((ulonglong)local_a8 & 0xffffffff00000000);
                  local_e0 = (wchar_t *)((ulonglong)local_e0 & 0xffffffffffffff00);
                  (**(code **)(**(longlong **)(lVar24 + 0x28) + 0x20))
                            (*(longlong **)(lVar24 + 0x28),&local_a8,&local_e0);
                  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + (int)local_a8;
                  *(uint *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + (uint)(byte)local_e0;
                  iVar18 = *(int *)(param_1 + 0x48);
                }
              }
            }
            goto LAB_140235245;
          }
          if ((iVar10 != 0x5bdf8d43 ||
              (iVar9 != -0x43eee727 || (iVar8 != 0x34d44d08 || iVar7 != -0x69f11528))) ||
              lVar24 == -0x18) goto LAB_140235245;
          FUN_14006620a(&local_a8,*(longlong *)(lVar24 + 0x40),
                        (ulonglong)(*(longlong *)(lVar24 + 0x48) - *(longlong *)(lVar24 + 0x40)) >>
                        1);
          FUN_140233b1a(&local_110,&local_a8);
          if (local_a8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          plVar6 = local_110;
          local_150 = (longlong)*(int *)(lVar24 + 0x54);
          if (local_110 != (longlong *)0x0) {
            (**(code **)(*local_110 + 8))(local_110);
          }
          local_a8 = L"UnexpectedArgumentModifierToken";
          piStack_a0._0_4_ = 0x1f;
          FUN_1446e940c(local_144,&local_a8);
          local_a8 = L"TextFormatter";
          piStack_a0._0_4_ = 0xd;
          FUN_1446e940c(local_148,&local_a8);
          local_a8 = L"Unexpected \'argument modifier\' token: {0} (token started at index {1})";
          piStack_a0 = (int *)CONCAT44(piStack_a0._4_4_,0x46);
          FUN_140208c1e(local_140,local_148,local_144,&local_a8);
          FUN_14023409e(&local_130,local_140,1);
          local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
          local_98 = plVar6;
          local_90 = local_108;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[4] = L'\0';
            DAT_14c844840[5] = L'\0';
            DAT_14c844840[6] = L'\0';
            DAT_14c844840[7] = L'\0';
            *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
            DAT_14c844840[8] = L'\xffff';
            DAT_14c844840[9] = L'\xffff';
            DAT_14c844840[10] = L'\xffff';
            DAT_14c844840[0xb] = L'\xffff';
            DAT_14c844840[0xc] = L'\0';
            DAT_14c844840[0xd] = L'\0';
            DAT_14c844840[0xe] = L'\0';
            DAT_14c844840[0xf] = L'\0';
            DAT_14c844840[0x10] = L'\0';
            DAT_14c844840[0x11] = L'\0';
            DAT_14c844840[0x12] = L'\0';
            DAT_14c844840[0x13] = L'\0';
            DAT_14c844840[0x14] = L'\0';
            DAT_14c844840[0x15] = L'\0';
            DAT_14c844840[0x16] = L'\0';
            DAT_14c844840[0x17] = L'\0';
            if (DAT_14c844840 != (wchar_t *)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          pwVar12 = DAT_14c844840;
          if (DAT_14c844840 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)DAT_14c844840 + 8))(DAT_14c844840);
          }
          local_e8 = local_68;
          local_88 = 0;
          local_78 = 0;
          local_70 = 0;
          local_80 = local_150;
          local_f0 = &local_a8;
          FUN_14010d304(&local_e0);
          plVar6 = local_128;
          local_100 = local_130;
          local_f8 = local_128;
          if (local_128 == (longlong *)0x0) {
            local_158 = 0;
            FUN_14010c062(&local_120,&local_100,&local_e0,0);
          }
          else {
            LOCK();
            *(int *)(local_128 + 1) = (int)local_128[1] + 1;
            UNLOCK();
            local_158 = 0;
            FUN_14010c062(&local_120,&local_100,&local_e0,0);
            if (plVar6 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar6 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*plVar6)(plVar6);
                LOCK();
                piVar13 = (int *)((longlong)plVar6 + 0xc);
                *piVar13 = *piVar13 + -1;
                UNLOCK();
                if (*piVar13 == 0) {
                  (**(code **)(*plVar6 + 0x10))(plVar6);
                }
              }
            }
          }
          FUN_14007f2db(local_e0,local_d8);
          if (local_e0 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          lVar24 = 0x30;
          do {
            if (*(longlong **)((longlong)&local_a8 + lVar24) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_a8 + lVar24) + 0x10))();
              *(undefined8 *)((longlong)&local_a8 + lVar24) = 0;
              *(undefined4 *)((longlong)&piStack_a0 + lVar24) = 0;
            }
            lVar24 = lVar24 + -0x20;
          } while (lVar24 != -0x10);
          if (local_128 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_128 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_128)(local_128);
              LOCK();
              piVar13 = (int *)((longlong)local_128 + 0xc);
              *piVar13 = *piVar13 + -1;
              UNLOCK();
              if (*piVar13 == 0) {
                (**(code **)(*local_128 + 0x10))(local_128);
              }
            }
          }
          if (pwVar12 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)pwVar12 + 0x10))(pwVar12);
          }
          pwVar12 = local_120;
          if (local_120 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_120 + 8))(local_120);
          }
          local_e0 = pwVar12;
          local_d8 = local_118;
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[4] = L'\0';
            DAT_14c844840[5] = L'\0';
            DAT_14c844840[6] = L'\0';
            DAT_14c844840[7] = L'\0';
            *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
            DAT_14c844840[8] = L'\xffff';
            DAT_14c844840[9] = L'\xffff';
            DAT_14c844840[10] = L'\xffff';
            DAT_14c844840[0xb] = L'\xffff';
            DAT_14c844840[0xc] = L'\0';
            DAT_14c844840[0xd] = L'\0';
            DAT_14c844840[0xe] = L'\0';
            DAT_14c844840[0xf] = L'\0';
            DAT_14c844840[0x10] = L'\0';
            DAT_14c844840[0x11] = L'\0';
            DAT_14c844840[0x12] = L'\0';
            DAT_14c844840[0x13] = L'\0';
            DAT_14c844840[0x14] = L'\0';
            DAT_14c844840[0x15] = L'\0';
            DAT_14c844840[0x16] = L'\0';
            DAT_14c844840[0x17] = L'\0';
            if (DAT_14c844840 != (wchar_t *)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
              UNLOCK();
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          pwVar12 = DAT_14c844840;
          if (DAT_14c844840 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)DAT_14c844840 + 8))(DAT_14c844840);
          }
          local_d0 = 1;
          local_98 = (longlong *)CONCAT71(local_98._1_7_,1);
          local_a8 = local_e0;
          local_e0 = (wchar_t *)0x0;
          piStack_a0 = (int *)CONCAT44(piStack_a0._4_4_,local_d8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
            DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
            DAT_14c844840[4] = L'\0';
            DAT_14c844840[5] = L'\0';
            DAT_14c844840[6] = L'\0';
            DAT_14c844840[7] = L'\0';
            *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
            DAT_14c844840[8] = L'\xffff';
            DAT_14c844840[9] = L'\xffff';
            DAT_14c844840[10] = L'\xffff';
            DAT_14c844840[0xb] = L'\xffff';
            DAT_14c844840[0xc] = L'\0';
            DAT_14c844840[0xd] = L'\0';
            DAT_14c844840[0xe] = L'\0';
            DAT_14c844840[0xf] = L'\0';
            DAT_14c844840[0x10] = L'\0';
            DAT_14c844840[0x11] = L'\0';
            DAT_14c844840[0x12] = L'\0';
            DAT_14c844840[0x13] = L'\0';
            DAT_14c844840[0x14] = L'\0';
            DAT_14c844840[0x15] = L'\0';
            DAT_14c844840[0x16] = L'\0';
            DAT_14c844840[0x17] = L'\0';
            pwVar25 = (wchar_t *)0x0;
            if (DAT_14c844840 != (wchar_t *)0x0) {
              LOCK();
              *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
              UNLOCK();
              pwVar25 = local_e0;
            }
            DAT_14c844848 = 0;
            atexit(FUN_142760bef);
            _Init_thread_footer(&DAT_14c844850);
          }
          else {
            pwVar25 = (wchar_t *)0x0;
          }
          if (pwVar25 != DAT_14c844840) {
            local_e0 = DAT_14c844840;
            if (DAT_14c844840 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)DAT_14c844840 + 8))();
            }
            if (pwVar25 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)pwVar25 + 0x10))(pwVar25);
            }
          }
          plVar6 = local_98;
          uVar17 = local_b8;
          local_d8 = 0;
          pwVar25 = local_c8;
          piVar13 = uStack_c0;
          local_98 = (longlong *)local_b8;
          local_c8 = local_a8;
          uStack_c0 = piStack_a0;
          local_b8 = (ulonglong)plVar6;
          local_a8 = pwVar25;
          piStack_a0 = piVar13;
          (*(code *)(&PTR_FUN_149e19f00)[uVar17 & 0xff])();
          (*(code *)(&PTR_FUN_149e19f00)[local_d0])(&local_e0);
          if (pwVar12 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)pwVar12 + 0x10))(pwVar12);
          }
          if (local_120 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_120 + 0x10))();
          }
          if (local_140[0] != (longlong *)0x0) {
            (**(code **)(*local_140[0] + 0x10))();
          }
          if (local_110 != (longlong *)0x0) {
            (**(code **)(*local_110 + 0x10))();
          }
          goto LAB_14023577b;
        }
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + *(int *)(lVar24 + 0x20);
LAB_140235245:
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < iVar18);
    }
  }
  else {
LAB_14023577b:
    iVar18 = *(int *)(param_1 + 0x4c);
    FUN_1449079f2(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    if ((iVar18 < 0) && (*(int *)(param_1 + 0x4c) != 0)) {
      FUN_141151e80(plVar2,0);
    }
    param_1[0x68] = '\0';
    param_1[0x69] = '\0';
    param_1[0x6a] = '\0';
    param_1[0x6b] = '\0';
    uVar19 = (**(code **)(*(longlong *)local_c8 + 0x50))();
    FUN_1447a1fc0(uVar19);
    pcVar20 = (char *)(**(code **)(*(longlong *)local_c8 + 0x28))();
    pcVar3 = param_1 + 0x70;
    if (pcVar3 != pcVar20) {
      iVar18 = *(int *)(pcVar20 + 8);
      pvVar11 = *(void **)pcVar20;
      *(int *)(param_1 + 0x78) = iVar18;
      if (iVar18 == 0 && *(int *)(param_1 + 0x7c) == 0) {
        param_1[0x7c] = '\0';
        param_1[0x7d] = '\0';
        param_1[0x7e] = '\0';
        param_1[0x7f] = '\0';
      }
      else {
        FUN_1446dd670(pcVar3,iVar18);
        if (iVar18 != 0) {
          memcpy(*(void **)pcVar3,pvVar11,(longlong)iVar18 * 2);
        }
      }
    }
  }
  (*(code *)(&PTR_FUN_149e19f00)[local_b8 & 0xff])();
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140235a22 FUN_140235a22 body=2152 status=ok
// SIG undefined FUN_140235a22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140235a22(undefined2 *param_1,longlong param_2,undefined8 *param_3,double *param_4)

{
  short *psVar1;
  short sVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  char cVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  double *pdVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  double dVar25;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  longlong lVar40;
  undefined1 auVar39 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_1b8 [32];
  longlong local_198;
  undefined8 *local_190;
  short *local_188;
  undefined8 local_180;
  int local_178;
  double *local_170;
  undefined4 local_164;
  double *local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  short asStack_140 [44];
  double local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  iVar12 = *(int *)(param_3 + 1);
  if (iVar12 < 1) {
    iVar12 = 0;
  }
  *(int *)(param_3 + 1) = iVar12;
  iVar14 = *(int *)(param_3 + 2);
  if (iVar14 < 1) {
    iVar14 = 0;
  }
  *(int *)(param_3 + 2) = iVar14;
  if (iVar12 < *(int *)((longlong)param_3 + 0xc)) {
    iVar12 = *(int *)((longlong)param_3 + 0xc);
  }
  *(int *)((longlong)param_3 + 0xc) = iVar12;
  if (iVar14 < *(int *)((longlong)param_3 + 0x14)) {
    iVar14 = *(int *)((longlong)param_3 + 0x14);
  }
  *(int *)((longlong)param_3 + 0x14) = iVar14;
  iVar12 = _isnan((double)(float)(double)param_1);
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_1b8);
  }
  iVar12 = *(int *)((longlong)param_3 + 0x14);
  iVar14 = 0x12;
  if (iVar12 < 0x12) {
    iVar14 = iVar12;
  }
  iVar16 = *(int *)((longlong)param_3 + 4);
  local_148 = param_1;
  auVar47 = ZEXT816(0);
  if (iVar12 == 0) {
    pdVar20 = (double *)&local_148;
    local_150 = 0.0;
  }
  else {
    local_150 = modf((double)param_1,(double *)&local_148);
    pdVar20 = (double *)&local_150;
  }
  auVar38._0_8_ = (double)CONCAT44(0x43300000,(int)(&DAT_149e17340)[iVar14]);
  auVar38._8_4_ = (int)((ulonglong)(&DAT_149e17340)[iVar14] >> 0x20);
  auVar38._12_4_ = 0x45300000;
  dVar41 = (auVar38._0_8_ - 4503599627370496.0) + (auVar38._8_8_ - 1.9342813113834067e+25);
  dVar35 = *pdVar20 * dVar41;
  local_e8 = 0.0;
  dVar25 = modf(dVar35,&local_e8);
  auVar38 = ZEXT816(0x3fe0000000000000);
  auVar46._0_8_ = -(ulonglong)(dVar35 < 0.0) & 0x3fe0000000000000;
  auVar46._8_8_ = 0;
  uVar15 = 0xbfe0000000000000;
  if (0.0 <= dVar35) {
    uVar15 = 0x3fe0000000000000;
  }
  uVar24 = -(ulonglong)
            (ABS((double)(~-(ulonglong)(dVar35 < 0.0) & 0xbfe0000000000000 | auVar46._0_8_) + dVar25
                ) <= 9.99999993922529e-09);
  auVar30._0_8_ = uVar15 & uVar24;
  auVar30._8_8_ = 0;
  auVar36._0_8_ = ~uVar24 & (ulonglong)dVar25;
  auVar36._8_8_ = extraout_XMM0_Qb;
  auVar39._8_8_ = SUB168(auVar36 | auVar30,8);
  auVar39._0_8_ = SUB168(auVar36 | auVar30,0) + local_e8;
  *pdVar20 = auVar39._0_8_;
  if (iVar16 == 0) {
    auVar39._0_8_ = (double)FUN_1402364aa(auVar39._0_8_);
    auVar39._8_8_ = extraout_XMM0_Qb_00;
    goto LAB_140235bc2;
  }
  switch(iVar16) {
  case 1:
    auVar39._0_8_ = (double)FUN_14047fbb4(auVar39._0_8_);
    auVar39._8_8_ = extraout_XMM0_Qb_01;
    break;
  case 2:
    auVar39._0_8_ = (double)FUN_1467f9544(auVar39._0_8_);
    auVar39._8_8_ = extraout_XMM0_Qb_02;
    break;
  case 3:
    if (auVar39._0_8_ < 0.0) goto LAB_140236235;
    goto LAB_140236244;
  case 4:
    if (0.0 <= auVar39._0_8_) goto LAB_140236235;
    goto LAB_140236244;
  case 5:
LAB_140236235:
    auVar28._8_8_ = 0;
    auVar28._0_8_ = auVar39._0_8_;
    auVar39 = roundpd(auVar39,auVar28,1);
    break;
  case 6:
LAB_140236244:
    auVar29._8_8_ = 0;
    auVar29._0_8_ = auVar39._0_8_;
    auVar39 = roundpd(auVar39,auVar29,2);
    break;
  default:
    goto switchD_140236170_default;
  }
LAB_140235bc2:
  *pdVar20 = auVar39._0_8_;
switchD_140236170_default:
  dVar25 = auVar39._0_8_;
  if (iVar12 == 0) {
    dVar25 = 0.0;
    goto LAB_140235bf2;
  }
  if ((longlong)param_1 < 0) {
    if (dVar41 <= -dVar25) {
      local_148 = (undefined2 *)((double)local_148 + -1.0);
      dVar25 = dVar41 + *pdVar20;
      goto LAB_1402360e8;
    }
  }
  else if (dVar41 <= dVar25) {
    local_148 = (undefined2 *)((double)local_148 + 1.0);
    dVar25 = *pdVar20 - dVar41;
LAB_1402360e8:
    *pdVar20 = dVar25;
  }
  auVar39._8_8_ = 0;
  auVar39._0_8_ = (double)local_148;
LAB_140235bf2:
  if ((longlong)param_1 < 0) {
    uVar15 = auVar39._8_8_;
    auVar39._0_8_ = (double)(auVar39._0_8_ ^ 0x8000000000000000);
    auVar39._8_8_ = uVar15 ^ 0x8000000000000000;
    dVar25 = -dVar25;
  }
  dVar35 = auVar39._0_8_;
  uVar15 = (ulonglong)dVar35;
  auVar37._8_8_ = auVar39._8_8_;
  uVar24 = (longlong)(dVar35 - 9.223372036854776e+18) & (longlong)uVar15 >> 0x3f | uVar15;
  auVar26._8_4_ = (int)(uVar24 >> 0x20);
  auVar26._0_8_ = uVar24;
  auVar26._12_4_ = 0x45300000;
  auVar37._0_8_ =
       dVar35 - (((double)CONCAT44(0x43300000,(int)uVar24) - 4503599627370496.0) +
                (auVar26._8_8_ - 1.9342813113834067e+25));
  if ((auVar37._0_8_ <= 9.99999993922529e-09) || (DAT_14c758768 == 0)) {
    local_178 = *(int *)((longlong)param_3 + 0xc);
    psVar1 = (short *)(param_2 + 0x78);
    local_198 = CONCAT71(local_198._1_7_,*(undefined1 *)(param_2 + 0x76));
    local_188 = psVar1;
    local_170 = &local_e8;
    local_180._0_4_ = *(undefined4 *)(param_3 + 1);
    local_190._0_2_ = *(undefined2 *)(param_2 + 0x70);
    uVar13 = FUN_1402362ce(uVar24,CONCAT71((int7)((longlong)uVar15 >> 0x3f),
                                           *(char *)(param_2 + 0x74) != '\0' &
                                           *(byte *)((longlong)param_3 + 1)),
                           *(char *)(param_2 + 0x74),*(undefined1 *)(param_2 + 0x75));
    if ((dVar25 != 0.0) || (NAN(dVar25))) {
      iVar12 = *(int *)((longlong)param_3 + 0x14);
      local_170 = (double *)&local_148;
      local_180 = (double *)((ulonglong)local_180._4_4_ << 0x20);
      local_190 = (undefined8 *)CONCAT62(local_190._2_6_,0x20);
      local_198 = CONCAT71(local_198._1_7_,1);
      local_188 = psVar1;
      local_178 = iVar12;
      local_164 = uVar13;
      local_158 = param_2;
      iVar14 = FUN_1402362ce((longlong)(dVar25 - 9.223372036854776e+18) & (longlong)dVar25 >> 0x3f |
                             (longlong)dVar25,0,0,0);
      uVar22 = iVar12 - iVar14;
      if ((int)(0x12U - iVar14) <= (int)uVar22) {
        uVar22 = 0x12U - iVar14;
      }
      sVar2 = *psVar1;
      iVar12 = iVar14;
      if (0 < (int)uVar22) {
        local_160 = param_4;
        memmove((void *)((longlong)&local_148 + (ulonglong)uVar22 * 2),&local_148,
                (longlong)iVar14 * 2);
        lVar21 = (ulonglong)uVar22 - 1;
        auVar27._8_4_ = (int)lVar21;
        auVar27._0_8_ = lVar21;
        auVar27._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
        auVar31 = pmovsxbq(auVar30,0x706);
        auVar32 = pmovsxbq(auVar38,0x504);
        auVar33 = pmovsxbq(auVar46,0x302);
        auVar34 = pmovsxbq(in_XMM4,0x100);
        lVar21 = 0;
        lVar23 = SUB168(auVar27 ^ _DAT_149931e80,0);
        auVar38 = pmovsxbq(auVar37,0x808);
        do {
          auVar42._0_8_ = -(ulonglong)(lVar23 < SUB168(auVar34 ^ _DAT_149931e80,0));
          lVar19 = SUB168(auVar27 ^ _DAT_149931e80,8);
          auVar42._8_8_ = -(ulonglong)(lVar19 < SUB168(auVar34 ^ _DAT_149931e80,8));
          auVar46 = pshuflw(auVar47,auVar42,0xe8);
          auVar47._8_4_ = 0xffffffff;
          auVar47._0_8_ = 0xffffffffffffffff;
          auVar47._12_4_ = 0xffffffff;
          auVar47 = packssdw(auVar46 ^ auVar47,auVar46 ^ auVar47);
          if ((auVar47._0_4_ & 1) != 0) {
            *(short *)((longlong)&local_148 + lVar21) = sVar2;
          }
          auVar46 = packssdw(auVar42,auVar42);
          auVar3._8_4_ = 0xffffffff;
          auVar3._0_8_ = 0xffffffffffffffff;
          auVar3._12_4_ = 0xffffffff;
          auVar46 = packssdw(auVar46 ^ auVar3,auVar46 ^ auVar3);
          if ((auVar46[2] & 1) != 0) {
            *(short *)((longlong)&local_148 + lVar21 + 2) = sVar2;
          }
          auVar43._0_8_ = -(ulonglong)(lVar23 < SUB168(auVar33 ^ _DAT_149931e80,0));
          auVar43._8_8_ = -(ulonglong)(lVar19 < SUB168(auVar33 ^ _DAT_149931e80,8));
          auVar47 = packssdw(auVar47,auVar43);
          auVar4._8_4_ = 0xffffffff;
          auVar4._0_8_ = 0xffffffffffffffff;
          auVar4._12_4_ = 0xffffffff;
          auVar47 = packssdw(auVar47 ^ auVar4,auVar47 ^ auVar4);
          if ((auVar47[4] & 1) != 0) {
            *(short *)((longlong)&local_148 + lVar21 + 4) = sVar2;
          }
          auVar46 = pshufhw(auVar43,auVar43,0x84);
          auVar5._8_4_ = 0xffffffff;
          auVar5._0_8_ = 0xffffffffffffffff;
          auVar5._12_4_ = 0xffffffff;
          auVar46 = packssdw(auVar46 ^ auVar5,auVar46 ^ auVar5);
          if ((auVar46[6] & 1) != 0) {
            *(short *)((longlong)&local_148 + lVar21 + 6) = sVar2;
          }
          auVar44._0_8_ = -(ulonglong)(lVar23 < SUB168(auVar32 ^ _DAT_149931e80,0));
          auVar44._8_8_ = -(ulonglong)(lVar19 < SUB168(auVar32 ^ _DAT_149931e80,8));
          auVar47 = pshuflw(auVar47,auVar44,0xe8);
          auVar6._8_4_ = 0xffffffff;
          auVar6._0_8_ = 0xffffffffffffffff;
          auVar6._12_4_ = 0xffffffff;
          auVar47 = packssdw(auVar47 ^ auVar6,auVar47 ^ auVar6);
          if ((auVar47[8] & 1) != 0) {
            *(short *)((longlong)asStack_140 + lVar21) = sVar2;
          }
          auVar46 = packssdw(auVar44,auVar44);
          auVar7._8_4_ = 0xffffffff;
          auVar7._0_8_ = 0xffffffffffffffff;
          auVar7._12_4_ = 0xffffffff;
          auVar46 = packssdw(auVar46 ^ auVar7,auVar46 ^ auVar7);
          if ((auVar46[10] & 1) != 0) {
            *(short *)((longlong)asStack_140 + lVar21 + 2) = sVar2;
          }
          auVar45._0_8_ = -(ulonglong)(lVar23 < SUB168(auVar31 ^ _DAT_149931e80,0));
          auVar45._8_8_ = -(ulonglong)(lVar19 < SUB168(auVar31 ^ _DAT_149931e80,8));
          auVar47 = packssdw(auVar47,auVar45);
          auVar8._8_4_ = 0xffffffff;
          auVar8._0_8_ = 0xffffffffffffffff;
          auVar8._12_4_ = 0xffffffff;
          auVar47 = packssdw(auVar47 ^ auVar8,auVar47 ^ auVar8);
          if ((auVar47[0xc] & 1) != 0) {
            *(short *)((longlong)asStack_140 + lVar21 + 4) = sVar2;
          }
          auVar46 = pshufhw(auVar45,auVar45,0x84);
          auVar9._8_4_ = 0xffffffff;
          auVar9._0_8_ = 0xffffffffffffffff;
          auVar9._12_4_ = 0xffffffff;
          auVar46 = packssdw(auVar46 ^ auVar9,auVar46 ^ auVar9);
          if ((auVar46[0xe] & 1) != 0) {
            *(short *)((longlong)asStack_140 + lVar21 + 6) = sVar2;
          }
          lVar19 = auVar34._8_8_;
          lVar18 = auVar38._0_8_;
          auVar34._0_8_ = auVar34._0_8_ + lVar18;
          lVar40 = auVar38._8_8_;
          auVar34._8_8_ = lVar19 + lVar40;
          lVar19 = auVar33._8_8_;
          auVar33._0_8_ = auVar33._0_8_ + lVar18;
          auVar33._8_8_ = lVar19 + lVar40;
          lVar19 = auVar32._8_8_;
          auVar32._0_8_ = auVar32._0_8_ + lVar18;
          auVar32._8_8_ = lVar19 + lVar40;
          lVar19 = auVar31._8_8_;
          auVar31._0_8_ = auVar31._0_8_ + lVar18;
          auVar31._8_8_ = lVar19 + lVar40;
          lVar21 = lVar21 + 0x10;
        } while ((ulonglong)(uVar22 + 7 >> 3) << 4 != lVar21);
        iVar12 = iVar14 + uVar22;
        param_4 = local_160;
      }
      iVar16 = *(int *)(param_3 + 2);
      iVar10 = iVar12;
      if (iVar16 < iVar12) {
        iVar10 = iVar16;
      }
      uVar17 = 0;
      if (0 < (int)uVar22) {
        uVar17 = uVar22;
      }
      iVar14 = iVar14 + uVar17 + 1;
      lVar21 = (longlong)iVar12;
      do {
        lVar23 = local_158;
        uVar13 = local_164;
        iVar12 = iVar10;
        if (lVar21 <= iVar16) break;
        iVar14 = iVar14 + -1;
        lVar19 = lVar21 * 2;
        lVar21 = lVar21 + -1;
        iVar12 = iVar14;
      } while (*(short *)((longlong)&local_150 + lVar19 + 6) == sVar2);
    }
    else {
      iVar16 = *(int *)(param_3 + 2);
      lVar23 = param_2;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)iVar12;
    *(undefined2 *)((longlong)&local_148 + uVar15 * 2) = 0;
    uVar17 = iVar16 - iVar12;
    uVar22 = 0x12U - iVar12;
    if ((int)uVar17 < (int)(0x12U - iVar12)) {
      uVar22 = uVar17;
    }
    uVar24 = (ulonglong)uVar22;
    if (0 < (int)uVar22) {
      sVar2 = *psVar1;
      lVar19 = uVar15 << 0x20;
      lVar21 = (longlong)-iVar12 + 0x12;
      if ((longlong)(int)uVar17 <= (longlong)-iVar12 + 0x12) {
        lVar21 = (longlong)(int)uVar17;
      }
      lVar18 = 0;
      do {
        lVar19 = lVar19 + 0x100000000;
        *(short *)((longlong)&local_148 + lVar18 * 2 + uVar15 * 2) = sVar2;
        lVar18 = lVar18 + 1;
      } while ((int)lVar21 != (int)lVar18);
      iVar12 = iVar12 + (int)lVar18;
      uVar24 = lVar19 >> 0x20;
      uVar15 = uVar24;
    }
    *(undefined2 *)((longlong)&local_148 + uVar15 * 2) = 0;
    local_188 = (short *)CONCAT44(local_188._4_4_,iVar12);
    local_190 = &local_148;
    local_198 = CONCAT44(local_198._4_4_,uVar13);
    local_180 = param_4;
    FUN_1402365c4((ulonglong)param_1 >> 0x3f,CONCAT71((int7)(uVar24 >> 8),*(undefined1 *)param_3),
                  lVar23,&local_e8);
  }
  else {
    FUN_1406112c4(&local_e8,(longlong)uVar15 >> 0x3f,1);
    if (&local_e8 == param_4) {
      if (local_e8 != 0.0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_4 != 0.0) {
        FUN_1400020a8();
      }
      *param_4 = local_e8;
      local_e8 = 0.0;
      *(undefined4 *)(param_4 + 1) = local_e0;
      *(undefined4 *)((longlong)param_4 + 0xc) = local_dc;
    }
    cVar11 = FUN_1405b43cc(param_4);
    if (cVar11 != '\0') {
      if (*(int *)(param_4 + 1) == 0) {
        local_148 = &DAT_149dfb77a;
      }
      else {
        local_148 = (undefined2 *)*param_4;
      }
      local_198 = param_2;
      local_190 = param_3;
      FUN_1467c50eb(&local_e8);
      if (&local_e8 == param_4) {
        if (local_e8 != 0.0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_4 != 0.0) {
          FUN_1400020a8();
        }
        *param_4 = local_e8;
        *(undefined4 *)(param_4 + 1) = local_e0;
        *(undefined4 *)((longlong)param_4 + 0xc) = local_dc;
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402362ce FUN_1402362ce body=474 status=ok
// SIG undefined FUN_1402362ce(void)

uint FUN_1402362ce(ulonglong param_1,char param_2,byte param_3,byte param_4,byte param_5,
                  undefined2 param_6,undefined2 *param_7,int param_8,int param_9,
                  undefined2 *param_10)

{
  undefined2 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_c8 [30];
  undefined2 uStack_aa;
  undefined2 uStack_a8;
  undefined1 auStack_a6 [94];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar9 = 0;
  bVar5 = param_3;
  if (param_1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar9 = 0;
    if (0 < param_9) {
      uVar6 = 0;
      uVar9 = 0;
      do {
        if ((param_2 != '\0') && (bVar11 = bVar5 == 0, bVar5 = bVar5 - 1, bVar11)) {
          bVar5 = param_4 - 1;
          lVar10 = (longlong)(int)uVar6;
          uVar6 = uVar6 + 1;
          *(undefined2 *)(auStack_a6 + lVar10 * 2 + -2) = param_6;
        }
        lVar10 = (longlong)(int)uVar6;
        uVar6 = uVar6 + 1;
        *(undefined2 *)(auStack_a6 + lVar10 * 2 + -2) = param_7[param_1 % 10];
        uVar9 = uVar9 + 1;
        bVar11 = 9 < param_1;
        param_1 = param_1 / 10;
      } while ((int)uVar9 < param_9 && bVar11);
    }
  }
  iVar7 = param_8 - uVar9;
  if ((int)(0x14 - uVar9) <= (int)(param_8 - uVar9)) {
    iVar7 = 0x14 - uVar9;
  }
  if (0 < iVar7) {
    uVar1 = *param_7;
    uVar9 = uVar9 + iVar7;
    do {
      if ((param_2 != '\0') && (bVar11 = bVar5 == 0, bVar5 = bVar5 - 1, bVar11)) {
        lVar10 = (longlong)(int)uVar6;
        uVar6 = uVar6 + 1;
        *(undefined2 *)(auStack_a6 + lVar10 * 2 + -2) = param_6;
        bVar5 = param_4;
      }
      lVar10 = (longlong)(int)uVar6;
      uVar6 = uVar6 + 1;
      *(undefined2 *)(auStack_a6 + lVar10 * 2 + -2) = uVar1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (param_2 != '\0') {
    uVar2 = (uint)param_3;
    if ((uVar2 < uVar9) && (uVar9 < param_5 + uVar2)) {
      memmove(auStack_a6 + (ulonglong)param_3 * 2 + -2,auStack_a6 + (ulonglong)param_3 * 2,
              (longlong)(int)(~uVar2 + uVar6));
      uVar6 = uVar6 - 1;
    }
  }
  if ((int)uVar6 < 1) {
    uVar3 = (ulonglong)(int)uVar6;
  }
  else {
    uVar3 = (ulonglong)uVar6;
    puVar4 = param_10;
    uVar8 = uVar3;
    do {
      *puVar4 = (&uStack_aa)[uVar8];
      puVar4 = puVar4 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  param_10[uVar3] = 0;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1402364aa FUN_1402364aa body=281 status=ok
// SIG undefined FUN_1402364aa(void)

undefined8 FUN_1402364aa(double param_1)

{
  ulonglong uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  double dVar8;
  undefined1 auStack_48 [32];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0.0;
  dVar2 = modf(param_1,&local_28);
  uVar7 = 0xbfe0000000000000;
  if (0.0 <= param_1) {
    uVar7 = 0x3fe0000000000000;
  }
  uVar1 = -(ulonglong)
           (ABS((double)(~-(ulonglong)(param_1 < 0.0) & 0xbfe0000000000000 |
                        -(ulonglong)(param_1 < 0.0) & 0x3fe0000000000000) + dVar2) <=
           9.99999993922529e-09);
  dVar8 = (double)(~uVar1 & (ulonglong)dVar2 | uVar7 & uVar1) + local_28;
  dVar2 = -dVar8;
  if (-dVar8 <= dVar8) {
    dVar2 = dVar8;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar2;
  auVar4 = roundpd(auVar4,auVar4,1);
  uVar7 = (ulonglong)auVar4._0_8_;
  if ((uVar7 & 1) == 0 &&
      ((uint)(longlong)(auVar4._0_8_ - 9.223372036854776e+18) & (uint)(uVar7 >> 0x3f)) == 0) {
    if (dVar8 < 0.0) {
LAB_1402365b0:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = dVar8 + 0.5;
      auVar4 = roundpd(auVar6,auVar6,1);
      uVar3 = auVar4._0_8_;
      goto LAB_140236589;
    }
  }
  else if (0.0 <= dVar8) goto LAB_1402365b0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar8 + -0.5;
  auVar4 = roundpd(auVar5,auVar5,2);
  uVar3 = auVar4._0_8_;
LAB_140236589:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402365c4 FUN_1402365c4 body=425 status=ok
// SIG undefined FUN_1402365c4(void)

void FUN_1402365c4(char param_1,undefined4 param_2,longlong param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,int param_7,longlong param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [32];
  longlong local_88;
  longlong local_78;
  longlong local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140236862(local_a8,param_3,param_2);
  if (param_1 == '\0') {
    puVar1 = (undefined8 *)FUN_14023676e();
    puVar2 = (undefined8 *)FUN_1402367e8();
  }
  else {
    puVar1 = (undefined8 *)FUN_140b614b8(local_a8);
    puVar2 = (undefined8 *)FUN_140b6165c();
  }
  iVar4 = *(int *)(param_8 + 8) + -1;
  if (*(int *)(param_8 + 8) == 0) {
    iVar4 = 0;
  }
  iVar5 = *(int *)(puVar1 + 1) + -1;
  if (*(int *)(puVar1 + 1) == 0) {
    iVar5 = 0;
  }
  iVar3 = *(int *)(puVar2 + 1) + -1;
  if (*(int *)(puVar2 + 1) == 0) {
    iVar3 = 0;
  }
  iVar3 = iVar3 + param_5 + param_7 + iVar5 + iVar4;
  iVar4 = iVar3 + 1;
  if ((0 < iVar4) && (*(int *)(param_8 + 0xc) <= iVar4)) {
    FUN_1446f8c06(param_8,iVar3 + 2);
    iVar5 = *(int *)(puVar1 + 1) + -1;
    if (*(int *)(puVar1 + 1) == 0) {
      iVar5 = 0;
    }
  }
  FUN_1400020e8(param_8,*puVar1,iVar5);
  FUN_1400020e8(param_8,param_4,param_5);
  if (0 < param_7) {
    FUN_140002184(param_8,*(undefined2 *)(param_3 + 0x72));
    FUN_1400020e8(param_8,param_6,param_7);
  }
  iVar4 = *(int *)(puVar2 + 1) + -1;
  if (*(int *)(puVar2 + 1) == 0) {
    iVar4 = 0;
  }
  FUN_1400020e8(param_8,*puVar2,iVar4);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14023676e FUN_14023676e body=122 status=ok
// SIG undefined FUN_14023676e(void)

undefined8 * FUN_14023676e(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8449d8) {
    FUN_144b3d300(&DAT_14c8449d8);
    if (DAT_14c8449d8 == -1) {
      DAT_14c8449c8 = 0;
      uRam000000014c8449d0 = 0;
      atexit((_func_5014 *)&LAB_14276141d);
      _Init_thread_footer(&DAT_14c8449d8);
    }
  }
  puVar1 = &DAT_14c8449c8;
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x10);
  }
  return puVar1;
}



// FUNCTION 1402367e8 FUN_1402367e8 body=122 status=ok
// SIG undefined FUN_1402367e8(void)

undefined8 * FUN_1402367e8(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844a08) {
    FUN_144b3d300(&DAT_14c844a08);
    if (DAT_14c844a08 == -1) {
      DAT_14c8449f8 = 0;
      uRam000000014c844a00 = 0;
      atexit((_func_5014 *)&LAB_14276143f);
      _Init_thread_footer(&DAT_14c844a08);
    }
  }
  puVar1 = &DAT_14c8449f8;
  if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x18);
  }
  return puVar1;
}



// FUNCTION 140236862 FUN_140236862 body=939 status=ok
// SIG undefined FUN_140236862(void)

longlong * FUN_140236862(longlong *param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(param_2 + 0x18) - 2U < 0x7fffffff) {
    *param_1 = param_2 + 0x10;
  }
  if (*(int *)(param_2 + 0x28) - 2U < 0x7fffffff) {
    param_1[1] = param_2 + 0x20;
  }
  if (*(int *)(param_2 + 0x38) - 2U < 0x7fffffff) {
    param_1[2] = param_2 + 0x30;
  }
  if (*(int *)(param_2 + 0x48) - 2U < 0x7fffffff) {
    param_1[3] = param_2 + 0x40;
  }
  plVar1 = param_1 + 8;
  plVar2 = param_1 + 10;
  if ((param_3 & 1) != 0) {
    local_58 = param_2;
    cVar5 = FUN_140236c0e(&local_58,param_2 + 0x10,plVar1);
    if (cVar5 != '\0') {
      param_1[2] = (longlong)plVar1;
    }
    cVar5 = FUN_140236c0e(&local_58,param_2 + 0x20,plVar2);
    if (cVar5 != '\0') {
      param_1[3] = (longlong)plVar2;
    }
  }
  if ((param_3 & 2) != 0) {
    plVar3 = param_1 + 4;
    uVar6 = FUN_140b614b8(param_1);
    if (*(int *)(param_2 + 0x68) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = *(undefined2 **)(param_2 + 0x60);
    }
    local_68 = 0;
    FUN_140807d8e(uVar6,&local_58,puVar7,&DAT_149e1419a);
    if (plVar3 == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      param_1[4] = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 5) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x2c) = local_4c;
    }
    plVar4 = param_1 + 6;
    uVar6 = FUN_140b6165c(param_1);
    if (*(int *)(param_2 + 0x68) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = *(undefined2 **)(param_2 + 0x60);
    }
    local_68 = 0;
    FUN_140807d8e(uVar6,&local_58,puVar7,&DAT_149e1419a);
    if (plVar4 == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
      param_1[6] = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 7) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x3c) = local_4c;
    }
    uVar6 = FUN_14023676e(param_1);
    if (*(int *)(param_2 + 0x58) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = *(undefined2 **)(param_2 + 0x50);
    }
    local_68 = 0;
    FUN_140807d8e(uVar6,&local_58,puVar7,&DAT_149e06124);
    if (plVar1 == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      param_1[8] = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 9) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x4c) = local_4c;
    }
    uVar6 = FUN_1402367e8(param_1);
    if (*(int *)(param_2 + 0x58) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = *(undefined2 **)(param_2 + 0x50);
    }
    local_68 = 0;
    FUN_140807d8e(uVar6,&local_58,puVar7,&DAT_149e06124);
    if (plVar2 == &local_58) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      param_1[10] = local_58;
      *(undefined4 *)(param_1 + 0xb) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x5c) = local_4c;
    }
    if (*(int *)(param_2 + 0x18) - 2U < 0x7fffffff) {
      *param_1 = (longlong)plVar3;
    }
    if (*(int *)(param_2 + 0x28) - 2U < 0x7fffffff) {
      param_1[1] = (longlong)plVar4;
    }
    if (*(int *)(param_2 + 0x38) - 2U < 0x7fffffff) {
      param_1[2] = (longlong)plVar1;
    }
    if (*(int *)(param_2 + 0x48) - 2U < 0x7fffffff) {
      param_1[3] = (longlong)plVar2;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140236c0e FUN_140236c0e body=272 status=ok
// SIG undefined FUN_140236c0e(void)

undefined8 FUN_140236c0e(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  wchar_t *_Str;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*param_1 + 0x68) == 0) {
    _Str = L"";
  }
  else {
    _Str = *(wchar_t **)(*param_1 + 0x60);
  }
  if (_Str == (wchar_t *)0x0) {
    uVar4 = 0;
  }
  else {
    sVar3 = wcslen(_Str);
    local_50 = 0xffffffff;
    local_58 = 0;
    uVar4 = 0;
    iVar2 = FUN_1447ee042(param_2,_Str,sVar3 & 0xffffffff,0);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      puVar5 = &DAT_149dfb77a;
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 0x58) != 0) {
        puVar6 = *(undefined2 **)(lVar1 + 0x50);
      }
      if (*(int *)(lVar1 + 0x68) != 0) {
        puVar5 = *(undefined2 **)(lVar1 + 0x60);
      }
      local_58 = 0;
      FUN_140807d8e(param_2,&local_40,puVar5,puVar6);
      if (&local_40 == param_3) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_3 != 0) {
          FUN_1400020a8();
        }
        *param_3 = local_40;
        *(undefined4 *)(param_3 + 1) = local_38;
        *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
      }
      uVar4 = 1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140236d20 FUN_140236d20 body=111 status=ok
// SIG undefined FUN_140236d20(void)

void FUN_140236d20(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 < 1) {
    local_28 = 0;
    FUN_1424bbe50(param_1,&local_28,param_2);
    lVar1 = local_28;
    if (*param_2 < 1) {
      lVar2 = (**(code **)(**(longlong **)(local_28 + 0x18) + 0x18))();
      FUN_142537ca0(lVar1);
      if (lVar2 == 0) {
        *param_2 = 7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 140236d9a FUN_140236d9a body=2227 status=ok
// SIG undefined FUN_140236d9a(void)

longlong * FUN_140236d9a(longlong *param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined2 local_60;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1467d5d88();
  cVar2 = FUN_1424bbad0(param_3);
  *(bool *)((longlong)param_1 + 0x8d) = cVar2 != '\0';
  uVar5 = (**(code **)(*param_3 + 0x108))();
  uVar6 = 0;
  if (uVar5 < 7) {
    uVar6 = *(undefined4 *)(&DAT_149e19f58 + (ulonglong)uVar5 * 4);
  }
  *(undefined4 *)(param_1 + 0x12) = uVar6;
  uVar6 = FUN_1424bbb40(param_3);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar6;
  uVar6 = FUN_1424bbaf0(param_3);
  *(undefined4 *)(param_1 + 0x13) = uVar6;
  uVar6 = FUN_1424bbbe0(param_3);
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar6;
  uVar6 = FUN_1424bbb90(param_3);
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  (**(code **)(*param_3 + 200))(param_3,1);
  local_68 = &PTR_FUN_149e18960;
  local_60 = 2;
  lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
  local_78 = 0;
  uStack_70 = 0;
  FUN_1412abb25(lVar8 + 0x3c8,&local_78);
  if (&local_78 == param_1) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_78;
    local_78 = 0;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_70._4_4_;
  }
  uVar9 = FUN_1424c8e60(param_3,&local_68);
  local_78 = 0;
  uStack_70 = 0;
  FUN_1412abb25(uVar9,&local_78);
  if (param_1 + 2 == &local_78) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = local_78;
    local_78 = 0;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_70._4_4_;
  }
  uVar9 = FUN_1424c9100(param_3,&local_68);
  local_78 = 0;
  uStack_70 = 0;
  FUN_1412abb25(uVar9,&local_78);
  if (param_1 + 4 == &local_78) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = local_78;
    local_78 = 0;
    *(undefined4 *)(param_1 + 5) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_70._4_4_;
  }
  uVar9 = FUN_1424c8d10(param_3,&local_68);
  local_78 = 0;
  uStack_70 = 0;
  FUN_1412abb25(uVar9,&local_78);
  if (param_1 + 6 == &local_78) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    param_1[6] = local_78;
    local_78 = 0;
    *(undefined4 *)(param_1 + 7) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_70._4_4_;
  }
  uVar9 = FUN_1424c8fb0(param_3,&local_68);
  local_78 = 0;
  uStack_70 = 0;
  FUN_1412abb25(uVar9,&local_78);
  if (param_1 + 8 == &local_78) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = local_78;
    local_78 = 0;
    *(undefined4 *)(param_1 + 9) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_70._4_4_;
  }
  lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
  local_78 = 0;
  uStack_70 = 0;
  FUN_1412abb25(lVar8 + 0x1c8,&local_78);
  if (param_1 + 10 == &local_78) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[10] != 0) {
      FUN_1400020a8();
    }
    param_1[10] = local_78;
    local_78 = 0;
    *(undefined4 *)(param_1 + 0xb) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_70._4_4_;
  }
  lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
  local_78 = 0;
  uStack_70 = 0;
  FUN_1412abb25(lVar8 + 0x188,&local_78);
  if (param_1 + 0xc == &local_78) {
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0xc] != 0) {
      FUN_1400020a8();
    }
    param_1[0xc] = local_78;
    local_78 = 0;
    *(undefined4 *)(param_1 + 0xd) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x6c) = uStack_70._4_4_;
  }
  lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
  uVar1 = *(ushort *)(lVar8 + 0x50);
  if ((short)uVar1 < 0) {
    uVar4 = 0x2c;
    if (*(int *)(lVar8 + 0x54) == 1) goto LAB_140237164;
  }
  else {
    uVar4 = 0x2c;
    if ((uVar1 & 0x7fe0) == 0x20) {
LAB_140237164:
      if ((uVar1 & 2) == 0) {
        puVar10 = *(undefined2 **)(lVar8 + 0x60);
      }
      else {
        puVar10 = (undefined2 *)(lVar8 + 0x52);
      }
      uVar4 = *puVar10;
    }
  }
  *(undefined2 *)(param_1 + 0xe) = uVar4;
  lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
  uVar1 = *(ushort *)(lVar8 + 0x10);
  if ((short)uVar1 < 0) {
    uVar4 = 0x2e;
    if (*(int *)(lVar8 + 0x14) == 1) goto LAB_1402371b0;
  }
  else {
    uVar4 = 0x2e;
    if ((uVar1 & 0x7fe0) == 0x20) {
LAB_1402371b0:
      if ((uVar1 & 2) == 0) {
        puVar10 = *(undefined2 **)(lVar8 + 0x20);
      }
      else {
        puVar10 = (undefined2 *)(lVar8 + 0x12);
      }
      uVar4 = *puVar10;
    }
  }
  *(undefined2 *)((longlong)param_1 + 0x72) = uVar4;
  uVar3 = FUN_1424c6430(param_3);
  *(undefined1 *)((longlong)param_1 + 0x74) = uVar3;
  iVar7 = FUN_1424c6460(param_3);
  if (iVar7 < 1) {
    uVar3 = *(undefined1 *)((longlong)param_1 + 0x74);
  }
  else {
    uVar3 = FUN_1424c6460(param_3);
  }
  *(undefined1 *)((longlong)param_1 + 0x75) = uVar3;
  iVar7 = FUN_1424c6490(param_3);
  uVar3 = 1;
  if (1 < iVar7) {
    uVar3 = (undefined1)iVar7;
  }
  *(undefined1 *)((longlong)param_1 + 0x76) = uVar3;
  cVar2 = (**(code **)(*DAT_14c8443c8 + 0xa8))();
  if (cVar2 != '\0') {
    lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
    uVar1 = *(ushort *)(lVar8 + 0x110);
    if ((short)uVar1 < 0) {
      uVar4 = 0x30;
      if (*(int *)(lVar8 + 0x114) == 1) goto LAB_14023726b;
    }
    else {
      uVar4 = 0x30;
      if ((uVar1 & 0x7fe0) == 0x20) {
LAB_14023726b:
        if ((uVar1 & 2) == 0) {
          puVar10 = *(undefined2 **)(lVar8 + 0x120);
        }
        else {
          puVar10 = (undefined2 *)(lVar8 + 0x112);
        }
        uVar4 = *puVar10;
      }
    }
    *(undefined2 *)(param_1 + 0xf) = uVar4;
    lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
    uVar1 = *(ushort *)(lVar8 + 0x490);
    if ((short)uVar1 < 0) {
      uVar4 = 0x31;
      if (*(int *)(lVar8 + 0x494) == 1) goto LAB_1402372f6;
    }
    else {
      uVar4 = 0x31;
      if ((uVar1 & 0x7fe0) == 0x20) {
LAB_1402372f6:
        if ((uVar1 & 2) == 0) {
          puVar10 = *(undefined2 **)(lVar8 + 0x4a0);
        }
        else {
          puVar10 = (undefined2 *)(lVar8 + 0x492);
        }
        uVar4 = *puVar10;
      }
    }
    *(undefined2 *)((longlong)param_1 + 0x7a) = uVar4;
    lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
    uVar1 = *(ushort *)(lVar8 + 0x4d0);
    if ((short)uVar1 < 0) {
      uVar4 = 0x32;
      if (*(int *)(lVar8 + 0x4d4) == 1) goto LAB_14023734d;
    }
    else {
      uVar4 = 0x32;
      if ((uVar1 & 0x7fe0) == 0x20) {
LAB_14023734d:
        if ((uVar1 & 2) == 0) {
          puVar10 = *(undefined2 **)(lVar8 + 0x4e0);
        }
        else {
          puVar10 = (undefined2 *)(lVar8 + 0x4d2);
        }
        uVar4 = *puVar10;
      }
    }
    *(undefined2 *)((longlong)param_1 + 0x7c) = uVar4;
    lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
    uVar1 = *(ushort *)(lVar8 + 0x510);
    if ((short)uVar1 < 0) {
      uVar4 = 0x33;
      if (*(int *)(lVar8 + 0x514) == 1) goto LAB_1402373a4;
    }
    else {
      uVar4 = 0x33;
      if ((uVar1 & 0x7fe0) == 0x20) {
LAB_1402373a4:
        if ((uVar1 & 2) == 0) {
          puVar10 = *(undefined2 **)(lVar8 + 0x520);
        }
        else {
          puVar10 = (undefined2 *)(lVar8 + 0x512);
        }
        uVar4 = *puVar10;
      }
    }
    *(undefined2 *)((longlong)param_1 + 0x7e) = uVar4;
    lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
    uVar1 = *(ushort *)(lVar8 + 0x550);
    if ((short)uVar1 < 0) {
      uVar4 = 0x34;
      if (*(int *)(lVar8 + 0x554) == 1) goto LAB_1402373fb;
    }
    else {
      uVar4 = 0x34;
      if ((uVar1 & 0x7fe0) == 0x20) {
LAB_1402373fb:
        if ((uVar1 & 2) == 0) {
          puVar10 = *(undefined2 **)(lVar8 + 0x560);
        }
        else {
          puVar10 = (undefined2 *)(lVar8 + 0x552);
        }
        uVar4 = *puVar10;
      }
    }
    *(undefined2 *)(param_1 + 0x10) = uVar4;
    lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
    uVar1 = *(ushort *)(lVar8 + 0x590);
    if ((short)uVar1 < 0) {
      uVar4 = 0x35;
      if (*(int *)(lVar8 + 0x594) == 1) goto LAB_140237455;
    }
    else {
      uVar4 = 0x35;
      if ((uVar1 & 0x7fe0) == 0x20) {
LAB_140237455:
        if ((uVar1 & 2) == 0) {
          puVar10 = *(undefined2 **)(lVar8 + 0x5a0);
        }
        else {
          puVar10 = (undefined2 *)(lVar8 + 0x592);
        }
        uVar4 = *puVar10;
      }
    }
    *(undefined2 *)((longlong)param_1 + 0x82) = uVar4;
    lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
    uVar1 = *(ushort *)(lVar8 + 0x5d0);
    if ((short)uVar1 < 0) {
      uVar4 = 0x36;
      if (*(int *)(lVar8 + 0x5d4) == 1) goto LAB_1402374af;
    }
    else {
      uVar4 = 0x36;
      if ((uVar1 & 0x7fe0) == 0x20) {
LAB_1402374af:
        if ((uVar1 & 2) == 0) {
          puVar10 = *(undefined2 **)(lVar8 + 0x5e0);
        }
        else {
          puVar10 = (undefined2 *)(lVar8 + 0x5d2);
        }
        uVar4 = *puVar10;
      }
    }
    *(undefined2 *)((longlong)param_1 + 0x84) = uVar4;
    lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
    uVar1 = *(ushort *)(lVar8 + 0x610);
    if ((short)uVar1 < 0) {
      uVar4 = 0x37;
      if (*(int *)(lVar8 + 0x614) == 1) goto LAB_140237509;
    }
    else {
      uVar4 = 0x37;
      if ((uVar1 & 0x7fe0) == 0x20) {
LAB_140237509:
        if ((uVar1 & 2) == 0) {
          puVar10 = *(undefined2 **)(lVar8 + 0x620);
        }
        else {
          puVar10 = (undefined2 *)(lVar8 + 0x612);
        }
        uVar4 = *puVar10;
      }
    }
    *(undefined2 *)((longlong)param_1 + 0x86) = uVar4;
    lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
    uVar1 = *(ushort *)(lVar8 + 0x650);
    if ((short)uVar1 < 0) {
      uVar4 = 0x38;
      if (*(int *)(lVar8 + 0x654) == 1) goto LAB_140237563;
    }
    else {
      uVar4 = 0x38;
      if ((uVar1 & 0x7fe0) == 0x20) {
LAB_140237563:
        if ((uVar1 & 2) == 0) {
          puVar10 = *(undefined2 **)(lVar8 + 0x660);
        }
        else {
          puVar10 = (undefined2 *)(lVar8 + 0x652);
        }
        uVar4 = *puVar10;
      }
    }
    *(undefined2 *)(param_1 + 0x11) = uVar4;
    lVar8 = (**(code **)(*param_3 + 0x130))(param_3);
    uVar1 = *(ushort *)(lVar8 + 0x690);
    if ((short)uVar1 < 0) {
      uVar4 = 0x39;
      if (*(int *)(lVar8 + 0x694) == 1) goto LAB_1402375bd;
    }
    else {
      uVar4 = 0x39;
      if ((uVar1 & 0x7fe0) == 0x20) {
LAB_1402375bd:
        if ((uVar1 & 2) == 0) {
          puVar10 = *(undefined2 **)(lVar8 + 0x6a0);
        }
        else {
          puVar10 = (undefined2 *)(lVar8 + 0x692);
        }
        uVar4 = *puVar10;
      }
    }
    *(undefined2 *)((longlong)param_1 + 0x8a) = uVar4;
    goto LAB_1402375db;
  }
  if ((short)param_1[0xe] == 0x66b) {
    uVar4 = 0x2e;
LAB_14023727d:
    *(undefined2 *)(param_1 + 0xe) = uVar4;
  }
  else if ((short)param_1[0xe] == 0x66c) {
    uVar4 = 0x2c;
    goto LAB_14023727d;
  }
  if (*(short *)((longlong)param_1 + 0x72) == 0x66c) {
    *(undefined2 *)((longlong)param_1 + 0x72) = 0x2c;
  }
  else if (*(short *)((longlong)param_1 + 0x72) == 0x66b) {
    *(undefined2 *)((longlong)param_1 + 0x72) = 0x2e;
  }
LAB_1402375db:
  if (*(char *)(param_2 + 10) == '\0' && *(short *)(param_2 + 8) == 0x7365) {
    cVar2 = (**(code **)(*DAT_14c8443e0 + 0xa8))();
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0xe) = 0x2c00a0;
    }
    cVar2 = (**(code **)(*DAT_14c8443f8 + 0xa8))();
    if (cVar2 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x76) = 2;
    }
  }
  FUN_140859a90(&local_68);
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14023764e FUN_14023764e body=5415 status=ok
// SIG undefined FUN_14023764e(void)

ulonglong FUN_14023764e(longlong *param_1,longlong *param_2,undefined4 param_3,longlong *param_4)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  char cVar24;
  uint uVar25;
  int iVar26;
  undefined4 *puVar27;
  longlong lVar28;
  longlong lVar29;
  char **ppcVar30;
  undefined1 *puVar31;
  undefined8 uVar32;
  longlong *plVar33;
  byte bVar34;
  longlong lVar35;
  int iVar36;
  undefined8 *puVar37;
  longlong *plVar38;
  ulonglong uVar39;
  undefined1 *puVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  uint uVar44;
  char **ppcVar45;
  bool bVar46;
  undefined1 auStack_838 [32];
  longlong *local_818;
  undefined4 local_810;
  char **local_808;
  undefined4 *local_800;
  longlong *local_7f8;
  longlong local_7f0;
  longlong *local_7e8;
  longlong *local_7e0;
  longlong local_7d8;
  longlong lStack_7d0;
  longlong local_7c8;
  longlong local_7b8;
  undefined8 uStack_7b0;
  char *local_7a0;
  undefined8 local_798;
  byte local_790;
  undefined2 local_78f;
  byte local_78d;
  undefined2 local_78c;
  undefined1 local_78a;
  undefined2 local_789;
  undefined4 local_784;
  undefined1 local_780;
  undefined4 local_77c;
  ushort local_778;
  undefined1 local_770 [32];
  undefined1 *local_750;
  undefined8 local_748;
  undefined4 local_740 [4];
  undefined4 *local_730;
  undefined8 local_728;
  undefined1 local_720;
  char **local_488;
  undefined8 local_480;
  longlong local_478;
  longlong lStack_470;
  longlong local_468;
  longlong lStack_460;
  longlong *local_438;
  undefined8 local_430;
  undefined1 local_428 [64];
  undefined1 *local_3e8;
  undefined8 local_3e0;
  undefined1 local_3d8 [192];
  undefined1 *local_318;
  undefined8 local_310;
  undefined1 *local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_838;
  lVar42 = param_1[0x15];
  if (((lVar42 != 0) && (bVar34 = *(byte *)(lVar42 + 0x65) & 0x18, bVar34 != 0x10)) && (bVar34 != 8)
     ) {
    uVar39 = 0;
    goto LAB_1402384bc;
  }
  local_7f8 = param_1;
  if ((((*(byte *)((longlong)param_1 + 0x2d3) & 8) == 0) ||
      (uVar25 = (**(code **)(*param_1 + 0x570))(), 5 < uVar25)) ||
     ((0x2aU >> (uVar25 & 0x1f) & 1) == 0)) {
    uVar39 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    if (0 < (int)param_1[0x81]) {
      FUN_1400fc1c8(param_1,param_3,0);
    }
  }
  else {
    if (lVar42 != 0) {
      dVar12 = (double)param_1[0x48];
      dVar13 = (double)param_1[0x49];
      dVar14 = (double)param_1[0x4a];
      dVar15 = (double)param_1[0x4b];
      dVar16 = (double)param_1[0x4c];
      dVar17 = (double)param_1[0x4d];
      dVar18 = (double)param_1[0x4e];
      dVar19 = (double)param_1[0x4f];
      dVar20 = (double)param_1[0x50];
      dVar21 = (double)param_1[0x51];
      dVar22 = (double)param_1[0x52];
      dVar23 = (double)param_1[0x53];
      plVar33 = *(longlong **)(lVar42 + 0x1c8);
      if ((param_2 != (longlong *)0x0) && (lVar43 = param_2[1], 0 < (longlong)(int)lVar43)) {
        lVar41 = 0;
        do {
          FUN_143482e8e(param_1,*param_2 + lVar41,param_3);
          lVar41 = lVar41 + 0x108;
        } while ((longlong)(int)lVar43 * 0x108 != lVar41);
      }
      local_c0 = (undefined1 *)0x0;
      local_b8 = 0x300000000;
      local_3e8 = (undefined1 *)0x0;
      local_3e0 = 0x800000000;
      if (((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) &&
         ((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0)) {
        if ((param_4 != (longlong *)0x0) && (DAT_14c761414 != 0)) {
          auVar6._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar17 - (double)param_1[0x4d]));
          auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar16 - (double)param_1[0x4c]));
          iVar26 = movmskpd(*(uint *)(param_1 + 1),auVar6);
          auVar7._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar19 - (double)param_1[0x4f]));
          auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar18 - (double)param_1[0x4e]));
          uVar25 = movmskpd(0,auVar7);
          if ((uVar25 & 0x3fffffff) == 0 && iVar26 == 0) {
            lVar43 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar13 - (double)param_1[0x49]));
            auVar11._8_4_ = (int)lVar43;
            auVar11._0_8_ =
                 -(ulonglong)(9.999999747378752e-05 < ABS(dVar12 - (double)param_1[0x48]));
            auVar11._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
            uVar25 = movmskpd(iVar26,auVar11);
            auVar10._8_8_ =
                 -(ulonglong)(9.999999747378752e-05 < ABS(dVar15 - (double)param_1[0x4b]));
            auVar10._0_8_ =
                 -(ulonglong)(9.999999747378752e-05 < ABS(dVar14 - (double)param_1[0x4a]));
            iVar26 = movmskpd(0,auVar10);
            uVar44 = iVar26 << 2 | uVar25;
            if (uVar44 != 0) {
              auVar8._8_8_ = -(ulonglong)
                              (9.999999747378752e-05 < ABS(dVar13 + (double)param_1[0x49]));
              auVar8._0_8_ = -(ulonglong)
                              (9.999999747378752e-05 < ABS(dVar12 + (double)param_1[0x48]));
              uVar25 = movmskpd(uVar25,auVar8);
              auVar9._8_8_ = -(ulonglong)
                              (9.999999747378752e-05 < ABS(dVar15 + (double)param_1[0x4b]));
              auVar9._0_8_ = -(ulonglong)
                              (9.999999747378752e-05 < ABS(dVar14 + (double)param_1[0x4a]));
              uVar44 = movmskpd(uVar44,auVar9);
              if ((uVar44 & 0x3fffffff) != 0 || uVar25 != 0) goto LAB_14023785d;
            }
            auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar21 - (double)param_1[0x51]))
            ;
            auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar20 - (double)param_1[0x50]))
            ;
            iVar26 = movmskpd(uVar25,auVar5);
            lVar43 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar23 - (double)param_1[0x53]));
            auVar4._8_4_ = (int)lVar43;
            auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar22 - (double)param_1[0x52]))
            ;
            auVar4._12_4_ = (int)((ulonglong)lVar43 >> 0x20);
            uVar25 = movmskpd(0,auVar4);
            if ((uVar25 & 0x3fffffff) == 0 && iVar26 == 0) {
              if ((param_2 == (longlong *)0x0) || ((int)param_2[1] < 1)) {
                iVar26 = (int)param_4[1];
                FUN_140717bfe(local_428,iVar26,1);
                if (0 < (longlong)iVar26) {
                  lVar43 = 0;
                  lVar41 = 0;
                  do {
                    puVar31 = local_3e8;
                    if (local_3e8 == (undefined1 *)0x0) {
                      puVar31 = local_428;
                    }
                    *(longlong *)(puVar31 + lVar41 * 8) = *param_4 + lVar43;
                    lVar41 = lVar41 + 1;
                    lVar43 = lVar43 + 0x108;
                  } while (iVar26 != lVar41);
                }
              }
              else {
                uVar25 = *(uint *)(param_4 + 1);
                if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(uVar25);
                }
                if (8 < uVar25) {
                  FUN_1417bea36(local_428);
                  uVar25 = *(uint *)(param_4 + 1);
                }
                if (uVar25 != 0) {
                  lVar43 = *param_4;
                  lVar41 = (longlong)(int)uVar25 * 0x108;
                  do {
                    if ((((((*(int *)(lVar43 + 0xe4) != 0) &&
                           (uVar25 = *(uint *)(lVar43 + 0xe0), -1 < (int)uVar25)) &&
                          ((int)uVar25 < DAT_14c9647dc)) &&
                         ((plVar38 = (longlong *)
                                     ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8))
                          , plVar38 != (longlong *)0x0 &&
                          ((int)plVar38[2] == *(int *)(lVar43 + 0xe4))))) &&
                        ((*(uint *)(plVar38 + 1) & 0x10200000) == 0)) &&
                       (((plVar38 = (longlong *)*plVar38, plVar38 != (longlong *)0x0 &&
                         ((*(byte *)((longlong)plVar38 + 0x2d3) & 8) != 0)) &&
                        ((*(byte *)((longlong)param_1 + 0x2d3) & 8) != 0)))) {
                      if (*(code **)(*param_1 + 0x570) == (code *)&LAB_1448a814e) {
                        if ((param_1[0x15] != 0) && ((*(byte *)(param_1[0x15] + 0x65) & 1) == 0))
                        goto LAB_14023882a;
                        uVar25 = (uint)*(byte *)((longlong)param_1 + 0x427);
                      }
                      else {
                        uVar25 = (**(code **)(*param_1 + 0x570))(param_1);
                      }
                      if (uVar25 != 0) {
                        if (*(code **)(*plVar38 + 0x570) == (code *)&LAB_1448a814e) {
                          if ((plVar38[0x15] != 0) && ((*(byte *)(plVar38[0x15] + 0x65) & 1) == 0))
                          goto LAB_14023882a;
                          uVar25 = (uint)*(byte *)((longlong)plVar38 + 0x427);
                        }
                        else {
                          uVar25 = (**(code **)(*plVar38 + 0x570))(plVar38);
                        }
                        if (uVar25 != 0) {
                          if (*(code **)(*param_1 + 0x580) == (code *)&LAB_144a2af98) {
                            uVar25 = (uint)*(byte *)((longlong)param_1 + 0x425);
                          }
                          else {
                            uVar25 = (**(code **)(*param_1 + 0x580))(param_1);
                          }
                          if (*(code **)(*plVar38 + 0x580) == (code *)&LAB_144a2af98) {
                            uVar44 = (uint)*(byte *)((longlong)plVar38 + 0x425);
                          }
                          else {
                            uVar44 = (**(code **)(*plVar38 + 0x580))(plVar38);
                          }
                          if (*(code **)(*param_1 + 0x578) == (code *)&LAB_144b26b5e) {
                            uVar44 = (uint)*(byte *)((longlong)param_1 +
                                                    (longlong)(int)uVar44 + 0x478);
                          }
                          else {
                            uVar44 = (**(code **)(*param_1 + 0x578))(param_1,uVar44);
                          }
                          if (*(code **)(*plVar38 + 0x578) == (code *)&LAB_144b26b5e) {
                            uVar25 = (uint)*(byte *)((longlong)plVar38 +
                                                    (longlong)(int)uVar25 + 0x478);
                          }
                          else {
                            uVar25 = (**(code **)(*plVar38 + 0x578))(plVar38);
                          }
                          uVar39 = local_3e0;
                          if ((int)uVar44 < (int)uVar25) {
                            uVar25 = uVar44;
                          }
                          if (0 < (int)uVar25) {
                            lVar35 = (longlong)(int)local_3e0;
                            uVar25 = (int)local_3e0 + 1;
                            local_3e0 = CONCAT44(local_3e0._4_4_,uVar25);
                            if (local_3e0._4_4_ < uVar25) {
                              FUN_140717c4c(local_428,uVar39 & 0xffffffff);
                            }
                            puVar31 = local_3e8;
                            if (local_3e8 == (undefined1 *)0x0) {
                              puVar31 = local_428;
                            }
                            *(longlong *)(puVar31 + lVar35 * 8) = lVar43;
                          }
                        }
                      }
                    }
LAB_14023882a:
                    lVar43 = lVar43 + 0x108;
                    lVar41 = lVar41 + -0x108;
                  } while (lVar41 != 0);
                }
              }
              goto LAB_140237cfd;
            }
          }
        }
LAB_14023785d:
        local_7f0 = param_1[0x16];
        if (local_7f0 == 0) {
          local_7f0 = FUN_1448abda6(param_1);
        }
        local_7b8 = 0;
        uStack_7b0 = 0;
        lVar43 = 0;
        if (plVar33 == param_1) {
          lVar43 = lVar42;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cad1e08) &&
           (FUN_144b3d300(&DAT_14cad1e08), DAT_14cad1e08 == -1)) {
          local_7a0 = "UpdateOverlaps";
          local_798 = CONCAT35(local_798._5_3_,0xe);
          uVar25 = FUN_14001a6c0(&local_7a0,1);
          DAT_14cad1e00 = (char *)(ulonglong)uVar25;
          _Init_thread_footer(&DAT_14cad1e08);
        }
        local_77c = 0;
        local_798 = 0;
        local_778 = 0x101;
        local_750 = (undefined1 *)0x0;
        local_748 = 0x800000000;
        local_730 = (undefined4 *)0x0;
        local_728 = 0x400000000;
        local_790 = 0;
        local_784 = 0;
        local_7a0 = DAT_14cad1e00;
        local_78f = 1;
        local_78d = 0;
        local_780 = 0;
        local_78a = 0;
        if (lVar43 != 0) {
          local_740[0] = *(undefined4 *)(lVar43 + 0xc);
          local_728 = 0x400000001;
          local_798 = *(undefined8 *)(lVar43 + 0x18);
        }
        local_789 = 0x101;
        local_720 = 0;
        local_78c = 1;
        iVar26 = (int)param_1[0x7d];
        if (0 < iVar26) {
          lVar43 = 0;
          do {
            uVar39 = local_728;
            lVar41 = *(longlong *)(param_1[0x7c] + lVar43 * 8);
            if (lVar41 != 0) {
              uVar1 = *(undefined4 *)(lVar41 + 0xc);
              lVar41 = (longlong)(int)local_728;
              uVar25 = (int)local_728 + 1;
              local_728 = CONCAT44(local_728._4_4_,uVar25);
              if (local_728._4_4_ < uVar25) {
                FUN_1447de67e(local_740,uVar39 & 0xffffffff);
              }
              puVar27 = local_730;
              if (local_730 == (undefined4 *)0x0) {
                puVar27 = local_740;
              }
              puVar27[lVar41] = uVar1;
              iVar26 = (int)local_7f8[0x7d];
              param_1 = local_7f8;
            }
            lVar43 = lVar43 + 1;
          } while (lVar43 < iVar26);
        }
        plVar38 = local_7f8;
        lVar43 = param_1[0x7f];
        local_7e8 = plVar33;
        if ((longlong)(int)lVar43 != 0) {
          lVar41 = param_1[0x7e];
          lVar35 = 0;
          do {
            plVar33 = *(longlong **)(lVar41 + lVar35);
            if (((plVar33 != (longlong *)0x0) &&
                (uVar25 = (**(code **)(*plVar33 + 0x570))(plVar33), uVar39 = local_748, uVar25 < 6))
               && ((0x2aU >> (uVar25 & 0x1f) & 1) != 0)) {
              uVar1 = *(undefined4 *)((longlong)plVar33 + 0xc);
              lVar29 = (longlong)(int)local_748;
              uVar25 = (int)local_748 + 1;
              local_748 = CONCAT44(local_748._4_4_,uVar25);
              if (local_748._4_4_ < uVar25) {
                FUN_140694806(local_770,uVar39 & 0xffffffff);
              }
              puVar31 = local_750;
              if (local_750 == (undefined1 *)0x0) {
                puVar31 = local_770;
              }
              *(undefined4 *)(puVar31 + lVar29 * 4) = uVar1;
              local_778 = local_778 & 0xff;
            }
            lVar35 = lVar35 + 8;
            param_1 = plVar38;
          } while ((longlong)(int)lVar43 * 8 != lVar35);
        }
        local_790 = *(byte *)((longlong)param_1 + 0x2d3) >> 5 & 1;
        local_78d = *(byte *)((longlong)param_1 + 0x2d3) >> 6 & 1;
        local_780 = *(undefined1 *)((longlong)param_1 + 0x2ea);
        if (((*(byte *)((longlong)param_1 + 0x2e4) & 8) != 0) &&
           (lVar43 = param_1[0x15], lVar43 != 0)) {
          uVar32 = FUN_140757e32();
          plVar33 = (longlong *)FUN_144718840(lVar43,uVar32);
          if (plVar33 != (longlong *)0x0) {
            (**(code **)(*plVar33 + 0x20))(plVar33,&local_7a0);
          }
        }
        local_810 = (**(code **)(*param_1 + 0x580))(param_1);
        local_478 = param_1[0x48];
        lStack_470 = param_1[0x49];
        local_818 = &local_478;
        local_468 = param_1[0x4a];
        lStack_460 = param_1[0x4b];
        local_7d8 = param_1[0x4c];
        lStack_7d0 = param_1[0x4d];
        local_7c8 = param_1[0x4e];
        local_800 = &DAT_14cad0f08;
        local_808 = &local_7a0;
        (**(code **)(*param_1 + 0x608))(param_1,&local_7b8,local_7f0);
        if (0 < (int)uStack_7b0) {
          lVar43 = 0;
          lVar41 = 0;
          do {
            lVar35 = local_7b8;
            iVar26 = *(int *)(local_7b8 + 0x24 + lVar43);
            if ((((iVar26 != 0) && (uVar25 = *(uint *)(local_7b8 + 0x20 + lVar43), -1 < (int)uVar25)
                 ) && (((int)uVar25 < DAT_14c9647dc &&
                       (((puVar37 = (undefined8 *)
                                    ((ulonglong)((uVar25 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8)),
                         puVar37 != (undefined8 *)0x0 && (*(int *)(puVar37 + 2) == iVar26)) &&
                        ((*(uint *)(puVar37 + 1) & 0x10200000) == 0)))))) &&
               ((plVar33 = (longlong *)*puVar37, plVar33 != local_7f8 && plVar33 != (longlong *)0x0
                && ((*(byte *)((longlong)plVar33 + 0x2d3) & 8) != 0)))) {
              lVar29 = local_7b8 + lVar43;
              bVar46 = local_7f0 != 0;
              cVar24 = FUN_144a41512(lVar29);
              if (cVar24 == '\x01' && bVar46) {
                if (*(longlong *)(local_7f0 + 0x30) == 0) {
                  uVar32 = 0;
                }
                else {
                  uVar32 = *(undefined8 *)(*(longlong *)(local_7f0 + 0x30) + 0x2b0);
                }
                cVar24 = FUN_144a3f970(lVar29,uVar32);
                if ((cVar24 == '\0') &&
                   ((lVar28 = FUN_144a3ff20(lVar29), lVar28 == 0 ||
                    (lVar29 = FUN_144a3ff20(lVar29), (*(byte *)(lVar29 + 100) & 2) != 0)))) {
                  uVar39 = local_b8;
                  lVar29 = (longlong)(int)local_b8;
                  uVar25 = (int)local_b8 + 1;
                  local_b8 = CONCAT44(local_b8._4_4_,uVar25);
                  if (local_b8._4_4_ < uVar25) {
                    FUN_14011d10e(local_3d8,uVar39 & 0xffffffff);
                  }
                  puVar31 = local_c0;
                  if (local_c0 == (undefined1 *)0x0) {
                    puVar31 = local_3d8;
                  }
                  FUN_14017efda(puVar31 + lVar29 * 0x108,plVar33,
                                *(undefined4 *)(lVar35 + 0x28 + lVar43));
                }
              }
            }
            lVar41 = lVar41 + 1;
            lVar43 = lVar43 + 0x48;
          } while (lVar41 < (int)uStack_7b0);
        }
        lVar43 = (longlong)(int)local_b8;
        FUN_140717bfe(local_428,local_b8 & 0xffffffff,1);
        plVar33 = local_7e8;
        if (0 < lVar43) {
          lVar41 = 0;
          lVar35 = 0;
          do {
            puVar31 = local_c0;
            if (local_c0 == (undefined1 *)0x0) {
              puVar31 = local_3d8;
            }
            puVar40 = local_3e8;
            if (local_3e8 == (undefined1 *)0x0) {
              puVar40 = local_428;
            }
            *(undefined1 **)(puVar40 + lVar35 * 8) = puVar31 + lVar41;
            lVar35 = lVar35 + 1;
            lVar41 = lVar41 + 0x108;
          } while (lVar43 != lVar35);
        }
        if (local_730 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        if (local_750 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        param_1 = local_7f8;
        if (local_7b8 != 0) {
          FUN_1400020a8();
        }
      }
LAB_140237cfd:
      iVar26 = (int)param_1[0x81];
      if (0 < (longlong)iVar26) {
        plVar38 = param_1 + 0x80;
        local_438 = (longlong *)0x0;
        local_430 = 0x800000000;
        local_7e0 = plVar38;
        if (plVar33 == param_1) {
          uVar25 = *(uint *)(lVar42 + 0xc);
          if ((int)uVar25 < DAT_14c9647dc) {
            lVar42 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8);
          }
          else {
            lVar42 = 0;
          }
          local_7f0 = CONCAT44(local_7f0._4_4_,*(int *)(lVar42 + 0x10));
          if (*(int *)(lVar42 + 0x10) == 0) {
            LOCK();
            iVar26 = DAT_14c964868 + 1;
            UNLOCK();
            iVar36 = DAT_14c964868 + 1;
            bVar46 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar26;
            if (bVar46) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar36);
            }
            LOCK();
            iVar26 = *(int *)(lVar42 + 0x10);
            bVar46 = iVar26 == 0;
            if (bVar46) {
              *(int *)(lVar42 + 0x10) = iVar36;
              iVar26 = 0;
            }
            UNLOCK();
            if (bVar46) {
              iVar26 = iVar36;
            }
            local_7f0 = CONCAT44(local_7f0._4_4_,iVar26);
          }
          iVar26 = (int)param_1[0x81];
          iVar36 = (uint)local_430 + iVar26;
          if (iVar36 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar36);
          }
          if ((int)local_430._4_4_ < iVar36) {
            FUN_1417bea36(&local_478);
            iVar26 = (int)param_1[0x81];
          }
          if (iVar26 != 0) {
            lVar42 = *plVar38;
            lVar43 = (longlong)iVar26 * 0x108;
            do {
              lVar41 = FUN_14485cccc(lVar42 + 0xc0);
              uVar44 = 0;
              iVar26 = 0;
              if (lVar41 != 0) {
                uVar44 = *(uint *)(lVar41 + 0xc);
                if ((int)uVar44 < DAT_14c9647dc) {
                  lVar41 = (ulonglong)((uVar44 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar44 >> 0x10) * 8);
                }
                else {
                  lVar41 = 0;
                }
                iVar26 = *(int *)(lVar41 + 0x10);
                if (*(int *)(lVar41 + 0x10) == 0) {
                  LOCK();
                  iVar26 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar36 = DAT_14c964868 + 1;
                  bVar46 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar26;
                  if (bVar46) {
                    local_7e8 = (longlong *)CONCAT44(local_7e8._4_4_,iVar36);
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar36);
                    iVar36 = (int)local_7e8;
                  }
                  LOCK();
                  iVar26 = *(int *)(lVar41 + 0x10);
                  bVar46 = iVar26 == 0;
                  if (bVar46) {
                    *(int *)(lVar41 + 0x10) = iVar36;
                    iVar26 = 0;
                  }
                  UNLOCK();
                  if (bVar46) {
                    iVar26 = iVar36;
                  }
                }
              }
              uVar39 = local_430;
              if ((uVar44 != uVar25) || (iVar26 != (int)local_7f0)) {
                lVar41 = (longlong)(int)(uint)local_430;
                uVar44 = (uint)local_430 + 1;
                local_430 = CONCAT44(local_430._4_4_,uVar44);
                if (local_430._4_4_ < uVar44) {
                  FUN_140717c4c(&local_478,uVar39 & 0xffffffff);
                }
                plVar33 = local_438;
                if (local_438 == (longlong *)0x0) {
                  plVar33 = &local_478;
                }
                plVar33[lVar41] = lVar42;
              }
              lVar42 = lVar42 + 0x108;
              lVar43 = lVar43 + -0x108;
            } while (lVar43 != 0);
          }
        }
        else {
          FUN_140717bfe(&local_478,iVar26,1);
          lVar42 = 0;
          lVar43 = 0;
          do {
            plVar33 = local_438;
            if (local_438 == (longlong *)0x0) {
              plVar33 = &local_478;
            }
            plVar33[lVar43] = *local_7e0 + lVar42;
            lVar43 = lVar43 + 1;
            lVar42 = lVar42 + 0x108;
          } while (iVar26 != lVar43);
        }
        if (0 < (int)(uint)local_430) {
          uVar44 = 0;
          uVar25 = (uint)local_430;
          do {
            if ((longlong)(int)local_3e0 < 1) break;
            puVar31 = local_3e8;
            if (local_3e8 == (undefined1 *)0x0) {
              puVar31 = local_428;
            }
            plVar33 = local_438;
            if (local_438 == (longlong *)0x0) {
              plVar33 = &local_478;
            }
            local_7f0 = (longlong)(int)uVar44;
            lVar42 = plVar33[local_7f0];
            iVar26 = 1;
            lVar41 = 0;
            lVar43 = 0;
            do {
              lVar35 = *(longlong *)(puVar31 + lVar41);
              if (((*(int *)(lVar42 + 0xe0) == *(int *)(lVar35 + 0xe0)) &&
                  (*(int *)(lVar42 + 0xe4) == *(int *)(lVar35 + 0xe4))) &&
                 (*(int *)(lVar42 + 0xb0) == *(int *)(lVar35 + 0xb0))) {
                if (iVar26 != 0) {
                  iVar26 = (int)local_3e0 - iVar26;
                  if (iVar26 != 0) {
                    if (0 < iVar26) {
                      iVar26 = 1;
                    }
                    memmove(puVar31 + (lVar43 >> 0x20) * 8,
                            puVar31 + (ulonglong)(uint)((int)local_3e0 - iVar26) * 8,
                            (longlong)iVar26 << 3);
                    uVar25 = (uint)local_430;
                  }
                  local_3e0 = CONCAT44(local_3e0._4_4_,(int)local_3e0 + -1);
                  iVar26 = ~uVar44 + uVar25;
                  if (iVar26 != 0) {
                    if (0 < iVar26) {
                      iVar26 = 1;
                    }
                    plVar33 = local_438;
                    if (local_438 == (longlong *)0x0) {
                      plVar33 = &local_478;
                    }
                    memmove(plVar33 + local_7f0,plVar33 + (int)(uVar25 - iVar26),
                            (longlong)iVar26 << 3);
                    uVar25 = (uint)local_430;
                  }
                  uVar25 = uVar25 - 1;
                  local_430 = CONCAT44(local_430._4_4_,uVar25);
                  uVar44 = uVar44 - 1;
                }
                break;
              }
              lVar43 = lVar43 + 0x100000000;
              iVar26 = iVar26 + 1;
              lVar41 = lVar41 + 8;
            } while ((longlong)(int)local_3e0 << 3 != lVar41);
            uVar44 = uVar44 + 1;
          } while ((int)uVar44 < (int)uVar25);
          if (0 < (int)uVar25) {
            local_488 = (char **)0x0;
            local_480 = 0x300000000;
            FUN_1417be652(&local_7a0,uVar25,1);
            plVar33 = &local_478;
            if (local_438 != (longlong *)0x0) {
              plVar33 = local_438;
            }
            lVar42 = 0;
            do {
              ppcVar30 = local_488;
              if (local_488 == (char **)0x0) {
                ppcVar30 = &local_7a0;
              }
              memcpy(ppcVar30 + lVar42,(void *)*plVar33,0x108);
              lVar42 = lVar42 + 0x21;
              plVar33 = plVar33 + 1;
            } while ((ulonglong)uVar25 * 0x21 != lVar42);
            ppcVar30 = &local_7a0;
            if (local_488 != (char **)0x0) {
              ppcVar30 = local_488;
            }
            if ((longlong)(int)local_480 != 0) {
              ppcVar45 = ppcVar30 + (longlong)(int)local_480 * 0x21;
              do {
                iVar26 = *(int *)((longlong)ppcVar30 + 0xe4);
                if ((((iVar26 == 0) || (uVar25 = *(uint *)(ppcVar30 + 0x1c), (int)uVar25 < 0)) ||
                    ((DAT_14c9647dc <= (int)uVar25 ||
                     ((lVar42 = (ulonglong)((uVar25 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar25 >> 0x10) * 8),
                      lVar42 == 0 || (*(int *)(lVar42 + 0x10) != iVar26)))))) ||
                   ((*(uint *)(lVar42 + 8) & 0x10200000) != 0)) {
                  iVar36 = (int)local_7f8[0x81];
                  if ((longlong)iVar36 != 0) {
                    iVar2 = *(int *)((longlong)local_7f8 + 0x40c);
                    lVar42 = local_7f8[0x80];
                    lVar43 = 0;
                    do {
                      if (((*(int *)(ppcVar30 + 0x1c) == *(int *)(lVar42 + 0xe0 + lVar43)) &&
                          (iVar26 == *(int *)(lVar42 + 0xe4 + lVar43))) &&
                         (*(int *)(ppcVar30 + 0x16) == *(int *)(lVar42 + 0xb0 + lVar43))) {
                        uVar25 = (int)(lVar43 >> 3) * 0x3e0f83e1;
                        if (uVar25 != 0xffffffff) {
                          iVar26 = ~uVar25 + iVar36;
                          if (iVar26 != 0) {
                            if (0 < iVar26) {
                              iVar26 = 1;
                            }
                            memmove((void *)((longlong)(int)uVar25 * 0x108 + lVar42),
                                    (void *)((longlong)(iVar36 - iVar26) * 0x108 + lVar42),
                                    (longlong)iVar26 * 0x108);
                            iVar36 = (int)local_7f8[0x81];
                          }
                          *(int *)(local_7f8 + 0x81) = iVar36 + -1;
                          if (0x17 < iVar2) {
                            FUN_1479fc2d4(local_7e0);
                          }
                        }
                        break;
                      }
                      lVar43 = lVar43 + 0x108;
                    } while ((longlong)iVar36 * 0x108 != lVar43);
                  }
                }
                else {
                  FUN_1400fc306(local_7f8,ppcVar30,param_3,0);
                }
                ppcVar30 = ppcVar30 + 0x21;
              } while (ppcVar30 != ppcVar45);
            }
            if (local_488 != (char **)0x0) {
              FUN_1400020a8();
            }
          }
        }
        param_1 = local_7f8;
        if (local_438 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar31 = local_3e8;
      if (local_3e8 == (undefined1 *)0x0) {
        puVar31 = local_428;
      }
      lVar42 = (longlong)(int)local_3e0;
      if (lVar42 != 0) {
        lVar43 = 0;
        do {
          FUN_143482e8e(param_1,*(undefined8 *)(puVar31 + lVar43),param_3);
          lVar43 = lVar43 + 8;
        } while (lVar42 * 8 != lVar43);
      }
      if (local_3e8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_c0 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar39 = 0;
  }
  local_318 = (undefined1 *)0x0;
  local_310 = 0x1800000000;
  uVar25 = *(uint *)(param_1 + 0x28);
  if (uVar25 != 0) {
    local_310 = CONCAT44(0x18,uVar25);
    if (0x18 < uVar25) {
      FUN_14024d3e4(local_3d8,0);
    }
    puVar31 = local_318;
    if (local_318 == (undefined1 *)0x0) {
      puVar31 = local_3d8;
    }
    FUN_144738dca(puVar31,local_7f8[0x27],uVar25);
    lVar42 = (longlong)(int)local_310;
    puVar31 = local_318;
    if (local_318 == (undefined1 *)0x0) {
      puVar31 = local_3d8;
    }
    if (lVar42 != 0) {
      lVar43 = 0;
      do {
        plVar33 = *(longlong **)(puVar31 + lVar43);
        if (plVar33 != (longlong *)0x0) {
          if ((longlong)(int)plVar33[0x44] < 1) {
            if ((DAT_14c76142c != 1) || (bVar34 = *(byte *)(plVar33 + 0x3f), (bVar34 & 2) == 0)) {
              pcVar3 = *(code **)(*plVar33 + 0x508);
              if ((pcVar3 == FUN_14023764e) || (pcVar3 == (code *)&LAB_1401c4fb8)) {
                cVar24 = FUN_14023764e(plVar33,0,param_3);
              }
              else {
                cVar24 = (*pcVar3)(plVar33,0,param_3,0);
              }
              bVar34 = *(byte *)(plVar33 + 0x3f) & 0xfd | cVar24 * '\x02';
              *(byte *)(plVar33 + 0x3f) = bVar34;
            }
          }
          else {
            lVar41 = *(longlong *)(plVar33[0x43] + -8 + (longlong)(int)plVar33[0x44] * 8);
            *(byte *)(lVar41 + 0x608) = *(byte *)(lVar41 + 0x608) | 2;
            *(undefined4 *)(lVar41 + 0x10) = 3;
            *(undefined4 *)(lVar41 + 200) = 0xffffffff;
            bVar34 = *(byte *)(plVar33 + 0x3f);
          }
          uVar39 = CONCAT71((int7)(uVar39 >> 8),(byte)uVar39 & (bVar34 & 2) >> 1);
        }
        lVar43 = lVar43 + 8;
      } while (lVar42 * 8 != lVar43);
    }
  }
  if ((*(byte *)((longlong)local_7f8 + 0x1f9) & 4) != 0) {
    (**(code **)(*local_7f8 + 0x550))(local_7f8,param_3);
    uVar39 = 0;
  }
  if (local_318 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1402384bc:
  if ((local_b0 ^ (ulonglong)auStack_838) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar39 & 0xffffff01;
}



// FUNCTION 140238b76 FUN_140238b76 body=443 status=ok
// SIG undefined FUN_140238b76(void)

ulonglong FUN_140238b76(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_138 [32];
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined7 uVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar8 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar7 = CONCAT71(uVar8,1);
  if (uVar1 != 0) {
    local_50 = CONCAT44(0x18,uVar1);
    if (0x18 < uVar1) {
      FUN_14024d3e4(local_118,0);
    }
    puVar6 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar6 = local_118;
    }
    FUN_144738dca(puVar6,param_1[0x27],uVar1);
    lVar9 = (longlong)(int)local_50;
    puVar6 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar6 = local_118;
    }
    if (lVar9 != 0) {
      uVar7 = CONCAT71(uVar8,1);
      lVar10 = 0;
      do {
        plVar2 = *(longlong **)(puVar6 + lVar10);
        if (plVar2 != (longlong *)0x0) {
          if ((longlong)(int)plVar2[0x44] < 1) {
            if ((DAT_14c76142c != 1) || (bVar5 = *(byte *)(plVar2 + 0x3f), (bVar5 & 2) == 0)) {
              cVar4 = (**(code **)(*plVar2 + 0x508))(plVar2,0,param_3,0);
              bVar5 = *(byte *)(plVar2 + 0x3f) & 0xfd | cVar4 * '\x02';
              *(byte *)(plVar2 + 0x3f) = bVar5;
            }
          }
          else {
            lVar3 = *(longlong *)(plVar2[0x43] + -8 + (longlong)(int)plVar2[0x44] * 8);
            *(byte *)(lVar3 + 0x608) = *(byte *)(lVar3 + 0x608) | 2;
            *(undefined4 *)(lVar3 + 0x10) = 3;
            *(undefined4 *)(lVar3 + 200) = 0xffffffff;
            bVar5 = *(byte *)(plVar2 + 0x3f);
          }
          uVar7 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 & (bVar5 & 2) >> 1);
        }
        lVar10 = lVar10 + 8;
      } while (lVar9 * 8 != lVar10);
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x1f9) & 4) != 0) {
    (**(code **)(*param_1 + 0x550))(param_1,param_3);
    uVar7 = 0;
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 140238d32 FUN_140238d32 body=138 status=ok
// SIG undefined FUN_140238d32(void)

longlong * FUN_140238d32(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  lVar4 = (longlong)iVar1;
  if (0 < lVar4) {
    lVar2 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar2 = param_2;
    }
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) == *param_3) {
        *(undefined1 *)(param_1 + 1) = 1;
        return param_1;
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 - lVar3 != 0);
  }
  *(uint *)(param_2 + 0x28) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x2c) < iVar1 + 1U) {
    FUN_1462b1344(param_2,iVar1);
  }
  lVar2 = *(longlong *)(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    lVar2 = param_2;
  }
  *(longlong *)(lVar2 + lVar4 * 8) = *param_3;
  return param_1;
}



// FUNCTION 140238dbc FUN_140238dbc body=2153 status=ok
// SIG undefined FUN_140238dbc(void)

void FUN_140238dbc(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  double dVar12;
  longlong lVar13;
  double dVar14;
  double *pdVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  undefined7 uVar20;
  longlong lVar19;
  undefined8 unaff_RBX;
  undefined6 uVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1402396d6();
  if ((*(byte *)(param_1 + 0x60) & 0x10) == 0) {
LAB_140238df5:
    uVar9 = *(undefined1 *)(param_1 + 0x688);
    *(undefined1 *)(param_1 + 0x688) = 0;
    *(undefined8 *)(param_1 + 0x680) = 0;
    FUN_140239626(param_1 + 0x6d0);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c998000) {
      FUN_144b3d300(&DAT_14c998000);
      if (DAT_14c998000 == -1) {
        FUN_145984cc0(&DAT_14c997f90);
        atexit((_func_5014 *)&LAB_142a64008);
        _Init_thread_footer(&DAT_14c998000);
      }
    }
    puVar17 = &DAT_14c997f90;
    uVar21 = (undefined6)((ulonglong)param_3 >> 0x10);
    uVar22 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar9) & 0xffffffff;
  }
  else {
    if ((*(int *)(*(longlong *)(param_1 + 0x430) + 0xd98) < 1) &&
       (*(int *)(*(longlong *)(param_1 + 0x430) + 0xda8) < 1)) {
      if (*(longlong **)(param_1 + 0x428) != (longlong *)0x0) {
        cVar10 = (**(code **)(**(longlong **)(param_1 + 0x428) + 0xbb0))();
        if (cVar10 != '\0') goto LAB_140238f99;
      }
      goto LAB_140238df5;
    }
LAB_140238f99:
    if ((*(longlong *)(param_1 + 0x428) == 0) ||
       (lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x428) + 0xae8), lVar19 == 0)) {
      plVar18 = (longlong *)0x0;
    }
    else {
      plVar18 = *(longlong **)(lVar19 + 0x358);
    }
    *(undefined1 *)(param_1 + 0x688) = 1;
    puVar17 = *(undefined8 **)(param_1 + 0x450);
    if (puVar17 == (undefined8 *)0x0) {
      *(undefined2 *)(param_1 + 0x689) = 0;
LAB_140239231:
      param_3 = FUN_1447210f0(param_1);
      param_3 = param_3 + 0x710;
      lVar19 = *(longlong *)(param_1 + 0x1c8);
      if (lVar19 == 0) {
        local_58 = DAT_14c8464f0;
        local_68 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_60 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_68 = *(double *)(lVar19 + 0x260);
        uStack_60 = *(double *)(lVar19 + 0x268);
        local_58 = *(double *)(lVar19 + 0x270);
      }
      puVar17 = &local_88;
      FUN_147a92d32(puVar17,&local_68,param_3);
    }
    else {
      cVar10 = *(char *)((longlong)puVar17 + 0x1fb);
      *(bool *)(param_1 + 0x689) = cVar10 == '\x02';
      if ((*(byte *)(param_1 + 0x442) & 2) == 0) {
        *(undefined1 *)(param_1 + 0x68a) = 0;
      }
      else {
        *(bool *)(param_1 + 0x68a) = *(char *)((longlong)puVar17 + 0x1fb) == '\x02';
      }
      if (cVar10 != '\x02') goto LAB_140239231;
      local_78 = *(double *)(param_1 + 0x468);
      local_88 = *(double *)(param_1 + 0x458);
      uStack_80 = *(double *)(param_1 + 0x460);
    }
    uVar23 = SUB84(puVar17,0);
    *(double *)(param_1 + 0x6a0) = local_78;
    *(undefined4 *)(param_1 + 0x690) = (undefined4)local_88;
    *(undefined4 *)(param_1 + 0x694) = local_88._4_4_;
    *(undefined4 *)(param_1 + 0x698) = (undefined4)uStack_80;
    *(undefined4 *)(param_1 + 0x69c) = uStack_80._4_4_;
    if (*(char *)(param_1 + 0x68a) == '\x01') {
      local_58 = *(double *)(param_1 + 0x480);
      uVar23 = *(undefined4 *)(param_1 + 0x470);
      uVar24 = *(undefined4 *)(param_1 + 0x474);
      uVar25 = *(undefined4 *)(param_1 + 0x478);
      uVar26 = *(undefined4 *)(param_1 + 0x47c);
    }
    else {
      lVar19 = *(longlong *)(param_1 + 0x1c8);
      if (lVar19 == 0) {
        local_58 = DAT_14c846508;
        uVar23 = (undefined4)DAT_14c8464f8;
        uVar24 = DAT_14c8464f8._4_4_;
        uVar25 = (undefined4)DAT_14c846500;
        uVar26 = DAT_14c846500._4_4_;
      }
      else {
        dVar12 = *(double *)(lVar19 + 0x240);
        dVar6 = *(double *)(lVar19 + 0x248);
        dVar7 = *(double *)(lVar19 + 0x250);
        dVar8 = *(double *)(lVar19 + 600);
        pdVar15 = *(double **)(lVar19 + 0x228);
        dVar14 = local_78;
        local_88 = dVar12;
        uStack_80 = dVar6;
        local_78 = dVar7;
        uStack_70 = dVar8;
        if (pdVar15 == (double *)0x0) {
          uVar23 = 0x40;
          pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
          dVar14 = DAT_14c8463d8;
          *pdVar15 = DAT_14c8463d0;
          pdVar15[1] = dVar14;
          dVar14 = DAT_14c8463e8;
          pdVar15[2] = DAT_14c8463e0;
          pdVar15[3] = dVar14;
          dVar14 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
          pdVar15[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
          pdVar15[5] = dVar14;
          dVar14 = DAT_14c846508;
          pdVar15[6] = DAT_14c846508;
          *(double **)(lVar19 + 0x228) = pdVar15;
        }
        auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar15[1]);
        auVar3._0_8_ = -(ulonglong)(dVar12 != *pdVar15);
        auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar15[1]) >> 0x20);
        iVar11 = movmskpd(SUB84(dVar14,0),auVar3);
        auVar5._8_4_ = (int)-(ulonglong)(dVar8 != pdVar15[3]);
        auVar5._0_8_ = -(ulonglong)(dVar7 != pdVar15[2]);
        auVar5._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar15[3]) >> 0x20);
        uVar16 = movmskpd(uVar23,auVar5);
        if ((uVar16 & 0x3fffffff) != 0 || iVar11 != 0) {
          *(undefined4 *)(pdVar15 + 2) = (undefined4)local_78;
          *(undefined4 *)((longlong)pdVar15 + 0x14) = local_78._4_4_;
          *(undefined4 *)(pdVar15 + 3) = (undefined4)uStack_70;
          *(undefined4 *)((longlong)pdVar15 + 0x1c) = uStack_70._4_4_;
          *(undefined4 *)pdVar15 = (undefined4)local_88;
          *(undefined4 *)((longlong)pdVar15 + 4) = local_88._4_4_;
          *(undefined4 *)(pdVar15 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_80._4_4_;
          FUN_1448052ee(&local_88,&local_68);
          pdVar15[6] = local_58;
          pdVar15[4] = local_68;
          pdVar15[5] = uStack_60;
        }
        local_58 = pdVar15[6];
        uVar23 = *(undefined4 *)(pdVar15 + 4);
        uVar24 = *(undefined4 *)((longlong)pdVar15 + 0x24);
        uVar25 = *(undefined4 *)(pdVar15 + 5);
        uVar26 = *(undefined4 *)((longlong)pdVar15 + 0x2c);
      }
    }
    local_68 = (double)CONCAT44(uVar24,uVar23);
    uStack_60 = (double)CONCAT44(uVar26,uVar25);
    *(double *)(param_1 + 0x6b8) = local_58;
    *(undefined4 *)(param_1 + 0x6a8) = uVar23;
    *(undefined4 *)(param_1 + 0x6ac) = uVar24;
    *(undefined4 *)(param_1 + 0x6b0) = uVar25;
    *(undefined4 *)(param_1 + 0x6b4) = uVar26;
    lVar19 = *(longlong *)(param_1 + 0x450);
    if (DAT_14c950c29 == '\x01') {
      if (lVar19 == 0) {
        lVar19 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar19 = *(longlong *)(param_1 + 0x450);
      }
    }
    *(longlong *)(param_1 + 0x6c0) = lVar19;
    *(undefined8 *)(param_1 + 0x6c8) = *(undefined8 *)(param_1 + 0x444);
    if (plVar18 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x680) = 0;
    }
    else {
      lVar13 = FUN_144b00ba4(*plVar18);
      lVar19 = *plVar18;
      if (lVar13 == DAT_14c951640) {
        if ((*(int *)(lVar19 + 0x170) != 0) && (*(int *)(*(longlong *)(lVar19 + 0x168) + 0x10) != 0)
           ) {
          lVar19 = **(longlong **)(*(longlong *)(lVar19 + 0x168) + 8);
          goto LAB_140239321;
        }
        lVar19 = 0;
      }
      else {
LAB_140239321:
        if ((lVar19 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar19);
        }
      }
      *(longlong *)(param_1 + 0x680) = lVar19;
      *(int *)(param_1 + 0x68c) = (int)plVar18[0x29];
    }
    FUN_140fb3d70(param_1 + 0x6d0,*(longlong *)(param_1 + 0x430) + 0xd88);
    FUN_144b21218(*(undefined8 *)(param_1 + 0x430),&local_88);
    *(double *)(param_1 + 0x728) = local_78;
    *(double *)(param_1 + 0x718) = local_88;
    *(double *)(param_1 + 0x720) = uStack_80;
    lVar19 = *(longlong *)(param_1 + 0x430);
    uVar1 = *(undefined8 *)(lVar19 + 0x138);
    uVar23 = *(undefined4 *)(lVar19 + 300);
    uVar24 = *(undefined4 *)(lVar19 + 0x130);
    uVar25 = *(undefined4 *)(lVar19 + 0x134);
    *(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(lVar19 + 0x128);
    *(undefined4 *)(param_1 + 0x734) = uVar23;
    *(undefined4 *)(param_1 + 0x738) = uVar24;
    *(undefined4 *)(param_1 + 0x73c) = uVar25;
    *(undefined8 *)(param_1 + 0x740) = uVar1;
    puVar17 = (undefined8 *)FUN_144a83aa4();
    uVar21 = (undefined6)((ulonglong)param_3 >> 0x10);
    uVar22 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
  }
  FUN_1448ef1fe(puVar17,param_1,CONCAT62(uVar21,0x18),uVar22);
  *(byte *)(param_1 + 0x550) =
       *(byte *)(param_1 + 0x550) & 0xfb | (0.0 < *(float *)(param_1 + 0x558)) << 2;
  plVar18 = *(longlong **)(param_1 + 0x430);
  uVar9 = (**(code **)(*plVar18 + 0x5e0))();
  *(undefined1 *)(param_1 + 0x552) = uVar9;
  lVar19 = *(longlong *)(param_1 + 0x430);
  uVar23 = *(undefined4 *)(lVar19 + 0x230);
  uVar24 = *(undefined4 *)(lVar19 + 0x234);
  uVar25 = *(undefined4 *)(lVar19 + 0x238);
  uVar26 = *(undefined4 *)(lVar19 + 0x23c);
  *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(lVar19 + 0x240);
  *(undefined4 *)(param_1 + 0x518) = uVar23;
  *(undefined4 *)(param_1 + 0x51c) = uVar24;
  *(undefined4 *)(param_1 + 0x520) = uVar25;
  *(undefined4 *)(param_1 + 0x524) = uVar26;
  if ((*(byte *)(param_1 + 0x60) & 0x10) != 0) {
    *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x448);
    *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(param_1 + 0x440);
    if (DAT_14c950c29 == '\x01') {
      plVar18 = *(longlong **)(param_1 + 0x450);
      if (plVar18 == (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x498) = 0;
        *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_1 + 0x458);
        *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_1 + 0x45c);
        *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_1 + 0x460);
        *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_1 + 0x464);
        *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_1 + 0x468);
        *(undefined8 *)(param_1 + 0x4b8) = *(undefined8 *)(param_1 + 0x470);
        *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_1 + 0x478);
        *(undefined8 *)(param_1 + 0x4c8) = *(undefined8 *)(param_1 + 0x480);
        goto LAB_140238ebf;
      }
      FUN_1456cec3c();
    }
    dVar12 = *(double *)(param_1 + 0x450);
    *(double *)(param_1 + 0x498) = dVar12;
    *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_1 + 0x458);
    *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(param_1 + 0x460);
    *(undefined8 *)(param_1 + 0x4b0) = *(undefined8 *)(param_1 + 0x468);
    *(undefined8 *)(param_1 + 0x4b8) = *(undefined8 *)(param_1 + 0x470);
    *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_1 + 0x478);
    *(undefined4 *)(param_1 + 0x4c4) = *(undefined4 *)(param_1 + 0x47c);
    *(undefined4 *)(param_1 + 0x4c8) = *(undefined4 *)(param_1 + 0x480);
    *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x484);
    if ((dVar12 != 0.0) && (*(char *)((longlong)dVar12 + 0x1fb) == '\x02')) {
      lVar19 = *(longlong *)(param_1 + 0x430);
      uVar20 = (undefined7)((ulonglong)plVar18 >> 8);
      uVar23 = (undefined4)CONCAT71(uVar20,4);
      if ((*(double *)(lVar19 + 0x128) == 0.0) && (!NAN(*(double *)(lVar19 + 0x128)))) {
        if ((*(double *)(lVar19 + 0x130) == 0.0) && (!NAN(*(double *)(lVar19 + 0x130)))) {
          uVar23 = (undefined4)CONCAT71(uVar20,(*(double *)(lVar19 + 0x138) != 0.0) << 2);
        }
      }
      *(byte *)(param_1 + 0x48a) = *(byte *)(param_1 + 0x48a) & 0xfb | (byte)uVar23;
      if (((*(byte *)(param_1 + 0x442) & 2) == 0) || (*(char *)((longlong)dVar12 + 0x1fb) != '\x02')
         ) {
        lVar19 = *(longlong *)(param_1 + 0x1c8);
        if (lVar19 == 0) {
          local_58 = DAT_14c846508;
          uVar23 = (undefined4)DAT_14c8464f8;
          uVar24 = DAT_14c8464f8._4_4_;
          uVar25 = (undefined4)DAT_14c846500;
          uVar26 = DAT_14c846500._4_4_;
        }
        else {
          dVar6 = *(double *)(lVar19 + 0x240);
          dVar7 = *(double *)(lVar19 + 0x248);
          dVar8 = *(double *)(lVar19 + 0x250);
          dVar14 = *(double *)(lVar19 + 600);
          pdVar15 = *(double **)(lVar19 + 0x228);
          local_88 = dVar6;
          uStack_80 = dVar7;
          local_78 = dVar8;
          uStack_70 = dVar14;
          if (pdVar15 == (double *)0x0) {
            uVar23 = 0x40;
            pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
            dVar12 = DAT_14c8463d8;
            *pdVar15 = DAT_14c8463d0;
            pdVar15[1] = dVar12;
            dVar12 = DAT_14c8463e8;
            pdVar15[2] = DAT_14c8463e0;
            pdVar15[3] = dVar12;
            dVar12 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
            pdVar15[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
            pdVar15[5] = dVar12;
            dVar12 = DAT_14c846508;
            pdVar15[6] = DAT_14c846508;
            *(double **)(lVar19 + 0x228) = pdVar15;
          }
          auVar2._8_4_ = (int)-(ulonglong)(dVar7 != pdVar15[1]);
          auVar2._0_8_ = -(ulonglong)(dVar6 != *pdVar15);
          auVar2._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar15[1]) >> 0x20);
          iVar11 = movmskpd(SUB84(dVar12,0),auVar2);
          auVar4._8_4_ = (int)-(ulonglong)(dVar14 != pdVar15[3]);
          auVar4._0_8_ = -(ulonglong)(dVar8 != pdVar15[2]);
          auVar4._12_4_ = (int)(-(ulonglong)(dVar14 != pdVar15[3]) >> 0x20);
          uVar16 = movmskpd(uVar23,auVar4);
          if ((uVar16 & 0x3fffffff) != 0 || iVar11 != 0) {
            *(undefined4 *)(pdVar15 + 2) = (undefined4)local_78;
            *(undefined4 *)((longlong)pdVar15 + 0x14) = local_78._4_4_;
            *(undefined4 *)(pdVar15 + 3) = (undefined4)uStack_70;
            *(undefined4 *)((longlong)pdVar15 + 0x1c) = uStack_70._4_4_;
            *(undefined4 *)pdVar15 = (undefined4)local_88;
            *(undefined4 *)((longlong)pdVar15 + 4) = local_88._4_4_;
            *(undefined4 *)(pdVar15 + 1) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_80._4_4_;
            FUN_1448052ee(&local_88,&local_68);
            pdVar15[6] = local_58;
            pdVar15[4] = local_68;
            pdVar15[5] = uStack_60;
          }
          local_58 = pdVar15[6];
          uVar23 = *(undefined4 *)(pdVar15 + 4);
          uVar24 = *(undefined4 *)((longlong)pdVar15 + 0x24);
          uVar25 = *(undefined4 *)(pdVar15 + 5);
          uVar26 = *(undefined4 *)((longlong)pdVar15 + 0x2c);
        }
        local_68 = (double)CONCAT44(uVar24,uVar23);
        uStack_60 = (double)CONCAT44(uVar26,uVar25);
        *(double *)(param_1 + 0x4c8) = local_58;
        *(undefined4 *)(param_1 + 0x4b8) = uVar23;
        *(undefined4 *)(param_1 + 0x4bc) = uVar24;
        *(undefined4 *)(param_1 + 0x4c0) = uVar25;
        *(undefined4 *)(param_1 + 0x4c4) = uVar26;
      }
    }
  }
LAB_140238ebf:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c998000) {
    FUN_144b3d300(&DAT_14c998000);
    if (DAT_14c998000 == -1) {
      FUN_145984cc0(&DAT_14c997f90);
      atexit((_func_5014 *)&LAB_142a64008);
      _Init_thread_footer(&DAT_14c998000);
    }
  }
  uVar22 = CONCAT71((int7)(uVar22 >> 8),*(undefined1 *)(param_1 + 0x60)) & 0xffffffffffffff10;
  FUN_1448ef1fe(&DAT_14c997f90,param_1,0xe,CONCAT71((int7)(uVar22 >> 8),(byte)uVar22 >> 4));
  lVar19 = *(longlong *)(param_1 + 0x430);
  if ((*(char *)(lVar19 + 0x293) == '\x01') || (uVar23 = 0, (*(byte *)(lVar19 + 0x34a) & 0x10) != 0)
     ) {
    uVar23 = *(undefined4 *)(lVar19 + 0x3f0);
  }
  *(undefined4 *)(param_1 + 0x4d0) = uVar23;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140239626 FUN_140239626 body=98 status=ok
// SIG undefined FUN_140239626(void)

void FUN_140239626(longlong param_1)

{
  FUN_140239688(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1479d8fa2(param_1 + 8,0);
  }
  FUN_140239688(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_1479d8fa2(param_1 + 0x18,0);
  }
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xf0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  return;
}



// FUNCTION 140239688 FUN_140239688 body=77 status=ok
// SIG undefined FUN_140239688(void)

void FUN_140239688(longlong param_1,int param_2)

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



// FUNCTION 1402396d6 FUN_1402396d6 body=147 status=ok
// SIG undefined FUN_1402396d6(void)

void FUN_1402396d6(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auStack_58 [40];
  double local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448ef896();
  if ((*(char *)(param_1 + 0x178) == '\x03') &&
     (plVar1 = *(longlong **)(param_1 + 0x3c0), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x680))(plVar1,local_30);
    fVar2 = ((float)local_30[0] * 256.0) / 360.0;
    *(char *)(param_1 + 0x3a2) = (char)((ulonglong)(longlong)ROUND(fVar2 + fVar2 + 0.5) >> 1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14023976a FUN_14023976a body=1127 status=ok
// SIG undefined FUN_14023976a(void)

void FUN_14023976a(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,float *param_7,char param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  longlong lVar10;
  float *pfVar11;
  char cVar12;
  byte bVar13;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  float *local_150;
  float *local_148;
  byte local_140;
  float local_130;
  undefined8 local_12c;
  float local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  float fStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 local_d4;
  byte local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined8 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar10 = *(longlong *)(param_1 + 0x268);
  if (param_8 == '\0') {
    bVar13 = 0;
  }
  else {
    bVar13 = *(byte *)(param_1 + 0x3a);
  }
  if ((lVar10 != 0) && (*(char *)(lVar10 + 0x1c) != '\0')) {
    cVar12 = ((bVar13 ^ 1) & *(byte *)(param_1 + 0x298)) << 5;
    if ((*(char *)(param_1 + 0x299) == '\x01') && (DAT_14c96b1e0 == '\x01')) {
      local_158 = &local_120;
      local_120 = 0x3f0000003f000000;
      local_100 = 0xbf800000;
      fStack_f8 = 0.0;
      fStack_f4 = 1.0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_148 = (float *)((longlong)param_3 + 0x1c);
      local_12c = *(undefined8 *)((longlong)param_3 + 0xc);
      local_130 = *(float *)(param_3 + 1);
      local_150 = &local_130;
      local_10c = 0x3f800000;
      local_104 = 0;
      local_118 = *param_3;
      FUN_146978c22(&local_c8);
      pfVar11 = (float *)(lVar10 + 8);
      cVar9 = *(char *)(lVar10 + 0x18);
      if (cVar9 != '\0') {
        if (cVar9 == '\x01') {
          pfVar11 = (float *)FUN_1400c06fe(pfVar11);
        }
        else if (cVar9 == '\x03') {
          pfVar11 = param_7 + 8;
        }
        else {
          pfVar11 = param_7 + 4;
        }
      }
      fVar1 = *pfVar11;
      fVar2 = pfVar11[1];
      fVar3 = pfVar11[2];
      fVar4 = pfVar11[3];
      fVar5 = param_7[3];
      fVar6 = param_7[2];
      fVar7 = param_7[1];
      fVar8 = *param_7;
      pfVar11 = (float *)(param_1 + 0x270);
      cVar9 = *(char *)(param_1 + 0x280);
      if (cVar9 != '\0') {
        if (cVar9 == '\x01') {
          pfVar11 = (float *)FUN_1400c06fe(pfVar11);
        }
        else if (cVar9 == '\x03') {
          pfVar11 = param_7 + 8;
        }
        else {
          pfVar11 = param_7 + 4;
        }
      }
      local_124 = fVar4 * fVar5 * pfVar11[3];
      local_130 = fVar1 * fVar8 * *pfVar11;
      local_12c = CONCAT44(fVar3 * fVar6 * pfVar11[2],fVar2 * fVar7 * pfVar11[1]);
      local_100 = local_bc;
      fStack_f8 = local_c0;
      fStack_f4 = 0.0;
      uStack_f0 = 0;
      uStack_ec = (undefined4)local_c8;
      uStack_e8 = (undefined4)((ulonglong)local_c8 >> 0x20);
      local_e4 = local_ac;
      uStack_e0 = uStack_a8;
      uStack_dc = uStack_a4;
      uStack_d8 = uStack_a0;
      local_d4 = local_9c;
      local_cc = local_94 * '\x02' & 2;
      local_150 = &local_130;
      local_158 = (undefined8 *)CONCAT71(local_158._1_7_,cVar12);
      FUN_140239bd2(param_5,param_6,&local_100,lVar10);
    }
    else {
      pfVar11 = (float *)(lVar10 + 8);
      cVar9 = *(char *)(lVar10 + 0x18);
      if (cVar9 != '\0') {
        if (cVar9 == '\x01') {
          pfVar11 = (float *)FUN_1400c06fe(pfVar11);
        }
        else if (cVar9 == '\x03') {
          pfVar11 = param_7 + 8;
        }
        else {
          pfVar11 = param_7 + 4;
        }
      }
      fVar1 = *pfVar11;
      fVar2 = pfVar11[1];
      fVar3 = pfVar11[2];
      fVar4 = pfVar11[3];
      fVar5 = param_7[3];
      fVar6 = param_7[2];
      fVar7 = param_7[1];
      fVar8 = *param_7;
      pfVar11 = (float *)(param_1 + 0x270);
      cVar9 = *(char *)(param_1 + 0x280);
      if (cVar9 != '\0') {
        if (cVar9 == '\x01') {
          pfVar11 = (float *)FUN_1400c06fe(pfVar11);
        }
        else if (cVar9 == '\x03') {
          pfVar11 = param_7 + 8;
        }
        else {
          pfVar11 = param_7 + 4;
        }
      }
      fStack_f4 = fVar4 * fVar5 * pfVar11[3];
      fStack_f8 = fVar3 * fVar6 * pfVar11[2];
      local_150 = (float *)&local_100;
      local_100 = CONCAT44(fVar2 * fVar7 * pfVar11[1],fVar1 * fVar8 * *pfVar11);
      local_b4 = *param_3;
      local_c8 = *(undefined8 *)((longlong)param_3 + 0xc);
      local_c0 = *(float *)(param_3 + 1);
      local_bc = 0;
      local_ac = *(undefined4 *)((longlong)param_3 + 0x1c);
      uStack_a8 = *(undefined4 *)(param_3 + 4);
      uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x24);
      uStack_a0 = *(undefined4 *)(param_3 + 5);
      local_9c = *(undefined8 *)((longlong)param_3 + 0x2c);
      local_94 = *(char *)((longlong)param_3 + 0x34) * '\x02' & 2;
      local_158 = (undefined8 *)CONCAT71(local_158._1_7_,cVar12);
      FUN_140239bd2(param_5,param_6,&local_c8,lVar10);
    }
  }
  local_148 = param_7;
  local_150 = (float *)CONCAT44(local_150._4_4_,param_6);
  local_158 = (undefined8 *)param_5;
  local_140 = bVar13;
  FUN_1400c0302(param_1,param_2,param_3,param_4);
  if ((local_90 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140239bd2 FUN_140239bd2 body=153 status=ok
// SIG undefined FUN_140239bd2(void)

void FUN_140239bd2(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  float fVar1;
  char cVar2;
  
  if ((*(byte *)((longlong)param_3 + 0x34) & 1) != 0) {
    fVar1 = *(float *)(param_3 + 1);
    *(float *)((longlong)param_3 + 0x1c) = fVar1;
    param_3[4] = 0;
    *(float *)(param_3 + 5) = fVar1;
    *(undefined8 *)((longlong)param_3 + 0x2c) = *param_3;
    *(float *)((longlong)param_3 + 0x14) = (1.0 / fVar1) * *(float *)((longlong)param_3 + 0xc);
    *(float *)(param_3 + 3) = *(float *)(param_3 + 2) * (1.0 / fVar1);
  }
  cVar2 = FUN_140239c6b(param_1,param_3,param_4,param_6);
  if (cVar2 == '\0') {
    FUN_140239d86(param_1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 140239c6b FUN_140239c6b body=282 status=ok
// SIG undefined FUN_140239c6b(void)

ulonglong FUN_140239c6b(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong unaff_RSI;
  undefined7 uVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [12];
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(float *)(param_4 + 0xc) == 0.0) && (!NAN(*(float *)(param_4 + 0xc)))) {
    FUN_1461d8850(param_3 + 0x60);
    uVar5 = (undefined7)((ulonglong)local_50 >> 8);
    if ((local_44 == 0.0) && (!NAN(local_44))) {
      unaff_RSI = CONCAT71(uVar5,1);
      goto LAB_140239d4f;
    }
    unaff_RSI = CONCAT71(uVar5,1);
    if (*(char *)(param_3 + 0x79) != '\0') goto LAB_140239d4f;
  }
  unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
  if ((((*(float *)(param_2 + 0x14) * *(float *)(param_2 + 8) <= 0.0) ||
       (*(float *)(param_2 + 8) * *(float *)(param_2 + 0x18) <= 0.0)) ||
      (cVar3 = FUN_14022c706(param_1), cVar3 != '\0')) || (*(char *)(param_3 + 0x1c) == '\0'))
  goto LAB_140239d4f;
  lVar2 = *(longlong *)(param_3 + 0x38);
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0) goto LAB_140239d4f;
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if (((*(uint *)(lVar4 + 8) >> 0x1c & 1) != 0) || ((short)*(undefined4 *)(lVar2 + 8) < 0))
    goto LAB_140239d4f;
  }
  unaff_RSI = 0;
LAB_140239d4f:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 140239d86 FUN_140239d86 body=629 status=ok
// SIG undefined FUN_140239d86(void)

longlong FUN_140239d86(undefined8 param_1,undefined4 param_2,longlong param_3,longlong param_4,
                      undefined1 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined1 local_90;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  bVar3 = 0xc;
  if (*(char *)(param_4 + 0x1c) != '\x04') {
    bVar3 = 0;
  }
  bVar5 = 8;
  if (*(char *)(param_4 + 0x1c) != '\x02') {
    bVar5 = bVar3;
  }
  bVar3 = bVar5 >> 2;
  if (bVar3 == 0) {
    lVar4 = FUN_140239ffc(param_1);
    uVar10 = param_6[1];
    uVar1 = param_6[2];
    uVar2 = param_6[3];
    *(undefined4 *)(lVar4 + 0x50) = *param_6;
    *(undefined4 *)(lVar4 + 0x54) = uVar10;
    *(undefined4 *)(lVar4 + 0x58) = uVar1;
    *(undefined4 *)(lVar4 + 0x5c) = uVar2;
    FUN_14023a1a6(lVar4,param_4,*(undefined8 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 8));
    bVar5 = 0;
  }
  else if (bVar3 == 1) {
    lVar4 = FUN_140239ffc();
    uVar10 = param_6[1];
    uVar1 = param_6[2];
    uVar2 = param_6[3];
    *(undefined4 *)(lVar4 + 0x50) = *param_6;
    *(undefined4 *)(lVar4 + 0x54) = uVar10;
    *(undefined4 *)(lVar4 + 0x58) = uVar1;
    *(undefined4 *)(lVar4 + 0x5c) = uVar2;
    FUN_14023a1a6(lVar4,param_4,*(undefined8 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 8));
  }
  else if (bVar3 == 2) {
    lVar4 = FUN_1469538b8();
    uVar10 = param_6[1];
    uVar1 = param_6[2];
    uVar2 = param_6[3];
    *(undefined4 *)(lVar4 + 0x50) = *param_6;
    *(undefined4 *)(lVar4 + 0x54) = uVar10;
    *(undefined4 *)(lVar4 + 0x58) = uVar1;
    *(undefined4 *)(lVar4 + 0x5c) = uVar2;
    FUN_14023a1a6(lVar4,param_4,*(undefined8 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 8));
    bVar5 = 8;
  }
  else {
    lVar4 = FUN_14695384a(param_1);
    if (*(char *)(param_4 + 0x78) == '\x01') {
      fVar6 = *(float *)(param_3 + 0x18) * 0.5;
      fVar7 = fVar6;
      fVar8 = fVar6;
      fVar9 = fVar6;
    }
    else {
      fVar7 = (float)*(double *)(param_4 + 0x58);
      fVar8 = (float)*(double *)(param_4 + 0x50);
      fVar9 = (float)*(double *)(param_4 + 0x48);
      fVar6 = (float)*(double *)(param_4 + 0x40);
    }
    *(float *)(lVar4 + 0xb0) = fVar6;
    *(float *)(lVar4 + 0xb4) = fVar9;
    *(float *)(lVar4 + 0xb8) = fVar8;
    *(float *)(lVar4 + 0xbc) = fVar7;
    if (*(char *)(param_4 + 0x79) == '\x01') {
      FUN_1461d8850(param_4 + 0x60,&local_80);
      uVar1 = param_6[3];
      local_68 = uStack_78;
      local_70 = local_80;
      uVar10 = *(undefined4 *)(param_4 + 0x74);
      *(undefined4 *)(lVar4 + 0xa8) = uStack_78;
      *(undefined8 *)(lVar4 + 0xa0) = local_80;
      *(undefined4 *)(lVar4 + 0xac) = uVar1;
    }
    else {
      uVar10 = *(undefined4 *)(param_4 + 0x74);
      FUN_1461d8850(param_4 + 0x60,&local_80);
      *(undefined8 *)(lVar4 + 0xa0) = local_80;
      *(ulonglong *)(lVar4 + 0xa8) = CONCAT44(uStack_74,uStack_78);
    }
    *(undefined4 *)(lVar4 + 0xc0) = uVar10;
    uVar10 = param_6[1];
    uVar1 = param_6[2];
    uVar2 = param_6[3];
    *(undefined4 *)(lVar4 + 0x50) = *param_6;
    *(undefined4 *)(lVar4 + 0x54) = uVar10;
    *(undefined4 *)(lVar4 + 0x58) = uVar1;
    *(undefined4 *)(lVar4 + 0x5c) = uVar2;
    FUN_14023a1a6(lVar4,param_4,*(undefined8 *)(param_3 + 0x14),*(undefined4 *)(param_3 + 8));
    bVar5 = 0xc;
  }
  local_90 = param_5;
  local_98 = param_3;
  FUN_14023a0a8(lVar4,param_1,bVar5,param_2);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140239ffc FUN_140239ffc body=111 status=ok
// SIG undefined FUN_140239ffc(void)

longlong FUN_140239ffc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((0 < *(int *)(param_1 + 0x8f8)) && (*(int *)(param_1 + 0x8a8) != 0)) {
    lVar2 = param_1 + 0x260;
    if (*(longlong *)(param_1 + 0x8a0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x8a0);
    }
    if (*(char *)(lVar2 + 0x18 + (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20) == '\0') {
      lVar2 = FUN_146968fa6(param_1);
      return lVar2;
    }
  }
  iVar1 = FUN_14023a06c(param_1 + 0x180);
  return (longlong)iVar1 * 0xa0 + *(longlong *)(param_1 + 0x180);
}



// FUNCTION 14023a06c FUN_14023a06c body=59 status=ok
// SIG undefined FUN_14023a06c(void)

int FUN_14023a06c(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1428759c0(param_1,iVar1);
  }
  FUN_142875999((longlong)iVar1 * 0xa0 + *param_1);
  return iVar1;
}



// FUNCTION 14023a0a8 FUN_14023a0a8 body=254 status=ok
// SIG undefined FUN_14023a0a8(void)

void FUN_14023a0a8(undefined8 *param_1,longlong param_2,undefined1 param_3,undefined4 param_4,
                  undefined8 *param_5,byte param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  
  bVar5 = param_6 & 0xdf;
  if ((DAT_14c75ed48 & 1) != 0) {
    bVar5 = param_6;
  }
  if (*(char *)(param_2 + 0x908) == '\0') {
    bVar5 = param_6;
  }
  bVar6 = bVar5;
  if (0 < (longlong)*(int *)(param_2 + 0x150)) {
    lVar7 = param_2 + 0x140;
    if (*(longlong *)(param_2 + 0x148) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x148);
    }
    bVar6 = bVar5 | 0x10;
    if (*(char *)(lVar7 + -1 + (longlong)*(int *)(param_2 + 0x150)) != '\x01') {
      bVar6 = bVar5;
    }
  }
  param_1[2] = *(undefined8 *)((longlong)param_5 + 0x2c);
  uVar1 = *(undefined8 *)((longlong)param_5 + 0x24);
  *param_1 = *(undefined8 *)((longlong)param_5 + 0x1c);
  param_1[1] = uVar1;
  param_1[3] = *param_5;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_5 + 1);
  param_1[4] = *(undefined8 *)((longlong)param_5 + 0x14);
  if ((longlong)*(int *)(param_2 + 0x128) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)
             (*(longlong *)(param_2 + 0x120) + -4 + (longlong)*(int *)(param_2 + 0x128) * 4);
  }
  *(undefined4 *)(param_1 + 7) = uVar4;
  *(undefined4 *)(param_1 + 5) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x46) = param_3;
  *(byte *)((longlong)param_1 + 0x45) = bVar6;
  uVar2 = (**(code **)(**(longlong **)(DAT_14c968098 + 0x20) + 0x170))();
  *(undefined1 *)((longlong)param_1 + 0x44) = uVar2;
  uVar3 = (ushort)(bVar6 & 0xf);
  if ((char)bVar6 < '\0') {
    uVar3 = uVar3 | 0x80;
  }
  *(ushort *)(param_1 + 9) = uVar3;
  return;
}



// FUNCTION 14023a1a6 FUN_14023a1a6 body=509 status=ok
// SIG undefined FUN_14023a1a6(void)

void FUN_14023a1a6(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  uVar4 = *(undefined4 *)(param_2 + 0x80);
  uVar5 = *(undefined4 *)(param_2 + 0x84);
  uVar6 = *(undefined4 *)(param_2 + 0x88);
  uVar7 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  *(undefined4 *)(param_1 + 0x78) = uVar6;
  *(undefined4 *)(param_1 + 0x7c) = uVar7;
  *(uint *)(param_1 + 0x90) = (uint)*(byte *)(param_2 + 0x1d);
  *(uint *)(param_1 + 0x94) = (uint)*(byte *)(param_2 + 0x1e);
  *(uint *)(param_1 + 0x98) = (uint)*(byte *)(param_2 + 0x1c);
  if ((*(char *)(param_2 + 0x1c) != '\0') &&
     ((*(longlong *)(param_2 + 0xa8) != 0 || (*(longlong *)(param_2 + 0x38) != 0)))) {
    if ((*(longlong **)(param_2 + 0x98) == (longlong *)0x0) ||
       ((lVar10 = **(longlong **)(param_2 + 0x98), lVar10 == 0 ||
        (*(char *)(param_2 + 0x1f) == '\x03')))) {
      local_58 = param_4;
      (**(code **)(**(longlong **)(DAT_14c968098 + 0x20) + 0x88))
                (*(longlong **)(DAT_14c968098 + 0x20),&local_50,param_2,param_3);
      plVar2 = local_48;
      if ((undefined8 *)(param_2 + 0x98) != &local_50) {
        *(undefined8 *)(param_2 + 0x98) = local_50;
        local_50 = 0;
        plVar3 = *(longlong **)(param_2 + 0xa0);
        if (local_48 != plVar3) {
          local_48 = (longlong *)0x0;
          *(longlong **)(param_2 + 0xa0) = plVar2;
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
    }
    else {
      plVar2 = *(longlong **)(lVar10 + 0x10);
      if ((plVar2 == (longlong *)0x0) || (cVar9 = (**(code **)(*plVar2 + 0x18))(), cVar9 != '\0'))
      goto LAB_14023a256;
      local_58 = param_4;
      (**(code **)(**(longlong **)(DAT_14c968098 + 0x20) + 0x88))
                (*(longlong **)(DAT_14c968098 + 0x20),&local_50,param_2,param_3);
      FUN_14171dc1a((undefined8 *)(param_2 + 0x98),&local_50);
    }
    plVar2 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_48 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_48)(local_48);
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
LAB_14023a256:
  if ((*(longlong **)(param_2 + 0x98) == (longlong *)0x0) ||
     (lVar10 = **(longlong **)(param_2 + 0x98), lVar10 == 0)) {
    lVar10 = 0;
  }
  *(longlong *)(param_1 + 0x88) = lVar10;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14023a3a4 FUN_14023a3a4 body=14 status=ok
// SIG undefined FUN_14023a3a4(void)

void FUN_14023a3a4(longlong param_1)

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



// FUNCTION 14023a3b2 FUN_14023a3b2 body=26 status=ok
// SIG undefined FUN_14023a3b2(void)

void FUN_14023a3b2(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  (**(code **)(*param_1 + 0xd8))();
  *param_3 = 0;
  return;
}



// FUNCTION 14023a3fa FUN_14023a3fa body=127 status=ok
// SIG undefined FUN_14023a3fa(void)

ulonglong FUN_14023a3fa(longlong param_1)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x40);
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(longlong *)(lVar1 + 0x180) == 0) {
    if (*(char *)(lVar1 + 0x158) == '\x01') {
      QueryPerformanceCounter(&local_28);
      if (*(double *)(lVar1 + 0x150) <= (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0)
      goto LAB_14023a459;
    }
    uVar2 = 0;
  }
LAB_14023a459:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14023a47a FUN_14023a47a body=138 status=ok
// SIG undefined FUN_14023a47a(void)

ulonglong FUN_14023a47a(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar2 = *(int *)(param_1 + 0x3f0);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 1000);
    lVar8 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar8);
      if ((plVar4 != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*plVar4 + 0x28))(plVar4), cVar5 != '\0')) {
        if (*(char *)((longlong)plVar4 + 0x51) == '\x01') {
          bVar6 = *(byte *)(plVar4 + 10);
        }
        else {
          bVar1 = *(byte *)(plVar4[9] + 0x38);
          bVar6 = (**(code **)(*plVar4 + 0xc0))(plVar4);
          bVar6 = bVar6 ^ bVar1;
          *(byte *)(plVar4 + 10) = bVar6;
          *(undefined1 *)((longlong)plVar4 + 0x51) = 1;
        }
        if ((bVar6 & 1) == 0) {
          uVar7 = 0;
          break;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14023a504 FUN_14023a504 body=119 status=ok
// SIG undefined FUN_14023a504(void)

undefined8 * FUN_14023a504(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  bVar1 = *(byte *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 3);
  *(ushort *)(param_1 + 3) = uVar2;
  _Dst = param_1;
  _Src = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    *param_1 = _Dst;
    _Src = (undefined8 *)*param_2;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
  if (pcVar3 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
          );
  }
  else {
    (*pcVar3)();
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar4;
  return param_1;
}



// FUNCTION 14023a58c FUN_14023a58c body=355 status=ok
// SIG undefined FUN_14023a58c(void)

void FUN_14023a58c(longlong param_1,uint param_2)

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
  else if (param_2 < 0x11) {
    iVar8 = 0x10;
  }
  else {
    uVar5 = (longlong)(int)param_2 * 0x38;
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
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14023a5ff;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_14023a5ff:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (iVar8 == *(int *)(param_1 + 0x38c)) {
    return;
  }
  *(int *)(param_1 + 0x38c) = iVar8;
  FUN_14023b334(param_1,*(undefined4 *)(param_1 + 0x388),iVar8,0x38);
  return;
}



// FUNCTION 14023a6f0 FUN_14023a6f0 body=2424 status=ok
// SIG undefined FUN_14023a6f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14023a6f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  code *pcVar7;
  longlong **pplVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  longlong ****pppplVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  longlong *plVar22;
  uint uVar23;
  longlong lVar24;
  bool bVar25;
  bool bVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined1 auStack_258 [46];
  byte local_22a;
  byte local_229;
  longlong local_228;
  longlong local_220;
  longlong *local_218;
  longlong local_210;
  longlong **local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  longlong local_1d8;
  uint local_1d0;
  uint local_1c8;
  longlong local_1b0;
  int local_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  longlong *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined8 local_170;
  undefined1 local_168;
  longlong local_160;
  int local_158;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  float local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  double local_120;
  longlong ***local_118 [2];
  double local_108;
  ushort local_100;
  undefined6 uStack_fe;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  ushort uStack_d0;
  undefined2 uStack_ce;
  undefined8 uStack_cc;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  ulonglong local_b0;
  
  uVar28 = DAT_14cb1c840;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  cVar12 = *(char *)(*(longlong *)(param_1 + 0x48) + 0x60);
  if (cVar12 == '\x02') {
    if (((((*(int *)(param_1 + 0xec) != 0) && (uVar21 = *(uint *)(param_1 + 0xe8), -1 < (int)uVar21)
          ) && ((int)uVar21 < DAT_14c9647dc)) &&
        ((plVar18 = (longlong *)
                    ((ulonglong)((uVar21 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar21 >> 0x10) * 8)),
         plVar18 != (longlong *)0x0 && ((int)plVar18[2] == *(int *)(param_1 + 0xec))))) &&
       (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 && (lVar15 = *plVar18, lVar15 != 0)))) {
      if (DAT_14c9a7d10 == (undefined8 *)0x0) {
        DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        *DAT_14c9a7d10 = 0;
        DAT_14c9a7d10[1] = 0;
        DAT_14c9a7d10[2] = 0;
        DAT_14c9a7d10[3] = 0;
      }
      FUN_14005915a(DAT_14c9a7d10,&local_1b0,uVar28,lVar15);
      lVar15 = local_1b0;
      if ((local_1b0 == 0) ||
         (plVar18 = (longlong *)CONCAT44(uStack_1a4,local_1a8), plVar18 == (longlong *)0x0)) {
        plVar18 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar22 = plVar18 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plVar18)(plVar18);
          LOCK();
          piVar2 = (int *)((longlong)plVar18 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
      plVar22 = (longlong *)CONCAT44(uStack_1a4,local_1a8);
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar22 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar2 = (int *)((longlong)plVar22 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
      if (plVar18 != (longlong *)0x0) {
        iVar13 = (int)plVar18[1];
        do {
          plVar22 = (longlong *)0x0;
          if (iVar13 == 0) break;
          LOCK();
          iVar11 = (int)plVar18[1];
          bVar25 = iVar13 == iVar11;
          if (bVar25) {
            *(int *)(plVar18 + 1) = iVar13 + 1;
            iVar11 = iVar13;
          }
          iVar13 = iVar11;
          UNLOCK();
          plVar22 = plVar18;
        } while (!bVar25);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
        if (plVar22 != (longlong *)0x0) {
          if (lVar15 != 0) {
            uVar21 = *(uint *)(param_1 + 200);
            if ((uVar21 < 0x15) || (uVar21 != 0x200 && 9 < uVar21 - 0x15)) {
              local_1a8 = *(int *)(param_1 + 200);
              local_1b0 = *(longlong *)(param_1 + 0xc0);
              local_1a0 = *(undefined8 *)(param_1 + 0xd0);
              local_148 = *(longlong **)(param_1 + 0xd8);
              if (local_148 == (longlong *)0x0) {
                local_198 = (longlong *)0x0;
              }
              else {
                LOCK();
                *(int *)((longlong)local_148 + 0xc) = *(int *)((longlong)local_148 + 0xc) + 1;
                UNLOCK();
                local_198 = local_148;
              }
              local_220 = lVar15;
              local_190 = *(undefined8 *)(param_1 + 0xe0);
              local_130 = CONCAT44(uRam000000014cb23fc4,_DAT_14cb23fc0);
              uStack_128 = CONCAT44(uRam000000014cb23fcc,_DAT_14cb23fc8);
              local_120 = DAT_14cb23fd0;
              local_138 = *(float *)(param_1 + 0x5c);
              if (*(float *)(param_1 + 0x5c) <= *(float *)(param_1 + 0x60)) {
                local_138 = *(float *)(param_1 + 0x60);
              }
              if (local_198 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)local_198 + 0xc) = *(int *)((longlong)local_198 + 0xc) + 1;
                UNLOCK();
              }
              local_188 = _DAT_14cb23fc0;
              uStack_184 = uRam000000014cb23fc4;
              uStack_180 = _DAT_14cb23fc8;
              uStack_17c = uRam000000014cb23fcc;
              local_178 = DAT_14cb23fd0;
              local_170 = 0;
              local_168 = 1;
              local_228 = *(longlong *)(param_1 + 0x48);
              local_22a = *(byte *)(local_228 + 0x58);
              bVar4 = *(byte *)(local_228 + 0xa8);
              bVar5 = *(byte *)(local_228 + 0xe0);
              local_218 = plVar22;
              local_160 = local_1b0;
              local_158 = local_1a8;
              local_150 = local_1a0;
              local_140 = local_190;
              FUN_14023b1cc(param_1,&local_1d8,param_2);
              if (local_1c8 < local_1d0) {
                local_210 = param_1 + 0xf0;
                local_229 = bVar4 & bVar5 ^ 1;
                uVar21 = local_1d0;
                do {
                  uVar14 = local_1c8;
                  puVar3 = (undefined8 *)(local_1d8 + (longlong)(int)local_1c8 * 0x38);
                  if (*(char *)(local_1d8 + 0x20 + (longlong)(int)local_1c8 * 0x38) == '\x04') {
                    local_1e8 = *puVar3;
                    uStack_1e0 = puVar3[1];
                    unaff_XMM11_Da = (undefined4)puVar3[2];
                    unaff_XMM11_Db = (undefined4)((ulonglong)puVar3[2] >> 0x20);
LAB_14023aa65:
                    local_130 = local_1e8;
                    uStack_128 = uStack_1e0;
                    local_120 = (double)CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
                    local_208 = (longlong **)0xffffffffffffffff;
                    puVar16 = &local_200;
                    cVar12 = FUN_14488ab98(&local_160,puVar16,&local_208);
                    iVar11 = local_158;
                    iVar13 = local_1a8;
                    if (cVar12 == '\0') {
                      if (*(char *)(local_228 + 0xe2) == '\x01') {
                        lVar15 = *(longlong *)(param_1 + 0x130);
                        if (*(longlong *)(param_1 + 0x130) == 0) {
                          lVar15 = local_210;
                        }
                        iVar6 = *(int *)(param_1 + 0x138);
                        if ((longlong)iVar6 != 0) {
                          lVar24 = 0;
                          do {
                            iVar13 = *(int *)(lVar15 + lVar24);
                            if (iVar13 != iVar11) {
                              puVar16 = &local_200;
                              local_158 = iVar13;
                              cVar12 = FUN_14488ab98(&local_160,puVar16,&local_208);
                              if (cVar12 != '\0') goto LAB_14023aaa3;
                            }
                            lVar24 = lVar24 + 4;
                          } while ((longlong)iVar6 * 4 != lVar24);
                        }
                      }
                      bVar26 = *(char *)(local_228 + 0x61) == '\x01';
                      uVar19 = 0;
                      bVar25 = false;
                    }
                    else {
LAB_14023aaa3:
                      local_1a8 = iVar13;
                      fVar27 = (float)(local_1f0 - (double)CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da));
                      if (0.0 <= fVar27) {
                        bVar26 = fVar27 == *(float *)(param_1 + 0x5c);
                        bVar25 = fVar27 < *(float *)(param_1 + 0x5c);
                      }
                      else {
                        bVar26 = -fVar27 == *(float *)(param_1 + 0x60);
                        bVar25 = -fVar27 < *(float *)(param_1 + 0x60);
                      }
                      if ((bVar25 || bVar26) && (local_229 & 1) == 0) {
                        local_178 = local_1f0;
                        local_188 = local_200;
                        uStack_184 = uStack_1fc;
                        uStack_180 = uStack_1f8;
                        uStack_17c = uStack_1f4;
                        puVar16 = &local_e8;
                        cVar12 = FUN_14488af33(&local_1b0,&local_e8,0);
                        if ((cVar12 != '\0') &&
                           (ABS((float)((double)CONCAT44(uStack_e4,local_e8) -
                                       (double)CONCAT44(uStack_1fc,local_200))) < 1.0)) {
                          uVar19 = CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
                          bVar25 = true;
                          if (ABS((float)((double)CONCAT44(uStack_dc,uStack_e0) -
                                         (double)CONCAT44(uStack_1f4,uStack_1f8))) < 1.0)
                          goto LAB_14023ac40;
                        }
                        uVar19 = 0;
                        bVar25 = false;
                      }
                      else {
                        uVar19 = (ulonglong)puVar16 & 0xffffffffffffff00;
                        bVar25 = bVar25 || bVar26;
                      }
LAB_14023ac40:
                      pplVar8 = local_208;
                      bVar26 = *(char *)(local_228 + 0x61) == '\x01';
                      if ((bool)(bVar25 & bVar26)) {
                        if ((local_22a & 0xfd) == 0) {
                          local_1f0 = (double)*(float *)(param_1 + 0x58) + local_1f0;
                          local_f0 = DAT_14cb1c870;
                          uVar10 = local_f0;
                          uStack_f8 = DAT_14cb1c868;
                          uVar9 = uStack_f8;
                          uStack_f8._0_4_ = (undefined4)DAT_14cb1c868;
                          uStack_f8._4_4_ = (undefined4)((ulonglong)DAT_14cb1c868 >> 0x20);
                          local_f0._0_4_ = (undefined4)DAT_14cb1c870;
                          local_f0._4_4_ = (undefined4)((ulonglong)DAT_14cb1c870 >> 0x20);
                          local_c4 = (undefined4)uStack_f8;
                          uStack_c0 = uStack_f8._4_4_;
                          uStack_bc = (undefined4)local_f0;
                          uStack_b8 = local_f0._4_4_;
                          uStack_d4 = SUB84(local_1f0,0);
                          uStack_d0 = (ushort)((ulonglong)local_1f0 >> 0x20);
                          uStack_ce = (undefined2)((ulonglong)local_1f0 >> 0x30);
                          uStack_cc = DAT_14cb1c860;
                          uStack_e4 = local_200;
                          uStack_e0 = uStack_1fc;
                          uStack_dc = uStack_1f8;
                          local_d8 = uStack_1f4;
                          _local_100 = CONCAT62((int6)((ulonglong)DAT_14cb1c860 >> 0x10),0x58);
                          local_108 = local_1f0;
                          uStack_f8 = uVar9;
                          local_f0 = uVar10;
                          local_118[0] = (longlong ***)FUN_14001cc68(0x58,0);
                          *local_118[0] = pplVar8;
                          *(undefined4 *)(local_118[0] + 1) = 1;
                          *(undefined4 *)(local_118[0] + 6) = local_c4;
                          *(undefined4 *)((longlong)local_118[0] + 0x34) = uStack_c0;
                          *(undefined4 *)(local_118[0] + 7) = uStack_bc;
                          *(undefined4 *)((longlong)local_118[0] + 0x3c) = uStack_b8;
                          *(undefined4 *)(local_118[0] + 4) = uStack_d4;
                          *(uint *)((longlong)local_118[0] + 0x24) = CONCAT22(uStack_ce,uStack_d0);
                          *(undefined4 *)(local_118[0] + 5) = (undefined4)uStack_cc;
                          *(undefined4 *)((longlong)local_118[0] + 0x2c) = uStack_cc._4_4_;
                          *(undefined4 *)(local_118[0] + 2) = uStack_e4;
                          *(undefined4 *)((longlong)local_118[0] + 0x14) = uStack_e0;
                          *(undefined4 *)(local_118[0] + 3) = uStack_dc;
                          *(undefined4 *)((longlong)local_118[0] + 0x1c) = local_d8;
                          local_118[0][8] = (longlong **)0x0;
                          local_118[0][9] = (longlong **)0x0;
                          *(undefined4 *)(local_118[0] + 10) = 0xffffffff;
                          uStack_f8 = CONCAT71(uStack_f8._1_7_,9);
                          FUN_14023b258(&local_1d8,local_118);
                          pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 +
                                             (ulonglong)((uint)(byte)uStack_f8 * 0x120));
                          if (pcVar7 != (code *)0x0) {
                            pppplVar17 = local_118;
                            if (0x18 < local_100) {
                              pppplVar17 = (longlong ****)local_118[0];
                            }
                            (*pcVar7)(pppplVar17);
                          }
                          if (0x18 < local_100) {
                            FUN_1400020a8(local_118[0]);
                          }
                        }
                        uVar28 = 0x3f800000;
                        if (*(char *)(local_228 + 0x180) == '\x01') {
                          FUN_1456e9828(&local_e8,0x3f800000,&local_208);
                          uVar28 = FUN_1456e9728(param_1,&local_e8);
                        }
                        FUN_14023b10e(&local_1d8,uVar28);
                        uVar21 = local_1d0;
                        goto LAB_14023ab63;
                      }
                    }
                    FUN_1402d7d58(&local_1d8,CONCAT71((int7)(uVar19 >> 8),bVar25 ^ bVar26) ^ 1);
                    uVar21 = local_1d0;
                  }
                  else {
                    FUN_1400b56fe(&local_e8,puVar3,4);
                    bVar4 = uStack_cc._4_1_;
                    if (uStack_cc._4_1_ != 0) {
                      local_1e8 = CONCAT44(uStack_e4,local_e8);
                      uStack_1e0 = CONCAT44(uStack_dc,uStack_e0);
                      unaff_XMM11_Da = local_d8;
                      unaff_XMM11_Db = uStack_d4;
                    }
                    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 +
                                       (ulonglong)((uint)uStack_cc._4_1_ * 0x120));
                    if (pcVar7 != (code *)0x0) {
                      puVar16 = &local_e8;
                      if (0x18 < uStack_d0) {
                        puVar16 = (undefined4 *)CONCAT44(uStack_e4,local_e8);
                      }
                      (*pcVar7)(puVar16);
                    }
                    if (0x18 < uStack_d0) {
                      FUN_1400020a8(CONCAT44(uStack_e4,local_e8));
                    }
                    if (bVar4 != 0) goto LAB_14023aa65;
                    FUN_1402d7d58(&local_1d8,0);
                    local_1c8 = uVar14;
                  }
LAB_14023ab63:
                  uVar14 = local_1c8 + 1;
                  if ((uVar14 < uVar21) &&
                     ((*(byte *)(local_1d8 + 0x34 + (longlong)(int)uVar14 * 0x38) & 1) != 0)) {
                    uVar23 = local_1c8 + 2;
                    do {
                      uVar14 = uVar21;
                      if (uVar21 == uVar23) break;
                      lVar15 = (longlong)(int)uVar23;
                      uVar14 = uVar23;
                      uVar23 = uVar23 + 1;
                    } while ((*(byte *)(local_1d8 + 0x34 + lVar15 * 0x38) & 1) != 0);
                  }
                  local_1c8 = uVar14;
                } while (uVar14 < uVar21);
              }
              if (local_198 != (longlong *)0x0) {
                LOCK();
                piVar2 = (int *)((longlong)local_198 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_198 + 0x10))();
                }
              }
              plVar22 = local_218;
              if (local_148 != (longlong *)0x0) {
                LOCK();
                piVar2 = (int *)((longlong)local_148 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_148 + 0x10))();
                }
              }
            }
            else {
              lVar15 = param_2[1];
              if ((longlong)(int)lVar15 != 0) {
                lVar24 = *param_2;
                lVar20 = 0;
                do {
                  uVar21 = *(uint *)(lVar24 + 0x34 + lVar20);
                  if ((uVar21 & 1) == 0) {
                    *(uint *)(lVar24 + 0x34 + lVar20) = uVar21 | 1;
                  }
                  lVar20 = lVar20 + 0x38;
                } while ((longlong)(int)lVar15 * 0x38 - lVar20 != 0);
              }
            }
          }
          LOCK();
          plVar18 = plVar22 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar2 = (int *)((longlong)plVar22 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
            }
          }
        }
      }
    }
  }
  else {
    if (cVar12 == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_258);
    }
    if (cVar12 == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_258);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14023b10e FUN_14023b10e body=189 status=ok
// SIG undefined FUN_14023b10e(void)

void FUN_14023b10e(longlong *param_1,float param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  byte bVar4;
  float fVar5;
  
  lVar3 = (longlong)(int)param_1[2] * 0x38 + *param_1;
  cVar2 = *(char *)((longlong)param_1 + 0x21);
  if (((byte)(cVar2 - 1U) < 2) &&
     ((param_2 < *(float *)((longlong)param_1 + 0x14) ||
      (*(float *)(param_1 + 3) <= param_2 && param_2 != *(float *)(param_1 + 3))))) {
LAB_14023b18c:
    *(byte *)(lVar3 + 0x34) = *(byte *)(lVar3 + 0x34) | 1;
    return;
  }
  fVar5 = 0.0;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x03') {
      if ((char)param_1[4] == '\x01') {
        fVar5 = *(float *)((longlong)param_1 + 0x14);
        bVar4 = 1;
        if (param_2 < *(float *)(param_1 + 3)) {
          param_2 = fVar5;
        }
      }
      else {
        fVar5 = *(float *)((longlong)param_1 + 0x14);
        if (fVar5 < param_2) {
          param_2 = *(float *)(param_1 + 3);
        }
        bVar4 = 0;
      }
    }
    else {
      fVar5 = *(float *)((longlong)param_1 + 0x14);
      bVar4 = *(byte *)(param_1 + 4);
    }
    fVar1 = *(float *)(param_1 + 3);
    if (fVar1 <= param_2) {
      param_2 = fVar1;
    }
    if (param_2 <= fVar5) {
      param_2 = fVar5;
    }
    fVar5 = (param_2 - fVar5) / (fVar1 - fVar5);
    if ((bVar4 & 1) != 0) {
      fVar5 = 1.0 - fVar5;
    }
    fVar5 = fVar5 * *(float *)((longlong)param_1 + 0x1c);
    if ((fVar5 == -3.4028235e+38) && (!NAN(fVar5))) goto LAB_14023b18c;
  }
  *(float *)(lVar3 + 0x30) = fVar5 + *(float *)(lVar3 + 0x30);
  return;
}



// FUNCTION 14023b1cc FUN_14023b1cc body=139 status=ok
// SIG undefined FUN_14023b1cc(void)

void FUN_14023b1cc(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x58);
  uVar3 = 1;
  if ((byte)iVar2 < 4) {
    uVar3 = (char)(0x2020001 >> ((byte)(iVar2 << 3) & 0x1f));
  }
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x5c);
  lVar6 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar6;
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar1;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined1 *)((longlong)param_2 + 0x21) = uVar3;
  iVar2 = (int)param_2[1];
  if (iVar2 != 0) {
    iVar4 = 0;
    if ((*(byte *)(*param_2 + 0x34) & 1) != 0) {
      iVar5 = 1;
      do {
        iVar4 = iVar2;
        if (iVar2 == iVar5) break;
        lVar6 = (longlong)iVar5;
        iVar4 = iVar5;
        iVar5 = iVar5 + 1;
      } while ((*(byte *)(*param_2 + 0x34 + lVar6 * 0x38) & 1) != 0);
    }
    *(int *)(param_2 + 2) = iVar4;
  }
  return;
}



// FUNCTION 14023b258 FUN_14023b258 body=219 status=ok
// SIG undefined FUN_14023b258(void)

void FUN_14023b258(longlong *param_1,undefined8 *param_2)

{
  undefined8 *_Dst;
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  lVar4 = (longlong)(int)param_1[2] * 0x38;
  _Dst = (undefined8 *)(*param_1 + lVar4);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(*param_1 + 0x20 + lVar4) * 0x120));
  if (pcVar3 != (code *)0x0) {
    puVar6 = _Dst;
    if (0x18 < *(ushort *)(_Dst + 3)) {
      puVar6 = (undefined8 *)*_Dst;
    }
    (*pcVar3)(puVar6);
  }
  if (0x18 < *(ushort *)(_Dst + 3)) {
    FUN_1400020a8(*_Dst);
  }
  bVar1 = *(byte *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 3);
  *(ushort *)(_Dst + 3) = uVar2;
  if (uVar2 < 0x19) {
    uVar5 = (ulonglong)((uint)bVar1 * 0x120);
    if (*(code **)((longlong)&DAT_14c9a85b8 + uVar5) == (code *)0x0) {
      if (*(code **)((longlong)&DAT_14c9a85b0 + uVar5) == (code *)0x0) {
        memcpy(_Dst,param_2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar5));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b0 + uVar5))(_Dst,param_2);
      }
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85b8 + uVar5))(_Dst,param_2);
    }
  }
  else {
    *_Dst = *param_2;
    *param_2 = 0;
    *(undefined2 *)(param_2 + 3) = 0;
  }
  *(undefined1 *)(_Dst + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_2 + 4) = 0;
  return;
}



// FUNCTION 14023b334 FUN_14023b334 body=145 status=ok
// SIG undefined FUN_14023b334(void)

void FUN_14023b334(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x380);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x380,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x380),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x380,param_2,param_3,param_4);
  return;
}



// FUNCTION 14023b962 FUN_14023b962 body=353 status=ok
// SIG undefined FUN_14023b962(void)

void FUN_14023b962(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14023b9e9;
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
LAB_14023b9e9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14023bac4 FUN_14023bac4 body=191 status=ok
// SIG undefined FUN_14023bac4(void)

void FUN_14023bac4(longlong param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x48);
    plVar1 = plVar8 + (longlong)*(int *)(param_1 + 0x50) * 3;
    do {
      plVar3 = (longlong *)plVar8[1];
      if (plVar3 == (longlong *)0x0) {
        lVar4 = *plVar8;
        if (lVar4 != 0) {
          lVar5 = *param_2;
          iVar2 = (int)param_2[1];
          lVar7 = (longlong)iVar2;
          if (lVar7 != 0) {
            uVar6 = 0;
            do {
              if (*(longlong *)(lVar5 + uVar6) == lVar4) {
                if ((int)(~uVar6 >> 3) != 0) goto LAB_14023bb35;
                break;
              }
              uVar6 = uVar6 + 8;
            } while (lVar7 * 8 - uVar6 != 0);
          }
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_14023b962(param_2,iVar2);
            lVar5 = *param_2;
          }
          *(longlong *)(lVar5 + lVar7 * 8) = lVar4;
        }
      }
      else if ((int)plVar3[8] != param_3) {
        *(int *)(plVar3 + 8) = param_3;
        (**(code **)(*plVar3 + 0x2b0))(plVar3,param_2,param_3);
      }
LAB_14023bb35:
      plVar8 = plVar8 + 3;
    } while (plVar8 != plVar1);
  }
  return;
}



// FUNCTION 14023bb84 FUN_14023bb84 body=89 status=ok
// SIG undefined FUN_14023bb84(void)

void FUN_14023bb84(longlong *param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(*(longlong *)(param_3 + 0x28) + 0x48);
  fVar2 = *(float *)((longlong)param_1 + 0x1c);
  if (fVar1 <= fVar2 || fVar2 <= 0.0) {
    fVar2 = fVar1;
  }
  *(float *)(param_3 + 0x68) = fVar2;
  fVar1 = (float)(**(code **)(*param_1 + 0x78))(fVar1,param_2,param_3);
  *(float *)(param_3 + 0x60) = fVar1 * fVar2;
  return;
}



// FUNCTION 14023bbe4 FUN_14023bbe4 body=493 status=ok
// SIG undefined FUN_14023bbe4(void)

float FUN_14023bbe4(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
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
  fVar5 = *(float *)(param_1 + 0x18);
  if ((*(longlong *)(param_3 + 0x28) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x28) + 0xe0), plVar1 != (longlong *)0x0)) {
    if (DAT_14cb6fd70 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1487a9cc9;
      local_50 = FUN_1465433f8;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
    }
    lVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb6fd70);
    if (lVar2 != 0) {
      if (DAT_14cb6fd70 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_1487a9cc9;
        local_50 = FUN_1465433f8;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
      }
      lVar3 = FUN_144718840(lVar2,DAT_14cb6fd70);
      if ((lVar2 != lVar3) && (lVar3 != 0)) {
        fVar4 = (float)FUN_14023bdd2(lVar3);
        fVar5 = fVar5 * fVar4;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return fVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14023bdd2 FUN_14023bdd2 body=370 status=ok
// SIG undefined FUN_14023bdd2(void)

float FUN_14023bdd2(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
  fVar7 = 1.0;
  if ((plVar2 != (longlong *)0x0) &&
     (fVar4 = (float)FUN_14023bf44(param_1), fVar7 = 1.0, 0.0 < fVar4)) {
    if (*(char *)(lVar1 + 1) == '\0') {
      fVar7 = 1.0;
      uVar3 = 0;
    }
    else {
      fVar7 = (float)(**(code **)(*plVar2 + 0x18))(plVar2,*(char *)(lVar1 + 1) + -1);
      uVar3 = *(undefined1 *)(lVar1 + 1);
    }
    fVar4 = (float)(**(code **)(*plVar2 + 0x18))(plVar2,uVar3);
    fVar5 = (float)FUN_14023c00e(param_1);
    fVar6 = (float)(**(code **)(*plVar2 + 0x20))(plVar2,*(undefined1 *)(lVar1 + 1));
    if (fVar6 < 0.0001) {
      if ((fVar5 == 1.0) && (!NAN(fVar5))) {
        fVar7 = fVar4;
      }
    }
    else {
      fVar6 = (fVar5 - (1.0 - fVar6)) / fVar6;
      if (0.0 < fVar6) {
        if (fVar6 < 0.5) {
          fVar5 = (fVar6 + fVar6) * (fVar6 + fVar6) * 0.5;
        }
        else {
          fVar5 = 1.0 - (fVar6 + fVar6 + -1.0);
          fVar5 = (1.0 - fVar5 * fVar5) * 0.5 + 0.5;
        }
        fVar7 = (fVar4 - fVar7) * (fVar5 + 0.0) + fVar7;
      }
    }
  }
  return fVar7;
}



// FUNCTION 14023bf44 FUN_14023bf44 body=202 status=ok
// SIG undefined FUN_14023bf44(void)

float FUN_14023bf44(longlong *param_1)

{
  float fVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  pcVar2 = (char *)(**(code **)(*param_1 + 0x18))();
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
  fVar5 = 0.0;
  if ((plVar3 != (longlong *)0x0) && (*pcVar2 != '\0')) {
    if ((*pcVar2 == '\x02') || (pcVar2[1] != '\0')) {
      fVar5 = 1.0;
    }
    else {
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      fVar6 = 0.0;
      if (lVar4 != 0) {
        lVar4 = FUN_1447210f0(lVar4);
        fVar6 = 0.0;
        if (lVar4 != 0) {
          fVar6 = (float)*(double *)(lVar4 + 0x6d0);
        }
      }
      fVar1 = *(float *)(pcVar2 + 0xc);
      fVar5 = (float)(**(code **)(*plVar3 + 0x10))(plVar3,0);
      fVar5 = (fVar6 - fVar1) / fVar5;
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      if (*pcVar2 == '\x03') {
        fVar5 = 1.0 - fVar5;
      }
    }
  }
  return fVar5;
}



// FUNCTION 14023c00e FUN_14023c00e body=188 status=ok
// SIG undefined FUN_14023c00e(void)

float FUN_14023c00e(longlong *param_1)

{
  float fVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  pcVar2 = (char *)(**(code **)(*param_1 + 0x18))();
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
  fVar5 = 0.0;
  if (plVar3 != (longlong *)0x0) {
    if (*pcVar2 == '\x02') {
      fVar5 = 1.0;
    }
    else if (*pcVar2 != '\0') {
      lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
      fVar6 = 0.0;
      if (lVar4 != 0) {
        lVar4 = FUN_1447210f0(lVar4);
        fVar6 = 0.0;
        if (lVar4 != 0) {
          fVar6 = (float)*(double *)(lVar4 + 0x6d0);
        }
      }
      fVar1 = *(float *)(pcVar2 + 0xc);
      fVar5 = (float)(**(code **)(*plVar3 + 0x10))(plVar3,pcVar2[1]);
      fVar5 = (fVar6 - fVar1) / fVar5;
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      if (*pcVar2 == '\x03') {
        fVar5 = 1.0 - fVar5;
      }
    }
  }
  return fVar5;
}



// FUNCTION 14023c0ca FUN_14023c0ca body=284 status=ok
// SIG undefined FUN_14023c0ca(void)

undefined8 FUN_14023c0ca(longlong param_1,undefined4 param_2)

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
    if (iVar1 == 2) goto LAB_14023c1e0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14023c1e0;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14023c1e0:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14023c18d;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_14023c18d;
    }
  }
  uVar6 = 0;
LAB_14023c18d:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14023c1e8 FUN_14023c1e8 body=106 status=ok
// SIG undefined FUN_14023c1e8(void)

undefined8 FUN_14023c1e8(longlong *param_1,byte param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(byte *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_14023c252(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14023c252 FUN_14023c252 body=95 status=ok
// SIG undefined FUN_14023c252(void)

void FUN_14023c252(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_14023c2b2(param_1,param_2,1);
  return;
}



// FUNCTION 14023c2b2 FUN_14023c2b2 body=138 status=ok
// SIG undefined FUN_14023c2b2(void)

void FUN_14023c2b2(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14023c33c FUN_14023c33c body=101 status=ok
// SIG undefined FUN_14023c33c(void)

void FUN_14023c33c(longlong param_1)

{
  if (*(char *)(param_1 + 0x908) == '\x01') {
    FUN_144908ac8(param_1 + 0x6c0);
    FUN_144908ac8(param_1 + 0x490);
    *(undefined1 *)(param_1 + 0x908) = 0;
  }
  if (*(char *)(param_1 + 0x488) == '\x01') {
    FUN_144908ac8(param_1 + 0x240);
    FUN_144908ac8(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x488) = 0;
  }
  return;
}



// FUNCTION 14023c3a2 FUN_14023c3a2 body=359 status=ok
// SIG undefined FUN_14023c3a2(void)

undefined4 * FUN_14023c3a2(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  cVar1 = *(char *)(param_2 + 0x122);
  *(char *)(param_1 + 0x122) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    param_1[6] = param_2[6];
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_14007b208(param_1 + 10,param_2 + 10);
    FUN_14007b350(param_1 + 0x32,param_2 + 0x32);
    *(undefined8 *)(param_1 + 0x8a) = 0;
    param_1[0x8c] = 0;
    FUN_14007b0d4(param_1 + 0x8a,param_2 + 0x8a);
    param_1[0x8e] = param_2[0x8e];
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    param_1[0x92] = param_2[0x92];
    *(undefined8 *)(param_1 + 0x94) = 0;
    FUN_14007b208(param_1 + 0x96,param_2 + 0x96);
    FUN_14007b350(param_1 + 0xbe,param_2 + 0xbe);
    *(undefined8 *)(param_1 + 0x116) = 0;
    param_1[0x118] = 0;
    FUN_14007b0d4(param_1 + 0x116,param_2 + 0x116);
    param_1[0x11a] = param_2[0x11a];
    uVar2 = param_2[0x11d];
    uVar3 = param_2[0x11e];
    uVar4 = param_2[0x11f];
    param_1[0x11c] = param_2[0x11c];
    param_1[0x11d] = uVar2;
    param_1[0x11e] = uVar3;
    param_1[0x11f] = uVar4;
    *(undefined8 *)((longlong)param_1 + 0x47d) = *(undefined8 *)((longlong)param_2 + 0x47d);
  }
  cVar1 = *(char *)(param_2 + 0x242);
  *(char *)(param_1 + 0x242) = cVar1;
  if (cVar1 == '\x01') {
    FUN_14023c50a(param_1 + 0x124,param_2 + 0x124);
    FUN_14023c50a(param_1 + 0x1b0,param_2 + 0x1b0);
    uVar5 = *(undefined8 *)(param_2 + 0x23e);
    *(undefined8 *)(param_1 + 0x23c) = *(undefined8 *)(param_2 + 0x23c);
    *(undefined8 *)(param_1 + 0x23e) = uVar5;
    *(undefined8 *)((longlong)param_1 + 0x8fd) = *(undefined8 *)((longlong)param_2 + 0x8fd);
  }
  return param_1;
}



// FUNCTION 14023c50a FUN_14023c50a body=118 status=ok
// SIG undefined FUN_14023c50a(void)

undefined8 * FUN_14023c50a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = 0;
  FUN_14007b208(param_1 + 3,param_2 + 3);
  FUN_14007b350(param_1 + 0x17,param_2 + 0x17);
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_14007b0d4(param_1 + 0x43,param_2 + 0x43);
  *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(param_2 + 0x45);
  return param_1;
}



// FUNCTION 14023c580 FUN_14023c580 body=202 status=ok
// SIG undefined FUN_14023c580(void)

longlong FUN_14023c580(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                      longlong *param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                      undefined2 param_9,undefined1 param_10,undefined8 param_11)

{
  byte bVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar2 = FUN_14023c64a(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  else {
    lVar2 = FUN_1469544de(*(longlong *)(param_1 + 0x10),param_3,param_4,param_5,param_6,param_7,
                          param_8,param_9,param_10);
  }
  *(undefined8 *)(lVar2 + 0x38) = param_11;
  if (param_5 != (longlong *)0x0) {
    bVar1 = (**(code **)(*param_5 + 0x20))(param_5);
    *(byte *)(lVar2 + 0x8f) = bVar1;
    *(byte *)(param_1 + 0x33) = *(byte *)(param_1 + 0x33) | bVar1;
  }
  return lVar2;
}



// FUNCTION 14023c64a FUN_14023c64a body=340 status=ok
// SIG undefined FUN_14023c64a(void)

longlong FUN_14023c64a(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
                      undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined2 param_8,
                      undefined1 param_9)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar9 = param_1[3];
  lVar10 = param_1[5];
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14023c79e(param_1,iVar2);
  }
  lVar3 = *param_1;
  lVar11 = (longlong)iVar2 * 0xa0;
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = param_3[5];
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar11);
  *puVar1 = param_3[4];
  puVar1[1] = uVar8;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar11);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined8 *)(lVar3 + lVar11) = uVar4;
  ((undefined8 *)(lVar3 + lVar11))[1] = uVar5;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar11);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x40 + lVar11) = param_4;
  *(undefined8 *)(lVar3 + 0x48 + lVar11) = 0;
  *(longlong **)(lVar3 + 0x50 + lVar11) = param_1 + 2;
  *(longlong **)(lVar3 + 0x58 + lVar11) = param_1 + 4;
  *(undefined8 *)(lVar3 + 0x60 + lVar11) = 0;
  *(undefined4 *)(lVar3 + 0x68 + lVar11) = param_2;
  *(int *)(lVar3 + 0x6c + lVar11) = (int)lVar9;
  *(int *)(lVar3 + 0x70 + lVar11) = (int)lVar10;
  puVar1 = (undefined8 *)(lVar3 + 0x74 + lVar11);
  *puVar1 = 0;
  puVar1[1] = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x84 + lVar11) = 0;
  *(undefined1 *)(lVar3 + 0x88 + lVar11) = param_9;
  *(undefined2 *)(lVar3 + 0x8a + lVar11) = param_8;
  *(undefined1 *)(lVar3 + 0x8c + lVar11) = param_6;
  *(undefined1 *)(lVar3 + 0x8d + lVar11) = param_5;
  *(undefined1 *)(lVar3 + 0x8e + lVar11) = param_7;
  *(undefined1 *)(lVar3 + 0x8f + lVar11) = 0;
  *(byte *)(lVar3 + 0x90 + lVar11) = (*(byte *)(lVar3 + 0x90 + lVar11) & 0xfc) + 1;
  return lVar3 + lVar11;
}



// FUNCTION 14023c79e FUN_14023c79e body=275 status=ok
// SIG undefined FUN_14023c79e(void)

void FUN_14023c79e(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14023c8b2 FUN_14023c8b2 body=1147 status=ok
// SIG undefined FUN_14023c8b2(void)

bool FUN_14023c8b2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  uint local_ac;
  undefined4 *local_a8;
  longlong *local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  uint *local_88;
  undefined4 *local_80;
  undefined4 local_78 [2];
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar13 = (longlong)param_2;
  uVar3 = *(uint *)(param_1[2] + lVar13 * 4);
  uVar17 = *(uint *)(param_1 + 0xe);
  uVar14 = uVar17 & uVar3;
  plVar9 = param_1 + 8;
  plVar7 = (longlong *)param_1[9];
  if ((longlong *)param_1[9] == (longlong *)0x0) {
    plVar7 = plVar9;
  }
  do {
    iVar4 = *(int *)((longlong)plVar7 + (longlong)(int)uVar14 * 4);
    if (iVar4 == param_2) {
      FUN_1447f872e(param_1 + 4,param_2);
      *(undefined4 *)(param_1[2] + lVar13 * 4) = 0x80000000;
      plVar7 = (longlong *)(*param_1 + lVar13 * 0x60);
      plVar8 = *(longlong **)(*param_1 + 0x50 + lVar13 * 0x60);
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
      lVar13 = plVar7[2];
      if (lVar13 != 0) {
        (**(code **)(lVar13 + -0x10))(lVar13 + -0x10);
      }
      lVar13 = plVar7[1];
      if (lVar13 != 0) {
        (**(code **)(lVar13 + -0x10))(lVar13 + -0x10);
      }
      lVar13 = *plVar7;
      if (lVar13 != 0) {
        (**(code **)(lVar13 + -0x10))(lVar13 + -0x10);
      }
      plVar7 = param_1 + 0xb;
      plVar8 = (longlong *)param_1[0xc];
      if ((longlong *)param_1[0xc] == (longlong *)0x0) {
        plVar8 = plVar7;
      }
      *(undefined4 *)((longlong)plVar8 + (longlong)(int)uVar14 * 4) = 0x80000000;
      uVar3 = *(uint *)(param_1 + 0xe);
      if ((ulonglong)(((longlong)(int)param_1[1] - (longlong)(int)param_1[7]) * 0x14) <
          (ulonglong)(uVar3 * 3)) {
        local_90 = (undefined4 *)param_1[9];
        if (local_90 == (undefined4 *)0x0) {
          local_60[0] = (undefined4)*plVar9;
        }
        param_1[9] = 0;
        local_50 = (undefined4)param_1[10];
        local_4c = *(undefined4 *)((longlong)param_1 + 0x54);
        param_1[10] = 0x100000000;
        local_98 = (undefined4 *)param_1[0xc];
        if (local_98 == (undefined4 *)0x0) {
          local_78[0] = (undefined4)*plVar7;
        }
        param_1[0xc] = 0;
        local_68 = (undefined4)param_1[0xd];
        local_64 = *(undefined4 *)((longlong)param_1 + 0x6c);
        param_1[0xd] = 0x100000000;
        *(uint *)(param_1 + 0xe) = uVar3 >> 1;
        *(undefined4 *)((longlong)param_1 + 0x74) = 0;
        local_70 = local_98;
        local_58 = local_90;
        if ((int)((uVar3 >> 1) + 1) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(0x80000000);
        }
        if (uVar3 < 2) {
          iVar11 = 0;
          uVar17 = 1;
          iVar5 = 1;
        }
        else {
          FUN_14475fe8c(plVar9);
          iVar11 = (int)param_1[10];
          iVar5 = *(int *)((longlong)param_1 + 0x54);
          uVar17 = (int)param_1[0xe] + 1;
        }
        *(uint *)(param_1 + 10) = iVar11 + uVar17;
        if ((uint)(iVar5 - iVar11) < uVar17) {
          FUN_146f3c7b6(plVar9);
          uVar17 = (int)param_1[0xe] + 1;
        }
        if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar17);
        }
        iVar11 = *(int *)((longlong)param_1 + 0x6c);
        local_a0 = plVar9;
        if (iVar11 < (int)uVar17) {
          FUN_14476002c(plVar7,uVar17);
          iVar11 = *(int *)((longlong)param_1 + 0x6c);
          uVar17 = (int)param_1[0xe] + 1;
        }
        iVar5 = (int)param_1[0xd];
        *(uint *)(param_1 + 0xd) = iVar5 + uVar17;
        if ((uint)(iVar11 - iVar5) < uVar17) {
          FUN_147138312(plVar7,iVar5);
        }
        plVar9 = (longlong *)param_1[0xc];
        if ((longlong *)param_1[0xc] == (longlong *)0x0) {
          plVar9 = plVar7;
        }
        FUN_14471858a((undefined4 *)((longlong)plVar9 + (longlong)iVar5 * 4));
        local_a8 = local_78;
        if (local_98 != (undefined4 *)0x0) {
          local_a8 = local_98;
        }
        local_80 = local_60;
        if (local_90 != (undefined4 *)0x0) {
          local_80 = local_90;
        }
        iVar11 = 0;
        do {
          uVar17 = local_a8[iVar11];
          if (!SBORROW4(0,uVar17)) {
            uVar14 = *(uint *)(param_1 + 0xe);
            uVar16 = uVar14 & uVar17;
            plVar9 = (longlong *)param_1[0xc];
            plVar8 = plVar9;
            if (plVar9 == (longlong *)0x0) {
              plVar8 = plVar7;
            }
            lVar13 = (longlong)(int)uVar16;
            uVar6 = *(uint *)((longlong)plVar8 + lVar13 * 4);
            uVar10 = local_80[iVar11];
            if (!SBORROW4(0,uVar6)) {
              local_88 = (uint *)((longlong)plVar8 + lVar13 * 4);
              uVar15 = uVar16 - uVar6 & uVar14;
              uVar12 = 0;
              local_b0 = local_80[iVar11];
              local_ac = uVar14;
              do {
                if (uVar15 < uVar12) {
                  if (*(uint *)((longlong)param_1 + 0x74) < uVar12) {
                    *(uint *)((longlong)param_1 + 0x74) = uVar12;
                    uVar6 = *local_88;
                  }
                  plVar9 = (longlong *)param_1[9];
                  if ((longlong *)param_1[9] == (longlong *)0x0) {
                    plVar9 = local_a0;
                  }
                  uVar10 = *(undefined4 *)((longlong)plVar9 + lVar13 * 4);
                  *(undefined4 *)((longlong)plVar9 + lVar13 * 4) = local_b0;
                  plVar9 = (longlong *)param_1[0xc];
                  if ((longlong *)param_1[0xc] == (longlong *)0x0) {
                    plVar9 = plVar7;
                  }
                  *(uint *)((longlong)plVar9 + lVar13 * 4) = uVar17;
                  local_ac = *(uint *)(param_1 + 0xe);
                  plVar9 = (longlong *)param_1[0xc];
                  uVar12 = uVar15;
                  local_b0 = uVar10;
                  uVar17 = uVar6;
                }
                uVar12 = uVar12 + 1;
                uVar16 = uVar16 + 1 & local_ac;
                plVar8 = plVar9;
                if (plVar9 == (longlong *)0x0) {
                  plVar8 = plVar7;
                }
                lVar13 = (longlong)(int)uVar16;
                local_88 = (uint *)((longlong)plVar8 + lVar13 * 4);
                uVar6 = *local_88;
                uVar15 = uVar16 - uVar6 & local_ac;
              } while (!SBORROW4(0,uVar6));
              uVar10 = local_b0;
              if (*(uint *)((longlong)param_1 + 0x74) < uVar12) {
                *(uint *)((longlong)param_1 + 0x74) = uVar12;
              }
            }
            plVar9 = (longlong *)param_1[9];
            if ((longlong *)param_1[9] == (longlong *)0x0) {
              plVar9 = local_a0;
            }
            *(undefined4 *)((longlong)plVar9 + lVar13 * 4) = uVar10;
            plVar9 = (longlong *)param_1[0xc];
            if ((longlong *)param_1[0xc] == (longlong *)0x0) {
              plVar9 = plVar7;
            }
            *(uint *)((longlong)plVar9 + lVar13 * 4) = uVar17;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != uVar3 + 1 + (uint)(uVar3 == 0xffffffff));
        if (local_98 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        if (local_90 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
      }
      break;
    }
    uVar14 = uVar14 + 1 & uVar17;
  } while (uVar14 != (*(int *)((longlong)param_1 + 0x74) + uVar3 + 1 & uVar17));
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4 == param_2;
}



// FUNCTION 14023cd2e FUN_14023cd2e body=222 status=ok
// SIG undefined FUN_14023cd2e(void)

undefined8 FUN_14023cd2e(longlong param_1,float param_2,float param_3)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar5;
  float fVar6;
  uint uVar4;
  
  fVar6 = ((param_2 - *(float *)(param_1 + 0x30)) / param_2) * *(float *)(param_1 + 0x14);
  uVar3 = FUN_14023ce0c(param_1,fVar6);
  uVar4 = (uint)((ulonglong)uVar3 >> 0x20);
  fVar6 = (float)uVar3 + fVar6;
  fVar2 = (float)exp2f(-param_2 * *(float *)(param_1 + 0x3c));
  fVar2 = *(float *)(param_1 + 0x38) * (1.0 - fVar2);
  fVar5 = ABS(fVar6);
  if (fVar5 <= fVar2) {
    fVar5 = fVar2;
  }
  uVar1 = -(uint)(fVar6 < 0.0);
  fVar2 = (float)(uVar1 & (uint)-fVar5 | ~uVar1 & (uint)fVar5);
  if (*(float *)(param_1 + 0x2c) <= fVar2) {
    fVar2 = *(float *)(param_1 + 0x2c);
  }
  if (fVar2 <= *(float *)(param_1 + 0x28)) {
    fVar2 = *(float *)(param_1 + 0x28);
  }
  return CONCAT44(uVar4 & (uVar4 & 0x7fffffff ^ 0x80000000) | ~uVar4 & uVar4 & 0x7fffffff,
                  fVar2 * param_3);
}



// FUNCTION 14023ce0c FUN_14023ce0c body=214 status=ok
// SIG undefined FUN_14023ce0c(void)

float FUN_14023ce0c(longlong param_1,float param_2)

{
  float fVar1;
  double dVar2;
  float fVar3;
  
  fVar3 = 0.0;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    dVar2 = pow((double)*(float *)(param_1 + 0x1c),-1.89051);
    fVar3 = *(float *)(param_1 + 0x1c);
    fVar1 = expf((fVar3 - param_2) * (float)(dVar2 * 7.89656 + 0.467743));
    fVar1 = powf(fVar1 + 1.0,-(fVar3 * 0.142159 + 2.57186));
    fVar3 = (1.0 - fVar1) * -fVar3;
  }
  return fVar3;
}



// FUNCTION 14023cee2 FUN_14023cee2 body=370 status=ok
// SIG undefined FUN_14023cee2(void)

void FUN_14023cee2(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14023cf89;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14023cf89:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 14023d054 FUN_14023d054 body=287 status=ok
// SIG undefined FUN_14023d054(void)

undefined8 FUN_14023d054(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x430);
  if (lVar1 == 0) {
LAB_14023d10c:
    plVar3 = *(longlong **)(param_1 + 0x3c0);
    if (plVar3 == (longlong *)0x0) {
      local_28 = DAT_14c846508;
      local_38 = DAT_14c8464f8;
      uStack_30 = DAT_14c846500;
    }
    else {
      (**(code **)(*plVar3 + 0x680))(plVar3,&local_38);
    }
    local_58 = local_38;
    local_48 = 0;
  }
  else {
    plVar3 = (longlong *)(lVar1 + 0x178);
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x178) + 0xe0))(plVar3);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*plVar3 + 0xd8))(plVar3);
      if (cVar2 == '\0') goto LAB_14023d10c;
    }
    plVar3 = *(longlong **)(param_1 + 0x3c0);
    if (plVar3 == (longlong *)0x0) {
      local_48 = DAT_14c846508;
      local_58 = DAT_14c8464f8;
      uStack_50 = DAT_14c846500;
    }
    else {
      (**(code **)(*plVar3 + 0x680))(plVar3,&local_58);
    }
    local_38 = 0;
    uStack_30 = uStack_50;
    local_28 = 0;
  }
  uStack_50 = uStack_30;
  FUN_14023d174(param_2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14023d174 FUN_14023d174 body=534 status=ok
// SIG undefined FUN_14023d174(void)

double * FUN_14023d174(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar3 = *param_2;
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  dVar4 = sin(dVar3 * 0.01745329238474369);
  dVar5 = sin(dVar1 * 0.01745329238474369);
  dVar6 = sin(dVar2 * 0.01745329238474369);
  sin(0.0);
  dVar7 = cos(dVar3 * 0.01745329238474369);
  dVar8 = cos(dVar1 * 0.01745329238474369);
  dVar9 = cos(dVar2 * 0.01745329238474369);
  cos(0.0);
  dVar3 = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  dVar1 = DAT_14c8464e0;
  *param_1 = dVar7 * dVar8;
  param_1[1] = dVar5 * dVar7;
  param_1[2] = dVar4;
  param_1[3] = 0.0;
  param_1[4] = dVar4 * dVar6 * dVar8 - dVar5 * dVar9;
  param_1[5] = dVar4 * dVar6 * dVar5 + dVar8 * dVar9;
  param_1[6] = -dVar6 * dVar7;
  param_1[7] = 0.0;
  param_1[8] = -(dVar4 * dVar9 * dVar8 + dVar5 * dVar6);
  param_1[9] = dVar8 * dVar6 - dVar5 * dVar4 * dVar9;
  param_1[10] = dVar7 * dVar9;
  param_1[0xb] = 0.0;
  param_1[0xc] = dVar1;
  param_1[0xd] = dVar2;
  param_1[0xe] = dVar3;
  param_1[0xf] = 1.0;
  return param_1;
}



// FUNCTION 14023d38a FUN_14023d38a body=9642 status=ok
// SIG undefined FUN_14023d38a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14023d38a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 extraout_EAX;
  longlong lVar11;
  double *pdVar12;
  int iVar13;
  uint uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  byte bVar17;
  int iVar18;
  undefined8 *puVar19;
  double *pdVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  bool bVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  double dVar55;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar56;
  double dVar57;
  undefined1 auVar58 [16];
  double dVar61;
  double dVar62;
  double dVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  double dVar72;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar73;
  double dVar77;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar78;
  double dVar79;
  double dVar81;
  undefined1 auVar80 [16];
  double dVar82;
  double dVar83;
  double dVar84;
  double dVar85;
  double dVar86;
  double dVar87;
  double dVar88;
  double dVar89;
  undefined1 auVar90 [16];
  double dVar91;
  undefined1 auVar92 [16];
  double dVar93;
  double dVar94;
  double dVar95;
  undefined1 auStack_398 [32];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2e8;
  double local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8 [4];
  double local_288;
  double local_280;
  double local_278;
  double local_268;
  double local_260;
  double local_258;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  undefined8 uStack_230;
  longlong local_228;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  longlong local_208;
  undefined4 local_200;
  undefined1 local_1f8;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  FUN_14023f936();
  lVar23 = *(longlong *)(param_1 + 0xbf8);
  if ((lVar23 == 0) || (lVar23 != param_2)) {
    if (param_2 == 0) {
LAB_14023f871:
      lVar23 = 0;
    }
    else {
      lVar23 = FUN_14016d2a8();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar23 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar23 + 0x38) * 8) != lVar23 + 0x30)) goto LAB_14023f871;
      lVar23 = param_2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
    }
    *(longlong *)(param_1 + 0xbf8) = lVar23;
  }
  if (*(char *)(lVar23 + 0x172a) == '\x01') {
    if (lVar23 == 0) goto LAB_14023ef9a;
    lVar23 = *(longlong *)(lVar23 + 0x768);
    if ((lVar23 != 0) && (plVar22 = *(longlong **)(lVar23 + 0x75e0), plVar22 != (longlong *)0x0)) {
      iVar13 = (int)plVar22[1];
      do {
        if (iVar13 == 0) goto LAB_14023d441;
        LOCK();
        iVar18 = (int)plVar22[1];
        bVar24 = iVar13 == iVar18;
        if (bVar24) {
          *(int *)(plVar22 + 1) = iVar13 + 1;
          iVar18 = iVar13;
        }
        iVar13 = iVar18;
        UNLOCK();
      } while (!bVar24);
      lVar23 = *(longlong *)(lVar23 + 0x75d8);
      LOCK();
      *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar22 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar2 = (int *)((longlong)plVar22 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
      if (lVar23 != 0) {
        local_228 = 0;
        local_220 = 0;
        local_248 = 0.0;
        uStack_240 = 0.0;
        uStack_21c = 0x80;
        uStack_218 = 0xffffffff;
        uStack_214 = 0;
        local_208 = 0;
        local_200 = 0;
        pdVar12 = (double *)(lVar23 + 0x330);
        pdVar20 = local_2a8;
        for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
          *pdVar20 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar20 = pdVar20 + 1;
        }
        local_1f8 = *(undefined1 *)(lVar23 + 0x1b8);
        FUN_14023fa1a(&local_248,lVar23 + 0x4e0);
        pdVar12 = local_2a8;
        pdVar20 = (double *)(param_1 + 0xc00);
        for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
          *pdVar20 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar20 = pdVar20 + 1;
        }
        if ((double *)(param_1 + 0xc60) == &local_248) {
          *(undefined1 *)(param_1 + 0xcb0) = local_1f8;
          local_200 = 0;
          if (local_208 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_1 + 0xc60) != 0) {
            FUN_1400020a8();
          }
          *(double *)(param_1 + 0xc60) = local_248;
          local_248 = 0.0;
          *(undefined4 *)(param_1 + 0xc68) = (undefined4)uStack_240;
          *(undefined4 *)(param_1 + 0xc6c) = uStack_240._4_4_;
          uStack_240 = 0.0;
          if (local_228 == 0) {
            *(double *)(param_1 + 0xc70) = local_238;
            *(undefined8 *)(param_1 + 0xc78) = uStack_230;
          }
          if (*(longlong *)(param_1 + 0xc80) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0xc80) = local_228;
          local_228 = 0;
          *(undefined4 *)(param_1 + 0xc88) = local_220;
          *(undefined4 *)(param_1 + 0xc8c) = uStack_21c;
          local_220 = 0;
          uStack_21c = 0;
          *(undefined4 *)(param_1 + 0xc90) = uStack_218;
          *(undefined4 *)(param_1 + 0xc94) = uStack_214;
          uStack_218 = 0xffffffff;
          uStack_214 = 0;
          if (local_208 == 0) {
            *(undefined4 *)(param_1 + 0xc98) = local_210;
          }
          if (*(longlong *)(param_1 + 0xca0) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_1 + 0xca0) = local_208;
          local_208 = 0;
          *(undefined4 *)(param_1 + 0xca8) = local_200;
          *(undefined1 *)(param_1 + 0xcb0) = local_1f8;
          local_200 = 0;
        }
        FUN_14023f968(&local_248);
      }
      LOCK();
      plVar1 = plVar22 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar2 = (int *)((longlong)plVar22 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
  }
LAB_14023d441:
  lVar23 = *(longlong *)(param_1 + 0xbf8);
  if (lVar23 != 0) {
    puVar15 = &DAT_14c846510;
    if (*(char *)(param_1 + 0xcb0) == '\0') {
      puVar15 = (undefined8 *)(lVar23 + 0x15c8);
    }
    *(undefined8 *)(param_1 + 0xce0) = puVar15[2];
    uVar4 = puVar15[1];
    *(undefined8 *)(param_1 + 0xcd0) = *puVar15;
    *(undefined8 *)(param_1 + 0xcd8) = uVar4;
    iVar13 = DAT_14c9647dc;
    lVar11 = DAT_14c9647c8;
    if (((((*(int *)(lVar23 + 0x15f8) == 0) ||
          (uVar14 = *(uint *)(lVar23 + 0x15f4), (int)uVar14 < 0)) || (DAT_14c9647dc <= (int)uVar14))
        || (((plVar22 = (longlong *)
                        ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
             plVar22 == (longlong *)0x0 || ((int)plVar22[2] != *(int *)(lVar23 + 0x15f8))) ||
            (((*(uint *)(plVar22 + 1) & 0x10200000) != 0 || (lVar21 = *plVar22, lVar21 == 0)))))) &&
       ((((*(int *)(lVar23 + 0x15f0) == 0 || (uVar14 = *(uint *)(lVar23 + 0x15ec), (int)uVar14 < 0))
         || ((DAT_14c9647dc <= (int)uVar14 ||
             (((plVar22 = (longlong *)
                          ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
               plVar22 == (longlong *)0x0 || ((int)plVar22[2] != *(int *)(lVar23 + 0x15f0))) ||
              ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)))))) || (lVar21 = *plVar22, lVar21 == 0))
       )) {
      *(undefined4 *)(param_1 + 0xce8) = 0;
      iVar13 = 0;
    }
    else {
      uVar14 = *(uint *)(lVar21 + 0xc);
      *(uint *)(param_1 + 0xce8) = uVar14;
      if ((int)uVar14 < iVar13) {
        lVar23 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                 *(longlong *)(lVar11 + (ulonglong)(uVar14 >> 0x10) * 8);
      }
      else {
        lVar23 = 0;
      }
      iVar13 = *(int *)(lVar23 + 0x10);
      if (*(int *)(lVar23 + 0x10) == 0) {
        LOCK();
        iVar13 = DAT_14c964868 + 1;
        UNLOCK();
        iVar18 = DAT_14c964868 + 1;
        bVar24 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar13;
        if (bVar24) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar18);
        }
        LOCK();
        iVar13 = *(int *)(lVar23 + 0x10);
        bVar24 = iVar13 == 0;
        if (bVar24) {
          *(int *)(lVar23 + 0x10) = iVar18;
          iVar13 = 0;
        }
        UNLOCK();
        if (bVar24) {
          iVar13 = iVar18;
        }
      }
    }
    *(int *)(param_1 + 0xcec) = iVar13;
    lVar23 = *(longlong *)(param_1 + 0xbf8);
    if ((((((*(int *)(lVar23 + 0x15f8) != 0) &&
           (uVar14 = *(uint *)(lVar23 + 0x15f4), -1 < (int)uVar14)) &&
          (((int)uVar14 < DAT_14c9647dc &&
           ((plVar22 = (longlong *)
                       ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
            plVar22 != (longlong *)0x0 && ((int)plVar22[2] == *(int *)(lVar23 + 0x15f8))))))) &&
         ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)) && (lVar11 = *plVar22, lVar11 != 0)) ||
       ((((((*(int *)(lVar23 + 0x15f0) != 0 &&
            (uVar14 = *(uint *)(lVar23 + 0x15ec), -1 < (int)uVar14)) &&
           ((int)uVar14 < DAT_14c9647dc)) &&
          ((plVar22 = (longlong *)
                      ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
           plVar22 != (longlong *)0x0 && ((int)plVar22[2] == *(int *)(lVar23 + 0x15f0))))) &&
         ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)) && (lVar11 = *plVar22, lVar11 != 0)))) {
      lVar21 = *(longlong *)(lVar23 + 0x1620);
      bVar7 = *(byte *)(param_1 + 0xcc0) & 0xfe | lVar21 != 0;
      *(byte *)(param_1 + 0xcc0) = bVar7;
      if (lVar21 != 0) {
        uVar8 = FUN_144909502(lVar11,*(undefined8 *)(lVar23 + 0x1680));
        *(undefined4 *)(param_1 + 0xcc4) = uVar8;
        bVar7 = *(byte *)(param_1 + 0xcc0);
      }
      bVar7 = bVar7 & 0xfd | (*(longlong *)(lVar23 + 0x1628) != 0) * '\x02';
      *(byte *)(param_1 + 0xcc0) = bVar7;
      if (*(longlong *)(lVar23 + 0x1628) != 0) {
        uVar8 = FUN_144909502(lVar11,*(undefined8 *)(lVar23 + 0x1688));
        *(undefined4 *)(param_1 + 0xcc8) = uVar8;
        bVar7 = *(byte *)(param_1 + 0xcc0);
      }
      lVar23 = *(longlong *)(param_1 + 0xbf8);
      *(byte *)(param_1 + 0xcc0) = bVar7 & 0xfb | *(char *)(lVar23 + 0x160d) << 2;
    }
    lVar23 = *(longlong *)(lVar23 + 0x768);
    if (lVar23 != 0) {
      lVar11 = (**(code **)(*(longlong *)(lVar23 + 0x3c20) + 0x18))(lVar23 + 0x3c20);
      if ((lVar11 == 0) || (lVar11 = *(longlong *)(lVar11 + 0x20), lVar11 == 0)) {
        *(undefined8 *)(param_1 + 0xcf0) = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 0xcf8) = 0xffffffff;
        puVar15 = &DAT_14c846480;
        puVar19 = (undefined8 *)(param_1 + 0xd00);
        for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
          *puVar19 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar19 = puVar19 + 1;
        }
        puVar15 = &DAT_14c846480;
        puVar19 = (undefined8 *)(param_1 + 0xd60);
        for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
          *puVar19 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar19 = puVar19 + 1;
        }
        *(undefined8 *)(param_1 + 0xdc0) = 0;
      }
      else {
        uVar25 = *(ulonglong *)(*(longlong *)(param_1 + 0xbf8) + 0x1720);
        *(ulonglong *)(param_1 + 0xdc0) = uVar25;
        if ((((uVar25 >> 0x20 != 0) && (uVar14 = (uint)uVar25, -1 < (int)uVar14)) &&
            ((int)uVar14 < DAT_14c9647dc)) &&
           (((plVar22 = (longlong *)
                        ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0xd & 0x3fff8))),
             plVar22 != (longlong *)0x0 && ((int)plVar22[2] == (int)(uVar25 >> 0x20))) &&
            ((uVar14 = *(uint *)(plVar22 + 1), (uVar14 & 0x10200000) == 0 &&
             (lVar21 = *plVar22, lVar21 != 0)))))) {
          lVar3 = *(longlong *)(lVar11 + 0x1a08);
          if (lVar3 != 0) {
            FUN_1400848ec(lVar21,*(undefined8 *)(lVar3 + 0x178),param_1 + 0xd00,param_1 + 0xcf8);
            uVar8 = FUN_144909502(lVar21,*(undefined8 *)(lVar3 + 0x180));
            *(undefined4 *)(param_1 + 0xcf0) = uVar8;
            lVar16 = lVar21;
            lVar11 = FUN_144909502(lVar21,*(undefined8 *)(lVar3 + 0x188));
            uVar14 = (uint)lVar16;
            *(int *)(param_1 + 0xcf4) = (int)lVar11;
          }
          lVar23 = *(longlong *)(lVar23 + 0x1c8);
          auVar65 = *(undefined1 (*) [16])(lVar23 + 0x280);
          auVar48 = *(undefined1 (*) [16])(lVar23 + 0x290);
          auVar64._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar65._8_8_));
          auVar64._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar65._0_8_));
          uVar9 = movmskpd((int)lVar11,auVar64);
          auVar58._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar48._8_8_));
          auVar58._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar48._0_8_));
          iVar13 = movmskpd(uVar14,auVar58);
          uVar14 = iVar13 << 2 | uVar9;
          auVar90 = _DAT_14c8464c0;
          auVar47 = _DAT_14c8464d0;
          dVar57 = DAT_14c846480;
          dVar61 = DAT_14c846488;
          dVar46 = DAT_14c846490;
          dVar55 = DAT_14c846498;
          dVar73 = DAT_14c8464a0;
          dVar77 = DAT_14c8464a8;
          local_308 = DAT_14c8464b0;
          dStack_300 = DAT_14c8464b8;
          if (uVar14 != 0) {
            auVar64 = divpd(_DAT_149934d80,auVar65);
            auVar47 = divpd(ZEXT816(0x3ff0000000000000),auVar48);
            auVar90._0_8_ =
                 (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar65._0_8_)) & auVar64._0_8_);
            auVar90._8_8_ =
                 (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar65._8_8_)) & auVar64._8_8_);
            dVar56 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar48._0_8_)) &
                             auVar47._0_8_);
            auVar47._8_8_ = 0;
            auVar47._0_8_ = dVar56;
            dVar46 = *(double *)(lVar23 + 0x250) * -1.0;
            dVar55 = *(double *)(lVar23 + 600) * 1.0;
            dVar57 = -*(double *)(lVar23 + 0x240);
            dVar61 = -*(double *)(lVar23 + 0x248);
            dVar73 = *(double *)(lVar23 + 0x260) * auVar90._0_8_;
            dVar77 = *(double *)(lVar23 + 0x268) * auVar90._8_8_;
            dVar56 = *(double *)(lVar23 + 0x270) * dVar56;
            dVar69 = dVar77 * dVar57 - dVar61 * dVar73;
            dVar72 = dVar56 * dVar61 - dVar46 * dVar77;
            dVar87 = dVar73 * dVar46 - dVar57 * dVar56;
            dVar72 = dVar72 + dVar72;
            dVar87 = dVar87 + dVar87;
            dVar69 = dVar69 + dVar69;
            dVar73 = 0.0 - ((dVar69 * dVar61 - dVar87 * dVar46) + dVar55 * dVar72 + dVar73);
            dVar77 = 0.0 - (dVar69 * *(double *)(lVar23 + 0x240) + dVar46 * dVar72 +
                           dVar55 * dVar87 + dVar77);
            local_308 = 0.0 - (dVar55 * dVar69 + dVar56 + (dVar87 * dVar57 - dVar72 * dVar61));
            dStack_300 = 0.0;
          }
          auVar65 = *(undefined1 (*) [16])(param_1 + 0x50);
          dVar56 = auVar65._0_8_;
          dVar72 = auVar65._8_8_;
          auVar48 = *(undefined1 (*) [16])(param_1 + 0x60);
          dVar69 = auVar48._0_8_;
          auVar65 = minpd(auVar65,auVar90);
          auVar64 = minpd(auVar48,auVar47);
          auVar66._8_8_ = -(ulonglong)(auVar65._8_8_ < 0.0);
          auVar66._0_8_ = -(ulonglong)(auVar65._0_8_ < 0.0);
          uVar9 = movmskpd(uVar9,auVar66);
          dVar87 = (double)(ulonglong)uVar9;
          auVar65._8_8_ = -(ulonglong)(auVar64._8_8_ < 0.0);
          auVar65._0_8_ = -(ulonglong)(auVar64._0_8_ < 0.0);
          uVar14 = movmskpd(uVar14,auVar65);
          dVar79 = auVar90._0_8_;
          dVar63 = auVar90._8_8_;
          local_378 = auVar47._0_8_;
          dStack_370 = auVar47._8_8_;
          if ((uVar14 & 0x3fffffff) == 0 && uVar9 == 0) {
            dVar82 = *(double *)(param_1 + 0x10);
            dVar88 = *(double *)(param_1 + 0x18);
            dVar62 = *(double *)(param_1 + 0x20);
            dVar83 = *(double *)(param_1 + 0x28);
            dVar78 = dVar88 * dVar46 * -1.0 +
                     dVar62 * dVar61 + dVar57 * dVar83 * 1.0 + dVar55 * dVar82;
            dVar81 = dVar82 * dVar46 * 1.0 +
                     dVar83 * dVar61 + dVar57 * dVar62 * -1.0 + dVar55 * dVar88;
            dVar89 = *(double *)(param_1 + 0x30) * dVar79;
            dVar91 = *(double *)(param_1 + 0x38) * dVar63;
            dVar85 = *(double *)(param_1 + 0x40) * local_378;
            dVar86 = *(double *)(param_1 + 0x48) * dStack_370;
            dVar84 = dVar91 * dVar57 - dVar61 * dVar89;
            dVar94 = dVar85 * dVar61 - dVar46 * dVar91;
            dVar95 = dVar89 * dVar46 - dVar57 * dVar85;
            dVar93 = dVar86 * dVar55 - dVar55 * dVar86;
            dVar94 = dVar94 + dVar94;
            dVar95 = dVar95 + dVar95;
            dVar84 = dVar84 + dVar84;
            dVar93 = dVar93 + dVar93;
            auVar92._8_8_ =
                 dVar62 * dVar46 * -1.0 +
                 ((dVar57 * dVar82 * -1.0 + dVar55 * dVar83) - dVar61 * dVar88);
            auVar92._0_8_ =
                 dVar83 * dVar46 * 1.0 +
                 ((dVar57 * dVar88 * 1.0 + dVar55 * dVar62) - dVar61 * dVar82);
            dVar82 = dVar73 + (dVar84 * dVar61 - dVar46 * dVar95) + dVar55 * dVar94 + dVar89;
            dVar46 = dVar77 + (dVar94 * dVar46 - dVar84 * dVar57) + dVar55 * dVar95 + dVar91;
            local_308 = local_308 + (dVar95 * dVar57 - dVar61 * dVar94) + dVar55 * dVar84 + dVar85;
            dStack_300 = dStack_300 + (dVar93 * dVar55 - dVar93 * dVar55) + dVar55 * dVar93 + dVar86
            ;
            local_378 = dVar69 * local_378;
            dStack_370 = auVar48._8_8_ * dStack_370;
            auVar48._8_8_ = dVar72 * dVar63;
            auVar48._0_8_ = dVar56 * dVar79;
            uVar8 = 0;
            local_338 = dVar73;
            dStack_330 = dVar77;
          }
          else {
            dVar87 = dVar61 + dVar61;
            dVar88 = dVar46 + dVar46;
            dVar82 = dVar57 * (dVar57 + dVar57);
            local_168 = (1.0 - (dVar46 * dVar88 + dVar61 * dVar87)) * dVar79;
            dStack_140 = (1.0 - (dVar46 * dVar88 + dVar82)) * dVar63;
            dVar46 = (dVar57 + dVar57) * dVar55;
            local_148 = (dVar87 * dVar57 - dVar88 * dVar55) * dVar63;
            dStack_120 = (dVar88 * dVar61 - dVar46) * local_378;
            local_128 = (dVar57 * dVar88 + dVar87 * dVar55) * local_378;
            local_118 = (1.0 - (dVar82 + dVar61 * dVar87)) * local_378;
            local_378 = local_378 * dVar69;
            dStack_370 = dStack_370 * auVar48._8_8_;
            dStack_160 = (dVar87 * dVar57 + dVar88 * dVar55) * dVar79;
            local_138 = (dVar88 * dVar61 + dVar46) * dVar63;
            local_158 = (dVar57 * dVar88 - dVar87 * dVar55) * dVar79;
            uStack_150 = 0;
            uStack_130 = 0;
            uStack_110 = 0;
            uStack_f0 = 0x3ff0000000000000;
            dVar61 = *(double *)(param_1 + 0x10);
            dVar46 = *(double *)(param_1 + 0x18);
            dVar55 = *(double *)(param_1 + 0x20);
            dVar87 = dVar46 + dVar46;
            dVar82 = dVar55 + dVar55;
            dVar83 = dVar61 * (dVar61 + dVar61);
            local_198 = (1.0 - (dVar83 + dVar46 * dVar87)) * dVar69;
            dVar84 = *(double *)(param_1 + 0x10) * dVar82;
            dVar57 = *(double *)(param_1 + 0x28);
            dVar88 = dVar82 * dVar57;
            dVar62 = (dVar61 + dVar61) * *(double *)(param_1 + 0x28);
            dVar57 = dVar87 * dVar57;
            local_1a8 = (dVar57 + dVar84) * dVar69;
            local_1c8 = (dVar87 * dVar61 - dVar88) * dVar72;
            dStack_1a0 = (dVar82 * dVar46 - dVar62) * dVar69;
            local_348._8_8_ = dVar63 * dVar72;
            local_348._0_8_ = dVar79 * dVar56;
            local_1e8 = (1.0 - (dVar55 * dVar82 + dVar46 * dVar87)) * dVar56;
            dStack_1c0 = (1.0 - (dVar55 * dVar82 + dVar83)) * dVar72;
            dStack_1e0 = (dVar87 * dVar61 + dVar88) * dVar56;
            local_1b8 = (dVar82 * dVar46 + dVar62) * dVar72;
            local_1d8 = (dVar84 - dVar57) * dVar56;
            uStack_1d0 = 0;
            uStack_1b0 = 0;
            uStack_190 = 0;
            local_188 = *(double *)(param_1 + 0x30);
            dStack_180 = *(double *)(param_1 + 0x38);
            local_178 = *(double *)(param_1 + 0x40);
            uStack_170 = 0x3ff0000000000000;
            local_108 = dVar73;
            dStack_100 = dVar77;
            local_f8 = local_308;
            FUN_1447fea8d(local_2a8);
            auVar48 = local_348;
            auVar65 = _DAT_149934d80;
            local_368 = local_2a8[2];
            dVar57 = local_2a8[2] * local_2a8[2] +
                     local_2a8[0] * local_2a8[0] + local_2a8[1] * local_2a8[1];
            dVar61 = local_278 * local_278 + local_288 * local_288 + local_280 * local_280;
            dVar46 = local_258 * local_258 + local_268 * local_268 + local_260 * local_260;
            uVar25 = -(ulonglong)(0.0 <= dVar57 + -9.99999993922529e-09);
            dVar57 = (double)(~uVar25 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar57)) & uVar25);
            uVar25 = -(ulonglong)(0.0 <= dVar61 + -9.99999993922529e-09);
            dVar61 = (double)(~uVar25 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar61)) & uVar25);
            uVar25 = -(ulonglong)(0.0 <= dVar46 + -9.99999993922529e-09);
            dVar46 = (double)(~uVar25 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar46)) & uVar25);
            auVar26._8_8_ = -(ulonglong)(0.0 <= local_348._8_8_);
            auVar26._0_8_ = -(ulonglong)(0.0 <= local_348._0_8_);
            auVar90 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar26);
            dVar55 = (double)(~-(ulonglong)(0.0 <= local_378) & 0xbff0000000000000 |
                             -(ulonglong)(0.0 <= local_378) & 0x3ff0000000000000);
            dVar73 = auVar90._0_8_;
            local_2a8[0] = local_2a8[0] * dVar57 * dVar73;
            local_2a8[1] = local_2a8[1] * dVar57 * dVar73;
            local_2a8[2] = dVar57 * local_2a8[2] * dVar73;
            dVar57 = auVar90._8_8_;
            local_278 = dVar61 * local_278 * dVar57;
            local_280 = local_280 * dVar61 * dVar57;
            local_288 = dVar57 * local_288 * dVar61;
            local_258 = dVar46 * local_258 * dVar55;
            local_260 = local_260 * dVar46 * dVar55;
            local_268 = dVar55 * local_268 * dVar46;
            pdVar12 = &local_2c8;
            dVar87 = (double)FUN_14481fd10(pdVar12,local_2a8);
            uVar8 = SUB84(pdVar12,0);
            dVar57 = local_2b8 * local_2b8 + local_2c8 * local_2c8;
            dVar61 = dStack_2b0 * dStack_2b0 + dStack_2c0 * dStack_2c0;
            auVar39._0_8_ = dVar57 + dVar61;
            auVar39._8_8_ = dVar57 + dVar61;
            auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
            auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
            auVar90 = sqrtpd(auVar39,auVar39);
            auVar65 = divpd(auVar65,auVar90);
            auVar43._0_8_ = auVar65._0_8_ * local_2b8;
            auVar43._8_8_ = auVar65._8_8_ * dStack_2b0;
            dVar78 = (double)((ulonglong)(local_2c8 * auVar65._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
            dVar81 = (double)((ulonglong)(dStack_2c0 * auVar65._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
            auVar92 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar27);
            local_308 = local_238;
            dStack_300 = 0.0;
            dVar82 = local_248;
            dVar46 = uStack_240;
          }
          dVar57 = *(double *)(lVar23 + 0x1c8);
          dVar61 = *(double *)(lVar23 + 0x1d0);
          dVar55 = *(double *)(lVar23 + 0x1d8);
          dVar73 = *(double *)(lVar23 + 0x198);
          local_368 = *(double *)(lVar23 + 0x1a0);
          dStack_360 = 0.0;
          auVar65 = *(undefined1 (*) [16])(lVar23 + 0x1b0);
          dVar56 = auVar65._0_8_;
          dVar69 = auVar65._8_8_;
          dVar77 = *(double *)(lVar23 + 0x1c0);
          pdVar12 = *(double **)(lVar23 + 0x230);
          dVar72 = *(double *)(lVar23 + 0x1a8);
          dVar79 = 0.0;
          if (pdVar12 == (double *)0x0) {
            uVar8 = 0x40;
            dStack_360 = 0.0;
            dStack_350 = 0.0;
            local_358 = *(double *)(lVar23 + 0x1a8);
            pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
            dVar72 = DAT_14c8463d8;
            *pdVar12 = DAT_14c8463d0;
            pdVar12[1] = dVar72;
            dVar72 = DAT_14c8463e8;
            pdVar12[2] = DAT_14c8463e0;
            pdVar12[3] = dVar72;
            dVar72 = DAT_14c846500;
            pdVar12[4] = DAT_14c8464f8;
            pdVar12[5] = dVar72;
            dVar87 = DAT_14c846508;
            pdVar12[6] = DAT_14c846508;
            *(double **)(lVar23 + 0x230) = pdVar12;
            dVar72 = local_358;
            dVar79 = dStack_350;
          }
          auVar90 = _DAT_1499387d0;
          uVar10 = SUB84(dVar87,0);
          dVar87 = auVar92._0_8_;
          local_348 = auVar48;
          local_338 = dVar82;
          dStack_330 = dVar46;
          if (((pdVar12[4] != dVar56) || (NAN(pdVar12[4]) || NAN(dVar56))) ||
             ((pdVar12[5] != dVar69 ||
              (((NAN(pdVar12[5]) || NAN(dVar69) || (pdVar12[6] != dVar77)) ||
               (NAN(pdVar12[6]) || NAN(dVar77))))))) {
            auVar52._8_8_ = 0;
            auVar52._0_8_ = dVar77;
            dVar46 = (double)DAT_1499387d0;
            dVar63 = DAT_1499387d0._8_8_;
            auVar65 = divpd(auVar65,_DAT_1499387d0);
            auVar48 = divpd(auVar52,_DAT_1499387d0);
            auVar65 = roundpd(auVar65,auVar65,3);
            auVar48 = roundpd(auVar48,auVar48,3);
            auVar75._0_8_ = dVar56 - auVar65._0_8_ * dVar46;
            auVar75._8_8_ = dVar69 - auVar65._8_8_ * dVar63;
            auVar53._0_8_ = dVar77 - auVar48._0_8_ * dVar46;
            auVar53._8_8_ = 0.0 - auVar48._8_8_ * dVar63;
            auVar71._0_8_ = auVar75._0_8_ + dVar46;
            auVar71._8_8_ = auVar75._8_8_ + dVar63;
            auVar45._0_8_ = auVar53._0_8_ + dVar46;
            auVar45._8_8_ = auVar53._8_8_ + dVar63;
            auVar33._8_8_ = -(ulonglong)(0.0 <= auVar75._8_8_);
            auVar33._0_8_ = -(ulonglong)(0.0 <= auVar75._0_8_);
            auVar48 = blendvpd(auVar71,auVar75,auVar33);
            auVar34._8_8_ = -(ulonglong)(0.0 <= auVar53._8_8_);
            auVar34._0_8_ = -(ulonglong)(0.0 <= auVar53._0_8_);
            auVar65 = blendvpd(auVar45,auVar53,auVar34);
            auVar54._0_8_ = auVar48._0_8_ + -360.0;
            auVar54._8_8_ = auVar48._8_8_ + -360.0;
            auVar60._0_8_ = auVar65._0_8_ + -360.0;
            auVar60._8_8_ = auVar65._8_8_ + 0.0;
            auVar35._8_8_ = -(ulonglong)(180.0 < auVar48._8_8_);
            auVar35._0_8_ = -(ulonglong)(180.0 < auVar48._0_8_);
            auVar47 = blendvpd(auVar48,auVar54,auVar35);
            auVar36._8_8_ = -(ulonglong)(180.0 < auVar65._8_8_);
            auVar36._0_8_ = -(ulonglong)(180.0 < auVar65._0_8_);
            auVar65 = blendvpd(auVar65,auVar60,auVar36);
            *(undefined1 (*) [16])(pdVar12 + 4) = auVar47;
            dVar77 = auVar65._0_8_;
            pdVar12[6] = dVar77;
            auVar76._8_8_ = 0;
            auVar76._0_8_ = dVar77;
            auVar65 = divpd(auVar47,auVar90);
            auVar48 = divpd(auVar76,auVar90);
            auVar65 = roundpd(auVar65,auVar65,3);
            auVar48 = roundpd(auVar48,auVar48,3);
            dVar56 = (auVar47._0_8_ - auVar65._0_8_ * dVar46) * 0.008726646259971648;
            dVar69 = (auVar47._8_8_ - auVar65._8_8_ * dVar63) * 0.008726646259971648;
            dVar46 = (dVar77 - auVar48._0_8_ * dVar46) * 0.008726646259971648;
            dVar63 = (0.0 - auVar48._8_8_ * dVar63) * 0.008726646259971648;
            local_358 = dVar72;
            dStack_350 = dVar79;
            local_2e8 = sin(dVar56);
            uStack_2d0 = 0;
            local_2d8 = dVar55;
            dVar77 = sin(dVar69);
            local_328._8_8_ = 0;
            local_328._0_8_ = dVar61;
            local_2f8 = sin(dVar46);
            sin(dVar63);
            dVar61 = cos(dVar56);
            dVar55 = local_2d8;
            dStack_310 = 0.0;
            local_318 = dVar73;
            dVar73 = cos(dVar69);
            dVar72 = cos(dVar46);
            auVar48 = local_348;
            cos(dVar63);
            dVar56 = -(dVar73 * local_2e8 * local_2f8) + dVar77 * dVar61 * dVar72;
            dVar69 = dVar77 * local_2e8 * local_2f8 + dVar73 * dVar61 * dVar72;
            dVar46 = local_2e8 * dVar77 * dVar72 - dVar61 * dVar73 * local_2f8;
            dVar77 = -(local_2e8 * dVar73 * dVar72) - dVar61 * dVar77 * local_2f8;
            *pdVar12 = dVar46;
            pdVar12[1] = dVar77;
            pdVar12[2] = dVar56;
            pdVar12[3] = dVar69;
            dVar73 = local_318;
            uVar10 = extraout_EAX;
            dVar72 = local_358;
            dVar61 = (double)local_328._0_8_;
          }
          else {
            dVar46 = *pdVar12;
            dVar77 = pdVar12[1];
            dVar56 = pdVar12[2];
            dVar69 = pdVar12[3];
          }
          auVar67._8_8_ = dVar61;
          auVar67._0_8_ = dVar57;
          auVar40._8_8_ = 0;
          auVar40._0_8_ = dVar55;
          auVar65 = minpd(auVar48,auVar67);
          auVar5._8_8_ = dStack_370;
          auVar5._0_8_ = local_378;
          auVar48 = minpd(auVar5,auVar40);
          auVar37._8_8_ = -(ulonglong)(auVar65._8_8_ < 0.0);
          auVar37._0_8_ = -(ulonglong)(auVar65._0_8_ < 0.0);
          iVar13 = movmskpd(uVar10,auVar37);
          auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
          auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
          uVar14 = movmskpd(uVar8,auVar49);
          dVar79 = auVar92._8_8_;
          if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
            dVar63 = dVar81 * dVar56 * -1.0 +
                     dVar87 * dVar77 + dVar79 * dVar46 * 1.0 + dVar78 * dVar69;
            dVar82 = dVar78 * dVar56 * 1.0 +
                     dVar79 * dVar77 + dVar87 * dVar46 * -1.0 + dVar81 * dVar69;
            auVar80._0_8_ =
                 dVar79 * dVar56 * 1.0 +
                 ((dVar46 * dVar81 * 1.0 + dVar87 * dVar69) - dVar77 * dVar78);
            auVar80._8_8_ =
                 dVar87 * dVar56 * -1.0 +
                 ((dVar46 * dVar78 * -1.0 + dVar79 * dVar69) - dVar77 * dVar81);
            dVar94 = local_338 * dVar57;
            dVar95 = dStack_330 * dVar61;
            dVar83 = local_308 * dVar55;
            dVar84 = dStack_300 * 0.0;
            dVar87 = dVar95 * dVar46 - dVar94 * dVar77;
            dVar79 = dVar83 * dVar77 - dVar95 * dVar56;
            dVar88 = dVar94 * dVar56 - dVar83 * dVar46;
            dVar62 = dVar84 * dVar69 - dVar84 * dVar69;
            dVar79 = dVar79 + dVar79;
            dVar88 = dVar88 + dVar88;
            dVar87 = dVar87 + dVar87;
            dVar62 = dVar62 + dVar62;
            local_318 = dVar73 + (dVar87 * dVar77 - dVar56 * dVar88) + dVar69 * dVar79 + dVar94;
            dStack_310 = local_368 + (dVar79 * dVar56 - dVar87 * dVar46) + dVar69 * dVar88 + dVar95;
            local_358 = dVar72 + (dVar88 * dVar46 - dVar77 * dVar79) + dVar69 * dVar87 + dVar83;
            dStack_350 = (dVar62 * dVar69 - dVar62 * dVar69) + dVar69 * dVar62 + dVar84 + 0.0;
            local_368 = (double)local_348._0_8_ * dVar57;
            dStack_360 = (double)local_348._8_8_ * dVar61;
            auVar32._8_8_ = dStack_370 * 0.0;
            auVar32._0_8_ = local_378 * dVar55;
            uVar8 = 0;
          }
          else {
            dVar63 = dVar77 + dVar77;
            dVar82 = dVar56 + dVar56;
            dVar62 = dVar46 * (dVar46 + dVar46);
            dVar88 = (dVar46 + dVar46) * dVar69;
            local_328._8_8_ = dStack_370 * 0.0;
            local_328._0_8_ = local_378 * dVar55;
            local_118 = (1.0 - (dVar62 + dVar77 * dVar63)) * dVar55;
            local_128 = (dVar63 * dVar69 + dVar46 * dVar82) * dVar55;
            local_148 = (dVar63 * dVar46 - dVar82 * dVar69) * dVar61;
            dStack_120 = (dVar82 * dVar77 - dVar88) * dVar55;
            dStack_360 = (double)local_348._8_8_ * dVar61;
            local_168 = (1.0 - (dVar56 * dVar82 + dVar77 * dVar63)) * dVar57;
            dStack_140 = (1.0 - (dVar56 * dVar82 + dVar62)) * dVar61;
            dStack_160 = (dVar63 * dVar46 + dVar82 * dVar69) * dVar57;
            local_138 = (dVar82 * dVar77 + dVar88) * dVar61;
            local_158 = (dVar46 * dVar82 - dVar63 * dVar69) * dVar57;
            uStack_150 = 0;
            uStack_130 = 0;
            uStack_110 = 0;
            uStack_f0 = 0x3ff0000000000000;
            dVar61 = dVar81 + dVar81;
            dVar55 = dVar87 + dVar87;
            dVar46 = dVar78 * (dVar78 + dVar78);
            local_198 = (1.0 - (dVar46 + dVar81 * dVar61)) * local_378;
            dVar77 = (dVar78 + dVar78) * dVar79;
            local_1a8 = (dVar78 * dVar55 + dVar61 * dVar79) * local_378;
            local_1c8 = (dVar61 * dVar78 - dVar55 * dVar79) * (double)local_348._8_8_;
            dStack_1a0 = (dVar55 * dVar81 - dVar77) * local_378;
            local_1e8 = (1.0 - (dVar87 * dVar55 + dVar81 * dVar61)) * (double)local_348._0_8_;
            dStack_1c0 = (1.0 - (dVar87 * dVar55 + dVar46)) * (double)local_348._8_8_;
            dStack_1e0 = (dVar61 * dVar78 + dVar55 * dVar79) * (double)local_348._0_8_;
            local_1b8 = (dVar55 * dVar81 + dVar77) * (double)local_348._8_8_;
            local_1d8 = (dVar78 * dVar55 - dVar61 * dVar79) * (double)local_348._0_8_;
            uStack_1d0 = 0;
            uStack_1b0 = 0;
            uStack_190 = 0;
            local_188 = local_338;
            dStack_180 = dStack_330;
            local_178 = local_308;
            uStack_170 = 0x3ff0000000000000;
            dStack_100 = local_368;
            local_368 = (double)local_348._0_8_ * dVar57;
            local_108 = dVar73;
            local_f8 = dVar72;
            FUN_1447fea8d(local_2a8);
            auVar32 = local_328;
            auVar65 = _DAT_149934d80;
            local_378 = local_2a8[2];
            dVar57 = local_2a8[2] * local_2a8[2] +
                     local_2a8[0] * local_2a8[0] + local_2a8[1] * local_2a8[1];
            dVar61 = local_278 * local_278 + local_288 * local_288 + local_280 * local_280;
            dVar46 = local_258 * local_258 + local_268 * local_268 + local_260 * local_260;
            uVar25 = -(ulonglong)(0.0 <= dVar57 + -9.99999993922529e-09);
            dVar57 = (double)(~uVar25 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar57)) & uVar25);
            uVar25 = -(ulonglong)(0.0 <= dVar61 + -9.99999993922529e-09);
            dVar61 = (double)(~uVar25 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar61)) & uVar25);
            uVar25 = -(ulonglong)(0.0 <= dVar46 + -9.99999993922529e-09);
            dVar46 = (double)(~uVar25 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar46)) & uVar25);
            auVar28._8_8_ = -(ulonglong)(0.0 <= dStack_360);
            auVar28._0_8_ = -(ulonglong)(0.0 <= local_368);
            auVar48 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar28);
            uVar25 = -(ulonglong)(0.0 <= local_328._0_8_);
            dVar55 = (double)(~uVar25 & 0xbff0000000000000 | uVar25 & 0x3ff0000000000000);
            dVar73 = auVar48._0_8_;
            local_2a8[0] = local_2a8[0] * dVar57 * dVar73;
            local_2a8[1] = local_2a8[1] * dVar57 * dVar73;
            local_2a8[2] = dVar57 * local_2a8[2] * dVar73;
            dVar57 = auVar48._8_8_;
            local_278 = dVar61 * local_278 * dVar57;
            local_280 = local_280 * dVar61 * dVar57;
            local_288 = dVar57 * local_288 * dVar61;
            local_258 = dVar46 * local_258 * dVar55;
            local_260 = local_260 * dVar46 * dVar55;
            local_268 = dVar55 * local_268 * dVar46;
            pdVar12 = &local_2c8;
            iVar13 = FUN_14481fd10(pdVar12,local_2a8);
            uVar8 = SUB84(pdVar12,0);
            dVar57 = local_2b8 * local_2b8 + local_2c8 * local_2c8;
            dVar61 = dStack_2b0 * dStack_2b0 + dStack_2c0 * dStack_2c0;
            auVar44._0_8_ = dVar57 + dVar61;
            auVar44._8_8_ = dVar57 + dVar61;
            auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
            auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
            auVar48 = sqrtpd(auVar44,auVar44);
            auVar65 = divpd(auVar65,auVar48);
            auVar50._0_8_ = auVar65._0_8_ * local_2b8;
            auVar50._8_8_ = auVar65._8_8_ * dStack_2b0;
            dVar63 = (double)((ulonglong)(local_2c8 * auVar65._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
            dVar82 = (double)((ulonglong)(dStack_2c0 * auVar65._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
            auVar80 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar29);
            local_318 = local_248;
            dStack_310 = uStack_240;
            local_358 = local_238;
            dStack_350 = 0.0;
          }
          auVar59._0_8_ = DAT_14c846520 / *(double *)(lVar21 + 0x290);
          dVar61 = DAT_14c846518 / *(double *)(lVar21 + 0x288);
          auVar51._0_8_ = DAT_14c846510 / *(double *)(lVar21 + 0x280);
          auVar51._8_8_ = dVar61;
          local_378 = DAT_14c8464f0;
          dStack_370 = 0.0;
          auVar59._8_8_ = 0;
          auVar6._8_8_ = dStack_360;
          auVar6._0_8_ = local_368;
          auVar65 = minpd(auVar6,auVar51);
          dVar57 = auVar32._0_8_;
          auVar48 = minpd(auVar32,auVar59);
          auVar68._8_8_ = -(ulonglong)(auVar65._8_8_ < 0.0);
          auVar68._0_8_ = -(ulonglong)(auVar65._0_8_ < 0.0);
          iVar13 = movmskpd(iVar13,auVar68);
          auVar70._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
          auVar70._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
          uVar14 = movmskpd(uVar8,auVar70);
          dVar46 = auVar80._0_8_;
          dVar55 = auVar80._8_8_;
          if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
            dVar62 = dVar82 * DAT_14c8463e0 * -1.0 +
                     dVar46 * DAT_14c8463d8 + dVar55 * DAT_14c8463d0 * 1.0 + dVar63 * DAT_14c8463e8;
            dVar83 = dVar63 * DAT_14c8463e0 * 1.0 +
                     dVar55 * DAT_14c8463d8 + dVar46 * DAT_14c8463d0 * -1.0 + dVar82 * DAT_14c8463e8
            ;
            dVar73 = local_318 * auVar51._0_8_;
            dVar77 = dStack_310 * dVar61;
            dVar56 = local_358 * auVar59._0_8_;
            dVar69 = dStack_350 * 0.0;
            dVar72 = dVar77 * DAT_14c8463d0 - DAT_14c8463d8 * dVar73;
            dVar87 = dVar56 * DAT_14c8463d8 - DAT_14c8463e0 * dVar77;
            dVar79 = dVar73 * DAT_14c8463e0 - dVar56 * DAT_14c8463d0;
            dVar88 = dVar69 * DAT_14c8463e8 - dVar69 * DAT_14c8463e8;
            dVar87 = dVar87 + dVar87;
            dVar79 = dVar79 + dVar79;
            dVar72 = dVar72 + dVar72;
            dVar88 = dVar88 + dVar88;
            auVar74._8_8_ =
                 dVar46 * DAT_14c8463e0 * -1.0 +
                 ((DAT_14c8463d0 * dVar63 * -1.0 + dVar55 * DAT_14c8463e8) - DAT_14c8463d8 * dVar82)
            ;
            auVar74._0_8_ =
                 dVar55 * DAT_14c8463e0 * 1.0 +
                 ((DAT_14c8463d0 * dVar82 * 1.0 + dVar46 * DAT_14c8463e8) - DAT_14c8463d8 * dVar63);
            dVar73 = DAT_14c8464e0 +
                     (dVar72 * DAT_14c8463d8 - DAT_14c8463e0 * dVar79) +
                     DAT_14c8463e8 * dVar87 + dVar73;
            dVar77 = DAT_14c8464e8 +
                     (dVar87 * DAT_14c8463e0 - dVar72 * DAT_14c8463d0) +
                     DAT_14c8463e8 * dVar79 + dVar77;
            local_238 = DAT_14c8464f0 +
                        (dVar79 * DAT_14c8463d0 - DAT_14c8463d8 * dVar87) +
                        DAT_14c8463e8 * dVar72 + dVar56;
            dVar56 = (dVar88 * DAT_14c8463e8 - dVar88 * DAT_14c8463e8) +
                     DAT_14c8463e8 * dVar88 + dVar69 + 0.0;
            dVar55 = local_368 * auVar51._0_8_;
            dVar61 = dStack_360 * dVar61;
            dVar57 = dVar57 * auVar59._0_8_;
            dVar46 = auVar32._8_8_ * 0.0;
            local_328 = auVar32;
          }
          else {
            dVar73 = DAT_14c8463d8 + DAT_14c8463d8;
            dVar56 = DAT_14c8463e0 + DAT_14c8463e0;
            dVar77 = DAT_14c8463d0 * (DAT_14c8463d0 + DAT_14c8463d0);
            dVar69 = (DAT_14c8463d0 + DAT_14c8463d0) * DAT_14c8463e8;
            local_348._8_8_ = auVar32._8_8_ * 0.0;
            local_348._0_8_ = dVar57 * auVar59._0_8_;
            local_118 = (1.0 - (dVar77 + DAT_14c8463d8 * dVar73)) * auVar59._0_8_;
            local_128 = (dVar73 * DAT_14c8463e8 + DAT_14c8463d0 * dVar56) * auVar59._0_8_;
            local_148 = (dVar73 * DAT_14c8463d0 - dVar56 * DAT_14c8463e8) * dVar61;
            dStack_120 = (dVar56 * DAT_14c8463d8 - dVar69) * auVar59._0_8_;
            local_338 = local_368 * auVar51._0_8_;
            dStack_330 = dStack_360 * dVar61;
            local_168 = (1.0 - (DAT_14c8463e0 * dVar56 + DAT_14c8463d8 * dVar73)) * auVar51._0_8_;
            dStack_140 = (1.0 - (DAT_14c8463e0 * dVar56 + dVar77)) * dVar61;
            dStack_160 = (dVar73 * DAT_14c8463d0 + dVar56 * DAT_14c8463e8) * auVar51._0_8_;
            local_138 = (dVar56 * DAT_14c8463d8 + dVar69) * dVar61;
            local_158 = (DAT_14c8463d0 * dVar56 - dVar73 * DAT_14c8463e8) * auVar51._0_8_;
            uStack_150 = 0;
            uStack_130 = 0;
            uStack_110 = 0;
            local_108 = DAT_14c8464e0;
            dStack_100 = DAT_14c8464e8;
            local_f8 = DAT_14c8464f0;
            uStack_f0 = 0x3ff0000000000000;
            dVar61 = dVar82 + dVar82;
            dVar77 = dVar46 + dVar46;
            dVar73 = dVar63 * (dVar63 + dVar63);
            local_198 = (1.0 - (dVar73 + dVar82 * dVar61)) * dVar57;
            dVar56 = (dVar63 + dVar63) * dVar55;
            local_1a8 = (dVar61 * dVar55 + dVar63 * dVar77) * dVar57;
            local_1c8 = (dVar61 * dVar63 - dVar77 * dVar55) * dStack_360;
            dStack_1a0 = (dVar77 * dVar82 - dVar56) * dVar57;
            local_1e8 = (1.0 - (dVar46 * dVar77 + dVar82 * dVar61)) * local_368;
            dStack_1c0 = (1.0 - (dVar46 * dVar77 + dVar73)) * dStack_360;
            dStack_1e0 = (dVar61 * dVar63 + dVar77 * dVar55) * local_368;
            local_1b8 = (dVar77 * dVar82 + dVar56) * dStack_360;
            local_1d8 = (dVar63 * dVar77 - dVar61 * dVar55) * local_368;
            uStack_1d0 = 0;
            uStack_1b0 = 0;
            uStack_190 = 0;
            local_188 = local_318;
            dStack_180 = dStack_310;
            local_178 = local_358;
            uStack_170 = 0x3ff0000000000000;
            FUN_1447fea8d(local_2a8);
            dVar61 = dStack_330;
            dVar55 = local_338;
            local_378 = local_2a8[2];
            dVar57 = local_2a8[2] * local_2a8[2] +
                     local_2a8[0] * local_2a8[0] + local_2a8[1] * local_2a8[1];
            dVar77 = local_278 * local_278 + local_288 * local_288 + local_280 * local_280;
            dVar46 = local_258 * local_258 + local_268 * local_268 + local_260 * local_260;
            uVar25 = -(ulonglong)(0.0 <= dVar57 + -9.99999993922529e-09);
            dVar73 = (double)(~uVar25 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar57)) & uVar25);
            uVar25 = -(ulonglong)(0.0 <= dVar77 + -9.99999993922529e-09);
            dVar77 = (double)(~uVar25 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar77)) & uVar25);
            uVar25 = -(ulonglong)(0.0 <= dVar46 + -9.99999993922529e-09);
            dVar56 = (double)(~uVar25 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar46)) & uVar25);
            dVar57 = (double)local_348._0_8_;
            dVar46 = (double)local_348._8_8_;
            auVar30._8_8_ = -(ulonglong)(0.0 <= dStack_330);
            auVar30._0_8_ = -(ulonglong)(0.0 <= local_338);
            auVar65 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar30);
            dVar69 = (double)(~-(ulonglong)(0.0 <= (double)local_348._0_8_) & 0xbff0000000000000 |
                             -(ulonglong)(0.0 <= (double)local_348._0_8_) & 0x3ff0000000000000);
            dVar72 = auVar65._0_8_;
            local_2a8[0] = local_2a8[0] * dVar73 * dVar72;
            local_2a8[1] = local_2a8[1] * dVar73 * dVar72;
            local_2a8[2] = dVar73 * local_2a8[2] * dVar72;
            dVar73 = auVar65._8_8_;
            local_278 = dVar77 * local_278 * dVar73;
            local_280 = local_280 * dVar77 * dVar73;
            local_288 = dVar73 * local_288 * dVar77;
            local_258 = dVar56 * local_258 * dVar69;
            local_260 = local_260 * dVar56 * dVar69;
            local_268 = dVar69 * local_268 * dVar56;
            FUN_14481fd10(&local_2c8,local_2a8);
            auVar38._0_8_ = local_2c8 * local_2c8;
            auVar38._8_8_ = dStack_2c0 * dStack_2c0;
            dVar73 = local_2b8 * local_2b8 + auVar38._0_8_;
            dVar77 = dStack_2b0 * dStack_2b0 + auVar38._8_8_;
            auVar41._0_8_ = dVar73 + dVar77;
            auVar41._8_8_ = dVar73 + dVar77;
            auVar65 = sqrtpd(auVar38,auVar41);
            auVar65 = divpd(_DAT_149934d80,auVar65);
            auVar42._0_8_ = auVar65._0_8_ * local_2b8;
            auVar42._8_8_ = auVar65._8_8_ * dStack_2b0;
            dVar62 = (double)((ulonglong)(local_2c8 * auVar65._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
            dVar83 = (double)((ulonglong)(dStack_2c0 * auVar65._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
            auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
            auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
            auVar74 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar31);
            dVar56 = 0.0;
            dVar73 = local_248;
            dVar77 = uStack_240;
          }
          *(double *)(param_1 + 0xd60) = dVar62;
          *(double *)(param_1 + 0xd68) = dVar83;
          *(undefined1 (*) [16])(param_1 + 0xd70) = auVar74;
          *(double *)(param_1 + 0xd80) = dVar73;
          *(double *)(param_1 + 0xd88) = dVar77;
          *(double *)(param_1 + 0xd90) = local_238;
          *(double *)(param_1 + 0xd98) = dVar56;
          *(double *)(param_1 + 0xda0) = dVar55;
          *(double *)(param_1 + 0xda8) = dVar61;
          *(double *)(param_1 + 0xdb0) = dVar57;
          *(double *)(param_1 + 0xdb8) = dVar46;
        }
      }
    }
    lVar23 = *(longlong *)(param_1 + 0xbf8);
    if (lVar23 != 0) {
      bVar7 = *(byte *)(param_1 + 0xde0) & 0xfe | *(byte *)(lVar23 + 0x6e4);
      *(byte *)(param_1 + 0xde0) = bVar7;
      bVar7 = bVar7 & 0xfd | *(char *)(lVar23 + 0x6e5) * '\x02';
      *(byte *)(param_1 + 0xde0) = bVar7;
      bVar17 = *(char *)(lVar23 + 0x6e7) << 3;
      *(byte *)(param_1 + 0xde0) = bVar7 & 0xf7 | bVar17;
      bVar7 = bVar7 & 0xf3 | bVar17 | *(char *)(lVar23 + 0x6c4) << 2;
      *(byte *)(param_1 + 0xde0) = bVar7;
      bVar7 = bVar7 & 0xef | *(char *)(lVar23 + 0x664) << 4;
      *(byte *)(param_1 + 0xde0) = bVar7;
      *(byte *)(param_1 + 0xde0) = bVar7 & 0xdf | *(char *)(lVar23 + 0x1579) << 5;
      uVar4 = *(undefined8 *)(lVar23 + 0x670);
      *(undefined8 *)(param_1 + 0xde8) = *(undefined8 *)(lVar23 + 0x668);
      *(undefined8 *)(param_1 + 0xdf0) = uVar4;
      *(undefined8 *)(param_1 + 0xdf8) = *(undefined8 *)(lVar23 + 0x678);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_398);
    }
  }
LAB_14023ef9a:
  if ((local_e0 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14023f936 FUN_14023f936 body=50 status=ok
// SIG undefined FUN_14023f936(void)

void FUN_14023f936(undefined8 param_1,undefined8 param_2)

{
  FUN_144909668();
  if (DAT_14cb71f68 != '\0') {
    return;
  }
  FUN_1448019d0(param_1,param_2);
  return;
}



// FUNCTION 14023f968 FUN_14023f968 body=55 status=ok
// SIG undefined FUN_14023f968(void)

void FUN_14023f968(longlong *param_1)

{
  FUN_14023f9a0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14023f9a0 FUN_14023f9a0 body=121 status=ok
// SIG undefined FUN_14023f9a0(void)

void FUN_14023f9a0(longlong param_1,int param_2)

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



// FUNCTION 14023fa1a FUN_14023fa1a body=154 status=ok
// SIG undefined FUN_14023fa1a(void)

longlong FUN_14023fa1a(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_14023fa6f;
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
LAB_14023fa6f:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_14024011e(param_1,param_2);
  return param_1;
}



// FUNCTION 14023fab4 FUN_14023fab4 body=1288 status=ok
// SIG undefined FUN_14023fab4(void)

void FUN_14023fab4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined1 auStack_3b8 [32];
  undefined1 local_398 [8];
  undefined8 local_390 [11];
  undefined8 local_338;
  undefined1 local_330;
  longlong local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  char local_2c8;
  undefined4 local_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  longlong *local_288;
  undefined4 local_280;
  undefined8 local_278;
  longlong *local_118;
  char local_e8;
  char local_78;
  char local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  FUN_1449facc0();
  lVar2 = *(longlong *)(param_1 + 0x978);
  if (*(longlong *)(param_1 + 0x998) == 0) {
    if (param_2 == 0) {
LAB_14023ff9f:
      param_2 = 0;
    }
    else {
      lVar9 = FUN_14130c340();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) goto LAB_14023ff9f;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
    }
    *(longlong *)(param_1 + 0x998) = param_2;
  }
  FUN_1437f45b8(param_1 + 0x968);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x998) + 0x558);
  if (lVar9 == 0) goto LAB_14023fd5f;
  lVar7 = FUN_144a7c224(lVar9);
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar7);
  }
  *(longlong *)(param_1 + 0x9a0) = lVar7;
  FUN_144a238e8(local_398,lVar9 + 0x1730);
  puVar10 = local_390;
  puVar11 = (undefined8 *)(param_1 + 0x9b0);
  for (lVar9 = 0xb; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  *(undefined1 *)(param_1 + 0xa10) = local_330;
  *(undefined8 *)(param_1 + 0xa08) = local_338;
  if (DAT_14c950c29 == '\x01') {
    if (local_328 == 0) {
      local_328 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *(longlong *)(param_1 + 0xa18) = local_328;
  if (&local_338 != (undefined8 *)(param_1 + 0xa08)) {
    if (local_2c8 == '\x01') {
      if ((*(char *)(param_1 + 0xa78) != '\0') && (*(longlong *)(param_1 + 0xa68) != 0)) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_1 + 0xa40) = local_300;
      *(undefined8 *)(param_1 + 0xa30) = local_310;
      *(undefined8 *)(param_1 + 0xa38) = uStack_308;
      *(undefined8 *)(param_1 + 0xa20) = local_320;
      *(undefined8 *)(param_1 + 0xa28) = uStack_318;
      if (local_2d8 == 0) {
        *(undefined8 *)(param_1 + 0xa58) = local_2e8;
        *(undefined8 *)(param_1 + 0xa60) = uStack_2e0;
        *(undefined8 *)(param_1 + 0xa48) = local_2f8;
        *(undefined8 *)(param_1 + 0xa50) = uStack_2f0;
      }
      *(longlong *)(param_1 + 0xa68) = local_2d8;
      local_2d8 = 0;
      *(undefined4 *)(param_1 + 0xa70) = (undefined4)local_2d0;
      *(undefined4 *)(param_1 + 0xa74) = local_2d0._4_4_;
      local_2d0 = 0x200000000;
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0xa78) == '\0') goto LAB_14023fbbf;
      if (*(longlong *)(param_1 + 0xa68) != 0) {
        FUN_1400020a8();
      }
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0xa78) = uVar6;
  }
LAB_14023fbbf:
  plVar4 = local_288;
  *(undefined4 *)(param_1 + 0xaa0) = local_2a0;
  *(undefined4 *)(param_1 + 0xaa4) = uStack_29c;
  *(undefined4 *)(param_1 + 0xaa8) = uStack_298;
  *(undefined4 *)(param_1 + 0xaac) = uStack_294;
  *(undefined4 *)(param_1 + 0xa90) = local_2b0;
  *(undefined4 *)(param_1 + 0xa94) = uStack_2ac;
  *(undefined4 *)(param_1 + 0xa98) = uStack_2a8;
  *(undefined4 *)(param_1 + 0xa9c) = uStack_2a4;
  *(undefined4 *)(param_1 + 0xa80) = local_2c0;
  *(undefined4 *)(param_1 + 0xa84) = uStack_2bc;
  *(undefined4 *)(param_1 + 0xa88) = uStack_2b8;
  *(undefined4 *)(param_1 + 0xa8c) = uStack_2b4;
  if ((undefined8 *)(param_1 + 0xab0) != &local_290) {
    *(undefined8 *)(param_1 + 0xab0) = local_290;
    local_290 = 0;
    plVar3 = *(longlong **)(param_1 + 0xab8);
    if (local_288 != plVar3) {
      local_288 = (longlong *)0x0;
      *(longlong **)(param_1 + 0xab8) = plVar4;
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xac0) = local_280;
  *(undefined8 *)(param_1 + 0xac8) = local_278;
  if (local_40 == '\x01') {
    local_40 = '\0';
  }
  if (local_78 == '\x01') {
    local_78 = '\0';
  }
  if (local_e8 == '\x01') {
    local_e8 = '\0';
  }
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_118 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar1 = (int *)((longlong)local_118 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_118 + 0x10))(local_118);
      }
    }
  }
  plVar4 = local_288;
  if (local_288 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_288 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_288)(local_288);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_2c8 == '\x01') && (local_2d8 != 0)) {
    FUN_1400020a8();
  }
  lVar9 = *(longlong *)(param_1 + 0x978);
  if (lVar9 == 0) {
    uVar12 = 0x3f800000;
  }
  else {
    uVar12 = *(undefined4 *)(lVar9 + 0x3c);
  }
  *(undefined4 *)(param_1 + 0x9ac) = uVar12;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x998) + 0x20);
  if (plVar4 == (longlong *)0x0) {
    bVar5 = 0;
  }
  else if ((plVar4[0x15] == 0) || (bVar5 = *(byte *)(plVar4[0x15] + 0x60), -1 < (char)bVar5)) {
    bVar5 = (**(code **)(*plVar4 + 0x4e8))();
    bVar5 = bVar5 ^ 1;
  }
  else {
    bVar5 = bVar5 >> 7;
  }
  *(byte *)(param_1 + 0x9a8) = bVar5;
  if (lVar9 != lVar2) {
    plVar4 = *(longlong **)(param_1 + 0x998);
    uVar8 = FUN_14477b072(plVar4,DAT_14cb1b8a8);
    (**(code **)(*plVar4 + 0x248))(plVar4,uVar8,0);
    if ((*(longlong *)(param_1 + 0x948) != 0) &&
       (((lVar9 != 0 && (*(int *)(lVar9 + 0xc0) != 0)) ||
        ((lVar2 != 0 && (*(int *)(lVar2 + 0xc0) != 0)))))) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x948) + 0xa8) = 1;
    }
  }
LAB_14023fd5f:
  if ((local_28 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14023ffbe FUN_14023ffbe body=131 status=ok
// SIG undefined FUN_14023ffbe(void)

void FUN_14023ffbe(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_3 + 0xa8))(param_3);
    if (lVar1 != 0) {
      local_38 = 0;
      local_30 = 1;
      local_2c = 0xffffffffffffffff;
      local_40 = param_2;
      uVar2 = (**(code **)(*param_3 + 0xa8))(param_3);
      FUN_1403204a6(uVar2,&local_40);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140240048 FUN_140240048 body=214 status=ok
// SIG undefined FUN_140240048(void)

void FUN_140240048(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x1ffffffffffffffU) * 8]];
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,0x10);
  }
  return;
}



// FUNCTION 14024011e FUN_14024011e body=239 status=ok
// SIG undefined FUN_14024011e(void)

undefined8 * FUN_14024011e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14023f9a0(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14045f6dc(param_1);
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
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 7);
    }
  }
  return param_1;
}



// FUNCTION 14024020e FUN_14024020e body=615 status=ok
// SIG undefined FUN_14024020e(void)

void FUN_14024020e(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  void *_Src;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auVar17 [16];
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar10 = (longlong *)*param_2;
    plVar12 = plVar10 + (longlong)(int)param_2[1] * 0xc;
    do {
      plVar13 = *(longlong **)(param_1 + 0xd8);
      iVar3 = *(int *)(param_1 + 0xe0);
      lVar11 = (longlong)iVar3;
      if (lVar11 != 0) {
        lVar9 = lVar11 * 0x60;
        plVar14 = plVar13;
        do {
          if (*plVar14 == *plVar10) {
            if (plVar14 != (longlong *)0x0) {
              fVar16 = *(float *)((longlong)plVar14 + 0x14);
              fVar1 = *(float *)(plVar10 + 5);
              fVar2 = *(float *)(plVar14 + 5);
              FUN_1464cc3ac(plVar14,plVar10);
              *(float *)((longlong)plVar14 + 0x24) = 1.0 - fVar1;
              *(float *)(plVar14 + 5) = fVar1;
              *(undefined1 *)((longlong)plVar14 + 0x2d) = 1;
              *(undefined1 *)((longlong)plVar14 + 0x2f) = 1;
              FUN_1404163bc(plVar14 + 1);
              fVar16 = (float)(-(uint)(fVar2 == fVar1) & (uint)fVar16 |
                              ~-(uint)(fVar2 == fVar1) & (uint)(1.0 - fVar16));
              auVar17 = ZEXT416((uint)fVar16);
              if (1.0 <= fVar16) {
                auVar17 = ZEXT416(0x3f800000);
              }
              if (auVar17._0_4_ <= 0.0) {
                auVar4._12_4_ = 0;
                auVar4._0_12_ = auVar17._4_12_;
                auVar17 = auVar4 << 0x20;
              }
              *(int *)((longlong)plVar14 + 0x14) = auVar17._0_4_;
              fVar16 = (float)FUN_14002c5a6(auVar17._0_4_,*(undefined1 *)((longlong)plVar14 + 0x2c),
                                            plVar14[1]);
              *(float *)(plVar14 + 3) = fVar16;
              *(float *)(plVar14 + 4) =
                   (*(float *)(plVar14 + 5) - *(float *)((longlong)plVar14 + 0x24)) * fVar16 +
                   *(float *)((longlong)plVar14 + 0x24);
              goto LAB_140240368;
            }
            break;
          }
          plVar14 = plVar14 + 0xc;
          lVar9 = lVar9 + -0x60;
        } while (lVar9 != 0);
      }
      *(uint *)(param_1 + 0xe0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xe4) < iVar3 + 1U) {
        FUN_140b2b43a((undefined8 *)(param_1 + 0xd8),iVar3);
        plVar13 = *(longlong **)(param_1 + 0xd8);
      }
      lVar15 = lVar11 * 0x60;
      plVar13[lVar11 * 0xc] = *plVar10;
      lVar9 = plVar10[1];
      plVar13[lVar11 * 0xc + 1] = lVar9;
      if ((lVar9 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      *(int *)(plVar13 + lVar11 * 0xc + 6) = (int)plVar10[6];
      lVar9 = plVar10[2];
      lVar7 = plVar10[3];
      uVar5 = *(undefined4 *)((longlong)plVar10 + 0x24);
      lVar8 = plVar10[5];
      uVar6 = *(undefined4 *)((longlong)plVar10 + 0x2c);
      *(int *)(plVar13 + lVar11 * 0xc + 4) = (int)plVar10[4];
      *(undefined4 *)((longlong)plVar13 + lVar15 + 0x24) = uVar5;
      *(int *)(plVar13 + lVar11 * 0xc + 5) = (int)lVar8;
      *(undefined4 *)((longlong)plVar13 + lVar15 + 0x2c) = uVar6;
      plVar13[lVar11 * 0xc + 2] = lVar9;
      plVar13[lVar11 * 0xc + 3] = lVar7;
      uVar5 = *(undefined4 *)((longlong)plVar10 + 0x3c);
      lVar9 = plVar10[8];
      uVar6 = *(undefined4 *)((longlong)plVar10 + 0x44);
      *(int *)(plVar13 + lVar11 * 0xc + 7) = (int)plVar10[7];
      *(undefined4 *)((longlong)plVar13 + lVar15 + 0x3c) = uVar5;
      *(int *)(plVar13 + lVar11 * 0xc + 8) = (int)lVar9;
      *(undefined4 *)((longlong)plVar13 + lVar15 + 0x44) = uVar6;
      plVar13[lVar11 * 0xc + 9] = plVar10[9];
      plVar13[lVar11 * 0xc + 10] = 0;
      iVar3 = (int)plVar10[0xb];
      _Src = (void *)plVar10[10];
      *(int *)(plVar13 + lVar11 * 0xc + 0xb) = iVar3;
      if ((longlong)iVar3 == 0) {
        *(undefined4 *)((longlong)plVar13 + lVar15 + 0x5c) = 0;
      }
      else {
        FUN_140123d68(plVar13 + lVar11 * 0xc + 10,iVar3,0);
        memcpy((void *)plVar13[lVar11 * 0xc + 10],_Src,(longlong)iVar3 * 0x60);
      }
LAB_140240368:
      if (*(float *)(plVar10 + 2) <= 0.0) {
        *(undefined1 *)(param_1 + 0xe8) = 1;
      }
      plVar10 = plVar10 + 0xc;
    } while (plVar10 != plVar12);
  }
  return;
}



// FUNCTION 140240476 FUN_140240476 body=554 status=ok
// SIG undefined FUN_140240476(void)

void FUN_140240476(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = param_1[4];
  local_58 = param_2;
  local_50 = param_3;
  if (lVar6 != 0) {
    if (DAT_14cad2858 == 0) {
      local_70 = &local_48;
      local_48 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_146395584;
      local_78 = &LAB_147a0ba80;
      local_80 = &LAB_14575ccce;
      local_88 = L"Engine";
      local_90 = 0x40000000000;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar6 = *(longlong *)(lVar6 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if (DAT_14c86a9f8 == '\x01') {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar1 != 2) {
          if (iVar1 != 1) goto LAB_140240514;
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          if (DVar3 != DVar4) goto LAB_140240514;
        }
      }
      FUN_14036294a(param_1[4],1,1);
    }
  }
LAB_140240514:
  lVar6 = param_1[0x7c];
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar6;
  }
  cVar2 = FUN_14024076e(param_1,param_2);
  if (cVar2 != '\0') {
    lVar5 = FUN_14490a3bc(param_1,param_3);
    if (lVar5 != 0) {
      FUN_1408d610e(lVar6,param_2);
      FUN_1402406a2(lVar5,param_2);
      local_48 = (code *)&local_58;
      local_40 = &local_50;
      FUN_140240888(param_1 + 0x91,local_34,&local_48,0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402406a2 FUN_1402406a2 body=122 status=ok
// SIG undefined FUN_1402406a2(void)

void FUN_1402406a2(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_14024071c(param_1,param_2);
    return;
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0xa8))(param_2);
  *puVar2 = *(undefined8 *)
             (*(longlong *)(param_1 + 0x30) + (longlong)(*(int *)(param_1 + 0x38) + -1) * 8);
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_140c4a4dc((longlong *)(param_1 + 0x30),iVar1);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 14024071c FUN_14024071c body=82 status=ok
// SIG undefined FUN_14024071c(void)

void FUN_14024071c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0xa8))(param_2);
  *puVar2 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_140c4a4dc((longlong *)(param_1 + 0x30),iVar1);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 14024076e FUN_14024076e body=281 status=ok
// SIG undefined FUN_14024076e(void)

undefined8 FUN_14024076e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  
  if (((((param_2 == (longlong *)0x0) ||
        (cVar2 = (**(code **)(*param_2 + 0xb0))(param_2), cVar2 == '\0')) ||
       (cVar2 = (**(code **)(*param_2 + 0xb8))(param_2), cVar2 == '\0')) ||
      (lVar4 = (**(code **)(*param_2 + 0xa8))(param_2), lVar4 == 0)) ||
     ((lVar4 = (**(code **)(*param_2 + 0xa8))(param_2), lVar4 != 0 &&
      (plVar5 = (longlong *)(**(code **)(*param_2 + 0xa8))(param_2), *plVar5 != 0)))) {
    return 0;
  }
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x490);
  if (*(uint *)(param_1 + 0x490) != *(uint *)(param_1 + 0x4bc)) {
    uVar3 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar6 = param_1 + 0x4c0;
    if (*(ulonglong *)(param_1 + 0x4c8) != 0) {
      uVar6 = *(ulonglong *)(param_1 + 0x4c8);
    }
    iVar7 = *(int *)(uVar6 + (ulonglong)(*(int *)(param_1 + 0x4d0) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar7 != -1) {
      uVar6 = *(ulonglong *)(param_1 + 0x488);
      do {
        puVar1 = (undefined8 *)(uVar6 + (longlong)iVar7 * 0x18);
        if ((longlong *)*puVar1 == param_2) {
          uVar6 = CONCAT71((int7)(uVar6 >> 8),puVar1 == (undefined8 *)0x0);
          if ((puVar1 + 1 != (longlong *)0x0 && puVar1 != (undefined8 *)0x0) && (puVar1[1] != 0)) {
            return 0;
          }
          break;
        }
        iVar7 = *(int *)(puVar1 + 2);
      } while (iVar7 != -1);
    }
  }
  return CONCAT71((int7)(uVar6 >> 8),1);
}



// FUNCTION 140240888 FUN_140240888 body=1506 status=ok
// SIG undefined FUN_140240888(void)

int * FUN_140240888(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar23 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar23 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar23) {
      FUN_14482b872(param_1,iVar23);
    }
    iVar22 = (int)param_1[5];
    if (iVar22 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar6 = iVar22 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    plVar15 = param_1 + 2;
    iVar13 = iVar22 + 1;
    iVar16 = iVar22 + 0x1f;
    if (-1 < iVar22) {
      iVar16 = iVar22;
    }
    if (iVar16 >> 5 == iVar6) {
      *(int *)(param_1 + 5) = iVar13;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar22) {
        if (iVar22 + 0x20U < 0xa0) {
          iVar13 = 0x80;
          iVar6 = iVar22;
        }
        else {
          uVar12 = iVar22 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar20 = 4;
            if (4 < uVar12) {
              uVar20 = uVar12;
            }
          }
          else {
            uVar20 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
          }
          uVar9 = FUN_144a3809e(uVar20 << 2,0);
          iVar6 = (int)(uVar9 >> 2);
          iVar13 = -0x20;
          if ((int)uVar12 <= iVar6) {
            iVar13 = iVar6 << 5;
          }
          iVar6 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar13;
        FUN_1446efbd8(plVar15,iVar6);
        iVar13 = (int)param_1[5] + 1;
      }
      iVar6 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar6 = iVar13;
      }
      *(int *)(param_1 + 5) = iVar13;
      if (iVar13 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar15;
        }
        bVar11 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar6 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar23;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[4];
    }
    bVar11 = (byte)iVar22 & 0x1f;
    puVar2 = (uint *)((longlong)plVar15 + (longlong)(iVar16 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else {
    iVar23 = (int)param_1[6];
    lVar8 = (longlong)iVar23;
    iVar22 = *(int *)(*param_1 + 4 + lVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar22;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar22 * 0x18) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 2);
  puVar14 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar14 = puVar2;
  }
  iVar22 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar22 = iVar23;
  }
  puVar14[iVar22 >> 5] = puVar14[iVar22 >> 5] | 1 << ((byte)iVar23 & 0x1f);
  puVar1 = (ulonglong *)(*param_1 + lVar8 * 0x18);
  puVar3 = (ulonglong *)param_3[1];
  uVar9 = *(ulonglong *)*param_3;
  *puVar1 = uVar9;
  puVar1[1] = *puVar3;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  uVar12 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  if ((uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) < 2) {
LAB_1402409c2:
    cVar10 = '\0';
    iVar6 = iVar23;
  }
  else {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar22 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & uVar12) * 4);
    if (iVar22 == -1) goto LAB_1402409c2;
    do {
      iVar6 = iVar22;
      puVar3 = (ulonglong *)(*param_1 + (longlong)iVar6 * 0x18);
      if (*puVar3 == uVar9) {
        uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
        uVar9 = puVar1[1];
        uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
        *(int *)puVar3 = (int)*puVar1;
        *(undefined4 *)((longlong)puVar3 + 4) = uVar4;
        *(int *)(puVar3 + 1) = (int)uVar9;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uVar5;
        FUN_1470d9ed4(param_1,iVar23);
        cVar10 = '\x01';
        break;
      }
      cVar10 = '\0';
      iVar6 = iVar23;
      iVar22 = (int)puVar3[2];
    } while ((int)puVar3[2] != -1);
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar10;
  }
  if (cVar10 != '\0') goto LAB_140240c00;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar20 = 1;
  if (3 < uVar7) {
    uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar20 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar7 < 1) || ((int)uVar20 <= (int)param_1[9])) {
    uVar12 = (int)param_1[9] - 1U & uVar12;
    *(uint *)((longlong)puVar1 + 0x14) = uVar12;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(undefined4 *)(puVar1 + 2) =
         *(undefined4 *)
          ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar6;
    goto LAB_140240c00;
  }
  *(uint *)(param_1 + 9) = uVar20;
  plVar15 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar15,0,0,4);
    uVar20 = *(uint *)(param_1 + 9);
  }
  plVar18 = param_1 + 7;
  if (uVar20 == 1) {
    if (*plVar15 != 0) {
      FUN_1446efa72(plVar15,0,0,4);
    }
LAB_140240a25:
    uVar12 = 0;
    do {
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar18;
      }
      *(undefined4 *)((longlong)plVar15 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar12) * 4) =
           0xffffffff;
      uVar12 = uVar12 + 1;
    } while (uVar20 != uVar12);
  }
  else {
    if (uVar20 == 0) goto LAB_140240c00;
    FUN_1446efa72(plVar15,0,uVar20,4);
    if (0 < (int)uVar20) goto LAB_140240a25;
  }
  iVar23 = (int)param_1[5];
  if (iVar23 == 0) {
    uVar9 = 0;
    uVar19 = 1;
    iVar22 = 0;
    iVar13 = 0;
  }
  else {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = puVar2;
    }
    uVar12 = *puVar14;
    if (uVar12 == 0) {
      iVar22 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar22 = iVar23 + -1;
      }
      uVar9 = 0;
      uVar19 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar19 = uVar9;
      }
      iVar13 = 0;
      do {
        if (uVar19 == uVar9) goto LAB_140240c00;
        iVar13 = iVar13 + 0x20;
        uVar12 = puVar14[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar9 = 0;
      iVar13 = 0;
    }
    uVar19 = (ulonglong)(-uVar12 & uVar12);
    uVar24 = uVar19 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar22 = (iVar13 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar22) {
      iVar22 = iVar23;
    }
  }
  if (iVar22 < iVar23) {
    uVar12 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar21 = (longlong)iVar22;
      uVar24 = *(ulonglong *)(lVar8 + lVar21 * 0x18);
      uVar20 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
      uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
      uVar24 = (longlong)(int)(uVar20 >> 0x10 ^ uVar20) & (longlong)(int)param_1[9] - 1U;
      iVar23 = (int)uVar24;
      *(int *)(lVar8 + 0x14 + lVar21 * 0x18) = iVar23;
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar18;
      }
      *(undefined4 *)(lVar8 + 0x10 + lVar21 * 0x18) =
           *(undefined4 *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & uVar24) * 4);
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = plVar18;
      }
      *(int *)((longlong)plVar15 + ((longlong)iVar23 & (longlong)(int)param_1[9] - 1U) * 4) = iVar22
      ;
      uVar12 = ~(uint)uVar19 & uVar12;
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puVar2;
      }
      iVar23 = (int)param_1[5];
      iVar22 = (int)uVar9;
      lVar8 = (longlong)iVar22;
      uVar20 = puVar14[lVar8] & uVar12;
      if (uVar20 == 0) {
        iVar16 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar16 = iVar23 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar17 = iVar16;
        if (iVar16 < iVar22) {
          iVar17 = iVar22;
        }
        if (iVar16 <= iVar22) break;
        lVar21 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar20 = puVar14[lVar8 + lVar21 + 1];
          if (uVar20 != 0) break;
          lVar21 = lVar21 + 1;
          if (iVar17 - lVar8 == lVar21) goto LAB_140240c00;
        }
        uVar9 = (ulonglong)(iVar22 + (int)lVar21 + 1);
        uVar12 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar20 & uVar20);
      uVar24 = uVar19 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar22 = (iVar13 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar22 < iVar23);
  }
LAB_140240c00:
  *param_2 = iVar6;
  return param_2;
}



// FUNCTION 140240e6a FUN_140240e6a body=554 status=ok
// SIG undefined FUN_140240e6a(void)

void FUN_140240e6a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  code *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = param_1[4];
  local_58 = param_2;
  local_50 = param_3;
  if (lVar6 != 0) {
    if (DAT_14cad2858 == 0) {
      local_70 = &local_48;
      local_48 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_146395584;
      local_78 = &LAB_147a0ba80;
      local_80 = &LAB_14575ccce;
      local_88 = L"Engine";
      local_90 = 0x40000000000;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar6 = *(longlong *)(lVar6 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if (DAT_14c86a9f8 == '\x01') {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar1 != 2) {
          if (iVar1 != 1) goto LAB_140240f08;
          DVar3 = FUN_140ad26c0();
          DVar4 = GetCurrentThreadId();
          if (DVar3 != DVar4) goto LAB_140240f08;
        }
      }
      FUN_14036294a(param_1[4],1,1);
    }
  }
LAB_140240f08:
  lVar6 = param_1[0x7c];
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar6;
  }
  cVar2 = FUN_14024076e(param_1,param_2);
  if (cVar2 != '\0') {
    lVar5 = FUN_14490a3bc(param_1,param_3);
    if (lVar5 != 0) {
      FUN_1408d610e(lVar6,param_2);
      FUN_140241096(lVar5,param_2);
      local_48 = (code *)&local_58;
      local_40 = &local_50;
      FUN_140240888(param_1 + 0x91,local_34,&local_48,0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140241096 FUN_140241096 body=147 status=ok
// SIG undefined FUN_140241096(void)

void FUN_140241096(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_14024071c(param_1,param_2);
    return;
  }
  puVar1 = (undefined8 *)(param_1 + 0x30);
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0xa8))(param_2);
  *puVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x30) + 0xa8))();
  *puVar3 = param_2;
  uVar2 = *(uint *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = uVar2 + 1;
  if (*(uint *)(param_1 + 0x3c) < uVar2 + 1) {
    FUN_140c4a4dc(puVar1,(ulonglong)uVar2);
  }
  memmove((void *)((longlong)*puVar1 + 8),(void *)*puVar1,(ulonglong)uVar2 << 3);
  *(longlong **)*puVar1 = param_2;
  return;
}



// FUNCTION 14024112a FUN_14024112a body=747 status=ok
// SIG undefined FUN_14024112a(void)

void FUN_14024112a(longlong *param_1)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  undefined8 *local_48;
  code *local_40;
  undefined8 **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    if (DAT_14cad2858 == 0) {
      local_60 = &local_40;
      local_40 = FUN_144a7958c;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_146395584;
      local_68 = &LAB_147a0ba80;
      local_70 = &LAB_14575ccce;
      local_78 = L"Engine";
      local_80 = 0x40000000000;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if (DAT_14c86a9f8 == '\x01') {
        iVar7 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar7 != 2) {
          if (iVar7 != 1) goto LAB_1402411b7;
          DVar2 = FUN_140ad26c0();
          DVar3 = GetCurrentThreadId();
          if (DVar2 != DVar3) goto LAB_1402411b7;
        }
      }
      FUN_14036294a(param_1[4],1,1);
    }
  }
LAB_1402411b7:
  lVar4 = param_1[0x7c];
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar4;
  }
  local_48 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  local_48[1] = 0;
  *(undefined2 *)(local_48 + 2) = 0;
  *local_48 = &PTR_FUN_14a1c5d40;
  local_48[4] = 0;
  *(undefined4 *)(local_48 + 5) = 0xffffffff;
  local_48[6] = 0;
  local_48[7] = 0;
  local_48[3] = DAT_14c9a6338;
  FUN_1408d610e(lVar4,local_48);
  local_40 = (code *)&DAT_14c9a6338;
  local_38 = &local_48;
  FUN_140728450(param_1 + 0x87,local_2c,&local_40,0);
  if ((int)param_1[0x88] != *(int *)((longlong)param_1 + 0x46c)) {
    uVar1 = (uint)((ulonglong)DAT_14c9a6340 >> 0x10);
    uVar6 = (uint)DAT_14c9a6340 & 0xffff;
    plVar5 = param_1 + 0x8e;
    if ((longlong *)param_1[0x8f] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[0x8f];
    }
    iVar7 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_1[0x90] - 1U &
                    (int)((ulonglong)DAT_14c9a6340 >> 0x20) + ((uint)DAT_14c9a6340 << 0x10 | uVar6)
                    + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar5 = (longlong *)(param_1[0x87] + (longlong)iVar7 * 0x18);
        if (*plVar5 == DAT_14c9a6340) {
          if (plVar5 + 1 != (longlong *)0x0 && plVar5 != (longlong *)0x0) {
            FUN_14173e89e(param_1,local_48,plVar5[1]);
            goto LAB_1402412de;
          }
          break;
        }
        iVar7 = (int)plVar5[2];
      } while (iVar7 != -1);
    }
  }
  FUN_140241416(param_1,local_48);
LAB_1402412de:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140241416 FUN_140241416 body=705 status=ok
// SIG undefined FUN_140241416(void)

void FUN_140241416(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = (**(code **)(*param_2 + 0xb0))(param_2);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*param_2 + 0xb8))(param_2);
    if (cVar2 != '\0') {
      lVar5 = param_1[4];
      if (lVar5 != 0) {
        if (DAT_14cad2858 == 0) {
          local_50 = &local_30;
          local_30 = FUN_144a7958c;
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
        lVar5 = *(longlong *)(lVar5 + 0x10);
        if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
            DAT_14cad2858 + 0x30)) {
          if (DAT_14c86a9f8 == '\x01') {
            iVar1 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60);
            if (iVar1 != 2) {
              if (iVar1 != 1) goto LAB_1402414cd;
              DVar3 = FUN_140ad26c0();
              DVar4 = GetCurrentThreadId();
              if (DVar3 != DVar4) goto LAB_1402414cd;
            }
          }
          FUN_14036294a(param_1[4],1,1);
        }
      }
LAB_1402414cd:
      lVar5 = param_1[0x7c];
      if (lVar5 == 0) {
        lVar5 = (**(code **)(*param_1 + 0x350))(param_1);
        param_1[0x7c] = lVar5;
      }
      plVar6 = *(longlong **)(lVar5 + 0x170);
      FUN_14023ffbe();
      if (plVar6 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar6 + 0xc0))(plVar6);
        if (cVar2 != '\0') {
          lVar5 = (**(code **)(*plVar6 + 0xa8))(plVar6);
          if (lVar5 != 0) {
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0xa8))(plVar6);
            plVar6 = (longlong *)*plVar6;
            if (plVar6 != (longlong *)0x0) {
              cVar2 = (**(code **)(*plVar6 + 0xb0))(plVar6);
              if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
              }
            }
          }
        }
      }
      puVar7 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      puVar7[1] = 0;
      *(byte *)(puVar7 + 2) = *(byte *)(puVar7 + 2) & 0xfc;
      *(undefined1 *)((longlong)puVar7 + 0x11) = 0;
      *puVar7 = &PTR_FUN_14a7b4cb0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 4) = 0xffffffff;
      FUN_1408d5e6c(param_1,puVar7);
      FUN_1408d5e6c(param_1,param_2);
      puVar7 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      puVar7[1] = 0;
      *(byte *)(puVar7 + 2) = *(byte *)(puVar7 + 2) & 0xfc;
      *(undefined1 *)((longlong)puVar7 + 0x11) = 0;
      *puVar7 = &PTR_FUN_14a7b4bc0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 4) = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140241707 FUN_140241707 body=742 status=ok
// SIG undefined FUN_140241707(void)

void FUN_140241707(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  byte bVar9;
  undefined1 auStack_68 [47];
  byte local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = *(longlong **)(*param_1 + 8);
  if (*(int *)((longlong)plVar2 + 0x44) < 0x3f4) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  plVar8 = plVar2;
  if ((*(byte *)(plVar2 + 5) & 4) != 0) {
    if (*(char *)((longlong)param_2 + 0x72) == '\x01') {
      bVar9 = 1;
    }
    else {
      bVar9 = (**(code **)(*(longlong *)*param_2 + 400))((longlong *)*param_2,plVar2);
      bVar9 = bVar9 | 2;
    }
    *(byte *)((longlong)param_2 + 0x72) = bVar9;
    plVar8 = *(longlong **)(*param_1 + 8);
  }
  (**(code **)(*plVar8 + 0x160))(plVar8,(longlong)param_2 + 0x14);
  if (*(longlong *)((longlong)param_2 + 0x14) != 0) {
    FUN_140241ab5(param_1,param_2 + 1);
    bVar9 = *(byte *)(plVar2 + 5);
    if ((bVar9 & 1) != 0) {
      FUN_140241d2e(param_2,*(undefined4 *)(param_2 + 1));
      bVar9 = *(byte *)(plVar2 + 5);
    }
    if ((bVar9 & 4) != 0) {
      uVar7 = (**(code **)(*plVar2 + 0x28))(plVar2);
      param_2[9] = uVar7;
    }
    plVar8 = *(longlong **)(*param_1 + 8);
    puVar3 = *(undefined4 **)plVar8[1];
    if ((undefined4 *)((undefined8 *)plVar8[1])[1] < puVar3 + 1) {
      if ((*(byte *)((longlong)plVar8 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar8 + 0x170))(plVar8,(undefined4 *)((longlong)param_2 + 0x3c),4);
      }
      else {
        FUN_14572512c();
      }
    }
    else {
      *(undefined4 *)((longlong)param_2 + 0x3c) = *puVar3;
      *(longlong *)plVar8[1] = *(longlong *)plVar8[1] + 4;
    }
    local_39 = 0;
    uVar6 = FUN_140241a05(plVar2,param_2);
    if ((*(byte *)(plVar2 + 5) & 4) != 0) {
      bVar9 = *(int *)(param_2 + 8) != 0;
      if ((bool)bVar9) {
        local_39 = 1;
      }
      if (*(char *)(param_2 + 0xe) != '\0') {
        bVar9 = 2;
      }
      if ((char)uVar6 != '\0') {
        bVar9 = bVar9 | 4;
      }
      if (*(char *)(param_2 + 0xe) != '\0' || (char)uVar6 != '\0') {
        local_39 = bVar9;
      }
      if (*(char *)((longlong)param_2 + 0x72) == '\x03') {
        bVar9 = bVar9 | 8;
        local_39 = bVar9;
      }
      else if (*(char *)((longlong)param_2 + 0x72) == '\x01') {
        bVar9 = bVar9 | 0x20;
        local_39 = bVar9;
      }
      if (*(char *)((longlong)param_2 + 0x71) != '\0') {
        uVar5 = *(ulonglong *)((longlong)param_2 + 0xc);
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        if (uVar5 == DAT_14c892b4c) {
          local_39 = bVar9 | 0x10;
        }
      }
    }
    plVar8 = *(longlong **)(*param_1 + 8);
    puVar4 = (ulonglong *)plVar8[1];
    pbVar1 = (byte *)*puVar4 + 1;
    if ((byte *)puVar4[1] < pbVar1) {
      (**(code **)(*plVar8 + 0x170))(plVar8,&local_39,1);
    }
    else {
      local_39 = *(byte *)*puVar4;
      *puVar4 = (ulonglong)pbVar1;
    }
    if ((*(byte *)(plVar2 + 5) & 1) != 0) {
      *(byte *)(param_2 + 0xe) = local_39 >> 1 & 1;
      bVar9 = 1;
      if ((local_39 & 0x20) == 0) {
        bVar9 = (local_39 & 8) == 0 ^ 3;
      }
      *(byte *)((longlong)param_2 + 0x72) = bVar9;
      *(byte *)((longlong)param_2 + 0x71) = local_39 >> 4 & 1;
    }
    if ((local_39 & 1) == 0) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else {
      FUN_144aa02de(*param_1);
    }
    if ((local_39 & 2) != 0) {
      FUN_14490a6ba(param_1,param_2 + 0xc);
    }
    if ((local_39 & 4) != 0) {
      FUN_14281929d(param_1,uVar6,param_2);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140241a05 FUN_140241a05 body=176 status=ok
// SIG undefined FUN_140241a05(void)

undefined8 FUN_140241a05(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if ((*(byte *)(param_1 + 0x28) & 4) != 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar1 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd58
             );
    uVar3 = *(ulonglong *)(*param_2 + 0x38) & 0x200000000000000;
    *(byte *)((longlong)param_2 + 0x74) = (byte)(uVar3 >> 0x39);
    if (uVar3 != 0 || lVar1 != 0) {
      uVar3 = *(ulonglong *)(*param_2 + 0x38);
      if ((uVar3 & 0x400000000000000) == 0 && lVar1 != 0) {
        bVar2 = FUN_1468c37cc(lVar1,*(undefined8 *)(param_1 + 0x78));
      }
      else {
        bVar2 = ((byte)(uVar3 >> 0x38) & 4) >> 1;
      }
      *(byte *)((longlong)param_2 + 0x73) = bVar2;
      return 2;
    }
  }
  return 0;
}



// FUNCTION 140241ab5 FUN_140241ab5 body=600 status=ok
// SIG undefined FUN_140241ab5(void)

void FUN_140241ab5(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  int local_108 [46];
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(*(longlong *)(*param_1 + 8) + 0x28) & 1) == 0) {
    puVar8 = (undefined8 *)
             ((ulonglong)((*param_2 & 0x1fff) * 0xc) +
             *(longlong *)(&DAT_14c952ad0 + (longlong)((int)*param_2 >> 0xd) * 8));
    iVar9 = 1;
    do {
      local_108[0] = *(int *)(puVar8 + 1);
      local_110 = *puVar8;
      (**(code **)(**(longlong **)(*param_1 + 8) + 0x160))(*(longlong **)(*param_1 + 8),&local_110);
      plVar2 = *(longlong **)(*param_1 + 8);
      piVar3 = *(int **)plVar2[1];
      if ((int *)((undefined8 *)plVar2[1])[1] < piVar3 + 1) {
        if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar2 + 0x170))(plVar2,local_108,4);
        }
        else {
          FUN_14572512c(plVar2,local_108);
        }
      }
      else {
        local_108[0] = *piVar3;
        *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
      }
      iVar9 = iVar9 + local_108[0] + -1;
      puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
    } while (0 < iVar9);
  }
  else {
    local_50 = (undefined8 *)0x0;
    local_48 = 0x1000000000;
    iVar9 = 1;
    do {
      uVar4 = local_48;
      lVar6 = (longlong)(int)local_48;
      uVar5 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,uVar5);
      if (local_48._4_4_ < uVar5) {
        FUN_1468f3010(&local_110,uVar4 & 0xffffffff);
      }
      puVar8 = local_50;
      if (local_50 == (undefined8 *)0x0) {
        puVar8 = &local_110;
      }
      lVar1 = (longlong)puVar8 + lVar6 * 0xc;
      FUN_140241d0e(lVar1,1);
      (**(code **)(**(longlong **)(*param_1 + 8) + 0x160))(*(longlong **)(*param_1 + 8),lVar1);
      piVar7 = (int *)((longlong)puVar8 + lVar6 * 0xc + 8);
      plVar2 = *(longlong **)(*param_1 + 8);
      piVar3 = *(int **)plVar2[1];
      if ((int *)((undefined8 *)plVar2[1])[1] < piVar3 + 1) {
        if ((*(byte *)((longlong)plVar2 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar2 + 0x170))(plVar2,piVar7,4);
        }
        else {
          FUN_14572512c(plVar2,piVar7);
        }
      }
      else {
        *piVar7 = *piVar3;
        *(longlong *)plVar2[1] = *(longlong *)plVar2[1] + 4;
      }
      iVar9 = iVar9 + *piVar7 + -1;
    } while (0 < iVar9);
    puVar8 = &local_110;
    if (local_50 != (undefined8 *)0x0) {
      puVar8 = local_50;
    }
    uVar5 = FUN_140242058(&DAT_14c952a70,puVar8);
    *param_2 = uVar5;
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140241d0e FUN_140241d0e body=22 status=ok
// SIG undefined FUN_140241d0e(void)

void FUN_140241d0e(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0xc);
    return;
  }
  return;
}



// FUNCTION 140241d2e FUN_140241d2e body=809 status=ok
// SIG undefined FUN_140241d2e(void)

void FUN_140241d2e(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  ulonglong local_40;
  ulonglong uVar8;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(uint *)(param_1 + 8) = param_2;
  uVar7 = param_2 & 0x1fff;
  uVar8 = (ulonglong)uVar7;
  lVar9 = (longlong)((int)param_2 >> 0xd);
  uVar5 = *(ulonglong *)(*(longlong *)(&DAT_14c952ad0 + lVar9 * 8) + uVar8 * 0xc);
  *(ulonglong *)(param_1 + 0xc) = uVar5;
  piVar4 = (int *)FUN_1400760d0(&DAT_14c87eb00,uVar5 & 0xffffffff);
  if ((piVar4 == (int *)0x0) || (uVar5 >> 0x20 != 0)) goto switchD_140241e21_caseD_1e;
  iVar6 = *piVar4;
  if (iVar6 < 10) {
    if (iVar6 != 1) {
      if (iVar6 != 9) goto switchD_140241e21_caseD_1e;
switchD_140241e21_caseD_1d:
      uVar7 = 0;
      if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + lVar9 * 8) + 8 + uVar8 * 0xc)) {
        uVar7 = param_2 + 1;
      }
      *(undefined8 *)(param_1 + 0x2c) =
           *(undefined8 *)
            (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar7 >> 0xd) * 8) +
            (ulonglong)(uVar7 & 0x1fff) * 0xc);
      goto switchD_140241e21_caseD_1e;
    }
switchD_140241e21_caseD_22:
    uVar7 = 0;
    if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + lVar9 * 8) + 8 + uVar8 * 0xc)) {
      uVar7 = param_2 + 1;
    }
    *(undefined8 *)(param_1 + 0x24) =
         *(undefined8 *)
          (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar7 >> 0xd) * 8) +
          (ulonglong)(uVar7 & 0x1fff) * 0xc);
    goto switchD_140241e21_caseD_1e;
  }
  if (iVar6 == 10) {
    lVar1 = (ulonglong)(uVar7 << 2) * 3;
    uVar3 = 0;
    uVar7 = param_2 + 1;
    if (*(int *)(*(longlong *)(&DAT_14c952ad0 + lVar9 * 8) + 8 + lVar1) < 1) {
      uVar7 = 0;
    }
    *(undefined8 *)(param_1 + 0x1c) =
         *(undefined8 *)
          (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar7 >> 0xd) * 8) +
          (ulonglong)(uVar7 & 0x1fff) * 0xc);
    if (1 < *(int *)(*(longlong *)(&DAT_14c952ad0 + lVar9 * 8) + 8 + lVar1)) {
      iVar6 = 1;
      uVar5 = 0xc;
      do {
        iVar6 = iVar6 + *(int *)(*(longlong *)(&DAT_14c952ad0 + lVar9 * 8) + lVar1 + 8 + uVar5) + -1
        ;
        uVar5 = uVar5 + 0xc;
      } while (0 < iVar6);
LAB_140241f60:
      uVar3 = (int)(uVar5 >> 2) * -0x55555555 + param_2;
    }
LAB_140241f6c:
    local_48 = *(longlong *)
                (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar3 >> 0xd) * 8) +
                (ulonglong)(uVar3 & 0x1fff) * 0xc);
    if (local_48 != 0) {
      FUN_1400021e4(&local_48,local_58);
      cVar2 = FUN_140b10a34(local_58,param_1 + 0x50);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      if (cVar2 != '\0') goto switchD_140241e21_caseD_1e;
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    switch(iVar6) {
    case 0x1c:
      lVar1 = (ulonglong)(uVar7 << 2) * 3;
      uVar3 = param_2 + 1;
      uVar7 = 0;
      if (*(int *)(*(longlong *)(&DAT_14c952ad0 + lVar9 * 8) + 8 + lVar1) < 1) {
        uVar3 = 0;
      }
      *(undefined8 *)(param_1 + 0x2c) =
           *(undefined8 *)
            (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar3 >> 0xd) * 8) +
            (ulonglong)(uVar3 & 0x1fff) * 0xc);
      if (1 < *(int *)(*(longlong *)(&DAT_14c952ad0 + lVar9 * 8) + 8 + lVar1)) {
        iVar6 = 1;
        uVar5 = 0xc;
        do {
          iVar6 = iVar6 + *(int *)(*(longlong *)(&DAT_14c952ad0 + lVar9 * 8) + lVar1 + 8 + uVar5) +
                  -1;
          uVar5 = uVar5 + 0xc;
        } while (0 < iVar6);
        uVar7 = (int)(uVar5 >> 2) * -0x55555555 + param_2;
      }
      *(undefined8 *)(param_1 + 0x34) =
           *(undefined8 *)
            (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar7 >> 0xd) * 8) +
            (ulonglong)(uVar7 & 0x1fff) * 0xc);
      break;
    case 0x1d:
    case 0x23:
      goto switchD_140241e21_caseD_1d;
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
      break;
    case 0x22:
      goto switchD_140241e21_caseD_22;
    default:
      if (iVar6 != 0x2f) break;
      lVar1 = (ulonglong)(uVar7 << 2) * 3;
      uVar3 = 0;
      uVar7 = param_2 + 1;
      if (*(int *)(*(longlong *)(&DAT_14c952ad0 + lVar9 * 8) + 8 + lVar1) < 1) {
        uVar7 = uVar3;
      }
      *(undefined8 *)(param_1 + 0x1c) =
           *(undefined8 *)
            (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar7 >> 0xd) * 8) +
            (ulonglong)(uVar7 & 0x1fff) * 0xc);
      if (1 < *(int *)(*(longlong *)(&DAT_14c952ad0 + lVar9 * 8) + 8 + lVar1)) {
        iVar6 = 1;
        uVar5 = 0xc;
        do {
          iVar6 = iVar6 + *(int *)(*(longlong *)(&DAT_14c952ad0 + lVar9 * 8) + lVar1 + 8 + uVar5) +
                  -1;
          uVar5 = uVar5 + 0xc;
        } while (0 < iVar6);
        goto LAB_140241f60;
      }
      goto LAB_140241f6c;
    }
  }
switchD_140241e21_caseD_1e:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140242058 FUN_140242058 body=1578 status=ok
// SIG undefined FUN_140242058(void)

uint FUN_140242058(PSRWLOCK param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  PVOID pvVar12;
  byte bVar13;
  int iVar14;
  longlong lVar15;
  PSRWLOCK pRVar16;
  ulonglong uVar17;
  uint uVar18;
  PSRWLOCK pRVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  bool bVar28;
  undefined1 auStack_98 [32];
  int local_78;
  ulonglong local_68;
  PVOID local_60;
  PSRWLOCK local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar21 = 0;
  iVar7 = 1;
  uVar23 = 0;
  do {
    iVar27 = *(int *)((longlong)param_2 + uVar21 + 8);
    uVar3 = *(undefined8 *)((longlong)param_2 + uVar21);
    uVar25 = (uint)((ulonglong)uVar3 >> 0x10);
    uVar26 = (uint)uVar3 & 0xffff;
    uVar25 = ((uint)uVar3 << 0x10 | uVar26) + (int)((ulonglong)uVar3 >> 0x20) +
             (uVar25 << 0x13 | uVar25 & 0xffff) + (uVar26 >> 4);
    uVar23 = (uVar23 >> 2) + uVar23 * 0x40 + -0x61c88647 +
             ((uVar25 >> 2) + 0x9e3779b9 + uVar25 * 0x40 + iVar27 ^ uVar25) ^ uVar23;
    iVar7 = iVar7 + iVar27 + -1;
    uVar21 = uVar21 + 0xc;
  } while (0 < iVar7);
  local_50 = param_2;
  AcquireSRWLockShared(param_1);
  pRVar19 = param_1 + 1;
  iVar7 = FUN_144b009a2(pRVar19,uVar23,&local_50);
  if ((iVar7 != -1) &&
     (pvVar12 = (PVOID)((longlong)pRVar19->Ptr + (longlong)iVar7 * 0x18),
     puVar11 = (uint *)((longlong)pvVar12 + 8), puVar11 != (uint *)0x0 && pvVar12 != (PVOID)0x0)) {
    uVar25 = *puVar11;
    ReleaseSRWLockShared(param_1);
    goto LAB_1402423a9;
  }
  iVar7 = (int)(uVar21 >> 2) * -0x55555555;
  ReleaseSRWLockShared(param_1);
  AcquireSRWLockExclusive(param_1);
  if (iVar7 == 1) {
    if (*param_2 != 0) goto LAB_14024217d;
    uVar25 = 0;
  }
  else {
    if (0x2000 < iVar7) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/PropertyTypeName.cpp",0xce,
                    L"Invalid property type name with %d nodes. This can happen when serializing from a corrupt or invalid archive."
                    ,iVar7);
    }
LAB_14024217d:
    uVar26 = *(uint *)&param_1[0xb].Ptr;
    do {
      iVar27 = 0x2000 - (uVar26 & 0x1fff);
      if (iVar7 < iVar27) {
        iVar27 = 0;
      }
      uVar25 = iVar27 + uVar26;
      LOCK();
      uVar18 = *(uint *)&param_1[0xb].Ptr;
      bVar28 = uVar26 == uVar18;
      if (bVar28) {
        *(uint *)&param_1[0xb].Ptr = uVar25 + iVar7;
        uVar18 = uVar26;
      }
      uVar26 = uVar18;
      UNLOCK();
    } while (!bVar28);
    if (0x4000000 < (int)(uVar25 + iVar7)) {
      local_78 = iVar7;
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/PropertyTypeName.cpp",0xdd,
                    L"Exceeded property type name capacity of %d nodes when storing %d nodes.",
                    0x4000000);
    }
    pvVar12 = param_1[(longlong)((int)uVar25 >> 0xd) + 0xc].Ptr;
    if (pvVar12 == (PVOID)0x0) {
      pvVar12 = (PVOID)FUN_145d337f6(param_1);
    }
    if (0 < iVar7) {
      uVar26 = iVar7 + 1;
      lVar15 = 0;
      do {
        *(undefined4 *)((longlong)pvVar12 + lVar15 + (ulonglong)(uVar25 & 0x1fff) * 0xc + 8) =
             *(undefined4 *)((longlong)param_2 + lVar15 + 8);
        *(undefined8 *)((longlong)pvVar12 + lVar15 + (ulonglong)(uVar25 & 0x1fff) * 0xc) =
             *(undefined8 *)((longlong)param_2 + lVar15);
        lVar15 = lVar15 + 0xc;
        uVar26 = uVar26 - 1;
      } while (1 < uVar26);
    }
  }
  pvVar12 = param_1[(longlong)((int)uVar25 >> 0xd) + 0xc].Ptr;
  iVar7 = *(int *)((longlong)&param_1[7].Ptr + 4);
  local_58 = pRVar19;
  if (iVar7 == 0) {
    iVar27 = *(int *)&param_1[2].Ptr;
    iVar7 = *(int *)((longlong)&param_1[2].Ptr + 4);
    *(int *)&param_1[2].Ptr = iVar27 + 1;
    if (iVar7 == iVar27) {
      FUN_14482b872(pRVar19,iVar27);
    }
    iVar7 = *(int *)&param_1[6].Ptr;
    if (iVar7 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar8 = iVar7 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    pRVar19 = param_1 + 3;
    iVar14 = iVar7 + 1;
    iVar22 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar22 = iVar7;
    }
    if (iVar22 >> 5 == iVar8) {
      *(int *)&param_1[6].Ptr = iVar14;
    }
    else {
      iVar8 = *(int *)((longlong)&param_1[6].Ptr + 4);
      if (iVar8 <= iVar7) {
        iVar14 = iVar7;
        local_60 = pvVar12;
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar26 = iVar7 + 0x20U >> 5;
          if (iVar8 + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar26) {
              uVar18 = uVar26;
            }
          }
          else {
            uVar18 = uVar26 + (uVar26 * 3 >> 3) + 0x10;
          }
          uVar21 = (ulonglong)(uVar18 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar9 = (uint)(uVar21 + 0xf);
              if (uVar18 < 0x1ffd) {
                uVar21 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar21 + 0xf >> 4]];
              }
              else {
                uVar17 = (ulonglong)(uVar9 & 0xfffffff0);
                if (uVar17 < 0x7ff1) {
                  bVar13 = (&DAT_14c841e00)[uVar9 >> 4];
                  uVar20 = 0x32;
                  if (0x32 < bVar13) {
                    uVar20 = (ulonglong)bVar13;
                  }
                  uVar24 = 0x32 - (ulonglong)bVar13;
                  do {
                    uVar21 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar24 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar24 & 0xffffffff] & 0xf) == 0) goto LAB_1402424ea;
                    lVar15 = uVar20 + 1 + uVar24;
                    uVar24 = uVar24 - 1;
                  } while (lVar15 != 0x33);
                }
                uVar21 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar21 = (ulonglong)DAT_14c841df8;
                }
                uVar21 = -uVar21 & (uVar17 + uVar21) - 1;
              }
            }
            else {
              local_68 = (ulonglong)uVar26;
              uVar21 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar21,0);
              uVar26 = (uint)local_68;
              iVar14 = *(int *)&param_1[6].Ptr;
            }
          }
LAB_1402424ea:
          iVar10 = (int)(uVar21 >> 2);
          iVar8 = -0x20;
          if ((int)uVar26 <= iVar10) {
            iVar8 = iVar10 << 5;
          }
        }
        *(int *)((longlong)&param_1[6].Ptr + 4) = iVar8;
        FUN_1446efbd8(pRVar19,iVar14);
        iVar14 = *(int *)&param_1[6].Ptr + 1;
        pvVar12 = local_60;
      }
      iVar8 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar8 = iVar14;
      }
      *(int *)&param_1[6].Ptr = iVar14;
      if (iVar14 % 0x20 != 0) {
        pRVar16 = param_1[5].Ptr;
        if (param_1[5].Ptr == (PSRWLOCK)0x0) {
          pRVar16 = pRVar19;
        }
        bVar13 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)&pRVar16->Ptr + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)&pRVar16->Ptr + (longlong)(iVar8 >> 5) * 4) <<
                   (bVar13 & 0x1f)) >> (bVar13 & 0x1f);
      }
    }
    lVar15 = (longlong)iVar27;
    if (param_1[5].Ptr != (PSRWLOCK)0x0) {
      pRVar19 = param_1[5].Ptr;
    }
    bVar13 = (byte)iVar7 & 0x1f;
    puVar11 = (uint *)((longlong)&pRVar19->Ptr + (longlong)(iVar22 >> 5) * 4);
    *puVar11 = *puVar11 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
  }
  else {
    pvVar4 = param_1[1].Ptr;
    iVar27 = *(int *)&param_1[7].Ptr;
    lVar15 = (longlong)iVar27;
    iVar8 = *(int *)((longlong)pvVar4 + lVar15 * 0x18 + 4);
    *(int *)&param_1[7].Ptr = iVar8;
    iVar7 = iVar7 + -1;
    *(int *)((longlong)&param_1[7].Ptr + 4) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)pvVar4 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  pRVar19 = local_58;
  iVar7 = 1;
  pRVar16 = param_1 + 3;
  if (param_1[5].Ptr != (PSRWLOCK)0x0) {
    pRVar16 = param_1[5].Ptr;
  }
  iVar8 = iVar27 + 0x1f;
  if (-1 < iVar27) {
    iVar8 = iVar27;
  }
  puVar11 = (uint *)((longlong)&pRVar16->Ptr + (longlong)(iVar8 >> 5) * 4);
  *puVar11 = *puVar11 | 1 << ((byte)iVar27 & 0x1f);
  plVar1 = (longlong *)((longlong)param_1[1].Ptr + lVar15 * 0x18);
  *plVar1 = (longlong)pvVar12 + (ulonglong)((uVar25 & 0x1fff) * 0xc);
  *(uint *)(plVar1 + 1) = uVar25;
  *(undefined4 *)(plVar1 + 2) = 0xffffffff;
  uVar26 = *(int *)&param_1[2].Ptr - *(int *)((longlong)&param_1[7].Ptr + 4);
  if (uVar26 == 1) {
LAB_14024233d:
    if (((int)uVar26 < 1) || (iVar7 <= *(int *)&param_1[10].Ptr)) {
      uVar23 = *(int *)&param_1[10].Ptr - 1U & uVar23;
      *(uint *)((longlong)plVar1 + 0x14) = uVar23;
      pRVar19 = param_1[9].Ptr;
      if (param_1[9].Ptr == (PSRWLOCK)0x0) {
        pRVar19 = param_1 + 8;
      }
      *(undefined4 *)(plVar1 + 2) =
           *(undefined4 *)
            ((longlong)&pRVar19->Ptr +
            ((longlong)*(int *)&param_1[10].Ptr - 1U & (longlong)(int)uVar23) * 4);
      pRVar19 = param_1[9].Ptr;
      if (param_1[9].Ptr == (PSRWLOCK)0x0) {
        pRVar19 = param_1 + 8;
      }
      *(int *)((longlong)&pRVar19->Ptr +
              ((longlong)*(int *)&param_1[10].Ptr - 1U & (longlong)(int)uVar23) * 4) = iVar27;
    }
    else {
      *(int *)&param_1[10].Ptr = iVar7;
      FUN_14171b3fc(pRVar19);
    }
  }
  else {
    iVar8 = FUN_144b009a2(local_58,uVar23,plVar1);
    if (iVar8 == -1) {
      if (3 < uVar26) {
        uVar21 = (ulonglong)(uVar26 & 0xfffffffe) + 0xf;
        lVar15 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar7 = 1 << ((byte)lVar15 & 0x1f);
      }
      goto LAB_14024233d;
    }
    uVar5 = *(undefined4 *)((longlong)plVar1 + 4);
    lVar15 = plVar1[1];
    uVar6 = *(undefined4 *)((longlong)plVar1 + 0xc);
    puVar2 = (undefined4 *)((longlong)pRVar19->Ptr + (longlong)iVar8 * 0x18);
    *puVar2 = (int)*plVar1;
    puVar2[1] = uVar5;
    puVar2[2] = (int)lVar15;
    puVar2[3] = uVar6;
    FUN_1468f2f9e(pRVar19,iVar27);
  }
  ReleaseSRWLockExclusive(param_1);
LAB_1402423a9:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar25;
}



// FUNCTION 1402426b3 FUN_1402426b3 body=22 status=ok
// SIG undefined FUN_1402426b3(void)

void FUN_1402426b3(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x48);
    return;
  }
  return;
}



// FUNCTION 1402426c9 FUN_1402426c9 body=158 status=ok
// SIG undefined FUN_1402426c9(void)

ulonglong FUN_1402426c9(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (2 < *(int *)(param_1 + 0x3090)) {
    iVar2 = FUN_140242767();
    lVar1 = *(longlong *)(param_1 + 8);
    if ((*(byte *)(lVar1 + 0x48) & 1) != 0) {
      if ((*(byte *)(lVar1 + 0x4d) & 0x20) == 0) {
        return 0;
      }
      if (*(float *)(param_1 + 0x2b88) <= 0.001) {
        return 0;
      }
      if (*(float *)(param_1 + 0x2b8c) <= 0.001) {
        return 0;
      }
      if (iVar2 == 0) {
        return 0;
      }
      if (*(char *)(lVar1 + 0xc9) == '\0') {
        return 0;
      }
      iVar2 = (**(code **)(*DAT_14ca2e890 + 0xb0))();
      if (iVar2 != 0) {
        return 1;
      }
      if (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) == (longlong *)0x0) {
        return 1;
      }
      uVar3 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))();
      return uVar3 ^ 1;
    }
  }
  return 0;
}



// FUNCTION 140242767 FUN_140242767 body=176 status=ok
// SIG undefined FUN_140242767(void)

int FUN_140242767(void)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca33120) {
    FUN_144b3d300(&DAT_14ca33120);
    if (DAT_14ca33120 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar2 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.MotionBlurQuality",1);
      if (plVar2 == (longlong *)0x0) {
        DAT_14ca33118 = 0;
      }
      else {
        DAT_14ca33118 = (**(code **)(*plVar2 + 0x68))(plVar2);
      }
      _Init_thread_footer(&DAT_14ca33120);
    }
  }
  iVar3 = 4;
  if (*(int *)(DAT_14ca33118 + 4) < 4) {
    iVar3 = *(int *)(DAT_14ca33118 + 4);
  }
  iVar1 = 0;
  if (0 < iVar3) {
    iVar1 = iVar3;
  }
  return iVar1;
}



// FUNCTION 140242818 FUN_140242818 body=107 status=ok
// SIG undefined FUN_140242818(void)

void FUN_140242818(longlong param_1,uint param_2)

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
LAB_140242867:
      FUN_1402429d4(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_147a503c0(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_140242867;
  FUN_140242884(param_1);
  FUN_1402429d4(param_1,param_2);
  return;
}


