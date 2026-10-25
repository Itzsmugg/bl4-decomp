// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144e66d30 FUN_144e66d30 body=60 status=ok
// SIG undefined FUN_144e66d30(void)

undefined8 * FUN_144e66d30(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = std::range_error::vftable;
  return param_1;
}



// FUNCTION 144e66d70 FUN_144e66d70 body=66 status=ok
// SIG undefined FUN_144e66d70(void)

undefined8 * FUN_144e66d70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::exception::vftable;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144e66dc0 FUN_144e66dc0 body=34 status=ok
// SIG undefined FUN_144e66dc0(void)

void FUN_144e66dc0(undefined8 param_1)

{
  undefined1 local_28 [40];
  
  FUN_144e66cc0(local_28,param_1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_28,(ThrowInfo *)&DAT_14c6d54b0);
}



// FUNCTION 144e66df0 FUN_144e66df0 body=257 status=ok
// SIG undefined FUN_144e66df0(void)

ushort * FUN_144e66df0(ushort *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (ushort)(param_2 >> 0x10) & 0x8000;
  uVar3 = param_2 & 0x7fffffff;
  if (uVar3 < 0x38800000) {
    if (0x33000000 < uVar3) {
      bVar1 = 0x7e - (char)(uVar3 >> 0x17);
      uVar4 = param_2 & 0x7fffff | 0x800000;
      uVar3 = uVar4 << (0x20 - bVar1 & 0x1f);
      uVar4 = uVar4 >> (bVar1 & 0x1f);
      uVar2 = uVar2 | (ushort)uVar4;
      if ((0x80000000 < uVar3) || ((uVar3 == 0x80000000 && ((uVar4 & 1) != 0)))) {
        uVar2 = uVar2 + 1;
      }
    }
  }
  else {
    if (uVar3 < 0x7f800000) {
      if (0x477fefff < uVar3) {
        *param_1 = uVar2 | 0x7c00;
        return param_1;
      }
      *param_1 = uVar2 | (ushort)(uVar3 + 0xc8000fff + (uVar3 + 0xc8000000 >> 0xd & 1) >> 0xd);
      return param_1;
    }
    uVar2 = uVar2 | 0x7c00;
    if (uVar3 != 0x7f800000) {
      uVar3 = uVar3 >> 0xd & 0x3ff;
      *param_1 = uVar2 | (ushort)(uVar3 == 0) | (ushort)uVar3;
      return param_1;
    }
  }
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 144e66f00 FUN_144e66f00 body=102 status=ok
// SIG undefined FUN_144e66f00(void)

longlong * FUN_144e66f00(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + 0x19);
    lVar5 = *(longlong *)(lVar2 + 8);
    while ((cVar1 == '\0' && (lVar2 == *(longlong *)(lVar5 + 0x10)))) {
      *param_1 = lVar5;
      cVar1 = *(char *)(*(longlong *)(lVar5 + 8) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 8);
    }
    *param_1 = lVar5;
    return param_1;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar4 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = plVar4;
    plVar4 = (longlong *)*plVar4;
  }
  *param_1 = (longlong)plVar3;
  return param_1;
}



// FUNCTION 144e66f70 FUN_144e66f70 body=117 status=ok
// SIG undefined FUN_144e66f70(void)

void FUN_144e66f70(int param_1)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    if (param_1 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
    if (param_1 != 2) {
      FUN_144e40d70(local_78,"Unknown pixel type.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e67000 FUN_144e67000 body=122 status=ok
// SIG undefined FUN_144e67000(void)

int FUN_144e67000(uint param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    if ((int)param_1 < 0) {
      iVar1 = ~param_1 - param_2;
    }
    else {
      iVar1 = (param_1 - param_2) + -1;
    }
    iVar1 = -(iVar1 / (int)param_1);
  }
  else {
    iVar1 = param_2 / (int)param_1;
  }
  if (param_3 < 0) {
    if ((int)param_1 < 0) {
      param_3 = ~param_1 - param_3;
    }
    else {
      param_3 = (param_1 - param_3) + -1;
    }
    param_3 = -(param_3 / (int)param_1);
  }
  else {
    param_3 = param_3 / (int)param_1;
  }
  return ((uint)(param_2 <= (int)(iVar1 * param_1)) - iVar1) + param_3;
}



// FUNCTION 144e67080 FUN_144e67080 body=365 status=ok
// SIG undefined FUN_144e67080(void)

ulonglong FUN_144e67080(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong local_res18 [2];
  
  piVar5 = (int *)FUN_144b67b20();
  uVar6 = FUN_144b67b80(param_1);
  FUN_144e6a0e0(param_2,(longlong)((piVar5[3] - piVar5[1]) + 1));
  FUN_144b65f20(uVar6,local_res18);
  plVar7 = (longlong *)FUN_144b65f40(uVar6);
  uVar9 = 0;
  if (local_res18[0] != *plVar7) {
    do {
      lVar2 = local_res18[0];
      iVar3 = FUN_144e66f70(*(undefined4 *)(local_res18[0] + 0x11c));
      iVar13 = piVar5[1];
      uVar8 = (longlong)((piVar5[2] - *piVar5) + 1) * (longlong)iVar3;
      iVar3 = *(int *)(lVar2 + 0x120);
      uVar10 = uVar8 % (ulonglong)(longlong)iVar3;
      uVar12 = uVar9;
      if (iVar13 <= piVar5[3]) {
        do {
          uVar1 = *(uint *)(local_res18[0] + 0x124);
          if (iVar13 < 0) {
            if ((int)uVar1 < 0) {
              iVar4 = ~uVar1 - iVar13;
            }
            else {
              iVar4 = (uVar1 - iVar13) + -1;
            }
            uVar10 = (ulonglong)(uint)(iVar4 % (int)uVar1);
            iVar4 = -(iVar4 / (int)uVar1);
          }
          else {
            iVar4 = iVar13 / (int)uVar1;
            uVar10 = (longlong)iVar13 % (longlong)(int)uVar1 & 0xffffffff;
          }
          if (iVar13 == iVar4 * uVar1) {
            *(longlong *)(uVar12 + *param_2) =
                 *(longlong *)(uVar12 + *param_2) + uVar8 / (ulonglong)(longlong)iVar3;
          }
          iVar13 = iVar13 + 1;
          uVar12 = uVar12 + 8;
        } while (iVar13 <= piVar5[3]);
      }
      FUN_144b663b0(local_res18,uVar10);
      plVar7 = (longlong *)FUN_144b65f40(uVar6);
    } while (local_res18[0] != *plVar7);
  }
  if (piVar5[1] <= piVar5[3]) {
    puVar11 = (ulonglong *)*param_2;
    uVar8 = (ulonglong)((piVar5[3] - piVar5[1]) + 1);
    uVar12 = uVar9;
    do {
      uVar9 = *puVar11;
      puVar11 = puVar11 + 1;
      if (uVar9 <= uVar12) {
        uVar9 = uVar12;
      }
      uVar8 = uVar8 - 1;
      uVar12 = uVar9;
    } while (uVar8 != 0);
  }
  return uVar9;
}



// FUNCTION 144e671f0 FUN_144e671f0 body=551 status=ok
// SIG undefined FUN_144e671f0(void)

ulonglong FUN_144e671f0(undefined8 param_1,int param_2,int param_3,longlong param_4,int param_5,
                       int param_6,longlong *param_7)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int *piVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  
  local_68 = param_7;
  local_60 = param_4;
  piVar2 = (int *)FUN_144b67b20();
  uVar3 = FUN_144b67b80(param_1);
  local_48 = uVar3;
  FUN_144b65f20(uVar3,&local_70);
  plVar4 = (longlong *)FUN_144b65f40(uVar3,local_50);
  uVar7 = 0;
  if (local_70 != *plVar4) {
    do {
      uVar8 = (int)*(uint *)(local_70 + 0x124) >> 0x1f;
      iVar17 = (*(uint *)(local_70 + 0x124) ^ uVar8) - uVar8;
      uVar8 = (int)*(uint *)(local_70 + 0x120) >> 0x1f;
      iVar16 = (*(uint *)(local_70 + 0x120) ^ uVar8) - uVar8;
      iVar1 = FUN_144e66f70(*(undefined4 *)(local_70 + 0x11c));
      iVar13 = *piVar2 + -1 + iVar16;
      iVar10 = param_2 + -1 + iVar17;
      iVar10 = iVar10 - iVar10 % iVar17;
      lVar12 = (longlong)iVar10;
      lVar15 = (longlong)(piVar2[2] - piVar2[2] % iVar16);
      local_58 = (longlong)(param_3 - param_3 % iVar17);
      if (lVar12 <= local_58) {
        lVar11 = (longlong)(iVar13 - iVar13 % iVar16);
        do {
          uVar14 = uVar7;
          if (lVar11 <= lVar15) {
            piVar5 = (int *)(param_5 * lVar11 + param_6 * lVar12 + local_60);
            lVar9 = lVar11;
            do {
              iVar13 = *piVar5;
              lVar9 = lVar9 + iVar16;
              piVar5 = (int *)((longlong)piVar5 + (longlong)param_5 * (longlong)iVar16);
              uVar14 = uVar14 + (longlong)iVar13 * (longlong)iVar1;
            } while (lVar9 <= lVar15);
          }
          lVar12 = lVar12 + iVar17;
          iVar13 = iVar10 - piVar2[1];
          iVar10 = iVar10 + iVar17;
          plVar4 = (longlong *)(*local_68 + (longlong)iVar13 * 8);
          *plVar4 = *plVar4 + uVar14;
        } while (lVar12 <= local_58);
      }
      FUN_144b663b0(&local_70);
      plVar4 = (longlong *)FUN_144b65f40(local_48,local_50);
      param_7 = local_68;
    } while (local_70 != *plVar4);
  }
  lVar12 = (longlong)param_2;
  if (lVar12 <= param_3) {
    lVar15 = (param_3 - lVar12) + 1;
    puVar6 = (ulonglong *)(*param_7 + (lVar12 - piVar2[1]) * 8);
    uVar14 = uVar7;
    do {
      uVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      if (uVar7 <= uVar14) {
        uVar7 = uVar14;
      }
      lVar15 = lVar15 + -1;
      uVar14 = uVar7;
    } while (lVar15 != 0);
  }
  return uVar7;
}



// FUNCTION 144e67420 FUN_144e67420 body=150 status=ok
// SIG undefined FUN_144e67420(void)

void FUN_144e67420(longlong *param_1,int param_2,int param_3,int param_4,longlong *param_5)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = (ulonglong)param_2;
  FUN_144e6a0e0(param_5,param_1[1] - *param_1 >> 3);
  lVar1 = 0;
  if (param_2 <= param_3) {
    lVar5 = uVar3 * 8;
    do {
      lVar4 = 0;
      if ((int)((longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) %
               (longlong)param_4) != 0) {
        lVar4 = lVar1;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      *(longlong *)(lVar5 + *param_5) = lVar4;
      lVar1 = *(longlong *)(*param_1 + -8 + lVar5 + 8) + lVar4;
      lVar5 = lVar5 + 8;
    } while ((int)uVar2 <= param_3);
  }
  return;
}



// FUNCTION 144e674c0 FUN_144e674c0 body=131 status=ok
// SIG undefined FUN_144e674c0(void)

void FUN_144e674c0(longlong *param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar3 = param_1[1] - *param_1 >> 3;
  FUN_144e6a0e0(param_3,lVar3);
  lVar1 = 0;
  iVar5 = 0;
  iVar2 = (int)lVar3 + -1;
  if (-1 < iVar2) {
    lVar3 = 0;
    do {
      lVar4 = 0;
      if (iVar5 % param_2 != 0) {
        lVar4 = lVar1;
      }
      iVar5 = iVar5 + 1;
      *(longlong *)(lVar3 + *param_3) = lVar4;
      lVar1 = *(longlong *)(*param_1 + -8 + lVar3 + 8) + lVar4;
      lVar3 = lVar3 + 8;
    } while (iVar5 <= iVar2);
  }
  return;
}



// FUNCTION 144e67550 FUN_144e67550 body=18 status=ok
// SIG undefined FUN_144e67550(void)

undefined8 FUN_144e67550(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e67558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x10))();
    return uVar1;
  }
  return 1;
}



// FUNCTION 144e67570 FUN_144e67570 body=18 status=ok
// SIG undefined FUN_144e67570(void)

undefined8 FUN_144e67570(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144e67578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 8))();
    return uVar1;
  }
  return 1;
}



// FUNCTION 144e67590 FUN_144e67590 body=2130 status=ok
// SIG undefined FUN_144e67590(void)

void FUN_144e67590(longlong *param_1,float *param_2,float *param_3,longlong param_4,char param_5,
                  double param_6,int param_7,int param_8,int param_9)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  float fVar7;
  undefined2 *puVar8;
  undefined4 *puVar9;
  ushort *puVar10;
  uint *puVar11;
  size_t _Size;
  undefined1 *puVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  uint local_a4 [3];
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_5 == '\0') {
    if (param_7 == 1) {
      if (param_8 == 0) {
        if (param_9 == 0) {
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            puVar12 = (undefined1 *)*param_1;
            uVar2 = *puVar12;
            *param_1 = (longlong)(puVar12 + 1);
            uVar3 = puVar12[1];
            *param_1 = (longlong)(puVar12 + 2);
            uVar4 = puVar12[2];
            *param_1 = (longlong)(puVar12 + 3);
            uVar5 = puVar12[3];
            *param_1 = (longlong)(puVar12 + 4);
            *param_2 = (float)CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar3),uVar2);
          }
        }
        else if (param_9 == 1) {
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            puVar12 = (undefined1 *)*param_1;
            uVar2 = *puVar12;
            *param_1 = (longlong)(puVar12 + 1);
            uVar3 = puVar12[1];
            *param_1 = (longlong)(puVar12 + 2);
            fVar7 = (float)FUN_14521d3b0(CONCAT11(uVar3,uVar2));
            *param_2 = fVar7;
          }
        }
        else {
          if (param_9 != 2) {
            FUN_144e40d70(local_98,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
          }
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            puVar12 = (undefined1 *)*param_1;
            uVar2 = *puVar12;
            *param_1 = (longlong)(puVar12 + 1);
            uVar3 = puVar12[1];
            *param_1 = (longlong)(puVar12 + 2);
            uVar4 = puVar12[2];
            *param_1 = (longlong)(puVar12 + 3);
            uVar5 = puVar12[3];
            *param_1 = (longlong)(puVar12 + 4);
            fVar7 = (float)FUN_14521d400(CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar3),uVar2));
            *param_2 = fVar7;
          }
        }
      }
      else if (param_8 == 1) {
        if (param_9 == 0) {
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            puVar12 = (undefined1 *)*param_1;
            uVar2 = *puVar12;
            *param_1 = (longlong)(puVar12 + 1);
            uVar3 = puVar12[1];
            *param_1 = (longlong)(puVar12 + 2);
            uVar4 = puVar12[2];
            *param_1 = (longlong)(puVar12 + 3);
            uVar5 = puVar12[3];
            *param_1 = (longlong)(puVar12 + 4);
            puVar8 = (undefined2 *)
                     FUN_14521d460(local_a4,CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar3),uVar2));
            *(undefined2 *)param_2 = *puVar8;
          }
        }
        else if (param_9 == 1) {
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            puVar12 = (undefined1 *)*param_1;
            uVar2 = *puVar12;
            *param_1 = (longlong)(puVar12 + 1);
            uVar3 = puVar12[1];
            *param_1 = (longlong)(puVar12 + 2);
            *(ushort *)param_2 = CONCAT11(uVar3,uVar2);
          }
        }
        else {
          if (param_9 != 2) {
            FUN_144e40d70(local_98,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
          }
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            puVar12 = (undefined1 *)*param_1;
            uVar2 = *puVar12;
            *param_1 = (longlong)(puVar12 + 1);
            uVar3 = puVar12[1];
            *param_1 = (longlong)(puVar12 + 2);
            uVar4 = puVar12[2];
            *param_1 = (longlong)(puVar12 + 3);
            uVar5 = puVar12[3];
            *param_1 = (longlong)(puVar12 + 4);
            puVar8 = (undefined2 *)
                     FUN_14521d4a0(local_a4,CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar3),uVar2));
            *(undefined2 *)param_2 = *puVar8;
          }
        }
      }
      else {
        if (param_8 != 2) {
          FUN_144e40d70(local_98,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
        }
        if (param_9 == 0) {
          if (param_2 <= param_3) {
            puVar12 = (undefined1 *)*param_1;
            do {
              uVar2 = *puVar12;
              *param_1 = (longlong)(puVar12 + 1);
              uVar3 = puVar12[1];
              *param_1 = (longlong)(puVar12 + 2);
              uVar4 = puVar12[2];
              *param_1 = (longlong)(puVar12 + 3);
              uVar5 = puVar12[3];
              puVar12 = puVar12 + 4;
              *param_1 = (longlong)puVar12;
              *param_2 = (float)CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar3),uVar2);
              param_2 = (float *)((longlong)param_2 + param_4);
            } while (param_2 <= param_3);
          }
        }
        else if (param_9 == 1) {
          if (param_2 <= param_3) {
            puVar12 = (undefined1 *)*param_1;
            do {
              uVar2 = *puVar12;
              puVar1 = puVar12 + 1;
              *param_1 = (longlong)puVar1;
              puVar12 = puVar12 + 2;
              uVar3 = *puVar1;
              *param_1 = (longlong)puVar12;
              *param_2 = *(float *)(PTR_DAT_14c731618 + (ulonglong)CONCAT11(uVar3,uVar2) * 4);
              param_2 = (float *)((longlong)param_2 + param_4);
            } while (param_2 <= param_3);
          }
        }
        else {
          if (param_9 != 2) {
            FUN_144e40d70(local_98,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
          }
          if (param_2 <= param_3) {
            puVar12 = (undefined1 *)*param_1;
            do {
              uVar2 = *puVar12;
              *param_1 = (longlong)(puVar12 + 1);
              uVar3 = puVar12[1];
              *param_1 = (longlong)(puVar12 + 2);
              uVar4 = puVar12[2];
              *param_1 = (longlong)(puVar12 + 3);
              uVar5 = puVar12[3];
              puVar12 = puVar12 + 4;
              *param_1 = (longlong)puVar12;
              *param_2 = (float)CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar3),uVar2);
              param_2 = (float *)((longlong)param_2 + param_4);
            } while (param_2 <= param_3);
          }
        }
      }
    }
    else if (param_8 == 0) {
      if (param_9 == 0) {
        if (param_2 <= param_3) {
          puVar8 = (undefined2 *)((longlong)param_2 + 2);
          do {
            *(undefined1 *)(puVar8 + -1) = *(undefined1 *)*param_1;
            *(undefined1 *)((longlong)puVar8 + -1) = *(undefined1 *)(*param_1 + 1);
            *(undefined1 *)puVar8 = *(undefined1 *)(*param_1 + 2);
            *(undefined1 *)((longlong)puVar8 + 1) = *(undefined1 *)(*param_1 + 3);
            puVar8 = (undefined2 *)((longlong)puVar8 + param_4);
            *param_1 = *param_1 + 4;
          } while (puVar8 + -1 <= param_3);
        }
      }
      else if (param_9 == 1) {
        for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
          fVar7 = (float)FUN_14521d3b0(*(undefined2 *)*param_1);
          *param_2 = fVar7;
          *param_1 = *param_1 + 2;
        }
      }
      else {
        if (param_9 != 2) {
          FUN_144e40d70(local_98,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
        }
        if (param_2 <= param_3) {
          puVar9 = (undefined4 *)*param_1;
          do {
            local_a8 = *puVar9;
            fVar7 = (float)FUN_14521d400();
            *param_2 = fVar7;
            param_2 = (float *)((longlong)param_2 + param_4);
            *param_1 = *param_1 + 4;
            puVar9 = (undefined4 *)*param_1;
          } while (param_2 <= param_3);
        }
      }
    }
    else if (param_8 == 1) {
      if (param_9 == 0) {
        if (param_2 <= param_3) {
          puVar9 = (undefined4 *)*param_1;
          do {
            local_a8 = *puVar9;
            puVar8 = (undefined2 *)FUN_14521d460(local_a4,local_a8);
            *(undefined2 *)param_2 = *puVar8;
            param_2 = (float *)((longlong)param_2 + param_4);
            *param_1 = *param_1 + 4;
            puVar9 = (undefined4 *)*param_1;
          } while (param_2 <= param_3);
        }
      }
      else if (param_9 == 1) {
        if (param_4 == 2) {
          _Size = (size_t)(((int)param_3 - (int)param_2) + 2);
          memcpy(param_2,(void *)*param_1,_Size);
          *param_1 = *param_1 + _Size;
        }
        else {
          for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
            *(undefined2 *)param_2 = *(undefined2 *)*param_1;
            *param_1 = *param_1 + 2;
          }
        }
      }
      else {
        if (param_9 != 2) {
          FUN_144e40d70(local_98,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
        }
        if (param_2 <= param_3) {
          puVar9 = (undefined4 *)*param_1;
          do {
            local_a8 = *puVar9;
            puVar8 = (undefined2 *)FUN_14521d4a0(local_a4);
            *(undefined2 *)param_2 = *puVar8;
            param_2 = (float *)((longlong)param_2 + param_4);
            *param_1 = *param_1 + 4;
            puVar9 = (undefined4 *)*param_1;
          } while (param_2 <= param_3);
        }
      }
    }
    else {
      if (param_8 != 2) {
        FUN_144e40d70(local_98,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
      }
      if (param_9 == 0) {
        if (param_2 <= param_3) {
          puVar11 = (uint *)*param_1;
          do {
            local_a4[0] = *puVar11;
            *param_1 = (longlong)(puVar11 + 1);
            *param_2 = (float)local_a4[0];
            param_2 = (float *)((longlong)param_2 + param_4);
            puVar11 = puVar11 + 1;
          } while (param_2 <= param_3);
        }
      }
      else if (param_9 == 1) {
        if (param_2 <= param_3) {
          puVar10 = (ushort *)*param_1;
          do {
            uVar6 = *puVar10;
            puVar10 = puVar10 + 1;
            *param_2 = *(float *)(PTR_DAT_14c731618 + (ulonglong)uVar6 * 4);
            param_2 = (float *)((longlong)param_2 + param_4);
            *param_1 = (longlong)puVar10;
          } while (param_2 <= param_3);
        }
      }
      else {
        if (param_9 != 2) {
          FUN_144e40d70(local_98,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
        }
        if (param_2 <= param_3) {
          puVar8 = (undefined2 *)((longlong)param_2 + 2);
          do {
            *(undefined1 *)(puVar8 + -1) = *(undefined1 *)*param_1;
            *(undefined1 *)((longlong)puVar8 + -1) = *(undefined1 *)(*param_1 + 1);
            *(undefined1 *)puVar8 = *(undefined1 *)(*param_1 + 2);
            *(undefined1 *)((longlong)puVar8 + 1) = *(undefined1 *)(*param_1 + 3);
            puVar8 = (undefined2 *)((longlong)puVar8 + param_4);
            *param_1 = *param_1 + 4;
          } while (puVar8 + -1 <= param_3);
        }
      }
    }
  }
  else if (param_8 == 0) {
    for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
      *param_2 = (float)(longlong)param_6;
    }
  }
  else if (param_8 == 1) {
    FUN_144e66df0(local_a4);
    if (param_2 <= param_3) {
      do {
        *(undefined2 *)param_2 = (undefined2)local_a4[0];
        param_2 = (float *)((longlong)param_2 + param_4);
      } while (param_2 <= param_3);
    }
  }
  else {
    if (param_8 != 2) {
      FUN_144e40d70(local_98,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
    }
    for (; param_2 <= param_3; param_2 = (float *)((longlong)param_2 + param_4)) {
      *param_2 = (float)param_6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144e67e00 FUN_144e67e00 body=6132 status=ok
// SIG undefined FUN_144e67e00(void)

void FUN_144e67e00(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,
                  uint param_11,int param_12,longlong param_13,longlong param_14,longlong param_15,
                  char param_16,double param_17,int param_18,int param_19,int param_20)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  undefined1 *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  float *pfVar21;
  undefined4 *puVar22;
  longlong lVar23;
  undefined2 *puVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong lVar28;
  uint *puVar29;
  longlong lVar30;
  longlong lVar31;
  int *piVar32;
  undefined1 auStack_108 [32];
  longlong local_e8;
  uint local_e0;
  longlong local_d8;
  undefined2 local_d0 [4];
  longlong local_c8;
  int local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar25 = (longlong)param_12;
  lVar19 = (longlong)param_6;
  lVar28 = (longlong)param_10;
  lVar27 = (longlong)param_9;
  lVar30 = (longlong)param_8;
  lVar15 = (longlong)(int)param_11;
  local_e8 = param_14;
  local_e0 = param_11;
  local_c0 = param_12;
  local_c8 = param_15;
  iVar14 = (int)param_4;
  local_d8 = param_2;
  local_b8 = param_4;
  local_b0 = param_3;
  if (param_16 == '\0') {
    if (param_18 == 1) {
      if (param_19 == 0) {
        if (param_20 == 0) {
          lVar23 = (longlong)param_7;
          if (lVar23 <= lVar30) {
            local_d8 = (longlong)iVar14;
            puVar29 = (uint *)((lVar23 - lVar27) * local_d8 +
                              param_3 + (lVar19 - lVar28) * (longlong)param_5);
            plVar26 = (longlong *)
                      ((lVar19 - lVar25) * param_15 + param_2 + (lVar23 - lVar15) * param_14);
            lVar15 = (lVar30 - lVar23) + 1;
            do {
              puVar22 = (undefined4 *)*plVar26;
              uVar10 = *puVar29;
              if (puVar22 == (undefined4 *)0x0) {
                iVar14 = uVar10 * 4;
                if (0x3ff < iVar14) {
                  lVar19 = *param_1;
                  uVar10 = (uVar10 & 0x3fffffff) >> 8;
                  uVar11 = (ulonglong)uVar10;
                  iVar14 = iVar14 + uVar10 * -0x400;
                  do {
                    iVar7 = 0x400;
                    do {
                      lVar19 = lVar19 + 1;
                      *param_1 = lVar19;
                      iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                if (0 < iVar14) {
                  lVar19 = *param_1;
                  do {
                    lVar19 = lVar19 + 1;
                    *param_1 = lVar19;
                    iVar14 = iVar14 + -1;
                  } while (iVar14 != 0);
                }
              }
              else if (0 < (int)uVar10) {
                uVar11 = (ulonglong)uVar10;
                do {
                  puVar16 = (undefined1 *)*param_1;
                  uVar2 = *puVar16;
                  *param_1 = (longlong)(puVar16 + 1);
                  uVar3 = puVar16[1];
                  *param_1 = (longlong)(puVar16 + 2);
                  uVar4 = puVar16[2];
                  *param_1 = (longlong)(puVar16 + 3);
                  uVar5 = puVar16[3];
                  *param_1 = (longlong)(puVar16 + 4);
                  *puVar22 = CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar3),uVar2);
                  puVar22 = (undefined4 *)((longlong)puVar22 + param_13);
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              plVar26 = (longlong *)((longlong)plVar26 + param_14);
              puVar29 = (uint *)((longlong)puVar29 + local_d8);
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
        else if (param_20 == 1) {
          lVar23 = (longlong)param_7;
          if (lVar23 <= lVar30) {
            lVar31 = (longlong)iVar14;
            puVar29 = (uint *)((lVar23 - lVar27) * lVar31 +
                              (longlong)param_5 * (lVar19 - lVar28) + param_3);
            plVar26 = (longlong *)
                      ((lVar19 - lVar25) * param_15 + param_2 + (lVar23 - lVar15) * param_14);
            lVar15 = (lVar30 - lVar23) + 1;
            local_d8 = lVar31;
            do {
              puVar22 = (undefined4 *)*plVar26;
              uVar10 = *puVar29;
              if (puVar22 == (undefined4 *)0x0) {
                iVar14 = uVar10 * 2;
                if (0x3ff < iVar14) {
                  lVar19 = *param_1;
                  uVar10 = (uVar10 & 0x7fffffff) >> 9;
                  uVar11 = (ulonglong)uVar10;
                  iVar14 = iVar14 + uVar10 * -0x400;
                  do {
                    iVar7 = 0x400;
                    do {
                      lVar19 = lVar19 + 1;
                      *param_1 = lVar19;
                      iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                lVar31 = local_d8;
                param_14 = local_e8;
                if (0 < iVar14) {
                  lVar19 = *param_1;
                  do {
                    lVar19 = lVar19 + 1;
                    *param_1 = lVar19;
                    iVar14 = iVar14 + -1;
                  } while (iVar14 != 0);
                }
              }
              else if (0 < (int)uVar10) {
                uVar11 = (ulonglong)uVar10;
                do {
                  puVar16 = (undefined1 *)*param_1;
                  uVar2 = *puVar16;
                  *param_1 = (longlong)(puVar16 + 1);
                  uVar3 = puVar16[1];
                  *param_1 = (longlong)(puVar16 + 2);
                  uVar9 = FUN_14521d3b0(CONCAT11(uVar3,uVar2));
                  *puVar22 = uVar9;
                  puVar22 = (undefined4 *)((longlong)puVar22 + param_13);
                  uVar11 = uVar11 - 1;
                  lVar31 = local_d8;
                  param_14 = local_e8;
                } while (uVar11 != 0);
              }
              plVar26 = (longlong *)((longlong)plVar26 + param_14);
              puVar29 = (uint *)((longlong)puVar29 + lVar31);
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
        else {
          if (param_20 != 2) {
            FUN_144e40d70(local_a8,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
          }
          lVar23 = (longlong)param_7;
          if (lVar23 <= lVar30) {
            lVar31 = (longlong)iVar14;
            puVar29 = (uint *)((lVar23 - lVar27) * lVar31 +
                              (longlong)param_5 * (lVar19 - lVar28) + param_3);
            plVar26 = (longlong *)
                      ((lVar19 - lVar25) * param_15 + param_2 + (lVar23 - lVar15) * param_14);
            lVar15 = (lVar30 - lVar23) + 1;
            local_d8 = lVar31;
            do {
              puVar22 = (undefined4 *)*plVar26;
              uVar10 = *puVar29;
              if (puVar22 == (undefined4 *)0x0) {
                iVar14 = uVar10 * 4;
                if (0x3ff < iVar14) {
                  lVar19 = *param_1;
                  uVar10 = (uVar10 & 0x3fffffff) >> 8;
                  uVar11 = (ulonglong)uVar10;
                  iVar14 = iVar14 + uVar10 * -0x400;
                  do {
                    iVar7 = 0x400;
                    do {
                      lVar19 = lVar19 + 1;
                      *param_1 = lVar19;
                      iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                lVar31 = local_d8;
                param_14 = local_e8;
                if (0 < iVar14) {
                  lVar19 = *param_1;
                  do {
                    lVar19 = lVar19 + 1;
                    *param_1 = lVar19;
                    iVar14 = iVar14 + -1;
                  } while (iVar14 != 0);
                }
              }
              else if (0 < (int)uVar10) {
                uVar11 = (ulonglong)uVar10;
                do {
                  puVar16 = (undefined1 *)*param_1;
                  uVar2 = *puVar16;
                  *param_1 = (longlong)(puVar16 + 1);
                  uVar3 = puVar16[1];
                  *param_1 = (longlong)(puVar16 + 2);
                  uVar4 = puVar16[2];
                  *param_1 = (longlong)(puVar16 + 3);
                  uVar5 = puVar16[3];
                  *param_1 = (longlong)(puVar16 + 4);
                  uVar9 = FUN_14521d400(CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar3),uVar2));
                  *puVar22 = uVar9;
                  puVar22 = (undefined4 *)((longlong)puVar22 + param_13);
                  uVar11 = uVar11 - 1;
                  lVar31 = local_d8;
                  param_14 = local_e8;
                } while (uVar11 != 0);
              }
              plVar26 = (longlong *)((longlong)plVar26 + param_14);
              puVar29 = (uint *)((longlong)puVar29 + lVar31);
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
      }
      else if (param_19 == 1) {
        if (param_20 == 0) {
          lVar23 = (longlong)param_7;
          if (lVar23 <= lVar30) {
            lVar31 = (longlong)iVar14;
            puVar29 = (uint *)((lVar23 - lVar27) * lVar31 +
                              (longlong)param_5 * (lVar19 - lVar28) + param_3);
            puVar20 = (undefined8 *)
                      ((lVar19 - lVar25) * param_15 + param_2 + (lVar23 - lVar15) * param_14);
            lVar15 = (lVar30 - lVar23) + 1;
            local_d8 = lVar31;
            do {
              puVar24 = (undefined2 *)*puVar20;
              uVar10 = *puVar29;
              if (puVar24 == (undefined2 *)0x0) {
                iVar14 = uVar10 * 4;
                if (0x3ff < iVar14) {
                  lVar19 = *param_1;
                  uVar10 = (uVar10 & 0x3fffffff) >> 8;
                  uVar11 = (ulonglong)uVar10;
                  iVar14 = iVar14 + uVar10 * -0x400;
                  do {
                    iVar7 = 0x400;
                    do {
                      lVar19 = lVar19 + 1;
                      *param_1 = lVar19;
                      iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                lVar31 = local_d8;
                param_14 = local_e8;
                if (0 < iVar14) {
                  lVar19 = *param_1;
                  do {
                    lVar19 = lVar19 + 1;
                    *param_1 = lVar19;
                    iVar14 = iVar14 + -1;
                  } while (iVar14 != 0);
                }
              }
              else if (0 < (int)uVar10) {
                uVar11 = (ulonglong)uVar10;
                do {
                  puVar16 = (undefined1 *)*param_1;
                  uVar2 = *puVar16;
                  *param_1 = (longlong)(puVar16 + 1);
                  uVar3 = puVar16[1];
                  *param_1 = (longlong)(puVar16 + 2);
                  uVar4 = puVar16[2];
                  *param_1 = (longlong)(puVar16 + 3);
                  uVar5 = puVar16[3];
                  *param_1 = (longlong)(puVar16 + 4);
                  puVar12 = (undefined2 *)
                            FUN_14521d460(local_d0,CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar3),
                                                            uVar2));
                  *puVar24 = *puVar12;
                  puVar24 = (undefined2 *)((longlong)puVar24 + param_13);
                  uVar11 = uVar11 - 1;
                  lVar31 = local_d8;
                  param_14 = local_e8;
                } while (uVar11 != 0);
              }
              puVar20 = (undefined8 *)((longlong)puVar20 + param_14);
              puVar29 = (uint *)((longlong)puVar29 + lVar31);
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
        else if (param_20 == 1) {
          lVar27 = (longlong)param_7;
          if (lVar27 <= lVar30) {
            puVar29 = (uint *)((lVar27 - param_9) * (longlong)iVar14 +
                              param_3 + (lVar19 - lVar28) * (longlong)param_5);
            plVar26 = (longlong *)
                      ((lVar19 - lVar25) * param_15 + param_2 + (lVar27 - lVar15) * param_14);
            lVar15 = (lVar30 - lVar27) + 1;
            do {
              puVar24 = (undefined2 *)*plVar26;
              uVar10 = *puVar29;
              if (puVar24 == (undefined2 *)0x0) {
                iVar7 = uVar10 * 2;
                if (0x3ff < iVar7) {
                  lVar19 = *param_1;
                  uVar10 = (uVar10 & 0x7fffffff) >> 9;
                  uVar11 = (ulonglong)uVar10;
                  iVar7 = iVar7 + uVar10 * -0x400;
                  do {
                    iVar8 = 0x400;
                    do {
                      lVar19 = lVar19 + 1;
                      *param_1 = lVar19;
                      iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                if (0 < iVar7) {
                  lVar19 = *param_1;
                  do {
                    lVar19 = lVar19 + 1;
                    *param_1 = lVar19;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
              }
              else if (0 < (int)uVar10) {
                uVar11 = (ulonglong)uVar10;
                do {
                  puVar16 = (undefined1 *)*param_1;
                  uVar2 = *puVar16;
                  *param_1 = (longlong)(puVar16 + 1);
                  uVar3 = puVar16[1];
                  *param_1 = (longlong)(puVar16 + 2);
                  *puVar24 = CONCAT11(uVar3,uVar2);
                  puVar24 = (undefined2 *)((longlong)puVar24 + param_13);
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              plVar26 = (longlong *)((longlong)plVar26 + param_14);
              puVar29 = (uint *)((longlong)puVar29 + (longlong)iVar14);
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
        else {
          if (param_20 != 2) {
            FUN_144e40d70(local_a8,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
          }
          lVar23 = (longlong)param_7;
          if (lVar23 <= lVar30) {
            lVar31 = (longlong)iVar14;
            puVar29 = (uint *)((lVar23 - lVar27) * lVar31 +
                              (longlong)param_5 * (lVar19 - lVar28) + param_3);
            puVar20 = (undefined8 *)
                      ((lVar19 - lVar25) * param_15 + param_2 + (lVar23 - lVar15) * param_14);
            lVar15 = (lVar30 - lVar23) + 1;
            local_d8 = lVar31;
            do {
              puVar24 = (undefined2 *)*puVar20;
              uVar10 = *puVar29;
              if (puVar24 == (undefined2 *)0x0) {
                iVar14 = uVar10 * 4;
                if (0x3ff < iVar14) {
                  lVar19 = *param_1;
                  uVar10 = (uVar10 & 0x3fffffff) >> 8;
                  uVar11 = (ulonglong)uVar10;
                  iVar14 = iVar14 + uVar10 * -0x400;
                  do {
                    iVar7 = 0x400;
                    do {
                      lVar19 = lVar19 + 1;
                      *param_1 = lVar19;
                      iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                lVar31 = local_d8;
                param_14 = local_e8;
                if (0 < iVar14) {
                  lVar19 = *param_1;
                  do {
                    lVar19 = lVar19 + 1;
                    *param_1 = lVar19;
                    iVar14 = iVar14 + -1;
                  } while (iVar14 != 0);
                }
              }
              else if (0 < (int)uVar10) {
                uVar11 = (ulonglong)uVar10;
                do {
                  puVar16 = (undefined1 *)*param_1;
                  uVar2 = *puVar16;
                  *param_1 = (longlong)(puVar16 + 1);
                  uVar3 = puVar16[1];
                  *param_1 = (longlong)(puVar16 + 2);
                  uVar4 = puVar16[2];
                  *param_1 = (longlong)(puVar16 + 3);
                  uVar5 = puVar16[3];
                  *param_1 = (longlong)(puVar16 + 4);
                  puVar12 = (undefined2 *)
                            FUN_14521d4a0(local_d0,CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar3),
                                                            uVar2));
                  *puVar24 = *puVar12;
                  puVar24 = (undefined2 *)((longlong)puVar24 + param_13);
                  uVar11 = uVar11 - 1;
                  lVar31 = local_d8;
                  param_14 = local_e8;
                } while (uVar11 != 0);
              }
              puVar20 = (undefined8 *)((longlong)puVar20 + param_14);
              puVar29 = (uint *)((longlong)puVar29 + lVar31);
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
      }
      else {
        if (param_19 != 2) {
          FUN_144e40d70(local_a8,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
        }
        if (param_20 == 0) {
          lVar23 = (longlong)param_7;
          if (lVar23 <= lVar30) {
            local_d8 = (longlong)iVar14;
            puVar29 = (uint *)((lVar23 - lVar27) * local_d8 +
                              (longlong)param_5 * (lVar19 - lVar28) + param_3);
            plVar26 = (longlong *)
                      ((lVar19 - lVar25) * param_15 + param_2 + (lVar23 - lVar15) * param_14);
            lVar15 = (lVar30 - lVar23) + 1;
            do {
              pfVar21 = (float *)*plVar26;
              uVar10 = *puVar29;
              if (pfVar21 == (float *)0x0) {
                iVar14 = uVar10 * 4;
                if (0x3ff < iVar14) {
                  lVar19 = *param_1;
                  uVar10 = (uVar10 & 0x3fffffff) >> 8;
                  uVar11 = (ulonglong)uVar10;
                  iVar14 = iVar14 + uVar10 * -0x400;
                  do {
                    iVar7 = 0x400;
                    do {
                      lVar19 = lVar19 + 1;
                      *param_1 = lVar19;
                      iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                if (0 < iVar14) {
                  lVar19 = *param_1;
                  do {
                    lVar19 = lVar19 + 1;
                    *param_1 = lVar19;
                    iVar14 = iVar14 + -1;
                  } while (iVar14 != 0);
                }
              }
              else if (0 < (int)uVar10) {
                puVar16 = (undefined1 *)*param_1;
                uVar11 = (ulonglong)uVar10;
                do {
                  uVar2 = *puVar16;
                  *param_1 = (longlong)(puVar16 + 1);
                  uVar3 = puVar16[1];
                  *param_1 = (longlong)(puVar16 + 2);
                  uVar4 = puVar16[2];
                  *param_1 = (longlong)(puVar16 + 3);
                  uVar5 = puVar16[3];
                  puVar16 = puVar16 + 4;
                  *param_1 = (longlong)puVar16;
                  *pfVar21 = (float)CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar3),uVar2);
                  pfVar21 = (float *)((longlong)pfVar21 + param_13);
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              plVar26 = (longlong *)((longlong)plVar26 + param_14);
              puVar29 = (uint *)((longlong)puVar29 + local_d8);
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
        else if (param_20 == 1) {
          lVar27 = (longlong)param_7;
          if (lVar27 <= lVar30) {
            puVar29 = (uint *)((lVar27 - param_9) * (longlong)iVar14 +
                              param_3 + (lVar19 - lVar28) * (longlong)param_5);
            puVar20 = (undefined8 *)
                      ((lVar19 - lVar25) * param_15 + param_2 + (lVar27 - lVar15) * param_14);
            lVar15 = (lVar30 - lVar27) + 1;
            do {
              puVar22 = (undefined4 *)*puVar20;
              uVar10 = *puVar29;
              if (puVar22 == (undefined4 *)0x0) {
                iVar7 = uVar10 * 2;
                if (0x3ff < iVar7) {
                  lVar19 = *param_1;
                  uVar10 = (uVar10 & 0x7fffffff) >> 9;
                  uVar11 = (ulonglong)uVar10;
                  iVar7 = iVar7 + uVar10 * -0x400;
                  do {
                    iVar8 = 0x400;
                    do {
                      lVar19 = lVar19 + 1;
                      *param_1 = lVar19;
                      iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                if (0 < iVar7) {
                  lVar19 = *param_1;
                  do {
                    lVar19 = lVar19 + 1;
                    *param_1 = lVar19;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
              }
              else if (0 < (int)uVar10) {
                puVar16 = (undefined1 *)*param_1;
                uVar11 = (ulonglong)uVar10;
                do {
                  uVar2 = *puVar16;
                  puVar1 = puVar16 + 1;
                  *param_1 = (longlong)puVar1;
                  puVar16 = puVar16 + 2;
                  uVar3 = *puVar1;
                  *param_1 = (longlong)puVar16;
                  *puVar22 = *(undefined4 *)
                              (PTR_DAT_14c731618 + (ulonglong)CONCAT11(uVar3,uVar2) * 4);
                  puVar22 = (undefined4 *)((longlong)puVar22 + param_13);
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              puVar20 = (undefined8 *)((longlong)puVar20 + param_14);
              puVar29 = (uint *)((longlong)puVar29 + (longlong)iVar14);
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
        else {
          if (param_20 != 2) {
            FUN_144e40d70(local_a8,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
          }
          lVar23 = (longlong)param_7;
          if (lVar23 <= lVar30) {
            local_d8 = (longlong)iVar14;
            puVar29 = (uint *)((lVar23 - lVar27) * local_d8 +
                              (longlong)param_5 * (lVar19 - lVar28) + param_3);
            plVar26 = (longlong *)
                      ((lVar19 - lVar25) * param_15 + param_2 + (lVar23 - lVar15) * param_14);
            lVar15 = (lVar30 - lVar23) + 1;
            do {
              puVar22 = (undefined4 *)*plVar26;
              uVar10 = *puVar29;
              if (puVar22 == (undefined4 *)0x0) {
                iVar14 = uVar10 * 4;
                if (0x3ff < iVar14) {
                  lVar19 = *param_1;
                  uVar10 = (uVar10 & 0x3fffffff) >> 8;
                  uVar11 = (ulonglong)uVar10;
                  iVar14 = iVar14 + uVar10 * -0x400;
                  do {
                    iVar7 = 0x400;
                    do {
                      lVar19 = lVar19 + 1;
                      *param_1 = lVar19;
                      iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                    uVar11 = uVar11 - 1;
                  } while (uVar11 != 0);
                }
                if (0 < iVar14) {
                  lVar19 = *param_1;
                  do {
                    lVar19 = lVar19 + 1;
                    *param_1 = lVar19;
                    iVar14 = iVar14 + -1;
                  } while (iVar14 != 0);
                }
              }
              else if (0 < (int)uVar10) {
                puVar16 = (undefined1 *)*param_1;
                uVar11 = (ulonglong)uVar10;
                do {
                  uVar2 = *puVar16;
                  *param_1 = (longlong)(puVar16 + 1);
                  uVar3 = puVar16[1];
                  *param_1 = (longlong)(puVar16 + 2);
                  uVar4 = puVar16[2];
                  *param_1 = (longlong)(puVar16 + 3);
                  uVar5 = puVar16[3];
                  puVar16 = puVar16 + 4;
                  *param_1 = (longlong)puVar16;
                  *puVar22 = CONCAT31(CONCAT21(CONCAT11(uVar5,uVar4),uVar3),uVar2);
                  puVar22 = (undefined4 *)((longlong)puVar22 + param_13);
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              plVar26 = (longlong *)((longlong)plVar26 + param_14);
              puVar29 = (uint *)((longlong)puVar29 + local_d8);
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
        }
      }
    }
    else if (param_19 == 0) {
      if (param_20 == 0) {
        lVar25 = (longlong)param_7;
        if (lVar25 <= lVar30) {
          puVar29 = (uint *)((lVar25 - lVar27) * (longlong)iVar14 +
                            (longlong)param_5 * (lVar19 - lVar28) + param_3);
          puVar20 = (undefined8 *)
                    ((lVar19 - param_12) * param_15 + param_2 + (lVar25 - lVar15) * param_14);
          lVar15 = (lVar30 - lVar25) + 1;
          do {
            puVar16 = (undefined1 *)*puVar20;
            uVar10 = *puVar29;
            if (puVar16 == (undefined1 *)0x0) {
              *param_1 = *param_1 + (longlong)(int)uVar10 * 4;
            }
            else if (0 < (int)uVar10) {
              uVar11 = (ulonglong)uVar10;
              do {
                *puVar16 = *(undefined1 *)*param_1;
                puVar16[1] = *(undefined1 *)(*param_1 + 1);
                puVar16[2] = *(undefined1 *)(*param_1 + 2);
                puVar16[3] = *(undefined1 *)(*param_1 + 3);
                puVar16 = puVar16 + param_13;
                *param_1 = *param_1 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar20 = (undefined8 *)((longlong)puVar20 + param_14);
            puVar29 = (uint *)((longlong)puVar29 + (longlong)iVar14);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
      }
      else if (param_20 == 1) {
        lVar15 = (longlong)param_7;
        if (lVar15 <= lVar30) {
          puVar29 = (uint *)((lVar15 - lVar27) * (longlong)iVar14 +
                            (longlong)param_5 * (lVar19 - lVar28) + param_3);
          plVar26 = (longlong *)
                    ((lVar19 - lVar25) * param_15 + param_2 + (lVar15 - (int)param_11) * param_14);
          lVar15 = (lVar30 - lVar15) + 1;
          do {
            puVar22 = (undefined4 *)*plVar26;
            uVar10 = *puVar29;
            if (puVar22 == (undefined4 *)0x0) {
              *param_1 = *param_1 + (longlong)(int)uVar10 * 2;
            }
            else if (0 < (int)uVar10) {
              uVar11 = (ulonglong)uVar10;
              do {
                uVar9 = FUN_14521d3b0(*(undefined2 *)*param_1);
                *puVar22 = uVar9;
                puVar22 = (undefined4 *)((longlong)puVar22 + param_13);
                *param_1 = *param_1 + 2;
                uVar11 = uVar11 - 1;
                param_4 = local_b8;
              } while (uVar11 != 0);
            }
            plVar26 = (longlong *)((longlong)plVar26 + local_e8);
            puVar29 = (uint *)((longlong)puVar29 + (longlong)(int)param_4);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
      }
      else {
        if (param_20 != 2) {
          FUN_144e40d70(local_a8,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
        }
        lVar15 = (longlong)param_7;
        if (lVar15 <= lVar30) {
          puVar29 = (uint *)((lVar15 - lVar27) * (longlong)iVar14 +
                            (longlong)param_5 * (lVar19 - lVar28) + param_3);
          plVar26 = (longlong *)
                    ((lVar19 - lVar25) * param_15 + param_2 + (lVar15 - (int)param_11) * param_14);
          lVar15 = (lVar30 - lVar15) + 1;
          do {
            puVar22 = (undefined4 *)*plVar26;
            uVar10 = *puVar29;
            if (puVar22 == (undefined4 *)0x0) {
              *param_1 = *param_1 + (longlong)(int)uVar10 * 4;
            }
            else if (0 < (int)uVar10) {
              puVar13 = (uint *)*param_1;
              uVar11 = (ulonglong)uVar10;
              do {
                local_e0 = *puVar13;
                uVar9 = FUN_14521d400();
                *puVar22 = uVar9;
                puVar22 = (undefined4 *)((longlong)puVar22 + param_13);
                *param_1 = *param_1 + 4;
                puVar13 = (uint *)*param_1;
                uVar11 = uVar11 - 1;
                param_4 = local_b8;
              } while (uVar11 != 0);
            }
            plVar26 = (longlong *)((longlong)plVar26 + local_e8);
            puVar29 = (uint *)((longlong)puVar29 + (longlong)(int)param_4);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
      }
    }
    else if (param_19 == 1) {
      if (param_20 == 0) {
        lVar15 = (longlong)param_7;
        if (lVar15 <= lVar30) {
          puVar29 = (uint *)((lVar15 - lVar27) * (longlong)iVar14 +
                            (longlong)param_5 * (lVar19 - lVar28) + param_3);
          puVar20 = (undefined8 *)
                    ((lVar19 - lVar25) * param_15 + param_2 + (lVar15 - (int)param_11) * param_14);
          lVar15 = (lVar30 - lVar15) + 1;
          do {
            puVar24 = (undefined2 *)*puVar20;
            uVar10 = *puVar29;
            if (puVar24 == (undefined2 *)0x0) {
              *param_1 = *param_1 + (longlong)(int)uVar10 * 4;
            }
            else if (0 < (int)uVar10) {
              puVar13 = (uint *)*param_1;
              uVar11 = (ulonglong)uVar10;
              do {
                local_e0 = *puVar13;
                puVar12 = (undefined2 *)FUN_14521d460(local_d0,local_e0);
                *puVar24 = *puVar12;
                puVar24 = (undefined2 *)((longlong)puVar24 + param_13);
                *param_1 = *param_1 + 4;
                puVar13 = (uint *)*param_1;
                uVar11 = uVar11 - 1;
                param_4 = local_b8;
              } while (uVar11 != 0);
            }
            puVar20 = (undefined8 *)((longlong)puVar20 + local_e8);
            puVar29 = (uint *)((longlong)puVar29 + (longlong)(int)param_4);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
      }
      else if (param_20 == 1) {
        lVar25 = (longlong)param_7;
        if (lVar25 <= lVar30) {
          puVar29 = (uint *)((lVar25 - lVar27) * (longlong)iVar14 +
                            (longlong)param_5 * (lVar19 - lVar28) + param_3);
          puVar20 = (undefined8 *)
                    ((lVar19 - param_12) * param_15 + param_2 + (lVar25 - lVar15) * param_14);
          lVar15 = (lVar30 - lVar25) + 1;
          do {
            puVar24 = (undefined2 *)*puVar20;
            uVar10 = *puVar29;
            if (puVar24 == (undefined2 *)0x0) {
              *param_1 = *param_1 + (longlong)(int)uVar10 * 2;
            }
            else if (0 < (int)uVar10) {
              uVar11 = (ulonglong)uVar10;
              do {
                *puVar24 = *(undefined2 *)*param_1;
                puVar24 = (undefined2 *)((longlong)puVar24 + param_13);
                *param_1 = *param_1 + 2;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar20 = (undefined8 *)((longlong)puVar20 + param_14);
            puVar29 = (uint *)((longlong)puVar29 + (longlong)iVar14);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
      }
      else {
        if (param_20 != 2) {
          FUN_144e40d70(local_a8,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
        }
        lVar15 = (longlong)param_7;
        if (lVar15 <= lVar30) {
          puVar29 = (uint *)((lVar15 - lVar27) * (longlong)iVar14 +
                            (longlong)param_5 * (lVar19 - lVar28) + param_3);
          puVar20 = (undefined8 *)
                    ((lVar19 - lVar25) * param_15 + param_2 + (lVar15 - (int)param_11) * param_14);
          lVar15 = (lVar30 - lVar15) + 1;
          do {
            puVar24 = (undefined2 *)*puVar20;
            uVar10 = *puVar29;
            if (puVar24 == (undefined2 *)0x0) {
              *param_1 = *param_1 + (longlong)(int)uVar10 * 4;
            }
            else if (0 < (int)uVar10) {
              puVar13 = (uint *)*param_1;
              uVar11 = (ulonglong)uVar10;
              do {
                local_e0 = *puVar13;
                puVar12 = (undefined2 *)FUN_14521d4a0(local_d0);
                *puVar24 = *puVar12;
                puVar24 = (undefined2 *)((longlong)puVar24 + param_13);
                *param_1 = *param_1 + 4;
                puVar13 = (uint *)*param_1;
                uVar11 = uVar11 - 1;
                param_4 = local_b8;
              } while (uVar11 != 0);
            }
            puVar20 = (undefined8 *)((longlong)puVar20 + local_e8);
            puVar29 = (uint *)((longlong)puVar29 + (longlong)(int)param_4);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
      }
    }
    else {
      if (param_19 != 2) {
        FUN_144e40d70(local_a8,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
      }
      if (param_20 == 0) {
        lVar25 = (longlong)param_7;
        if (lVar25 <= lVar30) {
          puVar29 = (uint *)((lVar25 - param_9) * (longlong)iVar14 +
                            param_3 + (lVar19 - lVar28) * (longlong)param_5);
          plVar26 = (longlong *)
                    ((lVar19 - param_12) * param_15 + param_2 + (lVar25 - lVar15) * param_14);
          lVar15 = (lVar30 - lVar25) + 1;
          do {
            pfVar21 = (float *)*plVar26;
            uVar10 = *puVar29;
            if (pfVar21 == (float *)0x0) {
              *param_1 = *param_1 + (longlong)(int)uVar10 * 4;
            }
            else if (0 < (int)uVar10) {
              uVar11 = (ulonglong)uVar10;
              puVar13 = (uint *)*param_1;
              do {
                local_e0 = *puVar13;
                *param_1 = (longlong)(puVar13 + 1);
                *pfVar21 = (float)local_e0;
                pfVar21 = (float *)((longlong)pfVar21 + param_13);
                uVar11 = uVar11 - 1;
                puVar13 = puVar13 + 1;
              } while (uVar11 != 0);
            }
            plVar26 = (longlong *)((longlong)plVar26 + param_14);
            puVar29 = (uint *)((longlong)puVar29 + (longlong)iVar14);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
      }
      else if (param_20 == 1) {
        lVar23 = (longlong)param_7;
        if (lVar23 <= lVar30) {
          local_b0 = (longlong)iVar14;
          piVar32 = (int *)((lVar23 - lVar27) * local_b0 +
                           (longlong)param_5 * (lVar19 - lVar28) + param_3);
          puVar20 = (undefined8 *)
                    ((lVar19 - lVar25) * param_15 + param_2 + (lVar23 - lVar15) * param_14);
          lVar15 = (lVar30 - lVar23) + 1;
          do {
            puVar22 = (undefined4 *)*puVar20;
            iVar14 = *piVar32;
            if (puVar22 == (undefined4 *)0x0) {
              *param_1 = *param_1 + (longlong)iVar14 * 2;
            }
            else {
              iVar7 = 0;
              if (3 < iVar14) {
                puVar18 = (ushort *)*param_1;
                uVar10 = (iVar14 - 4U >> 2) + 1;
                uVar11 = (ulonglong)uVar10;
                iVar7 = uVar10 * 4;
                do {
                  *puVar22 = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)*puVar18 * 4);
                  *param_1 = (longlong)(puVar18 + 1);
                  *(undefined4 *)((longlong)puVar22 + param_13) =
                       *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)puVar18[1] * 4);
                  puVar22 = (undefined4 *)((longlong)puVar22 + param_13 + param_13);
                  *param_1 = (longlong)(puVar18 + 2);
                  puVar17 = puVar18 + 3;
                  *puVar22 = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)puVar18[2] * 4);
                  puVar22 = (undefined4 *)((longlong)puVar22 + param_13);
                  *param_1 = (longlong)puVar17;
                  puVar18 = puVar18 + 4;
                  *puVar22 = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)*puVar17 * 4);
                  puVar22 = (undefined4 *)((longlong)puVar22 + param_13);
                  *param_1 = (longlong)puVar18;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              if (iVar7 < iVar14) {
                puVar18 = (ushort *)*param_1;
                uVar11 = (ulonglong)(uint)(iVar14 - iVar7);
                do {
                  uVar6 = *puVar18;
                  puVar18 = puVar18 + 1;
                  *puVar22 = *(undefined4 *)(PTR_DAT_14c731618 + (ulonglong)uVar6 * 4);
                  puVar22 = (undefined4 *)((longlong)puVar22 + param_13);
                  *param_1 = (longlong)puVar18;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
            }
            puVar20 = (undefined8 *)((longlong)puVar20 + param_14);
            piVar32 = (int *)((longlong)piVar32 + local_b0);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
      }
      else {
        if (param_20 != 2) {
          FUN_144e40d70(local_a8,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
        }
        lVar25 = (longlong)param_7;
        if (lVar25 <= lVar30) {
          puVar29 = (uint *)((lVar25 - lVar27) * (longlong)iVar14 +
                            (longlong)param_5 * (lVar19 - lVar28) + param_3);
          puVar20 = (undefined8 *)
                    ((lVar19 - param_12) * param_15 + param_2 + (lVar25 - lVar15) * param_14);
          lVar15 = (lVar30 - lVar25) + 1;
          do {
            puVar16 = (undefined1 *)*puVar20;
            uVar10 = *puVar29;
            if (puVar16 == (undefined1 *)0x0) {
              *param_1 = *param_1 + (longlong)(int)uVar10 * 4;
            }
            else if (0 < (int)uVar10) {
              uVar11 = (ulonglong)uVar10;
              do {
                *puVar16 = *(undefined1 *)*param_1;
                puVar16[1] = *(undefined1 *)(*param_1 + 1);
                puVar16[2] = *(undefined1 *)(*param_1 + 2);
                puVar16[3] = *(undefined1 *)(*param_1 + 3);
                puVar16 = puVar16 + param_13;
                *param_1 = *param_1 + 4;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            puVar20 = (undefined8 *)((longlong)puVar20 + param_14);
            puVar29 = (uint *)((longlong)puVar29 + (longlong)iVar14);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
      }
    }
  }
  else if (param_19 == 0) {
    lVar25 = (longlong)param_7;
    if (lVar25 <= lVar30) {
      plVar26 = (longlong *)
                ((lVar19 - param_12) * param_15 + param_2 + (lVar25 - lVar15) * param_14);
      do {
        puVar22 = (undefined4 *)*plVar26;
        if ((puVar22 != (undefined4 *)0x0) &&
           (uVar10 = *(uint *)((lVar19 - lVar28) * (longlong)param_5 +
                              param_3 + (lVar25 - param_9) * (longlong)iVar14), 0 < (int)uVar10)) {
          uVar11 = (ulonglong)uVar10;
          do {
            *puVar22 = (int)(longlong)param_17;
            puVar22 = (undefined4 *)((longlong)puVar22 + param_13);
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        lVar25 = lVar25 + 1;
        plVar26 = (longlong *)((longlong)plVar26 + param_14);
      } while (lVar25 <= lVar30);
    }
  }
  else if (param_19 == 1) {
    FUN_144e66df0(local_d0);
    lVar15 = (longlong)param_7;
    if (lVar15 <= lVar30) {
      plVar26 = (longlong *)
                ((lVar19 - local_c0) * local_c8 + local_d8 + (lVar15 - (int)local_e0) * local_e8);
      do {
        puVar24 = (undefined2 *)*plVar26;
        if ((puVar24 != (undefined2 *)0x0) &&
           (uVar10 = *(uint *)((lVar19 - lVar28) * (longlong)param_5 +
                              param_3 + (lVar15 - param_9) * (longlong)iVar14), 0 < (int)uVar10)) {
          uVar11 = (ulonglong)uVar10;
          do {
            *puVar24 = local_d0[0];
            puVar24 = (undefined2 *)((longlong)puVar24 + param_13);
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        lVar15 = lVar15 + 1;
        plVar26 = (longlong *)((longlong)plVar26 + local_e8);
      } while (lVar15 <= lVar30);
    }
  }
  else {
    if (param_19 != 2) {
      FUN_144e40d70(local_a8,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
    }
    lVar23 = (longlong)param_7;
    if (lVar23 <= lVar30) {
      plVar26 = (longlong *)((lVar19 - lVar25) * param_15 + param_2 + (lVar23 - lVar15) * param_14);
      do {
        pfVar21 = (float *)*plVar26;
        if ((pfVar21 != (float *)0x0) &&
           (uVar10 = *(uint *)((lVar19 - lVar28) * (longlong)param_5 +
                              param_3 + (lVar23 - lVar27) * (longlong)iVar14), 0 < (int)uVar10)) {
          uVar11 = (ulonglong)uVar10;
          do {
            *pfVar21 = (float)param_17;
            pfVar21 = (float *)((longlong)pfVar21 + param_13);
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        lVar23 = lVar23 + 1;
        plVar26 = (longlong *)((longlong)plVar26 + param_14);
      } while (lVar23 <= lVar30);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
}



// FUNCTION 144e69620 FUN_144e69620 body=395 status=ok
// SIG undefined FUN_144e69620(void)

void FUN_144e69620(longlong *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    iVar4 = param_3 * 4;
    if (0x3ff < iVar4) {
      lVar3 = *param_1;
      uVar1 = (param_3 & 0x3fffffff) >> 8;
      uVar5 = (ulonglong)uVar1;
      iVar4 = iVar4 + uVar1 * -0x400;
      do {
        iVar2 = 0x400;
        do {
          lVar3 = lVar3 + 1;
          *param_1 = lVar3;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (0 < iVar4) {
      do {
        *param_1 = *param_1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (param_2 == 1) {
    iVar4 = param_3 * 2;
    if (0x3ff < iVar4) {
      lVar3 = *param_1;
      uVar1 = (param_3 & 0x7fffffff) >> 9;
      uVar5 = (ulonglong)uVar1;
      iVar4 = iVar4 + uVar1 * -0x400;
      do {
        iVar2 = 0x400;
        do {
          lVar3 = lVar3 + 1;
          *param_1 = lVar3;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (0 < iVar4) {
      do {
        *param_1 = *param_1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  else {
    if (param_2 != 2) {
      FUN_144e40d70(local_78,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
    }
    iVar4 = param_3 * 4;
    if (0x3ff < iVar4) {
      lVar3 = *param_1;
      uVar1 = (param_3 & 0x3fffffff) >> 8;
      uVar5 = (ulonglong)uVar1;
      iVar4 = iVar4 + uVar1 * -0x400;
      do {
        iVar2 = 0x400;
        do {
          lVar3 = lVar3 + 1;
          *param_1 = lVar3;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if (0 < iVar4) {
      do {
        *param_1 = *param_1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e697d0 FUN_144e697d0 body=326 status=ok
// SIG undefined FUN_144e697d0(void)

void FUN_144e697d0(longlong *param_1,longlong *param_2,int param_3,longlong param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 == 0) {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      uVar2 = *(undefined4 *)*param_2;
      *(char *)*param_1 = (char)uVar2;
      *param_1 = *param_1 + 1;
      *(char *)*param_1 = (char)((uint)uVar2 >> 8);
      *param_1 = *param_1 + 1;
      *(char *)*param_1 = (char)((uint)uVar2 >> 0x10);
      *param_1 = *param_1 + 1;
      *(char *)*param_1 = (char)((uint)uVar2 >> 0x18);
      *param_1 = *param_1 + 1;
      *param_2 = *param_2 + 4;
    }
  }
  else if (param_3 == 1) {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      uVar1 = *(undefined2 *)*param_2;
      *(char *)*param_1 = (char)uVar1;
      *param_1 = *param_1 + 1;
      *(char *)*param_1 = (char)((ushort)uVar1 >> 8);
      *param_1 = *param_1 + 1;
      *param_2 = *param_2 + 2;
    }
  }
  else {
    if (param_3 != 2) {
      FUN_144e40d70(local_78,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
    }
    for (; param_4 != 0; param_4 = param_4 + -1) {
      uVar2 = *(undefined4 *)*param_2;
      *(char *)*param_1 = (char)uVar2;
      *param_1 = *param_1 + 1;
      *(char *)*param_1 = (char)((uint)uVar2 >> 8);
      *param_1 = *param_1 + 1;
      *(char *)*param_1 = (char)((uint)uVar2 >> 0x10);
      *param_1 = *param_1 + 1;
      *(char *)*param_1 = (char)((uint)uVar2 >> 0x18);
      *param_1 = *param_1 + 1;
      *param_2 = *param_2 + 4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e69920 FUN_144e69920 body=568 status=ok
// SIG undefined FUN_144e69920(void)

void FUN_144e69920(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,longlong param_4,
                  int param_5,int param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar4 = (undefined2 *)*param_1;
  puVar3 = (undefined4 *)*param_2;
  if (param_5 == 1) {
    if (param_6 == 0) {
      for (; puVar3 <= param_3; puVar3 = (undefined4 *)((longlong)puVar3 + param_4)) {
        uVar2 = *puVar3;
        *(char *)puVar4 = (char)uVar2;
        *(char *)((longlong)puVar4 + 1) = (char)((uint)uVar2 >> 8);
        *(char *)(puVar4 + 1) = (char)((uint)uVar2 >> 0x10);
        *(char *)((longlong)puVar4 + 3) = (char)((uint)uVar2 >> 0x18);
        puVar4 = puVar4 + 2;
      }
    }
    else if (param_6 == 1) {
      for (; puVar3 <= param_3; puVar3 = (undefined4 *)((longlong)puVar3 + param_4)) {
        uVar1 = *(undefined2 *)puVar3;
        *(char *)puVar4 = (char)uVar1;
        *(char *)((longlong)puVar4 + 1) = (char)((ushort)uVar1 >> 8);
        puVar4 = puVar4 + 1;
      }
    }
    else {
      if (param_6 != 2) {
        FUN_144e40d70(local_78,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
      }
      for (; puVar3 <= param_3; puVar3 = (undefined4 *)((longlong)puVar3 + param_4)) {
        local_88 = *puVar3;
        *(char *)puVar4 = (char)local_88;
        *(char *)((longlong)puVar4 + 1) = (char)((uint)local_88 >> 8);
        *(char *)(puVar4 + 1) = (char)((uint)local_88 >> 0x10);
        *(char *)((longlong)puVar4 + 3) = (char)((uint)local_88 >> 0x18);
        puVar4 = puVar4 + 2;
      }
    }
  }
  else if (param_6 == 0) {
    for (; puVar3 <= param_3; puVar3 = (undefined4 *)((longlong)puVar3 + param_4)) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      *(undefined1 *)((longlong)puVar4 + 1) = *(undefined1 *)((longlong)puVar3 + 1);
      *(undefined1 *)(puVar4 + 1) = *(undefined1 *)((longlong)puVar3 + 2);
      *(undefined1 *)((longlong)puVar4 + 3) = *(undefined1 *)((longlong)puVar3 + 3);
      puVar4 = puVar4 + 2;
    }
  }
  else if (param_6 == 1) {
    for (; puVar3 <= param_3; puVar3 = (undefined4 *)((longlong)puVar3 + param_4)) {
      *puVar4 = *(undefined2 *)puVar3;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    if (param_6 != 2) {
      FUN_144e40d70(local_78,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
    }
    for (; puVar3 <= param_3; puVar3 = (undefined4 *)((longlong)puVar3 + param_4)) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      *(undefined1 *)((longlong)puVar4 + 1) = *(undefined1 *)((longlong)puVar3 + 1);
      *(undefined1 *)(puVar4 + 1) = *(undefined1 *)((longlong)puVar3 + 2);
      *(undefined1 *)((longlong)puVar4 + 3) = *(undefined1 *)((longlong)puVar3 + 3);
      puVar4 = puVar4 + 2;
    }
  }
  *param_1 = puVar4;
  *param_2 = puVar3;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144e69b70 FUN_144e69b70 body=526 status=ok
// SIG undefined FUN_144e69b70(void)

void FUN_144e69b70(longlong *param_1,int param_2,int param_3,longlong param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [4];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 1) {
    if (param_3 == 0) {
      for (; param_4 != 0; param_4 = param_4 + -1) {
        *(undefined1 *)*param_1 = 0;
        *param_1 = *param_1 + 1;
        *(undefined1 *)*param_1 = 0;
        *param_1 = *param_1 + 1;
        *(undefined1 *)*param_1 = 0;
        *param_1 = *param_1 + 1;
        *(undefined1 *)*param_1 = 0;
        *param_1 = *param_1 + 1;
      }
    }
    else if (param_3 == 1) {
      for (; param_4 != 0; param_4 = param_4 + -1) {
        puVar2 = (undefined2 *)FUN_144e66df0(local_88,0);
        uVar1 = *puVar2;
        *(char *)*param_1 = (char)uVar1;
        *param_1 = *param_1 + 1;
        *(char *)*param_1 = (char)((ushort)uVar1 >> 8);
        *param_1 = *param_1 + 1;
      }
    }
    else {
      if (param_3 != 2) {
        FUN_144e40d70(local_78,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
      }
      if (param_4 != 0) {
        local_88[0] = 0;
        do {
          *(undefined1 *)*param_1 = 0;
          *param_1 = *param_1 + 1;
          *(undefined1 *)*param_1 = 0;
          *param_1 = *param_1 + 1;
          *(undefined1 *)*param_1 = 0;
          *param_1 = *param_1 + 1;
          *(undefined1 *)*param_1 = 0;
          *param_1 = *param_1 + 1;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
      }
    }
  }
  else if (param_3 == 0) {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      *(undefined1 *)*param_1 = 0;
      *param_1 = *param_1 + 1;
      *(undefined1 *)*param_1 = 0;
      *param_1 = *param_1 + 1;
      *(undefined1 *)*param_1 = 0;
      *param_1 = *param_1 + 1;
      *(undefined1 *)*param_1 = 0;
      *param_1 = *param_1 + 1;
    }
  }
  else if (param_3 == 1) {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      puVar2 = (undefined2 *)FUN_144e66df0(local_88,0);
      *(undefined2 *)*param_1 = *puVar2;
      *param_1 = *param_1 + 2;
    }
  }
  else {
    if (param_3 != 2) {
      FUN_144e40d70(local_78,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
    }
    for (; param_4 != 0; param_4 = param_4 + -1) {
      *(undefined1 *)*param_1 = 0;
      *param_1 = *param_1 + 1;
      *(undefined1 *)*param_1 = 0;
      *param_1 = *param_1 + 1;
      *(undefined1 *)*param_1 = 0;
      *param_1 = *param_1 + 1;
      *(undefined1 *)*param_1 = 0;
      *param_1 = *param_1 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144e69da0 FUN_144e69da0 body=305 status=ok
// SIG undefined FUN_144e69da0(void)

undefined8 FUN_144e69da0(undefined8 param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res10;
  undefined1 local_res18 [16];
  
  FUN_144b67ac0(param_1,&local_res10);
  plVar1 = (longlong *)FUN_144b67ad0(param_1,local_res18);
  if (local_res10 != *plVar1) {
    do {
      uVar2 = 0xffffffffffffffff;
      do {
        uVar2 = uVar2 + 1;
      } while (*(char *)(local_res10 + 0x20 + uVar2) != '\0');
      if (0x1f < uVar2) {
        return 1;
      }
      lVar3 = (**(code **)(**(longlong **)(local_res10 + 0x120) + 8))();
      uVar2 = 0xffffffffffffffff;
      do {
        uVar2 = uVar2 + 1;
      } while (*(char *)(lVar3 + uVar2) != '\0');
      if (0x1f < uVar2) {
        return 1;
      }
      FUN_144e66f00(&local_res10);
      plVar1 = (longlong *)FUN_144b67ad0(param_1,local_res18);
    } while (local_res10 != *plVar1);
  }
  uVar4 = FUN_144b67b80(param_1);
  FUN_144b65f20(uVar4,&local_res10);
  plVar1 = (longlong *)FUN_144b65f40(uVar4,local_res18);
  if (local_res10 != *plVar1) {
    do {
      uVar2 = 0xffffffffffffffff;
      do {
        uVar2 = uVar2 + 1;
      } while (*(char *)(local_res10 + 0x1c + uVar2) != '\0');
      if (0x1f < uVar2) {
        return 1;
      }
      FUN_144b663b0(&local_res10);
      plVar1 = (longlong *)FUN_144b65f40(uVar4,local_res18);
    } while (local_res10 != *plVar1);
  }
  return 0;
}



// FUNCTION 144e69ee0 FUN_144e69ee0 body=228 status=ok
// SIG undefined FUN_144e69ee0(void)

void FUN_144e69ee0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_144b68010();
  if (cVar1 != '\0') {
    uVar2 = FUN_144b67f80(param_1);
    cVar1 = FUN_144e61fb0(uVar2);
    if (cVar1 == '\0') {
      cVar1 = FUN_144b680c0(param_1);
      if (cVar1 == '\0') {
        FUN_144e40d70(local_78,"unsupported header type to get chunk offset table size");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
      }
      FUN_144b680e0(param_1);
      goto LAB_144e69f92;
    }
  }
  uVar2 = FUN_144b67f80(param_1);
  cVar1 = FUN_144e61e70(uVar2);
  if (cVar1 == '\0') {
    FUN_144b67b20();
    puVar3 = (undefined4 *)FUN_144b67c00(param_1);
    FUN_144e49d50(*puVar3);
  }
  else {
    FUN_144e66660(param_1);
  }
LAB_144e69f92:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e69fd0 FUN_144e69fd0 body=252 status=ok
// SIG undefined FUN_144e69fd0(void)

void FUN_144e69fd0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined **local_98 [3];
  longlong *local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_1;
  FUN_144e6a600(local_98);
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  FUN_144e6a7e0(local_98,param_1,param_2,lVar4 + param_2);
  local_98[0] = std::
                wstring_convert<std::codecvt_utf8<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
                ::vftable;
  FUN_144e62a30(local_58);
  if (0xf < uStack_60) {
    uVar3 = uStack_60 + 1;
    lVar1 = CONCAT71(uStack_77,local_78);
    lVar4 = lVar1;
    if (0xfff < uVar3) {
      uVar3 = uStack_60 + 0x28;
      lVar4 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar4,uVar3);
  }
  local_68 = 0;
  uStack_60 = 0xf;
  local_78 = 0;
  if (local_80 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*local_80 + 0x10))();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c8);
}



// FUNCTION 144e6a0e0 FUN_144e6a0e0 body=148 status=ok
// SIG undefined FUN_144e6a0e0(void)

void FUN_144e6a0e0(longlong *param_1,ulonglong param_2)

{
  size_t _Size;
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_res8 [8];
  
  _Dst = (void *)param_1[1];
  lVar1 = *param_1;
  uVar2 = (longlong)_Dst - lVar1 >> 3;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + param_2 * 8;
    return;
  }
  if (uVar2 < param_2) {
    if ((ulonglong)(param_1[2] - lVar1 >> 3) < param_2) {
      FUN_144b702f0(param_1,param_2,local_res8);
      return;
    }
    _Size = (param_2 - uVar2) * 8;
    memset(_Dst,0,_Size);
    param_1[1] = (longlong)(_Size + (longlong)_Dst);
  }
  return;
}



// FUNCTION 144e6a180 FUN_144e6a180 body=347 status=ok
// SIG undefined FUN_144e6a180(void)

bool FUN_144e6a180(undefined8 param_1,char *param_2,byte *param_3,byte *param_4,longlong *param_5,
                  longlong param_6,longlong param_7,longlong *param_8)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  *param_5 = (longlong)param_3;
  *param_8 = param_6;
  pbVar4 = (byte *)*param_5;
  do {
    if ((pbVar4 == param_4) || (param_6 == param_7)) goto LAB_144e6a2ae;
    bVar1 = *pbVar4;
    uVar3 = (uint)bVar1;
    if (bVar1 < 0x80) {
      *param_5 = (longlong)(pbVar4 + 1);
    }
    else {
      if (bVar1 < 0xc0) {
        *param_5 = (longlong)(pbVar4 + 1);
        return (bool)2;
      }
      uVar2 = (uint)bVar1;
      if (bVar1 < 0xe0) {
        uVar2 = uVar2 & 0x1f;
        iVar5 = 1;
      }
      else if (bVar1 < 0xf0) {
        uVar2 = uVar2 & 0xf;
        iVar5 = 2;
      }
      else if (bVar1 < 0xf8) {
        uVar2 = uVar2 & 7;
        iVar5 = 3;
      }
      else {
        uVar2 = uVar2 & 3;
        iVar5 = 5 - (uint)(uVar3 < 0xfc);
      }
      if ((longlong)param_4 - (longlong)pbVar4 < (longlong)(ulonglong)(iVar5 + 1)) {
LAB_144e6a2ae:
        return param_3 == pbVar4;
      }
      pbVar4 = pbVar4 + 1;
      *param_5 = (longlong)pbVar4;
      uVar3 = uVar2;
      do {
        if (0x3f < *pbVar4 - 0x80) {
          return (bool)2;
        }
        iVar5 = iVar5 + -1;
        uVar3 = *pbVar4 & 0x3f | uVar3 << 6;
        pbVar4 = pbVar4 + 1;
        *param_5 = (longlong)pbVar4;
      } while (0 < iVar5);
    }
    if (*param_2 == '\0') {
      *param_2 = '\x01';
    }
    if (0x10ffff < uVar3) {
      return (bool)2;
    }
    *(short *)*param_8 = (short)uVar3;
    *param_8 = *param_8 + 2;
    pbVar4 = (byte *)*param_5;
    param_6 = *param_8;
  } while( true );
}



// FUNCTION 144e6a2e0 FUN_144e6a2e0 body=290 status=ok
// SIG undefined FUN_144e6a2e0(void)

bool FUN_144e6a2e0(undefined8 param_1,char *param_2,longlong param_3,ushort *param_4,
                  longlong *param_5,byte *param_6,byte *param_7,longlong *param_8)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  
  *param_5 = param_3;
  *param_8 = (longlong)param_6;
  puVar2 = (ushort *)*param_5;
  while ((puVar2 != param_4 && (param_6 != param_7))) {
    uVar1 = *puVar2;
    if (uVar1 < 0x80) {
      bVar5 = (byte)uVar1;
      iVar3 = 0;
    }
    else if (uVar1 < 0x800) {
      iVar3 = 1;
      bVar5 = (byte)(uVar1 >> 6) | 0xc0;
    }
    else {
      iVar3 = 2;
      bVar5 = (byte)(uVar1 >> 0xc) | 0xe0;
    }
    if (*param_2 == '\0') {
      *param_2 = '\x01';
    }
    if ((longlong)param_7 - *param_8 < (longlong)(ulonglong)(iVar3 + 1)) break;
    *param_5 = *param_5 + 2;
    *(byte *)*param_8 = bVar5;
    param_6 = (byte *)(*param_8 + 1);
    *param_8 = (longlong)param_6;
    if (iVar3 != 0) {
      iVar4 = iVar3 * 6;
      do {
        iVar4 = iVar4 + -6;
        iVar3 = iVar3 + -1;
        *param_6 = (byte)(uVar1 >> ((byte)iVar4 & 0x1f)) & 0x3f | 0x80;
        param_6 = (byte *)(*param_8 + 1);
        *param_8 = (longlong)param_6;
      } while (0 < iVar3);
    }
    puVar2 = (ushort *)*param_5;
  }
  return param_3 == *param_5;
}



// FUNCTION 144e6a410 FUN_144e6a410 body=14 status=ok
// SIG undefined FUN_144e6a410(void)

undefined8
FUN_144e6a410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  *param_5 = param_3;
  return 3;
}



// FUNCTION 144e6a420 FUN_144e6a420 body=360 status=ok
// SIG undefined FUN_144e6a420(void)

ulonglong FUN_144e6a420(undefined8 param_1,char *param_2,byte *param_3,byte *param_4,
                       longlong param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte *pbVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 local_18 [2];
  undefined1 local_16 [14];
  
  pbVar4 = param_3;
  if (param_5 != 0) {
    while (pbVar6 = pbVar4, puVar8 = local_18, pbVar4 != param_4) {
      do {
        if (puVar8 == local_16) break;
        bVar1 = *pbVar6;
        uVar3 = (uint)bVar1;
        if (bVar1 < 0x80) {
          pbVar6 = pbVar6 + 1;
        }
        else {
          if (bVar1 < 0xc0) goto LAB_144e6a55d;
          uVar2 = (uint)bVar1;
          if (bVar1 < 0xe0) {
            uVar2 = uVar2 & 0x1f;
            iVar7 = 1;
          }
          else if (bVar1 < 0xf0) {
            uVar2 = uVar2 & 0xf;
            iVar7 = 2;
          }
          else if (bVar1 < 0xf8) {
            uVar2 = uVar2 & 7;
            iVar7 = 3;
          }
          else {
            uVar2 = uVar2 & 3;
            iVar7 = 5 - (uint)(uVar3 < 0xfc);
          }
          if ((longlong)param_4 - (longlong)pbVar6 < (longlong)(ulonglong)(iVar7 + 1)) break;
          pbVar6 = pbVar6 + 1;
          uVar3 = uVar2;
          do {
            if (0x3f < *pbVar6 - 0x80) goto LAB_144e6a55d;
            uVar3 = *pbVar6 & 0x3f | uVar3 << 6;
            iVar7 = iVar7 + -1;
            pbVar6 = pbVar6 + 1;
          } while (0 < iVar7);
        }
        if (*param_2 == '\0') {
          *param_2 = '\x01';
        }
        if (0x10ffff < uVar3) goto LAB_144e6a55d;
        puVar8 = puVar8 + 2;
      } while (pbVar6 != param_4);
      if (pbVar4 == pbVar6) break;
      if (puVar8 == local_16) {
        param_5 = param_5 + -1;
      }
      pbVar4 = pbVar6;
      if (param_5 == 0) break;
    }
  }
LAB_144e6a55d:
  uVar5 = (longlong)pbVar4 - (longlong)param_3 & 0xffffffff;
  if (0x7fffffff < (longlong)pbVar4 - (longlong)param_3) {
    uVar5 = 0x7fffffff;
  }
  return uVar5;
}



// FUNCTION 144e6a590 FUN_144e6a590 body=3 status=ok
// SIG undefined FUN_144e6a590(void)

undefined1 FUN_144e6a590(void)

{
  return 0;
}



// FUNCTION 144e6a5a0 FUN_144e6a5a0 body=6 status=ok
// SIG undefined FUN_144e6a5a0(void)

undefined8 FUN_144e6a5a0(void)

{
  return 6;
}



// FUNCTION 144e6a5b0 FUN_144e6a5b0 body=3 status=ok
// SIG undefined FUN_144e6a5b0(void)

undefined8 FUN_144e6a5b0(void)

{
  return 0;
}



// FUNCTION 144e6a5c0 FUN_144e6a5c0 body=63 status=ok
// SIG undefined FUN_144e6a5c0(void)

codecvt<wchar_t,char,_Mbstatet> *
FUN_144e6a5c0(codecvt<wchar_t,char,_Mbstatet> *param_1,uint param_2)

{
  *(undefined ***)param_1 = std::codecvt_utf8<wchar_t,1114111,0>::vftable;
  std::codecvt<wchar_t,char,_Mbstatet>::~codecvt<wchar_t,char,_Mbstatet>(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144e6a600 FUN_144e6a600 body=315 status=ok
// SIG undefined FUN_144e6a600(void)

undefined8 * FUN_144e6a600(undefined8 *param_1)

{
  _Locimp *p_Var1;
  codecvt<wchar_t,char,_Mbstatet> *this;
  __uint64 _Var2;
  undefined8 *puVar3;
  codecvt<wchar_t,char,_Mbstatet> *pcVar4;
  
  *param_1 = std::
             wstring_convert<std::codecvt_utf8<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
             ::vftable;
  p_Var1 = std::locale::_Init(true);
  param_1[3] = p_Var1;
  param_1[4] = 0;
  param_1[5] = 0;
  pcVar4 = (codecvt<wchar_t,char,_Mbstatet> *)0x0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 7;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 0;
  this = (codecvt<wchar_t,char,_Mbstatet> *)FUN_14494321d(0x40);
  if (this != (codecvt<wchar_t,char,_Mbstatet> *)0x0) {
    std::codecvt<wchar_t,char,_Mbstatet>::codecvt<wchar_t,char,_Mbstatet>(this,0);
    *(undefined ***)this = std::codecvt_utf8<wchar_t,1114111,0>::vftable;
    pcVar4 = this;
  }
  param_1[0xc] = 0;
  param_1[1] = pcVar4;
  p_Var1 = std::locale::_Locimp::_New_Locimp((_Locimp *)param_1[3]);
  if (pcVar4 != (codecvt<wchar_t,char,_Mbstatet> *)0x0) {
    _Var2 = std::locale::id::operator_unsigned___int64((id *)id_exref);
    std::locale::_Locimp::_Locimp_Addfac(p_Var1,(facet *)pcVar4,_Var2);
    *(undefined4 *)(p_Var1 + 0x20) = 0;
    std::_Yarn<char>::operator=((_Yarn<char> *)(p_Var1 + 0x28),"*");
  }
  if ((_Locimp *)param_1[3] != p_Var1) {
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1[3] + 0x10))();
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    param_1[3] = p_Var1;
    (**(code **)(*(longlong *)p_Var1 + 8))(p_Var1);
  }
  if ((p_Var1 != (_Locimp *)0x0) &&
     (puVar3 = (undefined8 *)(**(code **)(*(longlong *)p_Var1 + 0x10))(p_Var1),
     puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,1);
  }
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 144e6a740 FUN_144e6a740 body=154 status=ok
// SIG undefined FUN_144e6a740(void)

void FUN_144e6a740(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *param_1 = std::
             wstring_convert<std::codecvt_utf8<wchar_t,1114111,0>,wchar_t,std::allocator<wchar_t>,std::allocator<char>_>
             ::vftable;
  FUN_144e62a30(param_1 + 8);
  uVar1 = param_1[7];
  if (0xf < uVar1) {
    lVar2 = param_1[4];
    uVar5 = uVar1 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      uVar5 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar4,uVar5);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  if (((longlong *)param_1[3] != (longlong *)0x0) &&
     (puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1[3] + 0x10))(),
     puVar3 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144e6a7cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar3)(puVar3,1);
    return;
  }
  return;
}



// FUNCTION 144e6a7e0 FUN_144e6a7e0 body=1857 status=ok
// SIG undefined FUN_144e6a7e0(void)

void FUN_144e6a7e0(longlong param_1,wchar_t ****param_2,byte *param_3,byte *param_4)

{
  wchar_t ***pppwVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  size_t sVar5;
  byte *pbVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *puVar9;
  wchar_t ****ppppwVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *_Src;
  undefined8 *puVar13;
  wchar_t ***pppwVar14;
  wchar_t ***pppwVar15;
  ulonglong uVar16;
  wchar_t ****ppppwVar17;
  wchar_t ***pppwVar18;
  wchar_t ***pppwVar19;
  _Mbstatet *p_Var20;
  undefined1 auStackY_128 [32];
  byte *local_e8;
  _Mbstatet *local_e0;
  longlong local_d8;
  wchar_t **local_d0;
  byte *local_c8;
  wchar_t ***local_c0;
  void *local_b8;
  wchar_t ***local_b0 [2];
  byte *local_a0;
  wchar_t ***local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  wchar_t **local_68;
  wchar_t **ppwStack_60;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStackY_128;
  pppwVar18 = (wchar_t ***)0x0;
  uStack_90 = 0;
  local_88 = 0;
  pppwVar14 = (wchar_t ***)&DAT_00000007;
  local_80 = 7;
  local_98 = (wchar_t ***)0x0;
  uStack_70 = 0;
  local_68 = (wchar_t **)0x0;
  ppwStack_60 = (wchar_t **)&DAT_00000007;
  local_78 = (undefined8 *)0x0;
  p_Var20 = (_Mbstatet *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x68) == '\0') {
    *(undefined8 *)p_Var20 = 0;
  }
  local_e8 = param_3;
  local_e0 = p_Var20;
  local_d8 = param_1;
  local_c8 = param_4;
  local_c0 = (wchar_t ***)param_2;
  local_b0[0] = (wchar_t ***)param_2;
  local_a0 = param_3;
  local_98 = (wchar_t ***)FUN_145b28560(&local_98,0x10);
  local_88 = 8;
  local_80 = 0xf;
  *local_98 = (wchar_t **)0x0;
  local_98[1] = (wchar_t **)0x0;
  *(undefined2 *)(local_98 + 2) = 0;
  *(undefined8 *)(local_d8 + 0x70) = 0;
  _Src = local_78;
  if (local_e8 != param_4) {
    do {
      pbVar6 = local_c8;
      ppppwVar10 = &local_98;
      if (7 < local_80) {
        ppppwVar10 = (wchar_t ****)local_98;
      }
      iVar8 = std::codecvt<wchar_t,char,_Mbstatet>::in
                        (*(codecvt<wchar_t,char,_Mbstatet> **)(local_d8 + 8),p_Var20,
                         (char *)local_e8,(char *)local_c8,(char **)&local_e8,(wchar_t *)ppppwVar10,
                         (wchar_t *)((longlong)ppppwVar10 + local_88 * 2),(wchar_t **)local_b0);
      uVar7 = local_80;
      uVar12 = local_88;
      pppwVar15 = pppwVar14;
      pppwVar19 = pppwVar18;
      if ((iVar8 == 0) || (iVar8 == 1)) {
        if (ppppwVar10 < local_b0[0]) {
          uVar12 = (longlong)local_b0[0] - (longlong)ppppwVar10 >> 1;
          if ((ulonglong)((longlong)pppwVar14 - (longlong)pppwVar18) < uVar12) {
            local_d0 = (wchar_t **)pppwVar18;
            if (0x7ffffffffffffffeU - (longlong)pppwVar18 < uVar12) {
LAB_144e6af28:
                    /* WARNING: Subroutine does not return */
              FUN_146eb22ad();
            }
            pppwVar19 = (wchar_t ***)((longlong)pppwVar18 + uVar12);
            pppwVar15 = (wchar_t ***)((ulonglong)pppwVar19 | 7);
            if (pppwVar15 < (wchar_t ***)0x7fffffffffffffff) {
              if ((wchar_t ***)(0x7ffffffffffffffe - ((ulonglong)pppwVar14 >> 1)) < pppwVar14) {
                pppwVar15 = (wchar_t ***)0x7ffffffffffffffe;
              }
              else {
                pppwVar18 = (wchar_t ***)(((ulonglong)pppwVar14 >> 1) + (longlong)pppwVar14);
                if (pppwVar15 < pppwVar18) {
                  pppwVar15 = pppwVar18;
                }
              }
            }
            else {
              pppwVar15 = (wchar_t ***)0x7ffffffffffffffe;
            }
            puVar9 = (undefined8 *)FUN_145b28560(&local_78,(longlong)pppwVar15 + 1);
            sVar5 = (longlong)local_d0 * 2;
            local_b8 = (void *)(sVar5 + (longlong)puVar9);
            local_d0 = (wchar_t **)(((longlong)local_d0 + uVar12) * 2 + (longlong)puVar9);
            local_68 = (wchar_t **)pppwVar19;
            ppwStack_60 = (wchar_t **)pppwVar15;
            if (pppwVar14 < &DAT_00000008) {
              memcpy(puVar9,&local_78,sVar5);
              memcpy(local_b8,ppppwVar10,uVar12 * 2);
              *(undefined2 *)local_d0 = 0;
              _Src = puVar9;
              p_Var20 = local_e0;
              local_78 = puVar9;
            }
            else {
              memcpy(puVar9,_Src,sVar5);
              memcpy(local_b8,ppppwVar10,uVar12 * 2);
              *(undefined2 *)local_d0 = 0;
              uVar12 = (longlong)pppwVar14 * 2 + 2;
              puVar13 = _Src;
              if (0xfff < uVar12) {
                uVar12 = (longlong)pppwVar14 * 2 + 0x29;
                puVar13 = (undefined8 *)_Src[-1];
                if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)puVar13))) {
LAB_144e6ae79:
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
              }
              thunk_FUN_1400020a8(puVar13,uVar12);
              _Src = puVar9;
              p_Var20 = local_e0;
              local_78 = puVar9;
            }
          }
          else {
            local_68 = (wchar_t **)(uVar12 + (longlong)pppwVar18);
            puVar9 = &local_78;
            if (&DAT_00000007 < pppwVar14) {
              puVar9 = _Src;
            }
            memmove((void *)((longlong)puVar9 + (longlong)pppwVar18 * 2),ppppwVar10,uVar12 * 2);
            *(undefined2 *)((longlong)puVar9 + ((longlong)pppwVar18 + uVar12) * 2) = 0;
            _Src = local_78;
            pppwVar15 = (wchar_t ***)ppwStack_60;
            pppwVar19 = (wchar_t ***)local_68;
            p_Var20 = local_e0;
          }
        }
        else {
          if (0xf < local_88) {
            if (*(char *)(local_d8 + 0x6a) == '\0') goto LAB_144e6af2e;
            FUN_144e66bb0(local_c0,local_d8 + 0x40);
            if (&DAT_00000007 < pppwVar14) {
              uVar12 = (longlong)pppwVar14 * 2 + 2;
              puVar9 = _Src;
              if (0xfff < uVar12) {
                uVar12 = (longlong)pppwVar14 * 2 + 0x29;
                puVar9 = (undefined8 *)_Src[-1];
                if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)puVar9)))
                goto LAB_144e6aece;
              }
              thunk_FUN_1400020a8(puVar9,uVar12);
            }
            if (local_80 < 8) goto LAB_144e6ae56;
            lVar3 = local_80 * 2;
            uVar12 = lVar3 + 2;
            ppppwVar10 = (wchar_t ****)local_98;
            if (0xfff < uVar12) {
              ppppwVar10 = (wchar_t ****)local_98[-1];
              lVar11 = (longlong)local_98 - (longlong)ppppwVar10;
              goto joined_r0x000144e6af1b;
            }
            goto LAB_144e6ae51;
          }
          if (local_80 - local_88 < 8) {
            if (0x7ffffffffffffffe - local_88 < 8) goto LAB_144e6af28;
            uVar16 = local_88 + 8 | 7;
            if (uVar16 < 0x7fffffffffffffff) {
              if (0x7ffffffffffffffe - (local_80 >> 1) < local_80) {
                uVar16 = 0x7ffffffffffffffe;
              }
              else {
                uVar2 = (local_80 >> 1) + local_80;
                if (uVar16 < uVar2) {
                  uVar16 = uVar2;
                }
              }
            }
            else {
              uVar16 = 0x7ffffffffffffffe;
            }
            ppppwVar10 = (wchar_t ****)FUN_145b28560(&local_98,uVar16 + 1);
            pppwVar14 = local_98;
            local_88 = uVar12 + 8;
            local_80 = uVar16;
            if (uVar7 < 8) {
              memcpy(ppppwVar10,&local_98,uVar12 * 2);
              *(undefined8 *)((longlong)ppppwVar10 + uVar12 * 2) = 0;
              *(undefined8 *)((longlong)ppppwVar10 + (uVar12 + 4) * 2) = 0;
              *(undefined2 *)((longlong)ppppwVar10 + (uVar12 + 8) * 2) = 0;
              p_Var20 = local_e0;
              local_98 = (wchar_t ***)ppppwVar10;
            }
            else {
              memcpy(ppppwVar10,local_98,uVar12 * 2);
              *(undefined8 *)((longlong)ppppwVar10 + uVar12 * 2) = 0;
              *(undefined8 *)((longlong)ppppwVar10 + (uVar12 + 4) * 2) = 0;
              *(undefined2 *)((longlong)ppppwVar10 + (uVar12 + 8) * 2) = 0;
              lVar3 = uVar7 * 2;
              uVar12 = lVar3 + 2;
              ppppwVar17 = (wchar_t ****)pppwVar14;
              if (0xfff < uVar12) {
                uVar12 = lVar3 + 0x29;
                ppppwVar17 = (wchar_t ****)pppwVar14[-1];
                if (0x1f < (ulonglong)((longlong)pppwVar14 + (-8 - (longlong)ppppwVar17)))
                goto LAB_144e6ae79;
              }
              thunk_FUN_1400020a8(ppppwVar17,uVar12);
              p_Var20 = local_e0;
              local_98 = (wchar_t ***)ppppwVar10;
            }
          }
          else {
            ppppwVar10 = &local_98;
            if (7 < local_80) {
              ppppwVar10 = (wchar_t ****)local_98;
            }
            lVar3 = local_88 * 2;
            local_88 = local_88 + 8;
            *(undefined8 *)((longlong)ppppwVar10 + lVar3) = 0;
            *(undefined8 *)((longlong)ppppwVar10 + (uVar12 + 4) * 2) = 0;
            *(undefined2 *)((longlong)ppppwVar10 + (uVar12 + 8) * 2) = 0;
            p_Var20 = local_e0;
          }
        }
      }
      else {
        if (iVar8 != 3) {
          if (*(char *)(local_d8 + 0x6a) == '\0') {
LAB_144e6af2e:
                    /* WARNING: Subroutine does not return */
            FUN_144e66dc0("bad conversion");
          }
          FUN_144e66bb0(local_c0,local_d8 + 0x40);
          if (&DAT_00000007 < pppwVar14) {
            uVar12 = (longlong)pppwVar14 * 2 + 2;
            puVar9 = _Src;
            if (0xfff < uVar12) {
              uVar12 = (longlong)pppwVar14 * 2 + 0x29;
              puVar9 = (undefined8 *)_Src[-1];
              if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)puVar9))) {
LAB_144e6aece:
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
            }
            thunk_FUN_1400020a8(puVar9,uVar12);
          }
          if (local_80 < 8) goto LAB_144e6ae56;
          lVar3 = local_80 * 2;
          uVar12 = lVar3 + 2;
          ppppwVar10 = (wchar_t ****)local_98;
          if (0xfff < uVar12) {
            ppppwVar10 = (wchar_t ****)local_98[-1];
            lVar11 = (longlong)local_98 - (longlong)ppppwVar10;
joined_r0x000144e6af1b:
            uVar12 = lVar3 + 0x29;
            if (0x1f < lVar11 - 8U) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          goto LAB_144e6ae51;
        }
        if (local_e8 != pbVar6) {
          do {
            bVar4 = *local_e8;
            if (pppwVar18 < pppwVar14) {
              local_68 = (wchar_t **)((longlong)pppwVar18 + 1);
              puVar9 = &local_78;
              if (&DAT_00000007 < pppwVar14) {
                puVar9 = _Src;
              }
              *(ushort *)((longlong)puVar9 + (longlong)pppwVar18 * 2) = (ushort)bVar4;
              *(undefined2 *)((longlong)puVar9 + (longlong)pppwVar18 * 2 + 2) = 0;
              pppwVar15 = (wchar_t ***)ppwStack_60;
              pppwVar19 = (wchar_t ***)local_68;
            }
            else {
              if (pppwVar18 == (wchar_t ***)0x7ffffffffffffffe) goto LAB_144e6af28;
              pppwVar19 = (wchar_t ***)((longlong)pppwVar18 + 1);
              pppwVar15 = (wchar_t ***)((ulonglong)pppwVar19 | 7);
              if (pppwVar15 < (wchar_t ***)0x7fffffffffffffff) {
                if ((wchar_t ***)(0x7ffffffffffffffe - ((ulonglong)pppwVar14 >> 1)) < pppwVar14) {
                  pppwVar15 = (wchar_t ***)0x7ffffffffffffffe;
                }
                else {
                  pppwVar1 = (wchar_t ***)((longlong)pppwVar14 + ((ulonglong)pppwVar14 >> 1));
                  if (pppwVar15 < pppwVar1) {
                    pppwVar15 = pppwVar1;
                  }
                }
              }
              else {
                pppwVar15 = (wchar_t ***)0x7ffffffffffffffe;
              }
              puVar9 = (undefined8 *)FUN_145b28560(&local_78,(longlong)pppwVar15 + 1);
              sVar5 = (longlong)pppwVar18 * 2;
              local_68 = (wchar_t **)pppwVar19;
              ppwStack_60 = (wchar_t **)pppwVar15;
              if (pppwVar14 < &DAT_00000008) {
                memcpy(puVar9,&local_78,sVar5);
                *(ushort *)(sVar5 + (longlong)puVar9) = (ushort)bVar4;
                *(undefined2 *)(sVar5 + 2 + (longlong)puVar9) = 0;
                local_78 = puVar9;
              }
              else {
                memcpy(puVar9,_Src,sVar5);
                *(ushort *)(sVar5 + (longlong)puVar9) = (ushort)bVar4;
                *(undefined2 *)(sVar5 + 2 + (longlong)puVar9) = 0;
                uVar12 = (longlong)pppwVar14 * 2 + 2;
                puVar13 = _Src;
                if (0xfff < uVar12) {
                  uVar12 = (longlong)pppwVar14 * 2 + 0x29;
                  puVar13 = (undefined8 *)_Src[-1];
                  if (0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)puVar13)))
                  goto LAB_144e6ae79;
                }
                thunk_FUN_1400020a8(puVar13,uVar12);
                local_78 = puVar9;
              }
            }
            local_e8 = local_e8 + 1;
            _Src = local_78;
            pppwVar14 = pppwVar15;
            pppwVar18 = pppwVar19;
            p_Var20 = local_e0;
          } while (local_e8 != local_c8);
        }
      }
      *(longlong *)(local_d8 + 0x70) = (longlong)local_e8 - (longlong)local_a0;
      pppwVar14 = pppwVar15;
      param_2 = (wchar_t ****)local_c0;
      pppwVar18 = pppwVar19;
    } while (local_e8 != local_c8);
  }
  *(undefined4 *)param_2 = (undefined4)local_78;
  *(undefined4 *)((longlong)param_2 + 4) = local_78._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_70._4_4_;
  param_2[2] = (wchar_t ***)local_68;
  param_2[3] = (wchar_t ***)ppwStack_60;
  if (7 < local_80) {
    uVar12 = local_80 * 2 + 2;
    ppppwVar10 = (wchar_t ****)local_98;
    if (0xfff < uVar12) {
      uVar12 = local_80 * 2 + 0x29;
      ppppwVar10 = (wchar_t ****)local_98[-1];
      if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)local_98[-1]))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
LAB_144e6ae51:
    thunk_FUN_1400020a8(ppppwVar10,uVar12);
  }
LAB_144e6ae56:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStackY_128);
}



// FUNCTION 144e6af40 FUN_144e6af40 body=52 status=ok
// SIG undefined FUN_144e6af40(void)

undefined8 FUN_144e6af40(undefined8 param_1,ulonglong param_2)

{
  FUN_144e6a740();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 144e6af80 FUN_144e6af80 body=178 status=ok
// SIG undefined FUN_144e6af80(void)

undefined8 *
FUN_144e6af80(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_144e66980();
  *param_1 = Imf_3_2::MultiPartInputFile::vftable;
  lVar1 = FUN_14494321d(0xb0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144e6dcc0(lVar1,1,param_3,param_4,lVar1);
  }
  uVar3 = 0;
  param_1[1] = uVar2;
  lVar1 = FUN_14494321d(0x38);
  if (lVar1 != 0) {
    uVar3 = FUN_144e62ad0(lVar1,param_2);
  }
  *(undefined8 *)(param_1[1] + 0x50) = uVar3;
  FUN_144e6b0e0(param_1);
  return param_1;
}



// FUNCTION 144e6b040 FUN_144e6b040 body=137 status=ok
// SIG undefined FUN_144e6b040(void)

undefined8 *
FUN_144e6b040(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_144e66980();
  *param_1 = Imf_3_2::MultiPartInputFile::vftable;
  lVar1 = FUN_14494321d(0xb0);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_144e6dcc0(lVar1,0,param_3,param_4,lVar1);
  }
  param_1[1] = uVar2;
  *(undefined8 *)(param_1[1] + 0x50) = param_2;
  FUN_144e6b0e0(param_1);
  return param_1;
}



// FUNCTION 144e6b0d0 FUN_144e6b0d0 body=9 status=ok
// SIG undefined FUN_144e6b0d0(void)

void FUN_144e6b0d0(longlong param_1)

{
  FUN_144e6dbd0(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 144e6b0e0 FUN_144e6b0e0 body=2733 status=ok
// SIG undefined FUN_144e6b0e0(void)

void FUN_144e6b0e0(longlong param_1)

{
  ulonglong **ppuVar1;
  ulonglong **ppuVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  uint uVar15;
  ulonglong **ppuVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong *puVar21;
  longlong lVar22;
  undefined1 auStack_1a8 [32];
  ulonglong **local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_170;
  ulonglong *local_168;
  longlong local_160;
  ulonglong local_158;
  longlong local_150;
  ulonglong **local_148;
  ulonglong **ppuStack_140;
  longlong local_138;
  ulonglong *local_128;
  longlong local_120;
  ulonglong *local_108;
  uint uStack_100;
  undefined4 uStack_fc;
  ulonglong *local_e8;
  uint uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_c8 [96];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_150 = param_1;
  FUN_144e66990(param_1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),
                *(longlong *)(param_1 + 8) + 0x60);
  uVar20 = *(uint *)(*(longlong *)(param_1 + 8) + 0x60);
  uVar15 = uVar20 >> 0xc;
  uVar20 = uVar20 >> 9;
  if (((uVar20 & 1) != 0) && ((uVar15 & 1) != 0)) {
    FUN_144e41060(local_c8,"Multipart files cannot have the tiled bit set");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_c8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  local_168 = (ulonglong *)0x0;
  local_170 = 3;
  puVar14 = (ulonglong *)0x0;
  local_178 = 0;
  local_180 = 0x3f800000;
  local_188 = &local_168;
  FUN_144b66f80(&local_148,0x40,0x40,0x3f800000);
  FUN_144b69700(&local_148,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),
                *(longlong *)(param_1 + 8) + 0x60);
  cVar3 = FUN_144b694b0(&local_148);
  while (cVar3 == '\0') {
    lVar8 = *(longlong *)(param_1 + 8);
    lVar22 = *(longlong *)(lVar8 + 0xa0);
    if (lVar22 == *(longlong *)(lVar8 + 0xa8)) {
      FUN_144e6e560(lVar8 + 0x98,lVar22,&local_148);
    }
    else {
      FUN_144b670b0(lVar22,&local_148);
      *(longlong *)(lVar8 + 0xa0) = *(longlong *)(lVar8 + 0xa0) + 0x18;
    }
    if ((uVar15 & 1) == 0) break;
    FUN_144b67220(&local_148);
    local_168 = (ulonglong *)0x0;
    local_170 = 3;
    local_178 = 0;
    local_180 = 0x3f800000;
    local_188 = &local_168;
    FUN_144b66f80(&local_148,0x40,0x40,0x3f800000);
    FUN_144b69700(&local_148,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50),
                  *(longlong *)(param_1 + 8) + 0x60);
    cVar3 = FUN_144b694b0(&local_148);
  }
  FUN_144b67220(&local_148);
  lVar8 = *(longlong *)(param_1 + 8);
  lVar22 = (*(longlong *)(lVar8 + 0xa0) - *(longlong *)(lVar8 + 0x98)) / 0x18;
  if (lVar22 == 0) {
    FUN_144e40d70(local_c8,"Files must contain at least one header");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_c8,(ThrowInfo *)&DAT_14c6d50e0);
  }
  puVar6 = puVar14;
  puVar21 = puVar14;
  if (lVar22 != 0) {
    do {
      cVar3 = FUN_144b68010(*(longlong *)(lVar8 + 0x98) + (longlong)puVar6);
      if (cVar3 == '\0') {
        if ((uVar15 & 1) != 0) {
          FUN_144e40d70(local_c8,"Every header in a multipart file should have a type");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_c8,(ThrowInfo *)&DAT_14c6d50e0);
        }
        puVar11 = &DAT_14c70a100;
        if ((uVar20 & 1) != 0) {
          puVar11 = &DAT_14c70a120;
        }
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
LAB_144e6b337:
        FUN_144b67d10(lVar8 + (longlong)puVar6,puVar11);
      }
      else if (((uVar15 & 1) == 0) &&
              ((*(uint *)(*(longlong *)(param_1 + 8) + 0x60) >> 0xb & 1) == 0)) {
        puVar11 = &DAT_14c70a100;
        if ((uVar20 & 1) != 0) {
          puVar11 = &DAT_14c70a120;
        }
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
        goto LAB_144e6b337;
      }
      cVar3 = FUN_144b67cf0(*(longlong *)(*(longlong *)(param_1 + 8) + 0x98) + (longlong)puVar6);
      if ((cVar3 == '\0') && ((uVar15 & 1) != 0)) {
        FUN_144e40d70(local_c8,"Every header in a multipart file should have a name");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_c8,(ThrowInfo *)&DAT_14c6d50e0);
      }
      uVar5 = FUN_144b67ef0(*(longlong *)(*(longlong *)(param_1 + 8) + 0x98) + (longlong)puVar6);
      uVar4 = FUN_144e61e70(uVar5);
      FUN_144b683a0(*(longlong *)(*(longlong *)(param_1 + 8) + 0x98) + (longlong)puVar6,uVar4,
                    (byte)uVar15 & 1);
      puVar21 = (ulonglong *)((longlong)puVar21 + 1);
      lVar8 = *(longlong *)(param_1 + 8);
      puVar6 = puVar6 + 3;
    } while (puVar21 < (ulonglong *)
                       ((*(longlong *)(lVar8 + 0xa0) - *(longlong *)(lVar8 + 0x98)) / 0x18));
  }
  if ((uVar15 & 1) != 0) {
    local_128 = (ulonglong *)0x0;
    local_120 = 0;
    puVar6 = (ulonglong *)FUN_14494321d(0x40);
    *puVar6 = (ulonglong)puVar6;
    puVar6[1] = (ulonglong)puVar6;
    puVar6[2] = (ulonglong)puVar6;
    *(undefined2 *)(puVar6 + 3) = 0x101;
    local_158 = 0;
    lVar8 = *(longlong *)(param_1 + 8);
    local_168 = puVar6;
    local_128 = puVar6;
    if ((*(longlong *)(lVar8 + 0xa0) - *(longlong *)(lVar8 + 0x98)) / 0x18 != 0) {
      local_160 = 0;
      do {
        puVar11 = (undefined8 *)FUN_144b67c60(*(longlong *)(lVar8 + 0x98) + local_160);
        local_108 = puVar11 + 3;
        puVar6 = local_128;
        if (*(char *)((longlong)local_128[1] + 0x19) == '\0') {
          uVar19 = *local_108;
          uVar13 = puVar11[2];
          puVar21 = (ulonglong *)local_128[1];
          do {
            puVar7 = puVar11;
            if (0xf < uVar19) {
              puVar7 = (undefined8 *)*puVar11;
            }
            puVar9 = puVar21 + 4;
            if (0xf < puVar21[7]) {
              puVar9 = (ulonglong *)puVar21[4];
            }
            uVar18 = puVar21[6];
            uVar17 = uVar18;
            if (uVar13 < uVar18) {
              uVar17 = uVar13;
            }
            uVar20 = memcmp(puVar9,puVar7,uVar17);
            if (uVar20 == 0) {
              if (uVar18 < uVar13) {
                uVar20 = 0xffffffff;
              }
              else {
                uVar20 = (uint)(uVar13 < uVar18);
              }
            }
            if ((int)uVar20 < 0) {
              puVar9 = (ulonglong *)puVar21[2];
            }
            else {
              puVar9 = (ulonglong *)*puVar21;
              puVar6 = puVar21;
            }
            puVar21 = puVar9;
            param_1 = local_150;
          } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
        }
        puVar21 = local_128;
        if (*(char *)((longlong)puVar6 + 0x19) == '\0') {
          puVar9 = puVar6 + 4;
          if (0xf < puVar6[7]) {
            puVar9 = (ulonglong *)puVar6[4];
          }
          puVar7 = puVar11;
          if (0xf < *local_108) {
            puVar7 = (undefined8 *)*puVar11;
          }
          uVar19 = puVar6[6];
          uVar13 = puVar11[2];
          uVar18 = uVar13;
          if (uVar19 < uVar13) {
            uVar18 = uVar19;
          }
          uVar20 = memcmp(puVar7,puVar9,uVar18);
          if (uVar20 == 0) {
            if (uVar13 < uVar19) {
              uVar20 = 0xffffffff;
            }
            else {
              uVar20 = (uint)(uVar19 < uVar13);
            }
          }
          if ((int)uVar20 < 0) goto LAB_144e6b550;
        }
        else {
LAB_144e6b550:
          puVar6 = puVar21;
        }
        plVar10 = (longlong *)(*(longlong *)(param_1 + 8) + 0x98);
        if (puVar6 != local_168) {
          uVar5 = FUN_144e6c2d0(plVar10,local_158);
          uVar5 = FUN_144b67c60(uVar5);
          uVar5 = FUN_1470a8a01(&local_e8,"Header name ",uVar5);
          uVar5 = FUN_144b6b440(&local_148,uVar5," is not a unique name.");
          FUN_144e41090(local_c8,uVar5);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_c8,(ThrowInfo *)&DAT_14c6d51d8);
        }
        puVar11 = (undefined8 *)FUN_144b67c60(local_160 + *plVar10);
        local_168 = local_128;
        local_e8 = (ulonglong *)local_128[1];
        uStack_e0 = 0;
        local_108 = puVar11 + 3;
        puVar21 = local_128;
        if (*(char *)((longlong)local_e8 + 0x19) == '\0') {
          uVar19 = *local_108;
          uVar13 = puVar11[2];
          puVar6 = local_e8;
          do {
            puVar7 = puVar11;
            if (0xf < uVar19) {
              puVar7 = (undefined8 *)*puVar11;
            }
            puVar9 = puVar6 + 4;
            if (0xf < puVar6[7]) {
              puVar9 = (ulonglong *)puVar6[4];
            }
            uVar18 = puVar6[6];
            uVar17 = uVar18;
            if (uVar13 < uVar18) {
              uVar17 = uVar13;
            }
            local_e8 = puVar6;
            uVar20 = memcmp(puVar9,puVar7,uVar17);
            if (uVar20 == 0) {
              if (uVar18 < uVar13) {
                uVar20 = 0xffffffff;
              }
              else {
                uVar20 = (uint)(uVar13 < uVar18);
              }
            }
            if (-1 < (int)uVar20) {
              puVar9 = (ulonglong *)*puVar6;
              puVar21 = puVar6;
            }
            else {
              puVar9 = (ulonglong *)puVar6[2];
            }
            uStack_e0 = (uint)(-1 < (int)uVar20);
            puVar6 = puVar9;
            param_1 = local_150;
          } while (*(char *)((longlong)puVar9 + 0x19) == '\0');
        }
        puVar6 = local_168;
        if (*(char *)((longlong)puVar21 + 0x19) == '\0') {
          puVar9 = puVar21 + 4;
          if (0xf < puVar21[7]) {
            puVar9 = (ulonglong *)puVar21[4];
          }
          puVar7 = puVar11;
          if (0xf < *local_108) {
            puVar7 = (undefined8 *)*puVar11;
          }
          uVar19 = puVar21[6];
          uVar13 = puVar11[2];
          uVar18 = uVar13;
          if (uVar19 < uVar13) {
            uVar18 = uVar19;
          }
          uVar20 = memcmp(puVar7,puVar9,uVar18);
          if (uVar20 == 0) {
            if (uVar13 < uVar19) {
              uVar20 = 0xffffffff;
            }
            else {
              uVar20 = (uint)(uVar19 < uVar13);
            }
          }
          if ((int)uVar20 < 0) goto LAB_144e6b67d;
        }
        else {
LAB_144e6b67d:
          if (local_120 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_1470a938d();
          }
          local_148 = &local_128;
          ppuStack_140 = (ulonglong **)0x0;
          puVar7 = (undefined8 *)FUN_14494321d(0x40);
          ppuStack_140 = (ulonglong **)puVar7;
          FUN_144b65a50(puVar7 + 4,puVar11);
          *puVar7 = puVar6;
          puVar7[1] = puVar6;
          puVar7[2] = puVar6;
          *(undefined2 *)(puVar7 + 3) = 0;
          ppuStack_140 = (ulonglong **)0x0;
          local_108 = local_e8;
          uStack_100 = uStack_e0;
          uStack_fc = uStack_dc;
          FUN_144b665c0(&local_128,&local_108,puVar7);
          local_168 = local_128;
          puVar6 = local_128;
        }
        local_158 = local_158 + 1;
        local_160 = local_160 + 0x18;
        lVar8 = *(longlong *)(param_1 + 8);
      } while (local_158 <
               (ulonglong)((*(longlong *)(lVar8 + 0xa0) - *(longlong *)(lVar8 + 0x98)) / 0x18));
    }
    uVar19 = 1;
    FUN_144b66820(&local_128,&local_128,puVar6[1]);
    thunk_FUN_1400020a8(local_128,0x40);
    lVar8 = *(longlong *)(param_1 + 8);
    if (1 < (ulonglong)((*(longlong *)(lVar8 + 0xa0) - *(longlong *)(lVar8 + 0x98)) / 0x18)) {
      lVar22 = 0x18;
      do {
        local_148 = (ulonglong **)0x0;
        ppuStack_140 = (ulonglong **)0x0;
        local_138 = 0;
        cVar3 = FUN_144e6d690(lVar8,*(longlong *)(lVar8 + 0x98),lVar22 + *(longlong *)(lVar8 + 0x98)
                              ,&local_148);
        ppuVar16 = ppuStack_140;
        ppuVar2 = local_148;
        if (cVar3 != '\0') {
          FUN_144e403e0(&local_e8);
          lVar8 = FUN_144e6e090(&local_148);
          if (lVar8 != 0) {
            do {
              uVar5 = FUN_144e6e0a0(&local_148,puVar14);
              uVar5 = FUN_1470a8a01(&local_128,&DAT_149982a34,uVar5);
              FUN_144e6bcc0(&local_e8,uVar5);
              FUN_144b65b20(&local_128);
              puVar14 = (ulonglong *)((longlong)puVar14 + 1);
              puVar6 = (ulonglong *)FUN_144e6e090(&local_148);
            } while (puVar14 < puVar6);
          }
          uVar5 = FUN_144e6c2d0(*(longlong *)(param_1 + 8) + 0x98,uVar19);
          uVar5 = FUN_144b67c60(uVar5);
          uVar5 = FUN_1470a8a01(&local_128,"Header name ",uVar5);
          uVar5 = FUN_144b6b440(&local_108,uVar5," has non-conforming shared attributes: ");
          uVar5 = FUN_144b6b4b0(local_68,uVar5,&local_e8);
          FUN_144e41090(local_c8,uVar5);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_c8,(ThrowInfo *)&DAT_14c6d51d8);
        }
        ppuVar1 = local_148;
        if (local_148 != (ulonglong **)0x0) {
          for (; ppuVar1 != ppuVar16; ppuVar1 = ppuVar1 + 4) {
            puVar6 = ppuVar1[3];
            if ((ulonglong *)0xf < puVar6) {
              puVar21 = *ppuVar1;
              puVar12 = (ulonglong *)((longlong)puVar6 + 1);
              puVar9 = puVar21;
              if ((ulonglong *)0xfff < puVar12) {
                puVar12 = puVar6 + 5;
                puVar9 = (ulonglong *)puVar21[-1];
                if (0x1f < (ulonglong)((longlong)puVar21 + (-8 - (longlong)puVar9)))
                goto LAB_144e6b8cd;
              }
              thunk_FUN_1400020a8(puVar9,puVar12);
            }
            ppuVar1[2] = (ulonglong *)0x0;
            ppuVar1[3] = (ulonglong *)0xf;
            *(undefined1 *)ppuVar1 = 0;
          }
          uVar13 = local_138 - (longlong)ppuVar2 & 0xffffffffffffffe0;
          ppuVar16 = ppuVar2;
          if (0xfff < uVar13) {
            uVar13 = uVar13 + 0x27;
            ppuVar16 = (ulonglong **)ppuVar2[-1];
            if ((undefined1 *)0x1f < (undefined1 *)((longlong)ppuVar2 + (-8 - (longlong)ppuVar16)))
            {
LAB_144e6b8cd:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
          }
          thunk_FUN_1400020a8(ppuVar16,uVar13);
        }
        uVar19 = uVar19 + 1;
        lVar22 = lVar22 + 0x18;
        lVar8 = *(longlong *)(param_1 + 8);
      } while (uVar19 < (ulonglong)
                        ((*(longlong *)(lVar8 + 0xa0) - *(longlong *)(lVar8 + 0x98)) / 0x18));
    }
  }
  puVar6 = puVar14;
  puVar21 = puVar14;
  if ((*(longlong *)(lVar8 + 0xa0) - *(longlong *)(lVar8 + 0x98)) / 0x18 != 0) {
    do {
      local_150 = FUN_14494321d(0x50);
      puVar9 = puVar14;
      if (local_150 != 0) {
        lVar8 = *(longlong *)(param_1 + 8);
        local_180 = *(undefined4 *)(lVar8 + 0x60);
        local_188 = (ulonglong **)CONCAT44(local_188._4_4_,*(undefined4 *)(lVar8 + 0x80));
        puVar9 = (ulonglong *)
                 FUN_14521d510(local_150,lVar8,*(longlong *)(lVar8 + 0x98) + (longlong)puVar21,
                               (ulonglong)puVar6 & 0xffffffff);
      }
      lVar8 = *(longlong *)(param_1 + 8);
      plVar10 = *(longlong **)(lVar8 + 0x70);
      local_108 = puVar9;
      if (plVar10 == *(longlong **)(lVar8 + 0x78)) {
        FUN_144e6e850(lVar8 + 0x68,plVar10,&local_108);
      }
      else {
        *plVar10 = (longlong)puVar9;
        *(longlong *)(lVar8 + 0x70) = *(longlong *)(lVar8 + 0x70) + 8;
      }
      puVar6 = (ulonglong *)((longlong)puVar6 + 1);
      lVar8 = *(longlong *)(param_1 + 8);
      puVar21 = puVar21 + 3;
    } while (puVar6 < (ulonglong *)
                      ((*(longlong *)(lVar8 + 0xa0) - *(longlong *)(lVar8 + 0x98)) / 0x18));
  }
  FUN_144e6d450(lVar8,*(undefined1 *)(lVar8 + 0x84));
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 144e6bbc0 FUN_144e6bbc0 body=249 status=ok
// SIG undefined FUN_144e6bbc0(void)

undefined8 * FUN_144e6bbc0(undefined8 *param_1,uint param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar6 = param_1[1];
  *param_1 = Imf_3_2::MultiPartInputFile::vftable;
  plVar5 = (longlong *)**(longlong **)(lVar6 + 0x88);
  if (plVar5 != *(longlong **)(lVar6 + 0x88)) {
    do {
      puVar2 = (undefined8 *)plVar5[5];
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      plVar3 = (longlong *)plVar5[2];
      if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x19);
        plVar5 = plVar3;
        plVar3 = (longlong *)*plVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*plVar3 + 0x19);
          plVar5 = plVar3;
          plVar3 = (longlong *)*plVar3;
        }
      }
      else {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
        while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
          cVar1 = *(char *)(plVar5[1] + 0x19);
          plVar4 = (longlong *)plVar5[1];
          plVar3 = plVar5;
        }
      }
      lVar6 = param_1[1];
    } while (plVar5 != *(longlong **)(lVar6 + 0x88));
  }
  if (lVar6 != 0) {
    FUN_144e6dd90(lVar6);
    thunk_FUN_1400020a8(lVar6,0xb0);
  }
  FUN_144e66970(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e6bcc0 FUN_144e6bcc0 body=25 status=ok
// SIG undefined FUN_144e6bcc0(void)

void FUN_144e6bcc0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  FUN_144a6594a(param_1,puVar1,param_2[2]);
  return;
}



// FUNCTION 144e6bce0 FUN_144e6bce0 body=110 status=ok
// SIG undefined FUN_144e6bce0(void)

ulonglong FUN_144e6bce0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x2000000000000000) {
    param_2 = param_2 * 8;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        uVar2 = FUN_14494321d();
        return uVar2;
      }
      return 0;
    }
    if (param_2 < param_2 + 0x27) {
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 144e6bd60 FUN_144e6bd60 body=16 status=ok
// SIG undefined FUN_144e6bd60(void)

void FUN_144e6bd60(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e6bdd0 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
// SIG undefined FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e6be30 FUN_144e6be30 body=12 status=ok
// SIG undefined FUN_144e6be30(void)

longlong FUN_144e6be30(longlong *param_1)

{
  return param_1[1] - *param_1 >> 3;
}



// FUNCTION 144e6be40 FUN_144e6be40 body=16 status=ok
// SIG undefined FUN_144e6be40(void)

void FUN_144e6be40(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e6be60 FUN_144e6be60 body=603 status=ok
// SIG undefined FUN_144e6be60(void)

longlong * FUN_144e6be60(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  param_1[1] = param_1[1] + 1;
  plVar2 = (longlong *)*param_1;
  plVar6 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar6;
  if (plVar6 == plVar2) {
    *plVar2 = (longlong)param_3;
    plVar2[1] = (longlong)param_3;
    plVar2[2] = (longlong)param_3;
    *(undefined1 *)(param_3 + 3) = 1;
    return param_3;
  }
  if ((int)param_2[1] == 0) {
    plVar6[2] = (longlong)param_3;
    if (plVar6 == (longlong *)plVar2[2]) {
      plVar2[2] = (longlong)param_3;
    }
  }
  else {
    *plVar6 = (longlong)param_3;
    if (plVar6 == (longlong *)*plVar2) {
      *plVar2 = (longlong)param_3;
    }
  }
  cVar1 = *(char *)(param_3[1] + 0x18);
  plVar6 = param_3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(plVar2[1] + 0x18) = 1;
      return param_3;
    }
    plVar7 = (longlong *)plVar6[1];
    lVar3 = *(longlong *)plVar7[1];
    if (plVar7 == (longlong *)lVar3) {
      lVar3 = ((longlong *)plVar7[1])[2];
      if (*(char *)(lVar3 + 0x18) == '\0') {
        *(undefined1 *)(plVar7 + 3) = 1;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar6 = *(longlong **)(plVar6[1] + 8);
      }
      else {
        plVar8 = (longlong *)plVar7[2];
        if (plVar6 == plVar8) {
          plVar7[2] = *plVar8;
          if (*(char *)(*plVar8 + 0x19) == '\0') {
            *(longlong **)(*plVar8 + 8) = plVar7;
          }
          plVar8[1] = plVar7[1];
          if (plVar7 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            plVar6 = (longlong *)plVar7[1];
            if (plVar7 == (longlong *)*plVar6) {
              *plVar6 = (longlong)plVar8;
            }
            else {
              plVar6[2] = (longlong)plVar8;
            }
          }
          *plVar8 = (longlong)plVar7;
          plVar7[1] = (longlong)plVar8;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)*plVar7;
        *plVar7 = plVar8[2];
        if (*(char *)(plVar8[2] + 0x19) == '\0') {
          *(longlong **)(plVar8[2] + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
          plVar8[2] = (longlong)plVar7;
        }
        else {
          plVar4 = (longlong *)plVar7[1];
          if (plVar7 == (longlong *)plVar4[2]) {
            plVar4[2] = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
          else {
            *plVar4 = (longlong)plVar8;
            plVar8[2] = (longlong)plVar7;
          }
        }
LAB_144e6c09d:
        plVar7[1] = (longlong)plVar8;
      }
    }
    else {
      if (*(char *)(lVar3 + 0x18) != '\0') {
        plVar8 = (longlong *)*plVar7;
        if (plVar6 == plVar8) {
          *plVar7 = plVar8[2];
          if (*(char *)(plVar8[2] + 0x19) == '\0') {
            *(longlong **)(plVar8[2] + 8) = plVar7;
          }
          plVar8[1] = plVar7[1];
          if (plVar7 == (longlong *)*(longlong *)(*param_1 + 8)) {
            *(longlong **)(*param_1 + 8) = plVar8;
          }
          else {
            puVar5 = (undefined8 *)plVar7[1];
            if (plVar7 == (longlong *)puVar5[2]) {
              puVar5[2] = plVar8;
            }
            else {
              *puVar5 = plVar8;
            }
          }
          plVar8[2] = (longlong)plVar7;
          plVar7[1] = (longlong)plVar8;
          plVar6 = plVar7;
        }
        *(undefined1 *)(plVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
        plVar7 = *(longlong **)(plVar6[1] + 8);
        plVar8 = (longlong *)plVar7[2];
        plVar7[2] = *plVar8;
        if (*(char *)(*plVar8 + 0x19) == '\0') {
          *(longlong **)(*plVar8 + 8) = plVar7;
        }
        plVar8[1] = plVar7[1];
        if (plVar7 == *(longlong **)(*param_1 + 8)) {
          *(longlong **)(*param_1 + 8) = plVar8;
        }
        else {
          puVar5 = (undefined8 *)plVar7[1];
          if (plVar7 == (longlong *)*puVar5) {
            *puVar5 = plVar8;
          }
          else {
            puVar5[2] = plVar8;
          }
        }
        *plVar8 = (longlong)plVar7;
        goto LAB_144e6c09d;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(plVar6[1] + 8);
    }
    cVar1 = *(char *)(plVar6[1] + 0x18);
  } while( true );
}



// FUNCTION 144e6c0c0 FUN_144e6c0c0 body=242 status=ok
// SIG undefined FUN_144e6c0c0(void)

longlong * FUN_144e6c0c0(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)*param_1;
  local_28 = (longlong *)plVar1[1];
  uStack_20 = 0;
  plVar4 = plVar1;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar3 = local_28;
    do {
      local_28 = plVar3;
      bVar2 = *param_2 <= (int)local_28[4];
      if (bVar2) {
        plVar3 = (longlong *)*local_28;
        plVar4 = local_28;
      }
      else {
        plVar3 = (longlong *)local_28[2];
      }
      uStack_20 = (uint)bVar2;
    } while (*(char *)((longlong)plVar3 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar4 + 0x19) != '\0') || (*param_2 < (int)plVar4[4])) {
    if (param_1[1] == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_1470a938d();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar4 = (longlong *)FUN_14494321d(0x30);
    *(int *)(plVar4 + 4) = *param_2;
    plVar4[5] = 0;
    *plVar4 = (longlong)plVar1;
    plVar4[1] = (longlong)plVar1;
    plVar4[2] = (longlong)plVar1;
    *(undefined2 *)(plVar4 + 3) = 0;
    local_38 = local_28;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    plVar4 = (longlong *)FUN_144e6be60(param_1,&local_38);
  }
  return plVar4 + 5;
}



// FUNCTION 144e6c1c0 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x18;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e6c210 FUN_144e6c210 body=177 status=ok
// SIG undefined FUN_144e6c210(void)

void FUN_144e6c210(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x18) {
      FUN_144b67220(lVar2);
    }
    lVar2 = *param_1;
    uVar1 = ((param_1[2] - lVar2) / 0x18) * 0x18;
    lVar3 = lVar2;
    if (0xfff < uVar1) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar1 = uVar1 + 0x27;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e6c2d0 FUN_144e6c2d0 body=12 status=ok
// SIG undefined FUN_144e6c2d0(void)

longlong FUN_144e6c2d0(longlong *param_1,longlong param_2)

{
  return *param_1 + param_2 * 0x18;
}



// FUNCTION 144e6c2e0 FUN_144e6c2e0 body=16 status=ok
// SIG undefined FUN_144e6c2e0(void)

void FUN_144e6c2e0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e6c300 FUN_144e6c300 body=4289 status=ok
// SIG undefined FUN_144e6c300(void)

void FUN_144e6c300(longlong param_1,undefined8 **param_2,longlong *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  char *_Buf2;
  undefined8 **ppuVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  longlong *plVar27;
  undefined1 auStack_658 [32];
  undefined4 local_638;
  undefined8 *local_628;
  uint local_620;
  undefined4 local_61c;
  undefined4 local_618;
  undefined4 local_614;
  undefined4 local_610;
  int local_60c;
  int local_608;
  int local_604;
  undefined8 **local_600;
  longlong *local_5f8;
  longlong *local_5f0;
  undefined8 *local_5e8;
  undefined8 *local_5e0;
  undefined8 **local_5d8;
  undefined8 *local_5d0;
  undefined8 *puStack_5c8;
  undefined8 *local_5c0;
  longlong *local_5b8;
  longlong *local_5b0;
  longlong *plStack_5a8;
  longlong *local_5a0;
  undefined8 *local_598;
  longlong lStack_590;
  longlong local_588;
  longlong local_580;
  longlong *local_578;
  longlong local_570;
  longlong local_568;
  longlong local_560;
  undefined8 *local_558;
  undefined8 *local_550;
  undefined8 **local_548;
  undefined1 local_538 [96];
  undefined1 local_4d8 [96];
  undefined1 local_478 [96];
  undefined1 local_418 [96];
  undefined1 local_3b8 [96];
  undefined1 local_358 [96];
  undefined1 local_2f8 [96];
  undefined1 local_298 [96];
  undefined1 local_238 [96];
  undefined1 local_1d8 [96];
  undefined1 local_178 [96];
  undefined1 local_118 [96];
  undefined1 local_b8 [96];
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_658;
  local_600 = param_2;
  local_5d8 = param_2;
  local_5b8 = param_3;
  local_578 = param_3;
  local_560 = param_1;
  local_568 = (*(code *)(*param_2)[4])(param_2);
  puVar26 = (undefined8 *)0x0;
  plVar14 = param_3 + 1;
  lVar11 = *plVar14;
  lVar20 = *param_3;
  puVar21 = puVar26;
  local_5f0 = plVar14;
  if (lVar11 - lVar20 >> 3 != 0) {
    do {
      uVar12 = *(undefined8 *)(lVar20 + (longlong)puVar21 * 8);
      cVar8 = FUN_144b68010(uVar12);
      if ((cVar8 == '\0') && ((*(uint *)(param_1 + 0x60) & 0x1800) != 0)) {
        FUN_144e40d70(local_538,"cannot reconstruct incomplete file: part with missing type");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_538,(ThrowInfo *)&DAT_14c6d50e0);
      }
      uVar10 = FUN_144b67ef0(uVar12);
      cVar8 = FUN_144e61fb0(uVar10);
      if (cVar8 == '\0') {
        uVar12 = FUN_144b67ef0(uVar12);
        uVar12 = FUN_1470a8a01(&local_558,
                               "cannot reconstruct incomplete file: part with unknown type ",uVar12)
        ;
        FUN_144e40da0(local_4d8,uVar12);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_4d8,(ThrowInfo *)&DAT_14c6d50e0);
      }
      puVar21 = (undefined8 *)((longlong)puVar21 + 1);
      lVar11 = *plVar14;
      lVar20 = *param_3;
    } while (puVar21 < (undefined8 *)(lVar11 - lVar20 >> 3));
  }
  local_5e8 = (undefined8 *)0x0;
  uVar18 = lVar11 - lVar20 >> 3;
  local_5b0 = (longlong *)0x0;
  plStack_5a8 = (longlong *)0x0;
  local_5a0 = (longlong *)0x0;
  if (uVar18 == 0) {
    plVar14 = (longlong *)0x0;
    local_5f8 = (longlong *)0x0;
  }
  else {
    if (0x1fffffffffffffff < uVar18) {
      FUN_144e6e140();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar1 = uVar18 * 8;
    if (uVar1 < 0x1000) {
      if (uVar1 == 0) {
        local_5f8 = (longlong *)0x0;
      }
      else {
        local_5f8 = (longlong *)FUN_14494321d(uVar1);
      }
    }
    else {
      if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar11 = FUN_14494321d();
      if (lVar11 == 0) goto LAB_144e6d19e;
      local_5f8 = (longlong *)(lVar11 + 0x27U & 0xffffffffffffffe0);
      local_5f8[-1] = lVar11;
    }
    plVar14 = local_5f8;
    local_5a0 = local_5f8 + uVar18;
    local_5b0 = local_5f8;
    memset(local_5f8,0,uVar1);
  }
  uVar18 = *local_5f0 - *param_3 >> 3;
  local_598 = (undefined8 *)0x0;
  lStack_590 = 0;
  local_588 = 0;
  plStack_5a8 = local_5a0;
  if (uVar18 == 0) {
    local_628 = (undefined8 *)0x0;
  }
  else {
    if (0x3fffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_14694aefc();
    }
    uVar18 = uVar18 * 4;
    if (uVar18 < 0x1000) {
      local_628 = puVar26;
      if (uVar18 != 0) {
        local_628 = (undefined8 *)FUN_14494321d(uVar18);
      }
    }
    else {
      if (uVar18 + 0x27 <= uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar11 = FUN_14494321d();
      if (lVar11 == 0) goto LAB_144e6d150;
      local_628 = (undefined8 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
      local_628[-1] = lVar11;
    }
    local_588 = (longlong)local_628 + uVar18;
    local_598 = local_628;
    memset(local_628,0,uVar18);
  }
  lVar11 = *param_3;
  puVar21 = puVar26;
  puVar23 = puVar26;
  lStack_590 = local_588;
  if (*local_5f0 - lVar11 >> 3 != 0) {
    do {
      lVar11 = *(longlong *)(lVar11 + (longlong)puVar21 * 8);
      puVar23 = (undefined8 *)
                ((longlong)puVar23 +
                (*(longlong *)(lVar11 + 0x38) - *(longlong *)(lVar11 + 0x30) >> 3));
      local_5e8 = puVar23;
      uVar12 = FUN_144b67ef0();
      cVar8 = FUN_144e61e70(uVar12);
      if (cVar8 == '\0') {
        plVar14[(longlong)puVar21] = 0;
        puVar13 = (undefined4 *)FUN_144b67be0(*(undefined8 *)(*param_3 + (longlong)puVar21 * 8));
        switch(*puVar13) {
        case 0:
        case 1:
        case 2:
          *(undefined4 *)((longlong)local_628 + (longlong)puVar21 * 4) = 1;
          break;
        case 3:
        case 5:
          *(undefined4 *)((longlong)local_628 + (longlong)puVar21 * 4) = 0x10;
          break;
        case 4:
        case 6:
        case 7:
        case 8:
          *(undefined4 *)((longlong)local_628 + (longlong)puVar21 * 4) = 0x20;
          break;
        case 9:
          *(undefined4 *)((longlong)local_628 + (longlong)puVar21 * 4) = 0x100;
          break;
        default:
          FUN_144e40d70(local_478,"Unknown compression method in chunk offset reconstruction");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_478,(ThrowInfo *)&DAT_14c6d50e0);
        }
      }
      else {
        lVar11 = FUN_144e6dac0(param_1,*(undefined8 *)(*param_3 + (longlong)puVar21 * 8));
        plVar14[(longlong)puVar21] = lVar11;
      }
      puVar21 = (undefined8 *)((longlong)puVar21 + 1);
      lVar11 = *param_3;
    } while (puVar21 < (undefined8 *)(*local_5f0 - lVar11 >> 3));
  }
  local_580 = local_568;
  lVar11 = local_568;
  for (local_5e0 = puVar26; local_5e0 < puVar23; local_5e0 = (undefined8 *)((longlong)local_5e0 + 1)
      ) {
    uVar17 = 0;
    if ((((*(uint *)(param_1 + 0x60) >> 0xc & 1) != 0) &&
        ((*(code *)(*param_2)[2])(param_2,&local_620,4), uVar17 = local_620, (int)local_620 < 0)) ||
       ((int)(*local_5f0 - *param_3 >> 3) <= (int)uVar17)) {
      FUN_144e411f0(local_b8,"part number out of range");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d52d8);
    }
    lVar20 = (ulonglong)uVar17 * 8;
    uVar12 = *(undefined8 *)(lVar20 + *param_3);
    local_570 = lVar20;
    uVar10 = FUN_144b67ef0(uVar12);
    cVar8 = FUN_144e61e70(uVar10);
    ppuVar19 = local_600;
    if (cVar8 == '\0') {
      (*(code *)(*local_600)[2])(local_600,&local_608,4);
      iVar9 = local_608;
      lVar15 = FUN_144b67b00(uVar12);
      if ((iVar9 < *(int *)(lVar15 + 4)) ||
         (lVar15 = FUN_144b67b00(uVar12), *(int *)(lVar15 + 0xc) < iVar9)) {
        FUN_144e411f0(local_118,"y out of range");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_118,(ThrowInfo *)&DAT_14c6d52d8);
      }
      lVar15 = FUN_144b67b00(uVar12);
      iVar9 = (iVar9 - *(int *)(lVar15 + 4)) / *(int *)((longlong)local_628 + (ulonglong)uVar17 * 4)
      ;
      if ((iVar9 < 0) ||
         (lVar15 = *(longlong *)(*(longlong *)(lVar20 + *param_3) + 0x30),
         (int)(*(longlong *)(*(longlong *)(lVar20 + *param_3) + 0x38) - lVar15 >> 3) <= iVar9)) {
        FUN_144e411f0(local_178,"chunk index out of range");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_178,(ThrowInfo *)&DAT_14c6d52d8);
      }
      *(longlong *)(lVar15 + (longlong)iVar9 * 8) = lVar11;
      puVar21 = (undefined8 *)FUN_144b67ef0(uVar12);
      ppuVar19 = &DAT_14c70a140;
      if (0xf < DAT_14c70a158) {
        ppuVar19 = (undefined8 **)DAT_14c70a140;
      }
      puVar23 = puVar21;
      if (0xf < (ulonglong)puVar21[3]) {
        puVar23 = (undefined8 *)*puVar21;
      }
      if ((puVar21[2] == DAT_14c70a150) &&
         (iVar9 = memcmp(puVar23,ppuVar19,puVar21[2]), param_2 = local_600, iVar9 == 0)) {
        (*(code *)(*local_600)[2])(local_600,&local_50,8);
        lVar20 = local_50;
        (*(code *)(*param_2)[2])(param_2,&local_58,8);
        if ((0x7fffffffffffffffU - lVar20 < local_58) ||
           ((0x7fffffffffffffff - local_58) - lVar20 < 0x1c)) {
          FUN_144e411f0(local_298,"Invalid chunk size");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_298,(ThrowInfo *)&DAT_14c6d52d8);
        }
        uVar18 = local_58 + 0x1c + lVar20;
      }
      else {
        param_2 = local_600;
        (*(code *)(*local_600)[2])(local_600,&local_604,4);
        if (local_604 < 0) {
          FUN_144e411f0(local_238,"Invalid chunk size");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_238,(ThrowInfo *)&DAT_14c6d52d8);
        }
        uVar18 = (longlong)local_604 + 8;
      }
    }
    else {
      (*(code *)(*local_600)[2])(local_600,&local_61c);
      uVar4 = local_61c;
      (*(code *)(*ppuVar19)[2])(ppuVar19,&local_618,4);
      uVar5 = local_618;
      (*(code *)(*ppuVar19)[2])(ppuVar19,&local_614,4);
      uVar6 = local_614;
      (*(code *)(*ppuVar19)[2])(ppuVar19,&local_610,4);
      uVar7 = local_610;
      if (*(longlong *)(local_570 + (longlong)local_5f8) == 0) {
        FUN_144e411f0(local_418,"part not tiled");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_418,(ThrowInfo *)&DAT_14c6d52d8);
      }
      local_638 = local_610;
      cVar8 = FUN_144e82b60(*(longlong *)(local_570 + (longlong)local_5f8),uVar4,uVar5,uVar6);
      if (cVar8 == '\0') {
        FUN_144e411f0(local_3b8,"invalid tile coordinates");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_3b8,(ThrowInfo *)&DAT_14c6d52d8);
      }
      local_638 = uVar7;
      plVar14 = (longlong *)
                FUN_144e82aa0(*(undefined8 *)(local_570 + (longlong)local_5f8),uVar4,uVar5,uVar6);
      lVar11 = local_580;
      *plVar14 = local_580;
      puVar21 = (undefined8 *)FUN_144b67ef0(uVar12);
      _Buf2 = s_deeptile_14c70a160;
      if (0xf < DAT_14c70a178) {
        _Buf2 = (char *)s_deeptile_14c70a160._0_8_;
      }
      puVar23 = puVar21;
      if (0xf < (ulonglong)puVar21[3]) {
        puVar23 = (undefined8 *)*puVar21;
      }
      if ((puVar21[2] == DAT_14c70a170) &&
         (iVar9 = memcmp(puVar23,_Buf2,puVar21[2]), param_2 = local_600, iVar9 == 0)) {
        (*(code *)(*local_600)[2])(local_600,&local_40,8);
        lVar20 = local_40;
        (*(code *)(*param_2)[2])(param_2,&local_48,8);
        if ((0x7fffffffffffffffU - lVar20 < local_48) ||
           ((0x7fffffffffffffff - local_48) - lVar20 < 0x28)) {
          FUN_144e411f0(local_358,"Invalid chunk size");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_358,(ThrowInfo *)&DAT_14c6d52d8);
        }
        uVar18 = local_48 + 0x28 + lVar20;
      }
      else {
        param_2 = local_600;
        (*(code *)(*local_600)[2])(local_600,&local_60c,4);
        if (local_60c < 0) {
          FUN_144e411f0(local_2f8,"Invalid chunk size");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_2f8,(ThrowInfo *)&DAT_14c6d52d8);
        }
        uVar18 = (longlong)local_60c + 0x14;
      }
    }
    param_1 = local_560;
    lVar20 = lVar11 + 4;
    if ((*(uint *)(local_560 + 0x60) >> 0xc & 1) == 0) {
      lVar20 = lVar11;
    }
    if (0x7fffffffffffffffU - lVar20 < uVar18) {
      FUN_144e411f0(local_1d8,"File pointer overflow during reconstruction");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_1d8,(ThrowInfo *)&DAT_14c6d52d8);
    }
    lVar11 = lVar20 + uVar18;
    local_580 = lVar11;
    (*(code *)(*param_2)[5])(param_2,lVar11);
    puVar23 = local_5e8;
  }
  local_5e0 = (undefined8 *)0x0;
  if (*local_5f0 - *param_3 >> 3 != 0) {
    local_5b8 = local_5f8;
    plVar27 = local_5f8;
    plVar14 = local_5f8;
    do {
      if (*plVar27 != 0) {
        plVar16 = (longlong *)FUN_144e82d50();
        local_5d0 = (undefined8 *)0x0;
        puStack_5c8 = (undefined8 *)0x0;
        local_5c0 = (undefined8 *)0x0;
        uVar18 = (plVar16[1] - *plVar16) / 0x18;
        puVar21 = puStack_5c8;
        if (uVar18 != 0) {
          if (0xaaaaaaaaaaaaaaa < uVar18) {
            FUN_144e6bd60();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar1 = uVar18 * 0x18;
          if (uVar1 < 0x1000) {
            puVar21 = puVar26;
            if (uVar1 != 0) {
              puVar21 = (undefined8 *)FUN_14494321d(uVar1);
            }
          }
          else {
            if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_14694ac37();
            }
            lVar11 = FUN_14494321d();
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            puVar21 = (undefined8 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
            puVar21[-1] = lVar11;
          }
          local_5c0 = puVar21 + uVar18 * 3;
          local_5d8 = &local_5d0;
          plVar2 = (longlong *)plVar16[1];
          local_548 = &local_5d0;
          local_5d0 = puVar21;
          puStack_5c8 = puVar21;
          local_558 = puVar21;
          plVar14 = local_5b8;
          for (plVar16 = (longlong *)*plVar16; local_5b8 = plVar14, local_550 = puVar21,
              plVar16 != plVar2; plVar16 = plVar16 + 3) {
            *puVar21 = 0;
            puVar21[1] = 0;
            puVar21[2] = 0;
            FUN_144e6eb90(puVar21,(plVar16[1] - *plVar16) / 0x18,plVar16);
            puVar21 = puVar21 + 3;
            param_3 = local_578;
            plVar14 = local_5b8;
          }
        }
        puStack_5c8 = puVar21;
        local_5e8 = (undefined8 *)0x0;
        puVar21 = puVar26;
        puVar23 = puVar26;
        if (((longlong)puStack_5c8 - (longlong)local_5d0) / 0x18 != 0) {
          do {
            lVar20 = ((longlong *)((longlong)local_5d0 + (longlong)puVar23))[1] -
                     *(longlong *)((longlong)local_5d0 + (longlong)puVar23);
            lVar11 = lVar20 >> 0x3f;
            puVar22 = puVar26;
            puVar25 = puVar26;
            if (lVar20 / 0x18 + lVar11 != lVar11) {
              do {
                puVar24 = puVar26;
                if (*(longlong *)
                     ((longlong)puVar25 + *(longlong *)((longlong)local_5d0 + (longlong)puVar23) + 8
                     ) - *(longlong *)
                          ((longlong)puVar25 +
                          *(longlong *)((longlong)local_5d0 + (longlong)puVar23)) >> 3 != 0) {
                  do {
                    *(undefined8 *)
                     (*(longlong *)
                       (*(longlong *)((longlong)plVar27 + (*param_3 - (longlong)plVar14)) + 0x30) +
                     (longlong)puVar21 * 8) =
                         *(undefined8 *)
                          (*(longlong *)
                            ((longlong)puVar25 +
                            *(longlong *)((longlong)local_5d0 + (longlong)puVar23)) +
                          (longlong)puVar24 * 8);
                    puVar21 = (undefined8 *)((longlong)puVar21 + 1);
                    puVar24 = (undefined8 *)((longlong)puVar24 + 1);
                  } while (puVar24 < (undefined8 *)
                                     (*(longlong *)
                                       ((longlong)puVar25 +
                                       *(longlong *)((longlong)local_5d0 + (longlong)puVar23) + 8) -
                                      *(longlong *)
                                       ((longlong)puVar25 +
                                       *(longlong *)((longlong)local_5d0 + (longlong)puVar23)) >> 3)
                          );
                }
                puVar22 = (undefined8 *)((longlong)puVar22 + 1);
                puVar25 = puVar25 + 3;
              } while (puVar22 < (undefined8 *)
                                 ((((longlong *)((longlong)local_5d0 + (longlong)puVar23))[1] -
                                  *(longlong *)((longlong)local_5d0 + (longlong)puVar23)) / 0x18));
            }
            local_5e8 = (undefined8 *)((longlong)local_5e8 + 1);
            puVar23 = puVar23 + 3;
          } while (local_5e8 < (undefined8 *)(((longlong)puStack_5c8 - (longlong)local_5d0) / 0x18))
          ;
        }
        lVar11 = *plVar27;
        if (lVar11 != 0) {
          FUN_144b73340(lVar11 + 0x10);
          thunk_FUN_1400020a8(lVar11,0x28);
        }
        FUN_144b73340(&local_5d0);
      }
      local_5e0 = (undefined8 *)((longlong)local_5e0 + 1);
      plVar27 = plVar27 + 1;
    } while (local_5e0 < (ulonglong)(*local_5f0 - *param_3 >> 3));
  }
  ppuVar19 = local_600;
  (*(code *)(*local_600)[6])(local_600);
  (*(code *)(*ppuVar19)[5])(ppuVar19,local_568);
  if (local_628 != (undefined8 *)0x0) {
    uVar18 = (local_588 - (longlong)local_628 >> 2) * 4;
    puVar21 = local_628;
    if (0xfff < uVar18) {
      uVar18 = uVar18 + 0x27;
      puVar21 = (undefined8 *)local_628[-1];
      if (0x1f < (ulonglong)((longlong)local_628 + (-8 - (longlong)puVar21))) {
LAB_144e6d150:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(puVar21,uVar18);
  }
  if (local_5f8 != (longlong *)0x0) {
    uVar18 = (longlong)local_5a0 - (longlong)local_5f8 & 0xfffffffffffffff8;
    plVar14 = local_5f8;
    if (0xfff < uVar18) {
      uVar18 = uVar18 + 0x27;
      plVar14 = (longlong *)local_5f8[-1];
      if (0x1f < (ulonglong)((longlong)local_5f8 + (-8 - (longlong)plVar14))) {
LAB_144e6d19e:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(plVar14,uVar18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_658);
}



// FUNCTION 144e6d450 FUN_144e6d450 body=561 status=ok
// SIG undefined FUN_144e6d450(void)

void FUN_144e6d450(longlong param_1,char param_2)

{
  longlong *plVar1;
  size_t _Size;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  void *pvVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  char local_58;
  char local_57;
  undefined1 local_56 [6];
  undefined8 *local_50;
  longlong local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x68);
  lVar4 = *plVar1;
  uVar11 = 0;
  local_58 = '\0';
  local_57 = param_2;
  local_48 = param_1;
  if (*(longlong *)(param_1 + 0x70) - lVar4 >> 3 != 0) {
    local_50 = (undefined8 *)(param_1 + 0x50);
    do {
      lVar2 = local_48;
      puVar8 = local_50;
      uVar3 = FUN_144e69ee0(*(undefined8 *)(lVar4 + uVar11 * 8));
      uVar9 = (ulonglong)uVar3;
      if (0x100000 < (int)uVar3) {
        lVar4 = (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x20))();
        (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x28))
                  (*(longlong **)(lVar2 + 0x50),lVar4 + (longlong)(int)(uVar3 - 1) * 8);
        (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x10))(*(longlong **)(lVar2 + 0x50),local_40,8)
        ;
        (**(code **)(**(longlong **)(lVar2 + 0x50) + 0x28))(*(longlong **)(lVar2 + 0x50),lVar4);
        puVar8 = local_50;
      }
      uVar10 = (ulonglong)(int)uVar3;
      lVar4 = *(longlong *)(*plVar1 + uVar11 * 8);
      pvVar5 = *(void **)(lVar4 + 0x38);
      lVar2 = *(longlong *)(lVar4 + 0x30);
      uVar6 = (longlong)pvVar5 - lVar2 >> 3;
      if (uVar10 < uVar6) {
        pvVar5 = (void *)(lVar2 + uVar10 * 8);
LAB_144e6d588:
        *(void **)(lVar4 + 0x38) = pvVar5;
      }
      else if (uVar6 < uVar10) {
        if (uVar10 <= (ulonglong)(*(longlong *)(lVar4 + 0x40) - lVar2 >> 3)) {
          _Size = (uVar10 - uVar6) * 8;
          memset(pvVar5,0,_Size);
          pvVar5 = (void *)(_Size + (longlong)pvVar5);
          puVar8 = local_50;
          goto LAB_144e6d588;
        }
        FUN_144b702f0(lVar4 + 0x30,uVar10,local_56);
      }
      if ((int)uVar3 < 1) {
        *(undefined1 *)(*(longlong *)(*plVar1 + uVar11 * 8) + 0x48) = 1;
        if (0 < (int)uVar3) goto LAB_144e6d5d2;
      }
      else {
        lVar4 = 0;
        do {
          FUN_144e5f3c0(*puVar8,*(longlong *)(*(longlong *)(*plVar1 + uVar11 * 8) + 0x30) + lVar4);
          lVar4 = lVar4 + 8;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        *(undefined1 *)(*(longlong *)(*plVar1 + uVar11 * 8) + 0x48) = 1;
LAB_144e6d5d2:
        lVar4 = 0;
        plVar7 = *(longlong **)(*(longlong *)(*plVar1 + uVar11 * 8) + 0x30);
        do {
          if (*plVar7 == 0) {
            local_58 = '\x01';
            *(undefined1 *)(*(longlong *)(*plVar1 + uVar11 * 8) + 0x48) = 0;
            break;
          }
          lVar4 = lVar4 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar4 < (longlong)uVar10);
      }
      lVar4 = *plVar1;
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulonglong)(*(longlong *)(param_1 + 0x70) - lVar4 >> 3));
    if ((local_58 != '\0') && (local_57 != '\0')) {
      FUN_144e6c300(local_48,*puVar8,plVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 144e6d690 FUN_144e6d690 body=1047 status=ok
// SIG undefined FUN_144e6d690(void)

void FUN_144e6d690(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  float *pfVar5;
  float *pfVar6;
  char *pcVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_3;
  local_70 = param_2;
  if (*param_4 != param_4[1]) {
    FUN_1486115df(*param_4,param_4[1],param_4);
    param_4[1] = *param_4;
  }
  piVar3 = (int *)FUN_144b67ae0(param_3);
  piVar4 = (int *)FUN_144b67ae0(param_2);
  if ((((*piVar4 != *piVar3) || (piVar4[1] != piVar3[1])) || (piVar4[2] != piVar3[2])) ||
     (piVar4[3] != piVar3[3])) {
    local_58 = 0xd;
    uStack_50 = 0xf;
    local_68 = (char *)0x5779616c70736964;
    uStack_60 = 0x776f646e69;
    puVar1 = (undefined4 *)param_4[1];
    if (puVar1 == (undefined4 *)param_4[2]) {
      FUN_144e6e360(param_4,puVar1,&local_68);
    }
    else {
      *puVar1 = 0x70736964;
      puVar1[1] = 0x5779616c;
      puVar1[2] = 0x6f646e69;
      puVar1[3] = 0x77;
      *(undefined8 *)(puVar1 + 4) = 0xd;
      *(undefined8 *)(puVar1 + 6) = 0xf;
      local_68 = (char *)0x5779616c70736900;
      param_4[1] = param_4[1] + 0x20;
    }
    if (0xf < uStack_50) {
      uVar12 = uStack_50 + 1;
      pcVar7 = local_68;
      if (0xfff < uVar12) {
        uVar12 = uStack_50 + 0x28;
        pcVar7 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar7)) goto LAB_144e6da8c;
      }
      thunk_FUN_1400020a8(pcVar7,uVar12);
    }
  }
  plVar15 = param_4 + 2;
  pfVar5 = (float *)FUN_144b67b40(param_2);
  pfVar6 = (float *)FUN_144b67b40(param_3);
  if (*pfVar5 != *pfVar6) {
    local_68 = (char *)0x0;
    uStack_60 = 0;
    pcVar7 = (char *)FUN_144b659f0(&local_68,0x20);
    local_58 = 0x10;
    uStack_50 = 0x1f;
    builtin_strncpy(pcVar7,"pixelAspectRatio",0x11);
    puVar1 = (undefined4 *)param_4[1];
    if (puVar1 == (undefined4 *)*plVar15) {
      local_68 = pcVar7;
      FUN_144e6e360(param_4,puVar1,&local_68);
      uVar12 = uStack_50;
    }
    else {
      local_68._0_4_ = SUB84(pcVar7,0);
      local_68._4_4_ = (undefined4)((ulonglong)pcVar7 >> 0x20);
      *puVar1 = (undefined4)local_68;
      puVar1[1] = local_68._4_4_;
      puVar1[2] = (undefined4)uStack_60;
      puVar1[3] = uStack_60._4_4_;
      *(undefined8 *)(puVar1 + 4) = 0x10;
      *(undefined8 *)(puVar1 + 6) = 0x1f;
      local_68 = (char *)((ulonglong)pcVar7 & 0xffffffffffffff00);
      param_4[1] = param_4[1] + 0x20;
      uVar12 = 0xf;
    }
    if (0xf < uVar12) {
      uVar13 = uVar12 + 1;
      pcVar7 = local_68;
      if (0xfff < uVar13) {
        uVar13 = uVar12 + 0x28;
        pcVar7 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar7)) goto LAB_144e6da8c;
      }
      thunk_FUN_1400020a8(pcVar7,uVar13);
    }
  }
  uVar8 = FUN_144e64780();
  lVar9 = FUN_144b73740(param_2,uVar8);
  uVar8 = FUN_144e64780();
  lVar10 = FUN_144b73740(local_78,uVar8);
  lVar14 = -1;
  if (lVar10 != 0) {
    if (lVar9 != 0) {
      uVar8 = FUN_144e64760(lVar10);
      uVar11 = FUN_144e64760(lVar9);
      cVar2 = FUN_14521d390(uVar11,uVar8);
      if (cVar2 == '\0') goto LAB_144e6d99b;
    }
    lVar9 = FUN_144e64780();
    local_68 = (char *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (*(char *)(lVar9 + lVar10) != '\0');
    FUN_140cd1a74(&local_68,lVar9);
    puVar1 = (undefined4 *)param_4[1];
    if (puVar1 == (undefined4 *)*plVar15) {
      FUN_144e6e360(param_4,puVar1,&local_68);
      uVar12 = uStack_50;
    }
    else {
      *puVar1 = (undefined4)local_68;
      puVar1[1] = local_68._4_4_;
      puVar1[2] = (undefined4)uStack_60;
      puVar1[3] = uStack_60._4_4_;
      *(undefined8 *)(puVar1 + 4) = local_58;
      *(ulonglong *)(puVar1 + 6) = uStack_50;
      local_68 = (char *)((ulonglong)local_68 & 0xffffffffffffff00);
      param_4[1] = param_4[1] + 0x20;
      uVar12 = 0xf;
    }
    if (0xf < uVar12) {
      uVar13 = uVar12 + 1;
      pcVar7 = local_68;
      if (0xfff < uVar13) {
        uVar13 = uVar12 + 0x28;
        pcVar7 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar7)) goto LAB_144e6da8c;
      }
      thunk_FUN_1400020a8(pcVar7,uVar13);
    }
  }
LAB_144e6d99b:
  uVar8 = FUN_144e48e90();
  lVar9 = FUN_144b73840(local_70,uVar8);
  uVar8 = FUN_144e48e90();
  lVar10 = FUN_144b73840(local_78,uVar8);
  if (lVar10 != 0) {
    if (lVar9 != 0) {
      uVar8 = FUN_144e48e70(lVar10);
      uVar11 = FUN_144e48e70(lVar9);
      cVar2 = FUN_144b66b10(uVar11,uVar8);
      if (cVar2 == '\0') goto LAB_144e6da98;
    }
    lVar9 = FUN_144e48e90();
    local_68 = (char *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    do {
      lVar14 = lVar14 + 1;
    } while (*(char *)(lVar9 + lVar14) != '\0');
    FUN_140cd1a74(&local_68,lVar9,lVar14);
    puVar1 = (undefined4 *)param_4[1];
    if (puVar1 == (undefined4 *)*plVar15) {
      FUN_144e6e360(param_4,puVar1,&local_68);
      uVar12 = uStack_50;
    }
    else {
      *puVar1 = (undefined4)local_68;
      puVar1[1] = local_68._4_4_;
      puVar1[2] = (undefined4)uStack_60;
      puVar1[3] = uStack_60._4_4_;
      *(undefined8 *)(puVar1 + 4) = local_58;
      *(ulonglong *)(puVar1 + 6) = uStack_50;
      local_68 = (char *)((ulonglong)local_68 & 0xffffffffffffff00);
      param_4[1] = param_4[1] + 0x20;
      uVar12 = 0xf;
    }
    if (0xf < uVar12) {
      uVar13 = uVar12 + 1;
      pcVar7 = local_68;
      if (0xfff < uVar13) {
        uVar13 = uVar12 + 0x28;
        pcVar7 = *(char **)(local_68 + -8);
        if ((char *)0x1f < local_68 + (-8 - (longlong)pcVar7)) {
LAB_144e6da8c:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(pcVar7,uVar13);
    }
  }
LAB_144e6da98:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 144e6dac0 FUN_144e6dac0 body=258 status=ok
// SIG undefined FUN_144e6dac0(void)

undefined8 FUN_144e6dac0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar7;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  puVar5 = (undefined4 *)FUN_144b67b20(param_2);
  uVar1 = *puVar5;
  uVar2 = puVar5[2];
  uVar3 = puVar5[1];
  uVar4 = puVar5[3];
  uVar6 = 0;
  local_58 = 0;
  local_50 = 0;
  puVar5 = (undefined4 *)FUN_144b68200(param_2);
  local_40 = *puVar5;
  uStack_3c = puVar5[1];
  uStack_38 = puVar5[2];
  uStack_34 = puVar5[3];
  FUN_144e66350(&local_40,uVar1,uVar2,uVar3,CONCAT44(uVar7,uVar4),&local_58,&local_50,local_res20,
                local_res18);
  local_48 = FUN_14494321d(0x28);
  if (local_48 != 0) {
    uVar6 = FUN_144e820d0(local_48,uStack_38,local_res20[0],local_res18[0],local_58,local_50);
  }
  thunk_FUN_1400020a8(local_58);
  thunk_FUN_1400020a8(local_50);
  return uVar6;
}



// FUNCTION 144e6dbd0 FUN_144e6dbd0 body=220 status=ok
// SIG undefined FUN_144e6dbd0(void)

void FUN_144e6dbd0(longlong param_1,int param_2)

{
  __uint64 _Var1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined1 auStack_198 [32];
  undefined1 local_178 [16];
  undefined1 local_168 [240];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (-1 < param_2) {
    if (param_2 < (int)(*(longlong *)(param_1 + 0x70) - *(longlong *)(param_1 + 0x68) >> 3)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_198);
    }
  }
  FUN_144e47110();
  FUN_1470a639e(local_178,1);
  _Var1 = FUN_144e6be30((longlong *)(param_1 + 0x68));
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_141302cc4(local_168,"MultiPartInputFile::getPart called with invalid part ");
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,param_2);
  pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(pbVar3," on file with ");
  pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,_Var1);
  FUN_141302cc4(pbVar3," parts");
  FUN_144e40dd0(local_78,local_178);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144e6dcc0 FUN_144e6dcc0 body=202 status=ok
// SIG undefined FUN_144e6dcc0(void)

undefined8 *
FUN_144e6dcc0(undefined8 *param_1,undefined1 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  _Mtx_init_in_situ(0,2);
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)((longlong)param_1 + 100) = param_2;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x84) = param_4;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  lVar1 = FUN_14494321d(0x30);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(lVar1 + 0x10) = lVar1;
  *(undefined2 *)(lVar1 + 0x18) = 0x101;
  param_1[0x11] = lVar1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 144e6dd90 FUN_144e6dd90 body=406 status=ok
// SIG undefined FUN_144e6dd90(void)

void FUN_144e6dd90(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((*(char *)(param_1 + 100) != '\0') &&
     (puVar2 = *(undefined8 **)(param_1 + 0x50), puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  lVar5 = *(longlong *)(param_1 + 0x68);
  uVar9 = 0;
  if (*(longlong *)(param_1 + 0x70) - lVar5 >> 3 != 0) {
    do {
      lVar5 = *(longlong *)(lVar5 + uVar9 * 8);
      if (lVar5 != 0) {
        lVar7 = *(longlong *)(lVar5 + 0x30);
        if (lVar7 != 0) {
          uVar8 = *(longlong *)(lVar5 + 0x40) - lVar7 & 0xfffffffffffffff8;
          lVar6 = lVar7;
          if (0xfff < uVar8) {
            lVar6 = *(longlong *)(lVar7 + -8);
            uVar8 = uVar8 + 0x27;
            if (0x1f < (lVar7 - lVar6) - 8U) goto LAB_144e6df20;
          }
          thunk_FUN_1400020a8(lVar6,uVar8);
          *(undefined8 *)(lVar5 + 0x30) = 0;
          *(undefined8 *)(lVar5 + 0x38) = 0;
          *(undefined8 *)(lVar5 + 0x40) = 0;
        }
        FUN_144b67220(lVar5);
        thunk_FUN_1400020a8(lVar5,0x50);
      }
      lVar5 = *(longlong *)(param_1 + 0x68);
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulonglong)(*(longlong *)(param_1 + 0x70) - lVar5 >> 3));
  }
  FUN_144e6c210(param_1 + 0x98);
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x88) + 8);
  cVar1 = *(char *)((longlong)plVar3 + 0x19);
  while (cVar1 == '\0') {
    FUN_144e6e7f0(param_1 + 0x88,param_1 + 0x88,plVar3[2]);
    plVar4 = (longlong *)*plVar3;
    thunk_FUN_1400020a8(plVar3,0x30);
    plVar3 = plVar4;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x88),0x30);
  lVar5 = *(longlong *)(param_1 + 0x68);
  if (lVar5 != 0) {
    uVar9 = *(longlong *)(param_1 + 0x78) - lVar5 & 0xfffffffffffffff8;
    lVar7 = lVar5;
    if (0xfff < uVar9) {
      lVar7 = *(longlong *)(lVar5 + -8);
      uVar9 = uVar9 + 0x27;
      if (0x1f < (lVar5 - lVar7) - 8U) {
LAB_144e6df20:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar7,uVar9);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  _Mtx_destroy_in_situ(param_1);
  return;
}



// FUNCTION 144e6df30 FUN_144e6df30 body=52 status=ok
// SIG undefined FUN_144e6df30(void)

undefined8 FUN_144e6df30(undefined8 param_1,ulonglong param_2)

{
  FUN_144e6dd90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 144e6df70 FUN_144e6df70 body=283 status=ok
// SIG undefined FUN_144e6df70(void)

undefined8 FUN_144e6df70(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int local_res10 [2];
  longlong local_res18;
  int local_38 [2];
  undefined8 local_30;
  undefined1 local_28 [16];
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_res10[0] = param_2;
  iVar4 = _Mtx_lock(lVar2);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar2 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(lVar2 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x88);
  cVar1 = *(char *)((longlong)puVar5[1] + 0x19);
  puVar3 = puVar5;
  puVar9 = (undefined8 *)puVar5[1];
  while (cVar1 == '\0') {
    if (*(int *)(puVar9 + 4) < local_res10[0]) {
      puVar8 = (undefined8 *)puVar9[2];
      puVar9 = puVar3;
    }
    else {
      puVar8 = (undefined8 *)*puVar9;
    }
    puVar3 = puVar9;
    puVar9 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (((*(char *)((longlong)puVar3 + 0x19) == '\0') && (*(int *)(puVar3 + 4) <= local_res10[0])) &&
     (puVar3 != puVar5)) {
    puVar5 = (undefined8 *)FUN_144e6c0c0(*(longlong *)(param_1 + 8) + 0x88,local_res10);
    uVar7 = *puVar5;
  }
  else {
    lVar6 = FUN_14494321d(0x10);
    local_res18 = lVar6;
    if (lVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_144e6dbd0(*(undefined8 *)(param_1 + 8),local_res10[0]);
      uVar7 = FUN_144b6c440(lVar6,uVar7);
    }
    local_38[0] = local_res10[0];
    local_30 = uVar7;
    FUN_144e6e250(*(longlong *)(param_1 + 8) + 0x88,local_28,local_38);
  }
  _Mtx_unlock(lVar2);
  return uVar7;
}



// FUNCTION 144e6e090 FUN_144e6e090 body=12 status=ok
// SIG undefined FUN_144e6e090(void)

longlong FUN_144e6e090(longlong *param_1)

{
  return param_1[1] - *param_1 >> 5;
}



// FUNCTION 144e6e0a0 FUN_144e6e0a0 body=11 status=ok
// SIG undefined FUN_144e6e0a0(void)

longlong FUN_144e6e0a0(longlong *param_1,longlong param_2)

{
  return param_2 * 0x20 + *param_1;
}



// FUNCTION 144e6e0b0 FUN_144e6e0b0 body=42 status=ok
// SIG undefined FUN_144e6e0b0(void)

void FUN_144e6e0b0(longlong *param_1)

{
  FUN_144b66820(param_1,param_1,*(undefined8 *)(*param_1 + 8));
  thunk_FUN_1400020a8(*param_1,0x40);
  return;
}



// FUNCTION 144e6e0e0 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
// SIG undefined FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e6e140 FUN_144e6e140 body=16 status=ok
// SIG undefined FUN_144e6e140(void)

void FUN_144e6e140(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e6e160 FUN_144e6e160 body=137 status=ok
// SIG undefined FUN_144e6e160(void)

void FUN_144e6e160(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_144e6eac0(*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x18) * 0x18;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e6e1f0 FUN_144e6e1f0 body=16 status=ok
// SIG undefined FUN_144e6e1f0(void)

void FUN_144e6e1f0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e6e210 FUN_144e6e210 body=49 status=ok
// SIG undefined FUN_144e6e210(void)

void FUN_144e6e210(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    FUN_144b67220(param_1);
  }
  return;
}



// FUNCTION 144e6e250 FUN_144e6e250 body=257 status=ok
// SIG undefined FUN_144e6e250(void)

undefined8 * FUN_144e6e250(longlong *param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_38;
  undefined8 uStack_30;
  longlong *local_28;
  uint uStack_20;
  undefined4 uStack_1c;
  
  plVar1 = (longlong *)*param_1;
  local_28 = (longlong *)plVar1[1];
  uStack_20 = 0;
  plVar5 = plVar1;
  if (*(char *)((longlong)local_28 + 0x19) == '\0') {
    plVar4 = local_28;
    do {
      local_28 = plVar4;
      bVar2 = *param_3 <= (int)local_28[4];
      if (bVar2) {
        plVar4 = (longlong *)*local_28;
        plVar5 = local_28;
      }
      else {
        plVar4 = (longlong *)local_28[2];
      }
      uStack_20 = (uint)bVar2;
    } while (*(char *)((longlong)plVar4 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar5 + 0x19) == '\0') && ((int)plVar5[4] <= *param_3)) {
    uVar3 = 0;
  }
  else {
    if (param_1[1] == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_1470a938d();
    }
    uStack_30 = 0;
    local_38 = param_1;
    plVar5 = (longlong *)FUN_14494321d(0x30);
    *(int *)(plVar5 + 4) = *param_3;
    plVar5[5] = *(longlong *)(param_3 + 2);
    *plVar5 = (longlong)plVar1;
    plVar5[1] = (longlong)plVar1;
    plVar5[2] = (longlong)plVar1;
    *(undefined2 *)(plVar5 + 3) = 0;
    local_38 = local_28;
    uStack_30 = CONCAT44(uStack_1c,uStack_20);
    plVar5 = (longlong *)FUN_144e6be60(param_1,&local_38);
    uVar3 = 1;
  }
  *param_2 = plVar5;
  *(undefined1 *)(param_2 + 1) = uVar3;
  return param_2;
}



// FUNCTION 144e6e360 FUN_144e6e360 body=506 status=ok
// SIG undefined FUN_144e6e360(void)

undefined8 * FUN_144e6e360(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar6 = *param_1;
  lVar10 = param_1[1] - lVar6 >> 5;
  if (lVar10 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1470a9d4e();
  }
  uVar11 = lVar10 + 1;
  uVar5 = param_1[2] - lVar6 >> 5;
  if (0x7ffffffffffffff - (uVar5 >> 1) < uVar5) {
LAB_144e6e551:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar5 = (uVar5 >> 1) + uVar5;
  uVar9 = uVar11;
  if (uVar11 <= uVar5) {
    uVar9 = uVar5;
  }
  if (0x7ffffffffffffff < uVar9) goto LAB_144e6e551;
  uVar5 = uVar9 * 0x20;
  if (uVar5 < 0x1000) {
    if (uVar5 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)FUN_14494321d(uVar5);
    }
  }
  else {
    if (uVar5 + 0x27 <= uVar5) goto LAB_144e6e551;
    lVar10 = FUN_14494321d();
    if (lVar10 == 0) goto LAB_144e6e54a;
    puVar7 = (undefined8 *)(lVar10 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = lVar10;
  }
  puVar1 = (undefined8 *)((param_2 - lVar6 & 0xffffffffffffffe0U) + (longlong)puVar7);
  puVar14 = puVar1 + 4;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined4 *)puVar1 = *param_3;
  *(undefined4 *)((longlong)puVar1 + 4) = uVar2;
  *(undefined4 *)(puVar1 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0xc) = uVar4;
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  *(undefined4 *)(puVar1 + 2) = param_3[4];
  *(undefined4 *)((longlong)puVar1 + 0x14) = uVar2;
  *(undefined4 *)(puVar1 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar4;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0xf;
  *(undefined1 *)param_3 = 0;
  lVar10 = param_1[1];
  lVar6 = *param_1;
  puVar8 = puVar7;
  puVar12 = puVar1;
  if (param_2 != lVar10) {
    puVar13 = puVar14;
    FUN_144e5e1e0(lVar6,param_2,puVar7,param_1,puVar1,puVar14);
    lVar10 = param_1[1];
    lVar6 = param_2;
    puVar8 = puVar14;
    puVar12 = puVar7;
    puVar14 = puVar13;
  }
  FUN_144e5e1e0(lVar6,lVar10,puVar8,param_1,puVar12,puVar14);
  if (*param_1 != 0) {
    FUN_1486115df(*param_1,param_1[1],param_1);
    lVar6 = *param_1;
    uVar5 = param_1[2] - lVar6 & 0xffffffffffffffe0;
    lVar10 = lVar6;
    if (0xfff < uVar5) {
      uVar5 = uVar5 + 0x27;
      lVar10 = *(longlong *)(lVar6 + -8);
      if (0x1f < (lVar6 - lVar10) - 8U) {
LAB_144e6e54a:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar10,uVar5);
  }
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)(puVar7 + uVar11 * 4);
  param_1[2] = (longlong)(puVar7 + uVar9 * 4);
  return puVar1;
}



// FUNCTION 144e6e560 FUN_144e6e560 body=651 status=ok
// SIG undefined FUN_144e6e560(void)

longlong FUN_144e6e560(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  
  uVar8 = *param_1;
  lVar3 = (longlong)(param_2 - uVar8) / 6 + ((longlong)(param_2 - uVar8) >> 0x3f);
  lVar2 = (longlong)(param_1[1] - uVar8) / 0x18;
  if (lVar2 == 0xaaaaaaaaaaaaaaa) {
    FUN_144e6c2e0();
    pcVar1 = (code *)swi(3);
    lVar2 = (*pcVar1)();
    return lVar2;
  }
  uVar9 = lVar2 + 1;
  uVar8 = (longlong)(param_1[2] - uVar8) / 0x18;
  if (0xaaaaaaaaaaaaaaa - (uVar8 >> 1) < uVar8) {
LAB_144e6e7e1:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar8 = (uVar8 >> 1) + uVar8;
  uVar5 = uVar9;
  if (uVar9 <= uVar8) {
    uVar5 = uVar8;
  }
  if (0xaaaaaaaaaaaaaaa < uVar5) goto LAB_144e6e7e1;
  uVar5 = uVar5 * 0x18;
  puVar10 = param_1;
  if (uVar5 < 0x1000) {
    if (uVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_14494321d(uVar5);
    }
  }
  else {
    if (uVar5 + 0x27 <= uVar5) goto LAB_144e6e7e1;
    lVar2 = FUN_14494321d();
    if (lVar2 == 0) goto LAB_144e6e7da;
    uVar8 = lVar2 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar8 - 8) = lVar2;
  }
  lVar2 = uVar8 + ((lVar3 >> 2) - (lVar3 >> 0x3f)) * 0x18;
  lVar3 = lVar2 + 0x18;
  uVar11 = uVar8;
  FUN_144b670b0(lVar2,param_3);
  uVar7 = param_1[1];
  uVar6 = *param_1;
  uVar4 = uVar8;
  if (param_2 == uVar7) {
    for (; uVar6 != uVar7; uVar6 = uVar6 + 0x18) {
      FUN_144b670b0(uVar4,uVar6);
      uVar4 = uVar4 + 0x18;
    }
  }
  else {
    FUN_144e6ea00(uVar6,param_2,uVar8,param_1,uVar9,puVar10,lVar3,uVar11);
    FUN_144e6ea00(param_2,param_1[1],lVar2 + 0x18,param_1);
  }
  uVar7 = *param_1;
  if (uVar7 != 0) {
    uVar6 = param_1[1];
    for (; uVar7 != uVar6; uVar7 = uVar7 + 0x18) {
      FUN_144b67220(uVar7);
    }
    uVar7 = *param_1;
    uVar4 = ((longlong)(param_1[2] - uVar7) / 0x18) * 0x18;
    uVar6 = uVar7;
    if (0xfff < uVar4) {
      uVar4 = uVar4 + 0x27;
      uVar6 = *(ulonglong *)(uVar7 - 8);
      if (0x1f < (uVar7 - uVar6) - 8) {
LAB_144e6e7da:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(uVar6,uVar4);
  }
  *param_1 = uVar8;
  param_1[1] = uVar8 + uVar9 * 0x18;
  param_1[2] = uVar5 + uVar8;
  return lVar2;
}



// FUNCTION 144e6e7f0 FUN_144e6e7f0 body=85 status=ok
// SIG undefined FUN_144e6e7f0(void)

void FUN_144e6e7f0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_144e6e7f0(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    thunk_FUN_1400020a8(param_3,0x30);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 144e6e850 FUN_144e6e850 body=414 status=ok
// SIG undefined FUN_144e6e850(void)

undefined8 * FUN_144e6e850(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  undefined8 *puVar7;
  ulonglong uVar8;
  size_t _Size;
  
  lVar3 = *param_1;
  lVar5 = param_1[1] - lVar3 >> 3;
  if (lVar5 == 0x1fffffffffffffff) {
    FUN_144e6be40();
    pcVar4 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar4)();
    return puVar7;
  }
  uVar1 = lVar5 + 1;
  uVar6 = param_1[2] - lVar3 >> 3;
  if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
LAB_144e6e9e4:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar6 = (uVar6 >> 1) + uVar6;
  uVar8 = uVar1;
  if (uVar1 <= uVar6) {
    uVar8 = uVar6;
  }
  if (0x1fffffffffffffff < uVar8) goto LAB_144e6e9e4;
  uVar6 = uVar8 * 8;
  if (uVar6 < 0x1000) {
    if (uVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)FUN_14494321d(uVar6);
    }
  }
  else {
    if (uVar6 + 0x27 <= uVar6) goto LAB_144e6e9e4;
    lVar5 = FUN_14494321d();
    if (lVar5 == 0) goto LAB_144e6e9dd;
    puVar7 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = lVar5;
  }
  puVar2 = puVar7 + ((longlong)param_2 - lVar3 >> 3);
  *puVar2 = *param_3;
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst = puVar7;
    param_2 = _Src;
  }
  else {
    memmove(puVar7,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst = puVar2 + 1;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar6 = param_1[2] - lVar3 & 0xfffffffffffffff8;
    lVar5 = lVar3;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar5 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar5) - 8U) {
LAB_144e6e9dd:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar5,uVar6);
  }
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)(puVar7 + uVar1);
  param_1[2] = (longlong)(puVar7 + uVar8);
  return puVar2;
}



// FUNCTION 144e6ea00 FUN_144e6ea00 body=96 status=ok
// SIG undefined FUN_144e6ea00(void)

longlong FUN_144e6ea00(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    FUN_144b671a0(param_3,param_1);
    param_3 = param_3 + 0x18;
  }
  return param_3;
}



// FUNCTION 144e6ea60 FUN_144e6ea60 body=50 status=ok
// SIG undefined FUN_144e6ea60(void)

void FUN_144e6ea60(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_144e6e160(lVar2);
  }
  return;
}



// FUNCTION 144e6eac0 FUN_144e6eac0 body=131 status=ok
// SIG undefined FUN_144e6eac0(void)

void FUN_144e6eac0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
      uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
      lVar2 = lVar1;
      if (0xfff < uVar3) {
        lVar2 = *(longlong *)(lVar1 + -8);
        uVar3 = uVar3 + 0x27;
        if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar2,uVar3);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  } while( true );
}



// FUNCTION 144e6eb50 FUN_144e6eb50 body=50 status=ok
// SIG undefined FUN_144e6eb50(void)

void FUN_144e6eb50(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    FUN_144b67220(lVar2);
  }
  return;
}



// FUNCTION 144e6eb90 FUN_144e6eb90 body=403 status=ok
// SIG undefined FUN_144e6eb90(void)

void FUN_144e6eb90(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,longlong *param_4)

{
  code *pcVar1;
  longlong lVar2;
  void *_Dst;
  longlong *plVar3;
  ulonglong uVar4;
  size_t _Size;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_144e6e1f0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar4 = param_2 * 0x18;
    puVar5 = (undefined8 *)0x0;
    if (uVar4 < 0x1000) {
      if (uVar4 != 0) {
        puVar5 = (undefined8 *)FUN_14494321d(uVar4);
      }
    }
    else {
      if (uVar4 + 0x27 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar2 = FUN_14494321d();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      puVar5 = (undefined8 *)(lVar2 + 0x27U & 0xffffffffffffffe0);
      puVar5[-1] = lVar2;
    }
    *param_1 = puVar5;
    param_1[1] = puVar5;
    param_1[2] = puVar5 + param_2 * 3;
    param_4 = (longlong *)*param_4;
    for (plVar3 = (longlong *)*param_3; plVar3 != param_4; plVar3 = plVar3 + 3) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      uVar4 = plVar3[1] - *plVar3 >> 3;
      if (uVar4 != 0) {
        if (0x1fffffffffffffff < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_144b6ee80();
        }
        _Dst = (void *)FUN_144e6bce0(puVar5,uVar4);
        *puVar5 = _Dst;
        puVar5[1] = _Dst;
        puVar5[2] = (void *)((longlong)_Dst + uVar4 * 8);
        _Size = plVar3[1] - *plVar3;
        memmove(_Dst,(void *)*plVar3,_Size);
        puVar5[1] = (void *)((longlong)_Dst + ((longlong)_Size >> 3) * 8);
      }
      puVar5 = puVar5 + 3;
    }
    FUN_144e6eac0(puVar5,puVar5,param_1);
    param_1[1] = puVar5;
  }
  return;
}



// FUNCTION 144e6ed50 FUN_144e6ed50 body=391 status=ok
// SIG undefined FUN_144e6ed50(void)

undefined8 *
FUN_144e6ed50(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  FUN_144e66980();
  *param_1 = Imf_3_2::ScanLineInputFile::vftable;
  lVar4 = FUN_14494321d(0x150);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_144e712e0(lVar4,param_4);
  }
  puVar7 = (undefined8 *)0x0;
  param_1[1] = uVar5;
  puVar6 = (undefined8 *)FUN_14494321d(0x60);
  puVar8 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    _Mtx_init_in_situ(puVar6,2);
    puVar6[0xb] = 0;
    puVar8 = puVar6;
  }
  param_1[2] = puVar8;
  puVar8[10] = param_3;
  uVar3 = (**(code **)(*param_3 + 8))(param_3);
  *(undefined1 *)(param_1[1] + 300) = uVar3;
  FUN_144e6fe50(param_1,param_2);
  *(undefined4 *)(param_1[1] + 0x68) = 0;
  lVar4 = param_1[1];
  uVar1 = *(undefined4 *)(lVar4 + 0x80);
  uVar5 = *(undefined8 *)(param_1[2] + 0x50);
  puVar8 = puVar7;
  while( true ) {
    lVar2 = *(longlong *)(lVar4 + 0x98);
    if ((undefined8 *)(*(longlong *)(lVar4 + 0xa0) - lVar2 >> 3) <= puVar8) break;
    FUN_144e5f3c0(uVar5,lVar2 + (longlong)puVar8 * 8);
    puVar8 = (undefined8 *)(ulonglong)((int)puVar8 + 1);
  }
  *(undefined1 *)(lVar4 + 0xb0) = 1;
  while( true ) {
    if ((undefined8 *)(*(longlong *)(lVar4 + 0xa0) - lVar2 >> 3) <= puVar7) {
      return param_1;
    }
    if (*(longlong *)(lVar2 + (longlong)puVar7 * 8) == 0) break;
    puVar7 = (undefined8 *)(ulonglong)((int)puVar7 + 1);
  }
  *(undefined1 *)(lVar4 + 0xb0) = 0;
  FUN_144e717b0(uVar5,uVar1,lVar4 + 0x98);
  return param_1;
}



// FUNCTION 144e6eee0 FUN_144e6eee0 body=13 status=ok
// SIG undefined FUN_144e6eee0(void)

void FUN_144e6eee0(longlong param_1)

{
  FUN_144b6b7f0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x50));
  return;
}



// FUNCTION 144e6eef0 FUN_144e6eef0 body=2791 status=ok
// SIG undefined FUN_144e6eef0(void)

void FUN_144e6eef0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  bool bVar4;
  longlong *plVar5;
  ushort uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  byte *pbVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  longlong lVar27;
  byte bVar28;
  bool bVar29;
  undefined1 auStack_2b8 [32];
  uint local_298;
  undefined4 uStack_294;
  undefined8 *local_290;
  longlong local_288;
  undefined8 *local_280;
  undefined8 *local_278;
  longlong local_270;
  undefined8 *puStack_268;
  undefined8 *local_260;
  float local_258;
  longlong *local_250;
  longlong local_248;
  longlong local_240;
  undefined8 *puStack_238;
  undefined8 *local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 *local_1f8;
  undefined1 local_1f0 [8];
  undefined1 local_1e8 [8];
  longlong local_1e0;
  longlong local_1d8;
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [240];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  byte bStack_90;
  undefined1 uStack_8f;
  undefined6 uStack_8e;
  undefined8 local_88;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar19 = *(longlong *)(param_1 + 0x10);
  local_250 = param_2;
  local_248 = param_1;
  local_1e0 = lVar19;
  local_1d8 = lVar19;
  iVar7 = _Mtx_lock(lVar19);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar19 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(lVar19 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  uVar8 = FUN_144b67b60(*(longlong *)(param_1 + 8) + 0x50);
  FUN_144b72eb0(param_2,&local_290);
  while (plVar9 = (longlong *)FUN_144b72ed0(param_2,&local_298), local_290 != (undefined8 *)*plVar9)
  {
    FUN_144b66050(uVar8,&local_280,local_290 + 4);
    plVar9 = (longlong *)FUN_144b65f40(uVar8,local_1f0);
    if ((local_280 != (undefined8 *)*plVar9) &&
       ((*(int *)(local_280 + 0x24) != *(int *)(local_290 + 0x28) ||
        (*(int *)((longlong)local_280 + 0x124) != *(int *)((longlong)local_290 + 0x144))))) {
      FUN_144e47110();
      FUN_1470a639e(local_1b8,1);
      uVar8 = FUN_144e6eee0(param_1);
      uVar12 = FUN_144b66f30(&local_280);
      uVar13 = FUN_141302cc4(local_1a8,"X and/or y subsampling factors of \"");
      uVar12 = FUN_141302cc4(uVar13,uVar12);
      uVar12 = FUN_141302cc4(uVar12,"\" channel of input file \"");
      uVar8 = FUN_141302cc4(uVar12,uVar8);
      FUN_141302cc4(uVar8,"\" are not compatible with the frame buffer\'s subsampling factors.");
      FUN_144e40dd0(&local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_b8,(ThrowInfo *)&DAT_14c6d50e0);
    }
    FUN_144b6cdf0(&local_290);
  }
  puVar16 = (undefined8 *)0x0;
  bVar29 = DAT_14c7966a8 != '\0';
  local_240 = 0;
  puStack_238 = (undefined8 *)0x0;
  local_290 = (undefined8 *)0x0;
  local_230 = (undefined8 *)0x0;
  local_270 = 0;
  puStack_268 = (undefined8 *)0x0;
  local_280 = (undefined8 *)0x0;
  local_260 = (undefined8 *)0x0;
  FUN_144b65f20(uVar8,&local_288);
  FUN_144b72eb0(param_2,&local_298);
  plVar10 = (longlong *)FUN_144b72ed0(param_2,local_1f0);
  plVar9 = local_250;
  puVar18 = puStack_268;
  if (CONCAT44(uStack_294,local_298) == *plVar10) {
    local_278 = puStack_238;
    puVar26 = puStack_238;
  }
  else {
    local_278 = puStack_238;
    puVar25 = puVar16;
    do {
      plVar10 = (longlong *)FUN_144b65f40(uVar8,local_1e8);
      puVar26 = local_280;
      if (local_288 != *plVar10) {
        do {
          pbVar11 = (byte *)(local_288 + 0x1c);
          lVar19 = (CONCAT44(uStack_294,local_298) + 0x20) - (longlong)pbVar11;
          do {
            bVar28 = *pbVar11;
            uVar22 = (uint)pbVar11[lVar19];
            if (bVar28 != uVar22) break;
            pbVar11 = pbVar11 + 1;
          } while (uVar22 != 0);
          puVar26 = puVar25;
          if (-1 < (int)(bVar28 - uVar22)) break;
          local_208 = *(undefined8 *)(local_288 + 0x120);
          local_228 = CONCAT44(*(undefined4 *)(local_288 + 0x11c),*(undefined4 *)(local_288 + 0x11c)
                              );
          uStack_220 = 0;
          local_218 = (undefined8 *)0x0;
          uStack_210 = 0;
          uStack_200 = CONCAT62(uStack_200._2_6_,0x100);
          local_1f8 = (undefined1 *)0x0;
          if (puVar18 == puVar25) {
            FUN_144e731c0(&local_270,puVar18,&local_228);
            puVar25 = local_260;
          }
          else {
            *puVar18 = local_228;
            puVar18[1] = 0;
            puVar18[2] = 0;
            puVar18[3] = 0;
            puVar18[4] = local_208;
            puVar18[5] = uStack_200;
            puVar18[6] = 0;
            puStack_268 = puVar18 + 7;
          }
          puVar18 = puStack_268;
          iVar7 = *(int *)(local_288 + 0x11c);
          if (iVar7 == 0) {
LAB_144e6f17f:
            puVar16 = (undefined8 *)((longlong)puVar16 + 2);
          }
          else if (iVar7 == 1) {
            puVar16 = (undefined8 *)((longlong)puVar16 + 1);
          }
          else if (iVar7 == 2) goto LAB_144e6f17f;
          if ((*(int *)(local_288 + 0x120) != 1) || (*(int *)(local_288 + 0x124) != 1)) {
            bVar29 = false;
          }
          FUN_144b663b0(&local_288);
          plVar10 = (longlong *)FUN_144b65f40(uVar8,local_1e8);
          puVar26 = puVar25;
        } while (local_288 != *plVar10);
      }
      local_280 = puVar26;
      bVar28 = 0;
      plVar10 = (longlong *)FUN_144b65f40(uVar8,local_1d0);
      lVar19 = CONCAT44(uStack_294,local_298);
      if (local_288 == *plVar10) {
LAB_144e6f21b:
        bVar28 = 1;
        uStack_b4 = *(undefined4 *)(lVar19 + 0x120);
      }
      else {
        pbVar11 = (byte *)(local_288 + 0x1c);
        lVar24 = (lVar19 + 0x20) - (longlong)pbVar11;
        do {
          bVar1 = *pbVar11;
          uVar22 = (uint)pbVar11[lVar24];
          if (bVar1 != uVar22) break;
          pbVar11 = pbVar11 + 1;
        } while (uVar22 != 0);
        if (0 < (int)(bVar1 - uVar22)) goto LAB_144e6f21b;
        uStack_b4 = *(undefined4 *)(local_288 + 0x11c);
      }
      local_88 = *(undefined8 *)(lVar19 + 0x148);
      uStack_94 = *(undefined4 *)(lVar19 + 0x144);
      local_98 = *(undefined4 *)(lVar19 + 0x140);
      uVar12 = *(undefined8 *)(lVar19 + 0x140);
      uStack_a0 = *(undefined8 *)(lVar19 + 0x138);
      local_a8 = *(undefined8 *)(lVar19 + 0x130);
      uStack_b0 = *(undefined8 *)(lVar19 + 0x128);
      local_b8 = *(undefined4 *)(lVar19 + 0x120);
      uStack_8f = 0;
      bStack_90 = bVar28;
      if (puVar18 == local_280) {
        FUN_144e731c0(&local_270,puVar18,&local_b8);
        local_280 = local_260;
      }
      else {
        *puVar18 = CONCAT44(uStack_b4,local_b8);
        puVar18[1] = uStack_b0;
        puVar18[2] = local_a8;
        puVar18[3] = uStack_a0;
        puVar18[4] = uVar12;
        puVar18[5] = CONCAT62(uStack_8e,(ushort)bVar28);
        puVar18[6] = local_88;
        puStack_268 = puVar18 + 7;
      }
      uVar12 = uStack_220;
      puVar18 = puStack_268;
      bVar4 = bVar29;
      if ((bVar28 == 0) && (*(int *)(local_288 + 0x11c) != 1)) {
        bVar4 = false;
      }
      lVar19 = CONCAT44(uStack_294,local_298);
      bVar29 = false;
      if (*(int *)(lVar19 + 0x120) == 1) {
        bVar29 = bVar4;
      }
      if ((*(int *)(lVar19 + 0x140) == 1) && (*(int *)(lVar19 + 0x144) == 1)) {
        if (bVar29) {
          local_228 = *(undefined8 *)(lVar19 + 0x128);
          uStack_220 = CONCAT71(uStack_220._1_7_,bVar28);
          uVar13 = uStack_220;
          local_258 = (float)*(double *)(lVar19 + 0x148);
          fVar21 = ABS(local_258);
          uVar6 = (ushort)((uint)local_258 >> 0x10) & 0x8000;
          if ((uint)fVar21 < 0x38800000) {
            if (0x33000000 < (uint)fVar21) {
              bVar1 = 0x7e - (char)((uint)fVar21 >> 0x17);
              uVar23 = (uint)local_258 & 0x7fffff | 0x800000;
              uVar22 = uVar23 << (0x20 - bVar1 & 0x1f);
              uVar23 = uVar23 >> (bVar1 & 0x1f);
              uVar6 = uVar6 | (ushort)uVar23;
              if ((0x80000000 < uVar22) || ((uVar22 == 0x80000000 && ((uVar23 & 1) != 0)))) {
                uVar6 = uVar6 + 1;
              }
            }
          }
          else if ((uint)fVar21 < 0x7f800000) {
            if ((uint)fVar21 < 0x477ff000) {
              uVar6 = uVar6 | (ushort)((int)fVar21 + -0x37fff001 +
                                       ((int)fVar21 + 0xc8000000U >> 0xd & 1) >> 0xd);
            }
            else {
              uVar6 = uVar6 | 0x7c00;
            }
          }
          else {
            uVar6 = uVar6 | 0x7c00;
            if (fVar21 != INFINITY) {
              uVar22 = (uint)fVar21 >> 0xd & 0x3ff;
              uVar6 = uVar6 | uVar22 == 0 | (ushort)uVar22;
            }
          }
          uStack_220._4_4_ = SUB84(uVar12,4);
          uStack_220._0_4_ = CONCAT22(uVar6,(short)uVar13);
          local_208 = *(undefined8 *)(lVar19 + 0x130);
          uStack_200 = *(undefined8 *)(lVar19 + 0x138);
          local_1f8 = &DAT_100000001;
          local_218 = puVar16;
          if (local_278 == local_290) {
            FUN_144e72e80(&local_240,local_278,&local_228);
            local_290 = local_230;
            local_278 = puStack_238;
          }
          else {
            *local_278 = local_228;
            local_278[1] = uStack_220;
            local_278[2] = puVar16;
            local_278[3] = uStack_210;
            local_278[4] = local_208;
            local_278[5] = uStack_200;
            local_278[6] = &DAT_100000001;
            local_278 = local_278 + 7;
            puStack_238 = local_278;
          }
        }
      }
      else {
        bVar29 = false;
      }
      puVar26 = local_278;
      if (bVar28 == 0) {
        iVar7 = *(int *)(local_288 + 0x11c);
        if (iVar7 == 0) {
LAB_144e6f511:
          puVar16 = (undefined8 *)((longlong)puVar16 + 2);
        }
        else if (iVar7 == 1) {
          puVar16 = (undefined8 *)((longlong)puVar16 + 1);
        }
        else if (iVar7 == 2) goto LAB_144e6f511;
      }
      plVar10 = (longlong *)FUN_144b65f40(uVar8,local_1c8);
      if ((local_288 != *plVar10) && (bVar28 == 0)) {
        FUN_144b663b0(&local_288);
      }
      FUN_144b6cdf0(&local_298);
      plVar10 = (longlong *)FUN_144b72ed0(plVar9,local_1f0);
      lVar19 = local_1e0;
      puVar25 = local_280;
    } while (CONCAT44(uStack_294,local_298) != *plVar10);
  }
  lVar24 = local_240;
  if (bVar29) {
    uVar15 = ((longlong)puVar26 - local_240) / 0x38;
    FUN_144e73380(local_240,puVar26,uVar15,0);
    uVar22 = local_298 >> 8;
    local_298 = local_298 & 0xffffff00;
    if ((((uVar15 == 3) || (uVar15 == 4)) || (uVar15 == 6)) || (uVar15 == 8)) {
      if (uVar15 < 5) {
        uVar20 = uVar15;
        if (uVar15 != 0) goto LAB_144e6f5ec;
      }
      else {
        uVar20 = uVar15 >> 1;
LAB_144e6f5ec:
        uVar14 = 0;
        plVar9 = (longlong *)(lVar24 + 0x20);
        do {
          if (((((char)plVar9[-3] != '\0') && ((uVar14 - 3 & 0xfffffffffffffffb) != 0)) ||
              (*plVar9 != uVar20 * 2)) ||
             ((uVar14 != 0 &&
              (((uVar14 != uVar20 && (plVar9[-4] != plVar9[-0xb] + 2)) || (plVar9[1] != plVar9[-6]))
              )))) goto LAB_144e6f646;
          uVar14 = uVar14 + 1;
          plVar9 = plVar9 + 7;
        } while (uVar14 < uVar15);
      }
      uStack_294 = *(undefined4 *)(lVar24 + 0x34);
      local_298 = CONCAT31((int3)uVar22,1);
    }
LAB_144e6f646:
    *(ulonglong *)(*(longlong *)(local_248 + 8) + 0x130) = CONCAT44(uStack_294,local_298);
    puVar16 = local_278;
    lVar27 = local_248;
    if (*(char *)(*(longlong *)(local_248 + 8) + 0x130) != '\0') goto LAB_144e6f707;
  }
  lVar27 = local_248;
  if (lVar24 != 0) {
    uVar15 = (((longlong)local_290 - lVar24) / 0x38) * 0x38;
    lVar17 = lVar24;
    if (0xfff < uVar15) {
      uVar15 = uVar15 + 0x27;
      lVar17 = *(longlong *)(lVar24 + -8);
      if (0x1f < (lVar24 - lVar17) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar17,uVar15);
  }
  local_240 = 0;
  puStack_238 = (undefined8 *)0x0;
  local_290 = (undefined8 *)0x0;
  local_230 = (undefined8 *)0x0;
  *(undefined1 *)(*(longlong *)(lVar27 + 8) + 0x130) = 0;
  lVar24 = 0;
  puVar16 = (undefined8 *)0x0;
LAB_144e6f707:
  lVar27 = *(longlong *)(lVar27 + 8);
  plVar9 = (longlong *)(lVar27 + 0x70);
  if (plVar9 != local_250) {
    lVar17 = *plVar9;
    cVar2 = *(char *)((longlong)*(longlong **)(lVar17 + 8) + 0x19);
    plVar10 = *(longlong **)(lVar17 + 8);
    plVar3 = local_250;
    while (local_250 = plVar3, cVar2 == '\0') {
      FUN_14698d1ae(plVar9,plVar9,plVar10[2]);
      plVar3 = (longlong *)*plVar10;
      thunk_FUN_1400020a8(plVar10,0x158);
      cVar2 = *(char *)((longlong)plVar3 + 0x19);
      plVar10 = plVar3;
      plVar3 = local_250;
    }
    *(longlong *)(lVar17 + 8) = lVar17;
    *(longlong *)lVar17 = lVar17;
    *(longlong *)(lVar17 + 0x10) = lVar17;
    *(undefined8 *)(lVar27 + 0x78) = 0;
    uVar8 = FUN_144b6d960(plVar9,*(undefined8 *)(*plVar3 + 8),*plVar9);
    *(undefined8 *)(*plVar9 + 8) = uVar8;
    *(longlong *)(lVar27 + 0x78) = plVar3[1];
    plVar10 = (longlong *)*plVar9;
    plVar3 = (longlong *)plVar10[1];
    if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar3 + 0x19);
      plVar5 = (longlong *)*plVar3;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*plVar5 + 0x19);
        plVar3 = plVar5;
        plVar5 = (longlong *)*plVar5;
      }
      *plVar10 = (longlong)plVar3;
      lVar27 = *(longlong *)(*plVar9 + 8);
      lVar17 = *(longlong *)(lVar27 + 0x10);
      cVar2 = *(char *)(lVar17 + 0x19);
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*(longlong *)(lVar17 + 0x10) + 0x19);
        lVar27 = lVar17;
        lVar17 = *(longlong *)(lVar17 + 0x10);
      }
      *(longlong *)(*plVar9 + 0x10) = lVar27;
    }
    else {
      *plVar10 = (longlong)plVar10;
      *(longlong *)(*plVar9 + 0x10) = *plVar9;
    }
  }
  lVar17 = local_248;
  lVar27 = local_270;
  plVar9 = (longlong *)(*(longlong *)(local_248 + 8) + 0xe8);
  if (plVar9 != &local_270) {
    FUN_144e72ba0(plVar9,local_270,((longlong)puVar18 - local_270) / 0x38);
  }
  plVar9 = (longlong *)(*(longlong *)(lVar17 + 8) + 0x138);
  if (plVar9 != &local_240) {
    FUN_144e72a20(plVar9,lVar24,((longlong)puVar16 - lVar24) / 0x38);
  }
  if (lVar27 != 0) {
    uVar15 = (((longlong)local_280 - lVar27) / 0x38) * 0x38;
    lVar17 = lVar27;
    if (0xfff < uVar15) {
      uVar15 = uVar15 + 0x27;
      lVar17 = *(longlong *)(lVar27 + -8);
      if (0x1f < (lVar27 - lVar17) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar17,uVar15);
  }
  if (lVar24 != 0) {
    uVar15 = (((longlong)local_290 - lVar24) / 0x38) * 0x38;
    lVar27 = lVar24;
    if (0xfff < uVar15) {
      uVar15 = uVar15 + 0x27;
      lVar27 = *(longlong *)(lVar24 + -8);
      if (0x1f < (lVar24 - lVar27) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar27,uVar15);
  }
  _Mtx_unlock(lVar19);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_2b8);
}



// FUNCTION 144e6fa10 FUN_144e6fa10 body=91 status=ok
// SIG undefined FUN_144e6fa10(void)

longlong FUN_144e6fa10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar1 + 0x4c) != 0x7fffffff) {
    lVar2 = *(longlong *)(param_1 + 8);
    _Mtx_unlock(lVar1);
    return lVar2 + 0x70;
  }
  *(undefined4 *)(lVar1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  std::_Throw_Cpp_error(6);
}



// FUNCTION 144e6fa70 FUN_144e6fa70 body=600 status=ok
// SIG undefined FUN_144e6fa70(void)

void FUN_144e6fa70(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_2c8 [32];
  int local_2a8;
  int local_2a0;
  undefined8 local_298;
  undefined1 local_288 [8];
  longlong local_280;
  longlong local_278;
  undefined1 local_168 [96];
  undefined1 local_108 [96];
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_280 = param_1;
  local_278 = lVar1;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(lVar1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  lVar6 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(lVar6 + 0xf0) - *(longlong *)(lVar6 + 0xe8);
  lVar2 = lVar5 >> 0x3f;
  if (lVar5 / 0x38 + lVar2 == lVar2) {
    FUN_144e40d70(local_168,"No frame buffer specified as pixel data destination.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_168,(ThrowInfo *)&DAT_14c6d50e0);
  }
  iVar3 = param_2;
  if (param_3 < param_2) {
    iVar3 = param_3;
  }
  if (param_2 < param_3) {
    param_2 = param_3;
  }
  iVar9 = *(int *)(lVar6 + 0x8c);
  if ((iVar9 <= iVar3) && (param_2 <= *(int *)(lVar6 + 0x90))) {
    uVar8 = (longlong)(param_2 - iVar9) / (longlong)*(int *)(lVar6 + 0x118);
    uVar7 = (longlong)(iVar3 - iVar9) / (longlong)*(int *)(lVar6 + 0x118);
    if (*(int *)(lVar6 + 0x80) == 0) {
      iVar10 = (int)uVar8 + 1;
      iVar9 = 1;
      uVar8 = uVar7;
    }
    else {
      iVar10 = (int)uVar7 + -1;
      iVar9 = -1;
    }
    FUN_144e7f920(local_288);
    for (uVar8 = uVar8 & 0xffffffff; (int)uVar8 != iVar10;
        uVar8 = (ulonglong)(uint)((int)uVar8 + iVar9)) {
      local_298 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x130);
      local_2a8 = iVar3;
      local_2a0 = param_2;
      uVar4 = FUN_144e728a0(local_288,*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 8),
                            uVar8);
      FUN_144e7f670(uVar4);
    }
    FUN_144e7f970(local_288);
    uVar7 = 0;
    lVar6 = *(longlong *)(param_1 + 8);
    uVar8 = uVar7;
    if (*(longlong *)(lVar6 + 0x108) - *(longlong *)(lVar6 + 0x100) >> 3 != 0) {
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x100) + uVar8 * 8);
        if ((*(char *)(lVar6 + 0x30) != '\0') && (uVar7 == 0)) {
          uVar7 = lVar6 + 0x38;
        }
        *(undefined1 *)(lVar6 + 0x30) = 0;
        uVar8 = uVar8 + 1;
        lVar6 = *(longlong *)(param_1 + 8);
      } while (uVar8 < (ulonglong)(*(longlong *)(lVar6 + 0x108) - *(longlong *)(lVar6 + 0x100) >> 3)
              );
      if (uVar7 != 0) {
        FUN_144e41220(local_108);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_108,(ThrowInfo *)&DAT_14c6d52d8);
      }
    }
    _Mtx_unlock(lVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_2c8);
  }
  FUN_144e40d70(local_a8,"Tried to read scan line outside the image file\'s data window.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144e6fce0 FUN_144e6fce0 body=339 status=ok
// SIG undefined FUN_144e6fce0(void)

void FUN_144e6fce0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  longlong local_80;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_1;
  FUN_144e66980();
  *param_1 = Imf_3_2::ScanLineInputFile::vftable;
  puVar5 = (undefined8 *)FUN_144b67ef0(param_2);
  _Buf2 = &DAT_14c70a190;
  if (0xf < DAT_14c70a1a8) {
    _Buf2 = DAT_14c70a190;
  }
  _Buf1 = puVar5;
  if (0xf < (ulonglong)puVar5[3]) {
    _Buf1 = (undefined8 *)*puVar5;
  }
  if (puVar5[2] == DAT_14c70a1a0) {
    iVar4 = memcmp(_Buf1,_Buf2,puVar5[2]);
    bVar2 = false;
    if (iVar4 == 0) goto LAB_144e6fd5e;
  }
  bVar2 = true;
LAB_144e6fd5e:
  if (!bVar2) {
    local_80 = FUN_14494321d(0x150);
    uVar6 = 0;
    if (local_80 != 0) {
      uVar6 = FUN_144e712e0(local_80,*(undefined4 *)(param_2 + 0x18));
    }
    param_1[1] = uVar6;
    lVar1 = *(longlong *)(param_2 + 0x28);
    param_1[2] = lVar1;
    uVar3 = (**(code **)(**(longlong **)(lVar1 + 0x50) + 8))();
    *(undefined1 *)(param_1[1] + 300) = uVar3;
    *(undefined4 *)(param_1[1] + 0x68) = *(undefined4 *)(param_2 + 0x20);
    FUN_144e6fe50(param_1,param_2);
    if ((longlong *)(param_1[1] + 0x98) != (longlong *)(param_2 + 0x30)) {
      lVar1 = *(longlong *)(param_2 + 0x30);
      FUN_144e72d20((longlong *)(param_1[1] + 0x98),lVar1,*(longlong *)(param_2 + 0x38) - lVar1 >> 3
                   );
    }
    *(undefined4 *)(param_1[1] + 0x128) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined1 *)(param_1[1] + 0xb0) = 1;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e40d70(local_78,"Can\'t build a ScanLineInputFile from a type-mismatched part.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144e6fe50 FUN_144e6fe50 body=963 status=ok
// SIG undefined FUN_144e6fe50(void)

void FUN_144e6fe50(longlong param_1)

{
  size_t _Size;
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  void *pvVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  undefined1 local_a8 [96];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b67310(*(longlong *)(param_1 + 8) + 0x50);
  puVar6 = (undefined4 *)FUN_144b67ba0(*(longlong *)(param_1 + 8) + 0x50);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x80) = *puVar6;
  puVar6 = (undefined4 *)FUN_144b67b00(*(longlong *)(param_1 + 8) + 0x50);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x84) = *puVar6;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x88) = puVar6[2];
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x8c) = puVar6[1];
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x90) = puVar6[3];
  puVar7 = (undefined4 *)FUN_144b67be0(*(longlong *)(param_1 + 8) + 0x50);
  uVar1 = *puVar7;
  uVar4 = FUN_144e49d50(uVar1);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x118) = uVar4;
  lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x118);
  uVar8 = (((longlong)(int)puVar6[3] - (longlong)(int)puVar6[1]) + lVar17) / lVar17;
  if (0x100000 < lVar17 * uVar8) {
    lVar17 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x50) + 0x20))();
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x50);
    (**(code **)(*plVar2 + 0x28))(plVar2,lVar17 + -8 + uVar8 * 8);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x50);
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_48,8);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x50);
    (**(code **)(*plVar2 + 0x28))(plVar2,lVar17);
  }
  lVar17 = FUN_144e67080(*(longlong *)(param_1 + 8) + 0x50,*(longlong *)(param_1 + 8) + 0xb8);
  iVar5 = FUN_144e49d50(uVar1);
  if (0x7fffffff < (ulonglong)(iVar5 * lVar17)) {
    FUN_144e41060(local_a8,"maximum bytes per scanline exceeds maximum permissible size");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  puVar16 = (undefined8 *)0x0;
  lVar12 = *(longlong *)(param_1 + 8);
  puVar15 = puVar16;
  if (*(longlong *)(lVar12 + 0x108) - *(longlong *)(lVar12 + 0x100) >> 3 != 0) {
    do {
      puVar9 = (undefined8 *)FUN_14494321d(0x68);
      puVar14 = puVar16;
      local_48 = puVar9;
      if (puVar9 != (undefined8 *)0x0) {
        uVar10 = FUN_144e498d0(uVar1,lVar17,*(longlong *)(param_1 + 8) + 0x50);
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined4 *)(puVar9 + 2) = 0;
        puVar9[4] = uVar10;
        uVar4 = FUN_144e67550(uVar10);
        *(undefined4 *)(puVar9 + 5) = uVar4;
        *(undefined4 *)((longlong)puVar9 + 0x2c) = 0xffffffff;
        *(undefined1 *)(puVar9 + 6) = 0;
        puVar9[7] = 0;
        puVar9[8] = 0;
        puVar9[9] = 0;
        puVar9[10] = 0xf;
        *(undefined1 *)(puVar9 + 7) = 0;
        FUN_144e80de0(puVar9 + 0xb,1);
        puVar14 = puVar9;
      }
      *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x100) + (longlong)puVar15 * 8) =
           puVar14;
      puVar15 = (undefined8 *)((longlong)puVar15 + 1);
      lVar12 = *(longlong *)(param_1 + 8);
    } while (puVar15 < (undefined8 *)
                       (*(longlong *)(lVar12 + 0x108) - *(longlong *)(lVar12 + 0x100) >> 3));
  }
  *(longlong *)(lVar12 + 0x120) = *(int *)(lVar12 + 0x118) * lVar17;
  cVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + 0x50) + 8))();
  if ((cVar3 == '\0') &&
     (lVar17 = *(longlong *)(param_1 + 8),
     *(longlong *)(lVar17 + 0x108) - *(longlong *)(lVar17 + 0x100) >> 3 != 0)) {
    do {
      pvVar11 = _aligned_malloc(*(size_t *)(lVar17 + 0x120),0x10);
      *(void **)(*(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x100) + (longlong)puVar16 * 8) + 8) =
           pvVar11;
      lVar17 = *(longlong *)(param_1 + 8);
      if (*(longlong *)(*(longlong *)(*(longlong *)(lVar17 + 0x100) + (longlong)puVar16 * 8) + 8) ==
          0) {
        FUN_144e40f00(local_a8,"Failed to allocate memory for scanline buffers");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d5340);
      }
      puVar16 = (undefined8 *)((longlong)puVar16 + 1);
    } while (puVar16 < (undefined8 *)
                       (*(longlong *)(lVar17 + 0x108) - *(longlong *)(lVar17 + 0x100) >> 3));
  }
  *(int *)(*(longlong *)(param_1 + 8) + 0xb4) = *(int *)(*(longlong *)(param_1 + 8) + 0x8c) + -1;
  lVar17 = *(longlong *)(param_1 + 8);
  FUN_144e674c0(lVar17 + 0xb8,*(undefined4 *)(lVar17 + 0x118),lVar17 + 0xd0);
  lVar17 = *(longlong *)(param_1 + 8);
  pvVar11 = *(void **)(lVar17 + 0xa0);
  lVar12 = *(longlong *)(lVar17 + 0x98);
  uVar13 = (longlong)pvVar11 - lVar12 >> 3;
  if (uVar8 < uVar13) {
    pvVar11 = (void *)(lVar12 + uVar8 * 8);
  }
  else {
    if (uVar8 <= uVar13) goto LAB_144e701bf;
    if ((ulonglong)(*(longlong *)(lVar17 + 0xa8) - lVar12 >> 3) < uVar8) {
      FUN_144b702f0((longlong *)(lVar17 + 0x98),uVar8,local_b8);
      goto LAB_144e701bf;
    }
    _Size = (uVar8 - uVar13) * 8;
    memset(pvVar11,0,_Size);
    pvVar11 = (void *)(_Size + (longlong)pvVar11);
  }
  *(void **)(lVar17 + 0xa0) = pvVar11;
LAB_144e701bf:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
}



// FUNCTION 144e70230 FUN_144e70230 body=249 status=ok
// SIG undefined FUN_144e70230(void)

undefined8 * FUN_144e70230(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  *param_1 = Imf_3_2::ScanLineInputFile::vftable;
  if ((*(char *)(lVar2 + 300) == '\0') &&
     (uVar1 = 0, *(longlong *)(lVar2 + 0x108) - *(longlong *)(lVar2 + 0x100) >> 3 != 0)) {
    do {
      _aligned_free(*(void **)(*(longlong *)(*(longlong *)(lVar2 + 0x100) + uVar1 * 8) + 8));
      lVar2 = param_1[1];
      uVar1 = uVar1 + 1;
    } while (uVar1 < (ulonglong)(*(longlong *)(lVar2 + 0x108) - *(longlong *)(lVar2 + 0x100) >> 3));
  }
  if ((*(int *)(lVar2 + 0x128) == -1) && (lVar2 = param_1[2], lVar2 != 0)) {
    _Mtx_destroy_in_situ(lVar2);
    thunk_FUN_1400020a8(lVar2,0x60);
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    FUN_144e71490(lVar2);
    thunk_FUN_1400020a8(lVar2,0x150);
  }
  FUN_144e66970(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144e70330 FUN_144e70330 body=31 status=ok
// SIG undefined FUN_144e70330(void)

void FUN_144e70330(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  FUN_144b6ebb0();
  return;
}



// FUNCTION 144e70350 _aligned_free body=7 status=ok
// SIG void _aligned_free(void * _Memory)

void __cdecl _aligned_free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x000144e70350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _aligned_free(_Memory);
  return;
}



// FUNCTION 144e70360 FUN_144e70360 body=957 status=ok
// SIG undefined FUN_144e70360(void)

void FUN_144e70360(longlong *param_1,byte *param_2,byte *param_3,byte *param_4,ulonglong *param_5,
                  ulonglong *param_6,ulonglong *param_7)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 (*pauVar19) [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined4 uVar56;
  undefined1 auVar58 [12];
  undefined1 auVar59 [12];
  undefined1 auVar60 [12];
  undefined4 uVar65;
  undefined1 auVar67 [12];
  undefined1 auVar68 [12];
  undefined1 auVar69 [12];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar54 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [12];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar66 [12];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  
  pauVar19 = (undefined1 (*) [16])*param_1;
  uVar18 = 0;
  uVar1 = *param_6;
  if (((*param_3 & 0xf) == 0 && ((*param_2 & 0xf) == 0 && ((ulonglong)pauVar19 & 0xf) == 0)) &&
      (*param_4 & 0xf) == 0) {
    if ((*param_5 & 0xf) == 0) {
      uVar17 = uVar18;
      if (uVar1 != 0) {
        do {
          auVar27 = *pauVar19;
          uVar17 = uVar17 + 1;
          puVar2 = *(undefined2 **)param_2;
          auVar55._0_12_ = auVar27._0_12_;
          auVar55._12_2_ = auVar27._6_2_;
          auVar55._14_2_ = puVar2[3];
          auVar54._12_4_ = auVar55._12_4_;
          auVar54._0_10_ = auVar27._0_10_;
          auVar54._10_2_ = puVar2[2];
          auVar53._10_6_ = auVar54._10_6_;
          auVar53._0_8_ = auVar27._0_8_;
          auVar53._8_2_ = auVar27._4_2_;
          auVar15._4_8_ = auVar53._8_8_;
          auVar15._2_2_ = puVar2[1];
          auVar15._0_2_ = auVar27._2_2_;
          auVar52._0_4_ = CONCAT22(*puVar2,auVar27._0_2_);
          auVar52._4_12_ = auVar15;
          uVar65 = CONCAT22(puVar2[4],auVar27._8_2_);
          auVar69._0_8_ = CONCAT26(puVar2[5],CONCAT24(auVar27._10_2_,uVar65));
          auVar69._8_2_ = auVar27._12_2_;
          auVar69._10_2_ = puVar2[6];
          auVar73._12_2_ = auVar27._14_2_;
          auVar73._0_12_ = auVar69;
          auVar73._14_2_ = puVar2[7];
          auVar27 = **(undefined1 (**) [16])param_3;
          puVar2 = *(undefined2 **)param_4;
          puVar3 = (undefined8 *)*param_5;
          auVar39._0_12_ = auVar27._0_12_;
          auVar39._12_2_ = auVar27._6_2_;
          auVar39._14_2_ = puVar2[3];
          auVar38._12_4_ = auVar39._12_4_;
          auVar38._0_10_ = auVar27._0_10_;
          auVar38._10_2_ = puVar2[2];
          auVar37._10_6_ = auVar38._10_6_;
          auVar37._0_8_ = auVar27._0_8_;
          auVar37._8_2_ = auVar27._4_2_;
          auVar16._4_8_ = auVar37._8_8_;
          auVar16._2_2_ = puVar2[1];
          auVar16._0_2_ = auVar27._2_2_;
          auVar26._0_8_ = auVar52._0_8_;
          auVar26._8_4_ = auVar15._0_4_;
          auVar26._12_4_ = auVar16._0_4_;
          uVar56 = CONCAT22(puVar2[4],auVar27._8_2_);
          auVar60._0_8_ = CONCAT26(puVar2[5],CONCAT24(auVar27._10_2_,uVar56));
          auVar60._8_2_ = auVar27._12_2_;
          auVar60._10_2_ = puVar2[6];
          auVar64._12_2_ = auVar27._14_2_;
          auVar64._0_12_ = auVar60;
          auVar64._14_2_ = puVar2[7];
          *puVar3 = CONCAT44(CONCAT22(*puVar2,auVar27._0_2_),auVar52._0_4_);
          puVar3[1] = auVar26._8_8_;
          *param_5 = *param_5 + 0x10;
          puVar4 = (undefined4 *)*param_5;
          auVar27._8_4_ = (int)((ulonglong)auVar69._0_8_ >> 0x20);
          auVar27._0_8_ = auVar69._0_8_;
          auVar27._12_4_ = (int)((ulonglong)auVar60._0_8_ >> 0x20);
          *puVar4 = auVar53._8_4_;
          puVar4[1] = auVar37._8_4_;
          puVar4[2] = auVar54._12_4_;
          puVar4[3] = auVar38._12_4_;
          *param_5 = *param_5 + 0x10;
          puVar3 = (undefined8 *)*param_5;
          *puVar3 = CONCAT44(uVar56,uVar65);
          puVar3[1] = auVar27._8_8_;
          *param_5 = *param_5 + 0x10;
          puVar4 = (undefined4 *)*param_5;
          *puVar4 = auVar69._8_4_;
          puVar4[1] = auVar60._8_4_;
          puVar4[2] = auVar73._12_4_;
          puVar4[3] = auVar64._12_4_;
          *param_5 = *param_5 + 0x10;
          *(longlong *)param_4 = *(longlong *)param_4 + 0x10;
          *(longlong *)param_3 = *(longlong *)param_3 + 0x10;
          *(longlong *)param_2 = *(longlong *)param_2 + 0x10;
          *param_1 = *param_1 + 0x10;
          pauVar19 = (undefined1 (*) [16])*param_1;
        } while (uVar17 < *param_6);
      }
    }
    else {
      uVar17 = uVar18;
      if (uVar1 != 0) {
        do {
          auVar27 = *pauVar19;
          uVar17 = uVar17 + 1;
          puVar2 = *(undefined2 **)param_2;
          auVar51._0_12_ = auVar27._0_12_;
          auVar51._12_2_ = auVar27._6_2_;
          auVar51._14_2_ = puVar2[3];
          auVar50._12_4_ = auVar51._12_4_;
          auVar50._0_10_ = auVar27._0_10_;
          auVar50._10_2_ = puVar2[2];
          auVar49._10_6_ = auVar50._10_6_;
          auVar49._0_8_ = auVar27._0_8_;
          auVar49._8_2_ = auVar27._4_2_;
          auVar13._4_8_ = auVar49._8_8_;
          auVar13._2_2_ = puVar2[1];
          auVar13._0_2_ = auVar27._2_2_;
          auVar48._0_4_ = CONCAT22(*puVar2,auVar27._0_2_);
          auVar48._4_12_ = auVar13;
          uVar65 = CONCAT22(puVar2[4],auVar27._8_2_);
          auVar68._0_8_ = CONCAT26(puVar2[5],CONCAT24(auVar27._10_2_,uVar65));
          auVar68._8_2_ = auVar27._12_2_;
          auVar68._10_2_ = puVar2[6];
          auVar72._12_2_ = auVar27._14_2_;
          auVar72._0_12_ = auVar68;
          auVar72._14_2_ = puVar2[7];
          auVar27 = **(undefined1 (**) [16])param_3;
          puVar2 = *(undefined2 **)param_4;
          puVar3 = (undefined8 *)*param_5;
          auVar36._0_12_ = auVar27._0_12_;
          auVar36._12_2_ = auVar27._6_2_;
          auVar36._14_2_ = puVar2[3];
          auVar35._12_4_ = auVar36._12_4_;
          auVar35._0_10_ = auVar27._0_10_;
          auVar35._10_2_ = puVar2[2];
          auVar34._10_6_ = auVar35._10_6_;
          auVar34._0_8_ = auVar27._0_8_;
          auVar34._8_2_ = auVar27._4_2_;
          auVar14._4_8_ = auVar34._8_8_;
          auVar14._2_2_ = puVar2[1];
          auVar14._0_2_ = auVar27._2_2_;
          auVar24._0_8_ = auVar48._0_8_;
          auVar24._8_4_ = auVar13._0_4_;
          auVar24._12_4_ = auVar14._0_4_;
          uVar56 = CONCAT22(puVar2[4],auVar27._8_2_);
          auVar59._0_8_ = CONCAT26(puVar2[5],CONCAT24(auVar27._10_2_,uVar56));
          auVar59._8_2_ = auVar27._12_2_;
          auVar59._10_2_ = puVar2[6];
          auVar63._12_2_ = auVar27._14_2_;
          auVar63._0_12_ = auVar59;
          auVar63._14_2_ = puVar2[7];
          *puVar3 = CONCAT44(CONCAT22(*puVar2,auVar27._0_2_),auVar48._0_4_);
          puVar3[1] = auVar24._8_8_;
          *param_5 = *param_5 + 0x10;
          puVar4 = (undefined4 *)*param_5;
          auVar25._8_4_ = (int)((ulonglong)auVar68._0_8_ >> 0x20);
          auVar25._0_8_ = auVar68._0_8_;
          auVar25._12_4_ = (int)((ulonglong)auVar59._0_8_ >> 0x20);
          *puVar4 = auVar49._8_4_;
          puVar4[1] = auVar34._8_4_;
          puVar4[2] = auVar50._12_4_;
          puVar4[3] = auVar35._12_4_;
          *param_5 = *param_5 + 0x10;
          puVar3 = (undefined8 *)*param_5;
          *puVar3 = CONCAT44(uVar56,uVar65);
          puVar3[1] = auVar25._8_8_;
          *param_5 = *param_5 + 0x10;
          puVar4 = (undefined4 *)*param_5;
          *puVar4 = auVar68._8_4_;
          puVar4[1] = auVar59._8_4_;
          puVar4[2] = auVar72._12_4_;
          puVar4[3] = auVar63._12_4_;
          *param_5 = *param_5 + 0x10;
          *(longlong *)param_4 = *(longlong *)param_4 + 0x10;
          *(longlong *)param_3 = *(longlong *)param_3 + 0x10;
          *(longlong *)param_2 = *(longlong *)param_2 + 0x10;
          *param_1 = *param_1 + 0x10;
          pauVar19 = (undefined1 (*) [16])*param_1;
        } while (uVar17 < *param_6);
      }
    }
  }
  else if ((*param_5 & 0xf) == 0) {
    uVar17 = uVar18;
    if (uVar1 != 0) {
      do {
        auVar27 = *pauVar19;
        puVar2 = *(undefined2 **)param_2;
        uVar17 = uVar17 + 1;
        auVar47._0_12_ = auVar27._0_12_;
        auVar47._12_2_ = auVar27._6_2_;
        auVar47._14_2_ = puVar2[3];
        auVar46._12_4_ = auVar47._12_4_;
        auVar46._0_10_ = auVar27._0_10_;
        auVar46._10_2_ = puVar2[2];
        auVar45._10_6_ = auVar46._10_6_;
        auVar45._0_8_ = auVar27._0_8_;
        auVar45._8_2_ = auVar27._4_2_;
        auVar11._4_8_ = auVar45._8_8_;
        auVar11._2_2_ = puVar2[1];
        auVar11._0_2_ = auVar27._2_2_;
        auVar44._0_4_ = CONCAT22(*puVar2,auVar27._0_2_);
        auVar44._4_12_ = auVar11;
        uVar65 = CONCAT22(puVar2[4],auVar27._8_2_);
        auVar67._0_8_ = CONCAT26(puVar2[5],CONCAT24(auVar27._10_2_,uVar65));
        auVar67._8_2_ = auVar27._12_2_;
        auVar67._10_2_ = puVar2[6];
        auVar71._12_2_ = auVar27._14_2_;
        auVar71._0_12_ = auVar67;
        auVar71._14_2_ = puVar2[7];
        auVar27 = **(undefined1 (**) [16])param_3;
        puVar2 = *(undefined2 **)param_4;
        uVar5 = puVar2[4];
        uVar6 = puVar2[5];
        uVar7 = puVar2[6];
        uVar8 = puVar2[7];
        puVar3 = (undefined8 *)*param_5;
        auVar33._0_12_ = auVar27._0_12_;
        auVar33._12_2_ = auVar27._6_2_;
        auVar33._14_2_ = puVar2[3];
        auVar32._12_4_ = auVar33._12_4_;
        auVar32._0_10_ = auVar27._0_10_;
        auVar32._10_2_ = puVar2[2];
        auVar31._10_6_ = auVar32._10_6_;
        auVar31._0_8_ = auVar27._0_8_;
        auVar31._8_2_ = auVar27._4_2_;
        auVar12._4_8_ = auVar31._8_8_;
        auVar12._2_2_ = puVar2[1];
        auVar12._0_2_ = auVar27._2_2_;
        auVar22._0_8_ = auVar44._0_8_;
        auVar22._8_4_ = auVar11._0_4_;
        auVar22._12_4_ = auVar12._0_4_;
        *puVar3 = CONCAT44(CONCAT22(*puVar2,auVar27._0_2_),auVar44._0_4_);
        puVar3[1] = auVar22._8_8_;
        *param_5 = *param_5 + 0x10;
        puVar4 = (undefined4 *)*param_5;
        uVar56 = CONCAT22(uVar5,auVar27._8_2_);
        auVar58._0_8_ = CONCAT26(uVar6,CONCAT24(auVar27._10_2_,uVar56));
        auVar58._8_2_ = auVar27._12_2_;
        auVar58._10_2_ = uVar7;
        auVar62._12_2_ = auVar27._14_2_;
        auVar62._0_12_ = auVar58;
        auVar62._14_2_ = uVar8;
        auVar23._8_4_ = (int)((ulonglong)auVar67._0_8_ >> 0x20);
        auVar23._0_8_ = auVar67._0_8_;
        auVar23._12_4_ = (int)((ulonglong)auVar58._0_8_ >> 0x20);
        *puVar4 = auVar45._8_4_;
        puVar4[1] = auVar31._8_4_;
        puVar4[2] = auVar46._12_4_;
        puVar4[3] = auVar32._12_4_;
        *param_5 = *param_5 + 0x10;
        puVar3 = (undefined8 *)*param_5;
        *puVar3 = CONCAT44(uVar56,uVar65);
        puVar3[1] = auVar23._8_8_;
        *param_5 = *param_5 + 0x10;
        puVar4 = (undefined4 *)*param_5;
        *puVar4 = auVar67._8_4_;
        puVar4[1] = auVar58._8_4_;
        puVar4[2] = auVar71._12_4_;
        puVar4[3] = auVar62._12_4_;
        *param_5 = *param_5 + 0x10;
        *(longlong *)param_4 = *(longlong *)param_4 + 0x10;
        *(longlong *)param_3 = *(longlong *)param_3 + 0x10;
        *(longlong *)param_2 = *(longlong *)param_2 + 0x10;
        *param_1 = *param_1 + 0x10;
        pauVar19 = (undefined1 (*) [16])*param_1;
      } while (uVar17 < *param_6);
    }
  }
  else {
    uVar17 = uVar18;
    if (uVar1 != 0) {
      do {
        auVar27 = *pauVar19;
        puVar2 = *(undefined2 **)param_2;
        uVar17 = uVar17 + 1;
        auVar43._0_12_ = auVar27._0_12_;
        auVar43._12_2_ = auVar27._6_2_;
        auVar43._14_2_ = puVar2[3];
        auVar42._12_4_ = auVar43._12_4_;
        auVar42._0_10_ = auVar27._0_10_;
        auVar42._10_2_ = puVar2[2];
        auVar41._10_6_ = auVar42._10_6_;
        auVar41._0_8_ = auVar27._0_8_;
        auVar41._8_2_ = auVar27._4_2_;
        auVar9._4_8_ = auVar41._8_8_;
        auVar9._2_2_ = puVar2[1];
        auVar9._0_2_ = auVar27._2_2_;
        auVar40._0_4_ = CONCAT22(*puVar2,auVar27._0_2_);
        auVar40._4_12_ = auVar9;
        uVar65 = CONCAT22(puVar2[4],auVar27._8_2_);
        auVar66._0_8_ = CONCAT26(puVar2[5],CONCAT24(auVar27._10_2_,uVar65));
        auVar66._8_2_ = auVar27._12_2_;
        auVar66._10_2_ = puVar2[6];
        auVar70._12_2_ = auVar27._14_2_;
        auVar70._0_12_ = auVar66;
        auVar70._14_2_ = puVar2[7];
        auVar27 = **(undefined1 (**) [16])param_3;
        puVar2 = *(undefined2 **)param_4;
        uVar5 = puVar2[4];
        uVar6 = puVar2[5];
        uVar7 = puVar2[6];
        uVar8 = puVar2[7];
        puVar3 = (undefined8 *)*param_5;
        auVar30._0_12_ = auVar27._0_12_;
        auVar30._12_2_ = auVar27._6_2_;
        auVar30._14_2_ = puVar2[3];
        auVar29._12_4_ = auVar30._12_4_;
        auVar29._0_10_ = auVar27._0_10_;
        auVar29._10_2_ = puVar2[2];
        auVar28._10_6_ = auVar29._10_6_;
        auVar28._0_8_ = auVar27._0_8_;
        auVar28._8_2_ = auVar27._4_2_;
        auVar10._4_8_ = auVar28._8_8_;
        auVar10._2_2_ = puVar2[1];
        auVar10._0_2_ = auVar27._2_2_;
        auVar20._0_8_ = auVar40._0_8_;
        auVar20._8_4_ = auVar9._0_4_;
        auVar20._12_4_ = auVar10._0_4_;
        *puVar3 = CONCAT44(CONCAT22(*puVar2,auVar27._0_2_),auVar40._0_4_);
        puVar3[1] = auVar20._8_8_;
        *param_5 = *param_5 + 0x10;
        puVar4 = (undefined4 *)*param_5;
        uVar56 = CONCAT22(uVar5,auVar27._8_2_);
        auVar57._0_8_ = CONCAT26(uVar6,CONCAT24(auVar27._10_2_,uVar56));
        auVar57._8_2_ = auVar27._12_2_;
        auVar57._10_2_ = uVar7;
        auVar61._12_2_ = auVar27._14_2_;
        auVar61._0_12_ = auVar57;
        auVar61._14_2_ = uVar8;
        auVar21._8_4_ = (int)((ulonglong)auVar66._0_8_ >> 0x20);
        auVar21._0_8_ = auVar66._0_8_;
        auVar21._12_4_ = (int)((ulonglong)auVar57._0_8_ >> 0x20);
        *puVar4 = auVar41._8_4_;
        puVar4[1] = auVar28._8_4_;
        puVar4[2] = auVar42._12_4_;
        puVar4[3] = auVar29._12_4_;
        *param_5 = *param_5 + 0x10;
        puVar3 = (undefined8 *)*param_5;
        *puVar3 = CONCAT44(uVar56,uVar65);
        puVar3[1] = auVar21._8_8_;
        *param_5 = *param_5 + 0x10;
        puVar4 = (undefined4 *)*param_5;
        *puVar4 = auVar66._8_4_;
        puVar4[1] = auVar57._8_4_;
        puVar4[2] = auVar70._12_4_;
        puVar4[3] = auVar61._12_4_;
        *param_5 = *param_5 + 0x10;
        *(longlong *)param_4 = *(longlong *)param_4 + 0x10;
        *(longlong *)param_3 = *(longlong *)param_3 + 0x10;
        *(longlong *)param_2 = *(longlong *)param_2 + 0x10;
        *param_1 = *param_1 + 0x10;
        pauVar19 = (undefined1 (*) [16])*param_1;
      } while (uVar17 < *param_6);
    }
  }
  if (*param_7 != 0) {
    do {
      uVar18 = uVar18 + 1;
      *(undefined2 *)*param_5 = *(undefined2 *)*param_1;
      *param_5 = *param_5 + 2;
      *param_1 = *param_1 + 2;
      *(undefined2 *)*param_5 = **(undefined2 **)param_2;
      *param_5 = *param_5 + 2;
      *(longlong *)param_2 = *(longlong *)param_2 + 2;
      *(undefined2 *)*param_5 = **(undefined2 **)param_3;
      *param_5 = *param_5 + 2;
      *(longlong *)param_3 = *(longlong *)param_3 + 2;
      *(undefined2 *)*param_5 = **(undefined2 **)param_4;
      *param_5 = *param_5 + 2;
      *(longlong *)param_4 = *(longlong *)param_4 + 2;
    } while (uVar18 < *param_7);
  }
  return;
}



// FUNCTION 144e70720 FUN_144e70720 body=904 status=ok
// SIG undefined FUN_144e70720(void)

void FUN_144e70720(longlong *param_1,byte *param_2,byte *param_3,undefined2 *param_4,
                  ulonglong *param_5,ulonglong *param_6,ulonglong *param_7)

{
  undefined2 uVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 (*pauVar14) [16];
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined4 uVar53;
  undefined1 auVar55 [12];
  undefined1 auVar56 [12];
  undefined1 auVar57 [12];
  undefined4 uVar62;
  undefined1 auVar64 [12];
  undefined1 auVar65 [12];
  undefined1 auVar66 [12];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar50 [16];
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar54 [12];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [12];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  
  pauVar14 = (undefined1 (*) [16])*param_1;
  uVar1 = *param_4;
  uVar2 = *param_6;
  uVar16 = 0;
  if ((*param_3 & 0xf) == 0 && ((*param_2 & 0xf) == 0 && ((ulonglong)pauVar14 & 0xf) == 0)) {
    if ((*param_5 & 0xf) == 0) {
      uVar15 = uVar16;
      if (uVar2 != 0) {
        do {
          auVar24 = *pauVar14;
          uVar15 = uVar15 + 1;
          puVar3 = *(undefined2 **)param_2;
          auVar52._0_12_ = auVar24._0_12_;
          auVar52._12_2_ = auVar24._6_2_;
          auVar52._14_2_ = puVar3[3];
          auVar51._12_4_ = auVar52._12_4_;
          auVar51._0_10_ = auVar24._0_10_;
          auVar51._10_2_ = puVar3[2];
          auVar50._10_6_ = auVar51._10_6_;
          auVar50._0_8_ = auVar24._0_8_;
          auVar50._8_2_ = auVar24._4_2_;
          auVar12._4_8_ = auVar50._8_8_;
          auVar12._2_2_ = puVar3[1];
          auVar12._0_2_ = auVar24._2_2_;
          auVar49._0_4_ = CONCAT22(*puVar3,auVar24._0_2_);
          auVar49._4_12_ = auVar12;
          uVar62 = CONCAT22(puVar3[4],auVar24._8_2_);
          auVar66._0_8_ = CONCAT26(puVar3[5],CONCAT24(auVar24._10_2_,uVar62));
          auVar66._8_2_ = auVar24._12_2_;
          auVar66._10_2_ = puVar3[6];
          auVar70._12_2_ = auVar24._14_2_;
          auVar70._0_12_ = auVar66;
          auVar70._14_2_ = puVar3[7];
          auVar24 = **(undefined1 (**) [16])param_3;
          puVar4 = (undefined8 *)*param_5;
          auVar36._0_12_ = auVar24._0_12_;
          auVar36._12_2_ = auVar24._6_2_;
          auVar36._14_2_ = uVar1;
          auVar35._12_4_ = auVar36._12_4_;
          auVar35._0_10_ = auVar24._0_10_;
          auVar35._10_2_ = uVar1;
          auVar34._10_6_ = auVar35._10_6_;
          auVar34._0_8_ = auVar24._0_8_;
          auVar34._8_2_ = auVar24._4_2_;
          auVar13._4_8_ = auVar34._8_8_;
          auVar13._2_2_ = uVar1;
          auVar13._0_2_ = auVar24._2_2_;
          auVar23._0_8_ = auVar49._0_8_;
          auVar23._8_4_ = auVar12._0_4_;
          auVar23._12_4_ = auVar13._0_4_;
          uVar53 = CONCAT22(uVar1,auVar24._8_2_);
          auVar57._0_8_ = CONCAT26(uVar1,CONCAT24(auVar24._10_2_,uVar53));
          auVar57._8_2_ = auVar24._12_2_;
          auVar57._10_2_ = uVar1;
          auVar61._12_2_ = auVar24._14_2_;
          auVar61._0_12_ = auVar57;
          auVar61._14_2_ = uVar1;
          *puVar4 = CONCAT44(CONCAT22(uVar1,auVar24._0_2_),auVar49._0_4_);
          puVar4[1] = auVar23._8_8_;
          *param_5 = *param_5 + 0x10;
          puVar5 = (undefined4 *)*param_5;
          auVar24._8_4_ = (int)((ulonglong)auVar66._0_8_ >> 0x20);
          auVar24._0_8_ = auVar66._0_8_;
          auVar24._12_4_ = (int)((ulonglong)auVar57._0_8_ >> 0x20);
          *puVar5 = auVar50._8_4_;
          puVar5[1] = auVar34._8_4_;
          puVar5[2] = auVar51._12_4_;
          puVar5[3] = auVar35._12_4_;
          *param_5 = *param_5 + 0x10;
          puVar4 = (undefined8 *)*param_5;
          *puVar4 = CONCAT44(uVar53,uVar62);
          puVar4[1] = auVar24._8_8_;
          *param_5 = *param_5 + 0x10;
          puVar5 = (undefined4 *)*param_5;
          *puVar5 = auVar66._8_4_;
          puVar5[1] = auVar57._8_4_;
          puVar5[2] = auVar70._12_4_;
          puVar5[3] = auVar61._12_4_;
          *param_5 = *param_5 + 0x10;
          *(longlong *)param_3 = *(longlong *)param_3 + 0x10;
          *(longlong *)param_2 = *(longlong *)param_2 + 0x10;
          *param_1 = *param_1 + 0x10;
          pauVar14 = (undefined1 (*) [16])*param_1;
        } while (uVar15 < *param_6);
      }
    }
    else {
      uVar15 = uVar16;
      if (uVar2 != 0) {
        do {
          auVar24 = *pauVar14;
          uVar15 = uVar15 + 1;
          puVar3 = *(undefined2 **)param_2;
          auVar48._0_12_ = auVar24._0_12_;
          auVar48._12_2_ = auVar24._6_2_;
          auVar48._14_2_ = puVar3[3];
          auVar47._12_4_ = auVar48._12_4_;
          auVar47._0_10_ = auVar24._0_10_;
          auVar47._10_2_ = puVar3[2];
          auVar46._10_6_ = auVar47._10_6_;
          auVar46._0_8_ = auVar24._0_8_;
          auVar46._8_2_ = auVar24._4_2_;
          auVar10._4_8_ = auVar46._8_8_;
          auVar10._2_2_ = puVar3[1];
          auVar10._0_2_ = auVar24._2_2_;
          auVar45._0_4_ = CONCAT22(*puVar3,auVar24._0_2_);
          auVar45._4_12_ = auVar10;
          uVar62 = CONCAT22(puVar3[4],auVar24._8_2_);
          auVar65._0_8_ = CONCAT26(puVar3[5],CONCAT24(auVar24._10_2_,uVar62));
          auVar65._8_2_ = auVar24._12_2_;
          auVar65._10_2_ = puVar3[6];
          auVar69._12_2_ = auVar24._14_2_;
          auVar69._0_12_ = auVar65;
          auVar69._14_2_ = puVar3[7];
          auVar24 = **(undefined1 (**) [16])param_3;
          puVar4 = (undefined8 *)*param_5;
          auVar33._0_12_ = auVar24._0_12_;
          auVar33._12_2_ = auVar24._6_2_;
          auVar33._14_2_ = uVar1;
          auVar32._12_4_ = auVar33._12_4_;
          auVar32._0_10_ = auVar24._0_10_;
          auVar32._10_2_ = uVar1;
          auVar31._10_6_ = auVar32._10_6_;
          auVar31._0_8_ = auVar24._0_8_;
          auVar31._8_2_ = auVar24._4_2_;
          auVar11._4_8_ = auVar31._8_8_;
          auVar11._2_2_ = uVar1;
          auVar11._0_2_ = auVar24._2_2_;
          auVar21._0_8_ = auVar45._0_8_;
          auVar21._8_4_ = auVar10._0_4_;
          auVar21._12_4_ = auVar11._0_4_;
          uVar53 = CONCAT22(uVar1,auVar24._8_2_);
          auVar56._0_8_ = CONCAT26(uVar1,CONCAT24(auVar24._10_2_,uVar53));
          auVar56._8_2_ = auVar24._12_2_;
          auVar56._10_2_ = uVar1;
          auVar60._12_2_ = auVar24._14_2_;
          auVar60._0_12_ = auVar56;
          auVar60._14_2_ = uVar1;
          *puVar4 = CONCAT44(CONCAT22(uVar1,auVar24._0_2_),auVar45._0_4_);
          puVar4[1] = auVar21._8_8_;
          *param_5 = *param_5 + 0x10;
          puVar5 = (undefined4 *)*param_5;
          auVar22._8_4_ = (int)((ulonglong)auVar65._0_8_ >> 0x20);
          auVar22._0_8_ = auVar65._0_8_;
          auVar22._12_4_ = (int)((ulonglong)auVar56._0_8_ >> 0x20);
          *puVar5 = auVar46._8_4_;
          puVar5[1] = auVar31._8_4_;
          puVar5[2] = auVar47._12_4_;
          puVar5[3] = auVar32._12_4_;
          *param_5 = *param_5 + 0x10;
          puVar4 = (undefined8 *)*param_5;
          *puVar4 = CONCAT44(uVar53,uVar62);
          puVar4[1] = auVar22._8_8_;
          *param_5 = *param_5 + 0x10;
          puVar5 = (undefined4 *)*param_5;
          *puVar5 = auVar65._8_4_;
          puVar5[1] = auVar56._8_4_;
          puVar5[2] = auVar69._12_4_;
          puVar5[3] = auVar60._12_4_;
          *param_5 = *param_5 + 0x10;
          *(longlong *)param_3 = *(longlong *)param_3 + 0x10;
          *(longlong *)param_2 = *(longlong *)param_2 + 0x10;
          *param_1 = *param_1 + 0x10;
          pauVar14 = (undefined1 (*) [16])*param_1;
        } while (uVar15 < *param_6);
      }
    }
  }
  else if ((*param_5 & 0xf) == 0) {
    uVar15 = uVar16;
    if (uVar2 != 0) {
      do {
        auVar24 = *pauVar14;
        puVar3 = *(undefined2 **)param_2;
        uVar15 = uVar15 + 1;
        auVar44._0_12_ = auVar24._0_12_;
        auVar44._12_2_ = auVar24._6_2_;
        auVar44._14_2_ = puVar3[3];
        auVar43._12_4_ = auVar44._12_4_;
        auVar43._0_10_ = auVar24._0_10_;
        auVar43._10_2_ = puVar3[2];
        auVar42._10_6_ = auVar43._10_6_;
        auVar42._0_8_ = auVar24._0_8_;
        auVar42._8_2_ = auVar24._4_2_;
        auVar8._4_8_ = auVar42._8_8_;
        auVar8._2_2_ = puVar3[1];
        auVar8._0_2_ = auVar24._2_2_;
        auVar41._0_4_ = CONCAT22(*puVar3,auVar24._0_2_);
        auVar41._4_12_ = auVar8;
        uVar62 = CONCAT22(puVar3[4],auVar24._8_2_);
        auVar64._0_8_ = CONCAT26(puVar3[5],CONCAT24(auVar24._10_2_,uVar62));
        auVar64._8_2_ = auVar24._12_2_;
        auVar64._10_2_ = puVar3[6];
        auVar68._12_2_ = auVar24._14_2_;
        auVar68._0_12_ = auVar64;
        auVar68._14_2_ = puVar3[7];
        auVar24 = **(undefined1 (**) [16])param_3;
        puVar4 = (undefined8 *)*param_5;
        uVar53 = CONCAT22(uVar1,auVar24._8_2_);
        auVar55._0_8_ = CONCAT26(uVar1,CONCAT24(auVar24._10_2_,uVar53));
        auVar55._8_2_ = auVar24._12_2_;
        auVar55._10_2_ = uVar1;
        auVar59._12_2_ = auVar24._14_2_;
        auVar59._0_12_ = auVar55;
        auVar59._14_2_ = uVar1;
        auVar30._0_12_ = auVar24._0_12_;
        auVar30._12_2_ = auVar24._6_2_;
        auVar30._14_2_ = uVar1;
        auVar29._12_4_ = auVar30._12_4_;
        auVar29._0_10_ = auVar24._0_10_;
        auVar29._10_2_ = uVar1;
        auVar28._10_6_ = auVar29._10_6_;
        auVar28._0_8_ = auVar24._0_8_;
        auVar28._8_2_ = auVar24._4_2_;
        auVar9._4_8_ = auVar28._8_8_;
        auVar9._2_2_ = uVar1;
        auVar9._0_2_ = auVar24._2_2_;
        auVar19._0_8_ = auVar41._0_8_;
        auVar19._8_4_ = auVar8._0_4_;
        auVar19._12_4_ = auVar9._0_4_;
        *puVar4 = CONCAT44(CONCAT22(uVar1,auVar24._0_2_),auVar41._0_4_);
        puVar4[1] = auVar19._8_8_;
        *param_5 = *param_5 + 0x10;
        puVar5 = (undefined4 *)*param_5;
        auVar20._8_4_ = (int)((ulonglong)auVar64._0_8_ >> 0x20);
        auVar20._0_8_ = auVar64._0_8_;
        auVar20._12_4_ = (int)((ulonglong)auVar55._0_8_ >> 0x20);
        *puVar5 = auVar42._8_4_;
        puVar5[1] = auVar28._8_4_;
        puVar5[2] = auVar43._12_4_;
        puVar5[3] = auVar29._12_4_;
        *param_5 = *param_5 + 0x10;
        puVar4 = (undefined8 *)*param_5;
        *puVar4 = CONCAT44(uVar53,uVar62);
        puVar4[1] = auVar20._8_8_;
        *param_5 = *param_5 + 0x10;
        puVar5 = (undefined4 *)*param_5;
        *puVar5 = auVar64._8_4_;
        puVar5[1] = auVar55._8_4_;
        puVar5[2] = auVar68._12_4_;
        puVar5[3] = auVar59._12_4_;
        *param_5 = *param_5 + 0x10;
        *(longlong *)param_3 = *(longlong *)param_3 + 0x10;
        *(longlong *)param_2 = *(longlong *)param_2 + 0x10;
        *param_1 = *param_1 + 0x10;
        pauVar14 = (undefined1 (*) [16])*param_1;
      } while (uVar15 < *param_6);
    }
  }
  else {
    uVar15 = uVar16;
    if (uVar2 != 0) {
      do {
        auVar24 = *pauVar14;
        puVar3 = *(undefined2 **)param_2;
        uVar15 = uVar15 + 1;
        auVar40._0_12_ = auVar24._0_12_;
        auVar40._12_2_ = auVar24._6_2_;
        auVar40._14_2_ = puVar3[3];
        auVar39._12_4_ = auVar40._12_4_;
        auVar39._0_10_ = auVar24._0_10_;
        auVar39._10_2_ = puVar3[2];
        auVar38._10_6_ = auVar39._10_6_;
        auVar38._0_8_ = auVar24._0_8_;
        auVar38._8_2_ = auVar24._4_2_;
        auVar6._4_8_ = auVar38._8_8_;
        auVar6._2_2_ = puVar3[1];
        auVar6._0_2_ = auVar24._2_2_;
        auVar37._0_4_ = CONCAT22(*puVar3,auVar24._0_2_);
        auVar37._4_12_ = auVar6;
        uVar62 = CONCAT22(puVar3[4],auVar24._8_2_);
        auVar63._0_8_ = CONCAT26(puVar3[5],CONCAT24(auVar24._10_2_,uVar62));
        auVar63._8_2_ = auVar24._12_2_;
        auVar63._10_2_ = puVar3[6];
        auVar67._12_2_ = auVar24._14_2_;
        auVar67._0_12_ = auVar63;
        auVar67._14_2_ = puVar3[7];
        auVar24 = **(undefined1 (**) [16])param_3;
        puVar4 = (undefined8 *)*param_5;
        uVar53 = CONCAT22(uVar1,auVar24._8_2_);
        auVar54._0_8_ = CONCAT26(uVar1,CONCAT24(auVar24._10_2_,uVar53));
        auVar54._8_2_ = auVar24._12_2_;
        auVar54._10_2_ = uVar1;
        auVar58._12_2_ = auVar24._14_2_;
        auVar58._0_12_ = auVar54;
        auVar58._14_2_ = uVar1;
        auVar27._0_12_ = auVar24._0_12_;
        auVar27._12_2_ = auVar24._6_2_;
        auVar27._14_2_ = uVar1;
        auVar26._12_4_ = auVar27._12_4_;
        auVar26._0_10_ = auVar24._0_10_;
        auVar26._10_2_ = uVar1;
        auVar25._10_6_ = auVar26._10_6_;
        auVar25._0_8_ = auVar24._0_8_;
        auVar25._8_2_ = auVar24._4_2_;
        auVar7._4_8_ = auVar25._8_8_;
        auVar7._2_2_ = uVar1;
        auVar7._0_2_ = auVar24._2_2_;
        auVar17._0_8_ = auVar37._0_8_;
        auVar17._8_4_ = auVar6._0_4_;
        auVar17._12_4_ = auVar7._0_4_;
        *puVar4 = CONCAT44(CONCAT22(uVar1,auVar24._0_2_),auVar37._0_4_);
        puVar4[1] = auVar17._8_8_;
        *param_5 = *param_5 + 0x10;
        puVar5 = (undefined4 *)*param_5;
        auVar18._8_4_ = (int)((ulonglong)auVar63._0_8_ >> 0x20);
        auVar18._0_8_ = auVar63._0_8_;
        auVar18._12_4_ = (int)((ulonglong)auVar54._0_8_ >> 0x20);
        *puVar5 = auVar38._8_4_;
        puVar5[1] = auVar25._8_4_;
        puVar5[2] = auVar39._12_4_;
        puVar5[3] = auVar26._12_4_;
        *param_5 = *param_5 + 0x10;
        puVar4 = (undefined8 *)*param_5;
        *puVar4 = CONCAT44(uVar53,uVar62);
        puVar4[1] = auVar18._8_8_;
        *param_5 = *param_5 + 0x10;
        puVar5 = (undefined4 *)*param_5;
        *puVar5 = auVar63._8_4_;
        puVar5[1] = auVar54._8_4_;
        puVar5[2] = auVar67._12_4_;
        puVar5[3] = auVar58._12_4_;
        *param_5 = *param_5 + 0x10;
        *(longlong *)param_3 = *(longlong *)param_3 + 0x10;
        *(longlong *)param_2 = *(longlong *)param_2 + 0x10;
        *param_1 = *param_1 + 0x10;
        pauVar14 = (undefined1 (*) [16])*param_1;
      } while (uVar15 < *param_6);
    }
  }
  if (*param_7 != 0) {
    do {
      uVar16 = uVar16 + 1;
      *(undefined2 *)*param_5 = *(undefined2 *)*param_1;
      *param_5 = *param_5 + 2;
      *param_1 = *param_1 + 2;
      *(undefined2 *)*param_5 = **(undefined2 **)param_2;
      *param_5 = *param_5 + 2;
      *(longlong *)param_2 = *(longlong *)param_2 + 2;
      *(undefined2 *)*param_5 = **(undefined2 **)param_3;
      *param_5 = *param_5 + 2;
      *(longlong *)param_3 = *(longlong *)param_3 + 2;
      *(undefined2 *)*param_5 = *param_4;
      *param_5 = *param_5 + 2;
    } while (uVar16 < *param_7);
  }
  return;
}



// FUNCTION 144e70ab0 FUN_144e70ab0 body=287 status=ok
// SIG undefined FUN_144e70ab0(void)

void FUN_144e70ab0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  ulonglong *param_5)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  ulonglong uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined1 auVar14 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uVar5 = 0;
  if (*param_5 != 0) {
    do {
      uVar5 = uVar5 + 1;
      auVar7 = *(undefined1 (*) [16])*param_1;
      auVar8 = *(undefined1 (*) [16])*param_2;
      puVar1 = (undefined2 *)*param_3;
      auVar17._0_12_ = auVar7._0_12_;
      auVar17._12_2_ = auVar7._6_2_;
      auVar17._14_2_ = auVar8._6_2_;
      auVar16._12_4_ = auVar17._12_4_;
      auVar16._0_10_ = auVar7._0_10_;
      auVar16._10_2_ = auVar8._4_2_;
      auVar15._10_6_ = auVar16._10_6_;
      auVar15._0_8_ = auVar7._0_8_;
      auVar15._8_2_ = auVar7._4_2_;
      auVar3._4_8_ = auVar15._8_8_;
      auVar3._2_2_ = auVar8._2_2_;
      auVar3._0_2_ = auVar7._2_2_;
      uVar11 = CONCAT22(auVar8._0_2_,auVar7._0_2_);
      auVar26._12_2_ = auVar7._6_2_;
      auVar26._0_12_ = auVar17._0_12_;
      auVar26._14_2_ = puVar1[3];
      auVar25._12_4_ = auVar26._12_4_;
      auVar25._10_2_ = puVar1[2];
      auVar25._0_10_ = auVar16._0_10_;
      auVar24._10_6_ = auVar25._10_6_;
      auVar24._8_2_ = auVar7._4_2_;
      auVar24._0_8_ = auVar15._0_8_;
      auVar23._8_8_ = auVar24._8_8_;
      auVar23._6_2_ = puVar1[1];
      auVar23._4_2_ = auVar7._2_2_;
      auVar23._2_2_ = *puVar1;
      auVar23._0_2_ = auVar7._0_2_;
      auVar6 = pshuflw(in_XMM0,auVar23,0xc9);
      auVar12._4_4_ = auVar6._0_4_;
      auVar12._0_4_ = uVar11;
      auVar6._4_4_ = auVar3._0_4_;
      auVar6._0_4_ = auVar15._8_4_;
      auVar6._8_4_ = uVar11;
      auVar6._12_4_ = auVar16._12_4_;
      uVar13 = CONCAT22(auVar8._8_2_,auVar7._8_2_);
      auVar14._0_8_ = CONCAT26(auVar8._10_2_,CONCAT24(auVar7._10_2_,uVar13));
      auVar14._8_2_ = auVar7._12_2_;
      auVar14._10_2_ = auVar8._12_2_;
      auVar18._12_2_ = auVar7._14_2_;
      auVar18._0_12_ = auVar14;
      auVar18._14_2_ = auVar8._14_2_;
      auVar22._0_12_ = auVar8._0_12_;
      auVar22._12_2_ = auVar8._6_2_;
      auVar22._14_2_ = puVar1[3];
      auVar21._12_4_ = auVar22._12_4_;
      auVar21._0_10_ = auVar8._0_10_;
      auVar21._10_2_ = puVar1[2];
      auVar20._10_6_ = auVar21._10_6_;
      auVar20._0_8_ = auVar8._0_8_;
      auVar20._8_2_ = auVar8._4_2_;
      auVar4._4_8_ = auVar20._8_8_;
      auVar4._2_2_ = puVar1[1];
      auVar4._0_2_ = auVar8._2_2_;
      auVar19._2_2_ = *puVar1;
      auVar19._0_2_ = auVar8._0_2_;
      auVar19._4_12_ = auVar4;
      auVar28._2_2_ = puVar1[4];
      auVar28._0_2_ = auVar7._8_2_;
      auVar28._4_2_ = auVar7._10_2_;
      auVar28._6_2_ = puVar1[5];
      auVar28._8_2_ = auVar7._12_2_;
      auVar28._10_2_ = puVar1[6];
      auVar28._12_2_ = auVar7._14_2_;
      auVar28._14_2_ = puVar1[7];
      auVar27._0_8_ = CONCAT26(puVar1[5],CONCAT24(auVar8._10_2_,CONCAT22(puVar1[4],auVar8._8_2_)));
      auVar27._8_2_ = auVar8._12_2_;
      auVar27._10_2_ = puVar1[6];
      auVar27._12_2_ = auVar8._14_2_;
      auVar27._14_2_ = puVar1[7];
      auVar12._12_4_ = auVar15._8_4_;
      auVar12._8_4_ = auVar4._0_4_;
      *(undefined1 (*) [16])*param_4 = auVar12;
      *param_4 = *param_4 + 0x10;
      puVar2 = (undefined8 *)*param_4;
      auVar7 = pshufhw(auVar6,auVar19,0x4e);
      auVar6 = pshufhw(auVar12,auVar23,0x39);
      auVar8 = pshuflw(auVar7,auVar28,0xc9);
      uVar11 = (undefined4)((ulonglong)auVar14._0_8_ >> 0x20);
      auVar10._8_4_ = uVar11;
      auVar10._0_8_ = auVar14._0_8_;
      auVar10._12_4_ = auVar8._4_4_;
      auVar9._8_8_ = auVar10._8_8_;
      auVar9._0_8_ = CONCAT44(auVar8._0_4_,uVar13);
      *puVar2 = CONCAT44(auVar7._8_4_,auVar6._8_4_);
      puVar2[1] = auVar9._0_8_;
      *param_4 = *param_4 + 0x10;
      puVar2 = (undefined8 *)*param_4;
      auVar7._4_4_ = uVar11;
      auVar7._0_4_ = auVar14._8_4_;
      auVar7._8_4_ = uVar13;
      auVar7._12_4_ = auVar18._12_4_;
      in_XMM0 = pshufhw(auVar7,auVar27,0x4e);
      auVar7 = pshufhw(auVar9,auVar28,0x39);
      *puVar2 = CONCAT44(auVar14._8_4_,(int)((ulonglong)auVar27._0_8_ >> 0x20));
      puVar2[1] = CONCAT44(in_XMM0._8_4_,auVar7._8_4_);
      *param_4 = *param_4 + 0x10;
      *param_3 = *param_3 + 0x10;
      *param_2 = *param_2 + 0x10;
      *param_1 = *param_1 + 0x10;
    } while (uVar5 < *param_5);
  }
  return;
}



// FUNCTION 144e70bd0 FUN_144e70bd0 body=287 status=ok
// SIG undefined FUN_144e70bd0(void)

void FUN_144e70bd0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  ulonglong *param_5)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  ulonglong uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined1 auVar14 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uVar5 = 0;
  if (*param_5 != 0) {
    do {
      uVar5 = uVar5 + 1;
      auVar7 = *(undefined1 (*) [16])*param_1;
      auVar8 = *(undefined1 (*) [16])*param_2;
      puVar1 = (undefined2 *)*param_3;
      auVar17._0_12_ = auVar7._0_12_;
      auVar17._12_2_ = auVar7._6_2_;
      auVar17._14_2_ = auVar8._6_2_;
      auVar16._12_4_ = auVar17._12_4_;
      auVar16._0_10_ = auVar7._0_10_;
      auVar16._10_2_ = auVar8._4_2_;
      auVar15._10_6_ = auVar16._10_6_;
      auVar15._0_8_ = auVar7._0_8_;
      auVar15._8_2_ = auVar7._4_2_;
      auVar3._4_8_ = auVar15._8_8_;
      auVar3._2_2_ = auVar8._2_2_;
      auVar3._0_2_ = auVar7._2_2_;
      uVar11 = CONCAT22(auVar8._0_2_,auVar7._0_2_);
      auVar26._12_2_ = auVar7._6_2_;
      auVar26._0_12_ = auVar17._0_12_;
      auVar26._14_2_ = puVar1[3];
      auVar25._12_4_ = auVar26._12_4_;
      auVar25._10_2_ = puVar1[2];
      auVar25._0_10_ = auVar16._0_10_;
      auVar24._10_6_ = auVar25._10_6_;
      auVar24._8_2_ = auVar7._4_2_;
      auVar24._0_8_ = auVar15._0_8_;
      auVar23._8_8_ = auVar24._8_8_;
      auVar23._6_2_ = puVar1[1];
      auVar23._4_2_ = auVar7._2_2_;
      auVar23._2_2_ = *puVar1;
      auVar23._0_2_ = auVar7._0_2_;
      auVar6 = pshuflw(in_XMM0,auVar23,0xc9);
      auVar12._4_4_ = auVar6._0_4_;
      auVar12._0_4_ = uVar11;
      auVar6._4_4_ = auVar3._0_4_;
      auVar6._0_4_ = auVar15._8_4_;
      auVar6._8_4_ = uVar11;
      auVar6._12_4_ = auVar16._12_4_;
      uVar13 = CONCAT22(auVar8._8_2_,auVar7._8_2_);
      auVar14._0_8_ = CONCAT26(auVar8._10_2_,CONCAT24(auVar7._10_2_,uVar13));
      auVar14._8_2_ = auVar7._12_2_;
      auVar14._10_2_ = auVar8._12_2_;
      auVar18._12_2_ = auVar7._14_2_;
      auVar18._0_12_ = auVar14;
      auVar18._14_2_ = auVar8._14_2_;
      auVar22._0_12_ = auVar8._0_12_;
      auVar22._12_2_ = auVar8._6_2_;
      auVar22._14_2_ = puVar1[3];
      auVar21._12_4_ = auVar22._12_4_;
      auVar21._0_10_ = auVar8._0_10_;
      auVar21._10_2_ = puVar1[2];
      auVar20._10_6_ = auVar21._10_6_;
      auVar20._0_8_ = auVar8._0_8_;
      auVar20._8_2_ = auVar8._4_2_;
      auVar4._4_8_ = auVar20._8_8_;
      auVar4._2_2_ = puVar1[1];
      auVar4._0_2_ = auVar8._2_2_;
      auVar19._2_2_ = *puVar1;
      auVar19._0_2_ = auVar8._0_2_;
      auVar19._4_12_ = auVar4;
      auVar28._2_2_ = puVar1[4];
      auVar28._0_2_ = auVar7._8_2_;
      auVar28._4_2_ = auVar7._10_2_;
      auVar28._6_2_ = puVar1[5];
      auVar28._8_2_ = auVar7._12_2_;
      auVar28._10_2_ = puVar1[6];
      auVar28._12_2_ = auVar7._14_2_;
      auVar28._14_2_ = puVar1[7];
      auVar27._0_8_ = CONCAT26(puVar1[5],CONCAT24(auVar8._10_2_,CONCAT22(puVar1[4],auVar8._8_2_)));
      auVar27._8_2_ = auVar8._12_2_;
      auVar27._10_2_ = puVar1[6];
      auVar27._12_2_ = auVar8._14_2_;
      auVar27._14_2_ = puVar1[7];
      auVar12._12_4_ = auVar15._8_4_;
      auVar12._8_4_ = auVar4._0_4_;
      *(undefined1 (*) [16])*param_4 = auVar12;
      *param_4 = *param_4 + 0x10;
      puVar2 = (undefined8 *)*param_4;
      auVar7 = pshufhw(auVar6,auVar19,0x4e);
      auVar6 = pshufhw(auVar12,auVar23,0x39);
      auVar8 = pshuflw(auVar7,auVar28,0xc9);
      uVar11 = (undefined4)((ulonglong)auVar14._0_8_ >> 0x20);
      auVar10._8_4_ = uVar11;
      auVar10._0_8_ = auVar14._0_8_;
      auVar10._12_4_ = auVar8._4_4_;
      auVar9._8_8_ = auVar10._8_8_;
      auVar9._0_8_ = CONCAT44(auVar8._0_4_,uVar13);
      *puVar2 = CONCAT44(auVar7._8_4_,auVar6._8_4_);
      puVar2[1] = auVar9._0_8_;
      *param_4 = *param_4 + 0x10;
      puVar2 = (undefined8 *)*param_4;
      auVar7._4_4_ = uVar11;
      auVar7._0_4_ = auVar14._8_4_;
      auVar7._8_4_ = uVar13;
      auVar7._12_4_ = auVar18._12_4_;
      in_XMM0 = pshufhw(auVar7,auVar27,0x4e);
      auVar7 = pshufhw(auVar9,auVar28,0x39);
      *puVar2 = CONCAT44(auVar14._8_4_,(int)((ulonglong)auVar27._0_8_ >> 0x20));
      puVar2[1] = CONCAT44(in_XMM0._8_4_,auVar7._8_4_);
      *param_4 = *param_4 + 0x10;
      *param_3 = *param_3 + 0x10;
      *param_2 = *param_2 + 0x10;
      *param_1 = *param_1 + 0x10;
    } while (uVar5 < *param_5);
  }
  return;
}



// FUNCTION 144e70cf0 FUN_144e70cf0 body=287 status=ok
// SIG undefined FUN_144e70cf0(void)

void FUN_144e70cf0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  ulonglong *param_5)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  ulonglong uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined1 auVar14 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uVar5 = 0;
  if (*param_5 != 0) {
    do {
      uVar5 = uVar5 + 1;
      auVar7 = *(undefined1 (*) [16])*param_1;
      auVar8 = *(undefined1 (*) [16])*param_2;
      puVar1 = (undefined2 *)*param_3;
      auVar17._0_12_ = auVar7._0_12_;
      auVar17._12_2_ = auVar7._6_2_;
      auVar17._14_2_ = auVar8._6_2_;
      auVar16._12_4_ = auVar17._12_4_;
      auVar16._0_10_ = auVar7._0_10_;
      auVar16._10_2_ = auVar8._4_2_;
      auVar15._10_6_ = auVar16._10_6_;
      auVar15._0_8_ = auVar7._0_8_;
      auVar15._8_2_ = auVar7._4_2_;
      auVar3._4_8_ = auVar15._8_8_;
      auVar3._2_2_ = auVar8._2_2_;
      auVar3._0_2_ = auVar7._2_2_;
      uVar11 = CONCAT22(auVar8._0_2_,auVar7._0_2_);
      auVar26._12_2_ = auVar7._6_2_;
      auVar26._0_12_ = auVar17._0_12_;
      auVar26._14_2_ = puVar1[3];
      auVar25._12_4_ = auVar26._12_4_;
      auVar25._10_2_ = puVar1[2];
      auVar25._0_10_ = auVar16._0_10_;
      auVar24._10_6_ = auVar25._10_6_;
      auVar24._8_2_ = auVar7._4_2_;
      auVar24._0_8_ = auVar15._0_8_;
      auVar23._8_8_ = auVar24._8_8_;
      auVar23._6_2_ = puVar1[1];
      auVar23._4_2_ = auVar7._2_2_;
      auVar23._2_2_ = *puVar1;
      auVar23._0_2_ = auVar7._0_2_;
      auVar6 = pshuflw(in_XMM0,auVar23,0xc9);
      auVar12._4_4_ = auVar6._0_4_;
      auVar12._0_4_ = uVar11;
      auVar6._4_4_ = auVar3._0_4_;
      auVar6._0_4_ = auVar15._8_4_;
      auVar6._8_4_ = uVar11;
      auVar6._12_4_ = auVar16._12_4_;
      uVar13 = CONCAT22(auVar8._8_2_,auVar7._8_2_);
      auVar14._0_8_ = CONCAT26(auVar8._10_2_,CONCAT24(auVar7._10_2_,uVar13));
      auVar14._8_2_ = auVar7._12_2_;
      auVar14._10_2_ = auVar8._12_2_;
      auVar18._12_2_ = auVar7._14_2_;
      auVar18._0_12_ = auVar14;
      auVar18._14_2_ = auVar8._14_2_;
      auVar22._0_12_ = auVar8._0_12_;
      auVar22._12_2_ = auVar8._6_2_;
      auVar22._14_2_ = puVar1[3];
      auVar21._12_4_ = auVar22._12_4_;
      auVar21._0_10_ = auVar8._0_10_;
      auVar21._10_2_ = puVar1[2];
      auVar20._10_6_ = auVar21._10_6_;
      auVar20._0_8_ = auVar8._0_8_;
      auVar20._8_2_ = auVar8._4_2_;
      auVar4._4_8_ = auVar20._8_8_;
      auVar4._2_2_ = puVar1[1];
      auVar4._0_2_ = auVar8._2_2_;
      auVar19._2_2_ = *puVar1;
      auVar19._0_2_ = auVar8._0_2_;
      auVar19._4_12_ = auVar4;
      auVar28._2_2_ = puVar1[4];
      auVar28._0_2_ = auVar7._8_2_;
      auVar28._4_2_ = auVar7._10_2_;
      auVar28._6_2_ = puVar1[5];
      auVar28._8_2_ = auVar7._12_2_;
      auVar28._10_2_ = puVar1[6];
      auVar28._12_2_ = auVar7._14_2_;
      auVar28._14_2_ = puVar1[7];
      auVar27._0_8_ = CONCAT26(puVar1[5],CONCAT24(auVar8._10_2_,CONCAT22(puVar1[4],auVar8._8_2_)));
      auVar27._8_2_ = auVar8._12_2_;
      auVar27._10_2_ = puVar1[6];
      auVar27._12_2_ = auVar8._14_2_;
      auVar27._14_2_ = puVar1[7];
      auVar12._12_4_ = auVar15._8_4_;
      auVar12._8_4_ = auVar4._0_4_;
      *(undefined1 (*) [16])*param_4 = auVar12;
      *param_4 = *param_4 + 0x10;
      puVar2 = (undefined8 *)*param_4;
      auVar7 = pshufhw(auVar6,auVar19,0x4e);
      auVar6 = pshufhw(auVar12,auVar23,0x39);
      auVar8 = pshuflw(auVar7,auVar28,0xc9);
      uVar11 = (undefined4)((ulonglong)auVar14._0_8_ >> 0x20);
      auVar10._8_4_ = uVar11;
      auVar10._0_8_ = auVar14._0_8_;
      auVar10._12_4_ = auVar8._4_4_;
      auVar9._8_8_ = auVar10._8_8_;
      auVar9._0_8_ = CONCAT44(auVar8._0_4_,uVar13);
      *puVar2 = CONCAT44(auVar7._8_4_,auVar6._8_4_);
      puVar2[1] = auVar9._0_8_;
      *param_4 = *param_4 + 0x10;
      puVar2 = (undefined8 *)*param_4;
      auVar7._4_4_ = uVar11;
      auVar7._0_4_ = auVar14._8_4_;
      auVar7._8_4_ = uVar13;
      auVar7._12_4_ = auVar18._12_4_;
      in_XMM0 = pshufhw(auVar7,auVar27,0x4e);
      auVar7 = pshufhw(auVar9,auVar28,0x39);
      *puVar2 = CONCAT44(auVar14._8_4_,(int)((ulonglong)auVar27._0_8_ >> 0x20));
      puVar2[1] = CONCAT44(in_XMM0._8_4_,auVar7._8_4_);
      *param_4 = *param_4 + 0x10;
      *param_3 = *param_3 + 0x10;
      *param_2 = *param_2 + 0x10;
      *param_1 = *param_1 + 0x10;
    } while (uVar5 < *param_5);
  }
  return;
}



// FUNCTION 144e70e10 FUN_144e70e10 body=287 status=ok
// SIG undefined FUN_144e70e10(void)

void FUN_144e70e10(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  ulonglong *param_5)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  ulonglong uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined1 auVar14 [12];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  uVar5 = 0;
  if (*param_5 != 0) {
    do {
      uVar5 = uVar5 + 1;
      auVar7 = *(undefined1 (*) [16])*param_1;
      auVar8 = *(undefined1 (*) [16])*param_2;
      puVar1 = (undefined2 *)*param_3;
      auVar17._0_12_ = auVar7._0_12_;
      auVar17._12_2_ = auVar7._6_2_;
      auVar17._14_2_ = auVar8._6_2_;
      auVar16._12_4_ = auVar17._12_4_;
      auVar16._0_10_ = auVar7._0_10_;
      auVar16._10_2_ = auVar8._4_2_;
      auVar15._10_6_ = auVar16._10_6_;
      auVar15._0_8_ = auVar7._0_8_;
      auVar15._8_2_ = auVar7._4_2_;
      auVar3._4_8_ = auVar15._8_8_;
      auVar3._2_2_ = auVar8._2_2_;
      auVar3._0_2_ = auVar7._2_2_;
      uVar11 = CONCAT22(auVar8._0_2_,auVar7._0_2_);
      auVar26._12_2_ = auVar7._6_2_;
      auVar26._0_12_ = auVar17._0_12_;
      auVar26._14_2_ = puVar1[3];
      auVar25._12_4_ = auVar26._12_4_;
      auVar25._10_2_ = puVar1[2];
      auVar25._0_10_ = auVar16._0_10_;
      auVar24._10_6_ = auVar25._10_6_;
      auVar24._8_2_ = auVar7._4_2_;
      auVar24._0_8_ = auVar15._0_8_;
      auVar23._8_8_ = auVar24._8_8_;
      auVar23._6_2_ = puVar1[1];
      auVar23._4_2_ = auVar7._2_2_;
      auVar23._2_2_ = *puVar1;
      auVar23._0_2_ = auVar7._0_2_;
      auVar6 = pshuflw(in_XMM0,auVar23,0xc9);
      auVar12._4_4_ = auVar6._0_4_;
      auVar12._0_4_ = uVar11;
      auVar6._4_4_ = auVar3._0_4_;
      auVar6._0_4_ = auVar15._8_4_;
      auVar6._8_4_ = uVar11;
      auVar6._12_4_ = auVar16._12_4_;
      uVar13 = CONCAT22(auVar8._8_2_,auVar7._8_2_);
      auVar14._0_8_ = CONCAT26(auVar8._10_2_,CONCAT24(auVar7._10_2_,uVar13));
      auVar14._8_2_ = auVar7._12_2_;
      auVar14._10_2_ = auVar8._12_2_;
      auVar18._12_2_ = auVar7._14_2_;
      auVar18._0_12_ = auVar14;
      auVar18._14_2_ = auVar8._14_2_;
      auVar22._0_12_ = auVar8._0_12_;
      auVar22._12_2_ = auVar8._6_2_;
      auVar22._14_2_ = puVar1[3];
      auVar21._12_4_ = auVar22._12_4_;
      auVar21._0_10_ = auVar8._0_10_;
      auVar21._10_2_ = puVar1[2];
      auVar20._10_6_ = auVar21._10_6_;
      auVar20._0_8_ = auVar8._0_8_;
      auVar20._8_2_ = auVar8._4_2_;
      auVar4._4_8_ = auVar20._8_8_;
      auVar4._2_2_ = puVar1[1];
      auVar4._0_2_ = auVar8._2_2_;
      auVar19._2_2_ = *puVar1;
      auVar19._0_2_ = auVar8._0_2_;
      auVar19._4_12_ = auVar4;
      auVar28._2_2_ = puVar1[4];
      auVar28._0_2_ = auVar7._8_2_;
      auVar28._4_2_ = auVar7._10_2_;
      auVar28._6_2_ = puVar1[5];
      auVar28._8_2_ = auVar7._12_2_;
      auVar28._10_2_ = puVar1[6];
      auVar28._12_2_ = auVar7._14_2_;
      auVar28._14_2_ = puVar1[7];
      auVar27._0_8_ = CONCAT26(puVar1[5],CONCAT24(auVar8._10_2_,CONCAT22(puVar1[4],auVar8._8_2_)));
      auVar27._8_2_ = auVar8._12_2_;
      auVar27._10_2_ = puVar1[6];
      auVar27._12_2_ = auVar8._14_2_;
      auVar27._14_2_ = puVar1[7];
      auVar12._12_4_ = auVar15._8_4_;
      auVar12._8_4_ = auVar4._0_4_;
      *(undefined1 (*) [16])*param_4 = auVar12;
      *param_4 = *param_4 + 0x10;
      puVar2 = (undefined8 *)*param_4;
      auVar7 = pshufhw(auVar6,auVar19,0x4e);
      auVar6 = pshufhw(auVar12,auVar23,0x39);
      auVar8 = pshuflw(auVar7,auVar28,0xc9);
      uVar11 = (undefined4)((ulonglong)auVar14._0_8_ >> 0x20);
      auVar10._8_4_ = uVar11;
      auVar10._0_8_ = auVar14._0_8_;
      auVar10._12_4_ = auVar8._4_4_;
      auVar9._8_8_ = auVar10._8_8_;
      auVar9._0_8_ = CONCAT44(auVar8._0_4_,uVar13);
      *puVar2 = CONCAT44(auVar7._8_4_,auVar6._8_4_);
      puVar2[1] = auVar9._0_8_;
      *param_4 = *param_4 + 0x10;
      puVar2 = (undefined8 *)*param_4;
      auVar7._4_4_ = uVar11;
      auVar7._0_4_ = auVar14._8_4_;
      auVar7._8_4_ = uVar13;
      auVar7._12_4_ = auVar18._12_4_;
      in_XMM0 = pshufhw(auVar7,auVar27,0x4e);
      auVar7 = pshufhw(auVar9,auVar28,0x39);
      *puVar2 = CONCAT44(auVar14._8_4_,(int)((ulonglong)auVar27._0_8_ >> 0x20));
      puVar2[1] = CONCAT44(in_XMM0._8_4_,auVar7._8_4_);
      *param_4 = *param_4 + 0x10;
      *param_3 = *param_3 + 0x10;
      *param_2 = *param_2 + 0x10;
      *param_1 = *param_1 + 0x10;
    } while (uVar5 < *param_5);
  }
  return;
}



// FUNCTION 144e70f30 FUN_144e70f30 body=9 status=ok
// SIG undefined FUN_144e70f30(void)

void FUN_144e70f30(longlong param_1)

{
  FUN_144e80fc0(param_1 + 0x58);
  return;
}



// FUNCTION 144e70f40 FUN_144e70f40 body=62 status=ok
// SIG undefined FUN_144e70f40(void)

void FUN_144e70f40(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x38;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e70f80 FUN_144e70f80 body=106 status=ok
// SIG undefined FUN_144e70f80(void)

ulonglong FUN_144e70f80(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x492492492492493) {
    param_2 = param_2 * 0x38;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        uVar2 = FUN_14494321d();
        return uVar2;
      }
      return 0;
    }
    if (param_2 < param_2 + 0x27) {
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 144e70ff0 FUN_144e70ff0 body=118 status=ok
// SIG undefined FUN_144e70ff0(void)

void FUN_144e70ff0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0x38) * 0x38;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e71070 FUN_144e71070 body=16 status=ok
// SIG undefined FUN_144e71070(void)

void FUN_144e71070(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e71090 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_Parallelism_allocator<unsigned __int64>::deallocate(unsigned __int64
   * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct CHN * __ptr64>::deallocate(struct CHN * __ptr64 *
   __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<8,class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > >(class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const ,struct
   TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct
   `void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
     16 names - too many to list
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 8;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e710e0 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
// SIG undefined FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e71140 FUN_144e71140 body=12 status=ok
// SIG undefined FUN_144e71140(void)

longlong FUN_144e71140(longlong *param_1)

{
  return param_1[1] - *param_1 >> 3;
}



// FUNCTION 144e71150 FUN_144e71150 body=8 status=ok
// SIG undefined FUN_144e71150(void)

longlong FUN_144e71150(longlong *param_1,longlong param_2)

{
  return *param_1 + param_2 * 8;
}



// FUNCTION 144e71160 FUN_144e71160 body=16 status=ok
// SIG undefined FUN_144e71160(void)

void FUN_144e71160(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e71180 FUN_144e71180 body=62 status=ok
// SIG undefined FUN_144e71180(void)

void FUN_144e71180(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x38;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e711c0 FUN_144e711c0 body=106 status=ok
// SIG undefined FUN_144e711c0(void)

ulonglong FUN_144e711c0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x492492492492493) {
    param_2 = param_2 * 0x38;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        uVar2 = FUN_14494321d();
        return uVar2;
      }
      return 0;
    }
    if (param_2 < param_2 + 0x27) {
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 144e71240 FUN_144e71240 body=118 status=ok
// SIG undefined FUN_144e71240(void)

void FUN_144e71240(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0x38) * 0x38;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e712c0 FUN_144e712c0 body=16 status=ok
// SIG undefined FUN_144e712c0(void)

void FUN_144e712c0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e712e0 FUN_144e712e0 body=427 status=ok
// SIG undefined FUN_144e712e0(void)

longlong FUN_144e712e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_res18;
  longlong *local_res20;
  
  _Mtx_init_in_situ(param_1,2);
  local_res18 = 0;
  FUN_144b66f80(param_1 + 0x50,0x40,0x40,0x3f800000,&local_res18,0x3f800000,0,3);
  plVar1 = (longlong *)(param_1 + 0x70);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  local_res20 = plVar1;
  lVar3 = FUN_14494321d(0x158);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  *(longlong *)(lVar3 + 0x10) = lVar3;
  *(undefined2 *)(lVar3 + 0x18) = 0x101;
  *plVar1 = lVar3;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  plVar1 = (longlong *)(param_1 + 0x100);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0xffffffff;
  *(undefined1 *)(param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  iVar2 = 1;
  if (1 < param_2 * 2) {
    iVar2 = param_2 * 2;
  }
  uVar6 = (ulonglong)iVar2;
  pvVar4 = *(void **)(param_1 + 0x108);
  lVar3 = *plVar1;
  uVar5 = (longlong)pvVar4 - lVar3 >> 3;
  if (uVar6 < uVar5) {
    pvVar4 = (void *)(lVar3 + uVar6 * 8);
  }
  else {
    if (uVar6 <= uVar5) {
      return param_1;
    }
    if ((ulonglong)(*(longlong *)(param_1 + 0x110) - lVar3 >> 3) < uVar6) {
      FUN_144e73040(plVar1,uVar6,&local_res18);
      return param_1;
    }
    _Size = (uVar6 - uVar5) * 8;
    memset(pvVar4,0,_Size);
    pvVar4 = (void *)(_Size + (longlong)pvVar4);
  }
  *(void **)(param_1 + 0x108) = pvVar4;
  return param_1;
}



// FUNCTION 144e71490 FUN_144e71490 body=720 status=ok
// SIG undefined FUN_144e71490(void)

void FUN_144e71490(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar10 = 0;
  lVar6 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x108) - lVar6 >> 3 != 0) {
    do {
      lVar6 = *(longlong *)(lVar6 + uVar10 * 8);
      if (lVar6 != 0) {
        puVar2 = *(undefined8 **)(lVar6 + 0x20);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        FUN_144e80ed0(lVar6 + 0x58);
        uVar3 = *(ulonglong *)(lVar6 + 0x50);
        if (0xf < uVar3) {
          lVar8 = *(longlong *)(lVar6 + 0x38);
          uVar9 = uVar3 + 1;
          lVar7 = lVar8;
          if (0xfff < uVar9) {
            lVar7 = *(longlong *)(lVar8 + -8);
            uVar9 = uVar3 + 0x28;
            if (0x1f < (lVar8 - lVar7) - 8U) goto LAB_144e7175a;
          }
          thunk_FUN_1400020a8(lVar7,uVar9);
        }
        *(undefined8 *)(lVar6 + 0x48) = 0;
        *(undefined8 *)(lVar6 + 0x50) = 0xf;
        *(undefined1 *)(lVar6 + 0x38) = 0;
        thunk_FUN_1400020a8(lVar6,0x68);
      }
      lVar6 = *(longlong *)(param_1 + 0x100);
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulonglong)(*(longlong *)(param_1 + 0x108) - lVar6 >> 3));
  }
  FUN_144e71240(param_1 + 0x138);
  lVar6 = *(longlong *)(param_1 + 0x100);
  if (lVar6 != 0) {
    uVar10 = *(longlong *)(param_1 + 0x110) - lVar6 & 0xfffffffffffffff8;
    lVar8 = lVar6;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(lVar6 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (lVar6 - lVar8) - 8U) goto LAB_144e7175a;
    }
    thunk_FUN_1400020a8(lVar8,uVar10);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  FUN_144e70ff0(param_1 + 0xe8);
  lVar6 = *(longlong *)(param_1 + 0xd0);
  if (lVar6 != 0) {
    uVar10 = *(longlong *)(param_1 + 0xe0) - lVar6 & 0xfffffffffffffff8;
    lVar8 = lVar6;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(lVar6 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (lVar6 - lVar8) - 8U) goto LAB_144e7175a;
    }
    thunk_FUN_1400020a8(lVar8,uVar10);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  lVar6 = *(longlong *)(param_1 + 0xb8);
  if (lVar6 != 0) {
    uVar10 = *(longlong *)(param_1 + 200) - lVar6 & 0xfffffffffffffff8;
    lVar8 = lVar6;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(lVar6 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (lVar6 - lVar8) - 8U) goto LAB_144e7175a;
    }
    thunk_FUN_1400020a8(lVar8,uVar10);
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x98);
  if (lVar6 != 0) {
    uVar10 = *(longlong *)(param_1 + 0xa8) - lVar6 & 0xfffffffffffffff8;
    lVar8 = lVar6;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(lVar6 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (lVar6 - lVar8) - 8U) {
LAB_144e7175a:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar8,uVar10);
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 8);
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  while (cVar1 == '\0') {
    FUN_14698d1ae(param_1 + 0x70,param_1 + 0x70,plVar4[2]);
    plVar5 = (longlong *)*plVar4;
    thunk_FUN_1400020a8(plVar4,0x158);
    plVar4 = plVar5;
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
  }
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x70),0x158);
  FUN_144b67220(param_1 + 0x50);
  _Mtx_destroy_in_situ(param_1);
  return;
}



// FUNCTION 144e71770 FUN_144e71770 body=52 status=ok
// SIG undefined FUN_144e71770(void)

undefined8 FUN_144e71770(undefined8 param_1,ulonglong param_2)

{
  FUN_144e71490();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 144e717b0 FUN_144e717b0 body=391 status=ok
// SIG undefined FUN_144e717b0(void)

void FUN_144e717b0(longlong *param_1,int param_2,longlong *param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_4d8 [32];
  int local_4b8;
  undefined1 local_4b4 [4];
  longlong *local_4b0;
  undefined8 local_4a8;
  undefined1 local_498 [96];
  undefined1 local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  local_4b0 = param_1;
  local_4a8 = (**(code **)(*param_1 + 0x20))();
  uVar4 = 0;
  do {
    if ((ulonglong)(param_3[1] - *param_3 >> 3) <= uVar4) {
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x28))(param_1,local_4a8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_4d8);
    }
    uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    (**(code **)(*param_1 + 0x10))(param_1,local_4b4,4);
    (**(code **)(*param_1 + 0x10))(param_1,&local_4b8,4);
    iVar3 = local_4b8;
    if (local_4b8 < 0) {
      FUN_144e411f0(local_498,"Invalid chunk size");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_498,(ThrowInfo *)&DAT_14c6d52d8);
    }
    for (; 0x3ff < iVar3; iVar3 = iVar3 + -0x400) {
      cVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_438,0x400);
      if (cVar1 == '\0') goto LAB_144e718ba;
    }
    if (0 < iVar3) {
      (**(code **)(*param_1 + 0x10))(param_1,local_438,iVar3);
    }
LAB_144e718ba:
    if (param_2 == 0) {
      *(undefined8 *)(*param_3 + uVar4 * 8) = uVar2;
      uVar4 = (ulonglong)((int)uVar4 + 1);
    }
    else {
      *(undefined8 *)(*param_3 + -8 + ((param_3[1] - *param_3 >> 3) - uVar4) * 8) = uVar2;
      uVar4 = (ulonglong)((int)uVar4 + 1);
    }
  } while( true );
}



// FUNCTION 144e71960 FUN_144e71960 body=830 status=ok
// SIG undefined FUN_144e71960(void)

void FUN_144e71960(longlong param_1,longlong param_2,int param_3,undefined8 *param_4,int *param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_1e8 [32];
  int local_1c8 [4];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [240];
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  iVar3 = param_3 - *(int *)(param_2 + 0x8c);
  iVar4 = iVar3 / *(int *)(param_2 + 0x118);
  uVar10 = (longlong)iVar3 % (longlong)*(int *)(param_2 + 0x118) & 0xffffffff;
  lVar9 = param_1;
  if (iVar4 < 0) {
LAB_144e71b5a:
    FUN_144e47110(lVar9,uVar10);
    FUN_1470a639e(local_1b8,1);
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_141302cc4(local_1a8,"Invalid scan line ");
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,param_3);
    FUN_141302cc4(pbVar8," requested or missing.");
    FUN_144e410c0(local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  uVar10 = *(ulonglong *)(param_2 + 0x98);
  lVar9 = (longlong)(*(longlong *)(param_2 + 0xa0) - uVar10) >> 3;
  if ((int)lVar9 <= iVar4) goto LAB_144e71b5a;
  plVar1 = (longlong *)(uVar10 + (longlong)iVar4 * 8);
  lVar9 = *plVar1;
  if (lVar9 == 0) {
    FUN_144e47110();
    FUN_1470a639e(local_1b8,1);
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(local_1a8,"Scan line ");
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,param_3);
    FUN_141302cc4(pbVar8," is missing.");
    FUN_144e410c0(local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  puVar11 = (undefined8 *)(param_1 + 0x50);
  if ((*(uint *)(param_2 + 0x68) >> 0xc & 1) == 0) {
    if (*(int *)(param_2 + 0xb4) == param_3) goto LAB_144e71a1c;
  }
  else {
    lVar5 = (**(code **)(*(longlong *)*puVar11 + 0x20))();
    if (lVar5 == *plVar1) goto LAB_144e71a1c;
  }
  (**(code **)(*(longlong *)*puVar11 + 0x28))((longlong *)*puVar11,lVar9);
LAB_144e71a1c:
  if (((*(uint *)(param_2 + 0x68) >> 0xc & 1) != 0) &&
     ((**(code **)(*(longlong *)*puVar11 + 0x10))((longlong *)*puVar11,local_1c8,4),
     local_1c8[0] != *(int *)(param_2 + 0x128))) {
    FUN_144e47110();
    FUN_1470a639e(local_1b8,1);
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_141302cc4(local_1a8,"Unexpected part number ");
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,local_1c8[0]);
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(pbVar8,", should be ");
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       (pbVar7,*(int *)(param_2 + 0x128));
    FUN_141302cc4(pbVar8,&DAT_149971530);
    FUN_144e40dd0(local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d50e0);
  }
  (**(code **)(*(longlong *)*puVar11 + 0x10))((longlong *)*puVar11,local_1c8,4);
  FUN_144b65960(*puVar11,param_5);
  if (local_1c8[0] != param_3) {
    FUN_144e41060(local_b8,"Unexpected data block y coordinate.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  if ((-1 < *param_5) && (*param_5 <= *(int *)(param_2 + 0x120))) {
    cVar2 = (**(code **)(*(longlong *)*puVar11 + 8))();
    plVar1 = (longlong *)*puVar11;
    if (cVar2 == '\0') {
      (**(code **)(*plVar1 + 0x10))(plVar1,*param_4,*param_5);
    }
    else {
      uVar6 = (**(code **)(*plVar1 + 0x18))(plVar1,*param_5);
      *param_4 = uVar6;
    }
    if (*(int *)(param_2 + 0x80) == 0) {
      *(int *)(param_2 + 0xb4) = *(int *)(param_2 + 0x118) + param_3;
    }
    else {
      *(int *)(param_2 + 0xb4) = param_3 - *(int *)(param_2 + 0x118);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1e8);
  }
  FUN_144e41060(local_b8,"Unexpected data block length.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 144e71cc0 FUN_144e71cc0 body=812 status=ok
// SIG undefined FUN_144e71cc0(void)

void FUN_144e71cc0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  longlong local_res18;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (*plVar3 != 0) goto LAB_144e71dbd;
  lVar13 = 0;
  lVar15 = 0;
  uVar9 = 0;
  lVar14 = *(longlong *)(param_1 + 0x10);
  plVar7 = plVar3 + 3;
  if (*(int *)(lVar14 + 0x90) < (int)plVar3[3]) {
    plVar7 = (longlong *)(lVar14 + 0x90);
  }
  lVar6 = (longlong)(*(int *)((longlong)plVar3 + 0x14) - *(int *)(lVar14 + 0x8c));
  lVar11 = (longlong)((int)*plVar7 - *(int *)(lVar14 + 0x8c));
  if (lVar6 <= lVar11) {
    if ((lVar11 - lVar6) + 1 < 2) {
LAB_144e71d60:
      uVar9 = *(ulonglong *)(*(longlong *)(lVar14 + 0xb8) + lVar6 * 8);
    }
    else {
      do {
        lVar13 = lVar13 + *(longlong *)(*(longlong *)(lVar14 + 0xb8) + lVar6 * 8);
        lVar15 = lVar15 + *(longlong *)(*(longlong *)(lVar14 + 0xb8) + 8 + lVar6 * 8);
        lVar6 = lVar6 + 2;
      } while (lVar6 <= lVar11 + -1);
      if (lVar6 <= lVar11) goto LAB_144e71d60;
    }
    uVar9 = uVar9 + lVar15 + lVar13;
  }
  if (((longlong *)plVar3[4] == (longlong *)0x0) || (uVar9 <= (ulonglong)(longlong)(int)plVar3[2]))
  {
    *(undefined4 *)(plVar3 + 5) = 1;
    **(undefined8 **)(param_1 + 0x18) = (*(undefined8 **)(param_1 + 0x18))[1];
  }
  else {
    uVar4 = (**(code **)(*(longlong *)plVar3[4] + 0x10))();
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x28) = uVar4;
    lVar14 = *(longlong *)(param_1 + 0x18);
    uVar4 = (**(code **)(**(longlong **)(lVar14 + 0x20) + 0x28))
                      (*(longlong **)(lVar14 + 0x20),*(undefined8 *)(lVar14 + 8),
                       *(undefined4 *)(lVar14 + 0x10),*(undefined4 *)(lVar14 + 0x14),lVar14);
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10) = uVar4;
  }
LAB_144e71dbd:
  iVar18 = 1;
  lVar14 = *(longlong *)(param_1 + 0x10);
  if (*(int *)(lVar14 + 0x80) == 0) {
    iVar8 = *(int *)(param_1 + 0x20);
    iVar10 = *(int *)(param_1 + 0x24) + 1;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x24);
    iVar10 = *(int *)(param_1 + 0x20) + -1;
    iVar18 = -1;
  }
  do {
    if (iVar8 == iVar10) {
      return;
    }
    local_res18 = **(longlong **)(param_1 + 0x18) +
                  *(longlong *)
                   (*(longlong *)(lVar14 + 0xd0) + (longlong)(iVar8 - *(int *)(lVar14 + 0x8c)) * 8);
    uVar9 = 0;
    while( true ) {
      lVar14 = *(longlong *)(param_1 + 0x10);
      if ((ulonglong)((*(longlong *)(lVar14 + 0xf0) - *(longlong *)(lVar14 + 0xe8)) / 0x38) <= uVar9
         ) break;
      puVar16 = (undefined4 *)(uVar9 * 0x38 + *(longlong *)(lVar14 + 0xe8));
      uVar1 = puVar16[9];
      if (iVar8 < 0) {
        if ((int)uVar1 < 0) {
          iVar12 = ~uVar1 - iVar8;
        }
        else {
          iVar12 = (uVar1 - iVar8) + -1;
        }
        iVar12 = -(iVar12 / (int)uVar1);
      }
      else {
        iVar12 = iVar8 / (int)uVar1;
      }
      if (iVar8 == iVar12 * uVar1) {
        iVar12 = puVar16[8];
        uVar2 = *(uint *)(lVar14 + 0x84);
        if ((int)uVar2 < 0) {
          if (iVar12 < 0) {
            iVar17 = ~uVar2 - iVar12;
          }
          else {
            iVar17 = (iVar12 - uVar2) + -1;
          }
          iVar17 = -(iVar17 / iVar12);
        }
        else {
          iVar17 = (int)uVar2 / iVar12;
        }
        uVar2 = *(uint *)(lVar14 + 0x88);
        if ((int)uVar2 < 0) {
          if (iVar12 < 0) {
            iVar5 = ~uVar2 - iVar12;
          }
          else {
            iVar5 = (iVar12 - uVar2) + -1;
          }
          iVar12 = -(iVar5 / iVar12);
        }
        else {
          iVar12 = (int)uVar2 / iVar12;
        }
        if (*(char *)((longlong)puVar16 + 0x29) == '\0') {
          if (iVar8 < 0) {
            if ((int)uVar1 < 0) {
              iVar5 = ~uVar1 - iVar8;
            }
            else {
              iVar5 = (uVar1 - iVar8) + -1;
            }
            iVar5 = -(iVar5 / (int)uVar1);
          }
          else {
            iVar5 = iVar8 / (int)uVar1;
          }
          lVar13 = (longlong)iVar5 * *(longlong *)(puVar16 + 6) + *(longlong *)(puVar16 + 2);
          lVar14 = *(longlong *)(puVar16 + 4);
          FUN_144e67590(&local_res18,iVar17 * lVar14 + lVar13,iVar12 * lVar14 + lVar13,lVar14,
                        *(undefined1 *)(puVar16 + 10),*(undefined8 *)(puVar16 + 0xc),
                        *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x28),*puVar16,puVar16[1]);
          goto LAB_144e71fc8;
        }
        FUN_144e69620(&local_res18,puVar16[1],(longlong)((iVar12 - iVar17) + 1));
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
      else {
LAB_144e71fc8:
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
    }
    iVar8 = iVar8 + iVar18;
  } while( true );
}



// FUNCTION 144e71ff0 FUN_144e71ff0 body=79 status=ok
// SIG undefined FUN_144e71ff0(void)

undefined8 * FUN_144e71ff0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::_anon_30626053::LineBufferTask::vftable;
  FUN_144e80fc0(param_1[3] + 0x58);
  FUN_144e7f8e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144e72040 FUN_144e72040 body=1590 status=ok
// SIG undefined FUN_144e72040(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_144e72040(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_158 [32];
  undefined2 **local_138;
  undefined2 **local_130;
  undefined2 **local_128;
  undefined2 *local_118;
  undefined2 *local_110;
  undefined2 *local_108;
  undefined2 local_100;
  undefined2 *local_f8;
  int local_f0;
  int local_ec;
  longlong local_e8;
  undefined1 local_d8 [96];
  undefined2 *local_78 [3];
  byte local_60;
  undefined7 uStack_5f;
  byte local_58;
  undefined7 uStack_57;
  byte local_50;
  undefined7 uStack_4f;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar7 = *(longlong **)(param_1 + 0x18);
  local_e8 = param_1;
  if (*plVar7 != 0) goto LAB_144e7216c;
  lVar14 = 0;
  lVar15 = 0;
  uVar9 = 0;
  lVar13 = *(longlong *)(param_1 + 0x10);
  plVar6 = plVar7 + 3;
  if (*(int *)(lVar13 + 0x90) < (int)plVar7[3]) {
    plVar6 = (longlong *)(lVar13 + 0x90);
  }
  lVar3 = (longlong)(*(int *)((longlong)plVar7 + 0x14) - *(int *)(lVar13 + 0x8c));
  lVar12 = (longlong)((int)*plVar6 - *(int *)(lVar13 + 0x8c));
  if (lVar3 <= lVar12) {
    if ((lVar12 - lVar3) + 1 < 2) {
LAB_144e72100:
      uVar9 = *(ulonglong *)(*(longlong *)(lVar13 + 0xb8) + lVar3 * 8);
    }
    else {
      do {
        lVar14 = lVar14 + *(longlong *)(*(longlong *)(lVar13 + 0xb8) + lVar3 * 8);
        lVar15 = lVar15 + *(longlong *)(*(longlong *)(lVar13 + 0xb8) + 8 + lVar3 * 8);
        lVar3 = lVar3 + 2;
      } while (lVar3 <= lVar12 + -1);
      if (lVar3 <= lVar12) goto LAB_144e72100;
    }
    uVar9 = uVar9 + lVar14 + lVar15;
  }
  if (((longlong *)plVar7[4] == (longlong *)0x0) || (uVar9 <= (ulonglong)(longlong)(int)plVar7[2]))
  {
    *(undefined4 *)(plVar7 + 5) = 1;
    **(undefined8 **)(param_1 + 0x18) = (*(undefined8 **)(param_1 + 0x18))[1];
  }
  else {
    uVar1 = (**(code **)(*(longlong *)plVar7[4] + 0x10))();
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x28) = uVar1;
    local_138 = *(undefined2 ***)(param_1 + 0x18);
    uVar1 = (**(code **)(*(longlong *)local_138[4] + 0x28))
                      (local_138[4],local_138[1],*(undefined4 *)(local_138 + 2),
                       *(undefined4 *)((longlong)local_138 + 0x14));
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10) = uVar1;
  }
LAB_144e7216c:
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x80) == 0) {
    iVar11 = *(int *)(param_1 + 0x20);
    local_ec = *(int *)(param_1 + 0x24) + 1;
    local_f0 = 1;
  }
  else {
    iVar11 = *(int *)(param_1 + 0x24);
    local_ec = *(int *)(param_1 + 0x20) + -1;
    local_f0 = -1;
  }
  do {
    if (iVar11 == local_ec) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_158);
    }
    uVar16 = *(uint *)(param_1 + 0x2c);
    if (iVar11 < 0) {
      if ((int)uVar16 < 0) {
        iVar2 = ~uVar16 - iVar11;
      }
      else {
        iVar2 = (uVar16 - iVar11) + -1;
      }
      iVar2 = -(iVar2 / (int)uVar16);
    }
    else {
      iVar2 = iVar11 / (int)uVar16;
    }
    if (iVar11 == iVar2 * uVar16) {
      lVar13 = *(longlong *)(param_1 + 0x10);
      lVar14 = **(longlong **)(param_1 + 0x18);
      lVar15 = *(longlong *)
                (*(longlong *)(lVar13 + 0xd0) + (longlong)(iVar11 - *(int *)(lVar13 + 0x8c)) * 8);
      local_118 = (undefined2 *)0x0;
      local_108 = (undefined2 *)0x0;
      uVar16 = 0;
      local_f8 = (undefined2 *)0x0;
      local_110 = (undefined2 *)0x0;
      uVar9 = (*(longlong *)(lVar13 + 0x140) - *(longlong *)(lVar13 + 0x138)) / 0x38;
      local_130 = (undefined2 **)((ulonglong)local_130 & 0xffffffff00000000);
      local_138 = &local_108;
      FUN_144e726f0(param_1,iVar11,&local_110,&local_118);
      puVar5 = local_110;
      puVar10 = (undefined2 *)0x0;
      if (uVar9 < 5) {
LAB_144e722b9:
        uVar16 = (uint)puVar10;
        if (puVar5 == (undefined2 *)0x0) goto LAB_144e722be;
      }
      else {
        if (local_110 != (undefined2 *)0x0) {
          local_130 = (undefined2 **)CONCAT44(local_130._4_4_,1);
          local_138 = &local_108;
          FUN_144e726f0(param_1,iVar11,&local_f8,&local_118);
          puVar10 = local_f8;
          goto LAB_144e722b9;
        }
LAB_144e722be:
        if ((local_118 == (undefined2 *)0x0) && (local_108 == (undefined2 *)0x0))
        goto LAB_144e72631;
      }
      puVar10 = local_108;
      uVar4 = 0;
      lVar13 = *(longlong *)(param_1 + 0x10);
      if (uVar9 != 0) {
        plVar7 = (longlong *)(*(longlong *)(lVar13 + 0x138) + 0x10);
        do {
          local_78[uVar4] =
               (undefined2 *)
               (lVar14 + lVar15 + (longlong)(local_108 + (longlong)local_118 * 4) * *plVar7 * 2);
          uVar4 = uVar4 + 1;
          plVar7 = plVar7 + 7;
        } while (uVar4 < uVar9);
      }
      if ((uVar9 == 3) || (uVar9 == 6)) {
        local_138 = &local_118;
        puVar8 = puVar10;
        if (((ulonglong)local_78[2] & 0xf) == 0 &&
            (((ulonglong)local_78[1] & 0xf) == 0 && ((ulonglong)local_78[0] & 0xf) == 0)) {
          if (((ulonglong)puVar5 & 0xf) == 0) {
            FUN_144e70e10(local_78,local_78 + 1,local_78 + 2,&local_110);
            puVar5 = local_110;
          }
          else {
            FUN_144e70cf0();
            puVar5 = local_110;
          }
        }
        else if (((ulonglong)puVar5 & 0xf) == 0) {
          FUN_144e70bd0();
          puVar5 = local_110;
        }
        else {
          FUN_144e70ab0();
          puVar5 = local_110;
        }
        for (; puVar8 != (undefined2 *)0x0; puVar8 = (undefined2 *)((longlong)puVar8 + -1)) {
          *puVar5 = *local_78[0];
          local_78[0] = local_78[0] + 1;
          puVar5[1] = *local_78[1];
          local_78[1] = local_78[1] + 1;
          puVar5[2] = *local_78[2];
          local_78[2] = local_78[2] + 1;
          puVar5 = puVar5 + 3;
        }
        if (uVar9 == 6) {
          local_138 = &local_118;
          if ((local_58 & 0xf) == 0 && ((local_60 & 0xf) == 0 && (local_50 & 0xf) == 0)) {
            if ((uVar16 & 0xf) == 0) {
              FUN_144e70e10(&local_60,&local_58,&local_50,&local_f8);
            }
            else {
              FUN_144e70cf0();
            }
          }
          else if ((uVar16 & 0xf) == 0) {
            FUN_144e70bd0();
          }
          else {
            FUN_144e70ab0();
          }
          if (puVar10 != (undefined2 *)0x0) {
            puVar8 = (undefined2 *)CONCAT71(uStack_4f,local_50);
            lVar13 = CONCAT71(uStack_5f,local_60) - (longlong)puVar8;
            lVar14 = CONCAT71(uStack_57,local_58) - (longlong)puVar8;
            puVar5 = local_f8;
            do {
              *puVar5 = *(undefined2 *)(lVar13 + (longlong)puVar8);
              puVar5[1] = *(undefined2 *)(lVar14 + (longlong)puVar8);
              puVar5[2] = *puVar8;
              puVar5 = puVar5 + 3;
              puVar8 = puVar8 + 1;
              puVar10 = (undefined2 *)((longlong)puVar10 + -1);
            } while (puVar10 != (undefined2 *)0x0);
          }
        }
      }
      else {
        if ((uVar9 - 4 & 0xfffffffffffffffb) != 0) {
          FUN_144e40f00(local_d8,"IIF mode called with incorrect channel pattern");
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_d8,(ThrowInfo *)&DAT_14c6d5340);
        }
        lVar13 = *(longlong *)(lVar13 + 0x138);
        if (*(char *)(lVar13 + 0xb0) == '\0') {
          local_128 = &local_108;
          local_130 = &local_118;
          local_138 = &local_110;
          FUN_144e70360(local_78,local_78 + 1,local_78 + 2,&local_60);
        }
        else {
          local_100 = *(undefined2 *)(lVar13 + 0xb2);
          local_128 = &local_108;
          local_130 = &local_118;
          local_138 = &local_110;
          FUN_144e70720();
        }
        if (uVar9 == 8) {
          lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x138);
          if (*(char *)(lVar13 + 400) == '\0') {
            local_128 = &local_108;
            local_130 = &local_118;
            local_138 = &local_f8;
            FUN_144e70360(&local_58,&local_50,local_48,local_40);
          }
          else {
            local_100 = *(undefined2 *)(lVar13 + 0x192);
            local_128 = &local_108;
            local_130 = &local_118;
            local_138 = &local_f8;
            FUN_144e70720();
          }
        }
      }
    }
LAB_144e72631:
    iVar11 = iVar11 + local_f0;
  } while( true );
}



// FUNCTION 144e726a0 FUN_144e726a0 body=79 status=ok
// SIG undefined FUN_144e726a0(void)

undefined8 * FUN_144e726a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::_anon_30626053::LineBufferTaskIIF::vftable;
  FUN_144e80fc0(param_1[3] + 0x58);
  FUN_144e7f8e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144e726f0 FUN_144e726f0 body=430 status=ok
// SIG undefined FUN_144e726f0(void)

void FUN_144e726f0(longlong param_1,int param_2,longlong *param_3,ulonglong *param_4,
                  ulonglong *param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  
  lVar6 = *(longlong *)(param_1 + 0x10);
  uVar3 = (*(longlong *)(lVar6 + 0x140) - *(longlong *)(lVar6 + 0x138)) / 0x38;
  uVar8 = uVar3;
  if (4 < uVar3) {
    uVar8 = uVar3 >> 1;
  }
  uVar3 = uVar3 >> 1;
  if (param_6 != 1) {
    uVar3 = 0;
  }
  plVar5 = (longlong *)(uVar3 * 0x38 + *(longlong *)(lVar6 + 0x138));
  uVar1 = *(uint *)((longlong)plVar5 + 0x34);
  if (param_2 < 0) {
    if ((int)uVar1 < 0) {
      iVar4 = ~uVar1 - param_2;
    }
    else {
      iVar4 = (uVar1 - param_2) + -1;
    }
    iVar4 = -(iVar4 / (int)uVar1);
  }
  else {
    iVar4 = param_2 / (int)uVar1;
  }
  if (param_2 != iVar4 * uVar1) {
    *param_4 = 0;
    *param_5 = 0;
    *param_3 = 0;
    lVar6 = *(longlong *)(param_1 + 0x10);
  }
  uVar1 = *(uint *)((longlong)plVar5 + 0x34);
  if (param_2 < 0) {
    if ((int)uVar1 < 0) {
      param_2 = ~uVar1 - param_2;
    }
    else {
      param_2 = (uVar1 - param_2) + -1;
    }
    param_2 = -(param_2 / (int)uVar1);
  }
  else {
    param_2 = param_2 / (int)uVar1;
    if ((int)uVar1 < 0) {
      lVar6 = *(longlong *)(param_1 + 0x10);
    }
  }
  uVar1 = *(uint *)(lVar6 + 0x84);
  iVar4 = (int)plVar5[6];
  if ((int)uVar1 < 0) {
    if (iVar4 < 0) {
      iVar7 = ~uVar1 - iVar4;
    }
    else {
      iVar7 = (iVar4 - uVar1) + -1;
    }
    iVar7 = -(iVar7 / iVar4);
  }
  else {
    iVar7 = (int)uVar1 / iVar4;
  }
  uVar1 = *(uint *)(lVar6 + 0x88);
  if ((int)uVar1 < 0) {
    if (iVar4 < 0) {
      iVar2 = ~uVar1 - iVar4;
    }
    else {
      iVar2 = (iVar4 - uVar1) + -1;
    }
    iVar4 = -(iVar2 / iVar4);
  }
  else {
    iVar4 = (int)uVar1 / iVar4;
  }
  *param_3 = (longlong)iVar7 * plVar5[4] + (longlong)param_2 * plVar5[5] + *plVar5;
  uVar3 = (((longlong)iVar4 - (longlong)iVar7) * plVar5[4] + 2U >> 1) / uVar8 + 1;
  *param_4 = uVar3 >> 3;
  *param_5 = (ulonglong)((uint)uVar3 & 7);
  return;
}



// FUNCTION 144e728a0 FUN_144e728a0 body=379 status=ok
// SIG undefined FUN_144e728a0(void)

undefined8 *
FUN_144e728a0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
             int param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  puVar2 = *(undefined8 **)
            (*(longlong *)(param_3 + 0x100) +
            ((ulonglong)(longlong)param_4 %
            (ulonglong)(*(longlong *)(param_3 + 0x108) - *(longlong *)(param_3 + 0x100) >> 3)) * 8);
  FUN_144e80ef0(puVar2 + 0xb);
  piVar6 = (int *)((longlong)puVar2 + 0x14);
  if (*(int *)((longlong)puVar2 + 0x2c) != param_4) {
    iVar7 = param_4 * *(int *)(param_3 + 0x118) + *(int *)(param_3 + 0x8c);
    *piVar6 = iVar7;
    *(int *)(puVar2 + 3) = *(int *)(param_3 + 0x118) + -1 + iVar7;
    *(int *)((longlong)puVar2 + 0x2c) = param_4;
    *puVar2 = 0;
    FUN_144e71960(param_2,param_3,iVar7,puVar2 + 1,puVar2 + 2);
  }
  uVar3 = param_7;
  piVar5 = &param_5;
  if (param_5 <= *piVar6) {
    piVar5 = piVar6;
  }
  iVar7 = *piVar5;
  piVar6 = &param_6;
  if (*(int *)(puVar2 + 3) <= param_6) {
    piVar6 = (int *)(puVar2 + 3);
  }
  iVar1 = *piVar6;
  puVar4 = (undefined8 *)FUN_14494321d(0x30);
  if ((char)uVar3 == '\0') {
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      FUN_144e7f890(puVar4,param_1);
      *puVar4 = Imf_3_2::_anon_30626053::LineBufferTask::vftable;
      puVar4[2] = param_3;
      puVar4[3] = puVar2;
      *(int *)(puVar4 + 4) = iVar7;
      *(int *)((longlong)puVar4 + 0x24) = iVar1;
      puVar4[5] = uVar3;
    }
  }
  else if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_144e7f890(puVar4,param_1);
    *puVar4 = Imf_3_2::_anon_30626053::LineBufferTaskIIF::vftable;
    puVar4[2] = param_3;
    puVar4[3] = puVar2;
    *(int *)(puVar4 + 4) = iVar7;
    *(int *)((longlong)puVar4 + 0x24) = iVar1;
    puVar4[5] = uVar3;
  }
  return puVar4;
}



// FUNCTION 144e72a20 FUN_144e72a20 body=368 status=ok
// SIG undefined FUN_144e72a20(void)

void FUN_144e72a20(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  code *pcVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  size_t _Size;
  void *pvVar4;
  
  _Dst = (void *)*param_1;
  uVar2 = (param_1[2] - (longlong)_Dst) / 0x38;
  if (uVar2 < param_3) {
    if (0x492492492492492 < param_3) {
      FUN_144e712c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 0x492492492492492;
    if ((uVar2 <= 0x492492492492492 - (uVar2 >> 1)) &&
       (uVar3 = (uVar2 >> 1) + uVar2, uVar3 < param_3)) {
      uVar3 = param_3;
    }
    if (_Dst != (void *)0x0) {
      uVar2 = uVar2 * 0x38;
      pvVar4 = _Dst;
      if (0xfff < uVar2) {
        pvVar4 = *(void **)((longlong)_Dst + -8);
        uVar2 = uVar2 + 0x27;
        if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(pvVar4,uVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    _Dst = (void *)FUN_144e711c0(param_1,uVar3);
    *param_1 = _Dst;
    param_1[1] = _Dst;
    _Size = param_3 * 0x38;
    param_1[2] = (void *)(uVar3 * 0x38 + (longlong)_Dst);
    memmove(_Dst,param_2,_Size);
  }
  else {
    uVar2 = (param_1[1] - (longlong)_Dst) / 0x38;
    if (uVar2 < param_3) {
      memmove(_Dst,param_2,uVar2 * 0x38);
      _Dst = (void *)param_1[1];
      param_2 = (void *)(uVar2 * 0x38 + (longlong)param_2);
      param_3 = param_3 - uVar2;
    }
    _Size = param_3 * 0x38;
    memmove(_Dst,param_2,_Size);
  }
  param_1[1] = _Size + (longlong)_Dst;
  return;
}



// FUNCTION 144e72ba0 FUN_144e72ba0 body=368 status=ok
// SIG undefined FUN_144e72ba0(void)

void FUN_144e72ba0(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  code *pcVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  size_t _Size;
  void *pvVar4;
  
  _Dst = (void *)*param_1;
  uVar2 = (param_1[2] - (longlong)_Dst) / 0x38;
  if (uVar2 < param_3) {
    if (0x492492492492492 < param_3) {
      FUN_144e71070();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 0x492492492492492;
    if ((uVar2 <= 0x492492492492492 - (uVar2 >> 1)) &&
       (uVar3 = (uVar2 >> 1) + uVar2, uVar3 < param_3)) {
      uVar3 = param_3;
    }
    if (_Dst != (void *)0x0) {
      uVar2 = uVar2 * 0x38;
      pvVar4 = _Dst;
      if (0xfff < uVar2) {
        pvVar4 = *(void **)((longlong)_Dst + -8);
        uVar2 = uVar2 + 0x27;
        if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(pvVar4,uVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    _Dst = (void *)FUN_144e70f80(param_1,uVar3);
    *param_1 = _Dst;
    param_1[1] = _Dst;
    _Size = param_3 * 0x38;
    param_1[2] = (void *)(uVar3 * 0x38 + (longlong)_Dst);
    memmove(_Dst,param_2,_Size);
  }
  else {
    uVar2 = (param_1[1] - (longlong)_Dst) / 0x38;
    if (uVar2 < param_3) {
      memmove(_Dst,param_2,uVar2 * 0x38);
      _Dst = (void *)param_1[1];
      param_2 = (void *)(uVar2 * 0x38 + (longlong)param_2);
      param_3 = param_3 - uVar2;
    }
    _Size = param_3 * 0x38;
    memmove(_Dst,param_2,_Size);
  }
  param_1[1] = _Size + (longlong)_Dst;
  return;
}



// FUNCTION 144e72d20 FUN_144e72d20 body=342 status=ok
// SIG undefined FUN_144e72d20(void)

void FUN_144e72d20(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  void *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  size_t _Size;
  void *pvVar3;
  
  _Dst = (void *)*param_1;
  uVar1 = param_1[2] - (longlong)_Dst >> 3;
  if (uVar1 < param_3) {
    if (0x1fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_144b6ee80();
    }
    uVar2 = 0x1fffffffffffffff;
    if ((uVar1 <= 0x1fffffffffffffff - (uVar1 >> 1)) &&
       (uVar2 = (uVar1 >> 1) + uVar1, uVar2 < param_3)) {
      uVar2 = param_3;
    }
    if (_Dst != (void *)0x0) {
      uVar1 = uVar1 * 8;
      pvVar3 = _Dst;
      if (0xfff < uVar1) {
        pvVar3 = *(void **)((longlong)_Dst + -8);
        uVar1 = uVar1 + 0x27;
        if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar3))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(pvVar3,uVar1);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    _Dst = (void *)FUN_144e6bce0(param_1,uVar2);
    *param_1 = _Dst;
    param_1[1] = _Dst;
    param_1[2] = (void *)((longlong)_Dst + uVar2 * 8);
    _Size = param_3 * 8;
    memmove(_Dst,param_2,_Size);
  }
  else {
    uVar1 = param_1[1] - (longlong)_Dst >> 3;
    if (uVar1 < param_3) {
      memmove(_Dst,param_2,uVar1 * 8);
      _Dst = (void *)param_1[1];
      param_2 = (void *)(uVar1 * 8 + (longlong)param_2);
      param_3 = param_3 - uVar1;
    }
    _Size = param_3 * 8;
    memmove(_Dst,param_2,_Size);
  }
  param_1[1] = _Size + (longlong)_Dst;
  return;
}



// FUNCTION 144e72e80 FUN_144e72e80 body=445 status=ok
// SIG undefined FUN_144e72e80(void)

undefined8 * FUN_144e72e80(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Src;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *_Dst;
  ulonglong uVar6;
  ulonglong uVar7;
  size_t _Size;
  longlong lVar8;
  undefined8 *puVar9;
  
  lVar2 = *param_1;
  lVar8 = (param_1[1] - lVar2) / 0x38;
  if (lVar8 == 0x492492492492492) {
    FUN_144e712c0();
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  uVar1 = lVar8 + 1;
  uVar6 = (param_1[2] - lVar2) / 0x38;
  uVar7 = 0x492492492492492;
  if ((uVar6 <= 0x492492492492492 - (uVar6 >> 1)) && (uVar7 = (uVar6 >> 1) + uVar6, uVar7 < uVar1))
  {
    uVar7 = uVar1;
  }
  puVar5 = (undefined8 *)FUN_144e711c0(param_1,uVar7);
  puVar9 = puVar5 + (((longlong)param_2 - lVar2) / 0x38) * 7;
  uVar4 = param_3[1];
  *puVar9 = *param_3;
  puVar9[1] = uVar4;
  uVar4 = param_3[3];
  puVar9[2] = param_3[2];
  puVar9[3] = uVar4;
  uVar4 = param_3[5];
  puVar9[4] = param_3[4];
  puVar9[5] = uVar4;
  puVar9[6] = param_3[6];
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst = puVar5;
    param_2 = _Src;
  }
  else {
    memmove(puVar5,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst = puVar9 + 7;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar6 = ((param_1[2] - lVar2) / 0x38) * 0x38;
    lVar8 = lVar2;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar8 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar8,uVar6);
  }
  *param_1 = (longlong)puVar5;
  param_1[1] = (longlong)(puVar5 + uVar1 * 7);
  param_1[2] = (longlong)(puVar5 + uVar7 * 7);
  return puVar9;
}



// FUNCTION 144e73040 FUN_144e73040 body=371 status=ok
// SIG undefined FUN_144e73040(void)

void FUN_144e73040(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  longlong lVar5;
  
  if (0x1fffffffffffffff < param_2) {
    FUN_144e71160();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar3 = param_1[2] - *param_1 >> 3;
  if ((0x1fffffffffffffff - (uVar3 >> 1) < uVar3) ||
     ((uVar3 = (uVar3 >> 1) + uVar3, uVar4 = param_2, param_2 <= uVar3 &&
      (uVar4 = uVar3, 0x1fffffffffffffff < uVar3)))) {
LAB_144e731a9:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar4 = uVar4 * 8;
  if (uVar4 < 0x1000) {
    if (uVar4 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_14494321d(uVar4);
    }
  }
  else {
    if (uVar4 + 0x27 <= uVar4) goto LAB_144e731a9;
    lVar2 = FUN_14494321d();
    if (lVar2 == 0) goto LAB_144e731a2;
    _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar2;
  }
  memset((void *)((longlong)_Dst + lVar5 * 8),0,(param_2 - lVar5) * 8);
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar5 = *param_1;
  if (lVar5 != 0) {
    uVar3 = param_1[2] - lVar5 & 0xfffffffffffffff8;
    lVar2 = lVar5;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      lVar2 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar2) - 8U) {
LAB_144e731a2:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + param_2 * 8);
  param_1[2] = (longlong)(uVar4 + (longlong)_Dst);
  return;
}



// FUNCTION 144e731c0 FUN_144e731c0 body=445 status=ok
// SIG undefined FUN_144e731c0(void)

undefined8 * FUN_144e731c0(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Src;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *_Dst;
  ulonglong uVar6;
  ulonglong uVar7;
  size_t _Size;
  longlong lVar8;
  undefined8 *puVar9;
  
  lVar2 = *param_1;
  lVar8 = (param_1[1] - lVar2) / 0x38;
  if (lVar8 == 0x492492492492492) {
    FUN_144e71070();
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  uVar1 = lVar8 + 1;
  uVar6 = (param_1[2] - lVar2) / 0x38;
  uVar7 = 0x492492492492492;
  if ((uVar6 <= 0x492492492492492 - (uVar6 >> 1)) && (uVar7 = (uVar6 >> 1) + uVar6, uVar7 < uVar1))
  {
    uVar7 = uVar1;
  }
  puVar5 = (undefined8 *)FUN_144e70f80(param_1,uVar7);
  puVar9 = puVar5 + (((longlong)param_2 - lVar2) / 0x38) * 7;
  uVar4 = param_3[1];
  *puVar9 = *param_3;
  puVar9[1] = uVar4;
  uVar4 = param_3[3];
  puVar9[2] = param_3[2];
  puVar9[3] = uVar4;
  uVar4 = param_3[5];
  puVar9[4] = param_3[4];
  puVar9[5] = uVar4;
  puVar9[6] = param_3[6];
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst = puVar5;
    param_2 = _Src;
  }
  else {
    memmove(puVar5,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst = puVar9 + 7;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar6 = ((param_1[2] - lVar2) / 0x38) * 0x38;
    lVar8 = lVar2;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar8 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar8,uVar6);
  }
  *param_1 = (longlong)puVar5;
  param_1[1] = (longlong)(puVar5 + uVar1 * 7);
  param_1[2] = (longlong)(puVar5 + uVar7 * 7);
  return puVar9;
}



// FUNCTION 144e73380 FUN_144e73380 body=1061 status=ok
// SIG undefined FUN_144e73380(void)

void FUN_144e73380(ulonglong *param_1,ulonglong *param_2,longlong param_3,undefined1 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong *puVar21;
  ulonglong *local_98;
  ulonglong *puStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  lVar15 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if (lVar15 < 0x738) {
      if (param_1 != param_2) {
        for (puVar21 = param_1 + 7; puVar21 != param_2; puVar21 = puVar21 + 7) {
          local_98 = (ulonglong *)*puVar21;
          puStack_90 = (ulonglong *)puVar21[1];
          local_88 = puVar21[2];
          uStack_80 = puVar21[3];
          local_78 = puVar21[4];
          uStack_70 = puVar21[5];
          uVar1 = puVar21[6];
          if (local_98 < (ulonglong *)*param_1) {
            memmove(param_1 + 7,param_1,(longlong)puVar21 - (longlong)param_1);
            *param_1 = (ulonglong)local_98;
            param_1[1] = (ulonglong)puStack_90;
            param_1[2] = local_88;
            param_1[3] = uStack_80;
            param_1[4] = local_78;
            param_1[5] = uStack_70;
            param_1[6] = uVar1;
          }
          else {
            puVar17 = (ulonglong *)puVar21[-7];
            puVar14 = puVar21 + -7;
            puVar13 = puVar21;
            while (puVar12 = puVar14, local_98 < puVar17) {
              uVar2 = puVar12[1];
              *puVar13 = *puVar12;
              puVar13[1] = uVar2;
              uVar2 = puVar12[3];
              puVar13[2] = puVar12[2];
              puVar13[3] = uVar2;
              uVar2 = puVar12[5];
              puVar13[4] = puVar12[4];
              puVar13[5] = uVar2;
              puVar13[6] = puVar12[6];
              puVar14 = puVar12 + -7;
              puVar13 = puVar12;
              puVar17 = (ulonglong *)puVar12[-7];
            }
            *puVar13 = (ulonglong)local_98;
            puVar13[1] = (ulonglong)puStack_90;
            puVar13[2] = local_88;
            puVar13[3] = uStack_80;
            puVar13[4] = local_78;
            puVar13[5] = uStack_70;
            puVar13[6] = uVar1;
          }
        }
      }
      return;
    }
    if (param_3 < 1) break;
    FUN_144e737b0(&local_98,param_1,param_2,param_4);
    puVar17 = puStack_90;
    puVar21 = local_98;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if (((longlong)local_98 - (longlong)param_1) / 0x38 <
        ((longlong)param_2 - (longlong)puStack_90) / 0x38) {
      FUN_144e73380(param_1,local_98,param_3,param_4);
      param_1 = puVar17;
      puVar21 = param_2;
    }
    else {
      FUN_144e73380(puStack_90,param_2,param_3,param_4);
    }
    lVar15 = (longlong)puVar21 - (longlong)param_1;
    param_2 = puVar21;
  }
  lVar15 = (longlong)param_2 - (longlong)param_1;
  uVar1 = lVar15 / 0x38;
  lVar20 = (longlong)uVar1 >> 1;
  if (0 < lVar20) {
    lVar18 = (longlong)(uVar1 - 1) >> 1;
    puVar21 = param_1 + lVar20 * 7;
    do {
      uVar3 = puVar21[-7];
      uVar4 = puVar21[-6];
      lVar20 = lVar20 + -1;
      uVar2 = puVar21[-1];
      uVar7 = puVar21[-5];
      uVar8 = puVar21[-4];
      uVar9 = puVar21[-3];
      uVar10 = puVar21[-2];
      lVar16 = lVar20;
      while (lVar16 < lVar18) {
        lVar19 = lVar16 * 2 + 2;
        lVar19 = (2 - (ulonglong)(param_1[lVar19 * 7] < param_1[lVar19 * 7 + -7])) + lVar16 * 2;
        uVar11 = (param_1 + lVar19 * 7)[1];
        param_1[lVar16 * 7] = param_1[lVar19 * 7];
        (param_1 + lVar16 * 7)[1] = uVar11;
        uVar11 = (param_1 + lVar19 * 7 + 2)[1];
        param_1[lVar16 * 7 + 2] = param_1[lVar19 * 7 + 2];
        (param_1 + lVar16 * 7 + 2)[1] = uVar11;
        uVar11 = (param_1 + lVar19 * 7 + 4)[1];
        param_1[lVar16 * 7 + 4] = param_1[lVar19 * 7 + 4];
        (param_1 + lVar16 * 7 + 4)[1] = uVar11;
        param_1[lVar16 * 7 + 6] = param_1[lVar19 * 7 + 6];
        lVar16 = lVar19;
      }
      lVar19 = lVar16;
      if ((lVar16 == lVar18) && ((uVar1 & 1) == 0)) {
        uVar11 = (param_1 + uVar1 * 7 + -7)[1];
        lVar19 = uVar1 - 1;
        param_1[lVar16 * 7] = param_1[uVar1 * 7 + -7];
        (param_1 + lVar16 * 7)[1] = uVar11;
        uVar11 = (param_1 + uVar1 * 7 + -5)[1];
        param_1[lVar16 * 7 + 2] = param_1[uVar1 * 7 + -5];
        (param_1 + lVar16 * 7 + 2)[1] = uVar11;
        uVar11 = (param_1 + uVar1 * 7 + -3)[1];
        param_1[lVar16 * 7 + 4] = param_1[uVar1 * 7 + -3];
        (param_1 + lVar16 * 7 + 4)[1] = uVar11;
        param_1[lVar16 * 7 + 6] = param_1[uVar1 * 7 + -1];
      }
      while (lVar20 < lVar19) {
        lVar16 = lVar19 + -1 >> 1;
        puVar17 = param_1 + lVar16 * 7;
        if (uVar3 <= *puVar17) break;
        uVar11 = puVar17[1];
        param_1[lVar19 * 7] = *puVar17;
        (param_1 + lVar19 * 7)[1] = uVar11;
        uVar11 = puVar17[3];
        param_1[lVar19 * 7 + 2] = puVar17[2];
        (param_1 + lVar19 * 7 + 2)[1] = uVar11;
        uVar11 = puVar17[5];
        param_1[lVar19 * 7 + 4] = puVar17[4];
        (param_1 + lVar19 * 7 + 4)[1] = uVar11;
        param_1[lVar19 * 7 + 6] = puVar17[6];
        lVar19 = lVar16;
      }
      param_1[lVar19 * 7] = uVar3;
      (param_1 + lVar19 * 7)[1] = uVar4;
      param_1[lVar19 * 7 + 2] = uVar7;
      (param_1 + lVar19 * 7 + 2)[1] = uVar8;
      param_1[lVar19 * 7 + 4] = uVar9;
      (param_1 + lVar19 * 7 + 4)[1] = uVar10;
      param_1[lVar19 * 7 + 6] = uVar2;
      puVar21 = puVar21 + -7;
    } while (0 < lVar20);
  }
  if ((longlong)uVar1 < 2) {
    return;
  }
  do {
    puVar21 = param_2 + -7;
    lVar20 = lVar15 / 0x38;
    lVar15 = (longlong)puVar21 - (longlong)param_1;
    if (1 < lVar20) {
      local_68 = *puVar21;
      uStack_60 = param_2[-6];
      local_58 = param_2[-5];
      uStack_50 = param_2[-4];
      local_48 = param_2[-3];
      uStack_40 = param_2[-2];
      local_38 = param_2[-1];
      uVar1 = param_1[1];
      *puVar21 = *param_1;
      param_2[-6] = uVar1;
      uVar1 = param_1[3];
      param_2[-5] = param_1[2];
      param_2[-4] = uVar1;
      uVar5 = *(undefined4 *)((longlong)param_1 + 0x24);
      uVar1 = param_1[5];
      uVar6 = *(undefined4 *)((longlong)param_1 + 0x2c);
      *(int *)(param_2 + -3) = (int)param_1[4];
      *(undefined4 *)((longlong)param_2 + -0x14) = uVar5;
      *(int *)(param_2 + -2) = (int)uVar1;
      *(undefined4 *)((longlong)param_2 + -0xc) = uVar6;
      param_2[-1] = param_1[6];
      FUN_144e73b90(param_1,0,lVar15 / 0x38,&local_68,param_4);
    }
    param_2 = puVar21;
  } while (0x6f < lVar15);
  return;
}



// FUNCTION 144e737b0 FUN_144e737b0 body=988 status=ok
// SIG undefined FUN_144e737b0(void)

ulonglong * FUN_144e737b0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  longlong lVar17;
  
  puVar15 = param_2 + (((longlong)param_3 - (longlong)param_2) / 0x38 >> 1) * 7;
  lVar8 = ((longlong)param_3 + (-0x38 - (longlong)param_2)) / 0x38;
  if (lVar8 < 0x29) {
    FUN_144e73d00(param_2,puVar15,param_3 + -7);
  }
  else {
    lVar8 = lVar8 + 1 >> 3;
    lVar17 = lVar8 * 0x38;
    FUN_144e73d00(param_2,param_2 + lVar8 * 7,param_2 + lVar8 * 0xe);
    FUN_144e73d00((longlong)puVar15 - lVar17,puVar15,lVar17 + (longlong)puVar15);
    lVar17 = (longlong)param_3 + (-0x38 - lVar17);
    FUN_144e73d00(param_3 + lVar8 * -0xe + -7,lVar17,param_3 + -7);
    FUN_144e73d00(param_2 + lVar8 * 7,puVar15,lVar17);
  }
  puVar9 = puVar15 + 7;
  if (param_2 < puVar15) {
    uVar11 = *puVar15;
    do {
      uVar1 = puVar15[-7];
      puVar10 = puVar15 + -7;
      if ((uVar1 < uVar11) || (uVar1 != uVar11)) break;
      uVar11 = uVar1;
      puVar15 = puVar10;
    } while (param_2 < puVar10);
  }
  puVar10 = puVar9;
  puVar13 = puVar15;
  if (puVar9 < param_3) {
    do {
      puVar10 = puVar9;
      if ((*puVar9 < *puVar15) || (*puVar9 != *puVar15)) break;
      puVar9 = puVar9 + 7;
      puVar10 = puVar9;
    } while (puVar9 < param_3);
  }
joined_r0x000144e738e3:
  do {
    puVar14 = puVar13;
    if (param_3 <= puVar9) {
joined_r0x000144e73944:
      for (; param_2 < puVar13; puVar13 = puVar13 + -7) {
        puVar12 = puVar14 + -7;
        puVar16 = puVar15;
        if (*puVar15 <= *puVar12) {
          if (*puVar12 != *puVar15) break;
          puVar16 = puVar15 + -7;
          if (puVar16 != puVar12) {
            uVar1 = puVar14[-6];
            uVar2 = *puVar16;
            uVar3 = puVar15[-6];
            uVar4 = puVar15[-5];
            uVar5 = puVar15[-4];
            uVar6 = puVar15[-3];
            uVar7 = puVar15[-2];
            uVar11 = puVar15[-1];
            *puVar16 = *puVar12;
            puVar15[-6] = uVar1;
            uVar1 = puVar14[-4];
            puVar15[-5] = puVar14[-5];
            puVar15[-4] = uVar1;
            uVar1 = puVar14[-2];
            puVar15[-3] = puVar14[-3];
            puVar15[-2] = uVar1;
            puVar15[-1] = puVar14[-1];
            *puVar12 = uVar2;
            puVar14[-6] = uVar3;
            puVar14[-5] = uVar4;
            puVar14[-4] = uVar5;
            puVar14[-3] = uVar6;
            puVar14[-2] = uVar7;
            puVar14[-1] = uVar11;
          }
        }
        puVar15 = puVar16;
        puVar14 = puVar12;
      }
      if (puVar13 == param_2) {
        if (puVar9 == param_3) {
          *param_1 = (ulonglong)puVar15;
          param_1[1] = (ulonglong)puVar10;
          return param_1;
        }
        if (puVar10 != puVar9) {
          uVar1 = puVar10[1];
          uVar2 = *puVar15;
          uVar3 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          uVar6 = puVar15[4];
          uVar7 = puVar15[5];
          uVar11 = puVar15[6];
          *puVar15 = *puVar10;
          puVar15[1] = uVar1;
          uVar1 = puVar10[3];
          puVar15[2] = puVar10[2];
          puVar15[3] = uVar1;
          uVar1 = puVar10[5];
          puVar15[4] = puVar10[4];
          puVar15[5] = uVar1;
          puVar15[6] = puVar10[6];
          *puVar10 = uVar2;
          puVar10[1] = uVar3;
          puVar10[2] = uVar4;
          puVar10[3] = uVar5;
          puVar10[4] = uVar6;
          puVar10[5] = uVar7;
          puVar10[6] = uVar11;
        }
        uVar1 = puVar9[1];
        uVar2 = *puVar15;
        uVar3 = puVar15[1];
        uVar4 = puVar15[2];
        uVar5 = puVar15[3];
        uVar6 = puVar15[4];
        uVar7 = puVar15[5];
        uVar11 = puVar15[6];
        *puVar15 = *puVar9;
        puVar15[1] = uVar1;
        uVar1 = puVar9[3];
        puVar15[2] = puVar9[2];
        puVar15[3] = uVar1;
        uVar1 = puVar9[5];
        puVar15[4] = puVar9[4];
        puVar15[5] = uVar1;
        puVar15[6] = puVar9[6];
        *puVar9 = uVar2;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        puVar9[4] = uVar6;
        puVar9[5] = uVar7;
        puVar9[6] = uVar11;
        puVar9 = puVar9 + 7;
        puVar10 = puVar10 + 7;
        puVar15 = puVar15 + 7;
      }
      else {
        puVar14 = puVar13 + -7;
        if (puVar9 == param_3) {
          puVar16 = puVar15 + -7;
          if (puVar14 != puVar16) {
            uVar1 = puVar15[-6];
            uVar2 = *puVar14;
            uVar3 = puVar13[-6];
            uVar4 = puVar13[-5];
            uVar5 = puVar13[-4];
            uVar6 = puVar13[-3];
            uVar7 = puVar13[-2];
            uVar11 = puVar13[-1];
            *puVar14 = *puVar16;
            puVar13[-6] = uVar1;
            uVar1 = puVar15[-4];
            puVar13[-5] = puVar15[-5];
            puVar13[-4] = uVar1;
            uVar1 = puVar15[-2];
            puVar13[-3] = puVar15[-3];
            puVar13[-2] = uVar1;
            puVar13[-1] = puVar15[-1];
            *puVar16 = uVar2;
            puVar15[-6] = uVar3;
            puVar15[-5] = uVar4;
            puVar15[-4] = uVar5;
            puVar15[-3] = uVar6;
            puVar15[-2] = uVar7;
            puVar15[-1] = uVar11;
          }
          uVar1 = puVar10[-6];
          uVar2 = *puVar16;
          uVar3 = puVar15[-6];
          uVar4 = puVar15[-5];
          uVar5 = puVar15[-4];
          uVar6 = puVar15[-3];
          uVar7 = puVar15[-2];
          uVar11 = puVar15[-1];
          *puVar16 = puVar10[-7];
          puVar15[-6] = uVar1;
          uVar1 = puVar10[-4];
          puVar15[-5] = puVar10[-5];
          puVar15[-4] = uVar1;
          uVar1 = puVar10[-2];
          puVar15[-3] = puVar10[-3];
          puVar15[-2] = uVar1;
          puVar15[-1] = puVar10[-1];
          puVar10[-7] = uVar2;
          puVar10[-6] = uVar3;
          puVar10[-5] = uVar4;
          puVar10[-4] = uVar5;
          puVar10[-3] = uVar6;
          puVar10[-2] = uVar7;
          puVar10[-1] = uVar11;
          puVar10 = puVar10 + -7;
          puVar15 = puVar16;
          puVar13 = puVar14;
        }
        else {
          uVar1 = puVar13[-6];
          uVar2 = *puVar9;
          uVar3 = puVar9[1];
          uVar4 = puVar9[2];
          uVar5 = puVar9[3];
          uVar6 = puVar9[4];
          uVar7 = puVar9[5];
          uVar11 = puVar9[6];
          *puVar9 = *puVar14;
          puVar9[1] = uVar1;
          uVar1 = puVar13[-4];
          puVar9[2] = puVar13[-5];
          puVar9[3] = uVar1;
          uVar1 = puVar13[-2];
          puVar9[4] = puVar13[-3];
          puVar9[5] = uVar1;
          puVar9[6] = puVar13[-1];
          puVar9 = puVar9 + 7;
          *puVar14 = uVar2;
          puVar13[-6] = uVar3;
          puVar13[-5] = uVar4;
          puVar13[-4] = uVar5;
          puVar13[-3] = uVar6;
          puVar13[-2] = uVar7;
          puVar13[-1] = uVar11;
          puVar13 = puVar14;
        }
      }
      goto joined_r0x000144e738e3;
    }
    if (*puVar9 <= *puVar15) {
      if (*puVar15 != *puVar9) goto joined_r0x000144e73944;
      if (puVar10 != puVar9) {
        uVar1 = puVar9[1];
        uVar2 = *puVar10;
        uVar3 = puVar10[1];
        uVar4 = puVar10[2];
        uVar5 = puVar10[3];
        uVar6 = puVar10[4];
        uVar7 = puVar10[5];
        uVar11 = puVar10[6];
        *puVar10 = *puVar9;
        puVar10[1] = uVar1;
        uVar1 = puVar9[3];
        puVar10[2] = puVar9[2];
        puVar10[3] = uVar1;
        uVar1 = puVar9[5];
        puVar10[4] = puVar9[4];
        puVar10[5] = uVar1;
        puVar10[6] = puVar9[6];
        *puVar9 = uVar2;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        puVar9[4] = uVar6;
        puVar9[5] = uVar7;
        puVar9[6] = uVar11;
      }
      puVar10 = puVar10 + 7;
    }
    puVar9 = puVar9 + 7;
  } while( true );
}



// FUNCTION 144e73b90 FUN_144e73b90 body=367 status=ok
// SIG undefined FUN_144e73b90(void)

void FUN_144e73b90(longlong param_1,longlong param_2,ulonglong param_3,ulonglong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  lVar10 = (longlong)(param_3 - 1) >> 1;
  lVar9 = param_2;
  while (lVar9 < lVar10) {
    lVar7 = (lVar9 * 2 + 2) * 0x38;
    lVar6 = lVar9 * 0x38;
    lVar9 = (2 - (ulonglong)
                 (*(ulonglong *)(lVar7 + param_1) < *(ulonglong *)(lVar7 + -0x38 + param_1))) +
            lVar9 * 2;
    lVar7 = lVar9 * 0x38;
    uVar4 = ((undefined8 *)(lVar7 + param_1))[1];
    *(undefined8 *)(lVar6 + param_1) = *(undefined8 *)(lVar7 + param_1);
    ((undefined8 *)(lVar6 + param_1))[1] = uVar4;
    puVar1 = (undefined8 *)(lVar7 + 0x10 + param_1);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar6 + 0x10 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)(lVar7 + 0x20 + param_1);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar6 + 0x20 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    *(undefined8 *)(lVar6 + 0x30 + param_1) = *(undefined8 *)(lVar7 + 0x30 + param_1);
  }
  if ((lVar9 == lVar10) && ((param_3 & 1) == 0)) {
    lVar6 = param_3 * 0x38;
    lVar10 = lVar9 * 0x38;
    puVar1 = (undefined8 *)(lVar6 + -0x38 + param_1);
    uVar4 = puVar1[1];
    lVar9 = param_3 - 1;
    *(undefined8 *)(lVar10 + param_1) = *puVar1;
    ((undefined8 *)(lVar10 + param_1))[1] = uVar4;
    puVar1 = (undefined8 *)(lVar6 + -0x28 + param_1);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar10 + 0x10 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar1 = (undefined8 *)(lVar6 + -0x18 + param_1);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar10 + 0x20 + param_1);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    *(undefined8 *)(lVar10 + 0x30 + param_1) = *(undefined8 *)(lVar6 + -8 + param_1);
  }
  while (param_2 < lVar9) {
    lVar10 = lVar9 + -1 >> 1;
    puVar8 = (ulonglong *)(lVar10 * 0x38 + param_1);
    if (*param_4 <= *puVar8) break;
    uVar5 = puVar8[1];
    lVar9 = lVar9 * 0x38;
    *(ulonglong *)(lVar9 + param_1) = *puVar8;
    ((ulonglong *)(lVar9 + param_1))[1] = uVar5;
    uVar5 = puVar8[3];
    puVar3 = (ulonglong *)(lVar9 + 0x10 + param_1);
    *puVar3 = puVar8[2];
    puVar3[1] = uVar5;
    uVar5 = puVar8[5];
    puVar3 = (ulonglong *)(lVar9 + 0x20 + param_1);
    *puVar3 = puVar8[4];
    puVar3[1] = uVar5;
    *(ulonglong *)(lVar9 + 0x30 + param_1) = puVar8[6];
    lVar9 = lVar10;
  }
  uVar5 = param_4[1];
  lVar9 = lVar9 * 0x38;
  *(ulonglong *)(lVar9 + param_1) = *param_4;
  ((ulonglong *)(lVar9 + param_1))[1] = uVar5;
  uVar5 = param_4[3];
  puVar8 = (ulonglong *)(lVar9 + 0x10 + param_1);
  *puVar8 = param_4[2];
  puVar8[1] = uVar5;
  uVar5 = param_4[5];
  puVar8 = (ulonglong *)(lVar9 + 0x20 + param_1);
  *puVar8 = param_4[4];
  puVar8[1] = uVar5;
  *(ulonglong *)(lVar9 + 0x30 + param_1) = param_4[6];
  return;
}



// FUNCTION 144e73d00 FUN_144e73d00 body=213 status=ok
// SIG undefined FUN_144e73d00(void)

void FUN_144e73d00(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (*param_2 < *param_1) {
    uVar2 = param_1[1];
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    uVar7 = param_2[4];
    uVar8 = param_2[5];
    uVar1 = param_2[6];
    *param_2 = *param_1;
    param_2[1] = uVar2;
    uVar2 = param_1[3];
    param_2[2] = param_1[2];
    param_2[3] = uVar2;
    uVar2 = param_1[5];
    param_2[4] = param_1[4];
    param_2[5] = uVar2;
    param_2[6] = param_1[6];
    *param_1 = uVar3;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    param_1[6] = uVar1;
  }
  if (*param_3 < *param_2) {
    uVar2 = param_2[1];
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar1 = param_3[6];
    *param_3 = *param_2;
    param_3[1] = uVar2;
    uVar2 = param_2[3];
    param_3[2] = param_2[2];
    param_3[3] = uVar2;
    uVar2 = param_2[5];
    param_3[4] = param_2[4];
    param_3[5] = uVar2;
    param_3[6] = param_2[6];
    *param_2 = uVar3;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    param_2[4] = uVar7;
    param_2[5] = uVar8;
    param_2[6] = uVar1;
    if (*param_2 < *param_1) {
      uVar2 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = uVar2;
      uVar2 = param_1[3];
      param_2[2] = param_1[2];
      param_2[3] = uVar2;
      uVar2 = param_1[5];
      param_2[4] = param_1[4];
      param_2[5] = uVar2;
      param_2[6] = param_1[6];
      *param_1 = uVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[4] = uVar7;
      param_1[5] = uVar8;
      param_1[6] = uVar1;
    }
  }
  return;
}



// FUNCTION 144e73de0 FUN_144e73de0 body=20 status=ok
// SIG undefined FUN_144e73de0(void)

void FUN_144e73de0(longlong param_1)

{
  FUN_144b6b7f0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x158) + 0x50));
  return;
}



// FUNCTION 144e73e00 FUN_144e73e00 body=1792 status=ok
// SIG undefined FUN_144e73e00(void)

void FUN_144e73e00(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  byte bVar18;
  longlong lVar19;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  undefined1 local_238 [8];
  longlong local_230;
  undefined8 *puStack_228;
  undefined8 *local_220;
  longlong local_218;
  longlong local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [8];
  longlong local_1c8;
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [240];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x158);
  local_210 = param_1;
  local_1c8 = lVar3;
  iVar7 = _Mtx_lock(lVar3);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar3 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(lVar3 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  uVar8 = FUN_144b67b60(*(longlong *)(param_1 + 8) + 0x50);
  FUN_144b72eb0(param_2,&local_248);
  while (plVar9 = (longlong *)FUN_144b72ed0(param_2,local_238), local_248 != *plVar9) {
    FUN_144b66050(uVar8,&local_218,local_248 + 0x20);
    plVar9 = (longlong *)FUN_144b65f40(uVar8,local_1d0);
    if ((local_218 != *plVar9) &&
       ((*(int *)(local_218 + 0x120) != *(int *)(local_248 + 0x140) ||
        (*(int *)(local_218 + 0x124) != *(int *)(local_248 + 0x144))))) {
      FUN_144e47110();
      FUN_1470a639e(local_1b8,1);
      uVar8 = FUN_144e73de0(param_1);
      uVar11 = FUN_144b66f30(&local_218);
      uVar12 = FUN_141302cc4(local_1a8,"X and/or y subsampling factors of \"");
      uVar11 = FUN_141302cc4(uVar12,uVar11);
      uVar11 = FUN_141302cc4(uVar11,"\" channel of input file \"");
      uVar8 = FUN_141302cc4(uVar11,uVar8);
      FUN_141302cc4(uVar8,"\" are not compatible with the frame buffer\'s subsampling factors.");
      FUN_144e40dd0(&local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_b8,(ThrowInfo *)&DAT_14c6d50e0);
    }
    FUN_144b6cdf0(&local_248);
  }
  local_230 = 0;
  puStack_228 = (undefined8 *)0x0;
  puVar15 = (undefined8 *)0x0;
  local_220 = (undefined8 *)0x0;
  FUN_144b65f20(uVar8,&local_240);
  FUN_144b72eb0(param_2,&local_248);
  plVar9 = (longlong *)FUN_144b72ed0(param_2,&local_218);
  puVar16 = puStack_228;
  if (local_248 != *plVar9) {
    do {
      plVar9 = (longlong *)FUN_144b65f40(uVar8,local_238);
      if (local_240 != *plVar9) {
        do {
          pbVar10 = (byte *)(local_240 + 0x1c);
          lVar17 = (local_248 + 0x20) - (longlong)pbVar10;
          do {
            bVar18 = *pbVar10;
            uVar13 = (uint)pbVar10[lVar17];
            if (bVar18 != uVar13) break;
            pbVar10 = pbVar10 + 1;
          } while (uVar13 != 0);
          if (-1 < (int)(bVar18 - uVar13)) break;
          local_208 = *(undefined4 *)(local_240 + 0x11c);
          uStack_200 = 0;
          local_1f8 = 0;
          uStack_1f0 = 0;
          local_1e8 = CONCAT22(local_1e8._2_2_,0x100);
          uStack_1e0 = 0;
          local_1d8 = 0;
          uStack_204 = local_208;
          if (puVar16 == puVar15) {
            FUN_144e76900(&local_230,puVar16,&local_208);
            puVar15 = local_220;
          }
          else {
            *puVar16 = CONCAT44(local_208,local_208);
            puVar16[1] = 0;
            puVar16[2] = 0;
            puVar16[3] = 0;
            *(undefined4 *)(puVar16 + 4) = local_1e8;
            *(undefined4 *)((longlong)puVar16 + 0x24) = uStack_1e4;
            *(undefined4 *)(puVar16 + 5) = 0;
            *(undefined4 *)((longlong)puVar16 + 0x2c) = 0;
            puVar16[6] = 0;
            puStack_228 = puVar16 + 7;
          }
          puVar16 = puStack_228;
          FUN_144b663b0(&local_240);
          plVar9 = (longlong *)FUN_144b65f40(uVar8,local_238);
        } while (local_240 != *plVar9);
      }
      bVar18 = 0;
      plVar9 = (longlong *)FUN_144b65f40(uVar8,local_1d0);
      if (local_240 == *plVar9) {
LAB_144e74093:
        bVar18 = 1;
        uStack_b4 = *(undefined4 *)(local_248 + 0x120);
      }
      else {
        pbVar10 = (byte *)(local_240 + 0x1c);
        lVar17 = (local_248 + 0x20) - (longlong)pbVar10;
        do {
          bVar1 = *pbVar10;
          uVar13 = (uint)pbVar10[lVar17];
          if (bVar1 != uVar13) break;
          pbVar10 = pbVar10 + 1;
        } while (uVar13 != 0);
        if (0 < (int)(bVar1 - uVar13)) goto LAB_144e74093;
        uStack_b4 = *(undefined4 *)(local_240 + 0x11c);
      }
      uStack_90 = *(undefined8 *)(local_248 + 0x148);
      uStack_a0 = *(undefined8 *)(local_248 + 0x138);
      local_a8 = *(undefined8 *)(local_248 + 0x130);
      uStack_b0 = *(undefined8 *)(local_248 + 0x128);
      local_b8 = *(undefined4 *)(local_248 + 0x120);
      local_98._0_2_ = (ushort)bVar18;
      local_88 = (ulonglong)
                 CONCAT14(*(char *)(local_248 + 0x151) != '\0',
                          (uint)(*(char *)(local_248 + 0x150) != '\0'));
      if (puVar16 == puVar15) {
        FUN_144e76900(&local_230,puVar16,&local_b8);
        puVar15 = local_220;
      }
      else {
        *puVar16 = CONCAT44(uStack_b4,local_b8);
        puVar16[1] = uStack_b0;
        puVar16[2] = local_a8;
        puVar16[3] = uStack_a0;
        uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
        *(undefined4 *)(puVar16 + 4) = local_98;
        *(undefined4 *)((longlong)puVar16 + 0x24) = uStack_94;
        *(undefined4 *)(puVar16 + 5) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = uStack_90._4_4_;
        puVar16[6] = local_88;
        puStack_228 = puVar16 + 7;
      }
      puVar16 = puStack_228;
      plVar9 = (longlong *)FUN_144b65f40(uVar8,local_1c0);
      if ((local_240 != *plVar9) && (bVar18 == 0)) {
        FUN_144b663b0(&local_240);
      }
      FUN_144b6cdf0(&local_248);
      plVar9 = (longlong *)FUN_144b72ed0(param_2,&local_218);
    } while (local_248 != *plVar9);
  }
  plVar9 = (longlong *)FUN_144b65f40(uVar8,local_238);
  if (local_240 != *plVar9) {
    do {
      local_b8 = *(undefined4 *)(local_240 + 0x11c);
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = CONCAT22(local_98._2_2_,0x100);
      uStack_90 = 0;
      local_88 = 0;
      uStack_b4 = local_b8;
      if (puVar16 == puVar15) {
        FUN_144e76900(&local_230,puVar16,&local_b8);
        puVar15 = local_220;
      }
      else {
        *puVar16 = CONCAT44(local_b8,local_b8);
        puVar16[1] = 0;
        puVar16[2] = 0;
        puVar16[3] = 0;
        *(undefined4 *)(puVar16 + 4) = local_98;
        *(undefined4 *)((longlong)puVar16 + 0x24) = uStack_94;
        *(undefined4 *)(puVar16 + 5) = 0;
        *(undefined4 *)((longlong)puVar16 + 0x2c) = 0;
        puVar16[6] = 0;
        puStack_228 = puVar16 + 7;
      }
      puVar16 = puStack_228;
      FUN_144b663b0(&local_240);
      plVar9 = (longlong *)FUN_144b65f40(uVar8,local_238);
    } while (local_240 != *plVar9);
  }
  lVar17 = *(longlong *)(local_210 + 8);
  plVar9 = (longlong *)(lVar17 + 0x80);
  if (plVar9 != param_2) {
    lVar19 = *plVar9;
    cVar2 = *(char *)((longlong)*(longlong **)(lVar19 + 8) + 0x19);
    plVar5 = *(longlong **)(lVar19 + 8);
    while (cVar2 == '\0') {
      FUN_14698d1ae(plVar9,plVar9,plVar5[2]);
      plVar4 = (longlong *)*plVar5;
      thunk_FUN_1400020a8(plVar5,0x158);
      plVar5 = plVar4;
      cVar2 = *(char *)((longlong)plVar4 + 0x19);
    }
    *(longlong *)(lVar19 + 8) = lVar19;
    *(longlong *)lVar19 = lVar19;
    *(longlong *)(lVar19 + 0x10) = lVar19;
    *(undefined8 *)(lVar17 + 0x88) = 0;
    uVar8 = FUN_144b6d960(plVar9,*(undefined8 *)(*param_2 + 8),*plVar9);
    *(undefined8 *)(*plVar9 + 8) = uVar8;
    *(longlong *)(lVar17 + 0x88) = param_2[1];
    plVar5 = (longlong *)*plVar9;
    plVar4 = (longlong *)plVar5[1];
    if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
      cVar2 = *(char *)(*plVar4 + 0x19);
      plVar6 = (longlong *)*plVar4;
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*plVar6 + 0x19);
        plVar4 = plVar6;
        plVar6 = (longlong *)*plVar6;
      }
      *plVar5 = (longlong)plVar4;
      lVar17 = *(longlong *)(*plVar9 + 8);
      lVar19 = *(longlong *)(lVar17 + 0x10);
      cVar2 = *(char *)(lVar19 + 0x19);
      while (cVar2 == '\0') {
        cVar2 = *(char *)(*(longlong *)(lVar19 + 0x10) + 0x19);
        lVar17 = lVar19;
        lVar19 = *(longlong *)(lVar19 + 0x10);
      }
      *(longlong *)(*plVar9 + 0x10) = lVar17;
    }
    else {
      *plVar5 = (longlong)plVar5;
      *(longlong *)(*plVar9 + 0x10) = *plVar9;
    }
  }
  lVar17 = local_230;
  plVar9 = (longlong *)(*(longlong *)(local_210 + 8) + 0xf0);
  if (plVar9 != &local_230) {
    FUN_144e76600(plVar9,local_230,((longlong)puVar16 - local_230) / 0x38);
  }
  if (lVar17 != 0) {
    uVar14 = (((longlong)puVar15 - lVar17) / 0x38) * 0x38;
    lVar19 = lVar17;
    if (0xfff < uVar14) {
      uVar14 = uVar14 + 0x27;
      lVar19 = *(longlong *)(lVar17 + -8);
      if (0x1f < (lVar17 - lVar19) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar19,uVar14);
  }
  _Mtx_unlock(lVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_268);
}



// FUNCTION 144e74530 FUN_144e74530 body=8 status=ok
// SIG undefined FUN_144e74530(void)

undefined4 FUN_144e74530(longlong param_1)

{
  return *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x6c);
}



// FUNCTION 144e74540 FUN_144e74540 body=49 status=ok
// SIG undefined FUN_144e74540(void)

void FUN_144e74540(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_144e66090(*(undefined4 *)(lVar1 + 0x94),*(undefined4 *)(lVar1 + 0x98),param_2,
                *(undefined4 *)(lVar1 + 0x74));
  return;
}



// FUNCTION 144e74580 FUN_144e74580 body=200 status=ok
// SIG undefined FUN_144e74580(void)

void FUN_144e74580(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_198 [32];
  undefined1 local_178 [16];
  undefined1 local_168 [240];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((-1 < param_2) && (param_2 < *(int *)(*(longlong *)(param_1 + 8) + 0xa4))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_198);
  }
  FUN_144e47110();
  FUN_1470a639e(local_178,1);
  uVar1 = FUN_144b6b7f0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x158) + 0x50));
  uVar2 = FUN_141302cc4(local_168,"Error calling numXTiles() on image file \"");
  uVar1 = FUN_141302cc4(uVar2,uVar1);
  FUN_141302cc4(uVar1,"\" (Argument is not in valid range).");
  FUN_144e40dd0(local_78,local_178);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144e74660 FUN_144e74660 body=26 status=ok
// SIG undefined FUN_144e74660(void)

undefined8 FUN_144e74660(undefined8 param_1,undefined8 param_2)

{
  FUN_144e74680();
  return param_2;
}



// FUNCTION 144e74680 FUN_144e74680 body=92 status=ok
// SIG undefined FUN_144e74680(void)

undefined8 FUN_144e74680(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_144e66140(param_2,lVar1 + 0x68,*(undefined4 *)(lVar1 + 0x94),*(undefined4 *)(lVar1 + 0x98),
                *(undefined4 *)(lVar1 + 0x9c),*(undefined4 *)(lVar1 + 0xa0),param_3,param_4);
  return param_2;
}



// FUNCTION 144e746e0 FUN_144e746e0 body=35 status=ok
// SIG undefined FUN_144e746e0(void)

undefined8 FUN_144e746e0(undefined8 param_1,undefined8 param_2)

{
  FUN_144e74710();
  return param_2;
}



// FUNCTION 144e74710 FUN_144e74710 body=269 status=ok
// SIG undefined FUN_144e74710(void)

void FUN_144e74710(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                  int param_6)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  int local_1b8;
  int local_1b0;
  int local_1a8;
  int local_1a0;
  longlong local_198;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar1 = *(longlong *)(param_1 + 8);
  if (((((param_5 < *(int *)(lVar1 + 0xa4)) && (-1 < param_5)) && (param_6 < *(int *)(lVar1 + 0xa8))
       ) && ((-1 < param_6 &&
             (param_3 < *(int *)(*(longlong *)(lVar1 + 0xb0) + (longlong)param_5 * 4))))) &&
     ((-1 < param_3 &&
      ((param_4 < *(int *)(*(longlong *)(lVar1 + 0xb8) + (longlong)param_6 * 4) && (-1 < param_4))))
     )) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  local_198 = param_1;
  if (!bVar2) {
    FUN_144e40d70(local_88,"Arguments not in valid range.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_88,(ThrowInfo *)&DAT_14c6d50e0);
  }
  local_1a8 = param_5;
  local_1c0 = *(undefined4 *)(lVar1 + 0xa0);
  local_1c8 = *(undefined4 *)(lVar1 + 0x9c);
  local_1b8 = param_3;
  local_1b0 = param_4;
  local_1a0 = param_6;
  FUN_144e661d0(param_2,lVar1 + 0x68,*(undefined4 *)(lVar1 + 0x94),*(undefined4 *)(lVar1 + 0x98));
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_1e8);
}



// FUNCTION 144e74830 FUN_144e74830 body=1058 status=ok
// SIG undefined FUN_144e74830(void)

void FUN_144e74830(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_338 [32];
  int local_318;
  int local_310;
  int local_308;
  int local_300;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  int local_2ec;
  undefined1 local_2e8 [8];
  longlong local_2e0;
  longlong local_2d8;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [240];
  undefined1 local_1c8 [96];
  undefined1 local_168 [96];
  undefined1 local_108 [96];
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_338;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x158);
  local_2f8 = param_3;
  local_2e0 = param_1;
  local_2d8 = lVar1;
  iVar2 = _Mtx_lock(lVar1);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(lVar1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  lVar10 = *(longlong *)(param_1 + 8);
  if ((*(longlong *)(lVar10 + 0xf8) - *(longlong *)(lVar10 + 0xf0)) / 0x38 == 0) {
    FUN_144e40d70(local_1c8,"No frame buffer specified as pixel data destination.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1c8,(ThrowInfo *)&DAT_14c6d50e0);
  }
  if ((((-1 < param_6) && (-1 < param_7)) &&
      ((*(int *)(lVar10 + 0x70) != 1 || (param_6 == param_7)))) &&
     ((param_6 < *(int *)(lVar10 + 0xa4) && (param_7 < *(int *)(lVar10 + 0xa8))))) {
    iVar2 = local_2f8;
    local_2f4 = param_2;
    if (param_2 <= local_2f8) {
      iVar2 = param_2;
      local_2f4 = local_2f8;
    }
    iVar3 = param_5;
    if (param_4 <= param_5) {
      iVar3 = param_4;
      param_4 = param_5;
    }
    bVar12 = *(int *)(lVar10 + 0x90) == 1;
    iVar8 = iVar3;
    if (bVar12) {
      iVar8 = param_4;
    }
    local_2ec = -1;
    local_2f0 = iVar3 + -1;
    if (!bVar12) {
      local_2ec = 1;
      local_2f0 = param_4 + 1;
    }
    local_2f8 = iVar2;
    FUN_144e7f920(local_2e8);
    iVar2 = 0;
    iVar3 = local_2f4;
    for (; iVar9 = local_2f8, iVar8 != local_2f0; iVar8 = iVar8 + local_2ec) {
      for (; iVar9 <= iVar3; iVar9 = iVar9 + 1) {
        lVar10 = *(longlong *)(param_1 + 8);
        if (((((param_6 < *(int *)(lVar10 + 0xa4)) && (param_7 < *(int *)(lVar10 + 0xa8))) &&
             (iVar9 < *(int *)(*(longlong *)(lVar10 + 0xb0) + (longlong)param_6 * 4))) &&
            ((-1 < iVar9 && (iVar8 < *(int *)(*(longlong *)(lVar10 + 0xb8) + (longlong)param_7 * 4))
             ))) && (-1 < iVar8)) {
          bVar12 = true;
        }
        else {
          bVar12 = false;
        }
        if (!bVar12) {
          FUN_144e47110();
          FUN_1470a639e(local_2c8,1);
          pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(local_2b8,"Tile (");
          pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,iVar9);
          pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_141302cc4(pbVar6,&DAT_14997153c);
          pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,iVar8);
          pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_141302cc4(pbVar6,&DAT_14997153c);
          pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_6);
          pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_141302cc4(pbVar6,&DAT_1499722dc);
          pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_7);
          FUN_141302cc4(pbVar6,") is not a valid tile.");
          FUN_144e40dd0(local_168,local_2c8);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_168,(ThrowInfo *)&DAT_14c6d50e0);
        }
        local_300 = param_7;
        local_308 = param_6;
        local_318 = iVar9;
        local_310 = iVar8;
        uVar4 = FUN_144e76500(local_2e8,*(undefined8 *)(lVar10 + 0x158),lVar10,iVar2);
        FUN_144e7f670(uVar4);
        iVar2 = iVar2 + 1;
        iVar3 = local_2f4;
      }
    }
    FUN_144e7f970(local_2e8);
    lVar10 = 0;
    uVar11 = 0;
    lVar7 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(lVar7 + 0x138) - *(longlong *)(lVar7 + 0x130) >> 3 != 0) {
      do {
        lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x130) + uVar11 * 8);
        if ((*(char *)(lVar7 + 0x34) != '\0') && (lVar10 == 0)) {
          lVar10 = lVar7 + 0x38;
        }
        *(undefined1 *)(lVar7 + 0x34) = 0;
        uVar11 = uVar11 + 1;
        lVar7 = *(longlong *)(param_1 + 8);
      } while (uVar11 < (ulonglong)
                        (*(longlong *)(lVar7 + 0x138) - *(longlong *)(lVar7 + 0x130) >> 3));
      if (lVar10 != 0) {
        FUN_144e41220(local_108,lVar10);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_108,(ThrowInfo *)&DAT_14c6d52d8);
      }
    }
    _Mtx_unlock(lVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_338);
  }
  FUN_144e47110();
  FUN_1470a639e(local_2c8,1);
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_141302cc4(local_2b8,"Level coordinate (");
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_6);
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(pbVar6,&DAT_14997153c);
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_7);
  FUN_141302cc4(pbVar6,") is invalid.");
  FUN_144e40dd0(local_a8,local_2c8);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144e74c70 FUN_144e74c70 body=34 status=ok
// SIG undefined FUN_144e74c70(void)

void FUN_144e74c70(void)

{
  FUN_144e74830();
  return;
}



// FUNCTION 144e74ca0 FUN_144e74ca0 body=106 status=ok
// SIG undefined FUN_144e74ca0(void)

undefined8 * FUN_144e74ca0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144e66980();
  *param_1 = Imf_3_2::TiledInputFile::vftable;
  lVar1 = FUN_14494321d(0x168);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_144e759d0(lVar1,*(undefined4 *)(param_2 + 0x18));
  }
  param_1[1] = lVar2;
  *(undefined1 *)(lVar2 + 0x160) = 0;
  FUN_144e75420(param_1,param_2);
  return param_1;
}



// FUNCTION 144e74d10 FUN_144e74d10 body=351 status=ok
// SIG undefined FUN_144e74d10(void)

undefined8 *
FUN_144e74d10(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  FUN_144e66980();
  *param_1 = Imf_3_2::TiledInputFile::vftable;
  lVar2 = FUN_14494321d(0x168);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_144e759d0(lVar2,param_5);
  }
  param_1[1] = lVar3;
  *(undefined1 *)(lVar3 + 0x160) = 0;
  puVar4 = (undefined8 *)FUN_14494321d(0x60);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    _Mtx_init_in_situ(puVar4,2);
    puVar4[10] = 0;
    puVar4[0xb] = 0;
  }
  *(undefined8 **)(param_1[1] + 0x158) = puVar4;
  *(longlong **)(*(longlong *)(param_1[1] + 0x158) + 0x50) = param_3;
  FUN_144b67310(param_1[1] + 0x50,param_2);
  *(undefined4 *)(param_1[1] + 0x78) = param_4;
  FUN_144e74e70(param_1);
  lVar3 = param_1[1];
  FUN_144e82640(lVar3 + 0xc0,*(undefined8 *)(*(longlong *)(lVar3 + 0x158) + 0x50),lVar3 + 0xe8,0,0);
  uVar1 = (**(code **)(*param_3 + 8))(param_3);
  *(undefined1 *)(param_1[1] + 0x150) = uVar1;
  uVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_1[1] + 0x158) + 0x50) + 0x20))();
  *(undefined8 *)(*(longlong *)(param_1[1] + 0x158) + 0x58) = uVar5;
  return param_1;
}



// FUNCTION 144e74e70 FUN_144e74e70 body=1410 status=ok
// SIG undefined FUN_144e74e70(void)

void FUN_144e74e70(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int *piVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [32];
  undefined1 local_98 [96];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 0x78);
  if ((((uVar1 & 0x1800) == 0) && ((uVar1 >> 9 & 1) != 0)) &&
     (cVar6 = FUN_144b68010(*(longlong *)(param_1 + 8) + 0x50), cVar6 != '\0')) {
    FUN_144b67d10(*(longlong *)(param_1 + 8) + 0x50,&DAT_14c70a230);
  }
  lVar16 = *(longlong *)(param_1 + 8);
  if (*(int *)(lVar16 + 0x118) == -1) {
    if ((*(uint *)(lVar16 + 0x78) >> 9 & 1) == 0) {
      FUN_144e40d70(local_98,"Expected a tiled file but the file is not tiled.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
    }
    if ((*(uint *)(lVar16 + 0x78) >> 0xb & 1) != 0) {
      FUN_144e40d70(local_98,"File is not a regular tiled image.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
    }
    goto LAB_144e74f5c;
  }
  cVar6 = FUN_144b68010(lVar16 + 0x50);
  if (cVar6 == '\0') goto LAB_144e74f5c;
  puVar9 = (undefined8 *)FUN_144b67ef0(*(longlong *)(param_1 + 8) + 0x50);
  puVar18 = &DAT_14c70a230;
  if (0xf < DAT_14c70a248) {
    puVar18 = DAT_14c70a230;
  }
  puVar15 = puVar9;
  if (0xf < (ulonglong)puVar9[3]) {
    puVar15 = (undefined8 *)*puVar9;
  }
  if (puVar9[2] == DAT_14c70a240) {
    iVar7 = memcmp(puVar15,puVar18,puVar9[2]);
    bVar5 = false;
    if (iVar7 != 0) goto LAB_144e74f52;
  }
  else {
LAB_144e74f52:
    bVar5 = true;
  }
  if (bVar5) {
    FUN_144e40d70(local_98,"TiledInputFile used for non-tiledimage part.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
  }
LAB_144e74f5c:
  FUN_144b683a0(*(longlong *)(param_1 + 8) + 0x50,1,0);
  lVar16 = *(longlong *)(param_1 + 8);
  if ((*(uint *)(lVar16 + 0x78) >> 0xc & 1) == 0) {
    puVar10 = (uint *)FUN_144b68170(lVar16 + 0x50);
    if (puVar10[2] == 2) {
      iVar7 = FUN_144e66660();
      uVar17 = (ulonglong)iVar7;
    }
    else {
      piVar11 = (int *)FUN_144b67b00(lVar16 + 0x50);
      uVar17 = ((((ulonglong)puVar10[1] - 1) + (longlong)((piVar11[3] - piVar11[1]) + 1)) /
               (ulonglong)puVar10[1]) *
               ((((ulonglong)*puVar10 - 1) + (longlong)((piVar11[2] - *piVar11) + 1)) /
               (ulonglong)*puVar10);
    }
    if (0x100000 < uVar17) {
      lVar12 = (**(code **)(**(longlong **)(*(longlong *)(lVar16 + 0x158) + 0x50) + 0x20))();
      plVar2 = *(longlong **)(*(longlong *)(lVar16 + 0x158) + 0x50);
      (**(code **)(*plVar2 + 0x28))(plVar2,lVar12 + -8 + uVar17 * 8);
      plVar2 = *(longlong **)(*(longlong *)(lVar16 + 0x158) + 0x50);
      (**(code **)(*plVar2 + 0x10))(plVar2,&local_38,8);
      plVar2 = *(longlong **)(*(longlong *)(lVar16 + 0x158) + 0x50);
      (**(code **)(*plVar2 + 0x28))(plVar2,lVar12);
    }
  }
  puVar13 = (undefined4 *)FUN_144b68170(*(longlong *)(param_1 + 8) + 0x50);
  lVar16 = *(longlong *)(param_1 + 8);
  uVar8 = puVar13[1];
  uVar3 = puVar13[2];
  uVar4 = puVar13[3];
  *(undefined4 *)(lVar16 + 0x68) = *puVar13;
  *(undefined4 *)(lVar16 + 0x6c) = uVar8;
  *(undefined4 *)(lVar16 + 0x70) = uVar3;
  *(undefined4 *)(lVar16 + 0x74) = uVar4;
  puVar13 = (undefined4 *)FUN_144b67ba0(*(longlong *)(param_1 + 8) + 0x50);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x90) = *puVar13;
  puVar13 = (undefined4 *)FUN_144b67b00(*(longlong *)(param_1 + 8) + 0x50);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x94) = *puVar13;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x98) = puVar13[2];
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c) = puVar13[1];
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xa0) = puVar13[3];
  lVar16 = *(longlong *)(param_1 + 8);
  local_d8 = lVar16 + 0xa8;
  local_e0 = lVar16 + 0xa4;
  local_e8 = lVar16 + 0xb8;
  local_f0 = lVar16 + 0xb0;
  local_f8 = CONCAT44(local_f8._4_4_,*(undefined4 *)(lVar16 + 0xa0));
  FUN_144e66350(lVar16 + 0x68,*(undefined4 *)(lVar16 + 0x94),*(undefined4 *)(lVar16 + 0x98),
                *(undefined4 *)(lVar16 + 0x9c));
  uVar14 = FUN_144e662d0(*(longlong *)(param_1 + 8) + 0x50);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x108) = uVar14;
  lVar16 = *(longlong *)(param_1 + 8);
  *(ulonglong *)(lVar16 + 0x110) =
       (ulonglong)*(uint *)(lVar16 + 0x68) * *(longlong *)(lVar16 + 0x108);
  lVar16 = *(longlong *)(param_1 + 8);
  *(ulonglong *)(lVar16 + 0x148) =
       (ulonglong)*(uint *)(lVar16 + 0x6c) * *(longlong *)(lVar16 + 0x110);
  lVar16 = *(longlong *)(param_1 + 8);
  if (0x7fffffff < *(ulonglong *)(lVar16 + 0x148)) {
    FUN_144e40d70(local_98,"Tile size too large for OpenEXR format");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
  }
  puVar18 = (undefined8 *)0x0;
  if (*(longlong *)(lVar16 + 0x138) - *(longlong *)(lVar16 + 0x130) >> 3 != 0) {
    do {
      puVar15 = (undefined8 *)FUN_14494321d(0x68);
      puVar9 = (undefined8 *)0x0;
      local_38 = puVar15;
      if (puVar15 != (undefined8 *)0x0) {
        lVar16 = *(longlong *)(param_1 + 8);
        uVar8 = *(undefined4 *)(lVar16 + 0x6c);
        uVar14 = *(undefined8 *)(lVar16 + 0x110);
        puVar13 = (undefined4 *)FUN_144b67be0(lVar16 + 0x50);
        uVar14 = FUN_144e49b20(*puVar13,uVar14,uVar8,lVar16 + 0x50);
        *puVar15 = 0;
        puVar15[1] = 0;
        *(undefined4 *)(puVar15 + 2) = 0;
        puVar15[3] = uVar14;
        uVar8 = FUN_144e67550(uVar14);
        *(undefined4 *)(puVar15 + 4) = uVar8;
        *(undefined8 *)((longlong)puVar15 + 0x24) = 0xffffffffffffffff;
        *(undefined8 *)((longlong)puVar15 + 0x2c) = 0xffffffffffffffff;
        *(undefined1 *)((longlong)puVar15 + 0x34) = 0;
        puVar15[7] = 0;
        puVar15[8] = 0;
        puVar15[9] = 0;
        puVar15[10] = 0xf;
        *(undefined1 *)(puVar15 + 7) = 0;
        FUN_144e80de0(puVar15 + 0xb,1);
        puVar9 = puVar15;
      }
      *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (longlong)puVar18 * 8) =
           puVar9;
      cVar6 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x158) + 0x50)
                          + 8))();
      if (cVar6 == '\0') {
        uVar14 = FUN_144a7d36f(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x148));
        *(undefined8 *)
         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x130) + (longlong)puVar18 * 8) +
         8) = uVar14;
      }
      puVar18 = (undefined8 *)((longlong)puVar18 + 1);
      lVar16 = *(longlong *)(param_1 + 8);
    } while (puVar18 < (undefined8 *)
                       (*(longlong *)(lVar16 + 0x138) - *(longlong *)(lVar16 + 0x130) >> 3));
  }
  local_f0 = *(undefined8 *)(lVar16 + 0xb8);
  local_f8 = *(undefined8 *)(lVar16 + 0xb0);
  puVar13 = (undefined4 *)
            FUN_144e820d0(local_c8,*(undefined4 *)(lVar16 + 0x70),*(undefined4 *)(lVar16 + 0xa4),
                          *(undefined4 *)(lVar16 + 0xa8));
  lVar16 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar16 + 0xc0) = *puVar13;
  *(undefined4 *)(lVar16 + 0xc4) = puVar13[1];
  *(undefined4 *)(lVar16 + 200) = puVar13[2];
  puVar18 = (undefined8 *)(puVar13 + 4);
  puVar9 = (undefined8 *)(lVar16 + 0xd0);
  if (puVar9 != puVar18) {
    FUN_144b73340(puVar9);
    *puVar9 = *puVar18;
    *(undefined8 *)(lVar16 + 0xd8) = *(undefined8 *)(puVar13 + 6);
    *(undefined8 *)(lVar16 + 0xe0) = *(undefined8 *)(puVar13 + 8);
    *puVar18 = 0;
    *(undefined8 *)(puVar13 + 6) = 0;
    *(undefined8 *)(puVar13 + 8) = 0;
  }
  FUN_144b73340(local_b8);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_118);
}



// FUNCTION 144e75420 FUN_144e75420 body=543 status=ok
// SIG undefined FUN_144e75420(void)

void FUN_144e75420(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *_Buf1;
  undefined8 **_Buf2;
  ulonglong uVar6;
  size_t _Size;
  void *_Dst;
  undefined1 auStack_c8 [32];
  void *local_a8;
  void *pvStack_a0;
  void *local_98;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar3 = (undefined8 *)FUN_144b67ef0(param_2);
  _Buf2 = &DAT_14c70a230;
  if (0xf < DAT_14c70a248) {
    _Buf2 = (undefined8 **)DAT_14c70a230;
  }
  _Buf1 = puVar3;
  if (0xf < (ulonglong)puVar3[3]) {
    _Buf1 = (undefined8 *)*puVar3;
  }
  if (puVar3[2] == DAT_14c70a240) {
    iVar2 = memcmp(_Buf1,_Buf2,puVar3[2]);
    if (iVar2 == 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x158) = *(undefined8 *)(param_2 + 0x28);
      FUN_144b67310(*(longlong *)(param_1 + 8) + 0x50,param_2);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x78) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x118) = *(undefined4 *)(param_2 + 0x1c);
      uVar1 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x158) + 0x50)
                          + 8))();
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x150) = uVar1;
      FUN_144e74e70(param_1);
      _Dst = (void *)0x0;
      uVar6 = *(longlong *)(param_2 + 0x38) - *(longlong *)(param_2 + 0x30) >> 3;
      local_98 = (void *)0x0;
      local_a8 = (void *)0x0;
      pvStack_a0 = (void *)0x0;
      if (uVar6 != 0) {
        if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_144b6ee80();
        }
        uVar6 = uVar6 * 8;
        if (uVar6 < 0x1000) {
          if (uVar6 != 0) {
            _Dst = (void *)FUN_14494321d(uVar6);
          }
        }
        else {
          if (uVar6 + 0x27 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_14694ac37();
          }
          lVar4 = FUN_14494321d();
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
          *(longlong *)((longlong)_Dst - 8) = lVar4;
        }
        local_98 = (void *)(uVar6 + (longlong)_Dst);
        _Size = *(longlong *)(param_2 + 0x38) - (longlong)*(void **)(param_2 + 0x30);
        local_a8 = _Dst;
        pvStack_a0 = _Dst;
        memmove(_Dst,*(void **)(param_2 + 0x30),_Size);
        pvStack_a0 = (void *)((longlong)_Dst + ((longlong)_Size >> 3) * 8);
      }
      FUN_144e82820(*(longlong *)(param_1 + 8) + 0xc0,&local_a8,*(longlong *)(param_1 + 8) + 0xe8);
      uVar5 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x158) + 0x50)
                          + 0x20))();
      *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x158) + 0x58) = uVar5;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
    }
  }
  FUN_144e40d70(local_88,"Can\'t build a TiledInputFile from a type-mismatched part.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_88,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144e75650 FUN_144e75650 body=290 status=ok
// SIG undefined FUN_144e75650(void)

undefined8 * FUN_144e75650(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  *param_1 = Imf_3_2::TiledInputFile::vftable;
  if ((*(char *)(lVar3 + 0x150) == '\0') &&
     (uVar2 = 0, *(longlong *)(lVar3 + 0x138) - *(longlong *)(lVar3 + 0x130) >> 3 != 0)) {
    do {
      thunk_FUN_1400020a8(*(undefined8 *)
                           (*(longlong *)(*(longlong *)(lVar3 + 0x130) + uVar2 * 8) + 8));
      lVar3 = param_1[1];
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulonglong)(*(longlong *)(lVar3 + 0x138) - *(longlong *)(lVar3 + 0x130) >> 3));
  }
  if ((*(char *)(lVar3 + 0x160) != '\0') &&
     (puVar1 = *(undefined8 **)(*(longlong *)(lVar3 + 0x158) + 0x50), puVar1 != (undefined8 *)0x0))
  {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((*(int *)(param_1[1] + 0x118) == -1) &&
     (lVar3 = *(longlong *)(param_1[1] + 0x158), lVar3 != 0)) {
    _Mtx_destroy_in_situ(lVar3);
    thunk_FUN_1400020a8(lVar3,0x60);
  }
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    FUN_144e75b80(lVar3);
    thunk_FUN_1400020a8(lVar3,0x168);
  }
  FUN_144e66970(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e75780 FUN_144e75780 body=9 status=ok
// SIG undefined FUN_144e75780(void)

void FUN_144e75780(longlong param_1)

{
  FUN_144e80fc0(param_1 + 0x58);
  return;
}



// FUNCTION 144e75790 FUN_144e75790 body=62 status=ok
// SIG undefined FUN_144e75790(void)

void FUN_144e75790(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x38;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e757d0 FUN_144e757d0 body=106 status=ok
// SIG undefined FUN_144e757d0(void)

ulonglong FUN_144e757d0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x492492492492493) {
    param_2 = param_2 * 0x38;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        uVar2 = FUN_14494321d();
        return uVar2;
      }
      return 0;
    }
    if (param_2 < param_2 + 0x27) {
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 144e75840 FUN_144e75840 body=118 status=ok
// SIG undefined FUN_144e75840(void)

void FUN_144e75840(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0x38) * 0x38;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e758c0 FUN_144e758c0 body=16 status=ok
// SIG undefined FUN_144e758c0(void)

void FUN_144e758c0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e758e0 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_Parallelism_allocator<unsigned __int64>::deallocate(unsigned __int64
   * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct CHN * __ptr64>::deallocate(struct CHN * __ptr64 *
   __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<8,class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > >(class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const ,struct
   TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct
   `void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
     16 names - too many to list
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 8;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e75930 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
// SIG undefined FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e75990 FUN_144e75990 body=12 status=ok
// SIG undefined FUN_144e75990(void)

longlong FUN_144e75990(longlong *param_1)

{
  return param_1[1] - *param_1 >> 3;
}



// FUNCTION 144e759a0 FUN_144e759a0 body=8 status=ok
// SIG undefined FUN_144e759a0(void)

longlong FUN_144e759a0(longlong *param_1,longlong param_2)

{
  return *param_1 + param_2 * 8;
}



// FUNCTION 144e759b0 FUN_144e759b0 body=16 status=ok
// SIG undefined FUN_144e759b0(void)

void FUN_144e759b0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e759d0 FUN_144e759d0 body=431 status=ok
// SIG undefined FUN_144e759d0(void)

longlong FUN_144e759d0(longlong param_1,int param_2)

{
  longlong *plVar1;
  size_t _Size;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_res18;
  longlong *local_res20;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  _Mtx_init_in_situ(param_1,2);
  local_res18 = 0;
  FUN_144b66f80(param_1 + 0x50,0x40,0x40,0x3f800000,&local_res18,CONCAT44(uVar7,0x3f800000),0,3);
  *(undefined4 *)(param_1 + 0x68) = 0x20;
  *(undefined8 *)(param_1 + 0x6c) = 0x20;
  *(undefined4 *)(param_1 + 0x74) = 0;
  plVar1 = (longlong *)(param_1 + 0x80);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  local_res20 = plVar1;
  lVar3 = FUN_14494321d(0x158);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  *(longlong *)(lVar3 + 0x10) = lVar3;
  *(undefined2 *)(lVar3 + 0x18) = 0x101;
  *plVar1 = lVar3;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  FUN_144e820d0(param_1 + 0xc0,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x11c) = 0;
  *(int *)(param_1 + 0x120) = param_2;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  iVar2 = 1;
  if (1 < param_2 * 2) {
    iVar2 = param_2 * 2;
  }
  uVar6 = (ulonglong)iVar2;
  pvVar4 = *(void **)(param_1 + 0x138);
  uVar5 = (longlong)pvVar4 >> 3;
  if (uVar6 < uVar5) {
    pvVar4 = (void *)(uVar6 * 8);
  }
  else {
    if (uVar6 <= uVar5) {
      return param_1;
    }
    if ((ulonglong)(*(longlong *)(param_1 + 0x140) >> 3) < uVar6) {
      FUN_144e76780((undefined8 *)(param_1 + 0x130),uVar6,&local_res18);
      return param_1;
    }
    _Size = (uVar6 - uVar5) * 8;
    memset(pvVar4,0,_Size);
    pvVar4 = (void *)(_Size + (longlong)pvVar4);
  }
  *(void **)(param_1 + 0x138) = pvVar4;
  return param_1;
}



// FUNCTION 144e75b80 FUN_144e75b80 body=505 status=ok
// SIG undefined FUN_144e75b80(void)

void FUN_144e75b80(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0xb0));
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0xb8));
  lVar6 = *(longlong *)(param_1 + 0x130);
  uVar10 = 0;
  if (*(longlong *)(param_1 + 0x138) - lVar6 >> 3 != 0) {
    do {
      lVar6 = *(longlong *)(lVar6 + uVar10 * 8);
      if (lVar6 != 0) {
        puVar2 = *(undefined8 **)(lVar6 + 0x18);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        FUN_144e80ed0(lVar6 + 0x58);
        uVar3 = *(ulonglong *)(lVar6 + 0x50);
        if (0xf < uVar3) {
          lVar8 = *(longlong *)(lVar6 + 0x38);
          uVar9 = uVar3 + 1;
          lVar7 = lVar8;
          if (0xfff < uVar9) {
            lVar7 = *(longlong *)(lVar8 + -8);
            uVar9 = uVar3 + 0x28;
            if (0x1f < (lVar8 - lVar7) - 8U) goto LAB_144e75d73;
          }
          thunk_FUN_1400020a8(lVar7,uVar9);
        }
        *(undefined8 *)(lVar6 + 0x48) = 0;
        *(undefined8 *)(lVar6 + 0x50) = 0xf;
        *(undefined1 *)(lVar6 + 0x38) = 0;
        thunk_FUN_1400020a8(lVar6,0x68);
      }
      lVar6 = *(longlong *)(param_1 + 0x130);
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulonglong)(*(longlong *)(param_1 + 0x138) - lVar6 >> 3));
  }
  if ((*(char *)(param_1 + 0x11c) != '\0') &&
     (puVar2 = *(undefined8 **)(param_1 + 0x128), puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  lVar6 = *(longlong *)(param_1 + 0x130);
  if (lVar6 != 0) {
    uVar10 = *(longlong *)(param_1 + 0x140) - lVar6 & 0xfffffffffffffff8;
    lVar8 = lVar6;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(lVar6 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (lVar6 - lVar8) - 8U) {
LAB_144e75d73:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar8,uVar10);
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  FUN_144e75840(param_1 + 0xf0);
  FUN_144b73340(param_1 + 0xd0);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 8);
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  while (cVar1 == '\0') {
    FUN_14698d1ae(param_1 + 0x80,param_1 + 0x80,plVar4[2]);
    plVar5 = (longlong *)*plVar4;
    thunk_FUN_1400020a8(plVar4,0x158);
    plVar4 = plVar5;
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
  }
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x80),0x158);
  FUN_144b67220(param_1 + 0x50);
  _Mtx_destroy_in_situ(param_1);
  return;
}



// FUNCTION 144e75d80 FUN_144e75d80 body=52 status=ok
// SIG undefined FUN_144e75d80(void)

undefined8 FUN_144e75d80(undefined8 param_1,ulonglong param_2)

{
  FUN_144e75b80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 144e75dc0 FUN_144e75dc0 body=1146 status=ok
// SIG undefined FUN_144e75dc0(void)

void FUN_144e75dc0(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,int param_6
                  ,undefined8 *param_7,int *param_8)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar8;
  undefined1 auStack_218 [32];
  int local_1f8;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  undefined8 *local_1c8;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [240];
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1e4 = param_5;
  local_1d0 = param_6;
  local_1c8 = param_7;
  local_1f8 = param_6;
  local_1d4 = param_3;
  plVar4 = (longlong *)FUN_144e82aa0(param_2 + 0xc0,param_3,param_4,param_5);
  lVar2 = *plVar4;
  if (lVar2 == 0) {
    FUN_144e47110();
    FUN_1470a639e(local_1b8,1);
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(local_1a8,"Tile (");
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,local_1d4);
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(pbVar8,&DAT_14997153c);
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,param_4);
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(pbVar8,&DAT_14997153c);
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,param_5);
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(pbVar8,&DAT_14997153c);
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,param_6);
    FUN_141302cc4(pbVar8,") is missing.");
    FUN_144e410c0(local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  puVar1 = (undefined8 *)(param_1 + 0x50);
  if ((*(uint *)(param_2 + 0x78) >> 0xc & 1) == 0) {
    lVar5 = *(longlong *)(param_1 + 0x58);
  }
  else {
    lVar5 = (**(code **)(*(longlong *)*puVar1 + 0x20))();
  }
  if (lVar5 != lVar2) {
    (**(code **)(*(longlong *)*puVar1 + 0x28))((longlong *)*puVar1,lVar2);
  }
  if (((*(uint *)(param_2 + 0x78) >> 0xc & 1) != 0) &&
     ((**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,&local_1e8,4),
     param_5 = local_1e4, local_1e8 != *(int *)(param_2 + 0x118))) {
    FUN_144e47110();
    FUN_1470a639e(local_1b8,1);
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_141302cc4(local_1a8,"Unexpected part number ");
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,local_1e8);
    pbVar7 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(pbVar8,", should be ");
    pbVar8 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       (pbVar7,*(int *)(param_2 + 0x118));
    FUN_141302cc4(pbVar8,&DAT_149971530);
    FUN_144e40dd0(local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d50e0);
  }
  (**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,&local_1e0,4);
  (**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,&local_1dc,4);
  (**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,&local_1d8,4);
  (**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,&local_1e4,4);
  (**(code **)(*(longlong *)*puVar1 + 0x10))((longlong *)*puVar1,&local_1e8,4);
  *param_8 = local_1e8;
  if (local_1e0 != local_1d4) {
    FUN_144e41060(local_b8,"Unexpected tile x coordinate.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  if (local_1dc != param_4) {
    FUN_144e41060(local_b8,"Unexpected tile y coordinate.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  if (local_1d8 != param_5) {
    FUN_144e41060(local_b8,"Unexpected tile x level number coordinate.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  if (local_1e4 != local_1d0) {
    FUN_144e41060(local_b8,"Unexpected tile y level number coordinate.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  if ((-1 < local_1e8) && (local_1e8 <= *(int *)(param_2 + 0x148))) {
    cVar3 = (**(code **)(*(longlong *)*puVar1 + 8))();
    plVar4 = (longlong *)*puVar1;
    if (cVar3 == '\0') {
      (**(code **)(*plVar4 + 0x10))(plVar4,*local_1c8,*param_8);
    }
    else {
      uVar6 = (**(code **)(*plVar4 + 0x18))(plVar4,*param_8);
      *local_1c8 = uVar6;
    }
    *(longlong *)(param_1 + 0x58) = (longlong)*param_8 + 0x14 + lVar2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_218);
  }
  FUN_144e41060(local_b8,"Unexpected tile block length.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d51d8);
}



// FUNCTION 144e76260 FUN_144e76260 body=588 status=ok
// SIG undefined FUN_144e76260(void)

void FUN_144e76260(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 local_res10;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar6 = *(longlong *)(param_1 + 0x10);
  FUN_144e661d0(&local_48,lVar6 + 0x68,*(undefined4 *)(lVar6 + 0x94),*(undefined4 *)(lVar6 + 0x98),
                *(undefined4 *)(lVar6 + 0x9c),*(undefined4 *)(lVar6 + 0xa0),
                *(undefined4 *)(lVar2 + 0x24),*(undefined4 *)(lVar2 + 0x28),
                *(undefined4 *)(lVar2 + 0x2c),*(undefined4 *)(lVar2 + 0x30));
  iVar8 = iStack_40 - local_48;
  iVar1 = iVar8 + 1;
  lVar2 = *(longlong *)(param_1 + 0x18);
  if ((*(longlong **)(lVar2 + 0x18) == (longlong *)0x0) ||
     (((iStack_3c - iStack_44) + 1) * iVar1 * *(int *)(*(longlong *)(param_1 + 0x10) + 0x108) <=
      *(int *)(lVar2 + 0x10))) {
    *(undefined4 *)(lVar2 + 0x20) = 1;
    **(undefined8 **)(param_1 + 0x18) = (*(undefined8 **)(param_1 + 0x18))[1];
  }
  else {
    uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x10))();
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x20) = uVar3;
    local_38 = local_48;
    iStack_34 = iStack_44;
    iStack_30 = iStack_40;
    iStack_2c = iStack_3c;
    lVar2 = *(longlong *)(param_1 + 0x18);
    uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x30))
                      (*(longlong **)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 8),
                       *(undefined4 *)(lVar2 + 0x10),&local_38,lVar2);
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x10) = uVar3;
  }
  local_res10 = **(undefined8 **)(param_1 + 0x18);
  iVar5 = iStack_44;
  for (iVar9 = iStack_44; iVar9 <= iStack_3c; iVar9 = iVar9 + 1) {
    uVar4 = 0;
    while( true ) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xf0);
      if ((ulonglong)((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xf8) - lVar2) / 0x38) <= uVar4
         ) break;
      puVar7 = (undefined4 *)(uVar4 * 0x38 + lVar2);
      if (*(char *)((longlong)puVar7 + 0x21) == '\0') {
        lVar2 = *(longlong *)(puVar7 + 4);
        lVar6 = (local_48 - local_48 * puVar7[0xc]) * lVar2 +
                (longlong)(iVar9 - iVar5 * puVar7[0xd]) * *(longlong *)(puVar7 + 6) +
                *(longlong *)(puVar7 + 2);
        FUN_144e67590(&local_res10,lVar6,iVar8 * lVar2 + lVar6,lVar2,*(undefined1 *)(puVar7 + 8),
                      *(undefined8 *)(puVar7 + 10),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x20),*puVar7,puVar7[1]);
        uVar4 = (ulonglong)((int)uVar4 + 1);
        iVar5 = iStack_44;
      }
      else {
        FUN_144e69620(&local_res10,puVar7[1],(longlong)iVar1);
        uVar4 = (ulonglong)((int)uVar4 + 1);
        iVar5 = iStack_44;
      }
    }
  }
  return;
}



// FUNCTION 144e764b0 FUN_144e764b0 body=79 status=ok
// SIG undefined FUN_144e764b0(void)

undefined8 * FUN_144e764b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::_anon_1BB6D7A5::TileBufferTask::vftable;
  FUN_144e80fc0(param_1[3] + 0x58);
  FUN_144e7f8e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144e76500 FUN_144e76500 body=244 status=ok
// SIG undefined FUN_144e76500(void)

undefined8 *
FUN_144e76500(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,undefined4 param_5,
             undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)
            (*(longlong *)(param_3 + 0x130) +
            ((ulonglong)(longlong)param_4 %
            (ulonglong)(*(longlong *)(param_3 + 0x138) - *(longlong *)(param_3 + 0x130) >> 3)) * 8);
  FUN_144e80ef0(puVar1 + 0xb);
  *(undefined4 *)((longlong)puVar1 + 0x24) = param_5;
  *(undefined4 *)(puVar1 + 5) = param_6;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = param_7;
  *(undefined4 *)(puVar1 + 6) = param_8;
  *puVar1 = 0;
  FUN_144e75dc0(param_2,param_3,param_5,param_6,param_7,param_8,puVar1 + 1,puVar1 + 2);
  puVar2 = (undefined8 *)FUN_14494321d(0x20);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_144e7f890(puVar2,param_1);
    *puVar2 = Imf_3_2::_anon_1BB6D7A5::TileBufferTask::vftable;
    puVar2[2] = param_3;
    puVar2[3] = puVar1;
  }
  return puVar2;
}



// FUNCTION 144e76600 FUN_144e76600 body=368 status=ok
// SIG undefined FUN_144e76600(void)

void FUN_144e76600(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  code *pcVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  size_t _Size;
  void *pvVar4;
  
  _Dst = (void *)*param_1;
  uVar2 = (param_1[2] - (longlong)_Dst) / 0x38;
  if (uVar2 < param_3) {
    if (0x492492492492492 < param_3) {
      FUN_144e758c0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 0x492492492492492;
    if ((uVar2 <= 0x492492492492492 - (uVar2 >> 1)) &&
       (uVar3 = (uVar2 >> 1) + uVar2, uVar3 < param_3)) {
      uVar3 = param_3;
    }
    if (_Dst != (void *)0x0) {
      uVar2 = uVar2 * 0x38;
      pvVar4 = _Dst;
      if (0xfff < uVar2) {
        pvVar4 = *(void **)((longlong)_Dst + -8);
        uVar2 = uVar2 + 0x27;
        if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(pvVar4,uVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    _Dst = (void *)FUN_144e757d0(param_1,uVar3);
    *param_1 = _Dst;
    param_1[1] = _Dst;
    _Size = param_3 * 0x38;
    param_1[2] = (void *)(uVar3 * 0x38 + (longlong)_Dst);
    memmove(_Dst,param_2,_Size);
  }
  else {
    uVar2 = (param_1[1] - (longlong)_Dst) / 0x38;
    if (uVar2 < param_3) {
      memmove(_Dst,param_2,uVar2 * 0x38);
      _Dst = (void *)param_1[1];
      param_2 = (void *)(uVar2 * 0x38 + (longlong)param_2);
      param_3 = param_3 - uVar2;
    }
    _Size = param_3 * 0x38;
    memmove(_Dst,param_2,_Size);
  }
  param_1[1] = _Size + (longlong)_Dst;
  return;
}



// FUNCTION 144e76780 FUN_144e76780 body=371 status=ok
// SIG undefined FUN_144e76780(void)

void FUN_144e76780(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  longlong lVar5;
  
  if (0x1fffffffffffffff < param_2) {
    FUN_144e759b0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar3 = param_1[2] - *param_1 >> 3;
  if ((0x1fffffffffffffff - (uVar3 >> 1) < uVar3) ||
     ((uVar3 = (uVar3 >> 1) + uVar3, uVar4 = param_2, param_2 <= uVar3 &&
      (uVar4 = uVar3, 0x1fffffffffffffff < uVar3)))) {
LAB_144e768e9:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar4 = uVar4 * 8;
  if (uVar4 < 0x1000) {
    if (uVar4 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_14494321d(uVar4);
    }
  }
  else {
    if (uVar4 + 0x27 <= uVar4) goto LAB_144e768e9;
    lVar2 = FUN_14494321d();
    if (lVar2 == 0) goto LAB_144e768e2;
    _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar2;
  }
  memset((void *)((longlong)_Dst + lVar5 * 8),0,(param_2 - lVar5) * 8);
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar5 = *param_1;
  if (lVar5 != 0) {
    uVar3 = param_1[2] - lVar5 & 0xfffffffffffffff8;
    lVar2 = lVar5;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      lVar2 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar2) - 8U) {
LAB_144e768e2:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + param_2 * 8);
  param_1[2] = (longlong)(uVar4 + (longlong)_Dst);
  return;
}



// FUNCTION 144e76900 FUN_144e76900 body=445 status=ok
// SIG undefined FUN_144e76900(void)

undefined8 * FUN_144e76900(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Src;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *_Dst;
  ulonglong uVar6;
  ulonglong uVar7;
  size_t _Size;
  longlong lVar8;
  undefined8 *puVar9;
  
  lVar2 = *param_1;
  lVar8 = (param_1[1] - lVar2) / 0x38;
  if (lVar8 == 0x492492492492492) {
    FUN_144e758c0();
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  uVar1 = lVar8 + 1;
  uVar6 = (param_1[2] - lVar2) / 0x38;
  uVar7 = 0x492492492492492;
  if ((uVar6 <= 0x492492492492492 - (uVar6 >> 1)) && (uVar7 = (uVar6 >> 1) + uVar6, uVar7 < uVar1))
  {
    uVar7 = uVar1;
  }
  puVar5 = (undefined8 *)FUN_144e757d0(param_1,uVar7);
  puVar9 = puVar5 + (((longlong)param_2 - lVar2) / 0x38) * 7;
  uVar4 = param_3[1];
  *puVar9 = *param_3;
  puVar9[1] = uVar4;
  uVar4 = param_3[3];
  puVar9[2] = param_3[2];
  puVar9[3] = uVar4;
  uVar4 = param_3[5];
  puVar9[4] = param_3[4];
  puVar9[5] = uVar4;
  puVar9[6] = param_3[6];
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst = puVar5;
    param_2 = _Src;
  }
  else {
    memmove(puVar5,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst = puVar9 + 7;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar6 = ((param_1[2] - lVar2) / 0x38) * 0x38;
    lVar8 = lVar2;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar8 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar8,uVar6);
  }
  *param_1 = (longlong)puVar5;
  param_1[1] = (longlong)(puVar5 + uVar1 * 7);
  param_1[2] = (longlong)(puVar5 + uVar7 * 7);
  return puVar9;
}



// FUNCTION 144e76ac0 FUN_144e76ac0 body=261 status=ok
// SIG undefined FUN_144e76ac0(void)

undefined8 * FUN_144e76ac0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = Imf_3_2::CompositeDeepScanLine::vftable;
  puVar1 = (undefined8 *)FUN_14494321d(0xc0);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    lVar2 = FUN_14494321d(0x158);
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    *(undefined2 *)(lVar2 + 0x18) = 0x101;
    puVar1[6] = lVar2;
    *(undefined1 *)(puVar1 + 8) = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    *(undefined4 *)(puVar1 + 0xf) = 0x7fffffff;
    *(undefined4 *)((longlong)puVar1 + 0x7c) = 0x7fffffff;
    *(undefined4 *)(puVar1 + 0x10) = 0x80000000;
    *(undefined4 *)((longlong)puVar1 + 0x84) = 0x80000000;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar3 = puVar1;
  }
  param_1[1] = puVar3;
  return param_1;
}



// FUNCTION 144e76bd0 FUN_144e76bd0 body=95 status=ok
// SIG undefined FUN_144e76bd0(void)

void FUN_144e76bd0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  uVar3 = FUN_144e7a770(param_2);
  FUN_144e78430(*(undefined8 *)(param_1 + 8),uVar3);
  lVar1 = *(longlong *)(param_1 + 8);
  puVar2 = *(undefined8 **)(lVar1 + 8);
  if (puVar2 != *(undefined8 **)(lVar1 + 0x10)) {
    *puVar2 = param_2;
    *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + 8;
    return;
  }
  FUN_144e7a320(lVar1,puVar2,local_res10);
  return;
}



// FUNCTION 144e76c30 FUN_144e76c30 body=1486 status=ok
// SIG undefined FUN_144e76c30(void)

void FUN_144e76c30(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  byte ***pppbVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  byte ****ppppbVar10;
  void *_Dst;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  byte ****ppppbVar21;
  bool bVar22;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined1 local_1f4 [4];
  longlong local_1f0;
  longlong local_1e8;
  longlong *local_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [240];
  byte ***local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar18 = *(longlong *)(param_1 + 8);
  plVar16 = (longlong *)(lVar18 + 0x90);
  lVar19 = *(longlong *)(lVar18 + 0x98);
  lVar2 = *plVar16;
  uVar13 = lVar19 - lVar2 >> 5;
  local_1e8 = param_1;
  local_1e0 = param_2;
  if (uVar13 < 4) {
    if (uVar13 < 3) {
      if ((ulonglong)(*(longlong *)(lVar18 + 0xa0) - lVar2 >> 5) < 3) {
        FUN_144e7a1d0(plVar16,3,local_1f4);
      }
      else {
        uVar11 = FUN_144e7a2d0(lVar19,3 - uVar13,plVar16);
        *(undefined8 *)(lVar18 + 0x98) = uVar11;
      }
    }
  }
  else {
    FUN_1486115df(lVar2 + 0x60,lVar19,plVar16);
    *(longlong *)(lVar18 + 0x98) = lVar2 + 0x60;
  }
  puVar15 = &DAT_149bc6280;
  FUN_144b6ebb0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x90),&DAT_149bc6280,1);
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x40) != '\0') {
    puVar15 = &DAT_149bc6278;
  }
  lVar18 = -1;
  do {
    lVar18 = lVar18 + 1;
  } while (puVar15[lVar18] != '\0');
  FUN_144b6ebb0(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 0x20,puVar15);
  FUN_144b6ebb0(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + 0x40,&DAT_1499720c8,1);
  lVar18 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar18 + 0xb0) - *(longlong *)(lVar18 + 0xa8) >> 2 != 0) {
    *(longlong *)(lVar18 + 0xb0) = *(longlong *)(lVar18 + 0xa8);
  }
  FUN_144b72eb0(param_2,&local_1f0);
  plVar16 = (longlong *)FUN_144b72ed0(param_2,local_1d8);
  do {
    lVar18 = 0;
    if (local_1f0 == *plVar16) {
      lVar18 = *(longlong *)(param_1 + 8);
      plVar16 = (longlong *)(lVar18 + 0x30);
      if (plVar16 != param_2) {
        lVar19 = *plVar16;
        cVar1 = *(char *)((longlong)*(longlong **)(lVar19 + 8) + 0x19);
        plVar5 = *(longlong **)(lVar19 + 8);
        while (cVar1 == '\0') {
          FUN_14698d1ae(plVar16,plVar16,plVar5[2]);
          plVar4 = (longlong *)*plVar5;
          thunk_FUN_1400020a8(plVar5,0x158);
          plVar5 = plVar4;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
        }
        *(longlong *)(lVar19 + 8) = lVar19;
        *(longlong *)lVar19 = lVar19;
        *(longlong *)(lVar19 + 0x10) = lVar19;
        *(undefined8 *)(lVar18 + 0x38) = 0;
        uVar11 = FUN_144b6d960(plVar16,*(undefined8 *)(*param_2 + 8),*plVar16);
        *(undefined8 *)(*plVar16 + 8) = uVar11;
        *(longlong *)(lVar18 + 0x38) = param_2[1];
        plVar5 = (longlong *)*plVar16;
        plVar4 = (longlong *)plVar5[1];
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          plVar7 = (longlong *)*plVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar7 + 0x19);
            plVar4 = plVar7;
            plVar7 = (longlong *)*plVar7;
          }
          *plVar5 = (longlong)plVar4;
          lVar18 = *(longlong *)(*plVar16 + 8);
          lVar19 = *(longlong *)(lVar18 + 0x10);
          cVar1 = *(char *)(lVar19 + 0x19);
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*(longlong *)(lVar19 + 0x10) + 0x19);
            lVar18 = lVar19;
            lVar19 = *(longlong *)(lVar19 + 0x10);
          }
          *(longlong *)(*plVar16 + 0x10) = lVar18;
        }
        else {
          *plVar5 = (longlong)plVar5;
          *(longlong *)(*plVar16 + 0x10) = *plVar16;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_218);
    }
    if ((*(int *)(local_1f0 + 0x140) != 1) || (*(int *)(local_1f0 + 0x144) != 1)) {
      FUN_144e47110();
      FUN_1470a639e(local_1c8,1);
      uVar11 = FUN_144e78280(&local_1f0);
      uVar12 = FUN_141302cc4(local_1b8,"X and/or y subsampling factors of \"");
      uVar11 = FUN_141302cc4(uVar12,uVar11);
      FUN_141302cc4(uVar11,"\" channel in framebuffer are not 1");
      FUN_144e40dd0(local_a8,local_1c8);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
    }
    local_c8 = (byte ***)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    lVar19 = -1;
    do {
      lVar19 = lVar19 + 1;
    } while (*(char *)(local_1f0 + 0x20 + lVar19) != '\0');
    FUN_140cd1a74(&local_c8);
    uVar20 = local_b0;
    uVar13 = local_b8;
    ppppbVar21 = (byte ****)local_c8;
    bVar22 = 0xf < local_b0;
    ppppbVar10 = &local_c8;
    if (bVar22) {
      ppppbVar10 = (byte ****)local_c8;
    }
    uVar9 = 0;
    if (local_b8 == 5) {
      do {
        lVar19 = lVar18 + 1;
        if (*(byte *)((longlong)ppppbVar10 + lVar18) != (&DAT_149bc6278)[lVar18]) {
          uVar9 = -(uint)(*(byte *)((longlong)ppppbVar10 + lVar18) < (byte)(&DAT_149bc6278)[lVar18])
                  | 1;
          break;
        }
        lVar18 = lVar19;
      } while (lVar19 != 5);
      if (uVar9 != 0) goto LAB_144e76e82;
      local_1f8 = 1;
      lVar18 = *(longlong *)(param_1 + 8);
      lVar19 = lVar18 + 0xa8;
      puVar14 = *(undefined4 **)(lVar18 + 0xb0);
      if (puVar14 == *(undefined4 **)(lVar18 + 0xb8)) {
LAB_144e76f1a:
        FUN_14694af78(lVar19,puVar14,&local_1f8);
      }
      else {
        *puVar14 = 1;
        *(longlong *)(lVar18 + 0xb0) = *(longlong *)(lVar18 + 0xb0) + 4;
      }
    }
    else {
LAB_144e76e82:
      ppppbVar10 = &local_c8;
      if (bVar22) {
        ppppbVar10 = (byte ****)local_c8;
      }
      uVar9 = 0;
      if (local_b8 == 1) {
        uVar8 = uVar9;
        if (*(byte *)ppppbVar10 != 0x5a) {
          uVar8 = -(uint)(*(byte *)ppppbVar10 < 0x5a) | 1;
        }
        if (uVar8 == 0) {
          local_1f8 = 0;
          lVar18 = *(longlong *)(param_1 + 8);
          lVar19 = lVar18 + 0xa8;
          puVar14 = *(undefined4 **)(lVar18 + 0xb0);
          if (puVar14 == *(undefined4 **)(lVar18 + 0xb8)) goto LAB_144e76f1a;
          *puVar14 = 0;
          *(longlong *)(lVar18 + 0xb0) = *(longlong *)(lVar18 + 0xb0) + 4;
          goto LAB_144e7704e;
        }
      }
      ppppbVar10 = &local_c8;
      if (bVar22) {
        ppppbVar10 = (byte ****)local_c8;
      }
      if (local_b8 == 1) {
        if (*(byte *)ppppbVar10 != 0x41) {
          uVar9 = -(uint)(*(byte *)ppppbVar10 < 0x41) | 1;
        }
        if (uVar9 == 0) {
          local_1f8 = 2;
          lVar18 = *(longlong *)(param_1 + 8);
          lVar19 = lVar18 + 0xa8;
          puVar14 = *(undefined4 **)(lVar18 + 0xb0);
          if (puVar14 == *(undefined4 **)(lVar18 + 0xb8)) goto LAB_144e76f1a;
          *puVar14 = 2;
          *(longlong *)(lVar18 + 0xb0) = *(longlong *)(lVar18 + 0xb0) + 4;
          goto LAB_144e7704e;
        }
      }
      lVar18 = *(longlong *)(param_1 + 8);
      local_1f8 = (undefined4)(*(longlong *)(lVar18 + 0x98) - *(longlong *)(lVar18 + 0x90) >> 5);
      puVar14 = *(undefined4 **)(lVar18 + 0xb0);
      if (puVar14 == *(undefined4 **)(lVar18 + 0xb8)) {
        FUN_14694af78(lVar18 + 0xa8,puVar14,&local_1f8);
      }
      else {
        *puVar14 = local_1f8;
        *(longlong *)(lVar18 + 0xb0) = *(longlong *)(lVar18 + 0xb0) + 4;
      }
      lVar18 = *(longlong *)(param_1 + 8);
      puVar3 = *(undefined8 **)(lVar18 + 0x98);
      if (puVar3 == *(undefined8 **)(lVar18 + 0xa0)) {
        FUN_1470a9b88(lVar18 + 0x90,puVar3,&local_c8);
        param_1 = local_1e8;
        uVar20 = local_b0;
        ppppbVar21 = (byte ****)local_c8;
      }
      else {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        ppppbVar10 = &local_c8;
        if (bVar22) {
          ppppbVar10 = ppppbVar21;
        }
        if (0x7fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_146eb22ad();
        }
        puVar3[3] = 0xf;
        if (uVar13 < 0x10) {
          puVar3[2] = uVar13;
          pppbVar6 = ppppbVar10[1];
          *puVar3 = *ppppbVar10;
          puVar3[1] = pppbVar6;
          *(longlong *)(lVar18 + 0x98) = *(longlong *)(lVar18 + 0x98) + 0x20;
          param_1 = local_1e8;
          param_2 = local_1e0;
        }
        else {
          uVar17 = uVar13 | 0xf;
          if (uVar17 < 0x8000000000000000) {
            if (uVar17 < 0x16) {
              uVar17 = 0x16;
            }
          }
          else {
            uVar17 = 0x7fffffffffffffff;
          }
          _Dst = (void *)FUN_144b659f0(puVar3,uVar17 + 1);
          *puVar3 = _Dst;
          puVar3[2] = uVar13;
          puVar3[3] = uVar17;
          memcpy(_Dst,ppppbVar10,uVar13 + 1);
          *(longlong *)(lVar18 + 0x98) = *(longlong *)(lVar18 + 0x98) + 0x20;
          param_1 = local_1e8;
          param_2 = local_1e0;
        }
      }
    }
LAB_144e7704e:
    if (0xf < uVar20) {
      uVar13 = uVar20 + 1;
      ppppbVar10 = ppppbVar21;
      if (0xfff < uVar13) {
        uVar13 = uVar20 + 0x28;
        ppppbVar10 = (byte ****)ppppbVar21[-1];
        if ((byte *)0x1f < (byte *)((longlong)ppppbVar21 + (-8 - (longlong)ppppbVar10))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(ppppbVar10,uVar13);
    }
    FUN_144b6cdf0(&local_1f0);
    plVar16 = (longlong *)FUN_144b72ed0(param_2,local_1d8);
  } while( true );
}



// FUNCTION 144e77220 FUN_144e77220 body=9 status=ok
// SIG undefined FUN_144e77220(void)

longlong FUN_144e77220(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + 0x30;
}



// FUNCTION 144e77230 FUN_144e77230 body=4003 status=ok
// SIG undefined FUN_144e77230(void)

void FUN_144e77230(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  size_t sVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  void *_Dst;
  longlong *plVar9;
  longlong *plVar10;
  void *pvVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  int local_200;
  int local_1f8;
  undefined1 local_1e8 [4];
  int local_1e4;
  undefined8 *local_1e0;
  longlong local_1d8;
  int local_1d0;
  longlong *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  void *local_1b0;
  longlong *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *puStack_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *puStack_178;
  undefined8 *local_170;
  void *local_168;
  void *pvStack_160;
  void *local_158;
  void *local_150;
  void *local_148;
  void *pvStack_140;
  void *local_138;
  longlong local_130;
  undefined8 uStack_128;
  longlong local_120;
  undefined8 *local_118;
  undefined1 local_110 [8];
  longlong *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *puStack_f0;
  undefined8 *local_e8;
  longlong *local_e0;
  longlong *plStack_d8;
  longlong *local_d0;
  void *local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  plVar10 = *(longlong **)(param_1 + 8);
  puVar21 = (undefined8 *)((plVar10[1] - *plVar10 >> 3) + (plVar10[4] - plVar10[3] >> 3));
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  local_1e4 = param_2;
  local_1d8 = param_1;
  local_1d0 = param_3;
  local_1a0 = puVar21;
  FUN_144e79ad0(&local_130,puVar21);
  local_e0 = (longlong *)0x0;
  plStack_d8 = (longlong *)0x0;
  local_1a8 = (longlong *)0x0;
  local_d0 = (longlong *)0x0;
  if (puVar21 != (undefined8 *)0x0) {
    if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar21) {
      FUN_144e79a30();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar15 = (longlong)puVar21 * 0x18;
    puVar7 = puVar21;
    if (uVar15 < 0x1000) {
      if (uVar15 == 0) {
        plStack_d8 = (longlong *)0x0;
        local_d0 = (longlong *)0x0;
        local_e0 = plStack_d8;
      }
      else {
        plStack_d8 = (longlong *)FUN_14494321d(uVar15);
        local_d0 = plStack_d8 + (longlong)puVar21 * 3;
        local_e0 = plStack_d8;
      }
    }
    else {
      if (uVar15 + 0x27 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar6 = FUN_14494321d();
      if (lVar6 == 0) goto LAB_144e780d8;
      plStack_d8 = (longlong *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      plStack_d8[-1] = lVar6;
      local_d0 = plStack_d8 + (longlong)puVar21 * 3;
      local_e0 = plStack_d8;
    }
    do {
      *plStack_d8 = 0;
      plStack_d8[1] = 0;
      plStack_d8[2] = 0;
      plStack_d8 = plStack_d8 + 3;
      puVar7 = (undefined8 *)((longlong)puVar7 + -1);
    } while (puVar7 != (undefined8 *)0x0);
  }
  plVar10 = local_e0;
  uVar15 = (longlong)puVar21 * 0x18;
  local_198 = (undefined8 *)0x0;
  puStack_190 = (undefined8 *)0x0;
  local_188 = (undefined8 *)0x0;
  local_1c8 = local_e0;
  local_1a8 = local_d0;
  local_108 = plStack_d8;
  if (puVar21 != (undefined8 *)0x0) {
    if ((undefined8 *)0xaaaaaaaaaaaaaaa < puVar21) {
      FUN_144e798b0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar7 = puVar21;
    if (uVar15 < 0x1000) {
      if (uVar15 == 0) {
        puStack_190 = (undefined8 *)0x0;
        local_188 = (undefined8 *)0x0;
        local_198 = puStack_190;
      }
      else {
        puStack_190 = (undefined8 *)FUN_14494321d(uVar15);
        local_188 = puStack_190 + (longlong)puVar21 * 3;
        local_198 = puStack_190;
      }
    }
    else {
      if (uVar15 + 0x27 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar6 = FUN_14494321d();
      if (lVar6 == 0) goto LAB_144e7805f;
      puStack_190 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      puStack_190[-1] = lVar6;
      local_188 = puStack_190 + (longlong)puVar21 * 3;
      local_198 = puStack_190;
    }
    do {
      *puStack_190 = 0;
      puStack_190[1] = 0;
      puStack_190[2] = 0;
      puStack_190 = puStack_190 + 3;
      puVar7 = (undefined8 *)((longlong)puVar7 + -1);
    } while (puVar7 != (undefined8 *)0x0);
  }
  pvVar11 = (void *)0x0;
  local_c8 = (void *)0x0;
  pvStack_c0 = (void *)0x0;
  local_150 = (void *)0x0;
  local_b8 = (void *)0x0;
  if (puVar21 == (undefined8 *)0x0) {
    local_1b0 = (void *)0x0;
  }
  else {
    if ((undefined8 *)0x1fffffffffffffff < puVar21) {
      FUN_144e79ab0();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar15 = (longlong)puVar21 * 8;
    if (uVar15 < 0x1000) {
      if (uVar15 != 0) {
        pvVar11 = (void *)FUN_14494321d(uVar15);
      }
    }
    else {
      if (uVar15 + 0x27 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar6 = FUN_14494321d();
      if (lVar6 == 0) goto LAB_144e77ff4;
      pvVar11 = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)pvVar11 - 8) = lVar6;
    }
    local_150 = (void *)(uVar15 + (longlong)pvVar11);
    local_1b0 = pvVar11;
    local_c8 = pvVar11;
    local_b8 = local_150;
    memset(pvVar11,0,uVar15);
    pvStack_c0 = local_150;
  }
  uVar15 = 0;
  plVar9 = *(longlong **)(param_1 + 8);
  lVar6 = *plVar9;
  local_150 = pvStack_c0;
  if (plVar9[1] - lVar6 >> 3 != 0) {
    do {
      uVar8 = FUN_144e7a770(*(undefined8 *)(lVar6 + uVar15 * 8));
      *(undefined8 *)((longlong)pvVar11 + uVar15 * 8) = uVar8;
      uVar15 = uVar15 + 1;
      plVar9 = *(longlong **)(param_1 + 8);
      lVar6 = *plVar9;
    } while (uVar15 < (ulonglong)(plVar9[1] - lVar6 >> 3));
  }
  pvVar11 = local_1b0;
  uVar12 = 0;
  if (plVar9[4] - plVar9[3] >> 3 != 0) {
    do {
      uVar8 = FUN_14521e8f0(*(undefined8 *)(plVar9[3] + uVar12 * 8));
      *(undefined8 *)((longlong)pvVar11 + uVar12 * 8 + uVar15 * 8) = uVar8;
      uVar12 = uVar12 + 1;
      plVar9 = *(longlong **)(param_1 + 8);
    } while (uVar12 < (ulonglong)(plVar9[4] - plVar9[3] >> 3));
  }
  puVar13 = (undefined8 *)0x0;
  puVar7 = puVar13;
  puVar18 = puVar13;
  if (puVar21 != (undefined8 *)0x0) {
    do {
      local_200 = local_1e4;
      local_208 = *(undefined8 *)((longlong)local_1b0 + (longlong)puVar13 * 8);
      local_1f8 = param_3;
      FUN_144e78750(*(undefined8 *)(param_1 + 8),local_130 + (longlong)puVar7,
                    (longlong)plVar10 + (longlong)puVar18);
      puVar13 = (undefined8 *)((longlong)puVar13 + 1);
      puVar7 = puVar7 + 9;
      puVar18 = puVar18 + 3;
      param_2 = local_1e4;
    } while (puVar13 < puVar21);
  }
  uVar12 = 0;
  plVar9 = *(longlong **)(param_1 + 8);
  lVar6 = *plVar9;
  uVar15 = uVar12;
  if (plVar9[1] - lVar6 >> 3 != 0) {
    do {
      FUN_144e7a780(*(undefined8 *)(lVar6 + uVar12 * 8),local_130 + uVar15);
      FUN_144e7b1a0(*(undefined8 *)(**(longlong **)(param_1 + 8) + uVar12 * 8),param_2,param_3);
      uVar12 = uVar12 + 1;
      plVar9 = *(longlong **)(param_1 + 8);
      lVar6 = *plVar9;
      uVar15 = uVar15 + 0x48;
    } while (uVar12 < (ulonglong)(plVar9[1] - lVar6 >> 3));
  }
  uVar15 = 0;
  if (plVar9[4] - plVar9[3] >> 3 != 0) {
    lVar6 = uVar12 * 0x48;
    do {
      FUN_14521e900(*(undefined8 *)(plVar9[3] + uVar15 * 8),local_130 + lVar6);
      FUN_14521e920(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + uVar15 * 8),
                    param_2,param_3);
      uVar15 = uVar15 + 1;
      lVar6 = lVar6 + 0x48;
      plVar9 = *(longlong **)(param_1 + 8);
    } while (uVar15 < (ulonglong)(plVar9[4] - plVar9[3] >> 3));
  }
  _Dst = (void *)0x0;
  pvVar11 = _Dst;
  if (((int)plVar9[0xf] <= (int)plVar9[0x10]) &&
     (*(int *)((longlong)plVar9 + 0x7c) <= *(int *)((longlong)plVar9 + 0x84))) {
    pvVar11 = (void *)(ulonglong)(uint)((int)plVar9[0x10] - (int)plVar9[0xf]);
  }
  puVar7 = (undefined8 *)((longlong)((param_3 - param_2) + 1) * (longlong)((int)pvVar11 + 1));
  local_168 = (void *)0x0;
  pvStack_160 = (void *)0x0;
  local_158 = (void *)0x0;
  local_118 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    if ((undefined8 *)0x3fffffffffffffff < puVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_148276c94();
    }
    uVar15 = (longlong)puVar7 * 4;
    if (uVar15 < 0x1000) {
      if (uVar15 != 0) {
        _Dst = (void *)FUN_14494321d(uVar15);
      }
    }
    else {
      if (uVar15 + 0x27 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar6 = FUN_14494321d();
      if (lVar6 == 0) goto LAB_144e77f9e;
      _Dst = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar6;
    }
    local_168 = _Dst;
    local_158 = (void *)((longlong)_Dst + uVar15);
    memset(_Dst,0,uVar15);
    pvStack_160 = (void *)((longlong)_Dst + uVar15);
  }
  pvVar11 = (void *)0x0;
  uVar15 = (longlong)puVar7 * 4;
  local_148 = (void *)0x0;
  pvStack_140 = (void *)0x0;
  local_138 = (void *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    if ((undefined8 *)0x3fffffffffffffff < puVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_148276c94();
    }
    if (uVar15 < 0x1000) {
      if (uVar15 != 0) {
        pvVar11 = (void *)FUN_14494321d(uVar15);
      }
    }
    else {
      if (uVar15 + 0x27 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar6 = FUN_14494321d();
      if (lVar6 == 0) goto LAB_144e77f43;
      pvVar11 = (void *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)pvVar11 - 8) = lVar6;
    }
    local_148 = pvVar11;
    local_138 = (void *)((longlong)pvVar11 + uVar15);
    memset(pvVar11,0,uVar15);
    pvStack_140 = (void *)((longlong)pvVar11 + uVar15);
  }
  puVar13 = (undefined8 *)0x0;
  local_1b8 = puVar13;
  puVar18 = puVar13;
  if (puVar7 != (undefined8 *)0x0) {
    do {
      *(int *)((longlong)local_168 + (longlong)puVar18 * 4) = (int)local_1b8;
      *(int *)((longlong)local_148 + (longlong)puVar18 * 4) = (int)local_1b8;
      puVar17 = puVar21;
      plVar9 = plVar10;
      while (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)((longlong)local_168 + (longlong)puVar18 * 4);
        *piVar1 = *piVar1 + *(int *)(*plVar9 + (longlong)puVar18 * 4);
        if (*(int *)(*plVar9 + (longlong)puVar18 * 4) != 0) {
          piVar1 = (int *)((longlong)local_148 + (longlong)puVar18 * 4);
          *piVar1 = *piVar1 + 1;
        }
        plVar9 = plVar9 + 3;
        puVar17 = (undefined8 *)((longlong)puVar17 + -1);
        local_1b8 = puVar17;
      }
      puVar13 = (undefined8 *)
                ((longlong)puVar13 +
                (ulonglong)*(uint *)((longlong)local_168 + (longlong)puVar18 * 4));
      puVar18 = (undefined8 *)((longlong)puVar18 + 1);
    } while (puVar18 < puVar7);
  }
  if ((0 < DAT_14c7966b0) && (DAT_14c7966b0 < (longlong)puVar13)) {
    FUN_144e40d70(local_a8,
                  "Cannot composite scanline: total sample count on scanline exceeds limit set by CompositeDeepScanLine::setMaximumSampleCount()"
                 );
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
  }
  uVar15 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98) -
           *(longlong *)(*(longlong *)(param_1 + 8) + 0x90) >> 5;
  local_f8 = (undefined8 *)0x0;
  puStack_f0 = (undefined8 *)0x0;
  puVar7 = local_1b8;
  local_e8 = local_1b8;
  if (uVar15 != 0) {
    if (0xaaaaaaaaaaaaaaa < uVar15) {
      FUN_148279460();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar12 = uVar15 * 0x18;
    if (uVar12 < 0x1000) {
      puVar18 = local_1b8;
      if (uVar12 != 0) {
        local_1b8 = (undefined8 *)FUN_14494321d(uVar12);
        local_e8 = local_1b8 + uVar15 * 3;
        puVar7 = (undefined8 *)0x0;
        puVar18 = local_1b8;
      }
    }
    else {
      if (uVar12 + 0x27 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar6 = FUN_14494321d();
      if (lVar6 == 0) goto LAB_144e77eeb;
      local_1b8 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      local_1b8[-1] = lVar6;
      local_e8 = local_1b8 + uVar15 * 3;
      puVar7 = (undefined8 *)0x0;
      puVar18 = local_1b8;
    }
    do {
      local_f8 = puVar18;
      *local_1b8 = puVar7;
      local_1b8[1] = puVar7;
      local_1b8[2] = puVar7;
      local_1b8 = local_1b8 + 3;
      uVar15 = uVar15 - 1;
      puStack_f0 = local_1b8;
      puVar18 = local_f8;
    } while (uVar15 != 0);
  }
  puVar18 = local_f8;
  lVar6 = *(longlong *)(param_1 + 8);
  local_1e0 = local_f8;
  local_1c0 = puStack_f0;
  local_1b8 = local_e8;
  if (*(longlong *)(lVar6 + 0x98) - *(longlong *)(lVar6 + 0x90) >> 5 != 0) {
    do {
      if ((puVar7 != (undefined8 *)&DAT_00000001) || (*(char *)(lVar6 + 0x40) != '\0')) {
        plVar10 = puVar18 + (longlong)puVar7 * 3;
        pvVar11 = (void *)plVar10[1];
        lVar6 = *plVar10;
        puVar21 = (undefined8 *)((longlong)pvVar11 - lVar6 >> 2);
        if (puVar13 < puVar21) {
          pvVar11 = (void *)(lVar6 + (longlong)puVar13 * 4);
LAB_144e77a73:
          plVar10[1] = (longlong)pvVar11;
          param_1 = local_1d8;
        }
        else {
          param_1 = local_1d8;
          if (puVar21 < puVar13) {
            if (puVar13 <= (undefined8 *)(plVar10[2] - lVar6 >> 2)) {
              sVar2 = ((longlong)puVar13 - (longlong)puVar21) * 4;
              memset(pvVar11,0,sVar2);
              pvVar11 = (void *)((longlong)pvVar11 + sVar2);
              goto LAB_144e77a73;
            }
            FUN_148279338(plVar10,puVar13,local_1e8);
            param_1 = local_1d8;
          }
        }
      }
      puVar7 = (undefined8 *)((longlong)puVar7 + 1);
      lVar6 = *(longlong *)(param_1 + 8);
    } while (puVar7 < (undefined8 *)(*(longlong *)(lVar6 + 0x98) - *(longlong *)(lVar6 + 0x90) >> 5)
            );
    puVar7 = (undefined8 *)0x0;
    puVar21 = local_1a0;
  }
  lVar6 = ((longlong)local_1c0 - (longlong)local_1e0) / 6 +
          ((longlong)local_1c0 - (longlong)local_1e0 >> 0x3f);
  puVar18 = (undefined8 *)((lVar6 >> 2) - (lVar6 >> 0x3f));
  puVar17 = local_1e0;
  puVar16 = puVar7;
  puVar22 = puVar7;
  local_1a0 = puVar7;
  local_100 = puVar18;
  if (puVar18 != (undefined8 *)0x0) {
    do {
      puVar20 = puVar22;
      if ((puVar22 != (undefined8 *)&DAT_00000001) ||
         (puVar7 = puVar16, *(char *)(*(longlong *)(param_1 + 8) + 0x40) != '\0')) {
        plVar10 = puVar17 + (longlong)puVar22 * 3;
        pvVar11 = (void *)plVar10[1];
        lVar6 = *plVar10;
        puVar7 = (undefined8 *)((longlong)pvVar11 - lVar6 >> 2);
        local_1a0 = puVar22;
        if (puVar13 < puVar7) {
          pvVar11 = (void *)(lVar6 + (longlong)puVar13 * 4);
LAB_144e77b78:
          plVar10[1] = (longlong)pvVar11;
        }
        else if (puVar7 < puVar13) {
          if (puVar13 <= (undefined8 *)(plVar10[2] - lVar6 >> 2)) {
            sVar2 = ((longlong)puVar13 - (longlong)puVar7) * 4;
            memset(pvVar11,0,sVar2);
            pvVar11 = (void *)((longlong)pvVar11 + sVar2);
            puVar16 = (undefined8 *)0x0;
            puVar18 = local_100;
            goto LAB_144e77b78;
          }
          FUN_148279338(plVar10,puVar13,local_1e8);
          puVar16 = (undefined8 *)0x0;
        }
        puVar17 = local_1e0;
        puVar7 = puVar16;
        puVar19 = puVar16;
        param_1 = local_1d8;
        if (local_118 != (undefined8 *)0x0) {
          do {
            puVar20 = puVar7;
            if (puVar21 != (undefined8 *)0x0) {
              do {
                if ((longlong)puVar13 <= (longlong)puVar16) break;
                *(longlong *)
                 (*(longlong *)
                   ((longlong)puVar22 * 0x18 + *(longlong *)((longlong)puVar7 + (longlong)local_198)
                   ) + (longlong)puVar19 * 8) = *plVar10 + (longlong)puVar16 * 4;
                puVar16 = (undefined8 *)
                          ((longlong)puVar16 +
                          (ulonglong)
                          *(uint *)(*(longlong *)((longlong)puVar7 + (longlong)local_1c8) +
                                   (longlong)puVar19 * 4));
                puVar20 = (undefined8 *)((longlong)puVar20 + 1);
                puVar7 = puVar7 + 3;
              } while (puVar20 < puVar21);
              puVar7 = (undefined8 *)0x0;
            }
            puVar19 = (undefined8 *)((longlong)puVar19 + 1);
            puVar20 = local_1a0;
          } while (puVar19 < local_118);
        }
      }
      puVar22 = (undefined8 *)((longlong)puVar20 + 1);
      puVar16 = puVar7;
      local_1a0 = puVar22;
    } while (puVar22 < puVar18);
  }
  puVar21 = local_1c0;
  iVar5 = local_1d0;
  iVar4 = local_1e4;
  plVar10 = *(longlong **)(param_1 + 8);
  lVar6 = *plVar10;
  if (plVar10[1] - lVar6 >> 3 != 0) {
    do {
      FUN_144e7af00(*(undefined8 *)(lVar6 + (longlong)puVar7 * 8));
      puVar7 = (undefined8 *)((longlong)puVar7 + 1);
      plVar10 = *(longlong **)(param_1 + 8);
      lVar6 = *plVar10;
    } while (puVar7 < (undefined8 *)(plVar10[1] - lVar6 >> 3));
  }
  uVar15 = 0;
  if (plVar10[4] - plVar10[3] >> 3 != 0) {
    do {
      FUN_14521e910(*(undefined8 *)(plVar10[3] + uVar15 * 8));
      uVar15 = uVar15 + 1;
      plVar10 = *(longlong **)(param_1 + 8);
    } while (uVar15 < (ulonglong)(plVar10[4] - plVar10[3] >> 3));
  }
  uVar15 = plVar10[0x13] - plVar10[0x12] >> 5;
  local_180 = (undefined8 *)0x0;
  puStack_178 = (undefined8 *)0x0;
  local_170 = (undefined8 *)0x0;
  if (uVar15 != 0) {
    if (0x1fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_144e59d20();
    }
    uVar12 = uVar15 * 8;
    if (uVar12 < 0x1000) {
      if (uVar12 == 0) {
        local_180 = (undefined8 *)0x0;
      }
      else {
        local_180 = (undefined8 *)FUN_14494321d(uVar12);
      }
    }
    else {
      if (uVar12 + 0x27 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar6 = FUN_14494321d();
      if (lVar6 == 0) goto LAB_144e77e67;
      local_180 = (undefined8 *)(lVar6 + 0x27U & 0xffffffffffffffe0);
      local_180[-1] = lVar6;
    }
    puVar7 = local_180 + uVar15;
    local_170 = puVar7;
    memset(local_180,0,uVar12);
    puStack_178 = puVar7;
  }
  uVar15 = 0;
  if ((longlong)puStack_178 - (longlong)local_180 >> 3 != 0) {
    lVar6 = 0;
    do {
      puVar7 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x90) + lVar6);
      if (0xf < (ulonglong)puVar7[3]) {
        puVar7 = (undefined8 *)*puVar7;
      }
      local_180[uVar15] = puVar7;
      uVar15 = uVar15 + 1;
      lVar6 = lVar6 + 0x20;
    } while (uVar15 < (ulonglong)((longlong)puStack_178 - (longlong)local_180 >> 3));
  }
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x40) == '\0') {
    local_180[1] = *local_180;
  }
  FUN_144e7f920(local_110);
  for (iVar14 = iVar4; iVar14 <= iVar5; iVar14 = iVar14 + 1) {
    puVar21 = (undefined8 *)FUN_14494321d(0x40);
    local_100 = puVar21;
    if (puVar21 == (undefined8 *)0x0) {
      puVar21 = (undefined8 *)0x0;
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 8);
      FUN_144e7f890(puVar21,local_110);
      *puVar21 = Imf_3_2::_anon_EA21EA4D::LineCompositeTask::vftable;
      puVar21[2] = uVar8;
      *(int *)(puVar21 + 3) = iVar14;
      *(int *)((longlong)puVar21 + 0x1c) = iVar4;
      puVar21[4] = &local_180;
      puVar21[5] = &local_198;
      puVar21[6] = &local_168;
      puVar21[7] = &local_148;
    }
    FUN_144e7f670(puVar21);
    puVar21 = local_1c0;
  }
  FUN_144e7f970(local_110);
  if (local_180 != (undefined8 *)0x0) {
    uVar15 = ((longlong)local_170 - (longlong)local_180 >> 3) * 8;
    puVar7 = local_180;
    if (0xfff < uVar15) {
      uVar15 = uVar15 + 0x27;
      puVar7 = (undefined8 *)local_180[-1];
      if (0x1f < (ulonglong)((longlong)local_180 + (-8 - (longlong)puVar7))) {
LAB_144e77e67:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(puVar7,uVar15);
    local_180 = (undefined8 *)0x0;
    puStack_178 = (undefined8 *)0x0;
    local_170 = (undefined8 *)0x0;
  }
  puVar7 = local_1e0;
  if (local_1e0 != (undefined8 *)0x0) {
    FUN_144e79e40(local_1e0,puVar21,&local_f8);
    uVar15 = (((longlong)local_1b8 - (longlong)puVar7) / 0x18) * 0x18;
    puVar21 = puVar7;
    if (0xfff < uVar15) {
      uVar15 = uVar15 + 0x27;
      puVar21 = (undefined8 *)puVar7[-1];
      if ((undefined1 *)0x1f < (undefined1 *)((longlong)puVar7 + (-8 - (longlong)puVar21))) {
LAB_144e77eeb:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(puVar21,uVar15);
  }
  if (local_148 != (void *)0x0) {
    uVar15 = ((longlong)local_138 - (longlong)local_148 >> 2) * 4;
    pvVar11 = local_148;
    if (0xfff < uVar15) {
      uVar15 = uVar15 + 0x27;
      pvVar11 = *(void **)((longlong)local_148 + -8);
      if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)pvVar11))) {
LAB_144e77f43:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar15);
    local_148 = (void *)0x0;
    pvStack_140 = (void *)0x0;
    local_138 = (void *)0x0;
  }
  if (local_168 != (void *)0x0) {
    uVar15 = ((longlong)local_158 - (longlong)local_168 >> 2) * 4;
    pvVar11 = local_168;
    if (0xfff < uVar15) {
      uVar15 = uVar15 + 0x27;
      pvVar11 = *(void **)((longlong)local_168 + -8);
      if (0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)pvVar11))) {
LAB_144e77f9e:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar15);
    local_168 = (void *)0x0;
    pvStack_160 = (void *)0x0;
    local_158 = (void *)0x0;
  }
  if (local_1b0 != (void *)0x0) {
    uVar15 = ((longlong)local_150 - (longlong)local_1b0 >> 3) * 8;
    pvVar11 = local_1b0;
    if (0xfff < uVar15) {
      uVar15 = uVar15 + 0x27;
      pvVar11 = *(void **)((longlong)local_1b0 + -8);
      if (0x1f < (ulonglong)((longlong)local_1b0 + (-8 - (longlong)pvVar11))) {
LAB_144e77ff4:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar15);
  }
  if (local_198 != (undefined8 *)0x0) {
    FUN_144e79d70(local_198,puStack_190,&local_198);
    uVar15 = (((longlong)local_188 - (longlong)local_198) / 0x18) * 0x18;
    puVar21 = local_198;
    if (0xfff < uVar15) {
      uVar15 = uVar15 + 0x27;
      puVar21 = (undefined8 *)local_198[-1];
      if (0x1f < (ulonglong)((longlong)local_198 + (-8 - (longlong)puVar21))) {
LAB_144e7805f:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(puVar21,uVar15);
    local_198 = (undefined8 *)0x0;
    puStack_190 = (undefined8 *)0x0;
    local_188 = (undefined8 *)0x0;
  }
  plVar10 = local_1c8;
  if (local_1c8 != (longlong *)0x0) {
    FUN_144e79c60(local_1c8,local_108,&local_e0);
    uVar15 = (((longlong)local_1a8 - (longlong)plVar10) / 0x18) * 0x18;
    plVar9 = plVar10;
    if (0xfff < uVar15) {
      uVar15 = uVar15 + 0x27;
      plVar9 = (longlong *)plVar10[-1];
      if (0x1f < (ulonglong)((longlong)plVar10 + (-8 - (longlong)plVar9))) {
LAB_144e780d8:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(plVar9,uVar15);
  }
  if (local_130 != 0) {
    FUN_144e79cf0(local_130,uStack_128,&local_130);
    uVar15 = ((local_120 - local_130) / 0x48) * 0x48;
    lVar6 = local_130;
    if (0xfff < uVar15) {
      uVar15 = uVar15 + 0x27;
      lVar6 = *(longlong *)(local_130 + -8);
      if (0x1f < (local_130 - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar6,uVar15);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_228);
}



// FUNCTION 144e78210 FUN_144e78210 body=98 status=ok
// SIG undefined FUN_144e78210(void)

undefined8 * FUN_144e78210(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  *param_1 = Imf_3_2::CompositeDeepScanLine::vftable;
  if (lVar1 != 0) {
    FUN_144e78c90(lVar1);
    thunk_FUN_1400020a8(lVar1,0xc0);
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e78280 FUN_144e78280 body=8 status=ok
// SIG undefined FUN_144e78280(void)

longlong FUN_144e78280(longlong *param_1)

{
  return *param_1 + 0x20;
}



// FUNCTION 144e78290 FUN_144e78290 body=92 status=ok
// SIG undefined FUN_144e78290(void)

void FUN_144e78290(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_144e7a4d0(param_1,param_1,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    thunk_FUN_1400020a8(plVar3,0x160);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_1400020a8(*param_1,0x160);
  return;
}



// FUNCTION 144e782f0 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_Parallelism_allocator<unsigned __int64>::deallocate(unsigned __int64
   * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct CHN * __ptr64>::deallocate(struct CHN * __ptr64 *
   __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<8,class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > >(class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const ,struct
   TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct
   `void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
     16 names - too many to list
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 8;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e78340 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
// SIG undefined FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e783a0 FUN_144e783a0 body=16 status=ok
// SIG undefined FUN_144e783a0(void)

void FUN_144e783a0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e783c0 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
// SIG undefined FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e78430 FUN_144e78430 body=754 status=ok
// SIG undefined FUN_144e78430(void)

void FUN_144e78430(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int ****ppppiVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined1 local_c0 [8];
  int ***local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar1 = false;
  bVar2 = false;
  uVar3 = FUN_144b67b80(param_2);
  FUN_144b65f20(uVar3,&local_c8);
  uVar3 = FUN_144b67b80(param_2);
  plVar4 = (longlong *)FUN_144b65f40(uVar3,local_c0);
  if (local_c8 == *plVar4) {
LAB_144e786fc:
    FUN_144e40d70(local_98,"Deep data provided to CompositeDeepScanLine is missing a Z channel");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
  }
  do {
    local_a8 = 0;
    local_b8 = (int ***)0x0;
    uStack_b0 = 0;
    local_a0 = 0;
    lVar10 = -1;
    do {
      lVar10 = lVar10 + 1;
    } while (*(char *)(local_c8 + 0x1c + lVar10) != '\0');
    FUN_140cd1a74(&local_b8);
    ppppiVar5 = &local_b8;
    if (0xf < local_a0) {
      ppppiVar5 = (int ****)local_b8;
    }
    if (((local_a8 == 5) && (*(int *)ppppiVar5 == 0x6361425a)) &&
       (*(char *)((longlong)ppppiVar5 + 4) == 'k')) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      ppppiVar5 = &local_b8;
      if (0xf < local_a0) {
        ppppiVar5 = (int ****)local_b8;
      }
      if ((local_a8 == 1) && (*(char *)ppppiVar5 == 'Z')) {
        bVar1 = true;
      }
      else {
        ppppiVar5 = &local_b8;
        if (0xf < local_a0) {
          ppppiVar5 = (int ****)local_b8;
        }
        if ((local_a8 == 1) && (*(char *)ppppiVar5 == 'A')) {
          bVar2 = true;
        }
      }
    }
    if (0xf < local_a0) {
      uVar9 = local_a0 + 1;
      ppppiVar5 = (int ****)local_b8;
      if (0xfff < uVar9) {
        ppppiVar5 = (int ****)local_b8[-1];
        uVar9 = local_a0 + 0x28;
        if ((char *)0x1f < (char *)((longlong)local_b8 + (-8 - (longlong)ppppiVar5))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(ppppiVar5,uVar9);
    }
    FUN_144b663b0(&local_c8);
    uVar3 = FUN_144b67b80(param_2);
    plVar4 = (longlong *)FUN_144b65f40(uVar3,local_c0);
  } while (local_c8 != *plVar4);
  if (!bVar1) goto LAB_144e786fc;
  if (!bVar2) {
    FUN_144e40d70(local_98,"Deep data provided to CompositeDeepScanLine is missing an alpha channel"
                 );
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
  }
  if ((param_1[4] - param_1[3] & 0xfffffffffffffff8U) == 0) {
    if ((param_1[1] - *param_1 & 0xfffffffffffffff8U) == 0) {
      puVar6 = (undefined4 *)FUN_144b67b20(param_2);
      *(undefined4 *)(param_1 + 0xf) = *puVar6;
      *(undefined4 *)((longlong)param_1 + 0x7c) = puVar6[1];
      *(undefined4 *)(param_1 + 0x10) = puVar6[2];
      *(undefined4 *)((longlong)param_1 + 0x84) = puVar6[3];
      goto LAB_144e78612;
    }
    uVar3 = FUN_144e7a770(*(undefined8 *)*param_1);
  }
  else {
    uVar3 = FUN_14521e8f0(*(undefined8 *)param_1[3]);
  }
  piVar7 = (int *)FUN_144b67ae0(param_2);
  piVar8 = (int *)FUN_144b67ae0(uVar3);
  if ((((*piVar8 != *piVar7) || (piVar8[1] != piVar7[1])) || (piVar8[2] != piVar7[2])) ||
     (piVar8[3] != piVar7[3])) {
    FUN_144e40d70(local_98,
                  "Deep data provided to CompositeDeepScanLine has a different displayWindow to previously provided data"
                 );
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
  }
  piVar7 = (int *)FUN_144b67b20(param_2);
  if (*piVar7 < (int)param_1[0xf]) {
    *(int *)(param_1 + 0xf) = *piVar7;
  }
  if ((int)param_1[0x10] < piVar7[2]) {
    *(int *)(param_1 + 0x10) = piVar7[2];
  }
  if (piVar7[1] < *(int *)((longlong)param_1 + 0x7c)) {
    *(int *)((longlong)param_1 + 0x7c) = piVar7[1];
  }
  if (*(int *)((longlong)param_1 + 0x84) < piVar7[3]) {
    *(int *)((longlong)param_1 + 0x84) = piVar7[3];
  }
LAB_144e78612:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_e8);
}



// FUNCTION 144e78750 FUN_144e78750 body=1331 status=ok
// SIG undefined FUN_144e78750(void)

void FUN_144e78750(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  size_t sVar1;
  undefined8 uVar2;
  longlong *plVar3;
  void *pvVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar15;
  undefined4 uVar17;
  undefined8 uVar16;
  ulonglong in_stack_ffffffffffffff38;
  undefined1 local_a0 [8];
  undefined1 local_98 [88];
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  lVar14 = 0;
  if ((*(int *)(param_1 + 0x80) < *(int *)(param_1 + 0x78)) ||
     (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x7c))) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x78);
  }
  puVar10 = (undefined8 *)param_4[1];
  lVar13 = *param_4;
  lVar6 = (longlong)(iVar5 + 1);
  uVar9 = ((param_7 - param_6) + 1) * lVar6;
  uVar12 = *(longlong *)(param_1 + 0x98) - *(longlong *)(param_1 + 0x90) >> 5;
  lVar8 = ((longlong)puVar10 - lVar13) / 6 + ((longlong)puVar10 - lVar13 >> 0x3f);
  uVar11 = (lVar8 >> 2) - (lVar8 >> 0x3f);
  if (uVar12 < uVar11) {
    lVar13 = lVar13 + uVar12 * 0x18;
    FUN_144e79ee0(lVar13,puVar10,param_4);
    param_4[1] = lVar13;
  }
  else if (uVar11 < uVar12) {
    if ((ulonglong)((param_4[2] - lVar13) / 0x18) < uVar12) {
      FUN_144e79f70(param_4,uVar12,&param_7);
    }
    else {
      for (lVar13 = uVar12 - uVar11; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
        puVar10 = puVar10 + 3;
      }
      FUN_144e79ee0(puVar10,puVar10,param_4);
      param_4[1] = (longlong)puVar10;
    }
  }
  pvVar4 = (void *)param_3[1];
  lVar13 = *param_3;
  uVar11 = (longlong)pvVar4 - lVar13 >> 2;
  if (uVar9 < uVar11) {
    pvVar4 = (void *)(lVar13 + uVar9 * 4);
  }
  else {
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) goto LAB_144e788fd;
    uVar12 = param_3[2] - lVar13 >> 2;
    if (uVar12 <= uVar9 && uVar9 - uVar12 != 0) {
      FUN_1482987b2(param_3,uVar9,&param_7);
      goto LAB_144e788fd;
    }
    sVar1 = (uVar9 - uVar11) * 4;
    memset(pvVar4,0,sVar1);
    pvVar4 = (void *)((longlong)pvVar4 + sVar1);
  }
  param_3[1] = (longlong)pvVar4;
LAB_144e788fd:
  uVar17 = 0;
  lVar8 = param_6 * lVar6;
  uVar2 = FUN_144b72800(local_98,0,*param_3 + (*(int *)(param_1 + 0x78) + lVar8) * -4,4,lVar6 * 4,
                        CONCAT44(uVar15,1),1,0,in_stack_ffffffffffffff38 & 0xffffffffffffff00,0);
  FUN_14521e5e0(param_2,uVar2);
  FUN_144e78f20(*param_4,uVar9);
  lVar13 = lVar6 * 8;
  uVar16 = CONCAT44(uVar17,1);
  uVar2 = FUN_14521e2a0(local_98,2,*(longlong *)*param_4 + (*(int *)(param_1 + 0x78) + lVar8) * -8,8
                        ,lVar13,4,1,uVar16,0,0,0);
  uVar15 = (undefined4)((ulonglong)uVar16 >> 0x20);
  FUN_14521e310(param_2,&DAT_149bc6280,uVar2);
  if (*(char *)(param_1 + 0x40) != '\0') {
    FUN_144e78f20(*param_4 + 0x18,uVar9);
    uVar16 = CONCAT44(uVar15,1);
    uVar2 = FUN_14521e2a0(local_98,2,
                          *(longlong *)(*param_4 + 0x18) + (*(int *)(param_1 + 0x78) + lVar8) * -8,8
                          ,lVar13,4,1,uVar16,0,0,0);
    uVar15 = (undefined4)((ulonglong)uVar16 >> 0x20);
    FUN_14521e310(param_2,&DAT_149bc6278,uVar2);
  }
  FUN_144e78f20(*param_4 + 0x30,uVar9);
  uVar2 = FUN_14521e2a0(local_98,2,
                        *(longlong *)(*param_4 + 0x30) + (*(int *)(param_1 + 0x78) + lVar8) * -8,8,
                        lVar13,4,1,CONCAT44(uVar15,1),0,0,0);
  FUN_14521e310(param_2,&DAT_1499720c8,uVar2);
  plVar3 = (longlong *)FUN_144b72ea0(param_1 + 0x30,&local_res18);
  lVar13 = *plVar3;
  local_res18 = lVar13;
  plVar3 = (longlong *)FUN_144b72ec0(param_1 + 0x30,local_a0);
  if (lVar13 != *plVar3) {
    do {
      iVar5 = *(int *)(lVar14 + *(longlong *)(param_1 + 0xa8));
      lVar7 = (longlong)iVar5;
      if (2 < iVar5) {
        local_res20 = lVar7 * 3;
        pvVar4 = *(void **)(*param_4 + 8 + lVar7 * 0x18);
        plVar3 = (longlong *)(*param_4 + lVar7 * 0x18);
        lVar7 = *plVar3;
        uVar11 = (longlong)pvVar4 - lVar7 >> 3;
        if (uVar9 < uVar11) {
          pvVar4 = (void *)(lVar7 + uVar9 * 8);
LAB_144e78baf:
          plVar3[1] = (longlong)pvVar4;
        }
        else if (uVar9 - uVar11 != 0) {
          uVar12 = plVar3[2] - lVar7 >> 3;
          if (uVar9 < uVar12 || uVar9 - uVar12 == 0) {
            sVar1 = (uVar9 - uVar11) * 8;
            memset(pvVar4,0,sVar1);
            pvVar4 = (void *)((longlong)pvVar4 + sVar1);
            goto LAB_144e78baf;
          }
          FUN_1482791b2(plVar3,uVar9,&param_6);
        }
        uVar2 = FUN_14521e2a0(local_98,2,
                              *(longlong *)(*param_4 + local_res20 * 8) +
                              (*(int *)(param_1 + 0x78) + lVar8) * -8,8,lVar6 * 8,4,1,1,0,0,0);
        FUN_14521e310(param_2,lVar13 + 0x20,uVar2);
      }
      lVar14 = lVar14 + 4;
      FUN_144b6cdf0(&local_res18);
      plVar3 = (longlong *)FUN_144b72ec0(param_1 + 0x30,local_a0);
      lVar13 = local_res18;
    } while (local_res18 != *plVar3);
  }
  return;
}



// FUNCTION 144e78c90 FUN_144e78c90 body=442 status=ok
// SIG undefined FUN_144e78c90(void)

void FUN_144e78c90(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar2 = param_1[0x15];
  if (lVar2 != 0) {
    uVar6 = param_1[0x17] - lVar2 & 0xfffffffffffffffc;
    lVar5 = lVar2;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar2 + -8);
      uVar6 = uVar6 + 0x27;
      if (0x1f < (lVar2 - lVar5) - 8U) goto LAB_144e78e44;
    }
    thunk_FUN_1400020a8(lVar5,uVar6);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
  }
  FUN_144e56030(param_1 + 0x12);
  lVar2 = param_1[0xc];
  if (lVar2 != 0) {
    uVar6 = param_1[0xe] - lVar2 & 0xfffffffffffffffc;
    lVar5 = lVar2;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar2 + -8);
      uVar6 = uVar6 + 0x27;
      if (0x1f < (lVar2 - lVar5) - 8U) goto LAB_144e78e44;
    }
    thunk_FUN_1400020a8(lVar5,uVar6);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  FUN_148279472(param_1 + 9);
  cVar1 = *(char *)((longlong)*(longlong **)(param_1[6] + 8) + 0x19);
  plVar4 = *(longlong **)(param_1[6] + 8);
  while (cVar1 == '\0') {
    FUN_14698d1ae(param_1 + 6,param_1 + 6,plVar4[2]);
    plVar3 = (longlong *)*plVar4;
    thunk_FUN_1400020a8(plVar4,0x158);
    plVar4 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  thunk_FUN_1400020a8(param_1[6],0x158);
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    uVar6 = param_1[5] - lVar2 & 0xfffffffffffffff8;
    lVar5 = lVar2;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar2 + -8);
      uVar6 = uVar6 + 0x27;
      if (0x1f < (lVar2 - lVar5) - 8U) goto LAB_144e78e44;
    }
    thunk_FUN_1400020a8(lVar5,uVar6);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar6 = param_1[2] - lVar2 & 0xfffffffffffffff8;
    lVar5 = lVar2;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar2 + -8);
      uVar6 = uVar6 + 0x27;
      if (0x1f < (lVar2 - lVar5) - 8U) {
LAB_144e78e44:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar5,uVar6);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e78e50 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::allocator<struct `protected: int __cdecl GSI1::readHash(unsigned
   short,long,long) __ptr64'::`2'::FileSymbolInfo>::deallocate(struct `protected: int __cdecl
   GSI1::readHash(unsigned short,long,long) __ptr64'::`2'::FileSymbolInfo * __ptr64 const,unsigned
   __int64) __ptr64
    public: void __cdecl std::allocator<struct GSISymbolEntry>::deallocate(struct GSISymbolEntry *
   __ptr64 const,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 0x18;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e78ea0 FUN_144e78ea0 body=16 status=ok
// SIG undefined FUN_144e78ea0(void)

void FUN_144e78ea0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e78ec0 FUN_144e78ec0 body=91 status=ok
// SIG undefined FUN_144e78ec0(void)

void FUN_144e78ec0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e78f20 FUN_144e78f20 body=148 status=ok
// SIG undefined FUN_144e78f20(void)

void FUN_144e78f20(longlong *param_1,ulonglong param_2)

{
  size_t _Size;
  void *_Dst;
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_res8 [8];
  
  _Dst = (void *)param_1[1];
  lVar1 = *param_1;
  uVar2 = (longlong)_Dst - lVar1 >> 3;
  if (param_2 < uVar2) {
    param_1[1] = lVar1 + param_2 * 8;
    return;
  }
  if (uVar2 < param_2) {
    if ((ulonglong)(param_1[2] - lVar1 >> 3) < param_2) {
      FUN_1482791b2(param_1,param_2,local_res8);
      return;
    }
    _Size = (param_2 - uVar2) * 8;
    memset(_Dst,0,_Size);
    param_1[1] = (longlong)(_Size + (longlong)_Dst);
  }
  return;
}



// FUNCTION 144e78fc0 FUN_144e78fc0 body=55 status=ok
// SIG undefined FUN_144e78fc0(void)

void FUN_144e78fc0(longlong param_1)

{
  FUN_144e79040(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
                *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                *(undefined8 *)(param_1 + 0x38));
  return;
}



// FUNCTION 144e79000 FUN_144e79000 body=62 status=ok
// SIG undefined FUN_144e79000(void)

undefined8 * FUN_144e79000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::_anon_EA21EA4D::LineCompositeTask::vftable;
  FUN_144e7f8e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144e79040 FUN_144e79040 body=1660 status=ok
// SIG undefined FUN_144e79040(void)

void FUN_144e79040(int param_1,int param_2,longlong param_3,longlong *param_4,undefined8 *param_5,
                  longlong *param_6,longlong *param_7)

{
  ulonglong _Size;
  code *pcVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  void *_Dst;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int local_c8;
  undefined8 *local_c0;
  longlong local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  void *local_70;
  void *pvStack_68;
  void *local_60;
  undefined1 local_58 [8];
  undefined8 *local_50;
  undefined8 *puStack_48;
  undefined8 *local_40;
  
  uVar8 = param_4[1] - *param_4 >> 3;
  local_70 = (void *)0x0;
  pvStack_68 = (void *)0x0;
  local_60 = (void *)0x0;
  if (uVar8 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    if (0x3fffffffffffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_148279158();
    }
    uVar8 = uVar8 * 4;
    if (uVar8 < 0x1000) {
      if (uVar8 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_14494321d(uVar8);
      }
    }
    else {
      if (uVar8 + 0x27 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar4 = FUN_14494321d();
      if (lVar4 == 0) goto LAB_144e7967c;
      _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar4;
    }
    local_70 = _Dst;
    local_60 = (void *)(uVar8 + (longlong)_Dst);
    memset(_Dst,0,uVar8);
    pvStack_68 = (void *)(uVar8 + (longlong)_Dst);
  }
  pvVar11 = pvStack_68;
  uVar8 = param_4[1] - *param_4 >> 3;
  local_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  local_40 = (undefined8 *)0x0;
  local_c0 = (undefined8 *)0x0;
  if (uVar8 == 0) {
    local_98 = (undefined8 *)0x0;
  }
  else {
    if (0x1fffffffffffffff < uVar8) {
      FUN_144e797f0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    _Size = uVar8 * 8;
    if (_Size < 0x1000) {
      if (_Size == 0) {
        local_c0 = (undefined8 *)0x0;
      }
      else {
        local_c0 = (undefined8 *)FUN_14494321d(_Size);
      }
    }
    else {
      if (_Size + 0x27 <= _Size) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar4 = FUN_14494321d();
      if (lVar4 == 0) goto LAB_144e7963f;
      local_c0 = (undefined8 *)(lVar4 + 0x27U & 0xffffffffffffffe0);
      local_c0[-1] = lVar4;
    }
    local_a8 = local_c0 + uVar8;
    local_98 = local_c0;
    local_50 = local_c0;
    local_40 = local_a8;
    memset(local_c0,0,_Size);
    puStack_48 = local_a8;
  }
  local_a8 = puStack_48;
  FUN_14521d570(&local_78);
  local_a0 = &local_78;
  if (*(longlong **)(param_3 + 0x88) != (longlong *)0x0) {
    local_a0 = *(longlong **)(param_3 + 0x88);
  }
  local_c8 = *(int *)(param_3 + 0x78);
  lVar4 = (longlong)local_c8;
  puVar15 = local_c0;
  if (local_c8 <= *(int *)(param_3 + 0x80)) {
    lVar5 = (longlong)(((*(int *)(param_3 + 0x80) - local_c8) + 1) * (param_1 - param_2));
    lVar10 = param_3 + 0x30;
    local_80 = lVar5 * 4;
    lVar5 = lVar5 * 8;
    local_90 = lVar10;
    do {
      if (*(char *)(param_3 + 0x40) == '\0') {
        *puVar15 = *(undefined8 *)(lVar5 + **(longlong **)*param_5);
        puVar15[1] = *(undefined8 *)(lVar5 + **(longlong **)*param_5);
        uVar8 = 2;
        lVar7 = param_4[1];
        lVar9 = *param_4;
        if (2 < (ulonglong)(lVar7 - lVar9 >> 3)) {
          lVar14 = 0x30;
          do {
            puVar15[uVar8] = *(undefined8 *)(lVar5 + *(longlong *)(lVar14 + *(longlong *)*param_5));
            uVar8 = uVar8 + 1;
            lVar14 = lVar14 + 0x18;
            lVar7 = param_4[1];
            lVar9 = *param_4;
          } while (uVar8 < (ulonglong)(lVar7 - lVar9 >> 3));
        }
      }
      else {
        uVar8 = 0;
        lVar7 = param_4[1];
        lVar9 = *param_4;
        if (lVar7 - lVar9 >> 3 != 0) {
          lVar14 = 0;
          do {
            puVar15[uVar8] = *(undefined8 *)(lVar5 + *(longlong *)(lVar14 + *(longlong *)*param_5));
            uVar8 = uVar8 + 1;
            lVar14 = lVar14 + 0x18;
            lVar7 = param_4[1];
            lVar9 = *param_4;
          } while (uVar8 < (ulonglong)(lVar7 - lVar9 >> 3));
        }
      }
      local_88 = lVar5;
      (**(code **)(*local_a0 + 8))
                (local_a0,_Dst,local_c0,lVar9,(int)(lVar7 - lVar9 >> 3),
                 *(undefined4 *)(local_80 + *param_6),*(undefined4 *)(local_80 + *param_7));
      FUN_144b72ea0(lVar10,&local_b0);
      plVar6 = (longlong *)FUN_144b72ec0(lVar10,local_58);
      lVar7 = local_90;
      if (local_b0 != *plVar6) {
        lVar9 = 0;
        do {
          uVar13 = *(uint *)((longlong)_Dst +
                            (longlong)*(int *)(lVar9 + *(longlong *)(param_3 + 0xa8)) * 4);
          if (*(int *)(local_b0 + 0x120) == 2) {
            *(uint *)(lVar4 * *(longlong *)(local_b0 + 0x130) +
                     (longlong)param_1 * *(longlong *)(local_b0 + 0x138) +
                     *(longlong *)(local_b0 + 0x128)) = uVar13;
          }
          else if (*(int *)(local_b0 + 0x120) == 1) {
            uVar12 = uVar13 & 0x7fffffff;
            uVar3 = (ushort)(uVar13 >> 0x10) & 0x8000;
            if (uVar12 < 0x38800000) {
              if (0x33000000 < uVar12) {
                bVar2 = 0x7e - (char)(uVar12 >> 0x17);
                uVar12 = uVar13 & 0x7fffff | 0x800000;
                uVar13 = uVar12 << (0x20 - bVar2 & 0x1f);
                uVar12 = uVar12 >> (bVar2 & 0x1f);
                uVar3 = uVar3 | (ushort)uVar12;
                if ((0x80000000 < uVar13) || ((uVar13 == 0x80000000 && ((uVar12 & 1) != 0)))) {
                  uVar3 = uVar3 + 1;
                }
              }
            }
            else if (uVar12 < 0x7f800000) {
              if (uVar12 < 0x477ff000) {
                uVar3 = uVar3 | (ushort)(uVar12 + 0xc8000fff + (uVar12 + 0xc8000000 >> 0xd & 1) >>
                                        0xd);
              }
              else {
                uVar3 = uVar3 | 0x7c00;
              }
            }
            else {
              uVar3 = uVar3 | 0x7c00;
              if (uVar12 != 0x7f800000) {
                uVar13 = uVar12 >> 0xd & 0x3ff;
                uVar3 = uVar3 | (ushort)(uVar13 == 0) | (ushort)uVar13;
              }
            }
            *(ushort *)
             (lVar4 * *(longlong *)(local_b0 + 0x130) +
             (longlong)param_1 * *(longlong *)(local_b0 + 0x138) + *(longlong *)(local_b0 + 0x128))
                 = uVar3;
          }
          lVar9 = lVar9 + 4;
          FUN_144b6cdf0(&local_b0);
          plVar6 = (longlong *)FUN_144b72ec0(lVar7,local_58);
          lVar10 = local_90;
          lVar5 = local_88;
          puVar15 = local_98;
        } while (local_b0 != *plVar6);
      }
      lVar5 = lVar5 + 8;
      local_80 = local_80 + 4;
      local_c8 = local_c8 + 1;
      lVar4 = lVar4 + 1;
      pvVar11 = local_60;
      local_88 = lVar5;
    } while (local_c8 <= *(int *)(param_3 + 0x80));
  }
  FUN_14521d580(&local_78);
  if (puVar15 != (undefined8 *)0x0) {
    uVar8 = ((longlong)local_a8 - (longlong)puVar15 >> 3) * 8;
    puVar16 = puVar15;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      puVar16 = (undefined8 *)puVar15[-1];
      if (0x1f < (ulonglong)((longlong)puVar15 + (-8 - (longlong)puVar16))) {
LAB_144e7963f:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(puVar16,uVar8);
  }
  if (_Dst != (void *)0x0) {
    uVar8 = (longlong)pvVar11 - (longlong)_Dst & 0xfffffffffffffffc;
    pvVar11 = _Dst;
    if (0xfff < uVar8) {
      uVar8 = uVar8 + 0x27;
      pvVar11 = *(void **)((longlong)_Dst + -8);
      if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar11))) {
LAB_144e7967c:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(pvVar11,uVar8);
  }
  return;
}



// FUNCTION 144e796d0 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
// SIG undefined FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e79730 FUN_144e79730 body=91 status=ok
// SIG undefined FUN_144e79730(void)

void FUN_144e79730(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e79790 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
// SIG undefined FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e797f0 FUN_144e797f0 body=16 status=ok
// SIG undefined FUN_144e797f0(void)

void FUN_144e797f0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e79820 FUN_144e79820 body=137 status=ok
// SIG undefined FUN_144e79820(void)

void FUN_144e79820(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_144e79d70(*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x18) * 0x18;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e798b0 FUN_144e798b0 body=16 status=ok
// SIG undefined FUN_144e798b0(void)

void FUN_144e798b0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e798e0 FUN_144e798e0 body=137 status=ok
// SIG undefined FUN_144e798e0(void)

void FUN_144e798e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_144e79cf0(*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x48) * 0x48;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e79970 FUN_144e79970 body=16 status=ok
// SIG undefined FUN_144e79970(void)

void FUN_144e79970(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e79990 thunk_FUN_144e799a0 body=5 status=ok
// SIG undefined thunk_FUN_144e799a0(void)

void thunk_FUN_144e799a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_144e79c60(*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x18) * 0x18;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e799a0 FUN_144e799a0 body=137 status=ok
// SIG undefined FUN_144e799a0(void)

void FUN_144e799a0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*param_1 != 0) {
    FUN_144e79c60(*param_1,param_1[1],param_1);
    lVar1 = *param_1;
    uVar3 = ((param_1[2] - lVar1) / 0x18) * 0x18;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e79a30 FUN_144e79a30 body=16 status=ok
// SIG undefined FUN_144e79a30(void)

void FUN_144e79a30(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e79a50 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
// SIG undefined FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e79ab0 FUN_144e79ab0 body=16 status=ok
// SIG undefined FUN_144e79ab0(void)

void FUN_144e79ab0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e79ad0 FUN_144e79ad0 body=384 status=ok
// SIG undefined FUN_144e79ad0(void)

void FUN_144e79ad0(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    if (0x38e38e38e38e38e < param_2) {
      FUN_144e79970();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar1 = param_2 * 0x48;
    plVar4 = (longlong *)0x0;
    if (uVar1 < 0x1000) {
      if (uVar1 != 0) {
        plVar4 = (longlong *)FUN_14494321d(uVar1);
      }
    }
    else {
      if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      lVar3 = FUN_14494321d();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      plVar4 = (longlong *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      plVar4[-1] = lVar3;
    }
    *param_1 = plVar4;
    param_1[1] = plVar4;
    param_1[2] = plVar4 + param_2 * 9;
    for (; param_2 != 0; param_2 = param_2 - 1) {
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 0;
      plVar4[3] = 0;
      plVar4[4] = 0;
      plVar4[5] = 0;
      plVar4[6] = 0;
      plVar4[7] = 0;
      plVar4[8] = 0;
      *plVar4 = 0;
      plVar4[1] = 0;
      lVar3 = FUN_14494321d(0x160);
      *(longlong *)lVar3 = lVar3;
      *(longlong *)(lVar3 + 8) = lVar3;
      *(longlong *)(lVar3 + 0x10) = lVar3;
      *(undefined2 *)(lVar3 + 0x18) = 0x101;
      *plVar4 = lVar3;
      FUN_144b72800(plVar4 + 2,1,0,0,0,1,1,0,0,0);
      plVar4 = plVar4 + 9;
    }
    FUN_144e79cf0(plVar4,plVar4,param_1);
    param_1[1] = plVar4;
  }
  return;
}



// FUNCTION 144e79c60 FUN_144e79c60 body=131 status=ok
// SIG undefined FUN_144e79c60(void)

void FUN_144e79c60(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
      uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
      lVar2 = lVar1;
      if (0xfff < uVar3) {
        lVar2 = *(longlong *)(lVar1 + -8);
        uVar3 = uVar3 + 0x27;
        if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar2,uVar3);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  } while( true );
}



// FUNCTION 144e79cf0 FUN_144e79cf0 body=123 status=ok
// SIG undefined FUN_144e79cf0(void)

void FUN_144e79cf0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 9) {
    cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
    plVar3 = *(longlong **)(*param_1 + 8);
    while (cVar1 == '\0') {
      FUN_144e7a4d0(param_1,param_1,plVar3[2]);
      plVar2 = (longlong *)*plVar3;
      thunk_FUN_1400020a8(plVar3,0x160);
      plVar3 = plVar2;
      cVar1 = *(char *)((longlong)plVar2 + 0x19);
    }
    thunk_FUN_1400020a8(*param_1,0x160);
  }
  return;
}



// FUNCTION 144e79d70 FUN_144e79d70 body=194 status=ok
// SIG undefined FUN_144e79d70(void)

void FUN_144e79d70(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    if (*param_1 != 0) {
      FUN_144e79ee0(*param_1,param_1[1],param_1);
      lVar1 = *param_1;
      uVar2 = ((param_1[2] - lVar1) / 0x18) * 0x18;
      lVar3 = lVar1;
      if (0xfff < uVar2) {
        lVar3 = *(longlong *)(lVar1 + -8);
        uVar2 = uVar2 + 0x27;
        if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar3,uVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  } while( true );
}



// FUNCTION 144e79e40 FUN_144e79e40 body=131 status=ok
// SIG undefined FUN_144e79e40(void)

void FUN_144e79e40(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
      uVar3 = param_1[2] - lVar1 & 0xfffffffffffffffc;
      lVar2 = lVar1;
      if (0xfff < uVar3) {
        lVar2 = *(longlong *)(lVar1 + -8);
        uVar3 = uVar3 + 0x27;
        if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar2,uVar3);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  } while( true );
}



// FUNCTION 144e79ee0 FUN_144e79ee0 body=131 status=ok
// SIG undefined FUN_144e79ee0(void)

void FUN_144e79ee0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
      uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
      lVar2 = lVar1;
      if (0xfff < uVar3) {
        lVar2 = *(longlong *)(lVar1 + -8);
        uVar3 = uVar3 + 0x27;
        if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar2,uVar3);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  } while( true );
}



// FUNCTION 144e79f70 FUN_144e79f70 body=604 status=ok
// SIG undefined FUN_144e79f70(void)

void FUN_144e79f70(longlong *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
    FUN_144e78ea0();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar9 = (param_1[1] - *param_1) / 6 + (param_1[1] - *param_1 >> 0x3f);
  lVar9 = (lVar9 >> 2) - (lVar9 >> 0x3f);
  uVar10 = (param_1[2] - *param_1) / 0x18;
  if ((0xaaaaaaaaaaaaaaa - (uVar10 >> 1) < uVar10) ||
     ((uVar10 = (uVar10 >> 1) + uVar10, uVar12 = param_2, param_2 <= uVar10 &&
      (uVar12 = uVar10, 0xaaaaaaaaaaaaaaa < uVar10)))) {
LAB_144e7a1c2:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar10 = uVar12 * 0x18;
  if (uVar10 < 0x1000) {
    if (uVar10 == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = (undefined8 *)FUN_14494321d(uVar10);
    }
  }
  else {
    if (uVar10 + 0x27 <= uVar10) goto LAB_144e7a1c2;
    lVar5 = FUN_14494321d();
    if (lVar5 == 0) goto LAB_144e7a1bb;
    puVar11 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar11[-1] = lVar5;
  }
  puVar7 = puVar11 + lVar9 * 3;
  for (lVar9 = param_2 - lVar9; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7 = puVar7 + 3;
  }
  FUN_144e79ee0(puVar7,puVar7,param_1);
  puVar7 = (undefined8 *)param_1[1];
  puVar8 = puVar11;
  for (puVar6 = (undefined8 *)*param_1; puVar6 != puVar7; puVar6 = puVar6 + 3) {
    uVar1 = puVar6[2];
    puVar6[2] = 0;
    uVar2 = puVar6[1];
    puVar6[1] = 0;
    uVar3 = *puVar6;
    *puVar6 = 0;
    *puVar8 = uVar3;
    puVar8[1] = uVar2;
    puVar8[2] = uVar1;
    puVar8 = puVar8 + 3;
  }
  FUN_144e79ee0(puVar8,puVar8,param_1);
  if (*param_1 != 0) {
    FUN_144e79ee0(*param_1,param_1[1],param_1);
    lVar9 = *param_1;
    uVar10 = ((param_1[2] - lVar9) / 0x18) * 0x18;
    lVar5 = lVar9;
    if (0xfff < uVar10) {
      uVar10 = uVar10 + 0x27;
      lVar5 = *(longlong *)(lVar9 + -8);
      if (0x1f < (lVar9 - lVar5) - 8U) {
LAB_144e7a1bb:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar5,uVar10);
  }
  *param_1 = (longlong)puVar11;
  param_1[1] = (longlong)(puVar11 + param_2 * 3);
  param_1[2] = (longlong)(puVar11 + uVar12 * 3);
  return;
}



// FUNCTION 144e7a1d0 FUN_144e7a1d0 body=243 status=ok
// SIG undefined FUN_144e7a1d0(void)

void FUN_144e7a1d0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (param_2 < 0x800000000000000) {
    lVar6 = param_1[1] - *param_1 >> 5;
    uVar2 = param_1[2] - *param_1 >> 5;
    uVar5 = 0x7ffffffffffffff;
    if ((uVar2 <= 0x7ffffffffffffff - (uVar2 >> 1)) &&
       (uVar5 = (uVar2 >> 1) + uVar2, uVar5 < param_2)) {
      uVar5 = param_2;
    }
    lVar1 = FUN_1470a9df8(param_1,uVar5);
    puVar3 = (undefined8 *)(lVar6 * 0x20 + lVar1);
    puVar4 = puVar3;
    for (lVar6 = param_2 - lVar6; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0xf;
      *(undefined1 *)puVar4 = 0;
      puVar4 = puVar4 + 4;
    }
    lVar6 = lVar1;
    FUN_1486115df(puVar4,puVar4,param_1);
    FUN_144e5e1e0(*param_1,param_1[1],lVar1,param_1,puVar3,lVar6);
    FUN_1470a9d60(param_1,lVar1,param_2,uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1470a9d4e();
}



// FUNCTION 144e7a2d0 FUN_144e7a2d0 body=66 status=ok
// SIG undefined FUN_144e7a2d0(void)

undefined8 * FUN_144e7a2d0(undefined8 *param_1,longlong param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_1 = param_1 + 4;
  }
  FUN_1486115df(param_1,param_1);
  return param_1;
}



// FUNCTION 144e7a320 FUN_144e7a320 body=414 status=ok
// SIG undefined FUN_144e7a320(void)

undefined8 * FUN_144e7a320(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  undefined8 *puVar7;
  ulonglong uVar8;
  size_t _Size;
  
  lVar3 = *param_1;
  lVar5 = param_1[1] - lVar3 >> 3;
  if (lVar5 == 0x1fffffffffffffff) {
    FUN_144e783a0();
    pcVar4 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar4)();
    return puVar7;
  }
  uVar1 = lVar5 + 1;
  uVar6 = param_1[2] - lVar3 >> 3;
  if (0x1fffffffffffffff - (uVar6 >> 1) < uVar6) {
LAB_144e7a4b4:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar6 = (uVar6 >> 1) + uVar6;
  uVar8 = uVar1;
  if (uVar1 <= uVar6) {
    uVar8 = uVar6;
  }
  if (0x1fffffffffffffff < uVar8) goto LAB_144e7a4b4;
  uVar6 = uVar8 * 8;
  if (uVar6 < 0x1000) {
    if (uVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)FUN_14494321d(uVar6);
    }
  }
  else {
    if (uVar6 + 0x27 <= uVar6) goto LAB_144e7a4b4;
    lVar5 = FUN_14494321d();
    if (lVar5 == 0) goto LAB_144e7a4ad;
    puVar7 = (undefined8 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    puVar7[-1] = lVar5;
  }
  puVar2 = puVar7 + ((longlong)param_2 - lVar3 >> 3);
  *puVar2 = *param_3;
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst = puVar7;
    param_2 = _Src;
  }
  else {
    memmove(puVar7,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst = puVar2 + 1;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    uVar6 = param_1[2] - lVar3 & 0xfffffffffffffff8;
    lVar5 = lVar3;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar5 = *(longlong *)(lVar3 + -8);
      if (0x1f < (lVar3 - lVar5) - 8U) {
LAB_144e7a4ad:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar5,uVar6);
  }
  *param_1 = (longlong)puVar7;
  param_1[1] = (longlong)(puVar7 + uVar1);
  param_1[2] = (longlong)(puVar7 + uVar8);
  return puVar2;
}



// FUNCTION 144e7a4d0 FUN_144e7a4d0 body=85 status=ok
// SIG undefined FUN_144e7a4d0(void)

void FUN_144e7a4d0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_144e7a4d0(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    thunk_FUN_1400020a8(param_3,0x160);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 144e7a530 FUN_144e7a530 body=4 status=ok
// SIG undefined FUN_144e7a530(void)

undefined8 FUN_144e7a530(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 144e7a540 FUN_144e7a540 body=92 status=ok
// SIG undefined FUN_144e7a540(void)

void FUN_144e7a540(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_144e7a4d0(param_1,param_1,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    thunk_FUN_1400020a8(plVar3,0x160);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_1400020a8(*param_1,0x160);
  return;
}



// FUNCTION 144e7a5a0 FUN_144e7a5a0 body=102 status=ok
// SIG undefined FUN_144e7a5a0(void)

longlong * FUN_144e7a5a0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (*(char *)((longlong)plVar3 + 0x19) != '\0') {
    cVar1 = *(char *)(*(longlong *)(lVar2 + 8) + 0x19);
    lVar5 = *(longlong *)(lVar2 + 8);
    while ((cVar1 == '\0' && (lVar2 == *(longlong *)(lVar5 + 0x10)))) {
      *param_1 = lVar5;
      cVar1 = *(char *)(*(longlong *)(lVar5 + 8) + 0x19);
      lVar2 = lVar5;
      lVar5 = *(longlong *)(lVar5 + 8);
    }
    *param_1 = lVar5;
    return param_1;
  }
  cVar1 = *(char *)(*plVar3 + 0x19);
  plVar4 = (longlong *)*plVar3;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar3 = plVar4;
    plVar4 = (longlong *)*plVar4;
  }
  *param_1 = (longlong)plVar3;
  return param_1;
}



// FUNCTION 144e7a610 FUN_144e7a610 body=306 status=ok
// SIG undefined FUN_144e7a610(void)

undefined8 *
FUN_144e7a610(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  FUN_144e66980();
  *param_1 = Imf_3_2::DeepScanLineInputFile::vftable;
  lVar2 = FUN_14494321d(0x1e8);
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_144e7c060(lVar2,param_5);
  }
  param_1[1] = uVar3;
  puVar4 = (undefined8 *)FUN_14494321d(0x60);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    _Mtx_init_in_situ(puVar4,2);
    puVar4[10] = 0;
    puVar4[0xb] = 0;
  }
  *(undefined8 **)(param_1[1] + 0x1d8) = puVar4;
  *(undefined1 *)(param_1[1] + 0x1e0) = 0;
  *(longlong **)(*(longlong *)(param_1[1] + 0x1d8) + 0x50) = param_3;
  uVar1 = (**(code **)(*param_3 + 8))(param_3);
  *(undefined1 *)(param_1[1] + 0x168) = uVar1;
  *(undefined4 *)(param_1[1] + 0x68) = param_4;
  FUN_144e7b5a0(param_1,param_2);
  lVar2 = param_1[1];
  FUN_144e7c960(*(undefined8 *)(*(longlong *)(lVar2 + 0x1d8) + 0x50),*(undefined4 *)(lVar2 + 0xb8),
                lVar2 + 0xd0,lVar2 + 0xe8);
  return param_1;
}



// FUNCTION 144e7a750 FUN_144e7a750 body=20 status=ok
// SIG undefined FUN_144e7a750(void)

void FUN_144e7a750(longlong param_1)

{
  FUN_144b6b7f0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1d8) + 0x50));
  return;
}



// FUNCTION 144e7a770 FUN_144e7a770 body=9 status=ok
// SIG undefined FUN_144e7a770(void)

longlong FUN_144e7a770(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + 0x50;
}



// FUNCTION 144e7a780 FUN_144e7a780 body=1875 status=ok
// SIG undefined FUN_144e7a780(void)

void FUN_144e7a780(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte *pbVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  char cVar25;
  undefined8 *puVar26;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  undefined8 *local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  longlong local_208;
  undefined8 *puStack_200;
  undefined8 *local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [8];
  undefined8 local_1d0;
  longlong local_1c8;
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [240];
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1d8);
  local_1f0 = param_2;
  local_1e8 = param_1;
  local_1c8 = lVar5;
  iVar12 = _Mtx_lock(lVar5);
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar5 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(lVar5 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  uVar13 = FUN_144b67b60(*(longlong *)(param_1 + 8) + 0x50);
  local_1d0 = uVar13;
  FUN_14521e5c0(param_2,&local_228);
  while (plVar14 = (longlong *)FUN_14521e5d0(param_2,&local_218), local_228 != *plVar14) {
    FUN_144b66050(uVar13,&local_210,local_228 + 0x20);
    plVar14 = (longlong *)FUN_144b65f40(uVar13,local_1e0);
    lVar15 = CONCAT44(uStack_20c,local_210);
    if ((lVar15 != *plVar14) &&
       ((*(int *)(lVar15 + 0x120) != *(int *)(local_228 + 0x140) ||
        (*(int *)(lVar15 + 0x124) != *(int *)(local_228 + 0x144))))) {
      FUN_144e47110();
      FUN_1470a639e(local_1a8,1);
      uVar13 = FUN_144e7a750(param_1);
      uVar17 = FUN_144b66f30(&local_210);
      uVar18 = FUN_141302cc4(local_198,"X and/or y subsampling factors of \"");
      uVar17 = FUN_141302cc4(uVar18,uVar17);
      uVar17 = FUN_141302cc4(uVar17,"\" channel of input file \"");
      uVar13 = FUN_141302cc4(uVar17,uVar13);
      FUN_141302cc4(uVar13,"\" are not compatible with the frame buffer\'s subsampling factors.");
      FUN_144e40dd0(local_a8,local_1a8);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
    }
    FUN_144e7a5a0(&local_228);
  }
  lVar15 = FUN_14521e660(param_2);
  if (*(longlong *)(lVar15 + 8) == 0) {
    FUN_144e40d70(local_a8,"Invalid base pointer, please set a proper sample count slice.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
  }
  *(longlong *)(*(longlong *)(param_1 + 8) + 0x1a0) = *(longlong *)(lVar15 + 8);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1a8) = *(undefined4 *)(lVar15 + 0x10);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1ac) = *(undefined4 *)(lVar15 + 0x18);
  local_208 = 0;
  puStack_200 = (undefined8 *)0x0;
  puVar26 = (undefined8 *)0x0;
  local_1f8 = (undefined8 *)0x0;
  FUN_144b65f20(uVar13,&local_220);
  FUN_14521e5c0(param_2,&local_228);
  plVar14 = (longlong *)FUN_14521e5d0(param_2,local_1e0);
  puVar21 = puStack_200;
  puVar24 = puVar26;
  if (local_228 != *plVar14) {
    do {
      plVar14 = (longlong *)FUN_144b65f40(uVar13,local_1d8);
      if (local_220 != *plVar14) {
        do {
          pbVar19 = (byte *)(local_220 + 0x1c);
          lVar15 = (local_228 + 0x20) - (longlong)pbVar19;
          do {
            bVar1 = *pbVar19;
            uVar22 = (uint)pbVar19[lVar15];
            if (bVar1 != uVar22) break;
            pbVar19 = pbVar19 + 1;
          } while (uVar22 != 0);
          if (-1 < (int)(bVar1 - uVar22)) break;
          puVar16 = (undefined8 *)FUN_14494321d(0x48);
          local_218 = puVar26;
          if (puVar16 != (undefined8 *)0x0) {
            uVar2 = *(undefined4 *)(local_220 + 0x124);
            uVar3 = *(undefined4 *)(local_220 + 0x120);
            uVar4 = *(undefined4 *)(local_220 + 0x11c);
            *(undefined4 *)puVar16 = uVar4;
            *(undefined4 *)((longlong)puVar16 + 4) = uVar4;
            puVar16[1] = 0;
            puVar16[3] = 0;
            puVar16[4] = 0;
            puVar16[5] = 0;
            *(undefined4 *)(puVar16 + 6) = uVar3;
            *(undefined4 *)((longlong)puVar16 + 0x34) = uVar2;
            *(undefined2 *)(puVar16 + 7) = 0x100;
            puVar16[8] = 0;
            local_218 = puVar16;
          }
          if (puVar21 == puVar24) {
            FUN_144e7df50(&local_208,puVar21,&local_218);
            puVar24 = local_1f8;
          }
          else {
            *puVar21 = local_218;
            puStack_200 = puVar21 + 1;
          }
          puVar21 = puStack_200;
          FUN_144b663b0(&local_220);
          plVar14 = (longlong *)FUN_144b65f40(uVar13,local_1d8);
        } while (local_220 != *plVar14);
      }
      cVar25 = '\0';
      plVar14 = (longlong *)FUN_144b65f40(uVar13,local_1c0);
      if (local_220 == *plVar14) {
LAB_144e7aa4b:
        cVar25 = '\x01';
      }
      else {
        pbVar19 = (byte *)(local_220 + 0x1c);
        lVar15 = (local_228 + 0x20) - (longlong)pbVar19;
        do {
          bVar1 = *pbVar19;
          uVar22 = (uint)pbVar19[lVar15];
          if (bVar1 != uVar22) break;
          pbVar19 = pbVar19 + 1;
        } while (uVar22 != 0);
        if (0 < (int)(bVar1 - uVar22)) goto LAB_144e7aa4b;
      }
      puVar16 = (undefined8 *)FUN_14494321d(0x48);
      local_218 = puVar26;
      if (puVar16 != (undefined8 *)0x0) {
        if (cVar25 == '\0') {
          local_210 = *(undefined4 *)(local_220 + 0x11c);
        }
        else {
          local_210 = *(undefined4 *)(local_228 + 0x120);
        }
        uVar13 = *(undefined8 *)(local_228 + 0x148);
        uVar2 = *(undefined4 *)(local_228 + 0x144);
        uVar3 = *(undefined4 *)(local_228 + 0x140);
        iVar12 = *(int *)(local_228 + 0x158);
        uVar17 = *(undefined8 *)(local_228 + 0x138);
        uVar18 = *(undefined8 *)(local_228 + 0x130);
        uVar6 = *(undefined8 *)(local_228 + 0x128);
        *(undefined4 *)puVar16 = *(undefined4 *)(local_228 + 0x120);
        *(undefined4 *)((longlong)puVar16 + 4) = local_210;
        puVar16[1] = uVar6;
        puVar16[3] = uVar18;
        puVar16[4] = uVar17;
        puVar16[5] = (longlong)iVar12;
        *(undefined4 *)(puVar16 + 6) = uVar3;
        *(undefined4 *)((longlong)puVar16 + 0x34) = uVar2;
        *(char *)(puVar16 + 7) = cVar25;
        *(undefined1 *)((longlong)puVar16 + 0x39) = 0;
        puVar16[8] = uVar13;
        uVar13 = local_1d0;
        local_218 = puVar16;
      }
      if (puVar21 == puVar24) {
        FUN_144e7df50(&local_208,puVar21,&local_218);
        puVar24 = local_1f8;
      }
      else {
        *puVar21 = local_218;
        puStack_200 = puVar21 + 1;
      }
      puVar21 = puStack_200;
      plVar14 = (longlong *)FUN_144b65f40(uVar13,local_1b8);
      if ((local_220 != *plVar14) && (cVar25 == '\0')) {
        FUN_144b663b0(&local_220);
      }
      FUN_144e7a5a0(&local_228);
      param_2 = local_1f0;
      plVar14 = (longlong *)FUN_14521e5d0(local_1f0,local_1e0);
      param_1 = local_1e8;
    } while (local_228 != *plVar14);
  }
  lVar15 = *(longlong *)(param_1 + 8);
  puVar16 = puVar26;
  puVar23 = puVar26;
  if (0 < *(int *)(lVar15 + 400)) {
    do {
      *(undefined1 *)((longlong)puVar16 + *(longlong *)(lVar15 + 0x198)) = 0;
      uVar22 = (int)puVar23 + 1;
      lVar15 = *(longlong *)(param_1 + 8);
      puVar16 = (undefined8 *)((longlong)puVar16 + 1);
      puVar23 = (undefined8 *)(ulonglong)uVar22;
    } while ((int)uVar22 < *(int *)(lVar15 + 400));
  }
  puVar16 = puVar26;
  if (*(longlong *)(lVar15 + 0xf8) - *(longlong *)(lVar15 + 0xf0) >> 3 != 0) {
    do {
      *(undefined8 *)(*(longlong *)(lVar15 + 0xf0) + (longlong)puVar16 * 8) = 0;
      puVar16 = (undefined8 *)((longlong)puVar16 + 1);
      lVar15 = *(longlong *)(param_1 + 8);
    } while (puVar16 < (undefined8 *)
                       (*(longlong *)(lVar15 + 0xf8) - *(longlong *)(lVar15 + 0xf0) >> 3));
  }
  plVar14 = (longlong *)(lVar15 + 0x70);
  if (plVar14 != param_2) {
    lVar7 = *plVar14;
    cVar25 = *(char *)((longlong)*(longlong **)(lVar7 + 8) + 0x19);
    plVar9 = *(longlong **)(lVar7 + 8);
    param_2 = local_1f0;
    while (local_1f0 = param_2, cVar25 == '\0') {
      FUN_144e7a4d0(plVar14,plVar14,plVar9[2]);
      plVar8 = (longlong *)*plVar9;
      thunk_FUN_1400020a8(plVar9,0x160);
      plVar9 = plVar8;
      param_2 = local_1f0;
      cVar25 = *(char *)((longlong)plVar8 + 0x19);
    }
    *(longlong *)(lVar7 + 8) = lVar7;
    *(longlong *)lVar7 = lVar7;
    *(longlong *)(lVar7 + 0x10) = lVar7;
    *(undefined8 *)(lVar15 + 0x78) = 0;
    uVar13 = FUN_144e7e090(plVar14,*(undefined8 *)(*param_2 + 8),*plVar14);
    *(undefined8 *)(*plVar14 + 8) = uVar13;
    *(longlong *)(lVar15 + 0x78) = param_2[1];
    plVar9 = (longlong *)*plVar14;
    plVar8 = (longlong *)plVar9[1];
    if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
      cVar25 = *(char *)(*plVar8 + 0x19);
      plVar11 = (longlong *)*plVar8;
      while (cVar25 == '\0') {
        cVar25 = *(char *)(*plVar11 + 0x19);
        plVar8 = plVar11;
        plVar11 = (longlong *)*plVar11;
      }
      *plVar9 = (longlong)plVar8;
      lVar7 = *(longlong *)(*plVar14 + 8);
      lVar10 = *(longlong *)(lVar7 + 0x10);
      cVar25 = *(char *)(lVar10 + 0x19);
      while (cVar25 == '\0') {
        cVar25 = *(char *)(*(longlong *)(lVar10 + 0x10) + 0x19);
        lVar7 = lVar10;
        lVar10 = *(longlong *)(lVar10 + 0x10);
      }
      *(longlong *)(*plVar14 + 0x10) = lVar7;
    }
    else {
      *plVar9 = (longlong)plVar9;
      *(longlong *)(*plVar14 + 0x10) = *plVar14;
    }
  }
  lVar10 = local_1e8;
  lVar7 = param_2[3];
  *(longlong *)(lVar15 + 0x80) = param_2[2];
  *(longlong *)(lVar15 + 0x88) = lVar7;
  lVar7 = param_2[5];
  *(longlong *)(lVar15 + 0x90) = param_2[4];
  *(longlong *)(lVar15 + 0x98) = lVar7;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar7 = param_2[7];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(lVar15 + 0xa0) = (int)param_2[6];
  *(undefined4 *)(lVar15 + 0xa4) = uVar2;
  *(int *)(lVar15 + 0xa8) = (int)lVar7;
  *(undefined4 *)(lVar15 + 0xac) = uVar3;
  *(longlong *)(lVar15 + 0xb0) = param_2[8];
  lVar15 = *(longlong *)(local_1e8 + 8);
  if (*(longlong *)(lVar15 + 0x128) - *(longlong *)(lVar15 + 0x120) >> 3 != 0) {
    do {
      thunk_FUN_1400020a8(*(undefined8 *)(*(longlong *)(lVar15 + 0x120) + (longlong)puVar26 * 8),
                          0x48);
      puVar26 = (undefined8 *)((longlong)puVar26 + 1);
      lVar15 = *(longlong *)(lVar10 + 8);
    } while (puVar26 < (undefined8 *)
                       (*(longlong *)(lVar15 + 0x128) - *(longlong *)(lVar15 + 0x120) >> 3));
  }
  lVar7 = local_208;
  if ((longlong *)(lVar15 + 0x120) != &local_208) {
    FUN_144e7dc70((longlong *)(lVar15 + 0x120),local_208,(longlong)puVar21 - local_208 >> 3);
  }
  *(undefined1 *)(*(longlong *)(lVar10 + 8) + 0x1b0) = 1;
  if (lVar7 != 0) {
    uVar20 = ((longlong)puVar24 - lVar7 >> 3) * 8;
    lVar15 = lVar7;
    if (0xfff < uVar20) {
      uVar20 = uVar20 + 0x27;
      lVar15 = *(longlong *)(lVar7 + -8);
      if (0x1f < (lVar7 - lVar15) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar15,uVar20);
  }
  _Mtx_unlock(lVar5);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_248);
}



// FUNCTION 144e7af00 FUN_144e7af00 body=640 status=ok
// SIG undefined FUN_144e7af00(void)

void FUN_144e7af00(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_318 [32];
  int local_2f8;
  undefined1 local_2e8 [8];
  longlong local_2e0;
  longlong local_2d8;
  undefined1 local_1c8 [96];
  undefined1 local_168 [96];
  undefined1 local_108 [96];
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_318;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1d8);
  local_2e0 = param_1;
  local_2d8 = lVar1;
  iVar2 = _Mtx_lock(lVar1);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(lVar1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  if ((ulonglong)(*(longlong *)(lVar4 + 0x128) - *(longlong *)(lVar4 + 0x120)) < 8) {
    FUN_144e40d70(local_1c8,"No frame buffer specified as pixel data destination.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_1c8,(ThrowInfo *)&DAT_14c6d50e0);
  }
  iVar2 = param_2;
  if (param_3 < param_2) {
    iVar2 = param_3;
  }
  if (param_2 < param_3) {
    param_2 = param_3;
  }
  iVar7 = *(int *)(lVar4 + 0xc4);
  if ((iVar7 <= iVar2) && (iVar8 = iVar2, param_2 <= *(int *)(lVar4 + 200))) {
    for (; iVar8 <= param_2; iVar8 = iVar8 + 1) {
      if (*(char *)((longlong)(iVar8 - iVar7) + *(longlong *)(lVar4 + 0x198)) == '\0') {
        FUN_144e40d70(local_168,
                      "Tried to read scan line without knowing the sample counts, pleaseread the sample counts first."
                     );
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_168,(ThrowInfo *)&DAT_14c6d50e0);
      }
    }
    uVar6 = (longlong)(param_2 - iVar7) / (longlong)*(int *)(lVar4 + 0x150);
    uVar5 = (longlong)(iVar2 - iVar7) / (longlong)*(int *)(lVar4 + 0x150);
    if (*(int *)(lVar4 + 0xb8) == 0) {
      iVar8 = (int)uVar6 + 1;
      iVar7 = 1;
      uVar6 = uVar5;
    }
    else {
      iVar8 = (int)uVar5 + -1;
      iVar7 = -1;
    }
    FUN_144e7f920(local_2e8);
    for (uVar6 = uVar6 & 0xffffffff; (int)uVar6 != iVar8;
        uVar6 = (ulonglong)(uint)((int)uVar6 + iVar7)) {
      local_2f8 = param_2;
      uVar3 = FUN_144e7dab0(local_2e8,*(undefined8 *)(param_1 + 8),uVar6,iVar2);
      FUN_144e7f670(uVar3);
    }
    FUN_144e7f970(local_2e8);
    uVar5 = 0;
    lVar4 = *(longlong *)(param_1 + 8);
    uVar6 = uVar5;
    if (*(longlong *)(lVar4 + 0x140) - *(longlong *)(lVar4 + 0x138) >> 3 != 0) {
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x138) + uVar6 * 8);
        if ((*(char *)(lVar4 + 0x38) != '\0') && (uVar5 == 0)) {
          uVar5 = lVar4 + 0x40;
        }
        *(undefined1 *)(lVar4 + 0x38) = 0;
        uVar6 = uVar6 + 1;
        lVar4 = *(longlong *)(param_1 + 8);
      } while (uVar6 < (ulonglong)(*(longlong *)(lVar4 + 0x140) - *(longlong *)(lVar4 + 0x138) >> 3)
              );
      if (uVar5 != 0) {
        FUN_144e41220(local_108);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_108,(ThrowInfo *)&DAT_14c6d52d8);
      }
    }
    _Mtx_unlock(lVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_318);
  }
  FUN_144e40d70(local_a8,"Tried to read scan line outside the image file\'s data window.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144e7b1a0 FUN_144e7b1a0 body=768 status=ok
// SIG undefined FUN_144e7b1a0(void)

void FUN_144e7b1a0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_278 [32];
  longlong local_258;
  undefined4 local_250;
  longlong local_248;
  int local_238 [2];
  undefined8 local_230;
  longlong local_228;
  longlong local_220;
  undefined1 local_108 [96];
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_230 = 0;
  local_228 = param_1;
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x1b0) == '\0') {
    FUN_144e40d70(local_108,"readPixelSampleCounts called with no valid frame buffer");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_108,(ThrowInfo *)&DAT_14c6d50e0);
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1d8);
  local_220 = lVar2;
  iVar5 = _Mtx_lock(lVar2);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar2 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(lVar2 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  uVar6 = (**(code **)(**(longlong **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x1d8) + 0x50) +
                      0x20))();
  iVar5 = param_2;
  if (param_3 < param_2) {
    iVar5 = param_3;
  }
  if (param_2 < param_3) {
    param_2 = param_3;
  }
  local_230 = uVar6;
  if ((iVar5 < *(int *)(*(longlong *)(param_1 + 8) + 0xc4)) ||
     (*(int *)(*(longlong *)(param_1 + 8) + 200) < param_2)) {
    FUN_144e40d70(local_a8,
                  "Tried to read scan line sample counts outside the image file\'s data window.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d50e0);
  }
LAB_144e7b262:
  do {
    lVar3 = *(longlong *)(param_1 + 8);
    if (param_2 < iVar5) {
      plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x1d8) + 0x50);
      (**(code **)(*plVar4 + 0x28))(plVar4,uVar6);
      _Mtx_unlock(lVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_278);
    }
    if ((*(char *)(lVar3 + 0x169) == '\0') &&
       (iVar12 = iVar5 - *(int *)(lVar3 + 0xc4),
       *(char *)((longlong)iVar12 + *(longlong *)(lVar3 + 0x198)) != '\0')) {
      uVar9 = (ulonglong)*(int *)(lVar3 + 0xbc);
      if (*(int *)(lVar3 + 0xbc) <= *(int *)(lVar3 + 0xc0)) {
        iVar1 = *(int *)(lVar3 + 0x1a8);
        puVar10 = (undefined4 *)
                  (uVar9 * (longlong)iVar1 +
                  (longlong)iVar5 * (longlong)*(int *)(lVar3 + 0x1ac) + *(longlong *)(lVar3 + 0x1a0)
                  );
        do {
          *puVar10 = *(undefined4 *)
                      (*(longlong *)(lVar3 + 0x178) +
                      ((longlong)(iVar12 * *(int *)(lVar3 + 0x174)) +
                      (longlong)((int)uVar9 - *(int *)(lVar3 + 0xbc))) * 4);
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          puVar10 = (undefined4 *)((longlong)puVar10 + (longlong)iVar1);
        } while ((int)uVar8 <= *(int *)(lVar3 + 0xc0));
        iVar5 = iVar5 + 1;
        goto LAB_144e7b262;
      }
    }
    else {
      uVar9 = (longlong)(iVar5 - *(int *)(lVar3 + 0xc4)) / (longlong)*(int *)(lVar3 + 0x150);
      lVar11 = 0;
      if (*(char *)(lVar3 + 0x169) == '\0') {
        lVar11 = lVar3 + 0x170;
      }
      local_250 = CONCAT31(local_250._1_3_,1);
      local_258._0_4_ = *(int *)(lVar3 + 0xc4);
      FUN_144e7cdf0(*(undefined8 *)(lVar3 + 0x1d8),lVar3,uVar9 & 0xffffffff,lVar11);
      lVar3 = *(longlong *)(param_1 + 8);
      iVar12 = *(int *)(lVar3 + 0x150) * (int)uVar9 + *(int *)(lVar3 + 0xc4);
      local_238[0] = *(int *)(lVar3 + 0x150) + -1 + iVar12;
      piVar7 = local_238;
      if (*(int *)(lVar3 + 200) < local_238[0]) {
        piVar7 = (int *)(lVar3 + 200);
      }
      iVar1 = *piVar7;
      local_248 = lVar3 + 0xf0;
      local_250 = *(undefined4 *)(lVar3 + 0x1ac);
      local_258 = CONCAT44(local_258._4_4_,*(undefined4 *)(lVar3 + 0x1a8));
      FUN_144e671f0(lVar3 + 0x50,iVar12,iVar1,*(undefined8 *)(lVar3 + 0x1a0));
      lVar3 = *(longlong *)(param_1 + 8);
      local_258 = lVar3 + 0x108;
      FUN_144e67420(lVar3 + 0xf0,iVar12 - *(int *)(lVar3 + 0xc4),iVar1 - *(int *)(lVar3 + 0xc4));
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



// FUNCTION 144e7b4c0 FUN_144e7b4c0 body=214 status=ok
// SIG undefined FUN_144e7b4c0(void)

undefined8 * FUN_144e7b4c0(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144e66980();
  *param_1 = Imf_3_2::DeepScanLineInputFile::vftable;
  lVar2 = FUN_14494321d(0x1e8);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = FUN_144e7c060(lVar2,*(undefined4 *)(param_2 + 0x18));
  }
  param_1[1] = lVar3;
  *(undefined1 *)(lVar3 + 0x1e0) = 0;
  *(undefined8 *)(param_1[1] + 0x1d8) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1[1] + 0x1d8) + 0x50) + 8))();
  *(undefined1 *)(param_1[1] + 0x168) = uVar1;
  *(undefined4 *)(param_1[1] + 0x68) = *(undefined4 *)(param_2 + 0x20);
  FUN_144e7b5a0(param_1,param_2);
  if ((longlong *)(param_1[1] + 0xd0) != (longlong *)(param_2 + 0x30)) {
    lVar3 = *(longlong *)(param_2 + 0x30);
    FUN_144e72d20((longlong *)(param_1[1] + 0xd0),lVar3,*(longlong *)(param_2 + 0x38) - lVar3 >> 3);
  }
  *(undefined4 *)(param_1[1] + 0x154) = *(undefined4 *)(param_2 + 0x1c);
  return param_1;
}



// FUNCTION 144e7b5a0 FUN_144e7b5a0 body=1709 status=ok
// SIG undefined FUN_144e7b5a0(void)

void FUN_144e7b5a0(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  basic_ostream<char,std::char_traits<char>_> *pbVar12;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar13;
  undefined8 uVar14;
  undefined8 **_Buf2;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStack_3a8 [32];
  undefined8 *local_388;
  undefined1 local_380 [8];
  undefined1 local_378 [16];
  undefined1 local_368 [240];
  undefined1 local_278 [96];
  undefined1 local_218 [96];
  undefined1 local_1b8 [96];
  undefined1 local_158 [96];
  undefined1 local_f8 [96];
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  puVar5 = (undefined8 *)FUN_144b67f80(param_2);
  _Buf2 = &DAT_14c70a2d0;
  if (0xf < DAT_14c70a2e8) {
    _Buf2 = (undefined8 **)DAT_14c70a2d0;
  }
  puVar18 = puVar5;
  if (0xf < (ulonglong)puVar5[3]) {
    puVar18 = (undefined8 *)*puVar5;
  }
  if (puVar5[2] == DAT_14c70a2e0) {
    iVar3 = memcmp(puVar18,_Buf2,puVar5[2]);
    bVar2 = false;
    if (iVar3 == 0) goto LAB_144e7b616;
  }
  bVar2 = true;
LAB_144e7b616:
  if (bVar2) {
    FUN_144e40d70(local_278,"Can\'t build a DeepScanLineInputFile from a type-mismatched part.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_278,(ThrowInfo *)&DAT_14c6d50e0);
  }
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x154) == -1) {
    uVar20 = *(uint *)(*(longlong *)(param_1 + 8) + 0x68);
    if ((uVar20 >> 9 & 1) != 0) {
      FUN_144e40d70(local_218,"Expected a deep scanline file but the file is tiled.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_218,(ThrowInfo *)&DAT_14c6d50e0);
    }
    if ((uVar20 >> 0xb & 1) == 0) {
      FUN_144e40d70(local_1b8,"Expected a deep scanline file but the file is not a deep image.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_1b8,(ThrowInfo *)&DAT_14c6d50e0);
    }
  }
  piVar6 = (int *)FUN_144b68030(param_2);
  if (*piVar6 != 1) {
    FUN_144e47110();
    FUN_1470a639e(local_378,1);
    piVar6 = (int *)FUN_144b68030(param_2);
    pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(local_368,"Version ");
    pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,*piVar6);
    FUN_141302cc4(pbVar13," not supported for deepscanline images in this version of the library");
    FUN_144e40dd0(local_158,local_378);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_158,(ThrowInfo *)&DAT_14c6d50e0);
  }
  FUN_144b67310(*(longlong *)(param_1 + 8) + 0x50,param_2);
  puVar7 = (undefined4 *)FUN_144b67ba0(*(longlong *)(param_1 + 8) + 0x50);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb8) = *puVar7;
  puVar7 = (undefined4 *)FUN_144b67b00(*(longlong *)(param_1 + 8) + 0x50);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xbc) = *puVar7;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc0) = puVar7[2];
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc4) = puVar7[1];
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 200) = puVar7[3];
  lVar15 = *(longlong *)(param_1 + 8);
  iVar3 = (*(int *)(lVar15 + 200) - *(int *)(lVar15 + 0xc4)) + 1;
  if ((ulonglong)
      ((longlong)((*(int *)(lVar15 + 0xc0) - *(int *)(lVar15 + 0xbc)) + 1) * (longlong)iVar3) <
      0x10000001) {
    FUN_144e7bdb0(lVar15 + 0x170,iVar3);
  }
  else {
    *(undefined1 *)(lVar15 + 0x169) = 1;
  }
  lVar15 = *(longlong *)(param_1 + 8);
  iVar3 = (*(int *)(lVar15 + 200) - *(int *)(lVar15 + 0xc4)) + 1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)iVar3;
  uVar8 = SUB168(ZEXT816(4) * auVar1,0);
  if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  uVar8 = FUN_144a7d36f(uVar8);
  thunk_FUN_1400020a8(*(undefined8 *)(lVar15 + 0x188));
  *(int *)(lVar15 + 0x180) = iVar3;
  *(undefined8 *)(lVar15 + 0x188) = uVar8;
  puVar9 = (undefined4 *)FUN_144b67be0(*(longlong *)(param_1 + 8) + 0x50);
  puVar5 = (undefined8 *)FUN_144e498d0(*puVar9,0,*(longlong *)(param_1 + 8) + 0x50);
  uVar4 = FUN_144e67570(puVar5);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x150) = uVar4;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  *(int *)(*(longlong *)(param_1 + 8) + 0xec) = *(int *)(*(longlong *)(param_1 + 8) + 0xc4) + -1;
  iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x150);
  FUN_144e6a0e0(*(longlong *)(param_1 + 8) + 0xd0,
                (longlong)(((iVar3 - puVar7[1]) + puVar7[3]) / iVar3));
  puVar5 = (undefined8 *)0x0;
  for (puVar18 = puVar5; lVar15 = *(longlong *)(param_1 + 8),
      puVar18 < (undefined8 *)(*(longlong *)(lVar15 + 0x140) - *(longlong *)(lVar15 + 0x138) >> 3);
      puVar18 = (undefined8 *)((longlong)puVar18 + 1)) {
    puVar10 = (undefined8 *)FUN_14494321d(0x80);
    puVar16 = puVar5;
    local_388 = puVar10;
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[5] = 0;
      uVar4 = FUN_144e67550(0);
      *(undefined4 *)(puVar10 + 6) = uVar4;
      *(undefined4 *)((longlong)puVar10 + 0x34) = 0xffffffff;
      *(undefined1 *)(puVar10 + 7) = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0xf;
      *(undefined1 *)(puVar10 + 8) = 0;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
      FUN_144e80de0(puVar10 + 0xe,1);
      puVar16 = puVar10;
    }
    *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x138) + (longlong)puVar18 * 8) =
         puVar16;
  }
  iVar3 = (*(int *)(lVar15 + 200) - *(int *)(lVar15 + 0xc4)) + 1;
  uVar8 = FUN_144a7d36f((longlong)iVar3);
  thunk_FUN_1400020a8(*(undefined8 *)(lVar15 + 0x198));
  *(int *)(lVar15 + 400) = iVar3;
  *(undefined8 *)(lVar15 + 0x198) = uVar8;
  lVar15 = *(longlong *)(param_1 + 8);
  puVar18 = puVar5;
  if (0 < (*(int *)(lVar15 + 200) - *(int *)(lVar15 + 0xc4)) + 1) {
    do {
      *(undefined1 *)((longlong)puVar5 + *(longlong *)(lVar15 + 0x198)) = 0;
      uVar20 = (int)puVar18 + 1;
      puVar5 = (undefined8 *)((longlong)puVar5 + 1);
      lVar15 = *(longlong *)(param_1 + 8);
      puVar18 = (undefined8 *)(ulonglong)uVar20;
    } while ((int)uVar20 < (*(int *)(lVar15 + 200) - *(int *)(lVar15 + 0xc4)) + 1);
  }
  lVar19 = ((longlong)*(int *)(lVar15 + 200) - (longlong)*(int *)(lVar15 + 0xc4)) + 1;
  lVar17 = ((longlong)*(int *)(lVar15 + 0xc0) - (longlong)*(int *)(lVar15 + 0xbc)) + 1;
  lVar11 = (longlong)*(int *)(lVar15 + 0x150);
  if (lVar19 < *(int *)(lVar15 + 0x150)) {
    lVar11 = lVar19;
  }
  lVar11 = lVar11 * lVar17 * 4;
  if (0x7fffffff < lVar11) {
    FUN_144e47110();
    FUN_1470a639e(local_378,1);
    pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)
              FUN_141302cc4(local_368,"Deep scanline image size ");
    pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,lVar17);
    pbVar12 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(pbVar13,&DAT_149bc68b0);
    pbVar13 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar12,lVar19);
    FUN_141302cc4(pbVar13," exceeds maximum size");
    FUN_144e40dd0(local_f8,local_378);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_f8,(ThrowInfo *)&DAT_14c6d50e0);
  }
  *(int *)(lVar15 + 0x1d4) = (int)lVar11;
  lVar15 = *(longlong *)(param_1 + 8);
  iVar3 = *(int *)(lVar15 + 0x1d4);
  uVar8 = FUN_144a7d36f((longlong)iVar3);
  thunk_FUN_1400020a8(*(undefined8 *)(lVar15 + 0x1c0));
  *(int *)(lVar15 + 0x1b8) = iVar3;
  *(undefined8 *)(lVar15 + 0x1c0) = uVar8;
  puVar7 = (undefined4 *)FUN_144b67be0(*(longlong *)(param_1 + 8) + 0x50);
  uVar8 = FUN_144e498d0(*puVar7,(longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x1d4),
                        *(longlong *)(param_1 + 8) + 0x50);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x1c8) = uVar8;
  lVar15 = *(longlong *)(param_1 + 8);
  FUN_144e6a0e0(lVar15 + 0xf0,(longlong)((*(int *)(lVar15 + 200) - *(int *)(lVar15 + 0xc4)) + 1));
  uVar8 = FUN_144b67b80(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1d0) = 0;
  FUN_144b65f20(uVar8,&local_388);
  do {
    while( true ) {
      puVar5 = (undefined8 *)FUN_144b65f40(uVar8,local_380);
      if (local_388 == (undefined8 *)*puVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_3a8);
      }
      iVar3 = *(int *)((longlong)local_388 + 0x11c);
      if (iVar3 != 0) break;
LAB_144e7ba48:
      piVar6 = (int *)(*(longlong *)(param_1 + 8) + 0x1d0);
      *piVar6 = *piVar6 + 4;
      FUN_144b663b0(&local_388);
    }
    if (iVar3 != 1) {
      if (iVar3 != 2) {
        FUN_144e47110();
        FUN_1470a639e(local_378,1);
        uVar8 = FUN_141302cc4(local_368,"Bad type for channel ");
        uVar14 = FUN_144b66f30(&local_388);
        uVar8 = FUN_141302cc4(uVar8,uVar14);
        FUN_141302cc4(uVar8," initializing deepscanline reader");
        FUN_144e40dd0(local_98,local_378);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d50e0);
      }
      goto LAB_144e7ba48;
    }
    piVar6 = (int *)(*(longlong *)(param_1 + 8) + 0x1d0);
    *piVar6 = *piVar6 + 2;
    FUN_144b663b0(&local_388);
  } while( true );
}



// FUNCTION 144e7bc70 FUN_144e7bc70 body=299 status=ok
// SIG undefined FUN_144e7bc70(void)

undefined8 * FUN_144e7bc70(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  *param_1 = Imf_3_2::DeepScanLineInputFile::vftable;
  if ((*(char *)(param_1[1] + 0x1e0) != '\0') &&
     (puVar1 = *(undefined8 **)(*(longlong *)(param_1[1] + 0x1d8) + 0x50),
     puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    if ((*(char *)(lVar2 + 0x168) == '\0') &&
       (uVar3 = 0, *(longlong *)(lVar2 + 0x140) - *(longlong *)(lVar2 + 0x138) >> 3 != 0)) {
      do {
        thunk_FUN_1400020a8(*(undefined8 *)
                             (*(longlong *)(*(longlong *)(lVar2 + 0x138) + uVar3 * 8) + 8));
        lVar2 = param_1[1];
        uVar3 = uVar3 + 1;
      } while (uVar3 < (ulonglong)(*(longlong *)(lVar2 + 0x140) - *(longlong *)(lVar2 + 0x138) >> 3)
              );
    }
    if ((*(int *)(lVar2 + 0x154) == -1) && (lVar2 = *(longlong *)(lVar2 + 0x1d8), lVar2 != 0)) {
      _Mtx_destroy_in_situ(lVar2);
      thunk_FUN_1400020a8(lVar2,0x60);
    }
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      FUN_144e7c2c0(lVar2);
      thunk_FUN_1400020a8(lVar2,0x1e8);
    }
  }
  FUN_144e66970(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144e7bdb0 FUN_144e7bdb0 body=106 status=ok
// SIG undefined FUN_144e7bdb0(void)

void FUN_144e7bdb0(int *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(param_2 * param_3);
  uVar2 = SUB168(ZEXT816(4) * auVar1,0);
  if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  uVar2 = FUN_144a7d36f(uVar2);
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 2));
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 2) = uVar2;
  *param_1 = param_2;
  return;
}



// FUNCTION 144e7be20 FUN_144e7be20 body=9 status=ok
// SIG undefined FUN_144e7be20(void)

void FUN_144e7be20(longlong param_1)

{
  FUN_144e80fc0(param_1 + 0x70);
  return;
}



// FUNCTION 144e7be30 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_Parallelism_allocator<unsigned __int64>::deallocate(unsigned __int64
   * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct CHN * __ptr64>::deallocate(struct CHN * __ptr64 *
   __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<8,class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > >(class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const ,struct
   TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct
   `void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
     16 names - too many to list
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 8;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e7be80 FUN_144e7be80 body=110 status=ok
// SIG undefined FUN_144e7be80(void)

ulonglong FUN_144e7be80(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x2000000000000000) {
    param_2 = param_2 * 8;
    if (param_2 < 0x1000) {
      if (param_2 != 0) {
        uVar2 = FUN_14494321d();
        return uVar2;
      }
      return 0;
    }
    if (param_2 < param_2 + 0x27) {
      lVar1 = FUN_14494321d(param_2 + 0x27);
      if (lVar1 != 0) {
        uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar2 - 8) = lVar1;
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14694ac37();
}



// FUNCTION 144e7bef0 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
// SIG undefined FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e7bf50 FUN_144e7bf50 body=16 status=ok
// SIG undefined FUN_144e7bf50(void)

void FUN_144e7bf50(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e7bf70 deallocate body=66 status=ok
// SIG undefined deallocate(void)

/* Library Function - Multiple Matches With Same Base Name
    public: void __cdecl std::_Parallelism_allocator<unsigned __int64>::deallocate(unsigned __int64
   * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct CHN * __ptr64>::deallocate(struct CHN * __ptr64 *
   __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const
   ,struct TPI1::PRECEX * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M>::deallocate(struct `void __cdecl phmap::container_internal::Deallocate<8,class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > >(class
   std::allocator<struct std::pair<unsigned long const ,struct TPI1::PRECEX * __ptr64> > *
   __ptr64,void * __ptr64,unsigned __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
    public: void __cdecl std::allocator<struct `void __cdecl
   phmap::container_internal::Deallocate<8,class std::allocator<struct std::pair<unsigned long const
   ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct std::pair<unsigned long const ,struct
   TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned __int64)'::`2'::M>::deallocate(struct
   `void __cdecl phmap::container_internal::Deallocate<8,class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > >(class std::allocator<struct
   std::pair<unsigned long const ,struct TYPTYPE * __ptr64> > * __ptr64,void * __ptr64,unsigned
   __int64)'::`2'::M * __ptr64 const,unsigned __int64) __ptr64
     16 names - too many to list
   
   Library: Visual Studio 2019 Release */

void deallocate(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = param_3 * 8;
  lVar1 = param_2;
  if (0xfff < uVar2) {
    lVar1 = *(longlong *)(param_2 + -8);
    uVar2 = uVar2 + 0x27;
    if (0x1f < (param_2 - lVar1) - 8U) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
  }
  thunk_FUN_1400020a8(lVar1,uVar2);
  return;
}



// FUNCTION 144e7bfc0 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
// SIG undefined FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void>
   >::~priority_queue<unsigned __int64,class std::vector<unsigned __int64,struct
   std::_Parallelism_allocator<unsigned __int64> >,struct std::greater<void> >(void) __ptr64
    public: __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64>
   >::~vector<struct CHN * __ptr64,class std::allocator<struct CHN * __ptr64> >(void) __ptr64
    public: __cdecl std::vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned
   __int64> >::~vector<unsigned __int64,struct std::_Parallelism_allocator<unsigned __int64> >(void)
   __ptr64
    public: __cdecl std::vector<unsigned __int64,class std::allocator<unsigned __int64>
   >::~vector<unsigned __int64,class std::allocator<unsigned __int64> >(void) __ptr64
     7 names - too many to list
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = param_1[2] - lVar1 & 0xfffffffffffffff8;
    lVar2 = lVar1;
    if (0xfff < uVar3) {
      lVar2 = *(longlong *)(lVar1 + -8);
      uVar3 = uVar3 + 0x27;
      if (0x1f < (lVar1 - lVar2) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144e7c020 FUN_144e7c020 body=16 status=ok
// SIG undefined FUN_144e7c020(void)

void FUN_144e7c020(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144e7c060 FUN_144e7c060 body=607 status=ok
// SIG undefined FUN_144e7c060(void)

longlong FUN_144e7c060(longlong param_1,int param_2)

{
  longlong *plVar1;
  size_t _Size;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 local_res18;
  longlong *local_res20;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar8;
  ulonglong uVar7;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  _Mtx_init_in_situ(param_1,2);
  local_res18 = 0;
  uVar5 = 0;
  FUN_144b66f80(param_1 + 0x50,0x40,0x40,0x3f800000,&local_res18,0x3f800000,0,CONCAT44(uVar8,3));
  plVar1 = (longlong *)(param_1 + 0x70);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  local_res20 = plVar1;
  lVar2 = FUN_14494321d(0x160);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *plVar1 = lVar2;
  FUN_144b72800(param_1 + 0x80,1,0,0,0,1,1,0,0,0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  plVar1 = (longlong *)(param_1 + 0x138);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0xffffffff;
  *(int *)(param_1 + 0x158) = param_2;
  *(undefined1 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined2 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  iVar6 = 1;
  if (1 < param_2 * 2) {
    iVar6 = param_2 * 2;
  }
  uVar7 = (ulonglong)iVar6;
  pvVar3 = *(void **)(param_1 + 0x140);
  lVar2 = *plVar1;
  uVar4 = (longlong)pvVar3 - lVar2 >> 3;
  if (uVar7 < uVar4) {
    pvVar3 = (void *)(lVar2 + uVar7 * 8);
  }
  else {
    if (uVar7 <= uVar4) goto LAB_144e7c277;
    if ((ulonglong)(*(longlong *)(param_1 + 0x148) - lVar2 >> 3) < uVar7) {
      FUN_144e7ddd0(plVar1,uVar7,&local_res18);
      goto LAB_144e7c277;
    }
    _Size = (uVar7 - uVar4) * 8;
    memset(pvVar3,0,_Size);
    pvVar3 = (void *)(_Size + (longlong)pvVar3);
  }
  *(void **)(param_1 + 0x140) = pvVar3;
LAB_144e7c277:
  lVar2 = *plVar1;
  if (*(longlong *)(param_1 + 0x140) - lVar2 >> 3 != 0) {
    do {
      *(undefined8 *)(lVar2 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
      lVar2 = *plVar1;
    } while (uVar5 < (ulonglong)(*(longlong *)(param_1 + 0x140) - lVar2 >> 3));
  }
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  return param_1;
}



// FUNCTION 144e7c2c0 FUN_144e7c2c0 body=976 status=ok
// SIG undefined FUN_144e7c2c0(void)

void FUN_144e7c2c0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar11 = 0;
  lVar7 = *(longlong *)(param_1 + 0x138);
  uVar10 = uVar11;
  if (*(longlong *)(param_1 + 0x140) - lVar7 >> 3 != 0) {
    do {
      lVar7 = *(longlong *)(lVar7 + uVar10 * 8);
      if (lVar7 != 0) {
        puVar2 = *(undefined8 **)(lVar7 + 0x28);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        FUN_144e80ed0(lVar7 + 0x70);
        thunk_FUN_1400020a8(*(undefined8 *)(lVar7 + 0x68));
        uVar3 = *(ulonglong *)(lVar7 + 0x58);
        if (0xf < uVar3) {
          lVar8 = *(longlong *)(lVar7 + 0x40);
          uVar9 = uVar3 + 1;
          lVar6 = lVar8;
          if (0xfff < uVar9) {
            lVar6 = *(longlong *)(lVar8 + -8);
            uVar9 = uVar3 + 0x28;
            if (0x1f < (lVar8 - lVar6) - 8U) goto LAB_144e7c68a;
          }
          thunk_FUN_1400020a8(lVar6,uVar9);
        }
        *(undefined8 *)(lVar7 + 0x50) = 0;
        *(undefined8 *)(lVar7 + 0x58) = 0xf;
        *(undefined1 *)(lVar7 + 0x40) = 0;
        thunk_FUN_1400020a8(lVar7,0x80);
      }
      lVar7 = *(longlong *)(param_1 + 0x138);
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulonglong)(*(longlong *)(param_1 + 0x140) - lVar7 >> 3));
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x128) - lVar7 >> 3 != 0) {
    do {
      thunk_FUN_1400020a8(*(undefined8 *)(lVar7 + uVar11 * 8),0x48);
      lVar7 = *(longlong *)(param_1 + 0x120);
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulonglong)(*(longlong *)(param_1 + 0x128) - lVar7 >> 3));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x1c8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if ((*(char *)(param_1 + 0x15c) != '\0') &&
     (puVar2 = *(undefined8 **)(param_1 + 0x160), puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x1c0));
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x198));
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x188));
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x178));
  lVar7 = *(longlong *)(param_1 + 0x138);
  if (lVar7 != 0) {
    uVar10 = *(longlong *)(param_1 + 0x148) - lVar7 & 0xfffffffffffffff8;
    lVar8 = lVar7;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(lVar7 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (lVar7 - lVar8) - 8U) goto LAB_144e7c68a;
    }
    thunk_FUN_1400020a8(lVar8,uVar10);
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (lVar7 != 0) {
    uVar10 = *(longlong *)(param_1 + 0x130) - lVar7 & 0xfffffffffffffff8;
    lVar8 = lVar7;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(lVar7 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (lVar7 - lVar8) - 8U) goto LAB_144e7c68a;
    }
    thunk_FUN_1400020a8(lVar8,uVar10);
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  lVar7 = *(longlong *)(param_1 + 0x108);
  if (lVar7 != 0) {
    uVar10 = *(longlong *)(param_1 + 0x118) - lVar7 & 0xfffffffffffffff8;
    lVar8 = lVar7;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(lVar7 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (lVar7 - lVar8) - 8U) goto LAB_144e7c68a;
    }
    thunk_FUN_1400020a8(lVar8,uVar10);
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  lVar7 = *(longlong *)(param_1 + 0xf0);
  if (lVar7 != 0) {
    uVar10 = *(longlong *)(param_1 + 0x100) - lVar7 & 0xfffffffffffffff8;
    lVar8 = lVar7;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(lVar7 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (lVar7 - lVar8) - 8U) goto LAB_144e7c68a;
    }
    thunk_FUN_1400020a8(lVar8,uVar10);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  lVar7 = *(longlong *)(param_1 + 0xd0);
  if (lVar7 != 0) {
    uVar10 = *(longlong *)(param_1 + 0xe0) - lVar7 & 0xfffffffffffffff8;
    lVar8 = lVar7;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(lVar7 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (lVar7 - lVar8) - 8U) {
LAB_144e7c68a:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar8,uVar10);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 8);
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  while (cVar1 == '\0') {
    FUN_144e7a4d0(param_1 + 0x70,param_1 + 0x70,plVar4[2]);
    plVar5 = (longlong *)*plVar4;
    thunk_FUN_1400020a8(plVar4,0x160);
    plVar4 = plVar5;
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
  }
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x70),0x160);
  FUN_144b67220(param_1 + 0x50);
  _Mtx_destroy_in_situ(param_1);
  return;
}



// FUNCTION 144e7c6a0 FUN_144e7c6a0 body=52 status=ok
// SIG undefined FUN_144e7c6a0(void)

undefined8 FUN_144e7c6a0(undefined8 param_1,ulonglong param_2)

{
  FUN_144e7c2c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 144e7c6e0 FUN_144e7c6e0 body=591 status=ok
// SIG undefined FUN_144e7c6e0(void)

void FUN_144e7c6e0(longlong *param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [96];
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = param_1;
  local_b8 = (**(code **)(*param_1 + 0x20))();
  uVar3 = 0;
  while( true ) {
    if ((ulonglong)(param_3[1] - *param_3 >> 3) <= uVar3) {
      (**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*param_1 + 0x28))(param_1,local_b8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_e8);
    }
    uVar2 = (**(code **)(*param_1 + 0x20))(param_1);
    (**(code **)(*param_1 + 0x10))(param_1,local_c8,4);
    (**(code **)(*param_1 + 0x10))(param_1,&local_48,8);
    lVar1 = local_48;
    (**(code **)(*param_1 + 0x10))(param_1,&local_40,8);
    if ((0x7fffffffffffffffU - lVar1 < local_40) || ((0x7fffffffffffffff - local_40) - lVar1 < 8))
    break;
    FUN_144e48c60(param_1,(int)local_40 + 8 + (int)lVar1);
    if (param_2 == 0) {
      *(undefined8 *)(*param_3 + uVar3 * 8) = uVar2;
      uVar3 = (ulonglong)((int)uVar3 + 1);
    }
    else {
      *(undefined8 *)(*param_3 + -8 + ((param_3[1] - *param_3 >> 3) - uVar3) * 8) = uVar2;
      uVar3 = (ulonglong)((int)uVar3 + 1);
    }
  }
  FUN_144e411f0(local_a8,"Invalid chunk size");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_a8,(ThrowInfo *)&DAT_14c6d52d8);
}



// FUNCTION 144e7c960 FUN_144e7c960 body=189 status=ok
// SIG undefined FUN_144e7c960(void)

void FUN_144e7c960(undefined8 param_1,undefined4 param_2,longlong *param_3,undefined1 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  lVar3 = *param_3;
  uVar1 = uVar2;
  if (param_3[1] - lVar3 >> 3 != 0) {
    do {
      FUN_144e5f3c0(param_1,lVar3 + uVar1 * 8);
      lVar3 = *param_3;
      uVar1 = (ulonglong)((int)uVar1 + 1);
    } while (uVar1 < (ulonglong)(param_3[1] - lVar3 >> 3));
  }
  *param_4 = 1;
  uVar1 = param_3[1] - *param_3 >> 3;
  if (uVar1 != 0) {
    do {
      if (*(longlong *)(*param_3 + uVar2 * 8) == 0) {
        *param_4 = 0;
        FUN_144e7c6e0(param_1,param_2,param_3);
        return;
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < uVar1);
  }
  return;
}



// FUNCTION 144e7ca20 FUN_144e7ca20 body=948 status=ok
// SIG undefined FUN_144e7ca20(void)

void FUN_144e7ca20(longlong param_1,longlong param_2,int param_3,longlong *param_4,
                  ulonglong *param_5,ulonglong *param_6)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8 [2];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [240];
  undefined1 local_b8 [96];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  iVar2 = param_3 - *(int *)(param_2 + 0xc4);
  lVar7 = (longlong)(iVar2 / *(int *)(param_2 + 0x150));
  local_1c8[0] = (longlong *)(*(longlong *)(param_2 + 0xd0) + lVar7 * 8);
  lVar3 = *local_1c8[0];
  if (lVar3 == 0) {
    FUN_144e47110(lVar7,(longlong)iVar2 % (longlong)*(int *)(param_2 + 0x150) & 0xffffffff);
    FUN_1470a639e(local_1b8,1);
    pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(local_1a8,"Scan line ");
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_3);
    FUN_141302cc4(pbVar6," is missing.");
    FUN_144e410c0(local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  if (((*(uint *)(param_2 + 0x68) >> 0xc & 1) == 0) && (*(char *)(param_2 + 0x169) == '\0')) {
    if (*(int *)(param_2 + 0xec) == param_3) goto LAB_144e7cadb;
  }
  else {
    lVar7 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))();
    if (lVar7 == *local_1c8[0]) goto LAB_144e7cadb;
  }
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))(*(longlong **)(param_1 + 0x50),lVar3);
LAB_144e7cadb:
  puVar8 = (undefined8 *)(param_1 + 0x50);
  if ((*(uint *)(param_2 + 0x68) >> 0xc & 1) != 0) {
    (**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,local_1c8,4);
    iVar2 = (int)local_1c8[0];
    if ((int)local_1c8[0] != *(int *)(param_2 + 0x154)) {
      FUN_144e47110();
      FUN_1470a639e(local_1b8,1);
      pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_141302cc4(local_1a8,"Unexpected part number ");
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,iVar2);
      pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(pbVar6,", should be ");
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar5,*(int *)(param_2 + 0x154));
      FUN_141302cc4(pbVar6,&DAT_149971530);
      FUN_144e40dd0(local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d50e0);
    }
  }
  (**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,local_1c8,4);
  if ((int)local_1c8[0] != param_3) {
    FUN_144e41060(local_b8,"Unexpected data block y coordinate.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d51d8);
  }
  FUN_144e5f3c0(*puVar8,local_1c8);
  FUN_144e5f3c0(*puVar8,param_5);
  FUN_144e5f3c0(*puVar8,param_6);
  if ((*param_5 < 0x80000000) && (*param_6 < 0x80000000)) {
    FUN_144e48c60(*puVar8,(ulonglong)local_1c8[0] & 0xffffffff);
    cVar1 = (**(code **)(*(longlong *)*puVar8 + 8))();
    if (cVar1 == '\0') {
      if (*param_4 != 0) {
        thunk_FUN_1400020a8();
      }
      lVar3 = FUN_144a7d36f(*param_5);
      *param_4 = lVar3;
      (**(code **)(*(longlong *)*puVar8 + 0x10))((longlong *)*puVar8,lVar3,(int)*param_5);
    }
    else {
      lVar3 = (**(code **)(*(longlong *)*puVar8 + 0x18))((longlong *)*puVar8,(int)*param_5);
      *param_4 = lVar3;
    }
    if (*(int *)(param_2 + 0xb8) == 0) {
      *(int *)(param_2 + 0xec) = *(int *)(param_2 + 0x150) + param_3;
    }
    else {
      *(int *)(param_2 + 0xec) = param_3 - *(int *)(param_2 + 0x150);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_1e8);
  }
  FUN_144e47110();
  FUN_1470a639e(local_1b8,1);
  uVar4 = FUN_141302cc4(local_1a8,"This version of the library does not support ");
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_141302cc4(uVar4,"the allocation of data with size  > ");
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,0x7fffffff);
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_141302cc4(pbVar6," file unpacked size :");
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,*param_6);
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_141302cc4(pbVar6," file packed size   :");
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,*param_5);
  FUN_141302cc4(pbVar6,&DAT_149bc6470);
  FUN_144e40dd0(local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144e7cdf0 FUN_144e7cdf0 body=1829 status=ok
// SIG undefined FUN_144e7cdf0(void)

void FUN_144e7cdf0(longlong param_1,longlong param_2,int param_3,longlong param_4,int param_5,
                  char param_6)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_238 [32];
  int **local_218;
  int local_208;
  int local_204;
  int *local_200;
  ulonglong local_1f8;
  int local_1f0;
  int local_1ec;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [240];
  undefined1 local_b8 [96];
  byte local_58;
  uint7 uStack_57;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1ec = param_5;
  local_204 = param_3;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))
            (*(longlong **)(param_1 + 0x50),
             *(undefined8 *)(*(longlong *)(param_2 + 0xd0) + (longlong)param_3 * 8));
  if (((*(uint *)(param_2 + 0x68) >> 0xc & 1) != 0) &&
     ((**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
                (*(longlong **)(param_1 + 0x50),&local_208,4),
     local_208 != *(int *)(param_2 + 0x154))) {
    FUN_144e40d70(local_b8,"Unexpected part number.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d50e0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))(*(longlong **)(param_1 + 0x50),&local_208,4)
  ;
  if (local_208 != *(int *)(param_2 + 0x150) * param_3 + *(int *)(param_2 + 0xc4)) {
    FUN_144e40d70(local_b8,"Unexpected data block y coordinate.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d50e0);
  }
  local_1f0 = *(int *)(param_2 + 0x150) + -1 + local_208;
  piVar8 = &local_1f0;
  if (*(int *)(param_2 + 200) < local_1f0) {
    piVar8 = (int *)(param_2 + 200);
  }
  lVar15 = (longlong)*piVar8;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))(*(longlong **)(param_1 + 0x50),&local_58,8);
  uVar9 = (ulonglong)uStack_57;
  uVar13 = CONCAT71(uStack_57,local_58);
  uVar3 = (ulonglong)local_58;
  if (uVar13 <= (ulonglong)(longlong)*(int *)(param_2 + 0x1d4)) {
    FUN_144e5f3c0(*(undefined8 *)(param_1 + 0x50),&local_1f8);
    FUN_144e5f3c0(*(undefined8 *)(param_1 + 0x50),&local_58);
    if (((0x7fffffff < local_1f8) || (0x7fffffff < CONCAT71(uStack_57,local_58))) ||
       (0x7fffffff < uVar13)) {
      FUN_144e47110();
      FUN_1470a639e(local_1b8,1);
      uVar4 = FUN_141302cc4(local_1a8,"This version of the library does not");
      pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_141302cc4(uVar4,"support the allocation of data with size  > ");
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,0x7fffffff);
      pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_141302cc4(pbVar6," file table size    :");
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,uVar13);
      pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_141302cc4(pbVar6," file unpacked size :");
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar5,CONCAT71(uStack_57,local_58));
      pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_141302cc4(pbVar6," file packed size   :");
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,local_1f8);
      FUN_141302cc4(pbVar6,&DAT_149bc6470);
      FUN_144e40dd0(local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d50e0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))
              (*(longlong **)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x1c0),
               (uVar9 & 0xffffff) << 8 | uVar3);
    if (uVar13 < (ulonglong)(longlong)*(int *)(param_2 + 0x1d4)) {
      plVar1 = *(longlong **)(param_2 + 0x1c8);
      if (plVar1 == (longlong *)0x0) {
        FUN_144e47110();
        FUN_1470a639e(local_1b8,1);
        pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_141302cc4(local_1a8,"Deep scanline data corrupt at chunk ");
        pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,local_204);
        FUN_141302cc4(pbVar6," (sampleCountTableDataSize error)");
        FUN_144e40dd0(local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d50e0);
      }
      local_218 = &local_200;
      (**(code **)(*plVar1 + 0x28))
                (plVar1,*(undefined8 *)(param_2 + 0x1c0),(uVar9 & 0xffffff) << 8 | uVar3,local_208);
    }
    else {
      local_200 = *(int **)(param_2 + 0x1c0);
    }
    local_1d8 = *(longlong *)(param_2 + 0x1a0);
    local_1e8 = 0;
    local_1e0 = (longlong)local_208;
    local_1d0 = lVar15;
    if (local_1e0 <= lVar15) {
      local_1f8 = (ulonglong)*(int *)(param_2 + 0x1a8);
      local_1c8 = (longlong)*(int *)(param_2 + 0x1ac);
      lVar14 = local_1c8 * local_1e0;
      do {
        lVar11 = (longlong)(local_208 - *(int *)(param_2 + 0xc4)) * 4;
        *(undefined4 *)(*(longlong *)(param_2 + 0x188) + lVar11) = 0;
        uVar13 = (ulonglong)*(int *)(param_2 + 0xbc);
        if (*(int *)(param_2 + 0xbc) <= *(int *)(param_2 + 0xc0)) {
          lVar10 = uVar13 * local_1f8;
          iVar7 = 0;
          do {
            iVar2 = *local_200;
            local_200 = local_200 + 1;
            if (iVar2 < iVar7) {
              FUN_144e47110();
              FUN_1470a639e(local_1b8,1);
              pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                       FUN_141302cc4(local_1a8,"Deep scanline sampleCount data corrupt at chunk ");
              pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                                 (pbVar5,local_204);
              FUN_141302cc4(pbVar6," (negative sample count detected)");
              FUN_144e40dd0(local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d50e0);
            }
            iVar7 = iVar2 - iVar7;
            if (param_4 != 0) {
              *(int *)(*(longlong *)(param_4 + 8) +
                      ((longlong)((local_208 - local_1ec) * *(int *)(param_4 + 4)) +
                      (longlong)((int)uVar13 - *(int *)(param_2 + 0xbc))) * 4) = iVar7;
            }
            piVar8 = (int *)(*(longlong *)(param_2 + 0x188) + lVar11);
            *piVar8 = *piVar8 + iVar7;
            if (param_6 != '\0') {
              *(int *)(lVar14 + lVar10 + local_1d8) = iVar7;
            }
            uVar12 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar12;
            lVar10 = lVar10 + local_1f8;
            iVar7 = iVar2;
          } while ((int)uVar12 <= *(int *)(param_2 + 0xc0));
        }
        lVar11 = local_1e8 + (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x188) + lVar11);
        uVar3 = *(int *)(param_2 + 0x1d0) * lVar11;
        uVar13 = CONCAT71(uStack_57,local_58);
        local_1e8 = lVar11;
        if (uVar13 <= uVar3 && uVar3 - uVar13 != 0) {
          FUN_144e47110();
          FUN_1470a639e(local_1b8,1);
          iVar7 = *(int *)(param_2 + 0x1d0);
          pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_141302cc4(local_1a8,"Deep scanline sampleCount data corrupt at chunk ");
          pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,local_204);
          pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_141302cc4(pbVar6,": pixel data only contains ");
          pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,uVar13);
          pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
                   FUN_141302cc4(pbVar6," bytes of data but table references at least ");
          pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                             (pbVar5,iVar7 * lVar11);
          FUN_141302cc4(pbVar6," bytes of sample data");
          FUN_144e40dd0(local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d50e0);
        }
        *(undefined1 *)
         ((longlong)(local_208 - *(int *)(param_2 + 0xc4)) + *(longlong *)(param_2 + 0x198)) = 1;
        local_208 = local_208 + 1;
        local_1e0 = local_1e0 + 1;
        lVar14 = lVar14 + local_1c8;
      } while (local_1e0 <= lVar15);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_238);
  }
  FUN_144e47110();
  FUN_1470a639e(local_1b8,1);
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)
           FUN_141302cc4(local_1a8,"Bad sampleCountTableDataSize read from chunk ");
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,param_3);
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(pbVar6,": expected ");
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar5,*(int *)(param_2 + 0x1d4));
  pbVar5 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(pbVar6," or less, got ");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar5,uVar13);
  FUN_144e40dd0(local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144e7d530 FUN_144e7d530 body=1294 status=ok
// SIG undefined FUN_144e7d530(void)

void FUN_144e7d530(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  basic_ostream<char,std::char_traits<char>_> *pbVar8;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  int local_290;
  int local_288;
  int local_280;
  undefined4 local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined1 local_240;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_228;
  undefined4 local_220;
  longlong local_218;
  longlong local_210;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [240];
  undefined1 local_f8 [96];
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  plVar2 = *(longlong **)(param_1 + 0x18);
  uVar18 = 0;
  local_210 = param_1;
  if (*plVar2 != 0) goto LAB_144e7d70c;
  lVar16 = *(longlong *)(param_1 + 0x10);
  piVar12 = (int *)((longlong)plVar2 + 0x24);
  if (*(int *)(lVar16 + 200) < *(int *)((longlong)plVar2 + 0x24)) {
    piVar12 = (int *)(lVar16 + 200);
  }
  iVar5 = *piVar12;
  lVar11 = (longlong)((int)plVar2[4] - *(int *)(lVar16 + 0xc4));
  lVar14 = (longlong)(iVar5 - *(int *)(lVar16 + 0xc4));
  uVar19 = uVar18;
  if (lVar11 <= lVar14) {
    uVar15 = uVar18;
    uVar17 = uVar18;
    if ((lVar14 - lVar11) + 1 < 2) {
LAB_144e7d5f0:
      uVar19 = (ulonglong)*(int *)(*(longlong *)(lVar16 + 0xf0) + lVar11 * 8);
    }
    else {
      do {
        uVar15 = uVar15 + (longlong)*(int *)(*(longlong *)(lVar16 + 0xf0) + lVar11 * 8);
        uVar17 = uVar17 + (longlong)*(int *)(*(longlong *)(lVar16 + 0xf0) + 8 + lVar11 * 8);
        lVar11 = lVar11 + 2;
      } while (lVar11 <= lVar14 + -1);
      if (lVar11 <= lVar14) goto LAB_144e7d5f0;
    }
    uVar19 = uVar19 + uVar17 + uVar15;
  }
  puVar3 = (undefined8 *)plVar2[5];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  lVar16 = *(longlong *)(param_1 + 0x10);
  lVar14 = (longlong)(*(int *)(*(longlong *)(param_1 + 0x18) + 0x20) - *(int *)(lVar16 + 0xc4));
  lVar11 = (longlong)(iVar5 - *(int *)(lVar16 + 0xc4));
  uVar15 = uVar18;
  if (lVar14 <= lVar11) {
    uVar17 = uVar18;
    do {
      uVar15 = *(ulonglong *)(*(longlong *)(lVar16 + 0xf0) + lVar14 * 8);
      if (uVar15 <= uVar17) {
        uVar15 = uVar17;
      }
      lVar14 = lVar14 + 1;
      uVar17 = uVar15;
    } while (lVar14 <= lVar11);
  }
  puVar6 = (undefined4 *)FUN_144b67be0(lVar16 + 0x50);
  uVar7 = FUN_144e498d0(*puVar6,uVar15,*(longlong *)(param_1 + 0x10) + 0x50);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x28) = uVar7;
  lVar16 = *(longlong *)(param_1 + 0x18);
  if ((*(longlong **)(lVar16 + 0x28) == (longlong *)0x0) ||
     (uVar19 <= *(ulonglong *)(lVar16 + 0x10))) {
    *(undefined4 *)(lVar16 + 0x30) = 1;
    **(undefined8 **)(param_1 + 0x18) = (*(undefined8 **)(param_1 + 0x18))[1];
    if (*(__uint64 *)(*(longlong *)(param_1 + 0x18) + 0x10) != uVar15) {
      FUN_144e47110();
      FUN_1470a639e(local_1f8,1);
      pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_141302cc4(local_1e8,"Incorrect size for uncompressed data. Expected ");
      pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar8,uVar15);
      pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(pbVar9," got ");
      pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar8,*(__uint64 *)(*(longlong *)(param_1 + 0x18) + 0x10));
      FUN_141302cc4(pbVar9," bytes");
      FUN_144e410c0(local_98,local_1f8);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d51d8);
    }
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(lVar16 + 0x28) + 0x10))();
    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x30) = uVar4;
    local_298 = *(longlong *)(param_1 + 0x18);
    iVar5 = (**(code **)(**(longlong **)(local_298 + 0x28) + 0x28))
                      (*(longlong **)(local_298 + 0x28),*(undefined8 *)(local_298 + 8),
                       *(undefined4 *)(local_298 + 0x10),*(undefined4 *)(local_298 + 0x20));
    *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) = (longlong)iVar5;
    if (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) !=
        *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10)) {
      FUN_144e47110();
      FUN_1470a639e(local_1f8,1);
      pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)
               FUN_141302cc4(local_1e8,"Incorrect size for decompressed data. Expected ");
      pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar8,*(__uint64 *)(*(longlong *)(param_1 + 0x18) + 0x18));
      pbVar8 = (basic_ostream<char,std::char_traits<char>_> *)FUN_141302cc4(pbVar9," got ");
      pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar8,*(__uint64 *)(*(longlong *)(param_1 + 0x18) + 0x10));
      FUN_141302cc4(pbVar9," bytes");
      FUN_144e410c0(local_f8,local_1f8);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_f8,(ThrowInfo *)&DAT_14c6d51d8);
    }
  }
LAB_144e7d70c:
  iVar5 = 1;
  lVar16 = *(longlong *)(param_1 + 0x10);
  if (*(int *)(lVar16 + 0xb8) == 0) {
    iVar13 = *(int *)(param_1 + 0x20);
    iVar20 = *(int *)(param_1 + 0x24) + 1;
  }
  else {
    iVar13 = *(int *)(param_1 + 0x24);
    iVar20 = *(int *)(param_1 + 0x20) + -1;
    iVar5 = -1;
  }
  do {
    if (iVar13 == iVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_2b8);
    }
    local_218 = **(longlong **)(param_1 + 0x18) +
                *(longlong *)
                 (*(longlong *)(lVar16 + 0x108) + (longlong)(iVar13 - *(int *)(lVar16 + 0xc4)) * 8);
    uVar19 = uVar18;
    while( true ) {
      lVar16 = *(longlong *)(param_1 + 0x10);
      if ((ulonglong)(*(longlong *)(lVar16 + 0x128) - *(longlong *)(lVar16 + 0x120) >> 3) <= uVar19)
      break;
      puVar6 = *(undefined4 **)(*(longlong *)(lVar16 + 0x120) + uVar19 * 8);
      uVar1 = puVar6[0xd];
      if (iVar13 < 0) {
        if ((int)uVar1 < 0) {
          iVar10 = ~uVar1 - iVar13;
        }
        else {
          iVar10 = (uVar1 - iVar13) + -1;
        }
        iVar10 = -(iVar10 / (int)uVar1);
      }
      else {
        iVar10 = iVar13 / (int)uVar1;
      }
      if (iVar13 == iVar10 * uVar1) {
        if (*(char *)((longlong)puVar6 + 0x39) == '\0') {
          local_280 = *(int *)(lVar16 + 0xc0);
          local_288 = *(int *)(lVar16 + 0xbc);
          local_298 = (longlong)((local_280 - local_288) + 1);
          if (*(char *)(lVar16 + 0x169) == '\0') {
            lVar16 = *(longlong *)(lVar16 + 0x178) +
                     (*(int *)(lVar16 + 0xc4) * local_298 + (longlong)local_288) * -4;
          }
          else {
            lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x68) +
                     (*(int *)(*(longlong *)(param_1 + 0x18) + 0x20) * local_298 +
                     (longlong)local_288) * -4;
          }
          local_298 = local_298 * 4;
          local_220 = puVar6[1];
          local_228 = *puVar6;
          local_230 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x30);
          local_238 = *(undefined8 *)(puVar6 + 0x10);
          local_240 = *(undefined1 *)(puVar6 + 0xe);
          local_248 = *(undefined8 *)(puVar6 + 8);
          local_250 = *(undefined8 *)(puVar6 + 6);
          local_258 = *(undefined8 *)(puVar6 + 10);
          local_260 = 0;
          local_268 = 0;
          local_270 = 0;
          local_278 = 0;
          local_290 = iVar13;
          FUN_144e67e00(&local_218,*(undefined8 *)(puVar6 + 2),lVar16,4);
          goto LAB_144e7d8fd;
        }
        FUN_144e69620(&local_218,puVar6[1],
                      *(undefined4 *)
                       (*(longlong *)(lVar16 + 0x188) +
                       (longlong)(iVar13 - *(int *)(lVar16 + 0xc4)) * 4));
        uVar19 = (ulonglong)((int)uVar19 + 1);
      }
      else {
LAB_144e7d8fd:
        uVar19 = (ulonglong)((int)uVar19 + 1);
      }
    }
    iVar13 = iVar13 + iVar5;
  } while( true );
}



// FUNCTION 144e7da60 FUN_144e7da60 body=79 status=ok
// SIG undefined FUN_144e7da60(void)

undefined8 * FUN_144e7da60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::_anon_74C29447::LineBufferTask::vftable;
  FUN_144e80fc0(param_1[3] + 0x70);
  FUN_144e7f8e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144e7dab0 FUN_144e7dab0 body=437 status=ok
// SIG undefined FUN_144e7dab0(void)

undefined8 * FUN_144e7dab0(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  int local_res20 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar8;
  ulonglong in_stack_ffffffffffffffc0;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  puVar3 = *(undefined8 **)
            (*(longlong *)(param_2 + 0x138) +
            ((ulonglong)(longlong)param_3 %
            (ulonglong)(*(longlong *)(param_2 + 0x140) - *(longlong *)(param_2 + 0x138) >> 3)) * 8);
  local_res20[0] = param_4;
  FUN_144e80ef0(puVar3 + 0xe);
  piVar6 = (int *)(puVar3 + 4);
  piVar1 = (int *)((longlong)puVar3 + 0x24);
  if (*(int *)((longlong)puVar3 + 0x34) != param_3) {
    iVar7 = param_3 * *(int *)(param_2 + 0x150) + *(int *)(param_2 + 0xc4);
    *piVar6 = iVar7;
    *piVar1 = *(int *)(param_2 + 0x150) + -1 + iVar7;
    *(int *)((longlong)puVar3 + 0x34) = param_3;
    *puVar3 = 0;
    if (*(char *)(param_2 + 0x169) != '\0') {
      if ((*(int *)(puVar3 + 0xc) != *(int *)(param_2 + 0x150)) ||
         (*(int *)((longlong)puVar3 + 100) !=
          (*(int *)(param_2 + 0xc0) - *(int *)(param_2 + 0xbc)) + 1)) {
        FUN_144e7bdb0(puVar3 + 0xc,*(int *)(param_2 + 0x150),
                      (*(int *)(param_2 + 0xc0) - *(int *)(param_2 + 0xbc)) + 1);
      }
      FUN_144e7cdf0(*(undefined8 *)(param_2 + 0x1d8),param_2,
                    (longlong)(*piVar6 - *(int *)(param_2 + 0xc4)) /
                    (longlong)*(int *)(param_2 + 0x150) & 0xffffffff,puVar3 + 0xc,
                    CONCAT44(uVar8,*piVar6),in_stack_ffffffffffffffc0 & 0xffffffffffffff00);
    }
    FUN_144e7ca20(*(undefined8 *)(param_2 + 0x1d8),param_2,*piVar6,puVar3 + 1,puVar3 + 2,puVar3 + 3)
    ;
  }
  piVar4 = local_res20;
  if (param_4 <= *piVar6) {
    piVar4 = piVar6;
  }
  iVar7 = *piVar4;
  piVar6 = &param_5;
  if (*piVar1 <= param_5) {
    piVar6 = piVar1;
  }
  iVar2 = *piVar6;
  puVar5 = (undefined8 *)FUN_14494321d(0x28);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    FUN_144e7f890(puVar5,param_1);
    *puVar5 = Imf_3_2::_anon_74C29447::LineBufferTask::vftable;
    puVar5[2] = param_2;
    puVar5[3] = puVar3;
    *(int *)(puVar5 + 4) = iVar7;
    *(int *)((longlong)puVar5 + 0x24) = iVar2;
  }
  return puVar5;
}



// FUNCTION 144e7dc70 FUN_144e7dc70 body=343 status=ok
// SIG undefined FUN_144e7dc70(void)

void FUN_144e7dc70(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  code *pcVar1;
  void *_Dst;
  ulonglong uVar2;
  ulonglong uVar3;
  size_t _Size;
  void *pvVar4;
  
  _Dst = (void *)*param_1;
  uVar2 = param_1[2] - (longlong)_Dst >> 3;
  if (uVar2 < param_3) {
    if (0x1fffffffffffffff < param_3) {
      FUN_144e7bf50();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar3 = 0x1fffffffffffffff;
    if ((uVar2 <= 0x1fffffffffffffff - (uVar2 >> 1)) &&
       (uVar3 = (uVar2 >> 1) + uVar2, uVar3 < param_3)) {
      uVar3 = param_3;
    }
    if (_Dst != (void *)0x0) {
      uVar2 = uVar2 * 8;
      pvVar4 = _Dst;
      if (0xfff < uVar2) {
        pvVar4 = *(void **)((longlong)_Dst + -8);
        uVar2 = uVar2 + 0x27;
        if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar4))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(pvVar4,uVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    _Dst = (void *)FUN_144e7be80(param_1,uVar3);
    *param_1 = _Dst;
    param_1[1] = _Dst;
    param_1[2] = (void *)((longlong)_Dst + uVar3 * 8);
    _Size = param_3 * 8;
    memmove(_Dst,param_2,_Size);
  }
  else {
    uVar2 = param_1[1] - (longlong)_Dst >> 3;
    if (uVar2 < param_3) {
      memmove(_Dst,param_2,uVar2 * 8);
      _Dst = (void *)param_1[1];
      param_2 = (void *)(uVar2 * 8 + (longlong)param_2);
      param_3 = param_3 - uVar2;
    }
    _Size = param_3 * 8;
    memmove(_Dst,param_2,_Size);
  }
  param_1[1] = _Size + (longlong)_Dst;
  return;
}



// FUNCTION 144e7ddd0 FUN_144e7ddd0 body=371 status=ok
// SIG undefined FUN_144e7ddd0(void)

void FUN_144e7ddd0(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  longlong lVar5;
  
  if (0x1fffffffffffffff < param_2) {
    FUN_144e7c020();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar3 = param_1[2] - *param_1 >> 3;
  if ((0x1fffffffffffffff - (uVar3 >> 1) < uVar3) ||
     ((uVar3 = (uVar3 >> 1) + uVar3, uVar4 = param_2, param_2 <= uVar3 &&
      (uVar4 = uVar3, 0x1fffffffffffffff < uVar3)))) {
LAB_144e7df39:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar4 = uVar4 * 8;
  if (uVar4 < 0x1000) {
    if (uVar4 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_14494321d(uVar4);
    }
  }
  else {
    if (uVar4 + 0x27 <= uVar4) goto LAB_144e7df39;
    lVar2 = FUN_14494321d();
    if (lVar2 == 0) goto LAB_144e7df32;
    _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar2;
  }
  memset((void *)((longlong)_Dst + lVar5 * 8),0,(param_2 - lVar5) * 8);
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar5 = *param_1;
  if (lVar5 != 0) {
    uVar3 = param_1[2] - lVar5 & 0xfffffffffffffff8;
    lVar2 = lVar5;
    if (0xfff < uVar3) {
      uVar3 = uVar3 + 0x27;
      lVar2 = *(longlong *)(lVar5 + -8);
      if (0x1f < (lVar5 - lVar2) - 8U) {
LAB_144e7df32:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar2,uVar3);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + param_2 * 8);
  param_1[2] = (longlong)(uVar4 + (longlong)_Dst);
  return;
}



// FUNCTION 144e7df50 FUN_144e7df50 body=308 status=ok
// SIG undefined FUN_144e7df50(void)

undefined8 * FUN_144e7df50(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Src;
  code *pcVar3;
  longlong lVar4;
  undefined8 *_Dst;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *_Dst_00;
  ulonglong uVar7;
  size_t _Size;
  
  lVar2 = *param_1;
  lVar4 = param_1[1] - lVar2 >> 3;
  if (lVar4 == 0x1fffffffffffffff) {
    FUN_144e7bf50();
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  uVar1 = lVar4 + 1;
  uVar6 = param_1[2] - lVar2 >> 3;
  uVar7 = 0x1fffffffffffffff;
  if ((uVar6 <= 0x1fffffffffffffff - (uVar6 >> 1)) && (uVar7 = (uVar6 >> 1) + uVar6, uVar7 < uVar1))
  {
    uVar7 = uVar1;
  }
  _Dst = (undefined8 *)FUN_144e7be80(param_1,uVar7);
  puVar5 = _Dst + ((longlong)param_2 - lVar2 >> 3);
  *puVar5 = *param_3;
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst_00 = _Dst;
    param_2 = _Src;
  }
  else {
    memmove(_Dst,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst_00 = puVar5 + 1;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst_00,param_2,_Size);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar6 = param_1[2] - lVar2 & 0xfffffffffffffff8;
    lVar4 = lVar2;
    if (0xfff < uVar6) {
      uVar6 = uVar6 + 0x27;
      lVar4 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar4) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar4,uVar6);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)(_Dst + uVar1);
  param_1[2] = (longlong)(_Dst + uVar7);
  return puVar5;
}



// FUNCTION 144e7e090 FUN_144e7e090 body=302 status=ok
// SIG undefined FUN_144e7e090(void)

longlong *
FUN_144e7e090(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar10 = (longlong *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    plVar6 = (longlong *)FUN_14494321d(0x160,param_2,param_3,param_4,param_1,0);
    lVar9 = 2;
    plVar4 = param_2 + 4;
    plVar5 = plVar6 + 4;
    do {
      plVar8 = plVar5;
      plVar7 = plVar4;
      lVar3 = plVar7[1];
      *plVar8 = *plVar7;
      plVar8[1] = lVar3;
      lVar3 = plVar7[3];
      plVar8[2] = plVar7[2];
      plVar8[3] = lVar3;
      lVar3 = plVar7[5];
      plVar8[4] = plVar7[4];
      plVar8[5] = lVar3;
      lVar3 = plVar7[7];
      plVar8[6] = plVar7[6];
      plVar8[7] = lVar3;
      lVar3 = plVar7[9];
      plVar8[8] = plVar7[8];
      plVar8[9] = lVar3;
      lVar3 = plVar7[0xb];
      plVar8[10] = plVar7[10];
      plVar8[0xb] = lVar3;
      lVar3 = plVar7[0xd];
      plVar8[0xc] = plVar7[0xc];
      plVar8[0xd] = lVar3;
      lVar3 = plVar7[0xf];
      plVar8[0xe] = plVar7[0xe];
      plVar8[0xf] = lVar3;
      lVar9 = lVar9 + -1;
      plVar4 = plVar7 + 0x10;
      plVar5 = plVar8 + 0x10;
    } while (lVar9 != 0);
    lVar9 = plVar7[0x11];
    plVar8[0x10] = plVar7[0x10];
    plVar8[0x11] = lVar9;
    lVar9 = plVar7[0x13];
    plVar8[0x12] = plVar7[0x12];
    plVar8[0x13] = lVar9;
    uVar1 = *(undefined4 *)((longlong)plVar7 + 0xa4);
    lVar9 = plVar7[0x15];
    uVar2 = *(undefined4 *)((longlong)plVar7 + 0xac);
    *(int *)(plVar8 + 0x14) = (int)plVar7[0x14];
    *(undefined4 *)((longlong)plVar8 + 0xa4) = uVar1;
    *(int *)(plVar8 + 0x15) = (int)lVar9;
    *(undefined4 *)((longlong)plVar8 + 0xac) = uVar2;
    uVar1 = *(undefined4 *)((longlong)plVar7 + 0xb4);
    lVar9 = plVar7[0x17];
    uVar2 = *(undefined4 *)((longlong)plVar7 + 0xbc);
    *(int *)(plVar8 + 0x16) = (int)plVar7[0x16];
    *(undefined4 *)((longlong)plVar8 + 0xb4) = uVar1;
    *(int *)(plVar8 + 0x17) = (int)lVar9;
    *(undefined4 *)((longlong)plVar8 + 0xbc) = uVar2;
    *plVar6 = (longlong)plVar10;
    plVar6[2] = (longlong)plVar10;
    *(undefined2 *)(plVar6 + 3) = 0;
    plVar6[1] = param_3;
    *(undefined1 *)(plVar6 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)plVar10 + 0x19) != '\0') {
      plVar10 = plVar6;
    }
    lVar9 = FUN_144e7e090(param_1,*param_2,plVar6);
    *plVar6 = lVar9;
    lVar9 = FUN_144e7e090(param_1,param_2[2],plVar6);
    plVar6[2] = lVar9;
  }
  return plVar10;
}



// FUNCTION 144e7e1c0 FUN_144e7e1c0 body=85 status=ok
// SIG undefined FUN_144e7e1c0(void)

void FUN_144e7e1c0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_144e7e1c0(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    thunk_FUN_1400020a8(param_3,0x160);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 144e7e240 FUN_144e7e240 body=11 status=ok
// SIG undefined FUN_144e7e240(void)

void FUN_144e7e240(undefined8 *param_1)

{
  *param_1 = Imf_3_2::GenericOutputFile::vftable;
  return;
}



// FUNCTION 144e7e250 FUN_144e7e250 body=14 status=ok
// SIG undefined FUN_144e7e250(void)

undefined8 * FUN_144e7e250(undefined8 *param_1)

{
  *param_1 = Imf_3_2::GenericOutputFile::vftable;
  return param_1;
}


