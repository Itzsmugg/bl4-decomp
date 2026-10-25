// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1470a9d60 FUN_1470a9d60 body=150 status=ok
// SIG undefined FUN_1470a9d60(void)

void FUN_1470a9d60(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_1401d9a90(lVar1);
        lVar1 = lVar1 + 0x20;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x20 + param_2;
  param_1[2] = param_4 * 0x20 + param_2;
  return;
}



// FUNCTION 1470a9df8 FUN_1470a9df8 body=69 status=ok
// SIG undefined FUN_1470a9df8(void)

undefined8 FUN_1470a9df8(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x7f < param_2) {
    uVar1 = FUN_140c1ca1d();
    return uVar1;
  }
  if (param_2 != 0) {
    uVar1 = FUN_14001cc68(param_2 << 5,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1470a9e3e FUN_1470a9e3e body=192 status=ok
// SIG undefined FUN_1470a9e3e(void)

void FUN_1470a9e3e(void)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2af0) {
    FUN_144b3d300(&DAT_14c9a2af0);
    if (DAT_14c9a2af0 == -1) {
      uStack_30 = 0;
      local_28 = 2;
      local_20 = 0xf;
      local_38 = 0x2d2b;
      FUN_1401ddb30(&DAT_14c9a2ad0,&local_38,3);
      FUN_1401d9a90(&local_38);
      atexit((_func_5014 *)&LAB_142b2b220);
      _Init_thread_footer(&DAT_14c9a2af0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a9f00 FUN_1470a9f00 body=16 status=ok
// SIG undefined FUN_1470a9f00(void)

void FUN_1470a9f00(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("deque<T> too long");
}



// FUNCTION 1470a9f11 FUN_1470a9f11 body=90 status=ok
// SIG undefined FUN_1470a9f11(void)

undefined8 * FUN_1470a9f11(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    param_3[2] = 0;
    param_3[3] = 0;
    *param_3 = 0;
    param_3[1] = 0;
    puVar1 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar1 = (undefined8 *)*param_1;
    }
    FUN_1401d9f72(param_3,puVar1,param_1[2]);
    param_3 = param_3 + 4;
  }
  return param_3;
}



// FUNCTION 1470a9f6c FUN_1470a9f6c body=209 status=ok
// SIG undefined FUN_1470a9f6c(void)

int FUN_1470a9f6c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1470a9fb6:
      lVar10 = (longlong)iVar1 * 0x1f0;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1470aa032;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1470aa032;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1470aa020;
    }
  }
  return -1;
LAB_1470aa032:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1470aa020:
  iVar1 = *(int *)(lVar4 + 0x1e8 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1470a9fb6;
}



// FUNCTION 1470aa03e FUN_1470aa03e body=122 status=ok
// SIG undefined FUN_1470aa03e(void)

void FUN_1470aa03e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1f0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1f0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1f0 + 4) = uVar5;
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



// FUNCTION 1470aa0b8 FUN_1470aa0b8 body=114 status=ok
// SIG undefined FUN_1470aa0b8(void)

int FUN_1470aa0b8(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_1470aa1a4(lVar3 + (longlong)iVar4 * 0x1e0,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x1d8 + (longlong)iVar4 * 0x1e0);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1470aa12a FUN_1470aa12a body=122 status=ok
// SIG undefined FUN_1470aa12a(void)

void FUN_1470aa12a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1e0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1e0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1e0 + 4) = uVar5;
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



// FUNCTION 1470aa1a4 FUN_1470aa1a4 body=825 status=ok
// SIG undefined FUN_1470aa1a4(void)

undefined8 FUN_1470aa1a4(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*(char *)(param_1 + 8) == *(char *)(param_2 + 8)) &&
       (*(short *)(param_1 + 10) == *(short *)(param_2 + 10))) &&
      (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
     (((*(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x10) &&
       (*(char *)(param_1 + 0x18) == *(char *)(param_2 + 0x18))) &&
      ((*(short *)(param_1 + 0x1a) == *(short *)(param_2 + 0x1a) &&
       ((*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c) &&
        (*(longlong *)(param_1 + 0x20) == *(longlong *)(param_2 + 0x20))))))))) {
    if ((*(float *)(param_1 + 0x28) == *(float *)(param_2 + 0x28)) &&
       (!NAN(*(float *)(param_1 + 0x28)) && !NAN(*(float *)(param_2 + 0x28)))) {
      if ((((*(double *)(param_1 + 0x30) == *(double *)(param_2 + 0x30)) &&
           (!NAN(*(double *)(param_1 + 0x30)) && !NAN(*(double *)(param_2 + 0x30)))) &&
          (*(char *)(param_1 + 0x38) == *(char *)(param_2 + 0x38))) &&
         (*(longlong *)(param_1 + 0x3c) == *(longlong *)(param_2 + 0x3c))) {
        iVar1 = *(int *)(param_1 + 0x50);
        if (iVar1 == *(int *)(param_2 + 0x50)) {
          if (1 < iVar1) {
            lVar7 = 0;
            while( true ) {
              uVar8 = *(ushort *)(*(longlong *)(param_1 + 0x48) + lVar7);
              uVar9 = (ulonglong)uVar8;
              uVar10 = *(ushort *)(*(longlong *)(param_2 + 0x48) + lVar7);
              if (uVar8 != uVar10) break;
              if (uVar8 == 0) goto LAB_1470aa2de;
LAB_1470aa2a9:
              lVar7 = lVar7 + 2;
            }
            if ((uVar10 | uVar8) < 0x80) {
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar11 = (ulonglong)uVar10;
              uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_1470aa2a9;
            }
            if (uVar8 != uVar10) goto LAB_1470aa326;
          }
        }
        else if (*(int *)(param_2 + 0x50) + iVar1 != 1) goto LAB_1470aa326;
LAB_1470aa2de:
        if ((((*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60)) &&
             (cVar2 = FUN_1405d12b4(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58))
             , cVar2 != '\0')) &&
            (((cVar2 = FUN_1417161a2(param_1 + 0x68,param_2 + 0x68), cVar2 != '\0' &&
              ((*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xec) ==
                *(int *)(param_2 + 0xc0) - *(int *)(param_2 + 0xec) &&
               (cVar2 = FUN_1468fdee0(param_1 + 0xb8,param_2 + 0xb8), cVar2 != '\0')))) &&
             (cVar2 = FUN_144a7afa6(param_1 + 0x108,param_2 + 0x108), cVar2 != '\0')))) &&
           ((((cVar2 = FUN_144a7afa6(param_1 + 0x130,param_2 + 0x130), cVar2 != '\0' &&
              (cVar2 = FUN_144a7afa6(param_1 + 0x158,param_2 + 0x158), cVar2 != '\0')) &&
             (*(longlong *)(param_1 + 0x178) == *(longlong *)(param_2 + 0x178))) &&
            (*(int *)(param_1 + 0x180) == *(int *)(param_2 + 0x180))))) {
          uVar5 = 0;
          if ((*(longlong *)(param_1 + 400) != *(longlong *)(param_2 + 400)) ||
             (*(int *)(param_1 + 0x198) != *(int *)(param_2 + 0x198))) goto LAB_1470aa328;
          local_48 = *(undefined8 *)(param_2 + 0x1a8);
          uVar5 = *(undefined8 *)(param_2 + 0x1b0);
          uVar3 = FUN_144a7891a(uVar5);
          local_50 = *(undefined8 *)(param_1 + 0x1a8);
          uVar6 = *(undefined8 *)(param_1 + 0x1b0);
          uVar4 = FUN_144a7891a(uVar6);
          local_68 = uVar5;
          local_60 = &local_48;
          cVar2 = FUN_144a789b8(uVar4,uVar6,&local_50,uVar3);
          if (cVar2 != '\0') {
            if (*(longlong *)(param_1 + 0x1c8) == 0) {
              uVar5 = FUN_1411f1ba2();
              uVar5 = FUN_14477b664(uVar5);
              *(undefined8 *)(param_1 + 0x1c8) = uVar5;
            }
            lVar7 = *(longlong *)(param_2 + 0x1c8);
            if (lVar7 == 0) {
              lVar7 = FUN_1411f1ba2();
            }
            uVar5 = *(undefined8 *)(param_2 + 0x1c0);
            uVar6 = FUN_14477b664(lVar7);
            local_48 = uVar5;
            uVar3 = FUN_144a7891a(uVar6);
            local_50 = *(undefined8 *)(param_1 + 0x1c0);
            uVar5 = *(undefined8 *)(param_1 + 0x1c8);
            uVar4 = FUN_144a7891a(uVar5);
            local_68 = uVar6;
            local_60 = &local_48;
            uVar5 = FUN_144a789b8(uVar4,uVar5,&local_50,uVar3);
            goto LAB_1470aa328;
          }
        }
      }
    }
  }
LAB_1470aa326:
  uVar5 = 0;
LAB_1470aa328:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1470aa4de FUN_1470aa4de body=203 status=ok
// SIG undefined FUN_1470aa4de(void)

int FUN_1470aa4de(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1470aa528:
      lVar10 = (longlong)iVar1 * 0x68;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1470aa59e;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1470aa59e;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1470aa58f;
    }
  }
  return -1;
LAB_1470aa59e:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1470aa58f:
  iVar1 = *(int *)(lVar4 + 0x60 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1470aa528;
}



// FUNCTION 1470aa5aa FUN_1470aa5aa body=116 status=ok
// SIG undefined FUN_1470aa5aa(void)

void FUN_1470aa5aa(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 1470aa61e FUN_1470aa61e body=147 status=ok
// SIG undefined FUN_1470aa61e(void)

void FUN_1470aa61e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470aa6b2 FUN_1470aa6b2 body=341 status=ok
// SIG undefined FUN_1470aa6b2(void)

undefined4 * FUN_1470aa6b2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1470aa808(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0x14) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1470aa904(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 3) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x14) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1470aaa14(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470aa808 FUN_1470aa808 body=251 status=ok
// SIG undefined FUN_1470aa808(void)

int * FUN_1470aa808(longlong *param_1,int *param_2)

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
      FUN_1406245f8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x1c);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x1c) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 1470aa904 FUN_1470aa904 body=144 status=ok
// SIG undefined FUN_1470aa904(void)

undefined8 FUN_1470aa904(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
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
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x1c);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x1c) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          puVar1[4] = (int)param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_1470aa994((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[5];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1470aa994 FUN_1470aa994 body=128 status=ok
// SIG undefined FUN_1470aa994(void)

void FUN_1470aa994(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 1470aaa14 FUN_1470aaa14 body=480 status=ok
// SIG undefined FUN_1470aaa14(void)

void FUN_1470aaa14(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
      iVar6 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar5 = (longlong)iVar6 * 0x1c;
        uVar4 = *(undefined8 *)(lVar3 + lVar5);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x18 + lVar5) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x14 + lVar5) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar6 = local_58._4_4_;
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



// FUNCTION 1470aabf6 FUN_1470aabf6 body=339 status=ok
// SIG undefined FUN_1470aabf6(void)

undefined4 * FUN_1470aabf6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1470aad4a(param_1,local_48);
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(param_3 + 1);
  *local_40 = *param_3;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  uVar4 = FUN_144a78877(*(undefined4 *)(local_40 + 1),
                        ((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
                        (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar5 >> 4));
  cVar3 = FUN_1470aae30(param_1,uVar4,local_40,&local_4c);
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
      *(uint *)(local_40 + 2) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_1470aaf30(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470aad4a FUN_1470aad4a body=230 status=ok
// SIG undefined FUN_1470aad4a(void)

int * FUN_1470aad4a(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1470aae30 FUN_1470aae30 body=142 status=ok
// SIG undefined FUN_1470aae30(void)

undefined8 FUN_1470aae30(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (((int)plVar2[1] == (int)param_3[1]) &&
           (*(longlong *)(*param_1 + (longlong)iVar3 * 0x14) == *param_3)) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_1470aaebe(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1470aaebe FUN_1470aaebe body=114 status=ok
// SIG undefined FUN_1470aaebe(void)

void FUN_1470aaebe(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 1470aaf30 FUN_1470aaf30 body=490 status=ok
// SIG undefined FUN_1470aaf30(void)

void FUN_1470aaf30(longlong *param_1)

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
        lVar10 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar10 * 0x14);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar9 = (uint)uVar4 & 0xffff;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + 8 + lVar10 * 0x14),
                              ((uint)uVar4 << 0x10 | uVar9) + (int)((ulonglong)uVar4 >> 0x20) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x10 + lVar10 * 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar10 * 0x14) =
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



// FUNCTION 1470ab11c FUN_1470ab11c body=147 status=ok
// SIG undefined FUN_1470ab11c(void)

void FUN_1470ab11c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470ab1b0 FUN_1470ab1b0 body=132 status=ok
// SIG undefined FUN_1470ab1b0(void)

int FUN_1470ab1b0(longlong *param_1,uint param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar1 * 0x58;
        if (*(int *)(lVar4 + 8 + lVar5) - *(int *)(lVar4 + 0x34 + lVar5) ==
            *(int *)(param_3 + 8) - *(int *)(param_3 + 0x34)) {
          cVar2 = FUN_1468fdee0(lVar4 + lVar5,param_3);
          if (cVar2 != '\0') {
            return iVar1;
          }
          lVar4 = *param_1;
        }
        iVar1 = *(int *)(lVar4 + 0x50 + lVar5);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1470ab234 FUN_1470ab234 body=116 status=ok
// SIG undefined FUN_1470ab234(void)

void FUN_1470ab234(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
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



// FUNCTION 1470ab2a8 FUN_1470ab2a8 body=403 status=ok
// SIG undefined FUN_1470ab2a8(void)

longlong * FUN_1470ab2a8(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  basic_ostream<char,std::char_traits<char>_> *local_50;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(ulonglong *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28);
  FUN_141302e6c(&local_50,param_1);
  uVar6 = 4;
  if (local_48 == '\x01') {
    lVar8 = uVar5 - param_3;
    lVar7 = 0;
    if (param_3 <= uVar5 && lVar8 != 0) {
      lVar7 = lVar8;
    }
    if ((longlong)uVar5 < 1) {
      lVar7 = 0;
    }
    lVar4 = (longlong)*(int *)(*param_1 + 4);
    if ((lVar7 != 0) && ((*(uint *)((longlong)param_1 + lVar4 + 0x18) & 0x1c0) != 0x40)) {
      do {
        iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48),
                           *(char *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58));
        if (iVar3 == -1) {
          uVar2 = 4;
          goto joined_r0x0001470ab382;
        }
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      lVar4 = (longlong)*(int *)(*param_1 + 4);
      lVar7 = 0;
    }
    plVar1 = *(longlong **)((longlong)param_1 + lVar4 + 0x48);
    uVar5 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
    uVar6 = 4;
    lVar8 = lVar7;
    uVar2 = 0;
    if (uVar5 == param_3) {
joined_r0x0001470ab382:
      do {
        uVar6 = uVar2;
        if (lVar8 == 0) break;
        iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x48),
                           *(char *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x58));
        if (iVar3 == -1) {
          uVar6 = 4;
          break;
        }
        lVar8 = lVar8 + -1;
        uVar2 = uVar6;
      } while( true );
    }
    *(undefined8 *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x28) = 0;
  }
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)),
             uVar6 | *(uint *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + 0x10),false);
  std::basic_ostream<char,std::char_traits<char>_>::_Osfx(local_50);
  if (*(longlong **)(local_50 + (longlong)*(int *)(*(longlong *)local_50 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(local_50 + (longlong)*(int *)(*(longlong *)local_50 + 4) + 0x48) +
                0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1470ab43c FUN_1470ab43c body=145 status=ok
// SIG undefined FUN_1470ab43c(void)

undefined8 * FUN_1470ab43c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  void *local_30;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  FUN_1470ab4ce(0,&local_30);
  if (local_30 != (void *)0x0) {
    if (local_28 < 0x10) {
      param_2[2] = local_28;
      memmove(param_2,local_30,local_28);
      *(undefined1 *)((longlong)param_2 + local_28) = 0;
    }
    else {
      FUN_1401d7f46(param_2,local_28);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ab4ce FUN_1470ab4ce body=137 status=ok
// SIG undefined FUN_1470ab4ce(void)

void FUN_1470ab4ce(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (((*(uint *)(param_1 + 0x70) & 0x22) == 2) ||
     (uVar2 = **(ulonglong **)(param_1 + 0x40), uVar2 == 0)) {
    if ((*(uint *)(param_1 + 0x70) & 4) != 0) {
      return;
    }
    lVar1 = **(longlong **)(param_1 + 0x38);
    if (lVar1 == 0) {
      return;
    }
    lVar3 = **(longlong **)(param_1 + 0x18);
    *param_2 = lVar3;
    lVar3 = (lVar1 + **(int **)(param_1 + 0x50)) - lVar3;
    param_2[1] = lVar3;
  }
  else {
    lVar3 = **(longlong **)(param_1 + 0x20);
    *param_2 = lVar3;
    uVar4 = *(ulonglong *)(param_1 + 0x68);
    if (*(ulonglong *)(param_1 + 0x68) <= uVar2) {
      uVar4 = uVar2;
    }
    param_2[1] = uVar4 - lVar3;
    lVar3 = ((longlong)**(int **)(param_1 + 0x58) + uVar2) - lVar3;
  }
  param_2[2] = lVar3;
  return;
}



// FUNCTION 1470ab558 FUN_1470ab558 body=63 status=ok
// SIG undefined FUN_1470ab558(void)

basic_streambuf<char,std::char_traits<char>_> *
FUN_1470ab558(basic_streambuf<char,std::char_traits<char>_> *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (param_1);
  *(undefined ***)param_1 = &PTR_FUN_14a179f40;
  puVar1 = param_2 + 2;
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_1470ab598(param_1,param_2,*puVar1);
  return param_1;
}



// FUNCTION 1470ab598 FUN_1470ab598 body=171 status=ok
// SIG undefined FUN_1470ab598(void)

void FUN_1470ab598(longlong param_1,void *param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *_Dst;
  
  if (param_3 >> 0x1f == 0) {
    if (param_3 == 0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
      uVar2 = 0;
    }
    else {
      if (param_3 < 0x1000) {
        _Dst = (void *)FUN_14001cc68(param_3,0x10);
      }
      else {
        _Dst = (void *)FUN_140c1ca1d();
      }
      memcpy(_Dst,param_2,param_3);
      *(ulonglong *)(param_1 + 0x68) = (longlong)_Dst + param_3;
      **(undefined8 **)(param_1 + 0x18) = _Dst;
      **(undefined8 **)(param_1 + 0x38) = _Dst;
      **(undefined4 **)(param_1 + 0x50) = (int)param_3;
      iVar1 = *(int *)(param_1 + 0x68);
      **(undefined8 **)(param_1 + 0x20) = _Dst;
      **(undefined8 **)(param_1 + 0x40) = _Dst;
      **(int **)(param_1 + 0x58) = iVar1 - (int)_Dst;
      uVar2 = 1;
    }
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}



// FUNCTION 1470ab644 FUN_1470ab644 body=84 status=ok
// SIG undefined FUN_1470ab644(void)

uint FUN_1470ab644(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong _Size;
  
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  _Size = uVar2;
  if (uVar1 < uVar2) {
    _Size = uVar1;
  }
  uVar3 = memcmp(param_1,param_2,_Size);
  uVar4 = 0xffffffff;
  if (uVar1 <= uVar2) {
    uVar4 = (uint)(uVar1 < uVar2);
  }
  if (uVar3 == 0) {
    uVar3 = uVar4;
  }
  return uVar3;
}



// FUNCTION 1470ab698 FUN_1470ab698 body=329 status=ok
// SIG undefined FUN_1470ab698(void)

ulonglong FUN_1470ab698(undefined4 *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  uVar2 = 0xffffffff;
  uVar1 = uVar2;
  switch(*param_1) {
  case 0:
    uVar1 = -(uint)((ulonglong)param_2[2] < (ulonglong)param_2[1]);
    break;
  case 1:
    bVar6 = *(char *)(*param_2 + param_2[2]) == *(char *)(param_1 + 1);
    goto LAB_1470ab78d;
  case 2:
    if (*(char *)(*param_2 + param_2[2]) < *(char *)(param_1 + 1)) break;
    bVar6 = *(char *)(*param_2 + param_2[2]) <= *(char *)((longlong)param_1 + 5);
LAB_1470ab78d:
    uVar1 = (uint)bVar6 * 2 - 1;
    break;
  case 3:
    lVar4 = *(longlong *)(param_1 + 2);
    if (*(longlong *)(param_1 + 4) != lVar4) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        uVar1 = FUN_1470ab698(lVar4 + lVar5,param_2);
        if (-1 < (int)uVar1) break;
        uVar3 = uVar3 + 1;
        lVar4 = *(longlong *)(param_1 + 2);
        lVar5 = lVar5 + 0x20;
        uVar1 = uVar2;
      } while (uVar3 < (ulonglong)(*(longlong *)(param_1 + 4) - lVar4 >> 5));
    }
    break;
  case 4:
    lVar4 = *(longlong *)(param_1 + 2);
    if (*(longlong *)(param_1 + 4) != lVar4) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        uVar1 = FUN_1470ab698(lVar4 + lVar5,param_2);
        if (uVar1 == 0xffffffff) {
          uVar1 = 0xffffffff;
          break;
        }
        if (uVar3 == 0) {
          uVar2 = uVar1;
        }
        uVar3 = uVar3 + 1;
        lVar4 = *(longlong *)(param_1 + 2);
        lVar5 = lVar5 + 0x20;
        uVar1 = uVar2;
      } while (uVar3 < (ulonglong)(*(longlong *)(param_1 + 4) - lVar4 >> 5));
    }
    break;
  case 5:
    if (*(longlong *)(param_1 + 2) != *(longlong *)(param_1 + 4)) {
      uVar2 = FUN_1470ab698(*(longlong *)(param_1 + 2),param_2);
      uVar1 = (int)~uVar2 >> 0x1f | 1;
    }
    break;
  case 6:
    uVar3 = FUN_1470ab7e2(param_1,param_2);
    return uVar3;
  }
  return (ulonglong)uVar1;
}



// FUNCTION 1470ab7e2 FUN_1470ab7e2 body=219 status=ok
// SIG undefined FUN_1470ab7e2(void)

int FUN_1470ab7e2(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x10) == lVar2) {
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    iVar3 = 0;
    do {
      local_58 = *param_2;
      uStack_54 = param_2[1];
      uStack_50 = (undefined4)*(ulonglong *)(param_2 + 2);
      uStack_4c = param_2[3];
      local_48 = *(longlong *)(param_2 + 4) + (longlong)iVar3;
      if (iVar3 + (int)*(longlong *)(param_2 + 4) < 0) {
        local_48 = 0;
      }
      if (((0xfffffffd < *(int *)(lVar2 + lVar4) - 3U) && (*(ulonglong *)(param_2 + 2) <= local_48))
         || (iVar1 = FUN_1470ab698(lVar2 + lVar4,&local_58), iVar1 == -1)) {
        iVar3 = -1;
        break;
      }
      iVar3 = iVar3 + iVar1;
      uVar5 = uVar5 + 1;
      lVar2 = *(longlong *)(param_1 + 8);
      lVar4 = lVar4 + 0x20;
    } while (uVar5 < (ulonglong)(*(longlong *)(param_1 + 0x10) - lVar2 >> 5));
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 1470ab8be FUN_1470ab8be body=231 status=ok
// SIG undefined FUN_1470ab8be(void)

void FUN_1470ab8be(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  if ((~param_3 & 6) == 0) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    uVar3 = 0x20;
  }
  else {
    lVar1 = param_2[2];
    if ((ulonglong)param_2[3] < 0x10) {
      iVar6 = 0x11;
      puVar4 = (undefined8 *)FUN_14001cc68(0x11,0x10);
      uVar2 = param_2[1];
      *puVar4 = *param_2;
      puVar4[1] = uVar2;
    }
    else {
      puVar4 = (undefined8 *)*param_2;
      iVar6 = (int)param_2[3] + 1;
    }
    puVar5 = (undefined8 *)(lVar1 + (longlong)puVar4);
    if ((param_3 & 0x18) == 0) {
      puVar5 = puVar4;
    }
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    *(undefined8 **)(param_1 + 0x68) = (undefined8 *)(lVar1 + (longlong)puVar4);
    **(undefined8 **)(param_1 + 0x20) = puVar4;
    **(undefined8 **)(param_1 + 0x40) = puVar5;
    **(int **)(param_1 + 0x58) = (iVar6 + (int)puVar4) - (int)puVar5;
    if ((param_3 & 4) == 0) {
      iVar6 = *(int *)(param_1 + 0x68);
      **(undefined8 **)(param_1 + 0x18) = puVar4;
      **(undefined8 **)(param_1 + 0x38) = puVar4;
      iVar6 = iVar6 - (int)puVar4;
    }
    else {
      **(undefined8 **)(param_1 + 0x18) = puVar4;
      **(undefined8 **)(param_1 + 0x38) = puVar4;
      iVar6 = 0;
    }
    **(int **)(param_1 + 0x50) = iVar6;
    uVar3 = 0x21;
  }
  *(uint *)(param_1 + 0x70) = uVar3 | param_3;
  return;
}



// FUNCTION 1470ab9a6 FUN_1470ab9a6 body=265 status=ok
// SIG undefined FUN_1470ab9a6(void)

longlong * FUN_1470ab9a6(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *param_1;
  lVar7 = *(longlong *)(lVar6 + 8);
  uVar4 = 0;
  lVar1 = lVar7;
  if (*(char *)(lVar7 + 0x19) == '\0') {
    do {
      lVar7 = lVar1;
      uVar4 = FUN_1470ab644(lVar7 + 0x20,param_3);
      if (-1 < (int)uVar4) {
        lVar6 = lVar7;
      }
      lVar1 = *(longlong *)(lVar7 + (ulonglong)(uVar4 >> 0x1b & 0xfffffff0));
    } while (*(char *)(lVar1 + 0x19) == '\0');
    uVar4 = ~uVar4 >> 0x1f;
  }
  if ((*(char *)(lVar6 + 0x19) == '\0') && (iVar5 = FUN_1470ab644(param_3,lVar6 + 0x20), -1 < iVar5)
     ) {
    uVar3 = 0;
  }
  else {
    if (param_1[1] == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
      FUN_1470a938d();
    }
    local_50 = param_3;
    FUN_1470abab2(local_48,param_1,*param_1);
    uVar2 = local_40;
    local_40 = 0;
    FUN_1470abb5c(local_48);
    local_60 = lVar7;
    local_58 = uVar4;
    lVar6 = FUN_1470abba0(param_1,&local_60,uVar2);
    uVar3 = 1;
  }
  *param_2 = lVar6;
  *(undefined1 *)(param_2 + 1) = uVar3;
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470abab2 FUN_1470abab2 body=169 status=ok
// SIG undefined FUN_1470abab2(void)

undefined8 *
FUN_1470abab2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar2 = FUN_14001cc68(0x60,0x10);
  param_1[1] = lVar2;
  plVar3 = (longlong *)*param_4;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  plVar1 = plVar3 + 2;
  if (0xf < (ulonglong)plVar3[3]) {
    plVar3 = (longlong *)*plVar3;
  }
  FUN_1401d9f72(lVar2 + 0x20,plVar3,*plVar1);
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0xf;
  *(undefined8 *)param_1[1] = param_3;
  *(undefined8 *)(param_1[1] + 8) = param_3;
  *(undefined8 *)(param_1[1] + 0x10) = param_3;
  *(undefined1 *)(param_1[1] + 0x18) = 0;
  *(undefined1 *)(param_1[1] + 0x19) = 0;
  return param_1;
}



// FUNCTION 1470abb5c FUN_1470abb5c body=67 status=ok
// SIG undefined FUN_1470abb5c(void)

void FUN_1470abb5c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1401d9a90(lVar1 + 0x40);
    FUN_1401d9a90(lVar1 + 0x20);
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
      return;
    }
  }
  return;
}



// FUNCTION 1470abba0 FUN_1470abba0 body=333 status=ok
// SIG undefined FUN_1470abba0(void)

longlong * FUN_1470abba0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  param_1[1] = param_1[1] + 1;
  plVar3 = (longlong *)*param_1;
  plVar4 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar4;
  if (plVar4 == plVar3) {
    *plVar3 = (longlong)param_3;
    plVar3[1] = (longlong)param_3;
    plVar3[2] = (longlong)param_3;
    plVar3 = param_3;
    goto LAB_1470abc10;
  }
  plVar1 = param_3 + 1;
  if ((int)param_2[1] == 0) {
    plVar4[2] = (longlong)param_3;
    if (*param_2 == plVar3[2]) {
      plVar4 = plVar3 + 2;
      goto LAB_1470abc00;
    }
  }
  else {
    *plVar4 = (longlong)param_3;
    plVar4 = plVar3;
    if (*param_2 == *plVar3) {
LAB_1470abc00:
      *plVar4 = (longlong)param_3;
    }
  }
  plVar4 = (longlong *)*plVar1;
  cVar2 = (char)plVar4[3];
  plVar6 = param_3;
  while (cVar2 == '\0') {
    plVar5 = *(longlong **)plVar4[1];
    if (plVar4 == plVar5) {
      plVar5 = (longlong *)((longlong *)plVar4[1])[2];
      if ((char)plVar5[3] == '\0') goto LAB_1470abc40;
      if (plVar6 == (longlong *)plVar4[2]) {
        FUN_1470abcee(param_1,plVar4);
        plVar6 = plVar4;
      }
      *(undefined1 *)(plVar6[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      FUN_1470abd34(param_1,*(undefined8 *)(plVar6[1] + 8));
    }
    else if ((char)plVar5[3] == '\0') {
LAB_1470abc40:
      *(undefined1 *)(plVar4 + 3) = 1;
      *(undefined1 *)(plVar5 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar1 + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(*plVar1 + 8);
    }
    else {
      if (plVar6 == (longlong *)*plVar4) {
        FUN_1470abd34(param_1,plVar4);
        plVar6 = plVar4;
      }
      *(undefined1 *)(plVar6[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      FUN_1470abcee(param_1,*(undefined8 *)(plVar6[1] + 8));
    }
    plVar1 = plVar6 + 1;
    plVar4 = (longlong *)plVar6[1];
    cVar2 = (char)plVar4[3];
  }
  plVar3 = (longlong *)plVar3[1];
LAB_1470abc10:
  *(undefined1 *)(plVar3 + 3) = 1;
  return param_3;
}



// FUNCTION 1470abcee FUN_1470abcee body=70 status=ok
// SIG undefined FUN_1470abcee(void)

void FUN_1470abcee(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  lVar2 = *plVar1;
  *(longlong *)(param_2 + 0x10) = lVar2;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    *(longlong *)(lVar2 + 8) = param_2;
  }
  plVar3 = *(longlong **)(param_2 + 8);
  plVar1[1] = (longlong)plVar3;
  if (*(longlong *)(*param_1 + 8) == param_2) {
    plVar3 = (longlong *)(*param_1 + 8);
  }
  else {
    plVar3 = plVar3 + (ulonglong)(*plVar3 != param_2) * 2;
  }
  *plVar3 = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



// FUNCTION 1470abd34 FUN_1470abd34 body=68 status=ok
// SIG undefined FUN_1470abd34(void)

void FUN_1470abd34(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x10);
  *param_2 = lVar2;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    *(longlong **)(lVar2 + 8) = param_2;
  }
  plVar3 = (longlong *)param_2[1];
  *(longlong **)(lVar1 + 8) = plVar3;
  if (*(longlong **)(*param_1 + 8) == param_2) {
    plVar4 = (longlong *)(*param_1 + 8);
  }
  else {
    plVar4 = plVar3 + 2;
    if ((longlong *)plVar3[2] != param_2) {
      plVar4 = plVar3;
    }
  }
  *plVar4 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



// FUNCTION 1470abd78 FUN_1470abd78 body=16 status=ok
// SIG undefined FUN_1470abd78(void)

void FUN_1470abd78(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("deque<T> too long");
}



// FUNCTION 1470abd8a FUN_1470abd8a body=16 status=ok
// SIG undefined FUN_1470abd8a(void)

void FUN_1470abd8a(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("deque<T> too long");
}



// FUNCTION 1470abd9c FUN_1470abd9c body=164 status=ok
// SIG undefined FUN_1470abd9c(void)

void FUN_1470abd9c(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = *(ulonglong *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((((int)lVar1 + (int)uVar3 & 3U) == 0) && (*(ulonglong *)(param_1 + 0x10) <= lVar1 + 4U >> 2))
  {
    FUN_1470abe40(param_1);
    uVar3 = *(ulonglong *)(param_1 + 0x18);
    lVar1 = *(longlong *)(param_1 + 0x20);
  }
  uVar3 = *(longlong *)(param_1 + 0x10) * 4 - 1U & uVar3;
  *(ulonglong *)(param_1 + 0x18) = uVar3;
  uVar3 = uVar3 + lVar1;
  uVar4 = *(longlong *)(param_1 + 0x10) - 1U & uVar3 >> 2;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar4 * 8);
  if (lVar1 == 0) {
    uVar2 = FUN_14001cc68(0x10,0x10);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + uVar4 * 8) = uVar2;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar4 * 8);
  }
  *(undefined4 *)(lVar1 + (ulonglong)((uint)uVar3 & 3) * 4) = *param_2;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
  return;
}



// FUNCTION 1470abe40 FUN_1470abe40 body=340 status=ok
// SIG undefined FUN_1470abe40(void)

void FUN_1470abe40(longlong param_1)

{
  void *_Dst;
  void *pvVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  size_t _Size;
  
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  uVar3 = uVar4 + (uVar4 == 0);
  do {
    if (0xfffffffffffffff - uVar3 < uVar3) {
      FUN_1470abf96();
      goto LAB_1470abf8e;
    }
    uVar3 = uVar3 * 2;
  } while (uVar3 < 8 || uVar3 == uVar4);
  uVar4 = *(ulonglong *)(param_1 + 0x18) >> 2;
  _Dst = (void *)FUN_1470abfa8(uVar3);
  pvVar1 = (void *)((longlong)_Dst + uVar4 * 8);
  uVar3 = uVar3 - *(longlong *)(param_1 + 0x10);
  _Size = uVar4 * 8;
  lVar5 = *(longlong *)(param_1 + 0x10) - uVar4;
  memmove(pvVar1,(void *)(*(longlong *)(param_1 + 8) + _Size),lVar5 * 8);
  pvVar1 = (void *)((longlong)pvVar1 + lVar5 * 8);
  lVar5 = uVar4 - uVar3;
  if (uVar4 < uVar3 || lVar5 == 0) {
    memmove(pvVar1,*(void **)(param_1 + 8),_Size);
    memset((void *)((longlong)pvVar1 + _Size),0,(uVar3 - uVar4) * 8);
    pvVar1 = _Dst;
  }
  else {
    _Size = uVar3 * 8;
    memmove(pvVar1,*(void **)(param_1 + 8),_Size);
    memmove(_Dst,(void *)(*(longlong *)(param_1 + 8) + _Size),lVar5 * 8);
    pvVar1 = (void *)((longlong)_Dst + lVar5 * 8);
  }
  memset(pvVar1,0,_Size);
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    if (((*(ulonglong *)(param_1 + 0x10) & 0x1ffffffffffffe00) != 0) &&
       (lVar2 = *(longlong *)(lVar5 + -8), 0x1f < (ulonglong)((lVar5 + -8) - lVar2))) {
LAB_1470abf8e:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *(void **)(param_1 + 8) = _Dst;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + uVar3;
  return;
}



// FUNCTION 1470abf96 FUN_1470abf96 body=16 status=ok
// SIG undefined FUN_1470abf96(void)

void FUN_1470abf96(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("deque<T> too long");
}



// FUNCTION 1470abfa8 FUN_1470abfa8 body=65 status=ok
// SIG undefined FUN_1470abfa8(void)

void FUN_1470abfa8(ulonglong param_1)

{
  if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x1ff < param_1) {
    FUN_140c1ca1d();
    return;
  }
  FUN_14001cc68(param_1 * 8 + (ulonglong)(param_1 * 8 == 0),0x10);
  return;
}



// FUNCTION 1470abfea FUN_1470abfea body=16 status=ok
// SIG undefined FUN_1470abfea(void)

void FUN_1470abfea(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("deque<T> too long");
}



// FUNCTION 1470abffc FUN_1470abffc body=16 status=ok
// SIG undefined FUN_1470abffc(void)

void FUN_1470abffc(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("deque<T> too long");
}



// FUNCTION 1470ac064 FUN_1470ac064 body=108 status=ok
// SIG undefined FUN_1470ac064(void)

void FUN_1470ac064(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  local_24 = param_3;
  plVar1 = (longlong *)FUN_14479d2ce();
  uVar2 = FUN_14477b072(plVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ac0d1 FUN_1470ac0d1 body=55 status=ok
// SIG undefined FUN_1470ac0d1(void)

void FUN_1470ac0d1(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2d30 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2d30 = FUN_14171c317(FUN_1462a4377,uVar1,L"EGbxComparator");
  }
  return;
}



// FUNCTION 1470ac124 FUN_1470ac124 body=178 status=ok
// SIG undefined FUN_1470ac124(void)

void FUN_1470ac124(longlong param_1,char param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x20) != param_2) {
    if (param_2 == '\0') {
      QueryPerformanceCounter(&local_28);
      dVar2 = *(double *)(param_1 + 0x10) - ((double)local_28.QuadPart * DAT_14c83f420 + 16777216.0)
      ;
      lVar1 = *(longlong *)(param_1 + 0x18) - DAT_14c872be0;
    }
    else {
      QueryPerformanceCounter(&local_28);
      dVar2 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0 + *(double *)(param_1 + 0x10);
      lVar1 = *(longlong *)(param_1 + 0x18) + DAT_14c872be0;
    }
    *(double *)(param_1 + 0x10) = dVar2;
    *(longlong *)(param_1 + 0x18) = lVar1;
    *(char *)(param_1 + 0x20) = param_2;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ac1d8 FUN_1470ac1d8 body=304 status=ok
// SIG undefined FUN_1470ac1d8(void)

void FUN_1470ac1d8(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x28);
  lVar2 = param_1 + 0x38;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x50);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar5 = (longlong)iStack_74;
      cVar4 = FUN_140aee426(*(undefined8 *)(lVar3 + lVar5 * 0x28),param_3);
      if ((cVar4 != '\0') &&
         (lVar3 = lVar3 + lVar5 * 0x28, *(int *)(*(longlong *)(lVar3 + 8) + 0x28) == param_2)) {
        FUN_1470ac124(lVar3,1);
        break;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ac30a FUN_1470ac30a body=10 status=ok
// SIG undefined FUN_1470ac30a(void)

undefined8 FUN_1470ac30a(longlong *param_1,longlong *param_2)

{
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*param_1 == *param_2);
}



// FUNCTION 1470ac314 FUN_1470ac314 body=135 status=ok
// SIG undefined FUN_1470ac314(void)

void FUN_1470ac314(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < *(int *)(param_1 + 0x60)) {
    lVar3 = 0;
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x58);
      if (*(longlong *)(param_1 + 0x58) == 0) {
        lVar1 = param_1 + 0x48;
      }
      local_3c = (undefined4)lVar2;
      (*(code *)*param_2)(param_2[1],&local_3c,lVar1 + lVar3);
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 < *(int *)(param_1 + 0x60));
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ac39c FUN_1470ac39c body=236 status=ok
// SIG undefined FUN_1470ac39c(void)

undefined8
FUN_1470ac39c(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_d8,param_2);
  local_b0 = param_5;
  local_b8 = param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d0 = param_1;
  local_c8 = param_3;
  local_c0 = param_4;
  uVar1 = FUN_1402710dd(local_d8);
  if (local_98 != 0) {
    if (local_88 == (longlong *)0x0) {
      local_88 = local_78;
    }
    (**(code **)(*local_88 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470ac496 FUN_1470ac496 body=45 status=ok
// SIG undefined FUN_1470ac496(void)

longlong FUN_1470ac496(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c2d0ee(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ac4ca FUN_1470ac4ca body=38 status=ok
// SIG undefined FUN_1470ac4ca(void)

undefined8 FUN_1470ac4ca(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ac4f0 FUN_1470ac4f0 body=38 status=ok
// SIG undefined FUN_1470ac4f0(void)

undefined8 FUN_1470ac4f0(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ac516 FUN_1470ac516 body=38 status=ok
// SIG undefined FUN_1470ac516(void)

undefined8 FUN_1470ac516(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ac592 FUN_1470ac592 body=54 status=ok
// SIG undefined FUN_1470ac592(void)

undefined1 FUN_1470ac592(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470ac6aa(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 1470ac5f0 FUN_1470ac5f0 body=59 status=ok
// SIG undefined FUN_1470ac5f0(void)

undefined8 FUN_1470ac5f0(longlong *param_1)

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



// FUNCTION 1470ac636 FUN_1470ac636 body=38 status=ok
// SIG undefined FUN_1470ac636(void)

void FUN_1470ac636(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1470ac6aa FUN_1470ac6aa body=92 status=ok
// SIG undefined FUN_1470ac6aa(void)

undefined8 * FUN_1470ac6aa(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  lVar4 = param_2[6];
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_2[6];
    }
  }
  param_1[6] = lVar4;
  return param_1;
}



// FUNCTION 1470ac730 FUN_1470ac730 body=47 status=ok
// SIG undefined FUN_1470ac730(void)

void FUN_1470ac730(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1470ac776 FUN_1470ac776 body=75 status=ok
// SIG undefined FUN_1470ac776(void)

undefined8 FUN_1470ac776(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_144a787a6(param_2 + 0x10,param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1470ac7ea FUN_1470ac7ea body=59 status=ok
// SIG undefined FUN_1470ac7ea(void)

undefined8 FUN_1470ac7ea(longlong *param_1)

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



// FUNCTION 1470ac888 FUN_1470ac888 body=51 status=ok
// SIG undefined FUN_1470ac888(void)

void FUN_1470ac888(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1470ac8de FUN_1470ac8de body=94 status=ok
// SIG undefined FUN_1470ac8de(void)

undefined8 FUN_1470ac8de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined8 *)(lVar2 + -8) = *puVar1;
      FUN_1406fa324(lVar2,puVar1 + 1);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(puVar1 + 3);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470ac964 FUN_1470ac964 body=59 status=ok
// SIG undefined FUN_1470ac964(void)

undefined8 FUN_1470ac964(longlong *param_1)

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



// FUNCTION 1470ac9aa FUN_1470ac9aa body=38 status=ok
// SIG undefined FUN_1470ac9aa(void)

void FUN_1470ac9aa(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1470aca46 FUN_1470aca46 body=54 status=ok
// SIG undefined FUN_1470aca46(void)

undefined1 FUN_1470aca46(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140705122(param_2,param_3);
    param_3 = param_3 + 4;
    param_2 = param_2 + 4;
  }
  return 1;
}



// FUNCTION 1470acaa4 FUN_1470acaa4 body=59 status=ok
// SIG undefined FUN_1470acaa4(void)

undefined8 FUN_1470acaa4(longlong *param_1)

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



// FUNCTION 1470acaea FUN_1470acaea body=32 status=ok
// SIG undefined FUN_1470acaea(void)

void FUN_1470acaea(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 4) == '\x01') {
    FUN_1449e6b18(param_2);
    *(undefined1 *)(param_2 + 4) = 0;
  }
  return;
}



// FUNCTION 1470acb86 FUN_1470acb86 body=39 status=ok
// SIG undefined FUN_1470acb86(void)

void FUN_1470acb86(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1470b0c92(param_3,param_2,(longlong)param_4,param_5,param_6);
  return;
}



// FUNCTION 1470acbc6 FUN_1470acbc6 body=59 status=ok
// SIG undefined FUN_1470acbc6(void)

undefined8 FUN_1470acbc6(longlong *param_1)

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



// FUNCTION 1470acc0c FUN_1470acc0c body=32 status=ok
// SIG undefined FUN_1470acc0c(void)

void FUN_1470acc0c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc) == '\x01') {
    FUN_1449e6b18(param_2);
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1470acca8 FUN_1470acca8 body=39 status=ok
// SIG undefined FUN_1470acca8(void)

void FUN_1470acca8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1470b108c(param_3,param_2,(longlong)param_4,param_5,param_6);
  return;
}



// FUNCTION 1470acce8 FUN_1470acce8 body=59 status=ok
// SIG undefined FUN_1470acce8(void)

undefined8 FUN_1470acce8(longlong *param_1)

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



// FUNCTION 1470acd2e FUN_1470acd2e body=32 status=ok
// SIG undefined FUN_1470acd2e(void)

void FUN_1470acd2e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc) == '\x01') {
    FUN_1449e6b18(param_2);
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1470ace06 FUN_1470ace06 body=59 status=ok
// SIG undefined FUN_1470ace06(void)

undefined8 FUN_1470ace06(longlong *param_1)

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



// FUNCTION 1470acea6 FUN_1470acea6 body=29 status=ok
// SIG undefined FUN_1470acea6(void)

undefined8 FUN_1470acea6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470acec4 FUN_1470acec4 body=55 status=ok
// SIG undefined FUN_1470acec4(void)

void FUN_1470acec4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2d48 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2d48 = FUN_140002ddd(FUN_1462a43df,uVar1,L"GbxContextParam");
  }
  return;
}



// FUNCTION 1470acf8c FUN_1470acf8c body=59 status=ok
// SIG undefined FUN_1470acf8c(void)

undefined8 FUN_1470acf8c(longlong *param_1)

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



// FUNCTION 1470ad02c FUN_1470ad02c body=29 status=ok
// SIG undefined FUN_1470ad02c(void)

undefined8 FUN_1470ad02c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ad04a FUN_1470ad04a body=55 status=ok
// SIG undefined FUN_1470ad04a(void)

void FUN_1470ad04a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2d60 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2d60 = FUN_140002ddd(FUN_1462a4477,uVar1,L"GbxContextParam_Int");
  }
  return;
}



// FUNCTION 1470ad116 FUN_1470ad116 body=59 status=ok
// SIG undefined FUN_1470ad116(void)

undefined8 FUN_1470ad116(longlong *param_1)

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



// FUNCTION 1470ad1b6 FUN_1470ad1b6 body=29 status=ok
// SIG undefined FUN_1470ad1b6(void)

undefined8 FUN_1470ad1b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ad1d4 FUN_1470ad1d4 body=55 status=ok
// SIG undefined FUN_1470ad1d4(void)

void FUN_1470ad1d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2d78 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2d78 = FUN_140002ddd(FUN_1462a450d,uVar1,L"GbxContextParam_Float");
  }
  return;
}



// FUNCTION 1470ad29a FUN_1470ad29a body=59 status=ok
// SIG undefined FUN_1470ad29a(void)

undefined8 FUN_1470ad29a(longlong *param_1)

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



// FUNCTION 1470ad33a FUN_1470ad33a body=29 status=ok
// SIG undefined FUN_1470ad33a(void)

undefined8 FUN_1470ad33a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ad358 FUN_1470ad358 body=57 status=ok
// SIG undefined FUN_1470ad358(void)

void FUN_1470ad358(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2d90 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2d90 = FUN_140002ddd(FUN_1462a456c,uVar1,L"GbxContextParam_Bool");
  }
  return;
}



// FUNCTION 1470ad420 FUN_1470ad420 body=59 status=ok
// SIG undefined FUN_1470ad420(void)

undefined8 FUN_1470ad420(longlong *param_1)

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



// FUNCTION 1470ad4c4 FUN_1470ad4c4 body=29 status=ok
// SIG undefined FUN_1470ad4c4(void)

undefined8 FUN_1470ad4c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ad4e2 FUN_1470ad4e2 body=55 status=ok
// SIG undefined FUN_1470ad4e2(void)

void FUN_1470ad4e2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2dc0 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2dc0 = FUN_140002ddd(FUN_1462a4603,uVar1,L"GbxDef_GbxDefPtrCoreTest_SimpleStruct");
  }
  return;
}



// FUNCTION 1470ad522 FUN_1470ad522 body=28 status=ok
// SIG undefined FUN_1470ad522(void)

undefined8 FUN_1470ad522(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1470b1468(param_2,param_3);
  return param_2;
}



// FUNCTION 1470ad5fa FUN_1470ad5fa body=59 status=ok
// SIG undefined FUN_1470ad5fa(void)

undefined8 FUN_1470ad5fa(longlong *param_1)

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



// FUNCTION 1470ad69e FUN_1470ad69e body=29 status=ok
// SIG undefined FUN_1470ad69e(void)

undefined8 FUN_1470ad69e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ad6bc FUN_1470ad6bc body=55 status=ok
// SIG undefined FUN_1470ad6bc(void)

void FUN_1470ad6bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2dd8 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2dd8 = FUN_140002ddd(FUN_1462a4699,uVar1,L"GbxDef_GbxDefPtrCoreTest_DerivedStruct");
  }
  return;
}



// FUNCTION 1470ad6fc FUN_1470ad6fc body=28 status=ok
// SIG undefined FUN_1470ad6fc(void)

undefined8 FUN_1470ad6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1470b1544(param_2,param_3);
  return param_2;
}



// FUNCTION 1470ad7d4 FUN_1470ad7d4 body=59 status=ok
// SIG undefined FUN_1470ad7d4(void)

undefined8 FUN_1470ad7d4(longlong *param_1)

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



// FUNCTION 1470ad878 FUN_1470ad878 body=29 status=ok
// SIG undefined FUN_1470ad878(void)

undefined8 FUN_1470ad878(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ad896 FUN_1470ad896 body=55 status=ok
// SIG undefined FUN_1470ad896(void)

void FUN_1470ad896(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2df0 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2df0 =
         FUN_140002ddd(FUN_1462a472f,uVar1,L"GbxDef_GbxDefPtrCoreTest_DerivedStruct_SameStore");
  }
  return;
}



// FUNCTION 1470ad8d6 FUN_1470ad8d6 body=28 status=ok
// SIG undefined FUN_1470ad8d6(void)

undefined8 FUN_1470ad8d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1470b15c4(param_2,param_3);
  return param_2;
}



// FUNCTION 1470ad96c FUN_1470ad96c body=59 status=ok
// SIG undefined FUN_1470ad96c(void)

undefined8 FUN_1470ad96c(longlong *param_1)

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



// FUNCTION 1470ada0c FUN_1470ada0c body=29 status=ok
// SIG undefined FUN_1470ada0c(void)

undefined8 FUN_1470ada0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ada2a FUN_1470ada2a body=55 status=ok
// SIG undefined FUN_1470ada2a(void)

void FUN_1470ada2a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2e08 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2e08 = FUN_140002ddd(FUN_1462a47c5,uVar1,L"GbxDef_GbxDefPtrCoreTest_InvalidDef");
  }
  return;
}



// FUNCTION 1470adaba FUN_1470adaba body=62 status=ok
// SIG undefined FUN_1470adaba(void)

undefined1 FUN_1470adaba(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1470adc1a(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470adb20 FUN_1470adb20 body=59 status=ok
// SIG undefined FUN_1470adb20(void)

undefined8 FUN_1470adb20(longlong *param_1)

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



// FUNCTION 1470adbc4 FUN_1470adbc4 body=29 status=ok
// SIG undefined FUN_1470adbc4(void)

undefined8 FUN_1470adbc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470adbe2 FUN_1470adbe2 body=55 status=ok
// SIG undefined FUN_1470adbe2(void)

void FUN_1470adbe2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2e20 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2e20 = FUN_140002ddd(FUN_1462a485b,uVar1,L"GbxDef_GbxDefPtrCoreTest_CycleA");
  }
  return;
}



// FUNCTION 1470adc1a FUN_1470adc1a body=84 status=ok
// SIG undefined FUN_1470adc1a(void)

longlong * FUN_1470adc1a(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1470adc78 FUN_1470adc78 body=28 status=ok
// SIG undefined FUN_1470adc78(void)

undefined8 FUN_1470adc78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1470b16a2(param_2,param_3);
  return param_2;
}



// FUNCTION 1470adcfe FUN_1470adcfe body=62 status=ok
// SIG undefined FUN_1470adcfe(void)

undefined1 FUN_1470adcfe(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1470ade5e(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470add64 FUN_1470add64 body=59 status=ok
// SIG undefined FUN_1470add64(void)

undefined8 FUN_1470add64(longlong *param_1)

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



// FUNCTION 1470ade08 FUN_1470ade08 body=29 status=ok
// SIG undefined FUN_1470ade08(void)

undefined8 FUN_1470ade08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ade26 FUN_1470ade26 body=55 status=ok
// SIG undefined FUN_1470ade26(void)

void FUN_1470ade26(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2e38 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2e38 = FUN_140002ddd(FUN_1462a488a,uVar1,L"GbxDef_GbxDefPtrCoreTest_CycleB");
  }
  return;
}



// FUNCTION 1470ade5e FUN_1470ade5e body=84 status=ok
// SIG undefined FUN_1470ade5e(void)

longlong * FUN_1470ade5e(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1470adebc FUN_1470adebc body=28 status=ok
// SIG undefined FUN_1470adebc(void)

undefined8 FUN_1470adebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1470b1762(param_2,param_3);
  return param_2;
}



// FUNCTION 1470adf7a FUN_1470adf7a body=59 status=ok
// SIG undefined FUN_1470adf7a(void)

undefined8 FUN_1470adf7a(longlong *param_1)

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



// FUNCTION 1470ae01e FUN_1470ae01e body=29 status=ok
// SIG undefined FUN_1470ae01e(void)

undefined8 FUN_1470ae01e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ae03c FUN_1470ae03c body=55 status=ok
// SIG undefined FUN_1470ae03c(void)

void FUN_1470ae03c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2e50 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2e50 = FUN_140002ddd(FUN_1462a4989,uVar1,L"GbxDef_GbxDefPtrCoreTest_ForeignForward");
  }
  return;
}



// FUNCTION 1470ae074 FUN_1470ae074 body=37 status=ok
// SIG undefined FUN_1470ae074(void)

undefined ** FUN_1470ae074(undefined8 param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  if (DAT_14c9a40d8 == *param_2) {
    FUN_1470ae0e2();
    ppuVar1 = &PTR_PTR_14c75f6c8;
  }
  else {
    ppuVar1 = (undefined **)0x0;
  }
  return ppuVar1;
}



// FUNCTION 1470ae09a FUN_1470ae09a body=53 status=ok
// SIG undefined FUN_1470ae09a(void)

undefined8 * FUN_1470ae09a(undefined8 param_1,undefined8 *param_2,undefined **param_3)

{
  undefined8 uVar1;
  
  FUN_1470ae0e2();
  uVar1 = DAT_14c9a40d8;
  if (param_3 != &PTR_PTR_14c75f6c8) {
    uVar1 = 0;
  }
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1470ae0e2 FUN_1470ae0e2 body=79 status=ok
// SIG undefined FUN_1470ae0e2(void)

void FUN_1470ae0e2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3b68) {
    FUN_144b3d300(&DAT_14c9a3b68);
    if (DAT_14c9a3b68 == -1) {
      _Init_thread_footer(&DAT_14c9a3b68);
      return;
    }
  }
  return;
}



// FUNCTION 1470ae17a FUN_1470ae17a body=59 status=ok
// SIG undefined FUN_1470ae17a(void)

undefined8 FUN_1470ae17a(longlong *param_1)

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



// FUNCTION 1470ae274 FUN_1470ae274 body=59 status=ok
// SIG undefined FUN_1470ae274(void)

undefined8 FUN_1470ae274(longlong *param_1)

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



// FUNCTION 1470ae2ba FUN_1470ae2ba body=38 status=ok
// SIG undefined FUN_1470ae2ba(void)

void FUN_1470ae2ba(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1470ae330 FUN_1470ae330 body=73 status=ok
// SIG undefined FUN_1470ae330(void)

void FUN_1470ae330(undefined8 param_1,undefined8 *param_2)

{
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  *param_2 = &PTR_FUN_14a182140;
  FUN_141028572(param_2 + 1);
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  return;
}



// FUNCTION 1470ae37a FUN_1470ae37a body=47 status=ok
// SIG undefined FUN_1470ae37a(void)

void FUN_1470ae37a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a182140;
  FUN_141028572(param_2 + 1);
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  return;
}



// FUNCTION 1470ae3ce FUN_1470ae3ce body=93 status=ok
// SIG undefined FUN_1470ae3ce(void)

undefined1 FUN_1470ae3ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -0xc);
      FUN_14020a6cc(param_2 + -0x10,1);
      FUN_144a787a6(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470ae454 FUN_1470ae454 body=59 status=ok
// SIG undefined FUN_1470ae454(void)

undefined8 FUN_1470ae454(longlong *param_1)

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



// FUNCTION 1470ae49a FUN_1470ae49a body=34 status=ok
// SIG undefined FUN_1470ae49a(void)

void FUN_1470ae49a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_145c25a32(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1470ae50a FUN_1470ae50a body=38 status=ok
// SIG undefined FUN_1470ae50a(void)

undefined8 FUN_1470ae50a(undefined8 param_1,int param_2)

{
  FUN_145c25a32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ae530 FUN_1470ae530 body=55 status=ok
// SIG undefined FUN_1470ae530(void)

void FUN_1470ae530(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2e98 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2e98 = FUN_140002ddd(FUN_1462a4b1d,uVar1,L"TestInlineStruct");
  }
  return;
}



// FUNCTION 1470ae568 FUN_1470ae568 body=80 status=ok
// SIG undefined FUN_1470ae568(void)

void FUN_1470ae568(undefined8 param_1,undefined8 *param_2)

{
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14a182140;
  FUN_141028572(param_2 + 1);
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = &PTR_FUN_14a1822b0;
  *(undefined4 *)(param_2 + 6) = 0;
  return;
}



// FUNCTION 1470ae5b8 FUN_1470ae5b8 body=58 status=ok
// SIG undefined FUN_1470ae5b8(void)

void FUN_1470ae5b8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a182140;
  FUN_141028572(param_2 + 1);
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = &PTR_FUN_14a1822b0;
  *(undefined4 *)(param_2 + 6) = 0;
  return;
}



// FUNCTION 1470ae616 FUN_1470ae616 body=99 status=ok
// SIG undefined FUN_1470ae616(void)

undefined8 FUN_1470ae616(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      *(undefined4 *)(param_2 + -8) = *(undefined4 *)(param_3 + -0xc);
      FUN_14020a6cc(param_2 + -0x10,1);
      FUN_144a787a6(param_2,param_3);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      param_3 = param_3 + 0x38;
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470ae6a2 FUN_1470ae6a2 body=59 status=ok
// SIG undefined FUN_1470ae6a2(void)

undefined8 FUN_1470ae6a2(longlong *param_1)

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



// FUNCTION 1470ae6e8 FUN_1470ae6e8 body=34 status=ok
// SIG undefined FUN_1470ae6e8(void)

void FUN_1470ae6e8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_145c25a32(param_2);
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1470ae758 FUN_1470ae758 body=38 status=ok
// SIG undefined FUN_1470ae758(void)

undefined8 FUN_1470ae758(undefined8 param_1,int param_2)

{
  FUN_145c25a32();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ae77e FUN_1470ae77e body=57 status=ok
// SIG undefined FUN_1470ae77e(void)

void FUN_1470ae77e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2eb0 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2eb0 = FUN_140002ddd(FUN_1462a4bb5,uVar1,L"TestDerivedInlineStruct");
  }
  return;
}



// FUNCTION 1470ae846 FUN_1470ae846 body=59 status=ok
// SIG undefined FUN_1470ae846(void)

undefined8 FUN_1470ae846(longlong *param_1)

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



// FUNCTION 1470ae8e6 FUN_1470ae8e6 body=29 status=ok
// SIG undefined FUN_1470ae8e6(void)

undefined8 FUN_1470ae8e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470ae904 FUN_1470ae904 body=55 status=ok
// SIG undefined FUN_1470ae904(void)

void FUN_1470ae904(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2ec8 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2ec8 = FUN_140002ddd(FUN_1462a4c4b,uVar1,L"TestUnrelatedInlineStruct");
  }
  return;
}



// FUNCTION 1470ae994 FUN_1470ae994 body=85 status=ok
// SIG undefined FUN_1470ae994(void)

undefined8 FUN_1470ae994(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1401f3db8(param_2 + 8 + lVar1,param_3 + 8 + lVar1);
      *(undefined4 *)(param_2 + 0x20 + lVar1) = *(undefined4 *)(param_3 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470aea12 FUN_1470aea12 body=59 status=ok
// SIG undefined FUN_1470aea12(void)

undefined8 FUN_1470aea12(longlong *param_1)

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



// FUNCTION 1470aea58 FUN_1470aea58 body=34 status=ok
// SIG undefined FUN_1470aea58(void)

void FUN_1470aea58(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_1470aeb26(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1470aeac8 FUN_1470aeac8 body=38 status=ok
// SIG undefined FUN_1470aeac8(void)

undefined8 FUN_1470aeac8(undefined8 param_1,int param_2)

{
  FUN_1470aeb26();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470aeaee FUN_1470aeaee body=55 status=ok
// SIG undefined FUN_1470aeaee(void)

void FUN_1470aeaee(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2ee0 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2ee0 = FUN_140002ddd(FUN_1462a4ce1,uVar1,L"TEST_InlineStructContainer");
  }
  return;
}



// FUNCTION 1470aeb26 FUN_1470aeb26 body=66 status=ok
// SIG undefined FUN_1470aeb26(void)

void FUN_1470aeb26(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a182590;
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
                    /* WARNING: Could not recover jumptable at 0x0001470aeb5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1470aeb6a FUN_1470aeb6a body=148 status=ok
// SIG undefined FUN_1470aeb6a(void)

void FUN_1470aeb6a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_88 [40];
  undefined **local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_14a182700;
  local_60 = &PTR_FUN_14a182140;
  FUN_141028572(local_58);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0x449a4000;
  FUN_1470aee1e(param_2 + 1,&local_60);
  FUN_145c25a32(&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470aec00 FUN_1470aec00 body=126 status=ok
// SIG undefined FUN_1470aec00(void)

void FUN_1470aec00(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = &PTR_FUN_14a182700;
  local_48 = &PTR_FUN_14a182140;
  FUN_141028572(local_40);
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0x449a4000;
  FUN_1470aee1e(param_2 + 1,&local_48);
  FUN_145c25a32(&local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470aeca4 FUN_1470aeca4 body=62 status=ok
// SIG undefined FUN_1470aeca4(void)

undefined1 FUN_1470aeca4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_1401f3db8(param_2,param_3);
      param_3 = param_3 + 0x20;
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470aed0a FUN_1470aed0a body=59 status=ok
// SIG undefined FUN_1470aed0a(void)

undefined8 FUN_1470aed0a(longlong *param_1)

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



// FUNCTION 1470aed50 FUN_1470aed50 body=34 status=ok
// SIG undefined FUN_1470aed50(void)

void FUN_1470aed50(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1470aefd8(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1470aedc0 FUN_1470aedc0 body=38 status=ok
// SIG undefined FUN_1470aedc0(void)

undefined8 FUN_1470aedc0(undefined8 param_1,int param_2)

{
  FUN_1470aefd8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470aede6 FUN_1470aede6 body=55 status=ok
// SIG undefined FUN_1470aede6(void)

void FUN_1470aede6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2ef8 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2ef8 = FUN_140002ddd(FUN_1462a4d77,uVar1,L"TEST_InlineStructContainerWithDefault");
  }
  return;
}



// FUNCTION 1470aee1e FUN_1470aee1e body=276 status=ok
// SIG undefined FUN_1470aee1e(void)

undefined8 * FUN_1470aee1e(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar3 = (longlong *)FUN_1470aef32(param_2);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar5 = (longlong *)param_1[1];
    if (plVar5 == (longlong *)0x0) goto LAB_1470aeeaa;
    param_1[1] = 0;
LAB_1470aee6b:
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
    if (plVar3 == (longlong *)0x0) goto LAB_1470aeeaa;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = plVar3 + 2;
    plVar5 = (longlong *)param_1[1];
    if (plVar3 == plVar5) {
      LOCK();
      plVar5 = plVar3 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      param_1[1] = plVar3;
      if (plVar5 != (longlong *)0x0) goto LAB_1470aee6b;
    }
  }
  LOCK();
  plVar5 = plVar3 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1470aeeaa:
  if (DAT_14c9a2e98 == 0) {
    uVar4 = FUN_140e8229d();
    DAT_14c9a2e98 = FUN_140002ddd(FUN_1462a4b1d,uVar4,L"TestInlineStruct");
  }
  FUN_14485c47a(param_1 + 2,DAT_14c9a2e98);
  return param_1;
}



// FUNCTION 1470aef32 FUN_1470aef32 body=125 status=ok
// SIG undefined FUN_1470aef32(void)

undefined8 * FUN_1470aef32(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14a182710;
  puVar1[2] = &PTR_FUN_14a182140;
  FUN_144a8b00e(puVar1 + 3,param_1 + 8);
  puVar1[5] = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((longlong)puVar1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(param_1 + 0x28);
  return puVar1;
}



// FUNCTION 1470aefba FUN_1470aefba body=29 status=ok
// SIG undefined FUN_1470aefba(void)

undefined8 FUN_1470aefba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470aefd8 FUN_1470aefd8 body=66 status=ok
// SIG undefined FUN_1470aefd8(void)

void FUN_1470aefd8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a182700;
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
                    /* WARNING: Could not recover jumptable at 0x0001470af00f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1470af084 FUN_1470af084 body=59 status=ok
// SIG undefined FUN_1470af084(void)

undefined8 FUN_1470af084(longlong *param_1)

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



// FUNCTION 1470af124 FUN_1470af124 body=29 status=ok
// SIG undefined FUN_1470af124(void)

undefined8 FUN_1470af124(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470af142 FUN_1470af142 body=55 status=ok
// SIG undefined FUN_1470af142(void)

void FUN_1470af142(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2f28 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2f28 = FUN_140002ddd(FUN_1462a4e05,uVar1,L"TestForwardDeclaredInlineStruct");
  }
  return;
}



// FUNCTION 1470af1e2 FUN_1470af1e2 body=59 status=ok
// SIG undefined FUN_1470af1e2(void)

undefined8 FUN_1470af1e2(longlong *param_1)

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



// FUNCTION 1470af282 FUN_1470af282 body=29 status=ok
// SIG undefined FUN_1470af282(void)

undefined8 FUN_1470af282(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470af2a0 FUN_1470af2a0 body=55 status=ok
// SIG undefined FUN_1470af2a0(void)

void FUN_1470af2a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2f40 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2f40 =
         FUN_140002ddd(FUN_1462a4f05,uVar1,L"TestInvalidForwardDeclaredChildInlineStruct");
  }
  return;
}



// FUNCTION 1470af330 FUN_1470af330 body=80 status=ok
// SIG undefined FUN_1470af330(void)

undefined8 FUN_1470af330(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined2 *)(lVar1 + -8) = *(undefined2 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1406fa6b6();
      lVar2 = lVar2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470af3a8 FUN_1470af3a8 body=59 status=ok
// SIG undefined FUN_1470af3a8(void)

undefined8 FUN_1470af3a8(longlong *param_1)

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



// FUNCTION 1470af3ee FUN_1470af3ee body=38 status=ok
// SIG undefined FUN_1470af3ee(void)

void FUN_1470af3ee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1470af48e FUN_1470af48e body=63 status=ok
// SIG undefined FUN_1470af48e(void)

undefined1 FUN_1470af48e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1470b4292(param_2,param_3);
    param_3 = param_3 + 0x150;
    param_2 = param_2 + 0x150;
  }
  return 1;
}



// FUNCTION 1470af4f6 FUN_1470af4f6 body=59 status=ok
// SIG undefined FUN_1470af4f6(void)

undefined8 FUN_1470af4f6(longlong *param_1)

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



// FUNCTION 1470af542 FUN_1470af542 body=38 status=ok
// SIG undefined FUN_1470af542(void)

void FUN_1470af542(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x150) == '\x01') {
    FUN_1414a735c(param_2);
    *(undefined1 *)(param_2 + 0x150) = 0;
  }
  return;
}



// FUNCTION 1470af5b4 FUN_1470af5b4 body=47 status=ok
// SIG undefined FUN_1470af5b4(void)

void FUN_1470af5b4(undefined8 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = &PTR_FUN_14a182e30;
  FUN_141028572(param_2 + 1);
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  return;
}



// FUNCTION 1470af5e4 FUN_1470af5e4 body=40 status=ok
// SIG undefined FUN_1470af5e4(void)

void FUN_1470af5e4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14a182e30;
  FUN_141028572(param_2 + 1);
  *(undefined4 *)((longlong)param_2 + 0x14) = 0;
  return;
}



// FUNCTION 1470af630 FUN_1470af630 body=93 status=ok
// SIG undefined FUN_1470af630(void)

undefined1 FUN_1470af630(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + 0x10 + lVar1) = *(undefined4 *)(param_3 + 0xc + lVar1);
      FUN_14020a6cc(param_2 + 8 + lVar1,1);
      *(undefined4 *)(param_2 + 0x14 + lVar1) = *(undefined4 *)(param_3 + 0x14 + lVar1);
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470af6b6 FUN_1470af6b6 body=59 status=ok
// SIG undefined FUN_1470af6b6(void)

undefined8 FUN_1470af6b6(longlong *param_1)

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



// FUNCTION 1470af6fc FUN_1470af6fc body=43 status=ok
// SIG undefined FUN_1470af6fc(void)

void FUN_1470af6fc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14a182e30;
    FUN_1449e6b18(param_2 + 1);
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1470af776 FUN_1470af776 body=52 status=ok
// SIG undefined FUN_1470af776(void)

undefined8 * FUN_1470af776(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a182e30;
  FUN_1449e6b18(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470af7aa FUN_1470af7aa body=55 status=ok
// SIG undefined FUN_1470af7aa(void)

void FUN_1470af7aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2fa0 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2fa0 = FUN_140002ddd(FUN_1462a4dd6,uVar1,L"TestStructContext");
  }
  return;
}



// FUNCTION 1470af872 FUN_1470af872 body=59 status=ok
// SIG undefined FUN_1470af872(void)

undefined8 FUN_1470af872(longlong *param_1)

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



// FUNCTION 1470af912 FUN_1470af912 body=29 status=ok
// SIG undefined FUN_1470af912(void)

undefined8 FUN_1470af912(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470af930 FUN_1470af930 body=55 status=ok
// SIG undefined FUN_1470af930(void)

void FUN_1470af930(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2fd0 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2fd0 = FUN_140002ddd(FUN_1462a51b9,uVar1,L"GbxContextParam_TestInt");
  }
  return;
}



// FUNCTION 1470af9fc FUN_1470af9fc body=59 status=ok
// SIG undefined FUN_1470af9fc(void)

undefined8 FUN_1470af9fc(longlong *param_1)

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



// FUNCTION 1470afa9c FUN_1470afa9c body=29 status=ok
// SIG undefined FUN_1470afa9c(void)

undefined8 FUN_1470afa9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470afaba FUN_1470afaba body=55 status=ok
// SIG undefined FUN_1470afaba(void)

void FUN_1470afaba(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2fe8 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2fe8 = FUN_140002ddd(FUN_1462a524f,uVar1,L"GbxContextParam_TestFloat");
  }
  return;
}



// FUNCTION 1470afaf4 FUN_1470afaf4 body=61 status=ok
// SIG undefined FUN_1470afaf4(void)

undefined8 * FUN_1470afaf4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 3)])(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470afb32 FUN_1470afb32 body=65 status=ok
// SIG undefined FUN_1470afb32(void)

void FUN_1470afb32(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0x18)])(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *param_2;
  lVar1 = param_2[1];
  *(longlong *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1470afb74 FUN_1470afb74 body=46 status=ok
// SIG undefined FUN_1470afb74(void)

void FUN_1470afb74(longlong param_1,undefined4 *param_2)

{
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_1 + 0x18)])(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 1470afba4 FUN_1470afba4 body=83 status=ok
// SIG undefined FUN_1470afba4(void)

undefined8 * FUN_1470afba4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a184350;
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470afbf8 FUN_1470afbf8 body=78 status=ok
// SIG undefined FUN_1470afbf8(void)

longlong * FUN_1470afbf8(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1412b7fd3(*param_1,(int)param_1[1]);
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



// FUNCTION 1470afc46 FUN_1470afc46 body=96 status=ok
// SIG undefined FUN_1470afc46(void)

void FUN_1470afc46(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  
  puVar3 = &DAT_14c9a3370;
  if (DAT_14c9a3378 != (undefined *)0x0) {
    puVar3 = DAT_14c9a3378;
  }
  lVar4 = (longlong)*(int *)(DAT_14c9a3338 + 0x1c + (longlong)param_1 * 0x20);
  iVar2 = *(int *)(puVar3 + lVar4 * 4);
  if (iVar2 == param_1) {
    puVar1 = (undefined4 *)(puVar3 + lVar4 * 4);
  }
  else {
    do {
      lVar4 = (longlong)iVar2;
      iVar2 = *(int *)(DAT_14c9a3338 + 0x18 + lVar4 * 0x20);
    } while (iVar2 != param_1);
    puVar1 = (undefined4 *)(DAT_14c9a3338 + lVar4 * 0x20 + 0x18);
  }
  *puVar1 = *(undefined4 *)(DAT_14c9a3338 + (longlong)param_1 * 0x20 + 0x18);
  FUN_1470afca6();
  return;
}



// FUNCTION 1470afca6 FUN_1470afca6 body=194 status=ok
// SIG undefined FUN_1470afca6(void)

void FUN_1470afca6(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  int iVar5;
  
  lVar2 = DAT_14c9a3338;
  lVar4 = (longlong)param_1 * 0x20;
  FUN_1412b7fd3(*(undefined8 *)(DAT_14c9a3338 + 8 + lVar4),
                *(undefined4 *)(DAT_14c9a3338 + 0x10 + lVar4));
  if (*(longlong *)(lVar2 + 8 + lVar4) != 0) {
    FUN_1400020a8();
  }
  lVar2 = DAT_14c9a3338;
  if (DAT_14c9a336c != 0) {
    *(int *)(DAT_14c9a3338 + (longlong)DAT_14c9a3368 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar5 = -1;
  if (0 < DAT_14c9a336c) {
    iVar5 = DAT_14c9a3368;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar5;
  DAT_14c9a336c = DAT_14c9a336c + 1;
  puVar3 = &DAT_14c9a3348;
  if (DAT_14c9a3358 != (undefined *)0x0) {
    puVar3 = DAT_14c9a3358;
  }
  iVar5 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar5 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c9a3368 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1470afd68 FUN_1470afd68 body=48 status=ok
// SIG undefined FUN_1470afd68(void)

void FUN_1470afd68(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 1470afdb2 FUN_1470afdb2 body=42 status=ok
// SIG undefined FUN_1470afdb2(void)

longlong FUN_1470afdb2(longlong param_1,int param_2)

{
  FUN_14596ac38(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470afddc FUN_1470afddc body=31 status=ok
// SIG undefined FUN_1470afddc(void)

undefined8 FUN_1470afddc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470afe18 FUN_1470afe18 body=93 status=ok
// SIG undefined FUN_1470afe18(void)

void FUN_1470afe18(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a183250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470afe76 FUN_1470afe76 body=93 status=ok
// SIG undefined FUN_1470afe76(void)

void FUN_1470afe76(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a183250;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470afed4 FUN_1470afed4 body=126 status=ok
// SIG undefined FUN_1470afed4(void)

void FUN_1470afed4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a183250;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470aff43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470aff5e FUN_1470aff5e body=38 status=ok
// SIG undefined FUN_1470aff5e(void)

undefined8 FUN_1470aff5e(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470aff84 FUN_1470aff84 body=7 status=ok
// SIG undefined FUN_1470aff84(void)

void FUN_1470aff84(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



// FUNCTION 1470aff8c FUN_1470aff8c body=128 status=ok
// SIG undefined FUN_1470aff8c(void)

void FUN_1470aff8c(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c9a3b80;
  if (DAT_14c9a3bb4 != 0) {
    *(int *)(DAT_14c9a3b80 + (longlong)DAT_14c9a3bb0 * 0x2c) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x2c) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a3bb4) {
    iVar4 = DAT_14c9a3bb0;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x2c) = iVar4;
  DAT_14c9a3bb4 = DAT_14c9a3bb4 + 1;
  puVar3 = &DAT_14c9a3b90;
  if (DAT_14c9a3ba0 != (undefined *)0x0) {
    puVar3 = DAT_14c9a3ba0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c9a3bb0 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1470b000c FUN_1470b000c body=112 status=ok
// SIG undefined FUN_1470b000c(void)

void FUN_1470b000c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1470b00c8 FUN_1470b00c8 body=38 status=ok
// SIG undefined FUN_1470b00c8(void)

undefined8 FUN_1470b00c8(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470b00ee FUN_1470b00ee body=143 status=ok
// SIG undefined FUN_1470b00ee(void)

void FUN_1470b00ee(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470b017e FUN_1470b017e body=164 status=ok
// SIG undefined FUN_1470b017e(void)

void FUN_1470b017e(longlong *param_1,undefined8 param_2)

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
        goto LAB_1470b01fe;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1470b01fe:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1470b0222 FUN_1470b0222 body=90 status=ok
// SIG undefined FUN_1470b0222(void)

void FUN_1470b0222(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14111bc38();
  return;
}



// FUNCTION 1470b027c FUN_1470b027c body=114 status=ok
// SIG undefined FUN_1470b027c(void)

void FUN_1470b027c(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 1470b02ee FUN_1470b02ee body=48 status=ok
// SIG undefined FUN_1470b02ee(void)

void FUN_1470b02ee(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 1470b031e FUN_1470b031e body=128 status=ok
// SIG undefined FUN_1470b031e(void)

void FUN_1470b031e(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c9a3928;
  if (DAT_14c9a395c != 0) {
    *(int *)(DAT_14c9a3928 + (longlong)DAT_14c9a3958 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a395c) {
    iVar4 = DAT_14c9a3958;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14c9a395c = DAT_14c9a395c + 1;
  puVar3 = &DAT_14c9a3938;
  if (DAT_14c9a3948 != (undefined *)0x0) {
    puVar3 = DAT_14c9a3948;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c9a3958 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1470b039e FUN_1470b039e body=114 status=ok
// SIG undefined FUN_1470b039e(void)

void FUN_1470b039e(longlong *param_1,int param_2)

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



// FUNCTION 1470b0410 FUN_1470b0410 body=274 status=ok
// SIG undefined FUN_1470b0410(void)

void FUN_1470b0410(longlong param_1,longlong *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50 [2];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
  FUN_1400021e4(&local_40,local_50);
  local_78 = *(undefined8 *)(param_1 + 0x18);
  FUN_14029eeae(&local_78,local_70);
  FUN_144a882a8(local_60,local_70,&DAT_149e001d8);
  FUN_1401c7f3e(&local_40,local_60,local_50);
  if (&local_40 == param_2) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_40;
    local_40 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)local_38;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_38._4_4_;
    local_38 = 0;
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b0524 FUN_1470b0524 body=361 status=ok
// SIG undefined FUN_1470b0524(void)

ulonglong FUN_1470b0524(ulonglong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = param_1;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if ((longlong)*(int *)(param_1 + 0x58) != 0) {
      lVar4 = 0;
      do {
        uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x50) + lVar4);
        if (*(longlong *)(uVar3 + 0x44) == param_2) goto LAB_1470b0647;
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(param_1 + 0x58) * 8 != lVar4);
    }
    local_58 = local_58 & 0xffffffff00000000;
    FUN_140af9fb2(&local_38,DAT_14c951640,*(undefined8 *)(param_1 + 0x10),param_2);
    local_48 = 0;
    uStack_40 = 0;
    local_50 = 1;
    local_58 = param_1;
    uVar3 = FUN_1470ac39c(DAT_14c951640,*(undefined8 *)(param_1 + 0x10),local_38,0x800000);
    if ((uVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(uVar3);
    }
    iVar1 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
      FUN_1470b5478((longlong *)(param_1 + 0x50),iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x50);
    *(ulonglong *)(lVar4 + (longlong)iVar1 * 8) = uVar3;
    if ((uVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(uVar3);
      uVar3 = *(ulonglong *)(lVar4 + (longlong)iVar1 * 8);
    }
    uVar2 = *(uint *)(uVar3 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    FUN_1447f71cc(lVar4,0x40000000);
    *(longlong *)(uVar3 + 0x44) = param_2;
    FUN_1470b068e(uVar3,param_1 + 0x30);
  }
LAB_1470b0647:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1470b068e FUN_1470b068e body=102 status=ok
// SIG undefined FUN_1470b068e(void)

void FUN_1470b068e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  iVar1 = *(int *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_1406fa324(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar4 = (longlong)iVar1 << 3;
    lVar3 = lVar2;
    do {
      FUN_140721fbe(param_1 + 0x30,lVar3);
      lVar3 = lVar3 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
    return;
  }
  return;
}



// FUNCTION 1470b06f4 FUN_1470b06f4 body=264 status=ok
// SIG undefined FUN_1470b06f4(void)

/* WARNING: Removing unreachable block (ram,0x0001470b07b9) */

int FUN_1470b06f4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_2[1] == 0) {
    iVar4 = 0x10;
  }
  else {
    lVar7 = (longlong)(int)param_2[1] * 0x30;
    lVar6 = *param_2 + 0x28;
    iVar4 = 0x10;
    uVar2 = local_58;
    uVar3 = local_50;
    do {
      local_50 = uVar3;
      local_58 = uVar2;
      FUN_1400021e4(lVar6,&local_58);
      FUN_1401e8822(&local_58);
      iVar5 = (int)local_50 + -1;
      if ((int)local_50 == 0) {
        iVar5 = 0;
      }
      if (iVar5 <= iVar4) {
        iVar5 = iVar4;
      }
      iVar4 = iVar5;
      iVar5 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
        FUN_1447a1bd6(param_1,iVar5);
      }
      lVar1 = *param_1;
      lVar8 = (longlong)iVar5 * 0x10;
      *(undefined8 *)(lVar1 + lVar8) = 0;
      *(undefined8 *)(lVar1 + lVar8) = local_58;
      local_58 = 0;
      uVar2 = local_58;
      *(int *)(lVar1 + 8 + lVar8) = (int)local_50;
      *(undefined4 *)(lVar1 + 0xc + lVar8) = local_50._4_4_;
      local_50 = 0;
      uVar3 = local_50;
      local_50 = 0;
      local_58 = 0;
      lVar6 = lVar6 + 0x30;
      lVar7 = lVar7 + -0x30;
    } while (lVar7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1470b07fe FUN_1470b07fe body=236 status=ok
// SIG undefined FUN_1470b07fe(void)

void FUN_1470b07fe(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [40];
  code *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined1 *local_58;
  undefined2 *local_50;
  int local_48;
  undefined1 local_40 [8];
  undefined2 **local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_142b2be76(param_2);
  if (cVar1 != '\0') {
    uVar2 = FUN_142b2be6e(param_2);
    FUN_1400021e4(uVar2,&local_50);
    local_30 = FUN_145c5d822(param_2);
    puVar3 = local_50;
    if (local_48 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_145d03cb4(L"Event %s\r\n",puVar3);
    local_60 = FUN_142b30e60;
    local_58 = local_40;
    local_38 = &local_50;
    FUN_1470ac314(param_2);
    local_70 = FUN_142b30fa6;
    local_68 = local_40;
    FUN_142b2beae(param_2);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1404eeb8e(param_2);
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470b08ec FUN_1470b08ec body=194 status=ok
// SIG undefined FUN_1470b08ec(void)

undefined8 * FUN_1470b08ec(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1470b09af(&local_30,param_3);
  local_38 = 0;
  (**(code **)(*param_1 + 8))(param_1,&local_38,local_30);
  puVar2 = (undefined8 *)(**(code **)(*local_30 + 0x98))(local_30);
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  if (local_30 != (longlong *)0x0) {
    (**(code **)*local_30)(local_30,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b09af FUN_1470b09af body=171 status=ok
// SIG undefined FUN_1470b09af(void)

undefined8 * FUN_1470b09af(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar1[5] = 0;
  puVar1[6] = 0x800000000;
  puVar2 = puVar1 + 0xf;
  if (param_2 == '\0') {
    ppuVar3 = &PTR_FUN_14a185660;
    *puVar1 = &PTR_FUN_14a185660;
    ppuVar4 = &PTR_FUN_14a185700;
    puVar1[7] = &PTR_FUN_14a185700;
    FUN_145fe072c(puVar1 + 7,puVar2,0);
  }
  else {
    ppuVar3 = &PTR_FUN_14a184e80;
    *puVar1 = &PTR_FUN_14a184e80;
    ppuVar4 = &PTR_FUN_14a184f20;
    puVar1[7] = &PTR_FUN_14a184f20;
    FUN_14619f946(puVar1 + 7,puVar2,0);
  }
  *puVar1 = ppuVar3;
  puVar1[7] = ppuVar4;
  *puVar2 = 0;
  puVar1[0x10] = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 1470b0a5a FUN_1470b0a5a body=121 status=ok
// SIG undefined FUN_1470b0a5a(void)

undefined8 * FUN_1470b0a5a(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_FUN_14a1844a8;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar4 = *(longlong *)(param_2 + 0x18);
  if (lVar4 == 0) {
    param_1[2] = uVar3;
    param_1[3] = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    plVar5 = (longlong *)param_1[3];
    param_1[2] = uVar3;
    param_1[3] = lVar4;
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
  }
  return param_1;
}



// FUNCTION 1470b0ad4 FUN_1470b0ad4 body=52 status=ok
// SIG undefined FUN_1470b0ad4(void)

void FUN_1470b0ad4(longlong param_1,longlong param_2,longlong param_3)

{
  if ((((*(longlong *)(param_1 + 8) != 0) && (param_3 != 0)) && (param_2 != 0)) &&
     ((*(longlong *)(param_1 + 0x10) != 0 && (DAT_14c963ff1 == '\x01')))) {
    FUN_1449b16b6();
    return;
  }
  return;
}



// FUNCTION 1470b0b08 thunk_FUN_1470b0b0e body=5 status=ok
// SIG undefined thunk_FUN_1470b0b0e(void)

void thunk_FUN_1470b0b0e(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*param_1 != 0) {
    param_1[2] = param_1[1];
    lVar2 = (longlong)*param_1 * 0x88;
    lVar1 = DAT_14c9a3d60 + lVar2;
    if (*(int *)(DAT_14c9a3d60 + -0x1c + lVar2) < 0) {
      *(undefined4 *)(lVar1 + -0x20) = 0;
      FUN_1470b654e(lVar1 + -0x88,0);
    }
    else {
      *(undefined4 *)(lVar1 + -0x20) = 0;
    }
    FUN_1409d1656(param_1);
    return;
  }
  return;
}



// FUNCTION 1470b0b0e FUN_1470b0b0e body=105 status=ok
// SIG undefined FUN_1470b0b0e(void)

void FUN_1470b0b0e(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*param_1 != 0) {
    param_1[2] = param_1[1];
    lVar2 = (longlong)*param_1 * 0x88;
    lVar1 = DAT_14c9a3d60 + lVar2;
    if (*(int *)(DAT_14c9a3d60 + -0x1c + lVar2) < 0) {
      *(undefined4 *)(lVar1 + -0x20) = 0;
      FUN_1470b654e(lVar1 + -0x88,0);
    }
    else {
      *(undefined4 *)(lVar1 + -0x20) = 0;
    }
    FUN_1409d1656(param_1);
    return;
  }
  return;
}



// FUNCTION 1470b0b78 FUN_1470b0b78 body=90 status=ok
// SIG undefined FUN_1470b0b78(void)

undefined8 FUN_1470b0b78(int *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if ((longlong)*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_14c9a3d60 + -0x20 + (longlong)*param_1 * 0x88);
  }
  FUN_140002266(param_2,L"Value=%g (BaseValue=%g, NumModifiers=%d)",(double)(float)param_1[1],
                (double)(float)param_1[2],uVar1);
  return param_2;
}



// FUNCTION 1470b0bd2 FUN_1470b0bd2 body=172 status=ok
// SIG undefined FUN_1470b0bd2(void)

bool FUN_1470b0bd2(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_2c,4);
  if (uVar1 == local_2c) {
    puVar3 = (undefined4 *)(param_1 + 8);
    puVar2 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,puVar3,4);
      }
      else {
        thunk_FUN_14572512c(param_3,puVar3);
      }
    }
    else {
      *puVar3 = *puVar2;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1 == local_2c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b0c92 FUN_1470b0c92 body=237 status=ok
// SIG undefined FUN_1470b0c92(void)

undefined8
FUN_1470b0c92(int *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  int extraout_XMM0_Da;
  int iVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_140168d6e();
  FUN_140056680(local_50,L"FGbxAttributeFloat");
  local_70 = param_5;
  local_60 = 0;
  local_78 = param_3;
  local_68 = local_50;
  lVar2 = FUN_14115911a(uVar1,*param_2,param_1,param_4);
  *param_2 = lVar2;
  if (local_50[0] != 0) {
    FUN_1400020a8();
    lVar2 = *param_2;
  }
  if (lVar2 != 0) {
    iVar3 = param_1[2];
    if ((longlong)*param_1 != 0) {
      FUN_14020a770(DAT_14c9a3d60 + (longlong)*param_1 * 0x88 + -0x88,iVar3,0);
      iVar3 = extraout_XMM0_Da;
    }
    param_1[1] = iVar3;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b0d80 FUN_1470b0d80 body=40 status=ok
// SIG undefined FUN_1470b0d80(void)

undefined8
FUN_1470b0d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  FUN_1470b0da8(param_2,param_1,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 1470b0da8 FUN_1470b0da8 body=129 status=ok
// SIG undefined FUN_1470b0da8(void)

undefined8
FUN_1470b0da8(undefined8 param_1,int *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    FUN_1402a453c(param_2);
    iVar1 = *param_2;
  }
  FUN_140cda23a(DAT_14c9a3d60 + (longlong)iVar1 * 0x88 + -0x88,param_1,param_3,param_4,param_5);
  FUN_140841e14(param_2,1);
  return param_1;
}



// FUNCTION 1470b0e2a thunk_FUN_1470b0e30 body=5 status=ok
// SIG undefined thunk_FUN_1470b0e30(void)

void thunk_FUN_1470b0e30(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*param_1 != 0) {
    param_1[2] = param_1[1];
    lVar2 = (longlong)*param_1 * 0x88;
    lVar1 = DAT_14c9a3d60 + lVar2;
    if (*(int *)(DAT_14c9a3d60 + -0x1c + lVar2) < 0) {
      *(undefined4 *)(lVar1 + -0x20) = 0;
      FUN_1470b654e(lVar1 + -0x88,0);
    }
    else {
      *(undefined4 *)(lVar1 + -0x20) = 0;
    }
    FUN_1409d1656(param_1);
    return;
  }
  return;
}



// FUNCTION 1470b0e30 FUN_1470b0e30 body=101 status=ok
// SIG undefined FUN_1470b0e30(void)

void FUN_1470b0e30(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*param_1 != 0) {
    param_1[2] = param_1[1];
    lVar2 = (longlong)*param_1 * 0x88;
    lVar1 = DAT_14c9a3d60 + lVar2;
    if (*(int *)(DAT_14c9a3d60 + -0x1c + lVar2) < 0) {
      *(undefined4 *)(lVar1 + -0x20) = 0;
      FUN_1470b654e(lVar1 + -0x88,0);
    }
    else {
      *(undefined4 *)(lVar1 + -0x20) = 0;
    }
    FUN_1409d1656(param_1);
    return;
  }
  return;
}



// FUNCTION 1470b0e96 FUN_1470b0e96 body=78 status=ok
// SIG undefined FUN_1470b0e96(void)

undefined8 FUN_1470b0e96(int *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  if ((longlong)*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_14c9a3d60 + -0x20 + (longlong)*param_1 * 0x88);
  }
  FUN_140002266(param_2,L"Value=%d (BaseValue=%d, NumModifiers=%d)",param_1[1],param_1[2],uVar1);
  return param_2;
}



// FUNCTION 1470b0ee4 FUN_1470b0ee4 body=408 status=ok
// SIG undefined FUN_1470b0ee4(void)

undefined8 FUN_1470b0ee4(longlong param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  float *pfVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined4 *puVar9;
  undefined1 auStack_58 [36];
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_34,2);
  if (uVar3 == (uint)local_34) {
    puVar9 = (undefined4 *)(param_1 + 8);
    puVar4 = *(undefined4 **)param_3[1];
    if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar4 + 1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,puVar9,4);
      }
      else {
        thunk_FUN_14572512c(param_3,puVar9);
      }
    }
    else {
      *puVar9 = *puVar4;
      *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
    }
  }
  else {
    uVar3 = *(ulonglong *)(param_2 + 0xc);
    FUN_1401a700c(&local_34,1);
    if (uVar3 == (uint)local_34) {
      puVar5 = (ulonglong *)param_3[1];
      pbVar1 = (byte *)*puVar5 + 1;
      if ((byte *)puVar5[1] < pbVar1) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_34,1);
        bVar8 = local_34._0_1_;
      }
      else {
        bVar8 = *(byte *)*puVar5;
        *puVar5 = (ulonglong)pbVar1;
      }
      uVar6 = (uint)bVar8;
    }
    else {
      uVar3 = *(ulonglong *)(param_2 + 0xc);
      FUN_1401a700c(&local_34,4);
      if (uVar3 != (uint)local_34) {
        uVar7 = 0;
        goto LAB_1470b1024;
      }
      puVar5 = (ulonglong *)param_3[1];
      pfVar2 = (float *)*puVar5 + 1;
      if ((float *)puVar5[1] < pfVar2) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,&local_34,4);
        }
        else {
          thunk_FUN_14572512c(param_3,&local_34);
        }
      }
      else {
        local_34 = *(float *)*puVar5;
        *puVar5 = (ulonglong)pfVar2;
      }
      uVar6 = (int)ROUND(local_34 + local_34 + -0.5) >> 1;
    }
    *(uint *)(param_1 + 8) = uVar6;
  }
  uVar7 = 1;
LAB_1470b1024:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b108c FUN_1470b108c body=239 status=ok
// SIG undefined FUN_1470b108c(void)

undefined8
FUN_1470b108c(int *param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = FUN_140168da8();
  FUN_140056680(local_50,L"FGbxAttributeInteger");
  local_70 = param_5;
  local_60 = 0;
  local_78 = param_3;
  local_68 = local_50;
  lVar2 = FUN_14115911a(uVar1,*param_2,param_1,param_4);
  *param_2 = lVar2;
  if (local_50[0] != 0) {
    FUN_1400020a8();
    lVar2 = *param_2;
  }
  uVar3 = 0;
  if (lVar2 != 0) {
    fVar4 = (float)param_1[2];
    if ((longlong)*param_1 != 0) {
      fVar4 = (float)FUN_14020a770(DAT_14c9a3d60 + (longlong)*param_1 * 0x88 + -0x88,fVar4,0);
    }
    uVar3 = (ulonglong)(uint)(int)fVar4;
    param_1[1] = (int)fVar4;
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b117c FUN_1470b117c body=21 status=ok
// SIG undefined FUN_1470b117c(void)

void FUN_1470b117c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (-1 < *(int *)(param_1 + 0x6c)) {
    return;
  }
  FUN_1470b654e(param_1,0);
  return;
}



// FUNCTION 1470b1194 FUN_1470b1194 body=73 status=ok
// SIG undefined FUN_1470b1194(void)

undefined8 FUN_1470b1194(longlong param_1)

{
  longlong lVar1;
  
  FUN_1470b11de();
  if ((longlong)DAT_14c9a3e50 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(DAT_14c9a3e48 + lVar1) == param_1) {
        return *(undefined8 *)(DAT_14c9a3e48 + 8 + lVar1);
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)DAT_14c9a3e50 * 0x10 != lVar1);
  }
  return 0;
}



// FUNCTION 1470b11de FUN_1470b11de body=650 status=ok
// SIG undefined FUN_1470b11de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470b11de(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3df0) {
    FUN_144b3d300(&DAT_14c9a3df0);
    if (DAT_14c9a3df0 == -1) {
      DAT_14c9a3de8 = DAT_14c9a3de0;
      _Init_thread_footer(&DAT_14c9a3df0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3e00) {
    FUN_144b3d300(&DAT_14c9a3e00);
    if (DAT_14c9a3e00 == -1) {
      DAT_14c9a3df8 = DAT_14c9a3e08;
      _Init_thread_footer(&DAT_14c9a3e00);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3e20) {
    FUN_144b3d300(&DAT_14c9a3e20);
    if (DAT_14c9a3e20 == -1) {
      _DAT_14c9a3e10 = &PTR_FUN_14a1841c0;
      _DAT_14c9a3e18 = 0x7ab7;
      _Init_thread_footer(&DAT_14c9a3e20);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3e40) {
    FUN_144b3d300(&DAT_14c9a3e40);
    if (DAT_14c9a3e40 == -1) {
      _DAT_14c9a3e30 = 0x7ab7;
      _DAT_14c9a3e28 = &PTR_FUN_14a1841d0;
      _DAT_14c9a3e38 = 0x40490e56;
      _Init_thread_footer(&DAT_14c9a3e40);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3e58) {
    FUN_144b3d300(&DAT_14c9a3e58);
    if (DAT_14c9a3e58 == -1) {
      DAT_14c9a3e48 = (undefined8 *)0x0;
      _DAT_14c9a3e50 = 0;
      atexit((_func_5014 *)&LAB_142b2fdd8);
      _Init_thread_footer(&DAT_14c9a3e58);
    }
  }
  uVar1 = DAT_14c9a3de8;
  if (DAT_14c9a3e50 == 0) {
    DAT_14c9a3e50 = 1;
    if (DAT_14c9a3e54 == 0) {
      FUN_1470b66ec(0);
    }
    puVar2 = DAT_14c9a3e48;
    *DAT_14c9a3e48 = uVar1;
    puVar2[1] = &DAT_14c9a3e10;
    iVar3 = DAT_14c9a3e50;
    uVar1 = DAT_14c9a3df8;
    lVar5 = (longlong)DAT_14c9a3e50;
    uVar4 = DAT_14c9a3e50 + 1;
    _DAT_14c9a3e50 = CONCAT44(DAT_14c9a3e54,uVar4);
    if (DAT_14c9a3e54 < uVar4) {
      FUN_1470b66ec(iVar3);
    }
    puVar2 = DAT_14c9a3e48;
    DAT_14c9a3e48[lVar5 * 2] = uVar1;
    puVar2[lVar5 * 2 + 1] = &DAT_14c9a3e28;
  }
  return;
}



// FUNCTION 1470b1468 FUN_1470b1468 body=84 status=ok
// SIG undefined FUN_1470b1468(void)

undefined8 * FUN_1470b1468(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1470b11de();
  if ((longlong)DAT_14c9a3e50 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    lVar2 = 0;
    do {
      if (*(longlong *)(DAT_14c9a3e48 + 8 + lVar2) == param_2) {
        uVar1 = *(undefined8 *)(DAT_14c9a3e48 + lVar2);
        break;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)DAT_14c9a3e50 * 0x10 != lVar2);
  }
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 1470b14bc FUN_1470b14bc body=136 status=ok
// SIG undefined FUN_1470b14bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1470b14bc(longlong param_1)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3e80) {
    FUN_144b3d300(&DAT_14c9a3e80);
    if (DAT_14c9a3e80 == -1) {
      _DAT_14c9a3e70 = 0x7ab7;
      _DAT_14c9a3e68 = &PTR_FUN_14a1841e0;
      _DAT_14c9a3e78 = 0x40490e56;
      _Init_thread_footer(&DAT_14c9a3e80);
    }
  }
  puVar1 = (undefined *)0x0;
  if (DAT_14c9a3e60 == param_1) {
    puVar1 = &DAT_14c9a3e68;
  }
  return puVar1;
}



// FUNCTION 1470b1544 FUN_1470b1544 body=53 status=ok
// SIG undefined FUN_1470b1544(void)

undefined8 * FUN_1470b1544(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1470b14bc(DAT_14c9a3e60);
  uVar2 = DAT_14c9a3e60;
  if (lVar1 != param_2) {
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 1470b157a FUN_1470b157a body=73 status=ok
// SIG undefined FUN_1470b157a(void)

undefined8 FUN_1470b157a(longlong param_1)

{
  longlong lVar1;
  
  FUN_1470b11de();
  if ((longlong)DAT_14c9a3e50 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(DAT_14c9a3e48 + lVar1) == param_1) {
        return *(undefined8 *)(DAT_14c9a3e48 + 8 + lVar1);
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)DAT_14c9a3e50 * 0x10 != lVar1);
  }
  return 0;
}



// FUNCTION 1470b15c4 FUN_1470b15c4 body=84 status=ok
// SIG undefined FUN_1470b15c4(void)

undefined8 * FUN_1470b15c4(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1470b11de();
  if ((longlong)DAT_14c9a3e50 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    lVar2 = 0;
    do {
      if (*(longlong *)(DAT_14c9a3e48 + 8 + lVar2) == param_2) {
        uVar1 = *(undefined8 *)(DAT_14c9a3e48 + lVar2);
        break;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)DAT_14c9a3e50 * 0x10 != lVar2);
  }
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 1470b1618 FUN_1470b1618 body=137 status=ok
// SIG undefined FUN_1470b1618(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1470b1618(longlong param_1)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3eb0) {
    FUN_144b3d300(&DAT_14c9a3eb0);
    if (DAT_14c9a3eb0 == -1) {
      _DAT_14c9a3e90 = &PTR_FUN_14a1841f0;
      _DAT_14c9a3e98 = 0;
      uRam000000014c9a3ea0 = 0;
      _DAT_14c9a3ea8 = 0;
      _Init_thread_footer(&DAT_14c9a3eb0);
    }
  }
  puVar1 = (undefined *)0x0;
  if (DAT_14c9a3e88 == param_1) {
    puVar1 = &DAT_14c9a3e90;
  }
  return puVar1;
}



// FUNCTION 1470b16a2 FUN_1470b16a2 body=53 status=ok
// SIG undefined FUN_1470b16a2(void)

undefined8 * FUN_1470b16a2(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1470b1618(DAT_14c9a3e88);
  uVar2 = DAT_14c9a3e88;
  if (lVar1 != param_2) {
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 1470b16d8 FUN_1470b16d8 body=137 status=ok
// SIG undefined FUN_1470b16d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1470b16d8(longlong param_1)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3ee0) {
    FUN_144b3d300(&DAT_14c9a3ee0);
    if (DAT_14c9a3ee0 == -1) {
      _DAT_14c9a3ec0 = &PTR_FUN_14a184200;
      _DAT_14c9a3ec8 = 0;
      uRam000000014c9a3ed0 = 0;
      _DAT_14c9a3ed8 = 0;
      _Init_thread_footer(&DAT_14c9a3ee0);
    }
  }
  puVar1 = (undefined *)0x0;
  if (DAT_14c9a3eb8 == param_1) {
    puVar1 = &DAT_14c9a3ec0;
  }
  return puVar1;
}



// FUNCTION 1470b1762 FUN_1470b1762 body=53 status=ok
// SIG undefined FUN_1470b1762(void)

undefined8 * FUN_1470b1762(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1470b16d8(DAT_14c9a3eb8);
  uVar2 = DAT_14c9a3eb8;
  if (lVar1 != param_2) {
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 1470b1798 FUN_1470b1798 body=49 status=ok
// SIG undefined FUN_1470b1798(void)

void FUN_1470b1798(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1470b17c9 FUN_1470b17c9 body=342 status=ok
// SIG undefined FUN_1470b17c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1470b17c9(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auStack_98 [32];
  int local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = 0;
  local_78 = 0;
  FUN_1458c54da(&local_60,param_2,0,0);
  local_58 = local_60 + _DAT_14c9a4028;
  auVar2._0_8_ = (double)FUN_1458c5372(&local_58,param_3,param_4);
  auVar2._8_8_ = 0;
  auVar3 = roundpd(auVar2,auVar2,3);
  dVar1 = ((auVar3._0_8_ - auVar2._0_8_) + 1.0) * 24.0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar1;
  auVar3 = roundpd(auVar3,auVar3,3);
  dVar1 = (dVar1 - auVar3._0_8_) * 60.0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar1;
  auVar5 = roundpd(auVar4,auVar4,3);
  local_78 = (int)((dVar1 - auVar5._0_8_) * 60.0) + 1;
  local_70 = 0;
  FUN_1458c54da(&local_60,0,(int)auVar3._0_8_,(int)auVar5._0_8_);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = auVar2._0_8_ / 7.0;
  auVar3 = roundpd(auVar5,auVar5,3);
  local_70 = 0;
  local_78 = 0;
  FUN_1458c54da(&local_68,(int)(((auVar3._0_8_ - auVar2._0_8_ / 7.0) + 1.0) * 7.0),0,0);
  *param_1 = local_68 + local_60;
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470b1920 FUN_1470b1920 body=239 status=ok
// SIG undefined FUN_1470b1920(void)

void FUN_1470b1920(undefined8 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  wchar_t *pwVar2;
  
  switch(*param_2) {
  case 0:
    puVar1 = &DAT_14a18469e;
    goto LAB_1470b19e0;
  case 1:
    pwVar2 = L"*⸪";
    break;
  case 2:
    pwVar2 = L"/Disabled";
    break;
  case 3:
    pwVar2 = L"%㨀─搀";
    break;
  case 4:
    pwVar2 = L"+湡d牯伀数慲潴⁲潎⁴潆湵d潮t慖畬⁥潎⁴潆湵d";
    break;
  case 5:
    pwVar2 = L"-`[Left Bracket";
    break;
  case 6:
    puVar1 = &DAT_14a18468c;
    goto LAB_1470b19e0;
  case 7:
    puVar1 = &DAT_14a18468f;
    goto LAB_1470b19e0;
  case 8:
    pwVar2 = L"<DataflowCore";
    break;
  case 9:
    puVar1 = &DAT_14a184698;
    goto LAB_1470b19e0;
  case 10:
    pwVar2 = L">";
    break;
  case 0xb:
    puVar1 = &DAT_14a18469b;
    goto LAB_1470b19e0;
  case 0xc:
    puVar1 = &DAT_14a184692;
    goto LAB_1470b19e0;
  case 0xd:
    puVar1 = &DAT_14a184695;
    goto LAB_1470b19e0;
  case 0xe:
    pwVar2 = L"&Asterisk";
    break;
  case 0xf:
    pwVar2 = 
    L"^ 桔敲摡┠畬攠据畯瑮牥摥戠瑩楦⁴污潬捡楴湯攠牲牯ਮ䈀瑩⁳潦⁲慰敧┠⁰┨⥳਺渀汵l浢污潬彣浳污彬楢晴瑩戀慭汬捯浟摥畩彭楢晴瑩戀慭汬捯浟牡敧扟瑩楦t"
    ;
    break;
  case 0x10:
    pwVar2 = L"|+湡d牯伀数慲潴⁲潎⁴潆湵d潮t慖畬⁥潎⁴潆湵d";
    break;
  case 0x11:
    puVar1 = &DAT_14a184686;
    goto LAB_1470b19e0;
  case 0x12:
    puVar1 = &DAT_14a184689;
LAB_1470b19e0:
    FUN_144a6594a(param_1,puVar1,2);
    return;
  case 0x13:
    pwVar2 = L",?㸭";
    break;
  default:
    return;
  }
  FUN_144a6594a(param_1,pwVar2,1);
  return;
}



// FUNCTION 1470b1a10 FUN_1470b1a10 body=93 status=ok
// SIG undefined FUN_1470b1a10(void)

void FUN_1470b1a10(undefined8 param_1,char *param_2)

{
  if (*param_2 == '\x01') {
    FUN_144a6594a(param_1,L"!../../../Engine/",1);
  }
  if (0 < *(int *)(param_2 + 0x10)) {
    FUN_144a6594a(param_1,*(undefined8 *)(param_2 + 8));
  }
  if (*(int *)(param_2 + 0x20) < 1) {
    return;
  }
  FUN_1470b1a6e(param_1,param_2 + 0x18);
  return;
}



// FUNCTION 1470b1a6e FUN_1470b1a6e body=192 status=ok
// SIG undefined FUN_1470b1a6e(void)

void FUN_1470b1a6e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  
  FUN_144a6594a(param_1,&DAT_149eb775e,1);
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    bVar4 = true;
    lVar5 = 0;
    do {
      piVar2 = *(int **)(lVar1 + lVar5);
      if (piVar2 != (int *)0x0) {
        if (!bVar4) {
          FUN_144a6594a(param_1,&DAT_149dfc0cb,1);
        }
        if (*piVar2 != -1) {
          FUN_1470b1920(param_1,piVar2);
          FUN_144a6594a(param_1,&DAT_149dfc0cb,1);
        }
        FUN_1470b1a10(param_1,piVar2 + 2);
        bVar4 = false;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  FUN_144a6594a(param_1,&DAT_149dfbe79,1);
  return;
}


