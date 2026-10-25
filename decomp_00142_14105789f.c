// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14105789f FUN_14105789f body=93 status=ok
// SIG undefined FUN_14105789f(void)

void FUN_14105789f(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x50] = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x78) = DAT_14cb7bd68;
  *(undefined4 *)(param_1 + 0x80) = DAT_14cb7bd70;
  *(undefined8 *)(param_1 + 0x84) = DAT_14cb7bd80;
  *(undefined4 *)(param_1 + 0x8c) = DAT_14cb7bd88;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}



// FUNCTION 1410578fc FUN_1410578fc body=787 status=ok
// SIG undefined FUN_1410578fc(void)

longlong * FUN_1410578fc(longlong *param_1,undefined1 *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  undefined1 *puVar6;
  ulonglong *puVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  longlong *plVar13;
  undefined1 auStack_68 [40];
  uint local_40;
  undefined4 uStack_3c;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar6 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar6 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar6;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  switch(*param_2) {
  case 1:
    FUN_14011750a(param_2 + 4,param_1);
    FUN_14011750a(param_2 + 0x10,param_1);
    bVar5 = param_2[0x50];
    puVar7 = (ulonglong *)param_1[1];
    puVar8 = (uint *)*puVar7;
    puVar1 = puVar8 + 1;
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      if ((uint *)puVar7[1] < puVar1) {
        local_40 = (uint)bVar5;
        (**(code **)(*param_1 + 0x170))(param_1,&local_40,4);
        uVar12 = local_40;
        if (1 < local_40) {
          FUN_14572541c(param_1);
          uVar12 = local_40;
        }
      }
      else {
        uVar12 = *puVar8;
        *puVar7 = (ulonglong)puVar1;
      }
      if (uVar12 != 0) {
LAB_141057ac4:
        FUN_141057c10(param_1,param_2 + 0x20);
      }
    }
    else {
      if ((uint *)puVar7[1] < puVar1) {
        local_40 = 0;
        (**(code **)(*param_1 + 0x170))(param_1,&local_40,4);
        uVar12 = local_40;
        if (1 < local_40) {
          FUN_14572541c(param_1);
          uVar12 = local_40;
        }
      }
      else {
        uVar12 = *puVar8;
        *puVar7 = (ulonglong)puVar1;
      }
      if (uVar12 != 0) {
        if (bVar5 == 0) {
          *(undefined8 *)(param_2 + 0x20) = 0;
          *(undefined8 *)(param_2 + 0x28) = 0;
          *(undefined8 *)(param_2 + 0x30) = 0;
          *(undefined8 *)(param_2 + 0x48) = DAT_14c8464f0;
          uVar11 = DAT_14c8464e8._4_4_;
          uVar10 = (undefined4)DAT_14c8464e8;
          uVar9 = DAT_14c8464e0._4_4_;
          *(undefined4 *)(param_2 + 0x38) = (undefined4)DAT_14c8464e0;
          *(undefined4 *)(param_2 + 0x3c) = uVar9;
          *(undefined4 *)(param_2 + 0x40) = uVar10;
          *(undefined4 *)(param_2 + 0x44) = uVar11;
          param_2[0x50] = 1;
        }
        goto LAB_141057ac4;
      }
      if (param_2[0x50] == '\x01') {
        param_2[0x50] = 0;
      }
    }
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_140553e5a(&local_40);
      plVar2 = local_38;
      if (local_38 == (longlong *)0x0) {
        *(ulonglong *)(param_2 + 0x58) = CONCAT44(uStack_3c,local_40);
        plVar13 = *(longlong **)(param_2 + 0x60);
        if (plVar13 != (longlong *)0x0) {
          *(undefined8 *)(param_2 + 0x60) = 0;
LAB_141057bc3:
          LOCK();
          plVar2 = plVar13 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar3 = (int *)((longlong)plVar13 + 0xc);
            *piVar3 = *piVar3 + -1;
            iVar4 = *piVar3;
            UNLOCK();
joined_r0x000141057bfc:
            if (iVar4 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
        *(ulonglong *)(param_2 + 0x58) = CONCAT44(uStack_3c,local_40);
        plVar13 = *(longlong **)(param_2 + 0x60);
        if (local_38 == plVar13) {
          LOCK();
          plVar13 = local_38 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar3 = (int *)((longlong)plVar2 + 0xc);
            *piVar3 = *piVar3 + -1;
            iVar4 = *piVar3;
            UNLOCK();
            plVar13 = plVar2;
            goto joined_r0x000141057bfc;
          }
        }
        else {
          *(longlong **)(param_2 + 0x60) = local_38;
          if (plVar13 != (longlong *)0x0) goto LAB_141057bc3;
        }
      }
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
    }
    (**(code **)(**(longlong **)(param_2 + 0x58) + 0x18))(*(longlong **)(param_2 + 0x58),param_1);
    break;
  case 2:
    FUN_14011750a(param_2 + 4,param_1);
    param_2 = param_2 + 0x10;
    goto LAB_141057999;
  case 3:
  case 4:
    FUN_14011750a(param_2 + 4,param_1);
    FUN_14011750a(param_2 + 0x10,param_1);
    FUN_14011750a(param_2 + 0x78,param_1);
    FUN_14011750a(param_2 + 0x84,param_1);
    param_2 = param_2 + 0x90;
LAB_141057999:
    FUN_14011750a(param_2,param_1);
    break;
  case 5:
    FUN_140f453a4(param_1,param_2 + 0x68);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141057c10 FUN_141057c10 body=60 status=ok
// SIG undefined FUN_141057c10(void)

undefined8 FUN_141057c10(undefined8 param_1,longlong param_2)

{
  FUN_14011750a(param_2,param_1);
  FUN_14011750a(param_2 + 0xc,param_1);
  FUN_14480c34d(param_1,param_2 + 0x18);
  return param_1;
}



// FUNCTION 141057c4c FUN_141057c4c body=1437 status=ok
// SIG undefined FUN_141057c4c(void)

undefined8 * FUN_141057c4c(longlong param_1,undefined8 *param_2,uint *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  uVar10 = *param_3;
  uVar17 = param_3[2];
  if (uVar17 != 0) {
    uVar10 = uVar17 >> 0xd ^ uVar10 - uVar17;
    uVar19 = uVar10 << 8 ^ (-0x61c88647 - uVar17) - uVar10;
    uVar23 = uVar19 >> 0xd ^ (uVar17 - uVar10) - uVar19;
    uVar17 = uVar23 >> 0xc ^ (uVar10 - uVar19) - uVar23;
    uVar10 = uVar17 << 0x10 ^ (uVar19 - uVar23) - uVar17;
    uVar19 = uVar10 >> 5 ^ (uVar23 - uVar17) - uVar10;
    uVar17 = uVar19 >> 3 ^ (uVar17 - uVar10) - uVar19;
    uVar10 = uVar17 << 10 ^ (uVar10 - uVar19) - uVar17;
    uVar10 = uVar10 >> 0xf ^ uVar19 - (uVar17 + uVar10);
  }
  iVar11 = FUN_140cf42ca(plVar1,uVar10,param_3);
  if (iVar11 != -1) {
    lVar14 = *plVar1 + (longlong)iVar11 * 0x28;
    if ((lVar14 != 0) && (*plVar1 + (longlong)iVar11 * 0x28 != -0x10)) {
      *param_2 = *(undefined8 *)(lVar14 + 0x10);
      lVar14 = *(longlong *)(lVar14 + 0x18);
      param_2[1] = lVar14;
      if (lVar14 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  if (param_4 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  plVar13 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar13[1] = (longlong)&DAT_100000001;
  *plVar13 = (longlong)&PTR_FUN_14b401ad0;
  plVar13[2] = *(longlong *)param_3;
  *(uint *)(plVar13 + 3) = param_3[2];
  plVar13[8] = 0;
  *(undefined4 *)(plVar13 + 9) = 0;
  plVar13[4] = 0;
  plVar13[5] = 0;
  *(undefined8 *)((longlong)plVar13 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar13 + 0x54) = 0;
  plVar13[0xc] = 0;
  *(undefined4 *)(plVar13 + 0xd) = 0;
  plVar13[0xe] = 0;
  plVar13[0xf] = 0;
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar11 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar11 + 1;
    if (*(int *)(param_1 + 0x2c) == iVar11) {
      FUN_140549c28(plVar1,iVar11);
    }
    iVar22 = *(int *)(param_1 + 0x48);
    if (iVar22 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar12 = iVar22 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    lVar20 = param_1 + 0x30;
    iVar18 = iVar22 + 1;
    iVar21 = iVar22 + 0x1f;
    if (-1 < iVar22) {
      iVar21 = iVar22;
    }
    if (iVar21 >> 5 == iVar12) {
      *(int *)(param_1 + 0x48) = iVar18;
    }
    else {
      if (*(int *)(param_1 + 0x4c) <= iVar22) {
        if (iVar22 + 0x20U < 0xa0) {
          iVar18 = 0x80;
          iVar12 = iVar22;
        }
        else {
          uVar10 = iVar22 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x4c) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar10) {
              uVar17 = uVar10;
            }
          }
          else {
            uVar17 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
          }
          uVar15 = FUN_144a3809e(uVar17 << 2,0);
          iVar12 = (int)(uVar15 >> 2);
          iVar18 = -0x20;
          if ((int)uVar10 <= iVar12) {
            iVar18 = iVar12 << 5;
          }
          iVar12 = *(int *)(param_1 + 0x48);
        }
        *(int *)(param_1 + 0x4c) = iVar18;
        FUN_1446efbd8(lVar20,iVar12);
        iVar18 = *(int *)(param_1 + 0x48) + 1;
      }
      iVar12 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar12 = iVar18;
      }
      *(int *)(param_1 + 0x48) = iVar18;
      if (iVar18 % 0x20 != 0) {
        lVar14 = *(longlong *)(param_1 + 0x40);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar14 = lVar20;
        }
        bVar16 = -(char)(iVar18 % 0x20);
        *(uint *)(lVar14 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)(lVar14 + (longlong)(iVar12 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar11;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      lVar20 = *(longlong *)(param_1 + 0x40);
    }
    bVar16 = (byte)iVar22 & 0x1f;
    puVar4 = (uint *)(lVar20 + (longlong)(iVar21 >> 5) * 4);
    *puVar4 = *puVar4 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar11 = *(int *)(param_1 + 0x50);
    lVar14 = (longlong)iVar11;
    iVar22 = *(int *)(*(longlong *)(param_1 + 0x20) + 4 + lVar14 * 0x28);
    *(int *)(param_1 + 0x50) = iVar22;
    iVar12 = *(int *)(param_1 + 0x54) + -1;
    *(int *)(param_1 + 0x54) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar22 * 0x28) = 0xffffffff;
    }
  }
  lVar20 = param_1 + 0x30;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar20 = *(longlong *)(param_1 + 0x40);
  }
  iVar22 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar22 = iVar11;
  }
  puVar4 = (uint *)(lVar20 + (longlong)(iVar22 >> 5) * 4);
  *puVar4 = *puVar4 | 1 << ((byte)iVar11 & 0x1f);
  puVar4 = (uint *)(*(longlong *)(param_1 + 0x20) + lVar14 * 0x28);
  puVar4[2] = param_3[2];
  *(longlong *)puVar4 = *(longlong *)param_3;
  *(longlong **)(puVar4 + 4) = plVar13 + 2;
  *(longlong **)(puVar4 + 6) = plVar13;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  puVar4[8] = 0xffffffff;
  uVar10 = *puVar4;
  uVar17 = puVar4[2];
  if (uVar17 != 0) {
    uVar10 = uVar17 >> 0xd ^ uVar10 - uVar17;
    uVar19 = uVar10 << 8 ^ (-0x61c88647 - uVar17) - uVar10;
    uVar23 = uVar19 >> 0xd ^ (uVar17 - uVar10) - uVar19;
    uVar17 = uVar23 >> 0xc ^ (uVar10 - uVar19) - uVar23;
    uVar10 = uVar17 << 0x10 ^ (uVar19 - uVar23) - uVar17;
    uVar19 = uVar10 >> 5 ^ (uVar23 - uVar17) - uVar10;
    uVar17 = uVar19 >> 3 ^ (uVar17 - uVar10) - uVar19;
    uVar10 = uVar17 << 10 ^ (uVar10 - uVar19) - uVar17;
    uVar10 = uVar10 >> 0xf ^ uVar19 - (uVar17 + uVar10);
  }
  uVar17 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x54);
  iVar22 = 1;
  if (uVar17 != 1) {
    iVar12 = FUN_140cf42ca(plVar1,uVar10,puVar4);
    if (iVar12 != -1) {
      puVar5 = (uint *)(*plVar1 + (longlong)iVar12 * 0x28);
      plVar6 = *(longlong **)(puVar5 + 6);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      uVar10 = *puVar4;
      uVar17 = puVar4[1];
      uVar19 = puVar4[2];
      uVar23 = puVar4[3];
      uVar7 = puVar4[5];
      uVar8 = puVar4[6];
      uVar9 = puVar4[7];
      puVar5[4] = puVar4[4];
      puVar5[5] = uVar7;
      puVar5[6] = uVar8;
      puVar5[7] = uVar9;
      *puVar5 = uVar10;
      puVar5[1] = uVar17;
      puVar5[2] = uVar19;
      puVar5[3] = uVar23;
      FUN_140cf432a(plVar1,iVar11);
      goto LAB_141057fda;
    }
    if (3 < uVar17) {
      uVar15 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar22 = 1 << ((byte)lVar14 & 0x1f);
    }
  }
  iVar12 = iVar11;
  if (((int)uVar17 < 1) || (iVar22 <= *(int *)(param_1 + 0x68))) {
    uVar10 = *(int *)(param_1 + 0x68) - 1U & uVar10;
    puVar4[9] = uVar10;
    lVar14 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar14 = param_1 + 0x58;
    }
    puVar4[8] = *(uint *)(lVar14 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar10)
                                   * 4);
    lVar14 = *(longlong *)(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar14 = param_1 + 0x58;
    }
    *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x68) - 1U & (longlong)(int)uVar10) * 4) =
         iVar11;
  }
  else {
    *(int *)(param_1 + 0x68) = iVar22;
    FUN_141059e56(plVar1);
  }
LAB_141057fda:
  lVar14 = *plVar1;
  *param_2 = *(undefined8 *)(lVar14 + 0x10 + (longlong)iVar12 * 0x28);
  lVar14 = *(longlong *)(lVar14 + 0x18 + (longlong)iVar12 * 0x28);
  param_2[1] = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_2;
}



// FUNCTION 1410581ea FUN_1410581ea body=566 status=ok
// SIG undefined FUN_1410581ea(void)

undefined8 * FUN_1410581ea(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  param_3 = (longlong *)*param_3;
  if (param_3 == (longlong *)0x0) goto LAB_141058351;
  (**(code **)(*param_3 + 0x10))(param_3,&local_50);
  plVar7 = local_48;
  if (local_50 != (longlong *)0x0) {
    *param_2 = local_50;
    bVar8 = true;
    if (local_48 == (longlong *)0x0) {
LAB_14105837a:
      plVar7 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
      UNLOCK();
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
      param_2[1] = plVar7;
      if (local_48 == (longlong *)0x0) goto LAB_14105837a;
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
      bVar8 = false;
      plVar7 = local_48;
    }
    plVar3 = local_50;
    iVar6 = *(int *)(param_1 + 0x11);
    *(uint *)(param_1 + 0x11) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0x8c) < iVar6 + 1U) {
      FUN_14105846a(param_1 + 0x10,iVar6);
    }
    lVar4 = param_1[0x10];
    *(longlong **)(lVar4 + (longlong)iVar6 * 0x10) = plVar3;
    *(longlong **)(lVar4 + 8 + (longlong)iVar6 * 0x10) = plVar7;
    if (!bVar8) {
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
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    plVar3 = local_50;
    plVar7 = (longlong *)param_1[1];
    if (plVar7 == (longlong *)0x0) {
LAB_141058381:
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar7[1];
      do {
        if (iVar6 == 0) goto LAB_141058381;
        LOCK();
        iVar5 = (int)plVar7[1];
        bVar8 = iVar6 == iVar5;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar8);
      local_68 = *param_1;
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_60 = plVar7;
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
    FUN_141058422(plVar3,&local_68);
    plVar7 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    (**(code **)(*local_50 + 0x10))();
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_48 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
LAB_141058351:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141058422 FUN_141058422 body=72 status=ok
// SIG undefined FUN_141058422(void)

void FUN_141058422(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x20);
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
    *(longlong **)(param_1 + 0x20) = plVar2;
  }
  return;
}



// FUNCTION 14105846a FUN_14105846a body=269 status=ok
// SIG undefined FUN_14105846a(void)

void FUN_14105846a(longlong param_1,int param_2)

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



// FUNCTION 141058578 FUN_141058578 body=230 status=ok
// SIG undefined FUN_141058578(void)

void FUN_141058578(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0xa0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0xcd) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
    if ((int)param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,8);
  }
  return;
}



// FUNCTION 14105865e FUN_14105865e body=246 status=ok
// SIG undefined FUN_14105865e(void)

undefined4 FUN_14105865e(char *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*param_1 == '\x01') {
    iVar1 = *(int *)(param_1 + 0x10);
    piVar3 = &DAT_14c948620;
    piVar2 = (int *)&DAT_14c948618;
    if ((((iVar1 != 0) && (*(int *)(param_1 + 0x14) != 0)) && (iVar1 != DAT_14c948000)) &&
       (2 < *(int *)(param_1 + 0x14))) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x28) + 0x18);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x28) + 0x20);
    }
    if (*piVar2 != *param_2) {
      return 0;
    }
    if (*piVar3 != param_2[2]) {
      return 0;
    }
    piVar3 = &DAT_14c948620;
    piVar2 = (int *)&DAT_14c948618;
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
       ((iVar1 != DAT_14c948000 && (3 < *(int *)(param_1 + 0x14))))) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x28) + 0x24);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x28) + 0x2c);
    }
    if (*piVar2 != param_2[3]) {
      return 0;
    }
    if (*piVar3 != param_2[5]) {
      return 0;
    }
    piVar2 = (int *)&DAT_14c948618;
    piVar3 = &DAT_14c948620;
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x14) != 0)) &&
       ((iVar1 != DAT_14c948000 && (4 < *(int *)(param_1 + 0x14))))) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x28) + 0x30);
      piVar3 = (int *)(*(longlong *)(param_1 + 0x28) + 0x38);
    }
    if (*piVar2 == param_2[6]) {
      return CONCAT31((int3)((uint)*piVar3 >> 8),*piVar3 == param_2[8]);
    }
  }
  return 0;
}



// FUNCTION 141058754 FUN_141058754 body=2751 status=ok
// SIG undefined FUN_141058754(void)

/* WARNING: Removing unreachable block (ram,0x000141059181) */
/* WARNING: Removing unreachable block (ram,0x00014105918c) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x00014105919f */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_141058754(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  byte bVar23;
  uint uVar24;
  int iVar25;
  longlong *plVar26;
  uint uVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  longlong *plVar31;
  longlong *plVar32;
  undefined8 uVar33;
  uint uVar34;
  undefined8 *puVar35;
  bool bVar36;
  undefined1 auStack_128 [32];
  longlong *local_108;
  ulonglong local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_90;
  longlong *plStack_88;
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = *param_2;
  plVar32 = (longlong *)(lVar4 + 0x10);
  uVar16 = *(uint *)(param_3 + 1);
  uVar24 = *(uint *)(param_3 + 2);
  if (uVar24 != 0) {
    uVar16 = uVar24 >> 0xd ^ uVar16 - uVar24;
    uVar27 = uVar16 << 8 ^ (-0x61c88647 - uVar24) - uVar16;
    uVar34 = uVar27 >> 0xd ^ (uVar24 - uVar16) - uVar27;
    uVar24 = uVar34 >> 0xc ^ (uVar16 - uVar27) - uVar34;
    uVar16 = uVar24 << 0x10 ^ (uVar27 - uVar34) - uVar24;
    uVar27 = uVar16 >> 5 ^ (uVar34 - uVar24) - uVar16;
    uVar24 = uVar27 >> 3 ^ (uVar24 - uVar16) - uVar27;
    uVar16 = uVar24 << 10 ^ (uVar16 - uVar27) - uVar24;
    uVar16 = uVar16 >> 0xf ^ uVar27 - (uVar24 + uVar16);
  }
  iVar17 = FUN_141057676(plVar32,uVar16,param_3 + 1);
  if (iVar17 != -1) goto LAB_141058c7c;
  plVar19 = (longlong *)FUN_14001cc68(0xc0,0x10);
  plVar19[1] = (longlong)&DAT_100000001;
  *plVar19 = (longlong)&PTR_FUN_14b401af0;
  plVar19[2] = 0;
  plVar19[3] = 0;
  plVar19[4] = param_1;
  lVar20 = param_3[1];
  lVar28 = param_3[2];
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x14);
  lVar12 = param_3[3];
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x1c);
  plVar19[5] = *param_3;
  plVar19[6] = lVar20;
  *(int *)(plVar19 + 7) = (int)lVar28;
  *(undefined4 *)((longlong)plVar19 + 0x3c) = uVar6;
  *(int *)(plVar19 + 8) = (int)lVar12;
  *(undefined4 *)((longlong)plVar19 + 0x44) = uVar7;
  plVar19[9] = param_3[4];
  lVar20 = param_3[5];
  plVar19[10] = lVar20;
  if (lVar20 != 0) {
    LOCK();
    *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
    UNLOCK();
  }
  plVar11 = plVar19 + 2;
  lVar20 = param_3[0xc];
  *(char *)(plVar19 + 0x11) = (char)lVar20;
  if ((char)lVar20 == '\x01') {
    lVar20 = param_3[6];
    lVar28 = param_3[7];
    lVar13 = param_3[8];
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x44);
    lVar14 = param_3[9];
    uVar7 = *(undefined4 *)((longlong)param_3 + 0x4c);
    lVar12 = param_3[0xb];
    plVar19[0xf] = param_3[10];
    plVar19[0x10] = lVar12;
    *(int *)(plVar19 + 0xd) = (int)lVar13;
    *(undefined4 *)((longlong)plVar19 + 0x6c) = uVar6;
    *(int *)(plVar19 + 0xe) = (int)lVar14;
    *(undefined4 *)((longlong)plVar19 + 0x74) = uVar7;
    plVar19[0xb] = lVar20;
    plVar19[0xc] = lVar28;
  }
  plVar19[0x16] = 0;
  plVar19[0x17] = 0;
  plVar19[0x14] = 0;
  plVar19[0x15] = 0;
  plVar19[0x12] = 0;
  plVar19[0x13] = 0;
  local_f8 = param_1;
  local_f0 = param_2;
  if ((plVar11 != (longlong *)0x0) &&
     (((*plVar11 == 0 || (plVar19[3] == 0)) || (*(int *)(plVar19[3] + 8) < 1)))) {
    if (plVar19 == (longlong *)0x0) {
      plVar31 = (longlong *)&DAT_00000018;
      _DAT_00000010 = 0x10;
      plVar26 = _DAT_00000018;
      if (_DAT_00000018 != (longlong *)0x0) {
LAB_141058fb5:
        LOCK();
        piVar1 = (int *)((longlong)plVar26 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar26 + 0x10))();
        }
        *plVar31 = (longlong)plVar19;
        if (plVar19 != (longlong *)0x0) goto LAB_141058927;
      }
    }
    else {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
      plVar19[2] = (longlong)plVar11;
      if ((longlong *)plVar19[3] != plVar19) {
        LOCK();
        *(int *)((longlong)plVar19 + 0xc) = *(int *)((longlong)plVar19 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar19[3] != (longlong *)0x0) {
          plVar31 = plVar19 + 3;
          plVar26 = (longlong *)plVar19[3];
          goto LAB_141058fb5;
        }
        plVar19[3] = (longlong)plVar19;
      }
LAB_141058927:
      LOCK();
      plVar31 = plVar19 + 1;
      *(int *)plVar31 = (int)*plVar31 + -1;
      UNLOCK();
      if ((int)*plVar31 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
  }
  local_108 = plVar32;
  if (*(int *)(lVar4 + 0x44) == 0) {
    iVar17 = *(int *)(lVar4 + 0x18);
    *(int *)(lVar4 + 0x18) = iVar17 + 1;
    if (*(int *)(lVar4 + 0x1c) == iVar17) {
      FUN_140549c28(plVar32,iVar17);
    }
    iVar30 = *(int *)(lVar4 + 0x38);
    if (iVar30 == 0) {
      iVar18 = -1;
    }
    else {
      iVar18 = iVar30 + 0x1e;
      if (-1 < iVar30 + -1) {
        iVar18 = iVar30 + -1;
      }
      iVar18 = iVar18 >> 5;
    }
    lVar28 = lVar4 + 0x20;
    iVar25 = iVar30 + 1;
    iVar29 = iVar30 + 0x1f;
    if (-1 < iVar30) {
      iVar29 = iVar30;
    }
    if (iVar29 >> 5 == iVar18) {
      *(int *)(lVar4 + 0x38) = iVar25;
    }
    else {
      if (*(int *)(lVar4 + 0x3c) <= iVar30) {
        if (iVar30 + 0x20U < 0xa0) {
          iVar25 = 0x80;
          iVar18 = iVar30;
        }
        else {
          uVar16 = iVar30 + 0x20U >> 5;
          local_100 = (ulonglong)uVar16;
          if (*(int *)(lVar4 + 0x3c) + 0x1fU < 0xa0) {
            uVar24 = 4;
            if (4 < uVar16) {
              uVar24 = uVar16;
            }
          }
          else {
            uVar24 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
          }
          uVar22 = FUN_144a3809e(uVar24 << 2,0);
          iVar18 = (int)(uVar22 >> 2);
          iVar25 = -0x20;
          if ((int)local_100 <= iVar18) {
            iVar25 = iVar18 << 5;
          }
          iVar18 = *(int *)(lVar4 + 0x38);
        }
        *(int *)(lVar4 + 0x3c) = iVar25;
        FUN_1446efbd8(lVar28,iVar18);
        iVar25 = *(int *)(lVar4 + 0x38) + 1;
      }
      iVar18 = iVar25 + 0x1f;
      if (-1 < iVar25) {
        iVar18 = iVar25;
      }
      *(int *)(lVar4 + 0x38) = iVar25;
      if (iVar25 % 0x20 != 0) {
        lVar20 = *(longlong *)(lVar4 + 0x30);
        if (*(longlong *)(lVar4 + 0x30) == 0) {
          lVar20 = lVar28;
        }
        bVar23 = -(char)(iVar25 % 0x20);
        *(uint *)(lVar20 + (longlong)(iVar18 >> 5) * 4) =
             (uint)(*(int *)(lVar20 + (longlong)(iVar18 >> 5) * 4) << (bVar23 & 0x1f)) >>
             (bVar23 & 0x1f);
      }
    }
    lVar20 = (longlong)iVar17;
    if (*(longlong *)(lVar4 + 0x30) != 0) {
      lVar28 = *(longlong *)(lVar4 + 0x30);
    }
    bVar23 = (byte)iVar30 & 0x1f;
    puVar3 = (uint *)(lVar28 + (longlong)(iVar29 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar23 | 0xfffffffeU >> 0x20 - bVar23);
  }
  else {
    iVar17 = *(int *)(lVar4 + 0x40);
    lVar20 = (longlong)iVar17;
    iVar30 = *(int *)(*(longlong *)(lVar4 + 0x10) + 4 + lVar20 * 0x28);
    *(int *)(lVar4 + 0x40) = iVar30;
    iVar18 = *(int *)(lVar4 + 0x44) + -1;
    *(int *)(lVar4 + 0x44) = iVar18;
    if (iVar18 != 0) {
      *(undefined4 *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar30 * 0x28) = 0xffffffff;
    }
  }
  lVar28 = lVar4 + 0x20;
  if (*(longlong *)(lVar4 + 0x30) != 0) {
    lVar28 = *(longlong *)(lVar4 + 0x30);
  }
  iVar30 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar30 = iVar17;
  }
  puVar3 = (uint *)(lVar28 + (longlong)(iVar30 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar17 & 0x1f);
  puVar3 = (uint *)(*(longlong *)(lVar4 + 0x10) + lVar20 * 0x28);
  puVar3[2] = *(uint *)(param_3 + 2);
  *(longlong *)puVar3 = param_3[1];
  *(longlong **)(puVar3 + 4) = plVar11;
  *(longlong **)(puVar3 + 6) = plVar19;
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
  }
  puVar3[8] = 0xffffffff;
  uVar16 = *puVar3;
  uVar24 = puVar3[2];
  if (uVar24 != 0) {
    uVar16 = uVar24 >> 0xd ^ uVar16 - uVar24;
    uVar27 = uVar16 << 8 ^ (-0x61c88647 - uVar24) - uVar16;
    uVar34 = uVar27 >> 0xd ^ (uVar24 - uVar16) - uVar27;
    uVar24 = uVar34 >> 0xc ^ (uVar16 - uVar27) - uVar34;
    uVar16 = uVar24 << 0x10 ^ (uVar27 - uVar34) - uVar24;
    uVar27 = uVar16 >> 5 ^ (uVar34 - uVar24) - uVar16;
    uVar24 = uVar27 >> 3 ^ (uVar24 - uVar16) - uVar27;
    uVar16 = uVar24 << 10 ^ (uVar16 - uVar27) - uVar24;
    uVar16 = uVar16 >> 0xf ^ uVar27 - (uVar24 + uVar16);
  }
  uVar24 = *(int *)(lVar4 + 0x18) - *(int *)(lVar4 + 0x44);
  iVar30 = 1;
  if (uVar24 == 1) {
LAB_141058abc:
    plVar32 = local_108;
    iVar18 = iVar17;
    if (((int)uVar24 < 1) || (iVar30 <= *(int *)(lVar4 + 0x58))) {
      uVar16 = *(int *)(lVar4 + 0x58) - 1U & uVar16;
      puVar3[9] = uVar16;
      lVar20 = *(longlong *)(lVar4 + 0x50);
      if (*(longlong *)(lVar4 + 0x50) == 0) {
        lVar20 = lVar4 + 0x48;
      }
      puVar3[8] = *(uint *)(lVar20 + ((longlong)*(int *)(lVar4 + 0x58) - 1U & (longlong)(int)uVar16)
                                     * 4);
      lVar20 = *(longlong *)(lVar4 + 0x50);
      if (*(longlong *)(lVar4 + 0x50) == 0) {
        lVar20 = lVar4 + 0x48;
      }
      *(int *)(lVar20 + ((longlong)*(int *)(lVar4 + 0x58) - 1U & (longlong)(int)uVar16) * 4) =
           iVar17;
    }
    else {
      *(int *)(lVar4 + 0x58) = iVar30;
      FUN_1410593ae(local_108);
    }
  }
  else {
    iVar18 = FUN_141057676(local_108,uVar16,puVar3);
    if (iVar18 == -1) {
      if (3 < uVar24) {
        uVar22 = (ulonglong)(uVar24 & 0xfffffffe) + 0xf;
        lVar20 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar30 = 1 << ((byte)lVar20 & 0x1f);
      }
      goto LAB_141058abc;
    }
    puVar2 = (uint *)(*local_108 + (longlong)iVar18 * 0x28);
    plVar32 = *(longlong **)(puVar2 + 6);
    if (plVar32 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar32 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar32)(plVar32);
        LOCK();
        piVar1 = (int *)((longlong)plVar32 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar32 + 0x10))(plVar32);
        }
      }
    }
    plVar32 = local_108;
    uVar16 = *puVar3;
    uVar24 = puVar3[1];
    uVar27 = puVar3[2];
    uVar34 = puVar3[3];
    uVar8 = puVar3[5];
    uVar9 = puVar3[6];
    uVar10 = puVar3[7];
    puVar2[4] = puVar3[4];
    puVar2[5] = uVar8;
    puVar2[6] = uVar9;
    puVar2[7] = uVar10;
    *puVar2 = uVar16;
    puVar2[1] = uVar24;
    puVar2[2] = uVar27;
    puVar2[3] = uVar34;
    FUN_1410c4412(local_108,iVar17);
  }
  puVar5 = *(undefined8 **)(*plVar32 + 0x10 + (longlong)iVar18 * 0x28);
  plVar32 = *(longlong **)(*plVar32 + 0x18 + (longlong)iVar18 * 0x28);
  if (plVar32 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
    UNLOCK();
  }
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar19 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  plVar19 = (longlong *)puVar5[1];
  if (plVar19 == (longlong *)0x0) {
LAB_141059016:
    uVar33 = 0;
    plVar19 = (longlong *)0x0;
  }
  else {
    iVar17 = (int)plVar19[1];
    do {
      if (iVar17 == 0) goto LAB_141059016;
      LOCK();
      iVar30 = (int)plVar19[1];
      bVar36 = iVar17 == iVar30;
      if (bVar36) {
        *(int *)(plVar19 + 1) = iVar17 + 1;
        iVar30 = iVar17;
      }
      iVar17 = iVar30;
      UNLOCK();
    } while (!bVar36);
    uVar33 = *puVar5;
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
    LOCK();
    plVar11 = plVar19 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  puVar21 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  puVar21[1] = &DAT_100000001;
  *puVar21 = &PTR_FUN_14b400bc0;
  puVar35 = puVar21 + 2;
  local_e8._0_4_ = (undefined4)uVar33;
  local_e8._4_4_ = (undefined4)((ulonglong)uVar33 >> 0x20);
  local_e0 = SUB84(plVar19,0);
  uStack_dc = (undefined4)((ulonglong)plVar19 >> 0x20);
  if (plVar19 == (longlong *)0x0) {
    FUN_14105926a(puVar35,&local_e8);
  }
  else {
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
    FUN_14105926a(puVar35);
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar19 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
  }
  local_e0 = SUB84(puVar21,0);
  uStack_dc = (undefined4)((ulonglong)puVar21 >> 0x20);
  local_e8 = puVar35;
  FUN_14105930c(&local_e8,puVar35);
  plVar11 = (longlong *)CONCAT44(uStack_dc,local_e0);
  if (plVar11 == (longlong *)0x0) {
    puVar5[0x12] = local_e8;
    plVar31 = (longlong *)puVar5[0x13];
    if (plVar31 != (longlong *)0x0) {
      puVar5[0x13] = 0;
LAB_141059095:
      LOCK();
      plVar11 = plVar31 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar31)(plVar31);
        LOCK();
        piVar1 = (int *)((longlong)plVar31 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar17 = *piVar1;
        UNLOCK();
joined_r0x0001410590d4:
        if (iVar17 == 0) {
          (**(code **)(*plVar31 + 0x10))(plVar31);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    puVar5[0x12] = local_e8;
    plVar31 = (longlong *)puVar5[0x13];
    if (plVar11 == plVar31) {
      LOCK();
      plVar31 = plVar11 + 1;
      *(int *)plVar31 = (int)*plVar31 + -1;
      UNLOCK();
      if ((int)*plVar31 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar17 = *piVar1;
        UNLOCK();
        plVar31 = plVar11;
        goto joined_r0x0001410590d4;
      }
    }
    else {
      puVar5[0x13] = plVar11;
      if (plVar31 != (longlong *)0x0) goto LAB_141059095;
    }
  }
  plVar11 = (longlong *)CONCAT44(uStack_dc,local_e0);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar31 = plVar11 + 1;
    *(int *)plVar31 = (int)*plVar31 + -1;
    UNLOCK();
    if ((int)*plVar31 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar19 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  puVar21 = puVar5;
  if (*(char *)(puVar5 + 0xf) == '\0') {
    puVar21 = (undefined8 *)puVar5[3];
  }
  FUN_141059214(puVar5[0x12],puVar21 + 0xc);
  FUN_14107fb1e(puVar5);
  cVar15 = FUN_140daa3ac(puVar5[2]);
  if (cVar15 == '\0') {
    plStack_88 = (longlong *)0x0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = DAT_14cb7bd68;
    local_68 = DAT_14cb7bd70;
    local_5c = DAT_14cb7bd88;
    local_64 = DAT_14cb7bd80;
    local_58 = 0;
    local_50 = 0;
    local_e8._0_4_ = CONCAT31(local_e8._1_3_,1);
    uStack_dc = *(undefined4 *)(puVar5 + 5);
    local_e8._4_4_ = (undefined4)puVar5[4];
    local_e0 = (undefined4)((ulonglong)puVar5[4] >> 0x20);
    local_98 = *(char *)(puVar5 + 0xf) == '\x01';
    if ((bool)local_98) {
      local_c8 = *(undefined4 *)(puVar5 + 9);
      uStack_c4 = *(undefined4 *)((longlong)puVar5 + 0x4c);
      uStack_c0 = *(undefined4 *)(puVar5 + 10);
      uStack_bc = *(undefined4 *)((longlong)puVar5 + 0x54);
      local_b8 = puVar5[0xb];
      uStack_b0 = puVar5[0xc];
      local_a8 = puVar5[0xd];
      uStack_a0 = puVar5[0xe];
    }
    local_d0 = *(undefined4 *)((longlong)puVar5 + 0x34);
    local_d8 = *(undefined8 *)((longlong)puVar5 + 0x2c);
    local_90 = puVar5[7];
    plVar19 = (longlong *)puVar5[8];
    plVar11 = plStack_88;
    if (plVar19 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
      plVar11 = plVar19;
      if (plVar19 == (longlong *)0x0) {
        LOCK();
        _DAT_00000008 = _DAT_00000008 + -1;
        UNLOCK();
        plVar11 = plStack_88;
        if (_DAT_00000008 == 0) {
          (*(code *)*_DAT_00000000)(0);
          LOCK();
          _DAT_0000000c = _DAT_0000000c + -1;
          UNLOCK();
          plVar11 = plStack_88;
          if (_DAT_0000000c == 0) {
            (*(code *)_DAT_00000000[2])(0);
            plVar11 = plStack_88;
          }
        }
      }
    }
    plStack_88 = plVar11;
    FUN_140daa376(puVar5[2],&local_e8);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    plVar19 = plStack_88;
    local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,(undefined4)local_e8);
    if (plStack_88 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_88 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,(undefined4)local_e8);
      if ((int)*plVar11 == 0) {
        (**(code **)*plStack_88)(plStack_88);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
  }
  FUN_1410596ca(local_f8,local_f0);
  if (plVar32 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar32 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar32)(plVar32);
      LOCK();
      piVar1 = (int *)((longlong)plVar32 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar32 + 0x10))(plVar32);
      }
    }
  }
LAB_141058c7c:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141059214 FUN_141059214 body=86 status=ok
// SIG undefined FUN_141059214(void)

void FUN_141059214(longlong param_1,double *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((((*(double *)(param_1 + 0x50) == *param_2) &&
       (!NAN(*(double *)(param_1 + 0x50)) && !NAN(*param_2))) &&
      (*(double *)(param_1 + 0x58) == param_2[1])) &&
     (((!NAN(*(double *)(param_1 + 0x58)) && !NAN(param_2[1]) &&
       (*(double *)(param_1 + 0x60) == param_2[2])) &&
      (!NAN(*(double *)(param_1 + 0x60)) && !NAN(param_2[2]))))) {
    return;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(double *)(param_1 + 0x60) = param_2[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  FUN_1447f69b6(param_1 + 0x20);
  return;
}



// FUNCTION 14105926a FUN_14105926a body=161 status=ok
// SIG undefined FUN_14105926a(void)

undefined8 * FUN_14105926a(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b3fe660;
  lVar1 = DAT_14cb7ccc0 + 1;
  param_1[3] = DAT_14cb7ccc0;
  DAT_14cb7ccc0 = lVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 2;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 10) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0xb) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
  param_1[0xc] = DAT_14c8464f0;
  *param_1 = &PTR_FUN_14b400be0;
  param_1[0xd] = *param_2;
  lVar1 = param_2[1];
  param_1[0xe] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  puVar5 = &DAT_14c948618;
  if (*param_2 != 0) {
    puVar5 = (undefined8 *)(*param_2 + 0x2c);
  }
  FUN_140b47d3e(param_1 + 0xf,puVar5);
  return param_1;
}



// FUNCTION 14105930c FUN_14105930c body=162 status=ok
// SIG undefined FUN_14105930c(void)

void FUN_14105930c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14105934b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14105934b;
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
LAB_14105934b:
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
                    /* WARNING: Could not recover jumptable at 0x0001410593aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1410593ae FUN_1410593ae body=796 status=ok
// SIG undefined FUN_1410593ae(void)

void FUN_1410593ae(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar12 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar12,4);
    if ((int)uVar12 < 1) goto LAB_141059414;
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
  } while (uVar12 != uVar2);
LAB_141059414:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar15 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar12 = *puVar10;
    if (uVar12 == 0) {
      iVar15 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar15 = iVar6 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar12 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar7 = uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar15) {
      iVar15 = iVar6;
    }
  }
  if (iVar15 < iVar6) {
    uVar12 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar8 = (longlong)iVar15;
      uVar2 = *(uint *)(lVar9 + lVar8 * 0x28);
      uVar17 = *(uint *)(lVar9 + 8 + lVar8 * 0x28);
      if (uVar17 != 0) {
        uVar16 = uVar17 >> 0xd ^ uVar2 - uVar17;
        uVar2 = uVar16 << 8 ^ (-0x61c88647 - uVar17) - uVar16;
        uVar17 = uVar2 >> 0xd ^ (uVar17 - uVar16) - uVar2;
        uVar16 = uVar17 >> 0xc ^ (uVar16 - uVar2) - uVar17;
        uVar2 = uVar16 << 0x10 ^ (uVar2 - uVar17) - uVar16;
        uVar17 = uVar2 >> 5 ^ (uVar17 - uVar16) - uVar2;
        uVar16 = uVar17 >> 3 ^ (uVar16 - uVar2) - uVar17;
        uVar2 = uVar16 << 10 ^ (uVar2 - uVar17) - uVar16;
        uVar2 = uVar2 >> 0xf ^ uVar17 - (uVar16 + uVar2);
      }
      lVar9 = lVar9 + lVar8 * 0x28;
      uVar7 = (longlong)(int)uVar2 & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar7;
      *(int *)(lVar9 + 0x24) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x20) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar15 = (int)uVar3;
      lVar9 = (longlong)iVar15;
      uVar2 = puVar10[lVar9] & uVar12;
      if (uVar2 == 0) {
        iVar13 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar13 = iVar6 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar15) {
          iVar14 = iVar15;
        }
        if (iVar13 <= iVar15) {
          return;
        }
        lVar8 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar9 + lVar8 + 1];
          if (uVar2 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar14 - lVar9 == lVar8) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar15 + (int)lVar8 + 1);
        uVar12 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar7 = uVar11 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar6);
  }
  return;
}



// FUNCTION 1410596ca FUN_1410596ca body=1931 status=ok
// SIG undefined FUN_1410596ca(void)

void FUN_1410596ca(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ushort uVar4;
  uint uVar5;
  longlong *plVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStack_b8 [44];
  uint local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  ulonglong local_68;
  uint *local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar20 = *param_2;
  uVar5 = *(uint *)(lVar20 + 0x38);
  if (uVar5 == 0) {
    uVar23 = 1;
    uVar24 = 0;
    uVar8 = 0;
    iVar16 = 0;
  }
  else {
    puVar10 = *(uint **)(lVar20 + 0x30);
    if (*(uint **)(lVar20 + 0x30) == (uint *)0x0) {
      puVar10 = (uint *)(lVar20 + 0x20);
    }
    uVar8 = *puVar10;
    if (uVar8 == 0) {
      iVar16 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar16 = uVar5 - 1;
      }
      uVar23 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar23 = 0;
      }
      uVar24 = 0;
      iVar16 = 0;
      do {
        if (uVar23 == uVar24) goto LAB_141059b63;
        iVar16 = iVar16 + 0x20;
        uVar8 = puVar10[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar24 = 0;
      iVar16 = 0;
    }
    uVar23 = (ulonglong)(-uVar8 & uVar8);
    uVar2 = uVar23 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar8 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar8) {
      uVar8 = uVar5;
    }
  }
  if (uVar8 == uVar5) {
LAB_141059b63:
    plVar14 = (longlong *)0x0;
    plVar22 = (longlong *)0x0;
  }
  else {
    uVar19 = 0xffffffff;
    plVar14 = (longlong *)0x0;
    plVar21 = (longlong *)0x0;
    local_70 = param_1;
    local_68 = (ulonglong)uVar5;
    local_60 = (uint *)(lVar20 + 0x20);
    do {
      lVar17 = *(longlong *)(lVar20 + 0x10);
      lVar11 = (longlong)(int)uVar8;
      lVar18 = *(longlong *)(lVar17 + 0x10 + lVar11 * 0x28);
      uVar4 = *(ushort *)(*(longlong *)(lVar18 + 0x38) + 0xc);
      bVar7 = (byte)uVar4;
      plVar22 = plVar21;
      if ((uVar4 & 2) != 0) goto LAB_1410597e9;
      if (plVar14 == (longlong *)0x0) {
        plVar6 = *(longlong **)(lVar17 + 0x18 + lVar11 * 0x28);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        plVar14 = (longlong *)lVar18;
        if (plVar6 == plVar21) {
          if (plVar21 == (longlong *)0x0) {
            plVar22 = (longlong *)0x0;
            local_88 = (longlong *)lVar18;
            local_80 = plVar21;
          }
          else {
            LOCK();
            plVar3 = plVar6 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            local_88 = (longlong *)lVar18;
            local_80 = plVar21;
            if ((int)*plVar3 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar9 = *piVar1;
              UNLOCK();
              plVar22 = local_80;
              plVar14 = local_88;
              goto joined_r0x000141059b56;
            }
          }
        }
        else {
          plVar22 = plVar6;
          if (plVar21 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar21 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            local_8c = uVar19;
            local_88 = (longlong *)lVar18;
            if ((int)*plVar6 != 0) goto LAB_1410597e9;
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar9 = *piVar1;
            UNLOCK();
            uVar19 = local_8c;
            plVar14 = local_88;
            plVar6 = plVar21;
            goto joined_r0x000141059b56;
          }
        }
      }
      else {
        local_88 = (longlong *)(lVar17 + lVar11 * 0x28 + 0x10);
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          UNLOCK();
          lVar18 = *local_88;
          bVar7 = (byte)*(undefined2 *)(*(longlong *)(lVar18 + 0x38) + 0xc);
        }
        uVar4 = *(ushort *)(*(longlong *)((longlong)plVar14 + 0x38) + 0xc);
        local_78 = param_2;
        if ((bVar7 & 1) == ((byte)uVar4 & 1)) {
          puVar15 = *(undefined4 **)(*(longlong *)((longlong)plVar14 + 0x18) + 8);
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = &DAT_14c9485f0;
          }
          local_8c = uVar19;
          local_80 = plVar21;
          FUN_1447325ac(puVar15,local_50,CONCAT71((int7)((ulonglong)lVar18 >> 8),1));
          puVar15 = *(undefined4 **)(*(longlong *)(*local_88 + 0x18) + 8);
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = &DAT_14c9485f0;
          }
          FUN_1447325ac(puVar15,local_58,1);
          iVar9 = FUN_144a78538(local_50,local_58);
          plVar22 = local_80;
          if (iVar9 < 1) {
            plVar14 = (longlong *)*local_88;
            plVar22 = *(longlong **)(lVar17 + 0x18 + lVar11 * 0x28);
          }
          local_88 = plVar14;
          if (plVar22 != (longlong *)0x0) goto LAB_141059acb;
LAB_141059ccf:
          plVar22 = (longlong *)0x0;
          bVar25 = true;
        }
        else {
          local_88 = (longlong *)lVar18;
          if ((uVar4 & 1) == 0) {
            local_8c = uVar19;
            local_80 = plVar21;
            if (plVar21 == (longlong *)0x0) {
              plVar22 = (longlong *)0x0;
              goto LAB_1410597e9;
            }
          }
          else {
            plVar22 = *(longlong **)(lVar17 + 0x18 + lVar11 * 0x28);
            plVar14 = (longlong *)lVar18;
            local_8c = uVar19;
            local_80 = plVar21;
            if (plVar22 == (longlong *)0x0) goto LAB_141059ccf;
          }
LAB_141059acb:
          LOCK();
          *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
          UNLOCK();
          bVar25 = false;
          local_88 = plVar14;
        }
        plVar14 = (longlong *)0x0;
        if (plVar22 == local_80) {
          plVar14 = plVar22;
        }
        if (plVar22 != local_80 && local_80 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_80 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 != 0) goto LAB_141059b11;
          (**(code **)*local_80)();
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 != 0) goto LAB_141059b11;
          (**(code **)(*local_80 + 0x10))();
          if (!bVar25) goto LAB_141059b15;
        }
        else {
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar21 = plVar14 + 1;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)*plVar21 == 0) {
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
LAB_141059b11:
          if (!bVar25) {
LAB_141059b15:
            LOCK();
            plVar14 = plVar22 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*plVar22)(plVar22);
              LOCK();
              piVar1 = (int *)((longlong)plVar22 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar22 + 0x10))(plVar22);
              }
            }
          }
          param_2 = local_78;
          plVar14 = local_88;
          uVar19 = local_8c;
          if (local_80 == (longlong *)0x0) goto LAB_1410597e9;
        }
        plVar6 = local_80;
        plVar14 = local_88;
        LOCK();
        plVar21 = local_80 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        param_2 = local_78;
        uVar19 = local_8c;
        if ((int)*plVar21 == 0) {
          (**(code **)*local_80)();
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar9 = *piVar1;
          UNLOCK();
          uVar19 = local_8c;
          param_2 = local_78;
joined_r0x000141059b56:
          if (iVar9 == 0) {
            (**(code **)(*plVar6 + 0x10))();
            plVar14 = local_88;
          }
        }
      }
LAB_1410597e9:
      uVar19 = uVar19 & ~(uint)uVar23;
      puVar10 = *(uint **)(lVar20 + 0x30);
      if (*(uint **)(lVar20 + 0x30) == (uint *)0x0) {
        puVar10 = local_60;
      }
      uVar5 = *(uint *)(lVar20 + 0x38);
      iVar9 = (int)uVar24;
      lVar17 = (longlong)iVar9;
      uVar8 = puVar10[lVar17] & uVar19;
      if (uVar8 == 0) {
        iVar12 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar12 = uVar5 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar9) {
          iVar13 = iVar9;
        }
        if (iVar9 < iVar12) {
          lVar18 = 0;
          do {
            uVar8 = puVar10[lVar17 + lVar18 + 1];
            if (uVar8 != 0) {
              uVar24 = (ulonglong)(iVar9 + (int)lVar18 + 1);
              uVar19 = 0xffffffff;
              goto LAB_141059871;
            }
            iVar16 = iVar16 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar13 - lVar17 != lVar18);
          uVar19 = 0xffffffff;
          iVar9 = iVar13;
        }
        uVar24 = (ulonglong)(iVar9 + 1);
        uVar8 = uVar5;
      }
      else {
LAB_141059871:
        uVar23 = (ulonglong)(-uVar8 & uVar8);
        uVar2 = uVar23 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar8 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar8) {
          uVar8 = uVar5;
        }
      }
      plVar21 = plVar22;
    } while (uVar8 != (uint)local_68);
    lVar20 = *param_2;
    param_1 = local_70;
  }
  plVar21 = *(longlong **)(lVar20 + 0x68);
  if (plVar21 == (longlong *)0x0) {
    lVar17 = 0;
  }
  else {
    iVar16 = (int)plVar21[1];
    lVar17 = 0;
    do {
      if (iVar16 == 0) goto LAB_1410598d3;
      LOCK();
      iVar9 = (int)plVar21[1];
      bVar25 = iVar16 == iVar9;
      if (bVar25) {
        *(int *)(plVar21 + 1) = iVar16 + 1;
        iVar9 = iVar16;
      }
      iVar16 = iVar9;
      UNLOCK();
    } while (!bVar25);
    lVar17 = *(longlong *)(lVar20 + 0x60);
    LOCK();
    plVar6 = plVar21 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
LAB_1410598d3:
  if (plVar14 != (longlong *)lVar17) {
    lVar20 = *param_2;
    *(longlong **)(lVar20 + 0x60) = plVar14;
    plVar14 = *(longlong **)(lVar20 + 0x68);
    if (plVar14 != plVar22) {
      if (plVar22 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar22 + 0xc) = *(int *)((longlong)plVar22 + 0xc) + 1;
        UNLOCK();
        plVar14 = *(longlong **)(lVar20 + 0x68);
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      *(longlong **)(lVar20 + 0x68) = plVar22;
    }
    if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
      lVar20 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0xe8) + lVar20) == *(int *)*param_2) &&
           (*(int *)(*(longlong *)(param_1 + 0xe8) + 8 + lVar20) == ((int *)*param_2)[2])) {
          *(undefined1 *)(param_1 + 0xfa) = 1;
          break;
        }
        lVar20 = lVar20 + 0xc;
      } while ((longlong)*(int *)(param_1 + 0xf0) * 0xc != lVar20);
    }
  }
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar22 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141059e56 FUN_141059e56 body=723 status=ok
// SIG undefined FUN_141059e56(void)

void FUN_141059e56(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
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
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5);
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
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar11 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar11 = local_68 >> 0x20;
    }
    iVar4 = (int)local_68;
    uVar5 = (uint)local_58;
    iVar6 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar6;
        uVar3 = *(uint *)(lVar13 + lVar12 * 0x28);
        uVar14 = *(uint *)(lVar13 + 8 + lVar12 * 0x28);
        if (uVar14 != 0) {
          uVar16 = uVar14 >> 0xd ^ uVar3 - uVar14;
          uVar3 = uVar16 << 8 ^ (-0x61c88647 - uVar14) - uVar16;
          uVar14 = uVar3 >> 0xd ^ (uVar14 - uVar16) - uVar3;
          uVar15 = uVar14 >> 0xc ^ (uVar16 - uVar3) - uVar14;
          uVar3 = uVar15 << 0x10 ^ (uVar3 - uVar14) - uVar15;
          uVar16 = uVar3 >> 5 ^ (uVar14 - uVar15) - uVar3;
          uVar14 = uVar16 >> 3 ^ (uVar15 - uVar3) - uVar16;
          uVar3 = uVar14 << 10 ^ (uVar3 - uVar16) - uVar14;
          uVar3 = uVar3 >> 0xf ^ uVar16 - (uVar14 + uVar3);
        }
        lVar13 = lVar13 + lVar12 * 0x28;
        uVar9 = (longlong)(int)uVar3 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar13 + 0x24) = iVar8;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar13 + 0x20) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        uVar5 = uVar5 & ~(uint)uVar11;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar8 = (int)local_60[3];
        lVar13 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar13 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar6 = iVar8 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar12 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar3 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar2 - lVar13 == lVar12) goto LAB_14105a102;
          }
          iVar4 = iVar4 + (int)lVar12 + 1;
          uVar5 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar3 & uVar3);
        uVar9 = uVar11 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar8);
    }
  }
LAB_14105a102:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14105a12a FUN_14105a12a body=84 status=ok
// SIG undefined FUN_14105a12a(void)

void FUN_14105a12a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
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
  if (*(char *)(param_1 + 0x50) == '\x01') {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 14105a17e FUN_14105a17e body=280 status=ok
// SIG undefined FUN_14105a17e(void)

void FUN_14105a17e(undefined8 param_1,int *param_2,ulonglong param_3,undefined8 param_4,char param_5
                  )

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  int local_68;
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_2 != 0) {
    local_70 = *(undefined8 *)param_2;
    local_68 = param_2[2];
    FUN_1448075d0(local_60);
    if (DAT_14cb758b8 == 0) {
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar2 = FUN_144837462(DAT_14cb758b8,local_60);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x48) == '\0')) {
        puVar3 = (ulonglong *)FUN_14105a298(param_4,param_2);
        uVar1 = *puVar3;
        uVar4 = 0xffffffffffffffff;
        if (!CARRY8(param_3 & 0xffffffff,uVar1)) {
          uVar4 = (param_3 & 0xffffffff) + uVar1;
        }
        uVar5 = 0x7fffffff;
        if (uVar4 < 0x7fffffff) {
          uVar5 = uVar4;
        }
        if (DAT_14c7638c0 == '\0') {
          uVar5 = uVar4;
        }
        *puVar3 = uVar5;
        if ((uVar5 != uVar1) && (param_5 != '\0')) {
          FUN_14105a360(param_1,param_2);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14105a298 FUN_14105a298 body=198 status=ok
// SIG undefined FUN_14105a298(void)

int * FUN_14105a298(undefined8 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar3 = (int *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar5 = lVar4 * 0x18;
    piVar2 = piVar3;
    do {
      if ((*piVar2 == *param_2) && (piVar2[2] == param_2[2])) {
        if (piVar2 != (int *)0x0) goto LAB_14105a2ee;
        break;
      }
      piVar2 = piVar2 + 6;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  local_20 = param_2[2];
  local_28 = *(undefined8 *)param_2;
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457e4710(param_1,iVar1);
    piVar3 = (int *)*param_1;
  }
  piVar2 = piVar3 + lVar4 * 6;
  *(undefined8 *)piVar2 = local_28;
  piVar2[2] = local_20;
  piVar2[3] = local_1c;
  piVar2[4] = 0;
  piVar2[5] = 0;
LAB_14105a2ee:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar2 + 4;
}



// FUNCTION 14105a360 FUN_14105a360 body=931 status=ok
// SIG undefined FUN_14105a360(void)

void FUN_14105a360(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 *local_90;
  int local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x68);
  iVar8 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar8 < 1) {
LAB_14105a3a2:
    *(uint *)(param_1 + 0x70) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x74) < iVar8 + 1U) {
      FUN_14105a704(plVar1,iVar8);
    }
    lVar6 = *plVar1;
    lVar9 = (longlong)iVar8 * 0x38;
    local_68 = (longlong *)CONCAT44(local_68._4_4_,*(undefined4 *)(param_2 + 1));
    local_70 = *param_2;
    FUN_1448075d0(lVar6 + lVar9);
    *(undefined8 *)(lVar6 + 0x28 + lVar9) = param_3;
    *(undefined8 *)(lVar6 + 0x30 + lVar9) = param_4;
  }
  else {
    lVar6 = *plVar1;
    lVar9 = (longlong)iVar8 * 0x38;
    local_80 = *param_2;
    local_78 = *(undefined4 *)(param_2 + 1);
    FUN_1448075d0(&local_70);
    iVar8 = *(int *)(lVar6 + -0x38 + lVar9);
    iVar7 = (int)local_70;
    local_a0 = lVar9;
    local_98 = lVar6;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (iVar8 != iVar7) {
      iVar8 = *(int *)(param_1 + 0x70);
      goto LAB_14105a3a2;
    }
    *(undefined8 *)(local_98 + local_a0 + -8) = param_4;
    *(undefined8 *)(local_98 + local_a0 + -0x10) = param_3;
  }
  if ((((((*(longlong *)(param_1 + 0x58) == 0) || (*(longlong *)(param_1 + 0x60) == 0)) ||
        (*(int *)(*(longlong *)(param_1 + 0x60) + 8) < 1)) &&
       ((*(int *)(param_1 + 0x4c) != 0 && (uVar3 = *(uint *)(param_1 + 0x48), -1 < (int)uVar3)))) &&
      (((int)uVar3 < DAT_14c9647dc &&
       ((lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar6 != 0 &&
        (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x4c))))))) &&
     ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
    uVar5 = FUN_1401cb356();
    local_90 = (undefined8 *)0x0;
    local_88 = 0;
    FUN_1446efa72(&local_90,0,3,0x10);
    puVar4 = local_90;
    local_88 = 3;
    *local_90 = &PTR_LAB_149e02020;
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
    local_90[2] = lVar9;
    *local_90 = &PTR_FUN_14b3f5f90;
    local_90[3] = 0;
    iVar8 = 0;
    if (param_1 != 0) {
      uVar3 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_90 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar8 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar8 = *(int *)(lVar6 + 0x10);
        bVar10 = iVar8 == 0;
        if (bVar10) {
          *(int *)(lVar6 + 0x10) = iVar7;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar8 = iVar7;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar8;
    puVar4[4] = FUN_140f80628;
    local_a8 = 0;
    FUN_1405f67fc(uVar5,&local_70,&local_90,L"UGbxCurrencyManager.NotifyQueuedChanges");
    *(undefined8 *)(param_1 + 0x58) = local_70;
    local_70 = 0;
    plVar1 = *(longlong **)(param_1 + 0x60);
    *(longlong **)(param_1 + 0x60) = local_68;
    local_68 = (longlong *)0x0;
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      if (local_68 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_68 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_68 + 0x10))();
        }
      }
    }
    if (local_88 != 0) {
      if (local_90 == (undefined8 *)0x0) goto LAB_14105a574;
      (**(code **)*local_90)(local_90,0);
      FUN_1446efa72(&local_90,0,0,0x10);
      local_88 = 0;
    }
    if (local_90 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14105a574:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14105a704 FUN_14105a704 body=369 status=ok
// SIG undefined FUN_14105a704(void)

void FUN_14105a704(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_14105a789;
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
LAB_14105a789:
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



// FUNCTION 14105a876 FUN_14105a876 body=125 status=ok
// SIG undefined FUN_14105a876(void)

undefined8 * FUN_14105a876(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14105a8f4();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 14105a8f4 FUN_14105a8f4 body=150 status=ok
// SIG undefined FUN_14105a8f4(void)

longlong * FUN_14105a8f4(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 14105a990 FUN_14105a990 body=228 status=ok
// SIG undefined FUN_14105a990(void)

longlong FUN_14105a990(void)

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
  if (DAT_14cb08e10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e9f32;
    local_38 = &LAB_147d3e32f;
    local_40 = &LAB_14602bcc6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x248;
    FUN_14081cfa3(L"/Script/Engine",L"SoundSubmix",&DAT_14cb08e10,FUN_146403e44);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb08e10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14105aa76 FUN_14105aa76 body=191 status=ok
// SIG undefined FUN_14105aa76(void)

undefined4
FUN_14105aa76(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  
  if (*(int *)(param_5 + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_5;
  }
  FUN_14052bdc2(&DAT_14c872ff0,puVar4);
  FUN_1447a1747(*param_4,*(undefined4 *)(param_4 + 1));
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    FUN_1408be2c4(param_4,0);
  }
  lVar2 = FUN_14052bcbc(param_1,param_5);
  if (lVar2 != 0) {
    FUN_14105ab36(lVar2,param_2,param_3,param_4);
  }
  if (*(int *)(param_4 + 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar3 = FUN_14052bffc();
    if (*(int *)(param_5 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_5;
    }
    FUN_14052c092(uVar3,puVar4,param_2,param_3);
    uVar1 = *(undefined4 *)(param_4 + 1);
  }
  return uVar1;
}



// FUNCTION 14105ab36 FUN_14105ab36 body=404 status=ok
// SIG undefined FUN_14105ab36(void)

undefined4
FUN_14105ab36(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined2 *puVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1447a1747(*param_4,*(undefined4 *)(param_4 + 1));
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    FUN_1408be2c4(param_4,0);
  }
  FUN_140056680(&local_48);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  uVar3 = 0;
  iVar2 = local_40 + -1;
  if (local_40 == 0) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    puVar1 = local_48;
    if (local_40 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    lVar6 = 0;
    uVar3 = 0;
    do {
      uVar4 = ((uint)(0x19 < (ushort)puVar1[lVar6] - 0x61) * 0x20 + (uint)(ushort)puVar1[lVar6]) -
              0x20;
      uVar7 = (uint)(uVar3 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar3 ^ uVar4) & 0xff) * 4);
      uVar3 = (ulonglong)
              (uVar7 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar4 >> 8 & 0xff) * 4));
      lVar6 = lVar6 + 1;
    } while (iVar2 != (int)lVar6);
  }
  iVar2 = FUN_14052bbf0(param_1,uVar3,&local_48);
  if (iVar2 == -1) {
    lVar6 = 0;
  }
  else {
    lVar6 = (longlong)iVar2 * 0xc0 + *param_1;
  }
  lVar5 = lVar6 + 0x10;
  if (lVar6 == 0) {
    lVar5 = 0;
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (lVar5 != 0) {
    FUN_1446f470e(&local_50,param_3,1);
    FUN_14105accc(lVar5,local_50,param_4,1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined4 *)(param_4 + 1);
}



// FUNCTION 14105accc FUN_14105accc body=497 status=ok
// SIG undefined FUN_14105accc(void)

void FUN_14105accc(longlong *param_1,longlong param_2,longlong *param_3,char param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *_Src;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_88 [39];
  char local_61;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_61 = param_4;
  local_60 = param_1;
  if ((int)param_1[9] != 0) {
    uVar4 = (uint)((ulonglong)param_2 >> 0x10);
    uVar11 = (uint)param_2 & 0xffff;
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar7 +
                    (longlong)
                    (int)((int)param_1[9] - 1U &
                         ((uint)param_2 << 0x10 | uVar11) + (int)((ulonglong)param_2 >> 0x20) +
                         (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4)) * 4);
    while (iVar8 = iVar9, iVar8 != -1) {
      lVar12 = *param_1;
      iVar9 = *(int *)(lVar12 + 0x38 + (longlong)iVar8 * 0x40);
      if (*(longlong *)(lVar12 + (longlong)iVar8 * 0x40) == param_2) {
        do {
          iVar2 = *(int *)(lVar12 + 0x28 + (longlong)iVar8 * 0x40);
          iVar3 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
            FUN_1447a1bd6(param_3,iVar3);
          }
          lVar12 = lVar12 + (longlong)iVar8 * 0x40;
          uVar10 = (ulonglong)(iVar2 - 2U < 0x7fffffff) << 4 | 8;
          lVar6 = *param_3;
          lVar13 = (longlong)iVar3 * 0x10;
          puVar1 = (undefined8 *)(lVar6 + lVar13);
          *(undefined8 *)(lVar6 + lVar13) = 0;
          iVar8 = *(int *)(lVar12 + 0x10 + uVar10);
          _Src = *(void **)(lVar12 + 8 + uVar10);
          *(int *)(lVar6 + 8 + lVar13) = iVar8;
          if ((longlong)iVar8 == 0) {
            *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar1,iVar8,0);
            memcpy((void *)*puVar1,_Src,(longlong)iVar8 * 2);
          }
          do {
            iVar8 = iVar9;
            if (iVar8 == -1) goto LAB_14105ae39;
            lVar12 = *local_60;
            iVar9 = *(int *)(lVar12 + 0x38 + (longlong)iVar8 * 0x40);
          } while (*(longlong *)(lVar12 + (longlong)iVar8 * 0x40) != param_2);
        } while( true );
      }
    }
  }
LAB_14105ae39:
  if (local_61 != '\0') {
    uVar4 = *(uint *)(param_3 + 1);
    if (1 < (longlong)(int)uVar4) {
      lVar12 = *param_3;
      lVar6 = (longlong)(int)uVar4 << 4;
      lVar13 = 0;
      do {
        lVar6 = lVar6 + -0x10;
        local_58 = *(undefined8 *)(lVar12 + lVar13);
        uStack_50 = ((undefined8 *)(lVar12 + lVar13))[1];
        uVar5 = ((undefined8 *)(lVar12 + lVar6))[1];
        *(undefined8 *)(lVar12 + lVar13) = *(undefined8 *)(lVar12 + lVar6);
        ((undefined8 *)(lVar12 + lVar13))[1] = uVar5;
        *(undefined8 *)(lVar12 + lVar6) = local_58;
        ((undefined8 *)(lVar12 + lVar6))[1] = uStack_50;
        lVar13 = lVar13 + 0x10;
      } while ((ulonglong)(uVar4 >> 1) << 4 != lVar13);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14105aebe FUN_14105aebe body=76 status=ok
// SIG undefined FUN_14105aebe(void)

undefined8 * FUN_14105aebe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b2d3b40;
  FUN_14105af0a(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14105af0a FUN_14105af0a body=73 status=ok
// SIG undefined FUN_14105af0a(void)

void FUN_14105af0a(longlong param_1,int param_2)

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



// FUNCTION 14105af54 FUN_14105af54 body=38 status=ok
// SIG undefined FUN_14105af54(void)

undefined8 FUN_14105af54(undefined8 param_1,int param_2)

{
  FUN_14105af7a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14105af7a FUN_14105af7a body=147 status=ok
// SIG undefined FUN_14105af7a(void)

void FUN_14105af7a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b41bee0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xe];
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
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140d06186(param_1 + 6);
  *param_1 = &PTR_FUN_14b41be10;
  FUN_140ce26a5(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14105b00e FUN_14105b00e body=2781 status=ok
// SIG undefined FUN_14105b00e(void)

void FUN_14105b00e(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  uint *puVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  code *local_c8;
  code *local_c0;
  uint *local_b0;
  uint *local_a8;
  uint local_9c;
  longlong *local_98;
  longlong *local_90;
  ulonglong local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar10 = *(longlong *)(param_1 + 0x48);
  cVar5 = FUN_140337e44(lVar10 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar10 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar10 + 0x51) != cVar5;
  uVar28 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                         *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar28;
  plVar13 = (longlong *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_147f607c8(plVar13);
  }
  lVar10 = *(longlong *)(param_1 + 0x40);
  if ((((lVar10 != 0) && (*(int *)(lVar10 + 0x4c) != 0)) &&
      (uVar24 = *(uint *)(lVar10 + 0x48), -1 < (int)uVar24)) &&
     ((((int)uVar24 < DAT_14c9647dc &&
       (plVar18 = (longlong *)
                  ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
       plVar18 != (longlong *)0x0)) &&
      (((int)plVar18[2] == *(int *)(lVar10 + 0x4c) &&
       (((*(uint *)(plVar18 + 1) & 0x10200000) == 0 &&
        (plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0)))))))) {
    if (DAT_14cb223d8 == 0) {
      local_d0 = &local_78;
      local_78 = FUN_1449e2820;
      local_c0 = FUN_14081d0ea;
      local_c8 = FUN_1427b09ee;
      local_d8 = &LAB_147f29feb;
      local_e0 = FUN_1464384fe;
      local_e8 = L"Engine";
      local_f0 = 0;
      local_f8 = 0x10004001;
      local_100 = 8;
      local_108 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar18 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,DAT_14cb223d8);
    if (plVar18 != (longlong *)0x0) {
      if (DAT_14cb223d8 == 0) {
        local_d0 = &local_78;
        local_78 = FUN_1449e2820;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_1427b09ee;
        local_d8 = &LAB_147f29feb;
        local_e0 = FUN_1464384fe;
        local_e8 = L"Engine";
        local_f0 = 0;
        local_f8 = 0x10004001;
        local_100 = 8;
        local_108 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar9 = (longlong *)FUN_144718840(plVar18,DAT_14cb223d8);
      if (((plVar18 != plVar9) && (plVar9 != (longlong *)0x0)) &&
         (lVar10 = (**(code **)(*plVar9 + 0x10))(plVar9), lVar10 != 0)) {
        uVar11 = FUN_1405f939e(param_1);
        FUN_14105baec(&local_78,uVar11);
        if (uStack_70 != (longlong *)0x0) {
          iVar7 = (int)uStack_70[1];
          do {
            if (iVar7 == 0) {
              plVar18 = (longlong *)0x0;
              break;
            }
            LOCK();
            iVar8 = (int)uStack_70[1];
            bVar27 = iVar7 == iVar8;
            if (bVar27) {
              *(int *)(uStack_70 + 1) = iVar7 + 1;
              iVar8 = iVar7;
            }
            iVar7 = iVar8;
            UNLOCK();
            plVar18 = uStack_70;
          } while (!bVar27);
          LOCK();
          piVar1 = (int *)((longlong)uStack_70 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*uStack_70 + 0x10))();
          }
          pcVar4 = local_78;
          if (plVar18 != (longlong *)0x0) {
            local_90 = plVar13;
            if (local_78 != (code *)0x0) {
              uVar25 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x48) + 0x80);
              iVar7 = *(int *)(local_78 + 0x48);
              if (iVar7 == 0) {
                uVar26 = 1;
                uVar22 = 0;
                iVar8 = 0;
                iVar21 = 0;
              }
              else {
                pcVar12 = *(code **)(local_78 + 0x40);
                if (*(code **)(local_78 + 0x40) == (code *)0x0) {
                  pcVar12 = local_78 + 0x30;
                }
                uVar24 = *(uint *)pcVar12;
                if (uVar24 == 0) {
                  iVar8 = iVar7 + 0x1e;
                  if (-1 < iVar7 + -1) {
                    iVar8 = iVar7 + -1;
                  }
                  uVar22 = 0;
                  uVar26 = (ulonglong)(uint)(iVar8 >> 5);
                  if (iVar8 >> 5 < 1) {
                    uVar26 = uVar22;
                  }
                  iVar21 = 0;
                  do {
                    if (uVar26 == uVar22) goto LAB_14105b26e;
                    iVar21 = iVar21 + 0x20;
                    uVar24 = *(uint *)(pcVar12 + (uVar22 + 1) * 4);
                    uVar22 = uVar22 + 1;
                  } while (uVar24 == 0);
                }
                else {
                  uVar22 = 0;
                  iVar21 = 0;
                }
                uVar26 = (ulonglong)(-uVar24 & uVar24);
                uVar2 = uVar26 * 2 + 1;
                lVar14 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                iVar8 = (iVar21 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                if (iVar7 <= iVar8) {
                  iVar8 = iVar7;
                }
              }
              if (iVar8 != iVar7) {
                uVar24 = 0xffffffff;
                local_80 = local_78 + 0x30;
                do {
                  puVar20 = *(uint **)(*(longlong *)(pcVar4 + 0x20) + 8 + (longlong)iVar8 * 0x18);
                  if (((puVar20 != (uint *)0x0) && (puVar20[1] != 0)) &&
                     ((((uVar17 = *puVar20, -1 < (int)uVar17 &&
                        (((int)uVar17 < DAT_14c9647dc &&
                         (puVar19 = (undefined8 *)
                                    ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8)),
                         puVar19 != (undefined8 *)0x0)))) && (*(uint *)(puVar19 + 2) == puVar20[1]))
                      && ((*(uint *)(puVar19 + 1) & 0x10200000) == 0)))) {
                    if ((*(uint *)(puVar19 + 1) & 0x10200000) == 0) {
                      plVar13 = (longlong *)*puVar19;
                    }
                    else {
                      plVar13 = (longlong *)0x0;
                    }
                    plVar9 = *(longlong **)(lVar10 + 0x18);
                    if (plVar9 != plVar13) {
                      local_a8 = puVar20;
                      local_9c = uVar24;
                      local_88 = uVar25;
                      if (plVar9 == (longlong *)0x0) {
                        local_b0 = (uint *)0x0;
                      }
                      else {
                        local_98 = plVar13;
                        local_b0 = (uint *)(**(code **)(*plVar9 + 0x180))();
                        plVar13 = local_98;
                      }
                      if (plVar13 == (longlong *)0x0) {
LAB_14105b73b:
                        local_78 = (code *)0x0;
                        uStack_70 = (longlong *)0xffff;
                        local_68 = 0;
                      }
                      else {
                        if (DAT_14cb223d8 == 0) {
                          local_78 = FUN_1449e2820;
                          local_c0 = FUN_14081d0ea;
                          local_c8 = FUN_1427b09ee;
                          local_d0 = &local_78;
                          local_d8 = &LAB_147f29feb;
                          local_e0 = FUN_1464384fe;
                          local_e8 = L"Engine";
                          local_f0 = 0;
                          local_f8 = 0x10004001;
                          local_100 = 8;
                          local_108 = 0x28;
                          local_98 = plVar13;
                          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
                          plVar13 = local_98;
                        }
                        plVar13 = (longlong *)(**(code **)(*plVar13 + 0x288))(plVar13,DAT_14cb223d8)
                        ;
                        if (plVar13 == (longlong *)0x0) goto LAB_14105b73b;
                        local_98 = plVar13;
                        if (DAT_14cb223d8 == 0) {
                          local_78 = FUN_1449e2820;
                          local_c0 = FUN_14081d0ea;
                          local_c8 = FUN_1427b09ee;
                          local_d0 = &local_78;
                          local_d8 = &LAB_147f29feb;
                          local_e0 = FUN_1464384fe;
                          local_e8 = L"Engine";
                          local_f0 = 0;
                          local_f8 = 0x10004001;
                          local_100 = 8;
                          local_108 = 0x28;
                          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
                        }
                        plVar13 = (longlong *)FUN_144718840(local_98,DAT_14cb223d8);
                        if (((local_98 == plVar13) || (plVar13 == (longlong *)0x0)) ||
                           (lVar14 = (**(code **)(*plVar13 + 0x10))(plVar13), lVar14 == 0))
                        goto LAB_14105b73b;
                        local_78 = *(code **)(lVar14 + 0x20);
                        uStack_70 = (longlong *)
                                    CONCAT62(uStack_70._2_6_,*(undefined2 *)(lVar14 + 0x28));
                        local_68 = *(undefined8 *)(lVar14 + 0x30);
                      }
                      iVar8 = FUN_1448618b0(lVar10 + 0x20,&local_78,local_b0);
                      uVar25 = local_88;
                      uVar24 = local_9c;
                      if (iVar8 == 0) {
                        if ((((int)local_88 == 2) || ((int)local_88 == 0)) &&
                           (((char)local_a8[10] == '\0' || ((char)local_a8[10] == '\x02')))) {
                          iVar8 = *(int *)(param_1 + 0x68);
                          *(uint *)(param_1 + 0x68) = iVar8 + 1U;
                          puVar20 = (uint *)(longlong)iVar8;
                          if (*(uint *)(param_1 + 0x6c) < iVar8 + 1U) {
                            local_b0 = (uint *)(longlong)iVar8;
                            FUN_1457e52c4(local_90);
                            puVar20 = local_b0;
                          }
                          puVar20 = (uint *)(*local_90 + (longlong)puVar20 * 0x28);
                          puVar20[4] = 0;
                          puVar20[5] = 0;
                          puVar20[6] = 0;
                          puVar20[7] = 0;
                          puVar20[0] = 0;
                          puVar20[1] = 0;
                          puVar20[2] = 0;
                          puVar20[3] = 0;
                          puVar20[8] = 0;
                          puVar20[9] = 0;
                          if ((char)local_a8[0xe] == '\x01') {
                            if ((local_a8[1] == 0) || (uVar24 = *local_a8, (int)uVar24 < 0)) {
LAB_14105b734:
                              uVar11 = 0;
                            }
                            else {
                              uVar11 = 0;
                              if ((int)uVar24 < DAT_14c9647dc) {
                                puVar19 = (undefined8 *)
                                          ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                                          *(longlong *)
                                           (DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8));
                                if (((puVar19 == (undefined8 *)0x0) ||
                                    (*(uint *)(puVar19 + 2) != local_a8[1])) ||
                                   ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)) goto LAB_14105b734;
                                uVar11 = *puVar19;
                              }
                            }
                            local_b0 = puVar20;
                            FUN_14105bc23(&local_78,uVar11);
                            *(undefined8 *)(local_b0 + 4) = local_68;
                            puVar20 = local_b0;
                            uVar24 = (uint)local_78;
                            uVar17 = local_78._4_4_;
                            uVar29 = (uint)uStack_70;
                            uVar30 = uStack_70._4_4_;
                          }
                          else {
                            *(undefined8 *)(puVar20 + 4) = *(undefined8 *)(local_a8 + 6);
                            uVar24 = local_a8[2];
                            uVar17 = local_a8[3];
                            uVar29 = local_a8[4];
                            uVar30 = local_a8[5];
                          }
                          *puVar20 = uVar24;
                          puVar20[1] = uVar17;
                          puVar20[2] = uVar29;
                          puVar20[3] = uVar30;
                          uVar6 = 1;
LAB_14105b558:
                          puVar20[6] = (uint)((float)local_a8[8] * (float)local_a8[8]);
                          puVar20[7] = local_a8[9];
                          *(undefined1 *)(puVar20 + 8) = uVar6;
                          uVar25 = local_88;
                          uVar24 = local_9c;
                        }
                      }
                      else if (((iVar8 == 2) && ((byte)((char)local_88 - 1U) < 2)) &&
                              ((byte)((char)local_a8[10] - 1U) < 2)) {
                        local_b0 = (uint *)(longlong)*(int *)(param_1 + 0x68);
                        uVar24 = *(int *)(param_1 + 0x68) + 1;
                        *(uint *)(param_1 + 0x68) = uVar24;
                        if (*(uint *)(param_1 + 0x6c) < uVar24) {
                          FUN_1457e52c4(local_90,local_b0);
                        }
                        local_b0 = (uint *)(*local_90 + (longlong)local_b0 * 0x28);
                        local_b0[4] = 0;
                        local_b0[5] = 0;
                        local_b0[6] = 0;
                        local_b0[7] = 0;
                        local_b0[0] = 0;
                        local_b0[1] = 0;
                        local_b0[2] = 0;
                        local_b0[3] = 0;
                        local_b0[8] = 0;
                        local_b0[9] = 0;
                        if ((char)local_a8[0xe] == '\x01') {
                          uVar11 = FUN_14479d2ce(local_a8);
                          FUN_14105bc23(&local_78,uVar11);
                          *(undefined8 *)(local_b0 + 4) = local_68;
                          *(code **)local_b0 = local_78;
                          *(longlong **)(local_b0 + 2) = uStack_70;
                        }
                        else {
                          *(undefined8 *)(local_b0 + 4) = *(undefined8 *)(local_a8 + 6);
                          uVar11 = *(undefined8 *)(local_a8 + 4);
                          *(undefined8 *)local_b0 = *(undefined8 *)(local_a8 + 2);
                          *(undefined8 *)(local_b0 + 2) = uVar11;
                        }
                        *(undefined8 *)(local_b0 + 4) = *(undefined8 *)(local_a8 + 6);
                        uVar11 = *(undefined8 *)(local_a8 + 4);
                        *(undefined8 *)local_b0 = *(undefined8 *)(local_a8 + 2);
                        *(undefined8 *)(local_b0 + 2) = uVar11;
                        uVar6 = 0;
                        puVar20 = local_b0;
                        goto LAB_14105b558;
                      }
                    }
                  }
                  uVar24 = uVar24 & ~(uint)uVar26;
                  pcVar12 = *(code **)(pcVar4 + 0x40);
                  if (*(code **)(pcVar4 + 0x40) == (code *)0x0) {
                    pcVar12 = local_80;
                  }
                  iVar3 = *(int *)(pcVar4 + 0x48);
                  iVar8 = (int)uVar22;
                  lVar14 = (longlong)iVar8;
                  uVar17 = *(uint *)(pcVar12 + lVar14 * 4) & uVar24;
                  if (uVar17 == 0) {
                    iVar15 = iVar3 + 0x1e;
                    if (-1 < iVar3 + -1) {
                      iVar15 = iVar3 + -1;
                    }
                    iVar15 = iVar15 >> 5;
                    iVar21 = iVar21 + 0x20;
                    iVar16 = iVar15;
                    if (iVar15 < iVar8) {
                      iVar16 = iVar8;
                    }
                    if (iVar8 < iVar15) {
                      lVar23 = 0;
                      do {
                        uVar17 = *(uint *)(pcVar12 + (lVar14 + lVar23 + 1) * 4);
                        if (uVar17 != 0) {
                          uVar22 = (ulonglong)(iVar8 + (int)lVar23 + 1);
                          uVar24 = 0xffffffff;
                          goto LAB_14105b5fe;
                        }
                        iVar21 = iVar21 + 0x20;
                        lVar23 = lVar23 + 1;
                      } while (iVar16 - lVar14 != lVar23);
                      uVar24 = 0xffffffff;
                      iVar8 = iVar16;
                    }
                    uVar22 = (ulonglong)(iVar8 + 1);
                    iVar8 = iVar3;
                  }
                  else {
LAB_14105b5fe:
                    uVar26 = (ulonglong)(-uVar17 & uVar17);
                    uVar2 = uVar26 * 2 + 1;
                    lVar14 = 0x3f;
                    if (uVar2 != 0) {
                      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                      }
                    }
                    iVar8 = (iVar21 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                    if (iVar3 <= iVar8) {
                      iVar8 = iVar3;
                    }
                  }
                } while (iVar8 != iVar7);
              }
            }
LAB_14105b26e:
            LOCK();
            plVar13 = plVar18 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14105baec FUN_14105baec body=310 status=ok
// SIG undefined FUN_14105baec(void)

longlong * FUN_14105baec(longlong *param_1,longlong param_2)

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
  uVar4 = DAT_14cb24688;
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



// FUNCTION 14105bc23 FUN_14105bc23 body=385 status=ok
// SIG undefined FUN_14105bc23(void)

undefined8 * FUN_14105bc23(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
  lVar1 = *(longlong *)(param_2 + 0x1c8);
  if (lVar1 == 0) {
    param_1[2] = DAT_14c8464f0;
    uVar5 = DAT_14c8464e8._4_4_;
    uVar4 = (undefined4)DAT_14c8464e8;
    uVar3 = DAT_14c8464e0._4_4_;
    *(undefined4 *)param_1 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 1) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x268);
    *param_1 = *(undefined8 *)(lVar1 + 0x260);
    param_1[1] = uVar2;
    param_1[2] = *(undefined8 *)(lVar1 + 0x270);
  }
  if (param_2 != 0) {
    if (DAT_14cacf818 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463b216c;
      local_48 = &LAB_1479977e3;
      local_50 = &LAB_1463b2171;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x750;
      FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
    }
    if (((*(int *)(DAT_14cacf818 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) == DAT_14cacf818 + 0x30)) &&
       (lVar1 = *(longlong *)(param_2 + 0x438), lVar1 != 0)) {
      param_1[2] = (double)((float)*(double *)(lVar1 + 0x290) * *(float *)(lVar1 + 0x640)) +
                   (double)param_1[2];
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14105bda6 FUN_14105bda6 body=60 status=ok
// SIG undefined FUN_14105bda6(void)

void FUN_14105bda6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    lVar1 = param_1;
  }
  FUN_14105bde2(lVar1,*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_14105be16(param_1);
    return;
  }
  return;
}



// FUNCTION 14105bde2 FUN_14105bde2 body=52 status=ok
// SIG undefined FUN_14105bde2(void)

void FUN_14105bde2(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14105be16 FUN_14105be16 body=74 status=ok
// SIG undefined FUN_14105be16(void)

void FUN_14105be16(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x10),
              (longlong)*(int *)((longlong)param_1 + 0x18) << 3);
      FUN_1446efa72((longlong)param_1 + 0x10,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 14105be60 FUN_14105be60 body=128 status=ok
// SIG undefined FUN_14105be60(void)

undefined8 * FUN_14105be60(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aac2df0;
  if (param_1[0x26] != 0) {
    plVar1 = param_1 + 0x2a;
    if ((longlong *)param_1[0x28] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x28];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  puVar2 = param_1 + 4;
  if ((undefined8 *)param_1[0x22] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0x22];
  }
  FUN_1410eec47(puVar2,*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14105beea FUN_14105beea body=299 status=ok
// SIG undefined FUN_14105beea(void)

undefined8 FUN_14105beea(longlong *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [47];
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = true;
  if (*param_1 == 0) {
    local_29 = param_1[1] != 0;
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_29,1);
  if (local_29 == '\0') {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[5] = DAT_14c8464f0;
      lVar4 = DAT_14c8464e8;
      param_1[3] = DAT_14c8464e0;
      param_1[4] = lVar4;
      lVar4 = DAT_14c846500;
      param_1[6] = DAT_14c8464f8;
      param_1[7] = lVar4;
      param_1[8] = DAT_14c846508;
      uVar3 = DAT_14c8462e0._4_4_;
      uVar2 = (undefined4)DAT_14c8462e0;
      uVar1 = DAT_14c8462d8._4_4_;
      *(undefined4 *)(param_1 + 9) = (undefined4)DAT_14c8462d8;
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
      *(undefined4 *)(param_1 + 10) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
      param_1[0xb] = DAT_14c8462e8;
    }
  }
  else {
    (**(code **)(*param_2 + 0x138))(param_2,param_1);
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 1);
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 2);
    FUN_14480c34d(param_2,param_1 + 3);
    FUN_1401fb57a(param_2,param_1 + 6);
    FUN_14480c34d(param_2,param_1 + 9);
  }
  *param_4 = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14105c016 FUN_14105c016 body=305 status=ok
// SIG undefined FUN_14105c016(void)

ulonglong FUN_14105c016(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_98 [40];
  undefined1 local_70 [40];
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14105c148(local_70,param_1);
  if ((longlong)(int)param_2[1] != 0) {
    plVar8 = (longlong *)*param_2;
    plVar3 = plVar8 + (longlong)(int)param_2[1] * 3;
    do {
      plVar4 = (longlong *)*plVar8;
      plVar5 = (longlong *)plVar8[1];
      if (plVar5 != (longlong *)0x0) {
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
      if (((plVar4 != (longlong *)0x0) &&
          (cVar6 = (**(code **)(*plVar4 + 0x28))(plVar4,local_70), cVar6 != '\0')) &&
         (cVar6 = FUN_14105c29c(param_1,plVar4), cVar6 == '\0')) {
        uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        goto LAB_14105c0c0;
      }
      plVar8 = plVar8 + 3;
    } while (plVar8 != plVar3);
  }
  uVar7 = 0;
LAB_14105c0c0:
  FUN_140de863f(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14105c148 FUN_14105c148 body=338 status=ok
// SIG undefined FUN_14105c148(void)

longlong * FUN_14105c148(longlong *param_1,longlong param_2)

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
  param_1[2] = 0;
  param_1[3] = (longlong)&DAT_3f800000ffffffff;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x20), lVar1 != 0)) {
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
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_14105c1c1;
  }
  lVar1 = 0;
LAB_14105c1c1:
  *param_1 = lVar1;
  lVar1 = FUN_140dfc108(lVar1);
  param_1[1] = lVar1;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14105c29c FUN_14105c29c body=237 status=ok
// SIG undefined FUN_14105c29c(void)

undefined8 FUN_14105c29c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x88);
    lVar10 = (longlong)*(int *)(param_1 + 0x90) * 0x50 + lVar8;
    do {
      lVar7 = FUN_14105c38a(lVar8);
      if ((lVar7 != 0) && ((longlong)*(int *)(lVar7 + 0x20) != 0)) {
        plVar9 = *(longlong **)(lVar7 + 0x18);
        plVar3 = plVar9 + (longlong)*(int *)(lVar7 + 0x20) * 3;
        do {
          plVar4 = (longlong *)*plVar9;
          plVar5 = (longlong *)plVar9[1];
          if (plVar5 != (longlong *)0x0) {
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
          if ((plVar4 != (longlong *)0x0) &&
             (cVar6 = (**(code **)(*plVar4 + 0x30))(plVar4,param_2), cVar6 != '\0')) {
            return 1;
          }
          plVar9 = plVar9 + 3;
        } while (plVar9 != plVar3);
      }
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != lVar10);
  }
  return 0;
}



// FUNCTION 14105c38a FUN_14105c38a body=136 status=ok
// SIG undefined FUN_14105c38a(void)

void FUN_14105c38a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 == 0) {
    uVar3 = FUN_140c52150();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x20) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x18));
    }
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    return;
  }
  return;
}



// FUNCTION 14105c41a FUN_14105c41a body=120 status=ok
// SIG undefined FUN_14105c41a(void)

undefined8 FUN_14105c41a(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  lVar1 = DAT_14cbcd590;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbcd590 == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = param_1;
    FUN_1446dcdd4(local_40);
    uVar2 = FUN_144837462(lVar1,local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14105c493 FUN_14105c493 body=41 status=ok
// SIG undefined FUN_14105c493(void)

void FUN_14105c493(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14105c4bc(param_1);
    param_1 = param_1 + 0xf8;
  }
  return;
}



// FUNCTION 14105c4bc FUN_14105c4bc body=254 status=ok
// SIG undefined FUN_14105c4bc(void)

void FUN_14105c4bc(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x88);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xa8) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xa0)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xa0)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x48);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x68) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x60)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x60)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x30) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x28)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_1 + 0x28) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 14105c5c0 FUN_14105c5c0 body=221 status=ok
// SIG undefined FUN_14105c5c0(void)

longlong FUN_14105c5c0(void)

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
  if (DAT_14cacc3d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147920945;
    local_40 = FUN_1463a6636;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"AnimNotify",&DAT_14cacc3d0,FUN_1463a6614);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacc3d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14105c69e FUN_14105c69e body=413 status=ok
// SIG undefined FUN_14105c69e(void)

ulonglong * FUN_14105c69e(longlong *param_1,ulonglong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  if (param_3 == (longlong *)0x0) {
    *param_2 = 0;
    return param_2;
  }
  if ((longlong *)param_1[2] == param_3) goto LAB_14105c786;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  param_1[2] = (longlong)param_3;
  plVar1 = (longlong *)*param_1;
  plVar4 = param_3;
  plVar2 = plVar1;
  while (plVar2 != (longlong *)0x0) {
    for (uVar6 = plVar4[10]; uVar6 != 0; uVar6 = *(ulonglong *)(uVar6 + 0x18)) {
      if ((~*(uint *)(*(longlong *)(uVar6 + 8) + 0x18) & 0x8001) == 0) goto LAB_14105c703;
    }
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b0))(plVar4);
    plVar2 = plVar4;
  }
LAB_14105c736:
  uVar3 = FUN_14105c83b(param_3,plVar1,3);
  uVar6 = uVar3 | 1;
  uVar3 = uVar3 & 0xfffffffffffffffe;
  if (uVar3 != 0) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar3);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar3);
    }
  }
  goto LAB_14105c76a;
LAB_14105c703:
  if (*(longlong **)(uVar6 + 0x20) != plVar1) {
    puVar5 = (ulonglong *)(uVar6 + 0x18);
    do {
      for (uVar6 = *puVar5; uVar6 != 0; uVar6 = *(ulonglong *)(uVar6 + 0x18)) {
        if ((~*(uint *)(*(longlong *)(uVar6 + 8) + 0x18) & 0x8001) == 0) goto LAB_14105c703;
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b0))(plVar4);
      puVar5 = (ulonglong *)(plVar4 + 10);
    } while (plVar4 != (longlong *)0x0);
    goto LAB_14105c736;
  }
  if (uVar6 < 2) goto LAB_14105c736;
LAB_14105c76a:
  param_1[3] = uVar6;
  if ((((uVar6 & 1) != 0) && ((uVar6 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
    FUN_1456cec3c(uVar6 & 0xfffffffffffffffe);
  }
LAB_14105c786:
  uVar6 = param_1[3];
  *param_2 = uVar6;
  if ((((uVar6 & 1) != 0) && ((uVar6 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 14105c83b FUN_14105c83b body=310 status=ok
// SIG undefined FUN_14105c83b(void)

longlong FUN_14105c83b(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong local_28;
  int local_20;
  char local_1c;
  byte local_1b;
  byte local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_14105c972(&local_30,param_1);
    plVar4 = local_30;
    lVar3 = local_28;
LAB_14105c870:
    local_28 = lVar3;
    local_30 = plVar4;
    if (local_28 != 0) {
      lVar3 = local_28;
      if (*(longlong *)(local_28 + 0x18) == param_2) goto LAB_14105c8df;
      lVar3 = *(longlong *)(local_28 + 0x28);
      plVar4 = local_30;
      local_28 = lVar3;
      if (local_30 != (longlong *)0x0) {
        do {
          lVar5 = (longlong)local_20;
          while( true ) {
            for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x28)) {
              uVar1 = *(ulonglong *)(*(longlong *)(lVar3 + 0x10) + 0xd8);
              if (((uVar1 & 1) != 0) &&
                 (((-1 < (short)uVar1 || ((local_1b & 1) != 0)) ||
                  ((*(byte *)(lVar3 + 0x3b) & 0x20) == 0)))) goto LAB_14105c870;
            }
            if ((local_1a & 1) == 0) break;
            lVar5 = lVar5 + 1;
            local_20 = (int)lVar5;
            if ((int)plVar4[0x3c] <= lVar5) break;
            lVar2 = *(longlong *)(plVar4[0x3b] + lVar5 * 0x10);
            lVar3 = 0;
            if (lVar2 != 0) {
              lVar3 = *(longlong *)(lVar2 + 0x48);
            }
          }
          if ((local_1c != '\x01') ||
             (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b0))(), plVar4 == (longlong *)0x0))
          goto LAB_14105c8dd;
          lVar3 = plVar4[9];
          local_20 = -1;
        } while( true );
      }
      plVar4 = (longlong *)0x0;
      goto LAB_14105c870;
    }
  }
LAB_14105c8dd:
  lVar3 = 0;
LAB_14105c8df:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 14105c972 FUN_14105c972 body=323 status=ok
// SIG undefined FUN_14105c972(void)

longlong * FUN_14105c972(longlong *param_1,longlong param_2,byte param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x48);
  }
  param_1[1] = lVar5;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x14) = param_3 & 1;
  *(byte *)((longlong)param_1 + 0x15) = param_3 >> 1 & 1;
  if ((param_3 & 4) != 0 && param_2 != 0) {
    lVar5 = FUN_144a797b2();
    if (*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      bVar6 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30;
      goto LAB_14105c9be;
    }
  }
  bVar6 = false;
LAB_14105c9be:
  *(bool *)((longlong)param_1 + 0x16) = bVar6;
  plVar3 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  else {
LAB_14105c9d1:
    while( true ) {
      for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
        uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xd8);
        if (((uVar1 & 1) != 0) &&
           (((-1 < (short)uVar1 || (*(char *)((longlong)param_1 + 0x15) != '\0')) ||
            ((*(byte *)(lVar5 + 0x3b) & 0x20) == 0)))) goto LAB_14105c9f5;
      }
      if (*(char *)((longlong)param_1 + 0x16) != '\x01') break;
      lVar5 = (longlong)(int)param_1[2] + 1;
      iVar4 = (int)lVar5;
      *(int *)(param_1 + 2) = iVar4;
      if ((int)plVar3[0x3c] <= iVar4) break;
      lVar2 = *(longlong *)(plVar3[0x3b] + lVar5 * 0x10);
      lVar5 = 0;
      if (lVar2 != 0) {
        lVar5 = *(longlong *)(lVar2 + 0x48);
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_14105ca12;
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2b0))();
    if (plVar3 != (longlong *)0x0) {
      lVar5 = plVar3[9];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
      goto LAB_14105c9d1;
    }
    plVar3 = (longlong *)0x0;
LAB_14105ca12:
    lVar5 = 0;
  }
LAB_14105c9f5:
  *param_1 = (longlong)plVar3;
  param_1[1] = lVar5;
  return param_1;
}



// FUNCTION 14105cab6 FUN_14105cab6 body=47 status=ok
// SIG undefined FUN_14105cab6(void)

undefined8 FUN_14105cab6(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x2c0) + 8) + 0x18))
            (*(longlong *)(param_1 + 0x2c0) + 8);
  return param_2;
}



// FUNCTION 14105cae6 FUN_14105cae6 body=357 status=ok
// SIG undefined FUN_14105cae6(void)

longlong *
FUN_14105cae6(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar3 = (**(code **)(*param_1 + 8))(param_1,param_3,param_4,param_5);
  plVar4 = *(longlong **)(param_3 + 0x98);
  if (plVar4 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar4;
  }
  if (lVar3 == lVar6) {
    *param_2 = (longlong)plVar4;
    lVar3 = *(longlong *)(param_3 + 0xa0);
    param_2[1] = lVar3;
    if (lVar3 == 0) {
      return param_2;
    }
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (lVar3 == 0) {
    return param_2;
  }
  if (*(longlong *)(lVar3 + 0x20) != 0) goto LAB_14105cb34;
  plVar4 = (longlong *)FUN_14001cc68(8,0x10);
  *plVar4 = lVar3;
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149ee9960;
  plVar5[2] = (longlong)plVar4;
  *(longlong **)(lVar3 + 0x20) = plVar4;
  plVar4 = *(longlong **)(lVar3 + 0x28);
  if (plVar5 == plVar4) {
    if (plVar5 == (longlong *)0x0) goto LAB_14105cb34;
    LOCK();
    plVar4 = plVar5 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14105cb34;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar5;
  }
  else {
    *(longlong **)(lVar3 + 0x28) = plVar5;
    if (plVar4 == (longlong *)0x0) goto LAB_14105cb34;
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_14105cb34;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_14105cb34:
  lVar6 = *(longlong *)(lVar3 + 0x20);
  lVar3 = *(longlong *)(lVar3 + 0x28);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_2[1];
  *param_2 = lVar6;
  param_2[1] = lVar3;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return param_2;
}



// FUNCTION 14105cc4c FUN_14105cc4c body=160 status=ok
// SIG undefined FUN_14105cc4c(void)

undefined8 FUN_14105cc4c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x88);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x38) == lVar1) {
          if (lVar4 == 0) {
            return param_3;
          }
          if (lVar4 + 8 == 0) {
            return param_3;
          }
          uVar3 = FUN_14105ccec(lVar4 + 8,param_3);
          return uVar3;
        }
        iVar6 = *(int *)(lVar4 + 0x30);
      } while (iVar6 != -1);
    }
  }
  return param_3;
}



// FUNCTION 14105ccec FUN_14105ccec body=256 status=ok
// SIG undefined FUN_14105ccec(void)

undefined8 FUN_14105ccec(uint *param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 ***pppuVar4;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[8] != '\x06') {
    FUN_1400b56fe(local_48,param_1,6);
    if (local_28 == 0) {
      uVar2 = 0;
    }
    else {
      param_2 = FUN_14479d2ce(local_48);
      uVar2 = (uint)local_28;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar4 = local_48;
      if (0x18 < local_30) {
        pppuVar4 = (undefined8 ***)local_48[0];
      }
      (*pcVar1)(pppuVar4);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48[0]);
    }
    goto LAB_14105cd51;
  }
  if (param_1[1] != 0) {
    uVar2 = *param_1;
    param_2 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14105cd51;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar3 + 2) == param_1[1] && ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      param_2 = *puVar3;
      goto LAB_14105cd51;
    }
  }
  param_2 = 0;
LAB_14105cd51:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14105cdee FUN_14105cdee body=58 status=ok
// SIG undefined FUN_14105cdee(void)

undefined8 FUN_14105cdee(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_144a746c6();
  if (cVar1 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
    }
    uVar3 = FUN_14105ce28(lVar2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14105ce28 FUN_14105ce28 body=372 status=ok
// SIG undefined FUN_14105ce28(void)

ulonglong FUN_14105ce28(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  undefined7 uVar7;
  
  uVar2 = DAT_14cb1c840;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (param_1 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar2,param_1);
    plVar8 = local_30;
    if ((local_38 == 0) || (local_30 == (longlong *)0x0)) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar9 = local_30 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_30 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
    if (plVar8 != (longlong *)0x0) {
      iVar4 = (int)plVar8[1];
      do {
        plVar9 = (longlong *)0x0;
        if (iVar4 == 0) break;
        LOCK();
        iVar3 = (int)plVar8[1];
        bVar10 = iVar4 == iVar3;
        if (bVar10) {
          *(int *)(plVar8 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar9 = plVar8;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      if (plVar9 != (longlong *)0x0) {
        uVar5 = 1;
        if (local_38 != 0) {
          uVar5 = *(undefined1 *)(local_38 + 0x578);
        }
        uVar6 = CONCAT71(uVar7,uVar5);
        LOCK();
        plVar8 = plVar9 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14105cf9e FUN_14105cf9e body=45 status=ok
// SIG undefined FUN_14105cf9e(void)

undefined8 FUN_14105cf9e(undefined8 param_1,int param_2)

{
  FUN_14105cfcc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 14105cfcc FUN_14105cfcc body=1204 status=ok
// SIG undefined FUN_14105cfcc(void)

void FUN_14105cfcc(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0d2da0;
  plVar1 = param_1 + 0x60;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 100) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 99)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 99)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x59;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x5d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x5c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x5c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x4f;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x53) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x52)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x52)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x47;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x4b) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x4a)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x4a)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x40;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x44) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x43)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x43)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x39;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x3d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x3c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x3c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x2f;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x33) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x32)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x32)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x27;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x2b) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x2a)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x2a)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x20;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x24) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x23)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x23)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x19;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x11;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x15) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x14)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x14)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 14105d480 FUN_14105d480 body=492 status=ok
// SIG undefined FUN_14105d480(void)

void FUN_14105d480(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_44;
  undefined4 local_40 [2];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((DAT_14c7615d8 != 0) && (FUN_14105d7d6(*param_3,&local_50,param_2), local_50 != 0)) {
    if (param_2 == 0) {
      uVar5 = 0;
      uVar3 = 0;
    }
    else {
      uVar5 = *(uint *)(param_2 + 0xc);
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = (ulonglong)*(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        uVar4 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar4);
        }
        LOCK();
        uVar2 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar2 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar4;
          uVar2 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar2 = uVar4;
        }
        uVar3 = (ulonglong)uVar2;
      }
    }
    FUN_14105d6f0(param_1,local_40);
    *local_38 = local_50;
    local_38[1] = (ulonglong)uVar5 | uVar3 << 0x20;
    *(undefined4 *)(local_38 + 2) = 0xffffffff;
    local_44 = local_40[0];
    uVar5 = (int)((ulonglong)local_50 >> 0x20) * 0x17 + (int)local_50;
    cVar1 = FUN_14105d66e(param_1,uVar5,local_38);
    if (cVar1 == '\0') {
      uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
      iVar6 = 1;
      if (3 < uVar4) {
        uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
        lVar7 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar7 & 0x1f);
      }
      if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
        uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
        *(uint *)((longlong)local_38 + 0x14) = uVar5;
        lVar7 = *(longlong *)(param_1 + 0x40);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar7 = param_1 + 0x38;
        }
        *(undefined4 *)(local_38 + 2) =
             *(undefined4 *)
              (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
        lVar7 = *(longlong *)(param_1 + 0x40);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          lVar7 = param_1 + 0x38;
        }
        *(undefined4 *)
         (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4) = local_44;
      }
      else {
        *(int *)(param_1 + 0x48) = iVar6;
        FUN_1417e2e88(param_1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14105d66e FUN_14105d66e body=130 status=ok
// SIG undefined FUN_14105d66e(void)

undefined8 FUN_14105d66e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
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
          FUN_1434b88c2((int)lVar3,*param_4,1);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14105d6f0 FUN_14105d6f0 body=230 status=ok
// SIG undefined FUN_14105d6f0(void)

int * FUN_14105d6f0(longlong *param_1,int *param_2)

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



// FUNCTION 14105d7d6 FUN_14105d7d6 body=418 status=ok
// SIG undefined FUN_14105d7d6(void)

undefined8 * FUN_14105d7d6(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_88 [40];
  uint local_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  longlong lVar5;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_5c = 0;
  if (param_3 != 0) {
    local_60 = *(uint *)(param_3 + 0xc);
    if ((int)local_60 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((local_60 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_60 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar3 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar7 + 0x10);
      bVar9 = uVar3 == 0;
      if (bVar9) {
        *(uint *)(lVar7 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar3 = uVar6;
      }
    }
    uStack_5c = uVar3;
    cVar2 = FUN_14105d97a(param_1,param_3);
    if ((cVar2 != '\0') && (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84))) {
      uVar1 = CONCAT44(uStack_5c,local_60);
      lVar7 = param_1 + 0x88;
      if (*(longlong *)(param_1 + 0x90) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x90);
      }
      iVar4 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & (uStack_5c ^ local_60)) *
                               4);
      if (iVar4 != -1) {
        lVar7 = *(longlong *)(param_1 + 0x50);
        uVar8 = 0;
        do {
          lVar5 = (longlong)iVar4;
          local_50 = *(undefined8 *)(lVar7 + lVar5 * 0x18);
          local_58 = uVar1;
          cVar2 = FUN_14472ecf8(&local_50,&local_58);
          lVar7 = *(longlong *)(param_1 + 0x50);
          if (cVar2 != '\0') {
            lVar7 = lVar7 + lVar5 * 0x18;
            if (lVar7 == 0) goto LAB_14105d928;
            uVar8 = *(undefined8 *)(lVar7 + 8);
            break;
          }
          iVar4 = *(int *)(lVar7 + 0x10 + lVar5 * 0x18);
        } while (iVar4 != -1);
        goto LAB_14105d8fa;
      }
    }
  }
LAB_14105d928:
  uVar8 = 0;
LAB_14105d8fa:
  *param_2 = uVar8;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14105d97a FUN_14105d97a body=513 status=ok
// SIG undefined FUN_14105d97a(void)

ulonglong FUN_14105d97a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  longlong lVar5;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_2 == (longlong *)0x0) goto LAB_14105dae4;
  if (param_3 == (undefined8 *)0x0) {
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar4 = iVar7;
      }
    }
    uVar9 = CONCAT44(iVar4,uVar1);
  }
  else {
    uVar9 = *param_3;
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar6 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x90);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             ((uint)((ulonglong)uVar9 >> 0x20) ^ (uint)uVar9)) * 4);
    if (iVar4 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x50);
      do {
        lVar5 = (longlong)iVar4;
        local_50 = *(undefined8 *)(lVar6 + lVar5 * 0x18);
        local_58 = uVar9;
        cVar3 = FUN_14472ecf8(&local_50,&local_58);
        lVar6 = *(longlong *)(param_1 + 0x50);
        if (cVar3 != '\0') {
          lVar6 = lVar6 + lVar5 * 0x18;
          if ((lVar6 != 0) && (*(longlong *)(lVar6 + 8) != 0)) goto LAB_14105dae4;
          break;
        }
        iVar4 = *(int *)(lVar6 + 0x10 + lVar5 * 0x18);
      } while (iVar4 != -1);
    }
  }
  cVar3 = FUN_14008df0e(param_2);
  if ((cVar3 != '\0') || (cVar3 = (**(code **)(*param_2 + 0x200))(param_2), cVar3 != '\0'))
  goto LAB_14105dae4;
  lVar6 = (**(code **)(*param_2 + 0x180))(param_2);
  if ((lVar6 != 0) && (plVar2 = *(longlong **)(lVar6 + 0x38), plVar2 != (longlong *)0x0)) {
    if (*(code **)(*plVar2 + 0x3c0) == (code *)&LAB_1448ff5f6) {
      if (plVar2[0x1e] != 0) {
LAB_14105db48:
        if (*(longlong **)(lVar6 + 0x108) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar6 + 0x108) + 0x3c0))();
        }
      }
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x3c0))();
      if (cVar3 == '\0') goto LAB_14105db48;
    }
  }
  uVar8 = 0;
LAB_14105dae4:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14105db8a FUN_14105db8a body=180 status=ok
// SIG undefined FUN_14105db8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14105db8a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b30a4b0;
  plVar3 = (longlong *)param_1[4];
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
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    if (plVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar3 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar3;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14105dc3e FUN_14105dc3e body=426 status=ok
// SIG undefined FUN_14105dc3e(void)

void FUN_14105dc3e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_20);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_20);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_14105ddea(local_20);
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14105ddea FUN_14105ddea body=595 status=ok
// SIG undefined FUN_14105ddea(void)

undefined8 FUN_14105ddea(longlong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cb22240 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464376fa;
      local_38 = &LAB_147f28935;
      local_40 = FUN_146437c39;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10004001;
      local_60 = 8;
      local_68 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,DAT_14cb22240);
    if (plVar2 != (longlong *)0x0) {
      if (DAT_14cb22240 == 0) {
        local_30 = &local_18;
        local_18 = FUN_1449e2820;
        local_20 = FUN_14081d0ea;
        local_28 = &LAB_1464376fa;
        local_38 = &LAB_147f28935;
        local_40 = FUN_146437c39;
        local_48 = L"Engine";
        local_50 = 0;
        local_58 = 0x10004001;
        local_60 = 8;
        local_68 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
      }
      plVar3 = (longlong *)FUN_144718840(plVar2,DAT_14cb22240);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar5 = (**(code **)(*plVar3 + 0x30))(plVar3);
        uVar4 = 0;
        if ((*(int *)(lVar5 + 0xc0) == 0) || (*(int *)(lVar5 + 0x80) < 1)) goto LAB_14105de57;
        if ((**(int **)(lVar5 + 0x78) != 0x7fffffff) &&
           (uVar1 = *(ulonglong *)(*(int **)(lVar5 + 0x78) + 1), uVar1 >> 0x20 != 0)) {
          uVar7 = (uint)uVar1;
          uVar4 = 0;
          if (((int)uVar7 < 0) || (uVar4 = 0, DAT_14c9647dc <= (int)uVar7)) goto LAB_14105de57;
          puVar6 = (undefined8 *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0xd & 0x3fff8)));
          if ((puVar6 != (undefined8 *)0x0) &&
             ((*(int *)(puVar6 + 2) == (int)(uVar1 >> 0x20) &&
              ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
            uVar4 = *puVar6;
            goto LAB_14105de57;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_14105de57:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14105e03e FUN_14105e03e body=143 status=ok
// SIG undefined FUN_14105e03e(void)

void FUN_14105e03e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *_Dst;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(param_1 + 0x90);
  if (0 < (int)uVar3) {
    plVar1 = *(longlong **)(param_1 + 0x88);
    uVar5 = 0;
    _Dst = plVar1;
    do {
      if (*_Dst == param_2) {
        if (uVar3 - 1 != (int)uVar5) {
          iVar2 = (uVar3 - 1) - (int)uVar5;
          iVar4 = 1;
          if (iVar2 < 1) {
            iVar4 = iVar2;
          }
          memmove(_Dst,plVar1 + (ulonglong)(uVar3 - iVar4) * 2,(longlong)iVar4 << 4);
          uVar3 = *(uint *)(param_1 + 0x90);
        }
        *(uint *)(param_1 + 0x90) = uVar3 - 1;
        FUN_14105e0ce((longlong *)(param_1 + 0x88));
        return;
      }
      uVar5 = uVar5 + 1;
      _Dst = _Dst + 2;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 14105e0ce FUN_14105e0ce body=142 status=ok
// SIG undefined FUN_14105e0ce(void)

void FUN_14105e0ce(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 14105e15c FUN_14105e15c body=2030 status=ok
// SIG undefined FUN_14105e15c(void)

void FUN_14105e15c(longlong param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  longlong ****pppplVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong ******pppppplVar10;
  longlong ****pppplVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong ****pppplVar16;
  bool bVar17;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [12];
  undefined8 local_80;
  undefined4 local_78;
  longlong *****local_70;
  int local_68;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar8 = FUN_14105e99c(param_2);
  lVar9 = FUN_14105e9e4(uVar8);
  if (lVar9 == 0) goto LAB_14105e5a8;
  if (*(char *)(lVar9 + 0xd) == '\x02') {
    lVar13 = param_2 + 0x10;
    if (*(longlong *)(param_2 + 0x910) != 0) {
      lVar13 = *(longlong *)(param_2 + 0x910);
    }
    if ((longlong)*(int *)(param_2 + 0x918) != 0) {
      lVar14 = (longlong)*(int *)(param_2 + 0x918) * 0x48;
      do {
        if ((*(uint *)(param_1 + 0x20) & ~*(uint *)(lVar13 + 0x30)) == 0) {
          local_70 = *(longlong ******)(lVar13 + 0x28);
          FUN_1401533ba(local_8c,&local_70,1);
          local_58 = 0;
          local_50 = 0;
          cVar5 = FUN_140459992(lVar9,local_8c,&local_70);
          if (cVar5 == '\0') {
            FUN_140f7e106(lVar9,local_8c,lVar13,0);
          }
          else {
            local_80 = *(undefined8 *)(lVar13 + 0x28);
            local_78 = 0xffffffff;
            FUN_140af060e(param_2,&local_80,&local_70);
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
          if (pcVar2 != (code *)0x0) {
            pppppplVar10 = &local_70;
            if (0x18 < local_58) {
              pppppplVar10 = (longlong ******)local_70;
            }
            (*pcVar2)(pppppplVar10);
          }
          if (0x18 < local_58) {
            FUN_1400020a8(local_70);
          }
        }
        lVar13 = lVar13 + 0x48;
        lVar14 = lVar14 + -0x48;
      } while (lVar14 != 0);
    }
  }
  local_70 = (longlong *****)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,4,0x10);
  local_68 = 4;
  pppplVar11 = *(longlong *****)(param_1 + 0x10);
  if (pppplVar11 == (longlong ****)0x0) {
LAB_14105e6cf:
    *local_70 = (longlong ****)&PTR_LAB_14b3fcf50;
    LOCK();
    UNLOCK();
    pppplVar11 = (longlong ****)(DAT_14c758608 + 1);
    lVar13 = DAT_14c758608 + 1;
    if (pppplVar11 == (longlong ****)0x0) {
      LOCK();
      UNLOCK();
      pppplVar11 = (longlong ****)(DAT_14c758608 + 2);
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    local_70[2] = pppplVar11;
    *local_70 = (longlong ****)&PTR_FUN_14b3fcee0;
    local_70[3] = (longlong ****)0x0;
    local_70[4] = (longlong ****)0x0;
    local_70[5] = (longlong ****)&LAB_140e33ff0;
    *(undefined4 *)(local_70 + 6) = 0;
  }
  else {
    iVar6 = *(int *)(pppplVar11 + 1);
    do {
      if (iVar6 == 0) goto LAB_14105e6cf;
      LOCK();
      iVar7 = *(int *)(pppplVar11 + 1);
      bVar17 = iVar6 == iVar7;
      if (bVar17) {
        *(int *)(pppplVar11 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar17);
    pppplVar3 = *(longlong *****)(param_1 + 8);
    LOCK();
    *(int *)(pppplVar11 + 1) = *(int *)(pppplVar11 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(pppplVar11 + 1) = *(int *)(pppplVar11 + 1) + 1;
    UNLOCK();
    *local_70 = (longlong ****)&PTR_LAB_14b3fcf50;
    LOCK();
    UNLOCK();
    pppplVar16 = (longlong ****)(DAT_14c758608 + 1);
    lVar13 = DAT_14c758608 + 1;
    if (pppplVar16 == (longlong ****)0x0) {
      LOCK();
      UNLOCK();
      pppplVar16 = (longlong ****)(DAT_14c758608 + 2);
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    local_70[2] = pppplVar16;
    *local_70 = (longlong ****)&PTR_FUN_14b3fcee0;
    local_70[3] = pppplVar3;
    local_70[4] = pppplVar11;
    LOCK();
    *(int *)((longlong)pppplVar11 + 0xc) = *(int *)((longlong)pppplVar11 + 0xc) + 1;
    UNLOCK();
    local_70[5] = (longlong ****)&LAB_140e33ff0;
    *(undefined4 *)(local_70 + 6) = 0;
    LOCK();
    pppplVar3 = pppplVar11 + 1;
    *(int *)pppplVar3 = *(int *)pppplVar3 + -1;
    UNLOCK();
    if (*(int *)pppplVar3 == 0) {
      (*(code *)**pppplVar11)(pppplVar11);
      LOCK();
      piVar1 = (int *)((longlong)pppplVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*pppplVar11)[2])(pppplVar11);
      }
    }
    LOCK();
    pppplVar3 = pppplVar11 + 1;
    *(int *)pppplVar3 = *(int *)pppplVar3 + -1;
    UNLOCK();
    if (*(int *)pppplVar3 == 0) {
      (*(code *)**pppplVar11)(pppplVar11);
      LOCK();
      piVar1 = (int *)((longlong)pppplVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*pppplVar11)[2])(pppplVar11);
      }
    }
    LOCK();
    pppplVar3 = pppplVar11 + 1;
    *(int *)pppplVar3 = *(int *)pppplVar3 + -1;
    UNLOCK();
    if (*(int *)pppplVar3 == 0) {
      (*(code *)**pppplVar11)(pppplVar11);
      LOCK();
      piVar1 = (int *)((longlong)pppplVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*pppplVar11)[2])(pppplVar11);
      }
    }
  }
  if (((local_68 == 0) || (local_70 == (longlong *****)0x0)) ||
     (cVar5 = (*(code *)(*local_70)[6])(), cVar5 == '\0')) {
    if (local_68 == 0) goto LAB_14105e40f;
    if (local_70 != (longlong *****)0x0) {
      (*(code *)**local_70)(local_70,0);
      FUN_1446efa72(&local_70,0,0,0x10);
      goto LAB_14105e402;
    }
  }
  else {
    plVar15 = (longlong *)(lVar9 + 0x48);
    if (*(int *)(lVar9 + 0x5c) < 1) {
      iVar6 = *(int *)(lVar9 + 0x50);
      iVar7 = *(int *)(lVar9 + 0x58) + -1;
      *(int *)(lVar9 + 0x58) = iVar7;
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
        if (0 < iVar6) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar15 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar15 + (longlong)iVar12 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar15,iVar12);
              FUN_14005b248(plVar15);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar7 = *(int *)(lVar9 + 0x50);
          } while (iVar12 < iVar7);
        }
        iVar12 = 2;
        if (2 < iVar7 * 2) {
          iVar12 = iVar7 * 2;
        }
        *(int *)(lVar9 + 0x58) = iVar12;
        if ((iVar12 < iVar6) && (*(int *)(lVar9 + 0x54) != iVar7)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_68 != 0) && (local_70 != (longlong *****)0x0)) {
      (*(code *)(*local_70)[7])(local_70,&local_80);
    }
    iVar6 = *(int *)(lVar9 + 0x50);
    *(uint *)(lVar9 + 0x50) = iVar6 + 1U;
    if (*(uint *)(lVar9 + 0x54) < iVar6 + 1U) {
      FUN_1447a71f6(plVar15,iVar6);
    }
    lVar13 = *plVar15;
    lVar14 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar13 + lVar14) = 0;
    *(undefined4 *)(lVar13 + 8 + lVar14) = 0;
    *(longlong ******)(lVar13 + lVar14) = local_70;
    local_70 = (longlong *****)0x0;
    *(int *)(lVar13 + 8 + lVar14) = local_68;
LAB_14105e402:
    local_68 = 0;
LAB_14105e40f:
    if (local_70 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
  }
  local_70 = (longlong *****)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,4,0x10);
  local_68 = 4;
  pppplVar11 = *(longlong *****)(param_1 + 0x10);
  if (pppplVar11 == (longlong ****)0x0) {
LAB_14105e721:
    *local_70 = (longlong ****)&PTR_LAB_14b3fd030;
    LOCK();
    UNLOCK();
    pppplVar11 = (longlong ****)(DAT_14c758608 + 1);
    lVar13 = DAT_14c758608 + 1;
    if (pppplVar11 == (longlong ****)0x0) {
      LOCK();
      UNLOCK();
      pppplVar11 = (longlong ****)(DAT_14c758608 + 2);
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    local_70[2] = pppplVar11;
    *local_70 = (longlong ****)&PTR_FUN_14b3fcfc0;
    local_70[3] = (longlong ****)0x0;
    local_70[4] = (longlong ****)0x0;
    local_70[5] = (longlong ****)&LAB_140502cde;
    *(undefined4 *)(local_70 + 6) = 0;
  }
  else {
    iVar6 = *(int *)(pppplVar11 + 1);
    do {
      if (iVar6 == 0) goto LAB_14105e721;
      LOCK();
      iVar7 = *(int *)(pppplVar11 + 1);
      bVar17 = iVar6 == iVar7;
      if (bVar17) {
        *(int *)(pppplVar11 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar17);
    pppplVar3 = *(longlong *****)(param_1 + 8);
    LOCK();
    *(int *)(pppplVar11 + 1) = *(int *)(pppplVar11 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)(pppplVar11 + 1) = *(int *)(pppplVar11 + 1) + 1;
    UNLOCK();
    *local_70 = (longlong ****)&PTR_LAB_14b3fd030;
    LOCK();
    UNLOCK();
    pppplVar16 = (longlong ****)(DAT_14c758608 + 1);
    lVar13 = DAT_14c758608 + 1;
    if (pppplVar16 == (longlong ****)0x0) {
      LOCK();
      UNLOCK();
      pppplVar16 = (longlong ****)(DAT_14c758608 + 2);
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    local_70[2] = pppplVar16;
    *local_70 = (longlong ****)&PTR_FUN_14b3fcfc0;
    local_70[3] = pppplVar3;
    local_70[4] = pppplVar11;
    LOCK();
    *(int *)((longlong)pppplVar11 + 0xc) = *(int *)((longlong)pppplVar11 + 0xc) + 1;
    UNLOCK();
    local_70[5] = (longlong ****)&LAB_140502cde;
    *(undefined4 *)(local_70 + 6) = 0;
    LOCK();
    pppplVar3 = pppplVar11 + 1;
    *(int *)pppplVar3 = *(int *)pppplVar3 + -1;
    UNLOCK();
    if (*(int *)pppplVar3 == 0) {
      (*(code *)**pppplVar11)(pppplVar11);
      LOCK();
      piVar1 = (int *)((longlong)pppplVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*pppplVar11)[2])(pppplVar11);
      }
    }
    LOCK();
    pppplVar3 = pppplVar11 + 1;
    *(int *)pppplVar3 = *(int *)pppplVar3 + -1;
    UNLOCK();
    if (*(int *)pppplVar3 == 0) {
      (*(code *)**pppplVar11)(pppplVar11);
      LOCK();
      piVar1 = (int *)((longlong)pppplVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*pppplVar11)[2])(pppplVar11);
      }
    }
    LOCK();
    pppplVar3 = pppplVar11 + 1;
    *(int *)pppplVar3 = *(int *)pppplVar3 + -1;
    UNLOCK();
    if (*(int *)pppplVar3 == 0) {
      (*(code *)**pppplVar11)(pppplVar11);
      LOCK();
      piVar1 = (int *)((longlong)pppplVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*pppplVar11)[2])(pppplVar11);
      }
    }
  }
  if (((local_68 == 0) || (local_70 == (longlong *****)0x0)) ||
     (cVar5 = (*(code *)(*local_70)[6])(), cVar5 == '\0')) {
    if (local_68 != 0) {
      if (local_70 == (longlong *****)0x0) goto LAB_14105e5a8;
      (*(code *)**local_70)(local_70,0);
      FUN_1446efa72(&local_70,0,0,0x10);
      goto LAB_14105e592;
    }
  }
  else {
    plVar15 = (longlong *)(lVar9 + 0x60);
    if (*(int *)(lVar9 + 0x74) < 1) {
      iVar6 = *(int *)(lVar9 + 0x68);
      iVar7 = *(int *)(lVar9 + 0x70) + -1;
      *(int *)(lVar9 + 0x70) = iVar7;
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
        if (0 < iVar6) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar15 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar15 + (longlong)iVar12 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar15,iVar12);
              FUN_14005b248(plVar15);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar7 = *(int *)(lVar9 + 0x68);
          } while (iVar12 < iVar7);
        }
        iVar12 = 2;
        if (2 < iVar7 * 2) {
          iVar12 = iVar7 * 2;
        }
        *(int *)(lVar9 + 0x70) = iVar12;
        if ((iVar12 < iVar6) && (*(int *)(lVar9 + 0x6c) != iVar7)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_68 != 0) && (local_70 != (longlong *****)0x0)) {
      (*(code *)(*local_70)[7])(local_70,&local_80);
    }
    iVar6 = *(int *)(lVar9 + 0x68);
    *(uint *)(lVar9 + 0x68) = iVar6 + 1U;
    if (*(uint *)(lVar9 + 0x6c) < iVar6 + 1U) {
      FUN_1447a71f6(plVar15,iVar6);
    }
    lVar9 = *plVar15;
    lVar13 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar9 + lVar13) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar13) = 0;
    *(longlong ******)(lVar9 + lVar13) = local_70;
    local_70 = (longlong *****)0x0;
    *(int *)(lVar9 + 8 + lVar13) = local_68;
LAB_14105e592:
    local_68 = 0;
  }
  if (local_70 != (longlong *****)0x0) {
    FUN_1400020a8();
  }
LAB_14105e5a8:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14105e99c FUN_14105e99c body=72 status=ok
// SIG undefined FUN_14105e99c(void)

undefined8 FUN_14105e99c(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_1[1] == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(uint *)(puVar3 + 2) != param_1[1]) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 14105e9e4 FUN_14105e9e4 body=91 status=ok
// SIG undefined FUN_14105e9e4(void)

undefined8 FUN_14105e9e4(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140427846();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140427846();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014105ea33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14105ea40 FUN_14105ea40 body=40 status=ok
// SIG undefined FUN_14105ea40(void)

undefined8 FUN_14105ea40(undefined8 param_1,int param_2)

{
  FUN_14105ea68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14105ea68 FUN_14105ea68 body=145 status=ok
// SIG undefined FUN_14105ea68(void)

void FUN_14105ea68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b72a550;
  param_1[5] = &PTR_FUN_14b72b150;
  param_1[6] = &PTR_FUN_14b72b190;
  param_1[0x55] = &PTR_FUN_14b72b1e0;
  param_1[0x56] = &PTR_FUN_14b72b260;
  param_1[0x57] = &PTR_FUN_14b72b270;
  param_1[0xe3] = &PTR_FUN_14b72b2a0;
  if (param_1[0x16a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x168] != 0) {
    FUN_1400020a8();
  }
  FUN_14105eafa(param_1);
  return;
}



// FUNCTION 14105eafa FUN_14105eafa body=147 status=ok
// SIG undefined FUN_14105eafa(void)

void FUN_14105eafa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5226d0;
  param_1[5] = &PTR_FUN_14b5232d0;
  param_1[6] = &PTR_FUN_14b523310;
  param_1[0x55] = &PTR_FUN_14b523360;
  param_1[0x56] = &PTR_FUN_14b5233e0;
  param_1[0x57] = &PTR_FUN_14b5233f0;
  param_1[0xe3] = &PTR_FUN_14b523420;
  if (param_1[0x166] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x162] != 0) {
    FUN_1400020a8();
  }
  FUN_14006df30(param_1);
  return;
}



// FUNCTION 14105eb8e FUN_14105eb8e body=843 status=ok
// SIG undefined FUN_14105eb8e(void)

ulonglong FUN_14105eb8e(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_98 [32];
  char local_78;
  undefined7 uStack_77;
  longlong *local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = FUN_1405f939e();
  FUN_140a702f6(&local_78,uVar7);
  if (local_70 != (longlong *)0x0) {
    iVar6 = (int)local_70[1];
    do {
      if (iVar6 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar8 = (int)local_70[1];
      bVar14 = iVar6 == iVar8;
      if (bVar14) {
        *(int *)(local_70 + 1) = iVar6 + 1;
        iVar8 = iVar6;
      }
      iVar6 = iVar8;
      UNLOCK();
      plVar9 = local_70;
    } while (!bVar14);
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    if (plVar9 != (longlong *)0x0) {
      lVar4 = CONCAT71(uStack_77,local_78);
      if (lVar4 == 0) {
LAB_14105ee22:
        uVar10 = 0;
      }
      else {
        lVar13 = param_1[8];
        if (lVar13 == 0) {
          lVar12 = 0;
          local_70 = (longlong *)0x0;
LAB_14105edf3:
          local_68 = (longlong *)0x0;
          bVar14 = true;
        }
        else {
          if (*(int *)(lVar13 + 0x4c) == 0) {
LAB_14105edbd:
            lVar12 = 0;
          }
          else {
            uVar3 = *(uint *)(lVar13 + 0x48);
            lVar12 = 0;
            if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
              plVar11 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
              if ((plVar11 == (longlong *)0x0) ||
                 (((int)plVar11[2] != *(int *)(lVar13 + 0x4c) ||
                  ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_14105edbd;
              lVar12 = *plVar11;
            }
          }
          plVar11 = *(longlong **)(lVar13 + 0x118);
          local_70 = param_1;
          if (plVar11 == (longlong *)0x0) goto LAB_14105edf3;
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar11 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          LOCK();
          *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
          UNLOCK();
          bVar14 = false;
          local_68 = plVar11;
        }
        plVar11 = local_68;
        local_50[0] = 0;
        local_78 = '\x03';
        local_60._0_4_ = 0;
        if (lVar12 == 0) {
          iVar6 = 0;
          uVar3 = (uint)local_60;
        }
        else {
          uVar3 = *(uint *)(lVar12 + 0xc);
          local_60 = (ulonglong)uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar13 = 0;
          }
          iVar6 = *(int *)(lVar13 + 0x10);
          if (*(int *)(lVar13 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar8 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar8);
            }
            LOCK();
            iVar6 = *(int *)(lVar13 + 0x10);
            bVar15 = iVar6 == 0;
            if (bVar15) {
              *(int *)(lVar13 + 0x10) = iVar8;
              iVar6 = 0;
            }
            UNLOCK();
            uVar3 = (uint)local_60;
            if (bVar15) {
              iVar6 = iVar8;
            }
          }
        }
        local_60._0_4_ = uVar3;
        local_60 = CONCAT44(iVar6,(uint)local_60);
        local_58 = 2;
        if (local_50[0] != 0) {
          FUN_1417398fc(&DAT_14c9a3da0,local_50[0] + -1,1);
          local_50[0] = 0;
        }
        if (!bVar14) {
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        lVar13 = param_1[9];
        uVar7 = FUN_140343d7a(param_1);
        cVar5 = FUN_14105eeda(lVar4,lVar13 + 0x80,uVar7,&local_78);
        FUN_1448173f8(local_50);
        if ((local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_68 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_68 + 0x10))();
          }
        }
        uVar10 = CONCAT71((int7)((ulonglong)&local_78 >> 8),1);
        if (cVar5 == '\0') goto LAB_14105ee22;
      }
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      goto LAB_14105ed74;
    }
  }
  uVar10 = 0;
LAB_14105ed74:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 14105eeda FUN_14105eeda body=3009 status=ok
// SIG undefined FUN_14105eeda(void)

/* WARNING: Removing unreachable block (ram,0x00014105f599) */

ulonglong FUN_14105eeda(ulonglong param_1,longlong *param_2,longlong param_3,char *param_4)

{
  float *pfVar1;
  int *piVar2;
  char cVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  float *pfVar12;
  ulonglong uVar13;
  int iVar14;
  undefined8 ****ppppuVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  bool bVar19;
  byte bVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_188 [32];
  longlong *local_168;
  undefined1 local_160;
  char local_152;
  undefined1 local_151;
  longlong local_150;
  ulonglong local_148;
  uint local_140;
  uint uStack_13c;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 ***local_120;
  undefined8 *local_118;
  ushort local_108;
  byte local_100;
  char local_f8 [8];
  undefined8 local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  char local_d8;
  undefined4 local_d0 [2];
  float local_c8;
  undefined4 uStack_c4;
  ushort local_b0;
  byte local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_4 == (char *)0x0) {
    local_f8[0] = '\0';
    local_d0[0] = 0;
    FUN_1456bb102(local_f8,param_3);
  }
  else {
    local_f8[0] = *param_4;
    if (local_f8[0] == '\x01') {
      local_f8[0] = '\x02';
      if (*(longlong *)(param_4 + 8) == 0) {
        local_f0._0_4_ = 0;
        iVar6 = 0;
        uVar7 = (uint)local_f0;
      }
      else {
        uVar7 = *(uint *)(*(longlong *)(param_4 + 8) + 0xc);
        local_f0 = (ulonglong)uVar7;
        if ((int)uVar7 < DAT_14c9647dc) {
          lVar16 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
        }
        else {
          lVar16 = 0;
        }
        iVar6 = *(int *)(lVar16 + 0x10);
        if (*(int *)(lVar16 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar14 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar14);
          }
          LOCK();
          iVar6 = *(int *)(lVar16 + 0x10);
          bVar19 = iVar6 == 0;
          if (bVar19) {
            *(int *)(lVar16 + 0x10) = iVar14;
            iVar6 = 0;
          }
          UNLOCK();
          uVar7 = (uint)local_f0;
          if (bVar19) {
            iVar6 = iVar14;
          }
        }
      }
      local_f0._0_4_ = uVar7;
      local_f0 = CONCAT44(iVar6,(uint)local_f0);
    }
    else if (local_f8[0] == '\x02') {
      local_f0 = *(ulonglong *)(param_4 + 8);
    }
    else if (local_f8[0] == '\x03') {
      local_f0 = *(undefined8 *)(param_4 + 8);
      local_e8 = *(longlong **)(param_4 + 0x10);
      if (local_e8 == (longlong *)0x0) {
        local_e0 = *(undefined8 *)(param_4 + 0x18);
        local_d8 = param_4[0x20];
      }
      else {
        LOCK();
        *(int *)((longlong)local_e8 + 0xc) = *(int *)((longlong)local_e8 + 0xc) + 1;
        UNLOCK();
        local_e0 = *(undefined8 *)(param_4 + 0x18);
        local_d8 = param_4[0x20];
      }
    }
    local_d0[0] = 0;
    if (*(int *)(param_4 + 0x28) != 0) {
      uVar9 = FUN_1448174c4(local_d0);
      FUN_1400e08b0(uVar9,DAT_14c9a3da0 + (longlong)*(int *)(param_4 + 0x28) * 0x10 + -0x10);
    }
  }
  lVar16 = *param_2;
  FUN_1447c3578(param_2 + 1,&local_120,local_f8);
  if (local_100 == 3) {
    fVar22 = local_120._0_4_;
    bVar20 = 3;
  }
  else {
    pfVar8 = &local_c8;
    FUN_1400b56fe(pfVar8,&local_120,3);
    fVar22 = 0.0;
    if (local_a8 != 0) {
      fVar22 = local_c8;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_b0) {
        pfVar8 = (float *)CONCAT44(uStack_c4,local_c8);
      }
      (*pcVar4)(pfVar8);
    }
    bVar20 = local_100;
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
      bVar20 = local_100;
    }
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar20 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar15 = &local_120;
    if (0x18 < local_108) {
      ppppuVar15 = (undefined8 ****)local_120;
    }
    (*pcVar4)(ppppuVar15);
  }
  if (0x18 < local_108) {
    FUN_1400020a8(local_120);
  }
  if (*(char *)((longlong)param_2 + 0x7a) == '\x01') {
    pfVar8 = &local_c8;
    FUN_1447c3578(param_2 + 0x10,pfVar8,local_f8);
    plVar10 = (longlong *)FUN_14030a32e(pfVar8);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_b0) {
        pfVar8 = (float *)CONCAT44(uStack_c4,local_c8);
      }
      (*pcVar4)(pfVar8);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
    }
  }
  else {
    plVar10 = (longlong *)0x0;
  }
  lVar17 = param_2[0xf];
  FUN_1447c3578(param_2 + 8,&local_120,local_f8);
  local_152 = (char)lVar17;
  if (local_100 == 3) {
    local_100 = 3;
    fVar25 = local_120._0_4_;
  }
  else {
    pfVar8 = &local_c8;
    FUN_1400b56fe(pfVar8,&local_120,3);
    fVar25 = 0.0;
    if (local_a8 != 0) {
      fVar25 = local_c8;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_b0) {
        pfVar8 = (float *)CONCAT44(uStack_c4,local_c8);
      }
      (*pcVar4)(pfVar8);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(CONCAT44(uStack_c4,local_c8));
    }
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_100 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar15 = &local_120;
    if (0x18 < local_108) {
      ppppuVar15 = (undefined8 ****)local_120;
    }
    (*pcVar4)(ppppuVar15);
  }
  cVar5 = local_152;
  if (0x18 < local_108) {
    FUN_1400020a8(local_120);
  }
  if (fVar22 <= 0.0) {
LAB_14105f74e:
    param_1 = CONCAT71((int7)(param_1 >> 8),1);
    goto LAB_14105f37c;
  }
  cVar3 = *(char *)((longlong)param_2 + 0x79);
  FUN_140a70e7e(param_1,&local_c8,param_3);
  local_168 = plVar10;
  local_148 = param_1;
  pfVar8 = (float *)FUN_140a71094(param_1,lVar16,param_3,&local_c8);
  param_1 = 0;
  if (pfVar8 == (float *)0x0) goto LAB_14105f37c;
  uVar7 = 0;
  if (param_3 != 0) {
    uVar7 = *(uint *)(param_3 + 0xc);
    param_1 = (ulonglong)uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    uVar7 = *(uint *)(lVar17 + 0x10);
    cVar5 = local_152;
    if (uVar7 == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar18 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar18);
      }
      LOCK();
      uVar7 = *(uint *)(lVar17 + 0x10);
      bVar19 = uVar7 == 0;
      if (bVar19) {
        *(uint *)(lVar17 + 0x10) = uVar18;
        uVar7 = 0;
      }
      UNLOCK();
      cVar5 = local_152;
      if (bVar19) {
        uVar7 = uVar18;
      }
    }
  }
  pfVar1 = pfVar8 + 0xc;
  ppppuVar15 = (undefined8 ****)(param_1 | (ulonglong)uVar7 << 0x20);
  local_150 = param_3;
  local_120 = ppppuVar15;
  iVar6 = FUN_14105fa9c(pfVar1,uVar7 ^ (uint)param_1);
  lVar17 = (longlong)iVar6 * 0x1c + *(longlong *)(pfVar8 + 0xc);
  if (lVar17 != 0 && iVar6 != -1) {
    if (ABS(fVar22 - *(float *)(lVar17 + 8)) <= 0.01) {
      *(byte *)(lVar17 + 0x10) = *(byte *)(lVar17 + 0x10) & cVar5 == '\x02';
      FUN_14105fde8(local_148,pfVar8);
      goto LAB_14105f74e;
    }
    FUN_140e1bd9a(pfVar1,ppppuVar15);
    FUN_14105fde8(local_148,pfVar8);
  }
  uVar13 = local_148;
  lVar17 = local_150;
  local_151 = cVar5 == '\x02';
  bVar19 = cVar3 != '\0' && (bool)local_151;
  if (((bVar19) && (plVar10 == (longlong *)0x0)) && (*(char *)(lVar16 + 0xa0) == '\0')) {
    param_1 = 0;
    goto LAB_14105f37c;
  }
  fVar26 = (*pfVar8 + pfVar8[2] + fVar22) - pfVar8[1];
  local_138 = 0;
  uStack_130 = 0;
  if (cVar3 == '\x01' && cVar5 == '\x02') {
    local_160 = 1;
    local_168 = plVar10;
    FUN_140a71b12(local_148,&local_120,lVar16,local_150);
    lVar16 = FUN_14479d2ce(&local_120);
    if (lVar16 == 0) {
      fVar24 = 0.0;
      cVar5 = local_152;
    }
    else {
      local_168 = &local_138;
      fVar24 = (float)FUN_140a72f08(uVar13,pfVar8,lVar17,lVar16);
      cVar5 = local_152;
    }
  }
  else {
    fVar24 = 0.0;
    if (((cVar5 != '\x02') && (0.0 < fVar26)) && (cVar5 = local_152, fVar26 < pfVar8[2])) {
      do {
        fVar23 = (float)FUN_147f5f360(pfVar8);
        fVar26 = fVar26 - fVar23;
        lVar17 = local_150;
        cVar5 = local_152;
        if (fVar23 <= 0.0) break;
      } while (0.0 < fVar26);
    }
  }
  lVar16 = local_138;
  bVar20 = bVar19 & -(0.0 < fVar26 && fVar26 <= fVar24);
  ppppuVar15 = (undefined8 ****)CONCAT71((int7)(param_1 >> 8),bVar20);
  if (bVar20 == 1) {
    lVar11 = (longlong)(int)uStack_130;
    lVar17 = local_150;
    cVar5 = local_152;
    if (lVar11 != 0) {
      lVar21 = 0;
      do {
        ppppuVar15 = *(undefined8 *****)(lVar16 + 4 + lVar21);
        local_120 = ppppuVar15;
        iVar6 = FUN_14105fa9c(pfVar1,(uint)((ulonglong)ppppuVar15 >> 0x20) ^ (uint)ppppuVar15,
                              &local_120);
        if ((iVar6 != -1) &&
           (lVar17 = (longlong)iVar6 * 0x1c + *(longlong *)pfVar1, pfVar12 = (float *)(lVar17 + 8),
           pfVar12 != (float *)0x0 && lVar17 != 0)) {
          fVar24 = *pfVar12;
          fVar26 = fVar26 - fVar24;
          pfVar8[2] = pfVar8[2] - fVar24;
          FUN_140e1bd9a(pfVar1,ppppuVar15);
          lVar17 = local_150;
          cVar5 = local_152;
          if (fVar26 <= 0.0) break;
        }
        lVar21 = lVar21 + 0xc;
        lVar17 = local_150;
        cVar5 = local_152;
      } while (lVar11 * 0xc != lVar21);
    }
  }
  param_1 = CONCAT71((int7)((ulonglong)ppppuVar15 >> 8),cVar5 == '\x01' || fVar26 <= 0.0);
  if (cVar5 == '\x01' || fVar26 <= 0.0) {
    uStack_13c = 0;
    if (lVar17 == 0) {
      local_140 = 0;
      uVar7 = 0;
    }
    else {
      local_140 = *(uint *)(lVar17 + 0xc);
      if ((int)local_140 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((local_140 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_140 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      uVar7 = *(uint *)(lVar16 + 0x10);
      if (*(uint *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        uVar18 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar18);
        }
        LOCK();
        uVar7 = *(uint *)(lVar16 + 0x10);
        bVar19 = uVar7 == 0;
        if (bVar19) {
          *(uint *)(lVar16 + 0x10) = uVar18;
          uVar7 = 0;
        }
        UNLOCK();
        if (bVar19) {
          uVar7 = uVar18;
        }
      }
    }
    uVar18 = uVar7 ^ local_140;
    uStack_13c = uVar7;
    iVar6 = FUN_14105fa9c(pfVar1,uVar18);
    if (iVar6 == -1) {
LAB_14105f2a8:
      FUN_14105fbf6(pfVar1,&local_120);
      *local_118 = CONCAT44(uStack_13c,local_140);
      local_118[2] = 0xffffffff00000000;
      local_118[1] = 0;
      fVar26 = local_120._0_4_;
      lVar16 = (longlong)(int)local_120._0_4_;
      cVar5 = FUN_14105fb62(pfVar1,uVar18,local_118,&local_120);
      if (cVar5 == '\0') {
        uVar7 = (int)pfVar8[0xe] - (int)pfVar8[0x19];
        fVar24 = 1.4013e-45;
        if (3 < uVar7) {
          uVar13 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
          lVar17 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          fVar24 = (float)(1 << ((byte)lVar17 & 0x1f));
        }
        if (((int)uVar7 < 1) || ((int)fVar24 <= (int)pfVar8[0x1e])) {
          uVar18 = (int)pfVar8[0x1e] - 1U & uVar18;
          *(uint *)(local_118 + 3) = uVar18;
          pfVar12 = *(float **)(pfVar8 + 0x1c);
          if (*(float **)(pfVar8 + 0x1c) == (float *)0x0) {
            pfVar12 = pfVar8 + 0x1a;
          }
          *(float *)((longlong)local_118 + 0x14) =
               pfVar12[(longlong)(int)pfVar8[0x1e] - 1U & (longlong)(int)uVar18];
          pfVar12 = pfVar8 + 0x1a;
          if (*(float **)(pfVar8 + 0x1c) != (float *)0x0) {
            pfVar12 = *(float **)(pfVar8 + 0x1c);
          }
          pfVar12[(longlong)(int)pfVar8[0x1e] - 1U & (longlong)(int)uVar18] = fVar26;
        }
        else {
          pfVar8[0x1e] = fVar24;
          FUN_141060018(pfVar1);
        }
      }
      lVar16 = *(longlong *)pfVar1 + lVar16 * 0x1c;
    }
    else {
      if (*(longlong *)pfVar1 + (longlong)iVar6 * 0x1c == 0) goto LAB_14105f2a8;
      lVar16 = (longlong)iVar6 * 0x1c + *(longlong *)pfVar1;
    }
    *(float *)(lVar16 + 8) = fVar22;
    *(undefined1 *)(lVar16 + 0x10) = local_151;
    fVar22 = 0.0;
    if (local_152 != '\x02') {
      fVar22 = fVar25;
    }
    *(float *)(lVar16 + 0xc) = fVar22;
    FUN_14105fde8(local_148,pfVar8);
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
LAB_14105f37c:
  FUN_1448173f8(local_d0);
  if ((local_f8[0] == '\x03') && (local_e8 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_e8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_e8 + 0x10))();
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14105fa9c FUN_14105fa9c body=196 status=ok
// SIG undefined FUN_14105fa9c(void)

int FUN_14105fa9c(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x1c);
        cVar1 = FUN_14472d054(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14105fac5;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x14 + (longlong)iVar4 * 0x1c);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14105fac5:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 14105fb62 FUN_14105fb62 body=146 status=ok
// SIG undefined FUN_14105fb62(void)

undefined8 FUN_14105fb62(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_30 = *param_3;
    iVar7 = FUN_14105fa9c();
    if (iVar7 != -1) {
      lVar2 = *param_1;
      uVar3 = *(undefined4 *)param_3;
      uVar4 = *(undefined4 *)((longlong)param_3 + 4);
      uVar5 = *(undefined4 *)(param_3 + 1);
      uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x1c) = *(undefined4 *)(param_3 + 2);
      puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x1c);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_140e1bf06(param_1,*param_4);
      *param_4 = iVar7;
      uVar8 = 1;
      goto LAB_14105fb86;
    }
  }
  uVar8 = 0;
LAB_14105fb86:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14105fbf6 FUN_14105fbf6 body=497 status=ok
// SIG undefined FUN_14105fbf6(void)

int * FUN_14105fbf6(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x1c);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 14105fde8 FUN_14105fde8 body=559 status=ok
// SIG undefined FUN_14105fde8(void)

void FUN_14105fde8(longlong param_1,float *param_2)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar6 = 0;
  *param_2 = 0.0;
  param_2[2] = 0.0;
  fVar3 = param_2[0x16];
  if (fVar3 == 0.0) {
    uVar13 = 1;
    fVar14 = 0.0;
    iVar10 = 0;
  }
  else {
    pfVar4 = *(float **)(param_2 + 0x14);
    if (*(float **)(param_2 + 0x14) == (float *)0x0) {
      pfVar4 = param_2 + 0x10;
    }
    fVar14 = *pfVar4;
    if (fVar14 == 0.0) {
      iVar10 = (int)fVar3 + 0x1e;
      if (-1 < (int)fVar3 + -1) {
        iVar10 = (int)fVar3 + -1;
      }
      uVar6 = 0;
      uVar13 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar13 = uVar6;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar6) goto LAB_14105ff61;
        iVar10 = iVar10 + 0x20;
        fVar14 = pfVar4[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (fVar14 == 0.0);
    }
    else {
      uVar6 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-(int)fVar14 & (uint)fVar14);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    fVar14 = (float)((iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e);
    if ((int)fVar3 <= (int)fVar14) {
      fVar14 = fVar3;
    }
  }
  if (fVar14 != fVar3) {
    pfVar4 = param_2 + 0x10;
    if (*(float **)(param_2 + 0x14) != (float *)0x0) {
      pfVar4 = *(float **)(param_2 + 0x14);
    }
    fVar15 = 0.0;
    uVar7 = 0xffffffff;
    fVar16 = 0.0;
    do {
      fVar2 = *(float *)(*(longlong *)(param_2 + 0xc) + 8 + (longlong)(int)fVar14 * 0x1c);
      if (*(char *)(*(longlong *)(param_2 + 0xc) + 0x10 + (longlong)(int)fVar14 * 0x1c) == '\x01') {
        fVar16 = fVar16 + fVar2;
        param_2[2] = fVar16;
      }
      else {
        fVar15 = fVar15 + fVar2;
        *param_2 = fVar15;
      }
      uVar7 = uVar7 & ~(uint)uVar13;
      iVar5 = (int)uVar6;
      lVar11 = (longlong)iVar5;
      fVar14 = (float)((uint)pfVar4[lVar11] & uVar7);
      if (fVar14 == 0.0) {
        iVar8 = (int)fVar3 + -1;
        if ((int)fVar3 + -1 < 0) {
          iVar8 = (int)fVar3 + 0x1e;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar5) {
          iVar9 = iVar5;
        }
        if (iVar8 <= iVar5) break;
        lVar12 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          fVar14 = pfVar4[lVar11 + lVar12 + 1];
          if (fVar14 != 0.0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar11 == lVar12) goto LAB_14105ff61;
        }
        uVar6 = (ulonglong)(iVar5 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-(int)fVar14 & (uint)fVar14);
      uVar1 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      fVar14 = (float)((iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e);
    } while ((int)fVar14 < (int)fVar3);
  }
LAB_14105ff61:
  fVar3 = param_2[6];
  if (0 < (int)fVar3) {
    uVar6 = 0;
    do {
      uVar7 = (uint)uVar6;
      pfVar4 = (float *)(*(longlong *)(param_2 + 4) + uVar6 * 8);
      if (pfVar4[1] <= *(float *)(param_1 + 0x28) && *(float *)(param_1 + 0x28) != pfVar4[1]) {
        if (~uVar7 + (int)fVar3 != 0) {
          memmove(pfVar4,pfVar4 + 2,(longlong)(int)(~uVar7 + (int)fVar3) << 3);
          fVar3 = param_2[6];
        }
        param_2[6] = (float)((int)fVar3 + -1);
        FUN_1410602aa(param_2 + 4);
        uVar7 = uVar7 - 1;
        fVar3 = param_2[6];
      }
      else {
        *param_2 = *pfVar4 + *param_2;
      }
      uVar6 = (ulonglong)(uVar7 + 1);
    } while ((int)(uVar7 + 1) < (int)fVar3);
  }
  return;
}



// FUNCTION 141060018 FUN_141060018 body=657 status=ok
// SIG undefined FUN_141060018(void)

void FUN_141060018(longlong *param_1)

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
  longlong lVar12;
  int iVar13;
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
    if ((int)uVar7 < 1) goto LAB_14106007b;
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
LAB_14106007b:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
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
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13 * 0x1c;
      uVar15 = (longlong)
               (int)((uint)((ulonglong)*(undefined8 *)(lVar6 + lVar12) >> 0x20) ^
                    (uint)*(undefined8 *)(lVar6 + lVar12)) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x18 + lVar12) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x14 + lVar12) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 1410602aa FUN_1410602aa body=142 status=ok
// SIG undefined FUN_1410602aa(void)

void FUN_1410602aa(longlong param_1)

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
      uVar3 = FUN_144a3809e(uVar3 << 3,4);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,4);
    }
  }
  return;
}



// FUNCTION 141060338 FUN_141060338 body=343 status=ok
// SIG undefined FUN_141060338(void)

void FUN_141060338(longlong param_1)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1401b2056();
  local_68 = (void *)0x0;
  iStack_60 = *(int *)(param_1 + 0x3a8);
  lVar2 = (longlong)iStack_60;
  _Src = *(void **)(param_1 + 0x3a0);
  if (lVar2 == 0) {
    uStack_5c = 0;
  }
  else {
    FUN_14840c8f4(&local_68,iStack_60,0);
    memcpy(local_68,_Src,lVar2 << 3);
  }
  local_30 = &local_39;
  local_38 = FUN_143b4c9ba;
  uVar1 = FUN_1447210f0(param_1);
  FUN_141060490(uVar1,&local_38);
  if (*(int *)(param_1 + 0x3a8) == iStack_60) {
    FUN_1410604f4(*(undefined8 *)(param_1 + 0x3a0),local_68);
  }
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_58 = (undefined4)DAT_14c8463f0;
  uStack_54 = DAT_14c8463f0._4_4_;
  uStack_50 = (undefined4)DAT_14c8463f8;
  uStack_4c = DAT_14c8463f8._4_4_;
  local_68 = (void *)CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  iStack_60 = (undefined4)DAT_14c8463f8;
  uStack_5c = DAT_14c8463f8._4_4_;
  local_48 = 0;
  FUN_140aab646(param_1,0xffffffff);
  if ((((*DAT_14cb498b0 & *DAT_14cb49898) == 1) && (*(longlong *)(param_1 + 0x398) != 0)) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x398) + 8) >> 0x1e & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x398) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141060490 FUN_141060490 body=99 status=ok
// SIG undefined FUN_141060490(void)

void FUN_141060490(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    lVar1 = FUN_140702026();
    if (lVar1 != 0) {
      local_20 = *param_2;
      local_18 = param_2[1];
      FUN_1407028fe(lVar1 + 200);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410604f4 FUN_1410604f4 body=66 status=ok
// SIG undefined FUN_1410604f4(void)

void FUN_1410604f4(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    param_3 = param_3 + -1;
    cVar1 = FUN_140e16a16(param_1,param_2);
    if (cVar1 == '\0') break;
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
  }
  return;
}



// FUNCTION 141060536 FUN_141060536 body=44 status=ok
// SIG undefined FUN_141060536(void)

undefined8 FUN_141060536(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x1f0) != 0)) &&
     (lVar1 = FUN_141060562(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x30);
  }
  return 0;
}



// FUNCTION 141060562 FUN_141060562 body=105 status=ok
// SIG undefined FUN_141060562(void)

void FUN_141060562(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_141060618();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1410605cc(param_1 + 0x100,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410605cc FUN_1410605cc body=76 status=ok
// SIG undefined FUN_1410605cc(void)

void FUN_1410605cc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_141060618();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_141060609;
    }
  }
  lVar2 = 0;
LAB_141060609:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 141060618 FUN_141060618 body=228 status=ok
// SIG undefined FUN_141060618(void)

longlong FUN_141060618(void)

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
  if (DAT_14cbacc08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1417ad04a;
    local_28 = &LAB_1458d5a14;
    local_38 = &LAB_148c31a7b;
    local_40 = FUN_145975a3e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"OakMatchmakingSubsystem",&DAT_14cbacc08,&DAT_148c31a7a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbacc08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14106072c FUN_14106072c body=325 status=ok
// SIG undefined FUN_14106072c(void)

void FUN_14106072c(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  lVar7 = param_1[0x11];
  if ((longlong)(int)lVar7 != 0) {
    plVar1 = param_1 + 0x10;
    lVar3 = param_1[0x10];
    lVar10 = 0;
    do {
      cVar4 = FUN_14069eaf4(lVar3 + lVar10,param_2);
      if (cVar4 != '\0') {
        uVar8 = (int)(lVar10 >> 3) * -0x55555555;
        if ((int)uVar8 < 0) {
          return;
        }
        if ((int)param_1[0x11] <= (int)uVar8) {
          return;
        }
        lVar7 = (ulonglong)(uVar8 & 0x7fffffff) * 0x18;
        puVar2 = (uint *)(*plVar1 + 0x10 + lVar7);
        *puVar2 = *puVar2 & ~param_3;
        if (*(int *)(*plVar1 + 0x10 + lVar7) != 0) {
          return;
        }
        lVar7 = *plVar1 + lVar7;
        if (*(longlong *)(lVar7 + 8) != 0) {
          (**(code **)(*param_1 + 0x38))(param_1,param_2,lVar7 + 8);
        }
        iVar5 = (int)param_1[0x11];
        iVar9 = ~uVar8 + iVar5;
        if (iVar9 != 0) {
          iVar6 = 1;
          if (iVar9 < 1) {
            iVar6 = iVar9;
          }
          memmove((void *)(param_1[0x10] + (ulonglong)(uVar8 & 0x7fffffff) * 0x18),
                  (void *)(param_1[0x10] + (longlong)(iVar5 - iVar6) * 0x18),(longlong)iVar6 * 0x18)
          ;
          iVar5 = (int)param_1[0x11];
        }
        *(int *)(param_1 + 0x11) = iVar5 + -1;
        FUN_1410608a2(plVar1);
        return;
      }
      lVar10 = lVar10 + 0x18;
    } while ((longlong)(int)lVar7 * 0x18 != lVar10);
  }
  return;
}



// FUNCTION 141060872 FUN_141060872 body=47 status=ok
// SIG undefined FUN_141060872(void)

undefined8 FUN_141060872(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1410611e2();
  if ((lVar1 != 0) && (*param_3 != 0)) {
    uVar2 = FUN_14480f766(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1410608a2 FUN_1410608a2 body=158 status=ok
// SIG undefined FUN_1410608a2(void)

void FUN_1410608a2(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x18)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
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



// FUNCTION 141060940 FUN_141060940 body=523 status=ok
// SIG undefined FUN_141060940(void)

void FUN_141060940(longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  uint *puVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
      if ((longlong)(int)param_1[0x11] != 0) {
        puVar9 = (uint *)(param_1[0x10] + 0x10);
        lVar5 = (longlong)(int)param_1[0x11] * 0x18;
        do {
          cVar3 = FUN_14069eaf4(puVar9 + -4,param_2);
          if (cVar3 != '\0') {
            puVar7 = puVar9 + -4;
            if (puVar7 != (uint *)0x0) {
              uVar4 = *puVar9;
              if (uVar4 != 0) goto LAB_141060a77;
              goto LAB_141060a4e;
            }
            break;
          }
          puVar9 = puVar9 + 6;
          lVar5 = lVar5 + -0x18;
        } while (lVar5 != 0);
      }
      iVar2 = (int)param_1[0x11];
      lVar5 = (longlong)iVar2;
      *(uint *)(param_1 + 0x11) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x8c) < iVar2 + 1U) {
        FUN_141060b4c(param_1 + 0x10,iVar2);
      }
      lVar1 = param_1[0x10];
      *(undefined8 *)(lVar1 + lVar5 * 0x18) = 0;
      uVar4 = *(uint *)(param_2 + 0xc);
      *(uint *)(lVar1 + lVar5 * 0x18) = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      puVar7 = (uint *)(lVar1 + lVar5 * 0x18);
      uVar4 = *(uint *)(lVar8 + 0x10);
      if (*(uint *)(lVar8 + 0x10) == 0) {
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
        uVar4 = *(uint *)(lVar8 + 0x10);
        bVar10 = uVar4 == 0;
        if (bVar10) {
          *(uint *)(lVar8 + 0x10) = uVar6;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar4 = uVar6;
        }
      }
      puVar7[1] = uVar4;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar9 = puVar7 + 4;
      puVar7[4] = 0;
LAB_141060a4e:
      if ((*(byte *)(param_1 + 3) & 2) == 0) {
        uVar4 = 0;
      }
      else {
        (**(code **)(*param_1 + 0x30))(param_1,&local_48,param_2);
        *(undefined8 *)(puVar7 + 2) = local_48;
        uVar4 = *puVar9;
      }
LAB_141060a77:
      *puVar9 = uVar4 | param_3;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141060b4c FUN_141060b4c body=370 status=ok
// SIG undefined FUN_141060b4c(void)

void FUN_141060b4c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141060bd5;
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
LAB_141060bd5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 141060cbe FUN_141060cbe body=193 status=ok
// SIG undefined FUN_141060cbe(void)

ulonglong FUN_141060cbe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = param_1;
  lVar4 = FUN_14106179a();
  if (lVar4 == 0) {
    bVar2 = 0;
    goto LAB_141060d00;
  }
  lVar8 = *(longlong *)(param_1 + 0xa8);
  lVar5 = *(longlong *)(lVar8 + 0x10);
  if (lVar5 == 0) {
    uVar6 = FUN_145c05732();
    lVar5 = FUN_14477b664(uVar6);
    *(longlong *)(lVar8 + 0x10) = lVar5;
  }
  lVar7 = *(longlong *)(lVar8 + 0x18);
  if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*(longlong *)(lVar8 + 8) != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_141060d7b:
      lVar7 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar3 == '\0') goto LAB_141060d7b;
      uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar8 + 8));
    }
    *(longlong *)(lVar8 + 0x18) = lVar7;
  }
  lVar8 = lVar4;
  bVar2 = FUN_141060d80(lVar4,lVar7,param_3);
LAB_141060d00:
  return CONCAT71((int7)((ulonglong)lVar8 >> 8),lVar4 != 0 & bVar2) & 0xffffffff;
}



// FUNCTION 141060d80 FUN_141060d80 body=199 status=ok
// SIG undefined FUN_141060d80(void)

byte FUN_141060d80(longlong param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x100);
  if (*(uint *)(param_1 + 0x100) != *(uint *)(param_1 + 300)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = param_1 + 0x130;
    if (*(ulonglong *)(param_1 + 0x138) != 0) {
      uVar4 = *(ulonglong *)(param_1 + 0x138);
    }
    iVar2 = *(int *)(uVar4 + (ulonglong)(*(int *)(param_1 + 0x140) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar2 != -1) {
      uVar4 = *(ulonglong *)(param_1 + 0xf8);
      do {
        puVar1 = (ulonglong *)(uVar4 + (longlong)iVar2 * 0x28);
        if (*puVar1 == param_2) {
          bVar5 = 0;
          if (puVar1 != (ulonglong *)0x0) {
            if (puVar1 != (ulonglong *)&DAT_fffffffffffffff8) {
              bVar5 = 1;
              if (*param_3 == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = FUN_14480f766();
              }
            }
            goto LAB_141060e2a;
          }
          break;
        }
        iVar2 = (int)puVar1[4];
      } while (iVar2 != -1);
    }
  }
  bVar5 = 0;
LAB_141060e2a:
  return bVar5 & (byte)uVar4;
}



// FUNCTION 141060e48 FUN_141060e48 body=921 status=ok
// SIG undefined FUN_141060e48(void)

undefined8 * FUN_141060e48(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar8 = (longlong *)FUN_1410611e2(param_1,param_3);
  if (plVar8 == (longlong *)0x0) {
    *param_2 = 0;
    goto LAB_141061016;
  }
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,4,0x10);
  local_40 = 4;
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 == (longlong *)0x0) {
LAB_1410610b7:
    *local_48 = (longlong)&PTR_LAB_14b3e9ef0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_48[2] = lVar11;
    *local_48 = (longlong)&PTR_FUN_14b427af0;
    local_48[3] = 0;
    local_48[4] = 0;
    local_48[5] = (longlong)FUN_140903c00;
    *(undefined4 *)(local_48 + 6) = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1410610b7;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar13 = iVar6 == iVar7;
      if (bVar13) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar13);
    lVar4 = *(longlong *)(param_1 + 0x40);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_48 = (longlong)&PTR_LAB_14b3e9ef0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_48[2] = lVar12;
    *local_48 = (longlong)&PTR_FUN_14b427af0;
    local_48[3] = lVar4;
    local_48[4] = (longlong)plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_48[5] = (longlong)FUN_140903c00;
    *(undefined4 *)(local_48 + 6) = 0;
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
  *param_2 = 0;
  if (((local_40 == 0) || (local_48 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_48 + 0x30))(), cVar5 == '\0')) {
    if (local_40 != 0) {
      if (local_48 == (longlong *)0x0) goto LAB_141061016;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_141061000;
    }
  }
  else {
    if (*(int *)((longlong)plVar8 + 0x14) < 1) {
      iVar6 = (int)plVar8[1];
      iVar7 = (int)plVar8[2] + -1;
      *(int *)(plVar8 + 2) = iVar7;
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
        if (0 < iVar6) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar8 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar8 + (longlong)iVar10 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar8,iVar10);
              FUN_14005b248(plVar8);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar7 = (int)plVar8[1];
          } while (iVar10 < iVar7);
        }
        iVar10 = 2;
        if (2 < iVar7 * 2) {
          iVar10 = iVar7 * 2;
        }
        *(int *)(plVar8 + 2) = iVar10;
        if ((iVar10 < iVar6) && (*(int *)((longlong)plVar8 + 0xc) != iVar7)) {
          FUN_14045812c();
        }
      }
    }
    uVar9 = 0;
    if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x38))(local_48,&local_38);
      uVar9 = local_38;
    }
    *param_2 = uVar9;
    iVar6 = (int)plVar8[1];
    *(uint *)(plVar8 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)plVar8 + 0xc) < iVar6 + 1U) {
      FUN_1447a71f6(plVar8,iVar6);
    }
    lVar4 = *plVar8;
    lVar11 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar4 + lVar11) = 0;
    *(undefined4 *)(lVar4 + 8 + lVar11) = 0;
    *(longlong **)(lVar4 + lVar11) = local_48;
    local_48 = (longlong *)0x0;
    *(int *)(lVar4 + 8 + lVar11) = local_40;
LAB_141061000:
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141061016:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1410611e2 FUN_1410611e2 body=220 status=ok
// SIG undefined FUN_1410611e2(void)

longlong FUN_1410611e2(longlong param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0xa8) + 8);
  if (3 < bVar1) {
    if (bVar1 - 4 < 2) {
      if (param_2 == 0) {
        return 0;
      }
      uVar3 = FUN_144a7b040();
      plVar4 = (longlong *)FUN_144718840(param_2,uVar3);
      if (plVar4 == (longlong *)0x0) {
        return 0;
      }
      lVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
      if (lVar5 == 0) {
        return 0;
      }
      cVar2 = *(char *)(*(longlong *)(param_1 + 0xa8) + 8);
      if (cVar2 != '\x04') {
        if (cVar2 != '\x05') {
          return 0;
        }
        return lVar5 + 0x120;
      }
      return lVar5 + 0xf8;
    }
    if (bVar1 != 6) {
      return 0;
    }
  }
  if (param_2 != 0) {
    uVar3 = FUN_1403ec9c0();
    plVar4 = (longlong *)FUN_144718840(param_2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0xa8) + 8);
      if (((ulonglong)bVar1 < 7) && ((0x4fU >> (bVar1 & 0x1f) & 1) != 0)) {
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        return lVar5 + *(longlong *)(&DAT_14b42aa38 + (ulonglong)bVar1 * 8);
      }
    }
  }
  return 0;
}



// FUNCTION 1410612be FUN_1410612be body=784 status=ok
// SIG undefined FUN_1410612be(void)

undefined8 * FUN_1410612be(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar8 = FUN_14106179a(param_1,param_3);
  if (lVar8 == 0) {
    *param_2 = 0;
  }
  else {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,4,0x10);
    local_38 = 4;
    plVar3 = *(longlong **)(param_1 + 0x48);
    if (plVar3 == (longlong *)0x0) {
LAB_1410614be:
      *local_40 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_40[2] = lVar11;
      *local_40 = &PTR_FUN_14b427fc0;
      local_40[3] = 0;
      local_40[4] = 0;
      local_40[5] = FUN_140f7331e;
      *(undefined4 *)(local_40 + 6) = 0;
    }
    else {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_1410614be;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar12 = iVar7 == iVar5;
        if (bVar12) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar12);
      uVar9 = *(undefined8 *)(param_1 + 0x40);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *local_40 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_40[2] = lVar11;
      *local_40 = &PTR_FUN_14b427fc0;
      local_40[3] = uVar9;
      local_40[4] = plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      local_40[5] = FUN_140f7331e;
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
    lVar4 = *(longlong *)(param_1 + 0xa8);
    lVar11 = *(longlong *)(lVar4 + 0x10);
    if (lVar11 == 0) {
      uVar9 = FUN_145c05732();
      lVar11 = FUN_14477b664(uVar9);
      *(longlong *)(lVar4 + 0x10) = lVar11;
    }
    lVar10 = *(longlong *)(lVar4 + 0x18);
    if (((lVar10 == 0) && (lVar10 = 0, lVar11 != 0)) && (*(longlong *)(lVar4 + 8) != 0)) {
      plVar3 = *(longlong **)(lVar11 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
        lVar10 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar10 = FUN_144aff482(uVar9,(longlong *)(lVar4 + 8));
      }
      *(longlong *)(lVar4 + 0x18) = lVar10;
    }
    FUN_1410615d0(lVar8,param_2,lVar10,&local_40);
    if (local_38 != 0) {
      if (local_40 == (undefined8 *)0x0) goto LAB_141061466;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141061466:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1410615d0 FUN_1410615d0 body=266 status=ok
// SIG undefined FUN_1410615d0(void)

undefined8 *
FUN_1410615d0(longlong param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_3;
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    uVar1 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    uVar2 = FUN_1410616dc(param_1 + 0xf8,uVar1 >> 0x10 ^ uVar1,&local_40);
    local_38 = (undefined8 *)0x0;
    local_30 = 0;
    FUN_14009d848(&local_38,param_4);
    FUN_1448b6402(uVar2,param_2,&local_38);
    if (local_30 != 0) {
      if (local_38 == (undefined8 *)0x0) goto LAB_141061675;
      (**(code **)*local_38)(local_38,0);
      FUN_1446efa72(&local_38,0,0,0x10);
      local_30 = 0;
    }
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_141061675:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410616dc FUN_1410616dc body=189 status=ok
// SIG undefined FUN_1410616dc(void)

longlong * FUN_1410616dc(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_14106177c;
          break;
        }
        iVar1 = (int)plVar2[4];
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_1457e556a(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x28);
LAB_14106177c:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 14106179a FUN_14106179a body=492 status=ok
// SIG undefined FUN_14106179a(void)

undefined8 FUN_14106179a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
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
  if (param_2 != (longlong *)0x0) {
    if (DAT_14cb652c0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_148715fe1;
      local_50 = FUN_146508b0f;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
    }
    lVar1 = (**(code **)(*param_2 + 0x288))(param_2,DAT_14cb652c0);
    if (lVar1 != 0) {
      if (DAT_14cb652c0 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_148715fe1;
        local_50 = FUN_146508b0f;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0,&DAT_148715fe0);
      }
      lVar2 = FUN_144718840(lVar1,DAT_14cb652c0);
      if ((lVar1 != lVar2) && (lVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14106199a FUN_14106199a body=483 status=ok
// SIG undefined FUN_14106199a(void)

void FUN_14106199a(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x28);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x24 + lVar5 * 0x28) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
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



// FUNCTION 141061b8e FUN_141061b8e body=595 status=ok
// SIG undefined FUN_141061b8e(void)

void FUN_141061b8e(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_108 [32];
  undefined8 **local_e8;
  undefined4 local_e0;
  undefined8 **local_d8;
  undefined4 local_d0;
  longlong local_c8;
  int local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  int local_a0;
  longlong local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined8 **local_60;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88 = param_2;
  lVar4 = (**(code **)(*param_1 + 0x7b8))(param_1,param_2,1,0xffffffff);
  if (lVar4 == 0) {
    param_1 = param_1 + 0x57;
    if (param_2 == 0) {
      (**(code **)(*param_1 + 0x20))(param_1,&local_98);
      local_a8 = local_98;
      local_a0 = local_90;
      FUN_14015671e(&local_68);
      lVar4 = local_98;
      local_b8 = 0;
      uStack_b0 = 0;
      if ((longlong)local_90 != 0) {
        lVar5 = 0;
        do {
          local_70 = *(undefined8 *)(lVar4 + lVar5);
          local_78 = 1;
          local_80 = &local_70;
          cVar2 = FUN_144b06fd6(local_50,&local_80);
          uVar1 = uStack_b0;
          if (cVar2 == '\0') {
            lVar6 = (longlong)(int)uStack_b0;
            uVar3 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar3);
            if (uStack_b0._4_4_ < uVar3) {
              FUN_14075a758(&local_b8,uVar1 & 0xffffffff);
            }
            *(undefined8 *)(local_b8 + lVar6 * 8) = *(undefined8 *)(lVar4 + lVar5);
          }
          lVar5 = lVar5 + 8;
        } while ((longlong)local_90 * 8 != lVar5);
      }
      if (local_98 != 0) {
        FUN_1400020a8(local_98);
      }
      local_98 = local_b8;
      local_90 = (int)uStack_b0;
      local_8c = uStack_b0._4_4_;
      local_c8 = local_b8;
      local_c0 = (int)uStack_b0;
      FUN_146e20bba(local_50);
      FUN_1448635f4(&local_68);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      local_80 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,&local_88);
      if (local_80 != (undefined8 *)0x0) {
        local_d0 = 1;
        local_d8 = &local_80;
        FUN_14015671e(&local_68);
        local_e0 = 1;
        local_e8 = &local_80;
        FUN_146e20bba(local_50);
        FUN_1448635f4(&local_68);
      }
    }
  }
  else {
    local_60 = &local_80;
    local_68 = &LAB_14362218a;
    FUN_144966906(lVar4 + 0x138);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141061de2 FUN_141061de2 body=40 status=ok
// SIG undefined FUN_141061de2(void)

undefined8 FUN_141061de2(undefined8 param_1,int param_2)

{
  FUN_141061e0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141061e0a FUN_141061e0a body=355 status=ok
// SIG undefined FUN_141061e0a(void)

void FUN_141061e0a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae92bb0;
  param_1[5] = &PTR_FUN_14ae93630;
  param_1[6] = &PTR_LAB_14ae93670;
  param_1[0x55] = &PTR_FUN_14ae936c0;
  param_1[0x56] = &PTR_FUN_14ae93740;
  param_1[0x57] = &PTR_FUN_14ae93750;
  *(undefined4 *)(param_1 + 0x101) = 0;
  if (param_1[0x100] != 0) {
    FUN_1400020a8();
  }
  FUN_141061fc6(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xf7) = 0;
  if (param_1[0xf6] != 0) {
    FUN_1400020a8();
  }
  FUN_141061f6e(param_1 + 0xee);
  if (param_1[0xf2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xee] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xde] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xdc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd8] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e32c(param_1);
  return;
}



// FUNCTION 141061f6e FUN_141061f6e body=88 status=ok
// SIG undefined FUN_141061f6e(void)

void FUN_141061f6e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 141061fc6 FUN_141061fc6 body=118 status=ok
// SIG undefined FUN_141061fc6(void)

void FUN_141061fc6(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 14106203c FUN_14106203c body=813 status=ok
// SIG undefined FUN_14106203c(void)

void FUN_14106203c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined8 local_30;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_24);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_24 = (undefined4)uVar2;
      uStack_20 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_24);
    }
  }
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_30);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_30 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_30);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uStack_20 = (undefined4)local_30;
  uStack_1c = (undefined4)((ulonglong)local_30 >> 0x20);
  FUN_14106236a(param_1,local_24,1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14106236a FUN_14106236a body=682 status=ok
// SIG undefined FUN_14106236a(void)

void FUN_14106236a(longlong *param_1,int param_2,undefined1 param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_1[0xc] != 0) {
    plVar9 = (longlong *)param_1[0xb];
    lVar6 = (longlong)(int)param_1[0xc] << 5;
    do {
      if (*(int *)(*plVar9 + 8) == param_2) {
        if (plVar9 != (longlong *)0x0) {
          if (plVar9[2] == 0) {
            FUN_146211c74(*plVar9,&local_68);
            plVar1 = local_60;
            if (local_60 == (longlong *)0x0) {
              plVar9[2] = local_68;
              plVar10 = (longlong *)plVar9[3];
              if (plVar10 != (longlong *)0x0) {
                plVar9[3] = 0;
LAB_141062466:
                LOCK();
                plVar1 = plVar10 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar10)(plVar10);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar10 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  iVar5 = *piVar2;
                  UNLOCK();
joined_r0x000141062458:
                  if (iVar5 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
            }
            else {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
              plVar9[2] = local_68;
              plVar10 = (longlong *)plVar9[3];
              if (local_60 == plVar10) {
                LOCK();
                plVar10 = local_60 + 1;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)*plVar10 == 0) {
                  (**(code **)*local_60)(local_60);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar1 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  iVar5 = *piVar2;
                  UNLOCK();
                  plVar10 = plVar1;
                  goto joined_r0x000141062458;
                }
              }
              else {
                plVar9[3] = (longlong)local_60;
                if (plVar10 != (longlong *)0x0) goto LAB_141062466;
              }
            }
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
            lVar6 = plVar9[2];
            if (*(int *)(lVar6 + 0x18) != 3) {
              FUN_1446efa72((longlong *)(lVar6 + 0x10),0,3,0x10);
              *(undefined4 *)(lVar6 + 0x18) = 3;
            }
            puVar4 = *(undefined8 **)(lVar6 + 0x10);
            *puVar4 = &PTR_LAB_14b42bd30;
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
            puVar4[2] = lVar7;
            *puVar4 = &PTR_FUN_14b42bcc0;
            puVar4[3] = 0;
            if (param_1 == (longlong *)0x0) {
              iVar5 = 0;
            }
            else {
              uVar3 = *(uint *)((longlong)param_1 + 0xc);
              *(uint *)(puVar4 + 3) = uVar3;
              if ((int)uVar3 < DAT_14c9647dc) {
                lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
              }
              else {
                lVar6 = 0;
              }
              iVar5 = *(int *)(lVar6 + 0x10);
              if (*(int *)(lVar6 + 0x10) == 0) {
                LOCK();
                iVar5 = DAT_14c964868 + 1;
                UNLOCK();
                iVar8 = DAT_14c964868 + 1;
                bVar11 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar5;
                if (bVar11) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar8);
                }
                LOCK();
                iVar5 = *(int *)(lVar6 + 0x10);
                bVar11 = iVar5 == 0;
                if (bVar11) {
                  *(int *)(lVar6 + 0x10) = iVar8;
                  iVar5 = 0;
                }
                UNLOCK();
                if (bVar11) {
                  iVar5 = iVar8;
                }
              }
            }
            *(int *)((longlong)puVar4 + 0x1c) = iVar5;
            puVar4[4] = FUN_1411c3fda;
          }
          if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
            local_68 = param_1[4];
          }
          else {
            local_68 = 0;
          }
          if (*param_4 == -1) {
            local_4c = 0xffffffff;
          }
          else {
            local_4c = *(undefined8 *)param_4;
          }
          local_60 = param_1;
          local_58 = plVar9;
          local_50 = param_3;
          FUN_14897488e(plVar9[2],&local_68);
        }
        break;
      }
      plVar9 = plVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  if (*param_4 != -1) {
    param_4[0] = -1;
    param_4[1] = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141062616 FUN_141062616 body=38 status=ok
// SIG undefined FUN_141062616(void)

undefined8 FUN_141062616(undefined8 param_1,int param_2)

{
  FUN_14106263c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14106263c FUN_14106263c body=79 status=ok
// SIG undefined FUN_14106263c(void)

void FUN_14106263c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f22080;
  if (param_1[5] != -1) {
    Ordinal_3();
    param_1[5] = 0xffffffffffffffff;
  }
  *param_1 = &PTR_LAB_149f21780;
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14106268c FUN_14106268c body=907 status=ok
// SIG undefined FUN_14106268c(void)

void FUN_14106268c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar1 = param_1 + -0x390;
    lVar8 = FUN_1447210f0(lVar1);
    if (((lVar8 != 0) && (lVar8 = *(longlong *)(param_1 + 0x110), lVar8 != 0)) &&
       ((*(byte *)(lVar8 + 0x9c) & 8) == 0)) {
      FUN_141062a52(lVar8,0);
    }
    param_2 = (longlong *)*param_2;
    if (param_2 != (longlong *)0x0) {
      lVar8 = (**(code **)(*param_2 + 8))(param_2);
      lVar9 = FUN_141062a18();
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
          lVar9 + 0x30)) {
        (**(code **)(**(longlong **)(param_1 + 0x110) + 0x8c8))
                  (*(longlong **)(param_1 + 0x110),(int)param_2[0x12]);
        (**(code **)(**(longlong **)(param_1 + 0x110) + 0x898))
                  (*(longlong **)(param_1 + 0x110),*(undefined4 *)((longlong)param_2 + 0xbc));
        (**(code **)(**(longlong **)(param_1 + 0x110) + 0x8a8))
                  (*(longlong **)(param_1 + 0x110),(int)param_2[0x17]);
        plVar10 = (longlong *)(param_1 + 0x120);
        cVar5 = FUN_140cb4e52(plVar10);
        if (cVar5 == '\0') {
          lVar8 = param_2[0x13];
          uVar11 = FUN_14477b664(param_2[0x14]);
          lVar12 = FUN_14477b664(uVar11);
          lVar9 = param_2[0x15];
          lVar3 = param_2[0x16];
          if (*plVar10 != lVar8) {
            *(undefined8 *)(param_1 + 0x130) = 0;
          }
          *(longlong *)(param_1 + 0x120) = lVar8;
          if (*(longlong *)(param_1 + 0x128) != lVar12) {
            *(undefined8 *)(param_1 + 0x130) = 0;
          }
          uVar11 = FUN_14477b664(lVar12);
          uVar11 = FUN_14477b664(uVar11);
          *(undefined8 *)(param_1 + 0x128) = uVar11;
          *(longlong *)(param_1 + 0x130) = lVar9;
          *(longlong *)(param_1 + 0x138) = lVar3;
        }
        cVar5 = FUN_140cb4e52(plVar10);
        if (cVar5 != '\0') {
          plVar10 = *(longlong **)(param_1 + 0x110);
          fVar17 = 0.0;
          uVar15 = 0;
          if (plVar10 == (longlong *)0x0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            cVar5 = (**(code **)(*plVar10 + 0x480))(plVar10,0);
            plVar10 = *(longlong **)(param_1 + 0x110);
            if (cVar5 != '\0') {
              fVar17 = (float)(**(code **)(*plVar10 + 0x8d8))();
              fVar17 = fVar17 + 0.0;
              plVar10 = *(longlong **)(param_1 + 0x110);
            }
          }
          *(float *)(param_1 + 0x164) = fVar17;
          (**(code **)(*plVar10 + 0x718))(plVar10,1);
          pbVar2 = (byte *)(param_1 + -0x183);
          FUN_140e15cbe(&local_70);
          if (lVar1 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(uint *)(param_1 + -900);
            if ((int)uVar14 < DAT_14c9647dc) {
              lVar8 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
            }
            else {
              lVar8 = 0;
            }
            uVar7 = *(uint *)(lVar8 + 0x10);
            if (*(uint *)(lVar8 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              uVar13 = DAT_14c964868 + 1;
              bVar16 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar16) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar13);
              }
              LOCK();
              uVar7 = *(uint *)(lVar8 + 0x10);
              bVar16 = uVar7 == 0;
              if (bVar16) {
                *(uint *)(lVar8 + 0x10) = uVar13;
                uVar7 = 0;
              }
              UNLOCK();
              if (bVar16) {
                uVar7 = uVar13;
              }
            }
            uVar15 = (ulonglong)uVar7;
            if (local_70 == 0) {
              local_70 = 0;
            }
            else if (uVar7 == 0) {
              uVar15 = 0;
            }
            else if (((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) &&
                    ((plVar10 = (longlong *)
                                ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
                     plVar10 != (longlong *)0x0 &&
                     (((*(uint *)(plVar10 + 2) == uVar7 &&
                       ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) && (*plVar10 != 0)))))) {
              FUN_1400796d0(*(undefined8 *)(*plVar10 + 0x10),local_70,1);
            }
          }
          local_60 = (ulonglong)uVar14 | uVar15 << 0x20;
          local_58 = local_70;
          FUN_14067d554(pbVar2,&local_68);
          bVar6 = FUN_140819c20(lVar1,local_68,&local_60);
          *pbVar2 = *pbVar2 | bVar6;
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141062a18 FUN_141062a18 body=57 status=ok
// SIG undefined FUN_141062a18(void)

void FUN_141062a18(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb68e98 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb68e98 = FUN_140002ddd(FUN_14651e77a,uVar1,L"GoreLimbActorDef");
  }
  return;
}



// FUNCTION 141062a52 FUN_141062a52 body=1403 status=ok
// SIG undefined FUN_141062a52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141062a52(longlong *param_1,byte param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  longlong *plVar9;
  ulonglong uVar10;
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
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[0x16] == 0) goto LAB_141062d5e;
  bVar3 = *(byte *)((longlong)param_1 + 0x9c);
  if (((bVar3 & 8) == 0) && (*(longlong *)(param_1[0x16] + 0x260) != 0)) {
    cVar2 = (**(code **)(*param_1 + 0x358))(param_1);
    if (cVar2 == '\0') {
      bVar3 = *(byte *)((longlong)param_1 + 0x9c);
      goto LAB_141062c16;
    }
    if (param_1 == (longlong *)0x0) {
LAB_141062ae6:
      plVar9 = (longlong *)0x0;
    }
    else {
      if (DAT_14cac6e60 == 0) {
        local_50 = &local_38;
        local_38 = FUN_144a7958c;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_142b47bc4;
        local_58 = &LAB_1478989f1;
        local_60 = (code *)&LAB_146391124;
        local_68 = L"Engine";
        local_70 = 0x10000000000;
        local_78 = 0x10000005;
        local_80 = 0x10;
        local_88 = 0x620;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if ((*(int *)(param_1[2] + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) ||
         (plVar9 = param_1,
         *(longlong *)
          (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) !=
         DAT_14cac6e60 + 0x30)) goto LAB_141062ae6;
    }
    if ((param_2 != 0) && (cVar2 = FUN_140196270(plVar9), cVar2 != '\0')) goto LAB_141062d5e;
    lVar4 = param_1[0x16];
    if ((lVar4 == 0) &&
       (((param_1[0x15] == 0 || ((*(uint *)(param_1[0x15] + 8) & 0x10) != 0)) ||
        (lVar4 = FUN_1447210f0(), lVar4 == 0)))) {
      lVar4 = param_1[4];
      if (lVar4 != 0) {
        if (DAT_14cb10130 == 0) {
          local_50 = &local_38;
          local_38 = FUN_140754f84;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_14081d0ea;
          local_58 = &LAB_147da9a76;
          local_60 = FUN_1409f3105;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x990;
          FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
        }
        if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
        goto LAB_141062b34;
      }
    }
    else {
LAB_141062b34:
      if ((((byte)(plVar9 != (longlong *)0x0 & param_2 &
                  DAT_14cad0ec0 != 0 & *(byte *)(lVar4 + 0x120)) == 1) &&
          (((*(byte *)((longlong)plVar9 + 0x2d3) & 8) == 0 &&
           (lVar4 = (**(code **)(*plVar9 + 0x7a0))(plVar9), lVar4 != 0)))) &&
         ((*(byte *)(lVar4 + 0xb9) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
      }
    }
    (**(code **)(*param_1 + 0x348))(param_1);
    uVar5 = (ulonglong)DAT_14cad0f40;
    if ((longlong)uVar5 < 1) goto LAB_141062d5e;
    bVar8 = false;
    DAT_14cad0f4c = DAT_14cad0f4c + 1;
    do {
      lVar4 = uVar5 * 0x10 + -8;
      uVar10 = uVar5;
      while (((*(int *)(DAT_14cad0f38 + lVar4) != 0 &&
              (plVar9 = *(longlong **)(DAT_14cad0f38 + -8 + lVar4), plVar9 != (longlong *)0x0)) &&
             (cVar2 = (**(code **)(*plVar9 + 0x60))(plVar9,param_1), cVar2 != '\0'))) {
        lVar4 = lVar4 + -0x10;
        bVar1 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar1) {
          DAT_14cad0f4c = DAT_14cad0f4c + -1;
          if (bVar8) goto LAB_141062dfb;
          goto LAB_141062d5e;
        }
      }
      uVar5 = uVar10 - 1;
      bVar8 = true;
    } while (1 < uVar10);
    DAT_14cad0f4c = DAT_14cad0f4c + -1;
LAB_141062dfb:
    iVar6 = DAT_14cad0f40;
    if (0 < DAT_14cad0f4c) goto LAB_141062d5e;
    if (0 < DAT_14cad0f40) {
      iVar7 = 0;
      do {
        if (((*(int *)(DAT_14cad0f38 + 8 + (longlong)iVar7 * 0x10) == 0) ||
            (plVar9 = *(longlong **)(DAT_14cad0f38 + (longlong)iVar7 * 0x10),
            plVar9 == (longlong *)0x0)) || (cVar2 = (**(code **)(*plVar9 + 0x28))(), cVar2 != '\0'))
        {
          FUN_14005b288(&DAT_14cad0f38,iVar7);
          FUN_14005b248(&DAT_14cad0f38);
        }
        else {
          iVar7 = iVar7 + 1;
        }
      } while (iVar7 < DAT_14cad0f40);
    }
  }
  else {
LAB_141062c16:
    if (((bVar3 & 0x10) == 0) ||
       (*(byte *)((longlong)param_1 + 0x9c) = bVar3 & 0xef,
       *(longlong *)(param_1[0x16] + 0x260) == 0)) goto LAB_141062d5e;
    uVar5 = (ulonglong)DAT_14cad0f40;
    if ((longlong)uVar5 < 1) goto LAB_141062d5e;
    bVar8 = false;
    DAT_14cad0f4c = DAT_14cad0f4c + 1;
    do {
      lVar4 = uVar5 * 0x10 + -8;
      uVar10 = uVar5;
      while (((*(int *)(DAT_14cad0f38 + lVar4) != 0 &&
              (plVar9 = *(longlong **)(DAT_14cad0f38 + -8 + lVar4), plVar9 != (longlong *)0x0)) &&
             (cVar2 = (**(code **)(*plVar9 + 0x60))(plVar9,param_1), cVar2 != '\0'))) {
        lVar4 = lVar4 + -0x10;
        bVar1 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar1) {
          DAT_14cad0f4c = DAT_14cad0f4c + -1;
          if (!bVar8) goto LAB_141062d5e;
          goto LAB_141062cd6;
        }
      }
      uVar5 = uVar10 - 1;
      bVar8 = true;
    } while (1 < uVar10);
    DAT_14cad0f4c = DAT_14cad0f4c + -1;
LAB_141062cd6:
    iVar6 = DAT_14cad0f40;
    if (0 < DAT_14cad0f4c) goto LAB_141062d5e;
    if (0 < DAT_14cad0f40) {
      iVar7 = 0;
      do {
        if (((*(int *)(DAT_14cad0f38 + 8 + (longlong)iVar7 * 0x10) == 0) ||
            (plVar9 = *(longlong **)(DAT_14cad0f38 + (longlong)iVar7 * 0x10),
            plVar9 == (longlong *)0x0)) || (cVar2 = (**(code **)(*plVar9 + 0x28))(), cVar2 != '\0'))
        {
          FUN_14005b288(&DAT_14cad0f38,iVar7);
          FUN_14005b248(&DAT_14cad0f38);
        }
        else {
          iVar7 = iVar7 + 1;
        }
      } while (iVar7 < DAT_14cad0f40);
    }
  }
  _DAT_14cad0f48 = 2;
  if (2 < DAT_14cad0f40 * 2) {
    _DAT_14cad0f48 = DAT_14cad0f40 * 2;
  }
  if ((_DAT_14cad0f48 < iVar6) && (DAT_14cad0f44 != DAT_14cad0f40)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
LAB_141062d5e:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141062ffe FUN_141062ffe body=923 status=ok
// SIG undefined FUN_141062ffe(void)

void FUN_141062ffe(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined1 auStack_d8 [47];
  char local_a9;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a9 = param_3;
  local_98 = param_2;
  cVar6 = (**(code **)(*param_1 + 0x300))();
  local_a8 = param_1;
  if (cVar6 == '\0') {
    local_a0 = param_1 + 0x51;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_a0;
    if ((int)param_1[0x54] == 0) {
      uVar16 = 1;
      uVar13 = 0xffffffff;
      iVar14 = 0;
      iVar12 = 0;
      iVar9 = 0;
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar16 = (ulonglong)local_90 >> 0x20;
      iVar14 = (int)param_1[0x54];
      iVar10 = (int)local_90;
      uVar13 = (uint)uStack_80;
      iVar9 = uStack_80._4_4_;
      iVar12 = (uint)local_78;
    }
    plVar1 = local_88;
    if (iVar9 != iVar14 || local_88 != local_a0) {
      do {
        lVar7 = param_1[0x4f];
        lVar8 = *(longlong *)(lVar7 + 0x10 + (longlong)iVar9 * 0x20);
        if (lVar8 != 0) {
          if (local_a9 != '\0') {
            FUN_144837e54(lVar8,0);
            lVar8 = *(longlong *)(lVar7 + (longlong)iVar9 * 0x20 + 0x10);
          }
          if (((*(byte **)(lVar8 + 0x48) != (byte *)0x0) &&
              ((**(byte **)(lVar8 + 0x48) & 0x6b) == 3)) &&
             (plVar15 = *(longlong **)(lVar8 + 0x30), plVar15 != (longlong *)0x0)) {
            lVar7 = (**(code **)(*plVar15 + 8))(plVar15);
            lVar8 = FUN_14106339a();
            if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                lVar8 + 0x30)) {
              (*(code *)*local_98)(local_98[1],plVar15);
            }
          }
        }
        uVar13 = uVar13 & ~(uint)uVar16;
        plVar15 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar15 = plVar1;
        }
        iVar3 = (int)plVar1[3];
        lVar7 = (longlong)iVar10;
        uVar11 = *(uint *)((longlong)plVar15 + lVar7 * 4) & uVar13;
        if (uVar11 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar5 = iVar9;
          if (iVar9 < iVar10) {
            iVar5 = iVar10;
          }
          if (iVar10 < iVar9) {
            lVar8 = 0;
            do {
              uVar11 = *(uint *)((longlong)plVar15 + lVar8 * 4 + lVar7 * 4 + 4);
              if (uVar11 != 0) {
                iVar10 = iVar10 + (int)lVar8 + 1;
                uVar13 = 0xffffffff;
                goto LAB_1410631aa;
              }
              iVar12 = iVar12 + 0x20;
              lVar8 = lVar8 + 1;
            } while (iVar5 - lVar7 != lVar8);
            uVar13 = 0xffffffff;
            iVar10 = iVar5;
          }
          iVar10 = iVar10 + 1;
          iVar9 = iVar3;
        }
        else {
LAB_1410631aa:
          uVar16 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar16 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar9 = (iVar12 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar9) {
            iVar9 = iVar3;
          }
        }
        param_1 = local_a8;
      } while (iVar9 != iVar14 || plVar1 != local_a0);
    }
  }
  else {
    plVar15 = param_1 + 0x39;
    plVar1 = param_1 + 0x3b;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar1;
    if ((int)param_1[0x3e] == 0) {
      iVar14 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar14 = (int)local_a8[0x3e];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar7 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar10 = local_78._4_4_;
    local_90 = plVar15;
    if ((local_78._4_4_ != iVar14) || (local_78 = lVar7, plStack_60 != plVar1)) {
      do {
        local_78 = lVar7;
        plVar4 = *(longlong **)(*local_90 + 0x10 + (longlong)iVar10 * 0x20);
        if (plVar4 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar4 + 8))(plVar4);
          lVar8 = FUN_14106339a();
          if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
              lVar8 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar4);
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar10 = local_78._4_4_;
        lVar7 = local_78;
      } while (local_90 != plVar15 || (uStack_80 != plVar1 || local_78._4_4_ != iVar14));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14106339a FUN_14106339a body=57 status=ok
// SIG undefined FUN_14106339a(void)

void FUN_14106339a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb921e8 == 0) {
    uVar1 = FUN_140e19277();
    DAT_14cb921e8 = FUN_140002ddd(FUN_14656c568,uVar1,L"GbxUIViewDef");
  }
  return;
}



// FUNCTION 1410633d4 FUN_1410633d4 body=67 status=ok
// SIG undefined FUN_1410633d4(void)

void FUN_1410633d4(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141063418 FUN_141063418 body=9 status=ok
// SIG undefined FUN_141063418(void)

void FUN_141063418(longlong param_1)

{
  FUN_141063422(param_1 + 0x10);
  return;
}



// FUNCTION 141063422 FUN_141063422 body=542 status=ok
// SIG undefined FUN_141063422(void)

void FUN_141063422(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_14b965580;
  if (((*(int *)(param_1 + 5) != 0) &&
      (uVar3 = *(uint *)((longlong)param_1 + 0x24), -1 < (int)uVar3)) &&
     ((int)uVar3 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 5))) &&
       (((*(uint *)(plVar5 + 1) >> 0x1c & 1) == 0 &&
        (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
      FUN_1402d2016(param_1);
      cVar4 = FUN_144904448(param_1 + 0x20);
      if (cVar4 != '\0') {
        FUN_14072d42a(param_1 + 0x20,0);
      }
      FUN_140b3e76a(param_1 + 0x1e);
      *(undefined1 *)(param_1 + 0x23) = 0;
      FUN_141063640(plVar5,*(undefined4 *)(param_1 + 4));
      if (((int)plVar5[0x167] == 0) && ((int)plVar5[0xe5] == 0)) {
        (**(code **)(*plVar5 + 0x420))(plVar5,0);
      }
    }
  }
  plVar5 = (longlong *)param_1[0x2f];
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
  if (*(char *)(param_1 + 0x24) == '\x01') {
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0xffffffffffffffff;
  if ((param_1[0x1f] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x1f] + 0x50));
  }
  plVar5 = (longlong *)param_1[0x1e];
  if (plVar5 == (longlong *)0x0) goto LAB_141063582;
  *(int *)(plVar5 + 0x21) = (int)plVar5[0x21] + -1;
  if ((int)plVar5[0x26] < 1) {
    FUN_1400847bc(plVar5 + 0x17,0);
    if ((int)plVar5[0x21] == 0) {
      FUN_140087e46(plVar5);
      if (*plVar5 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_141063577;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar5);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar5);
      }
    }
  }
LAB_141063577:
  param_1[0x1e] = 0;
LAB_141063582:
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x19) == '\x01') {
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  if (*(char *)((longlong)param_1 + 0xa4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x9c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  }
  return;
}



// FUNCTION 141063640 FUN_141063640 body=219 status=ok
// SIG undefined FUN_141063640(void)

void FUN_141063640(longlong *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  uint *local_38;
  undefined4 local_30;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = param_2;
  if ((int)param_1[0x119] != 0) {
    uVar1 = *(uint *)(param_1[0x11a] + (longlong)(int)param_2 * 4);
  }
  if ((-1 < (int)uVar1) && (iVar3 = (int)param_1[0x167], (int)uVar1 < iVar3)) {
    iVar2 = ~uVar1 + iVar3;
    if (iVar2 != 0) {
      iVar4 = 1;
      if (iVar2 < 1) {
        iVar4 = iVar2;
      }
      memmove((void *)((ulonglong)uVar1 * 0x10 + param_1[0x166]),
              (void *)((ulonglong)(uint)(iVar3 - iVar4) * 0x10 + param_1[0x166]),
              (longlong)iVar4 << 4);
      iVar3 = (int)param_1[0x167];
    }
    *(int *)(param_1 + 0x167) = iVar3 + -1;
    FUN_141063782(param_1 + 0x166);
  }
  local_38 = &local_24;
  local_30 = 1;
  local_24 = param_2;
  (**(code **)(*param_1 + 0xb08))(param_1,&local_38,1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14106371c FUN_14106371c body=101 status=ok
// SIG undefined FUN_14106371c(void)

void FUN_14106371c(longlong param_1,longlong *param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar4 = 0;
    do {
      iVar1 = *(int *)(lVar2 + lVar4);
      if (*(int *)(param_1 + 0x8c8) != 0) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x8d0) + (longlong)iVar1 * 4);
      }
      FUN_14106388a(param_1,iVar1,0,1,param_3);
      lVar4 = lVar4 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar4);
  }
  return;
}



// FUNCTION 141063782 FUN_141063782 body=264 status=ok
// SIG undefined FUN_141063782(void)

void FUN_141063782(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x800) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
          }
        }
        else {
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x10,4);
    }
  }
  return;
}



// FUNCTION 14106388a FUN_14106388a body=1884 status=ok
// SIG undefined FUN_14106388a(void)

undefined8 FUN_14106388a(longlong *param_1,uint param_2,char param_3,char param_4,char param_5)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  void *_Src;
  longlong lVar10;
  undefined8 unaff_RBP;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_b8 [44];
  uint local_8c;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  uint local_60;
  uint local_5c;
  undefined8 *local_58;
  undefined1 *local_50;
  ulonglong local_48;
  
  uVar11 = (ulonglong)param_2;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_4 == '\0') && ((*(byte *)((longlong)param_1 + 0x7d4) & 8) == 0)) &&
     (*DAT_14cae4e30 == 0)) {
    FUN_147af959c();
    uVar13 = 0;
  }
  else {
    FUN_141064118();
    uVar13 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  }
  uVar14 = ~param_2;
  local_8c = (uint)uVar13;
  if (((param_3 == '\0') && (-1 < (int)param_2)) && ((int)param_2 < (int)param_1[0xe5])) {
    if ((param_5 == '\0') || ((*(byte *)((longlong)param_1 + 0x9e) & 0x40) == 0)) {
      bVar3 = false;
    }
    else {
      if ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0) {
        bVar3 = false;
      }
      else {
        cVar4 = (**(code **)(*param_1 + 0xbd0))();
        bVar3 = true;
        if (cVar4 != '\0') {
          (**(code **)(*param_1 + 3000))();
          bVar3 = true;
        }
      }
      uVar13 = (ulonglong)local_8c;
    }
    iVar15 = (int)param_1[0xe5];
    iVar6 = iVar15 + uVar14;
    if ((char)uVar13 == '\0') {
      if (iVar6 != 0) {
        memmove((void *)(param_1[0xe4] + uVar11 * 0x80),
                (void *)(uVar11 * 0x80 + param_1[0xe4] + 0x80),(longlong)iVar6 << 7);
        iVar15 = (int)param_1[0xe5];
      }
      *(int *)(param_1 + 0xe5) = iVar15 + -1;
      FUN_147b4e7c8();
      iVar6 = (int)param_1[0xf4];
      if ((longlong)iVar6 != 0) {
        iVar15 = (int)param_1[0xf6];
        iVar12 = iVar15 - (iVar6 * param_2 + iVar6);
        if (iVar12 != 0) {
          pvVar7 = (void *)((longlong)(int)(iVar6 * param_2) * 4 + param_1[0xf5]);
          memmove(pvVar7,(void *)((longlong)pvVar7 + (longlong)iVar6 * 4),(longlong)iVar12 << 2);
          iVar15 = (int)param_1[0xf6];
        }
        *(int *)(param_1 + 0xf6) = iVar15 - iVar6;
        FUN_1401fef06();
      }
      iVar6 = (int)param_1[0x10a];
      uVar13 = (ulonglong)local_8c;
      if ((int)param_2 < iVar6) {
        if (iVar6 + uVar14 != 0) {
          memmove((void *)(param_1[0x109] + uVar11 * 4),(void *)(param_1[0x109] + uVar11 * 4 + 4),
                  (longlong)(int)(iVar6 + uVar14) << 2);
          iVar6 = (int)param_1[0x10a];
        }
        *(int *)(param_1 + 0x10a) = iVar6 + -1;
        FUN_147b4e864();
        goto LAB_141063d6c;
      }
    }
    else {
      if (iVar6 != 0) {
        iVar12 = 1;
        if (iVar6 < 1) {
          iVar12 = iVar6;
        }
        memmove((void *)(uVar11 * 0x80 + param_1[0xe4]),
                (void *)((longlong)(iVar15 - iVar12) * 0x80 + param_1[0xe4]),(longlong)iVar12 << 7);
        iVar15 = (int)param_1[0xe5];
      }
      *(int *)(param_1 + 0xe5) = iVar15 + -1;
      iVar6 = (int)param_1[0xf4];
      if (iVar6 != 0) {
        iVar15 = (int)param_1[0xf6];
        iVar12 = (iVar15 - iVar6 * param_2) - iVar6;
        if (iVar6 < iVar12) {
          iVar12 = iVar6;
        }
        if (iVar12 != 0) {
          memmove((void *)(param_1[0xf5] + (longlong)(int)(iVar6 * param_2) * 4),
                  (void *)(param_1[0xf5] + (longlong)(iVar15 - iVar12) * 4),(longlong)iVar12 << 2);
          iVar15 = (int)param_1[0xf6];
        }
        *(int *)(param_1 + 0xf6) = iVar15 - iVar6;
      }
      iVar6 = (int)param_1[0x10a];
      if ((int)param_2 < iVar6) {
        iVar15 = iVar6 + uVar14;
        if (iVar15 != 0) {
          iVar12 = 1;
          if (iVar15 < 1) {
            iVar12 = iVar15;
          }
          memmove((void *)(param_1[0x109] + (ulonglong)param_2 * 4),
                  (void *)(param_1[0x109] + (ulonglong)(uint)(iVar6 - iVar12) * 4),
                  (longlong)iVar12 << 2);
          iVar6 = (int)param_1[0x10a];
        }
        *(int *)(param_1 + 0x10a) = iVar6 + -1;
LAB_141063d6c:
        uVar13 = (ulonglong)local_8c;
      }
    }
    if (bVar3) {
      if ((int)param_1[0xe5] == 0) {
        *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xbf;
        plVar8 = DAT_14caca2b8;
        if (DAT_14caca2c0 == 0) {
          plVar8 = (longlong *)0x0;
        }
        (**(code **)(*plVar8 + 0x58))();
        uVar13 = (ulonglong)local_8c;
      }
      else {
        cVar4 = (**(code **)(*param_1 + 0xbd0))(param_1);
        uVar13 = (ulonglong)local_8c;
        if (cVar4 == '\0') {
          (**(code **)(*param_1 + 0xbc8))(param_1);
        }
      }
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x7d4) & 0x20) == 0) goto LAB_141063a12;
  plVar8 = param_1 + 0xe6;
  iVar15 = (int)param_1[0xe7];
  iVar6 = iVar15 + uVar14;
  if ((char)uVar13 == '\0') {
    if (iVar6 != 0) {
      pvVar7 = (void *)(*plVar8 + (longlong)(int)param_2 * 0x80);
      _Src = (void *)((longlong)(int)param_2 * 0x80 + *plVar8 + 0x80);
      goto LAB_141063b3a;
    }
  }
  else if (iVar6 != 0) {
    iVar12 = 1;
    if (iVar6 < 1) {
      iVar12 = iVar6;
    }
    pvVar7 = (void *)((longlong)(int)param_2 * 0x80 + *plVar8);
    _Src = (void *)((longlong)(iVar15 - iVar12) * 0x80 + *plVar8);
    iVar6 = iVar12;
LAB_141063b3a:
    memmove(pvVar7,_Src,(longlong)iVar6 << 7);
    iVar15 = (int)param_1[0xe7];
  }
  *(int *)(param_1 + 0xe7) = iVar15 + -1;
  FUN_141063fe8(plVar8);
LAB_141063a12:
  uVar1 = *(uint *)(param_1 + 0xe5);
  if ((((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) && (-1 < (int)param_2)) &&
     (iVar6 = (int)param_1[0x108], (int)param_2 < iVar6)) {
    plVar8 = param_1 + 0x107;
    lVar10 = *plVar8;
    uVar13 = (ulonglong)param_2;
    lVar2 = *(longlong *)(lVar10 + uVar13 * 8);
    if (lVar2 != 0) {
      FUN_140156df6(lVar2,0,0);
      lVar2 = *(longlong *)(lVar10 + uVar13 * 8);
      if (lVar2 != 0) {
        FUN_144760d56(lVar2);
        FUN_1400020a8(lVar2);
      }
      *(undefined8 *)(lVar10 + uVar13 * 8) = 0;
      iVar6 = (int)param_1[0x108];
    }
    iVar15 = uVar14 + iVar6;
    if ((char)local_8c == '\x01' && uVar1 != param_2) {
      if (iVar15 != 0) {
        iVar12 = 1;
        if (iVar15 < 1) {
          iVar12 = iVar15;
        }
        memmove((void *)(param_1[0x107] + uVar13 * 8),
                (void *)(param_1[0x107] + (longlong)(iVar6 - iVar12) * 8),(longlong)iVar12 << 3);
        iVar6 = (int)param_1[0x108];
      }
      *(int *)(param_1 + 0x108) = iVar6 + -1;
      FUN_141064088(plVar8);
      lVar10 = *(longlong *)(param_1[0x107] + uVar13 * 8);
      if (lVar10 != 0) {
        *(uint *)(lVar10 + 0xc) = param_2;
      }
    }
    else {
      if (iVar15 != 0) {
        memmove((void *)(param_1[0x107] + uVar13 * 8),(void *)(param_1[0x107] + uVar13 * 8 + 8),
                (longlong)iVar15 << 3);
        iVar6 = (int)param_1[0x108];
      }
      *(int *)(param_1 + 0x108) = iVar6 + -1;
      FUN_141064088(plVar8);
      iVar6 = (int)param_1[0x108];
      if ((int)param_2 < iVar6) {
        do {
          lVar10 = *(longlong *)(*plVar8 + uVar13 * 8);
          if (lVar10 != 0) {
            *(int *)(lVar10 + 0xc) = (int)uVar13;
            iVar6 = (int)param_1[0x108];
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < iVar6);
      }
    }
  }
  if ((longlong)DAT_14cae4f40 != 0) {
    lVar10 = 0;
    do {
      if ((*(int *)(DAT_14cae4f38 + 8 + lVar10) != 0) &&
         (*(longlong *)(DAT_14cae4f38 + lVar10) != 0)) {
        if ((char)local_8c == '\0') {
          local_88 = (undefined8 *)0x0;
          uStack_80 = 0;
          iVar6 = (int)param_1[0xe5] - param_2;
          if (iVar6 < -1) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar6 + 1);
          }
          iVar15 = 0;
          uVar14 = 0;
          if (-1 < iVar6) {
            FUN_147b4e900(&local_88);
            iVar15 = (int)uStack_80;
            uVar14 = uStack_80._4_4_;
          }
          uStack_80 = CONCAT44(uStack_80._4_4_,iVar15 + 1U);
          if (uVar14 < iVar15 + 1U) {
            FUN_147b4e972(&local_88,iVar15);
          }
          lVar10 = (longlong)iVar15;
          *(undefined1 *)((longlong)local_88 + lVar10 * 0xc) = 1;
          *(uint *)((longlong)local_88 + lVar10 * 0xc + 4) = param_2;
          *(undefined4 *)((longlong)local_88 + lVar10 * 0xc + 8) = 0xffffffff;
          if ((int)param_2 < (int)param_1[0xe5]) {
            do {
              uVar13 = uStack_80;
              lVar10 = (longlong)(int)uStack_80;
              uVar14 = (int)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar14);
              if (uStack_80._4_4_ < uVar14) {
                FUN_147b4e972(&local_88,uVar13 & 0xffffffff);
              }
              *(undefined1 *)((longlong)local_88 + lVar10 * 0xc) = 2;
              *(int *)((longlong)local_88 + lVar10 * 0xc + 4) = (int)uVar11;
              uVar14 = (int)uVar11 + 1;
              uVar11 = (ulonglong)uVar14;
              *(uint *)((longlong)local_88 + lVar10 * 0xc + 8) = uVar14;
            } while ((int)uVar14 < (int)param_1[0xe5]);
          }
          local_70 = local_88;
          local_68 = (int)uStack_80;
          FUN_147b4e6d4(param_1);
          puVar9 = local_88;
        }
        else {
          local_58 = (undefined8 *)0x0;
          local_50 = (undefined1 *)0x200000001;
          local_70 = (undefined8 *)CONCAT71(local_70._1_7_,1);
          local_70 = (undefined8 *)CONCAT44(param_2,(undefined4)local_70);
          local_68 = 0xffffffff;
          uVar5 = 1;
          if (uVar1 != param_2) {
            local_50 = &DAT_200000002;
            local_64 = 2;
            uVar5 = 2;
            local_60 = param_2;
            local_5c = uVar1;
          }
          local_88 = &local_70;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
          FUN_147b4e6d4(param_1);
          puVar9 = local_58;
        }
        if (puVar9 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        break;
      }
      lVar10 = lVar10 + 0x10;
    } while ((longlong)DAT_14cae4f40 * 0x10 != lVar10);
  }
  *(undefined1 *)(param_1 + 0x14a) = 0;
  *(undefined1 *)(param_1 + 0x152) = 0;
  *(undefined1 *)(param_1 + 0x15a) = 0;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 141063fe8 FUN_141063fe8 body=63 status=ok
// SIG undefined FUN_141063fe8(void)

void FUN_141063fe8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_141064028(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x80,0x10);
  }
  return;
}



// FUNCTION 141064028 FUN_141064028 body=95 status=ok
// SIG undefined FUN_141064028(void)

ulonglong FUN_141064028(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff80U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 7,0x10);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 141064088 FUN_141064088 body=143 status=ok
// SIG undefined FUN_141064088(void)

void FUN_141064088(longlong param_1)

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



// FUNCTION 141064118 FUN_141064118 body=715 status=ok
// SIG undefined FUN_141064118(void)

void FUN_141064118(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  
  if (*(char *)((longlong)param_1 + 0x9d) != '\x02') {
    iVar13 = (int)param_1[1];
    if (iVar13 == 0) {
      iVar13 = (int)param_1[4];
      iVar7 = param_2;
    }
    else {
      iVar7 = *(int *)(*param_1 + (longlong)param_2 * 4);
    }
    if (iVar13 <= param_2) {
      iVar13 = param_2;
    }
    iVar10 = iVar13 + 0xe;
    if (-1 < iVar13 + 7) {
      iVar10 = iVar13 + 7;
    }
    plVar3 = param_1 + 5;
    if ((int)param_1[6] < iVar10 >> 3) {
      FUN_1402d2c96(plVar3,iVar10 >> 3,1);
    }
    *(int *)(param_1 + 0xb) = iVar13;
    iVar13 = *(int *)((longlong)param_1 + 0x5c);
    if (iVar7 <= *(int *)((longlong)param_1 + 0x5c)) {
      iVar13 = iVar7;
    }
    *(int *)((longlong)param_1 + 0x5c) = iVar13;
    if ((int)param_1[10] <= iVar7) {
      uVar8 = iVar7 + 0x3f;
      if (-1 < (int)(iVar7 + 0x20U)) {
        uVar8 = iVar7 + 0x20U;
      }
      FUN_14476b79c(param_1 + 7,uVar8 & 0xffffffe0,0);
    }
    uVar8 = 1 << ((byte)iVar7 & 0x1f);
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[9];
    }
    iVar13 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar13 = iVar7;
    }
    puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar13 >> 5) * 4);
    *puVar1 = *puVar1 | uVar8;
    iVar10 = param_2 + 7;
    if (-1 < param_2) {
      iVar10 = param_2;
    }
    iVar10 = iVar10 >> 3;
    lVar2 = param_1[5];
    lVar9 = (longlong)iVar10;
    uVar11 = *(uint *)(lVar2 + lVar9 * 4);
    iVar6 = param_2 % 8;
    bVar5 = (byte)(iVar6 * 4);
    uVar12 = uVar11 >> (bVar5 & 0x1f);
    if ((uVar11 >> (iVar6 * 4 & 0x1fU) & 1) == 0) {
      if ((uVar12 & 4) != 0) {
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + -1;
      }
      if ((uVar12 & 2) != 0) {
        *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + -1;
      }
      if ((uVar12 & 8) != 0) {
        *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
      }
    }
    else {
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + -1;
    }
    iVar4 = (int)param_1[0xb] + -1;
    if (iVar4 != param_2) {
      iVar10 = (int)param_1[0xb] + 6;
      if (-1 < iVar4) {
        iVar10 = iVar4;
      }
      uVar11 = *(uint *)(lVar2 + (longlong)(iVar10 >> 3) * 4) >>
               (((char)iVar4 - ((byte)iVar10 & 0xf8)) * '\x04' & 0x1f);
      if ((uVar11 & 9) == 0) {
        *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + 1;
      }
      *(uint *)(lVar2 + lVar9 * 4) =
           (uVar11 & 7 | 8) << (bVar5 & 0x1f) |
           ~(0xf << (bVar5 & 0x1f)) & *(uint *)(lVar2 + lVar9 * 4);
      iVar6 = (int)param_1[0xb];
      iVar10 = (int)param_1[0xc];
      if (param_2 <= (int)param_1[0xc]) {
        iVar10 = param_2;
      }
      *(int *)(param_1 + 0xc) = iVar10;
      iVar10 = *(int *)((longlong)param_1 + 100);
      if (*(int *)((longlong)param_1 + 100) < param_2) {
        iVar10 = param_2;
      }
      *(int *)((longlong)param_1 + 100) = iVar10;
      uVar11 = iVar6 + 6;
      if (-1 < (int)(iVar6 - 1U)) {
        uVar11 = iVar6 - 1U;
      }
      iVar10 = (int)uVar11 >> 3;
      iVar6 = (iVar6 - (uVar11 & 0xfffffff8)) + -1;
    }
    if (iVar6 < 1) {
      *(undefined4 *)(*plVar3 + (longlong)iVar10 * 4) = 0;
    }
    else {
      bVar5 = -(char)(iVar6 << 2);
      *(uint *)(*plVar3 + (longlong)iVar10 * 4) =
           (uint)(*(int *)(*plVar3 + (longlong)iVar10 * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
    }
    *(int *)(param_1 + 0xb) = (int)param_1[0xb] + -1;
    if (((int)param_1[4] + -1 != param_2) && ((int)param_1[1] == 0)) {
      FUN_141064484(param_1);
    }
    FUN_1402d2c26(param_1);
    if ((int)param_1[1] != 0) {
      *(undefined4 *)(param_1[2] + (longlong)iVar7 * 4) = 0xffffffff;
      plVar3 = param_1 + 0xf;
      if ((longlong *)param_1[0x11] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[0x11];
      }
      puVar1 = (uint *)((longlong)plVar3 + (longlong)(iVar13 >> 5) * 4);
      *puVar1 = *puVar1 & ~uVar8;
      iVar13 = (int)param_1[0x13];
      if (iVar7 <= (int)param_1[0x13]) {
        iVar13 = iVar7;
      }
      *(int *)(param_1 + 0x13) = iVar13;
      iVar13 = (int)param_1[1];
      if ((longlong)iVar13 != 0) {
        iVar10 = *(int *)(*param_1 + -4 + (longlong)iVar13 * 4);
        *(int *)(param_1 + 1) = iVar13 + -1;
        FUN_1410643e4(param_1);
        *(int *)(param_1 + 4) = (int)param_1[1];
        if (iVar10 == iVar7) {
          return;
        }
        *(int *)(param_1[2] + (longlong)iVar10 * 4) = param_2;
        *(int *)(*param_1 + (longlong)param_2 * 4) = iVar10;
        return;
      }
    }
    *(int *)(param_1 + 4) = (int)param_1[4] + -1;
  }
  return;
}



// FUNCTION 1410643e4 FUN_1410643e4 body=64 status=ok
// SIG undefined FUN_1410643e4(void)

void FUN_1410643e4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_141064424(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 141064424 FUN_141064424 body=95 status=ok
// SIG undefined FUN_141064424(void)

ulonglong FUN_141064424(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 141064484 FUN_141064484 body=151 status=ok
// SIG undefined FUN_141064484(void)

void FUN_141064484(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_14067dd7c(param_1,(int)param_1[4]);
  iVar1 = (int)param_1[3];
  iVar2 = (int)param_1[4];
  if (iVar1 < iVar2) {
    *(int *)(param_1 + 3) = iVar2;
    if ((uint)(*(int *)((longlong)param_1 + 0x1c) - iVar1) < (uint)(iVar2 - iVar1)) {
      FUN_1446f48e2(param_1 + 2);
    }
  }
  else {
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    if (iVar2 < iVar1) {
      *(int *)(param_1 + 3) = iVar2;
      FUN_14479f406();
    }
  }
  uVar4 = (ulonglong)*(uint *)(param_1 + 4);
  if (0 < (int)*(uint *)(param_1 + 4)) {
    lVar3 = 0;
    do {
      *(int *)(*param_1 + lVar3 * 4) = (int)lVar3;
      *(int *)(param_1[2] + lVar3 * 4) = (int)lVar3;
      lVar3 = lVar3 + 1;
      uVar4 = (ulonglong)(int)param_1[4];
    } while (lVar3 < (longlong)uVar4);
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_14476b79c(param_1 + 0xf,uVar4,1);
  *(int *)(param_1 + 0x13) = (int)param_1[4];
  return;
}



// FUNCTION 14106452a FUN_14106452a body=668 status=ok
// SIG undefined FUN_14106452a(void)

void FUN_14106452a(longlong param_1,double *param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  PSRWLOCK SRWLock;
  longlong lVar12;
  byte *pbVar13;
  ulonglong uVar14;
  byte *pbVar15;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_2 + 3) == '\x01') {
    dVar3 = *param_2;
    if (*(double *)(param_1 + 0x360) <= dVar3 && dVar3 != *(double *)(param_1 + 0x360)) {
      *(double *)(param_1 + 0x360) = dVar3;
      local_58 = 0;
      uStack_50 = 0;
      if ((longlong)*(int *)(param_2 + 2) != 0) {
        pbVar15 = (byte *)param_2[1];
        pbVar13 = pbVar15 + (longlong)*(int *)(param_2 + 2) * 0x98;
        do {
          if (((*pbVar15 & 2) != 0) && (uVar14 = *(ulonglong *)(pbVar15 + 8), uVar14 != 0)) {
            SRWLock = (PSRWLOCK)0x0;
            if (DAT_14c992a90 != '\0') {
              SRWLock = (PSRWLOCK)(param_1 + 0x280);
            }
            if (SRWLock != (PSRWLOCK)0x0) {
              AcquireSRWLockShared(SRWLock);
            }
            if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
              uVar10 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
              uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
              lVar12 = *(longlong *)(param_1 + 0x2e8);
              if (*(longlong *)(param_1 + 0x2e8) == 0) {
                lVar12 = param_1 + 0x2e0;
              }
              iVar11 = *(int *)(lVar12 + (ulonglong)
                                         (*(int *)(param_1 + 0x2f0) - 1U & (uVar10 >> 0x10 ^ uVar10)
                                         ) * 4);
              if (iVar11 != -1) {
                do {
                  puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar11 * 0x18);
                  if (*puVar1 == uVar14) {
                    if (puVar1 != (ulonglong *)0x0) {
                      uVar14 = 0;
                      if (puVar1 + 1 != (ulonglong *)0x0) {
                        uVar14 = puVar1[1];
                      }
                      goto LAB_141064665;
                    }
                    break;
                  }
                  iVar11 = (int)puVar1[2];
                } while (iVar11 != -1);
              }
            }
            uVar14 = 0;
LAB_141064665:
            if (SRWLock != (PSRWLOCK)0x0) {
              ReleaseSRWLockShared(SRWLock);
            }
            uVar9 = uStack_50;
            lVar12 = (longlong)(int)uStack_50;
            uVar10 = (int)uStack_50 + 1;
            uStack_50 = CONCAT44(uStack_50._4_4_,uVar10);
            if (uStack_50._4_4_ < uVar10) {
              FUN_1417960de(&local_58,uVar9 & 0xffffffff);
            }
            lVar8 = local_58;
            lVar12 = lVar12 * 0x78;
            *(undefined8 *)(local_58 + lVar12) = 0;
            *(undefined8 *)(local_58 + 0x18 + lVar12) = *(undefined8 *)(pbVar15 + 0x20);
            uVar7 = *(undefined8 *)(pbVar15 + 0x18);
            puVar2 = (undefined8 *)(local_58 + 8 + lVar12);
            *puVar2 = *(undefined8 *)(pbVar15 + 0x10);
            puVar2[1] = uVar7;
            *(undefined8 *)(local_58 + 0x30 + lVar12) = *(undefined8 *)(pbVar15 + 0x38);
            uVar7 = *(undefined8 *)(pbVar15 + 0x30);
            puVar2 = (undefined8 *)(local_58 + 0x20 + lVar12);
            *puVar2 = *(undefined8 *)(pbVar15 + 0x28);
            puVar2[1] = uVar7;
            uVar7 = *(undefined8 *)(pbVar15 + 0x48);
            puVar2 = (undefined8 *)(local_58 + 0x38 + lVar12);
            *puVar2 = *(undefined8 *)(pbVar15 + 0x40);
            puVar2[1] = uVar7;
            *(undefined8 *)(local_58 + 0x48 + lVar12) = *(undefined8 *)(pbVar15 + 0x50);
            dVar3 = *(double *)(pbVar15 + 0x88);
            dVar4 = *(double *)(pbVar15 + 0x70);
            dVar5 = *(double *)(pbVar15 + 0x80);
            dVar6 = *(double *)(pbVar15 + 0x68);
            *(double *)(local_58 + 0x50 + lVar12) =
                 *(double *)(pbVar15 + 0x78) - *(double *)(pbVar15 + 0x60);
            *(double *)(local_58 + 0x58 + lVar12) = dVar5 - dVar6;
            *(double *)(local_58 + 0x60 + lVar12) = dVar3 - dVar4;
            *(float *)(local_58 + 0x68 + lVar12) = (float)*(double *)(pbVar15 + 0x58);
            *(undefined4 *)(local_58 + 0x6c + lVar12) = *(undefined4 *)(pbVar15 + 0x90);
            *(byte *)(local_58 + 0x70 + lVar12) = pbVar15[0x94];
            if ((uVar14 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(uVar14);
            }
            *(ulonglong *)(lVar8 + lVar12) = uVar14;
          }
          pbVar15 = pbVar15 + 0x98;
        } while (pbVar15 != pbVar13);
        if ((0 < (int)uStack_50) && (0 < *(int *)(*(longlong *)(param_1 + 0x350) + 0x40))) {
          FUN_147860dcb(*(longlong *)(param_1 + 0x350) + 0x38,&local_58);
        }
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410647d2 FUN_1410647d2 body=325 status=ok
// SIG undefined FUN_1410647d2(void)

undefined8 * FUN_1410647d2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14480568a();
  *param_1 = &PTR_FUN_14b0bc9d0;
  param_1[5] = &PTR_FUN_14b0bd3f0;
  param_1[6] = &PTR_LAB_14b0bd430;
  param_1[0x55] = &PTR_FUN_14b0bd480;
  param_1[0x56] = &PTR_FUN_14b0bd500;
  param_1[0x57] = &PTR_FUN_14b0bd510;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6b4) = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  *(undefined1 *)(param_1 + 0xca) = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6ed) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 10;
  *(undefined8 *)((longlong)param_1 + 0x72e) = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe9] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xec] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0xea] = DAT_14c8464e0;
  param_1[0xeb] = uVar1;
  param_1[0xf3] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  return param_1;
}



// FUNCTION 141064918 FUN_141064918 body=1975 status=ok
// SIG undefined FUN_141064918(void)

void FUN_141064918(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
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
  code *local_58;
  int local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14106511e();
  lVar17 = *(longlong *)(param_1 + 0x20);
  lVar11 = *(longlong *)(lVar17 + 0xa8);
  if (lVar11 == 0) {
    lVar11 = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_70 = &local_58;
      local_58 = FUN_141864c34;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464cee30;
      local_78 = &LAB_148bfac22;
      local_80 = &LAB_140f21842;
      local_88 = L"Game";
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) {
      lVar11 = 0;
    }
    else if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar11);
    }
    lVar17 = *(longlong *)(param_1 + 0x20);
  }
  *(longlong *)(param_1 + 0x768) = lVar11;
  if (lVar17 != 0) {
    if (DAT_14cb63950 == 0) {
      local_70 = &local_58;
      local_58 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464ec72a;
      local_78 = &LAB_1486f5f75;
      local_80 = &LAB_140945686;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar17);
      }
      *(longlong *)(param_1 + 0x1570) = lVar17;
      plVar2 = *(longlong **)(param_1 + 0x768);
      if (plVar2 == (longlong *)0x0) goto LAB_141064cae;
      if ((DAT_14cbca628 == 0) || ((longlong)*(int *)(lVar17 + 0x78) == 0)) {
        bVar8 = 0;
      }
      else {
        lVar11 = 0;
        bVar8 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar17 + 0x70) + lVar11) == DAT_14cbca628) {
            bVar8 = 1;
            break;
          }
          lVar11 = lVar11 + 8;
        } while ((longlong)*(int *)(lVar17 + 0x78) * 8 != lVar11);
      }
      *(byte *)(param_1 + 0x17c9) = bVar8;
      if ((DAT_14cbca630 == 0) || ((longlong)*(int *)(lVar17 + 0x78) == 0)) {
        bVar13 = 0;
      }
      else {
        lVar11 = 0;
        bVar13 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar17 + 0x70) + lVar11) == DAT_14cbca630) {
            bVar13 = 1;
            break;
          }
          lVar11 = lVar11 + 8;
        } while ((longlong)*(int *)(lVar17 + 0x78) * 8 != lVar11);
      }
      *(byte *)(param_1 + 0x172a) = bVar13;
      pcVar3 = *(code **)(*plVar2 + 0x5e8);
      if (pcVar3 == FUN_140972dde) {
        if (plVar2[0x76] != 0) goto LAB_141064e39;
        pcVar3 = *(code **)(*plVar2 + 0x5f8);
        if (pcVar3 == FUN_144784df4) {
          if (*(code **)(plVar2[0x784] + 0x18) == (code *)&LAB_144904684) {
            if (((((*(int *)((longlong)plVar2 + 0x75b4) != 0) &&
                  (uVar1 = *(uint *)(plVar2 + 0xeb6), -1 < (int)uVar1)) &&
                 ((int)uVar1 < DAT_14c9647dc)) &&
                ((plVar14 = (longlong *)
                            ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                 plVar14 != (longlong *)0x0 &&
                 ((int)plVar14[2] == *(int *)((longlong)plVar2 + 0x75b4))))) &&
               ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) {
              if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
                lVar11 = *plVar14;
              }
              else {
                lVar11 = 0;
              }
              lVar11 = lVar11 + 0x110;
              goto LAB_141064e07;
            }
          }
          else {
            lVar11 = (**(code **)(plVar2[0x784] + 0x18))();
LAB_141064e07:
            if (lVar11 != 0) {
              lVar11 = *(longlong *)(lVar11 + 0x20);
              goto LAB_141064e14;
            }
          }
        }
        else {
          lVar11 = (*pcVar3)();
LAB_141064e14:
          if (lVar11 != 0) {
            lVar11 = *(longlong *)(lVar11 + 0x3b0);
            goto LAB_141064e24;
          }
        }
LAB_141064ae7:
        bVar8 = *(byte *)(param_1 + 0x17c9);
LAB_141064aed:
        bVar18 = false;
      }
      else {
        lVar11 = (*pcVar3)();
LAB_141064e24:
        if (lVar11 == 0) goto LAB_141064ae7;
        bVar13 = *(byte *)(param_1 + 0x172a);
        bVar8 = *(byte *)(param_1 + 0x17c9);
LAB_141064e39:
        if ((((bVar13 & 1) != 0) || ((bVar8 & 1) != 0)) ||
           (*(char *)(*(longlong *)(param_1 + 0x1570) + 0x11c9) != '\x01')) goto LAB_141064aed;
        bVar18 = *(longlong *)(*(longlong *)(param_1 + 0x768) + 0x428) ==
                 *(longlong *)(*(longlong *)(param_1 + 0x1570) + 0x120);
      }
      *(bool *)(param_1 + 0x17ca) = bVar18;
      if ((bVar18 != false) || ((bVar8 & 1) != 0)) goto LAB_141064cae;
      lVar11 = *(longlong *)(param_1 + 0x768);
      local_58 = (code *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,3,0x10);
      pcVar3 = local_58;
      local_50 = 3;
      *(undefined ***)local_58 = &PTR_LAB_14b4aa9f0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar17 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar17 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar17;
      *(longlong *)(local_58 + 0x10) = lVar12;
      *(undefined ***)local_58 = &PTR_FUN_14b9619b0;
      *(longlong *)(local_58 + 0x18) = 0;
      iVar16 = 0;
      if (param_1 != 0) {
        uVar1 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_58 + 0x18) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar17 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar17 = 0;
        }
        iVar16 = *(int *)(lVar17 + 0x10);
        if (*(int *)(lVar17 + 0x10) == 0) {
          LOCK();
          iVar16 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar18 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar16;
          if (bVar18) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar16 = *(int *)(lVar17 + 0x10);
          bVar18 = iVar16 == 0;
          if (bVar18) {
            *(int *)(lVar17 + 0x10) = iVar10;
            iVar16 = 0;
          }
          UNLOCK();
          if (bVar18) {
            iVar16 = iVar10;
          }
        }
      }
      *(int *)(pcVar3 + 0x1c) = iVar16;
      *(code **)(pcVar3 + 0x20) = FUN_140ef75a0;
      *(undefined4 *)(pcVar3 + 0x28) = 0;
      if (((local_50 == 0) || (local_58 == (code *)0x0)) ||
         (cVar9 = (**(code **)(*(longlong *)local_58 + 0x30))(), cVar9 == '\0')) {
        if (local_50 != 0) {
          if (local_58 == (code *)0x0) goto LAB_141064cae;
          (*(code *)**(undefined8 **)local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          goto LAB_141064c98;
        }
      }
      else {
        plVar2 = (longlong *)(lVar11 + 0x5fd0);
        if (*(int *)(lVar11 + 0x5fe4) < 1) {
          iVar16 = *(int *)(lVar11 + 0x5fd8);
          iVar10 = *(int *)(lVar11 + 0x5fe0) + -1;
          *(int *)(lVar11 + 0x5fe0) = iVar10;
          if (iVar10 <= iVar16) {
            iVar10 = iVar16;
            if (0 < iVar16) {
              iVar15 = 0;
              do {
                if (((*(int *)(*plVar2 + 8 + (longlong)iVar15 * 0x10) == 0) ||
                    (plVar14 = *(longlong **)(*plVar2 + (longlong)iVar15 * 0x10),
                    plVar14 == (longlong *)0x0)) ||
                   (cVar9 = (**(code **)(*plVar14 + 0x28))(), cVar9 != '\0')) {
                  FUN_14005b288(plVar2,iVar15);
                  FUN_14005b248(plVar2);
                }
                else {
                  iVar15 = iVar15 + 1;
                }
                iVar10 = *(int *)(lVar11 + 0x5fd8);
              } while (iVar15 < iVar10);
            }
            iVar15 = 2;
            if (2 < iVar10 * 2) {
              iVar15 = iVar10 * 2;
            }
            *(int *)(lVar11 + 0x5fe0) = iVar15;
            if ((iVar15 < iVar16) && (*(int *)(lVar11 + 0x5fdc) != iVar10)) {
              FUN_14045812c();
            }
          }
        }
        if ((local_50 != 0) && (local_58 != (code *)0x0)) {
          (**(code **)(*(longlong *)local_58 + 0x38))(local_58,local_48);
        }
        iVar16 = *(int *)(lVar11 + 0x5fd8);
        *(uint *)(lVar11 + 0x5fd8) = iVar16 + 1U;
        if (*(uint *)(lVar11 + 0x5fdc) < iVar16 + 1U) {
          FUN_1447a71f6(plVar2,iVar16);
        }
        lVar11 = *plVar2;
        lVar17 = (longlong)iVar16 * 0x10;
        *(undefined8 *)(lVar11 + lVar17) = 0;
        *(undefined4 *)(lVar11 + 8 + lVar17) = 0;
        *(code **)(lVar11 + lVar17) = local_58;
        local_58 = (code *)0x0;
        *(int *)(lVar11 + 8 + lVar17) = local_50;
LAB_141064c98:
        local_50 = 0;
      }
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_141064cae;
    }
  }
  *(undefined8 *)(param_1 + 0x1570) = 0;
LAB_141064cae:
  *(undefined8 *)(param_1 + 0x17a0) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x1790) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x1798) = uVar4;
  uVar7 = DAT_14c846500._4_4_;
  uVar6 = (undefined4)DAT_14c846500;
  uVar5 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(param_1 + 0x17a8) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)(param_1 + 0x17ac) = uVar5;
  *(undefined4 *)(param_1 + 0x17b0) = uVar6;
  *(undefined4 *)(param_1 + 0x17b4) = uVar7;
  *(undefined8 *)(param_1 + 0x17b8) = DAT_14c846508;
  *(undefined4 *)(param_1 + 0x17c0) = 0;
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14106511e FUN_14106511e body=6571 status=ok
// SIG undefined FUN_14106511e(void)

void FUN_14106511e(code *param_1)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  int iVar18;
  longlong lVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  code *pcVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  code cVar25;
  bool bVar26;
  undefined4 uVar27;
  float fVar28;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  code *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  code *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_140c036ec();
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa8);
  if (lVar10 != 0) {
    if (DAT_14cb5b388 == 0) {
      local_f0 = (code **)&local_98;
      local_98 = FUN_141864c34;
      local_e0 = FUN_14081d0ea;
      local_e8 = (code *)&LAB_146431698;
      local_f8 = &LAB_1486775cb;
      local_100 = (code *)&LAB_1464cee35;
      local_108 = L"Game";
      local_110 = 0;
      local_118 = 0x10000005;
      local_120 = 0x10;
      local_128 = CONCAT44(local_128._4_4_,0x3a20);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar10);
      }
      *(longlong *)(param_1 + 0x638) = lVar10;
      lVar10 = *(longlong *)(param_1 + 0x20);
      if (lVar10 == 0) {
LAB_14106674b:
        lVar10 = 0;
      }
      else {
        if (DAT_14cb63950 == 0) {
          local_f0 = (code **)&local_98;
          local_98 = FUN_144a7958c;
          local_e0 = FUN_14081d0ea;
          local_e8 = (code *)&LAB_1464ec72a;
          local_f8 = &LAB_1486f5f75;
          local_100 = (code *)&LAB_140945686;
          local_108 = L"Engine";
          local_110 = 0;
          local_118 = 0x10000004;
          local_120 = 0x10;
          local_128 = CONCAT44(local_128._4_4_,0x19d0);
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee)
          ;
        }
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cb63950 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) != DAT_14cb63950 + 0x30))
        goto LAB_14106674b;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar10);
        }
      }
      *(longlong *)(param_1 + 0x640) = lVar10;
      lVar10 = *(longlong *)(param_1 + 0x638);
      lVar11 = *(longlong *)(param_1 + 0x20);
      cVar25 = (code)(*(longlong *)(lVar10 + 0x428) == lVar11);
      param_1[0x6a8] = cVar25;
      if ((bool)cVar25) {
        plVar17 = (longlong *)(lVar10 + 0x1108);
        lVar10 = (**(code **)(*(longlong *)(lVar10 + 0x1108) + 0x10))(plVar17);
        if ((plVar17 != (longlong *)0x0) &&
           (lVar11 = (**(code **)(*plVar17 + 8))(plVar17), lVar11 != 0)) {
          if (DAT_14cb5b388 == 0) {
            local_f0 = (code **)&local_98;
            local_98 = FUN_141864c34;
            local_e0 = FUN_14081d0ea;
            local_e8 = (code *)&LAB_146431698;
            local_f8 = &LAB_1486775cb;
            local_100 = (code *)&LAB_1464cee35;
            local_108 = L"Game";
            local_110 = 0;
            local_118 = 0x10000005;
            local_120 = 0x10;
            local_128 = CONCAT44(local_128._4_4_,0x3a20);
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
          }
          if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
            uVar8 = *(uint *)(lVar11 + 0xc);
            *(uint *)(lVar10 + 0x68) = uVar8;
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar19 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar19 = 0;
            }
            iVar7 = *(int *)(lVar19 + 0x10);
            if (*(int *)(lVar19 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar9 = DAT_14c964868 + 1;
              bVar26 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar26) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar9);
              }
              LOCK();
              iVar7 = *(int *)(lVar19 + 0x10);
              bVar26 = iVar7 == 0;
              if (bVar26) {
                *(int *)(lVar19 + 0x10) = iVar9;
                iVar7 = 0;
              }
              UNLOCK();
              if (bVar26) {
                iVar7 = iVar9;
              }
            }
            *(int *)(lVar10 + 0x6c) = iVar7;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar11);
            }
            *(longlong *)(lVar10 + 0x70) = lVar11;
            if (DAT_14cb66140 == 0) {
              local_f0 = (code **)&local_98;
              local_98 = FUN_1449e2820;
              local_e0 = FUN_14081d0ea;
              local_e8 = FUN_1427b09ee;
              local_f8 = &LAB_148725495;
              local_100 = FUN_14650e266;
              local_108 = L"Engine";
              local_110 = 0;
              local_118 = 0x10004001;
              local_120 = 8;
              local_128 = CONCAT44(local_128._4_4_,0x28);
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxSlopeWarpingInterface",&DAT_14cb66140,
                            &DAT_148725494);
            }
            uVar12 = FUN_144718840(lVar11,DAT_14cb66140);
            *(undefined8 *)(lVar10 + 0x78) = uVar12;
            uVar12 = FUN_140566488();
            plVar17 = (longlong *)FUN_144718840(lVar11,uVar12);
            if ((plVar17 != (longlong *)0x0) &&
               (plVar17 = (longlong *)(**(code **)(*plVar17 + 0x38))(plVar17),
               plVar17 != (longlong *)0x0)) {
              lVar19 = (**(code **)(*plVar17 + 8))(plVar17);
              lVar13 = FUN_140356032();
              if ((lVar13 != 0) &&
                 ((((*(int *)(lVar13 + 0x38) <= *(int *)(lVar19 + 0x38) &&
                    (*(longlong *)
                      (*(longlong *)(lVar19 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
                     lVar13 + 0x30)) && (plVar17[0x4d] != 0)) &&
                  (local_c8 = *(longlong *)(lVar11 + 0x428), local_c8 != 0)))) {
                plVar23 = *(longlong **)(local_c8 + 0x658);
                if (plVar23 == (longlong *)0x0) {
                  plVar23 = *(longlong **)(local_c8 + 0x660);
                  if ((DAT_14c950c29 == '\x01') && (plVar23 != (longlong *)0x0)) goto LAB_141066a11;
                  if (plVar23 != (longlong *)0x0) goto LAB_141065b94;
                }
                else {
                  if (DAT_14c950c29 == '\x01') {
LAB_141066a11:
                    FUN_1456cec3c(plVar23);
                  }
LAB_141065b94:
                  if (DAT_14cb06da8 == 0) {
                    local_f0 = (code **)&local_98;
                    local_98 = FUN_1449e2820;
                    local_e0 = FUN_14081d0ea;
                    local_e8 = (code *)&LAB_1464003b0;
                    local_f8 = &LAB_147d17bdf;
                    local_100 = (code *)&LAB_1417edf22;
                    local_108 = L"Engine";
                    local_110 = 0;
                    local_118 = 0x10000000;
                    local_120 = 8;
                    local_128 = CONCAT44(local_128._4_4_,0x588);
                    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
                  }
                  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(plVar23[2] + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(plVar23[2] + 0x30) +
                       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
                    lVar19 = plVar17[0x4d];
                    local_b8 = lVar11;
                    if (DAT_14c950c29 == '\x01') {
                      if (lVar19 == 0) {
                        lVar19 = 0;
                      }
                      else {
                        FUN_1456cec3c();
                        lVar19 = plVar17[0x4d];
                      }
                    }
                    *(longlong *)(lVar10 + 0x80) = lVar19;
                    local_c0 = plVar23;
                    lVar11 = (**(code **)(*plVar23 + 0x310))(plVar23);
                    pcVar22 = (code *)(lVar10 + 0x88);
                    iVar7 = *(int *)(lVar10 + 0x94);
                    FUN_140d24ce3(*(undefined8 *)(lVar10 + 0x88),*(undefined4 *)(lVar10 + 0x90));
                    *(undefined4 *)(lVar10 + 0x90) = 0;
                    if ((iVar7 < 0) && (*(int *)(lVar10 + 0x94) != 0)) {
                      FUN_1457e5992(pcVar22);
                    }
                    lVar19 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x80) + 0x40);
                    local_d0 = pcVar22;
                    if (lVar19 != 0) {
                      plVar17 = *(longlong **)(*(longlong *)(lVar10 + 0x80) + 0x38);
                      plVar23 = plVar17 + lVar19 * 0xb;
                      lVar19 = lVar11 + 200;
                      local_b0 = lVar19;
                      local_a8 = plVar23;
                      local_a0 = lVar10;
                      do {
                        lVar13 = *plVar17;
                        iVar7 = -1;
                        uVar8 = 0xffffffff;
                        if ((lVar13 != 0) && (*(int *)(lVar11 + 0x98) != *(int *)(lVar11 + 0xc4))) {
                          uVar5 = (uint)((ulonglong)lVar13 >> 0x10);
                          uVar15 = (uint)lVar13 & 0xffff;
                          lVar14 = *(longlong *)(lVar11 + 0xd0);
                          if (*(longlong *)(lVar11 + 0xd0) == 0) {
                            lVar14 = lVar19;
                          }
                          iVar9 = *(int *)(lVar14 + (ulonglong)
                                                    (*(int *)(lVar11 + 0xd8) - 1U &
                                                    (int)((ulonglong)lVar13 >> 0x20) +
                                                    ((uint)lVar13 << 0x10 | uVar15) +
                                                    (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar15 >> 4)
                                                    ) * 4);
                          if (iVar9 != -1) {
                            do {
                              plVar2 = (longlong *)
                                       (*(longlong *)(lVar11 + 0x90) + (longlong)iVar9 * 0x14);
                              if (*plVar2 == lVar13) {
                                uVar8 = 0xffffffff;
                                if ((plVar2 != (longlong *)0x0) &&
                                   ((uint *)(plVar2 + 1) != (uint *)0x0)) {
                                  uVar8 = *(uint *)(plVar2 + 1);
                                }
                                goto LAB_141065d3e;
                              }
                              iVar9 = *(int *)((longlong)plVar2 + 0xc);
                            } while (iVar9 != -1);
                            uVar8 = 0xffffffff;
                          }
                        }
LAB_141065d3e:
                        lVar13 = plVar17[2];
                        if ((lVar13 != 0) && (*(int *)(lVar11 + 0x98) != *(int *)(lVar11 + 0xc4))) {
                          uVar5 = (uint)((ulonglong)lVar13 >> 0x10);
                          uVar15 = (uint)lVar13 & 0xffff;
                          lVar14 = *(longlong *)(lVar11 + 0xd0);
                          if (*(longlong *)(lVar11 + 0xd0) == 0) {
                            lVar14 = lVar19;
                          }
                          iVar9 = *(int *)(lVar14 + (ulonglong)
                                                    (*(int *)(lVar11 + 0xd8) - 1U &
                                                    (int)((ulonglong)lVar13 >> 0x20) +
                                                    ((uint)lVar13 << 0x10 | uVar15) +
                                                    (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar15 >> 4)
                                                    ) * 4);
                          if (iVar9 != -1) {
                            do {
                              plVar2 = (longlong *)
                                       (*(longlong *)(lVar11 + 0x90) + (longlong)iVar9 * 0x14);
                              if (*plVar2 == lVar13) {
                                if ((plVar2 != (longlong *)0x0) && (plVar2 + 1 != (longlong *)0x0))
                                {
                                  iVar7 = (int)plVar2[1];
                                }
                                break;
                              }
                              iVar9 = *(int *)((longlong)plVar2 + 0xc);
                            } while (iVar9 != -1);
                          }
                        }
                        if ((((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(lVar11 + 0x28))) &&
                            (-1 < iVar7)) && (iVar7 < *(int *)(lVar11 + 0x28))) {
                          local_d8 = (code *)CONCAT44(local_d8._4_4_,iVar7);
                          iVar7 = *(int *)(lVar10 + 0x90);
                          *(uint *)(lVar10 + 0x90) = iVar7 + 1U;
                          if (*(uint *)(lVar10 + 0x94) < iVar7 + 1U) {
                            FUN_14106715a(local_d0,iVar7);
                          }
                          lVar10 = *(longlong *)local_d0;
                          lVar13 = (longlong)iVar7 * 0x138;
                          plVar23 = plVar17;
                          puVar20 = (undefined4 *)(lVar10 + lVar13);
                          for (lVar19 = 0x16; lVar19 != 0; lVar19 = lVar19 + -1) {
                            *puVar20 = (int)*plVar23;
                            plVar23 = (longlong *)((longlong)plVar23 + 4);
                            puVar20 = puVar20 + 1;
                          }
                          *(undefined8 *)(lVar10 + 0x58 + lVar13) = 0;
                          *(undefined8 *)(lVar10 + 0x60 + lVar13) = 0xffffffff;
                          *(undefined1 *)(lVar10 + 0xa8 + lVar13) = 0;
                          *(undefined1 *)(lVar10 + 0xf0 + lVar13) = 0;
                          *(undefined1 *)(lVar10 + 0x110 + lVar13) = 0;
                          *(undefined1 *)(lVar10 + 0x130 + lVar13) = 0;
                          *(float *)(lVar10 + 0x5c + lVar13) =
                               (float)*(double *)
                                       (*(longlong *)(lVar11 + 0x30) + 0x30 +
                                       (ulonglong)uVar8 * 0x60);
                          uVar27 = FUN_141066fde(lVar11,(ulonglong)local_d8 & 0xffffffff,
                                                 *(undefined1 *)((longlong)plVar17 + 0x34));
                          *(undefined4 *)(lVar10 + 0x58 + lVar13) = uVar27;
                          uVar27 = FUN_144909502(local_c8,plVar17[2]);
                          *(undefined4 *)(lVar10 + 0x60 + lVar13) = uVar27;
                          plVar23 = local_a8;
                          lVar19 = local_b0;
                          lVar10 = local_a0;
                        }
                        plVar17 = plVar17 + 0xb;
                      } while (plVar17 != plVar23);
                    }
                    lVar11 = local_b8;
                    plVar17 = local_c0;
                    if (*(int *)(lVar10 + 0x90) != 0) {
                      if (*(char *)((longlong)local_c0 + 0x524) == '\x01') {
                        fVar28 = *(float *)((longlong)local_c0 + 0x52c);
                        if (fVar28 < 0.0) {
                          fVar28 = (float)FUN_140dbaa93(local_c0);
                          *(float *)((longlong)plVar17 + 0x52c) = fVar28;
                        }
                        fVar28 = fVar28 * *(float *)(plVar17 + 0xa5);
                      }
                      else {
                        fVar28 = -1.0;
                      }
                      *(float *)(lVar10 + 100) = fVar28;
                      fVar3 = *(float *)(*(longlong *)(lVar10 + 0x88) + 0x58);
                      if ((0.0001 < fVar3) && (ABS(fVar28 - fVar3) / fVar3 < 0.05)) {
                        *(undefined1 *)(lVar10 + 0xd9) = 1;
                      }
                    }
                    uVar12 = FUN_1447210f0(lVar11);
                    FUN_140d24d2e(&local_98,uVar12);
                    if (uStack_90 != (longlong *)0x0) {
                      iVar7 = (int)uStack_90[1];
                      do {
                        if (iVar7 == 0) {
                          plVar17 = (longlong *)0x0;
                          break;
                        }
                        LOCK();
                        iVar9 = (int)uStack_90[1];
                        bVar26 = iVar7 == iVar9;
                        if (bVar26) {
                          *(int *)(uStack_90 + 1) = iVar7 + 1;
                          iVar9 = iVar7;
                        }
                        iVar7 = iVar9;
                        UNLOCK();
                        plVar17 = uStack_90;
                      } while (!bVar26);
                      LOCK();
                      piVar1 = (int *)((longlong)uStack_90 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*uStack_90 + 0x10))();
                      }
                      pcVar22 = local_98;
                      if (plVar17 != (longlong *)0x0) {
                        if ((local_98 != (code *)0x0) && (*(longlong *)(lVar10 + 0x70) != 0)) {
                          uVar8 = *(uint *)(*(longlong *)(lVar10 + 0x70) + 0xc);
                          if ((int)uVar8 < DAT_14c9647dc) {
                            lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                          }
                          else {
                            lVar11 = 0;
                          }
                          iVar7 = *(int *)(lVar11 + 0x10);
                          if (*(int *)(lVar11 + 0x10) == 0) {
                            LOCK();
                            iVar7 = DAT_14c964868 + 1;
                            UNLOCK();
                            iVar9 = DAT_14c964868 + 1;
                            bVar26 = DAT_14c964868 < 1000;
                            DAT_14c964868 = iVar7;
                            if (bVar26) {
                              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                            ,0x23d,
                                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                            ,iVar9);
                            }
                            LOCK();
                            iVar7 = *(int *)(lVar11 + 0x10);
                            bVar26 = iVar7 == 0;
                            if (bVar26) {
                              *(int *)(lVar11 + 0x10) = iVar9;
                              iVar7 = 0;
                            }
                            UNLOCK();
                            if (bVar26) {
                              iVar7 = iVar9;
                            }
                          }
                          if ((((*(longlong *)(lVar10 + 0x70) != 0) &&
                               (lVar10 = *(longlong *)(lVar10 + 0x78), lVar10 != 0)) && (iVar7 != 0)
                              ) && ((-1 < (int)uVar8 && ((int)uVar8 < DAT_14c9647dc)))) {
                            lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                            if ((lVar11 != 0) &&
                               ((*(int *)(lVar11 + 0x10) == iVar7 &&
                                ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))) {
                              lVar11 = *(longlong *)(pcVar22 + 0x58);
                              iVar9 = *(int *)(pcVar22 + 0x60);
                              lVar19 = (longlong)iVar9;
                              if (lVar19 != 0) {
                                uVar16 = 0;
                                do {
                                  if (*(longlong *)(lVar11 + 8 + uVar16) == lVar10) {
                                    if ((int)(~uVar16 >> 4) != 0) goto LAB_141066100;
                                    break;
                                  }
                                  uVar16 = uVar16 + 0x10;
                                } while (lVar19 << 4 != uVar16);
                              }
                              *(uint *)(pcVar22 + 0x60) = iVar9 + 1U;
                              if (*(uint *)(pcVar22 + 100) < iVar9 + 1U) {
                                local_d0 = pcVar22 + 0x58;
                                local_d8 = pcVar22;
                                FUN_146545e7a(local_d0,iVar9);
                                lVar11 = *(longlong *)local_d0;
                                pcVar22 = local_d8;
                              }
                              lVar19 = lVar19 * 0x10;
                              *(uint *)(lVar11 + lVar19) = uVar8;
                              *(int *)(lVar11 + 4 + lVar19) = iVar7;
                              *(longlong *)(lVar11 + 8 + lVar19) = lVar10;
LAB_141066100:
                              if (((((int)uVar8 < DAT_14c9647dc) &&
                                   (plVar23 = (longlong *)
                                              ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                                              *(longlong *)
                                               (DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                                   plVar23 != (longlong *)0x0)) && ((int)plVar23[2] == iVar7)) &&
                                 (((*(uint *)(plVar23 + 1) & 0x10200000) == 0 &&
                                  (lVar10 = *plVar23, lVar10 != 0)))) {
                                if (DAT_14cac9ca8 == 0) {
                                  local_98 = FUN_141030f22;
                                  local_e0 = FUN_14081d0ea;
                                  local_e8 = FUN_14081d0ea;
                                  local_f0 = (code **)&local_98;
                                  local_f8 = &LAB_1478c0a72;
                                  local_100 = (code *)&LAB_1417b2375;
                                  local_108 = L"Engine";
                                  local_110 = 0x1000000000;
                                  local_118 = 0x10000004;
                                  local_120 = 8;
                                  local_128 = CONCAT44(local_128._4_4_,0x390);
                                  FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,
                                                FUN_14639e32c);
                                }
                                if (((*(int *)(DAT_14cac9ca8 + 0x38) <=
                                      *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
                                    (*(longlong *)
                                      (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                                      (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
                                     DAT_14cac9ca8 + 0x30)) &&
                                   (lVar10 = FUN_1406c47dc(lVar10), lVar10 != 0)) {
                                  FUN_14082bc44(pcVar22 + 0x20,lVar10,lVar10 + 0x40);
                                }
                              }
                            }
                          }
                        }
                        LOCK();
                        plVar23 = plVar17 + 1;
                        *(int *)plVar23 = (int)*plVar23 + -1;
                        UNLOCK();
                        if ((int)*plVar23 == 0) {
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
                  }
                }
              }
            }
          }
        }
        lVar11 = *(longlong *)(param_1 + 0x20);
      }
      if (lVar11 != 0) {
        lVar10 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x638) + 0x10c8) + 0x20))
                           (*(longlong *)(param_1 + 0x638) + 0x10c8);
        if ((lVar10 != 0) && (plVar17 = *(longlong **)(lVar10 + 0x40), plVar17 != (longlong *)0x0))
        {
          lVar10 = (**(code **)(*plVar17 + 8))(plVar17);
          lVar11 = FUN_140356032();
          if ((lVar11 != 0) &&
             (((*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                == lVar11 + 0x30)) && (lVar10 = plVar17[0x4d], lVar10 != 0)))) {
            local_58 = (code *)0x0;
            uStack_50 = 0;
            if ((longlong)*(int *)(lVar10 + 0x40) == 0) {
              local_98 = *(code **)(lVar10 + 200);
              uStack_90 = *(longlong **)(lVar10 + 0xd0);
              local_80 = 0;
LAB_141066269:
              local_88 = (void *)0x0;
              local_7c = 0;
            }
            else {
              puVar24 = *(undefined8 **)(lVar10 + 0x38);
              puVar21 = puVar24 + (longlong)*(int *)(lVar10 + 0x40) * 0xb;
              local_d8 = param_1;
              do {
                uVar16 = uStack_50;
                uVar12 = *puVar24;
                uVar27 = *(undefined4 *)(puVar24 + 1);
                uVar4 = *(undefined4 *)((longlong)puVar24 + 0xc);
                lVar11 = (longlong)(int)uStack_50;
                uVar8 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar8);
                if (uStack_50._4_4_ < uVar8) {
                  FUN_141066e6c(&local_58,uVar16 & 0xffffffff);
                }
                pcVar22 = local_58;
                *(undefined8 *)(local_58 + lVar11 * 0x14) = uVar12;
                *(undefined4 *)(local_58 + lVar11 * 0x14 + 8) = uVar27;
                *(undefined4 *)(local_58 + lVar11 * 0x14 + 0xc) = uVar4;
                *(undefined4 *)(local_58 + lVar11 * 0x14 + 0x10) = 0x41200000;
                puVar24 = puVar24 + 0xb;
              } while (puVar24 != puVar21);
              lVar11 = (longlong)(int)uStack_50;
              local_98 = *(code **)(lVar10 + 200);
              uStack_90 = *(longlong **)(lVar10 + 0xd0);
              local_88 = (void *)0x0;
              local_80 = (int)uStack_50;
              param_1 = local_d8;
              if (lVar11 == 0) goto LAB_141066269;
              FUN_141066d1e(&local_88,uStack_50 & 0xffffffff,0);
              memcpy(local_88,pcVar22,lVar11 * 0x14);
              param_1 = local_d8;
            }
            local_78 = 0;
            uStack_70 = 0;
            uStack_68 = 0;
            uStack_60 = 0;
            if (local_58 != (code *)0x0) {
              FUN_1400020a8(local_58);
            }
            if (param_1 == (code *)0x0) {
              lVar10 = 0;
            }
            else {
              lVar10 = *(longlong *)(param_1 + 0x20);
              if (lVar10 != 0) {
                if (DAT_14cad2858 == 0) {
                  local_f0 = &local_58;
                  local_58 = FUN_144a7958c;
                  local_e0 = FUN_14081d0ea;
                  local_e8 = (code *)&LAB_146395584;
                  local_f8 = &LAB_147a0ba80;
                  local_100 = (code *)&LAB_14575ccce;
                  local_108 = L"Engine";
                  local_110 = 0x40000000000;
                  local_118 = 0x10000004;
                  local_120 = 0x10;
                  local_128 = CONCAT44(local_128._4_4_,0x1180);
                  FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                                FUN_1463bcebe);
                }
                lVar10 = *(longlong *)(lVar10 + 0x10);
                iVar7 = *(int *)(DAT_14cad2858 + 0x38);
                if ((iVar7 <= *(int *)(lVar10 + 0x38)) &&
                   (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar7 * 8) ==
                    DAT_14cad2858 + 0x30)) {
                  FUN_14036294a(*(longlong *)(param_1 + 0x20),
                                CONCAT71((int7)(int3)((uint)iVar7 >> 8),1),1);
                }
              }
              lVar10 = *(longlong *)(param_1 + 0x3e0);
              if (lVar10 == 0) {
                lVar10 = (**(code **)(*(longlong *)param_1 + 0x350))(param_1);
                *(longlong *)(param_1 + 0x3e0) = lVar10;
              }
            }
            *(undefined4 *)(lVar10 + 0x8a8) = (undefined4)local_98;
            *(undefined4 *)(lVar10 + 0x8ac) = local_98._4_4_;
            *(int *)(lVar10 + 0x8b0) = (int)uStack_90;
            *(undefined4 *)(lVar10 + 0x8b4) = uStack_90._4_4_;
            if ((undefined8 *)(lVar10 + 0x8a8) == &local_98) {
              *(undefined4 *)(lVar10 + 0x8d8) = (undefined4)uStack_68;
              *(undefined4 *)(lVar10 + 0x8dc) = uStack_68._4_4_;
              *(undefined4 *)(lVar10 + 0x8e0) = (undefined4)uStack_60;
              *(undefined4 *)(lVar10 + 0x8e4) = uStack_60._4_4_;
              *(undefined4 *)(lVar10 + 0x8c8) = local_78;
              *(undefined4 *)(lVar10 + 0x8cc) = uStack_74;
              *(undefined4 *)(lVar10 + 0x8d0) = (undefined4)uStack_70;
              *(undefined4 *)(lVar10 + 0x8d4) = uStack_70._4_4_;
              if (local_88 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(lVar10 + 0x8b8) != 0) {
                FUN_1400020a8();
              }
              *(void **)(lVar10 + 0x8b8) = local_88;
              local_88 = (void *)0x0;
              *(int *)(lVar10 + 0x8c0) = local_80;
              *(undefined4 *)(lVar10 + 0x8c4) = local_7c;
              *(undefined4 *)(lVar10 + 0x8c8) = local_78;
              *(undefined4 *)(lVar10 + 0x8cc) = uStack_74;
              *(undefined4 *)(lVar10 + 0x8d0) = (undefined4)uStack_70;
              *(undefined4 *)(lVar10 + 0x8d4) = uStack_70._4_4_;
              *(undefined8 *)(lVar10 + 0x8d8) = uStack_68;
              *(undefined8 *)(lVar10 + 0x8e0) = uStack_60;
            }
          }
        }
        FUN_141066aca(param_1 + 0x720);
      }
      plVar17 = (longlong *)FUN_140721bac(*(longlong *)(param_1 + 0x10));
      if (plVar17 != (longlong *)0x0) {
        plVar17 = (longlong *)(**(code **)(*plVar17 + 0x10))(plVar17);
        if ((longlong)(int)plVar17[1] != 0) {
          lVar10 = *plVar17;
          lVar11 = (longlong)(int)plVar17[1] * 0x38 + lVar10;
          do {
            if ((longlong)*(int *)(lVar10 + 0x18) != 0) {
              lVar19 = *(longlong *)(lVar10 + 0x10) + 0x58;
              lVar13 = (longlong)*(int *)(lVar10 + 0x18) * 0x78;
              do {
                if (*(char *)(lVar10 + 0x34) == '\x01') {
                  local_98 = (code *)0x0;
                  uStack_90 = (longlong *)((ulonglong)uStack_90 & 0xffffffff00000000);
                  local_58 = FUN_1487d54cc;
                  uStack_50 = uStack_50 & 0xffffffff00000000;
                  local_128 = lVar19;
                  FUN_1487d5404(&local_98,param_1,&local_58,lVar10 + 0x30);
                  FUN_1478f630e(param_1,lVar10,lVar19 + -0x58,&local_98);
                  FUN_1449db362(&local_98);
                }
                if (0 < *(int *)(lVar19 + 0x18)) {
                  local_d8 = (code *)(lVar19 + 0x10);
                  local_98 = (code *)0x0;
                  uStack_90 = (longlong *)((ulonglong)uStack_90 & 0xffffffff00000000);
                  FUN_1446efa72(&local_98,0,4,0x10);
                  pcVar22 = local_98;
                  uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,4);
                  FUN_1487d7142(local_98,local_d8);
                  *(undefined ***)pcVar22 = &PTR_FUN_14b3edc70;
                  *(undefined8 *)(pcVar22 + 0x20) = 0;
                  FUN_14485c47a(pcVar22 + 0x20,param_1);
                  *(undefined4 *)(pcVar22 + 0x30) = 0;
                  *(code **)(pcVar22 + 0x28) = FUN_1487d5506;
                  FUN_1478f63d8(param_1,lVar10,lVar19 + -0x58,&local_98);
                  FUN_1449db362(&local_98);
                }
                lVar19 = lVar19 + 0x78;
                lVar13 = lVar13 + -0x78;
              } while (lVar13 != 0);
            }
            lVar10 = lVar10 + 0x38;
          } while (lVar10 != lVar11);
        }
      }
      lVar10 = *(longlong *)(param_1 + 0x638);
      local_98 = (code *)0x0;
      uStack_90 = (longlong *)((ulonglong)uStack_90 & 0xffffffff00000000);
      FUN_1446efa72(&local_98,0,3,0x10);
      pcVar22 = local_98;
      uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,3);
      *(undefined ***)local_98 = &PTR_LAB_14a3a3510;
      LOCK();
      UNLOCK();
      lVar19 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar19 == 0) {
        LOCK();
        UNLOCK();
        lVar19 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      *(longlong *)(local_98 + 0x10) = lVar19;
      *(undefined ***)local_98 = &PTR_FUN_14b3edab0;
      *(longlong *)(local_98 + 0x18) = 0;
      iVar7 = 0;
      if (param_1 != (code *)0x0) {
        uVar8 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_98 + 0x18) = uVar8;
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar7 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar26 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar26) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar7 = *(int *)(lVar11 + 0x10);
          bVar26 = iVar7 == 0;
          if (bVar26) {
            *(int *)(lVar11 + 0x10) = iVar9;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar26) {
            iVar7 = iVar9;
          }
        }
      }
      *(int *)(pcVar22 + 0x1c) = iVar7;
      *(code **)(pcVar22 + 0x20) = FUN_141409380;
      *(undefined4 *)(pcVar22 + 0x28) = 0;
      if (((int)uStack_90 == 0) || (local_98 == (code *)0x0)) {
LAB_141066830:
        if ((int)uStack_90 == 0) {
          pcVar22 = (code *)0x0;
          goto LAB_141065808;
        }
        if (local_98 != (code *)0x0) {
          pcVar22 = (code *)0x0;
          (*(code *)**(undefined8 **)local_98)(local_98,0);
          FUN_1446efa72(&local_98,0,0,0x10);
          goto LAB_1410657f5;
        }
        pcVar22 = (code *)0x0;
      }
      else {
        cVar6 = (**(code **)(*(longlong *)local_98 + 0x30))();
        if (cVar6 == '\0') {
          goto LAB_141066830;
        }
        plVar17 = (longlong *)(lVar10 + 0x3440);
        if (*(int *)(lVar10 + 0x3454) < 1) {
          iVar7 = *(int *)(lVar10 + 0x3448);
          iVar9 = *(int *)(lVar10 + 0x3450) + -1;
          *(int *)(lVar10 + 0x3450) = iVar9;
          if (iVar9 <= iVar7) {
            iVar9 = iVar7;
            if (0 < iVar7) {
              iVar18 = 0;
              do {
                if (((*(int *)(*plVar17 + 8 + (longlong)iVar18 * 0x10) == 0) ||
                    (plVar23 = *(longlong **)(*plVar17 + (longlong)iVar18 * 0x10),
                    plVar23 == (longlong *)0x0)) ||
                   (cVar6 = (**(code **)(*plVar23 + 0x28))(), cVar6 != '\0')) {
                  FUN_14005b288(plVar17,iVar18);
                  FUN_14005b248(plVar17);
                }
                else {
                  iVar18 = iVar18 + 1;
                }
                iVar9 = *(int *)(lVar10 + 0x3448);
              } while (iVar18 < iVar9);
            }
            iVar18 = 2;
            if (2 < iVar9 * 2) {
              iVar18 = iVar9 * 2;
            }
            *(int *)(lVar10 + 0x3450) = iVar18;
            if ((iVar18 < iVar7) && (*(int *)(lVar10 + 0x344c) != iVar9)) {
              FUN_14045812c();
            }
          }
        }
        pcVar22 = (code *)0x0;
        if (((int)uStack_90 != 0) && (local_98 != (code *)0x0)) {
          (**(code **)(*(longlong *)local_98 + 0x38))(local_98,&local_58);
          pcVar22 = local_58;
        }
        iVar7 = *(int *)(lVar10 + 0x3448);
        *(uint *)(lVar10 + 0x3448) = iVar7 + 1U;
        if (*(uint *)(lVar10 + 0x344c) < iVar7 + 1U) {
          FUN_1447a71f6(plVar17,iVar7);
        }
        lVar10 = *plVar17;
        lVar11 = (longlong)iVar7 * 0x10;
        *(undefined8 *)(lVar10 + lVar11) = 0;
        *(undefined4 *)(lVar10 + 8 + lVar11) = 0;
        *(code **)(lVar10 + lVar11) = local_98;
        local_98 = (code *)0x0;
        *(int *)(lVar10 + 8 + lVar11) = (int)uStack_90;
LAB_1410657f5:
        uStack_90 = (longlong *)((ulonglong)uStack_90 & 0xffffffff00000000);
LAB_141065808:
        if (local_98 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      *(code **)(param_1 + 0x650) = pcVar22;
      lVar10 = *(longlong *)(param_1 + 0x638);
      local_98 = (code *)0x0;
      uStack_90 = (longlong *)((ulonglong)uStack_90 & 0xffffffff00000000);
      FUN_1446efa72(&local_98,0,3,0x10);
      pcVar22 = local_98;
      uStack_90 = (longlong *)CONCAT44(uStack_90._4_4_,3);
      *(undefined ***)local_98 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar19 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar19 == 0) {
        LOCK();
        UNLOCK();
        lVar19 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      *(longlong *)(local_98 + 0x10) = lVar19;
      *(undefined ***)local_98 = &PTR_FUN_14b3edb20;
      *(longlong *)(local_98 + 0x18) = 0;
      iVar7 = 0;
      if (param_1 != (code *)0x0) {
        uVar8 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_98 + 0x18) = uVar8;
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar7 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar26 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar26) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar7 = *(int *)(lVar11 + 0x10);
          bVar26 = iVar7 == 0;
          if (bVar26) {
            *(int *)(lVar11 + 0x10) = iVar9;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar26) {
            iVar7 = iVar9;
          }
        }
      }
      *(int *)(pcVar22 + 0x1c) = iVar7;
      *(undefined1 **)(pcVar22 + 0x20) = &LAB_14128efd6;
      *(undefined4 *)(pcVar22 + 0x28) = 0;
      if (((int)uStack_90 == 0) || (local_98 == (code *)0x0)) {
LAB_14106689f:
        if ((int)uStack_90 == 0) {
          pcVar22 = (code *)0x0;
          goto LAB_1410659df;
        }
        if (local_98 != (code *)0x0) {
          pcVar22 = (code *)0x0;
          (*(code *)**(undefined8 **)local_98)(local_98,0);
          FUN_1446efa72(&local_98,0,0,0x10);
          goto LAB_1410659cc;
        }
        pcVar22 = (code *)0x0;
      }
      else {
        cVar6 = (**(code **)(*(longlong *)local_98 + 0x30))();
        if (cVar6 == '\0') {
          goto LAB_14106689f;
        }
        plVar17 = (longlong *)(lVar10 + 0x3458);
        if (*(int *)(lVar10 + 0x346c) < 1) {
          iVar7 = *(int *)(lVar10 + 0x3460);
          iVar9 = *(int *)(lVar10 + 0x3468) + -1;
          *(int *)(lVar10 + 0x3468) = iVar9;
          if (iVar9 <= iVar7) {
            iVar9 = iVar7;
            if (0 < iVar7) {
              iVar18 = 0;
              do {
                if (((*(int *)(*plVar17 + 8 + (longlong)iVar18 * 0x10) == 0) ||
                    (plVar23 = *(longlong **)(*plVar17 + (longlong)iVar18 * 0x10),
                    plVar23 == (longlong *)0x0)) ||
                   (cVar6 = (**(code **)(*plVar23 + 0x28))(), cVar6 != '\0')) {
                  FUN_14005b288(plVar17,iVar18);
                  FUN_14005b248(plVar17);
                }
                else {
                  iVar18 = iVar18 + 1;
                }
                iVar9 = *(int *)(lVar10 + 0x3460);
              } while (iVar18 < iVar9);
            }
            iVar18 = 2;
            if (2 < iVar9 * 2) {
              iVar18 = iVar9 * 2;
            }
            *(int *)(lVar10 + 0x3468) = iVar18;
            if ((iVar18 < iVar7) && (*(int *)(lVar10 + 0x3464) != iVar9)) {
              FUN_14045812c();
            }
          }
        }
        pcVar22 = (code *)0x0;
        if (((int)uStack_90 != 0) && (local_98 != (code *)0x0)) {
          (**(code **)(*(longlong *)local_98 + 0x38))(local_98,&local_58);
          pcVar22 = local_58;
        }
        iVar7 = *(int *)(lVar10 + 0x3460);
        *(uint *)(lVar10 + 0x3460) = iVar7 + 1U;
        if (*(uint *)(lVar10 + 0x3464) < iVar7 + 1U) {
          FUN_1447a71f6(plVar17,iVar7);
        }
        lVar10 = *plVar17;
        lVar11 = (longlong)iVar7 * 0x10;
        *(undefined8 *)(lVar10 + lVar11) = 0;
        *(undefined4 *)(lVar10 + 8 + lVar11) = 0;
        *(code **)(lVar10 + lVar11) = local_98;
        local_98 = (code *)0x0;
        *(int *)(lVar10 + 8 + lVar11) = (int)uStack_90;
LAB_1410659cc:
        uStack_90 = (longlong *)((ulonglong)uStack_90 & 0xffffffff00000000);
LAB_1410659df:
        if (local_98 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      *(code **)(param_1 + 0x658) = pcVar22;
      goto LAB_1410659ef;
    }
  }
  *(longlong *)(param_1 + 0x638) = 0;
LAB_1410659ef:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141066aca FUN_141066aca body=139 status=ok
// SIG undefined FUN_141066aca(void)

void FUN_141066aca(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x24) < 8) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_141066bd2(param_1 + 0x18,8);
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x38);
    lVar4 = (longlong)*(int *)(param_1 + 0x40) * 0x10 + lVar3;
    do {
      lVar2 = FUN_141066b56(param_1,lVar3);
      lVar1 = *(longlong *)(lVar3 + 8);
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(lVar2 + 0x20) = lVar1;
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != lVar4);
  }
  return;
}



// FUNCTION 141066b56 FUN_141066b56 body=124 status=ok
// SIG undefined FUN_141066b56(void)

void FUN_141066b56(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x20);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar5 = lVar4 * 0x28;
    plVar2 = plVar3;
    do {
      if (*plVar2 == *param_2) {
        return;
      }
      plVar2 = plVar2 + 5;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_1457e59c2((undefined8 *)(param_1 + 0x18),iVar1);
    plVar3 = *(longlong **)(param_1 + 0x18);
  }
  plVar3 = plVar3 + lVar4 * 5;
  *plVar3 = *param_2;
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  return;
}



// FUNCTION 141066bd2 FUN_141066bd2 body=332 status=ok
// SIG undefined FUN_141066bd2(void)

void FUN_141066bd2(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x28;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141066c40;
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
LAB_141066c40:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x28)) {
      uVar5 = uVar3 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x28,8);
  }
  return;
}



// FUNCTION 141066d1e FUN_141066d1e body=334 status=ok
// SIG undefined FUN_141066d1e(void)

void FUN_141066d1e(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x14;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141066d90;
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
LAB_141066d90:
    iVar5 = (int)(uVar4 / 0x14);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x14,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 141066e6c FUN_141066e6c body=370 status=ok
// SIG undefined FUN_141066e6c(void)

void FUN_141066e6c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x14;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141066ef5;
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
LAB_141066ef5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 141066fde FUN_141066fde body=263 status=ok
// SIG undefined FUN_141066fde(void)

void FUN_141066fde(longlong param_1,uint param_2,uint param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  uint local_38;
  longlong local_30;
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = param_3 & 0xff;
  uVar5 = 0xffffffff;
  if ((int)param_2 < *(int *)(param_1 + 0x28)) {
    uVar5 = (ulonglong)param_2;
  }
  if ((int)param_2 < 0) {
    uVar5 = 0xffffffff;
  }
  local_30 = param_1;
  local_28 = param_2;
  FUN_1410670e6(&local_30,local_40);
  if ((uint)uVar5 == local_38) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      iVar4 = (int)uVar5;
      if ((((iVar4 < 0) || (*(int *)(param_1 + 0x28) <= iVar4)) ||
          (uVar6 = *(uint *)(*(longlong *)(param_1 + 0x20) + 8 + uVar5 * 0xc), (int)uVar6 < 0)) ||
         (*(int *)(param_1 + 0x28) <= (int)uVar6)) {
        uVar6 = 0xffffffff;
      }
      pdVar1 = (double *)(*(longlong *)(param_1 + 0x30) + 0x20 + (longlong)iVar4 * 0x60);
      dVar2 = *pdVar1;
      dVar3 = pdVar1[1];
      dVar7 = *(double *)(*(longlong *)(param_1 + 0x30) + 0x30 + (longlong)iVar4 * 0x60);
      dVar7 = (double)(float)uVar8 + SQRT(dVar7 * dVar7 + dVar2 * dVar2 + dVar3 * dVar3);
      uVar8 = CONCAT44((int)((ulonglong)dVar7 >> 0x20),(float)dVar7);
      uVar5 = (ulonglong)uVar6;
    } while (uVar6 != local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar8);
}



// FUNCTION 1410670e6 FUN_1410670e6 body=116 status=ok
// SIG undefined FUN_1410670e6(void)

void FUN_1410670e6(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  
  iVar7 = *(int *)((longlong)param_1 + 0xc);
  if (iVar7 == -1) {
    *param_2 = *param_1;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    return;
  }
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  *param_2 = lVar3;
  uVar2 = *(uint *)(lVar3 + 0x28);
  uVar4 = 0xffffffff;
  if ((int)uVar1 < (int)uVar2) {
    uVar4 = uVar1;
  }
  uVar6 = (ulonglong)uVar4;
  if ((int)uVar1 < 0) {
    uVar6 = 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (0 < iVar7) {
    do {
      iVar5 = (int)uVar6;
      if ((iVar5 < 0) || ((int)uVar2 <= iVar5)) break;
      uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x20) + 8 + uVar6 * 0xc);
      uVar6 = (ulonglong)uVar1;
      if (((int)uVar1 < 0) || (uVar2 <= uVar1)) {
        uVar6 = 0xffffffff;
      }
      iVar5 = (int)uVar6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  *(int *)(param_2 + 1) = iVar5;
  return;
}



// FUNCTION 14106715a FUN_14106715a body=372 status=ok
// SIG undefined FUN_14106715a(void)

void FUN_14106715a(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x138;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410671e2;
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
LAB_1410671e2:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x138)) {
    uVar7 = uVar5 / 0x138 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x138,8);
  return;
}



// FUNCTION 1410672ce FUN_1410672ce body=492 status=ok
// SIG undefined FUN_1410672ce(void)

void FUN_1410672ce(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((char)param_1[0x2f] == '\x03') {
    *(undefined1 *)(param_1 + 0x1c1) = 1;
    param_1[0x1c2] = param_2;
    lVar17 = param_1[0x25a];
    lVar3 = param_1[0x25b];
    lVar4 = param_1[0x25c];
    lVar5 = param_1[0x25d];
    lVar6 = param_1[0x25e];
    lVar7 = param_1[0x25f];
    lVar8 = param_1[0x260];
    lVar9 = param_1[0x261];
    lVar10 = *param_3;
    lVar11 = param_3[1];
    lVar12 = param_3[2];
    lVar13 = param_3[3];
    lVar14 = param_3[4];
    lVar15 = param_3[5];
    lVar16 = param_3[7];
    param_1[0x260] = param_3[6];
    param_1[0x261] = lVar16;
    param_1[0x25e] = lVar14;
    param_1[0x25f] = lVar15;
    param_1[0x25c] = lVar12;
    param_1[0x25d] = lVar13;
    param_1[0x25a] = lVar10;
    param_1[0x25b] = lVar11;
    local_78._0_4_ = (undefined4)lVar17;
    local_78._4_4_ = (undefined4)((ulonglong)lVar17 >> 0x20);
    uStack_70._0_4_ = (undefined4)lVar3;
    uStack_70._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
    local_68._0_4_ = (undefined4)lVar4;
    local_68._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    uStack_60._0_4_ = (undefined4)lVar5;
    uStack_60._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
    local_58._0_4_ = (undefined4)lVar6;
    local_58._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
    uStack_50._0_4_ = (undefined4)lVar7;
    uStack_50._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
    local_48._0_4_ = (undefined4)lVar8;
    local_48._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
    uStack_40._0_4_ = (undefined4)lVar9;
    uStack_40._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
    *(undefined4 *)(param_3 + 6) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_3 + 0x34) = local_48._4_4_;
    *(undefined4 *)(param_3 + 7) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_40._4_4_;
    *(undefined4 *)(param_3 + 4) = (undefined4)local_58;
    *(undefined4 *)((longlong)param_3 + 0x24) = local_58._4_4_;
    *(undefined4 *)(param_3 + 5) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_50._4_4_;
    *(undefined4 *)(param_3 + 2) = (undefined4)local_68;
    *(undefined4 *)((longlong)param_3 + 0x14) = local_68._4_4_;
    *(undefined4 *)(param_3 + 3) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_60._4_4_;
    *(undefined4 *)param_3 = (undefined4)local_78;
    *(undefined4 *)((longlong)param_3 + 4) = local_78._4_4_;
    *(undefined4 *)(param_3 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_70._4_4_;
    local_78 = lVar17;
    uStack_70 = lVar3;
    local_68 = lVar4;
    uStack_60 = lVar5;
    local_58 = lVar6;
    uStack_50 = lVar7;
    local_48 = lVar8;
    uStack_40 = lVar9;
    (**(code **)(*param_1 + 0x680))();
    lVar17 = *param_4;
    if (lVar17 == 0) {
      puVar19 = &DAT_14c9485f0;
      if (*(undefined4 **)(param_1[0x1c2] + 8) != (undefined4 *)0x0) {
        puVar19 = *(undefined4 **)(param_1[0x1c2] + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar17 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar17);
        DAT_14c947fe0 = lVar17;
      }
      FUN_140045924(DAT_14c947fe0,&local_78,puVar19,1);
      FUN_1410674bc(param_1 + 0x88,&local_78,1);
    }
    else {
      local_80 = param_4[1];
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      local_88 = lVar17;
      FUN_1405f862c(param_1 + 0x88,&local_88);
    }
  }
  if (*param_3 != 0) {
    plVar18 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar18 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar18 + 0x10))(plVar18);
  }
  plVar18 = (longlong *)param_4[1];
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410674bc FUN_1410674bc body=167 status=ok
// SIG undefined FUN_1410674bc(void)

void FUN_1410674bc(longlong param_1,longlong *param_2,undefined1 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  FUN_140633cb6(param_1,0);
  *(undefined1 *)(param_1 + 0x100) = param_3;
  lVar2 = *param_2;
  if (*(longlong *)(param_1 + 0x58) != lVar2) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(longlong *)(param_1 + 0x58) = lVar2;
  if (*(int *)(param_1 + 0x74) != 0) {
    uVar1 = *(uint *)(param_1 + 0x70);
    uVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_141067532;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x74) &&
        ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar5;
      goto LAB_141067532;
    }
  }
  uVar6 = 0;
LAB_141067532:
  uVar3 = FUN_1401b0f18();
  plVar4 = (longlong *)FUN_144718840(uVar6,uVar3);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x68))(plVar4);
  }
  FUN_1405f85e0(param_1);
  return;
}



// FUNCTION 14106756e FUN_14106756e body=162 status=ok
// SIG undefined FUN_14106756e(void)

void FUN_14106756e(longlong *param_1,undefined8 param_2)

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
        goto LAB_1410675fb;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1410675fb:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141067610 FUN_141067610 body=40 status=ok
// SIG undefined FUN_141067610(void)

void FUN_141067610(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b35c200;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 1;
  return;
}



// FUNCTION 141067638 FUN_141067638 body=148 status=ok
// SIG undefined FUN_141067638(void)

void FUN_141067638(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  puVar1 = (uint *)*param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar5 = *(longlong *)(lVar2 + 0x20);
  lVar6 = 0;
  lVar4 = lVar5 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    lVar4 = lVar6;
  }
  lVar8 = lVar5 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    lVar8 = lVar6;
  }
  lVar5 = lVar5 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar5 = lVar6;
  }
  uVar9 = (ulonglong)*(ushort *)(lVar2 + 0xe);
  if (uVar9 != 0) {
    uVar7 = 0;
    do {
      cVar3 = FUN_1410676cc(*(undefined8 *)(lVar5 + uVar7 * 8),*(undefined8 *)(lVar8 + uVar7 * 8),
                            (undefined1 *)(lVar4 + uVar7));
      if (cVar3 == '\0') {
        *(undefined1 *)(lVar4 + uVar7) = 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar9 != uVar7);
  }
  return;
}



// FUNCTION 1410676cc FUN_1410676cc body=683 status=ok
// SIG undefined FUN_1410676cc(void)

undefined8 FUN_1410676cc(longlong param_1,undefined8 param_2,char *param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_88 [40];
  double local_60;
  int local_58;
  float local_54;
  uint local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar12 = *(uint *)(param_1 + 0x60);
  if (uVar12 == 0) {
    if (*(char *)(param_1 + 0x69) != '\x01') {
LAB_1410678dd:
      uVar8 = 0;
      goto LAB_14106783e;
    }
    pbVar9 = (byte *)CONCAT71((int7)(local_40 >> 8),*(undefined1 *)(param_1 + 0x68));
LAB_14106789a:
    *param_3 = (char)pbVar9;
  }
  else {
    piVar5 = *(int **)(param_1 + 0x58);
    iVar7 = *piVar5;
    iVar4 = piVar5[(int)(uVar12 - 1)];
    iVar13 = (int)param_2;
    fVar14 = (float)((ulonglong)param_2 >> 0x20);
    if ((iVar13 < iVar7) || ((iVar7 == iVar13 && (fVar14 < 0.0)))) {
      bVar2 = *(byte *)(param_1 + 0x50);
      if (bVar2 - 3 < 2) {
        pbVar9 = (byte *)CONCAT71((int7)((ulonglong)*(undefined1 **)(param_1 + 0x70) >> 8),
                                  **(undefined1 **)(param_1 + 0x70));
        goto LAB_14106789a;
      }
LAB_1410678d4:
      if (bVar2 == 5) goto LAB_1410678dd;
    }
    else if ((iVar4 < iVar13) || ((iVar4 == iVar13 && (0.0 < fVar14)))) {
      bVar2 = *(byte *)(param_1 + 0x51);
      if (1 < bVar2 - 3) goto LAB_1410678d4;
      iVar7 = *(int *)(param_1 + 0x78) + -1;
      pbVar9 = (byte *)CONCAT71((int7)(int3)((uint)iVar7 >> 8),
                                *(undefined1 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar7));
      goto LAB_14106789a;
    }
    FUN_140108ff7(&local_60,iVar7,iVar4,param_2);
    pbVar9 = *(byte **)(param_1 + 0x70);
    if ((iVar13 < iVar7) || ((iVar7 == iVar13 && (fVar14 < 0.0)))) {
      cVar3 = *(char *)(param_1 + 0x50);
LAB_1410678aa:
      if (cVar3 == '\x02') {
        if ((local_50 & 1) != 0) {
          fVar14 = local_54 + 0.5 + -0.5;
          if (0.99999994 <= fVar14) {
            fVar14 = 0.99999994;
          }
          if (fVar14 <= 0.0) {
            fVar14 = 0.0;
          }
          fVar14 = 0.0 - fVar14;
          auVar15 = roundps(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14),1);
          local_58 = ((iVar4 + iVar7) - local_58) + -1 + (int)auVar15._0_4_;
          local_54 = (fVar14 - auVar15._0_4_) + 0.5 + -0.5;
          if (0.99999994 <= local_54) {
            local_54 = 0.99999994;
          }
          if (local_54 <= 0.0) {
            local_54 = 0.0;
          }
        }
      }
      else if (cVar3 == '\x01') {
        local_60 = (double)(int)local_50 *
                   ((double)pbVar9[*(int *)(param_1 + 0x78) + -1] - (double)*pbVar9);
      }
    }
    else if ((iVar4 < iVar13) || ((iVar4 == iVar13 && (0.0 < fVar14)))) {
      cVar3 = *(char *)(param_1 + 0x51);
      goto LAB_1410678aa;
    }
    if ((int)uVar12 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        uVar1 = (uVar12 >> 1) + uVar11;
        if ((piVar5[uVar1] <= local_58) && (piVar5[uVar1] != local_58 || 0.0 <= local_54)) {
          uVar11 = uVar1 + (uVar12 & 1);
        }
        bVar6 = 1 < uVar12;
        uVar12 = uVar12 >> 1;
      } while (bVar6);
    }
    uVar10 = 1;
    if (1 < (int)uVar11) {
      uVar10 = (ulonglong)uVar11;
    }
    *param_3 = (char)(int)(local_60 + 0.5) + pbVar9[uVar10 - 1];
  }
  uVar8 = CONCAT71((int7)((ulonglong)pbVar9 >> 8),1);
LAB_14106783e:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 141067978 FUN_141067978 body=40 status=ok
// SIG undefined FUN_141067978(void)

undefined8 FUN_141067978(undefined8 param_1,int param_2)

{
  FUN_1410679a0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410679a0 FUN_1410679a0 body=483 status=ok
// SIG undefined FUN_1410679a0(void)

void FUN_1410679a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14acc0ab0;
  param_1[5] = &PTR_FUN_14acc0d50;
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_1438b2e36(param_1 + 0x38,0);
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
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
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x17];
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
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141067b84 FUN_141067b84 body=104 status=ok
// SIG undefined FUN_141067b84(void)

void FUN_141067b84(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  if (0 < (longlong)(int)lVar1) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 1;
    } while ((int)lVar1 != lVar2);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_141067bec(param_1,param_2);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 141067bec FUN_141067bec body=96 status=ok
// SIG undefined FUN_141067bec(void)

void FUN_141067bec(longlong param_1,int param_2)

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



// FUNCTION 141067c74 FUN_141067c74 body=341 status=ok
// SIG undefined FUN_141067c74(void)

void FUN_141067c74(ulonglong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int unaff_EDI;
  ulonglong uVar7;
  
  uVar5 = 0;
  if (param_2 == 0) goto LAB_141067cea;
  uVar3 = (longlong)param_2 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (0x7ff0 < uVar3) {
        uVar5 = uVar6 & 0xfffffffffffffff0;
        if (uVar5 < 0x7ff1) goto LAB_141067d6a;
        goto LAB_141067d3c;
      }
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
    }
  }
LAB_141067cdc:
  do {
    uVar5 = 0x7fffffff;
    unaff_EDI = param_2;
    if (param_2 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
LAB_141067cea:
    param_2 = unaff_EDI;
    uVar4 = (uint)uVar5;
    if (uVar4 == *(uint *)((longlong)param_1 + 0xc)) {
      return;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
      if ((int)uVar4 < 1 && uVar3 == 0) {
        return;
      }
      if (-1 < (int)uVar4) {
        uVar5 = FUN_14001fdce(uVar3,uVar5 << 2,4);
        *param_1 = uVar5;
        return;
      }
    }
    else if (uVar4 <= (uint)param_1[1]) {
      return;
    }
    uVar6 = 0;
    FUN_1467ac767();
LAB_141067d6a:
    bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
    uVar6 = 0x32;
    if (0x32 < bVar2) {
      uVar6 = (ulonglong)bVar2;
    }
    uVar7 = 0x32 - (ulonglong)bVar2;
    do {
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_141067cdc;
      lVar1 = uVar6 + 1 + uVar7;
      uVar7 = uVar7 - 1;
    } while (lVar1 != 0x33);
LAB_141067d3c:
    uVar3 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar3 = (ulonglong)DAT_14c841df8;
    }
    uVar3 = -uVar3 & (uVar5 + uVar3) - 1;
  } while( true );
}



// FUNCTION 141067dd2 FUN_141067dd2 body=238 status=ok
// SIG undefined FUN_141067dd2(void)

longlong * FUN_141067dd2(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  
  FUN_1407fec00();
  *param_1 = (longlong)&PTR_FUN_14b0bbfd0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  plVar1 = param_1 + 10;
  uVar2 = *(uint *)((longlong)param_1 + 0x5c);
  iVar3 = 0;
  if ((int)uVar2 < 0) {
    *(undefined4 *)(param_1 + 0xb) = 0;
    FUN_1402191ca(plVar1,0);
    iVar3 = (int)param_1[0xb];
    uVar2 = *(uint *)((longlong)param_1 + 0x5c);
  }
  *(uint *)(param_1 + 0xb) = iVar3 + 1U;
  if (uVar2 < iVar3 + 1U) {
    FUN_1446f84a2(plVar1,iVar3);
  }
  *(undefined8 *)(param_1[10] + (longlong)iVar3 * 8) = DAT_14cb7c580;
  iVar3 = (int)param_1[0xb];
  *(uint *)(param_1 + 0xb) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x5c) < iVar3 + 1U) {
    FUN_1446f84a2(plVar1,iVar3);
  }
  *(undefined8 *)(param_1[10] + (longlong)iVar3 * 8) = DAT_14cb7c588;
  FUN_1407fecba(param_1 + 0xc,(int)param_1[0xb],1);
  param_1[7] = 0;
  (**(code **)(*param_1 + 0xa8))(param_1);
  return param_1;
}



// FUNCTION 141067ec0 FUN_141067ec0 body=11 status=ok
// SIG undefined FUN_141067ec0(void)

void FUN_141067ec0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  return;
}



// FUNCTION 141067f06 FUN_141067f06 body=47 status=ok
// SIG undefined FUN_141067f06(void)

void FUN_141067f06(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141067f36 FUN_141067f36 body=9 status=ok
// SIG undefined FUN_141067f36(void)

void FUN_141067f36(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x194) = param_2;
  return;
}



// FUNCTION 141067f40 FUN_141067f40 body=9 status=ok
// SIG undefined FUN_141067f40(void)

void FUN_141067f40(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x19c) = param_2;
  return;
}



// FUNCTION 141067f4a FUN_141067f4a body=47 status=ok
// SIG undefined FUN_141067f4a(void)

void FUN_141067f4a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aadac40;
  *(undefined2 *)(param_1 + 1) = 0;
  *(byte *)((longlong)param_1 + 10) = *(byte *)((longlong)param_1 + 10) & 0x80 | 8;
  *(undefined1 *)((longlong)param_1 + 0xb) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 141067f7a FUN_141067f7a body=91 status=ok
// SIG undefined FUN_141067f7a(void)

undefined8 * FUN_141067f7a(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_141068118(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_141068118();
  }
  FUN_141067fd6(param_1,param_2);
  *param_1 = &PTR_FUN_14b9a1480;
  return param_1;
}



// FUNCTION 141067fd6 FUN_141067fd6 body=91 status=ok
// SIG undefined FUN_141067fd6(void)

undefined8 * FUN_141067fd6(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_141068032();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_141068008;
  }
  param_2 = FUN_141068032();
LAB_141068008:
  FUN_140aed1ce(param_1,param_2);
  *param_1 = &PTR_FUN_14b9a3d40;
  return param_1;
}



// FUNCTION 141068032 FUN_141068032 body=228 status=ok
// SIG undefined FUN_141068032(void)

longlong FUN_141068032(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc04c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1418c3448;
    local_38 = &LAB_148cba1e3;
    local_40 = &LAB_146616f30;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x2700;
    FUN_14081cfa3(L"/Script/OakGame",L"TravelStationObject",&DAT_14cbc04c8,FUN_146616f0e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc04c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141068118 FUN_141068118 body=228 status=ok
// SIG undefined FUN_141068118(void)

longlong FUN_141068118(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba0828 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465aab14;
    local_38 = &LAB_148b9008b;
    local_40 = &LAB_1412c1abd;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2930;
    FUN_14081cfa3(L"/Script/OakGame",L"FastTravelStationObject",&DAT_14cba0828,&DAT_148b9008a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba0828;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410681fd FUN_1410681fd body=49 status=ok
// SIG undefined FUN_1410681fd(void)

void FUN_1410681fd(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14106822e FUN_14106822e body=90 status=ok
// SIG undefined FUN_14106822e(void)

void FUN_14106822e(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0xf0);
    do {
      if (plVar2[7] != 0) {
        FUN_1400020a8();
      }
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      FUN_140368b56(plVar2 + -0x1b);
      plVar2 = plVar2 + 0x2a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141068288 FUN_141068288 body=123 status=ok
// SIG undefined FUN_141068288(void)

void FUN_141068288(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 141068304 FUN_141068304 body=55 status=ok
// SIG undefined FUN_141068304(void)

void FUN_141068304(longlong *param_1)

{
  FUN_14106833c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14106833c FUN_14106833c body=121 status=ok
// SIG undefined FUN_14106833c(void)

void FUN_14106833c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 1410683b6 FUN_1410683b6 body=376 status=ok
// SIG undefined FUN_1410683b6(void)

void FUN_1410683b6(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x18 + (longlong)iStack_54 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144748838(param_1,param_2);
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
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 141068530 FUN_141068530 body=487 status=ok
// SIG undefined FUN_141068530(void)

void FUN_141068530(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_2 + 0x100;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_70 = param_1;
  local_60 = local_78;
  if (*(int *)(param_2 + 0x118) == 0) {
    uVar13 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar8 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
    iVar8 = *(int *)(param_2 + 0x118);
  }
  lVar4 = local_60;
  iVar6 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar5 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ != iVar8 || local_60 != local_78) {
    do {
      lVar11 = *(longlong *)(*(longlong *)(param_2 + 0xf0) + (longlong)iVar5 * 0x10);
      if (lVar11 != 0) {
        FUN_141068718(local_70,param_2,lVar11,0);
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      lVar11 = *(longlong *)(lVar4 + 0x10);
      if (*(longlong *)(lVar4 + 0x10) == 0) {
        lVar11 = lVar4;
      }
      iVar2 = *(int *)(lVar4 + 0x18);
      lVar9 = (longlong)iVar6;
      uVar7 = *(uint *)(lVar11 + lVar9 * 4) & uVar14;
      if (uVar7 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar3 = iVar5;
        if (iVar5 < iVar6) {
          iVar3 = iVar6;
        }
        if (iVar6 < iVar5) {
          lVar10 = 0;
          do {
            uVar7 = *(uint *)(lVar11 + lVar9 * 4 + 4 + lVar10 * 4);
            if (uVar7 != 0) {
              iVar6 = iVar6 + (int)lVar10 + 1;
              uVar14 = 0xffffffff;
              goto LAB_14106866b;
            }
            iVar12 = iVar12 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar3 - lVar9 != lVar10);
          uVar14 = 0xffffffff;
          iVar6 = iVar3;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar2;
      }
      else {
LAB_14106866b:
        uVar13 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
    } while (iVar5 != iVar8 || lVar4 != local_78);
  }
  FUN_1457e6bf2((longlong *)(param_2 + 0xf0));
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141068718 FUN_141068718 body=289 status=ok
// SIG undefined FUN_141068718(void)

void FUN_141068718(undefined8 param_1,longlong param_2,ulonglong param_3,char param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_3 != 0) && (param_2 != 0)) && (*(int *)(param_3 + 0x20) != 0)) &&
     (*(int *)(param_2 + 0xf8) != *(int *)(param_2 + 0x124))) {
    uVar1 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_2 + 0x128;
    if (*(longlong *)(param_2 + 0x130) != 0) {
      lVar2 = *(longlong *)(param_2 + 0x130);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_2 + 0x138) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)(param_2 + 0xf0);
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar3 * 0x10) == param_3) {
          local_30 = *(undefined4 *)(param_3 + 0x28);
          local_38 = *(undefined8 *)(param_3 + 0x20);
          FUN_1410688f0(param_1,&local_38,0);
          if (param_4 != '\0') {
            FUN_1489ad8d8((longlong *)(param_2 + 0xf0),param_3);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + lVar2 + 8);
      } while (iVar3 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410688f0 FUN_1410688f0 body=378 status=ok
// SIG undefined FUN_1410688f0(void)

void FUN_1410688f0(longlong param_1,undefined8 *param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80 [4];
  undefined8 local_7c;
  uint local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60 [4];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(int *)(param_1 + 0x8c) != 0) && (uVar1 = *(uint *)(param_1 + 0x88), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x8c))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar2 = *plVar5, lVar2 != 0)))) {
      uVar3 = FUN_1447210f0(lVar2);
      lVar4 = FUN_140149a73(uVar3,0);
      if (lVar4 != 0) {
        local_60[0] = FUN_141068a6c(lVar2);
        plVar5 = (longlong *)FUN_141068ae8(lVar4);
        if (plVar5 != (longlong *)0x0) {
          FUN_144928b90(local_60,8);
          local_70 = *param_2;
          local_68 = *(undefined4 *)(param_2 + 1);
          FUN_144928d62(local_50,1);
          local_80[0] = 1;
          local_74 = (uint)param_3;
          puVar6 = &DAT_14cb7c580;
          if (param_3 != 0) {
            puVar6 = &DAT_14cb7c588;
          }
          local_7c = *puVar6;
          local_88 = 0;
          (**(code **)(*plVar5 + 0x28))(plVar5,local_60,local_80,0);
          if (local_38 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141068a6c FUN_141068a6c body=123 status=ok
// SIG undefined FUN_141068a6c(void)

undefined8 FUN_141068a6c(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_1447210f0();
  lVar2 = FUN_1400f6f32(uVar1);
  uVar1 = 0xffffffff;
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x68), lVar2 != 0)) {
    FUN_14042af24(lVar2,local_24,param_1);
    uVar1 = FUN_140b9fef0(lVar2,local_24,0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141068ae8 FUN_141068ae8 body=116 status=ok
// SIG undefined FUN_141068ae8(void)

undefined8 FUN_141068ae8(longlong param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar1 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xb0);
    }
    iVar2 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xb8) - 1U & *param_2) * 4);
    if (iVar2 != -1) {
      while (lVar1 = *(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x58,
            *(uint *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x58) != *param_2) {
        iVar2 = *(int *)(lVar1 + 0x50);
        if (iVar2 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      if (lVar1 == -8) {
        return 0;
      }
      return *(undefined8 *)(lVar1 + 0x40);
    }
  }
  return 0;
}



// FUNCTION 141068b5c FUN_141068b5c body=230 status=ok
// SIG undefined FUN_141068b5c(void)

undefined2 * FUN_141068b5c(undefined8 param_1,undefined2 *param_2,int *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [36];
  undefined1 local_44 [12];
  undefined8 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)(param_2 + 8);
  if (*param_3 != 0) {
    *param_2 = 0xb;
    *(undefined8 *)(param_2 + 2) = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    local_30 = param_3[2];
    local_38 = *(undefined8 *)param_3;
    FUN_144928d62(puVar1,0,&local_38);
    uVar2 = FUN_141068cca(param_1);
    FUN_141068c44(param_1,local_44);
    FUN_140d84843(param_2,local_44,&DAT_14c948618,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141068c44 FUN_141068c44 body=134 status=ok
// SIG undefined FUN_141068c44(void)

undefined8 * FUN_141068c44(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    *param_2 = DAT_14c948618;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_140e2989e(0,param_2);
        return param_2;
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
    FUN_140e2989e(*(undefined8 *)(param_1 + 0x18),param_2);
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



// FUNCTION 141068cca FUN_141068cca body=115 status=ok
// SIG undefined FUN_141068cca(void)

undefined8 FUN_141068cca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
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
    uVar6 = FUN_140db90e8(*(undefined8 *)(param_1 + 0x18));
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



// FUNCTION 141068d3e FUN_141068d3e body=664 status=ok
// SIG undefined FUN_141068d3e(void)

/* WARNING: Removing unreachable block (ram,0x000141068f76) */

longlong * FUN_141068d3e(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  void *_Src;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  undefined2 *puVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_c8 [39];
  char local_a1;
  uint local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  ulonglong uStack_80;
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = 0;
  param_1[1] = 0;
  uVar6 = 0;
  local_a1 = param_3;
LAB_141068d87:
  FUN_141068fd8(local_70,uVar6);
  iVar4 = (int)param_2[1];
  iVar7 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  if (iVar7 < 1) {
LAB_141068da8:
    local_88 = (void *)0x0;
    uStack_80 = 0;
    if (DAT_14cadc0a8 != DAT_14cadc0d4) {
      puVar3 = DAT_14cadc0e0;
      if (DAT_14cadc0e0 == (undefined *)0x0) {
        puVar3 = &DAT_14cadc0d8;
      }
      iVar4 = *(int *)(puVar3 + (ulonglong)(DAT_14cadc0e8 + 0x7fU & uVar6) * 4);
      for (iVar7 = iVar4; iVar7 != -1;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + DAT_14cadc0a0 + 0x18)) {
        if (*(uint *)(DAT_14cadc0a0 + (longlong)iVar7 * 0x20) == uVar6) goto LAB_141068dfd;
      }
    }
    if (local_a1 == '\0') goto LAB_141068eda;
    local_90 = 0;
    goto LAB_141068fc0;
  }
  if (iVar4 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  cVar2 = FUN_144a791f8(local_70,puVar5,iVar7,1);
  if (cVar2 != '\0') goto LAB_141068da8;
  goto LAB_141068eda;
  while (iVar4 = *(int *)(lVar8 + 0x18), iVar4 != -1) {
LAB_141068dfd:
    lVar8 = DAT_14cadc0a0 + (longlong)iVar4 * 0x20;
    if (*(uint *)(DAT_14cadc0a0 + (longlong)iVar4 * 0x20) == uVar6) goto LAB_141068e11;
  }
  lVar8 = 0;
LAB_141068e11:
  iVar4 = *(int *)(lVar8 + 0x10) + -1;
  if (*(int *)(lVar8 + 0x10) == 0) {
    iVar4 = 0;
  }
  FUN_1402980a2(&local_88,*(undefined8 *)(lVar8 + 8),iVar4);
  _Src = local_88;
  lVar8 = (longlong)(int)uStack_80;
  local_98 = (void *)0x0;
  local_90 = CONCAT44(local_90._4_4_,(int)uStack_80);
  if (lVar8 == 0) {
LAB_141068fc0:
    local_98 = (void *)0x0;
    local_90 = local_90 & 0xffffffff;
    local_a0 = uVar6;
  }
  else {
    local_a0 = uVar6;
    FUN_1446dd670(&local_98,uStack_80 & 0xffffffff,0);
    memcpy(local_98,_Src,lVar8 * 2);
  }
  iVar4 = (int)param_1[1];
  lVar8 = (longlong)iVar4;
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_1457e6d7c(param_1,iVar4);
  }
  lVar1 = *param_1;
  *(uint *)(lVar1 + lVar8 * 0x18) = local_a0;
  *(undefined8 *)(lVar1 + 8 + lVar8 * 0x18) = 0;
  *(void **)(lVar1 + 8 + lVar8 * 0x18) = local_98;
  *(undefined4 *)(lVar1 + 0x10 + lVar8 * 0x18) = (undefined4)local_90;
  *(undefined4 *)(lVar1 + 0x14 + lVar8 * 0x18) = local_90._4_4_;
  local_90 = 0;
  local_98 = (void *)0x0;
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_141068eda:
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  uVar6 = uVar6 + 1;
  if (uVar6 == 0x51) {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
  goto LAB_141068d87;
}



// FUNCTION 141068fd8 FUN_141068fd8 body=326 status=ok
// SIG undefined FUN_141068fd8(void)

undefined8 * FUN_141068fd8(undefined8 *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  void *_Src;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = (longlong *)FUN_14106911f();
  uVar4 = 0xffffffff;
  if (0 < (longlong)(int)plVar3[9]) {
    plVar5 = (longlong *)(plVar3[8] + 8);
    uVar6 = 0;
    do {
      if (*plVar5 == (longlong)param_2) {
        uVar4 = uVar6 & 0xffffffff;
        break;
      }
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 2;
    } while ((longlong)(int)plVar3[9] != uVar6);
  }
  (**(code **)(*plVar3 + 0x2b0))(plVar3,local_30,uVar4);
  plVar3 = local_30[0];
  if (*(code **)(*local_30[0] + 0x50) != FUN_144828418) {
    plVar3 = (longlong *)(**(code **)(*local_30[0] + 0x50))();
  }
  FUN_1447a1fc0(plVar3);
  pcVar2 = *(code **)(*local_30[0] + 0x28);
  if (pcVar2 == FUN_14482841c) {
    plVar3 = local_30[0] + 3;
    if (local_30[0][5] != 0) {
      plVar3 = (longlong *)(local_30[0][5] + 8);
    }
  }
  else if (pcVar2 == (code *)&LAB_14010c34c) {
    plVar3 = local_30[0] + 2;
  }
  else {
    plVar3 = (longlong *)(*pcVar2)(local_30[0]);
  }
  *param_1 = 0;
  iVar1 = (int)plVar3[1];
  _Src = (void *)*plVar3;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14106911f FUN_14106911f body=57 status=ok
// SIG undefined FUN_14106911f(void)

void FUN_14106911f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac15a8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac15a8 = FUN_14171c317(FUN_146379956,uVar1,L"EGbxPerfEnvInfoKey");
  }
  return;
}



// FUNCTION 141069158 FUN_141069158 body=113 status=ok
// SIG undefined FUN_141069158(void)

void FUN_141069158(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b242780;
  FUN_1410691c9(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x14];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14b2431f0;
  FUN_141069212(param_1 + 0xb);
  FUN_140d8c2c6(param_1);
  return;
}



// FUNCTION 1410691c9 FUN_1410691c9 body=73 status=ok
// SIG undefined FUN_1410691c9(void)

void FUN_1410691c9(longlong param_1,int param_2)

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



// FUNCTION 141069212 FUN_141069212 body=185 status=ok
// SIG undefined FUN_141069212(void)

void FUN_141069212(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    if ((longlong)(int)param_1[1] != 0) {
      lVar4 = *param_1;
      lVar3 = (longlong)(int)param_1[1] << 5;
      do {
        FUN_140457ffc(*(longlong *)(lVar4 + 0x10) + 0x18,lVar4);
        lVar4 = lVar4 + 0x20;
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
    }
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  }
  plVar1 = param_1 + 2;
  if ((int)param_1[3] != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14106924b;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14106924b:
  FUN_1410692cb(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1410692cb FUN_1410692cb body=77 status=ok
// SIG undefined FUN_1410692cb(void)

void FUN_1410692cb(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x18);
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141069322 FUN_141069322 body=1245 status=ok
// SIG undefined FUN_141069322(void)

undefined8
FUN_141069322(undefined1 *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1,1);
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,1);
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,1);
  }
  else {
    param_1[2] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_2c = (uint)(byte)param_1[0x30];
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    param_1[0x30] = local_2c != 0;
  }
  else {
    param_1[0x30] = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 4,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1 + 8,1);
  }
  else {
    param_1[8] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0xc,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x10,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_2c = (uint)(byte)param_1[0x14];
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    param_1[0x14] = local_2c != 0;
  }
  else {
    param_1[0x14] = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x18,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x20,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x24,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 0x120))(param_2,param_1 + 0x28);
  *param_4 = 1;
  bVar8 = param_1[0x30];
  if (bVar8 == 0) {
    cVar7 = FUN_1406076b2(param_1 + 0x50);
    uVar9 = 0;
    if (cVar7 != '\0') {
      uVar9 = *param_4;
    }
    *param_4 = uVar9;
    bVar8 = param_1[0x30];
  }
  else if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_1 + 0x60) = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar4 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x50) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(undefined4 *)(param_1 + 0x5c) = uVar6;
  }
  if ((bVar8 & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(undefined8 *)(param_1 + 0x48) = DAT_14c8464f0;
      uVar6 = DAT_14c8464e8._4_4_;
      uVar5 = (undefined4)DAT_14c8464e8;
      uVar4 = DAT_14c8464e0._4_4_;
      *(undefined4 *)(param_1 + 0x38) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)(param_1 + 0x3c) = uVar4;
      *(undefined4 *)(param_1 + 0x40) = uVar5;
      *(undefined4 *)(param_1 + 0x44) = uVar6;
    }
  }
  else {
    cVar7 = FUN_1401b2392(param_1 + 0x38);
    uVar9 = 0;
    if (cVar7 != '\0') {
      uVar9 = *param_4;
    }
    *param_4 = uVar9;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141069800 FUN_141069800 body=175 status=ok
// SIG undefined FUN_141069800(void)

void FUN_141069800(longlong param_1,int param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)((longlong)param_2 * 0x18 + *(longlong *)(param_1 + 8));
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_1410698b0((longlong *)(param_3 + 8),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 0x18);
  puVar1[1] = 0;
  lVar3 = puVar4[1];
  if (lVar3 == 0) {
    *puVar1 = *puVar4;
    lVar3 = puVar4[1];
  }
  puVar1[1] = lVar3;
  puVar4[1] = 0;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar4 + 2);
  *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)((longlong)puVar4 + 0x14);
  puVar4[2] = 0x100000000;
  FUN_14006c794(param_1 + 8,param_2,1);
  return;
}



// FUNCTION 1410698b0 FUN_1410698b0 body=373 status=ok
// SIG undefined FUN_1410698b0(void)

void FUN_1410698b0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14106993b;
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
LAB_14106993b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 141069a62 FUN_141069a62 body=136 status=ok
// SIG undefined FUN_141069a62(void)

undefined8 FUN_141069a62(undefined2 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = (*(int *)(param_1 + 2) / 2) % 3;
  if (((iVar2 == 0) || ((*(int *)(param_1 + 2) / 6 & 0x80000001U) != 1)) &&
     (iVar2 != 2 || param_2 != 1)) {
    cVar1 = FUN_144880847(*param_1,0);
    if (cVar1 != '\0') {
      uVar3 = FUN_140bb8ec0(param_1,param_2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 141069aea FUN_141069aea body=124 status=ok
// SIG undefined FUN_141069aea(void)

undefined8 * FUN_141069aea(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a9a1ba0;
  param_1[5] = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    FUN_144757f48(param_1,0x1000000);
  }
  return param_1;
}



// FUNCTION 141069b66 FUN_141069b66 body=244 status=ok
// SIG undefined FUN_141069b66(void)

undefined8 FUN_141069b66(longlong param_1,int *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x120);
  if (lVar2 != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x118);
    lVar2 = lVar2 * 0x150;
    do {
      if (*(int *)(lVar4 + 0x108) == *param_2) {
        *(char *)(lVar4 + 0x10d) = param_3;
        *(byte *)(lVar4 + 0x10c) = *(byte *)(lVar4 + 0x10c) & 0xfe | param_3 != -1;
        FUN_140705884(*(undefined8 *)(param_1 + 0xa0),lVar4);
        if ((((*(int *)(param_1 + 0x140) != 0) &&
             (uVar1 = *(uint *)(param_1 + 0x13c), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
           && (((plVar3 = (longlong *)
                          ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0x140))) &&
               (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
                ((longlong *)*plVar3 != (longlong *)0x0)))))) {
          (**(code **)(*(longlong *)*plVar3 + 0x578))();
        }
        if (*(char *)(param_1 + 0x147) == '\x01') {
          FUN_141069c5a(param_1);
        }
        FUN_141069ce4(param_1,lVar4);
        return 1;
      }
      lVar4 = lVar4 + 0x150;
      lVar2 = lVar2 + -0x150;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 141069c5a FUN_141069c5a body=138 status=ok
// SIG undefined FUN_141069c5a(void)

void FUN_141069c5a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  
  *(undefined4 *)(param_1 + 0x9c) = 0;
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x120), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(lVar2 + 0x118);
    lVar4 = 0;
    iVar5 = 0;
    do {
      if ((*(int *)(lVar2 + 0x108 + lVar4) != -1) &&
         ((*(char *)(param_1 + 0x147) != '\x01' || (*(char *)(lVar2 + 0x10d + lVar4) == -1)))) {
        lVar3 = *(longlong *)(lVar2 + 0x18 + lVar4);
        if (lVar3 == 0) {
          bVar6 = 0;
        }
        else {
          bVar6 = *(byte *)(lVar3 + 0x239);
        }
        iVar5 = iVar5 + (uint)bVar6;
        *(int *)(param_1 + 0x9c) = iVar5;
      }
      lVar4 = lVar4 + 0x150;
    } while ((longlong)iVar1 * 0x150 - lVar4 != 0);
  }
  return;
}



// FUNCTION 141069ce4 FUN_141069ce4 body=238 status=ok
// SIG undefined FUN_141069ce4(void)

void FUN_141069ce4(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_2 + 0x108);
  if (iVar1 == -1) {
    if (*(int *)(param_2 + 0x140) != -1) {
      FUN_141069e76(param_1 + 0x30,param_2 + 0x140,*(undefined1 *)(param_2 + 0x144));
      *(undefined4 *)(param_2 + 0x140) = 0xffffffff;
      *(undefined1 *)(param_2 + 0x144) = 0xff;
    }
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xf8);
    if ((iVar1 == *(int *)(param_2 + 0x140)) && (uVar2 <= *(uint *)(param_2 + 0x148))) {
      if (uVar2 < *(uint *)(param_2 + 0x148)) {
        *(uint *)(param_2 + 0x148) = uVar2;
        local_24 = iVar1;
        FUN_141069e76(param_1 + 0x30,&local_24,*(undefined1 *)(param_2 + 0x10d));
      }
    }
    else {
      *(int *)(param_2 + 0x140) = iVar1;
      *(uint *)(param_2 + 0x148) = uVar2;
      FUN_141069dd4(param_1 + 0x18,param_2 + 0x10);
    }
    *(undefined1 *)(param_2 + 0x144) = *(undefined1 *)(param_2 + 0x10d);
    FUN_141069dd4(param_1,param_2 + 0x10);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141069dd4 FUN_141069dd4 body=162 status=ok
// SIG undefined FUN_141069dd4(void)

void FUN_141069dd4(longlong *param_1,undefined8 param_2)

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
        goto LAB_141069e61;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_141069e61:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141069e76 FUN_141069e76 body=173 status=ok
// SIG undefined FUN_141069e76(void)

void FUN_141069e76(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_141069f0d;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_141069f0d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 141069f23 FUN_141069f23 body=38 status=ok
// SIG undefined FUN_141069f23(void)

void FUN_141069f23(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141069f4a(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 141069f4a FUN_141069f4a body=183 status=ok
// SIG undefined FUN_141069f4a(void)

void FUN_141069f4a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_144760e21(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14106a04a(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_14106a001(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000141069ffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14106a001 FUN_14106a001 body=73 status=ok
// SIG undefined FUN_14106a001(void)

void FUN_14106a001(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14106a04a FUN_14106a04a body=75 status=ok
// SIG undefined FUN_14106a04a(void)

void FUN_14106a04a(longlong param_1,int param_2)

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



// FUNCTION 14106a096 FUN_14106a096 body=147 status=ok
// SIG undefined FUN_14106a096(void)

void FUN_14106a096(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b42b950;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421610;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_14106a0fe;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14106a0fe:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014106a116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14106a12a FUN_14106a12a body=207 status=ok
// SIG undefined FUN_14106a12a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14106a12a(void)

{
  if ((DAT_14ca9ef9f & 2) == 0) {
    DAT_14ca9ef9f = DAT_14ca9ef9f | 2;
    _DAT_14ca9ef40 = L"FShaderUniformBufferParameter";
    _DAT_14ca9ef58 = FUN_146826540;
    _DAT_14ca9ef60 = FUN_146825d77;
    _DAT_14ca9ef68 = FUN_146825fd6;
    _DAT_14ca9ef70 = FUN_1407e02ea;
    _DAT_14ca9ef78 = FUN_146826273;
    _DAT_14ca9ef50 = &LAB_1474409a6;
    _DAT_14ca9ef90 = 0xffffffff00000002;
    _DAT_14ca9ef98 = 2;
    DAT_14ca9ef9c = 0;
    _DAT_14ca9ef80 = &LAB_1474409ac;
    FUN_1457e6f1a();
    FUN_1407e00cc(&DAT_14ca9ef38);
  }
  return &DAT_14ca9ef38;
}



// FUNCTION 14106a1fa FUN_14106a1fa body=774 status=ok
// SIG undefined FUN_14106a1fa(void)

undefined8 FUN_14106a1fa(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (lVar7 == 0) {
    uVar6 = FUN_14110242a();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x10) = lVar7;
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar6 = 0;
    if ((lVar7 == 0) || (*plVar1 == 0)) goto LAB_14106a375;
    plVar4 = *(longlong **)(lVar7 + 0xb8);
    if (plVar4 == (longlong *)0x0) {
LAB_14106a3ca:
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar5 == '\0') goto LAB_14106a3ca;
      uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
      lVar7 = FUN_144aff482(uVar6,plVar1);
      *(longlong *)(param_1 + 0x18) = lVar7;
      if (lVar7 != 0) goto LAB_14106a292;
    }
    uVar6 = 0;
    goto LAB_14106a375;
  }
LAB_14106a292:
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  uVar6 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    *local_40 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_40[2] = lVar8;
    *local_40 = &PTR_FUN_14b42b0c0;
    local_40[3] = uVar6;
    local_40[4] = 0;
    local_40[5] = &LAB_140834d7c;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *local_40 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_40[2] = lVar8;
    *local_40 = &PTR_FUN_14b42b0c0;
    local_40[3] = uVar6;
    local_40[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    local_40[5] = &LAB_140834d7c;
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
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (lVar7 == 0) {
    uVar6 = FUN_14110242a();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x10) = lVar7;
  }
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
    plVar4 = *(longlong **)(lVar7 + 0xb8);
    if (plVar4 == (longlong *)0x0) {
LAB_14106a4fd:
      lVar8 = 0;
    }
    else {
      cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar5 == '\0') goto LAB_14106a4fd;
      uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
      lVar8 = FUN_144aff482(uVar6,plVar1);
    }
    *(longlong *)(param_1 + 0x18) = lVar8;
  }
  (**(code **)(*param_2 + 0x28))(param_2,lVar8,&local_40);
  if (local_38 == 0) {
LAB_14106a365:
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_14106a365;
  }
  uVar6 = 1;
LAB_14106a375:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14106a502 FUN_14106a502 body=407 status=ok
// SIG undefined FUN_14106a502(void)

void FUN_14106a502(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  ulonglong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (undefined8 *)0x0) {
    lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x50);
    if (lVar2 != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
      lVar3 = 0;
      lVar6 = 0;
      do {
        if (*(undefined8 **)(lVar5 + lVar3) == param_2) {
          lVar5 = lVar5 - lVar6;
          if (lVar5 != 0) {
            local_38 = (undefined8 *)0x0;
            local_30 = local_30 & 0xffffffff00000000;
            FUN_14114e6dc(&local_38,param_3);
            FUN_140c6314c(lVar5 + 8,local_40,&local_38);
            puVar4 = local_38;
            if ((int)local_30 == 0) goto LAB_14106a663;
            if (local_38 == (undefined8 *)0x0) goto LAB_14106a668;
            (**(code **)*local_38)(local_38,0);
            FUN_1446efa72(&local_38,0,0,0x10);
            local_30 = local_30 & 0xffffffff00000000;
            puVar4 = local_38;
            goto LAB_14106a663;
          }
          break;
        }
        lVar6 = lVar6 + -0x90;
        lVar3 = lVar3 + 0x90;
      } while (-lVar6 != lVar2 * 0x90);
    }
    local_30 = 0;
    local_28 = 0;
    local_38 = param_2;
    FUN_14114e6dc(&local_30,param_3);
    iVar1 = *(int *)(param_1 + 800);
    lVar2 = (longlong)iVar1;
    *(uint *)(param_1 + 800) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x324) < iVar1 + 1U) {
      FUN_145f9f18e(param_1 + 0x228,iVar1);
    }
    lVar5 = param_1 + 0x228;
    if (*(longlong *)(param_1 + 0x318) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x318);
    }
    *(undefined8 **)(lVar5 + lVar2 * 0x18) = local_38;
    *(undefined8 *)(lVar5 + 8 + lVar2 * 0x18) = 0;
    *(undefined4 *)(lVar5 + 0x10 + lVar2 * 0x18) = 0;
    *(ulonglong *)(lVar5 + 8 + lVar2 * 0x18) = local_30;
    local_30 = 0;
    *(undefined4 *)(lVar5 + 0x10 + lVar2 * 0x18) = local_28;
    local_28 = 0;
    puVar4 = (undefined8 *)0x0;
LAB_14106a663:
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14106a668:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14106a69a FUN_14106a69a body=172 status=ok
// SIG undefined FUN_14106a69a(void)

void FUN_14106a69a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_30 = *(undefined8 *)(param_2 + 8);
    plVar2 = *(longlong **)(param_2 + 0x10);
    if (plVar2 == (longlong *)0x0) {
      local_28 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      local_28 = plVar2;
    }
    local_20 = &local_30;
    FUN_14106a748(param_1 + 0x90);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14106a748 FUN_14106a748 body=776 status=ok
// SIG undefined FUN_14106a748(void)

int FUN_14106a748(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  bool bVar17;
  bool bVar18;
  
  iVar11 = (int)param_1[1];
  lVar12 = (longlong)iVar11;
  if (lVar12 == 0) {
    iVar11 = 0;
  }
  else {
    plVar2 = (longlong *)*param_1;
    plVar3 = (longlong *)*param_2;
    plVar16 = (longlong *)plVar2[1];
    if (plVar16 == (longlong *)0x0) {
LAB_14106a9d8:
      plVar16 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar16[1];
      do {
        if (iVar6 == 0) goto LAB_14106a9d8;
        LOCK();
        iVar10 = (int)plVar16[1];
        bVar17 = iVar6 == iVar10;
        if (bVar17) {
          *(int *)(plVar16 + 1) = iVar6 + 1;
          iVar10 = iVar6;
        }
        iVar6 = iVar10;
        UNLOCK();
      } while (!bVar17);
    }
    lVar15 = *plVar2;
    plVar4 = (longlong *)plVar3[1];
    if (plVar4 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      iVar6 = (int)plVar4[1];
      lVar7 = 0;
      do {
        if (iVar6 == 0) goto LAB_14106a7d4;
        LOCK();
        iVar10 = (int)plVar4[1];
        bVar17 = iVar6 == iVar10;
        if (bVar17) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
          iVar10 = iVar6;
        }
        iVar6 = iVar10;
        UNLOCK();
      } while (!bVar17);
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
LAB_14106a7d4:
    iVar6 = 0;
    if (plVar16 == (longlong *)0x0) {
      lVar15 = 0;
    }
    else {
      LOCK();
      plVar3 = plVar16 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    iVar10 = 0;
    bVar17 = lVar15 == lVar7;
    do {
      lVar7 = (longlong)iVar10;
      lVar15 = lVar7;
      iVar14 = iVar10 + 1;
      if (iVar10 + 1 < iVar11) {
        iVar14 = iVar11;
      }
      do {
        lVar15 = lVar15 + 1;
        if (lVar12 <= lVar15) goto LAB_14106a8bb;
        plVar3 = (longlong *)*param_2;
        plVar16 = (longlong *)plVar2[lVar15 * 2 + 1];
        if (plVar16 == (longlong *)0x0) {
LAB_14106a960:
          plVar16 = (longlong *)0x0;
        }
        else {
          iVar8 = (int)plVar16[1];
          do {
            if (iVar8 == 0) goto LAB_14106a960;
            LOCK();
            iVar5 = (int)plVar16[1];
            bVar18 = iVar8 == iVar5;
            if (bVar18) {
              *(int *)(plVar16 + 1) = iVar8 + 1;
              iVar5 = iVar8;
            }
            iVar8 = iVar5;
            UNLOCK();
          } while (!bVar18);
        }
        lVar9 = plVar2[lVar15 * 2];
        plVar4 = (longlong *)plVar3[1];
        if (plVar4 == (longlong *)0x0) {
LAB_14106a968:
          lVar13 = 0;
        }
        else {
          iVar8 = (int)plVar4[1];
          do {
            if (iVar8 == 0) goto LAB_14106a968;
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
          lVar13 = *plVar3;
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
        if (plVar16 == (longlong *)0x0) {
          lVar9 = 0;
        }
        else {
          LOCK();
          plVar3 = plVar16 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      } while (bVar17 == (lVar9 == lVar13));
      iVar14 = (int)lVar15;
LAB_14106a8bb:
      iVar8 = iVar14 - iVar10;
      if (bVar17 == false) {
        if (iVar6 != iVar10) {
          memmove(plVar2 + (longlong)iVar6 * 2,plVar2 + lVar7 * 2,(longlong)iVar8 << 4);
        }
        iVar6 = iVar6 + iVar8;
      }
      else {
        FUN_14106aa50(plVar2 + lVar7 * 2,iVar8);
      }
      iVar10 = iVar14;
      bVar17 = (bool)(bVar17 ^ 1);
    } while (lVar15 < lVar12);
    *(int *)(param_1 + 1) = iVar6;
    iVar11 = iVar11 - iVar6;
  }
  return iVar11;
}



// FUNCTION 14106aa50 FUN_14106aa50 body=56 status=ok
// SIG undefined FUN_14106aa50(void)

void FUN_14106aa50(longlong param_1,int param_2)

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



// FUNCTION 14106aa90 FUN_14106aa90 body=344 status=ok
// SIG undefined FUN_14106aa90(void)

undefined8 * FUN_14106aa90(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14b222840;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xf8;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 2;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x1c] = &PTR_FUN_14b222bd0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 2;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 2;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x43) = 2;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x46) = 2;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf8;
  return param_1;
}



// FUNCTION 14106abe8 FUN_14106abe8 body=213 status=ok
// SIG undefined FUN_14106abe8(void)

void FUN_14106abe8(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  plVar2 = *(longlong **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14106acbe(param_1,param_2,0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_140705884(param_2,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14106acbe FUN_14106acbe body=133 status=ok
// SIG undefined FUN_14106acbe(void)

void FUN_14106acbe(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x48);
  if (uVar3 == param_3) {
    return;
  }
  if ((uVar3 != 0) && (lVar1 = *(longlong *)(param_2 + 0x148), lVar1 != 0)) {
    uVar2 = *(uint *)(lVar1 + 0x30);
    uVar3 = uVar2 | 1 << (uVar3 & 0x1f);
    *(uint *)(lVar1 + 0x30) = uVar3;
    if (uVar3 != uVar2) {
      FUN_1406462da();
    }
  }
  *(uint *)(param_1 + 0x48) = param_3;
  if ((param_3 != 0) && (lVar1 = *(longlong *)(param_2 + 0x148), lVar1 != 0)) {
    uVar3 = *(uint *)(lVar1 + 0x30);
    uVar2 = uVar3 | 1 << (param_3 & 0x1f);
    *(uint *)(lVar1 + 0x30) = uVar2;
    if (uVar2 != uVar3) {
      FUN_1406462da();
    }
  }
  FUN_140705884(param_2,param_1);
  return;
}



// FUNCTION 14106ad44 FUN_14106ad44 body=147 status=ok
// SIG undefined FUN_14106ad44(void)

void FUN_14106ad44(uint *param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint *puVar6;
  ulonglong uVar5;
  
  if (0xffffff < param_2) {
    uVar4 = param_2 & 0xffffff;
    uVar5 = (ulonglong)uVar4;
    lVar2 = *(longlong *)(param_1 + 2);
    uVar1 = *(uint *)(lVar2 + uVar5 * 4);
    if ((uVar1 ^ param_2) < 0x1000000) {
      *(uint *)(lVar2 + uVar5 * 4) = uVar1 + 0x1000000;
      puVar6 = param_1 + 6;
      if (*(uint **)(param_1 + 10) != (uint *)0x0) {
        puVar6 = *(uint **)(param_1 + 10);
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar6[uVar4 >> 5] = puVar6[uVar4 >> 5] & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_1[0x12] = param_1[0x12] - 1;
      if (0xffffff < *(uint *)(lVar2 + uVar5 * 4)) {
        if (*param_1 != 0xffffff) {
          *(uint *)(*(longlong *)(param_1 + 2) + uVar5 * 4) =
               *param_1 & 0xffffff |
               (uint)*(byte *)(*(longlong *)(param_1 + 2) + 3 + uVar5 * 4) << 0x18;
        }
        *param_1 = uVar4;
      }
    }
  }
  return;
}



// FUNCTION 14106add8 FUN_14106add8 body=957 status=ok
// SIG undefined FUN_14106add8(void)

undefined8 * FUN_14106add8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar9 = param_2;
  puVar10 = param_1;
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  uVar3 = param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1457e7094(param_1 + 9,iVar1,0);
    FUN_1457e7067(param_1[9],uVar3,iVar1);
  }
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar4 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar4,(longlong)iVar1 * 2);
  }
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0xf);
  pvVar4 = (void *)param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],pvVar4,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x83) = *(undefined4 *)((longlong)param_2 + 0x83);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x12);
  uVar3 = param_2[0x11];
  *(int *)(param_1 + 0x12) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_148c6e584(param_1 + 0x11,iVar1,0);
    FUN_148c6e5f7(param_1[0x11],uVar3,iVar1);
  }
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_2 + 0x15);
  uVar3 = param_2[0x14];
  *(int *)(param_1 + 0x15) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_14106b4ae(param_1 + 0x14,iVar1,0);
    FUN_14106b195(param_1[0x14],uVar3,iVar1);
  }
  param_1[0x18] = param_2[0x18];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xb4);
  uVar6 = *(undefined4 *)(param_2 + 0x17);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar2;
  *(undefined4 *)(param_1 + 0x17) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar7;
  plVar5 = (longlong *)param_2[0x19];
  param_1[0x19] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  plVar5 = (longlong *)param_2[0x1b];
  param_1[0x1b] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  param_1[0x1e] = 0;
  iVar1 = *(int *)(param_2 + 0x1f);
  pvVar4 = (void *)param_2[0x1e];
  *(int *)(param_1 + 0x1f) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
  else {
    FUN_1412dfed2(param_1 + 0x1e,iVar1,0);
    memcpy((void *)param_1[0x1e],pvVar4,(longlong)iVar1 << 3);
  }
  plVar5 = (longlong *)param_2[0x20];
  param_1[0x20] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  param_1[0x22] = 0;
  iVar1 = *(int *)(param_2 + 0x23);
  uVar3 = param_2[0x22];
  *(int *)(param_1 + 0x23) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  else {
    FUN_1406fd828(param_1 + 0x22,iVar1,0);
    FUN_1406fd7df(param_1[0x22],uVar3,iVar1);
  }
  param_1[0x24] = param_2[0x24];
  uVar2 = *(undefined4 *)((longlong)param_2 + 300);
  uVar6 = *(undefined4 *)(param_2 + 0x26);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = uVar2;
  *(undefined4 *)(param_1 + 0x26) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar7;
  param_1[0x27] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  pvVar4 = (void *)param_2[0x27];
  *(int *)(param_1 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x27,iVar1,0);
    memcpy((void *)param_1[0x27],pvVar4,(longlong)iVar1 * 2);
  }
  param_1[0x29] = param_2[0x29];
  return param_1;
}



// FUNCTION 14106b195 FUN_14106b195 body=60 status=ok
// SIG undefined FUN_14106b195(void)

void FUN_14106b195(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14106b1d2(param_1,param_2);
    param_1 = param_1 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return;
}



// FUNCTION 14106b1d2 FUN_14106b1d2 body=732 status=ok
// SIG undefined FUN_14106b1d2(void)

undefined8 * FUN_14106b1d2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar2 = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
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
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  plVar3 = (longlong *)param_2[0xe];
  param_1[0xe] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  plVar3 = (longlong *)param_2[0x10];
  param_1[0x10] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  plVar3 = (longlong *)param_2[0x12];
  param_1[0x12] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  plVar3 = (longlong *)param_2[0x14];
  param_1[0x14] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  param_1[0x16] = param_2[0x16];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xbc);
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc4);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar6;
  param_1[0x19] = 0;
  iVar1 = *(int *)(param_2 + 0x1a);
  pvVar2 = (void *)param_2[0x19];
  *(int *)(param_1 + 0x1a) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x19,iVar1,0);
    memcpy((void *)param_1[0x19],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14106b4ae FUN_14106b4ae body=333 status=ok
// SIG undefined FUN_14106b4ae(void)

void FUN_14106b4ae(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0xd8;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14106b51f;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_14106b51f:
    iVar5 = (int)(uVar4 / 0xd8);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xd8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14106b5fc FUN_14106b5fc body=941 status=ok
// SIG undefined FUN_14106b5fc(void)

void FUN_14106b5fc(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  undefined1 local_c0 [64];
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar8 = FUN_14106ba94();
  FUN_14106b9aa(param_1,&local_d0);
  lVar1 = param_1 + 0x28;
  FUN_140d84843(lVar1,&local_d0,&DAT_14c948618,uVar8);
  cVar6 = FUN_1401144ce(lVar1);
  if (cVar6 == '\0') goto LAB_14106b867;
  uVar8 = FUN_140c23b2e(param_1);
  plVar9 = (longlong *)FUN_140ec3c65(uVar8);
  if (plVar9 == (longlong *)0x0) goto LAB_14106b867;
  local_d0 = (undefined8 *)0x0;
  local_c8 = 0;
  FUN_1446efa72(&local_d0,0,3,0x10);
  local_c8 = 3;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14106b8ca:
    *local_d0 = &PTR_LAB_14b3fc100;
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
    local_d0[2] = lVar11;
    *local_d0 = &PTR_FUN_14b4008c0;
    local_d0[3] = 0;
    local_d0[4] = 0;
    local_d0[5] = FUN_141088ef2;
  }
  else {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_14106b8ca;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar12 = iVar7 == iVar5;
      if (bVar12) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar12);
    uVar8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *local_d0 = &PTR_LAB_14b3fc100;
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
    local_d0[2] = lVar11;
    *local_d0 = &PTR_FUN_14b4008c0;
    local_d0[3] = uVar8;
    local_d0[4] = plVar4;
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    local_d0[5] = FUN_141088ef2;
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
  (**(code **)(*plVar9 + 0x70))(plVar9,&local_d8,lVar1,&local_d0);
  *(undefined8 *)(param_1 + 0x60) = local_d8;
  if (local_c8 == 0) {
LAB_14106b77f:
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_d0 != (undefined8 *)0x0) {
    (**(code **)*local_d0)(local_d0,0);
    FUN_1446efa72(&local_d0,0,0,0x10);
    local_c8 = 0;
    goto LAB_14106b77f;
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar10 = (**(code **)(*plVar9 + 0x60))(plVar9,lVar1);
    if (lVar10 != 0) {
      local_e8 = *(longlong *)(lVar10 + 0x10);
      if (*(longlong *)(lVar10 + 0x10) == 0) {
        local_e8 = lVar10;
      }
      local_e0 = *(undefined4 *)(lVar10 + 0x18);
      FUN_14106bb46(param_1);
    }
    cVar6 = FUN_14106ba28(param_1);
    if (cVar6 == '\0') {
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = DAT_14cb7bd68;
      local_50 = DAT_14cb7bd70;
      local_4c = DAT_14cb7bd80;
      local_44 = DAT_14cb7bd88;
      local_40 = 0;
      local_38 = 0;
      local_d0 = (undefined8 *)CONCAT71(local_d0._1_7_,3);
      FUN_140daa42e(param_1,(longlong)&local_d0 + 4);
      FUN_14106b9aa(param_1,local_c0);
      FUN_140ac173c(&local_58,lVar1);
      FUN_140daa31a(param_1,&local_d0);
    }
  }
LAB_14106b867:
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14106b9aa FUN_14106b9aa body=126 status=ok
// SIG undefined FUN_14106b9aa(void)

undefined8 * FUN_14106b9aa(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14106b9fa;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar4 + 0x34);
      *param_2 = *(undefined8 *)(lVar4 + 0x2c);
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
    if (lVar4 != 0) {
      return param_2;
    }
  }
LAB_14106b9fa:
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  *param_2 = DAT_14c948618;
  return param_2;
}



// FUNCTION 14106ba28 FUN_14106ba28 body=107 status=ok
// SIG undefined FUN_14106ba28(void)

ulonglong FUN_14106ba28(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong unaff_RBX;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14106ba74:
    bVar7 = false;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14106ba74;
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
    if (bVar7) {
      uVar6 = FUN_140daa3ac(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10));
      unaff_RBX = (ulonglong)uVar6;
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
  return CONCAT71((int7)(unaff_RBX >> 8),(byte)unaff_RBX & bVar7) & 0xffffffff;
}



// FUNCTION 14106ba94 FUN_14106ba94 body=100 status=ok
// SIG undefined FUN_14106ba94(void)

undefined8 FUN_14106ba94(longlong param_1)

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
    if (*(longlong *)(param_1 + 0x18) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_14106baf8();
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
  return uVar6;
}



// FUNCTION 14106baf8 FUN_14106baf8 body=77 status=ok
// SIG undefined FUN_14106baf8(void)

undefined8 FUN_14106baf8(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x1c);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x10) + 0x18);
  uVar3 = 0;
  if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (puVar4 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar4 + 2) != iVar1) {
      return 0;
    }
    if ((*(uint *)(puVar4 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar3 = *puVar4;
  }
  return uVar3;
}



// FUNCTION 14106bb46 FUN_14106bb46 body=1242 status=ok
// SIG undefined FUN_14106bb46(void)

void FUN_14106bb46(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  longlong *local_80;
  longlong local_78 [4];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58 = (longlong *)0x0;
  local_50 = 0x400000000;
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    puVar9 = (uint *)*param_3;
    lVar13 = (longlong)*(int *)(param_3 + 1) << 3;
    do {
      if (((((puVar9[1] == 0) || (uVar7 = *puVar9, (int)uVar7 < 0)) || (DAT_14c9647dc <= (int)uVar7)
           ) || ((plVar11 = (longlong *)
                            ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
                 plVar11 == (longlong *)0x0 || (*(uint *)(plVar11 + 2) != puVar9[1])))) ||
         (((*(uint *)(plVar11 + 1) & 0x10200000) != 0 || (lVar8 = *plVar11, lVar8 == 0)))) {
LAB_14106bd84:
        lVar8 = FUN_14479d2ce(puVar9);
        if (lVar8 != 0) {
          lVar12 = FUN_144a78d6a();
          if (((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) &&
             (lVar8 = *(longlong *)(lVar8 + 0xa8), lVar8 != 0)) goto LAB_14106bd43;
        }
      }
      else {
        if (DAT_14cac9ca8 == 0) {
          local_a0 = &local_88;
          local_88 = FUN_141030f22;
          local_90 = FUN_14081d0ea;
          local_98 = FUN_14081d0ea;
          local_a8 = &LAB_1478c0a72;
          local_b0 = &LAB_1417b2375;
          local_b8 = L"Engine";
          local_c0 = 0x1000000000;
          local_c8 = 0x10000004;
          local_d0 = 8;
          local_d8 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
        goto LAB_14106bd84;
LAB_14106bd43:
        uVar6 = local_50;
        lVar12 = (longlong)(int)local_50;
        uVar7 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar7);
        if (local_50._4_4_ < uVar7) {
          FUN_14885072a(local_78,uVar6 & 0xffffffff);
        }
        plVar11 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar11 = local_78;
        }
        plVar11[lVar12] = lVar8;
      }
      puVar9 = puVar9 + 2;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
    plVar11 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar11 = local_58;
    }
    if ((longlong)(int)local_50 != 0) {
      plVar10 = plVar11 + (int)local_50;
      do {
        lVar13 = *plVar11;
        if ((longlong)(int)param_1[0xe] != 0) {
          plVar14 = (longlong *)param_1[0xd];
          lVar8 = (longlong)(int)param_1[0xe] << 4;
          do {
            lVar12 = FUN_14479d2ce(*plVar14 + 0x28);
            if (lVar12 == lVar13) {
              if (plVar14 != (longlong *)0x0) goto LAB_14106be7b;
              break;
            }
            plVar14 = plVar14 + 2;
            lVar8 = lVar8 + -0x10;
          } while (lVar8 != 0);
        }
        (**(code **)(*param_1 + 0x30))(param_1,&local_88);
        iVar3 = (int)param_1[0xe];
        *(uint *)(param_1 + 0xe) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0x74) < iVar3 + 1U) {
          FUN_1457e70f6(param_1 + 0xd,iVar3);
        }
        plVar14 = local_80;
        lVar8 = param_1[0xd];
        lVar12 = (longlong)iVar3 * 0x10;
        *(code **)(lVar8 + lVar12) = local_88;
        *(longlong **)(lVar8 + 8 + lVar12) = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_80 + 1) = (int)local_80[1] + 1;
          UNLOCK();
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_80 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_80)(local_80);
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
        (**(code **)(**(longlong **)(lVar8 + lVar12) + 8))(*(longlong **)(lVar8 + lVar12),lVar13);
        FUN_14106ce2e(param_1);
LAB_14106be7b:
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar10);
    }
  }
  if (0 < (longlong)(int)param_1[0xe]) {
    lVar13 = (longlong)(int)param_1[0xe];
    do {
      lVar8 = (lVar13 + -1) * 0x10;
      pcVar4 = *(code **)(param_1[0xd] + lVar8);
      if ((((*(int *)(pcVar4 + 0x2c) != 0) && (uVar7 = *(uint *)(pcVar4 + 0x28), -1 < (int)uVar7))
          && (((int)uVar7 < DAT_14c9647dc &&
              ((plVar11 = (longlong *)
                          ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
               plVar11 != (longlong *)0x0 && ((int)plVar11[2] == *(int *)(pcVar4 + 0x2c))))))) &&
         (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (*plVar11 != 0)))) {
        plVar10 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar10 = local_78;
        }
        if ((longlong)(int)local_50 != 0) {
          lVar12 = 0;
          do {
            if (*(longlong *)((longlong)plVar10 + lVar12) == *plVar11) goto LAB_14106bca1;
            lVar12 = lVar12 + 8;
          } while ((longlong)(int)local_50 * 8 != lVar12);
        }
      }
      plVar11 = *(longlong **)(param_1[0xd] + lVar8 + 8);
      local_88 = pcVar4;
      local_80 = plVar11;
      if (plVar11 == (longlong *)0x0) {
        FUN_14106cd80(param_1,&local_88);
      }
      else {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        FUN_14106cd80(param_1,&local_88);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar11 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
      }
LAB_14106bca1:
      bVar5 = 1 < lVar13;
      lVar13 = lVar13 + -1;
    } while (bVar5);
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14106c02c FUN_14106c02c body=117 status=ok
// SIG undefined FUN_14106c02c(void)

void FUN_14106c02c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3fe570;
  plVar3 = (longlong *)param_1[7];
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
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014106c09d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14106c0a2 FUN_14106c0a2 body=277 status=ok
// SIG undefined FUN_14106c0a2(void)

longlong * FUN_14106c0a2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar8 = *(longlong **)(param_1 + 0x10);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_14106c161:
    uVar7 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_14106c161;
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
    uVar7 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
    bVar3 = false;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_LAB_14b400930;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[2] = &PTR_FUN_14b3fe570;
  puVar6[5] = uVar7;
  puVar6[6] = plVar8;
  if (bVar3) {
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    *param_2 = (longlong)(puVar6 + 2);
    param_2[1] = (longlong)puVar6;
    FUN_14106c1b8(param_2);
  }
  else {
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    *param_2 = (longlong)(puVar6 + 2);
    param_2[1] = (longlong)puVar6;
    FUN_14106c1b8(param_2);
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
  return param_2;
}



// FUNCTION 14106c1b8 FUN_14106c1b8 body=162 status=ok
// SIG undefined FUN_14106c1b8(void)

void FUN_14106c1b8(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14106c1f7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14106c1f7;
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
LAB_14106c1f7:
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
                    /* WARNING: Could not recover jumptable at 0x00014106c256. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14106c25a FUN_14106c25a body=1619 status=ok
// SIG undefined FUN_14106c25a(void)

void FUN_14106c25a(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x28) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar6 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar11 + 0x10);
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(lVar11 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar6 = iVar7;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar6;
    local_50 = (longlong *)0x0;
    local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
    FUN_1446efa72(&local_50,0,4,0x10);
    local_48 = (longlong *)CONCAT44(local_48._4_4_,4);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_14106c68d:
      *local_50 = (longlong)&PTR_LAB_14a3a3510;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      local_50[2] = lVar12;
      *local_50 = (longlong)&PTR_FUN_14b400850;
      local_50[3] = 0;
      local_50[4] = 0;
      local_50[5] = (longlong)FUN_148846c66;
      *(undefined4 *)(local_50 + 6) = 0;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_14106c68d;
        LOCK();
        iVar7 = (int)plVar3[1];
        bVar13 = iVar6 == iVar7;
        if (bVar13) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar7 = iVar6;
        }
        iVar6 = iVar7;
        UNLOCK();
      } while (!bVar13);
      lVar11 = *(longlong *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *local_50 = (longlong)&PTR_LAB_14a3a3510;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      local_50[2] = lVar10;
      *local_50 = (longlong)&PTR_FUN_14b400850;
      local_50[3] = lVar11;
      local_50[4] = (longlong)plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      local_50[5] = (longlong)FUN_148846c66;
      *(undefined4 *)(local_50 + 6) = 0;
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
    if (((int)local_48 == 0) || (local_50 == (longlong *)0x0)) {
LAB_14106c764:
      if ((int)local_48 != 0) {
        if (local_50 == (longlong *)0x0) goto LAB_14106c464;
        (**(code **)*local_50)(local_50,0);
        FUN_1446efa72(&local_50,0,0,0x10);
        goto LAB_14106c44e;
      }
    }
    else {
      cVar5 = (**(code **)(*local_50 + 0x30))();
      if (cVar5 == '\0') {
        goto LAB_14106c764;
      }
      plVar3 = (longlong *)(param_2 + 0x2b8);
      if (*(int *)(param_2 + 0x2cc) < 1) {
        iVar6 = *(int *)(param_2 + 0x2c0);
        iVar7 = *(int *)(param_2 + 0x2c8) + -1;
        *(int *)(param_2 + 0x2c8) = iVar7;
        if (iVar7 <= iVar6) {
          iVar7 = iVar6;
          if (0 < iVar6) {
            iVar9 = 0;
            do {
              if (((*(int *)(*plVar3 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                  (plVar4 = *(longlong **)(*plVar3 + (longlong)iVar9 * 0x10),
                  plVar4 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
                FUN_14005b288(plVar3,iVar9);
                FUN_14005b248(plVar3);
              }
              else {
                iVar9 = iVar9 + 1;
              }
              iVar7 = *(int *)(param_2 + 0x2c0);
            } while (iVar9 < iVar7);
          }
          iVar9 = 2;
          if (2 < iVar7 * 2) {
            iVar9 = iVar7 * 2;
          }
          *(int *)(param_2 + 0x2c8) = iVar9;
          if ((iVar9 < iVar6) && (*(int *)(param_2 + 0x2c4) != iVar7)) {
            FUN_14045812c();
          }
        }
      }
      if (((int)local_48 != 0) && (local_50 != (longlong *)0x0)) {
        (**(code **)(*local_50 + 0x38))(local_50,&local_60);
      }
      iVar6 = *(int *)(param_2 + 0x2c0);
      *(uint *)(param_2 + 0x2c0) = iVar6 + 1U;
      if (*(uint *)(param_2 + 0x2c4) < iVar6 + 1U) {
        FUN_1447a71f6(plVar3,iVar6);
      }
      lVar11 = *plVar3;
      lVar12 = (longlong)iVar6 * 0x10;
      *(undefined8 *)(lVar11 + lVar12) = 0;
      *(undefined4 *)(lVar11 + 8 + lVar12) = 0;
      *(longlong **)(lVar11 + lVar12) = local_50;
      local_50 = (longlong *)0x0;
      *(int *)(lVar11 + 8 + lVar12) = (int)local_48;
LAB_14106c44e:
      local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
    }
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14106c464:
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) goto LAB_14106c5a4;
  iVar6 = (int)plVar3[1];
  do {
    if (iVar6 == 0) goto LAB_14106c5a4;
    LOCK();
    iVar7 = (int)plVar3[1];
    bVar13 = iVar6 == iVar7;
    if (bVar13) {
      *(int *)(plVar3 + 1) = iVar6 + 1;
      iVar7 = iVar6;
    }
    iVar6 = iVar7;
    UNLOCK();
  } while (!bVar13);
  lVar11 = *(longlong *)(param_1 + 0x18);
  if (lVar11 != 0) {
    local_60 = 0;
    local_58 = *(longlong **)(lVar11 + 0x20);
    if (local_58 != (longlong *)0x0) {
      iVar6 = (int)local_58[1];
      do {
        if (iVar6 == 0) {
          local_58 = (longlong *)0x0;
          goto LAB_14106c4d2;
        }
        LOCK();
        iVar7 = (int)local_58[1];
        bVar13 = iVar6 == iVar7;
        if (bVar13) {
          *(int *)(local_58 + 1) = iVar6 + 1;
          iVar7 = iVar6;
        }
        iVar6 = iVar7;
        UNLOCK();
      } while (!bVar13);
      if (local_58 != (longlong *)0x0) {
        local_60 = *(undefined8 *)(lVar11 + 0x18);
      }
    }
LAB_14106c4d2:
    plVar8 = (longlong *)FUN_14001cc68(0x90,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14b400bc0;
    plVar4 = plVar8 + 2;
    FUN_14105926a(plVar4,&local_60);
    local_50 = plVar4;
    local_48 = plVar8;
    FUN_14105930c(&local_50,plVar4);
    plVar4 = local_48;
    if (local_48 == (longlong *)0x0) {
      *(longlong **)(param_1 + 0x30) = local_50;
      plVar8 = *(longlong **)(param_1 + 0x38);
      if (plVar8 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x38) = 0;
LAB_14106c7cb:
        LOCK();
        plVar4 = plVar8 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
joined_r0x00014106c806:
          if (iVar6 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x30) = local_50;
      plVar8 = *(longlong **)(param_1 + 0x38);
      if (local_48 == plVar8) {
        LOCK();
        plVar8 = local_48 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
          plVar8 = plVar4;
          goto joined_r0x00014106c806;
        }
      }
      else {
        *(longlong **)(param_1 + 0x38) = local_48;
        if (plVar8 != (longlong *)0x0) goto LAB_14106c7cb;
      }
    }
    plVar4 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_48 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    plVar4 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_58 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    FUN_14106c8ae(*(undefined8 *)(param_1 + 0x30),param_2,DAT_14cb7cbe8);
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
LAB_14106c5a4:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14106c8ae FUN_14106c8ae body=426 status=ok
// SIG undefined FUN_14106c8ae(void)

void FUN_14106c8ae(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  if ((*(longlong *)(param_1 + 0x48) == param_3) &&
     (cVar5 = FUN_14069eaf4(param_1 + 0x38,param_2), cVar5 != '\0')) {
    return;
  }
  *(longlong *)(param_1 + 0x48) = param_3;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    iVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x38) = uVar1;
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
  *(int *)(param_1 + 0x3c) = iVar6;
  lVar8 = FUN_14106ca58(param_2,param_3);
  if (lVar8 == 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    iVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar8 + 0xc);
    *(uint *)(param_1 + 0x40) = uVar1;
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
  *(int *)(param_1 + 0x44) = iVar6;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x50) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = DAT_14c8464f0;
  FUN_1447f69b6(param_1 + 0x20);
  return;
}



// FUNCTION 14106ca58 FUN_14106ca58 body=807 status=ok
// SIG undefined FUN_14106ca58(void)

longlong * FUN_14106ca58(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  ulonglong local_60;
  uint *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar14 = 0;
  if (param_1 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x4d);
    puVar12 = (uint *)(param_1 + 0x4a);
    if (uVar2 == 0) {
      uVar15 = 1;
      uVar4 = 0;
      iVar9 = 0;
    }
    else {
      puVar5 = (uint *)param_1[0x4c];
      if ((uint *)param_1[0x4c] == (uint *)0x0) {
        puVar5 = puVar12;
      }
      uVar4 = *puVar5;
      if (uVar4 == 0) {
        iVar9 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar9 = uVar2 - 1;
        }
        uVar14 = 0;
        uVar15 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar15 = uVar14;
        }
        iVar9 = 0;
        do {
          if (uVar15 == uVar14) goto LAB_14106cc3f;
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar5[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar14 = 0;
        iVar9 = 0;
      }
      uVar15 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar15 * 2 + 1;
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
      uVar16 = 0xffffffff;
      local_60 = (ulonglong)uVar2;
      do {
        plVar6 = *(longlong **)(param_1[0x48] + (longlong)(int)uVar4 * 0x10);
        if (plVar6 != (longlong *)0x0) {
          if (DAT_14cac7648 == 0) {
            local_80 = &local_50;
            local_50 = FUN_144a7958c;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_143242436;
            local_88 = &LAB_14789ef1f;
            local_90 = &LAB_1417b008f;
            local_98 = L"Engine";
            local_a0 = 0x8000000000;
            local_a8 = 0x10000004;
            local_b0 = 0x10;
            local_b8 = 0x2b0;
            local_58 = puVar12;
            FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
            puVar12 = local_58;
          }
          if (((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) ==
               DAT_14cac7648 + 0x30)) &&
             ((plVar6[3] == param_2 ||
              (cVar3 = (**(code **)(*plVar6 + 0x4c8))(plVar6,param_2), cVar3 != '\0'))))
          goto LAB_14106cc4e;
        }
        uVar16 = uVar16 & ~(uint)uVar15;
        puVar5 = (uint *)param_1[0x4c];
        if ((uint *)param_1[0x4c] == (uint *)0x0) {
          puVar5 = puVar12;
        }
        uVar2 = *(uint *)(param_1 + 0x4d);
        iVar13 = (int)uVar14;
        lVar10 = (longlong)iVar13;
        uVar4 = puVar5[lVar10] & uVar16;
        if (uVar4 == 0) {
          iVar7 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar7 = uVar2 - 1;
          }
          iVar7 = iVar7 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar13) {
            iVar8 = iVar13;
          }
          if (iVar13 < iVar7) {
            lVar11 = 0;
            do {
              uVar4 = puVar5[lVar10 + lVar11 + 1];
              if (uVar4 != 0) {
                uVar14 = (ulonglong)(iVar13 + (int)lVar11 + 1);
                uVar16 = 0xffffffff;
                goto LAB_14106cc08;
              }
              iVar9 = iVar9 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar8 - lVar10 != lVar11);
            uVar16 = 0xffffffff;
            iVar13 = iVar8;
          }
          uVar14 = (ulonglong)(iVar13 + 1);
          uVar4 = uVar2;
        }
        else {
LAB_14106cc08:
          uVar15 = (ulonglong)(-uVar4 & uVar4);
          uVar1 = uVar15 * 2 + 1;
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
      } while (uVar4 != (uint)local_60);
    }
LAB_14106cc3f:
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x3a8))(param_1);
  }
LAB_14106cc4e:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6;
}



// FUNCTION 14106cd80 FUN_14106cd80 body=174 status=ok
// SIG undefined FUN_14106cd80(void)

void FUN_14106cd80(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  void *_Dst;
  
  if (*param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x70);
    if ((longlong)iVar1 != 0) {
      lVar3 = 0;
      uVar2 = 0;
      do {
        if (*param_2 == *(longlong *)(*(longlong *)(param_1 + 0x68) + lVar3)) {
          if ((int)uVar2 < 0) {
            return;
          }
          if (iVar1 <= (int)uVar2) {
            return;
          }
          lVar3 = (ulonglong)(uVar2 & 0x7fffffff) * 0x10;
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x68) + lVar3) + 0x10))();
          _Dst = (void *)(lVar3 + *(longlong *)(param_1 + 0x68));
          FUN_140c7203b(_Dst,1);
          iVar1 = *(int *)(param_1 + 0x70);
          if (iVar1 - 1U != uVar2) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~uVar2 + iVar1) << 4);
            iVar1 = *(int *)(param_1 + 0x70);
          }
          *(int *)(param_1 + 0x70) = iVar1 + -1;
          FUN_14106ce2e(param_1);
          return;
        }
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x10;
      } while ((longlong)iVar1 << 4 != lVar3);
    }
  }
  return;
}



// FUNCTION 14106ce2e FUN_14106ce2e body=86 status=ok
// SIG undefined FUN_14106ce2e(void)

void FUN_14106ce2e(longlong param_1)

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
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_14107fb1e();
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
                    /* WARNING: Could not recover jumptable at 0x00014106ce80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14106ce84 FUN_14106ce84 body=171 status=ok
// SIG undefined FUN_14106ce84(void)

void FUN_14106ce84(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  
  if (((*(int *)(param_1 + 0x2c) != 0) && (uVar3 = *(uint *)(param_1 + 0x28), -1 < (int)uVar3)) &&
     ((int)uVar3 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x2c))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      FUN_140457ffc(*plVar4 + 0x2b8,param_1);
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014106cf2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14106cf30 FUN_14106cf30 body=59 status=ok
// SIG undefined FUN_14106cf30(void)

void FUN_14106cf30(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b400be0;
  plVar2 = *(longlong **)(param_1 + 0x80);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14106cf6c(param_1 + 0x10);
  return;
}



// FUNCTION 14106cf6c FUN_14106cf6c body=79 status=ok
// SIG undefined FUN_14106cf6c(void)

void FUN_14106cf6c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3fe660;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014106cfb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14106cfbc FUN_14106cfbc body=340 status=ok
// SIG undefined FUN_14106cfbc(void)

void FUN_14106cfbc(longlong *param_1,char param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != '\0') {
    FUN_14106d110(param_1 + 0x301);
    return;
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x638))(param_1);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x570))(plVar3);
  }
  FUN_14106d110(param_1 + 0x301);
  pcVar2 = *(code **)(*param_1 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    lVar4 = param_1[0x76];
    if (lVar4 != 0) goto LAB_14106d0c9;
    pcVar2 = *(code **)(*param_1 + 0x5f8);
    if (pcVar2 == FUN_144784df4) {
      if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
        if (*(int *)((longlong)param_1 + 0x75b4) == 0) {
          return;
        }
        uVar1 = *(uint *)(param_1 + 0xeb6);
        if ((int)uVar1 < 0) {
          return;
        }
        if (DAT_14c9647dc <= (int)uVar1) {
          return;
        }
        plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (plVar3 == (longlong *)0x0) {
          return;
        }
        if ((int)plVar3[2] != *(int *)((longlong)param_1 + 0x75b4)) {
          return;
        }
        if ((*(uint *)(plVar3 + 1) & 0x10200000) != 0) {
          return;
        }
        if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar3;
        }
        else {
          lVar4 = 0;
        }
        lVar4 = lVar4 + 0x110;
      }
      else {
        lVar4 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
      }
      if (lVar4 == 0) {
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x20);
    }
    else {
      lVar4 = (*pcVar2)(param_1);
    }
    if (lVar4 == 0) {
      return;
    }
    lVar4 = *(longlong *)(lVar4 + 0x3b0);
  }
  else {
    lVar4 = (*pcVar2)(param_1);
  }
  if (lVar4 == 0) {
    return;
  }
LAB_14106d0c9:
  if ((*(byte *)(lVar4 + 0x39a) & 8) != 0) {
    return;
  }
  FUN_1457e7186(param_1);
  return;
}



// FUNCTION 14106d110 FUN_14106d110 body=704 status=ok
// SIG undefined FUN_14106d110(void)

void FUN_14106d110(longlong param_1)

{
  double dVar1;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  double *pdVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_128 [32];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 *local_e0;
  code *local_d8;
  undefined4 local_cc;
  longlong local_c8;
  undefined4 local_bc;
  longlong local_b8;
  undefined1 **local_b0;
  code *local_a8;
  longlong *local_a0;
  code **local_98;
  code *local_90;
  code **local_88;
  ulonglong local_80;
  double dVar2;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((((*(int *)(param_1 + 0x15c) != 0) && (uVar3 = *(uint *)(param_1 + 0x158), -1 < (int)uVar3))
       && ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x15c))))) &&
     (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
      ((lVar4 = *plVar7, lVar4 != 0 && (0 < *(int *)(param_1 + 0x78))))))) {
    local_bc = 0;
    local_c8 = 0;
    local_cc = 0;
    local_108._8_8_ = &local_bc;
    local_108._0_8_ = &local_cc;
    local_f8._0_8_ = &local_c8;
    local_e0 = &LAB_143cbcba8;
    local_d8 = (code *)local_108;
    if (*(longlong *)(param_1 + 0x40) != 0) {
      local_a0 = &local_b8;
      local_b0 = &local_e0;
      local_a8 = FUN_143cbca2e;
      local_88 = (code **)&local_98;
      local_90 = FUN_1487df56e;
      local_b8 = param_1;
      local_98 = &local_a8;
      FUN_1447c5ba2();
      if (local_c8 != 0) {
        pdVar6 = (double *)FUN_1447c6d68();
        lVar4 = *(longlong *)(lVar4 + 0x1c8);
        if (lVar4 == 0) {
          dVar8 = 0.0;
          dVar9 = 0.0;
          dVar10 = 0.0;
          dVar11 = 1.0;
        }
        else {
          dVar8 = *(double *)(lVar4 + 0x240);
          dVar9 = *(double *)(lVar4 + 0x248);
          dVar10 = *(double *)(lVar4 + 0x250);
          dVar11 = *(double *)(lVar4 + 600);
        }
        dVar12 = pdVar6[2] * -1.0;
        dVar13 = pdVar6[3] * 1.0;
        dVar1 = pdVar6[1];
        dVar2 = pdVar6[1];
        dVar5 = dVar8 * dVar12 * 1.0 + ((dVar9 * dVar13 - dVar10 * *pdVar6 * -1.0) - dVar11 * dVar2)
        ;
        dVar2 = dVar10 * dVar12 * -1.0 + dVar9 * dVar2 + (dVar13 * dVar11 - *pdVar6 * dVar8 * -1.0);
        local_108._8_4_ = SUB84(dVar5,0);
        local_108._0_8_ =
             dVar9 * dVar12 * -1.0 + ((dVar8 * dVar13 - dVar11 * *pdVar6 * 1.0) - dVar10 * dVar1);
        local_108._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        local_f8._8_4_ = SUB84(dVar2,0);
        local_f8._0_8_ =
             dVar11 * dVar12 * 1.0 + dVar8 * dVar1 + (dVar13 * dVar10 - *pdVar6 * dVar9 * 1.0);
        local_f8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        local_90 = (code *)&LAB_143cbcb94;
        local_a8 = (code *)local_108;
        local_88 = &local_a8;
        FUN_1400b7536(param_1);
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14106d3d2 FUN_14106d3d2 body=2703 status=ok
// SIG undefined FUN_14106d3d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14106d3d2(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
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
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 uVar34;
  char cVar35;
  longlong *plVar36;
  longlong lVar37;
  ulonglong uVar38;
  undefined1 *puVar39;
  longlong lVar40;
  longlong lVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 in_XMM1 [16];
  undefined1 auVar44 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar45 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar46 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar47 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar50 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar51 [16];
  undefined1 unaff_XMM8 [16];
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
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar73 [16];
  undefined1 auStack_f8 [40];
  longlong local_d0;
  int local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((((*(int *)((longlong)param_1 + 0x24) != 0) &&
        (uVar2 = *(uint *)(param_1 + 4), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) &&
      ((lVar40 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar40 != 0 &&
       (*(int *)(lVar40 + 0x10) == *(int *)((longlong)param_1 + 0x24))))) &&
     (((*(uint *)(lVar40 + 8) & 0x10200000) == 0 &&
      (plVar36 = (longlong *)FUN_1401b2724(param_1), plVar36 != (longlong *)0x0)))) {
    uVar34 = (**(code **)(*param_1 + 0x60))(param_1);
    *(undefined1 *)(param_1 + 0x10) = uVar34;
    cVar35 = FUN_140373d18(param_1,0);
    if (cVar35 == '\0') {
      local_d0 = 0;
      iVar3 = (int)param_1[0xb];
      lVar40 = param_1[10];
      local_c8 = iVar3;
      if (iVar3 == 0) {
        local_c4 = 0;
      }
      else {
        FUN_146544b1c(&local_d0,iVar3);
        FUN_146544b86(local_d0,lVar40,iVar3);
      }
      if (*(char *)((longlong)param_1 + 0x39) == '\0') {
        cVar35 = (**(code **)(*plVar36 + 0x990))(plVar36);
        if (cVar35 == '\0') {
          if (((char)param_1[7] == '\0') &&
             (cVar35 = (**(code **)(*plVar36 + 0x988))(plVar36), cVar35 != '\0')) {
            *(undefined1 *)(param_1 + 7) = 1;
          }
        }
        else {
          *(undefined1 *)((longlong)param_1 + 0x39) = 1;
        }
      }
      lVar40 = local_d0;
      lVar37 = (longlong)local_c8;
      if (lVar37 != 0) {
        lVar41 = 0;
        do {
          if (((*(char *)(lVar40 + 1 + lVar41) == '\0') && (*(int *)(lVar40 + 0x10 + lVar41) != 0))
             && (plVar36 = *(longlong **)(lVar40 + 8 + lVar41), plVar36 != (longlong *)0x0)) {
            (**(code **)(*plVar36 + 0x60))(plVar36,1);
          }
          lVar41 = lVar41 + 0x18;
        } while (lVar37 * 0x18 != lVar41);
      }
      auVar33 = _DAT_149931e80;
      if ((longlong)(int)param_1[0xb] != 0) {
        uVar1 = (longlong)(int)param_1[0xb] * 0x18 - 0x18;
        auVar44._8_8_ = 0;
        auVar44._0_8_ = uVar1;
        uVar42 = SUB164(auVar44 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
        uVar43 = (undefined4)(uVar1 / 0x180000000);
        auVar45._0_8_ = CONCAT44(uVar43,uVar42);
        auVar45._8_4_ = uVar42;
        auVar45._12_4_ = uVar43;
        auVar46._0_8_ = auVar45._0_8_ >> 4;
        auVar46._8_8_ = auVar45._8_8_ >> 4;
        puVar39 = (undefined1 *)(param_1[10] + 0x169);
        uVar38 = 0;
        auVar44 = pmovsxbq(in_XMM1,0xf0e);
        auVar45 = pmovsxbq(in_XMM2,0xd0c);
        auVar47 = pmovsxbq(in_XMM3,0xb0a);
        auVar48 = pmovsxbq(in_XMM4,0x908);
        auVar49 = pmovsxbq(in_XMM5,0x706);
        auVar50 = pmovsxbq(unaff_XMM6,0x504);
        auVar51 = pmovsxbq(unaff_XMM7,0x302);
        auVar52 = pmovsxbq(unaff_XMM8,0x100);
        do {
          auVar57._8_4_ = (int)uVar38;
          auVar57._0_8_ = uVar38;
          auVar57._12_4_ = (int)(uVar38 >> 0x20);
          auVar59 = auVar46 | auVar33;
          auVar56 = (auVar57 | auVar52) ^ auVar33;
          lVar40 = auVar59._0_8_;
          auVar66._0_8_ = -(ulonglong)(lVar40 < auVar56._0_8_);
          lVar37 = auVar59._8_8_;
          auVar66._8_8_ = -(ulonglong)(lVar37 < auVar56._8_8_);
          auVar73 = pshuflw(unaff_XMM14,auVar66,0xe8);
          auVar56._8_4_ = 0xffffffff;
          auVar56._0_8_ = 0xffffffffffffffff;
          auVar56._12_4_ = 0xffffffff;
          auVar56 = packssdw(auVar73 ^ auVar56,auVar73 ^ auVar56);
          if ((auVar56._0_4_ & 1) != 0) {
            puVar39[-0x168] = 1;
          }
          auVar66 = packssdw(auVar66,auVar66);
          auVar73._8_4_ = 0xffffffff;
          auVar73._0_8_ = 0xffffffffffffffff;
          auVar73._12_4_ = 0xffffffff;
          auVar66 = packssdw(auVar66 ^ auVar73,auVar66 ^ auVar73);
          auVar66 = packsswb(auVar66,auVar66);
          if ((auVar66[1] & 1) != 0) {
            puVar39[-0x150] = 1;
          }
          auVar66 = (auVar57 | auVar51) ^ auVar33;
          auVar67._0_8_ = -(ulonglong)(lVar40 < auVar66._0_8_);
          auVar67._8_8_ = -(ulonglong)(lVar37 < auVar66._8_8_);
          auVar56 = packssdw(auVar56,auVar67);
          auVar20._8_4_ = 0xffffffff;
          auVar20._0_8_ = 0xffffffffffffffff;
          auVar20._12_4_ = 0xffffffff;
          auVar56 = packssdw(auVar56 ^ auVar20,auVar56 ^ auVar20);
          auVar56 = packsswb(auVar56,auVar56);
          if ((auVar56[2] & 1) != 0) {
            puVar39[-0x138] = 1;
          }
          auVar66 = pshufhw(auVar67,auVar67,0x84);
          auVar21._8_4_ = 0xffffffff;
          auVar21._0_8_ = 0xffffffffffffffff;
          auVar21._12_4_ = 0xffffffff;
          auVar66 = packssdw(auVar66 ^ auVar21,auVar66 ^ auVar21);
          auVar66 = packsswb(auVar66,auVar66);
          if ((auVar66[3] & 1) != 0) {
            puVar39[-0x120] = 1;
          }
          auVar66 = (auVar57 | auVar50) ^ auVar33;
          auVar68._0_8_ = -(ulonglong)(lVar40 < auVar66._0_8_);
          auVar68._8_8_ = -(ulonglong)(lVar37 < auVar66._8_8_);
          auVar56 = pshuflw(auVar56,auVar68,0xe8);
          auVar22._8_4_ = 0xffffffff;
          auVar22._0_8_ = 0xffffffffffffffff;
          auVar22._12_4_ = 0xffffffff;
          auVar56 = packssdw(auVar56 ^ auVar22,auVar56 ^ auVar22);
          auVar56 = packsswb(auVar56,auVar56);
          if ((auVar56[4] & 1) != 0) {
            puVar39[-0x108] = 1;
          }
          auVar66 = packssdw(auVar68,auVar68);
          auVar23._8_4_ = 0xffffffff;
          auVar23._0_8_ = 0xffffffffffffffff;
          auVar23._12_4_ = 0xffffffff;
          auVar66 = packssdw(auVar66 ^ auVar23,auVar66 ^ auVar23);
          auVar66 = packsswb(auVar66,auVar66);
          if ((auVar66[5] & 1) != 0) {
            puVar39[-0xf0] = 1;
          }
          auVar66 = (auVar57 | auVar49) ^ auVar33;
          auVar69._0_8_ = -(ulonglong)(lVar40 < auVar66._0_8_);
          auVar69._8_8_ = -(ulonglong)(lVar37 < auVar66._8_8_);
          auVar56 = packssdw(auVar56,auVar69);
          auVar24._8_4_ = 0xffffffff;
          auVar24._0_8_ = 0xffffffffffffffff;
          auVar24._12_4_ = 0xffffffff;
          auVar56 = packssdw(auVar56 ^ auVar24,auVar56 ^ auVar24);
          auVar56 = packsswb(auVar56,auVar56);
          if ((auVar56[6] & 1) != 0) {
            puVar39[-0xd8] = 1;
          }
          auVar66 = pshufhw(auVar69,auVar69,0x84);
          auVar25._8_4_ = 0xffffffff;
          auVar25._0_8_ = 0xffffffffffffffff;
          auVar25._12_4_ = 0xffffffff;
          auVar66 = packssdw(auVar66 ^ auVar25,auVar66 ^ auVar25);
          auVar66 = packsswb(auVar66,auVar66);
          if ((auVar66[7] & 1) != 0) {
            puVar39[-0xc0] = 1;
          }
          auVar66 = (auVar57 | auVar48) ^ auVar33;
          auVar70._0_8_ = -(ulonglong)(lVar40 < auVar66._0_8_);
          auVar70._8_8_ = -(ulonglong)(lVar37 < auVar66._8_8_);
          auVar56 = pshuflw(auVar56,auVar70,0xe8);
          auVar26._8_4_ = 0xffffffff;
          auVar26._0_8_ = 0xffffffffffffffff;
          auVar26._12_4_ = 0xffffffff;
          auVar56 = packssdw(auVar56 ^ auVar26,auVar56 ^ auVar26);
          auVar56 = packsswb(auVar56,auVar56);
          if ((auVar56[8] & 1) != 0) {
            puVar39[-0xa8] = 1;
          }
          auVar66 = packssdw(auVar70,auVar70);
          auVar27._8_4_ = 0xffffffff;
          auVar27._0_8_ = 0xffffffffffffffff;
          auVar27._12_4_ = 0xffffffff;
          auVar66 = packssdw(auVar66 ^ auVar27,auVar66 ^ auVar27);
          auVar66 = packsswb(auVar66,auVar66);
          if ((auVar66[9] & 1) != 0) {
            puVar39[-0x90] = 1;
          }
          auVar66 = (auVar57 | auVar47) ^ auVar33;
          auVar71._0_8_ = -(ulonglong)(lVar40 < auVar66._0_8_);
          auVar71._8_8_ = -(ulonglong)(lVar37 < auVar66._8_8_);
          auVar56 = packssdw(auVar56,auVar71);
          auVar28._8_4_ = 0xffffffff;
          auVar28._0_8_ = 0xffffffffffffffff;
          auVar28._12_4_ = 0xffffffff;
          auVar56 = packssdw(auVar56 ^ auVar28,auVar56 ^ auVar28);
          auVar56 = packsswb(auVar56,auVar56);
          if ((auVar56[10] & 1) != 0) {
            puVar39[-0x78] = 1;
          }
          auVar66 = pshufhw(auVar71,auVar71,0x84);
          auVar29._8_4_ = 0xffffffff;
          auVar29._0_8_ = 0xffffffffffffffff;
          auVar29._12_4_ = 0xffffffff;
          auVar66 = packssdw(auVar66 ^ auVar29,auVar66 ^ auVar29);
          auVar66 = packsswb(auVar66,auVar66);
          if ((auVar66[0xb] & 1) != 0) {
            puVar39[-0x60] = 1;
          }
          auVar66 = (auVar57 | auVar45) ^ auVar33;
          auVar72._0_8_ = -(ulonglong)(lVar40 < auVar66._0_8_);
          auVar72._8_8_ = -(ulonglong)(lVar37 < auVar66._8_8_);
          auVar56 = pshuflw(auVar56,auVar72,0xe8);
          auVar30._8_4_ = 0xffffffff;
          auVar30._0_8_ = 0xffffffffffffffff;
          auVar30._12_4_ = 0xffffffff;
          auVar56 = packssdw(auVar56 ^ auVar30,auVar56 ^ auVar30);
          unaff_XMM14 = packsswb(auVar56,auVar56);
          if ((unaff_XMM14[0xc] & 1) != 0) {
            puVar39[-0x48] = 1;
          }
          auVar56 = packssdw(auVar72,auVar72);
          auVar31._8_4_ = 0xffffffff;
          auVar31._0_8_ = 0xffffffffffffffff;
          auVar31._12_4_ = 0xffffffff;
          auVar56 = packssdw(auVar56 ^ auVar31,auVar56 ^ auVar31);
          auVar56 = packsswb(auVar56,auVar56);
          if ((auVar56[0xd] & 1) != 0) {
            puVar39[-0x30] = 1;
          }
          auVar56 = (auVar57 | auVar44) ^ auVar33;
          auVar55._0_8_ = -(ulonglong)(lVar40 < auVar56._0_8_);
          auVar55._8_8_ = -(ulonglong)(lVar37 < auVar56._8_8_);
          auVar56 = packssdw(auVar59,auVar55);
          auVar59._8_4_ = 0xffffffff;
          auVar59._0_8_ = 0xffffffffffffffff;
          auVar59._12_4_ = 0xffffffff;
          auVar56 = packssdw(auVar56 ^ auVar59,auVar56 ^ auVar59);
          auVar56 = packsswb(auVar56,auVar56);
          if ((auVar56[0xe] & 1) != 0) {
            puVar39[-0x18] = 1;
          }
          auVar56 = pshufhw(auVar55,auVar55,0x84);
          auVar32._8_4_ = 0xffffffff;
          auVar32._0_8_ = 0xffffffffffffffff;
          auVar32._12_4_ = 0xffffffff;
          auVar56 = packssdw(auVar56 ^ auVar32,auVar56 ^ auVar32);
          auVar56 = packsswb(auVar56,auVar56);
          if ((auVar56[0xf] & 1) != 0) {
            *puVar39 = 1;
          }
          uVar38 = uVar38 + 0x10;
          puVar39 = puVar39 + 0x180;
        } while ((uVar1 / 0x18 + 0x10 & 0xfffffffffffffff0) != uVar38);
      }
    }
    else {
      local_d0 = 0;
      iVar3 = (int)param_1[0xb];
      lVar40 = param_1[10];
      local_c8 = iVar3;
      if (iVar3 == 0) {
        local_c4 = 0;
      }
      else {
        FUN_146544b1c(&local_d0,iVar3);
        FUN_146544b86(local_d0,lVar40,iVar3);
      }
      if (((char)param_1[7] == '\0') &&
         ((*(char *)((longlong)param_1 + 0x39) != '\0' ||
          (cVar35 = (**(code **)(*plVar36 + 0x988))(plVar36), cVar35 != '\0')))) {
        *(undefined1 *)(param_1 + 7) = 1;
      }
      lVar40 = local_d0;
      lVar37 = (longlong)local_c8;
      if (lVar37 != 0) {
        lVar41 = 0;
        do {
          if (((*(char *)(lVar40 + lVar41) == '\0') && (*(int *)(lVar40 + 0x10 + lVar41) != 0)) &&
             (plVar36 = *(longlong **)(lVar40 + 8 + lVar41), plVar36 != (longlong *)0x0)) {
            (**(code **)(*plVar36 + 0x60))(plVar36,0);
          }
          lVar41 = lVar41 + 0x18;
        } while (lVar37 * 0x18 != lVar41);
      }
      auVar33 = _DAT_149931e80;
      if ((longlong)(int)param_1[0xb] != 0) {
        puVar39 = (undefined1 *)param_1[10];
        uVar1 = (longlong)(int)param_1[0xb] * 0x18 - 0x18;
        auVar47._8_8_ = 0;
        auVar47._0_8_ = uVar1;
        uVar42 = SUB164(auVar47 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
        uVar43 = (undefined4)(uVar1 / 0x180000000);
        auVar48._0_8_ = CONCAT44(uVar43,uVar42);
        auVar48._8_4_ = uVar42;
        auVar48._12_4_ = uVar43;
        auVar49._0_8_ = auVar48._0_8_ >> 4;
        auVar49._8_8_ = auVar48._8_8_ >> 4;
        uVar38 = 0;
        auVar44 = pmovsxbq(in_XMM1,0xf0e);
        auVar45 = pmovsxbq(in_XMM2,0xd0c);
        auVar46 = pmovsxbq(in_XMM3,0xb0a);
        auVar47 = pmovsxbq(in_XMM4,0x908);
        auVar48 = pmovsxbq(in_XMM5,0x706);
        auVar50 = pmovsxbq(unaff_XMM6,0x504);
        auVar51 = pmovsxbq(unaff_XMM7,0x302);
        auVar52 = pmovsxbq(unaff_XMM8,0x100);
        do {
          auVar53._8_4_ = (int)uVar38;
          auVar53._0_8_ = uVar38;
          auVar53._12_4_ = (int)(uVar38 >> 0x20);
          auVar56 = auVar49 | auVar33;
          auVar57 = (auVar53 | auVar52) ^ auVar33;
          lVar40 = auVar56._0_8_;
          auVar58._0_8_ = -(ulonglong)(lVar40 < auVar57._0_8_);
          lVar37 = auVar56._8_8_;
          auVar58._8_8_ = -(ulonglong)(lVar37 < auVar57._8_8_);
          auVar57 = pshuflw(unaff_XMM14,auVar58,0xe8);
          auVar4._8_4_ = 0xffffffff;
          auVar4._0_8_ = 0xffffffffffffffff;
          auVar4._12_4_ = 0xffffffff;
          auVar57 = packssdw(auVar57 ^ auVar4,auVar57 ^ auVar4);
          if ((auVar57._0_4_ & 1) != 0) {
            *puVar39 = 1;
          }
          auVar59 = packssdw(auVar58,auVar58);
          auVar5._8_4_ = 0xffffffff;
          auVar5._0_8_ = 0xffffffffffffffff;
          auVar5._12_4_ = 0xffffffff;
          auVar59 = packssdw(auVar59 ^ auVar5,auVar59 ^ auVar5);
          auVar59 = packsswb(auVar59,auVar59);
          if ((auVar59[1] & 1) != 0) {
            puVar39[0x18] = 1;
          }
          auVar59 = (auVar53 | auVar51) ^ auVar33;
          auVar60._0_8_ = -(ulonglong)(lVar40 < auVar59._0_8_);
          auVar60._8_8_ = -(ulonglong)(lVar37 < auVar59._8_8_);
          auVar57 = packssdw(auVar57,auVar60);
          auVar6._8_4_ = 0xffffffff;
          auVar6._0_8_ = 0xffffffffffffffff;
          auVar6._12_4_ = 0xffffffff;
          auVar57 = packssdw(auVar57 ^ auVar6,auVar57 ^ auVar6);
          auVar57 = packsswb(auVar57,auVar57);
          if ((auVar57[2] & 1) != 0) {
            puVar39[0x30] = 1;
          }
          auVar59 = pshufhw(auVar60,auVar60,0x84);
          auVar7._8_4_ = 0xffffffff;
          auVar7._0_8_ = 0xffffffffffffffff;
          auVar7._12_4_ = 0xffffffff;
          auVar59 = packssdw(auVar59 ^ auVar7,auVar59 ^ auVar7);
          auVar59 = packsswb(auVar59,auVar59);
          if ((auVar59[3] & 1) != 0) {
            puVar39[0x48] = 1;
          }
          auVar59 = (auVar53 | auVar50) ^ auVar33;
          auVar61._0_8_ = -(ulonglong)(lVar40 < auVar59._0_8_);
          auVar61._8_8_ = -(ulonglong)(lVar37 < auVar59._8_8_);
          auVar57 = pshuflw(auVar57,auVar61,0xe8);
          auVar8._8_4_ = 0xffffffff;
          auVar8._0_8_ = 0xffffffffffffffff;
          auVar8._12_4_ = 0xffffffff;
          auVar57 = packssdw(auVar57 ^ auVar8,auVar57 ^ auVar8);
          auVar57 = packsswb(auVar57,auVar57);
          if ((auVar57[4] & 1) != 0) {
            puVar39[0x60] = 1;
          }
          auVar59 = packssdw(auVar61,auVar61);
          auVar9._8_4_ = 0xffffffff;
          auVar9._0_8_ = 0xffffffffffffffff;
          auVar9._12_4_ = 0xffffffff;
          auVar59 = packssdw(auVar59 ^ auVar9,auVar59 ^ auVar9);
          auVar59 = packsswb(auVar59,auVar59);
          if ((auVar59[5] & 1) != 0) {
            puVar39[0x78] = 1;
          }
          auVar59 = (auVar53 | auVar48) ^ auVar33;
          auVar62._0_8_ = -(ulonglong)(lVar40 < auVar59._0_8_);
          auVar62._8_8_ = -(ulonglong)(lVar37 < auVar59._8_8_);
          auVar57 = packssdw(auVar57,auVar62);
          auVar10._8_4_ = 0xffffffff;
          auVar10._0_8_ = 0xffffffffffffffff;
          auVar10._12_4_ = 0xffffffff;
          auVar57 = packssdw(auVar57 ^ auVar10,auVar57 ^ auVar10);
          auVar57 = packsswb(auVar57,auVar57);
          if ((auVar57[6] & 1) != 0) {
            puVar39[0x90] = 1;
          }
          auVar59 = pshufhw(auVar62,auVar62,0x84);
          auVar11._8_4_ = 0xffffffff;
          auVar11._0_8_ = 0xffffffffffffffff;
          auVar11._12_4_ = 0xffffffff;
          auVar59 = packssdw(auVar59 ^ auVar11,auVar59 ^ auVar11);
          auVar59 = packsswb(auVar59,auVar59);
          if ((auVar59[7] & 1) != 0) {
            puVar39[0xa8] = 1;
          }
          auVar59 = (auVar53 | auVar47) ^ auVar33;
          auVar63._0_8_ = -(ulonglong)(lVar40 < auVar59._0_8_);
          auVar63._8_8_ = -(ulonglong)(lVar37 < auVar59._8_8_);
          auVar57 = pshuflw(auVar57,auVar63,0xe8);
          auVar12._8_4_ = 0xffffffff;
          auVar12._0_8_ = 0xffffffffffffffff;
          auVar12._12_4_ = 0xffffffff;
          auVar57 = packssdw(auVar57 ^ auVar12,auVar57 ^ auVar12);
          auVar57 = packsswb(auVar57,auVar57);
          if ((auVar57[8] & 1) != 0) {
            puVar39[0xc0] = 1;
          }
          auVar59 = packssdw(auVar63,auVar63);
          auVar13._8_4_ = 0xffffffff;
          auVar13._0_8_ = 0xffffffffffffffff;
          auVar13._12_4_ = 0xffffffff;
          auVar59 = packssdw(auVar59 ^ auVar13,auVar59 ^ auVar13);
          auVar59 = packsswb(auVar59,auVar59);
          if ((auVar59[9] & 1) != 0) {
            puVar39[0xd8] = 1;
          }
          auVar59 = (auVar53 | auVar46) ^ auVar33;
          auVar64._0_8_ = -(ulonglong)(lVar40 < auVar59._0_8_);
          auVar64._8_8_ = -(ulonglong)(lVar37 < auVar59._8_8_);
          auVar57 = packssdw(auVar57,auVar64);
          auVar14._8_4_ = 0xffffffff;
          auVar14._0_8_ = 0xffffffffffffffff;
          auVar14._12_4_ = 0xffffffff;
          auVar57 = packssdw(auVar57 ^ auVar14,auVar57 ^ auVar14);
          auVar57 = packsswb(auVar57,auVar57);
          if ((auVar57[10] & 1) != 0) {
            puVar39[0xf0] = 1;
          }
          auVar59 = pshufhw(auVar64,auVar64,0x84);
          auVar15._8_4_ = 0xffffffff;
          auVar15._0_8_ = 0xffffffffffffffff;
          auVar15._12_4_ = 0xffffffff;
          auVar59 = packssdw(auVar59 ^ auVar15,auVar59 ^ auVar15);
          auVar59 = packsswb(auVar59,auVar59);
          if ((auVar59[0xb] & 1) != 0) {
            puVar39[0x108] = 1;
          }
          auVar59 = (auVar53 | auVar45) ^ auVar33;
          auVar65._0_8_ = -(ulonglong)(lVar40 < auVar59._0_8_);
          auVar65._8_8_ = -(ulonglong)(lVar37 < auVar59._8_8_);
          auVar57 = pshuflw(auVar57,auVar65,0xe8);
          auVar16._8_4_ = 0xffffffff;
          auVar16._0_8_ = 0xffffffffffffffff;
          auVar16._12_4_ = 0xffffffff;
          auVar57 = packssdw(auVar57 ^ auVar16,auVar57 ^ auVar16);
          unaff_XMM14 = packsswb(auVar57,auVar57);
          if ((unaff_XMM14[0xc] & 1) != 0) {
            puVar39[0x120] = 1;
          }
          auVar57 = packssdw(auVar65,auVar65);
          auVar17._8_4_ = 0xffffffff;
          auVar17._0_8_ = 0xffffffffffffffff;
          auVar17._12_4_ = 0xffffffff;
          auVar57 = packssdw(auVar57 ^ auVar17,auVar57 ^ auVar17);
          auVar57 = packsswb(auVar57,auVar57);
          if ((auVar57[0xd] & 1) != 0) {
            puVar39[0x138] = 1;
          }
          auVar57 = (auVar53 | auVar44) ^ auVar33;
          auVar54._0_8_ = -(ulonglong)(lVar40 < auVar57._0_8_);
          auVar54._8_8_ = -(ulonglong)(lVar37 < auVar57._8_8_);
          auVar56 = packssdw(auVar56,auVar54);
          auVar18._8_4_ = 0xffffffff;
          auVar18._0_8_ = 0xffffffffffffffff;
          auVar18._12_4_ = 0xffffffff;
          auVar56 = packssdw(auVar56 ^ auVar18,auVar56 ^ auVar18);
          auVar56 = packsswb(auVar56,auVar56);
          if ((auVar56[0xe] & 1) != 0) {
            puVar39[0x150] = 1;
          }
          auVar56 = pshufhw(auVar54,auVar54,0x84);
          auVar19._8_4_ = 0xffffffff;
          auVar19._0_8_ = 0xffffffffffffffff;
          auVar19._12_4_ = 0xffffffff;
          auVar56 = packssdw(auVar56 ^ auVar19,auVar56 ^ auVar19);
          auVar56 = packsswb(auVar56,auVar56);
          if ((auVar56[0xf] & 1) != 0) {
            puVar39[0x168] = 1;
          }
          uVar38 = uVar38 + 0x10;
          puVar39 = puVar39 + 0x180;
        } while ((uVar1 / 0x18 + 0x10 & 0xfffffffffffffff0) != uVar38);
      }
    }
    FUN_141429cf4(local_d0,local_c8);
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14106de62 FUN_14106de62 body=50 status=ok
// SIG undefined FUN_14106de62(void)

void FUN_14106de62(undefined8 param_1)

{
  FUN_14106e020();
  FUN_14106de94(param_1);
  FUN_14106e964(param_1);
  FUN_14106edda(param_1);
  FUN_14106e41c(param_1);
  return;
}



// FUNCTION 14106de94 FUN_14106de94 body=393 status=ok
// SIG undefined FUN_14106de94(void)

void FUN_14106de94(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = (longlong)*(int *)(*param_1 + 0xa8);
  if (lVar9 != 0) {
    lVar4 = *(longlong *)(*param_1 + 0xa0);
    lVar10 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar10);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,&local_78,param_1);
        if (local_78 != (longlong *)0x0) {
          local_60 = plVar5[4];
          lStack_58 = plVar5[5];
          local_50 = plVar5[1];
          uVar7 = *(undefined4 *)((longlong)plVar5 + 0x24);
          lVar6 = plVar5[5];
          uVar8 = *(undefined4 *)((longlong)plVar5 + 0x2c);
          *(int *)(local_78 + 8) = (int)plVar5[4];
          *(undefined4 *)((longlong)local_78 + 0x44) = uVar7;
          *(int *)(local_78 + 9) = (int)lVar6;
          *(undefined4 *)((longlong)local_78 + 0x4c) = uVar8;
          local_78[10] = local_50;
          local_68 = param_1;
          (**(code **)(*local_78 + 8))(local_78,&local_68);
          plVar1 = local_70;
          plVar5 = local_78;
          if (local_78 != (longlong *)0x0) {
            lVar6 = param_1[1];
            if (local_70 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_70 + 1) = (int)local_70[1] + 1;
              UNLOCK();
            }
            iVar3 = *(int *)(lVar6 + 0xa8);
            *(uint *)(lVar6 + 0xa8) = iVar3 + 1U;
            if (*(uint *)(lVar6 + 0xac) < iVar3 + 1U) {
              FUN_14106e30e((longlong *)(lVar6 + 0xa0),iVar3);
            }
            lVar6 = *(longlong *)(lVar6 + 0xa0);
            *(longlong **)(lVar6 + (longlong)iVar3 * 0x10) = plVar5;
            *(longlong **)(lVar6 + 8 + (longlong)iVar3 * 0x10) = plVar1;
            if (plVar1 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
              UNLOCK();
              LOCK();
              plVar5 = plVar1 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
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
        plVar5 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
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
      lVar10 = lVar10 + 0x18;
    } while (lVar9 * 0x18 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14106e020 FUN_14106e020 body=460 status=ok
// SIG undefined FUN_14106e020(void)

void FUN_14106e020(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(*param_1 + 0xe8) == 0) goto LAB_14106e10b;
  *(byte *)(param_1[1] + 0x150) = *(byte *)(param_1[1] + 0x150) | 1;
  uVar3 = *(undefined8 *)(*param_1 + 0xe8);
  plVar4 = *(longlong **)(*param_1 + 0xf0);
  if (plVar4 == (longlong *)0x0) {
    lVar5 = param_1[1];
    *(undefined8 *)(lVar5 + 0xd0) = uVar3;
    plVar7 = *(longlong **)(lVar5 + 0xd8);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(lVar5 + 0xd8) = 0;
LAB_14106e150:
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x00014106e1a7:
        if (iVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    lVar5 = param_1[1];
    *(undefined8 *)(lVar5 + 0xd0) = uVar3;
    plVar7 = *(longlong **)(lVar5 + 0xd8);
    if (plVar4 == plVar7) {
      LOCK();
      plVar7 = plVar4 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar7 = plVar4;
        goto joined_r0x00014106e1a7;
      }
    }
    else {
      *(longlong **)(lVar5 + 0xd8) = plVar4;
      if (plVar7 != (longlong *)0x0) goto LAB_14106e150;
    }
  }
  cVar6 = (**(code **)(**(longlong **)(param_1[1] + 0xd0) + 0x10))();
  if (cVar6 != '\0') {
    local_30 = param_1[1] + 8;
    if (param_1[1] == 0) {
      local_30 = 0;
    }
    plVar4 = (longlong *)param_1[2];
    local_28 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      FUN_14106e246(param_1,&local_30);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      FUN_14106e246(param_1);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar4 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
LAB_14106e10b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14106e246 FUN_14106e246 body=199 status=ok
// SIG undefined FUN_14106e246(void)

void FUN_14106e246(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = (**(code **)(*(longlong *)*param_2 + 8))();
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
    lVar5 = (longlong)iVar1;
    if (lVar5 != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar3 + lVar4) == lVar2) {
          return;
        }
        lVar4 = lVar4 + 8;
      } while (lVar5 * 8 - lVar4 != 0);
    }
    *(uint *)(param_1 + 0x20) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
      FUN_1418af66a((longlong *)(param_1 + 0x18),iVar1);
      lVar3 = *(longlong *)(param_1 + 0x18);
    }
    *(longlong *)(lVar3 + lVar5 * 8) = lVar2;
    lVar2 = *(longlong *)(param_1 + 8);
    iVar1 = *(int *)(lVar2 + 0x98);
    *(uint *)(lVar2 + 0x98) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0x9c) < iVar1 + 1U) {
      FUN_1418af7cc((longlong *)(lVar2 + 0x90),iVar1);
    }
    lVar2 = *(longlong *)(lVar2 + 0x90);
    *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
    lVar3 = param_2[1];
    *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 14106e30e FUN_14106e30e body=269 status=ok
// SIG undefined FUN_14106e30e(void)

void FUN_14106e30e(longlong param_1,int param_2)

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



// FUNCTION 14106e41c FUN_14106e41c body=560 status=ok
// SIG undefined FUN_14106e41c(void)

void FUN_14106e41c(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  lVar8 = *(longlong *)(*param_1 + 0x30);
  plVar3 = *(longlong **)(*param_1 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  if (((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x30))) &&
     (plVar4 = (longlong *)**(longlong **)(lVar8 + 0x28), plVar4 != (longlong *)0x0)) {
    lVar8 = (**(code **)(*plVar4 + 8))(plVar4);
    lVar9 = FUN_14106e64c();
    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30 && (lVar8 = plVar4[6], (longlong)(int)lVar8 != 0)))) {
      lVar9 = plVar4[5];
      lVar11 = 0;
      do {
        if ((*(char *)(lVar9 + 8 + lVar11) == '\x03') &&
           (lVar5 = *(longlong *)(lVar9 + lVar11), lVar5 != 0)) {
          uVar10 = FUN_14106e686();
          cVar7 = FUN_1448093f4(lVar5,uVar10);
          if (cVar7 != '\0') {
            lVar6 = param_1[1];
            iVar2 = *(int *)(lVar6 + 0x110);
            *(uint *)(lVar6 + 0x110) = iVar2 + 1U;
            if (*(uint *)(lVar6 + 0x114) < iVar2 + 1U) {
              FUN_14106f2ec((longlong *)(lVar6 + 0x108),iVar2);
            }
            *(longlong *)(*(longlong *)(lVar6 + 0x108) + (longlong)iVar2 * 8) = lVar5;
          }
        }
        lVar11 = lVar11 + 0x20;
      } while ((longlong)(int)lVar8 * 0x20 != lVar11);
      lVar8 = plVar4[6];
      if ((longlong)(int)lVar8 != 0) {
        lVar9 = plVar4[5];
        lVar11 = 0;
        do {
          if ((*(char *)(lVar9 + 8 + lVar11) == '\x05') &&
             (lVar5 = *(longlong *)(lVar9 + lVar11), lVar5 != 0)) {
            uVar10 = FUN_14106e6c0();
            cVar7 = FUN_1448093f4(lVar5,uVar10);
            if (cVar7 != '\0') {
              lVar6 = param_1[1];
              iVar2 = *(int *)(lVar6 + 0x120);
              *(uint *)(lVar6 + 0x120) = iVar2 + 1U;
              if (*(uint *)(lVar6 + 0x124) < iVar2 + 1U) {
                FUN_14106f44e((longlong *)(lVar6 + 0x118),iVar2);
              }
              *(longlong *)(*(longlong *)(lVar6 + 0x118) + (longlong)iVar2 * 8) = lVar5;
            }
          }
          lVar11 = lVar11 + 0x20;
        } while ((longlong)(int)lVar8 * 0x20 != lVar11);
      }
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x00014106e648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14106e64c FUN_14106e64c body=57 status=ok
// SIG undefined FUN_14106e64c(void)

void FUN_14106e64c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66aa8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66aa8 = FUN_140002ddd(FUN_1465113f4,uVar1,L"GbxStatusEffectGraphNodeSettings_Root");
  }
  return;
}



// FUNCTION 14106e686 FUN_14106e686 body=57 status=ok
// SIG undefined FUN_14106e686(void)

void FUN_14106e686(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66ac0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66ac0 = FUN_140002ddd(FUN_146511454,uVar1,L"GbxStatusEffectGraphNodeSettings_Event");
  }
  return;
}



// FUNCTION 14106e6c0 FUN_14106e6c0 body=57 status=ok
// SIG undefined FUN_14106e6c0(void)

void FUN_14106e6c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66ad8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66ad8 = FUN_140002ddd(FUN_1465114b4,uVar1,L"GbxStatusEffectGraphNodeSettings_Notify");
  }
  return;
}



// FUNCTION 14106e6fa FUN_14106e6fa body=612 status=ok
// SIG undefined FUN_14106e6fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14106e6fa(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    plVar6 = (longlong *)FUN_14001cc68(0x70,0x10);
    FUN_1457e724c(plVar6,param_3 + 8);
    plVar1 = plVar6 + 2;
    local_38 = plVar1;
    local_30 = plVar6;
    FUN_1457e72ba(&local_38,plVar1);
    plVar4 = local_30;
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_30)(local_30);
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
    goto LAB_14106e80f;
  }
  plVar4 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b430130;
  plVar1 = plVar4 + 2;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14b430d90;
  *(undefined1 *)((longlong)plVar4 + 0x2c) = 0;
  *(undefined1 *)(plVar4 + 6) = 0;
  plVar4[7] = 0;
  plVar4[8] = *(longlong *)(param_3 + 8);
  lVar3 = *(longlong *)(param_3 + 0x10);
  plVar4[9] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)plVar4 + 0x5c) = 0;
  *(undefined8 *)((longlong)plVar4 + 100) = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  *(undefined1 *)(plVar4 + 6) = 1;
  plVar4[2] = (longlong)&PTR_FUN_14b430150;
  *(undefined4 *)(plVar4 + 5) = 1;
  *(undefined1 *)((longlong)plVar4 + 0x2c) = 1;
  if ((plVar1 == (longlong *)0x0) ||
     (((plVar4[3] != 0 && (plVar4[4] != 0)) && (0 < *(int *)(plVar4[4] + 8))))) {
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar4;
    if (plVar4 == (longlong *)0x0) goto LAB_14106e80f;
  }
  else {
    if (plVar4 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar6 = (longlong *)&DAT_00000020;
      plVar5 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_14106e8f3:
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
        *plVar6 = (longlong)plVar4;
        if (plVar4 != (longlong *)0x0) goto LAB_14106e7f0;
      }
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)plVar4;
      goto LAB_14106e80f;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar4[3] = (longlong)plVar1;
    if ((longlong *)plVar4[4] != plVar4) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar4[4] != (longlong *)0x0) {
        plVar6 = plVar4 + 4;
        plVar5 = (longlong *)plVar4[4];
        goto LAB_14106e8f3;
      }
      plVar4[4] = (longlong)plVar4;
    }
LAB_14106e7f0:
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar4;
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
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
LAB_14106e80f:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14106e964 FUN_14106e964 body=1140 status=ok
// SIG undefined FUN_14106e964(void)

void FUN_14106e964(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined1 local_70 [8];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = *param_1;
  iVar11 = *(int *)(lVar9 + 0x70);
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (*(int *)(param_1[1] + 0x8c) < iVar11) {
    FUN_1418adc00(param_1[1] + 0x80);
    lVar9 = *param_1;
    iVar11 = *(int *)(lVar9 + 0x70);
  }
  if (iVar11 != 0) {
    plVar13 = *(longlong **)(lVar9 + 0x68);
    plVar4 = plVar13 + (longlong)iVar11 * 3;
    local_78 = param_1 + 5;
    do {
      if ((longlong *)*plVar13 != (longlong *)0x0) {
        lVar9 = (**(code **)(*(longlong *)*plVar13 + 0x28))();
        iVar11 = (int)param_1[6];
        if ((lVar9 != 0) && (iVar11 != 0)) {
          lVar12 = 0;
          do {
            if (*(longlong *)(*local_78 + lVar12) == lVar9) goto LAB_14106ed55;
            lVar12 = lVar12 + 8;
          } while ((longlong)iVar11 * 8 - lVar12 != 0);
        }
        *(uint *)(param_1 + 6) = iVar11 + 1U;
        if (*(uint *)((longlong)param_1 + 0x34) < iVar11 + 1U) {
          FUN_1408ccdda(local_78,iVar11);
        }
        *(longlong *)(param_1[5] + (longlong)iVar11 * 8) = lVar9;
        local_58 = plVar13;
        local_50 = param_1;
        (**(code **)(*(longlong *)*plVar13 + 0x38))((longlong *)*plVar13,&local_68,&local_58);
        plVar3 = local_60;
        plVar1 = local_68;
        if (local_68 != (longlong *)0x0) {
          lVar9 = *plVar13;
          uVar5 = *(undefined4 *)(lVar9 + 0x2c);
          uVar6 = *(undefined4 *)(lVar9 + 0x30);
          uVar7 = *(undefined4 *)(lVar9 + 0x34);
          *(undefined4 *)(local_68 + 0xb) = *(undefined4 *)(lVar9 + 0x28);
          *(undefined4 *)((longlong)local_68 + 0x5c) = uVar5;
          *(undefined4 *)(local_68 + 0xc) = uVar6;
          *(undefined4 *)((longlong)local_68 + 100) = uVar7;
          lVar9 = param_1[1];
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          iVar11 = *(int *)(lVar9 + 0x88);
          *(uint *)(lVar9 + 0x88) = iVar11 + 1U;
          if (*(uint *)(lVar9 + 0x8c) < iVar11 + 1U) {
            FUN_1489a1dfc((longlong *)(lVar9 + 0x80),iVar11);
          }
          lVar9 = *(longlong *)(lVar9 + 0x80);
          *(longlong **)(lVar9 + (longlong)iVar11 * 0x10) = plVar1;
          *(longlong **)(lVar9 + 8 + (longlong)iVar11 * 0x10) = plVar3;
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
          cVar8 = (**(code **)(*(longlong *)*plVar13 + 0x18))();
          plVar3 = local_60;
          plVar1 = local_68;
          if (cVar8 != '\0') {
            lVar9 = param_1[1];
            if (local_60 == (longlong *)0x0) {
              local_58 = (longlong *)0x0;
              local_50 = (longlong *)((ulonglong)local_50._4_4_ << 0x20);
              FUN_1446efa72(&local_58,0,4,0x10);
              local_50._0_4_ = 4;
              *local_58 = (longlong)&PTR_LAB_14b430ca0;
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 1;
              lVar12 = DAT_14c758608 + 1;
              if (lVar10 == 0) {
                LOCK();
                UNLOCK();
                lVar10 = DAT_14c758608 + 2;
                lVar12 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar12;
              local_58[2] = lVar10;
              *local_58 = (longlong)&PTR_FUN_14b42fe40;
              local_58[3] = (longlong)plVar1;
              local_58[4] = 0;
              local_58[5] = (longlong)&LAB_140d49cfe;
              *(undefined4 *)(local_58 + 6) = 0;
            }
            else {
              LOCK();
              *(int *)(local_60 + 1) = (int)local_60[1] + 1;
              UNLOCK();
              local_58 = (longlong *)0x0;
              local_50 = (longlong *)((ulonglong)local_50._4_4_ << 0x20);
              FUN_1446efa72(&local_58,0,4,0x10);
              local_50._0_4_ = 4;
              LOCK();
              *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
              UNLOCK();
              *local_58 = (longlong)&PTR_LAB_14b430ca0;
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 1;
              lVar12 = DAT_14c758608 + 1;
              if (lVar10 == 0) {
                LOCK();
                UNLOCK();
                lVar10 = DAT_14c758608 + 2;
                lVar12 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar12;
              local_58[2] = lVar10;
              *local_58 = (longlong)&PTR_FUN_14b42fe40;
              local_58[3] = (longlong)plVar1;
              local_58[4] = (longlong)plVar3;
              LOCK();
              *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
              UNLOCK();
              local_58[5] = (longlong)&LAB_140d49cfe;
              *(undefined4 *)(local_58 + 6) = 0;
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
            FUN_140e137de(lVar9 + 0xf0,local_70,&local_58);
            if ((int)local_50 == 0) {
LAB_14106ec8e:
              if (local_58 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_58 != (longlong *)0x0) {
              (**(code **)*local_58)(local_58,0);
              FUN_1446efa72(&local_58,0,0,0x10);
              local_50._0_4_ = 0;
              goto LAB_14106ec8e;
            }
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
          }
          plVar1 = local_60;
          local_58 = local_68;
          local_50 = local_60;
          if (local_60 == (longlong *)0x0) {
            FUN_143e47428(param_1,&local_58,plVar13);
          }
          else {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
            FUN_143e47428(param_1,&local_58,plVar13);
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
          }
        }
        plVar1 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_60 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_60)(local_60);
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
LAB_14106ed55:
      plVar13 = plVar13 + 3;
    } while (plVar13 != plVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14106edda FUN_14106edda body=1297 status=ok
// SIG undefined FUN_14106edda(void)

void FUN_14106edda(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  byte bVar18;
  longlong *plVar19;
  byte bVar20;
  bool bVar21;
  undefined1 auStack_108 [35];
  byte local_e5;
  int local_e4;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar11 = *param_1;
  if (((((1 < (byte)(*(char *)(lVar11 + 0x88) - 1U)) ||
        (lVar9 = *(longlong *)(lVar11 + 0x90), lVar9 == 0)) || (lVar8 = FUN_141419d5c(), lVar8 == 0)
       ) || ((*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
              lVar8 + 0x30)))) || (lVar9 = *(longlong *)(lVar11 + 0x90), lVar9 == 0))
  goto LAB_14106f0de;
  lVar8 = FUN_141419d5c();
  if (((lVar8 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) {
    plVar14 = (longlong *)0x0;
  }
  else {
    plVar14 = *(longlong **)(lVar11 + 0x90);
  }
  lVar11 = plVar14[0x22];
  if (lVar11 == 0) {
    (**(code **)(*plVar14 + 1000))(plVar14);
    lVar11 = plVar14[0x22];
    if (lVar11 == 0) goto LAB_14106f0de;
  }
  lVar9 = FUN_148996120(param_1[1]);
  if (*(char *)(*param_1 + 0x98) != '\x01') {
    lVar9 = param_1[1];
    uVar2 = *(uint *)(lVar11 + 0xc);
    *(uint *)(lVar9 + 0x78) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar6 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar6 = *(int *)(lVar11 + 0x10);
      bVar21 = iVar6 == 0;
      if (bVar21) {
        *(int *)(lVar11 + 0x10) = iVar13;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar21) {
        iVar6 = iVar13;
      }
    }
    *(int *)(lVar9 + 0x7c) = iVar6;
    goto LAB_14106f0de;
  }
  plVar14 = (longlong *)(lVar9 + 0x18);
  iVar6 = *(int *)(lVar9 + 0x20);
  lVar8 = (longlong)iVar6;
  if (lVar8 != 0) {
    plVar12 = (longlong *)*plVar14;
    bVar20 = *plVar12 == 0;
    iVar7 = 0;
    iVar13 = 0;
    do {
      bVar18 = bVar20 ^ 1;
      iVar5 = iVar13 + 1;
      if (iVar13 + 1 < iVar6) {
        iVar5 = iVar6;
      }
      iVar16 = iVar13;
      lVar15 = (longlong)iVar13;
      do {
        lVar15 = lVar15 + 1;
        iVar17 = iVar5;
        if (lVar8 <= lVar15) break;
        iVar16 = iVar16 + 1;
        iVar17 = iVar16;
        local_e5 = bVar18;
      } while ((bool)(bVar20 & 1) == (plVar12[lVar15] == 0));
      bVar4 = bVar20 & 1;
      bVar20 = bVar18;
      local_e4 = iVar7;
      if (bVar4 == 0) {
        local_e5 = bVar18;
        if (iVar7 != iVar13) {
          local_e0 = plVar12;
          memmove(plVar12 + iVar7,plVar12 + iVar13,(longlong)(iVar17 - iVar13) << 3);
          plVar12 = local_e0;
        }
        iVar7 = local_e4 + (iVar17 - iVar13);
        bVar20 = local_e5;
      }
      iVar13 = iVar17;
    } while (lVar15 < lVar8);
    *(int *)(lVar9 + 0x20) = iVar7;
  }
  uVar3 = *(undefined8 *)(lVar11 + 0x10);
  uVar10 = FUN_140eb4c46(param_1[1]);
  FUN_14058b40c(uVar10,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_d8 = uVar3;
  local_d0 = uVar10;
  local_b0 = lVar11;
  lVar11 = FUN_1402710dd(&local_d8);
  if (local_98 != 0) {
    plVar12 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar12 = local_78;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  lVar8 = param_1[1];
  plVar12 = (longlong *)param_1[2];
  if (plVar12 == (longlong *)0x0) {
    *(longlong *)(lVar11 + 0x30) = lVar8;
    plVar19 = *(longlong **)(lVar11 + 0x38);
    if (plVar19 != (longlong *)0x0) {
      *(undefined8 *)(lVar11 + 0x38) = 0;
LAB_14106efc7:
      LOCK();
      plVar12 = plVar19 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
joined_r0x00014106eff9:
        if (iVar6 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    *(longlong *)(lVar11 + 0x30) = lVar8;
    plVar19 = *(longlong **)(lVar11 + 0x38);
    if (plVar12 == plVar19) {
      LOCK();
      plVar19 = plVar12 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
        plVar19 = plVar12;
        goto joined_r0x00014106eff9;
      }
    }
    else {
      *(longlong **)(lVar11 + 0x38) = plVar12;
      if (plVar19 != (longlong *)0x0) goto LAB_14106efc7;
    }
  }
  lVar8 = FUN_140eb4c46(param_1[1]);
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  *(longlong *)(lVar11 + 0x28) = lVar8;
  lVar8 = param_1[1];
  if (lVar11 == 0) {
    *(undefined4 *)(lVar8 + 0x78) = 0;
    iVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar11 + 0xc);
    *(uint *)(lVar8 + 0x78) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar6 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar6 = *(int *)(lVar15 + 0x10);
      bVar21 = iVar6 == 0;
      if (bVar21) {
        *(int *)(lVar15 + 0x10) = iVar13;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar21) {
        iVar6 = iVar13;
      }
    }
  }
  *(int *)(lVar8 + 0x7c) = iVar6;
  iVar6 = *(int *)(lVar9 + 0x20);
  *(uint *)(lVar9 + 0x20) = iVar6 + 1U;
  if (*(uint *)(lVar9 + 0x24) < iVar6 + 1U) {
    FUN_1418af508(plVar14,iVar6);
  }
  *(longlong *)(*plVar14 + (longlong)iVar6 * 8) = lVar11;
  if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar11);
  }
  lVar9 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x10) + 0x268);
  if (lVar9 != 0) {
    lVar8 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x260);
    lVar15 = 0;
    do {
      plVar14 = *(longlong **)(lVar8 + lVar15);
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0x2a0))(plVar14,lVar11);
      }
      lVar15 = lVar15 + 8;
    } while (lVar9 * 8 != lVar15);
  }
LAB_14106f0de:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14106f2ec FUN_14106f2ec body=353 status=ok
// SIG undefined FUN_14106f2ec(void)

void FUN_14106f2ec(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14106f371;
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
LAB_14106f371:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14106f44e FUN_14106f44e body=353 status=ok
// SIG undefined FUN_14106f44e(void)

void FUN_14106f44e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14106f4d3;
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
LAB_14106f4d3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14106f5b0 FUN_14106f5b0 body=1192 status=ok
// SIG undefined FUN_14106f5b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14106f5b0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar7 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b430180;
  plVar1 = plVar7 + 2;
  plVar7[3] = 0;
  plVar7[4] = 0;
  plVar7[2] = (longlong)&PTR_FUN_14b430d90;
  *(undefined1 *)((longlong)plVar7 + 0x2c) = 0;
  *(undefined1 *)(plVar7 + 6) = 0;
  plVar7[7] = 0;
  plVar7[8] = *(longlong *)(param_3 + 8);
  lVar4 = *(longlong *)(param_3 + 0x10);
  plVar7[9] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)plVar7 + 0x5c) = 0;
  *(undefined8 *)((longlong)plVar7 + 100) = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  *(undefined1 *)(plVar7 + 6) = 1;
  plVar7[2] = (longlong)&PTR_FUN_14b4301a0;
  *(undefined4 *)(plVar7 + 5) = 1;
  *(undefined1 *)((longlong)plVar7 + 0x2c) = 1;
  if ((plVar1 != (longlong *)0x0) &&
     (((plVar7[3] == 0 || (plVar7[4] == 0)) || (*(int *)(plVar7[4] + 8) < 1)))) {
    if (plVar7 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar12 = (longlong *)&DAT_00000020;
      plVar8 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_14106f918:
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        *plVar12 = (longlong)plVar7;
        if (plVar7 != (longlong *)0x0) goto LAB_14106f69d;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      plVar7[3] = (longlong)plVar1;
      if ((longlong *)plVar7[4] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar7[4] != (longlong *)0x0) {
          plVar12 = plVar7 + 4;
          plVar8 = (longlong *)plVar7[4];
          goto LAB_14106f918;
        }
        plVar7[4] = (longlong)plVar7;
      }
LAB_14106f69d:
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
  }
  lVar4 = *(longlong *)(param_3 + 8);
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = 4;
  if (plVar7 == (longlong *)0x0) {
    *local_58 = (longlong)&PTR_LAB_14aac28e0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_58[2] = lVar9;
    *local_58 = (longlong)&PTR_FUN_14b4301d0;
    local_58[3] = 0x10;
    local_58[4] = 0;
    local_58[5] = (longlong)&LAB_140bfdfe0;
    *(undefined4 *)(local_58 + 6) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *local_58 = (longlong)&PTR_LAB_14aac28e0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar11 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar11 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar11;
    local_58[2] = lVar9;
    *local_58 = (longlong)&PTR_FUN_14b4301d0;
    local_58[3] = (longlong)plVar1;
    local_58[4] = (longlong)plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    local_58[5] = (longlong)&LAB_140bfdfe0;
    *(undefined4 *)(local_58 + 6) = 0;
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
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_58 + 0x30))(), cVar5 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_14106f815;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_14106f7ff;
    }
  }
  else {
    plVar12 = (longlong *)(lVar4 + 0x48);
    if (*(int *)(lVar4 + 0x5c) < 1) {
      iVar3 = *(int *)(lVar4 + 0x50);
      iVar6 = *(int *)(lVar4 + 0x58) + -1;
      *(int *)(lVar4 + 0x58) = iVar6;
      if (iVar6 <= iVar3) {
        iVar6 = iVar3;
        if (0 < iVar3) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar12 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar8 = *(longlong **)(*plVar12 + (longlong)iVar10 * 0x10),
                plVar8 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar8 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar12,iVar10);
              FUN_14005b248(plVar12);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar6 = *(int *)(lVar4 + 0x50);
          } while (iVar10 < iVar6);
        }
        iVar10 = 2;
        if (2 < iVar6 * 2) {
          iVar10 = iVar6 * 2;
        }
        *(int *)(lVar4 + 0x58) = iVar10;
        if ((iVar10 < iVar3) && (*(int *)(lVar4 + 0x54) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,local_48);
    }
    iVar3 = *(int *)(lVar4 + 0x50);
    *(uint *)(lVar4 + 0x50) = iVar3 + 1U;
    if (*(uint *)(lVar4 + 0x54) < iVar3 + 1U) {
      FUN_1447a71f6(plVar12,iVar3);
    }
    lVar4 = *plVar12;
    lVar11 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar4 + lVar11) = 0;
    *(undefined4 *)(lVar4 + 8 + lVar11) = 0;
    *(longlong **)(lVar4 + lVar11) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar4 + 8 + lVar11) = local_50;
LAB_14106f7ff:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14106f815:
  *param_2 = (longlong)plVar1;
  param_2[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14106fa82 FUN_14106fa82 body=415 status=ok
// SIG undefined FUN_14106fa82(void)

uint FUN_14106fa82(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c9a7d10 == (longlong *)0x0) {
    DAT_14c9a7d10 = (longlong *)FUN_14001cc68(0x20,0x10);
    *DAT_14c9a7d10 = 0;
    DAT_14c9a7d10[1] = 0;
    DAT_14c9a7d10[2] = 0;
    DAT_14c9a7d10[3] = 0;
  }
  plVar3 = DAT_14c9a7d10;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_14106fc56(&local_48,param_1);
  iVar1 = (int)plVar3[1];
  uVar4 = iVar1 + 1;
  *(uint *)(plVar3 + 1) = uVar4;
  if (*(uint *)((longlong)plVar3 + 0xc) < uVar4) {
    FUN_1457e735c(plVar3,iVar1);
  }
  lVar5 = (longlong)iVar1 * 0x78;
  FUN_14106fc22(*plVar3 + lVar5);
  *(undefined8 *)(*plVar3 + 4 + lVar5) = param_2;
  FUN_14106fc56(*plVar3 + lVar5 + 0x10,&local_48);
  *(undefined1 *)(*plVar3 + 0x20 + lVar5) = param_3;
  *(undefined1 *)(*plVar3 + lVar5) = 0;
  if (local_40 == 0) {
LAB_14106fb2f:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_14106fb2f;
  }
  if ((int)param_1[1] != 0) {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14106fb4f;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
LAB_14106fb4f:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


