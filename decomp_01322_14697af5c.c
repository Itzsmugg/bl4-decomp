// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14697af5c FUN_14697af5c body=196 status=ok
// SIG undefined FUN_14697af5c(void)

void FUN_14697af5c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  
  if (DAT_14c98d888 != DAT_14c98d8b4) {
    puVar3 = &DAT_14c98d8b8;
    if (DAT_14c98d8c0 != (undefined *)0x0) {
      puVar3 = DAT_14c98d8c0;
    }
    for (iVar1 = *(int *)(puVar3 + ((longlong)param_1 & (longlong)DAT_14c98d8c8 - 1U) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x20 + DAT_14c98d880 + 0x18)) {
      if (*(int *)(DAT_14c98d880 + (longlong)iVar1 * 0x20) == param_1) {
        puVar3 = &DAT_14c98d8b8;
        if (DAT_14c98d8c0 != (undefined *)0x0) {
          puVar3 = DAT_14c98d8c0;
        }
        lVar5 = (longlong)*(int *)(DAT_14c98d880 + 0x1c + (longlong)iVar1 * 0x20);
        iVar4 = *(int *)(puVar3 + lVar5 * 4);
        if (iVar4 == iVar1) {
          puVar2 = (undefined4 *)(puVar3 + lVar5 * 4);
        }
        else {
          do {
            lVar5 = (longlong)iVar4;
            iVar4 = *(int *)(DAT_14c98d880 + 0x18 + lVar5 * 0x20);
          } while (iVar4 != iVar1);
          puVar2 = (undefined4 *)(DAT_14c98d880 + lVar5 * 0x20 + 0x18);
        }
        *puVar2 = *(undefined4 *)(DAT_14c98d880 + (longlong)iVar1 * 0x20 + 0x18);
        FUN_14697b020();
        return;
      }
    }
  }
  return;
}



// FUNCTION 14697b020 FUN_14697b020 body=74 status=ok
// SIG undefined FUN_14697b020(void)

void FUN_14697b020(int param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(DAT_14c98d880 + 0x10 + (longlong)param_1 * 0x20);
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
  FUN_14697b06a(param_1);
  return;
}



// FUNCTION 14697b06a FUN_14697b06a body=128 status=ok
// SIG undefined FUN_14697b06a(void)

void FUN_14697b06a(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c98d880;
  if (DAT_14c98d8b4 != 0) {
    *(int *)(DAT_14c98d880 + (longlong)DAT_14c98d8b0 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c98d8b4) {
    iVar4 = DAT_14c98d8b0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14c98d8b4 = DAT_14c98d8b4 + 1;
  puVar3 = &DAT_14c98d890;
  if (DAT_14c98d8a0 != (undefined *)0x0) {
    puVar3 = DAT_14c98d8a0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c98d8b0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14697b0ea FUN_14697b0ea body=359 status=ok
// SIG undefined FUN_14697b0ea(void)

undefined4 * FUN_14697b0ea(undefined4 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14697b252(local_40);
  puVar1 = (ulonglong *)param_2[1];
  uVar9 = *(ulonglong *)*param_2;
  *local_38 = uVar9;
  local_38[1] = *puVar1;
  uVar2 = puVar1[1];
  local_38[2] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar9 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar6 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  cVar5 = FUN_14697b360(uVar6,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar7 = DAT_14c98d838 - DAT_14c98d864;
    iVar10 = 1;
    if (3 < uVar7) {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= DAT_14c98d878)) {
      uVar6 = DAT_14c98d878 - 1U & uVar6;
      *(uint *)((longlong)local_38 + 0x1c) = uVar6;
      puVar8 = DAT_14c98d870;
      if (DAT_14c98d870 == (undefined *)0x0) {
        puVar8 = &DAT_14c98d868;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar8 + ((longlong)DAT_14c98d878 - 1U & (longlong)(int)uVar6) * 4);
      puVar8 = DAT_14c98d870;
      if (DAT_14c98d870 == (undefined *)0x0) {
        puVar8 = &DAT_14c98d868;
      }
      *(undefined4 *)(puVar8 + ((longlong)DAT_14c98d878 - 1U & (longlong)(int)uVar6) * 4) = local_44
      ;
    }
    else {
      DAT_14c98d878 = iVar10;
      FUN_14697a828();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697b252 FUN_14697b252 body=269 status=ok
// SIG undefined FUN_14697b252(void)

int * FUN_14697b252(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c98d860;
  iVar4 = DAT_14c98d838;
  if (DAT_14c98d864 == 0) {
    iVar2 = DAT_14c98d838 + 1;
    bVar7 = DAT_14c98d83c == DAT_14c98d838;
    DAT_14c98d838 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14c98d830,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14c98d840,1);
    puVar3 = DAT_14c98d850;
    if (DAT_14c98d850 == (undefined *)0x0) {
      puVar3 = &DAT_14c98d840;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14c98d860;
    DAT_14c98d860 = *(int *)(DAT_14c98d830 + 4 + lVar6 * 0x20);
    DAT_14c98d864 = DAT_14c98d864 + -1;
    iVar4 = iVar2;
    if (DAT_14c98d864 != 0) {
      *(undefined4 *)(DAT_14c98d830 + (longlong)DAT_14c98d860 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14c98d840;
  if (DAT_14c98d850 != (undefined *)0x0) {
    puVar3 = DAT_14c98d850;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14c98d830;
  return param_1;
}



// FUNCTION 14697b360 FUN_14697b360 body=198 status=ok
// SIG undefined FUN_14697b360(void)

undefined8 FUN_14697b360(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  int iVar10;
  
  if ((DAT_14c98d838 - DAT_14c98d864 != 1) && (DAT_14c98d838 != DAT_14c98d864)) {
    puVar9 = &DAT_14c98d868;
    if (DAT_14c98d870 != (undefined *)0x0) {
      puVar9 = DAT_14c98d870;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(DAT_14c98d878 - 1U & param_1) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(DAT_14c98d830 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(DAT_14c98d830 + (longlong)iVar10 * 0x20) == *param_2) {
          plVar4 = *(longlong **)(puVar3 + 4);
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
          lVar7 = *param_2;
          uVar5 = *(undefined4 *)((longlong)param_2 + 4);
          lVar8 = param_2[1];
          uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(longlong *)(puVar3 + 4) = param_2[2];
          *puVar3 = (int)lVar7;
          puVar3[1] = uVar5;
          puVar3[2] = (int)lVar8;
          puVar3[3] = uVar6;
          FUN_14697aedc(*param_3);
          *param_3 = iVar10;
          return 1;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 14697b426 FUN_14697b426 body=319 status=ok
// SIG undefined FUN_14697b426(void)

undefined4 * FUN_14697b426(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14697b566(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar7 = *(uint *)*param_2;
  *local_38 = uVar7;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar2 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    uVar7 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  cVar4 = FUN_14697b674(uVar7,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14c98d888 - DAT_14c98d8b4;
    iVar9 = 1;
    if (3 < uVar5) {
      uVar8 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= DAT_14c98d8c8)) {
      uVar7 = DAT_14c98d8c8 - 1U & uVar7;
      local_38[7] = uVar7;
      puVar6 = DAT_14c98d8c0;
      if (DAT_14c98d8c0 == (undefined *)0x0) {
        puVar6 = &DAT_14c98d8b8;
      }
      local_38[6] = *(uint *)(puVar6 + ((longlong)DAT_14c98d8c8 - 1U & (longlong)(int)uVar7) * 4);
      puVar6 = DAT_14c98d8c0;
      if (DAT_14c98d8c0 == (undefined *)0x0) {
        puVar6 = &DAT_14c98d8b8;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14c98d8c8 - 1U & (longlong)(int)uVar7) * 4) = local_44
      ;
    }
    else {
      DAT_14c98d8c8 = iVar9;
      FUN_14697abd2();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697b566 FUN_14697b566 body=269 status=ok
// SIG undefined FUN_14697b566(void)

int * FUN_14697b566(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c98d8b0;
  iVar4 = DAT_14c98d888;
  if (DAT_14c98d8b4 == 0) {
    iVar2 = DAT_14c98d888 + 1;
    bVar7 = DAT_14c98d88c == DAT_14c98d888;
    DAT_14c98d888 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14c98d880,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14c98d890,1);
    puVar3 = DAT_14c98d8a0;
    if (DAT_14c98d8a0 == (undefined *)0x0) {
      puVar3 = &DAT_14c98d890;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14c98d8b0;
    DAT_14c98d8b0 = *(int *)(DAT_14c98d880 + 4 + lVar6 * 0x20);
    DAT_14c98d8b4 = DAT_14c98d8b4 + -1;
    iVar4 = iVar2;
    if (DAT_14c98d8b4 != 0) {
      *(undefined4 *)(DAT_14c98d880 + (longlong)DAT_14c98d8b0 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14c98d890;
  if (DAT_14c98d8a0 != (undefined *)0x0) {
    puVar3 = DAT_14c98d8a0;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14c98d880;
  return param_1;
}



// FUNCTION 14697b674 FUN_14697b674 body=196 status=ok
// SIG undefined FUN_14697b674(void)

undefined8 FUN_14697b674(uint param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  
  if ((DAT_14c98d888 - DAT_14c98d8b4 != 1) && (DAT_14c98d888 != DAT_14c98d8b4)) {
    puVar9 = &DAT_14c98d8b8;
    if (DAT_14c98d8c0 != (undefined *)0x0) {
      puVar9 = DAT_14c98d8c0;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(DAT_14c98d8c8 - 1U & param_1) * 4);
    if (iVar10 != -1) {
      do {
        piVar3 = (int *)(DAT_14c98d880 + (longlong)iVar10 * 0x20);
        if (*(int *)(DAT_14c98d880 + (longlong)iVar10 * 0x20) == *param_2) {
          plVar4 = *(longlong **)(piVar3 + 4);
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
          iVar5 = *param_2;
          iVar6 = param_2[1];
          iVar7 = param_2[2];
          iVar8 = param_2[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_2 + 4);
          *piVar3 = iVar5;
          piVar3[1] = iVar6;
          piVar3[2] = iVar7;
          piVar3[3] = iVar8;
          FUN_14697b06a(*param_3);
          *param_3 = iVar10;
          return 1;
        }
        iVar10 = piVar3[6];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 14697b738 FUN_14697b738 body=109 status=ok
// SIG undefined FUN_14697b738(void)

undefined * FUN_14697b738(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98da74) {
    FUN_144b3d300(&DAT_14c98da74);
    if (DAT_14c98da74 == -1) {
      FUN_1446f470e(&DAT_14c98da6c,L"FTagMetaData",1);
      _Init_thread_footer(&DAT_14c98da74);
    }
  }
  return &DAT_14c98da6c;
}



// FUNCTION 14697b7a6 FUN_14697b7a6 body=96 status=ok
// SIG undefined FUN_14697b7a6(void)

void FUN_14697b7a6(longlong param_1,int param_2)

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



// FUNCTION 14697b806 FUN_14697b806 body=132 status=ok
// SIG undefined FUN_14697b806(void)

void FUN_14697b806(longlong param_1,int param_2)

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



// FUNCTION 14697b88c FUN_14697b88c body=118 status=ok
// SIG undefined FUN_14697b88c(void)

void FUN_14697b88c(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
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
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14697b902 FUN_14697b902 body=196 status=ok
// SIG undefined FUN_14697b902(void)

longlong FUN_14697b902(uint param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c98d8f8 != DAT_14c98d924) {
    puVar3 = &DAT_14c98d928;
    if (DAT_14c98d930 != (undefined *)0x0) {
      puVar3 = DAT_14c98d930;
    }
    iVar1 = *(int *)(puVar3 + (ulonglong)(DAT_14c98d938 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = DAT_14c98d8f0 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(DAT_14c98d8f0 + (longlong)iVar1 * 0x20) == *param_2) {
          if (lVar2 != 0) goto LAB_14697b9aa;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_20 = param_2;
  FUN_14697b9c8(&local_14,param_1);
  lVar2 = (longlong)local_14 * 0x20 + DAT_14c98d8f0;
LAB_14697b9aa:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + 8;
}



// FUNCTION 14697b9c8 FUN_14697b9c8 body=292 status=ok
// SIG undefined FUN_14697b9c8(void)

undefined4 * FUN_14697b9c8(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14697baee(local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar2 = FUN_14697bbfc(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14c98d8f8 - DAT_14c98d924;
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14c98d938)) {
      param_2 = DAT_14c98d938 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x1c) = param_2;
      puVar4 = DAT_14c98d930;
      if (DAT_14c98d930 == (undefined *)0x0) {
        puVar4 = &DAT_14c98d928;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)(puVar4 + ((longlong)DAT_14c98d938 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14c98d930;
      if (DAT_14c98d930 == (undefined *)0x0) {
        puVar4 = &DAT_14c98d928;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14c98d938 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14c98d938 = iVar6;
      FUN_14697bd28();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697baee FUN_14697baee body=269 status=ok
// SIG undefined FUN_14697baee(void)

int * FUN_14697baee(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c98d920;
  iVar4 = DAT_14c98d8f8;
  if (DAT_14c98d924 == 0) {
    iVar2 = DAT_14c98d8f8 + 1;
    bVar7 = DAT_14c98d8fc == DAT_14c98d8f8;
    DAT_14c98d8f8 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14c98d8f0,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14c98d900,1);
    puVar3 = DAT_14c98d910;
    if (DAT_14c98d910 == (undefined *)0x0) {
      puVar3 = &DAT_14c98d900;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14c98d920;
    DAT_14c98d920 = *(int *)(DAT_14c98d8f0 + 4 + lVar6 * 0x20);
    DAT_14c98d924 = DAT_14c98d924 + -1;
    iVar4 = iVar2;
    if (DAT_14c98d924 != 0) {
      *(undefined4 *)(DAT_14c98d8f0 + (longlong)DAT_14c98d920 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14c98d900;
  if (DAT_14c98d910 != (undefined *)0x0) {
    puVar3 = DAT_14c98d910;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14c98d8f0;
  return param_1;
}



// FUNCTION 14697bbfc FUN_14697bbfc body=172 status=ok
// SIG undefined FUN_14697bbfc(void)

undefined8 FUN_14697bbfc(uint param_1,longlong *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  int iVar7;
  
  if ((DAT_14c98d8f8 - DAT_14c98d924 != 1) && (DAT_14c98d8f8 != DAT_14c98d924)) {
    puVar6 = &DAT_14c98d928;
    if (DAT_14c98d930 != (undefined *)0x0) {
      puVar6 = DAT_14c98d930;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(DAT_14c98d938 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(DAT_14c98d8f0 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(DAT_14c98d8f0 + (longlong)iVar7 * 0x20) == *param_2) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar5 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(longlong *)(puVar1 + 4) = param_2[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14697bca8(*param_3);
          *param_3 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14697bca8 FUN_14697bca8 body=128 status=ok
// SIG undefined FUN_14697bca8(void)

void FUN_14697bca8(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c98d8f0;
  if (DAT_14c98d924 != 0) {
    *(int *)(DAT_14c98d8f0 + (longlong)DAT_14c98d920 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c98d924) {
    iVar4 = DAT_14c98d920;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14c98d924 = DAT_14c98d924 + 1;
  puVar3 = &DAT_14c98d900;
  if (DAT_14c98d910 != (undefined *)0x0) {
    puVar3 = DAT_14c98d910;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c98d920 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14697bd28 FUN_14697bd28 body=517 status=ok
// SIG undefined FUN_14697bd28(void)

void FUN_14697bd28(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
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
  if (DAT_14c98d930 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c98d930,0,0,4);
  }
  uVar3 = DAT_14c98d938;
  uVar2 = local_50;
  if (DAT_14c98d938 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c98d928,0,DAT_14c98d938,4);
    if (0 < (int)uVar3) {
      do {
        puVar5 = DAT_14c98d930;
        if (DAT_14c98d930 == (undefined *)0x0) {
          puVar5 = &DAT_14c98d928;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14c98d938 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c98d900;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c98d918 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c98d8f0;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar2 = *(undefined8 *)(lVar1 + lVar6);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14c98d938 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14c98d930;
        if (DAT_14c98d930 == (undefined *)0x0) {
          puVar5 = &DAT_14c98d928;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14c98d938 - 1U & uVar9) * 4);
        puVar5 = DAT_14c98d930;
        if (DAT_14c98d930 == (undefined *)0x0) {
          puVar5 = &DAT_14c98d928;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14c98d938 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14697bf2e FUN_14697bf2e body=132 status=ok
// SIG undefined FUN_14697bf2e(void)

void FUN_14697bf2e(longlong param_1,int param_2)

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



// FUNCTION 14697bfb4 FUN_14697bfb4 body=193 status=ok
// SIG undefined FUN_14697bfb4(void)

void FUN_14697bfb4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_14697c04b;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14697c04b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14697c076 FUN_14697c076 body=14 status=ok
// SIG undefined FUN_14697c076(void)

void FUN_14697c076(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_14287a692();
  return;
}



// FUNCTION 14697c084 FUN_14697c084 body=85 status=ok
// SIG undefined FUN_14697c084(void)

void FUN_14697c084(longlong param_1,int param_2)

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
  FUN_14287a692();
  return;
}



// FUNCTION 14697c0da FUN_14697c0da body=201 status=ok
// SIG undefined FUN_14697c0da(void)

void FUN_14697c0da(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar5 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
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
      } while (bVar10 == (plVar2[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(plVar2 + iVar5,plVar2 + iVar7,(longlong)(iVar9 - iVar7) << 3);
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



// FUNCTION 14697c1a4 FUN_14697c1a4 body=242 status=ok
// SIG undefined FUN_14697c1a4(void)

void FUN_14697c1a4(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  longlong lVar7;
  
  if (DAT_14c98d8f8 != DAT_14c98d924) {
    uVar2 = (uint)((ulonglong)param_1 >> 0x10);
    uVar4 = (uint)param_1 & 0xffff;
    puVar6 = &DAT_14c98d928;
    if (DAT_14c98d930 != (undefined *)0x0) {
      puVar6 = DAT_14c98d930;
    }
    for (iVar1 = *(int *)(puVar6 + ((longlong)
                                    (int)(((uint)param_1 << 0x10 | uVar4) +
                                          (int)((ulonglong)param_1 >> 0x20) +
                                          (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                                   (longlong)DAT_14c98d938 - 1U) * 4); iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + DAT_14c98d8f0 + 0x18)) {
      if (*(longlong *)(DAT_14c98d8f0 + (longlong)iVar1 * 0x20) == param_1) {
        puVar6 = &DAT_14c98d928;
        if (DAT_14c98d930 != (undefined *)0x0) {
          puVar6 = DAT_14c98d930;
        }
        lVar7 = (longlong)*(int *)(DAT_14c98d8f0 + 0x1c + (longlong)iVar1 * 0x20);
        iVar5 = *(int *)(puVar6 + lVar7 * 4);
        if (iVar5 == iVar1) {
          puVar3 = (undefined4 *)(puVar6 + lVar7 * 4);
        }
        else {
          do {
            lVar7 = (longlong)iVar5;
            iVar5 = *(int *)(DAT_14c98d8f0 + 0x18 + lVar7 * 0x20);
          } while (iVar5 != iVar1);
          puVar3 = (undefined4 *)(DAT_14c98d8f0 + lVar7 * 0x20 + 0x18);
        }
        *puVar3 = *(undefined4 *)(DAT_14c98d8f0 + (longlong)iVar1 * 0x20 + 0x18);
        FUN_14697c296();
        return;
      }
    }
  }
  return;
}



// FUNCTION 14697c296 FUN_14697c296 body=48 status=ok
// SIG undefined FUN_14697c296(void)

void FUN_14697c296(int param_1)

{
  if (*(longlong *)(DAT_14c98d8f0 + 8 + (longlong)param_1 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_14697bca8(param_1);
  return;
}



// FUNCTION 14697c2c6 FUN_14697c2c6 body=91 status=ok
// SIG undefined FUN_14697c2c6(void)

undefined1 * FUN_14697c2c6(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 8);
      }
      lVar3 = (**(code **)(*plVar4 + 0x58))();
      if (**(longlong **)(param_1 + 0x18) != lVar3) {
        **(longlong **)(param_1 + 0x18) = lVar3;
        uVar2 = 1;
        goto LAB_14697c309;
      }
    }
  }
  uVar2 = 0;
LAB_14697c309:
  *param_2 = 0;
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 14697c32e FUN_14697c32e body=50 status=ok
// SIG undefined FUN_14697c32e(void)

undefined8 * FUN_14697c32e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14697c360 FUN_14697c360 body=156 status=ok
// SIG undefined FUN_14697c360(void)

bool FUN_14697c360(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_14697c518(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697c3fe FUN_14697c3fe body=136 status=ok
// SIG undefined FUN_14697c3fe(void)

undefined8 FUN_14697c3fe(double *param_1,undefined8 param_2,double *param_3)

{
  byte bVar1;
  byte bVar2;
  double dVar3;
  undefined1 uVar4;
  
  FUN_1400b73c8(param_2,param_1);
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *(byte *)(param_3 + 2);
  if ((bVar1 == bVar2 & bVar1) == 1) {
    if ((*param_1 == *param_3) && (!NAN(*param_1) && !NAN(*param_3))) {
      if ((param_1[1] == param_3[1]) && (!NAN(param_1[1]) && !NAN(param_3[1]))) {
        return 0;
      }
    }
  }
  else if (bVar1 == bVar2) {
    return 0;
  }
  if (param_3 != param_1) {
    if (bVar2 == 0) {
      if ((bVar1 & 1) == 0) goto LAB_14697c463;
      uVar4 = 0;
    }
    else {
      dVar3 = param_3[1];
      *param_1 = *param_3;
      param_1[1] = dVar3;
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 2) = uVar4;
  }
LAB_14697c463:
  FUN_14094e0ca(param_2,param_1,0,0);
  return 1;
}



// FUNCTION 14697c486 FUN_14697c486 body=144 status=ok
// SIG undefined FUN_14697c486(void)

undefined4 * FUN_14697c486(undefined4 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1[10] != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar1 != '\0') {
      if (param_1[10] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_30);
      if (&local_30 != param_1) {
        if ((local_20 & 1) == 0) {
          if (*(char *)(param_1 + 4) != '\x01') goto LAB_14697c4e8;
          uVar2 = 0;
        }
        else {
          *param_1 = local_30;
          param_1[1] = uStack_2c;
          param_1[2] = uStack_28;
          param_1[3] = uStack_24;
          uVar2 = 1;
        }
        *(undefined1 *)(param_1 + 4) = uVar2;
      }
    }
  }
LAB_14697c4e8:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697c518 FUN_14697c518 body=169 status=ok
// SIG undefined FUN_14697c518(void)

void FUN_14697c518(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar1 = (longlong)&PTR_FUN_149ef0070;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  FUN_14697c70c(plVar1 + 1,param_3);
  plVar1[3] = param_1;
  local_30 = plVar1;
  FUN_140eee99e(param_2,param_1,0,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697c5c2 FUN_14697c5c2 body=224 status=ok
// SIG undefined FUN_14697c5c2(void)

undefined2 * FUN_14697c5c2(longlong param_1,undefined2 *param_2)

{
  byte bVar1;
  double *pdVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,&local_38);
      pdVar2 = *(double **)(param_1 + 0x18);
      bVar1 = *(byte *)(pdVar2 + 2);
      if ((bVar1 == local_28 & bVar1) == 1) {
        if ((*pdVar2 == local_38) && (!NAN(*pdVar2) && !NAN(local_38))) {
          if ((pdVar2[1] == dStack_30) && (!NAN(pdVar2[1]) && !NAN(dStack_30))) goto LAB_14697c649;
        }
      }
      else if (bVar1 == local_28) goto LAB_14697c649;
      if (&local_38 != pdVar2) {
        if (local_28 == 0) {
          if ((bVar1 & 1) == 0) goto LAB_14697c68c;
          uVar4 = 0;
        }
        else {
          *pdVar2 = local_38;
          pdVar2[1] = dStack_30;
          uVar4 = 1;
        }
        *(undefined1 *)(pdVar2 + 2) = uVar4;
      }
LAB_14697c68c:
      *param_2 = 0x100;
      goto LAB_14697c64e;
    }
  }
LAB_14697c649:
  *param_2 = 0;
LAB_14697c64e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697c6b0 FUN_14697c6b0 body=50 status=ok
// SIG undefined FUN_14697c6b0(void)

undefined8 * FUN_14697c6b0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14697c6e2 FUN_14697c6e2 body=42 status=ok
// SIG undefined FUN_14697c6e2(void)

longlong FUN_14697c6e2(longlong param_1,int param_2)

{
  FUN_1449db362(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14697c70c FUN_14697c70c body=130 status=ok
// SIG undefined FUN_14697c70c(void)

void FUN_14697c70c(longlong *param_1,longlong *param_2)

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



// FUNCTION 14697c790 FUN_14697c790 body=156 status=ok
// SIG undefined FUN_14697c790(void)

bool FUN_14697c790(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_14697c82e(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697c82e FUN_14697c82e body=161 status=ok
// SIG undefined FUN_14697c82e(void)

void FUN_14697c82e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)FUN_14001cc68(0x20,0x10);
  *local_28 = (longlong)&PTR_FUN_149ef0b10;
  local_28[1] = *param_3;
  *param_3 = 0;
  *(int *)(local_28 + 2) = (int)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  local_28[3] = param_1;
  FUN_140eee99e(param_2,param_1,0,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697c8d0 thunk_FUN_1449db362 body=5 status=ok
// SIG undefined thunk_FUN_1449db362(void)

void thunk_FUN_1449db362(void)

{
  FUN_1449db362();
  return;
}



// FUNCTION 14697c8d6 FUN_14697c8d6 body=156 status=ok
// SIG undefined FUN_14697c8d6(void)

bool FUN_14697c8d6(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_14697c974(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697c974 FUN_14697c974 body=161 status=ok
// SIG undefined FUN_14697c974(void)

void FUN_14697c974(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)FUN_14001cc68(0x20,0x10);
  *local_28 = (longlong)&PTR_FUN_149ef0070;
  local_28[1] = *param_3;
  *param_3 = 0;
  *(int *)(local_28 + 2) = (int)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  local_28[3] = param_1;
  FUN_140eee99e(param_2,param_1,0,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697ca16 thunk_FUN_1449db362 body=5 status=ok
// SIG undefined thunk_FUN_1449db362(void)

void thunk_FUN_1449db362(void)

{
  FUN_1449db362();
  return;
}



// FUNCTION 14697ca1c FUN_14697ca1c body=24 status=ok
// SIG undefined FUN_14697ca1c(void)

void FUN_14697ca1c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014697ca30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14697ca34 FUN_14697ca34 body=29 status=ok
// SIG undefined FUN_14697ca34(void)

undefined8 FUN_14697ca34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14697ca52 FUN_14697ca52 body=167 status=ok
// SIG undefined FUN_14697ca52(void)

bool FUN_14697ca52(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)*param_2)(param_2);
  FUN_140c8fe9c(&local_38,uVar2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_14697cafa(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697cafa FUN_14697cafa body=158 status=ok
// SIG undefined FUN_14697cafa(void)

void FUN_14697cafa(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)FUN_14001cc68(0x20,0x10);
  *local_28 = (longlong)&PTR_FUN_149ef07d0;
  local_28[1] = *param_3;
  *param_3 = 0;
  *(int *)(local_28 + 2) = (int)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  local_28[3] = param_1;
  FUN_146973adc(param_2,param_1,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697cb9a FUN_14697cb9a body=198 status=ok
// SIG undefined FUN_14697cb9a(void)

undefined2 * FUN_14697cb9a(longlong param_1,undefined2 *param_2)

{
  float *pfVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_30);
      pfVar1 = *(float **)(param_1 + 0x18);
      if (((((*pfVar1 == local_30) && (!NAN(*pfVar1) && !NAN(local_30))) && (pfVar1[2] == fStack_28)
           ) && ((!NAN(pfVar1[2]) && !NAN(fStack_28) && (pfVar1[1] == fStack_2c)))) &&
         (!NAN(pfVar1[1]) && !NAN(fStack_2c))) {
        if ((pfVar1[3] == fStack_24) && (!NAN(pfVar1[3]) && !NAN(fStack_24))) goto LAB_14697cc24;
      }
      *pfVar1 = local_30;
      pfVar1[1] = fStack_2c;
      pfVar1[2] = fStack_28;
      pfVar1[3] = fStack_24;
      *param_2 = 0x100;
      goto LAB_14697cc29;
    }
  }
LAB_14697cc24:
  *param_2 = 0;
LAB_14697cc29:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697cc6e FUN_14697cc6e body=50 status=ok
// SIG undefined FUN_14697cc6e(void)

undefined8 * FUN_14697cc6e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14697cca0 FUN_14697cca0 body=42 status=ok
// SIG undefined FUN_14697cca0(void)

longlong FUN_14697cca0(longlong param_1,int param_2)

{
  FUN_1449db362(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14697ccca thunk_FUN_1449db362 body=5 status=ok
// SIG undefined thunk_FUN_1449db362(void)

void thunk_FUN_1449db362(void)

{
  FUN_1449db362();
  return;
}



// FUNCTION 14697ccd0 FUN_14697ccd0 body=167 status=ok
// SIG undefined FUN_14697ccd0(void)

bool FUN_14697ccd0(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)*param_2)(param_2);
  FUN_140c8fe9c(&local_38,uVar2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_14697cd78(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697cd78 FUN_14697cd78 body=158 status=ok
// SIG undefined FUN_14697cd78(void)

void FUN_14697cd78(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)FUN_14001cc68(0x20,0x10);
  *local_28 = (longlong)&PTR_FUN_149ef0810;
  local_28[1] = *param_3;
  *param_3 = 0;
  *(int *)(local_28 + 2) = (int)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  local_28[3] = param_1;
  FUN_146973adc(param_2,param_1,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697ce18 FUN_14697ce18 body=98 status=ok
// SIG undefined FUN_14697ce18(void)

undefined1 * FUN_14697ce18(longlong param_1,undefined1 *param_2)

{
  float fVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  float fVar5;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 8);
      }
      fVar5 = (float)(**(code **)(*plVar4 + 0x58))();
      fVar1 = **(float **)(param_1 + 0x18);
      if ((fVar1 != fVar5) || (NAN(fVar1) || NAN(fVar5))) {
        **(float **)(param_1 + 0x18) = fVar5;
        uVar3 = 1;
        goto LAB_14697ce5e;
      }
    }
  }
  uVar3 = 0;
LAB_14697ce5e:
  *param_2 = 0;
  param_2[1] = uVar3;
  return param_2;
}



// FUNCTION 14697ce86 FUN_14697ce86 body=50 status=ok
// SIG undefined FUN_14697ce86(void)

undefined8 * FUN_14697ce86(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14697ceb8 FUN_14697ceb8 body=42 status=ok
// SIG undefined FUN_14697ceb8(void)

longlong FUN_14697ceb8(longlong param_1,int param_2)

{
  FUN_1449db362(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14697cee2 FUN_14697cee2 body=184 status=ok
// SIG undefined FUN_14697cee2(void)

undefined8 FUN_14697cee2(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      uVar2 = FUN_14697cf9a(param_1,param_2,param_3 + 2);
      return uVar2;
    }
  }
  if (*(char *)(param_3 + 1) != '\x01') {
    uVar2 = (**(code **)*param_2)(param_2);
    FUN_1400b73c8(uVar2,param_1);
    return 0;
  }
  if (*(longlong **)(param_3 + 2) != (longlong *)0x0 && param_3[4] != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_3 + 2) + 0x30))();
    if (cVar1 != '\0') {
      if (param_3[4] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_3 + 2);
      }
      uVar4 = (**(code **)(*plVar3 + 0x58))();
      *param_3 = uVar4;
    }
  }
  uVar2 = FUN_14697d042(param_1,param_2,param_3);
  return uVar2;
}



// FUNCTION 14697cf9a FUN_14697cf9a body=167 status=ok
// SIG undefined FUN_14697cf9a(void)

bool FUN_14697cf9a(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = (**(code **)*param_2)(param_2);
  FUN_140c8fe9c(&local_38,uVar2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_14697d0be(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697d042 FUN_14697d042 body=124 status=ok
// SIG undefined FUN_14697d042(void)

byte FUN_14697d042(float *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)*param_2)(param_2);
  FUN_1400b73c8(uVar3,param_1);
  (**(code **)*param_2)(param_2);
  fVar1 = *param_1;
  fVar2 = *param_3;
  if ((fVar1 != fVar2) || (NAN(fVar1) || NAN(fVar2))) {
    *param_1 = fVar2;
    (**(code **)*param_2)(param_2);
    FUN_140a52700(param_2,param_1,0);
  }
  return -(fVar1 != fVar2) & 1;
}



// FUNCTION 14697d0be FUN_14697d0be body=166 status=ok
// SIG undefined FUN_14697d0be(void)

void FUN_14697d0be(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar1 = (longlong)&PTR_FUN_149ef0810;
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 0;
  FUN_140a52b3c(plVar1 + 1,param_3);
  plVar1[3] = param_1;
  local_30 = plVar1;
  FUN_146973adc(param_2,param_1,&local_30);
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697d166 FUN_14697d166 body=93 status=ok
// SIG undefined FUN_14697d166(void)

void FUN_14697d166(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + (longlong)(int)param_2 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 8);
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~param_2 + iVar3) << 3);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  FUN_14697d1c4(param_1);
  return;
}



// FUNCTION 14697d1c4 FUN_14697d1c4 body=62 status=ok
// SIG undefined FUN_14697d1c4(void)

void FUN_14697d1c4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14697d202(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14697d202 FUN_14697d202 body=93 status=ok
// SIG undefined FUN_14697d202(void)

ulonglong FUN_14697d202(uint param_1,uint param_2)

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



// FUNCTION 14697d260 FUN_14697d260 body=54 status=ok
// SIG undefined FUN_14697d260(void)

void FUN_14697d260(undefined8 *param_1)

{
  FUN_140d33455(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140a5356c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14697d296 FUN_14697d296 body=78 status=ok
// SIG undefined FUN_14697d296(void)

longlong * FUN_14697d296(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140d33455(*param_1,(int)param_1[1]);
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



// FUNCTION 14697d2ee FUN_14697d2ee body=29 status=ok
// SIG undefined FUN_14697d2ee(void)

undefined8 FUN_14697d2ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14697d30c FUN_14697d30c body=38 status=ok
// SIG undefined FUN_14697d30c(void)

undefined8 FUN_14697d30c(undefined8 param_1,int param_2)

{
  FUN_140c057ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14697d34c FUN_14697d34c body=80 status=ok
// SIG undefined FUN_14697d34c(void)

int FUN_14697d34c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + -0x18) + 0x18))();
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + -0x18) + 0x20))
                        (*(longlong **)(param_1 + -0x18),iVar3);
      if (lVar2 == param_1 + -0x20) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return -1;
}



// FUNCTION 14697d39c FUN_14697d39c body=38 status=ok
// SIG undefined FUN_14697d39c(void)

undefined8 FUN_14697d39c(undefined8 param_1,int param_2)

{
  FUN_140cc74f2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14697d3c2 FUN_14697d3c2 body=104 status=ok
// SIG undefined FUN_14697d3c2(void)

void FUN_14697d3c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98da80) {
    FUN_144b3d300(&DAT_14c98da80);
    if (DAT_14c98da80 == -1) {
      FUN_1446f470e(&DAT_14c98da78,L"FTrackedMetaData",1);
      _Init_thread_footer(&DAT_14c98da80);
      return;
    }
  }
  return;
}



// FUNCTION 14697d42a FUN_14697d42a body=179 status=ok
// SIG undefined FUN_14697d42a(void)

undefined8 * FUN_14697d42a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1b0);
    lVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar8);
      FUN_146983b94();
      cVar7 = (**(code **)(*plVar5 + 8))(plVar5,&DAT_14c98e130);
      if (cVar7 != '\0') {
        uVar6 = *(undefined8 *)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 == (longlong *)0x0) {
          *param_2 = uVar6;
          param_2[1] = 0;
          return param_2;
        }
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14697d4de FUN_14697d4de body=155 status=ok
// SIG undefined FUN_14697d4de(void)

void FUN_14697d4de(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_2 + 0x10) != '\x01') {
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      FUN_14697e842(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_145767662(&local_28);
  FUN_14697e9e4(local_28 + 8,param_2);
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 14697d592 FUN_14697d592 body=69 status=ok
// SIG undefined FUN_14697d592(void)

undefined1 * FUN_14697d592(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14697d5d8 FUN_14697d5d8 body=1 status=ok
// SIG undefined FUN_14697d5d8(void)

void FUN_14697d5d8(void)

{
  return;
}



// FUNCTION 14697d5da FUN_14697d5da body=256 status=ok
// SIG undefined FUN_14697d5da(void)

undefined1 *
FUN_14697d5da(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1403d1ccc();
  bVar2 = true;
  if (((local_40 != 0) && (*(int *)(local_40 + 0x10) != 0)) &&
     (*(longlong **)(local_40 + 8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(local_40 + 8) + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(local_40 + 0x10) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(local_40 + 8);
      }
      (**(code **)(*plVar4 + 0x58))(plVar4,param_2,param_3,param_4);
      bVar2 = false;
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (bVar2) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697d6dc FUN_14697d6dc body=256 status=ok
// SIG undefined FUN_14697d6dc(void)

undefined1 *
FUN_14697d6dc(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1403d1ccc();
  bVar2 = true;
  if (((local_40 != 0) && (*(int *)(local_40 + 0x20) != 0)) &&
     (*(longlong **)(local_40 + 0x18) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(local_40 + 0x18) + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(local_40 + 0x20) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(local_40 + 0x18);
      }
      (**(code **)(*plVar4 + 0x58))(plVar4,param_2,param_3,param_4);
      bVar2 = false;
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (bVar2) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697d7de FUN_14697d7de body=256 status=ok
// SIG undefined FUN_14697d7de(void)

undefined1 *
FUN_14697d7de(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1403d1ccc();
  bVar2 = true;
  if (((local_40 != 0) && (*(int *)(local_40 + 0x40) != 0)) &&
     (*(longlong **)(local_40 + 0x38) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(local_40 + 0x38) + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(local_40 + 0x40) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(local_40 + 0x38);
      }
      (**(code **)(*plVar4 + 0x58))(plVar4,param_2,param_3,param_4);
      bVar2 = false;
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (bVar2) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697d8e0 FUN_14697d8e0 body=69 status=ok
// SIG undefined FUN_14697d8e0(void)

undefined1 * FUN_14697d8e0(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14697d934 FUN_14697d934 body=69 status=ok
// SIG undefined FUN_14697d934(void)

undefined1 * FUN_14697d934(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14697d97a FUN_14697d97a body=1 status=ok
// SIG undefined FUN_14697d97a(void)

void FUN_14697d97a(void)

{
  return;
}



// FUNCTION 14697d97c FUN_14697d97c body=1 status=ok
// SIG undefined FUN_14697d97c(void)

void FUN_14697d97c(void)

{
  return;
}



// FUNCTION 14697d97e FUN_14697d97e body=69 status=ok
// SIG undefined FUN_14697d97e(void)

undefined1 * FUN_14697d97e(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14697d9c4 FUN_14697d9c4 body=69 status=ok
// SIG undefined FUN_14697d9c4(void)

undefined1 * FUN_14697d9c4(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14697da0a FUN_14697da0a body=69 status=ok
// SIG undefined FUN_14697da0a(void)

undefined1 * FUN_14697da0a(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14697da50 FUN_14697da50 body=69 status=ok
// SIG undefined FUN_14697da50(void)

undefined1 * FUN_14697da50(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14697da96 FUN_14697da96 body=69 status=ok
// SIG undefined FUN_14697da96(void)

undefined1 * FUN_14697da96(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14697dadc FUN_14697dadc body=69 status=ok
// SIG undefined FUN_14697dadc(void)

undefined1 * FUN_14697dadc(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14697db22 FUN_14697db22 body=69 status=ok
// SIG undefined FUN_14697db22(void)

undefined1 * FUN_14697db22(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14697db68 FUN_14697db68 body=69 status=ok
// SIG undefined FUN_14697db68(void)

undefined1 * FUN_14697db68(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14697dbae FUN_14697dbae body=69 status=ok
// SIG undefined FUN_14697dbae(void)

undefined1 * FUN_14697dbae(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14697dc0c FUN_14697dc0c body=164 status=ok
// SIG undefined FUN_14697dc0c(void)

bool FUN_14697dc0c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar7 = (longlong *)param_1[1];
  if (plVar7 == (longlong *)0x0) {
LAB_14697dc33:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_14697dc33;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
  }
  lVar6 = *param_1;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) goto LAB_14697dc7a;
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
    lVar8 = *param_2;
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
LAB_14697dc7a:
  if (plVar7 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
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
  return lVar6 != lVar8;
}



// FUNCTION 14697dcb0 FUN_14697dcb0 body=72 status=ok
// SIG undefined FUN_14697dcb0(void)

void FUN_14697dcb0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x2c) != param_2) {
    *(int *)(param_1 + 0x2c) = param_2;
    lVar1 = FUN_14007026e(&DAT_14c967f20,*(undefined4 *)(param_1 + 0x20));
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x58) != 0)) {
      FUN_146948ab2(*(longlong *)(lVar1 + 0x58),param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14697dcf8 FUN_14697dcf8 body=122 status=ok
// SIG undefined FUN_14697dcf8(void)

void FUN_14697dcf8(longlong param_1,undefined4 *param_2,byte *param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  bVar4 = *(byte *)(param_1 + 0x30) & 0xbf | param_4 << 6;
  *(byte *)(param_1 + 0x30) = bVar4;
  if ((~*param_3 & 3) != 0) {
    FUN_1428693e8(param_1 + 0x148);
    bVar4 = *(byte *)(param_1 + 0x30);
  }
  bVar5 = *(byte *)(param_1 + 0x38);
  if ((bVar4 & 0x60) == 0x20) {
    bVar5 = bVar5 | 0x40;
  }
  else {
    if ((bVar5 & 0x40) == 0) {
      return;
    }
    bVar5 = bVar5 & 0xbf;
  }
  *(byte *)(param_1 + 0x38) = bVar5;
  FUN_144a88240(param_1 + 0x18,param_1);
  return;
}



// FUNCTION 14697dd72 FUN_14697dd72 body=105 status=ok
// SIG undefined FUN_14697dd72(void)

void FUN_14697dd72(longlong *param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x170))(param_1,&local_28,param_2);
  *(float *)(param_1 + 0x2d) = (float)local_28;
  *(float *)((longlong)param_1 + 0x16c) = (float)local_20;
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) | 0x20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697dddc FUN_14697dddc body=126 status=ok
// SIG undefined FUN_14697dddc(void)

bool FUN_14697dddc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*DAT_14c968098 + 0x98))(DAT_14c968098,&local_30);
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
    return local_30 == param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697de5c FUN_14697de5c body=234 status=ok
// SIG undefined FUN_14697de5c(void)

undefined8 FUN_14697de5c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  plVar3 = DAT_14c968098;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14697df03:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    (**(code **)(*plVar3 + 0x188))(plVar3,param_2,&local_48,param_3);
  }
  else {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_14697df03;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    uVar5 = *(undefined8 *)(param_1 + 8);
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
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_48 = uVar5;
    plStack_40 = plVar4;
    (**(code **)(*plVar3 + 0x188))(plVar3,param_2,&local_48,param_3);
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14697df48 FUN_14697df48 body=213 status=ok
// SIG undefined FUN_14697df48(void)

undefined4 FUN_14697df48(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  plVar3 = DAT_14c968098;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14697dfb4:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_14697dfb4;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    local_38 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plStack_30 = plVar4;
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
  uVar7 = (**(code **)(*plVar3 + 0xf0))(plVar3,&local_38,param_2);
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14697e01e FUN_14697e01e body=204 status=ok
// SIG undefined FUN_14697e01e(void)

undefined4 FUN_14697e01e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  plVar3 = DAT_14c968098;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14697e086:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_14697e086;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    local_38 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plStack_30 = plVar4;
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
  uVar7 = (**(code **)(*plVar3 + 0xf8))(plVar3,&local_38);
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14697e0ec FUN_14697e0ec body=84 status=ok
// SIG undefined FUN_14697e0ec(void)

undefined8 FUN_14697e0ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14287b7b4(param_1,&local_1a);
  uVar1 = 1;
  if (local_19 == '\0') {
    uVar1 = FUN_14697e01e(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697e142 FUN_14697e142 body=121 status=ok
// SIG undefined FUN_14697e142(void)

void FUN_14697e142(void)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_20,"FocusRectangle",1);
  (**(code **)(*plVar1 + 0x50))(plVar1,local_20,0,0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697e1bc FUN_14697e1bc body=267 status=ok
// SIG undefined FUN_14697e1bc(void)

undefined4 FUN_14697e1bc(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined4 local_38;
  char local_34;
  ulonglong local_30;
  
  plVar3 = DAT_14c968098;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = *(char *)(param_3 + 1);
  if (local_34 == '\x01') {
    local_38 = *param_3;
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14697e278:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    uVar8 = (**(code **)(*plVar3 + 0x180))(plVar3,&local_48,param_2,&local_38);
  }
  else {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_14697e278;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    uVar5 = *(undefined8 *)(param_1 + 8);
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
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_48 = uVar5;
    plStack_40 = plVar4;
    uVar8 = (**(code **)(*plVar3 + 0x180))(plVar3,&local_48,param_2,&local_38);
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (*(char *)(param_3 + 1) == '\x01') {
    *(undefined1 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14697e2c8 FUN_14697e2c8 body=539 status=ok
// SIG undefined FUN_14697e2c8(void)

void FUN_14697e2c8(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  ulonglong local_1b0;
  longlong *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined1 local_18c [4];
  undefined1 local_188 [8];
  undefined1 local_180 [288];
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_188[0] = DAT_14c96b238;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x400000000;
  local_50 = 0;
  (**(code **)(*param_1 + 0x238))(param_1,param_2,local_188);
  iVar5 = (int)local_58;
  lVar10 = (longlong)(int)local_58;
  if (0 < lVar10) {
    local_1b8 = lVar10 * 0x48;
    lVar9 = 0;
    do {
      puVar8 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar8 = local_180;
      }
      uVar3 = *(ulonglong *)(puVar8 + lVar9 + 0x38);
      plVar4 = *(longlong **)(puVar8 + lVar9 + 0x40);
      local_1b0 = uVar3;
      local_1a8 = plVar4;
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
      iVar7 = FUN_146983c3a(param_3,uVar6 >> 0x10 ^ uVar6,&local_1b0);
      plVar4 = local_1a8;
      if (local_1a8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1a8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_1a8)(local_1a8);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      if (iVar7 != -1) {
        local_1a0 = puVar8 + lVar9 + 0x38;
        local_198 = puVar8 + lVar9;
        FUN_146983d1e(param_4,local_18c,&local_1a0);
      }
      lVar9 = lVar9 + 0x48;
    } while (local_1b8 != lVar9);
  }
  if ((0 < iVar5) &&
     (*(int *)(param_4 + 8) - *(int *)(param_4 + 0x34) !=
      *(int *)(param_3 + 8) - *(int *)(param_3 + 0x34))) {
    lVar9 = 0;
    do {
      puVar8 = local_60;
      if (local_60 == (undefined1 *)0x0) {
        puVar8 = local_180;
      }
      FUN_14697e2c8(*(undefined8 *)(puVar8 + lVar9 + 0x38),puVar8 + lVar9,param_3,param_4);
      lVar9 = lVar9 + 0x48;
    } while (lVar10 * 0x48 != lVar9);
  }
  FUN_144715780(local_180);
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14697e4e4 FUN_14697e4e4 body=662 status=ok
// SIG undefined FUN_14697e4e4(void)

undefined4 *
FUN_14697e4e4(undefined8 param_1,undefined4 *param_2,undefined8 param_3,ulonglong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
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
  undefined4 uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  longlong *local_110;
  longlong local_108 [4];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_1469845e2(&local_b8,local_108,param_4);
  local_e8 = 0;
  local_e0 = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_14697e2c8(param_1,param_3,&local_b8,local_108);
  uVar4 = *param_4;
  plVar5 = (longlong *)param_4[1];
  local_118 = uVar4;
  if (plVar5 == (longlong *)0x0) {
    local_110 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    local_110 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  uVar17 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
  iVar18 = FUN_1469840b2(local_108,uVar17 >> 0x10 ^ uVar17,&local_118);
  plVar3 = local_110;
  lVar19 = 0;
  if (iVar18 != -1) {
    lVar19 = (longlong)iVar18 * 0x60 + local_108[0];
  }
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(lVar19 + 0x40);
  uVar6 = *(undefined4 *)(lVar19 + 0x10);
  uVar7 = *(undefined4 *)(lVar19 + 0x14);
  uVar8 = *(undefined4 *)(lVar19 + 0x18);
  uVar9 = *(undefined4 *)(lVar19 + 0x1c);
  uVar10 = *(undefined4 *)(lVar19 + 0x20);
  uVar11 = *(undefined4 *)(lVar19 + 0x24);
  uVar12 = *(undefined4 *)(lVar19 + 0x28);
  uVar13 = *(undefined4 *)(lVar19 + 0x2c);
  uVar14 = *(undefined4 *)(lVar19 + 0x34);
  uVar15 = *(undefined4 *)(lVar19 + 0x38);
  uVar16 = *(undefined4 *)(lVar19 + 0x3c);
  param_2[8] = *(undefined4 *)(lVar19 + 0x30);
  param_2[9] = uVar14;
  param_2[10] = uVar15;
  param_2[0xb] = uVar16;
  param_2[4] = uVar10;
  param_2[5] = uVar11;
  param_2[6] = uVar12;
  param_2[7] = uVar13;
  *param_2 = uVar6;
  param_2[1] = uVar7;
  param_2[2] = uVar8;
  param_2[3] = uVar9;
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_146983544(local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_146984428(&local_b8);
  plVar5 = (longlong *)param_4[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar5 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697e77c FUN_14697e77c body=29 status=ok
// SIG undefined FUN_14697e77c(void)

undefined8 FUN_14697e77c(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(param_1 + 0x1d8);
  return param_2;
}



// FUNCTION 14697e7a8 FUN_14697e7a8 body=127 status=ok
// SIG undefined FUN_14697e7a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14697e7a8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98e12c) {
    FUN_144b3d300(&DAT_14c98e12c);
    if (DAT_14c98e12c == -1) {
      _DAT_14c98e118 = 0x3f800000;
      uRam000000014c98e11c = 0;
      uRam000000014c98e120 = 0x3f800000;
      uRam000000014c98e124 = 0x3f800000;
      DAT_14c98e128 = CONCAT22(DAT_14c98e128._2_2_,2);
      _Init_thread_footer(&DAT_14c98e12c);
    }
  }
  *(undefined4 *)(param_2 + 2) = DAT_14c98e128;
  uVar1 = CONCAT44(uRam000000014c98e124,uRam000000014c98e120);
  *param_2 = CONCAT44(uRam000000014c98e11c,_DAT_14c98e118);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 14697e828 FUN_14697e828 body=26 status=ok
// SIG undefined FUN_14697e828(void)

undefined8 FUN_14697e828(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x1f0))();
  return param_2;
}



// FUNCTION 14697e842 FUN_14697e842 body=125 status=ok
// SIG undefined FUN_14697e842(void)

void FUN_14697e842(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x1b8);
  plVar3 = (longlong *)(param_1 + 0x1b0);
  lVar5 = uVar4 << 4;
  do {
    lVar5 = lVar5 + -0x10;
    if ((int)uVar4 < 1) {
      return;
    }
    plVar1 = *(longlong **)(*plVar3 + lVar5);
    FUN_1401fcf0a();
    cVar2 = (**(code **)(*plVar1 + 8))(plVar1,&DAT_14c98e148);
    uVar4 = (ulonglong)((int)uVar4 - 1);
  } while (cVar2 == '\0');
  FUN_146979a96(plVar3,uVar4);
  FUN_146979b1e(plVar3);
  return;
}



// FUNCTION 14697e8c0 FUN_14697e8c0 body=281 status=ok
// SIG undefined FUN_14697e8c0(void)

void FUN_14697e8c0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = FUN_140cac50e(param_2);
  if (cVar3 == '\0') {
    (**(code **)(*DAT_14c968098 + 0x128))(DAT_14c968098,&local_58,param_2);
    local_48 = local_58;
    local_40 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    local_38 = 1;
    local_30 = 0;
    uStack_28 = 0;
    FUN_145767662(&local_68,param_1);
    FUN_145766fac(local_68 + 8,&local_48);
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
    FUN_14576702a(&local_48);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_14697e842(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697e9e4 FUN_14697e9e4 body=107 status=ok
// SIG undefined FUN_14697e9e4(void)

undefined8 * FUN_14697e9e4(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  FUN_14698373e(param_1 + 3,param_2 + 3);
  return param_1;
}



// FUNCTION 14697ea50 FUN_14697ea50 body=250 status=ok
// SIG undefined FUN_14697ea50(void)

undefined8 * FUN_14697ea50(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 4) != 0) && ((longlong *)param_1[3] != (longlong *)0x0)) {
    cVar3 = (**(code **)(*(longlong *)param_1[3] + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 4) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)param_1[3];
      }
      (**(code **)(*plVar4 + 0x58))(plVar4,&local_28);
      plVar4 = local_20;
      if (&local_28 != param_1) {
        *param_1 = local_28;
        local_28 = 0;
        plVar2 = (longlong *)param_1[1];
        if (local_20 != plVar2) {
          local_20 = (longlong *)0x0;
          param_1[1] = plVar4;
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
        }
      }
      plVar4 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_20 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_20)(local_20);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697eb4e FUN_14697eb4e body=14 status=ok
// SIG undefined FUN_14697eb4e(void)

void FUN_14697eb4e(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf7 | param_2 << 3;
  return;
}



// FUNCTION 14697eb5c FUN_14697eb5c body=210 status=ok
// SIG undefined FUN_14697eb5c(void)

undefined4 FUN_14697eb5c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  plVar3 = DAT_14c968098;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14697ebf5:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    uVar8 = (**(code **)(*plVar3 + 0x198))(plVar3);
  }
  else {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_14697ebf5;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    uVar5 = *(undefined8 *)(param_1 + 8);
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
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_38 = uVar5;
    plStack_30 = plVar4;
    uVar8 = (**(code **)(*plVar3 + 0x198))(plVar3);
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14697ec30 FUN_14697ec30 body=125 status=ok
// SIG undefined FUN_14697ec30(void)

void FUN_14697ec30(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x1b8);
  plVar3 = (longlong *)(param_1 + 0x1b0);
  lVar5 = uVar4 << 4;
  do {
    lVar5 = lVar5 + -0x10;
    if ((int)uVar4 < 1) {
      return;
    }
    plVar1 = *(longlong **)(*plVar3 + lVar5);
    FUN_140a5f470();
    cVar2 = (**(code **)(*plVar1 + 8))(plVar1,&DAT_14c98e158);
    uVar4 = (ulonglong)((int)uVar4 - 1);
  } while (cVar2 == '\0');
  FUN_146979a96(plVar3,uVar4);
  FUN_146979b1e(plVar3);
  return;
}



// FUNCTION 14697ecae FUN_14697ecae body=581 status=ok
// SIG undefined FUN_14697ecae(void)

void FUN_14697ecae(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14697d42a(param_1,&local_80);
  local_70 = local_80;
  local_68 = local_78;
  iVar9 = *(int *)(local_80 + 0x10);
  if (0 < iVar9) {
    iVar10 = 0;
    do {
      lVar8 = (longlong)iVar10 * 0x10;
      lVar4 = *(longlong *)(*(longlong *)(local_70 + 8) + lVar8);
      plVar5 = *(longlong **)(*(longlong *)(local_70 + 8) + 8 + lVar8);
      if (plVar5 == (longlong *)0x0) {
        cVar7 = FUN_14692f6ee(lVar4,param_2,param_3);
        if (cVar7 == '\x01') goto LAB_14697ed45;
      }
      else {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        cVar7 = FUN_14692f6ee(*(undefined8 *)(*(longlong *)(local_70 + 8) + lVar8),param_2,param_3);
        if (cVar7 == '\x01') {
LAB_14697ed45:
          iVar10 = iVar10 + 1;
        }
        else {
          iVar9 = (int)plVar5[1];
          do {
            if (iVar9 == 0) goto LAB_14697ed47;
            LOCK();
            iVar6 = (int)plVar5[1];
            bVar11 = iVar9 == iVar6;
            if (bVar11) {
              *(int *)(plVar5 + 1) = iVar9 + 1;
              iVar6 = iVar9;
            }
            iVar9 = iVar6;
            lVar8 = DAT_14c968098;
            UNLOCK();
          } while (!bVar11);
          if (lVar4 != 0) {
            if (DAT_14c968098 != 0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              local_80 = lVar4;
              local_78 = plVar5;
              FUN_14692fa20(lVar8,&local_80);
              plVar2 = local_78;
              if (local_78 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_78 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*local_78)(local_78);
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
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            local_80 = lVar4;
            local_78 = plVar5;
            FUN_14697f1fe(local_70 + 8,&local_80);
            plVar2 = local_78;
            if (local_78 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_78 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_78)(local_78);
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
LAB_14697ed47:
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      iVar9 = *(int *)(local_70 + 0x10);
    } while (iVar10 < iVar9);
  }
  if (iVar9 == 0) {
    FUN_14697f292(param_1,&local_70);
    *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & 0xef;
    *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf7;
    FUN_144a88240(param_1 + 0x18,param_1);
  }
  plVar5 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_68 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14697ef1e FUN_14697ef1e body=487 status=ok
// SIG undefined FUN_14697ef1e(void)

longlong * FUN_14697ef1e(longlong param_1,longlong *param_2,float param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  double dVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_44 = param_3;
  dVar7 = (double)(**(code **)(*DAT_14c968098 + 0x60))();
  local_58 = (longlong *)((double)param_3 + dVar7);
  lVar5 = FUN_146984e1c(&local_44,param_4);
  *param_2 = lVar5 + 0x10;
  param_2[1] = lVar5;
  FUN_14692f9a4(DAT_14c968098,param_2);
  if ((*(byte *)(param_1 + 0x31) & 0x10) == 0) {
    plVar6 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_149ef15a0;
    local_58 = plVar6 + 2;
    plVar6[2] = (longlong)&PTR_FUN_149ef15b8;
    plVar6[3] = 0;
    plVar6[4] = 0;
    *(undefined4 *)(plVar6 + 4) = 1;
    local_50 = plVar6;
    FUN_146984efa(plVar6 + 3,0);
    plVar3 = (longlong *)plVar6[3];
    *plVar3 = *param_2;
    lVar5 = param_2[1];
    plVar3[1] = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
      plVar6 = local_50;
    }
    FUN_14287bb46(param_1,&local_58);
    *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) | 0x10;
  }
  else {
    FUN_14697d42a(param_1,&local_58);
    plVar6 = local_58 + 1;
    iVar2 = (int)local_58[2];
    *(uint *)(local_58 + 2) = iVar2 + 1U;
    if (*(uint *)((longlong)local_58 + 0x14) < iVar2 + 1U) {
      FUN_146984efa(plVar6,iVar2);
    }
    lVar5 = *plVar6;
    *(longlong *)(lVar5 + (longlong)iVar2 * 0x10) = *param_2;
    lVar4 = param_2[1];
    *(longlong *)(lVar5 + 8 + (longlong)iVar2 * 0x10) = lVar4;
    plVar6 = local_50;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 8;
  FUN_144a88240(param_1 + 0x18,param_1);
  FUN_1449db362(param_4);
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14697f106 FUN_14697f106 body=227 status=ok
// SIG undefined FUN_14697f106(void)

void FUN_14697f106(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x31) & 0x10) != 0) {
    FUN_14697d42a(param_1,&local_48);
    local_38 = local_48;
    local_30 = local_40;
    FUN_14697f1fe(local_48 + 8,param_2);
    if (*(int *)(local_48 + 0x10) == 0) {
      FUN_14697f292(param_1,&local_38);
      *(byte *)(param_1 + 0x31) = *(byte *)(param_1 + 0x31) & 0xef;
      *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf7;
      FUN_144a88240(param_1 + 0x18,param_1);
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  if (DAT_14c968098 == 0) {
    if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 14697f1fe FUN_14697f1fe body=147 status=ok
// SIG undefined FUN_14697f1fe(void)

void FUN_14697f1fe(longlong *param_1,longlong *param_2)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    iVar3 = 1;
    lVar2 = 0;
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar2) == *param_2) {
        if (iVar3 == 0) {
          return;
        }
        lVar2 = (lVar4 >> 0x20) * 0x10;
        _Dst = (void *)(lVar1 + lVar2);
        FUN_14698503e(_Dst,1);
        memmove(_Dst,(void *)(lVar1 + lVar2 + 0x10),(longlong)((int)param_1[1] - iVar3) << 4);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x10;
    } while ((longlong)(int)param_1[1] * 0x10 != lVar2);
  }
  return;
}



// FUNCTION 14697f292 FUN_14697f292 body=162 status=ok
// SIG undefined FUN_14697f292(void)

void FUN_14697f292(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  iVar5 = -1;
  if ((longlong)*(int *)(param_1 + 0x1b8) != 0) {
    lVar6 = 0;
    iVar7 = 0;
    do {
      iVar5 = iVar7;
      if (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + lVar6) == lVar3) break;
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 0x10;
      iVar5 = -1;
    } while ((longlong)*(int *)(param_1 + 0x1b8) * 0x10 != lVar6);
  }
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
  if (iVar5 != -1) {
    FUN_146985088(param_1 + 0x1b0,iVar5);
    FUN_146979b1e(param_1 + 0x1b0);
    return;
  }
  return;
}



// FUNCTION 14697f334 FUN_14697f334 body=130 status=ok
// SIG undefined FUN_14697f334(void)

void FUN_14697f334(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14576855a(&local_28,param_1);
  FUN_145767132(local_28 + 0x18,param_2);
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
  FUN_1449db362(param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697f3b8 FUN_14697f3b8 body=130 status=ok
// SIG undefined FUN_14697f3b8(void)

void FUN_14697f3b8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14576855a(&local_28,param_1);
  FUN_145767132(local_28 + 0x28,param_2);
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
  FUN_1449db362(param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697f43c FUN_14697f43c body=130 status=ok
// SIG undefined FUN_14697f43c(void)

void FUN_14697f43c(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14576855a(&local_28,param_1);
  FUN_145767132(local_28 + 0x38,param_2);
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
  FUN_1449db362(param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697f4c0 FUN_14697f4c0 body=392 status=ok
// SIG undefined FUN_14697f4c0(void)

longlong * FUN_14697f4c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_14001cc68(0x68,0x10);
  plStack_40 = *(longlong **)(param_1 + 0x10);
  if (plStack_40 == (longlong *)0x0) {
LAB_14697f521:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar8 = true;
  }
  else {
    iVar4 = (int)plStack_40[1];
    do {
      if (iVar4 == 0) goto LAB_14697f521;
      LOCK();
      iVar3 = (int)plStack_40[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plStack_40 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    local_48 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)((longlong)plStack_40 + 0xc) = *(int *)((longlong)plStack_40 + 0xc) + 1;
    UNLOCK();
    bVar8 = false;
  }
  plVar2 = plStack_40;
  FUN_14697595a(lVar5,&local_48,0);
  *param_2 = lVar5;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149ef0b50;
  plVar6[2] = lVar5;
  param_2[1] = (longlong)plVar6;
  if ((lVar5 == 0) ||
     (((*(longlong *)(lVar5 + 8) != 0 && (*(longlong *)(lVar5 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar5 + 0x10) + 8))))) goto LAB_14697f602;
  if (plVar6 == (longlong *)0x0) {
    *(longlong *)(lVar5 + 8) = lVar5;
    plVar7 = *(longlong **)(lVar5 + 0x10);
    if (plVar7 == (longlong *)0x0) goto LAB_14697f602;
LAB_14697f5b7:
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    *(longlong **)(lVar5 + 0x10) = plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_14697f602;
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
      if (plVar7 != (longlong *)0x0) goto LAB_14697f5b7;
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
LAB_14697f602:
  if (!bVar8) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14697f64a FUN_14697f64a body=116 status=ok
// SIG undefined FUN_14697f64a(void)

void FUN_14697f64a(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((*(byte *)(param_1 + 0x32) & 4) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfb | param_2 << 2;
    lVar3 = *(longlong *)(DAT_14c968098 + 200);
    plVar4 = *(longlong **)(DAT_14c968098 + 0xd0);
    if (plVar4 == (longlong *)0x0) {
      *(undefined1 *)(lVar3 + 0x88) = 1;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      *(undefined1 *)(lVar3 + 0x88) = 1;
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
                    /* WARNING: Could not recover jumptable at 0x00014697f6b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14697f6be FUN_14697f6be body=699 status=ok
// SIG undefined FUN_14697f6be(void)

longlong * FUN_14697f6be(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = (char)param_3;
  switch(*(undefined1 *)((longlong)param_1 + (0x34 - (ulonglong)(cVar4 == '\0')))) {
  case 1:
    bVar2 = *(byte *)((ulonglong)(cVar4 == '\0') + 0x33 + (longlong)param_1);
    (**(code **)(*param_1 + 0x1c8))(param_1,&local_40,param_3);
    if (local_40 == (longlong *)0x0) {
      if (bVar2 - 3 < 2) {
        FUN_14697f6be(param_1,param_2,cVar4 == '\0');
      }
      else {
        if ((bVar2 != 0) && (bVar2 != 2)) goto switchD_14697f709_default;
        FUN_14697fa24(param_1,param_2);
      }
    }
    else {
      *param_2 = (longlong)local_40;
      (**(code **)(*local_40 + 8))();
      *(undefined4 *)(param_2 + 1) = local_38;
    }
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x10))();
    }
    goto LAB_14697f7dd;
  case 2:
    FUN_14697fa24(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  case 3:
    puVar7 = &DAT_14c98e0b0;
    if (cVar4 == '\0') {
      puVar7 = &DAT_14c98e058;
    }
    lVar6 = FUN_14697f97c(puVar7,param_1);
    plVar5 = (longlong *)FUN_140e82300();
    if (*(char *)(lVar6 + 0x10) == '\x01') {
      plVar5 = (longlong *)FUN_14142e2d2(lVar6);
    }
    break;
  case 4:
    FUN_1401fce4e(param_1,&local_40);
    if (local_40 != (longlong *)0x0) {
      FUN_14697ea50(local_40 + 1);
      plVar5 = (longlong *)local_40[1];
      plVar3 = (longlong *)local_40[2];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if ((plVar5 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar5 + 0x20))(plVar5), cVar4 == '\0')) {
        (**(code **)(*plVar5 + 8))(plVar5,&local_50);
        FUN_14697f6be(local_50,param_2,0);
        if (local_48 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_48 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar3 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
        plVar5 = (longlong *)CONCAT44(uStack_34,local_38);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar5 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        goto LAB_14697f7dd;
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar3 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
    plVar5 = (longlong *)CONCAT44(uStack_34,local_38);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  default:
switchD_14697f709_default:
    plVar5 = (longlong *)FUN_140e82300();
  }
  plVar3 = (longlong *)*plVar5;
  *param_2 = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar5[1];
LAB_14697f7dd:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14697f97c FUN_14697f97c body=167 status=ok
// SIG undefined FUN_14697f97c(void)

longlong FUN_14697f97c(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 10));
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar2 * 0x38;
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x38) == param_2) goto LAB_14697f99f;
        iVar2 = *(int *)(lVar3 + 0x30);
      } while (iVar2 != -1);
    }
  }
  lVar3 = 0;
LAB_14697f99f:
  lVar5 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 10));
  return lVar5;
}



// FUNCTION 14697fa24 FUN_14697fa24 body=311 status=ok
// SIG undefined FUN_14697fa24(void)

undefined8 FUN_14697fa24(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  longlong *local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x180))();
  if (plVar7 != (longlong *)0x0) {
    iVar5 = (**(code **)*plVar7)(plVar7);
    if (0 < iVar5) {
      iVar5 = 0;
      do {
        (**(code **)(*plVar7 + 0x10))(plVar7,&local_78,iVar5);
        FUN_14697f6be(local_78,local_68,1);
        plVar3 = local_70;
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_70 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        cVar4 = FUN_144a7c5f6(local_68);
        if (cVar4 == '\0') {
          FUN_14615b4b0(&local_58,local_68);
        }
        if (local_68[0] != (longlong *)0x0) {
          (**(code **)(*local_68[0] + 0x10))();
        }
        iVar5 = iVar5 + 1;
        iVar6 = (**(code **)*plVar7)(plVar7);
      } while (iVar5 < iVar6);
    }
  }
  FUN_14598dd3c(&local_58,param_2);
  FUN_1401b9920(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697fb6e FUN_14697fb6e body=284 status=ok
// SIG undefined FUN_14697fb6e(void)

ulonglong FUN_14697fb6e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  byte bVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined7 uVar8;
  
  if (*(char *)(param_1 + 0x33) == '\0') {
    uVar7 = 0;
  }
  else {
    plVar9 = *(longlong **)(param_1 + 0x1c8);
    uVar8 = (undefined7)((ulonglong)unaff_RSI >> 8);
    uVar7 = CONCAT71(uVar8,1);
    if (plVar9 != (longlong *)0x0) {
      iVar4 = (int)plVar9[1];
      do {
        if (iVar4 == 0) goto LAB_14697fc4d;
        LOCK();
        iVar3 = (int)plVar9[1];
        bVar12 = iVar4 == iVar3;
        if (bVar12) {
          *(int *)(plVar9 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
      } while (!bVar12);
      lVar11 = *(longlong *)(param_1 + 0x1c0);
      if (lVar11 == 0) {
        uVar7 = CONCAT71(uVar8,1);
      }
      else {
        do {
          bVar6 = *(byte *)(lVar11 + 0x32) & 4;
          uVar7 = CONCAT71((int7)(uVar7 >> 8),*(byte *)(lVar11 + 0x32)) & 0xffffffffffffff04;
          if (bVar6 == 0) {
            uVar7 = 0;
            goto LAB_14697fc5c;
          }
          plVar5 = *(longlong **)(lVar11 + 0x1c8);
          if (plVar5 == (longlong *)0x0) {
LAB_14697fbed:
            plVar5 = (longlong *)0x0;
            lVar11 = 0;
          }
          else {
            iVar4 = (int)plVar5[1];
            do {
              if (iVar4 == 0) goto LAB_14697fbed;
              LOCK();
              iVar3 = (int)plVar5[1];
              bVar12 = iVar4 == iVar3;
              if (bVar12) {
                *(int *)(plVar5 + 1) = iVar4 + 1;
                iVar3 = iVar4;
              }
              iVar4 = iVar3;
              UNLOCK();
            } while (!bVar12);
            lVar11 = *(longlong *)(lVar11 + 0x1c0);
          }
          if (plVar5 == plVar9) {
            if (plVar9 == (longlong *)0x0) {
              plVar10 = (longlong *)0x0;
            }
            else {
              LOCK();
              plVar2 = plVar5 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              plVar10 = plVar9;
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar4 = *piVar1;
                UNLOCK();
                goto joined_r0x00014697fc43;
              }
            }
          }
          else {
            plVar10 = plVar5;
            if (plVar9 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar9 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar1 = (int *)((longlong)plVar9 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar4 = *piVar1;
                UNLOCK();
                plVar5 = plVar9;
joined_r0x00014697fc43:
                if (iVar4 == 0) {
                  (**(code **)(*plVar5 + 0x10))();
                }
              }
            }
          }
          plVar9 = plVar10;
        } while (lVar11 != 0);
        uVar7 = CONCAT71((int7)(uVar7 >> 8),bVar6 >> 2);
      }
LAB_14697fc5c:
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar9 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
LAB_14697fc4d:
  return uVar7 & 0xffffffff;
}



// FUNCTION 14697fc8a FUN_14697fc8a body=363 status=ok
// SIG undefined FUN_14697fc8a(void)

undefined8 *
FUN_14697fc8a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [184];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar5 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_LAB_149ef12c0;
    param_1[3] = uVar5;
    param_1[4] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_LAB_149ef12c0;
    param_1[3] = uVar5;
    param_1[4] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  param_1[5] = *param_3;
  lVar4 = param_3[1];
  param_1[6] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
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
  *param_1 = &PTR_FUN_149ef0f40;
  param_1[7] = *param_2;
  lVar4 = param_2[1];
  param_1[8] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  uVar5 = *param_4;
  param_1[9] = uVar5;
  lVar4 = param_4[1];
  param_1[10] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    uVar5 = param_1[9];
  }
  FUN_140763f46(uVar5,local_e8,0xffffffff);
  FUN_145acdaa4(local_e8,param_3);
  FUN_1407640b6(local_e8);
  plVar3 = (longlong *)param_4[1];
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
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697fdf6 FUN_14697fdf6 body=79 status=ok
// SIG undefined FUN_14697fdf6(void)

void FUN_14697fdf6(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[9];
  (**(code **)(*param_1 + 0x10))(param_1,local_28);
  FUN_145901a74(lVar1,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697fe46 FUN_14697fe46 body=26 status=ok
// SIG undefined FUN_14697fe46(void)

undefined8 FUN_14697fe46(longlong param_1,undefined8 param_2)

{
  FUN_140c2d2b0(*(undefined8 *)(param_1 + 0x38));
  return param_2;
}



// FUNCTION 14697fe60 FUN_14697fe60 body=239 status=ok
// SIG undefined FUN_14697fe60(void)

float * FUN_14697fe60(longlong param_1,float *param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  
  if ((*(longlong **)(param_1 + 0x510) == (longlong *)0x0) ||
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x70))(), cVar2 == '\0')) {
    uVar1 = *(undefined8 *)(param_1 + 0x648);
    *(undefined8 *)param_2 = *(undefined8 *)(param_1 + 0x640);
    *(undefined8 *)(param_2 + 2) = uVar1;
    return param_2;
  }
  fVar5 = (float)(**(code **)(*DAT_14c968098 + 0x58))();
  fVar6 = 1.0;
  if (*(longlong **)(param_1 + 0x510) == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    fVar6 = (float)(**(code **)(**(longlong **)(param_1 + 0x510) + 0xf8))();
    plVar4 = *(longlong **)(param_1 + 0x510);
  }
  fVar6 = 1.0 / (fVar5 * fVar6);
  iVar3 = (**(code **)(*plVar4 + 0xb0))();
  fVar5 = (float)iVar3 * fVar6;
  *param_2 = fVar5;
  param_2[1] = fVar5;
  param_2[2] = fVar5;
  param_2[3] = fVar5;
  if (param_3 == '\0') {
    return param_2;
  }
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0xb8))();
  param_2[1] = (float)iVar3 * fVar6 + fVar5;
  return param_2;
}



// FUNCTION 14697ff50 FUN_14697ff50 body=368 status=ok
// SIG undefined FUN_14697ff50(void)

longlong * FUN_14697ff50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_308 [32];
  undefined1 *local_2e8;
  undefined1 local_2d9;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  undefined8 local_2c0;
  undefined1 local_2b8 [424];
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_c0;
  undefined2 local_b6;
  undefined1 local_b3;
  undefined4 local_b0;
  undefined2 local_aa;
  undefined1 local_84;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_308;
  FUN_14627df0c(local_2b8);
  FUN_1446ddc76(&local_2c0,"NotificationWindow",1);
  lVar3 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar3 == 0) {
    lVar3 = DAT_14c96b350;
  }
  local_108 = FUN_14076516e(lVar3,local_2c0,0,0);
  local_110 = 3;
  local_aa = 0;
  local_84 = 0;
  local_b6 = 0x101;
  local_c0 = 1;
  local_b3 = 0;
  local_b0 = 0;
  local_2e8 = &local_2d9;
  FUN_1461c0e96(local_2d8,"SWindow",".\\Runtime/SlateCore/Private/Widgets/SWindow.cpp",0x1a6);
  FUN_1462139ea(local_2d8,param_1,local_2b8);
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar2 = (int *)((longlong)local_2d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2d0 + 0x10))(local_2d0);
      }
    }
  }
  FUN_14627e134(local_2b8);
  *(byte *)(*param_1 + 0x368) = *(byte *)(*param_1 + 0x368) | 8;
  *(undefined4 *)(*param_1 + 0x624) = 0x400;
  *(undefined4 *)(*param_1 + 0x628) = 0x100;
  if ((local_20 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469800c2 FUN_1469800c2 body=284 status=ok
// SIG undefined FUN_1469800c2(void)

longlong * FUN_1469800c2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_308 [32];
  undefined1 *local_2e8;
  undefined1 local_2d1;
  undefined1 local_2d0 [8];
  longlong *local_2c8;
  undefined1 local_2b8 [424];
  undefined4 local_110;
  undefined1 local_c4;
  undefined4 local_c0;
  undefined4 local_b6;
  undefined4 local_b0;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_308;
  FUN_14627df0c(local_2b8);
  local_110 = 2;
  local_c4 = 0;
  local_b6 = 0x10101;
  local_c0 = 1;
  local_b0 = 0;
  local_2e8 = &local_2d1;
  FUN_1461c0e96(local_2d0,"SWindow",".\\Runtime/SlateCore/Private/Widgets/SWindow.cpp",0x1be);
  FUN_1462139ea(local_2d0,param_1,local_2b8);
  if (local_2c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2c8)(local_2c8);
      LOCK();
      piVar2 = (int *)((longlong)local_2c8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2c8 + 0x10))(local_2c8);
      }
    }
  }
  FUN_14627e134(local_2b8);
  *(undefined4 *)(*param_1 + 0x35c) = 0;
  *(byte *)(*param_1 + 0x368) = *(byte *)(*param_1 + 0x368) | 8;
  *(undefined4 *)(*param_1 + 0x624) = 0x200;
  *(undefined4 *)(*param_1 + 0x628) = 0x100;
  if ((local_20 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469801e0 FUN_1469801e0 body=241 status=ok
// SIG undefined FUN_1469801e0(void)

longlong * FUN_1469801e0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_308 [32];
  undefined1 *local_2e8;
  undefined1 local_2d1;
  undefined1 local_2d0 [8];
  longlong *local_2c8;
  undefined1 local_2b8 [424];
  undefined4 local_110;
  undefined4 local_c0;
  undefined4 local_b6;
  undefined4 local_b0;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_308;
  FUN_14627df0c(local_2b8);
  local_110 = 4;
  local_b6 = 0x10101;
  local_c0 = 1;
  local_b0 = 0;
  local_2e8 = &local_2d1;
  FUN_1461c0e96(local_2d0,"SWindow",".\\Runtime/SlateCore/Private/Widgets/SWindow.cpp",0x1d4);
  FUN_1462139ea(local_2d0,param_1,local_2b8);
  if (local_2c8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2c8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2c8)(local_2c8);
      LOCK();
      piVar2 = (int *)((longlong)local_2c8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_2c8 + 0x10))(local_2c8);
      }
    }
  }
  FUN_14627e134(local_2b8);
  *(undefined4 *)(*param_1 + 0x35c) = 0x3f800000;
  if ((local_20 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469802d2 FUN_1469802d2 body=40 status=ok
// SIG undefined FUN_1469802d2(void)

float * FUN_1469802d2(float *param_1,undefined8 param_2)

{
  *param_1 = (float)param_2 + 0.0;
  param_1[1] = (float)((ulonglong)param_2 >> 0x20) + 34.0;
  return param_1;
}



// FUNCTION 1469802fa FUN_1469802fa body=291 status=ok
// SIG undefined FUN_1469802fa(void)

undefined8
FUN_1469802fa(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *plStack_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = *param_3;
  local_88 = param_3[1];
  if (local_88 != 0) {
    LOCK();
    *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
    UNLOCK();
  }
  local_80 = 0;
  plStack_78 = (longlong *)0x0;
  local_70 = 0;
  FUN_144a5dc74(local_68);
  plVar5 = plStack_78;
  local_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_80 = *param_4;
  plVar3 = (longlong *)param_4[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 8) = *(int *)((longlong)plVar3 + 8) + 1;
    UNLOCK();
  }
  if (plStack_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      puVar4 = (undefined8 *)*plStack_78;
      plStack_78 = plVar3;
      (*(code *)*puVar4)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      plVar3 = plStack_78;
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        plVar3 = plStack_78;
      }
    }
  }
  plStack_78 = plVar3;
  local_70 = param_5;
  FUN_14133824c(local_68,param_1 + 0x330);
  (**(code **)(*DAT_14c968098 + 0x138))(DAT_14c968098,param_2,&local_90,param_1 + 0x630);
  FUN_140767b54(&local_90);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14698041e FUN_14698041e body=327 status=ok
// SIG undefined FUN_14698041e(void)

longlong * FUN_14698041e(longlong *param_1,longlong param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x10);
  bVar6 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_1469804a0:
    uVar11 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_1469804a0;
      LOCK();
      iVar7 = (int)plVar10[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    uVar11 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar6 = false;
  }
  *puVar5 = &PTR_LAB_149ef16e0;
  *(undefined1 *)(puVar5 + 1) = *param_4;
  uVar9 = FUN_144a3f946();
  puVar5[2] = uVar9;
  *puVar5 = &PTR_FUN_149ef1670;
  puVar5[3] = uVar11;
  puVar5[4] = plVar10;
  if (bVar6) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
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
  return param_1;
}



// FUNCTION 146980566 FUN_146980566 body=134 status=ok
// SIG undefined FUN_146980566(void)

undefined8 * FUN_146980566(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar3 = *param_1;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *param_2 = uVar3;
    plVar5 = (longlong *)param_2[1];
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 != 0) {
        return param_1;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      goto joined_r0x0001469805bd;
    }
    param_2[1] = plVar4;
    if (plVar5 == (longlong *)0x0) {
      return param_1;
    }
  }
  LOCK();
  plVar4 = plVar5 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 != 0) {
    return param_1;
  }
  (**(code **)*plVar5)(plVar5);
  LOCK();
  piVar1 = (int *)((longlong)plVar5 + 0xc);
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  UNLOCK();
  plVar4 = plVar5;
joined_r0x0001469805bd:
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return param_1;
}



// FUNCTION 1469805ec FUN_1469805ec body=58 status=ok
// SIG undefined FUN_1469805ec(void)

void FUN_1469805ec(longlong param_1)

{
  FUN_1407677d6(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0x1b0));
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 146980626 FUN_146980626 body=123 status=ok
// SIG undefined FUN_146980626(void)

bool FUN_146980626(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*DAT_14c968098 + 0x30))(DAT_14c968098,&local_30);
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
    return local_30 == param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469806a2 FUN_1469806a2 body=120 status=ok
// SIG undefined FUN_1469806a2(void)

ulonglong FUN_1469806a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 unaff_RDI;
  ulonglong uVar9;
  bool bVar10;
  
  plVar3 = *(longlong **)(param_1 + 0x5f8);
  if (plVar3 == (longlong *)0x0) {
LAB_1469806f3:
    uVar9 = 0;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_1469806f3;
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
    lVar4 = *(longlong *)(param_1 + 0x5f0);
    if (lVar4 == 0) {
      uVar9 = 0;
    }
    else {
      cVar6 = FUN_146980626(lVar4);
      uVar9 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (cVar6 == '\0') {
        uVar8 = FUN_1469806a2(lVar4);
        uVar9 = (ulonglong)uVar8;
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
  return uVar9 & 0xffffffff;
}



// FUNCTION 14698071a FUN_14698071a body=12 status=ok
// SIG undefined FUN_14698071a(void)

void FUN_14698071a(longlong param_1)

{
  FUN_14621428a(param_1 + 0x4ec);
  return;
}



// FUNCTION 146980726 FUN_146980726 body=96 status=ok
// SIG undefined FUN_146980726(void)

void FUN_146980726(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*(byte *)(param_1 + 0x369) & 2) == 0) {
    fVar2 = *(float *)(param_1 + 0x380);
    fVar4 = *(float *)(param_1 + 900);
    fVar1 = *(float *)(param_1 + 0x394) + fVar4;
    fVar3 = *(float *)(param_1 + 0x390) + fVar2;
  }
  else {
    fVar3 = *(float *)(param_1 + 0x390);
    fVar1 = *(float *)(param_1 + 0x394);
    fVar2 = 0.0;
    fVar4 = 0.0;
  }
  *param_2 = fVar2;
  param_2[1] = fVar4;
  param_2[2] = fVar3;
  param_2[3] = fVar1;
  return;
}



// FUNCTION 146980786 FUN_146980786 body=64 status=ok
// SIG undefined FUN_146980786(void)

void FUN_146980786(undefined8 param_1,float *param_2)

{
  FUN_146980ab8(param_2[3] - param_2[1],*(undefined8 *)param_2,
                CONCAT44(param_2[3] - param_2[1],param_2[2] - *param_2));
  return;
}



// FUNCTION 1469807c6 FUN_1469807c6 body=165 status=ok
// SIG undefined FUN_1469807c6(void)

void FUN_1469807c6(longlong param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  fVar3 = (float)param_2;
  fVar1 = (float)((ulonglong)param_2 >> 0x20);
  if (*(longlong *)(param_1 + 0x510) == 0) {
    *(float *)(param_1 + 0x370) = fVar3;
    *(float *)(param_1 + 0x374) = fVar1;
    return;
  }
  auVar6 = roundps(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1),3);
  auVar5 = roundps(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3),3);
  uVar4 = extractps(auVar5,0);
  lVar2 = extractps(auVar6,0);
  FUN_145a1ce82(param_1,uVar4 | lVar2 << 0x20);
                    /* WARNING: Could not recover jumptable at 0x000146980868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x510) + 0x18))
            (*(longlong **)(param_1 + 0x510),(int)fVar3,(int)fVar1);
  return;
}



// FUNCTION 14698086c FUN_14698086c body=44 status=ok
// SIG undefined FUN_14698086c(void)

void FUN_14698086c(longlong param_1,float param_2)

{
  if ((*(float *)(param_1 + 0x35c) == param_2) &&
     (!NAN(*(float *)(param_1 + 0x35c)) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 0x35c) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000146980894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x510) + 0x98))();
  return;
}



// FUNCTION 146980898 FUN_146980898 body=100 status=ok
// SIG undefined FUN_146980898(void)

float * FUN_146980898(longlong param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x380);
  fVar2 = (float)(**(code **)(*DAT_14c968098 + 0x58))();
  if (*(longlong **)(param_1 + 0x510) == (longlong *)0x0) {
    fVar3 = 1.0;
  }
  else {
    fVar3 = (float)(**(code **)(**(longlong **)(param_1 + 0x510) + 0xf8))();
  }
  *param_2 = fVar2 * fVar3;
  *(undefined8 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 1469808fc FUN_1469808fc body=95 status=ok
// SIG undefined FUN_1469808fc(void)

float * FUN_1469808fc(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(*DAT_14c968098 + 0x58))();
  if (*(longlong **)(param_1 + 0x510) == (longlong *)0x0) {
    fVar2 = 1.0;
  }
  else {
    fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x510) + 0xf8))();
  }
  *param_2 = fVar1 * fVar2;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  return param_2;
}



// FUNCTION 14698095c FUN_14698095c body=257 status=ok
// SIG undefined FUN_14698095c(void)

float * FUN_14698095c(longlong param_1,float *param_2)

{
  longlong *plVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_58 [32];
  int *local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  plVar1 = *(longlong **)(param_1 + 0x510);
  if (plVar1 != (longlong *)0x0) {
    local_38 = &local_28;
    cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,&local_1c,&local_20,&local_24);
    if (cVar2 != '\0') {
      fVar3 = (float)(local_28 + local_20);
      fVar4 = (float)(local_24 + local_1c);
      fVar6 = (float)local_20;
      fVar5 = (float)local_1c;
      goto LAB_146980a2a;
    }
  }
  if ((*(byte *)(param_1 + 0x369) & 2) == 0) {
    fVar5 = *(float *)(param_1 + 0x380);
    fVar6 = *(float *)(param_1 + 900);
    fVar3 = *(float *)(param_1 + 0x394) + fVar6;
    fVar4 = *(float *)(param_1 + 0x390) + fVar5;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x390);
    fVar3 = *(float *)(param_1 + 0x394);
    fVar5 = 0.0;
    fVar6 = 0.0;
  }
LAB_146980a2a:
  *param_2 = fVar5;
  param_2[1] = fVar6;
  param_2[2] = fVar4;
  param_2[3] = fVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146980a5e FUN_146980a5e body=90 status=ok
// SIG undefined FUN_146980a5e(void)

void FUN_146980a5e(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  fVar1 = *(float *)(param_1 + 0x398);
  lVar4 = param_1 + 0x390;
  if (fVar1 != 0.0) {
    lVar4 = param_1 + 0x398;
  }
  if (NAN(fVar1)) {
    lVar4 = param_1 + 0x398;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x390 + (ulonglong)(-(uint)(fVar1 != 0.0) & 1) * 8);
  uVar3 = *(undefined4 *)(lVar4 + 4);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  return;
}



// FUNCTION 146980ab8 FUN_146980ab8 body=478 status=ok
// SIG undefined FUN_146980ab8(void)

void FUN_146980ab8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)(int)(float)((ulonglong)param_2 >> 0x20);
  fVar5 = (float)(int)(float)param_2;
  fVar2 = (float)((ulonglong)param_3 >> 0x20) + -0.0001;
  fVar3 = (float)-((int)ROUND(-0.5 - (fVar2 + fVar2)) >> 1);
  fVar2 = (float)param_3 + -0.0001;
  fVar2 = (float)-((int)ROUND(-0.5 - (fVar2 + fVar2)) >> 1);
  if (((float)(int)*(float *)(param_1 + 900) == fVar4) &&
     (!NAN((float)(int)*(float *)(param_1 + 900)) && !NAN(fVar4))) {
    if (((float)(int)*(float *)(param_1 + 0x380) == fVar5) &&
       (!NAN((float)(int)*(float *)(param_1 + 0x380)) && !NAN(fVar5))) {
      fVar1 = *(float *)(param_1 + 0x390) + -0.0001;
      fVar1 = (float)-((int)ROUND(-0.5 - (fVar1 + fVar1)) >> 1);
      if ((((fVar1 == fVar2) && (!NAN(fVar1) && !NAN(fVar2))) &&
          (fVar1 = *(float *)(param_1 + 0x394) + -0.0001,
          fVar1 = (float)-((int)ROUND(-0.5 - (fVar1 + fVar1)) >> 1), fVar1 == fVar3)) &&
         (!NAN(fVar1) && !NAN(fVar3))) {
        return;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x510) == 0) {
    *(float *)(param_1 + 0x370) = fVar5;
    *(float *)(param_1 + 0x374) = fVar4;
    *(float *)(param_1 + 0x378) = fVar2;
    *(float *)(param_1 + 0x37c) = fVar3;
  }
  else {
    FUN_145a1ce82(param_1,CONCAT44(fVar4,fVar5));
    (**(code **)(**(longlong **)(param_1 + 0x510) + 8))
              (*(longlong **)(param_1 + 0x510),(int)fVar5,(int)fVar4,(int)fVar2,(int)fVar3);
  }
  FUN_1402bb070(param_1,CONCAT44(fVar3,fVar2));
  return;
}



// FUNCTION 146980c96 FUN_146980c96 body=107 status=ok
// SIG undefined FUN_146980c96(void)

void FUN_146980c96(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 0x450) = *(byte *)(param_1 + 0x450) & 0xfd;
  FUN_146980d02(param_1 + 0x3e0);
  *(undefined4 *)(param_1 + 0x3bc) = param_3;
  uVar1 = *param_4;
  *(undefined4 *)(param_1 + 0x3d8) = uVar1;
  *(undefined4 *)(param_1 + 0x3d0) = uVar1;
  uVar1 = param_4[1];
  *(undefined4 *)(param_1 + 0x3dc) = uVar1;
  *(undefined4 *)(param_1 + 0x3d4) = uVar1;
  FUN_146980dc0(param_1);
  return;
}



// FUNCTION 146980d02 FUN_146980d02 body=189 status=ok
// SIG undefined FUN_146980d02(void)

longlong FUN_146980d02(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar3 = *(longlong *)(param_2 + 0x18);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(longlong *)(param_1 + 0x18) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x28);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(longlong *)(param_1 + 0x28) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  lVar3 = *(longlong *)(param_2 + 0x38);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(longlong *)(param_1 + 0x38) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  FUN_146983906(param_1 + 0x40,param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x59);
  uVar6 = *(undefined8 *)(param_2 + 0x61);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(undefined8 *)(param_1 + 0x59) = uVar5;
  *(undefined8 *)(param_1 + 0x61) = uVar6;
  return param_1;
}



// FUNCTION 146980dc0 FUN_146980dc0 body=400 status=ok
// SIG undefined FUN_146980dc0(void)

void FUN_146980dc0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  code *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 0x3b8) = *(undefined4 *)(param_1 + 0x35c);
  *(float *)(param_1 + 0x3c0) = *(float *)(param_1 + 0x380);
  *(float *)(param_1 + 0x3c4) = *(float *)(param_1 + 900);
  *(float *)(param_1 + 0x3c8) = *(float *)(param_1 + 0x390) + *(float *)(param_1 + 0x380);
  *(float *)(param_1 + 0x3cc) = *(float *)(param_1 + 0x394) + *(float *)(param_1 + 900);
  *(byte *)(param_1 + 0x450) = *(byte *)(param_1 + 0x450) | 1;
  FUN_14692f5e4(param_1 + 0x3e0);
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 4;
  FUN_144a88240(param_1 + 0x18,param_1);
  if (((*(longlong *)(param_1 + 0x668) == 0) || (*(longlong *)(param_1 + 0x670) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x670) + 8) < 1)) {
    local_30 = FUN_1469810e4;
    local_28 = 0;
    FUN_146980faa(local_40,param_1);
    FUN_14697ef1e(param_1,&local_30,0,local_40);
    *(code **)(param_1 + 0x668) = local_30;
    plVar3 = (longlong *)CONCAT44(uStack_24,local_28);
    plVar2 = *(longlong **)(param_1 + 0x670);
    if (plVar2 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar2 = *(longlong **)(param_1 + 0x670);
      }
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      *(longlong **)(param_1 + 0x670) = plVar3;
      plVar3 = (longlong *)CONCAT44(uStack_24,local_28);
    }
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146980f52 FUN_146980f52 body=76 status=ok
// SIG undefined FUN_146980f52(void)

void FUN_146980f52(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x450) = *(byte *)(param_1 + 0x450) | 2;
  FUN_146980d02(param_1 + 0x3e0);
  *(undefined4 *)(param_1 + 0x3bc) = param_3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 0x3d0) = *param_4;
  *(undefined4 *)(param_1 + 0x3d4) = uVar1;
  *(undefined4 *)(param_1 + 0x3d8) = uVar2;
  *(undefined4 *)(param_1 + 0x3dc) = uVar3;
  FUN_146980dc0(param_1);
  return;
}



// FUNCTION 146980f9e FUN_146980f9e body=11 status=ok
// SIG undefined FUN_146980f9e(void)

void FUN_146980f9e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x3d0) = *param_2;
  *(undefined8 *)(param_1 + 0x3d8) = uVar1;
  return;
}



// FUNCTION 146980faa FUN_146980faa body=313 status=ok
// SIG undefined FUN_146980faa(void)

longlong * FUN_146980faa(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1469810a6:
    *puVar5 = &PTR_LAB_149ed0600;
    uVar10 = FUN_144a3f946();
    puVar5[2] = uVar10;
    *puVar5 = &PTR_FUN_149ef1a00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_1469810a6;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    uVar10 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149ed0600;
    uVar9 = FUN_144a3f946();
    puVar5[2] = uVar9;
    *puVar5 = &PTR_FUN_149ef1a00;
    puVar5[3] = uVar10;
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



// FUNCTION 1469810e4 FUN_1469810e4 body=178 status=ok
// SIG undefined FUN_1469810e4(void)

undefined8 FUN_1469810e4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(longlong **)(param_1 + 0x10);
  if (local_18 == (longlong *)0x0) {
    local_18 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    iVar5 = (int)local_18[1];
    local_20 = 0;
    do {
      if (iVar5 == 0) {
        local_18 = (longlong *)0x0;
        goto LAB_14698112e;
      }
      LOCK();
      iVar4 = (int)local_18[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(local_18 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_20 = *(undefined8 *)(param_1 + 8);
  }
LAB_14698112e:
  local_28 = 1;
  FUN_14692f220(param_1 + 0x3e0,&local_20,0,0);
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
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 146981198 FUN_146981198 body=45 status=ok
// SIG undefined FUN_146981198(void)

longlong * FUN_146981198(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x208))();
  plVar3 = (longlong *)0x0;
  if (cVar1 != '\0') {
    plVar3 = param_1;
  }
  plVar2 = plVar3 + 0x4d;
  if (plVar3 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  return plVar2;
}



// FUNCTION 1469811c6 FUN_1469811c6 body=95 status=ok
// SIG undefined FUN_1469811c6(void)

longlong * FUN_1469811c6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x330);
  *param_2 = (longlong)plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x338);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 0x340);
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_1413a4324(param_2 + 3,param_1 + 0x348);
  return param_2;
}



// FUNCTION 146981226 FUN_146981226 body=14 status=ok
// SIG undefined FUN_146981226(void)

undefined8 * FUN_146981226(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x3d8);
  *param_2 = *(undefined8 *)(param_1 + 0x3d0);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 146981234 FUN_146981234 body=19 status=ok
// SIG undefined FUN_146981234(void)

void FUN_146981234(longlong param_1)

{
  if (*(undefined8 **)(param_1 + 0x630) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146981243. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined8 **)(param_1 + 0x630))();
    return;
  }
  return;
}



// FUNCTION 146981248 FUN_146981248 body=23 status=ok
// SIG undefined FUN_146981248(void)

void FUN_146981248(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x510) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014698125b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x510) + 0x20))();
    return;
  }
  return;
}



// FUNCTION 146981260 FUN_146981260 body=280 status=ok
// SIG undefined FUN_146981260(void)

ulonglong FUN_146981260(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  plVar6 = *(longlong **)(param_1 + 0x5f8);
  if (plVar6 == (longlong *)0x0) {
LAB_146981342:
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar6[1];
    do {
      if (iVar5 == 0) goto LAB_146981342;
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    lVar9 = *(longlong *)(param_1 + 0x5f0);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar9 != 0);
    if ((lVar9 != 0) && (lVar9 != *param_2)) {
      do {
        plVar8 = *(longlong **)(lVar9 + 0x5f8);
        if (plVar8 == (longlong *)0x0) {
LAB_1469812d5:
          plVar8 = (longlong *)0x0;
          lVar9 = 0;
        }
        else {
          iVar5 = (int)plVar8[1];
          do {
            if (iVar5 == 0) goto LAB_1469812d5;
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
          lVar9 = *(longlong *)(lVar9 + 0x5f0);
        }
        if (plVar8 == plVar6) {
          if (plVar6 == (longlong *)0x0) {
            plVar3 = (longlong *)0x0;
          }
          else {
            LOCK();
            plVar2 = plVar8 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            plVar3 = plVar6;
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar5 = *piVar1;
              UNLOCK();
              plVar6 = plVar8;
              goto joined_r0x00014698131a;
            }
          }
        }
        else {
          plVar3 = plVar8;
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
              iVar5 = *piVar1;
              UNLOCK();
joined_r0x00014698131a:
              if (iVar5 == 0) {
                (**(code **)(*plVar6 + 0x10))();
              }
            }
          }
        }
        plVar6 = plVar3;
        uVar7 = CONCAT71((int7)(uVar7 >> 8),lVar9 != 0);
      } while ((lVar9 != 0) && (lVar9 != *param_2));
    }
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
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 146981378 FUN_146981378 body=528 status=ok
// SIG undefined FUN_146981378(void)

longlong * FUN_146981378(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *plStack_50;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x5c0);
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  lVar5 = FUN_14001cc68(0x58,0x10);
  local_38 = *(longlong *)(param_1 + 0x5c8);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  local_40 = lVar2;
  if (plVar6 == (longlong *)0x0) {
LAB_14698140c:
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    do {
      if (iVar4 == 0) goto LAB_14698140c;
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
    local_58 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    plStack_50 = plVar6;
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
  FUN_14697fc8a(lVar5,&local_58,param_3,&local_40);
  *param_2 = lVar5;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149ef1a70;
  plVar6[2] = lVar5;
  param_2[1] = (longlong)plVar6;
  if ((lVar5 == 0) ||
     (((*(longlong *)(lVar5 + 8) != 0 && (*(longlong *)(lVar5 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar5 + 0x10) + 8))))) goto LAB_146981555;
  if (plVar6 == (longlong *)0x0) {
    *(longlong *)(lVar5 + 8) = lVar5;
    plVar7 = *(longlong **)(lVar5 + 0x10);
    if (plVar7 == (longlong *)0x0) goto LAB_146981555;
LAB_1469814b0:
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    *(longlong **)(lVar5 + 0x10) = plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_146981555;
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
      if (plVar7 != (longlong *)0x0) goto LAB_1469814b0;
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
LAB_146981555:
  plVar6 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_50 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 14698158e FUN_14698158e body=369 status=ok
// SIG undefined FUN_14698158e(void)

void FUN_14698158e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(int *)(param_1 + 0x5b8) == 0) || (*(longlong **)(param_1 + 0x5b0) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x5b0) + 0x30))(), cVar5 == '\0')) {
    plVar1 = DAT_14c968098;
    plVar7 = *(longlong **)(param_1 + 0x10);
    if (plVar7 == (longlong *)0x0) {
LAB_146981676:
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar7[1];
      do {
        if (iVar6 == 0) goto LAB_146981676;
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar8 = iVar6 == iVar4;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar8);
      local_48 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      plStack_40 = plVar7;
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
    (**(code **)(*plVar1 + 0x140))(plVar1,&local_48);
  }
  else {
    plVar7 = *(longlong **)(param_1 + 0x10);
    if (plVar7 == (longlong *)0x0) {
LAB_1469816ae:
      local_38 = 0;
      plStack_30 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar7[1];
      do {
        if (iVar6 == 0) goto LAB_1469816ae;
        LOCK();
        iVar4 = (int)plVar7[1];
        bVar8 = iVar6 == iVar4;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar8);
      local_38 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_30 = plVar7;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)();
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
    }
    if (*(int *)(param_1 + 0x5b8) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x5b0);
    }
    (**(code **)(*plVar7 + 0x58))(plVar7,&local_38);
    plVar7 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146981700 thunk_FUN_1616686ea body=5 status=ok
// SIG undefined thunk_FUN_1616686ea(void)

void thunk_FUN_1616686ea(void)

{
  FUN_161668703();
  return;
}



// FUNCTION 14698192c FUN_14698192c body=32 status=ok
// SIG undefined FUN_14698192c(void)

undefined8 * FUN_14698192c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_14c84635c;
  if ((*(byte *)(param_1 + 0x31) & 0x20) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x168);
  }
  *param_2 = *puVar1;
  return param_2;
}



// FUNCTION 14698194c FUN_14698194c body=12 status=ok
// SIG undefined FUN_14698194c(void)

byte FUN_14698194c(longlong param_1)

{
  return (*(byte *)(param_1 + 0x368) & 4) >> 2;
}



// FUNCTION 14698196c FUN_14698196c body=91 status=ok
// SIG undefined FUN_14698196c(void)

void FUN_14698196c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x510) + 0xa0))();
  if (0 < *(int *)(param_1 + 0x608)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_14698196c(*(undefined8 *)(*(longlong *)(param_1 + 0x600) + lVar1),param_2);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 < *(int *)(param_1 + 0x608));
  }
  return;
}



// FUNCTION 1469819c8 FUN_1469819c8 body=22 status=ok
// SIG undefined FUN_1469819c8(void)

undefined8 FUN_1469819c8(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x510) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469819d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x70))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1469819de FUN_1469819de body=566 status=ok
// SIG undefined FUN_1469819de(void)

undefined8 * FUN_1469819de(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = (longlong *)FUN_14142e2d2(param_1 + 0x308);
  local_a8 = (longlong *)*plVar3;
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 8))();
  }
  local_a0 = (undefined4)plVar3[1];
  local_58 = L"Window_TitleFmt";
  local_50 = 0xf;
  FUN_1446e940c(local_cc,&local_58);
  local_58 = L"SWindow";
  local_50 = 7;
  FUN_1446e940c(local_d0,&local_58);
  FUN_140208bae(local_c8,local_d0,local_cc,L" Window : {0} ");
  FUN_14023409e(&local_b8,local_c8,1);
  local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(local_48,&local_a8);
  local_70 = &local_38;
  local_78 = &local_58;
  FUN_14010d304(&local_68);
  local_88 = local_b8;
  local_80 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_98,&local_88,&local_68);
  FUN_14007f2db(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_b0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar1 = (int *)((longlong)local_b0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
      }
    }
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
  }
  puVar4 = (undefined8 *)FUN_1447a1f4a(local_98);
  *param_2 = 0;
  iVar2 = *(int *)(puVar4 + 1);
  _Src = (void *)*puVar4;
  *(int *)(param_2 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar2,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar2 * 2);
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146981c16 FUN_146981c16 body=7 status=ok
// SIG undefined FUN_146981c16(void)

void FUN_146981c16(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x360) = param_2;
  return;
}



// FUNCTION 146981c1e FUN_146981c1e body=20 status=ok
// SIG undefined FUN_146981c1e(void)

void FUN_146981c1e(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x510) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146981c2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x510) + 0x40))();
    return;
  }
  return;
}



// FUNCTION 146981c32 FUN_146981c32 body=20 status=ok
// SIG undefined FUN_146981c32(void)

void FUN_146981c32(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x510) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146981c41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x510) + 0x48))();
    return;
  }
  return;
}



// FUNCTION 146981c46 FUN_146981c46 body=20 status=ok
// SIG undefined FUN_146981c46(void)

void FUN_146981c46(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x510) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146981c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x510) + 0x38))();
    return;
  }
  return;
}



// FUNCTION 146981c5a FUN_146981c5a body=69 status=ok
// SIG undefined FUN_146981c5a(void)

undefined1 * FUN_146981c5a(undefined8 param_1,undefined1 *param_2)

{
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 146981ca0 FUN_146981ca0 body=480 status=ok
// SIG undefined FUN_146981ca0(void)

undefined1 * FUN_146981ca0(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *plStack_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_e8;
  undefined1 local_e0 [136];
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1 + 0x358) == '\x01') {
    lVar3 = *(longlong *)(param_4 + 0x40);
    plVar4 = *(longlong **)(param_4 + 0x50);
    lVar5 = DAT_14c966e98;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      lVar5 = DAT_14c966e98;
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
    if (lVar3 == lVar5) {
      *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x458);
      local_108[0] = 1;
      local_e8 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      memset(local_e0,0,0x88);
      local_58 = 0x20702;
      local_54 = 0;
      plVar4 = *(longlong **)(param_1 + 0x10);
      if (plVar4 == (longlong *)0x0) {
LAB_146981e2e:
        local_118 = 0;
        plStack_110 = (longlong *)0x0;
        bVar9 = true;
      }
      else {
        iVar7 = (int)plVar4[1];
        do {
          if (iVar7 == 0) goto LAB_146981e2e;
          LOCK();
          iVar6 = (int)plVar4[1];
          bVar9 = iVar7 == iVar6;
          if (bVar9) {
            *(int *)(plVar4 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar9);
        uVar8 = *(undefined8 *)(param_1 + 8);
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
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        bVar9 = false;
        local_118 = uVar8;
        plStack_110 = plVar4;
      }
      plVar4 = plStack_110;
      uVar8 = FUN_140592a6e(local_108,&local_118);
      FUN_1403d4c6e(param_2,uVar8);
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
      FUN_14493db24(local_108);
      goto LAB_146981df9;
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146981df9:
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146981e82 FUN_146981e82 body=340 status=ok
// SIG undefined FUN_146981e82(void)

undefined1 * FUN_146981e82(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(char *)(param_1 + 0x358) == '\x01') && (cVar6 = FUN_140591fd6(), cVar6 != '\0')) {
    lVar3 = *(longlong *)(param_4 + 0x40);
    plVar4 = *(longlong **)(param_4 + 0x50);
    lVar5 = DAT_14c966e98;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      lVar5 = DAT_14c966e98;
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
    if (lVar3 == lVar5) {
      *(undefined4 *)(param_1 + 0x2e8) = 0;
      local_f8[0] = 1;
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      local_c0 = 0;
      uStack_b8 = 0;
      local_44 = 1;
      FUN_1403d4c6e(param_2,local_f8);
      FUN_14493db24(local_f8);
      goto LAB_146981fa3;
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_146981fa3:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146981fd8 FUN_146981fd8 body=8 status=ok
// SIG undefined FUN_146981fd8(void)

longlong FUN_146981fd8(longlong param_1)

{
  return param_1 + 0x600;
}



// FUNCTION 146981fe0 FUN_146981fe0 body=448 status=ok
// SIG undefined FUN_146981fe0(void)

void FUN_146981fe0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_2;
  plVar8 = *(longlong **)(lVar2 + 0x5f8);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_14698203c:
    plVar8 = (longlong *)0x0;
    bVar11 = true;
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_14698203c;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar5 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar11);
    lVar2 = *(longlong *)(lVar2 + 0x5f0);
    if (lVar2 != 0) {
      FUN_1469821a2(lVar2,param_2);
    }
    bVar11 = false;
  }
  plVar10 = *(longlong **)(param_1 + 0x10);
  if (plVar10 == (longlong *)0x0) {
LAB_146982090:
    uVar9 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar10[1];
    do {
      if (iVar5 == 0) goto LAB_146982090;
      LOCK();
      iVar4 = (int)plVar10[1];
      bVar12 = iVar5 == iVar4;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar12);
    uVar9 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar10 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    bVar3 = false;
  }
  lVar2 = *param_2;
  *(undefined8 *)(lVar2 + 0x5f0) = uVar9;
  plVar7 = *(longlong **)(lVar2 + 0x5f8);
  if (plVar7 != plVar10) {
    if (!bVar3) {
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(lVar2 + 0x5f8);
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    *(longlong **)(lVar2 + 0x5f8) = plVar10;
  }
  if (!bVar3) {
    LOCK();
    plVar7 = plVar10 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x498) + 0x1530;
  lVar2 = *param_2;
  *(longlong *)(lVar2 + 0x4a0) = lVar6;
  if (*(longlong *)(lVar2 + 0x4a8) != 0) {
    local_60 = 1;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = lVar6;
    FUN_145767ef4();
  }
  (**(code **)(*DAT_14c968098 + 0x18))(DAT_14c968098,param_1 + 0x600,param_2);
  if (!bVar11) {
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469821a2 FUN_1469821a2 body=134 status=ok
// SIG undefined FUN_1469821a2(void)

void FUN_1469821a2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  FUN_14112e7e4(param_1 + 0x600);
  if (0 < *(int *)(param_1 + 0x608)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_1469821a2(*(undefined8 *)(*(longlong *)(param_1 + 0x600) + lVar1),param_2);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 < *(int *)(param_1 + 0x608));
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14698222a FUN_14698222a body=1369 status=ok
// SIG undefined FUN_14698222a(void)

int FUN_14698222a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  byte bVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_268 [32];
  undefined1 local_248;
  undefined4 local_240;
  undefined8 local_230;
  undefined8 local_228;
  longlong *plStack_220;
  undefined1 local_210 [8];
  undefined1 local_208 [288];
  undefined1 *local_e8;
  int local_e0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x68))();
  bVar14 = 1;
  bVar15 = true;
  if (iVar4 != 1) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x68))();
    bVar15 = iVar4 == 0;
  }
  if (*(int *)(param_1 + 0x304) == 5) {
    bVar14 = *(byte *)(param_1 + 0x369);
  }
  fVar17 = (float)(**(code **)(*DAT_14c968098 + 0x58))();
  if (*(longlong **)(param_1 + 0x510) == (longlong *)0x0) {
    fVar18 = 1.0;
  }
  else {
    fVar18 = (float)(**(code **)(**(longlong **)(param_1 + 0x510) + 0xf8))();
  }
  fVar17 = fVar17 * fVar18;
  fVar19 = *(float *)(param_1 + 0x65c) * fVar17;
  fVar20 = *(float *)(param_1 + 0x658) * fVar17;
  fVar18 = *(float *)(param_1 + 0x654) * fVar17;
  fVar21 = *(float *)(param_1 + 0x650) * fVar17;
  plVar13 = *(longlong **)(DAT_14c968088 + 8);
  plVar2 = *(longlong **)(DAT_14c968088 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  iVar4 = (**(code **)(*plVar13 + 0x38))();
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar2 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  iVar11 = 5;
  iVar12 = iVar11;
  if (((bVar15 & bVar14) != 0) || (iVar4 == 0)) goto LAB_14698239a;
  fVar8 = (float)param_2;
  if ((fVar8 < 0.0) ||
     (((*(float *)(param_1 + 0x390) <= fVar8 ||
       (fVar9 = (float)((ulonglong)param_2 >> 0x20), fVar9 < 0.0)) ||
      (*(float *)(param_1 + 0x394) <= fVar9)))) {
    *(undefined4 *)(param_1 + 0x458) = 0;
    iVar12 = 0;
    goto LAB_14698239a;
  }
  lVar10 = 1;
  if (bVar15 == false && *(char *)(param_1 + 0x360) == '\x02') {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x70))();
    lVar6 = 1;
    if (cVar3 == '\0') {
      if (fVar21 + 5.0 <= fVar8) {
        lVar10 = 1;
        if (*(float *)(param_1 + 0x390) - (fVar20 + 5.0) <= fVar8) {
          lVar10 = 2;
        }
      }
      else {
        lVar10 = 0;
      }
      if (fVar18 + 5.0 <= fVar9) {
        if (*(float *)(param_1 + 0x394) - (fVar19 + 5.0) <= fVar9) {
          lVar6 = 2;
        }
      }
      else {
        lVar6 = 0;
      }
      if (((fVar21 <= fVar8) && (fVar8 < *(float *)(param_1 + 0x390) - fVar20)) &&
         ((fVar18 <= fVar9 && (fVar9 < *(float *)(param_1 + 0x394) - fVar19)))) {
        lVar10 = 1;
        lVar6 = 1;
      }
    }
  }
  else {
    lVar6 = 1;
  }
  iVar12 = (&DAT_149ef0ff0)[lVar6 * 3 + lVar10];
  if (iVar12 != 5) {
    cVar3 = (**(code **)(*DAT_14c968098 + 0xc0))();
    if (cVar3 == '\0') {
      *(int *)(param_1 + 0x458) = iVar12;
    }
    else {
      *(undefined4 *)(param_1 + 0x458) = 5;
      iVar12 = iVar11;
    }
    goto LAB_14698239a;
  }
  uVar5 = FUN_14692f99e(DAT_14c968098);
  plVar13 = *(longlong **)(param_1 + 0x10);
  if (plVar13 == (longlong *)0x0) {
LAB_1469825af:
    local_228 = 0;
    plStack_220 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar13[1];
    do {
      if (iVar4 == 0) goto LAB_1469825af;
      LOCK();
      iVar12 = (int)plVar13[1];
      bVar15 = iVar4 == iVar12;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar4 + 1;
        iVar12 = iVar4;
      }
      iVar4 = iVar12;
      UNLOCK();
    } while (!bVar15);
    local_228 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar13 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    plStack_220 = plVar13;
    if ((int)*plVar2 == 0) {
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
  (**(code **)(*DAT_14c968098 + 0x68))(DAT_14c968098,&local_230);
  local_240 = 0xffffffff;
  local_248 = 0;
  FUN_14692f96c(uVar5,local_210,local_230,&local_228);
  plVar13 = plStack_220;
  if (plStack_220 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_220 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_220)(plStack_220);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if ((longlong)local_e0 < 1) {
LAB_14698273e:
    iVar4 = 5;
  }
  else {
    puVar7 = local_e8;
    if (local_e8 == (undefined1 *)0x0) {
      puVar7 = local_208;
    }
    iVar4 = (**(code **)(**(longlong **)(puVar7 + (longlong)local_e0 * 0x48 + -0x10) + 0x148))();
    if (iVar4 == 0) {
      plVar13 = *(longlong **)(param_1 + 0x10);
      bVar15 = true;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
        lVar10 = 0;
      }
      else {
        iVar4 = (int)plVar13[1];
        lVar10 = 0;
        do {
          if (iVar4 == 0) {
            plVar13 = (longlong *)0x0;
            goto LAB_1469826f5;
          }
          LOCK();
          iVar12 = (int)plVar13[1];
          bVar16 = iVar4 == iVar12;
          if (bVar16) {
            *(int *)(plVar13 + 1) = iVar4 + 1;
            iVar12 = iVar4;
          }
          iVar4 = iVar12;
          UNLOCK();
        } while (!bVar16);
        lVar10 = *(longlong *)(param_1 + 8);
        bVar15 = false;
      }
LAB_1469826f5:
      puVar7 = local_208;
      if (local_e8 != (undefined1 *)0x0) {
        puVar7 = local_e8;
      }
      lVar6 = *(longlong *)(puVar7 + (longlong)(local_e0 + -1) * 0x48 + 0x38);
      if (!bVar15) {
        LOCK();
        plVar2 = plVar13 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      if (lVar6 != lVar10) goto LAB_14698273e;
      iVar4 = 5;
      if (fVar9 - fVar18 < fVar17 * *(float *)(param_1 + 0x3b4)) {
        iVar4 = 10;
      }
    }
  }
  *(int *)(param_1 + 0x458) = iVar4;
  FUN_1447fa21a(local_210);
  iVar12 = *(int *)(param_1 + 0x458);
LAB_14698239a:
  if ((local_b0 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return iVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146982784 FUN_146982784 body=651 status=ok
// SIG undefined FUN_146982784(void)

void FUN_146982784(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  float *pfVar9;
  longlong lVar10;
  float fVar11;
  float *pfVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_c8 [40];
  undefined1 local_a0;
  undefined1 local_9f;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar6 = (**(code **)(**(longlong **)(param_1 + 0x510) + 0x68))();
  if (uVar6 != param_2) {
    lpCriticalSection =
         (LPCRITICAL_SECTION)(**(code **)(**(longlong **)(DAT_14c968098 + 0x20) + 0x160))();
    EnterCriticalSection(lpCriticalSection);
    if (param_2 != 2) {
      *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x380);
    }
    *(undefined1 *)(param_1 + 0x660) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x510) + 0x60))(*(longlong **)(param_1 + 0x510),param_2);
    if (*(char *)(param_1 + 0x369) < '\0') {
      pfVar9 = (float *)(param_1 + 0x390);
      pfVar12 = (float *)(param_1 + 0x394);
    }
    else {
      pfVar9 = (float *)(param_1 + 0x390);
      if (*(float *)(param_1 + 0x398) != 0.0) {
        pfVar9 = (float *)(param_1 + 0x398);
      }
      if (NAN(*(float *)(param_1 + 0x398))) {
        pfVar9 = (float *)(param_1 + 0x398);
      }
      pfVar12 = pfVar9 + 1;
    }
    fVar8 = *pfVar12;
    fVar11 = *pfVar9;
    plVar3 = *(longlong **)(DAT_14c968098 + 0x20);
    plVar4 = *(longlong **)(param_1 + 0x10);
    if (plVar4 == (longlong *)0x0) {
LAB_146982915:
      local_88 = 0;
      plStack_80 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar4[1];
      do {
        if (iVar7 == 0) goto LAB_146982915;
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar15 = iVar7 == iVar5;
        if (bVar15) {
          *(int *)(plVar4 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar15);
      local_88 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_80 = plVar4;
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
    (**(code **)(*plVar3 + 0x40))
              (plVar3,&local_88,(longlong)fVar11 & 0xffffffff,(longlong)fVar8 & 0xffffffff);
    if (*(longlong **)(param_1 + 0x460) != (longlong *)0x0) {
      puVar13 = &DAT_14c96b238;
      if (param_2 < 2) {
        puVar13 = &DAT_14c96b1e1;
      }
      local_a0 = *puVar13;
      local_9f = 1;
      local_98 = 0;
      uStack_90 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x460) + 0x1c0))();
    }
    if (uVar6 != 2) {
      fVar8 = (float)*(undefined8 *)(param_1 + 0x388);
      fVar11 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x388) >> 0x20);
      if (*(longlong *)(param_1 + 0x510) == 0) {
        *(float *)(param_1 + 0x370) = fVar8;
        *(float *)(param_1 + 0x374) = fVar11;
      }
      else {
        auVar17 = roundps(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),3);
        auVar16 = roundps(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8),3);
        uVar14 = extractps(auVar16,0);
        lVar10 = extractps(auVar17,0);
        FUN_145a1ce82(param_1,uVar14 | lVar10 << 0x20);
        (**(code **)(**(longlong **)(param_1 + 0x510) + 0x18))
                  (*(longlong **)(param_1 + 0x510),(int)fVar8,(int)fVar11);
      }
    }
    *(undefined1 *)(param_1 + 0x660) = 1;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146982a10 FUN_146982a10 body=461 status=ok
// SIG undefined FUN_146982a10(void)

longlong * FUN_146982a10(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_146982a4e:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_146982a4e;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    local_48 = uVar3;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_146982be0(lVar6,&local_48);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_146982b8a;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_146982b8a;
LAB_146982aed:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_146982b8a;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong *)(lVar6 + 8) = lVar6;
    if (*(longlong **)(lVar6 + 0x10) != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x10);
      if (plVar8 != (longlong *)0x0) goto LAB_146982aed;
      *(longlong **)(lVar6 + 0x10) = plVar7;
    }
  }
  LOCK();
  plVar8 = plVar7 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_146982b8a:
  if (!bVar9) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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



// FUNCTION 146982be0 FUN_146982be0 body=143 status=ok
// SIG undefined FUN_146982be0(void)

undefined8 * FUN_146982be0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_14697595a(param_1,&local_28,0xb);
  *param_1 = &PTR_FUN_149ef12f0;
  param_1[0xd] = &PTR_FUN_149ef13e0;
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



// FUNCTION 146982c70 FUN_146982c70 body=126 status=ok
// SIG undefined FUN_146982c70(void)

undefined8 FUN_146982c70(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_14142e2d2(param_1 + 0x308);
  local_28 = (longlong *)*plVar1;
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 8))();
  }
  local_20 = (undefined4)plVar1[1];
  FUN_14023423e(param_2,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146982cf2 FUN_146982cf2 body=38 status=ok
// SIG undefined FUN_146982cf2(void)

undefined8 FUN_146982cf2(undefined8 param_1,int param_2)

{
  FUN_14698620e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146982d50 FUN_146982d50 body=38 status=ok
// SIG undefined FUN_146982d50(void)

undefined8 FUN_146982d50(undefined8 param_1,int param_2)

{
  FUN_1402bbc34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146982d76 FUN_146982d76 body=156 status=ok
// SIG undefined FUN_146982d76(void)

bool FUN_146982d76(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_146982e14(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146982e14 FUN_146982e14 body=161 status=ok
// SIG undefined FUN_146982e14(void)

void FUN_146982e14(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)FUN_14001cc68(0x20,0x10);
  *local_28 = (longlong)&PTR_FUN_149ef1c10;
  local_28[1] = *param_3;
  *param_3 = 0;
  *(int *)(local_28 + 2) = (int)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  local_28[3] = param_1;
  FUN_140eee99e(param_2,param_1,0,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146982eb6 FUN_146982eb6 body=89 status=ok
// SIG undefined FUN_146982eb6(void)

undefined1 * FUN_146982eb6(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 8);
      }
      cVar1 = (**(code **)(*plVar3 + 0x58))();
      if (**(char **)(param_1 + 0x18) != cVar1) {
        **(char **)(param_1 + 0x18) = cVar1;
        uVar2 = 1;
        goto LAB_146982ef5;
      }
    }
  }
  uVar2 = 0;
LAB_146982ef5:
  *param_2 = 0;
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 146982f1c FUN_146982f1c body=50 status=ok
// SIG undefined FUN_146982f1c(void)

undefined8 * FUN_146982f1c(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 146982f4e FUN_146982f4e body=42 status=ok
// SIG undefined FUN_146982f4e(void)

longlong FUN_146982f4e(longlong param_1,int param_2)

{
  FUN_1449db362(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146982f78 thunk_FUN_1449db362 body=5 status=ok
// SIG undefined thunk_FUN_1449db362(void)

void thunk_FUN_1449db362(void)

{
  FUN_1449db362();
  return;
}



// FUNCTION 146982f7e FUN_146982f7e body=156 status=ok
// SIG undefined FUN_146982f7e(void)

bool FUN_146982f7e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_14698301c(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14698301c FUN_14698301c body=161 status=ok
// SIG undefined FUN_14698301c(void)

void FUN_14698301c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)FUN_14001cc68(0x20,0x10);
  *local_28 = (longlong)&PTR_FUN_149ef1bc0;
  local_28[1] = *param_3;
  *param_3 = 0;
  *(int *)(local_28 + 2) = (int)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  local_28[3] = param_1;
  FUN_140eee99e(param_2,param_1,0,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469830be FUN_1469830be body=349 status=ok
// SIG undefined FUN_1469830be(void)

undefined2 * FUN_1469830be(longlong param_1,undefined2 *param_2)

{
  byte bVar1;
  float *pfVar2;
  char cVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [44];
  float local_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  byte local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,&local_3c);
      pfVar2 = *(float **)(param_1 + 0x18);
      bVar1 = *(byte *)(pfVar2 + 6);
      if ((bVar1 == local_24 & bVar1) == 1) {
        if ((((ABS(*pfVar2 - local_3c) <= 0.0001) && (ABS(pfVar2[1] - fStack_38) <= 0.0001)) &&
            (ABS(pfVar2[2] - fStack_34) <= 0.0001)) && (ABS(pfVar2[3] - fStack_30) <= 0.0001)) {
          if ((pfVar2[4] == local_2c) && (!NAN(pfVar2[4]) && !NAN(local_2c))) {
            if ((pfVar2[5] == fStack_28) && (!NAN(pfVar2[5]) && !NAN(fStack_28)))
            goto LAB_1469831bb;
          }
        }
      }
      else if (bVar1 == local_24) goto LAB_1469831bb;
      if (&local_3c != pfVar2) {
        if (local_24 == 0) {
          if ((bVar1 & 1) == 0) goto LAB_146983205;
          uVar4 = 0;
        }
        else {
          *(ulonglong *)(pfVar2 + 4) = CONCAT44(fStack_28,local_2c);
          *pfVar2 = local_3c;
          pfVar2[1] = fStack_38;
          pfVar2[2] = fStack_34;
          pfVar2[3] = fStack_30;
          uVar4 = 1;
        }
        *(undefined1 *)(pfVar2 + 6) = uVar4;
      }
LAB_146983205:
      *param_2 = 0x100;
      goto LAB_1469831c0;
    }
  }
LAB_1469831bb:
  *param_2 = 0;
LAB_1469831c0:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146983228 FUN_146983228 body=50 status=ok
// SIG undefined FUN_146983228(void)

undefined8 * FUN_146983228(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14698325a FUN_14698325a body=42 status=ok
// SIG undefined FUN_14698325a(void)

longlong FUN_14698325a(longlong param_1,int param_2)

{
  FUN_1449db362(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146983284 FUN_146983284 body=100 status=ok
// SIG undefined FUN_146983284(void)

bool FUN_146983284(float *param_1,float *param_2)

{
  bool bVar1;
  
  if (((0.0001 < ABS(*param_1 - *param_2)) || (0.0001 < ABS(param_1[1] - param_2[1]))) ||
     (0.0001 < ABS(param_1[2] - param_2[2]))) {
    bVar1 = false;
  }
  else {
    bVar1 = ABS(param_1[3] - param_2[3]) <= 0.0001;
  }
  return bVar1;
}



// FUNCTION 1469832e8 thunk_FUN_1449db362 body=5 status=ok
// SIG undefined thunk_FUN_1449db362(void)

void thunk_FUN_1449db362(void)

{
  FUN_1449db362();
  return;
}



// FUNCTION 1469832ee FUN_1469832ee body=156 status=ok
// SIG undefined FUN_1469832ee(void)

bool FUN_1469832ee(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_14698338c(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14698338c FUN_14698338c body=161 status=ok
// SIG undefined FUN_14698338c(void)

void FUN_14698338c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)FUN_14001cc68(0x20,0x10);
  *local_28 = (longlong)&PTR_FUN_149ef1b90;
  local_28[1] = *param_3;
  *param_3 = 0;
  *(int *)(local_28 + 2) = (int)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  local_28[3] = param_1;
  FUN_140eee99e(param_2,param_1,0,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14698342e FUN_14698342e body=167 status=ok
// SIG undefined FUN_14698342e(void)

undefined2 * FUN_14698342e(longlong param_1,undefined2 *param_2)

{
  double *pdVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  double local_30;
  double dStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_30);
      pdVar1 = *(double **)(param_1 + 0x18);
      if ((*pdVar1 == local_30) && (!NAN(*pdVar1) && !NAN(local_30))) {
        if ((pdVar1[1] == dStack_28) && (!NAN(pdVar1[1]) && !NAN(dStack_28))) goto LAB_14698349a;
      }
      *pdVar1 = local_30;
      pdVar1[1] = dStack_28;
      *param_2 = 0x100;
      goto LAB_14698349f;
    }
  }
LAB_14698349a:
  *param_2 = 0;
LAB_14698349f:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469834e2 FUN_1469834e2 body=50 status=ok
// SIG undefined FUN_1469834e2(void)

undefined8 * FUN_1469834e2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 146983514 FUN_146983514 body=42 status=ok
// SIG undefined FUN_146983514(void)

longlong FUN_146983514(longlong param_1,int param_2)

{
  FUN_1449db362(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698353e thunk_FUN_1449db362 body=5 status=ok
// SIG undefined thunk_FUN_1449db362(void)

void thunk_FUN_1449db362(void)

{
  FUN_1449db362();
  return;
}



// FUNCTION 146983544 FUN_146983544 body=54 status=ok
// SIG undefined FUN_146983544(void)

void FUN_146983544(longlong *param_1)

{
  FUN_14698357a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14698357a FUN_14698357a body=350 status=ok
// SIG undefined FUN_14698357a(void)

void FUN_14698357a(longlong *param_1,int param_2)

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
      FUN_1469836da((longlong)iStack_54 * 0x60 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1448fc38a(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
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



// FUNCTION 1469836da FUN_1469836da body=100 status=ok
// SIG undefined FUN_1469836da(void)

void FUN_1469836da(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x000146983732. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14698373e FUN_14698373e body=130 status=ok
// SIG undefined FUN_14698373e(void)

void FUN_14698373e(longlong *param_1,longlong *param_2)

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



// FUNCTION 1469837c4 FUN_1469837c4 body=80 status=ok
// SIG undefined FUN_1469837c4(void)

int FUN_1469837c4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + -0x18) + 0x18))();
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      lVar2 = (**(code **)(**(longlong **)(param_1 + -0x18) + 0x20))
                        (*(longlong **)(param_1 + -0x18),iVar3);
      if (lVar2 == param_1 + -0x20) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return -1;
}



// FUNCTION 146983814 FUN_146983814 body=38 status=ok
// SIG undefined FUN_146983814(void)

undefined8 FUN_146983814(undefined8 param_1,int param_2)

{
  FUN_140ebe164();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14698383a FUN_14698383a body=38 status=ok
// SIG undefined FUN_14698383a(void)

undefined8 FUN_14698383a(undefined8 param_1,int param_2)

{
  FUN_140767802();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146983860 FUN_146983860 body=81 status=ok
// SIG undefined FUN_146983860(void)

void FUN_146983860(longlong param_1)

{
  FUN_1449db362(param_1 + 0xb8);
  FUN_1449db362(param_1 + 0x90);
  FUN_1449db362(param_1 + 0x78);
  FUN_1449db362(param_1 + 0x60);
  FUN_1449db362(param_1 + 0x48);
  FUN_1449db362(param_1 + 0x30);
  FUN_1469838b2(param_1);
  return;
}



// FUNCTION 1469838b2 FUN_1469838b2 body=83 status=ok
// SIG undefined FUN_1469838b2(void)

void FUN_1469838b2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  plVar3 = (longlong *)param_1[2];
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
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469838fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 146983906 FUN_146983906 body=89 status=ok
// SIG undefined FUN_146983906(void)

undefined8 * FUN_146983906(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146983960(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 146983960 FUN_146983960 body=115 status=ok
// SIG undefined FUN_146983960(void)

void FUN_146983960(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1469839d4 FUN_1469839d4 body=38 status=ok
// SIG undefined FUN_1469839d4(void)

undefined8 FUN_1469839d4(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146983a00 FUN_146983a00 body=129 status=ok
// SIG undefined FUN_146983a00(void)

void FUN_146983a00(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_140a564aa(param_1 + 0x18,iVar1);
  }
  lVar3 = (longlong)param_3;
  memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8 + 8),
          (void *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_3) << 3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8) = uVar2;
  FUN_140a51012(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8),param_1,param_2);
  return;
}



// FUNCTION 146983a82 FUN_146983a82 body=87 status=ok
// SIG undefined FUN_146983a82(void)

void FUN_146983a82(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_146983ada();
  return;
}



// FUNCTION 146983ada FUN_146983ada body=70 status=ok
// SIG undefined FUN_146983ada(void)

void FUN_146983ada(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1 + (longlong)param_2 * 0x38;
  FUN_1449db362(lVar1 + 0x20);
  plVar2 = *(longlong **)(lVar1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  FUN_146983b20(param_1,param_2);
  return;
}



// FUNCTION 146983b20 FUN_146983b20 body=116 status=ok
// SIG undefined FUN_146983b20(void)

void FUN_146983b20(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 146983b94 FUN_146983b94 body=104 status=ok
// SIG undefined FUN_146983b94(void)

void FUN_146983b94(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98e138) {
    FUN_144b3d300(&DAT_14c98e138);
    if (DAT_14c98e138 == -1) {
      FUN_1446f470e(&DAT_14c98e130,L"FActiveTimersMetaData",1);
      _Init_thread_footer(&DAT_14c98e138);
      return;
    }
  }
  return;
}



// FUNCTION 146983c08 FUN_146983c08 body=50 status=ok
// SIG undefined FUN_146983c08(void)

undefined8 * FUN_146983c08(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 146983c3a FUN_146983c3a body=228 status=ok
// SIG undefined FUN_146983c3a(void)

int FUN_146983c3a(longlong *param_1,uint param_2,longlong *param_3)

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



// FUNCTION 146983d1e FUN_146983d1e body=444 status=ok
// SIG undefined FUN_146983d1e(void)

undefined4 * FUN_146983d1e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
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
  undefined4 uVar16;
  char cVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146983edc(param_1,local_48);
  puVar3 = (ulonglong *)*param_3;
  puVar4 = (undefined4 *)param_3[1];
  *local_40 = *puVar3;
  uVar20 = puVar3[1];
  local_40[1] = uVar20;
  if (uVar20 != 0) {
    LOCK();
    *(int *)(uVar20 + 8) = *(int *)(uVar20 + 8) + 1;
    UNLOCK();
  }
  local_40[8] = *(ulonglong *)(puVar4 + 0xc);
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  uVar9 = puVar4[3];
  uVar10 = puVar4[4];
  uVar11 = puVar4[5];
  uVar12 = puVar4[6];
  uVar13 = puVar4[7];
  uVar14 = puVar4[9];
  uVar15 = puVar4[10];
  uVar16 = puVar4[0xb];
  *(undefined4 *)(local_40 + 6) = puVar4[8];
  *(undefined4 *)((longlong)local_40 + 0x34) = uVar14;
  *(undefined4 *)(local_40 + 7) = uVar15;
  *(undefined4 *)((longlong)local_40 + 0x3c) = uVar16;
  *(undefined4 *)(local_40 + 4) = uVar10;
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar11;
  *(undefined4 *)(local_40 + 5) = uVar12;
  *(undefined4 *)((longlong)local_40 + 0x2c) = uVar13;
  *(undefined4 *)(local_40 + 2) = uVar6;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar7;
  *(undefined4 *)(local_40 + 3) = uVar8;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar9;
  local_40[9] = *(ulonglong *)(puVar4 + 0xe);
  uVar20 = *(ulonglong *)(puVar4 + 0x10);
  local_40[10] = uVar20;
  if (uVar20 != 0) {
    LOCK();
    *(int *)(uVar20 + 8) = *(int *)(uVar20 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_40 + 0xb) = 0xffffffff;
  local_4c = local_48[0];
  uVar20 = *local_40;
  plVar5 = (longlong *)local_40[1];
  if (plVar5 != (longlong *)0x0) {
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
  }
  uVar18 = ((uint)(uVar20 >> 0x14) & 0xffff ^ (uint)(uVar20 >> 4)) * -0x7a143595;
  uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
  uVar18 = uVar18 >> 0x10 ^ uVar18;
  cVar17 = FUN_146983fca(param_1,uVar18,local_40,&local_4c);
  uVar6 = local_4c;
  if (cVar17 == '\0') {
    uVar19 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar21 = 1;
    if (3 < uVar19) {
      uVar20 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
      lVar22 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar21 = 1 << ((byte)lVar22 & 0x1f);
    }
    if (((int)uVar19 < 1) || (iVar21 <= *(int *)(param_1 + 0x48))) {
      uVar18 = *(int *)(param_1 + 0x48) - 1U & uVar18;
      *(uint *)((longlong)local_40 + 0x5c) = uVar18;
      lVar22 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar22 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb) =
           *(undefined4 *)
            (lVar22 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar18) * 4);
      lVar22 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar22 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar22 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar18) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar21;
      FUN_146984214(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146983edc FUN_146983edc body=238 status=ok
// SIG undefined FUN_146983edc(void)

int * FUN_146983edc(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 146983fca FUN_146983fca body=231 status=ok
// SIG undefined FUN_146983fca(void)

undefined8 FUN_146983fca(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  void *_Dst;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_40 = *param_3;
    local_38 = (longlong *)param_3[1];
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    iVar4 = FUN_1469840b2(param_1,param_2,&local_40);
    plVar3 = local_38;
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
    if (iVar4 != -1) {
      _Dst = (void *)((longlong)iVar4 * 0x60 + *param_1);
      FUN_1469836da(_Dst);
      memmove(_Dst,param_3,0x58);
      FUN_14698419a(param_1,*param_4);
      *param_4 = iVar4;
      uVar5 = 1;
      goto LAB_146983ff0;
    }
  }
  uVar5 = 0;
LAB_146983ff0:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469840b2 FUN_1469840b2 body=232 status=ok
// SIG undefined FUN_1469840b2(void)

int FUN_1469840b2(longlong *param_1,uint param_2,longlong *param_3)

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
      lVar8 = (longlong)iVar3 * 0x60;
      lVar5 = *(longlong *)(*param_1 + lVar8);
      plVar6 = *(longlong **)(*param_1 + 8 + lVar8);
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
      iVar3 = *(int *)(*param_1 + 0x58 + lVar8);
    }
  }
  return -1;
}



// FUNCTION 14698419a FUN_14698419a body=122 status=ok
// SIG undefined FUN_14698419a(void)

void FUN_14698419a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 146984214 FUN_146984214 body=531 status=ok
// SIG undefined FUN_146984214(void)

void FUN_146984214(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
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
  uVar6 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar6 != uVar10);
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
      iVar11 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar4 = *local_90;
        lVar12 = (longlong)iVar11 * 0x60;
        uVar9 = *(ulonglong *)(lVar4 + lVar12);
        plVar7 = *(longlong **)(lVar4 + 8 + lVar12);
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
        uVar6 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar6 >> 0x10 ^ uVar6) & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar4 + lVar12 + 0x5c) = iVar8;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar12 + 0x58) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar11 = local_78._4_4_;
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



// FUNCTION 146984428 FUN_146984428 body=54 status=ok
// SIG undefined FUN_146984428(void)

void FUN_146984428(longlong *param_1)

{
  FUN_14698445e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14698445e FUN_14698445e body=386 status=ok
// SIG undefined FUN_14698445e(void)

void FUN_14698445e(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      plVar4 = *(longlong **)(*local_78 + 8 + (longlong)iStack_5c * 0x18);
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
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_144727cd0(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar6 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar6 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar6) {
        uVar5 = uVar6;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1469845e2 FUN_1469845e2 body=432 status=ok
// SIG undefined FUN_1469845e2(void)

undefined4 * FUN_1469845e2(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146984794(param_1,local_48);
  uVar7 = *param_3;
  *local_40 = uVar7;
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
    uVar7 = *local_40;
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
  uVar6 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  local_58 = 0;
  cVar5 = FUN_14698487a(param_1,uVar6,local_40,&local_4c);
  if (cVar5 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar8) {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x14) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_146984a22(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146984794 FUN_146984794 body=230 status=ok
// SIG undefined FUN_146984794(void)

int * FUN_146984794(longlong *param_1,int *param_2)

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



// FUNCTION 14698487a FUN_14698487a body=285 status=ok
// SIG undefined FUN_14698487a(void)

void FUN_14698487a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  int iVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_50 = *param_3;
    local_48 = (longlong *)param_3[1];
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
    }
    iVar9 = FUN_146983c3a(param_1,param_2,&local_50);
    plVar4 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (iVar9 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x18);
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
      FUN_146984998(param_1,*param_4,1);
      *param_4 = iVar9;
      uVar8 = 1;
      goto LAB_1469848ac;
    }
  }
  uVar8 = 0;
LAB_1469848ac:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146984998 FUN_146984998 body=138 status=ok
// SIG undefined FUN_146984998(void)

void FUN_146984998(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146984a22 FUN_146984a22 body=527 status=ok
// SIG undefined FUN_146984a22(void)

void FUN_146984a22(longlong *param_1)

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



// FUNCTION 146984c32 FUN_146984c32 body=20 status=ok
// SIG undefined FUN_146984c32(void)

void FUN_146984c32(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149ef14f8;
  FUN_14576702a(param_1 + 0x18);
  return;
}



// FUNCTION 146984c46 FUN_146984c46 body=29 status=ok
// SIG undefined FUN_146984c46(void)

undefined8 FUN_146984c46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146984c64 FUN_146984c64 body=52 status=ok
// SIG undefined FUN_146984c64(void)

undefined8 * FUN_146984c64(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149ef14f8;
  FUN_14576702a(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146984c98 FUN_146984c98 body=156 status=ok
// SIG undefined FUN_146984c98(void)

bool FUN_146984c98(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_146984d36(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146984d36 FUN_146984d36 body=161 status=ok
// SIG undefined FUN_146984d36(void)

void FUN_146984d36(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)FUN_14001cc68(0x20,0x10);
  *local_28 = (longlong)&PTR_FUN_149ef1450;
  local_28[1] = *param_3;
  *param_3 = 0;
  *(int *)(local_28 + 2) = (int)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  local_28[3] = param_1;
  FUN_140eee99e(param_2,param_1,0,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146984dd8 thunk_FUN_1449db362 body=5 status=ok
// SIG undefined thunk_FUN_1449db362(void)

void thunk_FUN_1449db362(void)

{
  FUN_1449db362();
  return;
}



// FUNCTION 146984dde FUN_146984dde body=62 status=ok
// SIG undefined FUN_146984dde(void)

undefined8 * FUN_146984dde(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149ef1568;
  FUN_1449db362(param_1 + 3);
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146984e1c FUN_146984e1c body=181 status=ok
// SIG undefined FUN_146984e1c(void)

undefined8 * FUN_146984e1c(undefined4 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149ef1580;
  uVar1 = *param_3;
  local_50 = 0;
  local_48 = 0;
  FUN_1469345d2(&local_50,param_2);
  FUN_14692f69a(puVar2 + 2,*param_1,&local_50,(int)uVar1);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146984edc FUN_146984edc body=29 status=ok
// SIG undefined FUN_146984edc(void)

undefined8 FUN_146984edc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146984efa FUN_146984efa body=132 status=ok
// SIG undefined FUN_146984efa(void)

void FUN_146984efa(longlong param_1,int param_2)

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



// FUNCTION 146984f80 FUN_146984f80 body=57 status=ok
// SIG undefined FUN_146984f80(void)

void FUN_146984f80(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149ef15b8;
  FUN_14698503e(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


