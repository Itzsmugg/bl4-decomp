// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147c04a8e FUN_147c04a8e body=117 status=ok
// SIG undefined FUN_147c04a8e(void)

void FUN_147c04a8e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_1401c3c2c();
  if (((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 0x12f) & 1) != 0)) &&
     (plVar2 = param_1, (*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
    while ((*(uint *)(plVar2 + 1) & 0x30) == 0) {
      plVar1 = plVar2 + 4;
      plVar2 = (longlong *)*plVar1;
      if ((longlong *)*plVar1 == (longlong *)0x0) {
        lVar3 = param_1[0x16];
        if (lVar3 == 0) {
          lVar3 = FUN_1448abda6(param_1);
        }
                    /* WARNING: Could not recover jumptable at 0x000147c04af9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x170))(param_1,0,lVar3,5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147c04b0e FUN_147c04b0e body=68 status=ok
// SIG undefined FUN_147c04b0e(void)

void FUN_147c04b0e(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_1405842b6();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) goto LAB_147c04b41;
  }
  param_2 = 0;
LAB_147c04b41:
  FUN_1435c4c78(param_1,param_2);
  return;
}



// FUNCTION 147c04b5e FUN_147c04b5e body=127 status=ok
// SIG undefined FUN_147c04b5e(void)

void FUN_147c04b5e(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_14113f0c0(param_2);
  if (cVar1 != '\0') {
    local_30 = *param_2;
    local_28 = param_2[1];
    FUN_140805e68(param_1 + 0x838,&local_30,1);
    FUN_144a7b126(param_1 + 0x838,&local_19,1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c04c44 FUN_147c04c44 body=42 status=ok
// SIG undefined FUN_147c04c44(void)

void FUN_147c04c44(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147c04c7a FUN_147c04c7a body=39 status=ok
// SIG undefined FUN_147c04c7a(void)

void FUN_147c04c7a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 147c04ca2 FUN_147c04ca2 body=31 status=ok
// SIG undefined FUN_147c04ca2(void)

void FUN_147c04ca2(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e26(uVar1);
  return;
}



// FUNCTION 147c04cc2 FUN_147c04cc2 body=42 status=ok
// SIG undefined FUN_147c04cc2(void)

void FUN_147c04cc2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147c04cf8 FUN_147c04cf8 body=39 status=ok
// SIG undefined FUN_147c04cf8(void)

void FUN_147c04cf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 147c04d20 FUN_147c04d20 body=31 status=ok
// SIG undefined FUN_147c04d20(void)

void FUN_147c04d20(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e26(uVar1);
  return;
}



// FUNCTION 147c04d40 FUN_147c04d40 body=155 status=ok
// SIG undefined FUN_147c04d40(void)

void FUN_147c04d40(longlong *param_1,short *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  longlong lVar7;
  
  iVar1 = (int)param_1[4];
  if (0 < (longlong)iVar1) {
    lVar7 = 0;
    do {
      plVar2 = (longlong *)(*param_1 + lVar7 * 8);
      while (plVar3 = plVar2, plVar2 = (longlong *)*plVar3, plVar2 != (longlong *)0x0) {
        iVar4 = (uint)*(ushort *)((longlong)plVar2 + 10) - param_3;
        sVar5 = (short)param_3;
        if (iVar4 != 0 && param_3 <= (int)(uint)*(ushort *)((longlong)plVar2 + 10)) {
          sVar6 = (short)(int)plVar2[1];
          *param_2 = sVar6;
          param_2[1] = (short)lVar7;
          param_2[2] = sVar5;
          *(short *)(plVar2 + 1) = sVar6 + sVar5;
          *(short *)((longlong)plVar2 + 10) = (short)iVar4;
          *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) - param_3;
          return;
        }
        if (iVar4 == 0) {
          *param_2 = (short)plVar2[1];
          param_2[1] = (short)lVar7;
          param_2[2] = sVar5;
          *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) - param_3;
          *plVar3 = *plVar2;
          *plVar2 = param_1[2];
          param_1[2] = (longlong)plVar2;
          return;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != iVar1);
  }
  *param_2 = *(short *)((longlong)param_1 + 0x1c);
  param_2[1] = (short)iVar1;
  param_2[2] = 0;
  return;
}



// FUNCTION 147c04ddc FUN_147c04ddc body=319 status=ok
// SIG undefined FUN_147c04ddc(void)

void FUN_147c04ddc(longlong *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  
  plVar6 = (longlong *)(*param_1 + (ulonglong)param_2[1] * 8);
  plVar7 = (longlong *)*plVar6;
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + (uint)param_2[2];
  if (plVar7 == (longlong *)0x0) {
    plVar5 = (longlong *)param_1[2];
    if (plVar5 == (longlong *)0x0) {
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      plVar5 = (longlong *)FUN_14001cc68(0x10,0);
    }
    else {
      param_1[2] = *plVar5;
    }
    *plVar5 = 0;
    *(ushort *)(plVar5 + 1) = *param_2;
    *(ushort *)((longlong)plVar5 + 10) = param_2[2];
  }
  else {
    uVar1 = *param_2;
    uVar2 = param_2[2];
    uVar3 = *(ushort *)(plVar7 + 1);
    uVar4 = *(ushort *)((longlong)plVar7 + 10);
    uVar8 = (uint)uVar4 + (uint)uVar3;
    while( true ) {
      if (uVar1 <= uVar8) break;
      plVar5 = (longlong *)*plVar7;
      plVar6 = plVar7;
      if (plVar5 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        goto LAB_147c04ed9;
      }
      uVar3 = *(ushort *)(plVar5 + 1);
      uVar4 = *(ushort *)((longlong)plVar5 + 10);
      uVar8 = (uint)uVar4 + (uint)uVar3;
      plVar7 = plVar5;
    }
    if ((uint)uVar2 + (uint)uVar1 == (uint)uVar3) {
      *(ushort *)(plVar7 + 1) = uVar1;
      *(ushort *)((longlong)plVar7 + 10) = uVar4 + uVar2;
      return;
    }
    if (uVar8 == uVar1) {
      *(ushort *)((longlong)plVar7 + 10) = uVar4 + uVar2;
      plVar6 = (longlong *)*plVar7;
      while( true ) {
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        if ((uint)*(ushort *)(plVar7 + 1) + (uint)*(ushort *)((longlong)plVar7 + 10) !=
            (uint)*(ushort *)(plVar6 + 1)) break;
        *(ushort *)((longlong)plVar7 + 10) =
             *(ushort *)((longlong)plVar7 + 10) + *(short *)((longlong)plVar6 + 10);
        plVar5 = (longlong *)*plVar6;
        *plVar7 = (longlong)plVar5;
        *plVar6 = param_1[2];
        param_1[2] = (longlong)plVar6;
        plVar6 = plVar5;
      }
      return;
    }
LAB_147c04ed9:
    plVar5 = (longlong *)param_1[2];
    if (plVar5 == (longlong *)0x0) {
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      plVar5 = (longlong *)FUN_14001cc68(0x10,0);
    }
    else {
      param_1[2] = *plVar5;
    }
    *plVar5 = (longlong)plVar7;
    *(ushort *)(plVar5 + 1) = uVar1;
    *(ushort *)((longlong)plVar5 + 10) = uVar2;
  }
  *plVar6 = (longlong)plVar5;
  return;
}



// FUNCTION 147c04f1c FUN_147c04f1c body=64 status=ok
// SIG undefined FUN_147c04f1c(void)

longlong FUN_147c04f1c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147c0e4d0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_147c0e4b3(lVar2,1);
  return lVar2;
}



// FUNCTION 147c04f5c FUN_147c04f5c body=387 status=ok
// SIG undefined FUN_147c04f5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c04f5c(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  longlong *_Dst;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_2 = param_2 + param_3 * 2;
  *param_1 = param_2;
  if (DAT_14caf3aa8 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caf3ac0);
    if (DAT_14caf3af0 != DAT_14caf3b1c) {
      puVar4 = &DAT_14caf3b20;
      if (DAT_14caf3b28 != (undefined *)0x0) {
        puVar4 = DAT_14caf3b28;
      }
      uVar2 = *(uint *)(puVar4 + (ulonglong)(DAT_14caf3b30 - 1U & param_2) * 4);
      while (uVar2 != 0xffffffff) {
        puVar1 = (uint *)(DAT_14caf3ae8 + (longlong)(int)uVar2 * 0x28);
        if (*puVar1 == param_2) {
          if ((puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) &&
             (uVar2 = puVar1[4], uVar2 != 0)) {
            _Dst = *(longlong **)(puVar1 + 2);
            lVar3 = *_Dst;
            iVar5 = uVar2 - 1;
            if (iVar5 == 0) {
              uVar2 = 0;
            }
            else {
              iVar6 = 1;
              if (iVar5 < 1) {
                iVar6 = iVar5;
              }
              memmove(_Dst,_Dst + (int)(uVar2 - iVar6),(longlong)iVar6 << 3);
              uVar2 = puVar1[4] - 1;
            }
            puVar1[4] = uVar2;
            QueryPerformanceCounter(&local_38);
            *(double *)(puVar1 + 6) = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
            _DAT_14caf3b38 = _DAT_14caf3b38 - param_2;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caf3ac0);
            goto LAB_147c04fc3;
          }
          break;
        }
        uVar2 = puVar1[8];
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caf3ac0);
  }
  lVar3 = FUN_14001cc68((longlong)(int)param_2,0);
LAB_147c04fc3:
  *(longlong *)(param_1 + 4) = lVar3;
  *(longlong *)(param_1 + 6) = (int)param_1[1] + lVar3;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c050e0 FUN_147c050e0 body=589 status=ok
// SIG undefined FUN_147c050e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c050e0(int *param_1)

{
  double *pdVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *_Dst;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar3 = *(longlong *)(param_1 + 4);
  if (lVar3 != 0) {
    if (DAT_14caf3aa8 == 0) {
      FUN_1400020a8(lVar3);
    }
    else {
      iVar9 = *param_1;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caf3ac0);
      local_90 = (longlong *)CONCAT44(local_90._4_4_,iVar9);
      plVar6 = (longlong *)FUN_147c0b460(iVar9);
      iVar8 = (int)plVar6[1];
      *(uint *)(plVar6 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar6 + 0xc) < iVar8 + 1U) {
        FUN_1456bd870(plVar6,iVar8);
      }
      *(longlong *)(*plVar6 + (longlong)iVar8 * 8) = lVar3;
      _DAT_14caf3b38 = iVar9 + _DAT_14caf3b38;
      if (DAT_14c76169c < _DAT_14caf3b38) {
        local_68 = 0x100000000;
        local_60 = &DAT_14caf3af8;
        local_58 = 0xffffffff;
        local_50 = 0;
        iVar9 = 0;
        iVar8 = 0;
        if (DAT_14caf3b10 != 0) {
          FUN_1449c0562(&local_68);
          iVar8 = DAT_14caf3b10;
        }
        local_78 = local_58;
        uVar4 = local_78;
        local_70 = local_50;
        local_6c = local_4c;
        local_88 = local_68;
        local_80 = local_60;
        local_90 = &DAT_14caf3ae8;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        local_78 = uVar4;
        if ((local_78._4_4_ == iVar8) && (local_60 == &DAT_14caf3af8)) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar10 = (undefined8 *)0x0;
          iVar9 = 0;
          iVar5 = local_78._4_4_;
          do {
            lVar3 = *local_90;
            lVar7 = (longlong)iVar5;
            if ((*(int *)(lVar3 + 0x10 + lVar7 * 0x28) != 0) &&
               ((piVar2 = (int *)(lVar3 + lVar7 * 0x28), puVar10 == (undefined8 *)0x0 ||
                (pdVar1 = (double *)(piVar2 + 6),
                *pdVar1 <= (double)puVar10[2] && (double)puVar10[2] != *pdVar1)))) {
              puVar10 = (undefined8 *)(lVar3 + lVar7 * 0x28 + 8);
              iVar9 = *piVar2;
            }
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
            FUN_1449c0562(&local_88);
            iVar5 = local_78._4_4_;
          } while (local_90 != &DAT_14caf3ae8 ||
                   (local_80 != &DAT_14caf3af8 || local_78._4_4_ != iVar8));
        }
        _Dst = (undefined8 *)*puVar10;
        uVar4 = *_Dst;
        iVar8 = *(int *)(puVar10 + 1) + -1;
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar5 = 1;
          if (iVar8 < 1) {
            iVar5 = iVar8;
          }
          memmove(_Dst,_Dst + (*(int *)(puVar10 + 1) - iVar5),(longlong)iVar5 << 3);
          iVar8 = *(int *)(puVar10 + 1) + -1;
        }
        *(int *)(puVar10 + 1) = iVar8;
        _DAT_14caf3b38 = _DAT_14caf3b38 - iVar9;
        FUN_1400020a8(uVar4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caf3ac0);
    }
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0532e FUN_147c0532e body=552 status=ok
// SIG undefined FUN_147c0532e(void)

void FUN_147c0532e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    iVar5 = *(int *)(param_1 + 0x220);
    if ((iVar5 == 0) || (iVar5 != *(int *)(lVar2 + 0x48))) {
      *(undefined4 *)(param_1 + 0x220) = 0;
      if (*(int *)(param_1 + 0x224) == 0) {
        iVar5 = 0;
        uVar6 = 0;
      }
      else {
        FUN_14482f6fa(param_1 + 0x218,0);
        lVar2 = *(longlong *)(param_1 + 8);
        uVar6 = (ulonglong)*(uint *)(param_1 + 0x220);
        iVar5 = *(int *)(param_1 + 0x224);
      }
      uVar4 = *(uint *)(lVar2 + 0x48);
      *(uint *)(param_1 + 0x220) = uVar4 + (int)uVar6;
      if ((uint)(iVar5 - (int)uVar6) < uVar4) {
        FUN_14475e4ac(param_1 + 0x218,uVar6);
      }
      memmove((void *)((longlong)*(void **)(param_1 + 0x218) + (longlong)(int)uVar4 * 4),
              *(void **)(param_1 + 0x218),uVar6 << 2);
      lVar2 = *(longlong *)(param_1 + 8);
      iVar5 = *(int *)(lVar2 + 0x48);
    }
    if (0 < iVar5) {
      lVar7 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + lVar7 * 8);
        lVar1 = *(longlong *)(lVar2 + 0x30);
        lVar3 = FUN_147c11a5c(lVar1,param_1);
        fVar8 = *(float *)(lVar1 + 0xb8) + *(float *)(*(longlong *)(param_1 + 0x10) + 0x77c);
        *(float *)(param_1 + 0x228) = fVar8;
        if ((*(byte *)(lVar1 + 0xc2) & 2) != 0) {
          uVar4 = *(int *)(lVar3 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar3 + 4) = uVar4;
          fVar8 = (*(float *)(lVar1 + 0xb8) - *(float *)(lVar1 + 0xbc)) *
                  ((float)(uVar4 >> 9 | 0x3f800000) + -1.0) + *(float *)(lVar1 + 0xbc) +
                  *(float *)(*(longlong *)(param_1 + 0x10) + 0x77c);
          *(float *)(param_1 + 0x228) = fVar8;
        }
        if ((*(byte *)(lVar1 + 0x73) & 8) == 0) {
          fVar8 = fVar8 + *(float *)(lVar1 + 0x74);
        }
        else {
          uVar4 = *(int *)(lVar3 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar3 + 4) = uVar4;
          fVar8 = (*(float *)(lVar1 + 0x74) - *(float *)(lVar1 + 0x124)) *
                  ((float)(uVar4 >> 9 | 0x3f800000) + -1.0) + *(float *)(lVar1 + 0x124) +
                  *(float *)(param_1 + 0x228);
        }
        *(float *)(*(longlong *)(param_1 + 0x218) + (longlong)*(int *)(lVar2 + 0x28) * 4) = fVar8;
        if (((*(int *)(param_1 + 0x208) == 1) && ((*(byte *)(lVar1 + 0xc0) & 1) != 0)) &&
           (*(int *)(lVar1 + 0x114) == 0 || 1 < *(int *)(lVar1 + 0x114))) {
          *(float *)(*(longlong *)(param_1 + 0x218) + (longlong)*(int *)(lVar2 + 0x28) * 4) =
               *(float *)(*(longlong *)(param_1 + 0x218) + (longlong)*(int *)(lVar2 + 0x28) * 4) -
               *(float *)(param_1 + 0x228);
        }
        lVar7 = lVar7 + 1;
        lVar2 = *(longlong *)(param_1 + 8);
      } while (lVar7 < *(int *)(lVar2 + 0x48));
    }
    *(undefined4 *)(param_1 + 0x210) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x218) + (longlong)*(int *)(param_1 + 0x20) * 4);
  }
  return;
}



// FUNCTION 147c05556 FUN_147c05556 body=196 status=ok
// SIG undefined FUN_147c05556(void)

longlong FUN_147c05556(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  if ((*(longlong *)(param_1 + 0x178) != 0) &&
     (lVar2 = *(longlong *)(param_1 + 8), *(int *)(lVar2 + 0x108) != *(int *)(lVar2 + 0x134))) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = lVar2 + 0x138;
    if (*(longlong *)(lVar2 + 0x140) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0x140);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x148) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4
                    );
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 0x100) + (longlong)iVar5 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            return *(longlong *)(param_1 + 0x178) + (ulonglong)(uint)puVar1[1];
          }
          return 0;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 147c0561a FUN_147c0561a body=1121 status=ok
// SIG undefined FUN_147c0561a(void)

void FUN_147c0561a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 *puVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_258 [32];
  undefined8 local_238 [16];
  double local_1b8 [5];
  double local_190;
  double local_188;
  undefined8 local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  double local_138 [4];
  undefined1 local_118 [16];
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 == 0) {
    pdVar4 = (double *)&DAT_14c846400;
    pdVar6 = local_138;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *pdVar6 = *pdVar4;
      pdVar4 = pdVar4 + 1;
      pdVar6 = pdVar6 + 1;
    }
  }
  else {
    dVar10 = *(double *)(lVar2 + 0x240);
    dVar8 = *(double *)(lVar2 + 0x248);
    dVar7 = *(double *)(lVar2 + 0x250);
    dVar11 = dVar8 + dVar8;
    dVar12 = dVar7 + dVar7;
    dVar13 = dVar10 * (dVar10 + dVar10);
    local_138[0] = 1.0 - (dVar7 * dVar12 + dVar8 * dVar11);
    dVar9 = 1.0 - (dVar7 * dVar12 + dVar13);
    local_e8 = 1.0 - (dVar13 + dVar8 * dVar11);
    local_138[2] = *(double *)(lVar2 + 0x240) * dVar12;
    dVar7 = *(double *)(lVar2 + 600);
    dVar13 = dVar12 * dVar7;
    dStack_f0 = (dVar10 + dVar10) * *(double *)(lVar2 + 600);
    dVar7 = dVar11 * dVar7;
    local_138[1] = dVar11 * dVar10 + dVar13;
    local_108 = dVar12 * dVar8 + dStack_f0;
    local_f8 = dVar7 + local_138[2];
    dStack_f0 = dVar12 * dVar8 - dStack_f0;
    local_138[2] = local_138[2] - dVar7;
    local_138[3] = 0.0;
    local_118._8_4_ = SUB84(dVar9,0);
    local_118._0_8_ = dVar11 * dVar10 - dVar13;
    local_118._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    uStack_100 = 0;
    uStack_e0 = 0;
    local_d8 = *(undefined8 *)(lVar2 + 0x260);
    uStack_d0 = *(undefined8 *)(lVar2 + 0x268);
    local_c8 = *(undefined8 *)(lVar2 + 0x270);
    uStack_c0 = 0x3ff0000000000000;
  }
  lVar2 = *(longlong *)(lVar1 + 0x30);
  dVar7 = *(double *)(lVar2 + 0x58) * 0.01745329238474369;
  dVar9 = *(double *)(lVar2 + 0x60) * 0.01745329238474369;
  dVar10 = *(double *)(lVar2 + 0x68) * 0.01745329238474369;
  dVar8 = sin(dVar7);
  dVar11 = sin(dVar9);
  dVar12 = sin(dVar10);
  sin(0.0);
  dVar7 = cos(dVar7);
  dVar9 = cos(dVar9);
  dVar10 = cos(dVar10);
  cos(0.0);
  local_1b8[0] = dVar7 * dVar9;
  local_1b8[1] = dVar11 * dVar7;
  local_1b8[2] = dVar8;
  local_1b8[3] = 0.0;
  local_1b8[4] = dVar8 * dVar12 * dVar9 - dVar11 * dVar10;
  local_190 = dVar8 * dVar12 * dVar11 + dVar9 * dVar10;
  local_188 = -dVar12 * dVar7;
  local_180 = 0;
  local_178 = -(dVar8 * dVar10 * dVar9 + dVar11 * dVar12);
  local_170 = dVar9 * dVar12 - dVar11 * dVar8 * dVar10;
  local_168 = dVar7 * dVar10;
  local_160 = 0;
  local_158 = *(undefined8 *)(lVar2 + 0x40);
  uStack_150 = *(undefined8 *)(lVar2 + 0x48);
  local_148 = *(undefined8 *)(lVar2 + 0x50);
  local_140 = 0x3ff0000000000000;
  if ((*(byte *)(*(longlong *)(lVar1 + 0x30) + 0x71) & 1) == 0) {
    FUN_1447fea8d(local_238,local_1b8,local_138);
    puVar3 = local_238;
    puVar5 = (undefined8 *)(param_1 + 0x60);
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    pdVar4 = (double *)&DAT_14c846400;
  }
  else {
    pdVar4 = local_1b8;
    pdVar6 = (double *)(param_1 + 0x60);
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *pdVar6 = *pdVar4;
      pdVar4 = pdVar4 + 1;
      pdVar6 = pdVar6 + 1;
    }
    pdVar4 = local_138;
  }
  pdVar6 = (double *)(param_1 + 0xe0);
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar6 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar6 = pdVar6 + 1;
  }
  if ((local_b0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c05a7c FUN_147c05a7c body=159 status=ok
// SIG undefined FUN_147c05a7c(void)

void FUN_147c05a7c(longlong *param_1)

{
  float *pfVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  
  if (*(int *)((longlong)param_1 + 0x18c) == 0) {
    plVar2 = *(longlong **)(param_1[3] + 0x50);
    if ((((int)plVar2[0x14] == 0) ||
        (lVar4 = (longlong)((int)plVar2[0x14] + -1) * 0xc + plVar2[0x13], lVar4 == 0)) ||
       (pfVar1 = (float *)(lVar4 + 8),
       *pfVar1 <= *(float *)(param_1 + 0x34) && *(float *)(param_1 + 0x34) != *pfVar1)) {
      lVar4 = *(longlong *)(param_1[3] + 0x30);
      cVar3 = (**(code **)(*param_1 + 0xd8))(param_1);
      if (cVar3 == '\0') {
        fVar5 = (float)(**(code **)(*plVar2 + 0x398))(plVar2);
        if (fVar5 != 0.0) {
          return;
        }
        if (NAN(fVar5)) {
          return;
        }
        fVar5 = *(float *)(lVar4 + 0x74);
        if (fVar5 != 0.0) {
          return;
        }
        if (NAN(fVar5)) {
          return;
        }
        if (*(int *)(lVar4 + 0x114) != 0) {
          return;
        }
      }
      *(byte *)((longlong)param_1 + 0x161) = *(byte *)((longlong)param_1 + 0x161) | 8;
    }
  }
  return;
}



// FUNCTION 147c05b1c FUN_147c05b1c body=637 status=ok
// SIG undefined FUN_147c05b1c(void)

float FUN_147c05b1c(longlong *param_1,float param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  
  lVar7 = param_1[2];
  if ((*(byte *)(lVar7 + 0x691) & 4) == 0) {
    param_1[0x37] = param_1[0xb];
    param_1[0x35] = param_1[9];
    param_1[0x36] = param_1[10];
    uVar11 = *(undefined4 *)(lVar7 + 0x264);
    uVar3 = *(undefined4 *)(lVar7 + 0x268);
    uVar4 = *(undefined4 *)(lVar7 + 0x26c);
    lVar2 = *(longlong *)(lVar7 + 0x270);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar7 + 0x260);
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar11;
    *(undefined4 *)(param_1 + 10) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar4;
    param_1[0xb] = lVar2;
  }
  else {
    lVar5 = *(longlong *)(lVar7 + 0x268);
    lVar2 = *(longlong *)(lVar7 + 0x270);
    param_1[9] = *(longlong *)(lVar7 + 0x260);
    param_1[10] = lVar5;
    param_1[0xb] = lVar2;
    *(int *)(param_1 + 0x35) = (int)param_1[9];
    *(undefined4 *)((longlong)param_1 + 0x1ac) = *(undefined4 *)((longlong)param_1 + 0x4c);
    *(int *)(param_1 + 0x36) = (int)param_1[10];
    *(undefined4 *)((longlong)param_1 + 0x1b4) = *(undefined4 *)((longlong)param_1 + 0x54);
    param_1[0x37] = param_1[0xb];
  }
  FUN_147c0561a(param_1);
  fVar10 = *(float *)((longlong)param_1 + 0x19c) + param_2;
  *(float *)((longlong)param_1 + 0x19c) = fVar10;
  plVar1 = (longlong *)(param_3 + 0x30);
  if ((*(byte *)(*(longlong *)(param_3 + 0x30) + 0x73) & 1) == 0) {
    fVar12 = *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x34) = param_2 + fVar12;
    fVar10 = *(float *)(param_1 + 0x45);
    if ((*(float *)(param_1 + 0x42) <= 0.0) || (param_2 + fVar12 < *(float *)(param_1 + 0x42)))
    goto LAB_147c05d40;
    iVar6 = (int)param_1[0x41];
  }
  else {
    *(float *)(param_1 + 0x34) = fVar10;
    if (*(float *)(param_1 + 0x42) <= 0.0001) {
      fVar10 = *(float *)(param_1 + 0x45);
      goto LAB_147c05d40;
    }
    uVar11 = FUN_1447c7e44();
    *(undefined4 *)(param_1 + 0x34) = uVar11;
    iVar6 = (int)param_1[0x41];
    fVar10 = *(float *)(param_1 + 0x45);
    if (*(float *)((longlong)param_1 + 0x19c) - (float)iVar6 * *(float *)(param_1 + 0x42) <
        *(float *)(param_1 + 0x42)) goto LAB_147c05d40;
  }
  *(int *)(param_1 + 0x41) = iVar6 + 1;
  (**(code **)(*param_1 + 0x90))(param_1);
  lVar7 = *plVar1;
  if ((*(byte *)(lVar7 + 0x73) & 1) == 0) {
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x42);
    lVar7 = *plVar1;
  }
  if (((*(byte *)(lVar7 + 0xf6) & 1) != 0) ||
     (((*(byte *)(lVar7 + 0xc0) & 1) != 0 && ((int)param_1[0x41] == 1)))) {
    FUN_147c0532e(param_1);
  }
  if (((*(byte *)(param_1 + 0x2c) & 0x40) != 0) && (iVar6 = *(int *)(param_3 + 0x40), -3 < iVar6)) {
    uVar9 = 0xfffffffd;
    do {
      plVar8 = plVar1;
      if (((uVar9 == 0xfffffffd) || (plVar8 = (longlong *)(param_3 + 0x50), uVar9 == 0xfffffffe)) ||
         (plVar8 = (longlong *)(param_3 + 0x48), uVar9 == 0xffffffff)) {
LAB_147c05ca8:
        plVar8 = (longlong *)*plVar8;
        if ((plVar8 != (longlong *)0x0) && ((*(byte *)((longlong)plVar8 + 0x29) & 8) != 0)) {
          (**(code **)(*plVar8 + 0x328))(plVar8,param_1);
          iVar6 = *(int *)(param_3 + 0x40);
        }
      }
      else if (-1 < (int)uVar9) {
        plVar8 = (longlong *)((ulonglong)uVar9 * 8 + *(longlong *)(param_3 + 0x38));
        goto LAB_147c05ca8;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < iVar6);
  }
LAB_147c05d40:
  fVar12 = fVar10;
  if (((*(byte *)(*plVar1 + 0xc0) & 1) != 0) && (fVar12 = 0.0, (int)param_1[0x41] < 1)) {
    fVar12 = fVar10;
  }
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) - fVar12;
  return fVar12;
}



// FUNCTION 147c05d9a FUN_147c05d9a body=151 status=ok
// SIG undefined FUN_147c05d9a(void)

undefined4
FUN_147c05d9a(longlong *param_1,undefined8 param_2,longlong param_3,char param_4,byte param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(byte *)(param_1 + 0x2c) & 0x30) == 0 && param_4 == '\0') {
    if (0.0 <= *(float *)(param_1 + 0x34)) {
      iVar1 = *(int *)(*(longlong *)(param_3 + 0x30) + 0x114);
      if (((iVar1 == 0) || ((int)param_1[0x41] < iVar1)) ||
         ((((float)iVar1 * *(float *)(param_1 + 0x42) < *(float *)((longlong)param_1 + 0x19c) ||
           (float)iVar1 * *(float *)(param_1 + 0x42) == *(float *)((longlong)param_1 + 0x19c)) &
          (param_5 ^ 1)) == 0)) {
        uVar2 = (**(code **)(*param_1 + 0xb8))(param_1);
        *(undefined4 *)(param_1 + 0x33) = uVar2;
      }
      goto LAB_147c05dca;
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x161) & 4) != 0) {
    FUN_147bf6c08(param_1);
  }
LAB_147c05dca:
  return (int)param_1[0x33];
}



// FUNCTION 147c05e32 FUN_147c05e32 body=155 status=ok
// SIG undefined FUN_147c05e32(void)

void FUN_147c05e32(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_3 + 0x88);
  if (0 < iVar3) {
    lVar1 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_3 + 0x80) + lVar5 * 8);
      if ((plVar2 != (longlong *)0x0) && ((~*(byte *)(plVar2 + 5) & 0x82) == 0)) {
        uVar4 = FUN_147bf6ddc(param_1,*(undefined8 *)(*(longlong *)(lVar1 + 0x80) + lVar5 * 8));
        (**(code **)(*plVar2 + 0x2b0))(plVar2,param_1,uVar4,param_2);
        iVar3 = *(int *)(param_3 + 0x88);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  return;
}



// FUNCTION 147c05ece FUN_147c05ece body=226 status=ok
// SIG undefined FUN_147c05ece(void)

void FUN_147c05ece(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar1 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
  iVar3 = *(int *)(param_3 + 0x88);
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_3 + 0x80) + lVar5 * 8);
      if ((plVar2 != (longlong *)0x0) && ((~*(byte *)(plVar2 + 5) & 0x84) == 0)) {
        uVar4 = FUN_147bf6ddc(param_1,*(undefined8 *)(*(longlong *)(lVar1 + 0x80) + lVar5 * 8));
        (**(code **)(*plVar2 + 0x2b8))(plVar2,param_1,uVar4,param_2);
        iVar3 = *(int *)(param_3 + 0x88);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  plVar2 = *(longlong **)(param_3 + 0x48);
  if ((plVar2 != (longlong *)0x0) && ((~*(byte *)(plVar2 + 5) & 0x84) == 0)) {
    uVar4 = FUN_147bf6ddc(param_1,*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000147c05fad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2b8))(plVar2,param_1,uVar4,param_2);
    return;
  }
  return;
}



// FUNCTION 147c05fe0 FUN_147c05fe0 body=220 status=ok
// SIG undefined FUN_147c05fe0(void)

undefined4 FUN_147c05fe0(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x98);
  if (0 < lVar5) {
    lVar2 = *(longlong *)(param_1 + 8);
    uVar3 = *(ulonglong *)(*(longlong *)(**(longlong **)(lVar2 + 0x40) + 0x90) + -8 + lVar5 * 8);
    if ((uVar3 != 0) && (*(int *)(lVar2 + 0x68) != *(int *)(lVar2 + 0x94))) {
      uVar4 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      lVar5 = lVar2 + 0x98;
      if (*(longlong *)(lVar2 + 0xa0) != 0) {
        lVar5 = *(longlong *)(lVar2 + 0xa0);
      }
      iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0xa8) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                               4);
      if (iVar6 != -1) {
        do {
          puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 0x60) + (longlong)iVar6 * 0x18);
          if (*puVar1 == uVar3) {
            if (puVar1 + 1 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
              return 0xffffffff;
            }
            return (int)puVar1[1];
          }
          iVar6 = (int)puVar1[2];
        } while (iVar6 != -1);
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 147c060bc FUN_147c060bc body=100 status=ok
// SIG undefined FUN_147c060bc(void)

double * FUN_147c060bc(undefined8 param_1,double *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = FUN_147c05fe0();
  if (iVar5 == -1) {
    param_2[2] = *(double *)(param_3 + 0x28);
    dVar3 = *(double *)(param_3 + 0x20);
    *param_2 = *(double *)(param_3 + 0x18);
    param_2[1] = dVar3;
  }
  else {
    lVar6 = (longlong)iVar5;
    fVar1 = *(float *)(param_3 + 0x14 + lVar6);
    fVar2 = *(float *)(param_3 + 0x10 + lVar6);
    dVar3 = *(double *)(param_3 + 0x28);
    dVar4 = *(double *)(param_3 + 0x20);
    *param_2 = (double)*(float *)(param_3 + 0xc + lVar6) + *(double *)(param_3 + 0x18);
    param_2[1] = (double)fVar2 + dVar4;
    param_2[2] = (double)fVar1 + dVar3;
  }
  return param_2;
}



// FUNCTION 147c06120 FUN_147c06120 body=1285 status=ok
// SIG undefined FUN_147c06120(void)

void FUN_147c06120(longlong param_1)

{
  double dVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double local_128;
  double local_118;
  double local_108;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  
  uVar10 = DAT_14c8464e8;
  lVar14 = *(longlong *)(param_1 + 0x10);
  if (lVar14 != 0) {
    dVar8 = *(double *)(lVar14 + 0x280);
    dVar9 = *(double *)(lVar14 + 0x288);
    dVar1 = *(double *)(lVar14 + 0x290);
    lVar15 = *(longlong *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x1d8) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x1e0) = uVar10;
    *(undefined8 *)(param_1 + 0x1e8) = DAT_14c8464f0;
    *(undefined8 *)(param_1 + 0x1d0) = DAT_14c8464f0;
    uVar10 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x1c0) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x1c8) = uVar10;
    *(undefined1 *)(param_1 + 0x1f0) = 0;
    iVar11 = FUN_147c05fe0();
    bVar2 = *(byte *)(*(longlong *)(lVar15 + 0x30) + 0x71);
    if ((bVar2 & 1) == 0) {
      local_f8 = DAT_14c846400;
      dStack_f0 = DAT_14c846408;
      local_108 = DAT_14c846410;
      local_e8._8_8_ = DAT_14c846428;
      local_e8._0_8_ = DAT_14c846420;
      local_128 = DAT_14c846430;
      local_118 = DAT_14c846450;
      pdVar13 = (double *)&DAT_14c846460;
      local_d8 = DAT_14c846470;
      dVar16 = DAT_14c846440;
      dVar17 = DAT_14c846448;
    }
    else {
      dVar5 = *(double *)(lVar14 + 0x240);
      dVar6 = *(double *)(lVar14 + 0x248);
      dVar3 = *(double *)(lVar14 + 0x250);
      local_d8 = *(double *)(lVar14 + 0x270);
      local_108 = *(double *)(lVar14 + 0x280);
      dVar7 = *(double *)(lVar14 + 0x288);
      dVar26 = dVar6 + dVar6;
      dVar19 = dVar3 + dVar3;
      dVar23 = dVar5 * (dVar5 + dVar5);
      local_f8 = (1.0 - (dVar3 * dVar19 + dVar6 * dVar26)) * local_108;
      dVar4 = (1.0 - (dVar3 * dVar19 + dVar23)) * dVar7;
      dVar17 = *(double *)(lVar14 + 0x290);
      local_118 = (1.0 - (dVar23 + dVar6 * dVar26)) * dVar17;
      dVar3 = *(double *)(lVar14 + 0x240) * dVar19;
      dVar23 = *(double *)(lVar14 + 600);
      dVar24 = dVar19 * dVar23;
      dVar27 = (dVar5 + dVar5) * *(double *)(lVar14 + 600);
      dVar23 = dVar26 * dVar23;
      dStack_f0 = (dVar26 * dVar5 + dVar24) * local_108;
      local_128 = (dVar19 * dVar6 + dVar27) * dVar7;
      dVar16 = (dVar23 + dVar3) * dVar17;
      local_108 = (dVar3 - dVar23) * local_108;
      dVar17 = (dVar19 * dVar6 - dVar27) * dVar17;
      local_e8._8_4_ = SUB84(dVar4,0);
      local_e8._0_8_ = (dVar26 * dVar5 - dVar24) * dVar7;
      local_e8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      pdVar13 = (double *)(lVar14 + 0x260);
    }
    if ((longlong)*(int *)(param_1 + 0x18c) < 1) {
      dVar6 = -4398046511104.0;
      dVar23 = -4398046511104.0;
      dVar5 = 4398046511104.0;
      dVar3 = 4398046511104.0;
      dVar4 = dVar23;
      dVar7 = dVar5;
    }
    else {
      lVar15 = (longlong)iVar11;
      dVar6 = -4398046511104.0;
      dVar23 = -4398046511104.0;
      dVar5 = 4398046511104.0;
      dVar3 = 4398046511104.0;
      lVar14 = 0;
      dVar4 = dVar23;
      dVar7 = dVar5;
      do {
        lVar12 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar14 * 2) *
                 (longlong)*(int *)(param_1 + 0x188) + *(longlong *)(param_1 + 0x168);
        if (iVar11 == -1) {
          dVar19 = ABS((double)*(float *)(lVar12 + 0x68) * dVar1);
          dVar27 = ABS((double)*(float *)(lVar12 + 100) * dVar9);
          dVar24 = ABS((double)*(float *)(lVar12 + 0x60) * dVar8);
          if (dVar24 <= dVar27) {
            dVar24 = dVar27;
          }
          if (dVar24 <= dVar19) {
            dVar24 = dVar19;
          }
        }
        else {
          fVar25 = ABS(*(float *)(lVar12 + 0x14 + lVar15));
          fVar22 = ABS(*(float *)(lVar12 + 0x10 + lVar15));
          fVar18 = ABS(*(float *)(lVar12 + 0xc + lVar15));
          if (fVar18 <= fVar22) {
            fVar18 = fVar22;
          }
          if (fVar18 <= fVar25) {
            fVar18 = fVar25;
          }
          dVar24 = (double)fVar18;
        }
        dVar19 = *(double *)(lVar12 + 0x18);
        dVar27 = *(double *)(lVar12 + 0x20);
        dVar26 = *(double *)(lVar12 + 0x28);
        dVar20 = dVar19;
        dVar21 = dVar27;
        if ((bVar2 & 1) != 0) {
          dVar20 = dVar26 * dVar16 + dVar27 * (double)local_e8._0_8_ + dVar19 * local_f8 + *pdVar13;
          dVar21 = dVar26 * dVar17 + dVar27 * (double)local_e8._8_8_ + dVar19 * dStack_f0 +
                   pdVar13[1];
          dVar26 = dVar26 * local_118 + dVar19 * local_108 + dVar27 * local_128 + local_d8;
        }
        if (dVar20 - dVar24 <= dVar5) {
          dVar5 = dVar20 - dVar24;
        }
        if (dVar23 <= dVar24 + dVar20) {
          dVar23 = dVar24 + dVar20;
        }
        if (dVar21 - dVar24 <= dVar3) {
          dVar3 = dVar21 - dVar24;
        }
        if (dVar6 <= dVar24 + dVar21) {
          dVar6 = dVar24 + dVar21;
        }
        if (dVar26 - dVar24 <= dVar7) {
          dVar7 = dVar26 - dVar24;
        }
        if (dVar4 <= dVar24 + dVar26) {
          dVar4 = dVar24 + dVar26;
        }
        lVar14 = lVar14 + 1;
      } while (*(int *)(param_1 + 0x18c) != lVar14);
    }
    *(double *)(param_1 + 0x1c0) = dVar5;
    *(double *)(param_1 + 0x1c8) = dVar3;
    *(double *)(param_1 + 0x1d0) = dVar7;
    *(double *)(param_1 + 0x1d8) = dVar23;
    *(double *)(param_1 + 0x1e0) = dVar6;
    *(double *)(param_1 + 0x1e8) = dVar4;
    *(undefined1 *)(param_1 + 0x1f0) = 1;
  }
  return;
}



// FUNCTION 147c06696 FUN_147c06696 body=474 status=ok
// SIG undefined FUN_147c06696(void)

void FUN_147c06696(longlong param_1,float *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  float fVar12;
  int local_8c;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (0 < *(int *)(*(longlong *)(lVar2 + 0x50) + 0xa0)) {
    lVar4 = FUN_147c11a5c(*(longlong *)(lVar2 + 0x50),param_1);
    lVar5 = *(longlong *)(lVar2 + 0x50);
    if (0 < *(int *)(lVar5 + 0xa0)) {
      lVar10 = 0;
      lVar9 = 0;
      do {
        lVar3 = *(longlong *)(lVar5 + 0x98);
        if ((lVar3 + lVar10 != 0) && (*(int *)(lVar2 + 0x28) < *(int *)(param_1 + 0x200))) {
          lVar8 = (longlong)*(int *)(lVar2 + 0x28) * 0x10;
          if ((lVar9 < *(int *)(*(longlong *)(param_1 + 0x1f8) + 8 + lVar8)) &&
             ((plVar11 = (longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar8),
              *(char *)(*plVar11 + lVar9) == '\0' &&
              (*(float *)(lVar3 + 8 + lVar10) <= *(float *)(param_1 + 0x1a0))))) {
            if (*param_2 <= 1e-05 && *param_2 != 1e-05) {
              *param_2 = 1e-05;
            }
            local_8c = *(int *)(lVar3 + lVar10);
            iVar1 = *(int *)(lVar3 + 4 + lVar10);
            if (-1 < iVar1) {
              iVar7 = 0;
              if (-1 < local_8c - iVar1) {
                uVar6 = *(int *)(lVar4 + 4) * 0xbb38435 + 0x3619636b;
                *(uint *)(lVar4 + 4) = uVar6;
                iVar7 = (int)((float)((local_8c - iVar1) + 1) *
                             ((float)(uVar6 >> 9 | 0x3f800000) + -1.0));
              }
              local_8c = iVar7 + iVar1;
            }
            fVar12 = (float)FUN_147a77524(*(longlong *)(lVar2 + 0x50) + 0xa8,
                                          *(undefined4 *)(param_1 + 0x1a0),
                                          *(undefined8 *)(param_1 + 0x10),0);
            *param_3 = *param_3 -
                       ((int)ROUND(-0.5 - ((float)local_8c * fVar12 + (float)local_8c * fVar12)) >>
                       1);
            *(undefined1 *)(*plVar11 + lVar9) = 1;
            lVar5 = *(longlong *)(lVar2 + 0x50);
          }
        }
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0xc;
      } while (lVar9 < *(int *)(lVar5 + 0xa0));
    }
  }
  return;
}



// FUNCTION 147c06870 FUN_147c06870 body=747 status=ok
// SIG undefined FUN_147c06870(void)

void FUN_147c06870(longlong param_1,float param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [32];
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar14 = *(longlong *)(param_1 + 8);
  lVar5 = **(longlong **)(lVar14 + 0x40);
  local_60 = (undefined1 *)0x0;
  local_58 = 0x800000000;
  lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x98);
  if (0 < lVar15) {
    lVar14 = 0;
    do {
      uVar8 = local_58;
      uVar6 = *(ulonglong *)(*(longlong *)(lVar5 + 0x90) + lVar14 * 8);
      if ((uVar6 != 0) &&
         (lVar13 = *(longlong *)(param_1 + 8), *(int *)(lVar13 + 0x68) != *(int *)(lVar13 + 0x94)))
      {
        uVar10 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        lVar12 = lVar13 + 0x98;
        if (*(longlong *)(lVar13 + 0xa0) != 0) {
          lVar12 = *(longlong *)(lVar13 + 0xa0);
        }
        iVar11 = *(int *)(lVar12 + (ulonglong)
                                   (*(int *)(lVar13 + 0xa8) - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
        if (iVar11 != -1) {
          do {
            puVar1 = (ulonglong *)(*(longlong *)(lVar13 + 0x60) + (longlong)iVar11 * 0x18);
            if (*puVar1 == uVar6) {
              if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
                uVar6 = puVar1[1];
                lVar13 = (longlong)(int)local_58;
                uVar10 = (int)local_58 + 1;
                local_58 = CONCAT44(local_58._4_4_,uVar10);
                if (local_58._4_4_ < uVar10) {
                  FUN_1400cc390(local_80,uVar8 & 0xffffffff);
                }
                puVar9 = local_60;
                if (local_60 == (undefined1 *)0x0) {
                  puVar9 = local_80;
                }
                *(int *)(puVar9 + lVar13 * 4) = (int)uVar6;
              }
              break;
            }
            iVar11 = (int)puVar1[2];
          } while (iVar11 != -1);
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar15);
    lVar14 = *(longlong *)(param_1 + 8);
  }
  if (0 < *(int *)(param_1 + 0x18c)) {
    bVar4 = *(byte *)(lVar14 + 0x37);
    lVar14 = 0;
    do {
      lVar15 = *(longlong *)(param_1 + 0x168);
      lVar13 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar14 * 2) *
               (longlong)*(int *)(param_1 + 0x188);
      lVar5 = lVar15 + lVar13;
      *(undefined4 *)(lVar15 + 0x48 + lVar13) = *(undefined4 *)(lVar15 + 0x38 + lVar13);
      *(undefined8 *)(lVar15 + 0x40 + lVar13) = *(undefined8 *)(lVar15 + 0x30 + lVar13);
      *(uint *)(lVar15 + 0x60 + lVar13) = *(uint *)(lVar15 + 0x50 + lVar13) & 0x7fffffff;
      *(uint *)(lVar15 + 100 + lVar13) = *(uint *)(lVar15 + 0x54 + lVar13) & 0x7fffffff;
      *(uint *)(lVar15 + 0x68 + lVar13) = *(uint *)(lVar15 + 0x58 + lVar13) & 0x7fffffff;
      *(undefined4 *)(lVar15 + 0x5c + lVar13) = *(undefined4 *)(lVar15 + 0x4c + lVar13);
      puVar3 = (undefined8 *)(lVar15 + 0x80 + lVar13);
      uVar7 = puVar3[1];
      puVar2 = (undefined8 *)(lVar15 + 0x70 + lVar13);
      *puVar2 = *puVar3;
      puVar2[1] = uVar7;
      if (((*(byte *)(lVar15 + 0x6f + lVar13) & 2) == 0) || (fVar16 = 0.0, (bVar4 & 1) != 0)) {
        fVar16 = *(float *)(lVar5 + 0x94) * param_2;
      }
      *(float *)(lVar5 + 0x90) = fVar16 + *(float *)(lVar5 + 0x90);
      lVar15 = (longlong)*(int *)(param_1 + 0x40);
      if (0 < lVar15) {
        *(undefined4 *)(lVar5 + 4 + lVar15) = *(undefined4 *)(lVar5 + lVar15);
      }
      if (0 < (int)local_58) {
        lVar15 = 0;
        do {
          puVar9 = local_60;
          if (local_60 == (undefined1 *)0x0) {
            puVar9 = local_80;
          }
          lVar13 = (longlong)*(int *)(puVar9 + lVar15 * 4);
          *(undefined4 *)(lVar5 + 0x44 + lVar13) = *(undefined4 *)(lVar5 + 0x14 + lVar13);
          *(undefined8 *)(lVar5 + 0x3c + lVar13) = *(undefined8 *)(lVar5 + 0xc + lVar13);
          *(undefined8 *)(lVar5 + 0xc + lVar13) = *(undefined8 *)(lVar5 + lVar13);
          *(undefined4 *)(lVar5 + 0x14 + lVar13) = *(undefined4 *)(lVar5 + 8 + lVar13);
          *(undefined4 *)(lVar5 + 0x38 + lVar13) = *(undefined4 *)(lVar5 + 0x2c + lVar13);
          *(undefined8 *)(lVar5 + 0x30 + lVar13) = *(undefined8 *)(lVar5 + 0x24 + lVar13);
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)local_58);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(param_1 + 0x18c));
  }
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c06b5c FUN_147c06b5c body=1180 status=ok
// SIG undefined FUN_147c06b5c(void)

void FUN_147c06b5c(longlong param_1,double *param_2,double *param_3,double *param_4,float param_5,
                  undefined1 (*param_6) [16],double *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_198 [32];
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  dVar9 = (double)param_5;
  dVar7 = param_4[2];
  dVar8 = param_4[1];
  dVar2 = dVar9 * *param_4 + *param_3;
  *param_3 = dVar2;
  dVar8 = dVar8 * dVar9 + param_3[1];
  param_3[1] = dVar8;
  dVar7 = dVar7 * dVar9 + param_3[2];
  param_3[2] = dVar7;
  *(float *)(param_1 + 0x18) = (float)dVar2;
  *(float *)(param_1 + 0x1c) = (float)dVar8;
  *(float *)(param_1 + 0x20) = (float)dVar7;
  dVar7 = *param_3;
  if (ABS(dVar7) <= 9.999999747378752e-05) {
    dVar8 = param_3[1];
    dVar9 = param_3[2];
    if ((ABS(dVar8) <= 9.999999747378752e-05) && (ABS(dVar9) <= 9.999999747378752e-05)) {
      *(double *)param_6[1] = param_2[2];
      dVar7 = param_2[1];
      *(double *)*param_6 = *param_2;
      *(double *)(*param_6 + 8) = dVar7;
      goto LAB_147c06f1c;
    }
  }
  else {
    dVar8 = param_3[1];
    dVar9 = param_3[2];
  }
  local_150 = (dVar7 * param_7[2] + dVar8 * param_7[6] + dVar9 * param_7[10] + param_7[0xe] * 0.0) *
              360.0;
  local_158 = (param_7[0xd] * 0.0 + dVar9 * param_7[9] + dVar8 * param_7[5] + dVar7 * param_7[1]) *
              360.0;
  local_160 = (param_7[0xc] * 0.0 + dVar9 * param_7[8] + dVar8 * param_7[4] + dVar7 * *param_7) *
              360.0;
  FUN_1467fb380(&local_178);
  dVar7 = sin(local_178 * 0.01745329238474369);
  dVar8 = sin(dStack_170 * 0.01745329238474369);
  dVar9 = sin(local_168 * 0.01745329238474369);
  sin(0.0);
  dVar2 = cos(local_178 * 0.01745329238474369);
  dVar3 = cos(dStack_170 * 0.01745329238474369);
  dVar4 = cos(local_168 * 0.01745329238474369);
  cos(0.0);
  local_148 = dVar2 * dVar3;
  local_140 = dVar8 * dVar2;
  local_128 = dVar7 * dVar9 * dVar3 - dVar8 * dVar4;
  local_120 = dVar7 * dVar9 * dVar8 + dVar3 * dVar4;
  local_118 = -dVar9 * dVar2;
  local_108 = -(dVar7 * dVar4 * dVar3 + dVar8 * dVar9);
  local_100 = dVar3 * dVar9 - dVar8 * dVar7 * dVar4;
  local_f8 = dVar2 * dVar4;
  local_130 = 0;
  local_110 = 0;
  local_f0 = 0;
  local_e8 = DAT_14c8464e0;
  uStack_e0 = DAT_14c8464e8;
  local_d8 = DAT_14c8464f0;
  local_d0 = 0x3ff0000000000000;
  local_138 = dVar7;
  FUN_1447fea8d(param_7,param_7);
  dVar7 = param_2[2];
  dVar8 = *param_2;
  dVar9 = param_2[1];
  dVar6 = dVar7 * param_7[9] + dVar9 * param_7[5] + dVar8 * param_7[1] + param_7[0xd];
  dVar2 = param_7[10];
  dVar3 = param_7[6];
  dVar4 = param_7[2];
  dVar1 = param_7[0xe];
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = dVar7 * param_7[8] + dVar9 * param_7[4] + dVar8 * *param_7 + param_7[0xc];
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *param_6 = auVar5;
  *(double *)param_6[1] = dVar8 * dVar4 + dVar9 * dVar3 + dVar7 * dVar2 + dVar1;
LAB_147c06f1c:
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_3[2] = 0.0;
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_4[2] = 0.0;
  *param_4 = 0.0;
  param_4[1] = 0.0;
  if ((local_c0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c06ffa FUN_147c06ffa body=2071 status=ok
// SIG undefined FUN_147c06ffa(void)

void FUN_147c06ffa(longlong param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  undefined8 *local_2c0;
  undefined8 *local_2b8;
  longlong local_2a8;
  undefined8 local_2a0;
  ulonglong local_298;
  size_t local_290;
  longlong local_288;
  ulonglong local_280;
  longlong local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  double local_258;
  double dStack_250;
  double local_248;
  double local_238;
  double dStack_230;
  double local_228;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 local_170 [32];
  undefined1 *local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140 [192];
  undefined1 *local_80;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  lVar12 = *(longlong *)(param_1 + 0x18);
  uVar2 = *(uint *)(lVar12 + 0x98);
  uVar13 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    lVar3 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
    local_80 = (undefined1 *)0x0;
    local_74 = 8;
    lVar10 = uVar13 + 1;
    uVar5 = (undefined4)lVar10;
    local_2a8 = lVar12;
    local_78 = uVar5;
    if (7 < uVar2) {
      FUN_146c5b08e(local_140);
    }
    local_290 = lVar10 * 0x18;
    puVar7 = local_80;
    if (local_80 == (undefined1 *)0x0) {
      puVar7 = local_140;
    }
    memset(puVar7,0,local_290);
    local_150 = (undefined1 *)0x0;
    local_144 = 8;
    local_148 = uVar5;
    if (7 < uVar2) {
      FUN_1400cc390(local_170);
    }
    puVar7 = local_150;
    if (local_150 == (undefined1 *)0x0) {
      puVar7 = local_170;
    }
    uVar11 = 0;
    memset(puVar7,0,lVar10 * 4);
    do {
      uVar5 = FUN_147bf6ddc(param_1,*(undefined8 *)(*(longlong *)(lVar3 + 0x90) + uVar11 * 8));
      puVar7 = local_150;
      if (local_150 == (undefined1 *)0x0) {
        puVar7 = local_170;
      }
      *(undefined4 *)(puVar7 + uVar11 * 4) = uVar5;
      uVar11 = uVar11 + 1;
    } while (uVar13 != uVar11);
    if (0 < (longlong)*(int *)(param_1 + 0x18c)) {
      lVar10 = local_2a8;
      lVar12 = (longlong)*(int *)(param_1 + 0x18c);
      local_288 = param_1;
      local_280 = uVar13;
      do {
        lVar3 = *(longlong *)(param_1 + 0x168);
        lVar6 = (longlong)*(int *)(param_1 + 0x188) *
                (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + -2 + lVar12 * 2);
        if ((*(byte *)(lVar3 + 0x6f + lVar6) & 4) == 0) {
          local_218 = 0.0;
          dStack_210 = 0.0;
          uVar11 = 0;
          local_208 = 0.0;
          local_228 = 0.0;
          local_238 = 0.0;
          dStack_230 = 0.0;
          local_248 = 0.0;
          local_258 = 0.0;
          dStack_250 = 0.0;
          local_1f8 = 0x3ff0000000000000;
          local_1e0 = 0;
          uStack_1d8 = 0;
          local_1f0 = 0;
          uStack_1e8 = 0;
          local_1d0 = 0x3ff0000000000000;
          local_1b8 = 0;
          uStack_1b0 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_1a8 = 0x3ff0000000000000;
          local_190 = 0;
          uStack_188 = 0;
          local_1a0 = 0;
          uStack_198 = 0;
          local_180 = 0x3ff0000000000000;
          uVar9 = 0;
          lVar15 = 0;
          lVar17 = 0;
          uVar14 = 0;
          local_278 = lVar12;
          do {
            puVar7 = local_150;
            if (local_150 == (undefined1 *)0x0) {
              puVar7 = local_170;
            }
            if ((longlong)*(int *)(puVar7 + uVar11 * 4) != 0) {
              lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x90) + uVar11 * 8);
              lVar16 = (longlong)*(int *)(puVar7 + uVar11 * 4) + lVar3 + lVar6;
              if (uVar2 - 1 == uVar11) {
                lVar17 = lVar16;
              }
              cVar1 = *(char *)(lVar12 + 0x38);
              if (cVar1 == '\x02') {
                if ((uVar11 != 0) && ((char)uVar9 == '\x02')) {
                  local_2b8 = &local_1f8;
                  local_2c0 = &local_270;
                  local_2c8 = param_2;
                  local_2a0 = uVar9;
                  local_298 = uVar14;
                  FUN_147c06b5c(lVar15,&local_218,&local_238,&local_258);
                  if (-1 < *(char *)(lVar12 + 0x28)) {
                    local_208 = DAT_14c8464f0;
                    local_218 = DAT_14c8464e0;
                    dStack_210 = DAT_14c8464e8;
                    local_238 = DAT_14c8464e0;
                    dStack_230 = DAT_14c8464e8;
                    local_228 = DAT_14c8464f0;
                    local_258 = DAT_14c8464e0;
                    dStack_250 = DAT_14c8464e8;
                    local_248 = DAT_14c8464f0;
                  }
                  iVar8 = (int)local_298;
                  puVar7 = local_80;
                  if (local_80 == (undefined1 *)0x0) {
                    puVar7 = local_140;
                  }
                  *(undefined8 *)(puVar7 + (longlong)iVar8 * 0x18 + 0x10) = local_260;
                  *(undefined8 *)(puVar7 + (longlong)iVar8 * 0x18) = local_270;
                  *(undefined8 *)((longlong)(puVar7 + (longlong)iVar8 * 0x18) + 8) = uStack_268;
                  uVar14 = (ulonglong)(iVar8 + 1);
                  uVar9 = local_2a0;
                  lVar10 = local_2a8;
                }
                if (*(char *)(lVar12 + 0x28) < '\0') {
                  local_208 = (double)*(float *)(lVar16 + 0x14);
                  dStack_210 = (double)*(float *)(lVar16 + 0x10);
                  local_218 = (double)*(float *)(lVar16 + 0xc);
                  local_228 = (double)*(float *)(lVar16 + 0x20);
                  dStack_230 = (double)*(float *)(lVar16 + 0x1c);
                  local_238 = (double)*(float *)(lVar16 + 0x18);
                  local_248 = (double)*(float *)(lVar16 + 0x38);
                  dStack_250 = (double)*(float *)(lVar16 + 0x34);
                  local_258 = (double)*(float *)(lVar16 + 0x30);
                }
              }
              else if (cVar1 == '\x01') {
                if (*(char *)(lVar12 + 0x28) < '\0') {
                  local_218 = (double)*(float *)(lVar16 + 0xc) * local_218;
                  dStack_210 = (double)*(float *)(lVar16 + 0x10) * dStack_210;
                  local_208 = (double)*(float *)(lVar16 + 0x14) * local_208;
                  local_238 = (double)*(float *)(lVar16 + 0x18) * local_238;
                  dStack_230 = (double)*(float *)(lVar16 + 0x1c) * dStack_230;
                  local_228 = (double)*(float *)(lVar16 + 0x20) * local_228;
                  local_258 = (double)*(float *)(lVar16 + 0x30) * local_258;
                  dStack_250 = (double)*(float *)(lVar16 + 0x34) * dStack_250;
                  local_248 = (double)*(float *)(lVar16 + 0x38) * local_248;
                }
              }
              else if ((cVar1 == '\0') && (*(char *)(lVar12 + 0x28) < '\0')) {
                local_218 = (double)*(float *)(lVar16 + 0xc) + local_218;
                dStack_210 = (double)*(float *)(lVar16 + 0x10) + dStack_210;
                local_208 = (double)*(float *)(lVar16 + 0x14) + local_208;
                local_238 = (double)*(float *)(lVar16 + 0x18) + local_238;
                dStack_230 = (double)*(float *)(lVar16 + 0x1c) + dStack_230;
                local_228 = (double)*(float *)(lVar16 + 0x20) + local_228;
                local_258 = (double)*(float *)(lVar16 + 0x30) + local_258;
                dStack_250 = (double)*(float *)(lVar16 + 0x34) + dStack_250;
                local_248 = (double)*(float *)(lVar16 + 0x38) + local_248;
              }
              if (uVar2 - 1 == uVar11) {
                local_2b8 = &local_1f8;
                local_2c0 = &local_270;
                local_2c8 = param_2;
                local_2a0 = uVar9;
                FUN_147c06b5c(lVar16,&local_218,&local_238,&local_258);
                iVar8 = (int)uVar14;
                puVar7 = local_80;
                if (local_80 == (undefined1 *)0x0) {
                  puVar7 = local_140;
                }
                *(undefined8 *)(puVar7 + (longlong)iVar8 * 0x18 + 0x10) = local_260;
                *(undefined8 *)(puVar7 + (longlong)iVar8 * 0x18) = local_270;
                *(undefined8 *)((longlong)(puVar7 + (longlong)iVar8 * 0x18) + 8) = uStack_268;
                uVar14 = (ulonglong)(iVar8 + 1);
                uVar9 = local_2a0;
                lVar10 = local_2a8;
                uVar13 = local_280;
              }
              if (*(char *)(lVar12 + 0x28) < '\0') {
                uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),*(undefined1 *)(lVar12 + 0x38));
                lVar15 = lVar16;
              }
            }
            lVar12 = local_278;
            uVar11 = uVar11 + 1;
          } while (uVar13 != uVar11);
          param_1 = local_288;
          if (lVar17 != 0) {
            *(undefined4 *)(lVar17 + 0x14) = DAT_14c846338;
            *(undefined8 *)(lVar17 + 0xc) = DAT_14c846330;
            if (0 < (int)uVar14) {
              fVar18 = *(float *)(lVar17 + 0xc);
              fVar19 = *(float *)(lVar17 + 0x10);
              fVar20 = *(float *)(lVar17 + 0x14);
              lVar10 = 0;
              do {
                puVar7 = local_80;
                if (local_80 == (undefined1 *)0x0) {
                  puVar7 = local_140;
                }
                fVar20 = fVar20 + (float)*(double *)(puVar7 + lVar10 + 0x10);
                fVar19 = fVar19 + (float)*(double *)(puVar7 + lVar10 + 8);
                fVar18 = fVar18 + (float)*(double *)(puVar7 + lVar10);
                *(float *)(lVar17 + 0xc) = fVar18;
                *(float *)(lVar17 + 0x10) = fVar19;
                *(float *)(lVar17 + 0x14) = fVar20;
                lVar10 = lVar10 + 0x18;
              } while (uVar14 * 0x18 != lVar10);
            }
            puVar7 = local_80;
            if (local_80 == (undefined1 *)0x0) {
              puVar7 = local_140;
            }
            memset(puVar7,0,local_290);
            lVar10 = local_2a8;
            param_1 = local_288;
          }
        }
        bVar4 = 1 < lVar12;
        lVar12 = lVar12 + -1;
      } while (bVar4);
    }
    if (local_150 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_80 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c0784e FUN_147c0784e body=606 status=ok
// SIG undefined FUN_147c0784e(void)

void FUN_147c0784e(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 auStack_78 [40];
  uint local_50 [4];
  uint *local_40;
  int local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (uint *)0x0;
  local_34 = 0x80;
  local_38 = *(int *)(param_1 + 0x194);
  uVar8 = *(int *)(param_1 + 0x194) + 0x1f;
  if (uVar8 < 0x20) goto LAB_147c07891;
  if (uVar8 < 0xa0) {
    puVar7 = local_50;
LAB_147c07a5c:
    uVar8 = uVar8 >> 3 & 0xfffffffc;
  }
  else {
    FUN_14499171c(local_50,0,uVar8 >> 5);
    local_34 = uVar8 & 0xffffffe0;
    puVar7 = local_40;
    if (local_40 == (uint *)0x0) {
      puVar7 = local_50;
    }
    if (uVar8 < 0x120) goto LAB_147c07a5c;
    uVar8 = (uVar8 >> 5) << 2;
  }
  memset(puVar7,0,(ulonglong)uVar8);
  iVar6 = local_38 + 0x1f;
  if (-1 < local_38) {
    iVar6 = local_38;
  }
  if (local_38 % 0x20 != 0) {
    puVar7 = local_40;
    if (local_40 == (uint *)0x0) {
      puVar7 = local_50;
    }
    bVar4 = -(char)(local_38 % 0x20);
    puVar7[iVar6 >> 5] = (puVar7[iVar6 >> 5] << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
  }
LAB_147c07891:
  iVar6 = *(int *)(param_1 + 0x18c);
  if (0 < iVar6) {
    iVar2 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x170);
      uVar1 = *(ushort *)(lVar3 + (longlong)iVar2 * 2);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x194)) {
        puVar7 = local_40;
        if (local_40 == (uint *)0x0) {
          puVar7 = local_50;
        }
        if ((puVar7[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) != 0) goto LAB_147c078e1;
        puVar7[uVar1 >> 5] = puVar7[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
        iVar6 = *(int *)(param_1 + 0x18c);
      }
      else {
LAB_147c078e1:
        iVar9 = iVar6 + -1;
        iVar6 = iVar2;
        if (iVar2 != iVar9) {
          *(undefined2 *)(lVar3 + (longlong)iVar2 * 2) =
               *(undefined2 *)(lVar3 + (longlong)iVar9 * 2);
          iVar6 = *(int *)(param_1 + 0x18c) + -1;
        }
        *(int *)(param_1 + 0x18c) = iVar6;
        iVar2 = iVar2 + -1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar6);
  }
  if (iVar6 < *(int *)(param_1 + 0x194)) {
    lVar3 = (longlong)iVar6;
    do {
      puVar7 = local_40;
      if (local_40 == (uint *)0x0) {
        puVar7 = local_50;
      }
      if (0x1f < local_38 + 0x1fU) {
        lVar10 = 0;
        puVar11 = puVar7;
LAB_147c0797a:
        if (*puVar11 == 0xffffffff) goto code_r0x000147c07982;
        uVar8 = ~*puVar11;
        iVar6 = 0;
        if (uVar8 != 0) {
          for (; (uVar8 >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
          }
        }
        iVar2 = iVar6 - (int)lVar10;
        if (iVar6 + 1 == (int)lVar10 || local_38 <= iVar2) goto LAB_147c07952;
        iVar9 = iVar2 + 0x1f;
        if (-1 < iVar2) {
          iVar9 = iVar2;
        }
        puVar7[iVar9 >> 5] = puVar7[iVar9 >> 5] | 1 << ((byte)iVar6 & 0x1f);
        sVar5 = (short)iVar6 - (short)lVar10;
        goto LAB_147c07954;
      }
LAB_147c07952:
      sVar5 = (short)lVar3;
LAB_147c07954:
      *(short *)(*(longlong *)(param_1 + 0x170) + lVar3 * 2) = sVar5;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x194));
  }
  if (local_40 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000147c07982:
  lVar10 = lVar10 + -0x20;
  puVar11 = puVar11 + 1;
  if ((ulonglong)(local_38 + 0x1fU & 0xffffffe0) + lVar10 == 0) goto LAB_147c07952;
  goto LAB_147c0797a;
}



// FUNCTION 147c07aae FUN_147c07aae body=316 status=ok
// SIG undefined FUN_147c07aae(void)

void FUN_147c07aae(longlong *param_1,float param_2,int param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (0 < param_3 || 0 < param_4) {
    if (param_3 < 1) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = param_2 / (float)param_3;
    }
    iVar2 = param_4 + param_3 + *(int *)((longlong)param_1 + 0x18c);
    if (*(int *)((longlong)param_1 + 0x194) <= iVar2) {
      fVar3 = (float)iVar2;
      if (fVar3 < 0.0) {
        fVar3 = sqrtf(fVar3);
      }
      else {
        fVar3 = SQRT(fVar3);
      }
      if (fVar3 < 0.0) {
        fVar3 = sqrtf(fVar3);
      }
      else {
        fVar3 = SQRT(fVar3);
      }
      cVar1 = (**(code **)(*param_1 + 0x18))(param_1,(int)(fVar3 + 1.0) + iVar2,param_2 < 0.05);
      if (cVar1 == '\0') {
        return;
      }
    }
    FUN_147bf79e6(param_1,param_3,param_2,fVar4,param_5,param_6,0);
    FUN_147bf79e6(param_1,param_4,param_2,0,param_5,param_6,0);
  }
  return;
}



// FUNCTION 147c07bea FUN_147c07bea body=188 status=ok
// SIG undefined FUN_147c07bea(void)

void FUN_147c07bea(longlong param_1,void *param_2,undefined8 *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  
  memset(param_2,0,(longlong)*(int *)(param_1 + 0x184));
  *(undefined8 *)((longlong)param_2 + 0x28) = param_3[2];
  uVar3 = param_3[1];
  *(undefined8 *)((longlong)param_2 + 0x18) = *param_3;
  *(undefined8 *)((longlong)param_2 + 0x20) = uVar3;
  dVar1 = param_4[2];
  dVar2 = param_4[1];
  *(float *)((longlong)param_2 + 0x30) = (float)*param_4;
  *(float *)((longlong)param_2 + 0x34) = (float)dVar2;
  *(float *)((longlong)param_2 + 0x38) = (float)dVar1;
  dVar1 = param_4[2];
  dVar2 = param_4[1];
  *(float *)((longlong)param_2 + 0x40) = (float)*param_4;
  *(float *)((longlong)param_2 + 0x44) = (float)dVar2;
  *(float *)((longlong)param_2 + 0x48) = (float)dVar1;
  *(double *)((longlong)param_2 + 0x18) =
       *(double *)((longlong)param_2 + 0x18) - *(double *)(param_1 + 0x240);
  *(double *)((longlong)param_2 + 0x20) =
       *(double *)((longlong)param_2 + 0x20) - *(double *)(param_1 + 0x248);
  *(double *)((longlong)param_2 + 0x28) =
       *(double *)((longlong)param_2 + 0x28) - *(double *)(param_1 + 0x250);
  return;
}



// FUNCTION 147c07d40 FUN_147c07d40 body=80 status=ok
// SIG undefined FUN_147c07d40(void)

undefined8 FUN_147c07d40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x18c)) {
    if (*(longlong *)(param_1 + 8) == 0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
      if (param_2 == 0) {
        return 0;
      }
      if (*(char *)(*(longlong *)(param_1 + 8) + 0x34) == '\x04') {
        return 0;
      }
    }
    if (((*(byte *)(param_2 + 0x2c) & 1) != 0) &&
       ((lVar1 = *(longlong *)(param_2 + 0x30), (*(byte *)(lVar1 + 0xc4) & 2) == 0 ||
        (*(int *)(lVar1 + 0x120) != 0)))) {
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)(param_1 + 0x10) != 0);
    }
  }
  return 0;
}



// FUNCTION 147c07d90 FUN_147c07d90 body=551 status=ok
// SIG undefined FUN_147c07d90(void)

void FUN_147c07d90(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (0 < *(int *)(lVar1 + 0xa8)) {
    lVar6 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0xa0) + lVar6 * 8);
      cVar3 = (**(code **)(*plVar2 + 0x388))(plVar2,1);
      if ((cVar3 != '\0') && (lVar4 = *(longlong *)(param_1 + 0x10), 0 < *(int *)(lVar4 + 0x788))) {
        lVar7 = 0;
        lVar5 = 0;
        do {
          (**(code **)(*plVar2 + 0x390))
                    (plVar2,param_1,*(longlong *)(lVar4 + 0x780) + lVar7,param_2);
          lVar5 = lVar5 + 1;
          lVar4 = *(longlong *)(param_1 + 0x10);
          lVar7 = lVar7 + 0x50;
        } while (lVar5 < *(int *)(lVar4 + 0x788));
      }
      cVar3 = (**(code **)(*plVar2 + 0x388))(plVar2,2);
      if ((cVar3 != '\0') && (lVar4 = *(longlong *)(param_1 + 0x10), 0 < *(int *)(lVar4 + 0x798))) {
        lVar7 = 0;
        lVar5 = 0;
        do {
          (**(code **)(*plVar2 + 0x390))
                    (plVar2,param_1,*(longlong *)(lVar4 + 0x790) + lVar7,param_2);
          lVar5 = lVar5 + 1;
          lVar4 = *(longlong *)(param_1 + 0x10);
          lVar7 = lVar7 + 0x70;
        } while (lVar5 < *(int *)(lVar4 + 0x798));
      }
      cVar3 = (**(code **)(*plVar2 + 0x388))(plVar2,3);
      if ((cVar3 != '\0') && (lVar4 = *(longlong *)(param_1 + 0x10), 0 < *(int *)(lVar4 + 0x7a8))) {
        lVar7 = 0;
        lVar5 = 0;
        do {
          (**(code **)(*plVar2 + 0x390))
                    (plVar2,param_1,*(longlong *)(lVar4 + 0x7a0) + lVar7,param_2);
          lVar5 = lVar5 + 1;
          lVar4 = *(longlong *)(param_1 + 0x10);
          lVar7 = lVar7 + 0xa0;
        } while (lVar5 < *(int *)(lVar4 + 0x7a8));
      }
      cVar3 = (**(code **)(*plVar2 + 0x388))(plVar2,4);
      if ((cVar3 != '\0') && (lVar4 = *(longlong *)(param_1 + 0x10), 0 < *(int *)(lVar4 + 0x7b8))) {
        lVar7 = 0;
        lVar5 = 0;
        do {
          (**(code **)(*plVar2 + 0x390))
                    (plVar2,param_1,*(longlong *)(lVar4 + 0x7b0) + lVar7,param_2);
          lVar5 = lVar5 + 1;
          lVar4 = *(longlong *)(param_1 + 0x10);
          lVar7 = lVar7 + 0x58;
        } while (lVar5 < *(int *)(lVar4 + 0x7b8));
      }
      cVar3 = (**(code **)(*plVar2 + 0x388))(plVar2,5);
      if ((cVar3 != '\0') && (lVar4 = *(longlong *)(param_1 + 0x10), 0 < *(int *)(lVar4 + 0x7c8))) {
        lVar7 = 0;
        lVar5 = 0;
        do {
          (**(code **)(*plVar2 + 0x390))
                    (plVar2,param_1,*(longlong *)(lVar4 + 0x7c0) + lVar7,param_2);
          lVar5 = lVar5 + 1;
          lVar4 = *(longlong *)(param_1 + 0x10);
          lVar7 = lVar7 + 0x50;
        } while (lVar5 < *(int *)(lVar4 + 0x7c8));
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar1 + 0xa8));
  }
  return;
}



// FUNCTION 147c07fb8 FUN_147c07fb8 body=177 status=ok
// SIG undefined FUN_147c07fb8(void)

int * FUN_147c07fb8(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  bool bVar4;
  
  piVar3 = (int *)FUN_14001cc68(0x30,0x10);
  piVar3[0] = 0;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  piVar3[9] = 0;
  piVar3[10] = 0;
  piVar3[0xb] = 0;
  lVar1 = *(longlong *)(param_1 + 0x118);
  cVar2 = FUN_147c11fa2(param_1);
  *(char *)(piVar3 + 10) = cVar2 * '\x02' | lVar1 != 0;
  *piVar3 = *(int *)(param_1 + 200) * *(int *)(param_1 + 0xcc);
  FUN_1401f7650(piVar3 + 4,param_1 + 0x150);
  bVar4 = *(char *)(param_1 + 0xf5) != '\0';
  piVar3[1] = (uint)bVar4 * 4 + 4;
  piVar3[2] = (uint)bVar4 * 4 + 2;
  piVar3[3] = *(int *)(param_1 + 0x110);
  *(undefined8 *)(piVar3 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x20);
  return piVar3;
}



// FUNCTION 147c0806a FUN_147c0806a body=134 status=ok
// SIG undefined FUN_147c0806a(void)

void FUN_147c0806a(longlong param_1,ulonglong *param_2,longlong param_3,undefined4 param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  ulonglong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x238);
  if ((*(longlong *)(param_1 + 0x238) == 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x30) + 0x30), lVar2 == 0)) {
    FUN_14003fbd6();
    lVar2 = DAT_14caea080;
  }
  FUN_14470a074(lVar2,local_30,param_4);
  *param_2 = *param_2 | local_30[0];
  bVar1 = (byte)(local_30[0] >> 0x10);
  if (bVar1 <= *(byte *)((longlong)param_2 + 2)) {
    bVar1 = *(byte *)((longlong)param_2 + 2);
  }
  *(byte *)((longlong)param_2 + 2) = bVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c081b2 FUN_147c081b2 body=14 status=ok
// SIG undefined FUN_147c081b2(void)

ulonglong FUN_147c081b2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x71)) & 0xffffffffffffff01;
}



// FUNCTION 147c081c0 FUN_147c081c0 body=70 status=ok
// SIG undefined FUN_147c081c0(void)

void FUN_147c081c0(longlong param_1,uint *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_2 = (uint)*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30) + 0x70);
  *param_3 = 0x3ff0000000000000;
  param_3[1] = 0x3ff0000000000000;
  param_3[2] = 0x3ff0000000000000;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x288);
    uVar1 = *(undefined8 *)(lVar2 + 0x290);
    *param_3 = *(undefined8 *)(lVar2 + 0x280);
    param_3[1] = uVar3;
    param_3[2] = uVar1;
  }
  return;
}



// FUNCTION 147c08206 FUN_147c08206 body=114 status=ok
// SIG undefined FUN_147c08206(void)

undefined8 * FUN_147c08206(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if ((0 < *(int *)((longlong)param_1 + 0x18c)) && ((*(byte *)(param_1 + 0x2c) & 1) != 0)) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xd8,0x10);
    FUN_147c09012(puVar2);
    *puVar2 = &PTR_FUN_14aa00060;
    cVar1 = (**(code **)(*param_1 + 0x218))(param_1,puVar2);
    if (cVar1 != '\0') {
      return puVar2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 147c082e4 FUN_147c082e4 body=225 status=ok
// SIG undefined FUN_147c082e4(void)

void FUN_147c082e4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = FUN_14278f0ba(param_2);
  if ((iVar1 == 1) ||
     ((*(longlong *)(param_1 + 0x10) != 0 &&
      (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x5a8) != 0)))) {
    if (*(longlong *)(param_1 + 0x168) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (longlong)*(int *)(param_1 + 0x188) * (longlong)*(int *)(param_1 + 0x194);
    }
    if (*(longlong *)(param_1 + 0x170) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = (longlong)(*(int *)(param_1 + 0x194) * 2);
    }
    FUN_140347a44(param_2,0x1b0);
    FUN_140347a44(param_2,lVar2);
    FUN_140347a44(param_2,lVar3);
    FUN_140347a44(param_2,(longlong)*(int *)(param_1 + 0x194) << 6);
    if (0 < *(int *)(param_1 + 0x30)) {
      FUN_140347a44(param_2,(longlong)*(int *)(param_1 + 0x194) << 4);
      return;
    }
  }
  return;
}



// FUNCTION 147c083c6 FUN_147c083c6 body=71 status=ok
// SIG undefined FUN_147c083c6(void)

longlong * FUN_147c083c6(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x238);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x340))(plVar2,1);
    if (cVar1 != '\0') goto LAB_147c083fc;
  }
  FUN_14003fbd6();
  plVar2 = DAT_14caea080;
LAB_147c083fc:
  *(longlong **)(param_1 + 0x238) = plVar2;
  return plVar2;
}



// FUNCTION 147c0840e FUN_147c0840e body=65 status=ok
// SIG undefined FUN_147c0840e(void)

undefined8 * FUN_147c0840e(undefined8 *param_1)

{
  FUN_147bf5ae4();
  *param_1 = &PTR_FUN_14a9ffca0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  return param_1;
}



// FUNCTION 147c08450 FUN_147c08450 body=124 status=ok
// SIG undefined FUN_147c08450(void)

void FUN_147c08450(longlong param_1,int param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x194);
  lVar3 = (longlong)iVar1;
  cVar2 = FUN_1435c65ce();
  if ((cVar2 != '\0') && ((iVar1 < param_2 & *(byte *)(param_1 + 0x280)) == 1)) {
    do {
      lVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar3 * 2) *
              (longlong)*(int *)(param_1 + 0x188) + *(longlong *)(param_1 + 0x168);
      iVar1 = *(int *)(param_1 + 0x284);
      *(undefined4 *)((longlong)iVar1 + 0x44 + lVar4) = DAT_14c846338;
      *(undefined8 *)((longlong)iVar1 + 0x3c + lVar4) = DAT_14c846330;
      lVar3 = lVar3 + 1;
    } while (param_2 != lVar3);
  }
  return;
}



// FUNCTION 147c084cc FUN_147c084cc body=310 status=ok
// SIG undefined FUN_147c084cc(void)

void FUN_147c084cc(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((((-1 < (int)param_2 && lVar2 != 0) && ((int)param_2 < *(int *)(lVar2 + 0x678))) &&
      (*(longlong *)(*(longlong *)(lVar2 + 0x670) + (ulonglong)param_2 * 8) != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x298), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x290);
    lVar7 = 0;
    do {
      *(undefined8 *)(lVar2 + lVar7) =
           *(undefined8 *)
            (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x670) + (ulonglong)param_2 * 8);
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  if (((*(longlong *)(param_1 + 0x18) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30), lVar2 != 0)) &&
     ((lVar7 = *(longlong *)(param_1 + 0x10), lVar7 != 0 &&
      ((lVar3 = *(longlong *)(lVar7 + 0x668), lVar3 != 0 && (0 < *(int *)(lVar2 + 0x148))))))) {
    plVar6 = (longlong *)(param_1 + 0x290);
    FUN_147c08602(plVar6);
    if (0 < *(int *)(lVar2 + 0x148)) {
      lVar4 = 0;
      do {
        if (0 < (longlong)*(int *)(lVar3 + 0x168)) {
          puVar8 = (undefined8 *)(*(longlong *)(lVar3 + 0x160) + 8);
          lVar5 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0x140) + lVar4 * 8) == puVar8[-1]) {
              *(undefined8 *)(*plVar6 + lVar4 * 8) = *puVar8;
              if (((int)lVar5 < *(int *)(lVar7 + 0x678)) &&
                 (lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x670) + lVar5 * 8), lVar5 != 0)) {
                *(longlong *)(*plVar6 + lVar4 * 8) = lVar5;
              }
              break;
            }
            lVar5 = lVar5 + 1;
            puVar8 = puVar8 + 2;
          } while (*(int *)(lVar3 + 0x168) != lVar5);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar2 + 0x148));
    }
  }
  return;
}



// FUNCTION 147c08602 FUN_147c08602 body=105 status=ok
// SIG undefined FUN_147c08602(void)

void FUN_147c08602(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144769b64(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  *(int *)(param_1 + 1) = param_2;
  FUN_147c0e998(param_1);
  return;
}



// FUNCTION 147c0866c FUN_147c0866c body=718 status=ok
// SIG undefined FUN_147c0866c(void)

void FUN_147c0866c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  double dVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong local_c0;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_147bf7c46();
  lVar5 = (longlong)*(int *)(param_1 + 0x284);
  bVar2 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30) + 0x70);
  if (bVar2 - 3 < 2) {
    local_48 = (double)*(float *)(param_2 + 0x48);
    dStack_50 = (double)*(float *)(param_2 + 0x44);
    local_58 = (double)*(float *)(param_2 + 0x40);
    if (bVar2 == 4) {
      local_58 = *(double *)(param_2 + 0x18);
      dStack_50 = *(double *)(param_2 + 0x20);
      local_48 = *(double *)(param_2 + 0x28);
    }
    dVar7 = local_48 * local_48 + local_58 * local_58 + dStack_50 * dStack_50;
    if (9.99999993922529e-09 < dVar7) {
      dVar7 = 1.0 / SQRT(dVar7);
      local_58 = local_58 * dVar7;
      dStack_50 = dStack_50 * dVar7;
      local_48 = local_48 * dVar7;
    }
    local_70 = 0x3ff0000000000000;
    local_68 = 0;
    uStack_60 = 0;
    FUN_144a9d448(&local_98,&local_70,&local_58);
    FUN_1449413b4(&local_98,&local_b0);
    *(float *)(param_2 + 0x18 + lVar5) =
         (float)((double)*(float *)(param_2 + 0x18 + lVar5) + local_b0);
    *(float *)(param_2 + 0x1c + lVar5) =
         (float)((double)*(float *)(param_2 + 0x1c + lVar5) + local_a8);
    *(float *)(param_2 + 0x20 + lVar5) =
         (float)((double)*(float *)(param_2 + 0x20 + lVar5) + local_a0);
  }
  local_c0 = *(longlong *)(param_1 + 0x278) + 0x38;
  local_c8 = 0;
  FUN_147a776dc(*(longlong *)(param_1 + 0x278) + 0x48,&local_98,param_4,0);
  *(float *)(param_2 + lVar5) = (float)local_98;
  *(float *)(param_2 + 4 + lVar5) = (float)local_90;
  *(float *)(param_2 + 8 + lVar5) = (float)local_88;
  lVar5 = (longlong)*(int *)(param_1 + 0x288);
  if (lVar5 != 0) {
    iVar3 = *(int *)(param_1 + 0x284);
    lVar1 = param_2 + lVar5;
    *(undefined4 *)(param_2 + 0x30 + lVar5) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_2 + 8 + lVar5) = *(undefined4 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + lVar5) = *(undefined8 *)(param_2 + 0x40);
    *(undefined4 *)(param_2 + 0x14 + lVar5) = *(undefined4 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0xc + lVar5) = *(undefined8 *)(param_2 + 0x60);
    *(undefined4 *)(param_2 + 0x20 + lVar5) = *(undefined4 *)(param_2 + 0x20 + (longlong)iVar3);
    *(undefined8 *)(param_2 + 0x18 + lVar5) = *(undefined8 *)(param_2 + 0x18 + (longlong)iVar3);
    if ((longlong)*(int *)(param_1 + 0x40) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 4 + (longlong)*(int *)(param_1 + 0x40));
    }
    *(undefined4 *)(lVar1 + 0x34) = uVar6;
    lVar5 = (longlong)*(int *)(param_1 + 0x3c);
    if (lVar5 == 0) {
      *(undefined4 *)(lVar1 + 0x2c) = DAT_14c846338;
      uVar4 = DAT_14c846330;
    }
    else {
      *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(param_2 + 0x14 + lVar5);
      uVar4 = *(undefined8 *)(param_2 + 0xc + lVar5);
    }
    *(undefined8 *)(lVar1 + 0x24) = uVar4;
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0896c FUN_147c0896c body=179 status=ok
// SIG undefined FUN_147c0896c(void)

undefined8 * FUN_147c0896c(longlong *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  
  if ((0 < *(int *)((longlong)param_1 + 0x18c)) && ((*(byte *)(param_1 + 0x2c) & 1) != 0)) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x108,0x10);
    FUN_147c09012(puVar2);
    *puVar2 = &PTR_FUN_14aa006c0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    *(undefined1 *)(puVar2 + 0x1d) = 0;
    *(undefined8 *)((longlong)puVar2 + 0xec) = 0;
    *(undefined2 *)((longlong)puVar2 + 0xf4) = 0;
    puVar2[0x1f] = 0x3f800000;
    *(undefined4 *)(puVar2 + 0x20) = 0;
    cVar1 = (**(code **)(*param_1 + 0x218))(param_1,puVar2);
    if (cVar1 != '\0') {
      return puVar2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 147c08a8c FUN_147c08a8c body=152 status=ok
// SIG undefined FUN_147c08a8c(void)

void FUN_147c08a8c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = FUN_14278f0ba(param_2);
  if ((iVar1 != 1) &&
     ((*(longlong *)(param_1 + 0x10) == 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x5a8) == 0)))) {
    return;
  }
  if (*(longlong *)(param_1 + 0x168) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(param_1 + 0x188) * (longlong)*(int *)(param_1 + 0x194);
  }
  if (*(longlong *)(param_1 + 0x170) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)(*(int *)(param_1 + 0x194) * 2);
  }
  FUN_140347a44(param_2,0x180);
  FUN_140347a44(param_2,lVar2);
  FUN_140347a44(param_2,lVar3);
  return;
}



// FUNCTION 147c08b30 FUN_147c08b30 body=198 status=ok
// SIG undefined FUN_147c08b30(void)

void FUN_147c08b30(undefined8 param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  ulonglong local_60 [2];
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = (undefined1 *)0x0;
  local_38 = 0x200000000;
  local_68 = 0;
  FUN_147c08bf8(param_1,local_50);
  if (0 < (int)local_38) {
    lVar3 = 0;
    do {
      puVar1 = local_40;
      if (local_40 == (undefined1 *)0x0) {
        puVar1 = local_50;
      }
      FUN_14470a074(*(undefined8 *)(puVar1 + lVar3 * 8),local_60,param_4);
      *param_2 = *param_2 | local_60[0];
      bVar2 = (byte)(local_60[0] >> 0x10);
      if (bVar2 <= *(byte *)((longlong)param_2 + 2)) {
        bVar2 = *(byte *)((longlong)param_2 + 2);
      }
      *(byte *)((longlong)param_2 + 2) = bVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)local_38);
  }
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c08bf8 FUN_147c08bf8 body=464 status=ok
// SIG undefined FUN_147c08bf8(void)

void FUN_147c08bf8(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (((*(longlong *)(param_1 + 0x278) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x30), lVar2 != 0)) &&
     (lVar2 = *(longlong *)**(undefined8 **)(lVar2 + 0xe0), 0 < *(int *)(lVar2 + 0x38))) {
    lVar6 = 0;
    do {
      if ((*(int *)(param_1 + 0x298) <= lVar6) ||
         (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x290) + lVar6 * 8), lVar7 == 0)) {
        if (0 < *(int *)(param_3 + 0x40)) {
          lVar7 = 0;
          do {
            lVar4 = *(longlong *)(param_3 + 0x38);
            if (*(longlong *)(lVar4 + lVar7 * 8) != 0) {
              lVar5 = FUN_145b504d8();
              lVar4 = *(longlong *)(lVar4 + lVar7 * 8);
              if (((lVar4 != 0) && (lVar5 != 0)) &&
                 ((lVar3 = *(longlong *)(lVar4 + 0x10), lVar3 != 0 &&
                  ((((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38) &&
                     (*(longlong *)
                       (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                      lVar5 + 0x30)) && (*(char *)(lVar4 + 0x28) < '\0')) &&
                   (lVar6 < *(int *)(lVar4 + 0x38))))))) {
                lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + lVar6 * 8);
                if (lVar7 != 0) goto LAB_147c08c69;
                break;
              }
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(param_3 + 0x40));
        }
        if (((*(byte *)(*(longlong *)(param_1 + 0x278) + 0x46) & 1) == 0) ||
           ((lVar7 = *(longlong *)(param_1 + 0x238), lVar7 == 0 &&
            (lVar7 = *(longlong *)(*(longlong *)(param_3 + 0x30) + 0x30), lVar7 == 0)))) {
          lVar7 = *(longlong *)(lVar2 + 0x30);
          if (*(longlong *)(lVar2 + 0x30) == 0) {
            lVar7 = lVar2 + 0x10;
          }
          iVar1 = *(int *)(lVar7 + lVar6 * 0x1c);
          if ((((longlong)iVar1 < 0) ||
              (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x30),
              *(int *)(lVar7 + 0x160) <= iVar1)) ||
             (lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x158) + (longlong)iVar1 * 0x30),
             lVar7 == 0)) {
            FUN_14003fbd6();
            lVar7 = DAT_14caea080;
          }
        }
      }
LAB_147c08c69:
      iVar1 = *(int *)(param_2 + 0x18);
      *(uint *)(param_2 + 0x18) = iVar1 + 1U;
      if (*(uint *)(param_2 + 0x1c) < iVar1 + 1U) {
        FUN_147c0ea3a(param_2,iVar1);
      }
      lVar4 = *(longlong *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        lVar4 = param_2;
      }
      *(longlong *)(lVar4 + (longlong)iVar1 * 8) = lVar7;
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar2 + 0x38));
  }
  return;
}



// FUNCTION 147c08dc8 FUN_147c08dc8 body=544 status=ok
// SIG undefined FUN_147c08dc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c08dc8(undefined8 param_1,int param_2)

{
  double *pdVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *_Dst;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14caf3aa8 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caf3ac0);
    local_80 = (longlong *)CONCAT44(local_80._4_4_,param_2);
    plVar6 = (longlong *)FUN_147c0b460(param_2);
    iVar10 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar10 + 1U) {
      FUN_1456bd870(plVar6,iVar10);
    }
    *(undefined8 *)(*plVar6 + (longlong)iVar10 * 8) = param_1;
    _DAT_14caf3b38 = param_2 + _DAT_14caf3b38;
    if (DAT_14c76169c < _DAT_14caf3b38) {
      local_58 = 0x100000000;
      local_50 = &DAT_14caf3af8;
      local_48 = 0xffffffff;
      local_40 = 0;
      iVar10 = 0;
      iVar8 = 0;
      if (DAT_14caf3b10 != 0) {
        FUN_1449c0562(&local_58);
        iVar8 = DAT_14caf3b10;
      }
      local_68 = local_48;
      uVar4 = local_68;
      local_60 = local_40;
      local_5c = local_3c;
      local_78 = local_58;
      local_70 = local_50;
      local_80 = &DAT_14caf3ae8;
      local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      local_68 = uVar4;
      if ((local_68._4_4_ == iVar8) && (local_50 == &DAT_14caf3af8)) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        puVar9 = (undefined8 *)0x0;
        iVar10 = 0;
        iVar5 = local_68._4_4_;
        do {
          lVar3 = *local_80;
          lVar7 = (longlong)iVar5;
          if ((*(int *)(lVar3 + 0x10 + lVar7 * 0x28) != 0) &&
             ((piVar2 = (int *)(lVar3 + lVar7 * 0x28), puVar9 == (undefined8 *)0x0 ||
              (pdVar1 = (double *)(piVar2 + 6),
              *pdVar1 <= (double)puVar9[2] && (double)puVar9[2] != *pdVar1)))) {
            puVar9 = (undefined8 *)(lVar3 + lVar7 * 0x28 + 8);
            iVar10 = *piVar2;
          }
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
          FUN_1449c0562(&local_78);
          iVar5 = local_68._4_4_;
        } while (local_80 != &DAT_14caf3ae8 ||
                 (local_70 != &DAT_14caf3af8 || local_68._4_4_ != iVar8));
      }
      _Dst = (undefined8 *)*puVar9;
      uVar4 = *_Dst;
      iVar8 = *(int *)(puVar9 + 1) + -1;
      if (iVar8 == 0) {
        iVar8 = 0;
      }
      else {
        iVar5 = 1;
        if (iVar8 < 1) {
          iVar5 = iVar8;
        }
        memmove(_Dst,_Dst + (*(int *)(puVar9 + 1) - iVar5),(longlong)iVar5 << 3);
        iVar8 = *(int *)(puVar9 + 1) + -1;
      }
      *(int *)(puVar9 + 1) = iVar8;
      _DAT_14caf3b38 = _DAT_14caf3b38 - iVar10;
      FUN_1400020a8(uVar4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caf3ac0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_1400020a8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c08ff8 FUN_147c08ff8 body=25 status=ok
// SIG undefined FUN_147c08ff8(void)

void FUN_147c08ff8(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a9ffec0;
  *(byte *)((longlong)param_1 + 0xc) = *(byte *)((longlong)param_1 + 0xc) & 0xfe;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  return;
}



// FUNCTION 147c09012 FUN_147c09012 body=204 status=ok
// SIG undefined FUN_147c09012(void)

void FUN_147c09012(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = &DAT_3f8000003f800000;
  param_1[8] = 0x3f800000;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *param_1 = &PTR_FUN_14a9fff00;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  fVar1 = (float)DAT_14c8464f0;
  fVar2 = (float)DAT_14c8464e8;
  fVar3 = (float)DAT_14c8464e0;
  *(float *)(param_1 + 0xe) = fVar3;
  *(float *)((longlong)param_1 + 0x74) = fVar2;
  *(float *)(param_1 + 0xf) = fVar1;
  *(float *)((longlong)param_1 + 0x7c) = fVar3;
  *(float *)(param_1 + 0x10) = fVar2;
  *(float *)((longlong)param_1 + 0x84) = fVar1;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 **)((longlong)param_1 + 0xb4) = &DAT_100000001;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xbf000000bf000000;
  *(undefined2 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  return;
}



// FUNCTION 147c090de FUN_147c090de body=1457 status=ok
// SIG undefined FUN_147c090de(void)

void FUN_147c090de(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  ulonglong *puVar5;
  undefined4 *puVar6;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147c09690();
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0xbe),1);
  }
  else {
    *(undefined1 *)(param_1 + 0xbe) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0xbc);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0xbc) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0xbc) = *piVar3 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0xbd);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0xbd) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0xbd) = *piVar3 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0xbf),1);
  }
  else {
    *(undefined1 *)(param_1 + 0xbf) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x98),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  local_28 = (uint)*(byte *)(param_1 + 0xc0);
  puVar5 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
    }
    else {
      FUN_14572512c(param_2,&local_28);
    }
  }
  else {
    local_28 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar1;
  }
  *(undefined1 *)(param_1 + 0xc0) = (undefined1)local_28;
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x9c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x9c) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xa0),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xa4),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa4) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xa8),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xac),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xac) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0xc1),1);
  }
  else {
    *(undefined1 *)(param_1 + 0xc1) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  FUN_1447712aa(param_2,param_1 + 0x70);
  FUN_1447712aa(param_2,param_1 + 0x7c);
  (**(code **)(*param_2 + 0x150))(param_2,param_1 + 0x60);
  FUN_14280e057(param_2,param_1 + 0xc4);
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0xcc);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0xcc) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0xcc) = *piVar3 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0xcd);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0xcd) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0xcd) = *piVar3 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xd0),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar6 = (undefined4 *)(param_1 + 0xd4);
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar6,4);
    }
    else {
      FUN_14572512c(param_2,puVar6);
    }
  }
  else {
    *puVar6 = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c09690 FUN_147c09690 body=876 status=ok
// SIG undefined FUN_147c09690(void)

void FUN_147c09690(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_68 [32];
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  ulonglong uStack_30;
  undefined4 local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *(undefined4 *)(param_1 + 8);
  puVar1 = (ulonglong *)param_2[1];
  puVar2 = (undefined4 *)*puVar1 + 1;
  if ((undefined4 *)puVar1[1] < puVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
    }
    else {
      FUN_14572512c(param_2,&local_28);
    }
  }
  else {
    local_28 = *(undefined4 *)*puVar1;
    *puVar1 = (ulonglong)puVar2;
  }
  *(undefined4 *)(param_1 + 8) = local_28;
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xc),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  if (((*(byte *)(param_2 + 5) & 1) == 0) && ((*(byte *)((longlong)param_2 + 0x2b) & 2) == 0)) {
    if (*(uint *)(param_1 + 0x1c) != 0) {
      uStack_30 = (ulonglong)*(uint *)(param_1 + 0x1c);
      FUN_1447403be(&local_38,0);
      memcpy(local_38,*(void **)(param_1 + 0x28),(longlong)*(int *)(param_1 + 0x1c));
    }
    uVar5 = *(uint *)(param_1 + 0x20);
    if (uVar5 != 0) {
      iVar4 = (int)uStack_40;
      uStack_40 = CONCAT44(uStack_40._4_4_,(int)uStack_40 + uVar5);
      if ((uint)(uStack_40._4_4_ - iVar4) < uVar5) {
        FUN_14488eebe(&local_48);
        uVar5 = *(uint *)(param_1 + 0x20);
      }
      memcpy(local_48,*(void **)(param_1 + 0x30),(longlong)(int)uVar5 * 2);
    }
  }
  FUN_140077068(param_2,&local_38);
  FUN_14041268c(param_2,&local_48);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_147c050e0(param_1 + 0x18);
    if ((int)uStack_30 != 0) {
      FUN_147c04f5c(param_1 + 0x18,uStack_30 & 0xffffffff,uStack_40 & 0xffffffff);
      memcpy(*(void **)(param_1 + 0x28),local_38,(longlong)*(int *)(param_1 + 0x1c));
      if ((longlong)*(int *)(param_1 + 0x20) != 0) {
        memcpy(*(void **)(param_1 + 0x30),local_48,(longlong)*(int *)(param_1 + 0x20) * 2);
      }
    }
  }
  FUN_1447712aa(param_2,param_1 + 0x38);
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x44),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x44) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar3 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar3 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x48);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x48) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x48) = *piVar3 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x4c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1447712aa(param_2,param_1 + 0x50);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c09a44 FUN_147c09a44 body=38 status=ok
// SIG undefined FUN_147c09a44(void)

undefined8 FUN_147c09a44(undefined8 param_1,int param_2)

{
  FUN_147bf53a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c09a6a FUN_147c09a6a body=38 status=ok
// SIG undefined FUN_147c09a6a(void)

undefined8 FUN_147c09a6a(undefined8 param_1,int param_2)

{
  FUN_147bf5b9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c09afa FUN_147c09afa body=38 status=ok
// SIG undefined FUN_147c09afa(void)

undefined8 FUN_147c09afa(undefined8 param_1,int param_2)

{
  FUN_145f96a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c09b20 FUN_147c09b20 body=38 status=ok
// SIG undefined FUN_147c09b20(void)

undefined8 FUN_147c09b20(undefined8 param_1,int param_2)

{
  FUN_147bf5e58();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c09b84 FUN_147c09b84 body=38 status=ok
// SIG undefined FUN_147c09b84(void)

undefined8 FUN_147c09b84(undefined8 param_1,int param_2)

{
  FUN_147bf5e58();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c09baa FUN_147c09baa body=68 status=ok
// SIG undefined FUN_147c09baa(void)

undefined8 * FUN_147c09baa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9ffca0;
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  FUN_147bf5e58(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c09c08 FUN_147c09c08 body=19 status=ok
// SIG undefined FUN_147c09c08(void)

longlong FUN_147c09c08(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x30))();
  return lVar1 + 0x48;
}



// FUNCTION 147c09c1c FUN_147c09c1c body=38 status=ok
// SIG undefined FUN_147c09c1c(void)

undefined8 FUN_147c09c1c(undefined8 param_1,int param_2)

{
  FUN_147c0b0b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c09c42 FUN_147c09c42 body=45 status=ok
// SIG undefined FUN_147c09c42(void)

undefined8 FUN_147c09c42(undefined8 param_1,int param_2)

{
  FUN_147c34b36();
  if (param_2 != 0) {
    FUN_147c08dc8(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 147c09c90 FUN_147c09c90 body=68 status=ok
// SIG undefined FUN_147c09c90(void)

undefined8 * FUN_147c09c90(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa006d0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_147c0b0b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c09cd4 FUN_147c09cd4 body=3055 status=ok
// SIG undefined FUN_147c09cd4(void)

void FUN_147c09cd4(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147c090de();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xd8),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xdc),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xdc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xe0),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe0) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1403b0476(param_2,param_1 + 0xe8);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xf8),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xf8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xfc),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xfc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x100),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x100) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x104),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x104) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x108),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x108) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x110),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x110) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x114),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x114) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x118),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x11c);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x11c) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x11c) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x11d);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x11d) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x11d) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x11e);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x11e) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x11e) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x11f);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x11f) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x11f) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x120);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x120) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x120) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x121);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x121) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x121) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x124),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x124) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x128),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 300),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 300) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x130),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x130) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x134),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x134) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1447712aa(param_2,param_1 + 0x138);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x144),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x144) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x148),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x148) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x14c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x150),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x150) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x154),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x154) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x158),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x158) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x15c),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x15c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x160);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x160) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x160) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x161);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x161) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x161) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x162);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x162) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x162) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x163);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0x163) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x163) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0a8c4 FUN_147c0a8c4 body=138 status=ok
// SIG undefined FUN_147c0a8c4(void)

code * FUN_147c0a8c4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenAlignment";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e41318;
}



// FUNCTION 147c0a94e FUN_147c0a94e body=377 status=ok
// SIG undefined FUN_147c0a94e(void)

uint * FUN_147c0a94e(longlong param_1,uint *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint local_60 [2];
  undefined8 *local_58;
  uint local_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a75156(param_1,local_60);
  iVar1 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar1 = 0;
  }
  iVar7 = 1;
  FUN_1446f82e2(&local_50,iVar1,*param_3,1);
  uVar6 = local_50;
  uVar2 = CONCAT44(iStack_4c,local_50);
  *local_58 = uVar2;
  *(undefined4 *)(local_58 + 1) = 0xffffffff;
  local_50 = local_60[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = uVar6 & 0xffff;
  uVar9 = (uVar6 << 0x10 | uVar5) + iStack_4c + (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  local_68 = param_4;
  cVar3 = FUN_144b23990(param_1,uVar9,local_58,&local_50);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (3 < uVar6) {
      uVar4 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_58 + 0xc) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_58 + 1) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4) =
           local_50;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_144869b4a(param_1);
    }
  }
  *param_2 = local_50;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0aac8 FUN_147c0aac8 body=59 status=ok
// SIG undefined FUN_147c0aac8(void)

undefined8 * FUN_147c0aac8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9fffd0;
  FUN_147c0b0b4(param_1 + 5);
  if (param_2 != 0) {
    FUN_147c08dc8(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 147c0ab1c FUN_147c0ab1c body=67 status=ok
// SIG undefined FUN_147c0ab1c(void)

undefined8 * FUN_147c0ab1c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa006e0;
  FUN_147c0b0b4(param_1 + 9);
  FUN_147c39b6c(param_1);
  if (param_2 != 0) {
    FUN_147c08dc8(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 147c0ab78 FUN_147c0ab78 body=92 status=ok
// SIG undefined FUN_147c0ab78(void)

void FUN_147c0ab78(longlong *param_1,longlong param_2)

{
  if ((((0 < *(int *)(param_2 + 0x108)) && (0 < *(int *)(param_2 + 0x118))) &&
      (*(longlong *)(param_2 + 0x110) != 0)) && (*(longlong *)(param_2 + 0x120) != 0)) {
    (**(code **)(*param_1 + 0x78))(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147c0abc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x80))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 147c0abda FUN_147c0abda body=67 status=ok
// SIG undefined FUN_147c0abda(void)

undefined8 * FUN_147c0abda(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa00780;
  FUN_147c0b0b4(param_1 + 9);
  FUN_147c39b6c(param_1);
  if (param_2 != 0) {
    FUN_147c08dc8(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 147c0ac1e FUN_147c0ac1e body=170 status=ok
// SIG undefined FUN_147c0ac1e(void)

void FUN_147c0ac1e(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  LOCK();
  *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  UNLOCK();
  FUN_144a23f14(*(ulonglong *)(lVar2 + 0x80) >> 0x3b & 0xffffffffffffff07,
                *(undefined4 *)(lVar2 + 0x1c));
  local_19 = 1;
  FUN_1447439e4(lVar2);
  puVar3 = (undefined8 *)param_1[0x15];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0acca FUN_147c0acca body=90 status=ok
// SIG undefined FUN_147c0acca(void)

void FUN_147c0acca(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1435c17c6();
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147c0ad1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147c0ad24 FUN_147c0ad24 body=38 status=ok
// SIG undefined FUN_147c0ad24(void)

undefined8 FUN_147c0ad24(undefined8 param_1,int param_2)

{
  FUN_147c0b0b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c0ad50 FUN_147c0ad50 body=38 status=ok
// SIG undefined FUN_147c0ad50(void)

undefined8 FUN_147c0ad50(undefined8 param_1,int param_2)

{
  FUN_147c0b0b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c0ad76 FUN_147c0ad76 body=828 status=ok
// SIG undefined FUN_147c0ad76(void)

void FUN_147c0ad76(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147c090de();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xd8),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xdc),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xdc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xe0),4);
    }
    else {
      FUN_14572512c(param_2);
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
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0xe8);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0xe8) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0xe8) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xec),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xec) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xf0),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xf0) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0xf4),1);
  }
  else {
    *(undefined1 *)(param_1 + 0xf4) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0xf5);
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0xf5) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0xf5) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1447712aa(param_2,param_1 + 0xf8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0b0b4 FUN_147c0b0b4 body=78 status=ok
// SIG undefined FUN_147c0b0b4(void)

void FUN_147c0b0b4(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a9fff00;
  lVar1 = param_1[0xd];
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  *param_1 = &PTR_FUN_14aa00630;
  FUN_147c050e0(param_1 + 3);
  return;
}



// FUNCTION 147c0b102 FUN_147c0b102 body=38 status=ok
// SIG undefined FUN_147c0b102(void)

undefined8 FUN_147c0b102(undefined8 param_1,int param_2)

{
  FUN_147c0b0b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c0b128 FUN_147c0b128 body=114 status=ok
// SIG undefined FUN_147c0b128(void)

void FUN_147c0b128(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_147c0b19a();
  puVar2 = (undefined4 *)(param_1 + 0xf8);
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147c0b173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    return;
  }
  FUN_14572512c(param_2,puVar2);
  return;
}



// FUNCTION 147c0b19a FUN_147c0b19a body=671 status=ok
// SIG undefined FUN_147c0b19a(void)

void FUN_147c0b19a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  FUN_147c090de();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xd8),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xdc),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xdc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xe0),4);
    }
    else {
      FUN_14572512c(param_2);
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
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xe8),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xec),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xec) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0xf0),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xf0) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = (undefined4 *)(param_1 + 0xf4);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147c0b3b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
      return;
    }
    FUN_14572512c(param_2,puVar2);
    return;
  }
  *puVar2 = *puVar1;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 147c0b43a FUN_147c0b43a body=38 status=ok
// SIG undefined FUN_147c0b43a(void)

undefined8 FUN_147c0b43a(undefined8 param_1,int param_2)

{
  FUN_147c0b0b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c0b460 FUN_147c0b460 body=193 status=ok
// SIG undefined FUN_147c0b460(void)

int * FUN_147c0b460(uint param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 auStack_48 [40];
  int *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14caf3af0 != DAT_14caf3b1c) {
    puVar3 = &DAT_14caf3b20;
    if (DAT_14caf3b28 != (undefined *)0x0) {
      puVar3 = DAT_14caf3b28;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14caf3b30 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(DAT_14caf3ae8 + (longlong)iVar2 * 0x28);
        if (*piVar1 == *param_2) {
          if (piVar1 != (int *)0x0) goto LAB_147c0b505;
          break;
        }
        iVar2 = piVar1[8];
      } while (iVar2 != -1);
    }
  }
  local_20 = param_2;
  FUN_147c0b522(&local_14,param_1);
  piVar1 = (int *)(DAT_14caf3ae8 + (longlong)local_14 * 0x28);
LAB_147c0b505:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar1 + 2;
}



// FUNCTION 147c0b522 FUN_147c0b522 body=298 status=ok
// SIG undefined FUN_147c0b522(void)

undefined4 * FUN_147c0b522(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147c0b64e(local_48);
  *local_40 = *(undefined4 *)*param_3;
  *(undefined8 *)(local_40 + 2) = 0;
  *(undefined8 *)(local_40 + 4) = 0;
  *(undefined8 *)(local_40 + 6) = 0;
  local_40[8] = 0xffffffff;
  cVar2 = FUN_147c0b75c(param_2,local_40,local_48);
  if (cVar2 == '\0') {
    uVar3 = DAT_14caf3af0 - DAT_14caf3b1c;
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
    if (((int)uVar3 < 1) || (iVar6 <= DAT_14caf3b30)) {
      param_2 = DAT_14caf3b30 - 1U & param_2;
      local_40[9] = param_2;
      puVar4 = DAT_14caf3b28;
      if (DAT_14caf3b28 == (undefined *)0x0) {
        puVar4 = &DAT_14caf3b20;
      }
      local_40[8] = *(undefined4 *)
                     (puVar4 + ((longlong)DAT_14caf3b30 - 1U & (longlong)(int)param_2) * 4);
      puVar4 = DAT_14caf3b28;
      if (DAT_14caf3b28 == (undefined *)0x0) {
        puVar4 = &DAT_14caf3b20;
      }
      *(undefined4 *)(puVar4 + ((longlong)DAT_14caf3b30 - 1U & (longlong)(int)param_2) * 4) =
           local_48[0];
    }
    else {
      DAT_14caf3b30 = iVar6;
      FUN_147c0b888();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0b64e FUN_147c0b64e body=270 status=ok
// SIG undefined FUN_147c0b64e(void)

int * FUN_147c0b64e(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14caf3b18;
  iVar4 = DAT_14caf3af0;
  if (DAT_14caf3b1c == 0) {
    iVar2 = DAT_14caf3af0 + 1;
    bVar7 = DAT_14caf3af4 == DAT_14caf3af0;
    DAT_14caf3af0 = iVar2;
    if (bVar7) {
      FUN_140549c28(&DAT_14caf3ae8,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14caf3af8,1);
    puVar3 = DAT_14caf3b08;
    if (DAT_14caf3b08 == (undefined *)0x0) {
      puVar3 = &DAT_14caf3af8;
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
    lVar6 = (longlong)DAT_14caf3b18;
    DAT_14caf3b18 = *(int *)(DAT_14caf3ae8 + 4 + lVar6 * 0x28);
    DAT_14caf3b1c = DAT_14caf3b1c + -1;
    iVar4 = iVar2;
    if (DAT_14caf3b1c != 0) {
      *(undefined4 *)(DAT_14caf3ae8 + (longlong)DAT_14caf3b18 * 0x28) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14caf3af8;
  if (DAT_14caf3b08 != (undefined *)0x0) {
    puVar3 = DAT_14caf3b08;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x28 + DAT_14caf3ae8;
  return param_1;
}



// FUNCTION 147c0b75c FUN_147c0b75c body=171 status=ok
// SIG undefined FUN_147c0b75c(void)

undefined8 FUN_147c0b75c(uint param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  
  if ((DAT_14caf3af0 - DAT_14caf3b1c != 1) && (DAT_14caf3af0 != DAT_14caf3b1c)) {
    puVar9 = &DAT_14caf3b20;
    if (DAT_14caf3b28 != (undefined *)0x0) {
      puVar9 = DAT_14caf3b28;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(DAT_14caf3b30 - 1U & param_1) * 4);
    if (iVar10 != -1) {
      do {
        piVar1 = (int *)(DAT_14caf3ae8 + (longlong)iVar10 * 0x28);
        if (*piVar1 == *param_2) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_2;
          iVar3 = param_2[1];
          iVar4 = param_2[2];
          iVar5 = param_2[3];
          iVar6 = param_2[5];
          iVar7 = param_2[6];
          iVar8 = param_2[7];
          piVar1[4] = param_2[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_147c0b808(*param_3);
          *param_3 = iVar10;
          return 1;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 147c0b808 FUN_147c0b808 body=128 status=ok
// SIG undefined FUN_147c0b808(void)

void FUN_147c0b808(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14caf3ae8;
  if (DAT_14caf3b1c != 0) {
    *(int *)(DAT_14caf3ae8 + (longlong)DAT_14caf3b18 * 0x28) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x28) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14caf3b1c) {
    iVar4 = DAT_14caf3b18;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x28) = iVar4;
  DAT_14caf3b1c = DAT_14caf3b1c + 1;
  puVar3 = &DAT_14caf3af8;
  if (DAT_14caf3b08 != (undefined *)0x0) {
    puVar3 = DAT_14caf3b08;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14caf3b18 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 147c0b888 FUN_147c0b888 body=464 status=ok
// SIG undefined FUN_147c0b888(void)

void FUN_147c0b888(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
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
  if (DAT_14caf3b28 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14caf3b28,0,0,4);
  }
  uVar2 = DAT_14caf3b30;
  uVar3 = local_50;
  if (DAT_14caf3b30 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14caf3b20,0,DAT_14caf3b30,4);
    if (0 < (int)uVar2) {
      do {
        puVar6 = DAT_14caf3b28;
        if (DAT_14caf3b28 == (undefined *)0x0) {
          puVar6 = &DAT_14caf3b20;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14caf3b30 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14caf3af8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14caf3b10 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14caf3ae8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar9 = (longlong)(int)DAT_14caf3b30 - 1U & (longlong)*(int *)(lVar1 + lVar5 * 0x28);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x24 + lVar5 * 0x28) = iVar8;
        puVar6 = DAT_14caf3b28;
        if (DAT_14caf3b28 == (undefined *)0x0) {
          puVar6 = &DAT_14caf3b20;
        }
        *(undefined4 *)(lVar1 + 0x20 + lVar5 * 0x28) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14caf3b30 - 1U & uVar9) * 4);
        puVar6 = DAT_14caf3b28;
        if (DAT_14caf3b28 == (undefined *)0x0) {
          puVar6 = &DAT_14caf3b20;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14caf3b30 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c0ba5a FUN_147c0ba5a body=52 status=ok
// SIG undefined FUN_147c0ba5a(void)

undefined8 * FUN_147c0ba5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa00630;
  FUN_147c050e0(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c0ba8e FUN_147c0ba8e body=128 status=ok
// SIG undefined FUN_147c0ba8e(void)

void FUN_147c0ba8e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140b584e0(param_1,param_2);
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



// FUNCTION 147c0bb0f FUN_147c0bb0f body=67 status=ok
// SIG undefined FUN_147c0bb0f(void)

void FUN_147c0bb0f(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(*plVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      plVar3 = plVar3 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147c0bb60 FUN_147c0bb60 body=218 status=ok
// SIG undefined FUN_147c0bb60(void)

int * FUN_147c0bb60(longlong *param_1,int *param_2)

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
      FUN_14055ddfe(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 8);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 8) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 8 + *param_1;
  return param_2;
}



// FUNCTION 147c0bc3a FUN_147c0bc3a body=105 status=ok
// SIG undefined FUN_147c0bc3a(void)

void FUN_147c0bc3a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 8) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 8) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + 4 + (longlong)param_2 * 8) = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar5 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar5 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147c0bca4 FUN_147c0bca4 body=101 status=ok
// SIG undefined FUN_147c0bca4(void)

void FUN_147c0bca4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xc;
    if (0xc < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x6c)) {
    *(int *)(param_1 + 0x6c) = (int)uVar2;
    FUN_147c0bd0a(param_1,*(undefined4 *)(param_1 + 0x68),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 147c0bd0a FUN_147c0bd0a body=133 status=ok
// SIG undefined FUN_147c0bd0a(void)

void FUN_147c0bd0a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 0xd) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,param_4);
  return;
}



// FUNCTION 147c0bd90 FUN_147c0bd90 body=95 status=ok
// SIG undefined FUN_147c0bd90(void)

void FUN_147c0bd90(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147c0bdf0 FUN_147c0bdf0 body=132 status=ok
// SIG undefined FUN_147c0bdf0(void)

void FUN_147c0bdf0(longlong param_1,int param_2)

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



// FUNCTION 147c0be76 FUN_147c0be76 body=95 status=ok
// SIG undefined FUN_147c0be76(void)

void FUN_147c0be76(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147c0bed6 FUN_147c0bed6 body=132 status=ok
// SIG undefined FUN_147c0bed6(void)

void FUN_147c0bed6(longlong param_1,int param_2)

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



// FUNCTION 147c0bf5c FUN_147c0bf5c body=95 status=ok
// SIG undefined FUN_147c0bf5c(void)

void FUN_147c0bf5c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147c0bfbc FUN_147c0bfbc body=132 status=ok
// SIG undefined FUN_147c0bfbc(void)

void FUN_147c0bfbc(longlong param_1,int param_2)

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



// FUNCTION 147c0c042 FUN_147c0c042 body=95 status=ok
// SIG undefined FUN_147c0c042(void)

void FUN_147c0c042(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147c0c0a2 FUN_147c0c0a2 body=132 status=ok
// SIG undefined FUN_147c0c0a2(void)

void FUN_147c0c0a2(longlong param_1,int param_2)

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



// FUNCTION 147c0c128 FUN_147c0c128 body=147 status=ok
// SIG undefined FUN_147c0c128(void)

void FUN_147c0c128(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c0c1bc FUN_147c0c1bc body=146 status=ok
// SIG undefined FUN_147c0c1bc(void)

void FUN_147c0c1bc(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0xe0,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c0c250 FUN_147c0c250 body=56 status=ok
// SIG undefined FUN_147c0c250(void)

undefined8 * FUN_147c0c250(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa00340;
  FUN_144725486();
  FUN_1463ef1f4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c0c2b6 FUN_147c0c2b6 body=38 status=ok
// SIG undefined FUN_147c0c2b6(void)

undefined8 FUN_147c0c2b6(undefined8 param_1,int param_2)

{
  FUN_1463ef1f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c0c2dc FUN_147c0c2dc body=295 status=ok
// SIG undefined FUN_147c0c2dc(void)

void FUN_147c0c2dc(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  short *psVar7;
  
  lVar3 = *(longlong *)(param_2 + 0x138);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  FUN_145e41118();
  uVar4 = *(ulonglong *)(param_1 + 0xa0);
  uVar5 = param_1 + 0xa0 + ((longlong)uVar4 >> 0x18);
  if ((uVar4 & 1) == 0) {
    uVar5 = uVar4;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(uVar5 + lVar6 * 4) == DAT_14caf33f0) {
        uVar4 = *(ulonglong *)(param_1 + 0xb0);
        uVar5 = param_1 + 0xb0 + ((longlong)uVar4 >> 0x18);
        if ((uVar4 & 1) == 0) {
          uVar5 = uVar4;
        }
        psVar7 = (short *)(uVar5 + lVar6);
        goto LAB_147c0c36a;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar6);
  }
  psVar7 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147c0c36a:
  if (*psVar7 != -1) {
    FUN_144b11088(param_3,lVar3);
  }
  if (lVar3 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar3);
      return;
    }
  }
  return;
}



// FUNCTION 147c0c404 FUN_147c0c404 body=48 status=ok
// SIG undefined FUN_147c0c404(void)

void FUN_147c0c404(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147c0c434 FUN_147c0c434 body=48 status=ok
// SIG undefined FUN_147c0c434(void)

void FUN_147c0c434(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147c0c464 FUN_147c0c464 body=48 status=ok
// SIG undefined FUN_147c0c464(void)

void FUN_147c0c464(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147c0c494 FUN_147c0c494 body=48 status=ok
// SIG undefined FUN_147c0c494(void)

void FUN_147c0c494(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147c0c4c4 FUN_147c0c4c4 body=48 status=ok
// SIG undefined FUN_147c0c4c4(void)

void FUN_147c0c4c4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147c0c4f4 FUN_147c0c4f4 body=132 status=ok
// SIG undefined FUN_147c0c4f4(void)

void FUN_147c0c4f4(longlong param_1,int param_2)

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



// FUNCTION 147c0c57a FUN_147c0c57a body=132 status=ok
// SIG undefined FUN_147c0c57a(void)

void FUN_147c0c57a(longlong param_1,int param_2)

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



// FUNCTION 147c0c600 FUN_147c0c600 body=132 status=ok
// SIG undefined FUN_147c0c600(void)

void FUN_147c0c600(longlong param_1,int param_2)

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



// FUNCTION 147c0c686 FUN_147c0c686 body=132 status=ok
// SIG undefined FUN_147c0c686(void)

void FUN_147c0c686(longlong param_1,int param_2)

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



// FUNCTION 147c0c70c FUN_147c0c70c body=63 status=ok
// SIG undefined FUN_147c0c70c(void)

void FUN_147c0c70c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147c0c74c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147c0c74c FUN_147c0c74c body=97 status=ok
// SIG undefined FUN_147c0c74c(void)

ulonglong FUN_147c0c74c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147c0c7ae FUN_147c0c7ae body=128 status=ok
// SIG undefined FUN_147c0c7ae(void)

void FUN_147c0c7ae(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 << 3,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 >> 3)) {
    uVar3 = uVar2 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,1,uVar3,8,8);
  return;
}



// FUNCTION 147c0c830 FUN_147c0c830 body=48 status=ok
// SIG undefined FUN_147c0c830(void)

void FUN_147c0c830(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147c0c860 FUN_147c0c860 body=132 status=ok
// SIG undefined FUN_147c0c860(void)

void FUN_147c0c860(longlong param_1,int param_2)

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



// FUNCTION 147c0c8e6 FUN_147c0c8e6 body=67 status=ok
// SIG undefined FUN_147c0c8e6(void)

void FUN_147c0c8e6(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145968f46(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_147c0ca6e(param_1);
    return;
  }
  FUN_147c0c92a(param_1);
  FUN_145968f46(param_1,0);
  return;
}



// FUNCTION 147c0c92a FUN_147c0c92a body=322 status=ok
// SIG undefined FUN_147c0c92a(void)

void FUN_147c0c92a(longlong *param_1)

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



// FUNCTION 147c0ca6e FUN_147c0ca6e body=474 status=ok
// SIG undefined FUN_147c0ca6e(void)

void FUN_147c0ca6e(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
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



// FUNCTION 147c0cc4a FUN_147c0cc4a body=324 status=ok
// SIG undefined FUN_147c0cc4a(void)

undefined4 * FUN_147c0cc4a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147c0cd90(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147c0ce76(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147c0ca6e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0cd90 FUN_147c0cd90 body=230 status=ok
// SIG undefined FUN_147c0cd90(void)

int * FUN_147c0cd90(longlong *param_1,int *param_2)

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



// FUNCTION 147c0ce76 FUN_147c0ce76 body=128 status=ok
// SIG undefined FUN_147c0ce76(void)

undefined8 FUN_147c0ce76(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
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
          FUN_147c0cef6((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147c0cef6 FUN_147c0cef6 body=114 status=ok
// SIG undefined FUN_147c0cef6(void)

void FUN_147c0cef6(longlong *param_1,int param_2)

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



// FUNCTION 147c0cf68 FUN_147c0cf68 body=324 status=ok
// SIG undefined FUN_147c0cf68(void)

undefined4 * FUN_147c0cf68(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147c0cd90(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147c0ce76(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147c0ca6e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0d0ae FUN_147c0d0ae body=117 status=ok
// SIG undefined FUN_147c0d0ae(void)

void FUN_147c0d0ae(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = (ulonglong)uVar1;
    }
  }
  else {
    uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
  }
  iVar2 = FUN_144a3809e(uVar3,1);
  iVar4 = 0x7fffffff;
  if ((int)uVar1 <= iVar2) {
    iVar4 = iVar2;
  }
  *(int *)(param_1 + 0xc) = iVar4;
  FUN_1446f8d3c(param_1,0,iVar4,1,1);
  return;
}



// FUNCTION 147c0d124 FUN_147c0d124 body=113 status=ok
// SIG undefined FUN_147c0d124(void)

void FUN_147c0d124(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 147c0d196 FUN_147c0d196 body=109 status=ok
// SIG undefined FUN_147c0d196(void)

void FUN_147c0d196(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x70,8);
  }
  return;
}



// FUNCTION 147c0d204 FUN_147c0d204 body=113 status=ok
// SIG undefined FUN_147c0d204(void)

void FUN_147c0d204(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,8);
  }
  return;
}



// FUNCTION 147c0d276 FUN_147c0d276 body=113 status=ok
// SIG undefined FUN_147c0d276(void)

void FUN_147c0d276(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 147c0d2e8 FUN_147c0d2e8 body=112 status=ok
// SIG undefined FUN_147c0d2e8(void)

void FUN_147c0d2e8(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe0,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 5;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0xe0,0x10);
  }
  return;
}



// FUNCTION 147c0d358 FUN_147c0d358 body=60 status=ok
// SIG undefined FUN_147c0d358(void)

void FUN_147c0d358(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147c0d394(param_1,param_2);
    param_1 = param_1 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return;
}



// FUNCTION 147c0d394 FUN_147c0d394 body=145 status=ok
// SIG undefined FUN_147c0d394(void)

undefined8 * FUN_147c0d394(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = param_2;
  puVar4 = param_1;
  for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  lVar2 = param_2[10];
  param_1[10] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar1 = DAT_14c950c29;
  lVar2 = param_2[0xb];
  param_1[0xb] = lVar2;
  if ((lVar2 != 0 & bVar1) == 1) {
    FUN_1456cec3c();
  }
  puVar3 = param_2 + 0xc;
  puVar4 = param_1 + 0xc;
  for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  return param_1;
}



// FUNCTION 147c0d426 FUN_147c0d426 body=192 status=ok
// SIG undefined FUN_147c0d426(void)

void FUN_147c0d426(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = (ulonglong)DAT_14caf3638;
  if ((longlong)uVar4 < 1) {
    return;
  }
  bVar5 = false;
  DAT_14caf3644 = DAT_14caf3644 + 1;
  do {
    lVar6 = uVar4 * 0x10 + -8;
    uVar7 = uVar4;
    while (((*(int *)(DAT_14caf3630 + lVar6) != 0 &&
            (plVar1 = *(longlong **)(DAT_14caf3630 + -8 + lVar6), plVar1 != (longlong *)0x0)) &&
           (cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2), cVar3 != '\0'))) {
      lVar6 = lVar6 + -0x10;
      bVar2 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar2) {
        DAT_14caf3644 = DAT_14caf3644 + -1;
        if (!bVar5) {
          return;
        }
        goto LAB_147c0d4cd;
      }
    }
    uVar4 = uVar7 - 1;
    bVar5 = true;
  } while (1 < uVar7);
  DAT_14caf3644 = DAT_14caf3644 + -1;
LAB_147c0d4cd:
  FUN_14474d06a(&DAT_14caf3630,0);
  return;
}



// FUNCTION 147c0d4e6 FUN_147c0d4e6 body=116 status=ok
// SIG undefined FUN_147c0d4e6(void)

void FUN_147c0d4e6(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xc;
    if (0xc < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xc < *(uint *)(param_1 + 0x6c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x6c) = (int)uVar4;
    FUN_147c0bd0a(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147c0d55c FUN_147c0d55c body=132 status=ok
// SIG undefined FUN_147c0d55c(void)

void FUN_147c0d55c(longlong param_1,int param_2)

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



// FUNCTION 147c0d5e2 FUN_147c0d5e2 body=132 status=ok
// SIG undefined FUN_147c0d5e2(void)

void FUN_147c0d5e2(longlong param_1,int param_2)

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



// FUNCTION 147c0d668 FUN_147c0d668 body=132 status=ok
// SIG undefined FUN_147c0d668(void)

void FUN_147c0d668(longlong param_1,int param_2)

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



// FUNCTION 147c0d6ee FUN_147c0d6ee body=48 status=ok
// SIG undefined FUN_147c0d6ee(void)

void FUN_147c0d6ee(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x58,8);
  }
  return;
}



// FUNCTION 147c0d71e FUN_147c0d71e body=147 status=ok
// SIG undefined FUN_147c0d71e(void)

void FUN_147c0d71e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  local_20 = param_1;
  FUN_1435ce06a(param_1 + 0xa8,&local_20);
  puVar2 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_20 != 0) {
    LOCK();
    piVar1 = (int *)(local_20 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0d7c6 FUN_147c0d7c6 body=82 status=ok
// SIG undefined FUN_147c0d7c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147c0d7c6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1435c3904(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1435c3904(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147c0d7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147c0d818 FUN_147c0d818 body=132 status=ok
// SIG undefined FUN_147c0d818(void)

void FUN_147c0d818(longlong param_1,int param_2)

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



// FUNCTION 147c0d89e FUN_147c0d89e body=62 status=ok
// SIG undefined FUN_147c0d89e(void)

void FUN_147c0d89e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147c0d8dc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147c0d8dc FUN_147c0d8dc body=93 status=ok
// SIG undefined FUN_147c0d8dc(void)

ulonglong FUN_147c0d8dc(uint param_1,uint param_2)

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



// FUNCTION 147c0d93a FUN_147c0d93a body=48 status=ok
// SIG undefined FUN_147c0d93a(void)

void FUN_147c0d93a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147c0d96a FUN_147c0d96a body=110 status=ok
// SIG undefined FUN_147c0d96a(void)

void FUN_147c0d96a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_147c0d9da(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147c0d9da FUN_147c0d9da body=132 status=ok
// SIG undefined FUN_147c0d9da(void)

void FUN_147c0d9da(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 147c0da5e FUN_147c0da5e body=119 status=ok
// SIG undefined FUN_147c0da5e(void)

void FUN_147c0da5e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0xc;
    if (0xc < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0xc < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_147c0dad6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147c0dad6 FUN_147c0dad6 body=141 status=ok
// SIG undefined FUN_147c0dad6(void)

void FUN_147c0dad6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0xd) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,0x10);
  return;
}



// FUNCTION 147c0db64 FUN_147c0db64 body=147 status=ok
// SIG undefined FUN_147c0db64(void)

void FUN_147c0db64(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c0dbf8 FUN_147c0dbf8 body=98 status=ok
// SIG undefined FUN_147c0dbf8(void)

void FUN_147c0dbf8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147c0dc5a FUN_147c0dc5a body=143 status=ok
// SIG undefined FUN_147c0dc5a(void)

void FUN_147c0dc5a(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c0dcea FUN_147c0dcea body=147 status=ok
// SIG undefined FUN_147c0dcea(void)

void FUN_147c0dcea(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c0dd7e FUN_147c0dd7e body=143 status=ok
// SIG undefined FUN_147c0dd7e(void)

void FUN_147c0dd7e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c0de0e FUN_147c0de0e body=147 status=ok
// SIG undefined FUN_147c0de0e(void)

void FUN_147c0de0e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c0dea2 FUN_147c0dea2 body=411 status=ok
// SIG undefined FUN_147c0dea2(void)

longlong * FUN_147c0dea2(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_145b273f7(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_147c0e0b4(param_2,0);
      }
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar3 = *param_2;
      if ((*(byte *)(param_1 + 5) & 1) != 0) {
        *(undefined8 *)(lVar3 + lVar6) = 0;
        ((undefined8 *)(lVar3 + lVar6))[1] = 0;
      }
      FUN_147c0e11a(param_1);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    FUN_147c0e03e(param_2);
    if (0 < (int)local_44) {
      iVar5 = 0;
      do {
        puVar4 = (undefined8 *)FUN_147c0e078(param_2);
        if ((*(byte *)(param_1 + 5) & 1) != 0) {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
        FUN_147c0e11a(param_1,puVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147c0e03e FUN_147c0e03e body=57 status=ok
// SIG undefined FUN_147c0e03e(void)

void FUN_147c0e03e(undefined8 *param_1,int param_2)

{
  FUN_145b273f7(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147c0e0b4(param_1,param_2);
  return;
}



// FUNCTION 147c0e078 FUN_147c0e078 body=59 status=ok
// SIG undefined FUN_147c0e078(void)

longlong FUN_147c0e078(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147c0d5e2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_147c0e113(lVar2);
  return lVar2;
}



// FUNCTION 147c0e0b4 FUN_147c0e0b4 body=95 status=ok
// SIG undefined FUN_147c0e0b4(void)

void FUN_147c0e0b4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147c0e113 FUN_147c0e113 body=7 status=ok
// SIG undefined FUN_147c0e113(void)

void FUN_147c0e113(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 147c0e11a FUN_147c0e11a body=363 status=ok
// SIG undefined FUN_147c0e11a(void)

longlong * FUN_147c0e11a(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
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
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14788f48e(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_147c0e2fc(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147c0441a(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_147c0e286(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147c0e2c0(param_2);
        FUN_147c0441a(param_1,uVar3);
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



// FUNCTION 147c0e286 FUN_147c0e286 body=57 status=ok
// SIG undefined FUN_147c0e286(void)

void FUN_147c0e286(undefined8 *param_1,int param_2)

{
  FUN_14788f48e(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147c0e2fc(param_1,param_2);
  return;
}



// FUNCTION 147c0e2c0 FUN_147c0e2c0 body=59 status=ok
// SIG undefined FUN_147c0e2c0(void)

longlong FUN_147c0e2c0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147c0d668(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_147c0e35b(lVar2);
  return lVar2;
}



// FUNCTION 147c0e2fc FUN_147c0e2fc body=95 status=ok
// SIG undefined FUN_147c0e2fc(void)

void FUN_147c0e2fc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 147c0e35b FUN_147c0e35b body=7 status=ok
// SIG undefined FUN_147c0e35b(void)

void FUN_147c0e35b(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 147c0e362 FUN_147c0e362 body=56 status=ok
// SIG undefined FUN_147c0e362(void)

undefined8 * FUN_147c0e362(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa00480;
  FUN_144725486();
  FUN_145f96a94(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c0e39a FUN_147c0e39a body=56 status=ok
// SIG undefined FUN_147c0e39a(void)

undefined8 * FUN_147c0e39a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa004b0;
  FUN_144725486();
  FUN_1463ef374(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c0e400 FUN_147c0e400 body=38 status=ok
// SIG undefined FUN_147c0e400(void)

undefined8 FUN_147c0e400(undefined8 param_1,int param_2)

{
  FUN_1463ef374();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147c0e426 FUN_147c0e426 body=140 status=ok
// SIG undefined FUN_147c0e426(void)

void FUN_147c0e426(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14caf3c58;
  if (param_1 <= (int)DAT_14caf3c58) {
    if (DAT_14caf3c5c == 0) {
      uVar2 = 4;
      if (4 < DAT_14caf3c58) {
        uVar2 = DAT_14caf3c58;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14caf3c58 + ((ulonglong)((longlong)(int)DAT_14caf3c58 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14caf3c5c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14caf3c50,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c0e4b3 FUN_147c0e4b3 body=29 status=ok
// SIG undefined FUN_147c0e4b3(void)

void FUN_147c0e4b3(longlong param_1,int param_2)

{
  undefined2 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined2 *)(param_1 + 0xc);
    do {
      *(undefined4 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147c0e4d0 FUN_147c0e4d0 body=132 status=ok
// SIG undefined FUN_147c0e4d0(void)

void FUN_147c0e4d0(longlong param_1,int param_2)

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



// FUNCTION 147c0e556 FUN_147c0e556 body=88 status=ok
// SIG undefined FUN_147c0e556(void)

void FUN_147c0e556(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 147c0e5ae FUN_147c0e5ae body=257 status=ok
// SIG undefined FUN_147c0e5ae(void)

void FUN_147c0e5ae(ulonglong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar11 = FUN_144821ef4();
  FUN_147c0e6b0(*param_2,lVar11,param_4);
  iVar9 = *(int *)(lVar11 + 0x30) + *(int *)(lVar11 + 0x20);
  iVar10 = iVar9 + *(int *)(lVar11 + 0x40);
  if (iVar10 != 0 && SCARRY4(iVar9,*(int *)(lVar11 + 0x40)) == iVar10 < 0) {
    puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar12 + 0xb;
    if ((undefined8 *)param_1[1] < puVar13) {
      FUN_140023dd8(param_1,0x60);
      puVar12 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar12 + 0xb;
    }
    *param_1 = (ulonglong)puVar13;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar12;
    param_1[6] = (ulonglong)(puVar12 + 1);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    uVar1 = *(undefined4 *)(lVar11 + 0x40);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar2 = *(undefined4 *)(lVar11 + 0x30);
    uVar7 = *(undefined8 *)(lVar11 + 0x18);
    uVar3 = *(undefined4 *)(lVar11 + 0x20);
    uVar8 = *(undefined8 *)(lVar11 + 8);
    uVar4 = *(undefined4 *)(lVar11 + 0x10);
    puVar12[1] = 0;
    *puVar12 = &PTR_FUN_14a1e7fd8;
    puVar12[2] = param_3;
    puVar12[3] = uVar8;
    *(undefined4 *)(puVar12 + 4) = uVar4;
    puVar12[5] = uVar7;
    *(undefined4 *)(puVar12 + 6) = uVar3;
    puVar12[7] = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar2;
    puVar12[9] = uVar5;
    *(undefined4 *)(puVar12 + 10) = uVar1;
    *(undefined8 *)(lVar11 + 8) = 0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined4 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined4 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined4 *)(lVar11 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147c0e6b0 FUN_147c0e6b0 body=404 status=ok
// SIG undefined FUN_147c0e6b0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147c0e6b0(longlong param_1,longlong *param_2,double *param_3)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  short *psVar6;
  undefined1 auStack_68 [32];
  short *local_48;
  longlong local_40 [2];
  float local_30;
  float local_2c;
  short local_22;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40[1] = 0x3b0000003b000000;
  local_2c = (float)param_3[1];
  local_30 = (float)*param_3;
  FUN_1435cf35e(local_40,local_40 + 1);
  FUN_145ef3234();
  uVar3 = *(ulonglong *)(param_1 + 0xa0);
  uVar4 = param_1 + 0xa0 + ((longlong)uVar3 >> 0x18);
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar5 = 0;
    do {
      if (*(longlong *)(uVar4 + lVar5 * 4) == DAT_14caf37a8) {
        uVar3 = *(ulonglong *)(param_1 + 0xb0);
        uVar4 = param_1 + 0xb0 + ((longlong)uVar3 >> 0x18);
        if ((uVar3 & 1) == 0) {
          uVar4 = uVar3;
        }
        psVar6 = (short *)(uVar4 + lVar5);
        goto LAB_147c0e778;
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar5);
  }
  psVar6 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147c0e778:
  if (*psVar6 != -1) {
    local_20 = local_40[0];
    local_48 = &local_22;
    local_22 = *psVar6;
    FUN_144aaaac2(*param_2,*param_2 + 0x60,param_2 + 5);
  }
  if (local_40[0] != 0) {
    LOCK();
    puVar1 = (uint *)(local_40[0] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(local_40[0]);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0e846 FUN_147c0e846 body=64 status=ok
// SIG undefined FUN_147c0e846(void)

void FUN_147c0e846(void)

{
  if (DAT_14caf3c84 != 0) {
    DAT_14caf3c84 = 0;
    FUN_1446f8d3c(&DAT_14caf3c78,DAT_14caf3c80,0,0x10,8);
  }
  return;
}



// FUNCTION 147c0e886 FUN_147c0e886 body=43 status=ok
// SIG undefined FUN_147c0e886(void)

void FUN_147c0e886(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 147c0e8b2 FUN_147c0e8b2 body=48 status=ok
// SIG undefined FUN_147c0e8b2(void)

void FUN_147c0e8b2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147c0e8e2 FUN_147c0e8e2 body=48 status=ok
// SIG undefined FUN_147c0e8e2(void)

void FUN_147c0e8e2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147c0e912 FUN_147c0e912 body=132 status=ok
// SIG undefined FUN_147c0e912(void)

void FUN_147c0e912(longlong param_1,int param_2)

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



// FUNCTION 147c0e998 FUN_147c0e998 body=63 status=ok
// SIG undefined FUN_147c0e998(void)

void FUN_147c0e998(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147c0e9d8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147c0e9d8 FUN_147c0e9d8 body=97 status=ok
// SIG undefined FUN_147c0e9d8(void)

ulonglong FUN_147c0e9d8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147c0ea3a FUN_147c0ea3a body=124 status=ok
// SIG undefined FUN_147c0ea3a(void)

void FUN_147c0ea3a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_147c0eab8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147c0eab8 FUN_147c0eab8 body=132 status=ok
// SIG undefined FUN_147c0eab8(void)

void FUN_147c0eab8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 147c0eb40 FUN_147c0eb40 body=429 status=ok
// SIG undefined FUN_147c0eb40(void)

void FUN_147c0eb40(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar6 = *(longlong *)(param_2 + 0xa8);
  if (lVar6 != 0) {
    lVar4 = FUN_14143eef4();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_147c0eb9a;
  }
  lVar6 = 0;
LAB_147c0eb9a:
  if (0 < (int)param_3[1]) {
    local_110 = lVar6 + 0x3a0;
    lVar4 = 4;
    lVar5 = 0;
    do {
      lVar3 = *param_3;
      local_98 = *(undefined8 *)(lVar3 + 0x34 + lVar4);
      puVar2 = (undefined4 *)(lVar3 + 0x24 + lVar4);
      local_a8 = *puVar2;
      uStack_a4 = puVar2[1];
      uStack_a0 = puVar2[2];
      uStack_9c = puVar2[3];
      puVar2 = (undefined4 *)(lVar3 + 0xc + lVar4);
      local_c8 = *puVar2;
      uStack_c4 = puVar2[1];
      uStack_c0 = puVar2[2];
      uStack_bc = puVar2[3];
      local_b8 = *(undefined8 *)(lVar3 + 0x1c + lVar4);
      local_118 = &local_68;
      local_88 = local_c8;
      uStack_84 = uStack_c4;
      uStack_80 = uStack_c0;
      uStack_7c = uStack_bc;
      local_78 = local_b8;
      local_68 = local_a8;
      uStack_64 = uStack_a4;
      uStack_60 = uStack_a0;
      uStack_5c = uStack_9c;
      local_58 = local_98;
      FUN_147beadf3(param_2 + 0x6b0,*(undefined8 *)(lVar3 + lVar4),
                    *(undefined4 *)(lVar3 + 8 + lVar4),&local_88);
      if (lVar6 != 0) {
        puVar1 = (undefined8 *)(lVar3 + lVar4);
        local_d8 = *(undefined8 *)((longlong)puVar1 + 0x34);
        local_e8 = *(undefined4 *)((longlong)puVar1 + 0x24);
        uStack_e4 = *(undefined4 *)(puVar1 + 5);
        uStack_e0 = *(undefined4 *)((longlong)puVar1 + 0x2c);
        uStack_dc = *(undefined4 *)(puVar1 + 6);
        local_108 = *(undefined4 *)((longlong)puVar1 + 0xc);
        uStack_104 = *(undefined4 *)(puVar1 + 2);
        uStack_100 = *(undefined4 *)((longlong)puVar1 + 0x14);
        uStack_fc = *(undefined4 *)(puVar1 + 3);
        local_f8 = *(undefined8 *)((longlong)puVar1 + 0x1c);
        local_118 = &local_68;
        local_88 = local_108;
        uStack_84 = uStack_104;
        uStack_80 = uStack_100;
        uStack_7c = uStack_fc;
        local_78 = local_f8;
        local_68 = local_e8;
        uStack_64 = uStack_e4;
        uStack_60 = uStack_e0;
        uStack_5c = uStack_dc;
        local_58 = local_d8;
        FUN_147beadf3(local_110,*puVar1,*(undefined4 *)(puVar1 + 1),&local_88);
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x50;
    } while (lVar5 < (int)param_3[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0ecee FUN_147c0ecee body=651 status=ok
// SIG undefined FUN_147c0ecee(void)

void FUN_147c0ecee(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar6 = *(longlong *)(param_2 + 0xa8);
  local_178 = param_2;
  if (lVar6 != 0) {
    lVar5 = FUN_14143eef4();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_147c0ed4a;
  }
  lVar6 = 0;
LAB_147c0ed4a:
  if (0 < (int)param_3[1]) {
    local_178 = local_178 + 0x6d0;
    local_170 = lVar6 + 0x3c0;
    lVar7 = 4;
    lVar5 = 0;
    do {
      lVar2 = *param_3;
      local_b8 = *(undefined8 *)(lVar2 + 100 + lVar7);
      puVar1 = (undefined8 *)(lVar2 + 0x54 + lVar7);
      local_c8 = *puVar1;
      uStack_c0 = puVar1[1];
      local_d8 = *(undefined8 *)(lVar2 + 0x34 + lVar7);
      puVar1 = (undefined8 *)(lVar2 + 0x24 + lVar7);
      local_e8 = *puVar1;
      uStack_e0 = puVar1[1];
      local_f8 = *(undefined8 *)(lVar2 + 0x1c + lVar7);
      puVar1 = (undefined8 *)(lVar2 + 0xc + lVar7);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      local_108._0_4_ = (undefined4)uVar3;
      local_108._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_100._0_4_ = (undefined4)uVar4;
      uStack_100._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_a8 = (undefined4)local_108;
      uStack_a4 = local_108._4_4_;
      uStack_a0 = (undefined4)uStack_100;
      uStack_9c = uStack_100._4_4_;
      local_198 = &local_a8;
      local_190 = &local_88;
      local_188 = &local_68;
      local_108 = uVar3;
      uStack_100 = uVar4;
      local_98 = local_f8;
      local_88 = local_e8;
      uStack_80 = uStack_e0;
      local_78 = local_d8;
      local_68 = local_c8;
      uStack_60 = uStack_c0;
      local_58 = local_b8;
      FUN_147beaea7(local_178,*(undefined8 *)(lVar2 + lVar7),*(undefined4 *)(lVar2 + 8 + lVar7),
                    (int)*(float *)(lVar2 + 0x4c + lVar7));
      if (lVar6 != 0) {
        puVar1 = (undefined8 *)(lVar7 + lVar2);
        local_118 = *(undefined8 *)((longlong)puVar1 + 100);
        local_128 = *(undefined8 *)((longlong)puVar1 + 0x54);
        uStack_120 = *(undefined8 *)((longlong)puVar1 + 0x5c);
        local_138 = *(undefined8 *)((longlong)puVar1 + 0x34);
        local_148 = *(undefined8 *)((longlong)puVar1 + 0x24);
        uStack_140 = *(undefined8 *)((longlong)puVar1 + 0x2c);
        uVar3 = *(undefined8 *)((longlong)puVar1 + 0xc);
        uVar4 = *(undefined8 *)((longlong)puVar1 + 0x14);
        local_158 = *(undefined8 *)((longlong)puVar1 + 0x1c);
        local_168._0_4_ = (undefined4)uVar3;
        local_168._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_160._0_4_ = (undefined4)uVar4;
        uStack_160._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_a8 = (undefined4)local_168;
        uStack_a4 = local_168._4_4_;
        uStack_a0 = (undefined4)uStack_160;
        uStack_9c = uStack_160._4_4_;
        local_198 = &local_a8;
        local_190 = &local_88;
        local_188 = &local_68;
        local_168 = uVar3;
        uStack_160 = uVar4;
        local_98 = local_158;
        local_88 = local_148;
        uStack_80 = uStack_140;
        local_78 = local_138;
        local_68 = local_128;
        uStack_60 = uStack_120;
        local_58 = local_118;
        FUN_147beaea7(local_170,*puVar1,*(undefined4 *)(puVar1 + 1),
                      (int)*(float *)((longlong)puVar1 + 0x4c));
      }
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0x70;
    } while (lVar5 < (int)param_3[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0ef7a FUN_147c0ef7a body=845 status=ok
// SIG undefined FUN_147c0ef7a(void)

void FUN_147c0ef7a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_238 [32];
  undefined4 *local_218;
  undefined8 *local_210;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1e0 = *(longlong *)(param_2 + 0xa8);
  local_1d8 = param_2;
  if (local_1e0 != 0) {
    lVar6 = FUN_14143eef4();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(local_1e0 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_1e0 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) goto LAB_147c0efe6;
  }
  local_1e0 = 0;
LAB_147c0efe6:
  if (0 < (int)param_3[1]) {
    local_1d8 = local_1d8 + 0x6e0;
    local_1d0 = local_1e0 + 0x3d0;
    lVar7 = 4;
    lVar6 = 0;
    do {
      lVar3 = *param_3;
      puVar2 = (undefined4 *)(lVar3 + 0x8c + lVar7);
      local_1f8 = *puVar2;
      uStack_1f4 = puVar2[1];
      uStack_1f0 = puVar2[2];
      uStack_1ec = puVar2[3];
      local_d8 = *(undefined8 *)(lVar3 + 0x7c + lVar7);
      puVar1 = (undefined8 *)(lVar3 + 0x6c + lVar7);
      local_e8 = *puVar1;
      uStack_e0 = puVar1[1];
      local_f8 = *(undefined8 *)(lVar3 + 100 + lVar7);
      puVar1 = (undefined8 *)(lVar3 + 0x54 + lVar7);
      local_108 = *puVar1;
      uStack_100 = puVar1[1];
      local_118 = *(undefined8 *)(lVar3 + 0x34 + lVar7);
      puVar1 = (undefined8 *)(lVar3 + 0x24 + lVar7);
      local_128 = *puVar1;
      uStack_120 = puVar1[1];
      local_138 = *(undefined8 *)(lVar3 + 0x1c + lVar7);
      puVar1 = (undefined8 *)(lVar3 + 0xc + lVar7);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      local_148._0_4_ = (undefined4)uVar4;
      local_148._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_140._0_4_ = (undefined4)uVar5;
      uStack_140._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_c8 = (undefined4)local_148;
      uStack_c4 = local_148._4_4_;
      uStack_c0 = (undefined4)uStack_140;
      uStack_bc = uStack_140._4_4_;
      local_218 = &local_c8;
      local_210 = &local_a8;
      local_208 = &local_88;
      local_200 = &local_68;
      local_148 = uVar4;
      uStack_140 = uVar5;
      local_b8 = local_138;
      local_a8 = local_128;
      uStack_a0 = uStack_120;
      local_98 = local_118;
      local_88 = local_108;
      uStack_80 = uStack_100;
      local_78 = local_f8;
      local_68 = local_e8;
      uStack_60 = uStack_e0;
      local_58 = local_d8;
      FUN_147beaf43(local_1d8,*(undefined8 *)(lVar3 + lVar7),*(undefined4 *)(lVar3 + 8 + lVar7),
                    (int)*(float *)(lVar3 + 0x4c + lVar7));
      if (local_1e0 != 0) {
        puVar1 = (undefined8 *)(lVar7 + lVar3);
        local_1f8 = *(undefined4 *)((longlong)puVar1 + 0x8c);
        uStack_1f4 = *(undefined4 *)(puVar1 + 0x12);
        uStack_1f0 = *(undefined4 *)((longlong)puVar1 + 0x94);
        uStack_1ec = *(undefined4 *)(puVar1 + 0x13);
        local_158 = *(undefined8 *)((longlong)puVar1 + 0x7c);
        local_168 = *(undefined8 *)((longlong)puVar1 + 0x6c);
        uStack_160 = *(undefined8 *)((longlong)puVar1 + 0x74);
        local_178 = *(undefined8 *)((longlong)puVar1 + 100);
        local_188 = *(undefined8 *)((longlong)puVar1 + 0x54);
        uStack_180 = *(undefined8 *)((longlong)puVar1 + 0x5c);
        local_198 = *(undefined8 *)((longlong)puVar1 + 0x34);
        local_1a8 = *(undefined8 *)((longlong)puVar1 + 0x24);
        uStack_1a0 = *(undefined8 *)((longlong)puVar1 + 0x2c);
        local_1b8 = *(undefined8 *)((longlong)puVar1 + 0x1c);
        uVar4 = *(undefined8 *)((longlong)puVar1 + 0xc);
        uVar5 = *(undefined8 *)((longlong)puVar1 + 0x14);
        local_1c8._0_4_ = (undefined4)uVar4;
        local_1c8._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_1c0._0_4_ = (undefined4)uVar5;
        uStack_1c0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_c8 = (undefined4)local_1c8;
        uStack_c4 = local_1c8._4_4_;
        uStack_c0 = (undefined4)uStack_1c0;
        uStack_bc = uStack_1c0._4_4_;
        local_218 = &local_c8;
        local_210 = &local_a8;
        local_208 = &local_88;
        local_200 = &local_68;
        local_1c8 = uVar4;
        uStack_1c0 = uVar5;
        local_b8 = local_1b8;
        local_a8 = local_1a8;
        uStack_a0 = uStack_1a0;
        local_98 = local_198;
        local_88 = local_188;
        uStack_80 = uStack_180;
        local_78 = local_178;
        local_68 = local_168;
        uStack_60 = uStack_160;
        local_58 = local_158;
        FUN_147beaf43(local_1d0,*puVar1,*(undefined4 *)(puVar1 + 1),
                      (int)*(float *)((longlong)puVar1 + 0x4c));
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0xa0;
    } while (lVar6 < (int)param_3[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0f2c8 FUN_147c0f2c8 body=187 status=ok
// SIG undefined FUN_147c0f2c8(void)

void FUN_147c0f2c8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_2 + 0xa8);
  if (lVar3 != 0) {
    lVar2 = FUN_14143eef4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_147c0f30c;
  }
  lVar3 = 0;
LAB_147c0f30c:
  if (0 < (int)param_3[1]) {
    lVar4 = 4;
    lVar2 = 0;
    do {
      lVar1 = *param_3;
      FUN_147beae5f(param_2 + 0x6c0,*(undefined8 *)(lVar1 + lVar4),
                    *(undefined4 *)(lVar1 + 8 + lVar4),*(undefined4 *)(lVar1 + 0x4c + lVar4));
      if (lVar3 != 0) {
        FUN_147beae5f(lVar3 + 0x3b0,*(undefined8 *)(lVar1 + lVar4),
                      *(undefined4 *)(lVar1 + 8 + lVar4),*(undefined4 *)(lVar1 + 0x4c + lVar4));
      }
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x58;
    } while (lVar2 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 147c0f3ae FUN_147c0f3ae body=173 status=ok
// SIG undefined FUN_147c0f3ae(void)

void FUN_147c0f3ae(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar4 + 1U) {
    FUN_14472e0ae(param_1 + 0x10,iVar4);
  }
  lVar6 = param_1 + 0x10;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x90);
  }
  *(undefined8 **)(lVar6 + (longlong)iVar4 * 0x10) = &DAT_14caf6048;
  *(undefined8 *)(lVar6 + 8 + (longlong)iVar4 * 0x10) = 0x800000000;
  lVar5 = DAT_14caf4010;
  lVar6 = *(longlong *)(param_1 + 0x110);
  if (lVar6 != DAT_14caf4010) {
    *(longlong *)(param_1 + 0x110) = DAT_14caf4010;
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if (lVar6 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar6 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
        return;
      }
    }
  }
  return;
}



// FUNCTION 147c0f45c FUN_147c0f45c body=911 status=ok
// SIG undefined FUN_147c0f45c(void)

void FUN_147c0f45c(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  short *psVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined2 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  ulonglong local_48;
  
  uVar4 = DAT_14c9c0de0;
  uVar3 = DAT_14c9c0d80;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar7 = *(undefined8 *)(param_3 + 0x138);
  local_78 = param_4;
  FUN_145fccdfe();
  uVar2 = *(ulonglong *)(param_2 + 0xa0);
  uVar5 = param_2 + 0xa0 + ((longlong)uVar2 >> 0x18);
  if ((uVar2 & 1) == 0) {
    uVar5 = uVar2;
  }
  local_70 = uVar4;
  if (0 < (longlong)*(int *)(param_2 + 0xa8)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(uVar5 + lVar6 * 4) == DAT_14caf3e18) {
        uVar2 = *(ulonglong *)(param_2 + 0xb0);
        uVar5 = param_2 + 0xb0 + ((longlong)uVar2 >> 0x18);
        if ((uVar2 & 1) == 0) {
          uVar5 = uVar2;
        }
        psVar8 = (short *)(uVar5 + lVar6);
        goto LAB_147c0f51c;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)*(int *)(param_2 + 0xa8) * 2 != lVar6);
  }
  psVar8 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147c0f51c:
  if (*psVar8 != -1) {
    FUN_144b11088(param_5,uVar7);
  }
  uVar7 = *(undefined8 *)(param_3 + 0x140);
  FUN_145e39154();
  uVar2 = *(ulonglong *)(param_2 + 0xa0);
  uVar5 = param_2 + 0xa0 + ((longlong)uVar2 >> 0x18);
  if ((uVar2 & 1) == 0) {
    uVar5 = uVar2;
  }
  if (0 < (longlong)*(int *)(param_2 + 0xa8)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(uVar5 + lVar6 * 4) == DAT_14caf3eb0) {
        uVar2 = *(ulonglong *)(param_2 + 0xb0);
        uVar5 = param_2 + 0xb0 + ((longlong)uVar2 >> 0x18);
        if ((uVar2 & 1) == 0) {
          uVar5 = uVar2;
        }
        psVar8 = (short *)(uVar5 + lVar6);
        goto LAB_147c0f5be;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)*(int *)(param_2 + 0xa8) * 2 != lVar6);
  }
  psVar8 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147c0f5be:
  lVar6 = local_78;
  if (*psVar8 != -1) {
    FUN_144b11088(param_5,uVar7);
  }
  uVar7 = local_70;
  lVar6 = *(longlong *)(lVar6 + 0x38);
  uVar1 = *(uint *)(param_1 + 4);
  if (lVar6 == 0) {
    if ((uVar1 & 0xff0000) != 0) {
      lVar6 = *(longlong *)(param_3 + 0x148);
      if (*(longlong *)(param_3 + 0x148) == 0) {
        lVar6 = DAT_14ca94db0;
      }
      FUN_147511800(param_5,lVar6,uVar1 & 0xffff);
    }
    local_54 = 0;
    local_5c = *(undefined4 *)(param_1 + 8);
    local_58 = *(undefined2 *)(param_1 + 0xc);
    FUN_144b13bec(param_5);
  }
  else {
    if ((uVar1 & 0xff0000) != 0) {
      FUN_147511800(param_5,*(undefined8 *)(lVar6 + 0x10),uVar1 & 0xffff);
    }
    local_4c = *(undefined2 *)(param_1 + 0xc);
    local_50 = *(undefined4 *)(param_1 + 8);
    FUN_144b13bec(param_5,&local_50,lVar6 + 8);
    uVar7 = local_70;
  }
  local_88 = *(undefined8 *)(param_3 + 0x150);
  FUN_142ca4114(param_5,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),uVar3);
  local_88 = *(undefined8 *)(param_3 + 0x158);
  FUN_142ca4114(param_5,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),uVar3);
  local_88 = *(undefined8 *)(param_3 + 0x160);
  FUN_142ca4114(param_5,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),uVar3);
  local_88 = DAT_14caf3c48;
  FUN_142ca4114(param_5,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),uVar7);
  local_60 = *(undefined2 *)(param_1 + 0x12);
  local_64 = *(undefined4 *)(param_1 + 0xe);
  FUN_1471da628(param_5,&local_64,param_3 + 0x174);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c0f7ec FUN_147c0f7ec body=250 status=ok
// SIG undefined FUN_147c0f7ec(void)

void FUN_147c0f7ec(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  short *psVar5;
  
  uVar1 = *(undefined8 *)(param_2 + 0x140);
  FUN_145e39154();
  uVar2 = *(ulonglong *)(param_1 + 0xa0);
  uVar3 = param_1 + 0xa0 + ((longlong)uVar2 >> 0x18);
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar4 = 0;
    do {
      if (*(longlong *)(uVar3 + lVar4 * 4) == DAT_14caf3eb0) {
        uVar2 = *(ulonglong *)(param_1 + 0xb0);
        uVar3 = param_1 + 0xb0 + ((longlong)uVar2 >> 0x18);
        if ((uVar2 & 1) == 0) {
          uVar3 = uVar2;
        }
        psVar5 = (short *)(uVar3 + lVar4);
        goto LAB_147c0f871;
      }
      lVar4 = lVar4 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar4);
  }
  psVar5 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147c0f871:
  if (*psVar5 != -1) {
    FUN_144b11088(param_3,uVar1);
    return;
  }
  return;
}



// FUNCTION 147c0f8ee FUN_147c0f8ee body=42 status=ok
// SIG undefined FUN_147c0f8ee(void)

void FUN_147c0f8ee(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147c0f924 FUN_147c0f924 body=96 status=ok
// SIG undefined FUN_147c0f924(void)

undefined8 FUN_147c0f924(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e4712c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caf5378,1);
  return uVar3;
}



// FUNCTION 147c0f984 FUN_147c0f984 body=52 status=ok
// SIG undefined FUN_147c0f984(void)

void FUN_147c0f984(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147c0f9b8 FUN_147c0f9b8 body=42 status=ok
// SIG undefined FUN_147c0f9b8(void)

void FUN_147c0f9b8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147c0f9ee FUN_147c0f9ee body=96 status=ok
// SIG undefined FUN_147c0f9ee(void)

undefined8 FUN_147c0f9ee(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145dc23c4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caf56d8,1);
  return uVar3;
}



// FUNCTION 147c0fa4e FUN_147c0fa4e body=52 status=ok
// SIG undefined FUN_147c0fa4e(void)

void FUN_147c0fa4e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147c0fa82 FUN_147c0fa82 body=42 status=ok
// SIG undefined FUN_147c0fa82(void)

void FUN_147c0fa82(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147c0facc FUN_147c0facc body=96 status=ok
// SIG undefined FUN_147c0facc(void)

undefined8 FUN_147c0facc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145dc23c4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caf56d8,1);
  return uVar3;
}



// FUNCTION 147c0fb2c FUN_147c0fb2c body=52 status=ok
// SIG undefined FUN_147c0fb2c(void)

void FUN_147c0fb2c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147c0fb60 FUN_147c0fb60 body=42 status=ok
// SIG undefined FUN_147c0fb60(void)

void FUN_147c0fb60(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147c0fbaa FUN_147c0fbaa body=96 status=ok
// SIG undefined FUN_147c0fbaa(void)

undefined8 FUN_147c0fbaa(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145dc23c4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caf56d8,1);
  return uVar3;
}



// FUNCTION 147c0fc0a FUN_147c0fc0a body=52 status=ok
// SIG undefined FUN_147c0fc0a(void)

void FUN_147c0fc0a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147c0fc3e FUN_147c0fc3e body=42 status=ok
// SIG undefined FUN_147c0fc3e(void)

void FUN_147c0fc3e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147c0fc74 FUN_147c0fc74 body=39 status=ok
// SIG undefined FUN_147c0fc74(void)

void FUN_147c0fc74(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 147c0fc9c FUN_147c0fc9c body=31 status=ok
// SIG undefined FUN_147c0fc9c(void)

void FUN_147c0fc9c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e26(uVar1);
  return;
}



// FUNCTION 147c0fcbb FUN_147c0fcbb body=239 status=ok
// SIG undefined FUN_147c0fcbb(void)

void FUN_147c0fcbb(void)

{
  undefined8 in_stack_00000028;
  longlong *in_stack_00000030;
  longlong in_stack_00000038;
  longlong in_stack_00000040;
  int in_stack_00000048;
  undefined1 in_stack_00000050;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((in_stack_00000048 == 2) && (*in_stack_00000030 != 0)) {
    local_40 = CONCAT71(local_40._1_7_,in_stack_00000050);
    local_48 = in_stack_00000040;
    local_50 = in_stack_00000030;
    local_58 = in_stack_00000028;
    FUN_1435d08e6();
  }
  else {
    if (in_stack_00000038 == 0 || in_stack_00000048 != 1) {
      local_50 = &local_30;
      local_30 = 0;
      local_40 = CONCAT71(local_40._1_7_,in_stack_00000050);
      local_48 = in_stack_00000040;
      local_58 = in_stack_00000028;
      FUN_1435d1c6b();
      if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    local_38 = in_stack_00000050;
    local_40 = in_stack_00000040;
    local_48 = in_stack_00000038;
    local_50 = in_stack_00000030;
    local_58 = in_stack_00000028;
    FUN_1435d127b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
}



// FUNCTION 147c0fdac FUN_147c0fdac body=42 status=ok
// SIG undefined FUN_147c0fdac(void)

void FUN_147c0fdac(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147c0fde2 FUN_147c0fde2 body=39 status=ok
// SIG undefined FUN_147c0fde2(void)

void FUN_147c0fde2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 147c0fe0a FUN_147c0fe0a body=31 status=ok
// SIG undefined FUN_147c0fe0a(void)

void FUN_147c0fe0a(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e26(uVar1);
  return;
}



// FUNCTION 147c0fe2a FUN_147c0fe2a body=42 status=ok
// SIG undefined FUN_147c0fe2a(void)

void FUN_147c0fe2a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147c0fe60 FUN_147c0fe60 body=39 status=ok
// SIG undefined FUN_147c0fe60(void)

void FUN_147c0fe60(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 147c0fe88 FUN_147c0fe88 body=31 status=ok
// SIG undefined FUN_147c0fe88(void)

void FUN_147c0fe88(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e26(uVar1);
  return;
}



// FUNCTION 147c0fea8 FUN_147c0fea8 body=42 status=ok
// SIG undefined FUN_147c0fea8(void)

void FUN_147c0fea8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147c0fede FUN_147c0fede body=39 status=ok
// SIG undefined FUN_147c0fede(void)

void FUN_147c0fede(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 147c0ff06 FUN_147c0ff06 body=31 status=ok
// SIG undefined FUN_147c0ff06(void)

void FUN_147c0ff06(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e26(uVar1);
  return;
}



// FUNCTION 147c0ff26 FUN_147c0ff26 body=42 status=ok
// SIG undefined FUN_147c0ff26(void)

void FUN_147c0ff26(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147c0ff5c FUN_147c0ff5c body=96 status=ok
// SIG undefined FUN_147c0ff5c(void)

undefined8 FUN_147c0ff5c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f947d2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caf5400,1);
  return uVar3;
}



// FUNCTION 147c0ffbc FUN_147c0ffbc body=52 status=ok
// SIG undefined FUN_147c0ffbc(void)

void FUN_147c0ffbc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147c0fff0 FUN_147c0fff0 body=42 status=ok
// SIG undefined FUN_147c0fff0(void)

void FUN_147c0fff0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147c10026 FUN_147c10026 body=96 status=ok
// SIG undefined FUN_147c10026(void)

undefined8 FUN_147c10026(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e9a688();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caf5488,1);
  return uVar3;
}



// FUNCTION 147c10086 FUN_147c10086 body=52 status=ok
// SIG undefined FUN_147c10086(void)

void FUN_147c10086(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147c100ba FUN_147c100ba body=42 status=ok
// SIG undefined FUN_147c100ba(void)

void FUN_147c100ba(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147c10104 FUN_147c10104 body=96 status=ok
// SIG undefined FUN_147c10104(void)

undefined8 FUN_147c10104(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f5c626();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caf5510,1);
  return uVar3;
}



// FUNCTION 147c10164 FUN_147c10164 body=52 status=ok
// SIG undefined FUN_147c10164(void)

void FUN_147c10164(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147c10198 FUN_147c10198 body=340 status=ok
// SIG undefined FUN_147c10198(void)

longlong FUN_147c10198(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    *(undefined4 *)(param_1 + 8 + lVar3) = 0xffffffff;
    *(undefined2 *)(param_1 + 0xc + lVar3) = 0x105;
    *(undefined1 *)(param_1 + 0xe + lVar3) = 0;
    *(undefined ***)(param_1 + lVar3) = &PTR_FUN_14aa03a50;
    *(wchar_t **)(param_1 + 0x10 + lVar3) = L"FParticleStatePosition";
    *(wchar_t **)(param_1 + 0x18 + lVar3) = L"FParticleStateVelocity";
    *(undefined4 *)(param_1 + 0x34 + lVar3) = 0;
    puVar1 = (undefined8 *)(param_1 + 0x20 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar3 = lVar3 + 0x40;
  } while (lVar3 != 0x80);
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x8c) = 0x105;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(undefined ***)(param_1 + 0x80) = &PTR_FUN_14aa03ae0;
  *(wchar_t **)(param_1 + 0x90) = L"FParticleAttributesTexture";
  *(undefined8 *)(param_1 + 0x98) = 0;
  uVar2 = DAT_14c967818;
  *(undefined8 *)(param_1 + 0xa0) = DAT_14c967818;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xb4) = 0x105;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  *(undefined ***)(param_1 + 0xa8) = &PTR_FUN_14aa03ae0;
  *(wchar_t **)(param_1 + 0xb8) = L"FParticleAttributesTexture";
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = uVar2;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd4) = DAT_14c846330;
  *(undefined4 *)(param_1 + 0xdc) = DAT_14c846338;
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x120));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x120),4000);
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  return param_1;
}



// FUNCTION 147c102ec FUN_147c102ec body=126 status=ok
// SIG undefined FUN_147c102ec(void)

void FUN_147c102ec(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  byte param_5,undefined8 param_6,undefined8 param_7)

{
  if ((param_5 & 1) != 0) {
    FUN_1435eabda(param_2,param_6,param_7,
                  *(undefined8 *)
                   (*(longlong *)(param_1 + 0xa0) + 0x20 +
                   (longlong)
                   (int)((uint)(0.0 < *(float *)(DAT_14caf3da0 + 4)) ^
                        *(uint *)(*(longlong *)(param_1 + 0xa0) + 0xd0)) * 0x40),param_1 + 0xb8,
                  *(undefined4 *)(param_1 + 0xa8),param_3);
  }
  return;
}



// FUNCTION 147c1036a FUN_147c1036a body=148 status=ok
// SIG undefined FUN_147c1036a(void)

void FUN_147c1036a(longlong param_1,undefined8 param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0xa0);
  if ((*(char *)(lVar3 + 0x110) == '\x01') && (*(char *)(lVar3 + 0xf8) == '\x01')) {
    FUN_147c23cec(lVar3);
    *(undefined1 *)(lVar3 + 0xf8) = 0;
  }
  if (param_3 != '\0') {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xa0) + 0xd0);
    *puVar1 = *puVar1 ^ 1;
  }
  iVar2 = *(int *)(param_1 + 0xc4);
  FUN_147c0bb0f(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if ((iVar2 < 0) && (*(int *)(param_1 + 0xc4) != 0)) {
    FUN_147c2881e(param_1 + 0xb8);
    return;
  }
  return;
}



// FUNCTION 147c103fe FUN_147c103fe body=254 status=ok
// SIG undefined FUN_147c103fe(void)

undefined8 FUN_147c103fe(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_1 + 0x68;
  local_30 = 0x100000000;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1449c0562(&local_30);
  }
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  local_58 = (longlong *)(param_1 + 0x58);
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar1 = *(longlong *)(*local_58 + (longlong)iStack_3c * 8);
      if ((*(int *)(lVar1 + 0x304) == 1) && (0 < *(int *)(lVar1 + 0x2c))) {
        uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
        goto LAB_147c104dc;
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  uVar2 = 0;
LAB_147c104dc:
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c104fe FUN_147c104fe body=254 status=ok
// SIG undefined FUN_147c104fe(void)

undefined8 FUN_147c104fe(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  longlong local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_1 + 0x68;
  local_30 = 0x100000000;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1449c0562(&local_30);
  }
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  local_58 = (longlong *)(param_1 + 0x58);
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      lVar1 = *(longlong *)(*local_58 + (longlong)iStack_3c * 8);
      if ((*(int *)(lVar1 + 0x304) == 2) && (0 < *(int *)(lVar1 + 0x2c))) {
        uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
        goto LAB_147c105dc;
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  uVar2 = 0;
LAB_147c105dc:
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c10606 FUN_147c10606 body=234 status=ok
// SIG undefined FUN_147c10606(void)

void FUN_147c10606(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined4 local_90;
  char local_88 [16];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 0xa0);
  lVar2 = (longlong)*(int *)(lVar1 + 0xd0) * 0x40;
  local_78 = *(undefined8 *)(lVar1 + 0x20 + lVar2);
  local_98 = local_88;
  local_88[0] = -1;
  local_88[1] = -1;
  local_88[2] = -1;
  local_88[3] = -1;
  local_88[4] = -1;
  local_88[5] = -1;
  local_88[6] = -1;
  local_88[7] = -1;
  local_88[8] = -1;
  local_88[9] = -1;
  local_88[10] = -1;
  local_88[0xb] = -1;
  local_70 = 1;
  local_6c = 0x100000000070;
  local_64 = 0;
  local_58 = 0;
  local_40 = *(undefined8 *)(lVar1 + 0x28 + lVar2);
  local_50 = 0xffffffffffffffff;
  local_48 = 0xffffffff;
  local_38 = 1;
  local_34 = 0x100000000070;
  local_2c = 0;
  local_20 = 0;
  local_90 = 2;
  FUN_144760590(param_2,&local_98,0);
  lVar1 = 0x68;
  do {
    if (local_88[lVar1] == '\x01') {
      local_88[lVar1] = '\0';
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != -8);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c106f2 FUN_147c106f2 body=193 status=ok
// SIG undefined FUN_147c106f2(void)

void FUN_147c106f2(longlong param_1,uint param_2,undefined8 *param_3,undefined1 param_4)

{
  longlong lVar1;
  
  lVar1 = 0x15;
  do {
    *(undefined1 (*) [16])(param_1 + -0x15 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1 + -5 + lVar1) = 0xffffffff;
    *(undefined2 *)(param_1 + -1 + lVar1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xd5);
  lVar1 = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined1 (*) [16])(param_1 + 0xc0) = (undefined1  [16])0x0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  do {
    *(undefined8 *)(param_1 + lVar1) = *param_3;
    *(undefined4 *)(param_1 + 0x10 + lVar1) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x15 + lVar1) = param_4;
    lVar1 = lVar1 + 0x18;
    param_3 = param_3 + 1;
  } while ((ulonglong)param_2 * 0x18 != lVar1);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined1 (*) [16])(param_1 + 0xc0) = (undefined1  [16])0x0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  return;
}



// FUNCTION 147c107b4 FUN_147c107b4 body=111 status=ok
// SIG undefined FUN_147c107b4(void)

longlong FUN_147c107b4(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 147c10824 FUN_147c10824 body=68 status=ok
// SIG undefined FUN_147c10824(void)

void FUN_147c10824(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_147c2884e(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_147c288d0(param_1,param_2);
  return;
}



// FUNCTION 147c1086a FUN_147c1086a body=96 status=ok
// SIG undefined FUN_147c1086a(void)

void FUN_147c1086a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_147c26600(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x4c + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x4c)
    ;
    return;
  }
  return;
}



// FUNCTION 147c108ca FUN_147c108ca body=62 status=ok
// SIG undefined FUN_147c108ca(void)

void FUN_147c108ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar1 = param_1;
  }
  FUN_142d62ffc(lVar1,*(undefined4 *)(param_1 + 0x128));
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147c10908 FUN_147c10908 body=310 status=ok
// SIG undefined FUN_147c10908(void)

undefined8 * FUN_147c10908(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_147bf5ae4();
  *param_1 = &PTR_FUN_14aa03cf0;
  param_1[0x4f] = 0;
  param_1[0x50] = param_2;
  param_1[0x51] = param_3;
  param_1[0x57] = 0;
  param_1[0x58] = 0x8000000000;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  uVar2 = DAT_14c846500;
  param_1[99] = DAT_14c8464f8;
  param_1[100] = uVar2;
  param_1[0x65] = DAT_14c846508;
  *(uint *)(param_1 + 0x66) = 0;
  *(uint *)((longlong)param_1 + 0x334) = 0;
  *(uint *)(param_1 + 0x67) = 0;
  *(uint *)((longlong)param_1 + 0x33c) = 0xffffffff;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  lVar3 = FUN_14001cc68(800,0x10);
  FUN_147c247a0(lVar3);
  param_1[0x52] = lVar3;
  plVar1 = *(longlong **)(param_1[0x51] + 0x30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a0))(plVar1,lVar3 + 0xf0,0);
    lVar3 = param_1[0x52];
  }
  *(byte *)(lVar3 + 0x308) = *(byte *)(param_3 + 0x208) & 1;
  *(uint *)(param_1[0x52] + 0x30c) = (uint)*(byte *)(param_3 + 0x20c);
  *(undefined8 *)param_1[0x52] = param_2;
  return param_1;
}



// FUNCTION 147c10a3e FUN_147c10a3e body=92 status=ok
// SIG undefined FUN_147c10a3e(void)

undefined8 * FUN_147c10a3e(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14aa04240;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  FUN_147c26cfa(param_1 + 8);
  FUN_147c26d2c(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x42) = 0;
  return param_1;
}



// FUNCTION 147c10a9e FUN_147c10a9e body=62 status=ok
// SIG undefined FUN_147c10a9e(void)

void FUN_147c10a9e(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    *(uint *)(param_2 + 0x20) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x24) < iVar1 + 1U) {
      FUN_147c0c860((longlong *)(param_2 + 0x18),iVar1);
    }
    *(longlong *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 147c10af2 FUN_147c10af2 body=662 status=ok
// SIG undefined FUN_147c10af2(void)

void FUN_147c10af2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = *(longlong *)(param_1 + 0x10);
  if (local_78 == 0) {
    local_70 = (longlong *)0x0;
  }
  else {
    local_70 = *(longlong **)(local_78 + 0x50);
  }
  local_68 = 0xffffffff;
  local_64 = 0x101;
  local_62 = 0;
  FUN_144a2daf0(&local_78);
  if (local_70 != (longlong *)0x0) {
    do {
      plVar2 = local_70;
      lVar5 = FUN_1446dcc8c();
      lVar6 = plVar2[1];
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar7 = lVar6 != 0;
        if (lVar6 != lVar5 && bVar7) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar7 = lVar6 != 0;
            if (lVar6 == lVar5) break;
          } while (lVar6 != 0);
        }
        if (bVar7) goto LAB_147c10b91;
LAB_147c10ca1:
        lVar5 = FUN_1446f4b16();
        lVar6 = plVar2[1];
        if (*(ulonglong *)(lVar5 + 8) == 0) {
          bVar7 = lVar6 != 0;
          if (lVar6 != lVar5 && bVar7) {
            do {
              lVar6 = *(longlong *)(lVar6 + 0x30);
              bVar7 = lVar6 != 0;
              if (lVar6 == lVar5) break;
            } while (lVar6 != 0);
          }
          if (bVar7) {
LAB_147c10cba:
            lVar6 = FUN_14121bf02();
            if ((plVar2[0xe] == lVar6) || (lVar6 = FUN_1458f0da8(), plVar2[0xe] == lVar6)) {
              lVar6 = (**(code **)(*plVar2 + 0x210))
                                (plVar2,*(int *)((longlong)plVar2 + 0x44) + param_1);
              goto LAB_147c10b9c;
            }
          }
        }
        else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0)
        goto LAB_147c10cba;
      }
      else {
        if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) == 0) goto LAB_147c10ca1;
LAB_147c10b91:
        lVar6 = FUN_147a77456(plVar2,param_1);
LAB_147c10b9c:
        if (lVar6 != 0) {
          iVar3 = (int)param_2[1];
          lVar5 = (longlong)iVar3;
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_147c0c128(param_2,iVar3);
          }
          lVar4 = *param_2;
          puVar1 = (undefined8 *)(lVar4 + lVar5 * 0x18);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar4 + 0x10 + lVar5 * 0x18) = 0;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar6);
          }
          plVar2 = (longlong *)(lVar4 + lVar5 * 0x18);
          plVar2[2] = lVar6;
          if (local_70 == (longlong *)0x0) {
            FUN_140056680(&local_88,&DAT_149e01fe8);
          }
          else {
            FUN_1400021e4(local_70 + 4,&local_88);
          }
          if (plVar2 != &local_88) {
            if (*plVar2 != 0) {
              FUN_1400020a8();
            }
            *plVar2 = local_88;
            local_88 = 0;
            *(undefined4 *)(plVar2 + 1) = (undefined4)local_80;
            *(undefined4 *)((longlong)plVar2 + 0xc) = local_80._4_4_;
            local_80 = 0;
          }
          if (local_88 != 0) {
            FUN_1400020a8();
          }
        }
      }
      local_70 = (longlong *)local_70[3];
      FUN_144a2daf0(&local_78);
    } while (local_70 != (longlong *)0x0);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c10d8e FUN_147c10d8e body=805 status=ok
// SIG undefined FUN_147c10d8e(void)

void FUN_147c10d8e(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_81;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = param_1[2];
  if (local_60 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = *(longlong *)(local_60 + 0x50);
  }
  local_50 = 0xffffffff;
  local_4c = 0x101;
  local_4a = 0;
  FUN_1417ba192(&local_60);
  if (local_58 != 0) {
    plVar8 = (longlong *)(param_2 + 0x6a0);
    do {
      plVar6 = (longlong *)FUN_147a77456();
      if (plVar6 != (longlong *)0x0) {
        lVar13 = FUN_145b3be86();
        if ((*(int *)(plVar6[2] + 0x38) < *(int *)(lVar13 + 0x38)) ||
           (plVar12 = plVar6,
           *(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
           lVar13 + 0x30)) {
          plVar12 = (longlong *)0x0;
        }
        lVar13 = FUN_145b3c22e();
        if ((*(int *)(plVar6[2] + 0x38) < *(int *)(lVar13 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
            != lVar13 + 0x30)) {
          if (plVar12 != (longlong *)0x0) {
            plVar6 = (longlong *)0x0;
            goto LAB_147c10e8d;
          }
        }
        else {
          if (plVar12 == (longlong *)0x0) {
            plVar7 = plVar6 + 0xb;
            uVar11 = 3;
            bVar4 = true;
          }
          else {
LAB_147c10e8d:
            plVar7 = plVar12 + 8;
            uVar11 = 1;
            bVar4 = false;
          }
          lVar13 = *plVar7;
          lVar10 = (longlong)*(int *)(param_2 + 0x6a8);
          if (0 < lVar10) {
            lVar9 = 0;
            do {
              if (*(longlong *)(*plVar8 + lVar9) == lVar13) goto LAB_147c10e11;
              lVar9 = lVar9 + 0xe0;
            } while (lVar10 * 0xe0 - lVar9 != 0);
          }
          uVar5 = *(int *)(param_2 + 0x6a8) + 1;
          *(uint *)(param_2 + 0x6a8) = uVar5;
          local_81 = uVar11;
          local_80 = param_2;
          if (*(uint *)(param_2 + 0x6ac) < uVar5) {
            FUN_147c0c1bc(plVar8);
          }
          lVar10 = lVar10 * 0xe0;
          memset((void *)(*plVar8 + lVar10),0,0xe0);
          *(longlong *)(*plVar8 + lVar10) = lVar13;
          *(undefined1 *)(*plVar8 + 8 + lVar10) = local_81;
          *(undefined8 *)(*plVar8 + 0x50 + lVar10) = 0;
          if (bVar4) {
            local_90 = 0;
            local_98 = 0;
            (**(code **)(*plVar6 + 0x2c0))(plVar6,&local_78,0,0);
            lVar13 = *plVar8;
            *(undefined8 *)(lVar13 + 0x28 + lVar10) = local_68;
            puVar1 = (undefined8 *)(lVar13 + 0x18 + lVar10);
            *puVar1 = local_78;
            puVar1[1] = uStack_70;
            lVar13 = *plVar8;
            *(longlong *)(lVar13 + 0x40 + lVar10) = plVar6[0x14];
            uVar14 = *(undefined4 *)((longlong)plVar6 + 0x94);
            lVar9 = plVar6[0x13];
            uVar3 = *(undefined4 *)((longlong)plVar6 + 0x9c);
            puVar2 = (undefined4 *)(lVar13 + 0x30 + lVar10);
            *puVar2 = (int)plVar6[0x12];
            puVar2[1] = uVar14;
            puVar2[2] = (int)lVar9;
            puVar2[3] = uVar3;
            param_2 = local_80;
          }
          else {
            uVar14 = (**(code **)(*plVar12 + 0x2c0))(plVar12,0,0,0);
            *(undefined4 *)(*plVar8 + 0xc + lVar10) = uVar14;
            *(int *)(*plVar8 + 0x10 + lVar10) = (int)plVar12[10];
            param_2 = local_80;
          }
        }
      }
LAB_147c10e11:
      local_58 = *(longlong *)(local_58 + 0x18);
      FUN_1417ba192(&local_60);
    } while (local_58 != 0);
  }
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x370))(param_1);
  if ((plVar8 != (longlong *)0x0) && (*plVar8 != 0)) {
    plVar6 = (longlong *)(param_2 + 0x6a0);
    lVar13 = (longlong)*(int *)(param_2 + 0x6a8);
    if (0 < lVar13) {
      lVar10 = 0;
      do {
        if (*(longlong *)(*plVar6 + lVar10) == *plVar8) goto LAB_147c11069;
        lVar10 = lVar10 + 0xe0;
      } while (lVar13 * 0xe0 - lVar10 != 0);
    }
    uVar5 = *(int *)(param_2 + 0x6a8) + 1;
    *(uint *)(param_2 + 0x6a8) = uVar5;
    if (*(uint *)(param_2 + 0x6ac) < uVar5) {
      FUN_147c0c1bc(plVar6);
    }
    lVar13 = lVar13 * 0xe0;
    memset((void *)(*plVar6 + lVar13),0,0xe0);
    *(longlong *)(*plVar6 + lVar13) = *plVar8;
    *(undefined1 *)(*plVar6 + 8 + lVar13) = 1;
  }
LAB_147c11069:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147c110ce FUN_147c110ce body=1679 status=ok
// SIG undefined FUN_147c110ce(void)

/* WARNING: Removing unreachable block (ram,0x000147c11322) */

void FUN_147c110ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined2 *puVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  int iVar14;
  wchar_t *pwVar15;
  undefined1 auStack_148 [32];
  wchar_t *local_128;
  double local_120;
  double local_118;
  wchar_t *local_110;
  double local_108;
  undefined2 *local_f8;
  int local_f0;
  undefined2 *local_e8;
  ulonglong uStack_e0;
  undefined2 *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_c8 = *(longlong *)(param_1 + 0x10);
  if (local_c8 == 0) {
    local_c0 = 0;
  }
  else {
    local_c0 = *(longlong *)(local_c8 + 0x50);
  }
  local_b8 = 0xffffffff;
  local_b4 = 0x101;
  local_b2 = 0;
  FUN_1417ba192(&local_c8);
  if (local_c0 != 0) {
    iVar14 = 0;
    do {
      lVar8 = FUN_147a77456(local_c0,param_1);
      if (lVar8 != 0) {
        lVar9 = FUN_145b3be86();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
           (lVar13 = lVar8,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) {
          lVar13 = 0;
        }
        lVar9 = FUN_145b3c22e();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) {
          if (lVar13 != 0) goto LAB_147c1121e;
        }
        else {
          if (lVar13 == 0) {
            local_d8 = (undefined2 *)0x0;
            uStack_d0 = 0;
            FUN_1400021e4(lVar8 + 0x58,&local_f8);
            puVar11 = &DAT_149dfb77a;
            if (local_f0 != 0) {
              puVar11 = local_f8;
            }
            FUN_140002266(&local_e8,L"VECTOR: %32s - ",puVar11);
            if (local_d8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            local_d8 = local_e8;
            uStack_d0 = uStack_e0;
            local_e8 = (undefined2 *)0x0;
            uStack_e0 = 0;
            if (local_f8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            local_128 = *(wchar_t **)(lVar8 + 0x70);
            FUN_140002266(&local_e8,L"MinIn %10.5f,%10.5f,%10.5f, ",*(undefined8 *)(lVar8 + 0x60),
                          *(undefined8 *)(lVar8 + 0x68));
            iVar10 = (int)uStack_e0 + -1;
            if ((int)uStack_e0 == 0) {
              iVar10 = iVar14;
            }
            FUN_1400020e8(&local_d8,local_e8,iVar10);
            if (local_e8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            local_128 = *(wchar_t **)(lVar8 + 0x88);
            FUN_140002266(&local_e8,L"MaxIn %10.5f,%10.5f,%10.5f, ",*(undefined8 *)(lVar8 + 0x78),
                          *(undefined8 *)(lVar8 + 0x80));
            iVar10 = (int)uStack_e0 + -1;
            if ((int)uStack_e0 == 0) {
              iVar10 = iVar14;
            }
            FUN_1400020e8(&local_d8,local_e8,iVar10);
            if (local_e8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            local_128 = *(wchar_t **)(lVar8 + 0xa0);
            FUN_140002266(&local_e8,L"MinOut %10.5f,%10.5f,%10.5f, ",*(undefined8 *)(lVar8 + 0x90),
                          *(undefined8 *)(lVar8 + 0x98));
            iVar10 = (int)uStack_e0 + -1;
            if ((int)uStack_e0 == 0) {
              iVar10 = iVar14;
            }
            FUN_1400020e8(&local_d8,local_e8,iVar10);
            if (local_e8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            local_128 = *(wchar_t **)(lVar8 + 0xb8);
            FUN_140002266(&local_e8,L"MaxOut %10.5f,%10.5f,%10.5f, ",*(undefined8 *)(lVar8 + 0xa8),
                          *(undefined8 *)(lVar8 + 0xb0));
            iVar10 = (int)uStack_e0 + -1;
            if ((int)uStack_e0 == 0) {
              iVar10 = iVar14;
            }
            FUN_1400020e8(&local_d8,local_e8,iVar10);
            if (local_e8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            cVar7 = *(char *)(lVar8 + 0xc2);
            local_128 = L"Normal";
            if (cVar7 != '\0') {
              if (cVar7 == '\x01') {
                local_128 = L"Absolute";
              }
              else {
                local_128 = L"????";
                if (cVar7 == '\x02') {
                  local_128 = L"Direct";
                }
              }
            }
            cVar7 = *(char *)(lVar8 + 0xc1);
            pwVar15 = L"Normal";
            if (cVar7 != '\0') {
              if (cVar7 == '\x01') {
                pwVar15 = L"Absolute";
              }
              else {
                pwVar15 = L"????";
                if (cVar7 == '\x02') {
                  pwVar15 = L"Direct";
                }
              }
            }
            cVar7 = *(char *)(lVar8 + 0xc0);
            pwVar12 = L"Normal";
            if (cVar7 != '\0') {
              if (cVar7 == '\x01') {
                pwVar12 = L"Absolute";
              }
              else {
                pwVar12 = L"????";
                if (cVar7 == '\x02') {
                  pwVar12 = L"Direct";
                }
              }
            }
            FUN_140002266(&local_e8,L"Mode %10s,%10s,%10s, ",pwVar12,pwVar15);
            iVar10 = (int)uStack_e0 + -1;
            if ((int)uStack_e0 == 0) {
              iVar10 = iVar14;
            }
            FUN_1400020e8(&local_d8,local_e8,iVar10);
            if (local_e8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            local_128 = *(wchar_t **)(lVar8 + 0x48);
            FUN_140002266(&local_e8,L"Constant %10.5f,%10.5f,%10.5f\n",*(undefined8 *)(lVar8 + 0x38)
                          ,*(undefined8 *)(lVar8 + 0x40));
            iVar10 = (int)uStack_e0 + -1;
            if ((int)uStack_e0 == 0) {
              iVar10 = iVar14;
            }
            FUN_1400020e8(&local_d8,local_e8,iVar10);
            if (local_e8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            iVar10 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar10 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar10 + 1U) {
              FUN_1447a1bd6(param_2,iVar10);
            }
            puVar11 = local_d8;
            lVar8 = *param_2;
            lVar13 = (longlong)iVar10 * 0x10;
            puVar1 = (undefined8 *)(lVar8 + lVar13);
            *(undefined8 *)(lVar8 + lVar13) = 0;
            lVar9 = (longlong)(int)uStack_d0;
            *(int *)(lVar8 + 8 + lVar13) = (int)uStack_d0;
            if (lVar9 == 0) {
              *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(puVar1,uStack_d0 & 0xffffffff,0);
              memcpy((void *)*puVar1,puVar11,lVar9 * 2);
              puVar11 = local_d8;
            }
          }
          else {
LAB_147c1121e:
            cVar7 = *(char *)(lVar13 + 0x58);
            pwVar15 = L"Normal";
            if (cVar7 != '\0') {
              if (cVar7 == '\x01') {
                pwVar15 = L"Absolute";
              }
              else {
                pwVar15 = L"????";
                if (cVar7 == '\x02') {
                  pwVar15 = L"Direct";
                }
              }
            }
            fVar2 = *(float *)(lVar13 + 0x54);
            fVar3 = *(float *)(lVar13 + 0x50);
            fVar4 = *(float *)(lVar13 + 0x4c);
            fVar5 = *(float *)(lVar13 + 0x38);
            fVar6 = *(float *)(lVar13 + 0x48);
            FUN_1400021e4(lVar13 + 0x40,&local_e8);
            puVar11 = &DAT_149dfb77a;
            if ((int)uStack_e0 != 0) {
              puVar11 = local_e8;
            }
            local_108 = (double)fVar5;
            local_128 = (wchar_t *)(double)fVar4;
            local_120 = (double)fVar3;
            local_118 = (double)fVar2;
            local_110 = pwVar15;
            FUN_140002266(&local_d8,
                          L"float : %32s - MinIn %10.5f, MaxIn %10.5f, MinOut %10.5f, MaxOut %10.5f, Mode %10s, Constant %10.5f\n"
                          ,puVar11,(double)fVar6);
            iVar10 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar10 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar10 + 1U) {
              FUN_1447a1bd6(param_2,iVar10);
            }
            lVar8 = *param_2;
            lVar9 = (longlong)iVar10 * 0x10;
            *(undefined8 *)(lVar8 + lVar9) = 0;
            *(undefined2 **)(lVar8 + lVar9) = local_d8;
            local_d8 = (undefined2 *)0x0;
            *(int *)(lVar8 + 8 + lVar9) = (int)uStack_d0;
            *(undefined4 *)(lVar8 + 0xc + lVar9) = uStack_d0._4_4_;
            uStack_d0 = 0;
            puVar11 = local_e8;
          }
          if (puVar11 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      local_c0 = *(longlong *)(local_c0 + 0x18);
      FUN_1417ba192(&local_c8);
    } while (local_c0 != 0);
  }
  if ((local_b0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c1175e FUN_147c1175e body=346 status=ok
// SIG undefined FUN_147c1175e(void)

undefined8 FUN_147c1175e(longlong param_1,longlong param_2,int *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [36];
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = 0xffffffff;
  if (((param_2 == 0) || (param_3 == (int *)0x0)) || (*(longlong *)(param_2 + 0x10) == 0))
  goto LAB_147c1186b;
  param_3[0] = 0;
  param_3[1] = 0;
  if ((*(byte *)(param_4 + 1) & 1) == 0) {
LAB_147c117f8:
    iVar2 = *(int *)(param_4 + 3);
    if (0 < iVar2) {
      uVar5 = 0;
      if ((*(byte *)(param_4 + 1) & 8) == 0) {
        lVar3 = 0;
      }
      else {
        uVar4 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x8f4) * 0xbb38435 + 0x3619636b;
        *(uint *)(*(longlong *)(param_2 + 0x10) + 0x8f4) = uVar4;
        lVar3 = (longlong)(int)((float)iVar2 * ((float)(uVar4 >> 9 | 0x3f800000) + -1.0));
      }
      iVar2 = *(int *)(param_4[2] + lVar3 * 4);
      *param_3 = iVar2;
      param_3[1] = iVar2;
      goto LAB_147c1186b;
    }
    if (DAT_14c846538 != '\x01') goto LAB_147c1186b;
    FUN_140e70c9e(param_3,*(undefined8 *)(param_1 + 0x18));
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0xb40))
                      (*(longlong **)(param_2 + 0x10),*param_4,&local_34);
    if (cVar1 == '\0') goto LAB_147c117f8;
    if ((*(byte *)(param_4 + 1) & 2) == 0) {
      iVar2 = (int)ROUND(local_34 + local_34 + 0.5) >> 1;
    }
    else {
      if (*(int *)(param_4 + 3) < 1) {
        uVar5 = 0xffffffff;
        goto LAB_147c1186b;
      }
      iVar2 = *(int *)(param_4 + 3) + -1;
      if ((int)local_34 <= iVar2) {
        iVar2 = (int)local_34;
      }
      iVar2 = *(int *)(param_4[2] + (longlong)iVar2 * 4);
    }
    *param_3 = iVar2;
    param_3[1] = iVar2;
  }
  uVar5 = 0;
LAB_147c1186b:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147c118ba FUN_147c118ba body=133 status=ok
// SIG undefined FUN_147c118ba(void)

undefined8 FUN_147c118ba(longlong *param_1,int param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar3 = (**(code **)(*param_1 + 0x370))();
  lVar4 = 0;
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x10);
    iVar2 = *(int *)(lVar3 + 0x18);
    if (iVar2 <= param_2) {
      uVar5 = (param_2 - iVar2) + 1;
      *(int *)(lVar3 + 0x18) = param_2 + 1;
      if ((uint)(*(int *)(lVar3 + 0x1c) - iVar2) < uVar5) {
        FUN_1446f48e2(plVar1);
      }
      memset((void *)((longlong)iVar2 * 4 + *plVar1),0,(longlong)(int)uVar5 << 2);
    }
    lVar4 = *plVar1;
    *(undefined4 *)(lVar4 + (longlong)param_2 * 4) = param_3;
  }
  return CONCAT71((int7)((ulonglong)lVar4 >> 8),lVar3 != 0);
}



// FUNCTION 147c11940 FUN_147c11940 body=283 status=ok
// SIG undefined FUN_147c11940(void)

undefined8 FUN_147c11940(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar3 = FUN_1405842b6();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (0 < *(int *)(lVar1 + 0x68))) {
      lVar3 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x60) + lVar3 * 8);
        if ((lVar2 != 0) && (0 < (longlong)*(int *)(lVar2 + 0x48))) {
          uVar5 = 0;
          bVar6 = false;
          do {
            lVar4 = (*(longlong **)(lVar2 + 0x40))[uVar5];
            if (lVar4 != 0) {
              if (*(longlong *)(lVar4 + 0x30) == param_1) goto LAB_147c11a0e;
              if ((0 < (longlong)*(int *)(lVar4 + 0x40)) && (!bVar6)) {
                uVar7 = 1;
                do {
                  if (*(longlong *)(*(longlong *)(lVar4 + 0x38) + -8 + uVar7 * 8) == param_1) {
                    bVar6 = true;
                  }
                } while ((uVar7 < (ulonglong)(longlong)*(int *)(lVar4 + 0x40)) &&
                        (uVar7 = uVar7 + 1, !bVar6));
              }
            }
            uVar5 = uVar5 + 1;
          } while ((uVar5 < (ulonglong)(longlong)*(int *)(lVar2 + 0x48)) && (!bVar6));
          if (bVar6) {
LAB_147c11a0e:
            lVar2 = **(longlong **)(lVar2 + 0x40);
            if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x48), lVar2 != 0)) {
              lVar4 = FUN_145b5180a();
              lVar2 = *(longlong *)(lVar2 + 0x10);
              if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
                 (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
                  == lVar4 + 0x30)) {
                return CONCAT71((int7)((ulonglong)(lVar4 + 0x30) >> 8),1);
              }
            }
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(lVar1 + 0x68));
    }
  }
  return 0;
}



// FUNCTION 147c11a5c FUN_147c11a5c body=39 status=ok
// SIG undefined FUN_147c11a5c(void)

longlong FUN_147c11a5c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147c05556(param_2,param_1);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_2 + 0x10) + 0x8f0;
  }
  return lVar1;
}


