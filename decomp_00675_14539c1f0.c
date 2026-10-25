// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14539c1f0 FUN_14539c1f0 body=257 status=ok
// SIG undefined FUN_14539c1f0(void)

undefined8 FUN_14539c1f0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar2 = *(uint *)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x48) = 0;
  piVar4 = DAT_14c791060;
  do {
    while (iVar3 = *piVar4, iVar3 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
      if (*piVar4 < 0) goto LAB_14539c22f;
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
    }
    LOCK();
    iVar1 = *piVar4;
    if (iVar3 == iVar1) {
      *piVar4 = iVar3 + 1;
    }
    UNLOCK();
  } while (iVar3 != iVar1);
LAB_14539c22f:
  lVar6 = 0;
  lVar7 = lVar6;
  if (piVar4[0x12] != 0) {
    for (lVar5 = *(longlong *)
                  (*(longlong *)(piVar4 + 0x10) +
                  ((ulonglong)uVar2 % (ulonglong)(uint)piVar4[0x12]) * 8);
        (lVar7 = lVar6, lVar5 != 0 && (lVar7 = lVar5, *(uint *)(lVar5 + 0x10) != uVar2));
        lVar5 = *(longlong *)(lVar5 + 8)) {
    }
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar3 = *piVar4;
  do {
    if (iVar3 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(piVar4 + 2));
LAB_14539c2aa:
      lVar5 = lVar7 + -0x10;
      if (lVar7 == 0) {
        lVar5 = lVar6;
      }
      *(longlong *)(param_1 + 0x40) = lVar5;
      return CONCAT71((int7)((ulonglong)lVar5 >> 8),lVar5 != 0);
    }
    LOCK();
    iVar1 = *piVar4;
    if (iVar3 == iVar1) {
      *piVar4 = iVar3 + -1;
    }
    UNLOCK();
    if (iVar3 == iVar1) {
      if ((iVar3 + -1 == 0) && (0 < piVar4[0xc])) {
        SetEvent(*(HANDLE *)(piVar4 + 0xe));
      }
      goto LAB_14539c2aa;
    }
    iVar3 = *piVar4;
  } while( true );
}



// FUNCTION 14539c310 FUN_14539c310 body=42 status=ok
// SIG undefined FUN_14539c310(void)

void FUN_14539c310(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x58) != 0) && ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
    FUN_14539b2d0(*(longlong *)(param_1 + 0x58),param_1);
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 4;
  return;
}



// FUNCTION 14539c340 FUN_14539c340 body=42 status=ok
// SIG undefined FUN_14539c340(void)

void FUN_14539c340(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x58) != 0) && ((*(byte *)(param_1 + 0x70) & 4) != 0)) {
    FUN_14539b390(*(longlong *)(param_1 + 0x58),param_1);
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffb;
  return;
}



// FUNCTION 14539c370 FUN_14539c370 body=168 status=ok
// SIG undefined FUN_14539c370(void)

undefined8 * FUN_14539c370(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_149d45930;
  pvVar2 = (void *)param_1[0xd];
  if (pvVar2 != (void *)0x0) {
    do {
      lVar1 = param_1[0xd];
      if (lVar1 == 0) {
LAB_14539c3c6:
        AK::MemoryMgr::Free(0,pvVar2);
      }
      else {
        lVar3 = *(longlong *)(lVar1 + 0x10);
        if (*(longlong *)(lVar1 + 0x10) == 0) {
          param_1[0xc] = 0;
          lVar3 = 0;
        }
        param_1[0xd] = lVar3;
        *(undefined8 *)(lVar1 + 0x10) = 0;
        if (pvVar2 != (void *)0x0) goto LAB_14539c3c6;
      }
      pvVar2 = (void *)param_1[0xd];
    } while (pvVar2 != (void *)0x0);
  }
  if (param_1[0xb] != 0) {
    FUN_14539b470(param_1[0xb],param_1);
  }
  FUN_14539ab20(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14539c420 FUN_14539c420 body=79 status=ok
// SIG undefined FUN_14539c420(void)

void FUN_14539c420(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 local_58 [88];
  
  FUN_14538d590(local_58,*(undefined8 *)(param_1 + 8),param_2,param_3,param_4,param_5);
  FUN_14538d5f0(local_58,param_6,param_7);
  return;
}



// FUNCTION 14539c480 FUN_14539c480 body=43 status=ok
// SIG undefined FUN_14539c480(void)

undefined8 * FUN_14539c480(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d45970;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14539c4b0 FUN_14539c4b0 body=136 status=ok
// SIG undefined FUN_14539c4b0(void)

undefined8 * FUN_14539c4b0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  pvVar2 = AK::MemoryMgr::Malloc(6,0x28);
  if (pvVar2 != (void *)0x0) {
    pvVar2 = (void *)FUN_145377550(pvVar2);
    if (pvVar2 != (void *)0x0) {
      iVar1 = FUN_145377570(pvVar2,param_2);
      if (iVar1 == 1) {
        puVar3 = AK::MemoryMgr::Malloc(6,0x10);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &PTR_FUN_149d45970;
          puVar3[1] = pvVar2;
          return puVar3;
        }
        FUN_1453775f0(pvVar2);
        AK::MemoryMgr::Free(6,pvVar2);
      }
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14539c540 FUN_14539c540 body=99 status=ok
// SIG undefined FUN_14539c540(void)

void FUN_14539c540(undefined8 param_1,undefined8 *param_2)

{
  void *pvVar1;
  
  if (param_2[1] != 0) {
    FUN_1453775f0();
    pvVar1 = (void *)param_2[1];
    if (pvVar1 != (void *)0x0) {
      FUN_1453775f0(pvVar1);
      AK::MemoryMgr::Free(6,pvVar1);
    }
    param_2[1] = 0;
  }
  (**(code **)*param_2)(param_2,0);
  AK::MemoryMgr::Free(6,param_2);
  return;
}



// FUNCTION 14539c5b0 FUN_14539c5b0 body=5 status=ok
// SIG undefined FUN_14539c5b0(void)

void FUN_14539c5b0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 14539c5c0 FUN_14539c5c0 body=9 status=ok
// SIG undefined FUN_14539c5c0(void)

void FUN_14539c5c0(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 14539c610 FUN_14539c610 body=52 status=ok
// SIG undefined FUN_14539c610(void)

void FUN_14539c610(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  FUN_145381f00(param_1 + 0x10);
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
  return;
}



// FUNCTION 14539c650 FUN_14539c650 body=157 status=ok
// SIG undefined FUN_14539c650(void)

void FUN_14539c650(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0x54) = (uint)*(ushort *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0xf1) = 0;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xe8) + 0x318);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  FUN_145388420(param_1 + 0x10,uVar2,(iVar1 << 0x1d) >> 0x1d == 0);
  if (*(short *)(param_1 + 0x92) != 0) {
    FUN_14539c6f0(param_1,param_2);
    return;
  }
  if (*(char *)(param_1 + 0xf0) != '\0') {
    *(undefined4 *)(param_2 + 0x30) = 0x11;
  }
  return;
}



// FUNCTION 14539c6f0 FUN_14539c6f0 body=920 status=ok
// SIG undefined FUN_14539c6f0(void)

void FUN_14539c6f0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_2 + 6) == 0x11) {
    *(undefined1 *)(param_1 + 0xf0) = 1;
  }
  lVar10 = 0;
  if (*(short *)(param_1 + 0x92) == 0) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_14539cf90();
    }
    if ((*(short *)((longlong)param_2 + 0x12) == 0) && (*(int *)(param_2 + 6) == 0x2d)) {
      *(undefined4 *)(param_2 + 6) = 0x2b;
      return;
    }
    uVar7 = param_2[1];
    *(undefined8 *)(param_1 + 0x80) = *param_2;
    *(undefined8 *)(param_1 + 0x88) = uVar7;
    uVar14 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar5 = *(undefined4 *)(param_2 + 3);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)(param_1 + 0x94) = uVar14;
    *(undefined4 *)(param_1 + 0x98) = uVar5;
    *(undefined4 *)(param_1 + 0x9c) = uVar6;
    uVar7 = param_2[5];
    *(undefined8 *)(param_1 + 0xa0) = param_2[4];
    *(undefined8 *)(param_1 + 0xa8) = uVar7;
    param_2[3] = 0;
  }
  plVar1 = (longlong *)(param_1 + 0xb0);
  if (*plVar1 == 0) {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x88);
    *(ushort *)(param_1 + 0xc0) = DAT_14c72f434;
    iVar8 = FUN_145071750(plVar1);
    if (iVar8 != 1) {
      *(undefined4 *)(param_2 + 6) = 2;
      return;
    }
    if (*(char *)(param_1 + 0xf2) != '\0') {
      fVar15 = *(float *)(*(longlong *)(param_1 + 0xe8) + 700);
      fVar15 = ((float)DAT_14c72f434 * fVar15 +
               (float)*(int *)(*(longlong *)(param_1 + 0xe8) + 0x338)) / fVar15;
      if (fVar15 <= 0.0) {
        fVar13 = -0.5;
      }
      else {
        fVar13 = 0.5;
      }
      uVar11 = (uint)(fVar13 + fVar15);
      if (0 < (int)uVar11) {
        if (*(byte *)(param_1 + 0xb8) != 0) {
          uVar12 = (ulonglong)*(byte *)(param_1 + 0xb8);
          do {
            memset((void *)(*plVar1 + (ulonglong)*(ushort *)(param_1 + 0xc0) * lVar10 * 4),0,
                   (ulonglong)uVar11 << 2);
            lVar10 = lVar10 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        *(uint *)(param_1 + 0x3c) = uVar11;
      }
      *(undefined1 *)(param_1 + 0xf2) = 0;
    }
  }
  lVar10 = *(longlong *)(param_1 + 0xe8);
  if (((*(byte *)(lVar10 + 0x315) & 0x40) == 0) && (iVar8 = *(int *)(lVar10 + 0x30c), iVar8 != 0)) {
    uVar2 = *(ushort *)(param_1 + 0x92);
    if ((int)(uint)uVar2 <= iVar8) {
      *(byte *)(lVar10 + 0x316) = *(byte *)(lVar10 + 0x316) & 0xfe;
      *(uint *)(lVar10 + 0x30c) = iVar8 - (uint)uVar2;
      *(byte *)(lVar10 + 0x315) = *(byte *)(lVar10 + 0x315) & 0x3f;
      *(undefined2 *)(param_1 + 0x92) = 0;
      *(undefined2 *)((longlong)param_2 + 0x12) = 0;
      FUN_14539cf90(param_1,param_2);
      uVar14 = 0x2b;
      if (*(char *)(param_1 + 0xf0) != '\0') {
        uVar14 = 0x11;
      }
      *(undefined4 *)(param_2 + 6) = uVar14;
      return;
    }
    *(int *)(param_1 + 0x38) = iVar8;
    *(ushort *)(param_1 + 0x92) = uVar2 - (short)iVar8;
    *(byte *)(lVar10 + 0x315) = *(byte *)(lVar10 + 0x315) & 0x3f;
    *(byte *)(lVar10 + 0x316) = *(byte *)(lVar10 + 0x316) & 0xfe;
    *(undefined4 *)(lVar10 + 0x30c) = 0;
  }
  sVar3 = *(short *)(param_1 + 0x92);
  iVar8 = *(int *)(param_1 + 0x38);
  iVar9 = FUN_1453882f0(param_1 + 0x10,param_1 + 0x80,param_1 + 0xb0);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0xe0) + 0x110);
  if (iVar4 == 0) {
    local_38 = 0;
  }
  else {
    local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x108);
  }
  _iStack_30 = CONCAT44(uStack_2c,iVar4);
  FUN_145352060(&local_38,param_1 + 0x80,param_1 + 0xb0,iVar8,sVar3 - *(short *)(param_1 + 0x92));
  if ((*(int *)(param_1 + 0xa0) != -1) && (*(char *)(param_1 + 0xf1) == '\0')) {
    *(undefined1 *)(param_1 + 0xf1) = 1;
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xa8);
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xa0) + iVar8;
  }
  uVar14 = FUN_1453886c0(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xd4) = uVar14;
  if ((*(short *)(param_1 + 0x92) == 0) &&
     (FUN_14539cf90(param_1,param_2), *(char *)(param_1 + 0xf0) == '\x01')) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xe0) + 0xf0) != 0) {
      iVar9 = FUN_1450ccca0(*(longlong *)(param_1 + 0xe0),param_1 + 0xb0);
      goto LAB_14539ca2a;
    }
    iVar9 = 0x11;
  }
  else {
LAB_14539ca2a:
    if ((iVar9 != 0x2d) && (iVar9 != 0x11)) goto LAB_14539ca5f;
  }
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  *param_2 = *(undefined8 *)(param_1 + 0xb0);
  param_2[1] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 200);
  param_2[2] = *(undefined8 *)(param_1 + 0xc0);
  param_2[3] = uVar7;
  uVar7 = *(undefined8 *)(param_1 + 0xd8);
  param_2[4] = *(undefined8 *)(param_1 + 0xd0);
  param_2[5] = uVar7;
  *(undefined8 *)(param_1 + 200) = 0;
LAB_14539ca5f:
  *(int *)(param_2 + 6) = iVar9;
  return;
}



// FUNCTION 14539ca90 FUN_14539ca90 body=109 status=ok
// SIG undefined FUN_14539ca90(void)

void FUN_14539ca90(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 200) = 0;
  if (*plVar1 != 0) {
    FUN_1450718b0(plVar1);
    *plVar1 = 0;
    *(undefined8 *)(param_1 + 0xbc) = 0x2b;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xd4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xdc) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}



// FUNCTION 14539cb00 FUN_14539cb00 body=169 status=ok
// SIG undefined FUN_14539cb00(void)

void FUN_14539cb00(longlong param_1,int param_2)

{
  if (param_2 != 2) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    }
    *(undefined8 *)(param_1 + 0x8c) = 0x2b;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xac) = 1;
    FUN_1453886b0(param_1 + 0x10);
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0xf0) = 0;
    }
  }
  if (*(char *)(param_1 + 0xf0) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),param_2);
  }
  return;
}



// FUNCTION 14539cbe0 FUN_14539cbe0 body=413 status=ok
// SIG undefined FUN_14539cbe0(void)

ulonglong FUN_14539cbe0(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint local_res8 [2];
  
  uVar10 = (**(code **)(**(longlong **)(param_1 + 8) + 0x38))();
  FUN_1453885c0(param_1 + 0x10,uVar10);
  uVar5 = 0;
  uVar9 = 0x2d;
  uVar7 = (ulonglong)((float)*(uint *)(param_1 + 0x44) * 1.5258789e-05 * (float)*param_2 + 0.5);
  uVar6 = (uint)uVar7;
  do {
    if (uVar6 == 0) goto LAB_14539cd1b;
    local_res8[0]._0_2_ = *(ushort *)(param_1 + 0x92);
    if (((ushort)local_res8[0] == 0) && (local_res8[0]._0_2_ = 0, *(char *)(param_1 + 0xf0) == '\0')
       ) {
      local_res8[0] = (uint)DAT_14c72f434;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                        (*(longlong **)(param_1 + 8),local_res8);
      if ((int)uVar3 != 0x2d) {
        if ((int)uVar3 != 0x11) {
          return uVar3;
        }
        *(char *)(param_1 + 0xf0) = '\x01';
      }
      lVar1 = *(longlong *)(param_1 + 0xe8);
      if (((*(byte *)(lVar1 + 0x315) & 0x40) == 0) && (uVar6 = *(uint *)(lVar1 + 0x30c), uVar6 != 0)
         ) {
        iVar8 = 0;
        if (local_res8[0] < uVar6) {
          iVar8 = uVar6 - local_res8[0];
          uVar6 = local_res8[0];
        }
        local_res8[0] = local_res8[0] - uVar6;
        *(byte *)(lVar1 + 0x315) = *(byte *)(lVar1 + 0x315) & 0x3f;
        *(byte *)(lVar1 + 0x316) = *(byte *)(lVar1 + 0x316) & 0xfe;
        *(int *)(lVar1 + 0x30c) = iVar8;
      }
    }
    uVar6 = (uint)uVar7;
    uVar2 = (uint)(ushort)local_res8[0];
    if (uVar6 < (ushort)local_res8[0]) {
      uVar2 = uVar6;
    }
    uVar5 = uVar5 + uVar2;
    uVar6 = uVar6 - uVar2;
    uVar7 = (ulonglong)uVar6;
    sVar4 = (ushort)local_res8[0] - (short)uVar2;
    *(short *)(param_1 + 0x92) = sVar4;
  } while ((sVar4 != 0) || (*(char *)(param_1 + 0xf0) == '\0'));
  uVar9 = 0x11;
LAB_14539cd1b:
  *param_2 = (uint)(longlong)((65536.0 / (float)*(uint *)(param_1 + 0x44)) * (float)uVar5 + 0.5);
  return (ulonglong)uVar9;
}



// FUNCTION 14539cd80 FUN_14539cd80 body=131 status=ok
// SIG undefined FUN_14539cd80(void)

undefined8 FUN_14539cd80(longlong param_1)

{
  undefined8 uVar1;
  
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  *(undefined8 *)(param_1 + 0x8c) = 0x2b;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = 1;
  FUN_1453886b0(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf0) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014539cdf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    return uVar1;
  }
  return 1;
}



// FUNCTION 14539ce40 FUN_14539ce40 body=33 status=ok
// SIG undefined FUN_14539ce40(void)

void FUN_14539ce40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf2) = 1;
  FUN_145387e70(param_1 + 0x10,param_2,param_4);
  return;
}



// FUNCTION 14539ce70 FUN_14539ce70 body=79 status=ok
// SIG undefined FUN_14539ce70(void)

void FUN_14539ce70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    *(undefined8 *)(param_1 + 200) = 0;
    FUN_1450718b0();
  }
  *(undefined2 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FUN_1453880c0(param_1 + 0x10);
  return;
}



// FUNCTION 14539cec0 FUN_14539cec0 body=26 status=ok
// SIG undefined FUN_14539cec0(void)

void FUN_14539cec0(longlong param_1,longlong param_2,longlong param_3)

{
  if (*(longlong *)(param_1 + 0x80) != 0) {
    *(longlong *)(param_1 + 0x80) = (*(longlong *)(param_1 + 0x80) - param_3) + param_2;
  }
  return;
}



// FUNCTION 14539cee0 FUN_14539cee0 body=101 status=ok
// SIG undefined FUN_14539cee0(void)

void FUN_14539cee0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  *(longlong **)(param_1 + 8) = param_2;
  lVar1 = param_2[3];
  *(longlong *)(param_1 + 0xe8) = lVar1;
  uVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  FUN_145388110(param_1 + 0x10,lVar1 + 0x2b0,uVar2,param_1 + 0xb0,DAT_14c72f42c);
  *(undefined1 *)(param_1 + 0xf0) = 0;
  return;
}



// FUNCTION 14539cf50 FUN_14539cf50 body=58 status=ok
// SIG undefined FUN_14539cf50(void)

void FUN_14539cf50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x48))();
  if (lVar1 != 0) {
    FUN_145388650(param_1 + 0x10,param_2 + 4,lVar1);
  }
  return;
}



// FUNCTION 14539cf90 FUN_14539cf90 body=115 status=ok
// SIG undefined FUN_14539cf90(void)

void FUN_14539cf90(longlong param_1,undefined8 *param_2)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  *(undefined8 *)(param_1 + 0x8c) = 0x2b;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = 1;
  *param_2 = 0;
  *(undefined2 *)((longlong)param_2 + 0x12) = 0;
  param_2[3] = 0;
  return;
}



// FUNCTION 14539d010 FUN_14539d010 body=31 status=ok
// SIG undefined FUN_14539d010(void)

void FUN_14539d010(longlong param_1,int param_2)

{
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 200) = 0;
  }
  if (*(char *)(param_1 + 200) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014539d02a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    return;
  }
  return;
}



// FUNCTION 14539d050 FUN_14539d050 body=161 status=ok
// SIG undefined FUN_14539d050(void)

undefined8
FUN_14539d050(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14538c090(param_1 + 0x10,param_5);
  lVar1 = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xca) = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  lVar2 = *(longlong *)(param_5 + 8) + -0x18;
  if (*(longlong *)(param_5 + 8) == 0) {
    lVar2 = lVar1;
  }
  if (lVar2 != 0) {
    lVar1 = lVar2 + 0x18;
  }
  lVar1 = FUN_14536b830(param_1 + 0x38,*param_3,lVar1);
  if (lVar1 == 0) {
    return 2;
  }
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(*param_3 + 0x38);
  return 1;
}



// FUNCTION 14539d100 FUN_14539d100 body=12 status=ok
// SIG undefined FUN_14539d100(void)

void FUN_14539d100(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014539d108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))(param_1 + 0x38);
  return;
}



// FUNCTION 14539d110 FUN_14539d110 body=53 status=ok
// SIG undefined FUN_14539d110(void)

void FUN_14539d110(longlong param_1,int param_2)

{
  if (param_2 != 2) {
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))();
  }
  FUN_14539d010(param_1,param_2);
  return;
}



// FUNCTION 14539d170 FUN_14539d170 body=241 status=ok
// SIG undefined FUN_14539d170(void)

void FUN_14539d170(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  short *psVar2;
  void *pvVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
  if (*(short *)(param_1 + 0xca) == 0) {
    psVar2 = (short *)(lVar1 + 0x148);
    if (lVar1 == 0) {
      psVar2 = (short *)&DAT_00000160;
    }
    if (*psVar2 == 0) {
      *(undefined1 *)(param_1 + 0xcc) = 0;
      if ((int)param_2[6] == 0x11) {
        *(undefined1 *)(param_1 + 200) = 1;
      }
      if (*param_2 == 0) {
        pvVar3 = AK::MemoryMgr::Malign
                           (5,(ulonglong)*(byte *)(param_2 + 1) *
                              (ulonglong)*(ushort *)(param_2 + 2) * 4,0x10);
        *(void **)(param_1 + 0xd8) = pvVar3;
        if (pvVar3 == (void *)0x0) {
          *(undefined4 *)(param_2 + 6) = 2;
          return;
        }
        *param_2 = (longlong)pvVar3;
        *(undefined2 *)((longlong)param_2 + 0x12) = 0;
      }
      *(int *)((longlong)param_2 + 0xc) = (int)param_2[6];
      (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x38))(*(longlong **)(param_1 + 0xd0),param_2);
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)((longlong)param_2 + 0xc);
      return;
    }
  }
  if (*(char *)(param_1 + 0xcc) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))();
  }
  *(undefined1 *)(param_1 + 0xcc) = 1;
  return;
}



// FUNCTION 14539d270 FUN_14539d270 body=75 status=ok
// SIG undefined FUN_14539d270(void)

void FUN_14539d270(longlong param_1)

{
  if (*(void **)(param_1 + 0xd8) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
    return;
  }
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014539d2b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14539d2c0 FUN_14539d2c0 body=45 status=ok
// SIG undefined FUN_14539d2c0(void)

void FUN_14539d2c0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))();
  *(undefined1 *)(param_1 + 200) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014539d2e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  return;
}



// FUNCTION 14539d2f0 FUN_14539d2f0 body=135 status=ok
// SIG undefined FUN_14539d2f0(void)

void FUN_14539d2f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong in_stack_00000030;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(in_stack_00000030 + 4);
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  lVar2 = in_stack_00000030;
  iVar1 = FUN_14539d050();
  if (iVar1 == 1) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x30))
                      (*(longlong **)(param_1 + 0xd0),&PTR_PTR_14c72f458,param_1 + 0x10,
                       *(undefined8 *)(param_1 + 0x88),in_stack_00000030,lVar2);
    if (iVar1 == 1) {
      (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))();
    }
  }
  return;
}



// FUNCTION 14539d380 FUN_14539d380 body=28 status=ok
// SIG undefined FUN_14539d380(void)

void FUN_14539d380(longlong *param_1)

{
  (**(code **)(*param_1 + 0x68))();
  FUN_14539d100(param_1);
  return;
}



// FUNCTION 14539d3a0 FUN_14539d3a0 body=84 status=ok
// SIG undefined FUN_14539d3a0(void)

void FUN_14539d3a0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_14c72f458);
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(void **)(param_1 + 0xd8) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 14539d400 FUN_14539d400 body=129 status=ok
// SIG undefined FUN_14539d400(void)

undefined8 FUN_14539d400(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  short *psVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 200) != '\0') {
    return 0x11;
  }
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if ((plVar1 != (longlong *)0x0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8), *(short *)(param_1 + 0xca) == 0)) {
    psVar3 = (short *)(lVar2 + 0x148);
    if (lVar2 == 0) {
      psVar3 = (short *)&DAT_00000160;
    }
    if (*psVar3 == 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,*param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014539d47d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),param_2);
  return uVar4;
}



// FUNCTION 14539d490 FUN_14539d490 body=12 status=ok
// SIG undefined FUN_14539d490(void)

undefined4 * FUN_14539d490(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0xe0);
  return param_2;
}



// FUNCTION 14539d4a0 FUN_14539d4a0 body=475 status=ok
// SIG undefined FUN_14539d4a0(void)

void FUN_14539d4a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  short *psVar2;
  void *pvVar3;
  longlong *local_res8;
  undefined8 *local_res18 [2];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong local_78;
  ulonglong local_70;
  undefined4 local_68;
  longlong *local_60;
  longlong local_58;
  char local_50;
  undefined1 local_48;
  undefined4 local_38 [2];
  longlong **local_30;
  undefined8 **local_28;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
  if (*(short *)(param_1 + 0xca) == 0) {
    psVar2 = (short *)(lVar1 + 0x148);
    if (lVar1 == 0) {
      psVar2 = (short *)&DAT_00000160;
    }
    if (*psVar2 == 0) {
      *(undefined1 *)(param_1 + 0xcc) = 0;
      if ((int)param_2[6] == 0x11) {
        *(undefined1 *)(param_1 + 200) = 1;
      }
      if (*param_2 == 0) {
        pvVar3 = AK::MemoryMgr::Malign
                           (5,(ulonglong)*(byte *)(param_2 + 1) *
                              (ulonglong)*(ushort *)(param_2 + 2) * 4,0x10);
        *(void **)(param_1 + 0xd8) = pvVar3;
        if (pvVar3 == (void *)0x0) {
          *(undefined4 *)(param_2 + 6) = 2;
          return;
        }
        *param_2 = (longlong)pvVar3;
        *(undefined2 *)((longlong)param_2 + 0x12) = 0;
      }
      *(int *)((longlong)param_2 + 0xc) = (int)param_2[6];
      local_res18[0] = &local_d8;
      local_30 = &local_res8;
      local_28 = local_res18;
      local_d8 = 0xffffffffffffffff;
      local_ac = 0x3f800000;
      local_a8 = 0x3f800000;
      local_a4 = 0xffff;
      local_b8 = 0;
      local_b0 = 0;
      local_d0 = 0;
      local_c8 = 0x3f800000;
      uStack_c4 = 0;
      uStack_c0 = 0x3f800000;
      uStack_bc = 0;
      local_a0 = 0x3f800000;
      local_98 = 0;
      local_90 = 0x3f800000;
      local_8c = 0;
      local_8a = 1;
      local_88 = 0x3f800000;
      local_84 = 0x3f800000;
      local_80 = (longlong *)0x0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = (longlong *)0x0;
      local_58 = 0;
      local_50 = '\0';
      local_48 = 0x32;
      local_38[0] = 1;
      local_res8 = param_2;
      (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x38))(*(longlong **)(param_1 + 0xd0),local_38)
      ;
      *(undefined4 *)(param_2 + 6) = *(undefined4 *)((longlong)param_2 + 0xc);
      if (local_78 != 0) {
        local_70 = local_70 & 0xffffffff00000000;
        (**(code **)(*local_80 + 0x10))();
        local_78 = 0;
        local_70 = local_70 & 0xffffffff;
      }
      if ((local_58 != 0) && (local_50 != '\0')) {
        (**(code **)(*local_60 + 0x10))();
      }
      return;
    }
  }
  if (*(char *)(param_1 + 0xcc) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))();
  }
  *(undefined1 *)(param_1 + 0xcc) = 1;
  return;
}



// FUNCTION 14539d6a0 FUN_14539d6a0 body=62 status=ok
// SIG undefined FUN_14539d6a0(void)

void FUN_14539d6a0(longlong *param_1,int param_2)

{
  if (param_2 != 2) {
    (**(code **)(*(longlong *)param_1[0x1a] + 0x10))();
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  FUN_14539d010(param_1,param_2);
  return;
}



// FUNCTION 14539d720 FUN_14539d720 body=926 status=ok
// SIG undefined FUN_14539d720(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14539d720(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  float *pfVar2;
  code *pcVar3;
  longlong lVar4;
  void *pvVar5;
  short *psVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined8 uStack_78;
  float afStack_70 [2];
  uint local_68 [2];
  undefined8 local_60 [3];
  float local_48 [4];
  
  puVar13 = auStack_98;
  if ((int)param_2[6] == 0x11) {
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  if (*(short *)((longlong)param_1 + 0xf2) == 0) {
    *(undefined4 *)(param_1 + 0x2a) = 0;
    lVar4 = param_2[1];
    param_1[0x1c] = *param_2;
    param_1[0x1d] = lVar4;
    lVar4 = param_2[3];
    param_1[0x1e] = param_2[2];
    param_1[0x1f] = lVar4;
    lVar4 = param_2[5];
    param_1[0x20] = param_2[4];
    param_1[0x21] = lVar4;
    param_1[0x22] = param_2[6];
    param_2[3] = 0;
  }
  plVar1 = param_1 + 0x23;
  *(int *)((longlong)param_1 + 0xec) = (int)param_2[6];
  if (*plVar1 == 0) {
    uStack_a0 = 0x14539d7d9;
    pvVar5 = AK::MemoryMgr::Malign
                       (5,(ulonglong)*(ushort *)(param_1 + 0x1b) *
                          (ulonglong)*(byte *)(param_1 + 0x24) * 4,0x10);
    if (pvVar5 == (void *)0x0) {
      *(undefined4 *)(param_2 + 6) = 2;
      return;
    }
    *plVar1 = (longlong)pvVar5;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined2 *)((longlong)param_1 + 0x12a) = 0;
    *(short *)(param_1 + 0x25) = (short)param_1[0x1b];
  }
  *(uint *)((longlong)param_1 + 0x154) = (uint)*(ushort *)((longlong)param_1 + 0xf2);
  if (*(short *)((longlong)param_1 + 0xca) == 0) {
    psVar6 = (short *)(*(longlong *)(param_1[6] + 8) + 0x148);
    if (*(longlong *)(param_1[6] + 8) == 0) {
      psVar6 = (short *)&DAT_00000160;
    }
    if (*psVar6 == 0) {
      *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
      uStack_a0 = 0x14539d872;
      (**(code **)(*(longlong *)param_1[0x1a] + 0x38))
                ((longlong *)param_1[0x1a],param_1 + 0x1c,(int)param_1[0x2a],plVar1);
      puVar13 = auStack_98;
      goto LAB_14539da9a;
    }
  }
  if (*(char *)((longlong)param_1 + 0xcc) == '\0') {
    uStack_a0 = 0x14539d88d;
    (**(code **)(*(longlong *)param_1[0x1a] + 0x10))();
  }
  *(undefined1 *)((longlong)param_1 + 0xcc) = 1;
  uVar7 = *(ushort *)((longlong)param_1 + 0xf2);
  if (*(ushort *)(param_1 + 0x25) <= *(ushort *)((longlong)param_1 + 0xf2)) {
    uVar7 = *(ushort *)(param_1 + 0x25);
  }
  uVar11 = (ulonglong)uVar7;
  uVar10 = (uint)uVar7;
  if (uVar10 != 0) {
    uVar8 = uVar7 + 0xf & 0xfffffff0;
    uVar14 = 0;
    if (*(byte *)(param_1 + 0x24) != 0) {
      do {
        uStack_a0 = 0x14539d90d;
        memset((void *)(param_1[0x23] + uVar14 * *(ushort *)(param_1 + 0x25) * 4),0,
               (ulonglong)(uVar8 * 4));
        uVar12 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar12;
      } while (uVar12 < *(byte *)(param_1 + 0x24));
      uVar11 = (ulonglong)uVar10;
    }
    uVar14 = 0;
    if ((uVar8 != (uint)uVar11) && ((char)param_1[0x1d] != '\0')) {
      do {
        uStack_a0 = 0x14539d975;
        memset((void *)(param_1[0x1c] + (uVar14 * *(ushort *)(param_1 + 0x1e) + uVar11) * 4),0,
               (ulonglong)((uVar8 - (uint)uVar11) * 4));
        uVar12 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar12;
      } while (uVar12 < *(byte *)(param_1 + 0x1d));
    }
    uVar8 = *(uint *)(param_1 + 0x24);
    uVar12 = *(uint *)(param_1 + 0x1d);
    uVar11 = (ulonglong)(((uVar8 & 0xff) + 7 >> 3) * (uVar12 & 0xff) * 0x20);
    uVar14 = uVar11 + 0xf;
    if (uVar14 <= uVar11) {
      uVar14 = 0xffffffffffffff0;
    }
    uStack_a0 = 0x14539d9d8;
    lVar4 = -(uVar14 & 0xfffffffffffffff0);
    puVar13 = auStack_98 + lVar4;
    *(undefined8 *)((longlong)local_60 + lVar4 + 8) = 0;
    pfVar2 = (float *)((longlong)local_48 + lVar4);
    *(float **)((longlong)local_60 + lVar4) = pfVar2;
    *(uint *)((longlong)local_68 + lVar4) = uVar8;
    *(uint *)((longlong)afStack_70 + lVar4) = uVar12;
    *(undefined1 *)((longlong)&uStack_78 + lVar4) = 0;
    *(undefined8 *)(auStack_98 + lVar4 + -8) = 0x14539da12;
    FUN_145093d40(0,0,0,0x3f800000);
    *(uint *)((longlong)local_68 + lVar4) = uVar7 + 0xf & 0xfff0;
    local_res18 = 0x3f800000;
    local_res1c = 0x3f800000;
    *(float *)((longlong)afStack_70 + lVar4) = 1.0 / (float)uVar10;
    *(float **)((longlong)&uStack_78 + lVar4) = pfVar2;
    *(undefined8 *)(auStack_98 + lVar4 + -8) = 0x14539da5e;
    AkMixer::MixNinNChannels
              ((AkAudioBuffer *)(param_1 + 0x1c),(AkAudioBuffer *)(param_1 + 0x23),
               (AkRamp *)&local_res18,pfVar2,*(float **)((longlong)&uStack_78 + lVar4),
               *(float *)((longlong)afStack_70 + lVar4),*(uint *)((longlong)local_68 + lVar4));
  }
  *(undefined2 *)((longlong)param_1 + 0xf2) = 0;
  if ((char)param_1[0x19] == '\0') {
    uVar9 = 0x2b;
    if (*(short *)((longlong)param_1 + 0x12a) == (short)param_1[0x25]) {
      uVar9 = 0x2d;
    }
    *(undefined4 *)((longlong)param_1 + 0x124) = uVar9;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x124) = 0x11;
  }
LAB_14539da9a:
  pcVar3 = *(code **)(*param_1 + 8);
  *(undefined8 *)(puVar13 + -8) = 0x14539daa6;
  (*pcVar3)(param_1,param_2);
  return;
}



// FUNCTION 14539dac0 FUN_14539dac0 body=118 status=ok
// SIG undefined FUN_14539dac0(void)

void FUN_14539dac0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (*(void **)(param_1 + 0x118) != (void *)0x0) {
    AK::MemoryMgr::Free(5,*(void **)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x124) = 0x2b;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x144) = 1;
  }
  return;
}



// FUNCTION 14539db40 FUN_14539db40 body=99 status=ok
// SIG undefined FUN_14539db40(void)

undefined8 FUN_14539db40(longlong param_1)

{
  if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  }
  *(undefined8 *)(param_1 + 0xec) = 0x2b;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10c) = 1;
  return 1;
}



// FUNCTION 14539dbb0 FUN_14539dbb0 body=547 status=ok
// SIG undefined FUN_14539dbb0(void)

void FUN_14539dbb0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_28;
  int iStack_20;
  
  iVar5 = *(int *)(param_1 + 0x154) - (uint)*(ushort *)(param_1 + 0xf2);
  iStack_20 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x110);
  if (iStack_20 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x108);
  }
  FUN_145352060(&local_28,(undefined8 *)(param_1 + 0xe0),param_1 + 0x118,
                *(undefined4 *)(param_1 + 0x150),iVar5);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
  puVar3 = (uint *)(lVar1 + -0x10);
  if (lVar1 == 0) {
    puVar3 = (uint *)&DAT_00000008;
  }
  if ((*puVar3 & 0x100000) != 0) {
    uVar4 = *(int *)(param_1 + 0x160) + iVar5;
    *(uint *)(param_1 + 0x160) = uVar4;
    if ((*(int *)(param_1 + 0x124) == 0x2d) || (*(int *)(param_1 + 0x124) == 0x11)) {
      *(undefined4 *)(param_1 + 0x160) = 0;
      *(float *)(param_1 + 0x158) = (float)uVar4 * 0.125 + *(float *)(param_1 + 0x158) * 0.875;
      *(float *)(param_1 + 0x15c) =
           (float)*(ushort *)(param_1 + 0x12a) * 0.125 + *(float *)(param_1 + 0x15c) * 0.875;
      if (*(int *)(param_1 + 0x100) != -1) {
        *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x10c);
        *(int *)(param_2 + 4) = *(int *)(param_1 + 0x150) + *(int *)(param_1 + 0x100);
        *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0x108);
        *(float *)((longlong)param_2 + 0x24) =
             *(float *)(param_1 + 0x158) / *(float *)(param_1 + 0x15c);
      }
    }
  }
  *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + iVar5;
  if (*(short *)(param_1 + 0xf2) == 0) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xec) = 0x2b;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10c) = 1;
    *param_2 = 0;
    *(undefined2 *)((longlong)param_2 + 0x12) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x124);
  if ((iVar5 == 0x2d) || (iVar5 == 0x11)) {
    uVar2 = param_2[5];
    *(undefined8 *)(param_1 + 0x138) = param_2[4];
    *(undefined8 *)(param_1 + 0x140) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x120);
    *param_2 = *(undefined8 *)(param_1 + 0x118);
    param_2[1] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x130);
    param_2[2] = *(undefined8 *)(param_1 + 0x128);
    param_2[3] = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x140);
    param_2[4] = *(undefined8 *)(param_1 + 0x138);
    param_2[5] = uVar2;
    *(undefined8 *)(param_1 + 0x130) = 0;
    iVar5 = *(int *)(param_1 + 0x124);
  }
  *(int *)(param_2 + 6) = iVar5;
  return;
}



// FUNCTION 14539dde0 FUN_14539dde0 body=121 status=ok
// SIG undefined FUN_14539dde0(void)

void FUN_14539dde0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))();
  (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0x2b;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10c) = 1;
  *(undefined1 *)(param_1 + 200) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014539de55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
  return;
}



// FUNCTION 14539de90 FUN_14539de90 body=277 status=ok
// SIG undefined FUN_14539de90(void)

void FUN_14539de90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong in_stack_00000030;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0x2b;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x10c) = 1;
  *(undefined8 *)(param_1 + 0x124) = 0x2b;
  *(undefined4 *)(param_1 + 0x138) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x144) = 1;
  *(undefined4 *)(param_1 + 0x158) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x15c) = 0x3f800000;
  lVar2 = in_stack_00000030;
  iVar1 = FUN_14539d050();
  if (iVar1 == 1) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x30))
                      (*(longlong **)(param_1 + 0xd0),&PTR_PTR_14c72f458,param_1 + 0x10,
                       *(undefined8 *)(param_1 + 0x88),in_stack_00000030,lVar2);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(in_stack_00000030 + 4);
      (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))();
    }
  }
  return;
}



// FUNCTION 14539dfb0 FUN_14539dfb0 body=87 status=ok
// SIG undefined FUN_14539dfb0(void)

void FUN_14539dfb0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x68))();
  FUN_14539d100(param_1);
  if ((void *)param_1[0x23] != (void *)0x0) {
    param_1[0x26] = 0;
    AK::MemoryMgr::Free(5,(void *)param_1[0x23]);
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x25) = 0;
  }
  param_1[0x1f] = 0;
  return;
}



// FUNCTION 14539e010 FUN_14539e010 body=51 status=ok
// SIG undefined FUN_14539e010(void)

void FUN_14539e010(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&PTR_PTR_14c72f458);
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 14539e050 FUN_14539e050 body=154 status=ok
// SIG undefined FUN_14539e050(void)

int FUN_14539e050(longlong param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  short *psVar3;
  int local_res8 [8];
  
  if (*(char *)(param_1 + 200) != '\0') {
    return 0x11;
  }
  iVar2 = 0x2d;
  local_res8[0] = *param_2;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
  if (*(short *)(param_1 + 0xca) == 0) {
    psVar3 = (short *)(lVar1 + 0x148);
    if (lVar1 == 0) {
      psVar3 = (short *)&DAT_00000160;
    }
    if (*psVar3 == 0) {
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x40))
                        (*(longlong **)(param_1 + 0xd0),local_res8);
    }
  }
  if ((local_res8[0] != 0) && (iVar2 == 0x2d)) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                      (*(longlong **)(param_1 + 8),local_res8);
    *(bool *)(param_1 + 200) = iVar2 == 0x11;
  }
  return iVar2;
}



// FUNCTION 14539e100 FUN_14539e100 body=433 status=ok
// SIG undefined FUN_14539e100(void)

void FUN_14539e100(longlong *param_1,undefined1 param_2)

{
  void *_Src;
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar9 = *param_1;
  uVar5 = *(uint *)(param_1 + 8);
  if (*(uint *)(lVar9 + 0x28) <= uVar5) {
    *(undefined1 *)((longlong)param_1 + 0x4c) = param_2;
    return;
  }
  do {
    uVar8 = *(uint *)(param_1 + 7);
    uVar10 = 0;
    bVar1 = *(byte *)((ulonglong)uVar5 + *(longlong *)(lVar9 + 0x30));
    lVar9 = (ulonglong)uVar5 * 0x90 + *(longlong *)(lVar9 + 0x20);
    uVar2 = *(ulonglong *)(lVar9 + 0x70);
    if (uVar8 != 0) {
      do {
        iVar6 = (uVar8 >> 1) + (uint)uVar10;
        uVar3 = *(ulonglong *)(param_1[6] + (longlong)iVar6 * 8);
        if (uVar3 == uVar2) goto LAB_14539e227;
        uVar5 = iVar6 + 1;
        if (uVar2 <= uVar3) {
          uVar5 = (uint)uVar10;
        }
        uVar10 = (ulonglong)uVar5;
        uVar5 = uVar8 - 1;
        if (uVar2 <= uVar3) {
          uVar5 = uVar8;
        }
        uVar8 = uVar5 >> 1;
      } while (uVar8 != 0);
    }
    uVar5 = *(uint *)(param_1 + 7);
    uVar8 = (uint)uVar10;
    if (param_1[6] + (longlong)(int)uVar8 * 8 == 0) {
      if (((uVar5 < *(uint *)((longlong)param_1 + 0x3c)) ||
          (cVar4 = FUN_14539e7a0(param_1 + 2), cVar4 != '\0')) &&
         (uVar5 < *(uint *)((longlong)param_1 + 0x3c))) {
        uVar5 = *(uint *)(param_1 + 7);
        *(uint *)(param_1 + 7) = uVar5 + 1;
        puVar7 = (ulonglong *)(param_1[6] + (ulonglong)uVar5 * 8);
        goto LAB_14539e21f;
      }
    }
    else if (((uVar5 < *(uint *)((longlong)param_1 + 0x3c)) ||
             (cVar4 = FUN_14539e7a0(param_1 + 2), cVar4 != '\0')) &&
            (uVar5 < *(uint *)((longlong)param_1 + 0x3c))) {
      _Src = (void *)(param_1[6] + uVar10 * 8);
      if (uVar8 < *(uint *)(param_1 + 7)) {
        memmove((void *)((longlong)_Src + 8),_Src,(ulonglong)((*(uint *)(param_1 + 7) - uVar8) * 8))
        ;
      }
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
      puVar7 = (ulonglong *)(param_1[6] + uVar10 * 8);
LAB_14539e21f:
      if (puVar7 != (ulonglong *)0x0) {
        *puVar7 = uVar2;
      }
    }
LAB_14539e227:
    if (*(char *)((longlong)param_1 + 0x4c) != '\0') {
      if (*(float *)(lVar9 + 0x30) <= *(float *)((longlong)param_1 + 0xc) &&
          *(float *)((longlong)param_1 + 0xc) != *(float *)(lVar9 + 0x30)) {
        *(int *)(param_1 + 1) = (int)param_1[8];
        *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(lVar9 + 0x30);
      }
      if (((bVar1 & 5) != 0) && (*(float *)(lVar9 + 0x50) < *(float *)((longlong)param_1 + 0x44))) {
        *(float *)((longlong)param_1 + 0x44) = *(float *)(lVar9 + 0x50);
      }
      if ((bVar1 & 2) != 0) {
        *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar9 + 0x54);
      }
    }
    uVar5 = (int)param_1[8] + 1;
    *(uint *)(param_1 + 8) = uVar5;
    lVar9 = *param_1;
    if (*(uint *)(lVar9 + 0x28) <= uVar5) {
      *(undefined1 *)((longlong)param_1 + 0x4c) = param_2;
      return;
    }
  } while( true );
}



// FUNCTION 14539e2c0 FUN_14539e2c0 body=1238 status=ok
// SIG undefined FUN_14539e2c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14539e2c0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  bool bVar28;
  undefined8 auStack_b0 [5];
  undefined1 local_88 [4];
  uint local_84;
  undefined4 local_80;
  ulonglong *local_78;
  longlong local_70;
  longlong local_68;
  undefined1 *local_60;
  
  uVar25 = (ulonglong)*(ushort *)(param_2 + 0x38);
  local_84 = (uint)*(ushort *)(param_2 + 0x38);
  uVar24 = uVar25 * 0x10 + 0xf;
  if (uVar24 <= uVar25 * 0x10) {
    uVar24 = 0xffffffffffffff0;
  }
  auStack_b0[0] = 0x14539e328;
  puVar19 = *(ulonglong **)(param_4 + 0xd0);
  lVar4 = -(uVar24 & 0xfffffffffffffff0);
  local_70 = *(longlong *)(param_2 + 0x20);
  puVar11 = local_88 + lVar4;
  local_60 = puVar11;
  if (puVar19 != puVar19 + *(uint *)(param_4 + 0xd8)) {
    do {
      iVar13 = 0;
      uVar15 = *(uint *)(param_3 + 0x28);
      uVar24 = *puVar19;
      if (uVar15 != 0) {
        do {
          iVar12 = (uVar15 >> 1) + iVar13;
          uVar18 = *(ulonglong *)(*(longlong *)(param_3 + 0x20) + (longlong)iVar12 * 8);
          plVar14 = (longlong *)(*(longlong *)(param_3 + 0x20) + (longlong)iVar12 * 8);
          if (uVar18 == uVar24) {
            bVar28 = true;
            goto LAB_14539e3c6;
          }
          uVar17 = uVar15 - 1;
          iVar12 = iVar12 + 1;
          if (uVar24 <= uVar18) {
            uVar17 = uVar15;
            iVar12 = iVar13;
          }
          iVar13 = iVar12;
          uVar15 = uVar17 >> 1;
        } while (uVar15 != 0);
      }
      bVar28 = false;
      plVar14 = (longlong *)(*(longlong *)(param_3 + 0x20) + (longlong)iVar13 * 8);
LAB_14539e3c6:
      plVar20 = (longlong *)0x0;
      plVar8 = plVar20;
      if (bVar28) {
        plVar8 = plVar14;
      }
      local_80 = 0x30;
      if (plVar8 == (longlong *)0x0) {
        local_80 = 0x10;
      }
      local_78 = puVar19;
      *(undefined8 *)((longlong)auStack_b0 + lVar4) = 0x14539e3ea;
      local_68 = FUN_145077820(uVar24);
      if (local_68 != 0) {
        plVar8 = *(longlong **)(param_2 + 0x28);
        plVar14 = plVar8 + (ulonglong)*(uint *)(param_2 + 0x30) * 3;
        for (; (plVar8 != plVar14 && (*plVar8 != *(longlong *)(*(longlong *)(local_68 + 8) + 0x58)))
            ; plVar8 = plVar8 + 3) {
        }
        plVar23 = plVar8 + 1;
        if (plVar8 == plVar14) {
          plVar23 = plVar20;
        }
        uVar15 = (uint)uVar25;
        if ((plVar23 == (longlong *)0x0) || (uVar17 = *(uint *)(plVar23 + 1), uVar17 == 0)) {
          if (uVar15 != 0) {
            puVar26 = (undefined4 *)(puVar11 + 8);
            uVar24 = uVar25;
            do {
              *(undefined8 *)(puVar26 + -2) = 0;
              *puVar26 = 0;
              puVar26[1] = 0x42c80000;
              puVar26 = puVar26 + 4;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
        }
        else {
          uVar24 = uVar25;
          if (uVar17 <= uVar15) {
            uVar24 = (ulonglong)uVar17;
          }
          uVar17 = (uint)uVar24;
          plVar14 = plVar20;
          plVar8 = plVar20;
          if (uVar17 != 0) {
            do {
              uVar16 = (int)plVar8 + 1;
              puVar26 = (undefined4 *)((longlong)plVar14 + *plVar23);
              uVar1 = puVar26[1];
              uVar2 = puVar26[2];
              uVar5 = puVar26[3];
              puVar27 = (undefined4 *)((longlong)plVar14 + (longlong)puVar11);
              *puVar27 = *puVar26;
              puVar27[1] = uVar1;
              puVar27[2] = uVar2;
              puVar27[3] = uVar5;
              plVar14 = plVar14 + 2;
              plVar8 = (longlong *)(ulonglong)uVar16;
            } while (uVar16 < uVar17);
          }
          if (uVar17 < uVar15) {
            uVar18 = (ulonglong)(uVar15 - uVar17);
            puVar26 = (undefined4 *)(puVar11 + uVar24 * 0x10);
            do {
              puVar27 = (undefined4 *)(*plVar23 + (ulonglong)(uVar17 - 1) * 0x10);
              uVar1 = puVar27[1];
              uVar2 = puVar27[2];
              uVar5 = puVar27[3];
              *puVar26 = *puVar27;
              puVar26[1] = uVar1;
              puVar26[2] = uVar2;
              puVar26[3] = uVar5;
              uVar18 = uVar18 - 1;
              puVar26 = puVar26 + 4;
            } while (uVar18 != 0);
          }
        }
        if (*(char *)(param_4 + 0xe0) == '\0') {
          *(undefined8 *)((longlong)auStack_b0 + lVar4) = 0x14539e4ef;
          uVar9 = FUN_144d4eb60();
          *(undefined8 *)((longlong)auStack_b0 + lVar4) = 0x14539e4f7;
          lVar10 = FUN_144d4eb00(uVar9);
        }
        else {
          lVar10 = param_4 + 0x20;
        }
        uVar17 = *(uint *)(lVar10 + 0x48);
        uVar24 = *puVar19;
        if (uVar17 != 0) {
          lVar3 = *(longlong *)(lVar10 + 0x40);
          do {
            iVar13 = (uVar17 >> 1) + (uint)plVar20;
            uVar21 = *(ulonglong *)(lVar3 + (longlong)iVar13 * 8);
            uVar18 = lVar3 + (longlong)iVar13 * 8;
            if (uVar21 == uVar24) {
              bVar28 = true;
              goto LAB_14539e54a;
            }
            uVar16 = iVar13 + 1;
            if (uVar24 <= uVar21) {
              uVar16 = (uint)plVar20;
            }
            plVar20 = (longlong *)(ulonglong)uVar16;
            uVar16 = uVar17 - 1;
            if (uVar24 <= uVar21) {
              uVar16 = uVar17;
            }
            uVar17 = uVar16 >> 1;
          } while (uVar17 != 0);
        }
        bVar28 = false;
        uVar18 = *(longlong *)(lVar10 + 0x40) + (longlong)(int)plVar20 * 8;
LAB_14539e54a:
        uVar21 = 0;
        uVar24 = uVar21;
        if (bVar28) {
          uVar24 = uVar18;
        }
        bVar28 = uVar24 != 0;
        local_88[0] = bVar28;
        if (uVar15 != 0) {
          puVar26 = (undefined4 *)(local_70 + 0x38);
          puVar27 = (undefined4 *)(puVar11 + 8);
          do {
            *(undefined8 *)((longlong)auStack_b0 + lVar4) = 0x14539e58b;
            FUN_14539e100(param_1,bVar28);
            lVar10 = *param_1;
            uVar15 = *(uint *)(lVar10 + 0x28);
            if (uVar15 < *(uint *)(lVar10 + 0x2c)) {
LAB_14539e5b0:
              uVar15 = *(uint *)(lVar10 + 0x28);
              *(uint *)(lVar10 + 0x28) = uVar15 + 1;
              puVar22 = (undefined8 *)((ulonglong)uVar15 * 0x90 + *(longlong *)(lVar10 + 0x20));
              if (puVar22 != (undefined8 *)0x0) {
                *(undefined4 *)((longlong)puVar22 + 0x3c) = 0x3f800000;
                puVar22[6] = 0;
                *(undefined4 *)(puVar22 + 7) = 0;
                *(undefined8 *)((longlong)puVar22 + 0x4c) = 0;
                *(undefined8 *)((longlong)puVar22 + 0x54) = 0;
                *(undefined4 *)(puVar22 + 0xd) = 0;
                puVar22[0xe] = 0;
                *(undefined4 *)(puVar22 + 0x10) = 0;
                *(undefined4 *)(puVar22 + 8) = 0x3f800000;
                *(undefined8 *)((longlong)puVar22 + 0x44) = 0x3f800000;
                *(undefined4 *)((longlong)puVar22 + 0x5c) = 0x42c80000;
                *(undefined4 *)(puVar22 + 0xc) = 0x3f800000;
                *(undefined4 *)((longlong)puVar22 + 100) = 0xffffffff;
                puVar22[0xf] = 0x3f800000;
                *(undefined4 *)((longlong)puVar22 + 0x84) = 0xbf800000;
                *(undefined4 *)(puVar22 + 0x11) = 0x3f800000;
                lVar10 = *param_1;
                uVar15 = *(uint *)(lVar10 + 0x38);
                if (uVar15 < *(uint *)(lVar10 + 0x3c)) {
LAB_14539e65c:
                  lVar3 = local_68;
                  uVar15 = *(uint *)(lVar10 + 0x38);
                  *(uint *)(lVar10 + 0x38) = uVar15 + 1;
                  puVar11 = (undefined1 *)((ulonglong)uVar15 + *(longlong *)(lVar10 + 0x30));
                  if (puVar11 != (undefined1 *)0x0) {
                    *puVar11 = (char)local_80;
                    uVar6 = *(undefined8 *)(puVar26 + -0xc);
                    uVar1 = puVar26[-2];
                    uVar9 = *(undefined8 *)(*(longlong *)(local_68 + 8) + 0x58);
                    *puVar22 = *(undefined8 *)(puVar26 + -0xe);
                    puVar22[1] = uVar6;
                    uVar6 = *(undefined8 *)(puVar26 + -8);
                    puVar22[2] = *(undefined8 *)(puVar26 + -10);
                    puVar22[3] = uVar6;
                    uVar6 = *(undefined8 *)(puVar26 + -4);
                    puVar22[4] = *(undefined8 *)(puVar26 + -6);
                    puVar22[5] = uVar6;
                    *(float *)((longlong)puVar22 + 0x4c) = (float)puVar27[-1] * 100.0;
                    *(float *)(puVar22 + 9) = (float)puVar27[-2] * 100.0;
                    *(undefined4 *)(puVar22 + 0xb) = *puVar27;
                    uVar2 = puVar27[1];
                    *(undefined4 *)((longlong)puVar22 + 100) = uVar1;
                    puVar22[0xe] = uVar9;
                    *(undefined4 *)((longlong)puVar22 + 0x5c) = uVar2;
                    puVar22[10] = 0;
                    *(int *)(puVar22 + 0xd) = (int)uVar21;
                    *(undefined8 *)((longlong)auStack_b0 + lVar4) = 0x14539e6f5;
                    FUN_14507ae80(lVar3,param_2);
                    *(undefined4 *)((longlong)puVar22 + 0x84) = *puVar26;
                    *(undefined4 *)(puVar22 + 0x11) = puVar26[-1];
                    goto LAB_14539e727;
                  }
                }
                else {
                  *(undefined8 *)((longlong)auStack_b0 + lVar4) = 0x14539e64a;
                  cVar7 = FUN_14539f080(lVar10 + 0x30);
                  if ((cVar7 != '\0') && (uVar15 < *(uint *)(lVar10 + 0x3c))) goto LAB_14539e65c;
                }
                *(int *)(*param_1 + 0x28) = *(int *)(*param_1 + 0x28) + -1;
              }
            }
            else {
              *(undefined8 *)((longlong)auStack_b0 + lVar4) = 0x14539e59f;
              cVar7 = FUN_14539eed0(lVar10 + 0x20);
              if ((cVar7 != '\0') && (uVar15 < *(uint *)(lVar10 + 0x2c))) goto LAB_14539e5b0;
            }
LAB_14539e727:
            uVar15 = (int)uVar21 + 1;
            uVar21 = (ulonglong)uVar15;
            puVar27 = puVar27 + 4;
            puVar26 = puVar26 + 0x10;
          } while (uVar15 < local_84);
          uVar25 = (ulonglong)local_84;
          puVar19 = local_78;
          puVar11 = local_60;
        }
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 !=
             (ulonglong *)(*(longlong *)(param_4 + 0xd0) + (ulonglong)*(uint *)(param_4 + 0xd8) * 8)
            );
  }
  return;
}



// FUNCTION 14539e7a0 FUN_14539e7a0 body=293 status=ok
// SIG undefined FUN_14539e7a0(void)

undefined8 FUN_14539e7a0(void *param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  __uint64 _Var5;
  ulonglong uVar6;
  int iVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x2c);
  iVar7 = (uVar1 >> 1) + uVar1;
  pvVar3 = *(void **)((longlong)param_1 + 0x20);
  uVar2 = *(uint *)((longlong)param_1 + 0x28);
  if (uVar1 == 0) {
    iVar7 = 1;
  }
  _Var5 = (ulonglong)(iVar7 + uVar1) << 3;
  pvVar4 = param_1;
  if (pvVar3 == (void *)0x0) {
    if (0x20 < _Var5) {
      pvVar4 = AK::MemoryMgr::Malign(4,_Var5,0x10);
    }
    if (pvVar4 != (void *)0x0) {
      if ((*(void **)((longlong)param_1 + 0x20) != (void *)0x0) &&
         (*(void **)((longlong)param_1 + 0x20) != pvVar4)) {
        uVar6 = 0;
        if ((ulonglong)uVar2 != 0) {
          do {
            *(undefined8 *)((longlong)pvVar4 + uVar6 * 8) =
                 *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x20) + uVar6 * 8);
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar2);
        }
        if (param_1 != *(void **)((longlong)param_1 + 0x20)) {
          AK::MemoryMgr::Free(4,*(void **)((longlong)param_1 + 0x20));
        }
      }
      goto LAB_14539e8a7;
    }
  }
  else {
    if (0x20 < _Var5) {
      if (param_1 == pvVar3) {
        pvVar4 = AK::MemoryMgr::Malign(4,_Var5,0x10);
        if (pvVar4 == (void *)0x0) {
          return 0;
        }
        memcpy(pvVar4,param_1,(ulonglong)(uVar2 * 8));
        goto LAB_14539e8a7;
      }
      pvVar4 = AK::MemoryMgr::ReallocAligned(4,pvVar3,_Var5,0x10);
    }
    if (pvVar4 != (void *)0x0) {
LAB_14539e8a7:
      *(void **)((longlong)param_1 + 0x20) = pvVar4;
      *(uint *)((longlong)param_1 + 0x2c) = iVar7 + uVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14539e8d0 FUN_14539e8d0 body=177 status=ok
// SIG undefined FUN_14539e8d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14539e8d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149c27d90;
  if ((void *)param_1[4] != (void *)0x0) {
    *(undefined4 *)(param_1 + 5) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[4]);
    param_1[4] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    *(undefined4 *)(param_1 + 7) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[6]);
    param_1[6] = 0;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  *param_1 = &PTR_FUN_149c27d80;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
  }
  puVar1 = (undefined8 *)param_1[3];
  puVar2 = (undefined8 *)param_1[2];
  if (param_1 != DAT_14c79c330) {
    puVar1[2] = (undefined8 *)param_1[2];
    puVar2 = DAT_14c79c330;
  }
  DAT_14c79c330 = puVar2;
  if (param_1 == DAT_14c79c328) {
    DAT_14c79c328 = puVar1;
  }
  _DAT_14c79c320 = _DAT_14c79c320 + -1;
  *param_1 = &PTR_FUN_1499d1428;
  return;
}



// FUNCTION 14539e990 FUN_14539e990 body=490 status=ok
// SIG undefined FUN_14539e990(void)

float FUN_14539e990(longlong param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  byte local_res8 [8];
  byte local_res10 [8];
  float local_res18 [2];
  ulonglong uVar6;
  
  uVar6 = 0;
  fVar8 = 1e+10;
  *(undefined4 *)(param_2 + 1) = 0;
  local_res8[0] = DAT_14c7389c8;
  local_res10[0] = DAT_14c7fdf98;
  local_res18[0] = 1.0;
  if (param_3 != 0) {
    FUN_1453a1df0(param_3,local_res8,local_res10,local_res18);
  }
  fVar9 = fVar8;
  if (*(int *)(param_1 + 0x28) != 0) {
    do {
      bVar1 = *(byte *)(uVar6 + *(longlong *)(param_1 + 0x30));
      fVar9 = fVar8;
      if (((local_res8[0] & bVar1) != 0) && ((local_res10[0] & bVar1) == 0)) {
        uVar5 = *(uint *)(param_2 + 1);
        puVar7 = (undefined8 *)(uVar6 * 0x90 + *(longlong *)(param_1 + 0x20));
        if ((uVar5 < *(uint *)((longlong)param_2 + 0xc)) ||
           ((cVar3 = FUN_14539eed0(param_2), cVar3 != '\0' &&
            (uVar5 < *(uint *)((longlong)param_2 + 0xc))))) {
          uVar5 = *(uint *)(param_2 + 1);
          *(uint *)(param_2 + 1) = uVar5 + 1;
          puVar4 = (undefined8 *)((ulonglong)uVar5 * 0x90 + *param_2);
          if (puVar4 != (undefined8 *)0x0) {
            puVar4[6] = 0;
            *(undefined4 *)(puVar4 + 7) = 0;
            *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x3f800000;
            *(undefined4 *)(puVar4 + 8) = 0x3f800000;
            *(undefined8 *)((longlong)puVar4 + 0x44) = 0x3f800000;
            *(undefined8 *)((longlong)puVar4 + 0x4c) = 0;
            *(undefined8 *)((longlong)puVar4 + 0x54) = 0;
            *(undefined4 *)((longlong)puVar4 + 0x5c) = 0x42c80000;
            *(undefined4 *)(puVar4 + 0xc) = 0x3f800000;
            *(undefined4 *)((longlong)puVar4 + 100) = 0xffffffff;
            *(undefined4 *)(puVar4 + 0xd) = 0;
            puVar4[0xe] = 0;
            puVar4[0xf] = 0x3f800000;
            *(undefined4 *)(puVar4 + 0x10) = 0;
            *(undefined4 *)((longlong)puVar4 + 0x84) = 0xbf800000;
            *(undefined4 *)(puVar4 + 0x11) = 0x3f800000;
            uVar2 = puVar7[1];
            *puVar4 = *puVar7;
            puVar4[1] = uVar2;
            uVar2 = puVar7[3];
            puVar4[2] = puVar7[2];
            puVar4[3] = uVar2;
            uVar2 = puVar7[5];
            puVar4[4] = puVar7[4];
            puVar4[5] = uVar2;
            uVar2 = puVar7[7];
            puVar4[6] = puVar7[6];
            puVar4[7] = uVar2;
            uVar2 = puVar7[9];
            puVar4[8] = puVar7[8];
            puVar4[9] = uVar2;
            uVar2 = puVar7[0xb];
            puVar4[10] = puVar7[10];
            puVar4[0xb] = uVar2;
            uVar2 = puVar7[0xd];
            puVar4[0xc] = puVar7[0xc];
            puVar4[0xd] = uVar2;
            puVar4[0xe] = puVar7[0xe];
            *(undefined4 *)((longlong)puVar4 + 0x84) = *(undefined4 *)((longlong)puVar7 + 0x84);
            *(undefined4 *)(puVar4 + 0x11) = *(undefined4 *)(puVar7 + 0x11);
            *(float *)((longlong)puVar4 + 0x54) =
                 local_res18[0] * *(float *)((longlong)puVar4 + 0x54);
            fVar9 = *(float *)(puVar7 + 6);
            if (fVar8 <= *(float *)(puVar7 + 6)) {
              fVar9 = fVar8;
            }
          }
        }
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      fVar8 = fVar9;
    } while (uVar5 < *(uint *)(param_1 + 0x28));
  }
  return fVar9;
}



// FUNCTION 14539eb80 FUN_14539eb80 body=307 status=ok
// SIG undefined FUN_14539eb80(void)

void FUN_14539eb80(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_58;
  uint local_50;
  undefined4 local_4c;
  undefined1 local_48 [32];
  undefined1 *local_28;
  ulonglong local_20;
  undefined4 local_18;
  undefined8 local_14;
  
  local_28 = (undefined1 *)0x0;
  local_20 = 0;
  local_18 = 0;
  local_50 = 0xffffffff;
  local_4c = 0x7f7fffff;
  local_14 = 0x42c80000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  local_58 = param_1;
  if (*(code **)(param_1 + 0x40) != (code *)0x0) {
    (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 8),&local_58);
  }
  FUN_14539e100(&local_58,1);
  lVar2 = *(longlong *)(*(longlong *)(local_58 + 8) + 8);
  uVar3 = FUN_1450d2450();
  if (*(char *)(local_58 + 0x4a) != '\0') {
    FUN_14539e2c0(&local_58,lVar2,local_48,uVar3);
  }
  FUN_14539e100(&local_58,1);
  if (local_50 != 0xffffffff) {
    lVar5 = (ulonglong)local_50 * 0x90 + *(longlong *)(local_58 + 0x20);
    lVar4 = FUN_145077820(*(undefined8 *)(lVar5 + 0x70));
    if ((lVar4 != 0) && (*(short *)(local_58 + 0x48) != 0)) {
      FUN_14539ecc0(local_58,lVar5,lVar4,(undefined4)local_14,local_14._4_4_);
    }
  }
  puVar1 = (uint *)(lVar2 + 0x7c);
  *puVar1 = *puVar1 & 0xfffffffe;
  if ((local_28 != (undefined1 *)0x0) &&
     (local_20 = local_20 & 0xffffffff00000000, local_48 != local_28)) {
    AK::MemoryMgr::Free(4,local_28);
  }
  return;
}



// FUNCTION 14539ecc0 FUN_14539ecc0 body=523 status=ok
// SIG undefined FUN_14539ecc0(void)

void FUN_14539ecc0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  float local_res8 [2];
  float local_res10 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined1 local_40;
  undefined1 local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_48 = 0;
  local_30 = 0;
  local_58 = *(undefined8 *)(param_1 + 8);
  local_40 = 0xff;
  local_38 = 0xff;
  if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
    FUN_14507f440(g_pGameSyncMgr,1,&local_58,*(undefined4 *)(param_2 + 0x30));
  }
  if ((*(byte *)(param_1 + 0x48) >> 3 & 1) != 0) {
    FUN_14507f440(g_pGameSyncMgr,4,&local_58,*(float *)(param_2 + 0x34) * 57.295776);
  }
  if ((*(byte *)(param_1 + 0x48) >> 6 & 1) != 0) {
    FUN_14507f440(g_pGameSyncMgr,7,&local_58,*(float *)(param_2 + 0x38) * 57.295776);
  }
  if ((*(byte *)(param_1 + 0x48) & 6) != 0) {
    local_res8[0] = 0.0;
    local_res10[0] = 0.0;
    FUN_14507abb0(param_3,param_2,local_res8,local_res10);
    if ((*(byte *)(param_1 + 0x48) >> 1 & 1) != 0) {
      FUN_14507f440(g_pGameSyncMgr,2,&local_58,local_res8[0] * 57.295776);
    }
    if ((*(byte *)(param_1 + 0x48) >> 2 & 1) != 0) {
      FUN_14507f440(g_pGameSyncMgr,3,&local_58,local_res10[0] * 57.295776);
    }
  }
  if ((*(byte *)(param_1 + 0x48) >> 4 & 1) != 0) {
    FUN_14507f440(g_pGameSyncMgr,5,&local_58,*(undefined4 *)(param_2 + 0x4c));
  }
  if ((*(byte *)(param_1 + 0x48) >> 5 & 1) != 0) {
    FUN_14507f440(g_pGameSyncMgr,6,&local_58,*(undefined4 *)(param_2 + 0x48));
  }
  if (*(char *)(param_1 + 0x48) < '\0') {
    FUN_14507f440(g_pGameSyncMgr,8,&local_58,param_4);
  }
  if ((*(byte *)(param_1 + 0x49) & 1) != 0) {
    FUN_14507f440(g_pGameSyncMgr,9,&local_58,param_5);
  }
  return;
}



// FUNCTION 14539eed0 FUN_14539eed0 body=421 status=ok
// SIG undefined FUN_14539eed0(void)

undefined8 FUN_14539eed0(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  __uint64 _Var8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  iVar5 = (uVar3 >> 1) + uVar3;
  if (uVar3 == 0) {
    iVar5 = 1;
  }
  _Var8 = (ulonglong)(iVar5 + uVar3) * 0x90;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar7 = AK::MemoryMgr::Malloc(0,_Var8);
    if (pvVar7 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar7)) {
        if (uVar10 != 0) {
          lVar9 = (longlong)pvVar7 + 0x34;
          do {
            if ((undefined8 *)(lVar9 + -0x34) != (undefined8 *)0x0) {
              *(undefined8 *)(lVar9 + -4) = 0;
              *(undefined4 *)(lVar9 + 4) = 0;
              *(undefined4 *)(lVar9 + 8) = 0x3f800000;
              *(undefined4 *)(lVar9 + 0xc) = 0x3f800000;
              *(undefined8 *)(lVar9 + 0x10) = 0x3f800000;
              *(undefined8 *)(lVar9 + 0x18) = 0;
              *(undefined8 *)(lVar9 + 0x20) = 0;
              *(undefined4 *)(lVar9 + 0x28) = 0x42c80000;
              *(undefined4 *)(lVar9 + 0x2c) = 0x3f800000;
              *(undefined4 *)(lVar9 + 0x30) = 0xffffffff;
              *(undefined4 *)(lVar9 + 0x34) = 0;
              *(undefined8 *)(lVar9 + 0x3c) = 0;
              *(undefined8 *)(lVar9 + 0x44) = 0x3f800000;
              *(undefined4 *)(lVar9 + 0x4c) = 0;
              *(undefined4 *)(lVar9 + 0x50) = 0xbf800000;
              *(undefined4 *)(lVar9 + 0x54) = 0x3f800000;
            }
            lVar4 = *param_1;
            lVar1 = (-0x34 - (longlong)pvVar7) + lVar9;
            uVar6 = ((undefined8 *)(lVar1 + lVar4))[1];
            *(undefined8 *)(lVar9 + -0x34) = *(undefined8 *)(lVar1 + lVar4);
            *(undefined8 *)(lVar9 + -0x2c) = uVar6;
            puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar4);
            uVar6 = puVar2[1];
            *(undefined8 *)(lVar9 + -0x24) = *puVar2;
            *(undefined8 *)(lVar9 + -0x1c) = uVar6;
            puVar2 = (undefined8 *)(lVar1 + 0x20 + lVar4);
            uVar6 = puVar2[1];
            *(undefined8 *)(lVar9 + -0x14) = *puVar2;
            *(undefined8 *)(lVar9 + -0xc) = uVar6;
            puVar2 = (undefined8 *)(lVar1 + 0x30 + lVar4);
            uVar6 = puVar2[1];
            *(undefined8 *)(lVar9 + -4) = *puVar2;
            *(undefined8 *)(lVar9 + 4) = uVar6;
            puVar2 = (undefined8 *)(lVar1 + 0x40 + lVar4);
            uVar6 = puVar2[1];
            *(undefined8 *)(lVar9 + 0xc) = *puVar2;
            *(undefined8 *)(lVar9 + 0x14) = uVar6;
            puVar2 = (undefined8 *)(lVar1 + 0x50 + lVar4);
            uVar6 = puVar2[1];
            *(undefined8 *)(lVar9 + 0x1c) = *puVar2;
            *(undefined8 *)(lVar9 + 0x24) = uVar6;
            puVar2 = (undefined8 *)(lVar1 + 0x60 + lVar4);
            uVar6 = puVar2[1];
            *(undefined8 *)(lVar9 + 0x2c) = *puVar2;
            *(undefined8 *)(lVar9 + 0x34) = uVar6;
            puVar2 = (undefined8 *)(lVar1 + 0x70 + lVar4);
            uVar6 = puVar2[1];
            *(undefined8 *)(lVar9 + 0x3c) = *puVar2;
            *(undefined8 *)(lVar9 + 0x44) = uVar6;
            puVar2 = (undefined8 *)(lVar1 + 0x80 + lVar4);
            uVar6 = puVar2[1];
            *(undefined8 *)(lVar9 + 0x4c) = *puVar2;
            *(undefined8 *)(lVar9 + 0x54) = uVar6;
            uVar10 = uVar10 - 1;
            lVar9 = lVar9 + 0x90;
          } while (uVar10 != 0);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14539f058;
    }
  }
  else {
    pvVar7 = AK::MemoryMgr::Realloc(0,(void *)*param_1,_Var8);
    if (pvVar7 != (void *)0x0) {
LAB_14539f058:
      *param_1 = (longlong)pvVar7;
      *(uint *)((longlong)param_1 + 0xc) = iVar5 + uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14539f080 FUN_14539f080 body=185 status=ok
// SIG undefined FUN_14539f080(void)

undefined8 FUN_14539f080(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)((longlong)param_1 + 0xc);
  uVar1 = *(uint *)(param_1 + 1);
  iVar2 = (uVar5 >> 1) + uVar5;
  if (uVar5 == 0) {
    iVar2 = 1;
  }
  uVar5 = iVar2 + uVar5;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar3 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar5);
    if (pvVar3 != (void *)0x0) {
      if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar3)) {
        uVar4 = 0;
        if ((ulonglong)uVar1 != 0) {
          do {
            *(undefined1 *)(uVar4 + (longlong)pvVar3) = *(undefined1 *)(uVar4 + *param_1);
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar1);
        }
        AK::MemoryMgr::Free(0,(void *)*param_1);
      }
      goto LAB_14539f11c;
    }
  }
  else {
    pvVar3 = AK::MemoryMgr::Realloc(0,(void *)*param_1,(ulonglong)uVar5);
    if (pvVar3 != (void *)0x0) {
LAB_14539f11c:
      *param_1 = (longlong)pvVar3;
      *(uint *)((longlong)param_1 + 0xc) = uVar5;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14539f140 FUN_14539f140 body=12 status=ok
// SIG undefined FUN_14539f140(void)

longlong FUN_14539f140(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return param_1;
}



// FUNCTION 14539f150 FUN_14539f150 body=53 status=ok
// SIG undefined FUN_14539f150(void)

void FUN_14539f150(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14539f190 FUN_14539f190 body=53 status=ok
// SIG undefined FUN_14539f190(void)

void FUN_14539f190(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0x14);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 14539f1d0 FUN_14539f1d0 body=48 status=ok
// SIG undefined FUN_14539f1d0(void)

undefined4 * FUN_14539f1d0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 14539f200 FUN_14539f200 body=3 status=ok
// SIG undefined FUN_14539f200(void)

void FUN_14539f200(void)

{
  return;
}



// FUNCTION 14539f210 FUN_14539f210 body=81 status=ok
// SIG undefined FUN_14539f210(void)

void FUN_14539f210(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  if ((*(uint *)(param_1 + 0x30) & 0x7fffffff) != 0) {
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 8 + uVar3 * 0x18);
      if (0 < iVar1) {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar3 * 0x18) + -4 + (longlong)iVar1 * 0x10)
             = *(undefined4 *)(param_1 + 0x14);
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < (*(uint *)(param_1 + 0x30) & 0x7fffffff));
  }
  return;
}



// FUNCTION 14539f270 FUN_14539f270 body=56 status=ok
// SIG undefined FUN_14539f270(void)

void FUN_14539f270(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1450b4380(DAT_14c790fd0,param_2,*(undefined8 *)(param_1 + 0x28),
                *(uint *)(param_1 + 0x30) & 0x7fffffff,*(undefined4 *)(param_1 + 0x10),
                (byte)(*(uint *)(param_1 + 0x30) >> 0x1f),param_3);
  return;
}



// FUNCTION 14539f2b0 FUN_14539f2b0 body=237 status=ok
// SIG undefined FUN_14539f2b0(void)

undefined8 FUN_14539f2b0(longlong param_1,float *param_2,int param_3,longlong param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((*(int *)(param_1 + 0x20) != param_3) || ((*(uint *)(param_1 + 0x30) & 0x7fffffff) != param_5)
     ) {
    return 1;
  }
  pfVar3 = *(float **)(param_1 + 0x18);
  uVar5 = 0;
  if (param_5 != 0) {
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x28) + 8 + uVar5 * 0x18);
      if (iVar1 != *(int *)(param_4 + 4 + uVar5 * 8)) {
        return 1;
      }
      if (iVar1 != 0) {
        iVar2 = 0;
        if (0 < iVar1 + -1) {
          do {
            if (*pfVar3 != *param_2) {
              return 1;
            }
            if (pfVar3[1] != param_2[1]) {
              return 1;
            }
            if (pfVar3[2] != param_2[2]) {
              return 1;
            }
            if (param_2[3] != pfVar3[3]) {
              return 1;
            }
            param_2 = param_2 + 4;
            pfVar3 = pfVar3 + 4;
            iVar2 = iVar2 + 1;
          } while (iVar2 < iVar1 + -1);
        }
        if (*pfVar3 != *param_2) {
          return 1;
        }
        if (pfVar3[1] != param_2[1]) {
          return 1;
        }
        if (pfVar3[2] != param_2[2]) {
          return 1;
        }
        param_2 = param_2 + 4;
        pfVar3 = pfVar3 + 4;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < param_5);
  }
  return 0;
}



// FUNCTION 14539f3a0 FUN_14539f3a0 body=156 status=ok
// SIG undefined FUN_14539f3a0(void)

void FUN_14539f3a0(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    AK::MemoryMgr::Free(2,*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    AK::MemoryMgr::Free(2,*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    if (*(short *)(puVar1 + 2) == 1) {
      if ((void *)*puVar1 != (void *)0x0) {
        *(undefined4 *)(puVar1 + 1) = 0;
        AK::MemoryMgr::Free(0,(void *)*puVar1);
        *puVar1 = 0;
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      AK::MemoryMgr::Free(0,puVar1);
    }
    else {
      *(short *)(puVar1 + 2) = *(short *)(puVar1 + 2) + -1;
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 14539f440 FUN_14539f440 body=458 status=ok
// SIG undefined FUN_14539f440(void)

undefined8 FUN_14539f440(longlong param_1,void *param_2,uint param_3,uint *param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar7 = 0;
  uVar5 = 1;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    AK::MemoryMgr::Free(2,*(void **)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    AK::MemoryMgr::Free(2,*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((((param_3 == 0) || (param_5 == 0)) || (param_2 == (void *)0x0)) || (param_4 == (uint *)0x0))
  {
    uVar5 = 0x1f;
  }
  else {
    pvVar3 = AK::MemoryMgr::Malloc(2,(ulonglong)(param_3 << 4));
    *(void **)(param_1 + 0x18) = pvVar3;
    if (pvVar3 != (void *)0x0) {
      memcpy(pvVar3,param_2,(ulonglong)(param_3 << 4));
      *(uint *)(param_1 + 0x20) = param_3;
      pvVar3 = AK::MemoryMgr::Malloc(2,(ulonglong)(param_5 * 0x18));
      *(void **)(param_1 + 0x28) = pvVar3;
      if (pvVar3 != (void *)0x0) {
        *(uint *)(param_1 + 0x30) =
             *(uint *)(param_1 + 0x30) ^ (*(uint *)(param_1 + 0x30) ^ param_5) & 0x7fffffff;
        uVar4 = uVar7;
        puVar8 = param_4;
        uVar10 = uVar7;
        if (param_5 != 0) {
          do {
            uVar6 = *param_4;
            puVar1 = param_4 + 1;
            param_4 = param_4 + 2;
            *(uint *)(uVar4 + 8 + *(longlong *)(param_1 + 0x28)) = *puVar1;
            if (param_3 <= *puVar8) {
              uVar5 = 2;
              break;
            }
            uVar9 = (int)uVar10 + 1;
            *(ulonglong *)(uVar4 + *(longlong *)(param_1 + 0x28)) =
                 (ulonglong)uVar6 * 0x10 + *(longlong *)(param_1 + 0x18);
            *(undefined4 *)(uVar4 + 0xc + *(longlong *)(param_1 + 0x28)) = 0;
            *(undefined4 *)(uVar4 + 0x10 + *(longlong *)(param_1 + 0x28)) = 0;
            *(undefined4 *)(uVar4 + 0x14 + *(longlong *)(param_1 + 0x28)) = 0;
            uVar4 = uVar4 + 0x18;
            puVar8 = puVar8 + 2;
            uVar10 = (ulonglong)uVar9;
          } while (uVar9 < param_5);
        }
        goto LAB_14539f5a7;
      }
    }
    uVar5 = 0x34;
  }
LAB_14539f5a7:
  if ((*(uint *)(param_1 + 0x30) & 0x7fffffff) != 0) {
    do {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + 8 + uVar7 * 0x18);
      if (0 < iVar2) {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar7 * 0x18) + -4 + (longlong)iVar2 * 0x10)
             = *(undefined4 *)(param_1 + 0x14);
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < (*(uint *)(param_1 + 0x30) & 0x7fffffff));
  }
  return uVar5;
}



// FUNCTION 14539f610 FUN_14539f610 body=122 status=ok
// SIG undefined FUN_14539f610(void)

void FUN_14539f610(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    if (*(short *)(puVar1 + 2) == 1) {
      if ((void *)*puVar1 != (void *)0x0) {
        *(undefined4 *)(puVar1 + 1) = 0;
        AK::MemoryMgr::Free(0,(void *)*puVar1);
        *puVar1 = 0;
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      AK::MemoryMgr::Free(0,puVar1);
      *(undefined8 *)(param_1 + 0x40) = 0;
      return;
    }
    *(short *)(puVar1 + 2) = *(short *)(puVar1 + 2) + -1;
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



// FUNCTION 14539f690 FUN_14539f690 body=154 status=ok
// SIG undefined FUN_14539f690(void)

void FUN_14539f690(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_149d430d0;
  pbVar1 = (byte *)param_1[3];
  if (pbVar1 != (byte *)0x0) {
    if (pbVar1 + 1 != pbVar1 + (ulonglong)*pbVar1 + 1) {
      pbVar2 = pbVar1 + ((ulonglong)*pbVar1 + 8 & 0xfffffff8) + 8;
      lVar3 = (longlong)(pbVar1 + (ulonglong)*pbVar1 + 1) - (longlong)(pbVar1 + 1);
      do {
        if (*(longlong *)pbVar2 != 0) {
          FUN_1450b0bd0(DAT_14c791068,*(longlong *)pbVar2,param_1);
        }
        pbVar2 = pbVar2 + 0x10;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  if ((void *)param_1[3] != (void *)0x0) {
    AK::MemoryMgr::Free(0,(void *)param_1[3]);
  }
  param_1[3] = 0;
  return;
}



// FUNCTION 14539f730 FUN_14539f730 body=364 status=ok
// SIG undefined FUN_14539f730(void)

byte * FUN_14539f730(longlong param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    pbVar5 = *(byte **)(param_1 + 0x18);
    if (pbVar5 != (byte *)0x0) {
      uVar4 = 0;
      do {
        uVar1 = uVar4 + 1;
        if (pbVar5[uVar1] == (byte)param_2) {
          if (pbVar5 + (ulonglong)uVar4 * 0x10 + ((ulonglong)(*pbVar5 + 8) & 0xfffffff8) !=
              (byte *)0x0) {
            return pbVar5 + (ulonglong)uVar4 * 0x10 + ((ulonglong)(*pbVar5 + 8) & 0xfffffff8);
          }
          break;
        }
        uVar4 = uVar1;
      } while (uVar1 < *pbVar5);
    }
    cVar2 = FUN_1450d8890(*(longlong *)(param_1 + 8),
                          *(undefined4 *)(&DAT_149c27da0 + (longlong)param_2 * 4));
    if (cVar2 == '\0') {
      return (byte *)0x0;
    }
    if (*(byte **)(param_1 + 0x18) == (byte *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)**(byte **)(param_1 + 0x18);
    }
    uVar1 = uVar4 + 9;
    pcVar3 = AK::MemoryMgr::Malloc(0,(ulonglong)((uVar4 + 1) * 0x10 + (uVar1 & 0xfffffff8)));
    if (pcVar3 != (char *)0x0) {
      if (*(longlong *)(param_1 + 0x18) != 0) {
        memcpy(pcVar3 + 1,(void *)(*(longlong *)(param_1 + 0x18) + 1),(ulonglong)uVar4);
        memcpy(pcVar3 + ((ulonglong)uVar1 & 0xfffffff8),
               (void *)(((ulonglong)(uVar4 + 8) & 0xfffffff8) + *(longlong *)(param_1 + 0x18)),
               (ulonglong)uVar4 << 4);
        AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x18));
      }
      pcVar3[uVar4 + 1] = (byte)param_2;
      *pcVar3 = (char)uVar4 + '\x01';
      *(char **)(param_1 + 0x18) = pcVar3;
      pbVar5 = (byte *)(pcVar3 + ((ulonglong)uVar1 & 0xfffffff8) + (ulonglong)uVar4 * 0x10);
      if (pbVar5 != (byte *)0x0) {
        *(undefined4 *)pbVar5 = param_3;
        pbVar5[8] = 0;
        pbVar5[9] = 0;
        pbVar5[10] = 0;
        pbVar5[0xb] = 0;
        pbVar5[0xc] = 0;
        pbVar5[0xd] = 0;
        pbVar5[0xe] = 0;
        pbVar5[0xf] = 0;
        return pbVar5;
      }
    }
  }
  return (byte *)0x0;
}



// FUNCTION 14539f8a0 FUN_14539f8a0 body=317 status=ok
// SIG undefined FUN_14539f8a0(void)

void FUN_14539f8a0(longlong param_1,int param_2,float param_3,char param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  uint in_stack_ffffffffffffffc8;
  longlong *local_28;
  uint local_20;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    pbVar1 = *(byte **)(param_1 + 0x18);
    if (pbVar1 != (byte *)0x0) {
      uVar6 = 0;
      do {
        uVar4 = uVar6 + 1;
        if (pbVar1[uVar4] == (byte)param_2) {
          pfVar5 = (float *)(pbVar1 + (ulonglong)uVar6 * 0x10 +
                                      ((ulonglong)(*pbVar1 + 8) & 0xfffffff8));
          goto LAB_14539f8f3;
        }
        uVar6 = uVar4;
      } while (uVar4 < *pbVar1);
    }
    pfVar5 = (float *)0x0;
LAB_14539f8f3:
    plVar2 = *(longlong **)(param_1 + 8);
    if (param_2 == 0xb) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      local_20 = (uint)(lVar3 == 0) | local_20 & 0xffffff3c | 0x3c;
      local_28 = plVar2;
      if (lVar3 == 0) {
        (**(code **)(*plVar2 + 0xc0))(plVar2,param_3,&local_28,0);
      }
      else {
        (**(code **)(*plVar2 + 0xb8))
                  (plVar2,local_20,lVar3,&local_28,in_stack_ffffffffffffffc8 & 0xffffff00);
      }
    }
    else {
      local_28 = (longlong *)CONCAT26((short)((ulonglong)local_28 >> 0x30),0x100000000);
      local_20 = 0;
      (**(code **)(*plVar2 + 0x228))
                (plVar2,*(undefined4 *)(&DAT_149c27da0 + (longlong)param_2 * 4),&local_28,
                 *(undefined8 *)(param_1 + 0x10),param_3,param_3 - *pfVar5);
    }
    *pfVar5 = param_3;
    if (param_4 != '\0') {
      pfVar5[2] = 0.0;
      pfVar5[3] = 0.0;
    }
  }
  return;
}



// FUNCTION 14539f9e0 AkTlsAllocateSlot body=71 status=ok
// SIG undefined AkTlsAllocateSlot(void)

undefined8 AkTlsAllocateSlot(uint *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  
                    /* 0x539f9e0  371  AkTlsAllocateSlot */
  uVar2 = 0;
  puVar4 = &DAT_14c7389d0;
  do {
    uVar1 = *puVar4;
    uVar3 = uVar1 + 0x80 | (uint)uVar2 | 0x80000000;
    if (-1 < (int)uVar1) {
      LOCK();
      bVar5 = uVar1 == (&DAT_14c7389d0)[uVar2];
      if (bVar5) {
        (&DAT_14c7389d0)[uVar2] = uVar3;
      }
      UNLOCK();
      if (bVar5) {
        *param_1 = uVar3;
        return 0;
      }
    }
    uVar1 = (uint)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
    puVar4 = puVar4 + 1;
    if (7 < uVar1) {
      return 0xffffffff;
    }
  } while( true );
}



// FUNCTION 14539fa30 AkTlsFreeSlot body=33 status=ok
// SIG undefined AkTlsFreeSlot(void)

uint AkTlsFreeSlot(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
                    /* 0x539fa30  372  AkTlsFreeSlot */
  puVar1 = &DAT_14c7389d0 + (param_1 & 0x7f);
  uVar3 = *puVar1;
  if (uVar3 == param_1) {
    LOCK();
    uVar2 = *puVar1;
    if (uVar3 == *puVar1) {
      *puVar1 = uVar3 & 0x7fffffff;
      uVar2 = uVar3;
    }
    uVar3 = uVar2;
    UNLOCK();
  }
  return uVar3;
}



// FUNCTION 14539fa60 AkTlsGetValue body=75 status=ok
// SIG undefined AkTlsGetValue(void)

undefined8 AkTlsGetValue(uint param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
                    /* 0x539fa60  373  AkTlsGetValue */
  uVar2 = (ulonglong)(param_1 & 0x7f);
  if (((&DAT_14c7389d0)[uVar2] == param_1) &&
     (lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
     *(uint *)(lVar1 + 0x240 + uVar2 * 4) == param_1)) {
    return *(undefined8 *)(lVar1 + 0x260 + uVar2 * 8);
  }
  return 0;
}



// FUNCTION 14539fab0 AkTlsSetValue body=80 status=ok
// SIG undefined AkTlsSetValue(void)

void AkTlsSetValue(uint param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
                    /* 0x539fab0  374  AkTlsSetValue */
  uVar4 = (ulonglong)(param_1 & 0x7f);
  uVar1 = (&DAT_14c7389d0)[uVar4];
  if (uVar1 == param_1) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(uint *)(lVar2 + 0x240 + uVar4 * 4) = param_1;
    uVar3 = 0;
    if ((int)uVar1 < 0) {
      uVar3 = param_2;
    }
    *(undefined8 *)(lVar2 + 0x260 + uVar4 * 8) = uVar3;
  }
  return;
}



// FUNCTION 14539fb00 FUN_14539fb00 body=26 status=ok
// SIG undefined FUN_14539fb00(void)

undefined8 * FUN_14539fb00(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149d459a0;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 14539fb20 FUN_14539fb20 body=48 status=ok
// SIG undefined FUN_14539fb20(void)

void FUN_14539fb20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d459a0;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 14539fb50 FUN_14539fb50 body=66 status=ok
// SIG undefined FUN_14539fb50(void)

void FUN_14539fb50(longlong param_1)

{
  HANDLE pvVar1;
  
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    ResetEvent(*(HANDLE *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x10) = 1;
    return;
  }
  pvVar1 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  *(HANDLE *)(param_1 + 8) = pvVar1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 14539fba0 FUN_14539fba0 body=81 status=ok
// SIG undefined FUN_14539fba0(void)

undefined8 * FUN_14539fba0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d459a0;
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14539fc00 FUN_14539fc00 body=80 status=ok
// SIG undefined FUN_14539fc00(void)

undefined8 * FUN_14539fc00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d459a8;
  param_1[2] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  return param_1;
}



// FUNCTION 14539fc50 FUN_14539fc50 body=21 status=ok
// SIG undefined FUN_14539fc50(void)

void FUN_14539fc50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d459a8;
                    /* WARNING: Could not recover jumptable at 0x00014539fc5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 14539fc70 FUN_14539fc70 body=16 status=ok
// SIG undefined FUN_14539fc70(void)

void FUN_14539fc70(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014539fc79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WaitForSingleObject(*(HANDLE *)(param_2 + 8),0xffffffff);
  return;
}



// FUNCTION 14539fc80 FUN_14539fc80 body=15 status=ok
// SIG undefined FUN_14539fc80(void)

void FUN_14539fc80(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014539fc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetEvent(*(HANDLE *)(param_2 + 8));
  return;
}



// FUNCTION 14539fc90 FUN_14539fc90 body=63 status=ok
// SIG undefined FUN_14539fc90(void)

void FUN_14539fc90(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  if (*(int *)(param_1 + 0x60) == 1) {
    SetEvent(*(HANDLE *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x00014539fcc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 14539fcd0 FUN_14539fcd0 body=60 status=ok
// SIG undefined FUN_14539fcd0(void)

void FUN_14539fcd0(longlong param_1)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  piVar1 = (int *)(param_1 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ResetEvent(*(HANDLE *)(param_1 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x00014539fd05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 14539fd10 FUN_14539fd10 body=69 status=ok
// SIG undefined FUN_14539fd10(void)

void FUN_14539fd10(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  if ((*(int *)(param_1 + 100) == 1) && (*(char *)(param_1 + 0x68) == '\0')) {
    SetEvent(*(HANDLE *)(param_1 + 0x58));
  }
                    /* WARNING: Could not recover jumptable at 0x00014539fd4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 14539fd60 FUN_14539fd60 body=60 status=ok
// SIG undefined FUN_14539fd60(void)

void FUN_14539fd60(longlong param_1)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  piVar1 = (int *)(param_1 + 100);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ResetEvent(*(HANDLE *)(param_1 + 0x58));
  }
                    /* WARNING: Could not recover jumptable at 0x00014539fd95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 14539fda0 FUN_14539fda0 body=28 status=ok
// SIG undefined FUN_14539fda0(void)

void FUN_14539fda0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x68) != '\0') &&
     (*(undefined1 *)(param_1 + 0x68) = 0, 0 < *(int *)(param_1 + 100))) {
                    /* WARNING: Could not recover jumptable at 0x00014539fdb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetEvent(*(HANDLE *)(param_1 + 0x58));
    return;
  }
  return;
}



// FUNCTION 14539fdc0 FUN_14539fdc0 body=22 status=ok
// SIG undefined FUN_14539fdc0(void)

void FUN_14539fdc0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (0 < *(int *)(param_1 + 100)) {
                    /* WARNING: Could not recover jumptable at 0x00014539fdce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResetEvent(*(HANDLE *)(param_1 + 0x58));
    return;
  }
  return;
}



// FUNCTION 14539fde0 FUN_14539fde0 body=65 status=ok
// SIG undefined FUN_14539fde0(void)

void FUN_14539fde0(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  if (*(uint *)(param_1 + 8) <= *(uint *)(param_1 + 0x6c)) {
    ResetEvent(*(HANDLE *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00014539fe1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 14539fe30 FUN_14539fe30 body=67 status=ok
// SIG undefined FUN_14539fe30(void)

void FUN_14539fe30(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
  if (*(int *)(param_1 + 0x6c) == *(int *)(param_1 + 8) + -1) {
    SetEvent(*(HANDLE *)(param_1 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00014539fe6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 14539fe80 FUN_14539fe80 body=51 status=ok
// SIG undefined FUN_14539fe80(void)

undefined4 FUN_14539fe80(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return uVar1;
}



// FUNCTION 14539fec0 FUN_14539fec0 body=339 status=ok
// SIG undefined FUN_14539fec0(void)

int FUN_14539fec0(LPVOID param_1,int *param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  DWORD_PTR DVar4;
  uint uVar5;
  DWORD local_res8 [2];
  uint local_res10 [2];
  ULONG_PTR local_res18 [2];
  
  pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  *(HANDLE *)((longlong)param_1 + 0x50) = pvVar3;
  pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  *(HANDLE *)((longlong)param_1 + 0x58) = pvVar3;
  pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
  *(HANDLE *)((longlong)param_1 + 0x40) = pvVar3;
  pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,1,(LPCWSTR)0x0);
  *(HANDLE *)((longlong)param_1 + 0x48) = pvVar3;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,(ulonglong)(uint)param_2[2],FUN_1453a00e0,param_1
                        ,4,local_res8);
  *(HANDLE *)((longlong)param_1 + 0x10) = pvVar3;
  if (pvVar3 != (HANDLE)0x0) {
    FUN_145073560(pvVar3,local_res8[0],"AK::IOThread");
    BVar1 = SetThreadPriority(*(HANDLE *)((longlong)param_1 + 0x10),*param_2);
    if ((BVar1 != 0) || (*param_2 == 0x10000)) {
      uVar5 = param_2[1];
      if (uVar5 != 0) {
        pvVar3 = GetCurrentProcess();
        BVar1 = GetProcessAffinityMask(pvVar3,(PDWORD_PTR)local_res10,local_res18);
        if (BVar1 != 0) {
          uVar5 = uVar5 & local_res10[0];
        }
        DVar4 = SetThreadAffinityMask(*(HANDLE *)((longlong)param_1 + 0x10),(ulonglong)uVar5);
        if (DVar4 == 0) goto LAB_14539ffd2;
      }
      DVar2 = ResumeThread(*(HANDLE *)((longlong)param_1 + 0x10));
      if (DVar2 != 0) goto LAB_14539ffe0;
    }
LAB_14539ffd2:
    CloseHandle(*(HANDLE *)((longlong)param_1 + 0x10));
  }
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
LAB_14539ffe0:
  if (((*(longlong *)((longlong)param_1 + 0x10) != 0) &&
      (*(longlong *)((longlong)param_1 + 0x40) != 0)) &&
     (*(longlong *)((longlong)param_1 + 0x50) != 0)) {
    return 2 - (uint)(*(longlong *)((longlong)param_1 + 0x58) != 0);
  }
  return 2;
}



// FUNCTION 1453a0020 FUN_1453a0020 body=181 status=ok
// SIG undefined FUN_1453a0020(void)

void FUN_1453a0020(longlong param_1)

{
  if (*(HANDLE *)(param_1 + 0x40) != (HANDLE)0x0) {
    SetEvent(*(HANDLE *)(param_1 + 0x40));
    if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0x0) {
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x10),0xffffffff);
      CloseHandle(*(HANDLE *)(param_1 + 0x10));
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    CloseHandle(*(HANDLE *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x10) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(HANDLE *)(param_1 + 0x50) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(HANDLE *)(param_1 + 0x58) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(HANDLE *)(param_1 + 0x48) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1453a00e0 FUN_1453a00e0 body=228 status=ok
// SIG undefined FUN_1453a00e0(void)

undefined8 FUN_1453a00e0(longlong *param_1)

{
  char cVar1;
  DWORD DVar2;
  HANDLE local_38;
  longlong local_30;
  HANDLE local_28;
  longlong local_20;
  longlong local_18;
  
  AK::MemoryMgr::InitForThread();
  local_20 = param_1[10];
  local_38 = (HANDLE)param_1[8];
  local_18 = param_1[0xb];
  local_30 = param_1[9];
  local_28 = local_38;
  (**(code **)(*param_1 + 0x18))(param_1);
  while( true ) {
    DVar2 = WaitForMultipleObjectsEx(2,&local_38,0,0xffffffff,1);
    if (DVar2 == 0) break;
    DVar2 = WaitForMultipleObjectsEx(3,&local_28,0,0xffffffff,1);
    if (DVar2 == 0) break;
    if ((DVar2 == 1) || (DVar2 == 2)) goto LAB_1453a01a9;
    if (DVar2 != 0xc0) {
      if (DVar2 != 0x102) {
        AK::MemoryMgr::TermForThread();
        return 1;
      }
LAB_1453a01a9:
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  cVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar1 != '\0') {
    AK::MemoryMgr::TermForThread();
    return 0;
  }
  SleepEx(10,1);
  goto LAB_1453a01a9;
}



// FUNCTION 1453a01d0 FUN_1453a01d0 body=67 status=ok
// SIG undefined FUN_1453a01d0(void)

undefined8 * FUN_1453a01d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d459a8;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1453a0220 FUN_1453a0220 body=634 status=ok
// SIG undefined FUN_1453a0220(void)

undefined4 * FUN_1453a0220(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  param_1[0x24] = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  param_1[0x36] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  param_1[0x48] = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  param_1[0x4e] = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  param_1[0x5a] = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  param_1[0x60] = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  param_1[0x66] = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  param_1[0x72] = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  param_1[0x78] = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  param_1[0x7e] = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x82) = 0;
  param_1[0x84] = 0;
  *(undefined8 *)(param_1 + 0x86) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  param_1[0x8a] = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  param_1[0x90] = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  param_1[0x96] = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9a) = 0;
  param_1[0x9c] = 0;
  *(undefined8 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  param_1[0xa2] = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)(param_1 + 0xaa) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  param_1[0xae] = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb2) = 0;
  param_1[0xb4] = 0;
  *(undefined8 *)(param_1 + 0xb6) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  param_1[0xba] = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xbe) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xc2) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0xffffffff;
  return param_1;
}



// FUNCTION 1453a04a0 FUN_1453a04a0 body=357 status=ok
// SIG undefined FUN_1453a04a0(void)

undefined4
FUN_1453a04a0(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar7;
  void *pvVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar6;
  
  if ((((param_3 != 0) && (uVar9 = param_3 - 1, (param_3 & uVar9) == 0)) && (param_4 != 0)) &&
     (uVar3 = param_4 - 1, (param_4 & uVar3) == 0)) {
    plVar12 = (longlong *)0x0;
    *(uint *)(param_1 + 0x30c) = param_3;
    *(uint *)(param_1 + 0x310) = param_4;
    uVar4 = 0;
    plVar6 = plVar12;
    uVar11 = uVar4;
    for (; uVar3 != 0; uVar3 = uVar3 >> 1) {
      uVar11 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar11;
    }
    *(uint *)(param_1 + 0x314) = uVar11;
    plVar6 = plVar12;
    for (; uVar9 != 0; uVar9 = uVar9 >> 1) {
      uVar4 = (int)plVar6 + 1;
      plVar6 = (longlong *)(ulonglong)uVar4;
    }
    uVar9 = (uVar4 - uVar11) + 1;
    *(uint *)(param_1 + 0x318) = uVar9;
    if (uVar9 < 0x21) {
      iVar5 = param_2 - param_2 % param_3;
      *(int *)(param_1 + 0x308) = iVar5;
      if (iVar5 == 0) {
        return 2;
      }
      if (param_6 == 0) {
        *(uint *)(param_1 + 0x31c) = param_5 | 8;
        pvVar8 = AK::MemoryMgr::Malign(param_5 | 8,(ulonglong)param_2,param_4);
        *(void **)(param_1 + 0x300) = pvVar8;
        if (pvVar8 == (void *)0x0) {
          return 0x34;
        }
      }
      else {
        *(longlong *)(param_1 + 0x300) = param_6;
      }
      uVar9 = *(uint *)(param_1 + 0x308);
      do {
        uVar9 = uVar9 - *(int *)(param_1 + 0x30c);
        plVar7 = (longlong *)((ulonglong)uVar9 + *(longlong *)(param_1 + 0x300));
        plVar6 = plVar12;
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = 0;
          plVar6 = plVar7;
        }
        uVar10 = (ulonglong)(*(int *)(param_1 + 0x318) - 1);
        lVar2 = *(longlong *)(param_1 + 0x10 + uVar10 * 0x18);
        if (lVar2 == 0) {
          *(longlong **)(param_1 + 0x10 + uVar10 * 0x18) = plVar6;
          *(longlong **)(param_1 + 8 + uVar10 * 0x18) = plVar6;
          *plVar6 = 0;
        }
        else {
          *plVar6 = lVar2;
          *(longlong **)(param_1 + 0x10 + uVar10 * 0x18) = plVar6;
        }
        piVar1 = (int *)(param_1 + uVar10 * 0x18);
        *piVar1 = *piVar1 + 1;
      } while (uVar9 != 0);
      return 1;
    }
  }
  return 0x1f;
}



// FUNCTION 1453a0610 FUN_1453a0610 body=324 status=ok
// SIG undefined FUN_1453a0610(void)

undefined8 * FUN_1453a0610(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  
  puVar9 = (undefined8 *)0x0;
  if (0 < *(int *)(param_1 + 0x318)) {
    iVar6 = *(int *)(param_1 + 0x314);
    plVar11 = (longlong *)(param_1 + 0x10);
    puVar12 = puVar9;
    puVar5 = puVar9;
    do {
      iVar13 = (int)puVar5;
      if ((param_2 <= (uint)(1 << ((byte)iVar6 & 0x1f))) && (*plVar11 != 0)) {
        lVar4 = (longlong)iVar13;
        puVar12 = *(undefined8 **)(param_1 + 0x10 + lVar4 * 0x18);
        if (puVar12 == (undefined8 *)0x0) {
          return (undefined8 *)0x0;
        }
        puVar5 = (undefined8 *)*puVar12;
        if ((undefined8 *)*puVar12 == (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 8 + lVar4 * 0x18) = 0;
          puVar5 = puVar9;
        }
        *(undefined8 **)(param_1 + 0x10 + lVar4 * 0x18) = puVar5;
        *puVar12 = 0;
        piVar8 = (int *)(param_1 + lVar4 * 0x18);
        *piVar8 = *piVar8 + -1;
        iVar6 = *(int *)(param_1 + 0x300);
        iVar13 = iVar13 + -1;
        lVar4 = (longlong)iVar13;
        if (-1 < iVar13) {
          piVar8 = (int *)(param_1 + lVar4 * 0x18);
          do {
            uVar3 = 1 << ((char)*(undefined4 *)(param_1 + 0x314) + (char)iVar13 & 0x1fU);
            uVar10 = *(int *)(param_1 + 0x30c) - param_2;
            if ((uVar3 & uVar10) != 0) {
              puVar7 = (undefined8 *)
                       ((ulonglong)
                        ((*(int *)(param_1 + 0x30c) - (-uVar3 & uVar10)) + ((int)puVar12 - iVar6)) +
                       *(longlong *)(param_1 + 0x300));
              puVar5 = puVar9;
              if (puVar7 != (undefined8 *)0x0) {
                *puVar7 = 0;
                puVar5 = puVar7;
              }
              puVar2 = *(undefined8 **)(piVar8 + 4);
              puVar7 = puVar9;
              while ((puVar1 = puVar2, puVar1 != (undefined8 *)0x0 && (puVar1 < puVar5))) {
                puVar7 = puVar1;
                puVar2 = (undefined8 *)*puVar1;
              }
              *puVar5 = puVar1;
              if (puVar7 == (undefined8 *)0x0) {
                *(undefined8 **)(piVar8 + 4) = puVar5;
              }
              else {
                *puVar7 = puVar5;
              }
              if (puVar1 == (undefined8 *)0x0) {
                *(undefined8 **)(piVar8 + 2) = puVar5;
              }
              *piVar8 = *piVar8 + 1;
            }
            iVar13 = iVar13 + -1;
            piVar8 = piVar8 + -6;
            lVar4 = lVar4 + -1;
          } while (-1 < lVar4);
        }
        return puVar12;
      }
      puVar5 = (undefined8 *)(ulonglong)(iVar13 + 1);
      iVar6 = iVar6 + 1;
      puVar12 = (undefined8 *)((longlong)puVar12 + 1);
      plVar11 = plVar11 + 3;
    } while ((longlong)puVar12 < (longlong)*(int *)(param_1 + 0x318));
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1453a0760 FUN_1453a0760 body=400 status=ok
// SIG undefined FUN_1453a0760(void)

void FUN_1453a0760(longlong param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  
  piVar1 = (int *)(param_1 + (ulonglong)param_2 * 0x18);
  puVar2 = *(undefined8 **)(param_1 + 0x10 + (ulonglong)param_2 * 0x18);
  puVar3 = puVar2;
  puVar5 = (undefined8 *)0x0;
  while ((puVar7 = puVar3, puVar7 != (undefined8 *)0x0 && (puVar7 <= param_3))) {
    puVar5 = puVar7;
    puVar3 = (undefined8 *)*puVar7;
  }
  if (param_2 < *(int *)(param_1 + 0x318) - 1U) {
    bVar4 = (char)*(undefined4 *)(param_1 + 0x314) + (char)param_2;
    iVar8 = 1 << (bVar4 + 1 & 0x1f);
    if (((puVar5 != (undefined8 *)0x0) &&
        ((iVar8 - 1U & (int)puVar5 - *(int *)(param_1 + 0x300)) == 0)) &&
       ((longlong)param_3 - (longlong)puVar5 == (ulonglong)(uint)(1 << (bVar4 & 0x1f)))) {
      puVar3 = puVar2;
      puVar7 = (undefined8 *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        while (puVar6 = puVar3, puVar3 = (undefined8 *)*puVar6, puVar6 != puVar5) {
          puVar7 = puVar6;
          if (puVar3 == (undefined8 *)0x0) {
            FUN_1453a0760(param_1,param_2 + 1);
            return;
          }
        }
        if (puVar6 == puVar2) {
          *(undefined8 **)(piVar1 + 4) = puVar3;
        }
        else {
          *puVar7 = puVar3;
        }
        if (puVar6 == *(undefined8 **)(piVar1 + 2)) {
          *(undefined8 **)(piVar1 + 2) = puVar7;
        }
        *piVar1 = *piVar1 + -1;
      }
      FUN_1453a0760(param_1,param_2 + 1);
      return;
    }
    if (((puVar7 != (undefined8 *)0x0) &&
        ((iVar8 - 1U & (int)param_3 - *(int *)(param_1 + 0x300)) == 0)) &&
       ((longlong)puVar7 - (longlong)param_3 == (ulonglong)(uint)(1 << (bVar4 & 0x1f)))) {
      if (puVar7 == puVar2) {
        *(undefined8 *)(piVar1 + 4) = *puVar7;
      }
      else {
        *puVar5 = *puVar7;
      }
      if (puVar7 == *(undefined8 **)(piVar1 + 2)) {
        *(undefined8 **)(piVar1 + 2) = puVar5;
      }
      *piVar1 = *piVar1 + -1;
      FUN_1453a0760(param_1,param_2 + 1,param_3);
      return;
    }
  }
  *param_3 = puVar7;
  if (puVar5 == (undefined8 *)0x0) {
    *(undefined8 **)(piVar1 + 4) = param_3;
  }
  else {
    *puVar5 = param_3;
  }
  if (puVar7 == (undefined8 *)0x0) {
    *(undefined8 **)(piVar1 + 2) = param_3;
  }
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 1453a08f0 FUN_1453a08f0 body=178 status=ok
// SIG undefined FUN_1453a08f0(void)

undefined8 * FUN_1453a08f0(longlong param_1,uint param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  puVar4 = *(undefined8 **)(param_1 + 0x10 + uVar5 * 0x18);
  puVar3 = (undefined8 *)0x0;
  while ((puVar2 = puVar4, puVar2 != (undefined8 *)0x0 && (puVar2 <= param_3))) {
    puVar3 = puVar2;
    puVar4 = (undefined8 *)*puVar2;
  }
  if (((param_2 < *(int *)(param_1 + 0x318) - 1U) && (puVar2 != (undefined8 *)0x0)) &&
     ((longlong)puVar2 - (longlong)param_3 ==
      (ulonglong)(uint)(1 << ((char)*(undefined4 *)(param_1 + 0x314) + (char)param_2 & 0x1fU)))) {
    if (puVar2 == *(undefined8 **)(param_1 + 0x10 + uVar5 * 0x18)) {
      *(undefined8 *)(param_1 + 0x10 + uVar5 * 0x18) = *puVar2;
    }
    else {
      *puVar3 = *puVar2;
    }
    if (puVar2 == *(undefined8 **)(param_1 + 8 + uVar5 * 0x18)) {
      *(undefined8 **)(param_1 + 8 + uVar5 * 0x18) = puVar3;
    }
    piVar1 = (int *)(param_1 + uVar5 * 0x18);
    *piVar1 = *piVar1 + -1;
    return param_3;
  }
  *param_3 = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0x10 + uVar5 * 0x18) = param_3;
  }
  else {
    *puVar3 = param_3;
  }
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 8 + uVar5 * 0x18) = param_3;
  }
  piVar1 = (int *)(param_1 + uVar5 * 0x18);
  *piVar1 = *piVar1 + 1;
  return (undefined8 *)0x0;
}



// FUNCTION 1453a09b0 FUN_1453a09b0 body=521 status=ok
// SIG undefined FUN_1453a09b0(void)

void FUN_1453a09b0(longlong param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  
  cVar3 = (char)*(int *)(param_1 + 0x314);
  puVar11 = (undefined8 *)0x0;
  iVar5 = *(int *)(param_1 + 0x314) + 1;
  bVar4 = (byte)iVar5;
  puVar7 = puVar11;
  while (uVar8 = (uint)puVar7, (param_3 & (1 << (bVar4 & 0x1f)) - 1U) == 0) {
    iVar5 = iVar5 + 1;
    bVar4 = (byte)iVar5;
    puVar7 = (undefined8 *)(ulonglong)(uVar8 + 1);
  }
  cVar1 = (char)puVar7;
  uVar9 = 1 << (cVar3 + cVar1 & 0x1fU);
  puVar6 = puVar11;
  if (((param_3 & uVar9) != 0) && ((param_3 & uVar9 - 1) != 0)) {
    puVar6 = (undefined8 *)
             ((ulonglong)((-1 << (cVar3 + cVar1 + 1U & 0x1f) & param_3) + uVar9 + param_2) +
             *(longlong *)(param_1 + 0x300));
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      *puVar6 = 0;
      cVar3 = (char)*(undefined4 *)(param_1 + 0x314);
    }
  }
  puVar10 = (undefined8 *)
            ((ulonglong)((-1 << (cVar3 + '\x01' + cVar1 & 0x1fU) & param_3) + param_2) +
            *(longlong *)(param_1 + 0x300));
  puVar2 = puVar11;
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = 0;
    puVar2 = puVar10;
  }
  if (puVar6 == (undefined8 *)0x0) {
    if ((uVar8 < *(int *)(param_1 + 0x318) - 1U) &&
       ((uint)(1 << ((char)*(undefined4 *)(param_1 + 0x314) + '\x01' + cVar1 & 0x1fU)) < param_3)) {
      puVar2 = (undefined8 *)FUN_1453a08f0(param_1,puVar7);
    }
    else {
      FUN_1453a0760(param_1,puVar7);
      puVar2 = puVar11;
    }
  }
  iVar5 = *(int *)(param_1 + 0x318);
  uVar8 = uVar8 + 1;
  if (uVar8 < iVar5 - 1U) {
    do {
      bVar4 = (char)*(undefined4 *)(param_1 + 0x314) + (char)uVar8;
      uVar9 = 1 << (bVar4 & 0x1f);
      if (param_3 <= uVar9) break;
      if ((param_3 & uVar9) == 0) {
        if ((puVar2 != (undefined8 *)0x0) && ((uVar9 & *(int *)(param_1 + 0x30c) - param_3) != 0)) {
          puVar2 = (undefined8 *)FUN_1453a08f0(param_1,uVar8);
        }
      }
      else {
        puVar6 = (undefined8 *)
                 ((ulonglong)((-1 << (bVar4 + 1 & 0x1f) & param_3) + param_2) +
                 *(longlong *)(param_1 + 0x300));
        puVar7 = puVar11;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          iVar5 = *(int *)(param_1 + 0x318);
          puVar7 = puVar6;
        }
        bVar12 = puVar2 == (undefined8 *)0x0;
        puVar2 = puVar7;
        if (bVar12) {
          if ((uVar8 < iVar5 - 1U) &&
             ((uint)(1 << ((char)*(undefined4 *)(param_1 + 0x314) + '\x01' + (char)uVar8 & 0x1fU)) <
              param_3)) {
            puVar2 = (undefined8 *)FUN_1453a08f0(param_1,uVar8,puVar7);
          }
          else {
            FUN_1453a0760(param_1,uVar8,puVar7);
            puVar2 = puVar11;
          }
        }
      }
      iVar5 = *(int *)(param_1 + 0x318);
      uVar8 = uVar8 + 1;
    } while (uVar8 < iVar5 - 1U);
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1453a0760(param_1,uVar8);
  }
  return;
}



// FUNCTION 1453a0bc0 FUN_1453a0bc0 body=173 status=ok
// SIG undefined FUN_1453a0bc0(void)

undefined8 FUN_1453a0bc0(longlong *param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  __uint64 _Var3;
  ulonglong uVar4;
  uint uVar5;
  
  uVar5 = *(int *)((longlong)param_1 + 0xc) + param_2;
  uVar1 = *(uint *)(param_1 + 1);
  _Var3 = (ulonglong)uVar5 << 3;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(7,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar2)) {
      uVar4 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar2 + uVar4 * 8) = *(undefined8 *)(*param_1 + uVar4 * 8);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      AK::MemoryMgr::Free(7,(void *)*param_1);
    }
  }
  else {
    pvVar2 = AK::MemoryMgr::Realloc(7,(void *)*param_1,_Var3);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar2;
  *(uint *)((longlong)param_1 + 0xc) = uVar5;
  return 1;
}



// FUNCTION 1453a0c70 FUN_1453a0c70 body=69 status=ok
// SIG undefined FUN_1453a0c70(void)

undefined8 * FUN_1453a0c70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d459d8;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_1453a0220(param_1 + 7);
  *(undefined1 *)(param_1 + 0x6b) = 0;
  return param_1;
}



// FUNCTION 1453a0cc0 FUN_1453a0cc0 body=11 status=ok
// SIG undefined FUN_1453a0cc0(void)

void FUN_1453a0cc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149d459d8;
  return;
}



// FUNCTION 1453a0cd0 FUN_1453a0cd0 body=212 status=ok
// SIG undefined FUN_1453a0cd0(void)

undefined8 FUN_1453a0cd0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  
  *(undefined8 *)(param_1 + 0x360) = param_3;
  uVar3 = *(uint *)(param_2 + 1) / *(uint *)((longlong)param_2 + 0x14);
  iVar6 = *(uint *)((longlong)param_2 + 0x14) * uVar3;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (iVar6 != 0) {
    uVar5 = 0x200;
    if (0x200 < *(uint *)((longlong)param_2 + 0xc)) {
      do {
        uVar5 = uVar5 * 2;
      } while (uVar5 < *(uint *)((longlong)param_2 + 0xc));
    }
    for (uVar1 = uVar5; uVar1 < *(uint *)((longlong)param_2 + 0x14); uVar1 = uVar1 * 2) {
    }
    uVar4 = FUN_1453a04a0(param_1 + 0x38,iVar6,uVar1,uVar5,*(undefined4 *)(param_2 + 2),*param_2);
    if ((int)uVar4 != 1) {
      return uVar4;
    }
  }
  if ((*(uint *)(param_1 + 0x34) < uVar3) &&
     (cVar2 = FUN_1453a0bc0(param_1 + 0x28,uVar3 - *(uint *)(param_1 + 0x34)), cVar2 == '\0')) {
    return 2;
  }
  *(undefined1 *)(param_1 + 0x358) = *(undefined1 *)(param_2 + 6);
  return 1;
}



// FUNCTION 1453a0db0 FUN_1453a0db0 body=291 status=ok
// SIG undefined FUN_1453a0db0(void)

void FUN_1453a0db0(longlong param_1)

{
  void *pvVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x358) != '\0') {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    plVar2 = *(longlong **)(param_1 + 0x28);
    if (plVar2 != plVar2 + *(uint *)(param_1 + 0x30)) {
      do {
        *(undefined4 *)(*plVar2 + 0x20) = 0xffffffff;
        pvVar1 = (void *)*plVar2;
        if (*(short *)((longlong)pvVar1 + 0x24) == 0) {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)((longlong)pvVar1 + 0x1c);
          FUN_1453a09b0(param_1 + 0x38,*(int *)((longlong)pvVar1 + 8) - *(int *)(param_1 + 0x338),
                        *(undefined4 *)((longlong)pvVar1 + 0x1c));
          AK::MemoryMgr::Free(7,pvVar1);
          FUN_14539fda0(*(undefined8 *)(param_1 + 0x360));
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != (longlong *)
                         (*(longlong *)(param_1 + 0x28) + (ulonglong)*(uint *)(param_1 + 0x30) * 8))
      ;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  pvVar1 = *(void **)(param_1 + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    AK::MemoryMgr::Free(7,pvVar1);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  if ((*(void **)(param_1 + 0x338) != (void *)0x0) && (*(int *)(param_1 + 0x354) != -1)) {
    AK::MemoryMgr::Free(*(int *)(param_1 + 0x354),*(void **)(param_1 + 0x338));
    *(undefined8 *)(param_1 + 0x338) = 0;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  return;
}



// FUNCTION 1453a0ee0 FUN_1453a0ee0 body=164 status=ok
// SIG undefined FUN_1453a0ee0(void)

short FUN_1453a0ee0(longlong param_1,void *param_2)

{
  short sVar1;
  
  *(short *)((longlong)param_2 + 0x24) = *(short *)((longlong)param_2 + 0x24) + -1;
  sVar1 = *(short *)((longlong)param_2 + 0x24);
  if (sVar1 == 0) {
    if (*(int *)((longlong)param_2 + 0x20) == -1) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)((longlong)param_2 + 0x1c);
      FUN_1453a09b0(param_1 + 0x38,*(int *)((longlong)param_2 + 8) - *(int *)(param_1 + 0x338),
                    *(undefined4 *)((longlong)param_2 + 0x1c));
      AK::MemoryMgr::Free(7,param_2);
    }
    else {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + *(int *)((longlong)param_2 + 0x18);
      *(undefined8 *)((longlong)param_2 + 0x10) = 0;
      if (*(longlong *)(param_1 + 0x18) == 0) {
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *(void **)(param_1 + 0x18) = param_2;
        *(void **)(param_1 + 0x10) = param_2;
      }
      else {
        *(void **)(*(longlong *)(param_1 + 0x10) + 0x10) = param_2;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *(void **)(param_1 + 0x10) = param_2;
      }
    }
    FUN_14539fda0(*(undefined8 *)(param_1 + 0x360));
  }
  return sVar1;
}



// FUNCTION 1453a0f90 FUN_1453a0f90 body=560 status=ok
// SIG undefined FUN_1453a0f90(void)

void FUN_1453a0f90(longlong param_1,int param_2,uint param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  void *pvVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *_Dst;
  
  param_3 = ((param_2 - 1U) - (param_2 - 1U) % param_3) + param_3;
  do {
    while( true ) {
      uVar12 = 0;
      if (((param_3 <= *(uint *)(param_1 + 0x344)) && (param_3 != 0)) &&
         (lVar8 = FUN_1453a0610(param_1 + 0x38,param_3), lVar8 != 0)) {
        puVar9 = AK::MemoryMgr::Malloc(7,0x28);
        if (puVar9 != (undefined8 *)0x0) {
          puVar9[1] = lVar8;
          *(int *)(puVar9 + 3) = param_2;
          *puVar9 = 0;
          puVar9[2] = 0;
          *(undefined4 *)(puVar9 + 4) = 0xffffffff;
          *(undefined2 *)((longlong)puVar9 + 0x24) = 0;
          *(uint *)((longlong)puVar9 + 0x1c) = param_3;
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + param_3;
          *param_4 = (longlong)puVar9;
          *(short *)((longlong)puVar9 + 0x24) = *(short *)((longlong)puVar9 + 0x24) + 1;
          return;
        }
        FUN_1453a09b0(param_1 + 0x38,(int)lVar8 - *(int *)(param_1 + 0x338),param_3);
      }
      *param_4 = 0;
      lVar8 = *(longlong *)(param_1 + 0x18);
      *param_4 = lVar8;
      if (lVar8 == 0) {
        FUN_14539fdc0(*(undefined8 *)(param_1 + 0x360));
        return;
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - *(int *)(lVar8 + 0x18);
      lVar8 = *(longlong *)(param_1 + 0x18);
      if (lVar8 != 0) {
        uVar10 = *(ulonglong *)(lVar8 + 0x10);
        if (*(ulonglong *)(lVar8 + 0x10) == 0) {
          *(undefined8 *)(param_1 + 0x10) = 0;
          uVar10 = uVar12;
        }
        *(ulonglong *)(param_1 + 0x18) = uVar10;
        *(undefined8 *)(lVar8 + 0x10) = 0;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      }
      *(undefined8 *)(*param_4 + 0x10) = 0;
      puVar4 = (ulonglong *)*param_4;
      if (*(uint *)((longlong)puVar4 + 0x1c) != param_3) break;
      if (puVar4 != (ulonglong *)0x0) {
        *(short *)((longlong)puVar4 + 0x24) = *(short *)((longlong)puVar4 + 0x24) + 1;
        return;
      }
    }
    uVar2 = (uint)puVar4[4];
    if (uVar2 != 0xffffffff) {
      uVar3 = *(uint *)(param_1 + 0x30);
      iVar1 = uVar3 - 1;
      do {
        uVar13 = (int)uVar12 + (iVar1 - (int)uVar12) / 2;
        _Dst = (longlong *)((ulonglong)uVar13 * 8 + *(longlong *)(param_1 + 0x28));
        puVar5 = (ulonglong *)*_Dst;
        if (uVar2 < (uint)puVar5[4]) {
          iVar11 = -1;
        }
        else {
          if (uVar2 <= (uint)puVar5[4]) {
            if (*puVar5 < *puVar4) {
              iVar11 = -1;
              goto LAB_1453a10d4;
            }
            if (*puVar5 <= *puVar4) {
              if (puVar4[1] < puVar5[1]) {
                iVar11 = -1;
                goto LAB_1453a10d4;
              }
              if (puVar4[1] <= puVar5[1]) {
                if (uVar13 + 1 < uVar3) {
                  memmove(_Dst,_Dst + 1,(ulonglong)((uVar3 - uVar13) * 8 - 8));
                }
                *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
                break;
              }
            }
          }
          iVar11 = 1;
        }
LAB_1453a10d4:
        iVar7 = uVar13 - 1;
        if (-1 < iVar11) {
          uVar12 = (ulonglong)(uVar13 + 1);
          iVar7 = iVar1;
        }
        iVar1 = iVar7;
      } while ((int)uVar12 <= iVar1);
      *(undefined4 *)(puVar4 + 4) = 0xffffffff;
    }
    pvVar6 = (void *)*param_4;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)((longlong)pvVar6 + 0x1c);
    FUN_1453a09b0(param_1 + 0x38,*(int *)((longlong)pvVar6 + 8) - *(int *)(param_1 + 0x338),
                  *(undefined4 *)((longlong)pvVar6 + 0x1c));
    AK::MemoryMgr::Free(7,pvVar6);
    FUN_14539fda0(*(undefined8 *)(param_1 + 0x360));
    *param_4 = 0;
  } while( true );
}



// FUNCTION 1453a11c0 FUN_1453a11c0 body=472 status=ok
// SIG undefined FUN_1453a11c0(void)

uint FUN_1453a11c0(longlong param_1,uint param_2,ulonglong param_3,uint param_4,uint param_5,
                  char param_6,uint *param_7,undefined8 *param_8)

{
  int iVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  *param_8 = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 != 0) {
    iVar8 = iVar1 + -1;
    iVar13 = 0;
    do {
      uVar10 = iVar13 + (iVar8 - iVar13) / 2;
      puVar9 = *(ulonglong **)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar10 * 8);
      uVar11 = (uint)puVar9[4];
      iVar12 = (int)param_3;
      if (param_2 < uVar11) {
LAB_1453a1242:
        iVar8 = uVar10 - 1;
      }
      else {
        if (param_2 <= uVar11) {
          uVar7 = *puVar9;
          if (uVar7 < param_3) goto LAB_1453a1242;
          if (uVar7 <= param_3) {
            if ((puVar9 != (ulonglong *)0x0) &&
               (param_3 <= ((ulonglong)*param_7 - (ulonglong)param_4) + uVar7)) goto LAB_1453a12b3;
            break;
          }
        }
        iVar13 = uVar10 + 1;
      }
    } while (iVar13 <= iVar8);
    if ((((param_2 == uVar11) && (uVar7 = *puVar9, uVar7 <= param_3)) &&
        (iVar12 <= (int)(((int)puVar9[3] - param_4) + (int)uVar7))) ||
       ((((int)(uVar10 + 1) < iVar1 &&
         (puVar9 = *(ulonglong **)(*(longlong *)(param_1 + 0x28) + (ulonglong)(uVar10 + 1) * 8),
         param_2 == (uint)puVar9[4])) &&
        ((uVar7 = *puVar9, uVar7 <= param_3 &&
         (iVar12 <= (int)(((int)puVar9[3] - param_4) + (int)uVar7))))))) {
LAB_1453a12b3:
      uVar10 = iVar12 - (int)uVar7;
      uVar11 = (int)puVar9[3] - uVar10;
      if (((uVar11 <= *param_7) &&
          (((uVar11 % param_5 == 0 || ((param_6 != '\0' && (uVar11 == *param_7)))) &&
           (auVar3._8_8_ = 0, auVar3._0_8_ = puVar9[1] + (ulonglong)uVar10,
           SUB168(auVar3 % ZEXT416(param_5),0) == 0)))) && (param_4 <= uVar11)) {
        *param_7 = uVar11;
        if (*(short *)((longlong)puVar9 + 0x24) == SUB162(auVar3 % ZEXT416(param_5),0)) {
          puVar2 = *(ulonglong **)(param_1 + 0x18);
          puVar6 = (ulonglong *)0x0;
          puVar4 = puVar2;
          puVar5 = puVar2;
          if (puVar2 == (ulonglong *)0x0) {
LAB_1453a1333:
            if (puVar5 != (ulonglong *)0x0) {
              if (puVar5 == puVar2) {
                *(ulonglong *)(param_1 + 0x18) = puVar5[2];
              }
              else {
                puVar6[2] = puVar5[2];
              }
              if (puVar5 == *(ulonglong **)(param_1 + 0x10)) {
                *(ulonglong **)(param_1 + 0x10) = puVar6;
              }
              *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
            }
          }
          else {
            do {
              puVar5 = puVar4;
              if (puVar5 == puVar9) goto LAB_1453a1333;
              puVar4 = (ulonglong *)puVar5[2];
              puVar6 = puVar5;
            } while ((ulonglong *)puVar5[2] != (ulonglong *)0x0);
          }
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - (int)puVar9[3];
          puVar9[2] = 0;
        }
        *(short *)((longlong)puVar9 + 0x24) = *(short *)((longlong)puVar9 + 0x24) + 1;
        *param_8 = puVar9;
        return uVar10;
      }
    }
  }
  return 0;
}



// FUNCTION 1453a13a0 FUN_1453a13a0 body=741 status=ok
// SIG undefined FUN_1453a13a0(void)

undefined8
FUN_1453a13a0(longlong param_1,ulonglong *param_2,ulonglong param_3,uint param_4,ulonglong param_5,
             undefined4 param_6)

{
  void *_Dst;
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  
  if (*(char *)(param_1 + 0x358) == '\0') {
    *param_2 = param_5;
    *(undefined4 *)(param_2 + 3) = param_6;
    param_2[2] = param_3;
    return 1;
  }
  uVar15 = *(uint *)(param_1 + 0x30);
  uVar13 = 1;
  uVar9 = 0;
  uVar12 = (ulonglong)uVar15;
  bVar4 = false;
  if (uVar15 != 0) {
    iVar8 = uVar15 - 1;
    iVar18 = 0;
    do {
      uVar14 = iVar18 + (iVar8 - iVar18) / 2;
      puVar2 = *(ulonglong **)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar14 * 8);
      if ((uint)param_2[4] < (uint)puVar2[4]) {
        iVar7 = -1;
      }
      else {
        if ((uint)param_2[4] <= (uint)puVar2[4]) {
          if (*puVar2 < *param_2) {
            iVar7 = -1;
            goto LAB_1453a1479;
          }
          if (*puVar2 <= *param_2) {
            if (param_2[1] < puVar2[1]) {
              iVar7 = -1;
              goto LAB_1453a1479;
            }
            if (param_2[1] <= puVar2[1]) {
              bVar4 = true;
              uVar12 = (ulonglong)uVar14;
              break;
            }
          }
        }
        iVar7 = 1;
      }
LAB_1453a1479:
      iVar5 = uVar14 - 1;
      if (-1 < iVar7) {
        iVar5 = iVar8;
        iVar18 = uVar14 + 1;
      }
      iVar8 = iVar5;
    } while (iVar18 <= iVar8);
  }
  uVar14 = (uint)uVar12;
  if (param_4 == 0xffffffff) {
    if (bVar4) {
      _Dst = (void *)(*(longlong *)(param_1 + 0x28) + uVar12 * 8);
      if (uVar14 + 1 < uVar15) {
        memmove(_Dst,(void *)((longlong)_Dst + 8),(ulonglong)((uVar15 - uVar14) * 8 - 8));
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    }
  }
  else {
    if (bVar4) {
LAB_1453a1594:
      uVar15 = *(int *)(param_1 + 0x30) - 1;
      do {
        uVar10 = uVar9 + (int)(uVar15 - uVar9) / 2;
        puVar2 = *(ulonglong **)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar10 * 8);
        if (param_4 < (uint)puVar2[4]) {
          iVar8 = -1;
        }
        else {
          if (param_4 <= (uint)puVar2[4]) {
            if (*puVar2 < param_5) {
              iVar8 = -1;
              goto LAB_1453a15ef;
            }
            if (*puVar2 <= param_5) {
              if (param_2[1] < puVar2[1]) {
                iVar8 = -1;
                goto LAB_1453a15ef;
              }
              uVar16 = uVar10;
              if (param_2[1] <= puVar2[1]) break;
            }
          }
          iVar8 = 1;
        }
LAB_1453a15ef:
        uVar16 = uVar10 - 1;
        if (-1 < iVar8) {
          uVar9 = uVar10 + 1;
          uVar16 = uVar15;
        }
        uVar15 = uVar16;
        uVar10 = uVar9;
        uVar16 = uVar15;
      } while ((int)uVar9 <= (int)uVar15);
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar12 * 8);
      if ((int)uVar10 < (int)uVar16) {
        uVar10 = uVar16;
      }
      uVar11 = (ulonglong)uVar10;
      lVar17 = uVar12 * 8;
      if (uVar14 < uVar10) {
        uVar11 = (ulonglong)(uVar10 - 1);
        while (uVar15 = uVar14 + 1, uVar15 <= uVar10 - 1) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar14 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar15 * 8);
          uVar14 = uVar15;
        }
      }
      else if (uVar14 != uVar10) {
        do {
          lVar17 = lVar17 + -8;
          uVar15 = (int)uVar12 - 1;
          uVar12 = (ulonglong)uVar15;
          *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8 + lVar17) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar12 * 8);
        } while (uVar10 < uVar15);
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar11 * 8) = uVar3;
        goto LAB_1453a14e9;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar11 * 8) = uVar3;
      goto LAB_1453a14e9;
    }
    uVar10 = *(uint *)(param_1 + 0x34);
    if (uVar10 <= uVar15) {
      iVar8 = (uVar10 >> 1) + uVar10;
      if (uVar10 == 0) {
        iVar8 = 1;
      }
      cVar6 = FUN_1453a0bc0(param_1 + 0x28,iVar8);
      if (cVar6 == '\0') goto LAB_1453a14e4;
    }
    if (uVar15 < *(uint *)(param_1 + 0x34)) {
      uVar15 = *(uint *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = uVar15 + 1;
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar15 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = param_2;
        goto LAB_1453a1594;
      }
    }
  }
LAB_1453a14e4:
  uVar13 = 2;
LAB_1453a14e9:
  *(uint *)(param_2 + 4) = param_4;
  param_2[2] = param_3;
  *param_2 = param_5;
  *(undefined4 *)(param_2 + 3) = param_6;
  return uVar13;
}



// FUNCTION 1453a1690 FUN_1453a1690 body=223 status=ok
// SIG undefined FUN_1453a1690(void)

void FUN_1453a1690(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  uint uVar3;
  ulonglong *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = *(uint *)(param_1 + 0x30);
  iVar7 = 0;
  iVar1 = uVar3 - 1;
  do {
    uVar2 = iVar7 + (iVar1 - iVar7) / 2;
    puVar4 = *(ulonglong **)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar2 * 8);
    _Dst = (void *)(*(longlong *)(param_1 + 0x28) + (ulonglong)uVar2 * 8);
    if ((uint)param_2[4] < (uint)puVar4[4]) {
      iVar6 = -1;
    }
    else {
      if ((uint)param_2[4] <= (uint)puVar4[4]) {
        if (*puVar4 < *param_2) {
          iVar6 = -1;
          goto LAB_1453a170f;
        }
        if (*puVar4 <= *param_2) {
          if (param_2[1] < puVar4[1]) {
            iVar6 = -1;
            goto LAB_1453a170f;
          }
          if (param_2[1] <= puVar4[1]) {
            if (uVar2 + 1 < uVar3) {
              memmove(_Dst,(void *)((longlong)_Dst + 8),(ulonglong)((uVar3 - uVar2) * 8 - 8));
            }
            *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
            goto LAB_1453a174d;
          }
        }
      }
      iVar6 = 1;
    }
LAB_1453a170f:
    iVar5 = uVar2 - 1;
    if (-1 < iVar6) {
      iVar7 = uVar2 + 1;
      iVar5 = iVar1;
    }
    iVar1 = iVar5;
    if (iVar1 < iVar7) {
LAB_1453a174d:
      *(undefined4 *)(param_2 + 4) = 0xffffffff;
      return;
    }
  } while( true );
}



// FUNCTION 1453a1770 FUN_1453a1770 body=182 status=ok
// SIG undefined FUN_1453a1770(void)

void FUN_1453a1770(longlong param_1)

{
  void *pvVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x358) != '\0') {
    plVar2 = *(longlong **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    if (plVar2 != plVar2 + *(uint *)(param_1 + 0x30)) {
      do {
        *(undefined4 *)(*plVar2 + 0x20) = 0xffffffff;
        pvVar1 = (void *)*plVar2;
        if (*(short *)((longlong)pvVar1 + 0x24) == 0) {
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - *(int *)((longlong)pvVar1 + 0x1c);
          FUN_1453a09b0(param_1 + 0x38,*(int *)((longlong)pvVar1 + 8) - *(int *)(param_1 + 0x338),
                        *(undefined4 *)((longlong)pvVar1 + 0x1c));
          AK::MemoryMgr::Free(7,pvVar1);
          FUN_14539fda0(*(undefined8 *)(param_1 + 0x360));
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != (longlong *)
                         (*(longlong *)(param_1 + 0x28) + (ulonglong)*(uint *)(param_1 + 0x30) * 8))
      ;
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1453a1830 FUN_1453a1830 body=98 status=ok
// SIG undefined FUN_1453a1830(void)

void FUN_1453a1830(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = AK::MemoryMgr::Malloc(7,0x28);
  *param_3 = (longlong)puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *puVar2 = 0;
    puVar2[1] = uVar1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined2 *)((longlong)puVar2 + 0x24) = 0;
    *(undefined4 *)(puVar2 + 4) = 0xffffffff;
    *(undefined4 *)(*param_3 + 0x18) = *(undefined4 *)(param_2 + 3);
    *(undefined8 *)*param_3 = *param_2;
  }
  return;
}



// FUNCTION 1453a18a0 FUN_1453a18a0 body=19 status=ok
// SIG undefined FUN_1453a18a0(void)

void FUN_1453a18a0(undefined8 param_1,void *param_2,void *param_3)

{
  if (param_3 != param_2) {
    AK::MemoryMgr::Free(7,param_3);
    return;
  }
  return;
}



// FUNCTION 1453a18c0 FUN_1453a18c0 body=43 status=ok
// SIG undefined FUN_1453a18c0(void)

undefined8 * FUN_1453a18c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d459d8;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x368);
  }
  return param_1;
}



// FUNCTION 1453a18f0 FUN_1453a18f0 body=231 status=ok
// SIG undefined FUN_1453a18f0(void)

void FUN_1453a18f0(longlong param_1,longlong *param_2,char param_3,char *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  char *local_res8;
  undefined8 local_38 [2];
  longlong local_28;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x60);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x18);
  EnterCriticalSection(lpCriticalSection);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  if (((lVar3 != 0) && (*(longlong *)(*(longlong *)(lVar3 + 0x40) + 0x18) == 0)) &&
     (*(longlong *)(*(longlong *)(lVar3 + 0x40) + 0x20) == *(longlong *)(lVar3 + 0x48))) {
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x20) != -1) {
      FUN_1453a1690(lVar2 + 0xc0);
    }
    cVar1 = *param_4;
    if (param_3 != '\0') {
      if ((*(byte *)(lVar3 + 0x50) & 1) == 0) {
        local_38[0] = *(undefined8 *)(*(longlong *)(lVar3 + 0x48) + 0x28);
        local_28 = lVar3 + 8;
        local_res8 = param_4;
        (**(code **)(*param_2 + 0x38))(param_2,1,local_38,&local_res8);
      }
      else {
        *param_4 = '\0';
      }
    }
    *(uint *)(lVar3 + 0x50) = *(uint *)(lVar3 + 0x50) | 1;
    if ((*param_4 != '\0') && (cVar1 == '\0')) {
      *param_4 = '\0';
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001453a19d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1453a19e0 FUN_1453a19e0 body=269 status=ok
// SIG undefined FUN_1453a19e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1453a19e0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  iVar5 = 1;
  if (param_2 != 1) {
    iVar5 = 2;
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x60);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
  lVar6 = *(longlong *)(lVar4 + 0x40);
  *(undefined8 *)(lVar4 + 0x40) = 0;
  lVar4 = *(longlong *)(lVar6 + 8);
  puVar2 = *(undefined8 **)(lVar4 + 0x10);
  puVar2[9] = 0;
  *puVar2 = 0;
  if (*(longlong *)(lVar1 + 0x458) == 0) {
    *(undefined8 **)(lVar1 + 0x458) = puVar2;
  }
  else {
    **(undefined8 **)(lVar1 + 0x450) = puVar2;
  }
  *(int *)(lVar1 + 0x448) = *(int *)(lVar1 + 0x448) + 1;
  *(undefined8 **)(lVar1 + 0x450) = puVar2;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  if ((iVar5 != 1) && (*(int *)(lVar4 + 0x20) != -1)) {
    FUN_1453a1690(lVar1 + 0xc0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
  uVar7 = 1;
  lVar4 = lVar6;
  do {
    lVar1 = *(longlong *)(lVar4 + 0x18);
    lVar3 = *(longlong *)(lVar4 + 0x18);
    if (lVar4 == lVar6) {
      lVar6 = *(longlong *)(lVar4 + 0x18);
      lVar3 = _DAT_00000018;
    }
    _DAT_00000018 = lVar3;
    (**(code **)(**(longlong **)(lVar4 + 0x20) + 0x28))
              (*(longlong **)(lVar4 + 0x20),lVar4,iVar5,uVar7);
    uVar7 = 0;
    lVar4 = lVar1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1453a1af0 FUN_1453a1af0 body=334 status=ok
// SIG undefined FUN_1453a1af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1453a1af0(uint param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 != 0) {
    uVar7 = (ulonglong)param_1;
    do {
      iVar3 = 1;
      if (*param_3 != 1) {
        iVar3 = 2;
      }
      lVar5 = *(longlong *)(*param_2 + 0x20);
      lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x48) + 0x60);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
      lVar6 = *(longlong *)(lVar5 + 0x40);
      *(undefined8 *)(lVar5 + 0x40) = 0;
      lVar5 = *(longlong *)(lVar6 + 8);
      puVar2 = *(undefined8 **)(lVar5 + 0x10);
      puVar2[9] = 0;
      *puVar2 = 0;
      if (*(longlong *)(lVar1 + 0x458) == 0) {
        *(undefined8 **)(lVar1 + 0x458) = puVar2;
      }
      else {
        **(undefined8 **)(lVar1 + 0x450) = puVar2;
      }
      *(int *)(lVar1 + 0x448) = *(int *)(lVar1 + 0x448) + 1;
      *(undefined8 **)(lVar1 + 0x450) = puVar2;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      if ((iVar3 != 1) && (*(int *)(lVar5 + 0x20) != -1)) {
        FUN_1453a1690(lVar1 + 0xc0);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x18));
      lVar5 = lVar6;
      do {
        lVar1 = *(longlong *)(lVar5 + 0x18);
        lVar4 = *(longlong *)(lVar5 + 0x18);
        if (lVar5 == lVar6) {
          lVar6 = *(longlong *)(lVar5 + 0x18);
          lVar4 = _DAT_00000018;
        }
        _DAT_00000018 = lVar4;
        (**(code **)(**(longlong **)(lVar5 + 0x20) + 0x28))
                  (*(longlong **)(lVar5 + 0x20),lVar5,iVar3);
        lVar5 = lVar1;
      } while (lVar1 != 0);
      param_2 = param_2 + 1;
      param_3 = param_3 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 1453a1c50 FUN_1453a1c50 body=307 status=ok
// SIG undefined FUN_1453a1c50(void)

longlong * FUN_1453a1c50(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined **ppuVar7;
  
  if (DAT_14c7fdf99 == '\0') {
    return (longlong *)0x0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x50);
  if (((lVar1 == 0) || (iVar5 = *(int *)(lVar1 + 0x28), iVar3 = FUN_1450e71d0(), iVar3 != iVar5)) ||
     (plVar6 = AK::MemoryMgr::Malloc(0,0x10), plVar6 == (longlong *)0x0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
    if (lVar1 != 0) {
      uVar4 = FUN_1450e71d0(param_1);
      cVar2 = FUN_14555dec0(lVar1,uVar4);
      if ((cVar2 != '\0') && (plVar6 = AK::MemoryMgr::Malloc(0,0x10), plVar6 != (longlong *)0x0)) {
        plVar6[1] = 0;
        ppuVar7 = &PTR_FUN_149d45ab8;
        goto LAB_1453a1d4e;
      }
    }
    if ((*(byte *)(param_1 + 0x170) & 8) == 0) {
      return (longlong *)0x0;
    }
    if ((*(byte *)(param_1 + 0x19c) & 7) == 2) {
      return (longlong *)0x0;
    }
    plVar6 = AK::MemoryMgr::Malloc(0,0x20);
    if (plVar6 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    *(undefined1 *)((longlong)plVar6 + 0x1f) = 0;
    plVar6[1] = 0;
    ppuVar7 = &PTR_FUN_149d45a28;
    plVar6[2] = 0;
    *(undefined4 *)(plVar6 + 3) = 0;
    *(undefined2 *)((longlong)plVar6 + 0x1c) = 0;
    *(undefined1 *)((longlong)plVar6 + 0x1e) = 0;
  }
  else {
    plVar6[1] = 0;
    ppuVar7 = &PTR_FUN_149d45a70;
  }
LAB_1453a1d4e:
  *plVar6 = (longlong)ppuVar7;
  iVar5 = (*(code *)*ppuVar7)(plVar6,param_1);
  if (iVar5 != 1) {
    (**(code **)(*plVar6 + 8))(plVar6,0);
    AK::MemoryMgr::Free(0,plVar6);
    return (longlong *)0x0;
  }
  return plVar6;
}



// FUNCTION 1453a1df0 FUN_1453a1df0 body=147 status=ok
// SIG undefined FUN_1453a1df0(void)

void FUN_1453a1df0(longlong *param_1,byte *param_2,byte *param_3,undefined4 *param_4)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x38))();
  cVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  *param_2 = *param_2 | 1;
  *param_4 = 0;
  if ((cVar2 == '\0') || (*param_2 = *param_2 | 4, (*param_2 & 2) == 0)) {
    if (cVar1 == '\0') goto LAB_1453a1e58;
  }
  else if (cVar1 == '\0') {
    *param_3 = *param_3 | 2;
    goto LAB_1453a1e58;
  }
  *param_2 = *param_2 | 2;
  *param_4 = 0x3f800000;
LAB_1453a1e58:
  if ((*(byte *)(param_1[1] + 0x14a) & 1) == 0) {
    *param_3 = *param_3 | 8;
  }
  return;
}



// FUNCTION 1453a1ea0 FUN_1453a1ea0 body=43 status=ok
// SIG undefined FUN_1453a1ea0(void)

undefined8 * FUN_1453a1ea0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_149d459e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1453a1ed0 FUN_1453a1ed0 body=77 status=ok
// SIG undefined FUN_1453a1ed0(void)

undefined8 FUN_1453a1ed0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1453a2300(*(undefined8 *)(param_2 + 8));
  if (lVar1 != 0) {
    *(longlong *)(param_1 + 8) = param_2;
    FUN_14555d850(lVar1,param_1);
    return 1;
  }
  return 2;
}



// FUNCTION 1453a1f20 FUN_1453a1f20 body=48 status=ok
// SIG undefined FUN_1453a1f20(void)

void FUN_1453a1f20(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14555d920(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x38),param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1453a1f80 FUN_1453a1f80 body=240 status=ok
// SIG undefined FUN_1453a1f80(void)

void FUN_1453a1f80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  
  if (((*(byte *)(*(longlong *)(param_1 + 8) + 0x14a) & 1) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x38), lVar1 != 0)) {
    FUN_14555dbf0(lVar1,param_2,param_3,param_4,param_5);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x38);
  if (lVar2 != 0) {
    fVar4 = *(float *)(lVar1 + 0xec) * 0.05;
    if ((fVar4 < -37.0) || (37.0 < fVar4)) {
      fVar4 = 0.0;
    }
    else {
      uVar3 = (uint)(longlong)(fVar4 * 27866352.0 + 1.0653532e+09);
      fVar4 = (float)((uVar3 & 0x7fffff) + 0x3f800000);
      fVar4 = ((fVar4 * 0.32518977 + 0.020805772) * fVar4 + 0.65304345) *
              (float)(uVar3 & 0xff800000);
    }
    FUN_14555dd50(lVar2,param_2,*(undefined4 *)(lVar1 + 0x114),fVar4);
  }
  return;
}



// FUNCTION 1453a2100 FUN_1453a2100 body=17 status=ok
// SIG undefined FUN_1453a2100(void)

undefined4 FUN_1453a2100(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x114);
  }
  return 0;
}



// FUNCTION 1453a2120 FUN_1453a2120 body=43 status=ok
// SIG undefined FUN_1453a2120(void)

undefined8 * FUN_1453a2120(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_149d459e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1453a2150 FUN_1453a2150 body=34 status=ok
// SIG undefined FUN_1453a2150(void)

undefined8 FUN_1453a2150(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x50);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x2c) = 1;
    *(longlong *)(param_1 + 8) = param_2;
    return 1;
  }
  return 2;
}



// FUNCTION 1453a21e0 FUN_1453a21e0 body=43 status=ok
// SIG undefined FUN_1453a21e0(void)

undefined8 * FUN_1453a21e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_149d459e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1453a2210 FUN_1453a2210 body=77 status=ok
// SIG undefined FUN_1453a2210(void)

undefined8 FUN_1453a2210(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1453a2300(*(undefined8 *)(param_2 + 8));
  if (lVar1 != 0) {
    *(longlong *)(param_1 + 8) = param_2;
    FUN_14555db50(lVar1,param_1);
    return 1;
  }
  return 2;
}



// FUNCTION 1453a2260 FUN_1453a2260 body=48 status=ok
// SIG undefined FUN_1453a2260(void)

void FUN_1453a2260(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_14555db90(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x38),param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1453a2290 FUN_1453a2290 body=16 status=ok
// SIG undefined FUN_1453a2290(void)

undefined4 FUN_1453a2290(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1d0) + 0x20);
}



// FUNCTION 1453a22d0 FUN_1453a22d0 body=43 status=ok
// SIG undefined FUN_1453a22d0(void)

undefined8 * FUN_1453a22d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_149d459e0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1453a2300 FUN_1453a2300 body=147 status=ok
// SIG undefined FUN_1453a2300(void)

longlong * FUN_1453a2300(longlong param_1)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 == (longlong *)0x0) {
    pvVar2 = AK::MemoryMgr::Malloc(4,0xe8);
    if (pvVar2 == (void *)0x0) {
      return (longlong *)0x0;
    }
    plVar3 = (longlong *)FUN_14555d750(pvVar2);
    if (plVar3 != (longlong *)0x0) {
      *(longlong **)(param_1 + 0x38) = plVar3;
      plVar3[1] = param_1;
      iVar1 = (**(code **)(*plVar3 + 8))(plVar3,*(undefined8 *)(param_1 + 0x58));
      if (iVar1 == 1) {
        return plVar3;
      }
      (**(code **)*plVar3)(plVar3,0);
      AK::MemoryMgr::Free(4,plVar3);
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    plVar3 = (longlong *)0x0;
  }
  return plVar3;
}



// FUNCTION 1453a23a0 FUN_1453a23a0 body=512 status=ok
// SIG undefined FUN_1453a23a0(void)

void FUN_1453a23a0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  for (puVar3 = *(undefined8 **)(param_1 + 0x20); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)*puVar3) {
    lVar4 = puVar3[2];
    LOCK();
    piVar1 = (int *)(lVar4 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
    }
  }
  while (puVar3 = *(undefined8 **)(param_1 + 0x20), puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = *puVar3;
    if (puVar3 == *(undefined8 **)(param_1 + 0x28)) {
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    *puVar3 = *(undefined8 *)(param_1 + 0x30);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
    *(undefined8 **)(param_1 + 0x30) = puVar3;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  while (puVar5 = puVar3, puVar5 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar5;
    if ((puVar5 < *(undefined8 **)(param_1 + 0x38)) ||
       (*(undefined8 **)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x40) * 4 <= puVar5)) {
      AK::MemoryMgr::Free(0,puVar5);
    }
  }
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  while (puVar3 = *(undefined8 **)(param_1 + 0x48), puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = *puVar3;
    if (puVar3 == *(undefined8 **)(param_1 + 0x50)) {
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    *puVar3 = *(undefined8 *)(param_1 + 0x58);
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
    *(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x58);
  while (puVar5 = puVar3, puVar5 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar5;
    if ((puVar5 < *(undefined8 **)(param_1 + 0x60)) ||
       (*(undefined8 **)(param_1 + 0x60) + (ulonglong)*(uint *)(param_1 + 0x68) * 3 <= puVar5)) {
      AK::MemoryMgr::Free(0,puVar5);
    }
  }
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  while (puVar3 = *(undefined8 **)(param_1 + 0x70), puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = *puVar3;
    if (puVar3 == *(undefined8 **)(param_1 + 0x78)) {
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    *puVar3 = *(undefined8 *)(param_1 + 0x80);
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
    *(undefined8 **)(param_1 + 0x80) = puVar3;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x80);
  while (puVar5 = puVar3, puVar5 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar5;
    if ((puVar5 < *(undefined8 **)(param_1 + 0x88)) ||
       (*(undefined8 **)(param_1 + 0x88) + (ulonglong)*(uint *)(param_1 + 0x90) * 3 <= puVar5)) {
      AK::MemoryMgr::Free(0,puVar5);
    }
  }
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
    AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 1453a25a0 FUN_1453a25a0 body=7 status=ok
// SIG undefined FUN_1453a25a0(void)

void FUN_1453a25a0(int *param_1)

{
  *param_1 = *param_1 + 1;
  return;
}



// FUNCTION 1453a25b0 FUN_1453a25b0 body=48 status=ok
// SIG undefined FUN_1453a25b0(void)

int FUN_1453a25b0(int *param_1)

{
  int iVar1;
  
  *param_1 = *param_1 + -1;
  iVar1 = *param_1;
  if (*param_1 == 0) {
    FUN_1453a23a0();
    AK::MemoryMgr::Free(0,param_1);
  }
  return iVar1;
}



// FUNCTION 1453a25e0 FUN_1453a25e0 body=77 status=ok
// SIG undefined FUN_1453a25e0(void)

longlong FUN_1453a25e0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf0;
  *(longlong *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0xff00;
  if (param_2 != 0) {
    FUN_14539ac00(param_2);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x24);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1453a2630 FUN_1453a2630 body=505 status=ok
// SIG undefined FUN_1453a2630(void)

undefined8 FUN_1453a2630(longlong param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  bool bVar12;
  
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfd;
  cVar1 = *param_2;
  uVar10 = 1;
  if (cVar1 == -0x70) {
    bVar12 = true;
    if (param_2[5] == '\0') {
LAB_1453a27d0:
      if (bVar12) goto LAB_1453a27f2;
LAB_1453a27d2:
      bVar4 = *(byte *)(param_1 + 0x38) | 7;
LAB_1453a27f4:
      *(byte *)(param_1 + 0x38) = bVar4;
      goto LAB_1453a27f7;
    }
  }
  else {
    if (cVar1 != -2) {
      if (cVar1 != -0x80) {
        if (cVar1 == -0x70) {
          bVar12 = param_2[5] == '\0';
          goto LAB_1453a27d0;
        }
        if (cVar1 == -2) goto LAB_1453a27db;
        goto LAB_1453a27d2;
      }
LAB_1453a27f2:
      bVar4 = *(byte *)(param_1 + 0x38) | 4;
      goto LAB_1453a27f4;
    }
    if (*(short *)(param_2 + 4) != 0) {
LAB_1453a27db:
      if ((*(short *)(param_2 + 4) != 0) && (4 < (ushort)(*(short *)(param_2 + 4) - 1U))) {
        uVar10 = 0;
      }
      goto LAB_1453a27f7;
    }
  }
  puVar5 = AK::MemoryMgr::Malloc(0,0x98);
  uVar8 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 8);
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    *(undefined8 *)(puVar5 + 1) = *(undefined8 *)param_2;
    puVar5[3] = uVar2;
    *puVar5 = 1;
    *(undefined8 *)(puVar5 + 4) = uVar3;
    *(undefined8 *)(puVar5 + 8) = 0;
    *(undefined8 *)(puVar5 + 10) = 0;
    *(undefined8 *)(puVar5 + 0xc) = 0;
    *(undefined8 *)(puVar5 + 0xe) = 0;
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x12) = 0;
    *(undefined8 *)(puVar5 + 0x14) = 0;
    *(undefined8 *)(puVar5 + 0x16) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined8 *)(puVar5 + 0x1a) = 0;
    *(undefined8 *)(puVar5 + 0x1c) = 0;
    *(undefined8 *)(puVar5 + 0x1e) = 0;
    *(undefined8 *)(puVar5 + 0x20) = 0;
    *(undefined8 *)(puVar5 + 0x22) = 0;
    *(undefined8 *)(puVar5 + 0x24) = 0;
    *(undefined8 *)(puVar5 + 6) = 0;
    *(undefined4 **)(param_1 + 0x10) = puVar5;
    puVar6 = AK::MemoryMgr::Malloc(0,0x80);
    *(undefined8 **)(puVar5 + 0xe) = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 **)(puVar5 + 0xc) = puVar6;
      puVar7 = puVar6 + 3;
      puVar5[0x10] = 4;
      uVar11 = uVar8;
      do {
        puVar9 = puVar6;
        if (puVar7 != (undefined8 *)&DAT_00000010) {
          puVar7[-1] = 0;
          *(undefined2 *)puVar7 = 0xffff;
        }
        uVar11 = uVar11 + 1;
        *puVar9 = puVar7 + 1;
        puVar7 = puVar7 + 4;
        puVar6 = puVar9 + 4;
      } while (uVar11 < (uint)puVar5[0x10]);
      *puVar9 = 0;
      puVar6 = AK::MemoryMgr::Malloc(0,0x60);
      *(undefined8 **)(puVar5 + 0x18) = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        puVar5[0x1a] = 4;
        *(undefined8 **)(puVar5 + 0x16) = puVar6;
        do {
          puVar7 = puVar6;
          uVar8 = uVar8 + 1;
          *puVar7 = puVar7 + 3;
          puVar6 = puVar7 + 3;
        } while (uVar8 < (uint)puVar5[0x1a]);
        *puVar7 = 0;
        goto LAB_1453a27f7;
      }
    }
  }
  uVar10 = 0;
LAB_1453a27f7:
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)param_2;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x34) = param_3;
  return uVar10;
}



// FUNCTION 1453a2830 FUN_1453a2830 body=135 status=ok
// SIG undefined FUN_1453a2830(void)

undefined4 FUN_1453a2830(void *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  piVar1 = (int *)((longlong)param_1 + 8);
  *piVar1 = *piVar1 + -1;
  uVar3 = *(undefined4 *)((longlong)param_1 + 8);
  if (*piVar1 == 0) {
    if (*(longlong *)((longlong)param_1 + 0x18) != 0) {
      FUN_14539ac10();
    }
    lVar4 = *(longlong *)((longlong)param_1 + 0x20);
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 0x24);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
      }
    }
    piVar1 = *(int **)((longlong)param_1 + 0x10);
    if ((piVar1 != (int *)0x0) && (*piVar1 = *piVar1 + -1, *piVar1 == 0)) {
      FUN_1453a23a0();
      AK::MemoryMgr::Free(0,piVar1);
    }
    AK::MemoryMgr::Free(0,param_1);
  }
  return uVar3;
}



// FUNCTION 1453a28c0 FUN_1453a28c0 body=1114 status=ok
// SIG undefined FUN_1453a28c0(void)

ulonglong FUN_1453a28c0(longlong param_1,int param_2,char param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  
  cVar6 = *(char *)(param_1 + 0x28);
  uVar8 = 0;
  if (cVar6 == -0x70) {
    bVar12 = *(char *)(param_1 + 0x2d) == '\0';
    if (!bVar12) goto LAB_1453a28e9;
  }
  else {
    if (cVar6 == -0x80) goto LAB_1453a28e9;
    if (cVar6 != -0x70) {
      if (cVar6 == -2) {
        bVar9 = *(byte *)(param_1 + 0x38);
        if (((bVar9 & 2) == 0) &&
           (uVar8 = (ulonglong)(uint)DAT_14c72f434,
           *(int *)(param_1 + 0x34) < (int)(uint)DAT_14c72f434)) {
          if ((*(longlong *)(param_1 + 0x18) != 0) &&
             ((*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) != 0 && (param_3 != '\0')))) {
            FUN_1453a2fa0(param_1,param_4);
            *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 2;
            bVar9 = *(byte *)(param_1 + 0x38);
          }
          uVar7 = *(int *)(param_1 + 0x34) - param_2;
          uVar8 = (ulonglong)uVar7;
          uVar11 = 0;
          if (-1 < (int)uVar7) {
            uVar11 = uVar7;
          }
          *(uint *)(param_1 + 0x34) = uVar11;
        }
        if (((bVar9 & 2) == 0) ||
           (((((*(char *)(param_1 + 0x28) == -2 && (*(short *)(param_1 + 0x2c) == 0)) &&
              ((bVar9 & 8) == 0)) &&
             ((uVar8 = *(ulonglong *)(param_1 + 0x10), uVar8 != 0 &&
              ((*(int *)(uVar8 + 0x6c) != 0 || (*(int *)(uVar8 + 0x94) != 0)))))) &&
            (*(short *)(param_1 + 0x2c) == 0)))) {
          return uVar8 & 0xffffffffffffff00;
        }
      }
      goto LAB_1453a29a9;
    }
    bVar12 = *(char *)(param_1 + 0x2d) == '\0';
  }
  if (!bVar12) {
LAB_1453a29a9:
    return CONCAT71((int7)(uVar8 >> 8),1);
  }
LAB_1453a28e9:
  if (((*(longlong *)(param_1 + 0x18) != 0) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) != 0)) && (param_3 != '\0')) {
    bVar9 = *(byte *)(param_1 + 0x38);
    if (((bVar9 & 2) == 0) && (*(int *)(param_1 + 0x34) < (int)(uint)DAT_14c72f434)) {
      if ((*(char *)(param_1 + 0x28) == -0x80) ||
         ((*(char *)(param_1 + 0x28) == -0x70 && (*(char *)(param_1 + 0x2d) == '\0')))) {
        for (puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x48);
            puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
          plVar3 = (longlong *)puVar2[2];
          iVar10 = *(int *)(param_1 + 0x34);
          if (plVar3[0x12] == 0) {
            *(int *)(plVar3 + 0x13) = iVar10;
          }
          else {
            FUN_14538e3e0(plVar3[0x12],iVar10);
          }
          cVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
          if (cVar6 != '\0') {
            *(undefined4 *)(puVar2 + 1) = 3;
            iVar10 = -1;
          }
          if (*(int *)(puVar2 + 1) == 2) {
            (**(code **)(*plVar3 + 0x28))(plVar3,*(undefined8 *)(param_1 + 0x20));
          }
          else if (*(int *)(puVar2 + 1) == 3) {
            *(int *)(plVar3 + 0x71) = iVar10;
            local_res8 = 0;
            local_resc = 4;
            FUN_1450eaa80(plVar3,&local_res8,iVar10 == -1);
          }
        }
        for (puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x70);
            puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
          FUN_145081200(DAT_14c790fd8,puVar2[2],*(undefined8 *)(param_1 + 0x20),
                        *(undefined4 *)(puVar2 + 1));
        }
      }
      bVar9 = *(byte *)(param_1 + 0x38) | 2;
      *(byte *)(param_1 + 0x38) = bVar9;
    }
    if ((bVar9 & 1) == 0) {
      if ((*(char *)(param_1 + 0x28) == -0x70) && (*(char *)(param_1 + 0x2d) != '\0')) {
        FUN_1453a3260(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),
                      *(longlong *)(param_1 + 0x18) + 0x18,param_1 + 0x28);
      }
      else {
        for (puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x20);
            puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
          if (*(int *)(puVar2 + 1) == 1) {
            local_60 = *(undefined4 *)(param_1 + 0x30);
            uVar1 = *(undefined8 *)(param_1 + 0x28);
            local_68._2_6_ = (undefined6)((ulonglong)uVar1 >> 0x10);
            local_68._0_1_ = (undefined1)uVar1;
            local_68._0_2_ = CONCAT11(*(undefined1 *)((longlong)puVar2 + 0x19),(undefined1)local_68)
            ;
            uVar5 = local_68;
            local_68._5_3_ = (undefined3)((ulonglong)uVar1 >> 0x28);
            local_68._0_4_ = (undefined4)uVar5;
            local_68._0_5_ = CONCAT14(*(undefined1 *)(puVar2 + 3),(undefined4)local_68);
            FUN_1453a3260(param_1,puVar2[2],*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),
                          *(longlong *)(param_1 + 0x18) + 0x18,&local_68);
          }
        }
        lVar4 = local_28;
        for (puVar2 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x48); local_28 = lVar4,
            puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
          if (*(int *)(puVar2 + 1) != 1) {
            local_28 = puVar2[2];
            plVar3 = *(longlong **)(local_28 + 0x1e8);
            if (plVar3 != (longlong *)0x0) {
              uVar1 = *(undefined8 *)(param_1 + 0x28);
              local_48 = *(undefined4 *)(param_1 + 0x30);
              local_68._2_6_ = (undefined6)((ulonglong)uVar1 >> 0x10);
              local_68._0_1_ = (undefined1)uVar1;
              local_68._0_2_ = CONCAT11(*(undefined1 *)(local_28 + 0x359),(undefined1)local_68);
              uVar5 = local_68;
              local_68._5_3_ = (undefined3)((ulonglong)uVar1 >> 0x28);
              local_68._0_4_ = (undefined4)uVar5;
              local_68._0_5_ = CONCAT14(*(undefined1 *)(local_28 + 0x35c),(undefined4)local_68);
              local_40 = *(undefined8 *)(local_28 + 0x368);
              local_38 = *(undefined4 *)(local_28 + 0x30);
              local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
              local_30 = *(undefined4 *)(param_1 + 0x34);
              local_34 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x2c);
              local_50 = local_68;
              local_2c = 3;
              (**(code **)(*plVar3 + 0x138))(plVar3,&local_58,local_28 + 0x90,1);
              lVar4 = local_28;
            }
          }
          local_28 = lVar4;
          lVar4 = local_28;
        }
      }
      bVar9 = *(byte *)(param_1 + 0x38) | 1;
      *(byte *)(param_1 + 0x38) = bVar9;
    }
    if (((((*(char *)(param_1 + 0x28) == -0x70) && (*(char *)(param_1 + 0x2d) != '\0')) &&
         ((bVar9 & 4) == 0)) &&
        ((lVar4 = *(longlong *)(param_1 + 0x10), lVar4 != 0 && (*(int *)(lVar4 + 0x6c) == 0)))) &&
       ((*(int *)(lVar4 + 0x94) == 0 &&
        (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(), cVar6 == '\0')))) {
      *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | 4;
    }
  }
  param_2 = *(int *)(param_1 + 0x34) - param_2;
  iVar10 = 0;
  if (-1 < param_2) {
    iVar10 = param_2;
  }
  *(int *)(param_1 + 0x34) = iVar10;
  return (ulonglong)((*(byte *)(param_1 + 0x38) & 6) == 6);
}



// FUNCTION 1453a2d20 FUN_1453a2d20 body=41 status=ok
// SIG undefined FUN_1453a2d20(void)

ulonglong FUN_1453a2d20(longlong param_1)

{
  byte bVar1;
  ulonglong in_RAX;
  
  if ((*(char *)(param_1 + 0x28) == -0x70) && (*(char *)(param_1 + 0x2d) != '\0')) {
    bVar1 = *(byte *)(param_1 + 0x38);
    in_RAX = 0;
    if (((bVar1 & 4) == 0) && ((bVar1 & 2) != 0)) {
      *(undefined1 *)(param_1 + 0x28) = 0x80;
      *(byte *)(param_1 + 0x38) = bVar1 & 0xfc | 4;
      return 1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1453a2d50 FUN_1453a2d50 body=196 status=ok
// SIG undefined FUN_1453a2d50(void)

uint FUN_1453a2d50(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x29) == *(char *)(param_2 + 0x29)) {
    uVar3 = *(byte *)(param_1 + 0x28) + 0x80;
    if (((uVar3 & 0xcf) == 0) && (*(byte *)(param_1 + 0x28) != 0xb0)) {
      uVar3 = *(byte *)(param_2 + 0x28) + 0x80;
      if (((uVar3 & 0xcf) == 0) &&
         ((*(byte *)(param_2 + 0x28) != 0xb0 &&
          (uVar3 = 0, *(char *)(param_1 + 0x2c) == *(char *)(param_2 + 0x2c))))) {
        bVar2 = *(byte *)(param_2 + 0x38);
        uVar3 = 0;
        if ((bVar2 & 4) == 0) {
          if ((((*(char *)(param_1 + 0x28) == -0x80) ||
               ((*(char *)(param_1 + 0x28) == -0x70 && (*(char *)(param_1 + 0x2d) == '\0')))) &&
              (*(char *)(param_2 + 0x28) == -0x70)) && (*(char *)(param_2 + 0x2d) != '\0')) {
            *(undefined1 *)(param_1 + 0x28) = 0x80;
            *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_2 + 0x2d);
            piVar1 = *(int **)(param_2 + 0x10);
            *(int **)(param_1 + 0x10) = piVar1;
            *piVar1 = *piVar1 + 1;
            bVar2 = *(byte *)(param_2 + 0x38);
          }
          if ((*(char *)(param_1 + 0x28) != -0x80) &&
             ((*(char *)(param_1 + 0x28) != -0x70 || (*(char *)(param_1 + 0x2d) != '\0')))) {
            *(byte *)(param_2 + 0x38) = bVar2 & 0xfb;
            return 1;
          }
          *(byte *)(param_2 + 0x38) = bVar2 & 0xfb | 4;
          return 1;
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}



// FUNCTION 1453a2e20 FUN_1453a2e20 body=90 status=ok
// SIG undefined FUN_1453a2e20(void)

void FUN_1453a2e20(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  for (puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x48); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    lVar2 = puVar1[2];
    *(undefined4 *)(lVar2 + 0x388) = 0xffffffff;
    local_res8 = 0;
    local_resc = 4;
    FUN_1450eaa80(lVar2,&local_res8,1);
  }
  return;
}



// FUNCTION 1453a2e80 FUN_1453a2e80 body=126 status=ok
// SIG undefined FUN_1453a2e80(void)

void FUN_1453a2e80(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  for (puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x48); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    local_resc = 4;
    local_res8 = 0;
    FUN_1450eab90(puVar1[2],&local_res8);
  }
  for (puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x70); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    FUN_1450821d0(DAT_14c790fd8,puVar1[2]);
  }
  return;
}



// FUNCTION 1453a2f00 FUN_1453a2f00 body=158 status=ok
// SIG undefined FUN_1453a2f00(void)

void FUN_1453a2f00(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  for (puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x48); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    lVar2 = puVar1[2];
    local_resc = 4;
    local_res8 = 0;
    *(undefined4 *)(lVar2 + 0x338) = param_2;
    FUN_1450eac60(lVar2,&local_res8,0);
  }
  for (puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x70); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    FUN_145082600(DAT_14c790fd8,puVar1[2]);
  }
  return;
}



// FUNCTION 1453a2fa0 FUN_1453a2fa0 body=690 status=ok
// SIG undefined FUN_1453a2fa0(void)

void FUN_1453a2fa0(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_res20;
  undefined4 local_res24;
  
  pcVar1 = (char *)(param_1 + 0x28);
  if ((*(char *)(param_1 + 0x28) == -2) && (*(short *)(param_1 + 0x2c) == 0)) {
    FUN_1453a3260(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10),
                  *(longlong *)(param_1 + 0x18) + 0x18,pcVar1);
    return;
  }
  puVar4 = *(undefined8 **)(param_2 + 8);
  do {
    while( true ) {
      do {
        puVar7 = puVar4;
        if (puVar7 == (undefined8 *)0x0) {
          return;
        }
        puVar4 = (undefined8 *)*puVar7;
      } while ((((*(char *)(puVar7 + 5) != -2) || (*(short *)((longlong)puVar7 + 0x2c) != 0)) ||
               ((*(byte *)(puVar7 + 7) & 2) == 0)) ||
              (((*(byte *)(puVar7 + 7) & 8) != 0 || (puVar7[2] == 0))));
      if ((*pcVar1 == -2) &&
         (((*(short *)(param_1 + 0x2c) == 4 || (*(short *)(param_1 + 0x2c) == 5)) ||
          (*(short *)(param_1 + 0x2c) == 1)))) break;
      if (*pcVar1 == -2) {
        if (*(short *)(param_1 + 0x2c) == 2) {
          for (puVar5 = *(undefined8 **)(puVar7[2] + 0x48); puVar5 != (undefined8 *)0x0;
              puVar5 = (undefined8 *)*puVar5) {
            local_res1c = 4;
            local_res18 = 0;
            FUN_1450eab90(puVar5[2],&local_res18);
          }
          for (puVar7 = *(undefined8 **)(puVar7[2] + 0x70); puVar7 != (undefined8 *)0x0;
              puVar7 = (undefined8 *)*puVar7) {
            FUN_1450821d0(DAT_14c790fd8,puVar7[2]);
          }
        }
        else if (*(short *)(param_1 + 0x2c) == 3) {
          uVar3 = *(undefined4 *)(param_1 + 0x34);
          for (puVar5 = *(undefined8 **)(puVar7[2] + 0x48); puVar5 != (undefined8 *)0x0;
              puVar5 = (undefined8 *)*puVar5) {
            lVar8 = puVar5[2];
            local_res24 = 4;
            local_res20 = 0;
            *(undefined4 *)(lVar8 + 0x338) = uVar3;
            FUN_1450eac60(lVar8,&local_res20,0);
          }
          for (puVar7 = *(undefined8 **)(puVar7[2] + 0x70); puVar7 != (undefined8 *)0x0;
              puVar7 = (undefined8 *)*puVar7) {
            FUN_145082600(DAT_14c790fd8,puVar7[2]);
          }
        }
      }
    }
    puVar5 = *(undefined8 **)(puVar7[2] + 0x48);
joined_r0x0001453a3089:
    while (puVar5 != (undefined8 *)0x0) {
      cVar2 = *pcVar1;
      plVar6 = (longlong *)puVar5[2];
      puVar5 = (undefined8 *)*puVar5;
      if (cVar2 != -2) goto LAB_1453a30e2;
      if (*(short *)(param_1 + 0x2c) != 1) {
        if (*(short *)(param_1 + 0x2c) != 4) goto LAB_1453a30e2;
        goto LAB_1453a30f1;
      }
      *(undefined4 *)(plVar6 + 0x71) = *(undefined4 *)(param_1 + 0x34);
      local_res8 = 0;
      local_resc = 4;
      FUN_1450eaa80(plVar6,&local_res8);
      *(byte *)(puVar7 + 7) = *(byte *)(puVar7 + 7) | 8;
    }
  } while( true );
LAB_1453a30e2:
  if ((cVar2 == -2) && (*(short *)(param_1 + 0x2c) == 5)) {
LAB_1453a30f1:
    if (cVar2 == -2) {
      if (*(short *)(param_1 + 0x2c) == 4) {
        (**(code **)(*plVar6 + 0x30))(plVar6,*(undefined4 *)(param_1 + 0x30));
      }
      else if (*(short *)(param_1 + 0x2c) == 5) {
        (**(code **)(*plVar6 + 0x38))(plVar6,*(undefined4 *)(param_1 + 0x30));
      }
    }
  }
  goto joined_r0x0001453a3089;
}



// FUNCTION 1453a3260 FUN_1453a3260 body=542 status=ok
// SIG undefined FUN_1453a3260(void)

void FUN_1453a3260(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  byte local_res10 [8];
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_348 [2];
  longlong local_340;
  undefined8 local_338;
  undefined4 *local_330;
  int *local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  ulonglong local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined1 local_298 [600];
  undefined4 local_40;
  byte local_3c;
  byte local_38;
  
  iVar2 = (**(code **)(param_2[2] + 8))(param_2 + 2);
  if (iVar2 == 0xb) {
    return;
  }
  local_2b0 = CONCAT62(local_2b0._2_6_,0xff00);
  local_340 = 0;
  local_318 = 0;
  local_320 = 0;
  local_328 = (int *)0x0;
  local_2cc = 0;
  local_2b8 = 0;
  local_2a0 = 0;
  FUN_144d51920(local_298);
  local_3c = local_3c & 0xfe;
  local_38 = local_38 & 0xf3 | 3;
  local_40 = 0;
  piVar1 = (int *)*param_5;
  local_340 = 0;
  if (param_3 != 0) {
    local_340 = param_3 + 0x10;
  }
  local_310 = 0;
  local_318._4_4_ = *(undefined4 *)((longlong)param_5 + 0x14);
  local_320 = param_5[1];
  local_318._0_4_ = *(undefined4 *)(param_5 + 2);
  local_348[0] = 0;
  local_2b8 = local_2b8 & 0xffffffff00000000;
  if (local_328 != (int *)0x0) {
    FUN_144d4a460();
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
  }
  local_2c4 = *(undefined4 *)(param_1 + 0x34);
  bVar4 = local_38 | 2;
  local_330 = &local_358;
  local_2c8 = 0;
  local_2c0 = 0;
  local_358 = 0;
  local_354 = 4;
  if (*(char *)(param_1 + 0x28) != -2) {
    local_2b0 = *param_6;
    local_2a8 = *(undefined4 *)(param_6 + 1);
  }
  local_2a0 = *(undefined8 *)(param_1 + 0x10);
  local_338 = param_4;
  local_328 = piVar1;
  if (((char)local_2b0 == -0x70) && ((char)((ulonglong)local_2b0 >> 0x28) != '\0')) {
    local_res10[0] = local_38 & 1;
    local_38 = bVar4;
    uVar3 = FUN_1450e98e0(local_348);
    iVar2 = FUN_14536f6c0(param_2,&local_2b0,uVar3,local_res10,param_4,local_318._4_4_);
    if (iVar2 != 1) goto LAB_1453a344a;
    bVar4 = local_res10[0] & 1 | local_38 & 0xfe;
  }
  local_38 = bVar4;
  iVar2 = FUN_14536f160(param_2,local_348);
  if (iVar2 == 1) {
    (**(code **)(*param_2 + 0x250))(param_2,local_348);
  }
LAB_1453a344a:
  FUN_14536fc10();
  FUN_144d51aa0(local_298);
  if (local_328 != (int *)0x0) {
    FUN_144d4a460();
  }
  return;
}



// FUNCTION 1453a3480 FUN_1453a3480 body=18 status=ok
// SIG undefined FUN_1453a3480(void)

undefined8 * FUN_1453a3480(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = param_2;
  *param_1 = &PTR__purecall_149d45b00;
  return param_1;
}



// FUNCTION 1453a34a0 FUN_1453a34a0 body=11 status=ok
// SIG undefined FUN_1453a34a0(void)

void FUN_1453a34a0(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_149d45b00;
  return;
}



// FUNCTION 1453a34b0 FUN_1453a34b0 body=12 status=ok
// SIG undefined FUN_1453a34b0(void)

void FUN_1453a34b0(longlong param_1)

{
  FUN_1450ed120(*(undefined8 *)(param_1 + 0x10),param_1);
  return;
}



// FUNCTION 1453a34c0 FUN_1453a34c0 body=12 status=ok
// SIG undefined FUN_1453a34c0(void)

void FUN_1453a34c0(longlong param_1)

{
  FUN_1450ed150(*(undefined8 *)(param_1 + 0x10),param_1);
  return;
}



// FUNCTION 1453a34d0 FUN_1453a34d0 body=43 status=ok
// SIG undefined FUN_1453a34d0(void)

undefined8 * FUN_1453a34d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_149d45b00;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1453a3500 FUN_1453a3500 body=43 status=ok
// SIG undefined FUN_1453a3500(void)

undefined8 * FUN_1453a3500(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d45b58;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1453a3540 FUN_1453a3540 body=174 status=ok
// SIG undefined FUN_1453a3540(void)

void FUN_1453a3540(longlong param_1,longlong param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_2 + 0x100);
  piVar2 = piVar3 + (ulonglong)*(uint *)(param_2 + 0x108) * 8;
  for (; (piVar3 != piVar2 && ((*piVar3 != param_3 || (piVar3[1] != param_4)))); piVar3 = piVar3 + 8
      ) {
  }
  if (piVar3 == piVar2) {
    piVar3 = (int *)0x0;
  }
  if (((piVar3 != (int *)0x0) && (*(longlong *)(piVar3 + 2) != 0)) &&
     (puVar1 = AK::MemoryMgr::Malloc(0,0x20), puVar1 != (undefined8 *)0x0)) {
    *(undefined4 *)(puVar1 + 2) = param_5;
    *puVar1 = piVar3;
    puVar1[1] = 0;
    if (*(longlong *)(param_1 + 0x48) == 0) {
      *(undefined8 **)(param_1 + 0x48) = puVar1;
      puVar1[3] = 0;
      return;
    }
    puVar1[3] = *(longlong *)(param_1 + 0x48);
    *(undefined8 **)(param_1 + 0x48) = puVar1;
  }
  return;
}



// FUNCTION 1453a35f0 FUN_1453a35f0 body=135 status=ok
// SIG undefined FUN_1453a35f0(void)

undefined8 * FUN_1453a35f0(undefined8 *param_1,uint param_2)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_149d45b68;
  pvVar1 = (void *)param_1[9];
  while (pvVar1 != (void *)0x0) {
    param_1[9] = *(undefined8 *)((longlong)pvVar1 + 0x18);
    *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
    if (pvVar1 != (void *)0x0) {
      AK::MemoryMgr::Free(0,pvVar1);
    }
    pvVar1 = (void *)param_1[9];
  }
  *param_1 = &PTR_FUN_149d45b58;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1453a3690 FUN_1453a3690 body=43 status=ok
// SIG undefined FUN_1453a3690(void)

undefined8 * FUN_1453a3690(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d45b58;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1453a36d0 FUN_1453a36d0 body=43 status=ok
// SIG undefined FUN_1453a36d0(void)

undefined8 * FUN_1453a36d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d45b58;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1453a3700 FUN_1453a3700 body=52 status=ok
// SIG undefined FUN_1453a3700(void)

undefined8 FUN_1453a3700(undefined8 param_1,ulonglong param_2)

{
  FUN_14555e460();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1453a3740 FUN_1453a3740 body=209 status=ok
// SIG undefined FUN_1453a3740(void)

undefined8 * FUN_1453a3740(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = AK::MemoryMgr::Malloc(0,0xc0);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1450ed010(puVar2,param_1);
    *puVar2 = &PTR_LAB_149d45ba0;
    puVar2[3] = &PTR_LAB_149d45c08;
    puVar2[5] = &PTR_FUN_149d45c18;
    FUN_14555e440(puVar2 + 0xd);
    puVar2[0xd] = &PTR_FUN_149d45b98;
    puVar2[0x11] = 0;
    puVar2[0x12] = param_2;
    *(undefined4 *)(puVar2 + 0x13) = param_3;
    FUN_14538e8c0(puVar2 + 0x14);
    *(byte *)((longlong)puVar2 + 0xbc) = *(byte *)((longlong)puVar2 + 0xbc) & 0xfc;
    *(undefined4 *)(puVar2 + 0x17) = 0;
    if (puVar2[0x12] != 0) {
      LOCK();
      piVar1 = (int *)(puVar2[0x12] + 0x24);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  return puVar2;
}



// FUNCTION 1453a3820 thunk_FUN_1450ed110 body=5 status=ok
// SIG undefined thunk_FUN_1450ed110(void)

void thunk_FUN_1450ed110(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1450ed120(*(undefined8 *)(param_1 + 0x10),param_1);
  return;
}



// FUNCTION 1453a3830 FUN_1453a3830 body=7 status=ok
// SIG undefined FUN_1453a3830(void)

void FUN_1453a3830(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb8) = param_2;
  return;
}



// FUNCTION 1453a3840 FUN_1453a3840 body=108 status=ok
// SIG undefined FUN_1453a3840(void)

void FUN_1453a3840(longlong param_1)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  local_40 = 0xff00;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_48 = FUN_1453a7490(*(undefined8 *)(param_1 + 0x10));
  local_24 = FUN_1453a74a0(*(undefined8 *)(param_1 + 0x10));
  local_1c = 2;
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x138))
            (*(longlong **)(param_1 + 0x90),&local_48,param_1 + 0xa0,1);
  return;
}



// FUNCTION 1453a38b0 FUN_1453a38b0 body=174 status=ok
// SIG undefined FUN_1453a38b0(void)

void FUN_1453a38b0(longlong param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  FUN_14555e6a0(param_1 + 0x68);
  pvVar1 = *(void **)(param_1 + 0x88);
  pvVar4 = (void *)0x0;
  while (pvVar3 = pvVar4, pvVar2 = pvVar1, pvVar2 != (void *)0x0) {
    pvVar1 = *(void **)((longlong)pvVar2 + 0x18);
    pvVar5 = (void *)(*(longlong *)((longlong)pvVar2 + 8) + 0x390);
    if (*(longlong *)((longlong)pvVar2 + 8) == 0) {
      pvVar5 = (void *)0x0;
    }
    pvVar4 = pvVar2;
    if (pvVar5 == param_2) {
      if (pvVar2 == *(void **)(param_1 + 0x88)) {
        *(void **)(param_1 + 0x88) = pvVar1;
      }
      else {
        *(void **)((longlong)pvVar3 + 0x18) = pvVar1;
      }
      pvVar4 = pvVar3;
      if (pvVar2 != (void *)0x0) {
        AK::MemoryMgr::Free(0,pvVar2);
      }
    }
  }
  return;
}



// FUNCTION 1453a3960 FUN_1453a3960 body=238 status=ok
// SIG undefined FUN_1453a3960(void)

ulonglong FUN_1453a3960(longlong param_1,longlong param_2,int *param_3,uint *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  if ((*(byte *)(param_1 + 0x62) & 0xf) < 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    if (((byte)*(undefined4 *)(*(longlong *)(param_2 + 0x2a0) + 0xc) & 0x7c) == 4) {
      iVar3 = *(int *)(*(longlong *)(param_2 + 0x2a0) + 0x28);
    }
    else {
      iVar3 = 0;
    }
    *param_3 = iVar3;
    uVar6 = (uint)DAT_14c72f434;
    uVar2 = iVar3 + -1 + uVar6;
    *param_3 = (uVar2 / uVar6) * uVar6;
    iVar3 = FUN_1453a7480(uVar1,(ulonglong)uVar2 % (ulonglong)uVar6);
    uVar4 = FUN_1453a7440(uVar1);
    iVar3 = (int)uVar4 - iVar3;
    if (*param_3 + iVar3 < *(int *)(param_2 + 0x3b8) + *(int *)(param_2 + 0x3b4)) {
      uVar6 = (*(int *)(param_2 + 0x3c0) - *(int *)(param_2 + 0x3b4)) + *param_3 + iVar3;
      uVar2 = *(uint *)(param_2 + 0x3bc);
      uVar5 = uVar6 % uVar2;
      *param_4 = uVar5;
      if ((int)uVar5 < 0) {
        *param_4 = 0;
      }
      return CONCAT71((int7)((ulonglong)uVar6 / (ulonglong)uVar2 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1453a3a50 FUN_1453a3a50 body=199 status=ok
// SIG undefined FUN_1453a3a50(void)

void FUN_1453a3a50(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  if (((*(byte *)(param_1 + 0x62) & 2) != 0) && (*(int *)(param_1 + 0x5c) != -1)) {
    param_3 = *(undefined4 *)(param_1 + 0x5c);
  }
  FUN_1453a3f50(param_1,param_2,param_3);
  for (plVar2 = *(longlong **)(param_1 + 0x88); plVar2 != (longlong *)0x0;
      plVar2 = (longlong *)plVar2[3]) {
    lVar3 = *plVar2;
    if (*(longlong *)(lVar3 + 8) != 0) {
      uVar1 = *(undefined4 *)(lVar3 + 0x18);
      FUN_1450737c0(lVar3 + 8);
      *(undefined4 *)(lVar3 + 0x18) = uVar1;
    }
    FUN_1450ee5d0(plVar2[1],*(undefined4 *)(*plVar2 + 4),0);
  }
  FUN_1450ed1a0(param_1);
  return;
}



// FUNCTION 1453a3b20 FUN_1453a3b20 body=137 status=ok
// SIG undefined FUN_1453a3b20(void)

void FUN_1453a3b20(longlong param_1)

{
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  
  FUN_1450ed2f0();
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_40 = 0xff00;
  local_48 = FUN_1453a7490(*(undefined8 *)(param_1 + 0x10));
  local_24 = FUN_1453a74a0(*(undefined8 *)(param_1 + 0x10));
  local_1c = 1;
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x138))
            (*(longlong **)(param_1 + 0x90),&local_48,param_1 + 0xa0,1);
  if ((*(byte *)(param_1 + 0xbc) & 1) == 0) {
    FUN_1453a3c70(param_1);
    *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) | 1;
  }
  return;
}



// FUNCTION 1453a3bb0 FUN_1453a3bb0 body=149 status=ok
// SIG undefined FUN_1453a3bb0(void)

void FUN_1453a3bb0(longlong param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x88);
  while (pvVar1 != (void *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)((longlong)pvVar1 + 0x18);
    *(undefined8 *)((longlong)pvVar1 + 0x18) = 0;
    if (pvVar1 != (void *)0x0) {
      AK::MemoryMgr::Free(0,pvVar1);
    }
    pvVar1 = *(void **)(param_1 + 0x88);
  }
  FUN_14555e530(param_1 + 0x68);
  FUN_1450ed430(param_1);
  FUN_1453a7430(*(undefined8 *)(param_1 + 0x10),param_1);
  if ((*(byte *)(param_1 + 0xbc) & 2) == 0) {
    *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) | 2;
    FUN_1450ed1a0(param_1);
    return;
  }
  return;
}



// FUNCTION 1453a3c70 FUN_1453a3c70 body=722 status=ok
// SIG undefined FUN_1453a3c70(void)

void FUN_1453a3c70(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint local_res10;
  longlong local_res18;
  
  lVar5 = *(longlong *)(param_1 + 0x90);
  uVar14 = 0;
  uVar2 = *(uint *)(lVar5 + 0x120);
  if (uVar2 != 0) {
    local_res18 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + 0x118);
      if (*(int *)(param_1 + 0x98) == *(int *)(lVar6 + local_res18)) {
        lVar10 = FUN_1453ad620(*(undefined8 *)(param_1 + 0x90),
                               *(undefined4 *)(lVar6 + 4 + local_res18));
        if (lVar10 != 0) {
          iVar13 = 0;
          if ((((byte)*(uint *)(lVar10 + 0xc) & 0x7c) == 4) &&
             ((((*(uint *)(lVar10 + 0xc) >> 1 & 1) == 0 ||
               (*(int *)(lVar6 + 0xc + local_res18) < *(int *)(param_1 + 0xb8))) ||
              (*(int *)(lVar6 + 0x18 + local_res18) != 0)))) {
            iVar13 = *(int *)(lVar10 + 0x28);
          }
          iVar15 = *(int *)(lVar6 + 0x10 + local_res18);
          iVar3 = *(int *)(lVar6 + 0xc + local_res18);
          iVar4 = *(int *)(param_1 + 0xb8);
          if (iVar4 < iVar15 + iVar3) {
            if (iVar3 < iVar4) {
              iVar12 = iVar4 - iVar13;
              local_res10 = (uint)((iVar4 - iVar3) + *(int *)(local_res18 + 0x18 + lVar6)) %
                            *(uint *)(local_res18 + 0x14 + lVar6);
              iVar15 = (iVar15 - iVar4) + iVar3;
            }
            else {
              local_res10 = *(uint *)(local_res18 + 0x18 + lVar6);
              iVar12 = iVar3 - iVar13;
            }
            puVar11 = AK::MemoryMgr::Malloc(0,0x50);
            if (puVar11 != (undefined8 *)0x0) {
              *(int *)(puVar11 + 2) = iVar12;
              *puVar11 = &PTR_FUN_149d45b68;
              puVar1 = (undefined4 *)(lVar6 + local_res18);
              uVar7 = puVar1[1];
              uVar8 = puVar1[2];
              uVar9 = puVar1[3];
              *(undefined4 *)(puVar11 + 3) = *puVar1;
              *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar7;
              *(undefined4 *)(puVar11 + 4) = uVar8;
              *(undefined4 *)((longlong)puVar11 + 0x24) = uVar9;
              puVar11[5] = *(undefined8 *)(lVar6 + 0x10 + local_res18);
              *(undefined4 *)(puVar11 + 6) = *(undefined4 *)(lVar6 + 0x18 + local_res18);
              *(int *)((longlong)puVar11 + 0x34) = iVar15;
              *(uint *)(puVar11 + 7) = local_res10;
              *(int *)((longlong)puVar11 + 0x3c) = iVar13;
              puVar11[9] = 0;
              FUN_14555e480(param_1 + 0x68,puVar11);
              if (*(short *)(lVar10 + 0x1a) != 0x10) {
                FUN_1453a3540(puVar11,*(undefined8 *)(param_1 + 0x90),uVar14,0,
                              *(undefined4 *)(lVar6 + 0xc + local_res18));
                FUN_1453a3540(puVar11,*(undefined8 *)(param_1 + 0x90),uVar14,1,
                              *(undefined4 *)(lVar6 + 0xc + local_res18));
                FUN_1453a3540(puVar11,*(undefined8 *)(param_1 + 0x90),uVar14,2,
                              *(undefined4 *)(lVar6 + 0xc + local_res18));
                FUN_1453a3540(puVar11,*(undefined8 *)(param_1 + 0x90),uVar14,3,
                              *(undefined4 *)(lVar6 + 0xc + local_res18));
                FUN_1453a3540(puVar11,*(undefined8 *)(param_1 + 0x90),uVar14,4,
                              *(undefined4 *)(lVar6 + 0xc + local_res18));
              }
            }
          }
        }
        iVar13 = *(int *)(lVar6 + 8 + local_res18);
        if (((iVar13 != 0) &&
            (iVar15 = *(int *)(lVar6 + 0xc + local_res18),
            *(int *)(param_1 + 0xb8) <= *(int *)(lVar6 + 0x10 + local_res18) + iVar15)) &&
           (puVar11 = AK::MemoryMgr::Malloc(0,0x20), puVar11 != (undefined8 *)0x0)) {
          *(int *)(puVar11 + 2) = iVar15;
          *puVar11 = &PTR_FUN_149d45b88;
          *(int *)(puVar11 + 3) = iVar13;
          FUN_14555e480(param_1 + 0x68,puVar11);
        }
      }
      local_res18 = local_res18 + 0x1c;
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar2);
  }
  return;
}



// FUNCTION 1453a3f50 FUN_1453a3f50 body=1548 status=ok
// SIG undefined FUN_1453a3f50(void)

void FUN_1453a3f50(longlong param_1,ulonglong param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined4 uVar20;
  undefined4 local_res8 [2];
  uint local_res10;
  undefined4 local_res18;
  undefined4 *in_stack_ffffffffffffff38;
  longlong *in_stack_ffffffffffffff50;
  longlong *plVar21;
  longlong *in_stack_ffffffffffffff68;
  undefined4 uVar22;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  longlong local_58 [4];
  
  local_res18 = (undefined4)param_3;
  local_res10 = (uint)param_2;
  uVar18 = param_2 & 0xffffffff;
  iVar7 = FUN_14555e4e0(param_1 + 0x68,param_2,param_3,&local_88);
  do {
    if (iVar7 != 0x2d) {
      return;
    }
    iVar16 = (int)local_88[2] - (int)uVar18;
    uVar5 = local_70 >> 0x20;
    local_70 = CONCAT44((int)uVar5,iVar16);
    iVar7 = (**(code **)(*local_88 + 8))();
    plVar17 = local_88;
    lVar8 = DAT_14c791060;
    if (iVar7 == 0) {
      plVar21 = local_88 + 3;
      local_68 = 0;
      local_64 = 4;
      lVar8 = FUN_1453ad620(*(undefined8 *)(param_1 + 0x90),
                            *(undefined4 *)((longlong)local_88 + 0x1c));
      uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
      uVar22 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
      if (lVar8 != 0) {
        uVar18 = *(ulonglong *)(param_1 + 0x10);
        local_70 = uVar18;
        if (*(short *)(lVar8 + 0x1a) == 0x10) {
          lVar9 = *(longlong *)(*(longlong *)(uVar18 + 0x10) + 0x68);
          uVar10 = FUN_1453a74b0(uVar18);
          in_stack_ffffffffffffff38 = (undefined4 *)FUN_1453a7490(local_70);
          in_stack_ffffffffffffff68 = local_58;
          plVar21 = (longlong *)CONCAT44(uVar20,*(undefined4 *)((longlong)plVar17 + 0x34));
          iVar7 = FUN_1450ef4a0(lVar9 + 0x60,param_1,*(undefined8 *)(param_1 + 0x90),lVar8,
                                in_stack_ffffffffffffff38,&local_68,uVar10,plVar21,(int)plVar17[7],
                                iVar16,in_stack_ffffffffffffff68);
          if (local_58[0] == 0) goto LAB_1453a4342;
          puVar15 = (undefined8 *)(local_58[0] + 0x58);
          in_stack_ffffffffffffff50 = plVar21;
        }
        else {
          iVar7 = *(int *)((longlong)plVar17 + 0x3c);
          uVar6 = FUN_1453a74c0();
          uVar10 = FUN_1453a74b0(uVar18);
          uVar11 = FUN_1453a7490(local_70);
          in_stack_ffffffffffffff68 = (longlong *)CONCAT44(uVar22,param_4);
          in_stack_ffffffffffffff38 = &local_68;
          iVar7 = FUN_144d52100(param_1,*(undefined8 *)(param_1 + 0x90),lVar8,uVar11,
                                in_stack_ffffffffffffff38,uVar10,uVar6,plVar21,(int)plVar17[7],
                                iVar7 + iVar16,in_stack_ffffffffffffff68,&local_60);
          if (local_60 == 0) {
LAB_1453a4342:
            puVar15 = (undefined8 *)0x0;
            in_stack_ffffffffffffff50 = plVar21;
          }
          else {
            puVar15 = (undefined8 *)(local_60 + 0x390);
            in_stack_ffffffffffffff50 = plVar21;
          }
        }
        if (iVar7 == 1) {
          if ((*(byte *)(param_1 + 0x62) & 2) != 0) {
            (**(code **)*puVar15)(puVar15,*(undefined4 *)(param_1 + 0x5c));
            uVar18 = (ulonglong)local_res10;
            while (plVar21 = (longlong *)plVar17[9], plVar21 != (longlong *)0x0) {
              plVar17[9] = plVar21[3];
              plVar21[3] = 0;
              lVar8 = *plVar21;
              plVar21[1] = (longlong)(puVar15 + -0x72);
              if (*(longlong *)(lVar8 + 8) == 0) {
                uVar20 = 0;
              }
              else {
                local_7c = *(undefined4 *)(lVar8 + 0x18);
                local_78 = 0;
                FUN_1450737c0(lVar8 + 8);
                *(undefined4 *)(lVar8 + 0x18) = local_7c;
                uVar20 = local_78;
              }
              FUN_1450ee5d0(plVar21[1],*(undefined4 *)(*plVar21 + 4),uVar20);
              AK::MemoryMgr::Free(0,plVar21);
            }
            goto LAB_1453a4440;
          }
          lVar8 = plVar17[5];
          iVar7 = *(int *)((longlong)plVar17 + 0x24);
          puVar12 = AK::MemoryMgr::Malloc(0,0x28);
          if (puVar12 == (undefined8 *)0x0) {
            (**(code **)*puVar15)(puVar15,0);
          }
          else {
            *(int *)(puVar12 + 2) = (int)lVar8 + iVar7;
            puVar12[3] = puVar15;
            *puVar12 = &PTR_FUN_149d45b78;
            *(undefined1 *)(puVar12 + 4) = 0;
            FUN_14555e480(param_1 + 0x68,puVar12);
            while (plVar21 = (longlong *)plVar17[9], plVar21 != (longlong *)0x0) {
              plVar17[9] = plVar21[3];
              puVar13 = puVar15 + -0x72;
              if (puVar15 == (undefined8 *)0x0) {
                puVar13 = (undefined8 *)0x0;
              }
              plVar21[3] = 0;
              plVar21[1] = (longlong)puVar13;
              *(undefined1 *)(puVar12 + 4) = 1;
              if (*(longlong *)(param_1 + 0x88) == 0) {
                *(longlong **)(param_1 + 0x88) = plVar21;
                plVar21[3] = 0;
              }
              else {
                plVar21[3] = *(longlong *)(param_1 + 0x88);
                *(longlong **)(param_1 + 0x88) = plVar21;
              }
              if (*(int *)(*plVar21 + 4) == 3) {
                puVar13 = puVar15 + -0x72;
                if (puVar15 == (undefined8 *)0x0) {
                  puVar13 = (undefined8 *)0x0;
                }
                FUN_1450ee8f0(puVar13);
              }
              else if (*(int *)(*plVar21 + 4) == 4) {
                puVar14 = (uint *)((longlong)puVar15 + 0x3c);
                if (puVar15 == (undefined8 *)0x0) {
                  puVar14 = (uint *)&DAT_000003cc;
                }
                *puVar14 = *puVar14 | 1;
              }
            }
          }
        }
      }
      uVar18 = (ulonglong)local_res10;
    }
    else if (iVar7 == 1) {
      (*(code *)**(undefined8 **)local_88[3])();
      if ((char)plVar17[4] != '\0') {
        plVar21 = *(longlong **)(param_1 + 0x88);
        plVar4 = (longlong *)0x0;
        while (plVar3 = plVar21, plVar3 != (longlong *)0x0) {
          lVar8 = plVar3[1] + 0x390;
          if (plVar3[1] == 0) {
            lVar8 = 0;
          }
          if (lVar8 == plVar17[3]) {
            lVar8 = *plVar3;
            if (*(longlong *)(lVar8 + 8) == 0) {
              uVar20 = 0;
            }
            else {
              local_res8[0] = *(undefined4 *)(lVar8 + 0x18);
              local_80 = 0;
              FUN_1450737c0(lVar8 + 8,0,local_res8,&local_80);
              *(undefined4 *)(lVar8 + 0x18) = local_res8[0];
              uVar20 = local_80;
            }
            FUN_1450ee5d0(plVar3[1],*(undefined4 *)(*plVar3 + 4),uVar20);
            plVar21 = (longlong *)plVar3[3];
            if (plVar3 == *(longlong **)(param_1 + 0x88)) {
              *(longlong **)(param_1 + 0x88) = plVar21;
            }
            else {
              plVar4[3] = (longlong)plVar21;
            }
            AK::MemoryMgr::Free(0,plVar3);
          }
          else {
            plVar21 = (longlong *)plVar3[3];
            plVar4 = plVar3;
          }
        }
      }
    }
    else if (iVar7 == 3) {
      uVar2 = *(uint *)(local_88 + 3);
      do {
        while (iVar7 = *(int *)(lVar8 + 0x108), iVar7 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x110));
          if (*(int *)(lVar8 + 0x108) < 0) goto LAB_1453a4007;
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x110));
        }
        LOCK();
        bVar19 = iVar7 == *(int *)(lVar8 + 0x108);
        if (bVar19) {
          *(int *)(lVar8 + 0x108) = iVar7 + 1;
        }
        UNLOCK();
      } while (!bVar19);
LAB_1453a4007:
      if (*(uint *)(lVar8 + 0x150) == 0) {
        plVar17 = (longlong *)0x0;
      }
      else {
        for (plVar17 = *(longlong **)
                        (*(longlong *)(lVar8 + 0x148) +
                        ((ulonglong)uVar2 % (ulonglong)*(uint *)(lVar8 + 0x150)) * 8);
            plVar17 != (longlong *)0x0; plVar17 = (longlong *)plVar17[1]) {
          if (*(uint *)(plVar17 + 2) == uVar2) goto LAB_1453a4039;
        }
        plVar17 = (longlong *)0x0;
LAB_1453a4039:
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plVar17 + 0x14) = *(int *)((longlong)plVar17 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar7 = *(int *)(lVar8 + 0x108);
      while (-1 < iVar7) {
        LOCK();
        bVar19 = iVar7 == *(int *)(lVar8 + 0x108);
        if (bVar19) {
          *(int *)(lVar8 + 0x108) = iVar7 + -1;
        }
        UNLOCK();
        if (bVar19) {
          if ((iVar7 + -1 == 0) && (0 < *(int *)(lVar8 + 0x138))) {
            SetEvent(*(HANDLE *)(lVar8 + 0x140));
          }
          goto LAB_1453a40a4;
        }
        iVar7 = *(int *)(lVar8 + 0x108);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x110));
LAB_1453a40a4:
      lVar8 = FUN_1453a7490(*(undefined8 *)(param_1 + 0x10));
      lVar9 = FUN_1453a74b0(*(undefined8 *)(param_1 + 0x10));
      if (plVar17 != (longlong *)0x0) {
        in_stack_ffffffffffffff50 =
             (longlong *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff50 >> 8),1);
        in_stack_ffffffffffffff38 =
             (undefined4 *)((ulonglong)in_stack_ffffffffffffff38 & 0xffffffff00000000);
        FUN_145087840(plVar17,lVar8,*(undefined8 *)(lVar8 + 0x58),*(undefined4 *)(lVar9 + 0x14),
                      in_stack_ffffffffffffff38,lVar9,local_70 & 0xffffffff,
                      in_stack_ffffffffffffff50);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0x14);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar17 + 0x18))(plVar17);
        }
      }
    }
LAB_1453a4440:
    plVar17 = local_88;
    if (local_88 != (longlong *)0x0) {
      (**(code **)*local_88)(local_88,0);
      AK::MemoryMgr::Free(0,plVar17);
    }
    iVar7 = FUN_14555e4e0(param_1 + 0x68,uVar18,local_res18,&local_88);
  } while( true );
}



// FUNCTION 1453a4560 FUN_1453a4560 body=156 status=ok
// SIG undefined FUN_1453a4560(void)

undefined8 * FUN_1453a4560(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_149d45ba0;
  param_1[3] = &PTR_LAB_149d45c08;
  param_1[5] = &PTR_FUN_149d45c18;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  lVar3 = param_1[0x12];
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
    }
  }
  FUN_14538e8e0(param_1 + 0x14);
  FUN_14555e460(param_1 + 0xd);
  FUN_1450ed080(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1453a4610 FUN_1453a4610 body=30 status=ok
// SIG undefined FUN_1453a4610(void)

longlong FUN_1453a4610(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*param_1 + 8) - (ulonglong)*(uint *)(param_1[1] + 0x90);
  lVar1 = 0;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  return lVar1;
}



// FUNCTION 1453a4630 FUN_1453a4630 body=21 status=ok
// SIG undefined FUN_1453a4630(void)

longlong FUN_1453a4630(longlong *param_1,longlong param_2)

{
  return ((ulonglong)*(uint *)(param_1[1] + 0x90) - *(longlong *)(*param_1 + 8)) + param_2;
}



// FUNCTION 1453a4650 FUN_1453a4650 body=25 status=ok
// SIG undefined FUN_1453a4650(void)

longlong FUN_1453a4650(longlong *param_1,longlong param_2)

{
  return (*(longlong *)(*param_1 + 8) - (ulonglong)*(uint *)(param_1[1] + 0x90)) + param_2;
}



// FUNCTION 1453a4670 FUN_1453a4670 body=77 status=ok
// SIG undefined FUN_1453a4670(void)

undefined8 * FUN_1453a4670(undefined8 *param_1)

{
  FUN_1450ef060();
  *param_1 = &PTR_LAB_149d45c20;
  param_1[3] = &PTR_LAB_149d45d48;
  param_1[5] = &PTR_FUN_149d45d58;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  return param_1;
}



// FUNCTION 1453a46c0 FUN_1453a46c0 body=161 status=ok
// SIG undefined FUN_1453a46c0(void)

void FUN_1453a46c0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = param_1[0x11];
  *param_1 = &PTR_LAB_149d45c20;
  param_1[3] = &PTR_LAB_149d45d48;
  param_1[5] = &PTR_FUN_149d45d58;
  while (lVar1 != 0) {
    plVar2 = (longlong *)param_1[0x11];
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
      if (*plVar2 == 0) {
        param_1[0x10] = 0;
        lVar3 = 0;
      }
      param_1[0x11] = lVar3;
      *plVar2 = 0;
    }
    FUN_1450efdf0(lVar1);
    lVar1 = param_1[0x11];
  }
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  FUN_1450ef0b0(param_1);
  return;
}



// FUNCTION 1453a4770 FUN_1453a4770 body=221 status=ok
// SIG undefined FUN_1453a4770(void)

int FUN_1453a4770(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 local_138 [264];
  longlong local_30;
  longlong local_28;
  
  FUN_1453a5380(local_138,param_1,1);
  lVar2 = local_30;
  while (local_30 = lVar2, lVar2 != param_2) {
    (**(code **)(*param_1 + 0xa0))(param_1,local_138,1);
    lVar2 = local_30;
  }
  iVar4 = (int)param_1[0xe];
  if (param_1[2] != 0) {
    iVar3 = FUN_1450ef3d0();
    iVar4 = iVar4 + iVar3;
  }
  uVar1 = *(undefined8 *)(param_1[0xd] + 8);
  if (*(longlong *)(lVar2 + 0x20) == 0) {
    iVar4 = 0;
  }
  else {
    iVar3 = FUN_1453a5aa0(local_138,0);
    iVar4 = (*(int *)(local_28 + 0x90) - *(int *)(local_30 + 8)) + (((int)uVar1 - iVar4) - iVar3);
  }
  FUN_1453a5440(local_138);
  return iVar4;
}



// FUNCTION 1453a4850 FUN_1453a4850 body=162 status=ok
// SIG undefined FUN_1453a4850(void)

void FUN_1453a4850(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  lVar3 = param_1[0x11];
  if (lVar3 != 0) {
    do {
      (**(code **)(*param_1 + 0x120))(param_1,lVar3);
      FUN_1450f00e0(lVar3);
      plVar1 = (longlong *)param_1[0x11];
      if (plVar1 != (longlong *)0x0) {
        lVar2 = *plVar1;
        if (*plVar1 == 0) {
          param_1[0x10] = 0;
          lVar2 = 0;
        }
        param_1[0x11] = lVar2;
        *plVar1 = 0;
      }
      FUN_1450efdf0(lVar3);
      lVar3 = param_1[0x11];
    } while (lVar3 != 0);
  }
  FUN_1450ef350(param_1);
  FUN_1450ed1a0(param_1);
  return;
}



// FUNCTION 1453a4900 FUN_1453a4900 body=354 status=ok
// SIG undefined FUN_1453a4900(void)

void FUN_1453a4900(longlong *param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  undefined1 uVar11;
  
  lVar3 = param_1[0xe];
  *param_4 = *param_4 - lVar3;
  param_2 = param_2 - lVar3;
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  if (((*(byte *)((longlong)param_1 + 0x62) & 2) != 0) && (*(int *)((longlong)param_1 + 0x5c) != -1)
     ) {
    param_3 = *(undefined4 *)((longlong)param_1 + 0x5c);
  }
  uVar2 = *(uint *)(param_1 + 0x12);
  lVar4 = *param_4;
  lVar3 = (ulonglong)uVar2 + param_2;
  (**(code **)(*param_1 + 0x100))(param_1,lVar3);
  bVar7 = true;
  plVar6 = (longlong *)param_1[0x11];
  plVar9 = (longlong *)0x0;
joined_r0x0001453a496e:
  do {
    plVar8 = plVar6;
    if (plVar8 == (longlong *)0x0) {
      FUN_1450ef380(param_1,param_2,param_3);
      return;
    }
    bVar1 = *(byte *)(plVar8 + 9);
    if (((char)param_4[1] == '\0') || (plVar8[1] < (longlong)(lVar4 + (ulonglong)uVar2))) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    FUN_1450efc50(plVar8,lVar3,param_3,*(undefined4 *)(param_1[0xd] + 0x54),uVar11);
    if (((bVar1 & 1) != 0) && ((*(byte *)(plVar8 + 9) & 1) == 0)) {
      (**(code **)(*param_1 + 0x118))(param_1,plVar8);
    }
    if (bVar7) {
      lVar5 = *plVar8;
      cVar10 = FUN_1450efdd0();
      if (((cVar10 != '\0') && (lVar5 != 0)) && (*(longlong *)(lVar5 + 8) < lVar3)) {
        plVar6 = (longlong *)*plVar8;
        if (plVar8 == (longlong *)param_1[0x11]) {
          param_1[0x11] = (longlong)plVar6;
        }
        else {
          *plVar9 = (longlong)plVar6;
        }
        if (plVar8 == (longlong *)param_1[0x10]) {
          param_1[0x10] = (longlong)plVar9;
        }
        FUN_1450efdf0();
        goto joined_r0x0001453a496e;
      }
      bVar7 = false;
    }
    plVar6 = (longlong *)*plVar8;
    plVar9 = plVar8;
  } while( true );
}



// FUNCTION 1453a4a70 FUN_1453a4a70 body=714 status=ok
// SIG undefined FUN_1453a4a70(void)

byte FUN_1453a4a70(longlong *param_1,int *param_2,undefined8 param_3,float *param_4,int *param_5,
                  undefined8 param_6,undefined4 param_7,char param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  bool bVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float local_res8 [2];
  
  puVar1 = (undefined8 *)param_1[0x11];
  if ((param_4[2] != 0.0) || (*(char *)(param_4 + 3) != '\0')) {
    *(int *)(param_1 + 10) = (int)param_1[10] + 1;
    iVar8 = (**(code **)(*param_1 + 0x110))(param_1,param_4[2],param_2,param_3);
    if (iVar8 != 1) {
      FUN_1450ed8c0();
      FUN_1450ed1a0(param_1);
      return 0;
    }
    FUN_1450ed1a0(param_1);
    param_4[2] = 0.0;
    *(undefined1 *)(param_4 + 3) = 0;
    return 2;
  }
  uVar9 = 0;
  local_res8[0] = 0.0;
  if (param_2 == (int *)0x0) {
    fVar7 = *param_4;
    uVar10 = (ulonglong)(uint)fVar7;
    *(undefined1 *)(param_4 + 1) = 0;
    if (0 < (int)fVar7) {
      uVar9 = (ulonglong)(uint)fVar7;
    }
    local_res8[0] = (float)uVar9;
  }
  else {
    if (puVar1[4] != 0) {
      uVar2 = *(undefined8 *)(puVar1[4] + 0x80);
      fVar7 = (float)FUN_1453a9e50(uVar2,0,0);
      if (*(char *)(param_4 + 1) == '\0') {
        fVar11 = *param_4;
      }
      else {
        fVar11 = (float)(int)((float)(uint)fVar7 * *param_4);
      }
      fVar12 = fVar11;
      if ((param_8 != '\0') && (fVar12 = 0.0, fVar7 != 0.0)) {
        fVar12 = (float)((uint)fVar11 % (uint)fVar7);
      }
      FUN_1453a9d90(uVar2,param_2,fVar12,param_7,param_6,local_res8);
      if ((uint)fVar7 < (uint)local_res8[0]) {
        local_res8[0] = fVar7;
      }
      *(undefined1 *)(param_4 + 1) = 0;
      fVar11 = fVar12;
      if ((uint)local_res8[0] < (uint)fVar12) {
        fVar11 = local_res8[0];
      }
      *param_4 = (float)((int)fVar12 - (int)fVar11);
      if (((uint)fVar7 <= (uint)local_res8[0]) && ((fVar7 != 0.0 || (local_res8[0] != 0.0)))) {
        lVar3 = param_1[0x11];
        *(int *)(param_1 + 10) = (int)param_1[10] + 1;
        FUN_1450f00e0(lVar3);
        puVar4 = (ulonglong *)param_1[0x11];
        if (puVar4 != (ulonglong *)0x0) {
          uVar10 = *puVar4;
          if (*puVar4 == 0) {
            param_1[0x10] = 0;
            uVar10 = uVar9;
          }
          param_1[0x11] = uVar10;
          *puVar4 = 0;
        }
        FUN_1450efdf0(lVar3);
        (**(code **)(*param_1 + 0x100))(param_1,local_res8[0]);
        FUN_1450ed1a0(param_1);
        return -(*(longlong *)(param_1[0x11] + 0x20) != 0) & 2;
      }
      if ((((*(ushort *)(param_2 + 5) & 0x40) == 0) || (local_res8[0] != 0.0)) ||
         (((byte)*(ushort *)(param_2 + 5) & 0x38) == 8)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      iVar8 = FUN_1453a9e20(uVar2);
      uVar9 = (ulonglong)(uint)local_res8[0];
      uVar10 = (ulonglong)(uint)local_res8[0];
      if (*param_2 < 1) {
        if (bVar5) {
          uVar10 = (ulonglong)(uint)((int)local_res8[0] - iVar8);
        }
      }
      else {
        uVar10 = (ulonglong)(uint)((int)local_res8[0] + param_2[2]);
        if (((int)local_res8[0] + param_2[2] < 0) && (!bVar5)) {
          uVar10 = 0;
        }
      }
      goto LAB_1453a4c76;
    }
    *(undefined1 *)(param_4 + 1) = 0;
    uVar10 = uVar9;
  }
  *param_4 = 0.0;
LAB_1453a4c76:
  iVar8 = FUN_1450f0080(puVar1,uVar9,uVar10);
  local_res8[0] = (float)((int)local_res8[0] + *(int *)(puVar1 + 1));
  *(float *)(param_1 + 0x12) = local_res8[0];
  (**(code **)(*param_1 + 0x100))(param_1,local_res8[0]);
  puVar1 = (undefined8 *)*puVar1;
  while (iVar6 = iVar8, puVar1 != (undefined8 *)0x0) {
    iVar8 = ((int)local_res8[0] - *(int *)((longlong)puVar1 + 0x2c)) - *(int *)(puVar1 + 1);
    puVar1 = (undefined8 *)*puVar1;
    if (iVar8 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  *param_5 = iVar6;
  return 1;
}



// FUNCTION 1453a4d40 FUN_1453a4d40 body=384 status=ok
// SIG undefined FUN_1453a4d40(void)

void FUN_1453a4d40(longlong *param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (*(longlong *)(param_2 + 0x108) == 0) {
    plVar5 = (longlong *)param_1[0x11];
    local_38._0_4_ = SUB84(plVar5,0);
    uVar2 = (undefined4)local_38;
    local_38._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
    uVar3 = local_38._4_4_;
    uStack_30._0_4_ = SUB84(param_1,0);
    uVar11 = (undefined4)uStack_30;
    uStack_30._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    uVar12 = uStack_30._4_4_;
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    local_38 = plVar5;
    uStack_30 = param_1;
    if (*(char *)(param_2 + 299) == '\0') {
      lVar9 = param_1[0xe];
      lVar7 = *(longlong *)(param_1[0xd] + 8);
      if (param_1[2] != 0) {
        lVar6 = FUN_1450ef3d0();
        lVar9 = lVar9 + lVar6;
      }
      local_38._0_4_ = uVar2;
      local_38._4_4_ = uVar3;
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        plVar5 = (longlong *)*plVar5;
        do {
          if (lVar7 - lVar9 <= (longlong)(plVar5[1] - (ulonglong)*(uint *)(param_1 + 0x12))) break;
          plVar1 = (longlong *)*plVar5;
          local_38._0_4_ = SUB84(plVar5,0);
          local_38._4_4_ = (undefined4)((ulonglong)plVar5 >> 0x20);
          plVar5 = plVar1;
          uVar11 = (undefined4)uStack_30;
          uVar12 = uStack_30._4_4_;
        } while (plVar1 != (longlong *)0x0);
      }
      uStack_30 = (longlong *)CONCAT44(uVar12,uVar11);
    }
  }
  else {
    uStack_30 = *(longlong **)(param_2 + 0x110);
    local_38 = (longlong *)**(longlong **)(param_2 + 0x108);
    if ((longlong *)**(longlong **)(param_2 + 0x108) == (longlong *)0x0) {
      *(undefined8 *)(param_2 + 0x108) = 0;
      return;
    }
  }
  lVar9 = *local_38;
  uVar10 = 0;
  lVar7 = 0;
  if (lVar9 == 0) {
    if ((param_3 != '\0') || (cVar4 = (**(code **)(*param_1 + 0xf8))(param_1), cVar4 == '\0')) {
      uVar10 = 1;
      goto LAB_1453a4e81;
    }
    lVar9 = *local_38;
  }
  lVar8 = local_38[1] - (ulonglong)*(uint *)(param_1 + 0x12);
  lVar6 = *(longlong *)(lVar9 + 8) - (ulonglong)*(uint *)(param_1 + 0x12);
  lVar9 = lVar7;
  if (-1 < lVar6) {
    lVar9 = lVar6;
  }
  if (-1 < lVar8) {
    lVar7 = lVar8;
  }
  lVar7 = lVar9 - lVar7;
LAB_1453a4e81:
  FUN_1453a5880(param_2,&local_38);
  FUN_1453a5870(param_2,lVar7,uVar10);
  return;
}



// FUNCTION 1453a4ec0 FUN_1453a4ec0 body=168 status=ok
// SIG undefined FUN_1453a4ec0(void)

void FUN_1453a4ec0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar1 = *(longlong **)(param_2 + 0x108);
  uVar5 = 0;
  lVar6 = 0;
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    cVar2 = (**(code **)(*param_1 + 0xf8))();
    if (cVar2 == '\0') {
      uVar5 = 1;
      goto LAB_1453a4f3f;
    }
    lVar3 = *plVar1;
  }
  lVar7 = plVar1[1] - (ulonglong)*(uint *)(param_1 + 0x12);
  lVar4 = *(longlong *)(lVar3 + 8) - (ulonglong)*(uint *)(param_1 + 0x12);
  lVar3 = lVar6;
  if (-1 < lVar4) {
    lVar3 = lVar4;
  }
  if (-1 < lVar7) {
    lVar6 = lVar7;
  }
  lVar6 = lVar3 - lVar6;
LAB_1453a4f3f:
  FUN_1453a5870(param_2,lVar6,uVar5);
  return;
}



// FUNCTION 1453a4f70 FUN_1453a4f70 body=181 status=ok
// SIG undefined FUN_1453a4f70(void)

void FUN_1453a4f70(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar1 = *(undefined8 **)(param_1 + 0x88);
  if (puVar1[4] == 0) {
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  puVar2 = (undefined8 *)*puVar1;
  lVar3 = (longlong)*(int *)((longlong)puVar1 + 0x2c) + puVar1[1];
  lVar6 = (longlong)*(int *)(puVar1[4] + 0xa0) + puVar1[1];
  while ((lVar4 = lVar6, puVar2 != (undefined8 *)0x0 && (puVar2[4] != 0))) {
    lVar5 = (longlong)*(int *)((longlong)puVar2 + 0x2c) + puVar2[1];
    lVar6 = (longlong)*(int *)(puVar2[4] + 0xa0) + puVar2[1];
    puVar2 = (undefined8 *)*puVar2;
    if (lVar3 <= lVar5) {
      lVar5 = lVar3;
    }
    lVar3 = lVar5;
    if (lVar4 <= lVar6) {
      lVar6 = lVar4;
    }
  }
  *param_2 = lVar3 - (ulonglong)*(uint *)(param_1 + 0x90);
  *param_3 = lVar4 - (ulonglong)*(uint *)(param_1 + 0x90);
  return;
}



// FUNCTION 1453a5070 FUN_1453a5070 body=122 status=ok
// SIG undefined FUN_1453a5070(void)

void FUN_1453a5070(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *(int *)(param_1 + 10) = (int)param_1[10] + 1;
  if ((*(byte *)((longlong)param_1 + 0x62) & 0xf) == 0) {
    (**(code **)(*param_1 + 0x60))();
    FUN_1450ed1a0(param_1);
    return;
  }
  if ((*(byte *)((longlong)param_1 + 0x62) & 1) != 0) {
    uVar1 = *(uint *)(param_1 + 0x12);
    lVar3 = param_1[0xe];
    for (puVar2 = (undefined8 *)param_1[0x11]; puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      FUN_1450f0330(puVar2,((ulonglong)uVar1 - lVar3) + param_2);
    }
  }
  FUN_1450ed1a0(param_1);
  return;
}



// FUNCTION 1453a5160 FUN_1453a5160 body=162 status=ok
// SIG undefined FUN_1453a5160(void)

undefined8 * FUN_1453a5160(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = AK::MemoryMgr::Malloc(0,0x50);
  if (pvVar1 != (void *)0x0) {
    puVar2 = (undefined8 *)FUN_1450efbe0(pvVar1,param_2,param_3);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      if (*(longlong *)(param_1 + 0x88) == 0) {
        *(undefined8 **)(param_1 + 0x88) = puVar2;
        *(undefined8 **)(param_1 + 0x80) = puVar2;
        return puVar2;
      }
      **(undefined8 **)(param_1 + 0x80) = puVar2;
      *(undefined8 **)(param_1 + 0x80) = puVar2;
      return puVar2;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1453a5210 FUN_1453a5210 body=131 status=ok
// SIG undefined FUN_1453a5210(void)

void FUN_1453a5210(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[0x11];
  if (lVar3 != 0) {
    do {
      (**(code **)(*param_1 + 0x120))(param_1,lVar3);
      FUN_1450f00e0(lVar3);
      plVar1 = (longlong *)param_1[0x11];
      if (plVar1 != (longlong *)0x0) {
        lVar2 = *plVar1;
        if (*plVar1 == 0) {
          param_1[0x10] = 0;
          lVar2 = 0;
        }
        param_1[0x11] = lVar2;
        *plVar1 = 0;
      }
      FUN_1450efdf0(lVar3);
      lVar3 = param_1[0x11];
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1453a52a0 FUN_1453a52a0 body=205 status=ok
// SIG undefined FUN_1453a52a0(void)

undefined8 * FUN_1453a52a0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = param_1[0x11];
  *param_1 = &PTR_LAB_149d45c20;
  param_1[3] = &PTR_LAB_149d45d48;
  param_1[5] = &PTR_FUN_149d45d58;
  while (lVar1 != 0) {
    plVar2 = (longlong *)param_1[0x11];
    if (plVar2 != (longlong *)0x0) {
      lVar3 = *plVar2;
      if (*plVar2 == 0) {
        param_1[0x10] = 0;
        lVar3 = 0;
      }
      param_1[0x11] = lVar3;
      *plVar2 = 0;
    }
    FUN_1450efdf0(lVar1);
    lVar1 = param_1[0x11];
  }
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  FUN_1450ef0b0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1453a5380 FUN_1453a5380 body=120 status=ok
// SIG undefined FUN_1453a5380(void)

longlong FUN_1453a5380(longlong param_1,longlong *param_2,byte param_3)

{
  *(byte *)(param_1 + 299) = param_3;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x128) = 1;
  (**(code **)(*param_2 + 0xa0))(param_2,param_1,0);
  *(byte *)(param_1 + 0x12a) = param_3 ^ 1;
  return param_1;
}



// FUNCTION 1453a5400 FUN_1453a5400 body=60 status=ok
// SIG undefined FUN_1453a5400(void)

longlong FUN_1453a5400(longlong param_1,undefined1 param_2)

{
  *(undefined2 *)(param_1 + 0x128) = 1;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined1 *)(param_1 + 0x12a) = 0;
  *(undefined1 *)(param_1 + 299) = param_2;
  return param_1;
}



// FUNCTION 1453a5440 FUN_1453a5440 body=3 status=ok
// SIG undefined FUN_1453a5440(void)

void FUN_1453a5440(void)

{
  return;
}



// FUNCTION 1453a5450 FUN_1453a5450 body=212 status=ok
// SIG undefined FUN_1453a5450(void)

longlong FUN_1453a5450(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (*(longlong *)(param_1 + 0x108) == 0) {
    return 0x7fffffffffffffff;
  }
  uVar2 = *(uint *)(param_1 + 0x100);
  lVar5 = 0;
  lVar4 = lVar5;
  lVar6 = lVar5;
  lVar8 = lVar5;
  if (uVar2 < 2) {
    lVar7 = 0;
    if (uVar2 == 0) goto LAB_1453a54ec;
  }
  else {
    uVar3 = (uVar2 - 2 >> 1) + 1;
    uVar9 = (ulonglong)uVar3;
    do {
      lVar7 = lVar4 * 8;
      lVar1 = lVar4 * 8;
      lVar4 = lVar4 + 2;
      lVar6 = lVar6 + *(longlong *)(*(longlong *)(*(longlong *)(param_1 + lVar7) + 8) + 0x70);
      lVar8 = lVar8 + *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8 + lVar1) + 8) + 0x70);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    lVar7 = lVar5;
    lVar5 = lVar8;
    if (uVar2 <= uVar3 * 2) goto LAB_1453a54ec;
  }
  lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + lVar4 * 8) + 8) + 0x70);
  lVar8 = lVar5;
LAB_1453a54ec:
  lVar4 = FUN_1453a4610(param_1 + 0x108);
  return lVar4 + lVar6 + lVar8 + lVar7;
}



// FUNCTION 1453a5530 FUN_1453a5530 body=99 status=ok
// SIG undefined FUN_1453a5530(void)

void FUN_1453a5530(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x20) != 0) {
    uVar1 = FUN_1453a59f0();
    FUN_1450f04a0(*(undefined8 *)(param_1 + 0x108),uVar1,param_3,param_4,param_5,param_6);
  }
  return;
}



// FUNCTION 1453a55a0 FUN_1453a55a0 body=127 status=ok
// SIG undefined FUN_1453a55a0(void)

longlong FUN_1453a55a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x20);
  if (lVar1 == 0) {
    if (param_2 != (longlong *)0x0) {
      lVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0xb8))();
      *param_2 = lVar1;
      if (lVar1 == 0) {
        lVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x110) + 0x10) + 0xb8))();
        *param_2 = lVar1;
      }
    }
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x80);
    if (param_2 != (longlong *)0x0) {
      *param_2 = *(longlong *)(lVar1 + 0x78);
      return lVar1;
    }
  }
  return lVar1;
}



// FUNCTION 1453a5620 FUN_1453a5620 body=406 status=ok
// SIG undefined FUN_1453a5620(void)

ulonglong FUN_1453a5620(longlong param_1,longlong param_2,int param_3,undefined4 *param_4,
                       undefined1 param_5,char param_6,longlong *param_7)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint local_res8 [2];
  
  lVar5 = FUN_1453a5450();
  if (param_2 < lVar5) {
    param_2 = lVar5;
  }
  uVar6 = FUN_1453a59f0(param_1,param_2);
  lVar12 = 0;
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x20);
  if ((lVar8 == 0) || (*(char *)(param_1 + 0x129) != '\0')) {
    *param_4 = 0;
    if ((param_6 == '\0') && (param_3 != 0)) {
      return 2;
    }
    uVar11 = 1;
  }
  else {
    uVar7 = FUN_1453a9a60(*(undefined8 *)(lVar8 + 0x80),uVar6 & 0xffffffff,param_3,param_4,param_5,
                          local_res8);
    uVar6 = (ulonglong)local_res8[0];
    uVar11 = uVar7 & 0xffffffff;
    if ((int)uVar7 != 1) {
      return uVar7;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x100);
  lVar8 = lVar12;
  lVar9 = lVar12;
  lVar10 = lVar12;
  if (uVar3 < 2) {
    lVar12 = 0;
    if (uVar3 == 0) goto LAB_1453a575c;
  }
  else {
    uVar4 = (uVar3 - 2 >> 1) + 1;
    uVar7 = (ulonglong)uVar4;
    do {
      lVar1 = lVar8 * 8;
      lVar2 = lVar8 * 8;
      lVar8 = lVar8 + 2;
      lVar9 = lVar9 + *(longlong *)(*(longlong *)(*(longlong *)(param_1 + lVar1) + 8) + 0x70);
      lVar10 = lVar10 + *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8 + lVar2) + 8) + 0x70);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    if (uVar3 <= uVar4 * 2) goto LAB_1453a575c;
  }
  lVar12 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + lVar8 * 8) + 8) + 0x70);
LAB_1453a575c:
  lVar8 = FUN_1453a4650(param_1 + 0x108,uVar6);
  lVar12 = lVar9 + lVar8 + lVar10 + lVar12;
  *param_7 = lVar12;
  if ((*(char *)(param_1 + 0x128) == '\0') && (*(longlong *)(param_1 + 0x120) + lVar5 < lVar12)) {
    uVar11 = 3;
  }
  return uVar11;
}



// FUNCTION 1453a57c0 FUN_1453a57c0 body=88 status=ok
// SIG undefined FUN_1453a57c0(void)

bool FUN_1453a57c0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x20) == 0) {
    return false;
  }
  iVar2 = FUN_1453a59f0();
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x20);
  uVar4 = 0;
  if (lVar1 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x80);
  }
  iVar3 = FUN_1453a9e50(uVar4);
  return iVar2 == iVar3;
}



// FUNCTION 1453a5820 FUN_1453a5820 body=65 status=ok
// SIG undefined FUN_1453a5820(void)

void FUN_1453a5820(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1453a5450();
  FUN_1450f0410(*(undefined8 *)(param_1 + 0x108),param_2,param_3 - lVar1);
  return;
}



// FUNCTION 1453a5870 FUN_1453a5870 body=15 status=ok
// SIG undefined FUN_1453a5870(void)

void FUN_1453a5870(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined8 *)(param_1 + 0x120) = param_2;
  *(undefined1 *)(param_1 + 0x128) = param_3;
  return;
}



// FUNCTION 1453a5880 FUN_1453a5880 body=68 status=ok
// SIG undefined FUN_1453a5880(void)

void FUN_1453a5880(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = (**(code **)(*(longlong *)param_2[1] + 0xf0))();
  *(bool *)(param_1 + 0x129) = cVar3 == '\0';
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined1 *)(param_1 + 0x12a) = 0;
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  return;
}



// FUNCTION 1453a58d0 FUN_1453a58d0 body=38 status=ok
// SIG undefined FUN_1453a58d0(void)

undefined8 * FUN_1453a58d0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x118) - 1;
  if (uVar1 == *(uint *)(param_1 + 0x100)) {
    *param_2 = 0;
    return param_2;
  }
  *param_2 = *(undefined8 *)(param_1 + (ulonglong)uVar1 * 8);
  return param_2;
}



// FUNCTION 1453a5900 FUN_1453a5900 body=96 status=ok
// SIG undefined FUN_1453a5900(void)

longlong FUN_1453a5900(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x108) != 0) {
    lVar2 = FUN_1453a4610();
    lVar3 = FUN_1453a5aa0(param_1,iVar1 + -1);
    return lVar3 + lVar2;
  }
  return 0x7fffffffffffffff;
}



// FUNCTION 1453a5960 FUN_1453a5960 body=144 status=ok
// SIG undefined FUN_1453a5960(void)

void FUN_1453a5960(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_1 + 0x118) - 1;
  if (uVar3 == *(uint *)(param_1 + 0x100)) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(longlong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0x100) * 8) = *param_2;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    return;
  }
  if (*(longlong *)(param_1 + (ulonglong)uVar3 * 8) != *param_2) {
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    uVar1 = *(uint *)(param_1 + 0x100);
    if ((int)uVar3 <= (int)(uVar1 - 1)) {
      uVar2 = (ulonglong)(((uVar1 - 1) - uVar3) + 1);
      do {
        uVar1 = uVar1 - 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      *(uint *)(param_1 + 0x100) = uVar1;
    }
    *(longlong *)(param_1 + (ulonglong)uVar1 * 8) = *param_2;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  }
  return;
}



// FUNCTION 1453a59f0 FUN_1453a59f0 body=171 status=ok
// SIG undefined FUN_1453a59f0(void)

void FUN_1453a59f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar2 = *(uint *)(param_1 + 0x100);
  lVar6 = 0;
  lVar7 = lVar6;
  lVar8 = lVar6;
  lVar9 = lVar6;
  if (uVar2 < 2) {
    lVar5 = 0;
    if (uVar2 == 0) goto LAB_1453a5a7c;
  }
  else {
    uVar3 = (uVar2 - 2 >> 1) + 1;
    uVar4 = (ulonglong)uVar3;
    do {
      lVar5 = lVar8 * 8;
      lVar1 = lVar8 * 8;
      lVar8 = lVar8 + 2;
      lVar7 = lVar7 + *(longlong *)(*(longlong *)(*(longlong *)(param_1 + lVar5) + 8) + 0x70);
      lVar9 = lVar9 + *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8 + lVar1) + 8) + 0x70);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    lVar5 = lVar6;
    lVar6 = lVar7;
    if (uVar2 <= uVar3 * 2) goto LAB_1453a5a7c;
  }
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + lVar8 * 8) + 8) + 0x70);
  lVar7 = lVar6;
LAB_1453a5a7c:
  FUN_1453a4630(param_1 + 0x108,((param_2 - lVar9) - lVar7) - lVar5);
  return;
}



// FUNCTION 1453a5aa0 FUN_1453a5aa0 body=160 status=ok
// SIG undefined FUN_1453a5aa0(void)

longlong FUN_1453a5aa0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(uint *)(param_1 + 0x100);
  lVar7 = 0;
  if (uVar3 <= param_2) {
    return 0;
  }
  uVar6 = (ulonglong)param_2;
  lVar8 = lVar7;
  lVar9 = lVar7;
  if (1 < uVar3 - param_2) {
    uVar4 = ((uVar3 - param_2) - 2 >> 1) + 1;
    uVar5 = (ulonglong)uVar4;
    do {
      lVar1 = uVar6 * 8;
      lVar2 = uVar6 * 8;
      uVar6 = uVar6 + 2;
      lVar8 = lVar8 + *(longlong *)(*(longlong *)(*(longlong *)(param_1 + lVar1) + 8) + 0x70);
      lVar9 = lVar9 + *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8 + lVar2) + 8) + 0x70);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    if (uVar3 <= param_2 + uVar4 * 2) goto LAB_1453a5b16;
  }
  lVar7 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + uVar6 * 8) + 8) + 0x70);
LAB_1453a5b16:
  return lVar9 + lVar8 + lVar7;
}



// FUNCTION 1453a5b40 FUN_1453a5b40 body=814 status=ok
// SIG undefined FUN_1453a5b40(void)

undefined8 FUN_1453a5b40(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  char local_res8 [8];
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined1 local_f8 [104];
  void *local_90;
  undefined4 local_88;
  undefined8 local_68;
  undefined8 local_60;
  
  iVar5 = FUN_14539abd0();
  FUN_1453a34b0(param_1 + 0x58);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x118))(*(longlong **)(param_1 + 0xe0),1);
  if (cVar2 != '\0') {
    FUN_1450dabb0(*(undefined8 *)(param_1 + 0xe0));
    uVar1 = *(undefined8 *)(param_1 + 0xe0);
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0x70) + 0x38))(param_1 + 0x70);
    uVar6 = (**(code **)(*(longlong *)(param_1 + 0x70) + 0x30))(param_1 + 0x70,local_res8);
    FUN_145073eb0(param_1 + 0x70,uVar1,uVar6,uVar3);
    if ((((*(longlong *)(param_1 + 0x68) != 0) &&
         (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10), lVar7 != 0)) &&
        (lVar7 = *(longlong *)(lVar7 + 0x10), lVar7 != 0)) &&
       (lVar7 = *(longlong *)(lVar7 + 0x68), lVar7 != 0)) {
      *(undefined2 *)(lVar7 + 0x58) = 0;
    }
    if (((iVar5 == 1) &&
        (FUN_14536d420(*(undefined8 *)(param_1 + 0xe8),param_1 + 0xf0),
        *(longlong *)(param_1 + 0xf8) != 0)) &&
       ((*(int *)(param_1 + 0x100) != 0 && (iVar5 = FUN_14555e7b0(param_1 + 0x108), iVar5 == 1)))) {
      local_res18[0] = 0;
      FUN_1453ad780(*(undefined8 *)(param_1 + 0xe0),local_res8,local_res10);
      for (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x78);
          (local_res8[0] == '\0' && (lVar7 != 0)); lVar7 = *(longlong *)(lVar7 + 0x78)) {
        FUN_1453a8d90(lVar7,local_res8,local_res10);
      }
      if (local_res10[0] == 0) {
        local_res8[0] = '\0';
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x78);
        do {
          if (lVar7 == 0) break;
          FUN_1453a8e00(lVar7,local_res8,local_res18);
          lVar7 = *(longlong *)(lVar7 + 0x78);
        } while (local_res8[0] == '\0');
      }
      FUN_14555ed50(param_1 + 0x108);
      iVar5 = FUN_14555e950(param_1 + 0x108);
      if (iVar5 == 1) {
        sVar4 = FUN_1450ee2b0(*(undefined8 *)(param_1 + 0xe0));
        FUN_14555ed90(param_1 + 0x108,sVar4 != 1);
        FUN_14539b450(*(undefined8 *)(param_1 + 0xd8),param_1);
        lVar7 = *(longlong *)(param_1 + 0xe0);
        if (*(longlong *)(lVar7 + 0x150) == 0) {
          *(longlong *)(lVar7 + 0x150) = param_1;
          *(undefined8 *)(param_1 + 0x198) = 0;
        }
        else {
          *(longlong *)(param_1 + 0x198) = *(longlong *)(lVar7 + 0x150);
          *(longlong *)(lVar7 + 0x150) = param_1;
        }
        local_128 = *(undefined8 *)(param_1 + 0x10);
        local_120 = *(undefined4 *)(param_1 + 0x2c);
        local_118 = 0;
        local_110 = 0xff;
        local_108 = 0xff;
        local_100 = 0;
        FUN_1450896a0(local_f8);
        local_68 = 0;
        local_60 = 0;
        (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x140))
                  (*(longlong **)(param_1 + 0xe0),local_f8,param_1 + 0x178,&local_128,0,0,0,0);
        uVar3 = FUN_1453a69e0();
        *(undefined1 *)(param_1 + 0x50) = uVar3;
        if (local_90 != (void *)0x0) {
          local_88 = 0;
          AK::MemoryMgr::Free(0,local_90);
        }
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 1453a5e90 FUN_1453a5e90 body=11 status=ok
// SIG undefined FUN_1453a5e90(void)

bool FUN_1453a5e90(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 0xf0) == param_2;
}



// FUNCTION 1453a5ea0 FUN_1453a5ea0 body=11 status=ok
// SIG undefined FUN_1453a5ea0(void)

bool FUN_1453a5ea0(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 0xf8) == param_2;
}



// FUNCTION 1453a5eb0 FUN_1453a5eb0 body=179 status=ok
// SIG undefined FUN_1453a5eb0(void)

undefined8 FUN_1453a5eb0(longlong param_1)

{
  undefined8 local_28;
  longlong lStack_20;
  int local_18;
  undefined4 uStack_14;
  
  if (DAT_14c790fe0 != 0) {
    local_18 = 0;
    local_28 = 0;
    lStack_20 = 0;
    FUN_14536d420(*(undefined8 *)(param_1 + 0xe8),&local_28);
    if ((lStack_20 != 0) && (local_18 == *(int *)(param_1 + 0x100))) {
      FUN_14555e900(param_1 + 0x108);
      FUN_14536d450(*(undefined8 *)(param_1 + 0xe8),param_1 + 0xf0);
      *(undefined8 *)(param_1 + 0xf0) = local_28;
      *(longlong *)(param_1 + 0xf8) = lStack_20;
      *(ulonglong *)(param_1 + 0x100) = CONCAT44(uStack_14,local_18);
      return 1;
    }
    FUN_14536d450(*(undefined8 *)(param_1 + 0xe8),&local_28);
  }
  return 0;
}



// FUNCTION 1453a5f70 FUN_1453a5f70 body=130 status=ok
// SIG undefined FUN_1453a5f70(void)

void FUN_1453a5f70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  FUN_1450e9590(param_1 + 0x178);
  lVar2 = *(longlong *)(param_1 + 0x178);
  fVar3 = 1.0;
  lVar1 = lVar2 + (ulonglong)*(uint *)(param_1 + 0x180) * 0x18;
  if (lVar2 != lVar1) {
    do {
      fVar3 = fVar3 * *(float *)(lVar2 + 0x10);
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
    if (fVar3 == 0.0) {
      *(undefined1 *)(param_1 + 0x50) = 1;
      FUN_14539b500(*(undefined8 *)(param_1 + 0xd8),param_1);
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 1453a6040 FUN_1453a6040 body=430 status=ok
// SIG undefined FUN_1453a6040(void)

undefined8 *
FUN_1453a6040(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 uStack_6c;
  uint uStack_64;
  undefined7 uStack_5f;
  undefined7 uStack_57;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  FUN_14539ac70(param_1,param_6,param_7,param_8,0);
  FUN_1453a3480(param_1 + 0xb,param_2);
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xff;
  local_28 = 0xff;
  local_20 = 0;
  FUN_145073d10(param_1 + 0xe,&local_48);
  param_1[0x1b] = param_3;
  *param_1 = &PTR_FUN_149d45d60;
  param_1[0x1c] = param_4;
  param_1[0xb] = &PTR_LAB_149d45d98;
  param_1[0xe] = &PTR_LAB_149d45df0;
  param_1[0x1d] = param_5;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_14555e750(param_1 + 0x21);
  *(undefined4 *)(param_1 + 0x31) = param_10;
  *(undefined4 *)((longlong)param_1 + 0x18c) = param_11;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(uint *)((longlong)param_1 + 0x194) = *(uint *)((longlong)param_1 + 0x194) & 0xfffffff4 | 4;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  LOCK();
  *(int *)(param_1[0x1c] + 0x24) = *(int *)(param_1[0x1c] + 0x24) + 1;
  UNLOCK();
  if (*(int *)(param_1 + 0x16) == 0) {
    param_1[0xf] = param_1[2];
    param_1[0x10] = CONCAT44(uStack_6c,*(undefined4 *)((longlong)param_1 + 0x2c));
    param_1[0x11] = (ulonglong)uStack_64 << 0x20;
    param_1[0x12] = CONCAT71(uStack_5f,0xff);
    param_1[0x13] = CONCAT71(uStack_57,0xff);
    param_1[0x14] = 0;
  }
  return param_1;
}



// FUNCTION 1453a61f0 FUN_1453a61f0 body=597 status=ok
// SIG undefined FUN_1453a61f0(void)

undefined8 FUN_1453a61f0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar7;
  bool bVar8;
  char local_res8 [8];
  char local_res10 [8];
  uint local_res18 [4];
  
  lVar6 = 0;
  lVar7 = *(longlong *)(param_1 + 0x40);
  if (lVar7 != 0) {
    LOCK();
    piVar1 = (int *)(lVar7 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar7 + 0x10) + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_1453ad6f0(*(undefined8 *)(param_1 + 0xe0),local_res8,local_res18,local_res10);
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + 0x78);
  uVar4 = local_res18[0];
  while ((lVar7 != 0 && (local_res8[0] == '\0'))) {
    local_res18[0] = uVar4;
    FUN_1453a8d00(lVar7,local_res8,local_res18,local_res10);
    lVar7 = *(longlong *)(lVar7 + 0x78);
    uVar4 = local_res18[0];
  }
  *(char *)(param_1 + 0x48) = local_res10[0];
  *(uint *)(param_1 + 0x38) = uVar4;
  piVar1 = DAT_14c791060;
  if (uVar4 == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    bVar8 = true;
  }
  else {
    lVar7 = lVar6;
    if (local_res10[0] == '\0') {
      do {
        while (iVar2 = *piVar1, iVar2 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
          if (*piVar1 < 0) goto LAB_1453a6371;
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 2));
        }
        LOCK();
        iVar3 = *piVar1;
        if (iVar2 == iVar3) {
          *piVar1 = iVar2 + 1;
        }
        UNLOCK();
      } while (iVar2 != iVar3);
LAB_1453a6371:
      if (piVar1[0x12] != 0) {
        for (lVar5 = *(longlong *)
                      (*(longlong *)(piVar1 + 0x10) +
                      ((ulonglong)uVar4 % (ulonglong)(uint)piVar1[0x12]) * 8);
            (lVar7 = lVar6, lVar5 != 0 && (lVar7 = lVar5, *(uint *)(lVar5 + 0x10) != uVar4));
            lVar5 = *(longlong *)(lVar5 + 8)) {
        }
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar2 = *piVar1;
      while (-1 < iVar2) {
        LOCK();
        iVar3 = *piVar1;
        if (iVar2 == iVar3) {
          *piVar1 = iVar2 + -1;
        }
        UNLOCK();
        if (iVar2 == iVar3) {
          if ((iVar2 + -1 == 0) && (0 < piVar1[0xc])) {
            SetEvent(*(HANDLE *)(piVar1 + 0xe));
          }
          goto LAB_1453a63ea;
        }
        iVar2 = *piVar1;
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(piVar1 + 2);
    }
    else {
      do {
        while (iVar2 = piVar1[0x16], iVar2 < 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
          if (piVar1[0x16] < 0) goto LAB_1453a62b8;
          LeaveCriticalSection((LPCRITICAL_SECTION)(piVar1 + 0x18));
        }
        LOCK();
        bVar8 = iVar2 == piVar1[0x16];
        if (bVar8) {
          piVar1[0x16] = iVar2 + 1;
        }
        UNLOCK();
      } while (!bVar8);
LAB_1453a62b8:
      if (piVar1[0x28] != 0) {
        for (lVar5 = *(longlong *)
                      (*(longlong *)(piVar1 + 0x26) +
                      ((ulonglong)uVar4 % (ulonglong)(uint)piVar1[0x28]) * 8);
            (lVar7 = lVar6, lVar5 != 0 && (lVar7 = lVar5, *(uint *)(lVar5 + 0x10) != uVar4));
            lVar5 = *(longlong *)(lVar5 + 8)) {
        }
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
          UNLOCK();
        }
      }
      iVar2 = piVar1[0x16];
      while (-1 < iVar2) {
        LOCK();
        bVar8 = iVar2 == piVar1[0x16];
        if (bVar8) {
          piVar1[0x16] = iVar2 + -1;
        }
        UNLOCK();
        if (bVar8) {
          if ((iVar2 + -1 == 0) && (0 < piVar1[0x22])) {
            SetEvent(*(HANDLE *)(piVar1 + 0x24));
          }
          goto LAB_1453a63ea;
        }
        iVar2 = piVar1[0x16];
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(piVar1 + 0x18);
    }
    LeaveCriticalSection(lpCriticalSection);
LAB_1453a63ea:
    lVar5 = lVar7 + -0x10;
    if (lVar7 == 0) {
      lVar5 = lVar6;
    }
    *(longlong *)(param_1 + 0x40) = lVar5;
    bVar8 = false;
    lVar6 = lVar5;
    if (lVar5 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      return 0;
    }
  }
  return CONCAT71((int7)((ulonglong)lVar6 >> 8),!bVar8);
}



// FUNCTION 1453a6450 FUN_1453a6450 body=376 status=ok
// SIG undefined FUN_1453a6450(void)

void FUN_1453a6450(longlong param_1,longlong *param_2,undefined4 param_3,uint param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  uint local_res20 [2];
  undefined2 local_58 [2];
  char local_54;
  undefined1 local_48 [16];
  
  FUN_14555edb0(param_1 + 0x108,local_48);
  FUN_14555ea60(param_1 + 0x108);
  uVar5 = 0;
  if (param_4 != 0) {
    do {
      local_58[0] = 0xff00;
      cVar4 = FUN_14555ec50(param_1 + 0x108,local_58,local_res20);
      if ((cVar4 == '\0') || (param_4 < local_res20[0])) break;
      if ((char)local_58[0] == -0x50) {
        pvVar1 = (void *)param_2[1];
        pvVar3 = (void *)0x0;
        while (pvVar2 = pvVar1, pvVar2 != (void *)0x0) {
          if (((*(char *)((longlong)pvVar2 + 8) == -0x50) && ((char)local_58[0] == -0x50)) &&
             (*(char *)((longlong)pvVar2 + 0xc) == local_54)) {
            pvVar1 = *(void **)((longlong)pvVar2 + 0x20);
            if (pvVar2 == (void *)param_2[1]) {
              param_2[1] = (longlong)pvVar1;
            }
            else {
              *(void **)((longlong)pvVar3 + 0x20) = pvVar1;
            }
            if (pvVar2 == (void *)*param_2) {
              *param_2 = (longlong)pvVar3;
            }
            if (pvVar2 != (void *)0x0) {
              FUN_14539ac10();
              AK::MemoryMgr::Free(0,pvVar2);
            }
          }
          else {
            pvVar1 = *(void **)((longlong)pvVar2 + 0x20);
            pvVar3 = pvVar2;
          }
        }
        FUN_14539ad60(param_1,param_2,local_58,param_3,local_res20[0],0,0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_4);
  }
  FUN_14555edd0(param_1 + 0x108,local_48);
  return;
}



// FUNCTION 1453a65e0 FUN_1453a65e0 body=175 status=ok
// SIG undefined FUN_1453a65e0(void)

void FUN_1453a65e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  lVar1 = param_1 + -0x58;
  FUN_14539ac00(lVar1);
  if (param_2 == 0xffffffff) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 8;
    *(undefined4 *)(param_1 + 0x138) = 0;
    FUN_14539ad20(lVar1);
    if ((*(uint *)(param_1 + 0x13c) & 2) == 0) {
      *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 2;
      FUN_14539ac10(lVar1);
    }
  }
  else if (param_2 < *(uint *)(param_1 + 0x138)) {
    *(uint *)(param_1 + 0x138) = param_2;
  }
  plVar4 = (longlong *)(param_1 + 0x18);
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x18) + 0x38))(plVar4);
  uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,local_res8);
  FUN_145073fe0(plVar4,uVar3,uVar2);
  FUN_14539ac10(lVar1);
  return;
}



// FUNCTION 1453a6690 FUN_1453a6690 body=581 status=ok
// SIG undefined FUN_1453a6690(void)

void FUN_1453a6690(longlong param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  float fVar7;
  double dVar8;
  undefined8 local_78;
  char *pcStack_70;
  
  if ((*(byte *)(param_1 + 0x194) & 1) == 0) {
    FUN_14539ac00();
    uVar1 = *(uint *)(param_1 + 0x18c);
    uVar4 = *(uint *)(param_1 + 400);
    bVar5 = (bool)((byte)(*(uint *)(param_1 + 0x194) >> 1) & 1);
    *(undefined4 *)(param_1 + 0x18c) = 0;
    uVar6 = uVar4;
    if ((uVar4 != 0xffffffff) && (uVar6 = 0, uVar1 <= uVar4)) {
      uVar6 = uVar4 - uVar1;
    }
    fVar7 = (999.99994 / (float)DAT_14c72f42c) * (float)(int)(param_3 - uVar1);
    if (fVar7 != 0.0) {
      local_78 = 0;
      pcStack_70 = (char *)0x0;
      FUN_14555ea90(param_1 + 0x108,fVar7,&local_78);
      pcVar3 = pcStack_70;
      while (pcStack_70 = pcVar3, pcVar3 != (char *)0x0) {
        pcStack_70 = *(char **)(pcVar3 + 0x18);
        if (pcStack_70 == (char *)0x0) {
          pcStack_70 = (char *)0x0;
          local_78 = 0;
        }
        pcVar3[0x18] = '\0';
        pcVar3[0x19] = '\0';
        pcVar3[0x1a] = '\0';
        pcVar3[0x1b] = '\0';
        pcVar3[0x1c] = '\0';
        pcVar3[0x1d] = '\0';
        pcVar3[0x1e] = '\0';
        pcVar3[0x1f] = '\0';
        dVar8 = (double)*(float *)(pcVar3 + 0xc) * (double)DAT_14c72f42c * 0.001;
        if (dVar8 <= 0.0) {
          lVar2 = 0xbfe00000;
        }
        else {
          lVar2 = 0x3fe00000;
        }
        uVar4 = (uint)((double)(lVar2 << 0x20) + dVar8);
        if (uVar6 != 0xffffffff) {
          bVar5 = uVar6 <= uVar4;
        }
        if (((*pcVar3 != -0x70) || (pcVar3[5] == '\0')) || (bVar5 == false)) {
          FUN_14539ad60(param_1,param_2,pcVar3,uVar4 + uVar1,*(undefined4 *)(pcVar3 + 0x10),
                        (byte)(*(uint *)(param_1 + 0x194) >> 1) & 1,
                        (byte)(*(uint *)(param_1 + 0x194) >> 2) & 1);
          *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) & 0xfffffffb;
        }
        AK::MemoryMgr::Free(0,pcVar3);
        pcVar3 = pcStack_70;
      }
    }
    if (uVar6 != 0xffffffff) {
      *(undefined4 *)(param_1 + 400) = 0;
      if ((*(uint *)(param_1 + 0x194) & 2) == 0) {
        *(uint *)(param_1 + 0x194) = *(uint *)(param_1 + 0x194) | 2;
        FUN_14539ac10(param_1);
      }
    }
    FUN_14539ac10(param_1);
  }
  return;
}



// FUNCTION 1453a6900 FUN_1453a6900 body=52 status=ok
// SIG undefined FUN_1453a6900(void)

void FUN_1453a6900(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x80) != 0) && ((*(byte *)(param_1 + 0x13c) & 1) == 0)) {
    FUN_14539b2d0(*(longlong *)(param_1 + 0x80),param_1 + -0x58);
  }
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 1;
  return;
}



// FUNCTION 1453a6940 FUN_1453a6940 body=52 status=ok
// SIG undefined FUN_1453a6940(void)

void FUN_1453a6940(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x80) != 0) && ((*(byte *)(param_1 + 0x13c) & 1) != 0)) {
    FUN_14539b390(*(longlong *)(param_1 + 0x80),param_1 + -0x58);
  }
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xfffffffe;
  return;
}



// FUNCTION 1453a69e0 FUN_1453a69e0 body=62 status=ok
// SIG undefined FUN_1453a69e0(void)

ulonglong FUN_1453a69e0(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float fVar3;
  
  uVar2 = *(ulonglong *)(param_1 + 0x178);
  fVar3 = 1.0;
  uVar1 = uVar2 + (ulonglong)*(uint *)(param_1 + 0x180) * 0x18;
  if (uVar2 != uVar1) {
    do {
      fVar3 = fVar3 * *(float *)(uVar2 + 0x10);
      uVar2 = uVar2 + 0x18;
    } while (uVar2 != uVar1);
    if (fVar3 == 0.0) {
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1453a6a20 FUN_1453a6a20 body=409 status=ok
// SIG undefined FUN_1453a6a20(void)

undefined8 * FUN_1453a6a20(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_FUN_149d45d60;
  param_1[0xb] = &PTR_LAB_149d45d98;
  param_1[0xe] = &PTR_LAB_149d45df0;
  if (param_1[0x1d] != 0) {
    FUN_14536d450(param_1[0x1d],param_1 + 0x1e);
  }
  (**(code **)(*(longlong *)param_1[0x1c] + 0x120))((longlong *)param_1[0x1c],1);
  FUN_1450dabf0();
  puVar7 = (undefined8 *)0x0;
  puVar3 = *(undefined8 **)(param_1[0x1c] + 0x150);
  puVar5 = puVar3;
  puVar6 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
LAB_1453a6ac6:
    if (puVar6 != (undefined8 *)0x0) {
      if (puVar6 == puVar3) {
        *(undefined8 *)(param_1[0x1c] + 0x150) = puVar6[0x33];
      }
      else {
        puVar7[0x33] = puVar6[0x33];
      }
    }
  }
  else {
    do {
      puVar6 = puVar5;
      if (puVar6 == param_1) goto LAB_1453a6ac6;
      puVar5 = (undefined8 *)puVar6[0x33];
      puVar7 = puVar6;
    } while ((undefined8 *)puVar6[0x33] != (undefined8 *)0x0);
  }
  lVar4 = param_1[0x1c];
  LOCK();
  piVar1 = (int *)(lVar4 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(*(longlong *)(lVar4 + 0x10) + 0x18))();
  }
  if (param_1[0x1b] != 0) {
    FUN_14539b470(param_1[0x1b],param_1);
  }
  if (param_1[0xd] != 0) {
    FUN_1453a38b0(param_1[0xd],param_1 + 0xb);
  }
  FUN_1453a34c0();
  if ((void *)param_1[0x2f] != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    AK::MemoryMgr::Free(0,(void *)param_1[0x2f]);
    param_1[0x2f] = 0;
    *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  }
  FUN_14555e7a0(param_1 + 0x21);
  FUN_145073d80(param_1 + 0xe);
  FUN_1453a34a0(param_1 + 0xb);
  FUN_14539ab20(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 1453a6bf0 FUN_1453a6bf0 body=97 status=ok
// SIG undefined FUN_1453a6bf0(void)

undefined8 * FUN_1453a6bf0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_149d45e48;
  lVar3 = param_1[3];
  LOCK();
  piVar1 = (int *)(lVar3 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
  }
  *param_1 = &PTR_FUN_149d45b58;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1453a6c70 FUN_1453a6c70 body=43 status=ok
// SIG undefined FUN_1453a6c70(void)

undefined8 * FUN_1453a6c70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d45b58;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1453a6cb0 FUN_1453a6cb0 body=43 status=ok
// SIG undefined FUN_1453a6cb0(void)

undefined8 * FUN_1453a6cb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149d45b58;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1453a6ce0 FUN_1453a6ce0 body=52 status=ok
// SIG undefined FUN_1453a6ce0(void)

undefined8 FUN_1453a6ce0(undefined8 param_1,ulonglong param_2)

{
  FUN_14555e460();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1453a6d20 FUN_1453a6d20 body=144 status=ok
// SIG undefined FUN_1453a6d20(void)

undefined8 * FUN_1453a6d20(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  FUN_1450ed010(param_1,param_3);
  *param_1 = &PTR_LAB_149d45e80;
  param_1[3] = &PTR_LAB_149d45ee8;
  param_1[5] = &PTR_FUN_149d45ef8;
  FUN_14555e440(param_1 + 0xd);
  param_1[0xd] = &PTR_FUN_149d45e78;
  param_1[0x10] = param_2;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1453a6db0 FUN_1453a6db0 body=202 status=ok
// SIG undefined FUN_1453a6db0(void)

undefined8 FUN_1453a6db0(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  
  FUN_1450ed110();
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x268))();
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = FUN_1453a9a40(*(undefined8 *)(param_1 + 0x80),uVar3 & 0xffff);
      if ((*(int *)(lVar2 + 300) == 3) && (lVar2 = FUN_14555f240(param_1,lVar2), lVar2 != 0)) {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x50) + 0x138) != 0) {
          FUN_14555f4b0(lVar2);
        }
        if (*(longlong *)(param_1 + 0x98) == 0) {
          *(longlong *)(param_1 + 0x98) = lVar2;
          *(undefined8 *)(lVar2 + 0x70) = 0;
        }
        else {
          *(longlong *)(lVar2 + 0x70) = *(longlong *)(param_1 + 0x98);
          *(longlong *)(param_1 + 0x98) = lVar2;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 1;
}



// FUNCTION 1453a6e80 FUN_1453a6e80 body=147 status=ok
// SIG undefined FUN_1453a6e80(void)

int FUN_1453a6e80(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  *(int *)(param_1 + 0xa0) = param_2;
  iVar2 = FUN_1453a9e20(*(undefined8 *)(param_1 + 0x80));
  iVar5 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x268))();
  uVar7 = 0;
  iVar6 = 0;
  if (uVar1 != 0) {
    do {
      uVar4 = FUN_1453a9a40(*(undefined8 *)(param_1 + 0x80),uVar7 & 0xffff);
      iVar3 = FUN_1453adb90(uVar4,param_2 + iVar2);
      iVar5 = iVar6;
      if (iVar6 < iVar3) {
        iVar5 = iVar3;
      }
      uVar7 = uVar7 + 1;
      iVar6 = iVar5;
    } while (uVar7 < uVar1);
  }
  return iVar5;
}



// FUNCTION 1453a6f20 FUN_1453a6f20 body=168 status=ok
// SIG undefined FUN_1453a6f20(void)

void FUN_1453a6f20(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  if (((*(byte *)(param_1 + 0x62) & 2) != 0) && (*(int *)(param_1 + 0x5c) != -1)) {
    param_3 = *(undefined4 *)(param_1 + 0x5c);
  }
  FUN_1453a7780(param_1,param_2,param_3);
  iVar3 = FUN_1453a9e20(*(undefined8 *)(param_1 + 0x80));
  lVar1 = *(longlong *)(param_1 + 0x38);
  while (lVar2 = lVar1, lVar2 != 0) {
    lVar1 = *(longlong *)(lVar2 + 8);
    if (((*(byte *)(lVar2 + 0x62) & 3) != 0) && ((*(byte *)(lVar2 + 0x62) & 0x10) == 0)) {
      FUN_1453a3a50(lVar2,(int)param_2 + iVar3,param_3,param_4);
    }
  }
  FUN_1450ed1a0(param_1);
  return;
}



// FUNCTION 1453a6fd0 FUN_1453a6fd0 body=1107 status=ok
// SIG undefined FUN_1453a6fd0(void)

void FUN_1453a6fd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  int local_res8 [2];
  int local_res18 [2];
  int local_res20;
  ulonglong in_stack_ffffffffffffffa8;
  
  if (*(longlong *)(param_1 + 0x88) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xa4) == '\0') {
    return;
  }
  iVar9 = FUN_1453a4770(*(undefined8 *)(param_1 + 0x10));
  lVar1 = *(longlong *)(param_2 + 0x50);
  lVar2 = *(longlong *)(lVar1 + 0x138);
  uVar15 = *(uint *)(lVar2 + 0x20) & 0x1f;
  if (uVar15 == 8) {
    return;
  }
  if ((*(byte *)(param_1 + 0x62) & 1) == 0) {
    FUN_14555e530(param_1 + 0x68);
    FUN_1453a7590(param_1);
    return;
  }
  iVar12 = *(int *)(lVar2 + 0x3c);
  iVar14 = *(int *)(lVar2 + 0x30) -
           (int)((longlong)((ulonglong)DAT_14c72f42c * (longlong)*(int *)(lVar2 + 0x28)) / 1000);
  iVar10 = iVar9 - iVar14;
  if (iVar10 < iVar9) {
    iVar10 = iVar9;
  }
  local_res8[0] = iVar9 - iVar12;
  if (iVar9 - iVar12 < iVar10) {
    local_res8[0] = iVar10;
  }
  if (local_res8[0] < 0) {
    local_res8[0] = 0;
  }
  local_res18[0] = *(int *)(lVar2 + 0x24);
  in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffffffffff00;
  iVar11 = FUN_1453a9a60(*(undefined8 *)(param_1 + 0x80),local_res8[0],uVar15,local_res18,
                         in_stack_ffffffffffffffa8,local_res8);
  iVar10 = local_res8[0];
  while( true ) {
    if (iVar11 != 1) {
      return;
    }
    local_res8[0] = iVar10;
    local_res20 = iVar10;
    iVar11 = FUN_1453a9e20(*(undefined8 *)(param_1 + 0x80));
    local_res8[0] = FUN_1453adb90(lVar1,iVar10 + iVar11);
    iVar11 = (local_res8[0] - iVar12) + iVar9;
    if (iVar11 <= iVar10) break;
    local_res18[0] = *(int *)(lVar2 + 0x24);
    in_stack_ffffffffffffffa8 = in_stack_ffffffffffffffa8 & 0xffffffffffffff00;
    local_res8[0] = iVar11;
    iVar11 = FUN_1453a9a60(*(undefined8 *)(param_1 + 0x80),iVar11,*(uint *)(lVar2 + 0x20) & 0x1f,
                           local_res18,in_stack_ffffffffffffffa8,local_res8);
    iVar10 = local_res8[0];
  }
  iVar9 = FUN_1453a9e50(*(undefined8 *)(param_1 + 0x80));
  if (iVar9 <= iVar10) {
    return;
  }
  iVar14 = iVar10 + iVar14;
  local_res18[0] = (iVar10 - local_res8[0]) + iVar12;
  iVar9 = local_res18[0];
  if (iVar14 < local_res18[0]) {
    iVar9 = iVar14;
  }
  plVar4 = *(longlong **)(param_1 + 0x78);
  plVar6 = (longlong *)0x0;
joined_r0x0001453a71bb:
  do {
    plVar5 = plVar4;
    if (plVar5 == (longlong *)0x0) {
      lVar3 = *(longlong *)(param_1 + 0x38);
joined_r0x0001453a721a:
      do {
        do {
          lVar7 = lVar3;
          if (lVar7 == 0) {
            FUN_1453a7990(param_1,param_2,local_res18[0],local_res8[0] + local_res18[0],lVar2 + 0x34
                         );
            FUN_1453a7b20(param_1,local_res20,lVar1);
            return;
          }
          lVar3 = *(longlong *)(lVar7 + 8);
        } while (((1 < (*(byte *)(lVar7 + 0x62) & 0xf)) ||
                 (*(longlong *)(lVar7 + 0x90) != *(longlong *)(param_2 + 0x50))) ||
                (cVar8 = FUN_14555f300(param_2,*(undefined2 *)(lVar7 + 0x98)), cVar8 != '\0'));
        plVar4 = *(longlong **)(param_1 + 0x78);
        plVar6 = (longlong *)0x0;
        while (plVar5 = plVar4, plVar5 != (longlong *)0x0) {
          iVar9 = (**(code **)(*plVar5 + 8))();
          if ((iVar9 == 1) && (plVar5[3] == lVar7)) {
            if ((int)plVar5[2] <= iVar14) goto joined_r0x0001453a721a;
            plVar4 = (longlong *)plVar5[1];
            if (plVar5 == *(longlong **)(param_1 + 0x78)) {
              *(longlong **)(param_1 + 0x78) = plVar4;
            }
            else {
              plVar6[1] = (longlong)plVar4;
            }
            if (plVar5 == *(longlong **)(param_1 + 0x70)) {
              *(longlong **)(param_1 + 0x70) = plVar6;
            }
            (**(code **)*plVar5)(plVar5,0);
            AK::MemoryMgr::Free(0,plVar5);
          }
          else {
            plVar4 = (longlong *)plVar5[1];
            plVar6 = plVar5;
          }
        }
        puVar13 = AK::MemoryMgr::Malloc(0,0x30);
        if (puVar13 != (undefined8 *)0x0) {
          puVar13[3] = lVar7;
          *(int *)(puVar13 + 2) = iVar14;
          *puVar13 = &PTR_FUN_149d45e58;
          puVar13[4] = *(undefined8 *)(lVar2 + 0x28);
          *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(lVar2 + 0x30);
          FUN_14555e480(param_1 + 0x68,puVar13);
        }
      } while( true );
    }
    iVar12 = (**(code **)(*plVar5 + 8))(plVar5);
    if (iVar12 == 0) {
      if ((((int)plVar5[2] < iVar9) || (plVar5[3] != *(longlong *)(param_2 + 0x50))) ||
         (cVar8 = FUN_14555f300(param_2,(short)plVar5[4]), cVar8 != '\0')) goto LAB_1453a7207;
LAB_1453a72e8:
      plVar4 = (longlong *)plVar5[1];
      if (plVar5 == *(longlong **)(param_1 + 0x78)) {
        *(longlong **)(param_1 + 0x78) = plVar4;
      }
      else {
        plVar6[1] = (longlong)plVar4;
      }
      if (plVar5 == *(longlong **)(param_1 + 0x70)) {
        *(longlong **)(param_1 + 0x70) = plVar6;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)*plVar5)(plVar5,0);
        AK::MemoryMgr::Free(0,plVar5);
      }
      goto joined_r0x0001453a71bb;
    }
    if (((iVar12 == 1) && (iVar9 <= (int)plVar5[2])) &&
       ((*(longlong *)(plVar5[3] + 0x90) == *(longlong *)(param_2 + 0x50) &&
        (cVar8 = FUN_14555f300(param_2,*(undefined2 *)(plVar5[3] + 0x98)), cVar8 != '\0'))))
    goto LAB_1453a72e8;
LAB_1453a7207:
    plVar4 = (longlong *)plVar5[1];
    plVar6 = plVar5;
  } while( true );
}



// FUNCTION 1453a7430 FUN_1453a7430 body=9 status=ok
// SIG undefined FUN_1453a7430(void)

void FUN_1453a7430(longlong param_1)

{
  FUN_14555e5f0(param_1 + 0x68);
  return;
}



// FUNCTION 1453a7440 FUN_1453a7440 body=56 status=ok
// SIG undefined FUN_1453a7440(void)

int FUN_1453a7440(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1453a4770(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x88));
  iVar2 = FUN_1453a9e20(*(undefined8 *)(param_1 + 0x80));
  return iVar2 + iVar1;
}



// FUNCTION 1453a7480 FUN_1453a7480 body=12 status=ok
// SIG undefined FUN_1453a7480(void)

undefined4 FUN_1453a7480(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x50);
}



// FUNCTION 1453a7490 FUN_1453a7490 body=13 status=ok
// SIG undefined FUN_1453a7490(void)

undefined8 FUN_1453a7490(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x30);
}



// FUNCTION 1453a74a0 FUN_1453a74a0 body=12 status=ok
// SIG undefined FUN_1453a74a0(void)

undefined4 FUN_1453a74a0(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x2c);
}



// FUNCTION 1453a74b0 FUN_1453a74b0 body=13 status=ok
// SIG undefined FUN_1453a74b0(void)

longlong FUN_1453a74b0(longlong param_1)

{
  return *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x18;
}



// FUNCTION 1453a74c0 FUN_1453a74c0 body=13 status=ok
// SIG undefined FUN_1453a74c0(void)

undefined1 FUN_1453a74c0(longlong param_1)

{
  return *(undefined1 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68) + 0x38);
}



// FUNCTION 1453a74d0 FUN_1453a74d0 body=27 status=ok
// SIG undefined FUN_1453a74d0(void)

void FUN_1453a74d0(undefined8 param_1)

{
  FUN_1450ed2f0();
  FUN_1453a7590(param_1);
  return;
}



// FUNCTION 1453a74f0 FUN_1453a74f0 body=86 status=ok
// SIG undefined FUN_1453a74f0(void)

void FUN_1453a74f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  FUN_14555e530(param_1 + 0x68);
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 != 0) {
    *(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0x88) = 0;
    lVar2 = *(longlong *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    if (lVar2 != 0) {
      FUN_1450ed1a0();
    }
  }
  FUN_1450ed430(param_1);
  FUN_1450ed1a0(param_1);
  return;
}



// FUNCTION 1453a7550 FUN_1453a7550 body=42 status=ok
// SIG undefined FUN_1453a7550(void)

void FUN_1453a7550(longlong param_1)

{
  FUN_1450ed440();
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1450f0190();
    return;
  }
  return;
}



// FUNCTION 1453a7590 FUN_1453a7590 body=491 status=ok
// SIG undefined FUN_1453a7590(void)

void FUN_1453a7590(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint local_res10;
  uint uStack_44;
  undefined4 local_40;
  
  *(undefined1 *)(param_1 + 0xa4) = 1;
  uVar6 = FUN_1453a4770(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x88));
  uVar1 = *(undefined4 *)(param_1 + 0xa0);
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x268))();
    local_res10 = 0;
    if (uVar4 != 0) {
      do {
        lVar7 = FUN_1453a9a40(*(undefined8 *)(param_1 + 0x80),local_res10 & 0xffff);
        if (*(int *)(lVar7 + 300) == 3) {
          for (lVar2 = *(longlong *)(param_1 + 0x98); lVar2 != 0;
              lVar2 = *(longlong *)(lVar2 + 0x70)) {
            if (*(longlong *)(lVar2 + 0x50) == lVar7) {
              uVar9 = 0;
              if (*(int *)(lVar7 + 0x110) != 0) {
                do {
                  cVar3 = FUN_14555f300(lVar2,uVar9 & 0xffff);
                  if ((cVar3 != '\0') &&
                     (puVar8 = AK::MemoryMgr::Malloc(0,0x38), puVar8 != (undefined8 *)0x0)) {
                    *(ulonglong *)((longlong)puVar8 + 0x24) = (ulonglong)uStack_44 << 0x20;
                    *(undefined4 *)((longlong)puVar8 + 0x2c) = local_40;
                    *(undefined4 *)(puVar8 + 2) = uVar6;
                    *puVar8 = &PTR_FUN_149d45e48;
                    puVar8[3] = lVar7;
                    *(uint *)(puVar8 + 4) = uVar9;
                    *(undefined4 *)(puVar8 + 6) = uVar1;
                    LOCK();
                    *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + 1;
                    UNLOCK();
                    FUN_14555e480(param_1 + 0x68,puVar8);
                  }
                  uVar9 = uVar9 + 1;
                } while (uVar9 < *(uint *)(lVar7 + 0x110));
              }
              break;
            }
          }
          FUN_1453a7b20(param_1,uVar6,lVar7);
        }
        else {
          uVar5 = FUN_1453ad670();
          puVar8 = AK::MemoryMgr::Malloc(0,0x38);
          if (puVar8 != (undefined8 *)0x0) {
            *(ulonglong *)((longlong)puVar8 + 0x24) = (ulonglong)uStack_44 << 0x20;
            *(undefined4 *)((longlong)puVar8 + 0x2c) = local_40;
            *(undefined4 *)(puVar8 + 2) = uVar6;
            *puVar8 = &PTR_FUN_149d45e48;
            puVar8[3] = lVar7;
            *(uint *)(puVar8 + 4) = (uint)uVar5;
            *(undefined4 *)(puVar8 + 6) = uVar1;
            LOCK();
            *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + 1;
            UNLOCK();
            FUN_14555e480(param_1 + 0x68,puVar8);
          }
        }
        local_res10 = local_res10 + 1;
      } while (local_res10 < uVar4);
    }
  }
  return;
}



// FUNCTION 1453a7780 FUN_1453a7780 body=528 status=ok
// SIG undefined FUN_1453a7780(void)

void FUN_1453a7780(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong *local_res8;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  int local_30;
  
  iVar5 = FUN_14555e4e0(param_1 + 0x68,param_2,param_3,&local_res8);
  do {
    if (iVar5 != 0x2d) {
      return;
    }
    iVar5 = (int)local_res8[2] - (int)param_2;
    iVar6 = (**(code **)(*local_res8 + 8))();
    plVar3 = local_res8;
    if (iVar6 == 0) {
      lVar2 = local_res8[4];
      lVar1 = local_res8[3];
      for (lVar7 = *(longlong *)(param_1 + 0x38); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 8)) {
        if ((((*(longlong *)(lVar7 + 0x90) == lVar1) && (*(int *)(lVar7 + 0x98) == (int)lVar2)) &&
            ((*(byte *)(lVar7 + 0x62) & 0xf) < 2)) && (cVar4 = FUN_1450edb30(lVar7), cVar4 == '\0'))
        goto LAB_1453a792e;
      }
      for (lVar7 = *(longlong *)(param_1 + 0x38); lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 8)) {
        if (((*(longlong *)(lVar7 + 0x90) == plVar3[3]) &&
            (*(int *)(lVar7 + 0x98) == (int)plVar3[4])) && ((*(byte *)(lVar7 + 0x62) & 0xf) < 2))
        goto LAB_1453a78c5;
      }
      lVar7 = FUN_1453a3740(param_1);
      if (lVar7 != 0) {
        *(int *)(lVar7 + 0x50) = *(int *)(lVar7 + 0x50) + 1;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x68);
        thunk_FUN_1450ed110(lVar7,*(undefined8 *)(lVar1 + 0x30),lVar1 + 0x18,
                            *(undefined1 *)(lVar1 + 0x38));
      }
LAB_1453a78c5:
      if (lVar7 != 0) {
        lVar1 = plVar3[6];
        iVar5 = FUN_1453a9e20(*(undefined8 *)(param_1 + 0x80));
        FUN_1453a3830(lVar7,(int)lVar1 + iVar5);
        local_30 = (int)plVar3[6] - (int)plVar3[2];
        local_38 = *(undefined8 *)((longlong)plVar3 + 0x24);
        FUN_1450ed630(lVar7,&local_38);
        if ((*(byte *)(param_1 + 0x62) & 2) != 0) {
          iVar5 = *(int *)(param_1 + 0x5c);
          puVar8 = &local_40;
          local_40 = 0;
          local_3c = 4;
          goto LAB_1453a7929;
        }
      }
    }
    else if (iVar6 == 1) {
      local_44 = *(undefined4 *)((longlong)local_res8 + 0x24);
      lVar7 = local_res8[3];
      local_48 = (undefined4)local_res8[4];
      puVar8 = &local_48;
LAB_1453a7929:
      FUN_1450ed780(lVar7,puVar8,iVar5);
    }
LAB_1453a792e:
    plVar3 = local_res8;
    if (local_res8 != (longlong *)0x0) {
      (**(code **)*local_res8)(local_res8,0);
      AK::MemoryMgr::Free(0,plVar3);
    }
    iVar5 = FUN_14555e4e0(param_1 + 0x68,param_2 & 0xffffffff,param_3 & 0xffffffff,&local_res8);
  } while( true );
}



// FUNCTION 1453a7990 FUN_1453a7990 body=398 status=ok
// SIG undefined FUN_1453a7990(void)

void FUN_1453a7990(longlong param_1,longlong param_2,int param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  ushort *puVar10;
  uint uVar11;
  
  puVar10 = *(ushort **)(param_2 + 0x58);
  if (puVar10 != puVar10 + *(uint *)(param_2 + 0x60)) {
    do {
      uVar11 = (uint)*puVar10;
      plVar2 = *(longlong **)(param_1 + 0x78);
      plVar6 = (longlong *)0x0;
      while (plVar5 = plVar2, plVar5 != (longlong *)0x0) {
        iVar8 = (**(code **)(*plVar5 + 8))();
        if (((iVar8 == 0) && (plVar5[3] == *(longlong *)(param_2 + 0x50))) &&
           (*(uint *)(plVar5 + 4) == uVar11)) {
          if ((int)plVar5[2] <= param_3) goto LAB_1453a7ae4;
          plVar2 = (longlong *)plVar5[1];
          if (plVar5 == *(longlong **)(param_1 + 0x78)) {
            *(longlong **)(param_1 + 0x78) = plVar2;
          }
          else {
            plVar6[1] = (longlong)plVar2;
          }
          if (plVar5 == *(longlong **)(param_1 + 0x70)) {
            *(longlong **)(param_1 + 0x70) = plVar6;
          }
          (**(code **)*plVar5)(plVar5,0);
          AK::MemoryMgr::Free(0,plVar5);
        }
        else {
          plVar2 = (longlong *)plVar5[1];
          plVar6 = plVar5;
        }
      }
      lVar4 = *(longlong *)(param_2 + 0x50);
      for (lVar3 = *(longlong *)(param_1 + 0x38); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 8)) {
        if (((*(longlong *)(lVar3 + 0x90) == lVar4) && (*(uint *)(lVar3 + 0x98) == uVar11)) &&
           (((*(byte *)(lVar3 + 0x62) & 0xf) < 2 && (cVar7 = FUN_1450edb30(), cVar7 == '\0'))))
        goto LAB_1453a7ae4;
      }
      lVar3 = *(longlong *)(param_2 + 0x50);
      puVar9 = AK::MemoryMgr::Malloc(0,0x38);
      if (puVar9 != (undefined8 *)0x0) {
        *(int *)(puVar9 + 2) = param_3;
        *puVar9 = &PTR_FUN_149d45e48;
        puVar9[3] = lVar3;
        *(uint *)(puVar9 + 4) = uVar11;
        *(undefined8 *)((longlong)puVar9 + 0x24) = *param_5;
        *(undefined4 *)((longlong)puVar9 + 0x2c) = *(undefined4 *)(param_5 + 1);
        *(undefined4 *)(puVar9 + 6) = param_4;
        LOCK();
        piVar1 = (int *)(lVar3 + 0x24);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        FUN_14555e480(param_1 + 0x68);
      }
LAB_1453a7ae4:
      puVar10 = puVar10 + 1;
    } while (puVar10 !=
             (ushort *)(*(longlong *)(param_2 + 0x58) + (ulonglong)*(uint *)(param_2 + 0x60) * 2));
  }
  return;
}



// FUNCTION 1453a7b20 FUN_1453a7b20 body=285 status=ok
// SIG undefined FUN_1453a7b20(void)

void FUN_1453a7b20(longlong param_1,int param_2,longlong param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x98);
  if (lVar7 != 0) {
    while (*(longlong *)(lVar7 + 0x50) != param_3) {
      lVar7 = *(longlong *)(lVar7 + 0x70);
      if (lVar7 == 0) {
        return;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x78);
    plVar4 = (longlong *)0x0;
    while (plVar3 = plVar2, plVar3 != (longlong *)0x0) {
      iVar5 = (**(code **)(*plVar3 + 8))(plVar3);
      if (((iVar5 == 2) && (param_2 <= (int)plVar3[2])) && (plVar3[3] == lVar7)) {
        plVar2 = (longlong *)plVar3[1];
        if (plVar3 == *(longlong **)(param_1 + 0x78)) {
          *(longlong **)(param_1 + 0x78) = plVar2;
        }
        else {
          plVar4[1] = (longlong)plVar2;
        }
        if (plVar3 == *(longlong **)(param_1 + 0x70)) {
          *(longlong **)(param_1 + 0x70) = plVar4;
        }
        (**(code **)*plVar3)(plVar3,0);
        AK::MemoryMgr::Free(0,plVar3);
      }
      else {
        plVar2 = (longlong *)plVar3[1];
        plVar4 = plVar3;
      }
    }
    FUN_1453a4770(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x88));
    puVar6 = AK::MemoryMgr::Malloc(0,0x28);
    if (puVar6 != (undefined8 *)0x0) {
      uVar1 = *(undefined4 *)(lVar7 + 0x68);
      *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(lVar7 + 0x6c);
      *(undefined4 *)((longlong)puVar6 + 0x24) = uVar1;
      *(int *)(puVar6 + 2) = param_2;
      *puVar6 = &PTR_FUN_149d45e68;
      puVar6[3] = lVar7;
      FUN_14555e480(param_1 + 0x68,puVar6);
      return;
    }
  }
  return;
}



// FUNCTION 1453a7c40 FUN_1453a7c40 body=207 status=ok
// SIG undefined FUN_1453a7c40(void)

undefined8 * FUN_1453a7c40(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_149d45e80;
  param_1[0xf] = 0;
  param_1[3] = &PTR_LAB_149d45ee8;
  param_1[0xe] = 0;
  param_1[5] = &PTR_FUN_149d45ef8;
  lVar3 = param_1[0x13];
  while (lVar3 != 0) {
    param_1[0x13] = *(undefined8 *)(lVar3 + 0x70);
    *(undefined8 *)(lVar3 + 0x70) = 0;
    FUN_14555f2d0();
    lVar3 = param_1[0x13];
  }
  lVar3 = param_1[0x10];
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar3 + 0x10) + 0x18))();
    }
  }
  FUN_14555e460(param_1 + 0xd);
  FUN_1450ed080(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1453a7d20 FUN_1453a7d20 body=175 status=ok
// SIG undefined FUN_1453a7d20(void)

float FUN_1453a7d20(longlong *param_1,ushort param_2)

{
  ushort *puVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  float *pfVar6;
  float fVar7;
  
  fVar7 = 1.0;
  if ((((char)param_1[1] != '\0') && (cVar2 = (**(code **)(*param_1 + 0x20))(), cVar2 != '\0')) &&
     (lVar3 = (**(code **)(*param_1 + 0x78))(param_1), lVar3 != 0)) {
    for (lVar3 = *(longlong *)(lVar3 + 8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
      puVar1 = *(ushort **)(lVar3 + 0x20);
      if (puVar1 != (ushort *)0x0) {
        uVar4 = 0;
        do {
          uVar5 = (int)uVar4 + 1;
          if (puVar1[uVar5] == param_2) {
            pfVar6 = (float *)(((ulonglong)((uint)*puVar1 * 2 + 9) & 0xfffffff8) + uVar4 * 0x10 +
                              (longlong)puVar1);
            if (pfVar6 != (float *)0x0) {
              fVar7 = fVar7 * *pfVar6;
            }
            break;
          }
          uVar4 = (ulonglong)uVar5;
        } while (uVar5 < *puVar1);
      }
    }
  }
  return fVar7;
}



// FUNCTION 1453a7dd0 FUN_1453a7dd0 body=902 status=ok
// SIG undefined FUN_1453a7dd0(void)

ulonglong FUN_1453a7dd0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  undefined4 uVar5;
  double *pdVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  ulonglong uVar15;
  void *pvVar16;
  byte bVar17;
  longlong lVar18;
  undefined4 *puVar19;
  uint uVar20;
  ulonglong uVar21;
  byte bVar22;
  uint uStackX_c;
  
  lVar18 = *param_2;
  pbVar14 = (byte *)(lVar18 + 4);
  *param_2 = (longlong)pbVar14;
  bVar4 = *pbVar14;
  *param_2 = lVar18 + 5;
  bVar22 = bVar4 >> 1;
  bVar17 = (bVar22 ^ *(byte *)((longlong)param_1 + 0x11c)) & 1 ^
           *(byte *)((longlong)param_1 + 0x11c);
  bVar17 = (bVar22 ^ bVar17) & 2 ^ bVar17;
  *(byte *)((longlong)param_1 + 0x11c) = (bVar17 ^ bVar4) & 8 ^ bVar17;
  uVar15 = FUN_1450d7ad0(param_1,param_2,param_3,0);
  uVar21 = uVar15;
  if ((int)uVar15 == 1) {
    uVar21 = uVar15 & 0xffffffff;
    uVar13 = *(uint *)*param_2;
    *param_2 = (longlong)((uint *)*param_2 + 1);
    if (uVar13 != 0) {
      if ((*(uint *)((longlong)param_1 + 0x104) < uVar13) &&
         (cVar11 = FUN_1450c15a0(param_1 + 0x1e,uVar13 - *(uint *)((longlong)param_1 + 0x104)),
         cVar11 == '\0')) {
        return 0x34;
      }
      uVar21 = uVar15 & 0xffffffff;
      uVar20 = 0;
      if (uVar13 != 0) {
        do {
          uVar12 = uStackX_c;
          uStackX_c = uStackX_c & 0xffffff00;
          uVar5 = *(undefined4 *)*param_2;
          *param_2 = (longlong)((undefined4 *)*param_2 + 1);
          uVar12 = (**(code **)(*param_1 + 0x40))
                             (param_1,CONCAT44(uVar12,uVar5) & 0xffffff00ffffffff);
          uVar21 = (ulonglong)uVar12;
          if ((uVar12 != 1) && (uVar12 != 0xf)) break;
          uVar20 = uVar20 + 1;
        } while (uVar20 < uVar13);
      }
    }
    if ((int)uVar21 == 1) {
      pdVar6 = (double *)*param_2;
      dVar2 = *pdVar6;
      *param_2 = (longlong)(pdVar6 + 1);
      dVar3 = pdVar6[1];
      *param_2 = (longlong)(pdVar6 + 2);
      fVar1 = *(float *)(pdVar6 + 2);
      *param_2 = (longlong)pdVar6 + 0x14;
      bVar4 = *(byte *)((longlong)pdVar6 + 0x14);
      *param_2 = (longlong)pdVar6 + 0x15;
      bVar17 = *(byte *)((longlong)pdVar6 + 0x15);
      *param_2 = (longlong)pdVar6 + 0x16;
      cVar11 = *(char *)((longlong)pdVar6 + 0x16);
      *param_2 = (longlong)pdVar6 + 0x17;
      if (cVar11 != '\0') {
        *(byte *)((longlong)param_1 + 0x11c) = *(byte *)((longlong)param_1 + 0x11c) | 4;
        *(float *)(param_1 + 0x21) = fVar1;
        dVar10 = (60.0 / (double)fVar1) * (4.0 / (double)bVar17) * (double)DAT_14c72f42c;
        lVar18 = (longlong)dVar10;
        if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar10)) {
          auVar9._8_4_ = SUB84(dVar10,0);
          auVar9._0_8_ = dVar10;
          auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          uVar13 = movmskpd(DAT_14c72f42c,auVar9);
          dVar10 = (double)(longlong)(lVar18 + (ulonglong)(uVar13 & 1 ^ 1));
        }
        *(int *)((longlong)param_1 + 0x10c) = (int)dVar10;
        *(uint *)(param_1 + 0x22) = (uint)bVar4 * (int)dVar10;
        dVar2 = (double)DAT_14c72f42c * dVar2 * 0.001;
        lVar18 = (longlong)dVar2;
        if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar2)) {
          auVar7._8_4_ = SUB84(dVar2,0);
          auVar7._0_8_ = dVar2;
          auVar7._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
          uVar13 = movmskpd(DAT_14c72f42c,auVar7);
          dVar2 = (double)(longlong)(lVar18 + (ulonglong)(uVar13 & 1 ^ 1));
        }
        *(int *)((longlong)param_1 + 0x114) = (int)dVar2;
        dVar2 = (double)DAT_14c72f42c * dVar3 * 0.001;
        lVar18 = (longlong)dVar2;
        if ((lVar18 != -0x8000000000000000) && ((double)lVar18 != dVar2)) {
          auVar8._8_4_ = SUB84(dVar2,0);
          auVar8._0_8_ = dVar2;
          auVar8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
          uVar13 = movmskpd(DAT_14c72f42c,auVar8);
          dVar2 = (double)(longlong)(lVar18 + (ulonglong)(uVar13 & 1 ^ 1));
        }
        *(int *)(param_1 + 0x23) = (int)dVar2;
      }
      uVar13 = *(uint *)*param_2;
      *param_2 = (longlong)((uint *)*param_2 + 1);
      if (uVar13 == 0) {
        FUN_1453a8f30(param_1);
        uVar21 = uVar15 & 0xffffffff;
      }
      else {
        uVar21 = (ulonglong)uVar13;
        pvVar16 = AK::MemoryMgr::Malloc(0,(ulonglong)uVar13 * 0x18);
        if (pvVar16 == (void *)0x0) {
          uVar21 = 2;
        }
        else {
          if (uVar13 != 0) {
            puVar19 = (undefined4 *)((longlong)pvVar16 + 8);
            do {
              uVar5 = *(undefined4 *)*param_2;
              *param_2 = (longlong)((undefined4 *)*param_2 + 1);
              puVar19[-2] = uVar5;
              uVar5 = *(undefined4 *)*param_2;
              *param_2 = (longlong)((undefined4 *)*param_2 + 1);
              puVar19[-1] = uVar5;
              uVar5 = *(undefined4 *)*param_2;
              *param_2 = (longlong)((undefined4 *)*param_2 + 1);
              *puVar19 = uVar5;
              uVar5 = *(undefined4 *)*param_2;
              *param_2 = (longlong)((undefined4 *)*param_2 + 1);
              puVar19[1] = uVar5;
              uVar5 = *(undefined4 *)*param_2;
              *param_2 = (longlong)((undefined4 *)*param_2 + 1);
              puVar19[2] = uVar5;
              uVar5 = *(undefined4 *)*param_2;
              *param_2 = (longlong)((undefined4 *)*param_2 + 1);
              puVar19[3] = uVar5;
              uVar21 = uVar21 - (uVar15 & 0xffffffff);
              puVar19 = puVar19 + 6;
            } while (uVar21 != 0);
          }
          uVar13 = FUN_1453a8a40(param_1,pvVar16,uVar13);
          AK::MemoryMgr::Free(0,pvVar16);
          uVar21 = (ulonglong)uVar13;
        }
      }
    }
  }
  return uVar21;
}



// FUNCTION 1453a8160 FUN_1453a8160 body=280 status=ok
// SIG undefined FUN_1453a8160(void)

void FUN_1453a8160(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  LOCK();
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  UNLOCK();
  iVar2 = *param_2;
  if (iVar2 == 0) {
    FUN_144d524f0(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  else if (iVar2 == 1) {
    FUN_144d52590(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  else if (iVar2 == 2) {
    FUN_144d52620(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                  *(undefined1 *)((longlong)param_2 + 0x1e),param_2[4]);
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  if ((lVar5 != 0) &&
     (((0 < *(short *)(lVar5 + 0xd0) || (0 < *(short *)(lVar5 + 0xd4))) &&
      (uVar4 = *(uint *)(param_1 + 0x100), uVar4 != 0)))) {
    lVar5 = (ulonglong)uVar4 << 3;
    do {
      lVar5 = lVar5 + -8;
      uVar4 = uVar4 - 1;
      plVar3 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0xf8));
      if (((char)param_2[7] == '\0') || (plVar3[0x10] == 0)) {
        (**(code **)(*plVar3 + 0x80))(plVar3,param_2);
      }
    } while (uVar4 != 0);
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001453a826f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
  return;
}



// FUNCTION 1453a8280 FUN_1453a8280 body=178 status=ok
// SIG undefined FUN_1453a8280(void)

void FUN_1453a8280(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  LOCK();
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  UNLOCK();
  iVar2 = *param_2;
  if (iVar2 == 0) {
    FUN_144d524f0(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  else if (iVar2 == 1) {
    FUN_144d52590(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  else if (iVar2 == 2) {
    FUN_144d52620(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                  *(undefined1 *)((longlong)param_2 + 0x1e),param_2[4]);
  }
  if ((*(char *)((longlong)param_2 + 0x1f) == '\0') || (*(char *)((longlong)param_2 + 0x1d) == '\0')
     ) goto LAB_1453a830a;
  iVar2 = *param_2;
  if (iVar2 == 0) {
LAB_1453a82ff:
    uVar3 = 0;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_1453a830a;
      goto LAB_1453a82ff;
    }
    uVar3 = 1;
  }
  FUN_145354bf0(param_1 + 0x28,uVar3);
LAB_1453a830a:
  LOCK();
  piVar1 = (int *)(param_1 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
  }
  return;
}



// FUNCTION 1453a8340 FUN_1453a8340 body=327 status=ok
// SIG undefined FUN_1453a8340(void)

void FUN_1453a8340(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  LOCK();
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  UNLOCK();
  iVar2 = *param_2;
  if (iVar2 == 0) {
    FUN_144d524f0(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  else if (iVar2 == 1) {
    FUN_144d52590(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,param_2[4]);
  }
  else if (iVar2 == 2) {
    FUN_144d52620(param_1,*(undefined8 *)(param_2 + 2),param_2 + 5,
                  *(undefined1 *)((longlong)param_2 + 0x1e),param_2[4]);
  }
  if ((*(char *)((longlong)param_2 + 0x1f) == '\0') || (*(char *)((longlong)param_2 + 0x1d) == '\0')
     ) goto LAB_1453a83e0;
  iVar2 = *param_2;
  if (iVar2 == 0) {
LAB_1453a83d5:
    uVar5 = 0;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_1453a83e0;
      goto LAB_1453a83d5;
    }
    uVar5 = 1;
  }
  FUN_145354bf0(param_1 + 0x28,uVar5);
LAB_1453a83e0:
  uVar6 = *(uint *)(param_1 + 0x100);
  if (uVar6 != 0) {
    lVar7 = (ulonglong)uVar6 << 3;
    do {
      lVar7 = lVar7 + -8;
      uVar6 = uVar6 - 1;
      plVar3 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0xf8));
      if ((((char)param_2[7] == '\0') || (plVar3[0x10] == 0)) &&
         (cVar4 = FUN_1450d5200(plVar3,*(undefined8 *)(param_2 + 0xc)), cVar4 == '\0')) {
        (**(code **)(*plVar3 + 0x90))(plVar3,param_2);
      }
    } while (uVar6 != 0);
  }
  LOCK();
  piVar1 = (int *)(param_1 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001453a8477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))();
  return;
}



// FUNCTION 1453a8490 FUN_1453a8490 body=254 status=ok
// SIG undefined FUN_1453a8490(void)

void FUN_1453a8490(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*param_2 != 2) {
    uVar4 = 0xffffffff;
    lVar1 = *(longlong *)(param_1 + 0x70);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) | 4;
      uVar4 = *(uint *)(lVar1 + 200);
      if (uVar4 != 0xffffffff) {
        do {
          uVar4 = uVar4 - 1;
          if (uVar4 == 0xffffffff) break;
        } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar4 * 0x10) == 0);
      }
    }
    while (uVar4 != 0xffffffff) {
      uVar5 = (ulonglong)uVar4;
      if ((((char)param_2[2] == '\0') ||
          (*(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0xc0) + uVar5 * 0x10) + 0x80) == 0)) &&
         (plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + uVar5 * 0x10),
         cVar3 = (**(code **)(*plVar2 + 0x1d0))(plVar2,*param_2), cVar3 == '\0')) {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xc0) + uVar5 * 0x10);
        (**(code **)(*plVar2 + 0xa8))(plVar2,param_2);
      }
      do {
        uVar4 = uVar4 - 1;
        if (uVar4 == 0xffffffff) goto LAB_1453a856c;
      } while (*(int *)(*(longlong *)(lVar1 + 0xc0) + 8 + (ulonglong)uVar4 * 0x10) == 0);
    }
LAB_1453a856c:
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0xd8) = *(byte *)(lVar1 + 0xd8) & 0xfb;
    }
  }
  return;
}



// FUNCTION 1453a85b0 FUN_1453a85b0 body=81 status=ok
// SIG undefined FUN_1453a85b0(void)

void FUN_1453a85b0(undefined8 param_1,undefined1 param_2,ulonglong *param_3)

{
  if (((uint)*param_3 >> 0xd & 1) != 0) {
    FUN_144d52010(param_2);
  }
  if ((*param_3 & 0xfffffffffffffff2) != 0) {
    FUN_1450c22e0(param_1,param_2,0);
  }
  return;
}



// FUNCTION 1453a8630 FUN_1453a8630 body=487 status=ok
// SIG undefined FUN_1453a8630(void)

void FUN_1453a8630(longlong param_1,int param_2,float param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  float *pfVar3;
  char *pcVar4;
  uint uVar5;
  float *pfVar6;
  float *_Size;
  float local_res10 [2];
  
  if (param_2 == 0x36) {
    pbVar1 = *(byte **)(param_1 + 0x90);
    _Size = (float *)0x0;
    local_res10[0] = 0.0;
    pfVar6 = _Size;
    if (pbVar1 != (byte *)0x0) {
      pfVar3 = _Size;
      do {
        uVar5 = (int)pfVar3 + 1;
        if (pbVar1[uVar5] == 0x36) {
          pfVar6 = (float *)(pbVar1 + (longlong)pfVar3 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc)
                            );
          break;
        }
        pfVar3 = (float *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar1);
    }
    pfVar3 = local_res10;
    if (pfVar6 != (float *)0x0) {
      pfVar3 = pfVar6;
    }
    local_res10[0] = *pfVar3;
    if (param_3 - local_res10[0] != 0.0) {
      local_res10[0] = param_3;
      if (pbVar1 != (byte *)0x0) {
        pfVar6 = _Size;
        do {
          uVar5 = (int)pfVar6 + 1;
          if (*(byte *)((longlong)(ulonglong)uVar5 + (longlong)pbVar1) == 0x36) {
            pfVar6 = (float *)(pbVar1 + (longlong)pfVar6 * 4 +
                                        ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
            if (pfVar6 != (float *)0x0) goto LAB_1453a87cd;
            if (pbVar1 == (byte *)0x0) goto LAB_1453a872a;
            break;
          }
          pfVar6 = (float *)(ulonglong)uVar5;
        } while (uVar5 < *pbVar1);
        _Size = (float *)(ulonglong)*pbVar1;
      }
LAB_1453a872a:
      iVar2 = (int)_Size;
      uVar5 = iVar2 + 5;
      pcVar4 = AK::MemoryMgr::Malloc(0,(ulonglong)((uVar5 & 0xfffffffc) + 4 + iVar2 * 4));
      if (pcVar4 != (char *)0x0) {
        if (*(longlong *)(param_1 + 0x90) != 0) {
          memcpy(pcVar4 + 1,(void *)(*(longlong *)(param_1 + 0x90) + 1),(size_t)_Size);
          memcpy(pcVar4 + ((ulonglong)uVar5 & 0xfffffffc),
                 (void *)(((ulonglong)(iVar2 + 4) & 0xfffffffc) + *(longlong *)(param_1 + 0x90)),
                 (longlong)_Size * 4);
          AK::MemoryMgr::Free(0,*(void **)(param_1 + 0x90));
        }
        pcVar4[iVar2 + 1] = '6';
        *pcVar4 = (char)_Size + '\x01';
        *(char **)(param_1 + 0x90) = pcVar4;
        pfVar6 = (float *)(pcVar4 + (longlong)_Size * 4 + ((ulonglong)uVar5 & 0xfffffffc));
        if (pfVar6 != (float *)0x0) {
LAB_1453a87cd:
          *pfVar6 = local_res10[0];
        }
      }
      FUN_144d52010(0);
    }
  }
  FUN_14536d700(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1453a8850 FUN_1453a8850 body=284 status=ok
// SIG undefined FUN_1453a8850(void)

void FUN_1453a8850(longlong param_1,float *param_2,undefined8 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float local_res8 [2];
  
  pbVar1 = *(byte **)(param_1 + 0x90);
  pfVar6 = (float *)0x0;
  local_res8[0] = DAT_14c72f544._4_4_;
  if (pbVar1 != (byte *)0x0) {
    pfVar5 = pfVar6;
    do {
      uVar7 = (int)pfVar5 + 1;
      if (pbVar1[uVar7] == 0x36) {
        pfVar6 = (float *)(pbVar1 + (longlong)pfVar5 * 4 + ((ulonglong)(*pbVar1 + 4) & 0xfffffffc));
        break;
      }
      pfVar5 = (float *)(ulonglong)uVar7;
    } while (uVar7 < *pbVar1);
  }
  fVar9 = 1.0;
  pfVar5 = local_res8;
  if (pfVar6 != (float *)0x0) {
    pfVar5 = pfVar6;
  }
  local_res8[0] = *pfVar5;
  lVar2 = *(longlong *)(param_1 + 0x28);
  *param_2 = local_res8[0] * *param_2;
  cVar4 = (**(code **)(lVar2 + 0x18))(param_1 + 0x28,0xd);
  if (cVar4 != '\0') {
    fVar9 = (float)FUN_1453a7d20(param_1 + 0x28,0xd);
  }
  if ((*(ulonglong **)(param_1 + 0x58) != (ulonglong *)0x0) &&
     ((**(ulonglong **)(param_1 + 0x58) >> 0xd & 1) != 0)) {
    fVar8 = (float)FUN_1450a4f20(g_pGameSyncMgr,param_1 + 0x48,0xd,param_3);
    fVar9 = fVar9 * fVar8;
  }
  *param_2 = fVar9 * *param_2;
  plVar3 = *(longlong **)(param_1 + 0x78);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x280))(plVar3,param_2,param_3);
  }
  return;
}



// FUNCTION 1453a8970 FUN_1453a8970 body=205 status=ok
// SIG undefined FUN_1453a8970(void)

undefined8 FUN_1453a8970(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  void *pvVar4;
  longlong lVar5;
  __uint64 _Var6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  uVar7 = *(int *)((longlong)param_1 + 0xc) + param_2;
  _Var6 = (ulonglong)uVar7 * 0x18;
  if ((void *)*param_1 == (void *)0x0) {
    pvVar4 = AK::MemoryMgr::Malloc(2,_Var6);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
    if (((void *)*param_1 != (void *)0x0) && ((void *)*param_1 != pvVar4)) {
      if (uVar8 != 0) {
        lVar5 = 0;
        do {
          lVar2 = *param_1;
          puVar1 = (undefined8 *)(lVar5 + lVar2);
          uVar3 = puVar1[1];
          *(undefined8 *)(lVar5 + (longlong)pvVar4) = *puVar1;
          ((undefined8 *)(lVar5 + (longlong)pvVar4))[1] = uVar3;
          *(undefined8 *)(lVar5 + 0x10 + (longlong)pvVar4) = *(undefined8 *)(lVar5 + 0x10 + lVar2);
          uVar8 = uVar8 - 1;
          lVar5 = lVar5 + 0x18;
        } while (uVar8 != 0);
      }
      AK::MemoryMgr::Free(2,(void *)*param_1);
    }
  }
  else {
    pvVar4 = AK::MemoryMgr::Realloc(2,(void *)*param_1,_Var6);
    if (pvVar4 == (void *)0x0) {
      return 0;
    }
  }
  *param_1 = (longlong)pvVar4;
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  return 1;
}



// FUNCTION 1453a8a40 FUN_1453a8a40 body=296 status=ok
// SIG undefined FUN_1453a8a40(void)

undefined8 FUN_1453a8a40(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  
  if (param_3 == 0) {
    FUN_1453a8f30();
  }
  else {
    if (*(longlong *)(param_1 + 0x120) == 0) {
      puVar7 = AK::MemoryMgr::Malloc(2,0x10);
      if (puVar7 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x120) = 0;
        return 2;
      }
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined8 **)(param_1 + 0x120) = puVar7;
      if ((*(uint *)((longlong)puVar7 + 0xc) < param_3) &&
         (cVar6 = FUN_1453a8970(puVar7,param_3 - *(uint *)((longlong)puVar7 + 0xc)), cVar6 == '\0'))
      {
        return 2;
      }
    }
    else {
      *(undefined4 *)(*(longlong *)(param_1 + 0x120) + 8) = 0;
    }
    uVar9 = 0;
    if (param_3 != 0) {
      do {
        plVar4 = *(longlong **)(param_1 + 0x120);
        uVar2 = *(uint *)(plVar4 + 1);
        uVar3 = *(uint *)((longlong)plVar4 + 0xc);
        if (uVar3 <= uVar2) {
          iVar8 = (uVar3 >> 1) + uVar3;
          if (uVar3 == 0) {
            iVar8 = 1;
          }
          cVar6 = FUN_1453a8970(plVar4,iVar8);
          if (cVar6 == '\0') {
            return 2;
          }
        }
        if (*(uint *)((longlong)plVar4 + 0xc) <= uVar2) {
          return 2;
        }
        uVar2 = *(uint *)(plVar4 + 1);
        *(uint *)(plVar4 + 1) = uVar2 + 1;
        puVar7 = (undefined8 *)(*plVar4 + (ulonglong)uVar2 * 0x18);
        if (puVar7 == (undefined8 *)0x0) {
          return 2;
        }
        uVar5 = param_2[1];
        uVar9 = uVar9 + 1;
        *puVar7 = *param_2;
        puVar7[1] = uVar5;
        puVar1 = param_2 + 2;
        param_2 = param_2 + 3;
        puVar7[2] = *puVar1;
      } while (uVar9 < param_3);
    }
  }
  return 1;
}


