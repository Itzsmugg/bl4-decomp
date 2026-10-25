// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1443603fc FUN_1443603fc body=126 status=ok
// SIG undefined FUN_1443603fc(void)

void FUN_1443603fc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1970;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014436046b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144360482 FUN_144360482 body=19 status=ok
// SIG undefined FUN_144360482(void)

undefined1 FUN_144360482(longlong param_1)

{
  FUN_144b3bdee(*(undefined4 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 1443604a2 FUN_1443604a2 body=165 status=ok
// SIG undefined FUN_1443604a2(void)

void FUN_1443604a2(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (0.0 <= *(float *)(param_1 + 1)) {
    *(float *)(*param_1 + 0xe40) = *(float *)(param_1 + 1);
  }
  if (0.0 <= *(float *)((longlong)param_1 + 0xc)) {
    *(float *)(*param_1 + 0xe44) = *(float *)((longlong)param_1 + 0xc);
  }
  if (0.0 <= *(float *)(param_1 + 2)) {
    (**(code **)(*(longlong *)*param_1 + 0x388))();
  }
  lVar1 = *param_1;
  uVar2 = FUN_1405faa04(param_1 + 3);
  (**(code **)(*(longlong *)(lVar1 + 0x3c8) + 0x28))(lVar1 + 0x3c8,uVar2);
  FUN_1405faa8e(*param_1 + 0xe78,param_1 + 6);
  FUN_14113775c(*param_1,&DAT_14c846480,1,0,0);
  return;
}



// FUNCTION 144360548 FUN_144360548 body=123 status=ok
// SIG undefined FUN_144360548(void)

undefined8 * FUN_144360548(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x78,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b9e1bc0;
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar1;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(param_1 + 0x28);
  puVar4[6] = 0;
  puVar4[0xd] = 0;
  lVar5 = param_1 + 0x38;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x68);
  }
  FUN_1400709d4(puVar4 + 7,lVar5,*(undefined4 *)(param_1 + 0x70),0);
  return puVar4 + 1;
}



// FUNCTION 1443605ca FUN_1443605ca body=29 status=ok
// SIG undefined FUN_1443605ca(void)

void FUN_1443605ca(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1443605e8 FUN_1443605e8 body=57 status=ok
// SIG undefined FUN_1443605e8(void)

undefined8 * FUN_1443605e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9e1bc0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144360622 FUN_144360622 body=671 status=ok
// SIG undefined FUN_144360622(void)

void FUN_144360622(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_14436069f;
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
  } while (uVar10 != uVar3);
LAB_14436069f:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar15 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x20;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x1c + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x18 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 1443608c2 FUN_1443608c2 body=696 status=ok
// SIG undefined FUN_1443608c2(void)

int * FUN_1443608c2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1447711aa(param_1,iVar15);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar10 = iVar7 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar8 = iVar7 + 1;
    iVar16 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        iVar10 = iVar7;
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar18 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar9 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar9 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_144360aa5;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar9 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_144360aa5:
          iVar3 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar8 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar12,iVar10);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar10 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar7 = *(int *)(*param_1 + 4 + lVar4 * 0x20);
    *(int *)(param_1 + 6) = iVar7;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x20) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 144360b7a FUN_144360b7a body=275 status=ok
// SIG undefined FUN_144360b7a(void)

undefined8 FUN_144360b7a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar7 = (longlong *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          FUN_1440a6cba(plVar7[1],(int)plVar7[2]);
          if (plVar7[1] != 0) {
            FUN_1400020a8();
          }
          lVar3 = *param_3;
          lVar5 = param_3[1];
          plVar7[2] = param_3[2];
          *plVar7 = lVar3;
          plVar7[1] = lVar5;
          iVar2 = *param_4;
          lVar3 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x20) = iVar2;
          }
          *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x20) = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x34) < 1) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x20 + 4) = uVar6;
          *(int *)(param_1 + 6) = iVar2;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar7 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          iVar8 = iVar2 + 0x1f;
          if (-1 < iVar2) {
            iVar8 = iVar2;
          }
          bVar4 = (byte)iVar2 & 0x1f;
          puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar8 >> 5) * 4);
          *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
          *param_4 = iVar9;
          return CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
        }
        iVar9 = (int)plVar7[3];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 144360c8e FUN_144360c8e body=363 status=ok
// SIG undefined FUN_144360c8e(void)

void FUN_144360c8e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144360d24;
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
LAB_144360d24:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 144360dfa FUN_144360dfa body=316 status=ok
// SIG undefined FUN_144360dfa(void)

undefined8 FUN_144360dfa(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = (longlong)param_2 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar8 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
      }
      else {
        if ((uVar8 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar8 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar9 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_144360e60;
            lVar1 = uVar6 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar8 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_144360e60:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  uVar4 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar8 = 0x7fffffff;
  if (param_2 <= (int)(uVar5 / 0x18)) {
    uVar8 = uVar5 / 0x18 & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar4 = FUN_1446f8d3c(param_1,0,uVar8,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar7;
  return uVar4;
}



// FUNCTION 144360f36 FUN_144360f36 body=137 status=ok
// SIG undefined FUN_144360f36(void)

void FUN_144360f36(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(param_2 + lVar2);
    *(undefined8 *)(param_1 + 8 + lVar2) = 0;
    iVar1 = *(int *)(param_2 + 0x10 + lVar2);
    _Src = *(void **)(param_2 + 8 + lVar2);
    *(int *)(param_1 + 0x10 + lVar2) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 8 + lVar2,iVar1,0);
      memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 * 2);
    }
    lVar2 = lVar2 + 0x18;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 144360fc0 FUN_144360fc0 body=265 status=ok
// SIG undefined FUN_144360fc0(void)

void FUN_144360fc0(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 144361116 FUN_144361116 body=64 status=ok
// SIG undefined FUN_144361116(void)

undefined8 * FUN_144361116(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9e1ce0;
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



// FUNCTION 14436115a FUN_14436115a body=81 status=ok
// SIG undefined FUN_14436115a(void)

undefined8 FUN_14436115a(longlong param_1)

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



// FUNCTION 1443611b0 FUN_1443611b0 body=89 status=ok
// SIG undefined FUN_1443611b0(void)

bool FUN_1443611b0(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_1443611fb;
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
LAB_1443611fb:
  return lVar6 == param_2;
}



// FUNCTION 144361226 FUN_144361226 body=118 status=ok
// SIG undefined FUN_144361226(void)

void FUN_144361226(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1ce0;
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



// FUNCTION 14436129c FUN_14436129c body=118 status=ok
// SIG undefined FUN_14436129c(void)

void FUN_14436129c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1ce0;
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



// FUNCTION 144361312 FUN_144361312 body=156 status=ok
// SIG undefined FUN_144361312(void)

void FUN_144361312(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1ce0;
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
                    /* WARNING: Could not recover jumptable at 0x00014436139e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443613c4 FUN_1443613c4 body=58 status=ok
// SIG undefined FUN_1443613c4(void)

undefined8 FUN_1443613c4(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(lVar1 + 0x68) = 0;
    FUN_1447f69b6(lVar1 + 0x38);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14436141e FUN_14436141e body=64 status=ok
// SIG undefined FUN_14436141e(void)

undefined8 * FUN_14436141e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9e1dc0;
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



// FUNCTION 144361462 FUN_144361462 body=81 status=ok
// SIG undefined FUN_144361462(void)

undefined8 FUN_144361462(longlong param_1)

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



// FUNCTION 1443614b8 FUN_1443614b8 body=89 status=ok
// SIG undefined FUN_1443614b8(void)

bool FUN_1443614b8(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_144361503;
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
LAB_144361503:
  return lVar6 == param_2;
}



// FUNCTION 14436152e FUN_14436152e body=118 status=ok
// SIG undefined FUN_14436152e(void)

void FUN_14436152e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1dc0;
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



// FUNCTION 1443615a4 FUN_1443615a4 body=118 status=ok
// SIG undefined FUN_1443615a4(void)

void FUN_1443615a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9e1dc0;
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



// FUNCTION 14436161a FUN_14436161a body=156 status=ok
// SIG undefined FUN_14436161a(void)

void FUN_14436161a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9e1dc0;
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
                    /* WARNING: Could not recover jumptable at 0x0001443616a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443616cc FUN_1443616cc body=58 status=ok
// SIG undefined FUN_1443616cc(void)

undefined8 FUN_1443616cc(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(lVar1 + 0x68) = 0;
    FUN_1447f69b6(lVar1 + 0x38);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 144361706 FUN_144361706 body=10073 status=ok
// SIG undefined FUN_144361706(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144361706(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_3e8 [32];
  longlong **local_3c8;
  undefined4 local_3c0;
  undefined1 local_3b8;
  undefined1 local_3a8 [4];
  undefined1 local_3a4 [4];
  longlong *local_3a0 [2];
  undefined1 local_390 [4];
  undefined1 local_38c [4];
  longlong *local_388 [2];
  undefined1 local_378 [4];
  undefined1 local_374 [4];
  longlong *local_370 [2];
  undefined1 local_360 [4];
  undefined1 local_35c [4];
  longlong *local_358 [2];
  undefined1 local_348 [4];
  undefined1 local_344 [4];
  longlong *local_340 [2];
  undefined1 local_330 [4];
  undefined1 local_32c [4];
  longlong *local_328 [2];
  undefined1 local_318 [4];
  undefined1 local_314 [4];
  longlong *local_310 [2];
  undefined1 local_300 [4];
  undefined1 local_2fc [4];
  longlong *local_2f8 [2];
  undefined1 local_2e8 [4];
  undefined1 local_2e4 [4];
  longlong *local_2e0 [2];
  undefined1 local_2d0 [4];
  undefined1 local_2cc [4];
  longlong *local_2c8 [2];
  undefined1 local_2b8 [4];
  undefined1 local_2b4 [4];
  longlong *local_2b0 [2];
  undefined1 local_2a0 [4];
  undefined1 local_29c [4];
  longlong *local_298 [2];
  undefined1 local_288 [4];
  undefined1 local_284 [4];
  longlong *local_280 [2];
  undefined1 local_270 [4];
  undefined1 local_26c [4];
  longlong *local_268 [2];
  undefined1 local_258 [4];
  undefined1 local_254 [4];
  longlong *local_250 [2];
  undefined1 local_240 [4];
  undefined1 local_23c [4];
  longlong *local_238 [2];
  undefined1 local_228 [4];
  undefined1 local_224 [4];
  longlong *local_220 [2];
  undefined1 local_210 [4];
  undefined1 local_20c [4];
  longlong *local_208 [2];
  undefined1 local_1f8 [4];
  undefined1 local_1f4 [4];
  longlong *local_1f0 [2];
  undefined1 local_1e0 [4];
  undefined1 local_1dc [4];
  longlong *local_1d8 [2];
  undefined1 local_1c8 [4];
  undefined1 local_1c4 [4];
  longlong *local_1c0 [2];
  undefined1 local_1b0 [4];
  undefined1 local_1ac [4];
  longlong *local_1a8 [2];
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  longlong *local_190 [2];
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  longlong *local_178 [2];
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  longlong *local_160 [2];
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  longlong *local_148 [2];
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  longlong *local_130 [2];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined1 local_108 [4];
  undefined1 local_104 [4];
  longlong *local_100 [2];
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  longlong *local_d0 [2];
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  longlong *local_b8 [2];
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  longlong *local_a0 [2];
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  longlong *local_88 [2];
  wchar_t *local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_78 = L"AssetRegistry";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe77e8 = (ulonglong)uVar2;
  local_78 = L"獕e慔杲瑥潌正圀慥潰nGpsGeneratorSettings_TargetingOwner";
  uStack_70 = 3;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe77f0 = (ulonglong)uVar2;
  local_78 = L"Sight";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbe77f8 = (ulonglong)uVar2;
  local_78 = L"TargetLock";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7800 = (ulonglong)uVar2;
  _DAT_14cbe7808 = 0x47efffffe0000000;
  _DAT_14cbe7810 = 0x47efffffe0000000;
  _DAT_14cbe7818 = 0x47efffffe0000000;
  _DAT_14cbe7820 = 0x47efffffe0000000;
  _DAT_14cbe7828 = 0x47efffffe0000000;
  _DAT_14cbe7830 = 0x47efffffe0000000;
  _DAT_14cbe7838 = 0x47efffffe0000000;
  _DAT_14cbe7840 = 0x47efffffe0000000;
  local_78 = L"潢敮䜀戀砀䄀琀琀爀椀戀甀琀攀䐀攀昀";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cbe7848);
  if (cVar1 == '\0') {
    _DAT_14cbe7848 = 0;
    uRam000000014cbe7850 = 0;
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbe785c = 0;
  FUN_14052b5e0(&DAT_14cbe7858,"PlayerAwareness",0);
  _DAT_14cbe7868 = "PlayerAwareness";
  local_78 = L"basic";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7870 = (ulonglong)uVar2;
  local_78 = L"challenge";
  uStack_70 = 9;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7878 = (ulonglong)uVar2;
  local_78 = L"online";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7880 = (ulonglong)uVar2;
  local_78 = L"social";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7888 = (ulonglong)uVar2;
  local_78 = L"alert";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7890 = (ulonglong)uVar2;
  local_78 = L"photo_mode";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7898 = (ulonglong)uVar2;
  local_78 = L"generic_task";
  uStack_70 = 0xc;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe78a0 = (ulonglong)uVar2;
  local_78 = L"mission";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe78a8 = (ulonglong)uVar2;
  local_78 = 
  L"慭汩爀獥慰湷琀瑵牯慩l灳捥慩彬潮楴楦慣楴湯最湥牥捩湟瑯晩捩瑡潩n慶汵彴慣摲伀䱎义彅䕍卓䝁E义䅇䕍䵟卅䅓䕇一呏䙉䍉呁佉彎䕍卓䝁E䕍啎呟呕剏䅉彌䕍卓䝁E潣汬捥楴汢e灵慤整挀湯楦彧灵慤整搀楥楮tGbxBrainAspectSettings_TakeOff"
  ;
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe78b0 = (ulonglong)uVar2;
  local_78 = L"respawn";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe78b8 = (ulonglong)uVar2;
  local_78 = L"tutorial";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe78c0 = (ulonglong)uVar2;
  local_78 = L"special_notification";
  uStack_70 = 0x14;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe78c8 = (ulonglong)uVar2;
  local_78 = L"generic_notification";
  uStack_70 = 0x14;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe78d0 = (ulonglong)uVar2;
  local_78 = L"vault_card";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe78d8 = (ulonglong)uVar2;
  local_78 = L"ONLINE_MESSAGE";
  uStack_70 = 0xe;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe78e0 = (ulonglong)uVar2;
  local_78 = L"INGAME_MESSAGE";
  uStack_70 = 0xe;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe78e8 = (ulonglong)uVar2;
  local_78 = L"NOTIFICATION_MESSAGE";
  uStack_70 = 0x14;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe78f0 = (ulonglong)uVar2;
  local_78 = L"MENU_TUTORIAL_MESSAGE";
  uStack_70 = 0x15;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe78f8 = (ulonglong)uVar2;
  local_78 = L"collectible";
  uStack_70 = 0xb;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7900 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbe7908,L"GoreStump_");
  atexit((_func_5014 *)&LAB_144359d08);
  FUN_140056680(&DAT_14cbe7918,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_144359d19);
  FUN_140056680(&DAT_14cbe7928,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_144359d2a);
  FUN_140056680(&DAT_14cbe7938,L"GoreFX_");
  atexit((_func_5014 *)&LAB_144359d3b);
  FUN_1446f470e(&DAT_14cbe7948,L"LIMB_GORED",1);
  _DAT_14cbe7950 = 0x4072c00000000000;
  _DAT_14cbe7958 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbe7960,L"body",1);
  FUN_1446f470e(&DAT_14cbe7968,L"title_card",1);
  local_78 = L"獕e慔杲瑥潌正圀慥潰nGpsGeneratorSettings_TargetingOwner";
  uStack_70 = 3;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7980 = (ulonglong)uVar2;
  local_78 = L"Reload";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbe7988 = (ulonglong)uVar2;
  local_78 = L"Equip";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7990 = (ulonglong)uVar2;
  local_78 = L"PutDown";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7998 = (ulonglong)uVar2;
  local_78 = L"SwitchUseMode";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe79a0 = (ulonglong)uVar2;
  local_78 = L"ResetFireSequence";
  uStack_70 = 0x11;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe79a8 = (ulonglong)uVar2;
  local_78 = L"PickupEquip";
  uStack_70 = 0xb;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe79b0 = (ulonglong)uVar2;
  local_78 = 
  L"慃桳眀慥潰彮灤彳獥楴慭整戀獡捩挀慨汬湥敧猀捯慩l桰瑯彯潭敤最湥牥捩瑟獡k慭汩爀獥慰湷琀瑵牯慩l灳捥慩彬潮楴楦慣楴湯最湥牥捩湟瑯晩捩瑡潩n慶汵彴慣摲伀䱎义彅䕍卓䝁E义䅇䕍䵟卅䅓䕇一呏䙉䍉呁佉彎䕍卓䝁E䕍啎呟呕剏䅉彌䕍卓䝁E潣汬捥楴汢e灵慤整挀湯楦彧灵慤整搀楥楮tGbxBrainAspectSettings_TakeOff"
  ;
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe79b8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbe79c0,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144359f0a);
  FUN_1446f470e(&DAT_14cbe79d0,L"UNSET",1);
  local_78 = L"湩瑩";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_78 = L"update";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_78 = L"config_update";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_78 = L"deinit";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&DAT_14cbe79d8,L"Party",1);
  FUN_1446f470e(&DAT_14cbe79e0,&DAT_149e063b2,1);
  FUN_1446f470e(&DAT_14cbe79e8,L"Shield",1);
  local_78 = L"Sight";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbe79f0 = (ulonglong)uVar2;
  local_78 = L"Charging";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe79f8 = (ulonglong)uVar2;
  local_78 = L"Charged";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7a00 = (ulonglong)uVar2;
  local_78 = L"Overcharged";
  uStack_70 = 0xb;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7a08 = (ulonglong)uVar2;
  local_78 = L"Discharging";
  uStack_70 = 0xb;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7a10 = (ulonglong)uVar2;
  local_78 = L"Reloading";
  uStack_70 = 9;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbe7a18 = (ulonglong)uVar2;
  local_78 = L"StackCharged";
  uStack_70 = 0xc;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7a20 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbe7a28,L"GetNumEnemies",1);
  FUN_1446f470e(&DAT_14cbe7a30,L"GetEnemyDirection",1);
  DAT_14cbe7a58 = 0;
  DAT_14cbe7a60 = 0;
  DAT_14cbe7a38 = 0;
  _DAT_14cbe7a40 = 0;
  _DAT_14cbe7a64 = 0xffffffff00000080;
  DAT_14cbe7a6c = 0;
  DAT_14cbe7a78 = 0;
  DAT_14cbe7a80 = 0;
  atexit(FUN_14435a98d);
  FUN_1446f470e(&DAT_14cbe7a90,L"GetSightParameters",1);
  local_78 = L"GetADSAlphaFunctionDescription";
  uStack_70 = 0x1e;
  FUN_1446e940c(local_8c,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_90,&local_78);
  local_78 = L"Returns the weapon\'s zoom transition value.";
  uStack_70 = 0x2b;
  FUN_140208c1e(local_88,local_90,local_8c,&local_78);
  local_78 = L"ADSAlphaDescription";
  uStack_70 = 0x13;
  FUN_1446e940c(local_a4,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_a8,&local_78);
  local_78 = L"Value in the range of 0(un-zoomed) to 1(fully zoomed).";
  uStack_70 = 0x36;
  FUN_140208c1e(local_a0,local_a8,local_a4,&local_78);
  local_3b8 = 1;
  local_3c0 = 0;
  local_3c8 = local_88;
  FUN_14190359e(&DAT_14cbe7aa0,L"ADSAlpha",local_a0,L"GetADSAlpha");
  local_78 = L"GetZoomFunctionDescription";
  uStack_70 = 0x1a;
  FUN_1446e940c(local_bc,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_c0,&local_78);
  local_78 = L"What is this supposed to be?";
  uStack_70 = 0x1c;
  FUN_140208c1e(local_b8,local_c0,local_bc,&local_78);
  local_78 = L"ZoomDescription";
  uStack_70 = 0xf;
  FUN_1446e940c(local_d4,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_d8,&local_78);
  local_78 = L"?";
  uStack_70 = 1;
  FUN_140208c1e(local_d0,local_d8,local_d4,&local_78);
  local_3b8 = 1;
  local_3c0 = 1;
  local_3c8 = local_b8;
  FUN_14190359e(&DAT_14cbe7ae0,L"Zoom",local_d0,L"GetZoom");
  local_78 = L"GetAmmoFunctionDescription";
  uStack_70 = 0x1a;
  FUN_1446e940c(local_ec,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_f0,&local_78);
  local_78 = L"Returns the weapon\'s current ammo as a percent.";
  uStack_70 = 0x2f;
  FUN_140208c1e(local_e8,local_f0,local_ec,&local_78);
  local_78 = L"AmmoDescription";
  uStack_70 = 0xf;
  FUN_1446e940c(local_104,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_108,&local_78);
  local_78 = L"Value in the range of 0(empty) to 1(full).";
  uStack_70 = 0x2a;
  FUN_140208c1e(local_100,local_108,local_104,&local_78);
  local_3b8 = 1;
  local_3c0 = 2;
  local_3c8 = local_e8;
  FUN_14190359e(&DAT_14cbe7b20,L"Ammo",local_100,L"GetAmmo");
  local_78 = L"GetHoverEnemyFunctionDescription";
  uStack_70 = 0x20;
  FUN_1446e940c(local_11c,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_120,&local_78);
  local_78 = L"Returns if an enemy is under the crosshair.";
  uStack_70 = 0x2b;
  FUN_140208c1e(local_118,local_120,local_11c,&local_78);
  local_78 = L"HoverEnemyDescription";
  uStack_70 = 0x15;
  FUN_1446e940c(local_134,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_138,&local_78);
  local_78 = L"Returns 0 (no enemy) or 1 (enemy).";
  uStack_70 = 0x22;
  FUN_140208c1e(local_130,local_138,local_134,&local_78);
  local_3b8 = 1;
  local_3c0 = 3;
  local_3c8 = local_118;
  FUN_14190359e(&DAT_14cbe7b60,L"HoverEnemy",local_130,L"GetHoverEnemy");
  local_78 = L"GetHealthFunctionDescription";
  uStack_70 = 0x1c;
  FUN_1446e940c(local_14c,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_150,&local_78);
  local_78 = L"Returns the player\'s current health as a percent.";
  uStack_70 = 0x31;
  FUN_140208c1e(local_148,local_150,local_14c,&local_78);
  local_78 = L"HealthDescription";
  uStack_70 = 0x11;
  FUN_1446e940c(local_164,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_168,&local_78);
  local_78 = L"Value in the range of 0(depleted) to 1(full).";
  uStack_70 = 0x2d;
  FUN_140208c1e(local_160,local_168,local_164,&local_78);
  local_3b8 = 1;
  local_3c0 = 4;
  local_3c8 = local_148;
  FUN_14190359e(&DAT_14cbe7ba0,L"Health",local_160,L"GetHealth");
  local_78 = L"GetHealthFunctionDescription";
  uStack_70 = 0x1c;
  FUN_1446e940c(local_17c,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_180,&local_78);
  local_78 = L"Returns the player\'s current shield as a percent.";
  uStack_70 = 0x31;
  FUN_140208c1e(local_178,local_180,local_17c,&local_78);
  local_78 = L"ShieldDescription";
  uStack_70 = 0x11;
  FUN_1446e940c(local_194,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_198,&local_78);
  local_78 = L"Value in the range of 0(depleted) to 1(full).";
  uStack_70 = 0x2d;
  FUN_140208c1e(local_190,local_198,local_194,&local_78);
  local_3b8 = 1;
  local_3c0 = 5;
  local_3c8 = local_178;
  FUN_14190359e(&DAT_14cbe7be0,L"Shield",local_190,L"GetShield");
  local_78 = L"GetTargetDistanceFunctionDescription";
  uStack_70 = 0x24;
  FUN_1446e940c(local_1ac,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_1b0,&local_78);
  local_78 = L"Returns the distance to the target under the crosshair in meters.";
  uStack_70 = 0x41;
  FUN_140208c1e(local_1a8,local_1b0,local_1ac,&local_78);
  local_78 = L"TargetDistanceDescription";
  uStack_70 = 0x19;
  FUN_1446e940c(local_1c4,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_1c8,&local_78);
  local_78 = L"Distance to the target in meters.";
  uStack_70 = 0x21;
  FUN_140208c1e(local_1c0,local_1c8,local_1c4,&local_78);
  local_3b8 = 1;
  local_3c0 = 6;
  local_3c8 = local_1a8;
  FUN_14190359e(&DAT_14cbe7c20,L"TargetDistance",local_1c0,L"GetTargetDistance");
  local_78 = L"GetCompassDirectionFunctionDescription";
  uStack_70 = 0x26;
  FUN_1446e940c(local_1dc,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_1e0,&local_78);
  local_78 = L"Returns the player\'s facing direction.";
  uStack_70 = 0x26;
  FUN_140208c1e(local_1d8,local_1e0,local_1dc,&local_78);
  local_78 = L"CompassDescription";
  uStack_70 = 0x12;
  FUN_1446e940c(local_1f4,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_1f8,&local_78);
  local_78 = L"Value in the range of 0 to 1.";
  uStack_70 = 0x1d;
  FUN_140208c1e(local_1f0,local_1f8,local_1f4,&local_78);
  local_3b8 = 1;
  local_3c0 = 7;
  local_3c8 = local_1d8;
  FUN_14190359e(&DAT_14cbe7c60,L"CompassDirection",local_1f0,L"GetCompassDirection");
  local_78 = L"GetElementFunctionDescription";
  uStack_70 = 0x1d;
  FUN_1446e940c(local_20c,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_210,&local_78);
  local_78 = L"Returns the element index.";
  uStack_70 = 0x1a;
  FUN_140208c1e(local_208,local_210,local_20c,&local_78);
  local_78 = L"ElementDescription";
  uStack_70 = 0x12;
  FUN_1446e940c(local_224,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_228,&local_78);
  local_78 = L"Element index.";
  uStack_70 = 0xe;
  FUN_140208c1e(local_220,local_228,local_224,&local_78);
  local_3b8 = 0;
  local_3c0 = 0;
  local_3c8 = local_208;
  FUN_14190359e(&DAT_14cbe7ca0,L"Element",local_220,L"GetElement");
  local_78 = L"GetKillsFunctionDescription";
  uStack_70 = 0x1b;
  FUN_1446e940c(local_23c,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_240,&local_78);
  local_78 = L"Returns the number of kills per magazine.";
  uStack_70 = 0x29;
  FUN_140208c1e(local_238,local_240,local_23c,&local_78);
  local_78 = L"KillsDescription";
  uStack_70 = 0x10;
  FUN_1446e940c(local_254,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_258,&local_78);
  local_78 = L"Number of kills per magazine for Borg weapons.";
  uStack_70 = 0x2e;
  FUN_140208c1e(local_250,local_258,local_254,&local_78);
  local_3b8 = 0;
  local_3c0 = 1;
  local_3c8 = local_238;
  FUN_14190359e(&DAT_14cbe7ce0,L"Kills",local_250,L"GetKills");
  local_78 = L"GetCriticalHitFunctionDescription";
  uStack_70 = 0x21;
  FUN_1446e940c(local_26c,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_270,&local_78);
  local_78 = L"Returns 1 if the player recently performed a critical hit.";
  uStack_70 = 0x3a;
  FUN_140208c1e(local_268,local_270,local_26c,&local_78);
  local_78 = L"CriticalHitDescription";
  uStack_70 = 0x16;
  FUN_1446e940c(local_284,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_288,&local_78);
  local_78 = L"Has the player recently performed a critical hit?";
  uStack_70 = 0x31;
  FUN_140208c1e(local_280,local_288,local_284,&local_78);
  local_3b8 = 1;
  local_3c0 = 8;
  local_3c8 = local_268;
  FUN_14190359e(&DAT_14cbe7d20,L"CriticalHit",local_280,L"GetCriticalHit");
  local_78 = L"GetLoadedAmmoFunctionDescription";
  uStack_70 = 0x20;
  FUN_1446e940c(local_29c,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_2a0,&local_78);
  local_78 = L"Returns currently loaded ammo.";
  uStack_70 = 0x1e;
  FUN_140208c1e(local_298,local_2a0,local_29c,&local_78);
  local_78 = L"LoadedAmmoDescription";
  uStack_70 = 0x15;
  FUN_1446e940c(local_2b4,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_2b8,&local_78);
  local_78 = L"Current ammo in the clip.";
  uStack_70 = 0x19;
  FUN_140208c1e(local_2b0,local_2b8,local_2b4,&local_78);
  local_3b8 = 0;
  local_3c0 = 2;
  local_3c8 = local_298;
  FUN_14190359e(&DAT_14cbe7d60,L"LoadedAmmo",local_2b0,L"GetLoadedAmmo");
  local_78 = L"GetMaxLoadedAmmoFunctionDescription";
  uStack_70 = 0x23;
  FUN_1446e940c(local_2cc,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_2d0,&local_78);
  local_78 = L"Returns max loaded ammo.";
  uStack_70 = 0x18;
  FUN_140208c1e(local_2c8,local_2d0,local_2cc,&local_78);
  local_78 = L"MaxLoadedAmmoDescription";
  uStack_70 = 0x18;
  FUN_1446e940c(local_2e4,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_2e8,&local_78);
  local_78 = L"Max ammo in the clip.";
  uStack_70 = 0x15;
  FUN_140208c1e(local_2e0,local_2e8,local_2e4,&local_78);
  local_3b8 = 0;
  local_3c0 = 3;
  local_3c8 = local_2c8;
  FUN_14190359e(&DAT_14cbe7da0,L"MaxLoadedAmmo",local_2e0,L"GetMaxLoadedAmmo");
  local_78 = L"GetTotalAmmoFunctionDescription";
  uStack_70 = 0x1f;
  FUN_1446e940c(local_2fc,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_300,&local_78);
  local_78 = L"Returns the total ammo not in the magazine.";
  uStack_70 = 0x2b;
  FUN_140208c1e(local_2f8,local_300,local_2fc,&local_78);
  local_78 = L"TotalAmmoDescription";
  uStack_70 = 0x14;
  FUN_1446e940c(local_314,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_318,&local_78);
  local_78 = L"Total ammo available.";
  uStack_70 = 0x15;
  FUN_140208c1e(local_310,local_318,local_314,&local_78);
  local_3b8 = 0;
  local_3c0 = 4;
  local_3c8 = local_2f8;
  FUN_14190359e(&DAT_14cbe7de0,L"TotalAmmo",local_310,L"GetTotalAmmo");
  local_78 = L"GetUsesHeatFunctionDescription";
  uStack_70 = 0x1e;
  FUN_1446e940c(local_32c,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_330,&local_78);
  local_78 = L"Returns if the weapon uses heat as ammo.";
  uStack_70 = 0x28;
  FUN_140208c1e(local_328,local_330,local_32c,&local_78);
  local_78 = L"UsesHeatDescription";
  uStack_70 = 0x13;
  FUN_1446e940c(local_344,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_348,&local_78);
  local_78 = L"Does the weapon use heat as ammo?";
  uStack_70 = 0x21;
  FUN_140208c1e(local_340,local_348,local_344,&local_78);
  local_3b8 = 0;
  local_3c0 = 5;
  local_3c8 = local_328;
  FUN_14190359e(&DAT_14cbe7e20,L"UsesHeat",local_340,L"GetUsesHeat");
  local_78 = L"GetHoverTargetFunctionDescription";
  uStack_70 = 0x21;
  FUN_1446e940c(local_35c,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_360,&local_78);
  local_78 = L"Returns if a target is under the crosshair.";
  uStack_70 = 0x2b;
  FUN_140208c1e(local_358,local_360,local_35c,&local_78);
  local_78 = L"HoverTargetDescription";
  uStack_70 = 0x16;
  FUN_1446e940c(local_374,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_378,&local_78);
  local_78 = L"Returns 0 (no enemy) or 1 (enemy) or 2 (friendly).";
  uStack_70 = 0x32;
  FUN_140208c1e(local_370,local_378,local_374,&local_78);
  local_3b8 = 0;
  local_3c0 = 6;
  local_3c8 = local_358;
  FUN_14190359e(&DAT_14cbe7e60,L"HoverTarget",local_370,L"GetHoverTarget");
  local_78 = L"GetShieldTypeFunctionDescription";
  uStack_70 = 0x20;
  FUN_1446e940c(local_38c,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_390,&local_78);
  local_78 = L"Returns the type of shield.";
  uStack_70 = 0x1b;
  FUN_140208c1e(local_388,local_390,local_38c,&local_78);
  local_78 = L"HoverTargetDescription";
  uStack_70 = 0x16;
  FUN_1446e940c(local_3a4,&local_78);
  local_78 = L"OakNiagaraDataInterfaceWeaponSight";
  uStack_70 = 0x22;
  FUN_1446e940c(local_3a8,&local_78);
  local_78 = L"Returns 0 (energy) or 1 (armor).";
  uStack_70 = 0x20;
  FUN_140208c1e(local_3a0,local_3a8,local_3a4,&local_78);
  local_3b8 = 0;
  local_3c0 = 7;
  local_3c8 = local_388;
  FUN_14190359e(&DAT_14cbe7ea0,L"ShieldType",local_3a0,L"GetShieldType");
  if (local_3a0[0] != (longlong *)0x0) {
    (**(code **)(*local_3a0[0] + 0x10))();
  }
  if (local_388[0] != (longlong *)0x0) {
    (**(code **)(*local_388[0] + 0x10))();
  }
  if (local_370[0] != (longlong *)0x0) {
    (**(code **)(*local_370[0] + 0x10))();
  }
  if (local_358[0] != (longlong *)0x0) {
    (**(code **)(*local_358[0] + 0x10))();
  }
  if (local_340[0] != (longlong *)0x0) {
    (**(code **)(*local_340[0] + 0x10))();
  }
  if (local_328[0] != (longlong *)0x0) {
    (**(code **)(*local_328[0] + 0x10))();
  }
  if (local_310[0] != (longlong *)0x0) {
    (**(code **)(*local_310[0] + 0x10))();
  }
  if (local_2f8[0] != (longlong *)0x0) {
    (**(code **)(*local_2f8[0] + 0x10))();
  }
  if (local_2e0[0] != (longlong *)0x0) {
    (**(code **)(*local_2e0[0] + 0x10))();
  }
  if (local_2c8[0] != (longlong *)0x0) {
    (**(code **)(*local_2c8[0] + 0x10))();
  }
  if (local_2b0[0] != (longlong *)0x0) {
    (**(code **)(*local_2b0[0] + 0x10))();
  }
  if (local_298[0] != (longlong *)0x0) {
    (**(code **)(*local_298[0] + 0x10))();
  }
  if (local_280[0] != (longlong *)0x0) {
    (**(code **)(*local_280[0] + 0x10))();
  }
  if (local_268[0] != (longlong *)0x0) {
    (**(code **)(*local_268[0] + 0x10))();
  }
  if (local_250[0] != (longlong *)0x0) {
    (**(code **)(*local_250[0] + 0x10))();
  }
  if (local_238[0] != (longlong *)0x0) {
    (**(code **)(*local_238[0] + 0x10))();
  }
  if (local_220[0] != (longlong *)0x0) {
    (**(code **)(*local_220[0] + 0x10))();
  }
  if (local_208[0] != (longlong *)0x0) {
    (**(code **)(*local_208[0] + 0x10))();
  }
  if (local_1f0[0] != (longlong *)0x0) {
    (**(code **)(*local_1f0[0] + 0x10))();
  }
  if (local_1d8[0] != (longlong *)0x0) {
    (**(code **)(*local_1d8[0] + 0x10))();
  }
  if (local_1c0[0] != (longlong *)0x0) {
    (**(code **)(*local_1c0[0] + 0x10))();
  }
  if (local_1a8[0] != (longlong *)0x0) {
    (**(code **)(*local_1a8[0] + 0x10))();
  }
  if (local_190[0] != (longlong *)0x0) {
    (**(code **)(*local_190[0] + 0x10))();
  }
  if (local_178[0] != (longlong *)0x0) {
    (**(code **)(*local_178[0] + 0x10))();
  }
  if (local_160[0] != (longlong *)0x0) {
    (**(code **)(*local_160[0] + 0x10))();
  }
  if (local_148[0] != (longlong *)0x0) {
    (**(code **)(*local_148[0] + 0x10))();
  }
  if (local_130[0] != (longlong *)0x0) {
    (**(code **)(*local_130[0] + 0x10))();
  }
  if (local_118[0] != (longlong *)0x0) {
    (**(code **)(*local_118[0] + 0x10))();
  }
  if (local_100[0] != (longlong *)0x0) {
    (**(code **)(*local_100[0] + 0x10))();
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  if (local_d0[0] != (longlong *)0x0) {
    (**(code **)(*local_d0[0] + 0x10))();
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if (local_a0[0] != (longlong *)0x0) {
    (**(code **)(*local_a0[0] + 0x10))();
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  atexit(FUN_14435aec8);
  DAT_14cbe7ee4 = 0;
  FUN_14052b5e0(&DAT_14cbe7ee0,"barrel_acc",0);
  _DAT_14cbe7ef0 = "barrel_acc";
  DAT_14cbe7efc = 0;
  FUN_14052b5e0(&DAT_14cbe7ef8,"magazine",0);
  _DAT_14cbe7f08 = "magazine";
  DAT_14cbe7f14 = 0;
  FUN_14052b5e0(&DAT_14cbe7f10,"magazine_acc",0);
  _DAT_14cbe7f20 = "magazine_acc";
  DAT_14cbe7f2c = 0;
  FUN_14052b5e0(&DAT_14cbe7f28,&DAT_14b9e0b16,0);
  _DAT_14cbe7f38 = &DAT_14b9e0b16;
  DAT_14cbe7f44 = 0;
  FUN_14052b5e0(&DAT_14cbe7f40,"tediore_acc",0);
  _DAT_14cbe7f50 = "tediore_acc";
  DAT_14cbe7f5c = 0;
  FUN_14052b5e0(&DAT_14cbe7f58,"tediore_secondary_acc",0);
  _DAT_14cbe7f68 = "tediore_secondary_acc";
  FUN_1446f470e(&DAT_14cbe7f70,L"Single",1);
  FUN_1446f470e(&DAT_14cbe7f78,L"default",1);
  FUN_1446f470e(&DAT_14cbe7f80,L"use_payload_prefix",1);
  local_78 = L"Charging";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7f88 = (ulonglong)uVar2;
  local_78 = L"Charged";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7f90 = (ulonglong)uVar2;
  local_78 = L"Overcharged";
  uStack_70 = 0xb;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7f98 = (ulonglong)uVar2;
  local_78 = L"Discharging";
  uStack_70 = 0xb;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbe7fa0 = (ulonglong)uVar2;
  _DAT_14cbe7fa8 = L"OakGame.EWeaponType";
  _DAT_14cbe7fb0 = &DAT_14c872af8;
  _DAT_14cbe7fb8 = L"WeaponTypeNames";
  _DAT_14cbe7fc0 = 0;
  uRam000000014cbe7fc8 = 0;
  _DAT_14cbe7fd0 = 0;
  uRam000000014cbe7fd8 = 0;
  _DAT_14cbe7fd9 = 0;
  uRam000000014cbe7fe0 = 0;
  uRam000000014cbe7fe1 = 0;
  atexit((_func_5014 *)&LAB_14435cc92);
  _DAT_14cbe7ff0 = L"OakGame.EWeaponPartValue";
  _DAT_14cbe7ff8 = &DAT_14c872af8;
  _DAT_14cbe8000 = L"WeaponPartValueNames";
  _DAT_14cbe8008 = 0;
  uRam000000014cbe8010 = 0;
  _DAT_14cbe8018 = 0;
  uRam000000014cbe8020 = 0;
  _DAT_14cbe8021 = 0;
  uRam000000014cbe8028 = 0;
  uRam000000014cbe8029 = 0;
  atexit((_func_5014 *)&LAB_14435cc9e);
  _DAT_14cbe8040 = &LAB_14435ccaa;
  _DAT_14cbe8048 = 0x4429c666;
  DAT_14cbe804c = 1;
  DAT_14cbe8038 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbe8038;
  atexit((_func_5014 *)&LAB_14435ccaf);
  DAT_14cbe8058 = 0;
  atexit((_func_5014 *)&LAB_14435cd2f);
  _DAT_14cbe80ec = 0;
  FUN_14052b5e0(&DAT_14cbe80e8,"VendingMachineState",0);
  _DAT_14cbe80f8 = "VendingMachineState";
  _DAT_14cbe8104 = 0;
  FUN_14052b5e0(&DAT_14cbe8100,"InUseState",0);
  _DAT_14cbe8110 = "InUseState";
  _DAT_14cbe811c = 0;
  FUN_14052b5e0(&DAT_14cbe8118,"state",0);
  _DAT_14cbe8128 = "state";
  _DAT_14cbe8134 = 0;
  FUN_14052b5e0(&DAT_14cbe8130,"shuffle_timestamp",0);
  _DAT_14cbe8140 = "shuffle_timestamp";
  _DAT_14cbe814c = 0;
  FUN_14052b5e0(&DAT_14cbe8148,"iotd_timestamp",0);
  _DAT_14cbe8158 = "iotd_timestamp";
  _DAT_14cbe8164 = 0;
  FUN_14052b5e0(&DAT_14cbe8160,"items",0);
  _DAT_14cbe8170 = "items";
  _DAT_14cbe817c = 0;
  FUN_14052b5e0(&DAT_14cbe8178,&DAT_14b3fc248,0);
  _DAT_14cbe8188 = &DAT_14b3fc248;
  local_78 = (wchar_t *)0xed5143f8ffe77365;
  uStack_70 = 0xa9c49d56;
  uStack_6c = 0x4e967383;
  _DAT_14cbe81a4 = 0xffe77365;
  uRam000000014cbe81a8 = 0xed5143f8;
  uRam000000014cbe81ac = 0xa9c49d56;
  uRam000000014cbe81b0 = 0x4e967383;
  FUN_141005458(&local_78,0,L"OakWorldPainterLayer_Element",0);
  atexit((_func_5014 *)&LAB_14435e5fe);
  FUN_1446f470e(&DAT_14cbe81b8,L"RandomElement",1);
  _DAT_14cbe81c0 = 0;
  _DAT_14cbe81c8 = 0x3860a972;
  _DAT_14cbe81d0 = 0;
  local_78 = L"WorldRegion";
  uStack_70 = 0xb;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbe81d8 = (ulonglong)uVar2;
  if ((local_60 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144363e6c FUN_144363e6c body=748 status=ok
// SIG undefined FUN_144363e6c(void)

void FUN_144363e6c(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,"dsp3650658382");
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc0",param_1 + 0x4e21c,0x3f800000,0x3f800000,0x42480000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc1",param_1 + 0x4e244,0x3f800000,0x3a83126f,0x40400000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc10",param_1 + 0x4f37c,0x3f800000,0x3f800000,0x42c80000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc11",param_1 + 0x4f380,0x3f800000,0x3c23d70a,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc12",param_1 + 0x4f384,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc13",param_1 + 0x8f388,0x3dcccccd,0x3c23d70a,0x3e99999a,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc14",param_1 + 0x8f38c,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc15",param_1 + 0x8f390,0x3f800000,0,0x41200000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc2",param_1 + 0x4e300,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc3",param_1 + 0x4e31c,0x3f800000,0x3f800000,0x43fa0000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc4",param_1 + 0x4e34c,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc5",param_1 + 0x4f354,0x3f800000,0x3c23d70a,0x41a00000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc6",param_1 + 0x4f360,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))(param_2,"rtpc7",param_1 + 0x10,0,0,0x3f7d70a4,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc8",param_1 + 0x4f364,0x3f800000,0x3f800000,0x43fa0000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc9",param_1 + 0x4f378,0x3f800000,0,0x3f800000,0x3c23d70a);
                    /* WARNING: Could not recover jumptable at 0x000144364154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 144364158 FUN_144364158 body=3921 status=ok
// SIG undefined FUN_144364158(void)

void FUN_144364158(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  bool bVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  
  lVar21 = *param_3;
  lVar22 = *param_4;
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x4e21c);
  fVar3 = *(float *)(param_1 + 0x4e228);
  fVar4 = *(float *)(param_1 + 0x4e244);
  fVar5 = *(float *)(param_1 + 0x4e300);
  fVar30 = tanf(*(float *)(param_1 + 0x4e320) * *(float *)(param_1 + 0x4e31c));
  if (0 < (int)param_2) {
    fVar45 = 80000.0 / fVar2;
    fVar35 = fVar30 / (fVar30 * fVar30 + 1.0);
    fVar6 = *(float *)(param_1 + 0x4e34c);
    fVar7 = *(float *)(param_1 + 0x4e224);
    fVar8 = *(float *)(param_1 + 0x4e228);
    fVar9 = *(float *)(param_1 + 0x4f354);
    fVar10 = *(float *)(param_1 + 0x4f360);
    fVar11 = *(float *)(param_1 + 0x4f378);
    fVar12 = *(float *)(param_1 + 0x4f384);
    fVar13 = *(float *)(param_1 + 0x4f380);
    fVar14 = *(float *)(param_1 + 0x8f388);
    fVar15 = *(float *)(param_1 + 0x8f38c);
    iVar25 = *(int *)(param_1 + 0x4e218);
    uVar29 = 0;
    fVar16 = *(float *)(param_1 + 0x4f364);
    fVar17 = *(float *)(param_1 + 0x4f37c);
    fVar18 = *(float *)(param_1 + 0x8f390);
    fVar42 = *(float *)(param_1 + 0x4e308);
    do {
      fVar34 = *(float *)(lVar21 + uVar29 * 4);
      *(undefined4 *)(param_1 + 8) = 1;
      *(int *)(param_1 + 0x4e214) = iVar25 + 1;
      *(float *)(param_1 + 0x14 + (longlong)(iVar25 % 80000) * 4) = fVar34;
      iVar19 = *(int *)(param_1 + 0xc);
      fVar31 = 0.0;
      if (iVar19 == 1) {
        fVar31 = *(float *)(param_1 + 0x4e230) + fVar3 * fVar2;
      }
      auVar38 = roundss(ZEXT416(0),ZEXT416((uint)fVar31),9);
      fVar31 = fVar31 - auVar38._0_4_;
      *(float *)(param_1 + 0x4e22c) = fVar31;
      fVar31 = fmodf(fVar31 + 0.75,1.0);
      fVar32 = fmodf(fVar31 + 1.0,1.0);
      fVar31 = *(float *)(param_1 + 0x4e238);
      bVar23 = *(int *)(param_1 + 0x4e240) < 1;
      iVar28 = *(int *)(param_1 + 0x4e254) * 0x41c64e6d + 0x3039;
      *(float *)(param_1 + 0x4e234) = fVar32;
      *(uint *)(param_1 + 0x4e23c) = (uint)(fVar32 < fVar31);
      fVar33 = (float)(bVar23 && fVar32 < fVar31);
      fVar36 = (float)(!bVar23 || fVar31 <= fVar32);
      *(float *)(param_1 + 0x4e248) = *(float *)(param_1 + 0x4e24c) * fVar36 + fVar4 * fVar33;
      *(int *)(param_1 + 0x4e250) = iVar28;
      fVar43 = ABS((float)iVar28 * 4.656613e-10);
      fVar41 = fVar43 * 1000.0;
      *(float *)(param_1 + 0x4e258) = *(float *)(param_1 + 0x4e25c) * fVar36 + fVar41 * fVar33;
      fVar44 = 0.0;
      if ((fVar31 <= fVar32) && (fVar44 = *(float *)(param_1 + 0x4e264) + 1.0, fVar45 <= fVar44)) {
        fVar44 = fVar45;
      }
      *(float *)(param_1 + 0x4e260) = fVar44;
      fVar46 = (float)(iVar25 % 80000) + fVar45;
      *(float *)(param_1 + 0x4e268) = fVar36 * *(float *)(param_1 + 0x4e26c) + fVar33 * fVar46;
      fVar31 = fmodf(*(float *)(param_1 + 0x4e22c) + 0.5,1.0);
      fVar44 = fmodf(fVar31 + 1.0,1.0);
      bVar24 = fVar44 < *(float *)(param_1 + 0x4e274);
      bVar23 = *(int *)(param_1 + 0x4e27c) < 1;
      fVar33 = (float)(bVar23 && bVar24);
      fVar36 = (float)(!bVar23 || !bVar24);
      *(float *)(param_1 + 0x4e270) = fVar44;
      *(uint *)(param_1 + 0x4e278) = (uint)bVar24;
      *(float *)(param_1 + 0x4e280) = *(float *)(param_1 + 0x4e284) * fVar36 + fVar4 * fVar33;
      *(float *)(param_1 + 0x4e288) = *(float *)(param_1 + 0x4e28c) * fVar36 + fVar41 * fVar33;
      fVar31 = 0.0;
      if ((*(float *)(param_1 + 0x4e274) <= fVar44) &&
         (fVar31 = *(float *)(param_1 + 0x4e294) + 1.0, fVar45 <= fVar31)) {
        fVar31 = fVar45;
      }
      *(float *)(param_1 + 0x4e290) = fVar31;
      *(float *)(param_1 + 0x4e298) = fVar36 * *(float *)(param_1 + 0x4e29c) + fVar33 * fVar46;
      fVar31 = fmodf(*(float *)(param_1 + 0x4e22c) + 0.25,1.0);
      fVar33 = fmodf(fVar31 + 1.0,1.0);
      bVar24 = fVar33 < *(float *)(param_1 + 0x4e2a4);
      bVar23 = *(int *)(param_1 + 0x4e2ac) < 1;
      *(float *)(param_1 + 0x4e2a0) = fVar33;
      fVar36 = (float)(bVar23 && bVar24);
      fVar37 = (float)(!bVar23 || !bVar24);
      *(uint *)(param_1 + 0x4e2a8) = (uint)bVar24;
      *(float *)(param_1 + 0x4e2b0) = *(float *)(param_1 + 0x4e2b4) * fVar37 + fVar4 * fVar36;
      *(float *)(param_1 + 0x4e2b8) = *(float *)(param_1 + 0x4e2bc) * fVar37 + fVar41 * fVar36;
      fVar31 = 0.0;
      if ((*(float *)(param_1 + 0x4e2a4) <= fVar33) &&
         (fVar31 = *(float *)(param_1 + 0x4e2c4) + 1.0, fVar45 <= fVar31)) {
        fVar31 = fVar45;
      }
      *(float *)(param_1 + 0x4e2c0) = fVar31;
      *(float *)(param_1 + 0x4e2c8) = fVar37 * *(float *)(param_1 + 0x4e2cc) + fVar36 * fVar46;
      fVar31 = fmodf(*(float *)(param_1 + 0x4e22c),1.0);
      fVar36 = fmodf(fVar31 + 1.0,1.0);
      fVar31 = *(float *)(param_1 + 0x4e2d4);
      bVar23 = *(int *)(param_1 + 0x4e2dc) < 1;
      *(float *)(param_1 + 0x4e2d0) = fVar36;
      *(uint *)(param_1 + 0x4e2d8) = (uint)(fVar36 < fVar31);
      fVar37 = (float)(bVar23 && fVar36 < fVar31);
      fVar41 = (float)(!bVar23 || fVar31 <= fVar36);
      *(float *)(param_1 + 0x4e2e0) = *(float *)(param_1 + 0x4e2e4) * fVar41 + fVar4 * fVar37;
      *(float *)(param_1 + 0x4e2e8) =
           *(float *)(param_1 + 0x4e2ec) * fVar41 + fVar43 * fVar37 * 1000.0;
      if (fVar36 < fVar31) {
        fVar31 = 0.0;
      }
      else {
        fVar31 = *(float *)(param_1 + 0x4e2f4) + 1.0;
        if (fVar45 <= fVar31) {
          fVar31 = fVar45;
        }
      }
      *(float *)(param_1 + 0x4e2f0) = fVar31;
      *(float *)(param_1 + 0x4e2f8) = fVar41 * *(float *)(param_1 + 0x4e2fc) + fVar46 * fVar37;
      fVar41 = cosf(fVar36 * 6.2831855);
      fVar31 = *(float *)(param_1 + 0x4e2e0);
      fVar36 = 100.0;
      if (*(float *)(param_1 + 0x4e2e8) <= 100.0) {
        fVar36 = *(float *)(param_1 + 0x4e2e8);
      }
      fVar43 = 1.0;
      if (1.0 <= fVar31) {
        fVar43 = fVar31;
      }
      fVar31 = fmodf((*(float *)(param_1 + 0x4e2f0) * fVar31 + *(float *)(param_1 + 0x4e2f8)) -
                     (fVar43 * fVar45 + fVar36),80000.0);
      fVar31 = fmodf(fVar31 + 80000.0,80000.0);
      fVar31 = *(float *)(param_1 + 0x14 + (longlong)(int)fVar31 * 4);
      fVar43 = cosf(fVar33 * 6.2831855);
      fVar33 = *(float *)(param_1 + 0x4e2b0);
      fVar36 = 100.0;
      if (*(float *)(param_1 + 0x4e2b8) <= 100.0) {
        fVar36 = *(float *)(param_1 + 0x4e2b8);
      }
      fVar46 = 1.0;
      if (1.0 <= fVar33) {
        fVar46 = fVar33;
      }
      fVar33 = fmodf((*(float *)(param_1 + 0x4e2c0) * fVar33 + *(float *)(param_1 + 0x4e2c8)) -
                     (fVar46 * fVar45 + fVar36),80000.0);
      fVar33 = fmodf(fVar33 + 80000.0,80000.0);
      fVar33 = *(float *)(param_1 + 0x14 + (longlong)(int)fVar33 * 4);
      fVar46 = cosf(fVar44 * 6.2831855);
      fVar44 = *(float *)(param_1 + 0x4e280);
      fVar36 = 100.0;
      if (*(float *)(param_1 + 0x4e288) <= 100.0) {
        fVar36 = *(float *)(param_1 + 0x4e288);
      }
      fVar37 = 1.0;
      if (1.0 <= fVar44) {
        fVar37 = fVar44;
      }
      fVar44 = fmodf((*(float *)(param_1 + 0x4e290) * fVar44 + *(float *)(param_1 + 0x4e298)) -
                     (fVar37 * fVar45 + fVar36),80000.0);
      fVar44 = fmodf(fVar44 + 80000.0,80000.0);
      fVar44 = *(float *)(param_1 + 0x14 + (longlong)(int)fVar44 * 4);
      fVar37 = cosf(fVar32 * 6.2831855);
      fVar32 = *(float *)(param_1 + 0x4e248);
      fVar36 = 100.0;
      if (*(float *)(param_1 + 0x4e258) <= 100.0) {
        fVar36 = *(float *)(param_1 + 0x4e258);
      }
      fVar40 = 1.0;
      if (1.0 <= fVar32) {
        fVar40 = fVar32;
      }
      fVar32 = fmodf((*(float *)(param_1 + 0x4e260) * fVar32 + *(float *)(param_1 + 0x4e268)) -
                     (fVar40 * fVar45 + fVar36),80000.0);
      fVar32 = fmodf(fVar32 + 80000.0,80000.0);
      fVar33 = fVar34 * (1.0 - fVar5) +
               ((1.0 - fVar37) * *(float *)(param_1 + 0x14 + (longlong)(int)fVar32 * 4) +
               (1.0 - fVar46) * fVar44 + (1.0 - fVar43) * fVar33 + (1.0 - fVar41) * fVar31) *
               fVar5 * 0.5;
      fVar34 = *(float *)(param_1 + 0x4e30c) * -0.94657 + fVar42 * 1.94632 + fVar33;
      *(float *)(param_1 + 0x4e304) = fVar34;
      fVar31 = *(float *)(param_1 + 0x4e314) * 0.83774;
      fVar34 = (fVar34 * 0.94657 + fVar31 + *(float *)(param_1 + 0x4e30c)) -
               (*(float *)(param_1 + 0x4e318) * 0.06338 + fVar42 * 1.94632);
      *(float *)(param_1 + 0x4e310) = fVar34;
      fVar42 = *(float *)(param_1 + 0x4e330);
      fVar44 = (-fVar30 * fVar42 + *(float *)(param_1 + 0x4e328)) * (fVar35 + fVar35) + fVar42;
      fVar32 = 1.0;
      if (*(int *)(param_1 + 0xc) != 0) {
        fVar32 = (fVar42 + fVar44) * -fVar30 + *(float *)(param_1 + 0x4e328);
      }
      *(float *)(param_1 + 0x4e324) = fVar32;
      *(float *)(param_1 + 0x4e32c) = fVar44;
      fVar42 = *(float *)(param_1 + 0x4e338) * 0.02569;
      fVar36 = (*(float *)(param_1 + 0x4e33c) * 0.260502 + fVar33) - fVar42;
      *(float *)(param_1 + 0x4e334) = fVar36;
      fVar41 = *(float *)(param_1 + 0x4e344) * 1.8685;
      fVar42 = (*(float *)(param_1 + 0x4e33c) + fVar41 + fVar42) -
               (*(float *)(param_1 + 0x4e348) * 0.870686 + fVar36 * 0.260502);
      *(float *)(param_1 + 0x4e340) = fVar42;
      uVar20 = *(uint *)(param_1 + 0x4e350);
      fVar34 = fVar33 * (1.0 - fVar6) +
               (((fVar42 * 0.870686 + *(float *)(param_1 + 0x4e348)) - fVar41) * fVar32 -
               ((fVar34 * 0.06338 + *(float *)(param_1 + 0x4e318)) - fVar31) * fVar44) * fVar6;
      fVar42 = *(float *)(param_1 + 0x4f36c) * -fVar1 + fVar34;
      *(float *)(param_1 + 0x4e354 + (ulonglong)(uVar20 & 0x3ff) * 4) = fVar42;
      if (iVar19 == 1) {
        auVar38 = ZEXT416((uint)(*(float *)(param_1 + 0x4f35c) + fVar8 * fVar9));
      }
      else {
        auVar38 = ZEXT816(0);
      }
      auVar39 = roundss(ZEXT416((uint)fVar31),auVar38,9);
      fVar31 = auVar38._0_4_ - auVar39._0_4_;
      *(float *)(param_1 + 0x4f358) = fVar31;
      fVar31 = 1.0 - ABS(fVar31 + fVar31 + -1.0);
      fVar31 = ((fVar31 + fVar31 + -1.0) * fVar10 + 1.0) * fVar16;
      fVar44 = fVar31 + -1.0;
      uVar26 = (uint)fVar44;
      uVar27 = 0;
      if (0 < (int)uVar26) {
        uVar27 = uVar26;
      }
      if ((int)uVar26 < 0) {
        uVar26 = 0xffffffff;
      }
      auVar38 = roundss(ZEXT416((uint)fVar44),ZEXT416((uint)fVar44),9);
      if (0x2000 < (int)uVar27) {
        uVar27 = 0x2001;
      }
      if (0x1fff < (int)uVar26) {
        uVar26 = 0;
      }
      *(float *)(param_1 + 0x4f368) =
           ((2.0 - fVar31) + auVar38._0_4_) *
           *(float *)(param_1 + 0x4e354 + (ulonglong)(uVar20 - uVar27 & 0x3ff) * 4) +
           ((-1.0 - auVar38._0_4_) + fVar31) *
           *(float *)(param_1 + 0x4e354 + (ulonglong)(~uVar26 + uVar20 & 0x3ff) * 4);
      *(float *)(param_1 + 0x4f370) = fVar42;
      fVar34 = fVar34 * (1.0 - fVar11) + *(float *)(param_1 + 0x4f374) * fVar11;
      fVar42 = tanhf(fVar17 * fVar34);
      fVar42 = fVar34 * (1.0 - fVar12) + fVar42 * fVar13 * fVar12;
      uVar20 = *(uint *)(param_1 + 0x4e350);
      *(float *)(param_1 + 0x4f388 + (ulonglong)(uVar20 & 0xffff) * 4) = fVar42;
      fVar42 = (fVar42 * (1.0 - fVar15) +
               *(float *)(param_1 + 0x4f388 +
                         (ulonglong)(uVar20 - (int)(fVar7 * fVar14) & 0xffff) * 4) * fVar15) *
               fVar18;
      *(float *)(param_1 + 0x8f394) = fVar42;
      fVar42 = (*(float *)(param_1 + 0x8f3a0) * 0.995 + fVar42) - *(float *)(param_1 + 0x8f398);
      *(float *)(param_1 + 0x8f39c) = fVar42;
      *(float *)(lVar22 + uVar29 * 4) = fVar42;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
      iVar25 = *(int *)(param_1 + 0x4e214);
      *(int *)(param_1 + 0x4e218) = iVar25;
      *(undefined4 *)(param_1 + 0x4e230) = *(undefined4 *)(param_1 + 0x4e22c);
      *(undefined4 *)(param_1 + 0x4e238) = *(undefined4 *)(param_1 + 0x4e234);
      *(undefined4 *)(param_1 + 0x4e240) = *(undefined4 *)(param_1 + 0x4e23c);
      *(undefined4 *)(param_1 + 0x4e24c) = *(undefined4 *)(param_1 + 0x4e248);
      *(undefined4 *)(param_1 + 0x4e254) = *(undefined4 *)(param_1 + 0x4e250);
      *(undefined4 *)(param_1 + 0x4e25c) = *(undefined4 *)(param_1 + 0x4e258);
      *(undefined4 *)(param_1 + 0x4e264) = *(undefined4 *)(param_1 + 0x4e260);
      *(undefined4 *)(param_1 + 0x4e26c) = *(undefined4 *)(param_1 + 0x4e268);
      *(undefined4 *)(param_1 + 0x4e274) = *(undefined4 *)(param_1 + 0x4e270);
      *(undefined4 *)(param_1 + 0x4e27c) = *(undefined4 *)(param_1 + 0x4e278);
      *(undefined4 *)(param_1 + 0x4e284) = *(undefined4 *)(param_1 + 0x4e280);
      *(undefined4 *)(param_1 + 0x4e28c) = *(undefined4 *)(param_1 + 0x4e288);
      *(undefined4 *)(param_1 + 0x4e294) = *(undefined4 *)(param_1 + 0x4e290);
      *(undefined4 *)(param_1 + 0x4e29c) = *(undefined4 *)(param_1 + 0x4e298);
      *(undefined4 *)(param_1 + 0x4e2a4) = *(undefined4 *)(param_1 + 0x4e2a0);
      *(undefined4 *)(param_1 + 0x4e2ac) = *(undefined4 *)(param_1 + 0x4e2a8);
      *(undefined4 *)(param_1 + 0x4e2b4) = *(undefined4 *)(param_1 + 0x4e2b0);
      *(undefined4 *)(param_1 + 0x4e2bc) = *(undefined4 *)(param_1 + 0x4e2b8);
      *(undefined4 *)(param_1 + 0x4e2c4) = *(undefined4 *)(param_1 + 0x4e2c0);
      *(undefined4 *)(param_1 + 0x4e2cc) = *(undefined4 *)(param_1 + 0x4e2c8);
      *(undefined4 *)(param_1 + 0x4e2d4) = *(undefined4 *)(param_1 + 0x4e2d0);
      *(undefined4 *)(param_1 + 0x4e2dc) = *(undefined4 *)(param_1 + 0x4e2d8);
      *(undefined4 *)(param_1 + 0x4e2e4) = *(undefined4 *)(param_1 + 0x4e2e0);
      *(undefined4 *)(param_1 + 0x4e2ec) = *(undefined4 *)(param_1 + 0x4e2e8);
      *(undefined4 *)(param_1 + 0x4e2f4) = *(undefined4 *)(param_1 + 0x4e2f0);
      *(undefined4 *)(param_1 + 0x4e2fc) = *(undefined4 *)(param_1 + 0x4e2f8);
      *(undefined4 *)(param_1 + 0x4e30c) = *(undefined4 *)(param_1 + 0x4e308);
      fVar42 = *(float *)(param_1 + 0x4e304);
      *(float *)(param_1 + 0x4e308) = fVar42;
      *(undefined4 *)(param_1 + 0x4e318) = *(undefined4 *)(param_1 + 0x4e314);
      *(undefined4 *)(param_1 + 0x4e314) = *(undefined4 *)(param_1 + 0x4e310);
      *(undefined4 *)(param_1 + 0x4e328) = *(undefined4 *)(param_1 + 0x4e324);
      *(undefined4 *)(param_1 + 0x4e330) = *(undefined4 *)(param_1 + 0x4e32c);
      *(undefined4 *)(param_1 + 0x4e33c) = *(undefined4 *)(param_1 + 0x4e338);
      *(undefined4 *)(param_1 + 0x4e338) = *(undefined4 *)(param_1 + 0x4e334);
      *(undefined4 *)(param_1 + 0x4e348) = *(undefined4 *)(param_1 + 0x4e344);
      *(undefined4 *)(param_1 + 0x4e344) = *(undefined4 *)(param_1 + 0x4e340);
      *(int *)(param_1 + 0x4e350) = *(int *)(param_1 + 0x4e350) + 1;
      *(undefined4 *)(param_1 + 0x4f35c) = *(undefined4 *)(param_1 + 0x4f358);
      *(undefined4 *)(param_1 + 0x4f36c) = *(undefined4 *)(param_1 + 0x4f368);
      *(undefined4 *)(param_1 + 0x4f374) = *(undefined4 *)(param_1 + 0x4f370);
      *(undefined4 *)(param_1 + 0x8f398) = *(undefined4 *)(param_1 + 0x8f394);
      *(undefined4 *)(param_1 + 0x8f3a0) = *(undefined4 *)(param_1 + 0x8f39c);
      uVar29 = uVar29 + 1;
    } while (param_2 != uVar29);
  }
  return;
}



// FUNCTION 1443650b6 FUN_1443650b6 body=748 status=ok
// SIG undefined FUN_1443650b6(void)

void FUN_1443650b6(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,"dsp2289053442");
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc0",param_1 + 0x4e21c,0x3f800000,0x3f800000,0x42480000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc1",param_1 + 0x4e244,0x3f800000,0x3a83126f,0x40400000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc10",param_1 + 0x4f37c,0x3f800000,0x3f800000,0x42c80000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc11",param_1 + 0x4f380,0x3f800000,0x3c23d70a,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc12",param_1 + 0x4f384,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc13",param_1 + 0x8f388,0x3dcccccd,0x3c23d70a,0x3e99999a,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc14",param_1 + 0x8f38c,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc15",param_1 + 0x8f390,0x3f800000,0,0x41200000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc2",param_1 + 0x4e300,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc3",param_1 + 0x4e31c,0x3f800000,0x3f800000,0x43fa0000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc4",param_1 + 0x4e34c,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc5",param_1 + 0x4f354,0x3f800000,0x3c23d70a,0x41a00000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc6",param_1 + 0x4f360,0x3f800000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))(param_2,"rtpc7",param_1 + 0x10,0,0,0x3f7d70a4,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc8",param_1 + 0x4f364,0x3f800000,0x3f800000,0x43fa0000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc9",param_1 + 0x4f378,0x3f800000,0,0x3f800000,0x3c23d70a);
                    /* WARNING: Could not recover jumptable at 0x00014436539e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 1443653ae FUN_1443653ae body=674 status=ok
// SIG undefined FUN_1443653ae(void)

void FUN_1443653ae(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,"dsp2660007890");
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc0",param_1 + 0x1048,0x3b03126f,0x3a83126f,0x3ca3d70a,0x3851b717);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc1",param_1 + 0x105c,0xc0c00000,0xc2c00000,0x41400000,0x3a83126f);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc10",param_1 + 0x20b4,0,0xc1c00000,0x42800000,0x3e800000);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc11",param_1 + 0x20b0,0x3f000000,0,0x3f800000,0x3c23d70a);
  (**(code **)(*param_2 + 0x48))(param_2,"rtpc12",param_1 + 0x20b8,0,0xc2c00000,0,0x3e800000);
  (**(code **)(*param_2 + 0x48))(param_2,"rtpc13",param_1 + 0x20ac,0,0,0x3f800000,0x3a83126f);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc15",param_1 + 0x20dc,0,0xc2400000,0x41400000,0x3e800000);
  (**(code **)(*param_2 + 0x48))(param_2,"rtpc2",param_1 + 0x40,0,0,0x3f7d70a4,0x3a83126f);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc4",param_1 + 0x3c,0x44160000,0x41200000,0x469c4000,0x3f800000);
  (**(code **)(*param_2 + 0x48))(param_2,"rtpc5",param_1 + 0x38,0,0xc1c00000,0x41400000,0x3e800000);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc6",param_1 + 0x2c,0x44960000,0x41200000,0x469c4000,0x3f800000);
  (**(code **)(*param_2 + 0x48))(param_2,"rtpc7",param_1 + 0x28,0,0xc1c00000,0x41400000,0x3e800000);
  (**(code **)(*param_2 + 0x48))
            (param_2,"rtpc8",param_1 + 0x18,0x469c4000,0x41200000,0x469c4000,0x3f800000);
                    /* WARNING: Could not recover jumptable at 0x00014436564c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 144365650 FUN_144365650 body=259 status=ok
// SIG undefined FUN_144365650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144365650(void)

{
  _DAT_14cbf2344 = 0xffffffff;
  DAT_14cbf2348 = 0;
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9e3ea0,2,0,0,0,0);
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9e5450,2,0,0,0,0);
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9e6760,2,0,0,0,0);
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9e6e70,2,0,0,0,0);
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9e9160,2,0,0,0,0);
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9ea190,2,0,0,0,0);
  return;
}



// FUNCTION 144365762 FUN_144365762 body=225 status=ok
// SIG undefined FUN_144365762(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144365762(void)

{
  _DAT_14cbf26f0 = 0xffffffff;
  _DAT_14cbf26f4 = 0;
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9edc20,4,0,0,0,0);
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9ef280,2,0,0,0,0);
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9f0510,2,0,0,0,0);
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9f1760,2,0,0,0,0);
  FUN_14282b410(L"/Script/SequencerScripting",0,0,&PTR_FUN_14b9f1a10,1,0,0);
  return;
}



// FUNCTION 144365844 FUN_144365844 body=55 status=ok
// SIG undefined FUN_144365844(void)

void FUN_144365844(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf2a68 == 0) {
    uVar1 = FUN_14150666c();
    DAT_14cbf2a68 = FUN_14171c317(FUN_146662c48,uVar1,L"ESequenceTimeUnit");
  }
  return;
}



// FUNCTION 14436587c FUN_14436587c body=931 status=ok
// SIG undefined FUN_14436587c(void)

ulonglong FUN_14436587c(longlong param_1,uint param_2,longlong *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8 [2];
  longlong local_98;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_6d;
  uint local_6c;
  float local_68;
  char local_64;
  ulonglong local_60;
  
  uVar5 = (ulonglong)param_2;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 != (longlong *)0x0 && param_1 != 0) {
    local_88 = 0;
    uStack_80 = 0;
    FUN_144365cd6(param_1,param_3);
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x2e8))();
    lVar2 = *(longlong *)(lVar2 + 0x120);
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x7d8) + 0x2e8))();
    lVar3 = *(longlong *)(lVar3 + 0x118);
    if (lVar2 == lVar3) {
      fVar10 = 0.0;
    }
    else {
      local_a8[0] = (lVar2 >> 0x20) * (longlong)(int)lVar3;
      local_c8[0] = (longlong)(int)lVar2 * (lVar3 >> 0x20);
      lVar2 = (local_a8[0] * (int)param_2) / local_c8[0];
      dVar7 = (double)((ulonglong)(double)local_a8[0] & 0x8000000000000000) / (double)local_c8[0] +
              (((double)local_a8[0] * (double)(int)param_2) / (double)local_c8[0] - (double)lVar2);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar7;
      auVar9 = roundpd(auVar9,auVar9,1);
      fVar6 = (float)(dVar7 - auVar9._0_8_);
      uVar4 = (longlong)auVar9._0_8_ + lVar2;
      fVar10 = fVar6;
      if (0.99999994 <= fVar6) {
        fVar10 = 0.99999994;
      }
      if (0x7ffffffe < (longlong)uVar4) {
        uVar4 = 0x7fffffff;
      }
      uVar5 = 0xffffffff80000000;
      if (-0x80000000 < (longlong)uVar4) {
        uVar5 = uVar4;
      }
      fVar10 = (float)(~-(uint)(0.0 < fVar6) & (uint)fVar6 | (uint)fVar10 & -(uint)(0.0 < fVar6)) +
               0.5 + -0.5;
      if (0.99999994 <= fVar10) {
        fVar10 = 0.99999994;
      }
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
    }
    if (0 < (int)uStack_80) {
      lVar2 = 0;
      do {
        uVar1 = *(undefined8 *)(local_88 + lVar2 * 8);
        FUN_140e50294(uVar1,local_c8);
        FUN_140e500ac(uVar1,local_c8);
        FUN_14087ad3e(local_c8,local_a8);
        local_6d = 0xf;
        FUN_1405bad34(local_a8,&local_6c,uVar5 & 0xffffffff | (ulonglong)(uint)fVar10 << 0x20,
                      &local_6d);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        FUN_1447bda9c(local_b8,local_b0);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        if (local_64 != '\0') {
          uVar5 = (ulonglong)local_6c;
          fVar10 = local_68;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)uStack_80);
    }
    lVar2 = (**(code **)(*param_3 + 0x2e8))(param_3);
    lVar2 = *(longlong *)(lVar2 + 0x120);
    lVar3 = (**(code **)(*param_3 + 0x2e8))(param_3);
    lVar3 = *(longlong *)(lVar3 + 0x118);
    if (lVar3 != lVar2) {
      local_a8[0] = (lVar3 >> 0x20) * (longlong)(int)lVar2;
      local_c8[0] = (longlong)(int)lVar3 * (lVar2 >> 0x20);
      lVar2 = (local_a8[0] * (int)uVar5) / local_c8[0];
      auVar8._8_8_ = 0;
      auVar8._0_8_ = ((double)fVar10 * (double)local_a8[0]) / (double)local_c8[0] +
                     (((double)local_a8[0] * (double)(int)uVar5) / (double)local_c8[0] -
                     (double)lVar2);
      auVar9 = roundpd(auVar8,auVar8,1);
      uVar4 = (longlong)auVar9._0_8_ + lVar2;
      if (0x7ffffffe < (longlong)uVar4) {
        uVar4 = 0x7fffffff;
      }
      uVar5 = 0xffffffff80000000;
      if (-0x80000000 < (longlong)uVar4) {
        uVar5 = uVar4;
      }
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 144365c20 FUN_144365c20 body=91 status=ok
// SIG undefined FUN_144365c20(void)

void FUN_144365c20(void)

{
  if (DAT_14cbf2d98 != 0) {
    if (DAT_14cbf2d90 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf2d90)(DAT_14cbf2d90,0);
    FUN_1446efa72(&DAT_14cbf2d90,0,0,0x10);
    DAT_14cbf2d98 = 0;
  }
  if (DAT_14cbf2d90 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 144365c7b FUN_144365c7b body=91 status=ok
// SIG undefined FUN_144365c7b(void)

void FUN_144365c7b(void)

{
  if (DAT_14cbf2da8 != 0) {
    if (DAT_14cbf2da0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbf2da0)(DAT_14cbf2da0,0);
    FUN_1446efa72(&DAT_14cbf2da0,0,0,0x10);
    DAT_14cbf2da8 = 0;
  }
  if (DAT_14cbf2da0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 144365cd6 FUN_144365cd6 body=338 status=ok
// SIG undefined FUN_144365cd6(void)

undefined8 FUN_144365cd6(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  
  if (param_2 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_2 + 0x2e8))(param_2);
    if ((longlong)*(int *)(lVar5 + 0xe8) != 0) {
      puVar9 = *(undefined8 **)(lVar5 + 0xe0);
      puVar1 = puVar9 + *(int *)(lVar5 + 0xe8);
      do {
        plVar6 = (longlong *)(**(code **)(*(longlong *)*puVar9 + 0x328))();
        lVar5 = plVar6[1];
        if ((longlong)(int)lVar5 != 0) {
          lVar3 = *plVar6;
          lVar8 = 0;
          do {
            lVar10 = *(longlong *)(lVar3 + lVar8);
            if (lVar10 == param_1) {
              iVar2 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
                FUN_14757f002(param_3,iVar2);
              }
              lVar5 = *param_3;
              *(longlong *)(lVar5 + (longlong)iVar2 * 8) = param_1;
              return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
            }
            lVar7 = FUN_1408612da();
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
              if (lVar10 == 0) {
LAB_144365d96:
                lVar10 = 0;
              }
              else {
                lVar7 = FUN_1408612da();
                if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_144365d96;
              }
              cVar4 = FUN_144365cd6(param_1,*(undefined8 *)(lVar10 + 0x7d8),param_3);
              if (cVar4 != '\0') {
                iVar2 = (int)param_3[1];
                *(uint *)(param_3 + 1) = iVar2 + 1U;
                if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
                  FUN_14757f002(param_3,iVar2);
                }
                *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar10;
              }
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)(int)lVar5 * 8 != lVar8);
        }
        puVar9 = puVar9 + 1;
      } while (puVar9 != puVar1);
    }
  }
  return 0;
}



// FUNCTION 144365e28 FUN_144365e28 body=629 status=ok
// SIG undefined FUN_144365e28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144365e28(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14098d3d2(FUN_144365844,L"/Script/SequencerScripting",L"ESequenceTimeUnit",&DAT_14cbf2a60);
  _DAT_14cbf2a78 = 0xffffffff;
  DAT_14cbf2a7c = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9f3da0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9f45d0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9f5ac0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9f68b0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9f7160,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9f7d80,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14b9f9e00,1,0);
  DAT_14cbf2d90 = 0;
  DAT_14cbf2d98 = 0;
  atexit(FUN_144365c20);
  DAT_14cbf2da0 = 0;
  DAT_14cbf2da8 = 0;
  atexit(FUN_144365c7b);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14ba00160,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14ba02650,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14ba037a0,1,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14ba046e0,2,0);
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_14282b410(L"/Script/SequencerScripting",&PTR_FUN_14ba05660,1,0);
  local_48 = 0x800000014ba05688;
  local_34 = 0x12;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14666531e(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443660a0 FUN_1443660a0 body=102 status=ok
// SIG undefined FUN_1443660a0(void)

void FUN_1443660a0(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ba057d0;
  local_14 = 0x19;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146665664(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144366108 FUN_144366108 body=55 status=ok
// SIG undefined FUN_144366108(void)

void FUN_144366108(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf31c0 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf31c0 = FUN_14171c317(FUN_146665848,uVar1,L"EPolyEditExtrudeEdgeDirectionMode");
  }
  return;
}



// FUNCTION 14436613f FUN_14436613f body=55 status=ok
// SIG undefined FUN_14436613f(void)

void FUN_14436613f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf31d8 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf31d8 = FUN_14171c317(FUN_146665877,uVar1,L"EPolyEditExtrudeEdgeDistanceMode");
  }
  return;
}



// FUNCTION 144366176 FUN_144366176 body=55 status=ok
// SIG undefined FUN_144366176(void)

void FUN_144366176(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3248 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3248 = FUN_14171c317(FUN_1466659b5,uVar1,L"EMakeMeshPlacementType");
  }
  return;
}



// FUNCTION 1443661ad FUN_1443661ad body=55 status=ok
// SIG undefined FUN_1443661ad(void)

void FUN_1443661ad(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3260 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3260 = FUN_14171c317(FUN_1466659e4,uVar1,L"EMakeMeshPivotLocation");
  }
  return;
}



// FUNCTION 1443661e4 FUN_1443661e4 body=55 status=ok
// SIG undefined FUN_1443661e4(void)

void FUN_1443661e4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3278 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3278 = FUN_14171c317(FUN_146665a13,uVar1,L"EMakeMeshPolygroupMode");
  }
  return;
}



// FUNCTION 14436621b FUN_14436621b body=55 status=ok
// SIG undefined FUN_14436621b(void)

void FUN_14436621b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf32c0 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf32c0 = FUN_14171c317(FUN_146665b60,uVar1,L"EProceduralRectType");
  }
  return;
}



// FUNCTION 144366252 FUN_144366252 body=55 status=ok
// SIG undefined FUN_144366252(void)

void FUN_144366252(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf32f0 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf32f0 = FUN_14171c317(FUN_146665c3b,uVar1,L"EProceduralDiscType");
  }
  return;
}



// FUNCTION 144366289 FUN_144366289 body=55 status=ok
// SIG undefined FUN_144366289(void)

void FUN_144366289(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3380 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3380 = FUN_14171c317(FUN_146665f37,uVar1,L"EProceduralSphereType");
  }
  return;
}



// FUNCTION 1443662c0 FUN_1443662c0 body=55 status=ok
// SIG undefined FUN_1443662c0(void)

void FUN_1443662c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf33c8 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf33c8 = FUN_14171c317(FUN_14666608e,uVar1,L"EProceduralStairsType");
  }
  return;
}



// FUNCTION 1443662f8 FUN_1443662f8 body=225 status=ok
// SIG undefined FUN_1443662f8(void)

double * FUN_1443662f8(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  
  dVar1 = param_4[2];
  dVar2 = *param_4;
  dVar3 = param_4[1];
  dVar4 = param_4[3];
  dVar1 = ((dVar1 * dVar4 - param_2[2]) * dVar1 +
          (dVar4 * dVar2 - *param_2) * dVar2 + (dVar3 * dVar4 - param_2[1]) * dVar3) /
          (dVar1 * param_3[2] + dVar2 * *param_3 + dVar3 * param_3[1]);
  if (0.0 <= dVar1) {
    iVar6 = _finite(dVar1);
    if (iVar6 != 0) goto LAB_144366397;
  }
  dVar1 = 1000.0;
LAB_144366397:
  dVar2 = param_3[2];
  dVar3 = param_3[1];
  dVar4 = param_2[2];
  dVar5 = param_2[1];
  *param_1 = dVar1 * *param_3 + *param_2;
  param_1[1] = dVar3 * dVar1 + dVar5;
  param_1[2] = dVar2 * dVar1 + dVar4;
  return param_1;
}



// FUNCTION 1443663d9 FUN_1443663d9 body=257 status=ok
// SIG undefined FUN_1443663d9(void)

void FUN_1443663d9(int param_1,longlong param_2,uint param_3,longlong *param_4,longlong *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(param_3 >> 9) * 8);
  iVar1 = *(int *)(lVar3 + (ulonglong)(param_3 & 0x1ff) * 4);
  if (-1 < (longlong)iVar1) {
    lVar6 = *param_4;
    lVar4 = (longlong)param_1 * 0x10;
    iVar5 = *(int *)(lVar6 + 8 + lVar4);
    if (iVar5 <= iVar1) {
      iVar5 = (iVar1 - iVar5) + 1;
      do {
        lVar3 = *param_4;
        lVar6 = param_5[1];
        iVar2 = *(int *)(lVar3 + 8 + lVar4);
        *(uint *)(lVar3 + 8 + lVar4) = iVar2 + 1U;
        if (*(uint *)(lVar3 + 0xc + lVar4) < iVar2 + 1U) {
          FUN_1446f48e2((longlong *)(lVar3 + lVar4),iVar2);
        }
        *(int *)(*(longlong *)(lVar3 + lVar4) + (longlong)iVar2 * 4) = (int)lVar6;
        iVar2 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar2 + 1U) {
          FUN_144769b64(param_5,iVar2);
        }
        *(undefined8 *)(*param_5 + (longlong)iVar2 * 8) = 0;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      lVar6 = *param_4;
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (ulonglong)(param_3 >> 9) * 8);
    }
    *(undefined4 *)(lVar3 + (ulonglong)(param_3 & 0x1ff) * 4) =
         *(undefined4 *)(*(longlong *)(lVar6 + lVar4) + (longlong)iVar1 * 4);
  }
  return;
}



// FUNCTION 1443664da FUN_1443664da body=499 status=ok
// SIG undefined FUN_1443664da(void)

void FUN_1443664da(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  longlong local_b8;
  undefined1 local_b0 [16];
  longlong **local_a0;
  longlong *local_98;
  byte *local_90;
  longlong *local_88;
  longlong local_80;
  byte local_71;
  longlong local_70;
  longlong *local_68;
  code *local_60;
  longlong ***local_58;
  undefined2 local_50;
  undefined1 uStack_4e;
  undefined5 uStack_4d;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar4 = (longlong *)param_2[9];
  local_68 = param_2;
  if (plVar4 != (longlong *)0x0) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    uVar2 = FUN_148f4f660(param_2 + 6);
    local_70 = param_2[8];
    if (*(int *)(local_70 + 0x10) != *(int *)(local_70 + 0x3c)) {
      local_71 = (**(code **)(*param_2 + 0x2a8))(param_2);
      local_90 = &local_71;
      local_88 = &local_80;
      local_80 = 0;
      local_a0 = &local_68;
      local_58 = &local_a0;
      local_98 = &local_70;
      uStack_4e = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_50 = 0;
      local_60 = FUN_14436975c;
      FUN_1484b8434(uVar2,&local_60,&local_50,0);
      if ((local_80 != 0 & local_71) == 1) {
        plVar3 = (longlong *)(**(code **)(*local_68 + 0x2b0))();
        (**(code **)(*param_1 + 0x2a0))(param_1,&local_50);
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
        plVar3 = (longlong *)CONCAT53(uStack_4d,CONCAT12(uStack_4e,local_50));
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x10))();
        }
        (**(code **)(*param_1 + 0x2a0))(param_1,local_b0);
        local_b8 = local_80;
        local_80 = 0;
        uVar2 = (**(code **)(*local_68 + 0x2b0))();
        local_c8 = local_b0;
        (**(code **)(*plVar4 + 0xd0))(plVar4,uVar2,1,&local_b8);
        plVar4 = (longlong *)(**(code **)(*local_68 + 0x2b0))();
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      lVar1 = local_80;
      if (local_80 != 0) {
        FUN_146c2a142(local_80);
        FUN_1400020a8(lVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443666ce FUN_1443666ce body=790 status=ok
// SIG undefined FUN_1443666ce(void)

void FUN_1443666ce(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  code *pcVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 **ppuVar15;
  undefined8 uVar16;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined1 *local_100;
  undefined8 ***local_f8;
  undefined1 *local_f0;
  undefined8 **local_e8;
  undefined1 *local_e0;
  undefined8 **local_d8;
  undefined8 **local_d0;
  undefined1 *local_c8;
  undefined8 ***local_c0;
  undefined1 *local_b8;
  undefined8 **local_b0;
  undefined1 *local_a8;
  undefined8 **local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  ulonglong uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_3 == (longlong *)0x0) || (*(longlong *)(param_2 + 0x48) == 0)) goto LAB_144366701;
  FUN_148f4f660(param_2 + 0x30);
  puVar2 = *(undefined8 **)(param_2 + 0x40);
  lVar11 = FUN_148f4f98c(DAT_14c951640);
  uVar3 = *(undefined4 *)(param_2 + 0x34);
  uVar4 = *(undefined4 *)(param_2 + 0x38);
  uVar5 = *(undefined4 *)(param_2 + 0x3c);
  uVar6 = *(undefined4 *)(param_2 + 0x40);
  uVar7 = *(undefined4 *)(param_2 + 0x44);
  uVar8 = *(undefined4 *)(param_2 + 0x48);
  uVar9 = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(lVar11 + 0x28) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(lVar11 + 0x2c) = uVar3;
  *(undefined4 *)(lVar11 + 0x30) = uVar4;
  *(undefined4 *)(lVar11 + 0x34) = uVar5;
  *(undefined4 *)(lVar11 + 0x38) = uVar6;
  *(undefined4 *)(lVar11 + 0x3c) = uVar7;
  *(undefined4 *)(lVar11 + 0x40) = uVar8;
  *(undefined4 *)(lVar11 + 0x44) = uVar9;
  lVar1 = lVar11 + 0x48;
  *(undefined4 *)(lVar11 + 0x48) = *(undefined4 *)puVar2;
  *(undefined4 *)(lVar11 + 0x4c) = *(undefined4 *)((longlong)puVar2 + 4);
  iVar10 = (**(code **)(*param_1 + 0x2d8))(param_1);
  if (iVar10 == 0) {
    plVar14 = *(longlong **)(param_2 + 0x48);
    local_a0 = &local_98;
    ppuVar15 = &local_a8;
    pcVar12 = (code *)&LAB_14436a2fa;
LAB_14436683d:
    *ppuVar15 = pcVar12;
    lVar13 = *plVar14;
    local_108 = (undefined8 *)0x0;
    uVar16 = 0;
LAB_144366852:
    (**(code **)(lVar13 + 0x48))(plVar14,lVar1,ppuVar15,uVar16);
  }
  else {
    iVar10 = (**(code **)(*param_1 + 0x2d8))(param_1);
    if (iVar10 == 1) {
      plVar14 = *(longlong **)(param_2 + 0x48);
      local_b0 = &local_98;
      ppuVar15 = &local_b8;
      local_b8 = &LAB_14436a2fe;
      lVar13 = *plVar14;
      uVar16 = 1;
      local_108 = puVar2;
      goto LAB_144366852;
    }
    iVar10 = (**(code **)(*param_1 + 0x2d8))(param_1);
    if (iVar10 == 10) {
      local_d0 = &local_98;
      local_90 = CONCAT44(*(undefined4 *)puVar2,*(int *)((longlong)puVar2 + 4));
      uStack_88 = CONCAT35((int3)(uStack_88 >> 0x28),
                           CONCAT14(*(int *)((longlong)puVar2 + 4) == 2,(int)uStack_88)) &
                  0xffffffffffffff00;
      plVar14 = *(longlong **)(param_2 + 0x48);
      local_c0 = &local_d0;
      ppuVar15 = &local_c8;
      pcVar12 = FUN_14436a302;
      local_98 = puVar2;
      goto LAB_14436683d;
    }
    iVar10 = (**(code **)(*param_1 + 0x2d8))(param_1);
    if (iVar10 == 0xb) {
      local_d8 = &local_98;
      local_e0 = &LAB_14436a31c;
      local_108 = puVar2;
      (**(code **)(**(longlong **)(param_2 + 0x48) + 0x48))
                (*(longlong **)(param_2 + 0x48),lVar1,&local_e0,1);
      uVar16 = 1;
LAB_1443668fb:
      FUN_148389927(lVar1,puVar2,uVar16);
    }
    else {
      iVar10 = (**(code **)(*param_1 + 0x2d8))(param_1);
      if (iVar10 == 0x14) {
        local_e8 = &local_98;
        local_f0 = &LAB_14436a320;
        local_108 = puVar2;
        (**(code **)(**(longlong **)(param_2 + 0x48) + 0x48))
                  (*(longlong **)(param_2 + 0x48),lVar1,&local_f0,2);
        uVar16 = 0;
        goto LAB_1443668fb;
      }
      iVar10 = (**(code **)(*param_1 + 0x2d8))(param_1);
      if (iVar10 == 0x15) {
        local_70 = 0;
        local_68 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_64 = 0xffffffff00000080;
        local_5c = 0;
        local_50 = 0;
        local_48 = 0;
        local_98 = *(undefined8 **)(lVar11 + 0x48);
        local_f8 = &local_d0;
        local_100 = &LAB_14436a324;
        local_108 = puVar2;
        (**(code **)(**(longlong **)(param_2 + 0x48) + 0x48))
                  (*(longlong **)(param_2 + 0x48),&local_98,&local_100,2);
        *(undefined8 *)(lVar11 + 0x48) = *puVar2;
        FUN_147371fc4(lVar11 + 0x50,puVar2 + 1);
        FUN_148389927(lVar1,&local_98,1);
        local_48 = 0;
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        FUN_140345f8a(&local_90);
      }
    }
  }
  *param_3 = lVar11;
LAB_144366701:
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443669e6 FUN_1443669e6 body=509 status=ok
// SIG undefined FUN_1443669e6(void)

void FUN_1443669e6(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  longlong local_c0;
  undefined1 local_b8 [16];
  longlong *local_a8;
  char *local_a0;
  longlong *local_98;
  longlong local_90;
  char local_81;
  longlong local_80;
  code *local_78;
  longlong **local_70;
  undefined2 local_68;
  undefined1 uStack_66;
  undefined5 uStack_65;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar8 = (longlong *)param_2[9];
  if (plVar8 != (longlong *)0x0) {
    if (param_3 != (longlong *)0x0) {
      *param_3 = 0;
    }
    uVar6 = FUN_148f4f660(param_2 + 6);
    local_80 = param_2[8];
    local_81 = (**(code **)(*param_2 + 0x2a8))(param_2);
    local_a0 = &local_81;
    local_98 = &local_90;
    local_90 = 0;
    local_70 = &local_a8;
    uStack_66 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_68 = 0;
    local_78 = FUN_14436a328;
    local_a8 = &local_80;
    FUN_1484b8434(uVar6,&local_78,&local_68,0);
    if ((local_81 == '\x01') && (local_90 != 0)) {
      plVar7 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_68);
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_68);
      plVar7 = (longlong *)CONCAT53(uStack_65,CONCAT12(uStack_66,local_68));
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      (**(code **)(*param_1 + 0x2a0))(param_1,local_b8);
      local_c0 = local_90;
      local_90 = 0;
      uVar6 = (**(code **)(*param_2 + 0x2b0))(param_2);
      local_c8 = local_b8;
      (**(code **)(*plVar8 + 0xd0))(plVar8,uVar6,1,&local_c0);
      plVar8 = (longlong *)(**(code **)(*param_2 + 0x2b0))(param_2);
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if (param_3 != (longlong *)0x0) {
      lVar9 = FUN_148f4f98c(DAT_14c951640);
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
      lVar5 = param_2[7];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
      lVar3 = param_2[8];
      lVar4 = param_2[9];
      *(int *)(lVar9 + 0x28) = (int)param_2[6];
      *(undefined4 *)(lVar9 + 0x2c) = uVar1;
      *(int *)(lVar9 + 0x30) = (int)lVar5;
      *(undefined4 *)(lVar9 + 0x34) = uVar2;
      *(longlong *)(lVar9 + 0x38) = lVar3;
      *(longlong *)(lVar9 + 0x40) = lVar4;
      *param_3 = lVar9;
    }
    lVar3 = local_90;
    if (local_90 != 0) {
      FUN_146c2a142(local_90);
      FUN_1400020a8(lVar3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144366c0c FUN_144366c0c body=55 status=ok
// SIG undefined FUN_144366c0c(void)

void FUN_144366c0c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3760 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3760 = FUN_14171c317(FUN_146666cfe,uVar1,L"EDrawPolygonDrawMode");
  }
  return;
}



// FUNCTION 144366c43 FUN_144366c43 body=55 status=ok
// SIG undefined FUN_144366c43(void)

void FUN_144366c43(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3778 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3778 = FUN_14171c317(FUN_146666d2d,uVar1,L"EDrawPolygonExtrudeMode");
  }
  return;
}



// FUNCTION 144366c7a FUN_144366c7a body=368 status=ok
// SIG undefined FUN_144366c7a(void)

void FUN_144366c7a(undefined8 *param_1,longlong *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined1 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar2 = (int)param_2[1];
  if (0 < (longlong)iVar2) {
    iVar5 = iVar2 + -1;
    lVar6 = 0;
    lVar7 = 0;
    do {
      pbVar3 = (byte *)param_1[1];
      local_80 = (&DAT_14c758c60)[pbVar3[2]];
      local_7c = (&DAT_14c758c60)[pbVar3[1]];
      local_78 = (&DAT_14c758c60)[*pbVar3];
      local_74 = (float)pbVar3[3] * 0.003921569;
      lVar4 = *param_2;
      local_88 = *(undefined8 *)(lVar4 + 0x10 + lVar6);
      local_98 = *(undefined8 *)(lVar4 + lVar6);
      uStack_90 = ((undefined8 *)(lVar4 + lVar6))[1];
      local_a8 = *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar5 * 0x18);
      puVar1 = (undefined4 *)(lVar4 + (longlong)iVar5 * 0x18);
      local_b8 = *puVar1;
      uStack_b4 = puVar1[1];
      uStack_b0 = puVar1[2];
      uStack_ac = puVar1[3];
      local_c0 = 1;
      local_c8 = 0;
      local_d8 = param_3;
      local_d0 = param_4;
      (**(code **)(**(longlong **)*param_1 + 0x30))
                (*(longlong **)*param_1,&local_b8,&local_98,&local_80);
      iVar5 = (int)lVar7;
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x18;
    } while (iVar2 != lVar7);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144366dec FUN_144366dec body=187 status=ok
// SIG undefined FUN_144366dec(void)

longlong * FUN_144366dec(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = param_3[1];
  if (0 < (longlong)(int)lVar3) {
    lVar4 = 0;
    do {
      FUN_146bca7ae(*param_1,&local_50,*param_3 + lVar4,2);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_14489624a(param_2,iVar2);
      }
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar2 * 0x10);
      *puVar1 = local_50;
      puVar1[1] = uStack_4c;
      puVar1[2] = uStack_48;
      puVar1[3] = uStack_44;
      lVar4 = lVar4 + 0x18;
    } while ((longlong)(int)lVar3 * 0x18 != lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144366ea8 FUN_144366ea8 body=55 status=ok
// SIG undefined FUN_144366ea8(void)

void FUN_144366ea8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf37f0 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf37f0 = FUN_14171c317(FUN_146666ec8,uVar1,L"ELocalFrameMode");
  }
  return;
}



// FUNCTION 144366edf FUN_144366edf body=55 status=ok
// SIG undefined FUN_144366edf(void)

void FUN_144366edf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3820 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3820 = FUN_14171c317(FUN_146666f72,uVar1,L"EEditMeshPolygonsToolActions");
  }
  return;
}



// FUNCTION 144366f16 FUN_144366f16 body=55 status=ok
// SIG undefined FUN_144366f16(void)

void FUN_144366f16(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3850 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3850 = FUN_14171c317(FUN_146666ffe,uVar1,L"EEditMeshPolygonsToolSelectionMode");
  }
  return;
}



// FUNCTION 144366fb1 FUN_144366fb1 body=69 status=ok
// SIG undefined FUN_144366fb1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144366fb1(void)

{
  _DAT_14cbf3b18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144366ff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf3b20,1);
  return;
}



// FUNCTION 144366ff6 FUN_144366ff6 body=69 status=ok
// SIG undefined FUN_144366ff6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144366ff6(void)

{
  _DAT_14cbf3b38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144367038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf3b40,1);
  return;
}



// FUNCTION 14436703c FUN_14436703c body=909 status=ok
// SIG undefined FUN_14436703c(void)

void FUN_14436703c(undefined8 *param_1,uint param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined1 local_4c [7];
  char local_45;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_45 = '\0';
  local_44 = param_2;
  FUN_1447cbafe(*param_1,local_4c,&local_44,&local_45);
  if (local_45 == '\0') {
    plVar6 = (longlong *)param_1[1];
    if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
      plVar8 = plVar6 + 7;
      if ((longlong *)plVar6[8] != (longlong *)0x0) {
        plVar8 = (longlong *)plVar6[8];
      }
      uVar10 = *(uint *)((longlong)plVar8 + (ulonglong)((int)plVar6[9] - 1U & local_44) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          puVar4 = (uint *)(*plVar6 + (longlong)(int)uVar10 * 0x14);
          if (*puVar4 == local_44) goto LAB_1443670d9;
          uVar10 = puVar4[3];
        } while (uVar10 != 0xffffffff);
      }
    }
    puVar4 = (uint *)0x0;
LAB_1443670d9:
    uVar10 = puVar4[2];
    plVar6 = (longlong *)param_1[2];
    if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
      while( true ) {
        uVar9 = puVar4[1];
        plVar8 = plVar6 + 7;
        if ((longlong *)plVar6[8] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar6[8];
        }
        uVar7 = *(uint *)((longlong)plVar8 +
                         (ulonglong)
                         ((int)plVar6[9] - 1U & (uVar9 * 0x40 + (uVar9 >> 2) + 0x9e3779b9 ^ uVar9))
                         * 4);
        if (uVar7 == 0xffffffff) break;
        while( true ) {
          puVar4 = (uint *)(*plVar6 + (longlong)(int)uVar7 * 0x14);
          if ((*puVar4 == uVar9) && (*(char *)(*plVar6 + 4 + (longlong)(int)uVar7 * 0x14) == '\0'))
          break;
          uVar7 = puVar4[3];
          if (uVar7 == 0xffffffff) goto LAB_1443670ec;
        }
        if ((puVar4 == (uint *)0x0) ||
           ((puVar4 = puVar4 + 2, puVar4 == (uint *)0x0 ||
            (FUN_1447cbafe(*param_1,local_4c,puVar4,&local_45), local_45 != '\0')))) break;
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        uVar9 = *puVar4;
        *(uint *)(*param_3 + (longlong)iVar2 * 4) = uVar9;
        plVar6 = (longlong *)param_1[1];
        if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
          plVar8 = plVar6 + 7;
          if ((longlong *)plVar6[8] != (longlong *)0x0) {
            plVar8 = (longlong *)plVar6[8];
          }
          uVar7 = *(uint *)((longlong)plVar8 + (ulonglong)((int)plVar6[9] - 1U & uVar9) * 4);
          if (uVar7 != 0xffffffff) {
            do {
              puVar4 = (uint *)(*plVar6 + (longlong)(int)uVar7 * 0x14);
              if (*puVar4 == uVar9) goto LAB_144367292;
              uVar7 = puVar4[3];
            } while (uVar7 != 0xffffffff);
          }
        }
        puVar4 = (uint *)0x0;
LAB_144367292:
        plVar6 = (longlong *)param_1[2];
        if ((int)plVar6[1] == *(int *)((longlong)plVar6 + 0x34)) break;
      }
    }
LAB_1443670ec:
    uVar9 = *(uint *)(param_3 + 1);
    if (1 < (int)uVar9) {
      puVar3 = (undefined4 *)*param_3;
      lVar11 = 0;
      puVar5 = puVar3;
      do {
        uVar1 = *puVar5;
        *puVar5 = puVar3[(ulonglong)uVar9 + lVar11 + -1];
        puVar3[(ulonglong)uVar9 + lVar11 + -1] = uVar1;
        lVar11 = lVar11 + -1;
        puVar5 = puVar5 + 1;
      } while (-lVar11 != (ulonglong)(uVar9 >> 1));
      uVar9 = *(uint *)(param_3 + 1);
    }
    *(uint *)(param_3 + 1) = uVar9 + 1;
    if (*(uint *)((longlong)param_3 + 0xc) < uVar9 + 1) {
      FUN_1446f48e2(param_3,uVar9);
    }
    *(uint *)(*param_3 + (longlong)(int)uVar9 * 4) = local_44;
    plVar6 = (longlong *)param_1[2];
    if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
      while( true ) {
        plVar8 = plVar6 + 7;
        if ((longlong *)plVar6[8] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar6[8];
        }
        uVar9 = *(uint *)((longlong)plVar8 +
                         (ulonglong)
                         ((int)plVar6[9] - 1U &
                         (uVar10 * 0x40 + (uVar10 >> 2) + 0x9e3779ba ^ uVar10)) * 4);
        if (uVar9 == 0xffffffff) break;
        while( true ) {
          puVar4 = (uint *)(*plVar6 + (longlong)(int)uVar9 * 0x14);
          if ((*puVar4 == uVar10) && (*(char *)(*plVar6 + 4 + (longlong)(int)uVar9 * 0x14) != '\0'))
          break;
          uVar9 = puVar4[3];
          if (uVar9 == 0xffffffff) goto LAB_144367158;
        }
        if ((puVar4 == (uint *)0x0) ||
           ((puVar4 = puVar4 + 2, puVar4 == (uint *)0x0 ||
            (FUN_1447cbafe(*param_1,local_4c,puVar4,&local_45), local_45 != '\0')))) break;
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1446f48e2(param_3,iVar2);
        }
        uVar10 = *puVar4;
        *(uint *)(*param_3 + (longlong)iVar2 * 4) = uVar10;
        plVar6 = (longlong *)param_1[1];
        if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
          plVar8 = plVar6 + 7;
          if ((longlong *)plVar6[8] != (longlong *)0x0) {
            plVar8 = (longlong *)plVar6[8];
          }
          uVar9 = *(uint *)((longlong)plVar8 + (ulonglong)((int)plVar6[9] - 1U & uVar10) * 4);
          if (uVar9 != 0xffffffff) {
            do {
              puVar4 = (uint *)(*plVar6 + (longlong)(int)uVar9 * 0x14);
              if (*puVar4 == uVar10) goto LAB_1443673b2;
              uVar9 = puVar4[3];
            } while (uVar9 != 0xffffffff);
          }
        }
        puVar4 = (uint *)0x0;
LAB_1443673b2:
        uVar10 = puVar4[2];
        plVar6 = (longlong *)param_1[2];
        if ((int)plVar6[1] == *(int *)((longlong)plVar6 + 0x34)) break;
      }
    }
  }
LAB_144367158:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443673ca FUN_1443673ca body=636 status=ok
// SIG undefined FUN_1443673ca(void)

void FUN_1443673ca(undefined8 *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar6 = *(int *)(param_2 + 0x10);
  local_78 = param_3;
  if ((longlong)iVar6 != 0) {
    lVar3 = *(longlong *)(param_2 + 8);
    lVar7 = 0;
    do {
      uVar1 = *(uint *)(lVar3 + lVar7);
      if ((((int)uVar1 < 0) ||
          (lVar4 = param_1[1], *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24) <= (int)uVar1
          )) || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar4 + 0x28) +
                                               (ulonglong)(uVar1 >> 9) * 8) +
                                             (ulonglong)(uVar1 & 0x1ff) * 2) - 1U)))
      goto LAB_14436761f;
      local_60 = *param_1;
      local_58 = &LAB_144368cf8;
      local_50 = &local_60;
      FUN_146c03fd0(lVar4,uVar1,&local_58);
      lVar7 = lVar7 + 4;
    } while ((longlong)iVar6 * 4 != lVar7);
  }
  iVar6 = *(int *)(local_78 + 0x10);
  if ((longlong)iVar6 != 0) {
    lVar3 = *(longlong *)(local_78 + 8);
    lVar7 = 0;
    do {
      uVar1 = *(uint *)(lVar3 + lVar7);
      if ((((int)uVar1 < 0) ||
          (lVar4 = param_1[1], *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24) <= (int)uVar1
          )) || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar4 + 0x28) +
                                               (ulonglong)(uVar1 >> 9) * 8) +
                                             (ulonglong)(uVar1 & 0x1ff) * 2) - 1U)))
      goto LAB_14436761f;
      local_60 = *param_1;
      local_70 = &LAB_144368d06;
      local_68 = &local_60;
      FUN_146c03fd0(lVar4,uVar1,&local_70);
      lVar7 = lVar7 + 4;
    } while ((longlong)iVar6 * 4 != lVar7);
  }
  FUN_146c5e534(param_2);
  lVar3 = local_78;
  FUN_146c5e534(local_78);
  iVar6 = FUN_1483372fe(param_1[1],param_2,lVar3);
  plVar5 = (longlong *)param_1[4];
  if (*(char *)(param_1 + 5) == '\x01') {
    FUN_146c81efe(plVar5,(undefined8 *)(param_2 + 0x18),0);
    uVar1 = *(uint *)(lVar3 + 0x20);
    if ((longlong)(int)uVar1 != 0) {
      plVar5 = (longlong *)param_1[3];
      iVar2 = (int)plVar5[1];
      *(uint *)(plVar5 + 1) = iVar2 + uVar1;
      if ((uint)(*(int *)((longlong)plVar5 + 0xc) - iVar2) < uVar1) {
        FUN_1446f48e2(plVar5,iVar2);
      }
      memcpy((void *)((longlong)iVar2 * 4 + *plVar5),*(void **)(lVar3 + 0x18),
             (longlong)(int)uVar1 << 2);
    }
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x20);
    if ((longlong)(int)uVar1 != 0) {
      iVar2 = (int)plVar5[1];
      *(uint *)(plVar5 + 1) = iVar2 + uVar1;
      if ((uint)(*(int *)((longlong)plVar5 + 0xc) - iVar2) < uVar1) {
        FUN_1446f48e2(plVar5,iVar2);
      }
      memcpy((void *)((longlong)iVar2 * 4 + *plVar5),*(void **)(param_2 + 0x18),
             (longlong)(int)uVar1 << 2);
    }
    FUN_146c81efe(param_1[3],lVar3 + 0x18,0);
  }
  if (iVar6 != 0) {
    *(undefined1 *)param_1[2] = 0;
  }
LAB_14436761f:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144367648 FUN_144367648 body=363 status=ok
// SIG undefined FUN_144367648(void)

void FUN_144367648(longlong *param_1)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 auStack_68 [32];
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_1;
  dVar2 = (double)param_1[2];
  lVar5 = *(longlong *)(lVar4 + 0x268);
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) >> 9);
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar11 * 8);
  uVar10 = (ulonglong)*(uint *)((longlong)param_1 + 0xc) & 0x1ff;
  lVar7 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(*(uint *)(param_1 + 1) >> 9) * 8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1) & 0x1ff;
  dVar12 = 1.0 - dVar2;
  local_38 = *(double *)(lVar7 + 0x10 + uVar9 * 0x18) * dVar12 +
             *(double *)(lVar6 + 0x10 + uVar10 * 0x18) * dVar2;
  dStack_40 = *(double *)(lVar7 + 8 + uVar9 * 0x18) * dVar12 +
              *(double *)(lVar6 + 8 + uVar10 * 0x18) * dVar2;
  local_48 = dVar12 * *(double *)(lVar7 + uVar9 * 0x18) + dVar2 * *(double *)(lVar6 + uVar10 * 0x18)
  ;
  cVar8 = FUN_146bfed03();
  if (cVar8 != '\0') {
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar11 * 8);
    *(double *)(lVar6 + 0x10 + uVar10 * 0x18) = local_38;
    pdVar1 = (double *)(lVar6 + uVar10 * 0x18);
    *pdVar1 = local_48;
    pdVar1[1] = dStack_40;
    if (*(char *)(lVar5 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar5 + 0x214) = *(int *)(lVar5 + 0x214) + 1;
      UNLOCK();
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x268);
  uVar3 = *(uint *)(param_1 + 1);
  cVar8 = FUN_146bfed03(&local_48);
  if (cVar8 != '\0') {
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
    uVar9 = (ulonglong)(uVar3 & 0x1ff);
    *(double *)(lVar5 + 0x10 + uVar9 * 0x18) = local_38;
    pdVar1 = (double *)(lVar5 + uVar9 * 0x18);
    *pdVar1 = local_48;
    pdVar1[1] = dStack_40;
    if (*(char *)(lVar4 + 0x210) == '\x01') {
      LOCK();
      *(int *)(lVar4 + 0x214) = *(int *)(lVar4 + 0x214) + 1;
      UNLOCK();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443677b4 FUN_1443677b4 body=1368 status=ok
// SIG undefined FUN_1443677b4(void)

void FUN_1443677b4(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 *_Src;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_388 [32];
  undefined8 *local_368;
  undefined4 local_360;
  undefined1 local_358;
  undefined1 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined1 local_338 [24];
  undefined *local_320;
  undefined8 *puStack_318;
  ulonglong local_310;
  longlong local_308 [2];
  undefined1 local_2f8 [64];
  void *local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_2a0 [64];
  undefined **local_260;
  void *local_258;
  ulonglong uStack_250;
  undefined8 local_248;
  undefined1 local_240 [64];
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  void *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  void *local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined *local_188;
  undefined8 *puStack_180;
  ulonglong local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_388;
  plVar2 = (longlong *)param_1[1];
  local_1b8 = (void *)0x0;
  uStack_1b0 = 0;
  FUN_146c5ddfc(*(undefined8 *)*param_1,param_2,&local_1b8);
  local_1f8 = *(undefined8 *)*param_1;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = (void *)0x0;
  uStack_1d8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1c0 = 0;
  FUN_14054c6c4(&local_1f0,param_2);
  pvVar3 = local_1b8;
  iVar1 = (int)uStack_1b0;
  lVar6 = (longlong)(int)uStack_1b0;
  uStack_1d8 = CONCAT44(uStack_1d8._4_4_,(int)uStack_1b0);
  if ((int)uStack_1b0 == 0 && uStack_1d8._4_4_ == 0) {
    uStack_1d8 = uStack_1b0 & 0xffffffff;
  }
  else {
    FUN_144a06ca8(&local_1e0,uStack_1b0 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy(local_1e0,pvVar3,lVar6 << 2);
    }
  }
  FUN_146c7f310(local_2a0,&local_1f8);
  local_248 = *(undefined8 *)*param_1;
  local_258 = (void *)0x0;
  uStack_250 = 0;
  local_260 = &PTR_FUN_14ae72d10;
  FUN_146c7f310(local_240,local_2a0);
  local_200 = 0xffffffff00000001;
  FUN_146bc7c1a(local_2a0);
  local_2b8 = (void *)0x0;
  uStack_2b0 = 0;
  cVar4 = FUN_148314c5e(&local_260,0xffffffff);
  pvVar3 = local_258;
  if (cVar4 == '\0') {
    local_320 = *(undefined **)*param_1;
    puStack_180 = &local_1a8;
    local_188 = &DAT_142971dd8;
    FUN_146bc6232(&local_320,&local_258,0);
    FUN_146c7f310(local_2f8,&local_1f8);
    FUN_1483150ae(&local_188,*(undefined8 *)*param_1,local_2f8);
    cVar4 = FUN_148315182(&local_188,0xffffffff);
    _Src = puStack_180;
    if (cVar4 == '\0') {
      uStack_1a0 = local_338;
      local_1a8 = &DAT_142971dd8;
      FUN_146bc6232(&local_320,&puStack_180,0);
      plVar5 = (longlong *)(**(code **)(*plVar2 + 0x2c8))(plVar2);
      (**(code **)(*plVar5 + 0x340))(plVar5,param_1[2],3);
      FUN_14851bbe8(*(undefined8 *)(plVar2[0x28] + 0x58),plVar2[0x4d],1,0xf);
      *(undefined1 *)((longlong)plVar2 + 0x4d1) = 1;
      lVar6 = plVar2[0x54];
      FUN_14852f8ce(lVar6);
      *(undefined1 *)(*(longlong *)(lVar6 + 0x80) + 0xb1) = 0;
      FUN_148315ddc(&local_188);
      goto LAB_144367c76;
    }
    iVar1 = (int)local_178;
    lVar6 = (longlong)(int)local_178;
    uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(int)local_178);
    if ((int)local_178 == 0 && uStack_2b0._4_4_ == 0) {
      uStack_2b0 = local_178 & 0xffffffff;
    }
    else {
      FUN_144a06ca8(&local_2b8,local_178 & 0xffffffff);
      if (iVar1 != 0) {
        memcpy(local_2b8,_Src,lVar6 << 2);
      }
    }
    FUN_148315ddc(&local_188);
LAB_144367af3:
    lVar6 = (longlong)(int)(uint)uStack_2b0;
    if (lVar6 != 0) {
      plVar5 = (longlong *)param_1[3];
      iVar1 = (int)plVar5[1];
      *(uint *)(plVar5 + 1) = iVar1 + (uint)uStack_2b0;
      if ((uint)(*(int *)((longlong)plVar5 + 0xc) - iVar1) < (uint)uStack_2b0) {
        FUN_1446f48e2(plVar5,iVar1);
      }
      memcpy((void *)((longlong)iVar1 * 4 + *plVar5),local_2b8,lVar6 << 2);
    }
  }
  else {
    lVar6 = (longlong)(int)uStack_250;
    uStack_2b0 = CONCAT44(uStack_2b0._4_4_,(int)uStack_250);
    if (lVar6 != 0) {
      FUN_144a06ca8(&local_2b8,uStack_250 & 0xffffffff,0);
      memcpy(local_2b8,pvVar3,lVar6 << 2);
      goto LAB_144367af3;
    }
    uStack_2b0 = uStack_250 & 0xffffffff;
  }
  if (*(longlong *)(*(longlong *)*param_1 + 0x208) != 0) {
    local_308[0] = 0;
    local_308[1] = 0;
    FUN_14845d8b4(&local_1f8,local_308);
    FUN_146bd1842(local_308,local_338,&local_320);
    local_340 = *(undefined8 *)*param_1;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    local_158 = 0x3ff0000000000000;
    local_188 = local_320;
    puStack_180 = puStack_318;
    local_178 = local_310;
    local_198 = DAT_14c8463c8;
    local_1a8 = (undefined *)CONCAT44(DAT_14c8463b8._4_4_,(undefined4)DAT_14c8463b8);
    uStack_1a0 = (undefined1 *)CONCAT44(DAT_14c8463c0._4_4_,(undefined4)DAT_14c8463c0);
    FUN_146bfb7f2(&local_170,&local_1a8,local_338);
    FUN_146bc9e14(&local_340,&local_2b8);
    local_368 = &local_348;
    local_348 = DAT_14c84635c;
    local_1a8 = (undefined *)
                CONCAT44(*(undefined4 *)((longlong)plVar2 + 0x4d4),
                         *(undefined4 *)((longlong)plVar2 + 0x4d4));
    local_350 = 0;
    local_358 = 1;
    local_360 = 0;
    FUN_146bca2ae(&local_340,&local_2b8,&local_188,&local_1a8);
    if (local_308[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_144367c76:
  if (local_2b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_260 = &PTR_FUN_14ae72d10;
  FUN_146bc7c1a(local_240);
  local_260 = &PTR_LAB_14ae72d28;
  if (local_258 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_146bc7c1a(&local_1f8);
  if (local_1b8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144367d0e FUN_144367d0e body=413 status=ok
// SIG undefined FUN_144367d0e(void)

undefined8 * FUN_144367d0e(longlong *param_1,undefined8 *param_2,double *param_3,double *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [40];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c0 = *param_3;
  local_a8 = param_3[1];
  local_90 = param_3[2];
  local_a0 = local_c0 * param_4[1] - *param_4 * local_a8;
  local_b8 = local_90 * *param_4 - param_4[2] * local_c0;
  local_d0 = param_4[2] * local_a8 - param_4[1] * local_90;
  puVar1 = (undefined8 *)*param_1;
  param_2[2] = puVar1[2];
  uVar2 = puVar1[1];
  local_c8 = local_a8 * local_a0 - local_b8 * local_90;
  local_98 = local_c0 * local_b8 - local_d0 * local_a8;
  local_b0 = local_90 * local_d0 - local_a0 * local_c0;
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0x3ff0000000000000;
  FUN_146bfbbda(&local_88);
  *(undefined4 *)(param_2 + 3) = (undefined4)local_88;
  *(undefined4 *)((longlong)param_2 + 0x1c) = local_88._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)param_2 + 0x24) = uStack_80._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)local_78;
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_78._4_4_;
  *(undefined4 *)(param_2 + 6) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_2 + 0x34) = uStack_70._4_4_;
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[0xb] = 0x3ff0000000000000;
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144367eac FUN_144367eac body=793 status=ok
// SIG undefined FUN_144367eac(void)

double * FUN_144367eac(longlong *param_1,double *param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined1 auStack_298 [40];
  double local_270;
  double local_268;
  double local_260;
  undefined8 local_258;
  int iStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  int iStack_240;
  int iStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 uStack_22c;
  int iStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  int iStack_218;
  int iStack_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_1fc;
  longlong local_1f8 [2];
  longlong *local_1e8;
  longlong local_1d8 [4];
  code *local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  int iStack_1a0;
  int iStack_19c;
  undefined **local_198;
  longlong local_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  int iStack_178;
  int iStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_158 [2];
  longlong *local_148;
  longlong local_138 [4];
  longlong local_118 [2];
  longlong *local_108;
  longlong local_f8 [4];
  code *local_d8;
  undefined8 uStack_d0;
  int iStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  undefined8 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_298;
  param_2[2] = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
  local_190 = *param_1;
  local_1a8 = 0;
  local_198 = &PTR_LAB_149f3aae0;
  _uStack_188 = CONCAT44(uStack_184,param_3);
  local_1b8 = FUN_146be9588;
  local_258 = (code *)(local_190 + 0xb8);
  iStack_250 = param_3;
  FUN_146be94ac(local_118,&local_258,&local_1b8);
  local_168 = 0xffffffffffffffff;
  local_158[0] = 0;
  local_148 = (longlong *)0x0;
  local_1b8 = local_d8;
  uStack_1b0 = uStack_d0;
  iStack_1a0 = iStack_c0;
  iStack_19c = iStack_bc;
  local_198 = (undefined **)local_b8;
  local_180 = local_a0;
  uStack_17c = uStack_9c;
  iStack_178 = iStack_98;
  iStack_174 = iStack_94;
  local_170 = local_90;
  FUN_146be971a(local_158,local_118);
  local_15c = 0;
  FUN_146bfd1f0(&local_1b8);
  local_208 = 0xffffffffffffffff;
  local_1f8[0] = 0;
  local_1e8 = (longlong *)0x0;
  local_258 = (code *)CONCAT44(uStack_ac,local_b0);
  iStack_250 = iStack_a8;
  uStack_24c = uStack_a4;
  local_248 = local_a0;
  uStack_244 = uStack_9c;
  iStack_240 = iStack_98;
  iStack_23c = iStack_94;
  local_238 = local_90;
  local_230 = local_b0;
  uStack_22c = uStack_ac;
  iStack_228 = iStack_a8;
  uStack_224 = uStack_a4;
  local_220 = local_a0;
  uStack_21c = uStack_9c;
  iStack_218 = iStack_98;
  iStack_214 = iStack_94;
  local_210 = local_90;
  FUN_146be971a(local_1f8,local_118);
  local_1fc = 0;
  FUN_146bfd1f0(&local_258);
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  while ((((local_1b8 != local_258 || ((int)uStack_1b0 != iStack_250)) || (iStack_1a0 != iStack_240)
          ) || (iStack_19c != iStack_23c))) {
    FUN_146c13dec(*param_1,&local_270,local_160);
    dVar1 = dVar1 + local_270;
    dVar2 = dVar2 + local_268;
    dVar3 = dVar3 + local_260;
    FUN_146bfd1f0(&local_1b8);
  }
  param_2[1] = dVar2;
  param_2[2] = dVar3;
  *param_2 = dVar1;
  if (local_1f8[0] != 0) {
    plVar8 = local_1e8;
    if (local_1e8 == (longlong *)0x0) {
      plVar8 = local_1d8;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_158[0] != 0) {
    plVar8 = local_148;
    if (local_148 == (longlong *)0x0) {
      plVar8 = local_138;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (local_118[0] != 0) {
    if (local_108 == (longlong *)0x0) {
      local_108 = local_f8;
    }
    (**(code **)(*local_108 + 0x10))();
  }
  dVar4 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (9.99999993922529e-09 < dVar4) {
    dVar4 = 1.0 / SQRT(dVar4);
    *param_2 = dVar1 * dVar4;
    param_2[1] = dVar2 * dVar4;
    param_2[2] = dVar3 * dVar4;
  }
  if ((local_80 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443681c6 FUN_1443681c6 body=473 status=ok
// SIG undefined FUN_1443681c6(void)

void FUN_1443681c6(longlong *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_88 [36];
  uint local_64;
  uint local_60;
  uint local_5c;
  uint *local_58;
  uint *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)*param_1;
  uVar2 = *(uint *)(plVar3 + 1);
  *(uint *)(plVar3 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)plVar3 + 0xc) < uVar2 + 1) {
    FUN_148f75f10(plVar3,uVar2);
  }
  lVar4 = *plVar3;
  lVar5 = (longlong)(int)uVar2 * 0xc;
  *(undefined8 *)(lVar4 + lVar5) = 0xffffffffffffffff;
  *(undefined4 *)(lVar4 + 8 + lVar5) = 0xffffffff;
  *(undefined4 *)(*(longlong *)*param_1 + lVar5) = param_2;
  *(ulonglong *)(*(longlong *)*param_1 + 4 + lVar5) = CONCAT44(param_4,param_3);
  plVar3 = (longlong *)param_1[1];
  if (param_3 != 0xffffffff) {
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar6 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar3[8];
      }
      uVar7 = *(uint *)((longlong)plVar6 + (ulonglong)((int)plVar3[9] - 1U & param_3) * 4);
      if (uVar7 != 0xffffffff) {
        do {
          puVar1 = (uint *)(*plVar3 + (longlong)(int)uVar7 * 0x14);
          if (*puVar1 == param_3) {
            if ((puVar1 != (uint *)0x0) && (puVar1 != (uint *)0xfffffffffffffffc)) {
              puVar1[2] = uVar2;
              goto LAB_1443682de;
            }
            break;
          }
          uVar7 = puVar1[3];
        } while (uVar7 != 0xffffffff);
      }
    }
    local_50 = &local_64;
    local_64 = 0xffffffff;
    local_58 = &local_5c;
    local_60 = uVar2;
    local_5c = param_3;
    FUN_14836dc36(plVar3,local_44,&local_58,0);
  }
LAB_1443682de:
  local_5c = param_4;
  if (param_4 != 0xffffffff) {
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar6 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar3[8];
      }
      uVar7 = *(uint *)((longlong)plVar6 + (ulonglong)((int)plVar3[9] - 1U & param_4) * 4);
      if (uVar7 != 0xffffffff) {
        do {
          puVar1 = (uint *)(*plVar3 + (longlong)(int)uVar7 * 0x14);
          if (*puVar1 == param_4) {
            if ((puVar1 != (uint *)0x0) && (puVar1 + 1 != (uint *)0x0)) {
              puVar1[1] = uVar2;
              goto LAB_14436836b;
            }
            break;
          }
          uVar7 = puVar1[3];
        } while (uVar7 != 0xffffffff);
      }
    }
    local_50 = &local_64;
    local_60 = 0xffffffff;
    local_58 = &local_5c;
    local_64 = uVar2;
    FUN_14836dc36(plVar3,local_44,&local_58,0);
  }
LAB_14436836b:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1443683a0 FUN_1443683a0 body=487 status=ok
// SIG undefined FUN_1443683a0(void)

undefined8
FUN_1443683a0(longlong *param_1,uint param_2,char param_3,double *param_4,undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0xffffffff) {
    dVar3 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    dVar11 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    param_4[2] = DAT_14c8464f0;
    *param_4 = dVar3;
    param_4[1] = dVar11;
    dVar3 = DAT_14c8464f0;
    uVar7 = DAT_14c8464e8._4_4_;
    uVar6 = (undefined4)DAT_14c8464e8;
    uVar5 = DAT_14c8464e0._4_4_;
    uVar4 = (undefined4)DAT_14c8464e0;
    param_5[2] = DAT_14c8464f0;
    *(undefined4 *)param_5 = uVar4;
    *(undefined4 *)((longlong)param_5 + 4) = uVar5;
    *(undefined4 *)(param_5 + 1) = uVar6;
    *(undefined4 *)((longlong)param_5 + 0xc) = uVar7;
    uVar8 = CONCAT71((int7)((ulonglong)dVar3 >> 8),1);
    goto LAB_144368437;
  }
  if (*(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8) + 0xc
              + (ulonglong)((param_2 & 0x1ff) << 4)) == -1) {
    FUN_146c13626(*param_1,&local_50,param_2);
    if (param_3 == '\0') {
      if (local_50 == *(uint *)(param_1 + 1)) goto LAB_144368490;
    }
    else if (local_4c == *(uint *)(param_1 + 1)) {
LAB_144368490:
      FUN_146c13dec(*param_1,&local_68,
                    *(undefined4 *)
                     (*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(param_2 >> 9) * 8)
                      + 8 + (ulonglong)((param_2 & 0x1ff) << 4)));
      param_5[2] = local_58;
      *param_5 = local_68;
      param_5[1] = uStack_60;
      lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(local_4c >> 9) * 8);
      uVar9 = (ulonglong)(local_4c & 0x1ff);
      lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)(local_50 >> 9) * 8);
      uVar10 = (ulonglong)(local_50 & 0x1ff);
      dVar3 = *(double *)(lVar1 + 0x10 + uVar9 * 0x18) - *(double *)(lVar2 + 0x10 + uVar10 * 0x18);
      dVar11 = *(double *)(lVar1 + 8 + uVar9 * 0x18) - *(double *)(lVar2 + 8 + uVar10 * 0x18);
      dVar12 = *(double *)(lVar1 + uVar9 * 0x18) - *(double *)(lVar2 + uVar10 * 0x18);
      *param_4 = dVar12;
      param_4[1] = dVar11;
      param_4[2] = dVar3;
      dVar13 = dVar3 * dVar3 + dVar12 * dVar12 + dVar11 * dVar11;
      uVar8 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      if (9.99999993922529e-09 < dVar13) {
        dVar13 = 1.0 / SQRT(dVar13);
        *param_4 = dVar12 * dVar13;
        param_4[1] = dVar11 * dVar13;
        param_4[2] = dVar3 * dVar13;
      }
      goto LAB_144368437;
    }
  }
  uVar8 = 0;
LAB_144368437:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 144368588 FUN_144368588 body=55 status=ok
// SIG undefined FUN_144368588(void)

void FUN_144368588(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3b70 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3b70 = FUN_14171c317(FUN_146667e4c,uVar1,L"ESetMeshMaterialMode");
  }
  return;
}



// FUNCTION 1443685bf FUN_1443685bf body=55 status=ok
// SIG undefined FUN_1443685bf(void)

void FUN_1443685bf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3ba8 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3ba8 = FUN_14171c317(FUN_146667f4d,uVar1,L"EMeshEditingMaterialModes");
  }
  return;
}



// FUNCTION 1443685f6 FUN_1443685f6 body=55 status=ok
// SIG undefined FUN_1443685f6(void)

void FUN_1443685f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3bf8 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3bf8 = FUN_14171c317(FUN_146666af9,uVar1,L"ERevolvePropertiesCapFillMode");
  }
  return;
}



// FUNCTION 14436862d FUN_14436862d body=55 status=ok
// SIG undefined FUN_14436862d(void)

void FUN_14436862d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3c10 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3c10 = FUN_14171c317(FUN_1466680e9,uVar1,L"ERevolvePropertiesPolygroupMode");
  }
  return;
}



// FUNCTION 144368664 FUN_144368664 body=55 status=ok
// SIG undefined FUN_144368664(void)

void FUN_144368664(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3c28 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3c28 = FUN_14171c317(FUN_146668118,uVar1,L"ERevolvePropertiesQuadSplit");
  }
  return;
}



// FUNCTION 14436869c FUN_14436869c body=1626 status=ok
// SIG undefined FUN_14436869c(void)

void FUN_14436869c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong *_Dst;
  longlong lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a0 = param_2;
  _Dst = (longlong *)FUN_14001cc68(0xe8);
  memset(_Dst,0,0xe8);
  FUN_14845abbc(_Dst);
  *_Dst = (longlong)&PTR_FUN_14ba272f0;
  _Dst[0x11] = 0;
  _Dst[0x12] = 0;
  _Dst[0x13] = 0;
  _Dst[0x14] = 0;
  _Dst[0x15] = 0;
  _Dst[0x16] = 0;
  _Dst[0x17] = 0;
  _Dst[0x18] = 0;
  _Dst[0x19] = 0x3ff0000000000000;
  *(undefined4 *)(_Dst + 0x1a) = 0;
  _Dst[0x1b] = 0x3ff0000000000000;
  *(undefined1 *)(_Dst + 0x1c) = 1;
  *(undefined4 *)((longlong)_Dst + 0xe4) = 0;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30);
  plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x38);
  local_b8 = param_1;
  if (plVar13 == (longlong *)0x0) {
    _Dst[0x11] = lVar8;
    goto LAB_1443687de;
  }
  LOCK();
  *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
  UNLOCK();
  plVar6 = (longlong *)_Dst[0x12];
  _Dst[0x11] = lVar8;
  if (plVar13 == plVar6) {
    LOCK();
    plVar6 = plVar13 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1443687de;
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1443687de;
    lVar8 = *plVar13;
  }
  else {
    _Dst[0x12] = (longlong)plVar13;
    if (plVar6 == (longlong *)0x0) goto LAB_1443687de;
    LOCK();
    plVar13 = plVar6 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 != 0) goto LAB_1443687de;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1443687de;
    lVar8 = *plVar6;
    plVar13 = plVar6;
  }
  (**(code **)(lVar8 + 0x10))(plVar13);
LAB_1443687de:
  lVar8 = *(longlong *)(*(longlong *)(local_b8 + 0x10) + 0x48);
  lVar17 = *(longlong *)(*(longlong *)(local_b8 + 0x10) + 0x50);
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  plVar13 = (longlong *)_Dst[0x14];
  _Dst[0x13] = lVar8;
  _Dst[0x14] = lVar17;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar13 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  lVar8 = *(longlong *)(local_b8 + 8);
  _Dst[0x19] = *(longlong *)(lVar8 + 0xa8);
  *(undefined4 *)(_Dst + 0x1a) = *(undefined4 *)(lVar8 + 0xb0);
  _Dst[0x1b] = (longlong)(double)*(float *)(lVar8 + 0xb4);
  *(undefined1 *)(_Dst + 0x1c) = *(undefined1 *)(lVar8 + 0xb8);
  *(undefined4 *)((longlong)_Dst + 0xe4) = *(undefined4 *)(lVar8 + 0xbc);
  lVar8 = local_b8;
  local_b0 = _Dst;
  if (*(int *)(local_b8 + 0xf4) < *(int *)(local_b8 + 200)) {
    puVar2 = (uint *)(local_b8 + 0xd0);
    iVar4 = *(int *)(local_b8 + 0xe8);
    if (iVar4 == 0) {
      uVar19 = 1;
      iVar15 = 0;
      uVar16 = 0;
      iVar7 = 0;
    }
    else {
      puVar9 = *(uint **)(local_b8 + 0xe0);
      if (*(uint **)(local_b8 + 0xe0) == (uint *)0x0) {
        puVar9 = puVar2;
      }
      uVar20 = *puVar9;
      if (uVar20 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        uVar16 = 0;
        uVar19 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar19 = uVar16;
        }
        iVar15 = 0;
        do {
          if (uVar19 == uVar16) goto LAB_144368af8;
          iVar15 = iVar15 + 0x20;
          uVar20 = puVar9[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar20 == 0);
      }
      else {
        iVar15 = 0;
        uVar16 = 0;
      }
      uVar19 = (ulonglong)(-uVar20 & uVar20);
      uVar3 = uVar19 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar7 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar7) {
        iVar7 = iVar4;
      }
    }
    if (iVar7 != iVar4) {
      local_a8 = _Dst + 0x15;
      uVar20 = 0xffffffff;
      do {
        uVar21 = *(undefined4 *)(*(longlong *)(lVar8 + 0xc0) + (longlong)iVar7 * 0xc);
        iVar7 = (int)local_b0[0x16];
        *(uint *)(local_b0 + 0x16) = iVar7 + 1U;
        if (*(uint *)((longlong)local_b0 + 0xb4) < iVar7 + 1U) {
          FUN_1446f48e2(local_a8,iVar7);
          lVar8 = local_b8;
        }
        *(undefined4 *)(*local_a8 + (longlong)iVar7 * 4) = uVar21;
        uVar20 = uVar20 & ~(uint)uVar19;
        puVar9 = *(uint **)(lVar8 + 0xe0);
        if (*(uint **)(lVar8 + 0xe0) == (uint *)0x0) {
          puVar9 = puVar2;
        }
        iVar5 = *(int *)(lVar8 + 0xe8);
        iVar7 = (int)uVar16;
        lVar17 = (longlong)iVar7;
        uVar14 = puVar9[lVar17] & uVar20;
        if (uVar14 == 0) {
          iVar11 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar11 = iVar5 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar7) {
            iVar12 = iVar7;
          }
          if (iVar7 < iVar11) {
            lVar18 = 0;
            do {
              uVar14 = puVar9[lVar17 + lVar18 + 1];
              if (uVar14 != 0) {
                uVar16 = (ulonglong)(iVar7 + (int)lVar18 + 1);
                uVar20 = 0xffffffff;
                goto LAB_144368aa2;
              }
              iVar15 = iVar15 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar12 - lVar17 != lVar18);
            uVar20 = 0xffffffff;
            iVar7 = iVar12;
          }
          uVar16 = (ulonglong)(iVar7 + 1);
          lVar8 = local_b8;
          iVar7 = iVar5;
        }
        else {
LAB_144368aa2:
          uVar19 = (ulonglong)(-uVar14 & uVar14);
          uVar3 = uVar19 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar7 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar7) {
            iVar7 = iVar5;
          }
        }
      } while (iVar7 != iVar4);
    }
  }
  else if (*(int *)(local_b8 + 0x54) < *(int *)(local_b8 + 0x28)) {
    puVar2 = (uint *)(local_b8 + 0x30);
    iVar4 = *(int *)(local_b8 + 0x48);
    if (iVar4 == 0) {
      uVar19 = 1;
      uVar16 = 0;
      iVar15 = 0;
      iVar7 = 0;
    }
    else {
      puVar9 = *(uint **)(local_b8 + 0x40);
      if (*(uint **)(local_b8 + 0x40) == (uint *)0x0) {
        puVar9 = puVar2;
      }
      uVar20 = *puVar9;
      if (uVar20 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        uVar16 = 0;
        uVar19 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar19 = uVar16;
        }
        iVar15 = 0;
        do {
          if (uVar19 == uVar16) goto LAB_144368af8;
          iVar15 = iVar15 + 0x20;
          uVar20 = puVar9[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar20 == 0);
      }
      else {
        uVar16 = 0;
        iVar15 = 0;
      }
      uVar19 = (ulonglong)(-uVar20 & uVar20);
      uVar3 = uVar19 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar7 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar7) {
        iVar7 = iVar4;
      }
    }
    if (iVar7 != iVar4) {
      local_a8 = _Dst + 0x17;
      uVar20 = 0xffffffff;
      do {
        uVar21 = *(undefined4 *)(*(longlong *)(lVar8 + 0x20) + (longlong)iVar7 * 0xc);
        iVar7 = (int)local_b0[0x18];
        *(uint *)(local_b0 + 0x18) = iVar7 + 1U;
        if (*(uint *)((longlong)local_b0 + 0xc4) < iVar7 + 1U) {
          FUN_1446f48e2(local_a8,iVar7);
          lVar8 = local_b8;
        }
        *(undefined4 *)(*local_a8 + (longlong)iVar7 * 4) = uVar21;
        uVar20 = uVar20 & ~(uint)uVar19;
        puVar9 = *(uint **)(lVar8 + 0x40);
        if (*(uint **)(lVar8 + 0x40) == (uint *)0x0) {
          puVar9 = puVar2;
        }
        iVar5 = *(int *)(lVar8 + 0x48);
        iVar7 = (int)uVar16;
        lVar17 = (longlong)iVar7;
        uVar14 = puVar9[lVar17] & uVar20;
        if (uVar14 == 0) {
          iVar11 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar11 = iVar5 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar7) {
            iVar12 = iVar7;
          }
          if (iVar7 < iVar11) {
            lVar18 = 0;
            do {
              uVar14 = puVar9[lVar17 + lVar18 + 1];
              if (uVar14 != 0) {
                uVar16 = (ulonglong)(iVar7 + (int)lVar18 + 1);
                uVar20 = 0xffffffff;
                goto LAB_144368ca0;
              }
              iVar15 = iVar15 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar12 - lVar17 != lVar18);
            uVar20 = 0xffffffff;
            iVar7 = iVar12;
          }
          uVar16 = (ulonglong)(iVar7 + 1);
          lVar8 = local_b8;
          iVar7 = iVar5;
        }
        else {
LAB_144368ca0:
          uVar19 = (ulonglong)(-uVar14 & uVar14);
          uVar3 = uVar19 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar7 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar7) {
            iVar7 = iVar5;
          }
        }
      } while (iVar7 != iVar4);
    }
  }
LAB_144368af8:
  plVar13 = local_b0;
  lVar8 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x40) + 0x58) + 0x48);
  if (lVar8 == 0) {
    uVar21 = 0;
    uVar22 = 0;
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0x3ff00000;
    local_60 = 0;
    uStack_5c = 0x3ff00000;
    uStack_58 = 0;
    uStack_54 = 0x3ff00000;
    local_50 = 0x3ff0000000000000;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    local_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar8 + 0x1c8);
    puVar10 = &DAT_14c846480;
    if (lVar8 != 0) {
      puVar10 = (undefined8 *)(lVar8 + 0x240);
    }
    local_98 = *(undefined4 *)puVar10;
    uStack_94 = *(undefined4 *)((longlong)puVar10 + 4);
    uStack_90 = *(undefined4 *)(puVar10 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar10 + 0xc);
    local_88 = *(undefined4 *)(puVar10 + 2);
    uStack_84 = *(undefined4 *)((longlong)puVar10 + 0x14);
    uStack_80 = *(undefined4 *)(puVar10 + 3);
    uStack_7c = *(undefined4 *)((longlong)puVar10 + 0x1c);
    local_78 = *(undefined4 *)(puVar10 + 4);
    uStack_74 = *(undefined4 *)((longlong)puVar10 + 0x24);
    uStack_70 = *(undefined4 *)(puVar10 + 5);
    uStack_6c = *(undefined4 *)((longlong)puVar10 + 0x2c);
    uVar21 = *(undefined4 *)(puVar10 + 6);
    uVar22 = *(undefined4 *)((longlong)puVar10 + 0x34);
    local_60 = *(undefined4 *)(puVar10 + 8);
    uStack_5c = *(undefined4 *)((longlong)puVar10 + 0x44);
    uStack_58 = *(undefined4 *)(puVar10 + 9);
    uStack_54 = *(undefined4 *)((longlong)puVar10 + 0x4c);
    local_50 = puVar10[10];
  }
  local_68 = CONCAT44(uVar22,uVar21);
  (**(code **)(*local_b0 + 8))(local_b0);
  *local_a0 = plVar13;
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144368d14 FUN_144368d14 body=163 status=ok
// SIG undefined FUN_144368d14(void)

void FUN_144368d14(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  (**(code **)(**(longlong **)(*param_1 + 0xb8) + 0x2b8))();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144368de2 FUN_144368de2 body=29 status=ok
// SIG undefined FUN_144368de2(void)

undefined8 FUN_144368de2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144368e32 FUN_144368e32 body=29 status=ok
// SIG undefined FUN_144368e32(void)

undefined8 FUN_144368e32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144368e50 FUN_144368e50 body=29 status=ok
// SIG undefined FUN_144368e50(void)

undefined8 FUN_144368e50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144368fec FUN_144368fec body=93 status=ok
// SIG undefined FUN_144368fec(void)

void FUN_144368fec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba25f60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14436904a FUN_14436904a body=93 status=ok
// SIG undefined FUN_14436904a(void)

void FUN_14436904a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba25f60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443690a8 FUN_1443690a8 body=126 status=ok
// SIG undefined FUN_1443690a8(void)

void FUN_1443690a8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba25f60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144369117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144369126 FUN_144369126 body=100 status=ok
// SIG undefined FUN_144369126(void)

void FUN_144369126(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar2 = local_78;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_14851b91a(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xd0));
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436918c FUN_14436918c body=310 status=ok
// SIG undefined FUN_14436918c(void)

ulonglong FUN_14436918c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  longlong local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1443692bb;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1443692bb;
    }
    FUN_140192332(param_1 + 0x18,local_88,0);
    lVar8 = local_88[0];
  }
  else {
LAB_1443692bb:
    lVar8 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144369242;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      plVar6 = local_88;
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *plVar6 = *param_3;
        param_3 = param_3 + 1;
        plVar6 = plVar6 + 1;
      }
      FUN_14851b91a(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xd0));
      uVar7 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
      goto LAB_144369242;
    }
  }
  uVar7 = 0;
LAB_144369242:
  if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar8);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144369310 FUN_144369310 body=29 status=ok
// SIG undefined FUN_144369310(void)

undefined8 FUN_144369310(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144369390 FUN_144369390 body=29 status=ok
// SIG undefined FUN_144369390(void)

undefined8 FUN_144369390(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443693ae FUN_1443693ae body=163 status=ok
// SIG undefined FUN_1443693ae(void)

void FUN_1443693ae(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  (**(code **)(**(longlong **)(*param_1 + 200) + 0x2b8))();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436947c FUN_14436947c body=29 status=ok
// SIG undefined FUN_14436947c(void)

undefined8 FUN_14436947c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436949a FUN_14436949a body=290 status=ok
// SIG undefined FUN_14436949a(void)

void FUN_14436949a(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1 = (longlong *)*param_1;
  if (*param_2 == 0) {
    FUN_14020fad6(param_1[0x18] + 0xc0,&DAT_149dfb77a);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (*(int *)(param_1[0x18] + 0xac) == 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = (longlong)(int)param_1[0x15] + -1;
  }
  uVar2 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + lVar1 * 8));
  FUN_148505e5e(&local_30,uVar2,0);
  lVar1 = param_1[0x18];
  if ((longlong *)(lVar1 + 0xc0) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0xc0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 0xc0) = local_30;
    local_30 = 0;
    *(undefined4 *)(lVar1 + 200) = local_28;
    *(undefined4 *)(lVar1 + 0xcc) = local_24;
  }
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x19],0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443695fe FUN_1443695fe body=29 status=ok
// SIG undefined FUN_1443695fe(void)

undefined8 FUN_1443695fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436961c FUN_14436961c body=86 status=ok
// SIG undefined FUN_14436961c(void)

undefined8
FUN_14436961c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_4 + 4);
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  FUN_146bcb256(*param_2,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436969e FUN_14436969e body=29 status=ok
// SIG undefined FUN_14436969e(void)

undefined8 FUN_14436969e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443696bc FUN_1443696bc body=86 status=ok
// SIG undefined FUN_1443696bc(void)

undefined8
FUN_1443696bc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_4 + 4);
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  FUN_146c5cfa8(*param_2,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436973e FUN_14436973e body=29 status=ok
// SIG undefined FUN_14436973e(void)

undefined8 FUN_14436973e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436975c FUN_14436975c body=1892 status=ok
// SIG undefined FUN_14436975c(void)

void FUN_14436975c(undefined8 *param_1,code *param_2)

{
  uint uVar1;
  code *pcVar2;
  void *_Src;
  longlong *plVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  code **ppcVar7;
  longlong lVar8;
  code **ppcVar9;
  longlong lVar10;
  undefined1 auStack_268 [32];
  code *local_248;
  undefined8 *local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined8 local_228;
  int local_220;
  undefined4 local_21c;
  undefined1 local_214 [4];
  code *local_210;
  code **local_208;
  code *local_200;
  code **local_1f8;
  undefined8 uStack_1f0;
  code *local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined **local_1c8;
  code *local_1c0;
  longlong *local_1b8;
  code *local_1a8;
  ulonglong uStack_1a0;
  undefined8 local_198 [2];
  longlong local_188;
  undefined4 local_180;
  uint local_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  longlong local_168;
  undefined4 local_160;
  longlong local_158;
  ulonglong uStack_150;
  undefined1 local_148 [16];
  longlong local_138;
  undefined4 local_130;
  uint local_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined1 local_108 [168];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_248 = param_2;
  FUN_146c2c368(local_108);
  pcVar2 = local_248;
  if ((*(int *)(*(longlong *)*param_1 + 0x54) == 2) && (*(int *)(*(longlong *)*param_1 + 0x50) == 2)
     ) {
    local_200 = local_248;
    local_1f8 = (code **)0x0;
    uStack_1f0 = 0;
    local_138 = 0;
    local_130 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_12c = 0x80;
    uStack_128 = 0xffffffff;
    local_124 = 0;
    local_118 = 0;
    local_110 = 0;
    local_208 = &local_1e8;
    local_210 = FUN_144369ec2;
    uStack_1a0 = 0;
    local_1a8 = local_248;
    local_198[0] = 0xffffffff;
    local_1e8 = (code *)&local_158;
    FUN_148376a28(&local_1a8);
    FUN_148386e56(*(undefined8 *)param_1[1],pcVar2,&local_1a8,&local_210);
    local_188 = 0;
    local_180 = 0;
    local_1a8 = (code *)0x0;
    uStack_1a0 = 0;
    local_17c = 0x80;
    uStack_178 = 0xffffffff;
    local_174 = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_140619b9c(&local_158,&local_1e8);
    pcVar2 = local_1e8;
    lVar8 = (longlong)(int)local_1e0;
    local_240 = param_1;
    if (lVar8 != 0) {
      lVar10 = 0;
      do {
        uVar1 = *(uint *)(pcVar2 + lVar10);
        local_238 = CONCAT44(local_238._4_4_,uVar1);
        local_228 = *(code **)(*(longlong *)
                                (*(longlong *)(local_248 + 0x1c0) + (ulonglong)(uVar1 >> 9) * 8) + 8
                              + (ulonglong)((uVar1 & 0x1ff) << 4));
        FUN_1447cbafe(&local_158,local_214,&local_238,0);
        FUN_1447cbafe(&local_1a8,local_214,&local_228);
        if (local_228._4_4_ != -1) {
          FUN_1447cbafe(&local_1a8,local_214,(longlong)&local_228 + 4,0);
        }
        lVar10 = lVar10 + 4;
      } while (lVar8 * 4 != lVar10);
    }
    puVar6 = local_240;
    if (local_1e8 != (code *)0x0) {
      FUN_1400020a8(local_1e8);
    }
    local_1d8 = 0;
    local_1c8 = &PTR_LAB_14ba26120;
    local_1c0 = local_248;
    local_1e8 = FUN_144369f0c;
    local_1b8 = &local_158;
    FUN_140619b9c(&local_1a8,&local_228);
    FUN_14298451c(&local_200,&local_228,&local_1e8);
    if (local_228 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (*(char *)puVar6[2] != '\0') {
      FUN_146c2c4e8(local_108);
      if ((longlong)(int)uStack_1f0 != 0) {
        ppcVar7 = local_1f8 + (int)uStack_1f0;
        ppcVar9 = local_1f8;
        do {
          pcVar2 = *ppcVar9;
          local_228 = (code *)0x0;
          local_220 = *(int *)(pcVar2 + 8);
          lVar8 = (longlong)local_220;
          _Src = *(void **)pcVar2;
          if (lVar8 == 0) {
            local_21c = 0;
          }
          else {
            FUN_144a06ca8(&local_228,local_220,0);
            memcpy(local_228,_Src,lVar8 << 2);
            pcVar5 = local_228;
            lVar8 = (longlong)local_220;
            if (lVar8 != 0) {
              lVar10 = 0;
              do {
                FUN_146c2c9fe(local_108,*(undefined4 *)(pcVar5 + lVar10),1);
                lVar10 = lVar10 + 4;
              } while (lVar8 * 4 != lVar10);
            }
            if (local_228 != (code *)0x0) {
              FUN_1400020a8(local_228);
            }
          }
          pcVar5 = local_248;
          FUN_146bc96d4(local_248,**(undefined4 **)pcVar2);
          local_238 = *(undefined8 *)pcVar2;
          local_230 = *(undefined4 *)(pcVar2 + 8);
          FUN_1482aa2f0(pcVar5,&local_238);
          ppcVar9 = ppcVar9 + 1;
        } while (ppcVar9 != ppcVar7);
      }
    }
    local_160 = 0;
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    uVar4 = uStack_1a0 >> 0x20;
    uStack_1a0 = uStack_1a0 & 0xffffffff00000000;
    if ((int)uVar4 != 0) {
      FUN_1447a08a2(&local_1a8,0);
    }
    uStack_178 = 0xffffffff;
    local_174 = 0;
    local_180 = 0;
    if (0x80 < local_17c) {
      local_17c = 0x80;
      FUN_1446efbd8(local_198,0);
    }
    param_1 = local_240;
    if (local_188 != 0) {
      FUN_1400020a8();
    }
    if (local_1a8 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_110 = 0;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    uVar4 = uStack_150 >> 0x20;
    uStack_150 = uStack_150 & 0xffffffff00000000;
    if ((int)uVar4 != 0) {
      FUN_1447a08a2(&local_158,0);
    }
    uStack_128 = 0xffffffff;
    local_124 = 0;
    local_130 = 0;
    if (0x80 < local_12c) {
      local_12c = 0x80;
      FUN_1446efbd8(local_148,0);
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    if (local_158 != 0) {
      FUN_1400020a8();
    }
    FUN_146be9400(&local_1f8);
  }
  else {
    local_1a8 = (code *)&local_158;
    local_138 = 0;
    local_130 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_12c = 0x80;
    uStack_128 = 0xffffffff;
    local_124 = 0;
    local_118 = 0;
    local_110 = 0;
    local_1f8 = &local_1a8;
    local_200 = FUN_144369fec;
    FUN_148385b4a(*(undefined8 *)param_1[1],local_248,&local_200,0);
    if (*(char *)param_1[2] == '\x01') {
      FUN_146c2c4e8(local_108);
      local_188 = 0;
      local_180 = 0;
      local_1a8 = (code *)0x0;
      uStack_1a0 = 0;
      local_17c = 0x80;
      uStack_178 = 0xffffffff;
      local_174 = 0;
      local_168 = 0;
      local_160 = 0;
      FUN_145c3f772(&local_1a8,&local_158);
      FUN_148f76300(local_108,&local_1a8,1);
    }
    local_228 = local_248;
    FUN_140619b9c(&local_158,&local_210);
    local_1e0 = &local_238;
    local_1e8 = (code *)&DAT_142971dd8;
    FUN_146bc6232(&local_228,&local_210,1);
    if (local_210 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_110 = 0;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    uVar4 = uStack_150 >> 0x20;
    uStack_150 = uStack_150 & 0xffffffff00000000;
    if ((int)uVar4 != 0) {
      FUN_1447a08a2(&local_158,0);
    }
    uStack_128 = 0xffffffff;
    local_124 = 0;
    local_130 = 0;
    if (0x80 < local_12c) {
      local_12c = 0x80;
      FUN_1446efbd8(local_148,0);
    }
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    if (local_158 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)param_1[2] == '\x01') {
    FUN_146c2caf6(local_108,&local_158);
    plVar3 = (longlong *)param_1[3];
    if (plVar3 != &local_158) {
      lVar8 = *plVar3;
      *plVar3 = local_158;
      local_158 = 0;
      if (lVar8 == 0) goto LAB_144369df1;
      FUN_146c2a142(lVar8);
      FUN_1400020a8(lVar8);
    }
    lVar8 = local_158;
    if (local_158 != 0) {
      FUN_146c2a142(local_158);
      FUN_1400020a8(lVar8);
    }
  }
LAB_144369df1:
  FUN_146c2c40e(local_108);
  if ((local_60 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144369ec2 FUN_144369ec2 body=72 status=ok
// SIG undefined FUN_144369ec2(void)

void FUN_144369ec2(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144369f0c FUN_144369f0c body=151 status=ok
// SIG undefined FUN_144369f0c(void)

ulonglong FUN_144369f0c(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  
  uVar1 = *param_3;
  uVar2 = *param_2;
  iVar4 = FUN_146bc96d4(*param_1,uVar2);
  uVar7 = *param_1;
  iVar5 = FUN_146bc96d4(uVar7,uVar1);
  uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  if (iVar4 != iVar5) {
    plVar3 = (longlong *)param_1[1];
    uVar6 = FUN_146c08e54(*param_1,uVar2,uVar1);
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar9 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar3[8];
      }
      iVar4 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar3[9] - 1U & uVar6) * 4);
      if (iVar4 != -1) {
        do {
          bVar10 = *(uint *)(*plVar3 + (longlong)iVar4 * 0xc) == uVar6;
          uVar8 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar10);
          if (bVar10) break;
          iVar4 = *(int *)(*plVar3 + (longlong)iVar4 * 0xc + 4);
        } while (iVar4 != -1);
        goto LAB_144369f38;
      }
    }
    uVar8 = 0;
  }
LAB_144369f38:
  return uVar8 & 0xffffffff;
}



// FUNCTION 144369fce FUN_144369fce body=29 status=ok
// SIG undefined FUN_144369fce(void)

undefined8 FUN_144369fce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144369fec FUN_144369fec body=72 status=ok
// SIG undefined FUN_144369fec(void)

void FUN_144369fec(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436a036 FUN_14436a036 body=633 status=ok
// SIG undefined FUN_14436a036(void)

void FUN_14436a036(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_1f8 [40];
  longlong local_1d0 [2];
  undefined8 local_1c0;
  code *local_1b8;
  longlong **local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 local_160;
  longlong *local_150 [21];
  longlong local_a8;
  ulonglong uStack_a0;
  undefined1 local_98 [16];
  longlong local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_150[0] = &local_a8;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0x80;
  uStack_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_1b0 = local_150;
  local_1b8 = FUN_14436a2b0;
  FUN_148385b4a(*(undefined8 *)*param_1,param_2,&local_1b8,0);
  FUN_146c2c368(local_150,param_2);
  if (*(char *)param_1[1] == '\x01') {
    FUN_146c2c4e8(local_150);
    local_188 = 0;
    local_180 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_17c = 0xffffffff00000080;
    local_174 = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_145c3f772(&local_1a8,&local_a8);
    FUN_148f76300(local_150,&local_1a8,1);
  }
  local_1c0 = param_2;
  FUN_140619b9c(&local_a8,local_1d0);
  FUN_146bc7c58(&local_1c0,local_1d0,0);
  if (local_1d0[0] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)param_1[1] == '\x01') {
    FUN_146c2caf6(local_150,local_1d0);
    plVar1 = (longlong *)param_1[2];
    if (plVar1 != local_1d0) {
      lVar2 = *plVar1;
      *plVar1 = local_1d0[0];
      local_1d0[0] = 0;
      if (lVar2 == 0) goto LAB_14436a1ca;
      FUN_146c2a142(lVar2);
      FUN_1400020a8(lVar2);
    }
    lVar2 = local_1d0[0];
    if (local_1d0[0] != 0) {
      FUN_146c2a142(local_1d0[0]);
      FUN_1400020a8(lVar2);
    }
  }
LAB_14436a1ca:
  FUN_146c2c40e(local_150);
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  uVar3 = uStack_a0 >> 0x20;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    FUN_1447a08a2(&local_a8,0);
  }
  uStack_78 = 0xffffffff;
  local_74 = 0;
  local_80 = 0;
  if (0x80 < local_7c) {
    local_7c = 0x80;
    FUN_1446efbd8(local_98,0);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436a2b0 FUN_14436a2b0 body=72 status=ok
// SIG undefined FUN_14436a2b0(void)

void FUN_14436a2b0(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436a302 FUN_14436a302 body=26 status=ok
// SIG undefined FUN_14436a302(void)

byte FUN_14436a302(undefined8 *param_1,ulonglong *param_2)

{
  byte bVar1;
  
  bVar1 = FUN_1483836dc(*param_1,*param_2 << 0x20 | *param_2 >> 0x20);
  return bVar1 ^ 1;
}



// FUNCTION 14436a328 FUN_14436a328 body=3500 status=ok
// SIG undefined FUN_14436a328(void)

void FUN_14436a328(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined ***pppuVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined **ppuVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  int iVar24;
  longlong lVar25;
  undefined1 auStack_588 [36];
  int local_564;
  undefined8 *local_560;
  ulonglong local_558;
  uint local_54c;
  longlong *local_548;
  ulonglong local_540;
  ulonglong local_538;
  ulonglong local_530;
  undefined1 local_528 [64];
  longlong local_4e8;
  undefined8 uStack_4e0;
  longlong local_4d8;
  undefined8 uStack_4d0;
  void *local_4c8;
  int local_4c0;
  undefined4 local_4bc;
  longlong local_4b8;
  code *local_4b0;
  longlong **local_4a8;
  undefined1 local_499;
  undefined **local_498;
  undefined1 *puStack_490;
  undefined8 uStack_488;
  longlong local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined8 local_46c;
  undefined4 local_464;
  undefined8 local_458;
  undefined4 local_450;
  undefined8 local_438;
  undefined **local_428;
  undefined8 local_420;
  int local_418;
  char local_410;
  longlong local_408;
  longlong *local_3f8;
  longlong local_3e8 [24];
  code *local_328;
  ulonglong uStack_320;
  undefined *local_318 [2];
  undefined **local_308;
  uint local_300;
  uint uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  longlong local_2e8;
  undefined4 local_2e0;
  longlong *local_2d8 [12];
  longlong local_278;
  undefined8 local_258;
  longlong local_250;
  longlong local_248;
  int local_240;
  undefined8 local_218;
  int local_210 [44];
  undefined1 local_160 [168];
  longlong local_b8;
  ulonglong uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  int local_90;
  uint local_8c;
  undefined4 uStack_88;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_588;
  local_2d8[0] = &local_b8;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0x80;
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_4a8 = local_2d8;
  local_4b0 = FUN_14436b0d6;
  FUN_148385b4a(*(undefined8 *)*param_1,param_2,&local_4b0,0);
  if ((int)uStack_b0 == local_84) {
    uVar15 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
    uVar18 = 0;
    if ((uVar15 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
      uVar5 = 1;
      uVar17 = 1;
      if (1 < (int)uVar15) {
        uVar17 = uVar15;
      }
      do {
        uVar9 = uVar5;
        uVar18 = uVar17;
        if (uVar17 == uVar9) break;
        uVar5 = uVar9 + 1;
        uVar18 = uVar9;
      } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar9 >> 9] +
                                           (ulonglong)(uVar9 & 0x1ff) * 2) - 1U));
    }
    if (uVar18 != uVar15) {
      do {
        local_2d8[0] = (longlong *)CONCAT44(local_2d8[0]._4_4_,uVar18);
        FUN_1447cbafe(&local_b8,&local_428,local_2d8,0);
        uVar5 = uVar18 + 1;
        if ((int)(uVar18 + 1) < (int)uVar15) {
          uVar5 = uVar15;
        }
        do {
          uVar17 = uVar5;
          if (uVar5 - 1 == uVar18) break;
          uVar18 = uVar18 + 1;
          uVar17 = uVar18;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(param_2 + 0x148) +
                                               (ulonglong)(uVar18 >> 9) * 8) +
                                             (ulonglong)(uVar18 & 0x1ff) * 2) - 1U));
        uVar18 = uVar17;
      } while (uVar18 != uVar15);
    }
  }
  FUN_146c2c368(local_160,param_2);
  FUN_1482aa55c(local_2d8,param_2,1);
  if (*(char *)param_1[1] == '\x01') {
    FUN_146c2c4e8(local_160);
  }
  iVar24 = local_90;
  if ((int)uStack_b0 - local_84 == *(int *)(param_2 + 0x170)) {
    if (*(char *)param_1[1] == '\x01') {
      local_478 = 0;
      local_470 = 0;
      local_498 = (undefined **)0x0;
      puStack_490 = (undefined1 *)0x0;
      local_46c = 0xffffffff00000080;
      local_464 = 0;
      local_458 = 0;
      local_450 = 0;
      FUN_145c3f772(&local_498,&local_b8);
      FUN_148f76300(local_160,&local_498,1);
    }
    local_318[0] = (undefined *)0x0;
    local_308 = &PTR_LAB_14aee5540;
    local_300 = 0x48266949;
    uStack_2fc = 1;
    local_328 = FUN_148483c38;
    FUN_1485ead66(&local_428,param_2,local_2d8);
    FUN_148326618(&local_428);
    local_428 = &PTR_FUN_14afa41b0;
    if (local_408 != 0) {
      if (local_3f8 == (longlong *)0x0) {
        local_3f8 = local_3e8;
      }
      (**(code **)(*local_3f8 + 0x10))();
    }
  }
  else {
    iVar16 = 0;
    local_308 = (undefined **)0x0;
    local_300 = 0;
    local_328 = (code *)0x0;
    uStack_320 = 0;
    uStack_2fc = 0x80;
    local_2f8 = 0xffffffff;
    uStack_2f4 = 0;
    local_2e8 = 0;
    local_2e0 = 0;
    uVar13 = 1;
    uVar19 = 0;
    iVar6 = 0;
    local_560 = param_1;
    if (local_90 != 0) {
      puVar7 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar7 = local_a8;
      }
      uVar18 = *puVar7;
      if (uVar18 == 0) {
        iVar6 = local_90 + 0x1e;
        if (-1 < local_90 + -1) {
          iVar6 = local_90 + -1;
        }
        uVar19 = 0;
        uVar13 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar13 = 0;
        }
        iVar16 = 0;
        do {
          if (uVar13 == uVar19) goto LAB_14436ae8b;
          iVar16 = iVar16 + 0x20;
          uVar18 = puVar7[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar18 == 0);
      }
      else {
        iVar16 = 0;
        uVar19 = 0;
      }
      uVar13 = (ulonglong)(-uVar18 & uVar18);
      uVar22 = uVar13 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar6 = (iVar16 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (local_90 <= iVar6) {
        iVar6 = local_90;
      }
    }
    if (iVar6 != local_90) {
      uVar18 = 0xffffffff;
      local_548 = *(longlong **)(param_2 + 0x208);
      do {
        uVar15 = *(uint *)(local_b8 + (longlong)iVar6 * 0xc);
        if (local_250 == 0) {
          iVar6 = FUN_146bc96d4(local_258);
        }
        else {
          iVar6 = *(int *)(*(longlong *)
                            (*(longlong *)(local_250 + 0x20) + (ulonglong)(uVar15 >> 9) * 8) +
                          (ulonglong)(uVar15 & 0x1ff) * 4);
        }
        if (iVar6 < 1) {
          iVar6 = 0;
        }
        local_428 = (undefined **)CONCAT44(local_428._4_4_,iVar6);
        FUN_144984904(&local_328,&local_498,&local_428,0);
        uVar18 = uVar18 & ~(uint)uVar13;
        puVar7 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar7 = local_a8;
        }
        iVar6 = (int)uVar19;
        lVar20 = (longlong)iVar6;
        uVar15 = puVar7[lVar20] & uVar18;
        if (uVar15 == 0) {
          iVar10 = local_90 + 0x1e;
          if (-1 < local_90 + -1) {
            iVar10 = local_90 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar6) {
            iVar11 = iVar6;
          }
          if (iVar6 < iVar10) {
            lVar21 = 0;
            do {
              uVar15 = puVar7[lVar20 + lVar21 + 1];
              if (uVar15 != 0) {
                uVar19 = (ulonglong)(iVar6 + (int)lVar21 + 1);
                uVar18 = 0xffffffff;
                goto LAB_14436a7b2;
              }
              iVar16 = iVar16 + 0x20;
              lVar21 = lVar21 + 1;
            } while (iVar11 - lVar20 != lVar21);
            uVar18 = 0xffffffff;
            iVar6 = iVar11;
          }
          uVar19 = (ulonglong)(iVar6 + 1);
          iVar6 = local_90;
        }
        else {
LAB_14436a7b2:
          uVar13 = (ulonglong)(-uVar15 & uVar15);
          uVar22 = uVar13 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar6 = (iVar16 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (local_90 <= iVar6) {
            iVar6 = local_90;
          }
        }
      } while (iVar6 != iVar24);
      local_558 = (ulonglong)local_300;
      param_1 = local_560;
      local_4b8 = param_2;
      if (local_300 != 0) {
        ppuVar8 = local_308;
        if (local_308 == (undefined **)0x0) {
          ppuVar8 = local_318;
        }
        uVar18 = *(uint *)ppuVar8;
        if (uVar18 == 0) {
          iVar24 = local_300 + 0x1e;
          if (-1 < (int)(local_300 - 1)) {
            iVar24 = local_300 - 1;
          }
          uVar13 = 0;
          uVar19 = (ulonglong)(uint)(iVar24 >> 5);
          if (iVar24 >> 5 < 1) {
            uVar19 = uVar13;
          }
          iVar24 = 0;
          do {
            if (uVar19 == uVar13) goto LAB_14436ae8b;
            iVar24 = iVar24 + 0x20;
            uVar18 = *(uint *)((longlong)ppuVar8 + (uVar13 + 1) * 4);
            uVar13 = uVar13 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar13 = 0;
          iVar24 = 0;
        }
        uVar22 = (ulonglong)(-uVar18 & uVar18);
        uVar19 = uVar22 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar18 = (iVar24 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)uVar18 < (int)local_300) {
          uVar15 = 0xffffffff;
          do {
            local_538 = (ulonglong)*(int *)(local_328 + (longlong)(int)uVar18 * 0xc);
            if ((longlong)local_538 < 0) {
LAB_14436a8e0:
              lVar20 = 0;
            }
            else {
              lVar20 = 0;
              if (*(int *)(local_328 + (longlong)(int)uVar18 * 0xc) < local_240) {
                lVar20 = (longlong)*(int *)(local_248 + local_538 * 4);
                if (lVar20 == -1) goto LAB_14436a8e0;
                lVar20 = lVar20 * 0x38 + local_278;
              }
            }
            puVar12 = (undefined8 *)(lVar20 + 8);
            if (lVar20 == 0) {
              puVar12 = &local_218;
            }
            local_4c8 = (void *)0x0;
            piVar14 = (int *)(lVar20 + 0x10);
            if (lVar20 == 0) {
              piVar14 = local_210;
            }
            local_4c0 = *piVar14;
            lVar20 = (longlong)local_4c0;
            pvVar2 = (void *)*puVar12;
            local_564 = iVar24;
            local_540 = uVar22;
            local_530 = uVar13;
            if (lVar20 == 0) {
              local_4bc = 0;
            }
            else {
              FUN_144a06ca8(&local_4c8,local_4c0,0);
              memcpy(local_4c8,pvVar2,lVar20 << 2);
              pvVar2 = local_4c8;
              lVar20 = (longlong)local_4c0;
              if (lVar20 != 0) {
                lVar21 = 0;
                local_54c = uVar15;
                do {
                  FUN_146c2c9fe(local_160,*(undefined4 *)((longlong)pvVar2 + lVar21),1);
                  lVar21 = lVar21 + 4;
                  param_1 = local_560;
                  uVar15 = local_54c;
                } while (lVar20 * 4 != lVar21);
              }
              if (local_4c8 != (void *)0x0) {
                FUN_1400020a8(local_4c8);
              }
            }
            FUN_146c6a7a4(&local_428,param_2,puVar12,1);
            plVar4 = local_548;
            if (((local_410 == '\0') && (local_418 == 1)) && (1 < *piVar14)) {
              local_4d8 = 0;
              uStack_4d0 = 0;
              if ((local_548 != (longlong *)0x0) &&
                 (iVar24 = (**(code **)(*local_548 + 0xa0))(local_548), 0 < iVar24)) {
                lVar20 = 0;
                do {
                  uVar13 = uStack_4d0;
                  lVar21 = (longlong)(int)uStack_4d0;
                  uVar18 = (int)uStack_4d0 + 1;
                  uStack_4d0 = CONCAT44(uStack_4d0._4_4_,uVar18);
                  if (uStack_4d0._4_4_ < uVar18) {
                    FUN_148307d2a(&local_4d8,uVar13 & 0xffffffff);
                  }
                  lVar21 = lVar21 * 0x50;
                  puVar1 = (undefined8 *)(local_4d8 + 0x20 + lVar21);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (undefined8 *)(local_4d8 + 0x30 + lVar21);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (undefined8 *)(local_4d8 + 0x40 + lVar21);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (undefined8 *)(local_4d8 + 0x10 + lVar21);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  *(undefined8 *)(local_4d8 + lVar21) = 0;
                  ((undefined8 *)(local_4d8 + lVar21))[1] = 0;
                  *(undefined4 *)(local_4d8 + 0x2c + lVar21) = 0x80;
                  *(undefined4 *)(local_4d8 + 0x30 + lVar21) = 0xffffffff;
                  if (lVar20 < (int)plVar4[5]) {
                    uVar23 = *(undefined8 *)(plVar4[4] + lVar20 * 8);
                  }
                  else {
                    uVar23 = 0;
                  }
                  FUN_146c6c2c0(&local_428,local_420,uVar23,
                                (longlong)((int)uStack_4d0 + -1) * 0x50 + local_4d8);
                  lVar20 = lVar20 + 1;
                  iVar24 = (**(code **)(*plVar4 + 0xa0))(plVar4);
                } while (lVar20 < iVar24);
              }
              local_4e8 = 0;
              uStack_4e0 = 0;
              FUN_146c36aac(param_2,puVar12,&local_4e8);
              uVar13 = local_538;
              if ((int)local_538 < 0) {
LAB_14436ac26:
                lVar20 = 0;
              }
              else {
                lVar20 = 0;
                if ((int)local_538 < local_240) {
                  lVar20 = (longlong)*(int *)(local_248 + local_538 * 4);
                  if (lVar20 == -1) goto LAB_14436ac26;
                  lVar20 = lVar20 * 0x38 + local_278;
                }
              }
              puVar12 = (undefined8 *)(lVar20 + 8);
              if (lVar20 == 0) {
                puVar12 = &local_218;
              }
              puStack_490 = &local_499;
              local_498 = (undefined **)&DAT_142971dd8;
              FUN_146bc6232(&local_4b8,puVar12,0,&local_498);
              FUN_146c5d67a(local_420);
              FUN_146c7f310(local_528,local_420);
              puStack_490 = (undefined1 *)0x0;
              uStack_488 = 0;
              local_498 = &PTR_FUN_14ae72d10;
              local_480 = param_2;
              FUN_146c7f310(&local_478,local_528);
              local_438 = 0xffffffff00000000;
              FUN_146bc7c1a(local_528);
              local_438 = CONCAT44(local_438._4_4_,1);
              FUN_148314c5e(&local_498,uVar13 & 0xffffffff);
              lVar20 = local_4e8;
              lVar21 = (longlong)(int)uStack_4e0;
              if (lVar21 != 0) {
                lVar25 = 0;
                do {
                  uVar18 = *(uint *)(lVar20 + lVar25);
                  if ((((int)uVar18 < 0) ||
                      (*(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24) <= (int)uVar18))
                     || (0xfffc < (ushort)(*(short *)(*(longlong *)
                                                       (*(longlong *)(param_2 + 0x28) +
                                                       (ulonglong)(uVar18 >> 9) * 8) +
                                                     (ulonglong)(uVar18 & 0x1ff) * 2) - 2U))) {
                    FUN_146c0b0ee(param_2,uVar18,0);
                  }
                  lVar25 = lVar25 + 4;
                } while (lVar21 * 4 != lVar25);
              }
              plVar4 = local_548;
              if (local_548 != (longlong *)0x0) {
                iVar24 = (**(code **)(*local_548 + 0xa0))(local_548);
                if (0 < iVar24) {
                  lVar21 = 0;
                  lVar20 = 0;
                  do {
                    if (lVar20 < (int)plVar4[5]) {
                      uVar23 = *(undefined8 *)(plVar4[4] + lVar20 * 8);
                    }
                    else {
                      uVar23 = 0;
                    }
                    FUN_146c6c4c0(&local_428,local_4d8 + lVar21,uVar23);
                    lVar20 = lVar20 + 1;
                    iVar24 = (**(code **)(*plVar4 + 0xa0))(plVar4);
                    lVar21 = lVar21 + 0x50;
                  } while (lVar20 < iVar24);
                }
                FUN_14832ecfe(&local_498,&local_4d8);
              }
              local_498 = &PTR_FUN_14ae72d10;
              FUN_146bc7c1a(&local_478);
              local_498 = &PTR_LAB_14ae72d28;
              if (puStack_490 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              if (local_4e8 != 0) {
                FUN_1400020a8();
              }
              FUN_148307c36(local_4d8,uStack_4d0 & 0xffffffff);
              if (local_4d8 != 0) {
                FUN_1400020a8();
              }
            }
            FUN_146bc7b3e(&local_428);
            uVar15 = uVar15 & ~(uint)local_540;
            ppuVar8 = local_308;
            if (local_308 == (undefined **)0x0) {
              ppuVar8 = local_318;
            }
            iVar6 = (int)local_530;
            lVar20 = (longlong)iVar6;
            uVar18 = *(uint *)((longlong)ppuVar8 + lVar20 * 4) & uVar15;
            uVar13 = local_530;
            iVar24 = local_564;
            if (uVar18 == 0) {
              iVar16 = local_300 + 0x1e;
              if (-1 < (int)(local_300 - 1)) {
                iVar16 = local_300 - 1;
              }
              iVar16 = iVar16 >> 5;
              iVar24 = local_564 + 0x20;
              iVar10 = iVar16;
              if (iVar16 < iVar6) {
                iVar10 = iVar6;
              }
              if (iVar6 < iVar16) {
                lVar21 = 0;
                do {
                  uVar18 = *(uint *)((longlong)ppuVar8 + (lVar20 + lVar21 + 1) * 4);
                  if (uVar18 != 0) {
                    uVar15 = 0xffffffff;
                    uVar13 = (ulonglong)(iVar6 + (int)lVar21 + 1);
                    goto LAB_14436aaa4;
                  }
                  iVar24 = iVar24 + 0x20;
                  lVar21 = lVar21 + 1;
                } while (iVar10 - lVar20 != lVar21);
                uVar15 = 0xffffffff;
                iVar6 = iVar10;
              }
              uVar13 = (ulonglong)(iVar6 + 1);
              uVar22 = local_540;
              param_1 = local_560;
              uVar18 = local_300;
            }
            else {
LAB_14436aaa4:
              uVar22 = (ulonglong)(-uVar18 & uVar18);
              uVar19 = uVar22 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              uVar18 = (iVar24 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if ((int)local_300 <= (int)uVar18) {
                uVar18 = local_300;
              }
            }
          } while (uVar18 != (uint)local_558);
        }
      }
    }
LAB_14436ae8b:
    local_2e0 = 0;
    if (local_2e8 != 0) {
      FUN_1400020a8();
    }
    uVar13 = uStack_320 >> 0x20;
    uStack_320 = uStack_320 & 0xffffffff00000000;
    if ((int)uVar13 != 0) {
      FUN_1447a08a2(&local_328,0);
    }
    local_2f8 = 0xffffffff;
    uStack_2f4 = 0;
    local_300 = 0;
    if (0x80 < uStack_2fc) {
      uStack_2fc = 0x80;
      FUN_1446efbd8(local_318,0);
    }
    if (local_308 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (local_328 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)param_1[1] == '\x01') {
    FUN_146c2caf6(local_160,&local_428);
    pppuVar3 = (undefined ***)param_1[2];
    if (pppuVar3 != &local_428) {
      ppuVar8 = *pppuVar3;
      *pppuVar3 = local_428;
      local_428 = (undefined **)0x0;
      if (ppuVar8 == (undefined **)0x0) goto LAB_14436af8d;
      FUN_146c2a142(ppuVar8);
      FUN_1400020a8(ppuVar8);
    }
    ppuVar8 = local_428;
    if (local_428 != (undefined **)0x0) {
      FUN_146c2a142(local_428);
      FUN_1400020a8(ppuVar8);
    }
  }
LAB_14436af8d:
  FUN_145aba0b4(local_2d8);
  FUN_146c2c40e(local_160);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar13 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar13 != 0) {
    FUN_1447a08a2(&local_b8,0);
  }
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_588) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14436b0d6 FUN_14436b0d6 body=72 status=ok
// SIG undefined FUN_14436b0d6(void)

void FUN_14436b0d6(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436b120 FUN_14436b120 body=33 status=ok
// SIG undefined FUN_14436b120(void)

void FUN_14436b120(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  (**(code **)(*plVar1 + 0x3e0))(plVar1);
  FUN_148f50790(plVar1);
  return;
}



// FUNCTION 14436b16c FUN_14436b16c body=29 status=ok
// SIG undefined FUN_14436b16c(void)

undefined8 FUN_14436b16c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436b1bc FUN_14436b1bc body=29 status=ok
// SIG undefined FUN_14436b1bc(void)

undefined8 FUN_14436b1bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436b20c FUN_14436b20c body=29 status=ok
// SIG undefined FUN_14436b20c(void)

undefined8 FUN_14436b20c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436b25c FUN_14436b25c body=29 status=ok
// SIG undefined FUN_14436b25c(void)

undefined8 FUN_14436b25c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436b27a FUN_14436b27a body=33 status=ok
// SIG undefined FUN_14436b27a(void)

void FUN_14436b27a(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  (**(code **)(*plVar1 + 0x3e0))(plVar1);
  FUN_148f50790(plVar1);
  return;
}



// FUNCTION 14436b2c6 FUN_14436b2c6 body=29 status=ok
// SIG undefined FUN_14436b2c6(void)

undefined8 FUN_14436b2c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436b316 FUN_14436b316 body=29 status=ok
// SIG undefined FUN_14436b316(void)

undefined8 FUN_14436b316(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436b366 FUN_14436b366 body=29 status=ok
// SIG undefined FUN_14436b366(void)

undefined8 FUN_14436b366(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436b3b6 FUN_14436b3b6 body=29 status=ok
// SIG undefined FUN_14436b3b6(void)

undefined8 FUN_14436b3b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436b3d4 FUN_14436b3d4 body=29 status=ok
// SIG undefined FUN_14436b3d4(void)

undefined8 FUN_14436b3d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436b406 FUN_14436b406 body=93 status=ok
// SIG undefined FUN_14436b406(void)

void FUN_14436b406(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba263d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba26360;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436b464 FUN_14436b464 body=93 status=ok
// SIG undefined FUN_14436b464(void)

void FUN_14436b464(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba263d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba26360;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436b4c2 FUN_14436b4c2 body=126 status=ok
// SIG undefined FUN_14436b4c2(void)

void FUN_14436b4c2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba263d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba26360;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014436b531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14436b558 FUN_14436b558 body=35 status=ok
// SIG undefined FUN_14436b558(void)

undefined8 FUN_14436b558(longlong param_1,longlong param_2)

{
  FUN_14054c6c4(*(longlong *)(param_1 + 0x18) + 0x148,param_2 + 200);
  return 1;
}



// FUNCTION 14436b57c FUN_14436b57c body=29 status=ok
// SIG undefined FUN_14436b57c(void)

undefined8 FUN_14436b57c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436b5ae FUN_14436b5ae body=93 status=ok
// SIG undefined FUN_14436b5ae(void)

void FUN_14436b5ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba26440;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436b60c FUN_14436b60c body=93 status=ok
// SIG undefined FUN_14436b60c(void)

void FUN_14436b60c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba26440;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436b66a FUN_14436b66a body=126 status=ok
// SIG undefined FUN_14436b66a(void)

void FUN_14436b66a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aefe820;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba26440;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014436b6d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14436b6e8 FUN_14436b6e8 body=46 status=ok
// SIG undefined FUN_14436b6e8(void)

void FUN_14436b6e8(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar2 = (longlong *)(**(code **)(*plVar1 + 0x2c8))(plVar1);
  (**(code **)(*plVar2 + 0x348))(plVar2);
  FUN_148f51356(plVar1);
  return;
}



// FUNCTION 14436b716 FUN_14436b716 body=49 status=ok
// SIG undefined FUN_14436b716(void)

undefined8 FUN_14436b716(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar2 = (longlong *)(**(code **)(*plVar1 + 0x2c8))(plVar1);
  (**(code **)(*plVar2 + 0x348))(plVar2);
  FUN_148f51356(plVar1);
  return 1;
}



// FUNCTION 14436b748 FUN_14436b748 body=29 status=ok
// SIG undefined FUN_14436b748(void)

undefined8 FUN_14436b748(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436b77a FUN_14436b77a body=93 status=ok
// SIG undefined FUN_14436b77a(void)

void FUN_14436b77a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba263d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba264d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436b7d8 FUN_14436b7d8 body=93 status=ok
// SIG undefined FUN_14436b7d8(void)

void FUN_14436b7d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba263d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba264d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436b836 FUN_14436b836 body=126 status=ok
// SIG undefined FUN_14436b836(void)

void FUN_14436b836(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba263d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba264d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014436b8a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14436b8b4 FUN_14436b8b4 body=66 status=ok
// SIG undefined FUN_14436b8b4(void)

void FUN_14436b8b4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14436b93e(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436b8f8 FUN_14436b8f8 body=68 status=ok
// SIG undefined FUN_14436b8f8(void)

undefined8 FUN_14436b8f8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14436b93e(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436b93e FUN_14436b93e body=236 status=ok
// SIG undefined FUN_14436b93e(void)

void FUN_14436b93e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_2;
  lVar2 = *param_1;
  FUN_14054c6c4(lVar2 + 0x140,lVar1 + 0x188);
  FUN_14054c6c4(lVar2 + 0x150,lVar1 + 0x198);
  local_90 = 1;
  local_98 = 1;
  FUN_146c005f0(lVar2 + 0x160,*(undefined8 *)(lVar1 + 0x180),1,1);
  FUN_14851bbe8(*(undefined8 *)(lVar2 + 0x110),lVar2 + 0x160,1,0xf);
  local_88 = *(undefined4 *)(lVar1 + 0x10);
  uStack_84 = *(undefined4 *)(lVar1 + 0x14);
  uStack_80 = *(undefined4 *)(lVar1 + 0x18);
  uStack_7c = *(undefined4 *)(lVar1 + 0x1c);
  local_78 = *(undefined4 *)(lVar1 + 0x20);
  uStack_74 = *(undefined4 *)(lVar1 + 0x24);
  uStack_70 = *(undefined4 *)(lVar1 + 0x28);
  uStack_6c = *(undefined4 *)(lVar1 + 0x2c);
  local_68 = *(undefined4 *)(lVar1 + 0x30);
  uStack_64 = *(undefined4 *)(lVar1 + 0x34);
  uStack_60 = *(undefined4 *)(lVar1 + 0x38);
  uStack_5c = *(undefined4 *)(lVar1 + 0x3c);
  local_58 = *(undefined8 *)(lVar1 + 0x40);
  local_48 = *(undefined8 *)(lVar1 + 0x48);
  uStack_40 = *(undefined8 *)(lVar1 + 0x50);
  local_38 = *(undefined8 *)(lVar1 + 0x58);
  uStack_50 = 0;
  uStack_30 = 0;
  FUN_14851b91a(*(undefined8 *)(lVar2 + 0x110));
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436ba2c FUN_14436ba2c body=29 status=ok
// SIG undefined FUN_14436ba2c(void)

undefined8 FUN_14436ba2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436ba5e FUN_14436ba5e body=93 status=ok
// SIG undefined FUN_14436ba5e(void)

void FUN_14436ba5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba26540;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436babc FUN_14436babc body=93 status=ok
// SIG undefined FUN_14436babc(void)

void FUN_14436babc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba26540;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436bb1a FUN_14436bb1a body=126 status=ok
// SIG undefined FUN_14436bb1a(void)

void FUN_14436bb1a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aefe820;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba26540;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014436bb89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14436bb98 FUN_14436bb98 body=46 status=ok
// SIG undefined FUN_14436bb98(void)

void FUN_14436bb98(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar2 = (longlong *)(**(code **)(*plVar1 + 0x2c8))(plVar1);
  (**(code **)(*plVar2 + 0x348))(plVar2);
  FUN_148f52b4e(plVar1);
  return;
}



// FUNCTION 14436bbc6 FUN_14436bbc6 body=49 status=ok
// SIG undefined FUN_14436bbc6(void)

undefined8 FUN_14436bbc6(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar2 = (longlong *)(**(code **)(*plVar1 + 0x2c8))(plVar1);
  (**(code **)(*plVar2 + 0x348))(plVar2);
  FUN_148f52b4e(plVar1);
  return 1;
}



// FUNCTION 14436bbf7 FUN_14436bbf7 body=592 status=ok
// SIG undefined FUN_14436bbf7(void)

longlong * FUN_14436bbf7(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14ba265d0;
  uStack_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  local_78 = FUN_148f77ca2;
  FUN_14170b918(&local_98,param_3);
  plVar9 = plStack_90;
  lVar3 = local_98;
  local_88 = 1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar7 = FUN_14118da1c();
        bVar5 = FUN_14054d46e(uVar7,L"nothreading");
        DAT_14c83f0f8 = bVar5 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    pcVar4 = local_78;
    if (DAT_14c83f0f8 != 1) {
      pppuVar8 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar8 = &local_58;
      }
      uVar7 = (*(code *)(*pppuVar8)[1])();
      (*pcVar4)(uVar7);
      *(undefined4 *)(local_98 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_14436bd69;
    }
  }
  plVar2 = DAT_14c8442c0;
  puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar6[1] = 0;
  *puVar6 = TAsyncQueuedWork<void>::vftable;
  puVar6[2] = local_78;
  puVar6[4] = local_68;
  local_68 = (undefined ***)0x0;
  *(undefined4 *)(puVar6 + 8) = uStack_48;
  *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_44;
  *(undefined4 *)(puVar6 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_3c;
  puVar6[6] = local_58;
  puVar6[7] = CONCAT44(uStack_4c,uStack_50);
  if (local_78 != (code *)0x0) {
    local_78 = (code *)0x0;
  }
  puVar6[10] = local_98;
  puVar6[0xb] = plStack_90;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar6,3);
LAB_14436bd69:
  plVar2 = plStack_90;
  *param_1 = lVar3;
  param_1[1] = (longlong)plVar9;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_90 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    pppuVar8 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar8 = local_68;
    }
    (*(code *)(*pppuVar8)[2])(pppuVar8);
  }
  if (*param_3 != 0) {
    plVar9 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436be48 FUN_14436be48 body=592 status=ok
// SIG undefined FUN_14436be48(void)

longlong * FUN_14436be48(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14ba265f0;
  uStack_50 = *param_2;
  uStack_4c = param_2[1];
  uStack_48 = param_2[2];
  uStack_44 = param_2[3];
  local_78 = FUN_148f77cee;
  FUN_14170b918(&local_98,param_3);
  plVar9 = plStack_90;
  lVar3 = local_98;
  local_88 = 1;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar7 = FUN_14118da1c();
        bVar5 = FUN_14054d46e(uVar7,L"nothreading");
        DAT_14c83f0f8 = bVar5 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    pcVar4 = local_78;
    if (DAT_14c83f0f8 != 1) {
      pppuVar8 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar8 = &local_58;
      }
      uVar7 = (*(code *)(*pppuVar8)[1])();
      (*pcVar4)(uVar7);
      *(undefined4 *)(local_98 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_14436bfba;
    }
  }
  plVar2 = DAT_14c8442c0;
  puVar6 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar6[1] = 0;
  *puVar6 = TAsyncQueuedWork<void>::vftable;
  puVar6[2] = local_78;
  puVar6[4] = local_68;
  local_68 = (undefined ***)0x0;
  *(undefined4 *)(puVar6 + 8) = uStack_48;
  *(undefined4 *)((longlong)puVar6 + 0x44) = uStack_44;
  *(undefined4 *)(puVar6 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar6 + 0x4c) = uStack_3c;
  puVar6[6] = local_58;
  puVar6[7] = CONCAT44(uStack_4c,uStack_50);
  if (local_78 != (code *)0x0) {
    local_78 = (code *)0x0;
  }
  puVar6[10] = local_98;
  puVar6[0xb] = plStack_90;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined1 *)(puVar6 + 0xc) = 0;
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar6,3);
LAB_14436bfba:
  plVar2 = plStack_90;
  *param_1 = lVar3;
  param_1[1] = (longlong)plVar9;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_90 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    pppuVar8 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar8 = local_68;
    }
    (*(code *)(*pppuVar8)[2])(pppuVar8);
  }
  if (*param_3 != 0) {
    plVar9 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar9 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436c0d2 FUN_14436c0d2 body=29 status=ok
// SIG undefined FUN_14436c0d2(void)

undefined8 FUN_14436c0d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436c128 FUN_14436c128 body=29 status=ok
// SIG undefined FUN_14436c128(void)

undefined8 FUN_14436c128(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436c146 FUN_14436c146 body=163 status=ok
// SIG undefined FUN_14436c146(void)

void FUN_14436c146(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  (**(code **)(**(longlong **)(*param_1 + 0x170) + 0x2b8))();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436c214 FUN_14436c214 body=29 status=ok
// SIG undefined FUN_14436c214(void)

undefined8 FUN_14436c214(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436c232 FUN_14436c232 body=29 status=ok
// SIG undefined FUN_14436c232(void)

undefined8 FUN_14436c232(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436c264 FUN_14436c264 body=93 status=ok
// SIG undefined FUN_14436c264(void)

void FUN_14436c264(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba266f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436c2c2 FUN_14436c2c2 body=93 status=ok
// SIG undefined FUN_14436c2c2(void)

void FUN_14436c2c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba266f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436c320 FUN_14436c320 body=126 status=ok
// SIG undefined FUN_14436c320(void)

void FUN_14436c320(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba266f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014436c38f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14436c3a8 FUN_14436c3a8 body=20 status=ok
// SIG undefined FUN_14436c3a8(void)

undefined1 FUN_14436c3a8(longlong param_1)

{
  FUN_14436c3bc(param_1 + 0x18);
  return 1;
}



// FUNCTION 14436c3bc FUN_14436c3bc body=99 status=ok
// SIG undefined FUN_14436c3bc(void)

void FUN_14436c3bc(longlong *param_1)

{
  bool bVar1;
  
  param_1 = (longlong *)*param_1;
  if (param_1[0x31] != 0) {
    FUN_1485051e4();
  }
  bVar1 = *(int *)(param_1[0x2c] + 0xc0) == 0;
  if ((bool)*(char *)(param_1[0x2f] + 0x151) == bVar1) {
    return;
  }
  *(bool *)(param_1[0x2f] + 0x151) = bVar1;
                    /* WARNING: Could not recover jumptable at 0x00014436c415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x2f]);
  return;
}



// FUNCTION 14436c420 FUN_14436c420 body=29 status=ok
// SIG undefined FUN_14436c420(void)

undefined8 FUN_14436c420(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436c452 FUN_14436c452 body=93 status=ok
// SIG undefined FUN_14436c452(void)

void FUN_14436c452(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba26760;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436c4b0 FUN_14436c4b0 body=93 status=ok
// SIG undefined FUN_14436c4b0(void)

void FUN_14436c4b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba26760;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436c50e FUN_14436c50e body=126 status=ok
// SIG undefined FUN_14436c50e(void)

void FUN_14436c50e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba26760;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014436c57d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14436c596 FUN_14436c596 body=20 status=ok
// SIG undefined FUN_14436c596(void)

undefined1 FUN_14436c596(longlong param_1)

{
  FUN_14436c5aa(param_1 + 0x18);
  return 1;
}



// FUNCTION 14436c5aa FUN_14436c5aa body=120 status=ok
// SIG undefined FUN_14436c5aa(void)

void FUN_14436c5aa(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  param_1 = (longlong *)*param_1;
  if (*(char *)(param_1[0x2c] + 0x119) == '\x01') {
    puVar2 = &DAT_14cbf3720;
    if (param_1[0x31] != 0) {
      FUN_143b846cc();
      param_1[0x31] = 0;
    }
  }
  else {
    FUN_148f551f4(param_1);
    puVar2 = &DAT_14cbf3730;
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014436c60e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x340))(plVar1,puVar2,2,*(code **)(*plVar1 + 0x340));
  return;
}



// FUNCTION 14436c64e FUN_14436c64e body=29 status=ok
// SIG undefined FUN_14436c64e(void)

undefined8 FUN_14436c64e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436c66c FUN_14436c66c body=29 status=ok
// SIG undefined FUN_14436c66c(void)

undefined8 FUN_14436c66c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436c69e FUN_14436c69e body=93 status=ok
// SIG undefined FUN_14436c69e(void)

void FUN_14436c69e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba267f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436c6fc FUN_14436c6fc body=93 status=ok
// SIG undefined FUN_14436c6fc(void)

void FUN_14436c6fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba267f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436c75a FUN_14436c75a body=126 status=ok
// SIG undefined FUN_14436c75a(void)

void FUN_14436c75a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba267f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014436c7c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14436c7e2 FUN_14436c7e2 body=20 status=ok
// SIG undefined FUN_14436c7e2(void)

undefined1 FUN_14436c7e2(longlong param_1)

{
  FUN_14436c7f6(param_1 + 0x18);
  return 1;
}



// FUNCTION 14436c7f6 FUN_14436c7f6 body=358 status=ok
// SIG undefined FUN_14436c7f6(void)

void FUN_14436c7f6(longlong *param_1)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = (longlong *)*param_1;
  lVar1 = param_1[0x2d];
  lVar2 = param_1[0x2f];
  uVar14 = *(undefined8 *)(lVar1 + 0x78);
  uVar15 = *(undefined8 *)(lVar1 + 0x80);
  *(undefined8 *)(lVar2 + 0x130) = *(undefined8 *)(lVar1 + 0x88);
  *(undefined8 *)(lVar2 + 0x120) = uVar14;
  *(undefined8 *)(lVar2 + 0x128) = uVar15;
  lVar1 = param_1[0x2d];
  local_58 = *(undefined8 *)(lVar1 + 0x90);
  local_50 = *(undefined8 *)(lVar1 + 0x98);
  local_48 = *(undefined8 *)(lVar1 + 0xa0);
  local_40 = *(undefined8 *)(lVar1 + 0xa8);
  FUN_1448052ee(&local_58,&local_30);
  lVar1 = param_1[0x2f];
  *(undefined8 *)(lVar1 + 0x148) = local_20;
  *(undefined4 *)(lVar1 + 0x138) = local_30;
  *(undefined4 *)(lVar1 + 0x13c) = uStack_2c;
  *(undefined4 *)(lVar1 + 0x140) = uStack_28;
  *(undefined4 *)(lVar1 + 0x144) = uStack_24;
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x2f]);
  lVar1 = param_1[0x2c];
  if (lVar1 != 0) {
    lVar2 = param_1[0x2d];
    *(undefined8 *)(lVar1 + 0x570) = *(undefined8 *)(lVar2 + 0xa8);
    uVar3 = *(undefined4 *)(lVar2 + 0x78);
    uVar4 = *(undefined4 *)(lVar2 + 0x7c);
    uVar5 = *(undefined4 *)(lVar2 + 0x80);
    uVar6 = *(undefined4 *)(lVar2 + 0x84);
    uVar7 = *(undefined4 *)(lVar2 + 0x88);
    uVar8 = *(undefined4 *)(lVar2 + 0x8c);
    uVar9 = *(undefined4 *)(lVar2 + 0x90);
    uVar10 = *(undefined4 *)(lVar2 + 0x94);
    uVar11 = *(undefined4 *)(lVar2 + 0x9c);
    uVar12 = *(undefined4 *)(lVar2 + 0xa0);
    uVar13 = *(undefined4 *)(lVar2 + 0xa4);
    *(undefined4 *)(lVar1 + 0x560) = *(undefined4 *)(lVar2 + 0x98);
    *(undefined4 *)(lVar1 + 0x564) = uVar11;
    *(undefined4 *)(lVar1 + 0x568) = uVar12;
    *(undefined4 *)(lVar1 + 0x56c) = uVar13;
    *(undefined4 *)(lVar1 + 0x550) = uVar7;
    *(undefined4 *)(lVar1 + 0x554) = uVar8;
    *(undefined4 *)(lVar1 + 0x558) = uVar9;
    *(undefined4 *)(lVar1 + 0x55c) = uVar10;
    *(undefined4 *)(lVar1 + 0x540) = uVar3;
    *(undefined4 *)(lVar1 + 0x544) = uVar4;
    *(undefined4 *)(lVar1 + 0x548) = uVar5;
    *(undefined4 *)(lVar1 + 0x54c) = uVar6;
    FUN_1484f4aac(lVar1);
    *(undefined8 *)(lVar1 + 0x318) = *(undefined8 *)(lVar1 + 0x570);
    *(undefined8 *)(lVar1 + 0x308) = *(undefined8 *)(lVar1 + 0x560);
    *(undefined8 *)(lVar1 + 0x310) = *(undefined8 *)(lVar1 + 0x568);
    *(undefined8 *)(lVar1 + 0x2f8) = *(undefined8 *)(lVar1 + 0x550);
    *(undefined8 *)(lVar1 + 0x300) = *(undefined8 *)(lVar1 + 0x558);
    *(undefined4 *)(lVar1 + 0x2e8) = *(undefined4 *)(lVar1 + 0x540);
    *(undefined4 *)(lVar1 + 0x2ec) = *(undefined4 *)(lVar1 + 0x544);
    *(undefined4 *)(lVar1 + 0x2f0) = *(undefined4 *)(lVar1 + 0x548);
    *(undefined4 *)(lVar1 + 0x2f4) = *(undefined4 *)(lVar1 + 0x54c);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_148f54c98(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436c95e FUN_14436c95e body=29 status=ok
// SIG undefined FUN_14436c95e(void)

undefined8 FUN_14436c95e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436c990 FUN_14436c990 body=93 status=ok
// SIG undefined FUN_14436c990(void)

void FUN_14436c990(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba26860;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436c9ee FUN_14436c9ee body=93 status=ok
// SIG undefined FUN_14436c9ee(void)

void FUN_14436c9ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba26860;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436ca4c FUN_14436ca4c body=126 status=ok
// SIG undefined FUN_14436ca4c(void)

void FUN_14436ca4c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aefe820;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba26860;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014436cabb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14436caca FUN_14436caca body=41 status=ok
// SIG undefined FUN_14436caca(void)

void FUN_14436caca(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar2 = FUN_1484d6172(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014436caf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x338))(plVar1,uVar2);
  return;
}



// FUNCTION 14436caf4 FUN_14436caf4 body=40 status=ok
// SIG undefined FUN_14436caf4(void)

undefined8 FUN_14436caf4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar2 = FUN_1484d6172(param_2);
  (**(code **)(*plVar1 + 0x338))(plVar1,uVar2);
  return 1;
}



// FUNCTION 14436cb1c FUN_14436cb1c body=163 status=ok
// SIG undefined FUN_14436cb1c(void)

void FUN_14436cb1c(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  (**(code **)(**(longlong **)(*param_1 + 0xa0) + 0x2b8))();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436cbea FUN_14436cbea body=29 status=ok
// SIG undefined FUN_14436cbea(void)

undefined8 FUN_14436cbea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436cc52 FUN_14436cc52 body=29 status=ok
// SIG undefined FUN_14436cc52(void)

undefined8 FUN_14436cc52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436ccb6 FUN_14436ccb6 body=29 status=ok
// SIG undefined FUN_14436ccb6(void)

undefined8 FUN_14436ccb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436ccd4 FUN_14436ccd4 body=29 status=ok
// SIG undefined FUN_14436ccd4(void)

undefined8 FUN_14436ccd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436cd06 FUN_14436cd06 body=93 status=ok
// SIG undefined FUN_14436cd06(void)

void FUN_14436cd06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba26930;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436cd64 FUN_14436cd64 body=93 status=ok
// SIG undefined FUN_14436cd64(void)

void FUN_14436cd64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba26930;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436cdc2 FUN_14436cdc2 body=126 status=ok
// SIG undefined FUN_14436cdc2(void)

void FUN_14436cdc2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba26930;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014436ce31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14436cf00 FUN_14436cf00 body=29 status=ok
// SIG undefined FUN_14436cf00(void)

undefined8 FUN_14436cf00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436cf5a FUN_14436cf5a body=29 status=ok
// SIG undefined FUN_14436cf5a(void)

undefined8 FUN_14436cf5a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436cf78 FUN_14436cf78 body=59 status=ok
// SIG undefined FUN_14436cf78(void)

double * FUN_14436cf78(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_2[3];
  dVar4 = param_2[2];
  *param_1 = dVar1 * *param_2 + dVar2 * param_2[1];
  param_1[1] = dVar4 * dVar1 + dVar3 * dVar2;
  return param_1;
}



// FUNCTION 14436cfb4 FUN_14436cfb4 body=70 status=ok
// SIG undefined FUN_14436cfb4(void)

undefined8 * FUN_14436cfb4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14ba26a30;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 14436cffa FUN_14436cffa body=5 status=ok
// SIG undefined FUN_14436cffa(void)

longlong FUN_14436cffa(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14436d000 FUN_14436d000 body=29 status=ok
// SIG undefined FUN_14436d000(void)

void FUN_14436d000(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14436d01e FUN_14436d01e body=29 status=ok
// SIG undefined FUN_14436d01e(void)

undefined8 FUN_14436d01e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436d03c FUN_14436d03c body=59 status=ok
// SIG undefined FUN_14436d03c(void)

double * FUN_14436d03c(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_2[3];
  dVar4 = param_2[2];
  *param_1 = dVar1 * *param_2 + dVar2 * param_2[1];
  param_1[1] = dVar4 * dVar1 + dVar3 * dVar2;
  return param_1;
}



// FUNCTION 14436d078 FUN_14436d078 body=70 status=ok
// SIG undefined FUN_14436d078(void)

undefined8 * FUN_14436d078(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14ba26a50;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 14436d0be FUN_14436d0be body=5 status=ok
// SIG undefined FUN_14436d0be(void)

longlong FUN_14436d0be(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14436d0c4 FUN_14436d0c4 body=29 status=ok
// SIG undefined FUN_14436d0c4(void)

void FUN_14436d0c4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14436d0e2 FUN_14436d0e2 body=29 status=ok
// SIG undefined FUN_14436d0e2(void)

undefined8 FUN_14436d0e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436d100 FUN_14436d100 body=51 status=ok
// SIG undefined FUN_14436d100(void)

undefined8 FUN_14436d100(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(*param_1 + 0x200) == '\0') {
    uVar1 = FUN_14855784a(*param_1,param_3,param_2,0,0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14436d14a FUN_14436d14a body=29 status=ok
// SIG undefined FUN_14436d14a(void)

undefined8 FUN_14436d14a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436d1a2 FUN_14436d1a2 body=29 status=ok
// SIG undefined FUN_14436d1a2(void)

undefined8 FUN_14436d1a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436d1c0 FUN_14436d1c0 body=147 status=ok
// SIG undefined FUN_14436d1c0(void)

void FUN_14436d1c0(undefined8 *param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *param_2;
  local_10 = (*(double *)(lVar1 + 8 + (longlong)*param_3 * 0x10) +
              *(double *)(lVar1 + 8 + (longlong)param_3[1] * 0x10) +
             *(double *)(lVar1 + 8 + (longlong)param_3[2] * 0x10)) * 0.3333333333333333;
  local_18 = (*(double *)(lVar1 + (longlong)*param_3 * 0x10) +
              *(double *)(lVar1 + (longlong)param_3[1] * 0x10) +
             *(double *)(lVar1 + (longlong)param_3[2] * 0x10)) * 0.3333333333333333;
  FUN_1485c1cec(*param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436d2c2 FUN_14436d2c2 body=29 status=ok
// SIG undefined FUN_14436d2c2(void)

undefined8 FUN_14436d2c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436d2e0 FUN_14436d2e0 body=225 status=ok
// SIG undefined FUN_14436d2e0(void)

undefined8 FUN_14436d2e0(longlong param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = *param_2;
  plVar2 = *(longlong **)(param_1 + 8);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x70);
    uVar1 = *(uint *)(lVar3 + 0x48 + (longlong)local_14 * 0x50);
    plVar6 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar2[8];
    }
    uVar7 = (int)plVar2[9] - 1;
    iVar5 = *(int *)((longlong)plVar6 + (ulonglong)(uVar7 & uVar1) * 4);
    if (iVar5 != -1) {
      lVar4 = *plVar2;
      do {
        if (*(uint *)(lVar4 + (longlong)iVar5 * 0xc) == uVar1) {
          uVar1 = *(uint *)(lVar3 + 0x4c + (longlong)local_14 * 0x50);
          iVar5 = *(int *)((longlong)plVar6 + (ulonglong)(uVar7 & uVar1) * 4);
          goto LAB_14436d370;
        }
        iVar5 = *(int *)(lVar4 + (longlong)iVar5 * 0xc + 4);
      } while (iVar5 != -1);
    }
  }
LAB_14436d3a3:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
LAB_14436d370:
  if (iVar5 == -1) goto LAB_14436d3a3;
  if (*(uint *)(lVar4 + (longlong)iVar5 * 0xc) == uVar1) {
    FUN_1447cbafe(*(undefined8 *)(param_1 + 0x10),local_18,&local_14,0);
    goto LAB_14436d3a3;
  }
  iVar5 = *(int *)(lVar4 + (longlong)iVar5 * 0xc + 4);
  goto LAB_14436d370;
}



// FUNCTION 14436d3c2 FUN_14436d3c2 body=44 status=ok
// SIG undefined FUN_14436d3c2(void)

void FUN_14436d3c2(undefined4 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  FUN_148f5ed22(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00014436d3eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3d0))(plVar1,*param_1);
  return;
}



// FUNCTION 14436d404 FUN_14436d404 body=29 status=ok
// SIG undefined FUN_14436d404(void)

undefined8 FUN_14436d404(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436d422 FUN_14436d422 body=204 status=ok
// SIG undefined FUN_14436d422(void)

void FUN_14436d422(int *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  param_2 = (longlong *)*param_2;
  uVar2 = CONCAT71((int7)((ulonglong)param_3 >> 8),(char)param_1[1]) ^ 1;
  (**(code **)(*param_2 + 0x328))(param_2,param_2[0x2a],uVar2);
  uVar3 = CONCAT71((int7)(uVar2 >> 8),(char)param_1[1]);
  (**(code **)(*param_2 + 0x328))(param_2,param_2[0x2c],uVar3);
  (**(code **)(*param_2 + 0x328))
            (param_2,param_2[0x2e],CONCAT71((int7)((ulonglong)uVar3 >> 8),(char)param_1[1]) ^ 1);
  (**(code **)(*param_2 + 0x328))(param_2,param_2[0x2f],0);
  lVar1 = *(longlong *)(param_2[0x54] + 0x78);
  *(undefined1 *)(lVar1 + 0xac) = 0;
  *(undefined4 *)(lVar1 + 0xa8) = 0;
  if (*param_1 == 1) {
    *(undefined1 *)(lVar1 + 0xa9) = 1;
  }
  else if (*param_1 == 2) {
    *(undefined1 *)(lVar1 + 0xa8) = 1;
  }
  else {
    *(undefined1 *)(lVar1 + 0xaa) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014436d4eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x328))(param_2,lVar1,0);
  return;
}



// FUNCTION 14436d504 FUN_14436d504 body=29 status=ok
// SIG undefined FUN_14436d504(void)

undefined8 FUN_14436d504(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436d57e FUN_14436d57e body=29 status=ok
// SIG undefined FUN_14436d57e(void)

undefined8 FUN_14436d57e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436d59c FUN_14436d59c body=51 status=ok
// SIG undefined FUN_14436d59c(void)

void FUN_14436d59c(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  dVar2 = cos(*(double *)(*(longlong *)(lVar1 + 0x178) + 0xb8) * 0.017453292519943295);
  *(double *)(lVar1 + 0x4e8) = dVar2;
  return;
}



// FUNCTION 14436d5fa FUN_14436d5fa body=29 status=ok
// SIG undefined FUN_14436d5fa(void)

undefined8 FUN_14436d5fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436d64a FUN_14436d64a body=29 status=ok
// SIG undefined FUN_14436d64a(void)

undefined8 FUN_14436d64a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436d6ce FUN_14436d6ce body=29 status=ok
// SIG undefined FUN_14436d6ce(void)

undefined8 FUN_14436d6ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436d6ec FUN_14436d6ec body=45 status=ok
// SIG undefined FUN_14436d6ec(void)

void FUN_14436d6ec(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x260) != 0) {
    return;
  }
  FUN_148f65146(lVar1);
  FUN_148f62810(lVar1);
  return;
}



// FUNCTION 14436d744 FUN_14436d744 body=29 status=ok
// SIG undefined FUN_14436d744(void)

undefined8 FUN_14436d744(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436d762 FUN_14436d762 body=135 status=ok
// SIG undefined FUN_14436d762(void)

ulonglong FUN_14436d762(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  
  plVar1 = *(longlong **)(*param_1 + 0x278);
  lVar2 = *(longlong *)(*param_1 + 0x2a0);
  uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,*param_3);
  if (*(int *)(lVar2 + 0x398) != *(int *)(lVar2 + 0x3c4)) {
    lVar4 = lVar2 + 0x3c8;
    if (*(longlong *)(lVar2 + 0x3d0) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0x3d0);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x3d8) - 1U & uVar3) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = *(uint *)(*(longlong *)(lVar2 + 0x390) + (longlong)iVar6 * 0xc) == uVar3;
        uVar5 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),bVar7);
        if (bVar7) break;
        iVar6 = *(int *)(*(longlong *)(lVar2 + 0x390) + (longlong)iVar6 * 0xc + 4);
      } while (iVar6 != -1);
      goto LAB_14436d7e1;
    }
  }
  uVar5 = 0;
LAB_14436d7e1:
  return uVar5 & 0xffffffff;
}



// FUNCTION 14436d800 FUN_14436d800 body=29 status=ok
// SIG undefined FUN_14436d800(void)

undefined8 FUN_14436d800(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436d81e FUN_14436d81e body=29 status=ok
// SIG undefined FUN_14436d81e(void)

undefined8 FUN_14436d81e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436d9ba FUN_14436d9ba body=93 status=ok
// SIG undefined FUN_14436d9ba(void)

void FUN_14436d9ba(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba26cc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14436da18 FUN_14436da18 body=93 status=ok
// SIG undefined FUN_14436da18(void)

void FUN_14436da18(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba26cc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14436da76 FUN_14436da76 body=126 status=ok
// SIG undefined FUN_14436da76(void)

void FUN_14436da76(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba26cc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014436dae5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14436db0c FUN_14436db0c body=281 status=ok
// SIG undefined FUN_14436db0c(void)

undefined8 FUN_14436db0c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14436dc1f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14436dc1f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14436dc1f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14436dbd3;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1484b31c2(*(undefined8 *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x140) + 0x58) +
                     0x50));
      uVar6 = 1;
      goto LAB_14436dbd3;
    }
  }
  uVar6 = 0;
LAB_14436dbd3:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436dc26 FUN_14436dc26 body=78 status=ok
// SIG undefined FUN_14436dc26(void)

undefined8 FUN_14436dc26(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x4d1) == '\x01') {
    lVar2 = *(longlong *)(lVar1 + 0x288);
    FUN_146bee918(lVar2,0);
    *(ulonglong *)(lVar2 + 0x10) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(lVar2 + 8) + 0x214) +
               *(int *)(*(longlong *)(lVar2 + 8) + 0x218));
    *(undefined1 *)(lVar1 + 0x4d1) = 0;
  }
  return *(undefined8 *)(lVar1 + 0x288);
}



// FUNCTION 14436dc9e FUN_14436dc9e body=29 status=ok
// SIG undefined FUN_14436dc9e(void)

undefined8 FUN_14436dc9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436dcda FUN_14436dcda body=29 status=ok
// SIG undefined FUN_14436dcda(void)

undefined8 FUN_14436dcda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436dcf8 FUN_14436dcf8 body=72 status=ok
// SIG undefined FUN_14436dcf8(void)

void FUN_14436dcf8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_3;
  *param_3 = 0;
  FUN_148f6ca5e(*param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436dd58 FUN_14436dd58 body=29 status=ok
// SIG undefined FUN_14436dd58(void)

undefined8 FUN_14436dd58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436dd7a FUN_14436dd7a body=29 status=ok
// SIG undefined FUN_14436dd7a(void)

undefined8 FUN_14436dd7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436df16 FUN_14436df16 body=93 status=ok
// SIG undefined FUN_14436df16(void)

void FUN_14436df16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba26e70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14436df74 FUN_14436df74 body=93 status=ok
// SIG undefined FUN_14436df74(void)

void FUN_14436df74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14af12c50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba26e70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14436dfd2 FUN_14436dfd2 body=126 status=ok
// SIG undefined FUN_14436dfd2(void)

void FUN_14436dfd2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14af12c50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba26e70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014436e041. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14436e050 FUN_14436e050 body=215 status=ok
// SIG undefined FUN_14436e050(void)

void FUN_14436e050(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x20);
  (**(code **)(*param_2 + 0x2b0))(param_2,&local_78);
  *(undefined4 *)(lVar1 + 0x310) = local_58;
  *(undefined4 *)(lVar1 + 0x314) = uStack_54;
  *(undefined4 *)(lVar1 + 0x318) = uStack_50;
  *(undefined4 *)(lVar1 + 0x31c) = uStack_4c;
  *(undefined8 *)(lVar1 + 800) = local_48;
  *(undefined8 *)(lVar1 + 0x328) = local_78;
  *(undefined8 *)(lVar1 + 0x330) = uStack_70;
  *(undefined8 *)(lVar1 + 0x338) = local_68;
  *(undefined8 *)(lVar1 + 0x340) = local_60;
  if (*(char *)(*(longlong *)(lVar1 + 0x148) + 0xb0) == '\x01') {
    *(undefined8 *)(lVar1 + 0x378) = *(undefined8 *)(lVar1 + 0x340);
    *(undefined8 *)(lVar1 + 0x368) = *(undefined8 *)(lVar1 + 0x330);
    *(undefined8 *)(lVar1 + 0x370) = *(undefined8 *)(lVar1 + 0x338);
    *(undefined8 *)(lVar1 + 0x358) = *(undefined8 *)(lVar1 + 800);
    *(undefined8 *)(lVar1 + 0x360) = *(undefined8 *)(lVar1 + 0x328);
    *(undefined4 *)(lVar1 + 0x348) = *(undefined4 *)(lVar1 + 0x310);
    *(undefined4 *)(lVar1 + 0x34c) = *(undefined4 *)(lVar1 + 0x314);
    *(undefined4 *)(lVar1 + 0x350) = *(undefined4 *)(lVar1 + 0x318);
    *(undefined4 *)(lVar1 + 0x354) = *(undefined4 *)(lVar1 + 0x31c);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436e128 FUN_14436e128 body=446 status=ok
// SIG undefined FUN_14436e128(void)

undefined8 FUN_14436e128(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14436e2e0;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14436e2e0;
    }
    FUN_140192332(param_1 + 0x18,&local_98,0);
    lVar7 = local_98;
  }
  else {
LAB_14436e2e0:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14436e1df;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      (**(code **)(*param_2 + 0x2b0))(param_2,&local_98);
      *(undefined4 *)(lVar5 + 0x310) = local_78;
      *(undefined4 *)(lVar5 + 0x314) = uStack_74;
      *(undefined4 *)(lVar5 + 0x318) = uStack_70;
      *(undefined4 *)(lVar5 + 0x31c) = uStack_6c;
      *(undefined8 *)(lVar5 + 800) = local_68;
      *(longlong *)(lVar5 + 0x328) = local_98;
      *(undefined8 *)(lVar5 + 0x330) = uStack_90;
      *(undefined8 *)(lVar5 + 0x338) = local_88;
      *(undefined8 *)(lVar5 + 0x340) = local_80;
      uVar6 = 1;
      if (*(char *)(*(longlong *)(lVar5 + 0x148) + 0xb0) == '\x01') {
        *(undefined8 *)(lVar5 + 0x378) = *(undefined8 *)(lVar5 + 0x340);
        *(undefined8 *)(lVar5 + 0x368) = *(undefined8 *)(lVar5 + 0x330);
        *(undefined8 *)(lVar5 + 0x370) = *(undefined8 *)(lVar5 + 0x338);
        *(undefined8 *)(lVar5 + 0x358) = *(undefined8 *)(lVar5 + 800);
        *(undefined8 *)(lVar5 + 0x360) = *(undefined8 *)(lVar5 + 0x328);
        *(undefined4 *)(lVar5 + 0x348) = *(undefined4 *)(lVar5 + 0x310);
        *(undefined4 *)(lVar5 + 0x34c) = *(undefined4 *)(lVar5 + 0x314);
        *(undefined4 *)(lVar5 + 0x350) = *(undefined4 *)(lVar5 + 0x318);
        *(undefined4 *)(lVar5 + 0x354) = *(undefined4 *)(lVar5 + 0x31c);
      }
      goto LAB_14436e1df;
    }
  }
  uVar6 = 0;
LAB_14436e1df:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436e2e8 FUN_14436e2e8 body=78 status=ok
// SIG undefined FUN_14436e2e8(void)

undefined8 FUN_14436e2e8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x4d1) == '\x01') {
    lVar2 = *(longlong *)(lVar1 + 0x288);
    FUN_146bee918(lVar2,0);
    *(ulonglong *)(lVar2 + 0x10) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(lVar2 + 8) + 0x214) +
               *(int *)(*(longlong *)(lVar2 + 8) + 0x218));
    *(undefined1 *)(lVar1 + 0x4d1) = 0;
  }
  return *(undefined8 *)(lVar1 + 0x288);
}



// FUNCTION 14436e360 FUN_14436e360 body=29 status=ok
// SIG undefined FUN_14436e360(void)

undefined8 FUN_14436e360(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436e3ba FUN_14436e3ba body=29 status=ok
// SIG undefined FUN_14436e3ba(void)

undefined8 FUN_14436e3ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436e458 FUN_14436e458 body=29 status=ok
// SIG undefined FUN_14436e458(void)

undefined8 FUN_14436e458(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436e4be FUN_14436e4be body=29 status=ok
// SIG undefined FUN_14436e4be(void)

undefined8 FUN_14436e4be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436e4dc FUN_14436e4dc body=385 status=ok
// SIG undefined FUN_14436e4dc(void)

undefined8 FUN_14436e4dc(undefined8 param_1,longlong *param_2,longlong *param_3,uint *param_4)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_3 + 0x10) + (ulonglong)(*param_4 >> 9) * 8);
  uVar4 = (ulonglong)(*param_4 & 0x1ff);
  local_50 = *(double *)(lVar2 + 0x10 + uVar4 * 0x18) * *(double *)(lVar1 + 0x420);
  local_58 = *(double *)(lVar2 + 8 + uVar4 * 0x18) * *(double *)(lVar1 + 0x418);
  local_60 = *(double *)(lVar2 + uVar4 * 0x18) * *(double *)(lVar1 + 0x410);
  FUN_146bed047(&local_48,lVar1 + 0x3d8);
  pdVar3 = (double *)param_2[2];
  local_68 = ((local_38 + *(double *)(lVar1 + 0x408)) - *(double *)(lVar1 + 0x438)) * pdVar3[2];
  local_70 = ((local_40 + *(double *)(lVar1 + 0x400)) - *(double *)(lVar1 + 0x430)) * pdVar3[1];
  local_78 = ((local_48 + *(double *)(lVar1 + 0x3f8)) - *(double *)(lVar1 + 0x428)) * *pdVar3;
  FUN_146bed047(&local_60,param_2[1]);
  pdVar3 = (double *)param_2[3];
  local_38 = local_50 + pdVar3[2];
  local_40 = local_58 + pdVar3[1];
  local_48 = local_60 + *pdVar3;
  FUN_146ba22f0(lVar1 + 0x3d8,param_1,&local_48);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436e65e FUN_14436e65e body=70 status=ok
// SIG undefined FUN_14436e65e(void)

undefined8 * FUN_14436e65e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14ba26f60;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 14436e6aa FUN_14436e6aa body=29 status=ok
// SIG undefined FUN_14436e6aa(void)

void FUN_14436e6aa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14436e6c8 FUN_14436e6c8 body=29 status=ok
// SIG undefined FUN_14436e6c8(void)

undefined8 FUN_14436e6c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436e6e6 FUN_14436e6e6 body=442 status=ok
// SIG undefined FUN_14436e6e6(void)

undefined8 FUN_14436e6e6(undefined8 param_1,longlong *param_2,longlong *param_3,uint *param_4)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_3 + 0x10) + (ulonglong)(*param_4 >> 9) * 8);
  uVar4 = (ulonglong)(*param_4 & 0x1ff);
  local_50 = *(double *)(lVar2 + 0x10 + uVar4 * 0x18) * *(double *)(lVar1 + 0x420);
  local_58 = *(double *)(lVar2 + 8 + uVar4 * 0x18) * *(double *)(lVar1 + 0x418);
  local_60 = *(double *)(lVar2 + uVar4 * 0x18) * *(double *)(lVar1 + 0x410);
  FUN_146bed047(&local_48,lVar1 + 0x3d8);
  local_38 = (local_38 + *(double *)(lVar1 + 0x408)) - *(double *)(lVar1 + 0x438);
  local_40 = (local_40 + *(double *)(lVar1 + 0x400)) - *(double *)(lVar1 + 0x430);
  local_48 = (local_48 + *(double *)(lVar1 + 0x3f8)) - *(double *)(lVar1 + 0x428);
  FUN_146bf2028(lVar1 + 0x440,&local_60,&local_48);
  pdVar3 = (double *)param_2[1];
  local_50 = pdVar3[2] * local_50;
  local_58 = pdVar3[1] * local_58;
  local_60 = *pdVar3 * local_60;
  pdVar3 = (double *)param_2[2];
  FUN_146bed047(&local_48,pdVar3 + 3,&local_60);
  local_68 = local_38 + pdVar3[2];
  local_70 = local_40 + pdVar3[1];
  local_78 = local_48 + *pdVar3;
  FUN_146ba22f0(lVar1 + 0x3d8,param_1);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436e8c8 FUN_14436e8c8 body=12 status=ok
// SIG undefined FUN_14436e8c8(void)

void FUN_14436e8c8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014436e8d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14436e8d4 FUN_14436e8d4 body=29 status=ok
// SIG undefined FUN_14436e8d4(void)

undefined8 FUN_14436e8d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436e930 FUN_14436e930 body=29 status=ok
// SIG undefined FUN_14436e930(void)

undefined8 FUN_14436e930(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436e94e FUN_14436e94e body=131 status=ok
// SIG undefined FUN_14436e94e(void)

void FUN_14436e94e(undefined8 *param_1)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_a8;
  undefined1 local_a0 [136];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148f6ba5e(*param_1);
  local_c8[0] = 1;
  local_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  memset(local_a0,0,0x88);
  local_18 = 0x20702;
  FUN_14493db24(local_c8);
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436e9fc FUN_14436e9fc body=29 status=ok
// SIG undefined FUN_14436e9fc(void)

undefined8 FUN_14436e9fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436ea1a FUN_14436ea1a body=127 status=ok
// SIG undefined FUN_14436ea1a(void)

void FUN_14436ea1a(undefined8 *param_1)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_a8;
  undefined1 local_a0 [136];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148f6ba5e(*param_1);
  local_c8[0] = 1;
  local_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  memset(local_a0,0,0x88);
  local_18 = 0x20702;
  FUN_14493db24(local_c8);
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436eac4 FUN_14436eac4 body=29 status=ok
// SIG undefined FUN_14436eac4(void)

undefined8 FUN_14436eac4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436eafe FUN_14436eafe body=160 status=ok
// SIG undefined FUN_14436eafe(void)

ulonglong FUN_14436eafe(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  
  uVar1 = *param_3;
  uVar2 = *param_2;
  iVar4 = FUN_146bc96d4(*(undefined8 *)*param_1,uVar2);
  uVar7 = *(undefined8 *)*param_1;
  iVar5 = FUN_146bc96d4(uVar7,uVar1);
  uVar8 = CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  if (iVar4 != iVar5) {
    plVar3 = (longlong *)param_1[1];
    uVar6 = FUN_146c08e54(*(undefined8 *)*param_1,uVar2,uVar1);
    if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
      plVar9 = plVar3 + 7;
      if ((longlong *)plVar3[8] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar3[8];
      }
      iVar4 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar3[9] - 1U & uVar6) * 4);
      if (iVar4 != -1) {
        do {
          bVar10 = *(uint *)(*plVar3 + (longlong)iVar4 * 0xc) == uVar6;
          uVar8 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),bVar10);
          if (bVar10) break;
          iVar4 = *(int *)(*plVar3 + (longlong)iVar4 * 0xc + 4);
        } while (iVar4 != -1);
        goto LAB_14436eb30;
      }
    }
    uVar8 = 0;
  }
LAB_14436eb30:
  return uVar8 & 0xffffffff;
}



// FUNCTION 14436ebc8 FUN_14436ebc8 body=29 status=ok
// SIG undefined FUN_14436ebc8(void)

undefined8 FUN_14436ebc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436ebe6 FUN_14436ebe6 body=76 status=ok
// SIG undefined FUN_14436ebe6(void)

ulonglong FUN_14436ebe6(longlong *param_1,uint *param_2)

{
  ulonglong uVar1;
  
  if (*(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x1c0) + (ulonglong)(*param_2 >> 9) * 8) + 0xc
              + (ulonglong)((*param_2 & 0x1ff) << 4)) == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(*param_1 + 0x208) + 0x80))();
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}



// FUNCTION 14436ecf0 FUN_14436ecf0 body=67 status=ok
// SIG undefined FUN_14436ecf0(void)

void FUN_14436ecf0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *(longlong *)(*param_1 + 0xb8);
  uVar3 = *(undefined8 *)(*param_1 + 0xd0);
  lVar1 = lVar2 + 0xb8;
  uVar4 = FUN_140e1307c(lVar1,lVar2 + 0xa8);
  FUN_148f71fd6(uVar3,uVar4,lVar1,1);
  return;
}



// FUNCTION 14436ed5e FUN_14436ed5e body=29 status=ok
// SIG undefined FUN_14436ed5e(void)

undefined8 FUN_14436ed5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436ed7c FUN_14436ed7c body=33 status=ok
// SIG undefined FUN_14436ed7c(void)

void FUN_14436ed7c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_148f733e4(lVar1);
  FUN_1485051e4(*(undefined8 *)(lVar1 + 0xf0));
  return;
}


