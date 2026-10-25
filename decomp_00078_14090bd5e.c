// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14090bd5e FUN_14090bd5e body=406 status=ok
// SIG undefined FUN_14090bd5e(void)

undefined8 * FUN_14090bd5e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_1400f3bfc();
  *param_1 = &PTR_FUN_14a632b50;
  param_1[5] = &PTR_FUN_14a633740;
  param_1[6] = &PTR_FUN_14a633780;
  param_1[0x55] = &PTR_FUN_14a6337d0;
  param_1[0x56] = &PTR_FUN_14a633850;
  param_1[0x57] = &PTR_FUN_14a633860;
  param_1[0xe3] = &PTR_FUN_14a633890;
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[0x162] = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14a3a6e70;
  puVar2[2] = puVar1;
  param_1[0x163] = puVar2;
  *(byte *)(param_1 + 0x164) = *(byte *)(param_1 + 0x164) & 0xfe;
  *(undefined1 *)(param_1 + 0x171) = 0;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x168] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  *(undefined1 *)(param_1 + 0x178) = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x17b) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0xbdc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(byte *)((longlong)param_1 + 0xc24) = *(byte *)((longlong)param_1 + 0xc24) & 0xf0 | 8;
  *(undefined1 *)(param_1 + 0x18b) = 0;
  param_1[0x192] = 0;
  *(undefined4 *)(param_1 + 0x193) = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xc9c) = 4;
  *(undefined1 *)(param_1 + 0x194) = 2;
  if (*(char *)((longlong)param_1 + 0x95c) != '\x01') {
    FUN_14062aa18(param_1 + 0x118,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x95c) = 1;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 0x80;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xef;
  return param_1;
}



// FUNCTION 14090bf02 FUN_14090bf02 body=85 status=ok
// SIG undefined FUN_14090bf02(void)

undefined8 * FUN_14090bf02(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6736a0;
  plVar3 = (longlong *)param_1[9];
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



// FUNCTION 14090bf60 FUN_14090bf60 body=244 status=ok
// SIG undefined FUN_14090bf60(void)

undefined8 FUN_14090bf60(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((*(byte *)(param_2 + 5) & 4) != 0) && ((longlong)*(int *)(param_1 + 0x40) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    lVar3 = (longlong)*(int *)(param_1 + 0x40) * 0x10 + lVar2;
    do {
      (**(code **)(*param_2 + 0x210))(param_2,lVar2,lVar2 + 8);
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != lVar3);
  }
  if ((*(byte *)((longlong)param_2 + 0x2b) & 2) != 0) {
    if ((longlong)*(int *)(param_1 + 0x50) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      lVar3 = (longlong)*(int *)(param_1 + 0x50) * 0x18;
      do {
        (**(code **)(*param_2 + 0x250))(param_2,lVar2);
        lVar2 = lVar2 + 0x18;
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x60) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x58);
      lVar3 = (longlong)*(int *)(param_1 + 0x60) * 0x18;
      do {
        (**(code **)(*param_2 + 600))(param_2,lVar2);
        lVar2 = lVar2 + 0x18;
        lVar3 = lVar3 + -0x18;
      } while (lVar3 != 0);
    }
  }
  if ((((*(byte *)(param_2 + 5) & 1) != 0) && ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0)) &&
     ((*(byte *)((longlong)param_2 + 0x36) & 0x40) == 0)) {
    *(longlong *)(param_1 + 0x6c) = param_2[8];
    *(undefined1 *)(param_1 + 0x74) = 1;
    uVar1 = (**(code **)(*param_2 + 0x58))(param_2);
    FUN_140670b3c(param_1 + 0x78,uVar1);
  }
  return 0;
}



// FUNCTION 14090c054 FUN_14090c054 body=415 status=ok
// SIG undefined FUN_14090c054(void)

undefined8 FUN_14090c054(undefined4 param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  uVar6 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97070) {
    FUN_144b3d300(&DAT_14ca97070);
    if (DAT_14ca97070 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
  }
  lVar1 = DAT_14ca97068;
  bVar7 = true;
  cVar2 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
      cVar2 = '\x02';
    }
    else {
      uVar5 = FUN_144a61b4f();
      uVar5 = (uVar5 ^ 1) & 0xff;
      cVar2 = DAT_14ca96da8;
    }
    bVar7 = *(int *)(lVar1 + uVar5 * 4) != 0;
  }
  if (((((bVar7) && (cVar2 != '\0')) &&
       ((*(byte *)((longlong)&DAT_14ca814c8 + uVar6 * 0x3c + 2) & 0x40) != 0)) &&
      ((uVar6 == 0x30 || (3 < (int)(&DAT_14ca814b8)[uVar6 * 0xf])))) &&
     ((*(char *)(param_3 + 0x3098) == '\x01' &&
      ((*(char *)(param_3 + 0x23e8) != '\x01' || (*(char *)(param_3 + 0x23ea) == '\x01')))))) {
    uVar4 = FUN_142bc01ba(param_1,param_2);
    return uVar4;
  }
  return 0;
}



// FUNCTION 14090c20c FUN_14090c20c body=970 status=ok
// SIG undefined FUN_14090c20c(void)

void FUN_14090c20c(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined1 local_5c [4];
  longlong local_58;
  longlong *local_50;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 300) < 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    FUN_14791bb40(param_1 + 0x100,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a442840;
  InitializeSRWLock((PSRWLOCK)(plVar4 + 2));
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe08) = 0x10;
    plVar8 = *(longlong **)(param_1 + 0xe10);
    if (plVar8 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xe10) = 0;
LAB_14090c2c6:
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
      if (plVar4 != (longlong *)0x0) goto LAB_14090c30b;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(PSRWLOCK *)(param_1 + 0xe08) = (PSRWLOCK)(plVar4 + 2);
    plVar8 = *(longlong **)(param_1 + 0xe10);
    if (plVar4 == plVar8) {
      LOCK();
      plVar8 = plVar4 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
      *(longlong **)(param_1 + 0xe10) = plVar4;
      if (plVar8 != (longlong *)0x0) goto LAB_14090c2c6;
    }
LAB_14090c30b:
    LOCK();
    plVar8 = plVar4 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if (param_2 != 0) {
    local_58 = param_1 + 0xad0;
    local_50 = &local_68;
    local_68 = param_1;
    FUN_140a217ae(param_2 + 0x7f8,local_5c,&local_58,0);
  }
  plVar4 = (longlong *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < 0) {
    FUN_14179bb54(plVar4,0);
  }
  FUN_140554dd8(plVar4,6);
  puVar5 = (undefined8 *)(param_1 + 0x2c0);
  lVar7 = 0x10;
  iVar9 = 1;
  do {
    puVar5[-0x1b] = 0;
    *puVar5 = 0;
    *(int *)(puVar5 + -0x2c) = iVar9;
    *(undefined8 **)(*plVar4 + lVar7) = puVar5 + -0x2f;
    puVar5 = puVar5 + 0x3d;
    lVar7 = lVar7 + 0x10;
    iVar9 = iVar9 + 1;
  } while (lVar7 != 0x60);
  local_38 = 0;
  FUN_1403201ee(param_1,0);
  if ((param_3 == 0) || (lVar7 = *(longlong *)(param_3 + 0x20), lVar7 == 0)) goto LAB_14090c50f;
  plVar4 = *(longlong **)(lVar7 + 0x658);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar7 + 0x660);
    if ((DAT_14c950c29 & plVar4 != (longlong *)0x0) != 0) goto LAB_14090c5a8;
    if (plVar4 == (longlong *)0x0) goto LAB_14090c50f;
LAB_14090c54e:
    plVar4 = *(longlong **)(lVar7 + 0x660);
    if ((DAT_14c950c29 & plVar4 != (longlong *)0x0) != 0) {
LAB_14090c5ca:
      FUN_1456cec3c(plVar4);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_14090c5a8:
    FUN_1456cec3c(plVar4);
    plVar4 = *(longlong **)(lVar7 + 0x658);
    if (plVar4 == (longlong *)0x0) goto LAB_14090c54e;
    if ((DAT_14c950c29 & 1) == 0) goto LAB_14090c414;
    goto LAB_14090c5ca;
  }
LAB_14090c414:
  lVar6 = (**(code **)(*plVar4 + 0x3f8))(plVar4);
  if (lVar6 == 0) goto LAB_14090c50f;
  plVar4 = *(longlong **)(lVar7 + 0x658);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = *(longlong **)(lVar7 + 0x660);
    if ((DAT_14c950c29 & plVar4 != (longlong *)0x0) != 0) goto LAB_14090c57e;
  }
  else if (DAT_14c950c29 == 1) {
LAB_14090c57e:
    FUN_1456cec3c(plVar4);
  }
  lVar7 = (**(code **)(*plVar4 + 0x3f8))(plVar4);
  if (*(int *)(lVar7 + 0x290) != *(int *)(lVar7 + 700)) {
    lVar6 = *(longlong *)(param_1 + 0xad0);
    uVar3 = (uint)((ulonglong)lVar6 >> 0x10);
    uVar11 = (uint)lVar6 & 0xffff;
    lVar10 = lVar7 + 0x2c0;
    if (*(longlong *)(lVar7 + 0x2c8) != 0) {
      lVar10 = *(longlong *)(lVar7 + 0x2c8);
    }
    iVar9 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(lVar7 + 0x2d0) - 1U &
                              (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar11) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar9 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(lVar7 + 0x288) + (longlong)iVar9 * 0x18);
        if (*plVar4 == lVar6) goto LAB_14090c4ec;
        iVar9 = (int)plVar4[2];
      } while (iVar9 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_14090c4ec:
  plVar8 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  plVar4 = &DAT_14cacd708;
  if (plVar8 != (longlong *)0x0) {
    plVar4 = plVar8;
  }
  *(longlong *)(param_1 + 0xad8) = *plVar4;
LAB_14090c50f:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14090c5d8 FUN_14090c5d8 body=73 status=ok
// SIG undefined FUN_14090c5d8(void)

undefined8 FUN_14090c5d8(longlong param_1)

{
  undefined8 uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x70);
  if ((bVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_14090c622(param_1);
    uVar1 = FUN_14081c12a();
    bVar2 = *(byte *)(param_1 + 0x70) & 0xfe | (byte)uVar1;
  }
  *(byte *)(param_1 + 0x70) = (bVar2 & 0xfd | bVar2 * '\x02' & 2) ^ 2;
  return uVar1;
}



// FUNCTION 14090c622 FUN_14090c622 body=182 status=ok
// SIG undefined FUN_14090c622(void)

void FUN_14090c622(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(int *)(param_1 + 0x24) != 0) && (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x24))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && ((longlong *)*plVar3 != (longlong *)0x0)))) {
      lVar2 = (**(code **)(*(longlong *)*plVar3 + 0x180))();
      if (lVar2 != 0) {
        dVar4 = *(double *)(lVar2 + 0x6d0);
        goto LAB_14090c693;
      }
    }
  }
  QueryPerformanceCounter(&local_18);
  dVar4 = (double)local_18.QuadPart * DAT_14c83f420 + 16777216.0;
LAB_14090c693:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(CONCAT44((int)((ulonglong)dVar4 >> 0x20),(float)dVar4));
}



// FUNCTION 14090c6da FUN_14090c6da body=205 status=ok
// SIG undefined FUN_14090c6da(void)

void FUN_14090c6da(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        lVar7 = (longlong)iVar6 * 0x120;
        lVar1 = lVar2 + lVar7;
        if (*(longlong *)(lVar2 + lVar7) == param_2) {
          iVar5 = *(int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x114) * 4);
          if (iVar5 == iVar6) {
            piVar4 = (int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x114) * 4);
          }
          else {
            do {
              piVar4 = (int *)((longlong)iVar5 * 0x120 + lVar2 + 0x110);
              iVar5 = *piVar4;
            } while (iVar5 != iVar6);
          }
          *piVar4 = *(int *)(lVar1 + 0x110);
          FUN_140bda2d0(*param_1 + lVar7 + 0x10);
          FUN_14090c7a8(param_1,iVar6);
          return;
        }
        iVar6 = *(int *)(lVar1 + 0x110);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 14090c7a8 FUN_14090c7a8 body=122 status=ok
// SIG undefined FUN_14090c7a8(void)

void FUN_14090c7a8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x120) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x120) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x120 + 4) = uVar4;
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



// FUNCTION 14090c822 FUN_14090c822 body=180 status=ok
// SIG undefined FUN_14090c822(void)

void FUN_14090c822(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                  undefined1 param_9,undefined4 param_10,undefined4 param_11)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  
  *(undefined8 *)(param_1 + 0x28) = param_4;
  FUN_14090d5ba(param_1 + 0x30,param_2,param_3,param_4,param_5,param_6,param_7);
  *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xe0) = param_8;
  lVar1 = *(longlong *)(param_1 + 0x30);
  *(undefined4 *)(lVar1 + 0xec) = param_10;
  *(undefined4 *)(lVar1 + 0xf0) = param_11;
  FUN_14090c8d6(*(undefined8 *)(param_1 + 0x30),
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_9) & 0xffffffff);
  uVar2 = FUN_1400bd118(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  FUN_14090c93a(param_1);
  return;
}



// FUNCTION 14090c8d6 FUN_14090c8d6 body=99 status=ok
// SIG undefined FUN_14090c8d6(void)

void FUN_14090c8d6(longlong param_1,char param_2)

{
  FUN_140336cb8(param_1,0);
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    FUN_14005a35e(param_1,1);
  }
  *(byte *)(param_1 + 0x790) = *(byte *)(param_1 + 0x790) & 0xf7 | param_2 << 3;
  *(undefined1 **)(param_1 + 0x868) = &DAT_100000001;
  *(byte *)(param_1 + 0x798) = *(byte *)(param_1 + 0x798) & 0xdf;
  FUN_14090ddfa(param_1,2);
  return;
}



// FUNCTION 14090c93a FUN_14090c93a body=1085 status=ok
// SIG undefined FUN_14090c93a(void)

void FUN_14090c93a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  int local_a4;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_88 = 0;
  uStack_80 = 0;
  lVar8 = *(longlong *)(param_1 + 0x30);
  if ((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x110))) {
    lVar10 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(lVar8 + 0x108) + lVar10 * 0x10);
      (**(code **)(*plVar2 + 0x78))(plVar2,&local_78);
      if ((longlong)(int)uStack_70 != 0) {
        plVar12 = local_78 + (int)uStack_70;
        plVar13 = local_78;
        do {
          plVar3 = (longlong *)*plVar13;
          if ((plVar3 != (longlong *)0x0) &&
             (cVar5 = (**(code **)(*plVar3 + 0x308))(plVar3), cVar5 != '\0')) {
            cVar5 = (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined1 *)((longlong)plVar2 + 0xd1));
            if ((cVar5 != '\0') && (cVar5 = (**(code **)(*plVar3 + 800))(plVar3), cVar5 != '\0')) {
              local_78 = (longlong *)0x0;
              uStack_70 = 0;
              local_a0 = param_1;
              (**(code **)(*plVar3 + 0x2b0))(plVar3,plVar2,&local_78);
              if ((longlong)(int)uStack_70 != 0) {
                local_98 = local_78 + (int)uStack_70;
                iVar6 = 0;
                plVar14 = local_78;
                local_90 = plVar12;
                do {
                  lVar8 = *plVar14;
                  if (lVar8 == 0) {
LAB_14090cb52:
                    iVar6 = iVar6 + 1;
                  }
                  else {
                    local_a4 = iVar6;
                    if (DAT_14caec470 == 0) {
                      local_c0 = &local_68;
                      local_68 = FUN_1417df956;
                      local_b0 = FUN_14081d0ea;
                      local_b8 = &LAB_1463eaa20;
                      local_c8 = &LAB_147bbd9ea;
                      local_d0 = FUN_1401cf6d7;
                      local_d8 = L"Engine";
                      local_e0 = 0;
                      local_e8 = 0x10000000;
                      local_f0 = 8;
                      local_f8 = 0x330;
                      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,
                                    FUN_1463eb22e);
                    }
                    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) <
                         *(int *)(DAT_14caec470 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                         (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) {
LAB_14090cac5:
                      lVar8 = FUN_14090ceee(*plVar14,0,0);
                      *plVar14 = lVar8;
                      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
                        FUN_1456cec3c(lVar8);
                      }
                      uVar4 = uStack_80;
                      lVar11 = (longlong)(int)uStack_80;
                      uVar7 = (int)uStack_80 + 1;
                      uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
                      if (uStack_80._4_4_ < uVar7) {
                        FUN_14090cd78(&local_88,uVar4 & 0xffffffff);
                      }
                      lVar1 = local_88;
                      *(longlong *)(local_88 + lVar11 * 0x18) = lVar8;
                      if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
                        FUN_1456cec3c(lVar8);
                      }
                      lVar1 = lVar1 + lVar11 * 0x18;
                      *(longlong **)(lVar1 + 8) = plVar3;
                      *(int *)(lVar1 + 0x10) = local_a4;
                      plVar12 = local_90;
                      iVar6 = local_a4;
                      goto LAB_14090cb52;
                    }
                    iVar6 = local_a4;
                    if ((longlong)*(int *)(local_a0 + 0x48) != 0) {
                      plVar9 = *(longlong **)(local_a0 + 0x40);
                      lVar11 = (longlong)*(int *)(local_a0 + 0x48) * 0x18;
                      do {
                        if (((*plVar9 == *plVar14) && ((longlong *)plVar9[1] == plVar3)) &&
                           ((int)plVar9[2] == local_a4)) {
                          if (plVar9 != (longlong *)0x0) {
                            *plVar14 = *(longlong *)(lVar8 + 0x110);
                            goto LAB_14090cac5;
                          }
                          break;
                        }
                        plVar9 = plVar9 + 3;
                        lVar11 = lVar11 + -0x18;
                      } while (lVar11 != 0);
                    }
                  }
                  plVar14 = plVar14 + 1;
                } while (plVar14 != local_98);
              }
              param_1 = local_a0;
              if (local_78 != (longlong *)0x0) {
                FUN_1400020a8(local_78);
                param_1 = local_a0;
              }
            }
          }
          plVar13 = plVar13 + 1;
        } while (plVar13 != plVar12);
      }
      lVar10 = lVar10 + 1;
      lVar8 = *(longlong *)(param_1 + 0x30);
    } while (lVar10 < *(int *)(lVar8 + 0x110));
  }
  if ((longlong *)(param_1 + 0x40) != &local_88) {
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x40) = local_88;
    local_88 = 0;
    *(int *)(param_1 + 0x48) = (int)uStack_80;
    *(uint *)(param_1 + 0x4c) = uStack_80._4_4_;
    uStack_80 = 0;
  }
  if ((*(int *)(param_1 + 0x58) != 0) && (*(longlong **)(param_1 + 0x50) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x60))();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14090cd78 FUN_14090cd78 body=373 status=ok
// SIG undefined FUN_14090cd78(void)

void FUN_14090cd78(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14090ce01;
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
LAB_14090ce01:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14090ceee FUN_14090ceee body=1738 status=ok
// SIG undefined FUN_14090ceee(void)

longlong * FUN_14090ceee(longlong param_1,longlong param_2,code *param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  wchar_t *local_1d8;
  code *local_1d0;
  undefined1 *local_1c8;
  code **local_1c0;
  undefined1 *local_1b8;
  code *local_1b0;
  longlong local_1a0 [2];
  code *local_190;
  longlong local_188 [2];
  code *local_178;
  ulonglong uStack_170;
  code *local_168;
  undefined8 uStack_160;
  ulonglong local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined1 local_130 [8];
  longlong *local_128;
  longlong local_118 [4];
  undefined8 local_f8;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar8 = param_2;
  if (param_2 == 0) {
    lVar8 = DAT_14c951640;
  }
  if (param_1 != 0 && param_3 == (code *)0x0) {
    local_178 = *(code **)(param_1 + 0x18);
    FUN_1400021e4(&local_178,local_188);
    FUN_1400b22c2(local_1a0,&DAT_14a9d7458);
    FUN_1401c7f3e(&local_178,local_1a0,local_188);
    iVar10 = (int)uStack_170 + -1;
    if ((int)uStack_170 == 0) {
      iVar10 = 0;
    }
    FUN_1446f82e2(&local_190,iVar10,local_178,1);
    pcVar2 = local_190;
    if (DAT_14caec470 == (code *)0x0) {
      local_190 = FUN_1417df956;
      local_1b0 = FUN_14081d0ea;
      local_1b8 = &LAB_1463eaa20;
      local_1c8 = &LAB_147bbd9ea;
      local_1d0 = FUN_1401cf6d7;
      local_1d8 = L"Engine";
      local_1e0 = 0;
      local_1e8 = 0x10000000;
      local_1f0 = 8;
      local_1f8 = 0x330;
      local_1c0 = &local_190;
      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
    }
    local_1f8 = 0;
    FUN_140af9fb2(&local_190,param_2,DAT_14caec470,pcVar2);
    param_3 = local_190;
    if (local_178 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_1a0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_188[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_3 == (code *)0x0) {
LAB_14090d084:
    FUN_14058b40c(lVar8,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
    param_3 = (code *)0x0;
  }
  else {
    if (DAT_14caec470 == (code *)0x0) {
      local_1c0 = &local_178;
      local_178 = FUN_1417df956;
      local_1b0 = FUN_14081d0ea;
      local_1b8 = &LAB_1463eaa20;
      local_1c8 = &LAB_147bbd9ea;
      local_1d0 = FUN_1401cf6d7;
      local_1d8 = L"Engine";
      local_1e0 = 0;
      local_1e8 = 0x10000000;
      local_1f0 = 8;
      local_1f8 = 0x330;
      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
    }
    local_1f0 = 0;
    local_1f8 = 0;
    lVar6 = FUN_140be85e0(DAT_14caec470,lVar8,param_3,1);
    if (lVar6 != 0) {
      if (DAT_14caec470 == (code *)0x0) {
        local_1c0 = &local_178;
        local_178 = FUN_1417df956;
        local_1b0 = FUN_14081d0ea;
        local_1b8 = &LAB_1463eaa20;
        local_1c8 = &LAB_147bbd9ea;
        local_1d0 = FUN_1401cf6d7;
        local_1d8 = L"Engine";
        local_1e0 = 0;
        local_1e8 = 0x10000000;
        local_1f0 = 8;
        local_1f8 = 0x330;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
      }
      local_1f8 = 0;
      FUN_140af9fb2(&local_178,lVar8,DAT_14caec470,param_3);
      param_3 = local_178;
      if (local_178 == (code *)0x0) goto LAB_14090d084;
    }
  }
  if (DAT_14caec470 == (code *)0x0) {
    local_1c0 = &local_178;
    local_178 = FUN_1417df956;
    local_1b0 = FUN_14081d0ea;
    local_1b8 = &LAB_1463eaa20;
    local_1c8 = &LAB_147bbd9ea;
    local_1d0 = FUN_1401cf6d7;
    local_1d8 = L"Engine";
    local_1e0 = 0;
    local_1e8 = 0x10000000;
    local_1f0 = 8;
    local_1f8 = 0x330;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
  }
  local_178 = DAT_14caec470;
  local_128 = (longlong *)0x0;
  local_f8 = 0;
  uStack_160 = 0;
  local_158 = local_158 & 0xffffffffffff0000;
  uStack_140 = 0;
  lStack_138 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_170 = lVar8;
  local_168 = param_3;
  plVar7 = (longlong *)FUN_1402710dd(&local_178);
  if (lStack_138 != 0) {
    plVar9 = local_128;
    if (local_128 == (longlong *)0x0) {
      plVar9 = local_118;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  FUN_14357097e(plVar7,param_1,0);
  if (plVar7[0x49] == 0) goto LAB_14090d469;
  lVar8 = (**(code **)(*plVar7 + 0x180))(plVar7);
  if (lVar8 == 0) {
    if (DAT_14c86a9f8 == '\x01') {
      iVar10 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar10 == 2) goto LAB_14090d42b;
      if (iVar10 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) goto LAB_14090d42b;
      }
    }
    else {
LAB_14090d42b:
      lVar8 = DAT_14cb10918;
      if (DAT_14cb10918 != 0) goto LAB_14090d43b;
    }
    *(undefined8 *)(plVar7[0x49] + 0xb0) = 0;
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
LAB_14090d43b:
    *(undefined8 *)(plVar7[0x49] + 0xb0) = *(undefined8 *)(lVar8 + 0x6f8);
    uVar12 = (undefined4)*(undefined8 *)(lVar8 + 0x700);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x700) >> 0x20);
  }
  *(ulonglong *)(plVar7[0x49] + 0xb8) = CONCAT44(uVar13,uVar12);
LAB_14090d469:
  uStack_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (code *)0x0;
  uStack_160 = 0;
  local_178 = (code *)0x0;
  uStack_170 = 0;
  lStack_138 = CONCAT44(lStack_138._4_4_,0xffffffff);
  cVar3 = '\0';
  memset(local_130,0,0xe0);
  plVar9 = (longlong *)plVar7[0x22];
  if (plVar9 != (longlong *)0x0) {
    local_188[0] = 0;
    local_188[1] = 0;
    cVar3 = (**(code **)(*plVar9 + 0x358))(plVar9,&local_178);
  }
  plVar9 = (longlong *)plVar7[0x56];
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)FUN_14001cc68(0x10,0x10);
    *plVar9 = 0;
    plVar9[1] = 0;
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar7[0x56] = (longlong)plVar9;
    }
  }
  iVar10 = 0;
  if (cVar3 != '\0') {
    iVar10 = (int)uStack_170;
    if ((int)uStack_170 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_170 & 0xffffffff);
    }
  }
  *(undefined4 *)(plVar9 + 1) = 0;
  if (*(int *)((longlong)plVar9 + 0xc) != iVar10) {
    FUN_14481578e(plVar9,iVar10);
  }
  if (iVar10 != 0) {
    iVar11 = 0;
    do {
      iVar1 = (int)plVar9[1];
      *(uint *)(plVar9 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)plVar9 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(plVar9,iVar1);
      }
      *(int *)(*plVar9 + (longlong)iVar1 * 4) = iVar11;
      iVar11 = iVar11 + 1;
    } while (iVar10 != iVar11);
  }
  if (plVar7[0x49] != 0) {
    FUN_1403bac02(plVar7[0x49],plVar7[0x56]);
  }
  FUN_1401b97de(&local_178);
  if ((local_50 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14090d5ba FUN_14090d5ba body=1961 status=ok
// SIG undefined FUN_14090d5ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14090d5ba(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             undefined1 param_6,byte param_7)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar9 = (longlong *)FUN_14001cc68(0x990);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14ae26930;
  plVar9[2] = (longlong)&PTR_FUN_14ae24478;
  *(undefined1 *)(plVar9 + 3) = 0;
  *(undefined1 *)((longlong)plVar9 + 0x19) = param_6;
  *(undefined1 *)((longlong)plVar9 + 0x1a) = 3;
  *(undefined8 *)((longlong)plVar9 + 0x1c) = DAT_14c846330;
  *(undefined4 *)((longlong)plVar9 + 0x24) = DAT_14c846338;
  plVar9[5] = -1;
  plVar9[6] = 0;
  plVar9[7] = 0;
  plVar9[8] = param_2;
  plVar9[9] = param_3;
  plVar9[10] = param_4;
  plVar9[0xb] = 0;
  iVar8 = 0;
  if (param_5 != 0) {
    uVar2 = *(uint *)(param_5 + 0xc);
    *(uint *)(plVar9 + 0xb) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar8 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar8 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar8 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar11;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar8 = iVar11;
      }
    }
  }
  *(int *)((longlong)plVar9 + 0x5c) = iVar8;
  plVar9[0xc] = 0;
  plVar9[0xd] = 0;
  *(undefined4 *)(plVar9 + 0xe) = 0;
  *(undefined4 *)((longlong)plVar9 + 0x74) = 0;
  *(undefined4 *)(plVar9 + 0xf) = 0;
  *(undefined4 *)((longlong)plVar9 + 0x7c) = 0x3ff00000;
  plVar9[0x10] = 0;
  plVar9[0x11] = 0;
  plVar9[0x12] = 0;
  plVar9[0x13] = 0;
  plVar9[0x14] = 0x3ff0000000000000;
  plVar9[0x15] = 0x3ff0000000000000;
  plVar9[0x16] = 0x3ff0000000000000;
  plVar9[0x17] = 0;
  *(undefined1 *)(plVar9 + 0x1b) = 0;
  plVar9[0x1c] = 0;
  plVar9[0x1d] = 0;
  plVar9[0x1e] = 0;
  plVar9[0x1f] = -0x80800001;
  plVar9[0x20] = 0;
  *(undefined4 *)(plVar9 + 0x21) = 0;
  plVar9[0x27] = 0;
  *(undefined4 *)(plVar9 + 0x28) = 0;
  plVar9[0x3b] = 0;
  plVar9[0x3c] = 0;
  plVar9[0x3d] = 0;
  plVar9[0x3e] = 0;
  *(undefined8 *)((longlong)plVar9 + 0x124) = 0;
  *(undefined8 *)((longlong)plVar9 + 300) = 0;
  plVar9[0x23] = 0;
  plVar9[0x24] = 0;
  plVar9[0x33] = 0;
  plVar9[0x34] = 0;
  plVar9[0x31] = 0;
  plVar9[0x32] = 0;
  plVar9[0x2f] = 0;
  plVar9[0x30] = 0;
  plVar9[0x2d] = 0;
  plVar9[0x2e] = 0;
  plVar9[0x2b] = 0;
  plVar9[0x2c] = 0;
  plVar9[0x29] = 0;
  plVar9[0x2a] = 0;
  plVar9[0x38] = 0;
  plVar9[0x39] = 0;
  plVar9[0x36] = 0;
  plVar9[0x37] = 0;
  plVar9[0x3f] = (longlong)&PTR_LAB_14ae02690;
  plVar9[0x4e] = 0;
  plVar9[0x4c] = 0;
  plVar9[0x4d] = 0;
  plVar9[0x4a] = 0;
  plVar9[0x4b] = 0;
  plVar9[0x48] = 0;
  plVar9[0x49] = 0;
  plVar9[0x46] = 0;
  plVar9[0x47] = 0;
  plVar9[0x44] = 0;
  plVar9[0x45] = 0;
  plVar9[0x42] = 0;
  plVar9[0x43] = 0;
  plVar9[0x40] = 0;
  plVar9[0x41] = 0;
  *(byte *)(plVar9 + 0x4f) = *(byte *)(plVar9 + 0x4f) | 0xf;
  memset((void *)((longlong)plVar9 + 0x27c),0,0xc4);
  lVar14 = 0x530;
  do {
    uVar3 = _DAT_14c846288;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x1c0);
    *puVar10 = _DAT_14c846280;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846278;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x1d0);
    *puVar10 = _DAT_14c846270;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846268;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x1e0);
    *puVar10 = _DAT_14c846260;
    puVar10[1] = uVar3;
    uVar3 = DAT_14c846258;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x1f0);
    *puVar10 = _DAT_14c846250;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846288;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x180);
    *puVar10 = _DAT_14c846280;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846278;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -400);
    *puVar10 = _DAT_14c846270;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846268;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x1a0);
    *puVar10 = _DAT_14c846260;
    puVar10[1] = uVar3;
    uVar3 = DAT_14c846258;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x1b0);
    *puVar10 = _DAT_14c846250;
    puVar10[1] = uVar3;
    uVar3 = DAT_14c846258;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x170);
    *puVar10 = _DAT_14c846250;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846268;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x160);
    *puVar10 = _DAT_14c846260;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846278;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x150);
    *puVar10 = _DAT_14c846270;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846288;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x140);
    *puVar10 = _DAT_14c846280;
    puVar10[1] = uVar3;
    uVar3 = DAT_14c846258;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x130);
    *puVar10 = _DAT_14c846250;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846268;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x120);
    *puVar10 = _DAT_14c846260;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846278;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x110);
    *puVar10 = _DAT_14c846270;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846288;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x100);
    *puVar10 = _DAT_14c846280;
    puVar10[1] = uVar3;
    uVar3 = DAT_14c846258;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0xf0);
    *puVar10 = _DAT_14c846250;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846268;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0xe0);
    *puVar10 = _DAT_14c846260;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846278;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0xd0);
    *puVar10 = _DAT_14c846270;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846288;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0xc0);
    *puVar10 = _DAT_14c846280;
    puVar10[1] = uVar3;
    uVar3 = DAT_14c846258;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0xb0);
    *puVar10 = _DAT_14c846250;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846268;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0xa0);
    *puVar10 = _DAT_14c846260;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846278;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x90);
    *puVar10 = _DAT_14c846270;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846288;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x80);
    *puVar10 = _DAT_14c846280;
    puVar10[1] = uVar3;
    uVar3 = _DAT_14c846348;
    puVar10 = (undefined8 *)((longlong)plVar9 + lVar14 + -0x70);
    *puVar10 = ram0x00014c846340;
    puVar10[1] = uVar3;
    *(undefined8 *)((longlong)plVar9 + lVar14 + -0x60) = 0;
    *(undefined4 *)((longlong)plVar9 + lVar14 + -0x58) = 0;
    *(undefined8 *)((longlong)plVar9 + lVar14 + -0x50) = 0;
    *(undefined4 *)((longlong)plVar9 + lVar14 + -0x48) = 0;
    *(undefined8 *)((longlong)plVar9 + lVar14 + -0x40) = 0x3f800000;
    *(undefined4 *)((longlong)plVar9 + lVar14 + -0x38) = 0;
    *(undefined8 *)((longlong)plVar9 + lVar14 + -0x30) = 0x3f80000000000000;
    *(undefined4 *)((longlong)plVar9 + lVar14 + -0x28) = 0;
    *(undefined8 *)((longlong)plVar9 + lVar14 + -0x20) = 0;
    *(undefined4 *)((longlong)plVar9 + lVar14 + -0x18) = 0x3f800000;
    *(undefined1 **)((longlong)plVar9 + lVar14 + -0x10) = &DAT_3f8000003f800000;
    *(undefined4 *)((longlong)plVar9 + lVar14 + -8) = 0x3f800000;
    *(undefined8 *)((longlong)plVar9 + lVar14) = 0;
    ((undefined8 *)((longlong)plVar9 + lVar14))[1] = 0;
    lVar14 = lVar14 + 0x200;
  } while (lVar14 != 0x930);
  plVar9[0xee] = 0;
  *(undefined4 *)(plVar9 + 0xef) = 0;
  plVar9[0xe8] = 0;
  plVar9[0xe9] = 0;
  plVar9[0xea] = 0;
  plVar9[0xeb] = 0;
  *(undefined8 *)((longlong)plVar9 + 0x77c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar9 + 0x784) = 0;
  plVar9[0xf2] = 0;
  *(undefined4 *)(plVar9 + 0xf3) = 0;
  *(byte *)(plVar9 + 0xf4) = (*(byte *)(plVar9 + 0xf4) & 0xf0) + 1;
  *(byte *)((longlong)plVar9 + 0x7a4) = *(byte *)((longlong)plVar9 + 0x7a4) & 0xfe;
  *(undefined1 *)(plVar9 + 0xf5) = 0;
  *(byte *)((longlong)plVar9 + 0x7a9) = *(byte *)((longlong)plVar9 + 0x7a9) & 0xfc | param_7;
  plVar9[0xf6] = 0;
  plVar9[0xf7] = 0;
  plVar9[0xf8] = 0;
  plVar9[0xf9] = 0;
  plVar9[0xfa] = 0;
  plVar9[0xfb] = 0;
  plVar9[0xfc] = 0;
  plVar9[0xfd] = 0;
  plVar9[0xfe] = 0;
  plVar9[0xff] = 0;
  *(undefined1 *)(plVar9 + 0x100) = 0;
  *(undefined1 *)(plVar9 + 0x107) = 0;
  plVar9[0x105] = 0;
  plVar9[0x106] = 0;
  plVar9[0x103] = 0;
  plVar9[0x104] = 0;
  plVar9[0x101] = 0;
  plVar9[0x102] = 0;
  plVar9[0x108] = 0;
  plVar9[0x109] = 0;
  plVar9[0x10a] = 0;
  plVar9[0x10b] = 0;
  plVar9[0x10c] = 0;
  plVar9[0x10d] = 0;
  *(undefined1 *)(plVar9 + 0x10e) = 0;
  plVar9[0x10f] = 0x300000003;
  plVar9[0x110] = 0;
  plVar9[0x111] = 0;
  plVar9[0x112] = 0;
  plVar9[0x113] = 0;
  *(undefined4 *)(plVar9 + 0x114) = DAT_14c760db4;
  *(undefined8 *)((longlong)plVar9 + 0x8a4) = 0;
  *(undefined8 *)((longlong)plVar9 + 0x8ac) = 0;
  *(undefined8 *)((longlong)plVar9 + 0x8b4) = 0;
  *(undefined8 *)((longlong)plVar9 + 0x8bc) = 0;
  *(undefined4 *)((longlong)plVar9 + 0x8c4) = 0;
  plVar12 = &DAT_14c846480;
  plVar13 = plVar9 + 0x11a;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *plVar13 = *plVar12;
    plVar12 = plVar12 + 1;
    plVar13 = plVar13 + 1;
  }
  plVar9[0x128] = DAT_14c8464f0;
  uVar6 = DAT_14c8464e8._4_4_;
  uVar5 = (undefined4)DAT_14c8464e8;
  uVar4 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(plVar9 + 0x126) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)plVar9 + 0x934) = uVar4;
  *(undefined4 *)(plVar9 + 0x127) = uVar5;
  *(undefined4 *)((longlong)plVar9 + 0x93c) = uVar6;
  plVar9[0x129] = 0;
  plVar9[0x12a] = 0;
  *(undefined8 *)((longlong)plVar9 + 0x954) = 0;
  *(undefined8 *)((longlong)plVar9 + 0x95c) = 0;
  plVar9[0x12e] = 0;
  plVar9[0x12f] = 0;
  *(undefined8 *)((longlong)plVar9 + 0x97d) = 0;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c7629f8 + 1;
  plVar9[0x22] = DAT_14c7629f8;
  DAT_14c7629f8 = lVar14;
  lVar14 = DAT_14c8464f0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  uVar4 = (undefined4)DAT_14c8464e0;
  local_88 = DAT_14c8464f0;
  local_98 = (undefined4)DAT_14c8464e0;
  uStack_94 = DAT_14c8464e0._4_4_;
  uStack_90 = (undefined4)DAT_14c8464e8;
  uStack_8c = DAT_14c8464e8._4_4_;
  local_70 = DAT_14c8464f0;
  local_80 = (undefined4)DAT_14c8464e0;
  uStack_7c = DAT_14c8464e0._4_4_;
  uStack_78 = (undefined4)DAT_14c8464e8;
  uStack_74 = DAT_14c8464e8._4_4_;
  *(undefined4 *)(plVar9 + 0x108) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)plVar9 + 0x844) = uVar5;
  *(undefined4 *)(plVar9 + 0x109) = uVar6;
  *(undefined4 *)((longlong)plVar9 + 0x84c) = uVar7;
  plVar9[0x10a] = lVar14;
  plVar9[0x10b] = CONCAT44(uVar5,uVar4);
  plVar9[0x10c] = CONCAT44(uVar7,uVar6);
  plVar9[0x10d] = lVar14;
  *(undefined1 *)(plVar9 + 0x10e) = 1;
  if (param_5 != 0) {
    FUN_14090dd64(plVar9 + 0x3f,param_5);
  }
  if (((plVar9[8] == 0) || (plVar12 = *(longlong **)(plVar9[8] + 0x218), plVar12 == (longlong *)0x0)
      ) || (puVar10 = (undefined8 *)(**(code **)(*plVar12 + 0x420))(), puVar10 == (undefined8 *)0x0)
     ) {
    lVar14 = 0;
  }
  else {
    lVar14 = (**(code **)*puVar10)(puVar10,&DAT_14cb3e918);
  }
  plVar9[0x110] = lVar14;
  *(uint *)(plVar9 + 0x114) = (uint)*(byte *)(plVar9[8] + 0x150);
  if ((*(byte *)(param_3 + 0x60) & 8) == 0) {
    *(undefined1 *)((longlong)plVar9 + 0x19) = 2;
  }
  if (plVar9 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar12 = (longlong *)param_1[1];
    if (plVar12 == (longlong *)0x0) goto LAB_14090dc4c;
    param_1[1] = 0;
LAB_14090dcc7:
    LOCK();
    plVar13 = plVar12 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    if (plVar9 == (longlong *)0x0) goto LAB_14090dc4c;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *param_1 = (longlong)(plVar9 + 2);
    plVar12 = (longlong *)param_1[1];
    if (plVar9 == plVar12) {
      LOCK();
      plVar12 = plVar9 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    else {
      param_1[1] = (longlong)plVar9;
      if (plVar12 != (longlong *)0x0) goto LAB_14090dcc7;
    }
  }
  LOCK();
  plVar12 = plVar9 + 1;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)*plVar12 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
LAB_14090dc4c:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14090dd64 FUN_14090dd64 body=150 status=ok
// SIG undefined FUN_14090dd64(void)

void FUN_14090dd64(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 8) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14090ddfa FUN_14090ddfa body=13985 status=ok
// SIG undefined FUN_14090ddfa(void)

void FUN_14090ddfa(undefined **param_1,char param_2)

{
  int *piVar1;
  undefined **ppuVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined *puVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulonglong uVar10;
  byte bVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  DWORD DVar17;
  DWORD DVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  longlong *plVar21;
  undefined **ppuVar22;
  undefined ***pppuVar23;
  longlong *plVar24;
  undefined4 *puVar25;
  uint *puVar26;
  int *piVar27;
  uint uVar28;
  longlong *plVar29;
  undefined **ppuVar30;
  undefined8 *puVar31;
  undefined ***pppuVar32;
  uint uVar33;
  uint *puVar34;
  longlong lVar35;
  undefined8 *puVar36;
  undefined8 unaff_RBP;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  undefined ***pppuVar40;
  int iVar41;
  undefined **ppuVar42;
  ulonglong uVar43;
  longlong lVar44;
  bool bVar45;
  bool bVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined **local_118;
  undefined **local_110;
  undefined **local_108;
  undefined **local_100;
  undefined **local_f8;
  int local_ec;
  undefined **local_e8;
  int local_dc;
  undefined **local_d8;
  undefined **ppuStack_d0;
  undefined ***local_c8;
  undefined **ppuStack_c0;
  undefined **local_b8;
  undefined ***local_b0;
  undefined **local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 == '\x03') goto LAB_14090fa91;
  FUN_140336cb8();
  if (param_1[0xf6] != (undefined *)0x0) {
    FUN_14005a35e(param_1);
  }
  *(float *)((longlong)param_1 + 0xd4) = (float)*(double *)(param_1[6] + 0x6d0);
  FUN_140244328(param_1);
  if (param_1[4] == (undefined *)0x0) {
    param_2 = '\x02';
  }
  else {
    FUN_140336ad0();
  }
  cVar12 = '\x02';
  if (*(int *)((longlong)param_1 + 0x86c) != 4) {
    cVar12 = param_2;
  }
  if ((param_1[0x10f] != (undefined *)0x0) &&
     (*(int *)((longlong)param_1 + 0x86c) - 3U < 2 || cVar12 != '\x01')) {
    param_1[0x10f] = (undefined *)0x0;
    FUN_143ac50bc();
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_14c846338;
  *(undefined8 *)((longlong)param_1 + 0xc) = DAT_14c846330;
  if (((((*(int *)((longlong)param_1 + 0x4c) != 0) &&
        (uVar28 = *(uint *)(param_1 + 9), -1 < (int)uVar28)) && ((int)uVar28 < DAT_14c9647dc)) &&
      ((plVar29 = (longlong *)
                  ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8)),
       plVar29 != (longlong *)0x0 && ((int)plVar29[2] == *(int *)((longlong)param_1 + 0x4c))))) &&
     (((*(uint *)(plVar29 + 1) & 0x10200000) == 0 &&
      (((param_1[7][0x50] & 1) != 0 && ((param_1[7][0x4a0] & 8) != 0)))))) {
    if ((*(uint *)(plVar29 + 1) & 0x10200000) == 0) {
      lVar35 = *plVar29;
    }
    else {
      lVar35 = 0;
    }
    dVar49 = *(double *)(lVar35 + 0x270) * 1.52587890625e-05 + 0.5;
    dVar51 = *(double *)(lVar35 + 0x268) * 1.52587890625e-05 + 0.5;
    dVar47 = *(double *)(lVar35 + 0x260) * 1.52587890625e-05 + 0.5;
    auVar50._0_4_ = (float)dVar49;
    auVar50._4_4_ = (int)((ulonglong)dVar49 >> 0x20);
    auVar50._8_8_ = 0;
    auVar52._0_4_ = (float)dVar51;
    auVar52._4_4_ = (int)((ulonglong)dVar51 >> 0x20);
    auVar52._8_8_ = 0;
    auVar48._0_4_ = (float)dVar47;
    auVar48._4_4_ = (int)((ulonglong)dVar47 >> 0x20);
    auVar48._8_8_ = 0;
    auVar48 = blendps(auVar48,ZEXT816(0),0xe);
    auVar48 = roundps(auVar48,auVar48,1);
    auVar52 = blendps(auVar52,ZEXT816(0),0xe);
    auVar52 = roundps(auVar52,auVar52,1);
    auVar50 = blendps(auVar50,ZEXT816(0),0xe);
    auVar50 = roundps(auVar50,auVar50,1);
    *(int *)((longlong)param_1 + 0xc) = auVar48._0_4_;
    *(int *)(param_1 + 2) = auVar52._0_4_;
    *(int *)((longlong)param_1 + 0x14) = auVar50._0_4_;
  }
  uVar37 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*(int *)((longlong)param_1 + 0x86c) - 3U < 2);
  local_118 = param_1;
  if (cVar12 == '\0') {
    FUN_143ac6926(param_1);
LAB_14090e1b7:
    uVar37 = CONCAT71((int7)(uVar37 >> 8),*(int *)((longlong)param_1 + 0x86c) != 4);
  }
  else {
    if (cVar12 == '\x02') {
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(undefined4 *)(param_1 + 0x1b) = 0;
      pppuVar23 = DAT_14c8464f0;
      ppuVar22 = DAT_14c8464e8;
      ppuVar30 = DAT_14c8464e0;
      local_c8 = DAT_14c8464f0;
      local_d8 = DAT_14c8464e0;
      ppuStack_d0 = DAT_14c8464e8;
      local_b0 = DAT_14c8464f0;
      ppuStack_c0 = DAT_14c8464e0;
      local_b8 = DAT_14c8464e8;
      param_1[0x106] = (undefined *)DAT_14c8464e0;
      param_1[0x107] = (undefined *)ppuVar22;
      param_1[0x108] = (undefined *)pppuVar23;
      param_1[0x109] = (undefined *)ppuVar30;
      param_1[0x10a] = (undefined *)ppuVar22;
      param_1[0x10b] = (undefined *)pppuVar23;
      *(undefined1 *)(param_1 + 0x10c) = 1;
      *(undefined4 *)(param_1 + 0xf7) = 0;
      *(byte *)(param_1 + 0xf3) = *(byte *)(param_1 + 0xf3) & 0xdf;
      *(byte *)(param_1 + 0xf2) =
           *(byte *)(param_1 + 0xf2) & 0xfb | *(byte *)(param_1 + 0xf2) >> 1 & 4;
      FUN_143ac6af4(param_1);
      if ((param_1[7] != (undefined *)0x0) && ((*(uint *)(param_1[7] + 8) >> 0x1e & 1) == 0)) {
        param_1[0x10d] = &DAT_100000001;
        *(byte *)(param_1 + 0xf2) =
             *(byte *)(param_1 + 0xf2) & 0xfb | *(byte *)(param_1 + 0xf2) >> 1 & 4;
        cVar12 = FUN_1400713b4(param_1);
        if (cVar12 != '\0') {
          if ((param_1[7][0x4a0] & 1) == 0) {
            if (*(int *)(param_1 + 0x10d) != 4) {
              *(undefined4 *)((longlong)param_1 + 0x86c) = 4;
              FUN_140389866(param_1);
              *(undefined4 *)(param_1 + 0x10d) = 4;
            }
          }
          else {
            if (((ulonglong)param_1[0xf2] & 4) == 0) {
              uVar19 = FUN_143ac6210(param_1);
              uVar20 = FUN_1400bd118(param_1[6]);
              FUN_143ad0ca6(uVar20,&local_d8,uVar19,param_1[7]);
              ppuVar30 = ppuStack_d0;
              if (ppuStack_d0 == (undefined **)0x0) {
                param_1[4] = (undefined *)local_d8;
                ppuVar22 = (undefined **)param_1[5];
                if (ppuVar22 != (undefined **)0x0) {
                  param_1[5] = (undefined *)0x0;
LAB_14090e65d:
                  LOCK();
                  ppuVar30 = ppuVar22 + 1;
                  *(int *)ppuVar30 = *(int *)ppuVar30 + -1;
                  UNLOCK();
                  if (*(int *)ppuVar30 == 0) {
                    (**(code **)*ppuVar22)(ppuVar22);
                    LOCK();
                    piVar27 = (int *)((longlong)ppuVar22 + 0xc);
                    *piVar27 = *piVar27 + -1;
                    iVar14 = *piVar27;
                    UNLOCK();
joined_r0x00014090e739:
                    if (iVar14 == 0) {
                      (**(code **)(*ppuVar22 + 0x10))(ppuVar22);
                    }
                  }
                }
              }
              else {
                LOCK();
                *(int *)(ppuStack_d0 + 1) = *(int *)(ppuStack_d0 + 1) + 1;
                UNLOCK();
                param_1[4] = (undefined *)local_d8;
                ppuVar22 = (undefined **)param_1[5];
                if (ppuStack_d0 == ppuVar22) {
                  LOCK();
                  ppuVar22 = ppuStack_d0 + 1;
                  *(int *)ppuVar22 = *(int *)ppuVar22 + -1;
                  UNLOCK();
                  if (*(int *)ppuVar22 == 0) {
                    (**(code **)*ppuStack_d0)(ppuStack_d0);
                    LOCK();
                    piVar27 = (int *)((longlong)ppuVar30 + 0xc);
                    *piVar27 = *piVar27 + -1;
                    iVar14 = *piVar27;
                    UNLOCK();
                    ppuVar22 = ppuVar30;
                    goto joined_r0x00014090e739;
                  }
                }
                else {
                  param_1[5] = (undefined *)ppuStack_d0;
                  if (ppuVar22 != (undefined **)0x0) goto LAB_14090e65d;
                }
              }
              ppuVar30 = ppuStack_d0;
              if (ppuStack_d0 != (undefined **)0x0) {
                LOCK();
                ppuVar22 = ppuStack_d0 + 1;
                *(int *)ppuVar22 = *(int *)ppuVar22 + -1;
                UNLOCK();
                if (*(int *)ppuVar22 == 0) {
                  (**(code **)*ppuStack_d0)(ppuStack_d0);
                  LOCK();
                  piVar27 = (int *)((longlong)ppuVar30 + 0xc);
                  *piVar27 = *piVar27 + -1;
                  UNLOCK();
                  if (*piVar27 == 0) {
                    (**(code **)(*ppuVar30 + 0x10))(ppuVar30);
                  }
                }
              }
            }
            else if (param_1[4] == (undefined *)0x0) {
              ppuVar22 = (undefined **)FUN_14001cc68(0x590,0x10);
              ppuVar22[1] = &DAT_100000001;
              *ppuVar22 = (undefined *)&PTR_FUN_14ae26cf0;
              ppuVar30 = ppuVar22 + 2;
              FUN_143ac93ec(ppuVar30);
              local_d8 = ppuVar30;
              ppuStack_d0 = ppuVar22;
              FUN_143acc8ee(&local_d8,ppuVar30);
              ppuVar30 = ppuStack_d0;
              if (ppuStack_d0 == (undefined **)0x0) {
                param_1[4] = (undefined *)local_d8;
                ppuVar22 = (undefined **)param_1[5];
                if (ppuVar22 != (undefined **)0x0) {
                  param_1[5] = (undefined *)0x0;
LAB_14090e794:
                  LOCK();
                  ppuVar30 = ppuVar22 + 1;
                  *(int *)ppuVar30 = *(int *)ppuVar30 + -1;
                  UNLOCK();
                  if (*(int *)ppuVar30 == 0) {
                    (**(code **)*ppuVar22)(ppuVar22);
                    LOCK();
                    piVar27 = (int *)((longlong)ppuVar22 + 0xc);
                    *piVar27 = *piVar27 + -1;
                    iVar14 = *piVar27;
                    UNLOCK();
joined_r0x00014090e7bf:
                    if (iVar14 == 0) {
                      (**(code **)(*ppuVar22 + 0x10))(ppuVar22);
                    }
                  }
                }
              }
              else {
                LOCK();
                *(int *)(ppuStack_d0 + 1) = *(int *)(ppuStack_d0 + 1) + 1;
                UNLOCK();
                param_1[4] = (undefined *)local_d8;
                ppuVar22 = (undefined **)param_1[5];
                if (ppuStack_d0 == ppuVar22) {
                  LOCK();
                  ppuVar22 = ppuStack_d0 + 1;
                  *(int *)ppuVar22 = *(int *)ppuVar22 + -1;
                  UNLOCK();
                  if (*(int *)ppuVar22 == 0) {
                    (**(code **)*ppuStack_d0)(ppuStack_d0);
                    LOCK();
                    piVar27 = (int *)((longlong)ppuVar30 + 0xc);
                    *piVar27 = *piVar27 + -1;
                    iVar14 = *piVar27;
                    UNLOCK();
                    ppuVar22 = ppuVar30;
                    goto joined_r0x00014090e7bf;
                  }
                }
                else {
                  param_1[5] = (undefined *)ppuStack_d0;
                  if (ppuVar22 != (undefined **)0x0) goto LAB_14090e794;
                }
              }
              ppuVar30 = ppuStack_d0;
              if (ppuStack_d0 != (undefined **)0x0) {
                LOCK();
                ppuVar22 = ppuStack_d0 + 1;
                *(int *)ppuVar22 = *(int *)ppuVar22 + -1;
                UNLOCK();
                if (*(int *)ppuVar22 == 0) {
                  (**(code **)*ppuStack_d0)(ppuStack_d0);
                  LOCK();
                  piVar27 = (int *)((longlong)ppuVar30 + 0xc);
                  *piVar27 = *piVar27 + -1;
                  UNLOCK();
                  if (*piVar27 == 0) {
                    (**(code **)(*ppuVar30 + 0x10))(ppuVar30);
                  }
                }
              }
              local_128 = (undefined ***)CONCAT44(local_128._4_4_,8);
              FUN_143ac5c84(param_1[4],param_1[7],param_1[6],1);
            }
            ppuVar30 = param_1 + 0x106;
            ppuVar22 = param_1 + 0x3d;
            FUN_1402ae190(ppuVar22,param_1[7] + 0xf8);
            local_110 = param_1 + 0x21;
            iVar14 = *(int *)((longlong)param_1 + 0x114);
            FUN_14038994e(param_1[0x21]);
            *(undefined4 *)(param_1 + 0x22) = 0;
            if ((iVar14 < 0) && (*(int *)((longlong)param_1 + 0x114) != 0)) {
              FUN_140389a62(local_110,0);
            }
            *(byte *)(param_1 + 0xf3) = *(byte *)(param_1 + 0xf3) & 0xfd;
            pppuVar23 = DAT_14c8464f0;
            ppuVar2 = DAT_14c8464e8;
            ppuVar42 = DAT_14c8464e0;
            local_c8 = DAT_14c8464f0;
            local_d8 = DAT_14c8464e0;
            ppuStack_d0 = DAT_14c8464e8;
            ppuStack_c0 = DAT_14c8464e0;
            local_b8 = DAT_14c8464e8;
            local_b0 = DAT_14c8464f0;
            *ppuVar30 = (undefined *)DAT_14c8464e0;
            param_1[0x107] = (undefined *)ppuVar2;
            param_1[0x108] = (undefined *)pppuVar23;
            param_1[0x109] = (undefined *)ppuVar42;
            param_1[0x10a] = (undefined *)ppuVar2;
            param_1[0x10b] = (undefined *)pppuVar23;
            *(undefined1 *)(param_1 + 0x10c) = 1;
            FUN_14038994e(param_1[0x21]);
            *(undefined4 *)(param_1 + 0x22) = 0;
            if (*(int *)((longlong)param_1 + 0x114) != 0) {
              FUN_140389a62(local_110);
            }
            bVar11 = DAT_14ca84d96;
            puVar6 = param_1[7];
            if ((puVar6 != (undefined *)0x0) && ((*(uint *)(puVar6 + 8) >> 0x1e & 1) == 0)) {
              local_108 = (undefined **)CONCAT71(local_108._1_7_,DAT_14c7627f8 != 0);
              uVar28 = *(uint *)(puVar6 + 0xc0);
              uVar43 = (ulonglong)uVar28;
              if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(uVar43);
              }
              local_100 = ppuVar30;
              local_e8 = ppuVar22;
              if (*(int *)((longlong)param_1 + 0x114) < (int)uVar28) {
                FUN_140389a62(local_110);
              }
              if (uVar43 != 0) {
                local_108 = (undefined **)CONCAT71(local_108._1_7_,(byte)local_108 & bVar11);
                local_f8 = (undefined **)(uVar43 * 0x48);
                lVar35 = 0;
                uVar37 = 0;
                ppuVar30 = (undefined **)0x0;
                do {
                  bVar11 = *(byte *)(*(longlong *)(puVar6 + 0xb8) + 0x20 + (longlong)ppuVar30);
                  if (*(char *)(*(longlong *)(puVar6 + 0xb8) + 0x21 + (longlong)ppuVar30) == '\x01')
                  {
                    plVar21 = (longlong *)FUN_14001cc68(0x290,0x10);
                    plVar21[1] = (longlong)&DAT_100000001;
                    *plVar21 = (longlong)&PTR_FUN_14ae26950;
                    plVar29 = plVar21 + 2;
                    FUN_148202bee(plVar29,param_1);
                  }
                  else {
                    plVar21 = (longlong *)FUN_14001cc68(2000,0x10);
                    plVar21[1] = (longlong)&DAT_100000001;
                    *plVar21 = (longlong)&PTR_LAB_14ae26970;
                    plVar29 = plVar21 + 2;
                    FUN_14015b5c2(plVar29,param_1);
                  }
                  iVar14 = *(int *)(param_1 + 0x22);
                  *(uint *)(param_1 + 0x22) = iVar14 + 1U;
                  if (*(uint *)((longlong)param_1 + 0x114) < iVar14 + 1U) {
                    FUN_1481f806c(local_110,iVar14);
                  }
                  puVar8 = *local_110;
                  *(longlong **)(puVar8 + (longlong)iVar14 * 0x10) = plVar29;
                  *(longlong **)(puVar8 + (longlong)iVar14 * 0x10 + 8) = plVar21;
                  if (plVar21 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                    UNLOCK();
                    LOCK();
                    plVar29 = plVar21 + 1;
                    *(int *)plVar29 = (int)*plVar29 + -1;
                    UNLOCK();
                    if ((int)*plVar29 == 0) {
                      (**(code **)*plVar21)(plVar21);
                      LOCK();
                      piVar27 = (int *)((longlong)plVar21 + 0xc);
                      *piVar27 = *piVar27 + -1;
                      UNLOCK();
                      if (*piVar27 == 0) {
                        (**(code **)(*plVar21 + 0x10))(plVar21);
                      }
                    }
                  }
                  param_1 = local_118;
                  lVar39 = (longlong)(*(int *)(local_118 + 0x22) + -1) * 0x10;
                  plVar29 = *(longlong **)(local_118[0x21] + lVar39);
                  plVar21 = *(longlong **)(local_118[0x21] + lVar39 + 8);
                  if (plVar21 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
                    UNLOCK();
                  }
                  puVar8 = local_118[7];
                  if ((puVar8[100] & 1) == 0) {
                    if (bVar11 != 0) {
                      lVar39 = FUN_14040f60c(*(longlong *)(puVar6 + 0xb8) + (longlong)ppuVar30);
                      if ((lVar39 != 0) && (*(char *)(lVar39 + 0x3d) == '\x01')) {
                        if ((*(char *)(param_1 + 0x10c) == '\0') ||
                           (*(char *)(lVar39 + 0x70) == '\0')) {
                          if (*(char *)(lVar39 + 0x70) != '\0') {
                            local_100[6] = *(undefined **)(lVar39 + 0x70);
                            puVar8 = *(undefined **)(lVar39 + 0x40);
                            puVar9 = *(undefined **)(lVar39 + 0x48);
                            auVar48 = *(undefined1 (*) [16])(lVar39 + 0x50);
                            *(undefined1 (*) [16])(local_100 + 4) =
                                 *(undefined1 (*) [16])(lVar39 + 0x60);
                            *(undefined1 (*) [16])(local_100 + 2) = auVar48;
                            *local_100 = puVar8;
                            local_100[1] = puVar9;
                          }
                        }
                        else {
                          puVar8 = param_1[0x106];
                          if ((double)*(undefined **)(lVar39 + 0x40) <= (double)param_1[0x106]) {
                            puVar8 = *(undefined **)(lVar39 + 0x40);
                          }
                          param_1[0x106] = puVar8;
                          puVar8 = param_1[0x107];
                          if ((double)*(undefined **)(lVar39 + 0x48) <= (double)param_1[0x107]) {
                            puVar8 = *(undefined **)(lVar39 + 0x48);
                          }
                          param_1[0x107] = puVar8;
                          puVar8 = param_1[0x108];
                          if ((double)*(undefined **)(lVar39 + 0x50) <= (double)param_1[0x108]) {
                            puVar8 = *(undefined **)(lVar39 + 0x50);
                          }
                          param_1[0x108] = puVar8;
                          puVar8 = param_1[0x109];
                          if ((double)param_1[0x109] <= (double)*(undefined **)(lVar39 + 0x58)) {
                            puVar8 = *(undefined **)(lVar39 + 0x58);
                          }
                          param_1[0x109] = puVar8;
                          puVar8 = param_1[0x10a];
                          if ((double)param_1[0x10a] <= (double)*(undefined **)(lVar39 + 0x60)) {
                            puVar8 = *(undefined **)(lVar39 + 0x60);
                          }
                          param_1[0x10a] = puVar8;
                          puVar8 = param_1[0x10b];
                          if ((double)param_1[0x10b] <= (double)*(undefined **)(lVar39 + 0x68)) {
                            puVar8 = *(undefined **)(lVar39 + 0x68);
                          }
                          param_1[0x10b] = puVar8;
                        }
                      }
                      goto LAB_14090ebbc;
                    }
                    (**(code **)(*plVar29 + 8))(plVar29,uVar37);
                  }
                  else {
                    lVar39 = *(longlong *)(puVar8 + 0x410);
                    lVar44 = *(longlong *)(puVar8 + 0x418);
                    auVar48 = *(undefined1 (*) [16])(puVar8 + 0x420);
                    auVar50 = *(undefined1 (*) [16])(puVar8 + 0x430);
                    plVar29[0x29] = *(longlong *)(puVar8 + 0x440);
                    *(undefined1 (*) [16])(plVar29 + 0x27) = auVar50;
                    *(undefined1 (*) [16])(plVar29 + 0x25) = auVar48;
                    plVar29[0x23] = lVar39;
                    plVar29[0x24] = lVar44;
LAB_14090ebbc:
                    (**(code **)(*plVar29 + 8))(plVar29,uVar37);
                    if ((bVar11 & (byte)local_108) == 1) {
                      *(byte *)(param_1 + 0xf3) =
                           *(byte *)(param_1 + 0xf3) & 0xfd |
                           ((*(byte *)(param_1 + 0xf3) & 2) >> 1 |
                           *(char *)((longlong)plVar29 + 0xd1) == '\x01') * '\x02';
                    }
                  }
                  (**(code **)(**(longlong **)(param_1[0x21] + lVar35) + 0x80))();
                  if (plVar21 != (longlong *)0x0) {
                    LOCK();
                    plVar29 = plVar21 + 1;
                    *(int *)plVar29 = (int)*plVar29 + -1;
                    UNLOCK();
                    if ((int)*plVar29 == 0) {
                      (**(code **)*plVar21)(plVar21);
                      LOCK();
                      piVar27 = (int *)((longlong)plVar21 + 0xc);
                      *piVar27 = *piVar27 + -1;
                      UNLOCK();
                      if (*piVar27 == 0) {
                        (**(code **)(*plVar21 + 0x10))(plVar21);
                      }
                    }
                  }
                  ppuVar30 = ppuVar30 + 9;
                  uVar37 = (ulonglong)((int)uVar37 + 1);
                  lVar35 = lVar35 + 0x10;
                } while (local_f8 != ppuVar30);
              }
              puVar6 = param_1[7];
              ppuVar22 = local_e8;
              if ((puVar6[100] & 1) == 0) {
                if (*(char *)(param_1 + 0x10c) == '\0') {
                  local_100[4] = (undefined *)0x0;
                  local_100[5] = (undefined *)0x0;
                  local_100[2] = (undefined *)0x0;
                  local_100[3] = (undefined *)0x0;
                  *local_100 = (undefined *)0x0;
                  local_100[1] = (undefined *)0x0;
                  *(undefined1 *)(local_100 + 6) = 0;
                }
              }
              else {
                puVar8 = *(undefined **)(puVar6 + 0x410);
                puVar9 = *(undefined **)(puVar6 + 0x418);
                auVar48 = *(undefined1 (*) [16])(puVar6 + 0x420);
                auVar50 = *(undefined1 (*) [16])(puVar6 + 0x430);
                local_100[6] = *(undefined **)(puVar6 + 0x440);
                *(undefined1 (*) [16])(local_100 + 4) = auVar50;
                *(undefined1 (*) [16])(local_100 + 2) = auVar48;
                *local_100 = puVar8;
                local_100[1] = puVar9;
              }
            }
            FUN_1404e71ba(param_1);
            if ((longlong)*(int *)(param_1 + 0x4a) != 0) {
              plVar29 = (longlong *)param_1[0x49];
              plVar21 = plVar29 + (longlong)*(int *)(param_1 + 0x4a) * 7;
              do {
                lVar35 = *plVar29;
                local_d8 = ppuVar22;
                cVar12 = FUN_1448b0bbc(plVar29 + 1,lVar35,ppuVar22,0);
                if (cVar12 != '\0') {
                  FUN_1401a642c(lVar35 + 0x70);
                }
                plVar29 = plVar29 + 7;
              } while (plVar29 != plVar21);
            }
            FUN_1447cea0c(param_1);
            FUN_144af3116(param_1);
          }
        }
      }
      goto LAB_14090e1b7;
    }
    if (cVar12 == '\x01') {
      FUN_143ac6926(param_1);
    }
  }
  puVar6 = param_1[0x21];
  lVar35 = (longlong)*(int *)(param_1 + 0x22);
  if (lVar35 == 0) {
    bVar45 = true;
  }
  else {
    lVar39 = 0;
    do {
      bVar45 = *(int *)(*(longlong *)(puVar6 + lVar39) + 0xd4) - 3U < 2;
      if (!bVar45) break;
      bVar46 = lVar35 * 0x10 + -0x10 != lVar39;
      lVar39 = lVar39 + 0x10;
    } while (bVar46);
  }
  if (((ulonglong)param_1[0x10d] & 0xfffffffb) != 0) {
    *(undefined4 *)(param_1 + 0x10d) = 0;
  }
  if (bVar45) {
    if (1 < *(int *)((longlong)param_1 + 0x86c) - 3U) {
      *(undefined4 *)((longlong)param_1 + 0x86c) = 3;
    }
    FUN_143ac678c(param_1,1);
    goto LAB_14090fa91;
  }
  if ((char)uVar37 == '\0') {
    if ((*(uint *)((longlong)param_1 + 0x86c) & 0xfffffffb) != 0) {
      *(byte *)(param_1 + 0xf3) = *(byte *)(param_1 + 0xf3) | 1;
      *(undefined4 *)((longlong)param_1 + 0x86c) = 0;
      if (*(int *)(param_1 + 0x22) != 0) {
        lVar39 = 0;
        do {
          lVar44 = (**(code **)(**(longlong **)(puVar6 + lVar39) + 0x68))();
          if ((lVar44 != 0) && (*(int *)(lVar44 + 0xd4) != 4)) {
            *(undefined4 *)(lVar44 + 0xd4) = 0;
          }
          lVar39 = lVar39 + 0x10;
        } while (lVar35 * 0x10 != lVar39);
      }
    }
  }
  else {
    FUN_1404e71ba(param_1);
    if ((param_1[8] != (undefined *)0x0) && (((ulonglong)param_1[0xf3] & 0x20) == 0)) {
      FUN_1448b09be();
    }
    iVar14 = *(int *)(param_1 + 0x22);
    if ((longlong)iVar14 != 0) {
      puVar6 = param_1[0x21];
      lVar35 = 0;
      do {
        (**(code **)(**(longlong **)(puVar6 + lVar35) + 0x30))();
        lVar35 = lVar35 + 0x10;
      } while ((longlong)iVar14 * 0x10 != lVar35);
    }
    if ((*(uint *)((longlong)param_1 + 0x86c) & 0xfffffffb) == 0) {
      bVar11 = *(byte *)(param_1 + 0xf3) | 0x20;
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x86c) = 0;
      bVar11 = *(byte *)(param_1 + 0xf3) | 0x21;
      *(byte *)(param_1 + 0xf3) = bVar11;
      iVar14 = *(int *)(param_1 + 0x22);
      if ((longlong)iVar14 != 0) {
        puVar6 = param_1[0x21];
        lVar35 = 0;
        do {
          lVar39 = (**(code **)(**(longlong **)(puVar6 + lVar35) + 0x68))();
          if ((lVar39 != 0) && (*(int *)(lVar39 + 0xd4) != 4)) {
            *(undefined4 *)(lVar39 + 0xd4) = 0;
          }
          lVar35 = lVar35 + 0x10;
        } while ((longlong)iVar14 * 0x10 != lVar35);
        bVar11 = *(byte *)(param_1 + 0xf3);
      }
    }
    *(byte *)(param_1 + 0xf3) = bVar11 & 0xf3;
    if ((param_1[7] != (undefined *)0x0) && (*(int *)((longlong)param_1 + 0x86c) != 4)) {
      FUN_140336cb8(param_1);
      if (param_1[0xf6] != (undefined *)0x0) {
        FUN_14005a35e(param_1);
      }
      plVar29 = (longlong *)param_1[8];
      if (plVar29 != (longlong *)0x0) {
        if ((*(uint *)(plVar29 + 0x10) & 8) != 0) {
          fVar3 = *(float *)((longlong)param_1 + 0x14);
          fVar4 = *(float *)(param_1 + 2);
          fVar5 = *(float *)((longlong)param_1 + 0xc);
          uVar28 = *(uint *)(plVar29 + 0x10) & 0xfffffff7;
          *(uint *)(plVar29 + 0x10) = uVar28;
          lVar35 = plVar29[0xb];
          if ((longlong)(int)lVar35 != 0) {
            lVar39 = plVar29[10];
            uVar37 = 0;
            do {
              local_d8 = *(undefined ***)(lVar39 + uVar37);
              uVar19 = FUN_144830b78(&ppuStack_d0,&DAT_14cb42130);
              ppuStack_d0 = (undefined **)CONCAT44(ppuStack_d0._4_4_,uVar19);
              local_c8 = (undefined ***)0x0;
              ppuStack_c0 = (undefined **)0x0;
              piVar27 = (int *)(**(code **)(*plVar29 + 0x58))(plVar29,&local_d8,0);
              if ((piVar27 != (int *)0x0) && (lVar44 = (longlong)*piVar27, lVar44 != -1)) {
                dVar47 = *(double *)(lVar39 + 0x10 + uVar37);
                dVar49 = *(double *)(lVar39 + 0x18 + uVar37);
                lVar38 = plVar29[4];
                *(float *)(lVar38 + lVar44) =
                     (float)(*(double *)(lVar39 + 8 + uVar37) - (double)fVar5 * 65536.0);
                *(float *)(lVar38 + 4 + lVar44) = (float)(dVar47 - (double)fVar4 * 65536.0);
                *(float *)(lVar38 + 8 + lVar44) = (float)(dVar49 - (double)fVar3 * 65536.0);
              }
              if (local_c8 != (undefined ***)0x0) {
                FUN_1400020a8();
              }
              uVar37 = uVar37 + 0x20;
            } while ((longlong)(int)lVar35 * 0x20 != uVar37);
            uVar28 = *(uint *)(plVar29 + 0x10);
            param_1 = local_118;
          }
          *(uint *)(plVar29 + 0x10) = uVar28 | 1;
          plVar29 = (longlong *)param_1[8];
        }
        if ((0 < (int)plVar29[0xd]) && ((*(byte *)(plVar29 + 0x10) & 7) != 0)) {
          FUN_14004222e(plVar29);
        }
        *(byte *)(plVar29 + 0x10) = *(byte *)(plVar29 + 0x10) & 0xf8;
      }
      if ((0 < *(int *)(param_1 + 0x4a)) && (((ulonglong)param_1[0x4d] & 7) != 0)) {
        FUN_14004222e(param_1 + 0x3d);
      }
      *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x4d) & 0xf8;
      local_108 = param_1 + 0x3d;
      FUN_140389b3e(param_1);
      pppuVar23 = (undefined ***)param_1[0x10f];
      if (pppuVar23 != (undefined ***)0x0) {
        ppuVar30 = (undefined **)local_118[0x10e];
        lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar14 = *(int *)(lVar35 + 0xc60);
        if (DAT_14c86a9fc == 0) {
          if (iVar14 != 2) {
            if (iVar14 != 1) goto LAB_14090e48b;
            DVar17 = FUN_140ad26c0();
            DVar18 = GetCurrentThreadId();
            if (DVar17 == DVar18) goto LAB_14090e494;
            goto LAB_14090ee3e;
          }
        }
        else {
LAB_14090e48b:
          if (iVar14 != 0x10) {
LAB_14090ee3e:
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (iVar14 = *(int *)(lVar35 + 0xc60), iVar14 == 2)) {
LAB_140910ef5:
                iVar14 = *(int *)(pppuVar23 + 0xb);
                lVar35 = (longlong)iVar14;
                iVar15 = iVar14;
                if (0 < lVar35) {
                  lVar39 = 0;
                  do {
                    FUN_1481c9124((longlong)pppuVar23[10] + lVar39);
                    lVar39 = lVar39 + 0x58;
                  } while (lVar35 * 0x58 - lVar39 != 0);
                  iVar15 = *(int *)(pppuVar23 + 0xb);
                }
                if (iVar14 != 0) {
                  ppuVar30 = pppuVar23[10];
                  FUN_144727c04(ppuVar30);
                  iVar41 = iVar14;
                  if (*(int *)(pppuVar23 + 0xb) - iVar14 != 0) {
                    memmove(ppuVar30,ppuVar30 + lVar35 * 0xb,
                            (longlong)(*(int *)(pppuVar23 + 0xb) - iVar14) * 0x58);
                    iVar41 = *(int *)(pppuVar23 + 0xb);
                  }
                  *(int *)(pppuVar23 + 0xb) = iVar41 - iVar14;
                  if (iVar14 == iVar15) {
                    FUN_144727c3a(pppuVar23 + 10);
                  }
                }
                iVar14 = *(int *)(pppuVar23 + 9);
                if ((longlong)iVar14 != 0) {
                  ppuVar30 = pppuVar23[8];
                  lVar35 = 0;
                  do {
                    lVar39 = *(longlong *)((longlong)ppuVar30 + lVar35);
                    *(undefined1 *)(lVar39 + 0x228) = 0;
                    *(undefined4 *)(lVar39 + 0x274) = 0;
                    *(undefined4 *)(*(longlong *)(lVar39 + 0x1f0) + 0x5c) = 0xffffffff;
                    *(undefined4 *)(*(longlong *)(lVar39 + 0x1f8) + 0x5c) = 0xffffffff;
                    lVar35 = lVar35 + 8;
                  } while ((longlong)iVar14 * 8 != lVar35);
                }
                goto LAB_14090eee4;
              }
              if (iVar14 == 1) {
                DVar17 = FUN_140ad26c0();
                DVar18 = GetCurrentThreadId();
                if (DVar17 == DVar18) goto LAB_140910ef5;
              }
            }
            if (DAT_14ca9a43c == 0) {
              puVar31 = (undefined8 *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308)
              ;
              puVar26 = (uint *)*puVar31;
              if (puVar26 != (uint *)0x0) goto LAB_140910172;
              while( true ) {
                uVar28 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar28 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar28 | 1;
                  __tlregdtor(&LAB_143acaafd);
                }
                lVar35 = *(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                puVar25 = *(undefined4 **)(lVar35 + 0x310);
                *(undefined8 *)(lVar35 + 0x310) = 0;
                if (puVar25 == (undefined4 *)0x0) {
                  puVar25 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar25 = 0xffffffff;
                *(undefined4 **)(puVar25 + 0x10) = puVar25 + 0x16;
                puVar25[0x12] = 0;
                *puVar31 = puVar25;
                FUN_140217a48(puVar31);
                puVar26 = (uint *)*puVar31;
LAB_140910172:
                puVar36 = (undefined8 *)(*(longlong *)(puVar26 + 0x10) + 7U & 0xfffffffffffffff8);
                puVar34 = (uint *)(puVar36 + 0x17);
                uVar28 = puVar26[0x12];
                if (puVar34 <= puVar26 + 0x4000) break;
                while( true ) {
                  *(uint **)(puVar26 + 0x10) = puVar26 + 0x4000;
                  LOCK();
                  uVar16 = *puVar26;
                  *puVar26 = *puVar26 + uVar28 + 1;
                  UNLOCK();
                  if ((uVar16 ^ uVar28) != 0xffffffff) break;
                  puVar26 = (uint *)*puVar31;
                  *puVar26 = 0xffffffff;
                  *(uint **)(puVar26 + 0x10) = puVar26 + 0x16;
                  puVar26[0x12] = 0;
                  *puVar31 = puVar26;
                  puVar36 = (undefined8 *)((longlong)puVar26 + 0x5fU & 0xfffffffffffffff8);
                  puVar34 = (uint *)(puVar36 + 0x17);
                  uVar28 = 0;
                  if (puVar34 <= puVar26 + 0x4000) {
                    uVar28 = 1;
                    goto LAB_1409101f2;
                  }
                }
              }
              uVar28 = uVar28 + 1;
LAB_1409101f2:
              *(uint **)(puVar26 + 0x10) = puVar34;
              puVar26[0x12] = uVar28;
              iVar14 = 0;
              FUN_1447247dc(puVar36,0);
              *puVar36 = &PTR_FUN_14ae26918;
              puVar36[0x15] = pppuVar23;
              puVar36[0x16] = ppuVar30;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar28 = DAT_14c7585c8 >> 10 & 3;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar28 < 2) {
                  uVar43 = (ulonglong)(byte)(&DAT_149e38edc)[uVar28];
                }
                else {
                  uVar43 = 2;
                }
              }
              else {
                iVar14 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                         *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar43 = 5;
              }
              if (*(code **)(puVar36[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar36[0xe] + 0x18))(puVar36 + 0xe,puVar36 + 9);
              }
              puVar36[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar36[9] = puVar36;
              puVar36[10] = puVar36;
              lVar35 = *(longlong *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
              ;
              if (lVar35 == 0) {
                uVar10 = 1;
                if ((char)uVar43 != '\x06') {
                  uVar10 = uVar43;
                }
                uVar43 = uVar10;
                uVar20 = 0;
              }
              else {
                if ((char)uVar43 == '\x06') {
                  uVar43 = *(ulonglong *)(lVar35 + 0x38) >> 0x3b;
                }
                uVar20 = *(undefined8 *)(lVar35 + 0x30);
              }
              puVar36[0xf] = uVar20;
              puVar36[0x10] = uVar43 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)puVar36 + 0x1c) = iVar14;
              if (puVar36 == (undefined8 *)0x0) {
                local_d8 = (undefined **)CONCAT71(local_d8._1_7_,1);
                FUN_1447439e4(0);
              }
              else {
                LOCK();
                *(int *)(puVar36 + 1) = *(int *)(puVar36 + 1) + 1;
                UNLOCK();
                local_d8 = (undefined **)CONCAT71(local_d8._1_7_,1);
                FUN_1447439e4(puVar36);
                LOCK();
                piVar27 = (int *)(puVar36 + 1);
                *piVar27 = *piVar27 + -1;
                UNLOCK();
                if (*piVar27 == 0) {
                  (**(code **)*puVar36)(puVar36,1);
                }
              }
            }
            else {
              local_128 = &local_d8;
              local_c8 = (undefined ***)0x0;
              local_b8 = &PTR_LAB_14ae268d0;
              local_d8 = (undefined **)FUN_143acc56e;
              local_b0 = pppuVar23;
              local_a8 = ppuVar30;
              FUN_14005a792(&DAT_14ca9a440,L"ClearTicksFromProxy",&DAT_14cb439a4);
              if (local_d8 != (undefined **)0x0) {
                pppuVar23 = local_c8;
                if (local_c8 == (undefined ***)0x0) {
                  pppuVar23 = &local_b8;
                }
                (*(code *)(*pppuVar23)[2])();
              }
            }
            goto LAB_14090eee4;
          }
        }
LAB_14090e494:
        iVar14 = *(int *)(pppuVar23 + 0xb);
        lVar35 = (longlong)iVar14;
        iVar15 = iVar14;
        if (0 < lVar35) {
          lVar39 = 0;
          do {
            FUN_1481c9124((longlong)pppuVar23[10] + lVar39);
            lVar39 = lVar39 + 0x58;
          } while (lVar35 * 0x58 - lVar39 != 0);
          iVar15 = *(int *)(pppuVar23 + 0xb);
        }
        if (iVar14 != 0) {
          ppuVar30 = pppuVar23[10];
          FUN_144727c04(ppuVar30);
          iVar41 = iVar14;
          if (*(int *)(pppuVar23 + 0xb) - iVar14 != 0) {
            memmove(ppuVar30,ppuVar30 + lVar35 * 0xb,
                    (longlong)(*(int *)(pppuVar23 + 0xb) - iVar14) * 0x58);
            iVar41 = *(int *)(pppuVar23 + 0xb);
          }
          *(int *)(pppuVar23 + 0xb) = iVar41 - iVar14;
          if (iVar14 == iVar15) {
            FUN_144727c3a(pppuVar23 + 10);
          }
        }
        iVar14 = *(int *)(pppuVar23 + 9);
        if ((longlong)iVar14 != 0) {
          ppuVar30 = pppuVar23[8];
          lVar35 = 0;
          do {
            lVar39 = *(longlong *)((longlong)ppuVar30 + lVar35);
            *(undefined1 *)(lVar39 + 0x228) = 0;
            *(undefined4 *)(lVar39 + 0x274) = 0;
            *(undefined4 *)(*(longlong *)(lVar39 + 0x1f0) + 0x5c) = 0xffffffff;
            *(undefined4 *)(*(longlong *)(lVar39 + 0x1f8) + 0x5c) = 0xffffffff;
            lVar35 = lVar35 + 8;
          } while ((longlong)iVar14 * 8 != lVar35);
        }
      }
LAB_14090eee4:
      ppuVar22 = local_118;
      ppuVar30 = local_118 + 0x39;
      iVar14 = *(int *)((longlong)local_118 + 0x1d4);
      FUN_14183a82e(local_118[0x39],*(undefined4 *)(local_118 + 0x3a));
      *(undefined4 *)(ppuVar22 + 0x3a) = 0;
      if ((iVar14 < 0) && (*(int *)((longlong)ppuVar22 + 0x1d4) != 0)) {
        FUN_1481f7fa2(ppuVar30);
      }
      ppuVar42 = ppuVar22 + 0x3b;
      iVar14 = *(int *)((longlong)ppuVar22 + 0x1e4);
      local_100 = ppuVar30;
      FUN_14183a82e(ppuVar22[0x3b],*(undefined4 *)(ppuVar22 + 0x3c));
      *(undefined4 *)(ppuVar22 + 0x3c) = 0;
      if ((iVar14 < 0) && (*(int *)((longlong)ppuVar22 + 0x1e4) != 0)) {
        FUN_1481f7fa2(ppuVar42);
      }
      local_e8 = ppuVar42;
      if ((longlong)*(int *)(ppuVar22 + 0x22) != 0) {
        ppuVar30 = (undefined **)ppuVar22[0x21];
        local_f8 = ppuVar30 + (longlong)*(int *)(ppuVar22 + 0x22) * 2;
        do {
          local_110 = ppuVar30;
          lVar35 = (**(code **)(*(longlong *)*ppuVar30 + 0x68))();
          if (lVar35 != 0) {
            lVar39 = *(longlong *)(lVar35 + 0x1a8);
            if ((lVar39 != 0) && (iVar14 = *(int *)(lVar39 + 0x3a0), (longlong)iVar14 != 0)) {
              uVar37 = *(ulonglong *)(lVar39 + 0x398);
              lVar39 = 0;
              do {
                iVar15 = *(int *)(uVar37 + lVar39);
                if (((longlong)iVar15 != -1) && (iVar15 < *(int *)(ppuVar22 + 0x44))) {
                  iVar41 = *(int *)(uVar37 + 4 + lVar39);
                  if (((longlong)iVar41 != -1) && (iVar41 < *(int *)(lVar35 + 0x210))) {
                    lVar44 = *(longlong *)(ppuVar22[0x43] + (longlong)iVar15 * 8);
                    lVar38 = *(longlong *)(lVar35 + 0x208);
                    if ((lVar44 != 0) && (DAT_14c950c29 != '\0')) {
                      FUN_1456cec3c(lVar44);
                    }
                    *(longlong *)(lVar38 + (longlong)iVar41 * 8) = lVar44;
                    *(byte *)(lVar35 + 600) = *(byte *)(lVar35 + 600) | 2;
                  }
                }
                lVar39 = lVar39 + 8;
              } while ((longlong)iVar14 * 8 != lVar39);
            }
            lVar39 = *(longlong *)(lVar35 + 0x450);
            if ((lVar39 != 0) && (iVar14 = *(int *)(lVar39 + 0x3a0), (longlong)iVar14 != 0)) {
              uVar37 = *(ulonglong *)(lVar39 + 0x398);
              lVar39 = 0;
              do {
                iVar15 = *(int *)(uVar37 + lVar39);
                if (((longlong)iVar15 != -1) && (iVar15 < *(int *)(ppuVar22 + 0x44))) {
                  iVar41 = *(int *)(uVar37 + 4 + lVar39);
                  if (((longlong)iVar41 != -1) && (iVar41 < *(int *)(lVar35 + 0x4b8))) {
                    lVar44 = *(longlong *)(ppuVar22[0x43] + (longlong)iVar15 * 8);
                    lVar38 = *(longlong *)(lVar35 + 0x4b0);
                    if ((lVar44 != 0) && (DAT_14c950c29 != '\0')) {
                      FUN_1456cec3c(lVar44);
                    }
                    *(longlong *)(lVar38 + (longlong)iVar41 * 8) = lVar44;
                    *(byte *)(lVar35 + 0x500) = *(byte *)(lVar35 + 0x500) | 2;
                  }
                }
                lVar39 = lVar39 + 8;
              } while ((longlong)iVar14 * 8 != lVar39);
            }
            lVar39 = *(longlong *)(lVar35 + 0x18);
            if ((lVar39 != 0) && (lVar44 = *(longlong *)(lVar39 + 0x58), lVar44 != 0)) {
              uVar37 = 0;
              if ((longlong)*(int *)(lVar44 + 0x3a0) != 0) {
                lVar38 = *(longlong *)(lVar44 + 0x398);
                uVar37 = (longlong)*(int *)(lVar44 + 0x3a0) * 8;
                uVar43 = 0;
                do {
                  iVar14 = *(int *)(lVar38 + uVar43);
                  if (((longlong)iVar14 != -1) && (iVar14 < *(int *)(ppuVar22 + 0x44))) {
                    iVar15 = *(int *)(lVar38 + 4 + uVar43);
                    if (((longlong)iVar15 != -1) && (iVar15 < *(int *)(lVar39 + 0xb0))) {
                      lVar44 = *(longlong *)(ppuVar22[0x43] + (longlong)iVar14 * 8);
                      lVar7 = *(longlong *)(lVar39 + 0xa8);
                      if ((lVar44 != 0) && (DAT_14c950c29 != '\0')) {
                        FUN_1456cec3c(lVar44);
                      }
                      *(longlong *)(lVar7 + (longlong)iVar15 * 8) = lVar44;
                      *(byte *)(lVar39 + 0xf8) = *(byte *)(lVar39 + 0xf8) | 2;
                      ppuVar22 = local_118;
                    }
                  }
                  uVar43 = uVar43 + 8;
                } while (uVar37 != uVar43);
              }
            }
            plVar29 = *(longlong **)(lVar35 + 0x728);
            if ((plVar29 != (longlong *)0x0) && ((longlong)(int)plVar29[1] != 0)) {
              lVar35 = *plVar29;
              lVar39 = (longlong)(int)plVar29[1] * 0x2a8 + lVar35;
              do {
                lVar44 = *(longlong *)(lVar35 + 8);
                if ((lVar44 != 0) && (uVar37 = (ulonglong)*(int *)(lVar44 + 0x3a0), uVar37 != 0)) {
                  lVar44 = *(longlong *)(lVar44 + 0x398);
                  uVar37 = uVar37 * 8;
                  uVar43 = 0;
                  do {
                    iVar14 = *(int *)(lVar44 + uVar43);
                    if (((longlong)iVar14 != -1) && (iVar14 < *(int *)(ppuVar22 + 0x44))) {
                      iVar15 = *(int *)(lVar44 + 4 + uVar43);
                      if (((longlong)iVar15 != -1) && (iVar15 < *(int *)(lVar35 + 0x70))) {
                        lVar38 = *(longlong *)(ppuVar22[0x43] + (longlong)iVar14 * 8);
                        lVar7 = *(longlong *)(lVar35 + 0x68);
                        if ((lVar38 != 0) && (DAT_14c950c29 != '\0')) {
                          FUN_1456cec3c(lVar38);
                        }
                        *(longlong *)(lVar7 + (longlong)iVar15 * 8) = lVar38;
                        *(byte *)(lVar35 + 0xb8) = *(byte *)(lVar35 + 0xb8) | 2;
                        ppuVar22 = local_118;
                      }
                    }
                    uVar43 = uVar43 + 8;
                  } while (uVar37 != uVar43);
                }
                lVar35 = lVar35 + 0x2a8;
              } while (lVar35 != lVar39);
            }
          }
          ppuVar30 = local_110 + 2;
        } while (ppuVar30 != local_f8);
      }
      local_dc = 0;
      *(undefined4 *)(ppuVar22 + 0x2e) = 0;
      if (*(int *)((longlong)ppuVar22 + 0x174) != 0) {
        FUN_140389c92(ppuVar22 + 0x2d);
      }
      pppuVar23 = &local_d8;
      ppuStack_d0 = (undefined **)&local_dc;
      local_128 = (undefined ***)((ulonglong)local_128 & 0xffffffffffffff00);
      local_110 = ppuVar22 + 0x2d;
      local_d8 = ppuVar22;
      FUN_143ac6f32(pppuVar23,local_108,0,0);
      local_128._0_1_ = 1;
      FUN_143ac6f32(pppuVar23,*(longlong *)(ppuVar22[4] + 0x430) + 0x38,1,0);
      local_128 = (undefined ***)CONCAT71(local_128._1_7_,1);
      FUN_143ac6f32(pppuVar23,*(longlong *)(ppuVar22[4] + 0x438) + 0x38,1,0);
      if ((longlong)*(int *)(ppuVar22 + 0x22) != 0) {
        puVar31 = (undefined8 *)local_118[0x21];
        puVar36 = puVar31 + (longlong)*(int *)(ppuVar22 + 0x22) * 2;
        do {
          lVar35 = (**(code **)(*(longlong *)*puVar31 + 0x68))();
          if ((lVar35 != 0) && (*(int *)(lVar35 + 0xd4) != 4)) {
            cVar12 = *(char *)(lVar35 + 0xd1);
            pppuVar23 = (undefined ***)CONCAT71((int7)((ulonglong)pppuVar23 >> 8),cVar12 != '\x01');
            uVar37 = CONCAT71((int7)(uVar37 >> 8),cVar12 == '\x01');
            local_128 = (undefined ***)((ulonglong)local_128 & 0xffffffffffffff00);
            FUN_143ac6f32(&local_d8,lVar35 + 0x1d8,(ulonglong)pppuVar23 & 0xffffffff,
                          uVar37 & 0xffffffff);
            local_128 = (undefined ***)((ulonglong)local_128 & 0xffffffffffffff00);
            FUN_143ac6f32(&local_d8,lVar35 + 0x480,(ulonglong)pppuVar23 & 0xffffffff,
                          uVar37 & 0xffffffff);
            plVar29 = *(longlong **)(lVar35 + 0x728);
            if (plVar29 != (longlong *)0x0) {
              uVar37 = 0xffffffffffffffff;
              lVar39 = 0x38;
              do {
                uVar37 = uVar37 + 1;
                if ((longlong)(int)plVar29[1] <= (longlong)uVar37) break;
                local_128 = (undefined ***)((ulonglong)local_128 & 0xffffffffffffff00);
                FUN_143ac6f32(&local_d8,lVar39 + *plVar29,(ulonglong)pppuVar23 & 0xffffffff,
                              cVar12 == '\x01');
                plVar29 = *(longlong **)(lVar35 + 0x728);
                lVar39 = lVar39 + 0x2a8;
              } while (plVar29 != (longlong *)0x0);
            }
            if ((*(longlong *)(lVar35 + 0x18) != 0) && (*(char *)(lVar35 + 0xd1) == '\x01')) {
              local_128 = (undefined ***)((ulonglong)local_128 & 0xffffffffffffff00);
              FUN_143ac6f32(&local_d8,*(longlong *)(lVar35 + 0x18) + 0x78,
                            (ulonglong)pppuVar23 & 0xffffffff,cVar12 == '\x01');
            }
            FUN_143a8398c(lVar35);
          }
          puVar31 = puVar31 + 2;
        } while (puVar31 != puVar36);
      }
      ppuVar30 = local_110;
      param_1 = local_118;
      iVar14 = *(int *)(local_118 + 0x28);
      if (iVar14 < local_dc) {
        *(int *)(local_118 + 0x28) = local_dc;
        if ((uint)(*(int *)((longlong)local_118 + 0x144) - iVar14) < (uint)(local_dc - iVar14)) {
          FUN_1400ef140(local_118 + 0x27);
        }
      }
      else {
        if (local_dc < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(local_dc);
        }
        if (local_dc < iVar14) {
          *(int *)(local_118 + 0x28) = local_dc;
          FUN_14704216a();
        }
      }
      *(byte *)(param_1 + 0xf3) = *(byte *)(param_1 + 0xf3) | 0x10;
      ppuVar22 = param_1 + 0x29;
      *(undefined4 *)(param_1 + 0x2a) = 0;
      if (*(int *)((longlong)param_1 + 0x154) != 0) {
        FUN_14481578e(ppuVar22,0);
      }
      ppuVar42 = param_1 + 0x2b;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      if (*(int *)((longlong)param_1 + 0x164) != 0) {
        FUN_14481578e(ppuVar42,0);
      }
      *(undefined4 *)((longlong)param_1 + 0x89c) = 0;
      ppuVar2 = param_1 + 0x114;
      *(undefined4 *)(param_1 + 0x115) = 0;
      if (*(int *)((longlong)param_1 + 0x8ac) != 0) {
        FUN_140389c92(ppuVar2);
      }
      iVar14 = *(int *)(param_1 + 0x2e);
      local_f8 = ppuVar2;
      if (iVar14 < 1) {
        bVar11 = *(byte *)(param_1 + 0xf3);
      }
      else {
        lVar39 = 8;
        lVar35 = 0;
        local_108 = ppuVar42;
        do {
          puVar6 = *ppuVar30;
          if ((((*(int *)(puVar6 + lVar39 + -4) == 0) ||
               (uVar28 = *(uint *)(puVar6 + lVar39 + -8), (int)uVar28 < 0)) ||
              (DAT_14c9647dc <= (int)uVar28)) ||
             (((plVar29 = (longlong *)
                          ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8)),
               plVar29 == (longlong *)0x0 || ((int)plVar29[2] != *(int *)(puVar6 + lVar39 + -4))) ||
              (((*(uint *)(plVar29 + 1) & 0x10200000) != 0 ||
               (plVar29 = (longlong *)*plVar29, plVar29 == (longlong *)0x0)))))) {
            bVar11 = *(byte *)(local_118 + 0xf3) & 0xef;
            param_1 = local_118;
          }
          else {
            cVar12 = (**(code **)(*plVar29 + 0x338))(plVar29);
            if (cVar12 != '\0') {
              iVar14 = *(int *)(local_118 + 0x2a);
              *(uint *)(local_118 + 0x2a) = iVar14 + 1U;
              if (*(uint *)((longlong)local_118 + 0x154) < iVar14 + 1U) {
                FUN_1446f48e2(ppuVar22,iVar14);
              }
              *(int *)(*ppuVar22 + (longlong)iVar14 * 4) = (int)lVar35;
            }
            cVar12 = (**(code **)(*plVar29 + 0x340))();
            if (cVar12 != '\0') {
              iVar14 = *(int *)(local_118 + 0x2c);
              *(uint *)(local_118 + 0x2c) = iVar14 + 1U;
              if (*(uint *)((longlong)local_118 + 0x164) < iVar14 + 1U) {
                FUN_1446f48e2(ppuVar42,iVar14);
              }
              *(int *)(*ppuVar42 + (longlong)iVar14 * 4) = (int)lVar35;
            }
            if (((*(byte *)(plVar29 + 6) & 4) != 0) &&
               (iVar14 = (**(code **)(*plVar29 + 0x310))(), ppuVar2 = local_f8, 0 < iVar14)) {
              iVar15 = *(int *)(local_118 + 0x115);
              lVar44 = (longlong)iVar15;
              *(uint *)(local_118 + 0x115) = iVar15 + 1U;
              if (*(uint *)((longlong)local_118 + 0x8ac) < iVar15 + 1U) {
                FUN_14183a168(local_f8,iVar15);
              }
              puVar8 = *ppuVar2;
              *(undefined8 *)(puVar8 + lVar44 * 0xc) = 0;
              uVar28 = *(uint *)((longlong)plVar29 + 0xc);
              *(uint *)(puVar8 + lVar44 * 0xc) = uVar28;
              if ((int)uVar28 < DAT_14c9647dc) {
                lVar38 = (ulonglong)((uVar28 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8);
              }
              else {
                lVar38 = 0;
              }
              iVar15 = *(int *)(lVar38 + 0x10);
              if (*(int *)(lVar38 + 0x10) == 0) {
                LOCK();
                iVar15 = DAT_14c964868 + 1;
                UNLOCK();
                iVar41 = DAT_14c964868 + 1;
                bVar45 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar15;
                if (bVar45) {
                  local_ec = iVar41;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar41);
                  iVar41 = local_ec;
                }
                LOCK();
                iVar15 = *(int *)(lVar38 + 0x10);
                bVar45 = iVar15 == 0;
                if (bVar45) {
                  *(int *)(lVar38 + 0x10) = iVar41;
                  iVar15 = 0;
                }
                UNLOCK();
                if (bVar45) {
                  iVar15 = iVar41;
                }
              }
              *(int *)(puVar8 + lVar44 * 0xc + 4) = iVar15;
              *(undefined4 *)(puVar8 + lVar44 * 0xc + 8) = *(undefined4 *)(puVar6 + lVar39);
              *(int *)((longlong)local_118 + 0x89c) =
                   *(int *)((longlong)local_118 + 0x89c) + (iVar14 + 0xfU & 0xfffffff0);
              ppuVar30 = local_110;
              ppuVar42 = local_108;
            }
            param_1 = local_118;
            if ((*(int *)(puVar6 + lVar39 + -4) == 0) ||
               (uVar28 = *(uint *)(puVar6 + lVar39 + -8), (int)uVar28 < 0)) {
LAB_14090f7c8:
              plVar29 = (longlong *)0x0;
            }
            else {
              plVar29 = (longlong *)0x0;
              if ((int)uVar28 < DAT_14c9647dc) {
                puVar31 = (undefined8 *)
                          ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8));
                if (((puVar31 == (undefined8 *)0x0) ||
                    (*(int *)(puVar31 + 2) != *(int *)(puVar6 + lVar39 + -4))) ||
                   ((*(uint *)(puVar31 + 1) & 0x10200000) != 0)) goto LAB_14090f7c8;
                plVar29 = (longlong *)*puVar31;
              }
            }
            cVar12 = (**(code **)(*plVar29 + 0x2d8))
                               (plVar29,local_118[0x27] + *(int *)(puVar6 + lVar39));
            bVar11 = *(byte *)(param_1 + 0xf3) & 0x10;
            if (cVar12 == '\0') {
              bVar11 = 0;
            }
            bVar11 = *(byte *)(param_1 + 0xf3) & 0xef | bVar11;
            iVar14 = *(int *)(param_1 + 0x2e);
          }
          *(byte *)(param_1 + 0xf3) = bVar11;
          lVar35 = lVar35 + 1;
          lVar39 = lVar39 + 0xc;
        } while (lVar35 < iVar14);
      }
      if ((((bVar11 & 0x10) != 0) || (*(int *)((longlong)param_1 + 0x86c) - 3U < 2)) ||
         ((byte)(*(char *)(param_1 + 1) - 1U) < 2)) {
        cVar12 = (**(code **)(**(longlong **)(param_1[4] + 0x430) + 0x30))
                           (*(longlong **)(param_1[4] + 0x430),param_1,local_100);
        cVar13 = (**(code **)(**(longlong **)(param_1[4] + 0x438) + 0x30))
                           (*(longlong **)(param_1[4] + 0x438),param_1);
        if ((cVar12 != '\0') && (cVar13 != '\0')) {
          if ((param_1[7][0x448] == '\x01') &&
             (iVar14 = *(int *)(param_1 + 0x22), (longlong)iVar14 != 0)) {
            puVar6 = param_1[0x21];
            lVar35 = 0;
            do {
              lVar39 = *(longlong *)(puVar6 + lVar35);
              if (((*(int *)(lVar39 + 0xd4) != 4) && (*(longlong *)(lVar39 + 0x18) != 0)) &&
                 (*(char *)(lVar39 + 0xd1) == '\x01')) {
                FUN_14811162e(*(longlong *)(lVar39 + 0x18),param_1);
              }
              lVar35 = lVar35 + 0x10;
            } while ((longlong)iVar14 * 0x10 != lVar35);
          }
          FUN_140126036(param_1 + 0x2f,*(undefined8 *)(*(longlong *)(param_1[4] + 0x430) + 8),
                        param_1);
          FUN_140126036(param_1 + 0x34,*(undefined8 *)(*(longlong *)(param_1[4] + 0x438) + 8));
          iVar14 = *(int *)(param_1 + 0x22);
          if ((longlong)iVar14 != 0) {
            puVar6 = param_1[0x21];
            lVar35 = 0;
            do {
              lVar39 = (**(code **)(**(longlong **)(puVar6 + lVar35) + 0x68))();
              if (lVar39 != 0) {
                FUN_1400f6834(lVar39);
              }
              lVar35 = lVar35 + 0x10;
            } while ((longlong)iVar14 * 0x10 != lVar35);
          }
          goto LAB_14090f975;
        }
      }
      FUN_143ac678c(param_1,1);
    }
  }
LAB_14090f975:
  ppuVar30 = local_118;
  if (*(int *)((longlong)param_1 + 0x86c) - 3U < 2) goto LAB_14090fa91;
  if ((((ulonglong)param_1[0xf3] & 2) != 0) && (local_118[0x10f] == (undefined *)0x0)) {
    puVar31 = (undefined8 *)((longlong)local_118 + 0xc);
    pppuVar23 = (undefined ***)FUN_14001cc68(0x60,0x10);
    *pppuVar23 = ppuVar30;
    uVar16 = 0;
    pppuVar23[1] = (undefined **)0x0;
    *(undefined4 *)(pppuVar23 + 2) = 0xffffffff;
    *(undefined8 *)((longlong)pppuVar23 + 0x14) = *puVar31;
    *(undefined4 *)((longlong)pppuVar23 + 0x1c) = *(undefined4 *)((longlong)ppuVar30 + 0x14);
    pppuVar23[4] = (undefined **)ppuVar30[0x20];
    *(undefined4 *)(pppuVar23 + 5) = 2;
    *(undefined4 *)(pppuVar23 + 6) = 0;
    pppuVar23[7] = (undefined **)0x0;
    pppuVar23[8] = (undefined **)0x0;
    pppuVar23[9] = (undefined **)0x0;
    pppuVar23[10] = (undefined **)0x0;
    pppuVar23[0xb] = (undefined **)0x0;
    uVar28 = 0;
    if ((((ulonglong)ppuVar30[0xf3] & 2) != 0) && ((longlong)*(int *)(ppuVar30 + 0x22) != 0)) {
      plVar29 = (longlong *)ppuVar30[0x21];
      plVar21 = plVar29 + (longlong)*(int *)(ppuVar30 + 0x22) * 2;
      do {
        lVar35 = *(longlong *)(*plVar29 + 0x18);
        if ((lVar35 != 0) && (iVar14 = *(int *)(lVar35 + 0xb0), (longlong)iVar14 != 0)) {
          lVar35 = *(longlong *)(lVar35 + 0xa8);
          lVar39 = 0;
          do {
            plVar24 = *(longlong **)(lVar35 + lVar39);
            if ((plVar24 != (longlong *)0x0) &&
               (cVar12 = (**(code **)(*plVar24 + 0x378))(), cVar12 != '\0')) {
              uVar28 = 1;
              ppuVar30 = local_118;
              goto LAB_14090fbc6;
            }
            lVar39 = lVar39 + 8;
          } while ((longlong)iVar14 * 8 != lVar39);
        }
        plVar29 = plVar29 + 2;
      } while (plVar29 != plVar21);
      uVar28 = 0;
      ppuVar30 = local_118;
    }
LAB_14090fbc6:
    *(uint *)((longlong)pppuVar23 + 0x2c) =
         *(uint *)((longlong)pppuVar23 + 0x2c) & 0xfffffffe | uVar28;
    if ((((ulonglong)ppuVar30[0xf3] & 2) != 0) && ((longlong)*(int *)(ppuVar30 + 0x22) != 0)) {
      plVar29 = (longlong *)ppuVar30[0x21];
      plVar21 = plVar29 + (longlong)*(int *)(ppuVar30 + 0x22) * 2;
      do {
        lVar35 = *(longlong *)(*plVar29 + 0x18);
        if ((lVar35 != 0) && (iVar14 = *(int *)(lVar35 + 0xb0), (longlong)iVar14 != 0)) {
          lVar35 = *(longlong *)(lVar35 + 0xa8);
          lVar39 = 0;
          do {
            plVar24 = *(longlong **)(lVar35 + lVar39);
            if ((plVar24 != (longlong *)0x0) &&
               (cVar12 = (**(code **)(*plVar24 + 0x380))(), cVar12 != '\0')) {
              uVar16 = 2;
              ppuVar30 = local_118;
              goto LAB_14090fc4d;
            }
            lVar39 = lVar39 + 8;
          } while ((longlong)iVar14 * 8 != lVar39);
        }
        plVar29 = plVar29 + 2;
      } while (plVar29 != plVar21);
      uVar16 = 0;
      ppuVar30 = local_118;
    }
LAB_14090fc4d:
    *(uint *)((longlong)pppuVar23 + 0x2c) =
         *(uint *)((longlong)pppuVar23 + 0x2c) & 0xfffffffd | uVar16;
    uVar28 = 0;
    if ((((ulonglong)ppuVar30[0xf3] & 2) != 0) && ((longlong)*(int *)(ppuVar30 + 0x22) != 0)) {
      plVar29 = (longlong *)ppuVar30[0x21];
      plVar21 = plVar29 + (longlong)*(int *)(ppuVar30 + 0x22) * 2;
      do {
        lVar35 = *(longlong *)(*plVar29 + 0x18);
        if ((lVar35 != 0) && (iVar14 = *(int *)(lVar35 + 0xb0), (longlong)iVar14 != 0)) {
          lVar35 = *(longlong *)(lVar35 + 0xa8);
          lVar39 = 0;
          do {
            plVar24 = *(longlong **)(lVar35 + lVar39);
            if ((plVar24 != (longlong *)0x0) &&
               (cVar12 = (**(code **)(*plVar24 + 0x388))(), cVar12 != '\0')) {
              uVar28 = 4;
              ppuVar30 = local_118;
              goto LAB_14090fcd6;
            }
            lVar39 = lVar39 + 8;
          } while ((longlong)iVar14 * 8 != lVar39);
        }
        plVar29 = plVar29 + 2;
      } while (plVar29 != plVar21);
      uVar28 = 0;
      ppuVar30 = local_118;
    }
LAB_14090fcd6:
    uVar16 = *(uint *)((longlong)pppuVar23 + 0x2c);
    *(uint *)((longlong)pppuVar23 + 0x2c) = uVar16 & 0xfffffffb | uVar28;
    if (((ulonglong)ppuVar30[0xf3] & 2) == 0) {
LAB_14090fd2e:
      *(uint *)((longlong)pppuVar23 + 0x2c) = uVar16 & 0xfffffff3 | uVar28;
      uVar28 = 0;
    }
    else {
      iVar14 = *(int *)(ppuVar30 + 0x22);
      lVar35 = (longlong)iVar14;
      if (lVar35 == 0) goto LAB_14090fd2e;
      plVar21 = (longlong *)ppuVar30[0x21];
      plVar29 = plVar21 + lVar35 * 2;
      lVar39 = 0;
      do {
        if ((*(longlong *)(*(longlong *)((longlong)plVar21 + lVar39) + 0x18) != 0) &&
           ((*(byte *)(*(longlong *)((longlong)plVar21 + lVar39) + 0xd0) & 8) != 0)) {
          uVar33 = 8;
          goto LAB_14090fd51;
        }
        lVar39 = lVar39 + 0x10;
      } while (lVar35 * 0x10 != lVar39);
      uVar33 = 0;
LAB_14090fd51:
      *(uint *)((longlong)pppuVar23 + 0x2c) = uVar16 & 0xfffffff3 | uVar28 | uVar33;
      if (iVar14 != 0) {
        do {
          lVar35 = *(longlong *)(*plVar21 + 0x18);
          if ((lVar35 != 0) && (iVar14 = *(int *)(lVar35 + 0xb0), (longlong)iVar14 != 0)) {
            lVar35 = *(longlong *)(lVar35 + 0xa8);
            lVar39 = 0;
            do {
              plVar24 = *(longlong **)(lVar35 + lVar39);
              if ((plVar24 != (longlong *)0x0) &&
                 (cVar12 = (**(code **)(*plVar24 + 0x390))(), cVar12 != '\0')) {
                uVar28 = 0x10;
                ppuVar30 = local_118;
                goto LAB_14090fdb5;
              }
              lVar39 = lVar39 + 8;
            } while ((longlong)iVar14 * 8 != lVar39);
          }
          plVar21 = plVar21 + 2;
        } while (plVar21 != plVar29);
      }
      uVar28 = 0;
      ppuVar30 = local_118;
    }
LAB_14090fdb5:
    uVar16 = *(uint *)((longlong)pppuVar23 + 0x2c);
    *(uint *)((longlong)pppuVar23 + 0x2c) = uVar16 & 0xffffffef | uVar28;
    if (((ulonglong)ppuVar30[0xf3] & 2) == 0) {
LAB_14090fe39:
      uVar28 = 0;
LAB_14090fe3b:
      iVar14 = *(int *)(local_118 + 0x22);
      puVar6 = local_118[0x21];
      *(uint *)((longlong)pppuVar23 + 0x2c) =
           *(uint *)((longlong)pppuVar23 + 0x2c) & 0xffffffdf | uVar28;
      if ((longlong)iVar14 != 0) {
        lVar35 = 0;
        do {
          plVar29 = *(longlong **)(puVar6 + lVar35);
          puVar8 = (undefined *)plVar29[3];
          if (puVar8 != (undefined *)0x0) {
            iVar15 = *(int *)(pppuVar23 + 9);
            *(uint *)(pppuVar23 + 9) = iVar15 + 1U;
            if (*(uint *)((longlong)pppuVar23 + 0x4c) < iVar15 + 1U) {
              FUN_141833ad6(pppuVar23 + 8,iVar15);
            }
            pppuVar23[8][iVar15] = puVar8;
            plVar29 = *(longlong **)(puVar6 + lVar35);
          }
          iVar15 = (**(code **)(*plVar29 + 0x60))();
          *(int *)(pppuVar23 + 6) = *(int *)(pppuVar23 + 6) + iVar15;
          lVar35 = lVar35 + 0x10;
        } while ((longlong)iVar14 * 0x10 != lVar35);
      }
    }
    else {
      if ((longlong)*(int *)(ppuVar30 + 0x22) != 0) {
        plVar29 = (longlong *)ppuVar30[0x21];
        plVar21 = plVar29 + (longlong)*(int *)(ppuVar30 + 0x22) * 2;
        do {
          lVar35 = *(longlong *)(*plVar29 + 0x18);
          if ((lVar35 != 0) && (iVar14 = *(int *)(lVar35 + 0xb0), (longlong)iVar14 != 0)) {
            lVar35 = *(longlong *)(lVar35 + 0xa8);
            lVar39 = 0;
            do {
              plVar24 = *(longlong **)(lVar35 + lVar39);
              if ((plVar24 != (longlong *)0x0) &&
                 (cVar12 = (**(code **)(*plVar24 + 0x398))(), cVar12 != '\0')) {
                uVar28 = 0x20;
                goto LAB_14090fe3b;
              }
              lVar39 = lVar39 + 8;
            } while ((longlong)iVar14 * 8 != lVar39);
          }
          plVar29 = plVar29 + 2;
        } while (plVar29 != plVar21);
        goto LAB_14090fe39;
      }
      *(uint *)((longlong)pppuVar23 + 0x2c) = uVar16 & 0xffffffcf | uVar28;
    }
    ppuVar30 = local_118;
    iVar14 = *(int *)(local_118 + 0x115);
    if ((longlong)iVar14 != 0) {
      puVar6 = local_118[0x114];
      lVar35 = 0;
      do {
        iVar15 = *(int *)(puVar6 + lVar35 + 4);
        if ((((((iVar15 != 0) && (uVar28 = *(uint *)(puVar6 + lVar35), -1 < (int)uVar28)) &&
              ((int)uVar28 < DAT_14c9647dc)) &&
             ((plVar29 = (longlong *)
                         ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8)),
              plVar29 != (longlong *)0x0 && ((int)plVar29[2] == iVar15)))) &&
            ((*(uint *)(plVar29 + 1) & 0x10200000) == 0)) &&
           ((longlong *)*plVar29 != (longlong *)0x0)) {
          iVar15 = (**(code **)(*(longlong *)*plVar29 + 0x3a0))();
          *(int *)(pppuVar23 + 6) = *(int *)(pppuVar23 + 6) + iVar15;
        }
        lVar35 = lVar35 + 0xc;
      } while ((longlong)iVar14 * 0xc != lVar35);
    }
    uVar28 = *(uint *)((longlong)pppuVar23 + 0x2c);
    uVar16 = 2;
    if (((uVar28 & 0x33) == 0) && (uVar16 = 1, (uVar28 & 4) == 0)) {
      uVar16 = uVar28 >> 2 & 2;
    }
    pppuVar32 = pppuVar23 + 7;
    *(uint *)(pppuVar23 + 5) = uVar16;
    ppuVar30 = *(undefined ***)(ppuVar30[7] + 0x500);
    piVar27 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    iVar14 = *piVar27;
    if (DAT_14c86a9fc == 0) {
      if (iVar14 != 2) {
        if (iVar14 != 1) goto LAB_14090ff89;
        DVar17 = FUN_140ad26c0();
        DVar18 = GetCurrentThreadId();
        if (DVar17 == DVar18) goto LAB_14090ff92;
        goto LAB_14091041b;
      }
LAB_14090ff92:
      ppuVar42 = local_118;
      ppuVar22 = (undefined **)ppuVar30[8];
      ppuVar30 = *pppuVar32;
      if (ppuVar30 != ppuVar22) {
        *pppuVar32 = ppuVar22;
        if (ppuVar22 != (undefined **)0x0) {
          LOCK();
          *(int *)(ppuVar22 + 1) = *(int *)(ppuVar22 + 1) + 1;
          UNLOCK();
        }
        if (ppuVar30 != (undefined **)0x0) {
          LOCK();
          ppuVar22 = ppuVar30 + 1;
          puVar6 = *ppuVar22;
          *(uint *)ppuVar22 = *(uint *)ppuVar22 - 1;
          UNLOCK();
          if (((ulonglong)puVar6 & 0x3fffffff) == 1) {
            ppuVar22 = ppuVar30 + 1;
            LOCK();
            uVar28 = *(uint *)ppuVar22;
            *(uint *)ppuVar22 = *(uint *)ppuVar22 | 0x40000000;
            UNLOCK();
            if ((uVar28 >> 0x1e & 1) == 0) {
              bVar11 = *(byte *)((longlong)ppuVar30 + 0xd);
              plVar24 = (longlong *)FUN_14001cc68(0x10,8);
              plVar24[1] = (longlong)ppuVar30;
              plVar29 = DAT_14ca843c0;
              plVar21 = DAT_14ca843c8;
              if ((bVar11 & 2) == 0) {
                do {
                  *plVar24 = (longlong)plVar29;
                  LOCK();
                  bVar45 = plVar29 != DAT_14ca843c0;
                  plVar21 = plVar24;
                  if (bVar45) {
                    plVar29 = DAT_14ca843c0;
                    plVar21 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar21;
                  UNLOCK();
                } while (bVar45);
              }
              else {
                do {
                  *plVar24 = (longlong)plVar21;
                  LOCK();
                  bVar45 = plVar21 != DAT_14ca843c8;
                  plVar29 = plVar24;
                  if (bVar45) {
                    plVar21 = DAT_14ca843c8;
                    plVar29 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar29;
                  UNLOCK();
                } while (bVar45);
              }
            }
          }
        }
        ppuVar22 = *pppuVar32;
        ppuVar30 = ppuVar22;
      }
      ppuVar2 = DAT_14cb427b0;
      if ((ppuVar22 == (undefined **)0x0) && (ppuVar30 != DAT_14cb427b0)) {
        *pppuVar32 = DAT_14cb427b0;
        if (ppuVar2 != (undefined **)0x0) {
          LOCK();
          ppuVar2 = ppuVar2 + 1;
          *(int *)ppuVar2 = *(int *)ppuVar2 + 1;
          UNLOCK();
        }
        if (ppuVar30 != (undefined **)0x0) {
          LOCK();
          ppuVar22 = ppuVar30 + 1;
          puVar6 = *ppuVar22;
          *(uint *)ppuVar22 = *(uint *)ppuVar22 - 1;
          UNLOCK();
          if (((ulonglong)puVar6 & 0x3fffffff) == 1) {
            ppuVar22 = ppuVar30 + 1;
            LOCK();
            uVar28 = *(uint *)ppuVar22;
            *(uint *)ppuVar22 = *(uint *)ppuVar22 | 0x40000000;
            UNLOCK();
            if ((uVar28 >> 0x1e & 1) == 0) {
              bVar11 = *(byte *)((longlong)ppuVar30 + 0xd);
              plVar24 = (longlong *)FUN_14001cc68(0x10,8);
              plVar24[1] = (longlong)ppuVar30;
              plVar29 = DAT_14ca843c0;
              plVar21 = DAT_14ca843c8;
              if ((bVar11 & 2) == 0) {
                do {
                  *plVar24 = (longlong)plVar29;
                  LOCK();
                  bVar45 = plVar29 != DAT_14ca843c0;
                  plVar21 = plVar24;
                  if (bVar45) {
                    plVar29 = DAT_14ca843c0;
                    plVar21 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar21;
                  UNLOCK();
                } while (bVar45);
              }
              else {
                do {
                  *plVar24 = (longlong)plVar21;
                  LOCK();
                  bVar45 = plVar21 != DAT_14ca843c8;
                  plVar29 = plVar24;
                  if (bVar45) {
                    plVar21 = DAT_14ca843c8;
                    plVar29 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar29;
                  UNLOCK();
                } while (bVar45);
              }
            }
          }
        }
      }
    }
    else {
LAB_14090ff89:
      if (iVar14 == 0x10) goto LAB_14090ff92;
LAB_14091041b:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 == '\x01') && (*piVar27 != 2)) {
          if (*piVar27 == 1) {
            DVar17 = FUN_140ad26c0();
            DVar18 = GetCurrentThreadId();
            if (DVar17 == DVar18) goto LAB_140910fdb;
          }
          goto LAB_140910446;
        }
LAB_140910fdb:
        ppuVar42 = local_118;
        ppuVar22 = (undefined **)ppuVar30[8];
        ppuVar30 = *pppuVar32;
        if (ppuVar30 != ppuVar22) {
          *pppuVar32 = ppuVar22;
          if (ppuVar22 != (undefined **)0x0) {
            LOCK();
            *(int *)(ppuVar22 + 1) = *(int *)(ppuVar22 + 1) + 1;
            UNLOCK();
          }
          if (ppuVar30 != (undefined **)0x0) {
            LOCK();
            ppuVar22 = ppuVar30 + 1;
            puVar6 = *ppuVar22;
            *(uint *)ppuVar22 = *(uint *)ppuVar22 - 1;
            UNLOCK();
            if (((ulonglong)puVar6 & 0x3fffffff) == 1) {
              ppuVar22 = ppuVar30 + 1;
              LOCK();
              uVar28 = *(uint *)ppuVar22;
              *(uint *)ppuVar22 = *(uint *)ppuVar22 | 0x40000000;
              UNLOCK();
              if ((uVar28 >> 0x1e & 1) == 0) {
                bVar11 = *(byte *)((longlong)ppuVar30 + 0xd);
                plVar24 = (longlong *)FUN_14001cc68(0x10,8);
                plVar24[1] = (longlong)ppuVar30;
                plVar29 = DAT_14ca843c0;
                plVar21 = DAT_14ca843c8;
                if ((bVar11 & 2) == 0) {
                  do {
                    *plVar24 = (longlong)plVar29;
                    LOCK();
                    bVar45 = plVar29 != DAT_14ca843c0;
                    plVar21 = plVar24;
                    if (bVar45) {
                      plVar29 = DAT_14ca843c0;
                      plVar21 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar21;
                    UNLOCK();
                  } while (bVar45);
                }
                else {
                  do {
                    *plVar24 = (longlong)plVar21;
                    LOCK();
                    bVar45 = plVar21 != DAT_14ca843c8;
                    plVar29 = plVar24;
                    if (bVar45) {
                      plVar21 = DAT_14ca843c8;
                      plVar29 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar29;
                    UNLOCK();
                  } while (bVar45);
                }
              }
            }
          }
          ppuVar22 = *pppuVar32;
          ppuVar30 = ppuVar22;
        }
        ppuVar2 = DAT_14cb427b0;
        if ((ppuVar22 == (undefined **)0x0) && (ppuVar30 != DAT_14cb427b0)) {
          *pppuVar32 = DAT_14cb427b0;
          if (ppuVar2 != (undefined **)0x0) {
            LOCK();
            ppuVar2 = ppuVar2 + 1;
            *(int *)ppuVar2 = *(int *)ppuVar2 + 1;
            UNLOCK();
          }
          if (ppuVar30 != (undefined **)0x0) {
            LOCK();
            ppuVar22 = ppuVar30 + 1;
            puVar6 = *ppuVar22;
            *(uint *)ppuVar22 = *(uint *)ppuVar22 - 1;
            UNLOCK();
            if (((ulonglong)puVar6 & 0x3fffffff) == 1) {
              ppuVar22 = ppuVar30 + 1;
              LOCK();
              uVar28 = *(uint *)ppuVar22;
              *(uint *)ppuVar22 = *(uint *)ppuVar22 | 0x40000000;
              UNLOCK();
              if ((uVar28 >> 0x1e & 1) == 0) {
                bVar11 = *(byte *)((longlong)ppuVar30 + 0xd);
                plVar24 = (longlong *)FUN_14001cc68(0x10,8);
                plVar24[1] = (longlong)ppuVar30;
                plVar29 = DAT_14ca843c0;
                plVar21 = DAT_14ca843c8;
                ppuVar42 = local_118;
                if ((bVar11 & 2) == 0) {
                  do {
                    *plVar24 = (longlong)plVar29;
                    LOCK();
                    bVar45 = plVar29 != DAT_14ca843c0;
                    plVar21 = plVar24;
                    if (bVar45) {
                      plVar29 = DAT_14ca843c0;
                      plVar21 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar21;
                    UNLOCK();
                  } while (bVar45);
                }
                else {
                  do {
                    *plVar24 = (longlong)plVar21;
                    LOCK();
                    bVar45 = plVar21 != DAT_14ca843c8;
                    plVar29 = plVar24;
                    if (bVar45) {
                      plVar21 = DAT_14ca843c8;
                      plVar29 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar29;
                    UNLOCK();
                  } while (bVar45);
                }
              }
            }
          }
        }
      }
      else {
LAB_140910446:
        if (DAT_14ca9a43c == 0) {
          puVar31 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar26 = (uint *)*puVar31;
          if (puVar26 != (uint *)0x0) goto LAB_140910792;
          while( true ) {
            uVar28 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar28 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar28 | 1;
              __tlregdtor(&LAB_143acaafd);
            }
            lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar25 = *(undefined4 **)(lVar35 + 0x310);
            *(undefined8 *)(lVar35 + 0x310) = 0;
            if (puVar25 == (undefined4 *)0x0) {
              puVar25 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar25 = 0xffffffff;
            *(undefined4 **)(puVar25 + 0x10) = puVar25 + 0x16;
            puVar25[0x12] = 0;
            *puVar31 = puVar25;
            FUN_140217a48(puVar31);
            puVar26 = (uint *)*puVar31;
LAB_140910792:
            puVar36 = (undefined8 *)(*(longlong *)(puVar26 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar34 = (uint *)(puVar36 + 0x17);
            uVar28 = puVar26[0x12];
            if (puVar34 <= puVar26 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar26 + 0x10) = puVar26 + 0x4000;
              LOCK();
              uVar16 = *puVar26;
              *puVar26 = *puVar26 + uVar28 + 1;
              UNLOCK();
              if ((uVar16 ^ uVar28) != 0xffffffff) break;
              puVar26 = (uint *)*puVar31;
              *puVar26 = 0xffffffff;
              *(uint **)(puVar26 + 0x10) = puVar26 + 0x16;
              puVar26[0x12] = 0;
              *puVar31 = puVar26;
              puVar36 = (undefined8 *)((longlong)puVar26 + 0x5fU & 0xfffffffffffffff8);
              puVar34 = (uint *)(puVar36 + 0x17);
              uVar28 = 0;
              if (puVar34 <= puVar26 + 0x4000) {
                uVar28 = 1;
                goto LAB_140910812;
              }
            }
          }
          uVar28 = uVar28 + 1;
LAB_140910812:
          *(uint **)(puVar26 + 0x10) = puVar34;
          puVar26[0x12] = uVar28;
          iVar14 = 0;
          FUN_1447247dc(puVar36,0);
          *puVar36 = &PTR_FUN_14ae267d8;
          puVar36[0x15] = pppuVar23;
          puVar36[0x16] = ppuVar30;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar28 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar28 < 2) {
              uVar37 = (ulonglong)(byte)(&DAT_149e38edc)[uVar28];
              iVar14 = 0;
            }
            else {
              uVar37 = 2;
            }
          }
          else {
            iVar14 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar37 = 5;
          }
          if (*(code **)(puVar36[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar36[0xe] + 0x18))(puVar36 + 0xe,puVar36 + 9);
          }
          ppuVar42 = local_118;
          puVar36[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar36[9] = puVar36;
          puVar36[10] = puVar36;
          lVar35 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar35 == 0) {
            uVar43 = 1;
            if ((char)uVar37 != '\x06') {
              uVar43 = uVar37;
            }
            uVar37 = uVar43;
            uVar20 = 0;
          }
          else {
            if ((char)uVar37 == '\x06') {
              uVar37 = *(ulonglong *)(lVar35 + 0x38) >> 0x3b;
            }
            uVar20 = *(undefined8 *)(lVar35 + 0x30);
          }
          puVar36[0xf] = uVar20;
          puVar36[0x10] = uVar37 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar36 + 0x1c) = iVar14;
          if (puVar36 == (undefined8 *)0x0) {
            local_d8 = (undefined **)CONCAT71(local_d8._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar36 + 1) = *(int *)(puVar36 + 1) + 1;
            UNLOCK();
            local_d8 = (undefined **)CONCAT71(local_d8._1_7_,1);
            FUN_1447439e4(puVar36);
            LOCK();
            piVar1 = (int *)(puVar36 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar36)(puVar36,1);
            }
          }
        }
        else {
          local_128 = &local_d8;
          local_c8 = (undefined ***)0x0;
          local_b8 = &PTR_LAB_14ae26790;
          local_d8 = (undefined **)FUN_143acb7da;
          local_b0 = pppuVar23;
          local_a8 = ppuVar30;
          FUN_14005a792(&DAT_14ca9a440,L"SetStaticBuffers",&DAT_14cb43998);
          ppuVar42 = local_118;
          if (local_d8 != (undefined **)0x0) {
            pppuVar32 = local_c8;
            if (local_c8 == (undefined ***)0x0) {
              pppuVar32 = &local_b8;
            }
            (*(code *)(*pppuVar32)[2])();
            ppuVar42 = local_118;
          }
        }
      }
    }
    pppuVar32 = (undefined ***)ppuVar42[0x10f];
    pppuVar40 = pppuVar32;
    if ((pppuVar32 != pppuVar23) &&
       (ppuVar42[0x10f] = (undefined *)pppuVar23, pppuVar40 = pppuVar23,
       pppuVar32 != (undefined ***)0x0)) {
      FUN_141839f38(pppuVar32);
      FUN_1400020a8(pppuVar32);
      pppuVar40 = (undefined ***)ppuVar42[0x10f];
    }
    ppuVar30 = (undefined **)ppuVar42[0x10e];
    pppuVar40[1] = ppuVar30;
    iVar14 = *piVar27;
    if (DAT_14c86a9fc == 0) {
      if (iVar14 != 2) {
        if (iVar14 != 1) goto LAB_140910513;
        DVar17 = FUN_140ad26c0();
        DVar18 = GetCurrentThreadId();
        if (DVar17 == DVar18) goto LAB_14091051c;
        goto LAB_140910a3b;
      }
    }
    else {
LAB_140910513:
      if (iVar14 != 0x10) {
LAB_140910a3b:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (*piVar27 == 2)) {
LAB_140911111:
            (**(code **)(*ppuVar30 + 0xb8))(ppuVar30,pppuVar40);
            iVar14 = *(int *)(pppuVar40 + 9);
            if ((longlong)iVar14 != 0) {
              ppuVar30 = pppuVar40[8];
              lVar35 = 0;
              do {
                lVar39 = *(longlong *)((longlong)ppuVar30 + lVar35);
                *(undefined1 *)(lVar39 + 0x228) = 0;
                *(undefined4 *)(lVar39 + 0x274) = 0;
                *(undefined1 *)(lVar39 + 0x204) = 0;
                puVar31 = (undefined8 *)FUN_14001cc68(0x198,0x10);
                uVar20 = *(undefined8 *)(lVar39 + 0x50);
                *(undefined4 *)(puVar31 + 1) = 0;
                *puVar31 = &PTR_FUN_14ade2d80;
                puVar31[2] = uVar20;
                puVar31[0xb] = 0xffffffff00000000;
                puVar31[9] = 0;
                puVar31[10] = 0;
                puVar31[7] = 0;
                puVar31[8] = 0;
                puVar31[5] = 0;
                puVar31[6] = 0;
                puVar31[3] = 0;
                puVar31[4] = 0;
                *(undefined8 *)((longlong)puVar31 + 0x7c) = 0;
                *(undefined8 *)((longlong)puVar31 + 0x84) = 0;
                puVar31[0xe] = 0;
                puVar31[0xf] = 0;
                puVar31[0xc] = 0;
                puVar31[0xd] = 0;
                *(undefined8 *)((longlong)puVar31 + 0xac) = 0;
                *(undefined8 *)((longlong)puVar31 + 0xb4) = 0;
                puVar31[0x14] = 0;
                puVar31[0x15] = 0;
                puVar31[0x12] = 0;
                puVar31[0x13] = 0;
                *(undefined8 *)((longlong)puVar31 + 0xdc) = 0;
                *(undefined8 *)((longlong)puVar31 + 0xe4) = 0;
                puVar31[0x1a] = 0;
                puVar31[0x1b] = 0;
                puVar31[0x18] = 0;
                puVar31[0x19] = 0;
                *(undefined8 *)((longlong)puVar31 + 0x10c) = 0;
                *(undefined8 *)((longlong)puVar31 + 0x114) = 0;
                puVar31[0x20] = 0;
                puVar31[0x21] = 0;
                puVar31[0x1e] = 0;
                puVar31[0x1f] = 0;
                *(undefined8 *)((longlong)puVar31 + 300) = 0;
                *(undefined8 *)((longlong)puVar31 + 0x134) = 0;
                puVar31[0x24] = 0;
                puVar31[0x25] = 0;
                puVar31[0x28] = 0;
                puVar31[0x29] = 0;
                puVar31[0x2c] = 0;
                puVar31[0x2d] = 0;
                puVar31[0x2e] = 0;
                puVar31[0x2f] = 0;
                *(undefined4 *)(puVar31 + 0x30) = 1;
                puVar31[0x31] = 0;
                puVar31[0x32] = 0;
                *(undefined8 **)(lVar39 + 0x1f0) = puVar31;
                puVar31 = (undefined8 *)FUN_14001cc68(0x198,0x10);
                uVar20 = *(undefined8 *)(lVar39 + 0x50);
                *(undefined4 *)(puVar31 + 1) = 0;
                *puVar31 = &PTR_FUN_14ade2d80;
                puVar31[2] = uVar20;
                puVar31[0xb] = 0xffffffff00000000;
                puVar31[9] = 0;
                puVar31[10] = 0;
                puVar31[7] = 0;
                puVar31[8] = 0;
                puVar31[5] = 0;
                puVar31[6] = 0;
                puVar31[3] = 0;
                puVar31[4] = 0;
                *(undefined8 *)((longlong)puVar31 + 0x7c) = 0;
                *(undefined8 *)((longlong)puVar31 + 0x84) = 0;
                puVar31[0xe] = 0;
                puVar31[0xf] = 0;
                puVar31[0xc] = 0;
                puVar31[0xd] = 0;
                *(undefined8 *)((longlong)puVar31 + 0xac) = 0;
                *(undefined8 *)((longlong)puVar31 + 0xb4) = 0;
                puVar31[0x14] = 0;
                puVar31[0x15] = 0;
                puVar31[0x12] = 0;
                puVar31[0x13] = 0;
                *(undefined8 *)((longlong)puVar31 + 0xdc) = 0;
                *(undefined8 *)((longlong)puVar31 + 0xe4) = 0;
                puVar31[0x1a] = 0;
                puVar31[0x1b] = 0;
                puVar31[0x18] = 0;
                puVar31[0x19] = 0;
                *(undefined8 *)((longlong)puVar31 + 0x10c) = 0;
                *(undefined8 *)((longlong)puVar31 + 0x114) = 0;
                puVar31[0x20] = 0;
                puVar31[0x21] = 0;
                puVar31[0x1e] = 0;
                puVar31[0x1f] = 0;
                *(undefined8 *)((longlong)puVar31 + 300) = 0;
                *(undefined8 *)((longlong)puVar31 + 0x134) = 0;
                puVar31[0x24] = 0;
                puVar31[0x25] = 0;
                puVar31[0x28] = 0;
                puVar31[0x29] = 0;
                puVar31[0x2c] = 0;
                puVar31[0x2d] = 0;
                puVar31[0x2e] = 0;
                puVar31[0x2f] = 0;
                *(undefined4 *)(puVar31 + 0x30) = 1;
                puVar31[0x31] = 0;
                puVar31[0x32] = 0;
                *(undefined8 **)(lVar39 + 0x1f8) = puVar31;
                lVar35 = lVar35 + 8;
              } while ((longlong)iVar14 * 8 != lVar35);
            }
            goto LAB_14090f9a7;
          }
          if (*piVar27 == 1) {
            DVar17 = FUN_140ad26c0();
            DVar18 = GetCurrentThreadId();
            if (DVar17 == DVar18) goto LAB_140911111;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar31 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar26 = (uint *)*puVar31;
          if (puVar26 != (uint *)0x0) goto LAB_140910b80;
          while( true ) {
            uVar28 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar28 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar28 | 1;
              __tlregdtor(&LAB_143acaafd);
            }
            lVar35 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar25 = *(undefined4 **)(lVar35 + 0x310);
            *(undefined8 *)(lVar35 + 0x310) = 0;
            if (puVar25 == (undefined4 *)0x0) {
              puVar25 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar25 = 0xffffffff;
            *(undefined4 **)(puVar25 + 0x10) = puVar25 + 0x16;
            puVar25[0x12] = 0;
            *puVar31 = puVar25;
            FUN_140217a48(puVar31);
            puVar26 = (uint *)*puVar31;
LAB_140910b80:
            puVar36 = (undefined8 *)(*(longlong *)(puVar26 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar34 = (uint *)(puVar36 + 0x17);
            uVar28 = puVar26[0x12];
            if (puVar34 <= puVar26 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar26 + 0x10) = puVar26 + 0x4000;
              LOCK();
              uVar16 = *puVar26;
              *puVar26 = *puVar26 + uVar28 + 1;
              UNLOCK();
              if ((uVar16 ^ uVar28) != 0xffffffff) break;
              puVar26 = (uint *)*puVar31;
              *puVar26 = 0xffffffff;
              *(uint **)(puVar26 + 0x10) = puVar26 + 0x16;
              puVar26[0x12] = 0;
              *puVar31 = puVar26;
              puVar36 = (undefined8 *)((longlong)puVar26 + 0x5fU & 0xfffffffffffffff8);
              puVar34 = (uint *)(puVar36 + 0x17);
              uVar28 = 0;
              if (puVar34 <= puVar26 + 0x4000) {
                uVar28 = 1;
                goto LAB_140910c00;
              }
            }
          }
          uVar28 = uVar28 + 1;
LAB_140910c00:
          *(uint **)(puVar26 + 0x10) = puVar34;
          puVar26[0x12] = uVar28;
          iVar14 = 0;
          FUN_1447247dc(puVar36,0);
          *puVar36 = &PTR_FUN_14ae26858;
          puVar36[0x15] = pppuVar40;
          puVar36[0x16] = ppuVar30;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar28 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar28 < 2) {
              uVar37 = (ulonglong)(byte)(&DAT_149e38edc)[uVar28];
              iVar14 = 0;
            }
            else {
              uVar37 = 2;
            }
          }
          else {
            iVar14 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar37 = 5;
          }
          if (*(code **)(puVar36[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar36[0xe] + 0x18))(puVar36 + 0xe,puVar36 + 9);
          }
          puVar36[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar36[9] = puVar36;
          puVar36[10] = puVar36;
          lVar35 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar35 == 0) {
            uVar43 = 1;
            if ((char)uVar37 != '\x06') {
              uVar43 = uVar37;
            }
            uVar37 = uVar43;
            uVar20 = 0;
          }
          else {
            if ((char)uVar37 == '\x06') {
              uVar37 = *(ulonglong *)(lVar35 + 0x38) >> 0x3b;
            }
            uVar20 = *(undefined8 *)(lVar35 + 0x30);
          }
          puVar36[0xf] = uVar20;
          puVar36[0x10] = uVar37 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar36 + 0x1c) = iVar14;
          if (puVar36 == (undefined8 *)0x0) {
            local_d8 = (undefined **)CONCAT71(local_d8._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar36 + 1) = *(int *)(puVar36 + 1) + 1;
            UNLOCK();
            local_d8 = (undefined **)CONCAT71(local_d8._1_7_,1);
            FUN_1447439e4(puVar36);
            LOCK();
            piVar27 = (int *)(puVar36 + 1);
            *piVar27 = *piVar27 + -1;
            UNLOCK();
            if (*piVar27 == 0) {
              (**(code **)*puVar36)(puVar36,1);
            }
          }
        }
        else {
          local_128 = &local_d8;
          local_c8 = (undefined ***)0x0;
          local_b8 = &PTR_LAB_14ae267f0;
          local_d8 = (undefined **)FUN_143acbae6;
          local_b0 = pppuVar40;
          local_a8 = ppuVar30;
          FUN_14005a792(&DAT_14ca9a440,L"AddProxyToComputeDispatchInterface",&DAT_14cb4399c);
          if (local_d8 != (undefined **)0x0) {
            pppuVar23 = local_c8;
            if (local_c8 == (undefined ***)0x0) {
              pppuVar23 = &local_b8;
            }
            (*(code *)(*pppuVar23)[2])();
          }
        }
        goto LAB_14090f9a7;
      }
    }
LAB_14091051c:
    (**(code **)(*ppuVar30 + 0xb8))(ppuVar30,pppuVar40);
    iVar14 = *(int *)(pppuVar40 + 9);
    if ((longlong)iVar14 != 0) {
      ppuVar30 = pppuVar40[8];
      lVar35 = 0;
      do {
        lVar39 = *(longlong *)((longlong)ppuVar30 + lVar35);
        *(undefined1 *)(lVar39 + 0x228) = 0;
        *(undefined4 *)(lVar39 + 0x274) = 0;
        *(undefined1 *)(lVar39 + 0x204) = 0;
        puVar31 = (undefined8 *)FUN_14001cc68(0x198,0x10);
        uVar20 = *(undefined8 *)(lVar39 + 0x50);
        *(undefined4 *)(puVar31 + 1) = 0;
        *puVar31 = &PTR_FUN_14ade2d80;
        puVar31[2] = uVar20;
        puVar31[0xb] = 0xffffffff00000000;
        puVar31[9] = 0;
        puVar31[10] = 0;
        puVar31[7] = 0;
        puVar31[8] = 0;
        puVar31[5] = 0;
        puVar31[6] = 0;
        puVar31[3] = 0;
        puVar31[4] = 0;
        *(undefined8 *)((longlong)puVar31 + 0x7c) = 0;
        *(undefined8 *)((longlong)puVar31 + 0x84) = 0;
        puVar31[0xe] = 0;
        puVar31[0xf] = 0;
        puVar31[0xc] = 0;
        puVar31[0xd] = 0;
        *(undefined8 *)((longlong)puVar31 + 0xac) = 0;
        *(undefined8 *)((longlong)puVar31 + 0xb4) = 0;
        puVar31[0x14] = 0;
        puVar31[0x15] = 0;
        puVar31[0x12] = 0;
        puVar31[0x13] = 0;
        *(undefined8 *)((longlong)puVar31 + 0xdc) = 0;
        *(undefined8 *)((longlong)puVar31 + 0xe4) = 0;
        puVar31[0x1a] = 0;
        puVar31[0x1b] = 0;
        puVar31[0x18] = 0;
        puVar31[0x19] = 0;
        *(undefined8 *)((longlong)puVar31 + 0x10c) = 0;
        *(undefined8 *)((longlong)puVar31 + 0x114) = 0;
        puVar31[0x20] = 0;
        puVar31[0x21] = 0;
        puVar31[0x1e] = 0;
        puVar31[0x1f] = 0;
        *(undefined8 *)((longlong)puVar31 + 300) = 0;
        *(undefined8 *)((longlong)puVar31 + 0x134) = 0;
        puVar31[0x24] = 0;
        puVar31[0x25] = 0;
        puVar31[0x28] = 0;
        puVar31[0x29] = 0;
        puVar31[0x2c] = 0;
        puVar31[0x2d] = 0;
        puVar31[0x2e] = 0;
        puVar31[0x2f] = 0;
        *(undefined4 *)(puVar31 + 0x30) = 1;
        puVar31[0x31] = 0;
        puVar31[0x32] = 0;
        *(undefined8 **)(lVar39 + 0x1f0) = puVar31;
        puVar31 = (undefined8 *)FUN_14001cc68(0x198,0x10);
        uVar20 = *(undefined8 *)(lVar39 + 0x50);
        *(undefined4 *)(puVar31 + 1) = 0;
        *puVar31 = &PTR_FUN_14ade2d80;
        puVar31[2] = uVar20;
        puVar31[0xb] = 0xffffffff00000000;
        puVar31[9] = 0;
        puVar31[10] = 0;
        puVar31[7] = 0;
        puVar31[8] = 0;
        puVar31[5] = 0;
        puVar31[6] = 0;
        puVar31[3] = 0;
        puVar31[4] = 0;
        *(undefined8 *)((longlong)puVar31 + 0x7c) = 0;
        *(undefined8 *)((longlong)puVar31 + 0x84) = 0;
        puVar31[0xe] = 0;
        puVar31[0xf] = 0;
        puVar31[0xc] = 0;
        puVar31[0xd] = 0;
        *(undefined8 *)((longlong)puVar31 + 0xac) = 0;
        *(undefined8 *)((longlong)puVar31 + 0xb4) = 0;
        puVar31[0x14] = 0;
        puVar31[0x15] = 0;
        puVar31[0x12] = 0;
        puVar31[0x13] = 0;
        *(undefined8 *)((longlong)puVar31 + 0xdc) = 0;
        *(undefined8 *)((longlong)puVar31 + 0xe4) = 0;
        puVar31[0x1a] = 0;
        puVar31[0x1b] = 0;
        puVar31[0x18] = 0;
        puVar31[0x19] = 0;
        *(undefined8 *)((longlong)puVar31 + 0x10c) = 0;
        *(undefined8 *)((longlong)puVar31 + 0x114) = 0;
        puVar31[0x20] = 0;
        puVar31[0x21] = 0;
        puVar31[0x1e] = 0;
        puVar31[0x1f] = 0;
        *(undefined8 *)((longlong)puVar31 + 300) = 0;
        *(undefined8 *)((longlong)puVar31 + 0x134) = 0;
        puVar31[0x24] = 0;
        puVar31[0x25] = 0;
        puVar31[0x28] = 0;
        puVar31[0x29] = 0;
        puVar31[0x2c] = 0;
        puVar31[0x2d] = 0;
        puVar31[0x2e] = 0;
        puVar31[0x2f] = 0;
        *(undefined4 *)(puVar31 + 0x30) = 1;
        puVar31[0x31] = 0;
        puVar31[0x32] = 0;
        *(undefined8 **)(lVar39 + 0x1f8) = puVar31;
        lVar35 = lVar35 + 8;
      } while ((longlong)iVar14 * 8 != lVar35);
    }
  }
LAB_14090f9a7:
  ppuVar30 = local_118;
  if (local_118[7][0x449] == '\x01') {
    iVar14 = *(int *)(local_118[7] + 0x44c);
  }
  else {
    iVar14 = rand();
  }
  *(int *)((longlong)ppuVar30 + 0xdc) = iVar14;
  puVar6 = ppuVar30[4];
  FUN_1403373b6(puVar6,0);
  FUN_144962840(puVar6,ppuVar30,1);
  if (*(longlong *)(puVar6 + 0x10) != 0) {
    piVar27 = (int *)(*(longlong *)(puVar6 + 0x10) + 0x4fc);
    *piVar27 = *piVar27 + 1;
  }
  if ((((*(int *)(puVar6 + 0x1c) != 0) && (uVar28 = *(uint *)(puVar6 + 0x18), -1 < (int)uVar28)) &&
      ((int)uVar28 < DAT_14c9647dc)) &&
     (((plVar29 = (longlong *)
                  ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8)),
       plVar29 != (longlong *)0x0 && ((int)plVar29[2] == *(int *)(puVar6 + 0x1c))) &&
      (((*(uint *)(plVar29 + 1) & 0x10200000) == 0 && (lVar35 = *plVar29, lVar35 != 0)))))) {
    *(int *)(lVar35 + 0x70) = *(int *)(lVar35 + 0x70) + 1;
    *(byte *)(lVar35 + 0x74) = *(byte *)(lVar35 + 0x74) | 1;
  }
  iVar14 = *(int *)((longlong)ppuVar30 + 0xec);
  if (iVar14 == -1) {
    iVar14 = *(int *)(ppuVar30[7] + 0x454);
    ppuVar22 = (undefined **)(ppuVar30[7] + 0x458);
  }
  else {
    ppuVar22 = ppuVar30 + 0x1e;
  }
  if ((0 < iVar14) && (1e-08 < *(float *)ppuVar22)) {
    FUN_143ac6a02(ppuVar30);
    *(undefined4 *)(ppuVar30 + 0x1a) = 0;
    *(undefined4 *)(ppuVar30 + 0x1b) = 0;
  }
LAB_14090fa91:
  if ((local_90 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14091149c FUN_14091149c body=587 status=ok
// SIG undefined FUN_14091149c(void)

void FUN_14091149c(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar1 = (uint *)*param_2;
  local_68 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar2 = *(longlong *)(local_68 + 0x20);
  local_98 = (ulonglong)puVar1[0xc];
  local_a0 = (ulonglong)puVar1[0xb];
  local_b0 = (ulonglong)puVar1[10];
  local_70 = (ulonglong)puVar1[9];
  local_78 = (ulonglong)puVar1[8];
  local_80 = (ulonglong)puVar1[7];
  local_88 = (ulonglong)puVar1[6];
  local_90 = (ulonglong)puVar1[5];
  lVar4 = 0;
  local_60 = lVar2 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_60 = lVar4;
  }
  local_58 = lVar2 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_58 = lVar4;
  }
  local_50 = lVar2 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_50 = lVar4;
  }
  local_a8 = lVar2 + local_b0;
  local_b8 = lVar2 + local_78;
  local_c0 = lVar2 + local_80;
  local_c8 = lVar2 + local_88;
  local_d0 = lVar2 + local_90;
  lVar3 = lVar2 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar3 = lVar4;
  }
  local_118 = lVar2 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_118 = lVar4;
  }
  local_110 = local_d0;
  if (local_90 == 0xffffffff) {
    local_110 = lVar4;
  }
  local_108 = local_c8;
  if (local_88 == 0xffffffff) {
    local_108 = lVar4;
  }
  local_100 = local_c0;
  if (local_80 == 0xffffffff) {
    local_100 = lVar4;
  }
  local_f8 = local_b8;
  if (local_78 == 0xffffffff) {
    local_f8 = lVar4;
  }
  local_f0 = lVar2 + local_70;
  if (local_70 == 0xffffffff) {
    local_f0 = lVar4;
  }
  local_e8 = local_a8;
  if (local_b0 == 0xffffffff) {
    local_e8 = lVar4;
  }
  local_e0 = lVar2 + local_a0;
  if (local_a0 == 0xffffffff) {
    local_e0 = lVar4;
  }
  local_d8 = lVar2 + local_98;
  if (local_98 == 0xffffffff) {
    local_d8 = lVar4;
  }
  FUN_1409116e8(param_3 + 8,local_68,lVar3,&local_60);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409116e8 FUN_1409116e8 body=1142 status=ok
// SIG undefined FUN_1409116e8(void)

void FUN_1409116e8(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong param_6,longlong param_7,longlong param_8,
                  longlong param_9,longlong param_10,longlong param_11,longlong param_12,
                  longlong param_13)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  ulonglong local_158;
  undefined4 *local_150;
  ulonglong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  ulonglong local_120;
  longlong local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8 [10];
  undefined8 local_a8 [9];
  ulonglong local_60;
  
  local_1c8 = param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*param_4 == 0) {
    if (param_4[1] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_238);
    }
    if (param_4[2] != 0) {
      local_1d8 = param_13;
      local_1e0 = param_12;
      local_1e8 = param_11;
      local_1f0 = param_10;
      local_1f8 = param_9;
      local_200 = param_8;
      local_208 = param_7;
      local_210 = param_6;
      local_218 = param_5;
      FUN_147603bbe(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_238);
    }
  }
  else {
    local_198 = param_6;
    local_1a0 = param_10;
    local_1a8 = param_11;
    local_1b0 = param_12;
    local_1b8 = param_13;
    local_1c0 = param_7;
    if ((ulonglong)*(ushort *)(param_2 + 0xe) != 0) {
      local_150 = (undefined4 *)(param_1 + 0x18);
      uVar11 = 0;
      local_178 = param_11;
      local_160 = param_10;
      local_168 = param_9;
      local_170 = param_8;
      local_180 = param_7;
      local_188 = param_6;
      local_190 = param_5;
      local_130 = param_8;
      local_138 = param_9;
      local_148 = (ulonglong)*(ushort *)(param_2 + 0xe);
      local_140 = *param_4;
      local_128 = param_1;
      do {
        local_120 = (ulonglong)*(ushort *)(local_140 + uVar11 * 2);
        local_f8[6] = 0;
        local_f8[7] = 0;
        local_f8[4] = 0;
        local_f8[5] = 0;
        local_f8[2] = 0;
        local_f8[3] = 0;
        local_f8[0] = 0;
        local_f8[1] = 0;
        local_f8[8] = 0;
        local_158 = uVar11;
        (**(code **)(*(longlong *)(param_1 + 8) + 0x18 +
                    (longlong)*(int *)(param_1 + 0x14) * local_120))
                  (local_a8,*(undefined8 *)(param_3 + uVar11 * 8));
        param_1 = local_128;
        lVar6 = local_130;
        lVar5 = local_138;
        lVar4 = local_170;
        lVar3 = local_180;
        lVar2 = local_188;
        lVar1 = local_190;
        local_1e8 = param_13;
        if (local_1b8 == 0) {
          local_1e8 = 0;
        }
        local_1f0 = param_12;
        if (local_1b0 == 0) {
          local_1f0 = 0;
        }
        local_1f8 = local_178;
        if (local_1a8 == 0) {
          local_1f8 = 0;
        }
        local_200 = local_160;
        if (local_1a0 == 0) {
          local_200 = 0;
        }
        local_208 = local_168;
        if (param_9 == 0) {
          local_208 = 0;
        }
        local_210 = local_170;
        if (param_8 == 0) {
          local_210 = 0;
        }
        local_218 = local_180;
        if (local_1c0 == 0) {
          local_218 = 0;
        }
        lVar10 = local_188;
        if (local_198 == 0) {
          lVar10 = 0;
        }
        puVar8 = local_a8;
        puVar9 = local_f8;
        for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        lVar7 = local_190;
        if (local_1c8 == 0) {
          lVar7 = 0;
        }
        local_108 = *local_150;
        uStack_104 = local_150[1];
        uStack_100 = local_150[2];
        uStack_fc = local_150[3];
        local_118 = param_12;
        local_110 = param_13;
        FUN_140911be0(&local_108,local_f8,lVar7,lVar10);
        (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
                    (longlong)*(int *)(param_1 + 0x14) * local_120))
                  (*(undefined8 *)(param_3 + local_158 * 8),local_f8);
        uVar11 = local_158 + 1;
        local_190 = lVar1 + 8;
        local_188 = lVar2 + 8;
        local_180 = lVar3 + 8;
        local_170 = lVar4 + 8;
        local_168 = local_168 + 8;
        local_160 = local_160 + 8;
        local_178 = local_178 + 8;
        param_12 = local_118 + 8;
        param_13 = local_110 + 8;
        param_8 = lVar6;
        param_9 = lVar5;
      } while (local_148 != uVar11);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140911be0 FUN_140911be0 body=232 status=ok
// SIG undefined FUN_140911be0(void)

void FUN_140911be0(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (param_3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 2)) = *param_3;
  }
  if (param_4 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 6)) = *param_4;
  }
  if (param_5 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 10)) = *param_5;
  }
  if (param_6 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 0xe)) = *param_6;
  }
  if (param_7 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 0x12)) = *param_7;
  }
  if (param_8 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 0x16)) = *param_8;
  }
  if (param_9 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 0x1a)) = *param_9;
  }
  if (param_10 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 0x1e)) = *param_10;
  }
  if (param_11 != (undefined8 *)0x0) {
    *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(lVar1 + 0x22)) = *param_11;
  }
  return;
}



// FUNCTION 140911cc8 FUN_140911cc8 body=103 status=ok
// SIG undefined FUN_140911cc8(void)

ulonglong FUN_140911cc8(longlong param_1)

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
LAB_140911d12:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140911d12;
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



// FUNCTION 140911d38 FUN_140911d38 body=5021 status=ok
// SIG undefined FUN_140911d38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_140911d38(longlong param_1,double param_2,double *param_3,double *param_4,double param_5,
             double *param_6,undefined8 *param_7,undefined8 *param_8,undefined4 *param_9,
             undefined8 *param_10,double param_11,undefined1 param_12,double *param_13)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  longlong lVar23;
  undefined4 uVar24;
  ulonglong uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar42;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar43;
  undefined1 auVar41 [16];
  float fVar44;
  float fVar45;
  double dVar46;
  float fVar54;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  float fVar67;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar68;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar69;
  float fVar79;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar80;
  double dVar81;
  double dVar86;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar87;
  double dVar88;
  float fVar92;
  undefined1 auVar89 [16];
  float fVar91;
  float fVar93;
  undefined1 auVar90 [16];
  double dVar94;
  double dVar95;
  float fVar96;
  double dVar97;
  double dVar98;
  double dVar99;
  float fVar100;
  undefined1 auStack_5b8 [32];
  double *local_598;
  undefined8 *local_590;
  float *local_588;
  double *local_580;
  undefined1 **local_578;
  undefined1 local_570;
  undefined *local_568;
  double local_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  longlong local_538;
  double *local_530;
  double local_528;
  double *local_520;
  double *local_518;
  double *local_510;
  undefined1 *local_508;
  double *local_500;
  undefined8 *local_4f8;
  double *local_4f0;
  double *local_4e8;
  double *local_4e0;
  undefined8 *puStack_4d8;
  undefined8 *local_4d0;
  undefined4 *puStack_4c8;
  undefined8 *local_4c0;
  undefined1 *local_4b8;
  undefined1 local_4a9;
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  double local_440;
  double local_438;
  double dStack_430;
  double local_428;
  undefined1 local_411;
  double local_410 [3];
  longlong local_3f8;
  longlong *local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  double local_388;
  undefined1 local_380;
  double local_378;
  undefined8 local_368;
  undefined8 uStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  undefined1 local_338 [8];
  float fStack_330;
  float local_328;
  float local_324;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [8];
  float fStack_280;
  undefined1 local_278 [8];
  float fStack_270;
  undefined1 local_268 [8];
  undefined8 uStack_260;
  undefined1 local_258 [8];
  undefined8 uStack_250;
  longlong local_248;
  undefined8 uStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 *local_228;
  double dStack_220;
  double dStack_218;
  double local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined1 *local_1e8;
  undefined8 local_1e0;
  code *local_1d8;
  double local_1d0;
  float local_1c8;
  float local_1c4;
  undefined1 *local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 *local_158;
  double dStack_150;
  code *local_148;
  double dStack_140;
  float local_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 auStack_108 [24];
  ulonglong local_f0;
  
  pdVar9 = param_13;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  local_411 = param_12;
  dVar88 = *param_13;
  dVar98 = param_13[1];
  dVar46 = param_13[2];
  local_428 = param_4[2] * dVar46;
  dStack_430 = param_4[1] * dVar98;
  dVar56 = *param_4 * dVar88;
  local_440 = SQRT(local_428 * local_428 + dVar56 * dVar56 + dStack_430 * dStack_430);
  dVar80 = 1.0 / local_440;
  local_438 = (double)(~-(ulonglong)(2.2250738585072014e-308 < local_440) & 0x3ff0000000000000 |
                      (ulonglong)(dVar56 * dVar80) &
                      -(ulonglong)(2.2250738585072014e-308 < local_440));
  if (2.2250738585072014e-308 < local_440) {
    local_428 = local_428 * dVar80;
    dStack_430 = dStack_430 * dVar80;
  }
  else {
    dStack_430 = 0.0;
    local_428 = 0.0;
  }
  local_520 = &local_438;
  local_518 = &local_440;
  local_4a8 = *param_3;
  dStack_4a0 = param_3[1];
  local_498 = param_3[2];
  dStack_490 = param_3[3];
  local_478 = param_3[6] * dVar46;
  dStack_480 = param_3[5] * dVar98;
  local_488 = param_3[4] * dVar88;
  local_510 = &local_4a8;
  uStack_470 = 0;
  local_468 = 0x3ff0000000000000;
  uStack_460 = 0x3ff0000000000000;
  local_458 = 0x3ff0000000000000;
  uStack_450 = 0;
  local_4b8 = &local_4a9;
  local_4a9 = 0;
  local_530 = param_13;
  local_508 = &local_411;
  local_4f8 = &param_11;
  local_4e8 = &param_5;
  local_4e0 = param_6;
  puStack_4d8 = param_7;
  local_4d0 = param_8;
  puStack_4c8 = param_9;
  local_4c0 = param_10;
  local_538 = param_1;
  local_528 = param_2;
  local_500 = param_3;
  local_4f0 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e61550(&local_538,param_1 + 0x60);
  }
  else {
    local_3f0 = (longlong *)(param_1 + 0x70);
    local_378 = 0.0;
    if (*(char *)(param_1 + 0xd8) == '\x01') {
      uVar25 = ~-(ulonglong)(0.0 <= dVar88) & ((&DAT_149931160)[0.0 <= dVar98] ^ 0x8000000000000000)
               | -(ulonglong)(0.0 <= dVar88) & (&DAT_149931160)[0.0 <= dVar98];
      local_378 = (double)(~-(ulonglong)(0.0 <= dVar46) & (uVar25 ^ 0x8000000000000000) |
                          uVar25 & -(ulonglong)(0.0 <= dVar46));
    }
    local_2c0 = param_13[2];
    local_2d0 = *param_13;
    dStack_2c8 = param_13[1];
    local_3e8 = 0;
    uStack_3e0 = 0;
    local_3d8 = 0;
    uStack_3d4 = 0;
    uStack_3d0 = 0;
    uStack_3cc = 0x3ff00000;
    local_3c8 = 0;
    uStack_3c0 = 0;
    local_3b8 = 0;
    uStack_3b0 = 0;
    local_3a8 = 0x3ff0000000000000;
    uStack_3a0 = 0x3ff0000000000000;
    local_398 = 0x3ff0000000000000;
    uStack_390 = 0;
    local_380 = param_12;
    local_328 = (float)local_440;
    local_324 = 3.4028235e+38;
    local_2f0 = 0xffffffff;
    uStack_260 = 0x7f7fc99e7f7fc99e;
    local_268 = (undefined1  [8])0x7f7fc99e7f7fc99e;
    uStack_250 = 0xff7fc99eff7fc99e;
    local_258 = (undefined1  [8])0xff7fc99eff7fc99e;
    local_338._0_4_ = (undefined4)local_438;
    local_338._4_4_ = (undefined4)dStack_430;
    fStack_330 = (float)local_428;
    register0x0000124c = 0;
    local_368 = CONCAT44((float)local_378,(float)local_378);
    fVar44 = (float)local_498;
    fVar54 = (float)dStack_490;
    fVar55 = (float)local_4a8;
    fVar67 = (float)dStack_4a0;
    local_2a8._0_4_ = (float)local_488;
    local_2a8._4_4_ = (float)dStack_480;
    local_2a8._8_4_ = (float)local_478;
    local_2a8._12_4_ = 0;
    fVar29 = fVar55 * fVar55 + fVar67 * fVar67;
    fVar42 = fVar44 * fVar44 + fVar54 * fVar54;
    auVar47._0_4_ = fVar42 + fVar29;
    auVar47._4_4_ = fVar42 + fVar29;
    auVar47._8_4_ = fVar29 + fVar42;
    auVar47._12_4_ = fVar29 + fVar42;
    auVar89._4_4_ = -(uint)(1e-08 <= auVar47._4_4_);
    auVar89._0_4_ = -(uint)(1e-08 <= auVar47._0_4_);
    auVar89._8_4_ = -(uint)(1e-08 <= auVar47._8_4_);
    auVar89._12_4_ = -(uint)(1e-08 <= auVar47._12_4_);
    auVar47 = sqrtps(auVar47,auVar47);
    auVar47 = divps(_DAT_1499314a0,auVar47);
    auVar60._0_4_ = auVar47._0_4_ * fVar55;
    auVar60._4_4_ = auVar47._4_4_ * fVar67;
    auVar60._8_4_ = auVar47._8_4_ * fVar44;
    auVar60._12_4_ = auVar47._12_4_ * fVar54;
    local_2b8 = blendvps(_DAT_149932320,auVar60,auVar89);
    local_298._0_4_ = (float)local_438;
    local_298._4_4_ = (float)dStack_430;
    local_298._8_4_ = (float)local_428;
    local_298._12_4_ = 0;
    dVar88 = *(double *)((longlong)param_2 + 0x10);
    dVar98 = *(double *)((longlong)param_2 + 0x50);
    dVar56 = *(double *)((longlong)param_2 + 0x48) * dVar98 + *(double *)((longlong)param_2 + 0x30);
    dVar80 = *(double *)((longlong)param_2 + 0x40) * dVar98 + *(double *)((longlong)param_2 + 0x28);
    dVar46 = dVar98 * *(double *)((longlong)param_2 + 0x38) + *(double *)((longlong)param_2 + 0x20);
    dVar98 = *(double *)((longlong)param_2 + 0x30);
    if (dVar56 <= *(double *)((longlong)param_2 + 0x30)) {
      dVar98 = dVar56;
    }
    uStack_230 = *(double *)((longlong)param_2 + 0x28);
    if (dVar80 <= *(double *)((longlong)param_2 + 0x28)) {
      uStack_230 = dVar80;
    }
    local_238 = *(double *)((longlong)param_2 + 0x20);
    if (dVar46 <= *(double *)((longlong)param_2 + 0x20)) {
      local_238 = dVar46;
    }
    local_210 = *(double *)((longlong)param_2 + 0x30);
    if (*(double *)((longlong)param_2 + 0x30) <= dVar56) {
      local_210 = dVar56;
    }
    dStack_218 = *(double *)((longlong)param_2 + 0x28);
    if (*(double *)((longlong)param_2 + 0x28) <= dVar80) {
      dStack_218 = dVar80;
    }
    dStack_220 = *(double *)((longlong)param_2 + 0x20);
    if (*(double *)((longlong)param_2 + 0x20) <= dVar46) {
      dStack_220 = dVar46;
    }
    local_238 = local_238 - dVar88;
    uStack_230 = uStack_230 - dVar88;
    local_228 = (undefined1 *)(dVar98 - dVar88);
    dStack_220 = dStack_220 + dVar88;
    dStack_218 = dStack_218 + dVar88;
    local_210 = local_210 + dVar88;
    local_3f8 = param_1;
    local_388 = param_2;
    uStack_360 = local_368;
    local_358 = local_438;
    dStack_350 = dStack_430;
    local_348 = local_428;
    FUN_1400c6592(&local_238,local_128,&local_4a8);
    dVar8 = param_11;
    local_268._0_4_ = (undefined4)(double)local_128._0_8_;
    local_268._4_4_ = (undefined4)(double)local_128._8_8_;
    uStack_260._0_4_ = (float)(double)local_118._0_8_;
    uStack_260._4_4_ = 0.0;
    local_258._0_4_ = (undefined4)(double)local_118._8_8_;
    local_258._4_4_ = (undefined4)(double)auStack_108._0_8_;
    uStack_250._0_4_ = (float)(double)auStack_108._8_8_;
    uStack_250._4_4_ = 0.0;
    dVar6 = *param_3;
    dVar7 = param_3[1];
    dVar3 = param_3[2];
    dVar86 = *(double *)((longlong)param_2 + 0x20);
    dVar31 = *(double *)((longlong)param_2 + 0x28);
    dVar88 = *(double *)((longlong)param_2 + 0x30);
    dVar98 = param_3[3];
    dVar46 = param_3[3];
    dVar94 = dVar31 * dVar6 - dVar7 * dVar86;
    dVar95 = *(double *)((longlong)param_2 + 0x30) * dVar7 - dVar3 * dVar31;
    dVar57 = dVar86 * dVar3 - *(double *)((longlong)param_2 + 0x30) * dVar6;
    dVar95 = dVar95 + dVar95;
    dVar57 = dVar57 + dVar57;
    dVar94 = dVar94 + dVar94;
    dVar56 = *(double *)((longlong)param_2 + 0x50);
    dVar80 = *(double *)((longlong)param_2 + 0x48) * dVar56 + dVar88;
    dVar68 = *(double *)((longlong)param_2 + 0x40) * dVar56 + *(double *)((longlong)param_2 + 0x28);
    dVar56 = dVar56 * *(double *)((longlong)param_2 + 0x38) + dVar86;
    dVar97 = dVar68 * dVar6 - dVar7 * dVar56;
    dVar99 = dVar80 * dVar7 - dVar3 * dVar68;
    dVar58 = dVar56 * dVar3 - dVar80 * dVar6;
    dVar99 = dVar99 + dVar99;
    dVar58 = dVar58 + dVar58;
    dVar97 = dVar97 + dVar97;
    local_558 = DAT_14c8464f0;
    dVar81 = (dVar94 * dVar7 - dVar57 * dVar3) + dVar98 * dVar95 + dVar86 + DAT_14c8464e0;
    dVar86 = (dVar3 * dVar95 - dVar6 * dVar94) + dVar46 * dVar57 + dVar31 + DAT_14c8464e8;
    dVar56 = (dVar97 * dVar7 - dVar58 * dVar3) + dVar98 * dVar99 + dVar56 + DAT_14c8464e0;
    dVar68 = (dVar3 * dVar99 - dVar6 * dVar97) + dVar46 * dVar58 + dVar68 + DAT_14c8464e8;
    dVar46 = dVar81;
    if (dVar81 <= dVar56) {
      dVar46 = dVar56;
    }
    dVar3 = *(double *)((longlong)param_2 + 0x10);
    lVar15 = 0;
    do {
      uVar25 = -(ulonglong)(ABS(pdVar9[lVar15]) < 9.999999974752427e-07);
      local_410[lVar15] =
           (double)(uVar25 & 0x412e8480014aeccc | ~uVar25 & (ulonglong)(1.0 / pdVar9[lVar15]));
      lVar15 = lVar15 + 1;
    } while (lVar15 != 3);
    local_560 = param_5;
    dVar31 = param_5;
    if (*(int *)(param_1 + 0xe8) != 0) {
      dVar31 = dVar94 * dVar98 + dVar88 + (dVar57 * dVar6 - dVar95 * dVar7) + DAT_14c8464f0;
      dVar98 = dVar97 * dVar98 + dVar80 + (dVar58 * dVar6 - dVar99 * dVar7) + DAT_14c8464f0;
      dVar88 = dVar86;
      if (dVar68 <= dVar86) {
        dVar88 = dVar68;
      }
      dVar80 = dVar31;
      if (dVar31 <= dVar98) {
        dVar80 = dVar98;
      }
      if (dVar98 <= dVar31) {
        dVar31 = dVar98;
      }
      if (dVar86 <= dVar68) {
        dVar86 = dVar68;
      }
      dVar68 = (double)(~-(ulonglong)(dVar81 < dVar56) & (ulonglong)dVar56 |
                       -(ulonglong)(dVar81 < dVar56) & (ulonglong)dVar81) - dVar3;
      dVar99 = (dVar80 + dVar3) - (dVar31 - dVar3);
      dVar97 = (dVar86 + dVar3) - (dVar88 - dVar3);
      dVar80 = (dVar46 + dVar3) - dVar68;
      dVar98 = param_3[6];
      dVar46 = param_3[5];
      dVar56 = param_3[4];
      local_558 = *param_4;
      dStack_550 = param_4[1];
      local_548 = param_4[2];
      dStack_540 = 0.0;
      local_248 = 0;
      uStack_240 = 0;
      FUN_14481578e(&local_248,0x10);
      uVar25 = uStack_240;
      lVar15 = (longlong)(int)uStack_240;
      uVar12 = (int)uStack_240 + 1;
      uStack_240 = CONCAT44(uStack_240._4_4_,uVar12);
      if (uStack_240._4_4_ < uVar12) {
        FUN_1446f48e2(&local_248,uVar25 & 0xffffffff);
      }
      *(undefined4 *)(local_248 + lVar15 * 4) = 0;
      if ((int)uStack_240 != 0) {
        fVar42 = (float)((dVar99 * 0.5 + (dVar31 - dVar3)) * local_410[2] + dVar98);
        fVar54 = (float)((dVar80 * 0.5 + dVar68) * local_410[0] + dVar56);
        fVar55 = (float)((dVar97 * 0.5 + (dVar88 - dVar3)) * local_410[1] + dVar46);
        fVar44 = (float)(dVar99 * ABS(local_410[2]) * 0.5 + dVar8);
        fVar67 = (float)(dVar80 * ABS(local_410[0]) * 0.5 + dVar8);
        fVar96 = (float)(dVar97 * ABS(local_410[1]) * 0.5 + dVar8);
        fVar29 = (float)local_560;
        auVar82._4_4_ = (float)dStack_550;
        auVar82._0_4_ = (float)local_558;
        auVar82._8_4_ = (float)local_548;
        auVar82._12_4_ = (float)dStack_540;
        auVar89 = divps(_DAT_1499314a0,auVar82);
        uVar12 = -(uint)(ABS((float)local_558) < 1e-08);
        uVar26 = -(uint)(ABS((float)dStack_550) < 1e-08);
        uVar27 = -(uint)(ABS((float)local_548) < 1e-08);
        uVar28 = -(uint)(ABS((float)dStack_540) < 1e-08);
        do {
          lVar15 = (longlong)(int)uStack_240;
          uStack_240 = CONCAT44(uStack_240._4_4_,(int)uStack_240 + -1);
          lVar21 = (longlong)*(int *)(local_248 + -4 + lVar15 * 4) * 0x50 +
                   *(longlong *)(param_1 + 0xe0);
          lVar15 = 0;
          bVar10 = true;
          do {
            bVar22 = bVar10;
            uVar25 = uStack_240;
            iVar4 = *(int *)(lVar21 + 0x40 + lVar15 * 4);
            lVar23 = (longlong)iVar4;
            if (lVar23 != -1) {
              lVar17 = lVar15 * 0x20;
              pfVar2 = (float *)(lVar21 + 0x10 + lVar17);
              pfVar1 = (float *)(lVar21 + lVar17);
              auVar48._4_4_ = -(uint)(fVar55 < pfVar1[1] - fVar96);
              auVar48._0_4_ = -(uint)(fVar54 < *pfVar1 - fVar67);
              auVar48._8_4_ = -(uint)(fVar42 < pfVar1[2] - fVar44);
              auVar48._12_4_ = -(uint)(0.0 < pfVar1[3] - 0.0);
              auVar70._4_4_ = -(uint)(pfVar2[1] + fVar96 < fVar55);
              auVar70._0_4_ = -(uint)(*pfVar2 + fVar67 < fVar54);
              auVar70._8_4_ = -(uint)(pfVar2[2] + fVar44 < fVar42);
              auVar70._12_4_ = -(uint)(pfVar2[3] + 0.0 < 0.0);
              auVar70 = auVar70 | auVar48;
              auVar71._0_4_ = auVar70._0_4_ & uVar12;
              auVar71._4_4_ = auVar70._4_4_ & uVar26;
              auVar71._8_4_ = auVar70._8_4_ & uVar27;
              auVar71._12_4_ = auVar70._12_4_ & uVar28;
              iVar16 = movmskps((int)lVar17,auVar71);
              if (iVar16 == 0) {
                auVar49._4_4_ = fVar29;
                auVar49._0_4_ = fVar29;
                auVar49._8_4_ = fVar29;
                auVar49._12_4_ = fVar29;
                fVar87 = auVar89._0_4_;
                fVar91 = auVar89._4_4_;
                fVar92 = auVar89._8_4_;
                fVar93 = auVar89._12_4_;
                auVar59._0_4_ = ((*pfVar2 + fVar67) - fVar54) * fVar87;
                auVar59._4_4_ = ((pfVar2[1] + fVar96) - fVar55) * fVar91;
                auVar59._8_4_ = ((pfVar2[2] + fVar44) - fVar42) * fVar92;
                auVar59._12_4_ = ((pfVar2[3] + 0.0) - 0.0) * fVar93;
                auVar72._0_8_ =
                     CONCAT44(~uVar26 & (uint)(((pfVar1[1] - fVar96) - fVar55) * fVar91),
                              ~uVar12 & (uint)(((*pfVar1 - fVar67) - fVar54) * fVar87));
                auVar72._8_4_ = ~uVar27 & (uint)(((pfVar1[2] - fVar44) - fVar42) * fVar92);
                auVar72._12_4_ = ~uVar28 & (uint)(((pfVar1[3] - 0.0) - 0.0) * fVar93);
                auVar32._4_4_ = uVar26;
                auVar32._0_4_ = uVar12;
                auVar32._8_4_ = uVar27;
                auVar32._12_4_ = uVar28;
                auVar60 = blendvps(auVar59,auVar49,auVar32);
                auVar33._8_4_ = auVar72._8_4_;
                auVar33._0_8_ = auVar72._0_8_;
                auVar33._12_4_ = auVar72._12_4_;
                auVar47 = minps(auVar33,auVar60);
                auVar60 = maxps(auVar72,auVar60);
                auVar34._12_4_ = auVar47._12_4_;
                auVar61._0_8_ = auVar47._4_8_;
                auVar61._8_4_ = auVar47._0_4_;
                auVar61._12_4_ = auVar34._12_4_;
                auVar82 = maxps(auVar47,auVar61);
                auVar34._4_4_ = auVar47._0_4_;
                auVar34._0_4_ = auVar47._8_4_;
                auVar34._8_4_ = auVar47._4_4_;
                auVar47 = maxps(auVar82,auVar34);
                auVar82 = maxps(auVar47,ZEXT816(0));
                auVar73._12_4_ = auVar60._12_4_;
                auVar35._0_8_ = auVar60._4_8_;
                auVar35._8_4_ = auVar60._0_4_;
                auVar35._12_4_ = auVar73._12_4_;
                auVar47 = minps(auVar60,auVar35);
                auVar73._4_4_ = auVar60._0_4_;
                auVar73._0_4_ = auVar60._8_4_;
                auVar73._8_4_ = auVar60._4_4_;
                auVar47 = minps(auVar47,auVar73);
                auVar47 = minps(auVar47,auVar49);
                auVar62._4_4_ = -(uint)(auVar47._4_4_ < auVar82._4_4_);
                auVar62._0_4_ = -(uint)(auVar47._0_4_ < auVar82._0_4_);
                auVar62._8_4_ = -(uint)(auVar47._8_4_ < auVar82._8_4_);
                auVar62._12_4_ = -(uint)(auVar47._12_4_ < auVar82._12_4_);
                iVar16 = movmskps(0,auVar62);
                if (iVar16 == 0) {
                  iVar16 = *(int *)(lVar21 + 0x48 + lVar15 * 4);
                  if (iVar16 == 0) {
                    lVar15 = (longlong)(int)uStack_240;
                    uVar13 = (int)uStack_240 + 1;
                    uStack_240 = CONCAT44(uStack_240._4_4_,uVar13);
                    if (uStack_240._4_4_ < uVar13) {
                      FUN_1446f48e2(&local_248,uVar25 & 0xffffffff);
                    }
                    *(int *)(local_248 + lVar15 * 4) = iVar4;
                  }
                  else if (0 < iVar16) {
                    lVar15 = lVar23 << 0x20;
                    uVar25 = lVar23 << 5 | 0x10;
                    do {
                      lVar17 = *(longlong *)(param_1 + 0xf0);
                      pfVar1 = (float *)(lVar17 + uVar25);
                      pfVar2 = (float *)(lVar17 + -0x10 + uVar25);
                      auVar50._4_4_ = -(uint)(fVar55 < pfVar2[1] - fVar96);
                      auVar50._0_4_ = -(uint)(fVar54 < *pfVar2 - fVar67);
                      auVar50._8_4_ = -(uint)(fVar42 < pfVar2[2] - fVar44);
                      auVar50._12_4_ = -(uint)(0.0 < pfVar2[3] - 0.0);
                      auVar74._4_4_ = -(uint)(pfVar1[1] + fVar96 < fVar55);
                      auVar74._0_4_ = -(uint)(*pfVar1 + fVar67 < fVar54);
                      auVar74._8_4_ = -(uint)(pfVar1[2] + fVar44 < fVar42);
                      auVar74._12_4_ = -(uint)(pfVar1[3] + 0.0 < 0.0);
                      auVar74 = auVar74 | auVar50;
                      auVar75._0_4_ = auVar74._0_4_ & uVar12;
                      auVar75._4_4_ = auVar74._4_4_ & uVar26;
                      auVar75._8_4_ = auVar74._8_4_ & uVar27;
                      auVar75._12_4_ = auVar74._12_4_ & uVar28;
                      iVar14 = movmskps((int)lVar17,auVar75);
                      if (iVar14 == 0) {
                        auVar51._4_4_ = fVar29;
                        auVar51._0_4_ = fVar29;
                        auVar51._8_4_ = fVar29;
                        auVar51._12_4_ = fVar29;
                        auVar63._0_4_ = ((*pfVar1 + fVar67) - fVar54) * fVar87;
                        auVar63._4_4_ = ((pfVar1[1] + fVar96) - fVar55) * fVar91;
                        auVar63._8_4_ = ((pfVar1[2] + fVar44) - fVar42) * fVar92;
                        auVar63._12_4_ = ((pfVar1[3] + 0.0) - 0.0) * fVar93;
                        auVar76._0_8_ =
                             CONCAT44(~uVar26 & (uint)(((pfVar2[1] - fVar96) - fVar55) * fVar91),
                                      ~uVar12 & (uint)(((*pfVar2 - fVar67) - fVar54) * fVar87));
                        auVar76._8_4_ = ~uVar27 & (uint)(((pfVar2[2] - fVar44) - fVar42) * fVar92);
                        auVar76._12_4_ = ~uVar28 & (uint)(((pfVar2[3] - 0.0) - 0.0) * fVar93);
                        auVar36._4_4_ = uVar26;
                        auVar36._0_4_ = uVar12;
                        auVar36._8_4_ = uVar27;
                        auVar36._12_4_ = uVar28;
                        auVar60 = blendvps(auVar63,auVar51,auVar36);
                        auVar37._8_4_ = auVar76._8_4_;
                        auVar37._0_8_ = auVar76._0_8_;
                        auVar37._12_4_ = auVar76._12_4_;
                        auVar47 = minps(auVar37,auVar60);
                        auVar60 = maxps(auVar76,auVar60);
                        auVar38._12_4_ = auVar47._12_4_;
                        auVar64._0_8_ = auVar47._4_8_;
                        auVar64._8_4_ = auVar47._0_4_;
                        auVar64._12_4_ = auVar38._12_4_;
                        auVar82 = maxps(auVar47,auVar64);
                        auVar38._4_4_ = auVar47._0_4_;
                        auVar38._0_4_ = auVar47._8_4_;
                        auVar38._8_4_ = auVar47._4_4_;
                        auVar47 = maxps(auVar82,auVar38);
                        auVar82 = maxps(auVar47,ZEXT816(0));
                        auVar77._12_4_ = auVar60._12_4_;
                        auVar39._0_8_ = auVar60._4_8_;
                        auVar39._8_4_ = auVar60._0_4_;
                        auVar39._12_4_ = auVar77._12_4_;
                        auVar47 = minps(auVar60,auVar39);
                        auVar77._4_4_ = auVar60._0_4_;
                        auVar77._0_4_ = auVar60._8_4_;
                        auVar77._8_4_ = auVar60._4_4_;
                        auVar47 = minps(auVar47,auVar77);
                        auVar47 = minps(auVar47,auVar51);
                        auVar65._4_4_ = -(uint)(auVar47._4_4_ < auVar82._4_4_);
                        auVar65._0_4_ = -(uint)(auVar47._0_4_ < auVar82._0_4_);
                        auVar65._8_4_ = -(uint)(auVar47._8_4_ < auVar82._8_4_);
                        auVar65._12_4_ = -(uint)(auVar47._12_4_ < auVar82._12_4_);
                        iVar14 = movmskps(0,auVar65);
                        if (iVar14 == 0) {
                          fVar45 = (float)local_2c0;
                          fVar69 = (float)local_2d0;
                          fVar79 = (float)dStack_2c8;
                          lVar17 = *local_3f0;
                          lVar19 = lVar15 >> 0x20;
                          uVar18 = (ulonglong)*(ushort *)(lVar17 + lVar19 * 6);
                          lVar5 = *(longlong *)(local_3f8 + 0x48);
                          uVar20 = (ulonglong)*(ushort *)(lVar17 + 2 + lVar19 * 6);
                          auVar40._8_8_ = 0;
                          auVar40._0_8_ = *(ulonglong *)(lVar5 + uVar18 * 0xc);
                          auVar47 = insertps(auVar40,*(undefined4 *)(lVar5 + 8 + uVar18 * 0xc),0x28)
                          ;
                          uVar18 = (ulonglong)*(ushort *)(lVar17 + 4 + lVar19 * 6);
                          auVar52._8_8_ = 0;
                          auVar52._0_8_ = *(ulonglong *)(lVar5 + uVar20 * 0xc);
                          auVar60 = insertps(auVar52,*(undefined4 *)(lVar5 + 8 + uVar20 * 0xc),0x28)
                          ;
                          auVar66._8_8_ = 0;
                          auVar66._0_8_ = *(ulonglong *)(lVar5 + uVar18 * 0xc);
                          auVar82 = insertps(auVar66,*(undefined4 *)(lVar5 + 8 + uVar18 * 0xc),0x28)
                          ;
                          fVar30 = auVar47._0_4_ * fVar69;
                          fVar43 = auVar47._4_4_ * fVar79;
                          local_128._0_8_ = CONCAT44(fVar43,fVar30);
                          local_128._8_4_ = auVar47._8_4_ * fVar45;
                          local_128._12_4_ = auVar47._12_4_ * 0.0;
                          local_118._0_4_ = auVar60._0_4_ * fVar69;
                          local_118._4_4_ = auVar60._4_4_ * fVar79;
                          local_118._8_4_ = auVar60._8_4_ * fVar45;
                          local_118._12_4_ = auVar60._12_4_ * 0.0;
                          auStack_108._0_4_ = auVar82._0_4_ * fVar69;
                          auStack_108._4_4_ = auVar82._4_4_ * fVar79;
                          auStack_108._8_4_ = auVar82._8_4_ * fVar45;
                          auStack_108._12_4_ = auVar82._12_4_ * 0.0;
                          fVar69 = (auStack_108._4_4_ - fVar43) * (local_118._0_4_ - fVar30) -
                                   (local_118._4_4_ - fVar43) * (auStack_108._0_4_ - fVar30);
                          fVar79 = (auStack_108._8_4_ - local_128._8_4_) *
                                   (local_118._4_4_ - fVar43) -
                                   (local_118._8_4_ - local_128._8_4_) *
                                   (auStack_108._4_4_ - fVar43);
                          fVar100 = (auStack_108._0_4_ - fVar30) *
                                    (local_118._8_4_ - local_128._8_4_) -
                                    (local_118._0_4_ - fVar30) *
                                    (auStack_108._8_4_ - local_128._8_4_);
                          fVar45 = fStack_330 * fVar69 +
                                   (float)local_338._0_4_ * fVar79 +
                                   (float)local_338._4_4_ * fVar100;
                          auVar83._4_4_ = -(uint)(0.0 < fVar45 * local_368._4_4_);
                          auVar83._0_4_ = -(uint)(0.0 < fVar45 * (float)local_368);
                          auVar83._8_4_ = -(uint)(0.0 < fVar45 * (float)uStack_360);
                          auVar83._12_4_ = -(uint)(0.0 < fVar45 * uStack_360._4_4_);
                          uVar24 = movmskps(0,auVar83);
                          if (((local_378 != 0.0) || (NAN(local_378))) && ((char)uVar24 != '\0')) {
                            auVar78._8_4_ = local_128._8_4_;
                            auVar78._0_8_ = local_128._0_8_;
                            auVar78._12_4_ = local_128._12_4_;
                            auVar47 = minps(auVar78,local_118);
                            auVar47 = minps(auVar47,auStack_108._0_16_);
                            auVar84._8_4_ = local_128._8_4_;
                            auVar84._0_8_ = local_128._0_8_;
                            auVar84._12_4_ = local_128._12_4_;
                            auVar60 = maxps(auVar84,local_118);
                            auVar60 = maxps(auVar60,auStack_108._0_16_);
                            auVar85._4_4_ = -(uint)(auVar60._4_4_ < (float)local_268._4_4_);
                            auVar85._0_4_ = -(uint)(auVar60._0_4_ < (float)local_268._0_4_);
                            auVar85._8_4_ = -(uint)(auVar60._8_4_ < (float)uStack_260);
                            auVar85._12_4_ = -(uint)(auVar60._12_4_ < uStack_260._4_4_);
                            auVar90._4_4_ = -(uint)((float)local_258._4_4_ < auVar47._4_4_);
                            auVar90._0_4_ = -(uint)((float)local_258._0_4_ < auVar47._0_4_);
                            auVar90._8_4_ = -(uint)((float)uStack_250 < auVar47._8_4_);
                            auVar90._12_4_ = -(uint)(uStack_250._4_4_ < auVar47._12_4_);
                            iVar14 = movmskps((int)lVar5,auVar85 | auVar90);
                            if (iVar14 != 0) goto LAB_140912931;
                          }
                          auVar53._0_8_ =
                               CONCAT44(local_118._4_4_ - auStack_108._4_4_,
                                        local_118._0_4_ - auStack_108._0_4_) & 0x7fffffff7fffffff;
                          auVar53._8_4_ = ABS(local_118._8_4_ - auStack_108._8_4_);
                          auVar53._12_4_ = ABS(local_118._12_4_ - auStack_108._12_4_);
                          auVar41._0_8_ =
                               CONCAT44(fVar43 - local_118._4_4_,fVar30 - local_118._0_4_) &
                               0x7fffffff7fffffff;
                          auVar41._8_4_ = ABS(local_128._8_4_ - local_118._8_4_);
                          auVar41._12_4_ = ABS(local_128._12_4_ - local_118._12_4_);
                          auVar47 = maxps(auVar41,auVar53);
                          if (1e+10 < auVar47._8_4_ * auVar47._8_4_ +
                                      auVar47._0_4_ * auVar47._0_4_ + auVar47._4_4_ * auVar47._4_4_)
                          {
                            local_560 = (double)CONCAT71(local_560._1_7_,local_380);
                            local_178 = (double)local_298._0_4_;
                            dStack_170 = (double)local_298._4_4_;
                            local_168 = (double)local_298._8_4_;
                            dStack_160 = (double)local_298._12_4_;
                            local_198 = (double)local_2a8._0_4_;
                            dStack_190 = (double)local_2a8._4_4_;
                            local_188 = (double)local_2a8._8_4_;
                            dStack_180 = (double)local_2a8._12_4_;
                            local_1b8 = (double)local_2b8._0_4_;
                            dStack_1b0 = (double)local_2b8._4_4_;
                            local_1a8 = (double)local_2b8._8_4_;
                            dStack_1a0 = (double)local_2b8._12_4_;
                            local_1d0 = local_388;
                            local_1c8 = (float)*(double *)((longlong)local_388 + 0x10);
                            local_1c0 = &LAB_144a386e2;
                            local_1e8 = local_128;
                            local_1e0 = 0;
                            local_1d8 = FUN_14014b546;
                            local_570 = local_380;
                            local_588 = &local_12c;
                            local_590 = (undefined8 *)CONCAT44(local_590._4_4_,local_328 * fVar29);
                            local_598 = &local_178;
                            local_580 = &local_238;
                            local_578 = &local_158;
                            local_1c4 = local_1c8;
                            cVar11 = FUN_146e5a99a();
                            register0x0000124c = (float)dStack_220;
                            fStack_280 = (float)(double)local_228;
                            local_288._0_4_ = (undefined4)local_238;
                            local_288._4_4_ = (undefined4)uStack_230;
                            register0x0000120c = (float)dStack_140;
                            fStack_270 = (float)(double)local_148;
                            local_278._0_4_ = (undefined4)(double)local_158;
                            local_278._4_4_ = (undefined4)dStack_150;
                          }
                          else {
                            local_238 = local_388;
                            uStack_230 = (double)CONCAT44((float)*(double *)
                                                                  ((longlong)local_388 + 0x10),
                                                          (float)*(double *)
                                                                  ((longlong)local_388 + 0x10));
                            local_228 = &LAB_144a386e2;
                            local_158 = local_128;
                            dStack_150 = 0.0;
                            local_148 = FUN_14014b546;
                            local_568 = &DAT_149f52c20;
                            local_570 = local_380;
                            local_578 = (undefined1 **)local_278;
                            local_580 = (double *)local_288;
                            local_588 = &local_12c;
                            local_590 = (undefined8 *)CONCAT44(local_590._4_4_,local_328 * fVar29);
                            local_598 = (double *)local_298;
                            cVar11 = FUN_1448541f8(&local_158,&local_238,local_2b8,local_2a8);
                          }
                          fVar30 = local_12c;
                          if ((cVar11 != '\0') && ((local_12c <= 0.0 || ((char)uVar24 == '\0')))) {
                            if (local_12c < local_324 * local_328) {
                              local_158 = (undefined1 *)(double)(float)local_278._0_4_;
                              dStack_150 = (double)(float)local_278._4_4_;
                              local_148 = (code *)(double)fStack_270;
                              local_238 = (double)(float)local_288._0_4_;
                              uStack_230 = (double)(float)local_288._4_4_;
                              local_228 = (undefined1 *)(double)fStack_280;
                              local_208 = local_2d0;
                              dStack_200 = dStack_2c8;
                              local_1f8 = local_2c0;
                              local_580 = (double *)&local_324;
                              local_598 = (double *)CONCAT44(local_598._4_4_,local_12c);
                              local_590 = &local_308;
                              local_588 = (float *)&local_320;
                              FUN_1409130d6(&local_208,&local_158,&local_238);
                              local_2f0 = (undefined4)lVar23;
                              local_2e8 = (double)fVar79;
                              dStack_2e0 = (double)fVar100;
                              local_2d8 = (double)fVar69;
                              fVar29 = local_324;
                              if (fVar30 <= 0.0) goto LAB_140912d11;
                            }
                          }
                        }
                      }
LAB_140912931:
                      lVar23 = lVar23 + 1;
                      lVar15 = lVar15 + 0x100000000;
                      uVar25 = uVar25 + 0x20;
                    } while (lVar23 < iVar16 + iVar4);
                  }
                }
              }
            }
            lVar15 = 1;
            bVar10 = false;
          } while (bVar22);
        } while ((int)uStack_240 != 0);
      }
LAB_140912d11:
      if (local_248 != 0) {
        FUN_1400020a8();
      }
      dVar31 = *local_4e8;
    }
    if ((double)local_324 <= dVar31) {
      *local_4e0 = (double)local_324;
      puStack_4d8[2] = local_310;
      *puStack_4d8 = local_320;
      puStack_4d8[1] = uStack_318;
      local_4d0[2] = local_2f8;
      *local_4d0 = local_308;
      local_4d0[1] = uStack_300;
      *puStack_4c8 = local_2f0;
      FUN_140490318(param_1,local_128);
      local_4c0[2] = local_118._0_8_;
      *local_4c0 = local_128._0_8_;
      local_4c0[1] = local_128._8_8_;
      *local_4b8 = 1;
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_5b8) == DAT_14c707940) {
    return local_4a9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409130d6 FUN_1409130d6 body=362 status=ok
// SIG undefined FUN_1409130d6(void)

void FUN_1409130d6(double *param_1,double *param_2,double *param_3,float param_4,float param_5,
                  double *param_6,double *param_7,float *param_8)

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
  
  dVar1 = *param_1;
  dVar2 = param_1[1];
  if (((((dVar1 != 0.0) || (NAN(dVar1))) || (dVar2 != 0.0)) || ((NAN(dVar2) || (param_1[2] != 0.0)))
      ) || (NAN(param_1[2]))) {
    dVar3 = param_1[2];
    *param_8 = param_5 / param_4;
    dVar5 = param_1[2] * param_2[2];
    dVar9 = param_1[1] * param_2[1];
    dVar7 = *param_1 * *param_2;
    dVar4 = dVar5 * dVar5 + dVar7 * dVar7 + dVar9 * dVar9;
    if (((dVar4 != 1.0) || (dVar6 = dVar5, dVar8 = dVar7, dVar10 = dVar9, NAN(dVar4))) &&
       (dVar6 = DAT_14c8464f0, dVar8 = DAT_14c8464e0, dVar10 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar4)) {
      dVar4 = 1.0 / SQRT(dVar4);
      dVar6 = dVar5 * dVar4;
      dVar8 = dVar7 * dVar4;
      dVar10 = dVar9 * dVar4;
    }
    *param_6 = dVar8;
    param_6[1] = dVar10;
    param_6[2] = dVar6;
    dVar4 = param_3[2];
    dVar5 = param_3[1];
    *param_7 = (1.0 / dVar1) * *param_3;
    param_7[1] = (1.0 / dVar2) * dVar5;
    param_7[2] = (1.0 / dVar3) * dVar4;
  }
  return;
}



// FUNCTION 140913240 FUN_140913240 body=5077 status=ok
// SIG undefined FUN_140913240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140913240(longlong *param_1,double *param_2,code *param_3,double *param_4,
                       undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                       undefined1 (*param_7) [16],double *param_8,undefined1 (*param_9) [16],
                       undefined1 (*param_10) [16],undefined1 (*param_11) [16],
                       undefined1 (*param_12) [16],char param_13)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  char cVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  double *pdVar21;
  double *pdVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar27;
  float fVar28;
  undefined1 auVar26 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  float fVar41;
  float fVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  undefined1 auStack_3b8 [32];
  undefined1 (*local_398) [16];
  undefined1 (*local_390) [16];
  undefined1 (*local_388) [16];
  double *local_380;
  undefined1 (*local_378) [16];
  undefined1 (*local_370) [16];
  undefined1 (*local_368) [16];
  undefined1 (*local_360) [16];
  undefined1 *local_358;
  undefined1 (*local_348) [16];
  undefined1 (*local_340) [16];
  double local_338;
  double dStack_330;
  undefined1 local_328 [8];
  double *pdStack_320;
  code *local_318;
  double *pdStack_310;
  undefined1 local_308 [16];
  undefined1 (*local_2f8) [16];
  double *pdStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  char local_2c8;
  undefined1 *local_2c0;
  undefined1 *local_2b8;
  code *local_2b0;
  double *local_2a8;
  undefined8 *local_2a0;
  undefined1 (*local_298) [16];
  double *local_290;
  double *local_288;
  undefined8 *local_280;
  char *local_278;
  double *local_270;
  double local_268;
  double dStack_260;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  double local_228 [4];
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  char local_181;
  longlong *local_180;
  float local_178;
  float local_174;
  code *local_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float local_13c;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ulonglong local_f0;
  
  cVar16 = param_13;
  pauVar15 = param_12;
  pauVar14 = param_11;
  pauVar13 = param_10;
  pauVar12 = param_9;
  pauVar11 = param_7;
  pauVar10 = param_6;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_181 = param_13;
  bVar1 = *(byte *)((longlong)param_1 + 0x1c);
  if (bVar1 == 4) {
    FUN_1447dc19e(param_1 + 6,local_328,param_2);
    local_358 = (undefined1 *)CONCAT71(local_358._1_7_,cVar16);
    local_360 = pauVar15;
    local_368 = pauVar14;
    local_370 = pauVar13;
    local_378 = pauVar12;
    local_380 = param_8;
    local_388 = param_7;
    local_390 = pauVar10;
    local_398 = param_5;
    uVar18 = FUN_140913240(param_1[4],local_328,param_3,param_4);
    pdVar21 = (double *)(ulonglong)uVar18;
    goto LAB_140913e5d;
  }
  *(undefined4 *)*param_10 = 0xffffffff;
  auVar34 = _DAT_149934d80;
  local_1a8 = -1.79769313486232e+308;
  dStack_1a0 = -1.79769313486232e+308;
  local_198 = -1.79769313486232e+308;
  local_1c8 = 0.0;
  dStack_1c0 = 0.0;
  local_1b8 = 0.0;
  _local_328 = ZEXT816(0);
  local_318 = (code *)0x0;
  pdStack_310 = (double *)&DAT_3ff0000000000000;
  local_308 = ZEXT816(0);
  local_2f8 = (undefined1 (*) [16])0x0;
  pdStack_2f0 = (double *)0x0;
  local_2e8 = _DAT_149934d80;
  local_2d8 = ZEXT816(0x3ff0000000000000);
  local_338 = *param_2;
  dStack_330 = param_2[1];
  dVar25 = param_2[2];
  dVar29 = param_2[3];
  dVar36 = dVar25 * dVar25 + local_338 * local_338;
  dVar38 = dVar29 * dVar29 + dStack_330 * dStack_330;
  auVar26._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar36 + dVar38)));
  auVar26._0_8_ =
       -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar36 + dVar38)));
  iVar17 = movmskpd(0xffffffff,auVar26);
  local_340 = param_6;
  local_348 = param_12;
  if (iVar17 == 0) {
    auVar26 = minpd(*(undefined1 (*) [16])(param_4 + 8),*(undefined1 (*) [16])(param_2 + 8));
    auVar31 = minpd(*(undefined1 (*) [16])(param_4 + 10),*(undefined1 (*) [16])(param_2 + 10));
    auVar47._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
    auVar47._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
    iVar17 = movmskpd(0,auVar47);
    auVar32._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
    auVar32._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
    uVar18 = movmskpd((int)param_1,auVar32);
    if ((uVar18 & 0x3fffffff) == 0 && iVar17 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8460b0) && (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1))
      {
        DAT_14c8460a0 = 0x322bcc77322bcc77;
        DAT_14c8460a8 = 0x322bcc77322bcc77;
        _Init_thread_footer(&DAT_14c8460b0);
      }
      local_338 = *param_2;
      dStack_330 = param_2[1];
      dVar25 = param_2[2];
      dVar29 = param_2[3];
      auVar26 = *(undefined1 (*) [16])(param_2 + 8);
      auVar47 = divpd(auVar34,auVar26);
      auVar34 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_2 + 10));
      dVar37 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar26._0_8_)) &
                       auVar47._0_8_);
      dVar39 = (double)(-(ulonglong)
                         ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) < ABS(auVar26._8_8_)) &
                       auVar47._8_8_);
      dVar35 = (double)(-(ulonglong)
                         ((double)(float)DAT_14c8460a8 <
                         ABS(SUB168(*(undefined1 (*) [16])(param_2 + 10),0))) & auVar34._0_8_);
      dVar45 = param_4[4] - param_2[4];
      dVar36 = param_4[5] - param_2[5];
      dVar43 = param_4[6] - param_2[6];
      dVar3 = -local_338;
      dVar4 = -dStack_330;
      dVar30 = dVar25 * -1.0;
      dVar33 = dVar29 * 1.0;
      dVar44 = dVar36 * dVar3 - dVar45 * dVar4;
      dVar40 = dVar43 * dVar4 - dVar36 * dVar30;
      dVar48 = dVar45 * dVar30 - dVar43 * dVar3;
      dVar49 = dVar33 * 0.0 - dVar33 * 0.0;
      dVar40 = dVar40 + dVar40;
      dVar48 = dVar48 + dVar48;
      dVar44 = dVar44 + dVar44;
      dVar49 = dVar49 + dVar49;
      dVar2 = param_4[9] * dVar39;
      dVar6 = *param_4;
      dVar7 = param_4[1];
      dVar8 = param_4[2];
      dVar9 = param_4[3];
      dVar39 = ((dVar40 * dVar30 - dVar44 * dVar3) + dVar33 * dVar48 + dVar36) * dVar39;
      dVar36 = param_2[1];
      dVar38 = param_2[1];
      dVar5 = dVar6 * dVar30 * 1.0 + ((dVar7 * dVar33 - *param_2 * dVar8 * -1.0) - dVar9 * dVar38);
      local_2e8._8_4_ = SUB84(dVar2,0);
      local_2e8._0_8_ = param_4[8] * dVar37;
      local_2e8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      local_2d8._8_4_ = SUB84(param_4[0xb] * 0.0,0);
      local_2d8._0_8_ = param_4[10] * dVar35;
      local_2d8._12_4_ = (int)((ulonglong)(param_4[0xb] * 0.0) >> 0x20);
      local_308._8_4_ = SUB84(dVar39,0);
      local_308._0_8_ = ((dVar44 * dVar4 - dVar30 * dVar48) + dVar33 * dVar40 + dVar45) * dVar37;
      local_308._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      local_2f8 = (undefined1 (*) [16])
                  (((dVar48 * dVar3 - dVar4 * dVar40) + dVar33 * dVar44 + dVar43) * dVar35);
      pdStack_2f0 = (double *)(((dVar49 * dVar33 - dVar49 * dVar33) + dVar33 * dVar49 + 0.0) * 0.0);
      pdStack_320._0_4_ = SUB84(dVar5,0);
      local_328 = (undefined1  [8])
                  (dVar7 * dVar30 * -1.0 +
                  ((dVar6 * dVar33 - *param_2 * dVar9 * 1.0) - dVar8 * dVar36));
      pdStack_320._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_318 = (code *)(dVar9 * dVar30 * 1.0 +
                          dVar36 * dVar6 + (dVar33 * dVar8 - *param_2 * dVar7 * 1.0));
      pdStack_310 = (double *)
                    (dVar8 * dVar30 * -1.0 +
                    dVar38 * dVar7 + (dVar33 * dVar9 - *param_2 * dVar6 * -1.0));
    }
    else {
      FUN_1402db8fa(local_328,param_4,param_2);
      local_338 = *param_2;
      dStack_330 = param_2[1];
      dVar25 = param_2[2];
      dVar29 = param_2[3];
    }
    pdVar21 = (double *)local_328;
  }
  else {
    pdVar21 = (double *)&DAT_14c846480;
  }
  pdVar22 = local_228;
  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
    *pdVar22 = *pdVar21;
    pdVar21 = pdVar21 + 1;
    pdVar22 = pdVar22 + 1;
  }
  dVar25 = dVar25 * -1.0;
  dVar29 = dVar29 * 1.0;
  dVar38 = -local_338;
  dVar35 = -dStack_330;
  dVar39 = SUB168(*param_5,0);
  dVar48 = SUB168(*param_5,8);
  dVar44 = dVar48 * dVar38 - dVar39 * dVar35;
  dVar40 = *(double *)param_5[1] * dVar35 - dVar48 * dVar25;
  dVar36 = dVar39 * dVar25 - dVar38 * *(double *)param_5[1];
  dVar40 = dVar40 + dVar40;
  dVar36 = dVar36 + dVar36;
  dVar44 = dVar44 + dVar44;
  local_238 = dVar29 * dVar44 + *(double *)param_5[1] + (dVar36 * dVar38 - dVar40 * dVar35);
  local_248 = (dVar44 * dVar35 - dVar36 * dVar25) + dVar29 * dVar40 + dVar39;
  dStack_240 = local_338 * dVar44 + dVar25 * dVar40 + dVar29 * dVar36 + dVar48;
  if ((char)param_1[3] != '\x01') {
    if (bVar1 == 0xc) {
      local_368 = (undefined1 (*) [16])CONCAT71(local_368._1_7_,cVar16);
      local_370 = local_348;
      local_380 = &local_1c8;
      local_388 = (undefined1 (*) [16])&local_1a8;
      local_390 = pauVar11;
      local_398 = local_340;
      local_378 = param_10;
      cVar16 = FUN_140914616(param_1,param_3,local_228,&local_248);
    }
    else if (bVar1 < 0xb) {
      if (bVar1 == 5) {
LAB_14091450e:
        local_2b0 = (code *)((ulonglong)local_2b0 & 0xffffffffffffff00);
        *(undefined8 *)*pauVar11 = 0x7fefffffffffffff;
        local_2b8 = local_328;
        pdStack_320 = param_2;
        local_328 = (undefined1  [8])&local_2b0;
        local_308._8_8_ = local_340;
        local_308._0_8_ = param_5;
        local_2f8 = pauVar11;
        pdStack_2f0 = param_8;
        local_2e8._8_8_ = param_10;
        local_2e8._0_8_ = param_9;
        local_2d8._8_8_ = local_348;
        local_2d8._0_8_ = param_11;
        local_2c8 = cVar16;
        local_2c0 = &LAB_146d788d6;
        local_318 = param_3;
        pdStack_310 = param_4;
        FUN_146db006e(param_1);
        pdVar21 = (double *)CONCAT71((int7)((ulonglong)&local_2b0 >> 8),local_2b0._0_1_);
        goto LAB_140913e5d;
      }
      if (bVar1 == 6) {
        local_368 = (undefined1 (*) [16])CONCAT71(local_368._1_7_,cVar16);
        local_370 = local_348;
        local_380 = &local_1c8;
        local_388 = (undefined1 (*) [16])&local_1a8;
        local_390 = pauVar11;
        local_398 = local_340;
        local_378 = param_10;
        cVar16 = thunk_FUN_146dd5142(param_1,param_3,local_228,&local_248);
      }
      else {
LAB_14091424a:
        if (-1 < (char)bVar1) {
          if (bVar1 < 0x40) goto LAB_140913fd3;
          plVar20 = (longlong *)param_1[5];
          goto LAB_140914323;
        }
        local_360 = (undefined1 (*) [16])CONCAT71(local_360._1_7_,cVar16);
        local_368 = local_348;
        local_370 = param_11;
        local_380 = &local_1c8;
        local_388 = (undefined1 (*) [16])&local_1a8;
        local_390 = pauVar11;
        local_398 = local_340;
        local_378 = param_10;
        cVar16 = FUN_140915e9c(param_1,param_3,local_228,&local_248);
      }
    }
    else {
      if (bVar1 == 0xf) goto LAB_14091450e;
      plVar20 = param_1;
      if (bVar1 != 0xb) goto LAB_14091424a;
LAB_140914323:
      pdStack_320 = (double *)0x3ff0000000000000;
      local_328 = (undefined1  [8])0x3ff0000000000000;
      local_358 = local_328;
      local_380 = &local_1c8;
      local_388 = (undefined1 (*) [16])&local_1a8;
      local_368 = local_348;
      local_370 = param_11;
      local_390 = pauVar11;
      local_398 = local_340;
      local_318 = (code *)0x3ff0000000000000;
      local_360 = (undefined1 (*) [16])CONCAT71(local_360._1_7_,cVar16);
      local_378 = param_10;
      cVar16 = FUN_1410a899c(plVar20,param_3,local_228,&local_248);
    }
    goto LAB_140913fcb;
  }
  cVar16 = *(char *)((longlong)param_1 + 0x1c);
  if (((param_1 != (longlong *)0x0 && cVar16 == -0x78) && (*(int *)(param_1[0x11] + 0x38) < 1)) ||
     ((param_3 != (code *)0x0 &&
      ((param_3[0x1c] == (code)0x88 && (*(int *)(*(longlong *)(param_3 + 0x88) + 0x38) < 1))))))
  goto LAB_140913fd3;
  local_258 = param_2[6] - param_4[6];
  local_268 = param_2[4] - param_4[4];
  dStack_260 = param_2[5] - param_4[5];
  local_270 = &local_268;
  local_2a8 = &local_248;
  local_2a0 = &param_6;
  local_298 = pauVar11;
  local_290 = &local_1a8;
  local_288 = &local_1c8;
  local_280 = &param_12;
  local_278 = &local_181;
  local_2b0 = param_3;
  switch(cVar16) {
  case -0x80:
    cVar16 = FUN_146d77ee2(&local_2b0,param_1,local_228);
    break;
  case -0x7f:
    cVar16 = FUN_146d77fdc(&local_2b0,param_1,local_228);
    break;
  case -0x7e:
  case -0x7c:
  case -0x7b:
  case -0x7a:
  case -0x79:
switchD_1409138d6_caseD_2:
    cVar16 = FUN_146d77612(&local_2b0,param_1,local_228);
    break;
  case -0x7d:
    cVar16 = FUN_146d780b8(&local_2b0,param_1,local_228);
    break;
  case -0x78:
    pdStack_320._0_4_ = (float)*(double *)(param_3 + 0x10);
    local_328 = (undefined1  [8])param_3;
    pdStack_320._4_4_ = 0;
    local_178 = (float)(double)param_1[2];
    local_174 = 0.0;
    local_170 = FUN_144a12d46;
    goto LAB_1409139ab;
  default:
    switch(cVar16) {
    case '\0':
      pdStack_320._0_4_ = (float)*(double *)(param_3 + 0x10);
      local_328 = (undefined1  [8])param_3;
      pdStack_320._4_4_ = 0;
      local_178 = (float)(double)param_1[2];
      local_170 = (code *)&LAB_144a386ca;
      local_174 = local_178;
      break;
    case '\x01':
      pdStack_320._0_4_ = (float)*(double *)(param_3 + 0x10);
      local_328 = (undefined1  [8])param_3;
      pdStack_320._4_4_ = 0;
      local_170 = FUN_144857b9e;
      local_178 = (float)(double)param_1[2];
      local_174 = 0.0;
      break;
    case '\x02':
    case '\x05':
    case '\x06':
    case '\a':
      goto switchD_1409138d6_caseD_2;
    case '\x03':
      pdStack_320._0_4_ = (float)*(double *)(param_3 + 0x10);
      local_328 = (undefined1  [8])param_3;
      pdStack_320._4_4_ = 0;
      local_178 = (float)(double)param_1[2];
      local_170 = (code *)&LAB_144a386e2;
      local_174 = local_178;
      break;
    case '\x04':
      pdVar21 = (double *)local_328;
      FUN_1447dc19e(param_1 + 6,pdVar21,local_228);
      cVar16 = FUN_146d7869c(param_1[4],pdVar21,&local_2b0);
      goto LAB_140913fcb;
    case '\b':
      pdStack_320._0_4_ = (float)*(double *)(param_3 + 0x10);
      local_328 = (undefined1  [8])param_3;
      pdStack_320._4_4_ = 0;
      local_178 = (float)(double)param_1[2];
      local_174 = 0.0;
      local_170 = FUN_14172546a;
      break;
    default:
      switch(cVar16) {
      case '@':
        cVar16 = FUN_146d783e8(&local_2b0,param_1,local_228);
        break;
      case 'A':
        cVar16 = FUN_146d784d4(&local_2b0,param_1,local_228);
        break;
      default:
        goto switchD_1409138d6_caseD_2;
      case 'C':
        cVar16 = FUN_146d785b0(&local_2b0,param_1,local_228);
        break;
      case 'H':
        pdStack_320._0_4_ = (float)*(double *)(param_3 + 0x10);
        local_328 = (undefined1  [8])param_3;
        pdStack_320._4_4_ = 0;
        local_178 = (float)(double)param_1[2];
        local_174 = 0.0;
        local_170 = FUN_144b038b4;
        goto LAB_1409139ab;
      }
      goto LAB_140913fcb;
    }
LAB_1409139ab:
    fVar27 = (float)local_228[3];
    fVar23 = (float)local_228[2];
    local_318 = FUN_144857b9e;
    pdVar21 = (double *)0x0;
    fVar41 = (float)local_228[0];
    fVar42 = (float)local_228[1];
    local_118._0_4_ = (float)local_208;
    local_118._4_4_ = (float)dStack_200;
    local_118._8_4_ = (float)local_1f8;
    local_118._12_4_ = 0;
    fVar24 = fVar41 * fVar41 + fVar42 * fVar42;
    fVar28 = fVar23 * fVar23 + fVar27 * fVar27;
    auVar31._0_4_ = fVar28 + fVar24;
    auVar31._4_4_ = fVar28 + fVar24;
    auVar31._8_4_ = fVar24 + fVar28;
    auVar31._12_4_ = fVar24 + fVar28;
    auVar34._4_4_ = -(uint)(1e-08 <= auVar31._4_4_);
    auVar34._0_4_ = -(uint)(1e-08 <= auVar31._0_4_);
    auVar34._8_4_ = -(uint)(1e-08 <= auVar31._8_4_);
    auVar34._12_4_ = -(uint)(1e-08 <= auVar31._12_4_);
    auVar26 = sqrtps(auVar31,auVar31);
    auVar26 = divps(_DAT_1499314a0,auVar26);
    auVar46._0_4_ = auVar26._0_4_ * fVar41;
    auVar46._4_4_ = auVar26._4_4_ * fVar42;
    auVar46._8_4_ = auVar26._8_4_ * fVar23;
    auVar46._12_4_ = auVar26._12_4_ * fVar27;
    local_108 = blendvps(_DAT_149932320,auVar46,auVar34);
    local_128._0_4_ = (float)local_268;
    local_128._4_4_ = (float)dStack_260;
    local_128._8_4_ = (float)local_258;
    local_128._12_4_ = 0;
    local_368 = &local_128;
    local_398 = &local_138;
    local_138._4_4_ = (float)dStack_240;
    local_138._0_4_ = (float)local_248;
    local_138._8_4_ = (float)local_238;
    local_138._12_4_ = 0;
    local_388 = (undefined1 (*) [16])&local_13c;
    local_13c = 0.0;
    local_370 = (undefined1 (*) [16])CONCAT71(local_370._1_7_,local_181);
    local_378 = (undefined1 (*) [16])&local_168;
    local_380 = (double *)&local_158;
    local_390 = (undefined1 (*) [16])CONCAT44(local_390._4_4_,(float)(double)param_6);
    local_180 = param_1;
    cVar16 = FUN_1448541f8();
    *(double *)*pauVar11 = (double)local_13c;
    local_1c8 = (double)local_168;
    dStack_1c0 = (double)fStack_164;
    local_1b8 = (double)fStack_160;
    local_1a8 = (double)local_158;
    dStack_1a0 = (double)fStack_154;
    local_198 = (double)fStack_150;
    if (cVar16 == '\0') goto LAB_140913e5d;
    goto LAB_140913b3b;
  }
LAB_140913fcb:
  if (cVar16 == '\0') {
LAB_140913fd3:
    pdVar21 = (double *)0x0;
  }
  else {
LAB_140913b3b:
    pauVar10 = param_11;
    if ((0.0 < *(double *)*pauVar11) || (local_181 == '\x01')) {
      dVar29 = *param_2;
      dVar36 = param_2[1];
      dVar38 = param_2[2];
      dVar25 = param_2[3];
      dVar35 = dStack_1c0 * dVar29 - local_1c8 * dVar36;
      dVar40 = local_1b8 * dVar36 - dStack_1c0 * dVar38;
      dVar48 = local_1c8 * dVar38 - dVar29 * local_1b8;
      dVar40 = dVar40 + dVar40;
      dVar48 = dVar48 + dVar48;
      dVar35 = dVar35 + dVar35;
      dVar44 = dVar35 * dVar25 + local_1b8 + (dVar48 * dVar29 - dVar40 * dVar36);
      dVar36 = (dVar35 * dVar36 - dVar48 * dVar38) + dVar25 * dVar40 + local_1c8;
      dVar25 = (dVar38 * dVar40 - dVar29 * dVar35) + param_2[3] * dVar48 + dStack_1c0;
      dVar29 = dVar44 * dVar44 + dVar36 * dVar36 + dVar25 * dVar25;
      if ((dVar29 != 1.0) || (NAN(dVar29))) {
        if (dVar29 < 9.999999747378752e-05) {
          dVar44 = 0.0;
          dVar36 = 1.0;
          dVar25 = 0.0;
        }
        else {
          dVar29 = 1.0 / SQRT(dVar29);
          dVar44 = dVar44 * dVar29;
          dVar25 = dVar25 * dVar29;
          dVar36 = dVar29 * dVar36;
        }
      }
      *(double *)*param_9 = dVar36;
      *(double *)(*param_9 + 8) = dVar25;
      *(double *)param_9[1] = dVar44;
      dVar35 = *param_2;
      dVar44 = param_2[1];
      dVar40 = param_2[2];
      dVar29 = param_2[3];
      dVar25 = param_2[3];
      dVar48 = dStack_1a0 * dVar35 - local_1a8 * dVar44;
      dVar39 = local_198 * dVar44 - dStack_1a0 * dVar40;
      dVar45 = local_1a8 * dVar40 - dVar35 * local_198;
      dVar39 = dVar39 + dVar39;
      dVar45 = dVar45 + dVar45;
      dVar48 = dVar48 + dVar48;
      dVar38 = param_2[5];
      dVar36 = param_2[6];
      *param_8 = (dVar48 * dVar44 - dVar45 * dVar40) + dVar29 * dVar39 + local_1a8 + param_2[4];
      param_8[1] = (dVar40 * dVar39 - dVar35 * dVar48) + dVar25 * dVar45 + dStack_1a0 + dVar38;
      param_8[2] = dVar48 * dVar29 + local_198 + (dVar45 * dVar35 - dVar39 * dVar44) + dVar36;
      local_398 = param_9;
      pdVar21 = (double *)local_328;
      (**(code **)(*param_1 + 0xc0))(param_1,pdVar21,&local_248,*(undefined4 *)*param_10);
      dVar36 = *param_2;
      dVar38 = param_2[1];
      dVar35 = param_2[2];
      dVar25 = param_2[3];
      dVar29 = param_2[3];
      dVar44 = (double)pdStack_320 * dVar36 - (double)local_328 * dVar38;
      dVar40 = (double)local_318 * dVar38 - (double)pdStack_320 * dVar35;
      dVar48 = (double)local_328 * dVar35 - dVar36 * (double)local_318;
      dVar40 = dVar40 + dVar40;
      dVar48 = dVar48 + dVar48;
      dVar44 = dVar44 + dVar44;
      *(double *)*pauVar10 =
           (dVar44 * dVar38 - dVar48 * dVar35) + dVar25 * dVar40 + (double)local_328;
      *(double *)(*pauVar10 + 8) =
           (dVar35 * dVar40 - dVar36 * dVar44) + dVar29 * dVar48 + (double)pdStack_320;
      *(double *)pauVar10[1] =
           dVar44 * dVar25 + (double)local_318 + (dVar48 * dVar36 - dVar40 * dVar38);
    }
    pdVar21 = (double *)CONCAT71((int7)((ulonglong)pdVar21 >> 8),1);
  }
LAB_140913e5d:
  if ((local_f0 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return (ulonglong)pdVar21 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140914616 FUN_140914616 body=4403 status=ok
// SIG undefined FUN_140914616(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140914616(longlong param_1,longlong param_2,double *param_3,double *param_4,
                  undefined8 *param_5,double *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined4 *param_9,double param_10,undefined1 param_11)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  void *_Dst;
  bool bVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  double *pdVar14;
  ulonglong uVar15;
  double *pdVar16;
  size_t _Size;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  int iVar29;
  bool bVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined8 *puVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_448 [40];
  uint local_420;
  int local_41c;
  uint local_418;
  uint local_414;
  ulonglong local_410;
  uint local_408;
  int local_404;
  ulonglong local_400;
  longlong local_3f8;
  uint local_3ec;
  uint local_3e8;
  uint local_3e4;
  ulonglong local_3e0;
  undefined8 local_3d8;
  ulonglong local_3d0;
  void *local_3c8;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  int local_3b4;
  int local_3b0;
  uint local_3ac;
  uint local_3a8;
  int local_3a4;
  ulonglong local_3a0;
  ulonglong local_398;
  ulonglong local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  double local_2c0 [4];
  double local_2a0;
  double local_298;
  double local_290;
  undefined8 *local_288;
  double local_280;
  undefined8 *local_278;
  undefined8 uStack_270;
  double local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined1 local_228 [16];
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  undefined4 uStack_20c;
  undefined1 local_208 [16];
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  double local_1c8 [4];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  longlong local_168;
  double *local_160;
  double adStack_158 [3];
  undefined1 auStack_140 [8];
  double local_138;
  undefined1 local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_448;
  local_1d8 = param_1 + 0x20;
  local_268 = 1.79769313486232e+308;
  local_230 = 0xffffffff;
  pdVar14 = param_3;
  pdVar16 = local_1c8;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *pdVar16 = *pdVar14;
    pdVar14 = pdVar14 + 1;
    pdVar16 = pdVar16 + 1;
  }
  local_138 = param_10;
  local_130 = param_11;
  local_2e8 = *(double *)(param_2 + 0x30);
  local_2f8 = *(double *)(param_2 + 0x20);
  dStack_2f0 = *(double *)(param_2 + 0x28);
  local_2d0 = *(double *)(param_2 + 0x48);
  local_2e0 = *(double *)(param_2 + 0x38);
  dStack_2d8 = *(double *)(param_2 + 0x40);
  dVar31 = (local_2d0 - local_2e8) * 0.5 + local_2e8;
  dVar33 = (dStack_2d8 - dStack_2f0) * 0.5 + dStack_2f0;
  dVar36 = (local_2e0 - local_2f8) * 0.5 + local_2f8;
  local_358 = local_1c8[0];
  dStack_350 = local_1c8[1];
  local_348 = local_1c8[2];
  dStack_340 = local_1c8[3];
  dVar41 = dVar36 * local_1c8[2] - local_1c8[0] * dVar31;
  dVar42 = dVar33 * local_1c8[0] - local_1c8[1] * dVar36;
  dVar38 = dVar31 * local_1c8[1] - local_1c8[2] * dVar33;
  dVar38 = dVar38 + dVar38;
  dVar41 = dVar41 + dVar41;
  dVar42 = dVar42 + dVar42;
  local_128 = (dVar42 * local_1c8[1] - dVar41 * local_1c8[2]) + local_1c8[3] * dVar38 + dVar36 +
              local_1a8;
  dStack_120 = (local_1c8[2] * dVar38 - local_1c8[0] * dVar42) + local_1c8[3] * dVar41 + dVar33 +
               dStack_1a0;
  local_118 = dVar42 * local_1c8[3] + dVar31 + (dVar41 * local_1c8[0] - dVar38 * local_1c8[1]) +
              local_198;
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_318 = 0x3ff0000000000000;
  uStack_310 = 0x3ff0000000000000;
  local_308 = 0x3ff0000000000000;
  uStack_300 = 0;
  local_168 = param_2;
  local_160 = param_4;
  FUN_1400fd046(&local_2f8,&local_388);
  local_100 = (local_360 - local_378) * 0.5 + local_138;
  dStack_108 = (local_368 - local_380) * 0.5 + local_138;
  local_110 = (local_370 - local_388) * 0.5 + local_138;
  lVar10 = 0;
  do {
    dVar33 = local_160[lVar10];
    bVar30 = ABS(dVar33) <= 1e-08;
    auStack_140[lVar10] = bVar30;
    dVar42 = 0.0;
    if (!bVar30) {
      dVar42 = 1.0 / dVar33;
    }
    adStack_158[lVar10] = dVar42;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 3);
  local_228._0_4_ = (float)local_128;
  local_228._4_4_ = (float)dStack_120;
  local_228._8_4_ = (float)local_118;
  local_228._12_4_ = 0;
  local_208._0_4_ = (float)*local_160;
  local_208._4_4_ = (float)local_160[1];
  local_208._8_4_ = (float)local_160[2];
  local_208._12_4_ = 0;
  auVar37 = divps(_DAT_1499314a0,local_208);
  local_1f8 = -(uint)(ABS(local_208._0_4_) < 1e-08);
  uStack_1f4 = -(uint)(ABS(local_208._4_4_) < 1e-08);
  uStack_1f0 = -(uint)(ABS((float)local_160[2]) < 1e-08);
  uStack_1ec = 0xffffffff;
  local_218 = ~local_1f8 & auVar37._0_4_;
  uStack_214 = ~uStack_1f4 & auVar37._4_4_;
  uStack_210 = ~uStack_1f0 & auVar37._8_4_;
  uStack_20c = 0;
  local_1e8 = ABS((float)local_110);
  fStack_1e4 = ABS((float)dStack_108);
  fStack_1e0 = ABS((float)local_100);
  uStack_1dc = 0;
  local_2e8 = *(double *)(param_2 + 0x30);
  local_2f8 = *(double *)(param_2 + 0x20);
  dStack_2f0 = *(double *)(param_2 + 0x28);
  local_2e0 = *(double *)(param_2 + 0x38);
  dStack_2d8 = *(double *)(param_2 + 0x40);
  local_2d0 = *(double *)(param_2 + 0x48);
  local_358 = *param_3;
  dStack_350 = param_3[1];
  local_348 = param_3[2];
  dStack_340 = param_3[3];
  local_338 = 0;
  uStack_330 = 0;
  local_328 = 0;
  uStack_320 = 0;
  local_318 = 0x3ff0000000000000;
  uStack_310 = 0x3ff0000000000000;
  local_308 = 0x3ff0000000000000;
  uStack_300 = 0;
  FUN_1400fd046(&local_2f8,&local_388);
  dVar38 = (local_2d0 - local_2e8) * 0.5 + local_2e8;
  dVar33 = (dStack_2d8 - dStack_2f0) * 0.5 + dStack_2f0;
  dVar32 = (local_2e0 - local_2f8) * 0.5 + local_2f8;
  dVar31 = *param_3;
  dVar36 = param_3[1];
  dVar39 = param_3[2];
  dVar41 = dVar32 * dVar39 - dVar31 * dVar38;
  dVar42 = dVar33 * dVar31 - dVar36 * dVar32;
  dVar38 = dVar38 * dVar36 - dVar39 * dVar33;
  dVar38 = dVar38 + dVar38;
  dVar41 = dVar41 + dVar41;
  dVar42 = dVar42 + dVar42;
  dVar36 = (dVar42 * dVar36 - dVar41 * dVar39) + param_3[3] * dVar38 + dVar32 + param_3[4];
  dVar31 = (dVar39 * dVar38 - dVar42 * dVar31) + param_3[3] * dVar41 + dVar33 + param_3[5];
  dVar32 = (local_368 - local_380) * 0.5 + param_10;
  param_10 = (local_370 - local_388) * 0.5 + param_10;
  local_2c0[3] = *(double *)(param_1 + 0x138) - param_10;
  local_298 = *(double *)(param_1 + 0x150) + param_10;
  local_290 = *(double *)(param_1 + 0x158) + dVar32;
  local_2a0 = *(double *)(param_1 + 0x140) - dVar32;
  dVar33 = *param_4;
  dVar42 = param_4[1];
  dVar38 = *(double *)(param_1 + 0x50);
  dVar41 = *(double *)(param_1 + 0x58);
  local_280 = (double)(-(ulonglong)(0.0 < dVar42) & 0x3ff0000000000000 |
                      ~-(ulonglong)(0.0 < dVar42) &
                      (ulonglong)((uint)(-(ulonglong)(dVar42 < 0.0) >> 0x20) & 0xbff00000) << 0x20)
              * dVar32;
  dVar39 = (double)(-(ulonglong)(0.0 < dVar33) & 0x3ff0000000000000 |
                   ~-(ulonglong)(0.0 < dVar33) & -(ulonglong)(dVar33 < 0.0) & 0xbff0000000000000) *
           param_10;
  uStack_270 = dVar31 - local_280;
  local_278 = (undefined8 *)(dVar36 - dVar39);
  local_280 = dVar31 + dVar42 * (double)param_5 + local_280;
  local_288 = (undefined8 *)(dVar33 * (double)param_5 + dVar36 + dVar39);
  local_2c0[0] = param_10;
  local_2c0[1] = dVar32;
  cVar5 = FUN_1448596be();
  puVar4 = local_288;
  if (cVar5 != '\0') {
    dVar33 = *(double *)(param_1 + 0xb0);
    dVar42 = *(double *)(param_1 + 0xb8);
    dVar31 = *(double *)(param_1 + 0xe0);
    dVar36 = *(double *)(param_1 + 0xd8);
    uVar11 = (uint)(((double)local_278 / dVar38 - dVar33) / dVar36);
    uVar19 = (uint)((uStack_270 / dVar41 - dVar42) / dVar31);
    iVar27 = *(int *)(param_1 + 0xd0);
    uVar6 = iVar27 - 1;
    uVar8 = 0;
    if (0 < (int)uVar11) {
      uVar8 = uVar11;
    }
    if (iVar27 <= (int)uVar11) {
      uVar8 = uVar6;
    }
    uVar24 = (ulonglong)uVar8;
    iVar7 = *(int *)(param_1 + 0xd4);
    uVar11 = 0;
    if (0 < (int)uVar19) {
      uVar11 = uVar19;
    }
    uVar18 = iVar7 - 1;
    if (iVar7 <= (int)uVar19) {
      uVar11 = uVar18;
    }
    uVar20 = (uint)(((double)local_288 / dVar38 - dVar33) / dVar36);
    uVar22 = (uint)((local_280 / dVar41 - dVar42) / dVar31);
    uVar19 = 0;
    if (0 < (int)uVar20) {
      uVar19 = uVar20;
    }
    if (iVar27 <= (int)uVar20) {
      uVar19 = uVar6;
    }
    uVar20 = 0;
    if (0 < (int)uVar22) {
      uVar20 = uVar22;
    }
    if (iVar7 <= (int)uVar22) {
      uVar20 = uVar18;
    }
    uVar22 = -(uVar19 - uVar8);
    if ((int)uVar22 < 0) {
      uVar22 = uVar19 - uVar8;
    }
    uVar25 = -(uVar20 - uVar11);
    if ((int)uVar25 < 0) {
      uVar25 = uVar20 - uVar11;
    }
    local_288 = param_5;
    local_3f8 = param_1;
    if (uVar25 == 0 && uVar22 == 0) {
      puVar40 = local_278;
      if ((double)puVar4 <= (double)local_278) {
        puVar40 = puVar4;
      }
      dVar39 = uStack_270;
      if (local_280 <= uStack_270) {
        dVar39 = local_280;
      }
      uVar11 = (uint)((((double)puVar40 - param_10) / dVar38 - dVar33) / dVar36);
      uVar19 = (uint)(((dVar39 - dVar32) / dVar41 - dVar42) / dVar31);
      uVar8 = 0;
      if (0 < (int)uVar11) {
        uVar8 = uVar11;
      }
      puVar40 = local_278;
      if ((double)local_278 <= (double)puVar4) {
        puVar40 = puVar4;
      }
      if (iVar27 <= (int)uVar11) {
        uVar8 = uVar6;
      }
      uVar11 = 0;
      if (0 < (int)uVar19) {
        uVar11 = uVar19;
      }
      if (iVar7 <= (int)uVar19) {
        uVar11 = uVar18;
      }
      uVar34 = SUB84(uStack_270,0);
      uVar35 = (int)((ulonglong)uStack_270 >> 0x20);
      if (uStack_270 <= local_280) {
        uVar34 = SUB84(local_280,0);
        uVar35 = (int)((ulonglong)local_280 >> 0x20);
      }
      uVar20 = (uint)((((double)puVar40 + param_10) / dVar38 - dVar33) / dVar36);
      uVar22 = (uint)((((double)CONCAT44(uVar35,uVar34) + dVar32) / dVar41 - dVar42) / dVar31);
      uVar19 = 0;
      if (0 < (int)uVar20) {
        uVar19 = uVar20;
      }
      if (iVar27 <= (int)uVar20) {
        uVar19 = uVar6;
      }
      uVar6 = 0;
      if (0 < (int)uVar22) {
        uVar6 = uVar22;
      }
      if (iVar7 <= (int)uVar22) {
        uVar6 = uVar18;
      }
      if ((int)uVar11 <= (int)uVar6) {
        do {
          uVar18 = uVar8;
          if ((int)uVar8 <= (int)uVar19) {
            do {
              cVar5 = FUN_14091574a(&local_268,(*(ushort *)(local_3f8 + 0x92) - 1) * uVar11 + uVar18
                                    ,&local_288);
              if (cVar5 == '\0') goto LAB_1409154e2;
              uVar18 = uVar18 + 1;
            } while (uVar19 + 1 != uVar18);
          }
          bVar30 = uVar11 != uVar6;
          uVar11 = uVar11 + 1;
        } while (bVar30);
      }
    }
    else {
      local_410 = CONCAT71(local_410._1_7_,(int)uVar8 < (int)uVar19);
      local_414 = CONCAT31(local_414._1_3_,(int)uVar11 < (int)uVar20);
      uVar6 = uVar22 - uVar25;
      local_398 = (ulonglong)uVar6;
      local_420 = CONCAT31(local_420._1_3_,uVar22 >= uVar25 && uVar6 != 0);
      local_400 = CONCAT71(local_400._1_7_,uVar22 < uVar25 || uVar6 == 0);
      uVar3 = *(undefined8 *)(param_1 + 0xd0);
      iVar29 = (int)uVar3;
      iVar7 = (int)((ulonglong)uVar3 >> 0x20) * iVar29;
      iVar27 = iVar7 + 7;
      if (-1 < iVar7) {
        iVar27 = iVar7;
      }
      _Size = (size_t)((iVar27 >> 3) + 1);
      local_3ec = uVar22;
      local_3e8 = uVar25;
      local_3ac = uVar20;
      local_3a8 = uVar19;
      _Dst = (void *)FUN_14001cc68(_Size + (_Size == 0));
      memset(_Dst,0,_Size);
      local_278 = (undefined8 *)0x0;
      uStack_270 = 4.94065645841247e-324;
      FUN_140915a62(&local_278,0);
      *local_278 = CONCAT44(uVar11,uVar8);
      iVar7 = uVar11 * iVar29 + uVar8;
      iVar27 = uVar11 * iVar29 + uVar8 + 7;
      if (-1 < iVar7) {
        iVar27 = iVar7;
      }
      local_278[1] = 0xbff0000000000000;
      pbVar1 = (byte *)((longlong)_Dst + (longlong)(iVar27 >> 3));
      *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar7 & 7));
      local_3e0 = (ulonglong)uVar11;
      local_3d8 = uVar3;
      local_3d0 = uVar24;
      if (0 < (int)uStack_270) {
        local_3b0 = -local_3e8;
        local_3bc = (local_414 & 0xff) * 2 + -1;
        local_3a0 = local_400 & 0xff;
        uVar6 = (uint)(byte)local_400;
        uVar19 = -uVar6;
        local_400 = (ulonglong)uVar19;
        local_3e4 = local_420 & 0xff;
        local_414 = -local_3e4;
        local_3b8 = (uint)(byte)local_410 * 2 + -1;
        local_3b4 = local_3e4 * iVar29 + uVar6;
        local_3a4 = local_414 * iVar29 + uVar19;
        local_390 = (ulonglong)((local_414 & 1) << 3);
        lVar17 = 0;
        lVar10 = local_3f8;
        local_420 = uVar11;
        local_418 = uVar11;
        local_410 = uVar24;
        local_408 = uVar8;
        local_3c8 = _Dst;
        do {
          dVar33 = (double)local_278[lVar17 * 2 + 1];
          uVar8 = local_420;
          uVar11 = local_418;
          uVar24 = local_410;
          uVar6 = local_408;
          if (dVar33 <= (double)local_288) {
            uVar6 = *(uint *)((longlong)local_278 + lVar17 * 0x10 + 4);
            uVar24 = local_278[lVar17 * 2];
            iVar27 = (int)uVar24;
            uVar15 = uVar24 & 0xffffffff;
            lVar21 = 0;
            piVar12 = &local_404;
            bVar30 = true;
            do {
              bVar9 = bVar30;
              iVar7 = *(int *)(lVar10 + 0xd0 + lVar21 * 4);
              iVar29 = (int)uVar15;
              if (iVar29 < iVar7) {
                if (iVar29 < 1) {
                  iVar29 = 0;
                }
              }
              else {
                iVar29 = iVar7 + -1;
              }
              *piVar12 = iVar29;
              lVar21 = 1;
              uVar15 = (ulonglong)uVar6;
              piVar12 = &local_41c;
              bVar30 = false;
            } while (bVar9);
            iVar7 = (int)(uVar24 >> 0x20);
            if (((local_404 == iVar27) && (local_41c == iVar7)) &&
               (cVar5 = FUN_14091574a(&local_268,(*(ushort *)(lVar10 + 0x92) - 1) * iVar7 + iVar27,
                                      &local_288), cVar5 == '\0')) break;
            uVar8 = local_420;
            uVar11 = local_418;
            uVar24 = local_410;
            uVar6 = local_408;
            if (dVar33 < 0.0) {
              auVar37._0_8_ =
                   *(double *)((longlong)local_2c0 + local_390) /
                   ABS(*(double *)(lVar10 + 0x50 + local_390));
              auVar37._8_8_ = 0;
              if (auVar37._0_8_ < 0.0) {
                auVar37 = roundpd(auVar37,auVar37,1);
                dVar33 = auVar37._0_8_;
              }
              else {
                auVar37 = roundpd(auVar37,auVar37,2);
                dVar33 = auVar37._0_8_;
              }
              iVar29 = (int)dVar33;
              if (0 < iVar29) {
                uVar24 = local_400;
                if (((int)local_400 <= iVar27) && (iVar26 = iVar7 + local_3e4, -1 < iVar26)) {
                  iVar13 = (int)local_3a0 + iVar27;
                  uVar6 = (int)local_3d8 * iVar26 + iVar13;
                  iVar23 = iVar29;
                  do {
                    dVar33 = uStack_270;
                    if ((*(int *)(local_3f8 + 0xd0) <= iVar13) ||
                       (*(int *)(local_3f8 + 0xd4) <= iVar26)) break;
                    uVar8 = uVar6 + 7;
                    if (-1 < (int)uVar6) {
                      uVar8 = uVar6;
                    }
                    bVar2 = *(byte *)((longlong)local_3c8 + (longlong)((int)uVar8 >> 3));
                    if ((bVar2 >> (uVar6 & 7) & 1) == 0) {
                      *(byte *)((longlong)local_3c8 + (longlong)((int)uVar8 >> 3)) =
                           (byte)(1 << ((byte)uVar6 & 7)) | bVar2;
                      lVar10 = (longlong)(int)uStack_270;
                      uVar8 = (int)uStack_270 + 1;
                      uStack_270 = (double)CONCAT44(uStack_270._4_4_,uVar8);
                      if (uStack_270._4_4_ < uVar8) {
                        local_3c0 = iVar23;
                        FUN_140915a62(&local_278,(ulonglong)dVar33 & 0xffffffff);
                        uVar24 = local_400;
                        iVar23 = local_3c0;
                      }
                      local_278[lVar10 * 2] = CONCAT44(iVar26,iVar13);
                      local_278[lVar10 * 2 + 1] = 0;
                    }
                    iVar26 = iVar26 + local_3e4;
                    uVar6 = uVar6 + local_3b4;
                    iVar13 = iVar13 + (int)local_3a0;
                    iVar23 = iVar23 + -1;
                  } while (iVar23 != 0);
                }
                _Dst = local_3c8;
                lVar10 = local_3f8;
                iVar7 = iVar7 + local_414;
                iVar27 = iVar27 + (int)uVar24;
                uVar6 = (int)local_3d8 * iVar7 + iVar27;
                do {
                  dVar33 = uStack_270;
                  if ((((iVar27 < 0) || (iVar7 < 0)) || (*(int *)(lVar10 + 0xd0) <= iVar27)) ||
                     (*(int *)(lVar10 + 0xd4) <= iVar7)) break;
                  uVar8 = uVar6 + 7;
                  if (-1 < (int)uVar6) {
                    uVar8 = uVar6;
                  }
                  bVar2 = *(byte *)((longlong)_Dst + (longlong)((int)uVar8 >> 3));
                  if ((bVar2 >> (uVar6 & 7) & 1) == 0) {
                    *(byte *)((longlong)_Dst + (longlong)((int)uVar8 >> 3)) =
                         (byte)(1 << ((byte)uVar6 & 7)) | bVar2;
                    lVar21 = (longlong)(int)uStack_270;
                    uVar8 = (int)uStack_270 + 1;
                    uStack_270 = (double)CONCAT44(uStack_270._4_4_,uVar8);
                    if (uStack_270._4_4_ < uVar8) {
                      FUN_140915a62(&local_278,(ulonglong)dVar33 & 0xffffffff);
                      uVar24 = local_400;
                    }
                    local_278[lVar21 * 2] = CONCAT44(iVar7,iVar27);
                    local_278[lVar21 * 2 + 1] = 0;
                  }
                  iVar7 = iVar7 + local_414;
                  uVar6 = uVar6 + local_3a4;
                  iVar27 = iVar27 + (int)uVar24;
                  iVar29 = iVar29 + -1;
                } while (iVar29 != 0);
              }
              dVar33 = uStack_270;
              uVar6 = local_408;
              if (((uint)local_410 != local_3a8) ||
                 (uVar8 = local_3ac, uVar11 = local_418, uVar24 = (ulonglong)local_3a8,
                 local_420 != local_3ac)) {
                iVar27 = (int)local_398 * 2;
                uVar15 = local_3d0;
                uVar24 = local_410;
                if (local_3b0 <= iVar27) {
                  local_398 = (ulonglong)((int)local_398 - local_3e8);
                  uVar6 = (uint)local_410 + local_3b8;
                  uVar15 = (ulonglong)uVar6;
                  uVar24 = (ulonglong)uVar6;
                }
                uVar28 = local_3e0;
                uVar8 = local_418;
                if (iVar27 <= (int)local_3ec) {
                  local_398 = (ulonglong)((int)local_398 + local_3ec);
                  uVar8 = local_420 + local_3bc;
                  uVar28 = (ulonglong)uVar8;
                  uVar24 = (ulonglong)uVar6;
                }
                uVar18 = uVar8 * (int)local_3d8 + (int)uVar24;
                uVar19 = uVar8 * (int)local_3d8 + (int)uVar24 + 7;
                if (-1 < (int)uVar18) {
                  uVar19 = uVar18;
                }
                bVar2 = *(byte *)((longlong)_Dst + (longlong)((int)uVar19 >> 3));
                uVar11 = uVar8;
                local_3e0 = uVar28;
                local_3d0 = uVar15;
                if ((bVar2 >> (uVar18 & 7) & 1) == 0) {
                  *(byte *)((longlong)_Dst + (longlong)((int)uVar19 >> 3)) =
                       (byte)(1 << ((byte)uVar18 & 7)) | bVar2;
                  lVar21 = (longlong)(int)uStack_270;
                  uVar6 = (int)uStack_270 + 1;
                  uStack_270 = (double)CONCAT44(uStack_270._4_4_,uVar6);
                  if (uStack_270._4_4_ < uVar6) {
                    FUN_140915a62(&local_278,(ulonglong)dVar33 & 0xffffffff);
                  }
                  local_278[lVar21 * 2] = uVar15 & 0xffffffff | uVar28 << 0x20;
                  local_278[lVar21 * 2 + 1] = 0xbff0000000000000;
                  uVar8 = (uint)uVar28;
                  uVar11 = (uint)uVar28;
                  uVar24 = uVar15 & 0xffffffff;
                  uVar6 = (uint)uVar15;
                }
              }
            }
          }
          local_408 = uVar6;
          local_410 = uVar24;
          local_418 = uVar11;
          local_420 = uVar8;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)uStack_270);
      }
      if (local_278 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (_Dst != (void *)0x0) {
        FUN_1400020a8(_Dst);
      }
    }
  }
LAB_1409154e2:
  if (local_268 <= (double)param_5) {
    *param_6 = local_268;
    param_7[2] = local_250;
    *param_7 = local_260;
    param_7[1] = uStack_258;
    param_8[2] = local_238;
    *param_8 = local_248;
    param_8[1] = uStack_240;
    *param_9 = local_230;
  }
  if ((local_f0 ^ (ulonglong)auStack_448) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_268 <= (double)param_5;
}



// FUNCTION 14091574a FUN_14091574a body=791 status=ok
// SIG undefined FUN_14091574a(void)

bool FUN_14091574a(double *param_1,int param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  float fVar16;
  float fVar21;
  float fVar22;
  undefined1 auVar17 [16];
  float fVar23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar35;
  float fVar36;
  undefined1 auVar33 [16];
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  float fVar47;
  undefined1 auStack_118 [32];
  float *local_f8;
  double *local_e8;
  double *local_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = (longlong *)param_1[0x12];
  uVar3 = *(ushort *)((longlong)plVar4 + 0x72);
  iVar13 = param_2 / (int)(uVar3 - 1) + param_2;
  dVar1 = (double)plVar4[0xc];
  lVar5 = *plVar4;
  lVar15 = (longlong)iVar13;
  dVar2 = (double)plVar4[0x10];
  iVar14 = iVar13 / (int)(uint)uVar3;
  auVar26._8_8_ = in_XMM2._8_8_;
  auVar26._0_8_ = (double)*(ushort *)(lVar5 + lVar15 * 2) * dVar2 + dVar1;
  auVar27._4_12_ = auVar26._4_12_;
  auVar27._0_4_ = (float)auVar26._0_8_;
  auVar38._4_12_ = in_XMM4._4_12_;
  auVar38._0_4_ = (float)((double)*(ushort *)(lVar5 + 2 + lVar15 * 2) * dVar2 + dVar1);
  auVar41._4_12_ = in_XMM5._4_12_;
  auVar41._0_4_ =
       (float)((double)*(ushort *)(lVar5 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1);
  auVar24._4_12_ = unaff_XMM8._4_12_;
  auVar24._0_4_ = (float)iVar14;
  fVar31 = (float)(iVar13 % (int)(uint)uVar3);
  fVar46 = (float)((double)*(ushort *)(lVar5 + 2 + ((ulonglong)uVar3 + lVar15) * 2) * dVar2 + dVar1)
  ;
  auVar17 = insertps(ZEXT416((uint)fVar31),auVar24,0x1c);
  auVar42 = insertps(auVar17,auVar27,0x20);
  auVar43 = insertps(ZEXT416((uint)(fVar31 + 1.0)),auVar24,0x1c);
  auVar44 = insertps(auVar43,auVar38,0x20);
  auVar45._0_4_ = auVar24._0_4_ + 1.0;
  auVar45._4_12_ = auVar24._4_12_;
  auVar43 = insertps(ZEXT416((uint)fVar31),auVar45,0x1c);
  auVar33 = insertps(auVar43,auVar41,0x20);
  auVar24 = insertps(ZEXT416((uint)(fVar31 + 1.0)),auVar45,0x1c);
  auVar43._4_4_ = unaff_XMM9_Db;
  auVar43._0_4_ = fVar46;
  auVar43._8_4_ = unaff_XMM9_Dc;
  auVar43._12_4_ = unaff_XMM9_Dd;
  auVar43 = insertps(auVar24,auVar43,0x20);
  fVar31 = auVar41._0_4_;
  if (fVar46 <= auVar41._0_4_) {
    fVar31 = fVar46;
  }
  fVar47 = auVar38._0_4_;
  if (fVar31 <= auVar38._0_4_) {
    fVar47 = fVar31;
  }
  fVar31 = auVar27._0_4_;
  if (fVar47 <= auVar27._0_4_) {
    fVar31 = fVar47;
  }
  if (auVar41._0_4_ <= fVar46) {
    auVar41._0_4_ = fVar46;
  }
  if (auVar38._0_4_ <= auVar41._0_4_) {
    auVar38._0_4_ = auVar41._0_4_;
  }
  if (auVar27._0_4_ <= auVar38._0_4_) {
    auVar27._0_4_ = auVar38._0_4_;
  }
  auVar24 = insertps(auVar24,auVar27,0x20);
  auVar6._4_4_ = (int)((ulonglong)auVar26._0_8_ >> 0x20);
  auVar6._0_4_ = fVar31;
  auVar6._8_4_ = in_XMM2._8_4_;
  auVar6._12_4_ = in_XMM2._12_4_;
  auVar17 = insertps(auVar17,auVar6,0x20);
  fVar31 = *(float *)(plVar4 + 10);
  fVar46 = *(float *)((longlong)plVar4 + 0x54);
  fVar47 = *(float *)(plVar4 + 0xb);
  fVar7 = *(float *)((longlong)plVar4 + 0x5c);
  local_d8 = auVar42._0_4_ * fVar31;
  fStack_d4 = auVar42._4_4_ * fVar46;
  fStack_d0 = auVar42._8_4_ * fVar47;
  fStack_cc = auVar42._12_4_ * fVar7;
  local_c8 = auVar44._0_4_ * fVar31;
  fStack_c4 = auVar44._4_4_ * fVar46;
  fStack_c0 = auVar44._8_4_ * fVar47;
  fStack_bc = auVar44._12_4_ * fVar7;
  local_b8 = auVar33._0_4_ * fVar31;
  fStack_b4 = auVar33._4_4_ * fVar46;
  fStack_b0 = auVar33._8_4_ * fVar47;
  fStack_ac = auVar33._12_4_ * fVar7;
  local_a8 = auVar43._0_4_ * fVar31;
  fStack_a4 = auVar43._4_4_ * fVar46;
  fStack_a0 = auVar43._8_4_ * fVar47;
  fStack_9c = auVar43._12_4_ * fVar7;
  auVar33._0_8_ = CONCAT44(auVar17._4_4_ * fVar46,auVar17._0_4_ * fVar31);
  auVar33._8_4_ = auVar17._8_4_ * fVar47;
  auVar33._12_4_ = auVar17._12_4_ * fVar7;
  auVar17._0_4_ = auVar24._0_4_ * fVar31;
  auVar17._4_4_ = auVar24._4_4_ * fVar46;
  auVar17._8_4_ = auVar24._8_4_ * fVar47;
  auVar17._12_4_ = auVar24._12_4_ * fVar7;
  auVar42._8_4_ = auVar33._8_4_;
  auVar42._0_8_ = auVar33._0_8_;
  auVar42._12_4_ = auVar33._12_4_;
  auVar24 = minps(auVar42,auVar17);
  auVar43 = maxps(auVar33,auVar17);
  fVar31 = *(float *)(param_1 + 8);
  fVar46 = *(float *)((longlong)param_1 + 0x44);
  fVar47 = *(float *)(param_1 + 9);
  fVar7 = *(float *)((longlong)param_1 + 0x4c);
  uVar8 = *(uint *)(param_1 + 0xe);
  uVar9 = *(uint *)((longlong)param_1 + 0x74);
  uVar10 = *(uint *)(param_1 + 0xf);
  uVar11 = *(uint *)((longlong)param_1 + 0x7c);
  fVar32 = auVar24._0_4_ - *(float *)(param_1 + 0x10);
  fVar35 = auVar24._4_4_ - *(float *)((longlong)param_1 + 0x84);
  fVar36 = auVar24._8_4_ - *(float *)(param_1 + 0x11);
  fVar37 = auVar24._12_4_ - *(float *)((longlong)param_1 + 0x8c);
  fVar16 = auVar43._0_4_ + *(float *)(param_1 + 0x10);
  fVar21 = auVar43._4_4_ + *(float *)((longlong)param_1 + 0x84);
  fVar22 = auVar43._8_4_ + *(float *)(param_1 + 0x11);
  fVar23 = auVar43._12_4_ + *(float *)((longlong)param_1 + 0x8c);
  auVar44._0_4_ = -(uint)(fVar16 < fVar31 || fVar31 < fVar32) & uVar8;
  auVar44._4_4_ = -(uint)(fVar21 < fVar46 || fVar46 < fVar35) & uVar9;
  auVar44._8_4_ = -(uint)(fVar22 < fVar47 || fVar47 < fVar36) & uVar10;
  auVar44._12_4_ = -(uint)(fVar23 < fVar7 || fVar7 < fVar37) & uVar11;
  iVar13 = movmskps(iVar14,auVar44);
  local_e8 = param_1;
  local_e0 = param_3;
  if (iVar13 == 0) {
    auVar25._0_4_ = (float)*param_3;
    auVar25._4_4_ = auVar25._0_4_;
    auVar25._8_4_ = auVar25._0_4_;
    auVar25._12_4_ = auVar25._0_4_;
    auVar39._0_8_ =
         CONCAT44(~uVar9 & (uint)((fVar35 - fVar46) * *(float *)((longlong)param_1 + 0x54)),
                  ~uVar8 & (uint)((fVar32 - fVar31) * *(float *)(param_1 + 10)));
    auVar39._8_4_ = ~uVar10 & (uint)((fVar36 - fVar47) * *(float *)(param_1 + 0xb));
    auVar39._12_4_ = ~uVar11 & (uint)((fVar37 - fVar7) * *(float *)((longlong)param_1 + 0x5c));
    auVar34._0_4_ = ~uVar8 & (uint)((fVar16 - fVar31) * *(float *)(param_1 + 10));
    auVar34._4_4_ = ~uVar9 & (uint)((fVar21 - fVar46) * *(float *)((longlong)param_1 + 0x54));
    auVar34._8_4_ = ~uVar10 & (uint)((fVar22 - fVar47) * *(float *)(param_1 + 0xb));
    auVar34._12_4_ = ~uVar11 & (uint)((fVar23 - fVar7) * *(float *)((longlong)param_1 + 0x5c));
    auVar28._0_4_ = uVar8 & (uint)auVar25._0_4_;
    auVar28._4_4_ = uVar9 & (uint)auVar25._0_4_;
    auVar28._8_4_ = uVar10 & (uint)auVar25._0_4_;
    auVar28._12_4_ = uVar11 & (uint)auVar25._0_4_;
    auVar18._8_4_ = auVar39._8_4_;
    auVar18._0_8_ = auVar39._0_8_;
    auVar18._12_4_ = auVar39._12_4_;
    auVar43 = minps(auVar18,auVar28 | auVar34);
    auVar24 = maxps(auVar39,auVar28 | auVar34);
    auVar19._12_4_ = auVar43._12_4_;
    auVar29._0_8_ = auVar43._4_8_;
    auVar29._8_4_ = auVar43._0_4_;
    auVar29._12_4_ = auVar19._12_4_;
    auVar17 = maxps(auVar43,auVar29);
    auVar19._4_4_ = auVar43._0_4_;
    auVar19._0_4_ = auVar43._8_4_;
    auVar19._8_4_ = auVar43._4_4_;
    auVar43 = maxps(auVar17,auVar19);
    auVar17 = maxps(auVar43,ZEXT816(0));
    auVar40._12_4_ = auVar24._12_4_;
    auVar20._0_8_ = auVar24._4_8_;
    auVar20._8_4_ = auVar24._0_4_;
    auVar20._12_4_ = auVar40._12_4_;
    auVar43 = minps(auVar24,auVar20);
    auVar40._4_4_ = auVar24._0_4_;
    auVar40._0_4_ = auVar24._8_4_;
    auVar40._8_4_ = auVar24._4_4_;
    auVar43 = minps(auVar43,auVar40);
    auVar43 = minps(auVar43,auVar25);
    auVar30._4_4_ = -(uint)(auVar43._4_4_ < auVar17._4_4_);
    auVar30._0_4_ = -(uint)(auVar43._0_4_ < auVar17._0_4_);
    auVar30._8_4_ = -(uint)(auVar43._8_4_ < auVar17._8_4_);
    auVar30._12_4_ = -(uint)(auVar43._12_4_ < auVar17._12_4_);
    iVar13 = movmskps(0,auVar30);
    if (iVar13 == 0) {
      local_f8 = &local_a8;
      cVar12 = FUN_140915b6a(&local_e8,param_2 * 2,&local_d8,&local_c8);
      if (cVar12 != '\0') {
        local_f8 = &local_b8;
        FUN_140915b6a(&local_e8,param_2 * 2 | 1,&local_d8,&local_a8);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return 0.0 < *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140915a62 FUN_140915a62 body=262 status=ok
// SIG undefined FUN_140915a62(void)

void FUN_140915a62(longlong param_1,int param_2)

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



// FUNCTION 140915b6a FUN_140915b6a body=817 status=ok
// SIG undefined FUN_140915b6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140915b6a(undefined8 *param_1,int param_2,float *param_3,float *param_4,float *param_5)

{
  double *pdVar1;
  double dVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_148 [32];
  double *local_128;
  float local_120;
  float *local_118;
  float *local_110;
  float *local_108;
  undefined1 local_100;
  undefined *local_f8;
  undefined8 *local_e8;
  undefined8 local_e0;
  code *local_d8;
  double local_d0;
  float local_c8;
  undefined4 local_c4;
  code *local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pdVar1 = (double *)*param_1;
  if ((*pdVar1 != 0.0) || (NAN(*pdVar1))) {
    local_88 = *param_3;
    fStack_84 = param_3[1];
    fStack_80 = param_3[2];
    fStack_7c = param_3[3];
    local_48 = *param_5 - local_88;
    fStack_44 = param_5[1] - fStack_84;
    fStack_40 = param_5[2] - fStack_80;
    fStack_3c = param_5[3] - fStack_7c;
    local_58 = *param_4 - local_88;
    fStack_54 = param_4[1] - fStack_84;
    fStack_50 = param_4[2] - fStack_80;
    fStack_4c = param_4[3] - fStack_7c;
    local_e8 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    fVar5 = (float)pdVar1[0x16];
    fVar7 = (float)pdVar1[0x17];
    fVar10 = (float)pdVar1[0x14];
    fVar11 = (float)pdVar1[0x15];
    fVar6 = fVar10 * fVar10 + fVar11 * fVar11;
    fVar8 = fVar5 * fVar5 + fVar7 * fVar7;
    auVar15._0_4_ = fVar8 + fVar6;
    auVar15._4_4_ = fVar8 + fVar6;
    auVar15._8_4_ = fVar6 + fVar8;
    auVar15._12_4_ = fVar6 + fVar8;
    auVar16 = sqrtps(auVar15,auVar15);
    auVar16 = divps(_DAT_1499314a0,auVar16);
    auVar17._0_4_ = auVar16._0_4_ * fVar10;
    auVar17._4_4_ = auVar16._4_4_ * fVar11;
    auVar17._8_4_ = auVar16._8_4_ * fVar5;
    auVar17._12_4_ = auVar16._12_4_ * fVar7;
    auVar16._4_4_ = -(uint)(1e-08 <= auVar15._4_4_);
    auVar16._0_4_ = -(uint)(1e-08 <= auVar15._0_4_);
    auVar16._8_4_ = -(uint)(1e-08 <= auVar15._8_4_);
    auVar16._12_4_ = -(uint)(1e-08 <= auVar15._12_4_);
    local_78 = blendvps(_DAT_149932320,auVar17,auVar16);
    local_88 = (float)pdVar1[0x18] - local_88;
    fStack_84 = (float)pdVar1[0x19] - fStack_84;
    fStack_80 = (float)pdVar1[0x1a] - fStack_80;
    fStack_7c = 0.0 - fStack_7c;
    local_100 = *(undefined1 *)(pdVar1 + 0x27);
    local_120 = (float)*(double *)param_1[1];
    local_128 = pdVar1 + 0xc;
    local_d0 = pdVar1[0x20];
    local_c8 = (float)*(double *)((longlong)local_d0 + 0x10);
    local_c4 = 0;
    local_c0 = FUN_144857b9e;
    local_e0 = 0;
    local_d8 = FUN_14014b546;
    local_f8 = &DAT_149f52c20;
    local_108 = &local_b8;
    local_110 = &local_a8;
    local_118 = &local_8c;
    cVar3 = FUN_1448541f8();
    bVar4 = true;
    if (cVar3 != '\0') {
      dVar2 = (double)local_8c;
      if (dVar2 < *pdVar1) {
        if (-2 < param_2) {
          if ((param_2 / 2 < *(int *)((longlong)pdVar1[0x12] + 0x28)) &&
             (*(char *)(*(longlong *)((longlong)pdVar1[0x12] + 0x20) + (longlong)(param_2 / 2)) ==
              -1)) goto LAB_140915d17;
        }
        pdVar1[4] = (double)local_b8;
        pdVar1[5] = (double)fStack_b4;
        pdVar1[6] = (double)fStack_b0;
        fVar5 = param_3[1];
        fVar6 = param_3[2];
        pdVar1[1] = (double)(*param_3 + local_a8);
        pdVar1[2] = (double)(fVar5 + fStack_a4);
        pdVar1[3] = (double)(fVar6 + fStack_a0);
        *pdVar1 = dVar2;
        *(int *)(pdVar1 + 7) = param_2;
        bVar4 = 0.0 < local_8c;
        if (!bVar4) {
          fVar5 = *param_4 - *param_3;
          fVar6 = param_4[1] - param_3[1];
          fVar7 = param_4[2] - param_3[2];
          fVar8 = param_4[3] - param_3[3];
          fVar10 = *param_5 - *param_3;
          fVar12 = param_5[1] - param_3[1];
          fVar13 = param_5[2] - param_3[2];
          fVar14 = param_5[3] - param_3[3];
          fVar11 = fVar12 * fVar5 - fVar6 * fVar10;
          fVar6 = fVar13 * fVar6 - fVar7 * fVar12;
          fVar10 = fVar10 * fVar7 - fVar5 * fVar13;
          fVar12 = fVar14 * fVar8 - fVar8 * fVar14;
          fVar12 = fVar12 * fVar12;
          fVar5 = fVar10 * fVar10 + fVar6 * fVar6;
          fVar7 = fVar6 * fVar6 + fVar10 * fVar10;
          fVar8 = fVar12 + fVar11 * fVar11;
          fVar12 = fVar11 * fVar11 + fVar12;
          auVar9._0_4_ = fVar8 + fVar5;
          auVar9._4_4_ = fVar12 + fVar7;
          auVar9._8_4_ = fVar5 + fVar8;
          auVar9._12_4_ = fVar7 + fVar12;
          auVar16 = sqrtps(auVar9,auVar9);
          auVar16 = divps(_DAT_149e1ef10,auVar16);
          pdVar1[4] = (double)(auVar16._0_4_ * fVar6);
          pdVar1[5] = (double)(auVar16._4_4_ * fVar10);
          pdVar1[6] = (double)(auVar16._8_4_ * fVar11);
          dVar2 = 0.0;
        }
        *(double *)param_1[1] = dVar2;
      }
    }
  }
  else {
    bVar4 = false;
  }
LAB_140915d17:
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140915e9c FUN_140915e9c body=830 status=ok
// SIG undefined FUN_140915e9c(void)

undefined8
FUN_140915e9c(longlong param_1,undefined8 param_2,undefined8 *param_3,double *param_4,double param_5
             ,double *param_6,double *param_7,double *param_8,undefined8 param_9,undefined8 param_10
             ,undefined8 param_11,undefined1 param_12)

{
  double dVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_1a8 [32];
  double local_188;
  double *local_180;
  double *local_178;
  double *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150;
  undefined8 *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
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
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  dVar7 = param_4[2] * *(double *)(param_1 + 0x48);
  dVar6 = param_4[1] * *(double *)(param_1 + 0x40);
  dVar5 = *param_4 * *(double *)(param_1 + 0x38);
  dVar4 = SQRT(dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6);
  if (2.2250738585072014e-308 < dVar4) {
    dVar1 = 1.0 / dVar4;
    local_188 = dVar4 * param_5;
    local_90 = dVar7 * dVar1;
    local_98 = dVar6 * dVar1;
    local_a0 = dVar5 * dVar1;
    local_138 = *param_3;
    uStack_130 = param_3[1];
    local_108 = *(double *)(param_1 + 0x48) * (double)param_3[6];
    dStack_110 = *(double *)(param_1 + 0x40) * (double)param_3[5];
    local_128 = param_3[2];
    uStack_120 = param_3[3];
    local_118 = *(double *)(param_1 + 0x38) * (double)param_3[4];
    uStack_100 = 0;
    local_f8 = 0x3ff0000000000000;
    uStack_f0 = 0x3ff0000000000000;
    local_e8 = 0x3ff0000000000000;
    uStack_e0 = 0;
    local_78 = *(undefined8 *)(param_1 + 0x30);
    local_148 = &local_88;
    local_88 = *(undefined8 *)(param_1 + 0x20);
    uStack_80 = *(undefined8 *)(param_1 + 0x28);
    local_150 = param_12;
    local_158 = param_11;
    local_160 = param_10;
    local_168 = param_9;
    local_170 = &local_d0;
    local_178 = &local_b8;
    local_180 = &local_d8;
    cVar2 = FUN_1410a899c(*(undefined8 *)(param_1 + 0x88));
    if ((cVar2 != '\0') && (dVar1 * local_d8 < param_5)) {
      *param_6 = dVar1 * local_d8;
      dVar6 = *(double *)(param_1 + 0x30);
      dVar5 = *(double *)(param_1 + 0x28);
      *param_7 = *(double *)(param_1 + 0x20) * local_b8;
      param_7[1] = dVar5 * local_b0;
      param_7[2] = dVar6 * local_a8;
      local_c0 = *(double *)(param_1 + 0x48) * local_c0;
      local_c8 = *(double *)(param_1 + 0x40) * local_c8;
      local_d0 = *(double *)(param_1 + 0x38) * local_d0;
      dVar6 = local_c0 * local_c0 + local_d0 * local_d0 + local_c8 * local_c8;
      if (((dVar6 != 1.0) || (dVar5 = local_c0, dVar4 = local_c8, dVar7 = local_d0, NAN(dVar6))) &&
         (dVar5 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar6)) {
        dVar6 = 1.0 / SQRT(dVar6);
        dVar5 = local_c0 * dVar6;
        dVar4 = local_c8 * dVar6;
        dVar7 = local_d0 * dVar6;
      }
      *param_8 = dVar7;
      param_8[1] = dVar4;
      param_8[2] = dVar5;
      uVar3 = 1;
      goto LAB_140916080;
    }
  }
  uVar3 = 0;
LAB_140916080:
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1409161dc FUN_1409161dc body=318 status=ok
// SIG undefined FUN_1409161dc(void)

void FUN_1409161dc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  float local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x3258);
    if (lVar2 != 0 && *(longlong *)(param_1 + 0x30) != 0) {
      local_78 = 1.0;
      if (*(longlong *)(lVar1 + 0x448) != 0) {
        plVar3 = *(longlong **)(lVar1 + 0x2500);
        fVar4 = (float)(**(code **)(*plVar3 + 0x6e8))(plVar3);
        fVar4 = tanf(fVar4 * 0.5 * 0.017453292);
        fVar5 = tanf(*(float *)(plVar3 + 0x75) * 0.5 * 0.017453292);
        fVar4 = (float)(-(uint)(0.0 < fVar5) & (uint)(fVar4 / fVar5));
        if (1e-08 <= fVar4) {
          local_78 = fVar4;
        }
      }
      local_90 = *(undefined4 *)(param_1 + 0x28);
      uStack_8c = *(undefined4 *)(param_1 + 0x2c);
      uStack_88 = *(undefined4 *)(param_1 + 0x30);
      uStack_84 = *(undefined4 *)(param_1 + 0x34);
      local_80 = lVar2;
      FUN_14091631c(param_1);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14091631c FUN_14091631c body=4802 status=ok
// SIG undefined FUN_14091631c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14091631c(longlong param_1,longlong *param_2)

{
  float fVar1;
  double dVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  byte bVar13;
  uint uVar14;
  byte bVar15;
  bool bVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auStack_508 [32];
  undefined4 local_4e8;
  code **local_4e0;
  double *local_4d8;
  undefined8 local_4d0;
  wchar_t *local_4c8;
  code *local_4c0;
  undefined1 *local_4b8;
  code **local_4b0;
  code *local_4a8;
  code *local_4a0;
  byte local_489;
  undefined1 local_488 [16];
  double local_478;
  undefined8 uStack_470;
  undefined1 local_468 [16];
  double local_458;
  double dStack_450;
  double local_448;
  double local_438;
  double dStack_430;
  double local_428;
  double local_420;
  double local_418;
  double dStack_410;
  code *local_408 [56];
  longlong local_248;
  undefined8 local_240;
  double local_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  double local_218;
  double local_210;
  double local_208;
  undefined8 local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  char local_188;
  undefined8 local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_508;
  lVar7 = (**(code **)(*(longlong *)param_2[1] + 0x30))();
  uVar10 = 0;
  if ((*(int *)(lVar7 + 0xc0) == 0) || (*(int *)(lVar7 + 0x80) < 1)) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    if (**(int **)(lVar7 + 0x78) != 0x7fffffff) {
      uVar10 = *(undefined8 *)(*(int **)(lVar7 + 0x78) + 1);
      iVar6 = (int)((ulonglong)uVar10 >> 0x20);
    }
  }
  (**(code **)(*(longlong *)*param_2 + 0x718))((longlong *)*param_2,&local_420,&local_438);
  lVar7 = param_2[2];
  fVar34 = *(float *)(lVar7 + 0x38);
  fVar1 = *(float *)(lVar7 + 0x3c);
  fVar17 = fVar34 / *(float *)(param_2 + 3);
  if (*(float *)(lVar7 + 0x34) <= fVar17) {
    fVar17 = *(float *)(lVar7 + 0x34);
  }
  dVar18 = (double)FUN_144719204(local_438,0);
  dVar19 = (double)FUN_144719204(dStack_430,0);
  dVar20 = sin(dVar18 * 0.017453292519943295);
  dVar21 = cos(dVar18 * 0.017453292519943295);
  dVar22 = sin(dVar19 * 0.017453292519943295);
  dVar23 = cos(dVar19 * 0.017453292519943295);
  dVar18 = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  dVar19 = DAT_14c8464e0;
  local_478 = (double)((fVar1 - fVar34) + fVar17);
  local_448 = dVar20 * local_478;
  dStack_450 = dVar22 * dVar21 * local_478;
  local_478 = dVar23 * dVar21 * local_478;
  local_488._8_4_ = (int)extraout_XMM0_Qb_00;
  local_488._0_8_ = dStack_450;
  local_488._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  local_468._8_4_ = (int)extraout_XMM0_Qb;
  local_468._0_8_ = local_448;
  local_468._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
  local_1a8 = DAT_14c8464f0;
  local_1b8 = DAT_14c8464e0;
  dStack_1b0 = DAT_14c8464e8;
  local_188 = '\0';
  local_180 = 0;
  cVar4 = *(char *)(param_1 + 0x4c);
  if ((*(char *)(param_1 + 0x84) != '\0') ||
     (*(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x85) ^ 1, *(byte *)(param_1 + 0x85) == 1)) {
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  uStack_470 = extraout_XMM0_Qb_01;
  local_458 = local_478;
  dVar20 = sin(local_438 * 0.01745329238474369);
  dVar21 = sin(dStack_430 * 0.01745329238474369);
  dVar22 = sin(local_428 * 0.01745329238474369);
  sin(0.0);
  dVar23 = cos(local_438 * 0.01745329238474369);
  dVar24 = cos(dStack_430 * 0.01745329238474369);
  dVar25 = cos(local_428 * 0.01745329238474369);
  cos(0.0);
  local_238 = dVar23 * dVar24;
  local_230 = dVar21 * dVar23;
  local_220 = 0;
  local_218 = dVar20 * dVar22 * dVar24 - dVar21 * dVar25;
  local_210 = dVar20 * dVar22 * dVar21 + dVar24 * dVar25;
  local_208 = -dVar22 * dVar23;
  local_200 = 0;
  local_1f8 = -(dVar20 * dVar25 * dVar24 + dVar21 * dVar22);
  local_1f0 = dVar24 * dVar22 - dVar21 * dVar20 * dVar25;
  local_1e8 = dVar23 * dVar25;
  local_1e0 = 0;
  local_1d8 = local_420;
  local_1d0 = local_418;
  dStack_1c8 = dStack_410;
  local_1c0 = 0x3ff0000000000000;
  local_228 = dVar20;
  if ((((iVar6 == 0) || (uVar14 = (uint)uVar10, (int)uVar14 < 0)) || (DAT_14c9647dc <= (int)uVar14))
     || (((plVar8 = (longlong *)
                    ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
          plVar8 == (longlong *)0x0 || ((int)plVar8[2] != iVar6)) ||
         ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) {
LAB_140916a84:
    plVar8 = *(longlong **)(param_1 + 0x50);
    if ((plVar8 != (longlong *)0x0) && ((*(uint *)(plVar8 + 1) >> 0x1e & 1) == 0)) {
      if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
        uVar10 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
        iVar6 = FUN_14486116a(uVar10,*(undefined8 *)(*param_2 + 0x3d0));
        if (iVar6 == 2) {
          *(undefined1 *)(param_1 + 100) = 1;
        }
      }
      goto LAB_14091681f;
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = (longlong *)*plVar8;
    if (plVar8 == (longlong *)0x0) goto LAB_140916a84;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar8);
    }
    *(longlong **)(param_1 + 0x50) = plVar8;
    if (DAT_14cb223d8 == 0) {
      local_4b0 = local_408;
      local_408[0] = FUN_1449e2820;
      local_4a0 = FUN_14081d0ea;
      local_4a8 = FUN_1427b09ee;
      local_4b8 = &LAB_147f29feb;
      local_4c0 = FUN_1464384fe;
      local_4c8 = L"Engine";
      local_4d0 = 0;
      local_4d8 = (double *)CONCAT44(local_4d8._4_4_,0x10004001);
      local_4e0 = (code **)CONCAT44(local_4e0._4_4_,8);
      local_4e8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    lVar7 = (**(code **)(*plVar8 + 0x288))(plVar8,DAT_14cb223d8);
    if (lVar7 == 0) {
LAB_14091680e:
      lVar9 = 0;
    }
    else {
      if (DAT_14cb223d8 == 0) {
        local_4b0 = local_408;
        local_408[0] = FUN_1449e2820;
        local_4a0 = FUN_14081d0ea;
        local_4a8 = FUN_1427b09ee;
        local_4b8 = &LAB_147f29feb;
        local_4c0 = FUN_1464384fe;
        local_4c8 = L"Engine";
        local_4d0 = 0;
        local_4d8 = (double *)CONCAT44(local_4d8._4_4_,0x10004001);
        local_4e0 = (code **)CONCAT44(local_4e0._4_4_,8);
        local_4e8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      lVar9 = FUN_144718840(lVar7,DAT_14cb223d8);
      if (lVar7 == lVar9 || lVar9 == 0) goto LAB_14091680e;
    }
    *(longlong *)(param_1 + 0x58) = lVar9;
    *(undefined1 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
LAB_14091681f:
    if ((*(char *)(param_1 + 0x4c) == '\x01') && (cVar4 == '\0')) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x4d) = 1;
    }
    uVar10 = FUN_14069ce7c();
    plVar11 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar10);
    if (plVar11 != (longlong *)0x0) {
      uVar10 = FUN_14069ce7c();
      plVar12 = (longlong *)FUN_144718840(plVar11,uVar10);
      if (plVar12 != (longlong *)0x0 && plVar11 != plVar12) {
        local_248 = 0;
        local_240 = 0x800000000;
        uVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
        FUN_1447c2ee4(uVar10,local_408);
        local_4e8 = (undefined4)param_2[3];
        local_4d8 = &local_1b8;
        local_4e0 = local_408;
        FUN_1441df72e(param_1,&local_420,&local_458,*param_2);
        if (local_188 == '\x01') {
          local_448 = local_190;
          local_458 = local_1a0;
          dStack_450 = dStack_198;
          local_468._8_8_ = 0;
          local_468._0_8_ = local_190;
          local_478 = local_1a0;
          uStack_470 = 0;
          local_488._8_8_ = 0;
          local_488._0_8_ = dStack_198;
        }
        FUN_14007522e(&local_178,&local_238);
        dVar19 = local_1a8 * local_138 + dStack_1b0 * local_158 + local_1b8 * local_178 + local_118;
        dVar2 = local_1a8 * dStack_130 + dStack_1b0 * dStack_150 + local_1b8 * dStack_170 +
                dStack_110;
        dVar18 = local_1b8 * local_168 + dStack_1b0 * local_148 + local_1a8 * local_128 + local_108;
        FUN_14007522e(&local_178,&local_238);
        dVar19 = dVar19 - ((double)local_468._0_8_ * local_138 +
                           (double)local_488._0_8_ * local_158 + local_478 * local_178 + local_118);
        dVar2 = dVar2 - ((double)local_468._0_8_ * dStack_130 +
                         (double)local_488._0_8_ * dStack_150 + local_478 * dStack_170 + dStack_110)
        ;
        local_128 = local_128 * (double)local_468._0_8_;
        local_148 = local_148 * (double)local_488._0_8_;
        local_168 = local_168 * local_478;
        if (local_248 != 0) {
          FUN_1400020a8();
        }
        dVar18 = dVar18 - (local_168 + local_148 + local_128 + local_108);
      }
    }
  }
  if (*(longlong **)(param_1 + 0x40) == plVar8) {
    if ((*(float *)(param_1 + 0x80) != local_180._4_4_) ||
       (NAN(*(float *)(param_1 + 0x80)) || NAN(local_180._4_4_))) goto LAB_140916afb;
  }
  else {
LAB_140916afb:
    *(double *)(param_1 + 0x68) = dVar19;
    *(double *)(param_1 + 0x70) = dVar2;
    *(double *)(param_1 + 0x78) = dVar18;
    if ((plVar8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(plVar8);
    }
    *(longlong **)(param_1 + 0x40) = plVar8;
    *(float *)(param_1 + 0x80) = local_180._4_4_;
  }
  dVar20 = DAT_14c8464f0;
  dVar21 = DAT_14c8464e8;
  lVar7 = *(longlong *)(*param_2 + 0xf40);
  if ((lVar7 == 0) || (lVar7 = *(longlong *)(lVar7 + 0x11e8), lVar7 == 0)) {
    bVar15 = 0;
  }
  else {
    bVar15 = (*(byte *)(lVar7 + 0x36a8) & 4) >> 2;
  }
  plVar8 = *(longlong **)(*param_2 + 0x3d0);
  if (plVar8 == (longlong *)0x0) {
LAB_140916c04:
    bVar16 = false;
  }
  else {
    if (DAT_14cb223d8 == 0) {
      local_4b0 = local_408;
      local_408[0] = FUN_1449e2820;
      local_4a0 = FUN_14081d0ea;
      local_4a8 = FUN_1427b09ee;
      local_4b8 = &LAB_147f29feb;
      local_4c0 = FUN_1464384fe;
      local_4c8 = L"Engine";
      local_4d0 = 0;
      local_4d8 = (double *)CONCAT44(local_4d8._4_4_,0x10004001);
      local_4e0 = (code **)CONCAT44(local_4e0._4_4_,8);
      local_4e8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,DAT_14cb223d8);
    if (plVar8 == (longlong *)0x0) goto LAB_140916c04;
    if (DAT_14cb223d8 == 0) {
      local_4b0 = local_408;
      local_408[0] = FUN_1449e2820;
      local_4a0 = FUN_14081d0ea;
      local_4a8 = FUN_1427b09ee;
      local_4b8 = &LAB_147f29feb;
      local_4c0 = FUN_1464384fe;
      local_4c8 = L"Engine";
      local_4d0 = 0;
      local_4d8 = (double *)CONCAT44(local_4d8._4_4_,0x10004001);
      local_4e0 = (code **)CONCAT44(local_4e0._4_4_,8);
      local_4e8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar11 = (longlong *)FUN_144718840(plVar8,DAT_14cb223d8);
    bVar16 = false;
    if ((plVar8 != plVar11) && (bVar16 = false, plVar11 != (longlong *)0x0)) {
      lVar7 = (**(code **)(*plVar11 + 0x10))(plVar11);
      if (lVar7 == 0) goto LAB_140916c04;
      uVar10 = (**(code **)(*(longlong *)param_2[1] + 0x30))();
      uVar10 = FUN_1408a1fe2(uVar10);
      iVar6 = FUN_14486116a(lVar7,uVar10);
      bVar16 = iVar6 == 2;
    }
  }
  uVar10 = (**(code **)(*(longlong *)param_2[1] + 0x30))();
  lVar7 = FUN_140acd3d8(uVar10);
  if (lVar7 == 0) {
    bVar13 = 1;
  }
  else {
    uVar10 = (**(code **)(*(longlong *)param_2[1] + 0x30))();
    plVar8 = (longlong *)FUN_140acd3d8(uVar10);
    lVar7 = (**(code **)(*plVar8 + 0x10))(plVar8);
    bVar13 = *(byte *)(lVar7 + 0x18c) ^ 1;
  }
  uVar10 = (**(code **)(*(longlong *)param_2[1] + 0x30))();
  bVar3 = FUN_140b038fa(uVar10);
  local_489 = *(byte *)(param_1 + 0x4d);
  uVar10 = (**(code **)(*(longlong *)param_2[1] + 0x30))();
  lVar7 = FUN_1408a1fe2(uVar10);
  if (lVar7 == 0) {
LAB_140916ce5:
    bVar5 = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_4b0 = local_408;
      local_408[0] = FUN_141864c34;
      local_4a0 = FUN_14081d0ea;
      local_4a8 = (code *)&LAB_1464cee30;
      local_4b8 = &LAB_148bfac22;
      local_4c0 = (code *)&LAB_140f21842;
      local_4c8 = L"Game";
      local_4d0 = 0;
      local_4d8 = (double *)CONCAT44(local_4d8._4_4_,0x10000004);
      local_4e0 = (code **)CONCAT44(local_4e0._4_4_,0x10);
      local_4e8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) ||
        (plVar8 = *(longlong **)(lVar7 + 0x32b8), plVar8 == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*plVar8 + 0x480))(plVar8,DAT_14c9abbf0), cVar4 == '\0'))
    goto LAB_140916ce5;
    bVar5 = (**(code **)(*(longlong *)(lVar7 + 0x3c60) + 0x38))(lVar7 + 0x3c60);
    bVar5 = bVar5 ^ 1;
  }
  lVar7 = FUN_14030d330(*param_2);
  if (((lVar7 == 0) ||
      ((*(char *)(param_1 + 0x84) == '\0' && (*(char *)(param_1 + 0x85) != '\x01')))) ||
     (*(char *)(lVar7 + 0x367) != '\x01')) goto LAB_1409170d0;
  if ((bVar16 & bVar3) == 0 && (local_489 & 1) == 0) {
    if ((bVar15 != 0 || (bVar5 != 0 || bVar13 != 0)) || *(char *)(param_1 + 100) != '\x01')
    goto LAB_1409170d0;
  }
  else if (bVar15 != 0 || (bVar13 != 0 || bVar5 != 0)) goto LAB_1409170d0;
  if (*(char *)(param_1 + 0x171) != '\0') goto LAB_1409170d0;
  fVar34 = (float)SQRT(((double)local_468._0_8_ - dStack_410) *
                       ((double)local_468._0_8_ - dStack_410) +
                       (local_478 - local_420) * (local_478 - local_420) +
                       ((double)local_488._0_8_ - local_418) * ((double)local_488._0_8_ - local_418)
                      );
  dVar23 = sin(*(double *)(*param_2 + 0x610) * 0.017453292519943295);
  dVar22 = (double)fVar34;
  dVar24 = sin(*(double *)(*param_2 + 0x618) * 0.017453292519943295);
  plVar8 = *(longlong **)(*param_2 + 0x3d0);
  if (plVar8 == (longlong *)0x0) {
LAB_140916e5f:
    lVar7 = 0x18;
  }
  else {
    if (DAT_14cb6fd70 == 0) {
      local_4b0 = local_408;
      local_408[0] = FUN_1449e2820;
      local_4a0 = FUN_14081d0ea;
      local_4a8 = FUN_1427b09ee;
      local_4b8 = &LAB_1487a9cc9;
      local_4c0 = FUN_1465433f8;
      local_4c8 = L"Engine";
      local_4d0 = 0;
      local_4d8 = (double *)CONCAT44(local_4d8._4_4_,0x10004001);
      local_4e0 = (code **)CONCAT44(local_4e0._4_4_,8);
      local_4e8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
    }
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,DAT_14cb6fd70);
    if (plVar8 == (longlong *)0x0) goto LAB_140916e5f;
    if (DAT_14cb6fd70 == 0) {
      local_4b0 = local_408;
      local_408[0] = FUN_1449e2820;
      local_4a0 = FUN_14081d0ea;
      local_4a8 = FUN_1427b09ee;
      local_4b8 = &LAB_1487a9cc9;
      local_4c0 = FUN_1465433f8;
      local_4c8 = L"Engine";
      local_4d0 = 0;
      local_4d8 = (double *)CONCAT44(local_4d8._4_4_,0x10004001);
      local_4e0 = (code **)CONCAT44(local_4e0._4_4_,8);
      local_4e8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
    }
    plVar11 = (longlong *)FUN_144718840(plVar8,DAT_14cb6fd70);
    if (plVar11 == (longlong *)0x0 || plVar8 == plVar11) goto LAB_140916e5f;
    cVar4 = (**(code **)(*plVar11 + 0x50))(plVar11);
    lVar7 = 0x1c;
    if (cVar4 == '\0') goto LAB_140916e5f;
  }
  dVar26 = (double)(1.0 - (float)local_180 * *(float *)(param_2[2] + 0x20));
  dVar21 = (double)(*(float *)(param_2[2] + lVar7) * (float)local_180);
  dVar20 = (dVar18 - *(double *)(param_1 + 0x78)) * dVar21;
  dVar21 = (dVar2 - *(double *)(param_1 + 0x70)) * dVar21;
  dVar27 = (double)(fVar34 * 0.043619387);
  dVar25 = (double)(fVar34 * -0.043619387);
  if (dVar27 <= dVar21) {
    dVar21 = dVar27;
  }
  if (dVar21 <= dVar25) {
    dVar21 = dVar25;
  }
  dVar21 = dVar21 + dVar24 * dVar22 * dVar26;
  if (dVar27 <= dVar20) {
    dVar20 = dVar27;
  }
  if (dVar20 <= dVar25) {
    dVar20 = dVar25;
  }
  dVar20 = dVar20 + dVar23 * dVar22 * dVar26;
  if (ABS(fVar34) <= 0.0001) {
    lVar7 = *param_2;
    dVar22 = *(double *)(lVar7 + 0x610);
    dVar23 = *(double *)(lVar7 + 0x618);
  }
  else {
    dVar24 = dVar21 / dVar22;
    dVar23 = dVar24;
    if (1.0 <= dVar24) {
      dVar23 = 1.0;
    }
    dVar23 = asin((double)(-(ulonglong)(dVar24 < -1.0) & 0xbff0000000000000 |
                          ~-(ulonglong)(dVar24 < -1.0) & (ulonglong)dVar23));
    dVar23 = dVar23 * 57.29577951308232;
    dVar22 = dVar20 / dVar22;
    dVar24 = dVar22;
    if (1.0 <= dVar22) {
      dVar24 = 1.0;
    }
    dVar22 = asin((double)(-(ulonglong)(dVar22 < -1.0) & 0xbff0000000000000 |
                          ~-(ulonglong)(dVar22 < -1.0) & (ulonglong)dVar24));
    dVar22 = dVar22 * 57.29577951308232;
    lVar7 = *param_2;
  }
  fVar34 = (float)FUN_14364bb0c(lVar7);
  dVar25 = 1.0;
  dVar24 = 1.0;
  if (0.0001 < ABS(fVar34)) {
    fVar34 = (float)FUN_14364bb0c(*param_2);
    dVar24 = (double)fVar34;
  }
  fVar34 = (float)FUN_14364ba6c();
  if (0.0001 < ABS(fVar34)) {
    fVar34 = (float)FUN_14364ba6c();
    dVar25 = (double)fVar34;
  }
  auVar28._8_8_ = dVar23 / dVar24;
  auVar28._0_8_ = dVar22 / dVar25;
  auVar29 = divpd(auVar28,_DAT_1499387d0);
  auVar29 = roundpd(auVar29,auVar29,3);
  dVar22 = dVar22 / dVar25 - auVar29._0_8_ * (double)DAT_1499387d0;
  dVar23 = dVar23 / dVar24 - auVar29._8_8_ * DAT_1499387d0._8_8_;
  auVar32._0_8_ = (double)DAT_1499387d0 + dVar22;
  auVar32._8_8_ = DAT_1499387d0._8_8_ + dVar23;
  auVar30._8_8_ = -(ulonglong)(0.0 <= dVar23);
  auVar30._0_8_ = -(ulonglong)(0.0 <= dVar22);
  auVar33._8_4_ = SUB84(dVar23,0);
  auVar33._0_8_ = dVar22;
  auVar33._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  auVar33 = blendvpd(auVar32,auVar33,auVar30);
  dVar22 = auVar33._8_8_ + -360.0;
  auVar31._8_8_ = -(ulonglong)(180.0 < auVar33._8_8_);
  auVar31._0_8_ = -(ulonglong)(180.0 < auVar33._0_8_);
  auVar29._8_4_ = SUB84(dVar22,0);
  auVar29._0_8_ = auVar33._0_8_ + -360.0;
  auVar29._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  auVar29 = blendvpd(auVar33,auVar29,auVar31);
  *(undefined8 *)(*param_2 + 0x618) = 0;
  *(undefined8 *)(*param_2 + 0x610) = 0;
  (**(code **)(*(longlong *)*param_2 + 0xc90))((longlong *)*param_2,(float)auVar29._8_8_);
  (**(code **)(*(longlong *)*param_2 + 0xc88))((longlong *)*param_2,(float)auVar29._0_8_);
LAB_1409170d0:
  *(undefined1 *)(param_1 + 0x171) = 0;
  *(double *)(param_1 + 0x68) = dVar19;
  *(double *)(param_1 + 0x70) = dVar2 - dVar21;
  *(double *)(param_1 + 0x78) = dVar18 - dVar20;
  if ((local_f0 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409175ee FUN_1409175ee body=101 status=ok
// SIG undefined FUN_1409175ee(void)

undefined8 * FUN_1409175ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a428b40;
  FUN_1448d844e(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140917654 FUN_140917654 body=419 status=ok
// SIG undefined FUN_140917654(void)

void FUN_140917654(longlong param_1,longlong *param_2,char param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  undefined7 uVar7;
  
  if ((param_3 == '\x02') && (lVar5 = *(longlong *)(param_1 + 0x58), lVar5 != 0)) {
    uVar2 = *(undefined1 *)(lVar5 + 0x38);
    uVar4 = *(undefined4 *)(lVar5 + 0x34);
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined1 *)(lVar5 + 0x30);
    uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
    uVar6 = FUN_1406820ce();
    (**(code **)(*param_2 + 8))(param_2,uVar6,CONCAT71(uVar7,uVar3) & 0xffffffff,uVar1,uVar4,uVar2);
    lVar5 = *(longlong *)(param_1 + 0x58);
    uVar2 = *(undefined1 *)(lVar5 + 0x98);
    uVar4 = *(undefined4 *)(lVar5 + 0x94);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    uVar3 = *(undefined1 *)(lVar5 + 0x90);
    uVar6 = FUN_1406821b4();
    (**(code **)(*param_2 + 8))(param_2,uVar6,CONCAT71(uVar7,uVar3) & 0xffffffff,uVar1,uVar4,uVar2);
    lVar5 = *(longlong *)(param_1 + 0x58);
    uVar2 = *(undefined1 *)(lVar5 + 0xf8);
    uVar4 = *(undefined4 *)(lVar5 + 0xf4);
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
    uVar3 = *(undefined1 *)(lVar5 + 0xf0);
    uVar6 = FUN_140682380();
    (**(code **)(*param_2 + 8))(param_2,uVar6,CONCAT71(uVar7,uVar3) & 0xffffffff,uVar1,uVar4,uVar2);
    lVar5 = *(longlong *)(param_1 + 0x58);
    uVar2 = *(undefined1 *)(lVar5 + 0x158);
    uVar4 = *(undefined4 *)(lVar5 + 0x154);
    uVar1 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined1 *)(lVar5 + 0x150);
    uVar6 = FUN_14068229a();
    (**(code **)(*param_2 + 8))(param_2,uVar6,CONCAT71(uVar7,uVar3) & 0xffffffff,uVar1,uVar4,uVar2);
    lVar5 = *(longlong *)(param_1 + 0x58);
    uVar2 = *(undefined1 *)(lVar5 + 0x1b8);
    uVar4 = *(undefined4 *)(lVar5 + 0x1b4);
    uVar1 = *(undefined4 *)(param_1 + 0x44);
    uVar3 = *(undefined1 *)(lVar5 + 0x1b0);
    uVar6 = FUN_1409178de();
    (**(code **)(*param_2 + 8))(param_2,uVar6,CONCAT71(uVar7,uVar3) & 0xffffffff,uVar1,uVar4,uVar2);
    lVar5 = *(longlong *)(param_1 + 0x58);
    uVar2 = *(undefined1 *)(lVar5 + 0x218);
    uVar4 = *(undefined4 *)(lVar5 + 0x214);
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    uVar3 = *(undefined1 *)(lVar5 + 0x210);
    uVar6 = FUN_1409177f8();
    (**(code **)(*param_2 + 8))(param_2,uVar6,CONCAT71(uVar7,uVar3) & 0xffffffff,uVar1,uVar4,uVar2);
  }
  return;
}



// FUNCTION 1409177f8 FUN_1409177f8 body=228 status=ok
// SIG undefined FUN_1409177f8(void)

longlong FUN_1409177f8(void)

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
  if (DAT_14cb667b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14650fd22;
    local_38 = &LAB_148728697;
    local_40 = &LAB_145aa5c62;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectModifierType_MutationBonus",&DAT_14cb667b8,
                  &DAT_148728696);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb667b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409178de FUN_1409178de body=228 status=ok
// SIG undefined FUN_1409178de(void)

longlong FUN_1409178de(void)

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
  if (DAT_14cb667a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14650fd22;
    local_38 = &LAB_148728693;
    local_40 = &LAB_145aa5c26;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectModifierType_MutationChance",&DAT_14cb667a0,
                  &DAT_148728692);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb667a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409179ca FUN_1409179ca body=207 status=ok
// SIG undefined FUN_1409179ca(void)

longlong FUN_1409179ca(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(longlong **)(param_1 + 0x458) != (longlong *)0x0) && (*(int *)(param_1 + 0x454) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x450);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x454))) &&
        ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) && (*(int *)(param_1 + 0x464) != 0x7fffffff)) {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x458) + 0x18))();
      iVar2 = *(int *)(param_1 + 0x464);
      if ((longlong)iVar2 < 0) {
        return 0;
      }
      if (*(int *)(lVar3 + 0xa8) <= iVar2) {
        return 0;
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xa0) + 0x20 + (longlong)iVar2 * 0x170);
      if (DAT_14c950c29 != '\x01') {
        return lVar3;
      }
      if (lVar3 == 0) {
        return 0;
      }
      FUN_1456cec3c(lVar3);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 140917a9a FUN_140917a9a body=203 status=ok
// SIG undefined FUN_140917a9a(void)

void FUN_140917a9a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_140917b66();
  uVar1 = FUN_144718840(param_2,uVar1);
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_14091826c(param_2 + 0x2b8,local_20,param_1,&LAB_148ccbc3a);
  FUN_14091800e(param_2 + 0x2d0,local_20,param_1,&LAB_140457d20);
  FUN_140917c4c(param_2 + 0x318,local_20,param_1,FUN_14093d5b8);
  FUN_140917c4c(param_2 + 0x300,local_20,param_1,FUN_14093d550);
  FUN_140917eae(param_1);
  FUN_1409184d2(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140917b66 FUN_140917b66 body=228 status=ok
// SIG undefined FUN_140917b66(void)

longlong FUN_140917b66(void)

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
  if (DAT_14cba6558 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148be684d;
    local_40 = FUN_1465c7054;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakActorGlow",&DAT_14cba6558,&DAT_148be684c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba6558;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140917c4c FUN_140917c4c body=604 status=ok
// SIG undefined FUN_140917c4c(void)

undefined8 * FUN_140917c4c(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14a915ec0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_50[2] = lVar7;
  *local_50 = (longlong)&PTR_FUN_14b95b790;
  local_50[3] = param_3;
  local_50[4] = param_4;
  *param_2 = 0;
  if ((local_50 == (longlong *)0x0) || (cVar4 = (**(code **)(*local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_140917dad;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140917d97;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      uVar6 = local_40;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar2 = *param_1;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar7) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar7) = 0;
    *(longlong **)(lVar2 + lVar7) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar7) = local_48;
LAB_140917d97:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140917dad:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140917eae FUN_140917eae body=350 status=ok
// SIG undefined FUN_140917eae(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140917eae(char *param_1)

{
  void *_Src;
  undefined8 *******pppppppuVar1;
  undefined8 uVar2;
  undefined8 *******pppppppuVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined8 *******local_f8;
  int local_f0;
  undefined8 *******local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*param_1 == '\x01') {
    lVar4 = FUN_140458208(param_1);
    if (lVar4 == 0) goto LAB_140917ef2;
    local_38 = (undefined8 *******)0x0;
    local_30 = 0x1800000000;
    FUN_14024dbd6(lVar4,&local_f8,0);
    pppppppuVar3 = local_38;
    if (local_38 == (undefined8 *******)0x0) {
      pppppppuVar3 = &local_f8;
    }
    lVar4 = (longlong)(int)local_30;
    pppppppuVar1 = local_38;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        FUN_145757ada(param_1,*(undefined8 *)((longlong)pppppppuVar3 + lVar5));
        lVar5 = lVar5 + 8;
        pppppppuVar1 = local_38;
      } while (lVar4 * 8 != lVar5);
    }
  }
  else {
    local_f8 = (undefined8 *******)0x0;
    local_f0 = *(int *)(param_1 + 0x18);
    lVar4 = (longlong)local_f0;
    _Src = *(void **)(param_1 + 0x10);
    if (lVar4 == 0) goto LAB_140917ef2;
    FUN_140306928(&local_f8,local_f0,0);
    memcpy(local_f8,_Src,lVar4 << 3);
    pppppppuVar1 = local_f8;
    if ((longlong)local_f0 != 0) {
      lVar4 = (longlong)local_f0 << 3;
      pppppppuVar3 = local_f8;
      do {
        uVar2 = FUN_14479d2ce(pppppppuVar3);
        FUN_14093d700(param_1,uVar2);
        pppppppuVar3 = pppppppuVar3 + 1;
        lVar4 = lVar4 + -8;
        pppppppuVar1 = local_f8;
      } while (lVar4 != 0);
    }
  }
  if (pppppppuVar1 != (undefined8 *******)0x0) {
    FUN_1400020a8(pppppppuVar1);
  }
LAB_140917ef2:
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14091800e FUN_14091800e body=604 status=ok
// SIG undefined FUN_14091800e(void)

undefined8 * FUN_14091800e(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14a1c7440;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_50[2] = lVar7;
  *local_50 = (longlong)&PTR_FUN_14b95b720;
  local_50[3] = param_3;
  local_50[4] = param_4;
  *param_2 = 0;
  if ((local_50 == (longlong *)0x0) || (cVar4 = (**(code **)(*local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_14091816f;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140918159;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      uVar6 = local_40;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar2 = *param_1;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar7) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar7) = 0;
    *(longlong **)(lVar2 + lVar7) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar7) = local_48;
LAB_140918159:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14091816f:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14091826c FUN_14091826c body=613 status=ok
// SIG undefined FUN_14091826c(void)

undefined8 * FUN_14091826c(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_50[2] = lVar7;
  *local_50 = (longlong)&PTR_FUN_14b95b6b0;
  local_50[3] = param_3;
  local_50[4] = param_4;
  *param_2 = 0;
  if ((local_50 == (longlong *)0x0) || (cVar4 = (**(code **)(*local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_1409183c7;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_1409183b1;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      uVar6 = local_40;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar2 = *param_1;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar7) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar7) = 0;
    *(longlong **)(lVar2 + lVar7) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar7) = local_48;
LAB_1409183b1:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1409183c7:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409184d2 FUN_1409184d2 body=2563 status=ok
// SIG undefined FUN_1409184d2(void)

void FUN_1409184d2(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  undefined *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  int iVar29;
  ulonglong uVar30;
  bool bVar31;
  undefined1 auStack_148 [40];
  ulonglong local_120;
  longlong local_118;
  longlong local_110;
  ulonglong local_108;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((((DAT_14c763fc8 != '\x01') || (*(char *)(param_1 + 1) != '\0')) ||
      (lVar7 = FUN_145757bf4(param_1), lVar7 == 0)) || (lVar8 = FUN_140458208(param_1), lVar8 == 0))
  goto LAB_140918509;
  uVar9 = FUN_1401b0f18();
  plVar10 = (longlong *)FUN_144718840(lVar8,uVar9);
  if (plVar10 == (longlong *)0x0) goto LAB_140918509;
  uVar9 = (**(code **)(*plVar10 + 0x28))(plVar10);
  FUN_1406c9d00(uVar9,&local_118);
  if (local_110 == 0) {
    uVar9 = FUN_140927942();
    local_110 = FUN_14477b664(uVar9);
  }
  uVar17 = local_108;
  if (local_108 == 0) {
    if (((local_118 == 0) || (local_110 == 0)) ||
       ((plVar10 = *(longlong **)(local_110 + 0xb8), plVar10 == (longlong *)0x0 ||
        (cVar6 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar6 == '\0')))) goto LAB_140918509;
    uVar9 = (**(code **)(*plVar10 + 0x110))(plVar10);
    uVar17 = FUN_144aff482(uVar9,&local_118);
    if (uVar17 == 0) goto LAB_140918509;
  }
  *(undefined1 *)(param_1 + 1) = 1;
  iVar14 = DAT_14cbc1aa0;
  iVar29 = DAT_14cbc1a78;
  if (DAT_14cbc1a78 != DAT_14cbc1aa4) {
    uVar13 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    puVar25 = &DAT_14cbc1aa8;
    if (DAT_14cbc1ab0 != (undefined *)0x0) {
      puVar25 = DAT_14cbc1ab0;
    }
    iVar24 = *(int *)(puVar25 + (ulonglong)(DAT_14cbc1ab8 - 1 & (uVar13 >> 0x10 ^ uVar13)) * 4);
    while (iVar24 != -1) {
      puVar1 = (ulonglong *)(DAT_14cbc1a70 + (longlong)iVar24 * 0x18);
      if (*puVar1 == uVar17) {
        puVar18 = puVar1 + 1;
        if (puVar18 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
          *(int *)puVar18 = (int)*puVar18 + 1;
          goto LAB_140918509;
        }
        break;
      }
      iVar24 = (int)puVar1[2];
    }
  }
  if (DAT_14cbc1aa4 == 0) {
    iVar14 = DAT_14cbc1a78 + 1;
    bVar31 = DAT_14cbc1a7c == DAT_14cbc1a78;
    DAT_14cbc1a78 = iVar14;
    if (bVar31) {
      FUN_14482b872(&DAT_14cbc1a70,iVar29);
    }
    iVar14 = DAT_14cbc1a98;
    if (DAT_14cbc1a98 == 0) {
      iVar24 = -1;
    }
    else {
      iVar24 = DAT_14cbc1a98 + 0x1e;
      if (-1 < DAT_14cbc1a98 + -1) {
        iVar24 = DAT_14cbc1a98 + -1;
      }
      iVar24 = iVar24 >> 5;
    }
    iVar15 = DAT_14cbc1a98 + 1;
    iVar21 = DAT_14cbc1a98 + 0x1f;
    if (-1 < DAT_14cbc1a98) {
      iVar21 = DAT_14cbc1a98;
    }
    if (iVar21 >> 5 != iVar24) {
      if (DAT_14cbc1a9c <= DAT_14cbc1a98) {
        uVar13 = DAT_14cbc1a98 + 0x20;
        local_120 = (ulonglong)uVar13;
        if (uVar13 < 0xa0) {
          DAT_14cbc1a9c = 0x80;
        }
        else {
          uVar13 = uVar13 >> 5;
          local_120 = (ulonglong)uVar13;
          if (DAT_14cbc1a9c + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar13) {
              uVar22 = uVar13;
            }
          }
          else {
            uVar22 = uVar13 + (uVar13 * 3 >> 3) + 0x10;
          }
          uVar26 = (ulonglong)(uVar22 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar13 = (uint)(uVar26 + 0xf);
              if (uVar22 < 0x1ffd) {
                uVar26 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar26 + 0xf >> 4]];
              }
              else {
                uVar30 = (ulonglong)(uVar13 & 0xfffffff0);
                if (uVar30 < 0x7ff1) {
                  bVar12 = (&DAT_14c841e00)[uVar13 >> 4];
                  uVar20 = 0x32;
                  if (0x32 < bVar12) {
                    uVar20 = (ulonglong)bVar12;
                  }
                  uVar27 = 0x32 - (ulonglong)bVar12;
                  do {
                    uVar26 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar27 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar27 & 0xffffffff] & 0xf) == 0) goto LAB_140918dd1;
                    lVar19 = uVar20 + 1 + uVar27;
                    uVar27 = uVar27 - 1;
                  } while (lVar19 != 0x33);
                }
                uVar26 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar26 = (ulonglong)DAT_14c841df8;
                }
                uVar26 = -uVar26 & (uVar30 + uVar26) - 1;
              }
            }
            else {
              uVar26 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar26,0);
            }
          }
LAB_140918dd1:
          iVar24 = (int)(uVar26 >> 2);
          DAT_14cbc1a9c = -0x20;
          if ((int)local_120 <= iVar24) {
            DAT_14cbc1a9c = iVar24 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14cbc1a80,DAT_14cbc1a98);
        iVar15 = DAT_14cbc1a98 + 1;
      }
      iVar24 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar24 = iVar15;
      }
      if (iVar15 % 0x20 != 0) {
        puVar16 = &DAT_14cbc1a80;
        if (DAT_14cbc1a90 != (uint *)0x0) {
          puVar16 = DAT_14cbc1a90;
        }
        bVar12 = -(char)(iVar15 % 0x20);
        DAT_14cbc1a98 = iVar15;
        puVar16[iVar24 >> 5] = (puVar16[iVar24 >> 5] << (bVar12 & 0x1f)) >> (bVar12 & 0x1f);
        iVar15 = DAT_14cbc1a98;
      }
    }
    DAT_14cbc1a98 = iVar15;
    lVar19 = (longlong)iVar29;
    puVar16 = &DAT_14cbc1a80;
    if (DAT_14cbc1a90 != (uint *)0x0) {
      puVar16 = DAT_14cbc1a90;
    }
    bVar12 = (byte)iVar14 & 0x1f;
    puVar16[iVar21 >> 5] = puVar16[iVar21 >> 5] & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    lVar19 = (longlong)DAT_14cbc1aa0;
    DAT_14cbc1aa0 = *(int *)(DAT_14cbc1a70 + 4 + lVar19 * 0x18);
    DAT_14cbc1aa4 = DAT_14cbc1aa4 + -1;
    iVar29 = iVar14;
    if (DAT_14cbc1aa4 != 0) {
      *(undefined4 *)(DAT_14cbc1a70 + (longlong)DAT_14cbc1aa0 * 0x18) = 0xffffffff;
    }
  }
  puVar16 = DAT_14cbc1a90;
  if (DAT_14cbc1a90 == (uint *)0x0) {
    puVar16 = &DAT_14cbc1a80;
  }
  iVar14 = iVar29 + 0x1f;
  if (-1 < iVar29) {
    iVar14 = iVar29;
  }
  puVar16[iVar14 >> 5] = puVar16[iVar14 >> 5] | 1 << ((byte)iVar29 & 0x1f);
  uVar22 = 1;
  puVar1 = (ulonglong *)(DAT_14cbc1a70 + lVar19 * 0x18);
  *puVar1 = uVar17;
  *(undefined4 *)(puVar1 + 1) = 1;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  uVar13 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  uVar13 = uVar13 >> 0x10 ^ uVar13;
  uVar23 = DAT_14cbc1a78 - DAT_14cbc1aa4;
  if (1 < uVar23) {
    puVar25 = &DAT_14cbc1aa8;
    if (DAT_14cbc1ab0 != (undefined *)0x0) {
      puVar25 = DAT_14cbc1ab0;
    }
    iVar14 = *(int *)(puVar25 + (ulonglong)(DAT_14cbc1ab8 - 1 & uVar13) * 4);
    while (iVar14 != -1) {
      puVar18 = (ulonglong *)(DAT_14cbc1a70 + (longlong)iVar14 * 0x18);
      if (*puVar18 == uVar17) {
        uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
        uVar17 = puVar1[1];
        uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
        *(int *)puVar18 = (int)*puVar1;
        *(undefined4 *)((longlong)puVar18 + 4) = uVar4;
        *(int *)(puVar18 + 1) = (int)uVar17;
        *(undefined4 *)((longlong)puVar18 + 0xc) = uVar5;
        FUN_140458334(iVar29);
        goto LAB_140918b9b;
      }
      iVar14 = (int)puVar18[2];
    }
  }
  if (3 < uVar23) {
    uVar17 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
    lVar19 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar22 = 1 << ((byte)lVar19 & 0x1f);
  }
  if (((int)uVar23 < 1) || ((int)uVar22 <= (int)DAT_14cbc1ab8)) {
    uVar13 = DAT_14cbc1ab8 - 1 & uVar13;
    *(uint *)((longlong)puVar1 + 0x14) = uVar13;
    puVar25 = DAT_14cbc1ab0;
    if (DAT_14cbc1ab0 == (undefined *)0x0) {
      puVar25 = &DAT_14cbc1aa8;
    }
    *(undefined4 *)(puVar1 + 2) =
         *(undefined4 *)(puVar25 + ((longlong)(int)DAT_14cbc1ab8 - 1U & (longlong)(int)uVar13) * 4);
    puVar25 = DAT_14cbc1ab0;
    if (DAT_14cbc1ab0 == (undefined *)0x0) {
      puVar25 = &DAT_14cbc1aa8;
    }
    *(int *)(puVar25 + ((longlong)(int)DAT_14cbc1ab8 - 1U & (longlong)(int)uVar13) * 4) = iVar29;
  }
  else {
    DAT_14cbc1ab8 = uVar22;
    if (DAT_14cbc1ab0 != (undefined *)0x0) {
      FUN_1446efa72(&DAT_14cbc1ab0,0,0,4);
    }
    uVar13 = DAT_14cbc1ab8;
    if (DAT_14cbc1ab8 != 0) {
      if (DAT_14cbc1ab8 == 1) {
        if (DAT_14cbc1ab0 != (undefined *)0x0) {
          FUN_1446efa72(&DAT_14cbc1ab0,0,0,4);
        }
LAB_1409188f1:
        uVar22 = 0;
        do {
          puVar25 = DAT_14cbc1ab0;
          if (DAT_14cbc1ab0 == (undefined *)0x0) {
            puVar25 = &DAT_14cbc1aa8;
          }
          *(undefined4 *)(puVar25 + (ulonglong)(DAT_14cbc1ab8 + 0x7fffffff & uVar22) * 4) =
               0xffffffff;
          uVar22 = uVar22 + 1;
        } while (uVar13 != uVar22);
      }
      else {
        FUN_1446efa72(&DAT_14cbc1ab0,0,DAT_14cbc1ab8,4);
        if (0 < (int)uVar13) goto LAB_1409188f1;
      }
      if (DAT_14cbc1a98 == 0) {
        uVar17 = 0;
        uVar26 = 1;
        iVar14 = 0;
        iVar29 = 0;
      }
      else {
        puVar16 = DAT_14cbc1a90;
        if (DAT_14cbc1a90 == (uint *)0x0) {
          puVar16 = &DAT_14cbc1a80;
        }
        uVar13 = *puVar16;
        if (uVar13 == 0) {
          iVar29 = DAT_14cbc1a98 + 0x1e;
          if (-1 < DAT_14cbc1a98 + -1) {
            iVar29 = DAT_14cbc1a98 + -1;
          }
          uVar17 = 0;
          uVar26 = (ulonglong)(uint)(iVar29 >> 5);
          if (iVar29 >> 5 < 1) {
            uVar26 = uVar17;
          }
          iVar14 = 0;
          do {
            if (uVar26 == uVar17) goto LAB_140918b9b;
            iVar14 = iVar14 + 0x20;
            uVar13 = puVar16[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar13 == 0);
        }
        else {
          uVar17 = 0;
          iVar14 = 0;
        }
        uVar26 = (ulonglong)(-uVar13 & uVar13);
        uVar30 = uVar26 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar29 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if (DAT_14cbc1a98 <= iVar29) {
          iVar29 = DAT_14cbc1a98;
        }
      }
      if (iVar29 < DAT_14cbc1a98) {
        uVar13 = 0xffffffff;
        do {
          lVar19 = DAT_14cbc1a70;
          lVar28 = (longlong)iVar29;
          uVar30 = *(ulonglong *)(DAT_14cbc1a70 + lVar28 * 0x18);
          uVar22 = ((uint)(uVar30 >> 0x14) & 0xffff ^ (uint)(uVar30 >> 4)) * -0x7a143595;
          uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
          uVar30 = (longlong)(int)(uVar22 >> 0x10 ^ uVar22) & (longlong)(int)DAT_14cbc1ab8 - 1U;
          iVar24 = (int)uVar30;
          *(int *)(DAT_14cbc1a70 + 0x14 + lVar28 * 0x18) = iVar24;
          puVar25 = DAT_14cbc1ab0;
          if (DAT_14cbc1ab0 == (undefined *)0x0) {
            puVar25 = &DAT_14cbc1aa8;
          }
          *(undefined4 *)(lVar19 + 0x10 + lVar28 * 0x18) =
               *(undefined4 *)(puVar25 + ((longlong)(int)DAT_14cbc1ab8 - 1U & uVar30) * 4);
          puVar25 = DAT_14cbc1ab0;
          if (DAT_14cbc1ab0 == (undefined *)0x0) {
            puVar25 = &DAT_14cbc1aa8;
          }
          *(int *)(puVar25 + ((longlong)iVar24 & (longlong)(int)DAT_14cbc1ab8 - 1U) * 4) = iVar29;
          uVar13 = ~(uint)uVar26 & uVar13;
          puVar16 = DAT_14cbc1a90;
          if (DAT_14cbc1a90 == (uint *)0x0) {
            puVar16 = &DAT_14cbc1a80;
          }
          iVar29 = (int)uVar17;
          lVar19 = (longlong)iVar29;
          uVar22 = puVar16[lVar19] & uVar13;
          if (uVar22 == 0) {
            iVar24 = DAT_14cbc1a98 + 0x1e;
            if (-1 < DAT_14cbc1a98 + -1) {
              iVar24 = DAT_14cbc1a98 + -1;
            }
            iVar24 = iVar24 >> 5;
            iVar15 = iVar24;
            if (iVar24 < iVar29) {
              iVar15 = iVar29;
            }
            if (iVar24 <= iVar29) break;
            lVar28 = 0;
            while( true ) {
              iVar14 = iVar14 + 0x20;
              uVar22 = puVar16[lVar19 + lVar28 + 1];
              if (uVar22 != 0) break;
              lVar28 = lVar28 + 1;
              if (iVar15 - lVar19 == lVar28) goto LAB_140918b9b;
            }
            uVar17 = (ulonglong)(iVar29 + (int)lVar28 + 1);
            uVar13 = 0xffffffff;
          }
          uVar26 = (ulonglong)(-uVar22 & uVar22);
          uVar30 = uVar26 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar29 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        } while (iVar29 < DAT_14cbc1a98);
      }
    }
  }
LAB_140918b9b:
  local_58 = (longlong *)0x0;
  local_50 = 0x1800000000;
  FUN_141226200(lVar8,&local_118);
  plVar10 = &local_118;
  if (local_58 != (longlong *)0x0) {
    plVar10 = local_58;
  }
  if ((longlong)(int)local_50 != 0) {
    plVar2 = plVar10 + (int)local_50;
    do {
      plVar3 = (longlong *)*plVar10;
      plVar11 = (longlong *)FUN_145757c60(param_1);
      if ((longlong)(int)plVar11[1] < 1) {
LAB_140918c1e:
        lVar8 = (**(code **)(*plVar3 + 0x658))(plVar3);
        if ((lVar8 != lVar7) &&
           (plVar11 = (longlong *)FUN_140995b6b(DAT_14c951640), plVar11 != (longlong *)0x0)) {
          lVar8 = plVar3[0xcc];
          if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) {
            FUN_1456cec3c(lVar8);
          }
          (**(code **)(*plVar11 + 0xa78))(plVar11,lVar8);
          (**(code **)(*plVar11 + 0x660))(plVar11,lVar7);
        }
      }
      else {
        lVar8 = 0;
        do {
          if (*(longlong *)(*plVar11 + lVar8) == plVar3[3]) goto LAB_140918c1e;
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)plVar11[1] * 8 != lVar8);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar2);
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140918509:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140918ed6 FUN_140918ed6 body=102 status=ok
// SIG undefined FUN_140918ed6(void)

ulonglong FUN_140918ed6(longlong param_1)

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
LAB_140918f1f:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140918f1f;
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



// FUNCTION 1409190e0 FUN_1409190e0 body=345 status=ok
// SIG undefined FUN_1409190e0(void)

undefined4 *
FUN_1409190e0(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
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
  char cVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1409192e8(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[4];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  uVar10 = puVar1[8];
  uVar11 = puVar1[9];
  uVar12 = puVar1[10];
  uVar13 = puVar1[0xb];
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar3;
  *(undefined4 *)(local_48 + 2) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar5;
  *(undefined4 *)(local_48 + 3) = uVar6;
  *(undefined4 *)((longlong)local_48 + 0x1c) = uVar7;
  *(undefined4 *)(local_48 + 4) = uVar8;
  *(undefined4 *)((longlong)local_48 + 0x24) = uVar9;
  *(undefined4 *)(local_48 + 5) = uVar10;
  *(undefined4 *)((longlong)local_48 + 0x2c) = uVar11;
  *(undefined4 *)(local_48 + 6) = uVar12;
  *(undefined4 *)((longlong)local_48 + 0x34) = uVar13;
  *(undefined4 *)(local_48 + 7) = 0xffffffff;
  local_54 = local_50[0];
  uVar17 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  local_68 = param_4;
  cVar14 = FUN_14091923a(param_1,uVar17,local_48);
  if (cVar14 == '\0') {
    uVar16 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar16 < 4) {
      iVar18 = 1;
    }
    else {
      uVar15 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
      lVar19 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar18 = 1 << ((byte)lVar19 & 0x1f);
    }
    if (((int)uVar16 < 1) || (iVar18 <= *(int *)(param_1 + 0x48))) {
      uVar17 = *(int *)(param_1 + 0x48) - 1U & uVar17;
      *(uint *)((longlong)local_48 + 0x3c) = uVar17;
      lVar19 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar19 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 7) =
           *(undefined4 *)
            (lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar17) * 4);
      lVar19 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar19 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar17) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar18;
      FUN_1409194d2(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14091923a FUN_14091923a body=173 status=ok
// SIG undefined FUN_14091923a(void)

void FUN_14091923a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 uVar14;
  longlong *plVar15;
  int iVar16;
  
  uVar14 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar14 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar16 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar16 * 0x40);
        if (*(longlong *)(*param_1 + (longlong)iVar16 * 0x40) == *param_3) {
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar12 = param_3[4];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar13 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          *(longlong *)(puVar1 + 0xc) = param_3[6];
          puVar1[8] = (int)lVar12;
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar13;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_140ec6bf0((int)lVar8,*param_4,1);
          *param_4 = iVar16;
          uVar14 = 1;
          goto LAB_14091929f;
        }
        iVar16 = puVar1[0xe];
      } while (iVar16 != -1);
    }
    uVar14 = 0;
  }
LAB_14091929f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar14;
  }
  return;
}



// FUNCTION 1409192e8 FUN_1409192e8 body=489 status=ok
// SIG undefined FUN_1409192e8(void)

int * FUN_1409192e8(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x40);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1409194d2 FUN_1409194d2 body=563 status=ok
// SIG undefined FUN_1409194d2(void)

void FUN_1409194d2(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
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
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x40;
        uVar13 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x3c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x38 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1409196c0;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1409196c0:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140919706 FUN_140919706 body=605 status=ok
// SIG undefined FUN_140919706(void)

void FUN_140919706(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  code *local_48;
  code *local_40;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  lVar3 = *(longlong *)(param_1 + 0x48);
  cVar1 = FUN_140337e44(lVar3 + 0x38,*(longlong *)(param_1 + 0x40) + 0x240,lVar3 + 0x50);
  *(bool *)(param_1 + 0x54) = *(char *)(lVar3 + 0x51) != cVar1;
  uVar5 = FUN_140309e34(*(longlong *)(param_1 + 0x48) + 0x58,*(longlong *)(param_1 + 0x40) + 0x240,
                        *(longlong *)(param_1 + 0x48) + 0x70);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  local_30 = *(code **)(*(longlong *)(param_1 + 0x48) + 0xa0);
  plVar2 = (longlong *)
           FUN_14030a1e6(*(longlong *)(param_1 + 0x48) + 0x88,*(longlong *)(param_1 + 0x40) + 0x240,
                         &local_30);
  if (plVar2 != (longlong *)0x0) {
    if (DAT_14cb223d8 == 0) {
      local_30 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147f29feb;
      local_60 = FUN_1464384fe;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      local_50 = &local_30;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    lVar3 = (**(code **)(*plVar2 + 0x288))(plVar2,DAT_14cb223d8);
    if (lVar3 != 0) {
      if (DAT_14cb223d8 == 0) {
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_147f29feb;
        local_60 = FUN_1464384fe;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        local_50 = &local_30;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      lVar4 = FUN_144718840(lVar3,DAT_14cb223d8);
      if (lVar3 != lVar4) goto LAB_1409197eb;
    }
  }
  lVar4 = 0;
LAB_1409197eb:
  FUN_140919964(&local_30,lVar4);
  *(undefined4 *)(param_1 + 0x60) = (undefined4)local_30;
  *(undefined4 *)(param_1 + 100) = local_30._4_4_;
  *(undefined4 *)(param_1 + 0x68) = uStack_28;
  *(undefined4 *)(param_1 + 0x6c) = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140919964 FUN_140919964 body=204 status=ok
// SIG undefined FUN_140919964(void)

uint * FUN_140919964(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 140919a30 FUN_140919a30 body=969 status=ok
// SIG undefined FUN_140919a30(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_140919a30(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  
  iVar1 = *(int *)(param_1 + 2);
  iVar4 = iVar1 % 3;
  uVar17 = iVar1 / 3 & 0x80000001;
  uVar15 = iVar1 / 6 & 0x80000001;
  uVar13 = iVar1 / 0x18 & 0x80000001;
  uVar14 = (ulonglong)uVar13;
  uVar9 = iVar1 / 0x60 & 0x80000001;
  iVar7 = (iVar1 / 0xc0) % 2;
  uVar11 = iVar1 / 0x180 & 0x80000001;
  uVar18 = iVar1 / 0x300 & 0x80000001;
  uVar16 = iVar1 / 0x600 & 0x80000001;
  uVar10 = iVar1 / 0xc00 & 0x80000001;
  uVar12 = iVar1 / 0x6000 & 0x80000001;
  if (uVar13 == 1) {
    if ((uVar11 == 1 || uVar18 == 1) ||
        ((((uVar17 == 1 || uVar15 == 1) || (iVar1 / 0xc & 0x80000001U) == 1) || uVar9 == 1) ||
        iVar7 != 0)) {
      return 0;
    }
    if ((uVar16 == 1 || uVar10 == 1) || uVar12 == 1) {
      return 0;
    }
    bVar19 = iVar4 == 2;
  }
  else {
    if (iVar4 == 0) {
      bVar19 = false;
      uVar14 = 0;
      if ((uVar15 == 1 || uVar12 == 1) || uVar17 == 1) {
        return 0;
      }
    }
    else {
      if (uVar18 == 1 || uVar16 == 1) {
        return 0;
      }
      bVar19 = iVar4 == 2;
      if (uVar17 == 1 && !bVar19) {
        return 0;
      }
    }
    if (iVar7 != 0) {
      if (uVar9 == 1) {
        return 0;
      }
      uVar14 = CONCAT71((int7)(uVar14 >> 8),iVar7 == 1);
      if (iVar7 == 1 && uVar11 != 1) {
        return 0;
      }
      FUN_140919df9(4,*param_1);
      goto LAB_140919c2d;
    }
  }
  cVar3 = FUN_140919df9(4,*param_1);
  uVar14 = 0;
  if ((cVar3 == '\0') && (uVar11 == 1)) {
    return 0;
  }
LAB_140919c2d:
  lVar2 = DAT_14ca97170;
  if (uVar10 == 1) {
    iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
      uVar8 = 0;
    }
    else if (iVar4 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar8 = 1;
    }
    if ((uVar17 == 1 || (char)uVar14 != '\0') || (bVar19 || 0 < *(int *)(lVar2 + uVar8 * 4))) {
      return 0;
    }
    uVar8 = (ulonglong)*param_1;
    if ((*(byte *)((longlong)&DAT_14ca814d0 + uVar8 * 0x3c) & 4) == 0) {
      return 0;
    }
  }
  else {
    uVar8 = (ulonglong)*param_1;
  }
  lVar2 = DAT_14ca97170;
  if (((((*(byte *)((longlong)&DAT_14ca814d8 + uVar8 * 0x3c + 3) & 0x10) != 0) &&
       (((&DAT_14ca814c8)[uVar8 * 0xf] & 0x20000000) != 0)) &&
      ((*(uint *)(&DAT_14ca814cc + uVar8 * 0x3c) & 8) != 0)) || (uVar12 != 1)) {
    iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
      uVar8 = 0;
    }
    else if (iVar4 == 1) {
      uVar9 = FUN_140ad26c0();
      uVar14 = (ulonglong)uVar9;
      DVar5 = GetCurrentThreadId();
      uVar8 = (ulonglong)(uVar9 != DVar5);
    }
    else {
      uVar8 = 1;
    }
    if ((0 < *(int *)(lVar2 + uVar8 * 4)) || ((iVar1 / 0x1800 & 3U) == 0)) {
      return CONCAT71((int7)(uVar14 >> 8),2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
    }
  }
  return 0;
}



// FUNCTION 140919df9 FUN_140919df9 body=243 status=ok
// SIG undefined FUN_140919df9(void)

undefined8 FUN_140919df9(uint param_1,ulonglong param_2)

{
  uint uVar1;
  byte bVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 extraout_var;
  ulonglong uVar8;
  
  lVar7 = DAT_14cae3fc8;
  if (0 < DAT_14cae3fd0) {
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar5 = (ulonglong)uVar1;
    if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
      uVar8 = 0;
    }
    else if (uVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = CONCAT44(extraout_var,DVar4);
      uVar8 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar8 = 1;
    }
    if ((0 < *(int *)(lVar7 + uVar8 * 4)) && (param_1 < 5)) {
      uVar6 = CONCAT71((int7)(uVar5 >> 8),1);
      switch(param_1) {
      case 0:
        lVar7 = (param_2 & 0xffff) * 0x3c;
        bVar2 = *(byte *)((longlong)&DAT_14ca814d0 + lVar7 + 5) & 8;
        break;
      default:
        goto switchD_140919e74_caseD_1;
      case 3:
        lVar7 = (param_2 & 0xffff) * 0x3c;
        if ((*(longlong *)(&DAT_14ca814b0 + lVar7) != DAT_14ca80038) &&
           (*(longlong *)(&DAT_14ca814b0 + lVar7) != DAT_14ca81498)) goto switchD_140919e74_default;
        bVar2 = *(byte *)(&DAT_14ca814c8 + (param_2 & 0xffff) * 0xf) & 4;
      }
      if (bVar2 != 0) {
        return CONCAT71((int7)((ulonglong)lVar7 >> 8),2 < *(int *)((longlong)&DAT_14ca814b8 + lVar7)
                       );
      }
    }
  }
switchD_140919e74_default:
  uVar6 = 0;
switchD_140919e74_caseD_1:
  return uVar6;
}



// FUNCTION 140919efa FUN_140919efa body=407 status=ok
// SIG undefined FUN_140919efa(void)

void FUN_140919efa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  longlong local_50 [3];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140aa1e3c();
  uVar4 = DAT_14cb71140;
  FUN_14030ff28(DAT_14cb71140,local_50,param_3);
  plVar1 = (longlong *)FUN_144837462(uVar4,local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_140919f7a:
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_140b38cc4();
    if ((lVar3 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) goto LAB_140919f7a;
    plVar5 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      plVar5 = plVar1;
    }
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    uVar4 = FUN_140b38cc4();
    uVar4 = FUN_14477b664(uVar4);
    *(undefined8 *)(param_1 + 0x90) = uVar4;
  }
  lVar2 = FUN_140b38cc4();
  uVar4 = FUN_140b38cc4();
  FUN_1402d1bfa(local_50,uVar4,plVar5);
  if (*(longlong *)(param_1 + 0x88) != local_50[0]) {
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  *(longlong *)(param_1 + 0x88) = local_50[0];
  lVar3 = FUN_140b38cc4();
  if (lVar2 != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_14091a008;
    }
    if ((*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) goto LAB_14091a008;
  }
  lVar3 = lVar2;
LAB_14091a008:
  if (*(longlong *)(param_1 + 0x90) != lVar3) {
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  uVar4 = FUN_14477b664(lVar3);
  lVar2 = FUN_14477b664(uVar4);
  *(longlong *)(param_1 + 0x90) = lVar2;
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    *(longlong **)(param_1 + 0x98) = plVar5;
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14091a092 FUN_14091a092 body=650 status=ok
// SIG undefined FUN_14091a092(void)

void FUN_14091a092(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
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
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  *(undefined4 *)(param_1 + 3) = 0xfffffffe;
  *(undefined4 *)(param_1 + 4) = 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  uVar3 = FUN_14477dc2a();
  FUN_14477dadc(uVar3,param_2);
  FUN_14091a31e(param_1,1);
  lVar4 = (**(code **)(*param_1 + 0x198))(param_1);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  param_1[0xd] = lVar4;
  param_1[0x14] = 0x47efffffe0000000;
  param_1[0x15] = 0x47efffffe0000000;
  param_1[0x16] = 0x47efffffe0000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  lVar4 = *param_2;
  if ((lVar4 == 0) || (lVar2 = *(longlong *)(lVar4 + 0x130), lVar2 == 0)) {
LAB_14091a262:
    param_1[0x1e] = 0;
  }
  else {
    if (DAT_14c9a51d8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_1433d5220;
      local_50 = FUN_142b32f24;
      local_58 = &LAB_1462ac436;
      local_68 = &LAB_1470c7d1d;
      local_70 = &LAB_1462ac43b;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000008;
      local_90 = 0x10;
      local_98 = 0x560;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxEngineAnimInstance",&DAT_14c9a51d8,FUN_1462ac40e);
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar2 + 0x38) < *(int *)(DAT_14c9a51d8 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14c9a51d8 + 0x38) * 8) !=
        DAT_14c9a51d8 + 0x30)) goto LAB_14091a262;
    param_1[0x1e] = lVar4;
    lVar4 = (**(code **)(*param_1 + 0x200))(param_1);
    if (lVar4 != 0) {
      lVar2 = param_1[0x1e];
      iVar1 = *(int *)(lVar2 + 0x940);
      *(uint *)(lVar2 + 0x940) = iVar1 + 1U;
      if (*(uint *)(lVar2 + 0x944) < iVar1 + 1U) {
        FUN_140890db0((longlong *)(lVar2 + 0x938),iVar1);
      }
      lVar2 = *(longlong *)(lVar2 + 0x938);
      *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = (longlong)param_1 + 0xe4;
      *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar4;
    }
  }
  lVar4 = *param_2;
  if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x130), lVar2 != 0)) {
    lVar5 = FUN_140890cca();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) goto LAB_14091a21c;
  }
  lVar4 = 0;
LAB_14091a21c:
  param_1[0x1f] = lVar4;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14091a31e FUN_14091a31e body=193 status=ok
// SIG undefined FUN_14091a31e(void)

void FUN_14091a31e(longlong *param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  
  FUN_1448d844e(param_1[10],(int)param_1[0xb]);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    FUN_1405b2360(param_1 + 10,0);
  }
  if (param_2 != '\0') {
    fVar4 = (float)(**(code **)(*param_1 + 0x1a8))(param_1);
    bVar1 = NAN(fVar4);
    bVar2 = fVar4 == 0.0;
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(float *)((longlong)param_1 + 0x2c) = fVar4;
    if ((bVar2) && (!bVar1)) {
      fVar4 = (float)(**(code **)(*param_1 + 0x1b0))(param_1);
      if (fVar4 < 0.0) {
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
      }
    }
    *(undefined4 *)(param_1 + 3) = 0xfffffffe;
    *(undefined4 *)(param_1 + 4) = 0xfffffffe;
  }
  lVar3 = (**(code **)(*param_1 + 0x198))(param_1);
  if (lVar3 != 0) {
    FUN_1405b2104(lVar3,param_1 + 8,2);
    return;
  }
  return;
}



// FUNCTION 14091a3ea FUN_14091a3ea body=746 status=ok
// SIG undefined FUN_14091a3ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14091a3ea(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_58 [36];
  undefined8 local_34;
  int local_2c;
  ulonglong local_28;
  ulonglong uVar10;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaa87c) {
    FUN_144b3d300(&DAT_14caaa87c);
    if (DAT_14caaa87c == -1) {
      _DAT_14caaa870 = 0;
      DAT_14caaa878 = -1;
      _Init_thread_footer(&DAT_14caaa87c);
    }
  }
  if (DAT_14caaa878 == -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caaa888) {
      FUN_144b3d300(&DAT_14caaa888);
      if (DAT_14caaa888 == -1) {
        FUN_1446ddc76(&DAT_14caaa880,"StartPosition",1);
        _Init_thread_footer(&DAT_14caaa888);
      }
    }
    if (DAT_14caaa198 == 0) {
      uVar6 = FUN_140c6b56d();
      DAT_14caaa198 = FUN_140002ddd(FUN_146330390,uVar6,L"AnimNode_BlendSpacePlayer");
    }
    FUN_14094e66e(&local_34,DAT_14caaa880,param_1,DAT_14caaa198);
    DAT_14caaa878 = local_2c;
    _DAT_14caaa870 = local_34;
  }
  plVar8 = *(longlong **)(param_1 + 8);
  lVar7 = *plVar8;
  uVar1 = *(uint *)(plVar8[2] + (longlong)DAT_14caaa878 * 4);
  uVar9 = uVar1 & 0x7fffffff;
  uVar10 = (ulonglong)uVar9;
  if ((int)uVar1 < 0) {
    if (lVar7 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)plVar8[1];
    }
    lVar4 = plVar8[4];
    if (*(code **)(*plVar5 + 0x20) == (code *)&LAB_14488c8ee) {
      plVar5 = plVar5 + 0x12;
    }
    else {
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      lVar7 = *plVar8;
    }
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    param_1 = param_1 - *(int *)(*(longlong *)(*plVar5 + (longlong)(int)lVar4 * 8) + 0x44);
    pcVar2 = *(code **)(*plVar8 + 0x108);
    if (pcVar2 == FUN_144a4518c) {
      lVar7 = *(longlong *)(plVar8[0x42] + uVar10 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x118);
      if (pcVar2 == (code *)&LAB_1478d543c) {
        if (plVar8[0x4a] == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + *(int *)(plVar8[0x4a] + 0x44);
        }
      }
      else {
        param_1 = (*pcVar2)(plVar8,param_1);
      }
      puVar3 = (undefined4 *)(*(int *)(lVar7 + 0x44) + param_1);
    }
    else {
      puVar3 = (undefined4 *)(*pcVar2)(plVar8,uVar10,param_1);
    }
  }
  else {
    if (lVar7 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)plVar8[1];
    }
    pcVar2 = *(code **)(*plVar8 + 0x100);
    if (pcVar2 == FUN_144a45148) {
      lVar7 = *(longlong *)(plVar8[0x44] + (ulonglong)uVar9 * 8);
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == (code *)&LAB_1478d5456) {
        lVar4 = plVar8[-0x53];
      }
      else {
        lVar4 = (*pcVar2)();
      }
      puVar3 = (undefined4 *)(*(int *)(lVar7 + 0x44) + lVar4);
    }
    else {
      puVar3 = (undefined4 *)(*pcVar2)(plVar8,uVar10);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(*puVar3);
}



// FUNCTION 14091a6d6 FUN_14091a6d6 body=254 status=ok
// SIG undefined FUN_14091a6d6(void)

void FUN_14091a6d6(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar2 = 8;
    }
    else {
      uVar2 = (ulonglong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x10c)) {
        uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
      }
      uVar3 = uVar2 * 0x20;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar3 < 0x7ff1) {
            uVar3 = (ulonglong)
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)[(uVar2 & 0x7ffffffffffffff) * 2]];
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
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
        }
      }
      uVar2 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 5)) {
        uVar2 = uVar3 >> 5 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x10c) = (int)uVar2;
    FUN_14091a7d4(param_1,param_2,uVar2,0x20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14091a7d4 FUN_14091a7d4 body=142 status=ok
// SIG undefined FUN_14091a7d4(void)

void FUN_14091a7d4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,param_4);
  return;
}



// FUNCTION 14091a862 FUN_14091a862 body=254 status=ok
// SIG undefined FUN_14091a862(void)

void FUN_14091a862(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 9) {
      uVar2 = 8;
    }
    else {
      uVar2 = (ulonglong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x20c)) {
        uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
      }
      uVar3 = uVar2 * 0x40;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar3 < 0x7ff1) {
            uVar3 = (ulonglong)
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)[(uVar2 & 0x3ffffffffffffff) * 4]];
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
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
        }
      }
      uVar2 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 6)) {
        uVar2 = uVar3 >> 6 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x20c) = (int)uVar2;
    FUN_14091a960(param_1,param_2,uVar2,0x40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14091a960 FUN_14091a960 body=142 status=ok
// SIG undefined FUN_14091a960(void)

void FUN_14091a960(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 6);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 6);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,param_4);
  return;
}



// FUNCTION 14091a9f4 FUN_14091a9f4 body=57 status=ok
// SIG undefined FUN_14091a9f4(void)

void FUN_14091a9f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb69440 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb69440 = FUN_140002ddd(FUN_1465206e5,uVar1,L"GpsTestSettings_IsDead");
  }
  return;
}



// FUNCTION 14091aa36 FUN_14091aa36 body=262 status=ok
// SIG undefined FUN_14091aa36(void)

void FUN_14091aa36(longlong param_1)

{
  FUN_14029b636(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x68) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_140115c12(param_1 + 0x78,0);
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x48) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_140115c12(param_1 + 0x58,0);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x28) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_140115c12(param_1 + 0x38,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14091ab3c FUN_14091ab3c body=3851 status=ok
// SIG undefined FUN_14091ab3c(void)

void FUN_14091ab3c(longlong param_1)

{
  void *_Src;
  void *_Dst;
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  longlong *plVar18;
  undefined **ppuVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined4 uVar25;
  undefined8 *puVar26;
  uint uVar27;
  char *pcVar28;
  longlong lVar29;
  byte bVar30;
  longlong *plVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  ulonglong uVar34;
  float fVar35;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  byte local_138;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 *local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  undefined2 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar3 = uStack_c0;
  if ((DAT_14caf7f28 == 0) && (lVar8 = *(longlong *)(param_1 + 0x28), lVar8 != 0)) {
    lVar29 = *(longlong *)(param_1 + 0x18);
    lVar22 = *(longlong *)(lVar29 + 0x1c0);
    if (lVar22 != 0) {
      if (*(int *)(lVar22 + 0x3e0) < *(int *)(lVar22 + 0x3e4)) {
        pcVar28 = &DAT_14cafa566;
        if ((*(byte *)(param_1 + 0x170) & 1) != 0) {
          pcVar28 = (char *)(param_1 + 0x174);
        }
        if ((*pcVar28 == '\x01') && (*(int *)(lVar22 + 0x3e0) + 1 == *(int *)(lVar22 + 0x3e4))) {
          plVar10 = (longlong *)(param_1 + 0x380);
          local_f0 = (double)(param_1 + 0x390);
          local_f8 = 2.12199579096527e-314;
          local_e8 = 0xffffffff;
          local_e0 = 0;
          if (*(int *)(param_1 + 0x3a8) != 0) {
            FUN_1449c0562(&local_f8);
          }
          uStack_d0 = local_f8;
          local_c8 = local_f0;
          uStack_c0 = local_e8;
          uVar3 = uStack_c0;
          local_b8 = CONCAT44(local_dc,local_e0);
          local_a0 = 0;
          uStack_c0._4_4_ = (int)((ulonglong)local_e8 >> 0x20);
          local_d8 = plVar10;
          uStack_b0 = plVar10;
          local_a8 = plVar10;
          if (uStack_c0._4_4_ < *(int *)((longlong)local_f0 + 0x18)) {
            iVar7 = uStack_c0._4_4_;
            uStack_c0 = uVar3;
            do {
              lVar8 = *local_d8;
              lVar22 = (longlong)iVar7 * 0x150;
              if (*(char *)(lVar8 + 0xac + lVar22) == '\x01') {
                iVar7 = *(int *)(lVar8 + 0x9c + lVar22) + *(int *)(lVar29 + 0x268);
                *(int *)(lVar8 + 0x134 + lVar22) = iVar7;
                *(bool *)(lVar8 + 0x128 + lVar22) = -1 < iVar7;
              }
              uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
              FUN_1449c0562(&uStack_d0);
              iVar7 = uStack_c0._4_4_;
            } while (uStack_c0._4_4_ < *(int *)((longlong)local_c8 + 0x18));
            uVar3 = uStack_c0;
            if (((local_a0 & 1) != 0) && (local_a0._1_1_ == '\x01')) {
              FUN_147ca523a(local_a8,(int)local_a8[1] - *(int *)((longlong)local_a8 + 0x34));
              uVar3 = uStack_c0;
            }
          }
        }
        goto LAB_14091ae1d;
      }
    }
    if ((longlong)*(int *)(lVar8 + 0x28) != 0) {
      puVar32 = *(undefined8 **)(lVar8 + 0x20);
      puVar33 = puVar32 + (longlong)*(int *)(lVar8 + 0x28) * 0x18;
      local_120 = (longlong *)(param_1 + 0x380);
      local_110 = (longlong *)(param_1 + 0x3b8);
      do {
        if (*(char *)(puVar32 + 0xe) == '\0') {
          FUN_1400eca14(param_1);
        }
        else {
          if ((lVar22 == 0) && (*(char *)((longlong)puVar32 + 0xa4) == '\x02')) {
            lVar8 = FUN_14091baa4();
            ppuVar19 = *(undefined ***)(lVar8 + 8);
            if (ppuVar19 == (undefined **)0x0) {
              ppuVar19 = &PTR_PTR_14c75ef90;
            }
            cVar6 = (**(code **)(*ppuVar19 + 0x10))();
            if ((((cVar6 != '\0') && (DAT_14c993850 == 0)) && (0.0 <= *(double *)(lVar29 + 0x228)))
               && (DAT_14c75f150 != 0)) {
              FUN_145757e4e(lVar29);
            }
          }
          if (puVar32[0x11] != 0) {
            if (((*(char *)(puVar32 + 0x16) == '\x01') && (*(longlong *)(param_1 + 0x18) != 0)) &&
               ((lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1c0), lVar8 != 0 &&
                (lVar9 = FUN_14005b71c(), lVar9 != 0)))) {
              local_138 = *(byte *)(puVar32 + 0xe) & 1;
              local_c8 = (double)puVar32[0xd] * 0.01745329238474369;
              uStack_d0 = (double)puVar32[0xc] * 0.01745329238474369;
              local_d8 = (longlong *)((double)puVar32[0xb] * 0.01745329238474369);
              local_148 = puVar32 + 8;
              local_150 = puVar32 + 4;
              local_140 = &local_d8;
              local_158 = puVar32;
              FUN_14091d4d6(lVar8,lVar9,
                            *(int *)(puVar32 + 0x15) - *(int *)((longlong)puVar32 + 0xac),
                            CONCAT71((int7)((ulonglong)local_150 >> 8),1));
            }
            uVar34 = puVar32[0x11];
            if (uVar34 != 0) {
              if (*(int *)(param_1 + 0x388) != *(int *)(param_1 + 0x3b4)) {
                uVar27 = ((uint)(uVar34 >> 0x14) & 0xffff ^ (uint)(uVar34 >> 4)) * -0x7a143595;
                uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
                plVar10 = *(longlong **)(param_1 + 0x3c0);
                if (*(longlong **)(param_1 + 0x3c0) == (longlong *)0x0) {
                  plVar10 = local_110;
                }
                iVar7 = *(int *)((longlong)plVar10 +
                                (ulonglong)
                                (*(int *)(param_1 + 0x3c8) - 1U & (uVar27 >> 0x10 ^ uVar27)) * 4);
                if (iVar7 != -1) {
                  do {
                    local_100 = (undefined8 *)(*local_120 + (longlong)iVar7 * 0x150);
                    if (*(ulonglong *)(*local_120 + (longlong)iVar7 * 0x150) == uVar34)
                    goto LAB_14091afe8;
                    iVar7 = *(int *)(local_100 + 0x28);
                  } while (iVar7 != -1);
                }
              }
              local_100 = (undefined8 *)0x0;
LAB_14091afe8:
              puVar11 = local_100 + 2;
              if (local_100 != (undefined8 *)0x0) {
                local_100 = puVar11;
              }
              if (local_100 == (undefined8 *)0x0) {
                plVar10 = (longlong *)FUN_14005b71c(uVar34);
                if (plVar10 != (longlong *)0x0) {
                  plVar18 = (longlong *)(param_1 + 0x430);
                  plVar10 = *(longlong **)
                             (*(longlong *)(*plVar10 + 0x260) + (longlong)(int)plVar10[1] * 8);
                  iVar7 = *(int *)(param_1 + 0x438);
                  *(uint *)(param_1 + 0x438) = iVar7 + 1U;
                  if (*(uint *)(param_1 + 0x43c) < iVar7 + 1U) {
                    local_128 = plVar18;
                    local_118 = plVar10;
                    FUN_141015918(plVar18,iVar7);
                    plVar18 = local_128;
                    plVar10 = local_118;
                  }
                  *(longlong **)(*plVar18 + (longlong)iVar7 * 8) = plVar10;
                }
                lVar8 = param_1 + 0x390;
                local_d8 = (longlong *)0x0;
                uStack_d0 = 0.0;
                local_c8 = 0.0;
                local_b8 = 0;
                uStack_b0 = (longlong *)0x0;
                local_a8 = (longlong *)0x0;
                if (*(int *)(param_1 + 0x3b4) == 0) {
                  uVar27 = *(uint *)(param_1 + 0x388);
                  local_128 = (longlong *)(ulonglong)uVar27;
                  *(uint *)(param_1 + 0x388) = uVar27 + 1;
                  if (*(uint *)(param_1 + 0x38c) == uVar27) {
                    FUN_140c1d76c(local_120,local_128);
                  }
                  local_118 = (longlong *)(longlong)(int)local_128;
                  iVar7 = FUN_144a54ea4(lVar8,1);
                  lVar9 = *(longlong *)(param_1 + 0x3a0);
                  if (*(longlong *)(param_1 + 0x3a0) == 0) {
                    lVar9 = lVar8;
                  }
                  iVar20 = iVar7 + 0x1f;
                  if (-1 < iVar7) {
                    iVar20 = iVar7;
                  }
                  bVar12 = (byte)iVar7 & 0x1f;
                  puVar17 = (uint *)(lVar9 + (longlong)(iVar20 >> 5) * 4);
                  *puVar17 = *puVar17 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
                  plVar10 = local_118;
                  plVar18 = local_128;
                }
                else {
                  uVar27 = *(uint *)(param_1 + 0x3b0);
                  plVar10 = (longlong *)(longlong)(int)uVar27;
                  iVar7 = *(int *)(*(longlong *)(param_1 + 0x380) + 4 + (longlong)plVar10 * 0x150);
                  *(int *)(param_1 + 0x3b0) = iVar7;
                  iVar20 = *(int *)(param_1 + 0x3b4) + -1;
                  *(int *)(param_1 + 0x3b4) = iVar20;
                  plVar18 = (longlong *)(ulonglong)uVar27;
                  if (iVar20 != 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x380) + (longlong)iVar7 * 0x150) =
                         0xffffffff;
                  }
                }
                iVar7 = (int)plVar18;
                if (*(longlong *)(param_1 + 0x3a0) != 0) {
                  lVar8 = *(longlong *)(param_1 + 0x3a0);
                }
                iVar20 = iVar7 + 0x1f;
                if (-1 < iVar7) {
                  iVar20 = iVar7;
                }
                puVar17 = (uint *)(lVar8 + (longlong)(iVar20 >> 5) * 4);
                *puVar17 = *puVar17 | 1 << ((byte)plVar18 & 0x1f);
                lVar8 = *(longlong *)(param_1 + 0x380);
                lVar9 = (longlong)plVar10 * 0x150;
                _Src = (void *)(lVar8 + lVar9);
                *(ulonglong *)(lVar8 + lVar9) = uVar34;
                puVar1 = (undefined4 *)(lVar8 + 0x10 + lVar9);
                *puVar1 = (undefined4)local_d8;
                puVar1[1] = local_d8._4_4_;
                puVar1[2] = (int)uStack_d0;
                puVar1[3] = uStack_d0._4_4_;
                puVar1 = (undefined4 *)(lVar8 + 0x20 + lVar9);
                *puVar1 = (undefined4)local_c8;
                puVar1[1] = local_c8._4_4_;
                puVar1[2] = (uint)uStack_c0;
                puVar1[3] = uStack_c0._4_4_;
                puVar1 = (undefined4 *)(lVar8 + 0x30 + lVar9);
                *puVar1 = (undefined4)local_b8;
                puVar1[1] = local_b8._4_4_;
                puVar1[2] = (undefined4)uStack_b0;
                puVar1[3] = uStack_b0._4_4_;
                *(longlong **)(lVar8 + 0x40 + lVar9) = local_a8;
                *(undefined8 *)(lVar8 + 0x48 + lVar9) = 0x3ff0000000000000;
                puVar11 = (undefined8 *)(lVar8 + 0x50 + lVar9);
                *puVar11 = 0;
                puVar11[1] = 0;
                puVar11 = (undefined8 *)(lVar8 + 0x60 + lVar9);
                *puVar11 = 0;
                puVar11[1] = 0;
                puVar11 = (undefined8 *)(lVar8 + 0x70 + lVar9);
                *puVar11 = 0;
                puVar11[1] = 0;
                *(undefined1 *)(lVar8 + 0x80 + lVar9) = 0;
                *(undefined8 *)(lVar8 + 0x90 + lVar9) = 0;
                *(undefined4 *)(lVar8 + 0x98 + lVar9) = 0xffffffff;
                *(undefined8 *)(lVar8 + 0xa0 + lVar9) = 0x5ffffffff;
                *(undefined4 *)(lVar8 + 0xa8 + lVar9) = 0x40a00000;
                *(undefined4 *)(lVar8 + 0x120 + lVar9) = 0xffffffff;
                *(undefined1 *)(lVar8 + 0x128 + lVar9) = 0;
                *(undefined4 *)(lVar8 + 300 + lVar9) = 0;
                *(undefined1 *)(lVar8 + 0x130 + lVar9) = 0;
                *(undefined4 *)(lVar8 + 0x134 + lVar9) = 0xffffffff;
                *(undefined4 *)(lVar8 + 0x140 + lVar9) = 0xffffffff;
                uVar27 = ((uint)(uVar34 >> 0x14) & 0xffff ^ (uint)(uVar34 >> 4)) * -0x7a143595;
                uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
                uVar27 = uVar27 >> 0x10 ^ uVar27;
                uVar13 = *(int *)(param_1 + 0x388) - *(int *)(param_1 + 0x3b4);
                if (1 < uVar13) {
                  plVar10 = *(longlong **)(param_1 + 0x3c0);
                  if (*(longlong **)(param_1 + 0x3c0) == (longlong *)0x0) {
                    plVar10 = local_110;
                  }
                  iVar20 = *(int *)((longlong)plVar10 +
                                   (ulonglong)(*(int *)(param_1 + 0x3c8) - 1U & uVar27) * 4);
                  if (iVar20 != -1) {
                    do {
                      _Dst = (void *)(*local_120 + (longlong)iVar20 * 0x150);
                      if (*(ulonglong *)(*local_120 + (longlong)iVar20 * 0x150) == uVar34) {
                        memmove(_Dst,_Src,0x140);
                        FUN_14091c02a(local_120,(ulonglong)plVar18 & 0xffffffff);
                        goto LAB_14091b6ff;
                      }
                      iVar20 = *(int *)((longlong)_Dst + 0x140);
                    } while (iVar20 != -1);
                  }
                }
                iVar16 = 1;
                if (3 < uVar13) {
                  uVar34 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
                  lVar8 = 0x3f;
                  if (uVar34 != 0) {
                    for (; uVar34 >> lVar8 == 0; lVar8 = lVar8 + -1) {
                    }
                  }
                  iVar16 = 1 << ((byte)lVar8 & 0x1f);
                }
                iVar20 = iVar7;
                if (((int)uVar13 < 1) || (iVar16 <= *(int *)(param_1 + 0x3c8))) {
                  uVar27 = *(int *)(param_1 + 0x3c8) - 1U & uVar27;
                  *(uint *)((longlong)_Src + 0x144) = uVar27;
                  plVar10 = *(longlong **)(param_1 + 0x3c0);
                  if (*(longlong **)(param_1 + 0x3c0) == (longlong *)0x0) {
                    plVar10 = local_110;
                  }
                  *(undefined4 *)((longlong)_Src + 0x140) =
                       *(undefined4 *)
                        ((longlong)plVar10 +
                        ((longlong)*(int *)(param_1 + 0x3c8) - 1U & (longlong)(int)uVar27) * 4);
                  plVar10 = *(longlong **)(param_1 + 0x3c0);
                  if (*(longlong **)(param_1 + 0x3c0) == (longlong *)0x0) {
                    plVar10 = local_110;
                  }
                  *(int *)((longlong)plVar10 +
                          ((longlong)*(int *)(param_1 + 0x3c8) - 1U & (longlong)(int)uVar27) * 4) =
                       iVar7;
                }
                else {
                  *(int *)(param_1 + 0x3c8) = iVar16;
                  FUN_1457583c4(local_120);
                }
LAB_14091b6ff:
                lVar8 = *local_120 + (longlong)iVar20 * 0x150;
                puVar11 = (undefined8 *)(lVar8 + 0x10);
                *(undefined8 *)(lVar8 + 0x100) = puVar32[2];
                uVar3 = puVar32[1];
                *(undefined8 *)(lVar8 + 0xf0) = *puVar32;
                *(undefined8 *)(lVar8 + 0xf8) = uVar3;
                *(undefined8 *)(lVar8 + 0xc0) = puVar32[2];
                uVar3 = puVar32[1];
                *(undefined8 *)(lVar8 + 0xb0) = *puVar32;
                *(undefined8 *)(lVar8 + 0xb8) = uVar3;
                uVar3 = puVar32[4];
                uVar4 = puVar32[5];
                uVar5 = puVar32[7];
                *(undefined8 *)(lVar8 + 0xe0) = puVar32[6];
                *(undefined8 *)(lVar8 + 0xe8) = uVar5;
                *(undefined8 *)(lVar8 + 0xd0) = uVar3;
                *(undefined8 *)(lVar8 + 0xd8) = uVar4;
                *(undefined8 *)(lVar8 + 0x118) = puVar32[10];
                uVar3 = puVar32[9];
                *(undefined8 *)(lVar8 + 0x108) = puVar32[8];
                *(undefined8 *)(lVar8 + 0x110) = uVar3;
                *(undefined1 *)(lVar8 + 0xad) = *(undefined1 *)((longlong)puVar32 + 0xa4);
LAB_14091b019:
                iVar7 = *(int *)(lVar29 + 0x268);
                iVar20 = *(int *)(puVar11 + 0x11);
                if (iVar20 < 0) {
                  local_128._0_4_ = 0;
                }
                else {
                  local_128._0_4_ = *(int *)((longlong)puVar11 + 0x84);
                }
                iVar16 = *(int *)(puVar11 + 0x12);
                bVar12 = *(int *)((longlong)puVar11 + 0x8c) == *(int *)((longlong)puVar32 + 0xac) &
                         *(byte *)(puVar32 + 0x16);
                local_108 = CONCAT71(local_108._1_7_,bVar12);
                bVar30 = ~*(byte *)(puVar32 + 0xe) & (*(byte *)(puVar11 + 0xe) & 1) == 0;
                iVar14 = iVar7 + -1;
                if (-1 < iVar16) {
                  iVar14 = iVar16;
                }
                local_118 = puVar32 + 0x15;
                iVar15 = *(int *)(puVar32 + 0x15) - iVar20;
                if (*(int *)(puVar32 + 0x15) - iVar20 < 1) {
                  iVar15 = iVar7 - iVar14;
                }
                cVar6 = *(char *)(puVar11 + 0x24);
                *(byte *)(puVar11 + 0x24) = bVar30;
                if (iVar20 < 1) {
                  iVar15 = iVar7 - iVar14;
                }
                *(int *)((longlong)puVar11 + 0x94) = iVar15;
                plVar10 = puVar11 + 0x11;
                if (*(char *)(puVar11 + 0x23) != '\0') {
                  plVar10 = local_118;
                }
                *(int *)(puVar11 + 0x22) = (int)*plVar10;
                if (iVar16 == -1) {
                  iVar16 = *(int *)(lVar29 + 0x268) + -1;
                }
                *(int *)((longlong)puVar11 + 0x114) = iVar16;
                *(undefined4 *)(puVar11 + 0x11) = *(undefined4 *)(puVar32 + 0x15);
                *(int *)(puVar11 + 0x12) = iVar7;
                puVar24 = puVar32;
                puVar26 = puVar11;
                for (lVar8 = 0xf; lVar8 != 0; lVar8 = lVar8 + -1) {
                  *puVar26 = *puVar24;
                  puVar24 = puVar24 + 1;
                  puVar26 = puVar26 + 1;
                }
                uVar2 = *(undefined1 *)((longlong)puVar32 + 0xa4);
                *(undefined1 *)((longlong)puVar11 + 0x9c) = uVar2;
                uVar25 = 0;
                if (*(char *)(puVar32 + 0x16) != '\0') {
                  uVar25 = *(undefined4 *)((longlong)puVar32 + 0xac);
                }
                *(undefined4 *)((longlong)puVar11 + 0x8c) = uVar25;
                *(undefined4 *)((longlong)puVar11 + 0x84) = 0;
                *(undefined4 *)((longlong)puVar11 + 0x11c) = 0;
                iVar7 = *(int *)((longlong)puVar11 + 0x124);
                if (iVar7 < *(int *)(puVar32 + 0x15)) {
                  *(undefined1 *)((longlong)puVar11 + 0x9d) = uVar2;
                  *(undefined4 *)((longlong)puVar11 + 0x124) = 0xffffffff;
                  *(undefined1 *)(puVar11 + 0x23) = 0;
                  iVar7 = -1;
                }
                if (*(char *)((longlong)puVar32 + 0xa4) == '\x01') {
                  puVar11[0x16] = puVar32[2];
                  uVar3 = puVar32[1];
                  puVar11[0x14] = *puVar32;
                  puVar11[0x15] = uVar3;
                  uVar3 = puVar32[5];
                  uVar4 = puVar32[6];
                  uVar5 = puVar32[7];
                  puVar11[0x18] = puVar32[4];
                  puVar11[0x19] = uVar3;
                  puVar11[0x1a] = uVar4;
                  puVar11[0x1b] = uVar5;
                  if (((local_100 != (undefined8 *)0x0) && (cVar6 != '\0')) &&
                     (bVar12 = bVar12 & bVar30, local_108 = CONCAT71(local_108._1_7_,bVar12),
                     bVar12 != 0)) {
                    fVar35 = -0.5 - (*(float *)(puVar11 + 0x13) + *(float *)(puVar11 + 0x13));
                    iVar16 = ((int)ROUND(fVar35) >> 1) * DAT_14c7618a0;
                    iVar20 = (int)local_128 - iVar15;
                    if (-iVar16 <= (int)local_128 - iVar15) {
                      iVar20 = -iVar16;
                    }
                    if (iVar20 < iVar16) {
                      iVar20 = iVar16;
                    }
                    *(int *)((longlong)puVar11 + 0x84) = iVar20;
                    if (iVar7 < 0) {
                      FUN_14091c140(puVar11,fVar35,(float)*(double *)(param_1 + 0x38));
                    }
                  }
                }
              }
              else if ((*(int *)(puVar32 + 0x15) == 0) ||
                      (*(int *)(local_100 + 0x11) < *(int *)(puVar32 + 0x15))) goto LAB_14091b019;
              *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)((longlong)puVar32 + 0xb4);
            }
          }
        }
        puVar32 = puVar32 + 0x18;
      } while (puVar32 != puVar33);
    }
    lVar8 = FUN_14091baa4();
    ppuVar19 = &PTR_PTR_14c75ef90;
    if (*(undefined ***)(lVar8 + 8) != (undefined **)0x0) {
      ppuVar19 = *(undefined ***)(lVar8 + 8);
    }
    cVar6 = (**(code **)(*ppuVar19 + 0x10))();
    if (((cVar6 != '\0') && (DAT_14c761868 == '\x01')) &&
       (lVar8 = *(longlong *)(param_1 + 0x18), lVar8 != 0)) {
      fVar35 = (float)*(int *)(param_1 + 0x428) * 0.9;
      iVar7 = (int)ROUND(-0.5 - (fVar35 + fVar35)) >> 1;
      iVar20 = -iVar7;
      if (0 < iVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar20);
      }
      *(undefined4 *)(param_1 + 0x428) = 0;
      if (*(int *)(param_1 + 0x42c) != iVar20) {
        FUN_14481578e();
      }
      lVar8 = *(longlong *)(lVar8 + 0x9c8) + 0x100;
      iVar7 = *(int *)(param_1 + 0x3a8);
      if (iVar7 == 0) {
        uVar23 = 1;
        uVar34 = 0;
        iVar20 = 0;
        iVar16 = 0;
      }
      else {
        puVar17 = *(uint **)(param_1 + 0x3a0);
        if (*(uint **)(param_1 + 0x3a0) == (uint *)0x0) {
          puVar17 = (uint *)(param_1 + 0x390);
        }
        uVar27 = *puVar17;
        if (uVar27 == 0) {
          iVar20 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar20 = iVar7 + -1;
          }
          uVar34 = 0;
          uVar21 = (ulonglong)(uint)(iVar20 >> 5);
          if (iVar20 >> 5 < 1) {
            uVar21 = uVar34;
          }
          iVar20 = 0;
          do {
            if (uVar21 == uVar34) goto LAB_14091acf5;
            iVar20 = iVar20 + 0x20;
            uVar27 = puVar17[uVar34 + 1];
            uVar34 = uVar34 + 1;
          } while (uVar27 == 0);
        }
        else {
          uVar34 = 0;
          iVar20 = 0;
        }
        uVar23 = (ulonglong)(-uVar27 & uVar27);
        uVar21 = uVar23 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar16 = (iVar20 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar16) {
          iVar16 = iVar7;
        }
      }
      if (iVar16 < iVar7) {
        uVar27 = 0xffffffff;
        do {
          if ((*(char *)(*(longlong *)(param_1 + 0x380) + 0xac + (longlong)iVar16 * 0x150) == '\x02'
              ) && (*(longlong *)(*(longlong *)(param_1 + 0x380) + (longlong)iVar16 * 0x150) != 0))
          {
            local_120 = (longlong *)CONCAT44(local_120._4_4_,uVar27);
            lVar29 = FUN_14005b71c();
            uVar27 = (uint)local_120;
            if (lVar29 != 0) {
              FUN_14091c0a4(lVar8,&local_f8,lVar29);
              FUN_14091c32a(lVar8,&local_d8);
              if ((longlong)(int)uStack_d0 != 0) {
                plVar31 = (longlong *)((longlong)(int)uStack_d0 << 3);
                plVar18 = (longlong *)0x0;
                plVar10 = local_d8;
                do {
                  uVar25 = *(undefined4 *)
                            (*(longlong *)((longlong)plVar10 + (longlong)plVar18) + 0x10);
                  iVar7 = *(int *)(param_1 + 0x428);
                  *(uint *)(param_1 + 0x428) = iVar7 + 1U;
                  lVar29 = (longlong)iVar7;
                  if (*(uint *)(param_1 + 0x42c) < iVar7 + 1U) {
                    local_100 = (undefined8 *)CONCAT44(local_100._4_4_,uVar25);
                    local_128 = plVar31;
                    local_118 = plVar18;
                    local_110 = plVar10;
                    local_108 = (longlong)iVar7;
                    FUN_1446f48e2((longlong *)(param_1 + 0x420));
                    plVar10 = local_110;
                    lVar29 = local_108;
                    plVar18 = local_118;
                    plVar31 = local_128;
                    uVar25 = local_100._0_4_;
                  }
                  *(undefined4 *)(*(longlong *)(param_1 + 0x420) + lVar29 * 4) = uVar25;
                  plVar18 = plVar18 + 1;
                } while (plVar31 != plVar18);
              }
              if (local_d8 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              uVar27 = (uint)local_120;
            }
          }
          uVar27 = uVar27 & ~(uint)uVar23;
          puVar17 = *(uint **)(param_1 + 0x3a0);
          if (*(uint **)(param_1 + 0x3a0) == (uint *)0x0) {
            puVar17 = (uint *)(param_1 + 0x390);
          }
          iVar7 = *(int *)(param_1 + 0x3a8);
          iVar16 = (int)uVar34;
          lVar29 = (longlong)iVar16;
          uVar13 = puVar17[lVar29] & uVar27;
          if (uVar13 == 0) {
            iVar14 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar14 = iVar7 + -1;
            }
            iVar14 = iVar14 >> 5;
            iVar15 = iVar14;
            if (iVar14 < iVar16) {
              iVar15 = iVar16;
            }
            if (iVar14 <= iVar16) break;
            lVar22 = 0;
            while( true ) {
              iVar20 = iVar20 + 0x20;
              uVar13 = puVar17[lVar29 + lVar22 + 1];
              if (uVar13 != 0) break;
              lVar22 = lVar22 + 1;
              if (iVar15 - lVar29 == lVar22) goto LAB_14091acf5;
            }
            uVar34 = (ulonglong)(iVar16 + (int)lVar22 + 1);
            uVar27 = 0xffffffff;
          }
          uVar23 = (ulonglong)(-uVar13 & uVar13);
          uVar21 = uVar23 * 2 + 1;
          lVar29 = 0x3f;
          if (uVar21 != 0) {
            for (; uVar21 >> lVar29 == 0; lVar29 = lVar29 + -1) {
            }
          }
          iVar16 = (iVar20 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
        } while (iVar16 < iVar7);
      }
    }
LAB_14091acf5:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_178);
  }
LAB_14091ae1d:
  uStack_c0 = uVar3;
  if ((local_90 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14091ba90 FUN_14091ba90 body=20 status=ok
// SIG undefined FUN_14091ba90(void)

undefined1 FUN_14091ba90(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14091baee();
  return *(undefined1 *)(lVar1 + 0xf0);
}



// FUNCTION 14091baa4 FUN_14091baa4 body=73 status=ok
// SIG undefined FUN_14091baa4(void)

longlong FUN_14091baa4(void)

{
  longlong lVar1;
  
  if (DAT_14c992510 == 0) {
    lVar1 = FUN_14001cc68(0x108,0x10);
    FUN_145757ce6(lVar1);
    DAT_14c992510 = lVar1;
    FUN_145757eb8(lVar1);
  }
  return DAT_14c992510;
}



// FUNCTION 14091baee FUN_14091baee body=72 status=ok
// SIG undefined FUN_14091baee(void)

void FUN_14091baee(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    plVar1 = (longlong *)FUN_144800528();
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      lVar2 = plVar1[0x22];
    }
    *(longlong *)(param_1 + 8) = lVar2;
  }
  return;
}



// FUNCTION 14091bb36 FUN_14091bb36 body=1164 status=ok
// SIG undefined FUN_14091bb36(void)

void FUN_14091bb36(longlong *param_1,undefined4 param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  uint local_7c;
  longlong *local_78;
  undefined8 local_70;
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)(int)param_4[1] != 0) {
    lVar12 = *param_4;
    lVar18 = (longlong)(int)param_4[1] * 0xc0;
    do {
      lVar10 = *(longlong *)(lVar12 + 0x80);
      if (lVar10 != 0) {
        if (*(longlong *)(lVar10 + 0x48) == 0) {
          lVar10 = 0;
        }
        local_a8 = lVar12 + 0x90;
        if (*(char *)(lVar12 + 0xa0) == '\0') {
          local_a8 = param_3;
        }
        (**(code **)(*param_1 + 0xd8))(param_1,lVar10,lVar12,param_2);
      }
      lVar12 = lVar12 + 0xc0;
      lVar18 = lVar18 + -0xc0;
    } while (lVar18 != 0);
  }
  iVar16 = (int)param_1[0x75];
  if (iVar16 == 0) {
    uVar14 = 1;
    uVar19 = 0;
    iVar11 = 0;
    iVar13 = 0;
  }
  else {
    puVar7 = (uint *)param_1[0x74];
    if ((uint *)param_1[0x74] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x72);
    }
    uVar15 = *puVar7;
    if (uVar15 == 0) {
      iVar11 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar11 = iVar16 + -1;
      }
      uVar19 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar19;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar19) goto LAB_14091bbbf;
        iVar11 = iVar11 + 0x20;
        uVar15 = puVar7[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar19 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar9 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar13 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar13) {
      iVar13 = iVar16;
    }
  }
  if (iVar13 < iVar16) {
    local_88 = param_1 + 0x70;
    local_78 = param_1 + 0x86;
    uVar15 = 0xffffffff;
    do {
      local_7c = uVar15;
      local_70 = 0xffffffffffffffff;
      lVar12 = *local_88;
      local_a0 = (longlong)iVar13 * 0x150;
      if (((*(longlong *)(lVar12 + local_a0) == 0) ||
          (plVar3 = (longlong *)FUN_14005b71c(), lVar18 = local_a0, plVar3 == (longlong *)0x0)) ||
         (*(byte *)((longlong)plVar3 + 0xc) < 2)) {
LAB_14091be71:
        local_68 = &local_70;
        FUN_1400ecbf0(local_78,&local_68);
        FUN_14091bfc4(local_88,iVar13);
      }
      else {
        local_98 = *local_88;
        local_70 = *(undefined8 *)(*(longlong *)(*plVar3 + 0x260) + (longlong)(int)plVar3[1] * 8);
        if ((int)param_1[0x7b] == *(int *)((longlong)param_1 + 0x404)) {
          lVar12 = 0;
        }
        else {
          uVar9 = *(ulonglong *)(lVar12 + local_a0);
          uVar15 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
          uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
          plVar8 = param_1 + 0x81;
          if ((longlong *)param_1[0x82] != (longlong *)0x0) {
            plVar8 = (longlong *)param_1[0x82];
          }
          iVar16 = *(int *)((longlong)plVar8 +
                           (ulonglong)((int)param_1[0x83] - 1U & (uVar15 >> 0x10 ^ uVar15)) * 4);
          if (iVar16 == -1) {
            lVar12 = 0;
          }
          else {
            do {
              lVar12 = param_1[0x7a] + (longlong)iVar16 * 0x160;
              if (*(ulonglong *)(param_1[0x7a] + (longlong)iVar16 * 0x160) == uVar9) break;
              iVar16 = *(int *)(lVar12 + 0x158);
              lVar12 = 0;
            } while (iVar16 != -1);
          }
        }
        lVar10 = local_98 + local_a0;
        lVar17 = lVar10 + 0x10;
        plVar8 = (longlong *)(lVar12 + 8);
        if (lVar12 == 0) {
          plVar8 = (longlong *)0x0;
        }
        if (plVar8 == (longlong *)0x0) {
          plVar8 = param_1 + 0x46;
        }
        local_90 = plVar3;
        memcpy(param_1 + 0x1c,plVar8,0x150);
        lVar12 = local_98;
        cVar2 = *(char *)(((ulonglong)(*(uint *)(lVar10 + 0x134) >> 0x1f) ^ 0xa5) + 8 +
                         local_98 + lVar18);
        if (cVar2 == '\x01') {
          cVar2 = (**(code **)(*param_1 + 0xe8))(param_1,local_90,lVar17,param_2);
          piVar1 = (int *)(lVar12 + 0x94 + lVar18);
          *piVar1 = *piVar1 + 1;
        }
        else {
          if (cVar2 == '\x02') {
            cVar2 = (**(code **)(*param_1 + 0xf0))(param_1,local_90,lVar17,param_2);
          }
          else {
            if (cVar2 != '\0') {
              piVar1 = (int *)(local_98 + 0x94 + local_a0);
              *piVar1 = *piVar1 + 1;
              goto LAB_14091be71;
            }
            cVar2 = (**(code **)(*param_1 + 0xe0))(param_1,local_90,lVar17,param_2);
          }
          piVar1 = (int *)(local_98 + 0x94 + local_a0);
          *piVar1 = *piVar1 + 1;
        }
        if (cVar2 != '\0') goto LAB_14091be71;
      }
      uVar15 = local_7c & ~(uint)uVar14;
      puVar7 = (uint *)param_1[0x74];
      if ((uint *)param_1[0x74] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x72);
      }
      iVar16 = (int)param_1[0x75];
      iVar13 = (int)uVar19;
      lVar12 = (longlong)iVar13;
      uVar4 = puVar7[lVar12] & uVar15;
      if (uVar4 == 0) {
        iVar5 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar5 = iVar16 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar13) {
          iVar6 = iVar13;
        }
        if (iVar5 <= iVar13) break;
        lVar18 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar7[lVar12 + lVar18 + 1];
          if (uVar4 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar6 - lVar12 == lVar18) goto LAB_14091bbbf;
        }
        uVar19 = (ulonglong)(iVar13 + (int)lVar18 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar13 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar16);
  }
LAB_14091bbbf:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14091bfc4 FUN_14091bfc4 body=101 status=ok
// SIG undefined FUN_14091bfc4(void)

void FUN_14091bfc4(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x144 + (longlong)param_2 * 0x150);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x150 + 0x140);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x150 + 0x140);
  FUN_14091c02a();
  return;
}



// FUNCTION 14091c02a FUN_14091c02a body=122 status=ok
// SIG undefined FUN_14091c02a(void)

void FUN_14091c02a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x150) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x150) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x150 + 4) = uVar5;
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



// FUNCTION 14091c0a4 FUN_14091c0a4 body=155 status=ok
// SIG undefined FUN_14091c0a4(void)

undefined8 * FUN_14091c0a4(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((param_3 != (longlong *)0x0) &&
     (lVar2 = *(longlong *)(*(longlong *)(*param_3 + 0x1e8) + (longlong)(int)param_3[1] * 8),
     lVar2 != 0)) {
    if ((*(byte *)(lVar2 + 0x2c) & 1) == 0) {
      iVar1 = *(int *)(lVar2 + 0x18);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(lVar2 + 0x10);
        lVar4 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + lVar4);
          if (*(longlong *)(lVar3 + 8) != 0) {
            FUN_146db6ab6(param_2,lVar3 + 8);
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)iVar1 * 8 != lVar4);
      }
    }
    else if (*(longlong *)(lVar2 + 8) != 0) {
      *(undefined4 *)(param_2 + 1) = 1;
      FUN_14091d212(param_2,0);
      *(undefined8 *)*param_2 = *(undefined8 *)(lVar2 + 8);
    }
  }
  return param_2;
}



// FUNCTION 14091c140 FUN_14091c140 body=490 status=ok
// SIG undefined FUN_14091c140(void)

void FUN_14091c140(double *param_1,int param_2,float param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  
  dVar11 = (double)((float)param_2 * param_3);
  *param_1 = dVar11 * param_1[8] + *param_1;
  param_1[1] = param_1[9] * dVar11 + param_1[1];
  param_1[2] = param_1[10] * dVar11 + param_1[2];
  dVar11 = param_1[0xb];
  dVar1 = param_1[0xc];
  dVar2 = param_1[0xd];
  fVar10 = (float)SQRT(dVar2 * dVar2 + dVar11 * dVar11 + dVar1 * dVar1);
  dVar5 = DAT_14c8464f0;
  dVar6 = DAT_14c8464e8;
  dVar4 = DAT_14c8464e0;
  if (1e-08 < fVar10) {
    dVar4 = (double)(1.0 / fVar10);
    dVar5 = dVar2 * dVar4;
    dVar6 = dVar1 * dVar4;
    dVar4 = dVar11 * dVar4;
  }
  dVar1 = (double)((float)param_2 * param_3 * fVar10 * 0.017453292) * 0.5;
  dVar11 = sin(dVar1);
  dVar1 = cos(dVar1);
  dVar4 = dVar4 * dVar11;
  dVar6 = dVar6 * dVar11;
  dVar5 = dVar5 * dVar11;
  dVar2 = param_1[4];
  dVar7 = param_1[5];
  dVar8 = param_1[6];
  dVar9 = param_1[7];
  dVar11 = dVar8 * dVar5 * -1.0 + ((dVar4 * dVar2 * -1.0 + dVar1 * dVar9) - dVar7 * dVar6);
  param_1[4] = dVar7 * dVar5 * -1.0 + dVar8 * dVar6 + dVar4 * dVar9 * 1.0 + dVar2 * dVar1;
  param_1[5] = dVar2 * dVar5 * 1.0 + dVar9 * dVar6 + dVar4 * dVar8 * -1.0 + dVar7 * dVar1;
  auVar3._8_4_ = SUB84(dVar11,0);
  auVar3._0_8_ = dVar9 * dVar5 * 1.0 + ((dVar4 * dVar7 * 1.0 + dVar1 * dVar8) - dVar2 * dVar6);
  auVar3._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 6) = auVar3;
  return;
}



// FUNCTION 14091c32a FUN_14091c32a body=288 status=ok
// SIG undefined FUN_14091c32a(void)

undefined8 * FUN_14091c32a(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  plVar6 = (longlong *)*param_3;
  if ((longlong)(int)param_3[1] != 0) {
    local_60 = plVar6 + (int)param_3[1];
    local_58 = param_3;
    do {
      lVar1 = *plVar6;
      plVar7 = (longlong *)(lVar1 + 0x10);
      if (*(longlong **)(lVar1 + 0x60) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar1 + 0x60);
      }
      if ((longlong)*(int *)(lVar1 + 0x68) != 0) {
        plVar8 = plVar7 + (longlong)*(int *)(lVar1 + 0x68) * 2;
        do {
          lVar1 = plVar7[1];
          if ((longlong)(int)lVar1 != 0) {
            lVar2 = *plVar7;
            lVar5 = 0;
            do {
              lVar3 = *(longlong *)(lVar2 + lVar5);
              puVar4 = *(undefined8 **)(lVar3 + 0x10);
              if (puVar4 != (undefined8 *)0x0) {
                local_50 = *puVar4;
                FUN_14091c44c(param_2,&local_50);
              }
              puVar4 = *(undefined8 **)(lVar3 + 0x18);
              if (puVar4 != (undefined8 *)0x0) {
                local_50 = *puVar4;
                FUN_14091c44c(param_2,&local_50);
              }
              lVar5 = lVar5 + 8;
            } while ((longlong)(int)lVar1 * 8 != lVar5);
          }
          plVar7 = plVar7 + 2;
        } while (plVar7 != plVar8);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != local_60);
    plVar6 = (longlong *)*local_58;
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_1400020a8(plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14091c44c FUN_14091c44c body=103 status=ok
// SIG undefined FUN_14091c44c(void)

ulonglong FUN_14091c44c(longlong *param_1,longlong *param_2)

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
          goto LAB_14091c4a9;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14091d374(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_14091c4a9:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14091c4b4 FUN_14091c4b4 body=1873 status=ok
// SIG undefined FUN_14091c4b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14091c4b4(longlong param_1,longlong param_2,double *param_3,float param_4,float *param_5)

{
  double *pdVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined1 auStack_2c8 [32];
  double *local_2a8;
  undefined1 *local_2a0;
  double *local_298;
  float *local_290;
  undefined1 *local_288;
  double local_280;
  longlong local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [4];
  float local_1f4;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  undefined1 local_1d4 [4];
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  undefined1 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (((param_2 != 0) && (plVar3 = *(longlong **)(param_2 + 0x48), plVar3 != (longlong *)0x0)) &&
     (1 < *(byte *)((longlong)plVar3 + 0xc))) {
    dVar18 = (double)*param_5;
    dVar7 = (double)param_5[1];
    dVar8 = (double)param_5[2];
    local_280 = (double)param_5[3];
    local_188 = param_3[2];
    local_198 = *param_3;
    dStack_190 = param_3[1];
    local_1b8 = param_3[4];
    dStack_1b0 = param_3[5];
    local_1a8 = param_3[6];
    dStack_1a0 = param_3[7];
    local_108 = 0;
    lVar4 = *plVar3;
    lVar12 = (longlong)(int)plVar3[1];
    local_168 = *(double *)(*(longlong *)(lVar4 + 0x28) + 0x10 + lVar12 * 0x18);
    pdVar1 = (double *)(*(longlong *)(lVar4 + 0x28) + lVar12 * 0x18);
    local_178 = *pdVar1;
    dStack_170 = pdVar1[1];
    lVar5 = *(longlong *)(lVar4 + 0x48);
    lVar14 = lVar12 * 0x10;
    local_140 = (double)*(float *)(lVar5 + 0xc + lVar14);
    local_148 = (double)*(float *)(lVar5 + 8 + lVar14);
    local_150 = (double)*(float *)(lVar5 + 4 + lVar14);
    dVar16 = (double)*(float *)(lVar5 + lVar14);
    lVar5 = *(longlong *)(lVar4 + 0x290);
    lVar12 = lVar12 * 0xc;
    local_120 = (double)*(float *)(lVar5 + lVar12);
    local_118 = (double)*(float *)(lVar5 + 4 + lVar12);
    local_110 = (double)*(float *)(lVar5 + 8 + lVar12);
    lVar4 = *(longlong *)(lVar4 + 0x278);
    local_138 = (double)*(float *)(lVar4 + lVar12);
    local_130 = (double)*(float *)(lVar4 + 4 + lVar12);
    local_128 = (double)*(float *)(lVar4 + 8 + lVar12);
    local_288 = local_1f8;
    local_290 = &local_1f4;
    local_298 = &local_1f0;
    local_2a0 = local_1d4;
    local_2a8 = &local_1d0;
    local_278 = param_1;
    local_158 = dVar16;
    FUN_14091cfc4(&local_178,&local_158,&local_198,&local_1b8);
    dVar10 = local_140;
    dVar9 = local_148;
    dVar20 = local_150;
    dVar15 = (double)param_4;
    dVar11 = (double)local_1f4;
    local_240 = (local_188 - local_168) * dVar8 + local_168;
    local_248 = (dStack_190 - dStack_170) * dVar8 + dStack_170;
    local_258 = dStack_1b0;
    local_228._8_4_ = unaff_XMM8_Dc;
    local_228._0_8_ = dVar16;
    local_228._12_4_ = unaff_XMM8_Dd;
    local_250 = local_1b8;
    local_260 = local_1a8;
    local_268 = dStack_1a0;
    dVar16 = local_140 * dStack_1a0 +
             local_148 * local_1a8 + dVar16 * local_1b8 + local_150 * dStack_1b0;
    local_218._0_8_ = (local_198 - local_178) * dVar8 + local_178;
    dVar17 = dVar16 * (double)(&DAT_149931160)[0.0 <= dVar16];
    dVar19 = 1.0 - local_280;
    dVar24 = (double)(&DAT_149931160)[0.0 <= dVar16] * local_280;
    local_280 = local_1c0 * dVar18 * dVar15 + param_3[10];
    local_230 = local_1c8 * dVar18 * dVar15 + param_3[9];
    local_270 = dVar18 * local_1d0 * dVar15 + param_3[8];
    local_238 = local_1e0 * dVar11 * dVar7 * dVar15 + param_3[0xd];
    dVar16 = param_3[0xc];
    dVar8 = param_3[0xb];
    if (dVar17 < 0.9999) {
      dVar18 = dVar17;
      if (1.0 <= dVar17) {
        dVar18 = 1.0;
      }
      dVar18 = acos((double)(-(ulonglong)(dVar17 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar17 < -1.0) & (ulonglong)dVar18));
      dVar17 = sin(dVar18);
      dVar19 = sin(dVar19 * dVar18);
      dVar19 = dVar19 * (1.0 / dVar17);
      dVar24 = sin(dVar24 * dVar18);
      dVar24 = dVar24 * (1.0 / dVar17);
    }
    dVar10 = dVar10 * dVar19 + local_268 * dVar24;
    dVar9 = dVar9 * dVar19 + local_260 * dVar24;
    dVar18 = dVar20 * dVar19 + local_258 * dVar24;
    dVar19 = (double)local_228._0_8_ * dVar19 + local_250 * dVar24;
    dVar20 = dVar9 * dVar9 + dVar19 * dVar19;
    dVar17 = dVar10 * dVar10 + dVar18 * dVar18;
    auVar21._0_8_ = dVar20 + dVar17;
    auVar21._8_8_ = dVar20 + dVar17;
    auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
    auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
    auVar22 = sqrtpd(auVar21,auVar21);
    auVar22 = divpd(_DAT_149934d80,auVar22);
    auVar23._0_8_ = auVar22._0_8_ * dVar9;
    auVar23._8_8_ = auVar22._8_8_ * dVar10;
    uVar6 = (ulonglong)(dVar18 * auVar22._8_8_) &
            -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
    auVar25 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar23,auVar25);
    local_218._8_8_ = local_248;
    local_208._0_8_ = local_240;
    FUN_14091cc6a(param_2,local_218,1);
    plVar3 = *(longlong **)(param_2 + 0x48);
    if ((plVar3 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar3 + 0xc))) {
      lVar5 = plVar3[1];
      lVar4 = *(longlong *)(*plVar3 + 0x530);
      *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)lVar5 * 0x18) = local_208._0_8_;
      pdVar1 = (double *)(lVar4 + (longlong)(int)lVar5 * 0x18);
      *pdVar1 = (double)local_218._0_8_;
      pdVar1[1] = (double)local_218._8_8_;
    }
    local_218._8_4_ = (int)uVar6;
    local_218._0_8_ =
         (ulonglong)(dVar19 * auVar22._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
    local_218._12_4_ = (int)(uVar6 >> 0x20);
    local_208 = auVar25;
    FUN_14091cc06(param_2,local_218,1);
    local_218._0_8_ = local_270;
    local_218._8_8_ = local_230;
    local_208._0_8_ = local_280;
    FUN_14091cdb4(param_2,local_218,1);
    local_218._8_8_ = (local_1e8 * dVar11 * dVar7 * dVar15 + dVar16) * 0.01745329238474369;
    local_218._0_8_ = (dVar11 * local_1f0 * dVar7 * dVar15 + dVar8) * 0.01745329238474369;
    local_208._0_8_ = local_238 * 0.01745329238474369;
    FUN_14091ceac(param_2,local_218,1);
    if (((ulonglong)param_3[0xe] & 1) != 0) {
      plVar3 = *(longlong **)(param_2 + 0x48);
      bVar2 = *(byte *)((longlong)plVar3 + 0xc);
      if ((((plVar3 == (longlong *)0x0) || (bVar2 == 0)) ||
          ((1 < bVar2 &&
           (*(char *)(*(longlong *)(*plVar3 + 0x2c0) + 0xb + (longlong)(int)plVar3[1] * 0x10) !=
            '\x02')))) && (*(longlong *)(local_278 + 0x18) != 0)) {
        plVar13 = (longlong *)0x0;
        if (1 < bVar2) {
          plVar13 = plVar3;
        }
        FUN_1400d2fee(*(undefined8 *)(*(longlong *)(local_278 + 0x18) + 0x9c8),plVar13,1);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14091cc06 FUN_14091cc06 body=99 status=ok
// SIG undefined FUN_14091cc06(void)

void FUN_14091cc06(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_14091cd02();
  plVar4 = *(longlong **)(param_1 + 0x48);
  if ((plVar4 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar4 + 0xc))) {
    dVar1 = param_2[3];
    dVar2 = param_2[2];
    dVar3 = param_2[1];
    lVar5 = *(longlong *)(*plVar4 + 0x548);
    lVar6 = (longlong)(int)plVar4[1] * 0x10;
    *(float *)(lVar5 + lVar6) = (float)*param_2;
    *(float *)(lVar5 + 4 + lVar6) = (float)dVar3;
    *(float *)(lVar5 + 8 + lVar6) = (float)dVar2;
    *(float *)(lVar5 + 0xc + lVar6) = (float)dVar1;
  }
  return;
}



// FUNCTION 14091cc6a FUN_14091cc6a body=151 status=ok
// SIG undefined FUN_14091cc6a(void)

void FUN_14091cc6a(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0);
  if (lVar2 != 0) {
    FUN_14093365e(lVar2,*(undefined8 *)(param_1 + 0x48));
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  if ((((param_3 != '\0') && (plVar3 != (longlong *)0x0)) && (1 < *(byte *)((longlong)plVar3 + 0xc))
      ) && (*(char *)(*(longlong *)(*plVar3 + 0x2c0) + 0xb + (longlong)(int)plVar3[1] * 0x10) ==
            '\x01')) {
    FUN_14091cfa4(param_1,plVar3,4,1,1);
  }
  lVar5 = plVar3[1];
  lVar2 = *(longlong *)(*plVar3 + 0x28);
  *(undefined8 *)(lVar2 + 0x10 + (longlong)(int)lVar5 * 0x18) = param_2[2];
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(lVar2 + (longlong)(int)lVar5 * 0x18);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  return;
}



// FUNCTION 14091cd02 FUN_14091cd02 body=177 status=ok
// SIG undefined FUN_14091cd02(void)

void FUN_14091cd02(longlong param_1,double *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0);
  if (lVar4 != 0) {
    FUN_14093365e(lVar4,*(undefined8 *)(param_1 + 0x48));
  }
  plVar5 = *(longlong **)(param_1 + 0x48);
  if ((((param_3 != '\0') && (plVar5 != (longlong *)0x0)) && (1 < *(byte *)((longlong)plVar5 + 0xc))
      ) && (*(char *)(*(longlong *)(*plVar5 + 0x2c0) + 0xb + (longlong)(int)plVar5[1] * 0x10) ==
            '\x01')) {
    FUN_14091cfa4(param_1,plVar5,4,1,1);
  }
  dVar1 = param_2[3];
  dVar2 = param_2[2];
  dVar3 = param_2[1];
  lVar4 = *(longlong *)(*plVar5 + 0x48);
  lVar6 = (longlong)(int)plVar5[1] * 0x10;
  *(float *)(lVar4 + lVar6) = (float)*param_2;
  *(float *)(lVar4 + 4 + lVar6) = (float)dVar3;
  *(float *)(lVar4 + 8 + lVar6) = (float)dVar2;
  *(float *)(lVar4 + 0xc + lVar6) = (float)dVar1;
  return;
}



// FUNCTION 14091cdb4 FUN_14091cdb4 body=248 status=ok
// SIG undefined FUN_14091cdb4(void)

void FUN_14091cdb4(longlong param_1,double *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0);
  if (lVar4 != 0) {
    FUN_14093365e(lVar4,*(undefined8 *)(param_1 + 0x48));
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  if ((plVar3 != (longlong *)0x0) && (*(byte *)((longlong)plVar3 + 0xc) != 0)) {
    lVar4 = *plVar3;
    if (((1 < *(byte *)((longlong)plVar3 + 0xc)) &&
        ((param_3 != '\0' &&
         (*(char *)(*(longlong *)(lVar4 + 0x2c0) + 0xb + (longlong)(int)plVar3[1] * 0x10) == '\x01')
         ))) && ((9.999999747378752e-05 < ABS(*param_2) ||
                 ((9.999999747378752e-05 < ABS(param_2[1]) ||
                  (9.999999747378752e-05 < ABS(param_2[2]))))))) {
      FUN_14091cfa4(param_1,plVar3,4,1,1);
      lVar4 = *plVar3;
    }
    dVar1 = param_2[2];
    lVar5 = (longlong)(int)plVar3[1];
    dVar2 = param_2[1];
    lVar4 = *(longlong *)(lVar4 + 0x278);
    *(float *)(lVar4 + lVar5 * 0xc) = (float)*param_2;
    *(float *)(lVar4 + 4 + lVar5 * 0xc) = (float)dVar2;
    *(float *)(lVar4 + 8 + lVar5 * 0xc) = (float)dVar1;
  }
  return;
}



// FUNCTION 14091ceac FUN_14091ceac body=248 status=ok
// SIG undefined FUN_14091ceac(void)

void FUN_14091ceac(longlong param_1,double *param_2,char param_3)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1c0);
  if (lVar4 != 0) {
    FUN_14093365e(lVar4,*(undefined8 *)(param_1 + 0x48));
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  if ((plVar3 != (longlong *)0x0) && (*(byte *)((longlong)plVar3 + 0xc) != 0)) {
    lVar4 = *plVar3;
    if (((1 < *(byte *)((longlong)plVar3 + 0xc)) &&
        ((param_3 != '\0' &&
         (*(char *)(*(longlong *)(lVar4 + 0x2c0) + 0xb + (longlong)(int)plVar3[1] * 0x10) == '\x01')
         ))) && ((9.999999747378752e-05 < ABS(*param_2) ||
                 ((9.999999747378752e-05 < ABS(param_2[1]) ||
                  (9.999999747378752e-05 < ABS(param_2[2]))))))) {
      FUN_14091cfa4(param_1,plVar3,4,1,1);
      lVar4 = *plVar3;
    }
    dVar1 = param_2[2];
    lVar5 = (longlong)(int)plVar3[1];
    dVar2 = param_2[1];
    lVar4 = *(longlong *)(lVar4 + 0x290);
    *(float *)(lVar4 + lVar5 * 0xc) = (float)*param_2;
    *(float *)(lVar4 + 4 + lVar5 * 0xc) = (float)dVar2;
    *(float *)(lVar4 + 8 + lVar5 * 0xc) = (float)dVar1;
  }
  return;
}



// FUNCTION 14091cfa4 FUN_14091cfa4 body=32 status=ok
// SIG undefined FUN_14091cfa4(void)

void FUN_14091cfa4(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400d2fee(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x9c8));
    return;
  }
  FUN_1403f44de(*param_2,*(undefined4 *)(param_2 + 1));
  return;
}



// FUNCTION 14091cfc4 FUN_14091cfc4 body=589 status=ok
// SIG undefined FUN_14091cfc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14091cfc4(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  float *param_6,undefined1 (*param_7) [16],float *param_8,float *param_9)

{
  double dVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  double dVar3;
  
  dVar11 = param_3[2] - param_1[2];
  dVar16 = param_3[1] - param_1[1];
  dVar13 = *param_3 - *param_1;
  *param_5 = dVar13;
  param_5[1] = dVar16;
  param_5[2] = dVar11;
  *param_6 = (float)SQRT(dVar11 * dVar11 + dVar13 * dVar13 + dVar16 * dVar16);
  dVar8 = *param_2;
  dVar9 = param_2[1];
  dVar4 = param_2[2] * -1.0;
  dVar6 = param_2[3] * 1.0;
  dVar13 = param_4[3];
  dVar11 = param_4[3];
  dVar16 = param_4[1];
  dVar1 = param_4[1];
  dVar2 = param_4[2];
  dVar3 = param_4[2];
  dVar5 = (dVar4 * dVar16 + (*param_4 * dVar6 * 1.0 - dVar13 * dVar8)) - dVar9 * dVar2 * -1.0;
  dVar7 = (dVar6 * dVar1 + (*param_4 * dVar4 * -1.0 - dVar11 * dVar9)) - dVar8 * dVar3 * 1.0;
  dVar13 = dVar6 * dVar2 * 1.0 + dVar8 * dVar16 + (dVar4 * dVar13 - *param_4 * dVar9 * 1.0);
  dVar11 = dVar4 * dVar3 * -1.0 + dVar9 * dVar1 + (dVar6 * dVar11 - *param_4 * dVar8 * -1.0);
  dVar16 = dVar11;
  if (1.0 <= dVar11) {
    dVar16 = 1.0;
  }
  dVar11 = acos((double)(-(ulonglong)(dVar11 < -1.0) & 0xbff0000000000000 |
                        ~-(ulonglong)(dVar11 < -1.0) & (ulonglong)dVar16));
  *param_8 = (float)(dVar11 + dVar11);
  dVar11 = dVar13 * dVar13 + dVar5 * dVar5;
  dVar16 = dVar7 * dVar7 + 0.0;
  auVar14._0_8_ = dVar11 + dVar16;
  auVar14._8_8_ = dVar11 + dVar16;
  auVar12._8_8_ = -(ulonglong)(1e-08 <= auVar14._8_8_);
  auVar12._0_8_ = -(ulonglong)(1e-08 <= auVar14._0_8_);
  auVar15 = sqrtpd(auVar14,auVar14);
  auVar17 = divpd(_DAT_149934d80,auVar15);
  dVar7 = dVar7 * auVar17._8_8_;
  auVar15._8_4_ = SUB84(dVar7,0);
  auVar15._0_8_ = dVar5 * auVar17._0_8_;
  auVar15._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar15 = blendvpd(ZEXT816(0x3ff0000000000000),auVar15,auVar12);
  if ((-(ulonglong)(1e-08 <= auVar14._0_8_) & 1) == 0) {
    dVar13 = 0.0;
  }
  else {
    dVar13 = dVar13 * auVar17._0_8_;
  }
  *param_7 = auVar15;
  *(double *)param_7[1] = dVar13;
  for (fVar10 = *param_8; 3.1415927 < fVar10; fVar10 = fVar10 + -6.2831855) {
  }
  for (; fVar10 < -3.1415927; fVar10 = fVar10 + 6.2831855) {
  }
  *param_8 = fVar10 * 57.295776;
  *param_9 = ABS(fVar10 * 57.295776);
  return;
}



// FUNCTION 14091d212 FUN_14091d212 body=353 status=ok
// SIG undefined FUN_14091d212(void)

void FUN_14091d212(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14091d297;
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
LAB_14091d297:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14091d374 FUN_14091d374 body=353 status=ok
// SIG undefined FUN_14091d374(void)

void FUN_14091d374(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14091d3f9;
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
LAB_14091d3f9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14091d4d6 FUN_14091d4d6 body=1711 status=ok
// SIG undefined FUN_14091d4d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14091d4d6(longlong param_1,undefined8 param_2,int param_3,undefined1 param_4,
                  double *param_5,double *param_6,double *param_7,double *param_8,char param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  double *pdVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auStack_1f8 [32];
  double *local_1d8;
  ulonglong *local_1d0;
  double *local_1c8;
  double *local_1c0;
  undefined1 local_1b8;
  undefined1 local_1ae;
  char local_1ad;
  int local_1ac;
  uint local_1a8;
  float local_1a4;
  double *local_1a0;
  longlong local_198;
  double *local_190;
  double *local_188;
  double *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_160;
  double local_158;
  double local_150;
  ulonglong local_148;
  ulonglong uStack_140;
  undefined1 local_138 [16];
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_1ad = param_9;
  local_180 = param_8;
  local_188 = param_7;
  local_1a0 = param_6;
  local_190 = param_5;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_1ae = param_4;
  local_1ac = param_3;
  if (DAT_14c75f3ec != 0) {
    uVar15 = 0xffffffff;
    lVar11 = FUN_1447fdeae(param_1,param_1 + 0x298,param_2);
    if (*(int *)(lVar11 + 0xe4) != 0) {
      iVar10 = *(int *)(lVar11 + 0xe0);
      if (iVar10 == 0) {
        iVar10 = *(int *)(lVar11 + 0xf8);
      }
      lVar6 = *(longlong *)(lVar11 + 0xf0);
      iVar10 = *(int *)(lVar6 + -4 + (longlong)iVar10 * 8);
      iVar13 = iVar10 * 4 >> 2;
      iVar14 = local_1ac - iVar13;
      if ((1 < iVar14) && (iVar14 <= DAT_14c75f3ec)) {
        iVar9 = FUN_1408fb584(lVar11 + 0xe0,iVar10);
        if (iVar9 == -1) {
          pdVar16 = (double *)0x0;
        }
        else {
          pdVar16 = (double *)
                    ((longlong)*(int *)(lVar6 + (longlong)iVar9 * 8) * 0x30 +
                    *(longlong *)(param_1 + 0x18));
        }
        iVar9 = FUN_1408fb60a(lVar11 + 0x100,iVar10);
        if (iVar9 == -1) {
          pfVar12 = (float *)0x0;
        }
        else {
          pfVar12 = (float *)((longlong)
                              *(int *)(*(longlong *)(lVar11 + 0x110) + (longlong)iVar9 * 8) * 0x18 +
                             *(longlong *)(param_1 + 0x38));
        }
        iVar10 = FUN_1408fb690(lVar11 + 0x120,iVar10);
        if ((((iVar10 != -1) && (pdVar16 != (double *)0x0)) && (pfVar12 != (float *)0x0)) &&
           (lVar11 = (longlong)*(int *)(*(longlong *)(lVar11 + 0x130) + (longlong)iVar10 * 8) * 0x2c
                     + *(longlong *)(param_1 + 0x78), lVar11 != 0)) {
          fVar28 = 1.0 / (float)iVar14;
          iVar10 = 1;
          local_178 = 0;
          uStack_170 = 0x3ff0000000000000;
          do {
            pdVar8 = local_1a0;
            if (local_1ad == '\0') {
              uVar15 = 0;
            }
            else {
              uVar15 = CONCAT71((int7)(uVar15 >> 8),*(char *)(lVar11 + 0x1c) == '\x01');
            }
            dVar7 = (double)((float)iVar10 * fVar28);
            local_f8 = (local_180[2] - (double)pfVar12[5]) * dVar7 + (double)pfVar12[5];
            local_100 = (local_180[1] - (double)pfVar12[4]) * dVar7 + (double)pfVar12[4];
            local_108 = (*local_180 - (double)pfVar12[3]) * dVar7 + (double)pfVar12[3];
            local_110 = (local_188[2] - (double)pfVar12[2]) * dVar7 + (double)pfVar12[2];
            local_118 = (local_188[1] - (double)pfVar12[1]) * dVar7 + (double)pfVar12[1];
            local_120 = (*local_188 - (double)*pfVar12) * dVar7 + (double)*pfVar12;
            fVar1 = *(float *)((longlong)pdVar16 + 0x2c);
            fVar2 = *(float *)(pdVar16 + 5);
            fVar3 = *(float *)((longlong)pdVar16 + 0x24);
            fVar4 = *(float *)(pdVar16 + 4);
            dVar20 = *local_1a0;
            dVar17 = local_1a0[1];
            uVar23 = SUB84(dVar17,0);
            uVar24 = (undefined4)((ulonglong)dVar17 >> 0x20);
            dVar5 = local_1a0[2];
            dVar19 = local_1a0[3];
            dVar17 = (double)fVar1 * dVar19 +
                     (double)fVar2 * dVar5 + (double)fVar4 * dVar20 + dVar17 * (double)fVar3;
            dVar18 = dVar17 * (double)(&DAT_149931160)[0.0 <= dVar17];
            dVar21 = 1.0 - dVar7;
            dVar17 = (double)(&DAT_149931160)[0.0 <= dVar17] * dVar7;
            if (dVar18 < 0.9999) {
              dVar19 = dVar18;
              if (1.0 <= dVar18) {
                dVar19 = 1.0;
              }
              local_1a8 = (uint)uVar15;
              local_198 = lVar11;
              dVar19 = acos((double)(-(ulonglong)(dVar18 < -1.0) & 0xbff0000000000000 |
                                    ~-(ulonglong)(dVar18 < -1.0) & (ulonglong)dVar19));
              local_1a4 = fVar28;
              dVar20 = sin(dVar19);
              dVar21 = sin(dVar21 * dVar19);
              fVar28 = local_1a4;
              dVar21 = dVar21 * (1.0 / dVar20);
              dVar17 = sin(dVar17 * dVar19);
              uVar15 = (ulonglong)local_1a8;
              dVar17 = dVar17 * (1.0 / dVar20);
              dVar19 = pdVar8[3];
              dVar5 = pdVar8[2];
              dVar20 = *pdVar8;
              uVar23 = SUB84(pdVar8[1],0);
              uVar24 = (undefined4)((ulonglong)pdVar8[1] >> 0x20);
              lVar11 = local_198;
            }
            dVar19 = (double)fVar1 * dVar21 + dVar19 * dVar17;
            dVar5 = (double)fVar2 * dVar21 + dVar5 * dVar17;
            dVar18 = (double)fVar3 * dVar21 + (double)CONCAT44(uVar24,uVar23) * dVar17;
            dVar17 = (double)fVar4 * dVar21 + dVar20 * dVar17;
            dVar20 = dVar5 * dVar5 + dVar17 * dVar17;
            dVar21 = dVar19 * dVar19 + dVar18 * dVar18;
            auVar25._0_8_ = dVar20 + dVar21;
            auVar25._8_8_ = dVar20 + dVar21;
            auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
            auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
            auVar26 = sqrtpd(auVar25,auVar25);
            auVar26 = divpd(_DAT_149934d80,auVar26);
            auVar27._0_8_ = auVar26._0_8_ * dVar5;
            auVar27._8_8_ = auVar26._8_8_ * dVar19;
            local_148 = (ulonglong)(dVar17 * auVar26._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
            uStack_140 = (ulonglong)(dVar18 * auVar26._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
            auVar26._8_8_ = uStack_170;
            auVar26._0_8_ = local_178;
            local_138 = blendvpd(auVar26,auVar27,auVar22);
            local_150 = (local_190[2] - pdVar16[2]) * dVar7 + pdVar16[2];
            local_158 = (local_190[1] - pdVar16[1]) * dVar7 + pdVar16[1];
            local_160 = (*local_190 - *pdVar16) * dVar7 + *pdVar16;
            local_1b8 = (undefined1)uVar15;
            local_1c0 = &local_108;
            local_1c8 = &local_120;
            local_1d0 = &local_148;
            local_1d8 = &local_160;
            uVar15 = uVar15 & 0xffffffffffffff00;
            FUN_14091db86(param_1,param_2,iVar13 + iVar10);
            iVar10 = iVar10 + 1;
          } while (iVar14 != iVar10);
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_14091db86(param_1,param_2,local_1ac,local_1ae);
  return;
}



// FUNCTION 14091db86 FUN_14091db86 body=1925 status=ok
// SIG undefined FUN_14091db86(void)

void FUN_14091db86(longlong param_1,longlong *param_2,uint param_3,byte param_4,undefined8 *param_5,
                  double *param_6,double *param_7,double *param_8,char param_9)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  char cVar17;
  int iVar18;
  undefined8 unaff_RBP;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined1 auStack_88 [44];
  uint local_5c;
  ulonglong local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x3e0) < *(int *)(param_1 + 0x3e4)) {
    uVar19 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),
                      *(char *)(*(longlong *)(*param_2 + 0x188) + (longlong)(int)param_2[1]) == '\0'
                     );
  }
  else {
    uVar19 = 0;
  }
  lVar9 = FUN_1447fdeae(param_1,param_1 + 0x298,param_2,0xffffffff);
  local_5c = (uint)(param_4 & 3);
  uVar16 = local_5c << 0x1e | param_3 & 0x3fffffff;
  local_58 = (ulonglong)param_3;
  if ((char)uVar19 == '\0') {
    uVar8 = *(uint *)(param_1 + 0x3f8);
    if ((int)*(uint *)(param_1 + 0x3f8) < (int)param_3) {
      uVar8 = param_3;
    }
    *(uint *)(param_1 + 0x3f8) = uVar8;
LAB_14091dc19:
    plVar23 = (longlong *)(param_1 + 0x18);
    iVar7 = FUN_1408fb584((int *)(lVar9 + 0xe0));
    if (iVar7 == -1) {
      local_50 = (uint)uVar19;
      plVar1 = (longlong *)(lVar9 + 0xf0);
      if (*(int *)(lVar9 + 0xe0) < *(int *)(lVar9 + 0xf8)) {
        iVar7 = *(int *)(*plVar1 + (longlong)*(int *)(lVar9 + 0xe0) * 8);
      }
      else {
        FUN_1403ee73e(plVar23);
        iVar7 = local_4c;
        iVar18 = *(int *)(lVar9 + 0xf8);
        uVar8 = iVar18 + 1;
        *(uint *)(lVar9 + 0xf8) = uVar8;
        if (*(uint *)(lVar9 + 0xfc) < uVar8) {
          FUN_1400e6b38(plVar1);
        }
        *(ulonglong *)(*plVar1 + (longlong)iVar18 * 8) = CONCAT44(uVar16,iVar7);
      }
      puVar10 = (undefined8 *)((longlong)iVar7 * 0x30 + *plVar23);
      iVar18 = *(int *)(lVar9 + 0xe4);
      if (0 < iVar18) {
        iVar13 = (int)local_58 * 4 >> 2;
        iVar15 = 0;
        iVar14 = *(int *)(lVar9 + 0xe0);
        do {
          iVar20 = iVar14;
          if (iVar14 < 1) {
            iVar20 = *(int *)(lVar9 + 0xf8);
          }
          lVar12 = *plVar1;
          uVar8 = *(uint *)(lVar12 + -4 + (longlong)iVar20 * 8);
          lVar22 = (longlong)iVar20 + -1;
          iVar18 = (int)(uVar8 * 4) >> 2;
          if ((iVar18 < iVar13) || (iVar18 == iVar13 && uVar8 >> 0x1e < local_5c)) {
            *(uint *)(lVar12 + 4 + (longlong)iVar14 * 8) = uVar16;
            *(int *)(*(longlong *)(lVar9 + 0xf0) + (longlong)iVar14 * 8) = iVar7;
            iVar18 = *(int *)(lVar9 + 0xe4);
            break;
          }
          *(undefined8 *)(lVar12 + (longlong)iVar14 * 8) = *(undefined8 *)(lVar12 + lVar22 * 8);
          iVar18 = *(int *)(lVar9 + 0xe4);
          if (iVar15 == iVar18 + -1) {
            *(uint *)(*(longlong *)(lVar9 + 0xf0) + 4 + lVar22 * 8) = uVar16;
            *(int *)(*(longlong *)(lVar9 + 0xf0) + lVar22 * 8) = iVar7;
            iVar18 = *(int *)(lVar9 + 0xe4);
          }
          iVar15 = iVar15 + 1;
          iVar14 = iVar20 + -1;
        } while (iVar15 < iVar18);
      }
      iVar7 = *(int *)(lVar9 + 0xe8);
      iVar13 = *(int *)(lVar9 + 0xe0) + 1;
      iVar14 = 0;
      if (iVar13 != iVar7) {
        iVar14 = iVar13;
      }
      *(int *)(lVar9 + 0xe0) = iVar14;
      iVar14 = iVar18 + 1;
      if (iVar7 <= iVar18 + 1) {
        iVar14 = iVar7;
      }
      *(int *)(lVar9 + 0xe4) = iVar14;
      uVar19 = (ulonglong)local_50;
    }
    else {
      puVar10 = (undefined8 *)
                ((longlong)*(int *)(*(longlong *)(lVar9 + 0xf0) + (longlong)iVar7 * 8) * 0x30 +
                *plVar23);
    }
    uVar5 = *param_5;
    uVar6 = param_5[1];
    puVar10[2] = param_5[2];
    *puVar10 = uVar5;
    puVar10[1] = uVar6;
    dVar2 = param_6[3];
    dVar3 = param_6[2];
    dVar4 = param_6[1];
    *(float *)(puVar10 + 4) = (float)*param_6;
    *(float *)((longlong)puVar10 + 0x24) = (float)dVar4;
    *(float *)(puVar10 + 5) = (float)dVar3;
    *(float *)((longlong)puVar10 + 0x2c) = (float)dVar2;
    param_3 = (uint)local_58;
    cVar17 = '\0';
    if ((char)uVar19 != '\0') goto LAB_14091e1a2;
LAB_14091dda8:
    iVar7 = FUN_1408fb60a((int *)(lVar9 + 0x100));
    if (iVar7 == -1) {
      plVar23 = (longlong *)(lVar9 + 0x110);
      if (*(int *)(lVar9 + 0x100) < *(int *)(lVar9 + 0x118)) {
        iVar7 = *(int *)(*plVar23 + (longlong)*(int *)(lVar9 + 0x100) * 8);
      }
      else {
        FUN_1400e6ab8(param_1 + 0x38);
        iVar7 = local_4c;
        iVar18 = *(int *)(lVar9 + 0x118);
        uVar8 = iVar18 + 1;
        *(uint *)(lVar9 + 0x118) = uVar8;
        if (*(uint *)(lVar9 + 0x11c) < uVar8) {
          FUN_1400e6b38(plVar23);
        }
        *(ulonglong *)(*plVar23 + (longlong)iVar18 * 8) = CONCAT44(uVar16,iVar7);
        param_3 = (uint)local_58;
      }
      pfVar11 = (float *)((longlong)iVar7 * 0x18 + *(longlong *)(param_1 + 0x38));
      iVar18 = *(int *)(lVar9 + 0x104);
      if (0 < iVar18) {
        iVar13 = (int)(param_3 * 4) >> 2;
        iVar15 = 0;
        iVar14 = *(int *)(lVar9 + 0x100);
        do {
          iVar20 = iVar14;
          if (iVar14 < 1) {
            iVar20 = *(int *)(lVar9 + 0x118);
          }
          lVar12 = *plVar23;
          uVar8 = *(uint *)(lVar12 + -4 + (longlong)iVar20 * 8);
          lVar22 = (longlong)iVar20 + -1;
          iVar18 = (int)(uVar8 * 4) >> 2;
          param_3 = (uint)local_58;
          if ((iVar18 < iVar13) || (iVar18 == iVar13 && uVar8 >> 0x1e < local_5c)) {
            *(uint *)(lVar12 + 4 + (longlong)iVar14 * 8) = uVar16;
            *(int *)(*(longlong *)(lVar9 + 0x110) + (longlong)iVar14 * 8) = iVar7;
            iVar18 = *(int *)(lVar9 + 0x104);
            break;
          }
          *(undefined8 *)(lVar12 + (longlong)iVar14 * 8) = *(undefined8 *)(lVar12 + lVar22 * 8);
          iVar18 = *(int *)(lVar9 + 0x104);
          if (iVar15 == iVar18 + -1) {
            *(uint *)(*(longlong *)(lVar9 + 0x110) + 4 + lVar22 * 8) = uVar16;
            *(int *)(*(longlong *)(lVar9 + 0x110) + lVar22 * 8) = iVar7;
            iVar18 = *(int *)(lVar9 + 0x104);
          }
          iVar15 = iVar15 + 1;
          iVar14 = iVar20 + -1;
        } while (iVar15 < iVar18);
      }
      iVar7 = *(int *)(lVar9 + 0x108);
      iVar13 = *(int *)(lVar9 + 0x100) + 1;
      iVar14 = 0;
      if (iVar13 != iVar7) {
        iVar14 = iVar13;
      }
      *(int *)(lVar9 + 0x100) = iVar14;
      iVar14 = iVar18 + 1;
      if (iVar7 <= iVar18 + 1) {
        iVar14 = iVar7;
      }
      *(int *)(lVar9 + 0x104) = iVar14;
    }
    else {
      pfVar11 = (float *)((longlong)*(int *)(*(longlong *)(lVar9 + 0x110) + (longlong)iVar7 * 8) *
                          0x18 + *(longlong *)(param_1 + 0x38));
    }
    dVar2 = param_7[2];
    dVar3 = param_7[1];
    *pfVar11 = (float)*param_7;
    pfVar11[1] = (float)dVar3;
    pfVar11[2] = (float)dVar2;
    dVar2 = param_8[2];
    dVar3 = param_8[1];
    pfVar11[3] = (float)*param_8;
    pfVar11[4] = (float)dVar3;
    pfVar11[5] = (float)dVar2;
    if (cVar17 != '\0') goto LAB_14091e1b9;
  }
  else {
    iVar7 = FUN_1408fb584(lVar9 + 0xe0,uVar16);
    if (iVar7 == -1) goto LAB_14091dc19;
LAB_14091e1a2:
    cVar17 = (char)uVar19;
    iVar7 = FUN_1408fb60a(lVar9 + 0x100,uVar16);
    if (iVar7 == -1) goto LAB_14091dda8;
LAB_14091e1b9:
    iVar7 = FUN_1408fb690(lVar9 + 0x120,uVar16);
    if (iVar7 != -1) goto LAB_14091e07f;
  }
  iVar7 = FUN_1408fb690((int *)(lVar9 + 0x120),uVar16);
  if (iVar7 == -1) {
    plVar23 = (longlong *)(lVar9 + 0x130);
    if (*(int *)(lVar9 + 0x120) < *(int *)(lVar9 + 0x138)) {
      local_4c = *(int *)(*plVar23 + (longlong)*(int *)(lVar9 + 0x120) * 8);
    }
    else {
      FUN_1400e6a40(param_1 + 0x78,&local_4c);
      iVar7 = *(int *)(lVar9 + 0x138);
      *(uint *)(lVar9 + 0x138) = iVar7 + 1U;
      if (*(uint *)(lVar9 + 0x13c) < iVar7 + 1U) {
        FUN_1400e6b38(plVar23,iVar7);
      }
      *(ulonglong *)(*plVar23 + (longlong)iVar7 * 8) = CONCAT44(uVar16,local_4c);
      param_3 = (uint)local_58;
    }
    lVar12 = (longlong)local_4c * 0x2c + *(longlong *)(param_1 + 0x78);
    iVar7 = *(int *)(lVar9 + 0x124);
    if (0 < iVar7) {
      iVar13 = (int)(param_3 << 2) >> 2;
      iVar14 = 0;
      iVar18 = *(int *)(lVar9 + 0x120);
      do {
        iVar15 = iVar18;
        if (iVar18 < 1) {
          iVar15 = *(int *)(lVar9 + 0x138);
        }
        lVar22 = *plVar23;
        uVar8 = *(uint *)(lVar22 + -4 + (longlong)iVar15 * 8);
        lVar21 = (longlong)iVar15 + -1;
        iVar7 = (int)(uVar8 * 4) >> 2;
        if ((iVar7 < iVar13) || (iVar7 == iVar13 && uVar8 >> 0x1e < local_5c)) {
          *(uint *)(lVar22 + 4 + (longlong)iVar18 * 8) = uVar16;
          *(int *)(*(longlong *)(lVar9 + 0x130) + (longlong)iVar18 * 8) = local_4c;
          iVar7 = *(int *)(lVar9 + 0x124);
          break;
        }
        *(undefined8 *)(lVar22 + (longlong)iVar18 * 8) = *(undefined8 *)(lVar22 + lVar21 * 8);
        iVar7 = *(int *)(lVar9 + 0x124);
        if (iVar14 == iVar7 + -1) {
          *(uint *)(*(longlong *)(lVar9 + 0x130) + 4 + lVar21 * 8) = uVar16;
          *(int *)(*(longlong *)(lVar9 + 0x130) + lVar21 * 8) = local_4c;
          iVar7 = *(int *)(lVar9 + 0x124);
        }
        iVar14 = iVar14 + 1;
        iVar18 = iVar15 + -1;
      } while (iVar14 < iVar7);
    }
    iVar18 = *(int *)(lVar9 + 0x128);
    iVar13 = *(int *)(lVar9 + 0x120) + 1;
    iVar14 = 0;
    if (iVar13 != iVar18) {
      iVar14 = iVar13;
    }
    *(int *)(lVar9 + 0x120) = iVar14;
    iVar14 = iVar7 + 1;
    if (iVar18 <= iVar7 + 1) {
      iVar14 = iVar18;
    }
    *(int *)(lVar9 + 0x124) = iVar14;
  }
  else {
    lVar12 = (longlong)*(int *)(*(longlong *)(lVar9 + 0x130) + (longlong)iVar7 * 8) * 0x2c +
             *(longlong *)(param_1 + 0x78);
  }
  *(char *)(lVar12 + 0x1c) = (param_9 == '\0') * '\x03' + '\x01';
  *(undefined1 *)(lVar12 + 0x29) = 0;
LAB_14091e07f:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14091e30c FUN_14091e30c body=6376 status=ok
// SIG undefined FUN_14091e30c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14091e30c(longlong param_1,longlong *param_2,double *param_3,float param_4)

{
  double dVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  double dVar5;
  ulonglong uVar6;
  undefined1 auVar7 [12];
  bool bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  byte *pbVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  undefined1 *puVar23;
  char *pcVar24;
  longlong lVar25;
  longlong lVar26;
  double *pdVar27;
  byte bVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar42 [12];
  undefined1 auVar43 [16];
  float fVar44;
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined1 auStack_2b8 [32];
  undefined1 local_298;
  undefined1 local_290;
  longlong local_288;
  double local_280;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  float local_234;
  double *local_230;
  double local_228;
  double local_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  float local_1ec;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  longlong local_1d0;
  longlong *local_1c8;
  undefined1 local_1c0;
  undefined1 local_1bf;
  float local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  undefined4 local_188;
  double local_178;
  double dStack_170;
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  undefined1 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar13 = 1;
  if (DAT_14caf8380 != '\0') goto LAB_14091eec2;
  if (-1 < *(int *)((longlong)param_3 + 0x124)) goto LAB_14091eec0;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) goto LAB_14091eec2;
  if ((DAT_14c761868 == '\x01') && ((longlong)*(int *)(param_1 + 0x428) != 0)) {
    lVar25 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x420) + lVar25) == (int)param_2[2]) {
        iVar14 = *(int *)((longlong)param_3 + 0x8c) + *(int *)(lVar4 + 0x268);
        *(int *)((longlong)param_3 + 0x124) = iVar14;
        *(bool *)(param_3 + 0x23) = -1 < iVar14;
        *(undefined1 *)((longlong)param_3 + 0x9d) = 2;
        goto LAB_14091eec0;
      }
      lVar25 = lVar25 + 4;
    } while ((longlong)*(int *)(param_1 + 0x428) * 4 != lVar25);
  }
  cVar2 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10);
  local_1bf = cVar2 == '\x01';
  if ((bool)local_1bf) {
    fVar44 = *(float *)((longlong)param_3 + 0x11c) + param_4;
  }
  else {
    fVar44 = 0.0;
  }
  *(float *)((longlong)param_3 + 0x11c) = fVar44;
  local_1c0 = cVar2 == '\x04' || (bool)local_1bf;
  local_1d0 = lVar4;
  local_1c8 = param_2;
  local_1bc = param_4;
  if ((DAT_14c761894 != '\0') ||
     (param_3[10] * param_3[10] + param_3[8] * param_3[8] + param_3[9] * param_3[9] <
      9.999999747378752e-05)) {
    lVar12 = (longlong)(int)param_2[1];
    lVar25 = *(longlong *)(*param_2 + 0x28);
    dVar30 = param_3[0x16] - *(double *)(lVar25 + 0x10 + lVar12 * 0x18);
    dVar35 = param_3[0x15] - *(double *)(lVar25 + 8 + lVar12 * 0x18);
    dVar40 = param_3[0x14] - *(double *)(lVar25 + lVar12 * 0x18);
    if ((double)_DAT_14c76188c <= dVar30 * dVar30 + dVar40 * dVar40 + dVar35 * dVar35)
    goto LAB_14091e4bf;
    lVar25 = *(longlong *)(*param_2 + 0x48);
    lVar12 = lVar12 * 0x10;
    dVar35 = ((double)*(float *)(lVar25 + 4 + lVar12) * param_3[5] +
             (double)*(float *)(lVar25 + 0xc + lVar12) * 1.0 * param_3[7] +
             (double)*(float *)(lVar25 + lVar12) * param_3[4]) -
             (double)*(float *)(lVar25 + 8 + lVar12) * -1.0 * param_3[6];
    dVar30 = dVar35;
    if (1.0 <= dVar35) {
      dVar30 = 1.0;
    }
    dVar30 = acos((double)(-(ulonglong)(dVar35 < -1.0) & 0xbff0000000000000 |
                          ~-(ulonglong)(dVar35 < -1.0) & (ulonglong)dVar30));
    for (fVar44 = (float)(dVar30 + dVar30); 3.1415927 < fVar44; fVar44 = fVar44 + -6.2831855) {
    }
    for (; fVar44 < -3.1415927; fVar44 = fVar44 + 6.2831855) {
    }
    if (DAT_14c761890 <= ABS(fVar44 * 57.295776)) {
      bVar8 = true;
      goto LAB_14091e4c2;
    }
    dVar30 = param_3[0xe];
    if (((ulonglong)dVar30 & 1) == 0) {
      if (((ulonglong)dVar30 & 4) != 0) goto LAB_14091f075;
LAB_14091f023:
      uVar13 = 1;
      if (DAT_14caf8398 != 1) goto LAB_14091eec2;
    }
    else {
      if (((cVar2 == '\x04') || (cVar2 == '\x01')) &&
         (FUN_1400d2fee(*(undefined8 *)(lVar4 + 0x9c8),param_2,1), DAT_14c761896 == '\x01')) {
        FUN_145757d84(*(undefined8 *)(lVar4 + 0x9c8),param_2);
      }
      if ((((ulonglong)dVar30 & 4) == 0) ||
         (_DAT_14c76189c <= *(float *)((longlong)param_3 + 0x11c))) goto LAB_14091f023;
LAB_14091f075:
      if ((((DAT_14caf8398 & 1) == 0) && (cVar2 != '\x01')) && (uVar13 = 1, cVar2 != '\x04'))
      goto LAB_14091eec2;
    }
    if (*(char *)(param_3 + 0x24) != '\x01') goto LAB_14091eec0;
    iVar11 = (int)ROUND(-0.5 - (DAT_14c761874 / param_4 + DAT_14c761874 / param_4)) >> 1;
    iVar14 = (int)ROUND(-0.5 - (*(float *)(param_3 + 0x13) * _DAT_14c761870 +
                               *(float *)(param_3 + 0x13) * _DAT_14c761870)) >> 1;
    if (iVar11 < iVar14) {
      iVar14 = iVar11;
    }
    if (-iVar14 < *(int *)((longlong)param_3 + 0x84)) goto LAB_14091ee80;
LAB_14091eebb:
    FUN_14091c140(param_3,1);
  }
  else {
LAB_14091e4bf:
    bVar8 = false;
LAB_14091e4c2:
    if (*(int *)((longlong)param_3 + 0x94) == 0) {
      fVar44 = *(float *)(param_3 + 0x13);
    }
    else {
      fVar29 = (float)*(int *)((longlong)param_3 + 0x94);
      fVar44 = 1.0 / (DAT_14c76186c * fVar29);
      if (1.0 <= fVar44) {
        fVar44 = 1.0;
      }
      if (fVar44 <= 0.0) {
        fVar44 = 0.0;
      }
      fVar44 = (fVar29 - *(float *)(param_3 + 0x13)) * fVar44 + *(float *)(param_3 + 0x13);
    }
    *(float *)(param_3 + 0x13) = fVar44;
    bVar9 = DAT_14c761895;
    local_108 = 0;
    lVar25 = *param_2;
    lVar15 = (longlong)(int)param_2[1];
    pdVar27 = (double *)(*(longlong *)(lVar25 + 0x28) + lVar15 * 0x18);
    local_178 = *pdVar27;
    dStack_170 = pdVar27[1];
    local_168 = *(double *)(*(longlong *)(lVar25 + 0x28) + 0x10 + lVar15 * 0x18);
    lVar12 = *(longlong *)(lVar25 + 0x48);
    lVar26 = lVar15 * 0x10;
    dStack_140 = (double)*(float *)(lVar12 + 0xc + lVar26);
    local_148 = (double)*(float *)(lVar12 + 8 + lVar26);
    dStack_150 = (double)*(float *)(lVar12 + 4 + lVar26);
    local_158 = (double)*(float *)(lVar12 + lVar26);
    lVar12 = *(longlong *)(lVar25 + 0x278);
    lVar15 = lVar15 * 0xc;
    local_228 = (double)*(float *)(lVar12 + 8 + lVar15);
    local_220 = (double)*(float *)(lVar12 + 4 + lVar15);
    local_280 = (double)*(float *)(lVar12 + lVar15);
    lVar25 = *(longlong *)(lVar25 + 0x290);
    local_240 = (double)*(float *)(lVar25 + 8 + lVar15);
    local_268 = (double)*(float *)(lVar25 + 4 + lVar15);
    local_260 = (double)*(float *)(lVar25 + lVar15);
    dVar30 = param_3[8];
    dVar35 = param_3[9];
    dVar40 = param_3[10];
    local_270 = param_3[0xd] * 0.01745329238474369;
    dVar45 = param_3[0xc] * 0.01745329238474369;
    dVar46 = param_3[0xb] * 0.01745329238474369;
    bVar28 = DAT_14c761895 ^ 1;
    if ((DAT_14caf8220 != '\0') ||
       ((SQRT(dVar40 * dVar40 + dVar30 * dVar30 + dVar35 * dVar35) < (double)_DAT_14c761884 &&
        (SQRT(local_270 * local_270 + dVar46 * dVar46 + dVar45 * dVar45) < (double)_DAT_14c761888)))
       ) {
      dVar1 = param_3[0x21];
      dVar5 = (double)param_4;
      dVar31 = param_3[0x1f];
      dVar32 = param_3[0x20];
      dVar36 = dVar1 * dVar1 + dVar31 * dVar31 + dVar32 * dVar32;
      if (((dVar36 != 1.0) || (dVar52 = dVar32, dVar41 = dVar1, dVar37 = dVar31, NAN(dVar36))) &&
         (dVar52 = DAT_14c8464e8, dVar41 = DAT_14c8464f0, dVar37 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar36)) {
        dVar36 = 1.0 / SQRT(dVar36);
        dVar52 = dVar32 * dVar36;
        dVar41 = dVar1 * dVar36;
        dVar37 = dVar31 * dVar36;
      }
      fVar29 = (float)((dStack_170 - param_3[0x1d]) * dVar52 + (local_178 - param_3[0x1c]) * dVar37
                      + (local_168 - param_3[0x1e]) * dVar41) /
               (float)SQRT(dVar1 * dVar5 * dVar1 * dVar5 +
                           dVar5 * dVar31 * dVar5 * dVar31 + dVar32 * dVar5 * dVar32 * dVar5);
      if (1.0 <= fVar29) {
        fVar29 = 1.0;
      }
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      fVar58 = *(float *)(param_3 + 0x10);
      if (fVar29 < DAT_14c761878) {
        fVar58 = fVar58 + param_4;
        *(float *)(param_3 + 0x10) = fVar58;
        bVar28 = 1;
      }
      else if (0.0 < fVar58) {
        fVar58 = fVar58 - DAT_14c76187c * param_4;
        if (fVar58 <= 0.0) {
          fVar58 = 0.0;
        }
        *(float *)(param_3 + 0x10) = fVar58;
        bVar28 = 1;
      }
    }
    else {
      *(undefined4 *)(param_3 + 0x10) = 0;
      fVar58 = 0.0;
    }
    dVar1 = *param_3;
    uVar56 = SUB84(dVar1,0);
    uVar57 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar31 = param_3[1];
    uVar60 = SUB84(dVar31,0);
    uVar61 = (undefined4)((ulonglong)dVar31 >> 0x20);
    dVar32 = param_3[2];
    uVar54 = SUB84(dVar32,0);
    uVar55 = (undefined4)((ulonglong)dVar32 >> 0x20);
    local_208 = param_3[4];
    dStack_200 = param_3[5];
    pbVar16 = &DAT_14cafa565;
    if ((*(byte *)(param_1 + 0x160) & 1) != 0) {
      pbVar16 = (byte *)(param_1 + 0x164);
    }
    local_218 = param_3[6];
    dStack_210 = param_3[7];
    bVar3 = *pbVar16;
    local_138 = local_280;
    dStack_130 = local_220;
    local_128 = local_228;
    dStack_120 = local_260;
    local_118 = local_268;
    dStack_110 = local_240;
    if ((((cVar2 != '\x04') && (cVar2 != '\x01')) && (DAT_14caf8340 != '\0')) ||
       ((_DAT_14c761880 < fVar58 || (DAT_14caf8368 == '\x01')))) {
      *(undefined4 *)(param_3 + 0x10) = 0;
      if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10) ==
          '\x02') {
        local_18c = (float)param_3[0x1b];
        local_190 = (float)param_3[0x1a];
        local_194 = (float)param_3[0x19];
        local_198 = (float)param_3[0x18];
        local_1a8._0_8_ = param_3[0x16];
        local_1b8 = param_3[0x14];
        uStack_1b0 = param_3[0x15];
        local_188 = 2;
        FUN_1447ec412(*(undefined8 *)(lVar4 + 0x9c8),param_2);
      }
      else {
        puVar23 = &DAT_14cafa567;
        if ((*(byte *)(param_1 + 0x178) & 1) != 0) {
          puVar23 = (undefined1 *)(param_1 + 0x17c);
        }
        local_298 = *puVar23;
        local_288 = param_1 + 0x430;
        local_1b8 = param_3[0x18];
        uStack_1b0 = param_3[0x19];
        local_1a8 = *(undefined1 (*) [16])(param_3 + 0x1a);
        local_1d8 = param_3[0x16];
        local_1e8 = param_3[0x14];
        dStack_1e0 = param_3[0x15];
        local_290 = 1;
        FUN_14091fbf6(*(undefined8 *)(lVar4 + 0x9c8),param_2);
        lVar25 = (longlong)(int)param_2[1];
        lVar4 = *(longlong *)(*param_2 + 0x278);
        *(float *)(lVar4 + lVar25 * 0xc) = (float)dVar30;
        *(float *)(lVar4 + 4 + lVar25 * 0xc) = (float)dVar35;
        *(float *)(lVar4 + 8 + lVar25 * 0xc) = (float)dVar40;
        lVar25 = (longlong)(int)param_2[1];
        lVar4 = *(longlong *)(*param_2 + 0x290);
        *(float *)(lVar4 + lVar25 * 0xc) = (float)dVar46;
        *(float *)(lVar4 + 4 + lVar25 * 0xc) = (float)dVar45;
        *(float *)(lVar4 + 8 + lVar25 * 0xc) = (float)local_270;
      }
      param_3[0x21] = param_3[10];
      param_3[0x1f] = param_3[8];
      param_3[0x20] = param_3[9];
      goto LAB_14091f7b3;
    }
    local_230 = param_3 + 4;
    if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10) ==
        '\x02') {
      iVar14 = *(int *)(param_3 + 0x12) -
               (((int)ROUND(-0.5 - (fVar44 + fVar44)) >> 1) + *(int *)(lVar4 + 0x268));
      if (DAT_14c761897 == '\x01') {
        if ((*(char *)(param_3 + 0x24) == '\0') && (iVar14 < 1)) {
LAB_14091f7b3:
          uVar13 = FUN_1436447ac(&local_1d0,param_3);
          goto LAB_14091eec2;
        }
      }
      else {
        if (iVar14 < 1) goto LAB_14091f7b3;
        fVar44 = (float)iVar14;
        uVar56 = SUB84(param_3[0x14],0);
        uVar57 = (undefined4)((ulonglong)param_3[0x14] >> 0x20);
        uVar60 = SUB84(param_3[0x15],0);
        uVar61 = (undefined4)((ulonglong)param_3[0x15] >> 0x20);
        uVar54 = SUB84(param_3[0x16],0);
        uVar55 = (undefined4)((ulonglong)param_3[0x16] >> 0x20);
      }
      dVar35 = (double)(1.0 / fVar44);
      dVar30 = ((double)CONCAT44(uVar55,uVar54) - local_168) * dVar35 + local_168;
      dVar40 = ((double)CONCAT44(uVar61,uVar60) - dStack_170) * dVar35 + dStack_170;
      dVar35 = ((double)CONCAT44(uVar57,uVar56) - local_178) * dVar35 + local_178;
      pdVar27 = param_3 + 0x18;
      if (DAT_14c761897 != '\0') {
        pdVar27 = local_230;
      }
      FUN_144a44da6(&local_1b8,&local_158,pdVar27);
      dVar46 = (double)local_1a8._0_8_ * (double)local_1a8._0_8_ + local_1b8 * local_1b8;
      dVar45 = (double)local_1a8._8_8_ * (double)local_1a8._8_8_ + uStack_1b0 * uStack_1b0;
      auVar48._0_8_ = dVar46 + dVar45;
      auVar48._8_8_ = dVar46 + dVar45;
      auVar39._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
      auVar39._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
      auVar53 = sqrtpd(auVar48,auVar48);
      auVar53 = divpd(_DAT_149934d80,auVar53);
      auVar50._0_8_ = auVar53._0_8_ * (double)local_1a8._0_8_;
      auVar50._8_8_ = auVar53._8_8_ * (double)local_1a8._8_8_;
      auVar39 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar39);
      local_190 = (float)auVar39._0_8_;
      local_18c = (float)auVar39._8_8_;
      local_194 = (float)(double)((ulonglong)(uStack_1b0 * auVar53._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_));
      local_198 = (float)(double)((ulonglong)(local_1b8 * auVar53._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_));
      local_1a8._0_8_ = dVar30;
      local_188 = 2;
      local_1b8 = dVar35;
      uStack_1b0 = dVar40;
      FUN_1447ec412(*(undefined8 *)(lVar4 + 0x9c8),param_2,&local_1b8);
    }
    else {
      local_278 = dVar45;
      if (cVar2 == '\x01') {
        FUN_1400d2fee(*(undefined8 *)(lVar4 + 0x9c8),param_2,
                      CONCAT71((int7)((ulonglong)lVar26 >> 8),4));
      }
      dVar5 = dStack_200;
      dVar45 = dStack_210;
      bVar10 = DAT_14caf82e8;
      fVar44 = *(float *)(param_3 + 0x13) * param_4;
      pfVar22 = (float *)&DAT_14c761920;
      if ((*(byte *)(param_1 + 0x138) & 1) != 0) {
        pfVar22 = (float *)(param_1 + 0x13c);
      }
      fVar29 = *pfVar22;
      pfVar22 = (float *)&DAT_14c761910;
      if ((*(byte *)(param_1 + 0x110) & 1) != 0) {
        pfVar22 = (float *)(param_1 + 0x114);
      }
      fVar58 = *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xa8);
      pfVar17 = (float *)&DAT_14cafa55c;
      if ((*(byte *)(param_1 + 0x108) & 1) != 0) {
        pfVar17 = (float *)(param_1 + 0x10c);
      }
      pfVar18 = (float *)&DAT_14c761914;
      if ((*(byte *)(param_1 + 0x118) & 1) != 0) {
        pfVar18 = (float *)(param_1 + 0x11c);
      }
      pfVar19 = (float *)&DAT_14c761918;
      if ((*(byte *)(param_1 + 0x128) & 1) != 0) {
        pfVar19 = (float *)(param_1 + 300);
      }
      pfVar20 = (float *)&DAT_14cafa560;
      if ((*(byte *)(param_1 + 0x120) & 1) != 0) {
        pfVar20 = (float *)(param_1 + 0x124);
      }
      pfVar21 = (float *)&DAT_14c76191c;
      if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
        pfVar21 = (float *)(param_1 + 0x134);
      }
      local_234 = *pfVar19 + param_4;
      fVar59 = fVar58 * *pfVar21 + fVar44 + *pfVar20;
      local_248 = local_178;
      local_250 = dStack_170;
      local_258 = local_168;
      if (bVar8) {
        pcVar24 = &DAT_14c761930;
        if ((*(byte *)(param_1 + 0x168) & 1) != 0) {
          pcVar24 = (char *)(param_1 + 0x16c);
        }
        dVar41 = local_268;
        dVar36 = local_260;
        if (*pcVar24 != '\x01') goto LAB_14091e90a;
      }
      else {
LAB_14091e90a:
        fVar58 = *pfVar18 * fVar58 + *pfVar17 + fVar44;
        if (fVar58 <= *pfVar22 + param_4) {
          fVar58 = *pfVar22 + param_4;
        }
        fVar51 = param_4 / (fVar29 * fVar44);
        if (1.0 <= fVar51) {
          fVar51 = 1.0;
        }
        if (fVar51 <= 0.0) {
          fVar51 = 0.0;
        }
        if (DAT_14caf82e8 == 1) {
          dVar41 = 1.0 / (double)fVar58;
          dVar36 = (double)fVar51;
          dVar40 = ((dVar40 - local_228) + (dVar32 - local_168) * dVar41) * dVar36;
          dVar35 = ((dVar35 - local_220) + (dVar31 - dStack_170) * dVar41) * dVar36;
          dVar36 = ((dVar30 - local_280) + dVar41 * (dVar1 - local_178)) * dVar36;
          lVar25 = *param_2;
          lVar12 = (longlong)(int)param_2[1];
        }
        else {
          fVar58 = param_4 / fVar58;
          dVar36 = (double)fVar51;
          dVar40 = (dVar40 - local_228) * dVar36;
          if (1.0 <= fVar58) {
            fVar58 = 1.0;
          }
          dVar35 = (dVar35 - local_220) * dVar36;
          if (fVar58 <= 0.0) {
            fVar58 = 0.0;
          }
          dVar41 = (double)fVar58;
          lVar25 = *param_2;
          lVar12 = (longlong)(int)param_2[1];
          lVar15 = *(longlong *)(lVar25 + 0x28);
          local_258 = (dVar32 - local_168) * dVar41 + *(double *)(lVar15 + 0x10 + lVar12 * 0x18);
          local_250 = (dVar31 - dStack_170) * dVar41 + *(double *)(lVar15 + 8 + lVar12 * 0x18);
          local_248 = (dVar1 - local_178) * dVar41 + *(double *)(lVar15 + lVar12 * 0x18);
          dVar36 = (dVar30 - local_280) * dVar36;
        }
        lVar25 = *(longlong *)(lVar25 + 0x278);
        *(float *)(lVar25 + lVar12 * 0xc) = (float)(dVar36 + local_280);
        *(float *)(lVar25 + 4 + lVar12 * 0xc) = (float)(dVar35 + local_220);
        *(float *)(lVar25 + 8 + lVar12 * 0xc) = (float)(dVar40 + local_228);
        param_3[0x1f] = dVar36 + local_280;
        param_3[0x20] = dVar35 + local_220;
        param_3[0x21] = dVar40 + local_228;
        dVar41 = local_118;
        local_240 = dStack_110;
        dVar36 = dStack_120;
      }
      fVar44 = param_4 / (fVar29 * fVar44);
      if (fVar59 <= local_234) {
        fVar59 = local_234;
      }
      dVar30 = local_270 - local_240;
      if (1.0 <= fVar44) {
        fVar44 = 1.0;
      }
      local_280 = dVar46 - dVar36;
      if (fVar44 <= 0.0) {
        fVar44 = 0.0;
      }
      if ((bVar10 & 1) == 0) {
        dVar40 = (double)fVar44;
        dVar30 = dVar30 * dVar40;
        dVar35 = (local_278 - dVar41) * dVar40;
        local_280 = local_280 * dVar40;
        param_4 = param_4 / fVar59;
        if (1.0 <= param_4) {
          param_4 = 1.0;
        }
        lVar25 = *(longlong *)(*param_2 + 0x48);
        lVar12 = (longlong)(int)param_2[1] * 0x10;
        dVar1 = (double)*(float *)(lVar25 + 0xc + lVar12);
        dVar40 = (double)*(float *)(lVar25 + 8 + lVar12);
        dVar46 = (double)*(float *)(lVar25 + 4 + lVar12);
        fVar44 = *(float *)(lVar25 + lVar12);
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        dVar31 = dStack_210 * dVar1 +
                 dVar40 * local_218 + dStack_200 * dVar46 + (double)fVar44 * local_208;
        dVar32 = dVar31 * (double)(&DAT_149931160)[0.0 <= dVar31];
        dVar52 = 1.0 - (double)param_4;
        dVar31 = (double)(&DAT_149931160)[0.0 <= dVar31] * (double)param_4;
        if (dVar32 < 0.9999) {
          dVar37 = dVar32;
          if (1.0 <= dVar32) {
            dVar37 = 1.0;
          }
          local_278 = dVar35;
          local_268 = dVar41;
          local_260 = dVar36;
          dVar35 = acos((double)(-(ulonglong)(dVar32 < -1.0) & 0xbff0000000000000 |
                                ~-(ulonglong)(dVar32 < -1.0) & (ulonglong)dVar37));
          local_270 = dVar30;
          dVar32 = sin(dVar35);
          dVar52 = sin(dVar52 * dVar35);
          dVar30 = local_270;
          dVar52 = dVar52 * (1.0 / dVar32);
          dVar31 = sin(dVar31 * dVar35);
          dVar31 = dVar31 * (1.0 / dVar32);
          dVar41 = local_268;
          dVar36 = local_260;
          dVar35 = local_278;
        }
        dVar30 = dVar30 + local_240;
        dVar1 = dVar1 * dVar52 + dVar45 * dVar31;
        dVar45 = dVar40 * dVar52 + local_218 * dVar31;
        dVar46 = dVar46 * dVar52 + dVar5 * dVar31;
        dVar40 = (double)fVar44 * dVar52 + dVar31 * local_208;
        dVar31 = dVar45 * dVar45 + dVar40 * dVar40;
        dVar32 = dVar1 * dVar1 + dVar46 * dVar46;
        auVar38._0_8_ = dVar31 + dVar32;
        auVar38._8_8_ = dVar31 + dVar32;
        dVar35 = dVar35 + dVar41;
        dVar36 = local_280 + dVar36;
        auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
        auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
        auVar39 = sqrtpd(auVar38,auVar38);
        auVar39 = divpd(_DAT_149934d80,auVar39);
        auVar43._0_8_ = auVar39._0_8_ * dVar45;
        auVar43._8_8_ = auVar39._8_8_ * dVar1;
        uVar6 = (ulonglong)(dVar40 * auVar39._0_8_) &
                -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
        uVar54 = (undefined4)uVar6;
        uVar55 = (undefined4)(uVar6 >> 0x20);
        uVar6 = (ulonglong)(dVar46 * auVar39._8_8_) &
                -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
        uVar56 = (undefined4)uVar6;
        uVar57 = (undefined4)(uVar6 >> 0x20);
        auVar53 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar33);
      }
      else {
        uVar54 = SUB84(local_158,0);
        uVar55 = (undefined4)((ulonglong)local_158 >> 0x20);
        uVar56 = SUB84(dStack_150,0);
        uVar57 = (undefined4)((ulonglong)dStack_150 >> 0x20);
        auVar53._8_8_ = dStack_140;
        auVar53._0_8_ = local_148;
        dVar35 = local_148 * -1.0;
        dVar40 = dStack_140 * 1.0;
        local_1b8 = (dVar35 * dStack_200 + (local_208 * dVar40 * 1.0 - dStack_210 * local_158)) -
                    dStack_150 * local_218 * -1.0;
        uStack_1b0 = (dVar40 * dStack_200 + (local_208 * dVar35 * -1.0 - dStack_210 * dStack_150)) -
                     local_158 * local_218 * 1.0;
        local_1a8._8_8_ =
             dVar35 * local_218 * -1.0 +
             dStack_200 * dStack_150 + (dStack_210 * dVar40 - local_208 * local_158 * -1.0);
        local_1a8._0_8_ =
             dVar40 * local_218 * 1.0 +
             dStack_200 * local_158 + (dStack_210 * dVar35 - local_208 * dStack_150 * 1.0);
        local_278 = local_278 - dVar41;
        FUN_1467fb9ac(&local_1b8,&local_1e8,&local_1ec);
        for (; 3.1415927 < local_1ec; local_1ec = local_1ec + -6.2831855) {
        }
        for (; local_1ec < -3.1415927; local_1ec = local_1ec + 6.2831855) {
        }
        dVar40 = (double)(local_1ec / fVar59);
        dVar46 = (double)fVar44;
        dVar30 = (dVar30 + local_1d8 * dVar40) * dVar46 + dStack_110;
        dVar35 = (local_278 + dStack_1e0 * dVar40) * dVar46 + local_118;
        dVar36 = (local_280 + dVar40 * local_1e8) * dVar46 + dStack_120;
      }
      lVar12 = (longlong)(int)param_2[1];
      lVar25 = *(longlong *)(*param_2 + 0x290);
      *(float *)(lVar25 + lVar12 * 0xc) = (float)dVar36;
      *(float *)(lVar25 + 4 + lVar12 * 0xc) = (float)dVar35;
      *(float *)(lVar25 + 8 + lVar12 * 0xc) = (float)dVar30;
      param_3[0x1e] = local_168;
      param_3[0x1c] = local_178;
      param_3[0x1d] = dStack_170;
      if (DAT_14caf82e8 == 0) {
        puVar23 = &DAT_14cafa567;
        if ((*(byte *)(param_1 + 0x178) & 1) != 0) {
          puVar23 = (undefined1 *)(param_1 + 0x17c);
        }
        local_298 = *puVar23;
        puVar23 = &DAT_14c761931;
        if ((*(byte *)(param_1 + 0x180) & 1) != 0) {
          puVar23 = (undefined1 *)(param_1 + 0x184);
        }
        local_290 = *puVar23;
        local_288 = param_1 + 0x430;
        local_1b8 = (double)CONCAT44(uVar55,uVar54);
        uStack_1b0 = (double)CONCAT44(uVar57,uVar56);
        local_1e8 = local_248;
        dStack_1e0 = local_250;
        local_1d8 = local_258;
        local_1a8 = auVar53;
        FUN_14091fbf6(*(undefined8 *)(lVar4 + 0x9c8),param_2);
      }
      if (((bVar9 & bVar3 ^ 1) & bVar28) == 1) {
        pfVar22 = (float *)&DAT_14c761928;
        if ((*(byte *)(param_1 + 0x148) & 1) != 0) {
          pfVar22 = (float *)(param_1 + 0x14c);
        }
        auVar42._4_8_ = 0;
        auVar42._0_4_ = *pfVar22;
        if (1.0 <= *pfVar22) {
          auVar42 = ZEXT412(0x3f800000);
        }
        if (auVar42._0_4_ <= 0.0) {
          auVar7._8_4_ = 0;
          auVar7._0_8_ = auVar42._4_8_;
          auVar42 = auVar7 << 0x20;
        }
        pcVar24 = &DAT_14cafa564;
        if ((*(byte *)(param_1 + 0x158) & 1) != 0) {
          pcVar24 = (char *)(param_1 + 0x15c);
        }
        pfVar22 = (float *)&DAT_14c76192c;
        if ((*(byte *)(param_1 + 0x150) & 1) != 0) {
          pfVar22 = (float *)(param_1 + 0x154);
        }
        pdVar27 = param_3 + 0x14;
        if (*pcVar24 == '\0') {
          pdVar27 = param_3;
        }
        dVar35 = (double)auVar42._0_4_;
        dVar30 = (pdVar27[2] - local_168) * dVar35 + local_168;
        dVar40 = (pdVar27[1] - dStack_170) * dVar35 + dStack_170;
        dVar35 = (*pdVar27 - local_178) * dVar35 + local_178;
        fVar44 = *pfVar22;
        if (1.0 <= *pfVar22) {
          fVar44 = 1.0;
        }
        if (fVar44 <= 0.0) {
          fVar44 = 0.0;
        }
        pdVar27 = local_230;
        if (*pcVar24 != '\0') {
          pdVar27 = param_3 + 0x18;
        }
        FUN_144a44da6(&local_1b8,&local_158,pdVar27,(double)fVar44);
        dVar46 = (double)local_1a8._0_8_ * (double)local_1a8._0_8_ + local_1b8 * local_1b8;
        dVar45 = (double)local_1a8._8_8_ * (double)local_1a8._8_8_ + uStack_1b0 * uStack_1b0;
        auVar47._0_8_ = dVar46 + dVar45;
        auVar47._8_8_ = dVar46 + dVar45;
        auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_);
        auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_);
        auVar39 = sqrtpd(auVar47,auVar47);
        auVar39 = divpd(_DAT_149934d80,auVar39);
        auVar49._0_8_ = auVar39._0_8_ * (double)local_1a8._0_8_;
        auVar49._8_8_ = auVar39._8_8_ * (double)local_1a8._8_8_;
        local_1b8 = (double)((ulonglong)(local_1b8 * auVar39._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar47._0_8_));
        uStack_1b0 = (double)((ulonglong)(uStack_1b0 * auVar39._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar47._8_8_));
        local_1a8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar49,auVar34);
        puVar23 = &DAT_14cafa567;
        if ((*(byte *)(param_1 + 0x178) & 1) != 0) {
          puVar23 = (undefined1 *)(param_1 + 0x17c);
        }
        local_298 = *puVar23;
        puVar23 = &DAT_14c761931;
        if ((*(byte *)(param_1 + 0x180) & 1) != 0) {
          puVar23 = (undefined1 *)(param_1 + 0x184);
        }
        local_290 = *puVar23;
        local_288 = param_1 + 0x430;
        local_1e8 = dVar35;
        dStack_1e0 = dVar40;
        local_1d8 = dVar30;
        FUN_14091fbf6(*(undefined8 *)(lVar4 + 0x9c8),param_2,&local_1e8,&local_1b8);
      }
    }
    if (*(char *)(param_3 + 0x24) == '\x01') {
      iVar11 = (int)ROUND(-0.5 - (DAT_14c761874 / local_1bc + DAT_14c761874 / local_1bc)) >> 1;
      iVar14 = (int)ROUND(-0.5 - (*(float *)(param_3 + 0x13) * _DAT_14c761870 +
                                 *(float *)(param_3 + 0x13) * _DAT_14c761870)) >> 1;
      if (iVar11 < iVar14) {
        iVar14 = iVar11;
      }
      if (*(int *)((longlong)param_3 + 0x84) <= -iVar14) goto LAB_14091eebb;
LAB_14091ee80:
      *(undefined1 *)(param_3 + 0x24) = 0;
    }
  }
LAB_14091eec0:
  uVar13 = 0;
LAB_14091eec2:
  if ((local_f0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 14091fbf6 FUN_14091fbf6 body=649 status=ok
// SIG undefined FUN_14091fbf6(void)

void FUN_14091fbf6(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4,
                  char param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined1 auStack_228 [32];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [96];
  longlong local_148;
  int local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar9 = (longlong)(int)param_2[1];
  lVar11 = *(longlong *)(*param_2 + 0x48);
  lVar10 = lVar9 * 0x10;
  dVar7 = (double)*(float *)(lVar11 + 0xc + lVar10);
  lVar4 = *(longlong *)(*param_2 + 0x28);
  dVar8 = (double)*(float *)(lVar11 + 4 + lVar10);
  local_d8._8_4_ = SUB84(dVar8,0);
  local_d8._0_8_ = (double)*(float *)(lVar11 + lVar10);
  local_d8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_c8._8_4_ = SUB84(dVar7,0);
  local_c8._0_8_ = (double)*(float *)(lVar11 + 8 + lVar10);
  local_c8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  puVar1 = (undefined8 *)(lVar4 + lVar9 * 0x18);
  local_b8 = *puVar1;
  uStack_b0 = puVar1[1];
  local_a8 = *(undefined8 *)(lVar4 + 0x10 + lVar9 * 0x18);
  uStack_a0 = 0;
  local_98 = 0x3ff0000000000000;
  uStack_90 = 0x3ff0000000000000;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0;
  local_138 = *param_4;
  uStack_130 = param_4[1];
  local_128 = param_4[2];
  uStack_120 = param_4[3];
  local_118 = *param_3;
  uStack_114 = param_3[1];
  uStack_110 = (undefined4)*(undefined8 *)(param_3 + 2);
  uStack_10c = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 2) >> 0x20);
  local_108 = *(undefined8 *)(param_3 + 4);
  uStack_100 = 0;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0x3ff0000000000000;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0;
  uVar12 = FUN_14091fe80(param_2,&local_138,1);
  if (param_5 != '\0') {
    FUN_146e12118(uVar12,&local_148,param_2,param_7);
    if ((longlong)local_140 != 0) {
      lVar11 = 0;
      do {
        plVar5 = *(longlong **)(local_148 + lVar11);
        if ((plVar5 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar5 + 0xc))) {
          lVar4 = *plVar5;
          lVar9 = (longlong)(int)plVar5[1];
          lVar10 = lVar9 * 0x10;
          cVar3 = *(char *)(*(longlong *)(lVar4 + 0x2c0) + 0xb + lVar10);
          if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
            lVar6 = *(longlong *)(lVar4 + 0x48);
            dVar7 = (double)*(float *)(lVar6 + 0xc + lVar10);
            dVar8 = (double)*(float *)(lVar6 + 4 + lVar10);
            local_208._8_4_ = SUB84(dVar8,0);
            local_208._0_8_ = (double)*(float *)(lVar6 + lVar10);
            local_208._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            local_1f8._8_4_ = SUB84(dVar7,0);
            local_1f8._0_8_ = (double)*(float *)(lVar6 + 8 + lVar10);
            local_1f8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
            puVar2 = (undefined4 *)(*(longlong *)(lVar4 + 0x28) + lVar9 * 0x18);
            local_1e8 = *puVar2;
            uStack_1e4 = puVar2[1];
            uStack_1e0 = puVar2[2];
            uStack_1dc = puVar2[3];
            local_1d8 = *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + 0x10 + lVar9 * 0x18);
            uStack_1d0 = 0;
            local_1c8 = 0x3ff0000000000000;
            uStack_1c0 = 0x3ff0000000000000;
            local_1b8 = 0x3ff0000000000000;
            uStack_1b0 = 0;
            FUN_1404cdb8a(local_208,local_1a8,local_d8);
            FUN_1447dc19e(local_1a8,local_208,&local_138);
            FUN_14091fe80(plVar5,local_208,param_6);
          }
        }
        lVar11 = lVar11 + 8;
      } while ((longlong)local_140 * 8 != lVar11);
    }
    if (local_148 != 0) {
      FUN_1400020a8(local_148);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14091fe80 FUN_14091fe80 body=898 status=ok
// SIG undefined FUN_14091fe80(void)

void FUN_14091fe80(longlong *param_1,double *param_2,char param_3)

{
  longlong *plVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ushort uVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  undefined8 uStack_80;
  double local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  double local_60;
  double local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar4 = param_2[5];
  dVar3 = param_2[6];
  lVar11 = param_1[1];
  lVar12 = *(longlong *)(*param_1 + 0x28);
  pdVar2 = (double *)(lVar12 + (longlong)(int)lVar11 * 0x18);
  *pdVar2 = param_2[4];
  pdVar2[1] = dVar4;
  *(double *)(lVar12 + 0x10 + (longlong)(int)lVar11 * 0x18) = dVar3;
  local_88 = (longlong *)param_2[4];
  uStack_80 = param_2[5];
  local_78 = param_2[6];
  local_90 = param_1;
  FUN_140c2a03a(&local_90);
  dVar3 = param_2[3];
  dVar4 = param_2[2];
  dVar5 = param_2[1];
  lVar12 = *(longlong *)(*local_90 + 0x48);
  lVar11 = (longlong)(int)local_90[1] * 0x10;
  *(float *)(lVar12 + lVar11) = (float)*param_2;
  *(float *)(lVar12 + 4 + lVar11) = (float)dVar5;
  *(float *)(lVar12 + 8 + lVar11) = (float)dVar4;
  *(float *)(lVar12 + 0xc + lVar11) = (float)dVar3;
  dVar3 = param_2[1];
  dVar4 = param_2[2];
  dVar5 = param_2[3];
  if ((local_90 != (longlong *)0x0) && (1 < *(byte *)((longlong)local_90 + 0xc))) {
    cVar9 = *(char *)(*(longlong *)(*local_90 + 0x2c0) + 0xb + (longlong)(int)local_90[1] * 0x10);
    lVar12 = 0x548;
    if ((cVar9 == '\x01') || (cVar9 == '\x04')) goto LAB_14091ff79;
  }
  lVar12 = 0x48;
LAB_14091ff79:
  lVar12 = *(longlong *)(*local_90 + lVar12);
  lVar11 = (longlong)(int)local_90[1] * 0x10;
  *(float *)(lVar12 + lVar11) = (float)*param_2;
  *(float *)(lVar12 + 4 + lVar11) = (float)dVar3;
  *(float *)(lVar12 + 8 + lVar11) = (float)dVar4;
  *(float *)(lVar12 + 0xc + lVar11) = (float)dVar5;
  if (param_3 != '\0') {
    lVar12 = (longlong)(int)param_1[1] * 0x10;
    if (0 < *(int *)(*(longlong *)(*param_1 + 0x1d0) + 8 + lVar12)) {
      plVar15 = (longlong *)(*(longlong *)(*param_1 + 0x1d0) + lVar12);
      lVar12 = 0;
      do {
        lVar11 = *(longlong *)(*plVar15 + 8 + lVar12 * 0x10);
        cVar9 = *(char *)(lVar11 + 8);
        if (cVar9 == '\x01') {
          lVar14 = lVar11 + 0x40;
          if (*(longlong *)(lVar11 + 0x98) != 0) {
            lVar14 = *(longlong *)(lVar11 + 0x98);
          }
          iVar13 = *(int *)(lVar11 + 0xa0);
          if ((longlong)iVar13 != 0) {
            lVar16 = 0;
            do {
              lVar7 = *(longlong *)(lVar14 + 0x10 + lVar16);
              if ((lVar7 != 0) &&
                 ((((*(ushort *)(lVar7 + 0x374) & 2) == 0 ||
                   ((*(longlong *)(lVar7 + 0x140) != 0 &&
                    ((*(byte *)(*(longlong *)(lVar7 + 0x140) + 10) & 0x40) != 0)))) &&
                  ((*(ushort *)(lVar7 + 0x374) & 1) != 0)))) {
                FUN_1400c31d0();
              }
              lVar16 = lVar16 + 0x58;
            } while ((longlong)iVar13 * 0x58 - lVar16 != 0);
            cVar9 = *(char *)(lVar11 + 8);
            goto LAB_14092005b;
          }
        }
        else {
LAB_14092005b:
          if (cVar9 == '\0') {
            dVar3 = (double)(lVar11 + 0x50);
            local_60 = 2.12199579096527e-314;
            local_50 = 0xffffffff;
            local_48 = 0;
            iVar13 = 0;
            local_58 = dVar3;
            if (*(int *)(lVar11 + 0x68) != 0) {
              FUN_1449c0562(&local_60);
              iVar13 = *(int *)(lVar11 + 0x68);
            }
            plVar1 = (longlong *)(lVar11 + 0x40);
            local_70 = local_50;
            uVar8 = local_70;
            local_68 = local_48;
            local_64 = local_44;
            uStack_80 = local_60;
            local_78 = local_58;
            local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
            iVar10 = local_70._4_4_;
            local_88 = plVar1;
            if ((local_70._4_4_ != iVar13) || (local_70 = uVar8, local_58 != dVar3)) {
              do {
                local_70 = uVar8;
                lVar14 = *(longlong *)(*local_88 + 0x10 + (longlong)iVar10 * 0x20);
                if (lVar14 != 0) {
                  uVar6 = *(ushort *)(lVar14 + 0x374);
                  if ((uVar6 & 2) == 0) {
                    uVar6 = uVar6 & 1;
                  }
                  else {
                    if ((*(longlong *)(lVar14 + 0x140) == 0) || ((uVar6 & 1) == 0))
                    goto LAB_1409201bc;
                    uVar6 = *(ushort *)(*(longlong *)(lVar14 + 0x140) + 10) & 0x40;
                  }
                  if (uVar6 != 0) {
                    FUN_1400c31d0();
                  }
                }
LAB_1409201bc:
                local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_80._4_4_);
                FUN_1449c0562(&uStack_80);
                iVar10 = local_70._4_4_;
                uVar8 = local_70;
              } while (((local_70._4_4_ != iVar13) || (local_78 != dVar3)) || (local_88 != plVar1));
            }
            cVar9 = *(char *)(lVar11 + 8);
          }
          if ((cVar9 == '\x02') && (lVar11 = *(longlong *)(lVar11 + 200), lVar11 != 0)) {
            uVar6 = *(ushort *)(lVar11 + 0x374);
            if ((uVar6 & 2) == 0) {
              uVar6 = uVar6 & 1;
            }
            else {
              if ((*(longlong *)(lVar11 + 0x140) == 0) || ((uVar6 & 1) == 0)) goto LAB_140920067;
              uVar6 = *(ushort *)(*(longlong *)(lVar11 + 0x140) + 10) & 0x40;
            }
            if (uVar6 != 0) {
              FUN_1400c31d0();
            }
          }
        }
LAB_140920067:
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)plVar15[1]);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140920204 FUN_140920204 body=3281 status=ok
// SIG undefined FUN_140920204(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140920204(longlong param_1,longlong *param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong *plVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  double *pdVar17;
  uint uVar18;
  undefined **ppuVar19;
  char *pcVar20;
  float *pfVar21;
  byte bVar22;
  int iVar23;
  undefined8 unaff_RBP;
  undefined7 uVar24;
  byte bVar25;
  undefined1 *puVar26;
  uint uVar27;
  ulonglong uVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined1 local_220;
  longlong local_218;
  byte local_201;
  longlong *local_200;
  double local_1f8;
  double local_1f0;
  float local_1e4;
  double local_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  longlong *local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar6 = *(longlong *)(param_1 + 0x18);
  uVar24 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar28 = CONCAT71(uVar24,1);
  if ((lVar6 != 0) && (lVar7 = *(longlong *)(lVar6 + 0x1c0), lVar7 != 0)) {
    uVar27 = *(int *)(param_3 + 0x11) - *(int *)((longlong)param_3 + 0x8c);
    if (((int)uVar27 < *(int *)(lVar7 + 0x3e0)) &&
       (*(int *)(lVar7 + 0x3e0) - *(int *)(lVar7 + 1000) <= (int)uVar27)) {
      local_201 = *(byte *)(param_3 + 0xe);
      local_100 = FUN_140dc52d8(lVar7 + 0x298);
      local_f8 = uVar27 & 0x3fffffff | 0x40000000;
      local_108 = lVar7 + 0x18;
      local_110 = param_2;
      lVar16 = FUN_14091baa4();
      ppuVar19 = *(undefined ***)(lVar16 + 8);
      if (ppuVar19 == (undefined **)0x0) {
        ppuVar19 = &PTR_PTR_14c75ef90;
      }
      cVar13 = (**(code **)(*ppuVar19 + 0x20))();
      local_1f0 = (double)CONCAT71(local_1f0._1_7_,1);
      bVar22 = 1;
      if (cVar13 == '\0') {
        bVar22 = *(byte *)(param_1 + 400) & 1;
      }
      local_200 = param_2;
      lVar16 = FUN_14091baa4();
      ppuVar19 = *(undefined ***)(lVar16 + 8);
      if (ppuVar19 == (undefined **)0x0) {
        ppuVar19 = &PTR_PTR_14c75ef90;
      }
      cVar13 = (**(code **)(*ppuVar19 + 0x30))();
      if (cVar13 == '\0') {
        local_1f0 = (double)(CONCAT71(local_1f0._1_7_,*(undefined1 *)(param_1 + 0x198)) &
                            0xffffffffffffff01);
      }
      lVar16 = FUN_14091baa4();
      ppuVar19 = *(undefined ***)(lVar16 + 8);
      if (ppuVar19 == (undefined **)0x0) {
        ppuVar19 = &PTR_PTR_14c75ef90;
      }
      cVar13 = (**(code **)(*ppuVar19 + 0x40))();
      local_1f8 = (double)CONCAT71(local_1f8._1_7_,1);
      bVar25 = 1;
      if (cVar13 == '\0') {
        bVar25 = *(byte *)(param_1 + 0x1a0) & 1;
      }
      lVar16 = FUN_14091baa4();
      ppuVar19 = *(undefined ***)(lVar16 + 8);
      if (ppuVar19 == (undefined **)0x0) {
        ppuVar19 = &PTR_PTR_14c75ef90;
      }
      cVar13 = (**(code **)(*ppuVar19 + 0x50))();
      if (cVar13 == '\0') {
        local_1f8 = (double)(CONCAT71(local_1f8._1_7_,*(undefined1 *)(param_1 + 0x1a8)) &
                            0xffffffffffffff01);
      }
      if (bVar22 == 0) {
        uVar28 = 0;
      }
      else {
        lVar16 = FUN_14091baa4();
        ppuVar19 = *(undefined ***)(lVar16 + 8);
        if (ppuVar19 == (undefined **)0x0) {
          ppuVar19 = &PTR_PTR_14c75ef90;
        }
        fVar29 = (float)(**(code **)(*ppuVar19 + 0x28))();
        if ((*(byte *)(param_1 + 400) & 1) == 0) {
          fVar29 = (float)((longlong)fVar29 & 0xffffffff);
        }
        else {
          fVar29 = *(float *)(param_1 + 0x194);
        }
        pdVar17 = (double *)FUN_142a2ce3e(&local_110);
        uVar28 = CONCAT71(uVar24,(double)fVar29 <=
                                 SQRT((param_3[2] - pdVar17[2]) * (param_3[2] - pdVar17[2]) +
                                      (*param_3 - *pdVar17) * (*param_3 - *pdVar17) +
                                      (param_3[1] - pdVar17[1]) * (param_3[1] - pdVar17[1])));
      }
      plVar12 = local_200;
      if (((char)uVar28 == '\0') && (bVar25 == 1)) {
        lVar16 = FUN_14091baa4();
        ppuVar19 = *(undefined ***)(lVar16 + 8);
        if (ppuVar19 == (undefined **)0x0) {
          ppuVar19 = &PTR_PTR_14c75ef90;
        }
        fVar29 = (float)(**(code **)(*ppuVar19 + 0x48))();
        if ((*(byte *)(param_1 + 0x1a0) & 1) == 0) {
          fVar29 = (float)((longlong)fVar29 & 0xffffffff);
        }
        else {
          fVar29 = *(float *)(param_1 + 0x1a4);
        }
        FUN_146ef0d1c(&local_110,&local_128);
        uVar28 = CONCAT71((int7)((ulonglong)&local_128 >> 8),
                          (double)fVar29 <=
                          SQRT((param_3[10] - local_118) * (param_3[10] - local_118) +
                               (param_3[8] - local_128) * (param_3[8] - local_128) +
                               (param_3[9] - local_120) * (param_3[9] - local_120)));
      }
      if ((char)uVar28 == '\0') {
        cVar13 = local_1f8._0_1_;
        local_1f8 = (double)((ulonglong)local_1f8 ^ 1);
        if (cVar13 == '\x01') {
          lVar16 = FUN_14091baa4();
          ppuVar19 = *(undefined ***)(lVar16 + 8);
          if (ppuVar19 == (undefined **)0x0) {
            ppuVar19 = &PTR_PTR_14c75ef90;
          }
          fVar29 = (float)(**(code **)(*ppuVar19 + 0x58))();
          if ((*(byte *)(param_1 + 0x1a8) & 1) == 0) {
            fVar29 = (float)((longlong)fVar29 & 0xffffffff);
          }
          else {
            fVar29 = *(float *)(param_1 + 0x1ac);
          }
          FUN_146ef0dae(&local_110,&local_140);
          local_130 = param_3[0xd] * 0.01745329238474369 - local_130;
          local_138 = param_3[0xc] * 0.01745329238474369 - local_138;
          local_140 = param_3[0xb] * 0.01745329238474369 - local_140;
          uVar28 = CONCAT71((int7)((ulonglong)&local_140 >> 8),
                            (double)fVar29 <=
                            SQRT(local_130 * local_130 +
                                 local_140 * local_140 + local_138 * local_138));
        }
      }
      if ((char)uVar28 == '\0') {
        cVar13 = local_1f0._0_1_;
        local_1f0 = (double)((ulonglong)local_1f0 ^ 1);
        if (cVar13 == '\x01') {
          lVar16 = FUN_14091baa4();
          ppuVar19 = &PTR_PTR_14c75ef90;
          if (*(undefined ***)(lVar16 + 8) != (undefined **)0x0) {
            ppuVar19 = *(undefined ***)(lVar16 + 8);
          }
          (**(code **)(*ppuVar19 + 0x38))(ppuVar19);
          FUN_142a2cee8(&local_110,local_188);
          local_158 = local_178._0_8_;
          uStack_150 = local_178._8_8_;
          local_168 = local_188._0_8_;
          uStack_160 = local_188._8_8_;
          local_1a8 = param_3[4];
          dStack_1a0 = param_3[5];
          local_198 = param_3[6];
          dStack_190 = param_3[7];
          uVar14 = FUN_142a2ac94();
          uVar28 = (ulonglong)uVar14;
        }
      }
      bVar22 = local_201;
      if (*(char *)(*(longlong *)(*plVar12 + 0x2c0) + 0xb + (longlong)(int)plVar12[1] * 0x10) ==
          '\x01' && (local_201 & 1) == 0) {
        FUN_1400d2fee(*(undefined8 *)(lVar6 + 0x9c8),plVar12,4);
      }
      iVar15 = *(int *)((longlong)param_3 + 0x84);
      uVar24 = (undefined7)(uVar28 >> 8);
      if ((((byte)uVar28 & iVar15 == 0) == 1) && (*(int *)(lVar7 + 0x3fc) < (int)uVar27)) {
        if ((plVar12 != (longlong *)0x0) &&
           (lVar16 = *(longlong *)(*(longlong *)(*plVar12 + 0x1e8) + (longlong)(int)plVar12[1] * 8),
           lVar16 != 0)) {
          *(uint *)(lVar16 + 0x48) = uVar27;
        }
        uVar14 = *(uint *)(lVar7 + 0x3f4);
        uVar18 = uVar27;
        if ((int)uVar14 < (int)uVar27) {
          uVar18 = uVar14;
        }
        if (uVar14 == 0xffffffff) {
          uVar18 = uVar27;
        }
        *(uint *)(lVar7 + 0x3f4) = uVar18;
        uVar28 = CONCAT71(uVar24,1);
      }
      else {
        pcVar20 = &DAT_14cafa568;
        if ((*(byte *)(param_1 + 0x1b0) & 1) != 0) {
          pcVar20 = (char *)(param_1 + 0x1b4);
        }
        uVar28 = CONCAT71(uVar24,1);
        if (*pcVar20 == '\x01') {
          iVar23 = *(int *)(lVar6 + 0x268) - (uVar27 + iVar15);
          if (0 < iVar23 && iVar15 <= iVar23) {
            pdVar17 = (double *)FUN_142a2ce3e(&local_110);
            pfVar21 = (float *)&DAT_14c761934;
            if ((*(byte *)(param_1 + 0x1c8) & 1) != 0) {
              pfVar21 = (float *)(param_1 + 0x1cc);
            }
            local_1e4 = (float)iVar23;
            dVar30 = (double)(*pfVar21 / local_1e4);
            lVar16 = (longlong)(int)plVar12[1];
            lVar7 = *(longlong *)(*plVar12 + 0x28);
            local_1f0 = (param_3[2] - pdVar17[2]) * dVar30 +
                        *(double *)(lVar7 + 0x10 + lVar16 * 0x18);
            local_1f8 = (param_3[1] - pdVar17[1]) * dVar30 + *(double *)(lVar7 + 8 + lVar16 * 0x18);
            local_200 = (longlong *)
                        ((*param_3 - *pdVar17) * dVar30 + *(double *)(lVar7 + lVar16 * 0x18));
            pfVar21 = (float *)&DAT_14c761938;
            if ((*(byte *)(param_1 + 0x1d0) & 1) != 0) {
              pfVar21 = (float *)(param_1 + 0x1d4);
            }
            fVar29 = *pfVar21 / local_1e4;
            FUN_142a2cee8(&local_110,local_188);
            dVar34 = (double)local_178._0_8_ * -1.0;
            dVar39 = (double)local_178._8_8_ * 1.0;
            dVar36 = param_3[4];
            dVar41 = param_3[5];
            dVar8 = param_3[6];
            dVar40 = param_3[7];
            dVar30 = dVar41 * dVar34 * -1.0 +
                     ((dVar36 * dVar39 - (double)local_188._0_8_ * dVar40 * 1.0) -
                     dVar8 * (double)local_188._8_8_);
            dVar32 = dVar36 * dVar34 * 1.0 +
                     ((dVar41 * dVar39 - (double)local_188._0_8_ * dVar8 * -1.0) -
                     dVar40 * (double)local_188._8_8_);
            lVar7 = *(longlong *)(*plVar12 + 0x48);
            lVar16 = (longlong)(int)plVar12[1] * 0x10;
            dVar9 = (double)*(float *)(lVar7 + 0xc + lVar16);
            dVar33 = (double)*(float *)(lVar7 + 8 + lVar16);
            dVar31 = (double)*(float *)(lVar7 + 4 + lVar16);
            dVar10 = (double)*(float *)(lVar7 + lVar16);
            dVar35 = dVar40 * dVar34 * 1.0 +
                     (double)local_188._8_8_ * dVar36 +
                     (dVar39 * dVar8 - (double)local_188._0_8_ * dVar41 * 1.0);
            dVar40 = dVar8 * dVar34 * -1.0 +
                     (double)local_188._8_8_ * dVar41 +
                     (dVar39 * dVar40 - (double)local_188._0_8_ * dVar36 * -1.0);
            dVar36 = dVar32 * dVar33 * -1.0 +
                     dVar35 * dVar31 + dVar40 * dVar10 * 1.0 + dVar30 * dVar9;
            dVar41 = dVar30 * dVar33 * 1.0 +
                     dVar40 * dVar31 + dVar35 * dVar10 * -1.0 + dVar32 * dVar9;
            dVar8 = dVar40 * dVar33 * 1.0 +
                    ((dVar10 * dVar32 * 1.0 + dVar9 * dVar35) - dVar30 * dVar31);
            dVar32 = dVar35 * dVar33 * -1.0 +
                     ((dVar10 * dVar30 * -1.0 + dVar9 * dVar40) - dVar32 * dVar31);
            dVar34 = dVar32 * dVar9 + dVar33 * dVar8 + dVar41 * dVar31 + dVar10 * dVar36;
            uVar28 = -(ulonglong)(0.0 <= dVar34);
            dVar40 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
            dVar34 = dVar34 * dVar40;
            dVar30 = 1.0 - (double)fVar29;
            dVar40 = dVar40 * (double)fVar29;
            if (dVar34 < 0.9999) {
              dVar35 = dVar34;
              if (1.0 <= dVar34) {
                dVar35 = 1.0;
              }
              uStack_1d0 = 0;
              local_1d8 = dVar31;
              local_1e0 = acos((double)(-(ulonglong)(dVar34 < -1.0) & 0xbff0000000000000 |
                                       ~-(ulonglong)(dVar34 < -1.0) & (ulonglong)dVar35));
              dVar31 = sin(local_1e0);
              dVar30 = sin(dVar30 * local_1e0);
              dVar30 = dVar30 * (1.0 / dVar31);
              dVar40 = sin(dVar40 * local_1e0);
              dVar40 = dVar40 * (1.0 / dVar31);
              dVar31 = local_1d8;
            }
            dVar9 = dVar9 * dVar30 + dVar32 * dVar40;
            dVar8 = dVar33 * dVar30 + dVar8 * dVar40;
            dVar32 = dVar31 * dVar30 + dVar41 * dVar40;
            dVar30 = dVar10 * dVar30 + dVar40 * dVar36;
            dVar36 = dVar8 * dVar8 + dVar30 * dVar30;
            dVar41 = dVar9 * dVar9 + dVar32 * dVar32;
            auVar37._0_8_ = dVar36 + dVar41;
            auVar37._8_8_ = dVar36 + dVar41;
            auVar43._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
            auVar43._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
            auVar38 = sqrtpd(auVar37,auVar37);
            auVar38 = divpd(_DAT_149934d80,auVar38);
            auVar42._0_8_ = auVar38._0_8_ * dVar8;
            auVar42._8_8_ = auVar38._8_8_ * dVar9;
            uVar28 = (ulonglong)(dVar32 * auVar38._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
            auVar43 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar43);
            pcVar20 = &DAT_14cafa569;
            if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
              pcVar20 = (char *)(param_1 + 0x1bc);
            }
            bVar22 = local_201;
            if (*pcVar20 == '\x01') {
              FUN_146ef0d1c(&local_110,local_188);
              fVar29 = local_1e4;
              bVar22 = local_201;
              dVar36 = param_3[10] - (double)local_178._0_8_;
              dVar41 = param_3[9] - (double)local_188._8_8_;
              dVar32 = param_3[8] - (double)local_188._0_8_;
              pfVar21 = (float *)&DAT_14c76193c;
              if ((*(byte *)(param_1 + 0x1d8) & 1) != 0) {
                pfVar21 = (float *)(param_1 + 0x1dc);
              }
              dVar10 = (double)(*pfVar21 / local_1e4);
              lVar16 = (longlong)(int)plVar12[1];
              lVar7 = *(longlong *)(*plVar12 + 0x278);
              fVar1 = *(float *)(lVar7 + 8 + lVar16 * 0xc);
              fVar2 = *(float *)(lVar7 + 4 + lVar16 * 0xc);
              fVar3 = *(float *)(lVar7 + lVar16 * 0xc);
              dVar8 = param_3[0xd];
              dVar31 = param_3[0xc];
              dVar9 = param_3[0xb];
              FUN_146ef0dae(&local_110,local_188);
              pfVar21 = (float *)&DAT_14c761940;
              if ((*(byte *)(param_1 + 0x1e0) & 1) != 0) {
                pfVar21 = (float *)(param_1 + 0x1e4);
              }
              dVar33 = (double)(*pfVar21 / fVar29);
              lVar7 = *(longlong *)(*plVar12 + 0x278);
              lVar16 = *(longlong *)(*plVar12 + 0x290);
              lVar11 = (longlong)(int)plVar12[1] * 0xc;
              fVar29 = *(float *)(lVar16 + 8 + lVar11);
              fVar4 = *(float *)(lVar16 + 4 + lVar11);
              fVar5 = *(float *)(lVar16 + lVar11);
              *(float *)(lVar7 + lVar11) = (float)((double)fVar3 + dVar32 * dVar10);
              *(float *)(lVar7 + 4 + lVar11) = (float)((double)fVar2 + dVar41 * dVar10);
              *(float *)(lVar7 + 8 + lVar11) = (float)((double)fVar1 + dVar36 * dVar10);
              lVar16 = (longlong)(int)plVar12[1];
              lVar7 = *(longlong *)(*plVar12 + 0x290);
              *(float *)(lVar7 + lVar16 * 0xc) =
                   (float)((double)fVar5 +
                          (dVar9 * 0.01745329238474369 - (double)local_188._0_8_) * dVar33);
              *(float *)(lVar7 + 4 + lVar16 * 0xc) =
                   (float)((double)fVar4 +
                          (dVar31 * 0.01745329238474369 - (double)local_188._8_8_) * dVar33);
              *(float *)(lVar7 + 8 + lVar16 * 0xc) =
                   (float)((double)fVar29 +
                          (dVar8 * 0.01745329238474369 - (double)local_178._0_8_) * dVar33);
            }
            local_218 = param_1 + 0x430;
            puVar26 = &DAT_14c761932;
            if ((*(byte *)(param_1 + 0x1c0) & 1) != 0) {
              puVar26 = (undefined1 *)(param_1 + 0x1c4);
            }
            local_228 = *puVar26;
            local_188._8_4_ = (int)uVar28;
            local_188._0_8_ =
                 (ulonglong)(dVar30 * auVar38._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
            local_188._12_4_ = (int)(uVar28 >> 0x20);
            local_1c8 = local_200;
            dStack_1c0 = local_1f8;
            local_1b8 = local_1f0;
            local_220 = 1;
            local_178 = auVar43;
            FUN_14091fbf6(*(undefined8 *)(lVar6 + 0x9c8),plVar12);
            iVar15 = *(int *)((longlong)param_3 + 0x84);
          }
          uVar28 = (ulonglong)CONCAT31((int3)((uint)iVar23 >> 8),iVar23 <= iVar15);
        }
      }
      if ((char)uVar28 == '\x01' && (bVar22 & 1) != 0) {
        local_218 = param_1 + 0x430;
        local_188 = *(undefined1 (*) [16])(param_3 + 4);
        local_178 = *(undefined1 (*) [16])(param_3 + 6);
        local_1b8 = param_3[2];
        local_1c8 = (longlong *)*param_3;
        dStack_1c0 = param_3[1];
        local_220 = 1;
        local_228 = 1;
        FUN_14091fbf6(*(undefined8 *)(lVar6 + 0x9c8),plVar12);
        FUN_1400d2fee(*(undefined8 *)(lVar6 + 0x9c8),plVar12,1);
        if (DAT_14c761896 == '\x01') {
          FUN_145757d84(*(undefined8 *)(lVar6 + 0x9c8),plVar12);
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return uVar28 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140920ed6 FUN_140920ed6 body=226 status=ok
// SIG undefined FUN_140920ed6(void)

void FUN_140920ed6(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    lVar4 = FUN_14001cc68(0x400,0x10);
    FUN_1461c37de(lVar4,param_1,param_2,*(undefined4 *)(param_1 + 0x268));
    lVar1 = *(longlong *)(param_1 + 0x1c0);
    *(longlong *)(param_1 + 0x1c0) = lVar4;
    if (lVar1 == 0) goto LAB_140920f55;
    FUN_14605db3c(lVar1);
    FUN_1400020a8(lVar1);
  }
  else {
    FUN_146ed0d52(*(longlong *)(param_1 + 0x1c0),param_1,param_2,*(undefined4 *)(param_1 + 0x268));
  }
  lVar4 = *(longlong *)(param_1 + 0x1c0);
LAB_140920f55:
  if (lVar4 != 0) {
    param_2 = *(undefined4 *)(lVar4 + 0x10);
  }
  FUN_14017eb66(param_1 + 0x70,param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(*(longlong *)(param_1 + 0x9c8) + 0x2f0) = uVar2;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + 8) = uVar2;
  }
  lVar1 = *(longlong *)(param_1 + 0x9c8);
  uVar3 = FUN_140627d14(param_1);
  *(undefined1 *)(lVar1 + 0xd0c) = uVar3;
  *(undefined1 *)(lVar1 + 0xcc4) = uVar3;
  *(undefined1 *)(lVar1 + 0x248) = uVar3;
  return;
}



// FUNCTION 140920fb8 FUN_140920fb8 body=661 status=ok
// SIG undefined FUN_140920fb8(void)

void FUN_140920fb8(longlong param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined8 local_b0;
  ulonglong uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  undefined8 local_80;
  longlong lStack_78;
  ulonglong local_70;
  longlong lStack_68;
  ulonglong local_60;
  longlong lStack_58;
  ulonglong local_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)(param_2 + 0x13) = 0;
  local_d0 = *param_2;
  local_c8 = 0;
  local_c0 = 1;
  local_bc = 0xffffffffffffffff;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_97 = 0;
  uStack_90 = 0;
  uStack_8f = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  lStack_68 = 0;
  local_60 = 0;
  lStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  FUN_1447ce2ce(&local_d0);
  local_bc = *(undefined8 *)((longlong)param_2 + 0x14);
  if (*(longlong **)(param_1 + 0x18) == (longlong *)0x0) {
    if (uStack_3f._7_1_ == '\x01') {
      FUN_142400d60(local_b0,uStack_a8 & 0xffffffff);
    }
    else {
      FUN_1448859f0(&local_b0,local_a0);
    }
  }
  else {
    local_bc = CONCAT44(*(undefined4 *)((longlong)param_2 + 0x14),*(undefined4 *)(param_1 + 0x20));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    if (*(char *)(param_2 + 0x13) == '\x01') {
      FUN_142400d60(param_2[4],*(undefined4 *)(param_2 + 5));
    }
    else {
      FUN_1448859f0(param_2 + 4,param_2[6]);
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))(*(longlong **)(param_1 + 0x28),param_2);
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_1433cec0c(param_2 + 4);
    FUN_1433cec0c(&local_b0);
  }
  FUN_142255f10(param_2[4],local_b0,uStack_a8 & 0xffffffff);
  if (*(char *)(param_1 + 0x39) == '\x01') {
    if (*(int *)((longlong)param_2 + 0x44) < 0) {
      *(undefined4 *)(param_2 + 8) = 0;
      FUN_14480ffb8(param_2 + 7,0);
    }
    else {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    *(undefined1 *)(param_2 + 9) = 0;
  }
  else {
    FUN_14092124e(param_2 + 7,&uStack_98);
  }
  FUN_140921370(&lStack_78,param_2 + 0xb);
  if (CONCAT71(uStack_47,uStack_48) != 0) {
    FUN_1400020a8();
  }
  FUN_144716785(lStack_58,local_50 & 0xffffffff);
  if (lStack_58 != 0) {
    FUN_1400020a8();
  }
  FUN_144716758(lStack_68,local_60 & 0xffffffff);
  if (lStack_68 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(lStack_78,local_70 & 0xffffffff);
  if (lStack_78 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_2 + 0x13) = uVar1;
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092124e FUN_14092124e body=289 status=ok
// SIG undefined FUN_14092124e(void)

void FUN_14092124e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  if (0 < (int)param_1[1]) {
    lVar5 = 0;
    do {
      lVar13 = *param_1;
      uVar3 = *(undefined8 *)(lVar13 + lVar5 * 0x10);
      uVar2 = *(uint *)(param_2 + 1);
      lVar4 = *param_2;
      if ((char)param_2[2] == '\0') {
        FUN_144716af1();
        *(undefined1 *)(param_2 + 2) = 1;
        uVar2 = *(uint *)(param_2 + 1);
        lVar4 = *param_2;
      }
      iVar11 = (int)uVar3;
      iVar6 = (int)((ulonglong)uVar3 >> 0x20);
      if ((int)uVar2 < 1) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        uVar8 = (ulonglong)uVar2;
        do {
          uVar9 = (int)(uVar8 >> 1) + uVar10;
          uVar3 = *(undefined8 *)(lVar4 + (ulonglong)uVar9 * 0x10);
          iVar12 = (int)uVar3 - iVar11;
          if (iVar12 == 0) {
            iVar12 = (int)((ulonglong)uVar3 >> 0x20) - iVar6;
          }
          uVar7 = (uint)uVar8;
          if (iVar12 < 0) {
            uVar10 = uVar9 + (uVar7 & 1);
          }
          uVar8 = uVar8 >> 1;
        } while (1 < uVar7);
      }
      if ((int)uVar10 < (int)uVar2) {
        lVar1 = lVar4 + (ulonglong)uVar10 * 0x10;
        uVar3 = *(undefined8 *)(lVar4 + (ulonglong)uVar10 * 0x10);
        iVar11 = iVar11 - (int)uVar3;
        if (iVar11 == 0) {
          iVar11 = iVar6 - (int)((ulonglong)uVar3 >> 0x20);
        }
        if ((lVar1 != 0) && (-1 < iVar11)) {
          lVar13 = lVar13 + lVar5 * 0x10;
          *(float *)(lVar13 + 8) = *(float *)(lVar13 + 8) - *(float *)(lVar1 + 8);
          *(byte *)(lVar13 + 0xc) = *(byte *)(lVar13 + 0xc) | *(byte *)(lVar1 + 0xc);
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 140921370 FUN_140921370 body=1232 status=ok
// SIG undefined FUN_140921370(void)

void FUN_140921370(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined1 local_1a0 [152];
  longlong *local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [64];
  undefined1 *local_a8;
  ulonglong local_a0;
  uint local_98 [2];
  uint *local_90;
  int local_88;
  uint uStack_84;
  undefined8 uStack_80;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar17 = 0;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0x400000000;
  local_90 = (uint *)0x0;
  local_88 = 0;
  uStack_84 = 0x20;
  uStack_80 = 0xffffffff;
  local_70 = 0;
  local_68 = 0;
  uVar13 = *(uint *)(param_1 + 0x38);
  local_1a8 = param_2;
  if ((longlong)(int)uVar13 != 0) {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar13);
    }
    lVar11 = *(longlong *)(param_1 + 0x30);
    FUN_147943e6a(local_e8);
    uVar18 = (ulonglong)(((uVar13 >> 1) - 1) + (uint)(uVar13 >> 1 == 0)) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar15 & 0x1f);
    if (lVar15 == 0) {
      iVar4 = 2;
    }
    if (uVar13 < 4) {
      iVar4 = 2;
    }
    if (local_68 < iVar4) {
      local_68 = iVar4;
      FUN_14794402e();
    }
    lVar15 = (ulonglong)uVar13 << 3;
    do {
      FUN_14794426e(local_e8,local_1a0,lVar11,0);
      lVar11 = lVar11 + 8;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  local_108 = (longlong *)0x0;
  local_100 = 1;
  uVar18 = 1;
  FUN_144ae0ffe(&local_108,1,0);
  iVar3 = local_88;
  *local_108 = param_1;
  iVar12 = 0;
  iVar4 = 0;
  if (local_88 != 0) {
    puVar5 = local_90;
    if (local_90 == (uint *)0x0) {
      puVar5 = local_98;
    }
    uVar13 = *puVar5;
    if (uVar13 == 0) {
      iVar4 = local_88 + 0x1e;
      if (-1 < local_88 + -1) {
        iVar4 = local_88 + -1;
      }
      uVar17 = 0;
      uVar18 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar18 = uVar17;
      }
      iVar12 = 0;
      do {
        if (uVar18 == uVar17) goto LAB_140921696;
        iVar12 = iVar12 + 0x20;
        uVar13 = puVar5[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar17 = 0;
      iVar12 = 0;
    }
    uVar18 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar18 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (local_88 <= iVar4) {
      iVar4 = local_88;
    }
  }
  if (iVar4 != local_88) {
    uVar13 = 0xffffffff;
    do {
      puVar14 = local_a8;
      if (local_a8 == (undefined1 *)0x0) {
        puVar14 = local_e8;
      }
      lVar11 = (longlong)iVar4 * 0x10;
      plVar6 = (longlong *)FUN_1478b0794(*(undefined8 *)(puVar14 + lVar11));
      if ((*(int *)(puVar14 + lVar11 + 4) == 0) ||
         (uVar9 = *(uint *)(puVar14 + lVar11), (int)uVar9 < 0)) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        if ((int)uVar9 < DAT_14c9647dc) {
          puVar10 = (undefined8 *)
                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
          if (((puVar10 == (undefined8 *)0x0) ||
              (*(int *)(puVar10 + 2) != *(int *)(puVar14 + lVar11 + 4))) ||
             ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) {
            uVar16 = 0;
          }
          else {
            uVar16 = *puVar10;
          }
        }
      }
      local_f8 = local_108;
      local_f0 = local_100;
      FUN_14792f258(local_1a0,&local_f8,0x3f800000,uVar16);
      (**(code **)(*plVar6 + 0x28))(plVar6,local_1a0,local_1a8);
      FUN_147937dd2(local_1a0);
      uVar13 = uVar13 & ~(uint)uVar18;
      puVar5 = local_90;
      if (local_90 == (uint *)0x0) {
        puVar5 = local_98;
      }
      iVar4 = (int)uVar17;
      lVar11 = (longlong)iVar4;
      uVar9 = puVar5[lVar11] & uVar13;
      if (uVar9 == 0) {
        iVar7 = local_88 + 0x1e;
        if (-1 < local_88 + -1) {
          iVar7 = local_88 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        iVar2 = iVar4;
        if (iVar4 < iVar7) {
          lVar15 = 0;
          do {
            uVar9 = puVar5[lVar11 + lVar15 + 1];
            if (uVar9 != 0) {
              uVar17 = (ulonglong)(iVar4 + (int)lVar15 + 1);
              uVar13 = 0xffffffff;
              goto LAB_140921667;
            }
            iVar12 = iVar12 + 0x20;
            lVar15 = lVar15 + 1;
            uVar13 = 0xffffffff;
            iVar2 = iVar8;
          } while (iVar8 - lVar11 != lVar15);
        }
        uVar17 = (ulonglong)(iVar2 + 1);
        iVar4 = local_88;
      }
      else {
LAB_140921667:
        uVar18 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar18 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (local_88 <= iVar4) {
          iVar4 = local_88;
        }
      }
    } while (iVar4 != iVar3);
  }
LAB_140921696:
  if (local_108 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  uVar17 = local_a0 >> 0x20;
  local_a0 = local_a0 & 0xffffffff00000000;
  if ((int)uVar17 != 0) {
    FUN_144b20932(local_e8,0);
  }
  uStack_80 = 0xffffffff;
  local_88 = 0;
  if (0x20 < uStack_84) {
    uStack_84 = 0x20;
    FUN_14008f53c(local_98,0);
  }
  if (local_90 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140921858 FUN_140921858 body=652 status=ok
// SIG undefined FUN_140921858(void)

void FUN_140921858(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[0x23] == *(char *)((longlong)param_1 + 0x106)) {
    if (param_1[0x10] != 0) {
      uVar4 = *(ushort *)((longlong)param_1 + 0x1dc);
      bVar3 = (**(code **)(param_1[6] + 0x68))(param_1 + 6);
      if (((byte)uVar4 & 1) != bVar3) {
        FUN_143dc1470(param_1,uVar4 & 0xff01);
      }
      uVar4 = *(ushort *)((longlong)param_1 + 0x1dc);
      uVar1 = *(ushort *)((longlong)param_1 + 0x104);
      if (((byte)(uVar4 >> 10) & 1) != ((byte)(uVar1 >> 10) & 1)) {
        FUN_1488e1d40(param_1 + 6,uVar4 >> 10 & 1);
        uVar1 = *(ushort *)((longlong)param_1 + 0x104);
        uVar4 = *(ushort *)((longlong)param_1 + 0x1dc);
      }
      if ((char)uVar1 < '\0' != (char)uVar4 < '\0') {
        if ((char)uVar4 < '\0') {
          *(ushort *)((longlong)param_1 + 0x104) = uVar1 | 0x80;
          if (((*(byte *)((longlong)param_1 + 0x102) & 1) == 0) &&
             (lVar6 = param_1[0x32], lVar6 != 0)) {
            lVar2 = param_1[0x31];
            if ((lVar2 != 0 & DAT_14c950c29) == 1) {
              FUN_1456cec3c(lVar2);
              lVar6 = param_1[0x32];
            }
            if (lVar6 == lVar2) {
              *(byte *)((longlong)param_1 + 0x102) = *(byte *)((longlong)param_1 + 0x102) | 1;
            }
          }
        }
        else {
          *(ushort *)((longlong)param_1 + 0x104) = uVar1 & 0xff7f;
        }
      }
      uVar4 = *(ushort *)((longlong)param_1 + 0x1de);
      if (*(ushort *)(param_1 + 0x75) != uVar4) {
        lVar6 = param_1[0x10];
        if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x208) & 2) != 0)) {
          uVar4 = uVar4 & ~*(ushort *)(lVar6 + 0x20a);
        }
        if (*(ushort *)(param_1 + 0x75) != uVar4) {
          *(ushort *)(param_1 + 0x75) = uVar4;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
        }
      }
    }
  }
  else {
    local_58 = param_1[0x24];
    FUN_1446dcdd4(local_50);
    if (DAT_14cb853e8 == 0) {
      bVar7 = true;
    }
    else {
      lVar6 = FUN_144837462(DAT_14cb853e8,local_50);
      bVar7 = lVar6 == 0;
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (!bVar7) {
      *(char *)((longlong)param_1 + 0x106) = (char)param_1[0x23];
      (**(code **)(*param_1 + 0x310))(param_1);
      (**(code **)(*param_1 + 0x2d8))(param_1);
      uVar5 = *(uint *)(param_1 + 0x20);
      if ((char)uVar5 < '\0') {
        FUN_1410a5dfc(param_1);
        uVar5 = *(uint *)(param_1 + 0x20);
      }
      if ((uVar5 >> 8 & 1) != 0) {
        FUN_140829f70(param_1);
        uVar5 = *(uint *)(param_1 + 0x20);
      }
      if ((uVar5 >> 9 & 1) != 0) {
        FUN_140b2fb7c(param_1);
      }
      if ((char)param_1[99] == (char)param_1[0x23]) {
        FUN_140603d90(param_1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140921afa FUN_140921afa body=41 status=ok
// SIG undefined FUN_140921afa(void)

void FUN_140921afa(undefined8 param_1,longlong *param_2)

{
  FUN_140921b24();
                    /* WARNING: Could not recover jumptable at 0x000140921b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b9600bc);
  return;
}



// FUNCTION 140921b24 FUN_140921b24 body=139 status=ok
// SIG undefined FUN_140921b24(void)

void FUN_140921b24(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x54f89935;
  uStack_24 = 0x870a4d39;
  uStack_20 = 0x9fb22a9c;
  uStack_1c = 0x725548e2;
  iVar1 = FUN_1448a256a();
  if ((((*(byte *)((longlong)param_2 + 0x29) & 1) != 0) && (iVar1 < 1)) &&
     ((*(byte *)(param_2 + 5) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0xed9) = 0;
    *(undefined1 *)(param_1 + 0xe01) = 0;
  }
  FUN_1448284b2(param_1,param_2);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b3e87a0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140921bb0 FUN_140921bb0 body=380 status=ok
// SIG undefined FUN_140921bb0(void)

longlong FUN_140921bb0(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140921d2c();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 140921d2c FUN_140921d2c body=228 status=ok
// SIG undefined FUN_140921d2c(void)

longlong FUN_140921d2c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6e900 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464c802e;
    local_38 = &LAB_14879b187;
    local_40 = FUN_14185fbab;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxGame",L"ProjectileBodyData",&DAT_14cb6e900,&DAT_14879b186);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6e900;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140921e12 FUN_140921e12 body=162 status=ok
// SIG undefined FUN_140921e12(void)

void FUN_140921e12(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc88) == '\0') && (-1 < *(int *)(param_1 + -0x2dc))) {
    lVar2 = *(longlong *)(param_1 + -0x2a0);
    if (lVar2 == 0) {
      (**(code **)(*(longlong *)(param_1 + -0x3b0) + 1000))(param_1 + -0x3b0);
      lVar2 = *(longlong *)(param_1 + -0x2a0);
      if (lVar2 == 0) {
        return;
      }
    }
    lVar1 = FUN_140789e1e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000140921e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140921eb4 FUN_140921eb4 body=504 status=ok
// SIG undefined FUN_140921eb4(void)

void FUN_140921eb4(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
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
  code *local_78 [3];
  longlong local_60;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + -0x18);
  if (lVar2 != 0) {
    lVar3 = FUN_1409220ae();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_14042b5a6(local_78,lVar2);
      FUN_14042b1ec(param_2,local_78,1);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_90 = local_78;
      local_78[0] = FUN_141030f22;
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
      if (DAT_14cac9ca8 == 0) goto LAB_14092201f;
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) {
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      goto LAB_140922021;
    }
  }
LAB_14092201f:
  uVar4 = 0;
LAB_140922021:
  FUN_14042b5a6(local_78,uVar4);
  FUN_14042b1ec(param_2,local_78,1);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409220ae FUN_1409220ae body=228 status=ok
// SIG undefined FUN_1409220ae(void)

longlong FUN_1409220ae(void)

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
  if (DAT_14cb58c18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140631fbe;
    local_20 = &LAB_145834656;
    local_28 = &LAB_14635d504;
    local_38 = &LAB_148655c25;
    local_40 = FUN_14184992a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActorScriptClass",&DAT_14cb58c18,&DAT_148655c24);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58c18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409221a2 FUN_1409221a2 body=233 status=ok
// SIG undefined FUN_1409221a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1409221a2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b19cd90;
  FUN_1405d7ab2(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_14092228b(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
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



// FUNCTION 14092228b FUN_14092228b body=51 status=ok
// SIG undefined FUN_14092228b(void)

void FUN_14092228b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1409222be FUN_1409222be body=113 status=ok
// SIG undefined FUN_1409222be(void)

undefined8 * FUN_1409222be(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_LAB_14a418080;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined1 *)((longlong)param_1 + 700) = 0;
  param_1[0x58] = 0xffffffffffffffff;
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) | 8;
  cVar1 = FUN_140922330(param_1);
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) & 0xef | cVar1 << 4;
  *(byte *)((longlong)param_1 + 0x2bd) = *(byte *)((longlong)param_1 + 0x2bd) & 0xe0;
  return param_1;
}



// FUNCTION 140922330 FUN_140922330 body=151 status=ok
// SIG undefined FUN_140922330(void)

bool FUN_140922330(longlong param_1)

{
  if ((((DAT_14c761968 == 0) || (2 < DAT_14c761ae8 - 1U)) ||
      ((*(byte *)(param_1 + 0x78) & 0x40) == 0)) && (*(char *)(param_1 + 0x82) == '\x01')) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14caff550) && (FUN_144b3d300(&DAT_14caff550), DAT_14caff550 == -1)) {
      DAT_14caff54c = DAT_14c760e18;
      _Init_thread_footer(&DAT_14caff550);
    }
    if (DAT_14caff54c == '\0') {
      return (*(byte *)(param_1 + 0x77) & 4) == 0;
    }
  }
  return false;
}



// FUNCTION 1409223c8 FUN_1409223c8 body=701 status=ok
// SIG undefined FUN_1409223c8(void)

void FUN_1409223c8(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
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
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_1447bda9c(param_1[0x2e],(int)param_1[0x2f]);
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_14024ff87(param_1[0x20],(int)param_1[0x21]);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_140922698(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1409226d0(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 2;
  plVar2 = param_1 + 4;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar2;
  if ((int)param_1[7] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = plVar1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      FUN_14755f982(*local_70 + (longlong)iStack_54 * 0x38 + 8);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_144748838(plVar1,0);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(plVar2,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_140922707(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 140922698 FUN_140922698 body=55 status=ok
// SIG undefined FUN_140922698(void)

void FUN_140922698(longlong *param_1)

{
  FUN_14092279a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409226d0 FUN_1409226d0 body=55 status=ok
// SIG undefined FUN_1409226d0(void)

void FUN_1409226d0(longlong *param_1)

{
  FUN_140922936(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140922707 FUN_140922707 body=147 status=ok
// SIG undefined FUN_140922707(void)

void FUN_140922707(longlong param_1,int param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0xa8);
    do {
      bVar1 = *(byte *)(puVar3 + 8);
      if ((bVar1 & 1) != 0) {
        puVar2 = puVar3;
        if ((bVar1 & 2) == 0) {
          puVar2 = (undefined8 *)*puVar3;
        }
        *(byte *)(puVar3 + 8) = bVar1 & 0xfe;
        (**(code **)*puVar2)(puVar2,0);
        if ((*(byte *)(puVar3 + 8) & 2) == 0) {
          FUN_1400020a8(*puVar3);
        }
      }
      if (puVar3[-4] != 0) {
        FUN_1400020a8();
      }
      if (puVar3[-7] != 0) {
        FUN_1400020a8();
      }
      FUN_1447bda9c(puVar3[-9]);
      if (puVar3[-9] != 0) {
        FUN_1400020a8();
      }
      puVar3 = puVar3 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14092279a FUN_14092279a body=411 status=ok
// SIG undefined FUN_14092279a(void)

void FUN_14092279a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x30;
      FUN_14024ff87(*(undefined8 *)(lVar2 + 0x18 + lVar5),*(undefined4 *)(lVar2 + 0x20 + lVar5));
      if (*(longlong *)(lVar2 + 0x18 + lVar5) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140922936 FUN_140922936 body=416 status=ok
// SIG undefined FUN_140922936(void)

void FUN_140922936(longlong *param_1,int param_2)

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
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
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
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140922ad8 FUN_140922ad8 body=329 status=ok
// SIG undefined FUN_140922ad8(void)

undefined4 *
FUN_140922ad8(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140922cb6(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_140922c22(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140922e92(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140922c22 FUN_140922c22 body=147 status=ok
// SIG undefined FUN_140922c22(void)

void FUN_140922c22(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1478c8728(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_140922c46;
    }
  }
  uVar1 = 0;
LAB_140922c46:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140922cb6 FUN_140922cb6 body=476 status=ok
// SIG undefined FUN_140922cb6(void)

int * FUN_140922cb6(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x10);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 140922e92 FUN_140922e92 body=682 status=ok
// SIG undefined FUN_140922e92(void)

void FUN_140922e92(longlong *param_1)

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
  int iVar12;
  longlong lVar13;
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
    if ((int)uVar7 < 1) goto LAB_140922ef6;
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
LAB_140922ef6:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
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
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 14092313c FUN_14092313c body=138 status=ok
// SIG undefined FUN_14092313c(void)

void FUN_14092313c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar1 = FUN_1409231c6(param_2);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x178), lVar1 != 0)) {
    lVar2 = FUN_14041aabe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
      uVar3 = *(undefined4 *)(lVar1 + 0x4a8);
      uVar4 = *(undefined4 *)(lVar1 + 0x4ac);
      uVar5 = *(undefined4 *)(lVar1 + 0x4b0);
      uVar6 = *(undefined4 *)(lVar1 + 0x4b4);
      goto LAB_14092319c;
    }
  }
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
LAB_14092319c:
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined1 *)(param_1 + 0x28) = 6;
  return;
}



// FUNCTION 1409231c6 FUN_1409231c6 body=99 status=ok
// SIG undefined FUN_1409231c6(void)

undefined8 FUN_1409231c6(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (((*(int *)(param_1 + 0x8c) != 0) && (uVar1 = *(uint *)(param_1 + 0x88), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x8c))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*puVar4;
      }
      else {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x00014092321b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x180))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14092322a FUN_14092322a body=193 status=ok
// SIG undefined FUN_14092322a(void)

void FUN_14092322a(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1409232ec(param_1 + 9);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001409232e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1409232ec FUN_1409232ec body=53 status=ok
// SIG undefined FUN_1409232ec(void)

void FUN_1409232ec(longlong *param_1)

{
  FUN_140923322();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140923322 FUN_140923322 body=88 status=ok
// SIG undefined FUN_140923322(void)

void FUN_140923322(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 14092337a FUN_14092337a body=284 status=ok
// SIG undefined FUN_14092337a(void)

undefined8
FUN_14092337a(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             longlong *param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = *param_5;
  *param_5 = 0;
  local_48 = (undefined4)param_5[1];
  *(undefined4 *)(param_5 + 1) = 0;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  local_60 = (undefined4 *)0x0;
  local_58 = 1;
  FUN_140923498(&local_60,1,0);
  *local_60 = local_78;
  local_60[1] = uStack_74;
  local_60[2] = uStack_70;
  local_60[3] = uStack_6c;
  local_80 = param_6;
  local_88 = &local_50;
  (**(code **)(*param_1 + 0x368))(param_1,param_2,&local_60,param_4);
  if (local_60 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((int)param_5[1] != 0) {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 == (undefined8 *)0x0) goto LAB_14092343c;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
LAB_14092343c:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140923498 FUN_140923498 body=228 status=ok
// SIG undefined FUN_140923498(void)

void FUN_140923498(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14092357c FUN_14092357c body=227 status=ok
// SIG undefined FUN_14092357c(void)

undefined8
FUN_14092357c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 local_60;
  longlong *local_58;
  undefined4 local_50;
  longlong local_48 [3];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = *param_5;
  local_58 = &local_30;
  *param_5 = 0;
  local_28 = (undefined4)param_5[1];
  *(undefined4 *)(param_5 + 1) = 0;
  local_68 = local_48;
  local_48[0] = 0;
  local_48[1] = 0;
  local_50 = param_6;
  local_60 = 1;
  (**(code **)(*param_1 + 0x398))(0,param_2);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((int)param_5[1] != 0) {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 == (undefined8 *)0x0) goto LAB_140923605;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
LAB_140923605:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140923660 FUN_140923660 body=4277 status=ok
// SIG undefined FUN_140923660(void)

longlong **
FUN_140923660(longlong *param_1,longlong **param_2,longlong *param_3,longlong *param_4,
             undefined8 *param_5,char param_6,longlong *param_7,uint param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 **ppuVar16;
  undefined4 *puVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_ae8 [32];
  uint local_ac8;
  longlong **local_ac0;
  longlong *local_ab8;
  longlong local_ab0;
  ulonglong local_aa8;
  longlong **local_aa0;
  longlong *local_a98;
  undefined4 *local_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 *local_a78;
  undefined4 local_a70;
  undefined8 local_a68 [2];
  undefined8 *local_a58;
  undefined4 local_a50;
  undefined8 local_a48 [2];
  undefined8 *local_a38;
  undefined4 local_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined4 local_a18;
  undefined4 uStack_a14;
  undefined4 uStack_a10;
  undefined4 uStack_a0c;
  undefined8 *local_a08;
  longlong *plStack_a00;
  int local_9f8;
  undefined4 *local_9e8;
  ulonglong uStack_9e0;
  undefined4 *local_9d8;
  undefined8 uStack_9d0;
  longlong local_9c8;
  undefined8 uStack_9c0;
  longlong *local_9b8;
  undefined8 uStack_9b0;
  longlong *local_9a8;
  undefined8 uStack_9a0;
  longlong *local_998;
  longlong *plStack_990;
  undefined4 *local_988;
  ulonglong uStack_980;
  longlong local_978 [256];
  undefined4 local_178 [2];
  longlong local_170 [32];
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_ae8;
  local_9b8 = (longlong *)0x0;
  uStack_9b0 = 0;
  local_9c8 = 0;
  uStack_9c0 = 0;
  local_9d8 = (undefined4 *)0x0;
  uStack_9d0 = 0;
  *param_2 = (longlong *)0x0;
  param_2[1] = (longlong *)0x0;
  local_a98 = param_4;
  if ((longlong)(int)param_3[1] == 0) {
LAB_14092428e:
    puVar15 = &local_a88;
    local_a88 = 0;
    uStack_a80 = 0;
LAB_1409242a1:
    plStack_990 = (longlong *)0x0;
    local_998 = (longlong *)0x0;
    FUN_1402a1d54(param_7,puVar15,&local_998);
    if ((int)plStack_990 != 0) {
      if (local_998 == (longlong *)0x0) goto LAB_1409242f9;
      (**(code **)*local_998)(local_998,0);
      FUN_1446efa72(&local_998,0,0,0x10);
      plStack_990 = (longlong *)((ulonglong)plStack_990 & 0xffffffff00000000);
    }
    if (local_998 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar17 = (undefined4 *)*param_3;
    local_a90 = puVar17 + (longlong)(int)param_3[1] * 4;
    local_aa8 = 0;
    local_ab8 = param_1;
    local_aa0 = param_2;
    do {
      if ((int)local_aa8 < 499) {
        local_aa8 = (ulonglong)((int)local_aa8 + 1);
      }
      else if (DAT_14c99f930 == (longlong *)0x0) {
        local_aa8 = 0;
      }
      else {
        local_aa8 = 0;
        (**(code **)(*DAT_14c99f930 + 8))();
      }
      lVar8 = FUN_14088624c(param_1);
      if (lVar8 == 0) {
        FUN_140056680(&local_998,L"ChangeBundleStateForPrimaryAssets failed to find NameData");
        (**(code **)(*param_1 + 0x4d0))(param_1,puVar17,&local_998);
        plVar12 = local_998;
      }
      else {
        local_70 = (longlong *)0x0;
        local_68 = 0x2000000000;
        if (param_6 == '\0') {
          FUN_147953e04(local_170);
          if ((longlong)*(int *)(param_5 + 1) != 0) {
            plVar12 = (longlong *)*param_5;
            lVar13 = (longlong)*(int *)(param_5 + 1) << 3;
            do {
              local_998 = plVar12;
              FUN_1479677f8(local_170);
              plVar12 = plVar12 + 1;
              lVar13 = lVar13 + -8;
            } while (lVar13 != 0);
          }
        }
        local_ab0 = lVar8;
        if ((longlong)(int)local_a98[1] != 0) {
          plVar11 = (longlong *)*local_a98;
          plVar12 = plVar11 + (int)local_a98[1];
          do {
            plVar9 = local_70;
            if (local_70 == (longlong *)0x0) {
              plVar9 = local_170;
            }
            lVar8 = (longlong)(int)local_68;
            if (lVar8 != 0) {
              uVar14 = 0;
              do {
                if (*(longlong *)((longlong)plVar9 + uVar14) == *plVar11) {
                  if ((int)(~uVar14 >> 3) != 0) goto LAB_1409237ec;
                  break;
                }
                uVar14 = uVar14 + 8;
              } while (lVar8 * 8 - uVar14 != 0);
            }
            uVar10 = (int)local_68 + 1;
            local_68 = CONCAT44(local_68._4_4_,uVar10);
            if (local_68._4_4_ < uVar10) {
              FUN_147056952(local_170);
            }
            plVar9 = local_70;
            if (local_70 == (longlong *)0x0) {
              plVar9 = local_170;
            }
            plVar9[lVar8] = *plVar11;
LAB_1409237ec:
            plVar11 = plVar11 + 1;
          } while (plVar11 != plVar12);
        }
        plVar12 = local_70;
        if (local_70 == (longlong *)0x0) {
          plVar12 = local_170;
        }
        FUN_14063460b(plVar12,local_68 & 0xffffffff);
        uVar14 = uStack_9c0;
        lVar13 = local_ab0;
        param_1 = local_ab8;
        lVar8 = *(longlong *)(local_ab0 + 0x68);
        if (((lVar8 == 0) || (*(char *)(lVar8 + 0x12) != '\0')) || (*(char *)(lVar8 + 0x11) != '\0')
           ) {
          lVar8 = *(longlong *)(local_ab0 + 0x48);
          if (((lVar8 != 0) && (*(char *)(lVar8 + 0x12) == '\0')) &&
             (*(char *)(lVar8 + 0x11) == '\0')) {
            iVar7 = *(int *)(local_ab0 + 0x60);
            if (iVar7 == (int)local_68) {
              plVar12 = local_70;
              if (iVar7 != 0) {
                plVar11 = local_70;
                if (local_70 == (longlong *)0x0) {
                  plVar11 = local_170;
                }
                lVar8 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(local_ab0 + 0x58) + lVar8 * 8) != plVar11[lVar8])
                  goto LAB_1409239ae;
                  lVar8 = lVar8 + 1;
                } while (iVar7 != lVar8);
              }
              goto LAB_140924076;
            }
          }
        }
        else {
          plVar12 = (longlong *)(local_ab0 + 0x68);
          iVar7 = *(int *)(local_ab0 + 0x80);
          if (iVar7 == (int)local_68) {
            if (iVar7 != 0) {
              plVar11 = local_70;
              if (local_70 == (longlong *)0x0) {
                plVar11 = local_170;
              }
              lVar19 = 0;
              do {
                if (*(longlong *)(*(longlong *)(local_ab0 + 0x78) + lVar19 * 8) != plVar11[lVar19])
                goto LAB_1409239a4;
                lVar19 = lVar19 + 1;
              } while (iVar7 != lVar19);
            }
            lVar19 = (longlong)(int)uStack_9c0;
            uVar10 = (int)uStack_9c0 + 1;
            uStack_9c0 = CONCAT44(uStack_9c0._4_4_,uVar10);
            if (uStack_9c0._4_4_ < uVar10) {
              FUN_1417b93bc(&local_9c8,uVar14 & 0xffffffff);
              lVar8 = *plVar12;
            }
            *(longlong *)(local_9c8 + lVar19 * 0x10) = lVar8;
            lVar8 = *(longlong *)(lVar13 + 0x70);
            *(longlong *)(local_9c8 + 8 + lVar19 * 0x10) = lVar8;
            plVar12 = local_70;
            if (lVar8 != 0) {
              LOCK();
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
              UNLOCK();
            }
            goto LAB_140924076;
          }
LAB_1409239a4:
          FUN_1408861c0(plVar12,1);
        }
LAB_1409239ae:
        local_9e8 = (undefined4 *)0x0;
        uStack_9e0 = 0;
        if (*(longlong *)(lVar13 + 8) != 0) {
          uStack_9e0 = 1;
          FUN_1406f071e(&local_9e8,0);
          uVar3 = *(undefined4 *)(lVar13 + 0xc);
          uVar4 = *(undefined4 *)(lVar13 + 0x10);
          uVar5 = *(undefined4 *)(lVar13 + 0x14);
          *local_9e8 = *(undefined4 *)(lVar13 + 8);
          local_9e8[1] = uVar3;
          local_9e8[2] = uVar4;
          local_9e8[3] = uVar5;
          *(undefined8 *)(local_9e8 + 4) = 0;
          iVar7 = *(int *)(lVar13 + 0x20);
          _Src = *(void **)(lVar13 + 0x18);
          local_9e8[6] = iVar7;
          if ((longlong)iVar7 == 0) {
            local_9e8[7] = 0;
          }
          else {
            puVar15 = (undefined8 *)(local_9e8 + 4);
            FUN_1446dd670(puVar15,iVar7,0);
            memcpy((void *)*puVar15,_Src,(longlong)iVar7 * 2);
          }
        }
        plVar12 = local_70;
        if (local_70 == (longlong *)0x0) {
          plVar12 = local_170;
        }
        if ((longlong)(int)local_68 != 0) {
          plVar11 = plVar12 + (int)local_68;
          do {
            (**(code **)(*param_1 + 0x3b0))(param_1,&local_a08,puVar17,*plVar12);
            plVar9 = plStack_a00;
            if ((local_a08 != (undefined8 *)0x0) && (lVar8 = (longlong)local_9f8, lVar8 != 0)) {
              lVar13 = 0;
              do {
                puVar2 = (undefined4 *)((longlong)plVar9 + lVar13);
                local_a18 = *puVar2;
                uStack_a14 = puVar2[1];
                uStack_a10 = puVar2[2];
                uStack_a0c = puVar2[3];
                local_998 = (longlong *)0x0;
                plStack_990 = (longlong *)0x0;
                local_988 = (undefined4 *)0x0;
                uStack_980 = 0;
                local_9a8 = (longlong *)0x0;
                uStack_9a0 = 0;
                FUN_1400b3bc2(&local_998,&local_a18,&local_9a8);
                FUN_144a1f04a(&local_9e8,&local_998);
                if (local_988 != (undefined4 *)0x0) {
                  FUN_1400020a8();
                }
                lVar13 = lVar13 + 0x10;
                param_1 = local_ab8;
              } while (lVar8 * 0x10 != lVar13);
            }
            if (plStack_a00 != (longlong *)0x0) {
              FUN_1400020a8(plStack_a00);
            }
            plVar12 = plVar12 + 1;
          } while (plVar12 != plVar11);
        }
        lVar8 = local_ab0;
        if ((int)uStack_9e0 == 0) {
          FUN_1417a956c(local_ab0 + 0x58,local_170);
          *(undefined8 *)(lVar8 + 0x48) = 0;
          plVar12 = *(longlong **)(lVar8 + 0x50);
          if (plVar12 != (longlong *)0x0) {
            *(undefined8 *)(lVar8 + 0x50) = 0;
            goto LAB_14092402b;
          }
        }
        else {
          uStack_980 = uStack_980 & 0xffffffffffffff00;
          local_998 = local_978;
          local_988 = local_178;
          plStack_990 = local_998;
          FUN_1408866c2(puVar17,&local_998);
          lVar8 = local_ab0;
          if (0 < (int)local_68) {
            if (local_988 <= (undefined4 *)((longlong)plStack_990 + 4)) {
              FUN_140213274(&local_998,2);
            }
            *(undefined4 *)plStack_990 = 0x280020;
            plStack_990 = (longlong *)((longlong)plStack_990 + 4);
            if (0 < (int)local_68) {
              lVar13 = 0;
              lVar19 = 0;
              do {
                if (lVar19 != 0) {
                  if (local_988 <= (undefined4 *)((longlong)plStack_990 + 4)) {
                    FUN_140213274(&local_998,2);
                  }
                  *(undefined4 *)plStack_990 = 0x20002c;
                  plStack_990 = (longlong *)((longlong)plStack_990 + 4);
                }
                plVar12 = local_70;
                if (local_70 == (longlong *)0x0) {
                  plVar12 = local_170;
                }
                FUN_14005eb5c((longlong)plVar12 + lVar13,&local_998);
                lVar19 = lVar19 + 1;
                lVar13 = lVar13 + 8;
                lVar8 = local_ab0;
              } while (lVar19 < (int)local_68);
            }
            if (local_988 <= (undefined4 *)((longlong)plStack_990 + 2)) {
              FUN_140213274(&local_998,1);
            }
            *(undefined2 *)plStack_990 = 0x29;
            plStack_990 = (longlong *)((longlong)plStack_990 + 2);
          }
          *(undefined2 *)plStack_990 = 0;
          FUN_14006620a(&local_9a8,local_998,
                        (ulonglong)((longlong)plStack_990 - (longlong)local_998) >> 1);
          local_a28 = 0;
          uStack_a20 = 0;
          local_ac8 = param_8;
          local_ac0 = &local_9a8;
          FUN_140a27c06(param_1,&local_a08,&local_9e8,&local_a28);
          plVar12 = plStack_a00;
          puVar15 = local_a08;
          local_a08 = (undefined8 *)0x0;
          if (plStack_a00 != (longlong *)0x0) {
            plStack_a00 = (longlong *)0x0;
          }
          if (local_9a8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (puVar15 != (undefined8 *)0x0) {
            if (*(char *)(puVar15 + 2) == '\x01') {
              FUN_1417a956c(lVar8 + 0x58,local_170);
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                UNLOCK();
              }
              plVar11 = *(longlong **)(lVar8 + 0x50);
              *(undefined8 **)(lVar8 + 0x48) = puVar15;
              *(longlong **)(lVar8 + 0x50) = plVar12;
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                plVar9 = plVar11 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
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
            else {
              FUN_1417a956c(lVar8 + 0x78,local_170);
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                UNLOCK();
              }
              plVar11 = *(longlong **)(lVar8 + 0x70);
              *(undefined8 **)(lVar8 + 0x68) = puVar15;
              *(longlong **)(lVar8 + 0x70) = plVar12;
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                plVar9 = plVar11 + 1;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)*plVar9 == 0) {
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
              local_a08 = (undefined8 *)0x0;
              plStack_a00 = (longlong *)0x0;
              local_a38 = (undefined8 *)0x0;
              local_a30 = 0;
              FUN_1446efa72(&local_a38,0,5,0x10);
              puVar6 = local_a38;
              local_a30 = 5;
              *local_a38 = &PTR_LAB_14a7ec3e0;
              uVar3 = puVar17[1];
              uVar4 = puVar17[2];
              uVar5 = puVar17[3];
              *(undefined4 *)(local_a38 + 1) = *puVar17;
              *(undefined4 *)((longlong)local_a38 + 0xc) = uVar3;
              *(undefined4 *)(local_a38 + 2) = uVar4;
              *(undefined4 *)((longlong)local_a38 + 0x14) = uVar5;
              local_a38[3] = puVar15;
              local_a38[4] = plVar12;
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                UNLOCK();
              }
              local_a38[5] = local_a08;
              local_a08 = (undefined8 *)0x0;
              *(int *)(local_a38 + 6) = (int)plStack_a00;
              plStack_a00 = (longlong *)((ulonglong)plStack_a00 & 0xffffffff00000000);
              LOCK();
              UNLOCK();
              lVar13 = DAT_14c758608 + 1;
              lVar8 = DAT_14c758608 + 1;
              if (lVar13 == 0) {
                LOCK();
                UNLOCK();
                lVar13 = DAT_14c758608 + 2;
                lVar8 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar8;
              local_a38[7] = lVar13;
              *local_a38 = &PTR_FUN_14a7ec370;
              local_a38[8] = 0;
              if (param_1 == (longlong *)0x0) {
                iVar7 = 0;
              }
              else {
                uVar10 = *(uint *)((longlong)param_1 + 0xc);
                *(uint *)(local_a38 + 8) = uVar10;
                if ((int)uVar10 < DAT_14c9647dc) {
                  lVar8 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                }
                else {
                  lVar8 = 0;
                }
                iVar7 = *(int *)(lVar8 + 0x10);
                if (*(int *)(lVar8 + 0x10) == 0) {
                  LOCK();
                  iVar7 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar18 = DAT_14c964868 + 1;
                  bVar20 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar7;
                  if (bVar20) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar18);
                  }
                  LOCK();
                  iVar7 = *(int *)(lVar8 + 0x10);
                  bVar20 = iVar7 == 0;
                  if (bVar20) {
                    *(int *)(lVar8 + 0x10) = iVar18;
                    iVar7 = 0;
                  }
                  UNLOCK();
                  if (bVar20) {
                    iVar7 = iVar18;
                  }
                }
              }
              *(int *)((longlong)puVar6 + 0x44) = iVar7;
              puVar6[9] = &LAB_140a82eb2;
              FUN_1417f21ce(puVar15,&local_a38);
              if ((int)plStack_a00 != 0) {
                param_1 = local_ab8;
                if (local_a08 == (undefined8 *)0x0) goto LAB_140923f93;
                (**(code **)*local_a08)(local_a08,0);
                FUN_1446efa72(&local_a08,0,0,0x10);
                plStack_a00 = (longlong *)((ulonglong)plStack_a00 & 0xffffffff00000000);
              }
              param_1 = local_ab8;
              if (local_a08 != (undefined8 *)0x0) {
                FUN_1400020a8();
                param_1 = local_ab8;
              }
            }
LAB_140923f93:
            uVar14 = uStack_9b0;
            lVar8 = (longlong)(int)uStack_9b0;
            uVar10 = (int)uStack_9b0 + 1;
            uStack_9b0 = CONCAT44(uStack_9b0._4_4_,uVar10);
            if (uStack_9b0._4_4_ < uVar10) {
              FUN_1417b93bc(&local_9b8,uVar14 & 0xffffffff);
            }
            uVar14 = uStack_9d0;
            local_9b8[lVar8 * 2] = (longlong)puVar15;
            local_9b8[lVar8 * 2 + 1] = (longlong)plVar12;
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
              UNLOCK();
            }
            lVar8 = (longlong)(int)uStack_9d0;
            uVar10 = (int)uStack_9d0 + 1;
            uStack_9d0 = CONCAT44(uStack_9d0._4_4_,uVar10);
            if (uStack_9d0._4_4_ < uVar10) {
              FUN_1417b92ae(&local_9d8,uVar14 & 0xffffffff);
            }
            uVar3 = puVar17[1];
            uVar4 = puVar17[2];
            uVar5 = puVar17[3];
            puVar2 = local_9d8 + lVar8 * 4;
            *puVar2 = *puVar17;
            puVar2[1] = uVar3;
            puVar2[2] = uVar4;
            puVar2[3] = uVar5;
          }
          if ((char)uStack_980 == '\x01') {
            FUN_1400020a8(local_998);
          }
          if (plVar12 != (longlong *)0x0) {
LAB_14092402b:
            LOCK();
            plVar11 = plVar12 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
        }
        FUN_140861e20(local_9e8,uStack_9e0 & 0xffffffff);
        plVar12 = local_70;
        if (local_9e8 != (undefined4 *)0x0) {
          FUN_1400020a8();
          plVar12 = local_70;
        }
      }
LAB_140924076:
      if (plVar12 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      param_2 = local_aa0;
      puVar17 = puVar17 + 4;
    } while (puVar17 != local_a90);
    if (((int)uStack_9b0 < 2) && ((int)uStack_9c0 < 1)) {
      if ((int)uStack_9b0 != 1) goto LAB_14092428e;
      plVar12 = (longlong *)*local_9b8;
      plVar11 = (longlong *)local_9b8[1];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      plVar9 = local_aa0[1];
      *local_aa0 = plVar12;
      local_aa0[1] = plVar11;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar9 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
      puVar17 = local_9d8;
      plVar12 = *param_2;
      if ((char)plVar12[2] == '\x01') {
        puVar15 = local_a68;
        goto LAB_140924289;
      }
      local_a78 = (undefined8 *)0x0;
      local_a70 = 0;
      FUN_1446efa72(&local_a78,0,5,0x10);
      puVar15 = local_a78;
      local_a70 = 5;
      *local_a78 = &PTR_LAB_14a7ec3e0;
      uVar3 = puVar17[1];
      uVar4 = puVar17[2];
      uVar5 = puVar17[3];
      *(undefined4 *)(local_a78 + 1) = *puVar17;
      *(undefined4 *)((longlong)local_a78 + 0xc) = uVar3;
      *(undefined4 *)(local_a78 + 2) = uVar4;
      *(undefined4 *)((longlong)local_a78 + 0x14) = uVar5;
      local_a78[3] = *param_2;
      plVar11 = param_2[1];
      local_a78[4] = plVar11;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      local_a78[5] = 0;
      *(undefined4 *)(local_a78 + 6) = 0;
      local_a78[5] = *param_7;
      *param_7 = 0;
      *(int *)(local_a78 + 6) = (int)param_7[1];
      *(undefined4 *)(param_7 + 1) = 0;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_a78[7] = lVar13;
      *local_a78 = &PTR_FUN_14a7ec370;
      local_a78[8] = 0;
      if (local_ab8 == (longlong *)0x0) {
        iVar7 = 0;
      }
      else {
        uVar10 = *(uint *)((longlong)local_ab8 + 0xc);
        *(uint *)(local_a78 + 8) = uVar10;
        if ((int)uVar10 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar7 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar18 = DAT_14c964868 + 1;
          bVar20 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar20) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar18);
          }
          LOCK();
          iVar7 = *(int *)(lVar8 + 0x10);
          bVar20 = iVar7 == 0;
          if (bVar20) {
            *(int *)(lVar8 + 0x10) = iVar18;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar20) {
            iVar7 = iVar18;
          }
        }
      }
      *(int *)((longlong)puVar15 + 0x44) = iVar7;
      puVar15[9] = &LAB_140a82eb2;
      ppuVar16 = &local_a78;
    }
    else {
      FUN_146107582(&local_9b8,&local_9c8);
      local_998 = (longlong *)param_1[3];
      FUN_1400021e4(&local_998,&local_a08);
      param_2 = local_aa0;
      puVar15 = local_a08;
      if ((int)plStack_a00 == 0) {
        puVar15 = (undefined8 *)&DAT_149dfb77a;
      }
      FUN_140002266(local_170,L"%s CreateCombinedHandle",puVar15);
      local_9a8 = local_9b8;
      uStack_9a0 = CONCAT44(uStack_9a0._4_4_,(int)uStack_9b0);
      local_ac8 = local_ac8 & 0xffffff00;
      FUN_147d5dc26(param_1 + 0x3d,&local_998,&local_9a8,local_170);
      plVar12 = plStack_990;
      if (&local_998 != param_2) {
        *param_2 = local_998;
        local_998 = (longlong *)0x0;
        plVar11 = param_2[1];
        if (plStack_990 != plVar11) {
          plStack_990 = (longlong *)0x0;
          param_2[1] = plVar12;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar11 + 1;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)*plVar12 == 0) {
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
      }
      plVar12 = plStack_990;
      if (plStack_990 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_990 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plStack_990)(plStack_990);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      if (local_170[0] != 0) {
        FUN_1400020a8();
      }
      if (local_a08 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      plVar12 = *param_2;
      if ((char)plVar12[2] == '\x01') {
        puVar15 = local_a48;
LAB_140924289:
        *puVar15 = 0;
        puVar15[1] = 0;
        goto LAB_1409242a1;
      }
      local_a58 = (undefined8 *)*param_7;
      ppuVar16 = &local_a58;
      *param_7 = 0;
      local_a50 = (undefined4)param_7[1];
      *(undefined4 *)(param_7 + 1) = 0;
    }
    FUN_1417f21ce(plVar12,ppuVar16);
  }
LAB_1409242f9:
  if (local_9d8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14068cddc(local_9c8,uStack_9c0 & 0xffffffff);
  if (local_9c8 != 0) {
    FUN_1400020a8();
  }
  FUN_14068cddc(local_9b8,uStack_9b0 & 0xffffffff);
  if (local_9b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((int)param_7[1] != 0) {
    puVar15 = (undefined8 *)*param_7;
    if (puVar15 == (undefined8 *)0x0) goto LAB_140924396;
    (**(code **)*puVar15)(puVar15,0);
    FUN_1446efa72(param_7,0,0,0x10);
    *(undefined4 *)(param_7 + 1) = 0;
  }
  if (*param_7 != 0) {
    FUN_1400020a8();
  }
LAB_140924396:
  if ((local_60 ^ (ulonglong)auStack_ae8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140924716 FUN_140924716 body=107 status=ok
// SIG undefined FUN_140924716(void)

int FUN_140924716(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_140924781(lVar1 + (longlong)iVar4 * 0x20,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 140924781 FUN_140924781 body=21 status=ok
// SIG undefined FUN_140924781(void)

undefined8 FUN_140924781(ulonglong *param_1,ulonglong *param_2)

{
  return CONCAT71((int7)((*param_1 ^ *param_2) >> 8),
                  *(longlong *)((longlong)param_1 + 6) == *(longlong *)((longlong)param_2 + 6) &&
                  (*param_1 ^ *param_2) == 0);
}



// FUNCTION 140924796 FUN_140924796 body=743 status=ok
// SIG undefined FUN_140924796(void)

undefined8 * FUN_140924796(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_108 [40];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b0;
  
  uVar10 = DAT_14c8463f8;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_1[2] = DAT_14c8463f0;
  param_1[3] = uVar10;
  uVar10 = DAT_14c8463f8;
  *param_1 = DAT_14c8463f0;
  param_1[1] = uVar10;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar4 = param_2[1];
  param_1[9] = *param_2;
  param_1[10] = lVar4;
  uVar10 = param_3[1];
  param_1[0xb] = *param_3;
  param_1[0xc] = uVar10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  pdVar2 = (double *)*param_3;
  pdVar3 = (double *)*param_2;
  puVar1 = param_1 + 6;
  *(float *)(param_1 + 5) =
       (float)SQRT((pdVar2[2] - pdVar3[2]) * (pdVar2[2] - pdVar3[2]) +
                   (pdVar2[1] - pdVar3[1]) * (pdVar2[1] - pdVar3[1]) +
                   (*pdVar2 - *pdVar3) * (*pdVar2 - *pdVar3));
  iVar11 = FUN_140924a7e(puVar1,0,*param_2);
  lVar4 = param_1[6];
  lVar12 = (longlong)iVar11 * 0x58;
  lVar5 = *param_2;
  dVar8 = (double)FUN_144719204((int)*(undefined8 *)(lVar5 + 0x18),0);
  dVar9 = (double)FUN_144719204((int)*(undefined8 *)(lVar5 + 0x20),0);
  dVar6 = sin(dVar8 * 0.017453292519943295);
  dVar8 = cos(dVar8 * 0.017453292519943295);
  dVar7 = sin(dVar9 * 0.017453292519943295);
  dVar9 = cos(dVar9 * 0.017453292519943295);
  *(double *)(lVar4 + 0x38 + lVar12) = dVar9 * dVar8;
  *(double *)(lVar4 + 0x40 + lVar12) = dVar7 * dVar8;
  *(double *)(lVar4 + 0x48 + lVar12) = dVar6;
  *(double *)(lVar4 + 0x20 + lVar12) = dVar9 * dVar8;
  *(double *)(lVar4 + 0x28 + lVar12) = dVar7 * dVar8;
  *(double *)(lVar4 + 0x30 + lVar12) = dVar6;
  *(undefined1 *)(lVar4 + 0x50 + lVar12) = 1;
  iVar11 = FUN_140924a7e(puVar1,*(undefined4 *)(param_1 + 5),*param_3);
  lVar4 = param_1[6];
  lVar12 = (longlong)iVar11 * 0x58;
  lVar5 = *param_2;
  dVar8 = (double)FUN_144719204((int)*(undefined8 *)(lVar5 + 0x18),0);
  dVar9 = (double)FUN_144719204((int)*(undefined8 *)(lVar5 + 0x20),0);
  dVar6 = sin(dVar8 * 0.017453292519943295);
  dVar8 = cos(dVar8 * 0.017453292519943295);
  dVar7 = sin(dVar9 * 0.017453292519943295);
  dVar9 = cos(dVar9 * 0.017453292519943295);
  *(double *)(lVar4 + 0x38 + lVar12) = dVar9 * dVar8;
  *(double *)(lVar4 + 0x40 + lVar12) = dVar7 * dVar8;
  *(double *)(lVar4 + 0x48 + lVar12) = dVar6;
  *(double *)(lVar4 + 0x20 + lVar12) = dVar9 * dVar8;
  *(double *)(lVar4 + 0x28 + lVar12) = dVar7 * dVar8;
  *(double *)(lVar4 + 0x30 + lVar12) = dVar6;
  *(undefined1 *)(lVar4 + 0x50 + lVar12) = 1;
  FUN_140924b76(puVar1,&local_c8,&local_e0,&DAT_14c8464e0);
  *(undefined4 *)param_1 = local_c8;
  *(undefined4 *)((longlong)param_1 + 4) = uStack_c4;
  *(undefined4 *)(param_1 + 1) = uStack_c0;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_bc;
  *(undefined4 *)(param_1 + 2) = local_e0;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_dc;
  *(undefined4 *)(param_1 + 3) = uStack_d8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_d4;
  *(undefined1 *)(param_1 + 4) = 1;
  if ((local_b0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140924a7e FUN_140924a7e body=247 status=ok
// SIG undefined FUN_140924a7e(void)

ulonglong FUN_140924a7e(longlong *param_1,float param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  float *pfVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_88 [44];
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = *(uint *)(param_1 + 1);
  uVar7 = 0;
  if (0 < (int)uVar3) {
    pfVar6 = (float *)*param_1;
    uVar7 = 0;
    do {
      if (param_2 < *pfVar6 || param_2 == *pfVar6) goto LAB_140924aca;
      uVar7 = uVar7 + 1;
      pfVar6 = pfVar6 + 0x16;
    } while (uVar3 != uVar7);
    uVar7 = (ulonglong)uVar3;
  }
LAB_140924aca:
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar3 + 1) {
    FUN_140924c58(param_1,uVar3);
  }
  lVar8 = (uVar7 & 0xffffffff) * 0x58;
  memmove((void *)(*param_1 + lVar8 + 0x58),(void *)(*param_1 + lVar8),
          (ulonglong)(uVar3 - (int)uVar7) * 0x58);
  uVar4 = param_3[2];
  local_58 = (undefined4)*param_3;
  uStack_54 = (undefined4)((ulonglong)*param_3 >> 0x20);
  uStack_50 = (undefined4)param_3[1];
  uStack_4c = (undefined4)((ulonglong)param_3[1] >> 0x20);
  lVar5 = *param_1;
  *(float *)(lVar5 + lVar8) = param_2;
  local_48._0_4_ = (undefined4)uVar4;
  local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  puVar1 = (undefined4 *)(lVar5 + 0x10 + lVar8);
  *puVar1 = uStack_50;
  puVar1[1] = uStack_4c;
  puVar1[2] = (undefined4)local_48;
  puVar1[3] = local_48._4_4_;
  puVar2 = (undefined8 *)(lVar5 + 4 + lVar8);
  *puVar2 = CONCAT44(local_58,uStack_5c);
  puVar2[1] = CONCAT44(uStack_50,uStack_54);
  puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + 0x30 + lVar8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + 0x40 + lVar8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(lVar5 + 0x50 + lVar8) = 0;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
  local_48 = uVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140924b76 FUN_140924b76 body=225 status=ok
// SIG undefined FUN_140924b76(void)

void FUN_140924b76(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == 1) {
    lVar3 = *param_1;
    param_2[2] = *(undefined8 *)(lVar3 + 0x18);
    uVar7 = *(undefined8 *)(lVar3 + 0x10);
    *param_2 = *(undefined8 *)(lVar3 + 8);
    param_2[1] = uVar7;
    param_4 = (undefined8 *)(*param_1 + 8);
  }
  else {
    if (uVar2 != 0) {
      lVar3 = *param_1;
      param_2[2] = *(undefined8 *)(lVar3 + 0x18);
      uVar7 = *(undefined8 *)(lVar3 + 0x10);
      *param_2 = *(undefined8 *)(lVar3 + 8);
      param_2[1] = uVar7;
      lVar3 = *param_1;
      param_3[2] = *(undefined8 *)(lVar3 + 0x18);
      uVar4 = *(undefined4 *)(lVar3 + 0xc);
      uVar5 = *(undefined4 *)(lVar3 + 0x10);
      uVar6 = *(undefined4 *)(lVar3 + 0x14);
      *(undefined4 *)param_3 = *(undefined4 *)(lVar3 + 8);
      *(undefined4 *)((longlong)param_3 + 4) = uVar4;
      *(undefined4 *)(param_3 + 1) = uVar5;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar6;
      uVar8 = uVar2;
      if ((char)param_1[2] == '\0') {
        uVar8 = uVar2 - 1;
      }
      if ((int)uVar8 < 1) {
        return;
      }
      uVar9 = 0;
      do {
        uVar1 = uVar9 + 1;
        uVar10 = 0;
        if (uVar9 != uVar2 - 1) {
          uVar10 = uVar1;
        }
        FUN_1407210fe(uVar9 * 0x58 + *param_1,uVar10 * 0x58 + *param_1,param_2,param_3);
        uVar9 = uVar1;
      } while (uVar1 != uVar8);
      return;
    }
    param_2[2] = param_4[2];
    uVar7 = param_4[1];
    *param_2 = *param_4;
    param_2[1] = uVar7;
  }
  param_3[2] = param_4[2];
  uVar7 = param_4[1];
  *param_3 = *param_4;
  param_3[1] = uVar7;
  return;
}



// FUNCTION 140924c58 FUN_140924c58 body=366 status=ok
// SIG undefined FUN_140924c58(void)

void FUN_140924c58(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x58;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140924cdd;
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
LAB_140924cdd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 140924dc6 FUN_140924dc6 body=180 status=ok
// SIG undefined FUN_140924dc6(void)

void FUN_140924dc6(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined4 *)(param_1 + 0x98);
  local_38 = param_1;
  (**(code **)(*param_2 + 0x20))(param_2);
  uVar3 = (ulonglong)*(int *)(param_1 + 0x98);
  if (0 < (longlong)uVar3) {
    lVar4 = uVar3 * 0x48;
    do {
      lVar4 = lVar4 + -0x48;
      if (*(int *)(param_1 + 0x88) < 1) break;
      cVar2 = (**(code **)(*param_2 + 0x28))(param_2,*(longlong *)(param_1 + 0x90) + lVar4);
      if (cVar2 != '\0') {
        FUN_140924eba(param_1,(int)uVar3 + -1);
      }
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  FUN_140ea9bb6(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140924eba FUN_140924eba body=262 status=ok
// SIG undefined FUN_140924eba(void)

void FUN_140924eba(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = (longlong)(int)param_2 * 0x48;
  (**(code **)(*param_1 + 0xc0))(param_1,param_1[0x12] + lVar1);
  _Dst = (void *)(param_1[0x12] + lVar1);
  if ((*(byte *)(param_1[0x12] + 0x1c + lVar1) & 1) != 0) {
    *(int *)(param_1 + 0x11) = (int)param_1[0x11] + -1;
  }
  if (*(int *)((longlong)_Dst + 4) != -1) {
    *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) + -1;
  }
  if (*(char *)((longlong)_Dst + 0x14) == '\x01') {
    *(int *)(param_1 + 0x10) = (int)param_1[0x10] + -1;
  }
  *(undefined2 **)((longlong)_Dst + 0x28) = &DAT_14a171d50;
  *(undefined4 *)((longlong)_Dst + 0x40) = 0;
  if (*(int *)((longlong)_Dst + 0x44) != 0) {
    FUN_140115c12((longlong)_Dst + 0x38,0);
  }
  *(undefined8 *)((longlong)_Dst + 0x30) = 0;
  if (*(longlong *)((longlong)_Dst + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)_Dst + 0x14) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x14) = 0;
  }
  if (*(int *)((longlong)_Dst + 4) != -1) {
    *(undefined8 *)((longlong)_Dst + 4) = 0xffffffff;
  }
  iVar2 = (int)param_1[0x13];
  if (~param_2 + iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x48),(longlong)(int)(~param_2 + iVar2) * 0x48);
    iVar2 = (int)param_1[0x13];
  }
  *(int *)(param_1 + 0x13) = iVar2 + -1;
  FUN_140924fc0(param_1 + 0x12);
  return;
}



// FUNCTION 140924fc0 FUN_140924fc0 body=158 status=ok
// SIG undefined FUN_140924fc0(void)

void FUN_140924fc0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x48)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
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



// FUNCTION 14092505e FUN_14092505e body=1059 status=ok
// SIG undefined FUN_14092505e(void)

void FUN_14092505e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  void *_Dst;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  undefined8 *_Dst_00;
  longlong lVar18;
  float fVar19;
  float fVar20;
  
  iVar7 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar7 == 0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0xa0);
  lVar18 = 0;
  while (*(int *)(lVar4 + 8 + lVar18) != *(int *)(param_2 + 0x20)) {
    lVar18 = lVar18 + 0x48;
    if ((longlong)iVar7 * 0x48 == lVar18) {
      return;
    }
  }
  uVar16 = (int)(lVar18 >> 3) * 0x38e38e39;
  if ((int)uVar16 < 0) {
    return;
  }
  if (iVar7 <= (int)uVar16) {
    return;
  }
  uVar9 = (ulonglong)(uVar16 & 0x7fffffff);
  piVar2 = (int *)(lVar4 + 0x1c + uVar9 * 0x48);
  *piVar2 = *piVar2 + -1;
  lVar18 = *(longlong *)(lVar4 + 0x20 + uVar9 * 0x48);
  fVar20 = 0.0;
  if (*(char *)(lVar18 + 0xc) == '\x01') {
    fVar20 = *(float *)(lVar18 + 8);
  }
  lVar4 = lVar4 + uVar9 * 0x48;
  fVar20 = fVar20 - *(float *)(param_2 + 0x24);
  fVar19 = 0.0;
  if (0.0 <= fVar20) {
    fVar19 = fVar20;
  }
  *(float *)(lVar18 + 8) = fVar19;
  *(undefined1 *)(lVar18 + 0xc) = 1;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    uVar10 = *(uint *)(param_2 + 0x40);
    if ((longlong)(int)uVar10 != 0) {
      lVar11 = *(longlong *)(param_2 + 0x38);
      lVar18 = (longlong)(int)uVar10 * 8;
      lVar12 = 0;
      do {
        if (*(longlong *)(lVar11 + lVar12) != 0) {
          iVar7 = *(int *)(lVar4 + 0x38);
          if ((longlong)iVar7 != 0) {
            lVar12 = *(longlong *)(lVar4 + 0x30);
            lVar15 = lVar12;
            goto LAB_140925196;
          }
          break;
        }
        lVar12 = lVar12 + 8;
      } while (lVar18 - lVar12 != 0);
    }
  }
  goto LAB_1409251f0;
LAB_140925196:
  do {
    if (*(longlong *)(lVar15 + 8) == *(longlong *)(param_2 + 0x30)) {
      uVar3 = *(uint *)(lVar15 + 0x18);
      uVar6 = uVar10;
      if ((int)uVar3 < (int)uVar10) {
        uVar6 = uVar3;
      }
      if (0 < (int)uVar6) {
        uVar13 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar15 + 0x10) + uVar13 * 8) !=
              *(longlong *)(lVar11 + uVar13 * 8)) goto LAB_1409251e7;
          uVar13 = uVar13 + 1;
        } while (uVar6 != uVar13);
      }
      if ((int)uVar10 < (int)uVar3) {
        lVar14 = 0;
        while (*(longlong *)(*(longlong *)(lVar15 + 0x10) + lVar18 + lVar14 * 8) == 0) {
          lVar14 = lVar14 + 1;
          if (uVar3 - uVar10 == (int)lVar14) goto LAB_140925337;
        }
      }
      else {
        if ((int)uVar10 <= (int)uVar3) {
LAB_140925337:
          uVar10 = (int)(lVar15 - lVar12 >> 3) * -0x33333333;
          if ((-1 < (int)uVar10) && ((int)uVar10 < iVar7)) {
            lVar11 = (ulonglong)(uVar10 & 0x7fffffff) * 0x28;
            piVar2 = (int *)(lVar12 + 0x20 + lVar11);
            *piVar2 = *piVar2 + -1;
            lVar18 = *(longlong *)(lVar4 + 0x30);
            if (*(int *)(lVar18 + 0x20 + lVar11) == 0) {
              _Dst_00 = (undefined8 *)((ulonglong)(uVar10 & 0x7fffffff) * 0x28 + lVar18);
              *_Dst_00 = &DAT_14a171d50;
              *(undefined4 *)(_Dst_00 + 3) = 0;
              if (*(int *)((longlong)_Dst_00 + 0x1c) != 0) {
                FUN_140115c12(_Dst_00 + 2,0);
              }
              _Dst_00[1] = 0;
              if (_Dst_00[2] != 0) {
                FUN_1400020a8();
              }
              iVar7 = *(int *)(lVar4 + 0x38);
              iVar17 = ~uVar10 + iVar7;
              if (iVar17 != 0) {
                iVar8 = 1;
                if (iVar17 < 1) {
                  iVar8 = iVar17;
                }
                memmove(_Dst_00,(void *)((longlong)(iVar7 - iVar8) * 0x28 + lVar18),
                        (longlong)iVar8 * 0x28);
                iVar7 = *(int *)(lVar4 + 0x38);
              }
              *(int *)(lVar4 + 0x38) = iVar7 + -1;
              lVar18 = *(longlong *)(lVar4 + 0x20);
              (**(code **)(*(longlong *)(lVar18 + 0x58) + 0x20))
                        (lVar18 + 0x58,*(undefined8 *)(lVar18 + 0x60));
              if ((longlong)*(int *)(lVar4 + 0x38) != 0) {
                lVar18 = *(longlong *)(lVar4 + 0x30);
                lVar11 = (longlong)*(int *)(lVar4 + 0x38) * 0x28;
                do {
                  FUN_1405dc634(*(longlong *)(lVar4 + 0x20) + 0x58,lVar18);
                  lVar18 = lVar18 + 0x28;
                  lVar11 = lVar11 + -0x28;
                } while (lVar11 != 0);
              }
            }
          }
          break;
        }
        lVar14 = 0;
        while (*(longlong *)(lVar11 + (longlong)(int)uVar3 * 8 + lVar14 * 8) == 0) {
          lVar14 = lVar14 + 1;
          if (uVar10 - uVar3 == (int)lVar14) goto LAB_140925337;
        }
      }
    }
LAB_1409251e7:
    lVar15 = lVar15 + 0x28;
  } while (lVar15 != lVar12 + (longlong)iVar7 * 0x28);
LAB_1409251f0:
  *(float *)(param_1 + 0xb4) = *(float *)(param_1 + 0xb4) - *(float *)(param_2 + 0x24);
  if (*(int *)(lVar4 + 0x1c) == 0) {
    FUN_14092557a(param_1,lVar4,0);
  }
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (0 < *(int *)(lVar4 + 0x1c + uVar9 * 0x48)) {
    return;
  }
  _Dst = (void *)(lVar4 + uVar9 * 0x48);
  if (*(char *)((longlong)_Dst + 0x44) == '\x01') {
    *(undefined1 *)((longlong)_Dst + 0x44) = 0;
  }
  FUN_140925481(*(undefined8 *)((longlong)_Dst + 0x30),*(undefined4 *)((longlong)_Dst + 0x38));
  if (*(longlong *)((longlong)_Dst + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar5 = *(longlong **)((longlong)_Dst + 0x28);
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
  iVar7 = *(int *)(param_1 + 0xa8);
  iVar17 = ~uVar16 + iVar7;
  if (iVar17 != 0) {
    iVar8 = 1;
    if (iVar17 < 1) {
      iVar8 = iVar17;
    }
    memmove(_Dst,(void *)(lVar4 + (longlong)(iVar7 - iVar8) * 0x48),(longlong)iVar8 * 0x48);
    iVar7 = *(int *)(param_1 + 0xa8);
  }
  *(int *)(param_1 + 0xa8) = iVar7 + -1;
  FUN_1409254dc((longlong *)(param_1 + 0xa0));
  return;
}



// FUNCTION 140925481 FUN_140925481 body=91 status=ok
// SIG undefined FUN_140925481(void)

void FUN_140925481(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      plVar1[-2] = (longlong)&DAT_14a171d50;
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(int *)((longlong)plVar1 + 0xc) != 0) {
        FUN_140115c12(plVar1,0);
      }
      plVar1[-1] = 0;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1409254dc FUN_1409254dc body=158 status=ok
// SIG undefined FUN_1409254dc(void)

void FUN_1409254dc(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x48)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
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



// FUNCTION 14092557a FUN_14092557a body=537 status=ok
// SIG undefined FUN_14092557a(void)

void FUN_14092557a(longlong param_1,undefined8 *param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined4 local_60;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (plVar3 == (longlong *)0x0) goto LAB_140925728;
  iVar6 = (int)plVar3[1];
  do {
    if (iVar6 == 0) goto LAB_140925728;
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar11 = iVar6 == iVar5;
    if (bVar11) {
      *(int *)(plVar3 + 1) = iVar6 + 1;
      iVar5 = iVar6;
    }
    iVar6 = iVar5;
    UNLOCK();
  } while (!bVar11);
  lVar4 = *(longlong *)(param_1 + 0xb8);
  if (lVar4 != 0) {
    if (param_3 == '\0') {
      if ((*(char *)((longlong)param_2 + 0x44) == '\x01') &&
         (FUN_140925794(lVar4,*(undefined4 *)(param_2 + 8)),
         *(char *)((longlong)param_2 + 0x44) == '\x01')) {
        *(undefined1 *)((longlong)param_2 + 0x44) = 0;
      }
    }
    else {
      local_40 = param_2[4];
      local_38 = param_2[5];
      if (local_38 != 0) {
        LOCK();
        *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
        UNLOCK();
      }
      uVar8 = FUN_1409257c8();
      if (*(int *)(param_2 + 3) == 0) {
LAB_14092575f:
        lVar10 = 0;
      }
      else {
        uVar2 = *(uint *)((longlong)param_2 + 0x14);
        lVar10 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          plVar9 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((plVar9 == (longlong *)0x0) ||
             (((int)plVar9[2] != *(int *)(param_2 + 3) ||
              ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_14092575f;
          lVar10 = *plVar9;
        }
      }
      if (((((*(int *)(param_2 + 2) == 0) ||
            (uVar2 = *(uint *)((longlong)param_2 + 0xc), (int)uVar2 < 0)) ||
           (DAT_14c9647dc <= (int)uVar2)) ||
          ((plVar9 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_2 + 2))))) ||
         ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) {
        local_50 = 0;
      }
      else {
        local_50 = *plVar9;
        if (local_50 != 0 && DAT_14c950c29 == 1) {
          FUN_1456cec3c();
        }
      }
      local_48 = lVar10;
      if ((lVar10 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(lVar10);
      }
      local_68 = &local_40;
      local_60 = 0xffffffff;
      uVar7 = FUN_140600e02(lVar4,*param_2,&local_50,uVar8);
      *(undefined4 *)(param_2 + 8) = uVar7;
      *(undefined1 *)((longlong)param_2 + 0x44) = 1;
    }
  }
  LOCK();
  plVar9 = plVar3 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_140925728:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140925794 FUN_140925794 body=51 status=ok
// SIG undefined FUN_140925794(void)

void FUN_140925794(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    lVar2 = 0;
    do {
      piVar1 = *(int **)(*(longlong *)(param_1 + 0x70) + lVar2);
      if (*piVar1 == param_2) {
        if (piVar1 == (int *)0x0) {
          return;
        }
        FUN_14074668c(param_1,piVar1);
        return;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x78) * 8 != lVar2);
  }
  return;
}



// FUNCTION 1409257c8 FUN_1409257c8 body=285 status=ok
// SIG undefined FUN_1409257c8(void)

longlong FUN_1409257c8(void)

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
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1409258e6();
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_14092581f;
  }
  lVar1 = 0;
LAB_14092581f:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409258e6 FUN_1409258e6 body=77 status=ok
// SIG undefined FUN_1409258e6(void)

undefined8 FUN_1409258e6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x38) + 100);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x38) + 0x60);
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



// FUNCTION 140925942 FUN_140925942 body=40 status=ok
// SIG undefined FUN_140925942(void)

undefined8 FUN_140925942(undefined8 param_1,int param_2)

{
  FUN_14092596a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14092596a FUN_14092596a body=302 status=ok
// SIG undefined FUN_14092596a(void)

void FUN_14092596a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b07f9b0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_140925d9e(param_1 + 0x2a,0);
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_140925b01(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_140925aca(param_1 + 0x13);
  FUN_140925a98(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  return;
}



// FUNCTION 140925a98 FUN_140925a98 body=49 status=ok
// SIG undefined FUN_140925a98(void)

void FUN_140925a98(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140925aca FUN_140925aca body=55 status=ok
// SIG undefined FUN_140925aca(void)

void FUN_140925aca(longlong *param_1)

{
  FUN_140925b76(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140925b01 FUN_140925b01 body=116 status=ok
// SIG undefined FUN_140925b01(void)

void FUN_140925b01(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0xc] != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (param_1[10] != 0) {
      FUN_1400020a8();
    }
    FUN_140925aca(param_1 + 2);
    FUN_140925a98(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 140925b76 FUN_140925b76 body=551 status=ok
// SIG undefined FUN_140925b76(void)

void FUN_140925b76(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar9 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar10 = *puVar7;
    if (uVar10 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140925bab;
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar10 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar12 = (longlong)iVar6 * 0x20;
      FUN_140925a98(*(undefined8 *)(lVar11 + 8 + lVar12),*(undefined4 *)(lVar11 + 0x10 + lVar12));
      if (*(longlong *)(lVar11 + 8 + lVar12) != 0) {
        FUN_1400020a8();
      }
      uVar10 = uVar10 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar10;
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
        lVar12 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar7[lVar11 + lVar12 + 1];
          if (uVar3 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar5 - lVar11 == lVar12) goto LAB_140925bab;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar12 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140925bab:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar10 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar10 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar10) {
    uVar3 = uVar10;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140925d9e FUN_140925d9e body=384 status=ok
// SIG undefined FUN_140925d9e(void)

void FUN_140925d9e(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + 0x20 + (longlong)iStack_54 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140925f20 FUN_140925f20 body=669 status=ok
// SIG undefined FUN_140925f20(void)

void FUN_140925f20(longlong param_1)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FUN_1400020a8();
  }
  FUN_1409261c2(param_1 + 0x578);
  *(undefined4 *)(param_1 + 0x570) = 0;
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_1400020a8();
  }
  FUN_14092636e(param_1 + 0x528);
  FUN_1409263a6(param_1 + 0x450);
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x420) = 0;
  if (*(longlong *)(param_1 + 0x418) != 0) {
    FUN_1400020a8();
  }
  FUN_1409261c2(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    FUN_1400020a8();
  }
  FUN_14092636e(param_1 + 0x388);
  FUN_1409263a6(param_1 + 0x2b0);
  FUN_1409263a6(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1400020a8();
  }
  FUN_1409261c2(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_14092636e(param_1 + 0x110);
  ppuVar1 = &PTR_FUN_149e2b5a8;
  *(undefined ***)(param_1 + 0xf0) = &PTR_FUN_149e2b5a8;
  lVar2 = *(longlong *)(param_1 + 0xf8);
  if (lVar2 != 0) {
    do {
      lVar2 = *(longlong *)(lVar2 + 8);
      FUN_1400020a8();
      *(longlong *)(param_1 + 0xf8) = lVar2;
    } while (lVar2 != 0);
    ppuVar1 = *(undefined ***)(param_1 + 0xf0);
  }
  *(longlong *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  (*(code *)ppuVar1[1])((undefined8 *)(param_1 + 0xf0),0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_14092647e(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_140926446(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1409261be FUN_1409261be body=4 status=ok
// SIG undefined FUN_1409261be(void)

void FUN_1409261be(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 1409261c2 FUN_1409261c2 body=55 status=ok
// SIG undefined FUN_1409261c2(void)

void FUN_1409261c2(longlong *param_1)

{
  FUN_1409261fa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409261fa FUN_1409261fa body=370 status=ok
// SIG undefined FUN_1409261fa(void)

void FUN_1409261fa(longlong *param_1,int param_2)

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
      FUN_1457586f6((longlong)iStack_54 * 0x68 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14059f004(param_1,param_2);
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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14092636e FUN_14092636e body=55 status=ok
// SIG undefined FUN_14092636e(void)

void FUN_14092636e(longlong *param_1)

{
  FUN_1409264b6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409263a6 FUN_1409263a6 body=160 status=ok
// SIG undefined FUN_1409263a6(void)

void FUN_1409263a6(longlong param_1)

{
  undefined8 uVar1;
  
  if (DAT_14c872a72 == '\0') {
    uVar1 = FUN_14170a6a4();
    FUN_1408e7806(uVar1,param_1);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  FUN_1407da39a(param_1,0);
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c866fe8);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_1409261c2(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_141707446(param_1);
  return;
}



// FUNCTION 140926446 FUN_140926446 body=55 status=ok
// SIG undefined FUN_140926446(void)

void FUN_140926446(longlong *param_1)

{
  FUN_140926656(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14092647e FUN_14092647e body=55 status=ok
// SIG undefined FUN_14092647e(void)

void FUN_14092647e(longlong *param_1)

{
  FUN_1407da930(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409264b6 FUN_1409264b6 body=413 status=ok
// SIG undefined FUN_1409264b6(void)

void FUN_1409264b6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
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
      plVar2 = (longlong *)(*local_78 + (longlong)iStack_5c * 0xb8);
      FUN_140d69dce(plVar2 + 2);
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14018c050(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140926656 FUN_140926656 body=502 status=ok
// SIG undefined FUN_140926656(void)

void FUN_140926656(longlong *param_1,int param_2)

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
    iVar4 = 0;
    iVar10 = 0;
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
        if (uVar14 == uVar13) goto LAB_14092679e;
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
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar4 * 0x20) != 0) {
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
          if (iVar7 - lVar11 == lVar9) goto LAB_14092679e;
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
LAB_14092679e:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar5 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14092684e FUN_14092684e body=95 status=ok
// SIG undefined FUN_14092684e(void)

void FUN_14092684e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1409268ae(*(undefined8 *)(param_1 + 0x28));
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x48) = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(lVar1);
    *(longlong *)(param_1 + 0x48) = lVar1;
  }
  FUN_1447ba426(*(longlong *)(param_1 + 0x28) + 0x3e0,*(undefined2 *)(param_1 + 0x34),
                *(undefined2 *)(lVar1 + 0x34));
  return;
}



// FUNCTION 1409268ae FUN_1409268ae body=145 status=ok
// SIG undefined FUN_1409268ae(void)

longlong FUN_1409268ae(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140926940();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = FUN_140926a26(param_1,&local_18);
  if (lVar1 != 0) {
    lVar2 = FUN_140926940();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_140926912;
  }
  lVar1 = 0;
LAB_140926912:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140926940 FUN_140926940 body=228 status=ok
// SIG undefined FUN_140926940(void)

longlong FUN_140926940(void)

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
  if (DAT_14cab6098 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411e5bea;
    local_38 = &LAB_14769bb59;
    local_40 = FUN_1417a5e1d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1d0;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieScenePropertyInstantiatorSystem",&DAT_14cab6098
                  ,&DAT_14769bb58);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6098;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140926a26 FUN_140926a26 body=222 status=ok
// SIG undefined FUN_140926a26(void)

longlong FUN_140926a26(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar2 = FUN_1400a1050(param_1,&local_28);
  if (lVar2 == 0) {
    local_30 = *param_2;
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    cVar1 = FUN_140926b06(param_1 + 0x708,&local_30);
    if (cVar1 == '\0') {
      lVar2 = 0;
    }
    else {
      local_38 = *param_2;
      if ((local_38 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      lVar2 = FUN_1400a4ed2(param_1,&local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140926b06 FUN_140926b06 body=161 status=ok
// SIG undefined FUN_140926b06(void)

ulonglong FUN_140926b06(uint *param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  undefined7 uVar7;
  
  lVar2 = *param_2;
  uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (lVar2 == 0) goto LAB_140926b43;
  lVar3 = *(longlong *)(lVar2 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar2);
    lVar3 = *(longlong *)(lVar2 + 0x110);
    if (lVar3 == 0) goto LAB_140926b43;
  }
  uVar1 = *(ushort *)(lVar3 + 0x36);
  uVar4 = (uint)uVar1;
  if ((int)(uint)uVar1 < (int)param_1[0x10]) {
    puVar5 = param_1 + 10;
    if (*(uint **)(param_1 + 0xe) != (uint *)0x0) {
      puVar5 = *(uint **)(param_1 + 0xe);
    }
    if ((puVar5[uVar1 >> 5] >> (uVar4 & 0x1f) & 1) == 0) goto LAB_140926b30;
  }
  else {
LAB_140926b30:
    if ((int)uVar4 < (int)param_1[8]) {
      puVar5 = param_1 + 2;
      if (*(uint **)(param_1 + 6) != (uint *)0x0) {
        puVar5 = *(uint **)(param_1 + 6);
      }
      if ((puVar5[uVar1 >> 5] >> (uVar4 & 0x1f) & 1) != 0) goto LAB_140926b43;
    }
    if ((param_1[1] & *(uint *)(lVar3 + 0x38)) == 0) {
      uVar6 = CONCAT71(uVar7,(*param_1 & *(uint *)(lVar3 + 0x38)) != 0);
      goto LAB_140926b43;
    }
  }
  uVar6 = 0;
LAB_140926b43:
  return uVar6 & 0xffffffff;
}



// FUNCTION 140926bae FUN_140926bae body=57 status=ok
// SIG undefined FUN_140926bae(void)

void FUN_140926bae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21e70 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21e70 = FUN_140002ddd(FUN_14643646a,uVar1,L"GbxBrainTask_Sequence");
  }
  return;
}



// FUNCTION 140926be8 FUN_140926be8 body=322 status=ok
// SIG undefined FUN_140926be8(void)

undefined4 *
FUN_140926be8(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140926ec6(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2;
  local_58 = param_4;
  cVar3 = FUN_140926d2c(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1409270b0(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140926d2c FUN_140926d2c body=270 status=ok
// SIG undefined FUN_140926d2c(void)

void FUN_140926d2c(longlong *param_1,uint param_2,undefined8 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined1 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      uVar2 = *param_3;
      lVar10 = *param_1;
      do {
        lVar9 = (longlong)iVar11;
        local_50 = *(undefined8 *)(lVar10 + lVar9 * 0x18);
        local_58 = uVar2;
        cVar6 = FUN_14472ecf8(&local_50,&local_58);
        lVar10 = *param_1;
        if (cVar6 != '\0') {
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 1);
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          puVar1 = (undefined4 *)(lVar10 + lVar9 * 0x18);
          *puVar1 = *(undefined4 *)param_3;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_140926e3c(param_1,*param_4,1);
          *param_4 = iVar11;
          uVar7 = 1;
          goto LAB_140926e05;
        }
        iVar11 = *(int *)(lVar10 + 0x10 + lVar9 * 0x18);
      } while (iVar11 != -1);
      uVar7 = 0;
      goto LAB_140926e05;
    }
  }
  uVar7 = 0;
LAB_140926e05:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140926e3c FUN_140926e3c body=138 status=ok
// SIG undefined FUN_140926e3c(void)

void FUN_140926e3c(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140926ec6 FUN_140926ec6 body=489 status=ok
// SIG undefined FUN_140926ec6(void)

int * FUN_140926ec6(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1409270b0 FUN_1409270b0 body=549 status=ok
// SIG undefined FUN_1409270b0(void)

void FUN_1409270b0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar9 = local_58 >> 0x20;
    }
    iVar5 = (int)local_58;
    uVar6 = (uint)local_48;
    iVar7 = local_48._4_4_;
    iVar10 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar12 = *param_1;
        lVar11 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar12 + lVar11 * 0x18);
        uVar14 = (longlong)(int)((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) &
                 (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar14;
        *(int *)(lVar12 + 0x14 + lVar11 * 0x18) = iVar13;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0x10 + lVar11 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar13 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar8 = local_50;
        }
        iVar13 = (int)local_50[3];
        lVar12 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar7 = iVar13 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar11 * 4 + lVar12 * 4 + 4);
            if (uVar4 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar3 - lVar12 == lVar11) goto LAB_140927290;
          }
          iVar5 = iVar5 + (int)lVar11 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar14 = uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar13);
    }
  }
LAB_140927290:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409272d6 FUN_1409272d6 body=1007 status=ok
// SIG undefined FUN_1409272d6(void)

void FUN_1409272d6(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *(longlong *)(param_1 + 0xa8);
  if (lVar6 == 0) {
LAB_140927625:
    lVar6 = 0;
  }
  else {
    lVar5 = FUN_1409279ca();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_140927625;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar6);
    }
  }
  *(longlong *)(param_1 + 0xed8) = lVar6;
  FUN_14052f7ec(param_1);
  cVar3 = *(char *)(param_1 + 0xf20);
  if (cVar3 == '\0') goto LAB_140927352;
  local_58 = *(longlong **)(param_1 + 0x260);
  uStack_50 = *(ulonglong *)(param_1 + 0x268);
  local_48 = *(undefined8 *)(param_1 + 0x270);
  lVar6 = *(longlong *)(param_1 + 0xb0);
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(param_1);
    cVar3 = *(char *)(param_1 + 0xf20);
  }
  lVar6 = FUN_1409276d2(cVar3,lVar6,&local_58);
  if (lVar6 == 0) goto LAB_140927352;
  local_58 = (longlong *)0x0;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar9 = local_58;
  uStack_50 = CONCAT44(uStack_50._4_4_,3);
  *local_58 = (longlong)&PTR_LAB_14b9a1d90;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  local_58[2] = lVar7;
  *local_58 = (longlong)&PTR_FUN_14b9a1d20;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar8 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar8 = *(int *)(lVar5 + 0x10);
      bVar11 = iVar8 == 0;
      if (bVar11) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar8 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar9 + 0x1c) = iVar8;
  plVar9[4] = (longlong)FUN_140612690;
  *(undefined4 *)(plVar9 + 5) = 0;
  if (((int)uStack_50 == 0) || (local_58 == (longlong *)0x0)) {
LAB_14092766c:
    if ((int)uStack_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_140927352;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_140927540;
    }
  }
  else {
    cVar3 = (**(code **)(*local_58 + 0x30))();
    if (cVar3 == '\0') {
      goto LAB_14092766c;
    }
    plVar9 = (longlong *)(lVar6 + 0x390);
    if (*(int *)(lVar6 + 0x3a4) < 1) {
      iVar8 = *(int *)(lVar6 + 0x398);
      iVar4 = *(int *)(lVar6 + 0x3a0) + -1;
      *(int *)(lVar6 + 0x3a0) = iVar4;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
        if (0 < iVar8) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar9 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar9 + (longlong)iVar10 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar9,iVar10);
              FUN_14005b248(plVar9);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar4 = *(int *)(lVar6 + 0x398);
          } while (iVar10 < iVar4);
        }
        iVar10 = 2;
        if (2 < iVar4 * 2) {
          iVar10 = iVar4 * 2;
        }
        *(int *)(lVar6 + 0x3a0) = iVar10;
        if ((iVar10 < iVar8) && (*(int *)(lVar6 + 0x39c) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    if (((int)uStack_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,local_40);
    }
    iVar8 = *(int *)(lVar6 + 0x398);
    *(uint *)(lVar6 + 0x398) = iVar8 + 1U;
    if (*(uint *)(lVar6 + 0x39c) < iVar8 + 1U) {
      FUN_1447a71f6(plVar9,iVar8);
    }
    lVar6 = *plVar9;
    lVar5 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar6 + lVar5) = 0;
    *(undefined4 *)(lVar6 + 8 + lVar5) = 0;
    *(longlong **)(lVar6 + lVar5) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar6 + 8 + lVar5) = (int)uStack_50;
LAB_140927540:
    uStack_50 = uStack_50 & 0xffffffff00000000;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140927352:
  FUN_1409276fc(param_1);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409276d2 FUN_1409276d2 body=42 status=ok
// SIG undefined FUN_1409276d2(void)

undefined8 FUN_1409276d2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140927dcc();
  if (lVar1 != 0) {
    uVar2 = FUN_1402a1570(param_2,lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1409276fc FUN_1409276fc body=122 status=ok
// SIG undefined FUN_1409276fc(void)

void FUN_1409276fc(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0xe50) = *(undefined1 *)(param_1 + 0x848);
  *(undefined1 *)(param_1 + 0xe51) = 1;
  cVar1 = FUN_140927ab0(*(undefined8 *)(param_1 + 0xa8));
  if (cVar1 != '\0') {
    *(undefined2 *)(param_1 + 0x946) = 0x101;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_14487fd02();
    if (iVar2 == 3) goto LAB_14092773d;
    uVar3 = *(undefined8 *)(param_1 + 0xa8);
  }
  FUN_1407bebdc(param_1 + 0xd10,param_1 + 0xc30,uVar3);
LAB_14092773d:
  FUN_140927776(param_1);
  return;
}



// FUNCTION 140927776 FUN_140927776 body=201 status=ok
// SIG undefined FUN_140927776(void)

void FUN_140927776(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1407be562();
  FUN_140927840(param_1,&local_30);
  if (*(longlong *)(param_1 + 0x9f0) != local_30) {
    *(undefined8 *)(param_1 + 0xa00) = 0;
  }
  *(longlong *)(param_1 + 0x9f0) = local_30;
  if (*(longlong *)(param_1 + 0x9f8) != local_28) {
    *(undefined8 *)(param_1 + 0xa00) = 0;
  }
  uVar1 = FUN_14477b664();
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_1 + 0x9f8) = uVar1;
  *(undefined8 *)(param_1 + 0xa00) = local_20;
  *(undefined4 *)(param_1 + 0x870) = *(undefined4 *)(param_1 + 0x850);
  *(undefined4 *)(param_1 + 0x874) = *(undefined4 *)(param_1 + 0x854);
  *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_1 + 0x858);
  *(undefined4 *)(param_1 + 0x87c) = *(undefined4 *)(param_1 + 0x85c);
  FUN_14053cb00(param_1 + 0x880,param_1 + 0x860);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14092811c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140927840 FUN_140927840 body=256 status=ok
// SIG undefined FUN_140927840(void)

longlong * FUN_140927840(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1400d690e(param_1 + 0x9d8);
  param_2[1] = 0;
  param_2[2] = 0;
  uVar2 = FUN_140927942();
  lVar3 = FUN_14477b664(uVar2);
  lVar4 = FUN_140927942();
  uVar2 = FUN_140927942();
  FUN_1402d1bfa(&local_38,uVar2,lVar1);
  if (local_38 != 0) {
    param_2[2] = 0;
  }
  *param_2 = local_38;
  lVar5 = FUN_140927942();
  if (lVar4 != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
      goto LAB_1409278e3;
    }
    if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_1409278e3;
  }
  lVar5 = lVar4;
LAB_1409278e3:
  if (lVar3 != lVar5) {
    param_2[2] = 0;
  }
  uVar2 = FUN_14477b664(lVar5);
  lVar3 = FUN_14477b664(uVar2);
  param_2[1] = lVar3;
  if ((local_38 != 0) && (lVar3 != 0)) {
    param_2[2] = lVar1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140927942 FUN_140927942 body=57 status=ok
// SIG undefined FUN_140927942(void)

void FUN_140927942(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1a370 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1a370 = FUN_140002ddd(FUN_1417fe1d2,uVar1,L"GbxActorDef");
  }
  return;
}



// FUNCTION 1409279ca FUN_1409279ca body=228 status=ok
// SIG undefined FUN_1409279ca(void)

longlong FUN_1409279ca(void)

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
  if (DAT_14cbaee00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145996bce;
    local_38 = &LAB_148c45c51;
    local_40 = &LAB_1407fbd45;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x4a0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakSpawner",&DAT_14cbaee00,&DAT_148c45c50);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaee00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140927ab0 FUN_140927ab0 body=794 status=ok
// SIG undefined FUN_140927ab0(void)

undefined8 FUN_140927ab0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
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
  if (DAT_14cae8b20 == 0) {
    local_40 = &local_20;
    local_20 = (code *)&LAB_14355090c;
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
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
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
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 == 0) {
    lVar4 = 0;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar1) ||
         (lVar4 = lVar6,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar2 + 0x30)) {
        lVar4 = 0;
      }
    } while ((lVar4 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
  }
  lVar2 = FUN_1405d1c86(lVar4);
  if (lVar2 != 0) {
    if (DAT_14cae8e78 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = (code *)&LAB_1457dfdaa;
      local_38 = (code *)&LAB_14637debc;
      local_48 = &LAB_147b97a51;
      local_50 = FUN_1417ddfba;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000008;
      local_70 = 0x10;
      local_78 = 0x1f0;
      FUN_14081cfa3(L"/Script/Engine",L"LevelStreamingLevelInstance",&DAT_14cae8e78,&DAT_147b97a50);
    }
    if ((*(int *)(DAT_14cae8e78 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae8e78 + 0x38) * 8) == DAT_14cae8e78 + 0x30)) {
      plVar3 = (longlong *)FUN_1448a53de(lVar2);
      if (plVar3 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar3 + 8))(plVar3);
        if (lVar2 != 0) {
          lVar4 = FUN_140928036();
          lVar6 = *(longlong *)(lVar2 + 0x10);
          if (*(int *)(lVar4 + 0x38) <= *(int *)(lVar6 + 0x38)) {
            uVar5 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
            if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30) goto LAB_140927b61;
          }
          lVar6 = FUN_141174638();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            uVar5 = CONCAT71((int7)((ulonglong)(lVar6 + 0x30) >> 8),1);
            goto LAB_140927b61;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_140927b61:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140927dcc FUN_140927dcc body=617 status=ok
// SIG undefined FUN_140927dcc(void)

longlong FUN_140927dcc(char param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    lVar4 = 0;
    goto LAB_140927fc2;
  }
  FUN_1408b794c(&local_48);
  plVar7 = (longlong *)CONCAT44(uStack_3c,local_40);
  if (plVar7 == (longlong *)0x0) {
LAB_140927e61:
    plVar8 = (longlong *)&DAT_00000001;
    plVar7 = (longlong *)0x0;
LAB_140927eb6:
    plVar5 = (longlong *)0x0;
  }
  else {
    iVar3 = (int)plVar7[1];
    do {
      if (iVar3 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar2 = (int)plVar7[1];
      bVar9 = iVar3 == iVar2;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_3c,local_40) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_3c,local_40) + 0x10))();
    }
    if (plVar7 == (longlong *)0x0) goto LAB_140927e61;
    if (local_48 == 0) {
LAB_140927eb3:
      plVar8 = (longlong *)0x0;
      goto LAB_140927eb6;
    }
    lVar4 = FUN_144a2b138();
    if (lVar4 == 0) {
      local_40 = 0x3860a972;
      local_48 = 0;
    }
    else {
      local_48 = *(longlong *)(lVar4 + 0x3c8);
      local_40 = *(undefined4 *)(lVar4 + 0x3d0);
    }
    local_38 = 0;
    plVar5 = (longlong *)FUN_140944864();
    if (plVar5 == (longlong *)0x0) goto LAB_140927eb3;
    lVar4 = (**(code **)(*plVar5 + 8))(plVar5);
    lVar6 = FUN_14086ad12();
    if ((lVar6 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_140927eb3;
    plVar8 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30) {
      plVar5 = plVar8;
    }
  }
  if (param_1 == '\x02') {
    if ((plVar5 == (longlong *)0x0) || (plVar5[0x44] == 0)) {
      if ((*(longlong *)(param_2 + 0x30) != 0) &&
         (lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar4 != 0)) {
        lVar6 = FUN_140a99ecc();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           ((*(longlong *)
              (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30 &&
            (lVar4 = FUN_140841948(lVar4 + 0x6d0), lVar4 != 0)))) goto LAB_140927fa0;
      }
      lVar4 = FUN_14092c0b8();
      plVar5 = (longlong *)(lVar4 + 0xe8);
    }
    else {
      plVar5 = plVar5 + 0x43;
    }
LAB_140927f95:
    lVar4 = FUN_140841948(plVar5);
  }
  else {
    if (param_1 == '\x01') {
      if ((plVar5 == (longlong *)0x0) || (plVar5[0x3f] == 0)) {
        if ((*(longlong *)(param_2 + 0x30) != 0) &&
           (lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar4 != 0)) {
          lVar6 = FUN_140a99ecc();
          if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
             (lVar4 = FUN_140841948(lVar4 + 0x6a8), lVar4 != 0)) goto LAB_140927fa0;
        }
        lVar4 = FUN_14092c0b8();
        plVar5 = (longlong *)(lVar4 + 0xc0);
      }
      else {
        plVar5 = plVar5 + 0x3e;
      }
      goto LAB_140927f95;
    }
    lVar4 = 0;
  }
LAB_140927fa0:
  if ((char)plVar8 == '\0') {
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
  }
LAB_140927fc2:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 140928036 FUN_140928036 body=228 status=ok
// SIG undefined FUN_140928036(void)

longlong FUN_140928036(void)

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
  if (DAT_14cb57f60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458f1416;
    local_38 = &LAB_14864bc97;
    local_40 = &LAB_1464bfd37;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x650;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActivityAreaStamp",&DAT_14cb57f60,FUN_1464bfd10);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb57f60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092811c FUN_14092811c body=6610 status=ok
// SIG undefined FUN_14092811c(void)

undefined8 FUN_14092811c(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  DWORD DVar15;
  DWORD DVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong *plVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  longlong *plVar30;
  longlong lVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  undefined8 unaff_R13;
  int iVar36;
  longlong lVar37;
  bool bVar38;
  undefined1 auStack_f8 [44];
  uint local_cc;
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (DAT_14c872bd8 != '\0') goto LAB_140929130;
  local_b8 = (longlong *)param_1[0x105];
  uVar24 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  if (local_b8 == (longlong *)0x0) {
LAB_14092816c:
    local_b8 = (longlong *)0x0;
LAB_140928175:
    lVar37 = param_1[0x16];
    if ((lVar37 != 0) || (lVar37 = FUN_1448abda6(param_1), lVar37 != 0)) {
      uVar4 = DAT_14cb1ae68;
      if (DAT_14c9a7d10 == (undefined8 *)0x0) {
        DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        *DAT_14c9a7d10 = 0;
        DAT_14c9a7d10[1] = 0;
        DAT_14c9a7d10[2] = 0;
        DAT_14c9a7d10[3] = 0;
      }
      FUN_14005915a(DAT_14c9a7d10,&local_78,uVar4,lVar37);
      plVar19 = local_70;
      plVar30 = local_78;
      if ((local_78 == (longlong *)0x0) || (local_70 == (longlong *)0x0)) {
        plVar19 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar20 = local_70 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
      plVar20 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_70 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      if (plVar19 == (longlong *)0x0) goto LAB_140929127;
      iVar13 = (int)plVar19[1];
      do {
        plVar20 = (longlong *)0x0;
        if (iVar13 == 0) break;
        LOCK();
        iVar34 = (int)plVar19[1];
        bVar38 = iVar13 == iVar34;
        if (bVar38) {
          *(int *)(plVar19 + 1) = iVar13 + 1;
          iVar34 = iVar13;
        }
        iVar13 = iVar34;
        UNLOCK();
        plVar20 = plVar19;
      } while (!bVar38);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
      if (plVar20 == (longlong *)0x0) goto LAB_140929127;
      if (plVar30 != (longlong *)0x0) {
        if (((param_1[0x179] == 0) && (param_1[0x15] != 0)) &&
           (cVar8 = FUN_1449e2a3e(), cVar8 == '\0')) {
          lVar37 = FUN_145758774(param_1[0x15]);
          if (lVar37 == 0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *(undefined8 *)(lVar37 + 0xbc8);
          }
          FUN_145758802(param_1,uVar29);
        }
        if (((((char)param_1[0x106] != '\0') || (param_1[0x17d] != 0)) ||
            ((param_1[0x104] != 0 && ((param_1[0x105] != 0 && (0 < *(int *)(param_1[0x105] + 8))))))
            ) || (param_1[0x13b] != 0)) {
          local_a0 = plVar20;
          if (param_1[0x179] == 0) {
            uVar12 = 0;
            iVar13 = 0;
          }
          else {
            uVar12 = *(uint *)(param_1[0x179] + 0xc);
            if ((int)uVar12 < DAT_14c9647dc) {
              lVar37 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
            }
            else {
              lVar37 = 0;
            }
            iVar13 = *(int *)(lVar37 + 0x10);
            if (*(int *)(lVar37 + 0x10) == 0) {
              LOCK();
              iVar13 = DAT_14c964868 + 1;
              UNLOCK();
              iVar34 = DAT_14c964868 + 1;
              bVar38 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar13;
              if (bVar38) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar34);
              }
              LOCK();
              iVar13 = *(int *)(lVar37 + 0x10);
              bVar38 = iVar13 == 0;
              if (bVar38) {
                *(int *)(lVar37 + 0x10) = iVar34;
                iVar13 = 0;
              }
              UNLOCK();
              if (bVar38) {
                iVar13 = iVar34;
              }
            }
          }
          *(undefined4 *)((longlong)param_1 + 0x834) = 0xffffffff;
          *(uint *)(param_1 + 0x107) = uVar12;
          *(int *)((longlong)param_1 + 0x83c) = iVar13;
          param_1[0x108] = 0;
          plVar19 = param_1;
LAB_1409282f7:
          plVar20 = plVar19;
          plVar19 = plVar20;
          if ((longlong *)plVar20[4] != (longlong *)0x0) goto code_r0x000140928306;
          goto LAB_140928314;
        }
      }
      goto LAB_14092911d;
    }
    goto LAB_140929127;
  }
  iVar13 = (int)local_b8[1];
  do {
    if (iVar13 == 0) goto LAB_14092816c;
    LOCK();
    iVar34 = (int)local_b8[1];
    bVar38 = iVar13 == iVar34;
    if (bVar38) {
      *(int *)(local_b8 + 1) = iVar13 + 1;
      iVar34 = iVar13;
    }
    iVar13 = iVar34;
    UNLOCK();
  } while (!bVar38);
  if (param_1[0x104] == 0) {
    uVar24 = 0;
    goto LAB_140928175;
  }
  goto LAB_1409294da;
code_r0x000140928306:
  plVar19 = (longlong *)plVar20[4];
  if ((*(uint *)(plVar20 + 1) >> 0x1c & 1) == 0) goto LAB_1409282f7;
  plVar19 = (longlong *)FUN_142840154(plVar20);
LAB_140928314:
  if (plVar19 == (longlong *)0x0) {
    plVar19 = (longlong *)plVar20[4];
    goto LAB_1409282f7;
  }
  if (param_1[0x15] == 0) {
    lVar37 = 0;
  }
  else {
    lVar37 = *(longlong *)(param_1[0x15] + 0x18);
  }
  lVar31 = plVar19[3];
  local_c8 = plVar30 + 0x13;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  local_cc = (uint)uVar24;
  if ((int)plVar30[0x14] != *(int *)((longlong)plVar30 + 0xcc)) {
    uVar12 = (uint)((ulonglong)lVar31 >> 0x10);
    uVar32 = (uint)lVar31 & 0xffff;
    uVar22 = (uint)((ulonglong)lVar37 >> 0x10);
    uVar21 = (uint)lVar37 & 0xffff;
    uVar22 = (int)((ulonglong)lVar37 >> 0x20) + ((uint)lVar37 << 0x10 | uVar21) +
             (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar21 >> 4);
    uVar12 = uVar22 >> 0xd ^
             ((int)((ulonglong)lVar31 >> 0x20) + ((uint)lVar31 << 0x10 | uVar32) +
              (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar32 >> 4)) - uVar22;
    uVar32 = uVar12 << 8 ^ (-0x61c88647 - uVar22) - uVar12;
    uVar21 = uVar32 >> 0xd ^ (uVar22 - uVar12) - uVar32;
    uVar22 = uVar21 >> 0xc ^ (uVar12 - uVar32) - uVar21;
    uVar12 = uVar22 << 0x10 ^ (uVar32 - uVar21) - uVar22;
    uVar32 = uVar12 >> 5 ^ (uVar21 - uVar22) - uVar12;
    uVar22 = uVar32 >> 3 ^ (uVar22 - uVar12) - uVar32;
    uVar12 = uVar22 << 10 ^ (uVar12 - uVar32) - uVar22;
    plVar19 = plVar30 + 0x1a;
    if ((longlong *)plVar30[0x1b] != (longlong *)0x0) {
      plVar19 = (longlong *)plVar30[0x1b];
    }
    iVar13 = *(int *)((longlong)plVar19 +
                     (ulonglong)
                     ((int)plVar30[0x1c] - 1U & (uVar12 >> 0xf ^ uVar32 - (uVar22 + uVar12))) * 4);
    if (iVar13 != -1) {
      do {
        plVar19 = (longlong *)(*local_c8 + (longlong)iVar13 * 0x28);
        if ((*plVar19 == lVar31) &&
           (*(longlong *)(*local_c8 + 8 + (longlong)iVar13 * 0x28) == lVar37)) {
          plVar17 = plVar19 + 2;
          if (plVar17 != (longlong *)0x0 && plVar19 != (longlong *)0x0) {
            lVar37 = *plVar17;
            if (*(char *)(lVar37 + 0xf8) == '\x01') {
              if (*(int *)(lVar37 + 0x110) == 0) {
LAB_140929748:
                lVar31 = 0;
              }
              else {
                uVar12 = *(uint *)(lVar37 + 0x10c);
                lVar31 = 0;
                if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
                  plVar20 = (longlong *)
                            ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
                  if ((plVar20 == (longlong *)0x0) ||
                     (((int)plVar20[2] != *(int *)(lVar37 + 0x110) ||
                      ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)))) goto LAB_140929748;
                  lVar31 = *plVar20;
                }
              }
              plVar20 = local_a0;
              if ((param_1 == (longlong *)0x0) || (lVar31 != 0)) goto LAB_14092911d;
              FUN_140a6bae6(plVar30);
              lVar37 = *plVar17;
            }
            plVar20 = plStack_90;
            plVar19 = (longlong *)plVar19[3];
            local_98 = lVar37;
            plVar17 = plStack_90;
            if (plVar19 == (longlong *)0x0) goto LAB_140928a66;
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
            if (plVar19 == plStack_90) goto LAB_140928a49;
            plVar17 = plVar19;
            if (plStack_90 == (longlong *)0x0) goto LAB_140928a66;
            LOCK();
            plVar27 = plStack_90 + 1;
            *(int *)plVar27 = (int)*plVar27 + -1;
            UNLOCK();
            if ((int)*plVar27 != 0) goto LAB_140928a66;
            puVar3 = (undefined8 *)*plStack_90;
            plStack_90 = plVar19;
            (*(code *)*puVar3)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar17 = plStack_90;
            if (*piVar1 != 0) goto LAB_140928a66;
            lVar37 = *plVar20;
            goto LAB_140928a63;
          }
          break;
        }
        iVar13 = (int)plVar19[4];
      } while (iVar13 != -1);
    }
  }
  local_c0 = lVar37;
  plVar17 = (longlong *)FUN_14001cc68(0x240);
  plVar17[1] = (longlong)&DAT_100000001;
  *plVar17 = (longlong)&PTR_FUN_14ab66f00;
  plVar19 = plVar17 + 2;
  plVar17[2] = 0;
  plVar17[3] = 0;
  plVar17[4] = (longlong)plVar30;
  plVar17[0xb] = 0;
  *(undefined4 *)(plVar17 + 0xc) = 0;
  plVar17[5] = 0;
  plVar17[6] = 0;
  plVar17[7] = 0;
  plVar17[8] = 0;
  *(undefined8 *)((longlong)plVar17 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar17 + 0x6c) = 0;
  plVar17[0xf] = 0;
  *(undefined4 *)(plVar17 + 0x10) = 0;
  memset(plVar17 + 0x11,0,0x82);
  *(undefined8 *)((longlong)plVar17 + 0x10c) = 0;
  *(undefined8 *)((longlong)plVar17 + 0x114) = 0;
  *(undefined8 *)((longlong)plVar17 + 0x11c) = 0;
  plVar17[0x25] = 0;
  plVar17[0x26] = 0;
  plVar17[0x27] = 0;
  plVar17[0x28] = 0;
  plVar17[0x29] = 0;
  plVar17[0x2a] = 0;
  *(undefined4 *)(plVar17 + 0x2b) = 0xffffffff;
  *(undefined1 *)((longlong)plVar17 + 0x174) = 0;
  plVar17[0x2f] = 0;
  plVar17[0x2c] = 0;
  plVar17[0x2d] = 0;
  plVar17[0x30] = 0x7f7fffff7f7fffff;
  plVar17[0x31] = 0;
  plVar17[0x32] = 0;
  plVar17[0x33] = 0;
  plVar17[0x34] = 0;
  *(undefined4 *)(plVar17 + 0x35) = 0x44610000;
  *(undefined1 *)((longlong)plVar17 + 0x1ac) = 0;
  plVar17[0x39] = 0;
  *(undefined4 *)(plVar17 + 0x38) = 0;
  plVar17[0x36] = 0;
  plVar17[0x37] = 0;
  *(undefined4 *)(plVar17 + 0x3a) = 0x4000;
  plVar17[0x3b] = 0;
  plVar17[0x3e] = 0;
  plVar17[0x3f] = 0x100000000;
  *(undefined2 *)(plVar17 + 0x40) = 0;
  *(undefined4 *)((longlong)plVar17 + 0x204) = 0;
  plVar17[0x41] = 0;
  *(undefined4 *)(plVar17 + 0x42) = 0x4000;
  plVar17[0x43] = 0;
  *(undefined1 *)(plVar17 + 0x46) = 0xff;
  local_68 = 0xff;
  FUN_140513334(&local_78);
  local_78 = (longlong *)0x0;
  local_68 = 0;
  FUN_140513298(plVar17 + 0x44,&local_78);
  FUN_140513334(&local_78);
  *(undefined4 *)(plVar17 + 0x47) = 0;
  plVar20 = param_1;
LAB_14092850c:
  plVar27 = plVar20;
  plVar20 = plVar27;
  if ((longlong *)plVar27[4] != (longlong *)0x0) goto code_r0x00014092851b;
  goto LAB_140928529;
code_r0x00014092851b:
  plVar20 = (longlong *)plVar27[4];
  if ((*(uint *)(plVar27 + 1) >> 0x1c & 1) == 0) goto LAB_14092850c;
  plVar20 = (longlong *)FUN_142840154(plVar27);
LAB_140928529:
  if (plVar20 == (longlong *)0x0) {
    plVar20 = (longlong *)plVar27[4];
    goto LAB_14092850c;
  }
  if (param_1[0x15] == 0) {
    plVar17[5] = plVar20[3];
    plVar17[6] = 0;
    bVar9 = 0;
  }
  else {
    lVar37 = *(longlong *)(param_1[0x15] + 0x18);
    plVar17[5] = plVar20[3];
    plVar17[6] = lVar37;
    bVar9 = FUN_1449e2a3e();
    bVar9 = bVar9 ^ 1;
  }
  *(byte *)((longlong)plVar17 + 0x109) = bVar9;
  local_a8 = plVar19;
  local_78 = plVar19;
  local_70 = plVar17;
  FUN_140929b2e(&local_78,plVar19);
  if (*(int *)((longlong)plVar30 + 0xcc) == 0) {
    iVar13 = (int)plVar30[0x14];
    *(int *)(plVar30 + 0x14) = iVar13 + 1;
    if (*(int *)((longlong)plVar30 + 0xa4) == iVar13) {
      FUN_140549c28(local_c8,iVar13);
    }
    iVar34 = (int)plVar30[0x18];
    if (iVar34 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar34 + 0x1e;
      if (-1 < iVar34 + -1) {
        iVar11 = iVar34 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar19 = plVar30 + 0x15;
    iVar23 = iVar34 + 1;
    iVar36 = iVar34 + 0x1f;
    if (-1 < iVar34) {
      iVar36 = iVar34;
    }
    if (iVar36 >> 5 == iVar11) {
      *(int *)(plVar30 + 0x18) = iVar23;
    }
    else {
      if (*(int *)((longlong)plVar30 + 0xc4) <= iVar34) {
        iVar11 = iVar34;
        if (iVar34 + 0x20U < 0xa0) {
          iVar23 = 0x80;
        }
        else {
          uVar12 = iVar34 + 0x20U >> 5;
          if (*(int *)((longlong)plVar30 + 0xc4) + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar12) {
              uVar22 = uVar12;
            }
          }
          else {
            uVar22 = uVar12 + (uVar12 * 3 >> 3) + 0x10;
          }
          uVar24 = (ulonglong)(uVar22 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar32 = (uint)(uVar24 + 0xf);
              if (uVar22 < 0x1ffd) {
                uVar24 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar24 + 0xf >> 4]];
              }
              else {
                uVar25 = (ulonglong)(uVar32 & 0xfffffff0);
                if (uVar25 < 0x7ff1) {
                  bVar9 = (&DAT_14c841e00)[uVar32 >> 4];
                  uVar28 = 0x32;
                  if (0x32 < bVar9) {
                    uVar28 = (ulonglong)bVar9;
                  }
                  uVar35 = 0x32 - (ulonglong)bVar9;
                  do {
                    uVar24 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar35 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar35 & 0xffffffff] & 0xf) == 0) goto LAB_140929714;
                    lVar37 = uVar28 + 1 + uVar35;
                    uVar35 = uVar35 - 1;
                  } while (lVar37 != 0x33);
                }
                uVar24 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar24 = (ulonglong)DAT_14c841df8;
                }
                uVar24 = -uVar24 & (uVar25 + uVar24) - 1;
              }
            }
            else {
              local_b0 = (ulonglong)uVar12;
              uVar24 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar24,0);
              uVar12 = (uint)local_b0;
              iVar11 = (int)plVar30[0x18];
            }
          }
LAB_140929714:
          iVar14 = (int)(uVar24 >> 2);
          iVar23 = -0x20;
          if ((int)uVar12 <= iVar14) {
            iVar23 = iVar14 << 5;
          }
        }
        *(int *)((longlong)plVar30 + 0xc4) = iVar23;
        FUN_1446efbd8(plVar19,iVar11);
        iVar23 = (int)plVar30[0x18] + 1;
      }
      iVar11 = iVar23 + 0x1f;
      if (-1 < iVar23) {
        iVar11 = iVar23;
      }
      *(int *)(plVar30 + 0x18) = iVar23;
      if (iVar23 % 0x20 != 0) {
        plVar20 = (longlong *)plVar30[0x17];
        if ((longlong *)plVar30[0x17] == (longlong *)0x0) {
          plVar20 = plVar19;
        }
        bVar9 = -(char)(iVar23 % 0x20);
        *(uint *)((longlong)plVar20 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar11 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar37 = (longlong)iVar13;
    if ((longlong *)plVar30[0x17] != (longlong *)0x0) {
      plVar19 = (longlong *)plVar30[0x17];
    }
    bVar9 = (byte)iVar34 & 0x1f;
    puVar2 = (uint *)((longlong)plVar19 + (longlong)(iVar36 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar13 = (int)plVar30[0x19];
    lVar37 = (longlong)iVar13;
    iVar34 = *(int *)(plVar30[0x13] + 4 + lVar37 * 0x28);
    *(int *)(plVar30 + 0x19) = iVar34;
    iVar11 = *(int *)((longlong)plVar30 + 0xcc) + -1;
    *(int *)((longlong)plVar30 + 0xcc) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(plVar30[0x13] + (longlong)iVar34 * 0x28) = 0xffffffff;
    }
  }
  uVar12 = local_cc;
  plVar19 = plVar30 + 0x15;
  if ((longlong *)plVar30[0x17] != (longlong *)0x0) {
    plVar19 = (longlong *)plVar30[0x17];
  }
  iVar34 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar34 = iVar13;
  }
  puVar2 = (uint *)((longlong)plVar19 + (longlong)(iVar34 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar13 & 0x1f);
  plVar19 = (longlong *)(plVar30[0x13] + lVar37 * 0x28);
  *plVar19 = lVar31;
  plVar19[1] = local_c0;
  plVar19[2] = (longlong)local_a8;
  plVar19[3] = (longlong)plVar17;
  lVar37 = local_c0;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    lVar31 = *plVar19;
    lVar37 = plVar19[1];
  }
  *(undefined4 *)(plVar19 + 4) = 0xffffffff;
  uVar22 = (uint)((ulonglong)lVar37 >> 0x10);
  uVar32 = (uint)lVar37 & 0xffff;
  uVar32 = ((uint)lVar37 << 0x10 | uVar32) + (int)((ulonglong)lVar37 >> 0x20) +
           (uVar32 >> 4) + (uVar22 << 0x13 | uVar22 & 0xffff);
  uVar22 = (uint)((ulonglong)lVar31 >> 0x10);
  uVar21 = (uint)lVar31 & 0xffff;
  uVar22 = uVar32 >> 0xd ^
           (((uint)lVar31 << 0x10 | uVar21) + (int)((ulonglong)lVar31 >> 0x20) +
           (uVar21 >> 4) + (uVar22 << 0x13 | uVar22 & 0xffff)) - uVar32;
  uVar21 = uVar22 << 8 ^ (-0x61c88647 - uVar32) - uVar22;
  uVar33 = uVar21 >> 0xd ^ (uVar32 - uVar22) - uVar21;
  uVar22 = uVar33 >> 0xc ^ (uVar22 - uVar21) - uVar33;
  uVar32 = uVar22 << 0x10 ^ (uVar21 - uVar33) - uVar22;
  uVar21 = uVar32 >> 5 ^ (uVar33 - uVar22) - uVar32;
  uVar33 = uVar21 >> 3 ^ (uVar22 - uVar32) - uVar21;
  uVar22 = uVar33 << 10 ^ (uVar32 - uVar21) - uVar33;
  uVar22 = uVar22 >> 0xf ^ uVar21 - (uVar33 + uVar22);
  uVar32 = (int)plVar30[0x14] - *(int *)((longlong)plVar30 + 0xcc);
  if ((uVar32 != 0) && (uVar32 != 1)) {
    plVar20 = plVar30 + 0x1a;
    if ((longlong *)plVar30[0x1b] != (longlong *)0x0) {
      plVar20 = (longlong *)plVar30[0x1b];
    }
    iVar34 = *(int *)((longlong)plVar20 + (ulonglong)((int)plVar30[0x1c] - 1U & uVar22) * 4);
    if (iVar34 != -1) {
      do {
        plVar20 = (longlong *)(*local_c8 + (longlong)iVar34 * 0x28);
        if ((*plVar20 == lVar31) &&
           (*(longlong *)(*local_c8 + 8 + (longlong)iVar34 * 0x28) == lVar37)) {
          plVar17 = (longlong *)plVar20[3];
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar27 = plVar17 + 1;
            *(int *)plVar27 = (int)*plVar27 + -1;
            UNLOCK();
            if ((int)*plVar27 == 0) {
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
          plVar17 = local_c8;
          lVar37 = *plVar19;
          uVar4 = *(undefined4 *)((longlong)plVar19 + 4);
          lVar31 = plVar19[1];
          uVar5 = *(undefined4 *)((longlong)plVar19 + 0xc);
          uVar6 = *(undefined4 *)((longlong)plVar19 + 0x14);
          lVar18 = plVar19[3];
          uVar7 = *(undefined4 *)((longlong)plVar19 + 0x1c);
          *(int *)(plVar20 + 2) = (int)plVar19[2];
          *(undefined4 *)((longlong)plVar20 + 0x14) = uVar6;
          *(int *)(plVar20 + 3) = (int)lVar18;
          *(undefined4 *)((longlong)plVar20 + 0x1c) = uVar7;
          *(int *)plVar20 = (int)lVar37;
          *(undefined4 *)((longlong)plVar20 + 4) = uVar4;
          *(int *)(plVar20 + 1) = (int)lVar31;
          *(undefined4 *)((longlong)plVar20 + 0xc) = uVar5;
          FUN_145977f4a(local_c8,iVar13);
          iVar13 = iVar34;
          uVar12 = local_cc;
          goto LAB_14092885f;
        }
        iVar34 = (int)plVar20[4];
      } while (iVar34 != -1);
    }
  }
  if (uVar32 < 4) {
    iVar34 = 1;
  }
  else {
    uVar24 = (ulonglong)(uVar32 & 0xfffffffe) + 0xf;
    lVar37 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar37 == 0; lVar37 = lVar37 + -1) {
      }
    }
    iVar34 = 1 << ((byte)lVar37 & 0x1f);
  }
  if (((int)uVar32 < 1) || (iVar34 <= (int)plVar30[0x1c])) {
    uVar22 = (int)plVar30[0x1c] - 1U & uVar22;
    *(uint *)((longlong)plVar19 + 0x24) = uVar22;
    plVar20 = (longlong *)plVar30[0x1b];
    if ((longlong *)plVar30[0x1b] == (longlong *)0x0) {
      plVar20 = plVar30 + 0x1a;
    }
    *(undefined4 *)(plVar19 + 4) =
         *(undefined4 *)
          ((longlong)plVar20 + ((longlong)(int)plVar30[0x1c] - 1U & (longlong)(int)uVar22) * 4);
    plVar19 = (longlong *)plVar30[0x1b];
    if ((longlong *)plVar30[0x1b] == (longlong *)0x0) {
      plVar19 = plVar30 + 0x1a;
    }
    *(int *)((longlong)plVar19 + ((longlong)(int)plVar30[0x1c] - 1U & (longlong)(int)uVar22) * 4) =
         iVar13;
    plVar17 = local_c8;
  }
  else {
    *(int *)(plVar30 + 0x1c) = iVar34;
    FUN_14092cd6c(local_c8);
    plVar17 = local_c8;
  }
LAB_14092885f:
  plVar20 = plStack_90;
  uVar24 = (ulonglong)uVar12;
  local_98 = *(longlong *)(*plVar17 + 0x10 + (longlong)iVar13 * 0x28);
  plVar19 = *(longlong **)(*plVar17 + 0x18 + (longlong)iVar13 * 0x28);
  if (plVar19 == (longlong *)0x0) {
    if (plStack_90 != (longlong *)0x0) {
      plStack_90 = (longlong *)0x0;
LAB_140928a06:
      LOCK();
      plVar19 = plVar20 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar13 = *piVar1;
        UNLOCK();
joined_r0x000140928a31:
        if (iVar13 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
    if (plVar19 == plStack_90) {
      LOCK();
      plVar20 = plVar19 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar1 = (int *)((longlong)plVar19 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar13 = *piVar1;
        UNLOCK();
        plVar20 = plVar19;
        goto joined_r0x000140928a31;
      }
    }
    else {
      bVar38 = plStack_90 != (longlong *)0x0;
      plStack_90 = plVar19;
      if (bVar38) goto LAB_140928a06;
    }
  }
  plVar19 = local_70;
  plVar17 = plStack_90;
  if (local_70 != (longlong *)0x0) {
LAB_140928a49:
    plVar20 = plVar19;
    LOCK();
    plVar19 = plVar20 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    plVar17 = plStack_90;
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar17 = plStack_90;
      if (*piVar1 == 0) {
        lVar37 = *plVar20;
LAB_140928a63:
        (**(code **)(lVar37 + 0x10))(plVar20);
        plVar17 = plStack_90;
      }
    }
  }
LAB_140928a66:
  plStack_90 = plVar17;
  lVar37 = local_98;
  if (*(longlong *)(local_98 + 0x90) == 0) {
    lVar31 = local_98 + 0x78;
    *(undefined8 *)(local_98 + 0x78) = 0;
    *(longlong *)(local_98 + 0x80) = plVar30[8];
    *(longlong *)(local_98 + 0x88) = local_98;
    *(longlong **)(local_98 + 0x90) = plVar30 + 7;
    if (plVar30[7] == 0) {
      plVar30[7] = lVar31;
    }
    if ((longlong *)plVar30[8] != (longlong *)0x0) {
      *(longlong *)plVar30[8] = lVar31;
    }
    plVar30[8] = lVar31;
    *(int *)(plVar30 + 9) = (int)plVar30[9] + 1;
  }
  *(undefined1 *)(local_98 + 0xf8) = 1;
  if (param_1 == (longlong *)0x0) {
    *(undefined4 *)(local_98 + 0x10c) = 0;
    iVar13 = 0;
  }
  else {
    uVar12 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_98 + 0x10c) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar31 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar31 = 0;
    }
    iVar13 = *(int *)(lVar31 + 0x10);
    if (*(int *)(lVar31 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar34 = DAT_14c964868 + 1;
      bVar38 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar38) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar34);
      }
      LOCK();
      iVar13 = *(int *)(lVar31 + 0x10);
      bVar38 = iVar13 == 0;
      if (bVar38) {
        *(int *)(lVar31 + 0x10) = iVar34;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar38) {
        iVar13 = iVar34;
      }
    }
  }
  *(int *)(lVar37 + 0x110) = iVar13;
  if (param_1[0x15] == 0) {
    *(undefined4 *)(lVar37 + 0xfc) = 0;
    iVar13 = 0;
  }
  else {
    uVar12 = *(uint *)(param_1[0x15] + 0xc);
    *(uint *)(lVar37 + 0xfc) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar31 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar31 = 0;
    }
    iVar13 = *(int *)(lVar31 + 0x10);
    if (*(int *)(lVar31 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar34 = DAT_14c964868 + 1;
      bVar38 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar38) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar34);
      }
      LOCK();
      iVar13 = *(int *)(lVar31 + 0x10);
      bVar38 = iVar13 == 0;
      if (bVar38) {
        *(int *)(lVar31 + 0x10) = iVar34;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar38) {
        iVar13 = iVar34;
      }
    }
  }
  *(int *)(lVar37 + 0x100) = iVar13;
  lVar31 = param_1[0x15];
  if (lVar31 == 0) {
LAB_14092975f:
    *(undefined4 *)(lVar37 + 0x104) = 0;
    iVar13 = 0;
  }
  else {
    lVar18 = FUN_140929c72();
    if ((*(int *)(*(longlong *)(lVar31 + 0x10) + 0x38) < *(int *)(lVar18 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar31 + 0x10) + 0x30) + (longlong)*(int *)(lVar18 + 0x38) * 8
         ) != lVar18 + 0x30)) goto LAB_14092975f;
    uVar12 = *(uint *)(lVar31 + 0xc);
    *(uint *)(lVar37 + 0x104) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar31 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar31 = 0;
    }
    iVar13 = *(int *)(lVar31 + 0x10);
    if (*(int *)(lVar31 + 0x10) == 0) {
      LOCK();
      iVar13 = DAT_14c964868 + 1;
      UNLOCK();
      iVar34 = DAT_14c964868 + 1;
      bVar38 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar13;
      if (bVar38) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar34);
      }
      LOCK();
      iVar13 = *(int *)(lVar31 + 0x10);
      bVar38 = iVar13 == 0;
      if (bVar38) {
        *(int *)(lVar31 + 0x10) = iVar34;
        iVar13 = 0;
      }
      UNLOCK();
      if (bVar38) {
        iVar13 = iVar34;
      }
    }
  }
  *(int *)(lVar37 + 0x108) = iVar13;
  uVar10 = (**(code **)(*param_1 + 0xad0))(param_1);
  *(undefined1 *)(lVar37 + 0x1f0) = uVar10;
  if (*(longlong *)(lVar37 + 0x1f8) == param_1[0x13b] &&
      *(int *)(lVar37 + 0x200) == (int)param_1[0x13c]) {
    plVar19 = *(longlong **)(lVar37 + 0x150);
    if (plVar19 == (longlong *)0x0) goto LAB_140928c07;
    local_78 = (longlong *)param_1[0x175];
    local_70 = (longlong *)param_1[0x176];
    if (local_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    cVar8 = (**(code **)(*plVar19 + 0x58))(plVar19,&local_78);
    if (cVar8 == '\0') goto LAB_140928c07;
    plVar19 = *(longlong **)(lVar37 + 0x150);
    local_88 = param_1[0x175];
    local_80 = param_1[0x176];
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar19 + 0x60))(plVar19,&local_88);
  }
  else {
    *(longlong *)(lVar37 + 0x1f8) = param_1[0x13b];
    *(int *)(lVar37 + 0x200) = (int)param_1[0x13c];
    *(undefined8 *)(lVar37 + 0x208) = 0;
    FUN_14092a19c(lVar37);
LAB_140928c07:
    FUN_140929af0(lVar37);
  }
  lVar31 = DAT_14cb1b010;
  iVar13 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (((iVar13 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar13 == 2)) {
    uVar25 = 0;
  }
  else if (iVar13 == 1) {
    DVar15 = FUN_140ad26c0();
    DVar16 = GetCurrentThreadId();
    uVar25 = (ulonglong)(DVar15 != DVar16);
  }
  else {
    uVar25 = 1;
  }
  if (*(char *)(lVar31 + uVar25) == '\x01') {
    FUN_140515662(lVar37);
  }
  plVar19 = plStack_90;
  if (plStack_90 == (longlong *)0x0) {
    param_1[0x104] = lVar37;
    plVar20 = (longlong *)param_1[0x105];
    if (plVar20 != (longlong *)0x0) {
LAB_140928ca2:
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))();
      }
      param_1[0x105] = (longlong)plVar19;
      if (plVar19 != (longlong *)0x0) goto LAB_140928f0b;
    }
  }
  else {
    LOCK();
    *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
    UNLOCK();
    param_1[0x104] = lVar37;
    if ((longlong *)param_1[0x105] != plStack_90) {
      LOCK();
      *(int *)((longlong)plStack_90 + 0xc) = *(int *)((longlong)plStack_90 + 0xc) + 1;
      UNLOCK();
      plVar20 = (longlong *)param_1[0x105];
      if (plVar20 != (longlong *)0x0) goto LAB_140928ca2;
      param_1[0x105] = (longlong)plStack_90;
    }
LAB_140928f0b:
    LOCK();
    plVar20 = plVar19 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
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
  (**(code **)(*plVar30 + 0x30))(plVar30,&local_98);
  lVar37 = local_98;
  if ((((*(longlong *)(local_98 + 0x118) == 0) || (*(longlong *)(local_98 + 0x120) == 0)) ||
      (*(int *)(*(longlong *)(local_98 + 0x120) + 8) < 1)) &&
     (((*(int *)(local_98 + 0x110) != 0 && (uVar12 = *(uint *)(local_98 + 0x10c), -1 < (int)uVar12))
      && (((int)uVar12 < DAT_14c9647dc &&
          ((((plVar19 = (longlong *)
                        ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
             plVar19 != (longlong *)0x0 && ((int)plVar19[2] == *(int *)(local_98 + 0x110))) &&
            ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)) && (lVar31 = *plVar19, lVar31 != 0))))))))
  {
    plVar19 = (longlong *)(lVar31 + 0x834);
    uVar12 = *(uint *)(lVar31 + 0x83c);
    if (((uVar12 == 0) || (uVar22 = *(uint *)(lVar31 + 0x838), (int)uVar22 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar22 ||
        (((lVar18 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8), lVar18 == 0 ||
          (*(uint *)(lVar18 + 0x10) != uVar12)) || ((*(uint *)(lVar18 + 8) & 0x10200000) != 0))))))
    {
      if (*(int *)(lVar31 + 0x844) == 0) {
LAB_140929482:
        bVar38 = false;
      }
      else {
        uVar22 = *(uint *)(lVar31 + 0x840);
        bVar38 = false;
        if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c9647dc)) {
          lVar18 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
          if ((lVar18 == 0) || (*(int *)(lVar18 + 0x10) != *(int *)(lVar31 + 0x844)))
          goto LAB_140929482;
          bVar38 = (*(uint *)(lVar18 + 8) & 0x10200000) == 0;
        }
      }
      iVar13 = *(int *)plVar19;
      if ((!bVar38) && (iVar13 < 0)) {
        if (*(longlong *)(local_98 + 0x140) == 0) {
          lVar37 = local_98 + 0x128;
          *(undefined8 *)(local_98 + 0x128) = 0;
          *(longlong *)(local_98 + 0x130) = plVar30[0xa2];
          *(longlong *)(local_98 + 0x138) = local_98;
          *(longlong **)(local_98 + 0x140) = plVar30 + 0xa1;
          if (plVar30[0xa1] == 0) {
            plVar30[0xa1] = lVar37;
          }
          if ((longlong *)plVar30[0xa2] != (longlong *)0x0) {
            *(longlong *)plVar30[0xa2] = lVar37;
          }
          plVar30[0xa2] = lVar37;
          *(int *)(plVar30 + 0xa3) = (int)plVar30[0xa3] + 1;
        }
        goto LAB_1409290f1;
      }
      uVar22 = *(uint *)(lVar31 + 0x838);
    }
    else {
      iVar13 = *(int *)plVar19;
    }
    plVar20 = plVar30 + 0xa4;
    uVar22 = uVar22 ^ uVar12;
    uVar12 = uVar22 >> 0xd ^ iVar13 - uVar22;
    uVar32 = uVar12 << 8 ^ (-0x61c88647 - uVar22) - uVar12;
    uVar22 = uVar32 >> 0xd ^ (uVar22 - uVar12) - uVar32;
    uVar21 = uVar22 >> 0xc ^ (uVar12 - uVar32) - uVar22;
    uVar12 = uVar21 << 0x10 ^ (uVar32 - uVar22) - uVar21;
    uVar22 = uVar12 >> 5 ^ (uVar22 - uVar21) - uVar12;
    uVar32 = uVar22 >> 3 ^ (uVar21 - uVar12) - uVar22;
    uVar12 = uVar32 << 10 ^ (uVar12 - uVar22) - uVar32;
    uVar12 = uVar12 >> 0xf ^ uVar22 - (uVar32 + uVar12);
    iVar13 = FUN_140929bce(plVar20,uVar12,plVar19);
    if (iVar13 == -1) {
LAB_140929243:
      FUN_14092b610(plVar20,&local_78);
      plVar17 = local_70;
      *(undefined4 *)(local_70 + 2) = *(undefined4 *)(lVar31 + 0x844);
      lVar18 = *(longlong *)(lVar31 + 0x83c);
      *local_70 = *plVar19;
      local_70[1] = lVar18;
      local_70[3] = 0;
      local_70[4] = 0;
      *(undefined4 *)(local_70 + 5) = 0xffffffff;
      local_c0 = CONCAT44(local_c0._4_4_,(int)local_78);
      local_c8 = (longlong *)(longlong)(int)local_78;
      cVar8 = FUN_14092a55a(plVar20,uVar12,local_70,&local_78);
      if (cVar8 == '\0') {
        uVar22 = (int)plVar30[0xa5] - *(int *)((longlong)plVar30 + 0x554);
        if (uVar22 < 4) {
          iVar13 = 1;
        }
        else {
          uVar24 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
          lVar18 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar13 = 1 << ((byte)lVar18 & 0x1f);
        }
        if (((int)uVar22 < 1) || (iVar13 <= (int)plVar30[0xad])) {
          uVar12 = (int)plVar30[0xad] - 1U & uVar12;
          *(uint *)((longlong)plVar17 + 0x2c) = uVar12;
          plVar27 = (longlong *)plVar30[0xac];
          if ((longlong *)plVar30[0xac] == (longlong *)0x0) {
            plVar27 = plVar30 + 0xab;
          }
          *(undefined4 *)(plVar17 + 5) =
               *(undefined4 *)
                ((longlong)plVar27 + ((longlong)(int)plVar30[0xad] - 1U & (longlong)(int)uVar12) * 4
                );
          plVar17 = (longlong *)plVar30[0xac];
          if ((longlong *)plVar30[0xac] == (longlong *)0x0) {
            plVar17 = plVar30 + 0xab;
          }
          *(undefined4 *)
           ((longlong)plVar17 + ((longlong)(int)plVar30[0xad] - 1U & (longlong)(int)uVar12) * 4) =
               (undefined4)local_c0;
        }
        else {
          *(int *)(plVar30 + 0xad) = iVar13;
          FUN_14092d0bc(plVar20);
        }
      }
      lVar18 = *plVar20 + (longlong)local_c8 * 0x30;
      uVar24 = (ulonglong)local_cc;
    }
    else {
      if (*plVar20 + (longlong)iVar13 * 0x30 == 0) goto LAB_140929243;
      lVar18 = *plVar20 + (longlong)iVar13 * 0x30;
    }
    plVar30 = (longlong *)(lVar18 + 0x18);
    lVar26 = *plVar30;
    if (lVar26 == 0) {
      plVar17 = (longlong *)FUN_14001cc68(0x4d0,0x10);
      plVar17[1] = (longlong)&DAT_100000001;
      *plVar17 = (longlong)&PTR_FUN_14ab67000;
      plVar20 = plVar17 + 2;
      plVar17[2] = 0;
      plVar17[3] = 0;
      lVar26 = *(longlong *)(lVar31 + 0x83c);
      plVar17[4] = *plVar19;
      plVar17[5] = lVar26;
      *(undefined4 *)(plVar17 + 6) = *(undefined4 *)(lVar31 + 0x844);
      plVar17[0x87] = 0;
      plVar17[0x88] = 0x2000000000;
      plVar17[0x8a] = 0;
      *(undefined4 *)(plVar17 + 0x8b) = 0;
      *(undefined4 *)((longlong)plVar17 + 0x45c) = 0x20;
      *(undefined4 *)(plVar17 + 0x8c) = 0xffffffff;
      *(undefined4 *)((longlong)plVar17 + 0x464) = 0;
      plVar17[0x95] = 0;
      *(undefined4 *)(plVar17 + 0x96) = 0;
      plVar17[0x97] = 0;
      plVar17[0x98] = 0;
      *(undefined4 *)(plVar17 + 0x99) = 0;
      local_78 = plVar20;
      local_70 = plVar17;
      FUN_14092a5f8(&local_78,plVar20);
      if (plVar17 == (longlong *)0x0) {
        *plVar30 = 0x10;
        plVar19 = *(longlong **)(lVar18 + 0x20);
        if (plVar19 != (longlong *)0x0) {
          *(undefined8 *)(lVar18 + 0x20) = 0;
LAB_140929987:
          LOCK();
          plVar20 = plVar19 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*plVar19)(plVar19);
            LOCK();
            piVar1 = (int *)((longlong)plVar19 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar13 = *piVar1;
            UNLOCK();
joined_r0x0001409299be:
            if (iVar13 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        *plVar30 = (longlong)plVar20;
        plVar19 = *(longlong **)(lVar18 + 0x20);
        if (plVar17 == plVar19) {
          LOCK();
          plVar19 = plVar17 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)*plVar19 == 0) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar13 = *piVar1;
            UNLOCK();
            plVar19 = plVar17;
            goto joined_r0x0001409299be;
          }
        }
        else {
          *(longlong **)(lVar18 + 0x20) = plVar17;
          if (plVar19 != (longlong *)0x0) goto LAB_140929987;
        }
      }
      plVar19 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar20 = local_70 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
      FUN_14092a2ac(*plVar30 + 0x28,lVar31);
      lVar26 = *plVar30;
    }
    FUN_140929e44(lVar37,lVar26);
  }
LAB_1409290f1:
  plVar30 = plStack_90;
  plVar20 = local_a0;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar19 = plStack_90 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar20 = local_a0;
      if (*piVar1 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
        plVar20 = local_a0;
      }
    }
  }
LAB_14092911d:
  LOCK();
  plVar30 = plVar20 + 1;
  *(int *)plVar30 = (int)*plVar30 + -1;
  UNLOCK();
  if ((int)*plVar30 == 0) {
    (**(code **)*plVar20)(plVar20);
    LOCK();
    piVar1 = (int *)((longlong)plVar20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
    }
  }
LAB_140929127:
  if ((char)uVar24 != '\0') goto LAB_140929130;
LAB_1409294da:
  plVar19 = local_b8;
  LOCK();
  plVar30 = local_b8 + 1;
  *(int *)plVar30 = (int)*plVar30 + -1;
  UNLOCK();
  if ((int)*plVar30 == 0) {
    (**(code **)*local_b8)(local_b8);
    LOCK();
    piVar1 = (int *)((longlong)plVar19 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
LAB_140929130:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140929af0 FUN_140929af0 body=57 status=ok
// SIG undefined FUN_140929af0(void)

void FUN_140929af0(longlong param_1)

{
  undefined1 uVar1;
  
  FUN_140929f74();
  *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
  FUN_14092a698(param_1);
  FUN_140929d58(param_1);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))();
  *(undefined1 *)(param_1 + 0x1f1) = uVar1;
  return;
}



// FUNCTION 140929b2e FUN_140929b2e body=159 status=ok
// SIG undefined FUN_140929b2e(void)

void FUN_140929b2e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_140929b6b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_140929b6b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140929b6b:
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
                    /* WARNING: Could not recover jumptable at 0x000140929bc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140929bce FUN_140929bce body=164 status=ok
// SIG undefined FUN_140929bce(void)

int FUN_140929bce(longlong *param_1,uint param_2,int *param_3)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar3 * 0x30;
        if (*(int *)(lVar4 + lVar5) == *param_3) {
          cVar1 = FUN_14007c268(lVar4 + lVar5 + 4,param_3 + 1);
          if ((cVar1 != '\0') &&
             (cVar1 = FUN_14007c310(lVar4 + lVar5 + 0xc,param_3 + 3), cVar1 != '\0')) {
            return iVar3;
          }
        }
        lVar4 = *param_1;
        iVar3 = *(int *)(lVar4 + 0x28 + lVar5);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 140929c72 FUN_140929c72 body=228 status=ok
// SIG undefined FUN_140929c72(void)

longlong FUN_140929c72(void)

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
  if (DAT_14cb1a858 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146418e10;
    local_38 = &LAB_147e1b642;
    local_40 = &LAB_146418e15;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x418;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"Spawner",&DAT_14cb1a858,FUN_146418de8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1a858;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140929d58 FUN_140929d58 body=234 status=ok
// SIG undefined FUN_140929d58(void)

void FUN_140929d58(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(int *)(param_1 + 0x110) != 0) && (uVar1 = *(uint *)(param_1 + 0x10c), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x110))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && ((longlong *)*plVar3 != (longlong *)0x0)))) {
      (**(code **)(*(longlong *)*plVar3 + 0xa90))();
    }
  }
  if (((*(int *)(param_1 + 0x108) != 0) && (uVar1 = *(uint *)(param_1 + 0x104), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x108))) &&
        ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (lVar2 = *plVar3, lVar2 != 0)) {
      local_18 = lVar2;
      FUN_1447cd2ec(lVar2 + 0x400);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140929e44 FUN_140929e44 body=214 status=ok
// SIG undefined FUN_140929e44(void)

void FUN_140929e44(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  plVar4 = *(longlong **)(param_1 + 0x120);
  *(longlong *)(param_1 + 0x120) = lVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  lVar3 = param_1 + 0x128;
  if ((*(longlong *)(param_1 + 0x140) == 0) ||
     (FUN_140929f1a(*(longlong *)(param_1 + 0x140),lVar3), *(longlong *)(param_1 + 0x140) == 0)) {
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = param_2[0x96];
    *(longlong *)(param_1 + 0x138) = param_1;
    *(undefined8 **)(param_1 + 0x140) = param_2 + 0x95;
    if (param_2[0x95] == 0) {
      param_2[0x95] = lVar3;
    }
    if ((longlong *)param_2[0x96] != (longlong *)0x0) {
      *(longlong *)param_2[0x96] = lVar3;
    }
    param_2[0x96] = lVar3;
    *(int *)(param_2 + 0x97) = *(int *)(param_2 + 0x97) + 1;
  }
  return;
}



// FUNCTION 140929f1a FUN_140929f1a body=90 status=ok
// SIG undefined FUN_140929f1a(void)

longlong FUN_140929f1a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (((longlong *)param_2[3] != (longlong *)0x0) && ((longlong *)param_2[3] == param_1)) {
    if (0 < (int)param_1[2]) {
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
    }
    if ((longlong *)*param_1 == param_2) {
      *param_1 = *param_2;
    }
    plVar1 = (longlong *)param_2[1];
    if ((longlong *)param_1[1] == param_2) {
      param_1[1] = (longlong)plVar1;
    }
    lVar2 = *param_2;
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = lVar2;
    }
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 8) = param_2[1];
    }
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return lVar2;
}



// FUNCTION 140929f74 FUN_140929f74 body=353 status=ok
// SIG undefined FUN_140929f74(void)

void FUN_140929f74(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined1 *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14092ac80(param_1,param_1);
  if (*(int *)(param_1 + 500) == 3) {
    local_48 = (undefined ***)0x0;
    local_38 = &PTR_LAB_14ab66cc0;
    local_30 = &LAB_1437edcc2;
    local_58[0] = &LAB_140ba5f00;
    FUN_140ba5e30(param_1 + 0x210,local_58);
    if (local_58[0] != (undefined1 *)0x0) {
      pppuVar4 = local_48;
      if (local_48 == (undefined ***)0x0) {
        pppuVar4 = &local_38;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  *(undefined8 *)(param_1 + 0x150) = 0;
  plVar3 = *(longlong **)(param_1 + 0x158);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x158) = 0;
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
  *(undefined4 *)(param_1 + 500) = 0;
  FUN_14092a0d6(param_1 + 0x1d0,0);
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_140929f1a(*(longlong *)(param_1 + 0xb0),param_1 + 0x98);
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_140929f1a(*(longlong *)(param_1 + 0xf0),param_1 + 0xd8);
  }
  FUN_14092a154(*(undefined8 *)(param_1 + 0x10),param_1 + 0x18);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092a0d6 FUN_14092a0d6 body=69 status=ok
// SIG undefined FUN_14092a0d6(void)

void FUN_14092a0d6(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar1 = param_1;
    }
    FUN_14092a11b(lVar1,*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  FUN_147e28550(param_1);
  return;
}



// FUNCTION 14092a11b FUN_14092a11b body=56 status=ok
// SIG undefined FUN_14092a11b(void)

void FUN_14092a11b(longlong param_1,int param_2)

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



// FUNCTION 14092a154 FUN_14092a154 body=71 status=ok
// SIG undefined FUN_14092a154(void)

void FUN_14092a154(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x200) == *param_2) && (*(longlong *)(param_1 + 0x208) == param_2[1])
     ) {
    cVar1 = FUN_140510976(param_1 + 0x1f0);
    if (cVar1 != '\0') {
      FUN_145758894(param_1 + 0x1f0);
      return;
    }
  }
  return;
}



// FUNCTION 14092a19c FUN_14092a19c body=272 status=ok
// SIG undefined FUN_14092a19c(void)

void FUN_14092a19c(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x1a8) != 0) {
    plVar1 = (longlong *)(param_1 + 0x1a0);
    plVar5 = (longlong *)FUN_1400d690e(param_1 + 0x1f8);
    if (plVar5 == (longlong *)0x0) {
      iVar2 = *(int *)(param_1 + 0x1ac);
      FUN_14092d378(*(undefined8 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8));
      *(undefined4 *)(param_1 + 0x1a8) = 0;
      if ((iVar2 < 0) && (*(int *)(param_1 + 0x1ac) != 0)) {
        FUN_147e286fa(plVar1);
      }
      *(undefined4 *)(param_1 + 0x1b0) = 0;
    }
    else {
      uVar7 = (ulonglong)*(int *)(param_1 + 0x1a8);
      if (0 < (longlong)uVar7) {
        lVar8 = uVar7 << 4;
        do {
          lVar8 = lVar8 + -0x10;
          lVar6 = FUN_14571ef7c(*(undefined8 *)(*plVar1 + lVar8));
          if ((lVar6 == 0) || (cVar4 = (**(code **)(*plVar5 + 0x60))(plVar5,lVar6), cVar4 == '\0'))
          {
            FUN_147e2872a(plVar1,(int)uVar7 + -1);
            iVar2 = *(int *)(param_1 + 0x1b0);
            if ((0 < (longlong)iVar2) && ((longlong)(uVar7 - 1) <= (longlong)iVar2)) {
              *(int *)(param_1 + 0x1b0) = iVar2 + -1;
            }
          }
          bVar3 = 1 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar3);
      }
    }
  }
  return;
}



// FUNCTION 14092a2ac FUN_14092a2ac body=141 status=ok
// SIG undefined FUN_14092a2ac(void)

void FUN_14092a2ac(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  code *local_30;
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_2;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xbe8) == 0)) {
    plVar1 = (longlong *)FUN_14092a406(param_2);
    if (plVar1 != (longlong *)0x0) {
      local_28 = &local_40;
      local_38 = &local_20;
      local_30 = FUN_1437ede94;
      local_40 = param_1;
      (**(code **)(*plVar1 + 0x58))(plVar1,param_2,0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092a33a FUN_14092a33a body=203 status=ok
// SIG undefined FUN_14092a33a(void)

void FUN_14092a33a(longlong param_1,undefined8 param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x90);
    lVar3 = (longlong)*(int *)(param_1 + 0x98) * 0xf8;
    do {
      plVar2 = (longlong *)FUN_1400d690e(lVar4);
      if (plVar2 != (longlong *)0x0) {
        iVar1 = FUN_14034c64e(lVar4,param_2);
        if (iVar1 < param_3) {
          iVar1 = param_3;
        }
        if (0 < iVar1) {
          local_4c = iVar1;
          (*(code *)*param_4)(param_4[1],plVar2,&local_4c);
        }
        (**(code **)(*plVar2 + 0x58))(plVar2,param_2,iVar1,param_4);
      }
      lVar4 = lVar4 + 0xf8;
      lVar3 = lVar3 + -0xf8;
    } while (lVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14092a406 FUN_14092a406 body=134 status=ok
// SIG undefined FUN_14092a406(void)

undefined8 FUN_14092a406(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448c1924(param_1,&local_28);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1400d690e(local_28 + 0x1f8);
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092a48e FUN_14092a48e body=56 status=ok
// SIG undefined FUN_14092a48e(void)

void FUN_14092a48e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ab66490;
  plVar2 = *(longlong **)(param_1 + 0x78);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14092a4c6(param_1 + 0x10);
  return;
}



// FUNCTION 14092a4c6 FUN_14092a4c6 body=91 status=ok
// SIG undefined FUN_14092a4c6(void)

void FUN_14092a4c6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab67360;
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
                    /* WARNING: Could not recover jumptable at 0x00014092a515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14092a522 FUN_14092a522 body=56 status=ok
// SIG undefined FUN_14092a522(void)

void FUN_14092a522(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ab665b0;
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14092a4c6(param_1 + 0x10);
  return;
}



// FUNCTION 14092a55a FUN_14092a55a body=158 status=ok
// SIG undefined FUN_14092a55a(void)

undefined8 FUN_14092a55a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar13 = FUN_140929bce(), iVar13 != -1)) {
    puVar3 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x30);
    plVar4 = *(longlong **)(*param_1 + 0x20 + (longlong)iVar13 * 0x30);
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
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = param_3[4];
    uVar10 = param_3[5];
    uVar11 = param_3[6];
    uVar12 = param_3[7];
    *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(param_3 + 8);
    puVar3[4] = uVar9;
    puVar3[5] = uVar10;
    puVar3[6] = uVar11;
    puVar3[7] = uVar12;
    *puVar3 = uVar5;
    puVar3[1] = uVar6;
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    FUN_140b77ee0(param_1,*param_4);
    *param_4 = iVar13;
    return 1;
  }
  return 0;
}



// FUNCTION 14092a5f8 FUN_14092a5f8 body=159 status=ok
// SIG undefined FUN_14092a5f8(void)

void FUN_14092a5f8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_14092a635;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_14092a635;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14092a635:
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
                    /* WARNING: Could not recover jumptable at 0x00014092a693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14092a698 FUN_14092a698 body=727 status=ok
// SIG undefined FUN_14092a698(void)

void FUN_14092a698(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*(char *)(param_1 + 0x1f) != '\x01') || (*(int *)(param_1 + 0x22) == 0)) ||
      (uVar2 = *(uint *)((longlong)param_1 + 0x10c), (int)uVar2 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar2 ||
       (plVar8 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0)) ||
      (((int)plVar8[2] != *(int *)(param_1 + 0x22) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))))
     )) goto LAB_14092a83b;
  if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
    lVar7 = *plVar8;
  }
  else {
    lVar7 = 0;
  }
  plVar8 = *(longlong **)(lVar7 + 0xba8);
  plVar3 = *(longlong **)(lVar7 + 0xbb0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_50 = (longlong *)param_1[1];
  if (local_50 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
    local_58 = 0;
  }
  else {
    iVar6 = (int)local_50[1];
    local_58 = 0;
    do {
      if (iVar6 == 0) {
        local_50 = (longlong *)0x0;
        goto LAB_14092a772;
      }
      LOCK();
      iVar5 = (int)local_50[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(local_50 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar10);
    local_58 = *param_1;
  }
LAB_14092a772:
  (**(code **)(*plVar8 + 0x28))(plVar8,&local_48);
  plVar4 = local_40;
  if (local_40 == (longlong *)0x0) {
    param_1[0x2a] = local_48;
    plVar9 = (longlong *)param_1[0x2b];
    if (plVar9 != (longlong *)0x0) {
      param_1[0x2b] = 0;
LAB_14092a8a0:
      LOCK();
      plVar4 = plVar9 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
joined_r0x00014092a8db:
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    param_1[0x2a] = local_48;
    plVar9 = (longlong *)param_1[0x2b];
    if (local_40 == plVar9) {
      LOCK();
      plVar9 = local_40 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar6 = *piVar1;
        UNLOCK();
        plVar9 = plVar4;
        goto joined_r0x00014092a8db;
      }
    }
    else {
      param_1[0x2b] = local_40;
      if (plVar9 != (longlong *)0x0) goto LAB_14092a8a0;
    }
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
  plVar4 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_50 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)param_1[0x2a];
  local_68 = plVar8;
  local_60 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_68);
    FUN_14051314e(param_1 + 0x42);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    (**(code **)(*plVar4 + 0x60))(plVar4,&local_68);
    FUN_14051314e(param_1 + 0x42);
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
LAB_14092a83b:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092a970 FUN_14092a970 body=229 status=ok
// SIG undefined FUN_14092a970(void)

void FUN_14092a970(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_14092aa68(param_1,&local_30);
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  plVar4 = *(longlong **)(param_1 + 0x68);
  *(longlong **)(param_1 + 0x68) = plVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  puVar5 = (undefined8 *)param_2[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar1 = (int *)((longlong)puVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092aa68 FUN_14092aa68 body=108 status=ok
// SIG undefined FUN_14092aa68(void)

void FUN_14092aa68(longlong param_1,undefined8 *param_2)

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
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  plVar5 = *(longlong **)(param_1 + 0x20);
  *(longlong *)(param_1 + 0x20) = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
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
                    /* WARNING: Could not recover jumptable at 0x00014092aad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14092aad4 FUN_14092aad4 body=229 status=ok
// SIG undefined FUN_14092aad4(void)

void FUN_14092aad4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_14092aa68(param_1,&local_30);
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  plVar4 = *(longlong **)(param_1 + 0x30);
  *(longlong **)(param_1 + 0x30) = plVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  puVar5 = (undefined8 *)param_2[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar1 = (int *)((longlong)puVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092abcc FUN_14092abcc body=180 status=ok
// SIG undefined FUN_14092abcc(void)

longlong * FUN_14092abcc(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ab66da0;
  plVar4[2] = (longlong)&PTR_FUN_14ab67360;
  plVar4[3] = *param_3;
  lVar3 = param_3[1];
  plVar4[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[2] = (longlong)&PTR_FUN_14ab66520;
  *(undefined2 *)(plVar4 + 7) = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  *param_2 = (longlong)(plVar4 + 2);
  param_2[1] = (longlong)plVar4;
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
  return param_2;
}



// FUNCTION 14092ac80 FUN_14092ac80 body=981 status=ok
// SIG undefined FUN_14092ac80(void)

void FUN_14092ac80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  uint local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined2 local_bc;
  undefined2 local_ba;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_14092b234(local_b8,param_1 + 0x28);
  local_e0 = 0x100000000;
  local_d0._0_4_ = 0xffffffff;
  local_d0._4_4_ = 0;
  local_c8 = 0;
  iVar7 = 0;
  local_d8 = local_a8;
  if (local_90 != 0) {
    FUN_1449c0562(&local_e0);
    iVar7 = local_90;
  }
  local_f0._0_4_ = (uint)local_d0;
  local_f0._4_4_ = local_d0._4_4_;
  local_e8 = local_c8;
  local_e4 = local_c4;
  local_100 = local_e0;
  local_f8 = local_d8;
  local_108 = local_b8;
  if ((local_d0._4_4_ != iVar7) || (local_d8 != local_a8)) {
    do {
      do {
        FUN_141002a50(param_1,(longlong)local_f0._4_4_ * 0x58 + *local_108,0);
        local_f0._0_4_ = (uint)local_f0 & ~local_100._4_4_;
        FUN_1449c0562(&local_100);
      } while (local_f0._4_4_ != iVar7);
    } while ((local_f8 != local_a8) || (local_108 != local_b8));
  }
  FUN_14092b08e(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  local_e0 = 0x100000000;
  local_d0 = 0xffffffff;
  local_c8 = 0;
  iVar7 = 0;
  local_d8 = local_a8;
  if (local_90 != 0) {
    FUN_1449c0562(&local_e0);
    iVar7 = local_90;
  }
  local_f0 = local_d0;
  uVar4 = local_f0;
  local_e8 = local_c8;
  local_e4 = local_c4;
  local_100 = local_e0;
  local_f8 = local_d8;
  local_f0._4_4_ = (int)((ulonglong)local_d0 >> 0x20);
  if ((local_f0._4_4_ != iVar7) || (local_108 = local_b8, local_d8 != local_a8)) {
    uVar8 = 0;
    iVar5 = local_f0._4_4_;
    local_108 = local_b8;
    local_f0 = uVar4;
    do {
      local_12c = (uint)uVar8;
      lVar2 = *local_108;
      lVar1 = lVar2 + (longlong)iVar5 * 0x58;
      lVar6 = FUN_14479d2ce(lVar1 + 0x30);
      uVar3 = local_12c;
      local_110 = *(longlong *)(lVar1 + 0x38);
      if ((lVar6 == 0) || (local_110 == 0)) {
        uVar8 = (ulonglong)local_12c;
      }
      else {
        uVar8 = (ulonglong)local_12c;
        if (*(char *)(lVar2 + (longlong)iVar5 * 0x58 + 0x40) == '\0') {
          local_128 = 0;
          uStack_120 = 0;
          local_e0 = *(undefined8 *)(param_2 + 0x18);
          local_d8 = *(undefined1 **)(param_2 + 0x20);
          local_d0._0_5_ = CONCAT14(1,*(undefined4 *)(param_2 + 0x17c));
          local_138 = &local_128;
          FUN_1411ce04e(param_2,lVar6,&local_110,&local_e0);
          uVar8 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
        }
      }
      local_f0 = CONCAT44(local_f0._4_4_,(uint)local_f0 & ~local_100._4_4_);
      FUN_1449c0562(&local_100);
      iVar5 = local_f0._4_4_;
    } while (((local_f0._4_4_ != iVar7) || (local_f8 != local_a8)) || (local_108 != local_b8));
    uVar4 = local_f0;
    if ((uVar8 & 1) != 0) {
      local_ba = 0x101;
      FUN_14092b0d4(*(longlong *)(param_1 + 0x10) + 0x1f0,param_2,param_2);
      uVar4 = local_f0;
    }
  }
  local_f0 = uVar4;
  local_bc = 0x101;
  FUN_14092b0d4(*(longlong *)(param_1 + 0x10) + 0x1f0,param_1,param_2);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14092b056(local_b8);
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14092b056 FUN_14092b056 body=55 status=ok
// SIG undefined FUN_14092b056(void)

void FUN_14092b056(longlong *param_1)

{
  FUN_14092b464(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14092b08e FUN_14092b08e body=70 status=ok
// SIG undefined FUN_14092b08e(void)

void FUN_14092b08e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14092cc26();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140e91948(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14092b0d4 FUN_14092b0d4 body=351 status=ok
// SIG undefined FUN_14092b0d4(void)

void FUN_14092b0d4(longlong param_1,longlong param_2,longlong param_3,char *param_4)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  bool bVar12;
  
  if ((*(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x18)) &&
     (*(longlong *)(param_1 + 0x18) == *(longlong *)(param_2 + 0x20))) {
    if (param_3 == 0) {
      FUN_145758894();
    }
    else {
      if ((*(longlong *)(param_2 + 0x18) != *(longlong *)(param_3 + 0x18)) ||
         (bVar4 = true, *(longlong *)(param_2 + 0x20) != *(longlong *)(param_3 + 0x20))) {
        pcVar8 = (char *)(param_1 + 0x24);
        if (param_4[1] != '\0') {
          pcVar8 = param_4;
        }
        cVar1 = *pcVar8;
        if (cVar1 == '\x01') {
          iVar9 = *(int *)(param_3 + 0x184);
        }
        else if (cVar1 == '\x02') {
          iVar9 = *(int *)(param_3 + 0x184) + *(int *)(param_3 + 0x180);
        }
        else {
          iVar9 = *(int *)(param_3 + 0x180);
        }
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_3 + 0x18);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        *(int *)(param_1 + 0x20) = iVar9;
        *(char *)(param_1 + 0x24) = cVar1;
        bVar4 = false;
      }
      lVar7 = param_1 + 0x140;
      if (*(longlong *)(param_1 + 0x300) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x300);
      }
      if ((longlong)*(int *)(param_1 + 0x308) != 0) {
        uVar6 = *(uint *)(param_3 + 0x180);
        uVar10 = *(uint *)(param_3 + 0x184);
        lVar5 = (longlong)*(int *)(param_1 + 0x308) * 0x38;
        pcVar8 = (char *)(lVar7 + 0x24);
        do {
          if ((*(longlong *)(pcVar8 + -0x14) == *(longlong *)(param_2 + 0x18)) &&
             (*(longlong *)(pcVar8 + -0xc) == *(longlong *)(param_2 + 0x20))) {
            pcVar11 = param_4;
            if (param_4[1] == '\0') {
              pcVar11 = pcVar8;
            }
            cVar1 = *pcVar11;
            bVar12 = cVar1 == '\0';
            uVar3 = uVar6;
            if (!bVar12) {
              uVar3 = uVar10;
            }
            uVar10 = !bVar12 + uVar10;
            uVar6 = bVar12 + uVar6;
            if ((!bVar4) || (uVar3 != *(ushort *)(pcVar8 + -4))) {
              uVar2 = *(undefined8 *)(param_3 + 0x20);
              *(undefined8 *)(pcVar8 + -0x14) = *(undefined8 *)(param_3 + 0x18);
              *(undefined8 *)(pcVar8 + -0xc) = uVar2;
              *(uint *)(pcVar8 + -4) = uVar3;
              *pcVar8 = cVar1;
            }
          }
          pcVar8 = pcVar8 + 0x38;
          lVar5 = lVar5 + -0x38;
        } while (lVar5 != 0);
      }
    }
  }
  if (param_4[1] == '\x01') {
    param_4[1] = '\0';
  }
  return;
}



// FUNCTION 14092b234 FUN_14092b234 body=559 status=ok
// SIG undefined FUN_14092b234(void)

longlong * FUN_14092b234(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar3 = (int)param_2[9];
  plVar13 = param_1 + 8;
  if ((ulonglong)(longlong)iVar3 < 2) {
    if (*plVar13 != 0) {
      FUN_1446efa72(plVar13,0,0,4);
    }
    if (iVar3 == 0) goto LAB_14092b272;
  }
  else {
    FUN_1446efa72(plVar13,0,iVar3,4);
  }
  plVar12 = param_1 + 7;
  if ((longlong *)*plVar13 != (longlong *)0x0) {
    plVar12 = (longlong *)*plVar13;
  }
  plVar13 = param_2 + 7;
  if ((longlong *)param_2[8] != (longlong *)0x0) {
    plVar13 = (longlong *)param_2[8];
  }
  memcpy(plVar12,plVar13,(longlong)iVar3 << 2);
LAB_14092b272:
  *(int *)(param_1 + 9) = iVar3;
  uVar4 = *(uint *)(param_2 + 1);
  FUN_14092b464(param_1,(ulonglong)uVar4);
  lVar9 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar9 + uVar4;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar9) < uVar4) {
    FUN_1403e7a24(param_1);
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar10 = (int)param_2[5] + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar10) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar11 = 0x80;
    if (0x80 < (int)uVar10) {
      uVar11 = uVar10;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar11;
    FUN_1446efbd8(param_1 + 2);
  }
  iVar3 = (int)param_2[5];
  *(int *)(param_1 + 5) = iVar3;
  if (iVar3 != 0) {
    plVar13 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar13 = param_2 + 2;
    }
    plVar12 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    memcpy(plVar12,plVar13,(ulonglong)(iVar3 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (int)uVar4) {
    lVar9 = *param_1;
    lVar5 = *param_2;
    lVar14 = 0;
    uVar15 = 0;
    do {
      plVar13 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar13 = param_2 + 2;
      }
      if ((*(uint *)((longlong)plVar13 + (uVar15 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar15 & 0x1f) & 1
          ) == 0) {
        *(undefined4 *)(lVar9 + lVar14) = *(undefined4 *)(lVar5 + lVar14);
        *(undefined4 *)(lVar9 + 4 + lVar14) = *(undefined4 *)(lVar5 + 4 + lVar14);
      }
      else {
        *(undefined8 *)(lVar9 + lVar14) = *(undefined8 *)(lVar5 + lVar14);
        *(undefined8 *)(lVar9 + 8 + lVar14) = *(undefined8 *)(lVar5 + 8 + lVar14);
        *(undefined4 *)(lVar9 + 0x10 + lVar14) = *(undefined4 *)(lVar5 + 0x10 + lVar14);
        *(undefined1 *)(lVar9 + 0x14 + lVar14) = *(undefined1 *)(lVar5 + 0x14 + lVar14);
        *(undefined8 *)(lVar9 + 0x18 + lVar14) = *(undefined8 *)(lVar5 + 0x18 + lVar14);
        *(undefined8 *)(lVar9 + 0x20 + lVar14) = *(undefined8 *)(lVar5 + 0x20 + lVar14);
        *(undefined1 *)(lVar9 + 0x2c + lVar14) = *(undefined1 *)(lVar5 + 0x2c + lVar14);
        *(undefined4 *)(lVar9 + 0x28 + lVar14) = *(undefined4 *)(lVar5 + 0x28 + lVar14);
        puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar14);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(lVar5 + 0x40 + lVar14);
        uVar7 = *puVar2;
        uVar8 = puVar2[1];
        puVar2 = (undefined8 *)(lVar9 + 0x30 + lVar14);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar1 = (undefined8 *)(lVar9 + 0x40 + lVar14);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        *(undefined8 *)(lVar9 + 0x50 + lVar14) = *(undefined8 *)(lVar5 + 0x50 + lVar14);
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x58;
    } while (uVar4 != uVar15);
  }
  return param_1;
}



// FUNCTION 14092b464 FUN_14092b464 body=123 status=ok
// SIG undefined FUN_14092b464(void)

void FUN_14092b464(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140e91948(param_1,param_2);
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



// FUNCTION 14092b4e0 FUN_14092b4e0 body=56 status=ok
// SIG undefined FUN_14092b4e0(void)

void FUN_14092b4e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ab66520;
  plVar2 = *(longlong **)(param_1 + 0x48);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14092a4c6(param_1 + 0x10);
  return;
}



// FUNCTION 14092b518 FUN_14092b518 body=229 status=ok
// SIG undefined FUN_14092b518(void)

void FUN_14092b518(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_14092aa68(param_1,&local_30);
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  plVar4 = *(longlong **)(param_1 + 0x38);
  *(longlong **)(param_1 + 0x38) = plVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  puVar5 = (undefined8 *)param_2[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar1 = (int *)((longlong)puVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092b610 FUN_14092b610 body=478 status=ok
// SIG undefined FUN_14092b610(void)

int * FUN_14092b610(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
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
      FUN_140044672(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x30);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x30) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 14092b7ee FUN_14092b7ee body=1710 status=ok
// SIG undefined FUN_14092b7ee(void)

longlong * FUN_14092b7ee(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  code *pcVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined1 auStack_118 [40];
  longlong *local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  char local_b8 [16];
  longlong *local_a8;
  int local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = param_2;
  plVar11 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14ab66d60;
  plVar11[2] = (longlong)&PTR_FUN_14ab67360;
  lVar18 = *param_3;
  plVar11[3] = lVar18;
  lVar15 = param_3[1];
  plVar11[4] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
    lVar18 = plVar11[3];
  }
  plVar11[5] = 0;
  plVar11[6] = 0;
  plVar11[2] = (longlong)&PTR_FUN_14ab66490;
  *(undefined8 *)((longlong)plVar11 + 100) = 0;
  plVar11[8] = 0;
  plVar11[9] = 0;
  plVar11[10] = 0;
  plVar11[0xb] = 0;
  *(undefined4 *)((longlong)plVar11 + 0x5f) = 0;
  plVar11[0xe] = 0;
  plVar11[0xf] = 0;
  FUN_1402e0c9c(lVar18,local_b8);
  puVar19 = &local_88;
  FUN_1447c3578(param_1 + 0x18,puVar19,local_b8);
  iVar8 = FUN_1405d5f74(puVar19);
  *(int *)((longlong)plVar11 + 0x3c) = iVar8;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_70) {
      puVar19 = (undefined4 *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar6)(puVar19);
  }
  plVar17 = plVar11 + 8;
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  *(int *)(plVar11 + 7) = iVar8;
  puVar19 = &local_88;
  local_f0 = plVar11 + 7;
  FUN_1447c3578(param_1 + 0x50,puVar19,local_b8);
  iVar9 = FUN_1405d5f74();
  if (iVar8 <= iVar9) {
    iVar9 = iVar8;
  }
  iVar12 = 0;
  if (0 < iVar9) {
    iVar12 = iVar9;
  }
  *(int *)plVar17 = iVar12;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_70) {
      puVar19 = (undefined4 *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar6)(puVar19);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  cVar3 = *(char *)(param_1 + 0x88);
  *(char *)(plVar11 + 0xc) = cVar3;
  puVar19 = &local_88;
  FUN_1447c3578(param_1 + 0x90,puVar19,local_b8);
  iVar9 = FUN_1405d5f74();
  if (iVar8 <= iVar9) {
    iVar9 = iVar8;
  }
  iVar12 = 0;
  if (0 < iVar9) {
    iVar12 = iVar9;
  }
  *(int *)((longlong)plVar11 + 0x44) = iVar12;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_70) {
      puVar19 = (undefined4 *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar6)(puVar19);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  puVar19 = &local_e0;
  FUN_1447c3578(param_1 + 0xd0,puVar19,local_b8);
  if (local_c0 == 3) {
    uVar20 = local_e0;
    bVar7 = 3;
  }
  else {
    FUN_1400b56fe(&local_88,&local_e0,3);
    puVar13 = &local_88;
    uVar20 = 0;
    if (local_68 != 0) {
      uVar20 = local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar13 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(puVar13);
    }
    bVar7 = local_c0;
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
      bVar7 = local_c0;
    }
  }
  *(undefined4 *)((longlong)plVar11 + 0x54) = uVar20;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_c8) {
      puVar19 = (undefined4 *)CONCAT44(uStack_dc,local_e0);
    }
    (*pcVar6)(puVar19);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
  }
  cVar4 = *(char *)(param_1 + 200);
  *(char *)((longlong)plVar11 + 0x61) = cVar4;
  puVar19 = &local_e0;
  FUN_1447c3578(param_1 + 0x118,puVar19,local_b8);
  if (local_c0 == 3) {
    uVar10 = 3;
    uVar20 = local_e0;
  }
  else {
    FUN_1400b56fe(&local_88,&local_e0,3);
    puVar13 = &local_88;
    uVar20 = 0;
    if (local_68 != 0) {
      uVar20 = local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar13 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(puVar13);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
    uVar10 = (uint)local_c0;
  }
  *(undefined4 *)(plVar11 + 0xb) = uVar20;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar10 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_c8) {
      puVar19 = (undefined4 *)CONCAT44(uStack_dc,local_e0);
    }
    (*pcVar6)(puVar19);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
  }
  cVar5 = *(char *)(param_1 + 0x150);
  *(char *)((longlong)plVar11 + 0x62) = cVar5;
  if (cVar5 == '\x01') {
    *(undefined8 *)((longlong)plVar11 + 100) = *(undefined8 *)(param_1 + 0x154);
    iVar9 = FUN_14092bea2(plVar11 + 2);
    *(int *)(plVar11 + 7) = iVar8 + iVar9;
  }
  if (cVar4 == '\0') {
    if ((cVar3 == '\0') || (*(char *)(lVar18 + 0x1f0) == '\x01')) {
      plVar17 = local_f0;
    }
  }
  else {
    plVar17 = (longlong *)((longlong)plVar11 + 0x44);
  }
  *(int *)(plVar11 + 10) = (int)*plVar17;
  lVar18 = DAT_14c9a3da0;
  if ((longlong)local_90 != 0) {
    lVar15 = (longlong)local_90 + -1;
    lVar16 = lVar15 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
    if (*(longlong *)(lVar18 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar18 = DAT_14c9a3da0;
    iVar8 = (int)lVar15;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar18 + lVar16) = 0xffffffff;
    iVar9 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar9 = DAT_14c9a3dd0;
    }
    *(int *)(lVar18 + 4 + lVar16) = iVar9;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar14 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar14 = DAT_14c9a3dc0;
    }
    iVar9 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar9 = iVar8;
    }
    bVar7 = (byte)lVar15 & 0x1f;
    DAT_14c9a3dd0 = iVar8;
    *(uint *)(puVar14 + (longlong)(iVar9 >> 5) * 4) =
         *(uint *)(puVar14 + (longlong)(iVar9 >> 5) * 4) &
         (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    local_90 = 0;
  }
  if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_a8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_a8 + 0x10))();
    }
  }
  plVar17 = local_e8;
  *local_e8 = (longlong)(plVar11 + 2);
  local_e8[1] = (longlong)plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_118);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar17;
}



// FUNCTION 14092bea2 FUN_14092bea2 body=359 status=ok
// SIG undefined FUN_14092bea2(void)

undefined4 FUN_14092bea2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  ulonglong local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 ***local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14092c0b8();
  lVar4 = FUN_1409448ee();
  if (lVar4 == 0) {
    uVar3 = 0;
    goto LAB_14092bf8d;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  lVar5 = FUN_14092c0b8();
  if (*(char *)(lVar5 + 0xb0) == '\x01') {
    uVar3 = *(undefined4 *)(lVar1 + 400);
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x18))();
  }
  switch(uVar3) {
  case 1:
    uVar6 = DAT_14cb1b060;
    break;
  case 2:
    uVar6 = DAT_14cb1b068;
    break;
  case 3:
    uVar6 = DAT_14cb1b070;
    break;
  case 4:
    uVar6 = DAT_14cb1b078;
    break;
  default:
    local_5c = 0;
    uVar6 = 0;
    goto LAB_14092bf2a;
  }
  local_5c = uVar6 & 0xffffffff00000000;
LAB_14092bf2a:
  local_54 = 0xffffffff;
  local_60 = 0xffffffff;
  local_5c = uVar6 & 0xffffffff | local_5c;
  local_50 = param_2;
  FUN_14092c00a(lVar4,local_48);
  uVar3 = FUN_1405d5f74(local_48);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar7 = local_48;
    if (0x18 < local_30) {
      ppppuVar7 = (undefined8 ****)local_48[0];
    }
    (*pcVar2)(ppppuVar7);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
LAB_14092bf8d:
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14092c00a FUN_14092c00a body=172 status=ok
// SIG undefined FUN_14092c00a(void)

undefined8
FUN_14092c00a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 auStack_98 [32];
  char *local_78;
  char local_68 [16];
  longlong *local_58;
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[0] = '\0';
  local_40[0] = 0;
  FUN_14575a19a(local_68,0);
  local_78 = local_68;
  FUN_144873f38(param_1,param_2,param_3,param_4);
  FUN_1448173f8(local_40);
  if ((local_68[0] == '\x03') && (local_58 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092c0b8 FUN_14092c0b8 body=389 status=ok
// SIG undefined FUN_14092c0b8(void)

longlong * FUN_14092c0b8(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong local_28;
  ulonglong local_18;
  
  plVar6 = DAT_14cb1b1d8;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb1b1d8 == (longlong *)0x0) {
    (*(code *)PTR_FUN_14c761fe0)(&local_40);
    plVar1 = local_38;
    plVar6 = DAT_14cb1b1e0;
    DAT_14cb1b1d8 = local_40;
    if (local_38 == (longlong *)0x0) {
      if (DAT_14cb1b1e0 != (longlong *)0x0) {
        DAT_14cb1b1e0 = (longlong *)0x0;
LAB_14092c1d3:
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
joined_r0x00014092c20a:
          if (iVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      plVar6 = DAT_14cb1b1e0;
      UNLOCK();
      if (local_38 == DAT_14cb1b1e0) {
        LOCK();
        plVar6 = local_38 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
          plVar6 = plVar1;
          goto joined_r0x00014092c20a;
        }
      }
      else {
        DAT_14cb1b1e0 = local_38;
        if (plVar6 != (longlong *)0x0) goto LAB_14092c1d3;
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_38 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    plVar6 = DAT_14cb1b1d8;
    lVar5 = FUN_140162146();
    if (lVar5 != 0) {
      FUN_1446dcdd4(&local_40,&DAT_14cb1b1f0);
      FUN_140024ada(&local_40,plVar6);
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    cVar4 = FUN_1449e3c20(DAT_14cb1b1d8);
    if (cVar4 == '\0') goto LAB_14092c0e9;
  }
  (**(code **)(*plVar6 + 0x28))(plVar6);
LAB_14092c0e9:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092c23e FUN_14092c23e body=12 status=ok
// SIG undefined FUN_14092c23e(void)

void FUN_14092c23e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014092c247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14092c24a FUN_14092c24a body=31 status=ok
// SIG undefined FUN_14092c24a(void)

undefined8 FUN_14092c24a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14092c26a FUN_14092c26a body=2485 status=ok
// SIG undefined FUN_14092c26a(void)

longlong * FUN_14092c26a(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_128 [39];
  char local_101;
  longlong *local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong *local_e8;
  float local_e0;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  char local_b8 [16];
  longlong *local_a8;
  int local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar13 = (longlong *)FUN_14001cc68(0x98,0x10);
  plVar13[1] = (longlong)&DAT_100000001;
  *plVar13 = (longlong)&PTR_FUN_14ab66dc0;
  plVar13[2] = (longlong)&PTR_FUN_14ab67360;
  local_f0 = *param_3;
  plVar13[3] = local_f0;
  lVar5 = param_3[1];
  plVar13[4] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    local_f0 = plVar13[3];
  }
  plVar13[5] = 0;
  plVar13[6] = 0;
  plVar13[2] = (longlong)&PTR_FUN_14ab665b0;
  plVar13[7] = 0;
  plVar13[8] = 0;
  plVar13[9] = 0;
  plVar13[10] = 0;
  plVar13[0xb] = 0;
  plVar13[0xc] = 0;
  *(undefined8 *)((longlong)plVar13 + 0x67) = 0;
  *(undefined8 *)((longlong)plVar13 + 0x6f) = 0;
  plVar13[0xf] = 0;
  plVar13[0x10] = 0;
  plVar13[0x11] = 0;
  plVar13[0x12] = 0;
  FUN_1402e0c9c(0,local_b8);
  if (*(char *)(param_1 + 0x18) == '\0') {
    pfVar18 = &local_88;
    FUN_1447c3578(param_1 + 0x20,pfVar18,local_b8);
    iVar8 = FUN_1405d5f74(pfVar18);
    *(int *)((longlong)plVar13 + 0x54) = iVar8;
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        pfVar18 = (float *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(pfVar18);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  else {
    *(undefined4 *)((longlong)plVar13 + 0x54) = 0x7fffffff;
    iVar8 = 0x7fffffff;
  }
  *(int *)(plVar13 + 10) = iVar8;
  pfVar18 = &local_e0;
  FUN_1447c3578(param_1 + 0x158,pfVar18,local_b8);
  if (local_c0 == 3) {
    fVar21 = local_e0;
    bVar7 = 3;
  }
  else {
    pfVar19 = &local_88;
    FUN_1400b56fe(pfVar19,&local_e0,3);
    fVar21 = 0.0;
    if (local_68 != 0) {
      fVar21 = local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        pfVar19 = (float *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(pfVar19);
    }
    bVar7 = local_c0;
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
      bVar7 = local_c0;
    }
  }
  *(float *)(plVar13 + 0x10) = fVar21;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_c8) {
      pfVar18 = (float *)CONCAT44(uStack_dc,local_e0);
    }
    (*pcVar6)(pfVar18);
  }
  plVar15 = plVar13 + 0xc;
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
  }
  pfVar18 = &local_88;
  FUN_1447c3578(param_1 + 0x90,pfVar18,local_b8);
  iVar9 = FUN_1405d5f74(pfVar18);
  iVar10 = 1;
  if (1 < iVar9) {
    iVar10 = iVar9;
  }
  *(int *)plVar15 = iVar10;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  local_e8 = plVar15;
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_70) {
      pfVar18 = (float *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar6)(pfVar18);
  }
  plVar15 = plVar13 + 0xb;
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  pfVar18 = &local_88;
  FUN_1447c3578(param_1 + 0x58,pfVar18,local_b8);
  iVar10 = FUN_1405d5f74(pfVar18);
  *(int *)plVar15 = iVar10;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  local_f8 = plVar15;
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_70) {
      pfVar18 = (float *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar6)(pfVar18);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  *(int *)((longlong)plVar13 + 0x5c) = iVar10;
  local_101 = *(char *)(param_1 + 200);
  *(char *)((longlong)plVar13 + 0x74) = local_101;
  pfVar18 = &local_88;
  FUN_1447c3578(param_1 + 0xd0,pfVar18,local_b8);
  iVar11 = FUN_1405d5f74(pfVar18);
  iVar9 = 1;
  if (1 < iVar11) {
    iVar9 = iVar11;
  }
  *(int *)((longlong)plVar13 + 100) = iVar9;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_70) {
      pfVar18 = (float *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar6)(pfVar18);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  pfVar18 = &local_e0;
  FUN_1447c3578(param_1 + 0x110,pfVar18,local_b8);
  if (local_c0 == 3) {
    fVar21 = local_e0;
    bVar7 = 3;
  }
  else {
    pfVar19 = &local_88;
    FUN_1400b56fe(pfVar19,&local_e0,3);
    fVar21 = 0.0;
    if (local_68 != 0) {
      fVar21 = local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        pfVar19 = (float *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(pfVar19);
    }
    bVar7 = local_c0;
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
      bVar7 = local_c0;
    }
  }
  *(float *)(plVar13 + 0xd) = fVar21;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_c8) {
      pfVar18 = (float *)CONCAT44(uStack_dc,local_e0);
    }
    (*pcVar6)(pfVar18);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
  }
  cVar3 = *(char *)(param_1 + 0x108);
  *(char *)((longlong)plVar13 + 0x75) = cVar3;
  pfVar18 = &local_e0;
  FUN_1447c3578(param_1 + 0x1c8,pfVar18,local_b8);
  if (local_c0 == 3) {
    fVar21 = local_e0;
    bVar7 = 3;
  }
  else {
    pfVar19 = &local_88;
    local_100 = param_2;
    FUN_1400b56fe(pfVar19,&local_e0,3);
    fVar21 = 0.0;
    if (local_68 != 0) {
      fVar21 = local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        pfVar19 = (float *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(pfVar19);
    }
    param_2 = local_100;
    bVar7 = local_c0;
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
      param_2 = local_100;
      bVar7 = local_c0;
    }
  }
  if (1.0 <= fVar21) {
    fVar21 = 1.0;
  }
  if (fVar21 <= 0.0) {
    fVar21 = 0.0;
  }
  *(float *)((longlong)plVar13 + 0x6c) = fVar21;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_c8) {
      pfVar18 = (float *)CONCAT44(uStack_dc,local_e0);
    }
    (*pcVar6)(pfVar18);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
  }
  pfVar18 = &local_e0;
  FUN_1447c3578(param_1 + 400,pfVar18,local_b8);
  if (local_c0 == 3) {
    uVar12 = 3;
    fVar21 = local_e0;
  }
  else {
    pfVar19 = &local_88;
    local_100 = param_2;
    FUN_1400b56fe(pfVar19,&local_e0,3);
    fVar21 = 0.0;
    if (local_68 != 0) {
      fVar21 = local_88;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_70) {
        pfVar19 = (float *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar6)(pfVar19);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
    uVar12 = (uint)local_c0;
    param_2 = local_100;
  }
  fVar20 = 0.0;
  if (0.0 <= fVar21) {
    fVar20 = fVar21;
  }
  *(float *)(plVar13 + 0xe) = fVar20;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_c8) {
      pfVar18 = (float *)CONCAT44(uStack_dc,local_e0);
    }
    (*pcVar6)(pfVar18);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
  }
  cVar4 = *(char *)(param_1 + 0x200);
  *(char *)((longlong)plVar13 + 0x76) = cVar4;
  plVar15 = *(longlong **)(param_1 + 0x204);
  plVar13[9] = (longlong)plVar15;
  if (cVar4 == '\x01') {
    iVar9 = FUN_14092bea2(plVar13 + 2);
    *(int *)local_f8 = iVar10 + iVar9;
    plVar15 = local_f8;
    if (iVar8 != 0x7fffffff) {
      if (iVar10 < 1) {
        iVar11 = 0;
      }
      else {
        iVar11 = iVar8 / iVar10;
        plVar15 = (longlong *)((longlong)iVar8 % (longlong)iVar10 & 0xffffffff);
      }
      *(int *)(plVar13 + 10) = iVar11 * iVar9 + iVar8;
    }
  }
  if (cVar3 == '\0') {
    if ((local_101 == '\0') || (plVar14 = local_e8, *(char *)(local_f0 + 0x1f0) == '\x01')) {
      plVar14 = local_f8;
    }
  }
  else {
    plVar14 = (longlong *)((longlong)plVar13 + 100);
  }
  *(int *)(plVar13 + 0x12) = (int)*plVar14;
  lVar5 = DAT_14c9a3da0;
  if ((longlong)local_90 != 0) {
    lVar16 = (longlong)local_90 + -1;
    lVar17 = lVar16 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar17),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar17));
    if (*(longlong *)(lVar5 + lVar17) != 0) {
      FUN_1400020a8();
    }
    lVar5 = DAT_14c9a3da0;
    iVar8 = (int)lVar16;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
    }
    *(undefined4 *)(lVar5 + lVar17) = 0xffffffff;
    iVar10 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar10 = DAT_14c9a3dd0;
    }
    *(int *)(lVar5 + 4 + lVar17) = iVar10;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    plVar15 = (longlong *)&DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (longlong *)0x0) {
      plVar15 = DAT_14c9a3dc0;
    }
    iVar10 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar10 = iVar8;
    }
    bVar7 = (byte)lVar16 & 0x1f;
    puVar2 = (uint *)((longlong)plVar15 + (longlong)(iVar10 >> 5) * 4);
    DAT_14c9a3dd0 = iVar8;
    *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    local_90 = 0;
  }
  if ((local_b8[0] == '\x03') && (local_a8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a8 + 0x10))(local_a8,plVar15);
    }
  }
  *param_2 = (longlong)(plVar13 + 2);
  param_2[1] = (longlong)plVar13;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar15 = plVar13 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_128);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14092cc26 FUN_14092cc26 body=325 status=ok
// SIG undefined FUN_14092cc26(void)

void FUN_14092cc26(longlong *param_1)

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
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x54 + (longlong)iVar4 * 0x58) * 4) =
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



// FUNCTION 14092cd6c FUN_14092cd6c body=847 status=ok
// SIG undefined FUN_14092cd6c(void)

void FUN_14092cd6c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      uVar4 = 0;
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar8 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar11 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_70 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_70 = local_68 & 0xffffffff;
      uVar11 = local_68 >> 0x20;
    }
    uVar8 = (uint)local_58;
    iVar16 = local_58._4_4_;
    iVar7 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar6 = *param_1;
        lVar12 = (longlong)iVar16;
        uVar2 = *(undefined8 *)(lVar6 + lVar12 * 0x28);
        uVar3 = *(undefined8 *)(lVar6 + 8 + lVar12 * 0x28);
        uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar13 = (uint)uVar3 & 0xffff;
        uVar14 = ((uint)uVar3 << 0x10 | uVar13) + (int)((ulonglong)uVar3 >> 0x20) +
                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar13 = (uint)uVar2 & 0xffff;
        uVar4 = uVar14 >> 0xd ^
                (((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4)) - uVar14;
        uVar18 = uVar4 << 8 ^ (-0x61c88647 - uVar14) - uVar4;
        uVar13 = uVar18 >> 0xd ^ (uVar14 - uVar4) - uVar18;
        uVar14 = uVar13 >> 0xc ^ (uVar4 - uVar18) - uVar13;
        uVar4 = uVar14 << 0x10 ^ (uVar18 - uVar13) - uVar14;
        uVar18 = uVar4 >> 5 ^ (uVar13 - uVar14) - uVar4;
        uVar13 = uVar18 >> 3 ^ (uVar14 - uVar4) - uVar18;
        uVar4 = uVar13 << 10 ^ (uVar4 - uVar18) - uVar13;
        uVar17 = (longlong)(int)(uVar4 >> 0xf ^ uVar18 - (uVar13 + uVar4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar15 = (int)uVar17;
        *(int *)(lVar6 + 0x24 + lVar12 * 0x28) = iVar15;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x20 + lVar12 * 0x28) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar17) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar16;
        uVar8 = ~(uint)uVar11 & uVar8;
        plVar5 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar5 = local_60;
        }
        iVar15 = (int)local_60[3];
        iVar16 = (int)local_70;
        lVar6 = (longlong)iVar16;
        uVar4 = *(uint *)((longlong)plVar5 + lVar6 * 4) & uVar8;
        if (uVar4 == 0) {
          iVar9 = iVar15 + 0x1e;
          if (-1 < iVar15 + -1) {
            iVar9 = iVar15 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar10 = iVar9;
          if (iVar9 < iVar16) {
            iVar10 = iVar16;
          }
          if (iVar9 <= iVar16) break;
          lVar12 = 0;
          while( true ) {
            iVar7 = iVar7 + 0x20;
            uVar4 = *(uint *)((longlong)plVar5 + lVar12 * 4 + lVar6 * 4 + 4);
            if (uVar4 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar10 - lVar6 == lVar12) goto LAB_14092d066;
          }
          local_70 = (ulonglong)(iVar16 + (int)lVar12 + 1);
          uVar8 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar4 & uVar4);
        uVar17 = uVar11 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar16 = (iVar7 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
      } while (iVar16 < iVar15);
    }
  }
LAB_14092d066:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092d0bc FUN_14092d0bc body=699 status=ok
// SIG undefined FUN_14092d0bc(void)

void FUN_14092d0bc(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
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
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_50._0_4_ = 0xffffffff;
      local_50._4_4_ = 0;
      local_60._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      uVar8 = local_60 >> 0x20;
    }
    iVar4 = (int)local_60;
    uVar5 = (uint)local_50;
    iVar6 = local_50._4_4_;
    iVar9 = local_48;
    if (local_50._4_4_ < (int)local_58[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x30;
        uVar12 = *(uint *)(lVar11 + 8 + lVar10) ^ *(uint *)(lVar11 + 4 + lVar10);
        uVar15 = uVar12 >> 0xd ^ *(int *)(lVar11 + lVar10) - uVar12;
        uVar3 = uVar15 << 8 ^ (-0x61c88647 - uVar12) - uVar15;
        uVar12 = uVar3 >> 0xd ^ (uVar12 - uVar15) - uVar3;
        uVar15 = uVar12 >> 0xc ^ (uVar15 - uVar3) - uVar12;
        uVar16 = uVar15 << 0x10 ^ (uVar3 - uVar12) - uVar15;
        uVar3 = uVar16 >> 5 ^ (uVar12 - uVar15) - uVar16;
        uVar12 = uVar3 >> 3 ^ (uVar15 - uVar16) - uVar3;
        uVar15 = uVar12 << 10 ^ (uVar16 - uVar3) - uVar12;
        uVar14 = (longlong)(int)(uVar15 >> 0xf ^ uVar3 - (uVar12 + uVar15)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar14;
        *(int *)(lVar11 + 0x2c + lVar10) = iVar13;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x28 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar13 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_58[2];
        if ((longlong *)local_58[2] == (longlong *)0x0) {
          plVar7 = local_58;
        }
        iVar13 = (int)local_58[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar6 = iVar13 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_14092d330;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar14 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar13);
    }
  }
LAB_14092d330:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092d378 FUN_14092d378 body=75 status=ok
// SIG undefined FUN_14092d378(void)

void FUN_14092d378(longlong param_1,int param_2)

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



// FUNCTION 14092d3c4 FUN_14092d3c4 body=503 status=ok
// SIG undefined FUN_14092d3c4(void)

longlong *
FUN_14092d3c4(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5,undefined8 param_6)

{
  int iVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  if ((*(char *)((longlong)param_1 + 0x39) == '\0') && (*(int *)((longlong)param_1 + 0x4c) != 0)) {
    uVar7 = *(uint *)(param_1 + 9);
    if ((int)uVar7 < 0) {
      return (longlong *)0x0;
    }
    if (DAT_14c9647dc <= (int)uVar7) {
      return (longlong *)0x0;
    }
    lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)((longlong)param_1 + 0x4c))) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) &&
       ((param_1[10] != 0 && (lVar6 = *(longlong *)(param_1[10] + 0xe8), lVar6 != 0)))) {
      lVar6 = *(longlong *)(lVar6 + 0x10);
      uVar7 = 0;
      if (lVar6 == 0) {
        return (longlong *)0x0;
      }
      plVar3 = (longlong *)FUN_14092d5c0(param_1,param_2);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar5 = FUN_1400653da();
        if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
           (uVar7 = 0,
           *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)) {
          bVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
          uVar7 = (uint)bVar2 << 0x17;
        }
      }
      plVar3 = (longlong *)
               FUN_14092d672(param_2,lVar6,param_3,*(uint *)(param_2 + 8) & 0x61 | uVar7,0,0,0,0);
      if (plVar3 != (longlong *)0x0) {
        *(byte *)((longlong)plVar3 + 0xb9) = (byte)~(byte)*(undefined4 *)(param_2 + 8) >> 4 & 2;
        *(undefined1 *)(plVar3 + 0x21) = 1;
        if (param_5 != 0) {
          FUN_140486fc4(plVar3,param_5,param_6);
        }
        (**(code **)(*param_1 + 0xa0))(param_1,plVar3);
        *(byte *)((longlong)plVar3 + 0x9c) = *(byte *)((longlong)plVar3 + 0x9c) | 0x20;
        FUN_14092d788(param_2,plVar3);
        if ((*(byte *)((longlong)plVar3 + 0x9f) & 4) == 0) {
          (**(code **)(*plVar3 + 0x428))(plVar3);
        }
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(plVar3);
        }
        iVar1 = *(int *)(param_2 + 0x2a8);
        *(uint *)(param_2 + 0x2a8) = iVar1 + 1U;
        if (*(uint *)(param_2 + 0x2ac) < iVar1 + 1U) {
          FUN_14092ecf6((longlong *)(param_2 + 0x2a0),iVar1);
        }
        *(longlong **)(*(longlong *)(param_2 + 0x2a0) + (longlong)iVar1 * 8) = plVar3;
        if (DAT_14c950c29 != '\x01') {
          return plVar3;
        }
        FUN_1456cec3c(plVar3);
        return plVar3;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 14092d5c0 FUN_14092d5c0 body=178 status=ok
// SIG undefined FUN_14092d5c0(void)

undefined8 FUN_14092d5c0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    for (lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x50); lVar3 != 0;
        lVar3 = *(longlong *)(lVar3 + 0x18)) {
      if ((*(int *)(lVar3 + 0x4c) == 0) || (uVar1 = *(uint *)(lVar3 + 0x48), (int)uVar1 < 0)) {
LAB_14092d66a:
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        if ((int)uVar1 < DAT_14c9647dc) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((plVar5 == (longlong *)0x0) || ((int)plVar5[2] != *(int *)(lVar3 + 0x4c))) ||
             ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) goto LAB_14092d66a;
          lVar4 = *plVar5;
        }
      }
      if (lVar4 == param_2) {
        if (param_1 == 0) {
          return 0;
        }
        iVar2 = *(int *)(param_1 + 0x18);
        if ((longlong)iVar2 < 0) {
          return 0;
        }
        if (*(int *)(lVar3 + 0x78) <= iVar2) {
          return 0;
        }
        return *(undefined8 *)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar2 * 8);
      }
    }
  }
  return 0;
}



// FUNCTION 14092d672 FUN_14092d672 body=277 status=ok
// SIG undefined FUN_14092d672(void)

undefined8
FUN_14092d672(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,undefined8 param_5
             ,byte param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_98 = 0;
  uStack_c0 = (ulonglong)param_4;
  local_b0 = param_5;
  local_b8 = (ushort)param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c8 = param_3;
  uVar1 = FUN_1402710dd(&local_d8);
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092d788 FUN_14092d788 body=593 status=ok
// SIG undefined FUN_14092d788(void)

void FUN_14092d788(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  bool bVar14;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  if (*(char *)((longlong)param_2 + 0x9c) < '\0') {
    FUN_14010efee(param_1 + 0x230,&local_50);
    bVar4 = false;
  }
  else {
    iVar6 = FUN_1400f8404(param_1 + 0x230,&local_50);
    bVar4 = 0 < iVar6;
  }
  cVar2 = *(char *)((longlong)local_50 + 0x9c);
  uVar13 = 0xf;
  if (cVar2 < '\0') {
    uVar13 = 0;
    if (((*(byte *)(param_1 + 0x65) & 0x18) != 0) &&
       (uVar13 = 0, (*(byte *)((longlong)local_50 + 0x9f) & 0x10) == 0)) {
      (**(code **)(*local_50 + 0x380))(local_50);
      uVar13 = 0;
    }
  }
  plVar5 = local_50;
  iVar6 = *(int *)(param_1 + 0x228);
  if ((longlong)iVar6 != 0) {
    plVar7 = *(longlong **)(param_1 + 0x220);
    lVar8 = (longlong)iVar6 * 0x28;
    do {
      if ((longlong *)*plVar7 == local_50) {
        if (plVar7 != (longlong *)0x0) {
          *(undefined4 *)(plVar7 + 2) = uVar13;
          goto LAB_14092d82c;
        }
        break;
      }
      plVar7 = plVar7 + 5;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
  if (*(char *)((longlong)local_50 + 0x9c) < '\0') {
    if (local_50 == (longlong *)0x0) {
      iVar11 = 0;
      uVar12 = 0;
    }
    else {
      uVar3 = *(uint *)((longlong)local_50 + 0xc);
      uVar12 = (ulonglong)uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar11 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar11 = *(int *)(lVar8 + 0x10);
        bVar14 = iVar11 == 0;
        if (bVar14) {
          *(int *)(lVar8 + 0x10) = iVar10;
          iVar11 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar11 = iVar10;
        }
      }
      iVar6 = *(int *)(param_1 + 0x228);
    }
    *(uint *)(param_1 + 0x228) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x22c) < iVar6 + 1U) {
      local_58 = uVar12;
      FUN_1405f22b2((longlong *)(param_1 + 0x220),iVar6);
      uVar12 = local_58;
    }
    lVar8 = *(longlong *)(param_1 + 0x220);
    lVar9 = (longlong)iVar6;
    *(longlong **)(lVar8 + lVar9 * 0x28) = plVar5;
    *(int *)(lVar8 + 8 + lVar9 * 0x28) = (int)uVar12;
    *(int *)(lVar8 + 0xc + lVar9 * 0x28) = iVar11;
    *(undefined4 *)(lVar8 + 0x10 + lVar9 * 0x28) = uVar13;
    puVar1 = (undefined8 *)(lVar8 + 0x18 + lVar9 * 0x28);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
LAB_14092d82c:
  if (*(char *)(param_1 + 0x178) != '\x03') goto LAB_14092d835;
  if (cVar2 < '\0') {
    if ((*(byte *)(param_1 + 0x65) & 0x18) == 0x10) {
      FUN_1406caa46(local_50);
      goto LAB_14092d835;
    }
    if (!bVar4) goto LAB_14092d835;
  }
  FUN_14092d9da(local_50);
LAB_14092d835:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14092d9da FUN_14092d9da body=121 status=ok
// SIG undefined FUN_14092d9da(void)

void FUN_14092d9da(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = DAT_14c999a84 + 1;
  local_30 = param_1;
  if (iVar1 != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)((longlong)&DAT_14c999ae0 + lVar2) != 0) {
        local_28 = *(longlong *)((longlong)&DAT_14c999ae0 + lVar2);
        FUN_1435a6ab2(&local_30);
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)iVar1 * 8 != lVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092da54 FUN_14092da54 body=1573 status=ok
// SIG undefined FUN_14092da54(void)

void FUN_14092da54(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  double *pdVar13;
  undefined4 uVar14;
  uint uVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  uint local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined8 *local_160;
  code *local_158;
  code *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  double local_128;
  double dStack_120;
  double local_118;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double local_60;
  
  dVar9 = (double)(DAT_14c707940 ^ (ulonglong)auStack_1b8);
  plVar16 = *(longlong **)(param_1 + 0x50);
  local_60 = dVar9;
  if (plVar16 == (longlong *)0x0) goto LAB_14092db8a;
  if (param_2 == (longlong *)0x0) {
LAB_14092dc7d:
    (**(code **)(*plVar16 + 0x30))(plVar16,param_2,1);
  }
  else {
    if (DAT_14cac6e60 == 0) {
      local_160 = &local_a8;
      local_a8 = FUN_144a7958c;
      local_150 = FUN_14081d0ea;
      local_158 = FUN_142b47bc4;
      local_168 = &LAB_1478989f1;
      local_170 = &LAB_146391124;
      local_178 = L"Engine";
      local_180 = 0x10000000000;
      local_188 = 0x10000005;
      local_190 = 0x10;
      local_198 = CONCAT44(local_198._4_4_,0x620);
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) !=
        DAT_14cac6e60 + 0x30)) {
      lVar12 = FUN_14092ee58();
      if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar12 + 0x38)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
          lVar12 + 0x30)) goto LAB_14092dc7d;
      uVar1 = *(undefined1 *)((longlong)param_2 + 0x691);
      *(undefined1 *)((longlong)param_2 + 0x691) = 1;
      (**(code **)(*plVar16 + 0x30))(plVar16,param_2,0);
      (**(code **)(*plVar16 + 0x30))(plVar16,param_2,1);
      *(undefined1 *)((longlong)param_2 + 0x691) = uVar1;
    }
    else {
      plVar10 = param_2 + 0x82;
      FUN_1406900ec(plVar10,&local_80);
      (**(code **)(*plVar16 + 0x30))(plVar16,param_2,1);
      FUN_14092e07a(param_1 + 0x40,param_2);
      FUN_1406900ec(plVar10,&local_68);
      if ((local_68 != local_80) || (local_68 == DAT_14cad0ef0)) {
        if (DAT_14cad2858 == 0) {
          local_160 = &local_a8;
          local_a8 = FUN_144a7958c;
          local_150 = FUN_14081d0ea;
          local_158 = (code *)&LAB_146395584;
          local_168 = &LAB_147a0ba80;
          local_170 = &LAB_14575ccce;
          local_178 = L"Engine";
          local_180 = 0x40000000000;
          local_188 = 0x10000004;
          local_190 = 0x10;
          local_198 = CONCAT44(local_198._4_4_,0x1180);
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        if (((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
             DAT_14cad2858 + 0x30)) ||
           (plVar10 = (longlong *)(**(code **)(*param_2 + 0x7b8))(param_2,0,1,0xffffffff),
           plVar10 != (longlong *)0x0)) {
          FUN_140136902(plVar10,0);
        }
      }
    }
  }
  dVar9 = (double)FUN_14092e07a(param_1 + 0x40,param_2);
LAB_14092db8a:
  if (*(int *)(param_1 + 0x18) == 0) {
    lVar12 = *(longlong *)(param_1 + 8);
    uVar14 = 0;
    if (lVar12 != 0) {
      puVar11 = (undefined8 *)(lVar12 + 0xf0);
      if (((*(double *)(lVar12 + 0xf0) == 0.0) && (!NAN(*(double *)(lVar12 + 0xf0)))) &&
         ((*(double *)(lVar12 + 0xf8) == 0.0 && (!NAN(*(double *)(lVar12 + 0xf8)))))) {
        puVar17 = &DAT_14c846510;
        if (*(double *)(lVar12 + 0x100) != 0.0) {
          puVar17 = puVar11;
        }
        if (!NAN(*(double *)(lVar12 + 0x100))) {
          puVar11 = puVar17;
        }
      }
      local_b8 = puVar11[2];
      local_c8 = *(undefined4 *)puVar11;
      uStack_c4 = *(undefined4 *)((longlong)puVar11 + 4);
      uStack_c0 = *(undefined4 *)(puVar11 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar11 + 0xc);
      plVar16 = param_2;
      dVar9 = (double)(**(code **)(*param_2 + 0x478))();
      uVar14 = SUB84(plVar16,0);
    }
    lVar12 = param_2[0x15];
    if ((lVar12 != 0) && (plVar16 = *(longlong **)(lVar12 + 0x1c8), plVar16 != param_2)) {
      if (param_2[0x24] != 0) {
        local_a8 = (code *)(CONCAT44(local_a8._4_4_,DAT_14cadad64) & 0xffffffff00ffffff);
        plVar10 = param_2;
        dVar9 = (double)(**(code **)(*param_2 + 0x4a0))();
        uVar14 = SUB84(plVar10,0);
      }
      if (plVar16 == (longlong *)0x0) {
        FUN_14092e51e(lVar12,param_2);
      }
      else {
        pcVar4 = (code *)plVar16[0x48];
        dVar5 = (double)plVar16[0x49];
        dVar6 = (double)plVar16[0x4a];
        dVar7 = (double)plVar16[0x4b];
        pdVar13 = (double *)plVar16[0x45];
        local_a8 = pcVar4;
        uStack_a0 = dVar5;
        local_98 = dVar6;
        dStack_90 = dVar7;
        if (pdVar13 == (double *)0x0) {
          uVar14 = 0x40;
          pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
          dVar9 = DAT_14c8463d8;
          *pdVar13 = DAT_14c8463d0;
          pdVar13[1] = dVar9;
          dVar9 = DAT_14c8463e8;
          pdVar13[2] = DAT_14c8463e0;
          pdVar13[3] = dVar9;
          dVar9 = DAT_14c846500;
          pdVar13[4] = DAT_14c8464f8;
          pdVar13[5] = dVar9;
          dVar9 = DAT_14c846508;
          pdVar13[6] = DAT_14c846508;
          plVar16[0x45] = (longlong)pdVar13;
        }
        auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar13[1]);
        auVar2._0_8_ = -(ulonglong)((double)pcVar4 != *pdVar13);
        auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar13[1]) >> 0x20);
        iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
        auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar13[3]);
        auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar13[2]);
        auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar13[3]) >> 0x20);
        uVar15 = movmskpd(uVar14,auVar3);
        if ((uVar15 & 0x3fffffff) != 0 || iVar8 != 0) {
          pdVar13[2] = local_98;
          pdVar13[3] = dStack_90;
          *(undefined4 *)pdVar13 = (undefined4)local_a8;
          *(undefined4 *)((longlong)pdVar13 + 4) = local_a8._4_4_;
          *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_a0._4_4_;
          FUN_1448052ee(&local_a8,&local_80);
          pdVar13[6] = local_70;
          pdVar13[4] = local_80;
          pdVar13[5] = dStack_78;
        }
        local_d8 = pdVar13[6];
        local_e8 = pdVar13[4];
        dStack_e0 = pdVar13[5];
        local_108 = plVar16[0x4c];
        lStack_100 = plVar16[0x4d];
        local_f8 = plVar16[0x4e];
        local_190 = local_190 & 0xffffff00;
        local_198 = 0;
        FUN_1401ca0e6(param_2,&local_108,&local_e8,0);
        if ((*(char *)((longlong)plVar16 + 0x1fb) == '\0') &&
           (*(char *)((longlong)param_2 + 0x1fb) != '\0')) {
          (**(code **)(*plVar16 + 0x588))(plVar16);
        }
        FUN_14092e51e(lVar12,param_2);
        if ((*(byte *)((longlong)plVar16 + 0x9c) & 1) == 0) {
          local_118 = DAT_14c846508;
          local_128 = DAT_14c8464f8;
          dStack_120 = DAT_14c846500;
          local_148 = (undefined4)DAT_14c8464e0;
          uStack_144 = DAT_14c8464e0._4_4_;
          uStack_140 = (undefined4)DAT_14c8464e8;
          uStack_13c = DAT_14c8464e8._4_4_;
          local_138 = DAT_14c8464f0;
          local_190 = local_190 & 0xffffff00;
          local_198 = 0;
          FUN_1401ca0e6(plVar16,&local_148,&local_128,0);
          FUN_140486fc4(plVar16,param_2,0);
        }
        else {
          (**(code **)(*plVar16 + 0x490))(plVar16,param_2,&DAT_14cad8330,0);
        }
      }
    }
  }
  if (((ulonglong)local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14092e07a FUN_14092e07a body=1186 status=ok
// SIG undefined FUN_14092e07a(void)

void FUN_14092e07a(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  ulonglong *local_c8;
  longlong local_c0;
  longlong local_b8;
  code *local_b0;
  longlong *local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((((*(int *)(param_1 + 0xc) != 0) && (uVar6 = *(uint *)(param_1 + 8), -1 < (int)uVar6)) &&
       ((int)uVar6 < DAT_14c9647dc)) &&
      ((lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar9 != 0 &&
       (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0xc))))) &&
     (((*(uint *)(lVar9 + 8) & 0x10200000) == 0 &&
      ((plVar7 = *(longlong **)(param_1 + 0x10), plVar7 != (longlong *)0x0 &&
       (puVar3 = (ulonglong *)plVar7[3], puVar3 != (ulonglong *)0x0)))))) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    if ((longlong)(int)plVar7[6] != 0) {
      plVar11 = (longlong *)plVar7[5];
      plVar7 = plVar11 + (longlong)(int)plVar7[6] * 2;
      do {
        lVar9 = *plVar11;
        local_b8 = lVar9;
        if (lVar9 != 0) {
          uVar4 = *(ulonglong *)(lVar9 + 0x20);
          if (uVar4 == param_2) {
            lVar5 = DAT_14c927740;
            puVar10 = puVar3;
            if (DAT_14c927740 == 0) {
              local_b0 = FUN_1449e2820;
              local_d0 = FUN_14081d0ea;
              local_d8 = FUN_14081d0ea;
              local_e0 = &local_b0;
              local_e8 = &LAB_146856450;
              local_f0 = FUN_1427b121c;
              local_f8 = L"Engine";
              local_100 = 0;
              local_108 = 0x10000021;
              local_110 = 8;
              local_118 = 0x28;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
              lVar5 = DAT_14c927740;
            }
LAB_14092e1c3:
            lVar5 = FUN_14092e757(lVar5,lVar9,puVar10,0);
            if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
LAB_14092e508:
              FUN_1456cec3c(lVar5);
            }
LAB_14092e1e0:
            *plVar11 = lVar5;
          }
          else {
            lVar5 = lVar9;
            if ((int)uStack_90 != local_64) {
              uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
              uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
              puVar8 = local_58;
              if (local_58 == (undefined1 *)0x0) {
                puVar8 = local_60;
              }
              iVar2 = *(int *)(puVar8 + (ulonglong)(local_50 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
              while (iVar2 != -1) {
                puVar10 = (ulonglong *)(local_98 + (longlong)iVar2 * 0x18);
                if (*puVar10 == uVar4) {
                  local_c8 = puVar10 + 1;
                  if (local_c8 != (ulonglong *)0x0 && puVar10 != (ulonglong *)0x0) {
                    if (*local_c8 == 0) {
                      lVar5 = 0;
                      goto LAB_14092e1e0;
                    }
                    lVar5 = FUN_1402ab8a4(*local_c8,*(undefined8 *)(lVar9 + 0x10),
                                          *(undefined8 *)(lVar9 + 0x18));
                    lVar9 = local_b8;
                    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) goto LAB_14092e508;
                    *plVar11 = lVar5;
                    if (lVar5 == 0) {
                      local_c8 = (ulonglong *)*local_c8;
                      lVar5 = FUN_1446f8646();
                      puVar10 = local_c8;
                      goto LAB_14092e1c3;
                    }
                  }
                  break;
                }
                iVar2 = (int)puVar10[2];
              }
            }
          }
          local_b0 = (code *)&local_b8;
          local_a8 = &local_c0;
          local_c0 = lVar5;
          FUN_14092eb9e(&local_98,local_9c,&local_b0);
        }
        plVar11 = plVar11 + 2;
      } while (plVar11 != plVar7);
      plVar7 = *(longlong **)(param_1 + 0x10);
    }
    if ((longlong)(int)plVar7[8] != 0) {
      puVar10 = (ulonglong *)plVar7[7];
      puVar3 = puVar10 + (int)plVar7[8];
      do {
        if ((int)uStack_90 != local_64) {
          uVar4 = *puVar10;
          uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_60;
          }
          iVar2 = *(int *)(puVar8 + (ulonglong)(local_50 - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
          while (iVar2 != -1) {
            puVar1 = (ulonglong *)(local_98 + (longlong)iVar2 * 0x18);
            if (*puVar1 == uVar4) {
              if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                uVar4 = puVar1[1];
                if ((uVar4 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(uVar4);
                }
                *puVar10 = uVar4;
              }
              break;
            }
            iVar2 = (int)puVar1[2];
          }
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar3);
      plVar7 = *(longlong **)(param_1 + 0x10);
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_98);
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1401be51a(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092e51e FUN_14092e51e body=167 status=ok
// SIG undefined FUN_14092e51e(void)

ulonglong FUN_14092e51e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0xa8) != param_1)) {
    uVar2 = 0;
    goto LAB_14092e5a4;
  }
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (lVar1 == param_2) goto LAB_14092e5a4;
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x1c8) = param_2;
    if (param_2 != 0) goto LAB_14092e564;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0x1c8) = param_2;
LAB_14092e564:
    FUN_14092e5c6(param_2 + 0x1fe,param_2,1);
  }
  if (lVar1 != 0) {
    FUN_14092e5c6(lVar1 + 0x1fe,lVar1,0);
  }
  if (param_2 != 0) {
    FUN_14009c94e(param_1 + 0x300,param_2);
  }
LAB_14092e5a4:
  return uVar2 & 0xffffffff;
}



// FUNCTION 14092e5c6 FUN_14092e5c6 body=133 status=ok
// SIG undefined FUN_14092e5c6(void)

void FUN_14092e5c6(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14092e64c(param_1,&local_30);
  if (local_30 != 0) {
    FUN_14789c04d(local_30,param_2,param_3);
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



// FUNCTION 14092e64c FUN_14092e64c body=266 status=ok
// SIG undefined FUN_14092e64c(void)

undefined8 * FUN_14092e64c(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_14092e670;
  FUN_1478c30ac(&local_38);
  FUN_14018932e(&local_30,param_1 + -0x1fe,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_14092e670;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x00014092e714:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x00014092e714;
      }
    }
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
LAB_14092e670:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092e757 FUN_14092e757 body=92 status=ok
// SIG undefined FUN_14092e757(void)

undefined8 FUN_14092e757(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_3 + 1U < 2) {
      param_3 = FUN_14092e86f();
    }
    uVar1 = FUN_14092e7b3(param_2,param_3,param_4,0xffffffff,0,0,0xfff00007);
  }
  return uVar1;
}



// FUNCTION 14092e7b3 FUN_14092e7b3 body=187 status=ok
// SIG undefined FUN_14092e7b3(void)

undefined8
FUN_14092e7b3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  undefined1 local_b0 [64];
  undefined1 local_70 [64];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c0 = param_7;
  local_c8 = param_6;
  local_d0 = param_5;
  local_d8 = param_4;
  FUN_14092e9d5(local_b0,param_1,param_2,param_3);
  uVar1 = FUN_14092ef3d(local_b0);
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1401be51a(local_70);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092e86f FUN_14092e86f body=357 status=ok
// SIG undefined FUN_14092e86f(void)

undefined8 FUN_14092e86f(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0xe0);
  uVar3 = DAT_14c951640;
  if ((lVar1 != 0) && (lVar1 != param_1)) {
    if (DAT_14c927740 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_146856450;
      local_50 = FUN_1427b121c;
      local_58 = L"Engine";
      uStack_60 = 0;
      local_68 = CONCAT44(local_68._4_4_,0x10000021);
      local_70 = 8;
      local_78 = CONCAT44(local_78._4_4_,0x28);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      lVar1 = *(longlong *)(param_1 + 0xe0);
    }
    uVar3 = DAT_14c951640;
    if (lVar1 != DAT_14c927740) {
      FUN_14283ebd8(&local_20);
      uVar3 = *(undefined8 *)(param_1 + 0xe0);
      uVar2 = FUN_14092e86f(uVar3);
      local_68 = 0;
      uStack_60 = 0;
      local_70 = local_70 & 0xffffff00;
      local_78 = 0;
      uVar3 = FUN_140584627(uVar2,uVar3,0,0x40);
      FUN_14283ebe2(&local_20);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14092e9d5 FUN_14092e9d5 body=455 status=ok
// SIG undefined FUN_14092e9d5(void)

longlong *
FUN_14092e9d5(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
             longlong param_6,int param_7,undefined4 param_8)

{
  undefined8 uVar1;
  longlong lVar2;
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
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 1;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  if (param_4 == 0) {
    if (*(longlong *)(param_2 + 0x20) == param_3) goto LAB_14092ea8d;
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    if (DAT_14c927740 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_146856450;
      local_60 = FUN_1427b121c;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000021;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    local_80 = 0;
    local_88 = 0;
    lVar2 = FUN_140be85e0(DAT_14c927740,param_3,uVar1,0);
    if (lVar2 != 0) goto LAB_14092ea8d;
    param_4 = *(longlong *)(param_2 + 0x18);
  }
  param_1[2] = param_4;
LAB_14092ea8d:
  if (param_6 == 0) {
    param_6 = *(longlong *)(param_2 + 0x10);
  }
  param_1[7] = param_6;
  *(uint *)(param_1 + 3) = param_5 & 0xefffff7b;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_8;
  *(int *)((longlong)param_1 + 0x2c) = param_7;
  if (param_7 == 2) {
    *(undefined4 *)(param_1 + 5) = 0x400000;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092eb9e FUN_14092eb9e body=343 status=ok
// SIG undefined FUN_14092eb9e(void)

undefined4 *
FUN_14092eb9e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_140503402(param_1,local_50);
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
  cVar2 = FUN_14050336a(param_1,uVar3,local_48);
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
      FUN_140503742(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092ecf6 FUN_14092ecf6 body=353 status=ok
// SIG undefined FUN_14092ecf6(void)

void FUN_14092ecf6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14092ed7b;
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
LAB_14092ed7b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14092ee58 FUN_14092ee58 body=228 status=ok
// SIG undefined FUN_14092ee58(void)

longlong FUN_14092ee58(void)

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
  if (DAT_14cad31f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_147a27286;
    local_40 = &LAB_140938ea6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6c0;
    FUN_14081cfa3(L"/Script/Engine",L"SplineComponent",&DAT_14cad31f8,FUN_1463beff0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad31f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14092ef3d FUN_14092ef3d body=4468 status=ok
// SIG undefined FUN_14092ef3d(void)

wchar_t * FUN_14092ef3d(ulonglong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined **ppuVar6;
  DWORD DVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  DWORD DVar11;
  DWORD DVar12;
  ulonglong *puVar13;
  longlong lVar14;
  LPVOID pvVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  wchar_t *pwVar29;
  bool bVar30;
  undefined1 auStack_418 [32];
  wchar_t *local_3f8;
  undefined4 local_3f0;
  undefined8 local_3e8;
  wchar_t *local_3e0;
  wchar_t *local_3d8;
  code *local_3d0;
  undefined1 *local_3c8;
  undefined ***local_3c0;
  code *local_3b8;
  code *local_3b0;
  wchar_t *local_3a0;
  int *local_398;
  char *local_390;
  int *local_388;
  longlong local_380;
  undefined ***local_378;
  undefined **local_370 [6];
  int local_340;
  longlong *local_318;
  longlong local_2f8;
  longlong local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b0;
  undefined ***local_2a8;
  longlong *local_2a0;
  undefined1 local_294 [4];
  undefined **local_290;
  undefined8 local_288;
  ulonglong local_280;
  ulonglong local_278;
  uint local_270;
  uint uStack_26c;
  undefined2 local_268;
  longlong local_260;
  undefined8 *puStack_258;
  undefined8 local_250;
  longlong lStack_248;
  longlong *local_238;
  longlong *local_230;
  longlong local_228 [3];
  longlong local_210;
  undefined8 local_208;
  longlong local_1c0;
  int local_1b8;
  undefined **local_1a8;
  longlong local_1a0;
  undefined8 uStack_198;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_174;
  int local_16c;
  undefined1 local_168 [8];
  undefined1 *local_160;
  int local_158;
  _RTL_CRITICAL_SECTION local_150;
  undefined **local_128;
  undefined ***pppuStack_120;
  undefined8 local_118;
  undefined6 uStack_110;
  undefined2 uStack_10a;
  uint uStack_108;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  longlong local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_418;
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) & 0xf3afffff;
  cVar8 = (*(code *)PTR_FUN_14c75b118)();
  if ((cVar8 == '\0') && ((*(uint *)(*param_1 + 8) & 0x10) != 0)) {
    FUN_1468b6d7e(param_1[1]);
  }
  local_e0 = 0;
  local_d8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_118 = 0;
  uStack_110 = 0;
  uStack_10a = 0;
  uStack_104 = 0;
  local_d4 = 0xffffffff00000080;
  local_cc = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar9 = (uint)param_1[3];
  if (*(char *)(lVar26 + 0xc88) == '\0') {
    uVar9 = uVar9 & 0xffffffef;
    *(byte *)((longlong)param_1 + 0x1f) = *(byte *)((longlong)param_1 + 0x1f) & 0xbf;
  }
  *(uint *)(param_1 + 3) = uVar9 & 0xefffff7b;
  uStack_108 = 1;
  uStack_103 = 1;
  (**(code **)(*(longlong *)*param_1 + 0xe8))((longlong *)*param_1,param_1);
  uVar25 = *param_1;
  if ((int)param_1[9] != *(int *)((longlong)param_1 + 0x74)) {
    uVar9 = ((uint)(uVar25 >> 0x14) & 0xffff ^ (uint)(uVar25 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    puVar13 = param_1 + 0xf;
    if ((ulonglong *)param_1[0x10] != (ulonglong *)0x0) {
      puVar13 = (ulonglong *)param_1[0x10];
    }
    iVar24 = *(int *)((longlong)puVar13 +
                     (ulonglong)((int)param_1[0x11] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
    if (iVar24 != -1) {
      do {
        puVar13 = (ulonglong *)(param_1[8] + (longlong)iVar24 * 0x18);
        if (*puVar13 == uVar25) {
          if ((puVar13 != (ulonglong *)0x0) &&
             (local_3a0 = (wchar_t *)puVar13[1], local_3a0 != (wchar_t *)0x0)) goto LAB_14092f1ee;
          break;
        }
        iVar24 = (int)puVar13[2];
      } while (iVar24 != -1);
    }
  }
  local_288 = (undefined **)param_1[7];
  lVar14 = 0;
  local_238 = (longlong *)0x0;
  local_208 = 0;
  local_260 = 0;
  local_250 = 0;
  lStack_248 = 0;
  local_280 = param_1[1];
  local_278 = param_1[2];
  uVar9 = *(uint *)(uVar25 + 0xc);
  if ((int)uVar9 < DAT_14c9647dc) {
    lVar14 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
  }
  _local_270 = CONCAT44(*(uint *)(lVar14 + 8) & *(uint *)((longlong)param_1 + 0x1c) |
                        *(uint *)((longlong)param_1 + 0x24),
                        *(uint *)(uVar25 + 8) & (uint)param_1[3] | (uint)param_1[4]);
  local_268 = 1;
  puStack_258 = &local_118;
  lVar14 = FUN_144938c96();
  local_260 = 0;
  if (*(ulonglong *)(lVar14 + 0x10) == param_1[7]) {
    local_260 = lVar14;
  }
  local_3a0 = (wchar_t *)FUN_1402710dd(&local_288);
  if (lStack_248 != 0) {
    plVar16 = local_238;
    if (local_238 == (longlong *)0x0) {
      plVar16 = local_228;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
LAB_14092f1ee:
  local_390 = (char *)(lVar26 + 0xc88);
  FUN_141521432(&local_2b0);
  local_1a8 = &PTR_FUN_149eb5dd0;
  uVar25 = 0;
  local_180 = 0;
  local_178 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_174 = 0xffffffff00000080;
  local_16c = 0;
  local_160 = (undefined1 *)0x0;
  local_158 = 0;
  InitializeCriticalSection(&local_150);
  SetCriticalSectionSpinCount(&local_150,4000);
  local_128 = (undefined **)0x0;
  pppuStack_120 = (undefined ***)0x0;
  if (*(int *)((longlong)param_1 + 0x74) < (int)param_1[9]) {
    iVar24 = (int)param_1[0xd];
    if (iVar24 == 0) {
      uVar28 = 1;
      iVar27 = 0;
      iVar20 = 0;
    }
    else {
      puVar13 = (ulonglong *)param_1[0xc];
      if ((ulonglong *)param_1[0xc] == (ulonglong *)0x0) {
        puVar13 = param_1 + 10;
      }
      uVar9 = (uint)*puVar13;
      if (uVar9 == 0) {
        iVar20 = iVar24 + 0x1e;
        if (-1 < iVar24 + -1) {
          iVar20 = iVar24 + -1;
        }
        uVar25 = 0;
        uVar28 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar28 = uVar25;
        }
        iVar27 = 0;
        do {
          if (uVar28 == uVar25) goto LAB_14092f3fd;
          iVar27 = iVar27 + 0x20;
          uVar9 = *(uint *)((longlong)puVar13 + uVar25 * 4 + 4);
          uVar25 = uVar25 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar25 = 0;
        iVar27 = 0;
      }
      uVar28 = (ulonglong)(-uVar9 & uVar9);
      uVar3 = uVar28 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar20 = (iVar27 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if (iVar24 <= iVar20) {
        iVar20 = iVar24;
      }
    }
    if (iVar20 < iVar24) {
      uVar9 = 0xffffffff;
      do {
        uVar19 = *(undefined8 *)(param_1[8] + (longlong)iVar20 * 0x18);
        lVar26 = *(longlong *)(param_1[8] + 8 + (longlong)iVar20 * 0x18);
        if (lVar26 == 0) {
          local_288 = (undefined **)0x0;
          uVar10 = 0;
        }
        else {
          local_288 = (undefined **)(ulonglong)*(uint *)(lVar26 + 0xc);
          uVar10 = FUN_145782296(&DAT_14c9647b8);
        }
        local_288 = (undefined **)CONCAT44(uVar10,(undefined4)local_288);
        FUN_1406afd60(&local_1a8,uVar19,&local_288);
        uVar9 = uVar9 & ~(uint)uVar28;
        puVar13 = (ulonglong *)param_1[0xc];
        if ((ulonglong *)param_1[0xc] == (ulonglong *)0x0) {
          puVar13 = param_1 + 10;
        }
        iVar24 = (int)param_1[0xd];
        iVar20 = (int)uVar25;
        lVar26 = (longlong)iVar20;
        uVar21 = *(uint *)((longlong)puVar13 + lVar26 * 4) & uVar9;
        if (uVar21 == 0) {
          iVar22 = iVar24 + 0x1e;
          if (-1 < iVar24 + -1) {
            iVar22 = iVar24 + -1;
          }
          iVar22 = iVar22 >> 5;
          iVar23 = iVar22;
          if (iVar22 < iVar20) {
            iVar23 = iVar20;
          }
          if (iVar22 <= iVar20) break;
          lVar14 = 0;
          while( true ) {
            iVar27 = iVar27 + 0x20;
            uVar21 = *(uint *)((longlong)puVar13 + lVar14 * 4 + lVar26 * 4 + 4);
            if (uVar21 != 0) break;
            lVar14 = lVar14 + 1;
            if (iVar23 - lVar26 == lVar14) goto LAB_14092f3fd;
          }
          uVar25 = (ulonglong)(iVar20 + (int)lVar14 + 1);
          uVar9 = 0xffffffff;
        }
        uVar28 = (ulonglong)(-uVar21 & uVar21);
        uVar3 = uVar28 * 2 + 1;
        lVar26 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        iVar20 = (iVar27 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      } while (iVar20 < iVar24);
    }
  }
LAB_14092f3fd:
  pwVar29 = local_3a0;
  local_398 = (int *)param_1[7];
  local_388 = *(int **)(*param_1 + 0x10);
  local_3f0 = (undefined4)param_1[3];
  local_3b8 = (code *)CONCAT71(local_3b8._1_7_,local_388 == local_398);
  local_3c0 = (undefined ***)CONCAT71(local_3c0._1_7_,(char)param_1[6]);
  local_3c8 = (undefined1 *)CONCAT44(local_3c8._4_4_,(int)param_1[5]);
  local_3d0 = (code *)&local_118;
  local_3d8 = (wchar_t *)CONCAT44(local_3d8._4_4_,*(undefined4 *)((longlong)param_1 + 0x24));
  local_3e0 = (wchar_t *)CONCAT44(local_3e0._4_4_,*(undefined4 *)((longlong)param_1 + 0x1c));
  local_3e8 = CONCAT44(local_3e8._4_4_,(int)param_1[4]);
  local_3f8 = local_3a0;
  FUN_1406af9f0(&local_288,&local_1a8,local_2b0);
  local_2c8 = 0;
  uStack_2c0 = 0;
  if (*local_390 != '\x01') goto LAB_14092f49b;
  uVar25 = *param_1;
  if (uVar25 == 0) {
LAB_14092fe2b:
    uVar25 = 0;
  }
  else {
    if (DAT_14c948f88 == 0) {
      local_290 = (undefined **)&DAT_1427db2a2;
      if (DAT_14c963f04 == '\0') {
        uVar19 = FUN_140011aa6();
        lVar26 = FUN_140011c0e(uVar19,0x250,8);
      }
      else {
        lVar26 = FUN_14001cc68(0x250,8);
      }
      DAT_14c948f88 = lVar26;
      FUN_1446f470e(&local_2a8,L"Struct",1);
      local_3c0 = &local_290;
      local_3c8 = &LAB_146891313;
      local_3d0 = FUN_146272f63;
      local_3e0 = L"Engine";
      local_3d8 = (wchar_t *)CONCAT44(local_3d8._4_4_,199);
      local_3e8 = 8;
      local_3f0 = 0x10000020;
      local_3f8._0_4_ = 8;
      FUN_14574b4b2(lVar26);
      DAT_14c948f88 = lVar26;
      if (DAT_14c927740 == 0) {
        local_3c0 = local_370;
        local_370[0] = (undefined **)FUN_1449e2820;
        local_3b0 = FUN_14081d0ea;
        local_3b8 = FUN_14081d0ea;
        local_3c8 = &LAB_146856450;
        local_3d0 = FUN_1427b121c;
        local_3d8 = L"Engine";
        local_3e0 = (wchar_t *)0x0;
        local_3e8 = CONCAT44(local_3e8._4_4_,0x10000021);
        local_3f0 = 8;
        local_3f8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar14 = DAT_14c948f88;
      lVar26 = DAT_14c927740;
      uVar19 = FUN_1400163b0();
      local_3f8 = L"Struct";
      FUN_14574b446(uVar19,lVar14,lVar26,L"/Script/CoreUObject");
      pwVar29 = local_3a0;
    }
    if ((*(int *)(*(longlong *)(uVar25 + 0x10) + 0x38) < *(int *)(DAT_14c948f88 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar25 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c948f88 + 0x38) * 8) != DAT_14c948f88 + 0x30)) goto LAB_14092fe2b;
  }
  FUN_14685b7f6(uVar25,&local_288);
LAB_14092f49b:
  FUN_1406d3e30(*param_1,pwVar29,&local_1a8,&local_288);
  FUN_14050315a(&local_118,pwVar29,0);
  if (local_1b8 != 0) {
    do {
      plVar16 = *(longlong **)(local_1c0 + -8 + (longlong)local_1b8 * 8);
      local_1b8 = local_1b8 + -1;
      FUN_1404559b4(&local_1c0);
      (**(code **)(*plVar16 + 0xd8))(plVar16,&local_288);
      uVar25 = uStack_2c0;
      lVar26 = (longlong)(int)uStack_2c0;
      uVar9 = (int)uStack_2c0 + 1;
      uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar9);
      if (uStack_2c0._4_4_ < uVar9) {
        FUN_1447f76d2(&local_2c8,uVar25 & 0xffffffff);
      }
      *(longlong **)(local_2c8 + lVar26 * 8) = plVar16;
    } while (local_1b8 != 0);
  }
  DVar11 = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    DVar11 = TlsAlloc();
    DVar12 = 0xffffffff;
    LOCK();
    bVar30 = DAT_14c75ec34 != 0xffffffff;
    DVar7 = DVar11;
    if (bVar30) {
      DVar12 = DAT_14c75ec34;
      DVar7 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar7;
    UNLOCK();
    if (bVar30) {
      TlsFree(DVar11);
      DVar11 = DVar12;
    }
  }
  pvVar15 = TlsGetValue(DVar11);
  if (pvVar15 == (LPVOID)0x0) {
    pvVar15 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(pvVar15);
    FUN_140fddf04(pvVar15);
    TlsSetValue(DVar11,pvVar15);
  }
  piVar5 = *(int **)((longlong)pvVar15 + 0x58);
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  local_3f8 = (wchar_t *)param_1[1];
  local_3f0 = CONCAT31(local_3f0._1_3_,local_388 == local_398);
  FUN_141713662(local_370,&local_1a8,local_2b0,(int)param_1[5]);
  if ((int)uStack_2c0 < 1) {
    uStack_108 = uStack_108 & 0xfffffffe;
  }
  else {
    lVar26 = 0;
    do {
      ppuVar6 = *(undefined ***)(local_2c8 + lVar26 * 8);
      EnterCriticalSection(&local_150);
      if (local_128 != ppuVar6) {
        local_128 = ppuVar6;
        if ((int)uStack_198 != local_16c) {
          uVar9 = ((uint)((ulonglong)ppuVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)ppuVar6 >> 4)) *
                  -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          puVar18 = local_160;
          if (local_160 == (undefined1 *)0x0) {
            puVar18 = local_168;
          }
          iVar24 = *(int *)(puVar18 + (ulonglong)(local_158 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
          while (iVar24 != -1) {
            puVar2 = (undefined8 *)(local_1a0 + (longlong)iVar24 * 0x18);
            if ((undefined **)*puVar2 == ppuVar6) {
              if (puVar2 + 1 != (undefined8 *)0x0 && puVar2 != (undefined8 *)0x0) {
                pppuStack_120 = (undefined ***)puVar2[1];
                goto LAB_14092f6cc;
              }
              break;
            }
            iVar24 = *(int *)(puVar2 + 2);
          }
        }
        pppuStack_120 = (undefined ***)0x0;
      }
LAB_14092f6cc:
      local_2a8 = pppuStack_120;
      if (&local_150 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(&local_150);
      }
      plVar16 = (longlong *)FUN_1409ca440(&local_2a8);
      uVar19 = *(undefined8 *)(piVar5 + 0xc);
      *(longlong **)(piVar5 + 0xc) = plVar16;
      if (((ulonglong)ppuVar6[1] & 0x10) == 0) {
        (**(code **)(*plVar16 + 0xd8))(plVar16,local_370);
      }
      else {
        local_340 = local_340 + 1;
        (**(code **)(*plVar16 + 0xd8))(plVar16,local_370);
        local_340 = local_340 + -1;
      }
      *(undefined8 *)(piVar5 + 0xc) = uVar19;
      lVar26 = lVar26 + 1;
      uVar25 = (ulonglong)(int)uStack_2c0;
    } while (lVar26 < (longlong)uVar25);
    uStack_108 = uStack_108 & 0xfffffffe;
    if (0 < (int)uStack_2c0) {
      local_398 = (int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
      lVar26 = 0;
      do {
        ppuVar6 = *(undefined ***)(local_2c8 + lVar26 * 8);
        if ((int)param_1[9] != *(int *)((longlong)param_1 + 0x74)) {
          uVar9 = ((uint)((ulonglong)ppuVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)ppuVar6 >> 4)) *
                  -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          puVar13 = (ulonglong *)param_1[0x10];
          if ((ulonglong *)param_1[0x10] == (ulonglong *)0x0) {
            puVar13 = param_1 + 0xf;
          }
          iVar24 = *(int *)((longlong)puVar13 +
                           (ulonglong)((int)param_1[0x11] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
          if (iVar24 != -1) {
            do {
              puVar2 = (undefined8 *)(param_1[8] + (longlong)iVar24 * 0x18);
              if ((undefined **)*puVar2 == ppuVar6) {
                if (((ulonglong)(puVar2 + 1) & 0xfffffffffffffff7) != 0) goto LAB_14092f995;
                break;
              }
              iVar24 = *(int *)(puVar2 + 2);
            } while (iVar24 != -1);
          }
        }
        EnterCriticalSection(&local_150);
        if (local_128 != ppuVar6) {
          local_128 = ppuVar6;
          if ((int)uStack_198 != local_16c) {
            uVar9 = ((uint)((ulonglong)ppuVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)ppuVar6 >> 4))
                    * -0x7a143595;
            uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
            puVar18 = local_160;
            if (local_160 == (undefined1 *)0x0) {
              puVar18 = local_168;
            }
            iVar24 = *(int *)(puVar18 + (ulonglong)(local_158 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
            while (iVar24 != -1) {
              puVar2 = (undefined8 *)(local_1a0 + (longlong)iVar24 * 0x18);
              if ((undefined **)*puVar2 == ppuVar6) {
                if (puVar2 + 1 != (undefined8 *)0x0 && puVar2 != (undefined8 *)0x0) {
                  pppuStack_120 = (undefined ***)puVar2[1];
                  goto LAB_14092f8f9;
                }
                break;
              }
              iVar24 = *(int *)(puVar2 + 2);
            }
          }
          pppuStack_120 = (undefined ***)0x0;
        }
LAB_14092f8f9:
        local_2a8 = pppuStack_120;
        if (&local_150 != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(&local_150);
        }
        plVar16 = (longlong *)FUN_1409ca440(&local_2a8);
        if (plVar16 != (longlong *)0x0) {
          FUN_144938c96(plVar16);
          (**(code **)(*plVar16 + 0xf0))(plVar16,*(undefined4 *)((longlong)param_1 + 0x2c));
          plVar17 = plVar16;
          if (*(char *)((longlong)param_1 + 0x31) == '\0') {
            do {
              if ((*(uint *)(plVar17 + 1) & 0x30) != 0) goto LAB_14092f97d;
              plVar1 = plVar17 + 4;
              plVar17 = (longlong *)*plVar1;
            } while ((longlong *)*plVar1 != (longlong *)0x0);
            if ((DAT_14c86a9f8 == '\x01') && (*local_398 != 2)) {
              if (*local_398 == 1) {
                DVar11 = FUN_140ad26c0();
                DVar12 = GetCurrentThreadId();
                if (DVar11 == DVar12) goto LAB_14092f9d9;
              }
            }
            else {
LAB_14092f9d9:
              DVar11 = DAT_14c75ec34;
              if (DAT_14c75ec34 == 0xffffffff) {
                DVar11 = TlsAlloc();
                DVar12 = 0xffffffff;
                LOCK();
                bVar30 = DAT_14c75ec34 != 0xffffffff;
                DVar7 = DVar11;
                if (bVar30) {
                  DVar12 = DAT_14c75ec34;
                  DVar7 = DAT_14c75ec34;
                }
                DAT_14c75ec34 = DVar7;
                UNLOCK();
                if (bVar30) {
                  TlsFree(DVar11);
                  DVar11 = DVar12;
                }
              }
              pvVar15 = TlsGetValue(DVar11);
              if (pvVar15 == (LPVOID)0x0) {
                pvVar15 = (LPVOID)FUN_14001cc68(0x60,0x10);
                FUN_141073f92(pvVar15);
                FUN_140fddf04(pvVar15);
                TlsSetValue(DVar11,pvVar15);
              }
              uVar4 = *(undefined1 *)((longlong)pvVar15 + 0x20);
              *(undefined1 *)((longlong)pvVar15 + 0x20) = 1;
              FUN_1400337aa(plVar16);
              *(undefined1 *)((longlong)pvVar15 + 0x20) = uVar4;
            }
          }
LAB_14092f97d:
          cVar8 = FUN_1400439fc(plVar16,0,&local_290);
          if (cVar8 != '\0') {
            (**(code **)(*plVar16 + 0x268))(plVar16);
          }
        }
        uVar25 = uStack_2c0 & 0xffffffff;
LAB_14092f995:
        lVar26 = lVar26 + 1;
      } while (lVar26 < (int)uVar25);
      if ((0 < (int)uVar25) && (param_1[0x12] != 0)) {
        lVar26 = 0;
        do {
          ppuVar6 = *(undefined ***)(local_2c8 + lVar26 * 8);
          local_290 = ppuVar6;
          if ((int)param_1[9] != *(int *)((longlong)param_1 + 0x74)) {
            uVar9 = ((uint)((ulonglong)ppuVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)ppuVar6 >> 4))
                    * -0x7a143595;
            uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
            puVar13 = (ulonglong *)param_1[0x10];
            if ((ulonglong *)param_1[0x10] == (ulonglong *)0x0) {
              puVar13 = param_1 + 0xf;
            }
            iVar24 = *(int *)((longlong)puVar13 +
                             (ulonglong)((int)param_1[0x11] - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4);
            if (iVar24 != -1) {
              do {
                puVar2 = (undefined8 *)(param_1[8] + (longlong)iVar24 * 0x18);
                if ((undefined **)*puVar2 == ppuVar6) {
                  if (((ulonglong)(puVar2 + 1) & 0xfffffffffffffff7) != 0) goto LAB_14092fc60;
                  break;
                }
                iVar24 = *(int *)(puVar2 + 2);
              } while (iVar24 != -1);
            }
          }
          EnterCriticalSection(&local_150);
          if (local_128 != ppuVar6) {
            local_128 = ppuVar6;
            if ((int)uStack_198 != local_16c) {
              uVar9 = ((uint)((ulonglong)ppuVar6 >> 0x14) & 0xffff ^ (uint)((ulonglong)ppuVar6 >> 4)
                      ) * -0x7a143595;
              uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
              puVar18 = local_160;
              if (local_160 == (undefined1 *)0x0) {
                puVar18 = local_168;
              }
              iVar24 = *(int *)(puVar18 + (ulonglong)(local_158 - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4)
              ;
              while (iVar24 != -1) {
                puVar2 = (undefined8 *)(local_1a0 + (longlong)iVar24 * 0x18);
                if ((undefined **)*puVar2 == ppuVar6) {
                  if (puVar2 + 1 != (undefined8 *)0x0 && puVar2 != (undefined8 *)0x0) {
                    pppuStack_120 = (undefined ***)puVar2[1];
                    goto LAB_14092fbf7;
                  }
                  break;
                }
                iVar24 = *(int *)(puVar2 + 2);
              }
            }
            pppuStack_120 = (undefined ***)0x0;
          }
LAB_14092fbf7:
          local_378 = pppuStack_120;
          if (&local_150 != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(&local_150);
          }
          local_380 = FUN_1409ca440(&local_378);
          if (local_380 != 0) {
            local_2a0 = &local_380;
            local_2a8 = &local_290;
            FUN_140503212(param_1[0x12],local_294,&local_2a8,0);
          }
          uVar25 = uStack_2c0 & 0xffffffff;
LAB_14092fc60:
          lVar26 = lVar26 + 1;
        } while (lVar26 < (int)uVar25);
      }
    }
  }
  pwVar29 = local_3a0;
  local_370[0] = &PTR__purecall_149e35f70;
  if (local_318 != (longlong *)0x0) {
    if (*local_318 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_318);
  }
  if (local_2f8 != 0) {
    if (*(longlong *)(local_2f8 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_2f8);
  }
  if (piVar5 != (int *)0x0) {
    FUN_14112dd4c(piVar5);
  }
  if (local_2c8 != 0) {
    FUN_1400020a8();
  }
  local_288 = &PTR_FUN_149e69cb0;
  if (local_1c0 != 0) {
    FUN_1400020a8();
  }
  local_288 = &PTR__purecall_149e35f70;
  if (local_230 != (longlong *)0x0) {
    if (*local_230 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_230);
  }
  if (local_210 != 0) {
    if (*(longlong *)(local_210 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_210);
  }
  FUN_1403ecd2c(&local_1a8);
  FUN_1404e2698(local_2b0);
  local_68 = 0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_1401be552(&local_b0);
  local_b8 = 0;
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  FUN_1401be51a(&local_100);
  if ((local_60 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pwVar29;
}



// FUNCTION 1409300b2 FUN_1409300b2 body=1495 status=ok
// SIG undefined FUN_1409300b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409300b2(longlong param_1,longlong *param_2)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  double *pdVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double _X;
  double _X_00;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double _X_01;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_2[0x15] == 0) {
LAB_14093012b:
    if ((local_c0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar3 = FUN_1466275ae();
  if (lVar3 == 0) goto LAB_14093012b;
  if (param_2[0x16] == 0) {
    lVar4 = FUN_1448abda6(param_2);
    bVar7 = lVar4 == 0;
  }
  else {
    bVar7 = false;
  }
  iVar1 = (int)param_2[0xf];
  *(uint *)(param_2 + 0xf) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0x7c) < iVar1 + 1U) {
    FUN_1446f84a2(param_2 + 0xe,iVar1);
  }
  *(undefined8 *)(param_2[0xe] + (longlong)iVar1 * 8) = DAT_14cbca628;
  FUN_140486fc4(param_2,lVar3,0);
  local_f8 = DAT_14c8464f0;
  local_108 = DAT_14c8464e0;
  uStack_100 = DAT_14c8464e8;
  auVar13 = *(undefined1 (*) [16])(param_2 + 0x36);
  dVar9 = auVar13._0_8_;
  dVar10 = auVar13._8_8_;
  dVar8 = (double)param_2[0x38];
  pdVar6 = (double *)param_2[0x46];
  if (pdVar6 == (double *)0x0) {
    pdVar6 = (double *)FUN_14001cc68(0x40,0x10);
    dVar11 = DAT_14c8463d8;
    *pdVar6 = DAT_14c8463d0;
    pdVar6[1] = dVar11;
    dVar11 = DAT_14c8463e8;
    pdVar6[2] = DAT_14c8463e0;
    pdVar6[3] = dVar11;
    dVar11 = DAT_14c846500;
    pdVar6[4] = DAT_14c8464f8;
    pdVar6[5] = dVar11;
    pdVar6[6] = DAT_14c846508;
    param_2[0x46] = (longlong)pdVar6;
  }
  auVar17 = _DAT_1499387d0;
  if ((((pdVar6[4] != dVar9) || (NAN(pdVar6[4]) || NAN(dVar9))) || (pdVar6[5] != dVar10)) ||
     (NAN(pdVar6[5]) || NAN(dVar10))) {
LAB_14093026c:
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar8;
    dVar11 = (double)DAT_1499387d0;
    dVar12 = DAT_1499387d0._8_8_;
    auVar13 = divpd(auVar13,_DAT_1499387d0);
    auVar16 = divpd(auVar19,_DAT_1499387d0);
    auVar13 = roundpd(auVar13,auVar13,3);
    auVar16 = roundpd(auVar16,auVar16,3);
    auVar25._0_8_ = dVar9 - auVar13._0_8_ * dVar11;
    auVar25._8_8_ = dVar10 - auVar13._8_8_ * dVar12;
    auVar20._0_8_ = dVar8 - auVar16._0_8_ * dVar11;
    auVar20._8_8_ = 0.0 - auVar16._8_8_ * dVar12;
    auVar23._0_8_ = auVar25._0_8_ + dVar11;
    auVar23._8_8_ = auVar25._8_8_ + dVar12;
    auVar18._0_8_ = auVar20._0_8_ + dVar11;
    auVar18._8_8_ = auVar20._8_8_ + dVar12;
    auVar16._8_8_ = -(ulonglong)(0.0 <= auVar25._8_8_);
    auVar16._0_8_ = -(ulonglong)(0.0 <= auVar25._0_8_);
    auVar13 = blendvpd(auVar23,auVar25,auVar16);
    auVar24._8_8_ = -(ulonglong)(0.0 <= auVar20._8_8_);
    auVar24._0_8_ = -(ulonglong)(0.0 <= auVar20._0_8_);
    auVar16 = blendvpd(auVar18,auVar20,auVar24);
    auVar21._0_8_ = auVar13._0_8_ + -360.0;
    auVar21._8_8_ = auVar13._8_8_ + -360.0;
    auVar14._8_8_ = -(ulonglong)(180.0 < auVar13._8_8_);
    auVar14._0_8_ = -(ulonglong)(180.0 < auVar13._0_8_);
    auVar24 = blendvpd(auVar13,auVar21,auVar14);
    auVar15._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
    auVar15._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
    auVar13._8_8_ = auVar16._8_8_ + 0.0;
    auVar13._0_8_ = auVar16._0_8_ + -360.0;
    auVar13 = blendvpd(auVar16,auVar13,auVar15);
    *(undefined1 (*) [16])(pdVar6 + 4) = auVar24;
    dVar8 = auVar13._0_8_;
    pdVar6[6] = dVar8;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = dVar8;
    auVar13 = divpd(auVar24,auVar17);
    auVar17 = divpd(auVar26,auVar17);
    auVar13 = roundpd(auVar13,auVar13,3);
    auVar17 = roundpd(auVar17,auVar17,3);
    dVar22 = (auVar24._0_8_ - auVar13._0_8_ * dVar11) * 0.008726646259971648;
    _X = (auVar24._8_8_ - auVar13._8_8_ * dVar12) * 0.008726646259971648;
    _X_00 = (dVar8 - auVar17._0_8_ * dVar11) * 0.008726646259971648;
    _X_01 = (0.0 - auVar17._8_8_ * dVar12) * 0.008726646259971648;
    dVar8 = sin(dVar22);
    dVar9 = sin(_X);
    dVar10 = sin(_X_00);
    sin(_X_01);
    dVar11 = cos(dVar22);
    dVar12 = cos(_X);
    dVar22 = cos(_X_00);
    cos(_X_01);
    *pdVar6 = dVar8 * dVar9 * dVar22 - dVar11 * dVar12 * dVar10;
    pdVar6[1] = -(dVar8 * dVar12 * dVar22) - dVar11 * dVar9 * dVar10;
    pdVar6[2] = -(dVar12 * dVar8 * dVar10) + dVar9 * dVar11 * dVar22;
    pdVar6[3] = dVar9 * dVar8 * dVar10 + dVar12 * dVar11 * dVar22;
  }
  else if ((pdVar6[6] != dVar8) || (NAN(pdVar6[6]) || NAN(dVar8))) goto LAB_14093026c;
  local_e8 = *pdVar6;
  dStack_e0 = pdVar6[1];
  local_d8 = pdVar6[2];
  dStack_d0 = pdVar6[3];
  local_110 = 0;
  local_118 = 0;
  FUN_144927ad4(param_2,&local_108,&local_e8,0);
  FUN_140f26c7f();
  param_2[0x313] = DAT_14cb710d0;
  uVar5 = (**(code **)(*(longlong *)(lVar3 + 0x1240) + 0x10))(lVar3 + 0x1240);
  FUN_145849808(param_2,uVar5,1);
  if ((*(byte *)(param_1 + 0x89) & 2) == 0) {
    if (*(longlong *)(param_1 + 0x3f8) != 0) {
      FUN_1406547e8(param_2,*(longlong *)(param_1 + 0x3f8),1);
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x400);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    param_2[0x2c6] = lVar3;
    *(undefined1 *)(param_2 + 0x2f3) = 1;
  }
  FUN_140efa230(param_2 + 0x251,param_1 + 0x410);
  uVar5 = 0;
  FUN_14073397e(param_2,0,1);
  lVar3 = *(longlong *)(param_1 + 0x408);
  if (lVar3 != 0) {
    lVar4 = FUN_1402e44f4();
    if (((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x408);
    }
  }
  FUN_14065465c(param_2,uVar5);
  FUN_140c056bc(param_2,1);
  FUN_140357fa8(param_2,1,0);
  if (((*(byte *)((longlong)param_2 + 0x2d6) & 2) == 0) ||
     (*(byte *)((longlong)param_2 + 0x2d6) = *(byte *)((longlong)param_2 + 0x2d6) & 0xfd,
     (~*(byte *)((longlong)param_2 + 0x9c) & 3) != 0)) goto LAB_140930587;
  bVar2 = *(byte *)((longlong)param_2 + 0x9d);
  if ((bVar2 & 1) != 0) {
    if (param_2[0x16] != 0) goto LAB_140930587;
    lVar3 = FUN_1448abda6(param_2);
    if (lVar3 != 0) goto LAB_140930587;
    bVar2 = *(byte *)((longlong)param_2 + 0x9d);
  }
  *(byte *)((longlong)param_2 + 0x9d) = bVar2 | 1;
  FUN_1401057d4(param_2);
  FUN_14010586c(&DAT_14cad0140,param_2);
LAB_140930587:
  FUN_14045627c(param_2,1,1);
  *(undefined1 *)((longlong)param_2 + 0x89c) = 0;
  *(byte *)((longlong)param_2 + 0x2d4) = *(byte *)((longlong)param_2 + 0x2d4) & 0xbf;
  (**(code **)(*param_2 + 0x720))(param_2,0);
  if (!bVar7) {
    FUN_140b506a4(param_2);
  }
  *(undefined1 *)(param_2 + 0x2c0) = *(undefined1 *)(param_1 + 0x5f4);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_138);
}



// FUNCTION 1409306ea FUN_1409306ea body=201 status=ok
// SIG undefined FUN_1409306ea(void)

void FUN_1409306ea(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0xa00))(param_2);
    if (plVar2 == param_1) {
      FUN_1409307b4(param_2,0);
    }
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x9f8))(param_1);
  if (plVar2 != (longlong *)0x0) {
    if (plVar2 == param_1) {
      FUN_140a18dcc(param_1 + 0xf9,0,param_1);
    }
    else {
      FUN_1409307b4(plVar2,param_1);
      FUN_1409308e8(param_1);
    }
  }
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
    bVar1 = *(byte *)((longlong)param_1 + 0x9d);
    if ((bVar1 & 1) == 0) {
LAB_14093078e:
      *(byte *)((longlong)param_1 + 0x9d) = bVar1 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
    if (param_1[0x16] == 0) {
      lVar3 = FUN_1448abda6(param_1);
      if (lVar3 == 0) {
        bVar1 = *(byte *)((longlong)param_1 + 0x9d);
        goto LAB_14093078e;
      }
    }
  }
  return;
}



// FUNCTION 1409307b4 FUN_1409307b4 body=79 status=ok
// SIG undefined FUN_1409307b4(void)

void FUN_1409307b4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_2 != param_1) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0xa00))();
    if (plVar1 != param_2) {
      FUN_140a18dcc(param_1 + 0xf2,param_2,param_1);
      FUN_140930804(param_1,plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140930804 FUN_140930804 body=156 status=ok
// SIG undefined FUN_140930804(void)

void FUN_140930804(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x9f8))(param_2);
    if (plVar1 == param_1) {
      FUN_14093097c(param_2,0);
    }
  }
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xa00))(param_1);
  if (plVar1 != (longlong *)0x0) {
    if (plVar1 != param_1) {
      FUN_14093097c(plVar1,param_1);
      uVar2 = FUN_14048bbc8(plVar1 + 0xeb);
      FUN_1409308a0(param_1,uVar2);
      FUN_1409308e8(param_1);
      return;
    }
    FUN_140a18dcc(param_1 + 0xf2,0,param_1);
  }
  FUN_1409308a0(param_1,param_1);
  return;
}



// FUNCTION 1409308a0 FUN_1409308a0 body=71 status=ok
// SIG undefined FUN_1409308a0(void)

void FUN_1409308a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14048bbc8(param_1 + 0x758);
  if (lVar1 != param_2) {
    FUN_140a18dcc(param_1 + 0x758,param_2,param_1);
    FUN_140930ade(param_1);
    return;
  }
  return;
}



// FUNCTION 1409308e8 FUN_1409308e8 body=147 status=ok
// SIG undefined FUN_1409308e8(void)

void FUN_1409308e8(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  param_1 = param_1 + 0x758;
  plVar1 = (longlong *)FUN_14048bbc8(param_1);
  plVar2 = (longlong *)FUN_14048bbc8(param_1);
  if ((plVar2 == (longlong *)0x0) || (lVar3 = (**(code **)(*plVar2 + 0xa00))(plVar2), lVar3 == 0)) {
    plVar2 = (longlong *)0x0;
  }
  do {
    if (plVar1 == (longlong *)0x0) break;
    if (plVar1[0xdf] != 0) {
      FUN_1487c70b6(plVar1);
      break;
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x9f8))(plVar1);
  } while (plVar1 != plVar2);
  lVar3 = FUN_14048bbc8(param_1);
  if (lVar3 == 0) {
    return;
  }
  FUN_1409309cc(lVar3,1);
  return;
}



// FUNCTION 14093097c FUN_14093097c body=80 status=ok
// SIG undefined FUN_14093097c(void)

void FUN_14093097c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_2 != param_1) {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x9f8))();
    if (plVar1 != param_2) {
      FUN_140a18dcc(param_1 + 0xf9,param_2,param_1);
      FUN_1409306ea(param_1,plVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1409309cc FUN_1409309cc body=262 status=ok
// SIG undefined FUN_1409309cc(void)

void FUN_1409309cc(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  
  lVar4 = param_1 + 0x758;
  plVar1 = (longlong *)FUN_14048bbc8(lVar4);
  plVar2 = (longlong *)FUN_14048bbc8(lVar4);
  if ((plVar2 == (longlong *)0x0) || (lVar3 = (**(code **)(*plVar2 + 0xa00))(plVar2), lVar3 == 0)) {
    plVar2 = (longlong *)0x0;
  }
  bVar5 = 0;
  do {
    if (plVar1 == (longlong *)0x0) break;
    bVar5 = *(int *)((longlong)plVar1 + 0x82c) != 0 | bVar5;
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x9f8))(plVar1);
  } while (plVar1 != plVar2);
  if (*(byte *)(param_1 + 0x8e0) != bVar5 || param_2 != '\0') {
    plVar1 = (longlong *)FUN_14048bbc8(lVar4);
    plVar2 = (longlong *)FUN_14048bbc8(lVar4);
    if ((plVar2 == (longlong *)0x0) || (lVar4 = (**(code **)(*plVar2 + 0xa00))(plVar2), lVar4 == 0))
    {
      plVar2 = (longlong *)0x0;
    }
    do {
      if (plVar1 == (longlong *)0x0) {
        return;
      }
      if (*(byte *)(plVar1 + 0x11c) != bVar5) {
        *(byte *)(plVar1 + 0x11c) = bVar5;
      }
      if ((bVar5 != 0) && (*(char *)((longlong)plVar1 + 0x6f1) == '\x01')) {
        *(undefined1 *)((longlong)plVar1 + 0x6f1) = 0;
      }
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x9f8))(plVar1);
    } while (plVar1 != plVar2);
  }
  return;
}


