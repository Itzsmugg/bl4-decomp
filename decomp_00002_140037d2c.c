// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140037d2c FUN_140037d2c body=140 status=ok
// SIG undefined FUN_140037d2c(void)

void FUN_140037d2c(longlong param_1)

{
  FUN_14004673c(param_1 + 0x80,0);
  FUN_1412bdb94(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_14474ae1f(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1400d2500(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140037db8 FUN_140037db8 body=292 status=ok
// SIG undefined FUN_140037db8(void)

void FUN_140037db8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  
  plVar1 = param_1 + 2;
  uVar4 = *(uint *)(param_1 + 1);
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    if (uVar4 == uVar6) goto LAB_140037dee;
    uVar2 = uVar6 + 1;
  } while (SBORROW4(0,*(int *)(*plVar1 + (longlong)(int)uVar6 * 4)));
  if (uVar4 + 1 != uVar6 + 1) {
    do {
      FUN_147266e56((longlong)(int)uVar6 * 0x60 + *param_1);
      uVar2 = uVar6 + 1;
      if (uVar6 + 1 < *(uint *)(param_1 + 1)) {
        uVar2 = *(uint *)(param_1 + 1);
      }
      do {
        uVar3 = uVar2;
        if (uVar2 - 1 == uVar6) break;
        uVar6 = uVar6 + 1;
        uVar3 = uVar6;
      } while (SBORROW4(0,*(int *)(*plVar1 + (longlong)(int)uVar6 * 4)));
      uVar6 = uVar3;
    } while (uVar6 != uVar4);
  }
LAB_140037dee:
  iVar5 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_140037edc(*param_1,0);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14124e00c(param_1,0);
  }
  plVar7 = param_1 + 4;
  uVar4 = *(uint *)((longlong)param_1 + 0x34);
  if ((int)uVar4 < 1) {
    *(undefined4 *)(param_1 + 6) = 0;
    FUN_1456bda22(plVar7,1);
    iVar5 = (int)param_1[6];
    uVar4 = *(uint *)((longlong)param_1 + 0x34);
  }
  *(uint *)(param_1 + 6) = iVar5 + 1U;
  if (uVar4 < iVar5 + 1U) {
    FUN_1400e0406(plVar7,iVar5);
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    plVar7 = (longlong *)param_1[5];
  }
  plVar7[iVar5] = -1;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_1446fb5ec(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 140037edc FUN_140037edc body=40 status=ok
// SIG undefined FUN_140037edc(void)

void FUN_140037edc(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147266e56(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 140037f04 FUN_140037f04 body=69 status=ok
// SIG undefined FUN_140037f04(void)

void FUN_140037f04(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140037f3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
    return;
  }
  return;
}



// FUNCTION 140037f4a FUN_140037f4a body=99 status=ok
// SIG undefined FUN_140037f4a(void)

void FUN_140037f4a(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140037fae FUN_140037fae body=1 status=ok
// SIG undefined FUN_140037fae(void)

void FUN_140037fae(void)

{
  return;
}



// FUNCTION 140037fb0 FUN_140037fb0 body=338 status=ok
// SIG undefined FUN_140037fb0(void)

void FUN_140037fb0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  
  plVar1 = param_1 + 2;
  uVar4 = *(uint *)(param_1 + 1);
  uVar5 = 0;
  do {
    uVar9 = uVar5;
    if (uVar4 == uVar9) goto LAB_140037fee;
    uVar5 = uVar9 + 1;
  } while (SBORROW4(0,*(int *)(*plVar1 + (longlong)(int)uVar9 * 4)));
  if (uVar4 + 1 != uVar9 + 1) {
    do {
      lVar2 = *param_1;
      lVar7 = (longlong)(int)uVar9 * 0x98;
      *(undefined4 *)(lVar2 + 0x68 + lVar7) = 0;
      if (*(longlong *)(lVar2 + 0x60 + lVar7) != 0) {
        FUN_1400020a8();
      }
      FUN_1407535d8(lVar2 + lVar7 + 0x20);
      uVar5 = uVar9 + 1;
      if (uVar9 + 1 < *(uint *)(param_1 + 1)) {
        uVar5 = *(uint *)(param_1 + 1);
      }
      do {
        uVar3 = uVar5;
        if (uVar5 - 1 == uVar9) break;
        uVar9 = uVar9 + 1;
        uVar3 = uVar9;
      } while (SBORROW4(0,*(int *)(*plVar1 + (longlong)(int)uVar9 * 4)));
      uVar9 = uVar3;
    } while (uVar9 != uVar4);
  }
LAB_140037fee:
  iVar6 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_140038102(*param_1,0);
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1411b6a60(param_1,0);
  }
  plVar8 = param_1 + 4;
  uVar4 = *(uint *)((longlong)param_1 + 0x34);
  if ((int)uVar4 < 1) {
    *(undefined4 *)(param_1 + 6) = 0;
    FUN_1456bda22(plVar8,1);
    iVar6 = (int)param_1[6];
    uVar4 = *(uint *)((longlong)param_1 + 0x34);
  }
  *(uint *)(param_1 + 6) = iVar6 + 1U;
  if (uVar4 < iVar6 + 1U) {
    FUN_1400e0406(plVar8,iVar6);
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[5];
  }
  plVar8[iVar6] = -1;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_1446fb5ec(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 140038102 FUN_140038102 body=68 status=ok
// SIG undefined FUN_140038102(void)

void FUN_140038102(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x68);
    do {
      *puVar1 = 0;
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_1407535d8(puVar1 + -0x12);
      puVar1 = puVar1 + 0x26;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140038146 FUN_140038146 body=43 status=ok
// SIG undefined FUN_140038146(void)

void FUN_140038146(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140038171 FUN_140038171 body=55 status=ok
// SIG undefined FUN_140038171(void)

void FUN_140038171(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x400);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x84;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1400381a8 FUN_1400381a8 body=114 status=ok
// SIG undefined FUN_1400381a8(void)

void FUN_1400381a8(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1456b52ac();
  }
  iVar2 = *(int *)(param_1 + 0x1f0);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1e8) + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_14003821a(lVar1);
        FUN_1400020a8(lVar1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x1e8) + lVar3 * 8) = 0;
        iVar2 = *(int *)(param_1 + 0x1f0);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 14003821a FUN_14003821a body=287 status=ok
// SIG undefined FUN_14003821a(void)

void FUN_14003821a(undefined8 *param_1)

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
  
  lVar8 = 0x58;
  do {
    lVar4 = *(longlong *)((longlong)param_1 + lVar8 + -8);
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
  } while (lVar8 != 0x18);
  *param_1 = &PTR_LAB_14a217b60;
  lVar8 = param_1[1];
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
  return;
}



// FUNCTION 14003833a FUN_14003833a body=231 status=ok
// SIG undefined FUN_14003833a(void)

void FUN_14003833a(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar13 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar13 = param_1 + 0xd8;
  }
  iVar4 = *(int *)(param_1 + 0x128);
  if ((longlong)iVar4 != 0) {
    lVar12 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x60);
      lVar11 = (longlong)*(int *)(lVar13 + lVar12) * 0x98;
      piVar2 = (int *)(lVar6 + 0x90 + lVar11);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        uVar3 = *(ushort *)(lVar6 + lVar11 + 0x94);
        uVar9 = (uint)uVar3;
        uVar5 = *(uint *)(param_1 + 0x18);
        uVar10 = (uint)uVar3;
        uVar8 = uVar9 ^ 0xffff;
        if (uVar5 != uVar10 && (int)uVar9 <= (int)uVar5) {
          uVar8 = uVar10;
        }
        lVar11 = (ulonglong)(uVar5 == uVar10 || (int)uVar5 < (int)uVar9) * 0x20;
        lVar6 = *(longlong *)(param_1 + 0x10 + lVar11);
        lVar11 = param_1 + lVar11;
        if (lVar6 != 0) {
          lVar11 = lVar6;
        }
        bVar7 = (byte)uVar8 & 0x1f;
        puVar1 = (uint *)(lVar11 + (ulonglong)(uVar8 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        FUN_1407531a6((longlong *)(param_1 + 0x60));
      }
      lVar12 = lVar12 + 0xc;
    } while ((longlong)iVar4 * 0xc != lVar12);
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (-1 < *(int *)(param_1 + 300)) {
    return;
  }
  FUN_14726cc02(param_1 + 0xd8);
  return;
}



// FUNCTION 140038422 FUN_140038422 body=183 status=ok
// SIG undefined FUN_140038422(void)

void FUN_140038422(longlong param_1)

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
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar8 = param_1 + 0x20;
  do {
    lVar4 = *(longlong *)(lVar8 + -8);
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
  } while (lVar8 != param_1);
  return;
}



// FUNCTION 1400384d9 FUN_1400384d9 body=51 status=ok
// SIG undefined FUN_1400384d9(void)

void FUN_1400384d9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14003850c FUN_14003850c body=71 status=ok
// SIG undefined FUN_14003850c(void)

undefined8 * FUN_14003850c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e8dc0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140038554 FUN_140038554 body=71 status=ok
// SIG undefined FUN_140038554(void)

undefined8 * FUN_140038554(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2e8e30;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14003859c FUN_14003859c body=48 status=ok
// SIG undefined FUN_14003859c(void)

void FUN_14003859c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1400385cc FUN_1400385cc body=375 status=ok
// SIG undefined FUN_1400385cc(void)

void FUN_1400385cc(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_140020148(param_1 + 0xb0);
  FUN_1400200e4(param_1 + 0xa0);
  FUN_1400200e4(param_1 + 0x90);
  FUN_1400200e4(param_1 + 0x80);
  FUN_144718802(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
      }
      else {
        FUN_144705e74(piVar2);
      }
    }
  }
  FUN_1400200e4(param_1 + 8);
  return;
}



// FUNCTION 140038744 FUN_140038744 body=74 status=ok
// SIG undefined FUN_140038744(void)

void FUN_140038744(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014003878b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14003878e FUN_14003878e body=96 status=ok
// SIG undefined FUN_14003878e(void)

void FUN_14003878e(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  do {
    if (param_2 == 0) {
      return;
    }
    if ((int)param_1[1] == 0) {
LAB_1400387a3:
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar1 = (undefined8 *)*param_1;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(param_1,0,0,0x10);
        *(undefined4 *)(param_1 + 1) = 0;
        goto LAB_1400387a3;
      }
    }
    param_1 = param_1 + 5;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 1400387ee FUN_1400387ee body=504 status=ok
// SIG undefined FUN_1400387ee(void)

void FUN_1400387ee(longlong *param_1)

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
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar8 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
    iVar8 = (int)param_1[5];
  }
  plVar4 = local_60;
  iVar6 = (int)local_68;
  uVar9 = (uint)local_58;
  iVar5 = local_58._4_4_;
  iVar14 = local_50;
  if (local_58._4_4_ != iVar8 || local_60 != local_70) {
    do {
      plVar12 = *(longlong **)(*param_1 + (longlong)iVar5 * 8);
      (**(code **)(*plVar12 + 0x20))(plVar12);
      if (plVar12 != (longlong *)0x0) {
        (**(code **)*plVar12)(plVar12,1);
      }
      uVar9 = uVar9 & ~(uint)uVar13;
      plVar12 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar12 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar10 = (longlong)iVar6;
      uVar7 = *(uint *)((longlong)plVar12 + lVar10 * 4) & uVar9;
      if (uVar7 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar3 = iVar5;
        if (iVar5 < iVar6) {
          iVar3 = iVar6;
        }
        if (iVar6 < iVar5) {
          lVar11 = 0;
          do {
            uVar7 = *(uint *)((longlong)plVar12 + lVar11 * 4 + lVar10 * 4 + 4);
            if (uVar7 != 0) {
              iVar6 = iVar6 + (int)lVar11 + 1;
              uVar9 = 0xffffffff;
              goto LAB_140038916;
            }
            iVar14 = iVar14 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar3 - lVar10 != lVar11);
          uVar9 = 0xffffffff;
          iVar6 = iVar3;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar2;
      }
      else {
LAB_140038916:
        uVar13 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar13 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar5) {
          iVar5 = iVar2;
        }
      }
    } while (iVar5 != iVar8 || plVar4 != local_70);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140b584e0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400389e8 FUN_1400389e8 body=75 status=ok
// SIG undefined FUN_1400389e8(void)

void FUN_1400389e8(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140038a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 140038a34 FUN_140038a34 body=55 status=ok
// SIG undefined FUN_140038a34(void)

void FUN_140038a34(longlong *param_1)

{
  FUN_140038a6c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140038a6c FUN_140038a6c body=123 status=ok
// SIG undefined FUN_140038a6c(void)

void FUN_140038a6c(longlong param_1,int param_2)

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



// FUNCTION 140038ae8 FUN_140038ae8 body=172 status=ok
// SIG undefined FUN_140038ae8(void)

void FUN_140038ae8(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = param_1[1];
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
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 140038b94 FUN_140038b94 body=47 status=ok
// SIG undefined FUN_140038b94(void)

void FUN_140038b94(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140038bc3 FUN_140038bc3 body=51 status=ok
// SIG undefined FUN_140038bc3(void)

void FUN_140038bc3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140038bf6 FUN_140038bf6 body=451 status=ok
// SIG undefined FUN_140038bf6(void)

void FUN_140038bf6(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._4_4_ = 0;
    uVar12 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
    uVar12 = (uint)local_50;
    iVar14 = (int)local_60;
  }
  plVar5 = local_58;
  iVar7 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < (int)local_58[3]) {
    do {
      FUN_140038dba((longlong)iVar7 * 0xe8 + *param_1 + 0x10);
      uVar12 = ~(uint)uVar13 & uVar12;
      plVar8 = (longlong *)plVar5[2];
      if ((longlong *)plVar5[2] == (longlong *)0x0) {
        plVar8 = plVar5;
      }
      iVar3 = (int)plVar5[3];
      lVar11 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar4 = iVar7;
        if (iVar7 < iVar14) {
          iVar4 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar4 - lVar11 == lVar9) goto LAB_140038d15;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_140038d15:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140032aa6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140038dba FUN_140038dba body=61 status=ok
// SIG undefined FUN_140038dba(void)

void FUN_140038dba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar1 = param_1;
  }
  FUN_140038df7(lVar1,*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140038df7 FUN_140038df7 body=49 status=ok
// SIG undefined FUN_140038df7(void)

void FUN_140038df7(longlong param_1,int param_2)

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



// FUNCTION 140038e28 FUN_140038e28 body=1008 status=ok
// SIG undefined FUN_140038e28(void)

void FUN_140038e28(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14aa51ac0;
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x62] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0x5e];
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
  lVar4 = param_1[0x5d];
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
  lVar4 = param_1[0x5c];
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
  lVar4 = param_1[0x5b];
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
  if (param_1[0x58] != 0 && (param_1[0x58] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_1[0x54] != 0 && (param_1[0x54] & 1) == 0) {
    FUN_1400020a8();
  }
  FUN_1412117b0(param_1 + 0x14);
  param_1[0xb] = &PTR_FUN_14aa581e0;
  lVar4 = param_1[0x10];
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
  lVar4 = param_1[0xf];
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
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 140039218 FUN_140039218 body=2050 status=ok
// SIG undefined FUN_140039218(void)

void FUN_140039218(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar3 = (ulonglong)*(byte *)(param_1 + 0x108);
  if (0 < *(int *)(param_1 + 0x3c + uVar3 * 4)) {
    uVar4 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x28);
      if (*(longlong *)(param_1 + 0x28) == 0) {
        lVar5 = param_1 + 0x18;
      }
      if ((*(uint *)(lVar5 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
        FUN_141767e8a(param_1,uVar4);
        uVar3 = (ulonglong)*(byte *)(param_1 + 0x108);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < *(int *)(param_1 + 0x3c + (ulonglong)((uint)uVar3 & 1) * 4));
  }
  FUN_14580e4f4(param_1 + 8);
  FUN_14581f33c(param_1 + 0x298);
  lVar5 = 0;
  do {
    if (*(longlong *)(param_1 + 0xdb0 + lVar5) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0xdb8 + lVar5) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0xdc0 + lVar5) != 0) {
      FUN_1400020a8();
    }
    puVar2 = (undefined8 *)(param_1 + 0xdc0 + lVar5);
    puVar2[-4] = 0;
    *(undefined4 *)(puVar2 + -3) = 0;
    *puVar2 = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    lVar5 = lVar5 + -0x28;
  } while (lVar5 != -0x140);
  lVar5 = 0;
  do {
    if (*(longlong *)(param_1 + 0xc70 + lVar5) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0xc78 + lVar5) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0xc80 + lVar5) != 0) {
      FUN_1400020a8();
    }
    puVar2 = (undefined8 *)(param_1 + 0xc80 + lVar5);
    puVar2[-4] = 0;
    *(undefined4 *)(puVar2 + -3) = 0;
    *puVar2 = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    lVar5 = lVar5 + -0x28;
  } while (lVar5 != -0x140);
  if (*(longlong *)(param_1 + 0xb30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb40) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0xb20) = 0;
  *(undefined4 *)(param_1 + 0xb28) = 0;
  *(undefined8 *)(param_1 + 0xb40) = 0;
  *(undefined8 *)(param_1 + 0xb30) = 0;
  *(undefined8 *)(param_1 + 0xb38) = 0;
  FUN_140051b7c(*(undefined8 *)(param_1 + 0xad0),*(undefined4 *)(param_1 + 0xad8));
  if (*(longlong *)(param_1 + 0xad0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xab0) != 0) {
    FUN_1400020a8();
  }
  FUN_14176aa10(*(undefined8 *)(param_1 + 0xa00),*(undefined4 *)(param_1 + 0xa08));
  if (*(longlong *)(param_1 + 0xa00) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x9f8) = 0;
  if (*(longlong *)(param_1 + 0x9f0) != 0) {
    FUN_1400020a8();
  }
  FUN_140038a34(param_1 + 0x9b0);
  *(undefined4 *)(param_1 + 0x9a8) = 0;
  if (*(longlong *)(param_1 + 0x9a0) != 0) {
    FUN_1400020a8();
  }
  FUN_140038a34(param_1 + 0x960);
  *(undefined4 *)(param_1 + 0x958) = 0;
  if (*(longlong *)(param_1 + 0x950) != 0) {
    FUN_1400020a8();
  }
  FUN_140038a34(param_1 + 0x910);
  FUN_14176e05a(param_1 + 0x8a8);
  FUN_14176b65a(param_1 + 0x870);
  if (*(longlong **)(param_1 + 0x868) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x868) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x860) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x860) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x858) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x858) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x850) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x850) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x848) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x848) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x840) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x840) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x838) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x838) + 0x38))();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x830);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(longlong **)(param_1 + 0x828) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x828) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x820) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x820) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x818) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x818) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x810) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x810) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x808) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x808) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x800) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x800) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x7f8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x7f0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x7f0) + 0x38))();
  }
  if (*(longlong **)(param_1 + 0x7e8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x7e8) + 0x38))();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x7e0);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x7d8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 2000);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x7c8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x7c0);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x7b8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x7b0);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x7a8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(longlong *)(param_1 + 0x798) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x770);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x768);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x760);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(longlong *)(param_1 + 0x750) != 0) {
    FUN_1400020a8();
  }
  FUN_1462db5d2(param_1 + 0x648);
  puVar2 = *(undefined8 **)(param_1 + 0x640);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x638);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x630);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_1462db628(param_1 + 0x528);
  if (*(longlong *)(param_1 + 0x518) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x4f0);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x4e8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x4e0);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_145934abe(param_1 + 0x4a8);
  FUN_1462db67e(param_1 + 0x3a0);
  FUN_1462db6d4(param_1 + 0x298);
  if (*(longlong *)(param_1 + 0x288) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FUN_1400020a8();
  }
  FUN_145846690(param_1 + 0x1e0);
  puVar2 = *(undefined8 **)(param_1 + 0x1d8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x1d0);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x1c8);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_1415e0e20(param_1 + 0x188);
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x150);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x148);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x140);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1462db736(param_1 + 8);
  return;
}



// FUNCTION 140039a1a FUN_140039a1a body=412 status=ok
// SIG undefined FUN_140039a1a(void)

undefined8 FUN_140039a1a(longlong param_1,byte param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1c8) + 8))();
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) + 0x18);
    if (*(longlong *)(param_1 + 0x28) != lVar5) {
      lVar6 = *(longlong *)(param_1 + 0x18);
      *(undefined4 *)(lVar6 + 0xb50) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0xb54) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0xb58) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0xb5c) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0xb40) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0xb44) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0xb48) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0xb4c) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0xb30) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0xb34) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0xb38) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0xb3c) = 0xffffffff;
      *(undefined8 *)(lVar6 + 0x29b8) = 0xffffffffffffffff;
      *(undefined4 *)(lVar6 + 0x29c0) = 0xffffffff;
      param_2 = 1;
    }
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x18);
    param_2 = param_2 | *(longlong *)(param_1 + 0x28) != lVar5;
  }
  if (*(char *)(param_1 + 0x139) == '\x01') {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x18);
    if (*(longlong *)(param_1 + 0x30) == lVar6) {
LAB_140039b3a:
      if (param_2 == 0) {
        uVar3 = 0;
        goto LAB_140039b8e;
      }
    }
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x10) + 0x18);
    if (*(longlong *)(param_1 + 0x30) == lVar6) goto LAB_140039b3a;
    lVar2 = *(longlong *)(param_1 + 0x18);
    *(undefined4 *)(lVar2 + 0x2fe0) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x2fe4) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x2fe8) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x2fec) = 0xffffffff;
    *(undefined8 *)(lVar2 + 0x2ff0) = 0xffffffffffffffff;
    if (0 < *(int *)(param_1 + 0x108)) {
      lVar2 = 0;
      lVar4 = 0;
      do {
        *(undefined1 *)(*(longlong *)(param_1 + 0x100) + lVar2) = 0;
        lVar4 = lVar4 + 1;
        lVar2 = lVar2 + 0x50;
      } while (lVar4 < *(int *)(param_1 + 0x108));
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = plVar1[0x33];
  local_48 = lVar5;
  local_40 = lVar6;
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    lVar2 = plVar1[0x33];
  }
  *(int *)(lVar2 + 0x1c0) = *(int *)(lVar2 + 0x1c0) + 1;
  (**(code **)(**(longlong **)(lVar2 + 0x28) + 0xe0))(*(longlong **)(lVar2 + 0x28),2,&local_48);
  *(longlong *)(param_1 + 0x28) = lVar5;
  *(longlong *)(param_1 + 0x30) = lVar6;
  uVar3 = 1;
LAB_140039b8e:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140039bb8 FUN_140039bb8 body=183 status=ok
// SIG undefined FUN_140039bb8(void)

bool FUN_140039bb8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar3 = **(longlong **)(param_1 + 8);
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 8);
    if (plVar1 != param_2) {
      puVar4 = (undefined8 *)*param_2;
      *param_2 = *plVar1;
      *plVar1 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar4 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x10);
    lVar5 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar3;
    puVar4 = *(undefined8 **)(lVar3 + 8);
    *(undefined8 *)(lVar3 + 8) = 0;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar4 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    *(undefined4 *)(lVar3 + 0x10) = 0;
    if (lVar5 != 0) {
      puVar4 = *(undefined8 **)(lVar5 + 8);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar4 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      FUN_1400020a8(lVar5);
    }
  }
  return lVar3 != 0;
}



// FUNCTION 140039c70 FUN_140039c70 body=46 status=ok
// SIG undefined FUN_140039c70(void)

void FUN_140039c70(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_140039c9e(param_1 + 0x10);
  return;
}



// FUNCTION 140039c9e FUN_140039c9e body=55 status=ok
// SIG undefined FUN_140039c9e(void)

void FUN_140039c9e(longlong *param_1)

{
  FUN_140039cd6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140039cd6 FUN_140039cd6 body=128 status=ok
// SIG undefined FUN_140039cd6(void)

void FUN_140039cd6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140039e66(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 140039d58 FUN_140039d58 body=269 status=ok
// SIG undefined FUN_140039d58(void)

void FUN_140039d58(longlong param_1,int param_2)

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



// FUNCTION 140039e66 FUN_140039e66 body=322 status=ok
// SIG undefined FUN_140039e66(void)

void FUN_140039e66(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x158;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140039ed2;
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
LAB_140039ed2:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x158)) {
      uVar5 = uVar3 / 0x158 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x158,8);
  }
  return;
}



// FUNCTION 140039fa8 FUN_140039fa8 body=974 status=ok
// SIG undefined FUN_140039fa8(void)

longlong FUN_140039fa8(longlong param_1,longlong *param_2,undefined8 param_3,uint *param_4,
                      undefined8 param_5,undefined8 param_6,undefined4 param_7,longlong *param_8)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 *local_70;
  longlong lStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  undefined2 local_4a;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = param_7;
  local_a0 = param_1 + 0x90;
  FUN_14488e942(param_1 + 0x20,&local_98,param_4);
  local_98 = param_1;
  if (CONCAT44(uStack_8c,uStack_90) == 0) {
    lVar6 = 0;
  }
  else {
    local_78 = *param_2;
    local_54 = *(undefined8 *)((longlong)param_2 + 0x24);
    local_4c = *(undefined2 *)((longlong)param_2 + 0x2c);
    local_4a = *(undefined2 *)((longlong)param_2 + 0x2e);
    local_70 = (undefined8 *)param_2[1];
    lStack_68 = param_2[2];
    local_60 = (undefined4)param_2[3];
    local_58 = (undefined4)param_2[4];
    local_48 = (ulonglong)*(uint6 *)(param_2 + 6);
    local_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar6 = FUN_144859ac6(&local_78,0x38,CONCAT44(uStack_84,local_88));
    uVar4 = *(uint *)(param_1 + 0xe8);
    if (0 < (int)uVar4) {
      uVar12 = 0;
      plVar8 = *(longlong **)(param_1 + 0xe0);
      do {
        if (plVar8[1] == lVar6) {
          lVar6 = *plVar8;
          if (uVar4 - 1 != (int)uVar12) {
            iVar5 = (uVar4 - 1) - (int)uVar12;
            iVar10 = 1;
            if (iVar5 < 1) {
              iVar10 = iVar5;
            }
            memmove(plVar8,*(longlong **)(param_1 + 0xe0) + (ulonglong)(uVar4 - iVar10) * 3,
                    (longlong)iVar10 * 0x18);
            uVar4 = *(uint *)(param_1 + 0xe8);
          }
          *(uint *)(param_1 + 0xe8) = uVar4 - 1;
          iVar10 = *(int *)(param_1 + 0xf8);
          uVar4 = iVar10 + 1;
          *(uint *)(param_1 + 0xf8) = uVar4;
          if (*(uint *)(param_1 + 0xfc) < uVar4) {
            FUN_1417461d0(param_1 + 0xf0);
          }
          *(longlong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar10 * 8) = lVar6;
          *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
          goto LAB_14003a1d0;
        }
        uVar12 = uVar12 + 1;
        plVar8 = plVar8 + 3;
      } while (uVar4 != uVar12);
    }
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    pcVar1 = (code *)*param_8;
    plVar8 = param_8 + 4;
    if ((longlong *)param_8[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_8[2];
    }
    local_78 = param_1;
    local_70 = &local_98;
    lStack_68 = lVar6;
    uVar7 = (**(code **)(*plVar8 + 8))();
    lVar6 = (*pcVar1)(uVar7);
    iVar10 = *(int *)(param_1 + 0xf8);
    uVar4 = iVar10 + 1;
    *(uint *)(param_1 + 0xf8) = uVar4;
    if (*(uint *)(param_1 + 0xfc) < uVar4) {
      FUN_1417461d0(param_1 + 0xf0);
    }
    *(longlong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar10 * 8) = lVar6;
    *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
LAB_14003a1d0:
    uVar4 = *param_4;
    if (uVar4 == 0xffffffff) {
      uVar4 = param_4[1];
    }
    *(undefined8 *)(lVar6 + 0x40) = param_3;
    *(ulonglong *)(lVar6 + 0x98) = (ulonglong)uVar4 << 0x20;
    *(undefined4 *)(lVar6 + 0xa0) = 0xffffffff;
    *(undefined1 *)(lVar6 + 0xa4) = 1;
    *(undefined8 *)(lVar6 + 0x38) = param_5;
    *(int *)(lVar6 + 0x34) = *(int *)(lVar6 + 0x34) + 1;
    if (*(int *)(lVar6 + 0x94) < 0) {
      *(undefined4 *)(lVar6 + 0x90) = 0;
      FUN_1471267e2(lVar6 + 0x88);
    }
    else {
      *(undefined4 *)(lVar6 + 0x90) = 0;
    }
    *(undefined4 *)(lVar6 + 0x58) = local_88;
    *(undefined4 *)(lVar6 + 0x5c) = uStack_84;
    *(undefined4 *)(lVar6 + 0x60) = uStack_80;
    *(undefined4 *)(lVar6 + 100) = uStack_7c;
    *(undefined4 *)(lVar6 + 0x48) = (undefined4)local_98;
    *(undefined4 *)(lVar6 + 0x4c) = local_98._4_4_;
    *(undefined4 *)(lVar6 + 0x50) = uStack_90;
    *(undefined4 *)(lVar6 + 0x54) = uStack_8c;
    iVar10 = *(int *)(param_1 + 0x98);
    if ((longlong)iVar10 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x90);
      lVar9 = 0;
      do {
        uVar4 = *(uint *)(lVar2 + 8 + lVar9);
        lVar3 = *(longlong *)(lVar2 + lVar9);
        uVar11 = *(uint *)(lVar3 + 0xa0);
        uVar13 = *(uint *)(lVar6 + 0x9c);
        if (uVar11 < *(uint *)(lVar6 + 0x9c)) {
          uVar13 = uVar11;
        }
        *(uint *)(lVar3 + 0xa0) = uVar13;
        uVar11 = *(uint *)(lVar6 + 0x98);
        if (*(uint *)(lVar6 + 0x98) < uVar4) {
          uVar11 = uVar4;
        }
        *(uint *)(lVar6 + 0x98) = uVar11;
        lVar9 = lVar9 + 0x10;
      } while ((longlong)iVar10 * 0x10 != lVar9);
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(int *)(param_1 + 0x9c) < 0) {
      FUN_1471275cc(param_1 + 0x90,0);
    }
    lVar2 = CONCAT44(uStack_8c,uStack_90);
    uVar12 = CONCAT44(uStack_84,local_88) + lVar2;
    if (uVar12 <= *(ulonglong *)(param_1 + 0x78)) {
      uVar12 = *(ulonglong *)(param_1 + 0x78);
    }
    *(ulonglong *)(param_1 + 0x78) = uVar12;
    *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + 1;
    *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + lVar2;
    uVar12 = lVar2 + *(longlong *)(param_1 + 0xd0);
    *(ulonglong *)(param_1 + 0xd0) = uVar12;
    if (uVar12 <= *(ulonglong *)(param_1 + 0xd8)) {
      uVar12 = *(ulonglong *)(param_1 + 0xd8);
    }
    *(ulonglong *)(param_1 + 0xd8) = uVar12;
  }
  if (*param_8 != 0) {
    plVar8 = param_8 + 4;
    if ((longlong *)param_8[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_8[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14003a378 FUN_14003a378 body=299 status=ok
// SIG undefined FUN_14003a378(void)

void FUN_14003a378(longlong param_1,byte param_2,longlong *param_3,ulonglong param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  ushort *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  uVar11 = (ulonglong)param_2;
  if (((param_4 & 8) != 0) && (iVar10 = *(int *)(param_1 + 0x2000 + uVar11 * 4), -1 < iVar10)) {
    lVar1 = (ulonglong)param_2 * 0x200 + param_1;
    lVar12 = lVar1 + 2000;
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar12 + lVar8 * 8);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x18) == *param_3)) {
        bVar7 = (byte)lVar8 & 0x3f;
        puVar2 = (ulonglong *)(param_1 + 0x1fd0 + uVar11 * 8);
        *puVar2 = *puVar2 & (-2L << bVar7 | 0xfffffffffffffffeU >> 0x40 - bVar7);
        *(undefined8 *)(lVar1 + 0x13d0 + lVar8 * 8) = 0;
        uVar5 = *(ulonglong *)(param_1 + 0x1fd0 + uVar11 * 8);
        lVar4 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        *(uint *)(param_1 + 0x2000 + uVar11 * 4) = -(uint)(uVar5 == 0) | (uint)lVar4;
        *(undefined8 *)(lVar12 + lVar8 * 8) = 0;
        puVar2 = (ulonglong *)(param_1 + 0x7a0 + uVar11 * 8);
        *puVar2 = *puVar2 | 1L << ((byte)lVar8 & 0x3f);
        iVar10 = *(int *)(param_1 + 0x2000 + uVar11 * 4);
      }
      bVar6 = lVar8 < iVar10;
      lVar8 = lVar8 + 1;
    } while (bVar6);
  }
  if ((param_4 & 0x10) != 0) {
    lVar1 = (ulonglong)param_2 * 0x80 + param_1;
    lVar12 = lVar1 + 0x2638;
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar12 + lVar8 * 8);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x18) == *param_3)) {
        if (param_2 == 5) {
          uVar9 = *(uint *)(param_1 + 0x2c4c);
          if ((uint)lVar8 < *(uint *)(param_1 + 0x2c4c)) {
            uVar9 = (uint)lVar8;
          }
        }
        else {
          uVar9 = 0;
        }
        *(uint *)(param_1 + 0x2c38 + uVar11 * 4) = uVar9;
        *(undefined8 *)(lVar12 + lVar8 * 8) = 0;
        puVar3 = (ushort *)(param_1 + 0x2628 + uVar11 * 2);
        *puVar3 = *puVar3 | (ushort)(1 << ((byte)lVar8 & 0x1f));
        *(undefined8 *)(lVar1 + 0x2938 + lVar8 * 8) = 0;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x11);
  }
  return;
}



// FUNCTION 14003a4a4 FUN_14003a4a4 body=969 status=ok
// SIG undefined FUN_14003a4a4(void)

void FUN_14003a4a4(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  byte param_5,undefined4 param_6,byte param_7,undefined1 param_8)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  undefined4 local_120;
  undefined4 *local_118;
  undefined4 local_10c;
  ulonglong local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_b8 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((int)param_1[0x133] <= (int)param_1[0x132]) goto LAB_14003a823;
  if (*(int *)((longlong)param_1 + 0x99c) <= *(int *)((longlong)param_1 + 0x994))
  goto LAB_14003a823;
  local_88 = (int)param_1[0x15d];
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0xaec);
  uStack_80 = (int)param_1[0x15e];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0xaf4);
  local_98 = (int)param_1[0x15b];
  uStack_94 = *(undefined4 *)((longlong)param_1 + 0xadc);
  uStack_90 = (int)param_1[0x15c];
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0xae4);
  local_a8 = (int)param_1[0x159];
  uStack_a4 = *(undefined4 *)((longlong)param_1 + 0xacc);
  uStack_a0 = (int)param_1[0x15a];
  uStack_9c = *(undefined4 *)((longlong)param_1 + 0xad4);
  local_b8[0] = param_1[0x157];
  local_b8[1] = param_1[0x158];
  iVar9 = (int)param_1[0x15f];
  local_78 = param_1[0x160];
  local_70 = iVar9;
  if (((((int)param_1[0x132] < 1) && (*(int *)((longlong)param_1 + 0x994) < 1)) &&
      ((int)ROUND(*(float *)((longlong)param_1 + 0x3ec) + *(float *)((longlong)param_1 + 0x3ec) +
                  0.5) >> 1 <= (int)param_1[0x133])) &&
     ((int)ROUND(*(float *)(param_1 + 0x7e) + *(float *)(param_1 + 0x7e) + 0.5) >> 1 <=
      *(int *)((longlong)param_1 + 0x99c))) {
    puVar10 = (undefined4 *)0x0;
    local_10c = 0;
  }
  else {
    local_f8 = (undefined4)param_1[0x132];
    uStack_f4 = *(undefined4 *)((longlong)param_1 + 0x994);
    uStack_f0 = (undefined4)param_1[0x133];
    uStack_ec = *(undefined4 *)((longlong)param_1 + 0x99c);
    puVar10 = &local_f8;
    local_10c = 1;
  }
  bVar7 = local_78 != 0 & (param_5 | param_7);
  if (bVar7 == 1) {
    if (((param_5 == 0) || (*(char *)(local_78 + 0x30) != '\0')) ||
       (uVar6 = 1, *(char *)(local_78 + 0x31) == '\0')) {
      uVar6 = 0;
    }
    if ((param_7 != 0) && (*(byte *)(local_78 + 0x30) < 2)) {
      uVar4 = (uint)uVar6 + 2;
      if ((byte)(*(byte *)(local_78 + 0x30) + *(char *)(local_78 + 0x31)) < 2) {
        uVar4 = (uint)uVar6;
      }
      uVar6 = (ulonglong)uVar4;
    }
LAB_14003a63d:
    local_108 = uVar6;
    local_100 = local_78;
    if ((int)param_1[0x32] != 0) {
      lVar8 = param_1[0x33];
      if (lVar8 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar8 = param_1[0x33];
      }
      FUN_144ad5b2c(param_1 + 0x31,lVar8,param_1 + 7);
    }
    if (param_2 != 0 && 0 < iVar9) {
      lVar8 = 0;
      do {
        lVar5 = local_b8[lVar8];
        if ((lVar5 != 0) && (*(char *)(param_2 + lVar8) == '\x01')) {
          lVar3 = param_1[0x33];
          if (lVar3 == 0) {
            (**(code **)(*param_1 + 8))(param_1);
            lVar3 = param_1[0x33];
          }
          *(int *)(lVar3 + 0x1c0) = *(int *)(lVar3 + 0x1c0) + 1;
          local_128 = puVar10;
          (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x180))
                    (*(longlong **)(lVar3 + 0x28),*(undefined8 *)(lVar5 + 0x38),param_4,local_10c);
          uVar2 = *(undefined8 *)(lVar5 + 0x20);
          lVar5 = param_1[0x33];
          if (lVar5 == 0) {
            (**(code **)(*param_1 + 8))(param_1);
            lVar5 = param_1[0x33];
          }
          FUN_1447093fc(lVar5,uVar2);
          iVar9 = local_70;
        }
        lVar8 = lVar8 + 1;
        param_4 = param_4 + 0x10;
      } while (lVar8 < iVar9);
    }
    if (bVar7 != 0) {
      lVar8 = param_1[0x33];
      if (lVar8 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar8 = param_1[0x33];
      }
      lVar5 = local_100;
      *(int *)(lVar8 + 0x1c0) = *(int *)(lVar8 + 0x1c0) + 1;
      local_120 = local_10c;
      local_128 = (undefined4 *)CONCAT71(local_128._1_7_,param_8);
      local_118 = puVar10;
      (**(code **)(**(longlong **)(lVar8 + 0x28) + 0x178))
                (*(longlong **)(lVar8 + 0x28),*(undefined8 *)(local_100 + 0x38),local_108,param_6);
      uVar2 = *(undefined8 *)(lVar5 + 0x20);
      lVar8 = param_1[0x33];
      if (lVar8 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar8 = param_1[0x33];
      }
      FUN_1447093fc(lVar8,uVar2);
    }
    if (((param_1[0x33] != 0) &&
        (0 < (int)DAT_14c760b84 && *(int *)((longlong)param_1 + 0x1c4) == 0)) &&
       (DAT_14c760b84 < *(uint *)(param_1[0x33] + 0x1c0))) {
      (**(code **)(*param_1 + 0x10))(param_1);
    }
  }
  else {
    uVar6 = 0;
    if (param_2 != 0 && 0 < iVar9) goto LAB_14003a63d;
  }
  if (((*(char *)((longlong)param_1 + 0x14) == '\x01') &&
      (*(char *)(param_1[0x5d] + 0x48) == '\x01')) &&
     (lVar8 = *(longlong *)(param_1[0x5d] + 0x60), lVar8 != 0)) {
    piVar1 = (int *)(lVar8 + 0x10);
    *piVar1 = *piVar1 + 1;
  }
LAB_14003a823:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14003a886 FUN_14003a886 body=1248 status=ok
// SIG undefined FUN_14003a886(void)

undefined8
FUN_14003a886(longlong param_1,ulonglong *param_2,longlong param_3,undefined4 param_4,byte param_5,
             int param_6,int param_7,int param_8)

{
  int *piVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 unaff_RBP;
  char cVar9;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  ulonglong local_1b8;
  ulonglong *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  ulonglong local_198 [3];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  longlong lStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined2 local_107;
  ulonglong local_100 [14];
  undefined1 local_90;
  undefined2 local_8f;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  ulonglong uVar10;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar4 = **(longlong **)(param_1 + 0x1b0);
  if ((param_5 & 6) == 0) {
    if (param_8 == 0) {
      uVar7 = *(undefined8 *)(param_3 + 0x88);
      *(byte *)(param_3 + 0x1d4) = *(byte *)(param_3 + 0x1d4) | 2;
      local_1b0 = local_100;
      local_100[0] = 0;
      uVar3 = **(undefined4 **)(param_3 + 0x38);
      local_1b8 = (ulonglong)(uint)(param_7 + param_6);
      local_1a8 = 0;
      local_1a0 = 0;
      iVar6 = FUN_14631a284(lVar4,3,uVar3,uVar3);
      if (iVar6 < 0) {
        local_1b0 = local_198;
        local_198[0] = 0;
        local_198[1] = 0;
        local_1b8 = 0;
        FUN_145763094(iVar6,
                      "Adapter.CreateBuffer(D3D12_HEAP_TYPE_READBACK, Node, Node, Offset + Size, &StagingBuffer, nullptr)"
                      ,".\\Runtime/D3D12RHI/Private/D3D12Buffer.cpp",0x23a);
      }
      uStack_178 = local_100[0];
      local_160 = CONCAT44(param_7,param_6);
      local_170 = uVar7;
      lStack_168 = param_3;
      local_180._0_4_ = uVar3;
      if (*(char *)((longlong)param_2 + 100) == '\x01') {
        FUN_14315e066(&local_180,param_2);
      }
      else {
        puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar11 + 7;
        if ((undefined8 *)param_2[1] < puVar8) {
          FUN_140023dd8(param_2,0x40);
          puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar8 = puVar11 + 7;
        }
        *param_2 = (ulonglong)puVar8;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar11;
        param_2[6] = (ulonglong)(puVar11 + 1);
        puVar11[1] = 0;
        *puVar11 = &PTR_LAB_14a349050;
        *(undefined4 *)(puVar11 + 2) = (undefined4)local_180;
        *(undefined4 *)((longlong)puVar11 + 0x14) = local_180._4_4_;
        *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_178;
        *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_178._4_4_;
        puVar11[4] = local_170;
        puVar11[5] = lStack_168;
        puVar11[6] = local_160;
      }
      local_180 = 0;
      uStack_178 = uStack_178 & 0xffffffff00000000;
      FUN_14007658c(&DAT_14ca850c8,&local_180,5);
      (**(code **)(*DAT_14ca83900 + 0x370))();
      local_1b8 = 0;
      FUN_1400daf10(param_3 + 0x140,local_100[0],param_7,0);
      uVar7 = *(undefined8 *)(param_3 + 400);
    }
    else {
      uVar7 = FUN_14008f39a(*(undefined8 *)
                             (lVar4 + 0x4e0 +
                             (ulonglong)(uint)(*(undefined4 **)(param_3 + 0x38))[2] * 8),param_7,
                            0x200,param_3 + 0x140);
    }
  }
  else if ((param_8 == 2) || ((*(uint *)(param_3 + 0x1d4) & 4) != 0)) {
    uVar7 = *(undefined8 *)(param_3 + 200);
  }
  else {
    local_100[0] = *(ulonglong *)(param_3 + 0x38);
    local_100[1] = 0;
    local_100[2] = 0;
    local_100[3] = 0;
    local_100[10] = 0;
    local_100[0xb] = 0;
    local_100[0xc] = 0;
    local_100[0xd] = 0;
    local_90 = 0;
    local_8f = 0xff;
    local_100[4] = 0;
    local_100[5] = 0;
    local_100[6] = 0;
    local_100[7] = 0;
    local_100[8] = 0;
    local_100[9] = 0;
    uVar7 = FUN_14008f39a(*(undefined8 *)
                           (lVar4 + 0x4e0 + (ulonglong)*(uint *)(local_100[0] + 8) * 8),param_4,
                          *(undefined4 *)(param_3 + 0x1d8),local_100);
    uStack_178 = local_100[0];
    local_170 = 0;
    lStack_168 = 0;
    local_160 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    local_107 = 0xff;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_180 = param_3;
    FUN_14488e164(&uStack_178,local_100);
    cVar9 = DAT_14ca84e23 * '\x02' + '\x01';
    uVar10 = CONCAT71((int7)((ulonglong)local_100 >> 8),cVar9);
    uVar2 = *(undefined1 *)((longlong)param_2 + 0x69);
    FUN_14002049c(param_2,uVar10 & 0xffffffff);
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      do {
        bVar5 = (byte)uVar10;
        uVar10 = (ulonglong)((-bVar5 & bVar5) == 2);
        (&local_78)[uVar10] = param_2[uVar10 + 10];
        bVar5 = bVar5 - 1 & bVar5;
        uVar10 = (ulonglong)bVar5;
      } while (bVar5 != 0);
      local_88 = (undefined4)local_78;
      uStack_84 = local_78._4_4_;
      uStack_80 = (undefined4)uStack_70;
      uStack_7c = uStack_70._4_4_;
      FUN_14315d7dc(&local_180);
    }
    else {
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar11 + 0x13;
      if ((undefined8 *)param_2[1] < puVar8) {
        FUN_140023dd8(param_2,0xa0);
        puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar11 + 0x13;
      }
      *param_2 = (ulonglong)puVar8;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar11;
      param_2[6] = (ulonglong)(puVar11 + 1);
      puVar11[1] = 0;
      *puVar11 = &PTR_FUN_14a349048;
      puVar11[2] = local_180;
      puVar11[3] = uStack_178;
      puVar11[4] = 0;
      puVar11[5] = 0;
      puVar11[6] = 0;
      puVar11[0xd] = 0;
      puVar11[0xe] = 0;
      puVar11[0xf] = 0;
      puVar11[0x10] = 0;
      *(undefined1 *)(puVar11 + 0x11) = 0;
      *(undefined2 *)((longlong)puVar11 + 0x89) = 0xff;
      puVar11[7] = 0;
      puVar11[8] = 0;
      puVar11[9] = 0;
      puVar11[10] = 0;
      puVar11[0xb] = 0;
      puVar11[0xc] = 0;
      FUN_14488e164(puVar11 + 3,&uStack_178);
      *(char *)(puVar11 + 0x12) = cVar9;
    }
    FUN_14002049c(param_2,CONCAT71((int7)(CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),0xff) >> 8),
                                   uVar2) & 0xffffffff);
    FUN_14494c7ac(param_2,&local_78,1);
    if (local_78 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_78 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_78)(local_78,1);
      }
    }
    FUN_144902b9c(&uStack_178);
    FUN_144902b9c(local_100);
  }
  *(int *)(param_3 + 0x1cc) = param_6;
  *(int *)(param_3 + 0x1d0) = param_7;
  *(uint *)(param_3 + 0x1d4) = (*(uint *)(param_3 + 0x1d4) & 0xfffffffa) + 1;
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14003ad68 FUN_14003ad68 body=21 status=ok
// SIG undefined FUN_14003ad68(void)

undefined8 FUN_14003ad68(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14003ad8e FUN_14003ad8e body=324 status=ok
// SIG undefined FUN_14003ad8e(void)

uint * FUN_14003ad8e(longlong param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  PSRWLOCK SRWLock;
  void *_Src;
  PVOID pvVar4;
  uint uVar5;
  size_t _Size;
  uint uVar6;
  
  SRWLock = *(PSRWLOCK *)(param_1 + 0x18);
  uVar2 = *(undefined2 *)((longlong)param_4 + 0x1c);
  _Src = (void *)*param_4;
  _Size = (size_t)*(uint *)(param_4 + 1);
  bVar1 = *(byte *)((longlong)param_4 + 0xc);
  uVar5 = (*(uint *)(param_4 + 1) << (bVar1 & 0x1f)) + 3 & 0xfffffffe;
  AcquireSRWLockExclusive(SRWLock);
  uVar6 = *(uint *)((longlong)&SRWLock[1].Ptr + 4);
  if (0x20000 - uVar6 < uVar5) {
    FUN_14003aed2(SRWLock);
    uVar6 = *(uint *)((longlong)&SRWLock[1].Ptr + 4);
  }
  *(uint *)((longlong)&SRWLock[1].Ptr + 4) = uVar5 + uVar6;
  uVar5 = *(uint *)&SRWLock[1].Ptr;
  ReleaseSRWLockExclusive(SRWLock);
  pvVar4 = SRWLock[(ulonglong)uVar5 + 2].Ptr;
  *(undefined2 *)((longlong)pvVar4 + (ulonglong)(uVar6 & 0xfffffffe)) = uVar2;
  if ((bVar1 & 1) != 0) {
    _Size = _Size * 2;
  }
  memcpy((void *)((longlong)pvVar4 + (ulonglong)(uVar6 & 0xfffffffe) + 2),_Src,_Size);
  uVar6 = uVar5 << 0x10 | uVar6 >> 1;
  *param_2 = uVar6;
  *param_3 = uVar6 | *(uint *)(param_4 + 3);
  iVar3 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar3 + 1;
  if (*(int *)(param_1 + 0xc) * 9 + 9U < (uint)((iVar3 * 2 + 2) * 5)) {
    FUN_14003af38(param_1,*(int *)(param_1 + 0xc) * 2 + 2);
  }
  LOCK();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (uint)*(byte *)((longlong)param_4 + 0xc);
  UNLOCK();
  return param_2;
}



// FUNCTION 14003aed2 FUN_14003aed2 body=101 status=ok
// SIG undefined FUN_14003aed2(void)

void FUN_14003aed2(longlong param_1)

{
  ushort *puVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(uint *)(param_1 + 0xc) + 2 < 0x20001) {
    puVar1 = (ushort *)
             (*(longlong *)(param_1 + 0x10 + (ulonglong)*(uint *)(param_1 + 8) * 8) +
             (ulonglong)*(uint *)(param_1 + 0xc));
    *puVar1 = *puVar1 & 0x3f;
  }
  uVar2 = *(int *)(param_1 + 8) + 1;
  *(uint *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(longlong *)(param_1 + 0x10 + (ulonglong)uVar2 * 8) == 0) {
    uVar3 = FUN_14001cc68(0x20000,2);
    *(undefined8 *)(param_1 + 0x10 + (ulonglong)*(uint *)(param_1 + 8) * 8) = uVar3;
  }
  return;
}



// FUNCTION 14003af38 FUN_14003af38 body=305 status=ok
// SIG undefined FUN_14003af38(void)

void FUN_14003af38(longlong param_1,uint param_2)

{
  int *piVar1;
  void *_Dst;
  int iVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [32];
  int local_58 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0xc);
  piVar1 = *(int **)(param_1 + 0x10);
  _Dst = (void *)FUN_14001cc68((ulonglong)param_2 << 2);
  *(void **)(param_1 + 0x10) = _Dst;
  uVar6 = 0;
  memset(_Dst,0,(ulonglong)param_2 << 2);
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = param_2 - 1;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  iVar2 = iVar2 + 1;
  if (iVar2 != 0) {
    piVar3 = piVar1;
    do {
      while (*piVar3 == 0) {
LAB_14003b010:
        piVar3 = piVar3 + 1;
        if (piVar3 == piVar1 + iVar2) {
          if ((int)uVar6 != 0) {
            lVar5 = 0;
            do {
              FUN_144a84710(param_1,*(undefined4 *)((longlong)local_58 + lVar5));
              lVar5 = lVar5 + 4;
            } while ((longlong)(int)uVar6 * 4 != lVar5);
          }
          goto LAB_14003b03e;
        }
      }
      local_58[uVar6] = *piVar3;
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
      if (uVar4 != 8) goto LAB_14003b010;
      lVar5 = 0;
      do {
        FUN_144a84710(param_1,*(undefined4 *)((longlong)local_58 + lVar5));
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0x20);
      piVar3 = piVar3 + 1;
      uVar6 = 0;
    } while (piVar3 != piVar1 + iVar2);
  }
LAB_14003b03e:
  FUN_1400020a8(piVar1);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14003b06a FUN_14003b06a body=2378 status=ok
// SIG undefined FUN_14003b06a(void)

undefined8 FUN_14003b06a(longlong param_1,double *param_2,longlong param_3)

{
  double dVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  char cVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  undefined8 in_XMM2_Qb;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  double dVar34;
  undefined4 uVar35;
  uint uVar36;
  undefined1 auStack_2d8 [32];
  undefined8 local_2b8;
  double *local_2b0;
  double *local_2a8;
  double *local_2a0;
  undefined4 *local_298;
  longlong local_290;
  undefined8 *local_288;
  longlong local_280;
  undefined4 local_278;
  uint uStack_274;
  double dStack_270;
  double local_268;
  double dStack_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  double local_228;
  double dStack_220;
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined4 local_194;
  double local_190;
  double local_188 [2];
  double local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined2 local_150;
  undefined1 local_148 [16];
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  float local_118;
  double local_108 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  dVar5 = *param_2;
  uVar14 = CONCAT71((int7)((DAT_14c707940 ^ (ulonglong)auStack_2d8) >> 8),1);
  if (((dVar5 != 0.0) && (*(int *)((longlong)dVar5 + 0x58) == *(int *)(param_2 + 2))) &&
     (iVar3 = *(int *)((longlong)dVar5 + 0x88), 0 < iVar3)) {
    local_268 = (double)*(float *)((longlong)dVar5 + 0x4c);
    dVar23 = (double)*(float *)((longlong)dVar5 + 0x48);
    auVar24._0_8_ = (double)*(float *)((longlong)dVar5 + 0x44);
    auVar29._0_8_ = (double)*(float *)((longlong)dVar5 + 0x40);
    auVar29._8_8_ = in_XMM2_Qb;
    local_280 = (longlong)dVar5 + 0x78;
    uVar33 = SUB84(auVar24._0_8_,0);
    auVar24._8_4_ = SUB84(dVar23,0);
    auVar24._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    uVar35 = (undefined4)((ulonglong)local_268 >> 0x20);
    dVar1 = *(double *)((longlong)dVar5 + 0x30);
    dVar10 = *(double *)((longlong)dVar5 + 0x20);
    dVar11 = *(double *)((longlong)dVar5 + 0x28);
    local_290 = param_1 + 0x80;
    uVar36 = (uint)((ulonglong)auVar24._0_8_ >> 0x20) ^ 0x80000000;
    dVar9 = dVar23 * -1.0;
    dVar27 = local_268 * 1.0;
    local_208 = -auVar29._0_8_;
    local_248._8_4_ = SUB84(local_268,0);
    local_248._0_8_ = dVar23;
    local_248._12_4_ = uVar35;
    auVar8._8_4_ = SUB84(local_268,0);
    auVar8._0_8_ = dVar23;
    auVar8._12_4_ = uVar35;
    local_218 = blendps(auVar29,auVar8,0xc);
    local_288 = (undefined8 *)(param_1 + 0x58);
    lVar20 = 0;
    local_258._8_4_ = SUB84(dVar27,0);
    local_258._0_8_ = dVar27;
    local_258._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    dVar23 = dVar27;
    dVar32 = dVar9;
    local_278 = uVar33;
    uStack_274 = uVar36;
    dStack_270 = dVar9;
    dStack_260 = local_268;
    local_238 = auVar24;
    local_228 = auVar29._0_8_;
    dStack_220 = auVar24._0_8_;
    dStack_200 = dVar27;
    do {
      lVar16 = *(longlong *)((longlong)dVar5 + 0x80);
      if (*(longlong *)((longlong)dVar5 + 0x80) == 0) {
        lVar16 = local_280;
      }
      lVar6 = *(longlong *)(lVar16 + lVar20 * 8);
      plVar7 = *(longlong **)(lVar6 + 0x10);
      if (iVar3 < 2) {
LAB_14003b35e:
        cVar12 = '\x02';
        if (((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 4) == 0) ||
           (cVar12 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                               (*(longlong **)(param_1 + 0x98),local_290,lVar6,dVar5),
           cVar12 != '\0')) {
          local_178 = (double)CONCAT44(local_178._4_4_,0xffffffff);
          local_160 = 0;
          local_170 = 0;
          uStack_168 = 0;
          local_158 = 0xffffffff;
          local_150 = 0;
          local_188[1] = *(double *)(lVar16 + lVar20 * 8);
          local_190 = 0.0;
          local_194 = 0xffffffff;
          uVar2 = *(ushort *)(param_1 + 0x50);
          dVar21 = *(double *)(param_1 + 0x20);
          dVar28 = *(double *)(param_1 + 0x28);
          dVar22 = dVar28 * -auVar29._0_8_ - (double)CONCAT44(uVar36,uVar33) * dVar21;
          dVar26 = *(double *)(param_1 + 0x30) * -auVar24._0_8_ - dVar32 * dVar28;
          dVar31 = dVar21 * dVar9 - *(double *)(param_1 + 0x30) * local_208;
          dVar26 = dVar26 + dVar26;
          dVar31 = dVar31 + dVar31;
          dVar22 = dVar22 + dVar22;
          local_1c8 = dVar22 * dVar27 + *(double *)(param_1 + 0x30) +
                      (dVar31 * -auVar29._0_8_ - dVar26 * (double)CONCAT44(uVar36,uVar33));
          local_1d8 = (dVar22 * -auVar24._0_8_ - dVar31 * dVar32) + dVar27 * dVar26 + dVar21;
          dStack_1d0 = (dVar9 * dVar26 - local_208 * dVar22) + dVar23 * dVar31 + dVar28;
          dVar31 = *(double *)(param_1 + 8) - dVar10;
          dVar34 = *(double *)(param_1 + 0x10) - dVar11;
          dVar21 = *(double *)(param_1 + 0x18) - dVar1;
          dVar28 = dVar34 * -auVar29._0_8_ - (double)CONCAT44(uVar36,uVar33) * dVar31;
          dVar22 = dVar21 * -auVar24._0_8_ - dVar32 * dVar34;
          dVar26 = dVar31 * dVar9 - dVar21 * local_208;
          dVar22 = dVar22 + dVar22;
          dVar26 = dVar26 + dVar26;
          dVar28 = dVar28 + dVar28;
          local_1e8 = dVar28 * dVar27 + dVar21 +
                      (dVar26 * -auVar29._0_8_ - dVar22 * (double)CONCAT44(uVar36,uVar33));
          local_1f8 = (dVar28 * -auVar24._0_8_ - dVar26 * dVar32) + dVar27 * dVar22 + dVar31;
          dStack_1f0 = (dVar9 * dVar22 - local_208 * dVar28) + dVar23 * dVar26 + dVar34;
          local_298 = &local_194;
          local_2a0 = local_108;
          local_2a8 = &local_1b8;
          local_2b0 = &local_190;
          local_2b8 = 0;
          local_188[0] = dVar5;
          cVar13 = (**(code **)(*plVar7 + 0xa0))
                             (plVar7,&local_1f8,&local_1d8,*(undefined8 *)(param_3 + 0x20));
          if (cVar13 != '\0') {
            dVar23 = dStack_1b0 * local_228 - (double)local_238._0_8_ * local_1b8;
            dVar27 = local_1a8 * dStack_220 - (double)local_238._8_8_ * dStack_1b0;
            dVar32 = local_1b8 * (double)local_248._0_8_ - local_1a8 * (double)local_218._0_8_;
            dVar27 = dVar27 + dVar27;
            dVar32 = dVar32 + dVar32;
            dVar23 = dVar23 + dVar23;
            local_148._0_8_ =
                 (dVar23 * dStack_220 - dVar32 * (double)local_238._8_8_) +
                 local_268 * dVar27 + local_1b8 + dVar10;
            local_148._8_8_ =
                 ((double)local_248._0_8_ * dVar27 - (double)local_218._0_8_ * dVar23) +
                 dStack_260 * dVar32 + dStack_1b0 + dVar11;
            dVar21 = local_108[1] * local_228 - (double)local_238._0_8_ * local_108[0];
            dVar28 = local_108[2] * dStack_220 - (double)local_238._8_8_ * local_108[1];
            dVar22 = local_108[0] * (double)local_248._0_8_ - local_108[2] * (double)local_218._0_8_
            ;
            dVar28 = dVar28 + dVar28;
            dVar22 = dVar22 + dVar22;
            dVar21 = dVar21 + dVar21;
            local_118 = (float)local_190;
            local_138 = dVar23 * local_268 + local_1a8 +
                        (dVar32 * local_228 - dVar27 * (double)local_238._0_8_) + dVar1;
            local_130 = (dVar21 * dStack_220 - dVar22 * (double)local_238._8_8_) +
                        local_268 * dVar28 + local_108[0];
            dStack_128 = ((double)local_248._0_8_ * dVar28 - (double)local_218._0_8_ * dVar21) +
                         dStack_260 * dVar22 + local_108[1];
            local_120 = dVar21 * local_268 + local_108[2] +
                        (dVar22 * local_228 - dVar28 * (double)local_238._0_8_);
            local_150 = 0x404;
            if (0.0 < local_190) {
              local_150 = 7;
            }
            if ((uVar2 & 0x200) != 0) {
              local_150 = 7;
            }
            local_178 = (double)CONCAT44(local_178._4_4_,local_194);
            local_160 = local_288[2];
            local_170 = *local_288;
            uStack_168 = local_288[1];
            if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 8) != 0) {
              cVar12 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                                 (*(longlong **)(param_1 + 0x98),local_290,local_188);
            }
            dVar32 = dStack_270;
            uVar36 = uStack_274;
            uVar33 = local_278;
            dVar27 = (double)local_258._0_8_;
            dVar23 = (double)local_258._8_8_;
            if (cVar12 != '\0') {
              if ((cVar12 == '\x02') || (*(char *)(param_1 + 0x52) != '\0')) {
                pdVar17 = *(double **)(param_1 + 0x70);
LAB_14003b845:
                pdVar18 = local_188;
                pdVar19 = pdVar17;
                for (lVar16 = 0x10; pdVar19 = pdVar19 + 1, lVar16 != 0; lVar16 = lVar16 + -1) {
                  *pdVar19 = *pdVar18;
                  pdVar18 = pdVar18 + 1;
                }
                *(undefined1 *)((longlong)pdVar17 + 0x8c) = 1;
                dVar21 = 0.0;
                if (0.0 <= local_190) {
                  dVar21 = local_190;
                }
                *(double *)(param_3 + 0x20) = dVar21;
                if ((dVar21 != 0.0) || (NAN(dVar21))) {
                  *(double *)(param_3 + 0x28) = 1.0 / dVar21;
                }
                if ((dVar21 != 0.0) || (NAN(dVar21))) goto LAB_14003b899;
              }
              else {
                pdVar17 = *(double **)(param_1 + 0x70);
                if (*(char *)((longlong)pdVar17 + 0x8d) != '\0') goto LAB_14003b845;
                iVar4 = *(int *)(pdVar17 + 0x813);
                *(uint *)(pdVar17 + 0x813) = iVar4 + 1U;
                if (*(uint *)((longlong)pdVar17 + 0x409c) < iVar4 + 1U) {
                  FUN_146ef9b86(pdVar17 + 0x12,iVar4);
                }
                pdVar19 = pdVar17 + 0x12;
                if ((double *)pdVar17[0x812] != (double *)0x0) {
                  pdVar19 = (double *)pdVar17[0x812];
                }
                pdVar17 = local_188;
                pdVar19 = pdVar19 + (longlong)iVar4 * 0x10;
                for (lVar16 = 0x10; lVar16 != 0; lVar16 = lVar16 + -1) {
                  *pdVar19 = *pdVar17;
                  pdVar17 = pdVar17 + 1;
                  pdVar19 = pdVar19 + 1;
                }
LAB_14003b899:
                if (*(char *)(param_1 + 0x52) == '\0') goto LAB_14003b8a8;
              }
              uVar14 = 0;
              goto LAB_14003b92f;
            }
          }
        }
      }
      else {
        local_188[0] = *(double *)(lVar6 + 0x18) - *(double *)(param_1 + 8);
        local_188[1] = *(double *)(lVar6 + 0x20) - *(double *)(param_1 + 0x10);
        local_178 = *(double *)(lVar6 + 0x28) - *(double *)(param_1 + 0x18);
        local_108[0] = *(double *)(lVar6 + 0x30) - *(double *)(param_1 + 8);
        local_108[1] = *(double *)(lVar6 + 0x38) - *(double *)(param_1 + 0x10);
        local_108[2] = *(double *)(lVar6 + 0x40) - *(double *)(param_1 + 0x18);
        auVar30 = ZEXT816(0);
        lVar15 = 0;
        auVar25 = ZEXT816(0x7fefffffffffffff);
        do {
          if (*(char *)(param_3 + 0x30 + lVar15) == '\x01') {
            if (0.0 < local_188[lVar15]) goto LAB_14003b8a8;
            dVar28 = 0.0;
            dVar21 = 1.79769313486232e+308;
            if (local_108[lVar15] <= 0.0 && local_108[lVar15] != 0.0) goto LAB_14003b8a8;
          }
          else {
            dVar21 = *(double *)(param_3 + 8 + lVar15 * 8);
            dVar28 = local_188[lVar15] * dVar21;
            dVar21 = dVar21 * local_108[lVar15];
          }
          dVar22 = dVar21;
          if (dVar28 <= dVar21) {
            dVar22 = dVar28;
          }
          if (auVar30._0_8_ <= dVar22) {
            auVar30._0_8_ = dVar22;
          }
          if (dVar28 <= dVar21) {
            dVar28 = dVar21;
          }
          if (dVar28 <= auVar25._0_8_) {
            auVar25._0_8_ = dVar28;
          }
          if (auVar25._0_8_ < auVar30._0_8_) goto LAB_14003b8a8;
          lVar15 = lVar15 + 1;
        } while (lVar15 != 3);
        if ((auVar30._0_8_ <= *(double *)(param_3 + 0x20)) && (0.0 <= auVar25._0_8_))
        goto LAB_14003b35e;
      }
LAB_14003b8a8:
      lVar20 = lVar20 + 1;
    } while (lVar20 < *(int *)((longlong)dVar5 + 0x88));
    uVar14 = CONCAT71((int7)(int3)((uint)*(int *)((longlong)dVar5 + 0x88) >> 8),1);
  }
LAB_14003b92f:
  if ((local_f0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 14003b9b6 FUN_14003b9b6 body=1664 status=ok
// SIG undefined FUN_14003b9b6(void)

void FUN_14003b9b6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ushort *puVar6;
  void *pvVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_128 [40];
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong **local_88;
  ulonglong *local_80;
  longlong local_78;
  undefined4 local_70;
  longlong *local_68;
  int local_60;
  undefined4 uStack_5c;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = *(longlong *)(param_1 + 0x288);
  if ((lVar4 == 0) || (*(int *)(param_1 + 0x208) == 0)) goto LAB_14003ba50;
  FUN_1448d5e3c(&local_68,param_1 + 0x208);
  lVar5 = local_68[0x90];
  AcquireSRWLockShared((PSRWLOCK)(lVar5 + 0xc0));
  plVar10 = (longlong *)CONCAT44(uStack_5c,local_60);
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
  if (*(int *)(lVar4 + 0xac) != *(int *)(lVar5 + 0xb8)) {
    *(int *)(lVar4 + 0xac) = *(int *)(lVar5 + 0xb8);
    if (*(int *)(lVar4 + 0x14c) != *(int *)(lVar5 + 0xc)) {
      *(undefined1 *)(lVar4 + 0x148) = *(undefined1 *)(lVar5 + 8);
      *(undefined4 *)(lVar4 + 0x14c) = *(undefined4 *)(lVar5 + 0xc);
    }
    *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) & 0xfd;
    iVar3 = *(int *)(lVar5 + 0x20);
    iVar11 = *(int *)(lVar4 + 0x160);
    iVar9 = *(int *)(lVar4 + 0x164);
    if (iVar3 == iVar11) {
      if (iVar9 == 0) {
        iVar9 = 0;
        goto LAB_14003bd5d;
      }
    }
    else {
LAB_14003bd5d:
      *(int *)(lVar4 + 0x160) = iVar3;
      *(int *)(lVar4 + 0x164) = iVar9 + 1;
    }
    FUN_1456bab0c(*(undefined8 *)(lVar4 + 0x1d0),*(undefined4 *)(lVar4 + 0x1d8));
    *(undefined4 *)(lVar4 + 0x1d8) = 0;
    if (*(int *)(lVar4 + 0x1dc) != 0) {
      FUN_148eb9ea4(lVar4 + 0x1d0);
    }
    *(int *)(lVar4 + 0x1e0) = *(int *)(lVar4 + 0x1e0) + 1;
    if ((longlong)*(int *)(lVar5 + 0x80) != 0) {
      local_f0 = (longlong)*(int *)(lVar5 + 0x80) * 0x88;
      local_100 = *(longlong *)(lVar5 + 0x78) + 0x48;
      do {
        *(int *)(lVar4 + 0x1e0) = *(int *)(lVar4 + 0x1e0) + 1;
        local_f8 = FUN_148eb9ed4(lVar4 + 0x1d0);
        FUN_144a787a6(local_f8 + 0x10,local_100 + -0x30);
        FUN_144a787a6(local_f8,local_100);
        local_100 = local_100 + 0x88;
        local_f0 = local_f0 + -0x88;
      } while (local_f0 != 0);
    }
    plVar10 = (longlong *)FUN_140e82300();
    local_a8 = (longlong *)*plVar10;
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 8))();
    }
    local_a0 = (undefined4)plVar10[1];
    if (iVar3 == 0) {
      if (iVar11 != 4) {
switchD_14003bc9d_caseD_5:
        FUN_140ac6c96(&DAT_14cbdf8a8,&local_a8);
        FUN_1449a0272(lVar4 + 0x1a0,&DAT_14cbdf7c0);
      }
    }
    else {
      switch(iVar3) {
      case 1:
      case 2:
        FUN_140c12dec(lVar4 + 0x1a0,&DAT_149e02088);
        pvVar7 = DAT_14cbdf780;
        iVar3 = *(int *)(lVar4 + 0x1d8);
        if (0 < iVar3) {
          if (iVar3 == 1) {
            *(int *)(lVar4 + 0x1e0) = *(int *)(lVar4 + 0x1e0) + 1;
            FUN_144a2b0a4(*(undefined8 *)(lVar4 + 0x1d0),&local_68);
          }
          else {
            local_68 = (longlong *)0x0;
            lVar13 = (longlong)DAT_14cbdf788;
            local_60 = DAT_14cbdf788;
            if (lVar13 == 0) {
              uStack_5c = 0;
            }
            else {
              FUN_1446dd670(&local_68,DAT_14cbdf788,0);
              memcpy(local_68,pvVar7,lVar13 * 2);
            }
          }
          FUN_148eabc60(lVar4 + 0x180,&local_68);
          if (local_68 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (iVar3 == 1) {
            *(int *)(lVar4 + 0x1e0) = *(int *)(lVar4 + 0x1e0) + 1;
            FUN_140009b9a(&local_68,*(longlong *)(lVar4 + 0x1d0) + 0x10);
            FUN_140008f88(&local_a8,&local_68);
            if (local_68 != (longlong *)0x0) {
              (**(code **)(*local_68 + 0x10))();
            }
          }
          else {
            FUN_140ac6c96(&DAT_14cbdf7e0,&local_a8);
          }
        }
        break;
      case 3:
        FUN_140ac6c96(&DAT_14cbdf830,&local_a8);
        iVar3 = *(int *)(lVar5 + 0x58);
        if (iVar3 == *(int *)(lVar4 + 0x198)) {
          iVar11 = 1;
          if (*(int *)(lVar4 + 0x19c) == 0) goto LAB_14003be0e;
        }
        else {
          iVar11 = *(int *)(lVar4 + 0x19c) + 1;
LAB_14003be0e:
          *(int *)(lVar4 + 0x198) = iVar3;
          *(int *)(lVar4 + 0x19c) = iVar11;
        }
        puVar12 = &DAT_14cbdf7a0;
        if (0 < iVar3) {
          puVar12 = &DAT_14cbdf790;
        }
        FUN_1449a0272(lVar4 + 0x1a0,puVar12);
        *(byte *)(param_1 + 0x8e) = *(byte *)(param_1 + 0x8e) | 2;
        break;
      case 4:
        local_b8 = (void *)0x0;
        local_b0 = *(int *)(lVar5 + 0x48);
        lVar13 = (longlong)local_b0;
        pvVar7 = *(void **)(lVar5 + 0x40);
        if (lVar13 == 0) {
          local_ac = 0;
LAB_14003bdcb:
          FUN_140ac6c96(&DAT_14cbdf858,&local_a8);
        }
        else {
          FUN_1446dd670(&local_b8,local_b0,0);
          memcpy(local_b8,pvVar7,lVar13 * 2);
          if (local_b0 < 2) goto LAB_14003bdcb;
          FUN_140ac6c96(&DAT_14cbdf880,&local_a8);
          FUN_140009b9a(local_d8,&local_b8);
          FUN_14023409e(&local_e8,&local_a8,1);
          local_68 = (longlong *)CONCAT44(local_68._4_4_,4);
          FUN_14023423e(local_58,local_d8);
          local_80 = &local_48;
          local_88 = &local_68;
          FUN_14010d304(&local_78);
          local_98 = local_e8;
          local_90 = local_e0;
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_c8,&local_98,&local_78);
          FUN_14007f2db(local_78,local_70);
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          if (local_58[0] != (longlong *)0x0) {
            (**(code **)(*local_58[0] + 0x10))();
          }
          if (local_e0 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_e0 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar2 = (int *)((longlong)local_e0 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_e0 + 0x10))(local_e0);
              }
            }
          }
          if (local_d8[0] != (longlong *)0x0) {
            (**(code **)(*local_d8[0] + 0x10))();
          }
          FUN_140008f88(&local_a8,local_c8);
          if (local_c8[0] != (longlong *)0x0) {
            (**(code **)(*local_c8[0] + 0x10))();
          }
        }
        FUN_1449a0272(lVar4 + 0x1a0,&DAT_14cbdf7b0);
        if (local_b8 != (void *)0x0) {
          FUN_1400020a8();
        }
        break;
      case 5:
        goto switchD_14003bc9d_caseD_5;
      }
    }
    cVar8 = FUN_144a7c5f6(&local_a8);
    if (cVar8 == '\0') {
      FUN_1456bab4c(lVar4 + 0x168,&local_a8);
    }
    FUN_1456babc0(param_1);
    puVar6 = *(ushort **)(lVar4 + 0x80);
    if (puVar6 != (ushort *)0x0) {
      *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
    }
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar5 + 0xc0));
LAB_14003ba50:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14003c038 FUN_14003c038 body=67 status=ok
// SIG undefined FUN_14003c038(void)

ulonglong FUN_14003c038(longlong param_1,undefined8 param_2)

{
  char cVar1;
  ulonglong unaff_RBX;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    unaff_RBX = 0;
    cVar1 = FUN_144722c14(param_1,param_2,0);
    if (cVar1 != '\0') goto LAB_14003c05f;
  }
  FUN_140008f88(param_1,param_2);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
LAB_14003c05f:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 14003c080 FUN_14003c080 body=5 status=ok
// SIG undefined FUN_14003c080(void)

void FUN_14003c080(void)

{
  return;
}



// FUNCTION 14003c090 FUN_14003c090 body=40 status=ok
// SIG undefined FUN_14003c090(void)

undefined8 * FUN_14003c090(undefined8 *param_1)

{
  FUN_14250ac60();
  *param_1 = icu_64::UCharCharacterIterator::vftable;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 14003c0c0 FUN_14003c0c0 body=43 status=ok
// SIG undefined FUN_14003c0c0(void)

longlong FUN_14003c0c0(longlong param_1,longlong param_2,int param_3)

{
  *(longlong *)(param_1 + 0x18) = param_2;
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (param_2 == 0) {
    param_3 = 0;
  }
  *(int *)(param_1 + 8) = param_3;
  *(int *)(param_1 + 0x14) = param_3;
  *(undefined8 *)(param_1 + 0xc) = 0;
  return param_2;
}



// FUNCTION 14003c0f0 FUN_14003c0f0 body=171 status=ok
// SIG undefined FUN_14003c0f0(void)

void FUN_14003c0f0(longlong *param_1,longlong param_2)

{
  if (param_1 != (longlong *)0x0) {
    if (param_2 != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[0xc] = (longlong)&LAB_1424e6240;
      param_1[0xd] = (longlong)&LAB_1424e6250;
      param_1[10] = (longlong)FUN_1424e6200;
      param_1[0xb] = 0;
      param_1[8] = (longlong)FUN_1424e6190;
      param_1[9] = (longlong)FUN_1424e61d0;
      param_1[6] = (longlong)&LAB_1424e6170;
      param_1[7] = (longlong)&LAB_1424e6180;
      param_1[4] = (longlong)&LAB_1424e60d0;
      param_1[5] = (longlong)FUN_1424e6110;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = param_2;
      return;
    }
    param_1[0xc] = (longlong)&LAB_1424e6010;
    param_1[0xd] = (longlong)&LAB_1424e6020;
    param_1[10] = (longlong)&LAB_1424e6000;
    param_1[0xb] = 0;
    param_1[8] = (longlong)&LAB_1424e6000;
    param_1[9] = (longlong)&LAB_1424e6000;
    param_1[6] = (longlong)&LAB_1424e5ff0;
    param_1[7] = (longlong)&LAB_1424e5ff0;
    param_1[4] = (longlong)&LAB_1424e5fd0;
    param_1[5] = (longlong)&LAB_1424e5fe0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 14003c1a0 FUN_14003c1a0 body=1243 status=ok
// SIG undefined FUN_14003c1a0(void)

longlong * FUN_14003c1a0(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char *_Str2;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  int local_768 [196];
  undefined1 local_458 [1032];
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (0 < *param_2) {
    return (longlong *)0x0;
  }
  if (*(char *)(param_1 + 0xd8) != '\0') {
    *param_2 = 1;
    return (longlong *)0x0;
  }
  if ((DAT_14c77ead0 == 0) || (lVar4 = FUN_1424bf280(), lVar4 == 0)) {
    lVar4 = FUN_1424e28b0(param_1,param_2);
    if (*param_2 < 1) {
      plVar5 = (longlong *)thunk_FUN_1424da030(0x110);
      if (plVar5 == (longlong *)0x0) {
        *param_2 = 7;
        goto LAB_14003c244;
      }
      local_50 = plVar5;
      FUN_14255d970(plVar5,lVar4);
      plVar5 = local_50;
    }
    else {
LAB_14003c244:
      plVar5 = (longlong *)0x0;
      if (lVar4 == 0) goto LAB_14003c282;
    }
    FUN_142537ca0(lVar4);
  }
  else {
    FUN_1424a3c00(local_458);
    plVar5 = (longlong *)FUN_142532650(DAT_14c77eab8,param_1,local_458,param_2);
    FUN_1414b3f60(local_458);
  }
LAB_14003c282:
  if (0 < *param_2) {
    return (longlong *)0x0;
  }
  _Str2 = (char *)FUN_1424a5500(param_1);
  iVar2 = strcmp(*(char **)(param_1 + 0x28),_Str2);
  if (iVar2 == 0) {
    iVar2 = *param_2;
    goto LAB_14003c2e5;
  }
  iVar2 = FUN_1424a5490(param_1,"colHiraganaQuaternary",local_458,0x400,param_2);
  if (*param_2 < 1) {
    if (iVar2 != 0) {
LAB_14003c2da:
      *param_2 = 0x10;
      iVar2 = 0x10;
      goto LAB_14003c2e5;
    }
    iVar2 = FUN_1424a5490(param_1,"variableTop",local_458,0x400,param_2);
    if (*param_2 < 1) {
      if (iVar2 != 0) goto LAB_14003c2da;
      if (*param_2 == -0x7c) {
        *param_2 = 0;
      }
      lVar4 = 8;
      local_50 = plVar5;
      do {
        iVar2 = FUN_1424a5490(param_1,*(undefined8 *)(&UNK_14993acd8 + lVar4),local_458,0x400,
                              param_2);
        if ((0 < *param_2) || (*param_2 == -0x7c)) goto LAB_14003c664;
        if (iVar2 != 0) {
          iVar2 = FUN_142503a40(local_458,"primary");
          if (iVar2 == 0) {
            lVar6 = 0;
          }
          else {
            iVar2 = FUN_142503a40(local_458,"secondary");
            if (iVar2 == 0) {
              lVar6 = 1;
            }
            else {
              iVar2 = FUN_142503a40(local_458,"tertiary");
              if (iVar2 == 0) {
                lVar6 = 2;
              }
              else {
                iVar2 = FUN_142503a40(local_458,"quaternary");
                if (iVar2 == 0) {
                  lVar6 = 3;
                }
                else {
                  iVar2 = FUN_142503a40(local_458,"identical");
                  if (iVar2 == 0) {
                    lVar6 = 4;
                  }
                  else {
                    iVar2 = FUN_142503a40(local_458,&DAT_149dfbe7b);
                    if (iVar2 == 0) {
                      lVar6 = 5;
                    }
                    else {
                      iVar2 = FUN_142503a40(local_458,&DAT_149dfbe7e);
                      if (iVar2 == 0) {
                        lVar6 = 6;
                      }
                      else {
                        iVar2 = FUN_142503a40(local_458,"shifted");
                        if (iVar2 == 0) {
                          lVar6 = 7;
                        }
                        else {
                          iVar2 = FUN_142503a40(local_458,"non-ignorable");
                          if (iVar2 == 0) {
                            lVar6 = 8;
                          }
                          else {
                            iVar2 = FUN_142503a40(local_458,"lower");
                            if (iVar2 == 0) {
                              lVar6 = 9;
                            }
                            else {
                              iVar2 = FUN_142503a40(local_458,"upper");
                              lVar6 = 10;
                              if (iVar2 != 0) goto LAB_14003c664;
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
          (**(code **)(*local_50 + 0xb0))
                    (local_50,*(undefined4 *)((longlong)&PTR_s_colStrength_14993ace0 + lVar4),
                     (&DAT_14993ad58)[lVar6 * 4],param_2);
        }
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != 0x78);
      puVar7 = local_458;
      iVar2 = FUN_1424a5490(param_1,"colReorder",puVar7,0x400,param_2);
      plVar5 = local_50;
      if ((*param_2 < 1) && (*param_2 != -0x7c)) {
        if (iVar2 != 0) {
          uVar8 = 0;
          do {
            if (uVar8 == 0xc2) goto LAB_14003c2c5;
            for (lVar4 = 0; (cVar1 = puVar7[lVar4], cVar1 != '\0' && (cVar1 != '-'));
                lVar4 = lVar4 + 1) {
            }
            puVar7[lVar4] = 0;
            if (lVar4 == 4) {
              iVar2 = FUN_1425634b0(0x100a,puVar7);
            }
            else {
              iVar2 = FUN_1424bf530(puVar7);
            }
            if (iVar2 < 0) goto LAB_14003c2c5;
            local_768[uVar8] = iVar2;
            uVar8 = uVar8 + 1;
            puVar7 = puVar7 + lVar4 + 1;
          } while (cVar1 != '\0');
          (**(code **)(*plVar5 + 0xa0))(plVar5,local_768,uVar8 & 0xffffffff,param_2);
        }
        iVar3 = FUN_1424a5490(param_1,&DAT_14993afc9,local_458,0x400,param_2);
        iVar2 = *param_2;
        if ((iVar2 < 1) && (iVar2 != -0x7c)) {
          if (iVar3 == 0) goto LAB_14003c2e5;
          iVar2 = FUN_1424bf530(local_458);
          plVar5 = local_50;
          if (iVar2 < 0) {
LAB_14003c664:
            *param_2 = 1;
            iVar2 = 1;
            plVar5 = local_50;
            goto LAB_14003c2e5;
          }
          (**(code **)(*local_50 + 0xc0))(local_50,iVar2,param_2);
          iVar2 = *param_2;
          if (iVar2 < 1) goto LAB_14003c2e5;
        }
      }
    }
  }
LAB_14003c2c5:
  *param_2 = 1;
  iVar2 = 1;
LAB_14003c2e5:
  if (0 < iVar2) {
    (**(code **)*plVar5)(plVar5,1);
    return (longlong *)0x0;
  }
  return plVar5;
}



// FUNCTION 14003c680 Unwind@14003c680 body=58 status=ok
// SIG undefined Unwind@14003c680(void)

void Unwind_14003c680(undefined8 param_1,longlong param_2)

{
  FUN_1414b3f60(param_2 + 0x340);
  return;
}



// FUNCTION 14003c6c0 Unwind@14003c6c0 body=58 status=ok
// SIG undefined Unwind@14003c6c0(void)

void Unwind_14003c6c0(undefined8 param_1,longlong param_2)

{
  FUN_1401773f0(*(undefined8 *)(param_2 + 0x748));
  return;
}



// FUNCTION 14003c6fa FUN_14003c6fa body=2602 status=ok
// SIG undefined FUN_14003c6fa(void)

bool FUN_14003c6fa(longlong *param_1)

{
  undefined2 **ppuVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  size_t sVar11;
  void *pvVar12;
  int iVar13;
  undefined2 *puVar14;
  ushort uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  ushort uVar22;
  ulonglong uVar23;
  longlong lVar24;
  wchar_t *_Str;
  undefined1 auStack_178 [32];
  int *local_158;
  undefined8 local_148;
  longlong local_140;
  undefined2 *local_138;
  undefined8 uStack_130;
  longlong local_120;
  int local_118;
  int local_10c;
  undefined2 *local_108;
  undefined8 uStack_100;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  longlong lStack_70;
  undefined2 *local_68;
  int local_60 [2];
  undefined2 *local_58;
  int local_50;
  int local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = &local_10c;
  local_10c = 0;
  FUN_1424da1b0(0,&LAB_14275ecd6,&LAB_14275ecc8,&LAB_14275ecc0);
  FUN_140056680(&local_120,L"Internationalization");
  FUN_1410f2562(&local_108);
  iVar20 = local_118 + -1;
  if (local_118 == 0) {
    iVar20 = 0;
  }
  iVar6 = (int)uStack_100;
  iVar8 = iVar20 + 1 + (uint)((int)uStack_100 == 0);
  local_68 = local_108;
  local_108 = (undefined2 *)0x0;
  local_60[0] = (int)uStack_100;
  iVar9 = uStack_100._4_4_;
  local_60[1] = uStack_100._4_4_;
  uStack_100 = (longlong *)0x0;
  iVar13 = iVar8 + iVar6;
  if (iVar13 < iVar6) {
LAB_14003d116:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((longlong)iVar8);
  }
  if (iVar13 < 0) {
LAB_14003d10f:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  if (iVar9 < iVar13) {
    FUN_1446f8c06(&local_68);
  }
  FUN_1401aebe8(&local_68,local_120,iVar20);
  FUN_1414927bc(&local_138);
  iVar20 = local_118 + -1;
  if (local_118 == 0) {
    iVar20 = 0;
  }
  iVar6 = (int)uStack_130;
  iVar8 = iVar20 + 1 + (uint)((int)uStack_130 == 0);
  local_58 = local_138;
  local_138 = (undefined2 *)0x0;
  local_50 = (int)uStack_130;
  iVar9 = uStack_130._4_4_;
  local_4c = uStack_130._4_4_;
  uStack_130 = (longlong *)0x0;
  iVar13 = iVar8 + iVar6;
  if (iVar13 < iVar6) goto LAB_14003d116;
  if (iVar13 < 0) goto LAB_14003d10f;
  if (iVar9 < iVar13) {
    FUN_1446f8c06(&local_58);
  }
  FUN_1401aebe8(&local_58,local_120,iVar20);
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  ppuVar1 = (undefined2 **)(param_1 + 3);
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) < 0) {
    FUN_1446f8c06(ppuVar1,0);
  }
  if (*ppuVar1 != (undefined2 *)0x0) {
    **ppuVar1 = 0;
  }
  lVar24 = 8;
  do {
    plVar10 = (longlong *)FUN_14054d1d4();
    puVar14 = &DAT_149dfb77a;
    if (*(int *)((longlong)&local_68 + lVar24) != 0) {
      puVar14 = *(undefined2 **)((longlong)&lStack_70 + lVar24);
    }
    cVar7 = (**(code **)(*plVar10 + 0x50))(plVar10,puVar14);
    if (cVar7 != '\0') {
      if (*(int *)((longlong)&local_68 + lVar24) == 0) {
        _Str = L"";
LAB_14003c93e:
        local_88 = 0;
        sVar11 = wcslen(_Str);
        FUN_1449b853c(&local_108,_Str,sVar11 & 0xffffffff,1);
      }
      else {
        _Str = *(wchar_t **)((longlong)&lStack_70 + lVar24);
        local_88 = 0;
        if (_Str != (wchar_t *)0x0) goto LAB_14003c93e;
        local_80 = 0;
        local_78[0] = 0;
      }
      FUN_1424d9910(local_80);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      iVar20 = *(int *)((longlong)&local_68 + lVar24);
      lVar21 = (longlong)iVar20;
      local_138 = (undefined2 *)0x0;
      pvVar12 = *(void **)((longlong)&lStack_70 + lVar24);
      uStack_130 = (longlong *)CONCAT44(uStack_130._4_4_,iVar20);
      FUN_1446dd670(&local_138,(uint)(lVar21 == 0) + iVar20 + 9,0);
      if (lVar21 != 0) {
        memcpy(local_138,pvVar12,lVar21 * 2);
      }
      FUN_1401aebe8(&local_138,L"icudt64l",8);
      iVar20 = (int)uStack_130;
      iVar9 = ((int)uStack_130 == 0) + 1;
      local_108 = local_138;
      local_138 = (undefined2 *)0x0;
      iVar6 = uStack_130._4_4_;
      uStack_100 = uStack_130;
      uStack_130 = (longlong *)0x0;
      iVar13 = iVar9 + iVar20;
      if (iVar13 < iVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar9);
      }
      if (iVar13 < 0) goto LAB_14003d10f;
      if (iVar6 < iVar13) {
        FUN_1446f8c06(&local_108);
      }
      FUN_1401aebe8(&local_108,&DAT_149dfb77a,0);
      if (ppuVar1 == &local_108) {
        if (local_108 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*ppuVar1 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        param_1[3] = (longlong)local_108;
        local_108 = (undefined2 *)0x0;
        *(int *)(param_1 + 4) = (int)uStack_100;
        *(int *)((longlong)param_1 + 0x24) = uStack_100._4_4_;
        uStack_100 = (longlong *)0x0;
      }
      if (local_138 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      break;
    }
    lVar24 = lVar24 + 0x10;
  } while (lVar24 != 0x28);
  if ((int)param_1[4] < 2) {
    local_108 = (undefined2 *)0x0;
    uStack_100 = (longlong *)0x0;
    uStack_100._0_4_ = 0;
    lVar24 = 0;
    do {
      if (1 < (int)uStack_100) {
        FUN_1400020e8(&local_108,&DAT_149e01f72,1);
      }
      iVar20 = *(int *)((longlong)local_60 + lVar24) + -1;
      if (*(int *)((longlong)local_60 + lVar24) == 0) {
        iVar20 = 0;
      }
      FUN_1400020e8(&local_108,*(undefined8 *)((longlong)&local_68 + lVar24),iVar20);
      lVar24 = lVar24 + 0x10;
    } while (lVar24 != 0x20);
    puVar14 = local_108;
    if ((int)uStack_100 == 0) {
      puVar14 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/Core/Private/Internationalization/ICUInternationalization.cpp",0x9d,
                  L"ICU data directory was not discovered:\n%s",puVar14);
    if (local_108 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1424e5260(0,&local_10c);
  FUN_1424d9f40(param_1,FUN_14275efba,FUN_14275ece0,&local_10c);
  FUN_1424d8620(&local_10c);
  pvVar12 = (void *)FUN_14001cc68(0xf0);
  memset(pvVar12,0,0xf0);
  FUN_1467c8f58(pvVar12);
  DAT_14c8445d0 = pvVar12;
  FUN_14626a10c();
  FUN_140f2a352(param_1);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  FUN_1406dd7f4(param_1);
  *(undefined1 *)(param_1 + 0x26) = 0;
  FUN_140e82a34(param_1);
  FUN_140056680(&local_138,L"en-US-POSIX");
  FUN_14588f74c(param_1,&local_108,&local_138,0);
  plVar4 = uStack_100;
  lVar24 = *param_1;
  *(undefined2 **)(lVar24 + 0x78) = local_108;
  local_108 = (undefined2 *)0x0;
  plVar10 = *(longlong **)(lVar24 + 0x80);
  if (uStack_100 == plVar10) {
LAB_14003cc4f:
    plVar10 = uStack_100;
    if (uStack_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = uStack_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*uStack_100)(uStack_100);
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
  else {
    uStack_100 = (longlong *)0x0;
    *(longlong **)(lVar24 + 0x80) = plVar4;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar10 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      goto LAB_14003cc4f;
    }
  }
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(*param_1 + 0x78) == 0) {
    local_138 = (undefined2 *)0x0;
    uStack_130 = (longlong *)0x0;
    FUN_14588f74c(param_1,&local_108,&local_138,1);
    plVar4 = uStack_100;
    lVar24 = *param_1;
    *(undefined2 **)(lVar24 + 0x78) = local_108;
    local_108 = (undefined2 *)0x0;
    plVar10 = *(longlong **)(lVar24 + 0x80);
    if (uStack_100 == plVar10) {
LAB_14003cd05:
      plVar10 = uStack_100;
      if (uStack_100 != (longlong *)0x0) {
        LOCK();
        plVar4 = uStack_100 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*uStack_100)(uStack_100);
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
    else {
      uStack_100 = (longlong *)0x0;
      *(longlong **)(lVar24 + 0x80) = plVar4;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar10 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        goto LAB_14003cd05;
      }
    }
    if (local_138 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_145db15b0(&local_138);
  FUN_14588f6d2(param_1,&local_108,&local_138);
  plVar4 = uStack_100;
  lVar24 = *param_1;
  *(undefined2 **)(lVar24 + 0x58) = local_108;
  local_108 = (undefined2 *)0x0;
  plVar10 = *(longlong **)(lVar24 + 0x60);
  if (uStack_100 != plVar10) {
    uStack_100 = (longlong *)0x0;
    *(longlong **)(lVar24 + 0x60) = plVar4;
    if (plVar10 == (longlong *)0x0) goto LAB_14003cdcd;
    LOCK();
    plVar4 = plVar10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  plVar10 = uStack_100;
  if (uStack_100 != (longlong *)0x0) {
    LOCK();
    plVar4 = uStack_100 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*uStack_100)(uStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_14003cdcd:
  if (local_138 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14626e212();
  uVar18 = 0;
  iVar20 = (int)uStack_100 + -1;
  if ((int)uStack_100 == 0) {
    iVar20 = 0;
  }
  if (0 < iVar20) {
    puVar14 = local_108;
    if ((int)uStack_100 == 0) {
      puVar14 = &DAT_149dfb77a;
    }
    lVar24 = 0;
    do {
      uVar16 = ((uint)(0x19 < (ushort)puVar14[lVar24] - 0x61) * 0x20 + (uint)(ushort)puVar14[lVar24]
               ) - 0x20;
      uVar18 = uVar18 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar18 ^ uVar16) & 0xff) * 4);
      uVar18 = uVar18 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar18 & 0xff ^ uVar16 >> 8 & 0xff) * 4);
      lVar24 = lVar24 + 1;
    } while (iVar20 != (int)lVar24);
  }
  if ((int)param_1[8] != *(int *)((longlong)param_1 + 0x6c)) {
    plVar10 = param_1 + 0xe;
    if ((longlong *)param_1[0xf] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0xf];
    }
    iVar20 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x10] - 1U & uVar18) * 4);
    if (iVar20 != -1) {
      lVar24 = param_1[7];
LAB_14003ceaf:
      lVar21 = (longlong)iVar20 * 0x20;
      iVar20 = *(int *)(lVar24 + 8 + lVar21);
      if (iVar20 != (int)uStack_100) {
        if (iVar20 + (int)uStack_100 == 1) goto LAB_14003cf43;
        goto LAB_14003cf16;
      }
      if (1 < (int)uStack_100) {
        lVar19 = 0;
        do {
          uVar22 = *(ushort *)(*(longlong *)(lVar24 + lVar21) + lVar19);
          uVar23 = (ulonglong)uVar22;
          uVar15 = *(ushort *)((longlong)local_108 + lVar19);
          if (uVar22 == uVar15) {
            if (uVar22 == 0) break;
          }
          else {
            if (0x7f < (uVar15 | uVar22)) goto LAB_14003cf03;
            uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
            uVar17 = (ulonglong)uVar15;
            uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
            if ((&DAT_149e05da0)[uVar23] != (&DAT_149e05da0)[uVar17]) goto LAB_14003cf03;
          }
          lVar19 = lVar19 + 2;
        } while( true );
      }
      goto LAB_14003cf43;
    }
  }
LAB_14003cf21:
  lVar24 = *param_1;
  uVar5 = *(undefined8 *)(lVar24 + 0x58);
  lVar21 = *(longlong *)(lVar24 + 0x60);
  if (lVar21 != 0) {
    LOCK();
    *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
    UNLOCK();
  }
  plVar10 = *(longlong **)(lVar24 + 0x70);
  *(undefined8 *)(lVar24 + 0x68) = uVar5;
  *(longlong *)(lVar24 + 0x70) = lVar21;
LAB_14003cfad:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
LAB_14003cfcf:
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar24 = *param_1;
  uVar5 = *(undefined8 *)(lVar24 + 0x58);
  lVar21 = *(longlong *)(lVar24 + 0x60);
  if (lVar21 != 0) {
    LOCK();
    *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
    UNLOCK();
  }
  plVar10 = *(longlong **)(lVar24 + 0x30);
  *(undefined8 *)(lVar24 + 0x28) = uVar5;
  *(longlong *)(lVar24 + 0x30) = lVar21;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  lVar24 = *param_1;
  uVar5 = *(undefined8 *)(lVar24 + 0x68);
  lVar21 = *(longlong *)(lVar24 + 0x70);
  if (lVar21 != 0) {
    LOCK();
    *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
    UNLOCK();
  }
  plVar10 = *(longlong **)(lVar24 + 0x40);
  *(undefined8 *)(lVar24 + 0x38) = uVar5;
  *(longlong *)(lVar24 + 0x40) = lVar21;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar10 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  local_148 = *(undefined8 *)(*param_1 + 0x28);
  local_140 = *(longlong *)(*param_1 + 0x30);
  if (local_140 != 0) {
    LOCK();
    *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
    UNLOCK();
  }
  FUN_14611b45e(param_1,&local_148);
  plVar10 = (longlong *)FUN_1424b77f0();
  FUN_1424b7860(plVar10);
  (**(code **)(*plVar10 + 0x38))(plVar10);
  FUN_145d3c09e(param_1);
  iVar20 = local_10c;
  lVar24 = 0x20;
  do {
    if (*(longlong *)((longlong)local_78 + lVar24) != 0) {
      FUN_1400020a8();
    }
    lVar24 = lVar24 + -0x10;
  } while (lVar24 != 0);
  if (local_120 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar20 < 1;
LAB_14003cf03:
  if (uVar22 == uVar15) {
LAB_14003cf43:
    FUN_14588f6d2(param_1,&local_138,&local_108,CONCAT71((int7)((ulonglong)lVar21 >> 8),1));
    plVar10 = uStack_130;
    lVar24 = *param_1;
    *(undefined2 **)(lVar24 + 0x68) = local_138;
    local_138 = (undefined2 *)0x0;
    plVar4 = *(longlong **)(lVar24 + 0x70);
    if (uStack_130 == plVar4) goto LAB_14003cfad;
    uStack_130 = (longlong *)0x0;
    *(longlong **)(lVar24 + 0x70) = plVar10;
    if (plVar4 == (longlong *)0x0) goto LAB_14003cfcf;
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    plVar10 = uStack_130;
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar10 = uStack_130;
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        plVar10 = uStack_130;
      }
    }
    goto LAB_14003cfad;
  }
LAB_14003cf16:
  iVar20 = *(int *)(lVar24 + 0x18 + lVar21);
  if (iVar20 == -1) goto LAB_14003cf21;
  goto LAB_14003ceaf;
}



// FUNCTION 14003d126 FUN_14003d126 body=847 status=ok
// SIG undefined FUN_14003d126(void)

longlong FUN_14003d126(longlong param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                      undefined8 param_5,undefined8 param_6,undefined4 param_7,longlong *param_8)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_7;
  local_80 = param_1 + 0x90;
  FUN_14488e942(param_1 + 0x20,&local_78,param_4);
  local_78 = param_1;
  if (CONCAT44(uStack_6c,uStack_70) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_144859ac6(param_2,0xc,CONCAT44(uStack_64,local_68));
    uVar4 = *(uint *)(param_1 + 0x118);
    if (0 < (int)uVar4) {
      uVar12 = 0;
      plVar8 = *(longlong **)(param_1 + 0x110);
      do {
        if (plVar8[1] == lVar6) {
          lVar6 = *plVar8;
          if (uVar4 - 1 != (int)uVar12) {
            iVar5 = (uVar4 - 1) - (int)uVar12;
            iVar10 = 1;
            if (iVar5 < 1) {
              iVar10 = iVar5;
            }
            memmove(plVar8,*(longlong **)(param_1 + 0x110) + (ulonglong)(uVar4 - iVar10) * 3,
                    (longlong)iVar10 * 0x18);
            uVar4 = *(uint *)(param_1 + 0x118);
          }
          *(uint *)(param_1 + 0x118) = uVar4 - 1;
          iVar10 = *(int *)(param_1 + 0x128);
          uVar4 = iVar10 + 1;
          *(uint *)(param_1 + 0x128) = uVar4;
          if (*(uint *)(param_1 + 300) < uVar4) {
            FUN_141746332(param_1 + 0x120);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar10 * 8) = lVar6;
          *(int *)(param_1 + 0x138) = *(int *)(param_1 + 0x138) + 1;
          goto LAB_14003d2d5;
        }
        uVar12 = uVar12 + 1;
        plVar8 = plVar8 + 3;
      } while (uVar4 != uVar12);
    }
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
    pcVar1 = (code *)*param_8;
    plVar8 = param_8 + 4;
    if ((longlong *)param_8[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_8[2];
    }
    local_58 = param_1;
    local_50 = &local_78;
    local_48 = lVar6;
    uVar7 = (**(code **)(*plVar8 + 8))();
    lVar6 = (*pcVar1)(uVar7);
    iVar10 = *(int *)(param_1 + 0x128);
    uVar4 = iVar10 + 1;
    *(uint *)(param_1 + 0x128) = uVar4;
    if (*(uint *)(param_1 + 300) < uVar4) {
      FUN_141746332(param_1 + 0x120);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar10 * 8) = lVar6;
    *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
LAB_14003d2d5:
    uVar4 = *param_4;
    if (uVar4 == 0xffffffff) {
      uVar4 = param_4[1];
    }
    *(undefined8 *)(lVar6 + 0x40) = param_3;
    *(ulonglong *)(lVar6 + 0x98) = (ulonglong)uVar4 << 0x20;
    *(undefined4 *)(lVar6 + 0xa0) = 0xffffffff;
    *(undefined1 *)(lVar6 + 0xa4) = 1;
    *(undefined8 *)(lVar6 + 0x38) = param_5;
    *(int *)(lVar6 + 0x34) = *(int *)(lVar6 + 0x34) + 1;
    if (*(int *)(lVar6 + 0x94) < 0) {
      *(undefined4 *)(lVar6 + 0x90) = 0;
      FUN_1471267e2(lVar6 + 0x88);
    }
    else {
      *(undefined4 *)(lVar6 + 0x90) = 0;
    }
    *(undefined4 *)(lVar6 + 0x58) = local_68;
    *(undefined4 *)(lVar6 + 0x5c) = uStack_64;
    *(undefined4 *)(lVar6 + 0x60) = uStack_60;
    *(undefined4 *)(lVar6 + 100) = uStack_5c;
    *(undefined4 *)(lVar6 + 0x48) = (undefined4)local_78;
    *(undefined4 *)(lVar6 + 0x4c) = local_78._4_4_;
    *(undefined4 *)(lVar6 + 0x50) = uStack_70;
    *(undefined4 *)(lVar6 + 0x54) = uStack_6c;
    iVar10 = *(int *)(param_1 + 0x98);
    if ((longlong)iVar10 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x90);
      lVar9 = 0;
      do {
        uVar4 = *(uint *)(lVar2 + 8 + lVar9);
        lVar3 = *(longlong *)(lVar2 + lVar9);
        uVar11 = *(uint *)(lVar3 + 0xa0);
        uVar13 = *(uint *)(lVar6 + 0x9c);
        if (uVar11 < *(uint *)(lVar6 + 0x9c)) {
          uVar13 = uVar11;
        }
        *(uint *)(lVar3 + 0xa0) = uVar13;
        uVar11 = *(uint *)(lVar6 + 0x98);
        if (*(uint *)(lVar6 + 0x98) < uVar4) {
          uVar11 = uVar4;
        }
        *(uint *)(lVar6 + 0x98) = uVar11;
        lVar9 = lVar9 + 0x10;
      } while ((longlong)iVar10 * 0x10 != lVar9);
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    if (*(int *)(param_1 + 0x9c) < 0) {
      FUN_1471275cc(param_1 + 0x90,0);
    }
    lVar2 = CONCAT44(uStack_6c,uStack_70);
    uVar12 = CONCAT44(uStack_64,local_68) + lVar2;
    if (uVar12 <= *(ulonglong *)(param_1 + 0x78)) {
      uVar12 = *(ulonglong *)(param_1 + 0x78);
    }
    *(ulonglong *)(param_1 + 0x78) = uVar12;
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
    *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + lVar2;
    uVar12 = lVar2 + *(longlong *)(param_1 + 0xd0);
    *(ulonglong *)(param_1 + 0xd0) = uVar12;
    if (uVar12 <= *(ulonglong *)(param_1 + 0xd8)) {
      uVar12 = *(ulonglong *)(param_1 + 0xd8);
    }
    *(ulonglong *)(param_1 + 0xd8) = uVar12;
  }
  if (*param_8 != 0) {
    plVar8 = param_8 + 4;
    if ((longlong *)param_8[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_8[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14003d476 FUN_14003d476 body=411 status=ok
// SIG undefined FUN_14003d476(void)

longlong FUN_14003d476(longlong *param_1,ulonglong param_2,byte param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  undefined4 local_48;
  byte local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  iVar2 = (int)param_1[0x16];
  if (0 < (longlong)iVar2) {
    lVar1 = param_1[0x15];
    uVar5 = (longlong)iVar2 + 1;
    iVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar1 + -0x10 + uVar5 * 8);
      if ((param_2 <= (ulonglong)(*(longlong *)(lVar3 + 0x28) - *(longlong *)(lVar3 + 0x30))) &&
         ((*(byte *)(lVar3 + 0x14) & param_3) != 0)) {
        if (iVar6 != 0) {
          memmove((void *)(lVar1 + uVar5 * 8 + -0x10),(void *)(lVar1 + uVar5 * 8 + -8),
                  (longlong)iVar6 << 3);
          iVar2 = (int)param_1[0x16];
        }
        *(int *)(param_1 + 0x16) = iVar2 + -1;
        FUN_1410406de(param_1 + 0x15);
        goto LAB_14003d5e1;
      }
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  uVar5 = (param_2 + (param_2 == 0)) - 1;
  if (uVar5 == 0) {
    bVar4 = 0;
  }
  else {
    lVar1 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    bVar4 = (byte)lVar1 ^ 0x3f;
  }
  local_50 = 1L << (-bVar4 & 0x3f);
  if (local_50 < (ulonglong)param_1[2]) {
    local_50 = param_1[2];
  }
  local_48 = (undefined4)param_1[3];
  bVar7 = (char)param_1[5] == '\0';
  bVar4 = 0xf;
  if (bVar7) {
    bVar4 = param_3;
  }
  local_44 = 7;
  if (bVar7) {
    local_44 = param_3;
  }
  if (param_3 == 8) {
    local_44 = param_3;
  }
  if (DAT_14c760da4 < 2) {
    local_44 = bVar4;
  }
  local_40 = (undefined4)param_1[4];
  local_3c = *(undefined4 *)((longlong)param_1 + 0x24);
  lVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  iVar2 = (int)param_1[0x14];
  *(uint *)(param_1 + 0x14) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xa4) < iVar2 + 1U) {
    FUN_14017dc62(param_1 + 0x13,iVar2);
  }
  *(longlong *)(param_1[0x13] + (longlong)iVar2 * 8) = lVar3;
LAB_14003d5e1:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14003d612 FUN_14003d612 body=151 status=ok
// SIG undefined FUN_14003d612(void)

void FUN_14003d612(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_14003d6a9(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_140074ac0(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14003d6a9 FUN_14003d6a9 body=43 status=ok
// SIG undefined FUN_14003d6a9(void)

void FUN_14003d6a9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14003d6d4(param_1);
    param_1 = param_1 + 0xb8;
  }
  return;
}



// FUNCTION 14003d6d4 FUN_14003d6d4 body=58 status=ok
// SIG undefined FUN_14003d6d4(void)

void FUN_14003d6d4(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a1e2790;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14003d70e FUN_14003d70e body=2376 status=ok
// SIG undefined FUN_14003d70e(void)

void FUN_14003d70e(longlong *param_1,longlong **param_2)

{
  longlong **pplVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  uint *puVar4;
  ulonglong *puVar5;
  void *_Src;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  byte bVar14;
  longlong *plVar15;
  undefined **ppuVar16;
  ulonglong uVar17;
  undefined1 auStack_a8 [40];
  longlong *local_80 [2];
  uint local_6c;
  void *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = *(longlong **)(*param_1 + 8);
  (**(code **)(*plVar3 + 0x218))(plVar3,&DAT_149e3cc28);
  bVar14 = *(byte *)(plVar3 + 5);
  if (((bVar14 & 1) != 0) && ((int)plVar3[8] < 0x170)) {
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_14021219d(*(undefined8 *)(*param_1 + 8));
    uVar17 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (0xe1 < (int)plVar3[8]) {
      local_80[0] = (longlong *)CONCAT44(local_80[0]._4_4_,0xffffffff);
      FUN_1467e1c60(local_80,param_1);
      local_6c = 0xffffffff;
      FUN_1467e1c60(&local_6c,param_1);
      uVar17 = (ulonglong)local_6c;
      uVar9 = (uint)local_80[0];
    }
    plVar11 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar11[1] = 0;
    *plVar11 = (longlong)&PTR_FUN_149e19310;
    plVar11[2] = (ulonglong)uVar9 | uVar17 << 0x20;
    plVar11[3] = (longlong)local_68;
    local_68 = (void *)0x0;
    *(undefined4 *)(plVar11 + 4) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)plVar11 + 0x24) = uStack_60._4_4_;
    uStack_60 = 0;
    plVar11[5] = 0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    plVar15 = *param_2;
    *param_2 = plVar11;
    if (plVar15 != (longlong *)0x0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    bVar14 = *(byte *)(plVar3 + 5);
  }
  pplVar1 = param_2 + 1;
  uVar9 = *(uint *)(param_2 + 1);
  if (((bVar14 & 4) != 0) && ((*(byte *)((longlong)plVar3 + 0x29) & 1) != 0)) {
    *(uint *)pplVar1 = uVar9 & 0xffffffeb;
  }
  plVar11 = *(longlong **)(*param_1 + 8);
  puVar4 = *(uint **)plVar11[1];
  if ((uint *)((undefined8 *)plVar11[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)plVar11 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar11 + 0x170))(plVar11,pplVar1,4);
    }
    else {
      FUN_14572512c(plVar11,pplVar1);
    }
  }
  else {
    *(uint *)pplVar1 = *puVar4;
    *(longlong *)plVar11[1] = *(longlong *)plVar11[1] + 4;
  }
  bVar14 = *(byte *)(plVar3 + 5);
  if (((bVar14 & 1) != 0) && ((*(byte *)((longlong)plVar3 + 0x29) & 1) != 0)) {
    *(byte *)pplVar1 = *(byte *)pplVar1 & 0xeb;
    bVar14 = *(byte *)(plVar3 + 5);
  }
  if ((bVar14 & 4) != 0) {
    *(uint *)pplVar1 = uVar9;
  }
  if ((int)plVar3[8] < 0x170) goto LAB_14003d87f;
  if ((*(byte *)(plVar3 + 5) & 4) != 0) {
    uVar10 = (**(code **)(**param_2 + 0x50))();
    FUN_1447a1fc0(uVar10);
    lVar12 = (**(code **)(**param_2 + 0x28))();
    if ((*(int *)(lVar12 + 8) < 2) || (((ulonglong)param_2[1] & 2) != 0)) {
      local_80[0] = (longlong *)CONCAT71(local_80[0]._1_7_,0xff);
      plVar11 = *(longlong **)(*param_1 + 8);
      puVar5 = (ulonglong *)plVar11[1];
      puVar2 = (undefined1 *)*puVar5 + 1;
      if ((undefined1 *)puVar5[1] < puVar2) {
        (**(code **)(*plVar11 + 0x170))(plVar11,local_80,1);
      }
      else {
        local_80[0] = (longlong *)CONCAT71(local_80[0]._1_7_,*(undefined1 *)*puVar5);
        *puVar5 = (ulonglong)puVar2;
      }
      uVar10 = (**(code **)(**param_2 + 0x50))();
      FUN_1447a1fc0(uVar10);
      lVar12 = (**(code **)(**param_2 + 0x28))();
      bVar14 = *(byte *)(param_2 + 1) >> 1 & 1;
      if (*(int *)(lVar12 + 8) < 2) {
        bVar14 = 0;
      }
      local_6c = CONCAT31(local_6c._1_3_,bVar14);
      FUN_1456bb002(*param_1,&local_6c);
      if ((char)local_6c != '\x01') goto LAB_14003d87f;
      puVar13 = (undefined8 *)(**(code **)(**param_2 + 0x20))();
      local_68 = (void *)0x0;
      uVar9 = *(uint *)(puVar13 + 1);
      _Src = (void *)*puVar13;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar9);
      if ((longlong)(int)uVar9 == 0) {
        uStack_60 = (ulonglong)uVar9;
      }
      else {
        FUN_1446dd670(&local_68,uVar9,0);
        memcpy(local_68,_Src,(longlong)(int)uVar9 * 2);
      }
      FUN_14021219d(*(undefined8 *)(*param_1 + 8),&local_68);
LAB_14003d9af:
      if (local_68 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14003d87f;
    }
    plVar11 = (longlong *)(**(code **)(**param_2 + 0x48))();
    uVar7 = (**(code **)(*plVar11 + 0x58))(plVar11);
    local_68 = (void *)CONCAT71(local_68._1_7_,uVar7);
    plVar11 = *(longlong **)(*param_1 + 8);
    puVar5 = (ulonglong *)plVar11[1];
    if (puVar5[1] < *puVar5 + 1) {
      (**(code **)(*plVar11 + 0x170))(plVar11,&local_68,1);
    }
    else {
      *puVar5 = *puVar5 + 1;
    }
    goto LAB_14003d932;
  }
  if ((*(byte *)(plVar3 + 5) & 1) == 0) goto LAB_14003d932;
  local_6c = CONCAT31(local_6c._1_3_,0xff);
  plVar11 = *(longlong **)(*param_1 + 8);
  puVar5 = (ulonglong *)plVar11[1];
  puVar2 = (undefined1 *)*puVar5 + 1;
  if ((undefined1 *)puVar5[1] < puVar2) {
    (**(code **)(*plVar11 + 0x170))(plVar11,&local_6c,1);
    uVar7 = (char)local_6c;
  }
  else {
    uVar7 = *(undefined1 *)*puVar5;
    local_6c = CONCAT31(local_6c._1_3_,uVar7);
    *puVar5 = (ulonglong)puVar2;
  }
  switch(uVar7) {
  case 0:
    plVar11 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar11[1] = 0;
    *plVar11 = (longlong)&PTR_FUN_149e19310;
    plVar11[2] = -1;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    goto LAB_14003d918;
  case 1:
    plVar11 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar15 = plVar11 + 4;
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    ppuVar16 = &PTR_FUN_149e19490;
    break;
  case 2:
    plVar11 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar15 = plVar11 + 4;
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    ppuVar16 = &PTR_FUN_149e19550;
    break;
  case 3:
    plVar11 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar15 = plVar11 + 4;
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    ppuVar16 = &PTR_FUN_149e19610;
    break;
  case 4:
    plVar11 = (longlong *)FUN_14001cc68(0x70,0x10);
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    plVar11[0xc] = 0;
    plVar11[0xd] = 0;
    FUN_1467dea0e(plVar11);
    ppuVar16 = &PTR_FUN_149e19790;
    goto LAB_14003de76;
  case 5:
    plVar11 = (longlong *)FUN_14001cc68(0x70,0x10);
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    plVar11[0xc] = 0;
    plVar11[0xd] = 0;
    FUN_1467dea0e(plVar11);
    ppuVar16 = &PTR_FUN_149e19850;
LAB_14003de76:
    *plVar11 = (longlong)ppuVar16;
    goto LAB_14003de79;
  case 6:
    plVar11 = (longlong *)FUN_14001cc68(0x80,0x10);
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    plVar11[0xc] = 0;
    plVar11[0xd] = 0;
    FUN_1467dea0e(plVar11);
    *plVar11 = (longlong)&PTR_FUN_149e19910;
    plVar11[0xe] = 0;
    plVar11[0xf] = 0;
    goto LAB_14003de79;
  case 7:
    plVar11 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    ppuVar16 = &PTR_FUN_149e199d0;
    goto LAB_14003df2b;
  case 8:
    plVar11 = (longlong *)FUN_14001cc68(0x50,0x10);
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    ppuVar16 = &PTR_FUN_149e19a90;
LAB_14003df2b:
    *plVar11 = (longlong)ppuVar16;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    goto LAB_14003df36;
  case 9:
    plVar11 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    *plVar11 = (longlong)&PTR_FUN_149e19b50;
    plVar11[6] = 0;
    plVar11[7] = 0;
    plVar11[8] = 0;
    plVar11[9] = 0;
    plVar11[10] = 0;
    plVar11[0xb] = 0;
    goto LAB_14003df36;
  case 10:
    plVar11 = (longlong *)FUN_14001cc68(0x38,0x10);
    *plVar11 = 0;
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    plVar11[5] = 0;
    plVar11[6] = 0;
    FUN_1467dee18(plVar11);
LAB_14003de79:
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    goto LAB_14003de83;
  case 0xb:
    plVar11 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar11[1] = 0;
    *plVar11 = (longlong)&PTR_FUN_149e19cd0;
    plVar11[2] = 0;
    plVar11[3] = 0;
LAB_14003d918:
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    goto LAB_14003d921;
  case 0xc:
    plVar11 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar11[1] = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    *plVar11 = (longlong)&PTR_FUN_149e19d90;
    plVar11[4] = 0;
    plVar11[5] = 0;
LAB_14003df36:
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
LAB_14003d921:
    plVar15 = *param_2;
    *param_2 = plVar11;
    goto LAB_14003d927;
  default:
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
    plVar15 = DAT_14c844840;
    plVar11 = *param_2;
    if (plVar11 != DAT_14c844840) {
      *param_2 = DAT_14c844840;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 8))();
      }
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    iVar8 = FUN_1448332aa(plVar3,&DAT_149e3cc28);
    if (iVar8 < 0x20) goto LAB_14003d87f;
    plVar11 = *(longlong **)(*param_1 + 8);
    puVar5 = (ulonglong *)plVar11[1];
    puVar4 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar4) {
      local_68 = (void *)((ulonglong)local_68 & 0xffffffff00000000);
      (**(code **)(*plVar11 + 0x170))(plVar11,&local_68,4);
      uVar9 = (uint)local_68;
      if (1 < (uint)local_68) {
        FUN_14572541c(plVar11);
        uVar9 = (uint)local_68;
      }
    }
    else {
      uVar9 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar4;
    }
    if (uVar9 == 0) goto LAB_14003d87f;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    FUN_14021219d(*(undefined8 *)(*param_1 + 8),&local_68);
    FUN_140009cf2(local_80,&local_68);
    if (local_80 != param_2) {
      plVar11 = *param_2;
      *param_2 = local_80[0];
      local_80[0] = (longlong *)0x0;
      if (plVar11 == (longlong *)0x0) goto LAB_14003d9af;
      (**(code **)(*plVar11 + 0x10))();
    }
    if (local_80[0] != (longlong *)0x0) {
      (**(code **)(*local_80[0] + 0x10))();
    }
    goto LAB_14003d9af;
  }
  *plVar11 = (longlong)ppuVar16;
  FUN_1410a5228(plVar15);
  plVar11[6] = 0;
  plVar11[7] = 0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
LAB_14003de83:
  plVar15 = *param_2;
  *param_2 = plVar11;
LAB_14003d927:
  if (plVar15 != (longlong *)0x0) {
    (**(code **)(*plVar15 + 0x10))();
  }
LAB_14003d932:
  plVar11 = (longlong *)(**(code **)(**param_2 + 0x50))();
  (**(code **)(*plVar11 + 0x78))(plVar11,param_1);
LAB_14003d87f:
  if ((*(byte *)(plVar3 + 5) & 1) != 0) {
    uVar10 = (**(code **)(**param_2 + 0x50))();
    FUN_1447a1fc0(uVar10);
  }
  cVar6 = FUN_14003e058(param_2);
  if (cVar6 != '\0') {
    *(byte *)((longlong)plVar3 + 0x2a) = *(byte *)((longlong)plVar3 + 0x2a) | 1;
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14003e058 FUN_14003e058 body=230 status=ok
// SIG undefined FUN_14003e058(void)

undefined1 FUN_14003e058(undefined8 *param_1)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar5 = FUN_14118da1c();
      bVar2 = FUN_14054d46e(uVar5,L"nothreading");
      DAT_14c83f0f8 = bVar2 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 != 1) {
      return 0;
    }
  }
  plVar3 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x20))();
  if ((*(byte *)(param_1 + 1) & 3) == 0) {
    plVar4 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x48))();
    cVar1 = (**(code **)(*plVar4 + 0x58))(plVar4);
    if ((cVar1 != '\v') && (1 < (int)plVar3[1])) {
      lVar7 = 0;
      do {
        cVar1 = FUN_140665610(*(undefined2 *)(*plVar3 + lVar7 * 2));
        if (cVar1 == '\0') {
          return 1;
        }
        lVar7 = lVar7 + 1;
        iVar6 = (int)plVar3[1] + -1;
        if ((int)plVar3[1] == 0) {
          iVar6 = 0;
        }
      } while (lVar7 < iVar6);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 14003e14c FUN_14003e14c body=395 status=ok
// SIG undefined FUN_14003e14c(void)

void FUN_14003e14c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [3];
  longlong local_50 [2];
  int local_3c;
  undefined4 local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(*param_2 + 8);
  if ((*(byte *)(lVar3 + 0x28) & 1) == 0) {
    if ((*(byte *)(lVar3 + 0x28) & 4) != 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      local_38 = *(undefined4 *)(param_1 + 0x14);
      local_34 = iVar1;
      if ((*(longlong *)(lVar3 + 0x68) != 0) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x68) + 0x10) != 0)) {
        local_68[0] = 0;
        local_68[1] = 0;
        if (iVar1 != -1) {
          uVar2 = FUN_1412a5d66();
          FUN_1412a5cfc(uVar2,iVar1,local_68);
        }
        FUN_1467e1c6c(local_50,local_68);
        FUN_140c98848(&local_3c,local_50);
        local_34 = local_3c;
        if (local_50[0] != 0) {
          FUN_1400020a8();
        }
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        lVar3 = *(longlong *)(*param_2 + 8);
      }
      FUN_14003e2d8(&local_34,lVar3);
      FUN_14003e2d8(&local_38,*(undefined8 *)(*param_2 + 8));
      FUN_14021219d(*(undefined8 *)(*param_2 + 8),param_1 + 0x18);
    }
  }
  else {
    local_68[0] = CONCAT44(local_68[0]._4_4_,0xffffffff);
    FUN_14003e2d8(local_68);
    local_34 = -1;
    FUN_14003e2d8(&local_34,*(undefined8 *)(*param_2 + 8));
    FUN_14021219d(*(undefined8 *)(*param_2 + 8),param_1 + 0x18);
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(local_34,(undefined4)local_68[0]);
    lVar3 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (lVar3 != 0) {
      local_50[0] = lVar3;
      FUN_1447a2442();
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14003e2d8 FUN_14003e2d8 body=430 status=ok
// SIG undefined FUN_14003e2d8(void)

void FUN_14003e2d8(int *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_178 [40];
  undefined2 **local_150;
  int local_148;
  undefined2 *local_140;
  undefined2 *local_138;
  ulonglong *local_130;
  undefined1 local_128;
  undefined2 local_120 [112];
  undefined2 **local_40;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    local_140 = local_120;
    local_128 = 0;
    local_130 = &local_20;
    local_138 = local_140;
    if (*param_1 != -1) {
      uVar1 = FUN_1412a5d66();
      FUN_1456bb098(uVar1,*param_1,&local_140);
    }
    *local_138 = 0;
    FUN_14003e734(param_2,local_140);
    FUN_144724f3c(&local_140);
  }
  else {
    local_40 = (undefined2 **)0x0;
    local_38 = 0x8000000000;
    FUN_14041eed3(param_2,&local_140);
    if ((int)local_38 < 2) {
      *param_1 = -1;
    }
    else {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c845168) {
        FUN_144b3d300(&DAT_14c845168);
        if (DAT_14c845168 == -1) {
          FUN_1456aef72(&DAT_14c8450d0);
          DAT_14c845160 = &DAT_14c8450d0;
          atexit(FUN_142767c9e);
          _Init_thread_footer(&DAT_14c845168);
        }
      }
      local_148 = (int)local_38 + -1;
      local_150 = &local_140;
      if (local_40 != (undefined2 **)0x0) {
        local_150 = local_40;
      }
      FUN_14003e488(DAT_14c845160,&local_150,param_1);
    }
    if (local_40 != (undefined2 **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14003e488 FUN_14003e488 body=683 status=ok
// SIG undefined FUN_14003e488(void)

void FUN_14003e488(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  wchar_t wVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  size_t sVar5;
  uint uVar6;
  uint uVar7;
  wchar_t *_Str;
  wchar_t *pwVar8;
  uint uVar9;
  uint uVar10;
  wchar_t *pwVar11;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 *local_100;
  undefined1 *local_f8;
  uint local_f0;
  int local_ec;
  uint local_e4;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  _Str = (wchar_t *)*param_2;
  uVar9 = *(uint *)(param_2 + 1);
  local_108 = param_1;
  local_100 = param_3;
  if (_Str == (wchar_t *)0x0) {
    uVar7 = 0;
  }
  else if ((int)uVar9 < 1) {
    uVar7 = uVar9;
    if (uVar9 == 0xffffffff) {
      sVar5 = wcslen(_Str);
      uVar7 = (uint)sVar5;
    }
  }
  else {
    uVar7 = uVar9 - 1;
    if (_Str[uVar9 - 1] != L'\0') {
      uVar7 = uVar9;
    }
  }
  uVar4 = FUN_1447addd0(_Str,uVar7 * 2);
  local_60 = (undefined1 *)0x0;
  local_e4 = 0;
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,0x7fffffff);
  pwVar11 = _Str;
  uVar7 = uVar9;
  do {
    if ((int)uVar7 < 1) {
LAB_14003e5f5:
      local_50 = local_e4;
      if (0x80 < local_e4) goto LAB_14003e56a;
      local_f8 = (undefined1 *)0x0;
      goto LAB_14003e60e;
    }
    wVar1 = *pwVar11;
    uVar6 = (uint)(ushort)wVar1;
    pwVar8 = pwVar11 + 1;
    uVar10 = uVar7 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (uVar7 == 1) {
        cVar2 = FUN_140024707(uVar6,&local_e4,&local_f8);
        if (cVar2 != '\0') goto LAB_14003e5f5;
        break;
      }
      if (((ushort)*pwVar8 & 0xfc00) == 0xdc00) {
        uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar8 + 0xfca02400;
        pwVar8 = pwVar11 + 2;
        uVar10 = uVar7 - 2;
      }
    }
    cVar2 = FUN_140024707(uVar6,&local_e4,&local_f8);
    pwVar11 = pwVar8;
    uVar7 = uVar10;
  } while (cVar2 != '\0');
  local_50 = 0xffffffff;
LAB_14003e56a:
  uVar7 = local_50;
  FUN_1446efa72(&local_60,0,local_50,1);
  local_f8 = local_60;
  local_e4 = uVar7;
LAB_14003e60e:
  if (local_f8 == (undefined1 *)0x0) {
    local_f8 = local_e0;
  }
  local_58 = local_f8;
  do {
    if ((int)uVar9 < 1) break;
    wVar1 = *_Str;
    uVar6 = (uint)(ushort)wVar1;
    pwVar11 = _Str + 1;
    uVar7 = uVar9 - 1;
    if ((wVar1 & 0xfc00U) == 0xd800) {
      if (uVar9 == 1) {
        FUN_1400247af(uVar6,&local_f8,&local_e4);
        break;
      }
      if (((ushort)*pwVar11 & 0xfc00) == 0xdc00) {
        uVar6 = (uint)(ushort)wVar1 * 0x400 + (uint)(ushort)*pwVar11 + 0xfca02400;
        pwVar11 = _Str + 2;
        uVar7 = uVar9 - 2;
      }
    }
    uVar9 = uVar7;
    _Str = pwVar11;
    cVar2 = FUN_1400247af(uVar6,&local_f8,&local_e4);
  } while (cVar2 != '\0');
  local_f8 = local_58;
  local_f0 = local_50;
  local_ec = (int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4;
  uVar3 = FUN_140008a34(local_108);
  *local_100 = uVar3;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14003e734 FUN_14003e734 body=525 status=ok
// SIG undefined FUN_14003e734(void)

void FUN_14003e734(longlong *param_1,wchar_t *param_2)

{
  uint *puVar1;
  wchar_t wVar2;
  ulonglong *puVar3;
  uint uVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_e8 [36];
  uint local_c4;
  uint local_c0 [32];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  pwVar5 = param_2;
  if (-1 < (char)param_1[5]) {
    do {
      wVar2 = *pwVar5;
      pwVar5 = pwVar5 + 1;
    } while (0xff80 < (ushort)(wVar2 + L'ﾀ'));
    if (wVar2 == L'\0') {
      sVar6 = wcslen(param_2);
      local_c4 = (int)sVar6 + 1;
      puVar3 = (ulonglong *)param_1[1];
      puVar1 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_c4,4);
        }
        else {
          FUN_14572512c(param_1,&local_c4);
        }
      }
      else {
        local_c4 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar1;
      }
      if (local_c4 != 0) {
        lVar7 = (longlong)(int)local_c4;
        local_40 = 0;
        if (param_2 == (wchar_t *)0x0) {
          local_38 = 0;
          local_30 = 0;
        }
        else {
          uVar4 = local_c4;
          if ((int)local_c4 < 1) {
            bVar8 = false;
          }
          else {
            bVar8 = param_2[local_c4 - 1] == L'\0';
            if (bVar8) {
              uVar4 = local_c4 - 1;
            }
          }
          FUN_1449b853c(local_c0,param_2,uVar4,bVar8);
        }
        (**(code **)(*param_1 + 0x170))(param_1,local_38,lVar7);
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_14003e839;
    }
  }
  if (param_2 == (wchar_t *)0x0) {
    uVar4 = 0;
  }
  else {
    sVar6 = wcslen(param_2);
    uVar4 = (uint)sVar6;
  }
  local_c0[0] = ~uVar4;
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,local_c0,4);
    }
    else {
      FUN_14572512c(param_1,local_c0);
    }
  }
  else {
    local_c0[0] = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (uVar4 + 1 != 0) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,(longlong)(int)(uVar4 + 1) * 2);
  }
LAB_14003e839:
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14003e942 FUN_14003e942 body=453 status=ok
// SIG undefined FUN_14003e942(void)

uint FUN_14003e942(longlong *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  bVar1 = *(byte *)*param_1;
  *param_1 = (longlong)((byte *)*param_1 + 1);
  iVar5 = *param_2;
  *param_2 = iVar5 + -1;
  if ((char)bVar1 < '\0') {
    uVar6 = 0x3f;
    if (1 < iVar5 && 0xbf < bVar1) {
      bVar2 = *(byte *)*param_1;
      *param_1 = (longlong)((byte *)*param_1 + 1);
      iVar5 = *param_2;
      *param_2 = iVar5 + -1;
      if ((bVar2 & 0xc0) == 0x80) {
        if (bVar1 < 0xe0) {
          uVar4 = ((uint)bVar1 * 0x40 + (uint)bVar2) - 0x3080;
          bVar7 = ((uint)bVar1 * 0x40 + (uint)bVar2) - 0x3880 < 0xfffff880;
        }
        else {
          if (iVar5 < 2) {
            return 0x3f;
          }
          bVar3 = *(byte *)*param_1;
          uVar6 = (uint)bVar3;
          *param_1 = (longlong)((byte *)*param_1 + 1);
          iVar5 = *param_2;
          *param_2 = iVar5 + -1;
          if ((uVar6 & 0xffffffc0) != 0x80) {
            return 0x3f;
          }
          if (bVar1 < 0xf0) {
            iVar5 = (uint)bVar1 * 0x1000 + (uint)bVar2 * 0x40;
            if ((uVar6 + iVar5) - 0xf207e < 0xffff0802) {
              return 0x3f;
            }
            if ((((uint)bVar1 * 0x1000 + (uint)bVar2 * 0x40) - 0xe2000 & 0xf800) == 0xd800) {
              return 0x3f;
            }
            return (iVar5 + uVar6) - 0xe2080;
          }
          if (iVar5 < 2) {
            return 0x3f;
          }
          uVar6 = (uint)*(byte *)*param_1;
          *param_1 = (longlong)((byte *)*param_1 + 1);
          iVar5 = *param_2;
          *param_2 = iVar5 + -1;
          if ((uVar6 & 0xffffffc0) != 0x80) {
            return 0x3f;
          }
          if (0xf7 < bVar1) {
            if (iVar5 < 2) {
              return 0x3f;
            }
            bVar2 = *(byte *)*param_1;
            *param_1 = (longlong)((byte *)*param_1 + 1);
            iVar5 = *param_2;
            *param_2 = iVar5 + -1;
            if ((iVar5 < 2 || bVar1 < 0xfc) || !SBORROW1('\0',bVar2 & 0xc0)) {
              return 0x3f;
            }
            *param_1 = *param_1 + 1;
            *param_2 = *param_2 + -1;
            return 0x3f;
          }
          iVar5 = (uint)bVar3 * 0x40 + (uint)bVar2 * 0x1000 + (uint)bVar1 * 0x40000;
          uVar4 = uVar6 + iVar5 + 0xfc37df80;
          bVar7 = uVar6 + iVar5 + 0xfc26df80 < 0xfff00000;
        }
        uVar6 = 0x3f;
        if (!bVar7) {
          uVar6 = uVar4;
        }
      }
    }
  }
  else {
    uVar6 = (uint)bVar1;
  }
  return uVar6;
}



// FUNCTION 14003eb08 FUN_14003eb08 body=1027 status=ok
// SIG undefined FUN_14003eb08(void)

void FUN_14003eb08(longlong *param_1,longlong param_2,double *param_3,longlong param_4)

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
  byte bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  
  if ((int)param_1[9] != *(int *)(param_4 + 0x10)) {
    (**(code **)(*param_1 + 0x2a8))(param_1,param_4);
  }
  dVar17 = *param_3;
  dVar16 = param_3[1];
  dVar19 = (double)param_1[10];
  dVar14 = dVar19;
  if ((dVar19 <= dVar17) && (dVar14 = dVar17, (double)param_1[0xd] < dVar17)) {
    dVar14 = (double)param_1[0xd];
  }
  dVar1 = param_3[2];
  dVar2 = (double)param_1[0xb];
  uVar23 = SUB84(dVar2,0);
  uVar24 = (int)((ulonglong)dVar2 >> 0x20);
  if ((dVar2 <= dVar16) &&
     (dVar3 = (double)param_1[0xe], uVar23 = SUB84(dVar16,0),
     uVar24 = (int)((ulonglong)dVar16 >> 0x20), dVar3 < dVar16)) {
    uVar23 = SUB84(dVar3,0);
    uVar24 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar3 = (double)param_1[0xc];
  uVar21 = SUB84(dVar3,0);
  uVar22 = (int)((ulonglong)dVar3 >> 0x20);
  if ((dVar3 <= dVar1) &&
     (dVar4 = (double)param_1[0xf], uVar21 = SUB84(dVar1,0),
     uVar22 = (int)((ulonglong)dVar1 >> 0x20), dVar4 < dVar1)) {
    uVar21 = SUB84(dVar4,0);
    uVar22 = (undefined4)((ulonglong)dVar4 >> 0x20);
  }
  dVar4 = dVar1 - (double)CONCAT44(uVar22,uVar21);
  dVar5 = dVar16 - (double)CONCAT44(uVar24,uVar23);
  dVar14 = dVar17 - dVar14;
  dVar15 = dVar4 * dVar4 + dVar14 * dVar14 + dVar5 * dVar5;
  dVar11 = DAT_14c8464f0;
  dVar12 = DAT_14c8464e8;
  dVar7 = DAT_14c8464e0;
  if (1e-08 < ABS(dVar15)) {
    dVar7 = 1.0 / SQRT(dVar15);
    dVar11 = dVar4 * dVar7;
    dVar12 = dVar5 * dVar7;
    dVar7 = dVar14 * dVar7;
  }
  dVar14 = param_3[6];
  dVar4 = param_3[5];
  dVar5 = param_3[4];
  if (*(char *)(param_2 + 0x58) == '\x01') {
    dVar8 = param_3[6] + *(double *)(param_2 + 0x50);
    dVar9 = param_3[5] + *(double *)(param_2 + 0x48);
    dVar6 = param_3[4] + *(double *)(param_2 + 0x40);
    dVar10 = dVar8 * dVar8 + dVar6 * dVar6 + dVar9 * dVar9;
    if (((dVar10 != 1.0) || (dVar14 = dVar8, dVar4 = dVar9, dVar5 = dVar6, NAN(dVar10))) &&
       (dVar14 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar10)) {
      dVar5 = 1.0 / SQRT(dVar10);
      dVar14 = dVar8 * dVar5;
      dVar4 = dVar9 * dVar5;
      dVar5 = dVar6 * dVar5;
    }
  }
  if ((((dVar17 < dVar19) || ((double)param_1[0xd] < dVar17)) ||
      ((dVar16 < dVar2 || (((double)param_1[0xe] < dVar16 || (dVar1 < dVar3)))))) ||
     ((double)param_1[0xf] < dVar1)) {
    fVar20 = (float)(dVar14 * dVar11 + dVar5 * dVar7 + dVar12 * dVar4);
  }
  else {
    fVar20 = -1.0;
  }
  bVar13 = (byte)(int)param_1[5];
  if (*(byte *)(param_2 + 0x3a) < bVar13) {
    bVar13 = *(byte *)(param_2 + 0x3a);
  }
  *(byte *)(param_1 + 5) = bVar13;
  if (*(char *)(param_2 + 0x39) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x29) = 1;
    if ((double)param_1[6] <= dVar15) {
      dVar15 = (double)param_1[6];
    }
    param_1[6] = (longlong)dVar15;
    if (dVar15 < 0.0) {
      dVar15 = sqrt(dVar15);
    }
    else {
      dVar15 = SQRT(dVar15);
    }
    fVar18 = *(float *)(param_1 + 7);
    if (dVar15 / param_3[3] <= (double)fVar18) {
      fVar18 = (float)(dVar15 / param_3[3]);
    }
    *(float *)(param_1 + 7) = fVar18;
    dVar19 = (double)param_1[10];
  }
  dVar17 = *param_3;
  if (dVar19 <= dVar17) {
    dVar19 = (double)param_1[0xd];
    dVar16 = 0.0;
    if (dVar17 <= dVar19) goto LAB_14003ee30;
  }
  dVar16 = (dVar17 - dVar19) * (dVar17 - dVar19);
LAB_14003ee30:
  dVar17 = param_3[1];
  dVar19 = (double)param_1[0xb];
  if ((dVar17 < dVar19) || (dVar19 = (double)param_1[0xe], dVar19 < dVar17)) {
    dVar16 = dVar16 + (dVar17 - dVar19) * (dVar17 - dVar19);
  }
  dVar17 = param_3[2];
  dVar19 = (double)param_1[0xc];
  if ((dVar17 < dVar19) || (dVar19 = (double)param_1[0xf], dVar19 < dVar17)) {
    dVar16 = dVar16 + (dVar17 - dVar19) * (dVar17 - dVar19);
  }
  dVar16 = dVar16 / (param_3[3] * param_3[3]);
  if (1.0 <= dVar16) {
    dVar16 = 1.0;
  }
  if (dVar16 <= 0.0) {
    dVar16 = 0.0;
  }
  dVar16 = (double)(fVar20 * 0.5 + 0.5) * dVar16;
  dVar17 = (double)param_1[8];
  if (dVar16 <= (double)param_1[8]) {
    dVar17 = dVar16;
  }
  param_1[8] = (longlong)dVar17;
  return;
}



// FUNCTION 14003ef0c FUN_14003ef0c body=255 status=ok
// SIG undefined FUN_14003ef0c(void)

void FUN_14003ef0c(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
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
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14003f00c FUN_14003f00c body=86 status=ok
// SIG undefined FUN_14003f00c(void)

longlong FUN_14003f00c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ae0ed68;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14003f062 FUN_14003f062 body=125 status=ok
// SIG undefined FUN_14003f062(void)

void FUN_14003f062(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    FUN_14003f0df(*plVar1,(int)plVar1[1]);
    *(undefined4 *)(plVar1 + 1) = 0;
    if (*(int *)((longlong)plVar1 + 0xc) == 0) {
      uVar2 = 0;
    }
    else {
      FUN_14003f128(plVar1);
      uVar2 = (undefined4)plVar1[1];
    }
    *(undefined1 (*) [16])(plVar1 + 0xd) = (undefined1  [16])0x0;
    plVar1[0xf] = 0;
    *(undefined4 *)(plVar1 + 0x10) = 0xffffffff;
    *(undefined4 *)((longlong)plVar1 + 0x84) = 0xffffffff;
    *(undefined4 *)(plVar1 + 0x11) = 0xffffffff;
    *(undefined4 *)((longlong)plVar1 + 0x8c) = 0xffffffff;
    FUN_14003f0df(*plVar1,uVar2);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 14003f0df FUN_14003f0df body=73 status=ok
// SIG undefined FUN_14003f0df(void)

void FUN_14003f0df(longlong param_1,int param_2)

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



// FUNCTION 14003f128 FUN_14003f128 body=48 status=ok
// SIG undefined FUN_14003f128(void)

void FUN_14003f128(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14003f158 FUN_14003f158 body=506 status=ok
// SIG undefined FUN_14003f158(void)

void FUN_14003f158(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  lVar5 = *(longlong *)(param_1 + 0x158);
  if (lVar5 != 0) {
    *(undefined8 *)(param_1 + 0x158) = 0;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_144725486(param_1 + 0x10);
  plVar8 = *(longlong **)(param_1 + 0x178);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  plVar8 = *(longlong **)(param_1 + 0x168);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if (*(longlong *)(param_1 + 0x158) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x158) + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ae0ee40;
  lVar5 = *(longlong *)(param_1 + 0x148);
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x140);
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar3 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar5 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar5;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  FUN_1447259a8(param_1 + 0x10);
  return;
}



// FUNCTION 14003f352 FUN_14003f352 body=9 status=ok
// SIG undefined FUN_14003f352(void)

void FUN_14003f352(longlong param_1)

{
  FUN_14003f35c(param_1 + 0x10);
  return;
}



// FUNCTION 14003f35c FUN_14003f35c body=62 status=ok
// SIG undefined FUN_14003f35c(void)

void FUN_14003f35c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  FUN_144725486();
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x20) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14003f39a(param_1);
  return;
}



// FUNCTION 14003f39a FUN_14003f39a body=115 status=ok
// SIG undefined FUN_14003f39a(void)

void FUN_14003f39a(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a38d070;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 14003f40e FUN_14003f40e body=135 status=ok
// SIG undefined FUN_14003f40e(void)

void FUN_14003f40e(longlong param_1)

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



// FUNCTION 14003f496 FUN_14003f496 body=124 status=ok
// SIG undefined FUN_14003f496(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14003f496(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca99ff0) {
    FUN_144b3d300(&DAT_14ca99ff0);
    if (DAT_14ca99ff0 == -1) {
      _DAT_14ca99fd8 = 0;
      DAT_14ca99fe0 = 0;
      _DAT_14ca99fc8 = 0;
      DAT_14ca99fd0 = 0;
      _DAT_14ca99fe8 = 0;
      atexit(FUN_14322f428);
      _Init_thread_footer(&DAT_14ca99ff0);
    }
  }
  return &DAT_14ca99fc8;
}



// FUNCTION 14003f512 FUN_14003f512 body=275 status=ok
// SIG undefined FUN_14003f512(void)

longlong FUN_14003f512(void)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14cad2858 == 0) {
      local_30 = &local_18;
      local_18 = FUN_144a7958c;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_146395584;
      local_38 = &LAB_147a0ba80;
      local_40 = &LAB_14575ccce;
      local_48 = L"Engine";
      local_50 = 0x40000000000;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) goto LAB_14003f55f;
  }
  lVar1 = 0;
LAB_14003f55f:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14003f626 FUN_14003f626 body=314 status=ok
// SIG undefined FUN_14003f626(void)

undefined8 FUN_14003f626(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    if (DAT_14cacf818 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1463b216c;
      local_38 = &LAB_1479977e3;
      local_40 = &LAB_1463b2171;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x750;
      FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
    }
    if ((*(int *)(DAT_14cacf818 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) == DAT_14cacf818 + 0x30)) {
      lVar1 = *(longlong *)(param_2 + 0x428);
      goto LAB_14003f67f;
    }
  }
  lVar1 = FUN_140849bbe(param_2);
LAB_14003f67f:
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0xae8);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14003f762 FUN_14003f762 body=270 status=ok
// SIG undefined FUN_14003f762(void)

longlong FUN_14003f762(longlong param_1)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    if (DAT_14cacf818 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1463b216c;
      local_38 = &LAB_1479977e3;
      local_40 = &LAB_1463b2171;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x750;
      FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
    }
    if ((*(int *)(DAT_14cacf818 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) == DAT_14cacf818 + 0x30)) goto LAB_14003f787;
  }
  lVar1 = 0;
LAB_14003f787:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14003f872 FUN_14003f872 body=604 status=ok
// SIG undefined FUN_14003f872(void)

void FUN_14003f872(longlong param_1,int param_2,undefined8 param_3,double *param_4,double *param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  lVar3 = *(longlong *)(param_1 + 0xf8) + (longlong)param_2 * 0x18;
  iVar1 = *(int *)(lVar3 + 0x10);
  lVar4 = *(longlong *)(lVar3 + 8);
  if (*(longlong *)(lVar3 + 8) == 0) {
    lVar4 = lVar3;
  }
  if ((longlong)iVar1 < 1) {
    uVar10 = 0;
    uVar12 = 0;
    uVar5 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar21 = 0;
    uVar22 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar17 = 0;
    uVar18 = 0;
    uVar9 = uVar10;
    uVar11 = uVar12;
    if (iVar1 == 0) goto LAB_14003f961;
  }
  else {
    uVar5 = 0x7fefffffffffffff;
    uVar9 = 0xffffffff;
    uVar11 = 0xffefffff;
  }
  lVar3 = 0;
  uVar10 = (undefined4)uVar5;
  uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar13 = uVar10;
  uVar14 = uVar12;
  uVar15 = uVar10;
  uVar16 = uVar12;
  uVar17 = uVar9;
  uVar18 = uVar11;
  uVar19 = uVar9;
  uVar20 = uVar11;
  uVar21 = uVar9;
  uVar22 = uVar11;
  do {
    lVar2 = *(longlong *)(lVar4 + lVar3);
    if ((*(byte *)(lVar2 + 8) & 3) == 0) {
      FUN_146e22506(lVar2,param_3);
    }
    else {
      FUN_1447269c8(lVar2,param_3);
    }
    lVar2 = *(longlong *)(lVar4 + lVar3);
    dVar6 = *(double *)(lVar2 + 0x28);
    if (dVar6 <= (double)CONCAT44(uVar14,uVar13)) {
      uVar13 = SUB84(dVar6,0);
      uVar14 = (undefined4)((ulonglong)dVar6 >> 0x20);
    }
    dVar6 = *(double *)(lVar2 + 0x20);
    if (dVar6 <= (double)CONCAT44(uVar16,uVar15)) {
      uVar15 = SUB84(dVar6,0);
      uVar16 = (undefined4)((ulonglong)dVar6 >> 0x20);
    }
    dVar6 = *(double *)(lVar2 + 0x18);
    if (dVar6 <= (double)CONCAT44(uVar12,uVar10)) {
      uVar10 = SUB84(dVar6,0);
      uVar12 = (undefined4)((ulonglong)dVar6 >> 0x20);
    }
    dVar6 = *(double *)(lVar2 + 0x40);
    if ((double)CONCAT44(uVar18,uVar17) <= dVar6) {
      uVar17 = SUB84(dVar6,0);
      uVar18 = (undefined4)((ulonglong)dVar6 >> 0x20);
    }
    dVar6 = *(double *)(lVar2 + 0x38);
    if ((double)CONCAT44(uVar20,uVar19) <= dVar6) {
      uVar19 = SUB84(dVar6,0);
      uVar20 = (undefined4)((ulonglong)dVar6 >> 0x20);
    }
    dVar6 = *(double *)(lVar2 + 0x30);
    if ((double)CONCAT44(uVar22,uVar21) <= dVar6) {
      uVar21 = SUB84(dVar6,0);
      uVar22 = (undefined4)((ulonglong)dVar6 >> 0x20);
    }
    lVar3 = lVar3 + 8;
  } while ((longlong)iVar1 * 8 != lVar3);
LAB_14003f961:
  dVar6 = *param_4;
  dVar7 = param_4[1];
  dVar8 = param_4[2];
  lVar3 = *(longlong *)(param_1 + 0x140);
  lVar4 = (longlong)param_2 * 0x30;
  *(double *)(lVar3 + lVar4) = (double)CONCAT44(uVar12,uVar10) - ABS(dVar6);
  *(double *)(lVar3 + 8 + lVar4) = (double)CONCAT44(uVar16,uVar15) - ABS(dVar7);
  *(double *)(lVar3 + 0x10 + lVar4) = (double)CONCAT44(uVar14,uVar13) - ABS(dVar8);
  *(double *)(lVar3 + 0x18 + lVar4) = ABS(dVar6) + (double)CONCAT44(uVar22,uVar21);
  *(double *)(lVar3 + 0x20 + lVar4) = ABS(dVar7) + (double)CONCAT44(uVar20,uVar19);
  *(double *)(lVar3 + 0x28 + lVar4) = ABS(dVar8) + (double)CONCAT44(uVar18,uVar17);
  lVar3 = *(longlong *)(param_1 + 0x140);
  dVar6 = *param_5;
  dVar7 = param_5[1];
  if (0.0 <= dVar6) {
    dVar6 = 0.0;
  }
  if (0.0 <= dVar7) {
    dVar7 = 0.0;
  }
  dVar8 = param_5[2];
  *(double *)(lVar3 + lVar4) = dVar6 + *(double *)(lVar3 + lVar4);
  if (0.0 <= dVar8) {
    dVar8 = 0.0;
  }
  *(double *)(lVar3 + 8 + lVar4) = dVar7 + *(double *)(lVar3 + 8 + lVar4);
  *(double *)(lVar3 + 0x10 + lVar4) = dVar8 + *(double *)(lVar3 + 0x10 + lVar4);
  dVar6 = *param_5;
  dVar7 = param_5[1];
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (dVar7 <= 0.0) {
    dVar7 = 0.0;
  }
  dVar8 = param_5[2];
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  *(double *)(lVar3 + 0x18 + lVar4) = dVar6 + *(double *)(lVar3 + 0x18 + lVar4);
  *(double *)(lVar3 + 0x20 + lVar4) = dVar7 + *(double *)(lVar3 + 0x20 + lVar4);
  *(double *)(lVar3 + 0x28 + lVar4) = dVar8 + *(double *)(lVar3 + 0x28 + lVar4);
  return;
}



// FUNCTION 14003face FUN_14003face body=85 status=ok
// SIG undefined FUN_14003face(void)

void FUN_14003face(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_14011072c();
  return;
}



// FUNCTION 14003fb24 FUN_14003fb24 body=177 status=ok
// SIG undefined FUN_14003fb24(void)

void FUN_14003fb24(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStackY_48 [32];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStackY_48;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x50);
    if ((*(uint *)(lVar1 + 8) & 0xfffffffe) != 2) {
      plVar2 = param_1;
      if (*(uint *)(lVar1 + 8) == 4) {
        do {
          plVar2 = (longlong *)*plVar2;
          if (plVar2 == (longlong *)0x0) goto LAB_14003fb7f;
        } while (plVar2[2] != param_2);
        FUN_14042ca7a(param_1,plVar2);
        FUN_1400020a8(plVar2);
        lVar1 = *(longlong *)(param_2 + 0x50);
LAB_14003fb7f:
        LOCK();
        *(undefined4 *)(lVar1 + 8) = 2;
        UNLOCK();
      }
      else {
        LOCK();
        *(undefined4 *)(lVar1 + 8) = 3;
        UNLOCK();
        local_1c = *(uint *)(param_2 + 0x38);
        AK::SoundEngine::PrepareEvent
                  (0,&local_1c,1,(_func_void_uint_void_ptr_AKRESULT_void_ptr *)&LAB_1438abaaa,
                   *(void **)(param_2 + 0x50));
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStackY_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14003fbd6 FUN_14003fbd6 body=654 status=ok
// SIG undefined FUN_14003fbd6(void)

void FUN_14003fbd6(void)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  longlong local_68 [2];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((DAT_14caea070 == 0) && (DAT_14c86a9f8 == '\x01')) {
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    while (iVar1 = *(int *)(lVar8 + 0xc60), iVar1 != 2) {
      if (iVar1 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) break;
      }
      if ((DAT_14caea070 == 1) || (DAT_14c86a9f8 != '\x01')) break;
    }
  }
  if ((DAT_14caea070 & 1) != 0) goto LAB_14003fc3b;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) goto LAB_14003fc3b;
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    if (DVar4 != DVar5) goto LAB_14003fc3b;
  }
  DAT_14caea074 = DAT_14caea074 + 1;
  FUN_140032b16(0);
  lVar8 = 0;
  do {
    if (*(longlong *)((longlong)&DAT_14caea080 + lVar8) == 0) {
      FUN_140056680(local_68,*(undefined8 *)
                              ((longlong)&PTR_u_engine_ini__Script_Engine_Engine_14a9ca3b0 + lVar8))
      ;
      FUN_14283d1c6(local_58,local_68,0,0);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      uVar6 = FUN_140a1dfd8();
      lVar7 = FUN_140277b32(uVar6,0);
      *(longlong *)((longlong)&DAT_14caea080 + lVar8) = lVar7;
      if (lVar7 == 0) {
        if ((DAT_14caea074 == 1) || (DAT_14c872ba8 == '\0')) {
          uVar6 = FUN_140a1dfd8();
          local_70 = 0;
          local_80 = 0;
          local_78 = 1;
          local_88 = 0x1000;
          lVar7 = FUN_1412ecd05(uVar6,0);
          *(longlong *)((longlong)&DAT_14caea080 + lVar8) = lVar7;
          if (lVar7 != 0) goto LAB_14003fddb;
        }
      }
      else {
LAB_14003fddb:
        uVar2 = *(uint *)(lVar7 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar7 = 0;
        }
        FUN_1447f71cc(lVar7,0x40000000);
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
    }
    lVar8 = lVar8 + 8;
  } while (lVar8 != 0x38);
  DAT_14caea074 = DAT_14caea074 + -1;
  DAT_14caea070 = DAT_14caea074 == 0;
  if (((bool)DAT_14caea070) &&
     (((DAT_14c760d84 != 0 && ((DAT_14ca84f5a & 1) != 0)) ||
      (cVar3 = FUN_1406917e6(), cVar3 != '\0')))) {
    FUN_14129f5b4();
  }
LAB_14003fc3b:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14003fe66 FUN_14003fe66 body=546 status=ok
// SIG undefined FUN_14003fe66(void)

void FUN_14003fe66(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *_Src;
  undefined1 *_Dst;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 local_6b;
  undefined1 uStack_68;
  undefined4 uStack_67;
  undefined4 uStack_63;
  undefined4 uStack_5f;
  undefined1 local_58 [16];
  undefined1 *local_48;
  longlong lStack_40;
  ulonglong local_30;
  
  uVar4 = DAT_14c951640;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_5 == 0) {
    uVar7 = FUN_1411b6034();
    param_5 = FUN_140277b32(uVar7,uVar4,L"DebugCanvasObject",0);
    if (param_5 == 0) {
      FUN_1446f470e(&local_80,L"DebugCanvasObject",1);
      local_90 = 0;
      local_98 = 0;
      lVar10 = 0;
      param_5 = FUN_1460d9905(DAT_14c951640,local_80,0,0);
      uVar6 = *(uint *)(param_5 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      FUN_1447f71cc(lVar10,0x40000000);
    }
  }
  uVar4 = DAT_14c8463e8;
  iVar8 = *(int *)(param_3 + 0x4e4) - *(int *)(param_3 + 0x4dc);
  iVar5 = *(int *)(param_3 + 0x4e0) - *(int *)(param_3 + 0x4d8);
  *(undefined8 *)(param_5 + 0x380) = DAT_14c8463e0;
  *(undefined8 *)(param_5 + 0x388) = uVar4;
  uVar3 = DAT_14c8463d8._4_4_;
  uVar2 = (undefined4)DAT_14c8463d8;
  uVar1 = DAT_14c8463d0._4_4_;
  *(undefined4 *)(param_5 + 0x370) = (undefined4)DAT_14c8463d0;
  *(undefined4 *)(param_5 + 0x374) = uVar1;
  *(undefined4 *)(param_5 + 0x378) = uVar2;
  *(undefined4 *)(param_5 + 0x37c) = uVar3;
  *(int *)(param_5 + 0x40) = iVar5;
  *(int *)(param_5 + 0x44) = iVar8;
  *(int *)(param_5 + 0x88) = iVar5;
  *(int *)(param_5 + 0x8c) = iVar8;
  *(longlong *)(param_5 + 0x2e8) = param_3;
  *(undefined8 *)(param_5 + 0x2e0) = param_4;
  FUN_14007fbbc(param_5);
  FUN_14007fbbc(param_5);
  FUN_14004008a(param_5,param_3);
  local_78 = *param_1;
  uStack_67 = *(undefined4 *)((longlong)param_1 + 0x11);
  uStack_63 = *(undefined4 *)((longlong)param_1 + 0x15);
  uStack_5f = *(undefined4 *)((longlong)param_1 + 0x19);
  uStack_70 = (undefined5)param_1[1];
  uStack_68 = (undefined1)((uint)*(undefined4 *)((longlong)param_1 + 0xd) >> 0x18);
  local_6b = (undefined3)((ulonglong)param_1[1] >> 0x28);
  local_48 = (undefined1 *)0x0;
  lStack_40 = 0;
  iVar5 = *(int *)(param_1 + 7);
  uVar6 = iVar5 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar6) {
    uVar9 = 0x80;
    if (0x80 < uVar6) {
      uVar9 = uVar6;
    }
    lStack_40 = (ulonglong)uVar9 << 0x20;
    FUN_1446efbd8(local_58,0);
    iVar5 = *(int *)(param_1 + 7);
  }
  lStack_40 = CONCAT44(lStack_40._4_4_,iVar5);
  if (iVar5 != 0) {
    _Src = param_1 + 4;
    if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
      _Src = (undefined8 *)param_1[6];
    }
    _Dst = local_58;
    if (local_48 != (undefined1 *)0x0) {
      _Dst = local_48;
    }
    memcpy(_Dst,_Src,(ulonglong)(iVar5 + 0x1fU >> 3 & 0xfffffffc));
  }
  FUN_14472781c(&local_78,param_5);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004008a FUN_14004008a body=203 status=ok
// SIG undefined FUN_14004008a(void)

void FUN_14004008a(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *(longlong *)(param_1 + 0x2e8) = param_2;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x2f0) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0x3ff0000000000000;
  }
  else {
    if (*(longlong *)(DAT_14cb0d2b0 + 0xfd0) != 0) {
      cVar1 = FUN_144b2acae(param_2);
      if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140040152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x68))
                  (*(longlong **)(DAT_14cb0d2b0 + 0xfd0),param_2,param_1);
        return;
      }
    }
    puVar3 = (undefined8 *)(param_2 + 0xab0);
    puVar4 = (undefined8 *)(param_1 + 0x2f0);
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}



// FUNCTION 140040156 FUN_140040156 body=807 status=ok
// SIG undefined FUN_140040156(void)

ulonglong FUN_140040156(uint *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  undefined7 uVar4;
  uint *puVar5;
  ulonglong uVar3;
  
  uVar4 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_140040176::switchdataD_14aa8688c +
           (longlong)(int)(&switchD_140040176::switchdataD_14aa8688c)[param_2]) >> 8);
  switch(param_2) {
  case 0:
    bVar1 = (byte)*param_1;
    goto LAB_14004040f;
  case 1:
    bVar1 = (byte)*param_1;
    break;
  case 2:
    bVar1 = (byte)*param_1;
    goto LAB_1400403d6;
  case 3:
  case 0x12:
  case 0x13:
  case 0x16:
  case 0x19:
  case 0x24:
  case 0x25:
  case 0x29:
  case 0x34:
  case 0x36:
  case 0x42:
  case 0x4a:
  case 0x5c:
  case 0x5d:
  case 0x61:
  case 0x72:
  case 0x83:
  case 0x90:
  case 0x94:
  case 0x9c:
  case 0xcc:
    return CONCAT71(uVar4,1);
  case 4:
    bVar1 = (byte)*param_1;
    goto LAB_140040467;
  case 5:
    bVar1 = (byte)*param_1;
    goto LAB_14004045a;
  case 6:
    bVar1 = (byte)*param_1;
    goto LAB_140040419;
  case 7:
    bVar1 = (byte)*param_1;
    goto LAB_1400403ff;
  case 8:
    bVar1 = *(byte *)((longlong)param_1 + 1);
    goto LAB_14004040f;
  case 9:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x2a:
  case 0x2c:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x41:
  case 0x44:
  case 0x4b:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x5f:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x71:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x86:
  case 0x88:
  case 0x8a:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x93:
  case 0x97:
  case 0x9b:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xba:
  case 0xbb:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd8:
  case 0xd9:
  case 0xde:
  case 0xdf:
  case 0xe0:
    return 0;
  case 10:
    bVar1 = *(byte *)((longlong)param_1 + 1);
    goto LAB_1400403d6;
  case 0xb:
    bVar1 = *(byte *)((longlong)param_1 + 1);
    goto LAB_1400403e8;
  case 0xc:
    bVar1 = *(byte *)((longlong)param_1 + 1);
    goto LAB_140040467;
  case 0x11:
    bVar1 = *(byte *)((longlong)param_1 + 2);
    break;
  case 0x14:
    bVar1 = *(byte *)((longlong)param_1 + 2);
    goto LAB_140040467;
  case 0x15:
    bVar1 = *(byte *)((longlong)param_1 + 2);
    goto LAB_14004045a;
  case 0x17:
    bVar1 = *(byte *)((longlong)param_1 + 2);
    goto LAB_1400403ff;
  case 0x18:
    bVar1 = *(byte *)((longlong)param_1 + 3);
    goto LAB_14004040f;
  case 0x1a:
    bVar1 = *(byte *)((longlong)param_1 + 3);
    goto LAB_1400403d6;
  case 0x1f:
    uVar2 = *param_1;
    goto LAB_14004037f;
  case 0x20:
    bVar1 = (byte)param_1[1];
    goto LAB_14004040f;
  case 0x21:
    bVar1 = (byte)param_1[1];
    break;
  case 0x22:
    bVar1 = (byte)param_1[1];
    goto LAB_1400403d6;
  case 0x23:
    bVar1 = (byte)param_1[1];
    goto LAB_1400403e8;
  case 0x26:
    bVar1 = (byte)param_1[1];
    goto LAB_140040419;
  case 0x27:
    bVar1 = (byte)param_1[1];
    goto LAB_1400403ff;
  case 0x28:
    bVar1 = *(byte *)((longlong)param_1 + 5);
    goto LAB_14004040f;
  case 0x2b:
    bVar1 = *(byte *)((longlong)param_1 + 5);
    goto LAB_1400403e8;
  case 0x2d:
    bVar1 = *(byte *)((longlong)param_1 + 5);
    goto LAB_14004045a;
  case 0x35:
    bVar1 = *(byte *)((longlong)param_1 + 6);
    goto LAB_14004045a;
  case 0x37:
    bVar1 = *(byte *)((longlong)param_1 + 6);
    goto LAB_1400403ff;
  case 0x38:
    bVar1 = *(byte *)((longlong)param_1 + 7);
    goto LAB_14004040f;
  case 0x39:
    bVar1 = *(byte *)((longlong)param_1 + 7);
    break;
  case 0x3f:
    uVar2 = param_1[1];
LAB_14004037f:
    return (ulonglong)(uVar2 >> 0x1f);
  case 0x40:
    bVar1 = (byte)param_1[2];
    goto LAB_14004040f;
  case 0x43:
    bVar1 = (byte)param_1[2];
    goto LAB_1400403e8;
  case 0x45:
    bVar1 = (byte)param_1[2];
    goto LAB_14004045a;
  case 0x46:
    bVar1 = (byte)param_1[2];
    goto LAB_140040419;
  case 0x47:
    bVar1 = (byte)param_1[2];
    goto LAB_1400403ff;
  case 0x48:
    bVar1 = *(byte *)((longlong)param_1 + 9);
    goto LAB_14004040f;
  case 0x49:
    bVar1 = *(byte *)((longlong)param_1 + 9);
    break;
  case 0x4c:
    bVar1 = *(byte *)((longlong)param_1 + 9);
    goto LAB_140040467;
  case 0x4d:
    bVar1 = *(byte *)((longlong)param_1 + 9);
    goto LAB_14004045a;
  case 0x52:
    bVar1 = *(byte *)((longlong)param_1 + 10);
    goto LAB_1400403d6;
  case 0x53:
    bVar1 = *(byte *)((longlong)param_1 + 10);
    goto LAB_1400403e8;
  case 0x54:
    bVar1 = *(byte *)((longlong)param_1 + 10);
    goto LAB_140040467;
  case 0x55:
    bVar1 = *(byte *)((longlong)param_1 + 10);
    goto LAB_14004045a;
  case 0x59:
    bVar1 = *(byte *)((longlong)param_1 + 0xb);
    break;
  case 0x5a:
    bVar1 = *(byte *)((longlong)param_1 + 0xb);
    goto LAB_1400403d6;
  case 0x5b:
    bVar1 = *(byte *)((longlong)param_1 + 0xb);
    goto LAB_1400403e8;
  case 0x5e:
    bVar1 = *(byte *)((longlong)param_1 + 0xb);
    goto LAB_140040419;
  case 0x60:
    bVar1 = (byte)param_1[3];
    goto LAB_14004040f;
  case 0x62:
    bVar1 = (byte)param_1[3];
    goto LAB_1400403d6;
  case 0x6f:
    bVar1 = *(byte *)((longlong)param_1 + 0xd);
    goto LAB_1400403ff;
  case 0x70:
    bVar1 = *(byte *)((longlong)param_1 + 0xe);
    goto LAB_14004040f;
  case 0x84:
    bVar1 = (byte)param_1[4];
    goto LAB_140040467;
  case 0x85:
    bVar1 = (byte)param_1[4];
    goto LAB_14004045a;
  case 0x87:
    bVar1 = (byte)param_1[4];
    goto LAB_1400403ff;
  case 0x89:
    bVar1 = *(byte *)((longlong)param_1 + 0x11);
    break;
  case 0x8b:
    bVar1 = *(byte *)((longlong)param_1 + 0x11);
    goto LAB_1400403e8;
  case 0x8f:
    bVar1 = *(byte *)((longlong)param_1 + 0x11);
    goto LAB_1400403ff;
  case 0x91:
    bVar1 = *(byte *)((longlong)param_1 + 0x12);
    break;
  case 0x92:
    bVar1 = *(byte *)((longlong)param_1 + 0x12);
    goto LAB_1400403d6;
  case 0x95:
    bVar1 = *(byte *)((longlong)param_1 + 0x12);
    goto LAB_14004045a;
  case 0x96:
    bVar1 = *(byte *)((longlong)param_1 + 0x12);
    goto LAB_140040419;
  case 0x98:
    bVar1 = *(byte *)((longlong)param_1 + 0x13);
    goto LAB_14004040f;
  case 0x99:
    bVar1 = *(byte *)((longlong)param_1 + 0x13);
    break;
  case 0x9a:
    bVar1 = *(byte *)((longlong)param_1 + 0x13);
    goto LAB_1400403d6;
  case 0x9d:
    bVar1 = *(byte *)((longlong)param_1 + 0x13);
    goto LAB_14004045a;
  case 0xa2:
    bVar1 = (byte)param_1[5];
    goto LAB_1400403d6;
  case 0xa8:
    bVar1 = *(byte *)((longlong)param_1 + 0x15);
    goto LAB_14004040f;
  case 0xa9:
    bVar1 = *(byte *)((longlong)param_1 + 0x15);
    break;
  case 0xaa:
    bVar1 = *(byte *)((longlong)param_1 + 0x15);
    goto LAB_1400403d6;
  case 0xab:
    bVar1 = *(byte *)((longlong)param_1 + 0x15);
    goto LAB_1400403e8;
  case 0xb9:
    bVar1 = *(byte *)((longlong)param_1 + 0x17);
    break;
  case 0xbc:
    bVar1 = *(byte *)((longlong)param_1 + 0x17);
    goto LAB_140040467;
  case 0xc1:
    bVar1 = (byte)param_1[6];
    break;
  case 0xc5:
    bVar1 = (byte)param_1[6];
    goto LAB_14004045a;
  case 0xc6:
    bVar1 = (byte)param_1[6];
    goto LAB_140040419;
  case 199:
    bVar1 = (byte)param_1[6];
    goto LAB_1400403ff;
  case 0xd0:
    bVar1 = *(byte *)((longlong)param_1 + 0x1a);
LAB_14004040f:
    return CONCAT71(uVar4,bVar1) & 0xffffffffffffff01;
  case 0xd1:
    bVar1 = *(byte *)((longlong)param_1 + 0x1a);
    break;
  case 0xd2:
    bVar1 = *(byte *)((longlong)param_1 + 0x1a);
    goto LAB_1400403d6;
  case 0xd3:
    bVar1 = *(byte *)((longlong)param_1 + 0x1a);
    goto LAB_1400403e8;
  case 0xd4:
    bVar1 = *(byte *)((longlong)param_1 + 0x1a);
    goto LAB_140040467;
  case 0xd5:
    bVar1 = *(byte *)((longlong)param_1 + 0x1a);
    goto LAB_14004045a;
  case 0xd6:
    bVar1 = *(byte *)((longlong)param_1 + 0x1a);
LAB_140040419:
    uVar3 = CONCAT71(uVar4,bVar1) & 0xffffffffffffff40;
    return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 6);
  case 0xd7:
    bVar1 = *(byte *)((longlong)param_1 + 0x1a);
LAB_1400403ff:
    return CONCAT71(uVar4,bVar1 >> 7);
  case 0xda:
    bVar1 = *(byte *)((longlong)param_1 + 0x1b);
LAB_1400403d6:
    uVar3 = CONCAT71(uVar4,bVar1) & 0xffffffffffffff04;
    return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 2);
  case 0xdb:
    bVar1 = *(byte *)((longlong)param_1 + 0x1b);
LAB_1400403e8:
    uVar3 = CONCAT71(uVar4,bVar1) & 0xffffffffffffff08;
    return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 3);
  case 0xdc:
    bVar1 = *(byte *)((longlong)param_1 + 0x1b);
LAB_140040467:
    uVar3 = CONCAT71(uVar4,bVar1) & 0xffffffffffffff10;
    return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 4);
  case 0xdd:
    bVar1 = *(byte *)((longlong)param_1 + 0x1b);
LAB_14004045a:
    uVar3 = CONCAT71(uVar4,bVar1) & 0xffffffffffffff20;
    return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 5);
  case 0xe1:
    bVar1 = (byte)param_1[7];
    break;
  default:
    param_2 = param_2 - 0xe2;
    if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[0xe])) {
      puVar5 = param_1 + 8;
      if (*(uint **)(param_1 + 0xc) != (uint *)0x0) {
        puVar5 = *(uint **)(param_1 + 0xc);
      }
      return (ulonglong)
             CONCAT31((int3)(puVar5[param_2 >> 5] >> 8),
                      (puVar5[param_2 >> 5] >> (param_2 & 0x1f) & 1) != 0);
    }
    FUN_147d11924(param_2);
    return 0;
  }
  uVar3 = CONCAT71(uVar4,bVar1) & 0xffffffffffffff02;
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 1);
}



// FUNCTION 140040490 FUN_140040490 body=326 status=ok
// SIG undefined FUN_140040490(void)

undefined8 FUN_140040490(longlong param_1,undefined8 param_2,int param_3,uint param_4,int param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x230) + (longlong)param_3 * 0xa0;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x240) + 0x2e4);
  if (cVar1 == '\x02') {
    if (((int)param_4 < 0) || (*(int *)(lVar4 + 0x30) <= (int)param_4)) {
      return 0;
    }
    uVar2 = (ulonglong)param_4;
  }
  else {
    if (param_5 != 1) {
      if (((cVar1 == '\x01') && (*(longlong *)(param_1 + 0x48) != 0)) &&
         (uVar2 = (ulonglong)(int)param_4,
         *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) + 0x40 + uVar2 * 0x150) ==
         param_4)) goto LAB_1400404d9;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb07dc8) && (FUN_144b3d300(&DAT_14cb07dc8), DAT_14cb07dc8 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cb07dc0 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.SkinCache.SkipCompilingGPUSkinVF",1);
        _Init_thread_footer(&DAT_14cb07dc8);
      }
      if ((DAT_14cb07dc0 == (longlong *)0x0 || *(int *)(param_1 + 0x60) == 1) ||
         (cVar1 = (**(code **)(*DAT_14cb07dc0 + 0xa8))(), cVar1 == '\0')) {
        puVar3 = (undefined8 *)
                 ((longlong)(int)param_4 * 8 +
                 *(longlong *)(*(longlong *)(param_1 + 0x230) + 0x18 + (longlong)param_3 * 0xa0));
        goto LAB_140040571;
      }
    }
    uVar2 = (ulonglong)(int)param_4;
  }
LAB_1400404d9:
  puVar3 = (undefined8 *)(uVar2 * 8 + *(longlong *)(lVar4 + 0x28));
LAB_140040571:
  return *puVar3;
}



// FUNCTION 1400405d6 FUN_1400405d6 body=118 status=ok
// SIG undefined FUN_1400405d6(void)

void FUN_1400405d6(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  
  (**(code **)(*DAT_14ca83900 + 0xd0))(DAT_14ca83900,param_1);
  if (param_1 != 0) {
    piVar2 = (int *)((param_1 + -8) - (ulonglong)*(uint *)(param_1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14004064c FUN_14004064c body=20 status=ok
// SIG undefined FUN_14004064c(void)

ulonglong FUN_14004064c(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2c0))();
  return uVar1 ^ 1;
}



// FUNCTION 140040664 FUN_140040664 body=241 status=ok
// SIG undefined FUN_140040664(void)

ulonglong FUN_140040664(longlong param_1,uint *param_2)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x1b8) != 0) {
    uVar3 = *param_2;
    iVar6 = (uVar3 << 0x10 | uVar3 & 0xffff) + param_2[2] +
            ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4);
    uVar7 = ~(iVar6 * 0x8000) + iVar6;
    uVar7 = ((int)uVar7 >> 10 ^ uVar7) * 9;
    uVar7 = (int)uVar7 >> 6 ^ uVar7;
    uVar7 = ~(uVar7 << 0xb) + uVar7;
    uVar2 = *(ushort *)
             (*(longlong *)(param_1 + 0x1b0) +
             (longlong)(int)(*(int *)(param_1 + 0x1b8) - 1U & ((int)uVar7 >> 0x10 ^ uVar7)) * 2);
    if (uVar2 != 0) {
      uVar7 = uVar2 - 1;
      lVar4 = *(longlong *)(param_1 + 0x1a0);
      do {
        uVar5 = (ulonglong)uVar7;
        if ((((*(uint *)(lVar4 + uVar5 * 0x18) == uVar3) &&
             (*(uint *)(lVar4 + 8 + uVar5 * 0x18) == param_2[2])) &&
            (lVar1 = lVar4 + uVar5 * 0x18, param_2[3] == (int)*(short *)(lVar1 + 0xc))) &&
           (*(ushort *)(lVar1 + 0xe) >> 0xe == (ushort)(byte)param_2[4])) {
          return uVar5;
        }
        uVar2 = *(ushort *)(lVar4 + 0xe + uVar5 * 0x18);
        uVar7 = uVar2 & 0x3fff;
      } while ((uVar2 & 0x3fff) != 0);
    }
  }
  return 0xffffffff;
}



// FUNCTION 140040756 FUN_140040756 body=230 status=ok
// SIG undefined FUN_140040756(void)

ulonglong FUN_140040756(longlong param_1,uint *param_2)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x1d8) != 0) {
    uVar3 = *param_2;
    iVar6 = (uVar3 << 0x10 | uVar3 & 0xffff) + param_2[2] +
            ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4);
    uVar7 = ~(iVar6 * 0x8000) + iVar6;
    uVar7 = ((int)uVar7 >> 10 ^ uVar7) * 9;
    uVar7 = (int)uVar7 >> 6 ^ uVar7;
    uVar7 = ~(uVar7 << 0xb) + uVar7;
    uVar2 = *(ushort *)
             (*(longlong *)(param_1 + 0x1d0) +
             (longlong)(int)(*(int *)(param_1 + 0x1d8) - 1U & ((int)uVar7 >> 0x10 ^ uVar7)) * 2);
    if (uVar2 != 0) {
      uVar7 = uVar2 - 1;
      lVar4 = *(longlong *)(param_1 + 0x1c0);
      do {
        uVar5 = (ulonglong)uVar7;
        if ((((*(uint *)(lVar4 + uVar5 * 0x18) == uVar3) &&
             (*(uint *)(lVar4 + 8 + uVar5 * 0x18) == param_2[2])) &&
            (lVar1 = lVar4 + uVar5 * 0x18, param_2[3] == (int)*(short *)(lVar1 + 0xc))) &&
           (*(ushort *)(lVar1 + 0xe) >> 0xe == (ushort)(byte)param_2[4])) {
          return uVar5;
        }
        uVar2 = *(ushort *)(lVar4 + 0xe + uVar5 * 0x18);
        uVar7 = uVar2 & 0x3fff;
      } while ((uVar2 & 0x3fff) != 0);
    }
  }
  return 0xffffffff;
}



// FUNCTION 14004084a FUN_14004084a body=71 status=ok
// SIG undefined FUN_14004084a(void)

undefined8 * FUN_14004084a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7b7a30;
  FUN_144728aa2(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140040892 FUN_140040892 body=373 status=ok
// SIG undefined FUN_140040892(void)

void FUN_140040892(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14004091d;
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
LAB_14004091d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 140040a08 FUN_140040a08 body=327 status=ok
// SIG undefined FUN_140040a08(void)

longlong * FUN_140040a08(longlong *param_1)

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
  
  if ((DAT_14cb0d2b0 != 0) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar8) + 0x2a0);
      if (lVar4 != 0) {
        plVar7 = *(longlong **)(lVar4 + 0xf8);
        if ((plVar7 != (longlong *)0x0) &&
           (plVar7 != (longlong *)&DAT_00000008 &&
            *(longlong *)((longlong)plVar7 + 0xb4) == DAT_14cb08720)) {
          plVar5 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7);
          lVar8 = *plVar5;
          if (lVar8 == 0) {
            (**(code **)(*DAT_14ca83900 + 0x2c8))(DAT_14ca83900,param_1,plVar7[0x12]);
            lVar4 = *param_1;
          }
          else {
            LOCK();
            *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            UNLOCK();
            *param_1 = lVar8;
            LOCK();
            *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            UNLOCK();
            lVar4 = *param_1;
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
                plVar6 = (longlong *)FUN_14001cc68(0x10,8);
                plVar6[1] = lVar8;
                plVar7 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c8;
                if ((bVar3 & 2) == 0) {
                  do {
                    *plVar6 = (longlong)plVar7;
                    LOCK();
                    bVar9 = plVar7 != DAT_14ca843c0;
                    plVar5 = plVar6;
                    if (bVar9) {
                      plVar7 = DAT_14ca843c0;
                      plVar5 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar5;
                    UNLOCK();
                  } while (bVar9);
                }
                else {
                  do {
                    *plVar6 = (longlong)plVar5;
                    LOCK();
                    bVar9 = plVar5 != DAT_14ca843c8;
                    plVar7 = plVar6;
                    if (bVar9) {
                      plVar5 = DAT_14ca843c8;
                      plVar7 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar7;
                    UNLOCK();
                  } while (bVar9);
                }
              }
            }
          }
          if (lVar4 != 0) {
            return param_1;
          }
        }
        break;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar8);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 140040b50 FUN_140040b50 body=548 status=ok
// SIG undefined FUN_140040b50(void)

ulonglong FUN_140040b50(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  bVar3 = *(byte *)(param_1 + 0x70);
  uVar13 = 0;
  if ((6 < bVar3) || ((0x4eU >> (bVar3 & 0x1f) & 1) == 0)) goto LAB_140040ce0;
  lVar4 = *(longlong *)(param_1 + 0x68);
  if ((lVar4 != 0) && (cVar6 = FUN_140432338(lVar4), cVar6 != '\0')) {
    if ((bVar3 == 6) && (*(char *)(param_1 + 0x34) != '\0')) {
      lVar7 = FUN_1447b4020(lVar4);
      if (lVar7 != 0) {
        puVar8 = (ulonglong *)(**(code **)(*(longlong *)(lVar7 + 0x50) + 0x10))(lVar7 + 0x50);
        uVar5 = *puVar8;
        uVar12 = *(ulonglong *)(param_1 + 0x58);
        uVar13 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
        if (uVar12 == uVar5) goto LAB_140040ce0;
        *(ulonglong *)(param_1 + 0x58) = uVar5;
        if (uVar5 != 0) {
          LOCK();
          *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
          UNLOCK();
        }
        if (uVar12 == 0) goto LAB_140040ce0;
LAB_140040be7:
        LOCK();
        puVar1 = (uint *)(uVar12 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
joined_r0x000140040d02:
        if ((uVar2 & 0x3fffffff) == 1) {
          LOCK();
          puVar1 = (uint *)(uVar12 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(uVar12 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = uVar12;
            plVar11 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar11;
                LOCK();
                bVar14 = plVar11 != DAT_14ca843c0;
                plVar9 = plVar10;
                if (bVar14) {
                  plVar11 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar14);
            }
            else {
              do {
                *plVar10 = (longlong)plVar9;
                LOCK();
                bVar14 = plVar9 != DAT_14ca843c8;
                plVar11 = plVar10;
                if (bVar14) {
                  plVar9 = DAT_14ca843c8;
                  plVar11 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar11;
                UNLOCK();
              } while (bVar14);
            }
          }
        }
        goto LAB_140040ce0;
      }
    }
    else if ((*(int *)(*(longlong *)(lVar4 + 0x128) + 8) != -1) &&
            (uVar5 = *(ulonglong *)(*(longlong *)(lVar4 + 0x128) + 0x10), uVar5 != 0)) {
      uVar12 = 0;
      if (*(char *)(uVar5 + 0x52) == '\0') {
        LOCK();
        *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
        UNLOCK();
        uVar12 = uVar5;
      }
      if (uVar12 != 0) {
        if (((*(uint *)(uVar12 + 8) & 0x3fffffff) != 0 &&
             ((byte)(*(uint *)(uVar12 + 8) >> 0x1e) & 1) == 0) &&
           (uVar13 = *(ulonglong *)(param_1 + 0x58), uVar12 != uVar13)) {
          *(ulonglong *)(param_1 + 0x58) = uVar12;
          LOCK();
          *(int *)(uVar12 + 8) = *(int *)(uVar12 + 8) + 1;
          UNLOCK();
          if (uVar13 != 0) {
            LOCK();
            puVar1 = (uint *)(uVar13 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(uVar13 + 8);
              LOCK();
              uVar2 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar2 >> 0x1e & 1) == 0) {
                bVar3 = *(byte *)(uVar13 + 0xd);
                plVar10 = (longlong *)FUN_14001cc68(0x10,8);
                plVar10[1] = uVar13;
                plVar11 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c8;
                if ((bVar3 & 2) == 0) {
                  do {
                    *plVar10 = (longlong)plVar11;
                    LOCK();
                    bVar14 = plVar11 != DAT_14ca843c0;
                    plVar9 = plVar10;
                    if (bVar14) {
                      plVar11 = DAT_14ca843c0;
                      plVar9 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar9;
                    UNLOCK();
                  } while (bVar14);
                }
                else {
                  do {
                    *plVar10 = (longlong)plVar9;
                    LOCK();
                    bVar14 = plVar9 != DAT_14ca843c8;
                    plVar11 = plVar10;
                    if (bVar14) {
                      plVar9 = DAT_14ca843c8;
                      plVar11 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar11;
                    UNLOCK();
                  } while (bVar14);
                }
              }
            }
          }
          goto LAB_140040be7;
        }
        LOCK();
        puVar1 = (uint *)(uVar12 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        uVar13 = 0;
        uVar12 = uVar5;
        goto joined_r0x000140040d02;
      }
    }
  }
  uVar13 = 0;
LAB_140040ce0:
  return uVar13 & 0xffffffff;
}



// FUNCTION 140040d74 FUN_140040d74 body=1222 status=ok
// SIG undefined FUN_140040d74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140040d74(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined4 local_98;
  undefined4 local_90;
  longlong **local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  uint *local_60;
  longlong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = param_2[9];
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    lVar8 = *(longlong *)(param_2[2] + 0x10);
    lVar14 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x50) != 0) {
      lVar14 = *(longlong *)(lVar2 + 0x50);
    }
    iVar9 = *(int *)(lVar14 + (ulonglong)
                              (*(int *)(lVar2 + 0x58) - 1U &
                              (int)lVar8 + (int)((ulonglong)lVar8 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar14 = *(longlong *)(lVar2 + 0x10) + (longlong)iVar9 * 0x38;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar9 * 0x38) == lVar8)
        goto LAB_140040e09;
        iVar9 = *(int *)(lVar14 + 0x30);
      } while (iVar9 != -1);
    }
  }
  lVar14 = 0;
LAB_140040e09:
  lVar2 = *param_2;
  uVar12 = (int)param_2[10] + 0xfU & 0xfffffff0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb3e488) && (FUN_144b3d300(&DAT_14cb3e488), DAT_14cb3e488 == -1)) {
    FUN_145db09f4(local_58);
    local_70 = 0;
    local_80 = 0;
    local_a0 = "Unknown";
    local_b0 = 0;
    uStack_a8 = 0;
    local_b8 = L"FShaderParameters";
    local_78 = 0;
    local_90 = 0x20;
    local_98 = 0x10;
    local_88 = local_58;
    FUN_140b49562(&DAT_14cb3e408,0,1);
    if (local_58[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_143a7e6d9);
    _Init_thread_footer(&DAT_14cb3e488);
  }
  puVar17 = (undefined8 *)((ulonglong)uVar12 + param_2[7]);
  *(uint *)(param_2 + 10) = uVar12 + _DAT_14cb3e444;
  if ((lVar14 == 0) || (*(longlong *)(lVar14 + 0x10) == 0)) {
    *puVar17 = 0;
    *(undefined4 *)(puVar17 + 1) = 0;
    puVar17[3] = DAT_14c9c0d80;
    uVar5 = FUN_140579634(param_2[1],lVar2,0);
    puVar17[2] = uVar5;
  }
  else {
    *puVar17 = *(undefined8 *)(lVar14 + 0x18);
    *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(lVar14 + 0x20);
    puVar17[3] = *(undefined8 *)(lVar14 + 8);
    lVar8 = *(longlong *)param_2[5];
    uVar11 = *(ulonglong *)(lVar8 + 0x20);
    if ((uVar11 & 1) != 0) {
      uVar11 = ((longlong)uVar11 >> 0x18) + lVar8 + 0x20;
    }
    sVar3 = (short)(puVar17 + 2) - (short)param_2[7];
    if ((longlong)*(int *)(lVar8 + 0x28) != 0) {
      lVar15 = 0;
      do {
        if (*(short *)(uVar11 + lVar15) == sVar3) goto LAB_140041019;
        lVar15 = lVar15 + 6;
      } while ((longlong)*(int *)(lVar8 + 0x28) * 6 != lVar15);
    }
    uVar11 = *(ulonglong *)(lVar8 + 0x10);
    if ((uVar11 & 1) != 0) {
      uVar11 = ((longlong)uVar11 >> 0x18) + lVar8 + 0x10;
    }
    if ((longlong)*(int *)(lVar8 + 0x18) != 0) {
      lVar15 = 0;
      do {
        if (*(short *)(uVar11 + lVar15) == sVar3) goto LAB_140041019;
        lVar15 = lVar15 + 4;
      } while ((longlong)*(int *)(lVar8 + 0x18) * 4 != lVar15);
    }
  }
  goto LAB_140040f0f;
LAB_140041019:
  lVar8 = *(longlong *)(lVar14 + 0x28);
  if (lVar8 == 0) {
    uVar11 = *(ulonglong *)(*(longlong *)(lVar14 + 0x10) + 0x60);
    if (uVar11 != 0) {
      LOCK();
      *(int *)(uVar11 + 8) = *(int *)(uVar11 + 8) + 1;
      UNLOCK();
      puVar13 = (uint *)(uVar11 + 8);
      uVar12 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      uVar4 = uVar12 & 0x7fffffff ^ uVar12 >> 0x10;
      uVar12 = *(uint *)(lVar2 + 0x248);
      uVar10 = uVar12 & uVar4;
      lVar8 = lVar2 + 0x230;
      if (*(longlong *)(lVar2 + 0x238) != 0) {
        lVar8 = *(longlong *)(lVar2 + 0x238);
      }
      do {
        if (*(uint *)(lVar8 + (longlong)(int)uVar10 * 4) == uVar4) {
          lVar15 = *(longlong *)(lVar2 + 0x220);
          if (*(longlong *)(lVar2 + 0x220) == 0) {
            lVar15 = lVar2 + 0x218;
          }
          iVar9 = *(int *)(lVar15 + (longlong)(int)uVar10 * 4);
          lVar15 = (longlong)iVar9 * 0x10;
          if (uVar11 == *(ulonglong *)(*(longlong *)(lVar2 + 0x1d8) + lVar15)) {
            if ((iVar9 != -1) &&
               (plVar16 = (longlong *)(*(longlong *)(lVar2 + 0x1d8) + lVar15 + 8),
               plVar16 != (longlong *)0x0)) {
              lVar8 = *plVar16;
              *(longlong *)(lVar14 + 0x28) = lVar8;
              if (lVar8 == 0) goto LAB_140041105;
              goto LAB_1400411b3;
            }
            break;
          }
        }
        uVar10 = uVar10 + 1 & uVar12;
      } while (uVar10 != (*(int *)(lVar2 + 0x24c) + uVar4 + 1 & uVar12));
      *(undefined8 *)(lVar14 + 0x28) = 0;
LAB_140041105:
      FUN_1447ec05f(local_58,uVar11,L"NiagaraTexture2D");
      uVar5 = FUN_14473c272(lVar2,local_58,0);
      *(undefined8 *)(lVar14 + 0x28) = uVar5;
      local_60 = puVar13;
      if (local_58[0] != (longlong *)0x0) {
        (**(code **)(*local_58[0] + 0x38))();
        uVar5 = *(undefined8 *)(lVar14 + 0x28);
      }
      FUN_14022b18a(lVar2,uVar5);
      lVar8 = *(longlong *)(lVar14 + 0x28);
      if (lVar8 == 0) {
        lVar8 = 0;
        puVar13 = local_60;
      }
      else {
        lVar15 = param_2[1];
        iVar9 = *(int *)(lVar15 + 0x260);
        *(uint *)(lVar15 + 0x260) = iVar9 + 1U;
        if (*(uint *)(lVar15 + 0x264) < iVar9 + 1U) {
          FUN_144904f42((longlong *)(lVar15 + 600),iVar9);
        }
        lVar15 = *(longlong *)(lVar15 + 600);
        lVar18 = (longlong)iVar9 * 0x10;
        *(longlong *)(lVar15 + lVar18) = lVar8;
        *(undefined4 *)(lVar15 + 8 + lVar18) = 0x70;
        *(undefined1 *)(lVar15 + 0xc + lVar18) = 1;
        lVar8 = *(longlong *)(lVar14 + 0x28);
        puVar13 = local_60;
      }
LAB_1400411b3:
      LOCK();
      uVar12 = *puVar13;
      *puVar13 = *puVar13 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        LOCK();
        uVar12 = *puVar13;
        *puVar13 = *puVar13 | 0x40000000;
        UNLOCK();
        if ((uVar12 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(uVar11 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = uVar11;
          plVar16 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar1 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar16;
              LOCK();
              bVar19 = plVar16 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar19) {
                plVar16 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar19 = plVar7 != DAT_14ca843c8;
              plVar16 = plVar6;
              if (bVar19) {
                plVar7 = DAT_14ca843c8;
                plVar16 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar16;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
      if (lVar8 != 0) goto LAB_14004121b;
    }
    lVar8 = FUN_140579634(param_2[1],lVar2,0);
  }
LAB_14004121b:
  puVar17[2] = lVar8;
LAB_140040f0f:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14004123c FUN_14004123c body=232 status=ok
// SIG undefined FUN_14004123c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004123c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined1 local_30;
  char local_27;
  undefined1 local_26;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144b15f5c(&local_27,param_1,param_2);
  if (local_27 == '\x01') {
    puVar1 = DAT_14ca452f8;
    if (DAT_14ca452f8 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)FUN_140595974(0x3fe0,0);
      lVar4 = 0x123;
      puVar3 = puVar1;
      do {
        puVar2 = puVar3 + 7;
        *puVar3 = puVar2;
        lVar4 = lVar4 + -1;
        puVar3 = puVar2;
      } while (lVar4 != 0);
      *puVar2 = DAT_14ca452f8;
      _DAT_14ca45300 = _DAT_14ca45300 + 0x124;
    }
    DAT_14ca452f8 = (undefined8 *)*puVar1;
    _DAT_14ca45304 = _DAT_14ca45304 + 1;
    local_30 = local_21;
    local_38 = local_22;
    local_40 = local_23;
    local_48 = local_24;
    FUN_144ab675e(puVar1,param_1,param_2,local_26);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140041326 FUN_140041326 body=227 status=ok
// SIG undefined FUN_140041326(void)

undefined8 FUN_140041326(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  byte extraout_AL;
  longlong lVar4;
  undefined7 extraout_var;
  ulonglong uVar5;
  longlong *plVar6;
  byte bVar7;
  byte bVar8;
  
  lVar2 = param_1[0x15];
  lVar4 = param_1[0x16];
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
  }
  if ((((((lVar2 == 0) || (*(int *)(lVar2 + 0x1ec) == 0)) ||
        (uVar1 = *(uint *)(lVar2 + 0x1e8), (int)uVar1 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar1 ||
        (plVar6 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar6 == (longlong *)0x0)))) ||
      (((int)plVar6[2] != *(int *)(lVar2 + 0x1ec) ||
       (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (*plVar6 == 0)))))) ||
     (cVar3 = FUN_140041326(), cVar3 != '\0')) {
    if ((lVar4 == 0) || (6 < *(byte *)(lVar4 + 0x152))) {
      bVar7 = 0;
    }
    else {
      bVar7 = 0x6a >> (*(byte *)(lVar4 + 0x152) & 0x1f);
    }
    (**(code **)(*param_1 + 0x4e8))(param_1);
    bVar8 = extraout_AL;
    if (extraout_AL == 1 && lVar2 != 0) {
      bVar8 = -1 < *(char *)(lVar2 + 0x60);
    }
    if ((bVar7 & bVar8) == 1) {
      uVar5 = CONCAT71(extraout_var,(char)param_1[0x3f]) & 0xffffffffffffff20;
      return CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 5);
    }
  }
  return 0;
}



// FUNCTION 140041409 FUN_140041409 body=512 status=ok
// SIG undefined FUN_140041409(void)

undefined8
FUN_140041409(undefined8 param_1,undefined8 param_2,int param_3,undefined8 *param_4,char param_5,
             ushort param_6)

{
  longlong lVar1;
  DWORD DVar2;
  DWORD DVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined1 local_46;
  byte local_45;
  undefined1 local_44;
  undefined1 local_43;
  ulonglong local_40;
  
  lVar1 = DAT_14ca1c600;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar5 = *(int *)((longlong)param_4 + 0xc);
  if (iVar5 == 1) {
    iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
      uVar4 = 0;
    }
    else if (iVar5 == 1) {
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      uVar4 = (ulonglong)(DVar2 != DVar3);
    }
    else {
      uVar4 = 1;
    }
    local_78 = 9;
    if (((0 < *(int *)(lVar1 + uVar4 * 4)) &&
        ((*(byte *)(&DAT_14ca814d8 + (ulonglong)param_6 * 0xf) & 2) != 0)) &&
       (DAT_14ca84f5c == '\x01')) {
      local_78 = (ulonglong)(*(int *)(DAT_14ca1c618 + 4) != 0) << 0x11 | 9;
    }
    iVar5 = *(int *)((longlong)param_4 + 0xc);
  }
  else {
    local_78 = 9;
  }
  puVar7 = &DAT_14ca83a30;
  local_45 = param_5 << 4 | 10;
  if (param_5 != '\0') {
    puVar7 = &DAT_14ca84d30;
  }
  local_54 = *param_4;
  puVar6 = &DAT_14ca4af20;
  if (param_5 != '\0') {
    puVar6 = &DAT_14ca4af28;
  }
  local_5c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_80 = *puVar6;
  local_88 = (&PTR_u_Translucency_BeforeDistortion_Co_14a316490)[param_3];
  local_46 = 0;
  local_44 = 0;
  local_4c = 0x10001;
  local_48 = 1;
  local_47 = (undefined1)iVar5;
  local_70 = *puVar7;
  uStack_6c = puVar7[1];
  uStack_68 = puVar7[2];
  uStack_64 = puVar7[3];
  local_60 = puVar7[4];
  local_58 = 0;
  local_43 = 0xff;
  FUN_14004160a(param_1,param_2,&local_78,
                (&PTR_u_Translucency_BeforeDistortion_Co_14a316510)[param_3]);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004160a FUN_14004160a body=187 status=ok
// SIG undefined FUN_14004160a(void)

undefined8 *
FUN_14004160a(undefined8 *param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5,ulonglong param_6)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  if ((*(byte *)((longlong)param_3 + 0x31) < 2) ||
     ((*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca838f8 &&
      ((*(byte *)(&DAT_14ca814c8 + (ulonglong)DAT_14ca85550 * 0xf) & 1) != 0)))) {
    *(byte *)param_3 = (byte)*param_3 | 8;
    uVar1 = FUN_14472bf7a(param_2,param_3,param_5,0);
    *param_1 = uVar1;
  }
  else {
    uVar1 = FUN_14472bf7a(param_2,param_3,param_4,0);
    *param_1 = uVar1;
    *(byte *)((longlong)param_3 + 0x31) = 1;
    uVar2 = 0x8000008;
    if ((*param_3 & 4) == 0) {
      uVar2 = 10;
    }
    *param_3 = uVar2 | param_6;
    uVar1 = FUN_14472bf7a(param_2,param_3,param_5,0);
  }
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 1400416c5 FUN_1400416c5 body=103 status=ok
// SIG undefined FUN_1400416c5(void)

void FUN_1400416c5(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338e0) {
    FUN_144b3d300(&DAT_14c8338e0);
    if (DAT_14c8338e0 == -1) {
      FUN_142749f0e(&DAT_14c8338c8);
      atexit(FUN_14274a115);
      _Init_thread_footer(&DAT_14c8338e0);
      return;
    }
  }
  return;
}



// FUNCTION 14004172c FUN_14004172c body=416 status=ok
// SIG undefined FUN_14004172c(void)

undefined8
FUN_14004172c(undefined8 *param_1,char *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  BOOL BVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((0 < param_3) && (*param_2 != '\0')) {
    if (0 < *(int *)(param_1 + 1)) {
      lVar5 = 0;
      lVar4 = 0;
      do {
        BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1[2] + lVar5));
        if (BVar1 != 0) {
          lVar4 = *(longlong *)(param_1[2] + 0x28 + lVar5);
          if (lVar4 == 0) {
            uVar3 = FUN_14001cc68(*param_1,0);
            *(undefined8 *)(param_1[2] + 0x28 + lVar5) = uVar3;
            lVar4 = *(longlong *)(param_1[2] + 0x28 + lVar5);
            if (lVar4 == 0) {
              return 0;
            }
          }
          uVar3 = FUN_144b513e0(param_2,param_3,param_4,param_5,1,1,0,0,0,0,0,lVar4,*param_1,3);
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + param_1[2]));
          return uVar3;
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x40;
      } while (lVar4 < *(int *)(param_1 + 1));
    }
    iVar2 = thunk_FUN_144b533e0(param_2,param_3,0);
    if ((iVar2 != -1) && (iVar2 = FUN_144b51af0(iVar2,param_5), 0 < iVar2)) {
      lVar4 = FUN_14001cc68((longlong)iVar2,0);
      if (lVar4 != 0) {
        uVar3 = FUN_144b513e0(param_2,param_3,param_4,param_5,1,1,0,0,0,0,0,lVar4,(longlong)iVar2,3)
        ;
        FUN_1400020a8(lVar4);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1400418cc FUN_1400418cc body=122 status=ok
// SIG undefined FUN_1400418cc(void)

undefined8 FUN_1400418cc(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar4 < param_2) {
    uVar1 = (ulonglong)(param_2 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar4 = 1 << ((byte)lVar2 & 0x1f);
  }
  uVar3 = FUN_14001cc68(0xd0,0x10);
  FUN_140041b2a(uVar3,*param_1,*(undefined4 *)((longlong)param_1 + 0xc),param_1 + 2,param_1 + 4,
                *(undefined4 *)(param_1 + 0xf),uVar4,uVar4,*(undefined4 *)((longlong)param_1 + 0x7c)
               );
  return uVar3;
}



// FUNCTION 140041946 FUN_140041946 body=483 status=ok
// SIG undefined FUN_140041946(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140041946(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x38);
  EnterCriticalSection(lpCriticalSection);
  uVar3 = *(uint *)(param_1 + 0x78);
  if (*(uint *)(param_1 + 0xc4) != uVar3) {
    uVar4 = param_2;
    if (param_3 != 0) {
      uVar4 = 0;
      if (*(uint *)(param_1 + 0x7c) % param_3 != 0) {
        uVar4 = param_3;
      }
      uVar4 = uVar4 + param_2;
    }
    iVar1 = *(uint *)(param_1 + 0xb0) + 1;
    lVar5 = (ulonglong)*(uint *)(param_1 + 0xb0) * 0x50 + -0x1c;
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 1) break;
      if ((*(int *)(*(longlong *)(param_1 + 0xa8) + -0x2c + lVar5) !=
           *(int *)(*(longlong *)(param_1 + 0xa8) + lVar5)) && (uVar4 <= uVar3)) {
        EnterCriticalSection(lpCriticalSection);
        if (*(char *)(param_1 + 0x30) == '\0') {
          FUN_140041bdc(param_1);
          *(undefined1 *)(param_1 + 0x30) = 1;
        }
        uVar3 = *(uint *)(param_1 + 0x7c);
        uVar4 = param_2;
        if (param_3 != 0) {
          uVar4 = 0;
          if (uVar3 % param_3 != 0) {
            uVar4 = param_3;
          }
          uVar4 = uVar4 + param_2;
        }
        iVar7 = 0;
        uVar3 = (((uVar3 + uVar4) - 1) / uVar3) * 2 - 1;
        iVar1 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
        iVar2 = FUN_14472c606(param_1);
        iVar6 = *(int *)(param_1 + 0x7c) << ((byte)iVar1 & 0x1f);
        uVar3 = *(int *)(param_1 + 0x7c) * iVar2;
        if ((param_3 != 0) && (iVar7 = 0, uVar3 % param_3 != 0)) {
          uVar8 = ((ulonglong)param_3 + (ulonglong)uVar3) - 1;
          iVar7 = ((int)uVar8 - (int)(uVar8 % (ulonglong)param_3)) - uVar3;
        }
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + iVar6;
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + param_2;
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + iVar6;
        *(int *)(param_4 + 0x24) = iVar1;
        *(int *)(param_4 + 0x20) = iVar2;
        *(undefined2 *)(param_4 + 0x70) = 2;
        *(longlong *)(param_4 + 0x18) = param_1;
        *(ulonglong *)(param_4 + 0x68) = (ulonglong)param_2;
        if (*(int *)(param_1 + 0x80) == 1) {
          uVar8 = (ulonglong)(iVar7 + uVar3);
          *(ulonglong *)(param_4 + 0x60) = uVar8;
          lVar5 = *(longlong *)(param_1 + 0x88);
          *(undefined8 *)(param_4 + 0x58) = *(undefined8 *)(lVar5 + 0x40);
          *(longlong *)(param_4 + 0x10) = lVar5;
          *(ulonglong *)(param_4 + 0x58) =
               *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x40) + uVar8;
          if ((*(int *)(param_1 + 0x10) != 1) &&
             ((*(int *)(param_1 + 0x10) != 4 || (_DAT_00000004 != 1)))) {
            *(ulonglong *)(param_4 + 0x50) =
                 uVar8 + *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x48);
          }
        }
        LeaveCriticalSection(lpCriticalSection);
        uVar8 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
        goto LAB_14004197c;
      }
      lVar5 = lVar5 + -0x50;
      uVar3 = uVar3 >> 1;
    } while (uVar4 <= uVar3);
  }
  *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + param_2;
  uVar8 = 0;
LAB_14004197c:
  LeaveCriticalSection(lpCriticalSection);
  return uVar8 & 0xffffffff;
}



// FUNCTION 140041b2a FUN_140041b2a body=178 status=ok
// SIG undefined FUN_140041b2a(void)

longlong FUN_140041b2a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined4 param_6,undefined4 param_7,int param_8,
                      uint param_9)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_1417890ca(param_1);
  *(int *)(param_1 + 0x78) = param_8;
  *(uint *)(param_1 + 0x7c) = param_9;
  *(undefined4 *)(param_1 + 0x80) = param_6;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  uVar2 = (param_8 + param_9) - 1;
  uVar3 = (uVar2 / param_9) * 2 - 1;
  iVar1 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(int *)(param_1 + 0xc0) = iVar1;
  FUN_140db07d4(param_1,(ulonglong)uVar2 % (ulonglong)param_9,param_3,param_4,param_5,param_7);
  return param_1;
}



// FUNCTION 140041bdc FUN_140041bdc body=915 status=ok
// SIG undefined FUN_140041bdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140041bdc(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined8 *local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  ulonglong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)(*param_1 + 0x10);
  if ((int)param_1[0x10] == 0) {
    uStack_50 = (undefined4)param_1[2];
    local_44 = 1;
    uVar9 = 1;
    if (DAT_14ca81480 == 0) {
      local_44 = (undefined4)param_1[1];
      uVar9 = *(uint *)((longlong)param_1 + 0xc);
    }
    uStack_38 = 0;
    local_58._0_4_ = (undefined4)param_1[0xf];
    local_58._4_4_ = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    local_40 = (ulonglong)uVar9;
    uVar9 = *(uint *)((longlong)param_1 + 0x14);
    if (*(char *)(lVar4 + 0xc6) == '\x01') {
      uVar9 = uVar9 | 0x1000;
    }
    local_30 = (ulonglong)uVar9;
    local_60 = 0;
    iVar8 = (**(code **)(**(longlong **)(lVar4 + 8) + 0xe0))
                      (*(longlong **)(lVar4 + 8),&local_58,&DAT_14a349268);
    if (iVar8 < 0) {
      local_b0 = &local_78;
      local_78 = 0;
      uStack_70 = 0;
      local_b8 = 0;
      FUN_145763094(iVar8,"Adapter->GetD3DDevice()->CreateHeap(&Desc, IID_PPV_ARGS(&Heap))",
                    ".\\Runtime/D3D12RHI/Private/D3D12Allocation.cpp",0x120);
    }
    puVar10 = (undefined8 *)FUN_14001cc68(0x88,0x10);
    lVar4 = param_1[0x19];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0xc);
    puVar6 = (undefined4 *)*param_1;
    *puVar10 = &PTR_FUN_149e002e8;
    *(undefined4 *)(puVar10 + 1) = 0;
    puVar10[2] = puVar6;
    *(undefined4 *)(puVar10 + 3) = *puVar6;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar3;
    *puVar10 = &PTR_FUN_14a34ce88;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined1 *)(puVar10 + 6) = 1;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    *(int *)((longlong)puVar10 + 0x7c) = (int)lVar4;
    *(undefined2 *)(puVar10 + 0x10) = 0x100;
    puVar5 = (undefined8 *)param_1[0x12];
    if (puVar5 != puVar10) {
      param_1[0x12] = (longlong)puVar10;
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
        UNLOCK();
      }
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    }
    local_b8 = local_b8 & 0xffffffffffffff00;
    FUN_141033122(param_1[0x12],local_60,L"BuddyAllocator Heap",1);
    if (((int)param_1[2] == 1) || (((int)param_1[2] == 4 && (_DAT_00000004 == 1)))) {
      FUN_1405e2cd8(param_1[0x12],CONCAT44(local_58._4_4_,(undefined4)local_58));
    }
  }
  else {
    uStack_48 = 1;
    uStack_4c = 1;
    if (DAT_14ca81480 == 0) {
      uStack_48 = *(undefined4 *)((longlong)param_1 + 0xc);
      uStack_4c = (undefined4)param_1[1];
    }
    local_58._0_4_ = (undefined4)param_1[2];
    local_58._4_4_ = 0;
    uStack_50 = 0;
    lVar7 = param_1[3];
    plVar2 = param_1 + 0x11;
    puVar5 = (undefined8 *)param_1[0x11];
    if (puVar5 != (undefined8 *)0x0) {
      *plVar2 = 0;
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    local_a8 = (ulonglong)*(uint *)(param_1 + 0xf);
    local_98 = L"Resource Allocator Underlying Buffer";
    local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,*(undefined4 *)((longlong)param_1 + 0x1c));
    local_b8 = CONCAT44(local_b8._4_4_,1);
    local_a0 = plVar2;
    local_90 = (int)lVar7;
    iVar8 = FUN_140a6e772(lVar4,&local_58,(int)param_1[1]);
    if (iVar8 < 0) {
      local_b0 = &local_88;
      local_88 = 0;
      uStack_80 = 0;
      local_b8 = 0;
      FUN_145763094(iVar8,
                    "Adapter->CreateBuffer(HeapProps, GetGPUMask(), InitConfig.InitialResourceState, ED3D12ResourceStateMode::SingleState, InitConfig.InitialResourceState, MaxBlockSize, BackingResource.GetInitReference(), TEXT(\"Resource Allocator Underlying Buffer\"), InitConfig.ResourceFlags)"
                    ,".\\Runtime/D3D12RHI/Private/D3D12Allocation.cpp",0x137);
    }
    if (((int)param_1[2] != 1) && (((int)param_1[2] != 4 || (_DAT_00000004 != 1)))) {
      lVar4 = *plVar2;
      if (*(int *)(lVar4 + 0xd8) == 0) {
        iVar8 = (**(code **)(**(longlong **)(lVar4 + 0x20) + 0x40))
                          (*(longlong **)(lVar4 + 0x20),0,0,lVar4 + 0x48);
        if (iVar8 < 0) {
          local_58._0_4_ = 0;
          local_58._4_4_ = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          local_b8 = 0;
          local_b0 = &local_58;
          FUN_145763094(iVar8,"Resource->Map(0, ReadRange, &ResourceBaseAddress)",
                        ".\\Runtime/D3D12RHI/Private\\D3D12Resources.h",0x119);
        }
      }
      *(int *)(lVar4 + 0xd8) = *(int *)(lVar4 + 0xd8) + 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140041f70 FUN_140041f70 body=178 status=ok
// SIG undefined FUN_140041f70(void)

uint FUN_140041f70(longlong param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  
  cVar1 = (char)*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x118);
  cVar5 = -1;
  if (-1 < cVar1) {
    cVar5 = cVar1;
  }
  uVar7 = (*(int *)(*(longlong *)(param_1 + 8) + 0x54) << 0x1d) >> 0x1f & (int)cVar5;
  lVar3 = *(longlong *)(param_1 + 0x23e0);
  if (lVar3 != 0) {
    uVar2 = FUN_14746fc9a();
    lVar3 = FUN_147cc7e18(lVar3,uVar2);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c))) {
      lVar4 = lVar3 + 0x40;
      if (*(longlong *)(lVar3 + 0x48) != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x48);
      }
      iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar3 + 0x50) - 1U & param_2) * 4);
      if (iVar6 != -1) {
        do {
          lVar4 = *(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x10;
          if (*(uint *)(*(longlong *)(lVar3 + 8) + (longlong)iVar6 * 0x10) == param_2) {
            if ((uint *)(lVar4 + 4) == (uint *)0x0 || lVar4 == 0) {
              return uVar7;
            }
            return *(uint *)(lVar4 + 4);
          }
          iVar6 = *(int *)(lVar4 + 8);
        } while (iVar6 != -1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 140042022 FUN_140042022 body=88 status=ok
// SIG undefined FUN_140042022(void)

void FUN_140042022(undefined8 param_1,longlong param_2,double *param_3)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  if (*(float **)(param_2 + 0x38) != (float *)0x0 && *(longlong *)(param_2 + 0x30) != 0) {
    *param_3 = (double)**(float **)(param_2 + 0x38);
  }
  return;
}



// FUNCTION 14004207a FUN_14004207a body=88 status=ok
// SIG undefined FUN_14004207a(void)

void FUN_14004207a(undefined8 param_1,longlong param_2,float *param_3)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  if (*(double **)(param_2 + 0x38) != (double *)0x0 && *(longlong *)(param_2 + 0x30) != 0) {
    *param_3 = (float)**(double **)(param_2 + 0x38);
  }
  return;
}



// FUNCTION 1400420d2 FUN_1400420d2 body=105 status=ok
// SIG undefined FUN_1400420d2(void)

void FUN_1400420d2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar1 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar1])(*(undefined8 *)(param_2 + 0x18),param_2,&local_20);
  *(bool *)param_3 = local_20 != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140042148 FUN_140042148 body=206 status=ok
// SIG undefined FUN_140042148(void)

void FUN_140042148(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  uint *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_2c = 0;
    local_30 = *(uint *)(param_2 + 0xc);
    if ((int)local_30 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((local_30 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
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
    local_28 = &local_30;
    local_2c = iVar1;
    FUN_14472cf34(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140042218 FUN_140042218 body=22 status=ok
// SIG undefined FUN_140042218(void)

undefined8 FUN_140042218(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x1eb8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140042227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x1eb8) + 0x38))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14004222e FUN_14004222e body=412 status=ok
// SIG undefined FUN_14004222e(void)

void FUN_14004222e(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  void *_Dst;
  longlong *plVar8;
  void *_Src;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x60);
    plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0x68) * 7;
    do {
      lVar3 = *plVar8;
      uVar6 = *(uint *)(param_1 + 0x80);
      if (((uVar6 & 1) != 0) && (lVar5 = plVar8[2], (longlong)(int)lVar5 != 0)) {
        lVar4 = plVar8[1];
        lVar11 = 0;
        do {
          _Src = (void *)((ulonglong)*(ushort *)(lVar4 + lVar11) + *(longlong *)(param_1 + 0x20));
          _Dst = (void *)((ulonglong)*(ushort *)(lVar4 + 2 + lVar11) + *(longlong *)(lVar3 + 0x20));
          if (_Dst != _Src) {
            memcpy(_Dst,_Src,(ulonglong)*(ushort *)(lVar4 + 4 + lVar11));
          }
          *(byte *)(lVar3 + 0x80) = *(byte *)(lVar3 + 0x80) | 1;
          lVar11 = lVar11 + 6;
        } while ((longlong)(int)lVar5 * 6 != lVar11);
        uVar6 = *(uint *)(param_1 + 0x80);
      }
      if (((uVar6 & 2) != 0) && (lVar5 = plVar8[4], (longlong)(int)lVar5 != 0)) {
        lVar4 = plVar8[3];
        lVar11 = 0;
        do {
          uVar1 = *(ushort *)(lVar4 + 2 + lVar11);
          uVar2 = *(ushort *)(lVar4 + lVar11);
          if ((int)(uint)uVar2 < *(int *)(param_1 + 0x38)) {
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x30) + (ulonglong)uVar2 * 8);
            lVar9 = *(longlong *)(lVar3 + 0x30);
            if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar10);
            }
          }
          else {
            lVar9 = *(longlong *)(lVar3 + 0x30);
            lVar10 = 0;
          }
          *(longlong *)(lVar9 + (ulonglong)uVar1 * 8) = lVar10;
          *(byte *)(lVar3 + 0x80) = *(byte *)(lVar3 + 0x80) | 2;
          lVar11 = lVar11 + 4;
        } while ((longlong)(int)lVar5 * 4 != lVar11);
        uVar6 = *(uint *)(param_1 + 0x80);
      }
      if (((uVar6 & 4) != 0) && (lVar5 = plVar8[6], (longlong)(int)lVar5 != 0)) {
        lVar4 = plVar8[5];
        lVar11 = 0;
        do {
          uVar1 = *(ushort *)(lVar4 + 2 + lVar11);
          uVar2 = *(ushort *)(lVar4 + lVar11);
          if ((int)(uint)uVar2 < *(int *)(param_1 + 0x48)) {
            lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar2 * 8);
            lVar9 = *(longlong *)(lVar3 + 0x40);
            if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar10);
            }
          }
          else {
            lVar9 = *(longlong *)(lVar3 + 0x40);
            lVar10 = 0;
          }
          *(longlong *)(lVar9 + (ulonglong)uVar1 * 8) = lVar10;
          *(byte *)(lVar3 + 0x80) = *(byte *)(lVar3 + 0x80) | 4;
          lVar11 = lVar11 + 4;
        } while ((longlong)(int)lVar5 * 4 != lVar11);
      }
      plVar8 = plVar8 + 7;
    } while (plVar8 != plVar7);
  }
  return;
}



// FUNCTION 1400423ca FUN_1400423ca body=143 status=ok
// SIG undefined FUN_1400423ca(void)

void FUN_1400423ca(longlong param_1)

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



// FUNCTION 14004245a FUN_14004245a body=626 status=ok
// SIG undefined FUN_14004245a(void)

undefined1 FUN_14004245a(longlong param_1,double *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_1b8 [32];
  undefined1 *local_198;
  longlong *local_190;
  longlong *local_188;
  undefined1 *local_180;
  double *local_178;
  undefined4 *local_170;
  undefined4 **local_168;
  double *local_160;
  undefined4 *local_158;
  double *local_150;
  code *local_148;
  undefined1 **local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  longlong local_b0;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  longlong local_a0;
  undefined4 *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_4 != (undefined4 *)0x0) {
    *(double *)(param_4 + 4) = param_2[2];
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 1);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_4 = *(undefined4 *)param_2;
    param_4[1] = uVar1;
    param_4[2] = uVar2;
    param_4[3] = uVar3;
    *param_3 = 0;
  }
  local_a4 = 0x7f7fc99e;
  local_a5 = 0;
  local_a6 = 1;
  lVar4 = *(longlong *)(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0x108) == 0) {
    lVar4 = param_1;
  }
  local_b0 = lVar4;
  local_a0 = param_1;
  local_98 = param_4;
  FUN_1447f067c(lVar4,&local_118,1,0);
  local_f8 = *param_2 - local_f8;
  dStack_f0 = param_2[1] - dStack_f0;
  local_e8 = param_2[2] - local_e8;
  local_108 = local_108 * -1.0;
  dStack_100 = dStack_100 * 1.0;
  dVar5 = -local_118;
  dStack_110 = -dStack_110;
  dVar8 = local_f8 * local_108 - dVar5 * local_e8;
  dVar6 = dStack_f0 * dVar5 - local_f8 * dStack_110;
  dVar7 = local_e8 * dStack_110 - dStack_f0 * local_108;
  dVar7 = dVar7 + dVar7;
  dVar8 = dVar8 + dVar8;
  dVar6 = dVar6 + dVar6;
  local_128 = dStack_100 * dVar6 + local_e8 + (dVar8 * dVar5 - dVar7 * dStack_110);
  local_138 = (dVar6 * dStack_110 - dVar8 * local_108) + dStack_100 * dVar7 + local_f8;
  dStack_130 = local_118 * dVar6 + local_108 * dVar7 + dStack_100 * dVar8 + dStack_f0;
  local_178 = &local_138;
  local_140 = &local_198;
  local_188 = &local_a0;
  local_168 = &local_98;
  local_148 = FUN_143638458;
  local_198 = &local_a6;
  local_190 = &local_b0;
  local_180 = &local_a5;
  local_170 = param_3;
  local_160 = param_2;
  local_158 = &local_a4;
  local_150 = &local_118;
  FUN_1448e6002(lVar4 + 0x138);
  if ((local_90 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return local_a5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400426e4 FUN_1400426e4 body=342 status=ok
// SIG undefined FUN_1400426e4(void)

bool FUN_1400426e4(longlong param_1,DWORD param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  bool bVar4;
  DWORD DVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x304) == '\x01') {
      iVar2 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c8);
      bVar4 = true;
      if (iVar2 != 0) {
        uVar3 = (ulonglong)(iVar2 == 1);
        LOCK();
        piVar1 = &DAT_14c82ba50 + uVar3 * 0x20;
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if ((uint)(&DAT_14c82ba04)[uVar3 * 0x20] <= iVar2 + 1U) {
          FUN_146044b26(*(undefined8 *)(&DAT_14c82ba78 + uVar3 * 0x80));
        }
        FUN_140031ea8(&DAT_14c82ba00 + uVar3 * 0x80,1);
      }
      goto LAB_1400427a8;
    }
  }
  bVar4 = false;
LAB_1400427a8:
  FUN_1403937d4(local_38,param_3);
  DVar5 = WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),param_2);
  FUN_140248952(local_38);
  if (bVar4) {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2c8);
    if (iVar2 != 0) {
      LOCK();
      (&DAT_14c82ba50)[(ulonglong)(iVar2 == 1) * 0x20] =
           (&DAT_14c82ba50)[(ulonglong)(iVar2 == 1) * 0x20] + -1;
      UNLOCK();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return DVar5 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004283b FUN_14004283b body=482 status=ok
// SIG undefined FUN_14004283b(void)

void FUN_14004283b(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                  int param_5,char param_6,longlong *param_7,undefined8 param_8)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  
  uVar1 = *(undefined1 *)(param_1 + 0xb8);
  *param_7 = param_1 + 0x88;
  *(undefined4 *)(param_7 + 1) = 0;
  *(undefined1 *)((longlong)param_7 + 0xc) = 0;
  *(undefined1 *)((longlong)param_7 + 0xd) = uVar1;
  *(undefined2 *)((longlong)param_7 + 0xe) = 3;
  param_7[0x13] = *(longlong *)(param_1 + 0xa0);
  param_7[0x14] = *(longlong *)(param_1 + 0x48);
  cVar2 = *(char *)(param_1 + 0x81);
  cVar4 = cVar2 * '\b' + '\b';
  cVar5 = (cVar2 != '\0') * '\t' + '\x05';
  param_7[2] = param_1 + 0x10;
  *(undefined4 *)(param_7 + 3) = 0;
  *(undefined1 *)((longlong)param_7 + 0x1c) = 0;
  *(char *)((longlong)param_7 + 0x1d) = cVar4;
  *(char *)((longlong)param_7 + 0x1e) = cVar5;
  *(undefined1 *)((longlong)param_7 + 0x1f) = 4;
  param_7[4] = param_1 + 0x10;
  *(undefined4 *)(param_7 + 5) = 0;
  *(char *)((longlong)param_7 + 0x2c) = cVar2 * '\x04' + '\x04';
  *(char *)((longlong)param_7 + 0x2d) = cVar4;
  *(char *)((longlong)param_7 + 0x2e) = cVar5;
  *(undefined1 *)((longlong)param_7 + 0x2f) = 4;
  FUN_14472d638(param_1,param_4,param_7,0xffffffff);
  if ((-1 < param_5) && (param_5 < *(int *)(param_1 + 0x78))) {
    FUN_140042a1e(param_1,param_4,param_7,param_5);
  }
  if (param_2 == (undefined8 *)0x0) {
    param_2 = &DAT_14ca94d98;
    param_7[0x16] = DAT_14ca94db0;
    *(undefined4 *)(param_7 + 0x17) = 0;
    bVar3 = param_6 * '\x02' | 4;
    param_6 = param_6 << 2;
  }
  else if (*(int *)((longlong)param_2 + 0x34) == 0) {
    param_2 = &DAT_14ca94d98;
    param_7[0x16] = DAT_14ca94db0;
    *(undefined4 *)(param_7 + 0x17) = 0;
    bVar3 = 4;
    param_6 = '\0';
  }
  else {
    param_7[0x16] = param_2[4];
    *(undefined4 *)(param_7 + 0x17) = 0xffffffff;
    param_6 = *(char *)(param_2 + 6);
    bVar3 = 4;
  }
  param_7[0x11] = (longlong)param_2;
  *(undefined4 *)(param_7 + 0x12) = 0;
  *(undefined1 *)((longlong)param_7 + 0x94) = 0;
  *(char *)((longlong)param_7 + 0x95) = param_6;
  *(undefined1 *)((longlong)param_7 + 0x96) = 8;
  *(byte *)((longlong)param_7 + 0x97) = bVar3;
  if (param_3 == 0) {
    return;
  }
  FUN_147af6fac(param_3,param_8);
  return;
}



// FUNCTION 140042a1e FUN_140042a1e body=140 status=ok
// SIG undefined FUN_140042a1e(void)

void FUN_140042a1e(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  
  uVar3 = *(int *)(param_1 + 0x78) - 1;
  if ((int)param_4 < *(int *)(param_1 + 0x78)) {
    uVar3 = param_4;
  }
  *(char *)(param_3 + 0xbc) = (char)uVar3;
  *(undefined1 *)(param_3 + 0xbd) = *(undefined1 *)(param_1 + 0x78);
  *(undefined8 *)(param_3 + 0xa8) = *(undefined8 *)(param_1 + 0x58);
  if ((-1 < (int)uVar3) && (uVar2 = *(uint *)(param_1 + 0x78), uVar3 < uVar2)) {
    bVar1 = *(char *)(param_1 + 0x80) + 2;
    uVar4 = 0xc;
    if (*(char *)(param_1 + 0x80) != '\0') {
      uVar4 = 2;
    }
    *(longlong *)(param_3 + 0x78) = param_1 + 0x28;
    *(undefined4 *)(param_3 + 0x80) = 0;
    *(char *)(param_3 + 0x84) = (char)(uVar3 << (bVar1 & 0x1f));
    *(char *)(param_3 + 0x85) = (char)(uVar2 << (bVar1 & 0x1f));
    *(undefined1 *)(param_3 + 0x86) = uVar4;
    *(undefined1 *)(param_3 + 0x87) = 4;
  }
  return;
}



// FUNCTION 140042aaa FUN_140042aaa body=266 status=ok
// SIG undefined FUN_140042aaa(void)

float FUN_140042aaa(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = (float)FUN_14472d7fc();
  if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0x318;
    if (*(longlong *)(param_1 + 800) != 0) {
      lVar3 = *(longlong *)(param_1 + 800);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x328) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x2e0) + (longlong)iVar2 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar2 * 0x20) == param_2) {
          if (lVar3 == 0) {
            return fVar6;
          }
          if (lVar3 == -8) {
            return fVar6;
          }
          iVar2 = *(int *)(lVar3 + 0x10);
          if ((longlong)iVar2 == 0) {
            return fVar6;
          }
          lVar3 = *(longlong *)(lVar3 + 8);
          lVar5 = 0;
          do {
            fVar7 = (float)FUN_14472d7fc(param_1,*(undefined8 *)(lVar3 + lVar5),param_3);
            if (fVar6 <= fVar7) {
              fVar6 = fVar7;
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)iVar2 * 8 != lVar5);
          return fVar6;
        }
        iVar2 = *(int *)(lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return fVar6;
}



// FUNCTION 140042bb4 FUN_140042bb4 body=276 status=ok
// SIG undefined FUN_140042bb4(void)

void FUN_140042bb4(longlong param_1,longlong *param_2,float param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)(param_1 + 0x180);
  iVar2 = *(int *)(param_1 + 0x188);
  lVar7 = (longlong)iVar2;
  if (0 < lVar7) {
    plVar5 = (longlong *)*plVar1;
    lVar6 = lVar7;
    do {
      if (((*param_2 == *plVar5) &&
          (*(int *)((longlong)plVar5 + 0xc) == *(int *)((longlong)param_2 + 0xc))) &&
         ((char)plVar5[1] == (char)param_2[1])) {
        if (plVar5 != (longlong *)0x0) {
          if ((*(float *)(plVar5 + 2) != param_3) || (NAN(*(float *)(plVar5 + 2)) || NAN(param_3)))
          goto LAB_140042c67;
          goto LAB_140042c74;
        }
        break;
      }
      plVar5 = (longlong *)((longlong)plVar5 + 0x24);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 0x188) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x18c) < iVar2 + 1U) {
    FUN_1406a5a8c(plVar1,iVar2);
  }
  plVar5 = (longlong *)(*plVar1 + lVar7 * 0x24);
  *plVar5 = 0;
  *(undefined1 *)(plVar5 + 1) = 2;
  *(undefined4 *)((longlong)plVar5 + 0xc) = 0xffffffff;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *(undefined4 *)(plVar5 + 4) = 0;
  uVar3 = *(undefined4 *)((longlong)param_2 + 4);
  lVar7 = param_2[1];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(int *)plVar5 = (int)*param_2;
  *(undefined4 *)((longlong)plVar5 + 4) = uVar3;
  *(int *)(plVar5 + 1) = (int)lVar7;
  *(undefined4 *)((longlong)plVar5 + 0xc) = uVar4;
  *(undefined8 *)((longlong)plVar5 + 0x14) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x1c) = 0;
LAB_140042c67:
  *(float *)(plVar5 + 2) = param_3;
  FUN_143572d0a(param_1);
LAB_140042c74:
  if (*(longlong *)(param_5 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_5 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140042cc8 FUN_140042cc8 body=373 status=ok
// SIG undefined FUN_140042cc8(void)

void FUN_140042cc8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140042d53;
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
LAB_140042d53:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 140042e3e FUN_140042e3e body=239 status=ok
// SIG undefined FUN_140042e3e(void)

int FUN_140042e3e(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar4 == 0) {
    iVar4 = FUN_140042f2e(param_1 + 0x60,8);
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1447808da(param_1 + 0x70,iVar2);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 4) = 0;
    iVar2 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar2 + 8;
    if ((uint)(*(int *)(param_1 + 0x8c) - iVar2) < 8) {
      FUN_140042f8e((longlong *)(param_1 + 0x80),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x80);
    lVar5 = (longlong)iVar2 * 0x10;
    puVar1 = (undefined8 *)(lVar3 + 0x70 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x60 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar3 + lVar5) = 0;
    ((undefined8 *)(lVar3 + lVar5))[1] = 0;
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x90) + -4 + (longlong)iVar4 * 4);
    *(int *)(param_1 + 0x98) = iVar4 + -1;
    FUN_144780a3c(param_1 + 0x90);
    iVar4 = iVar2 * 8 + 1;
  }
  return iVar4;
}



// FUNCTION 140042f2e FUN_140042f2e body=70 status=ok
// SIG undefined FUN_140042f2e(void)

int FUN_140042f2e(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1400430e8(param_1,iVar1);
  }
  FUN_140042f74((longlong)iVar1 * 8 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 140042f74 FUN_140042f74 body=26 status=ok
// SIG undefined FUN_140042f74(void)

void FUN_140042f74(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1 * 8) = 0xffffffff;
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 140042f8e FUN_140042f8e body=259 status=ok
// SIG undefined FUN_140042f8e(void)

void FUN_140042f8e(longlong param_1,int param_2)

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
    FUN_140043092(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140043092 FUN_140043092 body=85 status=ok
// SIG undefined FUN_140043092(void)

void FUN_140043092(longlong *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_3 != 0 || *param_1 != 0) {
    if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_1467ac60e(param_3,param_4);
    }
    lVar1 = FUN_14001fdce(*param_1,(ulonglong)param_3 * param_4,8);
    *param_1 = lVar1;
  }
  return;
}



// FUNCTION 1400430e8 FUN_1400430e8 body=353 status=ok
// SIG undefined FUN_1400430e8(void)

void FUN_1400430e8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14004316f;
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
LAB_14004316f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140043258 FUN_140043258 body=263 status=ok
// SIG undefined FUN_140043258(void)

undefined8 FUN_140043258(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *lpTlsValue;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x48) != '\0')) {
    if ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0) {
      lpTlsValue = TlsGetValue(*(DWORD *)(param_1 + 8));
      if (lpTlsValue == (undefined8 *)0x0) {
        lpTlsValue = (undefined8 *)FUN_14001cc68(0x90,0x10);
        lpTlsValue[6] = 0;
        *(undefined4 *)(lpTlsValue + 7) = 0;
        *lpTlsValue = 0;
        lpTlsValue[1] = 0;
        lpTlsValue[2] = 0;
        lpTlsValue[3] = 0;
        *(undefined8 *)((longlong)lpTlsValue + 0x3c) = 0xffffffff00000080;
        *(undefined4 *)((longlong)lpTlsValue + 0x44) = 0;
        lpTlsValue[10] = 0;
        *(undefined4 *)(lpTlsValue + 0xb) = 0;
        lpTlsValue[0xc] = 0;
        lpTlsValue[0xd] = 0;
        lpTlsValue[0xe] = 0;
        lpTlsValue[0xf] = 0;
        lpTlsValue[0x10] = 0;
        lpTlsValue[0x11] = 0;
        TlsSetValue(*(DWORD *)(param_1 + 8),lpTlsValue);
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
        iVar1 = *(int *)(param_1 + 0x40);
        *(uint *)(param_1 + 0x40) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
          FUN_1463d122a((longlong *)(param_1 + 0x38),iVar1);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = lpTlsValue;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      FUN_1448f1600(lpTlsValue,param_2,param_3);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 140043360 FUN_140043360 body=516 status=ok
// SIG undefined FUN_140043360(void)

char FUN_140043360(uint *param_1,double *param_2,byte param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  uint *local_80;
  undefined4 *local_78;
  double *local_70;
  undefined8 *local_68;
  char *local_60;
  code *local_58;
  uint **local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_1 + 0x4e) == 0) ||
     (((ABS(*(double *)(param_1 + 0x14) - *param_2) <= 9.999999747378752e-05 &&
       (ABS(*(double *)(param_1 + 0x16) - param_2[1]) <= 9.999999747378752e-05)) &&
      ((ABS(*(double *)(param_1 + 0x18) - param_2[2]) <= 9.999999747378752e-05 & (param_3 ^ 1)) != 0
      )))) {
    cVar4 = '\0';
  }
  else {
    puVar1 = param_1 + 0x4e;
    local_60 = &local_21;
    local_21 = '\0';
    local_78 = &local_44;
    local_44 = 0;
    local_50 = &local_80;
    local_68 = &local_40;
    local_58 = FUN_14361e23e;
    local_80 = param_1;
    local_70 = param_2;
    FUN_144966906(puVar1);
    cVar4 = local_21;
    if (local_21 == '\x01') {
      *(undefined8 *)(param_1 + 0x18) = local_30;
      *(undefined8 *)(param_1 + 0x14) = local_40;
      *(undefined8 *)(param_1 + 0x16) = uStack_38;
      if (((*(longlong *)puVar1 != 0) &&
          (lVar7 = *(longlong *)(*(longlong *)puVar1 + 8), lVar7 != 0)) &&
         (lVar7 = *(longlong *)(lVar7 + 0x260), lVar7 != 0)) {
        FUN_144840e24(lVar7,puVar1);
      }
      cVar4 = local_21;
      if ((((char)(byte)param_1[2] < '\0') &&
          (*(byte *)((longlong)param_1 + 9) = *(byte *)((longlong)param_1 + 9) | 1,
          ((byte)param_1[2] & 1) != 0)) &&
         ((param_1[1] != 0 &&
          ((((uVar3 = *param_1, -1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
            (plVar6 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
            plVar6 != (longlong *)0x0)) &&
           ((*(uint *)(plVar6 + 2) == param_1[1] && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0))))))
         )) {
        if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
          lVar7 = *plVar6;
        }
        else {
          lVar7 = 0;
        }
        lVar5 = DAT_14c997cc0;
        if (DAT_14c997cc0 == 0) {
          plVar6 = (longlong *)FUN_145a62958();
          lVar5 = plVar6[0x22];
          if (lVar5 == 0) {
            (**(code **)(*plVar6 + 1000))(plVar6);
            lVar5 = plVar6[0x22];
          }
        }
        cVar2 = *(char *)(lVar5 + 0x75);
        if (*(char *)(lVar7 + 0x31) != '\0') {
          cVar2 = *(char *)(lVar7 + 0x31);
        }
        cVar4 = local_21;
        if (cVar2 != '\x03') {
          FUN_14034b25c(param_1);
          cVar4 = local_21;
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar4;
}



// FUNCTION 140043566 FUN_140043566 body=826 status=ok
// SIG undefined FUN_140043566(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140043566(longlong param_1,double *param_2,undefined1 param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  char cVar12;
  code *pcVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  double **local_70;
  double *local_68;
  longlong *local_60;
  longlong local_58;
  double *local_50;
  undefined8 local_48;
  double **local_40;
  longlong local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  dVar22 = *param_2;
  dVar23 = param_2[1];
  dVar10 = param_2[2];
  dVar11 = param_2[3];
  auVar5._8_8_ = -(ulonglong)((double)((ulonglong)dVar23 & 0x7ff0000000000000) == INFINITY);
  auVar5._0_8_ = -(ulonglong)((double)((ulonglong)dVar22 & 0x7ff0000000000000) == INFINITY);
  iVar15 = movmskpd((int)local_28,auVar5);
  auVar8._8_8_ = -(ulonglong)((double)((ulonglong)dVar11 & 0x7ff0000000000000) == INFINITY);
  auVar8._0_8_ = -(ulonglong)((double)((ulonglong)dVar10 & 0x7ff0000000000000) == INFINITY);
  uVar16 = movmskpd((int)param_2,auVar8);
  local_29 = param_3;
  if ((uVar16 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14004383b;
  auVar6._8_8_ = -(ulonglong)((double)((ulonglong)param_2[5] & 0x7ff0000000000000) == INFINITY);
  auVar6._0_8_ = -(ulonglong)((double)((ulonglong)param_2[4] & 0x7ff0000000000000) == INFINITY);
  iVar15 = movmskpd(iVar15,auVar6);
  auVar9._8_8_ = -(ulonglong)((double)((ulonglong)param_2[7] & 0x7ff0000000000000) == INFINITY);
  auVar9._0_8_ = -(ulonglong)((double)((ulonglong)param_2[6] & 0x7ff0000000000000) == INFINITY);
  uVar16 = movmskpd(0,auVar9);
  if ((uVar16 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14004383b;
  auVar7._8_8_ = -(ulonglong)((double)((ulonglong)param_2[9] & 0x7ff0000000000000) == INFINITY);
  auVar7._0_8_ = -(ulonglong)((double)((ulonglong)param_2[8] & 0x7ff0000000000000) == INFINITY);
  iVar15 = movmskpd(iVar15,auVar7);
  auVar4._8_8_ = -(ulonglong)((double)((ulonglong)param_2[0xb] & 0x7ff0000000000000) == INFINITY);
  auVar4._0_8_ = -(ulonglong)((double)((ulonglong)param_2[10] & 0x7ff0000000000000) == INFINITY);
  uVar16 = movmskpd(0,auVar4);
  if ((uVar16 & 0x3fffffff) != 0 || iVar15 != 0) goto LAB_14004383b;
  lVar18 = *(longlong *)(param_1 + 0x138);
  if (lVar18 == 0) {
    if (*(longlong *)(param_1 + 0x108) != 0) {
      FUN_147c47a90(*(longlong *)(param_1 + 0x108),param_1,param_2);
    }
  }
  else {
    dVar22 = dVar10 * dVar10 + dVar22 * dVar22;
    dVar23 = dVar11 * dVar11 + dVar23 * dVar23;
    auVar3._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar22 + dVar23)));
    auVar3._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar22 + dVar23)));
    iVar15 = movmskpd(iVar15,auVar3);
    if (iVar15 != 0) goto LAB_14004383b;
    if (*(longlong *)(lVar18 + 8) == 0) {
      local_38 = 0;
    }
    else {
      local_38 = *(longlong *)(*(longlong *)(lVar18 + 8) + 0x260);
    }
    lVar18 = *(longlong *)(lVar18 + 0x40);
    if ((lVar18 == 0) || (*(byte *)(lVar18 + 0x90) == 0)) {
LAB_140043711:
      if (local_38 == 0) goto LAB_140043736;
      local_70 = &local_68;
      puVar17 = &local_78;
      pcVar13 = (code *)&LAB_14362032e;
      local_68 = param_2;
    }
    else {
      if (*(byte *)(lVar18 + 0x90) < 2) {
        bVar21 = true;
      }
      else {
        bVar21 = *(char *)(lVar18 + 0x1ac) != '\x03';
      }
      if ((local_38 == 0) || (!bVar21)) goto LAB_140043711;
      local_68 = (double *)&local_29;
      local_40 = &local_68;
      local_60 = &local_38;
      puVar17 = &local_48;
      pcVar13 = FUN_1436202be;
      local_58 = param_1;
      local_50 = param_2;
    }
    *puVar17 = pcVar13;
    FUN_144966906(param_1 + 0x138);
  }
LAB_140043736:
  uVar14 = (ulonglong)DAT_14caf6fb8;
  if (0 < (longlong)uVar14) {
    bVar21 = false;
    DAT_14caf6fc4 = DAT_14caf6fc4 + 1;
    do {
      lVar18 = uVar14 * 0x10 + -8;
      uVar20 = uVar14;
      while (((*(int *)(DAT_14caf6fb0 + lVar18) != 0 &&
              (plVar1 = *(longlong **)(DAT_14caf6fb0 + -8 + lVar18), plVar1 != (longlong *)0x0)) &&
             (cVar12 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,3), cVar12 != '\0'))) {
        lVar18 = lVar18 + -0x10;
        bVar2 = uVar20 < 2;
        uVar20 = uVar20 - 1;
        if (bVar2) {
          DAT_14caf6fc4 = DAT_14caf6fc4 + -1;
          if (bVar21) goto LAB_1400437be;
          goto LAB_14004383b;
        }
      }
      uVar14 = uVar20 - 1;
      bVar21 = true;
    } while (1 < uVar20);
    DAT_14caf6fc4 = DAT_14caf6fc4 + -1;
LAB_1400437be:
    iVar15 = DAT_14caf6fb8;
    if (DAT_14caf6fc4 < 1) {
      if (0 < DAT_14caf6fb8) {
        iVar19 = 0;
        do {
          if (((*(int *)(DAT_14caf6fb0 + 8 + (longlong)iVar19 * 0x10) == 0) ||
              (plVar1 = *(longlong **)(DAT_14caf6fb0 + (longlong)iVar19 * 0x10),
              plVar1 == (longlong *)0x0)) ||
             (cVar12 = (**(code **)(*plVar1 + 0x28))(), cVar12 != '\0')) {
            FUN_14005b288(&DAT_14caf6fb0,iVar19);
            FUN_14005b248(&DAT_14caf6fb0);
          }
          else {
            iVar19 = iVar19 + 1;
          }
        } while (iVar19 < DAT_14caf6fb8);
      }
      _DAT_14caf6fc0 = 2;
      if (2 < DAT_14caf6fb8 * 2) {
        _DAT_14caf6fc0 = DAT_14caf6fb8 * 2;
      }
      if ((_DAT_14caf6fc0 < iVar15) && (DAT_14caf6fbc != DAT_14caf6fb8)) {
        FUN_14045812c(&DAT_14caf6fb0);
      }
    }
  }
LAB_14004383b:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400438a2 FUN_1400438a2 body=346 status=ok
// SIG undefined FUN_1400438a2(void)

longlong FUN_1400438a2(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_1;
  uVar6 = (uint)uVar2;
  do {
    if ((uVar2 & 0x3ffffff) == 0) {
LAB_1400439e0:
      lVar4 = FUN_14001cc68(0x10000,0);
      return lVar4;
    }
    uVar3 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar3 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    uVar5 = (ulonglong)((uVar6 & 0x3ffffff) >> 0xe);
    uVar7 = (ulonglong)((uint)uVar2 & 0x3fff);
    lVar4 = *(longlong *)(&DAT_14c833b00 + uVar5 * 8);
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar3 | *(uint *)(lVar4 + 0x10 + uVar7 * 0x18);
    }
    UNLOCK();
    if (uVar2 == uVar1) {
      *(undefined4 *)(lVar4 + uVar7 * 0x18 + 0x10) = 0;
      lVar4 = *(longlong *)
               (*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + 8 + (ulonglong)(uVar6 & 0x3fff) * 0x18);
      FUN_1447d080c(uVar6 & 0x3ffffff);
      if (lVar4 != 0) {
        return lVar4;
      }
      goto LAB_1400439e0;
    }
    uVar2 = *param_1;
    uVar6 = (uint)uVar2;
  } while( true );
}



// FUNCTION 1400439fc FUN_1400439fc body=115 status=ok
// SIG undefined FUN_1400439fc(void)

undefined8 FUN_1400439fc(longlong param_1,byte param_2,undefined1 *param_3)

{
  uint uVar1;
  byte bVar2;
  uint7 uVar3;
  longlong lVar4;
  
  *param_3 = param_1 != 0;
  if (param_1 != 0) {
    if (((*(uint *)(param_1 + 8) & 0x3400) == 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
      uVar1 = *(uint *)(param_1 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        uVar3 = (uint7)(uint3)(_tls_index >> 8);
        bVar2 = 1;
        if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc88) != '\x01') goto LAB_140043a6c;
      }
    }
    *param_3 = 1;
  }
  bVar2 = 0;
  uVar3 = 0;
LAB_140043a6c:
  return CONCAT71(uVar3,bVar2 & param_2);
}



// FUNCTION 140043a76 FUN_140043a76 body=57 status=ok
// SIG undefined FUN_140043a76(void)

void FUN_140043a76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62f00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62f00 = FUN_140002ddd(FUN_1464fb75c,uVar1,L"GbxRotationTargetModifier_Distract");
  }
  return;
}



// FUNCTION 140043ab0 FUN_140043ab0 body=202 status=ok
// SIG undefined FUN_140043ab0(void)

void FUN_140043ab0(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  code *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = param_1[2];
  local_80 = *param_1;
  local_68 = &local_50;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  uStack_2c = param_2[7];
  local_28 = param_2[8];
  uStack_24 = param_2[9];
  uStack_20 = param_2[10];
  uStack_1c = param_2[0xb];
  local_18 = param_2[0xc];
  uStack_14 = param_2[0xd];
  uStack_10 = param_2[0xe];
  uStack_c = param_2[0xf];
  local_58 = &local_a8;
  local_a0 = param_1[3];
  local_90 = param_1[4];
  local_88 = param_1[5];
  local_78 = param_1[6];
  local_70 = param_1[7];
  local_60 = FUN_1437c0076;
  local_98 = param_2;
  local_50 = local_80;
  FUN_14474f1c8(param_1[1],local_38,&local_60,0);
  if ((local_8 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140043b7c FUN_140043b7c body=155 status=ok
// SIG undefined FUN_140043b7c(void)

void FUN_140043b7c(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  lVar3 = *param_2;
  if (*(int *)(lVar3 + 0x50) == 0) {
    *(undefined1 *)(lVar3 + 0x9c) = 2;
  }
  else {
    iVar2 = *(int *)(*(longlong *)(*param_1 + 8) + 0x140);
    if (*(int *)(lVar3 + 0xa0) == iVar2) {
      cVar4 = *(char *)(lVar3 + 0x9c);
    }
    else {
      cVar4 = FUN_147dcc38e(*param_1,lVar3 + 0x40);
      *(char *)(lVar3 + 0x9c) = cVar4;
      *(int *)(lVar3 + 0xa0) = iVar2;
    }
    if (cVar4 != '\x02') {
      return;
    }
  }
  lVar5 = (longlong)*(int *)(param_1[1] + 0x20);
  if (lVar5 != 0) {
    puVar6 = *(undefined8 **)(param_1[1] + 0x18);
    puVar1 = puVar6 + lVar5 * 9;
    do {
      FUN_144725224(param_1[2],lVar3,*puVar6,puVar6 + 1,*param_1);
      puVar6 = puVar6 + 9;
    } while (puVar6 != puVar1);
  }
  return;
}



// FUNCTION 140043c18 FUN_140043c18 body=319 status=ok
// SIG undefined FUN_140043c18(void)

undefined8 FUN_140043c18(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar5 = (longlong)param_2 * 0x48;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar9 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar9 >> 4]];
      }
      else {
        if ((uVar9 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar9 >> 4];
          uVar7 = 0x32;
          if (0x32 < bVar2) {
            uVar7 = (ulonglong)bVar2;
          }
          uVar10 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_140043c7f;
            lVar1 = uVar7 + 1 + uVar10;
            uVar10 = uVar10 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar9 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_140043c7f:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  uVar4 = SUB168(auVar3 * ZEXT816(0xe38e38e38e38e38f),0);
  uVar9 = 0x7fffffff;
  iVar6 = (int)(uVar5 / 0x48);
  if ((iVar6 < param_2) || (uVar9 = uVar5 / 0x48 & 0xffffffff, 0 < iVar6)) {
    uVar8 = (undefined4)uVar9;
    uVar4 = FUN_1446f8d3c(param_1,0,uVar9,0x48,8);
  }
  else {
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  return uVar4;
}



// FUNCTION 140043d58 FUN_140043d58 body=498 status=ok
// SIG undefined FUN_140043d58(void)

void FUN_140043d58(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_140043eb8;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar4 * 0x30) != 0) {
        FUN_1400020a8();
        iVar3 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_140043eb8;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_140043eb8:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar12 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 140043f4c FUN_140043f4c body=1829 status=ok
// SIG undefined FUN_140043f4c(void)

void FUN_140043f4c(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  int iVar23;
  byte bVar24;
  int iVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong *local_70;
  uint *local_68;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar17 = *(uint *)(param_1 + 1);
  uVar6 = uVar17 - *(int *)((longlong)param_1 + 0x34);
  uVar16 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar6;
  local_88 = param_1;
  if (uVar6 < uVar16) {
    if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar16);
    }
    uVar6 = uVar16 - uVar17;
    if (uVar6 != 0 && (int)uVar17 <= (int)uVar16) {
      iVar23 = *(int *)((longlong)param_1 + 0xc);
      uVar27 = uVar17;
      if (iVar23 < (int)uVar16) {
        FUN_14494313c(param_1);
        uVar27 = *(uint *)(param_1 + 1);
        iVar23 = *(int *)((longlong)param_1 + 0xc);
      }
      *(uint *)(param_1 + 1) = uVar27 + uVar6;
      if (iVar23 - uVar27 < uVar6) {
        FUN_140044672(param_1);
      }
      if ((int)uVar27 < (int)uVar16) {
        lVar20 = *param_1;
        uVar19 = (ulonglong)uVar16;
        iVar23 = *(int *)((longlong)param_1 + 0x34);
        puVar14 = (undefined4 *)(uVar19 * 0x30 + lVar20 + -0x2c);
        do {
          iVar7 = (int)uVar19;
          if (iVar23 != 0) {
            *(int *)(lVar20 + (longlong)(int)param_1[6] * 0x30) = iVar7 + -1;
          }
          puVar14[-1] = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x34) < 1) {
            uVar22 = 0xffffffff;
          }
          else {
            uVar22 = (undefined4)param_1[6];
          }
          uVar19 = uVar19 - 1;
          *puVar14 = uVar22;
          *(int *)(param_1 + 6) = iVar7 + -1;
          iVar23 = *(int *)((longlong)param_1 + 0x34) + 1;
          *(int *)((longlong)param_1 + 0x34) = iVar23;
          puVar14 = puVar14 + -0xc;
        } while ((longlong)(int)uVar27 < (longlong)uVar19);
      }
      if (uVar17 == 0) {
        *(uint *)(param_1 + 5) = uVar6;
        uVar17 = uVar6 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar17) {
          if ((0x80 < uVar6) || (param_1[4] != 0)) {
            uVar27 = 0;
            if (0x80 < uVar6) {
              uVar27 = uVar17;
            }
            FUN_1446efa72(param_1 + 4,0,uVar27,4);
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar6 + 0x1f & 0xffffffe0;
        }
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = param_1 + 2;
        }
        if (uVar6 < 0x101) {
          uVar17 = uVar17 + (uVar17 == 0);
        }
        memset(plVar13,0,(ulonglong)(uVar17 << 2));
        iVar23 = (int)param_1[5];
        iVar7 = iVar23 + 0x1f;
        if (-1 < iVar23) {
          iVar7 = iVar23;
        }
        if (iVar23 % 0x20 != 0) {
          plVar13 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar13 = (longlong *)param_1[4];
          }
          bVar24 = -(char)(iVar23 % 0x20);
          *(uint *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar7 >> 5) * 4) << (bVar24 & 0x1f))
               >> (bVar24 & 0x1f);
        }
      }
      else if (-1 < (int)uVar6) {
        plVar13 = param_1 + 2;
        iVar23 = (int)param_1[5];
        if (uVar16 != uVar17) {
          if (iVar23 == 0) {
            iVar7 = -1;
          }
          else {
            iVar7 = iVar23 + 0x1e;
            if (-1 < iVar23 + -1) {
              iVar7 = iVar23 + -1;
            }
            iVar7 = iVar7 >> 5;
          }
          iVar25 = iVar23 + uVar6;
          iVar11 = iVar23 + uVar6 + -1;
          iVar12 = iVar23 + uVar6 + 0x1e;
          if (-1 < iVar11) {
            iVar12 = iVar11;
          }
          if (iVar12 >> 5 == iVar7) {
            *(int *)(local_88 + 5) = iVar25;
          }
          else {
            if (*(int *)((longlong)local_88 + 0x2c) < iVar25) {
              iVar7 = iVar23;
              if (iVar25 + 0x1fU < 0xa0) {
                iVar12 = 0x80;
              }
              else {
                uVar17 = iVar25 + 0x1fU >> 5;
                if (*(int *)((longlong)local_88 + 0x2c) + 0x1fU < 0xa0) {
                  uVar27 = 4;
                  if (4 < uVar17) {
                    uVar27 = uVar17;
                  }
                }
                else {
                  uVar27 = uVar17 + (uVar17 * 3 >> 3) + 0x10;
                }
                uVar19 = (ulonglong)(uVar27 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar8 = (uint)(uVar19 + 0xf);
                    if (uVar27 < 0x1ffd) {
                      uVar19 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar19 + 0xf >> 4]];
                    }
                    else {
                      uVar26 = (ulonglong)(uVar8 & 0xfffffff0);
                      if (uVar26 < 0x7ff1) {
                        bVar24 = (&DAT_14c841e00)[uVar8 >> 4];
                        uVar10 = 0x32;
                        if (0x32 < bVar24) {
                          uVar10 = (ulonglong)bVar24;
                        }
                        uVar21 = 0x32 - (ulonglong)bVar24;
                        do {
                          uVar19 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar21 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar21 & 0xffffffff] & 0xf) == 0)
                          goto LAB_140044585;
                          lVar20 = uVar10 + 1 + uVar21;
                          uVar21 = uVar21 - 1;
                        } while (lVar20 != 0x33);
                      }
                      uVar19 = 0x10;
                      if (0x10 < DAT_14c841df8) {
                        uVar19 = (ulonglong)DAT_14c841df8;
                      }
                      uVar19 = -uVar19 & (uVar26 + uVar19) - 1;
                    }
                  }
                  else {
                    uVar19 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar19,0);
                    iVar7 = (int)local_88[5];
                  }
                }
LAB_140044585:
                iVar11 = (int)(uVar19 >> 2);
                iVar12 = -0x20;
                if ((int)uVar17 <= iVar11) {
                  iVar12 = iVar11 << 5;
                }
              }
              plVar15 = local_88;
              *(int *)((longlong)local_88 + 0x2c) = iVar12;
              FUN_1446efbd8(plVar13,iVar7);
              iVar25 = (int)plVar15[5] + uVar6;
            }
            iVar7 = iVar25 + 0x1f;
            if (-1 < iVar25) {
              iVar7 = iVar25;
            }
            *(int *)(local_88 + 5) = iVar25;
            if (iVar25 % 0x20 != 0) {
              plVar15 = (longlong *)local_88[4];
              if ((longlong *)local_88[4] == (longlong *)0x0) {
                plVar15 = plVar13;
              }
              bVar24 = -(char)(iVar25 % 0x20);
              *(uint *)((longlong)plVar15 + (longlong)(iVar7 >> 5) * 4) =
                   (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar7 >> 5) * 4) <<
                         (bVar24 & 0x1f)) >> (bVar24 & 0x1f);
            }
          }
        }
        FUN_1447c6044(plVar13,iVar23,uVar6,0);
        param_1 = local_88;
      }
    }
    iVar23 = 1;
    if (3 < uVar16) {
      uVar17 = (uVar16 | 1) + 0xe;
      iVar23 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> iVar23 == 0; iVar23 = iVar23 + -1) {
        }
      }
      iVar23 = 1 << ((byte)iVar23 & 0x1f);
    }
    if (((int)param_1[9] == 0) || ((int)param_1[9] < iVar23)) {
      *(int *)(param_1 + 9) = iVar23;
      FUN_1437be5fc(param_1);
    }
  }
  uVar17 = *(uint *)(param_2 + 5);
  if (uVar17 == 0) {
    uVar19 = 1;
    uVar26 = 0;
    iVar23 = 0;
    uVar6 = 0;
  }
  else {
    puVar9 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar9 = (uint *)(param_2 + 2);
    }
    uVar6 = *puVar9;
    if (uVar6 == 0) {
      iVar23 = uVar17 + 0x1e;
      if (-1 < (int)(uVar17 - 1)) {
        iVar23 = uVar17 - 1;
      }
      uVar26 = 0;
      uVar19 = (ulonglong)(uint)(iVar23 >> 5);
      if (iVar23 >> 5 < 1) {
        uVar19 = uVar26;
      }
      iVar23 = 0;
      do {
        if (uVar19 == uVar26) goto LAB_140044234;
        iVar23 = iVar23 + 0x20;
        uVar6 = puVar9[uVar26 + 1];
        uVar26 = uVar26 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar26 = 0;
      iVar23 = 0;
    }
    uVar19 = (ulonglong)(-uVar6 & uVar6);
    uVar10 = uVar19 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar6 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if ((int)uVar17 <= (int)uVar6) {
      uVar6 = uVar17;
    }
  }
  if (uVar6 != uVar17) {
    local_70 = param_1 + 7;
    uVar16 = 0xffffffff;
    local_80 = param_2;
    local_78 = (ulonglong)uVar17;
    local_68 = (uint *)(param_2 + 2);
    do {
      lVar20 = *local_80;
      lVar18 = (longlong)(int)uVar6 * 0x30;
      FUN_1437be248(param_1,local_58);
      puVar4 = local_50;
      *(undefined8 *)(local_50 + 4) = *(undefined8 *)(lVar20 + 0x10 + lVar18);
      puVar14 = (undefined4 *)(lVar20 + lVar18);
      uVar22 = puVar14[1];
      uVar2 = puVar14[2];
      uVar3 = puVar14[3];
      *local_50 = *puVar14;
      local_50[1] = uVar22;
      local_50[2] = uVar2;
      local_50[3] = uVar3;
      *(undefined8 *)(local_50 + 6) = 0;
      iVar7 = *(int *)(lVar20 + 0x20 + lVar18);
      _Src = *(void **)(lVar20 + 0x18 + lVar18);
      local_50[8] = iVar7;
      if ((longlong)iVar7 == 0) {
        local_50[9] = 0;
      }
      else {
        puVar1 = (undefined8 *)(local_50 + 6);
        FUN_140043c18(puVar1,iVar7);
        memcpy((void *)*puVar1,_Src,(longlong)iVar7 * 0x48);
      }
      puVar4[10] = 0xffffffff;
      local_5c = local_58[0];
      uVar17 = FUN_1448eb174(puVar4,0x18,0);
      param_1 = local_88;
      cVar5 = FUN_1437be508(local_88,uVar17,puVar4,&local_5c);
      if (cVar5 == '\0') {
        uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
        iVar7 = 1;
        if (3 < uVar6) {
          uVar10 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
          lVar20 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar20 & 0x1f);
        }
        if (((int)uVar6 < 1) || (iVar7 <= (int)param_1[9])) {
          uVar17 = (int)param_1[9] - 1U & uVar17;
          puVar4[0xb] = uVar17;
          plVar13 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar13 = local_70;
          }
          puVar4[10] = *(undefined4 *)
                        ((longlong)plVar13 +
                        ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
          plVar13 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar13 = local_70;
          }
          *(undefined4 *)
           ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
               local_5c;
        }
        else {
          *(int *)(param_1 + 9) = iVar7;
          FUN_1437be5fc(param_1);
        }
      }
      uVar16 = uVar16 & ~(uint)uVar19;
      puVar9 = (uint *)local_80[4];
      if ((uint *)local_80[4] == (uint *)0x0) {
        puVar9 = local_68;
      }
      uVar17 = *(uint *)(local_80 + 5);
      iVar7 = (int)uVar26;
      lVar20 = (longlong)iVar7;
      uVar6 = puVar9[lVar20] & uVar16;
      if (uVar6 == 0) {
        iVar12 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar12 = uVar17 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar23 = iVar23 + 0x20;
        iVar11 = iVar12;
        if (iVar12 < iVar7) {
          iVar11 = iVar7;
        }
        if (iVar7 < iVar12) {
          lVar18 = 0;
          do {
            uVar6 = puVar9[lVar20 + lVar18 + 1];
            if (uVar6 != 0) {
              uVar26 = (ulonglong)(iVar7 + (int)lVar18 + 1);
              uVar16 = 0xffffffff;
              goto LAB_140044440;
            }
            iVar23 = iVar23 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar11 - lVar20 != lVar18);
          uVar16 = 0xffffffff;
          iVar7 = iVar11;
        }
        uVar26 = (ulonglong)(iVar7 + 1);
        param_1 = local_88;
        uVar6 = uVar17;
      }
      else {
LAB_140044440:
        uVar19 = (ulonglong)(-uVar6 & uVar6);
        uVar10 = uVar19 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar6 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)uVar17 <= (int)uVar6) {
          uVar6 = uVar17;
        }
      }
    } while (uVar6 != (uint)local_78);
  }
LAB_140044234:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140044672 FUN_140044672 body=275 status=ok
// SIG undefined FUN_140044672(void)

void FUN_140044672(longlong param_1,int param_2)

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



// FUNCTION 140044786 FUN_140044786 body=386 status=ok
// SIG undefined FUN_140044786(void)

undefined8 FUN_140044786(longlong *param_1,char param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  
  if (param_2 == '\x02') {
    if ((longlong)(int)param_1[1] != 0) {
      plVar8 = (longlong *)*param_1;
      plVar1 = plVar8 + (int)param_1[1];
      do {
        plVar4 = (longlong *)FUN_140899162(param_3);
        if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
          lVar2 = *plVar8;
          uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
          uVar9 = (uint)lVar2 & 0xffff;
          plVar7 = plVar4 + 7;
          if ((longlong *)plVar4[8] != (longlong *)0x0) {
            plVar7 = (longlong *)plVar4[8];
          }
          iVar6 = *(int *)((longlong)plVar7 +
                          (ulonglong)
                          ((int)plVar4[9] - 1U &
                          (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
          if (iVar6 != -1) {
            lVar5 = *plVar4;
            do {
              if (*(longlong *)(lVar5 + (longlong)iVar6 * 0x10) == lVar2) {
LAB_140044900:
                return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
              }
              iVar6 = *(int *)((longlong)iVar6 * 0x10 + lVar5 + 8);
            } while (iVar6 != -1);
          }
        }
        plVar8 = plVar8 + 1;
        if (plVar8 == plVar1) {
          return 0;
        }
      } while( true );
    }
  }
  else if ((param_2 == '\x01') && ((longlong)(int)param_1[1] != 0)) {
    plVar8 = (longlong *)*param_1;
    plVar1 = plVar8 + (int)param_1[1];
    do {
      plVar4 = (longlong *)FUN_140044908(param_3);
      if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
        lVar2 = *plVar8;
        uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar9 = (uint)lVar2 & 0xffff;
        plVar7 = plVar4 + 7;
        if ((longlong *)plVar4[8] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar4[8];
        }
        iVar6 = *(int *)((longlong)plVar7 +
                        (ulonglong)
                        ((int)plVar4[9] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar6 != -1) {
          lVar5 = *plVar4;
          do {
            if (*(longlong *)(lVar5 + (longlong)iVar6 * 0x10) == lVar2) goto LAB_140044900;
            iVar6 = *(int *)((longlong)iVar6 * 0x10 + lVar5 + 8);
          } while (iVar6 != -1);
        }
      }
      plVar8 = plVar8 + 1;
      if (plVar8 == plVar1) {
        return 0;
      }
    } while( true );
  }
  return 0;
}



// FUNCTION 140044908 FUN_140044908 body=88 status=ok
// SIG undefined FUN_140044908(void)

longlong FUN_140044908(longlong param_1)

{
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x140)) {
    FUN_144881636(param_1 + 0x1a0,param_1 + 0x50);
    FUN_144731a98(param_1 + 0x1a0,param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x140);
  }
  return param_1 + 0x1a0;
}



// FUNCTION 140044960 FUN_140044960 body=145 status=ok
// SIG undefined FUN_140044960(void)

void FUN_140044960(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  
  if (*(char *)(param_2 + 0x88) == '\x01') {
    plVar2 = (longlong *)*param_1;
    lVar5 = (**(code **)(*plVar2 + 0x180))(plVar2);
    bVar1 = *(byte *)(lVar5 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      iVar4 = FUN_14490d72a(lVar5);
      if (iVar4 == 2) {
        if ((*(uint *)(plVar2 + 1) & 0x10) == 0) {
          lVar5 = plVar2[4];
        }
        else {
          lVar5 = 0;
        }
        cVar3 = FUN_1400900b4(lVar5);
        if (cVar3 != '\0') goto LAB_1400449b9;
      }
      else if (iVar4 != 1) goto LAB_1400449b9;
      return;
    }
  }
LAB_1400449b9:
  FUN_144730f3e(param_2,param_1[1],param_1[2],param_1[3]);
  return;
}



// FUNCTION 1400449f2 FUN_1400449f2 body=237 status=ok
// SIG undefined FUN_1400449f2(void)

void FUN_1400449f2(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(uint *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = uVar2 ^ 1;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar4 = (longlong)(int)uVar2 * 0x10;
    lVar5 = (longlong)*(int *)(param_1 + 0x30 + lVar4);
    if (0 < lVar5) {
      lVar7 = 0x90;
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + lVar4 + 0x28);
        lVar1 = lVar3 + lVar7;
        local_78 = lVar1 + -0x80;
        local_80 = *(undefined4 *)(lVar1 + 0x30);
        local_88 = lVar3 + 0x18 + lVar7;
        local_60 = (undefined4)lVar6;
        local_70 = &DAT_14cad0f10;
        local_68 = 0;
        FUN_1447de878(*(undefined8 *)(param_1 + 0x60),&local_50,1,lVar3 + lVar7);
        *(undefined8 *)(lVar1 + -0x90) = local_50;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 200;
      } while (lVar5 != lVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140044ae0 FUN_140044ae0 body=340 status=ok
// SIG undefined FUN_140044ae0(void)

void FUN_140044ae0(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 200;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xa4) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0xfffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140044b4c;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0xfffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_140044b4c:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 200)) {
      uVar4 = uVar3 / 200 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,200,8);
  }
  return;
}



// FUNCTION 140044c34 FUN_140044c34 body=3310 status=ok
// SIG undefined FUN_140044c34(void)

void FUN_140044c34(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong *plVar17;
  undefined2 *puVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  uint uVar22;
  longlong *plVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  undefined1 auStack_3c8 [44];
  int local_39c;
  longlong *local_398;
  longlong *local_390;
  longlong local_388;
  longlong *local_380;
  undefined1 local_378 [8];
  undefined2 *local_370;
  int local_368;
  undefined1 local_360 [8];
  undefined2 *local_358;
  int local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  FUN_1456bcdda(&local_348);
  *(undefined4 *)(param_1 + 0x18) = (undefined4)local_348;
  *(undefined4 *)(param_1 + 0x1c) = local_348._4_4_;
  *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_340;
  *(undefined4 *)(param_1 + 0x24) = uStack_340._4_4_;
  FUN_1456bce2a(&local_348);
  if ((longlong *)(param_1 + 0x28) == &local_348) {
    if (local_348 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x28) = local_348;
    local_348 = 0;
    *(undefined4 *)(param_1 + 0x30) = (undefined4)uStack_340;
    *(undefined4 *)(param_1 + 0x34) = uStack_340._4_4_;
  }
  iVar16 = *(int *)(param_1 + 0x30);
  local_388 = param_1;
  if (1 < (longlong)iVar16) {
    lVar19 = *(longlong *)(param_1 + 0x28);
    memset(local_338,0,0x2f0);
    uStack_340 = lVar19 + (longlong)iVar16 * 8 + -8;
    local_348 = lVar19;
    fVar26 = logf((float)iVar16);
    local_338[0] = (int)(longlong)(fVar26 + fVar26);
    plVar6 = &local_348;
    do {
      plVar17 = (longlong *)*plVar6;
      plVar23 = (longlong *)plVar6[1];
      local_39c = (int)plVar6[2];
      iVar16 = (int)((ulonglong)((longlong)plVar23 - (longlong)plVar17) >> 3);
      uVar14 = (ulonglong)(iVar16 + 1);
      if (local_39c != 0) {
LAB_140044d4f:
        local_398 = plVar6;
        if (8 < (int)(uint)uVar14) {
          uVar12 = (uint)uVar14 >> 1;
          lVar19 = plVar17[uVar12];
          plVar17[uVar12] = *plVar17;
          *plVar17 = lVar19;
          plVar10 = plVar23 + 1;
          plVar21 = plVar17;
          local_390 = plVar23;
          local_380 = plVar23;
LAB_140044d7e:
          plVar21 = plVar21 + 1;
          if (plVar21 <= plVar23) goto code_r0x000140044d8b;
          goto LAB_140044ea9;
        }
        if (plVar17 < plVar23) {
          local_390 = plVar17 + 1;
          plVar10 = plVar17;
          plVar21 = local_390;
          do {
            for (; plVar21 <= plVar23; plVar21 = plVar21 + 1) {
              lVar19 = *plVar21;
              puVar7 = *(undefined4 **)(*plVar10 + 8);
              if (puVar7 == (undefined4 *)0x0) {
                puVar7 = &DAT_14c9485f0;
              }
              if (DAT_14c947fe0 == 0) {
                lVar5 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar5);
                DAT_14c947fe0 = lVar5;
              }
              FUN_140045924(DAT_14c947fe0,local_360,puVar7,1);
              FUN_1400021e4(local_360,&local_358);
              puVar7 = *(undefined4 **)(lVar19 + 8);
              if (puVar7 == (undefined4 *)0x0) {
                puVar7 = &DAT_14c9485f0;
              }
              if (DAT_14c947fe0 == 0) {
                lVar19 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar19);
                DAT_14c947fe0 = lVar19;
              }
              FUN_140045924(DAT_14c947fe0,local_378,puVar7,1);
              FUN_1400021e4(local_378,&local_370);
              puVar8 = local_370;
              if (local_368 == 0) {
                puVar8 = &DAT_149dfb77a;
              }
              puVar18 = local_358;
              if (local_350 == 0) {
                puVar18 = &DAT_149dfb77a;
              }
              lVar19 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)puVar18 + lVar19);
                uVar11 = (uint)uVar1;
                uVar2 = *(ushort *)((longlong)puVar8 + lVar19);
                uVar12 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1400451a1;
                  }
                  iVar16 = uVar11 - uVar12;
                  goto LAB_1400451d2;
                }
                if (uVar1 == 0) break;
LAB_1400451a1:
                lVar19 = lVar19 + 2;
              }
              iVar16 = 0;
LAB_1400451d2:
              if (local_370 != (undefined2 *)0x0) {
                FUN_1400020a8(local_370);
              }
              if (local_358 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (iVar16 < 0) {
                plVar10 = plVar21;
              }
            }
            lVar19 = *plVar10;
            *plVar10 = *plVar23;
            *plVar23 = lVar19;
            plVar23 = plVar23 + -1;
            plVar6 = local_398;
            plVar10 = plVar17;
            plVar21 = local_390;
          } while (plVar17 < plVar23);
        }
        goto LAB_140045753;
      }
LAB_14004522d:
      iVar13 = (int)uVar14;
      local_398 = plVar6;
      if (iVar13 != 0) {
        uVar12 = (iVar16 - (iVar16 + -1 >> 0x1f)) + -1 >> 1;
        do {
          plVar6 = (longlong *)(ulonglong)uVar12;
          plVar10 = plVar6;
          uVar11 = uVar12;
          plVar23 = local_390;
          while (local_390 = plVar10, uVar20 = uVar12 * 2 + 1, (int)uVar20 < iVar13) {
            uVar11 = uVar12 * 2 + 2;
            uVar12 = uVar20;
            if ((int)uVar11 < iVar13) {
              lVar19 = plVar17[(int)uVar20];
              puVar7 = *(undefined4 **)(plVar17[(int)uVar11] + 8);
              if (puVar7 == (undefined4 *)0x0) {
                puVar7 = &DAT_14c9485f0;
              }
              FUN_1447325ac(puVar7,local_360,1);
              FUN_1400021e4(local_360,&local_358);
              puVar7 = *(undefined4 **)(lVar19 + 8);
              if (puVar7 == (undefined4 *)0x0) {
                puVar7 = &DAT_14c9485f0;
              }
              FUN_1447325ac(puVar7,local_378,1);
              FUN_1400021e4(local_378,&local_370);
              puVar8 = local_370;
              if (local_368 == 0) {
                puVar8 = &DAT_149dfb77a;
              }
              puVar18 = local_358;
              if (local_350 == 0) {
                puVar18 = &DAT_149dfb77a;
              }
              lVar19 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)puVar18 + lVar19);
                uVar22 = (uint)uVar1;
                uVar2 = *(ushort *)((longlong)puVar8 + lVar19);
                uVar12 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar22 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140045313;
                  }
                  iVar16 = uVar22 - uVar12;
                  goto LAB_14004534b;
                }
                if (uVar1 == 0) break;
LAB_140045313:
                lVar19 = lVar19 + 2;
              }
              iVar16 = 0;
LAB_14004534b:
              if (local_370 != (undefined2 *)0x0) {
                FUN_1400020a8(local_370);
              }
              if (local_358 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              uVar12 = uVar11;
              if (iVar16 < 0) {
                uVar12 = uVar20;
              }
            }
            iVar16 = (int)plVar6;
            lVar19 = plVar17[(int)uVar12];
            puVar7 = *(undefined4 **)(plVar17[iVar16] + 8);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = &DAT_14c9485f0;
            }
            FUN_1447325ac(puVar7,local_360,1);
            FUN_1400021e4(local_360,&local_358);
            puVar7 = *(undefined4 **)(lVar19 + 8);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = &DAT_14c9485f0;
            }
            FUN_1447325ac(puVar7,local_378,1);
            FUN_1400021e4(local_378,&local_370);
            puVar8 = local_370;
            if (local_368 == 0) {
              puVar8 = &DAT_149dfb77a;
            }
            puVar18 = local_358;
            if (local_350 == 0) {
              puVar18 = &DAT_149dfb77a;
            }
            lVar19 = 0;
            while( true ) {
              uVar1 = *(ushort *)((longlong)puVar18 + lVar19);
              uVar11 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)puVar8 + lVar19);
              uVar20 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140045415;
                }
                iVar9 = uVar11 - uVar20;
                goto LAB_14004544c;
              }
              if (uVar1 == 0) break;
LAB_140045415:
              lVar19 = lVar19 + 2;
            }
            iVar9 = 0;
LAB_14004544c:
            if (local_370 != (undefined2 *)0x0) {
              FUN_1400020a8(local_370);
            }
            if (local_358 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            uVar11 = (uint)local_390;
            plVar23 = local_390;
            if (-1 < iVar9) break;
            lVar19 = plVar17[iVar16];
            plVar17[iVar16] = plVar17[(int)uVar12];
            plVar17[(int)uVar12] = lVar19;
            plVar6 = (longlong *)(ulonglong)uVar12;
            plVar10 = local_390;
          }
          local_390 = plVar23;
          uVar12 = uVar11 - 1;
        } while (uVar11 != 0);
        plVar6 = local_398;
        if (1 < iVar13) {
          lVar19 = *plVar17;
          *plVar17 = plVar17[uVar14 - 1];
          plVar17[uVar14 - 1] = lVar19;
          if (iVar13 != 2) {
            do {
              uVar15 = uVar14 - 1;
              iVar16 = 0;
              iVar9 = 1;
              iVar13 = 0;
              do {
                iVar16 = iVar16 + 2;
                iVar24 = iVar9;
                if ((longlong)iVar16 < (longlong)uVar15) {
                  lVar19 = plVar17[iVar9];
                  puVar7 = *(undefined4 **)(plVar17[iVar16] + 8);
                  if (puVar7 == (undefined4 *)0x0) {
                    puVar7 = &DAT_14c9485f0;
                  }
                  FUN_1447325ac(puVar7,local_360,1);
                  FUN_1400021e4(local_360,&local_358);
                  puVar7 = *(undefined4 **)(lVar19 + 8);
                  if (puVar7 == (undefined4 *)0x0) {
                    puVar7 = &DAT_14c9485f0;
                  }
                  FUN_1447325ac(puVar7,local_378,1);
                  FUN_1400021e4(local_378,&local_370);
                  puVar8 = local_370;
                  if (local_368 == 0) {
                    puVar8 = &DAT_149dfb77a;
                  }
                  puVar18 = local_358;
                  if (local_350 == 0) {
                    puVar18 = &DAT_149dfb77a;
                  }
                  lVar19 = 0;
                  while( true ) {
                    uVar1 = *(ushort *)((longlong)puVar18 + lVar19);
                    uVar11 = (uint)uVar1;
                    uVar2 = *(ushort *)((longlong)puVar8 + lVar19);
                    uVar12 = (uint)uVar2;
                    if (uVar1 != uVar2) {
                      if ((uVar2 | uVar1) < 0x80) {
                        uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                        uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14004558a;
                      }
                      iVar25 = uVar11 - uVar12;
                      goto LAB_1400455c1;
                    }
                    if (uVar1 == 0) break;
LAB_14004558a:
                    lVar19 = lVar19 + 2;
                  }
                  iVar25 = 0;
LAB_1400455c1:
                  if (local_370 != (undefined2 *)0x0) {
                    FUN_1400020a8(local_370);
                  }
                  if (local_358 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  iVar24 = iVar16;
                  if (iVar25 < 0) {
                    iVar24 = iVar9;
                  }
                }
                lVar19 = plVar17[iVar24];
                puVar7 = *(undefined4 **)(plVar17[iVar13] + 8);
                if (puVar7 == (undefined4 *)0x0) {
                  puVar7 = &DAT_14c9485f0;
                }
                FUN_1447325ac(puVar7,local_360,1);
                FUN_1400021e4(local_360,&local_358);
                puVar7 = *(undefined4 **)(lVar19 + 8);
                if (puVar7 == (undefined4 *)0x0) {
                  puVar7 = &DAT_14c9485f0;
                }
                FUN_1447325ac(puVar7,local_378,1);
                FUN_1400021e4(local_378,&local_370);
                puVar8 = local_370;
                if (local_368 == 0) {
                  puVar8 = &DAT_149dfb77a;
                }
                puVar18 = local_358;
                if (local_350 == 0) {
                  puVar18 = &DAT_149dfb77a;
                }
                lVar19 = 0;
                while( true ) {
                  uVar1 = *(ushort *)((longlong)puVar18 + lVar19);
                  uVar11 = (uint)uVar1;
                  uVar2 = *(ushort *)((longlong)puVar8 + lVar19);
                  uVar12 = (uint)uVar2;
                  if (uVar1 != uVar2) {
                    if ((uVar2 | uVar1) < 0x80) {
                      uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                      uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14004568c;
                    }
                    iVar16 = uVar11 - uVar12;
                    goto LAB_1400456c1;
                  }
                  if (uVar1 == 0) break;
LAB_14004568c:
                  lVar19 = lVar19 + 2;
                }
                iVar16 = 0;
LAB_1400456c1:
                if (local_370 != (undefined2 *)0x0) {
                  FUN_1400020a8(local_370);
                }
                if (local_358 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (-1 < iVar16) break;
                lVar19 = plVar17[iVar13];
                plVar17[iVar13] = plVar17[iVar24];
                plVar17[iVar24] = lVar19;
                iVar16 = iVar24 * 2;
                iVar9 = iVar24 * 2 + 1;
                iVar13 = iVar24;
              } while ((longlong)iVar9 < (longlong)uVar15);
              lVar19 = *plVar17;
              *plVar17 = plVar17[uVar14 - 2];
              plVar17[uVar14 - 2] = lVar19;
              plVar6 = local_398;
              uVar14 = uVar15;
            } while (2 < uVar15);
          }
        }
      }
LAB_140045753:
      plVar6 = plVar6 + -3;
    } while (&local_348 <= plVar6);
  }
  lVar19 = local_388;
  if ((((*(longlong *)(local_388 + 0x20) != 0) &&
       (cVar3 = FUN_144729dda(local_388 + 0x18), cVar3 != '\0')) &&
      (cVar3 = (**(code **)(**(longlong **)(lVar19 + 0x20) + 0x20))(), cVar3 != '\0')) &&
     (uVar4 = (**(code **)(**(longlong **)(lVar19 + 0x20) + 0x28))(), 0 < *(int *)(lVar19 + 0x30)))
  {
    iVar16 = 1;
    iVar13 = 0;
    do {
      FUN_140045b56(uVar4,iVar16 + -1,0);
      FUN_140045b56(uVar4,iVar16);
      iVar13 = iVar13 + 1;
      iVar16 = iVar16 + 2;
    } while (iVar13 < *(int *)(lVar19 + 0x30));
  }
  FUN_1447f69b6(&DAT_14cb7bac0);
  if ((local_48 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000140044d8b:
  lVar19 = *plVar21;
  puVar7 = *(undefined4 **)(*plVar17 + 8);
  if (*(undefined4 **)(*plVar17 + 8) == (undefined4 *)0x0) {
    puVar7 = &DAT_14c9485f0;
  }
  if (DAT_14c947fe0 == 0) {
    lVar5 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar5);
    DAT_14c947fe0 = lVar5;
  }
  FUN_140045924(DAT_14c947fe0,local_360,puVar7,1);
  FUN_1400021e4(local_360,&local_358);
  puVar7 = *(undefined4 **)(lVar19 + 8);
  if (*(undefined4 **)(lVar19 + 8) == (undefined4 *)0x0) {
    puVar7 = &DAT_14c9485f0;
  }
  if (DAT_14c947fe0 == 0) {
    lVar19 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar19);
    DAT_14c947fe0 = lVar19;
  }
  FUN_140045924(DAT_14c947fe0,local_378,puVar7,1);
  FUN_1400021e4(local_378,&local_370);
  plVar23 = local_390;
  puVar8 = local_370;
  if (local_368 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  puVar18 = local_358;
  if (local_350 == 0) {
    puVar18 = &DAT_149dfb77a;
  }
  lVar19 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar18 + lVar19);
    uVar12 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar8 + lVar19);
    uVar11 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140044e53;
      }
      iVar16 = uVar12 - uVar11;
      goto LAB_140044e85;
    }
    if (uVar1 == 0) break;
LAB_140044e53:
    lVar19 = lVar19 + 2;
  }
  iVar16 = 0;
LAB_140044e85:
  if (local_370 != (undefined2 *)0x0) {
    FUN_1400020a8(local_370);
  }
  if (local_358 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (-1 < iVar16) goto LAB_140044d7e;
LAB_140044ea9:
  do {
    plVar23 = plVar10;
    plVar10 = plVar23 + -1;
    if (plVar10 <= plVar17) break;
    lVar19 = *plVar17;
    puVar7 = *(undefined4 **)(*plVar10 + 8);
    if (*(undefined4 **)(*plVar10 + 8) == (undefined4 *)0x0) {
      puVar7 = &DAT_14c9485f0;
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,local_360,puVar7,1);
    FUN_1400021e4(local_360,&local_358);
    puVar7 = *(undefined4 **)(lVar19 + 8);
    if (*(undefined4 **)(lVar19 + 8) == (undefined4 *)0x0) {
      puVar7 = &DAT_14c9485f0;
    }
    if (DAT_14c947fe0 == 0) {
      lVar19 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar19);
      DAT_14c947fe0 = lVar19;
    }
    FUN_140045924(DAT_14c947fe0,local_378,puVar7,1);
    FUN_1400021e4(local_378,&local_370);
    puVar8 = local_370;
    if (local_368 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    puVar18 = local_358;
    if (local_350 == 0) {
      puVar18 = &DAT_149dfb77a;
    }
    lVar19 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar18 + lVar19);
      uVar11 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)puVar8 + lVar19);
      uVar12 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_140044f82;
        }
        iVar16 = uVar11 - uVar12;
        goto LAB_140044fb6;
      }
      if (uVar1 == 0) break;
LAB_140044f82:
      lVar19 = lVar19 + 2;
    }
    iVar16 = 0;
LAB_140044fb6:
    if (local_370 != (undefined2 *)0x0) {
      FUN_1400020a8(local_370);
    }
    if (local_358 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  } while (-1 < iVar16);
  if (plVar21 <= plVar10) {
    lVar19 = *plVar21;
    *plVar21 = *plVar10;
    *plVar10 = lVar19;
    plVar23 = local_390;
    goto LAB_140044d7e;
  }
  lVar19 = *plVar17;
  *plVar17 = *plVar10;
  plVar23[-1] = lVar19;
  local_39c = local_39c + -1;
  plVar23 = plVar23 + -2;
  plVar6 = local_398;
  if ((longlong)plVar23 - (longlong)plVar17 < (longlong)local_380 - (longlong)plVar21) {
    if (plVar21 < local_390) {
      *local_398 = (longlong)plVar21;
      local_398[1] = (longlong)local_390;
      *(int *)(local_398 + 2) = local_39c;
      plVar6 = local_398 + 3;
    }
    if (plVar10 <= plVar17 + 1) goto LAB_140045753;
  }
  else {
    if (plVar17 + 1 < plVar10) {
      *local_398 = (longlong)plVar17;
      local_398[1] = (longlong)plVar23;
      *(int *)(local_398 + 2) = local_39c;
      plVar6 = local_398 + 3;
    }
    plVar17 = plVar21;
    plVar23 = local_390;
    if (local_390 <= plVar21) goto LAB_140045753;
  }
  iVar16 = (int)((ulonglong)((longlong)plVar23 - (longlong)plVar17) >> 3);
  uVar14 = (ulonglong)(iVar16 + 1);
  if (local_39c == 0) goto LAB_14004522d;
  goto LAB_140044d4f;
}



// FUNCTION 140045924 FUN_140045924 body=561 status=ok
// SIG undefined FUN_140045924(void)

ulonglong * FUN_140045924(longlong param_1,ulonglong *param_2,uint *param_3,undefined4 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  ulonglong *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_888 [44];
  uint local_85c;
  undefined1 *local_858;
  undefined1 *local_850;
  ulonglong *local_848;
  char local_840;
  undefined1 local_838 [2048];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_888;
  uVar1 = *param_3;
  if (((uVar1 == 0) || (param_3[1] == 0)) || (uVar1 == DAT_14c948000)) {
    *param_2 = 0;
  }
  else if (param_3[1] == 1) {
    if ((int)param_3[9] < 1) {
      param_3 = param_3 + 2;
    }
    else {
      param_3 = *(uint **)(param_3 + 6);
    }
    puVar5 = *(undefined1 **)(param_3 + 1);
    puVar3 = puVar5;
    if ((puVar5 == DAT_14c948034) && (puVar3 = DAT_14c948034, *param_3 != DAT_14c948030)) {
      FUN_14011791e(&local_858,*param_3,(ulonglong)puVar5 >> 0x20);
      *(undefined1 **)(param_3 + 1) = local_858;
      puVar3 = local_858;
    }
    puVar5 = (undefined1 *)((ulonglong)puVar3 & 0xffffffff);
    if ((char)param_4 != '\0') {
      puVar5 = puVar3;
    }
    *param_2 = (ulonglong)puVar5;
  }
  else {
    if ((char)param_4 == '\0') {
      uVar1 = uVar1 + 0xf3ef7a02 ^ 0x6084;
      uVar4 = uVar1 << 8 ^ 0x9226f3bb - uVar1;
      uVar6 = uVar4 >> 0xd ^ (0xc1085fe - uVar1) - uVar4;
      uVar1 = uVar6 >> 0xc ^ (uVar1 - uVar4) - uVar6;
      uVar7 = uVar1 << 0x10 ^ (uVar4 - uVar6) - uVar1;
      uVar4 = uVar7 >> 5 ^ (uVar6 - uVar1) - uVar7;
      uVar6 = uVar4 >> 3 ^ (uVar1 - uVar7) - uVar4;
      uVar1 = uVar6 << 10 ^ (uVar7 - uVar4) - uVar6;
      uVar1 = uVar1 >> 0xf ^ uVar4 - (uVar6 + uVar1);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x110);
    local_85c = uVar1;
    EnterCriticalSection(lpCriticalSection);
    puVar2 = (ulonglong *)FUN_1427b4cd4(param_1 + 0xa8,&local_85c);
    LeaveCriticalSection(lpCriticalSection);
    if (puVar2 == (ulonglong *)0x0) {
      local_858 = local_838;
      local_840 = '\0';
      local_848 = &local_38;
      local_850 = local_858;
      FUN_1400b2424(param_3,&local_858,param_4);
      FUN_140d4db66(param_2,(int)local_850 - (int)local_858,local_858,1);
      EnterCriticalSection(lpCriticalSection);
      FUN_140643ea6(param_1 + 0xa8,&local_85c,param_2);
      LeaveCriticalSection(lpCriticalSection);
      if (local_840 == '\x01') {
        FUN_1400020a8(local_858);
      }
    }
    else {
      *param_2 = *puVar2;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_888) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140045b56 FUN_140045b56 body=339 status=ok
// SIG undefined FUN_140045b56(void)

void FUN_140045b56(longlong param_1,uint param_2,char param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if (param_2 != 0xffffffff) {
    uVar6 = param_2 >> 5;
    iVar3 = *(int *)(param_1 + 0x118);
    if ((int)uVar6 < iVar3) {
      if (((*(uint *)(*(longlong *)(param_1 + 0x110) + 0xc + (ulonglong)uVar6 * 0x14) >>
            (param_2 & 0x1f) & 1) != 0) == (bool)param_3) {
        return;
      }
    }
    else {
      if (param_3 == '\0') {
        return;
      }
      FUN_140045caa(param_1 + 0x110,uVar6 + 1,1);
      if (iVar3 < *(int *)(param_1 + 0x118)) {
        lVar4 = (longlong)iVar3;
        lVar5 = lVar4 * 0x14;
        do {
          *(short *)(*(longlong *)(param_1 + 0x110) + 0x10 + lVar5) = (short)lVar4;
          FUN_140705884(param_1,*(longlong *)(param_1 + 0x110) + lVar5);
          lVar4 = lVar4 + 1;
          lVar5 = lVar5 + 0x14;
        } while (lVar4 < *(int *)(param_1 + 0x118));
      }
      FUN_1407058ce(param_1);
      FUN_140705914(param_1);
      *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
      iVar3 = *(int *)(param_1 + 0x118);
    }
    uVar2 = 1 << ((byte)param_2 & 0x1f);
    if ((int)uVar6 < iVar3) {
      if (param_3 == '\0') {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x110) + 0xc + (ulonglong)uVar6 * 0x14);
        *puVar1 = *puVar1 & ~uVar2;
      }
      else {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x110) + 0xc + (ulonglong)uVar6 * 0x14);
        *puVar1 = *puVar1 | uVar2;
      }
      FUN_140705884(param_1,(ulonglong)(uVar6 * 0x14) + *(longlong *)(param_1 + 0x110));
      return;
    }
  }
  return;
}



// FUNCTION 140045caa FUN_140045caa body=118 status=ok
// SIG undefined FUN_140045caa(void)

void FUN_140045caa(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456bcd46(param_1,iVar1);
    }
    FUN_140045d20((longlong)iVar1 * 0x14 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1488b6496(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140045d20 FUN_140045d20 body=29 status=ok
// SIG undefined FUN_140045d20(void)

void FUN_140045d20(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0xffffffff;
    *(undefined2 *)(param_1 + 2) = 0;
    param_1 = (undefined8 *)((longlong)param_1 + 0x14);
  }
  return;
}



// FUNCTION 140045d3e FUN_140045d3e body=897 status=ok
// SIG undefined FUN_140045d3e(void)

void FUN_140045d3e(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 auStack_c8 [36];
  int local_a4;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if (cVar4 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar13 = param_1 + 0x51;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar13;
    if ((int)param_1[0x54] == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar11 = (int)param_1[0x54];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar5 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar8 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar11) || (local_78 = lVar5, plStack_60 != plVar13)) {
      do {
        local_78 = lVar5;
        lVar5 = *(longlong *)(*local_90 + 0x10 + (longlong)iVar8 * 0x20);
        if (lVar5 != 0) {
          plVar15 = (longlong *)(*local_90 + (longlong)iVar8 * 0x20 + 0x10);
          if (param_3 != '\0') {
            FUN_144837e54(lVar5,0);
            lVar5 = *plVar15;
          }
          cVar4 = FUN_140dddae6(lVar5 + 0x48);
          if ((cVar4 != '\0') &&
             (plVar15 = *(longlong **)(*plVar15 + 0x30), plVar15 != (longlong *)0x0)) {
            lVar5 = (**(code **)(*plVar15 + 8))(plVar15);
            lVar6 = FUN_14073f72a();
            if ((lVar6 != 0) &&
               ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                 == lVar6 + 0x30)))) {
              (*(code *)*local_98)(local_98[1],plVar15);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        lVar5 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar13 || local_78._4_4_ != iVar11));
    }
  }
  else {
    local_a0 = param_1 + 0x3b;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_a0;
    if ((int)param_1[0x3e] == 0) {
      uVar12 = 1;
      uVar10 = 0xffffffff;
      iVar11 = 0;
      iVar14 = 0;
      iVar7 = 0;
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar12 = (ulonglong)local_90 >> 0x20;
      iVar11 = (int)param_1[0x3e];
      iVar8 = (int)local_90;
      uVar10 = (uint)uStack_80;
      iVar7 = uStack_80._4_4_;
      iVar14 = (uint)local_78;
    }
    plVar1 = local_88;
    if (iVar7 != iVar11 || local_88 != local_a0) {
      do {
        local_a4 = iVar11;
        plVar13 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar7 * 0x20);
        if (plVar13 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar13 + 8))(plVar13);
          lVar6 = FUN_14073f72a();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar13);
          }
        }
        uVar10 = uVar10 & ~(uint)uVar12;
        plVar13 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar13 = plVar1;
        }
        iVar11 = (int)plVar1[3];
        lVar5 = (longlong)iVar8;
        uVar9 = *(uint *)((longlong)plVar13 + lVar5 * 4) & uVar10;
        if (uVar9 == 0) {
          iVar7 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar7 = iVar11 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar3 = iVar7;
          if (iVar7 < iVar8) {
            iVar3 = iVar8;
          }
          if (iVar8 < iVar7) {
            lVar6 = 0;
            do {
              uVar9 = *(uint *)((longlong)plVar13 + lVar6 * 4 + lVar5 * 4 + 4);
              if (uVar9 != 0) {
                iVar8 = iVar8 + (int)lVar6 + 1;
                uVar10 = 0xffffffff;
                goto LAB_140045ec7;
              }
              iVar14 = iVar14 + 0x20;
              lVar6 = lVar6 + 1;
            } while (iVar3 - lVar5 != lVar6);
            uVar10 = 0xffffffff;
            iVar8 = iVar3;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar11;
        }
        else {
LAB_140045ec7:
          uVar12 = (ulonglong)(-uVar9 & uVar9);
          uVar2 = uVar12 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar7 = (iVar14 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
          if (iVar11 <= iVar7) {
            iVar7 = iVar11;
          }
        }
        iVar11 = local_a4;
      } while (iVar7 != local_a4 || plVar1 != local_a0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400460c0 FUN_1400460c0 body=67 status=ok
// SIG undefined FUN_1400460c0(void)

void FUN_1400460c0(longlong *param_1,undefined8 param_2)

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



// FUNCTION 140046104 FUN_140046104 body=44 status=ok
// SIG undefined FUN_140046104(void)

longlong FUN_140046104(longlong param_1,int param_2)

{
  FUN_14473260c(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140046130 FUN_140046130 body=99 status=ok
// SIG undefined FUN_140046130(void)

void FUN_140046130(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140046194 FUN_140046194 body=99 status=ok
// SIG undefined FUN_140046194(void)

void FUN_140046194(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400461f8 FUN_1400461f8 body=99 status=ok
// SIG undefined FUN_1400461f8(void)

void FUN_1400461f8(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14004625c FUN_14004625c body=99 status=ok
// SIG undefined FUN_14004625c(void)

void FUN_14004625c(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400462c0 FUN_1400462c0 body=99 status=ok
// SIG undefined FUN_1400462c0(void)

void FUN_1400462c0(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140046324 FUN_140046324 body=99 status=ok
// SIG undefined FUN_140046324(void)

void FUN_140046324(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140046388 FUN_140046388 body=99 status=ok
// SIG undefined FUN_140046388(void)

void FUN_140046388(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400463ec FUN_1400463ec body=99 status=ok
// SIG undefined FUN_1400463ec(void)

void FUN_1400463ec(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140046450 FUN_140046450 body=99 status=ok
// SIG undefined FUN_140046450(void)

void FUN_140046450(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400464b4 FUN_1400464b4 body=99 status=ok
// SIG undefined FUN_1400464b4(void)

void FUN_1400464b4(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140046518 FUN_140046518 body=99 status=ok
// SIG undefined FUN_140046518(void)

void FUN_140046518(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14004657c FUN_14004657c body=99 status=ok
// SIG undefined FUN_14004657c(void)

void FUN_14004657c(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400465e0 FUN_1400465e0 body=99 status=ok
// SIG undefined FUN_1400465e0(void)

void FUN_1400465e0(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140046644 FUN_140046644 body=147 status=ok
// SIG undefined FUN_140046644(void)

void FUN_140046644(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar4 = (longlong *)*param_1;
    do {
      lVar1 = *plVar4;
      if (lVar1 != 0) {
        lVar3 = 0x3ef0;
        do {
          FUN_144ab2e4c(lVar1 + lVar3);
          lVar3 = lVar3 + -0x98;
        } while (lVar3 != -0x98);
        FUN_1400020a8(lVar1);
      }
      plVar4 = plVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1400466d8 FUN_1400466d8 body=99 status=ok
// SIG undefined FUN_1400466d8(void)

void FUN_1400466d8(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14004673c FUN_14004673c body=443 status=ok
// SIG undefined FUN_14004673c(void)

void FUN_14004673c(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  plVar2 = (longlong *)param_1[2];
  do {
    if (plVar2 == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
      if (plVar2 != (longlong *)0x0) {
        *param_1 = (longlong)(plVar2 + 2);
        param_1[1] = (longlong)plVar2 + (longlong)(int)plVar2[1] + 0x10;
      }
      return;
    }
    param_1[2] = *plVar2;
    if ((int)plVar2[1] == 0x3e0) {
      if (DAT_14c872d30 == (ulonglong *)0x0) {
        FUN_145bdc178();
      }
LAB_1400467d8:
      FUN_1400020a8();
    }
    else {
      if ((int)plVar2[1] != 0xfff0) goto LAB_1400467d8;
      puVar7 = DAT_14c872d30;
      if (DAT_14c872d30 == (ulonglong *)0x0) {
        puVar7 = (ulonglong *)FUN_145bdc178();
      }
      uVar4 = FUN_14493c560();
      if (uVar4 == 0) {
        uVar5 = 0;
        uVar9 = 0;
        lVar8 = 0;
      }
      else {
        uVar9 = (ulonglong)(uVar4 >> 0xe);
        uVar5 = uVar4 & 0x3fff;
        lVar8 = (ulonglong)(uVar5 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar9 * 8);
      }
      *(longlong **)(lVar8 + 8) = plVar2;
      do {
        uVar3 = *puVar7;
        uVar6 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (uVar6 >> 0x1a < uVar3 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        if (uVar4 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = *(longlong *)(&DAT_14c833b00 + uVar9 * 8) + (ulonglong)(uVar5 * 0x18);
        }
        *(uint *)(lVar8 + 0x10) = (uint)uVar3 & 0x3ffffff;
        LOCK();
        uVar1 = *puVar7;
        if (uVar3 == uVar1) {
          *puVar7 = uVar6 | uVar4;
        }
        UNLOCK();
      } while (uVar3 != uVar1);
    }
    plVar2 = (longlong *)param_1[2];
  } while( true );
}



// FUNCTION 1400468f8 FUN_1400468f8 body=1937 status=ok
// SIG undefined FUN_1400468f8(void)

void FUN_1400468f8(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  *param_1 = &PTR_FUN_14a2e9940;
  lVar4 = param_1[0x61c];
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
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar4 = param_1[0x611];
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
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar4 = param_1[0x60f];
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
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar4 = param_1[0x60e];
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
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  FUN_144b15df2(param_1[0x60c],*(undefined4 *)(param_1 + 0x60d));
  if (param_1[0x60c] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0x60a];
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
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar4 = param_1[0x609];
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
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar4 = param_1[0x607];
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
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar4 = param_1[0x606];
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
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  lVar4 = param_1[0x605];
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
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  FUN_144ab5b50(param_1 + 0x4a2);
  if (*(char *)(param_1 + 0x4a0) == '\x01') {
    *(undefined1 *)(param_1 + 0x4a0) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2471) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2471) = 0;
  }
  if (*(char *)(param_1 + 0x48b) == '\x01') {
    *(undefined1 *)(param_1 + 0x48b) = 0;
  }
  if (*(char *)(param_1 + 0x48a) == '\x01') {
    *(undefined1 *)(param_1 + 0x48a) = 0;
  }
  if (param_1[0x46c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x448] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x424] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x400] != 0) {
    FUN_1400020a8();
  }
  iVar5 = *(int *)((longlong)param_1 + 0x1ef4);
  if (iVar5 != -1) {
    *(undefined4 *)(param_1 + 0x3e6) = 0;
    if (param_1[0x3e5] != 0) {
      FUN_1400020a8();
      iVar5 = *(int *)((longlong)param_1 + 0x1ef4);
    }
    *(undefined4 *)(param_1 + 0x3de) = 0;
    if (iVar5 != 0) {
      FUN_1447a08a2(param_1 + 0x3dd,0);
    }
    param_1[0x3e3] = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3e2) = 0;
    if (0x80 < *(uint *)((longlong)param_1 + 0x1f14)) {
      *(undefined4 *)((longlong)param_1 + 0x1f14) = 0x80;
      FUN_1446efbd8(param_1 + 0x3df,0);
    }
    if (param_1[0x3e1] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0x3dd] != 0) {
      FUN_1400020a8();
    }
    param_1[0x3dd] = 0;
    param_1[0x3de] = 0xffffffff00000000;
    param_1[0x3e1] = 0;
    *(undefined4 *)(param_1 + 0x3e2) = 0;
    *(undefined4 *)((longlong)param_1 + 0x1f14) = 0x80;
    *(undefined4 *)(param_1 + 0x3e3) = 0xffffffff;
    *(undefined4 *)((longlong)param_1 + 0x1f1c) = 0;
    param_1[0x3e5] = 0;
    *(undefined4 *)(param_1 + 0x3e6) = 0;
  }
  *(undefined4 *)(param_1 + 0x3dc) = 0;
  if (param_1[0x3db] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x3d4) = 0;
  if (*(int *)((longlong)param_1 + 0x1ea4) != 0) {
    FUN_1447a08a2(param_1 + 0x3d3,0);
  }
  param_1[0x3d9] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x1ec4)) {
    *(undefined4 *)((longlong)param_1 + 0x1ec4) = 0x80;
    FUN_1446efbd8(param_1 + 0x3d5,0);
  }
  if (param_1[0x3d7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d3] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x22e) == '\x01') {
    *(undefined1 *)(param_1 + 0x22e) = 0;
  }
  FUN_144891d70(param_1 + 8);
  lVar4 = param_1[3];
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
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar9 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar9) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar9);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar9 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar9) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar9);
        }
      }
    }
  }
  return;
}



// FUNCTION 14004708a FUN_14004708a body=129 status=ok
// SIG undefined FUN_14004708a(void)

undefined4 FUN_14004708a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  
  if (DAT_14cb11e20 != DAT_14cb11e4c) {
    puVar4 = &DAT_14cb11e50;
    if (DAT_14cb11e58 != (undefined *)0x0) {
      puVar4 = DAT_14cb11e58;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14cb11e60 - 1U & *(uint *)(param_1 + 0x8c)) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14cb11e18 + (longlong)iVar2 * 0x10;
      if (*(uint *)(DAT_14cb11e18 + (longlong)iVar2 * 0x10) == *(uint *)(param_1 + 0x8c)) {
        puVar3 = (undefined4 *)(lVar1 + 4);
        if (puVar3 != (undefined4 *)0x0 && lVar1 != 0) goto LAB_140047106;
        break;
      }
      iVar2 = *(int *)(lVar1 + 8);
    }
  }
  puVar3 = (undefined4 *)(param_1 + 0x24);
LAB_140047106:
  return *puVar3;
}



// FUNCTION 14004710c FUN_14004710c body=99 status=ok
// SIG undefined FUN_14004710c(void)

void FUN_14004710c(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140047170 FUN_140047170 body=99 status=ok
// SIG undefined FUN_140047170(void)

void FUN_140047170(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400471d4 FUN_1400471d4 body=450 status=ok
// SIG undefined FUN_1400471d4(void)

void FUN_1400471d4(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,4);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400472ef:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_14004732c:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 4;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14004722a;
LAB_14004721f:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14004722a:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x3fea) goto code_r0x000140047256;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400472ac:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14004732c;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400472ef;
code_r0x000140047256:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400472ac;
    }
  }
  goto LAB_14004721f;
}



// FUNCTION 140047396 FUN_140047396 body=469 status=ok
// SIG undefined FUN_140047396(void)

void FUN_140047396(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400474c6:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_140047503:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_140047400;
LAB_1400473f5:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_140047400:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa5) goto code_r0x00014004742d;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140047483:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_140047503;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400474c6;
code_r0x00014004742d:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140047483;
    }
  }
  goto LAB_1400473f5;
}



// FUNCTION 14004756c FUN_14004756c body=450 status=ok
// SIG undefined FUN_14004756c(void)

void FUN_14004756c(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x10);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_140047687:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1400476c4:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400475c2;
LAB_1400475b7:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400475c2:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xffb) goto code_r0x0001400475ee;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 4 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_140047644:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400476c4;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_140047687;
code_r0x0001400475ee:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_140047644;
    }
  }
  goto LAB_1400475b7;
}



// FUNCTION 14004772e FUN_14004772e body=299 status=ok
// SIG undefined FUN_14004772e(void)

undefined8 *
FUN_14004772e(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14a217ae0;
  uVar3 = param_4[1];
  param_1[2] = *param_4;
  param_1[3] = uVar3;
  param_1[4] = param_4[2];
  param_1[5] = *param_3;
  *param_3 = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[10] = 0x100000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x100000000;
  param_1[0x11] = param_6;
  param_1[0x12] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x13) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  if ((*(uint *)(param_4 + 1) & 0x10010) != 0) {
    local_38 = 0;
    uStack_30 = 0xffffffff;
    local_28 = 0;
    uVar3 = FUN_14002bb54(param_1 + 7,param_2,param_1[5]);
    param_1[6] = uVar3;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x16) = 1;
  if (*param_3 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004785a FUN_14004785a body=189 status=ok
// SIG undefined FUN_14004785a(void)

void FUN_14004785a(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint *param_6,uint *param_7,uint *param_8)

{
  undefined1 auStack_78 [32];
  _SYSTEMTIME local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  GetLocalTime(&local_58);
  *param_1 = (uint)local_58.wYear;
  *param_2 = (uint)local_58.wMonth;
  *param_3 = (uint)local_58.wDayOfWeek;
  *param_4 = (uint)local_58.wDay;
  *param_5 = (uint)local_58.wHour;
  *param_6 = (uint)local_58.wMinute;
  *param_7 = (uint)local_58.wSecond;
  *param_8 = (uint)local_58.wMilliseconds;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140047918 FUN_140047918 body=336 status=ok
// SIG undefined FUN_140047918(void)

void FUN_140047918(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *_Memory;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined8 *local_460;
  uint local_454;
  undefined8 *local_450;
  undefined1 local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar3 = (undefined1 *)FUN_1400d7a00();
  local_450 = &local_res18;
  puVar4 = (undefined8 *)FUN_144737586();
  local_468 = 0;
  local_460 = &local_res18;
  uVar2 = __stdio_common_vswprintf(*puVar4,local_448,0x200,param_2);
  if ((int)uVar2 < 0) {
    uVar2 = 0xffffffff;
  }
  if (uVar2 < 0x200) {
    _Memory = (undefined1 *)0x0;
    puVar5 = local_448;
  }
  else {
    local_454 = 0x400;
    _Memory = (undefined1 *)0x0;
    do {
      free(_Memory);
      uVar1 = local_454;
      uVar6 = (ulonglong)local_454;
      _Memory = malloc(uVar6 * 2);
      if (_Memory == (undefined1 *)0x0) goto LAB_1400479c9;
      local_450 = &local_res18;
      puVar4 = (undefined8 *)FUN_144737586();
      local_468 = 0;
      local_460 = &local_res18;
      uVar2 = __stdio_common_vswprintf(*puVar4,_Memory,uVar6,param_2);
      local_454 = uVar1 * 2;
    } while (((int)uVar2 < 0) || (puVar5 = _Memory, (int)uVar1 <= (int)uVar2));
  }
  *(undefined2 *)(puVar5 + (ulonglong)uVar2 * 2) = 0;
  (**(code **)(*param_1 + 0x10))(param_1,puVar5,*puVar3,puVar3 + 4);
  free(_Memory);
LAB_1400479c9:
  if ((local_48 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140047a6a FUN_140047a6a body=231 status=ok
// SIG undefined FUN_140047a6a(void)

longlong FUN_140047a6a(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x21a8) != 0) {
    FUN_1400020a8();
  }
  lVar3 = param_1 + 0x2148;
  if (*(longlong *)(param_1 + 0x2188) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x2188);
  }
  FUN_140047b51(lVar3,*(undefined4 *)(param_1 + 0x2190));
  if (*(longlong *)(param_1 + 0x2188) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2138) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2128) != 0) {
    FUN_1400020a8();
  }
  lVar3 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x1818) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1818);
  }
  FUN_14473758e(lVar3,*(undefined4 *)(param_1 + 0x1820));
  if (*(longlong *)(param_1 + 0x1818) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140047b51 FUN_140047b51 body=68 status=ok
// SIG undefined FUN_140047b51(void)

void FUN_140047b51(longlong param_1,int param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = 0x40;
    do {
      if (*(longlong *)(param_1 + -0x10 + lVar1) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 140047b96 FUN_140047b96 body=132 status=ok
// SIG undefined FUN_140047b96(void)

void FUN_140047b96(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 140047c1a FUN_140047c1a body=634 status=ok
// SIG undefined FUN_140047c1a(void)

void FUN_140047c1a(longlong *param_1,uint *param_2,longlong param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  int local_80;
  
  if ((*(byte *)(param_3 + 0xdf) & 1) != 0) {
    lVar4 = *param_1;
    uVar10 = *(uint *)(param_3 + 0x88);
    if ((*(int *)(lVar4 + 0x10) == 0 & (byte)uVar10) == 0) {
      if ((*(int *)(lVar4 + 0x10) == 0 & (byte)((uVar10 & 2) >> 1)) == 0) {
        uVar10 = uVar10 * 2 & 8;
      }
      else {
        uVar10 = 0x10;
      }
    }
    else {
      uVar10 = 4;
    }
    uVar17 = *param_2;
    uVar16 = param_2[1];
    uVar13 = param_2[2];
    if (((uVar17 & uVar16 & uVar13) == 0xffffffff) || (*(short *)(param_3 + 0xdc) == 1)) {
      FUN_144706208(lVar4,param_3,0x7fffffff,uVar10,0xffffffff);
      plVar5 = (longlong *)param_1[1];
      iVar11 = (int)plVar5[1];
      *(uint *)(plVar5 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)plVar5 + 0xc) < iVar11 + 1U) {
        FUN_144ad425a(plVar5,iVar11);
      }
      lVar4 = *plVar5;
      lVar9 = (longlong)iVar11 * 0x10;
      uVar10 = param_2[9];
      *(longlong *)(lVar4 + lVar9) = param_3;
      *(uint *)(lVar4 + 8 + lVar9) = uVar10;
      *(undefined4 *)(lVar4 + 0xc + lVar9) = 0xffffffff;
    }
    else {
      uVar15 = 1;
      if (*(int *)(param_3 + 0x58) != 4) {
        uVar15 = (uint)*(ushort *)(param_3 + 0x74);
      }
      uVar7 = 0;
      uVar6 = uVar17;
      if (uVar17 == 0xffffffff) {
        uVar6 = uVar7;
      }
      uVar12 = uVar16;
      if (uVar16 == 0xffffffff) {
        uVar12 = uVar7;
      }
      uVar14 = uVar13;
      if (uVar13 == 0xffffffff) {
        uVar14 = uVar7;
      }
      uVar7 = 1;
      if (uVar13 == 0xffffffff) {
        uVar7 = (uint)*(byte *)(param_3 + 0xde);
      }
      uVar7 = uVar7 + uVar14;
      if (uVar14 < uVar7) {
        plVar5 = (longlong *)param_1[1];
        uVar1 = *(ushort *)(param_3 + 0x76);
        uVar13 = 1;
        if (uVar16 == 0xffffffff) {
          uVar13 = uVar15;
        }
        uVar16 = 1;
        if (uVar17 == 0xffffffff) {
          uVar16 = (uint)uVar1;
        }
        local_80 = (uVar14 * uVar15 + uVar12) * (uint)uVar1 + uVar6;
        do {
          iVar11 = local_80;
          uVar17 = uVar12;
          if (uVar12 < uVar13 + uVar12) {
            do {
              iVar18 = iVar11;
              uVar8 = uVar16;
              if (uVar6 < uVar16 + uVar6) {
                do {
                  FUN_144706208(lVar4,param_3,0x7fffffff,uVar10,iVar18);
                  iVar2 = (int)plVar5[1];
                  *(uint *)(plVar5 + 1) = iVar2 + 1U;
                  if (*(uint *)((longlong)plVar5 + 0xc) < iVar2 + 1U) {
                    FUN_144ad425a(plVar5,iVar2);
                  }
                  lVar9 = *plVar5;
                  lVar19 = (longlong)iVar2 * 0x10;
                  uVar3 = param_2[9];
                  *(longlong *)(lVar9 + lVar19) = param_3;
                  *(uint *)(lVar9 + 8 + lVar19) = uVar3;
                  *(int *)(lVar9 + 0xc + lVar19) = iVar18;
                  iVar18 = iVar18 + 1;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              uVar17 = uVar17 + 1;
              iVar11 = iVar11 + (uint)uVar1;
            } while (uVar17 != uVar13 + uVar12);
          }
          uVar14 = uVar14 + 1;
          local_80 = local_80 + uVar15 * uVar1;
        } while (uVar14 != uVar7);
      }
    }
  }
  return;
}



// FUNCTION 140047e94 FUN_140047e94 body=200 status=ok
// SIG undefined FUN_140047e94(void)

int * FUN_140047e94(int *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  iVar5 = 1;
  if (1 < DAT_14c760ae0) {
    iVar5 = DAT_14c760ae0;
  }
  iVar1 = (int)((ulonglong)*param_2 >> 0x20);
  iVar6 = (iVar5 + iVar1 + -1) / iVar5;
  iVar2 = (int)*param_2;
  iVar3 = (iVar5 + iVar2 + -1) / iVar5;
  if ((DAT_14ca84e60 < iVar3) || (DAT_14ca84e60 < iVar6)) {
    fVar8 = (float)iVar2 / (float)DAT_14ca84e60;
    fVar9 = (float)iVar1 / (float)DAT_14ca84e60;
    uVar4 = (int)ROUND(-0.5 - (fVar9 + fVar9)) >> 1;
    uVar7 = (int)ROUND(-0.5 - (fVar8 + fVar8)) >> 1;
    if ((int)uVar4 < (int)uVar7) {
      uVar7 = uVar4;
    }
    iVar5 = -uVar7;
    iVar6 = (int)(iVar1 + ~uVar7) / iVar5;
    iVar3 = (int)(~uVar7 + iVar2) / iVar5;
  }
  *param_3 = iVar5;
  iVar5 = 1;
  if (1 < DAT_14c760ab4) {
    iVar5 = DAT_14c760ab4;
  }
  *param_1 = iVar3;
  param_1[1] = iVar6;
  param_1[2] = iVar5;
  return param_1;
}



// FUNCTION 140047f5c FUN_140047f5c body=284 status=ok
// SIG undefined FUN_140047f5c(void)

ulonglong FUN_140047f5c(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  void *_Src;
  ulonglong uVar4;
  undefined1 *_Dst;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  undefined5 uStack_50;
  undefined4 local_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined4 uStack_3f;
  undefined1 local_38 [16];
  undefined1 *local_28;
  longlong lStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_47 = *(undefined4 *)(param_1 + 0x59);
  uStack_43 = *(undefined4 *)(param_1 + 0x5d);
  uStack_3f = *(undefined4 *)(param_1 + 0x61);
  uStack_50 = (undefined5)*(undefined8 *)(param_1 + 0x50);
  local_4b._3_1_ = (undefined1)((uint)*(undefined4 *)(param_1 + 0x55) >> 0x18);
  local_4b._0_3_ = (undefined3)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x28);
  local_28 = (undefined1 *)0x0;
  lStack_20 = 0;
  iVar5 = *(int *)(param_1 + 0x80);
  uVar1 = iVar5 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar1) {
    uVar2 = 0x80;
    if (0x80 < uVar1) {
      uVar2 = uVar1;
    }
    lStack_20 = (ulonglong)uVar2 << 0x20;
    FUN_1446efbd8(local_38);
    iVar5 = *(int *)(param_1 + 0x80);
  }
  lStack_20 = CONCAT44(lStack_20._4_4_,iVar5);
  if (iVar5 != 0) {
    _Src = (void *)(param_1 + 0x68);
    if (*(void **)(param_1 + 0x78) != (void *)0x0) {
      _Src = *(void **)(param_1 + 0x78);
    }
    _Dst = local_38;
    if (local_28 != (undefined1 *)0x0) {
      _Dst = local_28;
    }
    memcpy(_Dst,_Src,(ulonglong)(iVar5 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (longlong)*(int *)(param_1 + 0x10)) {
    lVar3 = 0;
    do {
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + lVar3 * 8) + 0x30c8) == '\0') {
        if ((local_4b & 0x80000000) != 0) {
          uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(int *)(DAT_14c9ca990 + 4) == 1);
          goto LAB_140047fde;
        }
        break;
      }
      lVar3 = lVar3 + 1;
    } while (*(int *)(param_1 + 0x10) != lVar3);
  }
  uVar4 = 0;
LAB_140047fde:
  if (local_28 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 140048079 FUN_140048079 body=2415 status=ok
// SIG undefined FUN_140048079(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140048079(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined2 uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  float fVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_80;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 0x118e0) = 0;
  local_50 = 0;
  local_58 = 0x4109;
  local_60._0_4_ = 0x10;
  local_60._4_4_ = 3;
  local_80 = 1;
  local_88 = 0x30;
  lVar5 = FUN_1400489e9(param_1,L"DUMMYLocalFogVolumeGPUInstanceDataBuffer",&local_60,&DAT_14c9ec548
                       );
  *(longlong *)(param_2 + 0x118e8) = lVar5;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar11 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(plVar1,0x50);
    puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar11 + 9;
  }
  local_70 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar11[1] = *(undefined8 *)(lVar5 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 3;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *puVar11 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar11 + 5) = 1;
  *(undefined8 *)((longlong)puVar11 + 0x2c) = 0xffffffff00000000;
  puVar11[7] = 0;
  puVar11[8] = lVar5;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_70,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(param_2 + 0x118f0) = puVar11;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ec590) {
    FUN_144b3d300(&DAT_14c9ec590);
    if (DAT_14c9ec590 == -1) {
      _DAT_14c9ec580 = 0;
      uRam000000014c9ec588 = 0;
      _Init_thread_footer(&DAT_14c9ec590);
    }
  }
  local_50 = 0;
  local_58 = 0x4109;
  local_60._0_4_ = 0x10;
  local_60._4_4_ = 1;
  local_80 = 1;
  local_88 = 0x10;
  lVar5 = FUN_1400489e9(param_1,L"DUMMYLocalFogVolumeGPUInstanceCullingDataBuffer",&local_60,
                        &DAT_14c9ec580);
  *(longlong *)(param_2 + 0x118f8) = lVar5;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar11 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(plVar1,0x50);
    puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar11 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar11[1] = *(undefined8 *)(lVar5 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 3;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *puVar11 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar11 + 5) = 1;
  *(undefined8 *)((longlong)puVar11 + 0x2c) = 0xffffffff00000000;
  puVar11[7] = 0;
  puVar11[8] = lVar5;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_70,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(param_2 + 0x11900) = puVar11;
  lVar5 = FUN_14476842e(param_1,&DAT_14ca63c08,L"ZeroUIntArrayDummy",2);
  *(longlong *)(param_2 + 0x119b0) = lVar5;
  if ((*(char *)(lVar5 + 0x92) == '\x01') || (*(char *)(lVar5 + 0x92) == '\x04')) {
    uVar10 = *(undefined2 *)(lVar5 + 0x8e);
  }
  else {
    uVar10 = 0;
  }
  uVar2 = *(undefined1 *)(lVar5 + 0x90);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar11 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(plVar1,0x48);
    puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar11 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar11[1] = *(undefined8 *)(lVar5 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 1;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *puVar11 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar11 + 5) = 0;
  *(undefined1 *)((longlong)puVar11 + 0x2a) = uVar2;
  *(undefined1 *)((longlong)puVar11 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar11 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar11 + 0x2e) = uVar10;
  *(undefined1 *)(puVar11 + 6) = 0;
  *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
  puVar11[7] = lVar5;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_70,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(param_2 + 0x119b8) = puVar11;
  *(undefined8 *)(param_2 + 0x119c0) = 0;
  *(undefined1 **)(param_2 + 0x11948) = &DAT_100000001;
  *(undefined4 *)(param_2 + 0x11950) = *(undefined4 *)(param_2 + 0x118e0);
  uVar9 = 0x200;
  if (*(uint *)(DAT_14c9ec4b0 + 4) < 0x200) {
    uVar9 = *(uint *)(DAT_14c9ec4b0 + 4);
  }
  uVar4 = 8;
  if (8 < uVar9) {
    uVar4 = uVar9;
  }
  *(uint *)(param_2 + 0x11954) = uVar4;
  fVar13 = 0.0;
  if (0.0 <= *(float *)(DAT_14c9ec480 + 4)) {
    fVar13 = *(float *)(DAT_14c9ec480 + 4);
  }
  local_60 = param_2 + 72000;
  *(float *)(param_2 + 0x11958) = fVar13;
  *(undefined4 *)(param_2 + 0x1195c) = 0;
  *(undefined8 *)(param_2 + 72000) = *(undefined8 *)(param_2 + 0x118f0);
  *(undefined8 *)(param_2 + 0x11980) = DAT_14c846330;
  *(undefined4 *)(param_2 + 0x11988) = DAT_14c846338;
  *(undefined8 *)(param_2 + 0x11990) = DAT_14c846330;
  *(undefined4 *)(param_2 + 0x11998) = DAT_14c846338;
  *(undefined4 *)(param_2 + 0x11960) = 0;
  *(undefined4 *)(param_2 + 0x11970) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x11974) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x11978) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x1197c) = 0x3f800000;
  *(undefined8 **)(param_2 + 0x119a0) = puVar11;
  lVar5 = FUN_140048c7e();
  local_68 = *(undefined8 *)(lVar5 + 0x18);
  uVar6 = FUN_140048b96(param_1 + 0x1a8,plVar1,&local_60);
  *(undefined8 *)(param_2 + 0x11930) = uVar6;
  local_50 = 0;
  local_58 = 0x4109;
  local_60._0_4_ = 4;
  local_60._4_4_ = 4;
  local_88 = 0;
  local_80 = 0;
  lVar5 = FUN_1400489e9(param_1,L"LocalFogVolume.GPUTileDataBuffer",&local_60,0);
  *(longlong *)(param_2 + 0x11908) = lVar5;
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar11 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(plVar1,0x50);
    puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar11 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar11[1] = *(undefined8 *)(lVar5 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 3;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *puVar11 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar11 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar11 + 0x2c) = 0xffffffff00000000;
  puVar11[7] = 0;
  puVar11[8] = lVar5;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_70,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(param_2 + 0x11910) = puVar11;
  *(undefined8 *)(param_2 + 0x11918) = 0;
  local_50 = 0;
  uVar9 = 0x10;
  if (DAT_14ca84e48 < 0x10) {
    uVar9 = DAT_14ca84e48;
  }
  local_60._0_4_ = uVar9 + (uVar9 == 0);
  local_60._4_4_ = 1;
  local_58 = 0x4189;
  uVar12 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar7 = uVar12 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar7) {
    FUN_140023dd8(plVar1,0x160);
    uVar12 = *plVar1 + 0xfU & 0xfffffffffffffff0;
    uVar7 = uVar12 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar7;
  FUN_1456bd266(uVar12,L"LocalFogVolume.DispatchIndirectBuffer",&local_60,0);
  iVar3 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar3 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar3);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 8) = uVar12;
  *(int *)(uVar12 + 0x7c) = *(int *)(param_1 + 400) + -1;
  *(ulonglong *)(param_2 + 0x11920) = uVar12;
  *(undefined8 *)(param_2 + 0x11928) = 0;
  *(undefined1 *)(param_2 + 0x119c8) = 0;
  lVar5 = FUN_14476842e(param_1,&DAT_14ca63b30,L"BlackAlphaOneDummy",2);
  *(longlong *)(param_2 + 0x119d8) = lVar5;
  if ((*(char *)(lVar5 + 0x92) == '\x04') || (*(char *)(lVar5 + 0x92) == '\x01')) {
    uVar10 = *(undefined2 *)(lVar5 + 0x8e);
  }
  else {
    uVar10 = 0;
  }
  uVar2 = *(undefined1 *)(lVar5 + 0x90);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar11 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(plVar1,0x48);
    puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar11 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar11[1] = *(undefined8 *)(lVar5 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 1;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *puVar11 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar11 + 5) = 0;
  *(undefined1 *)((longlong)puVar11 + 0x2a) = uVar2;
  *(undefined1 *)((longlong)puVar11 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar11 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar11 + 0x2e) = uVar10;
  *(undefined1 *)(puVar11 + 6) = 0;
  *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
  puVar11[7] = lVar5;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_70,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(param_2 + 0x119e0) = puVar11;
  lVar5 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
  *(longlong *)(param_2 + 0x119e8) = lVar5;
  if ((*(char *)(lVar5 + 0x92) == '\x04') || (*(char *)(lVar5 + 0x92) == '\x01')) {
    uVar10 = *(undefined2 *)(lVar5 + 0x8e);
  }
  else {
    uVar10 = 0;
  }
  uVar2 = *(undefined1 *)(lVar5 + 0x90);
  puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar8 = puVar11 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
    FUN_140023dd8(plVar1,0x48);
    puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar8 = puVar11 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar8;
  puVar11[1] = *(undefined8 *)(lVar5 + 8);
  puVar11[2] = 0;
  *(undefined1 *)(puVar11 + 3) = 1;
  *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
  *puVar11 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar11 + 5) = 0;
  *(undefined1 *)((longlong)puVar11 + 0x2a) = uVar2;
  *(undefined1 *)((longlong)puVar11 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar11 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar11 + 0x2e) = uVar10;
  *(undefined1 *)(puVar11 + 6) = 0;
  *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
  puVar11[7] = lVar5;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_70,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar11;
  *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(param_2 + 0x119f0) = puVar11;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400489e9 FUN_1400489e9 body=428 status=ok
// SIG undefined FUN_1400489e9(void)

longlong FUN_1400489e9(longlong param_1,undefined8 param_2,uint *param_3,void *param_4,
                      size_t param_5,byte param_6)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *_Dst;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  int local_68;
  int iStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = &local_39;
  local_39 = 0;
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  local_58 = *(undefined8 *)(param_3 + 4);
  uVar4 = *param_3;
  if (DAT_14ca84e48 <= *param_3) {
    uVar4 = DAT_14ca84e48;
  }
  local_68 = uVar4 + (uVar4 == 0);
  uVar4 = DAT_14ca84e48;
  if (param_3[1] < DAT_14ca84e48) {
    uVar4 = param_3[1];
  }
  iStack_64 = uVar4 + (uVar4 == 0);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  local_48 = param_2;
  lVar5 = FUN_144738de6(param_1 + 0x188);
  _Dst = param_4;
  if (param_5 != 0 && (param_6 & 1) == 0) {
    _Dst = (void *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    uVar6 = (longlong)_Dst + param_5;
    if (*(ulonglong *)(param_1 + 0x78) < uVar6) {
      FUN_140023dd8(puVar1,(int)param_5 + 0x10);
      _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      uVar6 = (longlong)_Dst + param_5;
    }
    *puVar1 = uVar6;
    memcpy(_Dst,param_4,param_5);
  }
  iVar2 = *(int *)(param_1 + 0x590);
  uVar4 = iVar2 + 1;
  *(uint *)(param_1 + 0x590) = uVar4;
  if (*(uint *)(param_1 + 0x594) < uVar4) {
    FUN_144775ac8((longlong *)(param_1 + 0x588));
  }
  lVar3 = *(longlong *)(param_1 + 0x588);
  lVar7 = (longlong)iVar2 * 0x120;
  *(undefined2 *)(lVar3 + lVar7) = 0;
  *(longlong *)(lVar3 + 8 + lVar7) = lVar5;
  *(void **)(lVar3 + 0x10 + lVar7) = _Dst;
  *(size_t *)(lVar3 + 0x18 + lVar7) = param_5;
  *(undefined8 *)(lVar3 + 0x20 + lVar7) = 0;
  *(undefined8 *)(lVar3 + 0x30 + lVar7) = 0;
  *(undefined8 *)(lVar3 + 0x60 + lVar7) = 0;
  *(undefined8 *)(lVar3 + 0x70 + lVar7) = 0;
  *(undefined8 *)(lVar3 + 0xa0 + lVar7) = 0;
  *(undefined8 *)(lVar3 + 0xb0 + lVar7) = 0;
  *(undefined8 *)(lVar3 + 0xe0 + lVar7) = 0;
  *(undefined8 *)(lVar3 + 0xf0 + lVar7) = 0;
  *(byte *)(lVar5 + 0x24) = *(byte *)(lVar5 + 0x24) | 0x80;
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140048b96 FUN_140048b96 body=232 status=ok
// SIG undefined FUN_140048b96(void)

undefined8 *
FUN_140048b96(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar4;
  uVar2 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  lVar5 = FUN_140048c7e();
  puVar6[3] = uVar2;
  lVar3 = *(longlong *)(lVar5 + 0x48);
  puVar6[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar6[5] = lVar5;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a2557d8;
  puVar6[8] = uVar2;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1402aa76e(param_1,iVar1);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 140048c7e FUN_140048c7e body=265 status=ok
// SIG undefined FUN_140048c7e(void)

undefined * FUN_140048c7e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c0b38) {
    FUN_144b3d300(&DAT_14c9c0b38);
    if (DAT_14c9c0b38 == -1) {
      FUN_1456bd374(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLocalFogVolumeUniformParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x23;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0ab8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8df43);
      _Init_thread_footer(&DAT_14c9c0b38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0ab8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140048db6 FUN_140048db6 body=191 status=ok
// SIG undefined FUN_140048db6(void)

void FUN_140048db6(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  LOCK();
  piVar1 = (int *)(*(longlong *)(param_1 + 0x78) + 8);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  local_19 = 1;
  FUN_1447439e4();
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x180);
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    while (puVar3 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)puVar3[1];
      (**(code **)*puVar3)(puVar3,param_1);
      puVar3 = puVar2;
    }
  }
  FUN_1431eb604(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140048e76 FUN_140048e76 body=233 status=ok
// SIG undefined FUN_140048e76(void)

longlong FUN_140048e76(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_1f8 [31];
  undefined8 uStack_1d9;
  undefined1 local_1cc [4];
  undefined4 local_1c8 [50];
  undefined8 local_100;
  undefined7 uStack_f8;
  undefined4 uStack_f1;
  byte local_ed;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e0 [192];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  (**(code **)(*param_2 + 0xd0))(param_2,local_1cc);
  local_1c8[0] = 0;
  lVar1 = 0x19;
  do {
    *(undefined8 *)((longlong)&uStack_1d9 + lVar1) = 0;
    *(undefined8 *)(&stack0xfffffffffffffe2f + lVar1) = 0xffffffff00000000;
    *(undefined2 *)((longlong)local_1c8 + lVar1 + -1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xd9);
  local_100 = 0;
  uStack_f8 = 0;
  uStack_f1 = 0;
  local_ed = local_ed & 0xc0;
  local_ec = local_1cc;
  local_e8 = local_1cc;
  memset(local_e0,0,0xc0);
  FUN_141645ea2(param_1,local_1c8);
  *(undefined1 *)(param_1 + 0x69) = 1;
  *(longlong **)(param_1 + 0x38) = param_2;
  *(longlong **)(param_1 + 0x40) = param_2;
  *(longlong **)(param_1 + 0x50) = param_2;
  *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) | 0x10;
  if ((local_20 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140048f60 FUN_140048f60 body=1237 status=ok
// SIG undefined FUN_140048f60(void)

void FUN_140048f60(ulonglong *param_1,undefined8 param_2,int param_3,int param_4,uint param_5,
                  undefined8 param_6)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *_Src;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  void *pvVar19;
  size_t _Size;
  void *_Dst;
  undefined2 *puVar20;
  uint uVar21;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  int local_64;
  undefined2 *local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar15 = *(undefined8 *)
            (&DAT_14ca8c1f0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  local_70 = param_2;
  uVar13 = FUN_1415e1304();
  uVar14 = 0;
  FUN_1448e935e(uVar15,&local_58,uVar13,0);
  FUN_1415e1304();
  lVar10 = local_58;
  if (local_58 != 0) {
    uVar14 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(uStack_50 + 8) + 0x50) +
              (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar14 == 0) {
      uVar14 = FUN_1400bafc2(*(longlong *)(uStack_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar15 = FUN_140029432(param_1,uVar14,0);
  param_1[0x37] = uVar14;
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 3;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x20);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 3;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a37d340;
  puVar16[2] = uVar15;
  lVar17 = FUN_144821ef4(param_1);
  FUN_144abcaea(lVar17,local_58 + 0xe0,param_6,0);
  lVar1 = local_58 + 0xe6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_144a86d70(lVar17,lVar1,&local_58,0);
  local_58 = CONCAT44(param_4,param_3);
  uStack_50 = (ulonglong)param_5;
  FUN_144a86d70(lVar17,lVar10 + 0xec,&local_58,0);
  puVar20 = (undefined2 *)(lVar10 + 0xf8);
  FUN_144a86a8e(lVar17,puVar20,local_70);
  iVar11 = *(int *)(lVar17 + 0x30) + *(int *)(lVar17 + 0x20);
  iVar12 = iVar11 + *(int *)(lVar17 + 0x40);
  local_70 = uVar14;
  if (iVar12 != 0 && SCARRY4(iVar11,*(int *)(lVar17 + 0x40)) == iVar12 < 0) {
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 0xb;
    local_64 = param_4;
    local_60 = puVar20;
    if ((undefined8 *)param_1[1] < puVar18) {
      FUN_140023dd8(param_1,0x60);
      puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar16 + 0xb;
    }
    *param_1 = (ulonglong)puVar18;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar16;
    param_1[6] = (ulonglong)(puVar16 + 1);
    uVar15 = *(undefined8 *)(lVar17 + 0x38);
    uVar4 = *(undefined4 *)(lVar17 + 0x40);
    uVar13 = *(undefined8 *)(lVar17 + 0x28);
    uVar5 = *(undefined4 *)(lVar17 + 0x30);
    uVar8 = *(undefined8 *)(lVar17 + 0x18);
    uVar6 = *(undefined4 *)(lVar17 + 0x20);
    uVar9 = *(undefined8 *)(lVar17 + 8);
    uVar7 = *(undefined4 *)(lVar17 + 0x10);
    puVar16[1] = 0;
    *puVar16 = &PTR_FUN_14a1e7fa8;
    puVar16[2] = local_70;
    puVar16[3] = uVar9;
    *(undefined4 *)(puVar16 + 4) = uVar7;
    puVar16[5] = uVar8;
    *(undefined4 *)(puVar16 + 6) = uVar6;
    puVar16[7] = uVar13;
    *(undefined4 *)(puVar16 + 8) = uVar5;
    puVar16[9] = uVar15;
    *(undefined4 *)(puVar16 + 10) = uVar4;
    *(undefined8 *)(lVar17 + 8) = 0;
    *(undefined4 *)(lVar17 + 0x10) = 0;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    *(undefined4 *)(lVar17 + 0x20) = 0;
    *(undefined8 *)(lVar17 + 0x28) = 0;
    *(undefined4 *)(lVar17 + 0x30) = 0;
    *(undefined8 *)(lVar17 + 0x38) = 0;
    *(undefined4 *)(lVar17 + 0x40) = 0;
    puVar20 = local_60;
    param_4 = local_64;
  }
  puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar16 + 4;
  if ((undefined8 *)param_1[1] < puVar18) {
    FUN_140023dd8(param_1,0x28);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar16 + 4;
  }
  *param_1 = (ulonglong)puVar18;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar16;
  param_1[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1fbc30;
  *(uint *)(puVar16 + 2) = param_3 + 7U >> 3;
  *(uint *)((longlong)puVar16 + 0x14) = param_4 + 7U >> 3;
  *(uint *)(puVar16 + 3) = param_5;
  if (DAT_14ca8507b == '\x01') {
    puVar2 = param_1 + 0x12;
    uVar21 = (uint)param_1[0x13];
    if (0 < (int)uVar21) {
      uVar21 = 0;
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
        uVar21 = (uint)param_1[0x13];
      }
    }
    if ((*(char *)(lVar10 + 0xfa) != '\0') && (*(char *)(lVar10 + 0xfb) != '\x06')) {
      uVar3 = *puVar20;
      *(uint *)(param_1 + 0x13) = uVar21 + 1;
      if (*(uint *)((longlong)param_1 + 0x9c) < uVar21 + 1) {
        FUN_1447477d8(puVar2,uVar21);
      }
      uVar14 = param_1[0x12];
      *(undefined2 *)(uVar14 + (longlong)(int)uVar21 * 4) = uVar3;
      *(undefined1 *)(uVar14 + 2 + (longlong)(int)uVar21 * 4) = 1;
      uVar21 = (uint)param_1[0x13];
    }
    if (0 < (int)uVar21) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar2;
        puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar16 + 5;
        if ((undefined8 *)param_1[1] < puVar18) {
          FUN_140023dd8(param_1,0x30);
          puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar16 + 5;
        }
        *param_1 = (ulonglong)puVar18;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar16;
        param_1[6] = (ulonglong)(puVar16 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar19 = (void *)((ulonglong)uVar21 * 4 + (longlong)_Dst);
        _Size = (ulonglong)uVar21 * 4;
        if ((void *)param_1[1] < pvVar19) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar19 = (void *)(_Size + (longlong)_Dst);
        }
        *param_1 = (ulonglong)pvVar19;
        memcpy(_Dst,_Src,_Size);
        puVar16[1] = 0;
        *puVar16 = &PTR_FUN_14a1fbc38;
        puVar16[2] = local_70;
        puVar16[3] = _Dst;
        *(uint *)(puVar16 + 4) = uVar21;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar2,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140049436 FUN_140049436 body=245 status=ok
// SIG undefined FUN_140049436(void)

longlong * FUN_140049436(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_140049c78(param_2);
    }
    FUN_1400498da(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_14004952e(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 14004952e FUN_14004952e body=147 status=ok
// SIG undefined FUN_14004952e(void)

void FUN_14004952e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  FUN_140049db4();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    plVar4 = (longlong *)FUN_1400495c2(*(undefined8 *)(param_1 + 0x98),&local_20);
    puVar2 = (undefined8 *)*plVar4;
    puVar3 = (undefined8 *)*param_2;
    if (puVar3 != puVar2) {
      *param_2 = (longlong)puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400495c2 FUN_1400495c2 body=298 status=ok
// SIG undefined FUN_1400495c2(void)

undefined8 * FUN_1400495c2(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x140;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x148);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x150) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar6 * 0x18);
        if (*puVar1 == uVar2) {
          if ((puVar1 != (ulonglong *)0x0) &&
             (puVar5 = (undefined8 *)puVar1[1], puVar5 != (undefined8 *)0x0)) goto LAB_1400496b3;
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_149f4c068;
  puVar5[1] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
  }
  local_30 = &local_40;
  local_38 = &local_48;
  local_48 = uVar2;
  local_40 = puVar5;
  FUN_1400496ee((longlong *)(param_1 + 0x108),local_24,&local_38,0);
LAB_1400496b3:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5 + 1;
}



// FUNCTION 1400496ee FUN_1400496ee body=338 status=ok
// SIG undefined FUN_1400496ee(void)

undefined4 *
FUN_1400496ee(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400499b6(param_1,local_50);
  puVar1 = (ulonglong *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_140049842(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
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
      FUN_14004a512(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140049842 FUN_140049842 body=152 status=ok
// SIG undefined FUN_140049842(void)

void FUN_140049842(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_146caed50((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1400498ab;
    }
  }
  uVar5 = 0;
LAB_1400498ab:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1400498da FUN_1400498da body=201 status=ok
// SIG undefined FUN_1400498da(void)

void FUN_1400498da(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar2 = (int)param_1[1];
  if (iVar2 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < param_2 - iVar2) {
      FUN_14004e612(param_1,iVar2);
    }
    FUN_1400499a3((longlong)iVar2 * 8 + *param_1,param_2 - iVar2);
    return;
  }
  if (-1 < (int)param_2) {
    iVar3 = iVar2 - param_2;
    if (iVar3 != 0 && (int)param_2 <= iVar2) {
      _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
      FUN_1402ef3f6(_Dst,iVar3);
      iVar1 = (int)param_1[1] - iVar2;
      if (iVar1 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 8),(longlong)iVar1 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 - iVar3;
      if (param_3 == '\x01') {
        FUN_146ec8dca(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1400499a3 FUN_1400499a3 body=19 status=ok
// SIG undefined FUN_1400499a3(void)

void FUN_1400499a3(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 1400499b6 FUN_1400499b6 body=706 status=ok
// SIG undefined FUN_1400499b6(void)

int * FUN_1400499b6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
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
      FUN_14482b872(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_140049b6f;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_140049b6f:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140049c78 FUN_140049c78 body=315 status=ok
// SIG undefined FUN_140049c78(void)

void FUN_140049c78(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140049ce2;
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
LAB_140049ce2:
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



// FUNCTION 140049db4 FUN_140049db4 body=1038 status=ok
// SIG undefined FUN_140049db4(void)

void FUN_140049db4(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar8 = *(longlong **)(param_1 + 0x90);
  puVar7 = (ulonglong *)plVar8[1];
  puVar1 = (uint *)*puVar7 + 1;
  if ((uint *)puVar7[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar8 + 0x170))(plVar8,&local_48,4);
    uVar10 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar8);
      uVar10 = (uint)local_48;
    }
  }
  else {
    uVar10 = *(uint *)*puVar7;
    *puVar7 = (ulonglong)puVar1;
  }
  if (uVar10 == 0) {
    *param_2 = 0;
    goto LAB_140049f55;
  }
  plVar8 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar8 + 5) & 1) == 0) {
    if (((*(byte *)(plVar8 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar8 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar10 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        lVar6 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar6 = *(longlong *)(lVar2 + 0x50);
        }
        iVar5 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(lVar2 + 0x58) - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
        if (iVar5 != -1) {
          lVar6 = *(longlong *)(lVar2 + 0x10);
          iVar11 = iVar5;
          do {
            if (*(ulonglong *)(lVar6 + (longlong)iVar11 * 0x18) == local_58) goto LAB_14004a0ec;
            iVar11 = *(int *)(lVar6 + (longlong)iVar11 * 0x18 + 0x10);
          } while (iVar11 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar8 = *(longlong **)(param_1 + 0x90);
      puVar7 = (ulonglong *)plVar8[1];
      puVar1 = (uint *)*puVar7 + 1;
      if ((uint *)puVar7[1] < puVar1) {
        if ((*(byte *)((longlong)plVar8 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar8 + 0x170))(plVar8,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar8,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar7;
        *puVar7 = (ulonglong)puVar1;
      }
      uVar9 = *param_2;
      uVar4 = FUN_14004c990(param_1,uVar9);
      if (uVar4 != 0) {
        *param_2 = uVar4;
        uVar9 = uVar4;
      }
      FUN_14004aa5a(uVar9,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_140049f55;
  }
  puVar7 = (ulonglong *)plVar8[1];
  puVar1 = (uint *)*puVar7 + 1;
  if ((uint *)puVar7[1] < puVar1) {
    if ((*(byte *)((longlong)plVar8 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar8 + 0x170))(plVar8,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar8,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar7;
    *puVar7 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar5 = local_4c + 1;
    plVar8 = *(longlong **)(param_1 + 0x98);
    iVar11 = (int)plVar8[1];
    uVar10 = iVar5 - iVar11;
    if (uVar10 != 0 && iVar11 <= iVar5) {
      *(int *)(plVar8 + 1) = iVar5;
      if ((uint)(*(int *)((longlong)plVar8 + 0xc) - iVar11) < uVar10) {
        FUN_1456bd870(plVar8);
      }
      memset((void *)((longlong)iVar11 * 8 + *plVar8),0,(ulonglong)uVar10 << 3);
      if ((int)local_4c < 0) goto LAB_140049f77;
      plVar8 = *(longlong **)(param_1 + 0x98);
      iVar11 = (int)plVar8[1];
    }
    if ((int)local_4c < iVar11) {
      uVar9 = *(ulonglong *)(*plVar8 + (ulonglong)local_4c * 8);
      if (uVar9 == 0) {
        uVar9 = *param_2;
        uVar4 = FUN_14004c990(param_1,uVar9);
        if (uVar4 != 0) {
          *param_2 = uVar4;
          uVar9 = uVar4;
        }
        FUN_14004aa5a(uVar9,param_1);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar9;
      }
      goto LAB_140049f55;
    }
  }
LAB_140049f77:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_140049f55:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar5 = (int)puVar7[2], iVar5 != -1) {
LAB_14004a0ec:
    puVar7 = (ulonglong *)(lVar6 + (longlong)iVar5 * 0x18);
    if (*puVar7 == local_58) goto LAB_14004a125;
  }
  puVar7 = (ulonglong *)0x0;
LAB_14004a125:
  puVar3 = *(undefined4 **)plVar8[1];
  if ((undefined4 *)((undefined8 *)plVar8[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar8 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar8 + 0x170))(plVar8,puVar7 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar7 + 1) = *puVar3;
    *(longlong *)plVar8[1] = *(longlong *)plVar8[1] + 4;
  }
  goto LAB_140049f55;
}



// FUNCTION 14004a1c4 FUN_14004a1c4 body=336 status=ok
// SIG undefined FUN_14004a1c4(void)

undefined4 *
FUN_14004a1c4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14004a3ae(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_14004a316(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
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
      FUN_14004a7b6(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004a316 FUN_14004a316 body=152 status=ok
// SIG undefined FUN_14004a316(void)

void FUN_14004a316(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_1467c4752((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_14004a37f;
    }
  }
  uVar5 = 0;
LAB_14004a37f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 14004a3ae FUN_14004a3ae body=355 status=ok
// SIG undefined FUN_14004a3ae(void)

int * FUN_14004a3ae(longlong *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar10) {
      FUN_14482b872(param_1,iVar10);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar3 = iVar7 + -1;
      }
      iVar3 = iVar3 >> 5;
    }
    plVar8 = param_1 + 2;
    iVar11 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar11 = iVar7;
    }
    if (iVar11 >> 5 == iVar3) {
      *(int *)(param_1 + 5) = iVar7 + 1;
    }
    else {
      FUN_1456bd906(plVar8);
      uVar1 = (int)param_1[5] + 1;
      uVar4 = (int)param_1[5] + 0x20;
      if (-1 < (int)uVar1) {
        uVar4 = uVar1;
      }
      *(uint *)(param_1 + 5) = uVar1;
      iVar3 = uVar1 - (uVar4 & 0xffffffe0);
      if (iVar3 != 0) {
        plVar9 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar9 = plVar8;
        }
        bVar6 = -(char)iVar3;
        *(uint *)((longlong)plVar9 + (longlong)((int)uVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar9 + (longlong)((int)uVar4 >> 5) * 4) << (bVar6 & 0x1f))
             >> (bVar6 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar10;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar11 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar10 = (int)param_1[6];
    lVar5 = (longlong)iVar10;
    iVar7 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar7;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[4];
  }
  iVar7 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar7 = iVar10;
  }
  puVar2 = (uint *)((longlong)plVar8 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar10 & 0x1f);
  *param_2 = iVar10;
  *(longlong *)(param_2 + 2) = lVar5 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14004a512 FUN_14004a512 body=676 status=ok
// SIG undefined FUN_14004a512(void)

void FUN_14004a512(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_14004a576;
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
LAB_14004a576:
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
      lVar12 = (longlong)iVar13;
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x18);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
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



// FUNCTION 14004a7b6 FUN_14004a7b6 body=676 status=ok
// SIG undefined FUN_14004a7b6(void)

void FUN_14004a7b6(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_14004a81a;
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
LAB_14004a81a:
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
      lVar12 = (longlong)iVar13;
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x18);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
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



// FUNCTION 14004aa5a FUN_14004aa5a body=1538 status=ok
// SIG undefined FUN_14004aa5a(void)

void FUN_14004aa5a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined **ppuVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  undefined **local_88;
  ulonglong uStack_80;
  undefined8 uStack_78;
  int local_70;
  undefined **local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14004c296(&local_88,*(undefined1 *)(param_1 + 0x1c));
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbf8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  FUN_14004b8ea(param_1,param_2);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar7 < 0x1f) {
    local_88 = (undefined **)0x0;
    uStack_80 = 0;
    FUN_146ccf65c(param_2,&local_88);
    FUN_146ccf482(param_1 + 0x20);
    if (0 < *(int *)(param_1 + 0x28)) {
      ppuVar10 = local_88 + 4;
      lVar12 = 0;
      lVar11 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x20);
        *(undefined **)(lVar3 + 0x10 + lVar12) = ppuVar10[2];
        uVar4 = *(undefined4 *)((longlong)ppuVar10 + 4);
        uVar5 = *(undefined4 *)(ppuVar10 + 1);
        uVar6 = *(undefined4 *)((longlong)ppuVar10 + 0xc);
        puVar1 = (undefined4 *)(lVar3 + lVar12);
        *puVar1 = *(undefined4 *)ppuVar10;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 0x18;
        ppuVar10 = ppuVar10 + 7;
      } while (lVar11 < *(int *)(param_1 + 0x28));
    }
    FUN_146ccf84e(local_88,uStack_80 & 0xffffffff);
    if (local_88 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_144739d1e(param_2,param_1 + 0x20);
  }
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cbf8);
  iVar8 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  iVar9 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  if (((iVar7 < 9) && (iVar8 < 0x1a)) && (iVar9 < 0x2e)) {
    uStack_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_88 = &PTR_FUN_149f4c0d8;
    local_60 = 0;
    uStack_58 = 0;
    local_68 = &PTR_LAB_149f4c0e0;
    local_50 = 0;
    FUN_14062dc0c(&local_88);
    FUN_1406274a0(&local_88,param_2);
    lVar12 = (longlong)local_70;
    FUN_140627580((longlong *)(param_1 + 0x30),local_70,1);
    if (0 < lVar12) {
      lVar11 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x30);
        *(undefined4 *)(lVar3 + 8 + lVar11) = *(undefined4 *)(local_60 + 8 + lVar11);
        *(undefined8 *)(lVar3 + lVar11) = *(undefined8 *)(local_60 + lVar11);
        lVar11 = lVar11 + 0xc;
      } while (lVar12 * 0xc != lVar11);
    }
    FUN_1407fbce0(&local_88);
  }
  else {
    FUN_1447396de(param_2,param_1 + 0x30);
  }
  FUN_14004b71e(param_2,param_1 + 0x40);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar7 < 0x14) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      local_88 = (undefined **)0x0;
      uStack_80 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_a0 = 0;
      local_a8 = param_1 + 0x40;
      FUN_1429916f2(param_1 + 0x30,param_1 + 0x20,&local_88,local_98);
      thunk_FUN_146dd8ccd(param_1 + 0x30,&local_88,param_1 + 0x68,param_1 + 0x6c);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      FUN_144716727(local_88,uStack_80 & 0xffffffff);
      if (local_88 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    local_98[0] = CONCAT44(local_98[0]._4_4_,*(undefined4 *)(param_1 + 0x68));
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,local_98,4);
      }
      else {
        thunk_FUN_14572512c(param_2,local_98);
      }
    }
    else {
      local_98[0] = CONCAT44(local_98[0]._4_4_,*(undefined4 *)*puVar2);
      *puVar2 = (ulonglong)puVar1;
    }
    *(float *)(param_1 + 0x68) = (float)local_98[0];
    iVar7 = _isnan((double)(float)local_98[0]);
    if ((iVar7 != 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    lVar12 = 0;
    do {
      local_88 = (undefined **)CONCAT44(local_88._4_4_,*(undefined4 *)(param_1 + 0x6c + lVar12 * 4))
      ;
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (undefined4 *)*puVar2 + 1;
      if ((undefined4 *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_88);
        }
      }
      else {
        local_88 = (undefined **)CONCAT44(local_88._4_4_,*(undefined4 *)*puVar2);
        *puVar2 = (ulonglong)puVar1;
      }
      *(float *)(param_1 + 0x6c + lVar12 * 4) = local_88._0_4_;
      lVar12 = lVar12 + 1;
    } while (lVar12 != 3);
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e31250);
  if (0x24 < iVar7) {
    local_88 = (undefined **)CONCAT44(local_88._4_4_,(float)*(double *)(param_1 + 0x10));
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_88);
      }
    }
    else {
      local_88 = (undefined **)CONCAT44(local_88._4_4_,*(undefined4 *)*puVar2);
      *puVar2 = (ulonglong)puVar1;
    }
    *(double *)(param_1 + 0x10) = (double)local_88._0_4_;
  }
  iVar7 = FUN_1448332aa(param_2,&DAT_149e31250);
  if (iVar7 < 0x26) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      local_88 = (undefined **)0x0;
      uStack_80 = 0;
      FUN_146ccf4fa(param_1 + 0x20,param_1 + 0x30,&local_88,0x3a83126f);
      FUN_1429a5e4c(param_1,&local_88,0);
      FUN_144716727(local_88,uStack_80 & 0xffffffff);
      if (local_88 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    FUN_14004b05e(param_1 + 0x58,param_2);
  }
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cc08);
  if (iVar7 < 0x22) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      FUN_1429a5e5c(param_1,(double)*(float *)(param_1 + 0x68));
    }
  }
  else {
    lVar12 = 0;
    do {
      local_88 = (undefined **)
                 CONCAT44(local_88._4_4_,(float)*(double *)(param_1 + 0x78 + lVar12 * 8));
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (undefined4 *)*puVar2 + 1;
      if ((undefined4 *)puVar2[1] < puVar1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_88);
        }
      }
      else {
        local_88 = (undefined **)CONCAT44(local_88._4_4_,*(undefined4 *)*puVar2);
        *puVar2 = (ulonglong)puVar1;
      }
      *(double *)(param_1 + 0x78 + lVar12 * 8) = (double)local_88._0_4_;
      lVar12 = lVar12 + 1;
    } while (lVar12 != 3);
    FUN_1400f4f7e(param_2,param_1 + 0x90);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004b05e FUN_14004b05e body=349 status=ok
// SIG undefined FUN_14004b05e(void)

void FUN_14004b05e(undefined8 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  ulonglong *puVar3;
  int iVar4;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbf8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  iVar4 = FUN_1448332aa(param_2,&DAT_149e3cbf8);
  if (iVar4 < 0xd && (*(byte *)(param_2 + 5) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    puVar1 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,1);
    }
    else {
      *(undefined1 *)(param_1 + 1) = *puVar1;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
  }
  else {
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (undefined1 *)*puVar3 + 1;
    if ((undefined1 *)puVar3[1] < puVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
    }
    else {
      local_21 = *(undefined1 *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    FUN_14004b1ce(param_1,local_21);
  }
  cVar2 = *(char *)(param_1 + 1);
  if (cVar2 == '\x01') {
    FUN_14004b25a(*param_1,param_2);
  }
  else if (cVar2 == '\x02') {
    FUN_14004d2da(*param_1,param_2);
  }
  else if (cVar2 == '\x03') {
    FUN_146cd3ca2(*param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004b1ce FUN_14004b1ce body=139 status=ok
// SIG undefined FUN_14004b1ce(void)

void FUN_14004b1ce(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 != 0) {
    FUN_1401fa6bc(param_1,&local_1a,&local_19);
    *param_1 = 0;
  }
  if ((byte)(param_2 - 1U) < 3) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    *param_1 = (longlong)puVar1;
  }
  *(char *)(param_1 + 1) = param_2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004b25a FUN_14004b25a body=153 status=ok
// SIG undefined FUN_14004b25a(void)

void FUN_14004b25a(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbf8);
  FUN_1447399d2(param_2,param_1);
  FUN_14473a13e(param_2,param_1 + 0x10);
  FUN_14004b368(param_2,param_1 + 0x20);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cbf8);
  if (0xd < iVar1) {
    FUN_140077068(param_2,param_1 + 0x30);
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    return;
  }
  if (((*(int *)(param_1 + 0x38) == 0) && (0 < *(int *)(param_1 + 0x18))) &&
     (FUN_146cd24ac(param_1), (*(byte *)(param_2 + 5) & 1) == 0)) {
    return;
  }
  FUN_1447395ec(param_1);
  return;
}



// FUNCTION 14004b2f4 FUN_14004b2f4 body=115 status=ok
// SIG undefined FUN_14004b2f4(void)

void FUN_14004b2f4(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14004b5bc(param_1,iVar1);
    }
    FUN_14004bd2c((longlong)iVar1 * 4 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cd1ec0(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14004b368 FUN_14004b368 body=285 status=ok
// SIG undefined FUN_14004b368(void)

longlong * FUN_14004b368(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1),(longlong)*(int *)((longlong)param_2 + 0xc));
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146cd3c4a(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x1000000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14004b486(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14004b486 FUN_14004b486 body=309 status=ok
// SIG undefined FUN_14004b486(void)

void FUN_14004b486(longlong param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar3 = param_2;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = (longlong)(int)param_2 + 0xf;
        if (param_2 < 0x7ff1) {
          uVar3 = (uint)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar7 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (uint)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14004b4f0;
              lVar1 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar1 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = DAT_14c841df8;
          }
          uVar3 = -uVar6 & ((int)(uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,(longlong)(int)param_2,1);
      }
    }
LAB_14004b4f0:
    uVar6 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar3) {
      uVar6 = uVar3;
    }
  }
  if ((int)param_3 < (int)uVar6) {
    FUN_1446f8d3c(param_1,0,uVar6,1,1);
    param_3 = uVar6;
  }
  *(uint *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14004b5bc FUN_14004b5bc body=353 status=ok
// SIG undefined FUN_14004b5bc(void)

void FUN_14004b5bc(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14004b641;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_14004b641:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,1);
  return;
}



// FUNCTION 14004b71e FUN_14004b71e body=458 status=ok
// SIG undefined FUN_14004b71e(void)

ulonglong * FUN_14004b71e(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined **local_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined2 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cba8);
  iVar2 = FUN_1448332aa(param_1,&DAT_149e3cba8);
  if (iVar2 < 0x19) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0x101;
    local_46 = 1;
    local_44 = 0x101;
    local_60 = &PTR_FUN_149f4c120;
    local_40 = 0x7f7fffff;
    uStack_3c = 0x7f7fffff;
    uStack_38 = 0x7f7fffff;
    uStack_34 = 0xff7fffff;
    uStack_30 = 0xff7fffff;
    uStack_2c = 0xff7fffff;
    FUN_146cd0a70(&local_60,param_1);
    *(undefined4 *)(param_2 + 1) = uStack_38;
    *param_2 = CONCAT44(uStack_3c,local_40);
    *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(uStack_30,uStack_34);
    *(undefined4 *)((longlong)param_2 + 0x14) = uStack_2c;
    local_60 = &PTR_FUN_149f553e0;
    puVar3 = (ulonglong *)(local_58 & 0xffffffff);
  }
  else {
    lVar4 = 0;
    do {
      local_60 = (undefined **)
                 CONCAT44(local_60._4_4_,*(undefined4 *)((longlong)param_2 + lVar4 * 4));
      puVar3 = (ulonglong *)param_1[1];
      puVar1 = (undefined4 *)*puVar3 + 1;
      if ((undefined4 *)puVar3[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_60);
        }
      }
      else {
        local_60 = (undefined **)CONCAT44(local_60._4_4_,*(undefined4 *)*puVar3);
        *puVar3 = (ulonglong)puVar1;
      }
      *(undefined4 *)((longlong)param_2 + lVar4 * 4) = local_60._0_4_;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
    lVar4 = 0;
    do {
      local_60 = (undefined **)
                 CONCAT44(local_60._4_4_,*(undefined4 *)((longlong)param_2 + lVar4 * 4 + 0xc));
      puVar3 = (ulonglong *)param_1[1];
      puVar1 = (undefined4 *)*puVar3 + 1;
      if ((undefined4 *)puVar3[1] < puVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          puVar3 = (ulonglong *)(**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
        }
        else {
          puVar3 = (ulonglong *)thunk_FUN_14572512c(param_1,&local_60);
        }
      }
      else {
        local_60 = (undefined **)CONCAT44(local_60._4_4_,*(undefined4 *)*puVar3);
        *puVar3 = (ulonglong)puVar1;
      }
      *(undefined4 *)((longlong)param_2 + lVar4 * 4 + 0xc) = local_60._0_4_;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004b8ea FUN_14004b8ea body=443 status=ok
// SIG undefined FUN_14004b8ea(void)

void FUN_14004b8ea(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (4 < iVar3) {
    piVar1 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
      local_24 = (uint)*(byte *)(param_1 + 0x18);
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
      if (1 < local_24) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 0x18) = local_24 != 0;
    }
    else {
      *(bool *)(param_1 + 0x18) = *piVar1 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar1 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
      local_24 = (uint)*(byte *)(param_1 + 0x19);
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
      if (1 < local_24) {
        FUN_14572541c(param_2);
      }
      *(bool *)(param_1 + 0x19) = local_24 != 0;
    }
    else {
      *(bool *)(param_1 + 0x19) = *piVar1 != 0;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar3 < 0xb) {
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  iVar3 = FUN_1448332aa(param_2,&DAT_149e31250);
  if (iVar3 < 0x1e) {
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_1 + 0x1c);
  }
  else {
    puVar2 = *(undefined1 **)param_2[1];
    if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x1d),1);
    }
    else {
      *(undefined1 *)(param_1 + 0x1d) = *puVar2;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004baa6 FUN_14004baa6 body=313 status=ok
// SIG undefined FUN_14004baa6(void)

void FUN_14004baa6(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 2;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14004bb0f;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,1);
      }
    }
LAB_14004bb0f:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,2,1);
  }
  return;
}



// FUNCTION 14004bbe0 FUN_14004bbe0 body=332 status=ok
// SIG undefined FUN_14004bbe0(void)

void FUN_14004bbe0(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x18;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14004bc4e;
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
LAB_14004bc4e:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,4);
  }
  return;
}



// FUNCTION 14004bd2c FUN_14004bd2c body=1058 status=ok
// SIG undefined FUN_14004bd2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004bd2c(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
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
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar22 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar38 [16];
  
  auVar14 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar15 = (ulonglong)param_2 - 1;
    auVar17._8_4_ = (int)lVar15;
    auVar17._0_8_ = lVar15;
    auVar17._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
    uVar16 = 0;
    auVar18 = pmovsxbq(in_XMM1,0xf0e);
    auVar19 = pmovsxbq(in_XMM2,0xd0c);
    auVar20 = pmovsxbq(in_XMM3,0xb0a);
    auVar21 = pmovsxbq(in_XMM4,0x908);
    auVar22 = pmovsxbq(in_XMM5,0x706);
    auVar23 = pmovsxbq(unaff_XMM6,0x504);
    auVar24 = pmovsxbq(unaff_XMM7,0x302);
    auVar25 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar26._8_4_ = (int)uVar16;
      auVar26._0_8_ = uVar16;
      auVar26._12_4_ = (int)(uVar16 >> 0x20);
      auVar28 = auVar17 ^ auVar14;
      auVar30 = (auVar26 | auVar25) ^ auVar14;
      lVar15 = auVar28._0_8_;
      auVar31._0_8_ = -(ulonglong)(lVar15 < auVar30._0_8_);
      lVar29 = auVar28._8_8_;
      auVar31._8_8_ = -(ulonglong)(lVar29 < auVar30._8_8_);
      auVar38 = pshuflw(unaff_XMM14,auVar31,0xe8);
      auVar30._8_4_ = 0xffffffff;
      auVar30._0_8_ = 0xffffffffffffffff;
      auVar30._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar38 ^ auVar30,auVar38 ^ auVar30);
      if ((auVar30._0_4_ & 1) != 0) {
        *(undefined1 *)(param_1 + 3 + uVar16 * 4) = 0;
      }
      auVar31 = packssdw(auVar31,auVar31);
      auVar38._8_4_ = 0xffffffff;
      auVar38._0_8_ = 0xffffffffffffffff;
      auVar38._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar38,auVar31 ^ auVar38);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[1] & 1) != 0) {
        *(undefined1 *)(param_1 + 7 + uVar16 * 4) = 0;
      }
      auVar31 = (auVar26 | auVar24) ^ auVar14;
      auVar32._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar32._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = packssdw(auVar30,auVar32);
      auVar1._8_4_ = 0xffffffff;
      auVar1._0_8_ = 0xffffffffffffffff;
      auVar1._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar1,auVar30 ^ auVar1);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[2] & 1) != 0) {
        *(undefined1 *)(param_1 + 0xb + uVar16 * 4) = 0;
      }
      auVar31 = pshufhw(auVar32,auVar32,0x84);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar2,auVar31 ^ auVar2);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[3] & 1) != 0) {
        *(undefined1 *)(param_1 + 0xf + uVar16 * 4) = 0;
      }
      auVar31 = (auVar26 | auVar23) ^ auVar14;
      auVar33._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar33._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = pshuflw(auVar30,auVar33,0xe8);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar3,auVar30 ^ auVar3);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[4] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x13 + uVar16 * 4) = 0;
      }
      auVar31 = packssdw(auVar33,auVar33);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar4,auVar31 ^ auVar4);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[5] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x17 + uVar16 * 4) = 0;
      }
      auVar31 = (auVar26 | auVar22) ^ auVar14;
      auVar34._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar34._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = packssdw(auVar30,auVar34);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar5,auVar30 ^ auVar5);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[6] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x1b + uVar16 * 4) = 0;
      }
      auVar31 = pshufhw(auVar34,auVar34,0x84);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar6,auVar31 ^ auVar6);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[7] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x1f + uVar16 * 4) = 0;
      }
      auVar31 = (auVar26 | auVar21) ^ auVar14;
      auVar35._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar35._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = pshuflw(auVar30,auVar35,0xe8);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar7,auVar30 ^ auVar7);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[8] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x23 + uVar16 * 4) = 0;
      }
      auVar31 = packssdw(auVar35,auVar35);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar8,auVar31 ^ auVar8);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[9] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x27 + uVar16 * 4) = 0;
      }
      auVar31 = (auVar26 | auVar20) ^ auVar14;
      auVar36._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar36._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = packssdw(auVar30,auVar36);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar9,auVar30 ^ auVar9);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[10] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x2b + uVar16 * 4) = 0;
      }
      auVar31 = pshufhw(auVar36,auVar36,0x84);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar10,auVar31 ^ auVar10);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xb] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x2f + uVar16 * 4) = 0;
      }
      auVar31 = (auVar26 | auVar19) ^ auVar14;
      auVar37._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = pshuflw(auVar30,auVar37,0xe8);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar11,auVar30 ^ auVar11);
      unaff_XMM14 = packsswb(auVar30,auVar30);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x33 + uVar16 * 4) = 0;
      }
      auVar30 = packssdw(auVar37,auVar37);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar12,auVar30 ^ auVar12);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[0xd] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x37 + uVar16 * 4) = 0;
      }
      auVar30 = (auVar26 | auVar18) ^ auVar14;
      auVar27._0_8_ = -(ulonglong)(lVar15 < auVar30._0_8_);
      auVar27._8_8_ = -(ulonglong)(lVar29 < auVar30._8_8_);
      auVar30 = packssdw(auVar28,auVar27);
      auVar28._8_4_ = 0xffffffff;
      auVar28._0_8_ = 0xffffffffffffffff;
      auVar28._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar28,auVar30 ^ auVar28);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[0xe] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x3b + uVar16 * 4) = 0;
      }
      auVar30 = pshufhw(auVar27,auVar27,0x84);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar13,auVar30 ^ auVar13);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[0xf] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x3f + uVar16 * 4) = 0;
      }
      uVar16 = uVar16 + 0x10;
    } while (((ulonglong)param_2 + 0xf & 0xfffffffffffffff0) != uVar16);
  }
  return;
}



// FUNCTION 14004c14e FUN_14004c14e body=327 status=ok
// SIG undefined FUN_14004c14e(void)

void FUN_14004c14e(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 3;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14004c1b8;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,1);
      }
    }
LAB_14004c1b8:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 3)) {
      uVar5 = uVar3 / 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,3,1);
  }
  return;
}



// FUNCTION 14004c296 FUN_14004c296 body=1786 status=ok
// SIG undefined FUN_14004c296(void)

undefined8 * FUN_14004c296(undefined8 *param_1,byte param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9938a8) && (FUN_144b3d300(&DAT_14c9938a8), DAT_14c9938a8 == -1)) {
    FUN_1446f470e(&DAT_14c9938a0,L"Sphere",1);
    _Init_thread_footer(&DAT_14c9938a8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9938b8) && (FUN_144b3d300(&DAT_14c9938b8), DAT_14c9938b8 == -1)) {
    FUN_1446f470e(&DAT_14c9938b0,&DAT_149e3c97a,1);
    _Init_thread_footer(&DAT_14c9938b8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9938c8) && (FUN_144b3d300(&DAT_14c9938c8), DAT_14c9938c8 == -1)) {
    FUN_1446f470e(&DAT_14c9938c0,L"Plane",1);
    _Init_thread_footer(&DAT_14c9938c8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9938d8) && (FUN_144b3d300(&DAT_14c9938d8), DAT_14c9938d8 == -1)) {
    FUN_1446f470e(&DAT_14c9938d0,L"Capsule",1);
    _Init_thread_footer(&DAT_14c9938d8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9938e8) && (FUN_144b3d300(&DAT_14c9938e8), DAT_14c9938e8 == -1)) {
    FUN_1446f470e(&DAT_14c9938e0,L"Transformed",1);
    _Init_thread_footer(&DAT_14c9938e8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9938f8) && (FUN_144b3d300(&DAT_14c9938f8), DAT_14c9938f8 == -1)) {
    FUN_1446f470e(&DAT_14c9938f0,L"Union",1);
    _Init_thread_footer(&DAT_14c9938f8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c993908) && (FUN_144b3d300(&DAT_14c993908), DAT_14c993908 == -1)) {
    FUN_1446f470e(&DAT_14c993900,L"LevelSet",1);
    _Init_thread_footer(&DAT_14c993908);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c993918) && (FUN_144b3d300(&DAT_14c993918), DAT_14c993918 == -1)) {
    FUN_1446f470e(&DAT_14c993910,L"Unknown",1);
    _Init_thread_footer(&DAT_14c993918);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c993928) && (FUN_144b3d300(&DAT_14c993928), DAT_14c993928 == -1)) {
    FUN_1446f470e(&DAT_14c993920,L"Convex",1);
    _Init_thread_footer(&DAT_14c993928);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c993938) && (FUN_144b3d300(&DAT_14c993938), DAT_14c993938 == -1)) {
    FUN_1446f470e(&DAT_14c993930,L"TaperedCylinder",1);
    _Init_thread_footer(&DAT_14c993938);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c993948) && (FUN_144b3d300(&DAT_14c993948), DAT_14c993948 == -1)) {
    FUN_1446f470e(&DAT_14c993940,L"Cylinder",1);
    _Init_thread_footer(&DAT_14c993948);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c993958) && (FUN_144b3d300(&DAT_14c993958), DAT_14c993958 == -1)) {
    FUN_1446f470e(&DAT_14c993950,L"TriangleMesh",1);
    _Init_thread_footer(&DAT_14c993958);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c993968) && (FUN_144b3d300(&DAT_14c993968), DAT_14c993968 == -1)) {
    FUN_1446f470e(&DAT_14c993960,L"HeightField",1);
    _Init_thread_footer(&DAT_14c993968);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c993978) && (FUN_144b3d300(&DAT_14c993978), DAT_14c993978 == -1)) {
    FUN_1446f470e(&DAT_14c993970,L"TaperedCapsule",1);
    _Init_thread_footer(&DAT_14c993978);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c993988) && (FUN_144b3d300(&DAT_14c993988), DAT_14c993988 == -1)) {
    FUN_1446f470e(&DAT_14c993980,L"UnionClustered",1);
    _Init_thread_footer(&DAT_14c993988);
  }
  uVar1 = 0;
  switch(param_2 & 0x1f) {
  case 0:
    uVar1 = DAT_14c9938a0;
    break;
  case 1:
    uVar1 = DAT_14c9938b0;
    break;
  case 2:
    uVar1 = DAT_14c9938c0;
    break;
  case 3:
    uVar1 = DAT_14c9938d0;
    break;
  case 4:
    uVar1 = DAT_14c9938e0;
    break;
  case 5:
    uVar1 = DAT_14c9938f0;
    break;
  case 6:
    uVar1 = DAT_14c993900;
    break;
  case 7:
    uVar1 = DAT_14c993910;
    break;
  case 9:
    uVar1 = DAT_14c993930;
    break;
  case 10:
    uVar1 = DAT_14c993940;
    break;
  case 0xb:
    uVar1 = DAT_14c993950;
    break;
  case 0xc:
    uVar1 = DAT_14c993960;
    break;
  case 0xf:
    uVar1 = DAT_14c993980;
    break;
  case 0x10:
    uVar1 = DAT_14c993970;
  }
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 14004c990 FUN_14004c990 body=2377 status=ok
// SIG undefined FUN_14004c990(void)

undefined8 * FUN_14004c990(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined **ppuVar9;
  undefined1 auStack_58 [39];
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_31 = *(byte *)(param_2 + 0x1c);
  }
  else {
    local_31 = 0;
  }
  puVar2 = (ulonglong *)param_1[1];
  pbVar1 = (byte *)*puVar2 + 1;
  if ((byte *)puVar2[1] < pbVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_31,1);
  }
  else {
    local_31 = *(byte *)*puVar2;
    *puVar2 = (ulonglong)pbVar1;
  }
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cba8);
  iVar7 = FUN_1448332aa(param_1,&DAT_149e3cba8);
  if ((char)local_31 < '\0' && 0xb < iVar7) {
    if ((local_31 & 0x1f) == 0xb) {
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        puVar8 = (undefined8 *)FUN_14001cc68(0x90,0x10);
        puVar8[1] = 0;
        puVar8[2] = 0;
        *(undefined2 *)(puVar8 + 3) = 0x100;
        *(undefined1 *)((longlong)puVar8 + 0x1a) = 1;
        *(undefined2 *)((longlong)puVar8 + 0x1c) = 0x8b8b;
        puVar8[4] = 0x3ff0000000000000;
        puVar8[5] = 0x3ff0000000000000;
        puVar8[6] = 0x3ff0000000000000;
        puVar8[7] = 0x3ff0000000000000;
        puVar8[8] = 0x3ff0000000000000;
        puVar8[9] = 0x3ff0000000000000;
        puVar8[10] = 0;
        puVar8[0xb] = 0x7fefffffffffffff;
        puVar8[0xc] = 0x7fefffffffffffff;
        puVar8[0xd] = 0x7fefffffffffffff;
        puVar8[0xe] = 0xffefffffffffffff;
        puVar8[0xf] = 0xffefffffffffffff;
        puVar8[0x10] = 0xffefffffffffffff;
        ppuVar9 = &PTR_FUN_149f55940;
        goto LAB_14004cecf;
      }
    }
    else if (((local_31 & 0x1f) == 8) && ((*(byte *)(param_1 + 5) & 1) != 0)) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x90,0x10);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined2 *)(puVar8 + 3) = 0x100;
      *(undefined1 *)((longlong)puVar8 + 0x1a) = 1;
      *(undefined2 *)((longlong)puVar8 + 0x1c) = 0x8888;
      puVar8[4] = 0x3ff0000000000000;
      puVar8[5] = 0x3ff0000000000000;
      puVar8[6] = 0x3ff0000000000000;
      puVar8[7] = 0x3ff0000000000000;
      puVar8[8] = 0x3ff0000000000000;
      puVar8[9] = 0x3ff0000000000000;
      puVar8[10] = 0;
      puVar8[0xb] = 0x7fefffffffffffff;
      puVar8[0xc] = 0x7fefffffffffffff;
      puVar8[0xd] = 0x7fefffffffffffff;
      puVar8[0xe] = 0xffefffffffffffff;
      puVar8[0xf] = 0xffefffffffffffff;
      puVar8[0x10] = 0xffefffffffffffff;
      ppuVar9 = &PTR_FUN_149f4bf10;
LAB_14004cecf:
      *puVar8 = ppuVar9;
      puVar8[0x11] = 0;
      goto switchD_14004cb1b_caseD_7;
    }
    goto LAB_14004cee4;
  }
  if ((local_31 & 0x40) != 0) {
    if ((local_31 & 0x1f) == 0xb) {
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        puVar8 = (undefined8 *)FUN_14001cc68(0x30,0x10);
        puVar8[1] = 0;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
        *(undefined2 *)((longlong)puVar8 + 0x19) = 0x101;
        *(undefined2 *)((longlong)puVar8 + 0x1c) = 0x4b4b;
        ppuVar9 = &PTR_FUN_149f55c30;
        goto LAB_14004cf1b;
      }
    }
    else if (((local_31 & 0x1f) == 8) && ((*(byte *)(param_1 + 5) & 1) != 0)) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0;
      *(undefined2 *)((longlong)puVar8 + 0x19) = 0x101;
      *(undefined2 *)((longlong)puVar8 + 0x1c) = 0x4848;
      ppuVar9 = &PTR_FUN_149f55aa0;
LAB_14004cf1b:
      *puVar8 = ppuVar9;
      puVar8[4] = 0;
      puVar8[5] = 0;
      goto switchD_14004cb1b_caseD_7;
    }
    goto LAB_14004cee4;
  }
  if (local_31 == 8) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined2 *)(puVar8 + 3) = 0x101;
      *(undefined1 *)((longlong)puVar8 + 0x1a) = 1;
      *(undefined2 *)((longlong)puVar8 + 0x1c) = 0x808;
      *puVar8 = &PTR_FUN_149f51c30;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0x7f7fffff7f7fffff;
      puVar8[9] = 0xff7fffff7f7fffff;
      puVar8[10] = &DAT_ff7fffffff7fffff;
      puVar8[0xb] = 0;
      *(undefined1 *)(puVar8 + 0xc) = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0x3ff0000000000000;
      puVar8[0x10] = 0x3ff0000000000000;
      puVar8[0x11] = 0x3ff0000000000000;
      uVar3 = DAT_14c8463d8;
      puVar8[0x12] = DAT_14c8463d0;
      puVar8[0x13] = uVar3;
      uVar6 = DAT_14c8463e8._4_4_;
      uVar5 = (undefined4)DAT_14c8463e8;
      uVar4 = DAT_14c8463e0._4_4_;
      *(undefined4 *)(puVar8 + 0x14) = (undefined4)DAT_14c8463e0;
      *(undefined4 *)((longlong)puVar8 + 0xa4) = uVar4;
      *(undefined4 *)(puVar8 + 0x15) = uVar5;
      *(undefined4 *)((longlong)puVar8 + 0xac) = uVar6;
      goto switchD_14004cb1b_caseD_7;
    }
    goto LAB_14004cee4;
  }
  puVar8 = (undefined8 *)0x0;
  switch(local_31) {
  case 0:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined2 *)(puVar8 + 3) = 0x101;
      *(undefined1 *)((longlong)puVar8 + 0x1a) = 1;
      *(undefined2 *)((longlong)puVar8 + 0x1c) = 0;
      ppuVar9 = &PTR_FUN_149f48e60;
LAB_14004d187:
      *puVar8 = ppuVar9;
      goto switchD_14004cb1b_caseD_7;
    }
    break;
  case 1:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined2 *)(puVar8 + 3) = 0x101;
      *(undefined1 *)((longlong)puVar8 + 0x1a) = 1;
      *(undefined2 *)((longlong)puVar8 + 0x1c) = 0x101;
      *puVar8 = &PTR_FUN_149f489d0;
      puVar8[4] = 0x7fefffffffffffff;
      puVar8[5] = 0x7fefffffffffffff;
      puVar8[6] = 0x7fefffffffffffff;
      puVar8[7] = 0xffefffffffffffff;
      puVar8[8] = 0xffefffffffffffff;
      puVar8[9] = 0xffefffffffffffff;
      goto switchD_14004cb1b_caseD_7;
    }
    break;
  case 2:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0;
      *(undefined2 *)((longlong)puVar8 + 0x19) = 1;
      *(undefined2 *)((longlong)puVar8 + 0x1c) = 0x202;
      ppuVar9 = &PTR_FUN_149f48540;
      goto LAB_14004d187;
    }
    break;
  case 3:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x58,0x10);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined2 *)(puVar8 + 3) = 0x101;
      *(undefined1 *)((longlong)puVar8 + 0x1a) = 1;
      *(undefined2 *)((longlong)puVar8 + 0x1c) = 0x303;
      ppuVar9 = &PTR_FUN_149f487f0;
      goto LAB_14004d187;
    }
    break;
  case 4:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
      FUN_146daed42(puVar8);
      goto switchD_14004cb1b_caseD_7;
    }
    break;
  case 5:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0;
      *(undefined2 *)((longlong)puVar8 + 0x19) = 0x101;
      *(undefined2 *)((longlong)puVar8 + 0x1c) = 0x505;
      *puVar8 = &PTR_FUN_149f54080;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      *(undefined8 *)((longlong)puVar8 + 0x5d) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x65) = 0;
      goto switchD_14004cb1b_caseD_7;
    }
    break;
  case 6:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x120,0x10);
      FUN_146daec88(puVar8);
      goto switchD_14004cb1b_caseD_7;
    }
    break;
  default:
    goto switchD_14004cb1b_caseD_7;
  case 9:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(200,0x10);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined1 *)((longlong)puVar8 + 0x1a) = 1;
      *(undefined2 *)((longlong)puVar8 + 0x1c) = 0x909;
      *puVar8 = &PTR_FUN_149f55540;
      puVar8[0x13] = 0x7fefffffffffffff;
      puVar8[0x14] = 0x7fefffffffffffff;
      puVar8[0x15] = 0x7fefffffffffffff;
      puVar8[0x16] = 0xffefffffffffffff;
      puVar8[0x17] = 0xffefffffffffffff;
      puVar8[0x18] = 0xffefffffffffffff;
LAB_14004d0ca:
      *(undefined2 *)(puVar8 + 3) = 0x101;
      goto switchD_14004cb1b_caseD_7;
    }
    break;
  case 10:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x100,0x10);
      FUN_146daeeea(puVar8);
      goto switchD_14004cb1b_caseD_7;
    }
    break;
  case 0xb:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x100,0x10);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0;
      *(undefined2 *)((longlong)puVar8 + 0x19) = 0x101;
      *(undefined2 *)((longlong)puVar8 + 0x1c) = 0xb0b;
      *puVar8 = &PTR_FUN_149f56110;
      puVar8[5] = 0;
      puVar8[6] = 0;
      *(undefined4 *)(puVar8 + 7) = 0;
      puVar8[4] = &PTR_FUN_149f4c0d8;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[8] = &PTR_LAB_149f4c0e0;
      *(undefined1 *)(puVar8 + 0xb) = 0;
      FUN_14062dc0c(puVar8 + 4,puVar8 + 8);
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0x11] = 0x7fefffffffffffff;
      puVar8[0x12] = 0x7fefffffffffffff;
      puVar8[0x13] = 0x7fefffffffffffff;
      puVar8[0x14] = 0xffefffffffffffff;
      puVar8[0x15] = 0xffefffffffffffff;
      puVar8[0x16] = 0xffefffffffffffff;
      puVar8[0x17] = 0;
      puVar8[0x18] = 0;
      puVar8[0x19] = 0;
      puVar8[0x1a] = 0;
      puVar8[0x1c] = 0;
      puVar8[0x1d] = 0;
      puVar8[0x1e] = 0;
      puVar8[0x1f] = 0;
      goto switchD_14004cb1b_caseD_7;
    }
    break;
  case 0xc:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x170,0x10);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0;
      *(undefined2 *)((longlong)puVar8 + 0x19) = 0x101;
      *(undefined2 *)((longlong)puVar8 + 0x1c) = 0xc0c;
      *puVar8 = &PTR_FUN_149f52c30;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[0x1d] = 0;
      puVar8[0x1e] = 0;
      puVar8[0x1f] = 0;
      puVar8[0x20] = 0;
      puVar8[0x21] = 0x7fefffffffffffff;
      puVar8[0x22] = 0x7fefffffffffffff;
      puVar8[0x23] = 0x7fefffffffffffff;
      puVar8[0x24] = 0xffefffffffffffff;
      puVar8[0x25] = 0xffefffffffffffff;
      puVar8[0x26] = 0xffefffffffffffff;
      puVar8[0x27] = 0x7fefffffffffffff;
      puVar8[0x28] = 0x7fefffffffffffff;
      puVar8[0x29] = 0x7fefffffffffffff;
      puVar8[0x2a] = 0xffefffffffffffff;
      puVar8[0x2b] = 0xffefffffffffffff;
      puVar8[0x2c] = 0xffefffffffffffff;
      goto switchD_14004cb1b_caseD_7;
    }
    break;
  case 0xd:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1448332aa(param_1,&DAT_149e3cba8);
    }
    puVar8 = (undefined8 *)FUN_14001cc68(0x90,0x10);
    puVar8[1] = 0;
    puVar8[2] = 0;
    *(undefined2 *)(puVar8 + 3) = 0x100;
    *(undefined1 *)((longlong)puVar8 + 0x1a) = 1;
    *(undefined2 *)((longlong)puVar8 + 0x1c) = 0x8787;
    puVar8[4] = 0x3ff0000000000000;
    puVar8[5] = 0x3ff0000000000000;
    puVar8[6] = 0x3ff0000000000000;
    puVar8[7] = 0x3ff0000000000000;
    puVar8[8] = 0x3ff0000000000000;
    puVar8[9] = 0x3ff0000000000000;
    puVar8[10] = 0;
    puVar8[0xb] = 0x7fefffffffffffff;
    puVar8[0xc] = 0x7fefffffffffffff;
    puVar8[0xd] = 0x7fefffffffffffff;
    puVar8[0xe] = 0xffefffffffffffff;
    puVar8[0xf] = 0xffefffffffffffff;
    puVar8[0x10] = 0xffefffffffffffff;
    ppuVar9 = &PTR_FUN_149f55d90;
    goto LAB_14004cecf;
  case 0xf:
    puVar8 = (undefined8 *)0x0;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 0;
      *(undefined2 *)((longlong)puVar8 + 0x19) = 0x101;
      *(undefined1 *)((longlong)puVar8 + 0x1d) = 5;
      puVar8[4] = 0;
      puVar8[5] = 0;
      puVar8[6] = 0;
      puVar8[7] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      *(undefined8 *)((longlong)puVar8 + 0x5d) = 0;
      *(undefined8 *)((longlong)puVar8 + 0x65) = 0;
      *puVar8 = &PTR_FUN_149f55fb0;
      puVar8[0x14] = 0;
      *(undefined4 *)(puVar8 + 0x15) = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      *(undefined8 *)((longlong)puVar8 + 0xac) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar8 + 0xb4) = 0;
      puVar8[0x18] = 0;
      *(undefined4 *)(puVar8 + 0x19) = 0;
      *(undefined1 *)((longlong)puVar8 + 0x1c) = 0xf;
    }
    goto switchD_14004cb1b_caseD_7;
  case 0x10:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar8 = (undefined8 *)FUN_14001cc68(0x98,0x10);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined1 *)((longlong)puVar8 + 0x1a) = 1;
      *(undefined2 *)((longlong)puVar8 + 0x1c) = 0x1010;
      *puVar8 = &PTR_FUN_149f55690;
      puVar8[0xd] = 0x7fefffffffffffff;
      puVar8[0xe] = 0x7fefffffffffffff;
      puVar8[0xf] = 0x7fefffffffffffff;
      puVar8[0x10] = 0xffefffffffffffff;
      puVar8[0x11] = 0xffefffffffffffff;
      puVar8[0x12] = 0xffefffffffffffff;
      goto LAB_14004d0ca;
    }
  }
LAB_14004cee4:
  puVar8 = (undefined8 *)0x0;
switchD_14004cb1b_caseD_7:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14004d2da FUN_14004d2da body=153 status=ok
// SIG undefined FUN_14004d2da(void)

void FUN_14004d2da(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbf8);
  FUN_14004dbe2(param_2,param_1);
  FUN_14004df84(param_2,param_1 + 0x10);
  FUN_14004d89e(param_2,param_1 + 0x20);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cbf8);
  if (0xd < iVar1) {
    FUN_14004d4d8(param_2,param_1 + 0x30);
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    return;
  }
  if (((*(int *)(param_1 + 0x38) == 0) && (0 < *(int *)(param_1 + 0x18))) &&
     (FUN_141724f58(param_1), (*(byte *)(param_2 + 5) & 1) == 0)) {
    return;
  }
  FUN_14004d374(param_1);
  return;
}



// FUNCTION 14004d374 FUN_14004d374 body=239 status=ok
// SIG undefined FUN_14004d374(void)

void FUN_14004d374(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  
  FUN_14004d464(param_1 + 8,(int)param_1[5],1);
  if (0 < (int)param_1[5]) {
    lVar3 = 0;
    do {
      lVar1 = param_1[8];
      *(undefined8 *)(lVar1 + lVar3 * 8) = 0xffffffffffff;
      iVar6 = (int)*(short *)(param_1[4] + lVar3 * 2);
      if (iVar6 != -0x8000) {
        lVar1 = lVar1 + lVar3 * 8;
        sVar7 = 0;
        iVar5 = iVar6;
        while( true ) {
          if (sVar7 < 3) {
            *(undefined2 *)(lVar1 + (longlong)sVar7 * 2) =
                 *(undefined2 *)(param_1[2] + (longlong)iVar5 * 6);
            sVar7 = *(short *)(lVar1 + 6);
          }
          sVar7 = sVar7 + 1;
          *(short *)(lVar1 + 6) = sVar7;
          if ((int)param_1[1] < (int)sVar7) break;
          iVar2 = (int)*(short *)(param_1[2] + 4 + (longlong)iVar5 * 6);
          if (((iVar2 == -0x8000) ||
              (lVar4 = (longlong)*(short *)(param_1[2] + (longlong)iVar2 * 6),
              iVar5 = (int)*(short *)(*param_1 + lVar4 * 4),
              iVar5 = ((iVar2 - iVar5) + 1) % (int)*(short *)(*param_1 + 2 + lVar4 * 4) + iVar5,
              iVar5 == iVar6)) || (iVar5 == -0x8000)) goto LAB_14004d442;
        }
        *(undefined2 *)(lVar1 + 6) = 0;
      }
LAB_14004d442:
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[5]);
  }
  return;
}



// FUNCTION 14004d464 FUN_14004d464 body=115 status=ok
// SIG undefined FUN_14004d464(void)

void FUN_14004d464(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14004d73c(param_1,iVar1);
    }
    FUN_14004e40b((longlong)iVar1 * 8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cb451a(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14004d4d8 FUN_14004d4d8 body=294 status=ok
// SIG undefined FUN_14004d4d8(void)

longlong * FUN_14004d4d8(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)*(int *)(param_2 + 1) * 2,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 2);
  local_1c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_1c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_1c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140ca8596(param_2,0);
    }
  }
  else if ((((int)local_1c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x800000 < local_1c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else {
    *(uint *)(param_2 + 1) = local_1c;
    uVar3 = local_1c;
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14004d600(param_2,local_1c,*(undefined4 *)((longlong)param_2 + 0xc));
      uVar3 = *(uint *)(param_2 + 1);
    }
    (**(code **)(*param_1 + 0x170))(param_1,*param_2,(longlong)(int)uVar3 * 2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14004d600 FUN_14004d600 body=315 status=ok
// SIG undefined FUN_14004d600(void)

void FUN_14004d600(longlong param_1,int param_2,int param_3)

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
    uVar5 = (longlong)param_2 * 2;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14004d66d;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
      }
    }
LAB_14004d66d:
    iVar4 = (int)(uVar5 >> 1);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,2,2);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14004d73c FUN_14004d73c body=353 status=ok
// SIG undefined FUN_14004d73c(void)

void FUN_14004d73c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14004d7c1;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_14004d7c1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,2);
  return;
}



// FUNCTION 14004d89e FUN_14004d89e body=371 status=ok
// SIG undefined FUN_14004d89e(void)

longlong * FUN_14004d89e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 2,(longlong)*(int *)((longlong)param_2 + 0xc) * 2);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14004daa8(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x800000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_14004da54(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 2;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_14004daa8(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14004da12(param_2);
        FUN_14004da54(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14004da12 FUN_14004da12 body=65 status=ok
// SIG undefined FUN_14004da12(void)

longlong FUN_14004da12(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145ffda72(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 2 + *param_1;
  FUN_14004da53(lVar2,1);
  return lVar2;
}



// FUNCTION 14004da53 FUN_14004da53 body=1 status=ok
// SIG undefined FUN_14004da53(void)

void FUN_14004da53(void)

{
  return;
}



// FUNCTION 14004da54 FUN_14004da54 body=84 status=ok
// SIG undefined FUN_14004da54(void)

longlong * FUN_14004da54(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  return param_1;
}



// FUNCTION 14004daa8 FUN_14004daa8 body=313 status=ok
// SIG undefined FUN_14004daa8(void)

void FUN_14004daa8(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 2;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14004db11;
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
LAB_14004db11:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,2,2);
  }
  return;
}



// FUNCTION 14004dbe2 FUN_14004dbe2 body=373 status=ok
// SIG undefined FUN_14004dbe2(void)

longlong * FUN_14004dbe2(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14004de48(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_14004dd9b(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_14004de48(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14004dd58(param_2);
        FUN_14004dd9b(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14004dd58 FUN_14004dd58 body=66 status=ok
// SIG undefined FUN_14004dd58(void)

longlong FUN_14004dd58(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146005f56(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 4 + *param_1;
  FUN_14004dd9a(lVar2,1);
  return lVar2;
}



// FUNCTION 14004dd9a FUN_14004dd9a body=1 status=ok
// SIG undefined FUN_14004dd9a(void)

void FUN_14004dd9a(void)

{
  return;
}



// FUNCTION 14004dd9b FUN_14004dd9b body=172 status=ok
// SIG undefined FUN_14004dd9b(void)

longlong * FUN_14004dd9b(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  return param_1;
}



// FUNCTION 14004de48 FUN_14004de48 body=315 status=ok
// SIG undefined FUN_14004de48(void)

void FUN_14004de48(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14004deb2;
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
LAB_14004deb2:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,4,2);
  }
  return;
}



// FUNCTION 14004df84 FUN_14004df84 body=379 status=ok
// SIG undefined FUN_14004df84(void)

longlong * FUN_14004df84(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 6,(longlong)*(int *)((longlong)param_2 + 0xc) * 6);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_14004e2c0(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x2aaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_14004e146(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 6;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_14004e2c0(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_14004e100(param_2);
        FUN_14004e146(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14004e100 FUN_14004e100 body=69 status=ok
// SIG undefined FUN_14004e100(void)

longlong FUN_14004e100(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1460222ae(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 6 + *param_1;
  FUN_14004e145(lVar2,1);
  return lVar2;
}



// FUNCTION 14004e145 FUN_14004e145 body=1 status=ok
// SIG undefined FUN_14004e145(void)

void FUN_14004e145(void)

{
  return;
}



// FUNCTION 14004e146 FUN_14004e146 body=261 status=ok
// SIG undefined FUN_14004e146(void)

longlong * FUN_14004e146(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  param_2 = param_2 + 2;
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  return param_1;
}



// FUNCTION 14004e24c FUN_14004e24c body=115 status=ok
// SIG undefined FUN_14004e24c(void)

void FUN_14004e24c(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_3 != 0) && ((*(byte *)((longlong)param_1 + 0x29) & 2) == 0)) {
    lVar1 = param_1[0x12];
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    if (lVar2 < (longlong)(lVar1 + param_3)) {
      FUN_14572541c(param_1);
      return;
    }
    memcpy(param_2,(void *)((longlong)(int)param_1[0x12] + *(longlong *)param_1[0x13]),param_3);
    param_1[0x12] = param_1[0x12] + param_3;
  }
  return;
}


