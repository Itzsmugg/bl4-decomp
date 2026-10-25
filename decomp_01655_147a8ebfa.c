// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147a8ebfa FUN_147a8ebfa body=25 status=ok
// SIG undefined FUN_147a8ebfa(void)

undefined8 FUN_147a8ebfa(undefined8 param_1,undefined8 param_2)

{
  FUN_147a8f17e(param_2);
  return param_2;
}



// FUNCTION 147a8ec14 FUN_147a8ec14 body=46 status=ok
// SIG undefined FUN_147a8ec14(void)

undefined8 * FUN_147a8ec14(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8cace0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8ec58 FUN_147a8ec58 body=259 status=ok
// SIG undefined FUN_147a8ec58(void)

undefined8 FUN_147a8ec58(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_140056680(&local_28,L"null");
  }
  else {
    FUN_144750a86(*(longlong *)(param_1 + 0x10),&local_28,0,0);
  }
  if (local_20 < 2) {
    FUN_140002266(param_2,L"ID: %d",*(uint *)(param_1 + 8) & 0xffffff);
  }
  else {
    FUN_140002266(&local_38,L"ID: %d",*(uint *)(param_1 + 8) & 0xffffff);
    puVar2 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar2 = local_38;
    }
    puVar1 = &DAT_149dfb77a;
    if (local_20 != 0) {
      puVar1 = local_28;
    }
    FUN_140002266(param_2,L"%s - %s",puVar1,puVar2);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8ed5c FUN_147a8ed5c body=139 status=ok
// SIG undefined FUN_147a8ed5c(void)

longlong FUN_147a8ed5c(PSRWLOCK param_1,int param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  AcquireSRWLockExclusive(param_1);
  iVar1 = *(int *)&param_1[5].Ptr;
  if ((longlong)iVar1 < 1) {
    uVar4 = FUN_147a8ede8(param_1 + 1);
  }
  else {
    uVar4 = *(uint *)((longlong)param_1[4].Ptr + (longlong)iVar1 * 4 + -4);
    *(int *)&param_1[5].Ptr = iVar1 + -1;
  }
  uVar3 = uVar4 + 0x1ff;
  if (-1 < (int)uVar4) {
    uVar3 = uVar4;
  }
  *param_3 = uVar4;
  lVar2 = *(longlong *)((longlong)param_1[1].Ptr + (longlong)((int)uVar3 >> 9) * 8);
  lVar5 = (ulonglong)(uint)((int)uVar4 % 0x200) * 0x20;
  *(uint *)(lVar2 + 8 + lVar5) = uVar4 & 0xffffff | param_2 << 0x18;
  ReleaseSRWLockExclusive(param_1);
  return lVar2 + lVar5;
}



// FUNCTION 147a8ede8 FUN_147a8ede8 body=188 status=ok
// SIG undefined FUN_147a8ede8(void)

int FUN_147a8ede8(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)param_1[1];
  iVar1 = (int)param_1[2];
  iVar6 = iVar1 + 0x3ff;
  if (-1 < iVar1 + 0x200) {
    iVar6 = iVar1 + 0x200;
  }
  *(int *)(param_1 + 2) = iVar1 + 1;
  if (iVar5 < iVar6 >> 9) {
    do {
      lVar3 = FUN_14001cc68(0x4000,0x10);
      lVar4 = 0x10;
      do {
        *(undefined8 *)(lVar3 + -8 + lVar4) = 0;
        *(undefined ***)(lVar3 + -0x10 + lVar4) = &PTR_FUN_14a8cae90;
        *(undefined8 *)(lVar3 + lVar4) = 0;
        ((undefined8 *)(lVar3 + lVar4))[1] = 0;
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != 0x4010);
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1456bd870(param_1,iVar2);
      }
      *(longlong *)(*param_1 + (longlong)iVar2 * 8) = lVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar6 >> 9);
  }
  return iVar1;
}



// FUNCTION 147a8eea4 FUN_147a8eea4 body=116 status=ok
// SIG undefined FUN_147a8eea4(void)

void FUN_147a8eea4(PSRWLOCK param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  AcquireSRWLockExclusive(param_1);
  iVar2 = param_2 + 0x1ff;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  lVar1 = *(longlong *)((longlong)param_1[1].Ptr + (longlong)(iVar2 >> 9) * 8);
  lVar3 = (ulonglong)(uint)(param_2 % 0x200) * 0x20;
  (**(code **)(*(longlong *)(lVar1 + lVar3) + 8))(lVar1 + lVar3);
  iVar2 = *(int *)&param_1[5].Ptr;
  *(uint *)&param_1[5].Ptr = iVar2 + 1U;
  if (*(uint *)((longlong)&param_1[5].Ptr + 4) < iVar2 + 1U) {
    FUN_1446f48e2(param_1 + 4,iVar2);
  }
  *(int *)((longlong)param_1[4].Ptr + (longlong)iVar2 * 4) = param_2;
  ReleaseSRWLockExclusive(param_1);
  return;
}



// FUNCTION 147a8ef18 FUN_147a8ef18 body=301 status=ok
// SIG undefined FUN_147a8ef18(void)

longlong * FUN_147a8ef18(PSRWLOCK param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  PSRWLOCK pRVar3;
  uint uVar4;
  undefined1 auStack_78 [44];
  uint local_4c;
  uint *local_48;
  longlong local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = param_3;
  if (*(int *)&param_1[7].Ptr != *(int *)((longlong)&param_1[0xc].Ptr + 4)) {
    pRVar3 = param_1 + 0xd;
    if (param_1[0xe].Ptr != (PSRWLOCK)0x0) {
      pRVar3 = param_1[0xe].Ptr;
    }
    uVar4 = *(uint *)((longlong)&pRVar3->Ptr +
                     (ulonglong)(*(int *)&param_1[0xf].Ptr - 1U & param_3) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)((longlong)param_1[6].Ptr + (longlong)(int)uVar4 * 0x18);
        if (*puVar1 == param_3) {
          if ((puVar1 != (uint *)0x0) && (puVar1 + 2 != (uint *)0x0)) {
            lVar2 = *(longlong *)(puVar1 + 2);
            *param_2 = lVar2;
            if (lVar2 != 0) {
              *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            }
            goto LAB_147a8f020;
          }
          break;
        }
        uVar4 = puVar1[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  AcquireSRWLockShared(param_1);
  uVar4 = param_3 + 0x1ff;
  if (-1 < (int)param_3) {
    uVar4 = param_3;
  }
  local_40 = (ulonglong)(param_3 - (uVar4 & 0xfffffe00)) * 0x20 +
             *(longlong *)((longlong)param_1[1].Ptr + (longlong)((int)uVar4 >> 9) * 8);
  local_48 = &local_4c;
  FUN_147a8f046(param_1 + 6,&local_34,param_3);
  lVar2 = *(longlong *)((longlong)param_1[6].Ptr + (longlong)local_34 * 0x18 + 8);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  ReleaseSRWLockShared(param_1);
LAB_147a8f020:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8f046 FUN_147a8f046 body=311 status=ok
// SIG undefined FUN_147a8f046(void)

undefined4 * FUN_147a8f046(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147a8d916(param_1,local_40);
  uVar1 = param_4[1];
  *local_38 = *(undefined4 *)*param_4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar4 = uVar1;
  *(undefined4 *)(puVar4 + 1) = 0;
  *(undefined8 **)(local_38 + 2) = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 1) = 1;
  }
  local_38[4] = 0xffffffff;
  cVar2 = FUN_147a8d9fc(param_1,param_3,local_38);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_38[5] = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_38[4] = *(undefined4 *)
                     (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147a8da8e(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8f17e FUN_147a8f17e body=120 status=ok
// SIG undefined FUN_147a8f17e(void)

undefined8 * FUN_147a8f17e(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8280) {
    FUN_144b3d300(&DAT_14cad8280);
    if (DAT_14cad8280 == -1) {
      FUN_1446ddc76(&DAT_14cad8278,"FSMInstanceElementData",1);
      _Init_thread_footer(&DAT_14cad8280);
    }
  }
  *param_1 = DAT_14cad8278;
  return param_1;
}



// FUNCTION 147a8f1f6 FUN_147a8f1f6 body=73 status=ok
// SIG undefined FUN_147a8f1f6(void)

void FUN_147a8f1f6(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147a8f240 FUN_147a8f240 body=132 status=ok
// SIG undefined FUN_147a8f240(void)

void FUN_147a8f240(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147a8f2c6 FUN_147a8f2c6 body=135 status=ok
// SIG undefined FUN_147a8f2c6(void)

int FUN_147a8f2c6(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar3 = *param_1;
      uVar4 = *param_3;
      iVar2 = *(int *)(param_3 + 1);
      do {
        lVar7 = (longlong)iVar1 * 0x60;
        if (*(int *)(lVar3 + 8 + lVar7) == iVar2) {
          if (iVar2 == 0) {
            return iVar1;
          }
          iVar5 = FUN_144a54874(*(undefined8 *)(lVar3 + lVar7),uVar4,(longlong)iVar2);
          if (iVar5 == 0) {
            return iVar1;
          }
        }
        iVar1 = *(int *)(lVar3 + 0x50 + lVar7);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 147a8f34d FUN_147a8f34d body=31 status=ok
// SIG undefined FUN_147a8f34d(void)

void FUN_147a8f34d(longlong *param_1,int param_2)

{
  int *piVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*param_1 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 147a8f36c FUN_147a8f36c body=86 status=ok
// SIG undefined FUN_147a8f36c(void)

void FUN_147a8f36c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147a8f3c2 FUN_147a8f3c2 body=370 status=ok
// SIG undefined FUN_147a8f3c2(void)

void FUN_147a8f3c2(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  if (*param_4 != 0) {
    LOCK();
    piVar1 = (int *)(*param_4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  *param_4 = 0;
  param_4[1] = 0;
  if (*param_2 != 0) {
    uVar14 = *(uint *)(*param_2 + 8);
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x28));
    if (uVar14 < 0x1000000) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x30 + (ulonglong)((uVar14 >> 0x18) - 1) * 8);
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x28));
    lVar11 = *param_3;
    uVar14 = 0;
    if ((((lVar11 == 0) || (lVar5 = FUN_144a8d392(), lVar5 == 0)) ||
        (*(int *)(lVar11 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      lVar11 = 0;
    }
    else {
      lVar11 = *param_3;
    }
    uVar3 = *(uint *)(lVar8 + 0x20);
    lVar8 = *(longlong *)(lVar8 + 0x18);
    iVar10 = (int)((ulonglong)*(undefined8 *)(lVar11 + 0x18) >> 0x20);
    iVar9 = (int)*(undefined8 *)(lVar11 + 0x18);
    if (0 < (int)uVar3) {
      uVar14 = 0;
      uVar13 = uVar3;
      do {
        uVar2 = (uVar13 >> 1) + uVar14;
        lVar11 = (ulonglong)uVar2 * 0x10;
        iVar12 = *(int *)(lVar8 + lVar11) - iVar9;
        if (iVar12 == 0) {
          iVar12 = *(int *)(lVar8 + 4 + lVar11) - iVar10;
        }
        if (iVar12 < 0) {
          uVar14 = uVar2 + (uVar13 & 1);
        }
        bVar4 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar4);
    }
    if ((int)uVar14 < (int)uVar3) {
      lVar11 = (ulonglong)uVar14 * 0x10;
      iVar9 = iVar9 - *(int *)(lVar8 + lVar11);
      if (iVar9 == 0) {
        iVar9 = iVar10 - *(int *)(lVar8 + 4 + lVar11);
      }
      if ((-1 < iVar9) && (plVar6 = (longlong *)(lVar8 + lVar11 + 8), plVar6 != (longlong *)0x0)) {
        lVar8 = *plVar6;
        if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) {
          FUN_14689c22e(lVar8);
        }
        else if (lVar8 == 0) {
          return;
        }
        lVar11 = *param_2;
        uVar7 = FUN_1458d4b68();
        lVar8 = FUN_144718840(lVar8,uVar7);
        *param_4 = lVar11;
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 0xc) = *(int *)(lVar11 + 0xc) + 1;
          UNLOCK();
        }
        param_4[1] = lVar8;
      }
    }
    return;
  }
  return;
}



// FUNCTION 147a8f534 FUN_147a8f534 body=132 status=ok
// SIG undefined FUN_147a8f534(void)

void FUN_147a8f534(longlong param_1,int param_2)

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



// FUNCTION 147a8f5ba FUN_147a8f5ba body=370 status=ok
// SIG undefined FUN_147a8f5ba(void)

void FUN_147a8f5ba(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  if (*param_4 != 0) {
    LOCK();
    piVar1 = (int *)(*param_4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  *param_4 = 0;
  param_4[1] = 0;
  if (*param_2 != 0) {
    uVar14 = *(uint *)(*param_2 + 8);
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x28));
    if (uVar14 < 0x1000000) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x30 + (ulonglong)((uVar14 >> 0x18) - 1) * 8);
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x28));
    lVar11 = *param_3;
    uVar14 = 0;
    if ((((lVar11 == 0) || (lVar5 = FUN_144a8d392(), lVar5 == 0)) ||
        (*(int *)(lVar11 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      lVar11 = 0;
    }
    else {
      lVar11 = *param_3;
    }
    uVar3 = *(uint *)(lVar8 + 0x20);
    lVar8 = *(longlong *)(lVar8 + 0x18);
    iVar10 = (int)((ulonglong)*(undefined8 *)(lVar11 + 0x18) >> 0x20);
    iVar9 = (int)*(undefined8 *)(lVar11 + 0x18);
    if (0 < (int)uVar3) {
      uVar14 = 0;
      uVar13 = uVar3;
      do {
        uVar2 = (uVar13 >> 1) + uVar14;
        lVar11 = (ulonglong)uVar2 * 0x10;
        iVar12 = *(int *)(lVar8 + lVar11) - iVar9;
        if (iVar12 == 0) {
          iVar12 = *(int *)(lVar8 + 4 + lVar11) - iVar10;
        }
        if (iVar12 < 0) {
          uVar14 = uVar2 + (uVar13 & 1);
        }
        bVar4 = 1 < uVar13;
        uVar13 = uVar13 >> 1;
      } while (bVar4);
    }
    if ((int)uVar14 < (int)uVar3) {
      lVar11 = (ulonglong)uVar14 * 0x10;
      iVar9 = iVar9 - *(int *)(lVar8 + lVar11);
      if (iVar9 == 0) {
        iVar9 = iVar10 - *(int *)(lVar8 + 4 + lVar11);
      }
      if ((-1 < iVar9) && (plVar6 = (longlong *)(lVar8 + lVar11 + 8), plVar6 != (longlong *)0x0)) {
        lVar8 = *plVar6;
        if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) {
          FUN_14689c22e(lVar8);
        }
        else if (lVar8 == 0) {
          return;
        }
        lVar11 = *param_2;
        uVar7 = FUN_1458d3d9a();
        lVar8 = FUN_144718840(lVar8,uVar7);
        *param_4 = lVar11;
        if (lVar11 != 0) {
          LOCK();
          *(int *)(lVar11 + 0xc) = *(int *)(lVar11 + 0xc) + 1;
          UNLOCK();
        }
        param_4[1] = lVar8;
      }
    }
  }
  return;
}



// FUNCTION 147a8f72c FUN_147a8f72c body=89 status=ok
// SIG undefined FUN_147a8f72c(void)

void FUN_147a8f72c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147a8f785 FUN_147a8f785 body=41 status=ok
// SIG undefined FUN_147a8f785(void)

void FUN_147a8f785(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2 * 8) = 0;
    lVar1 = *(longlong *)(param_2 + lVar2 * 8);
    if (lVar1 != 0) {
      *(longlong *)(param_1 + lVar2 * 8) = lVar1;
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 1;
  } while (param_3 != (int)lVar2);
  return;
}



// FUNCTION 147a8f7ae FUN_147a8f7ae body=40 status=ok
// SIG undefined FUN_147a8f7ae(void)

bool FUN_147a8f7ae(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    return true;
  }
  lVar2 = 0;
  do {
    bVar3 = *(longlong *)(param_1 + lVar2 * 8) == *(longlong *)(param_2 + lVar2 * 8);
    if (!bVar3) {
      return bVar3;
    }
    iVar1 = (int)lVar2;
    lVar2 = lVar2 + 1;
  } while (param_3 + -1 != iVar1);
  return bVar3;
}



// FUNCTION 147a8f7d6 FUN_147a8f7d6 body=73 status=ok
// SIG undefined FUN_147a8f7d6(void)

undefined8 * FUN_147a8f7d6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8caf00;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_147a4cefa(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a8f8b4 FUN_147a8f8b4 body=290 status=ok
// SIG undefined FUN_147a8f8b4(void)

void FUN_147a8f8b4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x10);
  lVar2 = param_1 + 0x20;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0x38);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar5) || (uStack_50 != lVar2)) {
    do {
      lVar3 = *local_80 + (longlong)iStack_64 * 0x18;
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(lVar3 + 8));
      cVar4 = (*(code *)*param_2)(param_2[1],lVar3,&local_58);
      if (cVar4 == '\0') break;
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar5));
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a8f9d8 FUN_147a8f9d8 body=63 status=ok
// SIG undefined FUN_147a8f9d8(void)

void FUN_147a8f9d8(longlong param_1,ulonglong *param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  piVar2 = (int *)FUN_147a4c7c6(param_1 + 0x10,uVar1 >> 0x10 ^ uVar1,param_2);
  *piVar2 = *piVar2 + 1;
  return;
}



// FUNCTION 147a8fb60 FUN_147a8fb60 body=93 status=ok
// SIG undefined FUN_147a8fb60(void)

void FUN_147a8fb60(longlong *param_1,int param_2)

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
  FUN_147a4cb2e(param_1,param_2,1);
  return;
}



// FUNCTION 147a8fbbe FUN_147a8fbbe body=67 status=ok
// SIG undefined FUN_147a8fbbe(void)

void FUN_147a8fbbe(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_147a4cf30(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147a4cbb8(param_1);
    return;
  }
  FUN_147a8fc02(param_1);
  FUN_147a4cf30(param_1,0);
  return;
}



// FUNCTION 147a8fc02 FUN_147a8fc02 body=322 status=ok
// SIG undefined FUN_147a8fc02(void)

void FUN_147a8fc02(longlong *param_1)

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



// FUNCTION 147a8fd46 FUN_147a8fd46 body=322 status=ok
// SIG undefined FUN_147a8fd46(void)

void FUN_147a8fd46(longlong *param_1)

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



// FUNCTION 147a8fe96 FUN_147a8fe96 body=146 status=ok
// SIG undefined FUN_147a8fe96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a8fe96(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_30 = param_2;
  if (lVar1 != 0) {
    QueryPerformanceCounter(&local_28);
    local_28 = (LARGE_INTEGER)
               (((double)local_28.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8);
    uVar2 = FUN_147a9008c(&local_30,&local_28);
    FUN_147a8ff2a(lVar1,uVar2,param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8ff2a FUN_147a8ff2a body=352 status=ok
// SIG undefined FUN_147a8ff2a(void)

void FUN_147a8ff2a(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_14629dd64();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9008c FUN_147a9008c body=190 status=ok
// SIG undefined FUN_147a9008c(void)

undefined8 * FUN_147a9008c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0);
  uVar1 = *param_2;
  FUN_140056680(&local_40,*param_1);
  _Src = local_40;
  *puVar2 = 0;
  *(int *)(puVar2 + 1) = local_38;
  if ((longlong)local_38 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar2,local_38,0);
    memcpy((void *)*puVar2,_Src,(longlong)local_38 * 2);
  }
  puVar2[2] = uVar1;
  if (local_40 != (void *)0x0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9014c FUN_147a9014c body=454 status=ok
// SIG undefined FUN_147a9014c(void)

void FUN_147a9014c(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 != 0) {
    puVar7 = (undefined8 *)FUN_14001cc68(0x50,0);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    uVar6 = FUN_145a36572();
    *(undefined4 *)(puVar7 + 2) = uVar6;
    FUN_145bdec9c(&local_48);
    puVar7[3] = local_48;
    puVar7[4] = CONCAT44(uStack_3c,iStack_40);
    uVar4 = DAT_14c86702c;
    uVar3 = DAT_14c867028;
    uVar6 = DAT_14c867024;
    *(undefined4 *)(puVar7 + 7) = DAT_14c867020;
    *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar6;
    *(undefined4 *)(puVar7 + 8) = uVar3;
    *(undefined4 *)((longlong)puVar7 + 0x44) = uVar4;
    FUN_14020fad6(puVar7 + 5);
    if ((DAT_14cb0d2b0 != 0) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
      lVar9 = 0;
      pcVar10 = (char *)0x0;
      do {
        pcVar11 = *(char **)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar9);
        cVar1 = *pcVar11;
        if (cVar1 == '\x03') {
          if ((pcVar10 != (char *)0x0) && (*pcVar10 == '\x03')) goto LAB_147a90277;
        }
        else {
          if (cVar1 == '\x01') break;
LAB_147a90277:
          if (pcVar10 != (char *)0x0) {
            pcVar11 = pcVar10;
          }
          if (cVar1 != '\x02') {
            pcVar11 = pcVar10;
          }
        }
        pcVar10 = pcVar11;
        lVar9 = lVar9 + 8;
        pcVar11 = pcVar10;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar9);
      if ((pcVar11 != (char *)0x0) && (*(longlong *)(pcVar11 + 0x360) != 0)) {
        FUN_1410908dc(*(longlong *)(pcVar11 + 0x360),&local_48,0);
        iVar2 = iStack_40 + -1;
        if (iStack_40 == 0) {
          iVar2 = 0;
        }
        FUN_1402980a2(puVar7,local_48,iVar2);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        uVar5 = FUN_140e50f4a(*(undefined8 *)(pcVar11 + 0x360));
        *(undefined1 *)((longlong)puVar7 + 0x14) = uVar5;
        *(float *)(puVar7 + 9) = (float)*(double *)(*(longlong *)(pcVar11 + 0x360) + 0x6d0);
      }
    }
    lVar9 = *param_1;
    uVar8 = (**(code **)(*(longlong *)*param_2 + 0x48))();
    FUN_147a90314(lVar9,puVar7,uVar8);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a90314 FUN_147a90314 body=352 status=ok
// SIG undefined FUN_147a90314(void)

void FUN_147a90314(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_14629da8a();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a90476 FUN_147a90476 body=50 status=ok
// SIG undefined FUN_147a90476(void)

undefined4 FUN_147a90476(uint param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_144a9f2d6();
  uVar1 = 0x21;
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)(lVar2 + 0x168))) {
    uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x160) + (ulonglong)param_1 * 4);
  }
  return uVar1;
}



// FUNCTION 147a904a8 FUN_147a904a8 body=27 status=ok
// SIG undefined FUN_147a904a8(void)

void FUN_147a904a8(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144a9f2d6();
  FUN_1479b0542(uVar1,param_1);
  return;
}



// FUNCTION 147a904ee FUN_147a904ee body=262 status=ok
// SIG undefined FUN_147a904ee(void)

longlong FUN_147a904ee(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144729dda(param_1 + 3);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if (param_2 != 0) {
    if (*param_1 == 0) {
      if ((int)param_1[2] < 2) {
        lVar3 = *(longlong *)(param_2 + 0x1c8);
      }
      else {
        FUN_144a4a122(&local_21);
        if ((int)param_1[2] == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        else {
          puVar6 = (undefined2 *)param_1[1];
        }
        uVar5 = FUN_144a78d6a();
        lVar3 = FUN_140277b32(uVar5,param_2,puVar6,0);
        FUN_144a49ece(&local_21);
      }
      goto LAB_147a90591;
    }
    plVar2 = (longlong *)FUN_1408c92bc(*(undefined8 *)(param_2 + 0x10),*param_1,3);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x220))(plVar2,param_2,0);
      if (lVar3 != 0) {
        lVar4 = FUN_144a78d6a();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) goto LAB_147a90591;
      }
    }
  }
  lVar3 = 0;
LAB_147a90591:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a90604 FUN_147a90604 body=58 status=ok
// SIG undefined FUN_147a90604(void)

void FUN_147a90604(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144729dda(param_1 + 0x20);
  if (cVar1 != '\0') {
    param_2 = FUN_14479d2ce(param_1 + 0x20);
  }
  FUN_147a904ee(param_1,param_2);
  return;
}



// FUNCTION 147a9063e FUN_147a9063e body=59 status=ok
// SIG undefined FUN_147a9063e(void)

void FUN_147a9063e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1404101e2(param_1 + 0x20);
  if (lVar1 != 0) {
    param_2 = FUN_1404101e2(param_1 + 0x20);
  }
  FUN_147a904ee(param_1,param_2);
  return;
}



// FUNCTION 147a9067a FUN_147a9067a body=592 status=ok
// SIG undefined FUN_147a9067a(void)

undefined4 FUN_147a9067a(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8340) {
    FUN_144b3d300(&DAT_14cad8340);
    if (DAT_14cad8340 == -1) {
      FUN_1446ddc76(&DAT_14cad8338,"ComponentReference",1);
      _Init_thread_footer(&DAT_14cad8340);
    }
  }
  local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_2 + 8));
  uVar5 = FUN_1468ec2ac(&local_78,DAT_14cad8338);
  if ((char)uVar5 == '\0') goto LAB_147a90863;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_58 = 0;
  uVar6 = FUN_146375f9a();
  FUN_14483b62e(uVar6,param_3,&local_78,0);
  cVar4 = FUN_144729dda(&local_58);
  if (cVar4 != '\0') {
    lVar7 = FUN_14479d2ce(&local_58);
    if (lVar7 == 0) {
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      if (*(int *)((longlong)param_1 + 0x44) < 0) {
        FUN_1446f8c06(param_1 + 7,0);
      }
      puVar2 = (undefined2 *)param_1[7];
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
      }
    }
    else {
      FUN_1400bbfc4(&local_50,lVar7);
      *(undefined4 *)(param_1 + 5) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_4c;
      *(undefined4 *)(param_1 + 6) = uStack_48;
      *(undefined4 *)((longlong)param_1 + 0x34) = uStack_44;
      if (param_1 + 5 == (undefined8 *)&local_50) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[7] != 0) {
          FUN_1400020a8();
        }
        param_1[7] = local_40;
        local_40 = 0;
        *(undefined4 *)(param_1 + 8) = local_38;
        *(undefined4 *)((longlong)param_1 + 0x44) = local_34;
      }
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if (cVar4 != '\0') {
        uVar1 = *(uint *)(lVar7 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
          param_1[4] = 0;
          goto LAB_147a9082c;
        }
      }
      FUN_14485c47a(param_1 + 4,lVar7);
    }
LAB_147a9082c:
    *param_1 = local_78;
    iVar3 = (int)local_68 + -1;
    if ((int)local_68 == 0) {
      iVar3 = 0;
    }
    FUN_1402980a2(param_1 + 1,lStack_70,iVar3);
  }
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
LAB_147a90863:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a908cc FUN_147a908cc body=110 status=ok
// SIG undefined FUN_147a908cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147a908cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8380) {
    FUN_144b3d300(&DAT_14cad8380);
    if (DAT_14cad8380 == -1) {
      _DAT_14cad8370 = FUN_147aea1da();
      _DAT_14cad8378 = L"HActor";
      _Init_thread_footer(&DAT_14cad8380);
    }
  }
  return &DAT_14cad8370;
}



// FUNCTION 147a9093a FUN_147a9093a body=69 status=ok
// SIG undefined FUN_147a9093a(void)

void FUN_147a9093a(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x20,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147a9097c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x28,0,0);
  return;
}



// FUNCTION 147a90995 FUN_147a90995 body=1390 status=ok
// SIG undefined FUN_147a90995(void)

char FUN_147a90995(undefined8 *param_1,code **param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_988 [32];
  ulonglong local_968;
  char local_955;
  undefined4 local_954;
  code **local_950;
  longlong *local_948;
  undefined8 uStack_940;
  undefined4 local_938;
  undefined4 uStack_934;
  undefined8 local_930;
  undefined8 uStack_928;
  undefined8 local_918;
  int local_910;
  undefined1 local_904 [4];
  code *local_900;
  undefined4 local_8f8;
  undefined4 uStack_8f4;
  code **ppcStack_8f0;
  undefined8 local_8e8;
  undefined8 local_8e0;
  code *local_8d8;
  undefined4 *local_8d0;
  undefined8 local_8c8;
  code **ppcStack_8c0;
  longlong local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined4 uStack_8a0;
  undefined4 uStack_89c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_988;
  local_918 = *param_1;
  local_910 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_910 = 0;
  }
  local_954 = param_3;
  local_950 = param_2;
  cVar1 = FUN_146871a88();
  if (cVar1 != '\0') {
    local_78 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_955 = cVar1;
    FUN_144732142(local_98,0x10);
    if (local_50 < 0x10) {
      local_50 = 0x10;
      FUN_144869b4a();
    }
    FUN_1446f470e(&local_8e0,L"AssetRegistry",1);
    uVar4 = FUN_144a52528();
    plVar5 = (longlong *)FUN_1402c9134(uVar4,local_8e0,&local_8b8,0);
    if (plVar5 != (longlong *)0x0) {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5);
      local_8b8 = 0;
      uStack_8b0 = (undefined1 *)0x0;
      if (*(int *)(param_1 + 1) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*param_1;
      }
      FUN_1446f470e(&local_8e8,puVar6,1);
      local_968 = local_968 & 0xffffffffffffff00;
      (**(code **)(*plVar5 + 0x20))(plVar5,local_8e8,&local_8b8,1);
      if ((longlong)(int)uStack_8b0 == 0) {
        uVar7 = 0;
      }
      else {
        lVar8 = (longlong)(int)uStack_8b0 * 0x70;
        lVar9 = local_8b8;
        do {
          if ((*(byte *)(lVar9 + 0x3e) & 2) == 0) {
            FUN_144a13f80(local_98,&local_948,lVar9,0);
          }
          lVar9 = lVar9 + 0x70;
          lVar8 = lVar8 + -0x70;
        } while (lVar8 != 0);
        uVar7 = (ulonglong)uStack_8b0 & 0xffffffff;
      }
      FUN_140195631(local_8b8,uVar7);
      if (local_8b8 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_140056680(&local_948,&DAT_149dfb77a);
    FUN_141509698(&local_8b8,param_1,&local_948);
    if (local_948 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_948 = (longlong *)0x0;
    uStack_940 = 0;
    FUN_145de1af6(&local_948,&local_8b8);
    if ((longlong)(int)uStack_940 == 0) {
      uVar7 = 0;
    }
    else {
      lVar9 = (longlong)(int)uStack_940 << 4;
      plVar5 = local_948;
      do {
        local_8d8 = (code *)*plVar5;
        iVar2 = (int)plVar5[1] + -1;
        if ((int)plVar5[1] == 0) {
          iVar2 = 0;
        }
        local_8d0 = (undefined4 *)CONCAT44(local_8d0._4_4_,iVar2);
        FUN_140fede38(&local_8c8,&local_8d8,1);
        uVar4 = FUN_141538082();
        local_8f8 = (undefined4)local_8c8;
        uStack_8f4 = local_8c8._4_4_;
        ppcStack_8f0 = ppcStack_8c0;
        cVar1 = FUN_147aa6bcc(&local_8f8,uVar4);
        if (cVar1 != '\0') {
          FUN_140b1a4cc(&local_8d8,plVar5);
          local_900 = (code *)&DAT_149dfb77a;
          if ((int)local_8d0 != 0) {
            local_900 = local_8d8;
          }
          FUN_147aa6c0c(local_98,local_904,&local_900);
          if (local_8d8 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        plVar5 = plVar5 + 2;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
      uVar7 = uStack_940 & 0xffffffff;
    }
    FUN_1447a1747(local_948,uVar7);
    if (local_948 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_8b8 != 0) {
      FUN_1400020a8();
    }
    local_8b8 = 0x100000000;
    local_8a8 = 0xffffffff;
    uStack_8a0 = 0;
    uStack_8b0 = local_88;
    if (local_70 == 0) {
      iVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_8b8);
      iVar2 = local_70;
    }
    uStack_928 = CONCAT44(uStack_89c,uStack_8a0);
    local_930 = local_8a8;
    uVar4 = local_930;
    uStack_940 = local_8b8;
    local_938 = (int)uStack_8b0;
    uStack_934 = uStack_8b0._4_4_;
    local_948 = local_98;
    local_930._4_4_ = (int)((ulonglong)local_8a8 >> 0x20);
    if ((local_930._4_4_ != iVar2) || (uStack_8b0 != local_88)) {
      iVar3 = local_930._4_4_;
      local_930 = uVar4;
      do {
        FUN_14026f16c((longlong)iVar3 * 0x10 + *local_948,&local_8b8,0x40b);
        lVar9 = FUN_140277851(0,&local_8b8);
        if (lVar9 == 0) {
          local_968 = 0;
          lVar9 = FUN_1402791b4(0,&local_8b8,0,0);
          if (lVar9 != 0) goto LAB_147a90e11;
        }
        else {
          FUN_1468c51e8(lVar9);
LAB_147a90e11:
          local_8f8 = local_954;
          ppcStack_8f0 = local_950;
          local_8d8 = FUN_1434eedd8;
          local_8d0 = &local_8f8;
          local_8c8 = FUN_1449cc908;
          local_968 = local_968 & 0xffffffff00000000;
          ppcStack_8c0 = &local_8d8;
          FUN_14482c30e(lVar9,&local_8c8,1);
        }
        local_930 = CONCAT44(local_930._4_4_,(uint)local_930 & ~uStack_940._4_4_);
        FUN_1449c0562(&uStack_940);
        iVar3 = local_930._4_4_;
        uVar4 = local_930;
      } while (local_948 != local_98 ||
               ((undefined1 *)CONCAT44(uStack_934,local_938) != local_88 || local_930._4_4_ != iVar2
               ));
    }
    local_930 = uVar4;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14472eaf0(local_98);
    cVar1 = local_955;
  }
  if ((local_48 ^ (ulonglong)auStack_988) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar1;
}



// FUNCTION 147a90f04 FUN_147a90f04 body=70 status=ok
// SIG undefined FUN_147a90f04(void)

void FUN_147a90f04(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_147aa6d68(param_1 + 0x28);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147a90f4a FUN_147a90f4a body=91 status=ok
// SIG undefined FUN_147a90f4a(void)

undefined8 FUN_147a90f4a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_144a3ff20();
  if (lVar2 != 0) {
    uVar3 = FUN_144a79cc8(lVar2);
    return uVar3;
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar1 = FUN_144729dda(param_1 + 8);
    if (((cVar1 != '\0') && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) &&
       (*(int *)(param_1 + 0x18) != -1)) {
                    /* WARNING: Could not recover jumptable at 0x000147a90f9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147a90fa6 FUN_147a90fa6 body=303 status=ok
// SIG undefined FUN_147a90fa6(void)

byte * FUN_147a90fa6(byte *param_1,longlong *param_2,byte param_3,int *param_4)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  
  param_1[0] = 0;
  param_1[1] = 0;
  plVar4 = *(longlong **)(*param_2 + 8);
  if ((*param_4 <= (int)plVar4[8]) && (param_4[1] <= (int)((ulonglong)plVar4[8] >> 0x20))) {
    if ((plVar4[0xd] != 0) && (*(longlong *)(plVar4[0xd] + 0x10) != 0)) {
      *param_1 = *(byte *)((longlong)plVar4 + 0x2b) >> 5 & 1;
      if (plVar4[0xd] == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)(plVar4[0xd] + 8);
      }
      bVar2 = (**(code **)(*(longlong *)(lVar3 + 8) + 0x168))();
      *param_1 = *param_1 | (bVar2 ^ 1) * '\x02';
      if (plVar4[0xd] == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(plVar4[0xd] + 8);
      }
      bVar2 = (**(code **)(*plVar4 + 0xb8))(plVar4,0x1e);
      *param_1 = *param_1 | (bVar2 ^ 1) << 2;
      param_1[1] = param_3;
      plVar4 = *(longlong **)(*param_2 + 8);
    }
    pbVar1 = *(byte **)plVar4[1];
    if ((byte *)((undefined8 *)plVar4[1])[1] < pbVar1 + 1) {
      (**(code **)(*plVar4 + 0x170))(plVar4,param_1,1);
    }
    else {
      *param_1 = *pbVar1;
      *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 1;
    }
    plVar4 = *(longlong **)(*param_2 + 8);
    pbVar1 = *(byte **)plVar4[1];
    if ((byte *)((undefined8 *)plVar4[1])[1] < pbVar1 + 1) {
      (**(code **)(*plVar4 + 0x170))(plVar4,param_1 + 1,1);
    }
    else {
      param_1[1] = *pbVar1;
      *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 1;
    }
  }
  return param_1;
}



// FUNCTION 147a910d6 FUN_147a910d6 body=97 status=ok
// SIG undefined FUN_147a910d6(void)

undefined8 * FUN_147a910d6(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  if (DAT_14cad83b0 == '\x01') {
    FUN_144a61b4f();
  }
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xa8) != 0)) {
    FUN_1417c563e(param_1,*(longlong *)(param_2 + 0xa8),param_2,param_3);
  }
  return param_1;
}



// FUNCTION 147a91138 FUN_147a91138 body=136 status=ok
// SIG undefined FUN_147a91138(void)

undefined8 * FUN_147a91138(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  if (DAT_14cad83b0 == '\x01') {
    FUN_144a61b4f();
  }
  if (param_1[2] != 0) {
    cVar4 = FUN_144729dda(param_1 + 1);
    if ((cVar4 != '\0') && (plVar1 = (longlong *)param_1[2], plVar1 != (longlong *)0x0)) {
      uVar5 = (**(code **)(*plVar1 + 0x10))(plVar1,param_3,0);
      *(undefined4 *)(param_1 + 3) = uVar5;
      uVar6 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
      FUN_14485c47a(param_1,uVar6);
      *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
    }
  }
  return param_1;
}



// FUNCTION 147a911c0 FUN_147a911c0 body=100 status=ok
// SIG undefined FUN_147a911c0(void)

undefined8 * FUN_147a911c0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_20 = param_2;
  FUN_140bbacec(param_1 + 1,&local_20);
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a91225 FUN_147a91225 body=205 status=ok
// SIG undefined FUN_147a91225(void)

void FUN_147a91225(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_144a3ff20();
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    local_28 = (undefined2 *)0x0;
    uStack_20 = 0;
    FUN_1401031ac(lVar3,0,&local_28);
    puVar5 = local_28;
    if ((int)uStack_20 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    uVar1 = FUN_144a1ccda(puVar5,0);
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar4 = FUN_14479d2ce(param_1 + 8);
  if (uVar4 != 0) {
    uVar2 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar1 = FUN_144a78877(uVar1,uVar2 >> 0x10 ^ uVar2);
  }
  FUN_144a78877(uVar1,*(undefined4 *)(param_1 + 0x18));
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a912f4 FUN_147a912f4 body=74 status=ok
// SIG undefined FUN_147a912f4(void)

undefined8 * FUN_147a912f4(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_144a87850();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 147a9133e FUN_147a9133e body=223 status=ok
// SIG undefined FUN_147a9133e(void)

void FUN_147a9133e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
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
  local_21 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a915c8(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a91426 FUN_147a91426 body=96 status=ok
// SIG undefined FUN_147a91426(void)

void FUN_147a91426(char *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 == '\x01') {
    FUN_1402599be(param_1,&local_28);
    cVar1 = FUN_140819828(param_1 + -0x20f,local_28,param_2);
    *param_1 = cVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a91488 FUN_147a91488 body=181 status=ok
// SIG undefined FUN_147a91488(void)

undefined8 FUN_147a91488(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == (undefined1 *)0x0) || ((param_2[0x62] & 2) == 0)) {
    uVar1 = 0;
  }
  else {
    local_40 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    FUN_140b518ec(param_1 + 0x40,&local_40);
    FUN_1474b3b22(&local_30);
    local_40 = &LAB_147a9141e;
    local_38 = 0;
    FUN_147a9153e(param_2 + 0x20f,param_1,&local_40,local_30);
    uVar1 = 1;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9153e FUN_147a9153e body=137 status=ok
// SIG undefined FUN_147a9153e(void)

void FUN_147a9153e(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_4;
  FUN_14113f0c0(&local_48);
  local_30 = (undefined4)local_48;
  uStack_2c = local_48._4_4_;
  uStack_28 = (undefined4)uStack_40;
  uStack_24 = uStack_40._4_4_;
  FUN_1402599be(param_1,&local_38);
  bVar1 = FUN_140819c20(param_1 + -0x20f,local_38,&local_30);
  *param_1 = *param_1 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a915c8 FUN_147a915c8 body=140 status=ok
// SIG undefined FUN_147a915c8(void)

undefined8 FUN_147a915c8(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_30 = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    local_28 = &local_30;
    iVar1 = FUN_14111a8f2(param_1 + 0x40);
    if (iVar1 != 0) {
      FUN_147a91426(param_2 + 0x20f,param_1);
      uVar2 = 1;
      goto LAB_147a91616;
    }
  }
  uVar2 = 0;
LAB_147a91616:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a91656 FUN_147a91656 body=122 status=ok
// SIG undefined FUN_147a91656(void)

bool FUN_147a91656(undefined8 param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = true;
  if ((*(longlong *)(param_2 + 0x10) != 0) &&
     ((*(uint *)(*(longlong *)(param_2 + 0x10) + 0xd4) & 0x40080) != 0x80)) {
    local_20 = 0;
    FUN_14485c47a(&local_20);
    iVar1 = FUN_1417dd246(param_1,local_20);
    bVar2 = iVar1 == 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a916d2 FUN_147a916d2 body=285 status=ok
// SIG undefined FUN_147a916d2(void)

undefined8 FUN_147a916d2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    uVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    uVar7 = *(uint *)(param_1 + 0x268);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  uStack_54 = uStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  uVar5 = (ulonglong)uStack_34;
  local_70 = plVar1;
  if ((uStack_34 != uVar7) || (uStack_40 != lVar2)) {
    do {
      plVar3 = *(longlong **)(*local_70 + (longlong)(int)uVar5 * 0x10);
      if ((plVar3 != (longlong *)0x0) && (cVar4 = (**(code **)(*plVar3 + 0x3c0))(), cVar4 == '\0'))
      {
        uVar6 = 0;
        goto LAB_147a9176a;
      }
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
      uVar5 = (ulonglong)uStack_54;
    } while ((CONCAT44(uStack_5c,uStack_60) != lVar2 || uStack_54 != uVar7) || local_70 != plVar1);
  }
  uVar6 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_147a9176a:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147a9180e FUN_147a9180e body=41 status=ok
// SIG undefined FUN_147a9180e(void)

void FUN_147a9180e(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2c8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147a9184e FUN_147a9184e body=536 status=ok
// SIG undefined FUN_147a9184e(void)

void FUN_147a9184e(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
                  double *param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double *pdVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) goto LAB_147a919fd;
  FUN_140871de8(&local_48);
  *(undefined4 *)(param_4 + 0xb8) = local_48;
  *(undefined4 *)(param_4 + 0xbc) = uStack_44;
  *(undefined4 *)(param_4 + 0xc0) = uStack_40;
  *(undefined4 *)(param_4 + 0xc4) = uStack_3c;
  *(undefined4 *)(param_4 + 200) = local_38;
  *(undefined4 *)(param_4 + 0xcc) = uStack_34;
  *(undefined4 *)(param_4 + 0xd0) = uStack_30;
  *(undefined4 *)(param_4 + 0xd4) = uStack_2c;
  *(byte *)(param_4 + 0xad) = *(byte *)(param_4 + 0xad) | 1;
  *(undefined8 *)(param_4 + 0xf0) = 0;
  lVar7 = *(longlong *)(param_2 + 0x1c8);
  if (lVar7 == 0) {
LAB_147a918da:
    lVar7 = 0;
  }
  else {
    lVar5 = FUN_144a3a302();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_147a918da;
  }
  FUN_14485c47a(param_4 + 0xd8,lVar7);
  lVar7 = *(longlong *)(param_2 + 0x1c8);
  if (lVar7 == 0) {
    pdVar6 = &DAT_14c8464e0;
    uVar8 = SUB84(DAT_14c8464f0,0);
    uVar9 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar8 = (undefined4)*(undefined8 *)(lVar7 + 0x270);
    uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x270) >> 0x20);
    pdVar6 = (double *)(lVar7 + 0x260);
  }
  dVar2 = *pdVar6;
  dVar3 = pdVar6[1];
  *(double *)(param_4 + 0x28) = dVar2;
  *(double *)(param_4 + 0x30) = dVar3;
  *(ulonglong *)(param_4 + 0x38) = CONCAT44(uVar9,uVar8);
  *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(param_4 + 0x30);
  *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(param_4 + 0x38);
  dVar11 = DAT_14c8464e8;
  dVar4 = DAT_14c8464f0;
  dVar13 = DAT_14c8464e0;
  if (param_3 != 0) {
    lVar7 = *(longlong *)(param_3 + 0x1c8);
    if (lVar7 == 0) {
      pdVar6 = &DAT_14c8464e0;
      dVar10 = DAT_14c8464f0;
    }
    else {
      pdVar6 = (double *)(lVar7 + 0x260);
      dVar10 = *(double *)(lVar7 + 0x270);
    }
    dVar10 = (double)CONCAT44(uVar9,uVar8) - dVar10;
    dVar2 = dVar2 - *pdVar6;
    dVar3 = dVar3 - pdVar6[1];
    dVar12 = dVar10 * dVar10 + dVar2 * dVar2 + dVar3 * dVar3;
    if (((dVar12 != 1.0) || (dVar11 = dVar3, dVar4 = dVar10, dVar13 = dVar2, NAN(dVar12))) &&
       (dVar11 = DAT_14c8464e8, dVar4 = DAT_14c8464f0, dVar13 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar12)) {
      dVar13 = 1.0 / SQRT(dVar12);
      dVar11 = dVar3 * dVar13;
      dVar4 = dVar10 * dVar13;
      dVar13 = dVar2 * dVar13;
    }
  }
  *param_5 = dVar13;
  param_5[1] = dVar11;
  param_5[2] = dVar4;
  auVar1._8_4_ = SUB84(dVar11,0);
  auVar1._0_8_ = -dVar13;
  auVar1._12_4_ = (uint)((ulonglong)dVar11 >> 0x20) ^ 0x80000000;
  *(undefined1 (*) [16])(param_4 + 0x58) = auVar1;
  *(double *)(param_4 + 0x68) = -dVar4;
  *(undefined8 *)(param_4 + 0x50) = *(undefined8 *)(param_4 + 0x68);
  *(undefined4 *)(param_4 + 0x40) = *(undefined4 *)(param_4 + 0x58);
  *(undefined4 *)(param_4 + 0x44) = *(undefined4 *)(param_4 + 0x5c);
  *(undefined4 *)(param_4 + 0x48) = *(undefined4 *)(param_4 + 0x60);
  *(undefined4 *)(param_4 + 0x4c) = *(undefined4 *)(param_4 + 100);
LAB_147a919fd:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a91a68 FUN_147a91a68 body=54 status=ok
// SIG undefined FUN_147a91a68(void)

void FUN_147a91a68(longlong param_1,undefined8 param_2,undefined8 param_3,void *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  memcpy(param_4,(void *)(param_1 + 0x30),0x100);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *param_5 = *(undefined8 *)(param_1 + 0x18);
  param_5[1] = uVar1;
  param_5[2] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147a91a9e FUN_147a91a9e body=202 status=ok
// SIG undefined FUN_147a91a9e(void)

void FUN_147a91a9e(longlong param_1,undefined8 param_2,undefined8 param_3,void *param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  memcpy(param_4,*(void **)(param_1 + 0x40),0x100);
  dVar1 = *(double *)((longlong)param_4 + 0x38) - *(double *)(param_1 + 0x38);
  dVar5 = *(double *)((longlong)param_4 + 0x30) - *(double *)(param_1 + 0x30);
  dVar3 = *(double *)((longlong)param_4 + 0x28) - *(double *)(param_1 + 0x28);
  dVar7 = dVar1 * dVar1 + dVar3 * dVar3 + dVar5 * dVar5;
  if (((dVar7 != 1.0) || (dVar2 = dVar1, dVar4 = dVar3, dVar6 = dVar5, NAN(dVar7))) &&
     (dVar2 = DAT_14c8464f0, dVar4 = DAT_14c8464e0, dVar6 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar7)) {
    dVar7 = 1.0 / SQRT(dVar7);
    dVar2 = dVar1 * dVar7;
    dVar4 = dVar3 * dVar7;
    dVar6 = dVar5 * dVar7;
  }
  *param_5 = dVar4;
  param_5[1] = dVar6;
  param_5[2] = dVar2;
  return;
}



// FUNCTION 147a91b68 FUN_147a91b68 body=92 status=ok
// SIG undefined FUN_147a91b68(void)

float FUN_147a91b68(longlong param_1,float param_2)

{
  float _Y;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = 0.0;
  fVar2 = 0.0;
  if (0.0 <= *(float *)(param_1 + 8)) {
    fVar2 = *(float *)(param_1 + 8);
  }
  fVar3 = *(float *)(param_1 + 0xc);
  if (*(float *)(param_1 + 0xc) <= fVar2) {
    fVar3 = fVar2;
  }
  fVar4 = 0.0;
  if (0.0 <= param_2) {
    fVar4 = param_2;
  }
  if ((fVar4 < fVar3) && (fVar1 = 1.0, fVar2 < fVar4)) {
    _Y = *(float *)(param_1 + 0x10);
    if ((_Y != 0.0) || (NAN(_Y))) {
                    /* WARNING: Could not recover jumptable at 0x000147a91bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = powf(1.0 - (fVar4 - fVar2) / (fVar3 - fVar2),_Y);
      return fVar2;
    }
  }
  return fVar1;
}



// FUNCTION 147a91bc4 FUN_147a91bc4 body=29 status=ok
// SIG undefined FUN_147a91bc4(void)

undefined8 FUN_147a91bc4(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f57c6(&DAT_14cad8470);
  return param_2;
}



// FUNCTION 147a91be2 FUN_147a91be2 body=152 status=ok
// SIG undefined FUN_147a91be2(void)

undefined8 FUN_147a91be2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"DisplayName";
  local_28 = 0xb;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"EngineConsoleCommandExecutor";
  local_28 = 0x1c;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,&DAT_149e3af04);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a91c7c FUN_147a91c7c body=152 status=ok
// SIG undefined FUN_147a91c7c(void)

undefined8 FUN_147a91c7c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"Description";
  local_28 = 0xb;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"EngineConsoleCommandExecutor";
  local_28 = 0x1c;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Execute Unreal Console Commands");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a91d16 FUN_147a91d16 body=152 status=ok
// SIG undefined FUN_147a91d16(void)

undefined8 FUN_147a91d16(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"HintText";
  local_28 = 8;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"EngineConsoleCommandExecutor";
  local_28 = 0x1c;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Enter Console Command");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a91db0 FUN_147a91db0 body=201 status=ok
// SIG undefined FUN_147a91db0(void)

undefined8 * FUN_147a91db0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = (int)param_2[1];
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
  iVar1 = (int)param_3[1];
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 147a91e7a FUN_147a91e7a body=60 status=ok
// SIG undefined FUN_147a91e7a(void)

void FUN_147a91e7a(undefined8 param_1,undefined8 param_2)

{
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000147a91eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0x100))(DAT_14c8407a8,&DAT_149dfb77a,param_2);
  return;
}



// FUNCTION 147a91eb6 FUN_147a91eb6 body=267 status=ok
// SIG undefined FUN_147a91eb6(void)

byte FUN_147a91eb6(undefined8 param_1,wchar_t *param_2)

{
  char cVar1;
  byte bVar2;
  size_t sVar3;
  byte bVar4;
  uint uVar5;
  undefined1 auStack_58 [32];
  void *local_38;
  ulonglong uStack_30;
  wchar_t *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xf8))(DAT_14c8407a8,&DAT_149dfb77a,param_2);
  sVar3 = wcslen(param_2);
  local_38 = (void *)0x0;
  uVar5 = (int)sVar3 + 1;
  uStack_30 = (ulonglong)uVar5;
  if (uVar5 != 0) {
    FUN_144a2dbb8(&local_38);
  }
  bVar4 = 0;
  memset(local_38,0,(longlong)(int)uVar5 * 2);
  cVar1 = FUN_14121aa5c(&local_28,local_38,uStack_30 & 0xffffffff,0);
  if (cVar1 != '\0') {
    bVar4 = 0;
    do {
      bVar2 = FUN_147a91fc2(param_1,local_38);
      bVar4 = bVar4 | bVar2;
      cVar1 = FUN_14121aa5c(&local_28,local_38,uStack_30 & 0xffffffff,0);
    } while (cVar1 != '\0');
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4 & 1;
}



// FUNCTION 147a91fc2 FUN_147a91fc2 body=179 status=ok
// SIG undefined FUN_147a91fc2(void)

void FUN_147a91fc2(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  code *UNRECOVERED_JUMPTABLE;
  
  plVar2 = (longlong *)FUN_147d7f3f4(*(undefined8 *)(param_1 + 8));
  if (plVar2 == (longlong *)0x0) {
    plVar6 = (longlong *)(*(longlong *)(param_1 + 8) + 0x28);
    uVar3 = FUN_144a82cde();
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x1150);
    if (0 < lVar5) {
      lVar7 = 0;
      do {
        pcVar1 = *(char **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1148) + lVar7 * 8);
        if ((*pcVar1 == '\x01') && (lVar4 = *(longlong *)(pcVar1 + 0x360), lVar4 != 0))
        goto LAB_147a92063;
        lVar7 = lVar7 + 1;
      } while (lVar5 != lVar7);
    }
    lVar4 = 0;
LAB_147a92063:
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 8);
  }
  else {
    plVar6 = plVar2 + 5;
    uVar3 = FUN_144a82cde();
    lVar4 = (**(code **)(*plVar2 + 0x180))(plVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(plVar2[5] + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000147a9201a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar6,lVar4,param_2,uVar3);
  return;
}



// FUNCTION 147a9207e FUN_147a9207e body=25 status=ok
// SIG undefined FUN_147a9207e(void)

undefined8 FUN_147a9207e(undefined8 param_1,undefined8 param_2)

{
  FUN_146075062(param_2);
  return param_2;
}



// FUNCTION 147a92098 FUN_147a92098 body=25 status=ok
// SIG undefined FUN_147a92098(void)

undefined8 FUN_147a92098(undefined8 param_1,undefined8 param_2)

{
  FUN_146075062(param_2);
  return param_2;
}



// FUNCTION 147a920b6 FUN_147a920b6 body=150 status=ok
// SIG undefined FUN_147a920b6(void)

void FUN_147a920b6(void)

{
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (ABS(DAT_14c846540) <= 1e-08) {
    QueryPerformanceCounter(&local_18);
    DAT_14c866ff8 = (double)local_18.QuadPart * DAT_14c83f420 + 16777216.0 + -0.0001;
  }
  DAT_14c846540 = DAT_14c866ff8;
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a9215e FUN_147a9215e body=402 status=ok
// SIG undefined FUN_147a9215e(void)

void FUN_147a9215e(longlong *param_1,longlong param_2,int param_3,byte param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  *param_1 = param_2;
  *(uint *)(param_1 + 1) = param_3 + 0x1fU >> 5;
  *(int *)((longlong)param_1 + 0xc) = param_3;
  if (param_3 == 0) {
    param_2 = (longlong)param_1 + 0xc;
    *param_1 = param_2;
  }
  uVar4 = 0;
  uVar3 = 1 << ((byte)DAT_14cad85b4 & 0x1f);
  if ((param_4 & 4) != 0) {
    uVar3 = uVar4;
  }
  *(uint *)(param_2 + (ulonglong)(DAT_14cad85b4 >> 5) * 4) =
       *(uint *)(param_2 + (ulonglong)(DAT_14cad85b4 >> 5) * 4) & ~(1 << (DAT_14cad85b4 & 0x1f)) |
       uVar3;
  uVar3 = 1 << ((byte)DAT_14cad85b6 & 0x1f);
  if ((param_4 & 8) != 0) {
    uVar3 = uVar4;
  }
  *(uint *)(*param_1 + (ulonglong)(DAT_14cad85b6 >> 5) * 4) =
       *(uint *)(*param_1 + (ulonglong)(DAT_14cad85b6 >> 5) * 4) & ~(1 << (DAT_14cad85b6 & 0x1f)) |
       uVar3;
  uVar3 = 1 << ((byte)DAT_14cad85b8 & 0x1f);
  if ((param_4 & 0x40) != 0) {
    uVar3 = uVar4;
  }
  *(uint *)(*param_1 + (ulonglong)(DAT_14cad85b8 >> 5) * 4) =
       *(uint *)(*param_1 + (ulonglong)(DAT_14cad85b8 >> 5) * 4) & ~(1 << (DAT_14cad85b8 & 0x1f)) |
       uVar3;
  uVar3 = 1 << ((byte)DAT_14cad85ba & 0x1f);
  if ((param_4 & 0x10) != 0) {
    uVar3 = uVar4;
  }
  *(uint *)(*param_1 + (ulonglong)(DAT_14cad85ba >> 5) * 4) =
       *(uint *)(*param_1 + (ulonglong)(DAT_14cad85ba >> 5) * 4) & ~(1 << (DAT_14cad85ba & 0x1f)) |
       uVar3;
  uVar3 = 1 << ((byte)DAT_14cad85b0 & 0x1f);
  if ((param_4 & 0x20) != 0) {
    uVar3 = uVar4;
  }
  *(uint *)(*param_1 + (ulonglong)(DAT_14cad85b0 >> 5) * 4) =
       *(uint *)(*param_1 + (ulonglong)(DAT_14cad85b0 >> 5) * 4) & ~(1 << (DAT_14cad85b0 & 0x1f)) |
       uVar3;
  uVar3 = 1 << ((byte)DAT_14cad85bc & 0x1f);
  if ((char)param_4 < '\0') {
    uVar3 = uVar4;
  }
  *(uint *)(*param_1 + (ulonglong)(DAT_14cad85bc >> 5) * 4) =
       *(uint *)(*param_1 + (ulonglong)(DAT_14cad85bc >> 5) * 4) & ~(1 << (DAT_14cad85bc & 0x1f)) |
       uVar3;
  bVar2 = (byte)DAT_14cad85b2 & 0x1f;
  puVar1 = (uint *)(*param_1 + (ulonglong)(DAT_14cad85b2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  bVar2 = (byte)DAT_14cad85be & 0x1f;
  puVar1 = (uint *)(*param_1 + (ulonglong)(DAT_14cad85be >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  bVar2 = (byte)DAT_14cad85c0 & 0x1f;
  puVar1 = (uint *)(*param_1 + (ulonglong)(DAT_14cad85c0 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 147a922fc FUN_147a922fc body=324 status=ok
// SIG undefined FUN_147a922fc(void)

void FUN_147a922fc(undefined8 param_1,longlong param_2)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_58 [40];
  undefined *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar2 = *(int **)(param_2 + 0x18);
  uVar3 = 0;
  uVar5 = 0;
  if ((*(double *)(piVar2 + 10) == *(double *)(piVar2 + 4)) &&
     (!NAN(*(double *)(piVar2 + 10)) && !NAN(*(double *)(piVar2 + 4)))) {
    uVar5 = 0;
    if ((*(double *)(piVar2 + 0xc) == *(double *)(piVar2 + 6)) &&
       (!NAN(*(double *)(piVar2 + 0xc)) && !NAN(*(double *)(piVar2 + 6)))) {
      uVar5 = (-(uint)(*(double *)(piVar2 + 8) == *(double *)(piVar2 + 0xe)) & 1) << 2;
    }
  }
  local_10 = *(longlong *)(param_2 + 0x20);
  uVar4 = 0;
  if ((((*(double *)(piVar2 + 0x16) == *(double *)(piVar2 + 0x10)) &&
       (uVar4 = uVar3, !NAN(*(double *)(piVar2 + 0x16)) && !NAN(*(double *)(piVar2 + 0x10)))) &&
      (*(double *)(piVar2 + 0x18) == *(double *)(piVar2 + 0x12))) &&
     (!NAN(*(double *)(piVar2 + 0x18)) && !NAN(*(double *)(piVar2 + 0x12)))) {
    uVar4 = (-(uint)(*(double *)(piVar2 + 0x14) == *(double *)(piVar2 + 0x1a)) & 1) << 3;
  }
  fVar1 = (float)piVar2[0x28];
  *(uint *)(local_10 + 0x13c) =
       *(byte *)((longlong)piVar2 + 0xad) & 3 |
       (-(uint)(fVar1 == 0.0) & 1) << 6 |
       (uint)(*piVar2 == -1) << 5 | (uint)(piVar2[0x2a] == -1) << 4 | uVar4 | uVar5;
  local_20 = 0;
  local_28 = 0;
  local_30 = &DAT_14cad8590;
  local_18 = *(undefined8 *)(param_2 + 0x18);
  (*DAT_14c99c060)(-(uint)(fVar1 == 0.0),&local_30);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a92442 FUN_147a92442 body=296 status=ok
// SIG undefined FUN_147a92442(void)

void FUN_147a92442(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [40];
  undefined *local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  undefined4 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *(longlong *)(param_2 + 0x18);
  puVar2 = *(undefined4 **)(param_2 + 0x20);
  uVar1 = *(uint *)(local_28 + 0x13c);
  local_30 = 0;
  local_38 = 0;
  local_40 = &DAT_14cad8590;
  local_20 = puVar2;
  (*DAT_14c99c068)();
  if ((uVar1 & 4) != 0) {
    *(undefined8 *)(puVar2 + 0xe) = *(undefined8 *)(puVar2 + 8);
    *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar2 + 4);
    *(undefined8 *)(puVar2 + 0xc) = *(undefined8 *)(puVar2 + 6);
  }
  if ((uVar1 & 8) != 0) {
    *(undefined8 *)(puVar2 + 0x1a) = *(undefined8 *)(puVar2 + 0x14);
    *(undefined8 *)(puVar2 + 0x16) = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(puVar2 + 0x12);
  }
  if ((uVar1 & 0x10) != 0) {
    puVar2[0x2a] = 0xffffffff;
  }
  if ((uVar1 & 0x20) != 0) {
    *puVar2 = 0xffffffff;
  }
  if ((uVar1 & 0x40) != 0) {
    puVar2[0x28] = 0;
  }
  if ((char)(byte)uVar1 < '\0') {
    *(undefined1 *)(puVar2 + 0x2b) = 0xff;
  }
  puVar2[2] = (float)SQRT((*(double *)(puVar2 + 0xe) - *(double *)(puVar2 + 0x20)) *
                          (*(double *)(puVar2 + 0xe) - *(double *)(puVar2 + 0x20)) +
                          (*(double *)(puVar2 + 10) - *(double *)(puVar2 + 0x1c)) *
                          (*(double *)(puVar2 + 10) - *(double *)(puVar2 + 0x1c)) +
                          (*(double *)(puVar2 + 0xc) - *(double *)(puVar2 + 0x1e)) *
                          (*(double *)(puVar2 + 0xc) - *(double *)(puVar2 + 0x1e)));
  *(byte *)((longlong)puVar2 + 0xad) = (byte)uVar1 & 3 | *(byte *)((longlong)puVar2 + 0xad) & 0xfc;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9256c FUN_147a9256c body=100 status=ok
// SIG undefined FUN_147a9256c(void)

void FUN_147a9256c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uStack_20 = *(undefined8 *)(param_2 + 6);
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  local_18 = *(undefined8 *)(param_2 + 8);
  local_38 = &DAT_14cad8590;
  (*DAT_14c99c090)(*param_2,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a925d2 FUN_147a925d2 body=345 status=ok
// SIG undefined FUN_147a925d2(void)

undefined8 FUN_147a925d2(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  longlong lStack_80;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_60 [2];
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    lVar2 = *(longlong *)(param_2 + 0x18);
    lVar3 = *(longlong *)(param_2 + 0x20);
    if (*(int *)(lVar2 + 0x13c) == *(int *)(lVar3 + 0x13c)) {
      lVar4 = *DAT_14cad85a0;
      lVar5 = DAT_14cad85a0[2];
      uVar1 = *(ushort *)((longlong)DAT_14cad85a0 + 0x7c);
      local_4c = 0xffffffff;
      FUN_147a9215e(local_60,&local_4c,uVar1);
      local_98 = (undefined *)0x0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_70 = CONCAT31(uStack_70._1_3_,*(undefined1 *)(param_2 + 0x28));
      if (uVar1 != 0) {
        puVar10 = (undefined8 *)(lVar5 + 8);
        uVar9 = 0;
        do {
          if ((*(uint *)(local_60[0] + (uVar9 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar9 & 0x1f) & 1) !=
              0) {
            local_98 = (undefined *)*puVar10;
            uVar8 = (ulonglong)*(uint *)(lVar4 + 4 + uVar9 * 8);
            lStack_80 = lVar2 + uVar8;
            local_78 = uVar8 + lVar3;
            cVar6 = (**(code **)(puVar10[-1] + 0x38))(param_1,&local_98);
            if (cVar6 == '\0') goto LAB_147a92615;
          }
          uVar9 = uVar9 + 1;
          puVar10 = puVar10 + 2;
        } while (uVar1 != uVar9);
      }
LAB_147a9267b:
      uVar7 = 1;
      goto LAB_147a92617;
    }
  }
  else {
    uStack_90 = *(undefined8 *)(param_2 + 8);
    local_88 = *(undefined4 *)(param_2 + 0x10);
    uStack_84 = *(undefined4 *)(param_2 + 0x14);
    uStack_70 = *(undefined4 *)(param_2 + 0x28);
    uStack_6c = *(undefined4 *)(param_2 + 0x2c);
    local_98 = &DAT_14cad8590;
    lStack_80 = *(longlong *)(param_2 + 0x18);
    local_78 = *(longlong *)(param_2 + 0x20);
    cVar6 = (*DAT_14c99c070)(param_1);
    if (cVar6 != '\0') goto LAB_147a9267b;
  }
LAB_147a92615:
  uVar7 = 0;
LAB_147a92617:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 147a9272c FUN_147a9272c body=93 status=ok
// SIG undefined FUN_147a9272c(void)

void FUN_147a9272c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  local_20 = 0;
  local_28 = &DAT_14cad8590;
  local_10 = *(undefined8 *)(param_2 + 0x18);
  (*DAT_14c99c078)(param_1,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9278a FUN_147a9278a body=99 status=ok
// SIG undefined FUN_147a9278a(void)

void FUN_147a9278a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  undefined *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((byte)DAT_14cad85c4 & 0x40) != 0) {
    local_18 = *(undefined4 *)(param_2 + 0x18);
    uStack_14 = *(undefined4 *)(param_2 + 0x1c);
    uStack_10 = *(undefined4 *)(param_2 + 0x20);
    uStack_c = *(undefined4 *)(param_2 + 0x24);
    local_20 = 0;
    local_28 = 0;
    local_30 = &DAT_14cad8590;
    (*DAT_14c99c080)();
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a927ee FUN_147a927ee body=99 status=ok
// SIG undefined FUN_147a927ee(void)

void FUN_147a927ee(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((byte)DAT_14cad85c4 & 0x40) != 0) {
    local_10 = *(undefined8 *)(param_2 + 0x18);
    local_18 = 0;
    local_20 = 0;
    local_28 = &DAT_14cad8590;
    (*DAT_14c99c088)();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a92852 FUN_147a92852 body=132 status=ok
// SIG undefined FUN_147a92852(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a92852(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad85f0) {
    FUN_144b3d300(&DAT_14cad85f0);
    if (DAT_14cad85f0 == -1) {
      _DAT_14cad85e0 = &DAT_14cad84e0;
      _DAT_14cad85d0 = &PTR_LAB_149f970a0;
      _DAT_14cad85e8 = 0;
      _DAT_14cad85d8 = DAT_14cad85c8;
      _Init_thread_footer(&DAT_14cad85f0);
      return;
    }
  }
  return;
}



// FUNCTION 147a928d6 FUN_147a928d6 body=25 status=ok
// SIG undefined FUN_147a928d6(void)

void FUN_147a928d6(void)

{
  FUN_147a92852();
  FUN_146f09d18(&DAT_14cad85d0);
  return;
}



// FUNCTION 147a928f0 FUN_147a928f0 body=784 status=ok
// SIG undefined FUN_147a928f0(void)

void FUN_147a928f0(void)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  uint local_b8;
  uint local_b0;
  undefined8 local_a0;
  undefined1 local_98 [24];
  byte local_80;
  longlong local_78 [10];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_146f11b1e(local_98);
  local_80 = local_80 | 0x10;
  if (DAT_14cad84b8 == 0) {
    uVar4 = FUN_140002dac();
    DAT_14cad84b8 = FUN_140002ddd(FUN_1417c5867,uVar4,L"HitResult");
  }
  FUN_142a6f4a0(local_78,DAT_14cad84b8,local_98);
  lVar3 = DAT_14cad85a0;
  DAT_14cad85a0 = local_78[0];
  local_78[0] = 0;
  if ((lVar3 != 0) && (FUN_146f11920(), local_78[0] != 0)) {
    FUN_146f11920();
  }
  lVar3 = DAT_14cad85a0;
  DAT_14cad85c4 = *(undefined4 *)(DAT_14cad85a0 + 0xb8);
  if (0x20 < *(ushort *)(DAT_14cad85a0 + 0x7c)) {
    local_b8 = (uint)*(ushort *)(DAT_14cad85a0 + 0x7c);
    FUN_140033559(".\\Runtime/Engine/Private/Engine/HitResultNetSerializer.cpp",0x1d8,
                  L"%s Has more than 32 replicated members.",
                  L"FHitResult has changed. Need to update FHitResultNetSerializer.");
  }
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[8] = 0;
  FUN_1446ddc76(local_78,"FaceIndex",1);
  FUN_1446ddc76(&local_a0,"Distance",1);
  local_78[1] = local_a0;
  FUN_1446ddc76(&local_a0,"ImpactPoint",1);
  local_78[2] = local_a0;
  FUN_1446ddc76(&local_a0,"ImpactNormal",1);
  local_78[3] = local_a0;
  FUN_1446ddc76(&local_a0,"PenetrationDepth",1);
  local_78[4] = local_a0;
  FUN_1446ddc76(&local_a0,&DAT_14a50b8bf,1);
  local_78[5] = local_a0;
  FUN_1446ddc76(&local_a0,"ElementIndex",1);
  local_78[6] = local_a0;
  FUN_1446ddc76(&local_a0,"bBlockingHit",1);
  local_78[7] = local_a0;
  FUN_1446ddc76(&local_a0,"bStartPenetrating");
  local_78[8] = local_a0;
  lVar2 = *(longlong *)(lVar3 + 0x38);
  uVar1 = *(ushort *)(lVar3 + 0x7c);
  lVar6 = 0;
  uVar7 = 0;
  do {
    if (uVar1 != 0) {
      lVar8 = 0;
      lVar5 = (ulonglong)uVar1 << 3;
      do {
        lVar9 = *(longlong *)(lVar2 + lVar8 * 8);
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(longlong *)(lVar9 + 0x20);
        }
        if (lVar9 == local_78[lVar6]) {
          uVar7 = uVar7 | 1 << ((uint)lVar6 & 0x1f);
          (&DAT_14cad85b0)[lVar6] = (short)lVar8;
          break;
        }
        lVar8 = lVar8 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    lVar6 = lVar6 + 1;
    if (lVar6 == 9) {
      if (uVar7 != 0x1ff) {
        FUN_140033559(".\\Runtime/Engine/Private/Engine/HitResultNetSerializer.cpp",0x1fd,
                      &DAT_149e0625e,L"Couldn\'t find expected replicated members in FHitResult.");
      }
      if (0x13c < *(uint *)(lVar3 + 0x74)) {
        local_b0 = (uint)*(ushort *)(lVar3 + 0x7a);
        local_b8 = *(uint *)(lVar3 + 0x74);
        FUN_140033559(".\\Runtime/Engine/Private/Engine/HitResultNetSerializer.cpp",0x204,
                      L"FQuantizedType::HitResult has size %u but requires size %u and alignment %u."
                      ,0x13c);
      }
      FUN_146f0bf89(&DAT_14cad84e0,DAT_14cad85c4);
      if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 147a92c27 FUN_147a92c27 body=220 status=ok
// SIG undefined FUN_147a92c27(void)

undefined8 FUN_147a92c27(double *param_1,longlong *param_2)

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
      if ((*(byte *)(param_2 + 5) & 1) == 0) {
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
  FUN_147aac751(&local_2c,param_2);
  *param_1 = (double)local_2c;
  param_1[1] = (double)local_28;
  param_1[2] = (double)local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a92d32 FUN_147a92d32 body=107 status=ok
// SIG undefined FUN_147a92d32(void)

void FUN_147a92d32(double *param_1,double *param_2,int *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  
  if (0 < DAT_14cad86e8) {
    iVar3 = param_3[1];
    iVar4 = param_3[2];
    if (((*param_3 != (int)DAT_14c9a5298) || (iVar3 != DAT_14c9a5298._4_4_)) ||
       (iVar4 != DAT_14c9a52a0)) {
      dVar1 = param_2[2];
      dVar2 = param_2[1];
      *param_1 = (double)*param_3 + *param_2;
      param_1[1] = (double)iVar3 + dVar2;
      param_1[2] = (double)iVar4 + dVar1;
      return;
    }
  }
  param_1[2] = param_2[2];
  dVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = dVar1;
  return;
}



// FUNCTION 147a92db2 FUN_147a92db2 body=4896 status=ok
// SIG undefined FUN_147a92db2(void)

void FUN_147a92db2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8728) {
    FUN_144b3d300(&DAT_14cad8728);
    if (DAT_14cad8728 == -1) {
      FUN_1446f470e(&DAT_14cad8720,L"Channels",1);
      _Init_thread_footer(&DAT_14cad8728);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8734) {
    FUN_144b3d300(&DAT_14cad8734);
    if (DAT_14cad8734 == -1) {
      FUN_1446f470e(&DAT_14cad872c,L"InRate",1);
      _Init_thread_footer(&DAT_14cad8734);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8740) {
    FUN_144b3d300(&DAT_14cad8740);
    if (DAT_14cad8740 == -1) {
      FUN_1446f470e(&DAT_14cad8738,L"OutRate",1);
      _Init_thread_footer(&DAT_14cad8740);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad874c) {
    FUN_144b3d300(&DAT_14cad874c);
    if (DAT_14cad874c == -1) {
      FUN_1446f470e(&DAT_14cad8744,L"MaxPacketOverhead",1);
      _Init_thread_footer(&DAT_14cad874c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8758) {
    FUN_144b3d300(&DAT_14cad8758);
    if (DAT_14cad8758 == -1) {
      FUN_1446f470e(&DAT_14cad8750,L"InRateClientMax",1);
      _Init_thread_footer(&DAT_14cad8758);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8764) {
    FUN_144b3d300(&DAT_14cad8764);
    if (DAT_14cad8764 == -1) {
      FUN_1446f470e(&DAT_14cad875c,L"InRateClientMin",1);
      _Init_thread_footer(&DAT_14cad8764);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8770) {
    FUN_144b3d300(&DAT_14cad8770);
    if (DAT_14cad8770 == -1) {
      FUN_1446f470e(&DAT_14cad8768,L"InRateClientAvg",1);
      _Init_thread_footer(&DAT_14cad8770);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad877c) {
    FUN_144b3d300(&DAT_14cad877c);
    if (DAT_14cad877c == -1) {
      FUN_1446f470e(&DAT_14cad8774,L"InPacketsClientMax",1);
      _Init_thread_footer(&DAT_14cad877c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8788) {
    FUN_144b3d300(&DAT_14cad8788);
    if (DAT_14cad8788 == -1) {
      FUN_1446f470e(&DAT_14cad8780,L"InPacketsClientMin",1);
      _Init_thread_footer(&DAT_14cad8788);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8794) {
    FUN_144b3d300(&DAT_14cad8794);
    if (DAT_14cad8794 == -1) {
      FUN_1446f470e(&DAT_14cad878c,L"InPacketsClientAvg",1);
      _Init_thread_footer(&DAT_14cad8794);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad87a0) {
    FUN_144b3d300(&DAT_14cad87a0);
    if (DAT_14cad87a0 == -1) {
      FUN_1446f470e(&DAT_14cad8798,L"OutRateClientMax",1);
      _Init_thread_footer(&DAT_14cad87a0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad87ac) {
    FUN_144b3d300(&DAT_14cad87ac);
    if (DAT_14cad87ac == -1) {
      FUN_1446f470e(&DAT_14cad87a4,L"OutRateClientMin",1);
      _Init_thread_footer(&DAT_14cad87ac);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad87b8) {
    FUN_144b3d300(&DAT_14cad87b8);
    if (DAT_14cad87b8 == -1) {
      FUN_1446f470e(&DAT_14cad87b0,L"OutRateClientAvg",1);
      _Init_thread_footer(&DAT_14cad87b8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad87c4) {
    FUN_144b3d300(&DAT_14cad87c4);
    if (DAT_14cad87c4 == -1) {
      FUN_1446f470e(&DAT_14cad87bc,L"OutPacketsClientMax",1);
      _Init_thread_footer(&DAT_14cad87c4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad87d0) {
    FUN_144b3d300(&DAT_14cad87d0);
    if (DAT_14cad87d0 == -1) {
      FUN_1446f470e(&DAT_14cad87c8,L"OutPacketsClientMin",1);
      _Init_thread_footer(&DAT_14cad87d0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad87dc) {
    FUN_144b3d300(&DAT_14cad87dc);
    if (DAT_14cad87dc == -1) {
      FUN_1446f470e(&DAT_14cad87d4,L"OutPacketsClientAvg",1);
      _Init_thread_footer(&DAT_14cad87dc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad87e8) {
    FUN_144b3d300(&DAT_14cad87e8);
    if (DAT_14cad87e8 == -1) {
      FUN_1446f470e(&DAT_14cad87e0,L"NetNumClients",1);
      _Init_thread_footer(&DAT_14cad87e8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad87f4) {
    FUN_144b3d300(&DAT_14cad87f4);
    if (DAT_14cad87f4 == -1) {
      FUN_1446f470e(&DAT_14cad87ec,L"InPackets",1);
      _Init_thread_footer(&DAT_14cad87f4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8800) {
    FUN_144b3d300(&DAT_14cad8800);
    if (DAT_14cad8800 == -1) {
      FUN_1446f470e(&DAT_14cad87f8,L"OutPackets",1);
      _Init_thread_footer(&DAT_14cad8800);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad880c) {
    FUN_144b3d300(&DAT_14cad880c);
    if (DAT_14cad880c == -1) {
      FUN_1446f470e(&DAT_14cad8804,L"InBunches",1);
      _Init_thread_footer(&DAT_14cad880c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8818) {
    FUN_144b3d300(&DAT_14cad8818);
    if (DAT_14cad8818 == -1) {
      FUN_1446f470e(&DAT_14cad8810,L"OutBunches",1);
      _Init_thread_footer(&DAT_14cad8818);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8824) {
    FUN_144b3d300(&DAT_14cad8824);
    if (DAT_14cad8824 == -1) {
      FUN_1446f470e(&DAT_14cad881c,L"OutLoss",1);
      _Init_thread_footer(&DAT_14cad8824);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8830) {
    FUN_144b3d300(&DAT_14cad8830);
    if (DAT_14cad8830 == -1) {
      FUN_1446f470e(&DAT_14cad8828,L"InLoss",1);
      _Init_thread_footer(&DAT_14cad8830);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad883c) {
    FUN_144b3d300(&DAT_14cad883c);
    if (DAT_14cad883c == -1) {
      FUN_1446f470e(&DAT_14cad8834,L"VoiceBytesSent",1);
      _Init_thread_footer(&DAT_14cad883c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8848) {
    FUN_144b3d300(&DAT_14cad8848);
    if (DAT_14cad8848 == -1) {
      FUN_1446f470e(&DAT_14cad8840,L"VoiceBytesRecv",1);
      _Init_thread_footer(&DAT_14cad8848);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8854) {
    FUN_144b3d300(&DAT_14cad8854);
    if (DAT_14cad8854 == -1) {
      FUN_1446f470e(&DAT_14cad884c,L"VoicePacketsSent",1);
      _Init_thread_footer(&DAT_14cad8854);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8860) {
    FUN_144b3d300(&DAT_14cad8860);
    if (DAT_14cad8860 == -1) {
      FUN_1446f470e(&DAT_14cad8858,L"VoicePacketsRecv",1);
      _Init_thread_footer(&DAT_14cad8860);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad886c) {
    FUN_144b3d300(&DAT_14cad886c);
    if (DAT_14cad886c == -1) {
      FUN_1446f470e(&DAT_14cad8864,L"PercentInVoice",1);
      _Init_thread_footer(&DAT_14cad886c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8878) {
    FUN_144b3d300(&DAT_14cad8878);
    if (DAT_14cad8878 == -1) {
      FUN_1446f470e(&DAT_14cad8870,L"PercentOutVoice",1);
      _Init_thread_footer(&DAT_14cad8878);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8884) {
    FUN_144b3d300(&DAT_14cad8884);
    if (DAT_14cad8884 == -1) {
      FUN_1446f470e(&DAT_14cad887c,L"NumActorChannels",1);
      _Init_thread_footer(&DAT_14cad8884);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8890) {
    FUN_144b3d300(&DAT_14cad8890);
    if (DAT_14cad8890 == -1) {
      FUN_1446f470e(&DAT_14cad8888,L"NumConsideredActors",1);
      _Init_thread_footer(&DAT_14cad8890);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad889c) {
    FUN_144b3d300(&DAT_14cad889c);
    if (DAT_14cad889c == -1) {
      FUN_1446f470e(&DAT_14cad8894,L"PrioritizedActors",1);
      _Init_thread_footer(&DAT_14cad889c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad88a8) {
    FUN_144b3d300(&DAT_14cad88a8);
    if (DAT_14cad88a8 == -1) {
      FUN_1446f470e(&DAT_14cad88a0,L"NumRelevantActors",1);
      _Init_thread_footer(&DAT_14cad88a8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad88b4) {
    FUN_144b3d300(&DAT_14cad88b4);
    if (DAT_14cad88b4 == -1) {
      FUN_1446f470e(&DAT_14cad88ac,L"NumRelevantDeletedActors",1);
      _Init_thread_footer(&DAT_14cad88b4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad88c0) {
    FUN_144b3d300(&DAT_14cad88c0);
    if (DAT_14cad88c0 == -1) {
      FUN_1446f470e(&DAT_14cad88b8,L"NumReplicatedActorAttempts",1);
      _Init_thread_footer(&DAT_14cad88c0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad88cc) {
    FUN_144b3d300(&DAT_14cad88cc);
    if (DAT_14cad88cc == -1) {
      FUN_1446f470e(&DAT_14cad88c4,L"NumReplicatedActors",1);
      _Init_thread_footer(&DAT_14cad88cc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad88d8) {
    FUN_144b3d300(&DAT_14cad88d8);
    if (DAT_14cad88d8 == -1) {
      FUN_1446f470e(&DAT_14cad88d0,L"NumActors",1);
      _Init_thread_footer(&DAT_14cad88d8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad88e4) {
    FUN_144b3d300(&DAT_14cad88e4);
    if (DAT_14cad88e4 == -1) {
      FUN_1446f470e(&DAT_14cad88dc,L"NumNetActors",1);
      _Init_thread_footer(&DAT_14cad88e4);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad88f0) {
    FUN_144b3d300(&DAT_14cad88f0);
    if (DAT_14cad88f0 == -1) {
      FUN_1446f470e(&DAT_14cad88e8,L"NumDormantActors",1);
      _Init_thread_footer(&DAT_14cad88f0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad88fc) {
    FUN_144b3d300(&DAT_14cad88fc);
    if (DAT_14cad88fc == -1) {
      FUN_1446f470e(&DAT_14cad88f4,L"NumInitiallyDormantActors",1);
      _Init_thread_footer(&DAT_14cad88fc);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8908) {
    FUN_144b3d300(&DAT_14cad8908);
    if (DAT_14cad8908 == -1) {
      FUN_1446f470e(&DAT_14cad8900,L"NumNetGUIDsAckd",1);
      _Init_thread_footer(&DAT_14cad8908);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8914) {
    FUN_144b3d300(&DAT_14cad8914);
    if (DAT_14cad8914 == -1) {
      FUN_1446f470e(&DAT_14cad890c,L"NumNetGUIDsPending",1);
      _Init_thread_footer(&DAT_14cad8914);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8920) {
    FUN_144b3d300(&DAT_14cad8920);
    if (DAT_14cad8920 == -1) {
      FUN_1446f470e(&DAT_14cad8918,L"NumNetGUIDsUnAckd",1);
      _Init_thread_footer(&DAT_14cad8920);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad892c) {
    FUN_144b3d300(&DAT_14cad892c);
    if (DAT_14cad892c == -1) {
      FUN_1446f470e(&DAT_14cad8924,L"ObjPathBytes",1);
      _Init_thread_footer(&DAT_14cad892c);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8938) {
    FUN_144b3d300(&DAT_14cad8938);
    if (DAT_14cad8938 == -1) {
      FUN_1446f470e(&DAT_14cad8930,L"NetGUIDOutRate",1);
      _Init_thread_footer(&DAT_14cad8938);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8944) {
    FUN_144b3d300(&DAT_14cad8944);
    if (DAT_14cad8944 == -1) {
      FUN_1446f470e(&DAT_14cad893c,L"NetGUIDInRate",1);
      _Init_thread_footer(&DAT_14cad8944);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8950) {
    FUN_144b3d300(&DAT_14cad8950);
    if (DAT_14cad8950 == -1) {
      FUN_1446f470e(&DAT_14cad8948,L"NetSaturated",1);
      _Init_thread_footer(&DAT_14cad8950);
      return;
    }
  }
  return;
}



// FUNCTION 147a940d2 FUN_147a940d2 body=3539 status=ok
// SIG undefined FUN_147a940d2(void)

void FUN_147a940d2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_14111712a();
  uVar2 = FUN_140c13342();
  FUN_147d8a0ff(uVar2,uVar1,1,param_2);
  FUN_1446f470e(&local_58,L"Channels",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InRate",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"OutRate",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"MaxPacketOverhead",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InRateClientMax",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InRateClientMin",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InRateClientAvg",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InPacketsClientMax",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InPacketsClientMin",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InPacketsClientAvg",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"OutRateClientMax",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"OutRateClientMin",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"OutRateClientAvg",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"OutPacketsClientMax",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"OutPacketsClientMin",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"OutPacketsClientAvg",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NetNumClients",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InPackets",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"OutPackets",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InBunches",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"OutBunches",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"OutLoss",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"InLoss",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"VoiceBytesSent",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"VoiceBytesRecv",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"VoicePacketsSent",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"VoicePacketsRecv",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PercentInVoice",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PercentOutVoice",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NumActorChannels",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NumConsideredActors",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PrioritizedActors",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NumRelevantActors",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NumRelevantDeletedActors",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NumReplicatedActorAttempts",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NumReplicatedActors",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NumActors",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NumNetActors",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NumDormantActors",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NumInitiallyDormantActors",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NumNetGUIDsAckd",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NumNetGUIDsPending",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NumNetGUIDsUnAckd",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"ObjPathBytes",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NetGUIDOutRate",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NetGUIDInRate",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"NetSaturated",1);
  uVar1 = FUN_140c13342();
  FUN_140c13342();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a94ea6 FUN_147a94ea6 body=125 status=ok
// SIG undefined FUN_147a94ea6(void)

void FUN_147a94ea6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1405f1eac();
  if (param_1[0x2e] != 0) {
    FUN_1401a700c(local_14,0x11a);
  }
  iVar1 = FUN_14487fd02(param_1);
  if (iVar1 == 3) {
    lVar2 = FUN_1405f1c0c(param_1);
    *(byte *)(lVar2 + 0x30a) = *(byte *)(lVar2 + 0x30a) | 4;
  }
  else {
    (**(code **)(*param_1 + 0x400))(param_1,0);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a94f24 FUN_147a94f24 body=112 status=ok
// SIG undefined FUN_147a94f24(void)

void FUN_147a94f24(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1401a700c(local_14,0x11a);
  }
  iVar1 = FUN_14487fd02(param_1);
  if (iVar1 == 3) {
    lVar2 = FUN_1405f1c0c(param_1);
    *(byte *)(lVar2 + 0x30a) = *(byte *)(lVar2 + 0x30a) & 0xfb;
  }
  FUN_1407fb560(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a94fa6 FUN_147a94fa6 body=138 status=ok
// SIG undefined FUN_147a94fa6(void)

undefined8 FUN_147a94fa6(undefined8 param_1,longlong *param_2,int *param_3)

{
  undefined4 uVar1;
  
  if ((ABS((double)*param_3 / (double)param_3[1] + -29.970029970029973) <= 1e-08) ||
     (ABS((double)*param_3 / (double)param_3[1] + -59.940059940059946) <= 1e-08)) {
    uVar1 = FUN_14681e9e6();
  }
  else {
    uVar1 = 0;
  }
  FUN_147aa7cae(param_1,(double)*param_2 / 10000000.0,param_3,uVar1);
  return param_1;
}



// FUNCTION 147a95030 FUN_147a95030 body=289 status=ok
// SIG undefined FUN_147a95030(void)

int * FUN_147a95030(int *param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  float fVar6;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  dVar3 = DAT_14cad8970;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  QueryPerformanceCounter(&local_48);
  dVar3 = fmod((double)local_48.QuadPart * DAT_14c83f420 + 16777216.0 + dVar3,86400.0);
  dVar5 = ((double)(int)param_2 * dVar3) / (double)(int)((ulonglong)param_2 >> 0x20);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar5;
  auVar4 = roundpd(auVar4,auVar4,1);
  dVar3 = auVar4._0_8_;
  dVar5 = dVar5 - dVar3;
  if (2147483647.0 <= dVar3) {
    dVar3 = 2147483647.0;
  }
  if (dVar3 <= -2147483648.0) {
    dVar3 = -2147483648.0;
  }
  iVar1 = (int)dVar5;
  fVar2 = (float)dVar5 - (float)iVar1;
  fVar6 = fVar2;
  if (0.99999994 <= fVar2) {
    fVar6 = 0.99999994;
  }
  fVar6 = (float)(~-(uint)(0.0 < fVar2) & (uint)fVar2 | (uint)fVar6 & -(uint)(0.0 < fVar2)) + 0.5 +
          -0.5;
  *param_1 = (int)dVar3 + iVar1;
  if (0.99999994 <= fVar6) {
    fVar6 = 0.99999994;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  param_1[1] = (int)fVar6;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a95172 FUN_147a95172 body=183 status=ok
// SIG undefined FUN_147a95172(void)

void FUN_147a95172(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined1 *puStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  puStack_28 = &DAT_100000018;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a0))(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9522a FUN_147a9522a body=236 status=ok
// SIG undefined FUN_147a9522a(void)

void FUN_147a9522a(longlong *param_1,longlong param_2,int *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_58 [40];
  int local_30;
  float local_2c;
  undefined4 uStack_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b0))(param_1,&local_30);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (double)*(float *)(param_1 + 5);
  auVar4 = roundpd(auVar4,auVar4,1);
  dVar3 = auVar4._0_8_;
  dVar2 = (double)*(float *)(param_1 + 5) - dVar3;
  if (2147483647.0 <= dVar3) {
    dVar3 = 2147483647.0;
  }
  if (dVar3 <= -2147483648.0) {
    dVar3 = -2147483648.0;
  }
  fVar1 = (float)dVar2;
  if (0.99999994 <= fVar1) {
    fVar1 = 0.99999994;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 + 0.5 + -0.5;
  if (0.99999994 <= fVar1) {
    fVar1 = 0.99999994;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  local_2c = local_2c - fVar1;
  auVar4 = roundps(ZEXT416((uint)local_2c),ZEXT416((uint)local_2c),1);
  local_30 = ((int)auVar4._0_4_ + local_30) - (int)dVar3;
  local_2c = local_2c - auVar4._0_4_;
  *param_3 = local_30;
  *(ulonglong *)(param_3 + 1) = CONCAT44(uStack_28,local_2c);
  param_3[3] = local_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a95318 FUN_147a95318 body=96 status=ok
// SIG undefined FUN_147a95318(void)

void FUN_147a95318(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a9537a(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9537a FUN_147a9537a body=231 status=ok
// SIG undefined FUN_147a9537a(void)

undefined8 FUN_147a9537a(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  float local_2c;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x2b0))(param_1,&local_30);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (double)*(float *)(param_1 + 5);
  auVar4 = roundpd(auVar4,auVar4,1);
  dVar3 = auVar4._0_8_;
  dVar2 = (double)*(float *)(param_1 + 5) - dVar3;
  if (2147483647.0 <= dVar3) {
    dVar3 = 2147483647.0;
  }
  if (dVar3 <= -2147483648.0) {
    dVar3 = -2147483648.0;
  }
  fVar1 = (float)dVar2;
  if (0.99999994 <= fVar1) {
    fVar1 = 0.99999994;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 + 0.5 + -0.5;
  if (0.99999994 <= fVar1) {
    fVar1 = 0.99999994;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  local_2c = local_2c - fVar1;
  auVar4 = roundps(ZEXT416((uint)local_2c),ZEXT416((uint)local_2c),1);
  local_34 = (int)auVar4._0_4_ + (local_30 - (int)dVar3);
  local_2c = local_2c - auVar4._0_4_;
  local_30 = local_34;
  FUN_14680026a(param_2,&local_34,local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a95462 FUN_147a95462 body=93 status=ok
// SIG undefined FUN_147a95462(void)

void FUN_147a95462(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b0))(param_1,local_28);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a954c0 FUN_147a954c0 body=92 status=ok
// SIG undefined FUN_147a954c0(void)

void FUN_147a954c0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b0))(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9551e FUN_147a9551e body=41 status=ok
// SIG undefined FUN_147a9551e(void)

void FUN_147a9551e(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147a95548 FUN_147a95548 body=126 status=ok
// SIG undefined FUN_147a95548(void)

void FUN_147a95548(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b0))(param_1,local_28);
  local_2c = local_28[0];
  FUN_14680026a(&local_44);
  *(undefined8 *)(param_3 + 4) = local_34;
  *param_3 = local_44;
  param_3[1] = uStack_40;
  param_3[2] = uStack_3c;
  param_3[3] = uStack_38;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a955cf FUN_147a955cf body=269 status=ok
// SIG undefined FUN_147a955cf(void)

ulonglong FUN_147a955cf(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144a5dc74(&local_58);
  plVar1 = local_58;
  local_38 = 0;
  plVar2 = (longlong *)*param_2;
  if (local_58 != plVar2) {
    local_58 = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
    }
  }
  local_50 = (undefined4)param_2[1];
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  plVar2 = (longlong *)FUN_14479d2ce(param_1);
  uVar3 = FUN_14477b072(plVar2,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar2 + 0x248))(plVar2,uVar3,&local_58);
  plVar2 = (longlong *)*param_2;
  if (plVar2 != local_58) {
    *param_2 = (longlong)local_58;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_2 + 1) = local_50;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  uVar4 = CONCAT71((int7)((ulonglong)plVar2 >> 8),local_38);
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 147a956de FUN_147a956de body=191 status=ok
// SIG undefined FUN_147a956de(void)

void FUN_147a956de(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *puVar2;
  local_40 = puVar2[1];
  uVar1 = FUN_147a9579e(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9579e FUN_147a9579e body=91 status=ok
// SIG undefined FUN_147a9579e(void)

int FUN_147a9579e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_147aaca3e((longlong *)(param_1 + 0x30));
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  lVar5 = (longlong)iVar1 * 0x50;
  *(undefined8 *)(lVar4 + lVar5) = uVar2;
  *(undefined8 *)(lVar4 + 8 + lVar5) = uVar3;
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = 0;
  *(undefined8 *)(lVar4 + 0x20 + lVar5) = 0;
  return iVar1;
}



// FUNCTION 147a957fa FUN_147a957fa body=475 status=ok
// SIG undefined FUN_147a957fa(void)

void FUN_147a957fa(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [20];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144a5dc74(&local_40);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  uVar1 = local_54;
  puVar2 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_50;
  uStack_74 = uStack_4c;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  local_88 = local_40;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 8))();
  }
  local_80 = local_38;
  local_98 = puVar2;
  FUN_147a959d6(param_1,&local_88,&local_78,uVar1);
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a959d6 FUN_147a959d6 body=689 status=ok
// SIG undefined FUN_147a959d6(void)

/* WARNING: Removing unreachable block (ram,0x000147a95b05) */

void FUN_147a959d6(longlong param_1,longlong *param_2,longlong *param_3,float param_4,
                  undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar8 = FUN_144a126be();
  if (lVar8 == 0) goto LAB_147a95c21;
  plVar9 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14a8e9880;
  plVar3 = (longlong *)*param_2;
  plVar9[2] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(int *)(plVar9 + 3) = (int)param_2[1];
  lVar4 = param_3[1];
  plVar9[4] = *param_3;
  plVar9[5] = lVar4;
  uVar5 = param_5[1];
  uVar6 = param_5[2];
  uVar7 = param_5[3];
  *(undefined4 *)(plVar9 + 6) = *param_5;
  *(undefined4 *)((longlong)plVar9 + 0x34) = uVar5;
  *(undefined4 *)(plVar9 + 7) = uVar6;
  *(undefined4 *)((longlong)plVar9 + 0x3c) = uVar7;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
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
  plVar3 = (longlong *)(param_1 + 0x40);
  iVar2 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar2 + 1U) {
    FUN_147aacc34(plVar3,iVar2);
  }
  lVar4 = *plVar3;
  *(longlong **)(lVar4 + (longlong)iVar2 * 0x10) = plVar9 + 2;
  *(longlong **)(lVar4 + 8 + (longlong)iVar2 * 0x10) = plVar9;
  if (plVar9 == (longlong *)0x0) {
    if ((param_4 == 0.0) && (!NAN(param_4))) goto LAB_147a95c21;
LAB_147a95b29:
    local_b0 = 0;
    local_b8 = (undefined8 *)0x0;
    local_c0 = 0;
    FUN_1446efa72(&local_b8,0,3,0x10);
    local_b0 = 3;
    *local_b8 = &PTR_LAB_14a8e9910;
    local_b8[1] = plVar9 + 2;
    local_b8[2] = plVar9;
    local_b8[3] = plVar3;
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
    local_b8[4] = lVar11;
    *local_b8 = &PTR_FUN_14a8e98a0;
    uVar10 = FUN_144a88394(lVar8);
    local_a8 = 0;
    local_a0 = 0;
    FUN_14487d8d8(&local_a8,&local_b8);
    local_68 = 1;
    local_d0 = 0xbf800000;
    local_d8 = 0;
    FUN_1406f3fee(uVar10,&local_c0,&local_a8,param_4);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
    FUN_1449db362(&local_b8);
    if (plVar9 == (longlong *)0x0) goto LAB_147a95c21;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    if ((param_4 != 0.0) || (NAN(param_4))) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      goto LAB_147a95b29;
    }
  }
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
LAB_147a95c21:
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a95c88 FUN_147a95c88 body=154 status=ok
// SIG undefined FUN_147a95c88(void)

void FUN_147a95c88(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a95d24(param_1,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a95d24 FUN_147a95d24 body=74 status=ok
// SIG undefined FUN_147a95d24(void)

void FUN_147a95d24(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x38))) {
    FUN_147a95dec((ulonglong)param_2 * 0x50 + *(longlong *)(param_1 + 0x30));
    FUN_147aacad2(param_1 + 0x30,param_2);
    FUN_147aacb56(param_1 + 0x30);
    return;
  }
  return;
}



// FUNCTION 147a95d72 FUN_147a95d72 body=122 status=ok
// SIG undefined FUN_147a95d72(void)

undefined8 FUN_147a95d72(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  cVar1 = FUN_14113f0c0();
  if (cVar1 != '\0') {
    uVar2 = FUN_147a955cf(param_1,param_2,param_3);
    return uVar2;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar3 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
                    /* WARNING: Could not recover jumptable at 0x000147a95dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)(uVar2,param_2,param_3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147a95dec FUN_147a95dec body=238 status=ok
// SIG undefined FUN_147a95dec(void)

void FUN_147a95dec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  local_88 = param_1[2];
  uStack_40 = param_1[3];
  local_78 = (longlong *)param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  local_18 = param_1[8];
  uStack_10 = param_1[9];
  uVar5 = local_18;
  uVar6 = uStack_10;
  uVar3 = local_28;
  uVar4 = uStack_20;
  local_38 = local_78;
  uVar2 = uStack_30;
  local_48 = local_88;
  uVar1 = uStack_40;
  param_1[8] = CONCAT44(uStack_54,local_58);
  param_1[9] = CONCAT44(uStack_4c,uStack_50);
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = 0;
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = 0;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_18._4_4_ = (undefined4)((ulonglong)local_18 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = (undefined4)local_18;
  uStack_54 = local_18._4_4_;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = uVar1;
  uStack_30 = uVar2;
  local_28 = uVar3;
  uStack_20 = uVar4;
  local_18 = uVar5;
  uStack_10 = uVar6;
  if (local_88 != 0) {
    plVar7 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_68;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a95edc FUN_147a95edc body=382 status=ok
// SIG undefined FUN_147a95edc(void)

ulonglong FUN_147a95edc(longlong *param_1,longlong param_2,int *param_3,longlong *param_4,
                       longlong *param_5)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0xac) & 1) != 0) {
      FUN_140033559(".\\Runtime/Engine/Private/ExternalTexture.cpp",0x45,
                    L"FMaterialRenderProxy was already marked for garbage collection");
    }
    if (*(int *)(param_2 + 8) != -1) {
      FUN_147aacf10(param_1 + 10,local_3c,&local_38,0);
    }
  }
  if (((param_3[1] != 0 || *param_3 != 0) || param_3[2] != 0) || param_3[3] != 0) {
    uVar5 = FUN_1447addd0(param_3,0x10);
    iVar6 = FUN_147aacdd0(param_1,uVar5,param_3);
    if ((iVar6 != -1) && (lVar8 = (longlong)iVar6 * 0x48 + *param_1, lVar8 != 0)) {
      lVar3 = *(longlong *)(lVar8 + 0x10);
      lVar4 = *param_4;
      if (lVar4 != lVar3) {
        *param_4 = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
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
      }
      lVar8 = *(longlong *)(lVar8 + 0x18);
      lVar3 = *param_5;
      uVar7 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      if (lVar3 != lVar8) {
        *param_5 = lVar8;
        if (lVar8 != 0) {
          LOCK();
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
          UNLOCK();
        }
        if (lVar3 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar3 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
      goto LAB_147a95f5c;
    }
  }
  uVar7 = 0;
LAB_147a95f5c:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9605c FUN_147a9605c body=132 status=ok
// SIG undefined FUN_147a9605c(void)

ulonglong FUN_147a9605c(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  uVar3 = FUN_1447addd0(param_2,0x10);
  iVar4 = FUN_147aacdd0(param_1,uVar3,param_2);
  if (iVar4 == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)iVar4 * 0x48 + *param_1;
  }
  lVar6 = lVar5 + 0x10;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  if (lVar6 != 0) {
    uVar3 = *(undefined4 *)(lVar6 + 0x14);
    uVar1 = *(undefined4 *)(lVar6 + 0x18);
    uVar2 = *(undefined4 *)(lVar6 + 0x1c);
    *param_3 = *(undefined4 *)(lVar6 + 0x10);
    param_3[1] = uVar3;
    param_3[2] = uVar1;
    param_3[3] = uVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar6 != 0) & 0xffffffff;
}



// FUNCTION 147a960e0 FUN_147a960e0 body=132 status=ok
// SIG undefined FUN_147a960e0(void)

ulonglong FUN_147a960e0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  uVar3 = FUN_1447addd0(param_2,0x10);
  iVar4 = FUN_147aacdd0(param_1,uVar3,param_2);
  if (iVar4 == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = (longlong)iVar4 * 0x48 + *param_1;
  }
  lVar6 = lVar5 + 0x10;
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  if (lVar6 != 0) {
    uVar3 = *(undefined4 *)(lVar6 + 0x24);
    uVar1 = *(undefined4 *)(lVar6 + 0x28);
    uVar2 = *(undefined4 *)(lVar6 + 0x2c);
    *param_3 = *(undefined4 *)(lVar6 + 0x20);
    param_3[1] = uVar3;
    param_3[2] = uVar1;
    param_3[3] = uVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar6 != 0) & 0xffffffff;
}



// FUNCTION 147a96164 FUN_147a96164 body=900 status=ok
// SIG undefined FUN_147a96164(void)

ulonglong FUN_147a96164(void *param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                       longlong param_5,char param_6,char param_7,char param_8,longlong *param_9,
                       undefined8 param_10,undefined8 param_11)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  void *_Dst;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  longlong **local_90;
  undefined4 local_88;
  longlong **local_80;
  undefined4 local_78;
  undefined1 local_74 [4];
  wchar_t *local_70;
  longlong ***local_68;
  undefined4 local_60;
  longlong ***local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_4 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    if (param_4 != (longlong *)0x0) goto LAB_147a961a6;
  }
  else {
    FUN_1456cec3c(param_4);
LAB_147a961a6:
    uVar2 = FUN_1458f046a();
    plVar3 = (longlong *)FUN_144718840(param_4,uVar2);
    if (param_3 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
      uVar8 = 0;
      cVar1 = (**(code **)(*param_3 + 200))(param_3,param_2,param_1,0);
      if (cVar1 != '\0') goto LAB_147a9629d;
      if (param_7 == '\x01' && param_5 != 0) {
        lVar4 = FUN_144a6c4d8();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_14103d96c(param_5);
        }
      }
      cVar1 = (**(code **)(*param_3 + 0x80))(param_3);
      if (cVar1 == '\0') {
        _Dst = (void *)((longlong)*(int *)((longlong)param_3 + 0x44) + (longlong)param_4);
        if (_Dst != param_1) {
          if ((*(byte *)((longlong)param_3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_3 + 0x100))(param_3,_Dst,param_1,(int)param_3[6]);
          }
          else {
            memcpy(_Dst,param_1,
                   (longlong)(int)param_3[6] * (longlong)*(int *)((longlong)param_3 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_3 + 0x98))(param_3,param_4,param_1);
      }
      if (param_8 == '\0') {
LAB_147a963a5:
        lVar4 = param_9[1];
        if ((longlong)(int)lVar4 != 0) {
          local_91 = 1;
          lVar6 = *param_9;
          lVar7 = 0;
          do {
            uVar2 = *(undefined8 *)(lVar6 + lVar7);
            puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3);
            local_80 = (longlong **)0x0;
            local_58 = &local_80;
            local_68 = (longlong ***)&local_58;
            local_70 = L"譈䰂䆋䰈쀹౵劋䠈ঋ襈褁ࡑ㥌࿀삕쳃쀱襈뢂";
            local_50 = uVar2;
            uVar2 = (**(code **)*puVar5)(puVar5,param_4[2],&local_70);
            if ((longlong ***)local_80 != (longlong ***)0x0) {
              local_88 = local_78;
              local_90 = local_80;
              uVar2 = (**(code **)(*plVar3 + 0x38))(plVar3,&local_90);
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)(int)lVar4 * 8 != lVar7);
          uVar8 = CONCAT71((int7)((ulonglong)uVar2 >> 8),local_91) & 0xffffffff;
          goto LAB_147a9629d;
        }
      }
      else {
        FUN_14117d830(param_4,(short)param_3[8],param_3[4]);
        if ((param_6 == '\0') || (param_3[0xd] == 0)) goto LAB_147a963a5;
        lVar4 = FUN_1400796d0(param_4[2],param_3[0xd],1);
        if ((lVar4 == 0) || (*(char *)(lVar4 + 0xb4) != '\0')) goto LAB_147a963a5;
        lVar6 = FUN_140d2ab24(lVar4);
        if (lVar6 != 0) goto LAB_147a963a5;
        (**(code **)(*param_4 + 0x248))(param_4,lVar4,0);
      }
      uVar8 = 1;
      goto LAB_147a9629d;
    }
  }
  local_70 = L"MissingInputProperty";
  local_68._0_4_ = 0x14;
  FUN_1446e940c(&local_80,&local_70);
  local_70 = L"FieldNotificationLibrary";
  local_68 = (longlong ***)CONCAT44(local_68._4_4_,0x18);
  FUN_1446e940c(local_74,&local_70);
  FUN_140208bae(&local_58,local_74,&local_80,
                L"Failed to resolve the input parameter for SetPropertyValueAndBroadcast.");
  local_70 = (wchar_t *)CONCAT44(local_70._4_4_,3);
  local_68 = local_58;
  if ((longlong ****)local_58 == (longlong ****)0x0) {
    local_60 = (undefined4)local_50;
  }
  else {
    (*(code *)(*local_58)[1])();
    local_60 = (undefined4)local_50;
    if ((longlong ****)local_58 != (longlong ****)0x0) {
      (*(code *)(*local_58)[2])();
    }
  }
  FUN_14282556a(param_10,param_11,&local_70);
  if ((longlong ****)local_68 != (longlong ****)0x0) {
    (*(code *)(*local_68)[2])();
  }
  uVar8 = 0;
LAB_147a9629d:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a964ea FUN_147a964ea body=248 status=ok
// SIG undefined FUN_147a964ea(void)

void FUN_147a964ea(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  longlong *local_48;
  longlong local_40;
  undefined1 *local_38;
  undefined8 **local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 == 0) goto LAB_147a965b6;
  }
  else {
    FUN_1456cec3c(param_1);
  }
  uVar1 = FUN_1458f046a();
  plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
  if ((param_2 != 0 && param_1 != 0) && plVar2 != (longlong *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2);
    local_48 = &local_58;
    local_58 = 0;
    local_30 = &local_48;
    local_38 = &LAB_147764a16;
    local_40 = param_2;
    (**(code **)*puVar3)(puVar3,*(undefined8 *)(param_1 + 0x10));
    if (local_58 != 0) {
      local_60 = local_50;
      local_68 = local_58;
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
  }
LAB_147a965b6:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a965e4 FUN_147a965e4 body=331 status=ok
// SIG undefined FUN_147a965e4(void)

void FUN_147a965e4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong local_60;
  undefined1 *local_58;
  undefined8 **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_2;
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 == 0) goto LAB_147a966e9;
  }
  else {
    FUN_1456cec3c(param_1);
  }
  uVar4 = FUN_1458f046a();
  plVar5 = (longlong *)FUN_144718840(param_1,uVar4);
  if ((plVar5 != (longlong *)0x0) && (lVar3 = local_90[1], (longlong)(int)lVar3 != 0)) {
    lVar1 = *local_90;
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar7);
      if (lVar2 != 0) {
        puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5);
        local_78 = 0;
        local_68 = &local_78;
        local_50 = &local_68;
        local_58 = &LAB_147764a16;
        local_60 = lVar2;
        (**(code **)*puVar6)(puVar6,*(undefined8 *)(param_1 + 0x10),&local_58);
        if (local_78 != 0) {
          local_80 = local_70;
          local_88 = local_78;
          (**(code **)(*plVar5 + 0x38))(plVar5,&local_88);
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar7);
  }
LAB_147a966e9:
  if (*local_90 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a96730 FUN_147a96730 body=1554 status=ok
// SIG undefined FUN_147a96730(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147a96730(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  wchar_t *pwVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar14;
  bool bVar15;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 *local_b0;
  int local_a4;
  longlong *local_a0;
  undefined4 local_98;
  longlong local_90;
  int local_84;
  int local_80;
  int local_7c;
  longlong *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  longlong *local_60;
  undefined4 local_58;
  int local_4c;
  ulonglong local_48;
  undefined1 *puVar13;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  local_4c = 0;
  local_e0 = 0x147a9676c;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    local_e0 = 0x147a96916;
    FUN_144a5ded6(param_2);
  }
  else {
    local_e0 = 0x147a9678f;
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar7 = local_4c;
  puVar13 = local_d8;
  local_e0 = 0x147a967a0;
  FUN_1446ddbd2();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    local_e0 = 0x147a9693b;
    FUN_144a5ded6(param_2);
  }
  else {
    local_e0 = 0x147a967c2;
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  plVar1 = *(longlong **)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (iVar7 == 0) {
    if (plVar1 != (longlong *)0x0) {
      if (*(int *)((longlong)plVar1 + 0x34) == 0 || (int)plVar1[6] == 0) {
LAB_147a96999:
        puVar12 = auStack_b8;
        puVar11 = (undefined1 *)0x0;
      }
      else {
        local_e0 = 0x147a96c67;
        iVar9 = (**(code **)(*plVar1 + 0x178))(plVar1);
        lVar14 = (longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6];
        iVar10 = (int)lVar14;
        if (iVar9 < 0x11) {
          if (iVar10 == 0) goto LAB_147a96999;
          uStack_c0 = 0x147a96c95;
          lVar14 = -(lVar14 + 0x1eU & 0xfffffffffffffff0);
          puVar12 = auStack_b8 + lVar14;
          puVar11 = auStack_b8 + lVar14;
        }
        else {
          local_e0 = 0x147a96cea;
          iVar9 = (**(code **)(*plVar1 + 0x178))(plVar1);
          uStack_c0 = 0x147a96d02;
          lVar14 = -((longlong)(iVar9 + iVar10 + -1) + 0xfU & 0xfffffffffffffff0);
          puVar12 = auStack_b8 + lVar14;
          pcVar3 = *(code **)(*plVar1 + 0x178);
          *(undefined8 *)(local_d8 + lVar14 + -8) = 0x147a96d18;
          iVar9 = (*pcVar3)(plVar1);
          pcVar3 = *(code **)(*plVar1 + 0x178);
          *(undefined8 *)(local_d8 + lVar14 + -8) = 0x147a96d34;
          iVar10 = (*pcVar3)(plVar1);
          puVar11 = (undefined1 *)
                    ((longlong)-iVar10 & (ulonglong)(auStack_b8 + iVar9 + lVar14 + -1));
        }
      }
      if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
        pcVar3 = *(code **)(*plVar1 + 0x160);
        *(undefined8 *)(puVar12 + -0x28) = 0x147a969ba;
        (*pcVar3)(plVar1,puVar11);
      }
      else {
        iVar9 = *(int *)((longlong)plVar1 + 0x34);
        lVar14 = plVar1[6];
        *(undefined8 *)(puVar12 + -0x28) = 0x147a96cba;
        memset(puVar11,0,(longlong)(int)lVar14 * (longlong)iVar9);
      }
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar12 + -0x28) = 0x147a96cd1;
      FUN_14470e992(param_2,uVar4,puVar11);
      goto LAB_147a969da;
    }
    local_68 = L"MissingInputProperty";
    local_60._0_4_ = 0x14;
    local_e0 = 0x147a96808;
    FUN_1446e940c(&local_90,&local_68);
    local_68 = L"FieldNotificationLibrary";
    local_60 = (longlong *)CONCAT44(local_60._4_4_,0x18);
    local_e0 = 0x147a96834;
    FUN_1446e940c(&local_7c,&local_68);
    local_e0 = 0x147a9684d;
    FUN_140208bae(&local_78,&local_7c,&local_90,
                  L"Failed to resolve the input parameter for SetPropertyValueAndBroadcast.");
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,3);
    local_60 = local_78;
    if (local_78 == (longlong *)0x0) {
      local_58 = local_70;
    }
    else {
      local_e0 = 0x147a96873;
      (**(code **)(*local_78 + 8))();
      local_58 = local_70;
      if (local_78 != (longlong *)0x0) {
        local_e0 = 0x147a96890;
        (**(code **)(*local_78 + 0x10))();
      }
    }
    puVar12 = auStack_b8;
    local_e0 = 0x147a968aa;
    FUN_14282556a(param_1,param_2,&local_68);
    if (local_60 == (longlong *)0x0) goto LAB_147a968c5;
    local_e0 = 0x147a968c1;
    (**(code **)(*local_60 + 0x10))();
  }
  else {
    local_e0 = 0x147a96954;
    FUN_1446ddbd2();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      local_e0 = 0x147a9697f;
      FUN_144a5ded6(param_2,0);
    }
    else {
      local_e0 = 0x147a969d2;
      FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
    }
    puVar12 = auStack_b8;
    puVar11 = *(undefined1 **)(param_2 + 0x38);
LAB_147a969da:
    local_68 = (wchar_t *)0x0;
    *(undefined8 *)(puVar12 + -0x28) = 0x147a969eb;
    FUN_1446f4b16();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)(puVar12 + -0x28) = 0x147a96a18;
      FUN_144a5ded6(param_2,&local_68);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar12 + -0x28) = 0x147a96a2e;
      FUN_14470e992(param_2,uVar4,&local_68);
    }
    puVar13 = puVar12 + -0x20;
    local_78 = (longlong *)0x0;
    *(undefined8 *)(puVar12 + -0x28) = 0x147a96a43;
    FUN_1446f4b16();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)(puVar12 + -0x28) = 0x147a96a70;
      FUN_144a5ded6(param_2,&local_78);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar12 + -0x28) = 0x147a96a86;
      FUN_14470e992(param_2,uVar4,&local_78);
    }
    local_7c = 0;
    *(undefined8 *)(puVar12 + -0x28) = 0x147a96a9a;
    FUN_144a5ab96();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)(puVar12 + -0x28) = 0x147a96ac7;
      FUN_144a5ded6(param_2,&local_7c);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar12 + -0x28) = 0x147a96add;
      FUN_14470e992(param_2,uVar4,&local_7c);
    }
    local_a4 = local_7c;
    local_80 = 0;
    *(undefined8 *)(puVar12 + -0x28) = 0x147a96af7;
    FUN_144a5ab96();
    local_b0 = puVar11;
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)(puVar12 + -0x28) = 0x147a96b28;
      FUN_144a5ded6(param_2,&local_80);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar12 + -0x28) = 0x147a96b3e;
      FUN_14470e992(param_2,uVar4,&local_80);
    }
    iVar9 = local_80;
    local_84 = 0;
    *(undefined8 *)(puVar12 + -0x28) = 0x147a96b56;
    FUN_144a5ab96();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)(puVar12 + -0x28) = 0x147a96b83;
      FUN_144a5ded6(param_2,&local_84);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar12 + -0x28) = 0x147a96b99;
      FUN_14470e992(param_2,uVar4,&local_84);
    }
    pwVar6 = local_68;
    plVar5 = local_78;
    iVar10 = local_84;
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if (plVar1 == (longlong *)0x0) {
      local_90 = 0;
    }
    else {
      local_90 = plVar1[4];
    }
    local_a0 = &local_90;
    local_98 = 1;
    puVar12[-0x30] = iVar9 != 0;
    puVar12[-0x28] = iVar10 != 0;
    bVar15 = local_a4 != 0;
    *(longlong *)(puVar12 + -0x10) = param_2;
    *(undefined8 *)(puVar12 + -0x18) = param_1;
    *(longlong ***)(puVar12 + -0x20) = &local_a0;
    puVar12[-0x38] = bVar15;
    *(longlong **)(puVar12 + -0x40) = plVar5;
    puVar11 = local_b0;
    *(undefined8 *)(puVar12 + -0x68) = 0x147a96c1c;
    uVar8 = FUN_147a96164(puVar11,uVar2,plVar1,pwVar6);
    *param_3 = uVar8;
    if (((iVar7 != 0) || (puVar11 == (undefined1 *)0x0)) ||
       ((*(byte *)((longlong)plVar1 + 0x3c) & 0x10) != 0)) goto LAB_147a968c5;
    pcVar3 = *(code **)(*plVar1 + 0x148);
    *(undefined8 *)(puVar12 + -0x28) = 0x147a96c52;
    (*pcVar3)(plVar1,puVar11);
  }
  puVar12 = puVar13 + 0x20;
LAB_147a968c5:
  if ((local_48 ^ (ulonglong)&local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + -0x28) = &UNK_147a968ef;
  FUN_144d8e3a0();
}



// FUNCTION 147a96d48 FUN_147a96d48 body=1710 status=ok
// SIG undefined FUN_147a96d48(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147a96d48(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  longlong lVar13;
  bool bVar14;
  undefined8 local_f0;
  undefined1 local_e8 [24];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [12];
  int local_bc;
  int local_b8;
  int local_b4;
  undefined1 *local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  longlong local_98;
  int local_8c;
  int local_88;
  int local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  wchar_t *local_68;
  longlong *plStack_60;
  undefined4 local_58;
  int local_4c;
  ulonglong local_48;
  undefined1 *puVar12;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  local_4c = 0;
  local_f0 = 0x147a96d8a;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    local_f0 = 0x147a96f32;
    FUN_144a5ded6(param_2);
  }
  else {
    local_f0 = 0x147a96dad;
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  iVar7 = local_4c;
  puVar12 = local_e8;
  local_f0 = 0x147a96dbd;
  FUN_1446ddbd2();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    local_f0 = 0x147a96f57;
    FUN_144a5ded6(param_2);
  }
  else {
    local_f0 = 0x147a96ddf;
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
  }
  plVar1 = *(longlong **)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (iVar7 == 0) {
    if (plVar1 != (longlong *)0x0) {
      if (*(int *)((longlong)plVar1 + 0x34) == 0 || (int)plVar1[6] == 0) {
LAB_147a96fb5:
        puVar11 = auStack_c8;
        local_b0 = (undefined1 *)0x0;
      }
      else {
        local_f0 = 0x147a97315;
        iVar9 = (**(code **)(*plVar1 + 0x178))(plVar1);
        lVar13 = (longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6];
        iVar10 = (int)lVar13;
        if (iVar9 < 0x11) {
          if (iVar10 == 0) goto LAB_147a96fb5;
          uStack_d0 = 0x147a97343;
          lVar13 = -(lVar13 + 0x1eU & 0xfffffffffffffff0);
          puVar11 = auStack_c8 + lVar13;
          local_b0 = auStack_c8 + lVar13;
        }
        else {
          local_f0 = 0x147a9739d;
          iVar9 = (**(code **)(*plVar1 + 0x178))(plVar1);
          uStack_d0 = 0x147a973b5;
          lVar13 = -((longlong)(iVar9 + iVar10 + -1) + 0xfU & 0xfffffffffffffff0);
          puVar11 = auStack_c8 + lVar13;
          pcVar3 = *(code **)(*plVar1 + 0x178);
          *(undefined8 *)(local_e8 + lVar13 + -8) = 0x147a973cb;
          iVar9 = (*pcVar3)(plVar1);
          pcVar3 = *(code **)(*plVar1 + 0x178);
          *(undefined8 *)(local_e8 + lVar13 + -8) = 0x147a973e7;
          iVar10 = (*pcVar3)(plVar1);
          local_b0 = (undefined1 *)
                     ((longlong)-iVar10 & (ulonglong)(auStack_c8 + iVar9 + lVar13 + -1));
        }
      }
      puVar5 = local_b0;
      if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
        pcVar3 = *(code **)(*plVar1 + 0x160);
        *(undefined8 *)(puVar11 + -0x28) = 0x147a96fdf;
        (*pcVar3)(plVar1,puVar5);
      }
      else {
        iVar9 = *(int *)((longlong)plVar1 + 0x34);
        lVar13 = plVar1[6];
        *(undefined8 *)(puVar11 + -0x28) = 0x147a9736d;
        memset(puVar5,0,(longlong)(int)lVar13 * (longlong)iVar9);
      }
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar11 + -0x28) = 0x147a97384;
      FUN_14470e992(param_2,uVar4,puVar5);
      goto LAB_147a97003;
    }
    local_68 = L"MissingInputProperty";
    plStack_60._0_4_ = 0x14;
    local_f0 = 0x147a96e24;
    FUN_1446e940c(&local_80,&local_68);
    local_68 = L"FieldNotificationLibrary";
    plStack_60 = (longlong *)CONCAT44(plStack_60._4_4_,0x18);
    local_f0 = 0x147a96e50;
    FUN_1446e940c(&local_98,&local_68);
    local_f0 = 0x147a96e69;
    FUN_140208bae(&local_78,&local_98,&local_80,
                  L"Failed to resolve the input parameter for SetPropertyValueAndBroadcast.");
    local_68 = (wchar_t *)CONCAT44(local_68._4_4_,3);
    plStack_60 = local_78;
    if (local_78 == (longlong *)0x0) {
      local_58 = local_70;
    }
    else {
      local_f0 = 0x147a96e8f;
      (**(code **)(*local_78 + 8))();
      local_58 = local_70;
      if (local_78 != (longlong *)0x0) {
        local_f0 = 0x147a96eac;
        (**(code **)(*local_78 + 0x10))();
      }
    }
    puVar11 = auStack_c8;
    local_f0 = 0x147a96ec6;
    FUN_14282556a(param_1,param_2,&local_68);
    if (plStack_60 == (longlong *)0x0) goto LAB_147a96ee1;
    local_f0 = 0x147a96edd;
    (**(code **)(*plStack_60 + 0x10))();
  }
  else {
    local_f0 = 0x147a96f70;
    FUN_1446ddbd2();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      local_f0 = 0x147a96f9b;
      FUN_144a5ded6(param_2,0);
    }
    else {
      local_f0 = 0x147a96ff7;
      FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),0);
    }
    puVar11 = auStack_c8;
    local_b0 = *(undefined1 **)(param_2 + 0x38);
LAB_147a97003:
    local_78 = (longlong *)0x0;
    *(undefined8 *)(puVar11 + -0x28) = 0x147a97014;
    FUN_1446f4b16();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)(puVar11 + -0x28) = 0x147a97041;
      FUN_144a5ded6(param_2,&local_78);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar11 + -0x28) = 0x147a97057;
      FUN_14470e992(param_2,uVar4,&local_78);
    }
    puVar12 = puVar11 + -0x20;
    local_80 = 0;
    *(undefined8 *)(puVar11 + -0x28) = 0x147a9706c;
    FUN_1446f4b16();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)(puVar11 + -0x28) = 0x147a97099;
      FUN_144a5ded6(param_2,&local_80);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar11 + -0x28) = 0x147a970af;
      FUN_14470e992(param_2,uVar4,&local_80);
    }
    local_84 = 0;
    *(undefined8 *)(puVar11 + -0x28) = 0x147a970c3;
    FUN_144a5ab96();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)(puVar11 + -0x28) = 0x147a970f0;
      FUN_144a5ded6(param_2,&local_84);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar11 + -0x28) = 0x147a97106;
      FUN_14470e992(param_2,uVar4,&local_84);
    }
    local_bc = local_84;
    local_88 = 0;
    *(undefined8 *)(puVar11 + -0x28) = 0x147a97120;
    FUN_144a5ab96();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)(puVar11 + -0x28) = 0x147a9714d;
      FUN_144a5ded6(param_2,&local_88);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar11 + -0x28) = 0x147a97163;
      FUN_14470e992(param_2,uVar4,&local_88);
    }
    local_b8 = local_88;
    local_8c = 0;
    *(undefined8 *)(puVar11 + -0x28) = 0x147a9717d;
    FUN_144a5ab96();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)(puVar11 + -0x28) = 0x147a971aa;
      FUN_144a5ded6(param_2,&local_8c);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar11 + -0x28) = 0x147a971c0;
      FUN_14470e992(param_2,uVar4,&local_8c);
    }
    local_b4 = local_8c;
    local_68 = (wchar_t *)0x0;
    plStack_60 = (longlong *)0x0;
    *(undefined8 *)(puVar11 + -0x28) = 0x147a971da;
    FUN_1446e6bbc();
    if (*(longlong *)(param_2 + 0x20) == 0) {
      *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
      *(undefined8 *)(puVar11 + -0x28) = 0x147a97207;
      FUN_144a5ded6(param_2,&local_68);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(puVar11 + -0x28) = 0x147a9721d;
      FUN_14470e992(param_2,uVar4,&local_68);
    }
    *(ulonglong *)(param_2 + 0x20) =
         (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
    if (plVar1 == (longlong *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = plVar1[4];
    }
    *(undefined8 *)(puVar11 + -0x28) = 0x147a97258;
    FUN_147aad3a6(&local_68);
    plVar6 = local_78;
    uVar4 = local_80;
    local_a8 = local_68;
    local_a0 = plStack_60._0_4_;
    puVar11[-0x30] = local_b8 != 0;
    puVar11[-0x28] = local_b4 != 0;
    bVar14 = local_bc != 0;
    *(longlong *)(puVar11 + -0x10) = param_2;
    *(undefined8 *)(puVar11 + -0x18) = param_1;
    *(wchar_t ***)(puVar11 + -0x20) = &local_a8;
    puVar11[-0x38] = bVar14;
    *(undefined8 *)(puVar11 + -0x40) = uVar4;
    puVar5 = local_b0;
    *(undefined8 *)(puVar11 + -0x68) = 0x147a972bb;
    uVar8 = FUN_147a96164(puVar5,uVar2,plVar1,plVar6);
    *param_3 = uVar8;
    if (((iVar7 == 0) && (puVar5 != (undefined1 *)0x0)) &&
       ((*(byte *)((longlong)plVar1 + 0x3c) & 0x10) == 0)) {
      pcVar3 = *(code **)(*plVar1 + 0x148);
      *(undefined8 *)(puVar11 + -0x28) = 0x147a972e6;
      (*pcVar3)(plVar1,puVar5);
    }
    if (local_68 == (wchar_t *)0x0) goto LAB_147a96ee1;
    *(undefined8 *)(puVar11 + -0x28) = 0x147a97300;
    FUN_1400020a8();
  }
  puVar11 = puVar12 + 0x20;
LAB_147a96ee1:
  if ((local_48 ^ (ulonglong)&local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar11 + -0x28) = &UNK_147a96f0b;
  FUN_144d8e3a0();
}



// FUNCTION 147a97408 FUN_147a97408 body=966 status=ok
// SIG undefined FUN_147a97408(void)

void FUN_147a97408(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_1c8 [32];
  undefined1 *local_1a8;
  undefined1 local_1a0;
  undefined1 local_198 [4];
  float local_194;
  undefined4 local_f4;
  byte local_eb;
  undefined4 local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  cVar7 = (**(code **)(*param_1 + 0x498))();
  if (cVar7 == '\0') {
    FUN_14347b504(param_1,param_2,param_3,param_4);
    if ((((param_1[0x3b] != 0) && (param_1[0x22] != 0)) &&
        (plVar3 = *(longlong **)(param_1[0x3b] + 0x3c0), plVar3 != (longlong *)0x0)) &&
       (cVar7 = (**(code **)(*plVar3 + 0x6c8))(plVar3), cVar7 != '\0')) {
      if ((((*(byte *)(plVar3 + 0x84) & 2) == 0) ||
          (cVar7 = (**(code **)(*plVar3 + 0x6c8))(plVar3), cVar7 == '\0')) &&
         ((cVar7 = (**(code **)(plVar3[0x72] + 0x48))(plVar3 + 0x72), cVar7 != '\0' &&
          (*(char *)((longlong)param_1 + 0x18d) != '\x01')))) {
        cVar7 = (**(code **)(*param_1 + 0x488))(param_1,(int)param_1[0x3c]);
        if (cVar7 != '\0') {
          dVar8 = (double)param_1[0x25];
          dVar1 = (double)param_1[0x26];
          dVar2 = (double)param_1[0x27];
          dVar9 = 1.0 / SQRT(dVar2 * dVar2 + dVar8 * dVar8 + dVar1 * dVar1);
          dVar5 = (double)*(float *)(param_1 + 0x3c);
          param_1[0x25] = (longlong)(dVar9 * dVar8 * dVar5);
          param_1[0x26] = (longlong)(dVar1 * dVar9 * dVar5);
          param_1[0x27] = (longlong)(dVar2 * dVar9 * dVar5);
        }
      }
      else {
        (**(code **)(*param_1 + 0x5c0))(param_1,param_2);
      }
      (**(code **)(*param_1 + 0x5c8))(param_1);
      *(byte *)(param_1 + 0x3e) = *(byte *)(param_1 + 0x3e) & 0xfe;
      dVar8 = (double)(float)param_2;
      local_68 = (double)param_1[0x27] * dVar8;
      local_70 = (double)param_1[0x26] * dVar8;
      local_78 = (double)param_1[0x25] * dVar8;
      if (((9.999999974752427e-07 < ABS(local_78)) || (9.999999974752427e-07 < ABS(local_70))) ||
         (9.999999974752427e-07 < ABS(local_68))) {
        lVar4 = param_1[0x22];
        dVar1 = *(double *)(lVar4 + 0x260);
        dVar2 = *(double *)(lVar4 + 0x268);
        dVar5 = *(double *)(lVar4 + 0x270);
        local_98 = *(undefined8 *)(lVar4 + 0x240);
        uStack_90 = *(undefined8 *)(lVar4 + 0x248);
        local_88 = *(undefined8 *)(lVar4 + 0x250);
        uStack_80 = *(undefined8 *)(lVar4 + 600);
        memset(local_198,0,0x100);
        local_c8 = 0xffffffff;
        local_f4 = 0xffffffff;
        local_194 = 1.0;
        local_1a0 = 0;
        local_1a8 = local_198;
        FUN_1402eda10(param_1,&local_78,&local_98,1);
        if ((local_eb & 3) == 1) {
          (**(code **)(*param_1 + 0x4c8))(param_1,local_198,param_2,&local_78);
          local_1a0 = 1;
          local_1a8 = local_198;
          (**(code **)(*param_1 + 0x508))(param_1,&local_78,1.0 - local_194);
        }
        if ((*(byte *)(param_1 + 0x3e) & 1) == 0) {
          lVar4 = param_1[0x22];
          dVar6 = *(double *)(lVar4 + 0x268);
          dVar9 = *(double *)(lVar4 + 0x270);
          dVar8 = 1.0 / dVar8;
          param_1[0x25] = (longlong)(dVar8 * (*(double *)(lVar4 + 0x260) - dVar1));
          param_1[0x26] = (longlong)((dVar6 - dVar2) * dVar8);
          param_1[0x27] = (longlong)((dVar9 - dVar5) * dVar8);
        }
      }
      (**(code **)(*param_1 + 0x4d0))(param_1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a977d0 FUN_147a977d0 body=138 status=ok
// SIG undefined FUN_147a977d0(void)

undefined8 FUN_147a977d0(longlong *param_1)

{
  double dVar1;
  longlong lVar2;
  float extraout_XMM0_Da;
  double dVar3;
  
  if ((((param_1[0x3b] != 0) && (lVar2 = FUN_14093f908(), lVar2 != 0)) &&
      ((*(byte *)(lVar2 + 0x39d) & 4) != 0)) && (param_1[0x22] != 0)) {
    dVar1 = *(double *)(param_1[0x22] + 0x270);
    if (dVar1 < (double)*(float *)(lVar2 + 0x40c)) {
      dVar1 = ((double)*(float *)(lVar2 + 0x40c) - dVar1) + 2.0;
      (**(code **)(*param_1 + 0x480))(param_1);
      dVar3 = (double)extraout_XMM0_Da;
      if (dVar1 <= (double)extraout_XMM0_Da) {
        dVar3 = dVar1;
      }
      param_1[0x27] = (longlong)dVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147a9785a FUN_147a9785a body=1356 status=ok
// SIG undefined FUN_147a9785a(void)

void FUN_147a9785a(longlong *param_1,float param_2)

{
  double dVar1;
  char cVar2;
  float fVar3;
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
  double dVar14;
  float fVar15;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1479e9432(param_1,&local_b8);
  dVar4 = local_a8 * local_a8 + local_b8 * local_b8 + local_b0 * local_b0;
  dVar1 = local_a8;
  dVar11 = local_b0;
  dVar5 = local_b8;
  if (1.0 < dVar4) {
    dVar5 = 1.0 / SQRT(dVar4);
    dVar1 = local_a8 * dVar5;
    dVar11 = local_b0 * dVar5;
    dVar5 = local_b8 * dVar5;
    dVar4 = dVar1 * dVar1 + dVar5 * dVar5 + dVar11 * dVar11;
  }
  if (0.0 < dVar4) {
    fVar15 = (float)SQRT(dVar4);
  }
  else {
    fVar15 = 0.0;
  }
  fVar3 = (float)(**(code **)(*param_1 + 0x480))(param_1);
  fVar3 = fVar3 * fVar15;
  cVar2 = (**(code **)(*param_1 + 0x488))(param_1,fVar3);
  dVar4 = (double)param_1[0x25];
  dVar6 = (double)param_1[0x26];
  dVar7 = (double)param_1[0x27];
  dVar9 = dVar7 * dVar7 + dVar4 * dVar4 + dVar6 * dVar6;
  if ((fVar15 <= 0.0) || (cVar2 != '\0')) {
    if (dVar9 <= 0.0) goto LAB_147a97a58;
    dVar8 = SQRT(dVar9);
    dVar12 = dVar8 - (double)(ABS(*(float *)(param_1 + 0x3d)) * param_2);
    if (dVar12 <= 0.0) {
      dVar12 = 0.0;
    }
    if (((dVar9 != 1.0) || (dVar13 = dVar4, dVar10 = dVar7, dVar14 = dVar6, NAN(dVar9))) &&
       (dVar13 = DAT_14c8464e0, dVar10 = DAT_14c8464f0, dVar14 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar9)) {
      dVar14 = 1.0 / dVar8;
      dVar13 = dVar14 * dVar4;
      dVar10 = dVar7 * dVar14;
      dVar14 = dVar6 * dVar14;
    }
    dVar12 = (double)(float)dVar12;
    dVar10 = dVar10 * dVar12;
    dVar14 = dVar14 * dVar12;
    dVar13 = dVar13 * dVar12;
    param_1[0x25] = (longlong)dVar13;
    param_1[0x26] = (longlong)dVar14;
    param_1[0x27] = (longlong)dVar10;
    if ((cVar2 == '\0') ||
       ((double)(fVar3 * fVar3) <= dVar10 * dVar10 + dVar13 * dVar13 + dVar14 * dVar14))
    goto LAB_147a97a58;
    if (((dVar9 != 1.0) || (dVar12 = dVar4, dVar10 = dVar6, dVar14 = dVar7, NAN(dVar9))) &&
       (dVar12 = DAT_14c8464e0, dVar10 = DAT_14c8464e8, dVar14 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar9)) {
      dVar8 = 1.0 / dVar8;
      dVar12 = dVar4 * dVar8;
      dVar10 = dVar6 * dVar8;
      dVar14 = dVar7 * dVar8;
    }
    dVar4 = (double)fVar3;
    dVar7 = dVar14 * dVar4;
    dVar6 = dVar10 * dVar4;
    dVar4 = dVar12 * dVar4;
  }
  else {
    if (dVar9 <= 0.0) goto LAB_147a97a58;
    fVar15 = *(float *)((longlong)param_1 + 0x1ec) * param_2;
    if (1.0 <= fVar15) {
      fVar15 = 1.0;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    dVar9 = SQRT(dVar9);
    dVar12 = (double)fVar15;
    dVar7 = dVar7 + (dVar1 * dVar9 - dVar7) * dVar12;
    dVar6 = dVar6 + (dVar11 * dVar9 - dVar6) * dVar12;
    dVar4 = dVar4 + (dVar9 * dVar5 - dVar4) * dVar12;
  }
  param_1[0x25] = (longlong)dVar4;
  param_1[0x26] = (longlong)dVar6;
  param_1[0x27] = (longlong)dVar7;
LAB_147a97a58:
  cVar2 = (**(code **)(*param_1 + 0x488))(param_1,fVar3);
  dVar4 = (double)param_1[0x25];
  dVar6 = (double)param_1[0x26];
  if (cVar2 == '\0') {
    dVar7 = (double)param_1[0x27];
  }
  else {
    dVar7 = (double)param_1[0x27];
    fVar3 = (float)SQRT(dVar7 * dVar7 + dVar4 * dVar4 + dVar6 * dVar6);
  }
  dVar9 = DAT_14c8464e0;
  dVar12 = DAT_14c8464e8;
  dVar8 = DAT_14c8464f0;
  if (0.0001 <= fVar3) {
    dVar12 = (double)ABS(*(float *)((longlong)param_1 + 0x1e4));
    dVar10 = (double)param_2;
    dVar8 = dVar7 + dVar1 * dVar12 * dVar10;
    dVar9 = dVar4 + dVar5 * dVar12 * dVar10;
    dVar12 = dVar6 + dVar11 * dVar12 * dVar10;
    dVar11 = (double)fVar3;
    dVar5 = dVar8 * dVar8 + dVar9 * dVar9 + dVar12 * dVar12;
    if (dVar11 * dVar11 < dVar5) {
      dVar11 = (1.0 / SQRT(dVar5)) * dVar11;
      dVar9 = dVar9 * dVar11;
      dVar12 = dVar12 * dVar11;
      dVar8 = dVar8 * dVar11;
    }
  }
  param_1[0x25] = (longlong)dVar9;
  param_1[0x26] = (longlong)dVar12;
  param_1[0x27] = (longlong)dVar8;
  (**(code **)(*param_1 + 0x5a0))(param_1,&local_b8);
  if ((local_a0 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a97da8 FUN_147a97da8 body=50 status=ok
// SIG undefined FUN_147a97da8(void)

byte FUN_147a97da8(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_140e101d6();
  bVar1 = (byte)*(uint *)(param_1 + 0x1f0) | bVar1;
  *(uint *)(param_1 + 0x1f0) = *(uint *)(param_1 + 0x1f0) & 0xfffffffe | bVar1 & 1;
  return bVar1 & 1;
}



// FUNCTION 147a97dde FUN_147a97dde body=128 status=ok
// SIG undefined FUN_147a97dde(void)

void FUN_147a97dde(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined8 local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar1 = *(undefined8 *)(*param_2 + 8);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = uVar1;
  switchD_143c3d4dc::caseD_20();
  FUN_145c2399a(uVar1,param_1 + 0x188);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a97e60 FUN_147a97e60 body=485 status=ok
// SIG undefined FUN_147a97e60(void)

void FUN_147a97e60(longlong param_1,undefined4 param_2,float *param_3,float *param_4)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined1 local_c8 [56];
  longlong *local_90;
  undefined1 local_74;
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined3 uStack_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_4 = 0.0;
  *param_3 = 0.0;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_14011d972(DAT_14cb0e288,&local_68);
    if (local_68 != 0) {
      local_d8 = &local_58;
      local_50 = 0;
      local_58 = 0;
      uStack_54 = 0;
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0x3f800000;
      FUN_140324f46(local_c8,param_1,(float)*(int *)(param_1 + 0x13c),param_1 + 0x140);
      uVar6 = FUN_144955c2e(local_68,local_c8,0x3f800000,&DAT_14c96b1c0);
      lVar7 = FUN_1448304f6(uVar6,param_2,local_74);
      *param_3 = (float)(int)*(short *)(lVar7 + 0x36);
      uVar4 = FUN_14171dcda(uVar6);
      *param_4 = (float)uVar4;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_90 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar2 = (int *)((longlong)local_90 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_90 + 0x10))(local_90);
          }
        }
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
  }
  else if (*(char *)(param_1 + 0x30) == '\0') {
    uVar4 = FUN_140eee8d6(param_1,param_2);
    if ((int)(uint)uVar4 < *(int *)(param_1 + 0x40)) {
      uVar5 = (uint)uVar4;
      bVar3 = *(byte *)(*(longlong *)(param_1 + 0x38) + 0x10 + (ulonglong)uVar5 * 0x18);
      if (((int)(uint)bVar3 < *(int *)(param_1 + 0x50)) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)bVar3 * 8) != 0)) {
        *param_3 = (float)*(int *)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar5 * 0x18 + 8);
        *param_4 = (float)*(int *)(*(longlong *)(param_1 + 0x128) +
                                  (longlong)
                                  (int)((longlong)(ulonglong)uVar5 /
                                       (longlong)*(int *)(param_1 + 0x120)) * 4);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a98046 FUN_147a98046 body=348 status=ok
// SIG undefined FUN_147a98046(void)

ulonglong FUN_147a98046(longlong param_1,undefined4 param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined1 local_c0 [56];
  longlong *local_88;
  undefined1 local_6c;
  longlong local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined3 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar5 = param_3 & 0xffffffff;
    FUN_14011d972(DAT_14cb0e288,&local_60);
    if (local_60 != 0) {
      local_c8 = &local_50;
      local_48 = 0;
      local_50 = 0;
      uStack_4c = 0;
      local_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0x3f800000;
      FUN_140324f46(local_c0,param_1,(float)*(int *)(param_1 + 0x13c),param_1 + 0x140);
      uVar4 = FUN_144955c2e(local_60,local_c0,0x3f800000,&DAT_14c96b1c0);
      uVar3 = FUN_1469360c0(uVar4,param_2,param_3 & 0xffffffff,local_6c);
      uVar5 = (ulonglong)uVar3;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar2 = (int *)((longlong)local_88 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_88 + 0x10))(local_88);
          }
        }
      }
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
    if (local_60 != 0) goto LAB_147a98178;
  }
  else if (*(char *)(param_1 + 0x30) == '\0') {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),*(undefined1 *)(param_1 + 0x6c));
    goto LAB_147a98178;
  }
  uVar5 = 0;
LAB_147a98178:
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a981a4 FUN_147a981a4 body=323 status=ok
// SIG undefined FUN_147a981a4(void)

uint FUN_147a981a4(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined1 local_b8 [56];
  longlong *local_80;
  undefined1 local_64;
  longlong local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined3 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_14011d972(DAT_14cb0e288,&local_58);
    if (local_58 != 0) {
      local_c8 = &local_48;
      local_40 = 0;
      local_48 = 0;
      uStack_44 = 0;
      local_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0x3f800000;
      FUN_140324f46(local_b8,param_1,(float)*(int *)(param_1 + 0x13c),param_1 + 0x140);
      uVar3 = FUN_144955c2e(local_58,local_b8,0x3f800000,&DAT_14c96b1c0);
      lVar4 = FUN_1448304f6(uVar3,param_2,local_64);
      param_2 = (uint)*(ushort *)(lVar4 + 0x32);
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)local_80 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_80 + 0x10))(local_80);
          }
        }
      }
    }
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
    if (local_58 != 0) goto LAB_147a982bf;
  }
  param_2 = 0;
LAB_147a982bf:
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a982e8 FUN_147a982e8 body=68 status=ok
// SIG undefined FUN_147a982e8(void)

undefined4 FUN_147a982e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_147a9832e(param_1,param_2,local_18,&local_14);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9832e FUN_147a9832e body=274 status=ok
// SIG undefined FUN_147a9832e(void)

void FUN_147a9832e(undefined8 param_1,short *param_2,int *param_3,int *param_4)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  short *psVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_98 [32];
  float local_78;
  float local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  sVar3 = *param_2;
  if (sVar3 == 0) {
    fVar6 = 0.0;
    fVar5 = 0.0;
  }
  else {
    fVar5 = 0.0;
    fVar6 = 0.0;
    psVar4 = (short *)0x0;
    psVar1 = param_2;
    do {
      FUN_147a97e60(param_1,sVar3,&local_74,&local_78);
      if (psVar4 == (short *)0x0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = FUN_147a98046(param_1,*psVar4,*psVar1);
      }
      fVar6 = fVar6 + (float)(int)cVar2 + local_74;
      if (fVar5 <= local_78) {
        fVar5 = local_78;
      }
      sVar3 = psVar1[1];
      psVar4 = param_2;
      param_2 = param_2 + 1;
      psVar1 = psVar1 + 1;
    } while (sVar3 != 0);
  }
  *param_4 = -((int)ROUND(-0.5 - (fVar6 + fVar6)) >> 1);
  *param_3 = -((int)ROUND(-0.5 - (fVar5 + fVar5)) >> 1);
  if ((local_70 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a98442 FUN_147a98442 body=151 status=ok
// SIG undefined FUN_147a98442(void)

void FUN_147a98442(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  switchD_143c3d4dc::caseD_38();
  if (*(char *)(param_1 + 0x30) == '\x01') {
    iVar1 = FUN_14278f0ba(param_2);
    if (iVar1 == 1) {
      local_28 = param_2;
      FUN_1434e1d2e(&local_28,param_1 + 0x148);
      if ((longlong)*(int *)(param_1 + 0x178) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x170);
        lVar2 = (longlong)*(int *)(param_1 + 0x178) * 0x38;
        do {
          FUN_1434e1d2e(&local_28,lVar3);
          lVar3 = lVar3 + 0x38;
          lVar2 = lVar2 + -0x38;
        } while (lVar2 != 0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a984fc FUN_147a984fc body=51 status=ok
// SIG undefined FUN_147a984fc(void)

void FUN_147a984fc(undefined8 param_1,longlong param_2)

{
  FUN_140077068(param_2,param_1);
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    return;
  }
  return;
}



// FUNCTION 147a9852e FUN_147a9852e body=206 status=ok
// SIG undefined FUN_147a9852e(void)

void FUN_147a9852e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  switchD_143c3d4dc::caseD_38();
  if (*(char *)(param_1 + 0x41) == '\0') {
    if (DAT_14c98e618 != 0) {
      puVar3 = *(undefined8 **)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x10) {
        uVar4 = puVar3[2];
        plVar5 = (longlong *)puVar3[3];
      }
      else {
        uVar4 = *puVar3;
        plVar5 = (longlong *)puVar3[1];
      }
      if (plVar5 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      uVar4 = FUN_1469367f0(uVar4,param_1);
      FUN_14484255c(param_2,uVar4);
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
                    /* WARNING: Could not recover jumptable at 0x000147a985e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar5 + 0x10))(plVar5);
            return;
          }
        }
      }
    }
  }
  else if (*(char *)(param_1 + 0x41) == '\x02') {
    FUN_14484255c(param_2,(longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 0xc));
    return;
  }
  return;
}



// FUNCTION 147a9863a FUN_147a9863a body=639 status=ok
// SIG undefined FUN_147a9863a(void)

void FUN_147a9863a(int *param_1,longlong *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  undefined1 unaff_XMM13 [16];
  
  iVar2 = *param_1;
  iVar3 = param_1[1];
  lVar8 = 0;
  do {
    fVar1 = (float)(&DAT_14a8d5bf0)[lVar8];
    lVar7 = 0;
    do {
      fVar13 = *(float *)((longlong)&DAT_14a8d5c00 + lVar7) * 0.0625;
      if (iVar2 < iVar3) {
        auVar10 = blendps(ZEXT416((uint)((float)param_1[1] * fVar1 + 0.5)),ZEXT816(0),0xe);
        unaff_XMM13 = roundps(unaff_XMM13,auVar10,1);
        fVar14 = fVar13 * unaff_XMM13._0_4_;
        fVar9 = (float)*param_1;
      }
      else {
        fVar9 = (float)*param_1;
        auVar10 = blendps(ZEXT416((uint)(fVar1 * fVar9 + 0.5)),ZEXT816(0),0xe);
        auVar10 = roundps(ZEXT416((uint)fVar13),auVar10,1);
        fVar14 = auVar10._0_4_;
        unaff_XMM13 = ZEXT416((uint)(fVar13 * fVar14));
      }
      if (((fVar14 < fVar9) && (fVar13 = unaff_XMM13._0_4_, 720.0 <= fVar13)) && (1280.0 <= fVar14))
      {
        if (fVar13 < (float)param_1[1]) {
          iVar4 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar4 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
            FUN_14630406a(param_2,iVar4);
          }
          *(ulonglong *)(*param_2 + (longlong)iVar4 * 8) = CONCAT44((int)fVar13,(int)fVar14);
        }
      }
      lVar7 = lVar7 + 4;
    } while (lVar7 != 0xc);
    lVar8 = lVar8 + 1;
  } while (lVar8 != 4);
  if ((int)param_2[1] == 0) {
    if (*param_1 < 0x501 || param_1[1] < 0x2d1) {
      auVar11 = ZEXT816(0);
      auVar10 = blendps(ZEXT416((uint)((float)*param_1 + 0.5)),auVar11,0xe);
      auVar10 = roundps(auVar10,auVar10,1);
      auVar12._4_12_ = in_XMM3._4_12_;
      auVar12._0_4_ = (float)param_1[1] + 0.5;
      auVar12 = blendps(auVar12,auVar11,0xe);
      auVar11 = roundps(auVar11,auVar12,1);
      *(undefined4 *)(param_2 + 1) = 1;
      if (*(int *)((longlong)param_2 + 0xc) == 0) {
        FUN_14630406a(param_2,0);
      }
      puVar5 = (undefined8 *)*param_2;
      uVar6 = CONCAT44((int)(auVar11._0_4_ * 0.8333333),(int)(auVar10._0_4_ * 0.8333333));
    }
    else {
      *(undefined4 *)(param_2 + 1) = 1;
      if (*(int *)((longlong)param_2 + 0xc) == 0) {
        FUN_14630406a(param_2,0);
      }
      puVar5 = (undefined8 *)*param_2;
      uVar6 = 0x2d000000500;
    }
    *puVar5 = uVar6;
  }
  return;
}



// FUNCTION 147a988ba FUN_147a988ba body=169 status=ok
// SIG undefined FUN_147a988ba(void)

void FUN_147a988ba(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  float local_20;
  float local_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146980726(*param_2,&local_20);
  plVar1 = *(longlong **)(param_1 + 0x2c8);
  if (plVar1 == (longlong *)0x0) {
    FUN_145876474(param_1);
    plVar1 = *(longlong **)(param_1 + 0x2c8);
  }
  (**(code **)(*plVar1 + 0x2f8))(plVar1,(int)local_20,(int)local_1c);
  lVar2 = *(longlong *)(param_1 + 0x2c8);
  if (lVar2 == 0) {
    FUN_145876474(param_1);
    lVar2 = *(longlong *)(param_1 + 0x2c8);
  }
  local_28 = 1;
  FUN_140d6793a(lVar2,0x4000,0,DAT_14c872ce0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a98984 FUN_147a98984 body=112 status=ok
// SIG undefined FUN_147a98984(void)

void FUN_147a98984(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = *(char *)(param_2 + 0x153);
  if ((-1 < cVar1) && (DAT_14c948aa0 != (longlong *)0x0)) {
    local_20 = 0;
    local_18 = 0;
    (**(code **)(*DAT_14c948aa0 + 0x60))();
    cVar1 = *(char *)(param_2 + 0x153);
  }
  *(char *)(param_2 + 0x153) = cVar1 + -0x80;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a989f6 FUN_147a989f6 body=171 status=ok
// SIG undefined FUN_147a989f6(void)

void FUN_147a989f6(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [38];
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = *(longlong **)(param_1 + 0x1358);
  if (plVar2 != (longlong *)0x0) {
    if (param_3 == (longlong *)0x0) {
      local_21 = 1;
    }
    else if (*(code **)(*param_3 + 0x3c0) == (code *)&LAB_1448ff5f6) {
      local_21 = param_3[0x1e] == 0;
    }
    else {
      local_21 = (**(code **)(*param_3 + 0x3c0))(param_3);
      plVar2 = *(longlong **)(param_1 + 0x1358);
    }
    local_22 = param_4;
    uVar1 = FUN_14477b072(plVar2,DAT_14cadac38);
    (**(code **)(*plVar2 + 0x248))(plVar2,uVar1,&local_22);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a98aa2 FUN_147a98aa2 body=95 status=ok
// SIG undefined FUN_147a98aa2(void)

void FUN_147a98aa2(longlong *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1a = param_2;
  local_19 = param_3;
  uVar1 = FUN_14477b072(param_1,DAT_14cadac38);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_1a);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a98b02 FUN_147a98b02 body=104 status=ok
// SIG undefined FUN_147a98b02(void)

void FUN_147a98b02(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x1358);
  if (plVar1 != (longlong *)0x0) {
    local_19 = param_3;
    uVar2 = FUN_14477b072(plVar1,DAT_14cadac48);
    (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a98b6c FUN_147a98b6c body=91 status=ok
// SIG undefined FUN_147a98b6c(void)

void FUN_147a98b6c(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cadac48);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a98bc8 FUN_147a98bc8 body=22 status=ok
// SIG undefined FUN_147a98bc8(void)

void FUN_147a98bc8(void)

{
  FUN_14376065c();
  FUN_142797bc0(0,0);
  return;
}



// FUNCTION 147a98be4 FUN_147a98be4 body=456 status=ok
// SIG undefined FUN_147a98be4(void)

void FUN_147a98be4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  void *_Src;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  void **ppvVar5;
  longlong lVar6;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = (void *)0x0;
  uStack_50 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  uVar3 = local_48;
  uVar1 = local_5c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar4 = (longlong *)FUN_147a98fb7(DAT_14c951640);
  _Src = local_58;
  *(undefined1 *)(plVar4 + 8) = 1;
  plVar4[0xc] = 0;
  ppvVar5 = (void **)(plVar4 + 9);
  if (ppvVar5 != &local_58) {
    iVar2 = (int)uStack_50;
    lVar6 = (longlong)(int)uStack_50;
    *(int *)(plVar4 + 10) = (int)uStack_50;
    if ((int)uStack_50 == 0 && *(int *)((longlong)plVar4 + 0x54) == 0) {
      *(undefined4 *)((longlong)plVar4 + 0x54) = 0;
    }
    else {
      FUN_1446dd670(ppvVar5,uStack_50 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar5,_Src,lVar6 * 2);
      }
    }
  }
  *(undefined4 *)(plVar4 + 0xb) = uVar1;
  (**(code **)(*plVar4 + 0x2b0))(plVar4,uVar3);
  *param_3 = plVar4;
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a98dae FUN_147a98dae body=398 status=ok
// SIG undefined FUN_147a98dae(void)

void FUN_147a98dae(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[3] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 3);
  }
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a98f3e(local_38[3],local_38[2],local_38,local_3c);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[4] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a98f3e FUN_147a98f3e body=118 status=ok
// SIG undefined FUN_147a98f3e(void)

longlong * FUN_147a98f3e(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_147a98fb7(DAT_14c951640);
  *(undefined1 *)(plVar1 + 8) = 0;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  plVar1[0xc] = param_2;
  FUN_144a787a6(plVar1 + 9,param_3);
  *(undefined4 *)(plVar1 + 0xb) = param_4;
  (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 147a98fb7 FUN_147a98fb7 body=175 status=ok
// SIG undefined FUN_147a98fb7(void)

undefined8 FUN_147a98fb7(undefined8 param_1)

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
  local_b8 = FUN_145921a52();
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



// FUNCTION 147a99094 FUN_147a99094 body=68 status=ok
// SIG undefined FUN_147a99094(void)

void FUN_147a99094(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  if ((param_4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_4);
  }
  param_1[0xc] = param_4;
                    /* WARNING: Could not recover jumptable at 0x000147a990cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2d0))(param_1,param_4 != 0);
  return;
}



// FUNCTION 147a990d8 FUN_147a990d8 body=98 status=ok
// SIG undefined FUN_147a990d8(void)

void FUN_147a990d8(longlong *param_1,undefined1 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1[0xc];
  local_18 = param_2;
  FUN_1447cd2ec(param_1 + 6,&local_20);
  param_1[0xc] = 0;
  (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a991cc FUN_147a991cc body=129 status=ok
// SIG undefined FUN_147a991cc(void)

void FUN_147a991cc(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  
  FUN_146f59a56();
  if (*(void **)(param_2 + 0x160) != (void *)0x0) {
    uVar1 = 0x20;
    if (*(uint *)(param_2 + 0x168) < 0x20) {
      uVar1 = *(uint *)(param_2 + 0x168);
    }
    memmove((void *)(param_2 + 0xe0),*(void **)(param_2 + 0x160),(ulonglong)(uVar1 << 2));
    if (*(longlong *)(param_2 + 0x160) != 0) {
      (**(code **)(*DAT_14c872d28 + 0x48))();
      *(undefined8 *)(param_2 + 0x160) = 0;
    }
  }
  *(undefined8 *)(param_2 + 0x168) = 0x2000000000;
  *(undefined4 *)(param_2 + 0x170) = 0;
  return;
}



// FUNCTION 147a9924e FUN_147a9924e body=106 status=ok
// SIG undefined FUN_147a9924e(void)

void FUN_147a9924e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_2 + 0x20);
  FUN_146f595b4(param_1,lVar1,lVar2 + 0x90);
  FUN_1417bc32a(lVar2,*(undefined4 *)(lVar1 + 0x170));
  lVar4 = lVar1 + 0xe0;
  if (*(longlong *)(lVar1 + 0x160) != 0) {
    lVar4 = *(longlong *)(lVar1 + 0x160);
  }
  lVar3 = *(longlong *)(lVar2 + 0x80);
  if (*(longlong *)(lVar2 + 0x80) == 0) {
    lVar3 = lVar2;
  }
  FUN_14493566c(lVar3,0,lVar4,0,*(undefined4 *)(lVar1 + 0x170));
  return;
}



// FUNCTION 147a992b8 FUN_147a992b8 body=221 status=ok
// SIG undefined FUN_147a992b8(void)

bool FUN_147a992b8(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  
  pvVar1 = *(void **)(param_2 + 0x18);
  pvVar4 = *(void **)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if ((*(int *)((longlong)pvVar1 + 0x170) == *(int *)((longlong)pvVar4 + 0x170)) &&
       (cVar2 = FUN_146f597c0(param_1,pvVar1,pvVar4), cVar2 != '\0')) {
      uVar6 = *(int *)((longlong)pvVar1 + 0x170) + 0x1f;
      if (0x1f < uVar6) {
        pvVar5 = (void *)((longlong)pvVar4 + 0xe0);
        if (*(void **)((longlong)pvVar4 + 0x160) != (void *)0x0) {
          pvVar5 = *(void **)((longlong)pvVar4 + 0x160);
        }
        pvVar4 = (void *)((longlong)pvVar1 + 0xe0);
        if (*(void **)((longlong)pvVar1 + 0x160) != (void *)0x0) {
          pvVar4 = *(void **)((longlong)pvVar1 + 0x160);
        }
        iVar3 = memcmp(pvVar4,pvVar5,(ulonglong)(uVar6 >> 3 & 0xfffffffc));
        if (iVar3 != 0) {
          return false;
        }
      }
      return true;
    }
  }
  else if (*(int *)((longlong)pvVar1 + 0x88) == *(int *)((longlong)pvVar4 + 0x88)) {
    pvVar5 = *(void **)((longlong)pvVar4 + 0x80);
    if (*(void **)((longlong)pvVar4 + 0x80) == (void *)0x0) {
      pvVar5 = pvVar4;
    }
    pvVar4 = *(void **)((longlong)pvVar1 + 0x80);
    if (*(void **)((longlong)pvVar1 + 0x80) == (void *)0x0) {
      pvVar4 = pvVar1;
    }
    iVar3 = memcmp(pvVar4,pvVar5,
                   (ulonglong)(*(int *)((longlong)pvVar1 + 0x88) + 0x1fU >> 3 & 0xfffffffc));
    return iVar3 == 0;
  }
  return false;
}



// FUNCTION 147a99396 FUN_147a99396 body=51 status=ok
// SIG undefined FUN_147a99396(void)

void FUN_147a99396(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  if (DAT_14cada3b8 != (longlong *)0x0) {
    (**(code **)(*DAT_14cada3b8 + 0xb0))();
  }
  FUN_146f59bee(param_1,uVar1);
  return;
}



// FUNCTION 147a993ca FUN_147a993ca body=61 status=ok
// SIG undefined FUN_147a993ca(void)

void FUN_147a993ca(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_2 + 0x20);
  FUN_146f59866(param_1,lVar2,lVar1);
  FUN_147a99408(lVar2 + 0xe0,param_1,lVar1 + 0xe0);
  return;
}



// FUNCTION 147a99408 FUN_147a99408 body=164 status=ok
// SIG undefined FUN_147a99408(void)

void FUN_147a99408(void *param_1,undefined8 param_2,void *param_3)

{
  uint uVar1;
  void *pvVar2;
  void *_Dst;
  uint uVar3;
  ulonglong uVar4;
  
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  uVar1 = *(uint *)((longlong)param_3 + 0x88);
  uVar4 = (ulonglong)uVar1;
  uVar3 = 0x20;
  if (0x20 < uVar1) {
    uVar3 = uVar1;
  }
  FUN_147aadfb8(param_1,param_2,0,uVar3);
  pvVar2 = *(void **)((longlong)param_3 + 0x80);
  if (*(void **)((longlong)param_3 + 0x80) == (void *)0x0) {
    pvVar2 = param_3;
  }
  _Dst = *(void **)((longlong)param_1 + 0x80);
  if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
    _Dst = param_1;
  }
  memcpy(_Dst,pvVar2,uVar4 * 4);
  if (uVar4 < 0x20) {
    pvVar2 = *(void **)((longlong)param_1 + 0x80);
    if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
      pvVar2 = param_1;
    }
    memset((void *)((longlong)pvVar2 + uVar4 * 4),0,uVar4 * -4 + 0x80);
  }
  *(uint *)((longlong)param_1 + 0x8c) = uVar3;
  *(uint *)((longlong)param_1 + 0x88) = uVar1;
  return;
}



// FUNCTION 147a994ca FUN_147a994ca body=132 status=ok
// SIG undefined FUN_147a994ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a994ca(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cada3f8) {
    FUN_144b3d300(&DAT_14cada3f8);
    if (DAT_14cada3f8 == -1) {
      _DAT_14cada3e8 = &DAT_14cada300;
      _DAT_14cada3d8 = &PTR_LAB_149f970a0;
      _DAT_14cada3f0 = 0;
      _DAT_14cada3e0 = DAT_14cada3c0;
      _Init_thread_footer(&DAT_14cada3f8);
      return;
    }
  }
  return;
}



// FUNCTION 147a9954e FUN_147a9954e body=132 status=ok
// SIG undefined FUN_147a9954e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a9954e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cada420) {
    FUN_144b3d300(&DAT_14cada420);
    if (DAT_14cada420 == -1) {
      _DAT_14cada410 = &DAT_14cada300;
      _DAT_14cada400 = &PTR_LAB_149f970a0;
      _DAT_14cada418 = 0;
      _DAT_14cada408 = DAT_14cada3c8;
      _Init_thread_footer(&DAT_14cada420);
      return;
    }
  }
  return;
}



// FUNCTION 147a995d2 FUN_147a995d2 body=132 status=ok
// SIG undefined FUN_147a995d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a995d2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cada448) {
    FUN_144b3d300(&DAT_14cada448);
    if (DAT_14cada448 == -1) {
      _DAT_14cada438 = &DAT_14cada300;
      _DAT_14cada428 = &PTR_LAB_149f970a0;
      _DAT_14cada440 = 0;
      _DAT_14cada430 = DAT_14cada3d0;
      _Init_thread_footer(&DAT_14cada448);
      return;
    }
  }
  return;
}



// FUNCTION 147a99656 FUN_147a99656 body=109 status=ok
// SIG undefined FUN_147a99656(void)

void FUN_147a99656(void)

{
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  DAT_14cada3b8 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"p.NetPackedMovementMaxBits",0)
  ;
  FUN_147a994ca();
  FUN_146f09d18(&DAT_14cada3d8);
  FUN_147a9954e();
  FUN_146f09d18(&DAT_14cada400);
  FUN_147a995d2();
  FUN_146f09d18(&DAT_14cada428);
  return;
}



// FUNCTION 147a996d8 FUN_147a996d8 body=56 status=ok
// SIG undefined FUN_147a996d8(void)

void FUN_147a996d8(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) == iVar1) {
    FUN_145da1f4c(param_1,iVar1);
  }
  FUN_147aae06c((longlong)iVar1 * 0x90 + *param_1);
  return;
}



// FUNCTION 147a99710 FUN_147a99710 body=260 status=ok
// SIG undefined FUN_147a99710(void)

void FUN_147a99710(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  float extraout_XMM0_Da;
  float fVar5;
  undefined1 auStack_68 [36];
  float local_44;
  undefined1 local_40 [4];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar5 = *(float *)(param_1 + 0x98);
  if ((fVar5 < 1e-08) || (DAT_14c761518 == '\x01')) {
    *(undefined4 *)(param_1 + 0x98) = 0;
    plVar1 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_3c);
    lVar2 = FUN_147a99816(param_1,local_3c);
    if (*(int *)(lVar2 + 8) < 1) {
      fVar5 = *(float *)(param_1 + 0x98);
    }
    else {
      lVar4 = 0;
      fVar5 = extraout_XMM0_Da;
      do {
        uVar3 = FUN_1401e2d36(fVar5);
        FUN_140784c10(uVar3,local_40,&local_44);
        fVar5 = *(float *)(param_1 + 0x98);
        if (*(float *)(param_1 + 0x98) < local_44) {
          *(float *)(param_1 + 0x98) = local_44;
          fVar5 = local_44;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar2 + 8));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar5);
  }
  return;
}



// FUNCTION 147a99816 FUN_147a99816 body=251 status=ok
// SIG undefined FUN_147a99816(void)

longlong FUN_147a99816(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb0d2b0 == 0) || (lVar2 = FUN_140313804(), lVar2 == 0)) {
    lVar2 = param_1 + 0x28;
  }
  else {
    FUN_147a99a1c(lVar2,local_30,param_2);
    if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
      uVar1 = (uint)((ulonglong)local_28 >> 0x10);
      uVar5 = (uint)local_28 & 0xffff;
      lVar2 = param_1 + 0x70;
      if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x78);
      }
      iVar4 = *(int *)(lVar2 + (ulonglong)
                               (*(int *)(param_1 + 0x80) - 1U &
                               (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar5)
                               + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x38) + (longlong)iVar4 * 0x20;
          if (*(longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar4 * 0x20) == local_28)
          goto LAB_147a99885;
          iVar4 = *(int *)(lVar2 + 0x18);
        } while (iVar4 != -1);
      }
    }
    lVar2 = 0;
LAB_147a99885:
    lVar3 = lVar2 + 8;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    lVar2 = param_1 + 0x28;
    if (lVar3 != 0) {
      lVar2 = lVar3;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 147a99912 FUN_147a99912 body=266 status=ok
// SIG undefined FUN_147a99912(void)

void FUN_147a99912(undefined8 param_1,undefined4 param_2,float *param_3,undefined4 param_4,
                  float param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  
  plVar4 = (longlong *)FUN_147a99816(param_1,param_4);
  if (0 < (int)plVar4[1]) {
    lVar6 = 8;
    lVar7 = 0;
    do {
      lVar2 = *plVar4;
      lVar1 = lVar2 + lVar6;
      uVar5 = FUN_1401e2d36(lVar1);
      fVar8 = (float)FUN_1448c9f94(uVar5,param_2,0);
      fVar8 = fVar8 * param_5;
      uVar3 = *(uint *)(lVar2 + -8 + lVar6);
      if ((uVar3 & 1) != 0) {
        fVar9 = fVar8;
        if (1.0 <= fVar8) {
          fVar9 = 1.0;
        }
        if (fVar9 <= *param_3) {
          fVar9 = *param_3;
        }
        *param_3 = fVar9;
        uVar3 = *(uint *)(lVar1 + -8);
      }
      if ((uVar3 & 2) != 0) {
        fVar9 = fVar8;
        if (1.0 <= fVar8) {
          fVar9 = 1.0;
        }
        if (fVar9 <= param_3[1]) {
          fVar9 = param_3[1];
        }
        param_3[1] = fVar9;
        uVar3 = *(uint *)(lVar1 + -8);
      }
      if ((uVar3 & 4) != 0) {
        fVar9 = fVar8;
        if (1.0 <= fVar8) {
          fVar9 = 1.0;
        }
        if (fVar9 <= param_3[2]) {
          fVar9 = param_3[2];
        }
        param_3[2] = fVar9;
        uVar3 = *(uint *)(lVar1 + -8);
      }
      if ((uVar3 & 8) != 0) {
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        if (fVar8 <= param_3[3]) {
          fVar8 = param_3[3];
        }
        param_3[3] = fVar8;
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x90;
    } while (lVar7 < (int)plVar4[1]);
  }
  return;
}



// FUNCTION 147a99a1c FUN_147a99a1c body=142 status=ok
// SIG undefined FUN_147a99a1c(void)

void FUN_147a99a1c(longlong param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x140) != *(int *)(param_1 + 0x16c)) {
    lVar2 = param_1 + 0x170;
    if (*(longlong *)(param_1 + 0x178) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x178);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x180) - 1U & param_3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x138) + (longlong)(int)uVar3 * 0x28);
        if (*puVar1 == param_3) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffffb) != 0) {
            *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar1 + 6);
            uVar3 = puVar1[2];
            uVar4 = puVar1[3];
            uVar5 = puVar1[4];
            uVar6 = puVar1[5];
            goto LAB_147a99a3f;
          }
          break;
        }
        uVar3 = puVar1[8];
      } while (uVar3 != 0xffffffff);
    }
  }
  *(undefined8 *)(param_2 + 4) = DAT_14cb0f128;
  uVar3 = (uint)DAT_14cb0f118;
  uVar4 = DAT_14cb0f118._4_4_;
  uVar5 = (uint)DAT_14cb0f120;
  uVar6 = DAT_14cb0f120._4_4_;
LAB_147a99a3f:
  *param_2 = uVar3;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  return;
}



// FUNCTION 147a99aaa FUN_147a99aaa body=51 status=ok
// SIG undefined FUN_147a99aaa(void)

void FUN_147a99aaa(longlong param_1)

{
  FUN_1434e6f1c();
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_145a32ae8(param_1 + 0x20);
  return;
}



// FUNCTION 147a99ade FUN_147a99ade body=243 status=ok
// SIG undefined FUN_147a99ade(void)

undefined8 FUN_147a99ade(longlong *param_1,float param_2,undefined8 *param_3)

{
  double dVar1;
  undefined8 uVar2;
  float extraout_XMM0_Da;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  if (*param_1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_147a99710();
    if (*(char *)((longlong)param_1 + 0x1c) == '\0') {
      FUN_147a99bd2(param_1);
    }
    dVar1 = DAT_14c759090;
    if (*(char *)((longlong)param_1 + 0x11) == '\0') {
      dVar1 = (double)param_2;
    }
    fVar3 = (float)((double)*(float *)((longlong)param_1 + 0x14) + dVar1);
    *(float *)((longlong)param_1 + 0x14) = fVar3;
    if (extraout_XMM0_Da < fVar3) {
      if ((extraout_XMM0_Da == 0.0) && (!NAN(extraout_XMM0_Da))) {
        return 0;
      }
      if ((char)param_1[2] == '\0') {
        return 0;
      }
    }
    if ((fVar3 <= extraout_XMM0_Da) || (uVar2 = 1, (char)param_1[2] == '\x01')) {
      if (*param_1 == 0) {
        *param_3 = 0;
        param_3[1] = 0;
      }
      else {
        fVar3 = (float)FUN_147a99710();
        fVar4 = *(float *)((longlong)param_1 + 0x14) / fVar3;
        auVar5 = roundps(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4),1);
        FUN_147a99912(*param_1,*(float *)((longlong)param_1 + 0x14) - auVar5._0_4_ * fVar3,param_3,
                      (int)param_1[3],0x3f800000);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 147a99bd2 FUN_147a99bd2 body=259 status=ok
// SIG undefined FUN_147a99bd2(void)

void FUN_147a99bd2(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 != 0) {
    if ((DAT_14cb0d2b0 != 0) && (lVar3 = FUN_140313804(), lVar3 != 0)) {
      lVar4 = (longlong)*(int *)(*param_1 + 0x90);
      if (lVar4 != 0) {
        lVar1 = *(longlong *)(*param_1 + 0x88);
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(lVar1 + lVar5);
          if (lVar2 != 0) {
            local_50 = 0xffffffff;
            local_54 = (undefined4)param_1[3];
            local_4c = *(char *)((longlong)param_1 + 0x12) << 2 |
                       *(char *)((longlong)param_1 + 0x11) * '\x02' | local_4c & 0xf8 |
                       *(byte *)(param_1 + 2);
            FUN_1434e6f76(lVar3,local_58,lVar2,&local_54);
            FUN_147a99cd6(param_1 + 4,local_5c,local_58);
          }
          lVar5 = lVar5 + 8;
        } while (lVar4 * 8 != lVar5);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x1c) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a99cd6 FUN_147a99cd6 body=274 status=ok
// SIG undefined FUN_147a99cd6(void)

undefined4 * FUN_147a99cd6(longlong param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147aae078(param_1,local_48);
  uVar4 = *param_3;
  *local_40 = uVar4;
  local_40[1] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_147aae15e(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[2] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[1] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147aae246(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a99dea FUN_147a99dea body=67 status=ok
// SIG undefined FUN_147a99dea(void)

void FUN_147a99dea(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a32c2a(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147aae246(param_1);
    return;
  }
  FUN_147aae3ea(param_1);
  FUN_145a32c2a(param_1,0);
  return;
}



// FUNCTION 147a99e2e FUN_147a99e2e body=206 status=ok
// SIG undefined FUN_147a99e2e(void)

undefined8 FUN_147a99e2e(longlong *param_1,float param_2,longlong param_3)

{
  float fVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    fVar1 = (float)(**(code **)(*(longlong *)*param_1 + 0x2b0))();
    param_2 = param_2 + *(float *)((longlong)param_1 + 0xc);
    *(float *)((longlong)param_1 + 0xc) = param_2;
    if ((fVar1 == 0.0) && (!NAN(fVar1))) {
      return 0;
    }
    if (fVar1 < param_2) {
      return 0;
    }
    param_1[3] = 0;
    *(longlong **)(param_3 + 8) = param_1 + 3;
    (**(code **)(*(longlong *)*param_1 + 0x2a8))
              ((longlong *)*param_1,*(undefined4 *)((longlong)param_1 + 0xc),param_3);
    if (param_1[3] == 0) {
      *(undefined8 *)(param_3 + 8) = 0;
      *(float *)(param_3 + 4) = *(float *)(param_1 + 2) * *(float *)(param_3 + 4);
      return 1;
    }
    *(float *)(param_3 + 4) = *(float *)(param_1 + 2) * *(float *)(param_3 + 4);
    if (*(longlong *)(param_3 + 8) == 0) {
      return 1;
    }
    *(int *)(*(longlong *)(param_3 + 8) + 0x1c) = (int)param_1[2];
    if (*(char *)(*(longlong *)(param_3 + 8) + 0x14) != '\x01') {
      return 1;
    }
    *(undefined8 *)(param_3 + 8) = 0;
  }
  return 0;
}



// FUNCTION 147a99f02 FUN_147a99f02 body=90 status=ok
// SIG undefined FUN_147a99f02(void)

void FUN_147a99f02(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1401e2d36(param_1 + 0xb0);
  uVar2 = FUN_1448c9f94(uVar1,param_2,0);
  param_3[1] = uVar2;
  uVar1 = FUN_1401e2d36(param_1 + 0x28);
  uVar2 = FUN_1448c9f94(uVar1,param_2,0);
  *param_3 = uVar2;
  return;
}



// FUNCTION 147a99f5c FUN_147a99f5c body=124 status=ok
// SIG undefined FUN_147a99f5c(void)

void FUN_147a99f5c(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  float local_28;
  undefined1 local_24 [4];
  float local_20;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_1401e2d36(param_1 + 0xb0);
  FUN_140784c10(uVar1,local_1c,&local_20);
  uVar1 = FUN_1401e2d36(param_1 + 0x28);
  FUN_140784c10(uVar1,local_24,&local_28);
  if (local_20 <= local_28) {
    local_20 = local_28;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20);
}



// FUNCTION 147a9a03a FUN_147a9a03a body=81 status=ok
// SIG undefined FUN_147a9a03a(void)

void FUN_147a9a03a(longlong param_1,longlong param_2)

{
  float fVar1;
  
  if (*(char *)(param_1 + 0x31) == '\0') {
    FUN_1434e7128(param_1);
  }
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  fVar1 = (float)FUN_147d3f71a(*(undefined8 *)(param_1 + 0x28));
  *(int *)(param_2 + 0x18) = (int)fVar1;
  *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0x24) = 0;
  return;
}



// FUNCTION 147a9a08c FUN_147a9a08c body=117 status=ok
// SIG undefined FUN_147a9a08c(void)

void FUN_147a9a08c(longlong param_1,float param_2,undefined4 *param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x40);
  fVar2 = (float)(**(code **)(**(longlong **)(param_1 + 0x28) + 0x2c8))();
  iVar1 = (int)(((float)iVar1 * param_2) / fVar2);
  *param_3 = 0x3f800000;
  fVar2 = 0.0;
  if (iVar1 < *(int *)(param_1 + 0x40)) {
    fVar2 = (float)*(byte *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1) / 255.0;
  }
  param_3[1] = fVar2;
  **(undefined8 **)(param_3 + 2) = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 147a9a11a FUN_147a9a11a body=59 status=ok
// SIG undefined FUN_147a9a11a(void)

undefined8 FUN_147a9a11a(double *param_1,double *param_2)

{
  if ((*param_1 <= *param_2) && (*param_2 <= *param_1 + param_1[2])) {
    if ((param_1[1] <= param_2[1]) && (param_2[1] <= param_1[1] + param_1[3])) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147a9a156 FUN_147a9a156 body=278 status=ok
// SIG undefined FUN_147a9a156(void)

void FUN_147a9a156(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_2f8 [32];
  undefined4 *local_2d8;
  longlong *local_2c8 [2];
  undefined **local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined1 local_298;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  longlong local_260;
  undefined8 uStack_258;
  undefined1 local_250 [536];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_2b0 = *param_1;
  uStack_2a8 = param_1[1];
  local_290 = 0;
  local_2a0 = 0;
  local_298 = 0;
  local_2b8 = &PTR_FUN_14a8eb0d0;
  local_278 = param_1[2];
  uStack_270 = param_1[3];
  local_268 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_288 = *param_3;
  uStack_284 = param_3[1];
  uStack_280 = param_3[2];
  uStack_27c = param_3[3];
  FUN_140505094(param_2);
  uVar1 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  FUN_145715fae(local_2c8,param_1 + 4);
  local_2d8 = param_3;
  FUN_140114bb6(local_250,param_1,local_2c8,uVar1);
  if (local_2c8[0] != (longlong *)0x0) {
    (**(code **)(*local_2c8[0] + 0x10))();
  }
  FUN_140505094(param_2,local_250);
  FUN_140b2399e(local_250);
  local_2b8 = &PTR_FUN_14a8eb0d0;
  if (local_260 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9a26e FUN_147a9a26e body=239 status=ok
// SIG undefined FUN_147a9a26e(void)

void FUN_147a9a26e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2b0))(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9a35e FUN_147a9a35e body=203 status=ok
// SIG undefined FUN_147a9a35e(void)

void FUN_147a9a35e(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_14477b072(param_1,DAT_14cada4c8);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_54 = param_5;
    local_60 = param_2;
    local_5c = param_3;
    local_58 = param_4;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147a9a435. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a0))(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9a43e FUN_147a9a43e body=419 status=ok
// SIG undefined FUN_147a9a43e(void)

void FUN_147a9a43e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0xffffffff;
  FUN_1446dcc8c();
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
  local_38 = local_28;
  (**(code **)(*param_1 + 0x2a0))(param_1,local_1c,local_20,local_24);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9a5e2 FUN_147a9a5e2 body=164 status=ok
// SIG undefined FUN_147a9a5e2(void)

void FUN_147a9a5e2(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_14477b072(param_1,DAT_14cada4d8);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_2c = 0;
    local_34 = param_2;
    local_30 = param_3;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000147a9a689. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a8))(param_1,param_2,param_3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9a698 FUN_147a9a698 body=333 status=ok
// SIG undefined FUN_147a9a698(void)

void FUN_147a9a698(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x2a8))(param_1,local_1c,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9a820 FUN_147a9a820 body=38 status=ok
// SIG undefined FUN_147a9a820(void)

void FUN_147a9a820(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2b8))();
  FUN_147a9a846(param_2,param_3,uVar1);
  return;
}



// FUNCTION 147a9a846 FUN_147a9a846 body=159 status=ok
// SIG undefined FUN_147a9a846(void)

void FUN_147a9a846(undefined4 param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_3 != 0) && (DAT_14c98e618 != 0)) {
    plVar1 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe0))();
    if (plVar1 != (longlong *)0x0) {
      local_34 = 0xffffffff;
      plVar2 = (longlong *)FUN_144a81a0a();
      (**(code **)(*plVar2 + 0x90))(plVar2,param_1,&local_34,param_2);
      (**(code **)(*plVar1 + 0x20))(plVar1,local_34,param_3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9a8f0 FUN_147a9a8f0 body=67 status=ok
// SIG undefined FUN_147a9a8f0(void)

void FUN_147a9a8f0(longlong param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined1 *)FUN_147a9a934(param_2,param_1 + 0x38);
  puVar2 = (undefined4 *)(puVar1 + 4);
  if (puVar1 == (undefined1 *)0x0) {
    puVar2 = (undefined4 *)(param_1 + 0x34);
    puVar1 = (undefined1 *)(param_1 + 0x30);
  }
  *(undefined1 *)(param_1 + 0x90) = *puVar1;
  *(undefined4 *)(param_1 + 0x94) = *puVar2;
  return;
}



// FUNCTION 147a9a934 FUN_147a9a934 body=227 status=ok
// SIG undefined FUN_147a9a934(void)

longlong * FUN_147a9a934(undefined4 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb0d2b0 == 0) || (lVar2 = FUN_140313804(), lVar2 == 0)) {
    plVar3 = (longlong *)0x0;
  }
  else {
    FUN_147a99a1c(lVar2,local_30,param_1);
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      uVar1 = (uint)((ulonglong)local_28 >> 0x10);
      uVar6 = (uint)local_28 & 0xffff;
      plVar5 = param_2 + 7;
      if ((longlong *)param_2[8] != (longlong *)0x0) {
        plVar5 = (longlong *)param_2[8];
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      (ulonglong)
                      ((int)param_2[9] - 1U &
                      (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar6) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          plVar5 = (longlong *)(*param_2 + (longlong)iVar4 * 0x18);
          if (*plVar5 == local_28) goto LAB_147a9a99e;
          iVar4 = (int)plVar5[2];
        } while (iVar4 != -1);
      }
    }
    plVar5 = (longlong *)0x0;
LAB_147a9a99e:
    plVar3 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 147a9aa18 FUN_147a9aa18 body=100 status=ok
// SIG undefined FUN_147a9aa18(void)

void FUN_147a9aa18(longlong *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = *(char *)((longlong)param_1 + 0x31);
  lVar1 = FUN_147a9a934(param_2,param_1 + 7);
  if (lVar1 != 0) {
    cVar2 = *(char *)(lVar1 + 1);
  }
  if (cVar2 != '\0' || param_4 != '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0;
                    /* WARNING: Could not recover jumptable at 0x000147a9aa6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2b0))(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 147a9aa84 FUN_147a9aa84 body=170 status=ok
// SIG undefined FUN_147a9aa84(void)

void FUN_147a9aa84(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined1 *)FUN_147a9ab30(param_2,param_1 + 0x40);
  if (puVar1 == (undefined1 *)0x0) {
    *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_1 + 0x30);
    lVar2 = *(longlong *)(param_1 + 0x38);
  }
  else {
    *(undefined1 *)(param_1 + 0x98) = *puVar1;
    lVar2 = *(longlong *)(puVar1 + 8);
  }
  if (lVar2 != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x50))(lVar2 + 0x28,local_40,param_5);
    FUN_1411ab38a(local_40,&local_44);
    *(undefined4 *)(param_1 + 0x9c) = local_44;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9ab30 FUN_147a9ab30 body=228 status=ok
// SIG undefined FUN_147a9ab30(void)

longlong FUN_147a9ab30(undefined4 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb0d2b0 == 0) || (lVar2 = FUN_140313804(), lVar2 == 0)) {
    lVar3 = 0;
  }
  else {
    FUN_147a99a1c(lVar2,local_30,param_1);
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      uVar1 = (uint)((ulonglong)local_28 >> 0x10);
      uVar6 = (uint)local_28 & 0xffff;
      plVar5 = param_2 + 7;
      if ((longlong *)param_2[8] != (longlong *)0x0) {
        plVar5 = (longlong *)param_2[8];
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      (ulonglong)
                      ((int)param_2[9] - 1U &
                      (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar6) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          lVar2 = *param_2 + (longlong)iVar4 * 0x20;
          if (*(longlong *)(*param_2 + (longlong)iVar4 * 0x20) == local_28) goto LAB_147a9ab9a;
          iVar4 = *(int *)(lVar2 + 0x18);
        } while (iVar4 != -1);
      }
    }
    lVar2 = 0;
LAB_147a9ab9a:
    lVar3 = lVar2 + 8;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 147a9ac16 FUN_147a9ac16 body=100 status=ok
// SIG undefined FUN_147a9ac16(void)

void FUN_147a9ac16(longlong *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = *(char *)((longlong)param_1 + 0x31);
  lVar1 = FUN_147a9ab30(param_2,param_1 + 8);
  if (lVar1 != 0) {
    cVar2 = *(char *)(lVar1 + 1);
  }
  if (cVar2 != '\0' || param_4 != '\0') {
    *(undefined1 *)(param_1 + 0x13) = 0;
                    /* WARNING: Could not recover jumptable at 0x000147a9ac6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2b0))(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 147a9ac82 FUN_147a9ac82 body=368 status=ok
// SIG undefined FUN_147a9ac82(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147a9ac82(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_b8 [44];
  float local_8c;
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60 [2];
  ulonglong local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar4 = 0;
  local_60[1] = 0.0;
  local_60[0] = 0.0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1457437e2(*(longlong *)(param_1 + 0x38),local_60 + 1,local_60);
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  lVar2 = param_1 + 0x50;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x68);
  }
  local_70 = local_48;
  iStack_6c = iStack_44;
  local_68 = local_40;
  local_64 = local_3c;
  local_80 = local_58;
  local_78 = local_50;
  local_88 = plVar1;
  if ((iStack_44 != iVar4) || (local_50 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_88 + 0x10 + (longlong)iStack_6c * 0x20);
      if (lVar3 != 0) {
        local_58 = local_58 & 0xffffffff00000000;
        local_8c = 0.0;
        FUN_1457437e2(lVar3,&local_58,&local_8c);
        if (local_60[0] < local_8c) {
          local_60[0] = local_8c;
        }
      }
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (local_78 != lVar2 || iStack_6c != iVar4));
  }
  *(float *)(param_1 + 0x28) = local_60[0];
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9ae28 FUN_147a9ae28 body=172 status=ok
// SIG undefined FUN_147a9ae28(void)

void FUN_147a9ae28(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_1 + 0x30);
  plVar3 = (longlong *)FUN_147a9aed4(param_2,param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    plVar5 = plVar3;
  }
  iVar2 = 0;
  if (*plVar5 != 0) {
    fVar6 = (float)FUN_1449e6cbc(*plVar5,param_5);
    lVar4 = FUN_140313a2a();
    iVar1 = *(int *)(lVar4 + 0x44);
    if ((int)fVar6 < *(int *)(lVar4 + 0x44)) {
      iVar1 = (int)fVar6;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
  }
  *(int *)(param_1 + 0xac) = iVar2;
  iVar2 = 0;
  if (plVar5[1] != 0) {
    fVar6 = (float)FUN_1449e6cbc(plVar5[1],param_5);
    lVar4 = FUN_140313a2a();
    iVar1 = *(int *)(lVar4 + 0x48);
    if ((int)fVar6 < *(int *)(lVar4 + 0x48)) {
      iVar1 = (int)fVar6;
    }
    iVar2 = 0;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
  }
  *(int *)(param_1 + 0xb0) = iVar2;
  return;
}



// FUNCTION 147a9aed4 FUN_147a9aed4 body=228 status=ok
// SIG undefined FUN_147a9aed4(void)

longlong FUN_147a9aed4(undefined4 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb0d2b0 == 0) || (lVar2 = FUN_140313804(), lVar2 == 0)) {
    lVar3 = 0;
  }
  else {
    FUN_147a99a1c(lVar2,local_30,param_1);
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      uVar1 = (uint)((ulonglong)local_28 >> 0x10);
      uVar6 = (uint)local_28 & 0xffff;
      plVar5 = param_2 + 7;
      if ((longlong *)param_2[8] != (longlong *)0x0) {
        plVar5 = (longlong *)param_2[8];
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      (ulonglong)
                      ((int)param_2[9] - 1U &
                      (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar6) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          lVar2 = *param_2 + (longlong)iVar4 * 0x20;
          if (*(longlong *)(*param_2 + (longlong)iVar4 * 0x20) == local_28) goto LAB_147a9af3e;
          iVar4 = *(int *)(lVar2 + 0x18);
        } while (iVar4 != -1);
      }
    }
    lVar2 = 0;
LAB_147a9af3e:
    lVar3 = lVar2 + 8;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 147a9afc2 FUN_147a9afc2 body=378 status=ok
// SIG undefined FUN_147a9afc2(void)

void FUN_147a9afc2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1457437e2(*(longlong *)(param_1 + 0x40),local_64,&local_68);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1457437e2(*(longlong *)(param_1 + 0x48),local_64,&local_68);
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  lVar2 = param_1 + 0x60;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x78);
  }
  uStack_70 = CONCAT44(uStack_44,uStack_48);
  local_78 = local_50;
  iStack_74 = iStack_4c;
  local_88 = (undefined4)local_60;
  uStack_84 = local_60._4_4_;
  uStack_80 = (undefined4)uStack_58;
  uStack_7c = uStack_58._4_4_;
  local_90 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar6 = (longlong)iStack_74;
      lVar4 = *(longlong *)(lVar3 + 8 + lVar6 * 0x20);
      if (lVar4 != 0) {
        FUN_1457437e2(lVar4,local_64,&local_68);
      }
      lVar3 = *(longlong *)(lVar3 + lVar6 * 0x20 + 0x10);
      if (lVar3 != 0) {
        FUN_1457437e2(lVar3,local_64,&local_68);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar5));
  }
  *(undefined4 *)(param_1 + 0x28) = local_68;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9b13e FUN_147a9b13e body=103 status=ok
// SIG undefined FUN_147a9b13e(void)

void FUN_147a9b13e(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_1 + 0x30);
  puVar1 = (undefined4 *)FUN_147a9b1a6(param_2,param_1 + 0x50);
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_1 + 0x40);
    puVar2 = (undefined4 *)(param_1 + 0x48);
    puVar1 = (undefined4 *)(param_1 + 0x4c);
  }
  else {
    *(undefined4 *)(param_1 + 0xac) = *puVar1;
    *(undefined4 *)(param_1 + 0xb0) = puVar1[1];
    puVar2 = puVar1 + 2;
    puVar1 = puVar1 + 3;
  }
  *(undefined4 *)(param_1 + 0xb4) = *puVar2;
  *(undefined4 *)(param_1 + 0xb8) = *puVar1;
  return;
}



// FUNCTION 147a9b1a6 FUN_147a9b1a6 body=228 status=ok
// SIG undefined FUN_147a9b1a6(void)

longlong FUN_147a9b1a6(undefined4 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb0d2b0 == 0) || (lVar2 = FUN_140313804(), lVar2 == 0)) {
    lVar3 = 0;
  }
  else {
    FUN_147a99a1c(lVar2,local_30,param_1);
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      uVar1 = (uint)((ulonglong)local_28 >> 0x10);
      uVar6 = (uint)local_28 & 0xffff;
      plVar5 = param_2 + 7;
      if ((longlong *)param_2[8] != (longlong *)0x0) {
        plVar5 = (longlong *)param_2[8];
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      (ulonglong)
                      ((int)param_2[9] - 1U &
                      (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar6) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          lVar2 = *param_2 + (longlong)iVar4 * 0x20;
          if (*(longlong *)(*param_2 + (longlong)iVar4 * 0x20) == local_28) goto LAB_147a9b210;
          iVar4 = *(int *)(lVar2 + 0x18);
        } while (iVar4 != -1);
      }
    }
    lVar2 = 0;
LAB_147a9b210:
    lVar3 = lVar2 + 8;
    if (lVar2 == 0) {
      lVar3 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 147a9b294 FUN_147a9b294 body=223 status=ok
// SIG undefined FUN_147a9b294(void)

void FUN_147a9b294(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  float fVar6;
  
  plVar2 = (longlong *)FUN_147a9b374(param_2,param_1 + 0x58);
  plVar5 = (longlong *)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0x30);
  iVar4 = 0;
  if (*plVar5 != 0) {
    fVar6 = (float)FUN_1449e6cbc(*plVar5,param_5);
    lVar3 = FUN_140313a2a();
    iVar1 = *(int *)(lVar3 + 0x4c);
    if ((int)fVar6 < *(int *)(lVar3 + 0x4c)) {
      iVar1 = (int)fVar6;
    }
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = iVar1;
    }
  }
  *(int *)(param_1 + 0xb4) = iVar4;
  iVar4 = 0;
  if (plVar5[1] != 0) {
    fVar6 = (float)FUN_1449e6cbc(plVar5[1],param_5);
    lVar3 = FUN_140313a2a();
    iVar1 = *(int *)(lVar3 + 0x50);
    if ((int)fVar6 < *(int *)(lVar3 + 0x50)) {
      iVar1 = (int)fVar6;
    }
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = iVar1;
    }
  }
  *(int *)(param_1 + 0xb8) = iVar4;
  if (plVar5[2] == 0) {
    iVar4 = 0;
  }
  else {
    fVar6 = (float)FUN_1449e6cbc(plVar5[2],param_5);
    lVar3 = FUN_140313a2a();
    iVar1 = *(int *)(lVar3 + 0x54);
    if ((int)fVar6 < *(int *)(lVar3 + 0x54)) {
      iVar1 = (int)fVar6;
    }
    iVar4 = 0;
    if (0 < iVar1) {
      iVar4 = iVar1;
    }
  }
  *(int *)(param_1 + 0xbc) = iVar4;
  return;
}



// FUNCTION 147a9b374 FUN_147a9b374 body=227 status=ok
// SIG undefined FUN_147a9b374(void)

longlong * FUN_147a9b374(undefined4 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb0d2b0 == 0) || (lVar2 = FUN_140313804(), lVar2 == 0)) {
    plVar3 = (longlong *)0x0;
  }
  else {
    FUN_147a99a1c(lVar2,local_30,param_1);
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      uVar1 = (uint)((ulonglong)local_28 >> 0x10);
      uVar6 = (uint)local_28 & 0xffff;
      plVar5 = param_2 + 7;
      if ((longlong *)param_2[8] != (longlong *)0x0) {
        plVar5 = (longlong *)param_2[8];
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      (ulonglong)
                      ((int)param_2[9] - 1U &
                      (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar6) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          plVar5 = (longlong *)(*param_2 + (longlong)iVar4 * 0x28);
          if (*plVar5 == local_28) goto LAB_147a9b3de;
          iVar4 = (int)plVar5[4];
        } while (iVar4 != -1);
      }
    }
    plVar5 = (longlong *)0x0;
LAB_147a9b3de:
    plVar3 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 147a9b460 FUN_147a9b460 body=862 status=ok
// SIG undefined FUN_147a9b460(void)

float FUN_147a9b460(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 0x40);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
    local_88 = (ulonglong)local_88._4_4_ << 0x20;
LAB_147a9b4b2:
    FUN_1457437e2(lVar2,&local_b0,&local_88);
    fVar7 = 0.0;
    if (0.0 < (float)local_88) {
      fVar7 = (float)local_88;
    }
  }
  else {
    local_88 = local_88 & 0xffffffff00000000;
    if (lVar2 != 0) goto LAB_147a9b4b2;
    fVar7 = 0.0;
  }
  lVar2 = *(longlong *)(param_1 + 0x48);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
    local_88 = local_88 & 0xffffffff00000000;
LAB_147a9b500:
    FUN_1457437e2(lVar2,&local_b0,&local_88);
    if (fVar7 < (float)local_88) {
      fVar7 = (float)local_88;
    }
  }
  else {
    local_88 = local_88 & 0xffffffff00000000;
    if (lVar2 != 0) goto LAB_147a9b500;
  }
  lVar2 = *(longlong *)(param_1 + 0x50);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  else if (lVar2 == 0) goto LAB_147a9b567;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1457437e2(lVar2,&local_b0,&local_88);
  if (fVar7 < (float)local_88) {
    fVar7 = (float)local_88;
  }
LAB_147a9b567:
  plVar1 = (longlong *)(param_1 + 0x58);
  lVar2 = param_1 + 0x68;
  local_88 = 0x100000000;
  local_78 = 0xffffffff;
  iStack_74 = 0;
  uStack_70 = 0;
  local_b8 = param_1;
  uStack_80 = lVar2;
  if (*(int *)(param_1 + 0x80) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    iVar6 = *(int *)(param_1 + 0x80);
  }
  uStack_90 = CONCAT44(uStack_6c,uStack_70);
  local_98 = local_78;
  iStack_94 = iStack_74;
  local_a8 = (float)local_88;
  uStack_a4 = local_88._4_4_;
  uStack_a0 = (undefined4)uStack_80;
  uStack_9c = uStack_80._4_4_;
  local_b0 = plVar1;
  if ((iStack_74 != iVar6) || (uStack_80 != lVar2)) {
    do {
      lVar3 = *local_b0;
      lVar5 = (longlong)iStack_94;
      lVar4 = *(longlong *)(lVar3 + 8 + lVar5 * 0x28);
      if ((DAT_14c950c29 == 1) && (lVar4 != 0)) {
        FUN_1456cec3c(lVar4);
LAB_147a9b64d:
        local_64 = 0.0;
        FUN_1457437e2(lVar4,&local_88,&local_64);
        if (fVar7 < local_64) {
          fVar7 = local_64;
        }
      }
      else {
        local_64 = 0.0;
        if (lVar4 != 0) goto LAB_147a9b64d;
      }
      lVar3 = lVar3 + lVar5 * 0x28;
      lVar4 = *(longlong *)(lVar3 + 0x10);
      if ((DAT_14c950c29 == 1) && (lVar4 != 0)) {
        FUN_1456cec3c(lVar4);
LAB_147a9b697:
        local_64 = 0.0;
        FUN_1457437e2(lVar4,&local_88,&local_64);
        if (fVar7 < local_64) {
          fVar7 = local_64;
        }
      }
      else {
        local_64 = 0.0;
        if (lVar4 != 0) goto LAB_147a9b697;
      }
      lVar3 = *(longlong *)(lVar3 + 0x18);
      if ((DAT_14c950c29 == 1) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
LAB_147a9b6dc:
        local_64 = 0.0;
        FUN_1457437e2(lVar3,&local_88,&local_64);
        if (fVar7 < local_64) {
          fVar7 = local_64;
        }
      }
      else {
        local_64 = 0.0;
        if (lVar3 != 0) goto LAB_147a9b6dc;
      }
      local_98 = local_98 & ~uStack_a4;
      FUN_1449c0562(&local_a8);
    } while (local_b0 != plVar1 || (CONCAT44(uStack_9c,uStack_a0) != lVar2 || iStack_94 != iVar6));
  }
  *(float *)(local_b8 + 0x28) = fVar7;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return fVar7;
}



// FUNCTION 147a9b7c2 FUN_147a9b7c2 body=89 status=ok
// SIG undefined FUN_147a9b7c2(void)

void FUN_147a9b7c2(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)FUN_147a9b824(param_2,param_1 + 0x38);
  plVar3 = (longlong *)(param_1 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
    lVar2 = FUN_1435331ae(param_2);
    if (lVar2 != 0) {
      FUN_147c9505a(lVar2,*plVar3,0x3f800000,0x3f800000);
      return;
    }
  }
  return;
}



// FUNCTION 147a9b824 FUN_147a9b824 body=227 status=ok
// SIG undefined FUN_147a9b824(void)

longlong * FUN_147a9b824(undefined4 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14cb0d2b0 == 0) || (lVar2 = FUN_140313804(), lVar2 == 0)) {
    plVar3 = (longlong *)0x0;
  }
  else {
    FUN_147a99a1c(lVar2,local_30,param_1);
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      uVar1 = (uint)((ulonglong)local_28 >> 0x10);
      uVar6 = (uint)local_28 & 0xffff;
      plVar5 = param_2 + 7;
      if ((longlong *)param_2[8] != (longlong *)0x0) {
        plVar5 = (longlong *)param_2[8];
      }
      iVar4 = *(int *)((longlong)plVar5 +
                      (ulonglong)
                      ((int)param_2[9] - 1U &
                      (int)((ulonglong)local_28 >> 0x20) + ((uint)local_28 << 0x10 | uVar6) +
                      (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          plVar5 = (longlong *)(*param_2 + (longlong)iVar4 * 0x18);
          if (*plVar5 == local_28) goto LAB_147a9b88e;
          iVar4 = (int)plVar5[2];
        } while (iVar4 != -1);
      }
    }
    plVar5 = (longlong *)0x0;
LAB_147a9b88e:
    plVar3 = plVar5 + 1;
    if (plVar5 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 147a9b908 FUN_147a9b908 body=10 status=ok
// SIG undefined FUN_147a9b908(void)

undefined4 * FUN_147a9b908(undefined4 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 147a9b912 FUN_147a9b912 body=3 status=ok
// SIG undefined FUN_147a9b912(void)

undefined4 FUN_147a9b912(undefined4 *param_1)

{
  return *param_1;
}



// FUNCTION 147a9b916 FUN_147a9b916 body=7 status=ok
// SIG undefined FUN_147a9b916(void)

bool FUN_147a9b916(int *param_1)

{
  return *param_1 != 0;
}



// FUNCTION 147a9b930 FUN_147a9b930 body=332 status=ok
// SIG undefined FUN_147a9b930(void)

void FUN_147a9b930(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_3c = DAT_14c9680a8;
  local_38 = 0xffffffff;
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  puVar2 = &local_3c;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  FUN_1434e7328(param_1,&local_40,&local_48,puVar2);
  *param_3 = local_40;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9ba7e FUN_147a9ba7e body=162 status=ok
// SIG undefined FUN_147a9ba7e(void)

void FUN_147a9ba7e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a9bb22(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9bb22 FUN_147a9bb22 body=205 status=ok
// SIG undefined FUN_147a9bb22(void)

undefined8 FUN_147a9bb22(longlong param_1,uint param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar4 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xd8);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar6 * 0xc) == param_2) {
          return 0;
        }
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar6 * 0xc + 4);
      } while (iVar6 != -1);
    }
  }
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar4 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x88);
    }
    uVar5 = *(uint *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x90) - 1U & param_2) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x48) + (longlong)(int)uVar5 * 0x28);
        if (puVar1[6] == param_2) {
          if (puVar1 == (uint *)0x0) {
            return 0;
          }
          if (puVar1[1] == 0) {
            return 0;
          }
          uVar5 = *puVar1;
          uVar2 = 0;
          if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
            puVar3 = (undefined8 *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
            if (puVar3 == (undefined8 *)0x0) {
              return 0;
            }
            if (*(uint *)(puVar3 + 2) != puVar1[1]) {
              return 0;
            }
            if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
              return 0;
            }
            uVar2 = *puVar3;
          }
          return uVar2;
        }
        uVar5 = puVar1[8];
      } while (uVar5 != 0xffffffff);
    }
  }
  return 0;
}



// FUNCTION 147a9bbf0 FUN_147a9bbf0 body=182 status=ok
// SIG undefined FUN_147a9bbf0(void)

void FUN_147a9bbf0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1405af760(param_1,&local_3c,local_24);
  *(undefined8 *)(param_3 + 4) = local_2c;
  *param_3 = local_3c;
  param_3[1] = uStack_38;
  param_3[2] = uStack_34;
  param_3[3] = uStack_30;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9bca8 FUN_147a9bca8 body=182 status=ok
// SIG undefined FUN_147a9bca8(void)

void FUN_147a9bca8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a99a1c(param_1,&local_3c,local_24);
  *(undefined8 *)(param_3 + 4) = local_2c;
  *param_3 = local_3c;
  param_3[1] = uStack_38;
  param_3[2] = uStack_34;
  param_3[3] = uStack_30;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9bd60 FUN_147a9bd60 body=172 status=ok
// SIG undefined FUN_147a9bd60(void)

void FUN_147a9bd60(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a9be0e(param_1,&local_28,local_24);
  *param_3 = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9be0e FUN_147a9be0e body=130 status=ok
// SIG undefined FUN_147a9be0e(void)

void FUN_147a9be0e(longlong param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar2 = 0xffffffff;
  if (*(int *)(param_1 + 0x140) != *(int *)(param_1 + 0x16c)) {
    lVar3 = param_1 + 0x170;
    if (*(longlong *)(param_1 + 0x178) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x178);
    }
    uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x180) - 1U & param_3) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x138) + (longlong)(int)uVar4 * 0x28);
        if (*puVar1 == param_3) {
          if (puVar1 + 1 != (uint *)0x0 && puVar1 != (uint *)0x0) {
            uVar2 = puVar1[1];
          }
          break;
        }
        uVar4 = puVar1[8];
      } while (uVar4 != 0xffffffff);
    }
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 147a9be96 FUN_147a9be96 body=161 status=ok
// SIG undefined FUN_147a9be96(void)

void FUN_147a9be96(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a9bf38(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9bf38 FUN_147a9bf38 body=201 status=ok
// SIG undefined FUN_147a9bf38(void)

undefined8 FUN_147a9bf38(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar1 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x88);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x90) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x48);
      do {
        if (*(uint *)(lVar1 + 0x18 + (longlong)iVar3 * 0x28) == param_2) {
          uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
          if (*(int *)(param_1 + 0xa0) == *(int *)(param_1 + 0xcc)) {
            return uVar2;
          }
          lVar1 = param_1 + 0xd0;
          if (*(longlong *)(param_1 + 0xd8) != 0) {
            lVar1 = *(longlong *)(param_1 + 0xd8);
          }
          iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & param_2) * 4);
          if (iVar3 != -1) {
            do {
              bVar4 = *(uint *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 0xc) == param_2;
              uVar2 = CONCAT71((int7)(int3)((uint)iVar3 >> 8),!bVar4);
              if (bVar4) {
                return uVar2;
              }
              iVar3 = *(int *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 0xc + 4);
            } while (iVar3 != -1);
            return uVar2;
          }
          return uVar2;
        }
        iVar3 = *(int *)(lVar1 + (longlong)iVar3 * 0x28 + 0x20);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 147a9c018 FUN_147a9c018 body=329 status=ok
// SIG undefined FUN_147a9c018(void)

void FUN_147a9c018(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x48);
  lVar2 = param_1 + 0x58;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar5 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0x70);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar5) || (local_50 != lVar2)) {
    do {
      lVar6 = (longlong)iStack_64 * 0x28 + *local_80;
      cVar3 = FUN_144729dda(lVar6);
      if (cVar3 != '\0') {
        uVar4 = FUN_14479d2ce(lVar6);
        FUN_147a9a5e2(uVar4,*(undefined4 *)(lVar6 + 0x10),*(undefined4 *)(lVar6 + 0x14));
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (local_70 != lVar2 || iStack_64 != iVar5));
  }
  FUN_147a9c83e(plVar1);
  FUN_147a99dea(param_1 + 0x98);
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a9c162 FUN_147a9c162 body=174 status=ok
// SIG undefined FUN_147a9c162(void)

void FUN_147a9c162(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined1 local_20 [4];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1c = local_24;
  FUN_147aaeb12(param_1 + 0x98,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9c214 FUN_147a9c214 body=139 status=ok
// SIG undefined FUN_147a9c214(void)

longlong FUN_147a9c214(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (**(code **)(*(longlong *)(param_1 + -0x30) + 0x180))(param_1 + -0x30);
  if (DAT_14cb0d2b0 != 0 && lVar4 == 0) {
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) == 0) {
      lVar4 = 0;
    }
    else {
      lVar5 = 0;
      lVar4 = 0;
      do {
        pbVar2 = *(byte **)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar5);
        lVar3 = *(longlong *)(pbVar2 + 0x360);
        if (lVar3 != 0) {
          bVar1 = *pbVar2;
          if ((bVar1 | 2) == 3) {
            return lVar3;
          }
          if (bVar1 == 2) {
            lVar4 = lVar3;
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar5);
    }
  }
  return lVar4;
}



// FUNCTION 147a9c2a4 FUN_147a9c2a4 body=808 status=ok
// SIG undefined FUN_147a9c2a4(void)

void FUN_147a9c2a4(longlong *param_1,float param_2)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_f8 [32];
  float local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  dVar6 = DAT_14c759090;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar9 = (**(code **)(*param_1 + 0x48))();
  if (lVar9 == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = FUN_144ae5576(lVar9);
  }
  plVar1 = param_1 + 3;
  local_98 = param_1 + 5;
  local_a0 = 0x100000000;
  local_90 = 0xffffffff;
  iStack_8c = 0;
  local_88 = 0;
  if ((int)param_1[8] != 0) {
    FUN_1449c0562(&local_a0);
  }
  local_b8 = local_90;
  iStack_b4 = iStack_8c;
  local_b0 = local_88;
  local_ac = local_84;
  local_c8 = local_a0;
  local_c0 = local_98;
  local_d0 = plVar1;
  local_a8 = plVar1;
  if (iStack_8c < (int)local_98[3]) {
    plVar1 = param_1 + 0xd;
    do {
      lVar9 = (longlong)iStack_b4 * 0x28 + *local_d0;
      cVar8 = FUN_144729dda(lVar9);
      if (cVar8 == '\0') {
        FUN_147aae5b8(local_a8,iStack_b4);
LAB_147a9c46e:
        FUN_147a9c5ce(plVar1,lVar9 + 0x18);
      }
      else {
        if ((int)param_1[0xe] != *(int *)((longlong)param_1 + 0x9c)) {
          uVar3 = *(uint *)(lVar9 + 0x18);
          plVar12 = (longlong *)param_1[0x15];
          if ((longlong *)param_1[0x15] == (longlong *)0x0) {
            plVar12 = param_1 + 0x14;
          }
          iVar13 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[0x16] - 1U & uVar3) * 4);
          if (iVar13 != -1) {
            do {
              if (*(uint *)(*plVar1 + (longlong)iVar13 * 0xc) == uVar3) {
                uVar11 = FUN_14479d2ce(lVar9);
                FUN_147a9a5e2(uVar11,*(undefined4 *)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 0x14));
                FUN_147aae5b8(local_a8,iStack_b4);
                goto LAB_147a9c46e;
              }
              iVar13 = *(int *)(*plVar1 + (longlong)iVar13 * 0xc + 4);
            } while (iVar13 != -1);
          }
        }
        bVar2 = *(byte *)(lVar9 + 0x1c);
        if ((bVar7 & (bVar2 & 4) == 0) == 0) {
          dVar5 = (double)param_2;
          if ((bVar2 & 2) != 0) {
            dVar5 = dVar6;
          }
          dVar4 = *(double *)(lVar9 + 8) + dVar5;
          *(double *)(lVar9 + 8) = dVar4;
          if ((((bVar2 & 1) != 0) ||
              (lVar10 = FUN_14479d2ce(lVar9), dVar4 <= (double)*(float *)(lVar10 + 0x28))) ||
             ((*(byte *)(lVar9 + 0x1c) & 8) == 0)) {
            uVar11 = FUN_14479d2ce(lVar9);
            local_d8 = (float)*(double *)(lVar9 + 8);
            FUN_147a9a35e(uVar11,*(undefined4 *)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 0x14),
                          (float)dVar5);
            plVar12 = (longlong *)FUN_14479d2ce(lVar9);
            (**(code **)(*plVar12 + 0x2b0))
                      (plVar12,*(undefined4 *)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 0x14));
            *(byte *)(lVar9 + 0x1c) = *(byte *)(lVar9 + 0x1c) | 8;
          }
          else {
            uVar11 = FUN_14479d2ce(lVar9);
            FUN_147a9a5e2(uVar11,*(undefined4 *)(lVar9 + 0x10),*(undefined4 *)(lVar9 + 0x14));
            FUN_147a9c5ce(plVar1,(uint *)(lVar9 + 0x18));
            FUN_147aae5b8(local_a8,iStack_b4);
          }
        }
      }
      local_b8 = local_b8 & ~local_c8._4_4_;
      FUN_1449c0562(&local_c8);
    } while (iStack_b4 < (int)local_c0[3]);
  }
  FUN_147a99dea(param_1 + 0xd);
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a9c5ce FUN_147a9c5ce body=79 status=ok
// SIG undefined FUN_147a9c5ce(void)

void FUN_147a9c5ce(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)(int)param_1[9] - 1U & (longlong)*param_2) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0xc) == *param_2) {
          FUN_147aae682();
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0xc + 4);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 147a9c61d FUN_147a9c61d body=185 status=ok
// SIG undefined FUN_147a9c61d(void)

undefined8 FUN_147a9c61d(undefined8 param_1,undefined8 param_2)

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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9c6d8 FUN_147a9c6d8 body=356 status=ok
// SIG undefined FUN_147a9c6d8(void)

void FUN_147a9c6d8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
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
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_147aaec26(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_147aae246(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      FUN_147aaeb12(param_1,&local_50,(longlong)iStack_5c * 0xc + *local_78);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9c83e FUN_147a9c83e body=63 status=ok
// SIG undefined FUN_147a9c83e(void)

void FUN_147a9c83e(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a32bd0(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147aae96c(param_1);
    return;
  }
  FUN_147aaedc2(param_1);
  FUN_145a32bd0(param_1);
  return;
}



// FUNCTION 147a9c8e8 FUN_147a9c8e8 body=120 status=ok
// SIG undefined FUN_147a9c8e8(void)

undefined8 FUN_147a9c8e8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x58))();
    lVar2 = (**(code **)(*param_2 + 0x58))(param_2);
    if ((((lVar1 == lVar2) && ((short)param_1[1] == (short)param_2[1])) &&
        (*(char *)((longlong)param_1 + 0x26) == *(char *)((longlong)param_2 + 0x26))) &&
       ((*(char *)((longlong)param_1 + 0x27) == *(char *)((longlong)param_2 + 0x27) &&
        (*(longlong *)((longlong)param_1 + 0xc) == *(longlong *)((longlong)param_2 + 0xc))))) {
      return CONCAT71((int7)((ulonglong)*(longlong *)((longlong)param_1 + 0xc) >> 8),
                      ABS(*(float *)(param_1 + 4) - *(float *)(param_2 + 4)) <= 1e-08);
    }
  }
  return 0;
}



// FUNCTION 147a9c960 FUN_147a9c960 body=59 status=ok
// SIG undefined FUN_147a9c960(void)

byte FUN_147a9c960(longlong *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if ((cVar1 == '\0') || (*(char *)((longlong)param_1 + 0x24) != *(char *)(param_2 + 0x24))) {
    bVar2 = 0;
  }
  else {
    bVar2 = -(*(float *)(param_2 + 0x18) == *(float *)(param_1 + 3)) & 1;
  }
  return bVar2;
}



// FUNCTION 147a9c99c FUN_147a9c99c body=90 status=ok
// SIG undefined FUN_147a9c99c(void)

undefined8 FUN_147a9c99c(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x58))();
    lVar2 = (**(code **)(*param_2 + 0x58))(param_2);
    if (lVar1 == lVar2) {
      *(undefined1 *)(param_1 + 5) = param_3;
      *(byte *)((longlong)param_1 + 0x24) =
           *(byte *)((longlong)param_1 + 0x24) & 4 | *(byte *)((longlong)param_2 + 0x24);
      (**(code **)(*param_1 + 0x38))(param_1,(int)param_2[3]);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147a9ca0c FUN_147a9ca0c body=49 status=ok
// SIG undefined FUN_147a9ca0c(void)

void FUN_147a9ca0c(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 != '\0') {
    *(byte *)((longlong)param_1 + 0x24) =
         (*(float *)(param_1 + 4) <= *(float *)(param_1 + 3)) * '\x02' |
         *(byte *)((longlong)param_1 + 0x24) & 0xfd;
  }
  return;
}



// FUNCTION 147a9ca4a FUN_147a9ca4a body=608 status=ok
// SIG undefined FUN_147a9ca4a(void)

undefined8 FUN_147a9ca4a(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  longlong *plVar6;
  undefined1 auStack_58 [43];
  undefined1 local_2d;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 8),2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 8) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  puVar2 = *(undefined2 **)param_2[1];
  if ((undefined2 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined2 *)(param_1 + 10),2);
    }
    else {
      thunk_FUN_1457251a8(param_2);
    }
  }
  else {
    *(undefined2 *)(param_1 + 10) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 2;
  }
  local_2d = *(undefined1 *)(param_1 + 0x26);
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (undefined1 *)*puVar3 + 1;
  if ((undefined1 *)puVar3[1] < puVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_2d,1);
  }
  else {
    local_2d = *(undefined1 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  *(undefined1 *)(param_1 + 0x26) = local_2d;
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0xc);
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x18),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x20),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x24),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x24) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  piVar5 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar5 + 1) {
    local_2c = (uint)*(byte *)(param_1 + 0x27);
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    plVar6 = (longlong *)(ulonglong)local_2c;
    *(bool *)(param_1 + 0x27) = local_2c != 0;
  }
  else {
    *(bool *)(param_1 + 0x27) = *piVar5 != 0;
    plVar6 = (longlong *)param_2[1];
    *plVar6 = *plVar6 + 4;
  }
  *param_4 = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9ccac FUN_147a9ccac body=55 status=ok
// SIG undefined FUN_147a9ccac(void)

void FUN_147a9ccac(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada7b0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada7b0 = FUN_140002ddd(FUN_1463c98b5,uVar1,L"RootMotionSource");
  }
  return;
}



// FUNCTION 147a9cce4 FUN_147a9cce4 body=133 status=ok
// SIG undefined FUN_147a9cce4(void)

undefined8 FUN_147a9cce4(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14029eeae(param_1 + 0xc,&local_30);
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"[ID:%u] FRootMotionSource %s",*(undefined2 *)(param_1 + 10),puVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a9ce1e FUN_147a9ce1e body=39 status=ok
// SIG undefined FUN_147a9ce1e(void)

void FUN_147a9ce1e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147a9ce46(uVar1,param_1);
  return;
}



// FUNCTION 147a9ce46 FUN_147a9ce46 body=248 status=ok
// SIG undefined FUN_147a9ce46(void)

undefined8 * FUN_147a9ce46(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  *param_1 = &PTR_FUN_14a8de520;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ff00000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0x3ff0000000000000;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0;
  puVar8 = (undefined8 *)(param_2 + 0x40);
  puVar9 = param_1 + 8;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  uVar2 = *(undefined4 *)(param_2 + 0xb8);
  uVar3 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0x17) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar3;
  param_1[0x14] = uVar4;
  param_1[0x15] = uVar5;
  *param_1 = &PTR_FUN_14a8de5d0;
  uVar1 = *(undefined4 *)(param_2 + 0xc4);
  uVar2 = *(undefined4 *)(param_2 + 200);
  uVar3 = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar1;
  *(undefined4 *)(param_1 + 0x19) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar3;
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  lVar7 = *(longlong *)(param_2 + 0xd8);
  param_1[0x1b] = lVar7;
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147a9cf3e FUN_147a9cf3e body=181 status=ok
// SIG undefined FUN_147a9cf3e(void)

undefined8 FUN_147a9cf3e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  
  uVar2 = FUN_147a9c8e8();
  if (((((char)uVar2 == '\0') ||
       (0.10000000149011612 <= ABS(*(double *)(param_1 + 0xc0) - *(double *)(param_2 + 0xc0)))) ||
      (0.10000000149011612 <= ABS(*(double *)(param_1 + 200) - *(double *)(param_2 + 200)))) ||
     (0.10000000149011612 <= ABS(*(double *)(param_1 + 0xd0) - *(double *)(param_2 + 0xd0)))) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0xd8);
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    uVar2 = CONCAT71(uVar3,*(longlong *)(param_1 + 0xd8) == lVar1);
  }
  return uVar2;
}



// FUNCTION 147a9cff4 FUN_147a9cff4 body=59 status=ok
// SIG undefined FUN_147a9cff4(void)

byte FUN_147a9cff4(longlong *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if ((cVar1 == '\0') || (*(char *)((longlong)param_1 + 0x24) != *(char *)(param_2 + 0x24))) {
    bVar2 = 0;
  }
  else {
    bVar2 = -(*(float *)(param_2 + 0x18) == *(float *)(param_1 + 3)) & 1;
  }
  return bVar2;
}



// FUNCTION 147a9d036 FUN_147a9d036 body=340 status=ok
// SIG undefined FUN_147a9d036(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a9d036(longlong *param_1,float param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  dVar2 = (double)param_1[0x18];
  dVar3 = (double)param_1[0x19];
  if (param_1[0x1b] == 0) {
    dVar1 = (double)param_1[0x1a];
  }
  else {
    dVar1 = (double)param_1[0x1a];
    fVar6 = (float)FUN_1449e6cbc();
    dVar7 = (double)fVar6;
    dVar2 = dVar2 * dVar7;
    dVar3 = dVar3 * dVar7;
    dVar1 = dVar1 * dVar7;
  }
  dVar7 = (double)(float)(~-(uint)(1e-08 < param_3) & 0x3f800000 |
                         (uint)(param_2 / param_3) & -(uint)(1e-08 < param_3));
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3ff0000000000000;
  param_1[0xc] = (longlong)(dVar7 * dVar2);
  param_1[0xd] = (longlong)(dVar7 * dVar3);
  param_1[0xe] = (longlong)(dVar7 * dVar1);
  param_1[0xf] = 0;
  lVar5 = DAT_14cacb0f0;
  lVar4 = DAT_14cacb0e8;
  param_1[0x10] = _DAT_14cacb0e0;
  param_1[0x11] = lVar4;
  param_1[0x12] = lVar5;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
                    /* WARNING: Could not recover jumptable at 0x000147a9d17a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))(param_1);
  return;
}



// FUNCTION 147a9d18a FUN_147a9d18a body=71 status=ok
// SIG undefined FUN_147a9d18a(void)

undefined8 FUN_147a9d18a(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  FUN_147a9ca4a();
  FUN_14480c34d(param_2,param_1 + 0xc0);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0xd8);
  *param_4 = 1;
  return 1;
}



// FUNCTION 147a9d1d2 FUN_147a9d1d2 body=55 status=ok
// SIG undefined FUN_147a9d1d2(void)

void FUN_147a9d1d2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada7c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada7c8 = FUN_140002ddd(FUN_1463c994d,uVar1,L"RootMotionSource_ConstantForce");
  }
  return;
}



// FUNCTION 147a9d20a FUN_147a9d20a body=133 status=ok
// SIG undefined FUN_147a9d20a(void)

undefined8 FUN_147a9d20a(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14029eeae(param_1 + 0xc,&local_30);
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"[ID:%u]FRootMotionSource_ConstantForce %s",*(undefined2 *)(param_1 + 10),
                puVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a9d38c FUN_147a9d38c body=39 status=ok
// SIG undefined FUN_147a9d38c(void)

void FUN_147a9d38c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_147a9d3b4(uVar1,param_1);
  return;
}



// FUNCTION 147a9d3b4 FUN_147a9d3b4 body=400 status=ok
// SIG undefined FUN_147a9d3b4(void)

undefined8 * FUN_147a9d3b4(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  *param_1 = &PTR_FUN_14a8de520;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ff00000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0x3ff0000000000000;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0;
  puVar9 = (undefined8 *)(param_2 + 0x40);
  puVar10 = param_1 + 8;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  uVar5 = *(undefined8 *)(param_2 + 0xa8);
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  uVar2 = *(undefined4 *)(param_2 + 0xb8);
  uVar3 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0x17) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar3;
  param_1[0x14] = uVar4;
  param_1[0x15] = uVar5;
  *param_1 = &PTR_FUN_14a8de6a0;
  uVar1 = *(undefined4 *)(param_2 + 0xc4);
  uVar2 = *(undefined4 *)(param_2 + 200);
  uVar3 = *(undefined4 *)(param_2 + 0xcc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar1;
  *(undefined4 *)(param_1 + 0x19) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar3;
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  lVar8 = *(longlong *)(param_2 + 0xd8);
  param_1[0x1b] = lVar8;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar7 = DAT_14c950c29;
  *(undefined2 *)(param_1 + 0x1d) = *(undefined2 *)(param_2 + 0xe8);
  param_1[0x1c] = *(undefined8 *)(param_2 + 0xe0);
  lVar8 = *(longlong *)(param_2 + 0xf0);
  param_1[0x1e] = lVar8;
  if ((lVar8 != 0 & bVar7) == 1) {
    FUN_1456cec3c();
    bVar7 = DAT_14c950c29;
  }
  lVar8 = *(longlong *)(param_2 + 0xf8);
  param_1[0x1f] = lVar8;
  if ((lVar8 != 0 & bVar7) == 1) {
    FUN_1456cec3c();
  }
  uVar4 = *(undefined8 *)(param_2 + 0x100);
  uVar5 = *(undefined8 *)(param_2 + 0x108);
  uVar6 = *(undefined8 *)(param_2 + 0x118);
  param_1[0x22] = *(undefined8 *)(param_2 + 0x110);
  param_1[0x23] = uVar6;
  param_1[0x20] = uVar4;
  param_1[0x21] = uVar5;
  return param_1;
}



// FUNCTION 147a9d544 FUN_147a9d544 body=440 status=ok
// SIG undefined FUN_147a9d544(void)

undefined8 FUN_147a9d544(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_147a9c8e8();
  if ((((cVar2 != '\0') && (*(char *)(param_1 + 0xe8) == *(char *)(param_2 + 0xe8))) &&
      (*(char *)(param_1 + 0xe9) == *(char *)(param_2 + 0xe9))) &&
     (*(char *)(param_1 + 0x100) == *(char *)(param_2 + 0x100))) {
    lVar1 = *(longlong *)(param_2 + 0xf0);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    if (*(longlong *)(param_1 + 0xf0) == lVar1) {
      lVar1 = *(longlong *)(param_2 + 0xf8);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
      }
      if (*(longlong *)(param_1 + 0xf8) == lVar1) {
        lVar1 = *(longlong *)(param_2 + 0xd8);
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar1);
        }
        if (((*(longlong *)(param_1 + 0xd8) == lVar1) ||
            (((ABS(*(double *)(param_1 + 0xc0) - *(double *)(param_2 + 0xc0)) < 1.0 &&
              (ABS(*(double *)(param_1 + 200) - *(double *)(param_2 + 200)) < 1.0)) &&
             (ABS(*(double *)(param_1 + 0xd0) - *(double *)(param_2 + 0xd0)) < 1.0)))) &&
           ((ABS(*(float *)(param_1 + 0xe0) - *(float *)(param_2 + 0xe0)) <= 1e-08 &&
            (ABS(*(float *)(param_1 + 0xe4) - *(float *)(param_2 + 0xe4)) <= 1e-08)))) {
          uVar3 = FUN_146232d50(param_1 + 0x108,param_2 + 0x108,0x4008000000000000);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 147a9d6fc FUN_147a9d6fc body=59 status=ok
// SIG undefined FUN_147a9d6fc(void)

byte FUN_147a9d6fc(longlong *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if ((cVar1 == '\0') || (*(char *)((longlong)param_1 + 0x24) != *(char *)(param_2 + 0x24))) {
    bVar2 = 0;
  }
  else {
    bVar2 = -(*(float *)(param_2 + 0x18) == *(float *)(param_1 + 3)) & 1;
  }
  return bVar2;
}



// FUNCTION 147a9d73e FUN_147a9d73e body=1109 status=ok
// SIG undefined FUN_147a9d73e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a9d73e(longlong *param_1,float param_2,float param_3,longlong param_4)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  double *pdVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  lVar2 = *(longlong *)(param_4 + 0x1c8);
  uVar16 = SUB84(DAT_14c8464f0,0);
  uVar17 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  if (lVar2 == 0) {
    pdVar11 = &DAT_14c8464e0;
    uVar19 = uVar16;
    uVar20 = uVar17;
  }
  else {
    pdVar11 = (double *)(lVar2 + 0x260);
    uVar19 = (int)*(undefined8 *)(lVar2 + 0x270);
    uVar20 = (int)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
  }
  dVar15 = *pdVar11;
  dVar9 = pdVar11[1];
  if (param_1[0x1b] == 0) {
    pdVar11 = (double *)(param_1 + 0x18);
    uVar16 = (undefined4)param_1[0x1a];
    uVar17 = (undefined4)((ulonglong)param_1[0x1a] >> 0x20);
  }
  else {
    lVar2 = *(longlong *)(param_1[0x1b] + 0x1c8);
    if (lVar2 == 0) {
      pdVar11 = &DAT_14c8464e0;
    }
    else {
      uVar16 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
      uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
      pdVar11 = (double *)(lVar2 + 0x260);
    }
  }
  dVar7 = *pdVar11;
  dVar3 = dVar15 - dVar7;
  dVar1 = pdVar11[1];
  dVar18 = dVar9 - dVar1;
  dVar4 = (double)CONCAT44(uVar20,uVar19) - (double)CONCAT44(uVar17,uVar16);
  dVar8 = DAT_14c8464e8;
  dVar6 = DAT_14c8464e0;
  dVar14 = DAT_14c8464f0;
  if ((float)SQRT(dVar4 * dVar4 + dVar18 * dVar18 + dVar3 * dVar3) < *(float *)(param_1 + 0x1c)) {
    if (param_1[0x1e] == 0) {
      fVar12 = 1.0;
    }
    else {
      fVar12 = (float)FUN_1449e6cbc();
      fVar12 = fVar12 + -1.0 + 1.0;
    }
    if (param_1[0x1f] != 0) {
      fVar13 = (float)FUN_1449e6cbc();
      fVar12 = fVar12 + fVar13 + -1.0;
    }
    if (1.0 <= fVar12) {
      fVar12 = 1.0;
    }
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    fVar12 = fVar12 * *(float *)((longlong)param_1 + 0xe4);
    if ((char)param_1[0x20] == '\x01') {
      FUN_144a76660(param_1 + 0x21,&local_d8);
      dVar15 = (double)fVar12;
      dVar8 = local_d0 * dVar15;
      dVar6 = dVar15 * local_d8;
      dVar14 = local_c8 * dVar15;
    }
    else {
      dVar3 = (double)CONCAT44(uVar17,uVar16) - (double)CONCAT44(uVar20,uVar19);
      dVar1 = dVar1 - dVar9;
      dVar7 = dVar7 - dVar15;
      dVar15 = dVar3 * dVar3 + dVar7 * dVar7 + dVar1 * dVar1;
      if (((dVar15 != 1.0) || (dVar9 = dVar3, dVar4 = dVar1, dVar18 = dVar7, NAN(dVar15))) &&
         (dVar9 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar18 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar15)) {
        dVar15 = 1.0 / SQRT(dVar15);
        dVar9 = dVar3 * dVar15;
        dVar4 = dVar1 * dVar15;
        dVar18 = dVar7 * dVar15;
      }
      dVar15 = (double)fVar12;
      dVar8 = dVar4 * dVar15;
      dVar6 = dVar18 * dVar15;
      dVar14 = dVar9 * dVar15;
      if ((char)param_1[0x1d] == '\x01') {
        dVar8 = -(dVar4 * dVar15);
        dVar6 = -(dVar18 * dVar15);
        dVar14 = -(dVar9 * dVar15);
      }
    }
  }
  uVar16 = 0;
  uVar17 = 0;
  if (*(char *)((longlong)param_1 + 0xe9) == '\0') {
    uVar16 = SUB84(dVar14,0);
    uVar17 = (undefined4)((ulonglong)dVar14 >> 0x20);
  }
  dVar15 = (double)CONCAT44(uVar17,uVar16);
  if (((param_2 != param_3) || (NAN(param_2) || NAN(param_3))) && (1e-08 < param_3)) {
    dVar15 = (double)(param_2 / param_3);
    dVar6 = dVar6 * dVar15;
    dVar8 = dVar8 * dVar15;
    dVar15 = (double)CONCAT44(uVar17,uVar16) * dVar15;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ff00000;
  auVar5._8_4_ = SUB84(dVar8,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar5;
  param_1[0xe] = (longlong)dVar15;
  param_1[0xf] = 0;
  lVar10 = DAT_14cacb0f0;
  lVar2 = DAT_14cacb0e8;
  param_1[0x10] = _DAT_14cacb0e0;
  param_1[0x11] = lVar2;
  param_1[0x12] = lVar10;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  (**(code **)(*param_1 + 0x38))(param_1,param_2 + *(float *)(param_1 + 3));
  if ((local_c0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9db94 FUN_147a9db94 body=656 status=ok
// SIG undefined FUN_147a9db94(void)

undefined8 FUN_147a9db94(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147a9ca4a();
  FUN_14480c34d(param_2,param_1 + 0xc0);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0xd8);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xe0),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe0) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xe4),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_2c = (uint)*(byte *)(param_1 + 0xe8);
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0xe8) = local_2c != 0;
  }
  else {
    *(bool *)(param_1 + 0xe8) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_2c = (uint)*(byte *)(param_1 + 0xe9);
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0xe9) = local_2c != 0;
  }
  else {
    *(bool *)(param_1 + 0xe9) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0xf0);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0xf8);
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_2c = (uint)*(byte *)(param_1 + 0x100);
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x100) = local_2c != 0;
  }
  else {
    *(bool *)(param_1 + 0x100) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1401fb57a(param_2,param_1 + 0x108);
  *param_4 = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9de26 FUN_147a9de26 body=55 status=ok
// SIG undefined FUN_147a9de26(void)

void FUN_147a9de26(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada7e0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada7e0 = FUN_140002ddd(FUN_1463c99e3,uVar1,L"RootMotionSource_RadialForce");
  }
  return;
}



// FUNCTION 147a9de5e FUN_147a9de5e body=133 status=ok
// SIG undefined FUN_147a9de5e(void)

undefined8 FUN_147a9de5e(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14029eeae(param_1 + 0xc,&local_30);
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"[ID:%u]FRootMotionSource_RadialForce %s",*(undefined2 *)(param_1 + 10),
                puVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a9dee4 FUN_147a9dee4 body=100 status=ok
// SIG undefined FUN_147a9dee4(void)

void FUN_147a9dee4(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xd8,0,0);
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xf0,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147a9df45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0xf8,0,0);
  return;
}



// FUNCTION 147a9e008 FUN_147a9e008 body=39 status=ok
// SIG undefined FUN_147a9e008(void)

void FUN_147a9e008(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147a9e030(uVar1,param_1);
  return;
}



// FUNCTION 147a9e030 FUN_147a9e030 body=274 status=ok
// SIG undefined FUN_147a9e030(void)

undefined8 * FUN_147a9e030(undefined8 *param_1,longlong param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  *param_1 = &PTR_FUN_14a8de520;
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  uVar14 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar12;
  param_1[3] = uVar13;
  param_1[4] = uVar14;
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ff00000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0x3ff0000000000000;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0;
  puVar16 = (undefined8 *)(param_2 + 0x40);
  puVar17 = param_1 + 8;
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  uVar12 = *(undefined8 *)(param_2 + 0xa0);
  uVar13 = *(undefined8 *)(param_2 + 0xa8);
  uVar14 = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x16] = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x17] = uVar14;
  param_1[0x14] = uVar12;
  param_1[0x15] = uVar13;
  *param_1 = &PTR_FUN_14a8de760;
  uVar1 = *(undefined4 *)(param_2 + 0xc4);
  uVar2 = *(undefined4 *)(param_2 + 200);
  uVar3 = *(undefined4 *)(param_2 + 0xcc);
  uVar4 = *(undefined4 *)(param_2 + 0xd0);
  uVar5 = *(undefined4 *)(param_2 + 0xd4);
  uVar6 = *(undefined4 *)(param_2 + 0xd8);
  uVar7 = *(undefined4 *)(param_2 + 0xdc);
  uVar8 = *(undefined4 *)(param_2 + 0xe0);
  uVar9 = *(undefined4 *)(param_2 + 0xe4);
  uVar10 = *(undefined4 *)(param_2 + 0xe8);
  uVar11 = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar1;
  *(undefined4 *)(param_1 + 0x19) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar3;
  *(undefined4 *)(param_1 + 0x1a) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar5;
  *(undefined4 *)(param_1 + 0x1b) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar7;
  *(undefined4 *)(param_1 + 0x1c) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar9;
  *(undefined4 *)(param_1 + 0x1d) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar11;
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_2 + 0xf0);
  lVar15 = *(longlong *)(param_2 + 0xf8);
  param_1[0x1f] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147a9e142 FUN_147a9e142 body=196 status=ok
// SIG undefined FUN_147a9e142(void)

undefined8 FUN_147a9e142(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  
  uVar2 = FUN_147a9c8e8();
  if (((char)uVar2 != '\0') &&
     (uVar3 = (undefined7)((ulonglong)uVar2 >> 8),
     *(char *)(param_1 + 0xf0) == *(char *)(param_2 + 0xf0))) {
    lVar1 = *(longlong *)(param_2 + 0xf8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    if (((*(longlong *)(param_1 + 0xf8) == lVar1) &&
        (ABS(*(double *)(param_1 + 0xd8) - *(double *)(param_2 + 0xd8)) < 0.10000000149011612)) &&
       (ABS(*(double *)(param_1 + 0xe0) - *(double *)(param_2 + 0xe0)) < 0.10000000149011612)) {
      return CONCAT71(uVar3,ABS(*(double *)(param_1 + 0xe8) - *(double *)(param_2 + 0xe8)) <
                            0.10000000149011612);
    }
  }
  return 0;
}



// FUNCTION 147a9e206 FUN_147a9e206 body=59 status=ok
// SIG undefined FUN_147a9e206(void)

byte FUN_147a9e206(longlong *param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  if ((cVar1 == '\0') || (*(char *)((longlong)param_1 + 0x24) != *(char *)(param_2 + 0x24))) {
    bVar2 = 0;
  }
  else {
    bVar2 = -(*(float *)(param_2 + 0x18) == *(float *)(param_1 + 3)) & 1;
  }
  return bVar2;
}



// FUNCTION 147a9e25e FUN_147a9e25e body=318 status=ok
// SIG undefined FUN_147a9e25e(void)

undefined4 * FUN_147a9e25e(longlong param_1,undefined4 *param_2,float param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70 [3];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    local_70[0] = local_70[0] & 0xffffffff00000000;
    local_88 = (double)CONCAT44(local_88._4_4_,0x3f800000);
    FUN_1457437e2(lVar1,local_70,&local_88);
    FUN_147a3f90a(lVar1,local_58,
                  param_3 * (local_88._0_4_ - (float)local_70[0]) + (float)local_70[0]);
    local_78 = *(double *)(param_1 + 0xe8) - *(double *)(param_1 + 0xd0);
    local_80 = *(double *)(param_1 + 0xe0) - *(double *)(param_1 + 200);
    local_88 = *(double *)(param_1 + 0xd8) - *(double *)(param_1 + 0xc0);
    FUN_144a79a9c(&local_88,local_70);
    local_70[0] = 0;
    FUN_1401c9a0e(local_70,param_2,local_58);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a9e39e FUN_147a9e39e body=1083 status=ok
// SIG undefined FUN_147a9e39e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147a9e39e(longlong *param_1,float param_2,float param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  double *pdVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_108 [32];
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  if ((1e-08 < param_3) && (1e-08 < *(float *)(param_1 + 4))) {
    dVar13 = (double)param_1[0x1d];
    dVar1 = (double)param_1[0x1a];
    dVar2 = (double)param_1[0x1c];
    dVar3 = (double)param_1[0x18];
    dVar4 = (double)param_1[0x19];
    dVar5 = (double)param_1[0x1b];
    dVar15 = (double)((*(float *)(param_1 + 3) + param_2) / *(float *)(param_1 + 4));
    FUN_147a9e25e(param_1,&local_d8);
    dVar3 = (dVar5 - dVar3) * dVar15 + dVar3 + local_d8;
    dVar2 = (dVar2 - dVar4) * dVar15 + dVar4 + local_d0;
    dVar13 = (dVar13 - dVar1) * dVar15 + dVar1 + local_c8;
    lVar8 = *(longlong *)(param_4 + 0x1c8);
    if (lVar8 == 0) {
      pdVar11 = (double *)&DAT_14c8464e0;
      dVar1 = DAT_14c8464f0;
    }
    else {
      pdVar11 = (double *)(lVar8 + 0x260);
      dVar1 = *(double *)(lVar8 + 0x270);
    }
    dVar15 = 1.0 / (double)param_3;
    dVar4 = (dVar13 - dVar1) * dVar15;
    dVar5 = (dVar2 - pdVar11[1]) * dVar15;
    dVar1 = (dVar3 - *pdVar11) * dVar15;
    if (((char)param_1[0x1e] == '\x01') &&
       (((9.999999747378752e-05 < ABS(dVar1) || (9.999999747378752e-05 < ABS(dVar5))) ||
        (9.999999747378752e-05 < ABS(dVar4))))) {
      dVar6 = (double)param_1[0x1b];
      dVar7 = (double)param_1[0x18];
      dVar16 = (double)(*(float *)(param_1 + 3) / *(float *)(param_1 + 4));
      local_e8 = ((double)param_1[0x1d] - (double)param_1[0x1a]) * dVar16 + (double)param_1[0x1a];
      local_e0 = ((double)param_1[0x1c] - (double)param_1[0x19]) * dVar16 + (double)param_1[0x19];
      FUN_147a9e25e(param_1,&local_d8);
      dVar13 = (dVar13 - (local_e8 + local_c8)) * dVar15;
      dVar2 = (dVar2 - (local_e0 + local_d0)) * dVar15;
      dVar15 = (dVar3 - ((dVar6 - dVar7) * dVar16 + dVar7 + local_d8)) * dVar15;
      fVar12 = (float)SQRT(dVar13 * dVar13 + dVar15 * dVar15 + dVar2 * dVar2);
      dVar13 = dVar4 * dVar4 + dVar1 * dVar1 + dVar5 * dVar5;
      fVar14 = fVar12 + 0.5;
      if (fVar14 * fVar14 < (float)dVar13) {
        if (9.99999993922529e-09 < dVar13) {
          dVar13 = 1.0 / SQRT(dVar13);
          dVar1 = dVar1 * dVar13;
          dVar5 = dVar5 * dVar13;
          dVar4 = dVar4 * dVar13;
        }
        dVar13 = (double)fVar12;
        dVar1 = dVar1 * dVar13;
        dVar5 = dVar5 * dVar13;
        dVar4 = dVar4 * dVar13;
      }
    }
    *(undefined1 *)(param_1 + 6) = 1;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ff00000;
    auVar9._8_4_ = SUB84(dVar5,0);
    auVar9._0_8_ = dVar1;
    auVar9._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0xc) = auVar9;
    param_1[0xe] = (longlong)dVar4;
    param_1[0xf] = 0;
    lVar10 = DAT_14cacb0f0;
    lVar8 = DAT_14cacb0e8;
    param_1[0x10] = _DAT_14cacb0e0;
    param_1[0x11] = lVar8;
    param_1[0x12] = lVar10;
    param_1[0x13] = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f800000;
  }
  (**(code **)(*param_1 + 0x38))(param_1,param_2 + *(float *)(param_1 + 3));
  if ((local_c0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9e7da FUN_147a9e7da body=231 status=ok
// SIG undefined FUN_147a9e7da(void)

undefined8 FUN_147a9e7da(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147a9ca4a();
  FUN_14480c34d(param_2,param_1 + 0xc0);
  FUN_14480c34d(param_2,param_1 + 0xd8);
  piVar1 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar1 + 1) {
    local_2c = (uint)*(byte *)(param_1 + 0xf0);
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0xf0) = local_2c != 0;
  }
  else {
    *(bool *)(param_1 + 0xf0) = *piVar1 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0xf8);
  *param_4 = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a9e8c2 FUN_147a9e8c2 body=55 status=ok
// SIG undefined FUN_147a9e8c2(void)

void FUN_147a9e8c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cada7f8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cada7f8 = FUN_140002ddd(FUN_1463c9a79,uVar1,L"RootMotionSource_MoveToForce");
  }
  return;
}



// FUNCTION 147a9e8fa FUN_147a9e8fa body=133 status=ok
// SIG undefined FUN_147a9e8fa(void)

undefined8 FUN_147a9e8fa(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14029eeae(param_1 + 0xc,&local_30);
  puVar1 = local_30;
  if (local_28 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"[ID:%u]FRootMotionSource_MoveToForce %s",*(undefined2 *)(param_1 + 10),
                puVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a9ea6c FUN_147a9ea6c body=39 status=ok
// SIG undefined FUN_147a9ea6c(void)

void FUN_147a9ea6c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_147a9ea94(uVar1,param_1);
  return;
}



// FUNCTION 147a9ea94 FUN_147a9ea94 body=302 status=ok
// SIG undefined FUN_147a9ea94(void)

undefined8 * FUN_147a9ea94(undefined8 *param_1,longlong param_2)

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
  byte bVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  *param_1 = &PTR_FUN_14a8de520;
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar10 = *(undefined8 *)(param_2 + 0x20);
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  param_1[4] = uVar10;
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ff00000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3ff0000000000000;
  param_1[0x11] = 0x3ff0000000000000;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0;
  puVar13 = (undefined8 *)(param_2 + 0x40);
  puVar14 = param_1 + 8;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  uVar1 = *(undefined4 *)(param_2 + 0xa0);
  uVar2 = *(undefined4 *)(param_2 + 0xa4);
  uVar3 = *(undefined4 *)(param_2 + 0xa8);
  uVar4 = *(undefined4 *)(param_2 + 0xac);
  uVar5 = *(undefined4 *)(param_2 + 0xb4);
  uVar6 = *(undefined4 *)(param_2 + 0xb8);
  uVar7 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar5;
  *(undefined4 *)(param_1 + 0x17) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar7;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar2;
  *(undefined4 *)(param_1 + 0x15) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar4;
  *param_1 = &PTR_FUN_14a8de820;
  puVar13 = (undefined8 *)(param_2 + 0xc0);
  puVar14 = param_1 + 0x18;
  for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x108);
  lVar12 = *(longlong *)(param_2 + 0x110);
  param_1[0x22] = lVar12;
  if ((lVar12 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar11 = DAT_14c950c29;
  lVar12 = *(longlong *)(param_2 + 0x118);
  param_1[0x23] = lVar12;
  if ((lVar12 != 0 & bVar11) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 147a9ebc2 FUN_147a9ebc2 body=133 status=ok
// SIG undefined FUN_147a9ebc2(void)

undefined8 FUN_147a9ebc2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  
  uVar2 = FUN_147a9c8e8();
  if (((char)uVar2 != '\0') &&
     (uVar3 = (undefined7)((ulonglong)uVar2 >> 8),
     *(char *)(param_1 + 0x108) == *(char *)(param_2 + 0x108))) {
    lVar1 = *(longlong *)(param_2 + 0x110);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    if (*(longlong *)(param_1 + 0x110) == lVar1) {
      lVar1 = *(longlong *)(param_2 + 0x118);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
        uVar3 = extraout_var_00;
      }
      return CONCAT71(uVar3,*(longlong *)(param_1 + 0x118) == lVar1);
    }
  }
  return 0;
}


