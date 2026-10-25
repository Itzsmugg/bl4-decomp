// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147ea6da2 FUN_147ea6da2 body=111 status=ok
// SIG undefined FUN_147ea6da2(void)

void FUN_147ea6da2(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined2 local_1c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x170) != 0)) {
    local_1a = *(undefined2 *)(param_2 + 0x50);
    local_1c = FUN_147ea72f6(param_1);
    FUN_147eb7232(param_1 + 0x238,&local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea6e12 FUN_147ea6e12 body=481 status=ok
// SIG undefined FUN_147ea6e12(void)

void FUN_147ea6e12(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  int *local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = param_3;
  if (((param_2 == 0) || (iVar2 = *(int *)(param_1 + 0x170), param_1 == 0 || iVar2 == 0)) ||
     ((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0)) goto LAB_147ea6e58;
  uVar4 = FUN_147ea72f6(param_1);
  if (iVar2 <= (int)uVar4 || (int)uVar4 < 0) goto LAB_147ea6e58;
  lVar6 = (ulonglong)uVar4 * 0x58;
  local_48 = &local_3c;
  FUN_147ebb23e(*(longlong *)(param_2 + 0x48),param_1,
                (ulonglong)*(ushort *)(*(longlong *)(param_2 + 0x48) + 0x52) +
                *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x30 + lVar6),param_2);
  if (local_3c != 3) {
    FUN_147ea6da2(param_1,param_2);
    FUN_147ebe9b4(param_2,param_1,
                  (ulonglong)*(ushort *)(param_2 + 0x52) +
                  *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x30 + lVar6),local_3c);
    if ((int)(uint)*(ushort *)(param_1 + 0x2d8) < *(int *)(param_1 + 0x170)) {
      lVar5 = (ulonglong)*(ushort *)(param_1 + 0x2d8) * 0x58;
      if (*(longlong *)(*(longlong *)(param_1 + 0x168) + 8 + lVar5) == param_2) {
        lVar5 = *(longlong *)(param_1 + 0x168) + lVar5;
        cVar3 = *(char *)(lVar5 + 0x41);
        *(undefined1 *)(lVar5 + 0x41) = 3;
        if (cVar3 == '\x02') {
          if (((*(uint *)(param_1 + 0x208) & 2) == 0 &
              (*(longlong *)(param_1 + 0x200) != 0 | (byte)*(uint *)(param_1 + 0x208))) == 1) {
            FUN_147ea6872(param_1,0);
            *(byte *)(param_1 + 0x2da) = *(byte *)(param_1 + 0x2da) | 4;
          }
        }
        else {
          FUN_147ea7f86(param_1,local_3c);
        }
        goto LAB_147ea6ecd;
      }
    }
    if ((((int)uVar4 < *(int *)(param_1 + 0x170)) && (local_3c == 2)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x168) + 8 + lVar6) == param_2)) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x168) + lVar6 + 0x41) = 3;
    }
  }
LAB_147ea6ecd:
  bVar1 = *(byte *)(param_1 + 0x2da);
  if ((bVar1 & 2) == 0) {
    cVar3 = FUN_147ea8dce(param_1);
    *(byte *)(param_1 + 0x2da) = cVar3 * '\x02' | bVar1;
  }
  if (((*(byte *)(param_1 + 0x234) & 1) != 0) && (*(longlong *)(param_1 + 0x228) != 0)) {
    FUN_147ea69ca(param_1);
  }
LAB_147ea6e58:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea6ff4 FUN_147ea6ff4 body=405 status=ok
// SIG undefined FUN_147ea6ff4(void)

ulonglong FUN_147ea6ff4(longlong param_1,longlong param_2,ushort param_3,uint *param_4,
                       undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong unaff_RBP;
  longlong lVar6;
  bool bVar7;
  
  lVar4 = (ulonglong)*(ushort *)(param_1 + 0x2d8) * 0x58;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 8 + lVar4);
  bVar7 = true;
  if (lVar6 == 0) {
    if (param_3 < *(ushort *)(param_1 + 0x2d8)) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x168) + lVar4);
      bVar7 = false;
    }
    else {
      lVar6 = 0;
    }
  }
  lVar4 = param_1 + 0x198;
  do {
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
    if (lVar6 == 0) break;
    lVar6 = *(longlong *)(lVar6 + 0x48);
    if (lVar6 == 0) {
      uVar5 = *(ushort *)(param_1 + 0x2d8);
      if (bVar7) {
        FUN_147ebace4(*(undefined8 *)(*(longlong *)(param_1 + 0x168) + (ulonglong)uVar5 * 0x58),
                      lVar4,param_4);
        uVar5 = *(ushort *)(param_1 + 0x2d8);
      }
      if (uVar5 == 0) {
        FUN_147ea6b08(param_1);
        unaff_RBP = 0;
        break;
      }
      uVar3 = *param_4;
      iVar1 = *(int *)(param_1 + 0x1b8);
      *(uint *)(param_1 + 0x1b8) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x1bc) < iVar1 + 1U) {
        FUN_147eb692c(param_1 + 0x1b0,iVar1);
      }
      *(uint *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar1 * 4) =
           (uint)uVar5 | (uVar3 & 0xff) << 0x10;
      uVar3 = *(int *)(param_1 + 0x2d8) - 1;
      *(short *)(param_1 + 0x2d8) = (short)uVar3;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 8 + (ulonglong)(uVar3 & 0xffff) * 0x58)
      ;
      bVar7 = true;
    }
    else {
      uVar2 = FUN_147eba92c(lVar6,lVar4);
      *param_5 = uVar2;
      FUN_147ebabc6(lVar6,lVar4,uVar2,param_4,*(ushort *)(param_1 + 0x2d8) <= param_3);
    }
  } while (lVar6 != param_2);
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 147ea718a FUN_147ea718a body=228 status=ok
// SIG undefined FUN_147ea718a(void)

void FUN_147ea718a(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  bVar2 = *(byte *)(param_1 + 8);
  if ((int)(uint)bVar2 < (int)*(uint *)(param_2 + 0x180)) {
    lVar5 = (ulonglong)(uint)bVar2 * 0x38;
    lVar1 = *(longlong *)(param_2 + 0x178) + lVar5;
    iVar6 = *(int *)(*(longlong *)(param_2 + 0x178) + 0x30 + lVar5);
    lVar5 = (longlong)iVar6;
    if (-1 < lVar5) {
      iVar4 = *(int *)(param_2 + 400);
      if ((bVar2 + 1 < *(uint *)(param_2 + 0x180)) && (*(int *)(lVar1 + 0x68) < iVar4)) {
        iVar4 = *(int *)(lVar1 + 0x68);
      }
      while (iVar6 < iVar4) {
        plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x188) + lVar5 * 8);
        (**(code **)(*plVar3 + 0x2d0))(plVar3,param_2);
        lVar5 = lVar5 + 1;
        iVar6 = (int)lVar5;
      }
    }
    FUN_147ea9ca0(param_1,param_2,*param_1,param_3);
    if (param_3 != 0) {
      FUN_1447a122a(lVar1 + 0x20,param_1 + 6);
      return;
    }
    *(undefined4 *)(lVar1 + 0x28) = 0;
    if (*(int *)(lVar1 + 0x2c) != 0) {
      FUN_144893a1c(lVar1 + 0x20,0);
      return;
    }
  }
  return;
}



// FUNCTION 147ea726e FUN_147ea726e body=106 status=ok
// SIG undefined FUN_147ea726e(void)

void FUN_147ea726e(longlong param_1)

{
  if (*(int *)(param_1 + 0x14) < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_147eb68cc(param_1 + 8);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_147eb68fc(param_1 + 0x18);
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x38) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) & 0xf0;
  return;
}



// FUNCTION 147ea72d8 FUN_147ea72d8 body=29 status=ok
// SIG undefined FUN_147ea72d8(void)

void FUN_147ea72d8(undefined8 param_1)

{
  FUN_147ecdd00();
  FUN_147ea6872(param_1,0);
  return;
}



// FUNCTION 147ea72f6 FUN_147ea72f6 body=113 status=ok
// SIG undefined FUN_147ea72f6(void)

ulonglong FUN_147ea72f6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  lVar2 = FUN_147ea92c6();
  uVar3 = 0xffffffff;
  uVar4 = uVar3;
  if (lVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x170);
    if ((ulonglong)uVar1 != 0) {
      plVar7 = *(longlong **)(param_1 + 0x168);
      uVar4 = (ulonglong)*(ushort *)(param_1 + 0x2d8);
      if (plVar7[(ulonglong)*(ushort *)(param_1 + 0x2d8) * 0xb + 1] != lVar2) {
        do {
          lVar5 = lVar2;
          lVar2 = *(longlong *)(lVar5 + 0x48);
        } while (lVar2 != 0);
        uVar4 = uVar3;
        if (0 < (int)uVar1) {
          uVar6 = 0;
          do {
            if (*plVar7 == lVar5) {
              return uVar6 & 0xffffffff;
            }
            uVar6 = uVar6 + 1;
            plVar7 = plVar7 + 0xb;
          } while (uVar1 != uVar6);
        }
      }
    }
  }
  return uVar4;
}



// FUNCTION 147ea7368 FUN_147ea7368 body=1 status=ok
// SIG undefined FUN_147ea7368(void)

void FUN_147ea7368(void)

{
  return;
}



// FUNCTION 147ea736a FUN_147ea736a body=172 status=ok
// SIG undefined FUN_147ea736a(void)

void FUN_147ea736a(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined2 *)(param_1 + 0x2d8) = 0;
  if (((*(byte *)(param_1 + 0x2da) & 1) != 0) && (*(int *)(param_1 + 0x170) != 0)) {
    puVar1 = *(undefined8 **)(param_1 + 0x168);
    puVar1[1] = 0;
    *(undefined1 *)((longlong)puVar1 + 0x41) = 0;
    local_24 = 0;
    FUN_147ea7420(param_1);
    local_38 = 0;
    local_48 = 0;
    local_40 = 3;
    FUN_143846b9a(param_1,*puVar1,0,*puVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_143846294(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea7420 FUN_147ea7420 body=247 status=ok
// SIG undefined FUN_147ea7420(void)

void FUN_147ea7420(longlong param_1,ushort *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  ushort local_50;
  undefined1 local_4e;
  byte local_4d;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = *(int *)(param_1 + 0x170);
  if (0 < iVar4) {
    lVar8 = 0;
    do {
      lVar6 = (longlong)*(int *)(*(longlong *)(param_1 + 0x168) + 0x18 + lVar8 * 0x58);
      if (lVar6 != 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x10 + lVar8 * 0x58);
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(lVar1 + lVar5);
          uVar7 = (ushort)lVar8;
          bVar3 = *param_2 < uVar7;
          if (*param_2 == uVar7) {
            bVar3 = param_2[1] < *(ushort *)(lVar2 + 0x50);
          }
          if (bVar3) {
            local_60[1] = 0;
            local_4e = 2;
            local_4d = local_4d & 0xfc;
            local_60[0] = lVar2;
            local_50 = uVar7;
            FUN_147ea881a(param_1 + 0x198,local_60);
          }
          lVar5 = lVar5 + 8;
        } while (lVar6 * 8 != lVar5);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea7518 FUN_147ea7518 body=166 status=ok
// SIG undefined FUN_147ea7518(void)

ulonglong FUN_147ea7518(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort uVar5;
  longlong lVar6;
  longlong lVar7;
  
  uVar3 = FUN_147ea72f6();
  if (((int)uVar3 < 0) || (*(int *)(param_1 + 0x170) <= (int)uVar3)) {
    return 0;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 8 + (ulonglong)uVar3 * 0x58);
  if (lVar2 == 0) {
    return 0;
  }
  uVar4 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
  if (lVar2 == param_2) {
    return uVar4;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x168) + (ulonglong)uVar3 * 0x58) == param_2) {
    return uVar4;
  }
  uVar1 = *(ushort *)(lVar2 + 0x50);
  lVar2 = *(longlong *)(param_2 + 0x48);
  if ((-2 < param_3) && ((int)(param_3 + 1U) < *(int *)(lVar2 + 0x60))) {
    lVar7 = (ulonglong)(param_3 + 1U) * 0x30;
    lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x58) + lVar7);
    if ((lVar6 != 0) || (lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x58) + lVar7 + 8), lVar6 != 0)
       ) {
      uVar5 = *(ushort *)(lVar6 + 0x50);
      goto LAB_147ea75ad;
    }
  }
  uVar5 = (short)*(undefined4 *)(lVar2 + 0x7c) + 1;
LAB_147ea75ad:
  return (ulonglong)
         CONCAT11((char)(uVar1 >> 8),uVar1 < uVar5 && *(ushort *)(param_2 + 0x50) <= uVar1);
}



// FUNCTION 147ea75be FUN_147ea75be body=206 status=ok
// SIG undefined FUN_147ea75be(void)

ulonglong FUN_147ea75be(longlong param_1,longlong param_2)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong unaff_RBX;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((param_2 != 0) && (iVar4 = *(int *)(param_1 + 0x170), 0 < iVar4)) {
    sVar1 = *(short *)(param_2 + 0x50);
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x168);
      lVar6 = lVar8 * 0x58;
      lVar9 = (longlong)*(int *)(lVar2 + 0x18 + lVar6);
      if (lVar9 != 0) {
        lVar3 = *(longlong *)(lVar2 + 0x10 + lVar6);
        lVar7 = 0;
        do {
          lVar5 = *(longlong *)(lVar3 + lVar7);
          unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
          if ((lVar5 == param_2) ||
             ((((lVar5 != 0 && ((*(byte *)(param_2 + 0x55) & 1) != 0)) &&
               (*(short *)(lVar5 + 0x50) == sVar1)) &&
              (lVar5 = FUN_147eb9f50(lVar5,param_1,
                                     (ulonglong)*(ushort *)(lVar5 + 0x52) +
                                     *(longlong *)(lVar2 + lVar6 + 0x30)), lVar5 == param_2))))
          goto LAB_147ea7679;
          lVar7 = lVar7 + 8;
        } while (lVar9 * 8 != lVar7);
        iVar4 = *(int *)(param_1 + 0x170);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar4);
  }
  unaff_RBX = 0;
LAB_147ea7679:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 147ea768c FUN_147ea768c body=198 status=ok
// SIG undefined FUN_147ea768c(void)

int FUN_147ea768c(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar5 = FUN_147ea72f6();
  if (((int)uVar5 < 0) || (*(int *)(param_1 + 0x170) <= (int)uVar5)) {
LAB_147ea7739:
    iVar6 = 2;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x168);
    lVar8 = (ulonglong)uVar5 * 0x58;
    lVar7 = (longlong)*(int *)(lVar2 + 0x28 + lVar8);
    if (lVar7 != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x20 + lVar8);
      lVar9 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar9);
        if ((lVar4 == param_2) ||
           (((lVar4 != 0 && ((*(byte *)(param_2 + 0x55) & 1) != 0)) &&
            (*(short *)(lVar4 + 0x50) == *(short *)(param_2 + 0x50))))) {
          iVar6 = *(int *)(lVar3 + 8 + lVar9);
          if (iVar6 != 2) {
            return iVar6;
          }
          break;
        }
        lVar9 = lVar9 + 0x10;
      } while (lVar7 * 0x10 != lVar9);
    }
    lVar7 = *(longlong *)(lVar2 + lVar8 + 8);
    if (lVar7 != param_2) {
      if ((lVar7 == 0) || ((*(byte *)(param_2 + 0x55) & 1) == 0)) goto LAB_147ea7739;
      if (*(short *)(lVar7 + 0x50) != *(short *)(param_2 + 0x50)) {
        return 2;
      }
    }
    cVar1 = *(char *)(lVar2 + lVar8 + 0x41);
    iVar6 = 0;
    if (cVar1 != '\x01') {
      iVar6 = (cVar1 != '\x02') + 1;
    }
  }
  return iVar6;
}



// FUNCTION 147ea7752 FUN_147ea7752 body=325 status=ok
// SIG undefined FUN_147ea7752(void)

void FUN_147ea7752(longlong param_1,longlong param_2)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = FUN_147ea72f6();
  if (iVar2 != -1) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    ppvVar1 = (void **)(param_1 + 0x1a0);
    FUN_147ea8ad4(&local_48,ppvVar1);
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    if (*(int *)(param_1 + 0x1ac) < 0) {
      FUN_147eb68cc(ppvVar1);
    }
    local_4a = *(undefined2 *)(param_2 + 0x50);
    local_50 = (undefined2)iVar2;
    local_4e = *(undefined2 *)(param_2 + 0x7c);
    local_4c = local_50;
    FUN_147ea89ba(param_1);
    *(undefined2 *)(param_1 + 0x210) = 0xfff;
    local_58 = 1;
    FUN_143847a0c(param_1,ppvVar1,0,0);
    _Src = local_48;
    if (ppvVar1 != &local_48) {
      iVar2 = (int)uStack_40;
      lVar3 = (longlong)(int)uStack_40;
      *(int *)(param_1 + 0x1a8) = (int)uStack_40;
      if ((int)uStack_40 == 0 && *(int *)(param_1 + 0x1ac) == 0) {
        *(undefined4 *)(param_1 + 0x1ac) = 0;
      }
      else {
        FUN_147eb6b70(ppvVar1,uStack_40 & 0xffffffff);
        if (iVar2 != 0) {
          memcpy(*ppvVar1,_Src,lVar3 * 0x18);
        }
      }
    }
    FUN_147ea7ae4(param_1);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea7898 FUN_147ea7898 body=339 status=ok
// SIG undefined FUN_147ea7898(void)

void FUN_147ea7898(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  
  bVar7 = *(byte *)(param_2 + 0x59);
  cVar3 = FUN_147ea7518(param_1,param_2,(uint)bVar7);
  if (cVar3 != '\0') {
    FUN_147ea79ec(param_1,param_2);
    return;
  }
  lVar5 = *(longlong *)(param_2 + 0x48);
  if ((lVar5 != 0) &&
     (*(uint *)(lVar5 + 0x60) != (uint)bVar7 && (int)(uint)bVar7 <= (int)*(uint *)(lVar5 + 0x60))) {
    if (((*(byte *)(param_1 + 0x2da) & 2) != 0) ||
       (((*(uint *)(param_1 + 0x208) & 2) == 0 &
        (*(longlong *)(param_1 + 0x200) != 0 | (byte)*(uint *)(param_1 + 0x208))) == 1)) {
      uVar4 = FUN_147ea72f6(param_1,param_2);
      FUN_143846b9a(param_1,lVar5,uVar4,param_2,0xffffffff,2,0);
      lVar5 = *(longlong *)(param_2 + 0x48);
      bVar7 = *(byte *)(param_2 + 0x59);
    }
    lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x58) + (ulonglong)((uint)bVar7 * 0x30));
    if (lVar5 != 0) {
      if ((*(byte *)(param_1 + 0x210) & 0x10) == 0) {
        FUN_147ea7752(param_1,lVar5);
        return;
      }
      iVar1 = *(int *)(param_1 + 0x220);
      *(uint *)(param_1 + 0x220) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x224) < iVar1 + 1U) {
        FUN_147eb653a((longlong *)(param_1 + 0x218),iVar1);
      }
      lVar2 = *(longlong *)(param_1 + 0x218);
      lVar6 = (longlong)iVar1 * 0x10;
      *(longlong *)(lVar2 + lVar6) = lVar5;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(undefined2 *)(lVar2 + 0xc + lVar6) = 0x10;
    }
  }
  return;
}



// FUNCTION 147ea79ec FUN_147ea79ec body=136 status=ok
// SIG undefined FUN_147ea79ec(void)

void FUN_147ea79ec(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  int iVar4;
  byte bVar5;
  
  cVar1 = *(char *)(param_2 + 100);
  if (cVar1 != '\0') {
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    iVar4 = FUN_147ea72f6(param_1,uVar3);
    if (iVar4 != -1) {
      uVar2 = *(undefined1 *)(param_2 + 0x59);
      if (cVar1 == '\x03') {
        bVar5 = FUN_147ea7518(param_1,param_2,uVar2);
      }
      else {
        bVar5 = cVar1 == '\x02';
      }
      FUN_143846b9a(param_1,uVar3,iVar4,param_2,uVar2,2 - (uint)bVar5,0);
    }
  }
  return;
}



// FUNCTION 147ea7a74 FUN_147ea7a74 body=111 status=ok
// SIG undefined FUN_147ea7a74(void)

void FUN_147ea7a74(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x210) & 8) != 0) {
    iVar1 = *(int *)(param_1 + 0x220);
    *(uint *)(param_1 + 0x220) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x224) < iVar1 + 1U) {
      FUN_147eb653a((longlong *)(param_1 + 0x218),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x218);
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = param_2;
    *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
    *(undefined2 *)(lVar2 + 0xc + lVar3) = 8;
    return;
  }
  FUN_147ea7898(param_1,param_2);
  return;
}



// FUNCTION 147ea7ae4 FUN_147ea7ae4 body=612 status=ok
// SIG undefined FUN_147ea7ae4(void)

void FUN_147ea7ae4(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(undefined2 *)(param_1 + 0x42) = 0;
  uVar6 = *(uint *)(param_1 + 0x44);
  if (0 < (int)uVar6) {
    do {
      lVar2 = param_1[0x43];
      param_1[0x43] = 0;
      param_1[0x44] = 0;
      lVar8 = 0;
      do {
        uVar1 = *(ushort *)(lVar2 + 0xc + lVar8);
        if (uVar1 < 0x80) {
          if (uVar1 < 0x40) {
            if (uVar1 == 0x20) {
LAB_147ea7c0e:
              FUN_143846294(param_1,uVar1 == 0x40);
            }
            else {
              switch(uVar1) {
              case 1:
                uVar4 = *(undefined8 *)(lVar2 + lVar8);
                cVar5 = FUN_147ea75be(param_1,uVar4);
                if (cVar5 != '\0') {
                  FUN_147ea79ec(param_1,uVar4);
                }
                break;
              case 2:
              case 4:
                uVar4 = *(undefined8 *)(lVar2 + lVar8);
                cVar5 = FUN_147ea75be(param_1,uVar4);
                if (cVar5 != '\0') {
                  FUN_147ea7d48(param_1,uVar4,*(short *)(lVar2 + 0xc + lVar8) == 4);
                }
                break;
              case 3:
              case 5:
              case 6:
              case 7:
                break;
              case 8:
                uVar4 = *(undefined8 *)(lVar2 + lVar8);
                cVar5 = FUN_147ea75be(param_1,uVar4);
                if (cVar5 != '\0') {
                  FUN_147ea7898(param_1,uVar4);
                }
                break;
              default:
                if (uVar1 == 0x10) {
                  FUN_147ea7752(param_1,*(undefined8 *)(lVar2 + lVar8));
                }
              }
            }
          }
          else if (uVar1 == 0x40) goto LAB_147ea7c0e;
        }
        else if (uVar1 < 0x200) {
          if (uVar1 == 0x80) {
            if ((int)param_1[0x2e] == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = *(longlong *)
                       (param_1[0x2d] + 8 + (ulonglong)*(ushort *)(param_1 + 0x5b) * 0x58);
            }
            if (lVar7 == *(longlong *)(lVar2 + lVar8)) {
              FUN_147ea7e2c(param_1,*(undefined4 *)(lVar2 + 8 + lVar8));
            }
          }
          else if (uVar1 == 0x100) {
            if ((int)param_1[0x2e] == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = *(longlong *)(param_1[0x2d] + (ulonglong)*(ushort *)(param_1 + 0x5b) * 0x58);
            }
            lVar3 = *(longlong *)(lVar2 + lVar8);
            if (lVar7 == lVar3) {
              FUN_143846b9a(param_1,lVar3,(short)param_1[0x5b],lVar3,0,3,0);
            }
          }
        }
        else if (uVar1 == 0x400) {
          (**(code **)(*param_1 + 0x498))(param_1);
        }
        else if (uVar1 == 0x200) {
          FUN_147ea69ca(param_1);
        }
        else if (uVar1 == 0x800) {
          FUN_147ea66a4(param_1);
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulonglong)uVar6 << 4 != lVar8);
      if (lVar2 != 0) {
        FUN_1400020a8(lVar2);
      }
      uVar6 = *(uint *)(param_1 + 0x44);
    } while (0 < (int)uVar6);
  }
  return;
}



// FUNCTION 147ea7d48 FUN_147ea7d48 body=227 status=ok
// SIG undefined FUN_147ea7d48(void)

void FUN_147ea7d48(longlong param_1,longlong param_2,byte param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  iVar3 = FUN_147ea72f6();
  if (iVar3 != -1) {
    uVar1 = *(undefined1 *)(param_2 + 0x59);
    cVar2 = FUN_147ea7518(param_1,param_2,uVar1);
    bVar4 = true;
    if ((*(byte *)(param_1 + 0x2da) & 2) == 0) {
      if (*(longlong *)(param_1 + 0x200) == 0 && (*(uint *)(param_1 + 0x208) & 1) == 0) {
        bVar4 = false;
      }
      else {
        bVar4 = (*(uint *)(param_1 + 0x208) & 2) == 0;
      }
    }
    if ((*(char *)(param_1 + 0x1fa) == '\x01') &&
       (*(short *)(param_2 + 0x50) == *(short *)(param_1 + 0x1ea))) {
      bVar5 = *(short *)(param_1 + 0x1e8) == (short)iVar3;
    }
    else {
      bVar5 = false;
    }
    if (cVar2 == '\0') {
      FUN_147ea79ec(param_1,param_2);
      return;
    }
    if ((byte)(bVar4 | param_3 | bVar5) == 1) {
      FUN_143846b9a(param_1,*(undefined8 *)(param_2 + 0x48),iVar3,param_2,uVar1,2,0);
    }
  }
  return;
}



// FUNCTION 147ea7e2c FUN_147ea7e2c body=110 status=ok
// SIG undefined FUN_147ea7e2c(void)

void FUN_147ea7e2c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x170) <= (int)(uint)*(ushort *)(param_1 + 0x2d8)) {
    return;
  }
  lVar2 = (ulonglong)*(ushort *)(param_1 + 0x2d8) * 0x58;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x168) + lVar2);
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 8 + lVar2);
  plVar3 = plVar1;
  if (lVar2 != 0) {
    lVar4 = lVar2;
    if (*(char *)((longlong)plVar1 + 0x41) == '\0') goto LAB_147ea7e70;
    plVar3 = (longlong *)(lVar2 + 0x48);
  }
  lVar4 = *plVar3;
LAB_147ea7e70:
  if (lVar2 == 0) {
    lVar2 = *plVar1;
  }
  FUN_143846b9a(param_1,lVar4,*(int *)(param_1 + 0x170) + -1,lVar2,0xffffffff,param_2,0);
  return;
}



// FUNCTION 147ea7e9a FUN_147ea7e9a body=111 status=ok
// SIG undefined FUN_147ea7e9a(void)

void FUN_147ea7e9a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x210) & 1) != 0) {
    iVar1 = *(int *)(param_1 + 0x220);
    *(uint *)(param_1 + 0x220) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x224) < iVar1 + 1U) {
      FUN_147eb653a((longlong *)(param_1 + 0x218),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x218);
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = param_2;
    *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
    *(undefined2 *)(lVar2 + 0xc + lVar3) = 1;
    return;
  }
  FUN_147ea79ec(param_1,param_2);
  return;
}



// FUNCTION 147ea7f0a FUN_147ea7f0a body=123 status=ok
// SIG undefined FUN_147ea7f0a(void)

void FUN_147ea7f0a(longlong param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x210) & 6) != 0) {
    iVar1 = *(int *)(param_1 + 0x220);
    *(uint *)(param_1 + 0x220) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x224) < iVar1 + 1U) {
      FUN_147eb653a((longlong *)(param_1 + 0x218),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x218);
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = param_2;
    *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
    *(ushort *)(lVar2 + 0xc + lVar3) = (ushort)param_3 * 2 + 2;
    return;
  }
  FUN_147ea7d48(param_1,param_2);
  return;
}



// FUNCTION 147ea7f86 FUN_147ea7f86 body=160 status=ok
// SIG undefined FUN_147ea7f86(void)

void FUN_147ea7f86(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((param_2 & 0xfffffffe) != 2) {
    if ((*(byte *)(param_1 + 0x210) & 0x80) == 0) {
      FUN_147ea7e2c(param_1,param_2);
      return;
    }
    if (*(int *)(param_1 + 0x170) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)
               (*(longlong *)(param_1 + 0x168) + 8 + (ulonglong)*(ushort *)(param_1 + 0x2d8) * 0x58)
      ;
    }
    iVar1 = *(int *)(param_1 + 0x220);
    *(uint *)(param_1 + 0x220) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x224) < iVar1 + 1U) {
      FUN_147eb653a((longlong *)(param_1 + 0x218),iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x218);
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = uVar4;
    *(uint *)(lVar2 + 8 + lVar3) = param_2;
    *(undefined2 *)(lVar2 + 0xc + lVar3) = 0x80;
  }
  return;
}



// FUNCTION 147ea8026 FUN_147ea8026 body=20 status=ok
// SIG undefined FUN_147ea8026(void)

undefined2 FUN_147ea8026(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  bool bVar2;
  
  uVar1 = *param_2;
  bVar2 = *param_1 < uVar1;
  if (*param_1 == uVar1) {
    uVar1 = param_1[1];
    bVar2 = uVar1 < param_2[1];
  }
  return CONCAT11((char)(uVar1 >> 8),bVar2);
}



// FUNCTION 147ea803a FUN_147ea803a body=204 status=ok
// SIG undefined FUN_147ea803a(void)

void FUN_147ea803a(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 0x1a8);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1a0);
    lVar5 = 0;
    do {
      if (((((*(byte *)(lVar3 + 0x13 + lVar5) & 2) == 0) &&
           (*(char *)(lVar3 + 0x12 + lVar5) == '\x01')) &&
          (lVar4 = *(longlong *)(lVar3 + lVar5), lVar4 != 0)) &&
         (uVar1 = *(ushort *)(lVar3 + 0x10 + lVar5), (int)(uint)uVar1 < *(int *)(param_1 + 0x170)))
      {
        local_34 = 0;
        local_48 = &local_34;
        FUN_147eba00a(lVar4,param_1,
                      (ulonglong)*(ushort *)(lVar4 + 0x52) +
                      *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x30 + (ulonglong)uVar1 * 0x58)
                      ,*(undefined4 *)(param_1 + 0x2f4));
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar5);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ea8108 FUN_147ea8108 body=301 status=ok
// SIG undefined FUN_147ea8108(void)

void FUN_147ea8108(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined2 uVar5;
  longlong lVar6;
  
  *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1dc) = 0xffffffffffffffff;
  iVar3 = *(int *)(param_1 + 0x1b8);
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x1b0) + lVar6 * 4);
      if ((int)(uint)uVar1 < *(int *)(param_1 + 0x170)) {
        lVar4 = (ulonglong)uVar1 * 0x58;
        if ((*(int *)(*(longlong *)(param_1 + 0x168) + 0x50 + lVar4) != 0) &&
           (plVar2 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x168) + 0x48),
           plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x60))
                    (plVar2,param_1,*(undefined1 *)(*(longlong *)(param_1 + 0x1b0) + 2 + lVar6 * 4))
          ;
          iVar3 = *(int *)(param_1 + 0x1b8);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  uVar5 = 0;
  if (param_2 != 0) {
    uVar5 = *(undefined2 *)(param_2 + 0x50);
  }
  *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) | 1;
  lVar6 = param_1 + 0x1a0;
  FUN_143847a0c(param_1,lVar6,uVar5,0,1);
  FUN_143847a0c(param_1,lVar6,uVar5,1,1);
  *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) & 0xfe;
  FUN_147ea803a(param_1);
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (*(int *)(param_1 + 0x1ac) < 0) {
    FUN_147eb68cc(lVar6);
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(int *)(param_1 + 0x1bc) < 0) {
    FUN_147eb68fc(param_1 + 0x1b0);
  }
  *(undefined8 *)(param_1 + 0x1d4) = 0xffffffffffffffff;
  return;
}



// FUNCTION 147ea8236 FUN_147ea8236 body=243 status=ok
// SIG undefined FUN_147ea8236(void)

void FUN_147ea8236(longlong param_1)

{
  longlong lVar1;
  undefined2 uVar2;
  
  if (DAT_14cb1eb88 == '\x01') {
    uVar2 = 0;
    if (((int)(uint)*(ushort *)(param_1 + 0x2d8) < *(int *)(param_1 + 0x170)) &&
       (lVar1 = *(longlong *)
                 (*(longlong *)(param_1 + 0x168) + 8 +
                 (ulonglong)*(ushort *)(param_1 + 0x2d8) * 0x58), uVar2 = 0, lVar1 != 0)) {
      uVar2 = *(undefined2 *)(lVar1 + 0x50);
    }
    FUN_143847a0c(param_1,param_1 + 0x1a0,uVar2,0,0);
    FUN_143847a0c(param_1,param_1 + 0x1a0,uVar2,1,0);
    FUN_147ea803a(param_1);
  }
  if (*(int *)(param_1 + 0x1ac) < 0) {
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    FUN_147eb68cc(param_1 + 0x1a0);
  }
  else {
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x1bc)) {
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  FUN_147eb68fc(param_1 + 0x1b0);
  return;
}



// FUNCTION 147ea832a FUN_147ea832a body=356 status=ok
// SIG undefined FUN_147ea832a(void)

void FUN_147ea832a(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [36];
  undefined2 local_34;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)((longlong)param_1 + 0x2da) & 2) == 0) {
    lVar2 = param_1[0x40];
    if (lVar2 == 0) {
      if ((*(uint *)(param_1 + 0x41) & 3) != 1) goto LAB_147ea8365;
      param_1[0x40] = 0;
      *(undefined4 *)(param_1 + 0x41) = 0;
      local_34 = 0;
      local_32 = 0;
    }
    else {
      if ((*(uint *)(param_1 + 0x41) & 2) != 0) goto LAB_147ea8365;
      param_1[0x40] = 0;
      *(undefined4 *)(param_1 + 0x41) = 0;
      local_32 = *(undefined2 *)(lVar2 + 0x50);
      local_34 = (undefined2)param_1[0x5b];
    }
    FUN_147ea7420(param_1);
    *(undefined2 *)(param_1 + 0x42) = 0xfff;
    FUN_147ea8108(param_1,lVar2);
    uVar1 = *(ushort *)(param_1 + 0x5b);
    if ((int)(uVar1 + 1) < (int)param_1[0x2e]) {
      iVar3 = uVar1 + 1;
      lVar4 = (ulonglong)uVar1 * 0x58;
      do {
        lVar4 = lVar4 + 0x58;
        FUN_147ea718a(param_1[0x2d] + lVar4,param_1,1);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_1[0x2e]);
      FUN_147ea87ae(param_1 + 0x2d,*(ushort *)(param_1 + 0x5b) + 1);
    }
    if ((lVar2 == 0) || ((int)param_1[0x2e] <= (int)(uint)*(ushort *)(param_1 + 0x5b))) {
      FUN_147ea7ae4(param_1);
      (**(code **)(*param_1 + 0x4e8))(param_1);
    }
    else {
      FUN_1438488ce(param_1,lVar2);
    }
  }
LAB_147ea8365:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea8490 FUN_147ea8490 body=163 status=ok
// SIG undefined FUN_147ea8490(void)

void FUN_147ea8490(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar4 = 0x40;
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x168);
      _Src = *(void **)(lVar2 + -0x10 + lVar4);
      iVar1 = *(int *)(lVar2 + -8 + lVar4);
      lVar2 = *(longlong *)(param_1 + 0x178) + (ulonglong)*(byte *)(lVar2 + lVar4) * 0x38;
      *(int *)(lVar2 + 0x28) = iVar1;
      if (*(int *)(lVar2 + 0x2c) == 0 && iVar1 == 0) {
        *(undefined4 *)(lVar2 + 0x2c) = 0;
      }
      else {
        FUN_1447a127e((undefined8 *)(lVar2 + 0x20),iVar1);
        if (iVar1 != 0) {
          memcpy(*(void **)(lVar2 + 0x20),_Src,(longlong)iVar1);
        }
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x58;
    } while (lVar3 < *(int *)(param_1 + 0x170));
  }
  return;
}



// FUNCTION 147ea8534 FUN_147ea8534 body=376 status=ok
// SIG undefined FUN_147ea8534(void)

void FUN_147ea8534(longlong param_1,longlong param_2,short param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  short local_48;
  undefined1 local_46;
  byte local_45;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(uint *)(param_2 + 0x10);
  uVar5 = (ulonglong)(int)uVar3;
  if (0 < (longlong)uVar5) {
    iVar4 = -uVar3;
    lVar6 = uVar5 * 0x18;
    do {
      lVar7 = *(longlong *)(param_2 + 8);
      if ((*(short *)(lVar7 + -8 + lVar6) == param_3) && (*(char *)(lVar7 + -6 + lVar6) == '\x01'))
      {
        if (uVar5 != uVar3) {
          memmove((void *)(lVar7 + lVar6 + -0x18),(void *)(lVar7 + lVar6),
                  (longlong)(int)(uVar3 + iVar4) * 0x18);
          uVar3 = *(uint *)(param_2 + 0x10);
        }
        uVar3 = uVar3 - 1;
        *(uint *)(param_2 + 0x10) = uVar3;
      }
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + -0x18;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar2);
  }
  iVar4 = *(int *)(param_1 + 0x28);
  if (0 < iVar4) {
    lVar7 = 8;
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + -8 + lVar7);
      if ((lVar1 != 0) && (*(int *)(*(longlong *)(param_1 + 0x20) + lVar7) == 0)) {
        local_58 = 0;
        local_46 = 2;
        local_45 = local_45 & 0xfc;
        local_50 = lVar1;
        local_48 = param_3;
        FUN_147ea881a(param_2,&local_58);
        iVar4 = *(int *)(param_1 + 0x28);
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar6 < iVar4);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar6 * 8);
      if (lVar7 != 0) {
        local_50 = 0;
        local_46 = 2;
        local_45 = local_45 & 0xfc;
        local_58 = lVar7;
        local_48 = param_3;
        FUN_147ea881a(param_2,&local_58);
        iVar4 = *(int *)(param_1 + 0x18);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ea86ae FUN_147ea86ae body=124 status=ok
// SIG undefined FUN_147ea86ae(void)

undefined8 FUN_147ea86ae(longlong param_1,short param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar4 = *(longlong *)(param_1 + 8);
  if ((lVar4 == 0) || (*(short *)(lVar4 + 0x50) != param_2)) {
    if (0 < (longlong)*(int *)(param_1 + 0x28)) {
      lVar4 = (longlong)*(int *)(param_1 + 0x28) * 0x10;
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar5);
        if ((lVar2 != 0) && (*(short *)(lVar2 + 0x50) == param_2)) {
          bVar6 = *(int *)(*(longlong *)(param_1 + 0x20) + 8 + lVar5) == 0;
          goto LAB_147ea86c1;
        }
        lVar5 = lVar5 + 0x10;
      } while (lVar4 != lVar5);
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (0 < (longlong)iVar1) {
      lVar4 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar4 * 8);
        if ((lVar5 != 0) && (*(short *)(lVar5 + 0x50) == param_2)) {
          return CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
        }
        lVar4 = lVar4 + 1;
      } while (iVar1 != lVar4);
    }
    uVar3 = 0;
  }
  else {
    bVar6 = *(char *)(param_1 + 0x41) == '\x01';
LAB_147ea86c1:
    uVar3 = CONCAT71((int7)((ulonglong)lVar4 >> 8),bVar6);
  }
  return uVar3;
}



// FUNCTION 147ea872a FUN_147ea872a body=132 status=ok
// SIG undefined FUN_147ea872a(void)

void FUN_147ea872a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x170);
  lVar2 = *(longlong *)(param_1 + 0x168);
  lVar5 = (longlong)iVar1 * 0x58;
  *(undefined1 *)(lVar2 + -0x17 + lVar5) = 2;
  lVar3 = *(longlong *)(lVar2 + -0x50 + lVar5);
  FUN_147ea6da2(param_1,lVar3);
  *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) | 8;
  uVar4 = FUN_147ebe854(lVar3,param_1,
                        (ulonglong)*(ushort *)(lVar3 + 0x52) + *(longlong *)(lVar2 + -0x28 + lVar5))
  ;
  if ((*(char *)(lVar2 + -0x17 + lVar5) == '\x02') && (iVar1 == *(int *)(param_1 + 0x170))) {
    FUN_147ea6e12(param_1,lVar3,uVar4);
    return;
  }
  return;
}



// FUNCTION 147ea87ae FUN_147ea87ae body=107 status=ok
// SIG undefined FUN_147ea87ae(void)

void FUN_147ea87ae(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147eb69e0(param_1,iVar1);
    }
    FUN_147eb69b1((longlong)iVar1 * 0x58 + *param_1,param_2 - iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_147eb6a70(param_1,param_2,iVar1 - param_2);
  FUN_147eb6aca(param_1);
  return;
}



// FUNCTION 147ea881a FUN_147ea881a body=415 status=ok
// SIG undefined FUN_147ea881a(void)

void FUN_147ea881a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  longlong lVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  
  plVar1 = param_1 + 1;
  iVar13 = (int)param_1[2];
  if (iVar13 < 1) {
    bVar9 = false;
  }
  else {
    iVar14 = -1;
    lVar11 = 0;
    lVar12 = 0;
    bVar9 = false;
    do {
      lVar8 = *plVar1;
      if ((*(longlong *)(lVar8 + lVar11) == *param_2) &&
         (*(longlong *)(lVar8 + 8 + lVar11) == param_2[1])) {
        cVar3 = *(char *)((longlong)param_2 + 0x12);
        cVar4 = *(char *)(lVar8 + 0x12 + lVar11);
        if (cVar4 == cVar3) {
          return;
        }
        if (iVar13 + iVar14 != 0) {
          memmove((void *)(lVar8 + lVar11),(void *)(lVar8 + lVar11 + 0x18),
                  (longlong)(iVar13 + iVar14) * 0x18);
          iVar13 = (int)param_1[2];
        }
        bVar9 = cVar3 == '\x02' || cVar4 == '\x02';
        iVar13 = iVar13 + -1;
        *(int *)(param_1 + 2) = iVar13;
      }
      lVar12 = lVar12 + 1;
      iVar14 = iVar14 + -1;
      lVar11 = lVar11 + 0x18;
    } while (lVar12 < iVar13);
  }
  if (((bVar9) || (*(char *)((longlong)param_2 + 0x12) != '\x02')) || (*param_2 == 0)) {
    if (bVar9) {
      return;
    }
  }
  else {
    if (*(int *)(*param_1 + 0x170) <= (int)(uint)*(ushort *)(param_2 + 2)) {
      return;
    }
    lVar11 = *(longlong *)(*param_1 + 0x168);
    lVar8 = (ulonglong)*(ushort *)(param_2 + 2) * 0x58;
    lVar12 = (longlong)*(int *)(lVar11 + 0x18 + lVar8);
    if (lVar12 == 0) {
      return;
    }
    lVar10 = 0;
    while (*(longlong *)(*(longlong *)(lVar11 + 0x10 + lVar8) + lVar10) != *param_2) {
      lVar10 = lVar10 + 8;
      if (lVar12 * 8 == lVar10) {
        return;
      }
    }
  }
  *(uint *)(param_1 + 2) = iVar13 + 1U;
  if (*(uint *)((longlong)param_1 + 0x14) < iVar13 + 1U) {
    FUN_147eb8652(plVar1,iVar13);
  }
  lVar11 = *plVar1;
  lVar8 = (longlong)iVar13;
  *(longlong *)(lVar11 + 0x10 + lVar8 * 0x18) = param_2[2];
  uVar5 = *(undefined4 *)((longlong)param_2 + 4);
  lVar12 = param_2[1];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar2 = (undefined4 *)(lVar11 + lVar8 * 0x18);
  *puVar2 = (int)*param_2;
  puVar2[1] = uVar5;
  puVar2[2] = (int)lVar12;
  puVar2[3] = uVar6;
  if ((*(char *)((longlong)param_2 + 0x12) == '\x01') && (lVar11 = *param_2, lVar11 != 0)) {
    lVar12 = FUN_1458f16e2();
    lVar11 = *(longlong *)(lVar11 + 0x10);
    if ((*(int *)(lVar12 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
        lVar12 + 0x30)) {
      bVar7 = 1;
      goto LAB_147ea8967;
    }
  }
  bVar7 = 0;
LAB_147ea8967:
  *(byte *)(*plVar1 + 0x13 + lVar8 * 0x18) = *(byte *)(*plVar1 + 0x13 + lVar8 * 0x18) & 0xfe | bVar7
  ;
  return;
}



// FUNCTION 147ea89ba FUN_147ea89ba body=281 status=ok
// SIG undefined FUN_147ea89ba(void)

void FUN_147ea89ba(longlong param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ushort uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  ushort local_50;
  undefined1 local_4e;
  byte local_4d;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar5 = *(int *)(param_1 + 0x170);
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x168) + 0x18 + lVar7 * 0x58);
      if (lVar8 != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x10 + lVar7 * 0x58);
        lVar9 = 0;
        do {
          lVar3 = *(longlong *)(lVar2 + lVar9);
          uVar1 = *(ushort *)(lVar3 + 0x50);
          uVar6 = (ushort)lVar7;
          bVar4 = param_2[1] < uVar1;
          if (*param_2 != uVar6) {
            bVar4 = *param_2 < uVar6;
          }
          if (bVar4) {
            bVar4 = uVar6 < *param_3;
            if (*param_3 == uVar6) {
              bVar4 = uVar1 < param_3[1];
            }
            if (bVar4) {
              local_60[1] = 0;
              local_4e = 2;
              local_4d = local_4d & 0xfc;
              local_60[0] = lVar3;
              local_50 = uVar6;
              FUN_147ea881a(param_1 + 0x198,local_60);
            }
          }
          lVar9 = lVar9 + 8;
        } while (lVar8 * 8 != lVar9);
        iVar5 = *(int *)(param_1 + 0x170);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea8ad4 FUN_147ea8ad4 body=89 status=ok
// SIG undefined FUN_147ea8ad4(void)

undefined8 * FUN_147ea8ad4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147eb6b70(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 147ea8b2e FUN_147ea8b2e body=329 status=ok
// SIG undefined FUN_147ea8b2e(void)

void FUN_147ea8b2e(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  short local_64;
  undefined2 local_62;
  short *local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    local_62 = *(undefined2 *)(param_2 + 0x50);
    local_64 = (short)*(undefined4 *)(param_1 + 0x170) + -1;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,3,0x10);
    puVar3 = local_88;
    local_80 = 3;
    *local_88 = &PTR_LAB_14abe5500;
    uVar4 = FUN_144a3f946();
    puVar3[2] = uVar4;
    *puVar3 = &PTR_FUN_14abe58c0;
    puVar3[3] = 0;
    FUN_14485c47a(puVar3 + 3,param_2);
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[4] = FUN_147ebea40;
    FUN_147ecd47a(local_78,param_1,param_3,&local_88);
    local_60 = &local_64;
    local_58 = local_78;
    FUN_147eb6e92(param_1 + 0x238,local_4c);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    FUN_1449db362(&local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea8c78 FUN_147ea8c78 body=341 status=ok
// SIG undefined FUN_147ea8c78(void)

void FUN_147ea8c78(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  undefined8 **local_98;
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  short local_64;
  undefined2 local_62;
  short *local_60;
  undefined1 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    local_62 = *(undefined2 *)(param_2 + 0x50);
    local_64 = (short)*(undefined4 *)(param_1 + 0x170) + -1;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    FUN_1446efa72(&local_88,0,3,0x10);
    puVar3 = local_88;
    local_80 = 3;
    *local_88 = &PTR_LAB_14abe5500;
    uVar4 = FUN_144a3f946();
    puVar3[2] = uVar4;
    *puVar3 = &PTR_FUN_14abe58c0;
    puVar3[3] = 0;
    FUN_14485c47a(puVar3 + 3,param_2);
    *(undefined4 *)(puVar3 + 5) = 0;
    puVar3[4] = FUN_147ebea40;
    local_98 = &local_88;
    FUN_147ecd61c(local_78,param_1,param_3,param_4);
    local_60 = &local_64;
    local_58 = local_78;
    FUN_147eb6e92(param_1 + 0x238,local_4c);
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
    FUN_1449db362(&local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea8dce FUN_147ea8dce body=114 status=ok
// SIG undefined FUN_147ea8dce(void)

undefined8 FUN_147ea8dce(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar2 = *(uint *)(param_1 + 0x170);
  if ((ulonglong)uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar4 = (longlong)(int)(uVar2 - 1) * 0x58;
    cVar1 = *(char *)(lVar3 + 0x41 + lVar4);
    uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),cVar1 == '\x02');
    if ((0 < (int)uVar2) && (cVar1 != '\x02')) {
      uVar6 = 0;
      do {
        lVar4 = (longlong)*(int *)(lVar3 + 0x28 + uVar6 * 0x58);
        if (lVar4 != 0) {
          lVar4 = lVar4 * 0x10;
          lVar7 = 0;
          do {
            if (*(int *)(*(longlong *)(lVar3 + 0x20 + uVar6 * 0x58) + 8 + lVar7) == 1) {
              return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
            }
            lVar7 = lVar7 + 0x10;
          } while (lVar4 != lVar7);
        }
        uVar6 = uVar6 + 1;
        uVar5 = 0;
      } while (uVar6 != uVar2);
    }
  }
  return uVar5;
}



// FUNCTION 147ea8e40 FUN_147ea8e40 body=64 status=ok
// SIG undefined FUN_147ea8e40(void)

longlong FUN_147ea8e40(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147eb69e0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x58 + *param_1;
  FUN_147eb69b1(lVar2,1);
  return lVar2;
}



// FUNCTION 147ea8e80 FUN_147ea8e80 body=463 status=ok
// SIG undefined FUN_147ea8e80(void)

ulonglong FUN_147ea8e80(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  undefined2 *_Buf2;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 uVar6;
  ulonglong uVar7;
  int *piVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong local_80 [2];
  undefined2 *puStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lStack_60 = 0;
  local_80[1] = 0;
  puStack_70 = (undefined2 *)0x0;
  local_58 = 0;
  local_50 = 0xffffffff;
  uVar6 = 0xffff;
  if (param_3 != 0) {
    uVar6 = *(undefined2 *)(param_3 + 0x50);
  }
  local_68 = 1;
  local_80[0] = param_2;
  FUN_14488eebe(&puStack_70,0);
  *puStack_70 = uVar6;
  if (0 < (int)param_4) {
    uVar9 = (ulonglong)param_4 + 1;
    lVar10 = (ulonglong)param_4 * 0x58 + -0x50;
    do {
      uVar7 = local_68;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x168) + lVar10);
      if (lVar5 == 0) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *(undefined2 *)(lVar5 + 0x50);
      }
      lVar5 = (longlong)(int)local_68;
      uVar3 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,uVar3);
      if (local_68._4_4_ < uVar3) {
        FUN_14488eebe(&puStack_70,uVar7 & 0xffffffff);
      }
      puStack_70[lVar5] = uVar6;
      uVar9 = uVar9 - 1;
      lVar10 = lVar10 + -0x58;
    } while (1 < uVar9);
  }
  _Buf2 = puStack_70;
  lVar10 = local_80[0];
  local_88 = (longlong *)(param_1 + 0x178);
  iVar1 = *(int *)(param_1 + 0x180);
  uVar9 = (ulonglong)iVar1;
  if (0 < (longlong)uVar9) {
    iVar2 = (int)local_68;
    lVar5 = (longlong)(int)local_68;
    piVar8 = (int *)(*local_88 + 0x18);
    uVar7 = 0;
    do {
      if (((*(longlong *)(piVar8 + -6) == lVar10) && (*piVar8 == iVar2)) &&
         ((iVar2 == 0 || (iVar4 = memcmp(*(void **)(piVar8 + -2),_Buf2,lVar5 * 2), iVar4 == 0)))) {
        uVar9 = uVar7 & 0xffffffff;
        goto LAB_147ea8fc6;
      }
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 0xe;
    } while (uVar9 != uVar7);
  }
  local_50 = *(undefined4 *)(param_1 + 400);
  *(uint *)(param_1 + 0x180) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar1 + 1U) {
    FUN_147eb7554(local_88,iVar1);
  }
  FUN_147eb74a4(uVar9 * 0x38 + *local_88,local_80);
LAB_147ea8fc6:
  if (lStack_60 != 0) {
    FUN_1400020a8();
  }
  if (puStack_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 147ea9050 FUN_147ea9050 body=629 status=ok
// SIG undefined FUN_147ea9050(void)

void FUN_147ea9050(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (0 < *(int *)(param_3 + 0x70)) {
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x68) + lVar6 * 8);
      FUN_147ebdf12(lVar4,param_2,
                    (ulonglong)*(ushort *)(lVar4 + 0x52) + *(longlong *)(param_1 + 0x30),param_4,
                    param_5);
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_3 + 0x70));
  }
  lVar6 = (ulonglong)*(ushort *)(param_3 + 0x52) + *(longlong *)(param_1 + 0x30);
  FUN_147ebdf12(param_3,param_2,lVar6,param_4,param_5);
  lVar6 = FUN_147eb9f50(param_3,param_2,lVar6);
  if (lVar6 != 0) {
    lVar4 = FUN_14587de5c();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      *(undefined2 *)(lVar6 + 0x7c) = *(undefined2 *)(param_3 + 0x7c);
    }
  }
  if (0 < *(int *)(param_3 + 0x60)) {
    lVar6 = 0;
    do {
      plVar1 = (longlong *)(*(longlong *)(param_3 + 0x58) + lVar6 * 0x30);
      if (0 < *(int *)(*(longlong *)(param_3 + 0x58) + 0x18 + lVar6 * 0x30)) {
        lVar4 = 0;
        do {
          lVar5 = *(longlong *)(plVar1[2] + lVar4 * 8);
          lVar3 = (ulonglong)*(ushort *)(lVar5 + 0x52) + *(longlong *)(param_1 + 0x30);
          FUN_147ebdf12(lVar5,param_2,lVar3,param_4,param_5);
          lVar3 = FUN_147eb9f50(lVar5,param_2,lVar3);
          if (lVar3 != 0) {
            lVar2 = FUN_1411e5eac();
            if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
              *(undefined1 *)(lVar3 + 0x59) = *(undefined1 *)(lVar5 + 0x59);
            }
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < (int)plVar1[3]);
      }
      if (*plVar1 == 0) {
        lVar4 = plVar1[1];
        if (lVar4 != 0) {
          if (0 < *(int *)(lVar4 + 0x60)) {
            lVar5 = 0;
            do {
              lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x58) + lVar5 * 8);
              lVar3 = (ulonglong)*(ushort *)(lVar4 + 0x52) + *(longlong *)(param_1 + 0x30);
              FUN_147ebdf12(lVar4,param_2,lVar3,param_4,param_5);
              lVar3 = FUN_147eb9f50(lVar4,param_2,lVar3);
              if (lVar3 != 0) {
                lVar2 = FUN_1458f16e2();
                if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
                  *(undefined1 *)(lVar3 + 0x59) = *(undefined1 *)(lVar4 + 0x59);
                }
              }
              lVar5 = lVar5 + 1;
              lVar4 = plVar1[1];
            } while (lVar5 < *(int *)(lVar4 + 0x60));
          }
          FUN_147ebdf12(lVar4,param_2,
                        (ulonglong)*(ushort *)(lVar4 + 0x52) + *(longlong *)(param_1 + 0x30),param_4
                        ,param_5);
        }
      }
      else {
        FUN_147ea9050(param_1,param_2,*plVar1,param_4,param_5);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_3 + 0x60));
  }
  return;
}



// FUNCTION 147ea92c6 FUN_147ea92c6 body=235 status=ok
// SIG undefined FUN_147ea92c6(void)

longlong FUN_147ea92c6(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_2 != 0) {
    if ((*(byte *)(param_2 + 0x55) & 1) == 0) {
      return param_2;
    }
    lVar3 = *(longlong *)(param_2 + 0x48);
    if (lVar3 == 0) {
      return param_2;
    }
    uVar5 = (ulonglong)*(int *)(lVar3 + 0x60);
    if (0 < (longlong)uVar5) {
      bVar10 = true;
      uVar7 = 0;
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x58) + 8 + uVar7 * 0x30);
        if (lVar6 != 0) {
          if (*(short *)(lVar6 + 0x50) == *(short *)(param_2 + 0x50)) {
            return lVar6;
          }
          piVar1 = (int *)(lVar6 + 0x60);
          if (0 < (longlong)*piVar1) {
            plVar2 = (longlong *)(lVar6 + 0x58);
            lVar9 = 0;
            do {
              lVar6 = *(longlong *)(*plVar2 + lVar9 * 8);
              if (*(short *)(lVar6 + 0x50) == *(short *)(param_2 + 0x50)) goto LAB_147ea937b;
              lVar9 = lVar9 + 1;
            } while (*piVar1 != lVar9);
          }
        }
        lVar9 = uVar7 * 0x30 + *(longlong *)(lVar3 + 0x58);
        lVar4 = (longlong)*(int *)(lVar9 + 0x18);
        if (0 < lVar4) {
          lVar8 = 0;
          do {
            lVar6 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + lVar8 * 8);
            if (*(short *)(lVar6 + 0x50) == *(short *)(param_2 + 0x50)) goto LAB_147ea937b;
            lVar8 = lVar8 + 1;
          } while (lVar4 != lVar8);
        }
        uVar7 = uVar7 + 1;
        bVar10 = uVar7 < uVar5;
      } while (uVar7 != uVar5);
LAB_147ea937b:
      if (bVar10) {
        return lVar6;
      }
    }
    if (0 < (longlong)*(int *)(lVar3 + 0x70)) {
      lVar6 = 0;
      do {
        lVar9 = *(longlong *)(*(longlong *)(lVar3 + 0x68) + lVar6 * 8);
        if (*(short *)(lVar9 + 0x50) == *(short *)(param_2 + 0x50)) {
          return lVar9;
        }
        lVar6 = lVar6 + 1;
      } while (*(int *)(lVar3 + 0x70) != lVar6);
    }
  }
  return 0;
}



// FUNCTION 147ea93b2 FUN_147ea93b2 body=588 status=ok
// SIG undefined FUN_147ea93b2(void)

undefined8 * FUN_147ea93b2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_b8;
  longlong local_b0;
  undefined2 *local_a8;
  int local_a0;
  longlong local_98 [2];
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_2 = 0;
  param_2[1] = 0;
  local_b8 = param_2;
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar3 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x168);
      lVar1 = *(longlong *)
               (*(longlong *)(param_1 + 0x178) +
               (ulonglong)*(byte *)(lVar5 + 0x40 + lVar3 * 0x58) * 0x38);
      local_b0 = lVar3;
      if (lVar1 == 0) {
        FUN_140056680(&local_88,&DAT_149e01fe8);
      }
      else {
        local_78 = *(undefined2 **)(lVar1 + 0x18);
        FUN_1400021e4(&local_78,&local_88);
      }
      puVar4 = &DAT_149dfb77a;
      if ((int)uStack_80 != 0) {
        puVar4 = local_88;
      }
      FUN_140002266(&local_78,L"Behavior tree: %s\n",puVar4);
      FUN_1400020e8(local_b8,local_78);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + lVar3 * 0x58;
      lVar3 = *(longlong *)(lVar5 + 8);
      local_78 = (undefined2 *)0x0;
      uStack_70 = 0;
      if (lVar3 == 0) {
        uStack_70._0_4_ = 0;
      }
      else {
        do {
          local_c8 = 0;
          FUN_147ebe220(lVar3,&local_a8,param_1,
                        (ulonglong)*(ushort *)(lVar3 + 0x52) + *(longlong *)(lVar5 + 0x30));
          puVar4 = &DAT_149dfb77a;
          if (local_a0 != 0) {
            puVar4 = local_a8;
          }
          FUN_140002266(local_98,L"  %s\n",puVar4);
          FUN_144a7dea0(&local_88,local_98,&local_78);
          if (local_78 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          local_78 = local_88;
          uStack_70 = uStack_80;
          local_88 = (undefined2 *)0x0;
          uStack_80 = 0;
          if (local_98[0] != 0) {
            FUN_1400020a8();
          }
          if (local_a8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          lVar3 = *(longlong *)(lVar3 + 0x48);
        } while (lVar3 != 0);
      }
      iVar2 = (int)uStack_70 + -1;
      if ((int)uStack_70 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(local_b8,local_78,iVar2);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar3 = local_b0 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x170));
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return local_b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea9600 FUN_147ea9600 body=593 status=ok
// SIG undefined FUN_147ea9600(void)

undefined2 ** FUN_147ea9600(longlong param_1,undefined2 **param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined2 **local_70;
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(param_2,&DAT_149e01fe8);
  iVar2 = *(int *)(param_1 + 0x170);
  if (iVar2 != 0) {
    lVar3 = (longlong)(iVar2 + -1) * 0x58;
    if (*(char *)(*(longlong *)(param_1 + 0x168) + 0x41 + lVar3) == '\x01') {
      FUN_147ea9852(&local_58,*(undefined8 *)(*(longlong *)(param_1 + 0x168) + lVar3 + 8));
      if (&local_58 == param_2) {
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        *param_2 = local_58;
        *(int *)(param_2 + 1) = (int)uStack_50;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
      }
      iVar2 = *(int *)(param_1 + 0x170);
    }
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    if (0 < iVar2) {
      lVar3 = 0;
      local_70 = param_2;
      do {
        lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x168) + 0x28 + lVar3 * 0x58);
        if (lVar5 != 0) {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x168) + 0x20 + lVar3 * 0x58);
          lVar7 = 0;
          do {
            if (*(int *)(lVar1 + 8 + lVar7) == 0) {
              FUN_147ea9852(&local_68,*(undefined8 *)(lVar1 + lVar7));
              iVar2 = local_60 + -1;
              if (local_60 == 0) {
                iVar2 = 0;
              }
              FUN_1400020e8(&local_58,local_68,iVar2);
              if (local_68 != 0) {
                FUN_1400020a8();
              }
              FUN_1400020e8(&local_58,&DAT_149e19f34,2);
            }
            lVar7 = lVar7 + 0x10;
          } while (lVar5 * 0x10 != lVar7);
          iVar2 = *(int *)(param_1 + 0x170);
        }
        param_2 = local_70;
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar2);
      if ((int)uStack_50 - 2U < 0x7fffffff) {
        FUN_1400020e8(local_70,&DAT_149e192ca,2);
        puVar4 = local_58;
        if ((int)uStack_50 == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        iVar2 = (int)uStack_50 + -1;
        if ((int)uStack_50 == 0) {
          iVar2 = 0;
        }
        iVar6 = 2;
        if (2 < iVar2) {
          iVar6 = iVar2;
        }
        FUN_14006620a(&local_68,puVar4,iVar6 + -2);
        iVar2 = local_60 + -1;
        if (local_60 == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(param_2,local_68,iVar2);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        FUN_140002184(param_2,0x29);
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ea9852 FUN_147ea9852 body=254 status=ok
// SIG undefined FUN_147ea9852(void)

undefined8 * FUN_147ea9852(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  uVar1 = *(ushort *)(param_2 + 0x50);
  FUN_147ebe1c8(param_2,&local_40);
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  if (*(longlong *)(param_2 + 0x40) == 0) {
    FUN_140056680(&local_50,&DAT_149e01fe8);
  }
  else {
    local_30 = *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x18);
    FUN_1400021e4(&local_30,&local_50);
  }
  puVar3 = local_50;
  if (local_48 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_58 = (uint)uVar1;
  FUN_140002266(param_1,L"%s::%s[%d]",puVar3,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea9952 FUN_147ea9952 body=339 status=ok
// SIG undefined FUN_147ea9952(void)

undefined8 FUN_147ea9952(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar3 = 0x40;
    lVar1 = 0;
    local_80 = param_2;
    do {
      local_50 = *(undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(param_1 + 0x178) +
                    (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x168) + lVar3) * 0x38) + 0x18);
      FUN_1400021e4(&local_50,&local_78);
      iVar2 = local_70 + -1;
      if (local_70 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(&local_68,local_78,iVar2);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020e8(&local_68,&DAT_149e19f34,2);
      param_2 = local_80;
      lVar1 = lVar1 + 1;
      lVar3 = lVar3 + 0x58;
    } while (lVar1 < *(int *)(param_1 + 0x170));
    if (1 < (uint)uStack_60) {
      iVar2 = 2;
      if (2 < (int)((uint)uStack_60 - 1)) {
        iVar2 = (uint)uStack_60 - 1;
      }
      FUN_14006620a(local_80,local_68,iVar2 + -2);
      goto LAB_147ea9a4a;
    }
  }
  FUN_140056680(param_2,&DAT_149e01fe8);
LAB_147ea9a4a:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea9ab6 FUN_147ea9ab6 body=242 status=ok
// SIG undefined FUN_147ea9ab6(void)

void FUN_147ea9ab6(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  code *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 *local_58;
  undefined1 local_49;
  code *local_48;
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = &local_49;
  local_49 = 0;
  local_70 = param_2;
  local_68 = param_3;
  local_60 = param_1;
  if (param_4 == 0) {
    if (0 < *(int *)(param_1 + 0x170)) {
      lVar3 = 0;
      uVar2 = 0;
      do {
        local_48 = FUN_14384a128;
        local_40 = &local_70;
        FUN_147ea9baa(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x168) + lVar3),
                      uVar2 & 0xffffffff,&local_48);
        uVar2 = uVar2 + 1;
        lVar3 = lVar3 + 0x58;
      } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x170));
    }
  }
  else {
    local_78 = &local_70;
    local_80 = FUN_14384a128;
    uVar1 = FUN_147ea72f6(param_1,param_4);
    FUN_147ea9baa(param_1,param_4,uVar1,&local_80);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ea9baa FUN_147ea9baa body=228 status=ok
// SIG undefined FUN_147ea9baa(void)

void FUN_147ea9baa(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x170))) &&
     (0 < *(int *)(param_2 + 0x60))) {
    lVar3 = 8;
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + -8 + lVar3);
      if (lVar1 == 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x58) + lVar3);
        if (lVar1 != 0) {
          local_4c = param_3;
          (*(code *)*param_4)(param_4[1],lVar1,
                              *(longlong *)(param_1 + 0x168) + (ulonglong)param_3 * 0x58,&local_4c);
        }
      }
      else {
        local_60 = *param_4;
        local_58 = param_4[1];
        FUN_147ea9baa(param_1,lVar1,param_3,&local_60);
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x30;
    } while (lVar2 < *(int *)(param_2 + 0x60));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ea9c90 FUN_147ea9c90 body=1 status=ok
// SIG undefined FUN_147ea9c90(void)

void FUN_147ea9c90(void)

{
  return;
}



// FUNCTION 147ea9ca0 FUN_147ea9ca0 body=324 status=ok
// SIG undefined FUN_147ea9ca0(void)

void FUN_147ea9ca0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_3 + 0x70)) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x68) + lVar4 * 8);
      FUN_147ebe142(lVar2,param_2,
                    (ulonglong)*(ushort *)(lVar2 + 0x52) + *(longlong *)(param_1 + 0x30),param_4);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_3 + 0x70));
  }
  FUN_147ebe142(param_3,param_2,
                (ulonglong)*(ushort *)(param_3 + 0x52) + *(longlong *)(param_1 + 0x30),param_4);
  if (0 < *(int *)(param_3 + 0x60)) {
    lVar4 = 0;
    do {
      plVar1 = (longlong *)(*(longlong *)(param_3 + 0x58) + lVar4 * 0x30);
      if (0 < *(int *)(*(longlong *)(param_3 + 0x58) + 0x18 + lVar4 * 0x30)) {
        lVar2 = 0;
        do {
          lVar3 = *(longlong *)(plVar1[2] + lVar2 * 8);
          FUN_147ebe142(lVar3,param_2,
                        (ulonglong)*(ushort *)(lVar3 + 0x52) + *(longlong *)(param_1 + 0x30),param_4
                       );
          lVar2 = lVar2 + 1;
        } while (lVar2 < (int)plVar1[3]);
      }
      if (*plVar1 == 0) {
        lVar2 = plVar1[1];
        if (lVar2 != 0) {
          if (0 < *(int *)(lVar2 + 0x60)) {
            lVar3 = 0;
            do {
              lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x58) + lVar3 * 8);
              FUN_147ebe142(lVar2,param_2,
                            (ulonglong)*(ushort *)(lVar2 + 0x52) + *(longlong *)(param_1 + 0x30),
                            param_4);
              lVar3 = lVar3 + 1;
              lVar2 = plVar1[1];
            } while (lVar3 < *(int *)(lVar2 + 0x60));
          }
          FUN_147ebe142(lVar2,param_2,
                        (ulonglong)*(ushort *)(lVar2 + 0x52) + *(longlong *)(param_1 + 0x30),param_4
                       );
        }
      }
      else {
        FUN_147ea9ca0(param_1,param_2,*plVar1,param_4);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_3 + 0x60));
  }
  return;
}



// FUNCTION 147ea9de4 FUN_147ea9de4 body=156 status=ok
// SIG undefined FUN_147ea9de4(void)

void FUN_147ea9de4(longlong *param_1,longlong *param_2)

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
        FUN_147eb8500(param_1);
        return;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return;
}



// FUNCTION 147ea9e80 FUN_147ea9e80 body=142 status=ok
// SIG undefined FUN_147ea9e80(void)

void FUN_147ea9e80(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  do {
    if (param_2 == 0) {
      return;
    }
    iVar4 = *(int *)(param_2 + 0x40);
    if (0 < iVar4) {
      lVar5 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 0x38) + 8 + lVar5 * 0x18) != 0) {
          plVar1 = (longlong *)(*(longlong *)(param_2 + 0x38) + lVar5 * 0x18);
          if ((int)param_1[1] == 0) {
LAB_147ea9ef2:
            param_1[2] = *plVar1;
            break;
          }
          if (0 < (int)param_1[1]) {
            lVar6 = 0;
            do {
              plVar2 = (longlong *)plVar1[1];
              cVar3 = (**(code **)(*plVar2 + 0x2a8))(plVar2,*(undefined8 *)(*param_1 + lVar6 * 8));
              if (cVar3 != '\0') goto LAB_147ea9ef2;
              lVar6 = lVar6 + 1;
            } while (lVar6 < (int)param_1[1]);
            iVar4 = *(int *)(param_2 + 0x40);
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar4);
    }
    param_2 = *(longlong *)(param_2 + 0x30);
  } while( true );
}



// FUNCTION 147ea9f0e FUN_147ea9f0e body=108 status=ok
// SIG undefined FUN_147ea9f0e(void)

longlong * FUN_147ea9f0e(longlong param_1,longlong *param_2,ushort param_3)

{
  longlong lVar1;
  
  if (param_3 != 0xffff) {
    do {
      if (*(ushort *)(param_1 + 0x4c) <= param_3) {
        lVar1 = ((ulonglong)param_3 - (ulonglong)*(ushort *)(param_1 + 0x4c)) * 0x18 +
                *(longlong *)(param_1 + 0x38);
        if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
          lVar1 = *(longlong *)(lVar1 + 0x10);
          *param_2 = lVar1;
          if (lVar1 == 0) {
            return param_2;
          }
          if (DAT_14c950c29 == '\0') {
            return param_2;
          }
          FUN_1456cec3c();
          return param_2;
        }
        break;
      }
      param_1 = *(longlong *)(param_1 + 0x30);
    } while (param_1 != 0);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 147ea9f7a FUN_147ea9f7a body=261 status=ok
// SIG undefined FUN_147ea9f7a(void)

void FUN_147ea9f7a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [2];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_3;
  FUN_1400021e4(&local_28,local_48);
  FUN_144a882a8(&local_38,local_48,L"_Int");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_50,puVar3,1);
  lVar2 = FUN_147eaa080(param_2,local_50);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1412dc08c(param_1,iVar1);
  }
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eaa080 FUN_147eaa080 body=183 status=ok
// SIG undefined FUN_147eaa080(void)

undefined8 FUN_147eaa080(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b60dec();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eaa138 FUN_147eaa138 body=261 status=ok
// SIG undefined FUN_147eaa138(void)

void FUN_147eaa138(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48 [2];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_3;
  FUN_1400021e4(&local_28,local_48);
  FUN_144a882a8(&local_38,local_48,L"_Bool");
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_50,puVar3,1);
  lVar2 = FUN_147eaa23e(param_2,local_50);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1412dc08c(param_1,iVar1);
  }
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eaa23e FUN_147eaa23e body=183 status=ok
// SIG undefined FUN_147eaa23e(void)

undefined8 FUN_147eaa23e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_145b60d02();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eaa2f6 FUN_147eaa2f6 body=271 status=ok
// SIG undefined FUN_147eaa2f6(void)

undefined8 * FUN_147eaa2f6(undefined8 *param_1,uint param_2)

{
  int iVar1;
  void *_Src;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1ecd0) {
    FUN_144b3d300(&DAT_14cb1ecd0);
    if (DAT_14cb1ecd0 == -1) {
      FUN_140056680(&DAT_14cb1ec90,L"Succeeded");
      FUN_140056680(&DAT_14cb1eca0,L"Failed");
      FUN_140056680(&DAT_14cb1ecb0,L"Aborted");
      FUN_140056680(&DAT_14cb1ecc0,L"InProgress");
      atexit(FUN_143849a13);
      _Init_thread_footer(&DAT_14cb1ecd0);
    }
  }
  if (param_2 < 4) {
    *param_1 = 0;
    iVar1 = *(int *)(&DAT_14cb1ec98 + (ulonglong)param_2 * 0x10);
    _Src = *(void **)(&DAT_14cb1ec90 + (ulonglong)param_2 * 0x10);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}



// FUNCTION 147eaa406 FUN_147eaa406 body=271 status=ok
// SIG undefined FUN_147eaa406(void)

undefined8 * FUN_147eaa406(undefined8 *param_1,uint param_2)

{
  int iVar1;
  void *_Src;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb1ed20) {
    FUN_144b3d300(&DAT_14cb1ed20);
    if (DAT_14cb1ed20 == -1) {
      FUN_140056680(&DAT_14cb1ece0,&DAT_149e01fe8);
      FUN_140056680(&DAT_14cb1ecf0,L"Lower Priority");
      FUN_140056680(&DAT_14cb1ed00,L"Self");
      FUN_140056680(&DAT_14cb1ed10,L"Both");
      atexit(FUN_143849a41);
      _Init_thread_footer(&DAT_14cb1ed20);
    }
  }
  if (param_2 < 4) {
    *param_1 = 0;
    iVar1 = *(int *)(&DAT_14cb1ece8 + (ulonglong)param_2 * 0x10);
    _Src = *(void **)(&DAT_14cb1ece0 + (ulonglong)param_2 * 0x10);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}



// FUNCTION 147eaa516 FUN_147eaa516 body=409 status=ok
// SIG undefined FUN_147eaa516(void)

longlong * FUN_147eaa516(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) || (lVar1 = *(longlong *)(param_2 + 0x10), lVar1 == 0)) {
    FUN_140056680(param_1,&DAT_149e01fe8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((*(byte *)(lVar1 + 0xd6) & 4) == 0) {
    local_38 = *(longlong *)(lVar1 + 0x18);
    FUN_1400021e4(&local_38,param_1);
    local_40 = 0xffffffff;
    local_48 = 0;
    iVar2 = FUN_1447ee042(param_1,&DAT_149e01f60,1,0);
    if (iVar2 != -1) {
      iVar3 = (int)param_1[1];
      uVar5 = iVar3 - 1;
      if (iVar3 == 0) {
        uVar5 = 0;
      }
      if ((int)(iVar2 + 1U) < (int)uVar5) {
        uVar5 = iVar2 + 1U;
      }
      if (0 < (int)uVar5) {
        if (iVar3 - uVar5 != 0) {
          memmove((void *)*param_1,(void *)(*param_1 + (ulonglong)uVar5 * 2),
                  (longlong)(int)(iVar3 - uVar5) * 2);
          iVar3 = (int)param_1[1];
        }
        *(uint *)(param_1 + 1) = iVar3 - uVar5;
      }
    }
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4();
    iVar2 = local_30 + -1;
    if (local_30 == 0) {
      iVar2 = 0;
    }
    iVar3 = 2;
    if (2 < iVar2) {
      iVar3 = iVar2;
    }
    uVar4 = iVar3 - 2;
    uVar6 = iVar2 - uVar4;
    uVar5 = 2;
    if ((int)uVar6 < 2) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 1) {
      uVar5 = 0;
    }
    if (0 < (int)uVar6) {
      iVar2 = local_30 - (uVar5 + uVar4);
      if (iVar2 != 0) {
        _Dst = (void *)((ulonglong)uVar4 * 2 + local_38);
        memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar5 * 2),(longlong)iVar2 * 2);
      }
      local_30 = local_30 - uVar5;
    }
    *param_1 = local_38;
    *(int *)(param_1 + 1) = local_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147eaa6b0 FUN_147eaa6b0 body=88 status=ok
// SIG undefined FUN_147eaa6b0(void)

void FUN_147eaa6b0(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_147ea9852(&local_18,param_1);
  if (CONCAT44(DAT_14cb1ec78._4_4_,(undefined4)DAT_14cb1ec78) != 0) {
    FUN_1400020a8();
  }
  DAT_14cb1ec78._0_4_ = local_18;
  DAT_14cb1ec78._4_4_ = uStack_14;
  uRam000000014cb1ec80 = uStack_10;
  uRam000000014cb1ec84 = uStack_c;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eaa70a FUN_147eaa70a body=39 status=ok
// SIG undefined FUN_147eaa70a(void)

void FUN_147eaa70a(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x10))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147eaa734 FUN_147eaa734 body=169 status=ok
// SIG undefined FUN_147eaa734(void)

void FUN_147eaa734(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147eaa7de(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eaa7de FUN_147eaa7de body=82 status=ok
// SIG undefined FUN_147eaa7de(void)

void FUN_147eaa7de(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar4;
            goto LAB_147eaa821;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eaa821:
  FUN_147eb038a(param_1,iVar1);
  return;
}



// FUNCTION 147eaa836 FUN_147eaa836 body=268 status=ok
// SIG undefined FUN_147eaa836(void)

void FUN_147eaa836(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar3 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147eaa944(param_1,puVar3,puVar4);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eaa944 FUN_147eaa944 body=82 status=ok
// SIG undefined FUN_147eaa944(void)

void FUN_147eaa944(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar3 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar3 + 0x40)) {
        plVar4 = *(longlong **)(lVar3 + 0x38);
        lVar2 = 0;
        do {
          if (*plVar4 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar3 + 0x4c) - (int)lVar2;
            goto LAB_147eaa990;
          }
          lVar2 = lVar2 + -1;
          plVar4 = plVar4 + 3;
        } while (-lVar2 != (longlong)*(int *)(lVar3 + 0x40));
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_147eaa990:
  FUN_147eb085c(param_1,iVar1);
  return;
}



// FUNCTION 147eaa99c FUN_147eaa99c body=268 status=ok
// SIG undefined FUN_147eaa99c(void)

void FUN_147eaa99c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar3 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147eaaaaa(param_1,puVar3,puVar4);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eaaaaa FUN_147eaaaaa body=82 status=ok
// SIG undefined FUN_147eaaaaa(void)

void FUN_147eaaaaa(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar3 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar3 + 0x40)) {
        plVar4 = *(longlong **)(lVar3 + 0x38);
        lVar2 = 0;
        do {
          if (*plVar4 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar3 + 0x4c) - (int)lVar2;
            goto LAB_147eaaaf6;
          }
          lVar2 = lVar2 + -1;
          plVar4 = plVar4 + 3;
        } while (-lVar2 != (longlong)*(int *)(lVar3 + 0x40));
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_147eaaaf6:
  FUN_147eb095a(param_1,iVar1);
  return;
}



// FUNCTION 147eaab02 FUN_147eaab02 body=176 status=ok
// SIG undefined FUN_147eaab02(void)

void FUN_147eaab02(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147eadf78(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eaabb4 thunk_FUN_147eadf78 body=5 status=ok
// SIG undefined thunk_FUN_147eadf78(void)

void thunk_FUN_147eadf78(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar4;
            goto LAB_147eadfbb;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eadfbb:
  FUN_147eb9a70(param_1,iVar1);
  return;
}



// FUNCTION 147eaabba FUN_147eaabba body=177 status=ok
// SIG undefined FUN_147eaabba(void)

void FUN_147eaabba(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147eade30(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eaac6c thunk_FUN_147eade30 body=5 status=ok
// SIG undefined thunk_FUN_147eade30(void)

void thunk_FUN_147eade30(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar4;
            goto LAB_147eade73;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eade73:
  FUN_147eb9740(param_1,iVar1);
  return;
}



// FUNCTION 147eaac72 FUN_147eaac72 body=176 status=ok
// SIG undefined FUN_147eaac72(void)

void FUN_147eaac72(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147eade82(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eaad24 thunk_FUN_147eade82 body=5 status=ok
// SIG undefined thunk_FUN_147eade82(void)

void thunk_FUN_147eade82(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar4;
            goto LAB_147eadec5;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eadec5:
  FUN_147eb9830(param_1,iVar1);
  return;
}



// FUNCTION 147eaad2a FUN_147eaad2a body=178 status=ok
// SIG undefined FUN_147eaad2a(void)

void FUN_147eaad2a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147eadf26(param_1,puVar1);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eaadde thunk_FUN_147eadf26 body=5 status=ok
// SIG undefined thunk_FUN_147eadf26(void)

void thunk_FUN_147eadf26(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar4;
            goto LAB_147eadf69;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eadf69:
  FUN_147eb99a8(param_1,iVar1);
  return;
}



// FUNCTION 147eaade4 FUN_147eaade4 body=176 status=ok
// SIG undefined FUN_147eaade4(void)

void FUN_147eaade4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147eaded4(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eaae96 thunk_FUN_147eaded4 body=5 status=ok
// SIG undefined thunk_FUN_147eaded4(void)

void thunk_FUN_147eaded4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar4;
            goto LAB_147eadf17;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eadf17:
  FUN_147eb98e8(param_1,iVar1);
  return;
}



// FUNCTION 147eaae9c FUN_147eaae9c body=188 status=ok
// SIG undefined FUN_147eaae9c(void)

void FUN_147eaae9c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147eae032(param_1,&local_30,puVar1);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eaaf5a FUN_147eaaf5a body=22 status=ok
// SIG undefined FUN_147eaaf5a(void)

undefined8 FUN_147eaaf5a(undefined8 param_1,undefined8 param_2)

{
  FUN_147eae032();
  return param_2;
}



// FUNCTION 147eaaf70 FUN_147eaaf70 body=177 status=ok
// SIG undefined FUN_147eaaf70(void)

void FUN_147eaaf70(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147eaddde(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eab022 thunk_FUN_147eaddde body=5 status=ok
// SIG undefined thunk_FUN_147eaddde(void)

void thunk_FUN_147eaddde(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar4;
            goto LAB_147eade21;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eade21:
  FUN_147eb9650(param_1,iVar1);
  return;
}



// FUNCTION 147eab028 FUN_147eab028 body=196 status=ok
// SIG undefined FUN_147eab028(void)

void FUN_147eab028(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147eae102(param_1,&local_40,puVar1);
  *(undefined8 *)(param_3 + 4) = local_30;
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



// FUNCTION 147eab0ee FUN_147eab0ee body=22 status=ok
// SIG undefined FUN_147eab0ee(void)

undefined8 FUN_147eab0ee(undefined8 param_1,undefined8 param_2)

{
  FUN_147eae102();
  return param_2;
}



// FUNCTION 147eab104 FUN_147eab104 body=239 status=ok
// SIG undefined FUN_147eab104(void)

void FUN_147eab104(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147eadfca(param_1,&local_38,puVar1);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eab1f4 FUN_147eab1f4 body=22 status=ok
// SIG undefined FUN_147eab1f4(void)

undefined8 FUN_147eab1f4(undefined8 param_1,undefined8 param_2)

{
  FUN_147eadfca();
  return param_2;
}



// FUNCTION 147eab20a FUN_147eab20a body=196 status=ok
// SIG undefined FUN_147eab20a(void)

void FUN_147eab20a(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147eae09a(param_1,&local_40,puVar1);
  *(undefined8 *)(param_3 + 4) = local_30;
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



// FUNCTION 147eab2d0 FUN_147eab2d0 body=22 status=ok
// SIG undefined FUN_147eab2d0(void)

undefined8 FUN_147eab2d0(undefined8 param_1,undefined8 param_2)

{
  FUN_147eae09a();
  return param_2;
}



// FUNCTION 147eab2ec FUN_147eab2ec body=176 status=ok
// SIG undefined FUN_147eab2ec(void)

void FUN_147eab2ec(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar2 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147eab39e(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eab39e FUN_147eab39e body=197 status=ok
// SIG undefined FUN_147eab39e(void)

byte FUN_147eab39e(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar3 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar4 = *(longlong **)(lVar2 + 0x38);
        lVar5 = 0;
        do {
          if (*plVar4 == *param_2) {
            iVar3 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar5;
            goto LAB_147eab3fd;
          }
          lVar5 = lVar5 + -1;
          plVar4 = plVar4 + 3;
        } while (-lVar5 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eab3fd:
  FUN_147eb02a8(param_1,&local_28,iVar3);
  bVar1 = 1;
  if ((local_28 == DAT_14cb1e7b0) && (!NAN(local_28) && !NAN(DAT_14cb1e7b0))) {
    if ((local_20 == DAT_14cb1e7b8) && (!NAN(local_20) && !NAN(DAT_14cb1e7b8))) {
      bVar1 = -(DAT_14cb1e7c0 != local_18) & 1;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar1;
}



// FUNCTION 147eab46a FUN_147eab46a body=250 status=ok
// SIG undefined FUN_147eab46a(void)

void FUN_147eab46a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147eab566(param_1,puVar2,local_2c != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eab566 FUN_147eab566 body=82 status=ok
// SIG undefined FUN_147eab566(void)

void FUN_147eab566(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar3 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar3 + 0x40)) {
        plVar4 = *(longlong **)(lVar3 + 0x38);
        lVar2 = 0;
        do {
          if (*plVar4 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar3 + 0x4c) - (int)lVar2;
            goto LAB_147eab5b2;
          }
          lVar2 = lVar2 + -1;
          plVar4 = plVar4 + 3;
        } while (-lVar2 != (longlong)*(int *)(lVar3 + 0x40));
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_147eab5b2:
  FUN_147eaf024(param_1,iVar1);
  return;
}



// FUNCTION 147eab5b8 FUN_147eab5b8 body=247 status=ok
// SIG undefined FUN_147eab5b8(void)

void FUN_147eab5b8(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147eab6b0(param_1,puVar2,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eab6b0 FUN_147eab6b0 body=82 status=ok
// SIG undefined FUN_147eab6b0(void)

void FUN_147eab6b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar3 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar3 + 0x40)) {
        plVar4 = *(longlong **)(lVar3 + 0x38);
        lVar2 = 0;
        do {
          if (*plVar4 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar3 + 0x4c) - (int)lVar2;
            goto LAB_147eab6fc;
          }
          lVar2 = lVar2 + -1;
          plVar4 = plVar4 + 3;
        } while (-lVar2 != (longlong)*(int *)(lVar3 + 0x40));
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_147eab6fc:
  FUN_147eae16a(param_1,iVar1);
  return;
}



// FUNCTION 147eab702 FUN_147eab702 body=243 status=ok
// SIG undefined FUN_147eab702(void)

void FUN_147eab702(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_29 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_29);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_29);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147eab7f6(param_1,puVar2,local_29);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eab7f6 FUN_147eab7f6 body=82 status=ok
// SIG undefined FUN_147eab7f6(void)

void FUN_147eab7f6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar3 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar3 + 0x40)) {
        plVar4 = *(longlong **)(lVar3 + 0x38);
        lVar2 = 0;
        do {
          if (*plVar4 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar3 + 0x4c) - (int)lVar2;
            goto LAB_147eab842;
          }
          lVar2 = lVar2 + -1;
          plVar4 = plVar4 + 3;
        } while (-lVar2 != (longlong)*(int *)(lVar3 + 0x40));
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_147eab842:
  FUN_147eae55a(param_1,iVar1);
  return;
}



// FUNCTION 147eab848 FUN_147eab848 body=247 status=ok
// SIG undefined FUN_147eab848(void)

void FUN_147eab848(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147eab940(param_1,puVar2,local_2c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eab940 FUN_147eab940 body=82 status=ok
// SIG undefined FUN_147eab940(void)

void FUN_147eab940(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar4;
            goto LAB_147eab983;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eab983:
  FUN_147eaec78(param_1,iVar1);
  return;
}



// FUNCTION 147eab992 FUN_147eab992 body=246 status=ok
// SIG undefined FUN_147eab992(void)

void FUN_147eab992(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147eaba8a(param_1,puVar2,local_2c);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eaba8a FUN_147eaba8a body=82 status=ok
// SIG undefined FUN_147eaba8a(void)

void FUN_147eaba8a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar3 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar3 + 0x40)) {
        plVar4 = *(longlong **)(lVar3 + 0x38);
        lVar2 = 0;
        do {
          if (*plVar4 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar3 + 0x4c) - (int)lVar2;
            goto LAB_147eabad6;
          }
          lVar2 = lVar2 + -1;
          plVar4 = plVar4 + 3;
        } while (-lVar2 != (longlong)*(int *)(lVar3 + 0x40));
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_147eabad6:
  FUN_147eae8ea(param_1,iVar1);
  return;
}



// FUNCTION 147eabadc FUN_147eabadc body=247 status=ok
// SIG undefined FUN_147eabadc(void)

void FUN_147eabadc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147eabbd4(param_1,puVar2,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eabbd4 FUN_147eabbd4 body=82 status=ok
// SIG undefined FUN_147eabbd4(void)

void FUN_147eabbd4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar3 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar3 + 0x40)) {
        plVar4 = *(longlong **)(lVar3 + 0x38);
        lVar2 = 0;
        do {
          if (*plVar4 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar3 + 0x4c) - (int)lVar2;
            goto LAB_147eabc20;
          }
          lVar2 = lVar2 + -1;
          plVar4 = plVar4 + 3;
        } while (-lVar2 != (longlong)*(int *)(lVar3 + 0x40));
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_147eabc20:
  FUN_147eaf75c(param_1,iVar1);
  return;
}



// FUNCTION 147eabc26 FUN_147eabc26 body=247 status=ok
// SIG undefined FUN_147eabc26(void)

void FUN_147eabc26(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147eabd1e(param_1,puVar2,local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eabd1e FUN_147eabd1e body=82 status=ok
// SIG undefined FUN_147eabd1e(void)

void FUN_147eabd1e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar3 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar3 + 0x40)) {
        plVar4 = *(longlong **)(lVar3 + 0x38);
        lVar2 = 0;
        do {
          if (*plVar4 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar3 + 0x4c) - (int)lVar2;
            goto LAB_147eabd6a;
          }
          lVar2 = lVar2 + -1;
          plVar4 = plVar4 + 3;
        } while (-lVar2 != (longlong)*(int *)(lVar3 + 0x40));
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_147eabd6a:
  FUN_147ea3f44(param_1,iVar1);
  return;
}



// FUNCTION 147eabd70 FUN_147eabd70 body=256 status=ok
// SIG undefined FUN_147eabd70(void)

void FUN_147eabd70(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  FUN_147eabe72(param_1,puVar2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eabe72 FUN_147eabe72 body=151 status=ok
// SIG undefined FUN_147eabe72(void)

void FUN_147eabe72(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x120);
  uVar1 = CONCAT62((int6)(local_10 >> 0x10),0xffff);
  if (lVar3 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar3 + 0x40)) {
        plVar4 = *(longlong **)(lVar3 + 0x38);
        lVar2 = 0;
        do {
          if (*plVar4 == *param_2) {
            uVar1 = (ulonglong)((uint)*(ushort *)(lVar3 + 0x4c) - (int)lVar2);
            goto LAB_147eabed1;
          }
          lVar2 = lVar2 + -1;
          plVar4 = plVar4 + 3;
        } while (-lVar2 != (longlong)*(int *)(lVar3 + 0x40));
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_147eabed1:
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_147eafeca(local_28,uVar1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eabf0a FUN_147eabf0a body=345 status=ok
// SIG undefined FUN_147eabf0a(void)

void FUN_147eabf0a(undefined8 param_1,longlong param_2)

{
  void *_Src;
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (void *)0x0;
  lVar2 = (longlong)(int)uStack_40;
  local_50 = (int)uStack_40;
  if (lVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,_Src,lVar2 * 2);
  }
  FUN_147eac064(param_1,puVar1,&local_58);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eac064 FUN_147eac064 body=244 status=ok
// SIG undefined FUN_147eac064(void)

void FUN_147eac064(longlong param_1,longlong *param_2,longlong *param_3)

{
  void *_Src;
  undefined8 unaff_RBX;
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x120);
  uVar1 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),0xffff);
  if (lVar4 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar4 + 0x40)) {
        plVar2 = *(longlong **)(lVar4 + 0x38);
        lVar3 = 0;
        do {
          if (*plVar2 == *param_2) {
            uVar1 = (ulonglong)((uint)*(ushort *)(lVar4 + 0x4c) - (int)lVar3);
            goto LAB_147eac0cf;
          }
          lVar3 = lVar3 + -1;
          plVar2 = plVar2 + 3;
        } while (-lVar3 != (longlong)*(int *)(lVar4 + 0x40));
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
LAB_147eac0cf:
  local_48 = (void *)0x0;
  local_40 = (int)param_3[1];
  lVar4 = (longlong)local_40;
  _Src = (void *)*param_3;
  if (lVar4 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar4 * 2);
  }
  FUN_147eaf3b4(param_1,uVar1 & 0xffffffff,&local_48);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eac15a FUN_147eac15a body=256 status=ok
// SIG undefined FUN_147eac15a(void)

void FUN_147eac15a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_30;
  local_58 = local_40;
  uStack_54 = uStack_3c;
  uStack_50 = uStack_38;
  uStack_4c = uStack_34;
  FUN_147eac25c(param_1,puVar2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eac25c FUN_147eac25c body=151 status=ok
// SIG undefined FUN_147eac25c(void)

void FUN_147eac25c(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(param_1 + 0x120);
  uVar1 = CONCAT62((int6)(local_10 >> 0x10),0xffff);
  if (lVar3 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar3 + 0x40)) {
        plVar4 = *(longlong **)(lVar3 + 0x38);
        lVar2 = 0;
        do {
          if (*plVar4 == *param_2) {
            uVar1 = (ulonglong)((uint)*(ushort *)(lVar3 + 0x4c) - (int)lVar2);
            goto LAB_147eac2bb;
          }
          lVar2 = lVar2 + -1;
          plVar4 = plVar4 + 3;
        } while (-lVar2 != (longlong)*(int *)(lVar3 + 0x40));
      }
      lVar3 = *(longlong *)(lVar3 + 0x30);
    } while (lVar3 != 0);
  }
LAB_147eac2bb:
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_147eafaec(local_28,uVar1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eac2f8 FUN_147eac2f8 body=133 status=ok
// SIG undefined FUN_147eac2f8(void)

void FUN_147eac2f8(longlong param_1)

{
  longlong lVar1;
  
  FUN_14134c582();
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar1 = FUN_147e9e818();
    if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0x110) = lVar1;
      if (lVar1 == 0) goto LAB_147eac312;
    }
    else {
      FUN_1456cec3c(lVar1);
      *(longlong *)(param_1 + 0x110) = lVar1;
    }
    FUN_147ecdcce(lVar1,param_1);
  }
LAB_147eac312:
  if ((*(longlong *)(param_1 + 0x120) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    FUN_143845aae(param_1);
    return;
  }
  return;
}



// FUNCTION 147eac37e FUN_147eac37e body=138 status=ok
// SIG undefined FUN_147eac37e(void)

void FUN_147eac37e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(longlong *)(param_1 + 0x120) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x120) + 0x48) & 1) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
      if (lVar1 == 0) goto LAB_147eac399;
    }
    lVar1 = *(longlong *)(lVar1 + 0x180);
    if (lVar1 != 0) {
      lVar2 = FUN_1413f6fa8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_147ea5c68(lVar1,*(undefined8 *)(param_1 + 0x120),param_1);
      }
    }
  }
LAB_147eac399:
  FUN_147eac408(param_1);
  FUN_140674fee(param_1);
  return;
}



// FUNCTION 147eac408 FUN_147eac408 body=252 status=ok
// SIG undefined FUN_147eac408(void)

void FUN_147eac408(longlong param_1)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  for (lVar5 = *(longlong *)(param_1 + 0x120); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
    iVar3 = *(int *)(lVar5 + 0x40);
    if (0 < iVar3) {
      lVar4 = 8;
      lVar7 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar5 + 0x38) + lVar4);
        if (lVar1 != 0) {
          if ((*(int *)(param_1 + 0x130) == 0) ||
             (uVar2 = *(short *)(lVar5 + 0x4c) + (short)lVar7,
             *(int *)(param_1 + 0x140) <= (int)(uint)uVar2)) {
            lVar6 = 0;
          }
          else {
            lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + (ulonglong)uVar2 * 2) +
                    *(longlong *)(param_1 + 0x128);
          }
          FUN_147eac9aa(lVar1,param_1,lVar6);
          iVar3 = *(int *)(lVar5 + 0x40);
        }
        lVar7 = lVar7 + 1;
        lVar4 = lVar4 + 0x18;
      } while (lVar7 < iVar3);
    }
  }
  if (*(int *)(param_1 + 0x144) < 0) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    FUN_1448759c8(param_1 + 0x138,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  if (*(int *)(param_1 + 0x134) < 0) {
    *(undefined4 *)(param_1 + 0x130) = 0;
    FUN_144893a1c(param_1 + 0x128,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  return;
}



// FUNCTION 147eac504 FUN_147eac504 body=59 status=ok
// SIG undefined FUN_147eac504(void)

void FUN_147eac504(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x110) != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x110) = param_2;
  }
  return;
}



// FUNCTION 147eac540 FUN_147eac540 body=55 status=ok
// SIG undefined FUN_147eac540(void)

void FUN_147eac540(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  
  if (param_1 != 0) {
    FUN_147eac540(*(undefined8 *)(param_1 + 0x30));
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 == 0) {
      sVar2 = 0;
    }
    else {
      sVar2 = *(short *)(lVar1 + 0x4c) + *(short *)(lVar1 + 0x40);
    }
    *(short *)(param_1 + 0x4c) = sVar2;
  }
  return;
}



// FUNCTION 147eac578 FUN_147eac578 body=48 status=ok
// SIG undefined FUN_147eac578(void)

longlong FUN_147eac578(longlong param_1,ushort param_2)

{
  if (param_2 != 0xffff) {
    do {
      if (*(ushort *)(param_1 + 0x4c) <= param_2) {
        return ((ulonglong)param_2 - (ulonglong)*(ushort *)(param_1 + 0x4c)) * 0x18 +
               *(longlong *)(param_1 + 0x38);
      }
      param_1 = *(longlong *)(param_1 + 0x30);
    } while (param_1 != 0);
  }
  return 0;
}



// FUNCTION 147eac5a8 FUN_147eac5a8 body=172 status=ok
// SIG undefined FUN_147eac5a8(void)

void FUN_147eac5a8(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  
  param_3 = param_3 & 0xffff;
  if ((*(int *)(param_2 + 0x130) == 0) || (*(int *)(param_2 + 0x140) <= (int)param_3)) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)((ulonglong)*(ushort *)(*(longlong *)(param_2 + 0x138) + param_3 * 2) +
                    *(longlong *)(param_2 + 0x128));
  }
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) != 0) {
    uVar2 = FUN_1411c53f8();
    param_1 = (longlong *)FUN_14092e757(uVar2,param_1,param_2,0);
    *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) | 1;
    *piVar3 = (int)param_3;
    lVar1 = *(longlong *)(param_2 + 0x148);
    if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    *(longlong **)(lVar1 + param_3 * 8) = param_1;
    piVar3 = piVar3 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000147eac647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2d8))(param_1,param_2,piVar3);
  return;
}



// FUNCTION 147eac654 FUN_147eac654 body=852 status=ok
// SIG undefined FUN_147eac654(void)

void FUN_147eac654(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  short sVar9;
  ushort uVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  int local_120 [2];
  longlong local_118;
  undefined1 local_108 [192];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar6 = *(longlong *)(param_1 + 0xb0);
  if (((lVar6 != 0) || (lVar6 = FUN_1448abda6(param_1), lVar6 != 0)) &&
     (lVar6 = *(longlong *)(lVar6 + 0x180), lVar6 != 0)) {
    lVar7 = FUN_1413f6fa8();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) goto LAB_147eac6c0;
  }
  lVar6 = 0;
LAB_147eac6c0:
  FUN_147ea5a60(lVar6,*(undefined8 *)(param_1 + 0x120),param_1);
  FUN_147ea5824(local_120,lVar6 + 0x140,*(undefined8 *)(param_1 + 0x120));
  if (local_120[0] < local_40) {
    do {
      puVar11 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar11 = local_108;
      }
      if ((longlong)*(int *)(puVar11 + (longlong)local_120[0] * 0x18 + 0x10) == -1) break;
      lVar6 = FUN_14479d2ce(**(longlong **)(puVar11 + (longlong)local_120[0] * 0x18) +
                            (longlong)*(int *)(puVar11 + (longlong)local_120[0] * 0x18 + 0x10) *
                            0x18 + 8);
      if ((lVar6 != 0) && (cVar4 = FUN_147eaca28(param_1,lVar6), cVar4 != '\0')) {
        lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x120) + 0x40);
        if (lVar7 != 0) {
          plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x120) + 0x38);
          plVar2 = plVar14 + lVar7 * 3;
          goto LAB_147eac80b;
        }
        break;
      }
      puVar11 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar11 = local_108;
      }
      puVar1 = (undefined8 *)(puVar11 + (longlong)local_120[0] * 0x18);
      do {
        iVar3 = *(int *)((longlong)puVar1 + 0x14);
        *(int *)(puVar1 + 2) = iVar3;
        if ((longlong)iVar3 == -1) break;
        local_130 = puVar1[1];
        lVar6 = (longlong)iVar3 * 0x18;
        *(undefined4 *)((longlong)puVar1 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + lVar6);
        local_128 = *(undefined8 *)(*(longlong *)*puVar1 + lVar6);
        cVar4 = FUN_147eb47ee(&local_128,&local_130);
      } while (cVar4 == '\0');
      FUN_147ea5a08(local_120);
    } while (local_120[0] < local_40);
  }
LAB_147eac956:
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 0x210) = *(byte *)(param_1 + 0x210) | 2;
  if ((local_38 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147eac80b:
  if (((*(byte *)(plVar14 + 2) & 1) != 0) && (lVar7 = *(longlong *)(lVar6 + 0x120), lVar7 != 0)) {
    do {
      if (0 < (longlong)*(int *)(lVar7 + 0x40)) {
        lVar16 = 0;
        sVar9 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar7 + 0x38) + lVar16) == *plVar14) {
            uVar10 = sVar9 + *(short *)(lVar7 + 0x4c);
            if ((uVar10 == 0xffff) || (plVar12 = (longlong *)plVar14[1], plVar12 == (longlong *)0x0)
               ) goto LAB_147eac811;
            uVar5 = *(byte *)((longlong)plVar12 + 0x2b) & 2;
            lVar7 = *(longlong *)(param_1 + 0x120);
            goto LAB_147eac886;
          }
          sVar9 = sVar9 + 1;
          lVar16 = lVar16 + 0x18;
        } while ((longlong)*(int *)(lVar7 + 0x40) * 0x18 != lVar16);
      }
      lVar7 = *(longlong *)(lVar7 + 0x30);
    } while (lVar7 != 0);
  }
  goto LAB_147eac811;
LAB_147eac886:
  do {
    if (0 < (longlong)*(int *)(lVar7 + 0x40)) {
      plVar15 = *(longlong **)(lVar7 + 0x38);
      lVar16 = 0;
      do {
        if (*plVar15 == *plVar14) {
          uVar13 = (uint)*(ushort *)(lVar7 + 0x4c) - (int)lVar16;
          goto LAB_147eac8c1;
        }
        lVar16 = lVar16 + -1;
        plVar15 = plVar15 + 3;
      } while (-lVar16 != (longlong)*(int *)(lVar7 + 0x40));
    }
    lVar7 = *(longlong *)(lVar7 + 0x30);
  } while (lVar7 != 0);
  uVar13 = 0xffff;
LAB_147eac8c1:
  uVar13 = uVar13 & 0xffff;
  if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(param_1 + 0x140) <= (int)uVar13)) {
    lVar7 = 0;
  }
  else {
    lVar7 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + (ulonglong)uVar13 * 2) +
            *(longlong *)(param_1 + 0x128);
  }
  if ((*(int *)(lVar6 + 0x130) == 0) || (*(int *)(lVar6 + 0x140) <= (int)(uint)uVar10)) {
    local_138 = 0;
  }
  else {
    local_138 = (ulonglong)*(ushort *)(*(longlong *)(lVar6 + 0x138) + (ulonglong)uVar10 * 2) +
                *(longlong *)(lVar6 + 0x128);
  }
  plVar15 = plVar12;
  if ((char)uVar5 != '\0') {
    plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x148) + (ulonglong)uVar13 * 8);
    plVar15 = *(longlong **)(*(longlong *)(lVar6 + 0x148) + (ulonglong)uVar10 * 8);
  }
  uVar8 = (ulonglong)(uVar5 * 2);
  local_138 = local_138 + uVar8;
  (**(code **)(*plVar12 + 0x2d0))(plVar12,param_1,lVar7 + uVar8,plVar15);
LAB_147eac811:
  plVar14 = plVar14 + 3;
  if (plVar14 == plVar2) goto LAB_147eac956;
  goto LAB_147eac80b;
}



// FUNCTION 147eac9aa FUN_147eac9aa body=126 status=ok
// SIG undefined FUN_147eac9aa(void)

void FUN_147eac9aa(longlong *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x2e0);
  }
  else {
    if (param_3 == (int *)0x0) {
      param_1 = (longlong *)0x0;
    }
    else {
      iVar1 = *param_3;
      param_1 = (longlong *)0x0;
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_2 + 0x150))) &&
         (param_1 = *(longlong **)(*(longlong *)(param_2 + 0x148) + (longlong)iVar1 * 8),
         (param_1 != (longlong *)0x0 & DAT_14c950c29) == 1)) {
        FUN_1456cec3c(param_1);
      }
    }
    param_3 = param_3 + 1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x2e0);
  }
                    /* WARNING: Could not recover jumptable at 0x000147eaca25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 147eaca28 FUN_147eaca28 body=120 status=ok
// SIG undefined FUN_147eaca28(void)

ulonglong FUN_147eaca28(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 unaff_RSI;
  
  if (param_2 != param_1) {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*(longlong *)(param_1 + 0x110) == 0) goto LAB_147eaca96;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x110) + 0x120);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x7f8))(plVar1,param_2);
      if (cVar2 != '\0') goto LAB_147eaca96;
    }
    if (*(longlong *)(param_2 + 0x110) == 0) goto LAB_147eaca96;
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x110) + 0x120);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147eaca91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x7f8))(plVar1,param_1);
      return uVar3;
    }
  }
  uVar3 = 0;
LAB_147eaca96:
  return uVar3 & 0xffffffff;
}



// FUNCTION 147eacaa0 FUN_147eacaa0 body=8 status=ok
// SIG undefined FUN_147eacaa0(void)

undefined8 FUN_147eacaa0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



// FUNCTION 147eacaa8 FUN_147eacaa8 body=80 status=ok
// SIG undefined FUN_147eacaa8(void)

void FUN_147eacaa8(longlong param_1,short *param_2,longlong *param_3)

{
  short sVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  sVar1 = -1;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_3) {
            sVar1 = *(short *)(lVar2 + 0x4c) - (short)lVar4;
            goto LAB_147eacaf4;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eacaf4:
  *param_2 = sVar1;
  return;
}



// FUNCTION 147eacaf8 FUN_147eacaf8 body=46 status=ok
// SIG undefined FUN_147eacaf8(void)

undefined8 * FUN_147eacaf8(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x120) == 0) {
    *param_2 = 0;
  }
  else {
    FUN_147ea9f0e(*(longlong *)(param_1 + 0x120),param_2);
  }
  return param_2;
}



// FUNCTION 147eacb26 FUN_147eacb26 body=585 status=ok
// SIG undefined FUN_147eacb26(void)

undefined8 *
FUN_147eacb26(longlong param_1,undefined8 *param_2,ushort param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ushort *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  ushort *local_88;
  undefined8 *local_80;
  undefined1 local_78;
  undefined8 local_70;
  ushort local_62;
  ushort *local_60;
  ushort **local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x160);
  local_90 = param_2;
  local_70 = param_4;
  local_62 = param_3;
  if (*(int *)(param_1 + 0x1a8) == 0) {
LAB_147eacc4a:
    local_88 = (ushort *)0x0;
    local_80 = (undefined8 *)((ulonglong)local_80 & 0xffffffff00000000);
    FUN_147eb4824(&local_88,param_5);
    local_78 = 0;
    local_60 = &local_62;
    local_58 = &local_88;
    FUN_147eb8b32(plVar1,&local_4c);
    puVar8 = local_90;
    if ((*(int *)(*plVar1 + 0x10 + (longlong)local_4c * 0x28) == 0) ||
       (plVar1 = *(longlong **)(*plVar1 + (longlong)local_4c * 0x28 + 8), plVar1 == (longlong *)0x0)
       ) {
      *local_90 = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x38))(plVar1,local_90);
    }
    FUN_1449db362(&local_88);
    local_88 = (ushort *)&local_70;
    local_80 = puVar8;
    FUN_147eb8f06(param_1 + 0x1b0,&local_60,&local_88);
  }
  else {
    lVar3 = param_1 + 0x198;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1a0);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1a8) - 1U & (uint)param_3) * 4);
    do {
      iVar6 = iVar7;
      if (iVar6 == -1) goto LAB_147eacc4a;
      lVar3 = *plVar1;
      iVar7 = *(int *)(lVar3 + 0x20 + (longlong)iVar6 * 0x28);
    } while (*(ushort *)(lVar3 + (longlong)iVar6 * 0x28) != param_3);
    while( true ) {
      lVar5 = (longlong)iVar6;
      if ((*(int *)(lVar3 + 0x10 + lVar5 * 0x28) == 0) ||
         (plVar2 = *(longlong **)(lVar3 + lVar5 * 0x28 + 8), plVar2 == (longlong *)0x0)) {
        local_88 = (ushort *)0x0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_88);
      }
      if (((int)param_5[1] == 0) || (plVar2 = (longlong *)*param_5, plVar2 == (longlong *)0x0)) {
        puVar4 = (ushort *)0x0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_60);
        puVar4 = local_60;
      }
      puVar8 = local_90;
      if (local_88 == puVar4) break;
      do {
        iVar6 = iVar7;
        if (iVar6 == -1) goto LAB_147eacc4a;
        lVar3 = *plVar1;
        iVar7 = *(int *)(lVar3 + 0x20 + (longlong)iVar6 * 0x28);
      } while (*(ushort *)(lVar3 + (longlong)iVar6 * 0x28) != param_3);
    }
    if ((*(int *)(*plVar1 + 0x10 + lVar5 * 0x28) == 0) ||
       (plVar1 = *(longlong **)(*plVar1 + lVar5 * 0x28 + 8), plVar1 == (longlong *)0x0)) {
      *local_90 = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x38))(plVar1,local_90);
    }
  }
  FUN_1449db362(param_5);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar8;
}



// FUNCTION 147eacd70 FUN_147eacd70 body=594 status=ok
// SIG undefined FUN_147eacd70(void)

void FUN_147eacd70(longlong param_1,ushort param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x1a8) != 0) {
    plVar1 = (longlong *)(param_1 + 0x160);
    lVar3 = param_1 + 0x198;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1a0);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1a8) - 1U & (uint)param_2) * 4);
    do {
      iVar5 = iVar6;
      if (iVar5 == -1) goto LAB_147eacf63;
      lVar3 = *plVar1;
      iVar6 = *(int *)(lVar3 + 0x20 + (longlong)iVar5 * 0x28);
    } while (*(ushort *)(lVar3 + (longlong)iVar5 * 0x28) != param_2);
    while( true ) {
      lVar7 = (longlong)iVar5;
      if ((*(int *)(lVar3 + 0x10 + lVar7 * 0x28) == 0) ||
         (plVar4 = *(longlong **)(lVar3 + lVar7 * 0x28 + 8), plVar4 == (longlong *)0x0)) {
        plVar4 = (longlong *)0x0;
      }
      else {
        (**(code **)(*plVar4 + 0x38))(plVar4,&local_a8);
        plVar4 = local_a8;
      }
      if (plVar4 == param_3) break;
      do {
        iVar5 = iVar6;
        if (iVar5 == -1) goto LAB_147eacf63;
        lVar3 = *plVar1;
        iVar6 = *(int *)(lVar3 + 0x20 + (longlong)iVar5 * 0x28);
      } while (*(ushort *)(lVar3 + (longlong)iVar5 * 0x28) != param_2);
    }
    plVar4 = (longlong *)(param_1 + 0x1b0);
    local_60 = param_1 + 0x1c0;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(param_1 + 0x1d8) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_90 = local_58;
    uVar2 = local_90;
    local_88 = local_50;
    local_84 = local_4c;
    local_a0 = local_68;
    local_98 = local_60;
    local_70 = 0;
    local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_a8 = plVar4;
    local_80 = plVar4;
    local_78 = plVar4;
    if (local_90._4_4_ < *(int *)(local_60 + 0x18)) {
      iVar6 = local_90._4_4_;
      local_90 = uVar2;
      do {
        if (*(longlong **)(*local_a8 + 8 + (longlong)iVar6 * 0x18) == param_3) {
          FUN_147eb933c(local_80);
          local_70 = CONCAT11(local_70._1_1_,1);
          goto LAB_147eacf37;
        }
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar6 = local_90._4_4_;
      } while (local_90._4_4_ < *(int *)(local_98 + 0x18));
      uVar2 = local_90;
      if ((local_70 & 1) != 0) {
LAB_147eacf37:
        uVar2 = local_90;
        if (local_70._1_1_ == '\x01') {
          FUN_147eb911c(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
          uVar2 = local_90;
        }
      }
    }
    local_90 = uVar2;
    if (*(int *)(param_1 + 0x158) == 0) {
      FUN_147eb9406(plVar1,iVar5);
    }
    else if (*(char *)(*plVar1 + 0x18 + lVar7 * 0x28) == '\0') {
      *(undefined1 *)(*plVar1 + lVar7 * 0x28 + 0x18) = 1;
      *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
    }
  }
LAB_147eacf63:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eacfc4 FUN_147eacfc4 body=674 status=ok
// SIG undefined FUN_147eacfc4(void)

void FUN_147eacfc4(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_1 + 0x1f8) != 0) {
    plVar1 = (longlong *)(param_1 + 0x1b0);
    uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar6 = param_1 + 0x1e8;
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x1f0);
    }
    iVar8 = *(int *)(lVar6 + (longlong)
                             (int)(*(int *)(param_1 + 0x1f8) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    while (iVar7 = iVar8, iVar7 != -1) {
      iVar8 = *(int *)(*plVar1 + 0x10 + (longlong)iVar7 * 0x18);
      if (*(ulonglong *)(*plVar1 + (longlong)iVar7 * 0x18) == param_2) {
        local_b0 = (longlong *)(param_1 + 0x160);
        local_b8 = param_1 + 0x170;
        do {
          local_68 = 0x100000000;
          local_60 = local_b8;
          local_58 = 0xffffffff;
          local_50 = 0;
          if (*(int *)(param_1 + 0x188) != 0) {
            FUN_1449c0562(&local_68);
          }
          local_90 = local_58;
          uVar3 = local_90;
          local_88 = local_50;
          local_84 = local_4c;
          local_a0 = local_68;
          local_98 = local_60;
          local_a8 = local_b0;
          local_80 = local_b0;
          local_78 = local_b0;
          local_70 = 0;
          local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
          if (local_90._4_4_ < *(int *)(local_60 + 0x18)) {
            iVar4 = local_90._4_4_;
            local_90 = uVar3;
            do {
              if ((*(int *)(*local_a8 + 0x10 + (longlong)iVar4 * 0x28) == 0) ||
                 (plVar2 = *(longlong **)(*local_a8 + (longlong)iVar4 * 0x28 + 8),
                 plVar2 == (longlong *)0x0)) {
                local_68 = 0;
              }
              else {
                (**(code **)(*plVar2 + 0x38))(plVar2,&local_68);
              }
              if (local_68 == *(longlong *)(*plVar1 + 8 + (longlong)iVar7 * 0x18)) {
                if (*(int *)(param_1 + 0x158) == 0) {
                  FUN_147eb9406(local_80);
                  local_70 = CONCAT11(local_70._1_1_,1);
                  uVar3 = local_90;
                }
                else {
                  uVar3 = local_90;
                  if (*(char *)(*local_a8 + 0x18 + (longlong)local_90._4_4_ * 0x28) == '\0') {
                    *(undefined1 *)(*local_a8 + (longlong)local_90._4_4_ * 0x28 + 0x18) = 1;
                    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
                  }
                }
                break;
              }
              local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
              FUN_1449c0562(&local_a0);
              iVar4 = local_90._4_4_;
              uVar3 = local_90;
            } while (local_90._4_4_ < *(int *)(local_98 + 0x18));
          }
          local_90 = uVar3;
          if (((char)local_70 == '\x01') && (local_70._1_1_ == '\x01')) {
            FUN_147eb8d26(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
          }
          FUN_147eb933c(plVar1,iVar7);
          do {
            iVar7 = iVar8;
            if (iVar7 == -1) goto LAB_147ead20c;
            iVar8 = *(int *)(*plVar1 + 0x10 + (longlong)iVar7 * 0x18);
          } while (*(ulonglong *)(*plVar1 + (longlong)iVar7 * 0x18) != param_2);
        } while( true );
      }
    }
  }
LAB_147ead20c:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ead268 FUN_147ead268 body=1179 status=ok
// SIG undefined FUN_147ead268(void)

void FUN_147ead268(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *local_88;
  longlong *local_80;
  undefined2 local_78;
  ushort local_6a;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_6a = (ushort)param_2;
  if (*(int *)(param_1 + 0x1a8) != 0) {
    plVar1 = (longlong *)(param_1 + 0x160);
    lVar8 = param_1 + 0x198;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x1a0);
    }
    iVar10 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x1a8) - 1U & param_2 & 0xffff) * 4);
    do {
      iVar7 = iVar10;
      if (iVar7 == -1) goto LAB_147ead536;
      lVar8 = *plVar1;
      iVar10 = *(int *)(lVar8 + 0x20 + (longlong)iVar7 * 0x28);
    } while (*(ushort *)(lVar8 + (longlong)iVar7 * 0x28) != local_6a);
    if ((*(byte *)(param_1 + 0x210) & 1) == 0) {
      *(int *)(param_1 + 0x158) = *(int *)(param_1 + 0x158) + 1;
      local_b8 = param_1 + 0x1c0;
      local_c0 = (longlong *)(param_1 + 0x1b0);
      do {
        if (*(char *)(lVar8 + 0x18 + (longlong)iVar7 * 0x28) == '\0') {
          lVar8 = lVar8 + (longlong)iVar7 * 0x28;
          plVar11 = (longlong *)(lVar8 + 8);
          if (((*(int *)(lVar8 + 0x10) != 0) && ((longlong *)*plVar11 != (longlong *)0x0)) &&
             (cVar6 = (**(code **)(*(longlong *)*plVar11 + 0x30))(), cVar6 != '\0')) {
            if (*(int *)(lVar8 + 0x10) == 0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = (longlong *)*plVar11;
            }
            cVar6 = (**(code **)(*plVar9 + 0x58))(plVar9,param_1,param_2);
            if (cVar6 == '\x01') goto LAB_147ead339;
          }
          if (*(char *)(lVar8 + 0x18) == '\0') {
            local_68 = 0x100000000;
            local_60 = local_b8;
            local_58 = 0xffffffff;
            local_50 = 0;
            if (*(int *)(param_1 + 0x1d8) != 0) {
              FUN_1449c0562(&local_68);
            }
            local_a8 = local_68;
            local_a0 = local_60;
            local_98 = local_58;
            uVar5 = local_98;
            local_90 = local_50;
            local_8c = local_4c;
            local_b0 = local_c0;
            local_88 = local_c0;
            local_80 = local_c0;
            local_78 = 0;
            local_98._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            bVar4 = local_98._4_4_ < *(int *)(local_60 + 0x18);
            iVar12 = local_98._4_4_;
            local_98 = local_58;
            if (bVar4) {
              do {
                lVar3 = *local_b0;
                if ((*(int *)(lVar8 + 0x10) == 0) ||
                   (plVar9 = (longlong *)*plVar11, plVar9 == (longlong *)0x0)) {
                  local_68 = 0;
                }
                else {
                  (**(code **)(*plVar9 + 0x38))(plVar9,&local_68);
                }
                if (*(longlong *)(lVar3 + (longlong)iVar12 * 0x18 + 8) == local_68) {
                  FUN_147eb933c(local_88,local_98._4_4_);
                  local_78 = CONCAT11(local_78._1_1_,1);
                  goto LAB_147ead50e;
                }
                local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
                FUN_1449c0562(&local_a8);
                iVar12 = local_98._4_4_;
              } while (local_98._4_4_ < *(int *)(local_a0 + 0x18));
              if ((local_78 & 1) != 0) {
LAB_147ead50e:
                if (local_78._1_1_ == '\x01') {
                  FUN_147eb911c(local_80,(int)local_80[1] - *(int *)((longlong)local_80 + 0x34));
                }
              }
            }
          }
          if (*(int *)(param_1 + 0x158) == 1) {
            FUN_147eb9406(plVar1,iVar7);
            iVar7 = -1;
            if (*(char *)(lVar8 + 0x18) != '\0') goto LAB_147ead3ce;
          }
          else if (*(char *)(lVar8 + 0x18) == '\0') {
            *(undefined1 *)(lVar8 + 0x18) = 1;
            iVar7 = 1;
LAB_147ead3ce:
            *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + iVar7;
          }
        }
LAB_147ead339:
        param_2 = (uint)local_6a;
        do {
          iVar7 = iVar10;
          if (iVar7 == -1) {
            piVar2 = (int *)(param_1 + 0x158);
            *piVar2 = *piVar2 + -1;
            if ((*piVar2 != 0) || (*(int *)(param_1 + 0x15c) < 1)) goto LAB_147ead536;
            local_60 = param_1 + 0x170;
            local_68 = 0x100000000;
            local_58 = 0xffffffff;
            local_50 = 0;
            if (*(int *)(param_1 + 0x188) != 0) {
              FUN_1449c0562(&local_68);
            }
            local_98 = local_58;
            uVar5 = local_98;
            local_90 = local_50;
            local_8c = local_4c;
            local_a8 = local_68;
            local_a0 = local_60;
            local_78 = 0;
            local_98._4_4_ = (int)((ulonglong)local_58 >> 0x20);
            local_b0 = plVar1;
            local_88 = plVar1;
            local_80 = plVar1;
            if (*(int *)(local_60 + 0x18) <= local_98._4_4_) goto LAB_147ead67f;
            iVar10 = local_98._4_4_;
            local_98 = uVar5;
            goto LAB_147ead618;
          }
          lVar8 = *plVar1;
          iVar10 = *(int *)(lVar8 + 0x20 + (longlong)iVar7 * 0x28);
        } while (*(ushort *)(lVar8 + (longlong)iVar7 * 0x28) != local_6a);
      } while( true );
    }
    FUN_147eb9522(param_1 + 0x200,&local_6a);
  }
  goto LAB_147ead536;
LAB_147ead618:
  do {
    if (*(char *)(*local_b0 + 0x18 + (longlong)iVar10 * 0x28) == '\x01') {
      FUN_147eb9406(local_88);
      local_78 = CONCAT11(local_78._1_1_,1);
      piVar2 = (int *)(param_1 + 0x15c);
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) goto LAB_147ead678;
    }
    local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
    FUN_1449c0562(&local_a8);
    iVar10 = local_98._4_4_;
  } while (local_98._4_4_ < *(int *)(local_a0 + 0x18));
  uVar5 = local_98;
  if ((local_78 & 1) != 0) {
LAB_147ead678:
    uVar5 = local_98;
    if (local_78._1_1_ == '\x01') {
      FUN_147eb8d26(local_80,(int)local_80[1] - *(int *)((longlong)local_80 + 0x34));
      uVar5 = local_98;
    }
  }
LAB_147ead67f:
  local_98 = uVar5;
  *(undefined4 *)(param_1 + 0x15c) = 0;
LAB_147ead536:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ead704 FUN_147ead704 body=96 status=ok
// SIG undefined FUN_147ead704(void)

bool FUN_147ead704(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x120);
  bVar4 = lVar3 != 0;
  if (lVar3 != param_2 && bVar4) {
    iVar1 = *(int *)(param_2 + 0x40);
    while ((*(int *)(lVar3 + 0x40) != iVar1 ||
           (cVar2 = FUN_147eb960b(*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(param_2 + 0x38),
                                  iVar1), cVar2 == '\0'))) {
      lVar3 = *(longlong *)(lVar3 + 0x30);
      if (lVar3 == param_2) {
        return lVar3 != 0;
      }
      if (lVar3 == 0) {
        return false;
      }
    }
    bVar4 = true;
  }
  return bVar4;
}



// FUNCTION 147ead764 FUN_147ead764 body=319 status=ok
// SIG undefined FUN_147ead764(void)

void FUN_147ead764(longlong param_1,longlong *param_2,ulonglong param_3,ushort param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_4;
  if (*(int *)(param_1 + 0x130) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x148);
    plVar3 = *(longlong **)(lVar1 + (param_3 & 0xffff) * 8);
    lVar4 = 0;
LAB_147ead7c8:
    lVar6 = 0;
  }
  else {
    param_3 = param_3 & 0xffff;
    if ((int)param_3 < *(int *)(param_1 + 0x140)) {
      lVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + param_3 * 2) +
              *(longlong *)(param_1 + 0x128);
    }
    else {
      lVar4 = 0;
    }
    lVar1 = *(longlong *)(param_1 + 0x148);
    plVar3 = *(longlong **)(lVar1 + param_3 * 8);
    if (*(int *)(param_1 + 0x140) <= (int)(uint)param_4) goto LAB_147ead7c8;
    lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + uVar7 * 2) +
            *(longlong *)(param_1 + 0x128);
  }
  lVar1 = *(longlong *)(lVar1 + uVar7 * 8);
  lVar2 = 4;
  lVar5 = lVar1;
  if (plVar3 != (longlong *)0x0) goto LAB_147ead7dc;
  lVar5 = *param_2;
  if (lVar5 == 0) {
LAB_147ead83a:
    param_2 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_1411c53f8();
    if (((lVar2 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) goto LAB_147ead83a;
    param_2 = (longlong *)*param_2;
  }
  plVar3 = (longlong *)param_2[0x22];
  if (plVar3 == (longlong *)0x0) {
    (**(code **)(*param_2 + 1000))(param_2);
    plVar3 = (longlong *)param_2[0x22];
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x148) + uVar7 * 8);
  lVar2 = 0;
LAB_147ead7dc:
  (**(code **)(*plVar3 + 0x2c8))
            (plVar3,param_1,lVar4 + lVar2,lVar5,lVar6 + (ulonglong)(lVar1 != 0) * 4);
  return;
}



// FUNCTION 147ead8a4 FUN_147ead8a4 body=1212 status=ok
// SIG undefined FUN_147ead8a4(void)

undefined2 ** FUN_147ead8a4(longlong param_1,undefined2 **param_2,ushort param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  ulonglong uStack_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_2 = (undefined2 *)0x0;
  param_2[1] = (undefined2 *)0x0;
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (param_3 != 0xffff && lVar5 != 0) {
    do {
      if (*(ushort *)(lVar5 + 0x4c) <= param_3) {
        lVar5 = ((ulonglong)param_3 - (ulonglong)*(ushort *)(lVar5 + 0x4c)) * 0x18 +
                *(longlong *)(lVar5 + 0x38);
        if (lVar5 != 0) {
          if ((((*(int *)(param_1 + 0x130) == 0) ||
               (*(int *)(param_1 + 0x140) <= (int)(uint)param_3)) || (*(longlong *)(lVar5 + 8) == 0)
              ) || ((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + (ulonglong)param_3 * 2)
                    + *(longlong *)(param_1 + 0x128) == 0)) {
            FUN_140056680(&local_48,L"empty");
          }
          else {
            FUN_147eadd62(*(longlong *)(lVar5 + 8),&local_58,param_1);
            puVar3 = local_58;
            if ((int)local_50 == 0) {
              puVar3 = &DAT_149dfb77a;
            }
            FUN_140056680(&local_48,puVar3);
            if (local_58 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          if (param_4 == 1) {
            puVar3 = &DAT_149dfb77a;
            if (local_40 != 0) {
              puVar3 = local_48;
            }
            FUN_1400021e4(lVar5,&local_68);
            puVar7 = &DAT_149dfb77a;
            if ((int)uStack_60 != 0) {
              puVar7 = local_68;
            }
            FUN_140002266(&local_58,L"%s: %s",puVar7,puVar3);
            if (&local_58 == param_2) {
              puVar3 = local_68;
              if (local_58 != (undefined2 *)0x0) {
                FUN_1400020a8();
                puVar3 = local_68;
              }
            }
            else {
              if (*param_2 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              *param_2 = local_58;
              local_58 = (undefined2 *)0x0;
              *(int *)(param_2 + 1) = (int)local_50;
              *(undefined4 *)((longlong)param_2 + 0xc) = local_50._4_4_;
              local_50 = 0;
              puVar3 = local_68;
            }
LAB_147eadc5b:
            if (puVar3 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (param_4 != 0) {
              lVar2 = FUN_1411c53f8();
              local_58 = *(undefined2 **)(lVar2 + 0x18);
              FUN_1400021e4(&local_58,&local_68);
              FUN_140002184(&local_68,0x5f);
              puVar3 = local_68;
              local_58 = (undefined2 *)0x0;
              lVar2 = (longlong)(int)uStack_60;
              local_50 = CONCAT44(local_50._4_4_,(int)uStack_60);
              if (lVar2 == 0) {
                local_50 = uStack_60 & 0xffffffff;
              }
              else {
                FUN_1446dd670(&local_58,uStack_60 & 0xffffffff,0);
                memcpy(local_58,puVar3,lVar2 * 2);
              }
              if (local_68 != (undefined2 *)0x0) {
                FUN_1400020a8(local_68);
              }
              if (*(longlong *)(lVar5 + 8) == 0) {
                local_68 = (undefined2 *)0x0;
                uStack_60 = 0;
              }
              else {
                lVar2 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10);
                if (lVar2 == 0) {
                  FUN_140056680(&local_68,&DAT_149e01fe8);
                }
                else {
                  local_78 = *(undefined2 **)(lVar2 + 0x18);
                  FUN_1400021e4(&local_78,&local_68);
                }
              }
              iVar6 = (int)local_50 + -1;
              puVar3 = local_58;
              if ((int)local_50 == 0) {
                puVar3 = &DAT_149dfb77a;
                iVar6 = 0;
              }
              cVar1 = FUN_144a791f8(&local_68,puVar3,iVar6,1);
              puVar3 = local_68;
              if (cVar1 == '\0') {
                local_78 = (undefined2 *)0x0;
                local_70 = (int)uStack_60;
                lVar2 = (longlong)(int)uStack_60;
                if (lVar2 == 0) {
                  local_6c = 0;
                }
                else {
                  FUN_1446dd670(&local_78,uStack_60 & 0xffffffff,0);
                  memcpy(local_78,puVar3,lVar2 * 2);
                }
              }
              else {
                iVar6 = (int)local_50 + -1;
                if ((int)local_50 == 0) {
                  iVar6 = 0;
                }
                FUN_144a49bb4(&local_68,&local_78,iVar6);
              }
              puVar3 = &DAT_149dfb77a;
              if (local_40 != 0) {
                puVar3 = local_48;
              }
              puVar7 = &DAT_149dfb77a;
              if (local_70 != 0) {
                puVar7 = local_78;
              }
              FUN_1400021e4(lVar5,&local_98);
              puVar4 = &DAT_149dfb77a;
              if (local_90 != 0) {
                puVar4 = local_98;
              }
              local_a8 = puVar3;
              FUN_140002266(&local_88,L"%s [%s]: %s",puVar4,puVar7);
              if (&local_88 == param_2) {
                if (local_88 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (*param_2 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                *param_2 = local_88;
                local_88 = (undefined2 *)0x0;
                *(undefined4 *)(param_2 + 1) = (undefined4)local_80;
                *(undefined4 *)((longlong)param_2 + 0xc) = local_80._4_4_;
                local_80 = 0;
              }
              if (local_98 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_78 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              puVar3 = local_58;
              if (local_68 != (undefined2 *)0x0) {
                FUN_1400020a8();
                puVar3 = local_58;
              }
              goto LAB_147eadc5b;
            }
            iVar6 = local_40 + -1;
            if (local_40 == 0) {
              iVar6 = 0;
            }
            FUN_1402980a2(param_2,local_48,iVar6);
          }
          if (local_48 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eadd62 FUN_147eadd62 body=123 status=ok
// SIG undefined FUN_147eadd62(void)

undefined8 FUN_147eadd62(longlong *param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0) {
    lVar2 = *param_1;
  }
  else {
    iVar1 = *param_4;
    param_1 = (longlong *)0x0;
    if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_3 + 0x150))) &&
       (param_1 = *(longlong **)(*(longlong *)(param_3 + 0x148) + (longlong)iVar1 * 8),
       (param_1 != (longlong *)0x0 & DAT_14c950c29) == 1)) {
      FUN_1456cec3c(param_1);
    }
    param_4 = param_4 + 1;
    lVar2 = *param_1;
  }
  (**(code **)(lVar2 + 800))(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 147eaddde FUN_147eaddde body=82 status=ok
// SIG undefined FUN_147eaddde(void)

void FUN_147eaddde(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar4;
            goto LAB_147eade21;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eade21:
  FUN_147eb9650(param_1,iVar1);
  return;
}



// FUNCTION 147eade30 FUN_147eade30 body=82 status=ok
// SIG undefined FUN_147eade30(void)

void FUN_147eade30(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar4;
            goto LAB_147eade73;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eade73:
  FUN_147eb9740(param_1,iVar1);
  return;
}



// FUNCTION 147eade82 FUN_147eade82 body=82 status=ok
// SIG undefined FUN_147eade82(void)

void FUN_147eade82(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar4;
            goto LAB_147eadec5;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eadec5:
  FUN_147eb9830(param_1,iVar1);
  return;
}



// FUNCTION 147eaded4 FUN_147eaded4 body=82 status=ok
// SIG undefined FUN_147eaded4(void)

void FUN_147eaded4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar4;
            goto LAB_147eadf17;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eadf17:
  FUN_147eb98e8(param_1,iVar1);
  return;
}



// FUNCTION 147eadf26 FUN_147eadf26 body=82 status=ok
// SIG undefined FUN_147eadf26(void)

void FUN_147eadf26(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar4;
            goto LAB_147eadf69;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eadf69:
  FUN_147eb99a8(param_1,iVar1);
  return;
}



// FUNCTION 147eadf78 FUN_147eadf78 body=82 status=ok
// SIG undefined FUN_147eadf78(void)

void FUN_147eadf78(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  iVar1 = 0xffff;
  if (lVar2 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar2 + 0x40)) {
        plVar3 = *(longlong **)(lVar2 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_2) {
            iVar1 = (uint)*(ushort *)(lVar2 + 0x4c) - (int)lVar4;
            goto LAB_147eadfbb;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar2 + 0x40));
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
LAB_147eadfbb:
  FUN_147eb9a70(param_1,iVar1);
  return;
}



// FUNCTION 147eadfca FUN_147eadfca body=103 status=ok
// SIG undefined FUN_147eadfca(void)

undefined8 FUN_147eadfca(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  iVar2 = 0xffff;
  if (lVar1 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar1 + 0x40)) {
        plVar3 = *(longlong **)(lVar1 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_3) {
            iVar2 = (uint)*(ushort *)(lVar1 + 0x4c) - (int)lVar4;
            goto LAB_147eae020;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar1 + 0x40));
      }
      lVar1 = *(longlong *)(lVar1 + 0x30);
    } while (lVar1 != 0);
  }
LAB_147eae020:
  FUN_147eb9b2c(param_1,param_2,iVar2);
  return param_2;
}



// FUNCTION 147eae032 FUN_147eae032 body=103 status=ok
// SIG undefined FUN_147eae032(void)

undefined8 FUN_147eae032(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  iVar2 = 0xffff;
  if (lVar1 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar1 + 0x40)) {
        plVar3 = *(longlong **)(lVar1 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_3) {
            iVar2 = (uint)*(ushort *)(lVar1 + 0x4c) - (int)lVar4;
            goto LAB_147eae088;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar1 + 0x40));
      }
      lVar1 = *(longlong *)(lVar1 + 0x30);
    } while (lVar1 != 0);
  }
LAB_147eae088:
  FUN_147eb9c56(param_1,param_2,iVar2);
  return param_2;
}



// FUNCTION 147eae09a FUN_147eae09a body=103 status=ok
// SIG undefined FUN_147eae09a(void)

undefined8 FUN_147eae09a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  iVar2 = 0xffff;
  if (lVar1 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar1 + 0x40)) {
        plVar3 = *(longlong **)(lVar1 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_3) {
            iVar2 = (uint)*(ushort *)(lVar1 + 0x4c) - (int)lVar4;
            goto LAB_147eae0f0;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar1 + 0x40));
      }
      lVar1 = *(longlong *)(lVar1 + 0x30);
    } while (lVar1 != 0);
  }
LAB_147eae0f0:
  FUN_147eb02a8(param_1,param_2,iVar2);
  return param_2;
}



// FUNCTION 147eae102 FUN_147eae102 body=103 status=ok
// SIG undefined FUN_147eae102(void)

undefined8 FUN_147eae102(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  iVar2 = 0xffff;
  if (lVar1 != 0) {
    do {
      if (0 < (longlong)*(int *)(lVar1 + 0x40)) {
        plVar3 = *(longlong **)(lVar1 + 0x38);
        lVar4 = 0;
        do {
          if (*plVar3 == *param_3) {
            iVar2 = (uint)*(ushort *)(lVar1 + 0x4c) - (int)lVar4;
            goto LAB_147eae158;
          }
          lVar4 = lVar4 + -1;
          plVar3 = plVar3 + 3;
        } while (-lVar4 != (longlong)*(int *)(lVar1 + 0x40));
      }
      lVar1 = *(longlong *)(lVar1 + 0x30);
    } while (lVar1 != 0);
  }
LAB_147eae158:
  FUN_147eb9d30(param_1,param_2,iVar2);
  return param_2;
}



// FUNCTION 147eae16a FUN_147eae16a body=1006 status=ok
// SIG undefined FUN_147eae16a(void)

ulonglong FUN_147eae16a(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_178 [40];
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined1 local_118 [192];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar6 = *(longlong *)(param_1 + 0x120);
  uVar8 = (ushort)param_2;
  if (uVar8 != 0xffff && lVar6 != 0) {
    do {
      if (*(ushort *)(lVar6 + 0x4c) <= uVar8) {
        uVar9 = (ulonglong)uVar8;
        plVar11 = (longlong *)
                  ((uVar9 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38));
        if (((plVar11 != (longlong *)0x0) && (plVar11[1] != 0)) &&
           (lVar6 = *(longlong *)(plVar11[1] + 0x10), lVar4 = FUN_145b60a44(), lVar6 == lVar4)) {
          if ((*(int *)(param_1 + 0x130) == 0) ||
             (*(int *)(param_1 + 0x140) <= (int)(param_2 & 0xffff))) {
            lVar6 = 0;
          }
          else {
            lVar6 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + uVar9 * 2) +
                    *(longlong *)(param_1 + 0x128);
          }
          uVar10 = (ulonglong)((uint)*(byte *)(plVar11[1] + 0x2b) * 2 & 4);
          lVar6 = lVar6 + uVar10;
          if (lVar6 != 0) {
            local_130 = 0;
            FUN_14485c47a(&local_130,param_3);
            cVar3 = FUN_147eb10dc(lVar6,&local_130);
            uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
            if (cVar3 == '\0') goto LAB_147eae1ae;
            FUN_147ead268(param_1,param_2);
            lVar6 = *(longlong *)(param_1 + 0x120);
            if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x48) & 1) == 0)) goto LAB_147eae1ae;
            goto LAB_147eae2b8;
          }
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  uVar7 = 0;
  goto LAB_147eae1ae;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0) {
LAB_147eae2b8:
    if (*(ushort *)(lVar6 + 0x4c) <= uVar8) {
      lVar6 = (uVar9 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38);
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x10) & 1) != 0)) {
        lVar6 = *(longlong *)(param_1 + 0xb0);
        if (((lVar6 == 0) && (lVar6 = FUN_1448abda6(param_1), lVar6 == 0)) ||
           (lVar6 = *(longlong *)(lVar6 + 0x180), lVar6 == 0)) {
LAB_147eae333:
          lVar6 = 0;
        }
        else {
          lVar4 = FUN_1413f6fa8();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_147eae333;
        }
        FUN_147ea5824(&local_130,lVar6 + 0x140,*(undefined8 *)(param_1 + 0x120));
        if (local_50 <= (int)local_130) goto LAB_147eae516;
        goto LAB_147eae36e;
      }
      break;
    }
  }
  goto LAB_147eae1ae;
LAB_147eae36e:
  do {
    puVar5 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar5 = local_118;
    }
    if ((longlong)*(int *)(puVar5 + (longlong)(int)local_130 * 0x18 + 0x10) == -1) break;
    local_150 = FUN_14479d2ce(**(longlong **)(puVar5 + (longlong)(int)local_130 * 0x18) +
                              (longlong)*(int *)(puVar5 + (longlong)(int)local_130 * 0x18 + 0x10) *
                              0x18 + 8);
    if (((local_150 != 0) && (cVar3 = FUN_147eaca28(param_1,local_150), cVar3 != '\0')) &&
       (lVar6 = *(longlong *)(local_150 + 0x120), lVar6 != 0)) {
      do {
        if (0 < (longlong)*(int *)(lVar6 + 0x40)) {
          lVar4 = 0;
          uVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar6 + 0x38) + lVar4) == *plVar11) {
              uVar8 = (short)uVar9 + *(short *)(lVar6 + 0x4c);
              if (uVar8 != 0xffff) {
                if ((*(int *)(local_150 + 0x130) == 0) ||
                   (*(int *)(local_150 + 0x140) <= (int)(uint)uVar8)) {
                  local_148 = 0;
                }
                else {
                  local_148 = (ulonglong)
                              *(ushort *)(*(longlong *)(local_150 + 0x138) + (ulonglong)uVar8 * 2) +
                              *(longlong *)(local_150 + 0x128);
                }
                local_148 = local_148 + uVar10;
                local_138 = 0;
                FUN_14485c47a(&local_138,param_3);
                FUN_147eb10dc(local_148,&local_138);
                FUN_147ead268(local_150,CONCAT62((int6)(uVar9 >> 0x10),uVar8));
              }
              goto LAB_147eae3bd;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            lVar4 = lVar4 + 0x18;
          } while ((longlong)*(int *)(lVar6 + 0x40) * 0x18 != lVar4);
        }
        lVar6 = *(longlong *)(lVar6 + 0x30);
      } while (lVar6 != 0);
    }
LAB_147eae3bd:
    puVar5 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar5 = local_118;
    }
    puVar1 = (undefined8 *)(puVar5 + (longlong)(int)local_130 * 0x18);
    do {
      iVar2 = *(int *)((longlong)puVar1 + 0x14);
      *(int *)(puVar1 + 2) = iVar2;
      if ((longlong)iVar2 == -1) break;
      local_140 = puVar1[1];
      lVar6 = (longlong)iVar2 * 0x18;
      *(undefined4 *)((longlong)puVar1 + 0x14) =
           *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + lVar6);
      local_138 = *(undefined8 *)(*(longlong *)*puVar1 + lVar6);
      cVar3 = FUN_147eb47ee(&local_138,&local_140);
    } while (cVar3 == '\0');
    FUN_147ea5a08(&local_130);
  } while ((int)local_130 < local_50);
LAB_147eae516:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_147eae1ae:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 147eae55a FUN_147eae55a body=910 status=ok
// SIG undefined FUN_147eae55a(void)

ulonglong FUN_147eae55a(longlong param_1,uint param_2,char param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 *puVar7;
  short sVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  int local_130 [2];
  longlong local_128;
  undefined1 local_118 [192];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar6 = *(longlong *)(param_1 + 0x120);
  uVar9 = (ushort)param_2;
  if (uVar9 != 0xffff && lVar6 != 0) {
    do {
      if (*(ushort *)(lVar6 + 0x4c) <= uVar9) {
        uVar14 = (ulonglong)uVar9;
        plVar13 = (longlong *)
                  ((uVar14 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38));
        if ((plVar13 != (longlong *)0x0) && (plVar13[1] != 0)) {
          lVar6 = *(longlong *)(plVar13[1] + 0x10);
          lVar4 = FUN_145b60b2e();
          if (lVar6 == lVar4) {
            if ((*(int *)(param_1 + 0x130) == 0) ||
               (*(int *)(param_1 + 0x140) <= (int)(param_2 & 0xffff))) {
              lVar4 = 0;
            }
            else {
              lVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + uVar14 * 2) +
                      *(longlong *)(param_1 + 0x128);
            }
            uVar12 = (ulonglong)((uint)*(byte *)(plVar13[1] + 0x2b) * 2 & 4);
            pcVar5 = (char *)(lVar4 + uVar12);
            if (pcVar5 != (char *)0x0) {
              uVar10 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
              cVar3 = *pcVar5;
              *pcVar5 = param_3;
              if (cVar3 == param_3) goto LAB_147eae59e;
              FUN_147ead268(param_1,param_2);
              lVar6 = *(longlong *)(param_1 + 0x120);
              if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x48) & 1) == 0)) goto LAB_147eae59e;
              goto LAB_147eae689;
            }
          }
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  uVar10 = 0;
  goto LAB_147eae59e;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0) {
LAB_147eae689:
    if (*(ushort *)(lVar6 + 0x4c) <= uVar9) {
      lVar6 = (uVar14 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38);
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x10) & 1) != 0)) {
        lVar6 = *(longlong *)(param_1 + 0xb0);
        if (((lVar6 == 0) && (lVar6 = FUN_1448abda6(param_1), lVar6 == 0)) ||
           (lVar6 = *(longlong *)(lVar6 + 0x180), lVar6 == 0)) {
LAB_147eae704:
          lVar6 = 0;
        }
        else {
          lVar4 = FUN_1413f6fa8();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_147eae704;
        }
        FUN_147ea5824(local_130,lVar6 + 0x140,*(undefined8 *)(param_1 + 0x120));
        if (local_50 <= local_130[0]) goto LAB_147eae8ab;
        goto LAB_147eae73f;
      }
      break;
    }
  }
  goto LAB_147eae59e;
LAB_147eae73f:
  do {
    puVar7 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar7 = local_118;
    }
    if ((longlong)*(int *)(puVar7 + (longlong)local_130[0] * 0x18 + 0x10) == -1) break;
    lVar6 = FUN_14479d2ce(**(longlong **)(puVar7 + (longlong)local_130[0] * 0x18) +
                          (longlong)*(int *)(puVar7 + (longlong)local_130[0] * 0x18 + 0x10) * 0x18 +
                          8);
    if (((lVar6 != 0) && (cVar3 = FUN_147eaca28(param_1,lVar6), cVar3 != '\0')) &&
       (lVar4 = *(longlong *)(lVar6 + 0x120), lVar4 != 0)) {
      do {
        if (0 < (longlong)*(int *)(lVar4 + 0x40)) {
          lVar11 = 0;
          sVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar11) == *plVar13) {
              uVar9 = sVar8 + *(short *)(lVar4 + 0x4c);
              if (uVar9 != 0xffff) {
                if ((*(int *)(lVar6 + 0x130) == 0) || (*(int *)(lVar6 + 0x140) <= (int)(uint)uVar9))
                {
                  lVar4 = 0;
                }
                else {
                  lVar4 = (ulonglong)
                          *(ushort *)(*(longlong *)(lVar6 + 0x138) + (ulonglong)uVar9 * 2) +
                          *(longlong *)(lVar6 + 0x128);
                }
                *(char *)(lVar4 + uVar12) = param_3;
                FUN_147ead268(lVar6);
              }
              goto LAB_147eae789;
            }
            sVar8 = sVar8 + 1;
            lVar11 = lVar11 + 0x18;
          } while ((longlong)*(int *)(lVar4 + 0x40) * 0x18 != lVar11);
        }
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
LAB_147eae789:
    puVar7 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar7 = local_118;
    }
    puVar1 = (undefined8 *)(puVar7 + (longlong)local_130[0] * 0x18);
    do {
      iVar2 = *(int *)((longlong)puVar1 + 0x14);
      *(int *)(puVar1 + 2) = iVar2;
      if ((longlong)iVar2 == -1) break;
      local_140 = puVar1[1];
      lVar6 = (longlong)iVar2 * 0x18;
      *(undefined4 *)((longlong)puVar1 + 0x14) =
           *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + lVar6);
      local_138 = *(undefined8 *)(*(longlong *)*puVar1 + lVar6);
      cVar3 = FUN_147eb47ee(&local_138,&local_140);
    } while (cVar3 == '\0');
    FUN_147ea5a08(local_130);
  } while (local_130[0] < local_50);
LAB_147eae8ab:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_147eae59e:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 147eae8ea FUN_147eae8ea body=909 status=ok
// SIG undefined FUN_147eae8ea(void)

ulonglong FUN_147eae8ea(longlong param_1,uint param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 *puVar7;
  short sVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  int local_130 [2];
  longlong local_128;
  undefined1 local_118 [192];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar6 = *(longlong *)(param_1 + 0x120);
  uVar9 = (ushort)param_2;
  if (uVar9 != 0xffff && lVar6 != 0) {
    do {
      if (*(ushort *)(lVar6 + 0x4c) <= uVar9) {
        uVar14 = (ulonglong)uVar9;
        plVar13 = (longlong *)
                  ((uVar14 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38));
        if ((plVar13 != (longlong *)0x0) && (plVar13[1] != 0)) {
          lVar6 = *(longlong *)(plVar13[1] + 0x10);
          lVar4 = FUN_145b60dec();
          if (lVar6 == lVar4) {
            if ((*(int *)(param_1 + 0x130) == 0) ||
               (*(int *)(param_1 + 0x140) <= (int)(param_2 & 0xffff))) {
              lVar4 = 0;
            }
            else {
              lVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + uVar14 * 2) +
                      *(longlong *)(param_1 + 0x128);
            }
            uVar12 = (ulonglong)((uint)*(byte *)(plVar13[1] + 0x2b) * 2 & 4);
            piVar5 = (int *)(lVar4 + uVar12);
            if (piVar5 != (int *)0x0) {
              uVar10 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
              iVar2 = *piVar5;
              *piVar5 = param_3;
              if (iVar2 == param_3) goto LAB_147eae92e;
              FUN_147ead268(param_1,param_2);
              lVar6 = *(longlong *)(param_1 + 0x120);
              if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x48) & 1) == 0)) goto LAB_147eae92e;
              goto LAB_147eaea18;
            }
          }
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  uVar10 = 0;
  goto LAB_147eae92e;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0) {
LAB_147eaea18:
    if (*(ushort *)(lVar6 + 0x4c) <= uVar9) {
      lVar6 = (uVar14 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38);
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x10) & 1) != 0)) {
        lVar6 = *(longlong *)(param_1 + 0xb0);
        if (((lVar6 == 0) && (lVar6 = FUN_1448abda6(param_1), lVar6 == 0)) ||
           (lVar6 = *(longlong *)(lVar6 + 0x180), lVar6 == 0)) {
LAB_147eaea93:
          lVar6 = 0;
        }
        else {
          lVar4 = FUN_1413f6fa8();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_147eaea93;
        }
        FUN_147ea5824(local_130,lVar6 + 0x140,*(undefined8 *)(param_1 + 0x120));
        if (local_50 <= local_130[0]) goto LAB_147eaec3a;
        goto LAB_147eaeace;
      }
      break;
    }
  }
  goto LAB_147eae92e;
LAB_147eaeace:
  do {
    puVar7 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar7 = local_118;
    }
    if ((longlong)*(int *)(puVar7 + (longlong)local_130[0] * 0x18 + 0x10) == -1) break;
    lVar6 = FUN_14479d2ce(**(longlong **)(puVar7 + (longlong)local_130[0] * 0x18) +
                          (longlong)*(int *)(puVar7 + (longlong)local_130[0] * 0x18 + 0x10) * 0x18 +
                          8);
    if (((lVar6 != 0) && (cVar3 = FUN_147eaca28(param_1,lVar6), cVar3 != '\0')) &&
       (lVar4 = *(longlong *)(lVar6 + 0x120), lVar4 != 0)) {
      do {
        if (0 < (longlong)*(int *)(lVar4 + 0x40)) {
          lVar11 = 0;
          sVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar11) == *plVar13) {
              uVar9 = sVar8 + *(short *)(lVar4 + 0x4c);
              if (uVar9 != 0xffff) {
                if ((*(int *)(lVar6 + 0x130) == 0) || (*(int *)(lVar6 + 0x140) <= (int)(uint)uVar9))
                {
                  lVar4 = 0;
                }
                else {
                  lVar4 = (ulonglong)
                          *(ushort *)(*(longlong *)(lVar6 + 0x138) + (ulonglong)uVar9 * 2) +
                          *(longlong *)(lVar6 + 0x128);
                }
                *(int *)(lVar4 + uVar12) = param_3;
                FUN_147ead268(lVar6);
              }
              goto LAB_147eaeb18;
            }
            sVar8 = sVar8 + 1;
            lVar11 = lVar11 + 0x18;
          } while ((longlong)*(int *)(lVar4 + 0x40) * 0x18 != lVar11);
        }
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
LAB_147eaeb18:
    puVar7 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar7 = local_118;
    }
    puVar1 = (undefined8 *)(puVar7 + (longlong)local_130[0] * 0x18);
    do {
      iVar2 = *(int *)((longlong)puVar1 + 0x14);
      *(int *)(puVar1 + 2) = iVar2;
      if ((longlong)iVar2 == -1) break;
      local_140 = puVar1[1];
      lVar6 = (longlong)iVar2 * 0x18;
      *(undefined4 *)((longlong)puVar1 + 0x14) =
           *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + lVar6);
      local_138 = *(undefined8 *)(*(longlong *)*puVar1 + lVar6);
      cVar3 = FUN_147eb47ee(&local_138,&local_140);
    } while (cVar3 == '\0');
    FUN_147ea5a08(local_130);
  } while (local_130[0] < local_50);
LAB_147eaec3a:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_147eae92e:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 147eaec78 FUN_147eaec78 body=939 status=ok
// SIG undefined FUN_147eaec78(void)

ulonglong FUN_147eaec78(longlong param_1,uint param_2,float param_3)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  undefined1 *puVar8;
  short sVar9;
  ushort uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  int local_148 [2];
  longlong local_140;
  undefined1 local_130 [192];
  undefined1 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar7 = *(longlong *)(param_1 + 0x120);
  uVar10 = (ushort)param_2;
  if (uVar10 != 0xffff && lVar7 != 0) {
    do {
      if (*(ushort *)(lVar7 + 0x4c) <= uVar10) {
        uVar15 = (ulonglong)uVar10;
        plVar14 = (longlong *)
                  ((uVar15 - *(ushort *)(lVar7 + 0x4c)) * 0x18 + *(longlong *)(lVar7 + 0x38));
        if ((plVar14 != (longlong *)0x0) && (plVar14[1] != 0)) {
          lVar7 = *(longlong *)(plVar14[1] + 0x10);
          lVar5 = FUN_145a751d4();
          if (lVar7 == lVar5) {
            if ((*(int *)(param_1 + 0x130) == 0) ||
               (*(int *)(param_1 + 0x140) <= (int)(param_2 & 0xffff))) {
              lVar5 = 0;
            }
            else {
              lVar5 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + uVar15 * 2) +
                      *(longlong *)(param_1 + 0x128);
            }
            uVar11 = (ulonglong)((uint)*(byte *)(plVar14[1] + 0x2b) * 2 & 4);
            pfVar6 = (float *)(lVar5 + uVar11);
            if (pfVar6 != (float *)0x0) {
              fVar2 = *pfVar6;
              *pfVar6 = param_3;
              uVar12 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
              if ((fVar2 == param_3) && (!NAN(fVar2) && !NAN(param_3))) goto LAB_147eaecc4;
              FUN_147ead268(param_1,param_2);
              lVar7 = *(longlong *)(param_1 + 0x120);
              if ((lVar7 == 0) || ((*(uint *)(lVar7 + 0x48) & 1) == 0)) goto LAB_147eaecc4;
              goto LAB_147eaedbd;
            }
          }
        }
        break;
      }
      lVar7 = *(longlong *)(lVar7 + 0x30);
    } while (lVar7 != 0);
  }
  uVar12 = 0;
  goto LAB_147eaecc4;
  while (lVar7 = *(longlong *)(lVar7 + 0x30), lVar7 != 0) {
LAB_147eaedbd:
    if (*(ushort *)(lVar7 + 0x4c) <= uVar10) {
      lVar7 = (uVar15 - *(ushort *)(lVar7 + 0x4c)) * 0x18 + *(longlong *)(lVar7 + 0x38);
      if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x10) & 1) != 0)) {
        lVar7 = *(longlong *)(param_1 + 0xb0);
        if (((lVar7 == 0) && (lVar7 = FUN_1448abda6(param_1), lVar7 == 0)) ||
           (lVar7 = *(longlong *)(lVar7 + 0x180), lVar7 == 0)) {
LAB_147eaee38:
          lVar7 = 0;
        }
        else {
          lVar5 = FUN_1413f6fa8();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_147eaee38;
        }
        FUN_147ea5824(local_148,lVar7 + 0x140,*(undefined8 *)(param_1 + 0x120));
        if (local_68 <= local_148[0]) goto LAB_147eaefe4;
        goto LAB_147eaee77;
      }
      break;
    }
  }
  goto LAB_147eaecc4;
LAB_147eaee77:
  do {
    puVar8 = local_70;
    if (local_70 == (undefined1 *)0x0) {
      puVar8 = local_130;
    }
    if ((longlong)*(int *)(puVar8 + (longlong)local_148[0] * 0x18 + 0x10) == -1) break;
    lVar7 = FUN_14479d2ce(**(longlong **)(puVar8 + (longlong)local_148[0] * 0x18) +
                          (longlong)*(int *)(puVar8 + (longlong)local_148[0] * 0x18 + 0x10) * 0x18 +
                          8);
    if (((lVar7 != 0) && (cVar4 = FUN_147eaca28(param_1,lVar7), cVar4 != '\0')) &&
       (lVar5 = *(longlong *)(lVar7 + 0x120), lVar5 != 0)) {
      do {
        if (0 < (longlong)*(int *)(lVar5 + 0x40)) {
          lVar13 = 0;
          sVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar5 + 0x38) + lVar13) == *plVar14) {
              uVar10 = sVar9 + *(short *)(lVar5 + 0x4c);
              if (uVar10 != 0xffff) {
                if ((*(int *)(lVar7 + 0x130) == 0) || (*(int *)(lVar7 + 0x140) <= (int)(uint)uVar10)
                   ) {
                  lVar5 = 0;
                }
                else {
                  lVar5 = (ulonglong)
                          *(ushort *)(*(longlong *)(lVar7 + 0x138) + (ulonglong)uVar10 * 2) +
                          *(longlong *)(lVar7 + 0x128);
                }
                *(float *)(lVar5 + uVar11) = param_3;
                FUN_147ead268(lVar7);
              }
              goto LAB_147eaeebc;
            }
            sVar9 = sVar9 + 1;
            lVar13 = lVar13 + 0x18;
          } while ((longlong)*(int *)(lVar5 + 0x40) * 0x18 != lVar13);
        }
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
LAB_147eaeebc:
    puVar8 = local_70;
    if (local_70 == (undefined1 *)0x0) {
      puVar8 = local_130;
    }
    puVar1 = (undefined8 *)(puVar8 + (longlong)local_148[0] * 0x18);
    do {
      iVar3 = *(int *)((longlong)puVar1 + 0x14);
      *(int *)(puVar1 + 2) = iVar3;
      if ((longlong)iVar3 == -1) break;
      local_158 = puVar1[1];
      lVar7 = (longlong)iVar3 * 0x18;
      *(undefined4 *)((longlong)puVar1 + 0x14) =
           *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + lVar7);
      local_150 = *(undefined8 *)(*(longlong *)*puVar1 + lVar7);
      cVar4 = FUN_147eb47ee(&local_150,&local_158);
    } while (cVar4 == '\0');
    FUN_147ea5a08(local_148);
  } while (local_148[0] < local_68);
LAB_147eaefe4:
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_140 != 0) {
    FUN_1400020a8();
  }
LAB_147eaecc4:
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 147eaf024 FUN_147eaf024 body=910 status=ok
// SIG undefined FUN_147eaf024(void)

ulonglong FUN_147eaf024(longlong param_1,uint param_2,char param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 *puVar7;
  short sVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  int local_130 [2];
  longlong local_128;
  undefined1 local_118 [192];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar6 = *(longlong *)(param_1 + 0x120);
  uVar9 = (ushort)param_2;
  if (uVar9 != 0xffff && lVar6 != 0) {
    do {
      if (*(ushort *)(lVar6 + 0x4c) <= uVar9) {
        uVar14 = (ulonglong)uVar9;
        plVar13 = (longlong *)
                  ((uVar14 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38));
        if ((plVar13 != (longlong *)0x0) && (plVar13[1] != 0)) {
          lVar6 = *(longlong *)(plVar13[1] + 0x10);
          lVar4 = FUN_145b60d02();
          if (lVar6 == lVar4) {
            if ((*(int *)(param_1 + 0x130) == 0) ||
               (*(int *)(param_1 + 0x140) <= (int)(param_2 & 0xffff))) {
              lVar4 = 0;
            }
            else {
              lVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + uVar14 * 2) +
                      *(longlong *)(param_1 + 0x128);
            }
            uVar12 = (ulonglong)((uint)*(byte *)(plVar13[1] + 0x2b) * 2 & 4);
            pcVar5 = (char *)(lVar4 + uVar12);
            if (pcVar5 != (char *)0x0) {
              uVar10 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
              cVar3 = *pcVar5;
              *pcVar5 = param_3;
              if (cVar3 == param_3) goto LAB_147eaf068;
              FUN_147ead268(param_1,param_2);
              lVar6 = *(longlong *)(param_1 + 0x120);
              if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x48) & 1) == 0)) goto LAB_147eaf068;
              goto LAB_147eaf153;
            }
          }
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  uVar10 = 0;
  goto LAB_147eaf068;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0) {
LAB_147eaf153:
    if (*(ushort *)(lVar6 + 0x4c) <= uVar9) {
      lVar6 = (uVar14 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38);
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x10) & 1) != 0)) {
        lVar6 = *(longlong *)(param_1 + 0xb0);
        if (((lVar6 == 0) && (lVar6 = FUN_1448abda6(param_1), lVar6 == 0)) ||
           (lVar6 = *(longlong *)(lVar6 + 0x180), lVar6 == 0)) {
LAB_147eaf1ce:
          lVar6 = 0;
        }
        else {
          lVar4 = FUN_1413f6fa8();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_147eaf1ce;
        }
        FUN_147ea5824(local_130,lVar6 + 0x140,*(undefined8 *)(param_1 + 0x120));
        if (local_50 <= local_130[0]) goto LAB_147eaf375;
        goto LAB_147eaf209;
      }
      break;
    }
  }
  goto LAB_147eaf068;
LAB_147eaf209:
  do {
    puVar7 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar7 = local_118;
    }
    if ((longlong)*(int *)(puVar7 + (longlong)local_130[0] * 0x18 + 0x10) == -1) break;
    lVar6 = FUN_14479d2ce(**(longlong **)(puVar7 + (longlong)local_130[0] * 0x18) +
                          (longlong)*(int *)(puVar7 + (longlong)local_130[0] * 0x18 + 0x10) * 0x18 +
                          8);
    if (((lVar6 != 0) && (cVar3 = FUN_147eaca28(param_1,lVar6), cVar3 != '\0')) &&
       (lVar4 = *(longlong *)(lVar6 + 0x120), lVar4 != 0)) {
      do {
        if (0 < (longlong)*(int *)(lVar4 + 0x40)) {
          lVar11 = 0;
          sVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar11) == *plVar13) {
              uVar9 = sVar8 + *(short *)(lVar4 + 0x4c);
              if (uVar9 != 0xffff) {
                if ((*(int *)(lVar6 + 0x130) == 0) || (*(int *)(lVar6 + 0x140) <= (int)(uint)uVar9))
                {
                  lVar4 = 0;
                }
                else {
                  lVar4 = (ulonglong)
                          *(ushort *)(*(longlong *)(lVar6 + 0x138) + (ulonglong)uVar9 * 2) +
                          *(longlong *)(lVar6 + 0x128);
                }
                *(char *)(lVar4 + uVar12) = param_3;
                FUN_147ead268(lVar6);
              }
              goto LAB_147eaf253;
            }
            sVar8 = sVar8 + 1;
            lVar11 = lVar11 + 0x18;
          } while ((longlong)*(int *)(lVar4 + 0x40) * 0x18 != lVar11);
        }
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
LAB_147eaf253:
    puVar7 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar7 = local_118;
    }
    puVar1 = (undefined8 *)(puVar7 + (longlong)local_130[0] * 0x18);
    do {
      iVar2 = *(int *)((longlong)puVar1 + 0x14);
      *(int *)(puVar1 + 2) = iVar2;
      if ((longlong)iVar2 == -1) break;
      local_140 = puVar1[1];
      lVar6 = (longlong)iVar2 * 0x18;
      *(undefined4 *)((longlong)puVar1 + 0x14) =
           *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + lVar6);
      local_138 = *(undefined8 *)(*(longlong *)*puVar1 + lVar6);
      cVar3 = FUN_147eb47ee(&local_138,&local_140);
    } while (cVar3 == '\0');
    FUN_147ea5a08(local_130);
  } while (local_130[0] < local_50);
LAB_147eaf375:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_147eaf068:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 147eaf3b4 FUN_147eaf3b4 body=935 status=ok
// SIG undefined FUN_147eaf3b4(void)

ulonglong FUN_147eaf3b4(longlong param_1,uint param_2,longlong *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  int local_130 [2];
  longlong local_128;
  undefined1 local_118 [192];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar6 = *(longlong *)(param_1 + 0x120);
  uVar10 = (ushort)param_2;
  if (uVar10 != 0xffff && lVar6 != 0) {
    do {
      if (*(ushort *)(lVar6 + 0x4c) <= uVar10) {
        uVar11 = (ulonglong)uVar10;
        plVar12 = (longlong *)
                  ((uVar11 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38));
        if ((plVar12 != (longlong *)0x0) && (plVar12[1] != 0)) {
          lVar6 = *(longlong *)(plVar12[1] + 0x10);
          lVar5 = FUN_145b60fc0();
          if (lVar6 == lVar5) {
            lVar5 = plVar12[1];
            bVar2 = *(byte *)(lVar5 + 0x2b);
            if ((*(int *)(param_1 + 0x130) == 0) ||
               (*(int *)(param_1 + 0x140) <= (int)(param_2 & 0xffff))) {
              lVar8 = 0;
            }
            else {
              lVar8 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + uVar11 * 2) +
                      *(longlong *)(param_1 + 0x128);
            }
            if ((ulonglong)((uint)bVar2 + (uint)bVar2 & 4) + lVar8 != 0) {
              if ((bVar2 & 2) != 0) {
                lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x148) + uVar11 * 8);
              }
              cVar4 = FUN_147eb245e(lVar5,lVar8,param_3);
              uVar9 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
              if (cVar4 == '\0') goto LAB_147eaf3fb;
              FUN_147ead268(param_1,param_2);
              lVar6 = *(longlong *)(param_1 + 0x120);
              if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x48) & 1) == 0)) goto LAB_147eaf3fb;
              goto LAB_147eaf508;
            }
          }
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  uVar9 = 0;
  goto LAB_147eaf3fb;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0) {
LAB_147eaf508:
    if (*(ushort *)(lVar6 + 0x4c) <= uVar10) {
      lVar6 = (uVar11 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38);
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x10) & 1) != 0)) {
        lVar6 = *(longlong *)(param_1 + 0xb0);
        if (((lVar6 == 0) && (lVar6 = FUN_1448abda6(param_1), lVar6 == 0)) ||
           (lVar6 = *(longlong *)(lVar6 + 0x180), lVar6 == 0)) {
LAB_147eaf583:
          lVar6 = 0;
        }
        else {
          lVar5 = FUN_1413f6fa8();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_147eaf583;
        }
        FUN_147ea5824(local_130,lVar6 + 0x140,*(undefined8 *)(param_1 + 0x120));
        if (local_50 <= local_130[0]) goto LAB_147eaf732;
        goto LAB_147eaf5be;
      }
      break;
    }
  }
  goto LAB_147eaf3fb;
LAB_147eaf5be:
  do {
    puVar7 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar7 = local_118;
    }
    if ((longlong)*(int *)(puVar7 + (longlong)local_130[0] * 0x18 + 0x10) == -1) break;
    lVar6 = FUN_14479d2ce(**(longlong **)(puVar7 + (longlong)local_130[0] * 0x18) +
                          (longlong)*(int *)(puVar7 + (longlong)local_130[0] * 0x18 + 0x10) * 0x18 +
                          8);
    if (((lVar6 != 0) && (cVar4 = FUN_147eaca28(param_1,lVar6), cVar4 != '\0')) &&
       (lVar5 = *(longlong *)(lVar6 + 0x120), lVar5 != 0)) {
      do {
        if (0 < (longlong)*(int *)(lVar5 + 0x40)) {
          lVar8 = 0;
          uVar11 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar5 + 0x38) + lVar8) == *plVar12) {
              uVar10 = (short)uVar11 + *(short *)(lVar5 + 0x4c);
              if (uVar10 != 0xffff) {
                lVar8 = plVar12[1];
                if ((*(byte *)(lVar8 + 0x2b) & 2) != 0) {
                  lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x148) + (ulonglong)uVar10 * 8);
                }
                FUN_147eb245e(lVar8,*(longlong *)(lVar5 + 0x38),param_3);
                FUN_147ead268(lVar6,CONCAT62((int6)(uVar11 >> 0x10),uVar10));
              }
              goto LAB_147eaf608;
            }
            uVar11 = (ulonglong)((int)uVar11 + 1);
            lVar8 = lVar8 + 0x18;
          } while ((longlong)*(int *)(lVar5 + 0x40) * 0x18 != lVar8);
        }
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
LAB_147eaf608:
    puVar7 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar7 = local_118;
    }
    puVar1 = (undefined8 *)(puVar7 + (longlong)local_130[0] * 0x18);
    do {
      iVar3 = *(int *)((longlong)puVar1 + 0x14);
      *(int *)(puVar1 + 2) = iVar3;
      if ((longlong)iVar3 == -1) break;
      local_140 = puVar1[1];
      lVar6 = (longlong)iVar3 * 0x18;
      *(undefined4 *)((longlong)puVar1 + 0x14) =
           *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + lVar6);
      local_138 = *(undefined8 *)(*(longlong *)*puVar1 + lVar6);
      cVar4 = FUN_147eb47ee(&local_138,&local_140);
    } while (cVar4 == '\0');
    FUN_147ea5a08(local_130);
  } while (local_130[0] < local_50);
LAB_147eaf732:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_147eaf3fb:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 147eaf75c FUN_147eaf75c body=911 status=ok
// SIG undefined FUN_147eaf75c(void)

ulonglong FUN_147eaf75c(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  short sVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  int local_130 [2];
  longlong local_128;
  undefined1 local_118 [192];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar6 = *(longlong *)(param_1 + 0x120);
  uVar9 = (ushort)param_2;
  if (uVar9 != 0xffff && lVar6 != 0) {
    do {
      if (*(ushort *)(lVar6 + 0x4c) <= uVar9) {
        uVar14 = (ulonglong)uVar9;
        plVar13 = (longlong *)
                  ((uVar14 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38));
        if ((plVar13 != (longlong *)0x0) && (plVar13[1] != 0)) {
          lVar6 = *(longlong *)(plVar13[1] + 0x10);
          lVar4 = FUN_145b60ed6();
          if (lVar6 == lVar4) {
            if ((*(int *)(param_1 + 0x130) == 0) ||
               (*(int *)(param_1 + 0x140) <= (int)(param_2 & 0xffff))) {
              lVar4 = 0;
            }
            else {
              lVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + uVar14 * 2) +
                      *(longlong *)(param_1 + 0x128);
            }
            uVar12 = (ulonglong)((uint)*(byte *)(plVar13[1] + 0x2b) * 2 & 4);
            plVar5 = (longlong *)(lVar4 + uVar12);
            if (plVar5 != (longlong *)0x0) {
              uVar10 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
              lVar6 = *plVar5;
              *plVar5 = param_3;
              if (lVar6 == param_3) goto LAB_147eaf7a0;
              FUN_147ead268(param_1,param_2);
              lVar6 = *(longlong *)(param_1 + 0x120);
              if ((lVar6 == 0) || ((*(uint *)(lVar6 + 0x48) & 1) == 0)) goto LAB_147eaf7a0;
              goto LAB_147eaf88c;
            }
          }
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  uVar10 = 0;
  goto LAB_147eaf7a0;
  while (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0) {
LAB_147eaf88c:
    if (*(ushort *)(lVar6 + 0x4c) <= uVar9) {
      lVar6 = (uVar14 - *(ushort *)(lVar6 + 0x4c)) * 0x18 + *(longlong *)(lVar6 + 0x38);
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x10) & 1) != 0)) {
        lVar6 = *(longlong *)(param_1 + 0xb0);
        if (((lVar6 == 0) && (lVar6 = FUN_1448abda6(param_1), lVar6 == 0)) ||
           (lVar6 = *(longlong *)(lVar6 + 0x180), lVar6 == 0)) {
LAB_147eaf907:
          lVar6 = 0;
        }
        else {
          lVar4 = FUN_1413f6fa8();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_147eaf907;
        }
        FUN_147ea5824(local_130,lVar6 + 0x140,*(undefined8 *)(param_1 + 0x120));
        if (local_50 <= local_130[0]) goto LAB_147eafaae;
        goto LAB_147eaf942;
      }
      break;
    }
  }
  goto LAB_147eaf7a0;
LAB_147eaf942:
  do {
    puVar7 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar7 = local_118;
    }
    if ((longlong)*(int *)(puVar7 + (longlong)local_130[0] * 0x18 + 0x10) == -1) break;
    lVar6 = FUN_14479d2ce(**(longlong **)(puVar7 + (longlong)local_130[0] * 0x18) +
                          (longlong)*(int *)(puVar7 + (longlong)local_130[0] * 0x18 + 0x10) * 0x18 +
                          8);
    if (((lVar6 != 0) && (cVar3 = FUN_147eaca28(param_1,lVar6), cVar3 != '\0')) &&
       (lVar4 = *(longlong *)(lVar6 + 0x120), lVar4 != 0)) {
      do {
        if (0 < (longlong)*(int *)(lVar4 + 0x40)) {
          lVar11 = 0;
          sVar8 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar11) == *plVar13) {
              uVar9 = sVar8 + *(short *)(lVar4 + 0x4c);
              if (uVar9 != 0xffff) {
                if ((*(int *)(lVar6 + 0x130) == 0) || (*(int *)(lVar6 + 0x140) <= (int)(uint)uVar9))
                {
                  lVar4 = 0;
                }
                else {
                  lVar4 = (ulonglong)
                          *(ushort *)(*(longlong *)(lVar6 + 0x138) + (ulonglong)uVar9 * 2) +
                          *(longlong *)(lVar6 + 0x128);
                }
                *(longlong *)(lVar4 + uVar12) = param_3;
                FUN_147ead268(lVar6);
              }
              goto LAB_147eaf98c;
            }
            sVar8 = sVar8 + 1;
            lVar11 = lVar11 + 0x18;
          } while ((longlong)*(int *)(lVar4 + 0x40) * 0x18 != lVar11);
        }
        lVar4 = *(longlong *)(lVar4 + 0x30);
      } while (lVar4 != 0);
    }
LAB_147eaf98c:
    puVar7 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar7 = local_118;
    }
    puVar1 = (undefined8 *)(puVar7 + (longlong)local_130[0] * 0x18);
    do {
      iVar2 = *(int *)((longlong)puVar1 + 0x14);
      *(int *)(puVar1 + 2) = iVar2;
      if ((longlong)iVar2 == -1) break;
      local_140 = puVar1[1];
      lVar6 = (longlong)iVar2 * 0x18;
      *(undefined4 *)((longlong)puVar1 + 0x14) =
           *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + lVar6);
      local_138 = *(undefined8 *)(*(longlong *)*puVar1 + lVar6);
      cVar3 = FUN_147eb47ee(&local_138,&local_140);
    } while (cVar3 == '\0');
    FUN_147ea5a08(local_130);
  } while (local_130[0] < local_50);
LAB_147eafaae:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_147eaf7a0:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 147eafaec FUN_147eafaec body=988 status=ok
// SIG undefined FUN_147eafaec(void)

ulonglong FUN_147eafaec(longlong param_1,uint param_2,double *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  undefined1 *puVar15;
  short sVar16;
  ushort uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  int local_130 [2];
  longlong local_128;
  undefined1 local_118 [192];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  double dVar5;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar12 = *(longlong *)(param_1 + 0x120);
  uVar17 = (ushort)param_2;
  if (uVar17 != 0xffff && lVar12 != 0) {
    do {
      if (*(ushort *)(lVar12 + 0x4c) <= uVar17) {
        uVar21 = (ulonglong)uVar17;
        plVar20 = (longlong *)
                  ((uVar21 - *(ushort *)(lVar12 + 0x4c)) * 0x18 + *(longlong *)(lVar12 + 0x38));
        if ((plVar20 != (longlong *)0x0) && (plVar20[1] != 0)) {
          uVar18 = *(ulonglong *)(plVar20[1] + 0x10);
          uVar11 = FUN_1458b8ba0();
          if (uVar18 == uVar11) {
            if ((*(int *)(param_1 + 0x130) == 0) ||
               (*(int *)(param_1 + 0x140) <= (int)(param_2 & 0xffff))) {
              lVar12 = 0;
            }
            else {
              lVar12 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + uVar21 * 2) +
                       *(longlong *)(param_1 + 0x128);
            }
            uVar11 = (ulonglong)((uint)*(byte *)(plVar20[1] + 0x2b) * 2 & 4);
            pdVar13 = (double *)(lVar12 + uVar11);
            if (pdVar13 != (double *)0x0) {
              if ((((*pdVar13 != *param_3) || (NAN(*pdVar13) || NAN(*param_3))) ||
                  (pdVar13[1] != param_3[1])) || (NAN(pdVar13[1]) || NAN(param_3[1]))) {
                pdVar13[2] = param_3[2];
                uVar7 = *(undefined4 *)((longlong)param_3 + 4);
                uVar8 = *(undefined4 *)(param_3 + 1);
                uVar9 = *(undefined4 *)((longlong)param_3 + 0xc);
                *(undefined4 *)pdVar13 = *(undefined4 *)param_3;
                *(undefined4 *)((longlong)pdVar13 + 4) = uVar7;
                *(undefined4 *)(pdVar13 + 1) = uVar8;
                *(undefined4 *)((longlong)pdVar13 + 0xc) = uVar9;
              }
              else {
                dVar3 = pdVar13[2];
                dVar4 = param_3[2];
                dVar5 = param_3[2];
                uVar7 = *(undefined4 *)((longlong)param_3 + 4);
                uVar8 = *(undefined4 *)(param_3 + 1);
                uVar9 = *(undefined4 *)((longlong)param_3 + 0xc);
                *(undefined4 *)pdVar13 = *(undefined4 *)param_3;
                *(undefined4 *)((longlong)pdVar13 + 4) = uVar7;
                *(undefined4 *)(pdVar13 + 1) = uVar8;
                *(undefined4 *)((longlong)pdVar13 + 0xc) = uVar9;
                pdVar13[2] = param_3[2];
                uVar18 = CONCAT71((int7)(uVar18 >> 8),1);
                if ((dVar3 == dVar5) && (!NAN(dVar3) && !NAN(dVar4))) goto LAB_147eafb30;
              }
              FUN_147ead268(param_1,param_2);
              lVar12 = *(longlong *)(param_1 + 0x120);
              uVar18 = CONCAT71((int7)(uVar18 >> 8),1);
              if ((lVar12 == 0) || ((*(uint *)(lVar12 + 0x48) & 1) == 0)) goto LAB_147eafb30;
              goto LAB_147eafc5c;
            }
          }
        }
        break;
      }
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  uVar18 = 0;
  goto LAB_147eafb30;
  while (lVar12 = *(longlong *)(lVar12 + 0x30), lVar12 != 0) {
LAB_147eafc5c:
    if (*(ushort *)(lVar12 + 0x4c) <= uVar17) {
      lVar12 = (uVar21 - *(ushort *)(lVar12 + 0x4c)) * 0x18 + *(longlong *)(lVar12 + 0x38);
      if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x10) & 1) != 0)) {
        lVar12 = *(longlong *)(param_1 + 0xb0);
        if (((lVar12 == 0) && (lVar12 = FUN_1448abda6(param_1), lVar12 == 0)) ||
           (lVar12 = *(longlong *)(lVar12 + 0x180), lVar12 == 0)) {
LAB_147eafcd7:
          lVar12 = 0;
        }
        else {
          lVar14 = FUN_1413f6fa8();
          if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) goto LAB_147eafcd7;
        }
        FUN_147ea5824(local_130,lVar12 + 0x140,*(undefined8 *)(param_1 + 0x120));
        if (local_50 <= local_130[0]) goto LAB_147eafe8b;
        goto LAB_147eafd12;
      }
      break;
    }
  }
  goto LAB_147eafb30;
LAB_147eafd12:
  do {
    puVar15 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar15 = local_118;
    }
    if ((longlong)*(int *)(puVar15 + (longlong)local_130[0] * 0x18 + 0x10) == -1) break;
    lVar12 = FUN_14479d2ce(**(longlong **)(puVar15 + (longlong)local_130[0] * 0x18) +
                           (longlong)*(int *)(puVar15 + (longlong)local_130[0] * 0x18 + 0x10) * 0x18
                           + 8);
    if (((lVar12 != 0) && (cVar10 = FUN_147eaca28(param_1,lVar12), cVar10 != '\0')) &&
       (lVar14 = *(longlong *)(lVar12 + 0x120), lVar14 != 0)) {
      do {
        if (0 < (longlong)*(int *)(lVar14 + 0x40)) {
          lVar19 = 0;
          sVar16 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar14 + 0x38) + lVar19) == *plVar20) {
              uVar17 = sVar16 + *(short *)(lVar14 + 0x4c);
              if (uVar17 != 0xffff) {
                if ((*(int *)(lVar12 + 0x130) == 0) ||
                   (*(int *)(lVar12 + 0x140) <= (int)(uint)uVar17)) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (ulonglong)
                           *(ushort *)(*(longlong *)(lVar12 + 0x138) + (ulonglong)uVar17 * 2) +
                           *(longlong *)(lVar12 + 0x128);
                }
                *(double *)(lVar14 + 0x10 + uVar11) = param_3[2];
                uVar7 = *(undefined4 *)((longlong)param_3 + 4);
                uVar8 = *(undefined4 *)(param_3 + 1);
                uVar9 = *(undefined4 *)((longlong)param_3 + 0xc);
                puVar2 = (undefined4 *)(lVar14 + uVar11);
                *puVar2 = *(undefined4 *)param_3;
                puVar2[1] = uVar7;
                puVar2[2] = uVar8;
                puVar2[3] = uVar9;
                FUN_147ead268(lVar12);
              }
              goto LAB_147eafd5c;
            }
            sVar16 = sVar16 + 1;
            lVar19 = lVar19 + 0x18;
          } while ((longlong)*(int *)(lVar14 + 0x40) * 0x18 != lVar19);
        }
        lVar14 = *(longlong *)(lVar14 + 0x30);
      } while (lVar14 != 0);
    }
LAB_147eafd5c:
    puVar15 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar15 = local_118;
    }
    puVar1 = (undefined8 *)(puVar15 + (longlong)local_130[0] * 0x18);
    do {
      iVar6 = *(int *)((longlong)puVar1 + 0x14);
      *(int *)(puVar1 + 2) = iVar6;
      if ((longlong)iVar6 == -1) break;
      local_140 = puVar1[1];
      lVar12 = (longlong)iVar6 * 0x18;
      *(undefined4 *)((longlong)puVar1 + 0x14) =
           *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + lVar12);
      local_138 = *(undefined8 *)(*(longlong *)*puVar1 + lVar12);
      cVar10 = FUN_147eb47ee(&local_138,&local_140);
    } while (cVar10 == '\0');
    FUN_147ea5a08(local_130);
  } while (local_130[0] < local_50);
LAB_147eafe8b:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_147eafb30:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 147eafeca FUN_147eafeca body=988 status=ok
// SIG undefined FUN_147eafeca(void)

ulonglong FUN_147eafeca(longlong param_1,uint param_2,double *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  undefined1 *puVar15;
  short sVar16;
  ushort uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  int local_130 [2];
  longlong local_128;
  undefined1 local_118 [192];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  double dVar5;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar12 = *(longlong *)(param_1 + 0x120);
  uVar17 = (ushort)param_2;
  if (uVar17 != 0xffff && lVar12 != 0) {
    do {
      if (*(ushort *)(lVar12 + 0x4c) <= uVar17) {
        uVar21 = (ulonglong)uVar17;
        plVar20 = (longlong *)
                  ((uVar21 - *(ushort *)(lVar12 + 0x4c)) * 0x18 + *(longlong *)(lVar12 + 0x38));
        if ((plVar20 != (longlong *)0x0) && (plVar20[1] != 0)) {
          uVar18 = *(ulonglong *)(plVar20[1] + 0x10);
          uVar11 = FUN_145a752c0();
          if (uVar18 == uVar11) {
            if ((*(int *)(param_1 + 0x130) == 0) ||
               (*(int *)(param_1 + 0x140) <= (int)(param_2 & 0xffff))) {
              lVar12 = 0;
            }
            else {
              lVar12 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + uVar21 * 2) +
                       *(longlong *)(param_1 + 0x128);
            }
            uVar11 = (ulonglong)((uint)*(byte *)(plVar20[1] + 0x2b) * 2 & 4);
            pdVar13 = (double *)(lVar12 + uVar11);
            if (pdVar13 != (double *)0x0) {
              if ((((*pdVar13 != *param_3) || (NAN(*pdVar13) || NAN(*param_3))) ||
                  (pdVar13[1] != param_3[1])) || (NAN(pdVar13[1]) || NAN(param_3[1]))) {
                pdVar13[2] = param_3[2];
                uVar7 = *(undefined4 *)((longlong)param_3 + 4);
                uVar8 = *(undefined4 *)(param_3 + 1);
                uVar9 = *(undefined4 *)((longlong)param_3 + 0xc);
                *(undefined4 *)pdVar13 = *(undefined4 *)param_3;
                *(undefined4 *)((longlong)pdVar13 + 4) = uVar7;
                *(undefined4 *)(pdVar13 + 1) = uVar8;
                *(undefined4 *)((longlong)pdVar13 + 0xc) = uVar9;
              }
              else {
                dVar3 = pdVar13[2];
                dVar4 = param_3[2];
                dVar5 = param_3[2];
                uVar7 = *(undefined4 *)((longlong)param_3 + 4);
                uVar8 = *(undefined4 *)(param_3 + 1);
                uVar9 = *(undefined4 *)((longlong)param_3 + 0xc);
                *(undefined4 *)pdVar13 = *(undefined4 *)param_3;
                *(undefined4 *)((longlong)pdVar13 + 4) = uVar7;
                *(undefined4 *)(pdVar13 + 1) = uVar8;
                *(undefined4 *)((longlong)pdVar13 + 0xc) = uVar9;
                pdVar13[2] = param_3[2];
                uVar18 = CONCAT71((int7)(uVar18 >> 8),1);
                if ((dVar3 == dVar5) && (!NAN(dVar3) && !NAN(dVar4))) goto LAB_147eaff0e;
              }
              FUN_147ead268(param_1,param_2);
              lVar12 = *(longlong *)(param_1 + 0x120);
              uVar18 = CONCAT71((int7)(uVar18 >> 8),1);
              if ((lVar12 == 0) || ((*(uint *)(lVar12 + 0x48) & 1) == 0)) goto LAB_147eaff0e;
              goto LAB_147eb003a;
            }
          }
        }
        break;
      }
      lVar12 = *(longlong *)(lVar12 + 0x30);
    } while (lVar12 != 0);
  }
  uVar18 = 0;
  goto LAB_147eaff0e;
  while (lVar12 = *(longlong *)(lVar12 + 0x30), lVar12 != 0) {
LAB_147eb003a:
    if (*(ushort *)(lVar12 + 0x4c) <= uVar17) {
      lVar12 = (uVar21 - *(ushort *)(lVar12 + 0x4c)) * 0x18 + *(longlong *)(lVar12 + 0x38);
      if ((lVar12 != 0) && ((*(byte *)(lVar12 + 0x10) & 1) != 0)) {
        lVar12 = *(longlong *)(param_1 + 0xb0);
        if (((lVar12 == 0) && (lVar12 = FUN_1448abda6(param_1), lVar12 == 0)) ||
           (lVar12 = *(longlong *)(lVar12 + 0x180), lVar12 == 0)) {
LAB_147eb00b5:
          lVar12 = 0;
        }
        else {
          lVar14 = FUN_1413f6fa8();
          if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30)) goto LAB_147eb00b5;
        }
        FUN_147ea5824(local_130,lVar12 + 0x140,*(undefined8 *)(param_1 + 0x120));
        if (local_50 <= local_130[0]) goto LAB_147eb0269;
        goto LAB_147eb00f0;
      }
      break;
    }
  }
  goto LAB_147eaff0e;
LAB_147eb00f0:
  do {
    puVar15 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar15 = local_118;
    }
    if ((longlong)*(int *)(puVar15 + (longlong)local_130[0] * 0x18 + 0x10) == -1) break;
    lVar12 = FUN_14479d2ce(**(longlong **)(puVar15 + (longlong)local_130[0] * 0x18) +
                           (longlong)*(int *)(puVar15 + (longlong)local_130[0] * 0x18 + 0x10) * 0x18
                           + 8);
    if (((lVar12 != 0) && (cVar10 = FUN_147eaca28(param_1,lVar12), cVar10 != '\0')) &&
       (lVar14 = *(longlong *)(lVar12 + 0x120), lVar14 != 0)) {
      do {
        if (0 < (longlong)*(int *)(lVar14 + 0x40)) {
          lVar19 = 0;
          sVar16 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar14 + 0x38) + lVar19) == *plVar20) {
              uVar17 = sVar16 + *(short *)(lVar14 + 0x4c);
              if (uVar17 != 0xffff) {
                if ((*(int *)(lVar12 + 0x130) == 0) ||
                   (*(int *)(lVar12 + 0x140) <= (int)(uint)uVar17)) {
                  lVar14 = 0;
                }
                else {
                  lVar14 = (ulonglong)
                           *(ushort *)(*(longlong *)(lVar12 + 0x138) + (ulonglong)uVar17 * 2) +
                           *(longlong *)(lVar12 + 0x128);
                }
                *(double *)(lVar14 + 0x10 + uVar11) = param_3[2];
                uVar7 = *(undefined4 *)((longlong)param_3 + 4);
                uVar8 = *(undefined4 *)(param_3 + 1);
                uVar9 = *(undefined4 *)((longlong)param_3 + 0xc);
                puVar2 = (undefined4 *)(lVar14 + uVar11);
                *puVar2 = *(undefined4 *)param_3;
                puVar2[1] = uVar7;
                puVar2[2] = uVar8;
                puVar2[3] = uVar9;
                FUN_147ead268(lVar12);
              }
              goto LAB_147eb013a;
            }
            sVar16 = sVar16 + 1;
            lVar19 = lVar19 + 0x18;
          } while ((longlong)*(int *)(lVar14 + 0x40) * 0x18 != lVar19);
        }
        lVar14 = *(longlong *)(lVar14 + 0x30);
      } while (lVar14 != 0);
    }
LAB_147eb013a:
    puVar15 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar15 = local_118;
    }
    puVar1 = (undefined8 *)(puVar15 + (longlong)local_130[0] * 0x18);
    do {
      iVar6 = *(int *)((longlong)puVar1 + 0x14);
      *(int *)(puVar1 + 2) = iVar6;
      if ((longlong)iVar6 == -1) break;
      local_140 = puVar1[1];
      lVar12 = (longlong)iVar6 * 0x18;
      *(undefined4 *)((longlong)puVar1 + 0x14) =
           *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + lVar12);
      local_138 = *(undefined8 *)(*(longlong *)*puVar1 + lVar12);
      cVar10 = FUN_147eb47ee(&local_138,&local_140);
    } while (cVar10 == '\0');
    FUN_147ea5a08(local_130);
  } while (local_130[0] < local_50);
LAB_147eb0269:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_147eaff0e:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18 & 0xffffffff;
}



// FUNCTION 147eb02a8 FUN_147eb02a8 body=225 status=ok
// SIG undefined FUN_147eb02a8(void)

undefined8 * FUN_147eb02a8(longlong param_1,undefined8 *param_2,ushort param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x120);
  puVar5 = (undefined8 *)&DAT_14cb1efb0;
  if (param_3 != 0xffff && lVar6 != 0) {
    do {
      if (*(ushort *)(lVar6 + 0x4c) <= param_3) {
        lVar6 = ((ulonglong)param_3 - (ulonglong)*(ushort *)(lVar6 + 0x4c)) * 0x18 +
                *(longlong *)(lVar6 + 0x38);
        if (((lVar6 != 0) && (*(longlong *)(lVar6 + 8) != 0)) &&
           (lVar4 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x10), lVar3 = FUN_1458b8ba0(),
           lVar4 == lVar3)) {
          if ((*(int *)(param_1 + 0x130) == 0) || (*(int *)(param_1 + 0x140) <= (int)(uint)param_3))
          {
            lVar4 = 0;
          }
          else {
            lVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + (ulonglong)param_3 * 2)
                    + *(longlong *)(param_1 + 0x128);
          }
          puVar1 = (undefined8 *)
                   (lVar4 + (ulonglong)(*(byte *)(*(longlong *)(lVar6 + 8) + 0x2b) & 2) * 2);
          puVar5 = (undefined8 *)&DAT_14cb1efb0;
          if (puVar1 != (undefined8 *)0x0) {
            puVar5 = puVar1;
          }
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
  param_2[2] = puVar5[2];
  uVar2 = puVar5[1];
  *param_2 = *puVar5;
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 147eb038a FUN_147eb038a body=992 status=ok
// SIG undefined FUN_147eb038a(void)

void FUN_147eb038a(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ushort uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 auStack_188 [32];
  longlong local_168;
  byte local_151;
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  int local_130 [2];
  longlong local_128;
  undefined1 local_118 [192];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar11 = *(longlong *)(param_1 + 0x120);
  if (lVar11 != 0) {
    uVar9 = (ulonglong)param_2;
    plVar13 = (longlong *)0x0;
    uVar10 = (ushort)param_2;
    if (uVar10 != 0xffff) {
      do {
        if (*(ushort *)(lVar11 + 0x4c) <= uVar10) {
          plVar13 = (longlong *)
                    (((uVar9 & 0xffff) - (ulonglong)*(ushort *)(lVar11 + 0x4c)) * 0x18 +
                    *(longlong *)(lVar11 + 0x38));
          break;
        }
        lVar11 = *(longlong *)(lVar11 + 0x30);
      } while (lVar11 != 0);
    }
    if ((((*(int *)(param_1 + 0x130) != 0) &&
         (uVar14 = uVar9 & 0xffff, (int)uVar14 < *(int *)(param_1 + 0x140))) &&
        (lVar11 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x138) + uVar14 * 2) +
                  *(longlong *)(param_1 + 0x128), lVar11 != 0)) &&
       (cVar4 = FUN_147eb076c(plVar13[1],param_1,lVar11), cVar4 == '\0')) {
      plVar1 = plVar13 + 1;
      FUN_147eb07e4(*plVar1,param_1,lVar11);
      FUN_147ead268(param_1,uVar9);
      if (((uVar10 != 0xffff) && (lVar7 = *(longlong *)(param_1 + 0x120), lVar7 != 0)) &&
         ((*(uint *)(lVar7 + 0x48) & 1) != 0)) {
        do {
          if (*(ushort *)(lVar7 + 0x4c) <= uVar10) {
            lVar7 = (uVar14 - *(ushort *)(lVar7 + 0x4c)) * 0x18 + *(longlong *)(lVar7 + 0x38);
            if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x10) & 1) != 0)) {
              local_148 = *plVar1;
              local_151 = *(byte *)(local_148 + 0x2b);
              if ((local_151 & 2) == 0) {
                local_150 = 0;
              }
              else {
                local_148 = *(longlong *)(*(longlong *)(param_1 + 0x148) + uVar14 * 8);
                local_150 = 4;
              }
              lVar7 = *(longlong *)(param_1 + 0xb0);
              if (((lVar7 == 0) && (lVar7 = FUN_1448abda6(param_1), lVar7 == 0)) ||
                 (lVar7 = *(longlong *)(lVar7 + 0x180), lVar7 == 0)) {
LAB_147eb0549:
                lVar7 = 0;
              }
              else {
                lVar5 = FUN_1413f6fa8();
                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_147eb0549;
              }
              FUN_147ea5824(local_130,lVar7 + 0x140,*(undefined8 *)(param_1 + 0x120));
              if (local_50 <= local_130[0]) goto LAB_147eb072c;
              lVar11 = lVar11 + local_150;
              goto LAB_147eb0589;
            }
            break;
          }
          lVar7 = *(longlong *)(lVar7 + 0x30);
        } while (lVar7 != 0);
      }
    }
  }
  goto LAB_147eb041a;
LAB_147eb0589:
  do {
    puVar8 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar8 = local_118;
    }
    if ((longlong)*(int *)(puVar8 + (longlong)local_130[0] * 0x18 + 0x10) == -1) break;
    lVar7 = FUN_14479d2ce(**(longlong **)(puVar8 + (longlong)local_130[0] * 0x18) +
                          (longlong)*(int *)(puVar8 + (longlong)local_130[0] * 0x18 + 0x10) * 0x18 +
                          8);
    if (((lVar7 != 0) && (cVar4 = FUN_147eaca28(param_1,lVar7), cVar4 != '\0')) &&
       (lVar5 = *(longlong *)(lVar7 + 0x120), lVar5 != 0)) {
      do {
        if (0 < (longlong)*(int *)(lVar5 + 0x40)) {
          lVar12 = 0;
          uVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar5 + 0x38) + lVar12) == *plVar13) {
              uVar10 = (short)uVar9 + *(short *)(lVar5 + 0x4c);
              if (uVar10 != 0xffff) {
                plVar6 = plVar1;
                if ((local_151 & 2) != 0) {
                  plVar6 = (longlong *)
                           ((ulonglong)((uint)uVar10 * 8) + *(longlong *)(lVar7 + 0x148));
                }
                if ((*(int *)(lVar7 + 0x130) == 0) || (*(int *)(lVar7 + 0x140) <= (int)(uint)uVar10)
                   ) {
                  lVar5 = 0;
                }
                else {
                  lVar5 = (ulonglong)
                          *(ushort *)(*(longlong *)(lVar7 + 0x138) + (ulonglong)uVar10 * 2) +
                          *(longlong *)(lVar7 + 0x128);
                }
                local_168 = lVar11;
                (**(code **)(*(longlong *)*plVar6 + 0x2d0))
                          ((longlong *)*plVar6,lVar7,lVar5 + local_150);
                FUN_147ead268(lVar7,CONCAT62((int6)(uVar9 >> 0x10),uVar10));
              }
              goto LAB_147eb05d3;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
            lVar12 = lVar12 + 0x18;
          } while ((longlong)*(int *)(lVar5 + 0x40) * 0x18 != lVar12);
        }
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
LAB_147eb05d3:
    puVar8 = local_58;
    if (local_58 == (undefined1 *)0x0) {
      puVar8 = local_118;
    }
    puVar2 = (undefined8 *)(puVar8 + (longlong)local_130[0] * 0x18);
    do {
      iVar3 = *(int *)((longlong)puVar2 + 0x14);
      *(int *)(puVar2 + 2) = iVar3;
      if ((longlong)iVar3 == -1) break;
      local_140 = puVar2[1];
      lVar7 = (longlong)iVar3 * 0x18;
      *(undefined4 *)((longlong)puVar2 + 0x14) =
           *(undefined4 *)(*(longlong *)*puVar2 + 0x10 + lVar7);
      local_138 = *(undefined8 *)(*(longlong *)*puVar2 + lVar7);
      cVar4 = FUN_147eb47ee(&local_138,&local_140);
    } while (cVar4 == '\0');
    FUN_147ea5a08(local_130);
  } while (local_130[0] < local_50);
LAB_147eb072c:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
LAB_147eb041a:
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eb076c FUN_147eb076c body=119 status=ok
// SIG undefined FUN_147eb076c(void)

void FUN_147eb076c(longlong *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x300);
  }
  else {
    iVar1 = *param_3;
    param_1 = (longlong *)0x0;
    if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_2 + 0x150))) &&
       (param_1 = *(longlong **)(*(longlong *)(param_2 + 0x148) + (longlong)iVar1 * 8),
       (param_1 != (longlong *)0x0 & DAT_14c950c29) == 1)) {
      FUN_1456cec3c(param_1);
    }
    param_3 = param_3 + 1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x300);
  }
                    /* WARNING: Could not recover jumptable at 0x000147eb07d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 147eb07e4 FUN_147eb07e4 body=119 status=ok
// SIG undefined FUN_147eb07e4(void)

void FUN_147eb07e4(longlong *param_1,longlong param_2,int *param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x2f8);
  }
  else {
    iVar1 = *param_3;
    param_1 = (longlong *)0x0;
    if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_2 + 0x150))) &&
       (param_1 = *(longlong **)(*(longlong *)(param_2 + 0x148) + (longlong)iVar1 * 8),
       (param_1 != (longlong *)0x0 & DAT_14c950c29) == 1)) {
      FUN_1456cec3c(param_1);
    }
    param_3 = param_3 + 1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x2f8);
  }
                    /* WARNING: Could not recover jumptable at 0x000147eb084e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 147eb085c FUN_147eb085c body=116 status=ok
// SIG undefined FUN_147eb085c(void)

undefined8 FUN_147eb085c(longlong param_1,ushort param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (((lVar2 != 0) && (param_2 != 0xffff)) && ((int)(uint)param_2 < *(int *)(param_1 + 0x140))) {
    do {
      if (*(ushort *)(lVar2 + 0x4c) <= param_2) {
        lVar2 = ((ulonglong)param_2 - (ulonglong)*(ushort *)(lVar2 + 0x4c)) * 0x18 +
                *(longlong *)(lVar2 + 0x38);
        if (lVar2 == 0) {
          return 0;
        }
        lVar2 = *(longlong *)(lVar2 + 8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar1 = FUN_147eb08d0(lVar2,param_1,
                              (ulonglong)
                              *(ushort *)(*(longlong *)(param_1 + 0x138) + (ulonglong)param_2 * 2) +
                              *(longlong *)(param_1 + 0x128),param_3);
        return uVar1;
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 147eb08d0 FUN_147eb08d0 body=138 status=ok
// SIG undefined FUN_147eb08d0(void)

void FUN_147eb08d0(longlong *param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x2e8);
  }
  else {
    if (param_3 == (int *)0x0) {
      param_1 = (longlong *)0x0;
    }
    else {
      iVar1 = *param_3;
      param_1 = (longlong *)0x0;
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_2 + 0x150))) &&
         (param_1 = *(longlong **)(*(longlong *)(param_2 + 0x148) + (longlong)iVar1 * 8),
         (param_1 != (longlong *)0x0 & DAT_14c950c29) == 1)) {
        FUN_1456cec3c(param_1);
      }
    }
    param_3 = param_3 + 1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x2e8);
  }
                    /* WARNING: Could not recover jumptable at 0x000147eb0957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147eb095a FUN_147eb095a body=116 status=ok
// SIG undefined FUN_147eb095a(void)

undefined8 FUN_147eb095a(longlong param_1,ushort param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (((lVar2 != 0) && (param_2 != 0xffff)) && ((int)(uint)param_2 < *(int *)(param_1 + 0x140))) {
    do {
      if (*(ushort *)(lVar2 + 0x4c) <= param_2) {
        lVar2 = ((ulonglong)param_2 - (ulonglong)*(ushort *)(lVar2 + 0x4c)) * 0x18 +
                *(longlong *)(lVar2 + 0x38);
        if (lVar2 == 0) {
          return 0;
        }
        lVar2 = *(longlong *)(lVar2 + 8);
        if (lVar2 == 0) {
          return 0;
        }
        uVar1 = FUN_147eb09ce(lVar2,param_1,
                              (ulonglong)
                              *(ushort *)(*(longlong *)(param_1 + 0x138) + (ulonglong)param_2 * 2) +
                              *(longlong *)(param_1 + 0x128),param_3);
        return uVar1;
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 147eb09ce FUN_147eb09ce body=138 status=ok
// SIG undefined FUN_147eb09ce(void)

void FUN_147eb09ce(longlong *param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x2f0);
  }
  else {
    if (param_3 == (int *)0x0) {
      param_1 = (longlong *)0x0;
    }
    else {
      iVar1 = *param_3;
      param_1 = (longlong *)0x0;
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_2 + 0x150))) &&
         (param_1 = *(longlong **)(*(longlong *)(param_2 + 0x148) + (longlong)iVar1 * 8),
         (param_1 != (longlong *)0x0 & DAT_14c950c29) == 1)) {
        FUN_1456cec3c(param_1);
      }
    }
    param_3 = param_3 + 1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x2f0);
  }
                    /* WARNING: Could not recover jumptable at 0x000147eb0a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147eb0a68 FUN_147eb0a68 body=83 status=ok
// SIG undefined FUN_147eb0a68(void)

void FUN_147eb0a68(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x30) + 0x48) & 1;
  }
  uVar1 = *(uint *)(param_1 + 0x48) & 0xfffffffe | uVar1;
  *(uint *)(param_1 + 0x48) = uVar1;
  if (0 < (longlong)*(int *)(param_1 + 0x40)) {
    lVar2 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        return;
      }
      uVar1 = uVar1 | *(uint *)(*(longlong *)(param_1 + 0x38) + 0x10 + lVar2) & 1;
      *(uint *)(param_1 + 0x48) = uVar1;
      lVar2 = lVar2 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0x40) * 0x18 != lVar2);
  }
  return;
}



// FUNCTION 147eb0abc FUN_147eb0abc body=48 status=ok
// SIG undefined FUN_147eb0abc(void)

void FUN_147eb0abc(longlong param_1)

{
  FUN_1446e0b6e();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400337aa();
  }
  FUN_147eb0aec(param_1);
  FUN_147eb0a68(param_1);
  return;
}



// FUNCTION 147eb0aec FUN_147eb0aec body=67 status=ok
// SIG undefined FUN_147eb0aec(void)

void FUN_147eb0aec(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 == param_1) {
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else if (lVar1 != 0) {
    sVar2 = *(short *)(lVar1 + 0x4c) + *(short *)(lVar1 + 0x40);
    goto LAB_147eb0b07;
  }
  sVar2 = 0;
LAB_147eb0b07:
  *(short *)(param_1 + 0x4c) = sVar2;
  FUN_143849aa0(param_1);
  FUN_147eb9e12(param_1);
  return;
}



// FUNCTION 147eb0b30 FUN_147eb0b30 body=235 status=ok
// SIG undefined FUN_147eb0b30(void)

void FUN_147eb0b30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147eb0c1c(&local_30);
  uVar5 = (ulonglong)local_20;
  lVar2 = local_30;
  iVar3 = local_28;
  if ((int)local_20 < local_28 && -1 < (int)local_20) {
    do {
      lVar1 = *(longlong *)(lVar2 + (uVar5 & 0xffffffff) * 8);
      uVar4 = (uint)uVar5;
      if (*(longlong *)(lVar1 + 0x30) == param_1) {
        FUN_147eb0aec(lVar1);
        FUN_147eb0a68(*(undefined8 *)(local_30 + (longlong)(int)local_20 * 8));
        FUN_147eb0b30(*(undefined8 *)(local_30 + (longlong)(int)local_20 * 8));
        lVar2 = local_30;
        iVar3 = local_28;
        uVar4 = local_20;
      }
      uVar5 = (longlong)(int)uVar4;
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
        local_20 = (uint)uVar5;
        if ((longlong)iVar3 <= (longlong)uVar5) break;
      } while (*(longlong *)(lVar2 + uVar5 * 8) == 0);
    } while ((-2 < (longlong)uVar6) && ((int)local_20 < iVar3));
  }
  if (lVar2 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eb0c1c FUN_147eb0c1c body=107 status=ok
// SIG undefined FUN_147eb0c1c(void)

longlong * FUN_147eb0c1c(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_14121bfe8();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 147eb0c88 FUN_147eb0c88 body=21 status=ok
// SIG undefined FUN_147eb0c88(void)

bool FUN_147eb0c88(longlong param_1,longlong param_2)

{
  do {
    param_1 = *(longlong *)(param_1 + 0x30);
    if (param_1 == 0) break;
  } while (param_1 != param_2);
  return param_1 == param_2;
}



// FUNCTION 147eb0cf8 FUN_147eb0cf8 body=138 status=ok
// SIG undefined FUN_147eb0cf8(void)

void FUN_147eb0cf8(longlong *param_1,longlong param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x308);
  }
  else {
    if (param_3 == (int *)0x0) {
      param_1 = (longlong *)0x0;
    }
    else {
      iVar1 = *param_3;
      param_1 = (longlong *)0x0;
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_2 + 0x150))) &&
         (param_1 = *(longlong **)(*(longlong *)(param_2 + 0x148) + (longlong)iVar1 * 8),
         (param_1 != (longlong *)0x0 & DAT_14c950c29) == 1)) {
        FUN_1456cec3c(param_1);
      }
    }
    param_3 = param_3 + 1;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x308);
  }
                    /* WARNING: Could not recover jumptable at 0x000147eb0d7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147eb0d86 FUN_147eb0d86 body=182 status=ok
// SIG undefined FUN_147eb0d86(void)

void FUN_147eb0d86(longlong *param_1,longlong param_2,int *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0) {
    (**(code **)(*param_1 + 0x310))(param_6,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  if (param_3 == (int *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    iVar1 = *param_3;
    plVar2 = (longlong *)0x0;
    if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_2 + 0x150))) &&
       (plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x148) + (longlong)iVar1 * 8),
       (plVar2 != (longlong *)0x0 & DAT_14c950c29) == 1)) {
      FUN_1456cec3c(plVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147eb0e39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x310))(plVar2,param_2,param_3 + 1,param_4);
  return;
}



// FUNCTION 147eb0e40 FUN_147eb0e40 body=166 status=ok
// SIG undefined FUN_147eb0e40(void)

void FUN_147eb0e40(longlong *param_1,longlong param_2,int *param_3,undefined4 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 2) == 0) {
    (**(code **)(*param_1 + 0x318))(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  if (param_3 == (int *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    iVar1 = *param_3;
    plVar2 = (longlong *)0x0;
    if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_2 + 0x150))) &&
       (plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x148) + (longlong)iVar1 * 8),
       (plVar2 != (longlong *)0x0 & DAT_14c950c29) == 1)) {
      FUN_1456cec3c(plVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147eb0ee3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x318))(plVar2,param_2,param_3 + 1,param_4);
  return;
}



// FUNCTION 147eb0eea FUN_147eb0eea body=276 status=ok
// SIG undefined FUN_147eb0eea(void)

undefined8 FUN_147eb0eea(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  if (*(short *)(param_1 + 0x28) != 0) {
    uVar1 = 0;
    do {
      FUN_140002266(&local_68,&DAT_14a392fd8,*(undefined1 *)(param_4 + uVar1));
      iVar2 = local_60 + -1;
      if (local_60 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(&local_58,local_68,iVar2);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(param_1 + 0x28));
    if (1 < (uint)uStack_50) {
      FUN_1400b22c2(&local_68,&DAT_14a179929);
      FUN_144a7dea0(param_2,&local_68,&local_58);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      goto LAB_147eb0f92;
    }
  }
  FUN_1400b22c2(param_2,"empty");
LAB_147eb0f92:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb1000 FUN_147eb1000 body=39 status=ok
// SIG undefined FUN_147eb1000(void)

bool FUN_147eb1000(longlong param_1,undefined8 param_2,void *param_3,undefined8 param_4,
                  void *param_5)

{
  int iVar1;
  
  iVar1 = memcmp(param_3,param_5,(ulonglong)*(ushort *)(param_1 + 0x28));
  return iVar1 != 0;
}



// FUNCTION 147eb1098 FUN_147eb1098 body=47 status=ok
// SIG undefined FUN_147eb1098(void)

undefined8 FUN_147eb1098(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"true";
  if (*param_4 == '\0') {
    pwVar1 = L"false";
  }
  FUN_140056680(param_2,pwVar1);
  return param_2;
}



// FUNCTION 147eb10dc FUN_147eb10dc body=119 status=ok
// SIG undefined FUN_147eb10dc(void)

ulonglong FUN_147eb10dc(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined7 uVar5;
  
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,1);
  cVar1 = FUN_144b00e3a(param_2,0,1);
  cVar2 = FUN_144b00e3a(param_1,0,1);
  if (cVar1 == cVar2) {
    uVar4 = CONCAT71(uVar5,1);
    cVar1 = FUN_144a76f74(param_2,0,1);
    cVar2 = FUN_144a76f74(param_1,0,1);
    if (cVar1 == cVar2) {
      uVar3 = FUN_147eb9ec8(param_1,param_2);
      uVar4 = (ulonglong)uVar3 ^ 1;
    }
  }
  *param_1 = *param_2;
  return uVar4 & 0xffffffff;
}



// FUNCTION 147eb1154 FUN_147eb1154 body=106 status=ok
// SIG undefined FUN_147eb1154(void)

bool FUN_147eb1154(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  lVar1 = FUN_14479d2ce(&local_28);
  local_28 = *param_5;
  lVar2 = FUN_14479d2ce(&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1 != lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb11c0 FUN_147eb11c0 body=88 status=ok
// SIG undefined FUN_147eb11c0(void)

void FUN_147eb11c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20,*(undefined8 *)(param_1 + 0x38));
  FUN_147eb10dc(param_3,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb121a FUN_147eb121a body=160 status=ok
// SIG undefined FUN_147eb121a(void)

undefined8
FUN_147eb121a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined2 *)*param_4;
  lVar1 = FUN_14479d2ce();
  if (lVar1 == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140056680(param_2,puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147eb12bc FUN_147eb12bc body=148 status=ok
// SIG undefined FUN_147eb12bc(void)

undefined8 FUN_147eb12bc(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(param_2,puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147eb1352 FUN_147eb1352 body=138 status=ok
// SIG undefined FUN_147eb1352(void)

undefined8 FUN_147eb1352(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_145b60a44();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
      }
      lVar1 = *(longlong *)(param_2 + 0x30);
      if (lVar1 == lVar2) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      if (lVar1 != 0) {
        if (*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x30) + 0x38)) {
          return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),
                          *(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x30) +
                           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 147eb13dc FUN_147eb13dc body=72 status=ok
// SIG undefined FUN_147eb13dc(void)

byte FUN_147eb13dc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  bVar1 = FUN_144729dda();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar1 ^ param_4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb144c FUN_147eb144c body=197 status=ok
// SIG undefined FUN_147eb144c(void)

undefined8 *
FUN_147eb144c(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_1400b22c2(param_2,"UNKNOWN!");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_1406f1d90(*(longlong *)(param_1 + 0x30),local_30,*param_4);
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_30);
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
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147eb1512 FUN_147eb1512 body=148 status=ok
// SIG undefined FUN_147eb1512(void)

undefined8 FUN_147eb1512(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(param_2,puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147eb15a8 FUN_147eb15a8 body=97 status=ok
// SIG undefined FUN_147eb15a8(void)

undefined8 FUN_147eb15a8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  
  if (param_2 != 0) {
    lVar2 = FUN_145b60b2e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      lVar1 = *(longlong *)(param_1 + 0x30);
      uVar3 = (undefined7)((ulonglong)(lVar2 + 0x30) >> 8);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar1);
        uVar3 = extraout_var;
      }
      return CONCAT71(uVar3,*(longlong *)(param_2 + 0x30) == lVar1);
    }
  }
  return 0;
}



// FUNCTION 147eb1658 FUN_147eb1658 body=196 status=ok
// SIG undefined FUN_147eb1658(void)

undefined8 * FUN_147eb1658(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_1400b22c2(param_2,"UNKNOWN!");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_1406f1d90(*(longlong *)(param_1 + 0x30),local_30,(longlong)param_3);
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_30);
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
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147eb176c FUN_147eb176c body=42 status=ok
// SIG undefined FUN_147eb176c(void)

undefined8 FUN_147eb176c(undefined8 param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  FUN_140002266(param_2,&DAT_149e02016,(double)*param_4);
  return param_2;
}



// FUNCTION 147eb17ec FUN_147eb17ec body=41 status=ok
// SIG undefined FUN_147eb17ec(void)

undefined8 FUN_147eb17ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  FUN_140002266(param_2,&DAT_149e02016,(double)param_4);
  return param_2;
}



// FUNCTION 147eb1840 FUN_147eb1840 body=35 status=ok
// SIG undefined FUN_147eb1840(void)

undefined8
FUN_147eb1840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  FUN_140002266(param_2,&DAT_149e063bc,*param_4);
  return param_2;
}



// FUNCTION 147eb18b2 FUN_147eb18b2 body=32 status=ok
// SIG undefined FUN_147eb18b2(void)

undefined8 FUN_147eb18b2(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,&DAT_149e063bc);
  return param_2;
}



// FUNCTION 147eb18f0 FUN_147eb18f0 body=70 status=ok
// SIG undefined FUN_147eb18f0(void)

undefined8
FUN_147eb18f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_4;
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb1938 FUN_147eb1938 body=563 status=ok
// SIG undefined FUN_147eb1938(void)

ulonglong FUN_147eb1938(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4,
                       longlong *param_5)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  undefined7 uVar7;
  wchar_t *pwVar6;
  longlong lVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined8 local_28;
  longlong local_20;
  int local_18;
  ulonglong local_10;
  
  pwVar6 = (wchar_t *)(param_4 & 0xffffffff);
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  FUN_1400021e4(&local_28,&local_20);
  uVar7 = (undefined7)((ulonglong)pwVar6 >> 8);
  switch(param_4 & 0xffffffff) {
  case 0:
    if (local_18 == (int)param_5[1]) {
      pwVar6 = (wchar_t *)CONCAT71(uVar7,1);
      if (local_18 < 2) goto LAB_147eb1b17;
      lVar8 = 0;
      while( true ) {
        uVar1 = *(ushort *)(local_20 + lVar8);
        uVar5 = (uint)uVar1;
        uVar2 = *(ushort *)(*param_5 + lVar8);
        uVar9 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147eb19cc;
          }
          iVar3 = uVar5 - uVar9;
          goto LAB_147eb1b62;
        }
        if (uVar1 == 0) break;
LAB_147eb19cc:
        lVar8 = lVar8 + 2;
      }
      iVar3 = 0;
LAB_147eb1b62:
      bVar10 = iVar3 == 0;
    }
    else {
      bVar10 = (int)param_5[1] + local_18 == 1;
    }
    break;
  case 1:
    if (local_18 == (int)param_5[1]) {
      pwVar6 = (wchar_t *)CONCAT71(uVar7,1);
      if (1 < local_18) {
        lVar8 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_20 + lVar8);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(*param_5 + lVar8);
          uVar9 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147eb1a61;
            }
            iVar3 = uVar5 - uVar9;
            goto LAB_147eb1b68;
          }
          if (uVar1 == 0) break;
LAB_147eb1a61:
          lVar8 = lVar8 + 2;
        }
        iVar3 = 0;
LAB_147eb1b68:
        bVar10 = iVar3 == 0;
        goto LAB_147eb1b51;
      }
    }
    else {
      bVar10 = (int)param_5[1] + local_18 == 1;
LAB_147eb1b51:
      pwVar6 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar6 >> 8),bVar10);
    }
    pwVar6 = (wchar_t *)((ulonglong)pwVar6 ^ 1);
    goto LAB_147eb1b17;
  case 2:
    if ((int)param_5[1] == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)*param_5;
    }
    if (pwVar6 != (wchar_t *)0x0) {
      sVar4 = wcslen(pwVar6);
      local_30 = 0xffffffff;
      local_38 = 0;
      iVar3 = FUN_1447ee042(&local_20,pwVar6,sVar4 & 0xffffffff,1);
      pwVar6 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar6 >> 8),iVar3 != -1);
      goto LAB_147eb1b17;
    }
  default:
    pwVar6 = (wchar_t *)0x0;
    goto LAB_147eb1b17;
  case 3:
    if ((int)param_5[1] == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)*param_5;
    }
    if (pwVar6 == (wchar_t *)0x0) {
      pwVar6 = (wchar_t *)&DAT_00000001;
      goto LAB_147eb1b17;
    }
    sVar4 = wcslen(pwVar6);
    local_30 = 0xffffffff;
    local_38 = 0;
    iVar3 = FUN_1447ee042(&local_20,pwVar6,sVar4 & 0xffffffff,1);
    bVar10 = iVar3 == -1;
  }
  pwVar6 = (wchar_t *)CONCAT71((int7)((ulonglong)pwVar6 >> 8),bVar10);
LAB_147eb1b17:
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pwVar6 & 0xffffffff;
}



// FUNCTION 147eb1b70 FUN_147eb1b70 body=122 status=ok
// SIG undefined FUN_147eb1b70(void)

longlong FUN_147eb1b70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  lVar1 = FUN_147eb1bea(*(undefined8 *)(param_1 + 0x20));
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x38) + -1;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar4 = 0;
  }
  FUN_1402980a2(lVar1 + 0x38,*(undefined8 *)(param_1 + 0x30),iVar4);
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_1 + 0x40);
    }
  }
  *(longlong *)(lVar1 + 0x30) = lVar2;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    uVar3 = (uint)(1 < *(int *)(param_1 + 0x38));
  }
  *(uint *)(lVar1 + 0x4c) = *(uint *)(lVar1 + 0x4c) & 0xfffffffe | uVar3;
  return lVar1;
}



// FUNCTION 147eb1bea FUN_147eb1bea body=148 status=ok
// SIG undefined FUN_147eb1bea(void)

undefined8 FUN_147eb1bea(undefined8 param_1)

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
  uVar1 = FUN_145b60b2e();
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



// FUNCTION 147eb1c84 FUN_147eb1c84 body=117 status=ok
// SIG undefined FUN_147eb1c84(void)

ulonglong FUN_147eb1c84(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined7 uVar5;
  
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,1);
  cVar1 = FUN_144b00e3a(param_2,0,1);
  cVar2 = FUN_144b00e3a(param_1,0,1);
  if (cVar1 == cVar2) {
    uVar4 = CONCAT71(uVar5,1);
    cVar1 = FUN_144a76f74(param_2,0,1);
    cVar2 = FUN_144a76f74(param_1,0,1);
    if (cVar1 == cVar2) {
      uVar3 = FUN_1401246e4(param_1,param_2);
      uVar4 = (ulonglong)uVar3 ^ 1;
    }
  }
  *param_1 = *param_2;
  return uVar4 & 0xffffffff;
}



// FUNCTION 147eb1cfa FUN_147eb1cfa body=119 status=ok
// SIG undefined FUN_147eb1cfa(void)

bool FUN_147eb1cfa(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == (undefined8 *)0x0) {
    lVar1 = 0;
  }
  else {
    local_20 = *param_3;
    lVar1 = FUN_14479d2ce();
  }
  if (param_5 == (undefined8 *)0x0) {
    lVar2 = 0;
  }
  else {
    local_20 = *param_5;
    lVar2 = FUN_14479d2ce();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1 != lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb1d72 FUN_147eb1d72 body=165 status=ok
// SIG undefined FUN_147eb1d72(void)

undefined8
FUN_147eb1d72(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_4 != (undefined8 *)0x0) {
    local_28 = (undefined2 *)*param_4;
    lVar1 = FUN_14479d2ce();
    if (lVar1 != 0) {
      local_18 = *(undefined8 *)(lVar1 + 0x18);
      FUN_1400021e4(&local_18,&local_28);
      goto LAB_147eb1dcc;
    }
  }
  FUN_140056680(&local_28,&DAT_149e01fe8);
LAB_147eb1dcc:
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140056680(param_2,puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147eb1e18 FUN_147eb1e18 body=148 status=ok
// SIG undefined FUN_147eb1e18(void)

undefined8 FUN_147eb1e18(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(param_2,puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147eb1eae FUN_147eb1eae body=174 status=ok
// SIG undefined FUN_147eb1eae(void)

undefined8
FUN_147eb1eae(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 != (undefined8 *)0x0) {
    local_20 = *param_3;
    lVar2 = FUN_14479d2ce();
    if (lVar2 != 0) {
      lVar3 = FUN_144a6c4d8();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar2 = *(longlong *)(lVar2 + 0x1c8);
        if (lVar2 == 0) {
          puVar4 = &DAT_14c8464e0;
          uVar5 = DAT_14c8464f0;
        }
        else {
          puVar4 = (undefined8 *)(lVar2 + 0x260);
          uVar5 = *(undefined8 *)(lVar2 + 0x270);
        }
        uVar1 = puVar4[1];
        *param_4 = *puVar4;
        param_4[1] = uVar1;
        param_4[2] = uVar5;
        uVar5 = CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
        goto LAB_147eb1f05;
      }
    }
  }
  uVar5 = 0;
LAB_147eb1f05:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb1f5e FUN_147eb1f5e body=415 status=ok
// SIG undefined FUN_147eb1f5e(void)

undefined8 FUN_147eb1f5e(undefined8 param_1,undefined8 param_2,double *param_3,undefined4 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  undefined8 uVar11;
  double *pdVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != (double *)0x0) {
    local_78 = *param_3;
    lVar8 = FUN_14479d2ce();
    if (lVar8 != 0) {
      lVar9 = FUN_144a6c4d8();
      if (*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) {
        dVar10 = (double)(lVar9 + 0x30);
        lVar14 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30);
        if (*(double *)(lVar14 + (longlong)*(int *)(lVar9 + 0x38) * 8) == dVar10) {
          lVar8 = *(longlong *)(lVar8 + 0x1c8);
          if (lVar8 == 0) {
            local_48 = DAT_14c846508;
            local_58 = (undefined4)DAT_14c8464f8;
            uStack_54 = DAT_14c8464f8._4_4_;
            uStack_50 = (undefined4)DAT_14c846500;
            uStack_4c = DAT_14c846500._4_4_;
          }
          else {
            dVar3 = *(double *)(lVar8 + 0x240);
            dVar4 = *(double *)(lVar8 + 0x248);
            dVar5 = *(double *)(lVar8 + 0x250);
            dVar6 = *(double *)(lVar8 + 600);
            pdVar12 = *(double **)(lVar8 + 0x228);
            local_78 = dVar3;
            uStack_70 = dVar4;
            local_68 = dVar5;
            uStack_60 = dVar6;
            if (pdVar12 == (double *)0x0) {
              lVar14 = 0x40;
              pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
              dVar10 = DAT_14c8463d8;
              *pdVar12 = DAT_14c8463d0;
              pdVar12[1] = dVar10;
              dVar10 = DAT_14c8463e8;
              pdVar12[2] = DAT_14c8463e0;
              pdVar12[3] = dVar10;
              dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
              pdVar12[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
              pdVar12[5] = dVar10;
              dVar10 = DAT_14c846508;
              pdVar12[6] = DAT_14c846508;
              *(double **)(lVar8 + 0x228) = pdVar12;
            }
            auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar12[1]);
            auVar1._0_8_ = -(ulonglong)(dVar3 != *pdVar12);
            auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar12[1]) >> 0x20);
            iVar7 = movmskpd(SUB84(dVar10,0),auVar1);
            auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar12[3]);
            auVar2._0_8_ = -(ulonglong)(dVar5 != pdVar12[2]);
            auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar12[3]) >> 0x20);
            uVar13 = movmskpd((int)lVar14,auVar2);
            if ((uVar13 & 0x3fffffff) != 0 || iVar7 != 0) {
              *(undefined4 *)(pdVar12 + 2) = (undefined4)local_68;
              *(undefined4 *)((longlong)pdVar12 + 0x14) = local_68._4_4_;
              *(undefined4 *)(pdVar12 + 3) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)pdVar12 + 0x1c) = uStack_60._4_4_;
              *(undefined4 *)pdVar12 = (undefined4)local_78;
              *(undefined4 *)((longlong)pdVar12 + 4) = local_78._4_4_;
              *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_70._4_4_;
              FUN_1448052ee(&local_78,&local_58);
              pdVar12[6] = local_48;
              pdVar12[4] = (double)CONCAT44(uStack_54,local_58);
              pdVar12[5] = (double)CONCAT44(uStack_4c,uStack_50);
            }
            local_48 = pdVar12[6];
            local_58 = *(undefined4 *)(pdVar12 + 4);
            uStack_54 = *(undefined4 *)((longlong)pdVar12 + 0x24);
            uStack_50 = *(undefined4 *)(pdVar12 + 5);
            uStack_4c = *(undefined4 *)((longlong)pdVar12 + 0x2c);
          }
          *(double *)(param_4 + 4) = local_48;
          *param_4 = local_58;
          param_4[1] = uStack_54;
          param_4[2] = uStack_50;
          param_4[3] = uStack_4c;
          uVar11 = 1;
          goto LAB_147eb1fc5;
        }
      }
    }
  }
  uVar11 = 0;
LAB_147eb1fc5:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb20fe FUN_147eb20fe body=81 status=ok
// SIG undefined FUN_147eb20fe(void)

byte FUN_147eb20fe(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  byte bVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_3 == (undefined8 *)0x0) {
    bVar1 = 0;
  }
  else {
    local_18 = *param_3;
    bVar1 = FUN_144729dda();
    bVar1 = bVar1 ^ param_4 != 0;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb2150 FUN_147eb2150 body=88 status=ok
// SIG undefined FUN_147eb2150(void)

void FUN_147eb2150(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20,*(undefined8 *)(param_1 + 0x38));
  FUN_147eb1c84(param_3,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb2300 FUN_147eb2300 body=118 status=ok
// SIG undefined FUN_147eb2300(void)

undefined8 FUN_147eb2300(undefined8 param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_4;
  dVar2 = param_4[1];
  dVar3 = param_4[2];
  if ((((dVar1 != DAT_14cb1e778) || (NAN(dVar1) || NAN(DAT_14cb1e778))) || (dVar2 != DAT_14cb1e780))
     || (((NAN(dVar2) || NAN(DAT_14cb1e780) || (dVar3 != DAT_14cb1e788)) ||
         (NAN(dVar3) || NAN(DAT_14cb1e788))))) {
    FUN_140002266(param_2,L"P=%f Y=%f R=%f",dVar1,dVar2,dVar3);
  }
  else {
    FUN_140056680(param_2,L"(invalid)");
  }
  return param_2;
}



// FUNCTION 147eb245e FUN_147eb245e body=83 status=ok
// SIG undefined FUN_147eb245e(void)

ulonglong FUN_147eb245e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  ulonglong unaff_RBX;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == *(int *)(param_3 + 1)) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if (iVar1 < 2) goto LAB_147eb2499;
    iVar1 = wcscmp(*(wchar_t **)(param_1 + 0x30),(wchar_t *)*param_3);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = *(int *)(param_3 + 1) + iVar1 == 1;
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),bVar2);
LAB_147eb2499:
  FUN_144a787a6((undefined8 *)(param_1 + 0x30),param_3);
  return (unaff_RBX ^ 1) & 0xffffffff;
}



// FUNCTION 147eb24b2 FUN_147eb24b2 body=300 status=ok
// SIG undefined FUN_147eb24b2(void)

byte FUN_147eb24b2(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  void *pvVar1;
  int iVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  int local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (wchar_t *)0x0;
  local_30 = *(int *)(param_1 + 0x38);
  lVar4 = (longlong)local_30;
  pvVar1 = *(void **)(param_1 + 0x30);
  if (lVar4 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,pvVar1,lVar4 * 2);
  }
  local_48 = (wchar_t *)0x0;
  local_40 = *(int *)(param_4 + 0x38);
  lVar4 = (longlong)local_40;
  pvVar1 = *(void **)(param_4 + 0x30);
  if (lVar4 == 0) {
    local_3c = 0;
    if (local_30 == 0) {
      bVar5 = true;
      goto LAB_147eb25a5;
    }
    iVar2 = 0;
LAB_147eb2590:
    bVar5 = local_30 + iVar2 == 1;
    pwVar3 = local_48;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar1,lVar4 * 2);
    pwVar3 = local_48;
    iVar2 = local_40;
    if (local_30 != local_40) goto LAB_147eb2590;
    bVar5 = true;
    if (1 < local_40) {
      iVar2 = wcscmp(local_38,local_48);
      bVar5 = iVar2 == 0;
    }
  }
  if (pwVar3 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar3);
  }
LAB_147eb25a5:
  if (local_38 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5 ^ 1;
}



// FUNCTION 147eb2606 FUN_147eb2606 body=83 status=ok
// SIG undefined FUN_147eb2606(void)

undefined8 * FUN_147eb2606(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  _Src = *(void **)(param_1 + 0x30);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 147eb265a FUN_147eb265a body=481 status=ok
// SIG undefined FUN_147eb265a(void)

bool FUN_147eb265a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  
  switch(param_4) {
  case 0:
    iVar3 = *(int *)(param_1 + 0x38);
    if (iVar3 == (int)param_5[1]) {
      if (iVar3 < 2) {
        return true;
      }
      lVar7 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x30) + lVar7);
        uVar5 = (uint)uVar1;
        uVar2 = *(ushort *)(*param_5 + lVar7);
        uVar8 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147eb26c7;
          }
          iVar3 = uVar5 - uVar8;
          goto LAB_147eb2831;
        }
        if (uVar1 == 0) break;
LAB_147eb26c7:
        lVar7 = lVar7 + 2;
      }
      iVar3 = 0;
LAB_147eb2831:
      bVar9 = iVar3 == 0;
    }
    else {
      bVar9 = (int)param_5[1] + iVar3 == 1;
    }
    break;
  case 1:
    iVar3 = *(int *)(param_1 + 0x38);
    if (iVar3 == (int)param_5[1]) {
      bVar9 = true;
      if (1 < iVar3) {
        lVar7 = 0;
        while( true ) {
          uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x30) + lVar7);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(*param_5 + lVar7);
          uVar8 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147eb2759;
            }
            iVar3 = uVar5 - uVar8;
            goto LAB_147eb2837;
          }
          if (uVar1 == 0) break;
LAB_147eb2759:
          lVar7 = lVar7 + 2;
        }
        iVar3 = 0;
LAB_147eb2837:
        bVar9 = iVar3 == 0;
      }
    }
    else {
      bVar9 = (int)param_5[1] + iVar3 == 1;
    }
    return (bool)(bVar9 ^ 1);
  case 2:
    if ((int)param_5[1] == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)*param_5;
    }
    if (pwVar6 != (wchar_t *)0x0) {
      sVar4 = wcslen(pwVar6);
      iVar3 = FUN_1447ee042(param_1 + 0x30,pwVar6,sVar4 & 0xffffffff,1,0,0xffffffff);
      return iVar3 != -1;
    }
  default:
    bVar9 = false;
    break;
  case 3:
    if ((int)param_5[1] == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)*param_5;
    }
    if (pwVar6 == (wchar_t *)0x0) {
      return true;
    }
    sVar4 = wcslen(pwVar6);
    iVar3 = FUN_1447ee042(param_1 + 0x30,pwVar6,sVar4 & 0xffffffff,1,0,0xffffffff);
    bVar9 = iVar3 == -1;
  }
  return bVar9;
}



// FUNCTION 147eb284e FUN_147eb284e body=34 status=ok
// SIG undefined FUN_147eb284e(void)

void FUN_147eb284e(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  if ((*(byte *)(param_2 + 0x2b) & 1) == 0) {
    puVar1 = (undefined8 *)(param_2 + 0x30);
  }
  else {
    param_3 = *(undefined8 *)(param_2 + 0x48);
    puVar1 = (undefined8 *)(param_2 + 0x40);
  }
  *param_1 = *puVar1;
  param_1[1] = param_3;
  return;
}



// FUNCTION 147eb2870 FUN_147eb2870 body=122 status=ok
// SIG undefined FUN_147eb2870(void)

void FUN_147eb2870(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x2b) & 1) == 0) {
    if ((*(longlong *)(param_1 + 0x30) != 0) && (*param_3 == *(longlong *)(param_1 + 0x30))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  else if (*param_3 == *(longlong *)(param_1 + 0x30)) {
    local_38 = (undefined4)*param_3;
    uStack_34 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_30 = (undefined4)param_3[1];
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_14688be1a(param_1 + 0x40);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb2906 FUN_147eb2906 body=139 status=ok
// SIG undefined FUN_147eb2906(void)

byte FUN_147eb2906(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = 1;
  if (param_4 != 0) {
    lVar2 = FUN_145b603de();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
       (lVar2 = *(longlong *)(param_1 + 0x30), lVar2 == *(longlong *)(param_4 + 0x30))) {
      if ((*(byte *)(param_1 + 0x2b) & 1) == 0) {
        if (lVar2 == 0) {
          return 1;
        }
        bVar1 = FUN_14470ec92(lVar2,param_3,param_5,0);
      }
      else {
        bVar1 = FUN_14688c2e2(param_1 + 0x40,param_4 + 0x40,0);
      }
      bVar1 = bVar1 ^ 1;
    }
  }
  return bVar1;
}



// FUNCTION 147eb2992 FUN_147eb2992 body=151 status=ok
// SIG undefined FUN_147eb2992(void)

void FUN_147eb2992(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = FUN_145b603de();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (lVar1 = *(longlong *)(param_1 + 0x30), lVar1 == *(longlong *)(param_4 + 0x30))) {
      if ((*(byte *)(param_1 + 0x2b) & 1) == 0) {
        if (lVar1 != 0) {
          FUN_1449b16b6(lVar1,param_3,param_5,1);
          return;
        }
      }
      else if (param_4 != param_1) {
        FUN_1401fa0f0(param_1 + 0x40,*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x48)
                     );
        return;
      }
    }
  }
  return;
}



// FUNCTION 147eb2a2a FUN_147eb2a2a body=216 status=ok
// SIG undefined FUN_147eb2a2a(void)

void FUN_147eb2a2a(longlong param_1)

{
  longlong lVar1;
  short sVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 == 0) {
    *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xfd;
    *(undefined2 *)(param_1 + 0x28) = 0;
  }
  else {
    plVar4 = *(longlong **)(lVar1 + 0x70);
    if (plVar4 != (longlong *)0x0) {
      do {
        local_58[0] = 0;
        local_58[1] = 0;
        cVar3 = (**(code **)(*plVar4 + 0x180))(plVar4,local_58,1);
        if (cVar3 != '\0') {
          *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) | 2;
          *(undefined2 *)(param_1 + 0x28) = 0;
          if (local_58[0] != 0) {
            FUN_1400020a8();
          }
          goto LAB_147eb2ab6;
        }
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        plVar4 = (longlong *)plVar4[9];
      } while (plVar4 != (longlong *)0x0);
    }
    *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xfd;
    sVar2 = (short)*(undefined4 *)(lVar1 + 0x5c);
    *(ushort *)(param_1 + 0x28) = -sVar2 & ((short)*(undefined4 *)(lVar1 + 0x58) + sVar2) - 1U;
  }
LAB_147eb2ab6:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb2b04 FUN_147eb2b04 body=122 status=ok
// SIG undefined FUN_147eb2b04(void)

undefined8 *
FUN_147eb2b04(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x2b) & 1) == 0) {
    plVar2 = param_1 + 6;
  }
  else {
    plVar2 = param_1 + 8;
    param_4 = param_1[9];
  }
  lVar1 = *plVar2;
  if (param_4 == 0 || lVar1 == 0) {
    (**(code **)(*param_1 + 0x2b8))(param_1,param_2);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1446df618(lVar1,param_2,param_4,0,param_1,0,0,1);
  }
  return param_2;
}



// FUNCTION 147eb2b7e FUN_147eb2b7e body=148 status=ok
// SIG undefined FUN_147eb2b7e(void)

undefined8 FUN_147eb2b7e(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140056680(param_2,puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147eb2c14 FUN_147eb2c14 body=71 status=ok
// SIG undefined FUN_147eb2c14(void)

undefined8 FUN_147eb2c14(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_145b603de();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x30) >> 8),
                      *(longlong *)(param_2 + 0x30) == *(longlong *)(param_1 + 0x30));
    }
  }
  return 0;
}



// FUNCTION 147eb2c5c FUN_147eb2c5c body=67 status=ok
// SIG undefined FUN_147eb2c5c(void)

void FUN_147eb2c5c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined4 *)(param_1 + 0x30);
  uStack_14 = *(undefined4 *)(param_1 + 0x34);
  uStack_10 = *(undefined4 *)(param_1 + 0x38);
  uStack_c = *(undefined4 *)(param_1 + 0x3c);
  FUN_147eb2870(local_18,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb2cd4 FUN_147eb2cd4 body=26 status=ok
// SIG undefined FUN_147eb2cd4(void)

void FUN_147eb2cd4(undefined8 param_1)

{
  FUN_1446e0b6e();
  FUN_147eb2a2a(param_1);
  return;
}



// FUNCTION 147eb2cee FUN_147eb2cee body=110 status=ok
// SIG undefined FUN_147eb2cee(void)

ulonglong FUN_147eb2cee(ulonglong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + 0x2b) & 1) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 != 0) {
      bVar2 = FUN_14470ec92(lVar1,param_3,*(undefined8 *)(param_1 + 0x38),0);
      param_1 = (ulonglong)(param_4 == 0 ^ bVar2);
    }
    uVar3 = (ulonglong)(param_4 == 1);
    if (lVar1 != 0) {
      uVar3 = param_1 & 0xff;
    }
  }
  else {
    uVar4 = FUN_14688c2e2(param_1 + 0x40,param_1 + 0x30,0);
    uVar3 = CONCAT71((int7)((ulonglong)uVar4 >> 8),(byte)uVar4 ^ param_4 == 0);
  }
  return uVar3 & 0xffffffffffffff01;
}



// FUNCTION 147eb2e54 FUN_147eb2e54 body=178 status=ok
// SIG undefined FUN_147eb2e54(void)

undefined8 FUN_147eb2e54(undefined8 param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *param_4;
  if ((((-DAT_14cb1e7b0 < dVar1) && (dVar1 < DAT_14cb1e7b0)) &&
      (dVar2 = param_4[1], -DAT_14cb1e7b8 < dVar2)) &&
     (((dVar2 < DAT_14cb1e7b8 && (dVar3 = param_4[2], -DAT_14cb1e7c0 < dVar3)) &&
      (dVar3 < DAT_14cb1e7c0)))) {
    FUN_140002266(param_2,L"X=%3.3f Y=%3.3f Z=%3.3f",dVar1,dVar2,dVar3);
    return param_2;
  }
  FUN_140056680(param_2,L"(invalid)");
  return param_2;
}



// FUNCTION 147eb3093 FUN_147eb3093 body=741 status=ok
// SIG undefined FUN_147eb3093(void)

undefined8 FUN_147eb3093(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_14475b26a();
  lVar4 = param_1[1];
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar4 != 0;
    if (lVar4 != lVar2 && bVar6) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar6 = lVar4 != 0;
        if (lVar4 == lVar2) break;
      } while (lVar4 != 0);
    }
    uVar3 = 1;
    if (bVar6) goto LAB_147eb30c5;
  }
  else {
    uVar3 = 1;
    if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_147eb30c5;
  }
  lVar2 = FUN_144a5ab96();
  lVar4 = param_1[1];
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar4 != 0;
    if (lVar4 != lVar2 && bVar6) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar6 = lVar4 != 0;
        if (lVar4 == lVar2) break;
      } while (lVar4 != 0);
    }
    uVar3 = 1;
    if (bVar6) goto LAB_147eb30c5;
  }
  else {
    uVar3 = 1;
    if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_147eb30c5;
  }
  lVar2 = FUN_144a63fc8();
  lVar4 = param_1[1];
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar4 != 0;
    if (lVar4 != lVar2 && bVar6) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar6 = lVar4 != 0;
        if (lVar4 == lVar2) break;
      } while (lVar4 != 0);
    }
    uVar3 = 1;
    if (bVar6) goto LAB_147eb30c5;
  }
  else {
    uVar3 = 1;
    if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_147eb30c5;
  }
  lVar2 = FUN_144a49f24();
  lVar4 = param_1[1];
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar4 != 0;
    if (lVar4 != lVar2 && bVar6) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar6 = lVar4 != 0;
        if (lVar4 == lVar2) break;
      } while (lVar4 != 0);
    }
    uVar3 = 1;
    if (bVar6) goto LAB_147eb30c5;
  }
  else {
    uVar3 = 1;
    if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_147eb30c5;
  }
  lVar2 = FUN_144a4a07e();
  lVar4 = param_1[1];
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar4 != 0;
    lVar5 = lVar4;
    if (lVar4 != lVar2 && bVar6) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar6 = lVar5 != 0;
        if (lVar5 == lVar2) break;
      } while (lVar5 != 0);
    }
    uVar3 = 1;
    if (bVar6) goto LAB_147eb30c5;
  }
  else {
    uVar3 = 1;
    if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_147eb30c5;
  }
  lVar2 = FUN_1446dcc8c();
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    bVar6 = lVar4 != 0;
    if (lVar4 != lVar2 && bVar6) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar6 = lVar4 != 0;
        if (lVar4 == lVar2) break;
      } while (lVar4 != 0);
    }
    if (bVar6) goto LAB_147eb31b3;
  }
  else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_147eb31b3:
    (**(code **)(*param_1 + 0x70))(param_1,local_28,0,0);
    local_30 = 0xffffffff;
    local_38 = 0;
    iVar1 = FUN_1447ee042(local_28,L"FVector",7,1);
    if (iVar1 == -1) {
      local_30 = 0xffffffff;
      local_38 = 0;
      iVar1 = FUN_1447ee042(local_28,L"FRotator",8,1);
      if (iVar1 == -1) {
        if (local_28[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_147eb332b;
      }
    }
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
    uVar3 = 1;
    goto LAB_147eb30c5;
  }
LAB_147eb332b:
  uVar3 = 0;
LAB_147eb30c5:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147eb3379 FUN_147eb3379 body=806 status=ok
// SIG undefined FUN_147eb3379(void)

undefined8 FUN_147eb3379(undefined8 param_1,longlong *param_2,float *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  undefined2 *puVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  if (param_2 == (longlong *)0x0) {
LAB_147eb353f:
    local_a8 = 0;
    uStack_a0 = 0;
    local_90 = 0;
    local_98 = 0x82000;
    (**(code **)(*param_2 + 0xf0))(param_2,&local_68,param_3,0);
  }
  else {
    lVar3 = param_2[1];
    lVar2 = FUN_1446dcc8c();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar10 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar10) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar10 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      plVar8 = (longlong *)0x0;
      bVar10 = !bVar10;
    }
    else {
      plVar8 = (longlong *)(*(ulonglong *)(lVar2 + 8) & *(ulonglong *)(lVar3 + 0x18));
      bVar10 = plVar8 == (longlong *)0x0;
    }
    if (!bVar10) {
      plVar8 = param_2;
    }
    lVar3 = param_2[1];
    lVar2 = FUN_144a64e42();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar10 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar10) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar10 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
    }
    else {
      bVar10 = (*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0;
    }
    if (plVar8 == (longlong *)0x0) {
LAB_147eb3521:
      if (!bVar10) goto LAB_147eb353f;
      FUN_1406112c4(&local_78,(double)*param_3,1);
    }
    else {
      (**(code **)(*plVar8 + 0x70))(plVar8,&local_78,0,0);
      uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
      local_a8 = local_a8 & 0xffffffff00000000;
      iVar1 = FUN_1447ee042(&local_78,L"FBlackboardKeySelector",0x16,1);
      if (CONCAT44(uStack_74,local_78) != 0) {
        FUN_1400020a8();
      }
      if (iVar1 == -1) {
        lVar3 = plVar8[0xe];
        if ((((lVar3 == 0) || (lVar2 = FUN_1459290c2(), lVar2 == 0)) ||
            (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30)) goto LAB_147eb3521;
      }
      else {
        param_3 = param_3 + 4;
      }
      FUN_1400021e4(param_3,&local_78);
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_68 = (undefined2 *)CONCAT44(uStack_74,local_78);
    uStack_60 = CONCAT44(uStack_6c,iStack_70);
  }
  lVar2 = FUN_144a5ab96();
  lVar3 = param_2[1];
  uVar6 = (undefined7)((ulonglong)param_3 >> 8);
  if (*(ulonglong *)(lVar2 + 8) == 0) {
    uVar5 = CONCAT71(uVar6,lVar3 != 0);
    uVar4 = (undefined4)uVar5;
    if (lVar3 != lVar2 && lVar3 != 0) {
      do {
        lVar3 = *(longlong *)(lVar3 + 0x30);
        uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),lVar3 != 0);
        uVar4 = (undefined4)uVar5;
        if (lVar3 == lVar2) break;
      } while (lVar3 != 0);
    }
  }
  else {
    uVar4 = (undefined4)
            CONCAT71(uVar6,(*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0);
  }
  puVar9 = local_68;
  if ((int)uStack_60 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  if (param_2 == (longlong *)0x0) {
    FUN_140056680(local_88,&DAT_149e01fe8);
  }
  else {
    FUN_1400021e4(param_2 + 4,local_88);
  }
  FUN_14170c674(&local_78,local_88,uVar4);
  if (iStack_70 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)CONCAT44(uStack_74,local_78);
  }
  FUN_140002266(param_1,L"%s: %s",puVar7,puVar9);
  if (CONCAT44(uStack_74,local_78) != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147eb36a0 FUN_147eb36a0 body=396 status=ok
// SIG undefined FUN_147eb36a0(void)

void FUN_147eb36a0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x70);
  if (plVar5 != (longlong *)0x0) {
    do {
      lVar2 = FUN_1446f8646();
      if (((plVar5[2] & 1U) == 0) || (uVar4 = plVar5[2] & 0xfffffffffffffffe, uVar4 == 0)) {
LAB_147eb37fe:
        uVar4 = 0;
      }
      else {
        if (*(int *)(*(longlong *)(uVar4 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38))
        goto LAB_147eb37fe;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30) {
          uVar4 = 0;
        }
      }
      if (uVar4 == param_2) break;
      if ((*(ushort *)((longlong)plVar5 + 0x39) & 0x120) == 0) {
        lVar2 = plVar5[1];
        lVar3 = FUN_1446dcc8c();
        if (*(ulonglong *)(lVar3 + 8) == 0) {
          bVar6 = lVar2 != 0;
          if (lVar2 != lVar3 && bVar6) {
            do {
              lVar2 = *(longlong *)(lVar2 + 0x30);
              bVar6 = lVar2 != 0;
              if (lVar2 == lVar3) break;
            } while (lVar2 != 0);
          }
          if (bVar6) goto LAB_147eb3765;
        }
        else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147eb3765:
          (**(code **)(*plVar5 + 0x70))(plVar5,local_58,0,0);
          local_60 = 0xffffffff;
          local_68 = 0;
          iVar1 = FUN_1447ee042(local_58,L"FBlackboardKeySelector");
          if (local_58[0] != 0) {
            FUN_1400020a8();
          }
          if (iVar1 != -1) {
            FUN_140721fbe(param_3,(longlong)*(int *)((longlong)plVar5 + 0x44) + param_1 + 0x10);
          }
        }
      }
      plVar5 = (longlong *)plVar5[9];
    } while (plVar5 != (longlong *)0x0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eb382d FUN_147eb382d body=373 status=ok
// SIG undefined FUN_147eb382d(void)

void FUN_147eb382d(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x70);
  if (plVar5 != (longlong *)0x0) {
    do {
      lVar2 = FUN_1446f8646();
      if (((plVar5[2] & 1U) == 0) || (uVar4 = plVar5[2] & 0xfffffffffffffffe, uVar4 == 0)) {
LAB_147eb3974:
        uVar4 = 0;
      }
      else {
        if (*(int *)(*(longlong *)(uVar4 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38))
        goto LAB_147eb3974;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30) {
          uVar4 = 0;
        }
      }
      if (uVar4 == param_2) break;
      lVar2 = plVar5[1];
      lVar3 = FUN_1446dcc8c();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar2 != 0;
        if (lVar2 != lVar3 && bVar6) {
          do {
            lVar2 = *(longlong *)(lVar2 + 0x30);
            bVar6 = lVar2 != 0;
            if (lVar2 == lVar3) break;
          } while (lVar2 != 0);
        }
        if (bVar6) goto LAB_147eb38d4;
      }
      else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147eb38d4:
        (**(code **)(*plVar5 + 0x70))(plVar5,local_58,0,0);
        local_60 = 0xffffffff;
        local_68 = 0;
        iVar1 = FUN_1447ee042(local_58,L"FBlackboardKeySelector");
        if (local_58[0] != 0) {
          FUN_1400020a8();
        }
        if (iVar1 != -1) {
          FUN_14384992e(*(int *)((longlong)plVar5 + 0x44) + param_1,param_3);
        }
      }
      plVar5 = (longlong *)plVar5[9];
    } while (plVar5 != (longlong *)0x0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eb39a3 FUN_147eb39a3 body=86 status=ok
// SIG undefined FUN_147eb39a3(void)

undefined8
FUN_147eb39a3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_28;
  local_20 = &LAB_14384a278;
  local_28 = param_4;
  FUN_147eb39fa();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb39fa FUN_147eb39fa body=603 status=ok
// SIG undefined FUN_147eb39fa(void)

undefined8 *
FUN_147eb39fa(undefined8 *param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x70);
  if (lVar5 != 0) {
    do {
      lVar2 = FUN_1446f8646();
      if (((*(ulonglong *)(lVar5 + 0x10) & 1) == 0) ||
         (uVar4 = *(ulonglong *)(lVar5 + 0x10) & 0xfffffffffffffffe, uVar4 == 0)) {
LAB_147eb3aec:
        uVar4 = 0;
      }
      else {
        if (*(int *)(*(longlong *)(uVar4 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38))
        goto LAB_147eb3aec;
        if (*(longlong *)
             (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30) {
          uVar4 = 0;
        }
      }
      if (uVar4 == param_3) break;
      if (((*(ushort *)(lVar5 + 0x39) & 0x120) == 0) &&
         (local_50 = lVar5, cVar1 = (*(code *)*param_4)(param_4[1],&local_50), cVar1 == '\0')) {
        lVar3 = FUN_140f4d408();
        lVar2 = *(longlong *)(lVar5 + 8);
        if (*(ulonglong *)(lVar3 + 8) == 0) {
          bVar6 = lVar2 != 0;
          if (lVar2 != lVar3 && bVar6) {
            do {
              lVar2 = *(longlong *)(lVar2 + 0x30);
              bVar6 = lVar2 != 0;
              if (lVar2 == lVar3) break;
            } while (lVar2 != 0);
          }
          if (!bVar6) {
LAB_147eb3b30:
            lVar3 = FUN_140019cf2();
            lVar2 = *(longlong *)(lVar5 + 8);
            if (*(ulonglong *)(lVar3 + 8) == 0) {
              bVar6 = lVar2 != 0;
              if (lVar2 != lVar3 && bVar6) {
                do {
                  lVar2 = *(longlong *)(lVar2 + 0x30);
                  bVar6 = lVar2 != 0;
                  if (lVar2 == lVar3) break;
                } while (lVar2 != 0);
              }
              if (!bVar6) {
LAB_147eb3c01:
                lVar3 = FUN_1446dcc8c();
                lVar2 = *(longlong *)(lVar5 + 8);
                if (*(ulonglong *)(lVar3 + 8) == 0) {
                  bVar6 = lVar2 != 0;
                  if (lVar2 != lVar3 && bVar6) {
                    do {
                      lVar2 = *(longlong *)(lVar2 + 0x30);
                      bVar6 = lVar2 != 0;
                      if (lVar2 == lVar3) break;
                    } while (lVar2 != 0);
                  }
                  if (!bVar6) {
LAB_147eb3c41:
                    cVar1 = FUN_147eb3093(lVar5);
                    if (cVar1 == '\0') goto LAB_147eb3aa4;
                  }
                }
                else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0)
                goto LAB_147eb3c41;
              }
            }
            else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0)
            goto LAB_147eb3c01;
          }
        }
        else if ((*(ulonglong *)(lVar2 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0)
        goto LAB_147eb3b30;
        if (1 < *(uint *)(param_1 + 1)) {
          FUN_140002184(param_1,10);
        }
        FUN_147eb3379(&local_50,lVar5,*(int *)(lVar5 + 0x44) + param_2);
        uVar4 = (ulonglong)(local_48 - 1);
        if (local_48 == 0) {
          uVar4 = 0;
        }
        FUN_1400020e8(param_1,local_50,uVar4);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
LAB_147eb3aa4:
      lVar5 = *(longlong *)(lVar5 + 0x48);
    } while (lVar5 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147eb3c56 FUN_147eb3c56 body=222 status=ok
// SIG undefined FUN_147eb3c56(void)

/* WARNING: Removing unreachable block (ram,0x000147eb3cfd) */

void FUN_147eb3c56(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < (int)param_2[1]) {
    lVar5 = 0;
    uVar3 = local_50;
    uVar4 = local_48;
    do {
      local_48 = uVar4;
      local_50 = uVar3;
      lVar2 = *(longlong *)(*param_2 + lVar5 * 8);
      FUN_147eb3379(&local_50,lVar2,*(int *)(lVar2 + 0x44) + param_1);
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(param_3,iVar1);
      }
      lVar2 = *param_3;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar2 + lVar6) = 0;
      *(undefined8 *)(lVar2 + lVar6) = local_50;
      local_50 = 0;
      uVar3 = local_50;
      *(undefined4 *)(lVar2 + 8 + lVar6) = (undefined4)local_48;
      *(undefined4 *)(lVar2 + 0xc + lVar6) = local_48._4_4_;
      local_48 = 0;
      uVar4 = local_48;
      local_48 = 0;
      local_50 = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_2[1]);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eb3d35 FUN_147eb3d35 body=166 status=ok
// SIG undefined FUN_147eb3d35(void)

void FUN_147eb3d35(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((-1 < (short)*(undefined4 *)(param_1 + 8)) && (*(longlong *)(param_1 + 0xa8) != 0)) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      uVar2 = FUN_14119d0a4(lVar1);
      local_30 = 0;
      FUN_14485c47a(&local_30,param_2);
      FUN_1406338de(uVar2,local_30);
      FUN_144a88394(lVar1);
      if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb3df2 FUN_147eb3df2 body=45 status=ok
// SIG undefined FUN_147eb3df2(void)

longlong FUN_147eb3df2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1458ee6ba(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147eb3e5c FUN_147eb3e5c body=48 status=ok
// SIG undefined FUN_147eb3e5c(void)

longlong FUN_147eb3e5c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147eb3e9e FUN_147eb3e9e body=198 status=ok
// SIG undefined FUN_147eb3e9e(void)

undefined4 FUN_147eb3e9e(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [36];
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = 1;
  if (param_2 != 0) {
    uVar3 = FUN_145a74f10();
    plVar4 = (longlong *)FUN_144718840(param_2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_23);
      (**(code **)(*param_1 + 0x18))(param_1,&local_24);
      pcVar1 = DAT_14cb1f010;
      if (DAT_14cb1f010 != (code *)0x0) {
        local_21 = local_24;
        local_22 = local_23;
        plVar4 = &DAT_14cb1f030;
        if (DAT_14cb1f020 != (longlong *)0x0) {
          plVar4 = DAT_14cb1f020;
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        uVar2 = (*pcVar1)(uVar3,&local_21,&local_22);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eb3f66 FUN_147eb3f66 body=48 status=ok
// SIG undefined FUN_147eb3f66(void)

longlong FUN_147eb3f66(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x440;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147eb3faa FUN_147eb3faa body=45 status=ok
// SIG undefined FUN_147eb3faa(void)

longlong FUN_147eb3faa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c8f798(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147eb3fde FUN_147eb3fde body=45 status=ok
// SIG undefined FUN_147eb3fde(void)

longlong FUN_147eb3fde(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145cde634(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147eb4012 FUN_147eb4012 body=48 status=ok
// SIG undefined FUN_147eb4012(void)

longlong FUN_147eb4012(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145cde634(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147eb404a FUN_147eb404a body=45 status=ok
// SIG undefined FUN_147eb404a(void)

longlong FUN_147eb404a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145d74742(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147eb40cc FUN_147eb40cc body=110 status=ok
// SIG undefined FUN_147eb40cc(void)

undefined1 FUN_147eb40cc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar4);
      *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_3 + 0x10 + lVar4);
      lVar4 = lVar4 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147eb4162 FUN_147eb4162 body=59 status=ok
// SIG undefined FUN_147eb4162(void)

undefined8 FUN_147eb4162(longlong *param_1)

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



// FUNCTION 147eb422c FUN_147eb422c body=90 status=ok
// SIG undefined FUN_147eb422c(void)

undefined1 FUN_147eb422c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3 * 8) = lVar2;
      lVar3 = lVar3 + 1;
    } while (param_4 != (int)lVar3);
  }
  return 1;
}



// FUNCTION 147eb42ae FUN_147eb42ae body=59 status=ok
// SIG undefined FUN_147eb42ae(void)

undefined8 FUN_147eb42ae(longlong *param_1)

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



// FUNCTION 147eb4350 FUN_147eb4350 body=150 status=ok
// SIG undefined FUN_147eb4350(void)

undefined8 * FUN_147eb4350(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
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
  
  *param_1 = *param_2;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar6 = *(undefined4 *)(param_2 + 2);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar8 = *(undefined4 *)(param_2 + 3);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar10 = *(undefined4 *)(param_2 + 4);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar12 = *(undefined4 *)(param_2 + 5);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar14 = *(undefined4 *)(param_2 + 6);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
  *(undefined4 *)(param_1 + 3) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar9;
  *(undefined4 *)(param_1 + 4) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar11;
  *(undefined4 *)(param_1 + 5) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar13;
  *(undefined4 *)(param_1 + 6) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar15;
  if (param_1 != param_2) {
    param_1[7] = param_2[7];
    param_2[7] = 0;
    plVar2 = (longlong *)param_2[8];
    plVar3 = (longlong *)param_1[8];
    if (plVar2 != plVar3) {
      param_2[8] = 0;
      param_1[8] = plVar2;
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
  }
  uVar4 = param_2[9];
  *(undefined8 *)((longlong)param_1 + 0x4d) = *(undefined8 *)((longlong)param_2 + 0x4d);
  param_1[9] = uVar4;
  return param_1;
}



// FUNCTION 147eb4416 FUN_147eb4416 body=54 status=ok
// SIG undefined FUN_147eb4416(void)

undefined1 FUN_147eb4416(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147eb4514(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 147eb4474 FUN_147eb4474 body=59 status=ok
// SIG undefined FUN_147eb4474(void)

undefined8 FUN_147eb4474(longlong *param_1)

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



// FUNCTION 147eb4514 FUN_147eb4514 body=99 status=ok
// SIG undefined FUN_147eb4514(void)

longlong * FUN_147eb4514(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  *(short *)(param_1 + 2) = (short)param_2[2];
  return param_1;
}



// FUNCTION 147eb4578 FUN_147eb4578 body=132 status=ok
// SIG undefined FUN_147eb4578(void)

void FUN_147eb4578(longlong param_1,int param_2)

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



// FUNCTION 147eb45fe FUN_147eb45fe body=132 status=ok
// SIG undefined FUN_147eb45fe(void)

void FUN_147eb45fe(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147eb46d4 FUN_147eb46d4 body=54 status=ok
// SIG undefined FUN_147eb46d4(void)

undefined1 FUN_147eb46d4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147e9c640(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 147eb4732 FUN_147eb4732 body=59 status=ok
// SIG undefined FUN_147eb4732(void)

undefined8 FUN_147eb4732(longlong *param_1)

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



// FUNCTION 147eb4778 FUN_147eb4778 body=37 status=ok
// SIG undefined FUN_147eb4778(void)

void FUN_147eb4778(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[5] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 5) = 0;
  }
  return;
}



// FUNCTION 147eb47ee FUN_147eb47ee body=53 status=ok
// SIG undefined FUN_147eb47ee(void)

ulonglong FUN_147eb47ee(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147eb4824 FUN_147eb4824 body=130 status=ok
// SIG undefined FUN_147eb4824(void)

void FUN_147eb4824(longlong *param_1,longlong *param_2)

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



// FUNCTION 147eb48d8 FUN_147eb48d8 body=124 status=ok
// SIG undefined FUN_147eb48d8(void)

undefined1 FUN_147eb48d8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + lVar3) = *(undefined8 *)(param_3 + lVar3);
      lVar2 = *(longlong *)(param_3 + 8 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + 8 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 8 + lVar3) = lVar2;
      *(uint *)(param_2 + 0x10 + lVar3) =
           *(uint *)(param_2 + 0x10 + lVar3) & 0xfffffffe | *(uint *)(param_3 + 0x10 + lVar3) & 1;
      lVar3 = lVar3 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147eb497c FUN_147eb497c body=59 status=ok
// SIG undefined FUN_147eb497c(void)

undefined8 FUN_147eb497c(longlong *param_1)

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



// FUNCTION 147eb4a1e FUN_147eb4a1e body=311 status=ok
// SIG undefined FUN_147eb4a1e(void)

longlong FUN_147eb4a1e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar2 = DAT_14cb1e828;
  uVar3 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar3) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    uVar5 = 0;
    plVar7 = plVar1;
    do {
      if (*plVar7 == DAT_14cb1e828) {
        if ((ushort)~(ushort)*(undefined4 *)(param_1 + 0x4c) != (ushort)uVar5) {
          if (*(longlong *)(param_1 + 0x30) == 0) goto LAB_147eb4a5f;
          iVar6 = (~(uint)uVar5 | 0xffff0000) + uVar3;
          if (iVar6 != 0) {
            memmove(plVar1 + (uVar5 & 0xffff) * 3,plVar1 + (uVar5 & 0xffff) * 3 + 3,
                    (longlong)iVar6 * 0x18);
            uVar3 = *(uint *)(param_1 + 0x40);
          }
          *(uint *)(param_1 + 0x40) = uVar3 - 1;
          FUN_147eb4c7e(param_1 + 0x38);
          lVar4 = 0;
          goto LAB_147eb4b40;
        }
        break;
      }
      uVar5 = uVar5 + 1;
      plVar7 = plVar7 + 3;
    } while (uVar3 != uVar5);
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar4 = FUN_147eb4b55(param_1);
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    iVar6 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar6 + 1U) {
      FUN_147eb4bea((longlong *)(param_1 + 0x38),iVar6);
    }
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar6 * 0x18);
    *plVar1 = lVar2;
    plVar1[1] = lVar4;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    *(byte *)(plVar1 + 2) = *(byte *)(plVar1 + 2) & 0xfe;
LAB_147eb4b40:
    FUN_14282b7b8(param_1);
    FUN_147eb0b30(param_1);
  }
  else {
LAB_147eb4a5f:
    lVar4 = 0;
  }
  return lVar4;
}



// FUNCTION 147eb4b55 FUN_147eb4b55 body=148 status=ok
// SIG undefined FUN_147eb4b55(void)

undefined8 FUN_147eb4b55(undefined8 param_1)

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
  uVar1 = FUN_1412dbfa6();
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


