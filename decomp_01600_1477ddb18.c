// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1477ddb18 FUN_1477ddb18 body=109 status=ok
// SIG undefined FUN_1477ddb18(void)

undefined8 * FUN_1477ddb18(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *(undefined8 *)(*param_2 + 0x518);
  FUN_1477ddb86(*param_2,param_1 + 1);
  param_1[3] = *param_2;
  lVar3 = param_2[1];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
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
  }
  return param_1;
}



// FUNCTION 1477ddb86 FUN_1477ddb86 body=315 status=ok
// SIG undefined FUN_1477ddb86(void)

undefined8 * FUN_1477ddb86(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(longlong *)(param_1 + 0x528) != 0) goto LAB_1477ddb9f;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a57c8a0;
  plVar4[2] = 0;
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x528) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x530);
    if (plVar5 == (longlong *)0x0) goto LAB_1477ddb9f;
    *(undefined8 *)(param_1 + 0x530) = 0;
LAB_1477ddc2c:
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
    if (plVar4 == (longlong *)0x0) goto LAB_1477ddb9f;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x528) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x530);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x530) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1477ddc2c;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1477ddb9f:
  *param_2 = *(undefined8 *)(param_1 + 0x528);
  lVar3 = *(longlong *)(param_1 + 0x530);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1477ddcc2 FUN_1477ddcc2 body=83 status=ok
// SIG undefined FUN_1477ddcc2(void)

ulonglong FUN_1477ddcc2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1477ddd0a:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1477ddd0a;
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
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),*(longlong *)(param_1 + 8) != 0);
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



// FUNCTION 1477ddd16 FUN_1477ddd16 body=99 status=ok
// SIG undefined FUN_1477ddd16(void)

ulonglong FUN_1477ddd16(longlong param_1)

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
LAB_1477ddd6a:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1477ddd6a;
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
      uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),
                       *(int *)(*(longlong *)(param_1 + 0x18) + 0x558) != 0);
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



// FUNCTION 1477ddd7a FUN_1477ddd7a body=106 status=ok
// SIG undefined FUN_1477ddd7a(void)

undefined8 FUN_1477ddd7a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  uVar7 = 0;
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
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
    uVar7 = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar7 = FUN_1477ddde4();
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
  return uVar7;
}



// FUNCTION 1477ddde4 FUN_1477ddde4 body=153 status=ok
// SIG undefined FUN_1477ddde4(void)

float FUN_1477ddde4(longlong param_1,char *param_2,float param_3)

{
  double dVar1;
  float fVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  fVar2 = 0.0;
  if (*param_2 != '\x13') {
    dVar1 = (double)FUN_1478b17c8(param_1 + 0x38);
    if (ABS(*(double *)(param_1 + 0x60)) <= 1e-08) {
      fVar2 = -1.0;
    }
    else {
      fVar2 = (float)((dVar1 * (double)param_3) / *(double *)(param_1 + 0x60));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return fVar2;
}



// FUNCTION 1477dde7e FUN_1477dde7e body=106 status=ok
// SIG undefined FUN_1477dde7e(void)

undefined8 FUN_1477dde7e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  uVar7 = 0;
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
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
    uVar7 = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar7 = FUN_1477ddee8();
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
  return uVar7;
}



// FUNCTION 1477ddee8 FUN_1477ddee8 body=210 status=ok
// SIG undefined FUN_1477ddee8(void)

float FUN_1477ddee8(longlong param_1,byte *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar2 = *(float *)(param_1 + 0x7c + (ulonglong)*param_2 * 4);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    fVar1 = *(float *)(param_1 + 0xc4 + (ulonglong)*param_2 * 4);
    QueryPerformanceCounter(&local_48);
    fVar2 = fVar2 + fVar1 * ((float)(ulonglong)(local_48.QuadPart - *(longlong *)(param_1 + 0x110))
                            / (float)*(ulonglong *)(param_1 + 0x118));
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ddfbc FUN_1477ddfbc body=314 status=ok
// SIG undefined FUN_1477ddfbc(void)

undefined8 * FUN_1477ddfbc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
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
  int iVar16;
  int iVar17;
  bool bVar18;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1477de03e:
    param_2[5] = 0x40e5888000000000;
    *param_2 = 0x40b5888000000000;
    param_2[2] = 0x3fc0000000000000;
    param_2[1] = 0x405f400000000000;
    param_2[3] = 0x407e000000000000;
    param_2[4] = 0x404e000000000000;
  }
  else {
    iVar17 = (int)plVar3[1];
    do {
      if (iVar17 == 0) goto LAB_1477de03e;
      LOCK();
      iVar16 = (int)plVar3[1];
      bVar18 = iVar17 == iVar16;
      if (bVar18) {
        *(int *)(plVar3 + 1) = iVar17 + 1;
        iVar16 = iVar17;
      }
      iVar17 = iVar16;
      UNLOCK();
    } while (!bVar18);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 == 0) {
      param_2[5] = 0x40e5888000000000;
      *param_2 = 0x40b5888000000000;
      param_2[2] = 0x3fc0000000000000;
      param_2[1] = 0x405f400000000000;
      param_2[3] = 0x407e000000000000;
      param_2[4] = 0x404e000000000000;
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x10));
      uVar5 = *(undefined4 *)(lVar4 + 0x38);
      uVar6 = *(undefined4 *)(lVar4 + 0x3c);
      uVar7 = *(undefined4 *)(lVar4 + 0x40);
      uVar8 = *(undefined4 *)(lVar4 + 0x44);
      uVar9 = *(undefined4 *)(lVar4 + 0x48);
      uVar10 = *(undefined4 *)(lVar4 + 0x4c);
      uVar11 = *(undefined4 *)(lVar4 + 0x50);
      uVar12 = *(undefined4 *)(lVar4 + 0x54);
      uVar13 = *(undefined4 *)(lVar4 + 0x5c);
      uVar14 = *(undefined4 *)(lVar4 + 0x60);
      uVar15 = *(undefined4 *)(lVar4 + 100);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar4 + 0x58);
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar13;
      *(undefined4 *)(param_2 + 5) = uVar14;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uVar15;
      *(undefined4 *)(param_2 + 2) = uVar9;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar10;
      *(undefined4 *)(param_2 + 3) = uVar11;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar12;
      *(undefined4 *)param_2 = uVar5;
      *(undefined4 *)((longlong)param_2 + 4) = uVar6;
      *(undefined4 *)(param_2 + 1) = uVar7;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x10));
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
  return param_2;
}



// FUNCTION 1477de0f6 FUN_1477de0f6 body=135 status=ok
// SIG undefined FUN_1477de0f6(void)

undefined8 * FUN_1477de0f6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1477de162:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar9 = (int)plVar3[1];
    do {
      if (iVar9 == 0) goto LAB_1477de162;
      LOCK();
      iVar8 = (int)plVar3[1];
      bVar10 = iVar9 == iVar8;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar9 + 1;
        iVar8 = iVar9;
      }
      iVar9 = iVar8;
      UNLOCK();
    } while (!bVar10);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x10));
      uVar5 = *(undefined4 *)(lVar4 + 0x6c);
      uVar6 = *(undefined4 *)(lVar4 + 0x70);
      uVar7 = *(undefined4 *)(lVar4 + 0x74);
      *(undefined4 *)param_2 = *(undefined4 *)(lVar4 + 0x68);
      *(undefined4 *)((longlong)param_2 + 4) = uVar5;
      *(undefined4 *)(param_2 + 1) = uVar6;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x10));
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
  return param_2;
}



// FUNCTION 1477de17e FUN_1477de17e body=127 status=ok
// SIG undefined FUN_1477de17e(void)

undefined4 FUN_1477de17e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 uVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  uVar8 = 0;
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return 0;
      }
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
    if (lVar4 == 0) {
      uVar8 = 0;
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x10));
      uVar8 = *(undefined4 *)(lVar4 + 0x78);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x10));
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
  return uVar8;
}



// FUNCTION 1477de1fe FUN_1477de1fe body=181 status=ok
// SIG undefined FUN_1477de1fe(void)

void FUN_1477de1fe(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  lVar8 = *param_2;
  lVar9 = param_2[2];
  param_2[2] = 0;
  if (lVar8 != 0) {
    *param_2 = 0;
  }
  *puVar6 = &PTR_FUN_14a57c870;
  puVar6[2] = lVar8;
  puVar6[4] = lVar9;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar8 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar9 = param_2[6];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar5 = param_2[7];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(puVar6 + 6) = (int)param_2[4];
  *(undefined4 *)((longlong)puVar6 + 0x34) = uVar1;
  *(int *)(puVar6 + 7) = (int)lVar8;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar2;
  *(int *)(puVar6 + 8) = (int)lVar9;
  *(undefined4 *)((longlong)puVar6 + 0x44) = uVar3;
  *(int *)(puVar6 + 9) = (int)lVar5;
  *(undefined4 *)((longlong)puVar6 + 0x4c) = uVar4;
  plVar7 = (longlong *)FUN_14001cc68(0x10,8);
  plVar7[1] = (longlong)puVar6;
  lVar8 = *param_1;
  do {
    *plVar7 = lVar8;
    LOCK();
    lVar9 = *param_1;
    bVar10 = lVar8 == lVar9;
    if (bVar10) {
      *param_1 = (longlong)plVar7;
      lVar9 = lVar8;
    }
    UNLOCK();
    lVar8 = lVar9;
  } while (!bVar10);
  if (*param_2 == 0) {
    return;
  }
  plVar7 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar7 = (longlong *)param_2[2];
  }
                    /* WARNING: Could not recover jumptable at 0x0001477de2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x10))(plVar7);
  return;
}



// FUNCTION 1477de2b4 FUN_1477de2b4 body=368 status=ok
// SIG undefined FUN_1477de2b4(void)

undefined8 *
FUN_1477de2b4(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  
  *param_1 = &PTR_FUN_14a577068;
  param_1[1] = &PTR_FUN_14a577080;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[0xc] = 0x40e5888000000000;
  param_1[7] = 0x40b5888000000000;
  param_1[9] = 0x3fc0000000000000;
  param_1[8] = 0x405f400000000000;
  param_1[10] = 0x407e000000000000;
  param_1[0xb] = 0x404e000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  memset((void *)((longlong)param_1 + 0x7c),0,0x90);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  FUN_1477de424(param_1 + 0x24,param_3,*param_2);
  param_1[0xa2] = param_4;
  param_1[0xa3] = *param_2;
  *(undefined4 *)(param_1 + 0xa4) = 0x42200000;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  *(undefined1 *)((longlong)param_1 + 0x55c) = *(undefined1 *)(param_3 + 0x18);
  *(undefined4 *)(param_1 + 0xac) = 0;
  fVar1 = DAT_14c761118;
  if ((param_4 != 0) && (*(longlong *)(param_4 + 0x28) != 0)) {
    fVar1 = (float)*(int *)(*(longlong *)(param_4 + 0x28) + 0x74);
  }
  FUN_1478b176c(param_1 + 0x2b,(double)fVar1);
  FUN_14335f1e0(param_1 + 0x24);
  FUN_1477de56e(param_1);
  return param_1;
}



// FUNCTION 1477de424 FUN_1477de424 body=329 status=ok
// SIG undefined FUN_1477de424(void)

undefined8 * FUN_1477de424(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1478b1418(param_1 + 4);
  param_1[0xc] = 0x40e5888000000000;
  param_1[7] = 0x40b5888000000000;
  param_1[9] = 0x3fc0000000000000;
  param_1[8] = 0x405f400000000000;
  param_1[10] = 0x407e000000000000;
  param_1[0xb] = 0x404e000000000000;
  memset(param_1 + 0xd,0,0x370);
  param_1[0x7b] = 0xffffffff;
  param_1[0x7c] = 0;
  param_1[0x7d] = param_3;
  uVar3 = param_1[8];
  uVar4 = param_1[9];
  uVar5 = param_1[10];
  uVar6 = param_1[0xb];
  local_48 = param_1[0xc];
  lVar7 = 0x67;
  do {
    dVar2 = (double)(param_1 + lVar7)[1] + 0.0;
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = (double)param_1[lVar7] + 0.0;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + lVar7) = auVar1;
    lVar7 = lVar7 + 2;
  } while (lVar7 != 0x79);
  param_1[7] = 0x40b5888000000000;
  param_1[0xc] = local_48;
  local_68._0_4_ = (undefined4)uVar3;
  local_68._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_60._0_4_ = (undefined4)uVar4;
  uStack_60._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_58._0_4_ = (undefined4)uVar5;
  local_58._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar6;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  *(undefined4 *)(param_1 + 10) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x54) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0xb) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_50._4_4_;
  *(undefined4 *)(param_1 + 8) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_1 + 0x44) = local_68._4_4_;
  *(undefined4 *)(param_1 + 9) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_60._4_4_;
  local_68 = uVar3;
  uStack_60 = uVar4;
  local_58 = uVar5;
  uStack_50 = uVar6;
  FUN_14335f1e0(param_1);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477de56e FUN_1477de56e body=408 status=ok
// SIG undefined FUN_1477de56e(void)

void FUN_1477de56e(longlong param_1)

{
  undefined4 *puVar1;
  double *pdVar2;
  double dVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x180);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 300);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x134);
  *(float *)(param_1 + 0x78) = (float)*(double *)(param_1 + 0x500);
  lVar4 = *(longlong *)(param_1 + 0x110);
  *(longlong *)(param_1 + 0x110) = *(longlong *)(param_1 + 0x120);
  *(longlong *)(param_1 + 0x118) = *(longlong *)(param_1 + 0x120) - lVar4;
  puVar1 = (undefined4 *)(param_1 + 0xc4);
  puVar5 = (undefined4 *)(param_1 + 0x7c);
  puVar6 = puVar1;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  lVar4 = -0x48;
  do {
    pdVar2 = (double *)(param_1 + 0x458 + lVar4 * 2);
    dVar3 = (double)(float)pdVar2[1];
    auVar8._8_4_ = SUB84(dVar3,0);
    auVar8._0_8_ = (double)(float)*pdVar2;
    auVar8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    auVar8 = divpd(*(undefined1 (*) [16])(param_1 + 0x4e8 + lVar4 * 2),auVar8);
    *(ulonglong *)(param_1 + 0xc4 + lVar4) =
         CONCAT44((float)(1.0 - auVar8._8_8_),(float)(1.0 - auVar8._0_8_));
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0);
  lVar4 = 0;
  do {
    fVar7 = *(float *)(param_1 + 0x7c + lVar4 * 4) - (float)puVar1[lVar4];
    if (0.0 <= fVar7) {
      if (1.0 < fVar7) {
        fVar7 = (float)FUN_1447c7e44(fVar7 + -1.0,0x3f800000);
        fVar7 = (float)(~-(uint)(fVar7 != 0.0) & 0x3f800000 |
                       (uint)(fVar7 + 0.0) & -(uint)(fVar7 != 0.0));
      }
    }
    else {
      fVar7 = (float)FUN_1447c7e44();
      fVar7 = (float)(-(uint)(fVar7 != 0.0) & (uint)(1.0 - fVar7));
    }
    puVar1[lVar4] = fVar7;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x12);
                    /* WARNING: Could not recover jumptable at 0x0001477de6ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 1477de706 FUN_1477de706 body=178 status=ok
// SIG undefined FUN_1477de706(void)

void FUN_1477de706(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a577068;
  param_1[1] = &PTR_FUN_14a577080;
  FUN_1477de7b8();
  FUN_1477ece52(param_1[0xa9],*(undefined4 *)(param_1 + 0xaa));
  if (param_1[0xa9] != 0) {
    FUN_1400020a8();
  }
  FUN_1477ece52(param_1[0xa7],*(undefined4 *)(param_1 + 0xa8));
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xa6];
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
  FUN_1477de8b0(param_1 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x0001477de7b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  return;
}



// FUNCTION 1477de7b8 FUN_1477de7b8 body=248 status=ok
// SIG undefined FUN_1477de7b8(void)

void FUN_1477de7b8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x550);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x548);
    lVar3 = 0;
    do {
      FUN_1433b4108(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x540);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x538);
    lVar3 = 0;
    do {
      FUN_1433b4108(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x554);
  FUN_1477ece52(*(undefined8 *)(param_1 + 0x548),*(undefined4 *)(param_1 + 0x550));
  *(undefined4 *)(param_1 + 0x550) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x554) != 0)) {
    FUN_1477ece9c(param_1 + 0x548);
  }
  iVar1 = *(int *)(param_1 + 0x544);
  FUN_1477ece52(*(undefined8 *)(param_1 + 0x538),*(undefined4 *)(param_1 + 0x540));
  *(undefined4 *)(param_1 + 0x540) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x544) != 0)) {
    FUN_1477ece9c(param_1 + 0x538);
    return;
  }
  return;
}



// FUNCTION 1477de8b0 FUN_1477de8b0 body=139 status=ok
// SIG undefined FUN_1477de8b0(void)

void FUN_1477de8b0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x298;
  do {
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x178);
  lVar1 = 0;
  do {
    FUN_1477ed99d(*(undefined8 *)(param_1 + 0x178 + lVar1),*(undefined4 *)(param_1 + 0x180 + lVar1))
    ;
    if (*(longlong *)(param_1 + 0x178 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x120);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477de93c FUN_1477de93c body=398 status=ok
// SIG undefined FUN_1477de93c(void)

void FUN_1477de93c(longlong param_1,double *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_a8 [32];
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
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  fVar6 = DAT_14c761118;
  if ((*(longlong *)(param_1 + 0x510) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x510) + 0x28), lVar2 != 0)) {
    fVar6 = (float)*(int *)(lVar2 + 0x74);
  }
  FUN_1478b176c(param_2,SUB84((double)fVar6,0));
  local_88 = *(undefined4 *)param_2;
  uStack_84 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_80 = *(undefined4 *)(param_2 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
  local_78 = *(undefined4 *)(param_2 + 2);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_70 = *(undefined4 *)(param_2 + 3);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_68 = *(undefined4 *)(param_2 + 4);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_60 = *(undefined4 *)(param_2 + 5);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
  FUN_1477deacc(param_1 + 0x120,&local_88,param_3);
  dVar3 = *param_2 / *(double *)(param_1 + 0x158);
  iVar1 = *(int *)(param_1 + 0x550);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x548);
    lVar5 = 0;
    do {
      if ((*(longlong **)(lVar2 + lVar5) != (longlong *)0x0) &&
         (cVar4 = (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x20))(), cVar4 == '\0')) {
        *(int *)(lVar2 + 0x10 + lVar5) =
             (int)((double)(*(int *)(lVar2 + 0x10 + lVar5) - param_3) * dVar3 + (double)param_3);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  iVar1 = *(int *)(param_1 + 0x540);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x538);
    lVar5 = 0;
    do {
      if ((*(longlong **)(lVar2 + lVar5) != (longlong *)0x0) &&
         (cVar4 = (**(code **)(**(longlong **)(lVar2 + lVar5) + 0x20))(), cVar4 == '\0')) {
        *(int *)(lVar2 + 0x10 + lVar5) =
             (int)((double)(*(int *)(lVar2 + 0x10 + lVar5) - param_3) * dVar3 + (double)param_3);
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1477de56e(param_1);
  return;
}



// FUNCTION 1477deacc FUN_1477deacc body=149 status=ok
// SIG undefined FUN_1477deacc(void)

void FUN_1477deacc(longlong param_1,double *param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
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
  longlong lVar17;
  
  if ((ABS(*param_2 - *(double *)(param_1 + 0x38)) <= 1e-08) && (0.0 < *(double *)(param_1 + 0x2a8))
     ) {
    return;
  }
  dVar4 = (double)param_3;
  dVar2 = *param_2 / *(double *)(param_1 + 0x38);
  lVar17 = 0x67;
  do {
    pdVar1 = (double *)(param_1 + lVar17 * 8);
    dVar5 = (pdVar1[1] - dVar4) * dVar2 + dVar4;
    auVar3._8_4_ = SUB84(dVar5,0);
    auVar3._0_8_ = (*pdVar1 - dVar4) * dVar2 + dVar4;
    auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])(param_1 + lVar17 * 8) = auVar3;
    lVar17 = lVar17 + 2;
  } while (lVar17 != 0x79);
  uVar6 = *(undefined4 *)param_2;
  uVar7 = *(undefined4 *)((longlong)param_2 + 4);
  uVar8 = *(undefined4 *)(param_2 + 1);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar10 = *(undefined4 *)(param_2 + 2);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar12 = *(undefined4 *)(param_2 + 3);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar15 = *(undefined4 *)(param_2 + 5);
  uVar16 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x5c) = uVar14;
  *(undefined4 *)(param_1 + 0x60) = uVar15;
  *(undefined4 *)(param_1 + 100) = uVar16;
  *(undefined4 *)(param_1 + 0x48) = uVar10;
  *(undefined4 *)(param_1 + 0x4c) = uVar11;
  *(undefined4 *)(param_1 + 0x50) = uVar12;
  *(undefined4 *)(param_1 + 0x54) = uVar13;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  *(undefined4 *)(param_1 + 0x44) = uVar9;
  FUN_14335f1e0();
  return;
}



// FUNCTION 1477deb62 FUN_1477deb62 body=141 status=ok
// SIG undefined FUN_1477deb62(void)

undefined4 FUN_1477deb62(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x550) == 0) {
    iVar2 = *(int *)(param_1 + 0x548);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x540);
      lVar4 = 0;
      do {
        FUN_1433b4100(*(undefined8 *)(lVar3 + lVar4));
        lVar4 = lVar4 + 0x18;
      } while ((longlong)iVar2 * 0x18 != lVar4);
    }
    iVar2 = *(int *)(param_1 + 0x538);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x530);
      lVar4 = 0;
      do {
        FUN_1433b4100(*(undefined8 *)(lVar3 + lVar4));
        lVar4 = lVar4 + 0x18;
      } while ((longlong)iVar2 * 0x18 != lVar4);
    }
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x550);
  *(undefined4 *)(param_1 + 0x550) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1477debf0 FUN_1477debf0 body=333 status=ok
// SIG undefined FUN_1477debf0(void)

void FUN_1477debf0(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  LOCK();
  *(undefined4 *)(param_1 + 0x550) = 0;
  UNLOCK();
  FUN_1478b1e96(param_1 + 0x124);
  memset((void *)(param_1 + 0x450),0,0x90);
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x558) = 0;
  if (param_2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x548);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x540);
      lVar3 = 0;
      do {
        FUN_1433b4108(*(undefined8 *)(lVar2 + lVar3));
        lVar3 = lVar3 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar3);
    }
    iVar1 = *(int *)(param_1 + 0x538);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x530);
      lVar3 = 0;
      do {
        FUN_1433b4108(*(undefined8 *)(lVar2 + lVar3));
        lVar3 = lVar3 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar3);
    }
    iVar1 = *(int *)(param_1 + 0x54c);
    FUN_1477ece52(*(undefined8 *)(param_1 + 0x540),*(undefined4 *)(param_1 + 0x548));
    *(undefined4 *)(param_1 + 0x548) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x54c) != 0)) {
      FUN_1477ece9c(param_1 + 0x540);
    }
    iVar1 = *(int *)(param_1 + 0x53c);
    FUN_1477ece52(*(undefined8 *)(param_1 + 0x530),*(undefined4 *)(param_1 + 0x538));
    *(undefined4 *)(param_1 + 0x538) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x53c) != 0)) {
      FUN_1477ece9c(param_1 + 0x530);
      return;
    }
  }
  return;
}



// FUNCTION 1477ded3e FUN_1477ded3e body=136 status=ok
// SIG undefined FUN_1477ded3e(void)

undefined4 FUN_1477ded3e(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x550) != 0) {
    iVar2 = *(int *)(param_1 + 0x548);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x540);
      lVar4 = 0;
      do {
        FUN_1433b40f8(*(undefined8 *)(lVar3 + lVar4));
        lVar4 = lVar4 + 0x18;
      } while ((longlong)iVar2 * 0x18 != lVar4);
    }
    iVar2 = *(int *)(param_1 + 0x538);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x530);
      lVar4 = 0;
      do {
        FUN_1433b40f8(*(undefined8 *)(lVar3 + lVar4));
        lVar4 = lVar4 + 0x18;
      } while ((longlong)iVar2 * 0x18 != lVar4);
    }
  }
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x550);
  *(undefined4 *)(param_1 + 0x550) = 0;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1477dedde FUN_1477dedde body=674 status=ok
// SIG undefined FUN_1477dedde(void)

void FUN_1477dedde(LARGE_INTEGER *param_1,int param_2)

{
  DWORD DVar1;
  LARGE_INTEGER *pLVar2;
  longlong lVar3;
  LARGE_INTEGER *pLVar4;
  int iVar5;
  LARGE_INTEGER LVar6;
  LARGE_INTEGER LVar7;
  undefined1 auStack_a8 [40];
  LARGE_INTEGER *local_80;
  LARGE_INTEGER local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  QueryPerformanceCounter(&local_78);
  *param_1 = local_78;
  local_80 = param_1 + 0x56;
  pLVar4 = param_1 + 0x31;
  lVar3 = 0;
  do {
    LVar6 = param_1[lVar3 + 0x67];
    LVar7.s = (_struct_19)(LVar6.s - (double)param_2);
    param_1[lVar3 + 0x67] = LVar7;
    if ((double)LVar7 < 0.0) {
      iVar5 = (int)(double)LVar6;
      if ((lVar3 == 1) && (param_1[0x7a].s.LowPart != 0)) {
        do {
          DVar1 = param_1[0x34].s.LowPart;
          param_1[0x34].s.LowPart = DVar1 + 1;
          if (*(uint *)((longlong)param_1 + 0x1a4) < DVar1 + 1) {
            FUN_1446f48e2(param_1 + 0x33,DVar1);
          }
          *(int *)(param_1[0x33].QuadPart + (longlong)(int)DVar1 * 4) = iVar5;
          DVar1 = param_1[0x7b].s.LowPart + 1;
          if (DVar1 == param_1[0x7a].s.LowPart) {
            DVar1 = 0;
          }
          param_1[0x7b].s.LowPart = DVar1;
          iVar5 = (int)((double)iVar5 + (double)param_1[0x56]);
          LVar6.s = (_struct_19)
                    (*(double *)(param_1[0x79].QuadPart + (longlong)(int)DVar1 * 8) + param_1[0x68])
          ;
          param_1[0x68] = LVar6;
          param_1[0x56] = *(LARGE_INTEGER *)(param_1[0x79].QuadPart + (longlong)(int)DVar1 * 8);
        } while ((double)LVar6 <= 0.0);
      }
      else {
        pLVar2 = pLVar4 + lVar3 * 2;
        do {
          DVar1 = pLVar2[1].s.LowPart;
          pLVar2[1].s.LowPart = DVar1 + 1;
          if (*(uint *)((longlong)pLVar2 + 0xc) < DVar1 + 1) {
            FUN_1446f48e2(pLVar2,DVar1);
          }
          *(int *)(pLVar2->QuadPart + (longlong)(int)DVar1 * 4) = iVar5;
          iVar5 = (int)((double)iVar5 + (double)param_1[lVar3 + 0x55]);
          LVar6.s = (_struct_19)(param_1[lVar3 + 0x55] + param_1[lVar3 + 0x67]);
          param_1[lVar3 + 0x67] = LVar6;
        } while ((double)LVar6 <= 0.0);
      }
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x12);
  if (param_1[0x32].s.LowPart == 0) {
    if (param_1[0x34].s.LowPart != 0) {
      param_1[2].s.LowPart = param_1[2].s.LowPart + 1;
    }
  }
  else {
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
    param_1[2].s.LowPart = 1;
  }
  pLVar2 = local_80;
  if (param_1[0x7a].s.LowPart != 0) {
    pLVar2 = (LARGE_INTEGER *)((longlong)(int)param_1[0x7b].s.LowPart * 8 + param_1[0x79].QuadPart);
  }
  *(float *)((longlong)param_1 + 0x14) =
       (float)(1.0 - (double)param_1[0x68] / (double)(float)(double)*pLVar2);
  LVar6.s = (_struct_19)((double)param_2 / (double)param_1[0xc] + param_1[0x7c]);
  param_1[0x7c] = LVar6;
  *(float *)(param_1 + 3) = (float)(double)LVar6;
  FUN_1477e52f8(param_1);
  lVar3 = 0x120;
  do {
    iVar5 = *(int *)((longlong)pLVar4 + 0xc);
    pLVar4[1].s.LowPart = 0;
    if (iVar5 < 0) {
      FUN_14481578e(pLVar4,0);
    }
    pLVar4 = pLVar4 + 2;
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0);
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477df082 FUN_1477df082 body=102 status=ok
// SIG undefined FUN_1477df082(void)

void FUN_1477df082(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_2 + 0x28);
  local_18 = *(longlong *)(param_2 + 0x30);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1477df0ea(param_1 + 0x118,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1477c9848(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477df0ea FUN_1477df0ea body=101 status=ok
// SIG undefined FUN_1477df0ea(void)

void FUN_1477df0ea(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1477ed9e6(param_1 + (ulonglong)param_3 * 0x10 + 0x68);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1 << (param_3 & 0x1f);
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
                    /* WARNING: Could not recover jumptable at 0x0001477df142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477df150 FUN_1477df150 body=102 status=ok
// SIG undefined FUN_1477df150(void)

void FUN_1477df150(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_2 + 0x28);
  local_18 = *(longlong *)(param_2 + 0x30);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1477df1b8(param_1 + 0x118,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1477c9848(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477df1b8 FUN_1477df1b8 body=124 status=ok
// SIG undefined FUN_1477df1b8(void)

void FUN_1477df1b8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  
  lVar5 = 0x68;
  bVar4 = 0;
  do {
    FUN_1477ed9e6(param_1 + lVar5,param_2);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1 << (bVar4 & 0x1f);
    bVar4 = bVar4 + 1;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x188);
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
                    /* WARNING: Could not recover jumptable at 0x0001477df225. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477df234 FUN_1477df234 body=102 status=ok
// SIG undefined FUN_1477df234(void)

void FUN_1477df234(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_2 + 0x28);
  local_18 = *(longlong *)(param_2 + 0x30);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1477df29c(param_1 + 0x118,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1477c9848(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477df29c FUN_1477df29c body=119 status=ok
// SIG undefined FUN_1477df29c(void)

void FUN_1477df29c(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = param_1 + (ulonglong)param_3 * 0x10;
  FUN_1477e55fc(lVar3 + 0x68);
  if (*(int *)(lVar3 + 0x70) == 0) {
    *(uint *)(param_1 + 8) =
         *(uint *)(param_1 + 8) & (-2 << (param_3 & 0x1f) | 0xfffffffeU >> 0x20 - (param_3 & 0x1f));
  }
  plVar4 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001477df304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477df314 FUN_1477df314 body=102 status=ok
// SIG undefined FUN_1477df314(void)

void FUN_1477df314(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_2 + 0x28);
  local_18 = *(longlong *)(param_2 + 0x30);
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  FUN_1477df37c(param_1 + 0x118,&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_1477c9848(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477df37c FUN_1477df37c body=130 status=ok
// SIG undefined FUN_1477df37c(void)

void FUN_1477df37c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  
  lVar4 = param_1 + 0x68;
  bVar5 = 0;
  lVar6 = 0x120;
  do {
    FUN_1477e55fc(lVar4,param_2);
    if (*(int *)(lVar4 + 8) == 0) {
      *(uint *)(param_1 + 8) =
           *(uint *)(param_1 + 8) & (-2 << (bVar5 & 0x1f) | 0xfffffffeU >> 0x20 - (bVar5 & 0x1f));
    }
    bVar5 = bVar5 + 1;
    lVar4 = lVar4 + 0x10;
    lVar6 = lVar6 + -0x10;
  } while (lVar6 != 0);
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
                    /* WARNING: Could not recover jumptable at 0x0001477df3ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477df3fe FUN_1477df3fe body=196 status=ok
// SIG undefined FUN_1477df3fe(void)

undefined4 FUN_1477df3fe(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar5 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  uVar3 = *param_2;
  if (cVar5 == '\0') {
    param_1 = param_1 + 0x548;
    local_38 = param_2[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    puVar7 = &local_40;
    local_40 = uVar3;
  }
  else {
    param_1 = param_1 + 0x538;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    puVar7 = &local_30;
    local_30 = uVar3;
  }
  uVar6 = FUN_1477df4c4(puVar7,param_1);
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477df4c4 FUN_1477df4c4 body=133 status=ok
// SIG undefined FUN_1477df4c4(void)

bool FUN_1477df4c4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  plVar3 = (longlong *)(*param_2 + uVar5 * 0x18);
  do {
    plVar3 = plVar3 + -3;
    iVar4 = (int)uVar5;
    if (iVar4 < 1) goto LAB_1477df513;
    uVar5 = (ulonglong)(iVar4 - 1);
  } while (*plVar3 != *param_1);
  FUN_1433b4108();
  FUN_1477ecfb4(param_2,uVar5);
  FUN_1477ed040(param_2);
LAB_1477df513:
  plVar3 = (longlong *)param_1[1];
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
  return 0 < iVar4;
}



// FUNCTION 1477df54a FUN_1477df54a body=141 status=ok
// SIG undefined FUN_1477df54a(void)

void FUN_1477df54a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [120];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  fVar2 = DAT_14c761118;
  if ((param_1[0xa1] != 0) && (lVar1 = *(longlong *)(param_1[0xa1] + 0x28), lVar1 != 0)) {
    fVar2 = (float)*(int *)(lVar1 + 0x74);
  }
  FUN_1478b1884(local_90,param_2,fVar2,0xffffffff);
  (**(code **)(*param_1 + 0x50))(param_1,local_90);
  FUN_1477d1a7c(local_90);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477df5d8 FUN_1477df5d8 body=246 status=ok
// SIG undefined FUN_1477df5d8(void)

void FUN_1477df5d8(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x38))();
    if (cVar1 != '\0') {
      if ((param_1[0xa1] == 0) || (*(longlong *)(param_1[0xa1] + 0x28) == 0)) {
        cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x28))();
        if (cVar1 != '\0') {
          FUN_1433b4108(*(undefined8 *)(param_2 + 0x10));
        }
      }
      local_38 = param_1[0xa2];
      FUN_1477df74c(param_1[0xa1],local_30);
      FUN_1477df6d0(param_2,local_30);
      FUN_1433b3cbc(*(undefined8 *)(param_2 + 0x10),param_2);
      local_48 = *(undefined8 *)(param_2 + 0x10);
      local_40 = *(longlong *)(param_2 + 0x18);
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      FUN_1477cb53e(local_68,param_2 + 0x20);
      (**(code **)(*param_1 + 0x48))(param_1,local_68,&local_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477df6d0 FUN_1477df6d0 body=124 status=ok
// SIG undefined FUN_1477df6d0(void)

void FUN_1477df6d0(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(longlong *)(param_1 + 0x60) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x0001477df740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477df74c FUN_1477df74c body=127 status=ok
// SIG undefined FUN_1477df74c(void)

longlong * FUN_1477df74c(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x58);
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar3);
      if (*(longlong *)(lVar2 + 0x518) == *param_3) {
        *param_2 = lVar2;
        lVar1 = *(longlong *)(lVar1 + 8 + lVar3);
        param_2[1] = lVar1;
        if (lVar1 != 0) {
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
        }
        goto LAB_1477df79e;
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x60) * 0x10 != lVar3);
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1477df79e:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return param_2;
}



// FUNCTION 1477df7cc FUN_1477df7cc body=312 status=ok
// SIG undefined FUN_1477df7cc(void)

void FUN_1477df7cc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_21 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
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
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477df906(param_1,local_21,local_28,local_2c);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477df906 FUN_1477df906 body=350 status=ok
// SIG undefined FUN_1477df906(void)

void FUN_1477df906(longlong param_1,char param_2,float param_3,float param_4)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_88 [39];
  char local_61;
  ulonglong local_60;
  undefined8 extraout_XMM0_Qb;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1 = param_1 + 0x1d8;
  local_61 = param_2;
  cVar1 = FUN_1477ddcc2(param_1);
  if (param_2 != '\x13' && cVar1 == '\x01') {
    fVar3 = (float)FUN_1477ddd7a(param_1,&local_61,0x3f800000);
    uVar2 = -(uint)(ABS(fVar3 * 1000.0) <= 1e-08);
    auVar4._0_8_ = FUN_1477dde7e(param_1,&local_61);
    auVar4._8_8_ = extraout_XMM0_Qb;
    auVar5._4_12_ = auVar4._4_12_;
    fVar3 = (float)auVar4._0_8_ +
            (float)(uVar2 & (uint)param_3 | ~uVar2 & (uint)(param_4 / (fVar3 * 1000.0) + param_3));
    if (0.0 <= fVar3) {
      if (1.0 < fVar3) {
        auVar5._0_4_ = fVar3 + -1.0;
        FUN_1447c7e44(auVar5._0_8_,0x3f800000);
      }
    }
    else {
      FUN_1447c7e44();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dfa66 FUN_1477dfa66 body=194 status=ok
// SIG undefined FUN_1477dfa66(void)

void FUN_1477dfa66(undefined8 param_1,longlong param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58 [5];
  double local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = 60.0;
  cVar1 = FUN_1477e3e10(param_1);
  if (cVar1 == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)local_30;
  }
  *param_3 = fVar2;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dfb2a FUN_1477dfb2a body=177 status=ok
// SIG undefined FUN_1477dfb2a(void)

void FUN_1477dfb2a(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477de0f6(param_1 + 0x1d8,&local_38);
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dfbdc FUN_1477dfbdc body=332 status=ok
// SIG undefined FUN_1477dfbdc(void)

void FUN_1477dfbdc(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_31 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_31;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_1477ddd7a(param_1 + 0x1d8,puVar2,local_38);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dfd2a FUN_1477dfd2a body=167 status=ok
// SIG undefined FUN_1477dfd2a(void)

void FUN_1477dfd2a(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477de17e(param_1 + 0x1d8);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dfdd2 FUN_1477dfdd2 body=194 status=ok
// SIG undefined FUN_1477dfdd2(void)

void FUN_1477dfdd2(undefined8 param_1,longlong param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58 [2];
  double local_48;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = 125.0;
  cVar1 = FUN_1477e3e10(param_1);
  if (cVar1 == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)local_48;
  }
  *param_3 = fVar2;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dfe96 FUN_1477dfe96 body=194 status=ok
// SIG undefined FUN_1477dfe96(void)

void FUN_1477dfe96(undefined8 param_1,longlong param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58 [3];
  double local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = 0.125;
  cVar1 = FUN_1477e3e10(param_1);
  if (cVar1 == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)local_40;
  }
  *param_3 = fVar2;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477dff5a FUN_1477dff5a body=194 status=ok
// SIG undefined FUN_1477dff5a(void)

void FUN_1477dff5a(undefined8 param_1,longlong param_2,float *param_3)

{
  char cVar1;
  float fVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58 [4];
  double local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = 480.0;
  cVar1 = FUN_1477e3e10(param_1);
  if (cVar1 == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)local_38;
  }
  *param_3 = fVar2;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e001e FUN_1477e001e body=160 status=ok
// SIG undefined FUN_1477e001e(void)

void FUN_1477e001e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477e00c0(param_1);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e00c0 FUN_1477e00c0 body=120 status=ok
// SIG undefined FUN_1477e00c0(void)

void FUN_1477e00c0(void)

{
  char cVar1;
  float fVar2;
  undefined1 auStack_58 [48];
  double local_28;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0.125;
  cVar1 = FUN_1477e3e10();
  if ((cVar1 == '\0') || (ABS((float)local_28) <= 1e-08)) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = 1.0 / (float)local_28;
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2);
}



// FUNCTION 1477e0140 FUN_1477e0140 body=165 status=ok
// SIG undefined FUN_1477e0140(void)

void FUN_1477e0140(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477ddd16(param_1 + 0x1d8);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e01e6 FUN_1477e01e6 body=12 status=ok
// SIG undefined FUN_1477e01e6(void)

void FUN_1477e01e6(longlong param_1)

{
  FUN_1477ddd16(param_1 + 0x1d8);
  return;
}



// FUNCTION 1477e01f2 FUN_1477e01f2 body=543 status=ok
// SIG undefined FUN_1477e01f2(void)

void FUN_1477e01f2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [32];
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined1 local_5c;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_68[0] = 0x13;
  local_64 = 0x1003f800000;
  local_5c = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_78 = 0;
  uStack_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  puVar3 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar3 = &local_78;
  }
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  uVar2 = local_7c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = *puVar3;
  puVar3 = &local_78;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  local_88 = puVar3[1];
  FUN_1477cb53e(local_b0,local_68);
  FUN_1477e0412(param_1,local_b0,&local_90,uVar2);
  FUN_1477c9821(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e0412 FUN_1477e0412 body=368 status=ok
// SIG undefined FUN_1477e0412(void)

void FUN_1477e0412(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined5 local_f8;
  undefined3 uStack_f3;
  undefined5 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [88];
  undefined1 *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = param_4;
  FUN_1477e33ca(local_c0,param_1,param_2,param_3);
  FUN_1477cb398(&local_118,local_c0);
  local_68[0] = (undefined1 *)0x0;
  local_58 = (undefined8 *)FUN_14001cc68(0x60,8);
  *local_58 = &PTR_FUN_14a57ca40;
  local_58[1] = local_118;
  local_58[2] = uStack_110;
  local_58[3] = local_108;
  local_58[4] = uStack_100;
  local_108 = 0;
  uStack_100 = 0;
  local_58[5] = CONCAT35(uStack_f3,local_f8);
  *(ulonglong *)((longlong)local_58 + 0x2d) = CONCAT53(uStack_f0,uStack_f3);
  local_58[7] = local_e8;
  local_e8 = 0;
  *(undefined4 *)(local_58 + 8) = (undefined4)local_e0;
  *(undefined4 *)((longlong)local_58 + 0x44) = local_e0._4_4_;
  local_e0 = 0;
  local_58[9] = local_d8;
  local_d8 = 0;
  *(undefined4 *)(local_58 + 10) = (undefined4)local_d0;
  *(undefined4 *)((longlong)local_58 + 0x54) = local_d0._4_4_;
  local_d0 = 0;
  *(undefined4 *)(local_58 + 0xb) = local_c8;
  if (local_58 + 1 != (undefined8 *)0x0) {
    local_68[0] = &LAB_143360e5c;
  }
  FUN_1461d2a44(param_1 + 0x1d8,local_68);
  FUN_1477c9968(&local_118);
  FUN_1477c9968(local_c0);
  FUN_1477c9821(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e0584 FUN_1477e0584 body=327 status=ok
// SIG undefined FUN_1477e0584(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1477e0584(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[1] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 1);
  }
  local_78[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar1 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *plVar1 = param_1;
  local_58 = 0;
  local_48 = &PTR_LAB_14a57c920;
  local_40 = &LAB_143360c3a;
  local_68 = &LAB_1477ed182;
  FUN_1461d2a44(param_1 + 0x1d8);
  if ((DAT_14c950c29 == '\x01') && (*plVar1 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e06cc FUN_1477e06cc body=255 status=ok
// SIG undefined FUN_1477e06cc(void)

void FUN_1477e06cc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
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
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = *puVar1;
  local_40 = puVar1[1];
  FUN_1477e07cc(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e07cc FUN_1477e07cc body=393 status=ok
// SIG undefined FUN_1477e07cc(void)

void FUN_1477e07cc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_148 [32];
  uint local_128;
  undefined8 uStack_124;
  uint uStack_11c;
  longlong local_118;
  ulonglong uStack_110;
  undefined5 local_108;
  undefined3 uStack_103;
  undefined5 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [88];
  undefined1 *local_78 [2];
  undefined8 *local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = local_128 & 0xffffff00;
  uStack_124 = 0x1003f800000;
  uStack_11c = uStack_11c & 0xffffff00;
  local_118 = 0;
  uStack_110 = 0;
  FUN_1477e30c4(local_d0,param_1,&local_128,param_2);
  FUN_1477c9821(local_118,uStack_110 & 0xffffffff);
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  FUN_1477cb398(&local_128,local_d0);
  local_78[0] = (undefined1 *)0x0;
  local_68 = (undefined8 *)FUN_14001cc68(0x60,8);
  *local_68 = &PTR_FUN_14a57ca00;
  *(uint *)(local_68 + 1) = local_128;
  *(undefined4 *)((longlong)local_68 + 0xc) = (undefined4)uStack_124;
  *(undefined4 *)(local_68 + 2) = uStack_124._4_4_;
  *(uint *)((longlong)local_68 + 0x14) = uStack_11c;
  local_68[3] = local_118;
  local_68[4] = uStack_110;
  local_118 = 0;
  uStack_110 = 0;
  local_68[5] = CONCAT35(uStack_103,local_108);
  *(ulonglong *)((longlong)local_68 + 0x2d) = CONCAT53(uStack_100,uStack_103);
  local_68[7] = local_f8;
  local_f8 = 0;
  *(undefined4 *)(local_68 + 8) = (undefined4)local_f0;
  *(undefined4 *)((longlong)local_68 + 0x44) = local_f0._4_4_;
  local_f0 = 0;
  local_68[9] = local_e8;
  local_e8 = 0;
  *(undefined4 *)(local_68 + 10) = (undefined4)local_e0;
  *(undefined4 *)((longlong)local_68 + 0x54) = local_e0._4_4_;
  local_e0 = 0;
  *(undefined4 *)(local_68 + 0xb) = local_d8;
  if ((uint *)(local_68 + 1) != (uint *)0x0) {
    local_78[0] = &LAB_143360d00;
  }
  FUN_1461d2a44(param_1 + 0x1d8,local_78);
  FUN_1477c9968(&local_128);
  FUN_1477c9968(local_d0);
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e0956 FUN_1477e0956 body=581 status=ok
// SIG undefined FUN_1477e0956(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1477e0956(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [32];
  longlong local_90;
  longlong local_88;
  longlong local_80 [4];
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined1 local_54;
  longlong local_50;
  ulonglong uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_60[0] = 0x13;
  local_5c = 0x1003f800000;
  local_54 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  local_80[1] = 0;
  local_80[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 1);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar3 = local_80 + 1;
  }
  local_80[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  plVar2 = local_80;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = *plVar3;
  plVar3 = local_80 + 1;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  local_88 = plVar3[1];
  FUN_1477cb53e(local_b0,local_60);
  FUN_1477e0b9c(param_1,local_b0,&local_90,plVar2);
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  FUN_1477c9821(local_50,uStack_48 & 0xffffffff);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e0b9c FUN_1477e0b9c body=362 status=ok
// SIG undefined FUN_1477e0b9c(void)

void FUN_1477e0b9c(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined5 local_f8;
  undefined3 uStack_f3;
  undefined5 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [88];
  undefined1 *local_68 [2];
  undefined8 *local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_4 = param_1;
  FUN_1477e30c4(local_c0,param_1,param_2,param_3);
  FUN_1477cb398(&local_118,local_c0);
  local_68[0] = (undefined1 *)0x0;
  local_58 = (undefined8 *)FUN_14001cc68(0x60,8);
  *local_58 = &PTR_FUN_14a57ca20;
  local_58[1] = local_118;
  local_58[2] = uStack_110;
  local_58[3] = local_108;
  local_58[4] = uStack_100;
  local_108 = 0;
  uStack_100 = 0;
  local_58[5] = CONCAT35(uStack_f3,local_f8);
  *(ulonglong *)((longlong)local_58 + 0x2d) = CONCAT53(uStack_f0,uStack_f3);
  local_58[7] = local_e8;
  local_e8 = 0;
  *(undefined4 *)(local_58 + 8) = (undefined4)local_e0;
  *(undefined4 *)((longlong)local_58 + 0x44) = local_e0._4_4_;
  local_e0 = 0;
  local_58[9] = local_d8;
  local_d8 = 0;
  *(undefined4 *)(local_58 + 10) = (undefined4)local_d0;
  *(undefined4 *)((longlong)local_58 + 0x54) = local_d0._4_4_;
  local_d0 = 0;
  *(undefined4 *)(local_58 + 0xb) = local_c8;
  if (local_58 + 1 != (undefined8 *)0x0) {
    local_68[0] = &LAB_143360dae;
  }
  FUN_1461d2a44(param_1 + 0x1d8,local_68);
  FUN_1477c9968(&local_118);
  FUN_1477c9968(local_c0);
  FUN_1477c9821(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e0d08 FUN_1477e0d08 body=327 status=ok
// SIG undefined FUN_1477e0d08(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1477e0d08(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[1] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 1);
  }
  local_78[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar1 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *plVar1 = param_1;
  local_58 = 0;
  local_48 = &PTR_LAB_14a57c920;
  local_40 = &LAB_143360c46;
  local_68 = &LAB_1477ed182;
  FUN_1461d2a44(param_1 + 0x1d8);
  if ((DAT_14c950c29 == '\x01') && (*plVar1 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e0e50 FUN_1477e0e50 body=648 status=ok
// SIG undefined FUN_1477e0e50(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1477e0e50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_98;
  longlong local_90;
  undefined4 local_84;
  longlong local_80 [3];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined1 local_5c;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_68[0] = 0x13;
  local_64 = 0x1003f800000;
  local_5c = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_80[1] = 0;
  local_80[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 1);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar3 = local_80 + 1;
  }
  local_80[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  plVar4 = local_80;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = *plVar3;
  plVar3 = local_80 + 1;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  local_90 = plVar3[1];
  local_a8 = local_84;
  FUN_14335e834(param_1,puVar2,&local_98,plVar4);
  if ((DAT_14c950c29 == '\x01') && (*plVar4 != 0)) {
    FUN_1456cec3c();
  }
  FUN_1477c9821(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e10da FUN_1477e10da body=648 status=ok
// SIG undefined FUN_1477e10da(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1477e10da(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_98;
  longlong local_90;
  undefined4 local_84;
  longlong local_80 [3];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined1 local_5c;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_68[0] = 0x13;
  local_64 = 0x1003f800000;
  local_5c = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_80[1] = 0;
  local_80[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 1);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar3 = local_80 + 1;
  }
  local_80[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  plVar4 = local_80;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = *plVar3;
  plVar3 = local_80 + 1;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  local_90 = plVar3[1];
  local_a8 = local_84;
  FUN_14335e908(param_1,puVar2,&local_98,plVar4);
  if ((DAT_14c950c29 == '\x01') && (*plVar4 != 0)) {
    FUN_1456cec3c();
  }
  FUN_1477c9821(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e1364 FUN_1477e1364 body=648 status=ok
// SIG undefined FUN_1477e1364(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1477e1364(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_98;
  longlong local_90;
  undefined4 local_84;
  longlong local_80 [3];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined1 local_5c;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_68[0] = 0x13;
  local_64 = 0x1003f800000;
  local_5c = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_80[1] = 0;
  local_80[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 1);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar3 = local_80 + 1;
  }
  local_80[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  plVar4 = local_80;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = *plVar3;
  plVar3 = local_80 + 1;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  local_90 = plVar3[1];
  local_a8 = local_84;
  FUN_14335e9e0(param_1,puVar2,&local_98,plVar4);
  if ((DAT_14c950c29 == '\x01') && (*plVar4 != 0)) {
    FUN_1456cec3c();
  }
  FUN_1477c9821(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e15ee FUN_1477e15ee body=648 status=ok
// SIG undefined FUN_1477e15ee(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1477e15ee(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_98;
  longlong local_90;
  undefined4 local_84;
  longlong local_80 [3];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined1 local_5c;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_68[0] = 0x13;
  local_64 = 0x1003f800000;
  local_5c = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_80[1] = 0;
  local_80[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 1);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar3 = local_80 + 1;
  }
  local_80[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  plVar4 = local_80;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = *plVar3;
  plVar3 = local_80 + 1;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  local_90 = plVar3[1];
  local_a8 = local_84;
  FUN_14335eabc(param_1,puVar2,&local_98,plVar4);
  if ((DAT_14c950c29 == '\x01') && (*plVar4 != 0)) {
    FUN_1456cec3c();
  }
  FUN_1477c9821(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e1878 FUN_1477e1878 body=648 status=ok
// SIG undefined FUN_1477e1878(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1477e1878(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_98;
  longlong local_90;
  undefined4 local_84;
  longlong local_80 [3];
  undefined1 local_68 [4];
  undefined8 local_64;
  undefined1 local_5c;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_68[0] = 0x13;
  local_64 = 0x1003f800000;
  local_5c = 0;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_80[1] = 0;
  local_80[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80 + 1);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar3 = local_80 + 1;
  }
  local_80[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  plVar4 = local_80;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = *plVar3;
  plVar3 = local_80 + 1;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  local_90 = plVar3[1];
  local_a8 = local_84;
  FUN_14335eb8c(param_1,puVar2,&local_98,plVar4);
  if ((DAT_14c950c29 == '\x01') && (*plVar4 != 0)) {
    FUN_1456cec3c();
  }
  FUN_1477c9821(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e1b02 FUN_1477e1b02 body=327 status=ok
// SIG undefined FUN_1477e1b02(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1477e1b02(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined1 *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[1] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 1);
  }
  local_78[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar1 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *plVar1 = param_1;
  local_58 = 0;
  local_48 = &PTR_LAB_14a57c920;
  local_40 = &LAB_143360c46;
  local_68 = &LAB_1477ed182;
  FUN_1461d2a44(param_1 + 0x1d8);
  if ((DAT_14c950c29 == '\x01') && (*plVar1 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e1c4a FUN_1477e1c4a body=519 status=ok
// SIG undefined FUN_1477e1c4a(void)

void FUN_1477e1c4a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [4];
  undefined8 local_54;
  undefined1 local_4c;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_58[0] = 0x13;
  local_54 = 0x1003f800000;
  local_4c = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar1 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = *puVar1;
  local_70 = puVar1[1];
  FUN_1477cb53e(local_98,local_58);
  FUN_14335ec78(param_1,local_38,local_98,&local_78);
  FUN_1477c9821(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e1e58 FUN_1477e1e58 body=403 status=ok
// SIG undefined FUN_1477e1e58(void)

void FUN_1477e1e58(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [40];
  longlong local_80;
  int local_74;
  undefined8 local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined1 local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  iVar1 = local_74;
  local_80 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  plVar2 = &local_80;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *plVar2 = param_1;
  local_58 = 0;
  local_48 = &PTR_LAB_14a57c900;
  local_68 = &LAB_143360bdc;
  local_40 = iVar1 != 0;
  FUN_1461d2a44(param_1 + 0x1d8);
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e1fec FUN_1477e1fec body=399 status=ok
// SIG undefined FUN_1477e1fec(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1477e1fec(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong local_60 [4];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_60[1] = 0;
  local_60[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60 + 1);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar3 = local_60 + 1;
  }
  local_60[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  plVar2 = local_60;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = *plVar3;
  plVar3 = local_60 + 1;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  local_68 = plVar3[1];
  FUN_1477e217c(param_1,&local_70,plVar2);
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e217c FUN_1477e217c body=377 status=ok
// SIG undefined FUN_1477e217c(void)

void FUN_1477e217c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_118 [48];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *local_d8 [2];
  undefined8 *local_c8;
  undefined8 local_90;
  char local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_3 = param_1;
  iVar3 = 0;
  do {
    FUN_1478b2468(param_1 + 0x28,iVar3,param_2);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x11);
  FUN_1461d2b9a(param_1 + 0x28,&local_90);
  plVar1 = local_60;
  if (local_70 == '\x01') {
    local_e8 = local_80;
    uStack_e4 = uStack_7c;
    uStack_e0 = uStack_78;
    uStack_dc = uStack_74;
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  local_d8[0] = (code *)0x0;
  local_c8 = (undefined8 *)FUN_14001cc68(0x48,8);
  *local_c8 = &PTR_FUN_14a57caa0;
  *(char *)(local_c8 + 2) = local_88;
  if (local_88 != '\0') {
    local_c8[1] = local_90;
  }
  *(char *)(local_c8 + 5) = local_70;
  if (local_70 != '\0') {
    *(undefined4 *)(local_c8 + 3) = local_e8;
    *(undefined4 *)((longlong)local_c8 + 0x1c) = uStack_e4;
    *(undefined4 *)(local_c8 + 4) = uStack_e0;
    *(undefined4 *)((longlong)local_c8 + 0x24) = uStack_dc;
  }
  local_c8[6] = local_68;
  local_c8[7] = plVar1;
  local_c8[8] = local_58;
  if (local_c8 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_d8[0] = FUN_14336112a;
  }
  FUN_1461d2a44(param_1 + 0x1d8,local_d8);
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
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e22f6 FUN_1477e22f6 body=505 status=ok
// SIG undefined FUN_1477e22f6(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1477e22f6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong local_60 [3];
  undefined1 local_41;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_41 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_41);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_41);
  }
  local_60[1] = 0;
  local_60[2] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60 + 1);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  plVar3 = plVar1;
  if (plVar1 == (longlong *)0x0) {
    plVar3 = local_60 + 1;
  }
  local_60[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  plVar2 = local_60;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = *plVar3;
  plVar3 = local_60 + 1;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  local_68 = plVar3[1];
  FUN_14335edf6(param_1,local_41,&local_70,plVar2);
  if ((DAT_14c950c29 == '\x01') && (*plVar2 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e24f0 FUN_1477e24f0 body=269 status=ok
// SIG undefined FUN_1477e24f0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1477e24f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [3];
  
  local_30[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30[1] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30 + 1);
  }
  local_30[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  plVar1 = local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477e25fe(param_1,plVar1);
  if ((DAT_14c950c29 == '\x01') && (*plVar1 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_30[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e25fe FUN_1477e25fe body=349 status=ok
// SIG undefined FUN_1477e25fe(void)

void FUN_1477e25fe(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_118 [48];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *local_d8 [2];
  undefined8 *local_c8;
  undefined8 local_90;
  char local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_2 = param_1;
  FUN_1461d2b9a(param_1 + 0x28,&local_90);
  plVar1 = local_60;
  if (local_70 == '\x01') {
    local_e8 = local_80;
    uStack_e4 = uStack_7c;
    uStack_e0 = uStack_78;
    uStack_dc = uStack_74;
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  local_d8[0] = (code *)0x0;
  local_c8 = (undefined8 *)FUN_14001cc68(0x48,8);
  *local_c8 = &PTR_FUN_14a57cae0;
  *(char *)(local_c8 + 2) = local_88;
  if (local_88 != '\0') {
    local_c8[1] = local_90;
  }
  *(char *)(local_c8 + 5) = local_70;
  if (local_70 != '\0') {
    *(undefined4 *)(local_c8 + 3) = local_e8;
    *(undefined4 *)((longlong)local_c8 + 0x1c) = uStack_e4;
    *(undefined4 *)(local_c8 + 4) = uStack_e0;
    *(undefined4 *)((longlong)local_c8 + 0x24) = uStack_dc;
  }
  local_c8[6] = local_68;
  local_c8[7] = plVar1;
  local_c8[8] = local_58;
  if (local_c8 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_d8[0] = FUN_143361404;
  }
  FUN_1461d2a44(param_1 + 0x1d8,local_d8);
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
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e275c FUN_1477e275c body=340 status=ok
// SIG undefined FUN_1477e275c(void)

void FUN_1477e275c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_29 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar1 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477e28b2(param_1,local_29,plVar1);
  if ((DAT_14c950c29 == '\x01') && (*plVar1 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e28b2 FUN_1477e28b2 body=362 status=ok
// SIG undefined FUN_1477e28b2(void)

void FUN_1477e28b2(longlong param_1,undefined1 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_118 [48];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  code *local_d8 [2];
  undefined8 *local_c8;
  undefined8 local_90;
  char local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_3 = param_1;
  FUN_1461d2b9a(param_1 + 0x28,&local_90);
  plVar1 = local_60;
  if (local_70 == '\x01') {
    local_e8 = local_80;
    uStack_e4 = uStack_7c;
    uStack_e0 = uStack_78;
    uStack_dc = uStack_74;
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  local_d8[0] = (code *)0x0;
  local_c8 = (undefined8 *)FUN_14001cc68(0x50,8);
  *local_c8 = &PTR_FUN_14a57cac0;
  *(char *)(local_c8 + 2) = local_88;
  if (local_88 != '\0') {
    local_c8[1] = local_90;
  }
  *(char *)(local_c8 + 5) = local_70;
  if (local_70 != '\0') {
    *(undefined4 *)(local_c8 + 3) = local_e8;
    *(undefined4 *)((longlong)local_c8 + 0x1c) = uStack_e4;
    *(undefined4 *)(local_c8 + 4) = uStack_e0;
    *(undefined4 *)((longlong)local_c8 + 0x24) = uStack_dc;
  }
  local_c8[6] = local_68;
  local_c8[7] = plVar1;
  local_c8[8] = local_58;
  *(undefined1 *)(local_c8 + 9) = param_2;
  if (local_c8 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_d8[0] = FUN_143361292;
  }
  FUN_1461d2a44(param_1 + 0x1d8,local_d8);
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
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e2a20 FUN_1477e2a20 body=780 status=ok
// SIG undefined FUN_1477e2a20(void)

void FUN_1477e2a20(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined5 local_118;
  undefined3 uStack_113;
  undefined5 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *param_3 = param_1;
  plVar7 = (longlong *)FUN_14001cc68(200,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a57c940;
  plVar1 = plVar7 + 2;
  FUN_1477ed1d4(plVar1);
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
  FUN_1477e8e96(plVar7 + 0xc,param_4);
  uVar6 = *(undefined8 *)(param_4 + 0x45);
  plVar7[0x14] = *(longlong *)(param_4 + 0x40);
  *(undefined8 *)((longlong)plVar7 + 0xa5) = uVar6;
  FUN_1477c97c2(plVar7 + 0x16,param_4 + 0x50);
  *(undefined4 *)(plVar7 + 0x18) = *(undefined4 *)(param_4 + 0x60);
  FUN_1477e2d2e(local_e0,*param_3,param_5,param_6);
  plVar2 = local_c8;
  local_d0 = (longlong *)0x0;
  if (local_c8 != (longlong *)0x0) {
    local_c8 = (longlong *)0x0;
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = local_c8;
  local_d0 = plVar1;
  if (plVar7 == (longlong *)0x0) {
    if (local_c8 == (longlong *)0x0) goto LAB_1477e2b6f;
    local_c8 = (longlong *)0x0;
LAB_1477e2cf0:
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1477e2b6f;
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar3 = (int *)((longlong)plVar2 + 0xc);
    *piVar3 = *piVar3 + -1;
    iVar5 = *piVar3;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (plVar7 != local_c8) {
      bVar8 = local_c8 == (longlong *)0x0;
      local_c8 = plVar7;
      if (bVar8) goto LAB_1477e2b6f;
      goto LAB_1477e2cf0;
    }
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1477e2b6f;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar3 = (int *)((longlong)plVar7 + 0xc);
    *piVar3 = *piVar3 + -1;
    iVar5 = *piVar3;
    UNLOCK();
    plVar2 = plVar7;
  }
  if (iVar5 == 0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
LAB_1477e2b6f:
  FUN_1477cb398(&local_138,local_e0);
  local_88[0] = (undefined1 *)0x0;
  local_78 = (undefined8 *)FUN_14001cc68(0x60,8);
  *local_78 = &PTR_FUN_14a57c9e0;
  local_78[1] = local_138;
  local_78[2] = uStack_130;
  local_78[3] = local_128;
  local_78[4] = uStack_120;
  local_128 = 0;
  uStack_120 = 0;
  local_78[5] = CONCAT35(uStack_113,local_118);
  *(ulonglong *)((longlong)local_78 + 0x2d) = CONCAT53(uStack_110,uStack_113);
  local_78[7] = local_108;
  local_108 = 0;
  *(undefined4 *)(local_78 + 8) = (undefined4)local_100;
  *(undefined4 *)((longlong)local_78 + 0x44) = local_100._4_4_;
  local_100 = 0;
  local_78[9] = local_f8;
  local_f8 = 0;
  *(undefined4 *)(local_78 + 10) = (undefined4)local_f0;
  *(undefined4 *)((longlong)local_78 + 0x54) = local_f0._4_4_;
  local_f0 = 0;
  *(undefined4 *)(local_78 + 0xb) = local_e8;
  if (local_78 + 1 != (undefined8 *)0x0) {
    local_88[0] = &LAB_143360c52;
  }
  FUN_1461d2a44(param_1 + 0x1d8,local_88);
  FUN_1477c9968(&local_138);
  FUN_1477c9968(local_e0);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e2d2e FUN_1477e2d2e body=916 status=ok
// SIG undefined FUN_1477e2d2e(void)

/* WARNING: Removing unreachable block (ram,0x0001477e2fc3) */
/* WARNING: Removing unreachable block (ram,0x0001477e2fca) */
/* WARNING: Removing unreachable block (ram,0x0001477e2fd9) */

undefined8 *
FUN_1477e2d2e(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  longlong *plStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  char local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = (longlong *)0x0;
  plStack_e0 = (longlong *)0x0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_d8 = CONCAT31(local_d8._1_3_,0x11);
  uStack_d4 = 0x3f800000;
  uStack_d0 = 0x100;
  uStack_cc = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0xffffffff;
  if (param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 4) = 0x11;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0x1003f800000;
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    goto LAB_1477e3080;
  }
  local_f8 = *(undefined8 *)(param_2 + 0x200);
  uStack_d0 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_4 + 5) >> 0x18);
  uStack_cc = (undefined1)((ulonglong)*(undefined8 *)((longlong)param_4 + 5) >> 0x38);
  local_d8 = (undefined4)*param_4;
  uStack_d4 = (undefined4)((ulonglong)*param_4 >> 0x20);
  FUN_1477c97c2(&local_c8,param_4 + 2);
  plVar8 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a57cb80;
  plVar3 = plVar8 + 2;
  FUN_1478b1944(plVar3);
  plVar4 = plStack_e0;
  plVar8[2] = (longlong)&PTR_FUN_14a579b00;
  plVar8[10] = 0;
  plVar8[0xb] = 0;
  *(undefined4 *)(plVar8 + 0xc) = 0xffffffff;
  *(undefined1 *)((longlong)plVar8 + 100) = 0;
  local_e8 = plVar3;
  if (plVar8 == (longlong *)0x0) {
    if (plStack_e0 != (longlong *)0x0) {
      plStack_e0 = (longlong *)0x0;
LAB_1477e2e7b:
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
      if (plVar8 != (longlong *)0x0) goto LAB_1477e2ee7;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    if (plVar8 == plStack_e0) {
      LOCK();
      plVar3 = plVar8 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    else {
      bVar10 = plStack_e0 != (longlong *)0x0;
      plStack_e0 = plVar8;
      if (bVar10) goto LAB_1477e2e7b;
    }
LAB_1477e2ee7:
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  FUN_1477e6f08(&local_b8,param_4 + 2);
  FUN_1461d2b9a(param_2 + 0x28,&local_a0);
  uVar5 = uStack_b0;
  lVar9 = (longlong)(int)uStack_b0;
  uVar7 = (int)uStack_b0 + 1;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
  if (uStack_b0._4_4_ < uVar7) {
    FUN_1477edebc(&local_b8,uVar5 & 0xffffffff);
  }
  puVar2 = (undefined8 *)(local_b8 + lVar9 * 0x40);
  *(char *)(local_b8 + 8 + lVar9 * 0x40) = local_98;
  if (local_98 == '\x01') {
    *puVar2 = local_a0;
  }
  *(char *)(puVar2 + 4) = local_80;
  if (local_80 == '\x01') {
    puVar2[2] = local_90;
    puVar2[3] = uStack_88;
  }
  puVar2[5] = local_78;
  puVar2[6] = uStack_70;
  puVar2[7] = local_68;
  uStack_70 = 0;
  local_78 = 0;
  cVar6 = FUN_14113f0c0(param_3);
  if (cVar6 != '\0') {
    local_a8 = FUN_1478b1ffe(param_2 + 0x28,param_3);
  }
  *param_1 = local_f8;
  param_1[1] = uStack_f0;
  param_1[2] = local_e8;
  param_1[3] = plStack_e0;
  *(ulonglong *)((longlong)param_1 + 0x25) = CONCAT17(uStack_cc,CONCAT43(uStack_d0,uStack_d4._1_3_))
  ;
  param_1[4] = CONCAT44(uStack_d4,local_d8);
  param_1[6] = local_c8;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_c0._4_4_;
  param_1[8] = local_b8;
  *(int *)(param_1 + 9) = (int)uStack_b0;
  *(uint *)((longlong)param_1 + 0x4c) = uStack_b0._4_4_;
  *(undefined4 *)(param_1 + 10) = local_a8;
LAB_1477e3080:
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  plStack_e0 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  FUN_1477c9968(&local_f8);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e30c4 FUN_1477e30c4 body=772 status=ok
// SIG undefined FUN_1477e30c4(void)

/* WARNING: Removing unreachable block (ram,0x0001477e32d6) */
/* WARNING: Removing unreachable block (ram,0x0001477e32dd) */
/* WARNING: Removing unreachable block (ram,0x0001477e32ec) */

undefined8 *
FUN_1477e30c4(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  char local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 4) = 0x11;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0x1003f800000;
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    goto LAB_1477e3121;
  }
  plVar9 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14a57cc60;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  FUN_1478b1944(plVar9 + 2);
  plVar9[2] = (longlong)&PTR_FUN_14a57cc80;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  if (plVar9 != (longlong *)0x0) {
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
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar1 = param_1 + 8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *param_1 = *(undefined8 *)(param_2 + 0x200);
  uVar6 = *(undefined8 *)((longlong)param_3 + 5);
  param_1[4] = *param_3;
  *(undefined8 *)((longlong)param_1 + 0x25) = uVar6;
  FUN_1477c97c2(param_1 + 6,param_3 + 2);
  if (plVar9 == (longlong *)0x0) {
    param_1[2] = 0x10;
    plVar10 = (longlong *)param_1[3];
    if (plVar10 != (longlong *)0x0) {
      param_1[3] = 0;
LAB_1477e337c:
      LOCK();
      plVar3 = plVar10 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2;
        UNLOCK();
joined_r0x0001477e336c:
        if (iVar5 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    param_1[2] = plVar9 + 2;
    plVar10 = (longlong *)param_1[3];
    if (plVar9 == plVar10) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2;
        UNLOCK();
        plVar10 = plVar9;
        goto joined_r0x0001477e336c;
      }
    }
    else {
      param_1[3] = plVar9;
      if (plVar10 != (longlong *)0x0) goto LAB_1477e337c;
    }
  }
  FUN_1477e6f08(plVar1,param_3 + 2);
  FUN_1461d2b9a(param_2 + 0x28,&local_90);
  iVar5 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar5 + 1U) {
    FUN_1477edebc(plVar1,iVar5);
  }
  puVar4 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x40);
  *(char *)(*plVar1 + 8 + (longlong)iVar5 * 0x40) = local_88;
  if (local_88 == '\x01') {
    *puVar4 = local_90;
  }
  *(char *)(puVar4 + 4) = local_70;
  if (local_70 == '\x01') {
    puVar4[2] = local_80;
    puVar4[3] = uStack_78;
  }
  puVar4[5] = local_68;
  puVar4[6] = uStack_60;
  puVar4[7] = local_58;
  uStack_60 = 0;
  local_68 = 0;
  cVar7 = FUN_14113f0c0(param_4);
  if (cVar7 != '\0') {
    uVar8 = FUN_1478b1ffe(param_2 + 0x28,param_4);
    *(undefined4 *)(param_1 + 10) = uVar8;
  }
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
LAB_1477e3121:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1477e33ca FUN_1477e33ca body=793 status=ok
// SIG undefined FUN_1477e33ca(void)

/* WARNING: Removing unreachable block (ram,0x0001477e35f1) */
/* WARNING: Removing unreachable block (ram,0x0001477e35f8) */
/* WARNING: Removing unreachable block (ram,0x0001477e3607) */

undefined8 *
FUN_1477e33ca(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  char local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 4) = 0x11;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0x1003f800000;
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    goto LAB_1477e342f;
  }
  plVar9 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14a57cda0;
  FUN_1478b1944(plVar9 + 2);
  plVar9[2] = (longlong)&PTR_FUN_14a579be0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  *(undefined4 *)(plVar9 + 0xc) = param_5;
  *(undefined4 *)((longlong)plVar9 + 100) = 0;
  *(undefined1 *)(plVar9 + 0xd) = 0;
  if (plVar9 != (longlong *)0x0) {
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
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar1 = param_1 + 8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *param_1 = *(undefined8 *)(param_2 + 0x200);
  uVar6 = *(undefined8 *)((longlong)param_3 + 5);
  param_1[4] = *param_3;
  *(undefined8 *)((longlong)param_1 + 0x25) = uVar6;
  FUN_1477c97c2(param_1 + 6,param_3 + 2);
  if (plVar9 == (longlong *)0x0) {
    param_1[2] = 0x10;
    plVar10 = (longlong *)param_1[3];
    if (plVar10 != (longlong *)0x0) {
      param_1[3] = 0;
LAB_1477e3697:
      LOCK();
      plVar3 = plVar10 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2;
        UNLOCK();
joined_r0x0001477e3687:
        if (iVar5 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    param_1[2] = plVar9 + 2;
    plVar10 = (longlong *)param_1[3];
    if (plVar9 == plVar10) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2;
        UNLOCK();
        plVar10 = plVar9;
        goto joined_r0x0001477e3687;
      }
    }
    else {
      param_1[3] = plVar9;
      if (plVar10 != (longlong *)0x0) goto LAB_1477e3697;
    }
  }
  FUN_1477e6f08(plVar1,param_3 + 2);
  FUN_1461d2b9a(param_2 + 0x28,&local_a0);
  iVar5 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar5 + 1U) {
    FUN_1477edebc(plVar1,iVar5);
  }
  puVar4 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x40);
  *(char *)(*plVar1 + 8 + (longlong)iVar5 * 0x40) = local_98;
  if (local_98 == '\x01') {
    *puVar4 = local_a0;
  }
  *(char *)(puVar4 + 4) = local_80;
  if (local_80 == '\x01') {
    puVar4[2] = local_90;
    puVar4[3] = uStack_88;
  }
  puVar4[5] = local_78;
  puVar4[6] = uStack_70;
  puVar4[7] = local_68;
  uStack_70 = 0;
  local_78 = 0;
  cVar7 = FUN_14113f0c0(param_4);
  if (cVar7 != '\0') {
    uVar8 = FUN_1478b1ffe(param_2 + 0x28,param_4);
    *(undefined4 *)(param_1 + 10) = uVar8;
  }
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
LAB_1477e342f:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1477e36e4 FUN_1477e36e4 body=788 status=ok
// SIG undefined FUN_1477e36e4(void)

/* WARNING: Removing unreachable block (ram,0x0001477e3904) */
/* WARNING: Removing unreachable block (ram,0x0001477e390b) */
/* WARNING: Removing unreachable block (ram,0x0001477e391a) */

undefined8 *
FUN_1477e36e4(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  char local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 4) = 0x11;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0x1003f800000;
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    goto LAB_1477e3741;
  }
  plVar9 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14a57cd00;
  plVar9[2] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  FUN_1478b1944(plVar9 + 2);
  plVar9[2] = (longlong)&PTR_FUN_14a57cd20;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[0xc] = 0;
  if (plVar9 != (longlong *)0x0) {
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
  }
  param_1[2] = 0;
  param_1[3] = 0;
  plVar1 = param_1 + 8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *param_1 = *(undefined8 *)(param_2 + 0x200);
  param_1[1] = param_3;
  uVar6 = *(undefined8 *)((longlong)param_4 + 5);
  param_1[4] = *param_4;
  *(undefined8 *)((longlong)param_1 + 0x25) = uVar6;
  FUN_1477c97c2(param_1 + 6,param_4 + 2);
  if (plVar9 == (longlong *)0x0) {
    param_1[2] = 0x10;
    plVar10 = (longlong *)param_1[3];
    if (plVar10 != (longlong *)0x0) {
      param_1[3] = 0;
LAB_1477e39aa:
      LOCK();
      plVar4 = plVar10 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2;
        UNLOCK();
joined_r0x0001477e399a:
        if (iVar5 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    param_1[2] = plVar9 + 2;
    plVar10 = (longlong *)param_1[3];
    if (plVar9 == plVar10) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2;
        UNLOCK();
        plVar10 = plVar9;
        goto joined_r0x0001477e399a;
      }
    }
    else {
      param_1[3] = plVar9;
      if (plVar10 != (longlong *)0x0) goto LAB_1477e39aa;
    }
  }
  FUN_1477e6f08(plVar1,param_4 + 2);
  FUN_1461d2b9a(param_2 + 0x28,&local_90);
  iVar5 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar5 + 1U) {
    FUN_1477edebc(plVar1,iVar5);
  }
  puVar3 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x40);
  *(char *)(*plVar1 + 8 + (longlong)iVar5 * 0x40) = local_88;
  if (local_88 == '\x01') {
    *puVar3 = local_90;
  }
  *(char *)(puVar3 + 4) = local_70;
  if (local_70 == '\x01') {
    puVar3[2] = local_80;
    puVar3[3] = uStack_78;
  }
  puVar3[5] = local_68;
  puVar3[6] = uStack_60;
  puVar3[7] = local_58;
  uStack_60 = 0;
  local_68 = 0;
  cVar7 = FUN_14113f0c0(param_5);
  if (cVar7 != '\0') {
    uVar8 = FUN_1478b1ffe(param_2 + 0x28,param_5);
    *(undefined4 *)(param_1 + 10) = uVar8;
  }
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
LAB_1477e3741:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1477e39fa FUN_1477e39fa body=327 status=ok
// SIG undefined FUN_1477e39fa(void)

void FUN_1477e39fa(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined5 local_f8;
  undefined3 uStack_f3;
  undefined5 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [88];
  undefined1 *local_68 [2];
  undefined8 *local_58;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = param_2;
  FUN_1477e3b42(local_c0,param_1);
  FUN_1477cb398(&local_118,local_c0);
  local_68[0] = (undefined1 *)0x0;
  local_58 = (undefined8 *)FUN_14001cc68(0x60,8);
  *local_58 = &PTR_FUN_14a57cb00;
  local_58[1] = local_118;
  local_58[2] = uStack_110;
  local_58[3] = local_108;
  local_58[4] = uStack_100;
  local_108 = 0;
  uStack_100 = 0;
  local_58[5] = CONCAT35(uStack_f3,local_f8);
  *(ulonglong *)((longlong)local_58 + 0x2d) = CONCAT53(uStack_f0,uStack_f3);
  local_58[7] = local_e8;
  local_e8 = 0;
  *(undefined4 *)(local_58 + 8) = (undefined4)local_e0;
  *(undefined4 *)((longlong)local_58 + 0x44) = local_e0._4_4_;
  local_e0 = 0;
  local_58[9] = local_d8;
  local_d8 = 0;
  *(undefined4 *)(local_58 + 10) = (undefined4)local_d0;
  *(undefined4 *)((longlong)local_58 + 0x54) = local_d0._4_4_;
  local_d0 = 0;
  *(undefined4 *)(local_58 + 0xb) = local_c8;
  if (local_58 + 1 != (undefined8 *)0x0) {
    local_68[0] = &LAB_14336156c;
  }
  FUN_1461d2a44(param_1 + 0x1d8,local_68);
  FUN_1477c9968(&local_118);
  FUN_1477c9968(local_c0);
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e3b42 FUN_1477e3b42 body=716 status=ok
// SIG undefined FUN_1477e3b42(void)

/* WARNING: Removing unreachable block (ram,0x0001477e3d1c) */
/* WARNING: Removing unreachable block (ram,0x0001477e3d23) */
/* WARNING: Removing unreachable block (ram,0x0001477e3d32) */

undefined8 *
FUN_1477e3b42(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  char cVar15;
  undefined4 uVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  char local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 4) = 0x11;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0x1003f800000;
    *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0xffffffff;
    goto LAB_1477e3b97;
  }
  plVar17 = (longlong *)FUN_1477ed67d();
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar17 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  lVar10 = *param_4;
  lVar11 = param_4[1];
  lVar12 = param_4[2];
  uVar16 = *(undefined4 *)((longlong)param_4 + 0x14);
  lVar13 = param_4[3];
  uVar7 = *(undefined4 *)((longlong)param_4 + 0x1c);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x24);
  lVar14 = param_4[5];
  uVar9 = *(undefined4 *)((longlong)param_4 + 0x2c);
  *(int *)(plVar17 + 0xe) = (int)param_4[4];
  *(undefined4 *)((longlong)plVar17 + 0x74) = uVar8;
  *(int *)(plVar17 + 0xf) = (int)lVar14;
  *(undefined4 *)((longlong)plVar17 + 0x7c) = uVar9;
  *(int *)(plVar17 + 0xc) = (int)lVar12;
  *(undefined4 *)((longlong)plVar17 + 100) = uVar16;
  *(int *)(plVar17 + 0xd) = (int)lVar13;
  *(undefined4 *)((longlong)plVar17 + 0x6c) = uVar7;
  plVar17[10] = lVar10;
  plVar17[0xb] = lVar11;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar1 = param_1 + 8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *param_1 = *(undefined8 *)(param_2 + 0x200);
  uVar6 = *(undefined8 *)((longlong)param_5 + 5);
  param_1[4] = *param_5;
  *(undefined8 *)((longlong)param_1 + 0x25) = uVar6;
  FUN_1477c97c2(param_1 + 6,param_5 + 2);
  if (plVar17 == (longlong *)0x0) {
    param_1[2] = 0x10;
    plVar18 = (longlong *)param_1[3];
    if (plVar18 != (longlong *)0x0) {
      param_1[3] = 0;
LAB_1477e3dc2:
      LOCK();
      plVar3 = plVar18 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2;
        UNLOCK();
joined_r0x0001477e3db2:
        if (iVar5 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    param_1[2] = plVar17 + 2;
    plVar18 = (longlong *)param_1[3];
    if (plVar17 == plVar18) {
      LOCK();
      plVar18 = plVar17 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2;
        UNLOCK();
        plVar18 = plVar17;
        goto joined_r0x0001477e3db2;
      }
    }
    else {
      param_1[3] = plVar17;
      if (plVar18 != (longlong *)0x0) goto LAB_1477e3dc2;
    }
  }
  FUN_1477e6f08(plVar1,param_5 + 2);
  FUN_1461d2b9a(param_2 + 0x28,&local_80);
  iVar5 = *(int *)(param_1 + 9);
  *(uint *)(param_1 + 9) = iVar5 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar5 + 1U) {
    FUN_1477edebc(plVar1,iVar5);
  }
  puVar4 = (undefined8 *)(*plVar1 + (longlong)iVar5 * 0x40);
  *(char *)(*plVar1 + 8 + (longlong)iVar5 * 0x40) = local_78;
  if (local_78 == '\x01') {
    *puVar4 = local_80;
  }
  *(char *)(puVar4 + 4) = local_60;
  if (local_60 == '\x01') {
    puVar4[2] = local_70;
    puVar4[3] = uStack_68;
  }
  puVar4[5] = local_58;
  puVar4[6] = uStack_50;
  puVar4[7] = local_48;
  uStack_50 = 0;
  local_58 = 0;
  cVar15 = FUN_14113f0c0(param_3);
  if (cVar15 != '\0') {
    uVar16 = FUN_1478b1ffe(param_2 + 0x28,param_3);
    *(undefined4 *)(param_1 + 10) = uVar16;
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar17 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar2 = (int *)((longlong)plVar17 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
LAB_1477e3b97:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1477e3e10 FUN_1477e3e10 body=211 status=ok
// SIG undefined FUN_1477e3e10(void)

undefined4 FUN_1477e3e10(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = FUN_1477ddcc2(param_1 + 0x1d8);
  if ((char)uVar1 == '\0') {
    *param_3 = 0x40b5888000000000;
    param_3[1] = 0x405f400000000000;
    param_3[2] = 0x3fc0000000000000;
    param_3[3] = 0x407e000000000000;
    param_3[4] = 0x404e000000000000;
    param_3[5] = 0x40e5888000000000;
  }
  else {
    FUN_1477ddfbc(param_1 + 0x1d8,&local_58);
    param_3[4] = local_38;
    param_3[5] = uStack_30;
    param_3[2] = local_48;
    param_3[3] = uStack_40;
    *(undefined4 *)param_3 = local_58;
    *(undefined4 *)((longlong)param_3 + 4) = uStack_54;
    *(undefined4 *)(param_3 + 1) = uStack_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_4c;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e3ee4 FUN_1477e3ee4 body=120 status=ok
// SIG undefined FUN_1477e3ee4(void)

undefined8 * FUN_1477e3ee4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  uVar2 = param_2[1];
  lVar3 = param_2[2];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[2];
  param_1[1] = uVar2;
  param_1[2] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  uVar2 = param_2[3];
  lVar3 = param_2[4];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_1[4];
  param_1[3] = uVar2;
  param_1[4] = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 1477e3f5c FUN_1477e3f5c body=77 status=ok
// SIG undefined FUN_1477e3f5c(void)

longlong FUN_1477e3f5c(longlong param_1,undefined8 param_2)

{
  FUN_145967e3c();
  *(undefined8 *)(param_1 + 0x28) = param_2;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x30),4000);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return param_1;
}



// FUNCTION 1477e3faa FUN_1477e3faa body=169 status=ok
// SIG undefined FUN_1477e3faa(void)

void FUN_1477e3faa(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  FUN_1477df74c(param_1,&local_48,&local_38);
  if (local_48 != 0) {
    FUN_14335e154(local_48,param_3);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001477e4047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e4054 FUN_1477e4054 body=150 status=ok
// SIG undefined FUN_1477e4054(void)

bool FUN_1477e4054(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  FUN_1477df74c(param_1,&local_38,param_2);
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_38 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e40ec FUN_1477e40ec body=168 status=ok
// SIG undefined FUN_1477e40ec(void)

ulonglong FUN_1477e40ec(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  FUN_1477df74c(param_1,&local_38,param_2);
  if (local_38 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(int *)(local_38 + 0x558) != 0);
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e4196 FUN_1477e4196 body=273 status=ok
// SIG undefined FUN_1477e4196(void)

void FUN_1477e4196(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  DWORD DVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (lVar3 != 0) {
    DVar4 = GetCurrentThreadId();
    if (DVar4 != *(DWORD *)(lVar3 + 0xe1c)) {
      local_48 = *param_2;
      local_68 = 0;
      local_58 = &PTR_LAB_14a57cb60;
      local_78 = &LAB_143361674;
      local_50 = param_1;
      FUN_1477bca52(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  FUN_1477df74c(param_1,&local_88,param_2);
  if (local_88 != 0) {
    *(int *)(local_88 + 0x560) = *(int *)(local_88 + 0x560) + param_3;
    (**(code **)(*(longlong *)(local_88 + 8) + 8))(local_88 + 8);
  }
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
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001477e4258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e42b8 FUN_1477e42b8 body=86 status=ok
// SIG undefined FUN_1477e42b8(void)

void FUN_1477e42b8(longlong param_1)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  iVar1 = *(int *)(param_1 + 100);
  FUN_1458ec451(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 100) != 0)) {
    FUN_1477ed4d0(param_1 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x0001477e42f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 1477e430e FUN_1477e430e body=526 status=ok
// SIG undefined FUN_1477e430e(void)

undefined8 * FUN_1477e430e(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [32];
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3[2] == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) == 0) {
    cVar6 = (**(code **)(*(longlong *)param_3[2] + 0x28))();
    if (cVar6 == '\0') goto LAB_1477e43b7;
    FUN_1433b4108(param_3[2]);
  }
  else {
LAB_1477e43b7:
    FUN_1477df74c(param_1,&local_48,param_3);
    if (local_48 != 0) {
      local_58 = local_48;
      local_50 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      FUN_1477df6d0(param_3,&local_58);
      FUN_1433b3cbc(param_3[2],param_3);
      local_68 = param_3[2];
      local_60 = param_3[3];
      if (local_60 != 0) {
        LOCK();
        *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
        UNLOCK();
      }
      FUN_1477cb53e(local_88,param_3 + 4);
      (**(code **)(*(longlong *)(local_48 + 8) + 0x48))
                ((longlong *)(local_48 + 8),local_88,&local_68);
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      *param_2 = *param_3;
      uVar3 = param_3[2];
      lVar4 = param_3[3];
      if (lVar4 == 0) {
        param_2[1] = uVar3;
        param_2[2] = 0;
      }
      else {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
        plVar5 = (longlong *)param_2[2];
        param_2[1] = uVar3;
        param_2[2] = lVar4;
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
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
      param_2[3] = *(undefined8 *)(param_1 + 0x28);
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_40 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      goto LAB_1477e436f;
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
LAB_1477e436f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1477e451e FUN_1477e451e body=254 status=ok
// SIG undefined FUN_1477e451e(void)

undefined4 FUN_1477e451e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  FUN_1477df74c(param_1,&local_48,&local_38);
  if ((local_48 == 0) || (lVar3 = *param_3, lVar3 == 0)) {
    uVar5 = 0;
  }
  else {
    local_50 = param_3[1];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    local_58 = lVar3;
    uVar5 = FUN_1477df3fe(local_48,&local_58);
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e461e FUN_1477e461e body=205 status=ok
// SIG undefined FUN_1477e461e(void)

ulonglong FUN_1477e461e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong unaff_RBP;
  longlong lVar6;
  longlong lVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  iVar3 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar3 < 1) {
    unaff_RBP = 0;
  }
  else {
    lVar6 = 8;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x58) + -8 + lVar6);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x58) + lVar6);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      lVar4 = *(longlong *)(lVar4 + 0x518);
      if (lVar4 == param_2) {
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),lVar7 < *(int *)(param_1 + 0x68));
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
      if (lVar4 == param_2) goto LAB_1477e46c7;
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar3 != lVar7);
    unaff_RBP = 0;
  }
LAB_1477e46c7:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return unaff_RBP & 0xffffff01;
}



// FUNCTION 1477e46ec FUN_1477e46ec body=269 status=ok
// SIG undefined FUN_1477e46ec(void)

longlong * FUN_1477e46ec(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a57cb80;
  FUN_1478b1944(plVar6 + 2);
  plVar6[2] = (longlong)&PTR_FUN_14a579b00;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  *(undefined4 *)(plVar6 + 0xc) = 0xffffffff;
  *(undefined1 *)((longlong)plVar6 + 100) = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)plVar6[0xb];
  plVar6[10] = lVar3;
  plVar6[0xb] = lVar4;
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
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(undefined4 *)(plVar6 + 0xc) = *(undefined4 *)(param_1 + 0x50);
  *param_2 = (longlong)(plVar6 + 2);
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1477e47fa FUN_1477e47fa body=262 status=ok
// SIG undefined FUN_1477e47fa(void)

void FUN_1477e47fa(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar5 = *(longlong *)(param_2 + 0x60);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(longlong *)(param_1 + 0x48) = lVar5;
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
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined1 *)(param_1 + 0x54) = 0;
  lVar5 = *(longlong *)(param_1 + 0x40);
  if ((*(longlong *)(lVar5 + 0x510) != 0) &&
     (*(longlong *)(*(longlong *)(lVar5 + 0x510) + 0x28) != 0)) {
    lVar5 = FUN_1477bfa34();
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    lVar5 = *(longlong *)(param_1 + 0x40);
  }
  if (lVar5 != 0) {
    local_30 = param_1;
    local_28 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    local_28[1] = &DAT_100000001;
    *local_28 = &PTR_LAB_14a57cba0;
    local_28[2] = param_1;
    FUN_1477df3fe(lVar5,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e4912 FUN_1477e4912 body=226 status=ok
// SIG undefined FUN_1477e4912(void)

void FUN_1477e4912(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x54) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 != 0) {
    if ((*(longlong *)(lVar1 + 0x510) != 0) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x510) + 0x28) != 0)) {
      lVar1 = FUN_1477bfa34();
      if (lVar1 != 0) {
        FUN_1477c84b6(lVar1,*(undefined4 *)(param_1 + 0x50),param_2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      lVar1 = *(longlong *)(param_1 + 0x40);
    }
    local_30 = param_1;
    local_28 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    local_28[1] = &DAT_100000001;
    *local_28 = &PTR_LAB_14a57cba0;
    local_28[2] = param_1;
    FUN_1477df3fe(lVar1,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e4a18 FUN_1477e4a18 body=133 status=ok
// SIG undefined FUN_1477e4a18(void)

void FUN_1477e4a18(longlong param_1)

{
  longlong lVar1;
  DWORD DVar2;
  longlong lVar3;
  
  *(undefined1 *)(param_1 + 0x54) = 1;
  if (((*(longlong *)(param_1 + 0x40) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x510), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x28) != 0)) {
    lVar3 = FUN_1477bfa34();
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x510);
    if (((lVar1 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar1 + 0x28), lVar1 != 0)) {
      DVar2 = GetCurrentThreadId();
      if (DVar2 == *(DWORD *)(lVar1 + 0xe1c)) {
        FUN_1477c84ce(lVar3,*(undefined4 *)(param_1 + 0x50));
        FUN_14334e416(lVar3,*(undefined4 *)(param_1 + 0x50));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477e4ab0 FUN_1477e4ab0 body=130 status=ok
// SIG undefined FUN_1477e4ab0(void)

longlong * FUN_1477e4ab0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(200,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a57c940;
  FUN_1477ed5a6(plVar3 + 2,param_1);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 1477e4b32 FUN_1477e4b32 body=81 status=ok
// SIG undefined FUN_1477e4b32(void)

void FUN_1477e4b32(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(longlong *)(param_1 + 0x48) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x0001477e4b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477e4b84 FUN_1477e4b84 body=144 status=ok
// SIG undefined FUN_1477e4b84(void)

int FUN_1477e4b84(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  double dVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x40);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x10));
  local_58 = *(undefined8 *)(lVar1 + 0x38);
  uStack_50 = *(undefined8 *)(lVar1 + 0x40);
  local_48 = *(undefined4 *)(lVar1 + 0x48);
  uStack_44 = *(undefined4 *)(lVar1 + 0x4c);
  uStack_40 = *(undefined4 *)(lVar1 + 0x50);
  uStack_3c = *(undefined4 *)(lVar1 + 0x54);
  local_38 = *(undefined4 *)(lVar1 + 0x58);
  uStack_34 = *(undefined4 *)(lVar1 + 0x5c);
  uStack_30 = *(undefined4 *)(lVar1 + 0x60);
  uStack_2c = *(undefined4 *)(lVar1 + 100);
  if ((LPCRITICAL_SECTION)(lVar1 + 0x10) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x10));
  }
  dVar3 = (double)FUN_1478b17c8(&local_58,*(undefined1 *)(param_1 + 0x90));
  iVar2 = 0;
  if (0 < param_2 - (int)dVar3) {
    iVar2 = param_2 - (int)dVar3;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e4c16 FUN_1477e4c16 body=147 status=ok
// SIG undefined FUN_1477e4c16(void)

void FUN_1477e4c16(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [104];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x518);
    FUN_1478b19ba(local_b8,1);
    FUN_1477e8f36(local_98,param_1 + 0x50);
    local_30 = uVar1;
    FUN_1478b1c84(param_1 + 0x50,local_b8);
    FUN_1477e8fa4(local_98);
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e4cb8 FUN_1477e4cb8 body=225 status=ok
// SIG undefined FUN_1477e4cb8(void)

longlong * FUN_1477e4cb8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
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
  longlong *plVar17;
  
  plVar17 = (longlong *)FUN_1477ed67d();
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar17 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  lVar3 = *(longlong *)(param_1 + 0x70);
  lVar4 = *(longlong *)(param_1 + 0x78);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)plVar17[0x11];
  plVar17[0x10] = lVar3;
  plVar17[0x11] = lVar4;
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
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  uVar7 = *(undefined4 *)(param_1 + 0x44);
  uVar8 = *(undefined4 *)(param_1 + 0x48);
  uVar9 = *(undefined4 *)(param_1 + 0x4c);
  uVar10 = *(undefined4 *)(param_1 + 0x50);
  uVar11 = *(undefined4 *)(param_1 + 0x54);
  uVar12 = *(undefined4 *)(param_1 + 0x58);
  uVar13 = *(undefined4 *)(param_1 + 0x5c);
  uVar14 = *(undefined4 *)(param_1 + 100);
  uVar15 = *(undefined4 *)(param_1 + 0x68);
  uVar16 = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(plVar17 + 0xe) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((longlong)plVar17 + 0x74) = uVar14;
  *(undefined4 *)(plVar17 + 0xf) = uVar15;
  *(undefined4 *)((longlong)plVar17 + 0x7c) = uVar16;
  *(undefined4 *)(plVar17 + 0xc) = uVar10;
  *(undefined4 *)((longlong)plVar17 + 100) = uVar11;
  *(undefined4 *)(plVar17 + 0xd) = uVar12;
  *(undefined4 *)((longlong)plVar17 + 0x6c) = uVar13;
  *(undefined4 *)(plVar17 + 10) = uVar6;
  *(undefined4 *)((longlong)plVar17 + 0x54) = uVar7;
  *(undefined4 *)(plVar17 + 0xb) = uVar8;
  *(undefined4 *)((longlong)plVar17 + 0x5c) = uVar9;
  *param_2 = (longlong)(plVar17 + 2);
  param_2[1] = (longlong)plVar17;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    plVar5 = plVar17 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  return param_2;
}



// FUNCTION 1477e4d9a FUN_1477e4d9a body=81 status=ok
// SIG undefined FUN_1477e4d9a(void)

void FUN_1477e4d9a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(longlong *)(param_1 + 0x78) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x0001477e4de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477e4dec FUN_1477e4dec body=89 status=ok
// SIG undefined FUN_1477e4dec(void)

void FUN_1477e4dec(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
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
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_1 + 0x40);
  uStack_34 = *(undefined4 *)(param_1 + 0x44);
  uStack_30 = *(undefined4 *)(param_1 + 0x48);
  uStack_2c = *(undefined4 *)(param_1 + 0x4c);
  local_28 = *(undefined4 *)(param_1 + 0x50);
  uStack_24 = *(undefined4 *)(param_1 + 0x54);
  uStack_20 = *(undefined4 *)(param_1 + 0x58);
  uStack_1c = *(undefined4 *)(param_1 + 0x5c);
  local_18 = *(undefined4 *)(param_1 + 0x60);
  uStack_14 = *(undefined4 *)(param_1 + 100);
  uStack_10 = *(undefined4 *)(param_1 + 0x68);
  uStack_c = *(undefined4 *)(param_1 + 0x6c);
  FUN_1477de93c(*(undefined8 *)(param_1 + 0x70),&local_38,param_2);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e4e54 FUN_1477e4e54 body=278 status=ok
// SIG undefined FUN_1477e4e54(void)

longlong * FUN_1477e4e54(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a57cc60;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  FUN_1478b1944(plVar6 + 2);
  plVar6[2] = (longlong)&PTR_FUN_14a57cc80;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)plVar6[0xb];
  plVar6[10] = lVar3;
  plVar6[0xb] = lVar4;
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
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *param_2 = (longlong)(plVar6 + 2);
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1477e4f6a FUN_1477e4f6a body=81 status=ok
// SIG undefined FUN_1477e4f6a(void)

void FUN_1477e4f6a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(longlong *)(param_1 + 0x48) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x0001477e4fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477e4fbc FUN_1477e4fbc body=87 status=ok
// SIG undefined FUN_1477e4fbc(void)

void FUN_1477e4fbc(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  FUN_1478b1e96(lVar2 + 300);
  memset((void *)(lVar2 + 0x458),0,0x90);
  *(undefined8 *)(lVar2 + 0x500) = 0;
  *(undefined4 *)(lVar2 + 0x4f8) = 0xffffffff;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + 0x560);
  *piVar1 = *piVar1 + param_2;
  return;
}



// FUNCTION 1477e5022 FUN_1477e5022 body=301 status=ok
// SIG undefined FUN_1477e5022(void)

longlong * FUN_1477e5022(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a57cd00;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  FUN_1478b1944(plVar6 + 2);
  plVar6[2] = (longlong)&PTR_FUN_14a57cd20;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  lVar3 = *(longlong *)(param_1 + 0x40);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)plVar6[0xb];
  plVar6[10] = lVar3;
  plVar6[0xb] = lVar4;
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
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar6[0xc] = *(longlong *)(param_1 + 0x50);
  *param_2 = (longlong)(plVar6 + 2);
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1477e5150 FUN_1477e5150 body=92 status=ok
// SIG undefined FUN_1477e5150(void)

void FUN_1477e5150(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(longlong *)(param_2 + 0x60);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(longlong *)(param_1 + 0x48) = lVar4;
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
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 8);
  return;
}



// FUNCTION 1477e51ac FUN_1477e51ac body=111 status=ok
// SIG undefined FUN_1477e51ac(void)

void FUN_1477e51ac(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)(param_1 + 0x40) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x510), lVar1 != 0)) {
    puVar3 = (undefined8 *)(param_1 + 0x50);
    cVar2 = FUN_1477e40ec(lVar1,puVar3);
    if (cVar2 == '\0') {
      FUN_1477e4196(lVar1,puVar3,param_2);
      cVar2 = FUN_1477e461e(lVar1,*puVar3);
      if (cVar2 != '\0') {
        FUN_1477e3faa(lVar1,*puVar3,*(undefined4 *)(lVar1 + 0x6c));
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477e525c FUN_1477e525c body=142 status=ok
// SIG undefined FUN_1477e525c(void)

longlong * FUN_1477e525c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a57cda0;
  FUN_1478b1944(plVar3 + 2);
  plVar3[2] = (longlong)&PTR_FUN_14a579be0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  *(undefined8 *)((longlong)plVar3 + 0x59) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x61) = 0;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 1477e52f8 FUN_1477e52f8 body=547 status=ok
// SIG undefined FUN_1477e52f8(void)

void FUN_1477e52f8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 *local_88 [2];
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1478b19ba(&local_c8,1);
  local_90 = 0;
  local_a8 = *(undefined4 *)(param_1 + 0xc);
  uStack_a4 = *(undefined4 *)(param_1 + 0x10);
  uStack_a0 = *(undefined4 *)(param_1 + 0x14);
  local_98 = *(undefined8 *)(param_1 + 1000);
  local_128 = param_1 + 0x188;
  plVar6 = (longlong *)(param_1 + 0x68);
  lVar3 = 0x68;
  local_118 = -1;
  local_120 = param_1;
  do {
    local_118 = local_118 + 1;
    uStack_9c = CONCAT31(uStack_9c._1_3_,(char)local_118);
    local_110 = lVar3;
    if ((*(int *)(local_128 + 8 + local_118 * 0x10) != 0) && ((longlong)(int)plVar6[1] != 0)) {
      puVar4 = (undefined8 *)*plVar6;
      puVar7 = puVar4 + (longlong)(int)plVar6[1] * 2;
      plVar6 = (longlong *)(local_118 * 0x10 + local_128);
      do {
        lVar3 = (longlong)(int)plVar6[1];
        if (lVar3 != 0) {
          lVar1 = *plVar6;
          lVar5 = 0;
          do {
            uStack_d0 = *(undefined4 *)(lVar1 + lVar5);
            uVar2 = *puVar4;
            local_d8 = local_98;
            uStack_cc = local_8c;
            local_e8 = local_a8;
            uStack_e4 = uStack_a4;
            uStack_e0 = uStack_a0;
            uStack_dc = uStack_9c;
            local_f8 = local_b8;
            uStack_f4 = uStack_b4;
            uStack_f0 = uStack_b0;
            uStack_ec = uStack_ac;
            local_108 = local_c8;
            uStack_104 = uStack_c4;
            uStack_100 = uStack_c0;
            uStack_fc = uStack_bc;
            local_88[0] = (undefined1 *)0x0;
            local_78 = (undefined8 *)0x0;
            local_90 = uStack_d0;
            local_78 = (undefined8 *)FUN_14001cc68(0x48,8);
            *local_78 = &PTR_FUN_14a57cdc0;
            *(undefined4 *)(local_78 + 7) = (undefined4)local_d8;
            *(undefined4 *)((longlong)local_78 + 0x3c) = local_d8._4_4_;
            *(undefined4 *)(local_78 + 8) = uStack_d0;
            *(undefined4 *)((longlong)local_78 + 0x44) = uStack_cc;
            *(undefined4 *)(local_78 + 5) = local_e8;
            *(undefined4 *)((longlong)local_78 + 0x2c) = uStack_e4;
            *(undefined4 *)(local_78 + 6) = uStack_e0;
            *(undefined4 *)((longlong)local_78 + 0x34) = uStack_dc;
            *(undefined4 *)(local_78 + 3) = local_f8;
            *(undefined4 *)((longlong)local_78 + 0x1c) = uStack_f4;
            *(undefined4 *)(local_78 + 4) = uStack_f0;
            *(undefined4 *)((longlong)local_78 + 0x24) = uStack_ec;
            *(undefined4 *)(local_78 + 1) = local_108;
            *(undefined4 *)((longlong)local_78 + 0xc) = uStack_104;
            *(undefined4 *)(local_78 + 2) = uStack_100;
            *(undefined4 *)((longlong)local_78 + 0x14) = uStack_fc;
            if (local_78 + 1 != (undefined8 *)0x0) {
              local_88[0] = &LAB_1433616ce;
            }
            FUN_1477e5652(uVar2,local_88);
            lVar5 = lVar5 + 4;
          } while (lVar3 * 4 != lVar5);
        }
        puVar4 = puVar4 + 2;
      } while (puVar4 != puVar7);
    }
    plVar6 = (longlong *)(local_120 + local_110 + 0x10);
    lVar3 = local_110 + 0x10;
  } while (lVar3 != 0x188);
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e551c FUN_1477e551c body=94 status=ok
// SIG undefined FUN_1477e551c(void)

float FUN_1477e551c(longlong param_1,byte param_2)

{
  float fVar1;
  float fVar2;
  
  if ((param_2 == 1) && (*(int *)(param_1 + 0x3d0) != 0)) {
    fVar1 = (float)*(int *)(param_1 + 0x3d0);
  }
  else {
    fVar1 = (float)(*(double *)(param_1 + 0x2a8) /
                   *(double *)(param_1 + 0x2a8 + (ulonglong)param_2 * 8));
  }
  fVar2 = (float)FUN_1477e557a(param_1);
  return (float)((*(int *)(param_1 + 0xc) + -1) * (int)fVar1 + (int)fVar2);
}



// FUNCTION 1477e557a FUN_1477e557a body=129 status=ok
// SIG undefined FUN_1477e557a(void)

undefined8 FUN_1477e557a(undefined8 param_1,byte param_2)

{
  longlong in_RCX;
  float fVar1;
  double dVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
  if (param_2 != 0) {
    if ((param_2 == 1) && (*(int *)(in_RCX + 0x3d0) != 0)) {
      fVar1 = (float)*(int *)(in_RCX + 0x3d8);
    }
    else {
      dVar2 = 1.0 - *(double *)(in_RCX + 0x338) / (double)(float)*(double *)(in_RCX + 0x2a8);
      uVar3 = (undefined4)((ulonglong)dVar2 >> 0x20);
      if ((param_2 == 1) && (*(int *)(in_RCX + 0x3d0) != 0)) {
        fVar1 = (float)*(int *)(in_RCX + 0x3d0);
      }
      else {
        fVar1 = (float)(*(double *)(in_RCX + 0x2a8) /
                       *(double *)(in_RCX + 0x2a8 + (ulonglong)param_2 * 8));
      }
      fVar1 = (float)dVar2 * fVar1;
    }
    return CONCAT44(uVar3,fVar1 + 1.0);
  }
  return 0;
}



// FUNCTION 1477e55fc FUN_1477e55fc body=85 status=ok
// SIG undefined FUN_1477e55fc(void)

void FUN_1477e55fc(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      if (*(longlong *)(*param_1 + lVar2) == *param_2) {
        if (iVar1 == 1) {
          return;
        }
        FUN_1477edaec(param_1,-iVar1);
        FUN_1477edb5e(param_1);
        return;
      }
      iVar1 = iVar1 + -1;
      lVar2 = lVar2 + 0x10;
    } while ((longlong)(int)param_1[1] * 0x10 != lVar2);
  }
  return;
}



// FUNCTION 1477e5652 FUN_1477e5652 body=181 status=ok
// SIG undefined FUN_1477e5652(void)

void FUN_1477e5652(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  lVar8 = *param_2;
  lVar9 = param_2[2];
  param_2[2] = 0;
  if (lVar8 != 0) {
    *param_2 = 0;
  }
  *puVar6 = &PTR_FUN_14a57cee0;
  puVar6[2] = lVar8;
  puVar6[4] = lVar9;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar8 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  lVar9 = param_2[6];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar5 = param_2[7];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(puVar6 + 6) = (int)param_2[4];
  *(undefined4 *)((longlong)puVar6 + 0x34) = uVar1;
  *(int *)(puVar6 + 7) = (int)lVar8;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = uVar2;
  *(int *)(puVar6 + 8) = (int)lVar9;
  *(undefined4 *)((longlong)puVar6 + 0x44) = uVar3;
  *(int *)(puVar6 + 9) = (int)lVar5;
  *(undefined4 *)((longlong)puVar6 + 0x4c) = uVar4;
  plVar7 = (longlong *)FUN_14001cc68(0x10,8);
  plVar7[1] = (longlong)puVar6;
  lVar8 = *param_1;
  do {
    *plVar7 = lVar8;
    LOCK();
    lVar9 = *param_1;
    bVar10 = lVar8 == lVar9;
    if (bVar10) {
      *param_1 = (longlong)plVar7;
      lVar9 = lVar8;
    }
    UNLOCK();
    lVar8 = lVar9;
  } while (!bVar10);
  if (*param_2 == 0) {
    return;
  }
  plVar7 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar7 = (longlong *)param_2[2];
  }
                    /* WARNING: Could not recover jumptable at 0x0001477e56f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar7 + 0x10))(plVar7);
  return;
}



// FUNCTION 1477e5714 FUN_1477e5714 body=583 status=ok
// SIG undefined FUN_1477e5714(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1477e5714(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined1 local_90 [24];
  undefined1 local_78;
  int local_70;
  int local_6c [2];
  undefined1 local_64;
  longlong local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_6c[1] = 4;
  local_64 = 1;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_6c + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_6c + 1);
  }
  local_6c[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_6c);
  }
  iVar2 = local_6c[0];
  local_70 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  iVar1 = local_70;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478b1418(local_90,local_6c + 1);
  local_78 = local_50;
  local_a0 = iVar1 != 0;
  local_a8 = iVar2 != 0;
  uVar3 = FUN_14335f43a(param_1,local_40,local_48,local_90);
  *param_3 = uVar3;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e595c FUN_1477e595c body=312 status=ok
// SIG undefined FUN_1477e595c(void)

void FUN_1477e595c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar1 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (*plVar1 != 0) {
    FUN_1477e5b80(param_1,local_28,*(undefined8 *)(*plVar1 + 0x200));
  }
  if ((DAT_14c950c29 == '\x01') && (*plVar1 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e5a96 FUN_1477e5a96 body=232 status=ok
// SIG undefined FUN_1477e5a96(void)

void FUN_1477e5a96(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477e5b80(param_1,local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e5b80 FUN_1477e5b80 body=157 status=ok
// SIG undefined FUN_1477e5b80(void)

void FUN_1477e5b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_3;
  lVar2 = FUN_1477e6f66(param_1,param_2,1);
  if ((lVar2 != 0) &&
     ((uVar1 = FUN_1477e4054(lVar2,&local_30), (char)uVar1 != '\0' ||
      (lVar2 = FUN_1477e6f66(param_1,param_2,0), lVar2 != 0)))) {
    FUN_14335f0c4(lVar2,&local_30,uVar1 ^ 1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477e5c34 FUN_1477e5c34 body=234 status=ok
// SIG undefined FUN_1477e5c34(void)

void FUN_1477e5c34(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477e5d20(param_1,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e5d20 FUN_1477e5d20 body=99 status=ok
// SIG undefined FUN_1477e5d20(void)

undefined8 FUN_1477e5d20(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  lVar2 = FUN_1477e70ac(param_1,&local_18);
  if (lVar2 != 0) {
    cVar1 = FUN_1477ddcc2(lVar2);
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e5d92 FUN_1477e5d92 body=43 status=ok
// SIG undefined FUN_1477e5d92(void)

void FUN_1477e5d92(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478b1640(*(undefined8 *)(param_1 + 0x40));
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477e5dbe FUN_1477e5dbe body=43 status=ok
// SIG undefined FUN_1477e5dbe(void)

void FUN_1477e5dbe(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478b168c(*(undefined8 *)(param_1 + 0x40));
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477e5dea FUN_1477e5dea body=43 status=ok
// SIG undefined FUN_1477e5dea(void)

void FUN_1477e5dea(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1478b1666(*(undefined8 *)(param_1 + 0x40));
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477e5e16 FUN_1477e5e16 body=259 status=ok
// SIG undefined FUN_1477e5e16(void)

void FUN_1477e5e16(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477e5f1a(param_1,&local_40,puVar1);
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e5f1a FUN_1477e5f1a body=66 status=ok
// SIG undefined FUN_1477e5f1a(void)

undefined8 * FUN_1477e5f1a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_1477e70ac(param_1,param_3);
  if ((lVar2 != 0) && (cVar1 = FUN_1477ddcc2(lVar2), cVar1 != '\0')) {
    FUN_1477de0f6(lVar2,param_2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1477e5f5c FUN_1477e5f5c body=401 status=ok
// SIG undefined FUN_1477e5f5c(void)

void FUN_1477e5f5c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
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
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_39;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_1477e60ee(param_1,local_38,puVar2,local_40);
  *param_3 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e60ee FUN_1477e60ee body=118 status=ok
// SIG undefined FUN_1477e60ee(void)

undefined8 FUN_1477e60ee(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  lVar2 = FUN_1477e70ac(param_1,&local_38);
  if (lVar2 != 0) {
    cVar1 = FUN_1477ddcc2(lVar2);
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e617e FUN_1477e617e body=249 status=ok
// SIG undefined FUN_1477e617e(void)

void FUN_1477e617e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_1477e6278(param_1,puVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e6278 FUN_1477e6278 body=52 status=ok
// SIG undefined FUN_1477e6278(void)

undefined8 FUN_1477e6278(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_1477e70ac();
  if (lVar2 != 0) {
    cVar1 = FUN_1477ddcc2(lVar2);
    if (cVar1 != '\0') {
      uVar3 = FUN_1477de17e(lVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1477e62ac FUN_1477e62ac body=186 status=ok
// SIG undefined FUN_1477e62ac(void)

void FUN_1477e62ac(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1477e6f66(param_1,local_28,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1478b1640(lVar1);
  }
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e6368 FUN_1477e6368 body=186 status=ok
// SIG undefined FUN_1477e6368(void)

void FUN_1477e6368(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1477e6f66(param_1,local_28,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1478b1666(lVar1);
  }
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e6424 FUN_1477e6424 body=186 status=ok
// SIG undefined FUN_1477e6424(void)

void FUN_1477e6424(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = FUN_1477e6f66(param_1,local_28,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1478b1666(lVar1);
  }
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e64e0 FUN_1477e64e0 body=240 status=ok
// SIG undefined FUN_1477e64e0(void)

void FUN_1477e64e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477e65d2(param_1,local_28,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e65d2 FUN_1477e65d2 body=252 status=ok
// SIG undefined FUN_1477e65d2(void)

longlong FUN_1477e65d2(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  longlong *local_48;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_3;
  lVar3 = FUN_1477e6f66(param_1,param_2,1);
  if (lVar3 != 0) {
    cVar2 = FUN_1477e4054(lVar3,&local_30);
    if (cVar2 != '\0') {
      FUN_14335efea(lVar3,local_58,&local_30);
      lVar4 = FUN_1477e7016(DAT_14c951640);
      uVar5 = (**(code **)(*param_2 + 0x180))(param_2);
      lVar3 = 0;
      if (lVar4 + 0x28 != 0) {
        lVar3 = lVar4;
      }
      FUN_1478b1ec2(lVar4 + 0x28,uVar5);
      *(undefined8 *)(lVar3 + 0x200) = param_3;
      FUN_1477e3ee4(lVar3 + 0x1d8,local_58);
      if (local_38 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
      }
      goto LAB_1477e6604;
    }
  }
  lVar3 = 0;
LAB_1477e6604:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e66d0 FUN_1477e66d0 body=165 status=ok
// SIG undefined FUN_1477e66d0(void)

void FUN_1477e66d0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477e6776(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e6776 FUN_1477e6776 body=80 status=ok
// SIG undefined FUN_1477e6776(void)

float FUN_1477e6776(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_1478b1640(*(undefined8 *)(param_1 + 0x40));
  lVar1 = FUN_1477e6f66(param_1,param_2,1);
  if (lVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)FUN_1478b1640(lVar1);
  }
  return fVar2 + fVar3;
}



// FUNCTION 1477e67c6 FUN_1477e67c6 body=165 status=ok
// SIG undefined FUN_1477e67c6(void)

void FUN_1477e67c6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477e686c(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e686c FUN_1477e686c body=80 status=ok
// SIG undefined FUN_1477e686c(void)

float FUN_1477e686c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_1478b1666(*(undefined8 *)(param_1 + 0x40));
  lVar1 = FUN_1477e6f66(param_1,param_2,1);
  if (lVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)FUN_1478b1666(lVar1);
  }
  return fVar2 + fVar3;
}



// FUNCTION 1477e68bc FUN_1477e68bc body=165 status=ok
// SIG undefined FUN_1477e68bc(void)

void FUN_1477e68bc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477e6962(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e6962 FUN_1477e6962 body=80 status=ok
// SIG undefined FUN_1477e6962(void)

float FUN_1477e6962(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_1478b168c(*(undefined8 *)(param_1 + 0x40));
  lVar1 = FUN_1477e6f66(param_1,param_2,1);
  if (lVar1 == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)FUN_1478b1666(lVar1);
  }
  return fVar2 + fVar3;
}



// FUNCTION 1477e69b8 FUN_1477e69b8 body=234 status=ok
// SIG undefined FUN_1477e69b8(void)

void FUN_1477e69b8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477e6aa4(param_1,local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e6aa4 FUN_1477e6aa4 body=99 status=ok
// SIG undefined FUN_1477e6aa4(void)

undefined8 FUN_1477e6aa4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  lVar2 = FUN_1477e70ac(param_1,&local_18);
  if (lVar2 != 0) {
    cVar1 = FUN_1477ddcc2(lVar2);
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e6b34 FUN_1477e6b34 body=151 status=ok
// SIG undefined FUN_1477e6b34(void)

void FUN_1477e6b34(longlong param_1,longlong param_2)

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
  *(bool *)(param_1 + 0x60) = local_1c != 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e6bd0 FUN_1477e6bd0 body=322 status=ok
// SIG undefined FUN_1477e6bd0(void)

void FUN_1477e6bd0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x30);
  if (DAT_14c76111c < iVar1 && 0 < DAT_14c76111c) {
    iVar5 = *(int *)(param_1 + 0x38);
    iVar7 = 0;
    iVar4 = DAT_14c76111c;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 8);
      if (lVar6 != 0) {
        if (*(longlong *)(lVar6 + 0x188) != 0) {
          FUN_1478b2422(lVar6,param_2);
          iVar5 = *(int *)(param_1 + 0x38);
          iVar4 = DAT_14c76111c;
        }
        iVar5 = iVar5 + 1;
        if (iVar5 == iVar1) {
          iVar5 = 0;
        }
        *(int *)(param_1 + 0x38) = iVar5;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  else {
    local_60 = (void *)0x0;
    pvVar2 = *(void **)(param_1 + 0x28);
    local_58 = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    else {
      FUN_1477edc8a(&local_60,iVar1);
      memcpy(local_60,pvVar2,(longlong)iVar1 << 3);
      pvVar2 = local_60;
      lVar6 = (longlong)local_58;
      if (lVar6 != 0) {
        lVar8 = 0;
        do {
          lVar3 = *(longlong *)((longlong)pvVar2 + lVar8);
          if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x188) != 0)) {
            FUN_1478b2422(lVar3,param_2);
          }
          lVar8 = lVar8 + 8;
        } while (lVar6 * 8 != lVar8);
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (local_60 != (void *)0x0) {
        FUN_1400020a8(local_60);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477e6d14 FUN_1477e6d14 body=72 status=ok
// SIG undefined FUN_1477e6d14(void)

void FUN_1477e6d14(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (param_2 != 0) {
    FUN_1477e6d5e(param_1 + 0x28,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e6d5e FUN_1477e6d5e body=156 status=ok
// SIG undefined FUN_1477e6d5e(void)

void FUN_1477e6d5e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        FUN_1477eddd4(param_1);
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return;
}



// FUNCTION 1477e6dfa FUN_1477e6dfa body=135 status=ok
// SIG undefined FUN_1477e6dfa(void)

void FUN_1477e6dfa(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_144a126be();
  FUN_141527869(&local_20,uVar1);
  FUN_1477e717c(*(longlong *)(param_1 + 0x50) + 0x70);
  FUN_1477e717c(*(longlong *)(param_1 + 0x50) + 0x80);
  if (local_20 != (undefined8 *)0x0) {
    if ((LPCRITICAL_SECTION)*local_20 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)*local_20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e6e94 FUN_1477e6e94 body=12 status=ok
// SIG undefined FUN_1477e6e94(void)

undefined8 FUN_1477e6e94(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  longlong lStack_18;
  ulonglong uStack_10;
  
  if (param_1 == 0) {
    return 0;
  }
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lStack_18 = FUN_145a6a5cc();
  if ((lStack_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lStack_18);
  }
  uVar1 = FUN_1477ede70(param_1 + 0x870,&lStack_18);
  if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e6ea0 FUN_1477e6ea0 body=103 status=ok
// SIG undefined FUN_1477e6ea0(void)

void FUN_1477e6ea0(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_145a6a5cc();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1477ede70(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e6f08 FUN_1477e6f08 body=94 status=ok
// SIG undefined FUN_1477e6f08(void)

void FUN_1477e6f08(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1477edebc(param_1,iVar2);
  }
  FUN_1477c98f8((longlong)iVar2 * 0x40 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1477e6f66 FUN_1477e6f66 body=175 status=ok
// SIG undefined FUN_1477e6f66(void)

longlong FUN_1477e6f66(longlong param_1,longlong *param_2,byte param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_2 + 0x180))(param_2);
  if ((lVar1 != 0) && (DAT_14cabbac0 == 0)) {
    lVar1 = FUN_144a7b302(lVar1);
    if ((lVar1 != 0 & param_3) != 0) {
      lVar1 = lVar1 + 0xa80;
      goto LAB_1477e6ff4;
    }
  }
  uVar2 = FUN_144a126be(param_1);
  FUN_141527869(&local_28,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (local_28 != (undefined8 *)0x0) {
    if ((LPCRITICAL_SECTION)*local_28 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)*local_28);
    }
    FUN_1400020a8(local_28);
  }
LAB_1477e6ff4:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e7016 FUN_1477e7016 body=148 status=ok
// SIG undefined FUN_1477e7016(void)

undefined8 FUN_1477e7016(undefined8 param_1)

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
  uVar1 = FUN_1410df16c();
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



// FUNCTION 1477e70ac FUN_1477e70ac body=206 status=ok
// SIG undefined FUN_1477e70ac(void)

longlong * FUN_1477e70ac(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_144a126be();
  FUN_141527869(&local_20,uVar1);
  lVar2 = *(longlong *)(param_1 + 0x50);
  if ((longlong)*(int *)(lVar2 + 0x88) != 0) {
    plVar4 = *(longlong **)(lVar2 + 0x80);
    lVar3 = (longlong)*(int *)(lVar2 + 0x88) * 0x28;
    do {
      if (*plVar4 == *param_2) {
        if (plVar4 != (longlong *)0x0) goto LAB_1477e7133;
        break;
      }
      plVar4 = plVar4 + 5;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  if ((longlong)*(int *)(lVar2 + 0x78) != 0) {
    plVar4 = *(longlong **)(lVar2 + 0x70);
    lVar2 = (longlong)*(int *)(lVar2 + 0x78) * 0x28;
    do {
      if (*plVar4 == *param_2) goto LAB_1477e7133;
      plVar4 = plVar4 + 5;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  plVar4 = (longlong *)0x0;
LAB_1477e7133:
  if (local_20 != (undefined8 *)0x0) {
    if ((LPCRITICAL_SECTION)*local_20 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)*local_20);
    }
    FUN_1400020a8(local_20);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 1477e717c FUN_1477e717c body=75 status=ok
// SIG undefined FUN_1477e717c(void)

void FUN_1477e717c(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (0 < (int)param_1[1]) {
    iVar2 = 0;
    do {
      cVar1 = FUN_1477ddcc2((longlong)iVar2 * 0x28 + *param_1);
      iVar3 = iVar2;
      if (cVar1 == '\0') {
        iVar3 = iVar2 + -1;
        FUN_1477edfd6(param_1,iVar2);
      }
      iVar2 = iVar3 + 1;
    } while (iVar2 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 1477e71c8 FUN_1477e71c8 body=38 status=ok
// SIG undefined FUN_1477e71c8(void)

undefined8 FUN_1477e71c8(undefined8 param_1,int param_2)

{
  FUN_14335982a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e71f8 FUN_1477e71f8 body=51 status=ok
// SIG undefined FUN_1477e71f8(void)

undefined8 FUN_1477e71f8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  return 0;
}



// FUNCTION 1477e722c FUN_1477e722c body=26 status=ok
// SIG undefined FUN_1477e722c(void)

undefined8 FUN_1477e722c(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x360))();
  return param_2;
}



// FUNCTION 1477e7254 FUN_1477e7254 body=56 status=ok
// SIG undefined FUN_1477e7254(void)

void FUN_1477e7254(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x0001477e7281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477e72ce FUN_1477e72ce body=45 status=ok
// SIG undefined FUN_1477e72ce(void)

longlong FUN_1477e72ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145821784(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e7300 FUN_1477e7300 body=100 status=ok
// SIG undefined FUN_1477e7300(void)

undefined8 FUN_1477e7300(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28,"SubmixEffectDynamicsProcessor");
  FUN_140233b1a(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e736c FUN_1477e736c body=68 status=ok
// SIG undefined FUN_1477e736c(void)

longlong * FUN_1477e736c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  plVar2 = (longlong *)FUN_1477ee060(param_2,uVar1,param_3,param_4);
  (**(code **)(*plVar2 + 0x2d0))(plVar2);
  return plVar2;
}



// FUNCTION 1477e73b0 FUN_1477e73b0 body=31 status=ok
// SIG undefined FUN_1477e73b0(void)

void FUN_1477e73b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1f0,0x10);
  FUN_1477dbaa6(uVar1);
  return;
}



// FUNCTION 1477e73d4 FUN_1477e73d4 body=60 status=ok
// SIG undefined FUN_1477e73d4(void)

void FUN_1477e73d4(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  FUN_1477e883c(param_1 + 0x90,param_1 + 0xf0);
                    /* WARNING: Could not recover jumptable at 0x0001477e7409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 1477e741a FUN_1477e741a body=38 status=ok
// SIG undefined FUN_1477e741a(void)

undefined8 FUN_1477e741a(undefined8 param_1,int param_2)

{
  FUN_1477dbd5a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e745c FUN_1477e745c body=100 status=ok
// SIG undefined FUN_1477e745c(void)

undefined8 FUN_1477e745c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28,"SubmixEffectSubmixEQ");
  FUN_140233b1a(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e74c8 FUN_1477e74c8 body=68 status=ok
// SIG undefined FUN_1477e74c8(void)

longlong * FUN_1477e74c8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  plVar2 = (longlong *)FUN_1477ee128(param_2,uVar1,param_3,param_4);
  (**(code **)(*plVar2 + 0x2d0))(plVar2);
  return plVar2;
}



// FUNCTION 1477e750c FUN_1477e750c body=31 status=ok
// SIG undefined FUN_1477e750c(void)

void FUN_1477e750c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x120,0x10);
  FUN_1477dca06(uVar1);
  return;
}



// FUNCTION 1477e7530 FUN_1477e7530 body=129 status=ok
// SIG undefined FUN_1477e7530(void)

void FUN_1477e7530(longlong param_1)

{
  int iVar1;
  void *_Src;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  iVar1 = *(int *)(param_1 + 0xa8);
  _Src = *(void **)(param_1 + 0xa0);
  *(int *)(param_1 + 0x98) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x9c) == 0) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
  }
  else {
    FUN_1477e8c40((undefined8 *)(param_1 + 0x90),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x90),_Src,(longlong)iVar1 << 4);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001477e7581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 1477e75b4 FUN_1477e75b4 body=38 status=ok
// SIG undefined FUN_1477e75b4(void)

undefined8 FUN_1477e75b4(undefined8 param_1,int param_2)

{
  FUN_1477ee1f0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e75e2 FUN_1477e75e2 body=100 status=ok
// SIG undefined FUN_1477e75e2(void)

undefined8 FUN_1477e75e2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400b22c2(local_28,"SubmixEffectReverb");
  FUN_140233b1a(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e764e FUN_1477e764e body=68 status=ok
// SIG undefined FUN_1477e764e(void)

longlong * FUN_1477e764e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  plVar2 = (longlong *)FUN_1477ee2ac(param_2,uVar1,param_3,param_4);
  (**(code **)(*plVar2 + 0x2d0))(plVar2);
  return plVar2;
}



// FUNCTION 1477e7692 FUN_1477e7692 body=31 status=ok
// SIG undefined FUN_1477e7692(void)

void FUN_1477e7692(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1d0,0x10);
  FUN_1477dd6cc(uVar1);
  return;
}



// FUNCTION 1477e76b6 FUN_1477e76b6 body=94 status=ok
// SIG undefined FUN_1477e76b6(void)

void FUN_1477e76b6(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xdc);
                    /* WARNING: Could not recover jumptable at 0x0001477e770d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 1477e7714 FUN_1477e7714 body=38 status=ok
// SIG undefined FUN_1477e7714(void)

undefined8 FUN_1477e7714(undefined8 param_1,int param_2)

{
  FUN_1477ee374();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e774e FUN_1477e774e body=38 status=ok
// SIG undefined FUN_1477e774e(void)

undefined8 FUN_1477e774e(undefined8 param_1,int param_2)

{
  FUN_1477de706();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e7788 FUN_1477e7788 body=45 status=ok
// SIG undefined FUN_1477e7788(void)

longlong FUN_1477e7788(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_1477de706(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e77b6 FUN_1477e77b6 body=45 status=ok
// SIG undefined FUN_1477e77b6(void)

longlong FUN_1477e77b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145df60fc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e77e4 FUN_1477e77e4 body=64 status=ok
// SIG undefined FUN_1477e77e4(void)

void FUN_1477e77e4(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x10))(param_2,param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001477e7821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x18);
  return;
}



// FUNCTION 1477e782a FUN_1477e782a body=45 status=ok
// SIG undefined FUN_1477e782a(void)

longlong FUN_1477e782a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_145df60fc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e7858 FUN_1477e7858 body=45 status=ok
// SIG undefined FUN_1477e7858(void)

longlong FUN_1477e7858(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145df60fc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e7886 FUN_1477e7886 body=45 status=ok
// SIG undefined FUN_1477e7886(void)

longlong FUN_1477e7886(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_145df60fc(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e78b4 FUN_1477e78b4 body=38 status=ok
// SIG undefined FUN_1477e78b4(void)

undefined8 FUN_1477e78b4(undefined8 param_1,int param_2)

{
  FUN_1477ed528();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e78f2 FUN_1477e78f2 body=38 status=ok
// SIG undefined FUN_1477e78f2(void)

undefined8 FUN_1477e78f2(undefined8 param_1,int param_2)

{
  FUN_1477ed956();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e7924 FUN_1477e7924 body=45 status=ok
// SIG undefined FUN_1477e7924(void)

longlong FUN_1477e7924(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_1458ec2a8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e7956 FUN_1477e7956 body=52 status=ok
// SIG undefined FUN_1477e7956(void)

void FUN_1477e7956(longlong *param_1)

{
  FUN_1477e798a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477e798a FUN_1477e798a body=310 status=ok
// SIG undefined FUN_1477e798a(void)

void FUN_1477e798a(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1477e7ac2(*local_68 + (longlong)iStack_4c * 0x40 + 0x10);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e7ac2 FUN_1477e7ac2 body=99 status=ok
// SIG undefined FUN_1477e7ac2(void)

void FUN_1477e7ac2(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477e7b1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1477e7b26 FUN_1477e7b26 body=52 status=ok
// SIG undefined FUN_1477e7b26(void)

void FUN_1477e7b26(longlong *param_1)

{
  FUN_1477e7b5a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477e7b5a FUN_1477e7b5a body=311 status=ok
// SIG undefined FUN_1477e7b5a(void)

void FUN_1477e7b5a(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_145be9032(*local_68 + (longlong)iStack_4c * 0x28 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e7c92 FUN_1477e7c92 body=71 status=ok
// SIG undefined FUN_1477e7c92(void)

void FUN_1477e7c92(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      puVar1 = (undefined8 *)plVar2[-1];
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar2 = plVar2 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1477e7cda FUN_1477e7cda body=52 status=ok
// SIG undefined FUN_1477e7cda(void)

void FUN_1477e7cda(longlong *param_1)

{
  FUN_1477e7d0e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477e7d0e FUN_1477e7d0e body=89 status=ok
// SIG undefined FUN_1477e7d0e(void)

void FUN_1477e7d0e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1477e7d68 FUN_1477e7d68 body=52 status=ok
// SIG undefined FUN_1477e7d68(void)

void FUN_1477e7d68(longlong *param_1)

{
  FUN_1477e7d9c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477e7d9c FUN_1477e7d9c body=310 status=ok
// SIG undefined FUN_1477e7d9c(void)

void FUN_1477e7d9c(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1477e7ed4(*local_68 + (longlong)iStack_4c * 0x38 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e7ed4 FUN_1477e7ed4 body=99 status=ok
// SIG undefined FUN_1477e7ed4(void)

void FUN_1477e7ed4(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001477e7f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1477e7f38 FUN_1477e7f38 body=88 status=ok
// SIG undefined FUN_1477e7f38(void)

undefined8 * FUN_1477e7f38(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1477c9730(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1477e7f90 FUN_1477e7f90 body=95 status=ok
// SIG undefined FUN_1477e7f90(void)

undefined8 * FUN_1477e7f90(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145821b84(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477e8036(param_1,iVar1);
      FUN_1477e80a8(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477e7ff0 FUN_1477e7ff0 body=69 status=ok
// SIG undefined FUN_1477e7ff0(void)

longlong FUN_1477e7ff0(longlong param_1,longlong param_2)

{
  FUN_1477e8160();
  FUN_1477e81b0(param_1 + 0x10,param_2 + 0x10);
  FUN_1477e8200(param_1 + 0x20,param_2 + 0x20);
  FUN_1477e8250(param_1 + 0x30,param_2 + 0x30);
  return param_1;
}



// FUNCTION 1477e8036 FUN_1477e8036 body=114 status=ok
// SIG undefined FUN_1477e8036(void)

void FUN_1477e8036(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,8);
    iVar2 = (int)(uVar1 / 0xb0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477e80a8 FUN_1477e80a8 body=60 status=ok
// SIG undefined FUN_1477e80a8(void)

void FUN_1477e80a8(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1477e80e4(param_1,param_2);
    param_1 = param_1 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return;
}



// FUNCTION 1477e80e4 FUN_1477e80e4 body=123 status=ok
// SIG undefined FUN_1477e80e4(void)

undefined1 * FUN_1477e80e4(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  FUN_140501b78(param_1 + 0x28,param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0xa8);
  *(longlong *)(param_1 + 0xa8) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1477e8160 FUN_1477e8160 body=79 status=ok
// SIG undefined FUN_1477e8160(void)

undefined8 * FUN_1477e8160(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477e82a0(param_1,iVar1);
      FUN_1477e8302(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477e81b0 FUN_1477e81b0 body=79 status=ok
// SIG undefined FUN_1477e81b0(void)

undefined8 * FUN_1477e81b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477e8354(param_1,iVar1);
      FUN_1477e83b6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477e8200 FUN_1477e8200 body=79 status=ok
// SIG undefined FUN_1477e8200(void)

undefined8 * FUN_1477e8200(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477e8408(param_1,iVar1);
      FUN_1477e846a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477e8250 FUN_1477e8250 body=79 status=ok
// SIG undefined FUN_1477e8250(void)

undefined8 * FUN_1477e8250(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1477e84bc(param_1,iVar1);
      FUN_1477e851e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1477e82a0 FUN_1477e82a0 body=98 status=ok
// SIG undefined FUN_1477e82a0(void)

void FUN_1477e82a0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477e8302 FUN_1477e8302 body=82 status=ok
// SIG undefined FUN_1477e8302(void)

void FUN_1477e8302(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1477e8354 FUN_1477e8354 body=98 status=ok
// SIG undefined FUN_1477e8354(void)

void FUN_1477e8354(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477e83b6 FUN_1477e83b6 body=82 status=ok
// SIG undefined FUN_1477e83b6(void)

void FUN_1477e83b6(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1477e8408 FUN_1477e8408 body=98 status=ok
// SIG undefined FUN_1477e8408(void)

void FUN_1477e8408(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477e846a FUN_1477e846a body=82 status=ok
// SIG undefined FUN_1477e846a(void)

void FUN_1477e846a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1477e84bc FUN_1477e84bc body=98 status=ok
// SIG undefined FUN_1477e84bc(void)

void FUN_1477e84bc(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477e851e FUN_1477e851e body=82 status=ok
// SIG undefined FUN_1477e851e(void)

void FUN_1477e851e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 1477e8570 FUN_1477e8570 body=135 status=ok
// SIG undefined FUN_1477e8570(void)

undefined4 * FUN_1477e8570(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_1477ce3e2(param_1 + 2,param_2 + 2);
  param_1[0x16] = param_2[0x16];
  FUN_1477ce3e2(param_1 + 0x18,param_2 + 0x18);
  param_1[0x2c] = param_2[0x2c];
  FUN_1477ce3e2(param_1 + 0x2e,param_2 + 0x2e);
  param_1[0x42] = param_2[0x42];
  FUN_1477ce3e2(param_1 + 0x44,param_2 + 0x44);
  return param_1;
}



// FUNCTION 1477e8674 FUN_1477e8674 body=59 status=ok
// SIG undefined FUN_1477e8674(void)

undefined8 FUN_1477e8674(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e873e FUN_1477e873e body=54 status=ok
// SIG undefined FUN_1477e873e(void)

undefined1 FUN_1477e873e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1477e883c(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1477e879c FUN_1477e879c body=59 status=ok
// SIG undefined FUN_1477e879c(void)

undefined8 FUN_1477e879c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e883c FUN_1477e883c body=136 status=ok
// SIG undefined FUN_1477e883c(void)

undefined4 * FUN_1477e883c(undefined4 *param_1,undefined4 *param_2)

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
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  lVar12 = *(longlong *)(param_2 + 10);
  if (DAT_14c950c29 == 1) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 10);
    }
  }
  bVar11 = DAT_14c950c29;
  *(longlong *)(param_1 + 10) = lVar12;
  lVar12 = *(longlong *)(param_2 + 0xc);
  if ((bVar11 & 1) != 0) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0xc);
    }
  }
  *(longlong *)(param_1 + 0xc) = lVar12;
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  uVar9 = *(undefined8 *)(param_2 + 0x12);
  uVar10 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = uVar8;
  *(undefined8 *)(param_1 + 0x12) = uVar9;
  *(undefined8 *)(param_1 + 0x14) = uVar10;
  param_1[0x16] = param_2[0x16];
  return param_1;
}



// FUNCTION 1477e88c8 FUN_1477e88c8 body=77 status=ok
// SIG undefined FUN_1477e88c8(void)

void FUN_1477e88c8(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    if (puVar1[2] != 0) {
      plVar2 = puVar1 + 6;
      if ((longlong *)puVar1[4] != (longlong *)0x0) {
        plVar2 = (longlong *)puVar1[4];
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 1477e8916 FUN_1477e8916 body=38 status=ok
// SIG undefined FUN_1477e8916(void)

undefined8 FUN_1477e8916(undefined8 param_1,int param_2)

{
  FUN_1477dbe24();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477e893c FUN_1477e893c body=132 status=ok
// SIG undefined FUN_1477e893c(void)

undefined4 * FUN_1477e893c(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  lVar1 = *(longlong *)(param_2 + 10);
  *(longlong *)(param_1 + 10) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar12 = DAT_14c950c29;
  lVar1 = *(longlong *)(param_2 + 0xc);
  *(longlong *)(param_1 + 0xc) = lVar1;
  if ((lVar1 != 0 & bVar12) == 1) {
    FUN_1456cec3c();
  }
  param_1[0x16] = param_2[0x16];
  uVar9 = *(undefined8 *)(param_2 + 0xe);
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = uVar11;
  *(undefined8 *)(param_1 + 0xe) = uVar9;
  *(undefined8 *)(param_1 + 0x10) = uVar10;
  return param_1;
}



// FUNCTION 1477e8a50 FUN_1477e8a50 body=59 status=ok
// SIG undefined FUN_1477e8a50(void)

undefined8 FUN_1477e8a50(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e8b26 FUN_1477e8b26 body=54 status=ok
// SIG undefined FUN_1477e8b26(void)

undefined1 FUN_1477e8b26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1477e8ca2(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1477e8b84 FUN_1477e8b84 body=59 status=ok
// SIG undefined FUN_1477e8b84(void)

undefined8 FUN_1477e8b84(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e8bca FUN_1477e8bca body=37 status=ok
// SIG undefined FUN_1477e8bca(void)

void FUN_1477e8bca(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1477e8c40 FUN_1477e8c40 body=98 status=ok
// SIG undefined FUN_1477e8c40(void)

void FUN_1477e8c40(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1477e8ca2 FUN_1477e8ca2 body=88 status=ok
// SIG undefined FUN_1477e8ca2(void)

undefined8 * FUN_1477e8ca2(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1477e8c40(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1477e8df4 FUN_1477e8df4 body=59 status=ok
// SIG undefined FUN_1477e8df4(void)

undefined8 FUN_1477e8df4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e8e96 FUN_1477e8e96 body=159 status=ok
// SIG undefined FUN_1477e8e96(void)

undefined8 * FUN_1477e8e96(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  
  if (param_2 == param_1) goto LAB_1477e8ecd;
  if (*(char *)(param_2 + 1) == '\x01') {
    *param_1 = *param_2;
    uVar9 = 1;
LAB_1477e8eb8:
    *(undefined1 *)(param_1 + 1) = uVar9;
  }
  else if (*(char *)(param_1 + 1) == '\x01') {
    uVar9 = 0;
    goto LAB_1477e8eb8;
  }
  if (*(char *)(param_2 + 4) == '\x01') {
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar7 = *(undefined4 *)(param_2 + 3);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
    *(undefined4 *)(param_1 + 3) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
LAB_1477e8ecd:
  uVar3 = param_2[5];
  lVar4 = param_2[6];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[6];
  param_1[5] = uVar3;
  param_1[6] = lVar4;
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
  param_1[7] = param_2[7];
  return param_1;
}



// FUNCTION 1477e8f36 FUN_1477e8f36 body=110 status=ok
// SIG undefined FUN_1477e8f36(void)

undefined8 * FUN_1477e8f36(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  cVar1 = *(char *)(param_2 + 1);
  *(char *)(param_1 + 1) = cVar1;
  if (cVar1 == '\x01') {
    *param_1 = *param_2;
  }
  cVar1 = *(char *)(param_2 + 4);
  *(char *)(param_1 + 4) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar4 = *(undefined4 *)(param_2 + 3);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  }
  param_1[5] = param_2[5];
  lVar2 = param_2[6];
  param_1[6] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[7] = param_2[7];
  FUN_1477cb53e(param_1 + 8,param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  return param_1;
}



// FUNCTION 1477e8fa4 FUN_1477e8fa4 body=47 status=ok
// SIG undefined FUN_1477e8fa4(void)

void FUN_1477e8fa4(longlong param_1)

{
  FUN_1477c9821(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1477c9848(param_1);
  return;
}



// FUNCTION 1477e8fd4 FUN_1477e8fd4 body=322 status=ok
// SIG undefined FUN_1477e8fd4(void)

void FUN_1477e8fd4(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 1477e9118 FUN_1477e9118 body=282 status=ok
// SIG undefined FUN_1477e9118(void)

void FUN_1477e9118(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_1477e7ac2(*local_60 + (longlong)iStack_44 * 0x40 + 0x10);
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140b7ce44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e9234 FUN_1477e9234 body=120 status=ok
// SIG undefined FUN_1477e9234(void)

longlong FUN_1477e9234(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1477e92ae();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_1477e9308(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x40 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 0x10;
}



// FUNCTION 1477e92ae FUN_1477e92ae body=90 status=ok
// SIG undefined FUN_1477e92ae(void)

longlong FUN_1477e92ae(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x40;
        if ((*(longlong *)(lVar1 + lVar4) == *param_3) &&
           (*(int *)(lVar1 + 8 + lVar4) == (int)param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x38);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477e9308 FUN_1477e9308 body=329 status=ok
// SIG undefined FUN_1477e9308(void)

undefined4 * FUN_1477e9308(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined4 local_70 [2];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1477e9452(param_1,local_70);
  local_40 = 0;
  puVar1 = (undefined8 *)*param_4;
  *(undefined4 *)(local_68 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_68 = *puVar1;
  local_68[2] = 0;
  local_60 = 0;
  local_68[3] = 0;
  local_58 = 0;
  local_68[4] = 0;
  local_50 = 0;
  local_68[5] = 0;
  local_48 = 0;
  *(undefined1 *)(local_68 + 6) = 0;
  FUN_1477e7ac2();
  *(undefined4 *)(local_68 + 7) = 0xffffffff;
  cVar2 = FUN_1477e9538(param_1,param_3,local_68,local_70);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_68 + 0x3c) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_68 + 7) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_70[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1477e9660(param_1);
    }
  }
  *param_2 = local_70[0];
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e9452 FUN_1477e9452 body=229 status=ok
// SIG undefined FUN_1477e9452(void)

int * FUN_1477e9452(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1477e9538 FUN_1477e9538 body=182 status=ok
// SIG undefined FUN_1477e9538(void)

undefined8 FUN_1477e9538(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      lVar2 = *param_1;
      do {
        lVar15 = (longlong)iVar14 * 0x40;
        puVar1 = (undefined4 *)(lVar2 + lVar15);
        if ((*(longlong *)(lVar2 + lVar15) == *param_3) &&
           (*(int *)(lVar2 + 8 + lVar15) == (int)param_3[1])) {
          FUN_1477e7ac2(puVar1 + 4);
          lVar2 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar15 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar9 = param_3[2];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar10 = param_3[3];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar11 = param_3[4];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar12 = param_3[5];
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x2c);
          *(longlong *)(puVar1 + 0xc) = param_3[6];
          puVar1[8] = (int)lVar11;
          puVar1[9] = uVar7;
          puVar1[10] = (int)lVar12;
          puVar1[0xb] = uVar8;
          puVar1[4] = (int)lVar9;
          puVar1[5] = uVar5;
          puVar1[6] = (int)lVar10;
          puVar1[7] = uVar6;
          *puVar1 = (int)lVar2;
          puVar1[1] = uVar3;
          puVar1[2] = (int)lVar15;
          puVar1[3] = uVar4;
          FUN_1477e95ee(param_1,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = puVar1[0xe];
      } while (iVar14 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477e95ee FUN_1477e95ee body=114 status=ok
// SIG undefined FUN_1477e95ee(void)

void FUN_1477e95ee(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 1477e9660 FUN_1477e9660 body=450 status=ok
// SIG undefined FUN_1477e9660(void)

void FUN_1477e9660(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
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
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x40;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + 8 + lVar10),
                              *(undefined4 *)(lVar3 + 4 + lVar10));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x3c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
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



// FUNCTION 1477e9824 FUN_1477e9824 body=322 status=ok
// SIG undefined FUN_1477e9824(void)

void FUN_1477e9824(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 1477e9968 FUN_1477e9968 body=292 status=ok
// SIG undefined FUN_1477e9968(void)

void FUN_1477e9968(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      plVar2 = *(longlong **)(*local_60 + 0x10 + (longlong)iStack_44 * 0x38);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e9a8e FUN_1477e9a8e body=319 status=ok
// SIG undefined FUN_1477e9a8e(void)

undefined4 * FUN_1477e9a8e(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1477e9bce(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar7 = *(uint *)*param_3;
  *local_38 = uVar7;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar10 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
    UNLOCK();
    uVar7 = *local_38;
  }
  *(undefined8 *)(local_38 + 10) = puVar1[4];
  uVar6 = *(uint *)((longlong)puVar1 + 0x14);
  uVar2 = *(uint *)(puVar1 + 3);
  uVar3 = *(uint *)((longlong)puVar1 + 0x1c);
  local_38[6] = *(uint *)(puVar1 + 2);
  local_38[7] = uVar6;
  local_38[8] = uVar2;
  local_38[9] = uVar3;
  local_38[0xc] = 0xffffffff;
  local_44 = local_40[0];
  cVar5 = FUN_1477e9cb0(param_1,uVar7,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      local_38[0xd] = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_38[0xc] =
           *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1477e9dd4(param_1);
    }
  }
  *param_2 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477e9bce FUN_1477e9bce body=226 status=ok
// SIG undefined FUN_1477e9bce(void)

int * FUN_1477e9bce(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1477e9cb0 FUN_1477e9cb0 body=176 status=ok
// SIG undefined FUN_1477e9cb0(void)

undefined8 FUN_1477e9cb0(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        piVar2 = (int *)(*param_1 + (longlong)iVar15 * 0x38);
        if (*(int *)(*param_1 + (longlong)iVar15 * 0x38) == *param_3) {
          plVar14 = *(longlong **)(piVar2 + 4);
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar14 + 0x10))();
            }
          }
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          iVar7 = param_3[4];
          iVar8 = param_3[5];
          iVar9 = param_3[6];
          iVar10 = param_3[7];
          iVar11 = param_3[9];
          iVar12 = param_3[10];
          iVar13 = param_3[0xb];
          piVar2[8] = param_3[8];
          piVar2[9] = iVar11;
          piVar2[10] = iVar12;
          piVar2[0xb] = iVar13;
          piVar2[4] = iVar7;
          piVar2[5] = iVar8;
          piVar2[6] = iVar9;
          piVar2[7] = iVar10;
          *piVar2 = iVar3;
          piVar2[1] = iVar4;
          piVar2[2] = iVar5;
          piVar2[3] = iVar6;
          FUN_1477e9d60(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = piVar2[0xc];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477e9d60 FUN_1477e9d60 body=116 status=ok
// SIG undefined FUN_1477e9d60(void)

void FUN_1477e9d60(longlong *param_1,int param_2)

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



// FUNCTION 1477e9dd4 FUN_1477e9dd4 body=419 status=ok
// SIG undefined FUN_1477e9dd4(void)

void FUN_1477e9dd4(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x38;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x34 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar7) =
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



// FUNCTION 1477e9f78 FUN_1477e9f78 body=81 status=ok
// SIG undefined FUN_1477e9f78(void)

void FUN_1477e9f78(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x38) == param_2) {
          FUN_1477e9fca(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + *param_1 + 0x30);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1477e9fca FUN_1477e9fca body=87 status=ok
// SIG undefined FUN_1477e9fca(void)

void FUN_1477e9fca(longlong *param_1,int param_2)

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
  FUN_1477ea022();
  return;
}


