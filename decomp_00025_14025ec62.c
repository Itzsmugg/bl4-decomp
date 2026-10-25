// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14025ec62 FUN_14025ec62 body=752 status=ok
// SIG undefined FUN_14025ec62(void)

void FUN_14025ec62(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined **local_b0;
  longlong local_a8;
  longlong local_98;
  float local_88;
  float local_84;
  byte local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = (longlong)*(int *)(param_1 + 0x88);
  if ((lVar5 != -1) &&
     (bVar3 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar5), (bVar3 & 0x92) == 0x82)) {
    fVar7 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar5 * 0xc);
    fVar8 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar5 * 0xc);
    if ((bVar3 & 0x40) == 0) {
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      bVar3 = 1;
      if ((*(float *)(param_1 + 0x58) == fVar8) && (!NAN(*(float *)(param_1 + 0x58)) && !NAN(fVar8))
         ) {
        bVar3 = -(*(float *)(param_1 + 0x5c) != fVar7) & 1;
      }
      *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | bVar3;
      *(float *)(param_1 + 0x58) = fVar8;
      *(float *)(param_1 + 0x5c) = fVar7;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x28);
      uVar2 = *(undefined4 *)(param_1 + 0x2c);
      local_c0 = *(undefined8 *)(param_1 + 8);
      local_b8 = *(undefined4 *)(param_1 + 0x10);
      iVar4 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + lVar5 * 0x10);
      iVar6 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar6 = 0;
      }
      if (0 < iVar6) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
        } while (iVar6 != iVar4);
      }
      iVar4 = FUN_140aad9fa(param_3);
      lVar5 = (longlong)iVar4 * 0x28 + *param_3;
      if (lVar5 == 0 || iVar4 == -1) {
        local_d8 = 0;
        uStack_d0 = 0;
      }
      else {
        local_d8 = *(undefined8 *)(lVar5 + 0x10);
        uStack_d0 = *(undefined4 *)(lVar5 + 0x18);
        uStack_cc = *(undefined4 *)(lVar5 + 0x1c);
      }
      local_68 = DAT_14c84635c;
      local_e0 = 0;
      local_e8 = 0x10;
      local_f8 = uVar1;
      local_f0 = uVar2;
      FUN_140a9b934(&local_b0,&local_68,&local_d8,&local_c0);
      local_b0 = &PTR_FUN_149f57478;
      local_78 = 0x40dd0c55447a0000;
      uStack_70 = 0;
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      if (1.0 <= fVar8) {
        fVar8 = 1.0;
      }
      if (fVar8 <= 0.0) {
        fVar8 = 0.0;
      }
      bVar3 = 1;
      if ((local_88 == fVar8) && (!NAN(local_88) && !NAN(fVar8))) {
        bVar3 = -(local_84 != fVar7) & 1;
      }
      local_80 = local_80 | bVar3;
      local_88 = fVar8;
      local_84 = fVar7;
      FUN_14025ef54(param_1 + 0x30,&local_b0);
      *(undefined4 *)(param_1 + 0x68) = (undefined4)local_78;
      *(undefined4 *)(param_1 + 0x6c) = local_78._4_4_;
      *(undefined4 *)(param_1 + 0x70) = (undefined4)uStack_70;
      *(undefined4 *)(param_1 + 0x74) = uStack_70._4_4_;
      local_b0 = &PTR_FUN_149f57480;
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14025ef54 FUN_14025ef54 body=129 status=ok
// SIG undefined FUN_14025ef54(void)

longlong FUN_14025ef54(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined8 *)(param_2 + 0x10) = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 14025efd6 FUN_14025efd6 body=389 status=ok
// SIG undefined FUN_14025efd6(void)

undefined8 *
FUN_14025efd6(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             int param_5,int param_6,uint param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  *param_1 = &PTR_FUN_149f57480;
  plVar1 = param_1 + 1;
  plVar2 = param_1 + 3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = *param_2;
  *(undefined1 *)(param_1 + 6) = 1;
  iVar3 = (int)param_4[1];
  if ((((longlong)iVar3 < 1) || (param_6 < 1)) || ((int)param_3[1] != param_6)) {
    *(undefined4 *)(param_1 + 2) = 1;
    FUN_1447403be(plVar1,0);
    *(undefined1 *)param_1[1] = 0;
    iVar3 = *(int *)(param_1 + 4);
    *(int *)(param_1 + 4) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x24) == iVar3) {
      FUN_14475e4ac(plVar2,iVar3);
    }
    *(undefined4 *)(*plVar2 + (longlong)iVar3 * 4) = 0;
  }
  else {
    *(int *)(param_1 + 2) = iVar3;
    lVar5 = 0;
    FUN_1447403be(plVar1,0);
    lVar4 = 0;
    do {
      lVar6 = 0;
      fVar7 = 0.0;
      do {
        fVar8 = *(float *)(*param_3 +
                          ((longlong)*(int *)(*param_4 + lVar5 + lVar6 * 4) - (longlong)param_5) * 4
                          );
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        if (fVar8 <= 0.0) {
          fVar8 = 0.0;
        }
        fVar7 = fVar7 + fVar8;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      *(char *)(*plVar1 + lVar4) = (char)(int)((fVar7 / 3.0) * (float)(int)(param_7 - 1));
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0xc;
    } while (lVar4 != iVar3);
    iVar3 = *(int *)(param_1 + 4);
    *(uint *)(param_1 + 4) = param_7 + iVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0x24) - iVar3) < param_7) {
      FUN_14475e4ac(plVar2);
    }
    memset((void *)((longlong)iVar3 * 4 + *plVar2),0,(longlong)(int)param_7 << 2);
  }
  return param_1;
}



// FUNCTION 14025f15c FUN_14025f15c body=61 status=ok
// SIG undefined FUN_14025f15c(void)

longlong FUN_14025f15c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14025f1a8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_14025f199(lVar2);
  return lVar2;
}



// FUNCTION 14025f199 FUN_14025f199 body=15 status=ok
// SIG undefined FUN_14025f199(void)

void FUN_14025f199(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14025f1a8 FUN_14025f1a8 body=269 status=ok
// SIG undefined FUN_14025f1a8(void)

void FUN_14025f1a8(longlong param_1,int param_2)

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



// FUNCTION 14025f2b6 FUN_14025f2b6 body=186 status=ok
// SIG undefined FUN_14025f2b6(void)

longlong FUN_14025f2b6(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_14025f370(param_1,param_2 + 0x2e0);
    if (lVar2 != 0) {
      return lVar2;
    }
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      plVar3 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar3 = (longlong *)param_1[8];
      }
      iVar4 = *(int *)((longlong)plVar3 +
                      (ulonglong)((int)param_1[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
      if (iVar4 != -1) {
        while (lVar2 = *param_1 + (longlong)iVar4 * 0x20,
              *(ulonglong *)(*param_1 + (longlong)iVar4 * 0x20) != param_2) {
          iVar4 = *(int *)(lVar2 + 0x18);
          if (iVar4 == -1) {
            return 0;
          }
        }
        if (lVar2 != -8 && lVar2 != 0) {
          lVar2 = FUN_14025f370(param_1);
          return lVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14025f370 FUN_14025f370 body=163 status=ok
// SIG undefined FUN_14025f370(void)

longlong FUN_14025f370(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar2 = param_2[1];
  uVar5 = *param_2 + 0x9ae16a3b2f90404f;
  uVar5 = ((uVar5 << 0x27 | uVar5 >> 0x19) + uVar2) * -0x651e95c4d06fbf91;
  uVar2 = (*param_2 + (uVar2 << 0x1b | uVar2 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f ^
          uVar5) * -0x651e95c4d06fbf91;
  lVar3 = (uVar2 >> 0x2f ^ uVar5 ^ uVar2) * -0x651e95c4d06fbf91;
  iVar1 = FUN_14025f414((longlong *)(param_1 + 0x50),
                        ((uint)((ulonglong)lVar3 >> 0x2f) ^ (uint)lVar3) * 0x2f90406f,param_2);
  if (iVar1 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)iVar1 * 0x24 + *(longlong *)(param_1 + 0x50);
  }
  lVar4 = lVar3 + 0x10;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  lVar3 = lVar4 + 4;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 14025f414 FUN_14025f414 body=113 status=ok
// SIG undefined FUN_14025f414(void)

int FUN_14025f414(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((((*(int *)(lVar2 + lVar4 * 0x24) == *param_3) &&
             (*(int *)(lVar2 + 4 + lVar4 * 0x24) == param_3[1])) &&
            (*(int *)(lVar2 + 8 + lVar4 * 0x24) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4 * 0x24) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + lVar4 * 0x24 + 0x1c);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14025f485 FUN_14025f485 body=136 status=ok
// SIG undefined FUN_14025f485(void)

undefined8 * FUN_14025f485(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  FUN_14025f50e(puVar1,L"HairMaterial",0,param_1,0,0);
  *puVar1 = &PTR_FUN_14a228a50;
  *(undefined4 *)(puVar1 + 10) = 0x11;
  *(undefined1 *)(puVar1 + 0x10) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[8] = DAT_14c9d9e20;
  puVar1[9] = DAT_14c9c0d98;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  return puVar1;
}



// FUNCTION 14025f50e FUN_14025f50e body=265 status=ok
// SIG undefined FUN_14025f50e(void)

undefined8 *
FUN_14025f50e(undefined8 *param_1,wchar_t *param_2,undefined8 param_3,int param_4,undefined8 param_5
             ,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong local_50;
  undefined8 *local_48;
  
  uVar3 = 0xffffffff;
  if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
     (DAT_14cafb358 == 2)) {
    uVar1 = (&DAT_14c9c0cec)[2 < param_4];
    if (0 < (int)uVar1) {
      local_48 = (undefined8 *)(&DAT_14cafe438 + (ulonglong)(2 < param_4) * 0x540);
      local_50 = 0;
      do {
        iVar2 = wcscmp((wchar_t *)*local_48,param_2);
        if (iVar2 == 0) {
          uVar3 = (undefined4)local_50;
          break;
        }
        local_50 = local_50 + 1;
        local_48 = local_48 + 2;
      } while (uVar1 != local_50);
    }
  }
  *(undefined4 *)(param_1 + 1) = uVar3;
  *param_1 = &PTR_LAB_14a28c900;
  *(undefined2 *)(param_1 + 2) = 0x3a3a;
  param_1[3] = param_3;
  *(int *)(param_1 + 4) = param_4;
  param_1[5] = param_5;
  param_1[6] = param_6;
  *(undefined1 *)(param_1 + 7) = 0x3a;
  return param_1;
}



// FUNCTION 14025f618 FUN_14025f618 body=85 status=ok
// SIG undefined FUN_14025f618(void)

void FUN_14025f618(longlong param_1,int param_2)

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
  FUN_1401f5c02();
  return;
}



// FUNCTION 14025f66e FUN_14025f66e body=113 status=ok
// SIG undefined FUN_14025f66e(void)

void FUN_14025f66e(void *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  if (1 < (uint)param_3) {
    FUN_14025f6e0((void *)((longlong)param_1 + 8),param_2,param_3,param_4);
    return;
  }
  _Src = (void *)((longlong)param_1 + 8);
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    _Src = *(void **)((longlong)param_1 + 0x18);
  }
  if (_Src != (void *)0x0) {
    memmove(param_1,_Src,(longlong)(int)param_2 << 2);
    if (*(longlong *)((longlong)param_1 + 0x18) != 0) {
      FUN_14025f766((longlong)param_1 + 0x18,0,0,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 14025f6e0 FUN_14025f6e0 body=133 status=ok
// SIG undefined FUN_14025f6e0(void)

void FUN_14025f6e0(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_14025f766((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_14025f766((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 14025f766 FUN_14025f766 body=469 status=ok
// SIG undefined FUN_14025f766(void)

void FUN_14025f766(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

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
LAB_14025f896:
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
LAB_14025f8d3:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_14025f7d0;
LAB_14025f7c5:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_14025f7d0:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa5) goto code_r0x00014025f7fd;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14025f853:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_14025f8d3;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14025f896;
code_r0x00014025f7fd:
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
      goto LAB_14025f853;
    }
  }
  goto LAB_14025f7c5;
}



// FUNCTION 14025f93c FUN_14025f93c body=227 status=ok
// SIG undefined FUN_14025f93c(void)

ulonglong * FUN_14025f93c(longlong param_1,ulonglong *param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  param_2[1] = 0;
  param_2[2] = 0;
  uVar5 = FUN_14480c900(0,param_3);
  bVar4 = FUN_144914152(param_1);
  uVar6 = *(byte *)(param_1 + 0x6e) & 8;
  uVar7 = 0;
  if ((DAT_14c761ae8 - 1U < 3) && (uVar7 = 0, (*(byte *)(param_1 + 0x78) & 0x40) != 0)) {
    uVar7 = 0x20;
  }
  cVar1 = *(char *)(param_1 + 0x82);
  bVar2 = *(byte *)(param_1 + 0x72);
  uVar3 = *(ulonglong *)(param_1 + 0x2b0);
  *param_2 = uVar3;
  if ((((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0)) ||
     ((*(byte *)(param_1 + 0x75) & 200) != 0)) {
    uVar8 = 0;
    if ((uVar3 >> 0x21 & 1) != 0) {
      uVar8 = uVar6 << 1;
    }
  }
  else {
    uVar8 = 0;
  }
  *(uint *)(param_2 + 2) =
       uVar6 << 4 | (bVar2 & 1) << 0xe | uVar7 |
       (uint)(cVar1 != '\x01') << 0xd | (uVar5 & 0xff) * 4 + (uint)bVar4 * 8 | uVar8 | 2;
  return param_2;
}



// FUNCTION 14025fa20 FUN_14025fa20 body=3709 status=ok
// SIG undefined FUN_14025fa20(void)

void FUN_14025fa20(code ******param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  void *_Src;
  byte bVar3;
  code *******pppppppcVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  undefined8 ******ppppppuVar7;
  ulonglong uVar8;
  uint uVar9;
  DWORD DVar10;
  undefined8 uVar11;
  int iVar12;
  DWORD dwTlsIndex;
  DWORD DVar13;
  int iVar14;
  LPVOID pvVar15;
  code ******ppppppcVar16;
  void *pvVar17;
  code *****pppppcVar18;
  code *******pppppppcVar19;
  undefined8 ******ppppppuVar20;
  void *pvVar21;
  code ******ppppppcVar22;
  longlong lVar23;
  code *****pppppcVar24;
  bool bVar25;
  undefined1 auStack_178 [44];
  int local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 uStack_128;
  code ******local_120;
  code ****local_118;
  int local_10c;
  undefined8 local_108;
  longlong *local_100;
  code ****local_f8;
  code ****ppppcStack_f0;
  int local_e8;
  undefined8 ******local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  code ******local_98;
  code ****ppppcStack_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  pppppppcVar4 = *(code ********)(*param_2 + 8);
  bVar3 = *(byte *)((longlong)pppppppcVar4 + 0x2c);
  *(byte *)((longlong)pppppppcVar4 + 0x2c) = bVar3 & 0xfe;
  iVar12 = 0;
  if ((*(byte *)((longlong)pppppppcVar4 + 0x2a) & 0x10) != 0) {
    param_4 = (longlong *)0x0;
  }
  local_e0 = (undefined8 ******)param_1[0xe];
  local_c0 = *(int *)(param_1 + 0x11);
  local_d0 = *(undefined4 *)(param_1 + 0xf);
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x7c);
  uStack_c8 = *(undefined4 *)(param_1 + 0x10);
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x84);
  local_d8 = param_3;
  if (((ulonglong)pppppppcVar4[5] & 1) == 0) {
    local_f8 = (code ****)param_1[0xf];
    ppppcStack_f0 = (code ****)param_1[0x10];
    local_e8 = *(int *)(param_1 + 0x11);
    local_78 = 0;
    local_70 = 0;
    local_98 = (code ******)0x0;
    ppppcStack_90 = (code ****)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_108 = (undefined8 *******)local_e0;
    local_100 = param_4;
    if (param_4 != (longlong *)0x0) {
      local_148 = (code *******)&local_108;
      local_140 = (undefined8 *******)0xffffffffffffffff;
      FUN_14000a0a0(&local_148);
      if (-1 < (int)(uint)local_140) {
        do {
          pppppcVar24 = (code *****)local_148[1];
          if (*(int *)(pppppcVar24 + 5) <= (int)(uint)local_140) break;
          pppppcVar18 = pppppcVar24 + 2;
          if ((code *****)pppppcVar24[4] != (code *****)0x0) {
            pppppcVar18 = (code *****)pppppcVar24[4];
          }
          if ((*(uint *)((longlong)pppppcVar18 + (ulonglong)((uint)local_140 >> 5) * 4) >>
               ((uint)local_140 & 0x1f) & 1) == 0) break;
          iVar12 = FUN_140260ba4(&local_e0,
                                 (longlong)(int)(uint)local_140 * (longlong)local_e8 + *local_100,0)
          ;
          if (iVar12 == -1) {
            local_b8 = (undefined8 *******)CONCAT44(local_b8._4_4_,(uint)local_140);
            FUN_144984904(&local_98,&local_120,&local_b8,0);
          }
          FUN_14000a0a0(&local_148);
        } while (-1 < (int)(uint)local_140);
      }
      iVar12 = (int)ppppcStack_90 - local_64;
    }
    local_10c = iVar12;
    FUN_1449b19ea(*param_2);
    local_118 = (code ****)param_1[0xe];
    local_120 = (code ******)pppppppcVar4;
    if ((param_1 == (code ******)0x0) || (pppppppcVar4[0xe] == param_1)) {
      FUN_144a60fb8(&local_120);
    }
    else {
      local_118 = (code ****)0x0;
    }
    local_b8 = (undefined8 *******)0x100000000;
    uStack_b0 = local_88;
    local_a8 = 0xffffffff;
    uStack_a0 = 0;
    if (local_70 == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_b8);
      iVar12 = local_70;
    }
    uStack_128 = CONCAT44(uStack_9c,uStack_a0);
    local_130 = local_a8;
    uVar11 = local_130;
    local_140._0_4_ = (uint)local_b8;
    local_140._4_4_ = local_b8._4_4_;
    uStack_138 = (uint)uStack_b0;
    uStack_134 = uStack_b0._4_4_;
    local_130._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_148 = &local_98;
    if ((local_130._4_4_ != iVar12) || (uStack_b0 != local_88)) {
      iVar14 = local_130._4_4_;
      local_130 = uVar11;
      do {
        if ((int)local_100[1] == *(int *)((longlong)local_100 + 0x34)) {
          lVar23 = 0;
        }
        else {
          lVar23 = (longlong)local_e8 *
                   (longlong)*(int *)((longlong)*local_148 + (longlong)iVar14 * 0xc) + *local_100;
        }
        (*(code *)(*param_1[0xe])[0x1a])(param_1[0xe],param_2,lVar23,0);
        local_130 = CONCAT44(local_130._4_4_,(uint)local_130 & ~local_140._4_4_);
        FUN_1449c0562(&local_140);
        iVar14 = local_130._4_4_;
        uVar11 = local_130;
      } while (local_148 != &local_98 ||
               ((undefined1 *)CONCAT44(uStack_134,uStack_138) != local_88 ||
               local_130._4_4_ != iVar12));
    }
    local_130 = uVar11;
    FUN_1449b192c(&local_120);
    if (param_4 == (longlong *)0x0) {
      local_120 = (code ******)
                  CONCAT44(local_120._4_4_,(int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34));
      FUN_1449b19ea(*param_2);
      local_140 = (undefined8 *******)param_1[0xe];
      local_148 = pppppppcVar4;
      if ((param_1 == (code ******)0x0) || (pppppppcVar4[0xe] == param_1)) {
        FUN_144a60fb8(&local_148);
      }
      else {
        local_140 = (undefined8 *******)0x0;
      }
      local_b8 = &local_e0;
      uStack_b0 = (undefined1 *)0xffffffffffffffff;
      FUN_14000a0a0(&local_b8);
      if (-1 < (int)(uint)uStack_b0) {
        do {
          ppppppuVar7 = local_b8[1];
          if (*(int *)(ppppppuVar7 + 5) <= (int)(uint)uStack_b0) break;
          ppppppuVar20 = ppppppuVar7 + 2;
          if ((undefined8 ******)ppppppuVar7[4] != (undefined8 ******)0x0) {
            ppppppuVar20 = (undefined8 ******)ppppppuVar7[4];
          }
          if ((*(uint *)((longlong)ppppppuVar20 + (ulonglong)((uint)uStack_b0 >> 5) * 4) >>
               ((uint)uStack_b0 & 0x1f) & 1) == 0) break;
          (*(code *)(*param_1[0xe])[0x1a])
                    (param_1[0xe],param_2,
                     (longlong)(int)(uint)uStack_b0 * (longlong)local_c0 + *local_d8,0);
          FUN_14000a0a0(&local_b8);
        } while (-1 < (int)(uint)uStack_b0);
      }
      pppppppcVar19 = (code *******)&local_148;
    }
    else {
      FUN_1402226aa(&local_98);
      local_148 = (code *******)&local_e0;
      local_140 = (undefined8 *******)0xffffffffffffffff;
      FUN_14000a0a0(&local_148);
      if (-1 < (int)(uint)local_140) {
        do {
          ppppppuVar7 = (undefined8 ******)local_148[1];
          if (*(int *)(ppppppuVar7 + 5) <= (int)(uint)local_140) break;
          ppppppuVar20 = ppppppuVar7 + 2;
          if ((undefined8 ******)ppppppuVar7[4] != (undefined8 ******)0x0) {
            ppppppuVar20 = (undefined8 ******)ppppppuVar7[4];
          }
          if ((*(uint *)((longlong)ppppppuVar20 + (ulonglong)((uint)local_140 >> 5) * 4) >>
               ((uint)local_140 & 0x1f) & 1) == 0) break;
          iVar12 = FUN_140260ba4(&local_108,
                                 (longlong)(int)(uint)local_140 * (longlong)local_c0 + *local_d8,0);
          if ((iVar12 < 0) || ((longlong)iVar12 * (longlong)local_e8 + *local_100 == 0)) {
            local_b8 = (undefined8 *******)CONCAT44(local_b8._4_4_,(uint)local_140);
            FUN_144984904(&local_98,&local_120,&local_b8,0);
          }
          FUN_14000a0a0(&local_148);
        } while (-1 < (int)(uint)local_140);
      }
      local_14c = (int)ppppcStack_90 - local_64;
      FUN_1449b19ea(*param_2);
      local_118 = (code ****)param_1[0xe];
      if ((param_1 == (code ******)0x0) || (pppppppcVar4[0xe] == param_1)) {
        local_120 = (code ******)pppppppcVar4;
        FUN_144a60fb8(&local_120);
      }
      else {
        local_118 = (code ****)0x0;
        local_120 = (code ******)pppppppcVar4;
      }
      local_b8 = (undefined8 *******)&DAT_100000000;
      uStack_b0 = local_88;
      local_a8 = 0xffffffff;
      uStack_a0 = 0;
      if (local_70 == 0) {
        iVar12 = 0;
      }
      else {
        FUN_1449c0562(&local_b8);
        iVar12 = local_70;
      }
      uStack_128 = CONCAT44(uStack_9c,uStack_a0);
      local_130 = local_a8;
      uVar11 = local_130;
      local_140 = local_b8;
      uStack_138 = (uint)uStack_b0;
      uStack_134 = uStack_b0._4_4_;
      local_130._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
      local_148 = &local_98;
      if ((local_130._4_4_ != iVar12) || (uStack_b0 != local_88)) {
        iVar14 = local_130._4_4_;
        local_130 = uVar11;
        do {
          (*(code *)(*param_1[0xe])[0x1a])
                    (param_1[0xe],param_2,
                     (longlong)local_c0 *
                     (longlong)*(int *)((longlong)*local_148 + (longlong)iVar14 * 0xc) + *local_d8,0
                    );
          local_130 = CONCAT44(local_130._4_4_,(uint)local_130 & ~local_140._4_4_);
          FUN_1449c0562(&local_140);
          iVar14 = local_130._4_4_;
          uVar11 = local_130;
        } while (local_148 != &local_98 ||
                 ((undefined1 *)CONCAT44(uStack_134,uStack_138) != local_88 ||
                 local_130._4_4_ != iVar12));
      }
      local_130 = uVar11;
      pppppppcVar19 = &local_120;
    }
    FUN_1449b192c(pppppppcVar19);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a082e(&local_98);
    goto LAB_14025fbd8;
  }
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar13 = 0xffffffff;
    LOCK();
    bVar25 = DAT_14c75ec34 != 0xffffffff;
    DVar10 = dwTlsIndex;
    if (bVar25) {
      DVar13 = DAT_14c75ec34;
      DVar10 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar10;
    UNLOCK();
    if (bVar25) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar13;
    }
  }
  pvVar15 = TlsGetValue(dwTlsIndex);
  if (pvVar15 == (LPVOID)0x0) {
    pvVar15 = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(pvVar15);
    FUN_140fddf04(pvVar15);
    TlsSetValue(dwTlsIndex,pvVar15);
  }
  uVar9 = local_148._4_4_;
  if (param_4 == (longlong *)0x0) {
    local_148 = (code *******)((ulonglong)local_148 & 0xffffffff00000000);
    plVar5 = *(longlong **)(*param_2 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    piVar1 = (int *)*puVar6 + 1;
    if ((int *)puVar6[1] < piVar1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_148,4);
      }
      else {
        FUN_14572512c();
      }
LAB_14025fc5b:
      iVar12 = (int)local_148;
    }
    else {
      iVar12 = *(int *)*puVar6;
      local_148 = (code *******)CONCAT44(uVar9,iVar12);
      *puVar6 = (ulonglong)piVar1;
    }
    if (iVar12 != 0) {
      pvVar17 = (void *)FUN_14001cc68((longlong)*(int *)(param_1 + 0x10));
      ppppcStack_90 = (code ****)param_1[0xe];
      if ((*(byte *)((longlong)ppppcStack_90 + 0x39) & 2) == 0) {
        (*(code *)(*ppppcStack_90)[0x2c])(ppppcStack_90,pvVar17);
        ppppcStack_90 = (code ****)param_1[0xe];
      }
      else {
        memset(pvVar17,0,
               (longlong)*(int *)(ppppcStack_90 + 6) *
               (longlong)*(int *)((longlong)ppppcStack_90 + 0x34));
      }
      if ((param_1 == (code ******)0x0) || (pppppppcVar4[0xe] == param_1)) {
        local_98 = (code ******)pppppppcVar4;
        FUN_144a60fb8(&local_98);
      }
      else {
        ppppcStack_90 = (code ****)0x0;
        local_98 = (code ******)pppppppcVar4;
      }
      iVar12 = (int)local_148;
      while (iVar12 != 0) {
        (*(code *)(*param_1[0xe])[0x1a])(param_1[0xe],param_2,pvVar17,0);
        iVar12 = (int)local_148 + -1;
        local_148 = (code *******)CONCAT44(local_148._4_4_,iVar12);
      }
      pppppcVar24 = param_1[0xe];
      if ((*(byte *)((longlong)pppppcVar24 + 0x3c) & 0x10) == 0) {
        (*(code *)(*pppppcVar24)[0x29])(pppppcVar24,pvVar17);
      }
      FUN_1400020a8(pvVar17);
      FUN_1449b192c(&local_98);
    }
    uVar8 = (ulonglong)local_98 >> 0x20;
    local_98 = (code ******)((ulonglong)local_98 & 0xffffffff00000000);
    plVar5 = *(longlong **)(*param_2 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    puVar2 = (undefined4 *)*puVar6 + 1;
    if ((undefined4 *)puVar6[1] < puVar2) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_98,4);
      }
      else {
        FUN_14572512c(plVar5,&local_98);
      }
    }
    else {
      local_98 = (code ******)CONCAT44((int)uVar8,*(undefined4 *)*puVar6);
      *puVar6 = (ulonglong)puVar2;
    }
    FUN_1402608fa(&local_e0,(ulonglong)local_98 & 0xffffffff);
    if ((int)local_98 != 0) {
      do {
        iVar12 = FUN_14026089e(&local_e0);
        (*(code *)(*param_1[0xe])[0x1a])
                  (param_1[0xe],param_2,(longlong)iVar12 * (longlong)local_c0 + *local_d8,0);
        iVar12 = (int)local_98 + -1;
        local_98 = (code ******)CONCAT44(local_98._4_4_,iVar12);
      } while (iVar12 != 0);
    }
  }
  else {
    (*(code *)(*param_1)[0x20])(param_1,param_3,param_4,1);
    uVar9 = local_148._4_4_;
    local_148 = (code *******)((ulonglong)local_148._4_4_ << 0x20);
    plVar5 = *(longlong **)(*param_2 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    puVar2 = (undefined4 *)*puVar6 + 1;
    if ((undefined4 *)puVar6[1] < puVar2) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_148,4);
      }
      else {
        FUN_14572512c();
      }
    }
    else {
      local_148 = (code *******)CONCAT44(uVar9,*(undefined4 *)*puVar6);
      *puVar6 = (ulonglong)puVar2;
    }
    if ((int)local_d8[1] == *(int *)((longlong)local_d8 + 0x34)) goto LAB_14025fc5b;
    if ((int)local_148 == 0) {
      pvVar17 = (void *)0x0;
    }
    else {
      pvVar17 = (void *)FUN_14001cc68((longlong)*(int *)(param_1 + 0x10));
      pppppcVar24 = param_1[0xe];
      if ((*(byte *)((longlong)pppppcVar24 + 0x39) & 2) == 0) {
        (*(code *)(*pppppcVar24)[0x2c])(pppppcVar24,pvVar17);
        pppppcVar24 = param_1[0xe];
      }
      else {
        memset(pvVar17,0,
               (longlong)*(int *)(pppppcVar24 + 6) *
               (longlong)*(int *)((longlong)pppppcVar24 + 0x34));
      }
      if ((param_1 == (code ******)0x0) || (pppppppcVar4[0xe] == param_1)) {
        local_98 = (code ******)pppppppcVar4;
        ppppcStack_90 = (code ****)pppppcVar24;
        FUN_144a60fb8(&local_98);
      }
      else {
        ppppcStack_90 = (code ****)0x0;
        pppppcVar24 = (code *****)0x0;
        local_98 = (code ******)pppppppcVar4;
      }
      if ((int)local_148 != 0) {
        do {
          (*(code *)(*param_1[0xe])[0x1a])(param_1[0xe],param_2,pvVar17,0);
          iVar12 = FUN_140260ba4(&local_e0,pvVar17,0);
          if (iVar12 != -1) {
            FUN_140260c56(&local_e0,iVar12,1);
          }
          iVar12 = (int)local_148 + -1;
          local_148 = (code *******)CONCAT44(local_148._4_4_,iVar12);
          pppppcVar24 = (code *****)ppppcStack_90;
        } while (iVar12 != 0);
      }
      if (pppppcVar24 != (code *****)0x0) {
        if ((*local_98)[0x46] == (code ****)&LAB_1449b19a2) {
          ppppppcVar16 = (code ******)local_98[0xf];
          *(int *)(ppppppcVar16 + 9) = *(int *)(ppppppcVar16 + 9) + -1;
          iVar12 = *(int *)(ppppppcVar16 + 10) + 1;
          do {
            iVar14 = iVar12;
            iVar12 = 1;
          } while (iVar14 == 0);
          *(int *)(ppppppcVar16 + 10) = iVar14;
          ppppppcVar16 = (code ******)local_98[0xf];
          if ((longlong)*(int *)(ppppppcVar16 + 9) < 1) {
            ppppppcVar16 = (code ******)0x0;
          }
          else {
            ppppppcVar22 = (code ******)ppppppcVar16[8];
            if ((code ******)ppppppcVar16[8] == (code ******)0x0) {
              ppppppcVar22 = ppppppcVar16;
            }
            ppppppcVar16 = (code ******)ppppppcVar22[(longlong)*(int *)(ppppppcVar16 + 9) + -1];
          }
          local_98[0xe] = (code *****)ppppppcVar16;
        }
        else {
          (*(code *)(*local_98)[0x46])
                    (local_98,pppppcVar24,(uint)((ulonglong)pppppcVar24[7] >> 0x23) & 1);
        }
      }
    }
    uVar9 = local_108._4_4_;
    local_108 = (undefined8 *******)((ulonglong)local_108._4_4_ << 0x20);
    plVar5 = *(longlong **)(*param_2 + 8);
    puVar6 = (ulonglong *)plVar5[1];
    puVar2 = (undefined4 *)*puVar6 + 1;
    if ((undefined4 *)puVar6[1] < puVar2) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,&local_108,4);
      }
      else {
        FUN_14572512c();
      }
    }
    else {
      local_108 = (undefined8 *******)CONCAT44(uVar9,*(undefined4 *)*puVar6);
      *puVar6 = (ulonglong)puVar2;
    }
    if ((pvVar17 == (void *)0x0) && ((int)local_108 != 0)) {
      pvVar17 = (void *)FUN_14001cc68((longlong)*(int *)(param_1 + 0x10));
      pppppcVar24 = param_1[0xe];
      if ((*(byte *)((longlong)pppppcVar24 + 0x39) & 2) == 0) {
        (*(code *)(*pppppcVar24)[0x2c])(pppppcVar24,pvVar17);
      }
      else {
        memset(pvVar17,0,
               (longlong)*(int *)(pppppcVar24 + 6) *
               (longlong)*(int *)((longlong)pppppcVar24 + 0x34));
      }
    }
    pppppcVar24 = param_1[0xe];
    if ((param_1 == (code ******)0x0) || (pppppppcVar4[0xe] == param_1)) {
      local_98 = (code ******)pppppppcVar4;
      ppppcStack_90 = (code ****)pppppcVar24;
      FUN_144a60fb8(&local_98);
    }
    else {
      ppppcStack_90 = (code ****)0x0;
      pppppcVar24 = (code *****)0x0;
      local_98 = (code ******)pppppppcVar4;
    }
    if ((int)local_108 != 0) {
      do {
        (*(code *)(*param_1[0xe])[0x1a])(param_1[0xe],param_2,pvVar17,0);
        iVar12 = FUN_140260ba4(&local_e0,pvVar17,0);
        if (iVar12 == -1) {
          iVar12 = FUN_14026089e(&local_e0);
          pvVar21 = (void *)((longlong)iVar12 * (longlong)local_c0 + *local_d8);
          if (pvVar21 != pvVar17) {
            pppppcVar24 = param_1[0xe];
            _Src = (void *)((longlong)pvVar17 + (longlong)*(int *)((longlong)pppppcVar24 + 0x44));
            pvVar21 = (void *)((longlong)pvVar21 + (longlong)*(int *)((longlong)pppppcVar24 + 0x44))
            ;
            if ((*(byte *)((longlong)pppppcVar24 + 0x3b) & 0x40) == 0) {
              (*(code *)(*pppppcVar24)[0x20])(pppppcVar24,pvVar21,_Src);
            }
            else {
              memcpy(pvVar21,_Src,
                     (longlong)*(int *)(pppppcVar24 + 6) *
                     (longlong)*(int *)((longlong)pppppcVar24 + 0x34));
            }
          }
        }
        iVar12 = (int)local_108 + -1;
        local_108 = (undefined8 *******)CONCAT44(local_108._4_4_,iVar12);
        pppppcVar24 = (code *****)ppppcStack_90;
      } while (iVar12 != 0);
    }
    if (pppppcVar24 != (code *****)0x0) {
      if ((*local_98)[0x46] == (code ****)&LAB_1449b19a2) {
        ppppppcVar16 = (code ******)local_98[0xf];
        *(int *)(ppppppcVar16 + 9) = *(int *)(ppppppcVar16 + 9) + -1;
        iVar12 = *(int *)(ppppppcVar16 + 10) + 1;
        do {
          iVar14 = iVar12;
          iVar12 = 1;
        } while (iVar14 == 0);
        *(int *)(ppppppcVar16 + 10) = iVar14;
        ppppppcVar16 = (code ******)local_98[0xf];
        if ((longlong)*(int *)(ppppppcVar16 + 9) < 1) {
          ppppppcVar16 = (code ******)0x0;
        }
        else {
          ppppppcVar22 = (code ******)ppppppcVar16[8];
          if ((code ******)ppppppcVar16[8] == (code ******)0x0) {
            ppppppcVar22 = ppppppcVar16;
          }
          ppppppcVar16 = (code ******)ppppppcVar22[(longlong)*(int *)(ppppppcVar16 + 9) + -1];
        }
        local_98[0xe] = (code *****)ppppppcVar16;
      }
      else {
        (*(code *)(*local_98)[0x46])
                  (local_98,pppppcVar24,(uint)((ulonglong)pppppcVar24[7] >> 0x23) & 1);
      }
    }
    if (pvVar17 != (void *)0x0) {
      pppppcVar24 = param_1[0xe];
      if ((*(byte *)((longlong)pppppcVar24 + 0x3c) & 0x10) == 0) {
        (*(code *)(*pppppcVar24)[0x29])(pppppcVar24,pvVar17);
      }
      FUN_1400020a8(pvVar17);
    }
  }
  local_108 = &local_e0;
  ppppcStack_90 = (code ****)&local_108;
  local_98 = (code ******)FUN_14281ab14;
  FUN_1402609e8(local_d8,&local_d0);
LAB_14025fbd8:
  *(byte *)((longlong)pppppppcVar4 + 0x2c) =
       *(byte *)((longlong)pppppppcVar4 + 0x2c) & 0xfe | bVar3 & 1;
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026089e FUN_14026089e body=92 status=ok
// SIG undefined FUN_14026089e(void)

int FUN_14026089e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  
  iVar2 = FUN_14491444c(param_1[1],(longlong)param_1 + 0x1c);
  plVar1 = (longlong *)*param_1;
  _Dst = (void *)((longlong)iVar2 * (longlong)(int)param_1[4] + *(longlong *)param_1[1]);
  if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
    (**(code **)(*plVar1 + 0x160))
              (plVar1,(longlong)_Dst + (longlong)*(int *)((longlong)plVar1 + 0x44));
  }
  else {
    memset(_Dst,0,(longlong)(int)param_1[3]);
  }
  return iVar2;
}



// FUNCTION 1402608fa FUN_1402608fa body=76 status=ok
// SIG undefined FUN_1402608fa(void)

void FUN_1402608fa(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 8) - *(int *)(*(longlong *)(param_1 + 8) + 0x34);
  if (iVar1 != 0) {
    FUN_140260cba(param_1,0,iVar1);
  }
  if (iVar1 == 0 && param_2 == 0) {
    return;
  }
  FUN_140260946(*(undefined8 *)(param_1 + 8),param_2,param_1 + 0x10);
  return;
}



// FUNCTION 140260946 FUN_140260946 body=162 status=ok
// SIG undefined FUN_140260946(void)

void FUN_140260946(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  FUN_140458cae(param_1,param_2,param_3 + 0xc);
  uVar3 = (uint)param_2;
  if (uVar3 < 4) {
    if (((uVar3 == 0) || (*(int *)(param_1 + 0x48) == 1)) ||
       (*(undefined4 *)(param_1 + 0x48) = 1, *(longlong *)(param_1 + 0x40) == 0))
    goto LAB_14026098e;
    iVar5 = 0;
  }
  else {
    uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar1 & 0x1f);
    if (*(int *)(param_1 + 0x48) == iVar5) goto LAB_14026098e;
    *(int *)(param_1 + 0x48) = iVar5;
  }
  FUN_1446efa72(param_1 + 0x40,0,iVar5,4);
LAB_14026098e:
  lVar1 = param_1 + 0x38;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x40);
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar1 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 1402609e8 FUN_1402609e8 body=442 status=ok
// SIG undefined FUN_1402609e8(void)

void FUN_1402609e8(longlong *param_1,int *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar4,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar2 < 4) {
    *(undefined4 *)(param_1 + 9) = 1;
    iVar7 = 1;
    if (param_1[8] != 0) {
      iVar7 = 0;
      goto LAB_140260b7d;
    }
  }
  else {
    uVar5 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar8 & 0x1f);
    *(int *)(param_1 + 9) = iVar7;
LAB_140260b7d:
    FUN_1446efa72(plVar4,0,iVar7,4);
    iVar7 = (int)param_1[9];
    if (iVar7 < 1) goto LAB_140260a71;
  }
  uVar2 = 0;
  do {
    plVar6 = (longlong *)*plVar4;
    if ((longlong *)*plVar4 == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)(iVar7 + 0x7fffffffU & uVar2) * 4) = 0xffffffff;
    uVar2 = uVar2 + 1;
    iVar7 = (int)param_1[9];
  } while ((int)uVar2 < iVar7);
LAB_140260a71:
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 != 0) {
    uVar2 = 0;
    do {
      if ((int)uVar2 < (int)param_1[5]) {
        plVar4 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar4 = param_1 + 2;
        }
        if ((*(uint *)((longlong)plVar4 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)
        {
          lVar8 = (longlong)(int)uVar2 * (longlong)param_2[4] + *param_1;
          local_50 = lVar8;
          iVar3 = (*(code *)*param_3)(param_3[1],&local_50);
          uVar5 = (longlong)iVar3 & (longlong)(int)param_1[9] - 1U;
          iVar3 = (int)uVar5;
          *(int *)(param_2[1] + lVar8) = iVar3;
          plVar4 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar4 = plVar1;
          }
          *(undefined4 *)(*param_2 + lVar8) =
               *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
          plVar4 = (longlong *)param_1[8];
          if ((longlong *)param_1[8] == (longlong *)0x0) {
            plVar4 = plVar1;
          }
          *(uint *)((longlong)plVar4 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4) =
               uVar2;
          iVar7 = iVar7 + -1;
        }
      }
      uVar2 = uVar2 + 1;
    } while (iVar7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140260ba4 FUN_140260ba4 body=177 status=ok
// SIG undefined FUN_140260ba4(void)

ulonglong FUN_140260ba4(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar1 = *(uint *)(param_1[1] + 8);
  if (uVar1 != 0) {
    if ((int)uVar1 <= (int)param_3) {
      param_3 = 0;
    }
    plVar2 = (longlong *)*param_1;
    uVar7 = (ulonglong)param_3;
    do {
      uVar6 = (uint)uVar7;
      if ((-1 < (int)uVar6) && (plVar3 = (longlong *)param_1[1], (int)uVar6 < (int)plVar3[5])) {
        plVar5 = plVar3 + 2;
        if ((longlong *)plVar3[4] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar3[4];
        }
        if (((*(uint *)((longlong)plVar5 + (uVar7 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0) &&
           (cVar4 = (**(code **)(*plVar2 + 200))
                              (plVar2,param_2,
                               (longlong)(int)uVar6 * (longlong)*(int *)(param_1 + 4) + *plVar3,0),
           cVar4 != '\0')) {
          return uVar7;
        }
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      if (uVar6 + 1 == uVar1) {
        uVar7 = 0;
      }
    } while ((uint)uVar7 != param_3);
  }
  return 0xffffffff;
}



// FUNCTION 140260c56 FUN_140260c56 body=99 status=ok
// SIG undefined FUN_140260c56(void)

void FUN_140260c56(longlong param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  param_2 = param_2 & 0xffffffff;
  FUN_140260cba();
  if (param_3 != 0) {
    do {
      uVar3 = (uint)param_2;
      if ((-1 < (int)uVar3) &&
         (lVar1 = *(longlong *)(param_1 + 8), (int)uVar3 < *(int *)(lVar1 + 0x28))) {
        lVar2 = lVar1 + 0x10;
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          lVar2 = *(longlong *)(lVar1 + 0x20);
        }
        if ((*(uint *)(lVar2 + (param_2 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
          FUN_140260d62(lVar1,param_2,param_1 + 0x10);
          param_3 = param_3 + -1;
        }
      }
      param_2 = (ulonglong)(uVar3 + 1);
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140260cba FUN_140260cba body=167 status=ok
// SIG undefined FUN_140260cba(void)

void FUN_140260cba(longlong *param_1,uint param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_3 != 0) && ((*(ulonglong *)(*param_1 + 0x38) & 0x1040000000) == 0)) {
    uVar1 = *(uint *)(param_1 + 3);
    lVar5 = (longlong)(int)param_2 * (longlong)(int)param_1[4] + *(longlong *)param_1[1];
    do {
      if ((-1 < (int)param_2) && (lVar2 = param_1[1], (int)param_2 < *(int *)(lVar2 + 0x28))) {
        lVar4 = lVar2 + 0x10;
        if (*(longlong *)(lVar2 + 0x20) != 0) {
          lVar4 = *(longlong *)(lVar2 + 0x20);
        }
        if ((*(uint *)(lVar4 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
          plVar3 = (longlong *)*param_1;
          if ((plVar3[7] & 0x1000000000U) == 0) {
            (**(code **)(*plVar3 + 0x148))(plVar3,*(int *)((longlong)plVar3 + 0x44) + lVar5);
          }
          param_3 = param_3 + -1;
        }
      }
      lVar5 = lVar5 + (ulonglong)uVar1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140260d62 FUN_140260d62 body=138 status=ok
// SIG undefined FUN_140260d62(void)

void FUN_140260d62(longlong *param_1,int param_2,int *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(param_3[4] * param_2) + *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  uVar3 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(param_3[1] + lVar7);
  iVar4 = *(int *)((longlong)plVar5 + uVar3 * 4);
  if (iVar4 != -1) {
    if (iVar4 == param_2) {
      puVar2 = (undefined4 *)((longlong)plVar5 + uVar3 * 4);
    }
    else {
      lVar1 = *param_1 + (longlong)*param_3;
      do {
        lVar6 = (longlong)(iVar4 * param_3[4]);
        iVar4 = *(int *)(lVar1 + lVar6);
        if (iVar4 == -1) goto LAB_140260dbb;
      } while (iVar4 != param_2);
      puVar2 = (undefined4 *)(lVar1 + lVar6);
    }
    *puVar2 = *(undefined4 *)(lVar7 + *param_3);
  }
LAB_140260dbb:
  FUN_140260dec(param_1,param_3 + 3,param_2,1);
  return;
}



// FUNCTION 140260dec FUN_140260dec body=150 status=ok
// SIG undefined FUN_140260dec(void)

void FUN_140260dec(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (param_4 != 0) {
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)*(int *)(param_2 + 4) * (longlong)(int)param_1[6]) = param_3;
      }
      lVar2 = *param_1;
      lVar6 = (longlong)param_3 * (longlong)*(int *)(param_2 + 4);
      *(undefined4 *)(lVar2 + lVar6) = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar6) = uVar4;
      *(int *)(param_1 + 6) = param_3;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = param_3 + 0x1f;
      if (-1 < param_3) {
        iVar5 = param_3;
      }
      bVar3 = (byte)param_3 & 0x1f;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// FUNCTION 140260e82 FUN_140260e82 body=342 status=ok
// SIG undefined FUN_140260e82(void)

void FUN_140260e82(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  void *_Dst;
  ulonglong uVar5;
  int iVar6;
  void *_Src;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined8 *local_60;
  code *local_58;
  undefined8 **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 0x88);
  local_88 = *(undefined8 *)(param_1 + 0x70);
  local_78 = *(undefined4 *)(param_1 + 0x78);
  uStack_74 = *(undefined4 *)(param_1 + 0x7c);
  uStack_70 = *(undefined4 *)(param_1 + 0x80);
  uStack_6c = *(undefined4 *)(param_1 + 0x84);
  local_68 = *(int *)(param_1 + 0x88);
  lVar7 = param_3[1];
  iVar6 = *(int *)((longlong)param_3 + 0x34);
  local_80 = param_2;
  FUN_1402608fa(&local_88,(int)lVar7 - iVar6);
  iVar6 = (int)lVar7 - iVar6;
  if (iVar6 != 0) {
    lVar7 = 0;
    uVar5 = 0;
    do {
      if ((longlong)uVar5 < (longlong)(int)param_3[5]) {
        plVar3 = (longlong *)param_3[4];
        if ((longlong *)param_3[4] == (longlong *)0x0) {
          plVar3 = param_3 + 2;
        }
        if ((*(uint *)((longlong)plVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            != 0) {
          iVar2 = FUN_14026089e(&local_88);
          lVar4 = (longlong)iVar2 * (longlong)local_68 + *local_80;
          if (*param_3 + lVar7 != lVar4) {
            plVar3 = *(longlong **)(param_1 + 0x70);
            _Src = (void *)(*param_3 + lVar7 + (longlong)*(int *)((longlong)plVar3 + 0x44));
            _Dst = (void *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
            if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar3 + 0x100))(plVar3,_Dst,_Src,(int)plVar3[6]);
            }
            else {
              memcpy(_Dst,_Src,
                     (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
            }
          }
          iVar6 = iVar6 + -1;
        }
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + iVar1;
    } while (iVar6 != 0);
    local_50 = &local_60;
    local_58 = FUN_14281ab14;
    local_60 = &local_88;
    FUN_1402609e8(local_80,&local_78);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140260fda FUN_140260fda body=394 status=ok
// SIG undefined FUN_140260fda(void)

void FUN_140260fda(longlong param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
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
  uVar10 = (ulonglong)param_3;
  uVar5 = lVar4 * uVar10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if ((param_4 < 0x11) && (uVar5 < 0x7ff1)) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]]
        ;
      }
      else {
        uVar7 = 0x10;
        if (0x10 < param_4) {
          uVar7 = (ulonglong)param_4;
        }
        uVar6 = -uVar7 & (uVar5 + uVar7) - 1;
        if ((param_4 < 0x81) && (uVar6 < 0x7ff1)) {
          bVar1 = (&DAT_14c841e00)[uVar6 + 0xf >> 4];
          uVar8 = 0x32;
          if (0x32 < bVar1) {
            uVar8 = (ulonglong)bVar1;
          }
          uVar9 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((uint)uVar7 + 0xffff & (uint)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff]) == 0)
            goto LAB_140261066;
            lVar4 = uVar8 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar4 != 0x33);
        }
        if ((uint)uVar7 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar7 & (uVar6 + uVar7) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,param_4);
    }
  }
LAB_140261066:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / uVar10)) {
    uVar7 = uVar5 / uVar10 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,uVar10,param_4);
  return;
}



// FUNCTION 140261164 FUN_140261164 body=9 status=ok
// SIG undefined FUN_140261164(void)

void FUN_140261164(longlong param_1)

{
  FUN_14026116e(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 14026116e FUN_14026116e body=134 status=ok
// SIG undefined FUN_14026116e(void)

longlong FUN_14026116e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0xd0) != 0)) {
    plVar3 = *(longlong **)(lVar2 + 200);
    lVar2 = (longlong)*(int *)(lVar2 + 0xd0) << 3;
    do {
      lVar1 = *plVar3;
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) == param_2)) {
        if (plVar3 != (longlong *)0x0) {
          if (DAT_14c950c29 != '\x01') {
            return lVar1;
          }
          FUN_1456cec3c(lVar1);
          return lVar1;
        }
        break;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  lVar2 = FUN_1400bd118(*(undefined8 *)(param_1 + 0x28));
  if (lVar2 == 0) {
    return 0;
  }
  lVar2 = FUN_1402ad750(lVar2,param_2);
  return lVar2;
}



// FUNCTION 1402611f4 FUN_1402611f4 body=183 status=ok
// SIG undefined FUN_1402611f4(void)

ulonglong FUN_1402611f4(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong unaff_RDI;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 1) == 0) {
    unaff_RDI = 0;
  }
  else {
    plVar5 = (longlong *)*param_1;
    lVar6 = (longlong)*(int *)(param_1 + 1) * 0x18;
    do {
      lVar4 = plVar5[1];
      if (lVar4 == 0) {
        uVar3 = FUN_140c1c194();
        lVar4 = FUN_14477b664(uVar3);
        plVar5[1] = lVar4;
      }
      unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
      if (plVar5[2] != 0) break;
      if ((lVar4 != 0) && (*plVar5 != 0)) {
        plVar1 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          plVar5[2] = 0;
        }
        else {
          uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar4 = FUN_144aff482(uVar3,plVar5);
          plVar5[2] = lVar4;
          if (lVar4 != 0) break;
        }
      }
      plVar5 = plVar5 + 3;
      unaff_RDI = 0;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 1402612ba FUN_1402612ba body=789 status=ok
// SIG undefined FUN_1402612ba(void)

void FUN_1402612ba(longlong *param_1,ulonglong *param_2,int param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = (**(code **)(*param_1 + 8))();
  uVar13 = (uint)*(byte *)(lVar6 + 0x30) * param_4 + param_3;
  plVar1 = param_1 + 0x3c;
  if ((int)param_1[0x3d] == *(int *)((longlong)param_1 + 0x214)) {
    lVar6 = *plVar1;
    iVar16 = -1;
  }
  else {
    lVar6 = param_1[0x3c];
    plVar11 = param_1 + 0x43;
    if ((longlong *)param_1[0x44] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[0x44];
    }
    iVar9 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[0x45] - 1U & uVar13) * 4);
    while ((iVar16 = -1, iVar9 != -1 &&
           (iVar16 = iVar9, *(uint *)(lVar6 + (longlong)iVar9 * 0x18) != uVar13))) {
      iVar9 = *(int *)(lVar6 + (longlong)iVar9 * 0x18 + 0x10);
    }
  }
  lVar4 = (longlong)iVar16 * 0x18;
  lVar2 = *(longlong *)(lVar6 + 8 + lVar4);
  *(undefined8 *)(lVar6 + 8 + lVar4) = 0;
  lVar6 = param_1[0x3c];
  plVar11 = param_1 + 0x43;
  if ((longlong *)param_1[0x44] != (longlong *)0x0) {
    plVar11 = (longlong *)param_1[0x44];
  }
  lVar15 = (longlong)*(int *)(lVar6 + 0x14 + lVar4);
  iVar9 = *(int *)((longlong)plVar11 + lVar15 * 4);
  if (iVar9 == iVar16) {
    piVar14 = (int *)((longlong)plVar11 + lVar15 * 4);
  }
  else {
    do {
      piVar14 = (int *)(lVar6 + (longlong)iVar9 * 0x18 + 0x10);
      iVar9 = *piVar14;
    } while (iVar9 != iVar16);
  }
  *piVar14 = *(int *)(lVar6 + lVar4 + 0x10);
  lVar6 = *(longlong *)(*plVar1 + 8 + (longlong)iVar16 * 0x18);
  if (lVar6 != 0) {
    FUN_1456d02da(lVar6 + 8);
    FUN_1400020a8(lVar6);
  }
  FUN_143179cea(plVar1,iVar16);
  cVar5 = (**(code **)(*DAT_14ca77418 + 0x620))(DAT_14ca77418,param_2,param_3,param_1);
  if ((cVar5 == '\0') && ((*(byte *)(lVar2 + 0x9c) & 2) == 0)) {
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      local_68 = *(undefined8 *)(lVar2 + 0x68);
      local_78 = *(undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x20);
      local_70 = 1;
      local_50 = *(undefined4 *)(lVar2 + 0x90);
      local_60 = *(undefined4 *)(lVar2 + 0x80);
      uStack_5c = *(undefined4 *)(lVar2 + 0x84);
      uStack_58 = *(undefined4 *)(lVar2 + 0x88);
      uStack_54 = *(undefined4 *)(lVar2 + 0x8c);
      uVar17 = *(uint *)(param_1 + 0x24);
      if (uVar17 == 0) {
        uVar10 = 0x20;
      }
      else {
        uVar10 = 0;
        if (uVar17 != 0) {
          for (; (uVar17 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
          }
        }
      }
      lVar6 = param_1[(ulonglong)uVar10 + 0x25];
      if (lVar6 != 0) {
        uVar18 = CONCAT44(uVar10,uVar17);
        do {
          uVar8 = (**(code **)(*(longlong *)param_2[8] + 0x278))
                            ((longlong *)param_2[8],*(undefined4 *)(*(longlong *)(lVar6 + 0x68) + 8)
                            );
          local_88 = 0;
          local_80 = &local_78;
          FUN_143175a9a(lVar6,uVar8,uVar13,0);
          bVar3 = (byte)((ulonglong)uVar18 >> 0x20) & 0x1f;
          uVar17 = (uint)uVar18 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
          if (uVar17 == 0) break;
          uVar10 = 0;
          if (uVar17 != 0) {
            for (; (uVar17 >> uVar10 & 1) == 0; uVar10 = uVar10 + 1) {
            }
          }
          lVar6 = *(longlong *)(lVar6 + 0x128 + (ulonglong)uVar10 * 8);
          uVar18 = CONCAT44(uVar10,uVar17);
        } while (lVar6 != 0);
      }
      if (lVar2 != 0) {
        FUN_1456d02da(lVar2 + 8);
        FUN_1400020a8(lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar7 + 5;
      if ((undefined8 *)param_2[1] < puVar12) {
        FUN_140023dd8(param_2,0x30);
        puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar7 + 5;
      }
      *param_2 = (ulonglong)puVar12;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar7;
      param_2[6] = (ulonglong)(puVar7 + 1);
      puVar7[1] = 0;
      *puVar7 = &PTR_FUN_14a350220;
      puVar7[2] = param_1;
      *(uint *)(puVar7 + 3) = uVar13;
      puVar7[4] = lVar2;
    }
  }
  else if (lVar2 != 0) {
    FUN_1456d02da(lVar2 + 8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402615e8 FUN_1402615e8 body=296 status=ok
// SIG undefined FUN_1402615e8(void)

undefined8 FUN_1402615e8(longlong param_1,longlong *param_2,char param_3)

{
  uint *puVar1;
  ushort uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *(ushort *)(param_1 + 0x24e);
  uVar7 = (uint)uVar2 - (uint)*(ushort *)(param_1 + 0x250);
  uVar8 = uVar7 & 0x1fff;
  if (0xff < uVar8) {
    uVar8 = 0x100;
  }
  uVar8 = uVar8 + 0x1f >> 5;
  uVar5 = 8;
  if ((uVar7 >> 0xd & 1) == 0) {
    uVar5 = (ulonglong)(uVar8 + (uVar8 == 0));
  }
  uVar6 = uVar5;
  if ((param_3 == '\0') || (uVar6 = *(ulonglong *)(param_1 + 0x220), uVar5 <= uVar6)) {
    *(ulonglong *)(param_1 + 0x220) = uVar6;
    *(ushort *)(param_1 + 0x228) = uVar2;
    local_1c = (int)uVar6 - 1U & 0xf | (uVar2 & 0x3fff) << 4 | *(int *)(param_1 + 0x254) << 0x12;
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_1c);
      }
    }
    else {
      local_1c = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    FUN_140261712(param_1 + 0x22c,param_2,*(undefined8 *)(param_1 + 0x220));
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140261712 FUN_140261712 body=173 status=ok
// SIG undefined FUN_140261712(void)

void FUN_140261712(longlong param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = 8;
  if (param_3 < 8) {
    uVar2 = param_3;
  }
  if (param_3 != 0) {
    uVar3 = 0;
    do {
      local_34 = *(undefined4 *)(param_1 + uVar3 * 4);
      puVar1 = (ulonglong *)param_2[1];
      if (puVar1[1] < *puVar1 + 4) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_34);
        }
      }
      else {
        *puVar1 = *puVar1 + 4;
      }
      uVar3 = uVar3 + 1;
    } while (uVar2 != uVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402617c0 FUN_1402617c0 body=220 status=ok
// SIG undefined FUN_1402617c0(void)

void FUN_1402617c0(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  
  lVar2 = DAT_14cb848c0 + 0x3a8;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb823b8,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x38) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb823c0,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x3a) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb823c8,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x3c) = uVar1;
  uVar1 = FUN_14026189c(param_2,&DAT_14cb823d0,&DAT_14c9a77f0);
  *(undefined2 *)(param_1 + 0x4a) = uVar1;
  uVar1 = FUN_1402619c6(param_2,&DAT_14cb823e0,lVar2);
  *(undefined2 *)(param_1 + 0x4c) = uVar1;
  uVar1 = FUN_1402619c6(param_2,&DAT_14cb823f8,lVar2);
  *(undefined2 *)(param_1 + 0x4e) = uVar1;
  uVar1 = FUN_1402619c6(param_2,&DAT_14cb82400,lVar2);
  *(undefined2 *)(param_1 + 0x50) = uVar1;
  uVar1 = FUN_1402619c6(param_2,&DAT_14cb823f0,lVar2);
  *(undefined2 *)(param_1 + 0x52) = uVar1;
  return;
}



// FUNCTION 14026189c FUN_14026189c body=238 status=ok
// SIG undefined FUN_14026189c(void)

void FUN_14026189c(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  undefined4 local_70 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70[0] = *param_3;
  local_68 = *(undefined8 *)(param_3 + 2);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_3 + 4));
  local_60 = FUN_14477b664(uVar1);
  local_58 = *(undefined8 *)(param_3 + 6);
  local_50 = *(undefined8 *)(param_3 + 8);
  uStack_48 = *(undefined8 *)(param_3 + 10);
  local_40 = *(undefined8 *)(param_3 + 0xc);
  local_38 = param_3[0xe];
  local_30 = 0;
  local_28 = param_3[0x12];
  if (*param_1 == 0) {
    puVar2 = &DAT_14c9a1308;
  }
  else {
    puVar2 = (undefined8 *)FUN_1446e60f4(*param_1,param_2);
  }
  if (((byte *)*puVar2 != (byte *)0x0) && ((*(byte *)*puVar2 & 3) != 0)) {
    uVar1 = FUN_14026198c();
    FUN_1446e7478(puVar2,local_70,uVar1,0);
  }
  FUN_1449148e0(local_70);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026198c FUN_14026198c body=57 status=ok
// SIG undefined FUN_14026198c(void)

void FUN_14026198c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a49b0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a49b0 = FUN_140002ddd(FUN_14173b02c,uVar1,L"GbxAttributeInit");
  }
  return;
}



// FUNCTION 1402619c6 FUN_1402619c6 body=240 status=ok
// SIG undefined FUN_1402619c6(void)

undefined4 FUN_1402619c6(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined *local_38;
  longlong local_30;
  ulonglong uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 == 0) {
    puVar3 = &DAT_14c9a1308;
  }
  else {
    puVar3 = (undefined8 *)FUN_1446e60f4();
  }
  if (((byte *)*puVar3 == (byte *)0x0) || ((*(byte *)*puVar3 & 3) == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_140265f12();
    local_38 = &DAT_14cb83310;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = &PTR_FUN_14b1828b0;
    uVar4 = FUN_140261ab8();
    FUN_1446e7478(puVar3,&local_40,uVar4,1);
    uVar2 = FUN_144914e1c(param_3,&local_40);
    local_40 = (undefined **)&DAT_14a171d50;
    uVar1 = uStack_28 >> 0x20;
    uStack_28 = uStack_28 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      FUN_140115c12(&local_30,0);
    }
    local_38 = (undefined *)0x0;
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140261ab8 FUN_140261ab8 body=57 status=ok
// SIG undefined FUN_140261ab8(void)

void FUN_140261ab8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a680 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a680 = FUN_140002ddd(FUN_14185d023,uVar1,L"InventoryTags");
  }
  return;
}



// FUNCTION 140261af2 FUN_140261af2 body=57 status=ok
// SIG undefined FUN_140261af2(void)

void FUN_140261af2(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a59c0 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a59c0 = FUN_140002ddd(FUN_14173d665,uVar1,L"GbxUEDataTableDef");
  }
  return;
}



// FUNCTION 140261b2c FUN_140261b2c body=8956 status=ok
// SIG undefined FUN_140261b2c(void)

void FUN_140261b2c(longlong *param_1)

{
  uint *puVar1;
  undefined **ppuVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  void *pvVar9;
  undefined8 uVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  DWORD DVar26;
  DWORD DVar27;
  undefined *puVar28;
  void *pvVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  float *pfVar32;
  byte bVar33;
  int iVar34;
  int iVar35;
  void **ppvVar36;
  longlong lVar37;
  void *_Dst;
  longlong lVar38;
  undefined *puVar39;
  undefined8 *puVar40;
  int *piVar41;
  longlong *plVar42;
  void *pvVar43;
  undefined8 uVar44;
  longlong *plVar45;
  int iVar46;
  size_t sVar47;
  longlong *plVar48;
  longlong *plVar49;
  longlong lVar50;
  longlong *plVar51;
  ulonglong uVar52;
  undefined1 *puVar53;
  ulonglong uVar54;
  uint uVar55;
  longlong lVar56;
  undefined8 *puVar57;
  ulonglong uVar58;
  longlong lVar59;
  double *pdVar60;
  bool bVar61;
  float fVar62;
  float fVar63;
  double dVar64;
  double dVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong *local_278;
  longlong *local_270;
  char local_261;
  longlong *local_260;
  longlong *local_258;
  undefined4 local_24c;
  longlong *local_248;
  longlong *local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  int *local_228;
  longlong *local_220;
  longlong local_218;
  undefined4 local_210;
  int local_20c;
  longlong *local_208;
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  void *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  void *local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8 [2];
  undefined8 *local_198;
  int iStack_190;
  uint uStack_18c;
  int local_188;
  int iStack_184;
  longlong local_180;
  longlong *local_178;
  int local_170;
  undefined4 uStack_16c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  uint uStack_d8;
  undefined8 uStack_d4;
  undefined **local_c8;
  longlong *plStack_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  int local_94;
  undefined1 local_90 [8];
  undefined1 *local_88;
  int local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_228 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  local_20c = *local_228;
  pvVar43 = ThreadLocalStoragePointer;
  if (local_20c == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_20c = *local_228;
  }
  if ((local_20c == 0x60000000) || (local_20c == 0)) {
    *local_228 = 0x40000010;
  }
  plVar30 = (longlong *)*param_1;
  local_260 = param_1;
  if ((int)plVar30[2] == 0) {
    cVar3 = *(char *)((longlong)plVar30 + 0x16);
    bVar61 = cVar3 == '+' || cVar3 == '\x02';
LAB_140261be0:
    if (cVar3 == '\0') {
      local_24c = (undefined4)CONCAT71((int7)((ulonglong)pvVar43 >> 8),1);
    }
    else if ((cVar3 == '+') || (cVar3 == '\x02')) {
      local_24c = (undefined4)
                  CONCAT71((int7)((ulonglong)plVar30[1] >> 8),*(int *)(plVar30[1] + 0x35e8) != 3);
    }
    else {
      local_24c = 0;
    }
    if (bVar61) {
      FUN_14723addd(*plVar30 + 0x117c0,*(undefined4 *)(plVar30[0x44] + 0x10),plVar30 + 0xb,
                    plVar30 + 0xd);
      local_230 = (undefined8 *)*param_1;
      local_a8 = local_230 + 0x27;
      local_b0 = local_230 + 0x18;
      plStack_c0 = local_230 + 0x15;
      plVar30 = local_230 + 0xb;
      local_1d8 = (void *)0x0;
      local_1d0 = *(int *)(local_230 + 0x12);
      sVar47 = (size_t)local_1d0;
      pvVar43 = (void *)local_230[0x11];
      local_238 = local_230;
      if (sVar47 == 0) {
        local_1cc = 0;
      }
      else {
        FUN_14477be48(&local_1d8,local_1d0,0);
        memcpy(local_1d8,pvVar43,sVar47);
        local_230 = (undefined8 *)*param_1;
      }
      plVar49 = (longlong *)local_230[8];
      plVar51 = (longlong *)local_230[7];
      local_240 = (longlong *)local_230[6];
      local_278 = (longlong *)*local_230;
      local_248 = (longlong *)local_230[5];
      bVar33 = *(byte *)((longlong)local_230 + 0x16);
      local_c8 = &PTR_FUN_14a1f9a30;
      local_248[6] = (longlong)&local_c8;
      local_240[6] = (longlong)&local_c8;
      local_b8 = plVar30;
      uVar20 = FUN_147430903(*(undefined2 *)(&DAT_14ca85070 + (longlong)(int)local_278[0x612] * 2));
      local_270 = (longlong *)CONCAT71(local_270._1_7_,uVar20);
      lVar59 = (longlong)(int)plVar51[1];
      if (0 < lVar59) {
        plVar48 = local_278 + 0x22f9;
        lVar56 = 8;
        lVar50 = 0;
        do {
          if ((plVar49 == (longlong *)0x0) ||
             ((*(ulonglong *)(*plVar49 + lVar50 * 8) & 1L << (bVar33 & 0x3f)) != 0)) {
            lVar38 = *plVar51;
            if (((char)local_270 == '\0') && ((*(uint *)(local_278 + 0x22f8) & 1) != 0)) {
              plVar42 = local_240;
              if ((*(uint *)(local_278 + 0x22f8) & 2) == 0) {
                uVar22 = *(uint *)(*(longlong *)(*(longlong *)(lVar38 + lVar56) + 0x218) + 0x158);
                plVar45 = (longlong *)local_278[0x22fb];
                if ((longlong *)local_278[0x22fb] == (longlong *)0x0) {
                  plVar45 = plVar48;
                }
                uVar24 = uVar22 + 0x1f;
                if (-1 < (int)uVar22) {
                  uVar24 = uVar22;
                }
                if ((*(uint *)((longlong)plVar45 + (longlong)((int)uVar24 >> 5) * 4) >>
                     (uVar22 & 0x1f) & 1) == 0) goto LAB_140262cf7;
              }
            }
            else {
LAB_140262cf7:
              plVar42 = local_248;
            }
            local_298 = CONCAT44(local_298._4_4_,0xffffffff);
            (**(code **)(*plVar42 + 0x18))
                      (plVar42,*(undefined8 *)(lVar38 + -8 + lVar56),0xffffffffffffffff);
          }
          lVar50 = lVar50 + 1;
          lVar56 = lVar56 + 0x18;
        } while (lVar59 != lVar50);
      }
      puVar31 = local_230;
      lVar59 = (longlong)*(int *)(local_230 + 0x10);
      local_110 = (undefined8 *)0x0;
      local_100 = 0;
      uStack_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0xffffffff;
      local_e0 = 0xff0000ffffffff;
      uStack_d8 = uStack_d8 & 0xffffff00;
      uStack_d4 = 0x40c00f07;
      local_108 = &DAT_100000001;
      FUN_14470b9e0(&local_1b8,1);
      local_218 = lVar59;
      if (0 < lVar59) {
        local_220 = local_278 + 0x22f9;
        lVar59 = 0;
        puVar40 = local_238;
        do {
          puVar57 = *(undefined8 **)(puVar31[0xf] + lVar59 * 8);
          uVar66 = *(undefined4 *)(puVar57 + 0x1f);
          plVar49 = *(longlong **)(puVar57[0x1e] + 8);
          local_258 = (longlong *)(longlong)*(int *)(puVar40 + 0xc);
          if (*(int *)((longlong)puVar57 + 0xe4) < 0) {
            if (&local_1b8 != puVar57) {
              puVar31 = local_110;
              if (local_110 == (undefined8 *)0x0) {
                puVar31 = &local_1b8;
              }
              FUN_1446fc26f(puVar31,(ulonglong)local_108 & 0xffffffff);
              iVar21 = *(int *)(puVar57 + 0x16);
              local_108 = (undefined1 *)CONCAT44(local_108._4_4_,iVar21);
              if (iVar21 == 0 && local_108._4_4_ == 0) {
                local_108 = (undefined1 *)CONCAT44(1,iVar21);
              }
              else {
                puVar31 = (undefined8 *)puVar57[0x15];
                if ((undefined8 *)puVar57[0x15] == (undefined8 *)0x0) {
                  puVar31 = puVar57;
                }
                FUN_14473945a(&local_1b8,iVar21);
                puVar40 = local_110;
                if (local_110 == (undefined8 *)0x0) {
                  puVar40 = &local_1b8;
                }
                FUN_1447393f1(puVar40,puVar31,iVar21);
              }
            }
            local_100 = puVar57[0x17];
            uStack_f8 = puVar57[0x18];
            local_f0 = puVar57[0x19];
            uStack_e8 = puVar57[0x1a];
            local_e0 = puVar57[0x1b];
            uStack_d8 = *(uint *)(puVar57 + 0x1c);
            uStack_d4 = CONCAT44(CONCAT31(uStack_d4._5_3_,*(undefined1 *)(puVar57 + 0x1d)),
                                 *(undefined4 *)((longlong)puVar57 + 0xe4));
            (**(code **)(*plVar49 + 0xb0))(plVar49,local_278,&local_1b8);
            puVar31 = local_230;
            puVar57 = &local_1b8;
            puVar40 = local_238;
          }
          if (((char)local_270 == '\0') && ((*(uint *)(local_278 + 0x22f8) & 1) != 0)) {
            plVar51 = local_240;
            if ((*(uint *)(local_278 + 0x22f8) & 2) == 0) {
              uVar22 = *(uint *)(plVar49[0x43] + 0x158);
              plVar48 = (longlong *)local_278[0x22fb];
              if ((longlong *)local_278[0x22fb] == (longlong *)0x0) {
                plVar48 = local_220;
              }
              uVar24 = uVar22 + 0x1f;
              if (-1 < (int)uVar22) {
                uVar24 = uVar22;
              }
              if ((*(uint *)((longlong)plVar48 + (longlong)((int)uVar24 >> 5) * 4) >>
                   (uVar22 & 0x1f) & 1) == 0) goto LAB_140262f40;
            }
          }
          else {
LAB_140262f40:
            plVar51 = local_248;
          }
          local_298 = CONCAT44(local_298._4_4_,uVar66);
          (**(code **)(*plVar51 + 0x18))(plVar51,puVar57,0xffffffff,plVar49);
          if ((lVar59 < local_1d0) &&
             (bVar33 = *(byte *)((longlong)local_1d8 + lVar59), bVar33 != 0)) {
            if ((int)local_258 < *(int *)(puVar40 + 0xc)) {
              lVar56 = (longlong)*(int *)(puVar40 + 0xc) - (longlong)local_258;
              lVar50 = (longlong)local_258 * 0x48 + 0x38;
              do {
                lVar38 = *plVar30;
                *(byte *)(lVar38 + lVar50) = *(byte *)(lVar38 + lVar50) & 0xfc | bVar33 & 3;
                lVar50 = lVar50 + 0x48;
                lVar56 = lVar56 + -1;
              } while (lVar56 != 0);
            }
          }
          lVar59 = lVar59 + 1;
        } while (lVar59 != local_218);
      }
      puVar31 = &local_1b8;
      if (local_110 != (undefined8 *)0x0) {
        puVar31 = local_110;
      }
      FUN_1446fc26f(puVar31,(ulonglong)local_108 & 0xffffffff);
      if (local_110 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      ppvVar36 = &local_1d8;
      goto LAB_140261f29;
    }
  }
  else {
    if (*(short *)((longlong)plVar30 + 0x14) == 0x30) {
      cVar3 = *(char *)((longlong)plVar30 + 0x16);
      bVar61 = false;
      goto LAB_140261be0;
    }
    local_24c = 0;
  }
  plVar51 = plVar30 + 0x27;
  plVar48 = plVar30 + 0x18;
  plVar42 = plVar30 + 0x15;
  plVar49 = plVar30 + 0xb;
  local_1e8 = (void *)0x0;
  local_1e0 = (int)plVar30[0x12];
  sVar47 = (size_t)local_1e0;
  pvVar43 = (void *)plVar30[0x11];
  local_278 = plVar30;
  if (sVar47 == 0) {
    local_1dc = 0;
  }
  else {
    FUN_14477be48(&local_1e8,local_1e0,0);
    memcpy(local_1e8,pvVar43,sVar47);
    plVar30 = (longlong *)*param_1;
  }
  plVar45 = (longlong *)plVar30[8];
  plVar7 = (longlong *)plVar30[7];
  local_248 = (longlong *)*plVar30;
  plVar8 = (longlong *)plVar30[5];
  bVar33 = *(byte *)((longlong)plVar30 + 0x16);
  local_c8 = &PTR_FUN_14a1f9a30;
  plVar8[6] = (longlong)&local_c8;
  lVar59 = (longlong)(int)plVar7[1];
  local_258 = plVar30;
  plStack_c0 = plVar42;
  local_b8 = plVar49;
  local_b0 = plVar48;
  local_a8 = plVar51;
  if (0 < lVar59) {
    lVar56 = 8;
    lVar50 = 0;
    do {
      if ((plVar45 == (longlong *)0x0) ||
         ((*(ulonglong *)(*plVar45 + lVar50 * 8) & 1L << (bVar33 & 0x3f)) != 0)) {
        lVar38 = *plVar7;
        local_298 = CONCAT44(local_298._4_4_,0xffffffff);
        (**(code **)(*plVar8 + 0x18))
                  (plVar8,*(undefined8 *)(lVar38 + -8 + lVar56),0xffffffffffffffff,
                   *(undefined8 *)(lVar38 + lVar56));
      }
      lVar50 = lVar50 + 1;
      lVar56 = lVar56 + 0x18;
    } while (lVar59 != lVar50);
  }
  local_270 = (longlong *)(longlong)(int)local_258[0x10];
  if (0 < (longlong)local_270) {
    plVar48 = (longlong *)0x0;
    plVar51 = local_258;
    plVar30 = local_278;
    do {
      lVar59 = *(longlong *)(plVar51[0xf] + (longlong)plVar48 * 8);
      iVar21 = (int)plVar30[0xc];
      if (*(int *)(lVar59 + 0xe4) < 0) {
        local_110 = (undefined8 *)0x0;
        iVar34 = *(int *)(lVar59 + 0xb0);
        local_108 = (undefined1 *)CONCAT44(local_108._4_4_,iVar34);
        if (iVar34 == 0) {
          local_108 = (undefined1 *)0x100000000;
        }
        else {
          lVar50 = *(longlong *)(lVar59 + 0xa8);
          if (*(longlong *)(lVar59 + 0xa8) == 0) {
            lVar50 = lVar59;
          }
          FUN_14473945a(&local_1b8,iVar34,0);
          puVar31 = local_110;
          if (local_110 == (undefined8 *)0x0) {
            puVar31 = &local_1b8;
          }
          FUN_1447393f1(puVar31,lVar50,iVar34);
        }
        local_100 = *(undefined8 *)(lVar59 + 0xb8);
        uStack_f8 = *(undefined8 *)(lVar59 + 0xc0);
        local_f0 = *(undefined8 *)(lVar59 + 200);
        uStack_e8 = *(undefined8 *)(lVar59 + 0xd0);
        local_e0 = *(undefined8 *)(lVar59 + 0xd8);
        uStack_d8 = *(uint *)(lVar59 + 0xe0);
        uStack_d4 = CONCAT44(CONCAT31(uStack_d4._5_3_,*(undefined1 *)(lVar59 + 0xe8)),
                             *(undefined4 *)(lVar59 + 0xe4));
        plVar30 = *(longlong **)(*(longlong *)(lVar59 + 0xf0) + 8);
        (**(code **)(*plVar30 + 0xb0))(plVar30,local_248,&local_1b8);
        local_298 = CONCAT44(local_298._4_4_,*(undefined4 *)(lVar59 + 0xf8));
        (**(code **)(*plVar8 + 0x18))
                  (plVar8,&local_1b8,0xffffffff,*(undefined8 *)(*(longlong *)(lVar59 + 0xf0) + 8));
        puVar31 = local_110;
        if (local_110 == (undefined8 *)0x0) {
          puVar31 = &local_1b8;
        }
        FUN_1446fc26f(puVar31,(ulonglong)local_108 & 0xffffffff);
        plVar51 = local_258;
        plVar30 = local_278;
        if (local_110 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        local_298 = CONCAT44(local_298._4_4_,*(undefined4 *)(lVar59 + 0xf8));
        (**(code **)(*plVar8 + 0x18))
                  (plVar8,lVar59,0xffffffff,*(undefined8 *)(*(longlong *)(lVar59 + 0xf0) + 8));
      }
      if ((((longlong)plVar48 < (longlong)local_1e0) &&
          (bVar33 = *(byte *)((longlong)local_1e8 + (longlong)plVar48), bVar33 != 0)) &&
         (iVar21 < (int)plVar30[0xc])) {
        lVar50 = (longlong)(int)plVar30[0xc] - (longlong)iVar21;
        lVar59 = (longlong)iVar21 * 0x48 + 0x38;
        do {
          *(byte *)(*plVar49 + lVar59) = *(byte *)(*plVar49 + lVar59) & 0xfc | bVar33 & 3;
          lVar59 = lVar59 + 0x48;
          lVar50 = lVar50 + -1;
        } while (lVar50 != 0);
      }
      plVar48 = (longlong *)((longlong)plVar48 + 1);
    } while (plVar48 != local_270);
  }
  ppvVar36 = &local_1e8;
LAB_140261f29:
  plVar30 = local_260;
  FUN_140021220(ppvVar36);
  lVar59 = *plVar30;
  if (0 < *(int *)(lVar59 + 0x60)) {
    plVar49 = (longlong *)(ulonglong)*(byte *)(lVar59 + 0x16);
    if ((plVar49 != (longlong *)&DAT_0000003a) &&
       ((*(byte *)(&DAT_14ca11d50 +
                  (longlong)((ulonglong)*(uint *)(lVar59 + 0x10) * 0x3a + (longlong)plVar49)) & 2)
        != 0)) {
      local_248 = (longlong *)CONCAT44(local_248._4_4_,*(int *)(lVar59 + 0x20));
      local_261 = *(char *)(lVar59 + 0x19);
      local_218 = CONCAT71(local_218._1_7_,*(char *)(lVar59 + 0x1a));
      if ((*(char *)(lVar59 + 0x1a) != '\0' || local_261 != '\0') ||
         ((*(int *)(lVar59 + 0x1c) != *(int *)(lVar59 + 0x20) &&
          ((plVar49 == (longlong *)&DAT_0000002b || (*(byte *)(lVar59 + 0x16) == 2)))))) {
        local_208 = (longlong *)(lVar59 + 0x58);
        local_270 = (longlong *)(lVar59 + 0x150);
        local_230 = (undefined8 *)(lVar59 + 0x138);
        local_278 = (longlong *)(lVar59 + 0xc0);
        local_220 = (longlong *)(lVar59 + 0xa8);
        lVar50 = 0x40;
        plVar51 = (longlong *)0x0;
        local_238 = (undefined8 *)CONCAT44(local_238._4_4_,*(int *)(lVar59 + 0x1c));
        local_240 = plVar49;
        local_200 = lVar59;
        do {
          local_258 = plVar51;
          FUN_14002cd84(local_220,1);
          iVar34 = *(int *)(lVar59 + 0xb8) + -1;
          iVar21 = *(int *)(lVar59 + 0xb8) +
                   (int)((ulonglong)((longlong)iVar34 * -0x6db6db6d) >> 0x20) + -1;
          iVar21 = (iVar21 >> 5) - (iVar21 >> 0x1f);
          lVar56 = *(longlong *)(lVar59 + 0x58);
          lVar38 = *(longlong *)(*(longlong *)(lVar59 + 0xa8) + (longlong)iVar21 * 8);
          lVar37 = (ulonglong)(uint)(iVar34 + iVar21 * -0x38) * 0x120;
          pvVar43 = (void *)(lVar38 + lVar37);
          pvVar9 = *(void **)(lVar56 + -0x40 + lVar50);
          if ((0x50 < *(ushort *)(lVar38 + 0x72 + lVar37)) &&
             (*(longlong *)((longlong)pvVar43 + 0x20) != 0)) {
            FUN_1400020a8();
          }
          *(undefined2 *)((longlong)pvVar43 + 0x72) = 0;
          *(undefined8 *)((longlong)pvVar43 + 0x20) = 0;
          if (pvVar43 != pvVar9) {
            pvVar29 = *(void **)((longlong)pvVar9 + 0x10);
            if (*(void **)((longlong)pvVar9 + 0x10) == (void *)0x0) {
              pvVar29 = pvVar9;
            }
            iVar21 = *(int *)((longlong)pvVar9 + 0x18);
            *(int *)((longlong)pvVar43 + 0x18) = iVar21;
            if (iVar21 == 0 && *(int *)((longlong)pvVar43 + 0x1c) == 0) {
              *(undefined4 *)((longlong)pvVar43 + 0x1c) = 2;
            }
            else {
              FUN_14470ca02(pvVar43,iVar21);
              if (iVar21 != 0) {
                _Dst = *(void **)((longlong)pvVar43 + 0x10);
                if (*(void **)((longlong)pvVar43 + 0x10) == (void *)0x0) {
                  _Dst = pvVar43;
                }
                memcpy(_Dst,pvVar29,(longlong)iVar21 << 3);
              }
            }
          }
          *(undefined2 *)((longlong)pvVar43 + 0x70) = *(undefined2 *)((longlong)pvVar9 + 0x70);
          uVar58 = (ulonglong)*(ushort *)((longlong)pvVar9 + 0x72);
          *(ushort *)((longlong)pvVar43 + 0x72) = *(ushort *)((longlong)pvVar9 + 0x72);
          if (uVar58 < 0x51) {
LAB_1402620e4:
            puVar31 = (undefined8 *)((longlong)pvVar9 + 0x20);
            puVar40 = (undefined8 *)((longlong)pvVar43 + 0x20);
            for (lVar38 = 10; lVar38 != 0; lVar38 = lVar38 + -1) {
              *puVar40 = *puVar31;
              puVar31 = puVar31 + 1;
              puVar40 = puVar40 + 1;
            }
          }
          else {
            pvVar29 = (void *)FUN_14001cc68(uVar58,0x10);
            *(undefined8 *)((longlong)pvVar43 + 0x20) = pvVar29;
            if (*(ushort *)((longlong)pvVar9 + 0x72) < 0x51) goto LAB_1402620e4;
            memcpy(pvVar29,*(void **)((longlong)pvVar9 + 0x20),uVar58);
          }
          FUN_147243e48((longlong)pvVar43 + 0x78,(longlong)pvVar9 + 0x78);
          uVar66 = *(undefined4 *)((longlong)pvVar9 + 0xe4);
          uVar67 = *(undefined4 *)((longlong)pvVar9 + 0xe8);
          uVar6 = *(undefined4 *)((longlong)pvVar9 + 0xec);
          uVar10 = *(undefined8 *)((longlong)pvVar9 + 0xf0);
          uVar44 = *(undefined8 *)((longlong)pvVar9 + 0xf8);
          uVar12 = *(undefined4 *)((longlong)pvVar9 + 0x100);
          uVar13 = *(undefined4 *)((longlong)pvVar9 + 0x104);
          uVar14 = *(undefined4 *)((longlong)pvVar9 + 0x108);
          uVar15 = *(undefined4 *)((longlong)pvVar9 + 0x10c);
          uVar16 = *(undefined4 *)((longlong)pvVar9 + 0x10d);
          uVar17 = *(undefined4 *)((longlong)pvVar9 + 0x111);
          uVar18 = *(undefined4 *)((longlong)pvVar9 + 0x115);
          uVar19 = *(undefined4 *)((longlong)pvVar9 + 0x119);
          *(undefined4 *)((longlong)pvVar43 + 0xe0) = *(undefined4 *)((longlong)pvVar9 + 0xe0);
          *(undefined4 *)((longlong)pvVar43 + 0xe4) = uVar66;
          *(undefined4 *)((longlong)pvVar43 + 0xe8) = uVar67;
          *(undefined4 *)((longlong)pvVar43 + 0xec) = uVar6;
          *(undefined8 *)((longlong)pvVar43 + 0xf0) = uVar10;
          *(undefined8 *)((longlong)pvVar43 + 0xf8) = uVar44;
          *(undefined4 *)((longlong)pvVar43 + 0x100) = uVar12;
          *(undefined4 *)((longlong)pvVar43 + 0x104) = uVar13;
          *(undefined4 *)((longlong)pvVar43 + 0x108) = uVar14;
          *(undefined4 *)((longlong)pvVar43 + 0x10c) = uVar15;
          *(undefined4 *)((longlong)pvVar43 + 0x10d) = uVar16;
          *(undefined4 *)((longlong)pvVar43 + 0x111) = uVar17;
          *(undefined4 *)((longlong)pvVar43 + 0x115) = uVar18;
          *(undefined4 *)((longlong)pvVar43 + 0x119) = uVar19;
          iVar21 = 0;
          if ((char)local_218 == '\0') {
            uVar22 = *(uint *)(lVar56 + -4 + lVar50);
            if (local_261 == '\0') {
              iVar21 = (int)(uVar22 << 0x1a) >> 0x1d;
            }
            else {
              uVar22 = uVar22 & 0x38;
              iVar21 = (uVar22 != 0x10) + 1;
              if (uVar22 == 0) {
                iVar21 = 0;
              }
            }
          }
          if ((*(uint *)((longlong)pvVar9 + 0xe8) >> 0x1e & 1) == 0) {
            AcquireSRWLockShared((PSRWLOCK)&DAT_14ca09618);
            lVar38 = (ulonglong)(*(uint *)((longlong)pvVar9 + 0xe8) & 0x3fffffff) * 0xa8 +
                     DAT_14ca09620;
            ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca09618);
          }
          else {
            lVar38 = (ulonglong)(*(uint *)((longlong)pvVar9 + 0xe8) & 0x3fffffff) * 0xa0 +
                     *local_278;
          }
          puVar31 = local_238;
          iVar34 = (int)local_238;
          FUN_147243eb2(&local_1b8,lVar38);
          local_158 = *(undefined8 *)(lVar38 + 0x60);
          local_148 = *(undefined8 *)(lVar38 + 0x70);
          local_140 = *(undefined4 *)(lVar38 + 0x78);
          uStack_13c = *(undefined4 *)(lVar38 + 0x7c);
          uStack_138 = *(undefined4 *)(lVar38 + 0x80);
          uStack_134 = *(undefined4 *)(lVar38 + 0x84);
          local_130 = *(undefined1 *)(lVar38 + 0x88);
          local_12f = *(undefined1 *)(lVar38 + 0x89);
          local_12e = *(undefined1 *)(lVar38 + 0x8a);
          local_12c = *(undefined4 *)(lVar38 + 0x8c);
          local_128 = *(undefined8 *)(lVar38 + 0x90);
          local_120 = *(undefined4 *)(lVar38 + 0x98);
          uVar22 = *(uint *)(lVar56 + -4 + lVar50);
          if ((uVar22 & 7) == 0) {
            puVar28 = &DAT_14c9c0e48;
            if (iVar21 == 2) {
              puVar28 = &DAT_14c9c0e60;
            }
            puVar39 = &DAT_14c9c0e78;
          }
          else if ((int)(uVar22 << 0x1d) >> 0x1d == 1) {
            puVar28 = &DAT_14c9c0e00;
            if (iVar21 == 2) {
              puVar28 = &DAT_14c9c0e18;
            }
            puVar39 = &DAT_14c9c0e30;
          }
          else {
            puVar28 = &DAT_14c9c0d58;
            if (iVar21 == 2) {
              puVar28 = &DAT_14c9c0de8;
            }
            puVar39 = &DAT_14c9c0da0;
          }
          if (iVar21 == 0) {
            puVar28 = puVar39;
          }
          local_150 = *(undefined8 *)(puVar28 + 0x10);
          if ((iVar34 != (int)local_248) &&
             ((plVar49 == (longlong *)&DAT_0000002b || ((int)plVar49 == 2)))) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c9b61e0) && (FUN_144b3d300(&DAT_14c9b61e0), DAT_14c9b61e0 == -1))
            {
              if (DAT_14c8407a8 == (longlong *)0x0) {
                FUN_1414b00ea();
              }
              plVar30 = (longlong *)
                        (**(code **)(*DAT_14c8407a8 + 200))
                                  (DAT_14c8407a8,L"r.BasePassOutputsVelocityDebug",1);
              if (plVar30 == (longlong *)0x0) {
                DAT_14c9b61d8 = 0;
              }
              else {
                DAT_14c9b61d8 = (**(code **)(*plVar30 + 0x68))(plVar30);
              }
              _Init_thread_footer(&DAT_14c9b61e0);
            }
            puVar28 = &DAT_14c9c0e90;
            if (((ulonglong)puVar31 & 2) == 0) {
              puVar28 = &DAT_14c9c07b0;
            }
            local_148 = *(undefined8 *)(puVar28 + 0x10);
          }
          FUN_144ab1e58(&local_1c0,&local_1b8,local_278,local_230);
          *(undefined4 *)((longlong)pvVar43 + 0xe8) = (undefined4)local_1c0;
          uVar66 = *(undefined4 *)(lVar56 + -0x10 + lVar50);
          uVar10 = *(undefined8 *)(lVar56 + -0x18 + lVar50);
          bVar33 = *(byte *)(lVar56 + -8 + lVar50);
          uVar67 = *(undefined4 *)(lVar56 + -0xc + lVar50);
          uVar44 = *(undefined8 *)(lVar56 + -0x38 + lVar50);
          local_c8 = *(undefined ***)(lVar56 + -0x30 + lVar50);
          bVar4 = *(byte *)(lVar56 + lVar50);
          uVar22 = *(uint *)(lVar56 + -4 + lVar50);
          uVar6 = *(undefined4 *)(lVar56 + -0x20 + lVar50);
          plStack_c0 = (longlong *)
                       CONCAT44(plStack_c0._4_4_,*(undefined4 *)(lVar56 + -0x28 + lVar50));
          iVar21 = *(int *)(lVar59 + 0x158);
          lVar56 = (longlong)iVar21;
          *(uint *)(lVar59 + 0x158) = iVar21 + 1U;
          if (*(uint *)(lVar59 + 0x15c) < iVar21 + 1U) {
            local_210 = uVar6;
            local_1f8 = uVar44;
            local_1f0 = lVar50;
            FUN_1448b96b0(local_270,iVar21);
            uVar44 = local_1f8;
            lVar50 = local_1f0;
            lVar59 = local_200;
            uVar6 = local_210;
          }
          lVar38 = *local_270;
          *(void **)(lVar38 + lVar56 * 0x48) = pvVar43;
          *(undefined8 *)(lVar38 + 8 + lVar56 * 0x48) = uVar44;
          *(undefined ***)(lVar38 + 0x10 + lVar56 * 0x48) = local_c8;
          *(int *)(lVar38 + 0x18 + lVar56 * 0x48) = (int)plStack_c0;
          *(undefined4 *)(lVar38 + 0x1c + lVar56 * 0x48) = 0xffffffff;
          *(undefined4 *)(lVar38 + 0x20 + lVar56 * 0x48) = uVar6;
          *(undefined8 *)(lVar38 + 0x28 + lVar56 * 0x48) = uVar10;
          *(undefined4 *)(lVar38 + 0x30 + lVar56 * 0x48) = uVar66;
          *(undefined4 *)(lVar38 + 0x34 + lVar56 * 0x48) = uVar67;
          *(byte *)(lVar38 + 0x38 + lVar56 * 0x48) = bVar33 & 3;
          *(uint *)(lVar38 + 0x3c + lVar56 * 0x48) = uVar22 & 0x3f;
          *(byte *)(lVar38 + 0x40 + lVar56 * 0x48) = bVar4 & 0x3f;
          if (CONCAT44(uStack_16c,local_170) != 0) {
            FUN_140021284();
          }
          plVar49 = local_240;
          plVar30 = local_260;
          if (local_178 != (longlong *)0x0) {
            FUN_140021284();
          }
          if (local_180 != 0) {
            FUN_140021284();
          }
          plVar51 = local_258;
          if (CONCAT44(iStack_184,local_188) != 0) {
            FUN_140021284();
          }
          plVar51 = (longlong *)((longlong)plVar51 + 1);
          lVar50 = lVar50 + 0x48;
        } while ((longlong)plVar51 < (longlong)*(int *)(lVar59 + 0x60));
        lVar50 = *local_208;
        uVar58 = local_208[1];
        lVar56 = local_270[1];
        *local_208 = *local_270;
        local_208[1] = lVar56;
        local_1b8._0_4_ = (undefined4)lVar50;
        local_1b8._4_4_ = (undefined4)((ulonglong)lVar50 >> 0x20);
        uStack_1b0._0_4_ = (int)uVar58;
        uStack_1b0._4_4_ = (int)(uVar58 >> 0x20);
        *(undefined4 *)local_270 = (undefined4)local_1b8;
        *(undefined4 *)((longlong)local_270 + 4) = local_1b8._4_4_;
        *(int *)(local_270 + 1) = (int)uStack_1b0;
        *(int *)((longlong)local_270 + 0xc) = uStack_1b0._4_4_;
        *(undefined4 *)(lVar59 + 0x158) = 0;
        local_1b8 = lVar50;
        uStack_1b0 = uVar58;
        if (*(int *)(lVar59 + 0x15c) < 0) {
          FUN_14482a268(local_270,0);
        }
      }
    }
    lVar50 = DAT_14ca1c600;
    lVar59 = DAT_14ca09468;
    plVar30 = (longlong *)*plVar30;
    if ((char)local_24c == '\0') {
      if ((int)plVar30[0x2c] != 0xf) {
        iVar21 = *(int *)(*plVar30 + 0x3020);
        uVar5 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(*plVar30 + 0x3090) * 2);
        iVar34 = *local_228;
        if (((iVar34 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar34 == 2)) {
          uVar58 = 0;
        }
        else if (iVar34 == 1) {
          DVar26 = FUN_140ad26c0();
          DVar27 = GetCurrentThreadId();
          uVar58 = (ulonglong)(DVar26 != DVar27);
        }
        else {
          uVar58 = 1;
        }
        if (*(int *)(lVar50 + uVar58 * 4) < 1) {
          bVar61 = false;
        }
        else if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar5 * 0xf) & 2) == 0) ||
                (DAT_14ca84f5c != '\x01')) {
          bVar61 = false;
        }
        else {
          bVar61 = *(int *)(DAT_14ca1c618 + 4) != 0 && iVar21 != 3;
        }
        lVar59 = *local_260;
        uVar22 = 2;
        if ((ulonglong)*(uint *)(lVar59 + 0x160) < 7) {
          uVar22 = *(uint *)(&DAT_14a291548 + (ulonglong)*(uint *)(lVar59 + 0x160) * 4);
        }
        uVar24 = 3;
        if ((int)*(uint *)(DAT_14ca1c630 + 4) < 3) {
          uVar24 = *(uint *)(DAT_14ca1c630 + 4);
        }
        uVar55 = 0;
        if (0 < (int)uVar24) {
          uVar55 = uVar24;
        }
        if (0 < *(int *)(lVar59 + 0x60)) {
          plVar30 = *(longlong **)(lVar59 + 0x220);
          iVar21 = *(int *)(lVar59 + 0x164);
          lVar50 = 8;
          lVar56 = 0;
          do {
            lVar38 = *(longlong *)(lVar59 + 0x58);
            uVar24 = *(uint *)(lVar38 + 0xc + lVar50);
            pdVar60 = (double *)&DAT_14c8464e0;
            if (-1 < (int)uVar24) {
              pdVar60 = (double *)
                        ((ulonglong)((uVar24 & 0x3ff) * 0x48) +
                        **(longlong **)(*plVar30 + (ulonglong)(uVar24 >> 10) * 8));
            }
            dVar64 = *pdVar60;
            dVar11 = pdVar60[1];
            dVar65 = pdVar60[2];
            if (iVar21 == 2) {
              dVar64 = (dVar65 - *(double *)(lVar59 + 400)) * *(double *)(lVar59 + 0x178) +
                       (dVar64 - *(double *)(lVar59 + 0x180)) * *(double *)(lVar59 + 0x168) +
                       (dVar11 - *(double *)(lVar59 + 0x188)) * *(double *)(lVar59 + 0x170);
            }
            else if (iVar21 == 0) {
              dVar65 = dVar65 - *(double *)(lVar59 + 400);
              dVar11 = dVar11 - *(double *)(lVar59 + 0x188);
              dVar64 = dVar64 - *(double *)(lVar59 + 0x180);
              dVar64 = SQRT(dVar65 * dVar65 + dVar64 * dVar64 + dVar11 * dVar11);
            }
            else {
              dVar64 = dVar65 * *(double *)(lVar59 + 0x1f0) +
                       dVar11 * *(double *)(lVar59 + 0x1d0) + dVar64 * *(double *)(lVar59 + 0x1b0) +
                       *(double *)(lVar59 + 0x210);
            }
            fVar63 = (float)(*(ulonglong *)(lVar38 + lVar50) >> 0x10) + (float)dVar64;
            if ((bool)(bVar61 & (uVar55 & uVar22) != 0)) {
              fVar63 = 1e+06 - fVar63;
            }
            *(ulonglong *)(lVar38 + lVar50) =
                 *(ulonglong *)(lVar38 + lVar50) & 0xffff00000000ffff |
                 (ulonglong)~(((int)fVar63 >> 0x1f | 0x80000000U) ^ (uint)fVar63) << 0x10;
            lVar56 = lVar56 + 1;
            lVar50 = lVar50 + 0x48;
          } while (lVar56 < *(int *)(lVar59 + 0x60));
        }
      }
    }
    else {
      local_270 = (longlong *)plVar30[0x44];
      uVar22 = *(uint *)(plVar30 + 0xc);
      plVar49 = (longlong *)(ulonglong)uVar22;
      iVar21 = *local_228;
      if (iVar21 == 0x40000002) {
        uVar58 = 0;
      }
      else {
        bVar61 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar21 != 2)) {
          if (iVar21 == 1) {
            DVar26 = FUN_140ad26c0();
            DVar27 = GetCurrentThreadId();
            bVar61 = DVar26 == DVar27;
          }
          else {
            bVar61 = false;
          }
        }
        uVar58 = (ulonglong)(bVar61 ^ 1);
      }
      if (*(int *)(lVar59 + uVar58 * 4) == 1) {
        if (0 < (int)uVar22) {
          lVar59 = 0;
          do {
            lVar50 = plVar30[0xb];
            uVar58 = *(ulonglong *)(lVar50 + 8 + lVar59);
            bVar61 = (uVar58 & 0x1000000000000) != 0;
            iVar21 = *(int *)(lVar50 + 0x14 + lVar59);
            fVar63 = 0.0;
            if (iVar21 < (int)local_270[2]) {
              iVar34 = iVar21 + 0x3ff;
              if (-1 < iVar21) {
                iVar34 = iVar21;
              }
              lVar56 = **(longlong **)(*local_270 + (longlong)(iVar34 >> 10) * 8);
              lVar38 = (longlong)(iVar21 % 0x400);
              dVar65 = *(double *)(lVar56 + 0x10 + lVar38 * 0x48) - (double)plVar30[0x32];
              dVar11 = *(double *)(lVar56 + 8 + lVar38 * 0x48) - (double)plVar30[0x31];
              dVar64 = *(double *)(lVar56 + lVar38 * 0x48) - (double)plVar30[0x30];
              fVar63 = (float)SQRT(dVar65 * dVar65 + dVar64 * dVar64 + dVar11 * dVar11);
              bVar61 = 500000.0 < *(double *)(lVar56 + 0x30 + lVar38 * 0x48) ||
                       (uVar58 & 0x1000000000000) != 0;
            }
            uVar22 = *(uint *)(lVar50 + 0x20 + lVar59);
            if ((int)uVar22 < 0) {
              uVar52 = *(ulonglong *)(*(longlong *)(lVar50 + lVar59) + 0xe0);
              uVar22 = ((uint)(uVar52 >> 0x14) & 0xffff ^ (uint)(uVar52 >> 4)) * -0x7a143595;
              uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
              uVar22 = uVar22 >> 0x10 ^ uVar22;
            }
            uVar52 = 0;
            if ((uVar58 & 0xfffe000000000000) == 0x2000000000000) {
              uVar52 = 0x8000000000000000;
            }
            uVar58 = 0;
            if (bVar61) {
              uVar58 = 0x4000000000000000;
            }
            *(ulonglong *)(lVar50 + 8 + lVar59) =
                 (ulonglong)(uVar22 & 0x1ffffff) |
                 (ulonglong)((((int)fVar63 >> 0x1f | 0x80000000U) ^ (uint)fVar63) >> 0x11) << 0x2f |
                 uVar52 | uVar58 |
                 (ulonglong)(*(uint *)(*(longlong *)(lVar50 + lVar59) + 0xe8) & 0x3fffff) << 0x19;
            lVar59 = lVar59 + 0x48;
          } while ((longlong)plVar49 * 0x48 != lVar59);
        }
      }
      else {
        local_198 = (undefined8 *)0x0;
        iStack_190 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        uStack_18c = 0x80;
        local_188 = -1;
        iStack_184 = 0;
        local_178 = (longlong *)0x0;
        local_170 = 0;
        FUN_1446f4a44(&local_1b8,0x100);
        uVar58 = uStack_1b0;
        iVar21 = (int)uStack_1b0;
        lVar59 = (longlong)(int)uStack_1b0;
        uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(int)uStack_1b0 + 0x100);
        if ((uint)(uStack_1b0._4_4_ - iVar21) < 0x100) {
          FUN_1447711aa(&local_1b8,uVar58 & 0xffffffff);
        }
        if (iVar21 < 0x100) {
          piVar41 = (int *)(local_1b8 + 0x1fe4);
          iVar21 = 0xff;
          lVar50 = 0x100;
          do {
            if (iStack_184 == 0) {
              iVar34 = (int)lVar50 + -1;
            }
            else {
              *(int *)(local_1b8 + (longlong)local_188 * 0x20) = (int)lVar50 + -1;
              iVar34 = iVar21;
            }
            piVar41[-1] = -1;
            iVar23 = -1;
            if (0 < iStack_184) {
              iVar23 = local_188;
            }
            *piVar41 = iVar23;
            local_188 = iVar34;
            iStack_184 = iStack_184 + 1;
            iVar21 = iVar21 + -1;
            lVar50 = lVar50 + -1;
            piVar41 = piVar41 + -8;
          } while (lVar59 < lVar50);
        }
        iStack_190 = 0x100;
        if (uStack_18c + 0x1f < 0x100) {
          FUN_1446efa72(&local_198,0,8,4);
          uStack_18c = 0x100;
        }
        puVar31 = local_198;
        if (local_198 == (undefined8 *)0x0) {
          puVar31 = local_1a8;
        }
        puVar31[2] = 0;
        puVar31[3] = 0;
        *puVar31 = 0;
        puVar31[1] = 0;
        iVar21 = iStack_190 + 0x1f;
        if (-1 < iStack_190) {
          iVar21 = iStack_190;
        }
        if (iStack_190 % 0x20 != 0) {
          puVar31 = local_198;
          if (local_198 == (undefined8 *)0x0) {
            puVar31 = local_1a8;
          }
          bVar33 = -(char)(iStack_190 % 0x20);
          *(uint *)((longlong)puVar31 + (longlong)(iVar21 >> 5) * 4) =
               (uint)(*(int *)((longlong)puVar31 + (longlong)(iVar21 >> 5) * 4) << (bVar33 & 0x1f))
               >> (bVar33 & 0x1f);
        }
        if (local_170 < 0x100) {
          local_170 = 0x100;
          FUN_142df0dd8();
        }
        local_a8 = (longlong *)0x0;
        local_a0 = 0;
        local_c8 = (undefined **)0x0;
        plStack_c0 = (longlong *)0x0;
        local_9c = 0xffffffff00000080;
        local_94 = 0;
        local_88 = (undefined1 *)0x0;
        local_80 = 0;
        FUN_147248afe(&local_c8);
        if (local_80 < 0x200) {
          local_80 = 0x200;
          FUN_14497651e();
        }
        if (0 < (int)uVar22) {
          plVar51 = (longlong *)0x0;
          do {
            iVar34 = local_188;
            uVar58 = uStack_1b0;
            iVar21 = *(int *)(plVar30[0xb] + 0x14 + (longlong)plVar51 * 0x48);
            fVar63 = 0.0;
            if (iVar21 < (int)local_270[2]) {
              iVar23 = iVar21 + 0x3ff;
              if (-1 < iVar21) {
                iVar23 = iVar21;
              }
              lVar59 = **(longlong **)(*local_270 + (longlong)(iVar23 >> 10) * 8);
              lVar50 = (longlong)(iVar21 % 0x400);
              dVar64 = *(double *)(lVar59 + 0x10 + lVar50 * 0x48) - (double)plVar30[0x32];
              dVar11 = *(double *)(lVar59 + 8 + lVar50 * 0x48) - (double)plVar30[0x31];
              dVar65 = *(double *)(lVar59 + lVar50 * 0x48) - (double)plVar30[0x30];
              fVar63 = (float)SQRT(dVar64 * dVar64 + dVar65 * dVar65 + dVar11 * dVar11);
            }
            plVar48 = (longlong *)(plVar30[0xb] + (longlong)plVar51 * 0x48);
            uVar22 = *(uint *)(*plVar48 + 0xe8);
            iVar21 = (int)uStack_1b0;
            if ((int)uStack_1b0 != iStack_184) {
              plVar42 = local_178;
              if (local_178 == (longlong *)0x0) {
                plVar42 = &local_180;
              }
              iVar23 = *(int *)((longlong)plVar42 + (ulonglong)(local_170 - 1U & uVar22) * 4);
              while (iVar23 != -1) {
                lVar59 = local_1b8 + (longlong)iVar23 * 0x20;
                if (*(uint *)(local_1b8 + (longlong)iVar23 * 0x20) == uVar22) {
                  if (lVar59 != 0) goto LAB_14026360a;
                  break;
                }
                iVar23 = *(int *)(lVar59 + 0x18);
              }
            }
            local_278 = plVar48;
            if (iStack_184 == 0) {
              uStack_1b0 = CONCAT44(uStack_1b0._4_4_,(int)uStack_1b0 + 1);
              if (uStack_1b0._4_4_ == iVar21) {
                FUN_1447711aa(&local_1b8,uVar58 & 0xffffffff);
              }
              iVar34 = iStack_190;
              if (iStack_190 == 0) {
                iVar23 = -1;
              }
              else {
                iVar23 = iStack_190 + 0x1e;
                if (-1 < iStack_190 + -1) {
                  iVar23 = iStack_190 + -1;
                }
                iVar23 = iVar23 >> 5;
              }
              iVar35 = iStack_190 + 1;
              iVar46 = iStack_190 + 0x1f;
              if (-1 < iStack_190) {
                iVar46 = iStack_190;
              }
              local_258 = plVar51;
              if (iVar46 >> 5 == iVar23) {
                iStack_190 = iVar35;
              }
              else {
                if ((int)uStack_18c <= iStack_190) {
                  if (iStack_190 + 0x20U < 0xa0) {
                    uStack_18c = 0x80;
                  }
                  else {
                    uVar24 = iStack_190 + 0x20U >> 5;
                    if (uStack_18c + 0x1f < 0xa0) {
                      uVar55 = 4;
                      if (4 < uVar24) {
                        uVar55 = uVar24;
                      }
                    }
                    else {
                      uVar55 = uVar24 + (uVar24 * 3 >> 3) + 0x10;
                    }
                    uVar58 = (ulonglong)(uVar55 * 4);
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar25 = (uint)(uVar58 + 0xf);
                        if (uVar55 < 0x1ffd) {
                          uVar58 = (ulonglong)
                                   (ushort)(&DAT_14c841d90)
                                           [0x32 - (byte)(&DAT_14c841e00)[uVar58 + 0xf >> 4]];
                        }
                        else {
                          uVar55 = uVar25 & 0xfffffff0;
                          if (uVar55 < 0x7ff1) {
                            bVar33 = (&DAT_14c841e00)[uVar25 >> 4];
                            uVar52 = 0x32;
                            if (0x32 < bVar33) {
                              uVar52 = (ulonglong)bVar33;
                            }
                            uVar54 = 0x32 - (ulonglong)bVar33;
                            do {
                              uVar58 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar54 & 0xffffffff];
                              if (((&DAT_14c841d90)[uVar54 & 0xffffffff] & 0xf) == 0)
                              goto LAB_14026384d;
                              lVar59 = uVar52 + 1 + uVar54;
                              uVar54 = uVar54 - 1;
                            } while (lVar59 != 0x33);
                          }
                          uVar58 = (ulonglong)DAT_14c841df8;
                          if (DAT_14c841df8 < 0x11) {
                            uVar58 = 0x10;
                          }
                          uVar58 = -uVar58 & (uVar55 + uVar58) - 1;
                        }
                      }
                      else {
                        uVar58 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar58,0);
                      }
                    }
LAB_14026384d:
                    iVar23 = (int)(uVar58 >> 2);
                    uStack_18c = iVar23 << 5;
                    if (iVar23 < (int)uVar24) {
                      uStack_18c = 0xffffffe0;
                    }
                  }
                  FUN_1446efbd8(local_1a8,iStack_190);
                  iVar35 = iStack_190 + 1;
                }
                iVar23 = iVar35 + 0x1f;
                if (-1 < iVar35) {
                  iVar23 = iVar35;
                }
                iStack_190 = iVar35;
                if (iVar35 % 0x20 != 0) {
                  puVar31 = local_198;
                  if (local_198 == (undefined8 *)0x0) {
                    puVar31 = local_1a8;
                  }
                  bVar33 = -(char)(iVar35 % 0x20);
                  *(uint *)((longlong)puVar31 + (longlong)(iVar23 >> 5) * 4) =
                       (uint)(*(int *)((longlong)puVar31 + (longlong)(iVar23 >> 5) * 4) <<
                             (bVar33 & 0x1f)) >> (bVar33 & 0x1f);
                }
              }
              lVar59 = (longlong)iVar21;
              puVar31 = local_198;
              if (local_198 == (undefined8 *)0x0) {
                puVar31 = local_1a8;
              }
              bVar33 = (byte)iVar34 & 0x1f;
              puVar1 = (uint *)((longlong)puVar31 + (longlong)(iVar46 >> 5) * 4);
              *puVar1 = *puVar1 & (-2 << bVar33 | 0xfffffffeU >> 0x20 - bVar33);
              plVar51 = local_258;
              iVar34 = iVar21;
            }
            else {
              lVar59 = (longlong)local_188;
              local_188 = *(int *)(local_1b8 + 4 + lVar59 * 0x20);
              iStack_184 = iStack_184 + -1;
              if (iStack_184 != 0) {
                *(undefined4 *)(local_1b8 + (longlong)local_188 * 0x20) = 0xffffffff;
              }
            }
            plVar48 = local_278;
            uVar24 = 1 << ((byte)iVar34 & 0x1f);
            puVar31 = local_198;
            if (local_198 == (undefined8 *)0x0) {
              puVar31 = local_1a8;
            }
            iVar21 = iVar34 + 0x1f;
            if (-1 < iVar34) {
              iVar21 = iVar34;
            }
            puVar1 = (uint *)((longlong)puVar31 + (longlong)(iVar21 >> 5) * 4);
            *puVar1 = *puVar1 | uVar24;
            iVar23 = 1;
            lVar59 = lVar59 * 0x20;
            puVar31 = (undefined8 *)(local_1b8 + lVar59);
            *(uint *)(local_1b8 + lVar59) = uVar22;
            puVar40 = (undefined8 *)(local_1b8 + 8 + lVar59);
            *puVar40 = 0;
            puVar40[1] = 0;
            *(undefined4 *)(local_1b8 + 0x18 + lVar59) = 0xffffffff;
            uVar55 = (int)uStack_1b0 - iStack_184;
            if (uVar55 != 1) {
              if ((int)uStack_1b0 != iStack_184) {
                plVar42 = local_178;
                if (local_178 == (longlong *)0x0) {
                  plVar42 = &local_180;
                }
                iVar35 = *(int *)((longlong)plVar42 + (ulonglong)(local_170 - 1U & uVar22) * 4);
                while (iVar35 != -1) {
                  puVar40 = (undefined8 *)(local_1b8 + (longlong)iVar35 * 0x20);
                  if (*(uint *)(local_1b8 + (longlong)iVar35 * 0x20) == uVar22) {
                    uVar10 = *puVar31;
                    uVar44 = puVar31[1];
                    puVar40[2] = puVar31[2];
                    *puVar40 = uVar10;
                    puVar40[1] = uVar44;
                    if (iStack_184 != 0) {
                      *(int *)(local_1b8 + (longlong)local_188 * 0x20) = iVar34;
                    }
                    *(undefined4 *)(local_1b8 + lVar59) = 0xffffffff;
                    iVar23 = -1;
                    if (0 < iStack_184) {
                      iVar23 = local_188;
                    }
                    *(int *)(local_1b8 + 4 + lVar59) = iVar23;
                    local_188 = iVar34;
                    iStack_184 = iStack_184 + 1;
                    puVar31 = local_198;
                    if (local_198 == (undefined8 *)0x0) {
                      puVar31 = local_1a8;
                    }
                    puVar1 = (uint *)((longlong)puVar31 + (longlong)(iVar21 >> 5) * 4);
                    *puVar1 = *puVar1 & (uVar24 ^ 0xffffffff);
                    goto LAB_1402635fa;
                  }
                  iVar35 = *(int *)(puVar40 + 3);
                }
              }
              if (3 < uVar55) {
                uVar58 = (ulonglong)(uVar55 & 0xfffffffe) + 0xf;
                lVar50 = 0x3f;
                if (uVar58 != 0) {
                  for (; uVar58 >> lVar50 == 0; lVar50 = lVar50 + -1) {
                  }
                }
                iVar23 = 1 << ((byte)lVar50 & 0x1f);
              }
            }
            if (((int)uVar55 < 1) || (iVar23 <= local_170)) {
              uVar24 = local_170 - 1U & uVar22;
              *(uint *)((longlong)puVar31 + 0x1c) = uVar24;
              plVar42 = local_178;
              if (local_178 == (longlong *)0x0) {
                plVar42 = &local_180;
              }
              *(undefined4 *)(puVar31 + 3) =
                   *(undefined4 *)
                    ((longlong)plVar42 + ((longlong)local_170 - 1U & (longlong)(int)uVar24) * 4);
              plVar42 = local_178;
              if (local_178 == (longlong *)0x0) {
                plVar42 = &local_180;
              }
              *(int *)((longlong)plVar42 + ((longlong)local_170 - 1U & (longlong)(int)uVar24) * 4) =
                   iVar34;
            }
            else {
              local_170 = iVar23;
              FUN_142df0dd8(&local_1b8);
            }
LAB_1402635fa:
            lVar59 = local_1b8 + lVar59;
LAB_14026360a:
            *(double *)(lVar59 + 8) = (double)fVar63 + *(double *)(lVar59 + 8);
            *(int *)(lVar59 + 0x10) = *(int *)(lVar59 + 0x10) + 1;
            uVar24 = *(uint *)(plVar48 + 4);
            if ((int)uVar24 < 0) {
              uVar24 = ((uint)(*(ulonglong *)(*plVar48 + 0xe0) >> 0x14) & 0xffff ^
                       (uint)(*(ulonglong *)(*plVar48 + 0xe0) >> 4)) * -0x7a143595;
              uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
              uVar24 = uVar24 >> 0x10 ^ uVar24;
            }
            local_1c0 = CONCAT44(uVar22,uVar24);
            local_1c4 = 0x7f7fc99e;
            pfVar32 = (float *)FUN_147248c82(&local_c8,uVar22 * 0x17 + uVar24,&local_1c0,&local_1c4)
            ;
            fVar62 = *pfVar32;
            if (fVar63 <= *pfVar32) {
              fVar62 = fVar63;
            }
            *pfVar32 = fVar62;
            plVar51 = (longlong *)((longlong)plVar51 + 1);
          } while (plVar51 != plVar49);
          plVar51 = (longlong *)0x0;
          do {
            lVar59 = plVar30[0xb];
            uVar58 = *(ulonglong *)(lVar59 + 8 + (longlong)plVar51 * 0x48);
            bVar61 = (uVar58 & 0x1000000000000) != 0;
            iVar21 = *(int *)(lVar59 + 0x14 + (longlong)plVar51 * 0x48);
            fVar63 = 0.0;
            if (iVar21 < (int)local_270[2]) {
              iVar34 = iVar21 + 0x3ff;
              if (-1 < iVar21) {
                iVar34 = iVar21;
              }
              lVar50 = **(longlong **)(*local_270 + (longlong)(iVar34 >> 10) * 8);
              lVar56 = (longlong)(iVar21 % 0x400);
              dVar65 = *(double *)(lVar50 + 0x10 + lVar56 * 0x48) - (double)plVar30[0x32];
              dVar11 = *(double *)(lVar50 + 8 + lVar56 * 0x48) - (double)plVar30[0x31];
              dVar64 = *(double *)(lVar50 + lVar56 * 0x48) - (double)plVar30[0x30];
              fVar63 = (float)SQRT(dVar65 * dVar65 + dVar64 * dVar64 + dVar11 * dVar11);
              bVar61 = 500000.0 < *(double *)(lVar50 + 0x30 + lVar56 * 0x48) ||
                       (uVar58 & 0x1000000000000) != 0;
            }
            local_278 = (longlong *)(lVar59 + (longlong)plVar51 * 0x48);
            uVar22 = *(uint *)(*local_278 + 0xe8);
            uVar66 = 0;
            uVar67 = 0;
            if ((int)uStack_1b0 == iStack_184) {
LAB_140263ad4:
              iVar34 = 0;
            }
            else {
              plVar48 = local_178;
              if (local_178 == (longlong *)0x0) {
                plVar48 = &local_180;
              }
              iVar21 = *(int *)((longlong)plVar48 + (ulonglong)(local_170 - 1U & uVar22) * 4);
              if (iVar21 == -1) goto LAB_140263ad4;
              iVar34 = 0;
              do {
                lVar59 = local_1b8 + (longlong)iVar21 * 0x20;
                if (*(uint *)(local_1b8 + (longlong)iVar21 * 0x20) == uVar22) {
                  if (lVar59 != 0) {
                    uVar66 = (undefined4)*(undefined8 *)(lVar59 + 8);
                    uVar67 = (undefined4)((ulonglong)*(undefined8 *)(lVar59 + 8) >> 0x20);
                    iVar34 = *(int *)(lVar59 + 0x10);
                  }
                  break;
                }
                iVar21 = *(int *)(lVar59 + 0x18);
              } while (iVar21 != -1);
            }
            uVar24 = *(uint *)(local_278 + 4);
            if ((int)uVar24 < 0) {
              uVar52 = *(ulonglong *)(*local_278 + 0xe0);
              uVar24 = ((uint)(uVar52 >> 0x14) & 0xffff ^ (uint)(uVar52 >> 4)) * -0x7a143595;
              uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
              uVar24 = uVar24 >> 0x10 ^ uVar24;
            }
            uVar55 = 0;
            uVar25 = 0;
            if ((int)plStack_c0 != local_94) {
              puVar53 = local_88;
              if (local_88 == (undefined1 *)0x0) {
                puVar53 = local_90;
              }
              iVar21 = *(int *)(puVar53 + (ulonglong)(local_80 - 1U & uVar22 * 0x17 + uVar24) * 4);
              uVar55 = uVar25;
              if (iVar21 != -1) {
                do {
                  ppuVar2 = local_c8 + (longlong)iVar21 * 3;
                  if (*ppuVar2 == (undefined *)CONCAT44(uVar22,uVar24)) {
                    if (ppuVar2 != (undefined **)0x0) {
                      uVar55 = *(uint *)(ppuVar2 + 1);
                    }
                    break;
                  }
                  iVar21 = *(int *)(ppuVar2 + 2);
                } while (iVar21 != -1);
              }
            }
            uVar52 = 0;
            if ((uVar58 & 0xfffe000000000000) == 0x2000000000000) {
              uVar52 = 0x8000000000000000;
            }
            uVar58 = 0;
            if (bVar61) {
              uVar58 = 0x4000000000000000;
            }
            uVar25 = (uint)(float)((double)CONCAT44(uVar67,uVar66) / (double)iVar34) >> 0x17 & 0xff;
            if (0x93 < uVar25) {
              uVar25 = 0x94;
            }
            if (uVar25 < 0x86) {
              uVar25 = 0x85;
            }
            uVar55 = uVar55 >> 0x17 & 0xff;
            if (0x93 < uVar55) {
              uVar55 = 0x94;
            }
            if (uVar55 < 0x86) {
              uVar55 = 0x85;
            }
            if (1048576.0 <= fVar63) {
              fVar63 = 1048576.0;
            }
            local_278[1] = (ulonglong)((uint)(longlong)(fVar63 * 9.536743e-07 * 4095.0) & 0xfff) |
                           (ulonglong)(uVar24 << 0xc) |
                           (ulonglong)(uVar55 + 0xb & 0xf) << 0x20 |
                           (ulonglong)(uVar22 & 0x3fffff) << 0x24 | uVar58 | uVar52 |
                           (ulonglong)(uVar25 + 0xb & 0xf) << 0x3a;
            plVar51 = (longlong *)((longlong)plVar51 + 1);
          } while (plVar51 != plVar49);
        }
        local_80 = 0;
        if (local_88 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        FUN_14039a828(&local_c8);
        local_170 = 0;
        if (local_178 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar58 = uStack_1b0 >> 0x20;
        uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
        if ((int)uVar58 != 0) {
          FUN_1446f4a44(&local_1b8,0);
        }
        local_188 = 0xffffffff;
        iStack_184 = 0;
        iStack_190 = 0;
        if (0x80 < uStack_18c) {
          uStack_18c = 0x80;
          FUN_1446efbd8(local_1a8,0);
        }
        if (local_198 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (local_1b8 != 0) {
          FUN_1400020a8();
        }
      }
    }
    plVar30 = local_260;
    FUN_1448d57ff(*(undefined8 *)(*local_260 + 0x58),*(undefined4 *)(*local_260 + 0x60));
    lVar59 = *plVar30;
    if (*(char *)(lVar59 + 0x17) == '\x01') {
      local_288 = lVar59 + 0x22c;
      local_290 = lVar59 + 0x228;
      local_298 = lVar59 + 0x230;
      FUN_1401de39a(lVar59 + 0x240,lVar59 + 0x58,CONCAT71((int7)((ulonglong)local_290 >> 8),1),
                    *(undefined8 *)(lVar59 + 8));
    }
  }
  if ((local_20c == 0x60000000) || (local_20c == 0)) {
    *local_228 = local_20c;
  }
  if ((local_70 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140263e2a FUN_140263e2a body=302 status=ok
// SIG undefined FUN_140263e2a(void)

undefined4 *
FUN_140263e2a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405dc782(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  local_48[2] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_140263f5a(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140264164(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140263f5a FUN_140263f5a body=152 status=ok
// SIG undefined FUN_140263f5a(void)

void FUN_140263f5a(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_1406ea140(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)(puVar1 + 1);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_140263f7e;
    }
  }
  uVar2 = 0;
LAB_140263f7e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 140263ff2 FUN_140263ff2 body=370 status=ok
// SIG undefined FUN_140263ff2(void)

void FUN_140263ff2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14026407b;
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
LAB_14026407b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140264164 FUN_140264164 body=640 status=ok
// SIG undefined FUN_140264164(void)

void FUN_140264164(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1402641c7;
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
LAB_1402641c7:
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
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
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



// FUNCTION 1402643e4 FUN_1402643e4 body=1853 status=ok
// SIG undefined FUN_1402643e4(void)

void FUN_1402643e4(uint param_1,undefined8 *param_2,undefined8 *param_3,byte param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  code *pcVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  undefined1 auStack_1d8 [32];
  uint *local_1b8;
  undefined1 *local_1b0;
  uint local_1a4;
  ulonglong local_1a0;
  int local_198;
  undefined4 local_194;
  code *local_190;
  undefined8 local_188;
  int *local_180;
  undefined8 *local_178;
  code *local_170;
  undefined8 local_168;
  undefined2 local_160;
  undefined4 *local_158;
  uint local_150;
  undefined8 *local_148;
  int local_140;
  undefined4 uStack_13c;
  undefined1 local_131;
  uint local_130;
  uint local_12c;
  undefined1 local_125;
  uint local_124;
  undefined4 local_120 [16];
  undefined4 *local_e0;
  uint local_d8;
  undefined4 local_d4;
  undefined8 *local_d0;
  int local_c8;
  undefined1 local_c4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  pcVar14 = (code *)*param_3;
  uVar13 = 1;
  uVar21 = CONCAT71((int7)((ulonglong)param_2 >> 8),
                    (int)param_1 <= DAT_14c75f14c || DAT_14c75f14c < 1);
  if ((int)param_1 > DAT_14c75f14c && DAT_14c75f14c >= 1) {
    lVar2 = (longlong)(int)(param_1 + DAT_14c75f14c + -1);
    uVar21 = lVar2 % (longlong)DAT_14c75f14c & 0xffffffff;
    uVar13 = lVar2 / (longlong)DAT_14c75f14c & 0xffffffff;
  }
  local_e0 = (undefined4 *)0x0;
  local_d4 = 0x10;
  if (0 < (int)param_1) {
    param_4 = DAT_14c99384c != 0 | param_4;
    local_188 = param_3[1];
    bVar4 = FUN_1447e0190(DAT_14c99384c,uVar21);
    local_194 = (undefined4)CONCAT71((int7)(uVar21 >> 8),param_1 == 1);
    iVar6 = 0;
    local_198 = (int)uVar13;
    if (((~bVar4 | param_1 == 1 | param_4) & 1) == 0) {
      iVar6 = (int)(((int)(uVar13 >> 0x1f) + local_198 >> 1) + param_1) / local_198;
      if (DAT_14c8335d8 < iVar6) {
        iVar6 = DAT_14c8335d8;
      }
      local_194 = 0;
    }
    local_1a4 = CONCAT31(local_1a4._1_3_,param_4);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar22 = (uint)(*(undefined **)(lVar2 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar2 + 0x2c8) == 0
                   ) + iVar6;
    local_1a0 = (ulonglong)param_1;
    local_190 = pcVar14;
    if ((int)DAT_14c8c27ac < 1) {
      memset(&local_d0,0,0x82);
      local_158 = (undefined4 *)((ulonglong)local_158 & 0xffffffff00000000);
      local_140 = 0;
      local_148 = (undefined8 *)((ulonglong)local_148 & 0xffffffff00000000);
      FUN_140e55932(&local_d0,&local_158,&local_140,&local_148);
      uVar18 = (uint)local_148;
      local_1b0 = &local_125;
      local_1b8 = &local_12c;
      FUN_1457b80ec(local_140,(ulonglong)local_148 & 0xffffffff,&local_130,&local_124);
      DAT_14c8c27ac = uVar18;
      if ((0 < (int)local_12c) && (DAT_14c8c27ac = uVar18, (int)local_12c <= (int)uVar18)) {
        DAT_14c8c27ac = local_12c;
      }
    }
    uVar18 = DAT_14c8c27ac;
    if ((int)uVar22 < (int)DAT_14c8c27ac) {
      uVar18 = uVar22;
    }
    uVar22 = 1;
    if (1 < (int)uVar18) {
      uVar22 = uVar18;
    }
    local_d8 = uVar22;
    if (0x10 < (int)uVar18) {
      FUN_1401fcbb6(local_120,0);
    }
    local_180 = (int *)(lVar2 + 0x2c8);
    local_178 = (undefined8 *)(lVar2 + 0x2c0);
    uVar21 = 0;
    do {
      puVar9 = local_e0;
      if (local_e0 == (undefined4 *)0x0) {
        puVar9 = local_120;
      }
      local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,uVar22);
      local_158 = (undefined4 *)CONCAT44(local_158._4_4_,(int)uVar21);
      uVar7 = (*(code *)*param_2)(param_2[1],&local_158,&local_d0);
      pcVar14 = local_190;
      puVar9[uVar21] = uVar7;
      uVar18 = local_d8;
      uVar21 = uVar21 + 1;
    } while (uVar22 != uVar21);
    puVar9 = local_120;
    if (local_e0 != (undefined4 *)0x0) {
      puVar9 = local_e0;
    }
    local_150 = local_d8;
    local_170 = local_190;
    local_168 = local_188;
    local_160 = 0;
    local_158 = puVar9;
    bVar4 = FUN_1447e0190();
    iVar6 = 0;
    if (((((byte)local_194 | (byte)local_1a4 | ~bVar4) & 1) == 0) &&
       (iVar6 = (local_198 / 2 + (int)local_1a0) / local_198, DAT_14c8335d8 < iVar6)) {
      iVar6 = DAT_14c8335d8;
    }
    uVar22 = (uint)((undefined *)*local_178 != &DAT_14c82ba00 || *local_180 == 0) + iVar6;
    if ((int)DAT_14c8c27ac < 1) {
      local_1a4 = uVar18;
      memset(&local_d0,0,0x82);
      local_140 = 0;
      local_148 = (undefined8 *)((ulonglong)local_148 & 0xffffffff00000000);
      local_124 = 0;
      FUN_140e55932(&local_d0,&local_140,&local_148,&local_124);
      uVar16 = local_124;
      local_1b0 = &local_131;
      local_1b8 = &local_130;
      FUN_1457b80ec((ulonglong)local_148 & 0xffffffff,local_124,&local_125,&local_12c);
      pcVar14 = local_190;
      uVar18 = local_1a4;
      DAT_14c8c27ac = uVar16;
      if ((0 < (int)local_130) && ((int)local_130 <= (int)uVar16)) {
        DAT_14c8c27ac = local_130;
      }
    }
    uVar3 = local_188;
    uVar16 = DAT_14c8c27ac;
    if ((int)uVar22 < (int)DAT_14c8c27ac) {
      uVar16 = uVar22;
    }
    uVar21 = 1;
    if ((int)uVar16 < 2) {
      uVar16 = 1;
    }
    uVar22 = uVar18;
    if ((int)uVar16 < (int)uVar18) {
      uVar22 = uVar16;
    }
    if (uVar18 == 0) {
      uVar22 = uVar16;
    }
    iVar6 = (int)local_1a0;
    if ((int)uVar22 < 2) {
      iVar17 = 0;
      do {
        local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,*puVar9);
        local_140 = iVar17;
        (*pcVar14)(uVar3,&local_140,&local_d0);
        iVar17 = iVar17 + 1;
      } while (iVar6 != iVar17);
    }
    else {
      iVar17 = uVar22 * 6;
      iVar11 = iVar17 + iVar6 + -1;
      iVar19 = -6;
      uVar13 = local_1a0 & 0xffffffff;
      do {
        if (iVar17 <= iVar6) {
          uVar21 = (longlong)iVar11 / (longlong)iVar17 & 0xffffffff;
          iVar23 = (int)((longlong)iVar11 / (longlong)iVar17);
          uVar13 = (longlong)(iVar23 + iVar6 + -1) / (longlong)iVar23;
          iVar8 = (int)uVar13;
          uVar13 = uVar13 & 0xffffffff;
          if ((int)uVar22 <= iVar8) break;
        }
        iVar8 = (int)uVar13;
        iVar23 = (int)uVar21;
        iVar11 = iVar11 - uVar22;
        iVar17 = iVar17 - uVar22;
        iVar19 = iVar19 + 1;
      } while (iVar19 != 0);
      iVar6 = uVar22 - 1;
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar15 = 6;
      if ((*(byte *)(lVar2 + 0xc60) & 0x37) != 0) {
        uVar15 = 0;
      }
      FUN_144a85b52(&local_140,1);
      puVar1 = (undefined8 *)(lVar2 + 0x308);
      puVar10 = (uint *)*puVar1;
      if (puVar10 != (uint *)0x0) goto LAB_1402647c8;
      while( true ) {
        uVar22 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar22 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar22 | 1;
          __tlregdtor(&LAB_1429afcea);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar2 + 0x310);
        *(undefined8 *)(lVar2 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar1 = puVar9;
        FUN_140217a48(puVar1);
        puVar10 = (uint *)*puVar1;
LAB_1402647c8:
        puVar20 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 0x3fU & 0xffffffffffffffc0);
        puVar12 = (uint *)(puVar20 + 0x10);
        uVar22 = puVar10[0x12];
        if (puVar12 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar18 = *puVar10;
          *puVar10 = *puVar10 + uVar22 + 1;
          UNLOCK();
          if ((uVar18 ^ uVar22) != 0xffffffff) break;
          puVar10 = (uint *)*puVar1;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar1 = puVar10;
          puVar20 = (undefined8 *)((longlong)puVar10 + 0x97U & 0xffffffffffffffc0);
          puVar12 = (uint *)(puVar20 + 0x10);
          uVar22 = 0;
          if (puVar12 <= puVar10 + 0x4000) {
            uVar22 = 1;
            goto LAB_14026484f;
          }
        }
      }
      uVar22 = uVar22 + 1;
LAB_14026484f:
      *(uint **)(puVar10 + 0x10) = puVar12;
      puVar10[0x12] = uVar22;
      *puVar20 = &PTR_FUN_149e002e8;
      *(undefined4 *)(puVar20 + 1) = 0;
      *puVar20 = &PTR_FUN_149f52a30;
      puVar20[3] = L"PhysicsParallelForWithContext";
      *(undefined4 *)(puVar20 + 4) = 0;
      *(undefined4 *)(puVar20 + 5) = 0;
      *(int *)((longlong)puVar20 + 0x2c) = (int)local_1a0;
      *(int *)(puVar20 + 6) = iVar23;
      *(int *)((longlong)puVar20 + 0x34) = iVar8;
      puVar20[7] = &local_158;
      puVar20[8] = &local_170;
      puVar20[9] = &local_140;
      *(undefined1 *)(puVar20 + 10) = uVar15;
      puVar20[0xb] = 0;
      puVar20[0xc] = 0;
      *(int *)((longlong)puVar20 + 0x24) = iVar8;
      *(int *)(puVar20 + 0xc) = iVar6;
      FUN_1429b04fe(puVar20 + 0xb);
      FUN_1429b04c8(puVar20[0xb],iVar6);
      if (puVar20 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
        UNLOCK();
      }
      local_148 = puVar20;
      FUN_1429afe5e(&local_148);
      local_c4 = 0;
      local_d0 = puVar20;
      local_c8 = iVar6;
      cVar5 = FUN_1429afedc(&local_d0,1);
      if (cVar5 == '\0') {
        (**(code **)(*(longlong *)CONCAT44(uStack_13c,local_140) + 0x20))
                  ((longlong *)CONCAT44(uStack_13c,local_140),0xffffffff,0);
      }
      FUN_1429b02cc(&local_d0);
      FUN_144a75412(&local_140);
    }
    if (local_e0 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140264b22 FUN_140264b22 body=860 status=ok
// SIG undefined FUN_140264b22(void)

void FUN_140264b22(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar3 = (**(code **)(*(longlong *)(param_1 + -8) + 0x10))(param_1 + -8);
  if (cVar3 == '\0') goto LAB_140264c26;
  if (((((*(int *)(param_1 + 0x20) == 0) || (uVar2 = *(uint *)(param_1 + 0x1c), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x20))))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    lVar5 = FUN_14026506e(param_1 + -8);
    fVar7 = 0.0;
    if (lVar5 != 0) {
      if (DAT_14cba8288 == 0) {
        local_70 = &local_50;
        local_50 = FUN_141864c34;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_1464cee30;
        local_78 = &LAB_148bfac22;
        local_80 = &LAB_140f21842;
        local_88 = &DAT_149e063b2;
        local_90 = 0;
        local_98 = 0x10000004;
        local_a0 = 0x10;
        local_a8 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        if ((&DAT_000073ed)[lVar5] == '\x01') goto LAB_140264d0e;
        fVar7 = (float)FUN_140264e80();
      }
    }
  }
  else {
    fVar7 = 0.0;
    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
      if (DAT_14cba8288 == 0) {
        local_70 = &local_50;
        local_50 = FUN_141864c34;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_1464cee30;
        local_78 = &LAB_148bfac22;
        local_80 = &LAB_140f21842;
        local_88 = &DAT_149e063b2;
        local_90 = 0;
        local_98 = 0x10000004;
        local_a0 = 0x10;
        local_a8 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
LAB_140264d0e:
        fVar7 = (float)FUN_1401d646e(lVar5 + 0x71a8);
      }
    }
  }
  if (ABS(*(float *)(param_1 + 0x18) - fVar7) <= 1e-08) goto LAB_140264c26;
  FUN_1449027d0(param_1 + -0x38,&local_50);
  lVar5 = *(longlong *)(local_50 + 0x100);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x58));
  *(int *)(lVar5 + 0x50) = *(int *)(lVar5 + 0x50) + 1;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_48 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((fVar7 != *(float *)(lVar5 + 0x48)) || (NAN(fVar7) || NAN(*(float *)(lVar5 + 0x48)))) {
    iVar4 = *(int *)(lVar5 + 0x4c) + 1;
LAB_140264ca3:
    *(float *)(lVar5 + 0x48) = fVar7;
    *(int *)(lVar5 + 0x4c) = iVar4;
  }
  else if (*(int *)(lVar5 + 0x4c) == 0) {
    iVar4 = 1;
    goto LAB_140264ca3;
  }
  *(float *)(param_1 + 0x18) = fVar7;
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x58));
LAB_140264c26:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140264e80 FUN_140264e80 body=217 status=ok
// SIG undefined FUN_140264e80(void)

float FUN_140264e80(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  if ((*(byte *)(param_1 + 0x240) & 1) == 0) {
    fVar3 = 1.0;
    if ((*(char *)(param_1 + 0x245) != '\x01') &&
       ((*(float *)(param_1 + 0x340) != 0.0 || (NAN(*(float *)(param_1 + 0x340)))))) {
      lVar2 = FUN_1447210f0(0x3f800000);
      fVar3 = (float)(*(double *)(lVar2 + 0x6d0) - (double)*(float *)(param_1 + 0x344)) *
              *(float *)(param_1 + 0x340) + *(float *)(param_1 + 0x33c);
      if (1.0 <= fVar3) {
        fVar3 = 1.0;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
    }
  }
  else {
    cVar1 = FUN_1403ae288(param_1 + 0x2a0);
    if (cVar1 == '\0') {
      fVar3 = 1.0;
    }
    else {
      lVar2 = FUN_140280ec4(param_1 + 0x2a0);
      fVar4 = *(float *)(lVar2 + 0x30) - *(float *)(lVar2 + 0x24);
      fVar3 = 0.0;
      if ((fVar4 != 0.0) || (NAN(fVar4))) {
        fVar3 = (*(float *)(lVar2 + 200) - *(float *)(lVar2 + 0x24)) / fVar4;
      }
    }
  }
  return fVar3;
}



// FUNCTION 140264f5a FUN_140264f5a body=274 status=ok
// SIG undefined FUN_140264f5a(void)

undefined8 FUN_140264f5a(longlong param_1)

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
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = FUN_14026506e();
    if (lVar1 != 0) {
      if (DAT_14cba8288 == 0) {
        local_30 = &local_18;
        local_18 = FUN_141864c34;
        local_20 = FUN_14081d0ea;
        local_28 = &LAB_1464cee30;
        local_38 = &LAB_148bfac22;
        local_40 = &LAB_140f21842;
        local_48 = &DAT_149e063b2;
        local_50 = 0;
        local_58 = 0x10000004;
        local_60 = 0x10;
        local_68 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1),
         *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8)
         == DAT_14cba8288 + 0x30)) goto LAB_140264faf;
    }
  }
  uVar2 = 0;
LAB_140264faf:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026506e FUN_14026506e body=286 status=ok
// SIG undefined FUN_14026506e(void)

undefined8 FUN_14026506e(longlong param_1)

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
  lVar1 = *(longlong *)(param_1 + -0x10);
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3d0);
      goto LAB_1402650c8;
    }
  }
  uVar2 = 0;
LAB_1402650c8:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026518e FUN_14026518e body=20 status=ok
// SIG undefined FUN_14026518e(void)

undefined8 FUN_14026518e(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1402651d8 FUN_1402651d8 body=463 status=ok
// SIG undefined FUN_1402651d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402651d8(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  byte local_180;
  longlong local_178;
  undefined8 local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined8 local_150 [32];
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(longlong *)(param_1 + 0x760) != 0) {
    local_50 = (undefined8 *)0x0;
    local_48 = 0x1000000000;
    FUN_1402654aa(*(longlong *)(param_1 + 0x760),local_150);
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
    *(undefined8 *)(param_2 + 0x10) = 0;
    if (0 < (int)local_48) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb39dc8) {
        FUN_144b3d300(&DAT_14cb39dc8);
        if (DAT_14cb39dc8 == -1) {
          _DAT_14cb39db4 = 1;
          _DAT_14cb39db8 = 0x3f800000;
          uRam000000014cb39dbc = 0x3f800000;
          uRam000000014cb39dc0 = 0x3f800000;
          uRam000000014cb39dc4 = 0x3f800000;
          _Init_thread_footer(&DAT_14cb39dc8);
        }
      }
      local_158 = 0xffff0000;
      local_160 = &DAT_14cb39db4;
      puVar2 = local_150;
      if (local_50 != (undefined8 *)0x0) {
        puVar2 = local_50;
      }
      if ((longlong)(int)local_48 != 0) {
        puVar1 = puVar2 + (longlong)(int)local_48 * 2;
        do {
          local_168 = *puVar2;
          local_180 = (*(byte *)(param_1 + 0x2d2) & 4) >> 2;
          local_188 = param_3;
          local_178 = param_1;
          FUN_14478100e(param_2,param_1 + 0x160,&local_168,
                        (float)((double)*(float *)(puVar2 + 1) * *(double *)(param_1 + 400)));
          puVar2 = puVar2 + 2;
        } while (puVar2 != puVar1);
      }
    }
    FUN_1402653a8(*(undefined8 *)(param_1 + 0x760),param_1 + 0x160,param_2,param_3);
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402653a8 FUN_1402653a8 body=254 status=ok
// SIG undefined FUN_1402653a8(void)

void FUN_1402653a8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x30);
  local_60 = param_4;
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x110) != 0)) {
    plVar8 = *(longlong **)(lVar1 + 0x108);
    plVar7 = plVar8 + (longlong)*(int *)(lVar1 + 0x110) * 2;
    do {
      plVar2 = (longlong *)*plVar8;
      (**(code **)(*plVar2 + 0x78))(plVar2,&local_58);
      lVar1 = local_58;
      lVar5 = (longlong)local_50;
      if (lVar5 != 0) {
        lVar6 = 0;
        do {
          plVar3 = *(longlong **)(lVar1 + lVar6);
          if (plVar3 != (longlong *)0x0) {
            cVar4 = (**(code **)(*plVar3 + 0x308))(plVar3);
            if (cVar4 != '\0') {
              cVar4 = (**(code **)(*plVar3 + 0x2d8))
                                (plVar3,*(undefined1 *)((longlong)plVar2 + 0xd1));
              if (cVar4 != '\0') {
                (**(code **)(*plVar3 + 0x2d0))(plVar3,param_2,*plVar8,local_60);
              }
            }
          }
          lVar6 = lVar6 + 8;
        } while (lVar5 * 8 != lVar6);
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402654aa FUN_1402654aa body=677 status=ok
// SIG undefined FUN_1402654aa(void)

void FUN_1402654aa(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *(longlong *)(param_1 + 0x30);
  local_a8 = param_1;
  if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0x110) != 0)) {
    puVar9 = *(undefined8 **)(lVar4 + 0x108);
    local_98 = puVar9 + (longlong)*(int *)(lVar4 + 0x110) * 2;
    do {
      plVar6 = (longlong *)*puVar9;
      (**(code **)(*plVar6 + 0x78))(plVar6,&local_88);
      if ((longlong)(int)uStack_80 != 0) {
        plVar1 = local_88 + (int)uStack_80;
        plVar10 = local_88;
        do {
          plVar11 = (longlong *)*plVar10;
          if ((plVar11 != (longlong *)0x0) &&
             (cVar5 = (**(code **)(*plVar11 + 0x308))(plVar11), cVar5 != '\0')) {
            cVar5 = (**(code **)(*plVar11 + 0x2d8))
                              (plVar11,*(undefined1 *)((longlong)plVar6 + 0xd1));
            if (cVar5 != '\0') {
              local_88 = (longlong *)0x0;
              uStack_80 = 0;
              (**(code **)(*plVar11 + 0x2b0))(plVar11,*puVar9,&local_88);
              if ((int)uStack_80 != 0) {
                cVar5 = (**(code **)(*plVar11 + 800))(plVar11);
                if ((cVar5 != '\0') && (iVar2 = *(int *)(local_a8 + 0x48), (longlong)iVar2 != 0)) {
                  lVar4 = *(longlong *)(local_a8 + 0x40);
                  lVar12 = 0;
                  do {
                    if (*(longlong **)(lVar4 + 8 + lVar12) == plVar11) {
                      iVar3 = *(int *)(lVar4 + 0x10 + lVar12);
                      if ((-1 < (longlong)iVar3) && (iVar3 < (int)uStack_80)) {
                        local_88[iVar3] = *(longlong *)(lVar4 + lVar12);
                      }
                    }
                    lVar12 = lVar12 + 0x18;
                  } while ((longlong)iVar2 * 0x18 != lVar12);
                }
                fVar14 = (float)(**(code **)(*plVar11 + 0x2c8))(plVar11);
                if ((longlong)(int)uStack_80 != 0) {
                  plVar11 = local_88 + (int)uStack_80;
                  plVar13 = local_88;
                  local_90 = plVar6;
                  do {
                    lVar4 = *plVar13;
                    if (lVar4 != 0) {
                      plVar6 = (longlong *)param_2[0x20];
                      plVar7 = plVar6;
                      if (plVar6 == (longlong *)0x0) {
                        plVar7 = param_2;
                      }
                      iVar2 = (int)param_2[0x21];
                      lVar12 = (longlong)iVar2;
                      if (lVar12 != 0) {
                        lVar8 = lVar12 << 4;
                        do {
                          if (*plVar7 == lVar4) {
                            if (plVar7 != (longlong *)0x0) {
                              fVar15 = *(float *)(plVar7 + 1);
                              if (*(float *)(plVar7 + 1) <= fVar14) {
                                fVar15 = fVar14;
                              }
                              *(float *)(plVar7 + 1) = fVar15;
                              goto LAB_1402656a4;
                            }
                            break;
                          }
                          plVar7 = plVar7 + 2;
                          lVar8 = lVar8 + -0x10;
                        } while (lVar8 != 0);
                      }
                      *(uint *)(param_2 + 0x21) = iVar2 + 1U;
                      if (*(uint *)((longlong)param_2 + 0x10c) < iVar2 + 1U) {
                        local_a0 = plVar11;
                        FUN_1456eb0c4(param_2,iVar2);
                        plVar6 = (longlong *)param_2[0x20];
                        plVar11 = local_a0;
                      }
                      if (plVar6 == (longlong *)0x0) {
                        plVar6 = param_2;
                      }
                      plVar6[lVar12 * 2] = lVar4;
                      *(float *)(plVar6 + lVar12 * 2 + 1) = fVar14;
                    }
LAB_1402656a4:
                    plVar13 = plVar13 + 1;
                    plVar6 = local_90;
                  } while (plVar13 != plVar11);
                }
              }
              if (local_88 != (longlong *)0x0) {
                FUN_1400020a8(local_88);
              }
            }
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar1);
      }
      puVar9 = puVar9 + 2;
    } while (puVar9 != local_98);
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14026576e FUN_14026576e body=243 status=ok
// SIG undefined FUN_14026576e(void)

undefined8 * FUN_14026576e(longlong param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (param_4 == 0xffffffff) {
    *param_2 = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
    return param_2;
  }
  if (-2 < (int)param_4) {
    FUN_147e480f0(param_2,param_4,0xffffffff);
    return param_2;
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  uVar1 = 0xffffffff;
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x10))) {
    uVar2 = param_4 >> 6 & 0x7fffff;
    if (((int)uVar2 < *(int *)(*(longlong *)(param_1 + 8) + 8 + (ulonglong)param_3 * 0x10)) &&
       (lVar3 = (longlong)
                *(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)param_3 * 0x10) +
                         0x48 + (ulonglong)(uVar2 * 0x50)), lVar3 != -1)) {
      lVar3 = lVar3 * 0x60 + *(longlong *)(param_1 + 0x18);
      uVar2 = 0xffffffff;
      uVar4 = 0xffffffff;
      if (lVar3 != 0) {
        uVar1 = *(undefined4 *)(lVar3 + 8 + (ulonglong)(param_4 >> 0x1c & 4));
        uVar2 = param_4;
        uVar4 = param_3;
      }
      goto LAB_140265814;
    }
  }
  uVar2 = 0xffffffff;
  uVar4 = 0xffffffff;
LAB_140265814:
  *(undefined4 *)param_2 = uVar1;
  *(uint *)((longlong)param_2 + 4) = uVar2;
  *(uint *)(param_2 + 1) = uVar4;
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe8));
  return param_2;
}



// FUNCTION 140265a3c FUN_140265a3c body=289 status=ok
// SIG undefined FUN_140265a3c(void)

bool FUN_140265a3c(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  
  plVar3 = (longlong *)param_1[0xcb];
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)param_1[0xcc];
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_140265b25;
    if (plVar3 == (longlong *)0x0) goto LAB_140265ab7;
LAB_140265af3:
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) {
LAB_140265b50:
      FUN_1456cec3c(plVar3);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_140265b25:
    FUN_1456cec3c(plVar3);
    plVar3 = (longlong *)param_1[0xcb];
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0xcc];
      goto LAB_140265af3;
    }
    if ((DAT_14c950c29 & 1) == 0) goto LAB_140265a66;
    goto LAB_140265b50;
  }
LAB_140265a66:
  cVar1 = (**(code **)(*plVar3 + 0x3c8))(plVar3,param_2);
  if (cVar1 == '\0') goto LAB_140265ab7;
  lVar2 = (**(code **)(*param_1 + 0x610))(param_1,param_2);
  *param_3 = lVar2;
  plVar3 = (longlong *)param_1[0xcb];
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)param_1[0xcc];
    if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_140265b18;
  }
  else if (DAT_14c950c29 == 1) {
LAB_140265b18:
    FUN_1456cec3c(plVar3);
  }
  lVar2 = (**(code **)(*plVar3 + 0x350))(plVar3,param_2);
  param_3[1] = lVar2;
  *(undefined4 *)(param_3 + 2) = 0xffff0000;
LAB_140265ab7:
  bVar4 = false;
  if ((*param_3 != 0) && (param_3[1] != 0)) {
    bVar4 = (int)param_3[2] != 0;
  }
  return bVar4;
}



// FUNCTION 140265b64 FUN_140265b64 body=251 status=ok
// SIG undefined FUN_140265b64(void)

void FUN_140265b64(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar3 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  cVar3 = FUN_140265c74(param_1,0);
  plVar2 = param_1;
  if (cVar3 != '\0') {
    *(byte *)((longlong)param_1 + 0x104) = *(byte *)((longlong)param_1 + 0x104) | 2;
  }
  for (; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[4]) {
    if ((*(uint *)(plVar2 + 1) & 0x30) != 0) goto LAB_140265c1b;
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    lVar4 = FUN_140265cda();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
LAB_140265c1b:
      if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 140265c74 FUN_140265c74 body=101 status=ok
// SIG undefined FUN_140265c74(void)

ulonglong FUN_140265c74(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong unaff_RDI;
  ulonglong uVar2;
  
  if (*(char *)(param_1 + 0xf4) == '\0') {
    if (param_2 == (longlong *)0x0) {
      unaff_RDI = 0;
      lVar1 = FUN_140032b16(0);
      lVar1 = *(longlong *)(lVar1 + 0x78);
      if (lVar1 == 0) goto LAB_140265cba;
    }
    else {
      lVar1 = (**(code **)(*param_2 + 0xe0))(param_2);
    }
    uVar2 = CONCAT71((int7)(unaff_RDI >> 8),
                     *(undefined1 *)
                      (*(longlong *)(lVar1 + 0x28) + 0x44 +
                      (ulonglong)*(byte *)(param_1 + 0xf6) * 0x5c)) & 0xffffffffffffff04;
    unaff_RDI = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2);
  }
  else {
    unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),*(char *)(param_1 + 0xf4) == '\x02');
  }
LAB_140265cba:
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 140265cda FUN_140265cda body=228 status=ok
// SIG undefined FUN_140265cda(void)

longlong FUN_140265cda(void)

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
  if (DAT_14cb0b590 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14580b774;
    local_38 = &LAB_147d6ee51;
    local_40 = FUN_1417f3fbf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/Engine",L"TextureCube",&DAT_14cb0b590,&DAT_147d6ee50);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0b590;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140265dc0 FUN_140265dc0 body=281 status=ok
// SIG undefined FUN_140265dc0(void)

void FUN_140265dc0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar6;
  uint uVar7;
  int iVar5;
  
  FUN_14371c050(param_1,0,0);
  lVar2 = FUN_140032b16(0);
  cVar3 = *(char *)((longlong)param_1 + 0xf2);
  if (cVar3 == '\0') {
    cVar3 = *(char *)(*(longlong *)(*(longlong *)(lVar2 + 0x78) + 0x28) + 3 +
                     (ulonglong)*(byte *)((longlong)param_1 + 0xf6) * 0x5c);
  }
  if (((cVar3 == '\x02') && (lVar2 = param_1[0x29], lVar2 != 0)) && (0 < *(int *)(lVar2 + 0x20))) {
    iVar5 = -1;
    if (0 < *(int *)(lVar2 + 0x14)) {
      iVar5 = -*(int *)(lVar2 + 0x14);
    }
    uVar4 = iVar5 + *(int *)(lVar2 + 0x20);
    uVar7 = 0;
    if (0 < (int)uVar4) {
      uVar7 = uVar4;
    }
    uVar1 = (**(code **)(*param_1 + 0x2e8))(param_1);
    uVar6 = 0;
    if (0 < (int)uVar1) {
      uVar6 = uVar1;
    }
    if ((int)uVar6 < (int)uVar7) {
      uVar7 = uVar6;
    }
    if ((int)uVar6 < (int)uVar4) {
      FUN_14373332e(param_1[0x29] + 0x18,uVar7 + 1,~uVar7 + *(int *)(param_1[0x29] + 0x20),1);
      *(undefined4 *)(param_1[0x29] + 0x14) = 0;
    }
    FUN_14373332e(param_1[0x29] + 0x18,0,uVar7,1);
    *(uint *)param_1[0x29] = (uint)*(ushort *)(**(longlong **)((uint *)param_1[0x29] + 6) + 0x48);
    *(uint *)(param_1[0x29] + 4) = (uint)*(ushort *)(**(longlong **)(param_1[0x29] + 0x18) + 0x4a);
  }
  FUN_1414374dc(param_1);
  return;
}



// FUNCTION 140265ee0 FUN_140265ee0 body=50 status=ok
// SIG undefined FUN_140265ee0(void)

undefined8 * FUN_140265ee0(undefined8 *param_1)

{
  FUN_140265f12();
  param_1[1] = &DAT_14cb83310;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b1828b0;
  return param_1;
}



// FUNCTION 140265f12 FUN_140265f12 body=188 status=ok
// SIG undefined FUN_140265f12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140265f12(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb83380) {
    FUN_144b3d300(&DAT_14cb83380);
    if (DAT_14cb83380 == -1) {
      _DAT_14cb83330 = 0;
      _DAT_14cb83338 = 0;
      _DAT_14cb83310 = 0;
      uRam000000014cb83318 = 0;
      _DAT_14cb8333c = 0xffffffff00000080;
      _DAT_14cb83344 = 0;
      DAT_14cb83350 = 0;
      _DAT_14cb83358 = 0;
      DAT_14cb83360 = 0;
      uRam000000014cb83368 = 0;
      _DAT_14cb83370 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14cb83378);
      atexit(FUN_143daaded);
      _Init_thread_footer(&DAT_14cb83380);
    }
  }
  return &DAT_14cb83310;
}



// FUNCTION 140265fce FUN_140265fce body=114 status=ok
// SIG undefined FUN_140265fce(void)

char FUN_140265fce(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  cVar3 = FUN_140266042();
  bVar2 = *(float *)(param_1 + 0x5c) <= *(float *)(param_1 + 0x50);
  cVar1 = *(char *)(param_1 + 0x58);
  *(bool *)(param_1 + 0x58) = bVar2;
  if (bVar2) {
    if (cVar1 == '\0') {
      cVar3 = '\x02';
    }
    else {
      cVar3 = (*(byte *)(param_1 + 0x60) ^ 1) * '\x02';
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140266042 FUN_140266042 body=111 status=ok
// SIG undefined FUN_140266042(void)

ulonglong FUN_140266042(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  undefined8 unaff_RDI;
  ulonglong uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_14014127e(param_3);
  if (fVar2 < *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28)) {
    param_4 = 0.0;
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (param_2 == 0) {
      param_4 = 1.0;
    }
    else {
      fVar2 = (float)FUN_1402660b2(param_2);
      if (*(char *)(param_1 + 0x54) != '\0') {
        param_4 = param_4 * fVar2;
      }
      param_4 = param_4 + *(float *)(param_1 + 0x50);
    }
  }
  *(float *)(param_1 + 0x50) = param_4;
  return uVar1 & 0xffffffff;
}



// FUNCTION 1402660b2 FUN_1402660b2 body=98 status=ok
// SIG undefined FUN_1402660b2(void)

undefined8 FUN_1402660b2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_140266114();
  if (lVar2 != 0) {
    uVar3 = FUN_144916004(lVar2);
    return uVar3;
  }
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x30) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x30) + 0x2b0), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001402660ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*plVar1 + 0x668))();
    return uVar3;
  }
  return 0x3f800000;
}



// FUNCTION 140266114 FUN_140266114 body=288 status=ok
// SIG undefined FUN_140266114(void)

longlong FUN_140266114(longlong param_1)

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
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1463c0cc2;
      local_38 = &LAB_147c9db5b;
      local_40 = &LAB_1463f9c44;
      local_48 = &DAT_149e063b2;
      local_50 = 0x2000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) goto LAB_140266167;
  }
  lVar1 = 0;
LAB_140266167:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140266236 FUN_140266236 body=212 status=ok
// SIG undefined FUN_140266236(void)

void FUN_140266236(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [96];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_138);
  }
  local_110 = 0x3ff0000000000000;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1449437a2(param_4,local_f8,param_2);
  local_118 = &local_110;
  FUN_146d1b604(local_98,param_1,param_3,local_f8);
  FUN_146d0d32b(param_6,local_98);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140268ec4 FUN_140268ec4 body=332 status=ok
// SIG undefined FUN_140268ec4(void)

void FUN_140268ec4(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140268f32;
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
LAB_140268f32:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 140269010 FUN_140269010 body=413 status=ok
// SIG undefined FUN_140269010(void)

double * FUN_140269010(double *param_1,double *param_2,double *param_3)

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
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar11 = param_2[2];
  dVar5 = param_3[2];
  dVar6 = dVar1 * dVar4 - dVar3 * dVar2;
  dVar7 = dVar11 * dVar3 - dVar5 * dVar1;
  dVar8 = dVar2 * dVar5 - dVar4 * dVar11;
  dVar9 = SQRT(dVar6 * dVar6 + dVar8 * dVar8 + dVar7 * dVar7);
  dVar10 = 0.0;
  if ((dVar9 != 0.0) || (NAN(dVar9))) {
    dVar1 = dVar11 * dVar5 + dVar1 * dVar3 + dVar2 * dVar4;
    if (1.0 <= dVar1) {
      dVar1 = 1.0;
    }
    if (dVar1 <= -1.0) {
      dVar1 = -1.0;
    }
    dVar10 = (dVar1 + 1.0) * 0.5;
    dVar11 = 1.0 - dVar10;
    if (dVar11 < 0.0) {
      dVar11 = sqrt(dVar11);
    }
    else {
      dVar11 = SQRT(dVar11);
    }
    dVar11 = dVar11 / dVar9;
    dVar1 = dVar8 * dVar11;
    dVar2 = dVar7 * dVar11;
    dVar11 = dVar6 * dVar11;
    if (dVar10 < 0.0) {
      dVar10 = sqrt(dVar10);
    }
    else {
      dVar10 = SQRT(dVar10);
    }
  }
  *param_1 = dVar1;
  param_1[1] = dVar2;
  param_1[2] = dVar11;
  param_1[3] = dVar10;
  return param_1;
}



// FUNCTION 1402691ae FUN_1402691ae body=1011 status=ok
// SIG undefined FUN_1402691ae(void)

void FUN_1402691ae(longlong param_1,double *param_2,int param_3,double *param_4,double *param_5,
                  double *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_c4;
  float local_c0;
  float local_bc;
  
  plVar8 = *(longlong **)(param_1 + 0x58);
  dVar17 = 0.0;
  if (plVar8 == (longlong *)0x0) {
LAB_140269556:
    dVar19 = 0.0;
    dVar21 = 0.0;
  }
  else {
    dVar4 = param_4[2];
    dVar5 = param_4[1];
    dVar6 = *param_4;
    cVar7 = *(char *)(param_1 + 0x60);
    if (cVar7 == '\x01') {
      lVar11 = *plVar8;
      uVar14 = (uint)*(byte *)(lVar11 + 1 + (longlong)param_3 * 2);
    }
    else if (cVar7 == '\x02') {
      lVar11 = *plVar8;
      uVar14 = (uint)*(short *)(lVar11 + 2 + (longlong)param_3 * 4);
    }
    else {
      if (cVar7 != '\x03') goto LAB_140269556;
      lVar11 = *plVar8;
      uVar14 = *(uint *)(lVar11 + 4 + (longlong)param_3 * 8);
    }
    dVar19 = 0.0;
    dVar21 = 0.0;
    if (0 < (int)uVar14) {
      lVar9 = (longlong)param_3;
      iVar12 = (int)((longlong)(int)uVar14 + -1);
      if (cVar7 == '\x01') {
        uVar10 = (uint)*(byte *)(plVar8[2] + 1 +
                                (ulonglong)((uint)*(byte *)(lVar11 + lVar9 * 2) + iVar12) * 3);
      }
      else if (cVar7 == '\x02') {
        uVar10 = (uint)*(short *)(plVar8[2] + 2 +
                                 ((longlong)(int)uVar14 + -1 +
                                 (longlong)*(short *)(lVar11 + lVar9 * 4)) * 6);
      }
      else {
        uVar10 = *(uint *)(plVar8[2] + 4 +
                          ((longlong)iVar12 + (longlong)*(int *)(lVar11 + lVar9 * 8)) * 0xc);
      }
      lVar11 = *(longlong *)(param_1 + 0x30);
      lVar13 = (longlong)(int)uVar10;
      fVar22 = 3.4028235e+38;
      lVar15 = 0;
      local_c4 = 0.0;
      local_c0 = 0.0;
      local_bc = 0.0;
      fVar28 = *(float *)(lVar11 + 8 + lVar13 * 0xc);
      fVar20 = *(float *)(lVar11 + lVar13 * 0xc);
      fVar16 = *(float *)(lVar11 + 4 + lVar13 * 0xc);
      do {
        plVar8 = *(longlong **)(param_1 + 0x58);
        uVar10 = 0xffffffff;
        if (plVar8 != (longlong *)0x0) {
          cVar7 = *(char *)(param_1 + 0x60);
          if (cVar7 == '\x01') {
            uVar10 = (uint)*(byte *)(plVar8[2] + 1 +
                                    ((ulonglong)*(byte *)(*plVar8 + lVar9 * 2) + lVar15) * 3);
          }
          else if (cVar7 == '\x02') {
            uVar10 = (uint)*(short *)(plVar8[2] + 2 + (*(short *)(*plVar8 + lVar9 * 4) + lVar15) * 6
                                     );
          }
          else if (cVar7 == '\x03') {
            uVar10 = *(uint *)(plVar8[2] + 4 + (*(int *)(*plVar8 + lVar9 * 8) + lVar15) * 0xc);
          }
        }
        lVar11 = *(longlong *)(param_1 + 0x30);
        lVar13 = (longlong)(int)uVar10;
        fVar1 = *(float *)(lVar11 + lVar13 * 0xc);
        fVar2 = *(float *)(lVar11 + 4 + lVar13 * 0xc);
        fVar3 = *(float *)(lVar11 + 8 + lVar13 * 0xc);
        fVar18 = fVar3 - fVar28;
        fVar26 = fVar2 - fVar16;
        fVar25 = fVar1 - fVar20;
        fVar23 = -((fVar28 - (float)dVar4) * fVar18 +
                  (fVar20 - (float)dVar6) * fVar25 + (fVar16 - (float)dVar5) * fVar26) /
                 (fVar18 * fVar18 + fVar25 * fVar25 + fVar26 * fVar26);
        if (1.0 <= fVar23) {
          fVar23 = 1.0;
        }
        if (fVar23 <= 0.0) {
          fVar23 = 0.0;
        }
        fVar24 = fVar23 * fVar18 + fVar28;
        fVar27 = fVar26 * fVar23 + fVar16;
        fVar26 = fVar25 * fVar23 + fVar20;
        fVar18 = fVar27 - (float)dVar5;
        fVar25 = fVar26 - (float)dVar6;
        fVar23 = fVar24 - (float)dVar4;
        fVar18 = fVar23 * fVar23 + fVar25 * fVar25 + fVar18 * fVar18;
        if (fVar18 < fVar22) {
          *param_5 = (double)fVar20;
          param_5[1] = (double)fVar16;
          param_5[2] = (double)fVar28;
          *param_6 = (double)fVar1;
          param_6[1] = (double)fVar2;
          param_6[2] = (double)fVar3;
          fVar22 = fVar18;
          local_c4 = fVar24;
          local_c0 = fVar27;
          local_bc = fVar26;
        }
        lVar15 = lVar15 + 1;
        fVar28 = fVar3;
        fVar20 = fVar1;
        fVar16 = fVar2;
      } while (uVar14 != (uint)lVar15);
      dVar21 = (double)local_c4;
      dVar19 = (double)local_c0;
      dVar17 = (double)local_bc;
    }
  }
  *param_2 = dVar17;
  param_2[1] = dVar19;
  param_2[2] = dVar21;
  return;
}



// FUNCTION 1402695a1 FUN_1402695a1 body=868 status=ok
// SIG undefined FUN_1402695a1(void)

uint FUN_1402695a1(double *param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double *pdVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (4 < param_2) {
    uVar3 = (ulonglong)param_2;
    pdVar4 = param_1 + 2;
    uVar6 = 0;
    uVar10 = 0xe0000000;
    uVar11 = 0x47efffff;
    uVar7 = 0;
    do {
      dVar14 = *pdVar4;
      if (dVar14 <= (double)CONCAT44(uVar11,uVar10) && (double)CONCAT44(uVar11,uVar10) != dVar14) {
        uVar7 = uVar6 & 0xffffffff;
      }
      if ((double)CONCAT44(uVar11,uVar10) <= dVar14) {
        dVar14 = (double)CONCAT44(uVar11,uVar10);
      }
      uVar6 = uVar6 + 1;
      pdVar4 = pdVar4 + 3;
      uVar10 = SUB84(dVar14,0);
      uVar11 = (undefined4)((ulonglong)dVar14 >> 0x20);
    } while (uVar3 != uVar6);
    dVar14 = param_1[2];
    dVar15 = *param_1;
    dVar1 = param_1[1];
    param_1[2] = param_1[uVar7 * 3 + 2];
    dVar2 = (param_1 + uVar7 * 3)[1];
    *param_1 = param_1[uVar7 * 3];
    param_1[1] = dVar2;
    param_1[uVar7 * 3 + 2] = dVar14;
    param_1[uVar7 * 3] = dVar15;
    (param_1 + uVar7 * 3)[1] = dVar1;
    pdVar4 = param_1 + 4;
    uVar6 = 1;
    dVar14 = -1.0;
    uVar7 = 1;
    do {
      dVar15 = (pdVar4[-1] - *param_1) * (pdVar4[-1] - *param_1) +
               (*pdVar4 - param_1[1]) * (*pdVar4 - param_1[1]);
      if (dVar14 < dVar15) {
        uVar6 = uVar7 & 0xffffffff;
        dVar14 = dVar15;
      }
      uVar7 = uVar7 + 1;
      pdVar4 = pdVar4 + 3;
    } while (uVar3 != uVar7);
    dVar14 = param_1[5];
    dVar15 = param_1[3];
    dVar1 = param_1[4];
    param_1[5] = param_1[uVar6 * 3 + 2];
    dVar2 = (param_1 + uVar6 * 3)[1];
    param_1[3] = param_1[uVar6 * 3];
    param_1[4] = dVar2;
    param_1[uVar6 * 3 + 2] = dVar14;
    param_1[uVar6 * 3] = dVar15;
    (param_1 + uVar6 * 3)[1] = dVar1;
    pdVar4 = param_1 + 7;
    uVar6 = 2;
    uVar10 = 0;
    uVar11 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar7 = 2;
    auVar13 = ZEXT816(0);
    do {
      dVar14 = (pdVar4[-1] - *param_1) * -(param_1[4] - param_1[1]) +
               (*pdVar4 - param_1[1]) * (param_1[3] - *param_1);
      dVar15 = ABS(dVar14);
      if (ABS(auVar13._0_8_) < dVar15) {
        uVar6 = uVar7 & 0xffffffff;
      }
      uVar9 = -(ulonglong)(ABS(auVar13._0_8_) < dVar15);
      auVar12._0_8_ = ~uVar9 & CONCAT44(uVar11,uVar10);
      auVar12._8_8_ = ~(auVar13._8_8_ & 0x7fffffffffffffff) & CONCAT44(uVar17,uVar16);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulonglong)dVar14 & uVar9;
      auVar13 = auVar12 | auVar13;
      uVar7 = uVar7 + 1;
      pdVar4 = pdVar4 + 3;
      uVar10 = auVar13._0_4_;
      uVar11 = auVar13._4_4_;
      uVar16 = auVar13._8_4_;
      uVar17 = auVar13._12_4_;
    } while (uVar3 != uVar7);
    dVar14 = param_1[8];
    dVar15 = param_1[6];
    dVar1 = param_1[7];
    param_1[8] = param_1[uVar6 * 3 + 2];
    dVar2 = (param_1 + uVar6 * 3)[1];
    param_1[6] = param_1[uVar6 * 3];
    param_1[7] = dVar2;
    param_1[uVar6 * 3 + 2] = dVar14;
    param_1[uVar6 * 3] = dVar15;
    (param_1 + uVar6 * 3)[1] = dVar1;
    dVar14 = 0.0;
    if (auVar13._0_8_ < 0.0) {
      dVar15 = param_1[2];
      dVar1 = *param_1;
      dVar2 = param_1[1];
      param_1[2] = param_1[5];
      *param_1 = param_1[3];
      param_1[1] = param_1[4];
      param_1[5] = dVar15;
      param_1[3] = dVar1;
      param_1[4] = dVar2;
    }
    uVar6 = 3;
    uVar7 = 3;
    do {
      lVar8 = 1;
      pdVar4 = param_1 + 1;
      do {
        lVar5 = lVar8;
        if (lVar8 == 3) {
          lVar5 = 0;
        }
        dVar15 = (param_1[uVar7 * 3] - pdVar4[-1]) * (param_1[lVar5 * 3 + 1] - *pdVar4) -
                 (param_1[uVar7 * 3 + 1] - *pdVar4) * (param_1[lVar5 * 3] - pdVar4[-1]);
        if (dVar14 < dVar15) {
          uVar6 = uVar7 & 0xffffffff;
          dVar14 = dVar15;
        }
        pdVar4 = pdVar4 + 3;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 4);
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar3);
    local_58 = param_1[0xb];
    dVar14 = param_1[9];
    dVar15 = param_1[10];
    param_1[0xb] = param_1[uVar6 * 3 + 2];
    dVar1 = (param_1 + uVar6 * 3)[1];
    param_1[9] = param_1[uVar6 * 3];
    param_1[10] = dVar1;
    param_1[uVar6 * 3 + 2] = local_58;
    local_68._0_4_ = SUB84(dVar14,0);
    local_68._4_4_ = (undefined4)((ulonglong)dVar14 >> 0x20);
    uStack_60._0_4_ = SUB84(dVar15,0);
    uStack_60._4_4_ = (undefined4)((ulonglong)dVar15 >> 0x20);
    param_1 = param_1 + uVar6 * 3;
    *(undefined4 *)param_1 = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 4) = local_68._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
    param_2 = 4;
    local_68 = dVar14;
    uStack_60 = dVar15;
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140269906 FUN_140269906 body=105 status=ok
// SIG undefined FUN_140269906(void)

undefined8 FUN_140269906(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_144916780(*(undefined8 *)*param_2,param_1,&local_28,((undefined8 *)*param_2)[1]);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140269970 FUN_140269970 body=28 status=ok
// SIG undefined FUN_140269970(void)

undefined8 FUN_140269970(undefined8 param_1,undefined8 param_2)

{
  FUN_14026aa20(param_2,param_1);
  return param_1;
}



// FUNCTION 14026998c FUN_14026998c body=761 status=ok
// SIG undefined FUN_14026998c(void)

uint FUN_14026998c(int *param_1,longlong param_2,longlong param_3,double param_4)

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
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar15 = *(double *)(param_1 + 10);
  dVar1 = *(double *)(param_1 + 4);
  dVar2 = *(double *)(param_1 + 6);
  dVar7 = dVar15 * dVar1;
  dVar9 = dVar15 * dVar2;
  dVar3 = *(double *)(param_1 + 8);
  dVar15 = dVar15 * dVar3;
  lVar10 = (longlong)*param_1 * 0x18;
  dVar16 = (*(double *)(param_2 + 0x10 + lVar10) - *(double *)(param_3 + 0x10 + lVar10)) - dVar15;
  dVar13 = (*(double *)(param_2 + 8 + lVar10) - *(double *)(param_3 + 8 + lVar10)) - dVar9;
  lVar11 = (longlong)param_1[1] * 0x18;
  dVar4 = (*(double *)(param_2 + lVar10) - *(double *)(param_3 + lVar10)) - dVar7;
  dVar6 = (*(double *)(param_2 + 0x10 + lVar11) - *(double *)(param_3 + 0x10 + lVar11)) - dVar15;
  dVar5 = (*(double *)(param_2 + 8 + lVar11) - *(double *)(param_3 + 8 + lVar11)) - dVar9;
  dVar14 = (*(double *)(param_2 + lVar11) - *(double *)(param_3 + lVar11)) - dVar7;
  lVar10 = (longlong)param_1[2] * 0x18;
  dVar15 = (*(double *)(param_2 + 0x10 + lVar10) - *(double *)(param_3 + 0x10 + lVar10)) - dVar15;
  dVar9 = (*(double *)(param_2 + 8 + lVar10) - *(double *)(param_3 + 8 + lVar10)) - dVar9;
  dVar7 = (*(double *)(param_2 + lVar10) - *(double *)(param_3 + lVar10)) - dVar7;
  dVar8 = (dVar4 * dVar9 - dVar7 * dVar13) * dVar3 +
          (dVar13 * dVar15 - dVar9 * dVar16) * dVar1 + (dVar16 * dVar7 - dVar15 * dVar4) * dVar2;
  dVar15 = (dVar7 * dVar5 - dVar14 * dVar9) * dVar3 +
           (dVar9 * dVar6 - dVar5 * dVar15) * dVar1 + (dVar15 * dVar14 - dVar6 * dVar7) * dVar2;
  dVar7 = -param_4;
  if (((dVar8 < dVar7) && (param_4 < dVar15)) || ((param_4 < dVar8 && (dVar15 < dVar7)))) {
    uVar12 = 0;
  }
  else {
    dVar15 = (dVar14 * dVar13 - dVar4 * dVar5) * dVar3 +
             (dVar5 * dVar16 - dVar13 * dVar6) * dVar1 + dVar2 * (dVar6 * dVar4 - dVar16 * dVar14);
    uVar12 = -(uint)(dVar15 < dVar7 && param_4 < dVar8 || param_4 < dVar15 && dVar8 < dVar7) ^ 1;
  }
  return uVar12 & 0xffffff01;
}



// FUNCTION 140269c85 FUN_140269c85 body=392 status=ok
// SIG undefined FUN_140269c85(void)

void FUN_140269c85(undefined4 *param_1,undefined4 *param_2,ulonglong param_3,undefined8 param_4)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = (longlong)param_2 - (longlong)param_1;
  if ((longlong)uVar2 < 0x81) {
LAB_140269cbb:
    FUN_140269e0e(param_1,param_2,param_4);
  }
  else {
    if (0 < (longlong)param_3) {
      do {
        FUN_146cc4309(&local_50,param_1,param_2,param_4);
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        if (CONCAT44(uStack_4c,local_50) - (longlong)param_1 <
            (longlong)param_2 - (longlong)local_48) {
          FUN_140269c85(param_1,CONCAT44(uStack_4c,local_50),param_3,param_4);
          param_1 = local_48;
        }
        else {
          FUN_140269c85(local_48,param_2,param_3,param_4);
          param_2 = (undefined4 *)CONCAT44(uStack_4c,local_50);
        }
        uVar2 = (longlong)param_2 - (longlong)param_1;
        if ((longlong)uVar2 < 0x81) goto LAB_140269cbb;
      } while (param_3 != 0);
    }
    uVar4 = uVar2 >> 3;
    do {
      uVar3 = uVar4 - 1;
      local_50 = param_1[uVar3];
      local_58 = param_4;
      FUN_146cc4548(param_1,uVar3,uVar2 >> 2,&local_50);
      bVar1 = 1 < uVar4;
      uVar4 = uVar3;
    } while (bVar1);
    lVar5 = (longlong)param_2 - (longlong)param_1;
    if (4 < lVar5) {
      do {
        param_2 = param_2 + -1;
        local_50 = *param_2;
        *param_2 = *param_1;
        lVar5 = lVar5 + -4;
        local_58 = param_4;
        FUN_146cc4548(param_1,0,lVar5 >> 2,&local_50);
      } while (4 < lVar5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140269e0e FUN_140269e0e body=227 status=ok
// SIG undefined FUN_140269e0e(void)

int * FUN_140269e0e(int *param_1,int *param_2,longlong param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  
  if (param_1 != param_2) {
    for (piVar8 = param_1 + 1; piVar8 != param_2; piVar8 = piVar8 + 1) {
      iVar3 = *piVar8;
      lVar5 = *(longlong *)(param_3 + 0xa00);
      if (*(longlong *)(param_3 + 0xa00) == 0) {
        lVar5 = param_3;
      }
      lVar4 = (longlong)iVar3 * 0x50;
      dVar2 = *(double *)(lVar5 + 0x28 + lVar4);
      pdVar1 = (double *)(lVar5 + 0x28 + (longlong)*param_1 * 0x50);
      if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
        memmove(param_1 + 1,param_1,(longlong)piVar8 - (longlong)param_1);
        piVar6 = param_1;
      }
      else {
        lVar7 = (longlong)piVar8[-1];
        pdVar1 = (double *)(lVar5 + 0x28 + lVar7 * 0x50);
        piVar6 = piVar8;
        if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
          do {
            *piVar6 = (int)lVar7;
            lVar5 = *(longlong *)(param_3 + 0xa00);
            if (*(longlong *)(param_3 + 0xa00) == 0) {
              lVar5 = param_3;
            }
            lVar7 = (longlong)piVar6[-2];
            dVar2 = *(double *)(lVar5 + 0x28 + lVar4);
            piVar6 = piVar6 + -1;
            pdVar1 = (double *)(lVar5 + 0x28 + lVar7 * 0x50);
          } while (*pdVar1 <= dVar2 && dVar2 != *pdVar1);
        }
      }
      *piVar6 = iVar3;
    }
  }
  return param_2;
}



// FUNCTION 140269ef2 FUN_140269ef2 body=105 status=ok
// SIG undefined FUN_140269ef2(void)

undefined8 FUN_140269ef2(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_144916780(*(undefined8 *)*param_2,param_1,&local_28,((undefined8 *)*param_2)[1]);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140269f5c FUN_140269f5c body=604 status=ok
// SIG undefined FUN_140269f5c(void)

double * FUN_140269f5c(double *param_1,longlong *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong lStack_b0;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_2[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar10 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar8 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar6 = pdVar7[3];
  dVar11 = dVar10 * dVar2 - dVar1 * dVar5;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar4 * dVar1 - dVar3 * dVar10;
  dVar9 = dVar9 + dVar9;
  local_90 = (dVar10 * dVar9 - dVar8 * dVar5) + dVar6 * dVar11 + dVar3;
  local_98 = (dVar4 * dVar8 - dVar11 * dVar10) + dVar6 * dVar9 + dVar2;
  local_a0 = (dVar5 * dVar11 - dVar9 * dVar4) + dVar8 * dVar6 + dVar1;
  local_b8 = param_2[3];
  lStack_b0 = param_2[4];
  FUN_144916780(*(undefined8 *)*param_2,&local_88,&local_a0,((undefined8 *)*param_2)[1]);
  pdVar7 = (double *)param_2[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar8 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar10 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar11 = local_78 * dVar6 - dStack_80 * dVar8;
  dVar9 = local_88 * dVar8 - dVar5 * local_78;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_1 = (dVar10 * dVar6 - dVar9 * dVar8) + dVar1 * dVar11 + local_88 + pdVar7[4];
  param_1[1] = (dVar8 * dVar11 - dVar5 * dVar10) + dVar2 * dVar9 + dStack_80 + dVar4;
  param_1[2] = dVar10 * dVar1 + local_78 + (dVar9 * dVar5 - dVar11 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026a1b9 FUN_14026a1b9 body=709 status=ok
// SIG undefined FUN_14026a1b9(void)

void FUN_14026a1b9(longlong param_1,int param_2,double *param_3,longlong param_4,longlong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  
  lVar8 = *(longlong *)(param_1 + 0xa00);
  if (*(longlong *)(param_1 + 0xa00) == 0) {
    lVar8 = param_1;
  }
  lVar8 = (longlong)param_2 * 0x50 + lVar8;
  lVar9 = -0xc;
  do {
    uVar1 = *(undefined4 *)(lVar8 + 0x3c + lVar9);
    uVar2 = *(undefined4 *)(lVar8 + 0x48 + lVar9);
    iVar5 = *(int *)(param_5 + 0x108);
    *(uint *)(param_5 + 0x108) = iVar5 + 1U;
    if (*(uint *)(param_5 + 0x10c) < iVar5 + 1U) {
      FUN_146cc488c(param_5,iVar5);
    }
    lVar6 = *(longlong *)(param_5 + 0x100);
    if (*(longlong *)(param_5 + 0x100) == 0) {
      lVar6 = param_5;
    }
    *(ulonglong *)(lVar6 + (longlong)iVar5 * 8) = CONCAT44(uVar2,uVar1);
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0);
  iVar5 = *(int *)(param_5 + 0x108);
  if (iVar5 != 0) {
    iVar7 = 0x2711;
    do {
      iVar7 = iVar7 + -1;
      if (iVar7 == 0) {
        return;
      }
      lVar8 = *(longlong *)(param_5 + 0x100);
      if (*(longlong *)(param_5 + 0x100) == 0) {
        lVar8 = param_5;
      }
      uVar3 = *(undefined8 *)(lVar8 + -8 + (longlong)iVar5 * 8);
      *(int *)(param_5 + 0x108) = iVar5 + -1;
      lVar8 = *(longlong *)(param_1 + 0xa00);
      if (*(longlong *)(param_1 + 0xa00) == 0) {
        lVar8 = param_1;
      }
      lVar9 = (longlong)(int)uVar3 * 0x50;
      if (*(char *)(lVar8 + 0x48 + lVar9) == '\0') {
        lVar8 = lVar8 + lVar9;
        dVar10 = (*(double *)(lVar8 + 0x20) * param_3[2] +
                 *(double *)(lVar8 + 0x10) * *param_3 + *(double *)(lVar8 + 0x18) * param_3[1]) -
                 *(double *)(lVar8 + 0x28);
        if (dVar10 <= 1e-08) {
          iVar5 = *(int *)(param_4 + 0x108);
          *(uint *)(param_4 + 0x108) = iVar5 + 1U;
          if (*(uint *)(param_4 + 0x10c) < iVar5 + 1U) {
            FUN_146cc488c(dVar10,iVar5);
          }
          lVar8 = *(longlong *)(param_4 + 0x100);
          if (*(longlong *)(param_4 + 0x100) == 0) {
            lVar8 = param_4;
          }
          *(undefined8 *)(lVar8 + (longlong)iVar5 * 8) = uVar3;
        }
        else {
          *(undefined1 *)(lVar8 + 0x48) = 1;
          iVar4 = (int)((ulonglong)uVar3 >> 0x20);
          lVar9 = (longlong)(((iVar4 + 1) / 3) * -3 + iVar4 + 1);
          uVar1 = *(undefined4 *)(lVar8 + 0x30 + lVar9 * 4);
          uVar2 = *(undefined4 *)(lVar8 + 0x3c + lVar9 * 4);
          iVar5 = *(int *)(param_5 + 0x108);
          *(uint *)(param_5 + 0x108) = iVar5 + 1U;
          if (*(uint *)(param_5 + 0x10c) < iVar5 + 1U) {
            FUN_146cc488c(param_5,iVar5);
          }
          lVar9 = *(longlong *)(param_5 + 0x100);
          if (*(longlong *)(param_5 + 0x100) == 0) {
            lVar9 = param_5;
          }
          *(ulonglong *)(lVar9 + (longlong)iVar5 * 8) = CONCAT44(uVar2,uVar1);
          lVar9 = (longlong)(((iVar4 + 2) / 3) * -3 + iVar4 + 2);
          uVar1 = *(undefined4 *)(lVar8 + 0x30 + lVar9 * 4);
          uVar2 = *(undefined4 *)(lVar8 + 0x3c + lVar9 * 4);
          iVar5 = *(int *)(param_5 + 0x108);
          *(uint *)(param_5 + 0x108) = iVar5 + 1U;
          if (*(uint *)(param_5 + 0x10c) < iVar5 + 1U) {
            FUN_146cc488c(param_5,iVar5);
          }
          lVar8 = *(longlong *)(param_5 + 0x100);
          if (*(longlong *)(param_5 + 0x100) == 0) {
            lVar8 = param_5;
          }
          *(ulonglong *)(lVar8 + (longlong)iVar5 * 8) = CONCAT44(uVar2,uVar1);
        }
      }
      iVar5 = *(int *)(param_5 + 0x108);
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 14026a47e FUN_14026a47e body=105 status=ok
// SIG undefined FUN_14026a47e(void)

undefined8 FUN_14026a47e(undefined8 param_1,longlong *param_2,undefined4 *param_3)

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
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_144916780(*(undefined8 *)*param_2,param_1,&local_28,((undefined8 *)*param_2)[1]);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026a4e8 FUN_14026a4e8 body=373 status=ok
// SIG undefined FUN_14026a4e8(void)

void FUN_14026a4e8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14026a573;
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
LAB_14026a573:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14026a65e FUN_14026a65e body=961 status=ok
// SIG undefined FUN_14026a65e(void)

void FUN_14026a65e(longlong param_1,longlong param_2,int *param_3,double *param_4,
                  undefined1 (*param_5) [16],double *param_6,double *param_7)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  double *pdVar8;
  double dVar9;
  undefined1 auStack_1e8 [32];
  double *local_1c8;
  double *local_1c0;
  double local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  double local_198 [4];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  double local_118 [4];
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  double local_b8 [4];
  double dStack_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_54 = 3;
  uStack_4c = 0x200000001;
  local_44 = 0;
  lVar7 = (longlong)*param_3 * 0x18;
  local_b8[2] = *(double *)(param_1 + 0x10 + lVar7);
  local_1c8 = local_b8;
  local_b8[0] = *(double *)(param_1 + lVar7);
  local_b8[1] = ((double *)(param_1 + lVar7))[1];
  lVar4 = (longlong)param_3[1] * 0x18;
  local_90 = *(double *)(param_1 + 0x10 + lVar4);
  local_b8[3] = *(double *)(param_1 + lVar4);
  dStack_98 = ((double *)(param_1 + lVar4))[1];
  lVar5 = (longlong)param_3[2] * 0x18;
  local_78 = *(double *)(param_1 + 0x10 + lVar5);
  local_88 = *(double *)(param_1 + lVar5);
  dStack_80 = ((double *)(param_1 + lVar5))[1];
  local_60 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_118[2] = *(double *)(param_2 + 0x10 + lVar7);
  local_1c0 = local_118;
  local_118[0] = *(double *)(param_2 + lVar7);
  local_118[1] = ((double *)(param_2 + lVar7))[1];
  local_118[3] = *(double *)(param_2 + lVar4);
  dStack_f8 = ((double *)(param_2 + lVar4))[1];
  local_f0 = *(double *)(param_2 + 0x10 + lVar4);
  local_e8 = *(double *)(param_2 + lVar5);
  dStack_e0 = ((double *)(param_2 + lVar5))[1];
  local_d8 = *(double *)(param_2 + 0x10 + lVar5);
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_168 = local_b8[2] - local_118[2];
  local_170 = local_b8[1] - local_118[1];
  local_178 = local_b8[0] - local_118[0];
  local_150 = local_90 - local_f0;
  local_158 = dStack_98 - dStack_f8;
  local_160 = local_b8[3] - local_118[3];
  local_138 = local_78 - local_d8;
  local_140 = dStack_80 - dStack_e0;
  local_148 = local_88 - local_e8;
  local_120 = 0;
  local_130 = 0;
  uStack_128 = 0;
  pdVar8 = local_198;
  FUN_1449162b1(&local_1b0,&local_178,&local_54,pdVar8);
  *(undefined8 *)param_5[1] = local_1a0;
  *(double *)*param_5 = local_1b0;
  *(undefined8 *)(*param_5 + 8) = uStack_1a8;
  dVar2 = SQRT(*(double *)param_5[1] * *(double *)param_5[1] +
               *(double *)*param_5 * *(double *)*param_5 +
               *(double *)(*param_5 + 8) * *(double *)(*param_5 + 8));
  *param_4 = dVar2;
  if (dVar2 < 0.0001) {
    *(undefined8 *)param_5[1] = *(undefined8 *)(param_3 + 8);
    uVar6 = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)*param_5 = *(undefined8 *)(param_3 + 4);
    *(undefined8 *)(*param_5 + 8) = uVar6;
    if (0.0 < *(double *)(param_3 + 10) || *(double *)(param_3 + 10) == 0.0) goto LAB_14026a8c0;
  }
  else {
    dVar2 = 1.0 / dVar2;
    dVar3 = *(double *)*param_5 * dVar2;
    *(double *)*param_5 = dVar3;
    dVar9 = *(double *)(*param_5 + 8) * dVar2;
    *(double *)(*param_5 + 8) = dVar9;
    dVar2 = dVar2 * *(double *)param_5[1];
    *(double *)param_5[1] = dVar2;
    if (0.0 < *(double *)(param_3 + 10) || *(double *)(param_3 + 10) == 0.0) goto LAB_14026a8c0;
    auVar1._8_4_ = SUB84(dVar9,0);
    auVar1._0_8_ = -dVar3;
    auVar1._12_4_ = (uint)((ulonglong)dVar9 >> 0x20) ^ 0x80000000;
    *param_5 = auVar1;
    *(double *)param_5[1] = -dVar2;
  }
  *param_4 = -*param_4;
LAB_14026a8c0:
  *param_6 = 0.0;
  param_6[1] = 0.0;
  param_6[2] = 0.0;
  param_7[2] = 0.0;
  *param_7 = 0.0;
  param_7[1] = 0.0;
  if (0 < (longlong)(int)local_54) {
    lVar7 = 0;
    do {
      dVar2 = *pdVar8;
      dVar3 = local_b8[lVar7 + 2];
      dVar9 = local_b8[lVar7 + 1];
      *param_6 = local_b8[lVar7] * dVar2 + *param_6;
      param_6[1] = dVar9 * dVar2 + param_6[1];
      param_6[2] = dVar3 * dVar2 + param_6[2];
      dVar3 = local_118[lVar7 + 2];
      dVar9 = local_118[lVar7 + 1];
      *param_7 = dVar2 * local_118[lVar7] + *param_7;
      param_7[1] = dVar9 * dVar2 + param_7[1];
      param_7[2] = dVar3 * dVar2 + param_7[2];
      lVar7 = lVar7 + 3;
      pdVar8 = pdVar8 + 1;
    } while ((longlong)(int)local_54 * 3 != lVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026aa20 FUN_14026aa20 body=884 status=ok
// SIG undefined FUN_14026aa20(void)

double * FUN_14026aa20(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  double *pdVar10;
  longlong lVar11;
  float *pfVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar8 = *(longlong *)*param_1;
  lVar9 = *(longlong *)(lVar8 + 0x88);
  if ((longlong)*(int *)(lVar9 + 0x38) < 1) {
    *(int *)param_1[4] = -1;
  }
  else {
    pdVar10 = (double *)param_1[2];
    dVar1 = *param_3;
    dVar2 = param_3[1];
    dVar3 = param_3[2];
    dVar4 = pdVar10[2];
    dVar5 = *pdVar10;
    dVar6 = pdVar10[1];
    dVar21 = dVar6 * dVar3 - dVar2 * dVar4;
    dVar21 = dVar21 + dVar21;
    dVar7 = pdVar10[3];
    dVar19 = dVar5 * dVar2 - dVar1 * dVar6;
    dVar19 = dVar19 + dVar19;
    dVar16 = dVar4 * dVar1 - dVar3 * dVar5;
    dVar16 = dVar16 + dVar16;
    lVar11 = param_1[3];
    dVar18 = (double)((longlong *)*param_1)[1];
    pfVar12 = (float *)(*(longlong *)(lVar9 + 0x30) + 8);
    uVar14 = 0xffffffff;
    fVar17 = -3.4028235e+38;
    uVar15 = 0;
    do {
      fVar20 = *pfVar12 *
               (float)(((dVar5 * dVar16 - dVar21 * dVar6) + dVar7 * dVar19 + dVar3) *
                      *(double *)(lVar8 + 0x30)) +
               pfVar12[-2] *
               (float)(((dVar6 * dVar19 - dVar16 * dVar4) + dVar21 * dVar7 + dVar1) *
                      *(double *)(lVar8 + 0x20)) +
               pfVar12[-1] *
               (float)(((dVar4 * dVar21 - dVar19 * dVar5) + dVar7 * dVar16 + dVar2) *
                      *(double *)(lVar8 + 0x28));
      if (fVar17 < fVar20) {
        uVar14 = uVar15 & 0xffffffff;
        fVar17 = fVar20;
      }
      uVar15 = uVar15 + 1;
      pfVar12 = pfVar12 + 3;
    } while ((longlong)*(int *)(lVar9 + 0x38) != uVar15);
    iVar13 = (int)uVar14;
    *(int *)param_1[4] = iVar13;
    if (iVar13 != -1) {
      if ((dVar18 != 0.0) || (NAN(dVar18))) {
        local_a8 = lVar8 + 0x20;
        local_a0 = lVar11;
        FUN_14068b0c6(lVar9,&local_98);
      }
      else {
        lVar9 = *(longlong *)(lVar9 + 0x30);
        lVar11 = (longlong)iVar13;
        local_88 = (double)*(float *)(lVar9 + 8 + lVar11 * 0xc) * *(double *)(lVar8 + 0x30);
        dStack_90 = (double)*(float *)(lVar9 + 4 + lVar11 * 0xc) * *(double *)(lVar8 + 0x28);
        local_98 = (double)*(float *)(lVar9 + lVar11 * 0xc) * *(double *)(lVar8 + 0x20);
      }
      goto LAB_14026ac3f;
    }
  }
  local_98 = 0.0;
  dStack_90 = 0.0;
  local_88 = 0.0;
LAB_14026ac3f:
  pdVar10 = (double *)param_1[1];
  dVar5 = *pdVar10;
  dVar6 = pdVar10[1];
  dVar7 = pdVar10[2];
  dVar2 = pdVar10[3];
  dVar1 = pdVar10[3];
  dVar16 = local_98 * dVar7 - dVar5 * local_88;
  dVar18 = dStack_90 * dVar5 - local_98 * dVar6;
  dVar19 = local_88 * dVar6 - dStack_90 * dVar7;
  dVar19 = dVar19 + dVar19;
  dVar16 = dVar16 + dVar16;
  dVar18 = dVar18 + dVar18;
  dVar4 = pdVar10[5];
  dVar3 = pdVar10[6];
  *param_2 = (dVar18 * dVar6 - dVar16 * dVar7) + dVar2 * dVar19 + local_98 + pdVar10[4];
  param_2[1] = (dVar7 * dVar19 - dVar5 * dVar18) + dVar1 * dVar16 + dStack_90 + dVar4;
  param_2[2] = dVar18 * dVar2 + local_88 + (dVar16 * dVar5 - dVar19 * dVar6) + dVar3;
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026ad96 FUN_14026ad96 body=601 status=ok
// SIG undefined FUN_14026ad96(void)

double * FUN_14026ad96(double *param_1,longlong *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong lStack_b0;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_2[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar10 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar8 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar6 = pdVar7[3];
  dVar11 = dVar10 * dVar2 - dVar1 * dVar5;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar4 * dVar1 - dVar3 * dVar10;
  dVar9 = dVar9 + dVar9;
  local_90 = (dVar10 * dVar9 - dVar8 * dVar5) + dVar6 * dVar11 + dVar3;
  local_98 = (dVar4 * dVar8 - dVar11 * dVar10) + dVar6 * dVar9 + dVar2;
  local_a0 = (dVar5 * dVar11 - dVar9 * dVar4) + dVar8 * dVar6 + dVar1;
  local_b8 = param_2[3];
  lStack_b0 = param_2[4];
  FUN_1404b5d90(*param_2,&local_88,&local_a0,*(undefined8 *)(*param_2 + 8));
  pdVar7 = (double *)param_2[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar8 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar10 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar11 = local_78 * dVar6 - dStack_80 * dVar8;
  dVar9 = local_88 * dVar8 - dVar5 * local_78;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_1 = (dVar10 * dVar6 - dVar9 * dVar8) + dVar1 * dVar11 + local_88 + pdVar7[4];
  param_1[1] = (dVar8 * dVar11 - dVar5 * dVar10) + dVar2 * dVar9 + dStack_80 + dVar4;
  param_1[2] = dVar10 * dVar1 + local_78 + (dVar9 * dVar5 - dVar11 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026aff0 FUN_14026aff0 body=275 status=ok
// SIG undefined FUN_14026aff0(void)

void FUN_14026aff0(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xa08);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x21) {
      uVar4 = 0x20;
    }
    else {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0xa0c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = lVar2 * 0x50;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar3 < 0x7ff1) {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
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
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
        }
      }
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x50)) {
        uVar4 = uVar3 / 0x50 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xa0c) = (int)uVar4;
    FUN_14026b104(param_1,param_2,uVar4,0x50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14026b104 FUN_14026b104 body=149 status=ok
// SIG undefined FUN_14026b104(void)

void FUN_14026b104(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xa00);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x50);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xa00,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xa00),param_1,(longlong)param_2 * 0x50);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xa00,param_2,param_3,param_4);
  return;
}



// FUNCTION 14026b199 FUN_14026b199 body=6046 status=ok
// SIG undefined FUN_14026b199(void)

ulonglong FUN_14026b199(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,
                       undefined8 param_4,undefined8 *param_5,double *param_6)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double *pdVar12;
  double *pdVar13;
  longlong lVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auStack_178 [40];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118 [4];
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar1 = *(undefined4 *)(param_1 + 1);
  iVar2 = *(int *)(param_5 + 0x141);
  *(int *)(param_5 + 0x141) = iVar2 + 4;
  local_118[3] = (double)param_3;
  local_f8 = param_4;
  local_f0 = param_1;
  local_e8 = param_2;
  if ((uint)(*(int *)((longlong)param_5 + 0xa0c) - iVar2) < 4) {
    FUN_14026aff0(param_5);
  }
  *param_6 = 0.0;
  param_6[1] = 0.0;
  param_6[2] = 1.0;
  switch(uVar1) {
  case 1:
    FUN_14597b920(local_118 + 3,param_6);
  case 2:
    pdVar12 = (double *)*param_2;
    pdVar13 = (double *)*param_1;
    local_118[2] = (pdVar13[5] - pdVar12[5]) - (pdVar13[2] - pdVar12[2]);
    local_118[1] = (pdVar13[4] - pdVar12[4]) - (pdVar13[1] - pdVar12[1]);
    local_118[0] = (pdVar13[3] - pdVar12[3]) - (*pdVar13 - *pdVar12);
    if (0.0001 < local_118[2] * local_118[2] +
                 local_118[0] * local_118[0] + local_118[1] * local_118[1]) {
      dVar21 = 1.79769313486232e+308;
      uVar15 = 0;
      uVar8 = 0;
      do {
        if (ABS(local_118[uVar15]) < dVar21) {
          uVar8 = uVar15 & 0xffffffff;
          dVar21 = ABS(local_118[uVar15]);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != 3);
      if ((int)uVar8 == 0) {
        uVar25 = 0;
        uVar24 = 0x3ff00000;
LAB_14026c1b5:
        uVar26 = 0;
      }
      else {
        if ((int)uVar8 == 1) {
          uVar25 = 0x3ff00000;
          uVar24 = 0;
          goto LAB_14026c1b5;
        }
        uVar26 = 0x3ff00000;
        uVar24 = 0;
        uVar25 = 0;
      }
      local_120 = local_118[0] * (double)((ulonglong)uVar25 << 0x20) -
                  (double)((ulonglong)uVar24 << 0x20) * local_118[1];
      local_128 = local_118[2] * (double)((ulonglong)uVar24 << 0x20) -
                  (double)((ulonglong)uVar26 << 0x20) * local_118[0];
      local_130 = local_118[1] * (double)((ulonglong)uVar26 << 0x20) -
                  (double)((ulonglong)uVar25 << 0x20) * local_118[2];
      local_138 = local_130 * local_118[1] - local_118[0] * local_128;
      local_140 = local_120 * local_118[0] - local_118[2] * local_130;
      local_148 = local_128 * local_118[2] - local_120 * local_118[1];
      FUN_14597b920(local_118 + 3);
      FUN_14597b920(local_118 + 3,&local_148);
      pdVar12 = (double *)*param_2;
      pdVar13 = (double *)*param_1;
      dVar18 = pdVar13[5] - pdVar12[5];
      dVar21 = pdVar13[4] - pdVar12[4];
      dVar22 = pdVar13[3] - pdVar12[3];
      dVar3 = pdVar13[8] - pdVar12[8];
      dVar7 = pdVar13[7] - pdVar12[7];
      dVar17 = pdVar13[6] - pdVar12[6];
      dVar4 = pdVar13[0xb] - pdVar12[0xb];
      dVar5 = pdVar13[10] - pdVar12[10];
      dVar6 = pdVar13[9] - pdVar12[9];
      dVar19 = (dVar17 - dVar22) * (dVar5 - dVar21) - (dVar6 - dVar22) * (dVar7 - dVar21);
      dVar23 = (dVar3 - dVar18) * (dVar6 - dVar22) - (dVar4 - dVar18) * (dVar17 - dVar22);
      dVar20 = (dVar7 - dVar21) * (dVar4 - dVar18) - (dVar5 - dVar21) * (dVar3 - dVar18);
      dVar16 = dVar19 * dVar19 + dVar20 * dVar20 + dVar23 * dVar23;
      if (1.0000000000000002e-32 <= dVar16) {
        puVar11 = (undefined8 *)param_5[0x140];
        if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
          puVar11 = param_5;
        }
        dVar3 = 1.0 / SQRT(dVar16);
        puVar11[2] = dVar20 * dVar3;
        puVar11[3] = dVar23 * dVar3;
        puVar11[4] = dVar19 * dVar3;
        *puVar11 = 0x200000001;
        *(undefined4 *)(puVar11 + 1) = 3;
        puVar11[6] = &DAT_100000003;
        puVar11[7] = &DAT_100000002;
        puVar11[8] = &DAT_100000001;
        puVar11[5] = dVar19 * dVar3 * dVar18 + dVar20 * dVar3 * dVar22 + dVar21 * dVar23 * dVar3;
        *(undefined1 *)(puVar11 + 9) = 0;
        pdVar12 = (double *)*param_2;
        pdVar13 = (double *)*param_1;
        dVar4 = pdVar13[0xb] - pdVar12[0xb];
        dVar5 = pdVar13[10] - pdVar12[10];
        dVar6 = pdVar13[9] - pdVar12[9];
        dVar3 = pdVar13[8] - pdVar12[8];
        dVar7 = pdVar13[7] - pdVar12[7];
        dVar17 = pdVar13[6] - pdVar12[6];
      }
      dVar19 = pdVar13[2] - pdVar12[2];
      dVar21 = pdVar13[1] - pdVar12[1];
      dVar23 = *pdVar13 - *pdVar12;
      dVar4 = dVar4 - dVar19;
      dVar5 = dVar5 - dVar21;
      dVar6 = dVar6 - dVar23;
      dVar20 = dVar6 * (dVar7 - dVar21) - (dVar17 - dVar23) * dVar5;
      dVar17 = dVar4 * (dVar17 - dVar23) - (dVar3 - dVar19) * dVar6;
      dVar7 = dVar5 * (dVar3 - dVar19) - (dVar7 - dVar21) * dVar4;
      dVar3 = dVar20 * dVar20 + dVar7 * dVar7 + dVar17 * dVar17;
      if (1.0000000000000002e-32 <= dVar3) {
        puVar11 = (undefined8 *)param_5[0x140];
        if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
          puVar11 = param_5;
        }
        dVar4 = 1.0 / SQRT(dVar3);
        puVar11[0xc] = dVar7 * dVar4;
        puVar11[0xd] = dVar17 * dVar4;
        puVar11[0xe] = dVar20 * dVar4;
        puVar11[10] = 0x300000000;
        *(undefined4 *)(puVar11 + 0xb) = 2;
        puVar11[0x10] = 2;
        puVar11[0x11] = 0x200000003;
        puVar11[0x12] = 1;
        puVar11[0xf] = dVar20 * dVar4 * dVar19 + dVar7 * dVar4 * dVar23 + dVar21 * dVar17 * dVar4;
        *(undefined1 *)(puVar11 + 0x13) = 0;
        pdVar12 = (double *)*param_2;
        pdVar13 = (double *)*param_1;
        dVar19 = pdVar13[2] - pdVar12[2];
        dVar21 = pdVar13[1] - pdVar12[1];
        dVar23 = *pdVar13 - *pdVar12;
        dVar4 = (pdVar13[0xb] - pdVar12[0xb]) - dVar19;
        dVar5 = (pdVar13[10] - pdVar12[10]) - dVar21;
        dVar6 = (pdVar13[9] - pdVar12[9]) - dVar23;
      }
      dVar7 = (pdVar13[5] - pdVar12[5]) - dVar19;
      dVar17 = (pdVar13[4] - pdVar12[4]) - dVar21;
      dVar20 = (pdVar13[3] - pdVar12[3]) - dVar23;
      dVar18 = dVar20 * dVar5 - dVar6 * dVar17;
      dVar6 = dVar7 * dVar6 - dVar4 * dVar20;
      dVar5 = dVar17 * dVar4 - dVar5 * dVar7;
      dVar4 = dVar18 * dVar18 + dVar5 * dVar5 + dVar6 * dVar6;
      if (1.0000000000000002e-32 <= dVar4) {
        puVar11 = (undefined8 *)param_5[0x140];
        if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
          puVar11 = param_5;
        }
        dVar7 = 1.0 / SQRT(dVar4);
        puVar11[0x16] = dVar5 * dVar7;
        puVar11[0x17] = dVar6 * dVar7;
        puVar11[0x18] = dVar18 * dVar7;
        puVar11[0x14] = 0x100000000;
        *(undefined4 *)(puVar11 + 0x15) = 3;
        puVar11[0x1a] = 3;
        puVar11[0x1b] = 0x200000001;
        puVar11[0x1c] = 2;
        puVar11[0x19] = dVar18 * dVar7 * dVar19 + dVar5 * dVar7 * dVar23 + dVar21 * dVar6 * dVar7;
        *(undefined1 *)(puVar11 + 0x1d) = 0;
        pdVar12 = (double *)*param_2;
        pdVar13 = (double *)*param_1;
        dVar19 = pdVar13[2] - pdVar12[2];
        dVar21 = pdVar13[1] - pdVar12[1];
        dVar23 = *pdVar13 - *pdVar12;
        dVar7 = (pdVar13[5] - pdVar12[5]) - dVar19;
        dVar17 = (pdVar13[4] - pdVar12[4]) - dVar21;
        dVar20 = (pdVar13[3] - pdVar12[3]) - dVar23;
      }
      dVar22 = (pdVar13[8] - pdVar12[8]) - dVar19;
      dVar18 = (pdVar13[7] - pdVar12[7]) - dVar21;
      dVar5 = (pdVar13[6] - pdVar12[6]) - dVar23;
      dVar6 = dVar5 * dVar17 - dVar20 * dVar18;
      dVar20 = dVar22 * dVar20 - dVar7 * dVar5;
      dVar5 = dVar18 * dVar7 - dVar22 * dVar17;
      dVar7 = dVar6 * dVar6 + dVar5 * dVar5 + dVar20 * dVar20;
      if (1.0000000000000002e-32 <= dVar7) {
        puVar11 = (undefined8 *)param_5[0x140];
        if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
          puVar11 = param_5;
        }
        dVar7 = 1.0 / SQRT(dVar7);
        puVar11[0x20] = dVar5 * dVar7;
        puVar11[0x21] = dVar20 * dVar7;
        puVar11[0x22] = dVar6 * dVar7;
        puVar11[0x1e] = 0x200000000;
        *(undefined4 *)(puVar11 + 0x1f) = 1;
        puVar11[0x24] = 1;
        puVar11[0x25] = &DAT_200000002;
        puVar11[0x26] = 0;
        puVar11[0x23] = dVar6 * dVar7 * dVar19 + dVar5 * dVar7 * dVar23 + dVar21 * dVar20 * dVar7;
        *(undefined1 *)(puVar11 + 0x27) = 0;
        if (!(bool)(~(1.0000000000000002e-32 <= dVar16 && 1.0000000000000002e-32 <= dVar3) & 1U |
                   dVar4 < 1.0000000000000002e-32)) {
LAB_14026b9fd:
          puVar11 = (undefined8 *)param_5[0x140];
          if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
            puVar11 = param_5;
          }
          uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          if ((longlong)*(int *)(param_5 + 0x141) != 0) {
            lVar14 = (longlong)*(int *)(param_5 + 0x141) * 0x50;
            lVar9 = 0;
            dVar21 = 0.0;
            do {
              dVar3 = *(double *)((longlong)puVar11 + lVar9 + 0x28);
              uVar15 = -(ulonglong)(ABS(dVar21) < ABS(dVar3));
              dVar21 = (double)(~uVar15 & (ulonglong)dVar21 | (ulonglong)dVar3 & uVar15);
              lVar9 = lVar9 + 0x50;
            } while (lVar14 != lVar9);
            if (dVar21 < 0.0) {
              do {
                puVar10 = (undefined8 *)param_5[0x140];
                if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
                  puVar10 = param_5;
                }
                FUN_1429943f6(puVar11,puVar10);
                puVar11 = puVar11 + 10;
                lVar14 = lVar14 + -0x50;
              } while (lVar14 != 0);
            }
          }
          goto LAB_14026bb7d;
        }
      }
      dVar21 = 1.0 / SQRT(local_120 * local_120 + local_130 * local_130 + local_128 * local_128);
      *param_6 = dVar21 * local_130;
      param_6[1] = local_128 * dVar21;
      param_6[2] = local_120 * dVar21;
    }
    break;
  case 3:
    pdVar12 = (double *)*param_2;
    pdVar13 = (double *)*param_1;
    dVar17 = pdVar13[2] - pdVar12[2];
    dVar21 = pdVar13[1] - pdVar12[1];
    dVar20 = *pdVar13 - *pdVar12;
    dVar5 = (pdVar13[8] - pdVar12[8]) - dVar17;
    dVar3 = (pdVar13[7] - pdVar12[7]) - dVar21;
    dVar19 = (pdVar13[6] - pdVar12[6]) - dVar20;
    dVar7 = (pdVar13[5] - pdVar12[5]) - dVar17;
    dVar6 = (pdVar13[4] - pdVar12[4]) - dVar21;
    dVar4 = (pdVar13[3] - pdVar12[3]) - dVar20;
    dVar23 = dVar19 * dVar6 - dVar4 * dVar3;
    dVar4 = dVar5 * dVar4 - dVar7 * dVar19;
    dVar3 = dVar3 * dVar7 - dVar6 * dVar5;
    dVar5 = dVar23 * dVar23 + dVar3 * dVar3 + dVar4 * dVar4;
    if (1.0000000000000002e-32 <= dVar5) {
      puVar11 = (undefined8 *)param_5[0x140];
      if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
        puVar11 = param_5;
      }
      dVar5 = 1.0 / SQRT(dVar5);
      puVar11[0x20] = dVar3 * dVar5;
      puVar11[0x21] = dVar4 * dVar5;
      puVar11[0x22] = dVar23 * dVar5;
      puVar11[0x1e] = 0x200000000;
      *(undefined4 *)(puVar11 + 0x1f) = 1;
      puVar11[0x24] = 1;
      puVar11[0x25] = &DAT_200000002;
      puVar11[0x26] = 0;
      puVar11[0x23] = dVar23 * dVar5 * dVar17 + dVar3 * dVar5 * dVar20 + dVar21 * dVar4 * dVar5;
      *(undefined1 *)(puVar11 + 0x27) = 0;
      puVar11 = (undefined8 *)param_5[0x140];
      if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
        puVar11 = param_5;
      }
      FUN_14597b920(local_118 + 3,puVar11 + 0x20);
      pdVar12 = (double *)*param_2;
      pdVar13 = (double *)*param_1;
      local_150 = pdVar13[5] - pdVar12[5];
      dVar3 = pdVar13[4] - pdVar12[4];
      dVar5 = pdVar13[3] - pdVar12[3];
      dVar6 = pdVar13[8] - pdVar12[8];
      dVar7 = pdVar13[7] - pdVar12[7];
      dVar17 = pdVar13[6] - pdVar12[6];
      dVar21 = pdVar13[0xb] - pdVar12[0xb];
      dVar4 = pdVar13[10] - pdVar12[10];
      dVar18 = pdVar13[9] - pdVar12[9];
      dVar19 = (dVar17 - dVar5) * (dVar4 - dVar3) - (dVar18 - dVar5) * (dVar7 - dVar3);
      dVar23 = (dVar6 - local_150) * (dVar18 - dVar5) - (dVar21 - local_150) * (dVar17 - dVar5);
      dVar20 = (dVar7 - dVar3) * (dVar21 - local_150) - (dVar4 - dVar3) * (dVar6 - local_150);
      dVar16 = dVar19 * dVar19 + dVar20 * dVar20 + dVar23 * dVar23;
      if (1.0000000000000002e-32 <= dVar16) {
        puVar10 = (undefined8 *)param_5[0x140];
        if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
          puVar10 = param_5;
        }
        dVar21 = 1.0 / SQRT(dVar16);
        puVar10[2] = dVar20 * dVar21;
        puVar10[3] = dVar23 * dVar21;
        puVar10[4] = dVar19 * dVar21;
        *puVar10 = 0x200000001;
        *(undefined4 *)(puVar10 + 1) = 3;
        puVar10[6] = &DAT_100000003;
        puVar10[7] = &DAT_100000002;
        puVar10[8] = &DAT_100000001;
        puVar10[5] = dVar19 * dVar21 * local_150 + dVar20 * dVar21 * dVar5 + dVar3 * dVar23 * dVar21
        ;
        *(undefined1 *)(puVar10 + 9) = 0;
        pdVar12 = (double *)*param_2;
        pdVar13 = (double *)*param_1;
        dVar21 = pdVar13[0xb] - pdVar12[0xb];
        dVar4 = pdVar13[10] - pdVar12[10];
        dVar18 = pdVar13[9] - pdVar12[9];
        dVar6 = pdVar13[8] - pdVar12[8];
        dVar7 = pdVar13[7] - pdVar12[7];
        dVar17 = pdVar13[6] - pdVar12[6];
      }
      dVar19 = pdVar13[2] - pdVar12[2];
      dVar3 = pdVar13[1] - pdVar12[1];
      dVar5 = *pdVar13 - *pdVar12;
      dVar21 = dVar21 - dVar19;
      dVar4 = dVar4 - dVar3;
      dVar18 = dVar18 - dVar5;
      dVar20 = dVar18 * (dVar7 - dVar3) - (dVar17 - dVar5) * dVar4;
      dVar17 = dVar21 * (dVar17 - dVar5) - (dVar6 - dVar19) * dVar18;
      dVar7 = dVar4 * (dVar6 - dVar19) - (dVar7 - dVar3) * dVar21;
      dVar6 = dVar20 * dVar20 + dVar7 * dVar7 + dVar17 * dVar17;
      if (1.0000000000000002e-32 <= dVar6) {
        puVar10 = (undefined8 *)param_5[0x140];
        if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
          puVar10 = param_5;
        }
        dVar21 = 1.0 / SQRT(dVar6);
        puVar10[0xc] = dVar7 * dVar21;
        puVar10[0xd] = dVar17 * dVar21;
        puVar10[0xe] = dVar20 * dVar21;
        puVar10[10] = 0x300000000;
        *(undefined4 *)(puVar10 + 0xb) = 2;
        puVar10[0x10] = 2;
        puVar10[0x11] = 0x200000003;
        puVar10[0x12] = 1;
        puVar10[0xf] = dVar20 * dVar21 * dVar19 + dVar7 * dVar21 * dVar5 + dVar3 * dVar17 * dVar21;
        *(undefined1 *)(puVar10 + 0x13) = 0;
        pdVar12 = (double *)*param_2;
        pdVar13 = (double *)*param_1;
        dVar19 = pdVar13[2] - pdVar12[2];
        dVar3 = pdVar13[1] - pdVar12[1];
        dVar5 = *pdVar13 - *pdVar12;
        dVar21 = (pdVar13[0xb] - pdVar12[0xb]) - dVar19;
        dVar4 = (pdVar13[10] - pdVar12[10]) - dVar3;
        dVar18 = (pdVar13[9] - pdVar12[9]) - dVar5;
      }
      dVar7 = (pdVar13[5] - pdVar12[5]) - dVar19;
      dVar23 = (pdVar13[4] - pdVar12[4]) - dVar3;
      dVar17 = (pdVar13[3] - pdVar12[3]) - dVar5;
      dVar20 = dVar17 * dVar4 - dVar18 * dVar23;
      dVar17 = dVar7 * dVar18 - dVar21 * dVar17;
      dVar4 = dVar23 * dVar21 - dVar7 * dVar4;
      dVar21 = dVar20 * dVar20 + dVar4 * dVar4 + dVar17 * dVar17;
      if (1.0000000000000002e-32 <= dVar21) {
        puVar10 = (undefined8 *)param_5[0x140];
        if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
          puVar10 = param_5;
        }
        dVar21 = 1.0 / SQRT(dVar21);
        puVar10[0x16] = dVar4 * dVar21;
        puVar10[0x17] = dVar17 * dVar21;
        puVar10[0x18] = dVar20 * dVar21;
        puVar10[0x14] = 0x100000000;
        *(undefined4 *)(puVar10 + 0x15) = 3;
        puVar10[0x1a] = 3;
        puVar10[0x1b] = 0x200000001;
        puVar10[0x1c] = 2;
        puVar10[0x19] = dVar20 * dVar21 * dVar19 + dVar4 * dVar21 * dVar5 + dVar3 * dVar17 * dVar21;
        *(undefined1 *)(puVar10 + 0x1d) = 0;
        if ((1.0000000000000002e-32 <= dVar16) && (1.0000000000000002e-32 <= dVar6))
        goto LAB_14026b9fd;
      }
      param_6[2] = (double)puVar11[0x22];
      dVar21 = (double)puVar11[0x21];
      *param_6 = (double)puVar11[0x20];
      param_6[1] = dVar21;
    }
    break;
  case 4:
    pdVar12 = (double *)*param_2;
    pdVar13 = (double *)*param_1;
    dVar18 = pdVar13[5] - pdVar12[5];
    dVar21 = pdVar13[4] - pdVar12[4];
    dVar22 = pdVar13[3] - pdVar12[3];
    dVar3 = pdVar13[8] - pdVar12[8];
    dVar7 = pdVar13[7] - pdVar12[7];
    dVar17 = pdVar13[6] - pdVar12[6];
    dVar4 = pdVar13[0xb] - pdVar12[0xb];
    dVar5 = pdVar13[10] - pdVar12[10];
    dVar6 = pdVar13[9] - pdVar12[9];
    dVar19 = (dVar17 - dVar22) * (dVar5 - dVar21) - (dVar6 - dVar22) * (dVar7 - dVar21);
    dVar23 = (dVar3 - dVar18) * (dVar6 - dVar22) - (dVar4 - dVar18) * (dVar17 - dVar22);
    dVar20 = (dVar7 - dVar21) * (dVar4 - dVar18) - (dVar5 - dVar21) * (dVar3 - dVar18);
    dVar16 = dVar19 * dVar19 + dVar20 * dVar20 + dVar23 * dVar23;
    if (1.0000000000000002e-32 <= dVar16) {
      puVar11 = (undefined8 *)param_5[0x140];
      if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
        puVar11 = param_5;
      }
      dVar3 = 1.0 / SQRT(dVar16);
      puVar11[2] = dVar20 * dVar3;
      puVar11[3] = dVar23 * dVar3;
      puVar11[4] = dVar19 * dVar3;
      *puVar11 = 0x200000001;
      *(undefined4 *)(puVar11 + 1) = 3;
      puVar11[6] = &DAT_100000003;
      puVar11[7] = &DAT_100000002;
      puVar11[8] = &DAT_100000001;
      puVar11[5] = dVar19 * dVar3 * dVar18 + dVar20 * dVar3 * dVar22 + dVar21 * dVar23 * dVar3;
      *(undefined1 *)(puVar11 + 9) = 0;
      pdVar12 = (double *)*param_2;
      pdVar13 = (double *)*param_1;
      dVar4 = pdVar13[0xb] - pdVar12[0xb];
      dVar5 = pdVar13[10] - pdVar12[10];
      dVar6 = pdVar13[9] - pdVar12[9];
      dVar3 = pdVar13[8] - pdVar12[8];
      dVar7 = pdVar13[7] - pdVar12[7];
      dVar17 = pdVar13[6] - pdVar12[6];
    }
    dVar19 = pdVar13[2] - pdVar12[2];
    dVar21 = pdVar13[1] - pdVar12[1];
    dVar23 = *pdVar13 - *pdVar12;
    dVar4 = dVar4 - dVar19;
    dVar5 = dVar5 - dVar21;
    dVar6 = dVar6 - dVar23;
    dVar20 = dVar6 * (dVar7 - dVar21) - (dVar17 - dVar23) * dVar5;
    dVar17 = dVar4 * (dVar17 - dVar23) - (dVar3 - dVar19) * dVar6;
    dVar7 = dVar5 * (dVar3 - dVar19) - (dVar7 - dVar21) * dVar4;
    dVar3 = dVar20 * dVar20 + dVar7 * dVar7 + dVar17 * dVar17;
    if (1.0000000000000002e-32 <= dVar3) {
      puVar11 = (undefined8 *)param_5[0x140];
      if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
        puVar11 = param_5;
      }
      dVar4 = 1.0 / SQRT(dVar3);
      puVar11[0xc] = dVar7 * dVar4;
      puVar11[0xd] = dVar17 * dVar4;
      puVar11[0xe] = dVar20 * dVar4;
      puVar11[10] = 0x300000000;
      *(undefined4 *)(puVar11 + 0xb) = 2;
      puVar11[0x10] = 2;
      puVar11[0x11] = 0x200000003;
      puVar11[0x12] = 1;
      puVar11[0xf] = dVar20 * dVar4 * dVar19 + dVar7 * dVar4 * dVar23 + dVar21 * dVar17 * dVar4;
      *(undefined1 *)(puVar11 + 0x13) = 0;
      pdVar12 = (double *)*param_2;
      pdVar13 = (double *)*param_1;
      dVar19 = pdVar13[2] - pdVar12[2];
      dVar21 = pdVar13[1] - pdVar12[1];
      dVar23 = *pdVar13 - *pdVar12;
      dVar4 = (pdVar13[0xb] - pdVar12[0xb]) - dVar19;
      dVar5 = (pdVar13[10] - pdVar12[10]) - dVar21;
      dVar6 = (pdVar13[9] - pdVar12[9]) - dVar23;
    }
    dVar7 = (pdVar13[5] - pdVar12[5]) - dVar19;
    dVar17 = (pdVar13[4] - pdVar12[4]) - dVar21;
    dVar20 = (pdVar13[3] - pdVar12[3]) - dVar23;
    dVar18 = dVar20 * dVar5 - dVar6 * dVar17;
    dVar6 = dVar7 * dVar6 - dVar4 * dVar20;
    dVar5 = dVar17 * dVar4 - dVar5 * dVar7;
    dVar4 = dVar18 * dVar18 + dVar5 * dVar5 + dVar6 * dVar6;
    if (1.0000000000000002e-32 <= dVar4) {
      puVar11 = (undefined8 *)param_5[0x140];
      if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
        puVar11 = param_5;
      }
      dVar7 = 1.0 / SQRT(dVar4);
      puVar11[0x16] = dVar5 * dVar7;
      puVar11[0x17] = dVar6 * dVar7;
      puVar11[0x18] = dVar18 * dVar7;
      puVar11[0x14] = 0x100000000;
      *(undefined4 *)(puVar11 + 0x15) = 3;
      puVar11[0x1a] = 3;
      puVar11[0x1b] = 0x200000001;
      puVar11[0x1c] = 2;
      puVar11[0x19] = dVar18 * dVar7 * dVar19 + dVar5 * dVar7 * dVar23 + dVar21 * dVar6 * dVar7;
      *(undefined1 *)(puVar11 + 0x1d) = 0;
      pdVar12 = (double *)*param_2;
      pdVar13 = (double *)*param_1;
      dVar19 = pdVar13[2] - pdVar12[2];
      dVar21 = pdVar13[1] - pdVar12[1];
      dVar23 = *pdVar13 - *pdVar12;
      dVar7 = (pdVar13[5] - pdVar12[5]) - dVar19;
      dVar17 = (pdVar13[4] - pdVar12[4]) - dVar21;
      dVar20 = (pdVar13[3] - pdVar12[3]) - dVar23;
    }
    dVar22 = (pdVar13[8] - pdVar12[8]) - dVar19;
    dVar18 = (pdVar13[7] - pdVar12[7]) - dVar21;
    dVar5 = (pdVar13[6] - pdVar12[6]) - dVar23;
    dVar6 = dVar5 * dVar17 - dVar20 * dVar18;
    dVar20 = dVar22 * dVar20 - dVar7 * dVar5;
    dVar5 = dVar18 * dVar7 - dVar22 * dVar17;
    dVar7 = dVar6 * dVar6 + dVar5 * dVar5 + dVar20 * dVar20;
    if (dVar7 < 1.0000000000000002e-32) break;
    puVar11 = (undefined8 *)param_5[0x140];
    if ((undefined8 *)param_5[0x140] == (undefined8 *)0x0) {
      puVar11 = param_5;
    }
    dVar7 = 1.0 / SQRT(dVar7);
    puVar11[0x20] = dVar5 * dVar7;
    puVar11[0x21] = dVar20 * dVar7;
    puVar11[0x22] = dVar6 * dVar7;
    puVar11[0x1e] = 0x200000000;
    *(undefined4 *)(puVar11 + 0x1f) = 1;
    puVar11[0x24] = 1;
    puVar11[0x25] = &DAT_200000002;
    puVar11[0x26] = 0;
    puVar11[0x23] = dVar6 * dVar7 * dVar19 + dVar5 * dVar7 * dVar23 + dVar21 * dVar20 * dVar7;
    *(undefined1 *)(puVar11 + 0x27) = 0;
    if ((bool)(~(1.0000000000000002e-32 <= dVar16 && 1.0000000000000002e-32 <= dVar3) & 1U |
              dVar4 < 1.0000000000000002e-32)) break;
    goto LAB_14026b9fd;
  }
  uVar8 = 0;
LAB_14026bb7d:
  if ((local_e0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026c938 FUN_14026c938 body=587 status=ok
// SIG undefined FUN_14026c938(void)

void FUN_14026c938(longlong *param_1,undefined8 *param_2,longlong param_3)

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
  FUN_144919894(param_3 + 8,local_68,lVar3,&local_60);
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026cb84 FUN_14026cb84 body=9 status=ok
// SIG undefined FUN_14026cb84(void)

void FUN_14026cb84(longlong param_1)

{
  FUN_14026cb8e(param_1 + 0x10);
  return;
}



// FUNCTION 14026cb8e FUN_14026cb8e body=229 status=ok
// SIG undefined FUN_14026cb8e(void)

void FUN_14026cb8e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_1 + 0x68) = 0;
  iVar1 = *(int *)(param_1 + 0xc0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_14026cd08((longlong *)(param_1 + 0xb8),0);
  }
  FUN_1401d9a90(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if ((*(char *)(param_1 + 0xa8) == '\x01') &&
     (puVar3 = *(undefined8 **)(param_1 + 0xb0), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,1);
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  FUN_1401d9a90(param_1 + 0x80);
  FUN_14026cc9a(param_1);
  return;
}



// FUNCTION 14026cc74 FUN_14026cc74 body=38 status=ok
// SIG undefined FUN_14026cc74(void)

undefined8 FUN_14026cc74(undefined8 param_1,int param_2)

{
  FUN_14026cc9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14026cc9a FUN_14026cc9a body=61 status=ok
// SIG undefined FUN_14026cc9a(void)

void FUN_14026cc9a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b4257e8;
  FUN_14026ccd7(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_1401d9a90(param_1 + 1);
  return;
}



// FUNCTION 14026ccd7 FUN_14026ccd7 body=49 status=ok
// SIG undefined FUN_14026ccd7(void)

void FUN_14026ccd7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14026cd08 FUN_14026cd08 body=96 status=ok
// SIG undefined FUN_14026cd08(void)

void FUN_14026cd08(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14026cd68 FUN_14026cd68 body=52 status=ok
// SIG undefined FUN_14026cd68(void)

undefined8 * FUN_14026cd68(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f4e0d0;
  FUN_14026cd9c(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14026cd9c FUN_14026cd9c body=52 status=ok
// SIG undefined FUN_14026cd9c(void)

void FUN_14026cd9c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    lVar1 = param_1;
  }
  FUN_14026cdd0(lVar1,*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14026cdd0 FUN_14026cdd0 body=51 status=ok
// SIG undefined FUN_14026cdd0(void)

void FUN_14026cdd0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_14026d0a4(plVar1[-1]);
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14026ce04 FUN_14026ce04 body=90 status=ok
// SIG undefined FUN_14026ce04(void)

void FUN_14026ce04(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    FUN_14026cefa((longlong)(int)plVar1[1] * 0x10 + *(longlong *)(*plVar1 + 0x1d0),plVar1,param_2);
  }
  plVar1 = *(longlong **)(param_2 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    FUN_14026cefa((longlong)(int)plVar1[1] * 0x10 + *(longlong *)(*plVar1 + 0x1d0),plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 14026ce5e FUN_14026ce5e body=101 status=ok
// SIG undefined FUN_14026ce5e(void)

void FUN_14026ce5e(longlong *param_1,int param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)param_2 * 8);
  FUN_14026cec3(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 8),(longlong)iVar3 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 14026cec3 FUN_14026cec3 body=54 status=ok
// SIG undefined FUN_14026cec3(void)

void FUN_14026cec3(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 14026cefa FUN_14026cefa body=178 status=ok
// SIG undefined FUN_14026cefa(void)

void FUN_14026cefa(longlong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_3 + 0x38 + (ulonglong)(*(longlong *)(param_3 + 0x10) != param_2) * 4);
  iVar3 = (int)param_1[1];
  iVar4 = ~uVar1 + iVar3;
  if (iVar4 != 0) {
    iVar5 = 1;
    if (iVar4 < 1) {
      iVar5 = iVar4;
    }
    memmove((void *)((longlong)(int)uVar1 * 0x10 + *param_1),
            (void *)((longlong)(iVar3 - iVar5) * 0x10 + *param_1),(longlong)iVar5 << 4);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  FUN_14026cfac(param_1);
  if (*(longlong *)(param_3 + 0x10) == param_2) {
    *(undefined4 *)(param_3 + 0x38) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_3 + 0x3c) = 0xffffffff;
  }
  if ((int)uVar1 < (int)param_1[1]) {
    lVar2 = *(longlong *)(*param_1 + 8 + (longlong)(int)uVar1 * 0x10);
    if (*(longlong *)(lVar2 + 0x10) == param_2) {
      *(uint *)(lVar2 + 0x38) = uVar1;
    }
    else {
      *(uint *)(lVar2 + 0x3c) = uVar1;
    }
  }
  return;
}



// FUNCTION 14026cfac FUN_14026cfac body=247 status=ok
// SIG undefined FUN_14026cfac(void)

void FUN_14026cfac(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar3 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x800) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
          }
        }
        else {
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x10,8);
    }
  }
  return;
}



// FUNCTION 14026d0a4 FUN_14026d0a4 body=183 status=ok
// SIG undefined FUN_14026d0a4(void)

undefined8 FUN_14026d0a4(longlong *param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong *plVar5;
  
  if ((int)*(uint *)(param_1 + 1) < 1) {
    lVar2 = -1;
  }
  else {
    piVar4 = (int *)(*param_1 + 0x10);
    uVar3 = 0;
    do {
      if (*(ulonglong *)(piVar4 + -4) <= param_2) {
        if (param_2 < *(ulonglong *)(piVar4 + -4) + (longlong)*piVar4 * 0x670) goto LAB_14026d0f3;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 8;
    } while (*(uint *)(param_1 + 1) != uVar3);
    uVar3 = 0xffffffffffffffff;
LAB_14026d0f3:
    lVar2 = (longlong)(int)uVar3;
  }
  plVar5 = (longlong *)(*param_1 + lVar2 * 0x20);
  if ((*(byte *)(param_2 + 0x664) & 1) != 0) {
    FUN_14026d15c(param_2);
    *(byte *)(param_2 + 0x664) = *(byte *)(param_2 + 0x664) & 0xfe;
  }
  lVar2 = *plVar5;
  if (*(int *)((longlong)plVar5 + 0x1c) != -1) {
    *(int *)(param_2 + 0x660) = *(int *)((longlong)plVar5 + 0x1c);
  }
  uVar3 = param_2 - lVar2 >> 4;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  *(int *)((longlong)plVar5 + 0x1c) = (int)(uVar3 / 0x67);
  *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  return SUB168(auVar1 * ZEXT816(0x13e22cbce4a9027d),0);
}



// FUNCTION 14026d15c FUN_14026d15c body=81 status=ok
// SIG undefined FUN_14026d15c(void)

void FUN_14026d15c(undefined8 *param_1)

{
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_149f4b8e0;
  return;
}



// FUNCTION 14026d1ae FUN_14026d1ae body=38 status=ok
// SIG undefined FUN_14026d1ae(void)

undefined8 FUN_14026d1ae(undefined8 param_1,int param_2)

{
  FUN_14026d1d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14026d1d4 FUN_14026d1d4 body=83 status=ok
// SIG undefined FUN_14026d1d4(void)

void FUN_14026d1d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f4e100;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14026d228(param_1 + 8);
  return;
}



// FUNCTION 14026d228 FUN_14026d228 body=55 status=ok
// SIG undefined FUN_14026d228(void)

void FUN_14026d228(longlong *param_1)

{
  FUN_14026d260(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14026d260 FUN_14026d260 body=513 status=ok
// SIG undefined FUN_14026d260(void)

void FUN_14026d260(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_14026d34c;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar6 * 0x20) != 0) {
        FUN_14026d0a4(*(undefined8 *)(*param_1 + (longlong)iVar6 * 0x20 + 8));
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
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
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_14026d34c;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14026d34c:
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
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14026d462 FUN_14026d462 body=562 status=ok
// SIG undefined FUN_14026d462(void)

undefined8 *
FUN_14026d462(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,float *param_7,undefined1 param_8,float param_9)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined1 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = &PTR_FUN_149f5fc08;
  local_80 = param_8;
  local_88 = param_2;
  FUN_14026d696(param_1,param_1 + 1,param_5);
  plVar1 = param_1 + 3;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = param_4;
  local_98 = param_1[1];
  local_90 = *(undefined4 *)(param_1 + 2);
  local_78 = DAT_14c84635c;
  local_a0 = 0;
  local_a8 = 0x10;
  local_b8 = param_3;
  local_b0 = param_4;
  FUN_140a9b934(param_1 + 6,&local_78,param_6);
  param_1[6] = &PTR_FUN_149f57478;
  param_1[0xd] = 0x40dd0c55447a0000;
  param_1[0xe] = 0;
  fVar9 = param_7[1];
  if (param_9 <= param_7[1]) {
    fVar9 = param_9;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  fVar10 = *param_7;
  if (param_9 <= *param_7) {
    fVar10 = param_9;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  bVar5 = 1;
  if ((*(float *)(param_1 + 0xb) == fVar10) && (!NAN(*(float *)(param_1 + 0xb)) && !NAN(fVar10))) {
    bVar5 = -(*(float *)((longlong)param_1 + 0x5c) != fVar9) & 1;
  }
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | bVar5;
  *(float *)(param_1 + 0xb) = fVar10;
  *(float *)((longlong)param_1 + 0x5c) = fVar9;
  FUN_14005ea14(plVar1,*(undefined4 *)(param_1 + 2));
  if ((longlong)*(int *)(param_1 + 2) != 0) {
    piVar8 = (int *)param_1[1];
    piVar2 = piVar8 + (longlong)*(int *)(param_1 + 2) * 2;
    do {
      lVar6 = (longlong)*piVar8;
      lVar4 = *(longlong *)(param_2 + 0x28);
      lVar7 = (longlong)piVar8[1];
      fVar9 = *(float *)(lVar4 + 8 + lVar7 * 0xc) - *(float *)(lVar4 + 8 + lVar6 * 0xc);
      fVar11 = *(float *)(lVar4 + 4 + lVar7 * 0xc) - *(float *)(lVar4 + 4 + lVar6 * 0xc);
      fVar10 = *(float *)(lVar4 + lVar7 * 0xc) - *(float *)(lVar4 + lVar6 * 0xc);
      iVar3 = *(int *)(param_1 + 4);
      *(uint *)(param_1 + 4) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x24) < iVar3 + 1U) {
        FUN_14475e4ac(plVar1,iVar3);
      }
      *(float *)(*plVar1 + (longlong)iVar3 * 4) =
           SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
      piVar8 = piVar8 + 2;
    } while (piVar8 != piVar2);
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026d696 FUN_14026d696 body=536 status=ok
// SIG undefined FUN_14026d696(void)

undefined8 FUN_14026d696(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  float fVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_d0;
  undefined1 local_c4 [4];
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  iVar5 = (int)param_3[1];
  local_d8 = param_2;
  if ((longlong)iVar5 != 0) {
    uVar3 = (longlong)iVar5 * 3;
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar3);
    }
    FUN_14026dcb4(&local_b8,uVar3 & 0xffffffff);
    if ((uint)uVar3 < 4) {
      iVar5 = 1;
    }
    else {
      uVar11 = ((uint)uVar3 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_70 == 0) || (local_70 < iVar5)) {
      local_70 = iVar5;
      FUN_14026e04e();
    }
    if ((longlong)(int)param_3[1] != 0) {
      lVar9 = *param_3;
      local_d0 = lVar9 + (longlong)(int)param_3[1] * 0xc;
      lVar6 = lVar9 + 4;
      do {
        lVar8 = 1;
        lVar10 = 8;
        lVar12 = 0;
        lVar7 = lVar6;
        do {
          lVar13 = 0;
          do {
            iVar5 = *(int *)(lVar9 + lVar12 * 4);
            iVar2 = *(int *)(lVar7 + lVar13);
            if ((char)param_4[1] == '\x01') {
              fVar1 = *(float *)(*(longlong *)(*param_4 + 0x90) + (longlong)iVar5 * 4);
              if ((((fVar1 != 0.0) || (NAN(fVar1))) ||
                  (fVar1 = *(float *)(*(longlong *)(*param_4 + 0x90) + (longlong)iVar2 * 4),
                  fVar1 != 0.0)) || (NAN(fVar1))) goto LAB_14026d7c0;
            }
            else {
LAB_14026d7c0:
              local_c0 = iVar2;
              if (iVar5 < iVar2) {
                local_c0 = iVar5;
              }
              local_bc = iVar2;
              if (iVar2 < iVar5) {
                local_bc = iVar5;
              }
              FUN_14026d8b0(&local_b8,local_c4,&local_c0,0);
            }
            lVar13 = lVar13 + 4;
          } while (lVar10 != lVar13);
          lVar8 = lVar8 + 1;
          lVar10 = lVar10 + -4;
          lVar7 = lVar7 + 4;
          lVar12 = 1;
        } while (lVar8 != 3);
        lVar9 = lVar9 + 0xc;
        lVar6 = lVar6 + 0xc;
      } while (lVar9 != local_d0);
    }
  }
  uVar4 = local_d8;
  FUN_14026de80(&local_b8,local_d8);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14026dbfa(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14026d8b0 FUN_14026d8b0 body=328 status=ok
// SIG undefined FUN_14026d8b0(void)

undefined4 *
FUN_14026d8b0(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14026da8c(param_1,local_50);
  uVar1 = *param_3;
  *local_48 = uVar1;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = (uint)uVar1;
  uVar5 = (uVar5 >> 2) + uVar5 * 0x40 + (int)((ulonglong)uVar1 >> 0x20) + 0x9e3779b9 ^ uVar5;
  local_68 = param_4;
  cVar2 = FUN_14026d9fa(param_1,uVar5,local_48);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_48 + 0xc) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14026e04e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026d9fa FUN_14026d9fa body=145 status=ok
// SIG undefined FUN_14026d9fa(void)

void FUN_14026d9fa(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          FUN_14026db72(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + *param_1 + 8);
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_14026da76;
    }
  }
  uVar1 = 0;
LAB_14026da76:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14026da8c FUN_14026da8c body=229 status=ok
// SIG undefined FUN_14026da8c(void)

int * FUN_14026da8c(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14026db72 FUN_14026db72 body=136 status=ok
// SIG undefined FUN_14026db72(void)

void FUN_14026db72(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14026dbfa FUN_14026dbfa body=55 status=ok
// SIG undefined FUN_14026dbfa(void)

void FUN_14026dbfa(longlong *param_1)

{
  FUN_14026dc32(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14026dc32 FUN_14026dc32 body=128 status=ok
// SIG undefined FUN_14026dc32(void)

void FUN_14026dc32(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 14026dcb4 FUN_14026dcb4 body=459 status=ok
// SIG undefined FUN_14026dcb4(void)

void FUN_14026dcb4(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = (int)param_1[1];
  uVar9 = param_2 - iVar1;
  if (uVar9 != 0 && iVar1 <= (int)param_2) {
    uVar8 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    iVar13 = iVar1;
    if (iVar12 < (int)param_2) {
      FUN_14472eb64(param_1);
      iVar13 = (int)param_1[1];
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar13 + uVar9;
    if ((uint)(iVar12 - iVar13) < uVar9) {
      FUN_144869a3c(param_1);
    }
    if (iVar13 < (int)param_2) {
      lVar2 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(uVar8 * 0x10 + lVar2 + -0xc);
      do {
        iVar10 = (int)uVar8;
        if (iVar12 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar10 + -1;
        }
        puVar6[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar8 = uVar8 - 1;
        *puVar6 = uVar3;
        *(int *)(param_1 + 6) = iVar10 + -1;
        iVar12 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar12;
        puVar6 = puVar6 + -4;
      } while ((longlong)iVar13 < (longlong)uVar8);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar9;
      if (param_2 != 0) {
        uVar7 = uVar9 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar7) {
          if ((0x80 < uVar9) || (param_1[4] != 0)) {
            uVar11 = 0;
            if (0x80 < uVar9) {
              uVar11 = uVar7;
            }
            FUN_1446efa72(param_1 + 4,0,uVar11,4);
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar9 + 0x1f & 0xffffffe0;
        }
        plVar5 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar5 = param_1 + 2;
        }
        if (uVar9 < 0x101) {
          uVar7 = uVar7 + (uVar7 == 0);
        }
        memset(plVar5,0,(ulonglong)(uVar7 << 2));
        iVar1 = (int)param_1[5];
        iVar12 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar12 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          plVar5 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar9) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar9);
      FUN_1447c6044(param_1 + 2,uVar3,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 14026de80 FUN_14026de80 body=462 status=ok
// SIG undefined FUN_14026de80(void)

longlong * FUN_14026de80(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (iVar7 != 0) {
    FUN_1401adc10();
  }
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar11 = 1;
    uVar13 = 0;
    iVar2 = 0;
    iVar9 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 2);
    }
    uVar12 = *puVar6;
    if (uVar12 == 0) {
      iVar2 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar2 = iVar7 + -1;
      }
      uVar13 = 0;
      uVar11 = (ulonglong)(uint)(iVar2 >> 5);
      if (iVar2 >> 5 < 1) {
        uVar11 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar11 == uVar13) {
          return param_2;
        }
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar11 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar2 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar2) {
      iVar2 = iVar7;
    }
  }
  if (iVar2 < iVar7) {
    uVar12 = 0xffffffff;
    do {
      lVar10 = *param_1;
      iVar7 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar7 + 1U) {
        FUN_1402e69d2(param_2,iVar7);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar7 * 8) =
           *(undefined8 *)((longlong)iVar2 * 0x10 + lVar10);
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar2 = (int)uVar13;
      lVar10 = (longlong)iVar2;
      uVar3 = puVar6[lVar10] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar4 = iVar7 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar2) {
          iVar5 = iVar2;
        }
        if (iVar4 <= iVar2) {
          return param_2;
        }
        lVar8 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar6[lVar10 + lVar8 + 1];
          if (uVar3 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar5 - lVar10 == lVar8) {
            return param_2;
          }
        }
        uVar13 = (ulonglong)(iVar2 + (int)lVar8 + 1);
        uVar12 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar11 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar2 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar2 < iVar7);
  }
  return param_2;
}



// FUNCTION 14026e04e FUN_14026e04e body=644 status=ok
// SIG undefined FUN_14026e04e(void)

void FUN_14026e04e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar4,0,0);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar4 != 0) {
      FUN_1446efa72(plVar4,0,0);
    }
LAB_14026e093:
    uVar3 = 0;
    do {
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(undefined4 *)((longlong)plVar4 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
  }
  else {
    if (uVar7 == 0) goto LAB_14026e185;
    FUN_1446efa72(plVar4,0);
    if (0 < (int)uVar7) goto LAB_14026e093;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar8 = (int)param_1[5];
  local_4c = 1;
  if (iVar8 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_48;
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar11 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar11 = iVar8 + -1;
      }
      uVar6 = 0;
      uVar10 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar10 = uVar6;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar11 = 0;
      do {
        local_3c = iVar8;
        if (uVar10 == uVar6) goto LAB_14026e157;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar9[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar7 == 0);
      local_50 = (int)uVar6;
      local_38 = iVar11;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar7 & uVar7;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar8 <= local_3c) {
      local_3c = iVar8;
    }
  }
LAB_14026e157:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar8) {
    do {
      lVar2 = *local_58;
      lVar5 = (longlong)local_3c * 0x10;
      uVar10 = *(ulonglong *)(lVar2 + lVar5);
      uVar10 = (longlong)
               (int)(((uint)(uVar10 >> 2) & 0x3fffffff) +
                     (uint)uVar10 * 0x40 + (int)(uVar10 >> 0x20) + 0x9e3779b9 ^ (uint)uVar10) &
               (longlong)(int)param_1[9] - 1U;
      iVar8 = (int)uVar10;
      *(int *)(lVar2 + 0xc + lVar5) = iVar8;
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(undefined4 *)(lVar2 + 8 + lVar5) =
           *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(int *)((longlong)plVar4 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_14026e185:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14026e2d4 FUN_14026e2d4 body=1213 status=ok
// SIG undefined FUN_14026e2d4(void)

void FUN_14026e2d4(longlong *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *local_f0;
  void *local_98;
  ulonglong uStack_90;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)((longlong)param_1 + 0x18c) == 2) {
    lVar6 = (**(code **)(*param_1 + 0x180))();
    if ((lVar6 == 0) || (lVar6 = FUN_140115352(lVar6), lVar6 == 0)) {
      lVar6 = 0;
    }
    else {
      lVar6 = FUN_14026ea1e(*(undefined8 *)(lVar6 + 0x40),param_1 + 0x29);
    }
    FUN_14026ef16(param_1,&local_68);
    if (local_68 != (longlong *)0x0) {
      if (lVar6 == 0) {
        FUN_14033a7c0();
      }
      else {
        local_78 = 0;
        uStack_70 = 0;
        if ((longlong)*(int *)(lVar6 + 0x18) != 0) {
          puVar12 = *(uint **)(lVar6 + 0x10);
          puVar7 = puVar12 + (longlong)*(int *)(lVar6 + 0x18) * 4;
          do {
            if ((((puVar12[1] != 0 && *(longlong **)(puVar12 + 2) != (longlong *)0x0) &&
                 (uVar5 = *puVar12, -1 < (int)uVar5)) && ((int)uVar5 < DAT_14c9647dc)) &&
               (((lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 != 0
                 && (*(uint *)(lVar6 + 0x10) == puVar12[1])) &&
                (((*(uint *)(lVar6 + 8) & 0x10200000) == 0 &&
                 (lVar6 = (**(code **)(**(longlong **)(puVar12 + 2) + 0x18))(), lVar6 != 0)))))) {
              FUN_14026e798(&local_f8,lVar6);
              bVar2 = true;
              if (local_f8 != 0) {
                FUN_1403c747e(local_f8,&local_80,0);
                plVar8 = local_80;
                if (local_80 == (longlong *)0x0) {
                  FUN_144a61ac8(&local_80);
                }
                else {
                  local_98 = (void *)0x0;
                  uStack_90 = 0;
                  uVar5 = *(uint *)(local_80 + 0x3a);
                  if (uVar5 != 0) {
                    plVar10 = local_80 + 0x28;
                    uStack_90 = (ulonglong)uVar5;
                    FUN_144796b16(&local_98,0);
                    if ((longlong *)plVar8[0x38] != (longlong *)0x0) {
                      plVar10 = (longlong *)plVar8[0x38];
                    }
                    FUN_144796a68(local_98,plVar10,uVar5);
                    uVar4 = uStack_70;
                    lVar9 = (longlong)(int)(uint)uStack_90;
                    if (lVar9 != 0) {
                      iVar3 = (int)uStack_70;
                      lVar11 = (longlong)(int)uStack_70;
                      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_90 + (int)uStack_70);
                      if (uStack_70._4_4_ - iVar3 < (uint)uStack_90) {
                        FUN_144796b16(&local_78,uVar4 & 0xffffffff);
                      }
                      memmove((void *)(lVar11 * 0x80 + local_78),local_98,lVar9 << 7);
                      uStack_90 = uStack_90 & 0xffffffff00000000;
                    }
                  }
                  if (local_98 != (void *)0x0) {
                    FUN_1400020a8();
                  }
                  plVar8 = local_80;
                  if (((local_80 != (longlong *)0x0) &&
                      (*(int *)(local_80 + 0x21) = (int)local_80[0x21] + -1, (int)local_80[0x26] < 1
                      )) && (FUN_1400847bc(local_80 + 0x17,0), (int)plVar8[0x21] == 0)) {
                    FUN_140087e46(plVar8);
                    if (*plVar8 != -1) {
                      if (DAT_14cb259f8 == 0) goto LAB_14026e591;
                      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar8);
                    }
                    if (DAT_14cb259f8 != 0) {
                      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar8);
                    }
                  }
LAB_14026e591:
                  bVar2 = false;
                }
              }
              plVar8 = local_f0;
              if (local_f0 != (longlong *)0x0) {
                LOCK();
                plVar10 = local_f0 + 1;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)*plVar10 == 0) {
                  (**(code **)*local_f0)(local_f0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar8 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
              if (bVar2) {
                plVar8 = (longlong *)(*(longlong *)(lVar6 + 0x1c8) + 0x240);
                if (*(longlong *)(lVar6 + 0x1c8) == 0) {
                  plVar8 = &DAT_14c846480;
                }
                plVar10 = &local_f8;
                for (lVar6 = 0xc; uVar4 = uStack_70, lVar6 != 0; lVar6 = lVar6 + -1) {
                  *plVar10 = *plVar8;
                  plVar8 = plVar8 + 1;
                  plVar10 = plVar10 + 1;
                }
                lVar6 = (longlong)(int)uStack_70;
                uVar5 = (int)uStack_70 + 1;
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
                if (uStack_70._4_4_ < uVar5) {
                  FUN_144796b16(&local_78,uVar4 & 0xffffffff);
                }
                lVar6 = lVar6 * 0x80;
                plVar8 = &local_f8;
                plVar10 = (longlong *)(local_78 + lVar6);
                for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
                  *plVar10 = *plVar8;
                  plVar8 = plVar8 + 1;
                  plVar10 = plVar10 + 1;
                }
                *(undefined8 *)(local_78 + 0x60 + lVar6) = 0x3f800000;
                *(undefined2 *)(local_78 + 0x68 + lVar6) = 0;
                *(undefined8 *)(local_78 + 0x6c + lVar6) = 0;
              }
            }
            puVar12 = puVar12 + 4;
          } while (puVar12 != puVar7);
        }
        FUN_144904532(local_68,&local_78);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      if (((local_68 != (longlong *)0x0) &&
          (*(int *)(local_68 + 0x21) = (int)local_68[0x21] + -1, (int)local_68[0x26] < 1)) &&
         (FUN_1400847bc(local_68 + 0x17,0), (int)local_68[0x21] == 0)) {
        FUN_140087e46(local_68);
        if (*local_68 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_14026e30a;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_68);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_68);
        }
      }
    }
  }
LAB_14026e30a:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14026e798 FUN_14026e798 body=182 status=ok
// SIG undefined FUN_14026e798(void)

longlong * FUN_14026e798(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14026eace(&local_30);
  lVar4 = local_30;
  bVar3 = true;
  if (local_30 != 0) {
    uVar6 = FUN_14026e850();
    cVar5 = FUN_1448093f4(lVar4,uVar6);
    if (cVar5 != '\0') {
      *param_1 = local_30;
      param_1[1] = (longlong)local_28;
      if (local_28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_28 + 1) = (int)local_28[1] + 1;
        UNLOCK();
      }
      bVar3 = false;
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
  if (bVar3) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026e850 FUN_14026e850 body=57 status=ok
// SIG undefined FUN_14026e850(void)

void FUN_14026e850(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb25388 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb25388 = FUN_140002ddd(FUN_14644692a,uVar1,L"GbxAudioProvider");
  }
  return;
}



// FUNCTION 14026e88a FUN_14026e88a body=122 status=ok
// SIG undefined FUN_14026e88a(void)

undefined8 FUN_14026e88a(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0x17c) != 0) && (uVar1 = *(uint *)(param_1 + 0x178), -1 < (int)uVar1))
       && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x17c))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x18))();
        if (lVar3 != 0) {
          uVar2 = FUN_1447210f0(lVar3);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14026e904 FUN_14026e904 body=281 status=ok
// SIG undefined FUN_14026e904(void)

longlong FUN_14026e904(longlong param_1)

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
  lVar1 = *(longlong *)(param_1 + -8);
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
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_14026e957;
  }
  lVar1 = 0;
LAB_14026e957:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026ea1e FUN_14026ea1e body=175 status=ok
// SIG undefined FUN_14026ea1e(void)

longlong FUN_14026ea1e(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  uint local_38 [6];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & local_38[0]) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *param_1 + (longlong)iVar3 * 0x50;
        if (*(uint *)(*param_1 + (longlong)iVar3 * 0x50) == local_38[0]) goto LAB_14026ea95;
        iVar3 = *(int *)(lVar4 + 0x48);
      } while (iVar3 != -1);
    }
  }
  lVar4 = 0;
LAB_14026ea95:
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  lVar1 = lVar4 + 0x28;
  if (lVar4 == 0) {
    lVar1 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026eace FUN_14026eace body=1094 status=ok
// SIG undefined FUN_14026eace(void)

undefined8 * FUN_14026eace(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != (longlong *)0x0) {
    if (DAT_14cb252d8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_147f6f07f;
      local_50 = FUN_1464465e2;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioImplementer",&DAT_14cb252d8,&DAT_147f6f07e);
    }
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14cb252d8);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb252d8 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147f6f07f;
        local_50 = FUN_1464465e2;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioImplementer",&DAT_14cb252d8,&DAT_147f6f07e);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb252d8);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) goto LAB_14026eb3f;
    }
    if (DAT_14cad00c8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1479b7a0c;
      local_50 = (code *)&LAB_1463b464e;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
    }
    if (((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
         DAT_14cad00c8 + 0x30)) && (plVar1 = (longlong *)param_2[0x15], plVar1 != (longlong *)0x0))
    {
      if (DAT_14cb252d8 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147f6f07f;
        local_50 = FUN_1464465e2;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioImplementer",&DAT_14cb252d8,&DAT_147f6f07e);
      }
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb252d8);
      if (plVar1 != (longlong *)0x0) {
        if (DAT_14cb252d8 == 0) {
          local_40 = &local_28;
          local_28 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_1427b09ee;
          local_48 = &LAB_147f6f07f;
          local_50 = FUN_1464465e2;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10004001;
          local_70 = 8;
          local_78 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioImplementer",&DAT_14cb252d8,&DAT_147f6f07e);
        }
        plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb252d8);
        if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
LAB_14026eb3f:
          (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026ef16 FUN_14026ef16 body=569 status=ok
// SIG undefined FUN_14026ef16(void)

longlong * FUN_14026ef16(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_60 [2];
  longlong *local_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x18c) == 2) {
    if (*(longlong **)(param_1 + 0x180) == (longlong *)0x0) {
LAB_14026f037:
      plVar7 = (longlong *)0x0;
    }
    else {
      if (*(int *)(param_1 + 0x17c) == 0) goto LAB_14026f037;
      uVar3 = *(uint *)(param_1 + 0x178);
      plVar7 = (longlong *)0x0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        if ((lVar6 == 0) || (*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0x17c)))
        goto LAB_14026f037;
        plVar7 = (longlong *)0x0;
        if ((*(uint *)(lVar6 + 8) & 0x10200000) == 0) {
          plVar7 = *(longlong **)(param_1 + 0x180);
        }
      }
    }
    lVar6 = (**(code **)(*plVar7 + 8))();
    if (lVar6 == 0) {
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
LAB_14026f129:
      bVar4 = true;
    }
    else {
      (**(code **)(*(longlong *)(lVar6 + 0x30) + 0x10))(lVar6 + 0x30,&local_48);
      if (local_48 == 0) goto LAB_14026f129;
      FUN_1403c747e(local_48,param_2,DAT_14cb7efa8);
      lVar6 = local_48;
      uVar5 = DAT_14cb7efa8;
      if (*param_2 == 0) {
        FUN_140056680(local_60,L"DistributedSpeakerControllerEmitter");
        local_68 = 0;
        FUN_14084a140(lVar6,&local_50,local_60,uVar5);
        FUN_1403c75f4(param_2,&local_50);
        if (local_50 != (longlong *)0x0) {
          *(int *)(local_50 + 0x21) = (int)local_50[0x21] + -1;
          if ((int)local_50[0x26] < 1) {
            FUN_1400847bc(local_50 + 0x17,0);
            if ((int)local_50[0x21] == 0) {
              FUN_140087e46(local_50);
              if (*local_50 != -1) {
                if (DAT_14cb259f8 == 0) goto LAB_14026f0b2;
                FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_50);
              }
              if (DAT_14cb259f8 != 0) {
                FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_50);
              }
            }
          }
LAB_14026f0b2:
          local_50 = (longlong *)0x0;
        }
        if (local_60[0] != 0) {
          FUN_1400020a8();
        }
      }
      bVar4 = false;
    }
    plVar7 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (!bVar4) goto LAB_14026f011;
  }
  *param_2 = 0;
LAB_14026f011:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026f16c FUN_14026f16c body=284 status=ok
// SIG undefined FUN_14026f16c(void)

ulonglong FUN_14026f16c(uint *param_1,void *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong _Size;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = *param_1;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  puVar1 = (ushort *)((&DAT_14c87eb10)[uVar4 >> 0x10] + (ulonglong)(uVar4 & 0xffff) * 2);
  uVar2 = *puVar1;
  _Size = (ulonglong)(uint)(uVar2 >> 6);
  if ((uVar2 & 1) == 0) {
    memcpy(param_2,puVar1 + 1,_Size);
    if (0x3f < *puVar1) {
      uVar3 = *puVar1 >> 6;
      uVar4 = (uint)uVar3;
      uVar6 = (ulonglong)(uVar3 - 1);
      do {
        *(short *)((longlong)param_2 + uVar6 * 2) = (short)*(char *)((longlong)param_2 + uVar6);
        uVar6 = uVar6 - 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    memcpy(param_2,puVar1 + 1,(ulonglong)(uVar2 >> 5 & 0xfffffffe));
  }
  if (param_1[1] == 0) {
    *(undefined2 *)((longlong)param_2 + _Size * 2) = 0;
  }
  else {
    iVar5 = FUN_141301ee6(local_48,&DAT_149e3beb8,param_1[1] - 1);
    uVar6 = (ulonglong)((uint)(uVar2 >> 6) + iVar5);
    memcpy((void *)((longlong)param_2 + _Size * 2),local_48,(longlong)iVar5 * 2);
    *(undefined2 *)((longlong)param_2 + uVar6 * 2) = 0;
    _Size = uVar6;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return _Size;
}



// FUNCTION 14026f28a FUN_14026f28a body=71 status=ok
// SIG undefined FUN_14026f28a(void)

void FUN_14026f28a(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14026f43e();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_14026fa70();
      return;
    }
  }
  return;
}



// FUNCTION 14026f2d2 FUN_14026f2d2 body=106 status=ok
// SIG undefined FUN_14026f2d2(void)

undefined4 * FUN_14026f2d2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 != param_2) {
    if (*(longlong *)(param_2 + 6) == 0) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
    }
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = 0;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0x100000000;
  }
  return param_1;
}



// FUNCTION 14026f33c FUN_14026f33c body=257 status=ok
// SIG undefined FUN_14026f33c(void)

void FUN_14026f33c(uint *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (1e-08 <= ABS(param_3)) {
    fVar1 = SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
    fVar2 = SQRT(param_2[5] * param_2[5] + param_2[3] * param_2[3] + param_2[4] * param_2[4]);
    fVar3 = SQRT(param_2[8] * param_2[8] + param_2[6] * param_2[6] + param_2[7] * param_2[7]);
    *param_1 = -(uint)(0.0 < fVar1) & (uint)(param_3 / fVar1);
    param_1[1] = -(uint)(0.0 < fVar2) & (uint)(param_3 / fVar2);
    param_1[2] = -(uint)(0.0 < fVar3) & (uint)(param_3 / fVar3);
  }
  else {
    param_1[2] = DAT_14c846338;
    *(undefined8 *)param_1 = DAT_14c846330;
  }
  return;
}



// FUNCTION 14026f43e FUN_14026f43e body=275 status=ok
// SIG undefined FUN_14026f43e(void)

void FUN_14026f43e(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14026f552 FUN_14026f552 body=1282 status=ok
// SIG undefined FUN_14026f552(void)

void FUN_14026f552(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  void **ppvVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  code *pcVar16;
  longlong lVar17;
  undefined1 auStack_88 [40];
  size_t local_60;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0x1e) & 2) == 0) {
    **(undefined4 **)(param_2 + 0x70) = 0;
    plVar13 = *(longlong **)(param_2 + 0x20);
    iVar1 = *(int *)((longlong)plVar13 + 0xc);
    *(undefined4 *)(plVar13 + 1) = 0;
joined_r0x00014026f755:
    if (iVar1 < 0) {
      FUN_14482f6fa(plVar13);
    }
  }
  else {
    lVar17 = param_1[0x15];
    **(int **)(param_2 + 0x70) = (int)lVar17;
    plVar13 = *(longlong **)(param_2 + 0x20);
    if (((int)lVar17 == 0) || ((*(ushort *)(param_1 + 0x1e) & 2) == 0)) {
      if ((*(ushort *)(param_1 + 0x1e) & 2) == 0) {
        iVar1 = *(int *)((longlong)plVar13 + 0xc);
        *(undefined4 *)(plVar13 + 1) = 0;
        goto joined_r0x00014026f755;
      }
    }
    else if (((char)param_1[0x12] == '\0') &&
            ((int)param_1[0x11] + (int)param_1[0x10] != (int)param_1[0x36])) {
      iVar1 = **(int **)(param_2 + 0x70);
      iVar5 = *(int *)((longlong)param_1 + 0x1b4) * iVar1;
      iVar8 = (int)plVar13[1];
      if (iVar5 - iVar8 == 0 || iVar5 < iVar8) {
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar5);
        }
        if (iVar5 < iVar8) {
          *(int *)(plVar13 + 1) = iVar5;
          FUN_1401fef06(plVar13);
        }
      }
      else {
        *(int *)(plVar13 + 1) = iVar5;
        if ((uint)(*(int *)((longlong)plVar13 + 0xc) - iVar8) < (uint)(iVar5 - iVar8)) {
          FUN_14475e4ac(plVar13);
        }
      }
      iVar8 = (int)param_1[0xe];
      iVar5 = (int)param_1[0xf];
      if (iVar8 < (int)param_1[0xf]) {
        iVar5 = iVar8;
      }
      iVar15 = iVar5 + 7;
      if (-1 < iVar5) {
        iVar15 = iVar5;
      }
      uVar2 = *(uint *)(param_1 + 9);
      uVar14 = iVar15 >> 3;
      uVar9 = (ulonglong)uVar14;
      iVar15 = iVar5 % 8;
      uVar11 = 0;
      if ((-8 < iVar5) && (uVar11 = 0, (int)uVar14 < (int)uVar2)) {
        uVar11 = *(uint *)(param_1[8] + (longlong)(int)uVar14 * 4) & 0x55555555;
      }
      bVar4 = (char)iVar15 * '\x04' & 0x1f;
      uVar12 = uVar11 >> bVar4;
      if ((int)uVar14 < (int)uVar2) {
        if (uVar11 >> bVar4 == 0) {
          uVar10 = (longlong)(int)uVar14;
          do {
            uVar12 = 0;
            if ((longlong)(int)uVar2 - 1U == uVar10) {
              uVar9 = (ulonglong)uVar2;
              iVar15 = 0;
              goto LAB_14026f885;
            }
            uVar9 = uVar10 + 1;
            uVar12 = *(uint *)(param_1[8] + 4 + uVar10 * 4) & 0x55555555;
            uVar10 = uVar9;
          } while (uVar12 == 0);
          iVar15 = 0;
        }
        uVar2 = 0;
        if (uVar12 != 0) {
          for (; (uVar12 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        iVar15 = (uVar2 >> 2) + iVar15;
        uVar12 = uVar12 >> ((byte)uVar2 & 0x1c);
      }
LAB_14026f885:
      iVar7 = iVar15 + (int)uVar9 * 8;
      iVar5 = *(int *)((longlong)param_1 + 0x7c) + 1;
      if (iVar8 < iVar5) {
        iVar5 = iVar8;
      }
      if (iVar7 < iVar5) {
        local_60 = (longlong)iVar1 * 4;
        lVar17 = 0;
        do {
          memcpy((void *)((longlong)(iVar7 * iVar1) * 4 + *plVar13),
                 (void *)(lVar17 * iVar1 * 4 + param_1[0x1a]),local_60);
          uVar12 = uVar12 & 0xfffffffa;
          uVar2 = *(uint *)(param_1 + 9);
          if ((int)uVar9 < (int)uVar2) {
            uVar9 = (ulonglong)(int)uVar9;
            if (uVar12 == 0) {
              uVar10 = uVar9;
              do {
                uVar12 = 0;
                if ((longlong)(int)uVar2 - 1U == uVar10) {
                  uVar9 = (ulonglong)uVar2;
                  iVar15 = 0;
                  goto LAB_14026f8ff;
                }
                uVar9 = uVar10 + 1;
                iVar15 = 0;
                uVar12 = *(uint *)(param_1[8] + 4 + uVar10 * 4) & 0x55555555;
                uVar10 = uVar9;
              } while (uVar12 == 0);
            }
            uVar2 = 0;
            if (uVar12 != 0) {
              for (; (uVar12 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
              }
            }
            iVar15 = (uVar2 >> 2) + iVar15;
            uVar12 = uVar12 >> ((byte)uVar2 & 0x1c);
          }
LAB_14026f8ff:
          lVar17 = lVar17 + 1;
          iVar7 = iVar15 + (int)uVar9 * 8;
          iVar8 = *(int *)((longlong)param_1 + 0x7c) + 1;
          if ((int)param_1[0xe] < iVar8) {
            iVar8 = (int)param_1[0xe];
          }
        } while (iVar7 < iVar8);
      }
      goto LAB_14026f5ff;
    }
    if (plVar13 != param_1 + 0x1a) {
      if (*plVar13 != 0) {
        FUN_1400020a8();
      }
      *plVar13 = param_1[0x1a];
      param_1[0x1a] = 0;
      *(int *)(plVar13 + 1) = (int)param_1[0x1b];
      *(undefined4 *)((longlong)plVar13 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xdc);
      param_1[0x1b] = 0;
    }
  }
LAB_14026f5ff:
  plVar13 = *(longlong **)(param_2 + 0x30);
  if ((*(byte *)(param_1 + 0x1e) & 0x10) == 0) {
    *(undefined4 *)(plVar13 + 1) = 0;
    if (*(int *)((longlong)plVar13 + 0xc) < 0) {
      FUN_14499148c(plVar13);
    }
  }
  else if (plVar13 != param_1 + 0x1c) {
    if (*plVar13 != 0) {
      FUN_1400020a8();
    }
    *plVar13 = param_1[0x1c];
    param_1[0x1c] = 0;
    *(int *)(plVar13 + 1) = (int)param_1[0x1d];
    *(undefined4 *)((longlong)plVar13 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xec);
    param_1[0x1d] = 0;
  }
  plVar13 = *(longlong **)(param_2 + 0x28);
  if ((*(byte *)(param_1 + 0x1e) & 1) == 0) {
    *(undefined4 *)(plVar13 + 1) = 0;
    if (*(int *)((longlong)plVar13 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
  }
  else {
    iVar1 = *(int *)((longlong)param_1 + 0x1b4);
    iVar8 = (int)plVar13[1];
    if (iVar8 < iVar1) {
      *(int *)(plVar13 + 1) = iVar1;
      if ((uint)(*(int *)((longlong)plVar13 + 0xc) - iVar8) < (uint)(iVar1 - iVar8)) {
        FUN_14475e4ac(plVar13);
      }
      memset((void *)((longlong)iVar8 * 4 + *plVar13),0,(longlong)(iVar1 - iVar8) << 2);
    }
    else {
      if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar1);
      }
      if (iVar1 < iVar8) {
        *(int *)(plVar13 + 1) = iVar1;
        FUN_1401fef06(plVar13);
      }
    }
    pcVar16 = (code *)*param_1;
    if (pcVar16 != (code *)0x0) {
      local_58 = (void *)0x0;
      uStack_50 = 0;
      uVar2 = *(uint *)((longlong)param_1 + 0x1b4);
      if ((int)uVar2 < 1) {
        if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((ulonglong)uVar2);
        }
      }
      else {
        uStack_50 = (ulonglong)uVar2;
        FUN_14475e4ac(&local_58);
        memset(local_58,0,(ulonglong)uVar2 * 4);
        pcVar16 = (code *)*param_1;
      }
      plVar13 = param_1 + 4;
      if ((longlong *)param_1[2] != (longlong *)0x0) {
        plVar13 = (longlong *)param_1[2];
      }
      uVar6 = (**(code **)(*plVar13 + 8))(plVar13);
      (*pcVar16)(uVar6,&local_58);
      ppvVar3 = *(void ***)(param_2 + 0x28);
      if (ppvVar3 == &local_58) {
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*ppvVar3 != (void *)0x0) {
          FUN_1400020a8();
        }
        *ppvVar3 = local_58;
        *(undefined4 *)(ppvVar3 + 1) = (undefined4)uStack_50;
        *(undefined4 *)((longlong)ppvVar3 + 0xc) = uStack_50._4_4_;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026fa70 FUN_14026fa70 body=151 status=ok
// SIG undefined FUN_14026fa70(void)

void FUN_14026fa70(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x30)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x30,4);
      uVar3 = uVar3 / 0x30;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x30,4);
    }
  }
  return;
}



// FUNCTION 14026fb08 FUN_14026fb08 body=164 status=ok
// SIG undefined FUN_14026fb08(void)

void FUN_14026fb08(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  LOCK();
  bVar3 = DAT_14caec5e8 == '\0';
  if (bVar3) {
    DAT_14caec5e8 = '\x01';
  }
  UNLOCK();
  if (!bVar3) {
    FUN_1447d2058(&DAT_14caec5e8);
  }
  iVar1 = FUN_14026fbea(&DAT_14caec598,param_1);
  LOCK();
  bVar3 = DAT_14caec5e8 == '\x01';
  if (bVar3) {
    DAT_14caec5e8 = '\0';
  }
  UNLOCK();
  if (!bVar3) {
    FUN_14008cdb0(&DAT_14caec5e8);
  }
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x78))(param_1);
  }
  FUN_1447a4a8e(param_1,1);
  lVar2 = FUN_14026fbac();
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xa0));
  FUN_140115142(lVar2 + 0x50,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014026fb7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xa0));
  return;
}



// FUNCTION 14026fbac FUN_14026fbac body=61 status=ok
// SIG undefined FUN_14026fbac(void)

longlong FUN_14026fbac(void)

{
  longlong lVar1;
  
  if (DAT_14cad8a40 == 0) {
    lVar1 = FUN_14001cc68(200,0x10);
    FUN_1456eb406(lVar1);
    DAT_14cad8a40 = lVar1;
  }
  return DAT_14cad8a40;
}



// FUNCTION 14026fbea FUN_14026fbea body=154 status=ok
// SIG undefined FUN_14026fbea(void)

undefined8 FUN_14026fbea(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_1456eb338(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14026fc84 FUN_14026fc84 body=209 status=ok
// SIG undefined FUN_14026fc84(void)

void FUN_14026fc84(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x90) & 0x10) == 0) {
    if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x16c0) == '\0') {
      uVar1 = *(uint *)(param_1 + 0x178);
      if (0 < (longlong)(int)uVar1) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x68);
        iVar2 = *(int *)(lVar3 + 0x328);
        *(uint *)(lVar3 + 0x328) = iVar2 + uVar1;
        if ((uint)(*(int *)(lVar3 + 0x32c) - iVar2) < uVar1) {
          FUN_140b3b51e((longlong *)(lVar3 + 800),iVar2);
        }
        memcpy((void *)((longlong)iVar2 * 8 + *(longlong *)(lVar3 + 800)),
               *(void **)(param_1 + 0x170),(longlong)(int)uVar1 << 3);
        *(undefined4 *)(param_1 + 0x178) = 0;
        if (*(int *)(param_1 + 0x17c) < 0) {
          FUN_1417c3e4a(param_1 + 0x170,0);
        }
      }
    }
    FUN_14026fd56(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14026fd56 FUN_14026fd56 body=337 status=ok
// SIG undefined FUN_14026fd56(void)

void FUN_14026fd56(longlong param_1,longlong *param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_188 [38];
  undefined2 local_162;
  undefined1 local_160 [144];
  undefined8 local_d0;
  undefined8 local_c0;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x68);
  if (0 < *(int *)(lVar2 + 0x328)) {
    FUN_14072f9e6(local_160);
    (**(code **)(*param_2 + 0xa8))(param_2);
    local_162 = *(undefined2 *)(lVar2 + 0x328);
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (undefined2 *)*puVar3 + 1;
    if ((undefined2 *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_162,2);
      }
      else {
        FUN_1457251a8(param_2,&local_162);
      }
    }
    else {
      local_162 = *(undefined2 *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if ((longlong)*(int *)(lVar2 + 0x328) != 0) {
      lVar4 = *(longlong *)(lVar2 + 800);
      lVar5 = (longlong)*(int *)(lVar2 + 0x328) << 3;
      do {
        (**(code **)(*param_2 + 400))(param_2,lVar4);
        lVar4 = lVar4 + 8;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
    }
    (**(code **)(*param_2 + 0x178))(param_2,local_d0,local_c0);
    *(byte *)((longlong)param_2 + 0xf5) = *(byte *)((longlong)param_2 + 0xf5) | 2;
    *(undefined4 *)(lVar2 + 0x328) = 0;
    if (*(int *)(lVar2 + 0x32c) < 0) {
      FUN_1417c3e4a(lVar2 + 800,0);
    }
    FUN_1449daebe(local_160);
  }
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14026fea8 FUN_14026fea8 body=25 status=ok
// SIG undefined FUN_14026fea8(void)

undefined8 FUN_14026fea8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14026fec2 FUN_14026fec2 body=347 status=ok
// SIG undefined FUN_14026fec2(void)

void FUN_14026fec2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  FUN_140323344();
  FUN_1419081bc(param_1);
  FUN_140149e7a(param_1);
  iVar5 = *(int *)(param_1 + 0x194);
  *(int *)(param_1 + 0x194) = iVar5 + 1;
  uVar6 = (ulonglong)*(int *)(param_1 + 0x188);
  if ((longlong)uVar6 < 1) {
    *(int *)(param_1 + 0x194) = iVar5;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x180);
    bVar8 = false;
    do {
      lVar10 = uVar6 * 0x10 + -8;
      uVar11 = uVar6;
      while (((*(int *)(*plVar1 + lVar10) != 0 &&
              (plVar2 = *(longlong **)(*plVar1 + -8 + lVar10), plVar2 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar2 + 0x60))(), cVar4 != '\0'))) {
        lVar10 = lVar10 + -0x10;
        bVar3 = uVar11 < 2;
        uVar11 = uVar11 - 1;
        if (bVar3) {
          iVar5 = *(int *)(param_1 + 0x194) + -1;
          *(int *)(param_1 + 0x194) = iVar5;
          if (!bVar8) {
            return;
          }
          goto LAB_14026ff67;
        }
      }
      uVar6 = uVar11 - 1;
      bVar8 = true;
    } while (1 < uVar11);
    iVar5 = *(int *)(param_1 + 0x194) + -1;
    *(int *)(param_1 + 0x194) = iVar5;
LAB_14026ff67:
    if (iVar5 < 1) {
      iVar5 = *(int *)(param_1 + 0x188);
      iVar7 = iVar5;
      if (0 < iVar5) {
        iVar9 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar9 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar9 * 0x10), plVar2 == (longlong *)0x0)
              ) || (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(plVar1,iVar9);
            FUN_14005b248(plVar1);
          }
          else {
            iVar9 = iVar9 + 1;
          }
          iVar7 = *(int *)(param_1 + 0x188);
        } while (iVar9 < iVar7);
      }
      iVar9 = 2;
      if (2 < iVar7 * 2) {
        iVar9 = iVar7 * 2;
      }
      *(int *)(param_1 + 400) = iVar9;
      if ((iVar9 < iVar5) && (*(int *)(param_1 + 0x18c) != iVar7)) {
        FUN_14045812c(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14027001e FUN_14027001e body=320 status=ok
// SIG undefined FUN_14027001e(void)

bool FUN_14027001e(ushort *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9bb308) {
    FUN_144b3d300(&DAT_14c9bb308);
    if (DAT_14c9bb308 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar6 == (longlong *)0x0) {
        DAT_14c9bb300 = 0;
      }
      else {
        DAT_14c9bb300 = (**(code **)(*plVar6 + 0x68))(plVar6);
      }
      _Init_thread_footer(&DAT_14c9bb308);
    }
  }
  lVar2 = DAT_14c9bb300;
  if (DAT_14c9bb300 == 0) {
    bVar9 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar7 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar7 = 1;
    }
    bVar9 = *(int *)(lVar2 + uVar7 * 4) != 0;
  }
  bVar8 = false;
  cVar3 = FUN_14027015e(0,param_1);
  if ((bVar9) || (cVar3 != '\0')) {
    bVar8 = 2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf];
  }
  return bVar8;
}



// FUNCTION 14027015e FUN_14027015e body=369 status=ok
// SIG undefined FUN_14027015e(void)

ulonglong FUN_14027015e(uint param_1,ushort *param_2)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  if (0xd < param_1) {
    return 0;
  }
  uVar3 = (longlong)&switchD_14027017b::switchdataD_14a249248 +
          (longlong)(int)(&switchD_14027017b::switchdataD_14a249248)[param_1];
  switch(param_1) {
  case 0:
    return CONCAT71((int7)(uVar3 >> 8),1);
  default:
    bVar1 = (byte)param_2[10];
    goto LAB_14027019b;
  case 2:
    if ((param_2[10] & 1) != 0) {
      return 0;
    }
    if (1 < *(uint *)(param_2 + 0xc)) {
      return 0;
    }
    if (DAT_14c760e18 == 1) {
      return CONCAT71((int7)((ulonglong)*param_2 * 0x3c >> 8),
                      2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_2 * 0xf]);
    }
    break;
  case 5:
  case 6:
    uVar4 = 1;
LAB_14027018a:
    uVar3 = FUN_1402702cf(uVar4,param_2);
    return uVar3;
  case 7:
switchD_14027017b_caseD_7:
    uVar3 = FUN_140270570(param_2);
    return uVar3;
  case 8:
    if (((DAT_14ca964f0 != 1) || ((DAT_14c760e14 & 1) == 0)) && (DAT_14c760e16 == 1))
    goto switchD_14027017b_caseD_7;
    break;
  case 9:
    if ((DAT_14ca964f0 & DAT_14c760e14) != 0) {
      return 0;
    }
    if (1 < *(uint *)(param_2 + 0xc)) {
      return 0;
    }
  case 4:
    uVar4 = 0;
    goto LAB_14027018a;
  case 0xb:
    if ((DAT_14ca964f0 == 1) && ((DAT_14c760e14 & 1) != 0)) {
      return 0;
    }
    if (DAT_14c760e16 != 1) {
      return 0;
    }
    if (1 < *(uint *)(param_2 + 0xc)) {
      return 0;
    }
  case 10:
    uVar3 = (ulonglong)param_2[10];
    bVar1 = (byte)param_2[10];
LAB_14027019b:
    return CONCAT71((int7)(uVar3 >> 8),(bVar1 & 1) == 0 & DAT_14c760e18);
  case 0xc:
    if (((DAT_14ca964f0 != 1) || ((DAT_14c760e14 & 1) == 0)) &&
       ((DAT_14c760e18 != 0 || (cVar2 = FUN_140270692(), cVar2 == '\0')))) {
      if ((param_2[10] & 1) != 0) {
        return 0;
      }
      if (*(uint *)(param_2 + 0xc) < 2) {
        if (DAT_14c760e18 == 1) {
          return (ulonglong)DAT_14c760e16;
        }
        return 1;
      }
      return 0;
    }
    break;
  case 0xd:
    if ((param_2[10] & 1) == 0) {
      uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x24) >> 8),
                       *(undefined1 *)(*(longlong *)(param_2 + 0x24) + 0x28)) & 0xffffffffffffff04;
      return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 2);
    }
  }
  return 0;
}



// FUNCTION 1402702cf FUN_1402702cf body=673 status=ok
// SIG undefined FUN_1402702cf(void)

ulonglong FUN_1402702cf(int param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e90c8) {
    FUN_144b3d300(&DAT_14c9e90c8);
    if (DAT_14c9e90c8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar5 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SupportLowQualityLightmaps",1);
      if (plVar5 == (longlong *)0x0) {
        DAT_14c9e90c0 = 0;
      }
      else {
        DAT_14c9e90c0 = (**(code **)(*plVar5 + 0x68))(plVar5);
      }
      _Init_thread_footer(&DAT_14c9e90c8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e90d8) {
    FUN_144b3d300(&DAT_14c9e90d8);
    if (DAT_14c9e90d8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar5 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.SupportAllShaderPermutations",1);
      if (plVar5 == (longlong *)0x0) {
        DAT_14c9e90d0 = 0;
      }
      else {
        DAT_14c9e90d0 = (**(code **)(*plVar5 + 0x68))(plVar5);
      }
      _Init_thread_footer(&DAT_14c9e90d8);
    }
  }
  lVar2 = DAT_14c9e90d0;
  bVar9 = true;
  bVar8 = true;
  if (DAT_14c9e90d0 != 0) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar7 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar7 = 1;
    }
    bVar8 = *(int *)(lVar2 + uVar7 * 4) == 0;
  }
  lVar2 = DAT_14c9e90c0;
  if ((bVar8) && (DAT_14c9e90c0 != 0)) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if ((iVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar1 == 2)))) {
      uVar7 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar7 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar7 = 1;
    }
    bVar9 = *(int *)(lVar2 + uVar7 * 4) != 0;
  }
  uVar7 = 0;
  if ((!(bool)(param_1 == 0 & (bVar9 ^ 1U))) && ((*(ushort *)(param_2 + 0x14) & 1) == 0)) {
    if (((*(byte *)(*(longlong *)(param_2 + 0x48) + 0x28) & 4) == 0) || (DAT_14c760e18 != '\x01')) {
      uVar7 = 0;
    }
    else {
      uVar7 = CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x48) >> 8),1);
      uVar6 = (uint)*(undefined8 *)(param_2 + 0x38);
      if ((uVar6 >> 0x1a & 1) == 0) {
        uVar7 = (ulonglong)((uVar6 & 2) >> 1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 140270570 FUN_140270570 body=290 status=ok
// SIG undefined FUN_140270570(void)

undefined8 FUN_140270570(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e90e8) {
    FUN_144b3d300(&DAT_14c9e90e8);
    if (DAT_14c9e90e8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.Mobile.AllowDistanceFieldShadows",1);
      if (plVar6 == (longlong *)0x0) {
        DAT_14c9e90e0 = 0;
      }
      else {
        DAT_14c9e90e0 = (**(code **)(*plVar6 + 0x68))(plVar6);
      }
      _Init_thread_footer(&DAT_14c9e90e8);
    }
  }
  lVar2 = DAT_14c9e90e0;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar7 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar7 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar7 = 1;
  }
  if ((*(int *)(lVar2 + uVar7 * 4) == 1) && (*(uint *)(param_1 + 0x18) < 2)) {
    uVar5 = FUN_1402702cf(0,param_1);
    return uVar5;
  }
  return 0;
}



// FUNCTION 140270692 FUN_140270692 body=266 status=ok
// SIG undefined FUN_140270692(void)

undefined8 FUN_140270692(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined4 extraout_var;
  ulonglong uVar8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e90b8) {
    FUN_144b3d300(&DAT_14c9e90b8);
    if (DAT_14c9e90b8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar7 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.UseCSMShaderBranch",1);
      if (plVar7 == (longlong *)0x0) {
        DAT_14c9e90b0 = 0;
      }
      else {
        DAT_14c9e90b0 = (**(code **)(*plVar7 + 0x68))(plVar7);
      }
      _Init_thread_footer(&DAT_14c9e90b8);
    }
  }
  lVar2 = DAT_14c9e90b0;
  if (DAT_14c9e90b0 == 0) {
    uVar6 = 0;
  }
  else {
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
    uVar6 = CONCAT71((int7)(uVar5 >> 8),*(int *)(lVar2 + uVar8 * 4) != 0);
  }
  return uVar6;
}



// FUNCTION 14027079c FUN_14027079c body=270 status=ok
// SIG undefined FUN_14027079c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14027079c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  
  if (*param_1 != 0) {
    uVar4 = *(uint *)(param_1 + 1);
    if (uVar4 != 0) {
      bVar5 = 0;
      do {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c99e178) {
          FUN_144b3d300(&DAT_14c99e178);
          if (DAT_14c99e178 == -1) {
            _DAT_14c99e148 = &PTR_LAB_149e668b0;
            _DAT_14c99e150 = 0;
            FUN_1405bceb4(&DAT_14c99e148);
            _DAT_14c99e148 = &PTR_FUN_149fcd880;
            DAT_14c99e158 = 0;
            _DAT_14c99e160 = 0;
            _DAT_14c99e168 = 0;
            _DAT_14c99e170 = 0;
            atexit((_func_5014 *)&LAB_142aedb63);
            _Init_thread_footer(&DAT_14c99e178);
          }
        }
        uVar2 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        plVar1 = *(longlong **)(DAT_14c99e158 + (ulonglong)uVar2 * 8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x2f0))
                    (plVar1,(ulonglong)*(ushort *)(*param_1 + (ulonglong)bVar5 * 4) + *param_1,1);
        }
        bVar3 = (byte)uVar2 & 0x1f;
        bVar5 = bVar5 + 1;
        uVar4 = uVar4 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      } while (uVar4 != 0);
    }
    if (*(char *)((longlong)param_1 + 0xf) == '\x01') {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1402708b8 FUN_1402708b8 body=97 status=ok
// SIG undefined FUN_1402708b8(void)

void FUN_1402708b8(longlong param_1,undefined8 param_2,double param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1401e7ce8();
  bifrost::telemetry::rowBuilder::vDouble((rowBuilder *)**(undefined8 **)(param_1 + 0x38),param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14027091a FUN_14027091a body=514 status=ok
// SIG undefined FUN_14027091a(void)

void FUN_14027091a(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  float fVar9;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(float *)((longlong)param_1 + 0x364) == 0.0) &&
      (!NAN(*(float *)((longlong)param_1 + 0x364)))) ||
     ((*(byte *)((longlong)param_1 + 0x555) & 3) != 1)) goto LAB_140270972;
  if (*(int *)((longlong)param_1 + 0x584) == 0) {
LAB_140270b16:
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xb0);
    plVar8 = (longlong *)0x0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)((longlong)param_1 + 0x584) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_140270b16;
      plVar8 = (longlong *)*puVar7;
    }
  }
  dVar1 = (double)param_1[0x48];
  dVar2 = (double)param_1[0x47];
  dVar3 = (double)param_1[0x46];
  fVar9 = (float)(**(code **)(*param_1 + 0x478))(param_1);
  if (plVar8 != (longlong *)0x0) {
    cVar6 = (**(code **)(*plVar8 + 0x488))(plVar8);
    if (cVar6 != '\0') {
      dVar5 = (double)fVar9;
      dVar1 = -dVar1 * dVar5;
      dVar2 = -dVar2 * dVar5;
      dVar5 = -dVar3 * dVar5;
      if (((((dVar5 != 0.0) || (NAN(dVar5))) || (dVar2 != 0.0)) || ((NAN(dVar2) || (dVar1 != 0.0))))
         || (NAN(dVar1))) {
        local_68 = param_1[0x9c];
        local_78 = param_1[0x9a];
        lStack_70 = param_1[0x9b];
        dVar3 = (double)*(float *)(param_1 + 0x6c);
        local_90 = (double)*(float *)((longlong)param_1 + 0x364);
        local_80 = dVar1 * dVar3 * local_90;
        local_88 = dVar2 * dVar3 * local_90;
        local_90 = dVar5 * dVar3 * local_90;
        (**(code **)(*plVar8 + 0x6d8))(plVar8,&local_90,&local_78,param_1[0xb3]);
      }
    }
  }
LAB_140270972:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140270b2e FUN_140270b2e body=293 status=ok
// SIG undefined FUN_140270b2e(void)

undefined8 * FUN_140270b2e(undefined8 *param_1,int param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  undefined4 uVar3;
  longlong lVar4;
  int *piVar5;
  
  *param_1 = &PTR_FUN_149e01ec0;
  lVar2 = param_1[0xb];
  if ((longlong)*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = 0;
    do {
      param_3 = *(longlong *)(lVar2 + 0x40 + lVar4);
      if (param_3 != -1) {
        param_3 = *(longlong *)(lVar2 + 0x40 + lVar4);
      }
      lVar4 = lVar4 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0xc) * 0x48 != lVar4);
    uVar3 = *(undefined4 *)(param_1 + 0xc);
    lVar2 = param_1[0xb];
  }
  FUN_144afd28a(lVar2,uVar3,param_3);
  FUN_14274a204(param_1 + 0xb);
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar5 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      _Memory = piVar5;
      if (*(longlong *)(piVar5 + 0x10) - (longlong)piVar5 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_14274a1dc);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar5;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 140270c53 FUN_140270c53 body=203 status=ok
// SIG undefined FUN_140270c53(void)

undefined8 FUN_140270c53(undefined8 param_1)

{
  void *_Src;
  DWORD DVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DVar1 = GetCurrentThreadId();
  puVar2 = (undefined8 *)FUN_140270d20(DVar1);
  local_40 = (undefined2 *)0x0;
  local_38 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_38;
  _Src = (void *)*puVar2;
  if (lVar3 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar3 * 2);
    puVar4 = local_40;
    if (local_38 != 0) goto LAB_140270cd8;
  }
  puVar4 = &DAT_149dfb77a;
LAB_140270cd8:
  FUN_140002266(param_1,L"%s (tid=%u)",puVar4,DVar1);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140270d20 FUN_140270d20 body=284 status=ok
// SIG undefined FUN_140270d20(void)

undefined * FUN_140270d20(int param_1)

{
  undefined *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844268) {
    FUN_144b3d300(&DAT_14c844268);
    if (DAT_14c844268 == -1) {
      FUN_140056680(&DAT_14c844258,L"GameThread");
      atexit((_func_5014 *)&LAB_14275d902);
      _Init_thread_footer(&DAT_14c844268);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844280) {
    FUN_144b3d300(&DAT_14c844280);
    if (DAT_14c844280 == -1) {
      FUN_140056680(&DAT_14c844270,L"RenderThread");
      atexit((_func_5014 *)&LAB_14275d90e);
      _Init_thread_footer(&DAT_14c844280);
    }
  }
  if (DAT_14c86a9f4 == param_1) {
    puVar1 = &DAT_14c844258;
  }
  else {
    if (DAT_14c86a9fc != param_1) {
      FUN_141033dca();
      puVar1 = (undefined *)FUN_1467c2916(&DAT_14c842770,param_1);
      return puVar1;
    }
    puVar1 = &DAT_14c844270;
  }
  return puVar1;
}



// FUNCTION 140270e3c FUN_140270e3c body=240 status=ok
// SIG undefined FUN_140270e3c(void)

int * FUN_140270e3c(longlong param_1,int *param_2,longlong *param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_3[1] == DAT_14c845dc4 && *param_3 == DAT_14c845dbc) {
    builtin_wcsncpy((wchar_t *)((longlong)param_2 + 0x22),L"ot v",4);
    builtin_wcsncpy((wchar_t *)((longlong)param_2 + 0x2a),L"alid",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 5),L"Id i",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 7),L"s no",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 1),L"FIoC",4);
    builtin_wcsncpy((wchar_t *)(param_2 + 3),L"hunk",4);
    *param_2 = 0xb;
    *(undefined2 *)((longlong)param_2 + 0x32) = 0;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar4 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + 8 + lVar4);
        (**(code **)(*plVar3 + 0x40))(plVar3,param_2,param_3,param_4,param_5);
        if (*param_2 == 0) goto LAB_140270ee0;
        *param_2 = 1;
        *(undefined2 *)(param_2 + 1) = 0;
        lVar4 = lVar4 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar4);
    }
    *param_2 = 8;
    *(undefined2 *)(param_2 + 1) = 0;
LAB_140270ee0:
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  }
  return param_2;
}



// FUNCTION 140270f2c FUN_140270f2c body=432 status=ok
// SIG undefined FUN_140270f2c(void)

undefined8
FUN_140270f2c(undefined8 param_1,longlong param_2,uint param_3,undefined8 param_4,byte param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  code *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  code *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  if (DAT_14c951858 == (code *)0x0) {
    local_f0 = &local_d8;
    local_d8 = FUN_1449e2820;
    local_e0 = FUN_14081d0ea;
    local_e8 = FUN_14081d0ea;
    local_f8 = &LAB_1468c5283;
    local_100 = FUN_142809da0;
    local_108 = L"Engine";
    local_110 = 0x400000000;
    local_118 = 0x10000000;
    local_120 = 8;
    local_128 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  local_d8 = DAT_14c951858;
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  uStack_c0 = (ulonglong)param_3;
  local_b8 = (ushort)param_5;
  local_a8 = param_6;
  local_d0 = param_1;
  local_c8 = param_2;
  local_b0 = param_4;
  uVar1 = FUN_1402710dd(&local_d8);
  if (lStack_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402710dd FUN_1402710dd body=410 status=ok
// SIG undefined FUN_1402710dd(void)

undefined8 FUN_1402710dd(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  DWORD DVar6;
  DWORD dwTlsIndex;
  DWORD DVar7;
  longlong lVar8;
  LPVOID lpTlsValue;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_2a8 [32];
  uint local_288;
  undefined8 local_280;
  char *local_278;
  longlong local_270;
  char local_259;
  undefined1 local_258 [544];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  lVar2 = *param_1;
  lVar3 = param_1[1];
  uVar1 = *(uint *)(param_1 + 3);
  if ((*(uint *)(lVar2 + 0xd4) & 0x10000080) == 0) {
LAB_140271150:
    bVar10 = false;
  }
  else {
    lVar4 = param_1[5];
    if (lVar4 != 0) {
      if (param_1[2] == 0) goto LAB_140271150;
      if (*(char *)((longlong)param_1 + 0x21) == '\0') {
        local_280 = 0;
        local_288 = local_288 & 0xffffff00;
        lVar8 = FUN_1402aad87(lVar2,lVar3,param_1[2],uVar1);
        if (lVar4 != lVar8) goto LAB_140271150;
      }
    }
    bVar10 = true;
    if ((uVar1 >> 0x12 & 1) != 0) {
      dwTlsIndex = DAT_14c75ec34;
      if (DAT_14c75ec34 == 0xffffffff) {
        dwTlsIndex = TlsAlloc();
        DVar7 = 0xffffffff;
        LOCK();
        bVar10 = DAT_14c75ec34 != 0xffffffff;
        DVar6 = dwTlsIndex;
        if (bVar10) {
          DVar7 = DAT_14c75ec34;
          DVar6 = DAT_14c75ec34;
        }
        DAT_14c75ec34 = DVar6;
        UNLOCK();
        if (bVar10) {
          TlsFree(dwTlsIndex);
          dwTlsIndex = DVar7;
        }
      }
      lpTlsValue = TlsGetValue(dwTlsIndex);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
        FUN_141073f92(lpTlsValue);
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(dwTlsIndex,lpTlsValue);
      }
      bVar10 = *(int *)((longlong)lpTlsValue + 0x28) == 0;
    }
  }
  local_278 = &local_259;
  local_259 = '\0';
  local_270 = param_1[7];
  local_288 = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_280 = CONCAT71(local_280._1_7_,bVar10);
  uVar9 = FUN_140010cf7(lVar2,lVar3,param_1[2],uVar1);
  if (local_259 == '\0') {
    pcVar5 = *(code **)(lVar2 + 0xb0);
    FUN_144a91738(local_258,uVar9,param_1);
    (*pcVar5)(local_258);
    FUN_140010906(local_258);
  }
  if ((local_38 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140271278 FUN_140271278 body=3848 status=ok
// SIG undefined FUN_140271278(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140271278(longlong param_1,double param_2,undefined8 param_3,void *param_4,void *param_5,
             void *param_6)

{
  ulonglong *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double *pdVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  bool bVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  byte bVar24;
  double *pdVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  double *pdVar28;
  undefined8 *puVar29;
  bool bVar30;
  ulonglong uVar31;
  undefined8 **ppuVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar37;
  uint uVar38;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  undefined1 local_2a0;
  undefined8 *local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  undefined8 uStack_280;
  undefined8 *local_278;
  undefined8 uStack_270;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  double local_248;
  double local_240 [9];
  undefined8 *local_1f8;
  undefined8 *puStack_1f0;
  double local_1e8;
  undefined8 *local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8 [4];
  double local_1a8;
  double local_1a0;
  double local_198;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_248 = param_2;
  if (0.0 < *(double *)(param_1 + 0x90)) {
    local_278 = *(undefined8 **)(param_1 + 0x98);
    puVar19 = *(undefined8 **)(param_1 + 0xa0);
    puVar29 = puVar19;
    if (puVar19 < local_278) {
      puVar29 = local_278;
    }
    if (local_278 < puVar19) {
      puVar19 = local_278;
    }
    iVar16 = (**(code **)*puVar29)(puVar29);
    puVar23 = (undefined8 *)0x0;
    if (iVar16 == 1) {
      puVar23 = puVar29;
    }
    local_298 = puVar19;
    local_290 = puVar29;
    if (puVar19 == (undefined8 *)0x0) {
      local_288 = (undefined8 *)0x0;
      FUN_14481f014(local_1c8,puVar29,0x3ff0000000000000,0);
      memcpy(param_4,local_1c8,0xd0);
      puVar19 = &DAT_14c846480;
      puVar26 = (undefined8 *)((longlong)param_4 + 0xd0);
      for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
        *puVar26 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar26 = puVar26 + 1;
      }
      *(undefined **)((longlong)param_4 + 0x130) = &DAT_14c9abd20;
      *(undefined **)((longlong)param_4 + 0x138) = &DAT_14c9abd20;
      uVar18 = DAT_14c8464e8;
      *(undefined8 *)((longlong)param_4 + 0x140) = DAT_14c8464e0;
      *(undefined8 *)((longlong)param_4 + 0x148) = uVar18;
      *(undefined8 *)((longlong)param_4 + 0x150) = DAT_14c8464f0;
      *(undefined8 *)((longlong)param_4 + 0x158) = 0;
      *(undefined8 *)((longlong)param_4 + 0x160) = 0;
      *(undefined8 *)((longlong)param_4 + 0x168) = 0;
      *(undefined8 *)((longlong)param_4 + 0x170) = 0;
      *(undefined8 *)((longlong)param_4 + 0x178) = 0;
      *(undefined8 *)((longlong)param_4 + 0x180) = 0;
      *(undefined8 *)((longlong)param_4 + 0x188) = 0;
      *(undefined8 *)((longlong)param_4 + 400) = 0;
      *(undefined8 *)((longlong)param_4 + 0x198) = 0;
    }
    else {
      iVar16 = (**(code **)*puVar19)();
      puVar29 = local_290;
      local_288 = (undefined8 *)0x0;
      if (iVar16 == 1) {
        local_288 = puVar19;
      }
      if ((((puVar23 != (undefined8 *)0x0) && (iVar16 == 1)) &&
          (lVar20 = puVar23[0x56], lVar20 != 0)) &&
         ((lVar20 == local_298[0x56] && (*(char *)(lVar20 + 0x151) != '\0')))) goto LAB_140271f34;
      FUN_14481f014(local_1c8,local_290,0x3ff0000000000000,0);
      memcpy(param_4,local_1c8,0xd0);
      FUN_14481f014(local_1c8,local_298,0x3ff0000000000000,0);
      memcpy((void *)((longlong)param_4 + 0xd0),local_1c8,0xd0);
    }
    uVar31 = (ulonglong)(puVar29 != local_278);
    lVar20 = param_1 + 0xd8;
    ppuVar32 = &local_1f8;
    uVar27 = 0;
    puVar19 = local_278;
    puVar29 = local_288;
    bVar15 = true;
    local_260 = param_1;
    do {
      bVar30 = bVar15;
      if (puVar23 == (undefined8 *)0x0) {
LAB_140271484:
        ppuVar32[2] = *(undefined8 **)(lVar20 + 0x10 + (ulonglong)(uVar27 != uVar31) * 0x18);
        puVar23 = (undefined8 *)(lVar20 + (ulonglong)(uVar27 != uVar31) * 0x18);
        puVar26 = (undefined8 *)puVar23[1];
        *ppuVar32 = (undefined8 *)*puVar23;
        ppuVar32[1] = puVar26;
        puVar23 = puVar29;
      }
      else {
        lVar22 = puVar23[0x56];
        if (*(int *)(lVar22 + 0x10) < 1) {
          lVar21 = 0;
        }
        else {
          lVar21 = **(longlong **)(lVar22 + 8);
        }
        if (*(char *)(lVar22 + 0x151) == '\0') goto LAB_140271484;
        local_258 = lVar20;
        local_250 = lVar21;
        FUN_144941734(lVar21,local_1c8);
        FUN_1402724f4(local_260,local_240,uVar27 != uVar31);
        *ppuVar32 = (undefined8 *)(local_240[0] - local_1a8);
        ppuVar32[1] = (undefined8 *)(local_240[1] - local_1a0);
        ppuVar32[2] = (undefined8 *)(local_240[2] - local_198);
        lVar20 = uVar27 * 0xd0;
        pdVar25 = local_1c8;
        pdVar28 = (double *)((longlong)param_4 + lVar20);
        for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
          *pdVar28 = *pdVar25;
          pdVar25 = pdVar25 + 1;
          pdVar28 = pdVar28 + 1;
        }
        *(longlong *)((longlong)param_4 + lVar20 + 0x60) = local_250 + 0xf0;
        *(longlong *)((longlong)param_4 + lVar20 + 0x68) = local_250 + 0xd8;
        uVar33 = *(undefined4 *)(lVar22 + 0xfc);
        uVar34 = *(undefined4 *)(lVar22 + 0x100);
        uVar13 = *(undefined4 *)(lVar22 + 0x104);
        *(undefined4 *)((longlong)param_4 + lVar20 + 0x70) = *(undefined4 *)(lVar22 + 0xf8);
        *(undefined4 *)((longlong)param_4 + lVar20 + 0x74) = uVar33;
        *(undefined4 *)((longlong)param_4 + lVar20 + 0x78) = uVar34;
        *(undefined4 *)((longlong)param_4 + lVar20 + 0x7c) = uVar13;
        *(undefined8 *)((longlong)param_4 + lVar20 + 0x80) = *(undefined8 *)(lVar22 + 0x108);
        FUN_140b8ccd6(lVar22,local_240);
        pdVar25 = local_240;
        pdVar28 = (double *)((longlong)param_4 + lVar20 + 0x88);
        for (lVar22 = 9; puVar19 = local_278, puVar23 = local_288, lVar20 = local_258, lVar22 != 0;
            lVar22 = lVar22 + -1) {
          *pdVar28 = *pdVar25;
          pdVar25 = pdVar25 + 1;
          pdVar28 = pdVar28 + 1;
        }
      }
      lVar22 = local_260;
      puVar14 = local_290;
      puVar26 = local_298;
      ppuVar32 = &local_1e0;
      uVar27 = 1;
      puVar29 = puVar23;
      bVar15 = false;
    } while (bVar30);
    uVar17 = (ulonglong)(local_290 == puVar19);
    dVar37 = *(double *)(local_260 + 0xb8 + uVar31 * 0x18);
    dVar2 = *(double *)(local_260 + 0xa8 + uVar31 * 0x18);
    dVar3 = *(double *)(local_260 + 0xb0 + uVar31 * 0x18);
    puVar1 = (ulonglong *)(local_260 + 0xa8 + uVar31 * 0x18);
    uVar27 = puVar1[1];
    auVar9._8_4_ = (int)uVar27;
    auVar9._0_8_ = *puVar1 ^ 0x8000000000000000;
    auVar9._12_4_ = (uint)(uVar27 >> 0x20) ^ 0x80000000;
    *(undefined1 (*) [16])((longlong)param_4 + 0x1a0) = auVar9;
    *(double *)((longlong)param_4 + 0x1b0) = -dVar37;
    local_288 = puStack_1f0;
    uStack_280 = 0;
    local_278 = local_1f8;
    uStack_270 = 0;
    *(double *)((longlong)param_4 + 0x1b8) = dVar3 * local_1e8 - (double)puStack_1f0 * dVar37;
    *(double *)((longlong)param_4 + 0x1c0) = dVar37 * (double)local_1f8 - dVar2 * local_1e8;
    *(double *)((longlong)param_4 + 0x1c8) = dVar2 * (double)puStack_1f0 - (double)local_1f8 * dVar3
    ;
    dVar37 = *(double *)(local_260 + 0xb8 + uVar17 * 0x18);
    dVar2 = *(double *)(local_260 + 0xa8 + uVar17 * 0x18);
    dVar3 = *(double *)(local_260 + 0xb0 + uVar17 * 0x18);
    puVar1 = (ulonglong *)(local_260 + 0xa8 + uVar17 * 0x18);
    uVar27 = puVar1[1];
    auVar10._8_4_ = (int)uVar27;
    auVar10._0_8_ = *puVar1 ^ 0x8000000000000000;
    auVar10._12_4_ = (uint)(uVar27 >> 0x20) ^ 0x80000000;
    *(undefined1 (*) [16])((longlong)param_4 + 0x1d0) = auVar10;
    *(double *)((longlong)param_4 + 0x1e0) = -dVar37;
    *(double *)((longlong)param_4 + 0x1e8) = dVar3 * local_1d0 - local_1d8 * dVar37;
    *(double *)((longlong)param_4 + 0x1f0) = dVar37 * (double)local_1e0 - dVar2 * local_1d0;
    *(double *)((longlong)param_4 + 0x1f8) = dVar2 * local_1d8 - (double)local_1e0 * dVar3;
    bVar24 = *(byte *)(local_290 + 4);
    if (local_298 != (undefined8 *)0x0) {
      bVar24 = bVar24 | *(byte *)(local_298 + 4);
    }
    FUN_140272182(local_290,local_298,param_4,0xffffffff);
    FUN_14491be5a(param_4);
    pdVar25 = *(double **)((longlong)param_4 + 0x60);
    pdVar28 = *(double **)((longlong)param_4 + 0x68);
    pdVar6 = *(double **)((longlong)param_4 + 0x130);
    pdVar7 = *(double **)((longlong)param_4 + 0x138);
    dVar37 = -(*(double *)((longlong)param_4 + 0x1f8) * pdVar7[2] +
               *(double *)((longlong)param_4 + 0x1e8) * *pdVar7 +
               *(double *)((longlong)param_4 + 0x1f0) * pdVar7[1] +
              *(double *)((longlong)param_4 + 0x1e0) * pdVar6[2] +
              *(double *)((longlong)param_4 + 0x1d0) * *pdVar6 +
              *(double *)((longlong)param_4 + 0x1d8) * pdVar6[1] +
              *(double *)((longlong)param_4 + 0x1c8) * pdVar28[2] +
              *(double *)((longlong)param_4 + 0x1b8) * *pdVar28 +
              *(double *)((longlong)param_4 + 0x1c0) * pdVar28[1] +
              *(double *)((longlong)param_4 + 0x1b0) * pdVar25[2] +
              *(double *)((longlong)param_4 + 0x1a0) * *pdVar25 +
              *(double *)((longlong)param_4 + 0x1a8) * pdVar25[1]);
    if ((bVar24 & 4) == 0) {
      uVar27 = 0xffefffffffffffff;
    }
    else {
      puVar19 = puVar14;
      if ((*(byte *)(puVar14 + 4) & 4) == 0) {
        puVar19 = puVar26;
      }
      uVar27 = (ulonglong)(*(double *)(puVar19[1] + 0x40) * *(double *)((longlong)param_4 + 0x268))
               | DAT_149931e80;
    }
    dVar2 = 0.0;
    if (0.0 <= dVar37) {
      dVar2 = dVar37;
    }
    dVar37 = (double)puVar14[0x23];
    if (puVar26 != (undefined8 *)0x0) {
      dVar37 = (double)puVar26[0x23];
    }
    *(ulonglong *)((longlong)param_4 + 0x260) =
         -(ulonglong)((double)_DAT_14c75f930 < dVar2) &
         (ulonglong)(((double)puVar14[0x23] + dVar37) * 0.5 * dVar2);
    *(undefined8 *)((longlong)param_4 + 0x278) = 0;
    *(ulonglong *)((longlong)param_4 + 0x280) = uVar27;
    *(undefined8 *)((longlong)param_4 + 0x298) = *(undefined8 *)(lVar22 + 0x118);
    local_2a0 = 1;
    local_2a8 = param_3;
    uVar18 = FUN_140272328(puVar14,puVar26,6,*(undefined8 *)(lVar22 + 0x90));
    *(undefined8 *)((longlong)param_4 + 0x270) = uVar18;
    dVar37 = *(double *)((longlong)param_4 + 0x1a0);
    dVar2 = *(double *)((longlong)param_4 + 0x1a8);
    dVar12 = ABS(dVar37);
    dVar3 = *(double *)((longlong)param_4 + 0x1b0);
    if (((dVar12 < ABS(dVar2)) || (dVar12 < ABS(dVar3))) ||
       ((dVar12 <= 9.99999993922529e-09 && (ABS(dVar2) <= 9.99999993922529e-09)))) {
      local_1c8[0] = 0.0;
      uVar38 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
      uVar33 = SUB84(dVar2,0);
      local_1c8[1] = dVar3;
    }
    else {
      local_1c8[0] = -dVar2;
      uVar33 = 0;
      uVar38 = 0;
      local_1c8[1] = dVar37;
    }
    local_1c8[2] = (double)CONCAT44(uVar38,uVar33);
    dVar12 = (double)CONCAT44(uVar38,uVar33) * (double)CONCAT44(uVar38,uVar33) +
             local_1c8[0] * local_1c8[0] + local_1c8[1] * local_1c8[1];
    if (9.99999993922529e-09 < dVar12) {
      local_1c8[2] = 1.0 / SQRT(dVar12);
      local_1c8[0] = local_1c8[0] * local_1c8[2];
      local_1c8[1] = local_1c8[1] * local_1c8[2];
      local_1c8[2] = (double)CONCAT44(uVar38,uVar33) * local_1c8[2];
    }
    local_1a0 = dVar37 * local_1c8[1] - local_1c8[0] * dVar2;
    local_1a8 = dVar3 * local_1c8[0] - local_1c8[2] * dVar37;
    local_1c8[3] = dVar2 * local_1c8[2] - local_1c8[1] * dVar3;
    dVar37 = local_1a0 * local_1a0 + local_1c8[3] * local_1c8[3] + local_1a8 * local_1a8;
    if (9.99999993922529e-09 < dVar37) {
      dVar37 = 1.0 / SQRT(dVar37);
      local_1c8[3] = local_1c8[3] * dVar37;
      local_1a8 = local_1a8 * dVar37;
      local_1a0 = local_1a0 * dVar37;
    }
    dVar2 = -(double)local_288;
    dVar37 = (double)puVar14[0x24];
    uVar33 = SUB84(dVar37,0);
    uVar34 = (undefined4)((ulonglong)dVar37 >> 0x20);
    if (puVar26 != (undefined8 *)0x0) {
      uVar33 = (undefined4)puVar26[0x24];
      uVar34 = (undefined4)((ulonglong)puVar26[0x24] >> 0x20);
    }
    dVar12 = (dVar37 + (double)CONCAT44(uVar34,uVar33)) * 0.5;
    dVar3 = -(double)local_278;
    lVar20 = 1;
    pdVar25 = local_1c8;
    dVar37 = (double)_DAT_14c75f930;
    bVar15 = true;
    do {
      bVar30 = bVar15;
      memcpy(param_5,param_4,0xd0);
      memcpy((void *)((longlong)param_5 + 0xd0),(void *)((longlong)param_4 + 0xd0),0xd0);
      puVar19 = local_290;
      dVar35 = pdVar25[1];
      *(double *)((longlong)param_5 + 0x1a0) = *pdVar25;
      *(double *)((longlong)param_5 + 0x1a8) = dVar35;
      *(double *)((longlong)param_5 + 0x1b0) = pdVar25[2];
      *(double *)((longlong)param_5 + 0x1b8) =
           *(double *)((longlong)param_5 + 0x1b0) * (double)local_288 +
           *(double *)((longlong)param_5 + 0x1a8) * -local_1e8;
      *(double *)((longlong)param_5 + 0x1c0) =
           *(double *)((longlong)param_5 + 0x1b0) * dVar3 +
           local_1e8 * *(double *)((longlong)param_5 + 0x1a0);
      *(double *)((longlong)param_5 + 0x1c8) =
           (double)local_278 * *(double *)((longlong)param_5 + 0x1a8) +
           *(double *)((longlong)param_5 + 0x1a0) * dVar2;
      dVar35 = pdVar25[2];
      dVar4 = *pdVar25;
      dVar5 = pdVar25[1];
      auVar11._8_4_ = SUB84(pdVar25[1],0);
      auVar11._0_8_ = -*pdVar25;
      auVar11._12_4_ = (uint)((ulonglong)pdVar25[1] >> 0x20) ^ 0x80000000;
      *(undefined1 (*) [16])((longlong)param_5 + 0x1d0) = auVar11;
      *(double *)((longlong)param_5 + 0x1e0) = -dVar35;
      *(double *)((longlong)param_5 + 0x1e8) = dVar5 * local_1d0 - dVar35 * local_1d8;
      *(double *)((longlong)param_5 + 0x1f0) = (double)local_1e0 * dVar35 - dVar4 * local_1d0;
      *(double *)((longlong)param_5 + 0x1f8) = local_1d8 * dVar4 - (double)local_1e0 * dVar5;
      FUN_140272182(local_290,puVar26,param_5,0xffffffff);
      FUN_14491be5a(param_5);
      *(undefined8 *)((longlong)param_5 + 0x298) = *(undefined8 *)(lVar22 + 0x118 + lVar20 * 8);
      *(undefined8 *)((longlong)param_5 + 0x270) = 0;
      pdVar25 = *(double **)((longlong)param_5 + 0x60);
      pdVar28 = *(double **)((longlong)param_5 + 0x68);
      pdVar6 = *(double **)((longlong)param_5 + 0x130);
      pdVar7 = *(double **)((longlong)param_5 + 0x138);
      dVar35 = *(double *)((longlong)param_5 + 0x1f8) * pdVar7[2] +
               *(double *)((longlong)param_5 + 0x1e8) * *pdVar7 +
               *(double *)((longlong)param_5 + 0x1f0) * pdVar7[1] +
               *(double *)((longlong)param_5 + 0x1e0) * pdVar6[2] +
               *(double *)((longlong)param_5 + 0x1d0) * *pdVar6 +
               *(double *)((longlong)param_5 + 0x1d8) * pdVar6[1] +
               *(double *)((longlong)param_5 + 0x1c8) * pdVar28[2] +
               *(double *)((longlong)param_5 + 0x1b8) * *pdVar28 +
               *(double *)((longlong)param_5 + 0x1c0) * pdVar28[1] +
               *(double *)((longlong)param_5 + 0x1b0) * pdVar25[2] +
               *(double *)((longlong)param_5 + 0x1a0) * *pdVar25 +
               *(double *)((longlong)param_5 + 0x1a8) * pdVar25[1];
      *(ulonglong *)((longlong)param_5 + 0x260) =
           -(ulonglong)(dVar37 < ABS(dVar35)) & (ulonglong)(dVar12 * dVar35);
      if (((puVar19 == (undefined8 *)0x0) || ((*(byte *)(puVar19 + 4) & 1) != 0)) ||
         ((ABS((double)puVar19[0xc]) <= 9.99999993922529e-09 &&
          ((((ABS((double)puVar19[0xd]) <= 9.99999993922529e-09 &&
             (ABS((double)puVar19[0xe]) <= 9.99999993922529e-09)) &&
            (ABS((double)puVar19[9]) <= 9.99999993922529e-09)) &&
           ((ABS((double)puVar19[10]) <= 9.99999993922529e-09 &&
            (ABS((double)puVar19[0xb]) <= 9.99999993922529e-09)))))))) {
        uVar38 = (uint)((ulonglong)*(undefined8 *)((longlong)param_4 + 0x1b0) >> 0x20) ^ 0x80000000;
        uVar33 = (undefined4)*(undefined8 *)((longlong)param_4 + 0x1b0);
      }
      else if (((puVar26 == (undefined8 *)0x0) || ((*(byte *)(puVar26 + 4) & 1) != 0)) ||
              (((ABS((double)puVar26[0xc]) <= 9.99999993922529e-09 &&
                (((ABS((double)puVar26[0xd]) <= 9.99999993922529e-09 &&
                  (ABS((double)puVar26[0xe]) <= 9.99999993922529e-09)) &&
                 (ABS((double)puVar26[9]) <= 9.99999993922529e-09)))) &&
               ((ABS((double)puVar26[10]) <= 9.99999993922529e-09 &&
                (ABS((double)puVar26[0xb]) <= 9.99999993922529e-09)))))) {
        uVar33 = (undefined4)*(undefined8 *)((longlong)param_4 + 0x1b0);
        uVar38 = (uint)((ulonglong)*(undefined8 *)((longlong)param_4 + 0x1b0) >> 0x20);
      }
      else {
        uVar27 = *(ulonglong *)((longlong)param_4 + 0x1b0) & 0x7fffffffffffffff;
        uVar33 = (undefined4)uVar27;
        uVar38 = (uint)(uVar27 >> 0x20);
      }
      dVar35 = (double)CONCAT44(uVar38,uVar33) * local_248;
      dVar4 = 0.0;
      if (0.0 <= dVar35) {
        dVar4 = dVar35;
      }
      auVar36._0_8_ = dVar4 * dVar12 * *(double *)((longlong)param_5 + 0x268);
      auVar36._8_8_ = 0;
      auVar8._8_4_ = SUB164(auVar36 | _DAT_149931e80,0);
      auVar8._0_8_ = ABS(auVar36._0_8_);
      auVar8._12_4_ = SUB164(auVar36 | _DAT_149931e80,4);
      *(undefined1 (*) [16])((longlong)param_5 + 0x278) = auVar8;
      lVar20 = 2;
      pdVar25 = local_1c8 + 3;
      param_5 = param_6;
      bVar15 = false;
    } while (bVar30);
    uVar18 = 3;
  }
  else {
LAB_140271f34:
    uVar18 = 0;
  }
  if ((local_f0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
}



// FUNCTION 140272182 FUN_140272182 body=422 status=ok
// SIG undefined FUN_140272182(void)

void FUN_140272182(longlong param_1,longlong param_2,longlong param_3,undefined2 param_4)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  if (((param_1 != 0) && ((*(byte *)(param_1 + 0x20) & 1) == 0)) &&
     ((9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x60)) ||
      ((((9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x68)) ||
         (9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x70)))) ||
        (9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x48)))) ||
       ((9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x50)) ||
        (9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x58)))))))))) {
    iVar3 = *(int *)(param_1 + 0x288);
  }
  if (((param_2 != 0) && ((*(byte *)(param_2 + 0x20) & 1) == 0)) &&
     (((9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x60)) ||
       (((9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x68)) ||
         (9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x70)))) ||
        (9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x48)))))) ||
      ((9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x50)) ||
       (9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x58)))))))) {
    iVar1 = *(int *)(param_2 + 0x288);
  }
  if ((iVar1 < iVar3) || (iVar3 != -1 && iVar1 == -1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (iVar1 <= iVar3) {
      uVar2 = -(ushort)(iVar3 != -1 || iVar1 == -1) | 1;
    }
  }
  *(ushort *)(param_3 + 0x28a) = uVar2;
  *(undefined2 *)(param_3 + 0x288) = param_4;
  return;
}



// FUNCTION 140272328 FUN_140272328 body=459 status=ok
// SIG undefined FUN_140272328(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_140272328(undefined8 *param_1,undefined8 *param_2,uint param_3,double param_4,
                    double param_5,char param_6)

{
  int iVar1;
  float *pfVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  iVar1 = (**(code **)*param_1)();
  bVar5 = false;
  puVar4 = (undefined8 *)0x0;
  if (iVar1 == 1) {
    puVar4 = param_1;
  }
  if (param_2 != (undefined8 *)0x0) {
    iVar1 = (**(code **)*param_2)();
    bVar5 = false;
    if ((puVar4 != (undefined8 *)0x0) && (iVar1 == 1)) {
      bVar5 = puVar4[0x56] == param_2[0x56];
    }
  }
  if ((param_6 != '\0') ||
     ((dVar6 = 0.0, (*(byte *)(param_1 + 4) & 4) == 0 &&
      ((param_2 == (undefined8 *)0x0 || ((*(byte *)(param_2 + 4) & 4) == 0)))))) {
    if ((bVar5) && (*(char *)(puVar4[0x56] + 0x150) != '\0')) {
      dVar6 = 0.0;
    }
    else {
      if (param_3 < 3) {
        dVar6 = (double)_DAT_14c75f904;
        if (param_4 <= (double)_DAT_14c75f904) {
          dVar6 = param_4;
        }
        dVar8 = (double)_DAT_14c75f938 * param_5 * dVar6;
        dVar7 = (double)_DAT_14c75f92c;
      }
      else if ((int)param_3 < 6) {
        dVar6 = (double)_DAT_14c75f90c;
        if (param_4 <= (double)_DAT_14c75f90c) {
          dVar6 = param_4;
        }
        dVar8 = (double)_DAT_14c75f93c * param_5 * dVar6;
        dVar7 = (double)_DAT_14c75f928;
      }
      else {
        if (param_2 == (undefined8 *)0x0) {
          lVar3 = 0;
        }
        else {
          lVar3 = param_2[1];
        }
        if (param_1[1] != 0) {
          lVar3 = param_1[1];
        }
        if (lVar3 == 0) {
          dVar7 = (double)_DAT_14c75f934;
        }
        else {
          dVar7 = *(double *)(lVar3 + 0x48);
        }
        dVar6 = (double)_DAT_14c760090;
        if (param_4 <= (double)_DAT_14c760090) {
          dVar6 = param_4;
        }
        if (bVar5) {
          dVar7 = (double)_DAT_14c75f940;
        }
        dVar8 = dVar7 * param_5 * dVar6;
        pfVar2 = (float *)&DAT_14c75f91c;
        if (bVar5) {
          pfVar2 = (float *)&DAT_14c75f924;
        }
        dVar7 = (double)*pfVar2;
      }
      dVar6 = dVar6 - dVar7;
      if (dVar6 <= 0.0) {
        dVar6 = 0.0;
      }
      dVar6 = dVar6 * dVar8;
    }
  }
  return dVar6;
}



// FUNCTION 1402724f4 FUN_1402724f4 body=358 status=ok
// SIG undefined FUN_1402724f4(void)

void FUN_1402724f4(longlong param_1,undefined1 (*param_2) [16],uint param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  double dVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar4 = *(longlong *)(param_1 + 0x98 + (ulonglong)(param_3 != 0) * 8);
  if (lVar4 == 0) {
    *(undefined8 *)param_2[1] = *(undefined8 *)(param_1 + 0x10 + (ulonglong)param_3 * 0x18);
    puVar2 = (undefined8 *)(param_1 + (ulonglong)param_3 * 0x18);
    uVar10 = puVar2[1];
    *(undefined8 *)*param_2 = *puVar2;
    *(undefined8 *)(*param_2 + 8) = uVar10;
  }
  else {
    pdVar1 = (double *)(param_1 + (ulonglong)param_3 * 0x18);
    dVar12 = *pdVar1 * *(double *)(lVar4 + 0x170);
    dVar13 = pdVar1[1] * *(double *)(lVar4 + 0x178);
    dVar11 = *(double *)(param_1 + 0x10 + (ulonglong)param_3 * 0x18) * *(double *)(lVar4 + 0x180);
    dVar7 = *(double *)(lVar4 + 0x130);
    dVar8 = *(double *)(lVar4 + 0x138);
    dVar9 = *(double *)(lVar4 + 0x140);
    dVar3 = *(double *)(lVar4 + 0x148);
    dVar14 = dVar13 * dVar7 - dVar12 * dVar8;
    dVar15 = dVar11 * dVar8 - dVar13 * dVar9;
    dVar16 = dVar12 * dVar9 - dVar7 * dVar11;
    dVar15 = dVar15 + dVar15;
    dVar16 = dVar16 + dVar16;
    dVar14 = dVar14 + dVar14;
    dVar6 = (dVar9 * dVar15 - dVar7 * dVar14) + *(double *)(lVar4 + 0x148) * dVar16 + dVar13 +
            *(double *)(lVar4 + 0x158);
    dVar13 = *(double *)(lVar4 + 0x160);
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar14 * dVar8 - dVar16 * dVar9) + dVar3 * dVar15 + dVar12 +
                   *(double *)(lVar4 + 0x150);
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *param_2 = auVar5;
    *(double *)param_2[1] = dVar14 * dVar3 + dVar11 + (dVar16 * dVar7 - dVar15 * dVar8) + dVar13;
  }
  return;
}



// FUNCTION 14027265a FUN_14027265a body=90 status=ok
// SIG undefined FUN_14027265a(void)

int FUN_14027265a(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (iVar1 < 1) {
    iVar1 = (**(code **)(*param_1 + 0x2e0))(param_1);
    iVar2 = (**(code **)(*param_1 + 0x2d8))(param_1);
    iVar1 = iVar1 - iVar2;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x2b8))();
    iVar3 = (**(code **)(*param_1 + 0x2c0))(param_1);
    iVar1 = 0;
    if (0 < iVar2 - iVar3) {
      iVar1 = iVar2 - iVar3;
    }
  }
  return iVar1;
}



// FUNCTION 140272726 FUN_140272726 body=290 status=ok
// SIG undefined FUN_140272726(void)

undefined8 FUN_140272726(void)

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
  lVar1 = FUN_140272888();
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar1 = FUN_14027284a(lVar1 + 0x3910);
      if (lVar1 != 0) {
        uVar2 = 1;
        goto LAB_140272787;
      }
    }
  }
  uVar2 = 0;
LAB_140272787:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14027284a FUN_14027284a body=62 status=ok
// SIG undefined FUN_14027284a(void)

longlong FUN_14027284a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (((lVar1 == 0) || ((*(byte *)(lVar1 + 0x65) & 2) != 0)) ||
     ((*(byte *)(lVar1 + 0x348) & 2) != 0)) {
    lVar1 = 0;
  }
  else if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(lVar1);
  }
  return lVar1;
}



// FUNCTION 140272888 FUN_140272888 body=98 status=ok
// SIG undefined FUN_140272888(void)

undefined8 FUN_140272888(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
    if (((*(int *)(param_1 + 0x134) != 0) && (uVar1 = *(uint *)(param_1 + 0x130), -1 < (int)uVar1))
       && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x134))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001402728e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1402728ea FUN_1402728ea body=100 status=ok
// SIG undefined FUN_1402728ea(void)

void FUN_1402728ea(longlong param_1)

{
  wchar_t *pwVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pwVar1 = L"SHIFT";
  if (*(char *)(param_1 + 0x9a0) != '\0') {
    pwVar1 = L"WINDOWS";
  }
  FUN_1446f470e(local_18,pwVar1,1);
  FUN_140272950(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140272950 FUN_140272950 body=118 status=ok
// SIG undefined FUN_140272950(void)

void FUN_140272950(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c990930) {
    FUN_144b3d300(&DAT_14c990930);
    if (DAT_14c990930 == -1) {
      FUN_140272bfe();
      atexit((_func_5014 *)&LAB_14290fa6b);
      _Init_thread_footer(&DAT_14c990930);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014027298f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c990928 + 0x48))(DAT_14c990928,*param_1);
  return;
}



// FUNCTION 1402729c6 FUN_1402729c6 body=567 status=ok
// SIG undefined FUN_1402729c6(void)

longlong FUN_1402729c6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 8);
  }
  uVar8 = (uint)param_2;
  iVar6 = (int)((ulonglong)param_2 >> 0x20);
  uVar2 = (uint)((ulonglong)param_2 >> 0x10);
  local_30 = param_2;
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             iVar6 + (uVar8 << 0x10 | uVar8 & 0xffff) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar8 & 0xffff) >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar7 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x18);
        if (*plVar7 == param_2) {
          if (plVar7 != (longlong *)0x0) {
            plVar7 = plVar7 + 1;
            goto LAB_140272bb0;
          }
          break;
        }
        iVar5 = (int)plVar7[2];
      } while (iVar5 != -1);
    }
  }
  FUN_1400021e4(&local_30,local_40);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  FUN_1414e8b3a(&local_28,local_40);
  cVar3 = FUN_14011feae(&DAT_14c874628,local_28);
  if (cVar3 == '\0') {
    FUN_1402c9134(&DAT_14c874628,local_28,&local_28,0);
  }
  lVar4 = FUN_1401e3324(&DAT_14c874628,local_28);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((lVar4 != 0) && (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44))) {
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x58) - 1U &
                             iVar6 + (uVar8 << 0x10 | uVar8 & 0xffff) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar8 & 0xffff) >> 4)) * 4);
    if (iVar6 != -1) {
      lVar4 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0x18);
        if (*plVar1 == param_2) {
          plVar7 = plVar1 + 1;
          if (plVar7 != (longlong *)0x0 && plVar1 != (longlong *)0x0) goto LAB_140272bb0;
          goto LAB_140272b8f;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
      goto LAB_140272b91;
    }
  }
LAB_140272b8f:
  lVar4 = 0;
LAB_140272b91:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
LAB_140272bb0:
  lVar4 = *plVar7;
  goto LAB_140272b91;
}



// FUNCTION 140272bfe FUN_140272bfe body=218 status=ok
// SIG undefined FUN_140272bfe(void)

void FUN_140272bfe(void)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = "Sockets";
  local_18 = 7;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  DAT_14c990928 = FUN_1402c9134(&DAT_14c874628,uVar1,&local_20,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140272cda FUN_140272cda body=99 status=ok
// SIG undefined FUN_140272cda(void)

undefined8 FUN_140272cda(longlong *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  lVar3 = *param_1;
  piVar1 = (int *)(*(longlong *)(lVar3 + 0xe0) + 0x18 +
                  (longlong)(int)(~*(uint *)(lVar3 + 0x104) & uVar2) * 0x30);
  *piVar1 = *piVar1 + 1;
  FUN_140272d3d(uVar2,lVar3 + 0xe0,param_1[2],param_1[3],*(undefined4 *)(param_1[1] + 0x28),
                DAT_14c9a0270);
  return 1;
}



// FUNCTION 140272d3d FUN_140272d3d body=223 status=ok
// SIG undefined FUN_140272d3d(void)

void FUN_140272d3d(uint param_1,longlong *param_2,ulonglong param_3,ulonglong param_4,byte param_5,
                  longlong param_6)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  
  lVar4 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & param_1) * 0x30;
  uVar2 = *(ulonglong *)(*param_2 + lVar4) & 0xffffffffffff;
  uVar6 = (*(longlong *)(*param_2 + 8 + lVar4) + uVar2) - 1;
  if (uVar2 <= param_3) {
    uVar2 = param_3;
  }
  if (param_4 < uVar6) {
    uVar6 = param_4;
  }
  if (uVar2 <= uVar6) {
    uVar3 = uVar2 - param_3 >> (param_5 & 0x3f);
    uVar7 = uVar6 - param_3 >> (param_5 & 0x3f);
    uVar8 = uVar3 >> 6 & 0x3ffffff;
    uVar6 = -1L << ((byte)uVar3 & 0x3f);
    uVar2 = uVar7 >> 6 & 0x3ffffff;
    bVar5 = (byte)uVar7 & 0x3f;
    iVar9 = (uint)uVar2 - (int)uVar8;
    if (iVar9 == 0) {
      bVar5 = bVar5 ^ 0x3f;
      uVar6 = (uVar6 << bVar5) >> bVar5;
      uVar2 = uVar8;
    }
    else {
      puVar1 = (ulonglong *)(param_6 + uVar8 * 8);
      *puVar1 = *puVar1 | uVar6;
      if ((int)uVar8 + 1U < (uint)uVar2) {
        memset((void *)(param_6 + (uVar3 >> 6 & 0x3ffffff) * 8 + 8),
               (int)CONCAT71((int7)(uVar6 >> 8),0xff),(ulonglong)(iVar9 - 2) * 8 + 8);
      }
      uVar6 = 0xffffffffffffffff >> (~bVar5 & 0x3f);
    }
    puVar1 = (ulonglong *)(param_6 + uVar2 * 8);
    *puVar1 = *puVar1 | uVar6;
  }
  return;
}



// FUNCTION 140272e1c FUN_140272e1c body=220 status=ok
// SIG undefined FUN_140272e1c(void)

void FUN_140272e1c(void *param_1,uint param_2)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if ((param_2 != 0) && (uVar4 = 6, 6 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 5,0);
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar4 = uVar1 >> 5 & 0xffffffff;
    }
  }
  uVar3 = (uint)uVar4;
  if (uVar3 != *(uint *)((longlong)param_1 + 0xd4)) {
    *(uint *)((longlong)param_1 + 0xd4) = uVar3;
    iVar2 = *(int *)((longlong)param_1 + 0xd0);
    _Src = *(void **)((longlong)param_1 + 0xc0);
    if (uVar3 < 7) {
      if (_Src == (void *)0x0) {
        return;
      }
      memmove(param_1,_Src,(longlong)iVar2 << 5);
      iVar2 = 0;
      uVar4 = 0;
    }
    else if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0xc0,0,uVar4,0x20);
      memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)iVar2 << 5);
      return;
    }
    FUN_1446efa72((longlong)param_1 + 0xc0,iVar2,uVar4,0x20);
    return;
  }
  return;
}



// FUNCTION 140272f20 FUN_140272f20 body=354 status=ok
// SIG undefined FUN_140272f20(void)

void FUN_140272f20(ulonglong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int unaff_EDI;
  ulonglong uVar7;
  
  uVar3 = 0;
  if (param_2 != 0) {
    uVar4 = (longlong)param_2 * 4;
    if (DAT_14c872d28 == (longlong *)0x0) goto LAB_140272fd2;
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar3 = uVar4 + 0xf;
      if (0x7ff0 < uVar4) goto LAB_140272ff4;
      uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
      goto LAB_140272fd2;
    }
    uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    goto LAB_140272fd2;
  }
  do {
    param_2 = unaff_EDI;
    uVar5 = (uint)uVar3;
    if (uVar5 == *(uint *)((longlong)param_1 + 0xc)) {
      return;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    uVar4 = *param_1;
    if ((uVar4 & 1) == 0) {
      if ((int)uVar5 < 1 && uVar4 == 0) {
        return;
      }
      if (-1 < (int)uVar5) {
        uVar3 = FUN_14001fdce(uVar4,uVar3 << 2,4);
        *param_1 = uVar3;
        return;
      }
    }
    else if (uVar5 <= (uint)param_1[1]) {
      return;
    }
    uVar3 = 0;
    FUN_1467ac767();
LAB_140272ff4:
    if ((uVar3 & 0xfffffffffffffff0) < 0x7ff1) {
      bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
      uVar6 = 0x32;
      if (0x32 < bVar2) {
        uVar6 = (ulonglong)bVar2;
      }
      uVar7 = 0x32 - (ulonglong)bVar2;
      do {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
        if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140272fd2;
        lVar1 = uVar6 + 1 + uVar7;
        uVar7 = uVar7 - 1;
      } while (lVar1 != 0x33);
    }
    uVar4 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar4 = (ulonglong)DAT_14c841df8;
    }
    uVar4 = -uVar4 & ((uVar3 & 0xfffffffffffffff0) + uVar4) - 1;
LAB_140272fd2:
    uVar3 = 0x7fffffff;
    unaff_EDI = param_2;
    if (param_2 <= (int)(uVar4 >> 2)) {
      uVar3 = uVar4 >> 2 & 0xffffffff;
    }
  } while( true );
}



// FUNCTION 140273082 FUN_140273082 body=1018 status=ok
// SIG undefined FUN_140273082(void)

undefined8 FUN_140273082(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  void *pvVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_2a8 [40];
  void *local_280;
  uint local_278;
  undefined8 local_270;
  undefined2 *local_268;
  undefined2 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined2 local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_268 = local_248;
  local_250 = '\0';
  local_258 = &local_48;
  lVar11 = *(longlong *)(param_1 + 0x40);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x20);
  local_260 = local_268;
  if (lVar9 == 0) {
LAB_1402730db:
    plVar3 = *(longlong **)(lVar11 + 0x58);
    if (plVar3 != (longlong *)0x0) {
      iVar10 = (int)plVar3[1];
      do {
        if (iVar10 == 0) goto LAB_1402730e8;
        LOCK();
        iVar8 = (int)plVar3[1];
        bVar12 = iVar10 == iVar8;
        if (bVar12) {
          *(int *)(plVar3 + 1) = iVar10 + 1;
          iVar8 = iVar10;
        }
        iVar10 = iVar8;
        UNLOCK();
      } while (!bVar12);
      lVar9 = *(longlong *)(lVar11 + 0x50);
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
      if (lVar9 != 0) {
        plVar3 = *(longlong **)(lVar11 + 0x68);
        if (plVar3 == (longlong *)0x0) {
LAB_1402733ed:
          FUN_14029ef1a(lVar9,&local_280);
          iVar10 = local_278 - 1;
          if (local_278 == 0) {
            iVar10 = 0;
          }
          FUN_1449668a2(&local_268,local_280,iVar10);
        }
        else {
          iVar10 = (int)plVar3[1];
          do {
            if (iVar10 == 0) goto LAB_1402733ed;
            LOCK();
            iVar8 = (int)plVar3[1];
            bVar12 = iVar10 == iVar8;
            if (bVar12) {
              *(int *)(plVar3 + 1) = iVar10 + 1;
              iVar8 = iVar10;
            }
            iVar10 = iVar8;
            UNLOCK();
          } while (!bVar12);
          lVar4 = *(longlong *)(lVar11 + 0x60);
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
          if (lVar4 == 0) goto LAB_1402733ed;
          FUN_140273082(lVar4,&local_280);
          uVar6 = local_278;
          pvVar5 = local_280;
          iVar10 = local_278 - 1;
          if (local_278 == 0) {
            iVar10 = 0;
          }
          lVar9 = (longlong)iVar10;
          if (local_258 <= local_260 + lVar9) {
            FUN_140213274(&local_268,lVar9);
          }
          puVar7 = local_260;
          if (1 < uVar6) {
            memcpy(local_260,pvVar5,lVar9 * 2);
            local_260 = puVar7 + lVar9;
          }
        }
        if (local_280 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_258 <= local_260 + 1) {
          FUN_140213274(&local_268,1);
        }
        *local_260 = 0x2e;
        local_260 = local_260 + 1;
      }
    }
LAB_1402730e8:
    lVar9 = FUN_14027347e(lVar11);
    if ((lVar9 == 0) || (*(longlong *)(lVar9 + 0x30) != *(longlong *)(lVar11 + 0x40)))
    goto LAB_1402731c7;
    local_270 = *(undefined8 *)(lVar9 + 0x18);
    FUN_1400021e4(&local_270,&local_280);
  }
  else {
    iVar10 = *(int *)(lVar9 + 0x18);
    if ((((longlong)iVar10 < 0) || (*(int *)(lVar11 + 0x78) <= iVar10)) ||
       (lVar9 = *(longlong *)(*(longlong *)(lVar11 + 0x70) + (longlong)iVar10 * 8), lVar9 == 0))
    goto LAB_1402730db;
    FUN_140273082(lVar9,&local_280);
  }
  uVar6 = local_278;
  pvVar5 = local_280;
  iVar10 = local_278 - 1;
  if (local_278 == 0) {
    iVar10 = 0;
  }
  lVar11 = (longlong)iVar10;
  if (local_258 <= local_260 + lVar11) {
    FUN_140213274(&local_268,lVar11);
  }
  puVar7 = local_260;
  if (1 < uVar6) {
    memcpy(local_260,pvVar5,lVar11 * 2);
    local_260 = puVar7 + lVar11;
  }
  if (local_280 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_258 <= local_260 + 1) {
    FUN_140213274(&local_268,1);
  }
  *local_260 = 0x2e;
  local_260 = local_260 + 1;
LAB_1402731c7:
  FUN_1400021e4(*(longlong *)(param_1 + 0x48) + 0x10,&local_280);
  pvVar5 = local_280;
  iVar10 = local_278 - 1;
  if (local_278 == 0) {
    iVar10 = 0;
  }
  lVar11 = (longlong)iVar10;
  if (local_258 <= local_260 + lVar11) {
    FUN_140213274(&local_268,lVar11);
  }
  puVar7 = local_260;
  if (1 < local_278) {
    memcpy(local_260,pvVar5,lVar11 * 2);
    local_260 = puVar7 + lVar11;
  }
  if (local_280 != (void *)0x0) {
    FUN_1400020a8();
  }
  *local_260 = 0;
  FUN_140056680(param_2,local_268);
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
  if ((local_48 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14027347e FUN_14027347e body=307 status=ok
// SIG undefined FUN_14027347e(void)

longlong FUN_14027347e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  code *local_28;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + 0x40);
  if ((lVar2 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x10), lVar3 != 0)) {
    if (DAT_14c9a53e8 == 0) {
      local_30 = &local_18;
      local_18 = &LAB_141741c86;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1470cc1e5;
      local_40 = FUN_1462ad312;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000001;
      local_60 = 8;
      local_68 = 0x50;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxGraphAsset",&DAT_14c9a53e8,&DAT_1470cc1e4);
      lVar3 = *(longlong *)(lVar2 + 0x10);
      if (lVar3 == 0) goto LAB_1402735ab;
    }
    lVar2 = 0;
    if ((DAT_14c9a53e8 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0))
    goto LAB_1402734eb;
    if (*(int *)(DAT_14c9a53e8 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      lVar2 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14c9a53e8 + 0x38) * 8)
          == DAT_14c9a53e8 + 0x30) {
        lVar2 = lVar3;
      }
      goto LAB_1402734eb;
    }
  }
LAB_1402735ab:
  lVar2 = 0;
LAB_1402734eb:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1402735b2 FUN_1402735b2 body=22 status=ok
// SIG undefined FUN_1402735b2(void)

undefined4 FUN_1402735b2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1402735c8();
  return *(undefined4 *)(lVar1 + 0x158);
}



// FUNCTION 1402735c8 FUN_1402735c8 body=393 status=ok
// SIG undefined FUN_1402735c8(void)

longlong * FUN_1402735c8(void)

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
  
  plVar6 = DAT_14cb91a78;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb91a78 == (longlong *)0x0) {
    (*(code *)PTR_FUN_14c763a90)(&local_40);
    plVar1 = local_38;
    plVar6 = DAT_14cb91a80;
    DAT_14cb91a78 = local_40;
    if (local_38 == (longlong *)0x0) {
      if (DAT_14cb91a80 != (longlong *)0x0) {
        DAT_14cb91a80 = (longlong *)0x0;
LAB_1402736e7:
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
joined_r0x00014027371e:
          if (iVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      plVar6 = DAT_14cb91a80;
      UNLOCK();
      if (local_38 == DAT_14cb91a80) {
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
          goto joined_r0x00014027371e;
        }
      }
      else {
        DAT_14cb91a80 = local_38;
        if (plVar6 != (longlong *)0x0) goto LAB_1402736e7;
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
    plVar6 = DAT_14cb91a78;
    lVar5 = FUN_140162146();
    if (lVar5 == 0) goto LAB_1402735f9;
    FUN_1446dcdd4(&local_40,&DAT_14cb91a88);
    FUN_140024ada(&local_40,plVar6);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar4 = FUN_1449e3c20(DAT_14cb91a78);
    if (cVar4 == '\0') goto LAB_1402735f9;
  }
  (**(code **)(*plVar6 + 0x28))(plVar6);
LAB_1402735f9:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140273752 FUN_140273752 body=59 status=ok
// SIG undefined FUN_140273752(void)

void FUN_140273752(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14027385c();
  if (lVar1 != 0) {
    FUN_14027378e(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 14027378e FUN_14027378e body=206 status=ok
// SIG undefined FUN_14027378e(void)

void FUN_14027378e(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
       && ((plVar3 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar3 != (longlong *)0x0 && (*(uint *)(plVar3 + 2) == param_1[1])))) &&
      (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) &&
     (((char)param_1[3] != '\0' ||
      ((lVar2 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0xec8), lVar2 != 0 && (*(char *)(lVar2 + 0x30) == '\x01')))))) {
    FUN_140273972(*plVar3 + 0x430);
    return;
  }
  return;
}



// FUNCTION 14027385c FUN_14027385c body=277 status=ok
// SIG undefined FUN_14027385c(void)

longlong FUN_14027385c(uint *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (param_1[1] != 0) {
    uVar3 = *param_1;
    if ((int)uVar3 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar3) {
      return 0;
    }
    plVar8 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((((plVar8 != (longlong *)0x0) && (*(uint *)(plVar8 + 2) == param_1[1])) &&
        ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) &&
       ((*plVar8 != 0 && ((short)param_1[2] != -1)))) {
      lVar4 = *(longlong *)(*plVar8 + 0x548);
      uVar3 = param_1[2];
      uVar5 = uVar3 & 0xffff;
      if ((int)uVar5 < *(int *)(lVar4 + 0x30)) {
        lVar6 = lVar4 + 0x18;
        if (*(longlong *)(lVar4 + 0x28) != 0) {
          lVar6 = *(longlong *)(lVar4 + 0x28);
        }
        if ((*(uint *)(lVar6 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
          lVar4 = *(longlong *)(lVar4 + 8);
          lVar6 = (ulonglong)uVar5 * 0x128;
          if (uVar3 >> 0x10 == (uint)*(ushort *)(lVar4 + 0x11c + lVar6)) {
            lVar7 = *(longlong *)(lVar4 + 0x100 + lVar6);
            plVar8 = *(longlong **)(lVar4 + 0x108 + lVar6);
            if (plVar8 == (longlong *)0x0) {
              return lVar7 + 0x60;
            }
            LOCK();
            *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
            UNLOCK();
            lVar7 = lVar7 + 0x60;
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 != 0) {
              return lVar7;
            }
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 != 0) {
              return lVar7;
            }
            (**(code **)(*plVar8 + 0x10))(plVar8);
            return lVar7;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140273972 FUN_140273972 body=3136 status=ok
// SIG undefined FUN_140273972(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140273972(longlong param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined **ppuVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  byte bVar11;
  uint uVar12;
  uint *puVar13;
  longlong *plVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint *puVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_e8 [40];
  uint *local_c0;
  uint *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_7c [4];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar7 = *(uint **)(param_1 + 0x48);
  bVar22 = true;
  uVar12 = 0;
  local_a8 = param_4;
  if (puVar7 == (uint *)0x0) {
LAB_140273ecf:
    puVar13 = (uint *)0x0;
LAB_140273ed2:
    uVar17 = *(uint *)(param_1 + 0xf0);
    lVar19 = *(longlong *)(param_1 + 0xe8);
    if (0 < (int)uVar17) {
      uVar12 = 0;
      uVar9 = (ulonglong)uVar17;
      do {
        uVar18 = (int)(uVar9 >> 1) + uVar12;
        uVar15 = (uint)uVar9;
        if (*(uint *)(lVar19 + (ulonglong)uVar18 * 0x18) < DAT_14cab3098) {
          uVar12 = uVar18 + (uVar15 & 1);
        }
        uVar9 = uVar9 >> 1;
      } while (1 < uVar15);
    }
    local_b0 = CONCAT44(local_b0._4_4_,DAT_14cab3098);
    if (((int)uVar12 < (int)uVar17) &&
       (*(uint *)(lVar19 + (ulonglong)uVar12 * 0x18) <= DAT_14cab3098)) {
      lVar19 = lVar19 + (ulonglong)uVar12 * 0x18;
      puVar10 = (undefined8 *)(lVar19 + 8);
      if (puVar10 == (undefined8 *)0x0) goto LAB_140273f2f;
      puVar20 = (uint *)*puVar10;
      puVar6 = *(uint **)(lVar19 + 0x10);
      if (puVar6 != (uint *)0x0) {
        LOCK();
        puVar6[2] = puVar6[2] + 1;
        UNLOCK();
        LOCK();
        puVar6[2] = puVar6[2] + 1;
        UNLOCK();
        LOCK();
        puVar7 = puVar6 + 2;
        *puVar7 = *puVar7 - 1;
        UNLOCK();
        if (*puVar7 == 0) {
          (*(code *)**(undefined8 **)puVar6)(puVar6);
          LOCK();
          puVar7 = puVar6 + 3;
          *puVar7 = *puVar7 - 1;
          UNLOCK();
          if (*puVar7 == 0) {
            (**(code **)(*(longlong *)puVar6 + 0x10))(puVar6);
          }
        }
      }
      if (puVar20 == (uint *)0x0) goto LAB_140273f31;
    }
    else {
LAB_140273f2f:
      puVar6 = (uint *)0x0;
LAB_140273f31:
      local_c0 = puVar6;
      puVar7 = (uint *)FUN_14001cc68(0xe8);
      *(undefined1 **)(puVar7 + 2) = &DAT_100000001;
      *(undefined ***)puVar7 = &PTR_FUN_14a480f80;
      memset(puVar7 + 6,0,0xc0);
      puVar7[0x15] = 0x80;
      puVar7[0x16] = 0xffffffff;
      puVar7[0x1e] = 0;
      puVar7[0x1f] = 0;
      puVar7[0x20] = 0;
      puVar7[0x21] = 0;
      puVar7[0x29] = 0x80;
      puVar7[0x2a] = 0xffffffff;
      puVar7[0x2b] = 0;
      puVar7[0x2c] = 0;
      puVar7[0x2d] = 0;
      puVar7[0x2e] = 0;
      puVar7[0x2f] = 0;
      puVar7[0x30] = 0;
      puVar7[0x31] = 0;
      puVar7[0x32] = 0;
      puVar7[0x33] = 0;
      puVar7[0x34] = 0xffffffff;
      puVar7[0x36] = 0;
      puVar7[0x37] = 0;
      puVar7[0x38] = 0;
      puVar7[0x39] = 0;
      ppuVar8 = &PTR_FUN_14a480fa0;
      puVar20 = puVar7 + 4;
      *(undefined ***)puVar20 = &PTR_FUN_14a480fa0;
      puVar6 = puVar7;
      if (puVar20 == (uint *)0x0) {
LAB_140274397:
        local_b8 = (uint *)CONCAT44(local_b8._4_4_,(int)CONCAT71((int7)((ulonglong)ppuVar8 >> 8),1))
        ;
        if (local_c0 == (uint *)0x0) {
          puVar6 = (uint *)0x0;
        }
        else {
LAB_140274409:
          puVar2 = local_c0;
          LOCK();
          puVar16 = local_c0 + 2;
          *puVar16 = *puVar16 - 1;
          UNLOCK();
          if (*puVar16 == 0) {
            (*(code *)**(undefined8 **)local_c0)(local_c0);
            LOCK();
            puVar2 = puVar2 + 3;
            *puVar2 = *puVar2 - 1;
            UNLOCK();
            if (*puVar2 == 0) {
              (**(code **)(*(longlong *)local_c0 + 0x10))();
            }
          }
          if ((char)local_b8 == '\0') goto LAB_140274022;
        }
      }
      else {
        if (puVar7 == (uint *)0x0) {
          _DAT_00000018 = 0x10;
          puVar16 = (uint *)&DAT_00000020;
          plVar14 = _DAT_00000020;
          if (_DAT_00000020 != (longlong *)0x0) {
LAB_14027437f:
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              ppuVar8 = (undefined **)(**(code **)(*plVar14 + 0x10))();
            }
            *(uint **)puVar16 = puVar7;
            if (puVar7 != (uint *)0x0) goto LAB_140273ffa;
          }
          goto LAB_140274397;
        }
        LOCK();
        puVar7[2] = puVar7[2] + 1;
        UNLOCK();
        *(uint **)(puVar7 + 6) = puVar20;
        if (*(uint **)(puVar7 + 8) != puVar7) {
          LOCK();
          puVar7[3] = puVar7[3] + 1;
          UNLOCK();
          if (*(longlong **)(puVar7 + 8) != (longlong *)0x0) {
            puVar16 = puVar7 + 8;
            plVar14 = *(longlong **)(puVar7 + 8);
            goto LAB_14027437f;
          }
          *(uint **)(puVar7 + 8) = puVar7;
        }
LAB_140273ffa:
        LOCK();
        puVar16 = puVar7 + 2;
        *puVar16 = *puVar16 - 1;
        UNLOCK();
        if (*puVar16 == 0) {
          (*(code *)**(undefined8 **)puVar7)(puVar7);
          LOCK();
          puVar16 = puVar7 + 3;
          *puVar16 = *puVar16 - 1;
          UNLOCK();
          if (*puVar16 == 0) {
            (**(code **)(*(longlong *)puVar7 + 0x10))(puVar7);
          }
        }
        LOCK();
        puVar7[2] = puVar7[2] + 1;
        UNLOCK();
        if (puVar7 != local_c0) {
          if (local_c0 == (uint *)0x0) goto LAB_140274022;
          local_b8 = (uint *)((ulonglong)local_b8 & 0xffffffff00000000);
          goto LAB_140274409;
        }
        LOCK();
        puVar16 = puVar7 + 2;
        *puVar16 = *puVar16 - 1;
        UNLOCK();
        puVar6 = local_c0;
        if (*puVar16 == 0) {
          (*(code *)**(undefined8 **)puVar7)(puVar7);
          LOCK();
          puVar16 = puVar7 + 3;
          *puVar16 = *puVar16 - 1;
          UNLOCK();
          puVar6 = local_c0;
          if (*puVar16 == 0) {
            (**(code **)(*(longlong *)puVar7 + 0x10))(puVar7);
            puVar6 = local_c0;
          }
        }
LAB_140274022:
        LOCK();
        puVar16 = puVar7 + 2;
        *puVar16 = *puVar16 - 1;
        UNLOCK();
        if (*puVar16 == 0) {
          (*(code *)**(undefined8 **)puVar7)(puVar7);
          LOCK();
          puVar16 = puVar7 + 3;
          *puVar16 = *puVar16 - 1;
          UNLOCK();
          if (*puVar16 == 0) {
            (**(code **)(*(longlong *)puVar7 + 0x10))(puVar7);
          }
        }
      }
      local_c0 = (uint *)(param_1 + 0xe8);
      uVar4 = (undefined4)local_b0;
      (**(code **)(*(longlong *)(puVar7 + 4) + 0x10))(puVar20,local_b0 & 0xffffffff,param_1);
      if (puVar6 == (uint *)0x0) {
        uStack_70 = (uint *)0x0;
      }
      else {
        LOCK();
        puVar6[2] = puVar6[2] + 1;
        UNLOCK();
        LOCK();
        puVar6[2] = puVar6[2] + 1;
        UNLOCK();
        uStack_70 = puVar6;
      }
      local_90 = CONCAT44(local_90._4_4_,uVar4);
      local_78 = puVar20;
      FUN_140dd6482(local_c0,&local_90,&local_78);
      puVar7 = uStack_70;
      if (uStack_70 != (uint *)0x0) {
        LOCK();
        puVar16 = uStack_70 + 2;
        *puVar16 = *puVar16 - 1;
        UNLOCK();
        if (*puVar16 == 0) {
          (*(code *)**(undefined8 **)uStack_70)(uStack_70);
          LOCK();
          puVar16 = puVar7 + 3;
          *puVar16 = *puVar16 - 1;
          UNLOCK();
          if (*puVar16 == 0) {
            (**(code **)(*(longlong *)puVar7 + 0x10))(puVar7);
          }
        }
      }
      if (puVar6 != (uint *)0x0) {
        LOCK();
        puVar7 = puVar6 + 2;
        *puVar7 = *puVar7 - 1;
        UNLOCK();
        if (*puVar7 == 0) {
          (*(code *)**(undefined8 **)puVar6)(puVar6);
          LOCK();
          puVar7 = puVar6 + 3;
          *puVar7 = *puVar7 - 1;
          UNLOCK();
          if (*puVar7 == 0) {
            (**(code **)(*(longlong *)puVar6 + 0x10))(puVar6);
          }
        }
      }
    }
    if (puVar6 == puVar13) {
      puVar7 = puVar13;
      if (puVar6 != (uint *)0x0) {
        LOCK();
        puVar13 = puVar6 + 2;
        *puVar13 = *puVar13 - 1;
        UNLOCK();
        if (*puVar13 == 0) {
          (*(code *)**(undefined8 **)puVar6)(puVar6);
          LOCK();
          puVar13 = puVar6 + 3;
          *puVar13 = *puVar13 - 1;
          uVar12 = *puVar13;
          UNLOCK();
          goto joined_r0x0001402745a8;
        }
      }
    }
    else {
      puVar7 = puVar6;
      if (!bVar22) {
        LOCK();
        puVar6 = puVar13 + 2;
        *puVar6 = *puVar6 - 1;
        UNLOCK();
        if (*puVar6 == 0) {
          (*(code *)**(undefined8 **)puVar13)(puVar13);
          LOCK();
          puVar6 = puVar13 + 3;
          *puVar6 = *puVar6 - 1;
          uVar12 = *puVar6;
          UNLOCK();
          puVar6 = puVar13;
joined_r0x0001402745a8:
          if (uVar12 == 0) {
            (**(code **)(*(longlong *)puVar6 + 0x10))();
          }
        }
      }
    }
    *(uint **)(param_1 + 0x40) = puVar20;
    puVar13 = *(uint **)(param_1 + 0x48);
    if (puVar13 != puVar7) {
      if (puVar7 != (uint *)0x0) {
        LOCK();
        puVar7[3] = puVar7[3] + 1;
        UNLOCK();
        puVar13 = *(uint **)(param_1 + 0x48);
      }
      if (puVar13 != (uint *)0x0) {
        LOCK();
        puVar6 = puVar13 + 3;
        *puVar6 = *puVar6 - 1;
        UNLOCK();
        if (*puVar6 == 0) {
          (**(code **)(*(longlong *)puVar13 + 0x10))();
        }
      }
      *(uint **)(param_1 + 0x48) = puVar7;
    }
  }
  else {
    uVar17 = puVar7[2];
    do {
      if (uVar17 == 0) goto LAB_140273ecf;
      LOCK();
      uVar15 = puVar7[2];
      bVar21 = uVar17 == uVar15;
      if (bVar21) {
        puVar7[2] = uVar17 + 1;
        uVar15 = uVar17;
      }
      uVar17 = uVar15;
      UNLOCK();
    } while (!bVar21);
    puVar20 = *(uint **)(param_1 + 0x40);
    if (puVar20 == (uint *)0x0) {
      bVar22 = false;
      puVar13 = puVar7;
      goto LAB_140273ed2;
    }
  }
  local_90._0_4_ = 0;
  local_90._4_4_ = 0;
  local_c0 = puVar7;
  uVar17 = (uint)local_90;
  uVar12 = local_90._4_4_;
  if (param_2 != 0) {
    uVar17 = *(uint *)(param_2 + 0xc);
    if ((int)uVar17 < DAT_14c9647dc) {
      lVar19 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
    }
    else {
      lVar19 = 0;
    }
    uVar12 = *(uint *)(lVar19 + 0x10);
    if (*(uint *)(lVar19 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar15 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar15);
      }
      LOCK();
      uVar12 = *(uint *)(lVar19 + 0x10);
      bVar22 = uVar12 == 0;
      if (bVar22) {
        *(uint *)(lVar19 + 0x10) = uVar15;
        uVar12 = 0;
      }
      UNLOCK();
      if (bVar22) {
        uVar12 = uVar15;
      }
    }
  }
  local_90._4_4_ = uVar12;
  local_90._0_4_ = uVar17;
  uVar17 = local_90._4_4_;
  uVar12 = (uint)local_90;
  uStack_88 = param_3;
  FUN_14027461a(puVar20 + 0x32,&local_94,param_2);
  puVar7 = puVar20 + 6;
  uVar12 = uVar17 >> 0xd ^ uVar12 - uVar17;
  uVar15 = uVar12 << 8 ^ (-0x61c88647 - uVar17) - uVar12;
  uVar17 = uVar15 >> 0xd ^ (uVar17 - uVar12) - uVar15;
  uVar12 = uVar17 >> 0xc ^ (uVar12 - uVar15) - uVar17;
  uVar18 = uVar12 << 0x10 ^ (uVar15 - uVar17) - uVar12;
  uVar17 = uVar18 >> 5 ^ (uVar17 - uVar12) - uVar18;
  uVar15 = uVar17 >> 3 ^ (uVar12 - uVar18) - uVar17;
  uVar12 = uVar15 << 10 ^ (uVar18 - uVar17) - uVar15;
  uVar12 = uVar12 >> 0xf ^ uVar17 - (uVar15 + uVar12);
  iVar5 = FUN_1402745b4(puVar7,(uVar12 >> 2) + 0x9e3779b9 +
                               (int)((ulonglong)param_3 >> 0x20) * 0x17 + (int)param_3 +
                               uVar12 * 0x40 ^ uVar12,&local_90);
  if (((iVar5 == -1) || (lVar19 = (longlong)iVar5 * 0x20 + *(longlong *)puVar7, lVar19 == 0)) ||
     (local_98 = *(uint *)(lVar19 + 0x10), local_98 == 0xffffffff)) {
    local_78._0_4_ = (uint)local_90;
    local_78._4_4_ = local_90._4_4_;
    uStack_70._0_4_ = (uint)uStack_88;
    uStack_70._4_4_ = uStack_88._4_4_;
    if (puVar20[0x27] == 0) {
      uVar12 = puVar20[0x1c];
      uVar9 = (ulonglong)uVar12;
      puVar20[0x1c] = uVar12 + 1;
      if (puVar20[0x1d] == uVar12) {
        FUN_1406cd6a8(puVar20 + 0x1a,uVar12);
      }
      uVar17 = puVar20[0x24];
      if (uVar17 == 0) {
        iVar5 = -1;
      }
      else {
        iVar5 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar5 = uVar17 - 1;
        }
        iVar5 = iVar5 >> 5;
      }
      puVar13 = puVar20 + 0x1e;
      uVar15 = uVar17 + 1;
      uVar18 = uVar17 + 0x1f;
      if (-1 < (int)uVar17) {
        uVar18 = uVar17;
      }
      if ((int)uVar18 >> 5 == iVar5) {
        puVar20[0x24] = uVar15;
      }
      else {
        if ((int)puVar20[0x25] <= (int)uVar17) {
          local_b8 = puVar13;
          local_b0 = uVar9;
          if (uVar17 + 0x20 < 0xa0) {
            uVar15 = 0x80;
            uVar12 = uVar17;
          }
          else {
            uVar12 = uVar17 + 0x20 >> 5;
            if (puVar20[0x25] + 0x1f < 0xa0) {
              uVar15 = 4;
              if (4 < uVar12) {
                uVar15 = uVar12;
              }
            }
            else {
              uVar15 = (uVar12 * 3 >> 3) + uVar12 + 0x10;
            }
            uVar9 = FUN_144a3809e(uVar15 << 2,0);
            iVar5 = (int)(uVar9 >> 2);
            uVar15 = 0xffffffe0;
            if ((int)uVar12 <= iVar5) {
              uVar15 = iVar5 << 5;
            }
            uVar12 = puVar20[0x24];
          }
          puVar13 = local_b8;
          puVar20[0x25] = uVar15;
          FUN_1446efbd8(local_b8,uVar12);
          uVar15 = puVar20[0x24] + 1;
          uVar9 = local_b0;
        }
        uVar12 = (uint)uVar9;
        uVar3 = uVar15 + 0x1f;
        if (-1 < (int)uVar15) {
          uVar3 = uVar15;
        }
        puVar20[0x24] = uVar15;
        if ((int)uVar15 % 0x20 != 0) {
          puVar6 = *(uint **)(puVar20 + 0x22);
          if (*(uint **)(puVar20 + 0x22) == (uint *)0x0) {
            puVar6 = puVar13;
          }
          bVar11 = -(char)((int)uVar15 % 0x20);
          puVar6[(int)uVar3 >> 5] = (puVar6[(int)uVar3 >> 5] << (bVar11 & 0x1f)) >> (bVar11 & 0x1f);
        }
      }
      lVar19 = (longlong)(int)uVar12;
      if (*(uint **)(puVar20 + 0x22) != (uint *)0x0) {
        puVar13 = *(uint **)(puVar20 + 0x22);
      }
      bVar11 = (byte)uVar17 & 0x1f;
      puVar13[(int)uVar18 >> 5] =
           puVar13[(int)uVar18 >> 5] & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
    }
    else {
      uVar12 = puVar20[0x26];
      lVar19 = (longlong)(int)uVar12;
      uVar17 = *(uint *)(*(longlong *)(puVar20 + 0x1a) + 4 + lVar19 * 0x40);
      puVar20[0x26] = uVar17;
      uVar15 = puVar20[0x27] - 1;
      puVar20[0x27] = uVar15;
      if (uVar15 != 0) {
        *(undefined4 *)(*(longlong *)(puVar20 + 0x1a) + (longlong)(int)uVar17 * 0x40) = 0xffffffff;
      }
    }
    puVar13 = puVar20 + 0x1e;
    if (*(uint **)(puVar20 + 0x22) != (uint *)0x0) {
      puVar13 = *(uint **)(puVar20 + 0x22);
    }
    uVar17 = uVar12 + 0x1f;
    if (-1 < (int)uVar12) {
      uVar17 = uVar12;
    }
    puVar13[(int)uVar17 >> 5] = puVar13[(int)uVar17 >> 5] | 1 << ((byte)uVar12 & 0x1f);
    puVar13 = (uint *)(*(longlong *)(puVar20 + 0x1a) + lVar19 * 0x40);
    *puVar13 = (uint)local_78;
    puVar13[1] = local_78._4_4_;
    puVar13[2] = (uint)uStack_70;
    puVar13[3] = uStack_70._4_4_;
    *(byte *)(puVar13 + 0xc) = (byte)puVar13[0xc] & 0xfc | 2;
    FUN_140275104(puVar13 + 4);
    *(undefined1 *)(puVar13 + 0xe) = 0;
    uStack_70 = &local_98;
    local_98 = uVar12;
    local_78 = (uint *)&local_90;
    FUN_1402767de(puVar7,local_7c,&local_78);
  }
  uVar12 = local_98;
  local_a0 = local_94;
  local_9c = DAT_14cab3098;
  FUN_140274704(param_1);
  lVar19 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec8)
  ;
  if ((lVar19 == 0) || (*(char *)(lVar19 + 0x30) != '\x01')) {
    if ((*(byte *)(*(longlong *)(puVar20 + 0x1a) + 0x38 + (longlong)(int)uVar12 * 0x40) & 1) != 0)
    goto LAB_140273bd1;
    bVar22 = true;
  }
  else {
    bVar11 = *(byte *)(*(longlong *)(puVar20 + 0x1a) + 0x38 + (longlong)(int)uVar12 * 0x40);
    if (((bVar11 & 2) == 0) && ((bVar11 & 1) != 0)) goto LAB_140273bd1;
    uVar17 = puVar20[0x2a];
    lVar19 = *(longlong *)(puVar20 + 0x28);
    uVar15 = 0;
    if (0 < (int)uVar17) {
      uVar15 = 0;
      uVar18 = uVar17;
      do {
        uVar3 = (uVar18 >> 1) + uVar15;
        if (*(int *)(lVar19 + (ulonglong)uVar3 * 0x30) < (int)uVar12) {
          uVar15 = uVar3 + (uVar18 & 1);
        }
        bVar22 = 1 < uVar18;
        uVar18 = uVar18 >> 1;
      } while (bVar22);
    }
    if ((((int)uVar15 < (int)uVar17) && (*(int *)(lVar19 + (ulonglong)uVar15 * 0x30) <= (int)uVar12)
        ) && (lVar19 + (ulonglong)uVar15 * 0x30 != -8)) goto LAB_140273bd1;
    bVar22 = false;
  }
  (**(code **)(*local_a8 + 0x10))(local_a8,&local_78,param_2);
  if ((local_58 & 1) != 0) {
    if ((uVar12 == 0xffffffff) ||
       (lVar19 = *(longlong *)(puVar20 + 0x1a),
       (*(byte *)(lVar19 + 0x38 + (longlong)(int)uVar12 * 0x40) & 1) == 0)) {
      (**(code **)(*local_a8 + 8))(local_a8,param_2);
      lVar19 = *(longlong *)(puVar20 + 0x1a);
    }
    lVar19 = (longlong)(int)uVar12 * 0x40 + lVar19;
    local_90._0_4_ = uVar12;
    if (bVar22) {
      FUN_140275104((uint *)(lVar19 + 0x10));
      if ((local_58 & 1) != 0) {
        *(byte *)(lVar19 + 0x30) = *(byte *)(lVar19 + 0x30) | 1;
        *(byte *)(lVar19 + 0x30) = *(byte *)(lVar19 + 0x30) & 0xfd | local_58 & 2;
        *(undefined8 *)(lVar19 + 0x20) = local_68;
        *(undefined8 *)(lVar19 + 0x28) = uStack_60;
        *(uint *)(lVar19 + 0x10) = (uint)local_78;
        *(uint *)(lVar19 + 0x14) = local_78._4_4_;
        *(uint *)(lVar19 + 0x18) = (uint)uStack_70;
        *(uint *)(lVar19 + 0x1c) = uStack_70._4_4_;
        local_58 = local_58 & 0xfe;
      }
      *(byte *)(lVar19 + 0x38) = *(byte *)(lVar19 + 0x38) | 3;
    }
    else if ((*(byte *)(lVar19 + 0x38) & 1) == 0) {
      FUN_140275104((uint *)(lVar19 + 0x10));
      if ((local_58 & 1) != 0) {
        *(byte *)(lVar19 + 0x30) = *(byte *)(lVar19 + 0x30) | 1;
        *(byte *)(lVar19 + 0x30) = *(byte *)(lVar19 + 0x30) & 0xfd | local_58 & 2;
        *(undefined8 *)(lVar19 + 0x20) = local_68;
        *(undefined8 *)(lVar19 + 0x28) = uStack_60;
        *(uint *)(lVar19 + 0x10) = (uint)local_78;
        *(uint *)(lVar19 + 0x14) = local_78._4_4_;
        *(uint *)(lVar19 + 0x18) = (uint)uStack_70;
        *(uint *)(lVar19 + 0x1c) = uStack_70._4_4_;
        local_58 = local_58 & 0xfe;
      }
      *(byte *)(lVar19 + 0x38) = *(byte *)(lVar19 + 0x38) | 1;
    }
    else {
      FUN_14756c21e(puVar20 + 0x28,&local_90,&local_78);
    }
  }
  if ((local_58 & 1) != 0) {
    puVar7 = (uint *)&local_78;
    if ((local_58 & 2) == 0) {
      puVar7 = local_78;
    }
    local_58 = local_58 & 0xfe;
    (*(code *)**(undefined8 **)puVar7)(puVar7,0);
    if ((local_58 & 2) == 0) {
      FUN_1400020a8(local_78);
    }
  }
LAB_140273bd1:
  if (local_c0 != (uint *)0x0) {
    LOCK();
    puVar7 = local_c0 + 2;
    *puVar7 = *puVar7 - 1;
    UNLOCK();
    if (*puVar7 == 0) {
      (*(code *)**(undefined8 **)local_c0)(local_c0);
      LOCK();
      puVar7 = local_c0 + 3;
      *puVar7 = *puVar7 - 1;
      UNLOCK();
      if (*puVar7 == 0) {
        (**(code **)(*(longlong *)local_c0 + 0x10))();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402745b4 FUN_1402745b4 body=102 status=ok
// SIG undefined FUN_1402745b4(void)

int FUN_1402745b4(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if (((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
           && (*(longlong *)(lVar2 + lVar4 + 8) == *(longlong *)(param_3 + 2))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14027461a FUN_14027461a body=232 status=ok
// SIG undefined FUN_14027461a(void)

undefined8 FUN_14027461a(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_1;
  local_38 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
    local_38 = CONCAT44(iVar3,uVar1);
  }
  FUN_14027499e(uVar2,param_2,&local_38);
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140274704 FUN_140274704 body=282 status=ok
// SIG undefined FUN_140274704(void)

void FUN_140274704(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec8);
  if (lVar1 == 0) {
    if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      FUN_140adeba6(param_1);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  local_18 = *(undefined4 *)(param_2 + 1);
  local_20 = *param_2;
  if (*(short *)(lVar1 + 0x18) == -1) {
    if (*(char *)(lVar1 + 0x10) != '\x03') {
      uVar2 = 0xffff;
      local_14 = 0;
      goto LAB_1402747a9;
    }
    uVar2 = *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x108) + 0x548) + 8) +
                      0x122 + (ulonglong)*(ushort *)(lVar1 + 8) * 0x128);
  }
  else {
    uVar2 = *(uint *)(lVar1 + 0x18);
  }
  local_14 = uVar2 & 0xffff0000;
LAB_1402747a9:
  local_14 = uVar2 & 0xffff | local_14;
  local_10 = *(undefined1 *)(lVar1 + 0x30);
  FUN_140274826();
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_48);
}



// FUNCTION 140274826 FUN_140274826 body=277 status=ok
// SIG undefined FUN_140274826(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140274826(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 2);
  if ((param_1 != (undefined8 *)0x0) && (cVar1 == '\0')) {
    uVar2 = FUN_14027493c(param_3 + 0x430);
    FUN_140274be2(uVar2,param_1,param_2);
    return;
  }
  if (cVar1 == '\x01' && param_1 != (undefined8 *)0x0) {
    uVar2 = FUN_14755b64e(param_3 + 0x430);
    FUN_14755b6ae(uVar2,param_1,param_2);
    return;
  }
  if (cVar1 == '\x02' && param_1 != (undefined8 *)0x0) {
    uVar2 = FUN_14755b7d0(param_3 + 0x430);
    FUN_14755b830(uVar2,*param_1,param_2);
    return;
  }
  if ((param_1 != (undefined8 *)0x0) && (cVar1 == '\x03')) {
    uVar2 = FUN_140275cdc(param_3 + 0x430);
    FUN_14027655c(uVar2,param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14027493c FUN_14027493c body=98 status=ok
// SIG undefined FUN_14027493c(void)

void FUN_14027493c(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[0xb] = param_1;
    *puVar1 = &PTR_FUN_14a47cef0;
    *(undefined8 **)(param_1 + 0x20) = puVar1;
  }
  return;
}



// FUNCTION 14027499e FUN_14027499e body=576 status=ok
// SIG undefined FUN_14027499e(void)

int * FUN_14027499e(longlong param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  int *local_50;
  int *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar3 = param_3[1];
    uVar7 = uVar3 >> 0xd ^ *param_3 - uVar3;
    uVar9 = uVar7 << 8 ^ (-0x61c88647 - uVar3) - uVar7;
    uVar11 = uVar9 >> 0xd ^ (uVar3 - uVar7) - uVar9;
    uVar12 = uVar11 >> 0xc ^ (uVar7 - uVar9) - uVar11;
    uVar7 = uVar12 << 0x10 ^ (uVar9 - uVar11) - uVar12;
    uVar9 = uVar7 >> 5 ^ (uVar11 - uVar12) - uVar7;
    uVar11 = uVar9 >> 3 ^ (uVar12 - uVar7) - uVar9;
    uVar7 = uVar11 << 10 ^ (uVar7 - uVar9) - uVar11;
    lVar8 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x58);
    }
    iVar10 = *(int *)(lVar8 + (ulonglong)
                              (*(int *)(param_1 + 0x60) - 1U &
                              (uVar7 >> 0xf ^ uVar9 - (uVar11 + uVar7))) * 4);
    if (iVar10 != -1) {
      lVar8 = *(longlong *)(param_1 + 0x18);
      do {
        piVar2 = (int *)(lVar8 + (longlong)iVar10 * 0x14);
        if ((*piVar2 == *param_3) && (*(uint *)(lVar8 + 4 + (longlong)iVar10 * 0x14) == uVar3)) {
          if (piVar2 != (int *)0x0) {
            iVar10 = piVar2[2];
            *param_2 = iVar10;
            if (iVar10 == -1) goto LAB_140274abc;
            goto LAB_140274b73;
          }
          break;
        }
        iVar10 = piVar2[3];
      } while (iVar10 != -1);
    }
  }
  *param_2 = -1;
LAB_140274abc:
  plVar4 = *(longlong **)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0xb8);
  if (plVar4 == (longlong *)0x0) {
LAB_140274b9b:
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    FUN_14027515a(uVar5,&local_50);
    *param_2 = (int)local_50;
  }
  else {
    iVar10 = (int)plVar4[1];
    do {
      if (iVar10 == 0) goto LAB_140274b9b;
      LOCK();
      iVar6 = (int)plVar4[1];
      bVar13 = iVar10 == iVar6;
      if (bVar13) {
        *(int *)(plVar4 + 1) = iVar10 + 1;
        iVar6 = iVar10;
      }
      iVar10 = iVar6;
      UNLOCK();
    } while (!bVar13);
    local_68 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plStack_60 = plVar4;
    FUN_14027515a(uVar5,&local_50);
    *param_2 = (int)local_50;
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
  local_50 = param_3;
  local_48 = param_2;
  FUN_1402757a2((longlong *)(param_1 + 0x18),local_3c,&local_50,0);
  local_50 = param_2;
  local_48 = param_3;
  FUN_14027522c(param_1 + 0x68,local_3c,&local_50,0);
LAB_140274b73:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140274be2 FUN_140274be2 body=1200 status=ok
// SIG undefined FUN_140274be2(void)

undefined8 FUN_140274be2(longlong param_1,uint *param_2,int *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
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
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  int *piVar22;
  longlong lVar23;
  undefined8 uVar24;
  byte bVar25;
  int iVar26;
  uint uVar27;
  int *piVar28;
  int *piVar29;
  uint uVar30;
  longlong lVar31;
  int iVar32;
  int iVar33;
  longlong lVar34;
  uint uVar35;
  
  plVar1 = (longlong *)(param_1 + 8);
  uVar30 = ~(*param_2 ^ param_2[1] ^ param_2[2] ^ (uint)(ushort)param_2[3]);
  iVar19 = FUN_140275092(plVar1,uVar30,param_2);
  if (iVar19 != -1) {
    if (*plVar1 + (longlong)iVar19 * 0x40 != 0) {
      lVar23 = *plVar1 + (longlong)iVar19 * 0x40;
      goto LAB_140274c42;
    }
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar19 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar19 + 1;
    if (*(int *)(param_1 + 0x14) == iVar19) {
      FUN_1406cd6a8(plVar1,iVar19);
    }
    iVar33 = *(int *)(param_1 + 0x30);
    if (iVar33 == 0) {
      iVar20 = -1;
    }
    else {
      iVar20 = iVar33 + 0x1e;
      if (-1 < iVar33 + -1) {
        iVar20 = iVar33 + -1;
      }
      iVar20 = iVar20 >> 5;
    }
    lVar34 = param_1 + 0x18;
    iVar26 = iVar33 + 1;
    iVar32 = iVar33 + 0x1f;
    if (-1 < iVar33) {
      iVar32 = iVar33;
    }
    if (iVar32 >> 5 == iVar20) {
      *(int *)(param_1 + 0x30) = iVar26;
    }
    else {
      if (*(int *)(param_1 + 0x34) <= iVar33) {
        if (iVar33 + 0x20U < 0xa0) {
          iVar26 = 0x80;
          iVar20 = iVar33;
        }
        else {
          uVar35 = iVar33 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x34) + 0x1fU < 0xa0) {
            uVar27 = 4;
            if (4 < uVar35) {
              uVar27 = uVar35;
            }
          }
          else {
            uVar27 = (uVar35 * 3 >> 3) + uVar35 + 0x10;
          }
          uVar21 = FUN_144a3809e(uVar27 << 2,0);
          iVar20 = (int)(uVar21 >> 2);
          iVar26 = -0x20;
          if ((int)uVar35 <= iVar20) {
            iVar26 = iVar20 << 5;
          }
          iVar20 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x34) = iVar26;
        FUN_1446efbd8(lVar34,iVar20);
        iVar26 = *(int *)(param_1 + 0x30) + 1;
      }
      iVar20 = iVar26 + 0x1f;
      if (-1 < iVar26) {
        iVar20 = iVar26;
      }
      *(int *)(param_1 + 0x30) = iVar26;
      if (iVar26 % 0x20 != 0) {
        lVar23 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x28) == 0) {
          lVar23 = lVar34;
        }
        bVar25 = -(char)(iVar26 % 0x20);
        *(uint *)(lVar23 + (longlong)(iVar20 >> 5) * 4) =
             (uint)(*(int *)(lVar23 + (longlong)(iVar20 >> 5) * 4) << (bVar25 & 0x1f)) >>
             (bVar25 & 0x1f);
      }
    }
    lVar23 = (longlong)iVar19;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar34 = *(longlong *)(param_1 + 0x28);
    }
    bVar25 = (byte)iVar33 & 0x1f;
    puVar2 = (uint *)(lVar34 + (longlong)(iVar32 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar25 | 0xfffffffeU >> 0x20 - bVar25);
  }
  else {
    iVar19 = *(int *)(param_1 + 0x38);
    lVar23 = (longlong)iVar19;
    iVar33 = *(int *)(*(longlong *)(param_1 + 8) + 4 + lVar23 * 0x40);
    *(int *)(param_1 + 0x38) = iVar33;
    iVar20 = *(int *)(param_1 + 0x3c) + -1;
    *(int *)(param_1 + 0x3c) = iVar20;
    if (iVar20 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 8) + (longlong)iVar33 * 0x40) = 0xffffffff;
    }
  }
  iVar33 = 1;
  lVar34 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar34 = *(longlong *)(param_1 + 0x28);
  }
  iVar20 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar20 = iVar19;
  }
  puVar2 = (uint *)(lVar34 + (longlong)(iVar20 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar19 & 0x1f);
  lVar34 = *(longlong *)(param_1 + 8);
  lVar23 = lVar23 * 0x40;
  puVar3 = (undefined4 *)(lVar34 + lVar23);
  uVar35 = param_2[1];
  uVar27 = param_2[2];
  uVar6 = param_2[3];
  puVar2 = (uint *)(lVar34 + lVar23);
  *puVar2 = *param_2;
  puVar2[1] = uVar35;
  puVar2[2] = uVar27;
  puVar2[3] = uVar6;
  *(undefined8 *)(lVar34 + 0x28 + lVar23) = 0;
  *(undefined8 *)(lVar34 + 0x30 + lVar23) = 0x100000000;
  *(undefined4 *)(lVar34 + 0x38 + lVar23) = 0xffffffff;
  uVar35 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
  if (uVar35 == 1) {
LAB_140274dbd:
    if (((int)uVar35 < 1) || (iVar33 <= *(int *)(param_1 + 0x50))) {
      uVar30 = *(int *)(param_1 + 0x50) - 1U & uVar30;
      puVar3[0xf] = uVar30;
      lVar23 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar23 = param_1 + 0x40;
      }
      puVar3[0xe] = *(undefined4 *)
                     (lVar23 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar30) * 4
                     );
      lVar23 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar23 = param_1 + 0x40;
      }
      *(int *)(lVar23 + ((longlong)*(int *)(param_1 + 0x50) - 1U & (longlong)(int)uVar30) * 4) =
           iVar19;
    }
    else {
      *(int *)(param_1 + 0x50) = iVar33;
      FUN_140275fb8(plVar1);
    }
  }
  else {
    iVar20 = FUN_140275092(plVar1,uVar30,puVar3);
    if (iVar20 == -1) {
      if (3 < uVar35) {
        uVar21 = (ulonglong)(uVar35 & 0xfffffffe) + 0xf;
        lVar23 = 0x3f;
        if (uVar21 != 0) {
          for (; uVar21 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar33 = 1 << ((byte)lVar23 & 0x1f);
      }
      goto LAB_140274dbd;
    }
    puVar4 = (undefined4 *)(*plVar1 + (longlong)iVar20 * 0x40);
    if (*(longlong *)(*plVar1 + 0x28 + (longlong)iVar20 * 0x40) != 0) {
      FUN_1400020a8();
    }
    uVar7 = *puVar3;
    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    uVar11 = puVar3[4];
    uVar12 = puVar3[5];
    uVar13 = puVar3[6];
    uVar14 = puVar3[7];
    uVar15 = puVar3[8];
    uVar16 = puVar3[9];
    uVar17 = puVar3[10];
    uVar18 = puVar3[0xb];
    *(undefined8 *)(puVar4 + 0xc) = *(undefined8 *)(puVar3 + 0xc);
    puVar4[8] = uVar15;
    puVar4[9] = uVar16;
    puVar4[10] = uVar17;
    puVar4[0xb] = uVar18;
    puVar4[4] = uVar11;
    puVar4[5] = uVar12;
    puVar4[6] = uVar13;
    puVar4[7] = uVar14;
    *puVar4 = uVar7;
    puVar4[1] = uVar8;
    puVar4[2] = uVar9;
    puVar4[3] = uVar10;
    FUN_140da2842(plVar1,iVar19);
  }
  lVar23 = *plVar1 + (longlong)iVar19 * 0x40;
LAB_140274c42:
  piVar29 = (int *)(lVar23 + 0x10);
  piVar22 = *(int **)(lVar23 + 0x28);
  piVar28 = piVar22;
  if (piVar22 == (int *)0x0) {
    piVar28 = piVar29;
  }
  iVar19 = *(int *)(lVar23 + 0x30);
  lVar34 = (longlong)iVar19;
  if (lVar34 != 0) {
    lVar31 = lVar34 * 0x14;
    do {
      if (((*piVar28 == *param_3) && (piVar28[1] == param_3[1])) && (piVar28[2] == param_3[2])) {
        if (piVar28 != (int *)0x0) {
          cVar5 = (char)param_3[4];
          if ((char)piVar28[4] == cVar5) {
            return 2;
          }
          *(char *)(piVar28 + 4) = cVar5;
          lVar23 = FUN_140adecae(*(undefined8 *)(param_1 + 0x58));
          uVar24 = 1;
          if (lVar23 == 0) {
            return 1;
          }
          if (cVar5 == '\0') {
            *(short *)(lVar23 + 0xe) = *(short *)(lVar23 + 0xe) + -1;
            return 1;
          }
          *(short *)(lVar23 + 0xe) = *(short *)(lVar23 + 0xe) + 1;
          goto LAB_140274fe9;
        }
        break;
      }
      piVar28 = piVar28 + 5;
      lVar31 = lVar31 + -0x14;
    } while (lVar31 != 0);
  }
  *(uint *)(lVar23 + 0x30) = iVar19 + 1U;
  if (*(uint *)(lVar23 + 0x34) < iVar19 + 1U) {
    FUN_14052d4a2(piVar29,iVar19);
    piVar22 = *(int **)(lVar23 + 0x28);
  }
  if (piVar22 != (int *)0x0) {
    piVar29 = piVar22;
  }
  piVar29[lVar34 * 5 + 4] = param_3[4];
  iVar19 = param_3[1];
  iVar33 = param_3[2];
  iVar20 = param_3[3];
  piVar29 = piVar29 + lVar34 * 5;
  *piVar29 = *param_3;
  piVar29[1] = iVar19;
  piVar29[2] = iVar33;
  piVar29[3] = iVar20;
  lVar23 = FUN_140adeba6(*(undefined8 *)(param_1 + 0x58),param_3);
  *(short *)(lVar23 + 0xc) = *(short *)(lVar23 + 0xc) + 1;
  uVar24 = 0;
  if ((char)param_3[4] == '\x01') {
    *(short *)(lVar23 + 0xe) = *(short *)(lVar23 + 0xe) + 1;
LAB_140274fe9:
    *(undefined1 *)(lVar23 + 0x10) = 1;
  }
  return uVar24;
}



// FUNCTION 140275092 FUN_140275092 body=113 status=ok
// SIG undefined FUN_140275092(void)

int FUN_140275092(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x40;
        if ((((*(int *)(lVar3 + 4 + lVar5) == param_3[1]) &&
             (piVar1 = (int *)(lVar3 + lVar5), *piVar1 == *param_3)) && (piVar1[2] == param_3[2]))
           && (piVar1[3] == param_3[3])) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x38 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 140275104 FUN_140275104 body=59 status=ok
// SIG undefined FUN_140275104(void)

void FUN_140275104(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 4) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 4) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140275140 FUN_140275140 body=25 status=ok
// SIG undefined FUN_140275140(void)

void FUN_140275140(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_140dd6aee(param_1 + 200);
  return;
}



// FUNCTION 14027515a FUN_14027515a body=209 status=ok
// SIG undefined FUN_14027515a(void)

undefined4 * FUN_14027515a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [40];
  undefined4 local_90 [2];
  undefined8 *local_88;
  undefined8 local_80 [10];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = *param_3;
  lVar5 = param_3[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  FUN_1402753f0(param_1 + 0x60,local_90);
  *local_88 = uVar3;
  local_88[1] = lVar5;
  puVar6 = local_80;
  puVar7 = local_88 + 2;
  for (lVar5 = 10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_88[0xc] = 0;
  local_88[0xd] = 0x400000000;
  *param_2 = local_90[0];
  plVar4 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14027522c FUN_14027522c body=295 status=ok
// SIG undefined FUN_14027522c(void)

undefined4 *
FUN_14027522c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1402755c8(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  *(undefined8 *)(local_48 + 1) = *puVar1;
  local_48[3] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_140275354(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[4] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[3] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140275d3e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140275354 FUN_140275354 body=156 status=ok
// SIG undefined FUN_140275354(void)

void FUN_140275354(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if (*piVar1 == *param_3) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_140875f26(param_1,*param_4,1);
          *param_4 = iVar5;
          uVar3 = 1;
          break;
        }
        iVar5 = piVar1[3];
        uVar3 = 0;
      } while (iVar5 != -1);
      goto LAB_1402753be;
    }
  }
  uVar3 = 0;
LAB_1402753be:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 1402753f0 FUN_1402753f0 body=472 status=ok
// SIG undefined FUN_1402753f0(void)

int * FUN_1402753f0(longlong *param_1,int *param_2)

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
      FUN_140275bcc(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x70);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x70) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x70 + *param_1;
  return param_2;
}



// FUNCTION 1402755c8 FUN_1402755c8 body=473 status=ok
// SIG undefined FUN_1402755c8(void)

int * FUN_1402755c8(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1402757a2 FUN_1402757a2 body=423 status=ok
// SIG undefined FUN_1402757a2(void)

undefined4 *
FUN_1402757a2(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1402759f2(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = (uint)((ulonglong)uVar2 >> 0x20);
  uVar4 = uVar6 >> 0xd ^ (int)uVar2 - uVar6;
  uVar7 = uVar4 << 8 ^ (-0x61c88647 - uVar4) - uVar6;
  uVar8 = uVar7 >> 0xd ^ (uVar6 - uVar4) - uVar7;
  uVar6 = uVar8 >> 0xc ^ (uVar4 - uVar7) - uVar8;
  uVar4 = uVar6 << 0x10 ^ (uVar7 - uVar8) - uVar6;
  uVar7 = uVar4 >> 5 ^ (uVar8 - uVar6) - uVar4;
  uVar6 = uVar7 >> 3 ^ (uVar6 - uVar4) - uVar7;
  uVar4 = uVar6 << 10 ^ (uVar4 - uVar7) - uVar6;
  uVar4 = uVar4 >> 0xf ^ uVar7 - (uVar6 + uVar4);
  local_68 = param_4;
  cVar3 = FUN_14027594a(param_1,uVar4,local_48);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)(local_48 + 2) = uVar4;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_48 + 0xc) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14027624e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14027594a FUN_14027594a body=167 status=ok
// SIG undefined FUN_14027594a(void)

void FUN_14027594a(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar5 * 0x14);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar5 * 0x14) == param_3[1])
           ) {
          uVar2 = *(undefined8 *)param_3;
          piVar1[2] = param_3[2];
          *(undefined8 *)piVar1 = uVar2;
          FUN_140875e9c(param_1,*param_4,1);
          *param_4 = iVar5;
          uVar3 = 1;
          break;
        }
        iVar5 = piVar1[3];
        uVar3 = 0;
      } while (iVar5 != -1);
      goto LAB_1402759bb;
    }
  }
  uVar3 = 0;
LAB_1402759bb:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar3;
  }
  return;
}



// FUNCTION 1402759f2 FUN_1402759f2 body=473 status=ok
// SIG undefined FUN_1402759f2(void)

int * FUN_1402759f2(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 140275bcc FUN_140275bcc body=271 status=ok
// SIG undefined FUN_140275bcc(void)

void FUN_140275bcc(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar4;
  
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
    uVar5 = lVar4 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140275cdc FUN_140275cdc body=98 status=ok
// SIG undefined FUN_140275cdc(void)

void FUN_140275cdc(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 0x18) == 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[0xb] = param_1;
    *puVar1 = &PTR_FUN_14a47cfb0;
    *(undefined8 **)(param_1 + 0x18) = puVar1;
  }
  return;
}



// FUNCTION 140275d3e FUN_140275d3e body=634 status=ok
// SIG undefined FUN_140275d3e(void)

void FUN_140275d3e(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140275da1;
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
LAB_140275da1:
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
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x14);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x10 + lVar12 * 0x14) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0xc + lVar12 * 0x14) =
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



// FUNCTION 140275fb8 FUN_140275fb8 body=662 status=ok
// SIG undefined FUN_140275fb8(void)

void FUN_140275fb8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_14027601c;
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
  } while (uVar9 != uVar2);
LAB_14027601c:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar3 = 0;
    uVar13 = 1;
    iVar14 = 0;
    iVar4 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar14 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar14 = iVar6 + -1;
      }
      uVar3 = 0;
      uVar13 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar13 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar13 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar9 = puVar12[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar7 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar14 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar14) {
      iVar14 = iVar6;
    }
  }
  if (iVar14 < iVar6) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar15 = (longlong)iVar14 * 0x40;
      uVar7 = (longlong)
              (int)~(*(uint *)(lVar8 + lVar15) ^ *(uint *)(lVar8 + 4 + lVar15) ^
                     *(uint *)(lVar8 + 8 + lVar15) ^ (uint)*(ushort *)(lVar8 + 0xc + lVar15)) &
              (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar7;
      *(int *)(lVar8 + 0x3c + lVar15) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0x38 + lVar15) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar14;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar14 = (int)uVar3;
      lVar8 = (longlong)iVar14;
      uVar2 = puVar12[lVar8] & uVar9;
      if (uVar2 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar14) {
          iVar11 = iVar14;
        }
        if (iVar10 <= iVar14) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar12[lVar8 + lVar15 + 1];
          if (uVar2 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar11 - lVar8 == lVar15) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar14 + (int)lVar15 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar2 & uVar2);
      uVar7 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar14 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar6);
  }
  return;
}



// FUNCTION 14027624e FUN_14027624e body=781 status=ok
// SIG undefined FUN_14027624e(void)

void FUN_14027624e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_1402762b4;
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
  } while (uVar9 != uVar2);
LAB_1402762b4:
  iVar16 = (int)param_1[5];
  if (iVar16 == 0) {
    uVar3 = 0;
    uVar13 = 1;
    iVar7 = 0;
    iVar4 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar7 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar7 = iVar16 + -1;
      }
      uVar3 = 0;
      uVar13 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar13 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar13 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar9 = puVar12[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar17 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar7) {
      iVar7 = iVar16;
    }
  }
  if (iVar7 < iVar16) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar14 = (longlong)iVar7;
      uVar2 = *(uint *)(lVar8 + 4 + lVar14 * 0x14);
      uVar15 = uVar2 >> 0xd ^ *(int *)(lVar8 + lVar14 * 0x14) - uVar2;
      uVar6 = uVar15 << 8 ^ (-0x61c88647 - uVar2) - uVar15;
      uVar2 = uVar6 >> 0xd ^ (uVar2 - uVar15) - uVar6;
      uVar15 = uVar2 >> 0xc ^ (uVar15 - uVar6) - uVar2;
      uVar6 = uVar15 << 0x10 ^ (uVar6 - uVar2) - uVar15;
      uVar2 = uVar6 >> 5 ^ (uVar2 - uVar15) - uVar6;
      uVar15 = uVar2 >> 3 ^ (uVar15 - uVar6) - uVar2;
      uVar6 = uVar15 << 10 ^ (uVar6 - uVar2) - uVar15;
      uVar17 = (longlong)(int)(uVar6 >> 0xf ^ uVar2 - (uVar15 + uVar6)) &
               (longlong)(int)param_1[9] - 1U;
      iVar16 = (int)uVar17;
      *(int *)(lVar8 + 0x10 + lVar14 * 0x14) = iVar16;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0xc + lVar14 * 0x14) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar17) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar16 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar16 = (int)param_1[5];
      iVar7 = (int)uVar3;
      lVar8 = (longlong)iVar7;
      uVar2 = puVar12[lVar8] & uVar9;
      if (uVar2 == 0) {
        iVar10 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar10 = iVar16 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar7) {
          iVar11 = iVar7;
        }
        if (iVar10 <= iVar7) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar12[lVar8 + lVar14 + 1];
          if (uVar2 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar11 - lVar8 == lVar14) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar7 + (int)lVar14 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar2 & uVar2);
      uVar17 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar16);
  }
  return;
}



// FUNCTION 14027655c FUN_14027655c body=477 status=ok
// SIG undefined FUN_14027655c(void)

undefined8 FUN_14027655c(longlong param_1,ulonglong *param_2,int *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  int *piVar8;
  longlong lVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_68 [40];
  ulonglong *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 8);
  uVar4 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar12 = (uint)(ushort)param_2[1] + (uVar4 >> 0x10 ^ uVar4) * 0x133 + 0x288252e3;
  iVar5 = FUN_14027673a(plVar1,iVar12,param_2);
  if (iVar5 != -1) {
    lVar9 = *plVar1;
    lVar6 = (longlong)iVar5 * 0x40;
    if (lVar9 + lVar6 != 0) goto LAB_1402765e8;
  }
  local_40 = param_2;
  FUN_1456eb4a0(plVar1,&local_34,iVar12);
  lVar9 = *plVar1;
  lVar6 = (longlong)local_34 << 6;
LAB_1402765e8:
  lVar9 = lVar9 + lVar6;
  piVar11 = (int *)(lVar9 + 0x10);
  piVar8 = *(int **)(lVar9 + 0x28);
  piVar10 = piVar8;
  if (piVar8 == (int *)0x0) {
    piVar10 = piVar11;
  }
  iVar5 = *(int *)(lVar9 + 0x30);
  lVar6 = (longlong)iVar5;
  if (lVar6 != 0) {
    lVar13 = lVar6 * 0x14;
    do {
      if (((*piVar10 == *param_3) && (piVar10[1] == param_3[1])) && (piVar10[2] == param_3[2])) {
        if (piVar10 != (int *)0x0) {
          cVar2 = (char)param_3[4];
          uVar7 = 2;
          if ((char)piVar10[4] == cVar2) goto LAB_140276647;
          *(char *)(piVar10 + 4) = cVar2;
          lVar9 = FUN_140adecae(*(undefined8 *)(param_1 + 0x58));
          uVar7 = 1;
          if (lVar9 == 0) goto LAB_140276647;
          if (cVar2 != '\0') {
            *(short *)(lVar9 + 0xe) = *(short *)(lVar9 + 0xe) + 1;
            goto LAB_1402766e5;
          }
          *(short *)(lVar9 + 0xe) = *(short *)(lVar9 + 0xe) + -1;
          goto LAB_140276647;
        }
        break;
      }
      piVar10 = piVar10 + 5;
      lVar13 = lVar13 + -0x14;
    } while (lVar13 != 0);
  }
  *(uint *)(lVar9 + 0x30) = iVar5 + 1U;
  if (*(uint *)(lVar9 + 0x34) < iVar5 + 1U) {
    FUN_14052d4a2(piVar11,iVar5);
    piVar8 = *(int **)(lVar9 + 0x28);
  }
  if (piVar8 != (int *)0x0) {
    piVar11 = piVar8;
  }
  piVar11[lVar6 * 5 + 4] = param_3[4];
  iVar5 = param_3[1];
  iVar12 = param_3[2];
  iVar3 = param_3[3];
  piVar11 = piVar11 + lVar6 * 5;
  *piVar11 = *param_3;
  piVar11[1] = iVar5;
  piVar11[2] = iVar12;
  piVar11[3] = iVar3;
  lVar9 = FUN_140adeba6(*(undefined8 *)(param_1 + 0x58),param_3);
  *(short *)(lVar9 + 0xc) = *(short *)(lVar9 + 0xc) + 1;
  uVar7 = 0;
  if ((char)param_3[4] == '\x01') {
    *(short *)(lVar9 + 0xe) = *(short *)(lVar9 + 0xe) + 1;
LAB_1402766e5:
    *(undefined1 *)(lVar9 + 0x10) = 1;
  }
LAB_140276647:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14027673a FUN_14027673a body=163 status=ok
// SIG undefined FUN_14027673a(void)

int FUN_14027673a(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      bVar2 = DAT_14c950c29;
      do {
        lVar1 = *param_3;
        if ((lVar1 != 0 & bVar2) == 1) {
          FUN_1456cec3c(lVar1);
          bVar2 = DAT_14c950c29;
        }
        plVar5 = (longlong *)(lVar4 + (longlong)iVar3 * 0x40);
        if (((*plVar5 == lVar1) && ((int)plVar5[1] == (int)param_3[1])) &&
           (*(char *)((longlong)plVar5 + 0xc) == *(char *)((longlong)param_3 + 0xc))) {
          return iVar3;
        }
        lVar4 = *param_1;
        iVar3 = *(int *)(lVar4 + 0x38 + (longlong)iVar3 * 0x40);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 1402767de FUN_1402767de body=1791 status=ok
// SIG undefined FUN_1402767de(void)

int * FUN_1402767de(longlong *param_1,int *param_2,longlong *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte bVar15;
  int iVar16;
  uint *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar22 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar22) {
      FUN_1447711aa(param_1,iVar22);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar11 = iVar12 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar18 = param_1 + 2;
    iVar16 = iVar12 + 1;
    iVar25 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar25 = iVar12;
    }
    if (iVar25 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar16;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar16 = 0x80;
          iVar11 = iVar12;
        }
        else {
          uVar24 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar20 = 4;
            if (4 < uVar24) {
              uVar20 = uVar24;
            }
          }
          else {
            uVar20 = (uVar24 * 3 >> 3) + uVar24 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar20 << 2,0);
          iVar11 = (int)(uVar14 >> 2);
          iVar16 = -0x20;
          if ((int)uVar24 <= iVar11) {
            iVar16 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar16;
        FUN_1446efbd8(plVar18,iVar11);
        iVar16 = (int)param_1[5] + 1;
      }
      iVar11 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar11 = iVar16;
      }
      *(int *)(param_1 + 5) = iVar16;
      if (iVar16 % 0x20 != 0) {
        plVar19 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar19 = plVar18;
        }
        bVar15 = -(char)(iVar16 % 0x20);
        *(uint *)((longlong)plVar19 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar11 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar13 = (longlong)iVar22;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar18 = (longlong *)param_1[4];
    }
    bVar15 = (byte)iVar12 & 0x1f;
    puVar1 = (uint *)((longlong)plVar18 + (longlong)(iVar25 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar22 = (int)param_1[6];
    lVar13 = (longlong)iVar22;
    iVar12 = *(int *)(*param_1 + 4 + lVar13 * 0x20);
    *(int *)(param_1 + 6) = iVar12;
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x20) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar24 = 1;
  puVar17 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar17 = puVar1;
  }
  iVar12 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar12 = iVar22;
  }
  puVar17[iVar12 >> 5] = puVar17[iVar12 >> 5] | 1 << ((byte)iVar22 & 0x1f);
  lVar30 = *param_1;
  lVar13 = lVar13 * 0x20;
  puVar2 = (undefined4 *)(lVar30 + lVar13);
  puVar4 = (undefined4 *)*param_3;
  puVar5 = (undefined4 *)param_3[1];
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  uVar9 = puVar4[3];
  puVar3 = (undefined4 *)(lVar30 + lVar13);
  *puVar3 = *puVar4;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  *(undefined4 *)(lVar30 + 0x10 + lVar13) = *puVar5;
  *(undefined4 *)(lVar30 + 0x18 + lVar13) = 0xffffffff;
  uVar20 = *(uint *)(lVar30 + 4 + lVar13);
  uVar23 = uVar20 >> 0xd ^ *(int *)(lVar30 + lVar13) - uVar20;
  uVar28 = uVar23 << 8 ^ (-0x61c88647 - uVar20) - uVar23;
  uVar29 = uVar28 >> 0xd ^ (uVar20 - uVar23) - uVar28;
  uVar23 = uVar29 >> 0xc ^ (uVar23 - uVar28) - uVar29;
  uVar20 = uVar23 << 0x10 ^ (uVar28 - uVar29) - uVar23;
  uVar28 = uVar20 >> 5 ^ (uVar29 - uVar23) - uVar20;
  uVar23 = uVar28 >> 3 ^ (uVar23 - uVar20) - uVar28;
  uVar20 = uVar23 << 10 ^ (uVar20 - uVar28) - uVar23;
  uVar20 = uVar20 >> 0xf ^ uVar28 - (uVar23 + uVar20);
  uVar6 = *(undefined8 *)(lVar30 + 8 + lVar13);
  uVar20 = (uVar20 >> 2) + 0x9e3779b9 +
           (int)((ulonglong)uVar6 >> 0x20) * 0x17 + (int)uVar6 + uVar20 * 0x40 ^ uVar20;
  uVar23 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar23 != 1) {
    iVar12 = FUN_1402745b4(param_1,uVar20,puVar2);
    if (iVar12 != -1) {
      lVar13 = *param_1;
      uVar7 = *puVar2;
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      *(undefined8 *)(lVar13 + 0x10 + (longlong)iVar12 * 0x20) = *(undefined8 *)(puVar2 + 4);
      puVar2 = (undefined4 *)(lVar13 + (longlong)iVar12 * 0x20);
      *puVar2 = uVar7;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      FUN_140cc1850(param_1,iVar22);
      iVar22 = iVar12;
      goto LAB_140276cba;
    }
    if (3 < uVar23) {
      uVar14 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar24 = 1 << ((byte)lVar13 & 0x1f);
    }
  }
  if (((int)uVar23 < 1) || ((int)uVar24 <= (int)param_1[9])) {
    uVar20 = (int)param_1[9] - 1U & uVar20;
    puVar2[7] = uVar20;
    plVar18 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar18 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)
                 ((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar20) * 4);
    plVar18 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar18 = param_1 + 7;
    }
    *(int *)((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar20) * 4) =
         iVar22;
    goto LAB_140276cba;
  }
  *(uint *)(param_1 + 9) = uVar24;
  plVar18 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar18,0,0,4);
    uVar24 = *(uint *)(param_1 + 9);
  }
  plVar19 = param_1 + 7;
  if (uVar24 == 1) {
    if (*plVar18 != 0) {
      FUN_1446efa72(plVar18,0,0,4);
    }
LAB_1402769ed:
    uVar20 = 0;
    do {
      plVar18 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar18 = plVar19;
      }
      *(undefined4 *)((longlong)plVar18 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar20) * 4) =
           0xffffffff;
      uVar20 = uVar20 + 1;
    } while (uVar24 != uVar20);
  }
  else {
    if (uVar24 == 0) goto LAB_140276cba;
    FUN_1446efa72(plVar18,0,uVar24,4);
    if (0 < (int)uVar24) goto LAB_1402769ed;
  }
  iVar12 = (int)param_1[5];
  if (iVar12 == 0) {
    uVar14 = 0;
    uVar27 = 1;
    iVar11 = 0;
    iVar16 = 0;
  }
  else {
    puVar17 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar17 = puVar1;
    }
    uVar24 = *puVar17;
    if (uVar24 == 0) {
      iVar11 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar11 = iVar12 + -1;
      }
      uVar14 = 0;
      uVar27 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar27 = uVar14;
      }
      iVar16 = 0;
      do {
        if (uVar27 == uVar14) goto LAB_140276cba;
        iVar16 = iVar16 + 0x20;
        uVar24 = puVar17[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar24 == 0);
    }
    else {
      uVar14 = 0;
      iVar16 = 0;
    }
    uVar27 = (ulonglong)(-uVar24 & uVar24);
    uVar21 = uVar27 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar11) {
      iVar11 = iVar12;
    }
  }
  if (iVar11 < iVar12) {
    uVar24 = 0xffffffff;
    do {
      lVar13 = *param_1;
      lVar30 = (longlong)iVar11 * 0x20;
      uVar20 = *(uint *)(lVar13 + 4 + lVar30);
      uVar23 = uVar20 >> 0xd ^ *(int *)(lVar13 + lVar30) - uVar20;
      uVar28 = uVar23 << 8 ^ (-0x61c88647 - uVar20) - uVar23;
      uVar20 = uVar28 >> 0xd ^ (uVar20 - uVar23) - uVar28;
      uVar29 = uVar20 >> 0xc ^ (uVar23 - uVar28) - uVar20;
      uVar28 = uVar29 << 0x10 ^ (uVar28 - uVar20) - uVar29;
      uVar23 = uVar28 >> 5 ^ (uVar20 - uVar29) - uVar28;
      uVar20 = uVar23 >> 3 ^ (uVar29 - uVar28) - uVar23;
      uVar28 = uVar20 << 10 ^ (uVar28 - uVar23) - uVar20;
      uVar20 = uVar28 >> 0xf ^ uVar23 - (uVar20 + uVar28);
      uVar6 = *(undefined8 *)(lVar13 + 8 + lVar30);
      uVar21 = (longlong)
               (int)((uVar20 >> 2) + 0x9e3779b9 +
                     (int)((ulonglong)uVar6 >> 0x20) * 0x17 + (int)uVar6 + uVar20 * 0x40 ^ uVar20) &
               (longlong)(int)param_1[9] - 1U;
      iVar12 = (int)uVar21;
      *(int *)(lVar13 + 0x1c + lVar30) = iVar12;
      plVar18 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar18 = plVar19;
      }
      *(undefined4 *)(lVar13 + 0x18 + lVar30) =
           *(undefined4 *)((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & uVar21) * 4);
      plVar18 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar18 = plVar19;
      }
      *(int *)((longlong)plVar18 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
      ;
      uVar24 = ~(uint)uVar27 & uVar24;
      puVar17 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar17 = puVar1;
      }
      iVar12 = (int)param_1[5];
      iVar11 = (int)uVar14;
      lVar13 = (longlong)iVar11;
      uVar20 = puVar17[lVar13] & uVar24;
      if (uVar20 == 0) {
        iVar25 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar25 = iVar12 + -1;
        }
        iVar25 = iVar25 >> 5;
        iVar26 = iVar25;
        if (iVar25 < iVar11) {
          iVar26 = iVar11;
        }
        if (iVar25 <= iVar11) break;
        lVar30 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar20 = puVar17[lVar13 + lVar30 + 1];
          if (uVar20 != 0) break;
          lVar30 = lVar30 + 1;
          if (iVar26 - lVar13 == lVar30) goto LAB_140276cba;
        }
        uVar14 = (ulonglong)(iVar11 + (int)lVar30 + 1);
        uVar24 = 0xffffffff;
      }
      uVar27 = (ulonglong)(-uVar20 & uVar20);
      uVar21 = uVar27 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = (iVar16 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar12);
  }
LAB_140276cba:
  *param_2 = iVar22;
  return param_2;
}



// FUNCTION 140276ede FUN_140276ede body=233 status=ok
// SIG undefined FUN_140276ede(void)

void FUN_140276ede(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x60;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x60);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x60,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140276fc8 FUN_140276fc8 body=142 status=ok
// SIG undefined FUN_140276fc8(void)

void FUN_140276fc8(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 140277056 FUN_140277056 body=179 status=ok
// SIG undefined FUN_140277056(void)

float * FUN_140277056(float *param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  dVar1 = *(double *)(param_2 + 0x830);
  fVar5 = (float)FUN_140277109();
  fVar5 = fVar5 * (float)dVar1;
  iVar2 = *(int *)(DAT_14ca2f848 + 4);
  fVar6 = 0.0;
  if (0.0 <= (float)*(int *)(DAT_14ca2f890 + 4)) {
    fVar6 = (float)*(int *)(DAT_14ca2f890 + 4);
  }
  *param_1 = (fVar5 / 3.0) * 0.5;
  param_1[1] = fVar5;
  param_1[2] = (float)iVar2;
  param_1[3] = fVar6;
  lVar4 = FUN_1447e4f80();
  cVar3 = *(char *)(lVar4 + 0x41);
  if (*(char *)(lVar4 + 0x41) == '\x03') {
    cVar3 = '\x02';
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x18);
  *(char *)(param_1 + 10) = cVar3;
  lVar4 = FUN_14482e3b2();
  cVar3 = *(char *)(lVar4 + 0x41);
  if (cVar3 == '\x03') {
    cVar3 = '\x02';
  }
  *(undefined8 *)(param_1 + 4) = param_3;
  *(char *)(param_1 + 6) = cVar3;
  return param_1;
}



// FUNCTION 140277109 FUN_140277109 body=162 status=ok
// SIG undefined FUN_140277109(void)

float FUN_140277109(void)

{
  longlong *plVar1;
  float fVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2f8b8) {
    FUN_144b3d300(&DAT_14ca2f8b8);
    if (DAT_14ca2f8b8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar1 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SSS.Scale",1);
      if (plVar1 == (longlong *)0x0) {
        DAT_14ca2f8b0 = 0;
      }
      else {
        DAT_14ca2f8b0 = (**(code **)(*plVar1 + 0x70))(plVar1);
      }
      _Init_thread_footer(&DAT_14ca2f8b8);
    }
  }
  fVar2 = 0.0;
  if (0.0 <= *(float *)(DAT_14ca2f8b0 + 4)) {
    fVar2 = *(float *)(DAT_14ca2f8b0 + 4);
  }
  return fVar2;
}



// FUNCTION 1402771ac FUN_1402771ac body=360 status=ok
// SIG undefined FUN_1402771ac(void)

void FUN_1402771ac(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar2 < 2) {
    uVar7 = 1;
  }
  else {
    if (*(uint *)(param_1 + 0x14) < 2) {
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14027723a;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_14027723a:
    uVar7 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar5 >> 3)) {
      uVar7 = uVar5 >> 3 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x14) = (int)uVar7;
  FUN_140277314(param_1,param_2,uVar7,8);
  return;
}



// FUNCTION 140277314 FUN_140277314 body=133 status=ok
// SIG undefined FUN_140277314(void)

void FUN_140277314(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 14027739a FUN_14027739a body=84 status=ok
// SIG undefined FUN_14027739a(void)

void FUN_14027739a(undefined8 param_1,int param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_1;
  if (param_2 == 0) {
    FUN_1402773f0(&local_10);
  }
  else if (param_2 == 1) {
    FUN_147d6867e(&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402773f0 FUN_1402773f0 body=890 status=ok
// SIG undefined FUN_1402773f0(void)

void FUN_1402773f0(code *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  undefined4 local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined8 local_90;
  longlong local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined8 uStack_70;
  code *local_60;
  code **local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1400021e4(param_1,&local_78);
  FUN_1400b22c2(&local_88,"/Script/");
  FUN_1401c7f3e(&local_60,&local_88,&local_78);
  pcVar7 = local_60;
  if ((int)local_58 == 0) {
    pcVar7 = (code *)&DAT_149dfb77a;
  }
  lVar4 = FUN_140277851(0,pcVar7);
  if (local_60 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (lVar4 != 0) {
    local_78 = (code *)0x0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_60 = FUN_14284083c;
    local_d8 = (wchar_t *)((ulonglong)local_d8 & 0xffffffff00000000);
    local_58 = &local_50;
    local_50 = (code *)&local_88;
    FUN_144a56f9f(lVar4,&local_60,0,0);
    lVar4 = local_88;
    lVar9 = (longlong)(int)uStack_80;
    if (lVar9 != 0) {
      lVar8 = 0;
      do {
        lVar1 = *(longlong *)(lVar4 + lVar8);
        if (lVar1 != 0) {
          if (DAT_14c949118 == 0) {
            local_50 = FUN_140631fbe;
            lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c949118 = lVar5;
            FUN_1446f470e(&local_60,L"Class",1);
            local_a8 = &LAB_146891e90;
            local_b0 = &LAB_146273097;
            local_c0 = L"Engine";
            local_b8 = 199;
            local_c8 = 0x20;
            local_d0 = 0x10000000;
            local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,8);
            local_a0 = &local_50;
            FUN_14574b4b2(lVar5);
            DAT_14c949118 = lVar5;
            local_90 = FUN_144a7a812();
            lVar5 = DAT_14c949118;
            uVar6 = FUN_1449e2fb2();
            local_d8 = L"Class";
            FUN_14574b446(uVar6,lVar5,local_90,L"/Script/CoreUObject");
          }
          if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
              ((*(byte *)(lVar1 + 0xd4) & 1) == 0)) &&
             (((lVar5 = FUN_14027776c(), lVar5 != 0 &&
               (*(int *)(lVar5 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
              (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
               lVar5 + 0x30)))) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar1);
            }
            uVar2 = uStack_70;
            lVar5 = (longlong)(int)uStack_70;
            uVar3 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
            if (uStack_70._4_4_ < uVar3) {
              FUN_145a2d622(&local_78,uVar2 & 0xffffffff);
            }
            *(longlong *)(local_78 + lVar5 * 8) = lVar1;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar1);
            }
            FUN_147d6857a(lVar1);
          }
        }
        lVar8 = lVar8 + 8;
      } while (lVar9 * 8 != lVar8);
      if (0 < (int)uStack_70) {
        local_60 = param_1;
        local_58 = &local_78;
        FUN_147d6c52a(&local_50);
      }
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14027776c FUN_14027776c body=228 status=ok
// SIG undefined FUN_14027776c(void)

longlong FUN_14027776c(void)

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
  if (DAT_14cb0ad30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146406b72;
    local_38 = &LAB_147d67b37;
    local_40 = FUN_146406c43;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"DynamicSubsystem",&DAT_14cb0ad30,&DAT_147d67b36);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0ad30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140277851 FUN_140277851 body=736 status=ok
// SIG undefined FUN_140277851(void)

undefined8 FUN_140277851(undefined8 param_1,wchar_t *param_2)

{
  undefined2 *puVar1;
  size_t sVar2;
  undefined8 uVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined8 local_4a0;
  wchar_t *local_498;
  code *local_490;
  undefined1 *local_488;
  code **local_480;
  code *local_478;
  code *local_470;
  undefined8 local_460;
  code *local_458;
  undefined2 *local_450;
  undefined2 *local_448;
  ulonglong *local_440;
  char local_438;
  undefined2 local_430 [512];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  local_450 = local_430;
  local_438 = '\0';
  local_440 = &local_30;
  local_460 = param_1;
  local_448 = local_450;
  if (param_2 == (wchar_t *)0x0) {
    uVar3 = FUN_144a7a812();
    local_4b8 = 0;
    FUN_140af9fb2(&local_458,param_1,uVar3,0);
    local_448 = local_450;
    FUN_14005eb5c(&local_458);
  }
  else {
    sVar2 = wcslen(param_2);
    iVar7 = (int)sVar2;
    if (0x1ffffffffff < (longlong)(sVar2 << 0x20)) {
      FUN_140213274(&local_450,(longlong)iVar7);
    }
    puVar1 = local_448;
    if (iVar7 != 0) {
      memcpy(local_448,param_2,(longlong)(sVar2 << 0x20) >> 0x1f);
      local_448 = puVar1 + iVar7;
    }
  }
  local_4b0 = 0;
  local_4b8 = 0;
  FUN_144922754(&local_460,&local_450,1,0);
  puVar1 = local_450;
  uVar3 = local_460;
  uVar8 = (ulonglong)((longlong)local_448 - (longlong)local_450) >> 1;
  iVar7 = (int)uVar8;
  if (iVar7 != 0) {
    if ((uVar8 & 0xffffffff) != 0) {
      lVar9 = 0;
      lVar10 = (longlong)iVar7;
      while( true ) {
        uVar6 = *(ushort *)((longlong)local_450 + lVar9);
        uVar8 = (ulonglong)uVar6;
        uVar4 = *(ushort *)((longlong)&DAT_149e01fe8 + lVar9);
        if (uVar6 != uVar4) break;
        if (uVar6 == 0) goto LAB_140277994;
LAB_140277969:
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) goto LAB_140277994;
        lVar9 = lVar9 + 2;
      }
      if ((uVar4 | uVar6) < 0x80) {
        uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar5 = (ulonglong)uVar4;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar5]) goto LAB_140277969;
      }
      if (uVar6 != uVar4) goto LAB_1402779a6;
    }
LAB_140277994:
    if ((&DAT_149e01fe8)[iVar7] == 0) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x3e9,
                    L"Attempted to find a package named \'None\' - InName: %s",param_2);
      uVar3 = 0;
      goto LAB_1402779d5;
    }
  }
LAB_1402779a6:
  *local_448 = 0;
  if (DAT_14c951858 == 0) {
    local_480 = &local_458;
    local_458 = FUN_1449e2820;
    local_470 = FUN_14081d0ea;
    local_478 = FUN_14081d0ea;
    local_488 = &LAB_1468c5283;
    local_490 = FUN_142809da0;
    local_498 = L"Engine";
    local_4a0 = 0x400000000;
    local_4a8 = 0x10000000;
    local_4b0 = CONCAT44(local_4b0._4_4_,8);
    local_4b8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  uVar3 = FUN_140277b32(DAT_14c951858,uVar3,puVar1,0);
LAB_1402779d5:
  if (local_438 == '\x01') {
    FUN_1400020a8(local_450);
  }
  if ((local_30 ^ (ulonglong)auStack_4d8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140277b32 FUN_140277b32 body=401 status=ok
// SIG undefined FUN_140277b32(void)

undefined8 FUN_140277b32(undefined8 param_1,longlong param_2,wchar_t *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  size_t sVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_4a8 [32];
  undefined4 local_488;
  ulonglong local_480;
  undefined4 local_478;
  longlong local_470;
  undefined8 local_468;
  undefined1 *local_460;
  undefined1 *local_458;
  ulonglong *local_450;
  char local_448;
  undefined1 local_440 [1024];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  local_470 = 0;
  if (param_2 != -1) {
    local_470 = param_2;
  }
  local_448 = '\0';
  local_450 = &local_40;
  local_460 = local_440;
  local_458 = local_440;
  if (param_3 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_3);
    iVar5 = (int)sVar3;
    if (iVar5 < 0x200) {
      if (iVar5 == 0) goto LAB_140277bd5;
    }
    else {
      FUN_140213274(&local_460,(longlong)iVar5);
    }
    puVar1 = local_458;
    memcpy(local_458,param_3,(longlong)(sVar3 << 0x20) >> 0x1f);
    local_458 = puVar1 + (longlong)iVar5 * 2;
  }
LAB_140277bd5:
  if (param_2 == -1) {
    FUN_146900bf9(&local_460,0);
    lVar6 = 0;
  }
  else {
    local_480 = 0;
    local_488 = 0;
    uVar4 = 0;
    cVar2 = FUN_144922754(&local_470,&local_460,0,0);
    lVar6 = local_470;
    if (cVar2 == '\0') goto LAB_140277c68;
  }
  FUN_1446f82e2(&local_468,(ulonglong)((longlong)local_458 - (longlong)local_460) >> 1,local_460,1);
  local_478 = 0;
  local_480 = local_480 & 0xffffffff00000000;
  local_488 = CONCAT31(local_488._1_3_,param_2 == -1);
  uVar4 = FUN_14486e220(param_1,lVar6,local_468,param_4);
LAB_140277c68:
  if (local_448 == '\x01') {
    FUN_1400020a8(local_460);
  }
  if ((local_40 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140277cc4 FUN_140277cc4 body=4709 status=ok
// SIG undefined FUN_140277cc4(void)

PRTL_CRITICAL_SECTION_DEBUG
FUN_140277cc4(_LIST_ENTRY *param_1,wchar_t *param_2,uint param_3,undefined4 param_4,wchar_t *param_5
             )

{
  ulonglong uVar1;
  longlong *plVar2;
  _LIST_ENTRY *p_Var3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  wchar_t *pwVar10;
  _LIST_ENTRY *p_Var11;
  undefined7 uVar17;
  LPCRITICAL_SECTION p_Var12;
  _LIST_ENTRY *p_Var13;
  size_t sVar14;
  longlong lVar15;
  undefined8 uVar16;
  _LIST_ENTRY *p_Var18;
  longlong lVar19;
  undefined *puVar20;
  uint *puVar21;
  longlong lVar22;
  longlong lVar23;
  LPCRITICAL_SECTION p_Var24;
  longlong *plVar25;
  ulonglong uVar26;
  uint *puVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  uint *puVar31;
  longlong *plVar32;
  ulonglong uVar33;
  char cVar34;
  ulonglong uVar35;
  undefined4 uVar36;
  PRTL_CRITICAL_SECTION_DEBUG p_Var37;
  PRTL_CRITICAL_SECTION_DEBUG p_Var38;
  bool bVar39;
  undefined1 auStack_528 [32];
  _LIST_ENTRY *local_508;
  char local_4f9;
  ulonglong local_4f8;
  _LIST_ENTRY *local_4f0;
  uint local_4e8;
  uint local_4e4;
  longlong *local_4e0;
  longlong *local_4d8;
  uint *local_4d0;
  LPCRITICAL_SECTION local_4c8;
  _LIST_ENTRY *local_4c0;
  _LIST_ENTRY *local_4b8;
  longlong local_4b0;
  undefined4 local_4a4;
  longlong local_4a0;
  wchar_t *local_498;
  ulonglong local_490;
  longlong local_488;
  undefined8 uStack_480;
  _LIST_ENTRY *local_478;
  undefined8 uStack_470;
  _LIST_ENTRY *local_468;
  _LIST_ENTRY *local_460;
  wchar_t *local_458;
  char local_450;
  _LIST_ENTRY local_448 [2];
  _LIST_ENTRY *local_420;
  wchar_t local_3ee [211];
  wchar_t local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_528;
  local_4f0 = param_1;
  pwVar10 = wcschr(param_2,L'\'');
  if (pwVar10 == (wchar_t *)0x0) {
    FUN_1446f470e(&local_468,param_2,1);
    p_Var18 = local_468;
  }
  else {
    local_450 = '\0';
    local_458 = (wchar_t *)&local_48;
    local_468 = local_448;
    if (param_2 == (wchar_t *)0x0) {
      sVar14 = 0;
    }
    else {
      sVar14 = wcslen(param_2);
    }
    local_460 = local_448;
    FUN_1449668a2(&local_468,param_2,sVar14);
    FUN_146900bf9(&local_468,0);
    FUN_1446f82e2(&local_478,(ulonglong)((longlong)local_460 - (longlong)local_468) >> 1);
    p_Var18 = local_478;
    if (local_450 == '\x01') {
      FUN_1400020a8(local_468);
    }
  }
  if ((param_3 & 0xc) == 0 && (char)param_4 == '\0') {
    FUN_1449232c8(&local_468,p_Var18);
    p_Var18 = local_468;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
      FUN_145794a58(&DAT_14c964408);
      atexit((_func_5014 *)&LAB_142840318);
      _Init_thread_footer(&DAT_14c964670);
    }
    if ((DAT_14c949800 & 1) == 0) {
LAB_14027809d:
      p_Var24 = (LPCRITICAL_SECTION)&DAT_14c964408;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
      bVar39 = false;
    }
    else {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar30 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar30 != 2)) {
        if (iVar30 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_140278b23;
        }
        goto LAB_14027809d;
      }
LAB_140278b23:
      bVar39 = true;
      p_Var24 = (LPCRITICAL_SECTION)0x0;
    }
    if (DAT_14c964438 == DAT_14c964464) {
LAB_1402780c3:
      p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    }
    else {
      uVar4 = (uint)((ulonglong)p_Var18 >> 0x10);
      uVar5 = (uint)p_Var18 & 0xffff;
      uVar4 = (uVar5 >> 4) +
              ((uint)p_Var18 << 0x10 | uVar5) + (int)((ulonglong)p_Var18 >> 0x20) +
              (uVar4 << 0x13 | uVar4 & 0xffff);
      puVar20 = &DAT_14c964468;
      if (DAT_14c964470 != (undefined *)0x0) {
        puVar20 = DAT_14c964470;
      }
      iVar30 = *(int *)(puVar20 + (ulonglong)(DAT_14c964478 - 1U & uVar4) * 4);
      if (iVar30 == -1) goto LAB_1402780c3;
      p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      do {
        lVar23 = DAT_14c964430 + (longlong)iVar30 * 0x20;
        if (*(uint *)(DAT_14c964430 + (longlong)iVar30 * 0x20) == uVar4) {
          local_4b0 = lVar23 + 8;
          if (local_4b0 == 0 || lVar23 == 0) goto LAB_1402780c3;
          lVar15 = *(longlong *)(lVar23 + 8);
          plVar2 = *(longlong **)(lVar23 + 0x10);
          local_4f8 = 0;
          if (lVar15 == 0 && plVar2 != (longlong *)0x0) {
            puVar31 = (uint *)(plVar2 + 2);
            uVar4 = *(uint *)(plVar2 + 5);
            uVar26 = 1;
            plVar25 = plVar2;
            if (uVar4 == 0) {
              uVar4 = 0;
              plVar32 = (longlong *)0x0;
              goto LAB_140278691;
            }
            puVar27 = (uint *)plVar2[4];
            if ((uint *)plVar2[4] == (uint *)0x0) {
              puVar27 = puVar31;
            }
            uVar28 = *puVar27;
            if (uVar28 != 0) {
              plVar32 = (longlong *)0x0;
              uVar5 = 0;
              goto LAB_140278650;
            }
            iVar30 = uVar4 + 0x1e;
            if (-1 < (int)(uVar4 - 1)) {
              iVar30 = uVar4 - 1;
            }
            uVar35 = 0;
            uVar33 = (ulonglong)(uint)(iVar30 >> 5);
            if (iVar30 >> 5 < 1) {
              uVar33 = uVar35;
            }
            plVar32 = (longlong *)(ulonglong)((int)uVar33 + 1);
            local_4f8 = (ulonglong)((int)uVar33 * 0x20 + 0x20);
            uVar5 = 0;
            goto LAB_140278633;
          }
          uVar26 = 1;
          if (DAT_14c964348 == 0) {
            puVar31 = &DAT_14c964330;
            uVar4 = 0;
            plVar32 = (longlong *)0x0;
            plVar25 = &DAT_14c964320;
            goto LAB_140278691;
          }
          puVar31 = &DAT_14c964330;
          puVar27 = DAT_14c964340;
          if (DAT_14c964340 == (uint *)0x0) {
            puVar27 = &DAT_14c964330;
          }
          uVar4 = *puVar27;
          if (uVar4 != 0) {
            plVar32 = (longlong *)0x0;
            uVar5 = 0;
            goto LAB_140278565;
          }
          iVar30 = DAT_14c964348 + 0x1e;
          if (-1 < (int)(DAT_14c964348 - 1)) {
            iVar30 = DAT_14c964348 - 1;
          }
          uVar35 = 0;
          uVar33 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar33 = uVar35;
          }
          plVar32 = (longlong *)(ulonglong)((int)uVar33 + 1);
          local_4f8 = (ulonglong)((int)uVar33 * 0x20 + 0x20);
          uVar5 = 0;
          goto LAB_140278548;
        }
        iVar30 = *(int *)(lVar23 + 0x18);
      } while (iVar30 != -1);
    }
LAB_1402780c6:
    p_Var18 = local_420;
    if (!bVar39) {
      LeaveCriticalSection(p_Var24);
      p_Var18 = local_420;
    }
    goto LAB_140277e34;
  }
  local_478 = (_LIST_ENTRY *)0x0;
  uStack_470 = 0;
  if ((DAT_14c949800 & 1) != 0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x29d,
                  L"Illegal call to StaticFindAllObjectsFast() while serializing object data or garbage collecting!"
                 );
  }
  uVar4 = FUN_14482ca40();
  FUN_1449232c8(&local_468,p_Var18);
  p_Var13 = local_468;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
    FUN_145794a58(&DAT_14c964408);
    atexit((_func_5014 *)&LAB_142840318);
    _Init_thread_footer(&DAT_14c964670);
  }
  if ((DAT_14c949800 & 1) == 0) {
LAB_140277ddd:
    p_Var24 = (LPCRITICAL_SECTION)&DAT_14c964408;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
    uVar36 = 0;
  }
  else {
    uVar36 = (undefined4)CONCAT71((int7)((ulonglong)p_Var18 >> 8),1);
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar30 = *(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         ), iVar30 != 2)) {
      if (iVar30 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        uVar36 = (undefined4)CONCAT71((uint7)(uint3)(DVar8 >> 8),1);
        if (DVar8 == DVar9) goto LAB_140278ad9;
      }
      goto LAB_140277ddd;
    }
LAB_140278ad9:
    p_Var24 = (LPCRITICAL_SECTION)0x0;
  }
  if (DAT_14c964438 == DAT_14c964464) {
LAB_140277dfe:
    bVar39 = false;
  }
  else {
    uVar5 = (uint)((ulonglong)p_Var13 >> 0x10);
    uVar28 = (uint)p_Var13 & 0xffff;
    uVar5 = (uVar28 >> 4) +
            ((uint)p_Var13 << 0x10 | uVar28) + (int)((ulonglong)p_Var13 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff);
    puVar20 = &DAT_14c964468;
    if (DAT_14c964470 != (undefined *)0x0) {
      puVar20 = DAT_14c964470;
    }
    iVar30 = *(int *)(puVar20 + (ulonglong)(DAT_14c964478 - 1U & uVar5) * 4);
    if (iVar30 == -1) goto LAB_140277dfe;
    do {
      lVar23 = DAT_14c964430 + (longlong)iVar30 * 0x20;
      local_4c8 = p_Var24;
      if (*(uint *)(DAT_14c964430 + (longlong)iVar30 * 0x20) == uVar5) {
        local_4b0 = lVar23 + 8;
        if (local_4b0 != 0 && lVar23 != 0) {
          lVar15 = *(longlong *)(lVar23 + 8);
          plVar2 = *(longlong **)(lVar23 + 0x10);
          puVar31 = (uint *)0x0;
          if (lVar15 == 0 && plVar2 != (longlong *)0x0) {
            puVar27 = (uint *)(plVar2 + 2);
            uVar5 = *(uint *)(plVar2 + 5);
            uVar26 = 1;
            plVar25 = plVar2;
            if (uVar5 == 0) {
              uVar5 = 0;
              uVar33 = 0;
              goto LAB_140278217;
            }
            puVar31 = (uint *)plVar2[4];
            if ((uint *)plVar2[4] == (uint *)0x0) {
              puVar31 = puVar27;
            }
            uVar28 = *puVar31;
            if (uVar28 != 0) {
              uVar33 = 0;
              uVar29 = 0;
              goto LAB_1402781e1;
            }
            iVar30 = uVar5 + 0x1e;
            if (-1 < (int)(uVar5 - 1)) {
              iVar30 = uVar5 - 1;
            }
            uVar33 = 0;
            uVar26 = (ulonglong)(uint)(iVar30 >> 5);
            if (iVar30 >> 5 < 1) {
              uVar26 = uVar33;
            }
            iVar30 = (int)uVar26;
            uVar29 = 0;
            goto LAB_1402781c4;
          }
          uVar26 = 1;
          if (DAT_14c964348 == 0) {
            puVar27 = &DAT_14c964330;
            uVar5 = 0;
            uVar33 = 0;
            puVar31 = (uint *)0x0;
            plVar25 = &DAT_14c964320;
            goto LAB_140278217;
          }
          puVar27 = &DAT_14c964330;
          puVar31 = DAT_14c964340;
          if (DAT_14c964340 == (uint *)0x0) {
            puVar31 = &DAT_14c964330;
          }
          uVar5 = *puVar31;
          if (uVar5 != 0) {
            uVar33 = 0;
            uVar28 = 0;
            goto LAB_140277fe1;
          }
          iVar30 = DAT_14c964348 + 0x1e;
          if (-1 < (int)(DAT_14c964348 - 1)) {
            iVar30 = DAT_14c964348 - 1;
          }
          uVar33 = 0;
          uVar26 = (ulonglong)(uint)(iVar30 >> 5);
          if (iVar30 >> 5 < 1) {
            uVar26 = uVar33;
          }
          iVar30 = (int)uVar26;
          uVar28 = 0;
          goto LAB_140277fc4;
        }
        break;
      }
      iVar30 = *(int *)(lVar23 + 0x18);
    } while (iVar30 != -1);
    bVar39 = false;
  }
LAB_140277e00:
  if ((char)uVar36 == '\0') {
    LeaveCriticalSection(p_Var24);
  }
  if (local_420 != (_LIST_ENTRY *)0x0) {
    FUN_1400020a8();
  }
  p_Var18 = local_478;
  if (!bVar39) {
    p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    goto LAB_140277e34;
  }
  uVar26 = uStack_470 & 0xffffffff;
  if ((int)uStack_470 < 2) {
    p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)local_478->Flink;
    goto LAB_140277e34;
  }
  if ((param_3 & 4) == 0) {
LAB_140278b4f:
    p_Var37 = (PRTL_CRITICAL_SECTION_DEBUG)local_478->Flink;
  }
  else {
    lVar23 = 0;
    p_Var38 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    do {
      p_Var37 = *(PRTL_CRITICAL_SECTION_DEBUG *)((longlong)&p_Var18->Flink + lVar23);
      if (p_Var37 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        lVar15 = FUN_1400163b0();
        p_Var13 = (p_Var37->ProcessLocksList).Flink;
        if ((*(int *)&p_Var13[3].Blink < *(int *)(lVar15 + 0x38)) ||
           ((&(p_Var13[3].Flink)->Flink)[*(int *)(lVar15 + 0x38)] != (_LIST_ENTRY *)(lVar15 + 0x30))
           ) {
          if ((p_Var38 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) &&
             (lVar15 = FUN_144a79778(), p_Var38 = p_Var37, (*(byte *)(lVar15 + 0x2c) & 0x10) == 0))
          {
            p_Var38 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
          }
        }
        else {
          lVar15 = FUN_144a79778(p_Var37);
          if ((*(byte *)(lVar15 + 0x2c) & 0x10) != 0) goto LAB_140278b52;
        }
      }
      lVar23 = lVar23 + 8;
    } while (uVar26 << 3 != lVar23);
    p_Var37 = p_Var38;
    if (p_Var38 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) goto LAB_140278b4f;
  }
LAB_140278b52:
  cVar34 = (char)param_4;
  p_Var18 = local_478;
  if (cVar34 != '\0' || (param_3 & 8) != 0) {
    local_468 = local_448;
    local_450 = '\0';
    local_458 = local_248;
    memcpy(local_468,L"StaticFindFirstObject: Ambiguous object name ",0x5a);
    local_460 = (_LIST_ENTRY *)local_3ee;
    if (param_2 == (wchar_t *)0x0) {
      sVar14 = 0;
    }
    else {
      sVar14 = wcslen(param_2);
    }
    FUN_1449668a2(&local_468,param_2,sVar14);
    if (param_5 != (wchar_t *)0x0) {
      if (local_458 <= (wchar_t *)((longlong)local_460 + 0xe)) {
        FUN_140213274(&local_468,7);
      }
      builtin_wcsncpy((wchar_t *)local_460,L" while ",7);
      local_460 = (_LIST_ENTRY *)((longlong)local_460 + 0xe);
      sVar14 = wcslen(param_5);
      FUN_1449668a2(&local_468,param_5,sVar14 & 0xffffffff);
    }
    if (local_458 <= (wchar_t *)((longlong)local_460 + 0x1c)) {
      FUN_140213274(&local_468,0xe);
    }
    builtin_wcsncpy((wchar_t *)local_460,L", will return ",0xe);
    local_460 = (_LIST_ENTRY *)((longlong)local_460 + 0x1c);
    local_488 = 0;
    uStack_480 = 0;
    FUN_1401031ac(p_Var37,0,&local_488);
    iVar30 = (int)uStack_480 + -1;
    if ((int)uStack_480 == 0) {
      iVar30 = 0;
    }
    FUN_1449668a2(&local_468,local_488,iVar30);
    if (local_488 != 0) {
      FUN_1400020a8();
    }
    if (local_458 <= (wchar_t *)((longlong)local_460 + 0x28)) {
      FUN_140213274(&local_468);
    }
    builtin_wcsncpy((wchar_t *)local_460,L" but could also be: ",0x14);
    local_460 = (_LIST_ENTRY *)((longlong)local_460 + 0x28);
    if (0 < (longlong)(int)uStack_470) {
      lVar23 = 0;
      do {
        if ((PRTL_CRITICAL_SECTION_DEBUG)(&local_478->Flink)[lVar23] != p_Var37) {
          local_488 = 0;
          uStack_480 = 0;
          FUN_1401031ac((PRTL_CRITICAL_SECTION_DEBUG)(&local_478->Flink)[lVar23],0,&local_488);
          iVar30 = (int)uStack_480 + -1;
          if ((int)uStack_480 == 0) {
            iVar30 = 0;
          }
          FUN_1449668a2(&local_468,local_488,iVar30);
          if (local_488 != 0) {
            FUN_1400020a8();
          }
          break;
        }
        lVar23 = lVar23 + 1;
      } while ((int)uStack_470 != lVar23);
      if (2 < (int)uStack_470) {
        FUN_140212e80(&local_468,L" or %d other object(s)",(int)uStack_470 + -2);
      }
    }
    if (cVar34 == '\x01') {
      *(wchar_t *)&local_460->Flink = L'\0';
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x331,&DAT_149e0625e
                    ,local_468);
    }
    else if (cVar34 != '\0') {
      uVar16 = FUN_144a82cde();
      p_Var18 = local_468;
      *(wchar_t *)&local_460->Flink = L'\0';
      FUN_1446f470e(&local_488,L"LogUObjectGlobals",1);
      local_508 = p_Var18;
      FUN_145bf7c2e(uVar16,&local_488,param_4,&DAT_149e0625e);
    }
    p_Var18 = local_478;
    if (local_450 == '\x01') {
      FUN_1400020a8(local_468);
      p_Var18 = local_478;
    }
  }
LAB_140277e34:
  if (p_Var18 != (_LIST_ENTRY *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_528) == DAT_14c707940) {
    return p_Var37;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    uVar5 = uVar5 + 0x20;
    uVar4 = puVar27[uVar35 + 1];
    uVar35 = uVar35 + 1;
    if (uVar4 != 0) break;
LAB_140278548:
    if (uVar33 == uVar35) {
      plVar25 = &DAT_14c964320;
      uVar4 = DAT_14c964348;
      goto LAB_140278691;
    }
  }
  plVar32 = (longlong *)(uVar35 & 0xffffffff);
LAB_140278565:
  uVar26 = (ulonglong)(-uVar4 & uVar4);
  uVar33 = uVar26 * 2 + 1;
  lVar19 = 0x3f;
  if (uVar33 != 0) {
    for (; uVar33 >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
  }
  uVar28 = (uVar5 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
  if ((int)DAT_14c964348 <= (int)uVar28) {
    uVar28 = DAT_14c964348;
  }
  plVar25 = &DAT_14c964320;
  goto LAB_14027868e;
  while( true ) {
    uVar5 = uVar5 + 0x20;
    uVar28 = puVar27[uVar35 + 1];
    uVar35 = uVar35 + 1;
    if (uVar28 != 0) break;
LAB_140278633:
    local_4d8 = plVar32;
    if (uVar33 == uVar35) goto LAB_140278691;
  }
  plVar32 = (longlong *)(uVar35 & 0xffffffff);
LAB_140278650:
  uVar26 = (ulonglong)(-uVar28 & uVar28);
  uVar33 = uVar26 * 2 + 1;
  lVar19 = 0x3f;
  if (uVar33 != 0) {
    for (; uVar33 >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
  }
  uVar28 = (uVar5 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
  if ((int)uVar4 <= (int)uVar28) {
    uVar28 = uVar4;
  }
LAB_14027868e:
  local_4f8 = (ulonglong)uVar5;
  uVar4 = uVar28;
LAB_140278691:
  local_4d8 = (longlong *)CONCAT71(local_4d8._1_7_,lVar15 == 0 && plVar2 != (longlong *)0x0);
  local_4e8 = CONCAT31(local_4e8._1_3_,plVar2 == (longlong *)0x0 && lVar15 == 0);
  local_4c0 = local_4f0 + 3;
  uVar5 = 0xffffffff;
  local_4b8 = (_LIST_ENTRY *)0x0;
  p_Var18 = local_4f0;
  local_4e4 = param_3;
  local_4e0 = plVar25;
  local_4d0 = puVar31;
  do {
    local_4c8 = (LPCRITICAL_SECTION)(local_4b0 + ((ulonglong)local_4b8 & 0xff) * 8);
LAB_1402786de:
    if ((char)local_4d8 == '\0') {
      p_Var12 = local_4c8;
      if ((local_4e8 & 1) != 0) goto LAB_1402780c3;
    }
    else {
      if ((int)puVar31[6] <= (int)uVar4) goto LAB_1402780c3;
      p_Var12 = (LPCRITICAL_SECTION)((longlong)(int)uVar4 * 0x10 + *plVar25);
    }
    p_Var37 = p_Var12->DebugInfo;
    p_Var13 = (p_Var37->ProcessLocksList).Blink;
    if (p_Var13 != local_468) goto LAB_1402787c3;
    if (p_Var18 == (_LIST_ENTRY *)0x0) {
LAB_140278758:
      uVar28 = *(uint *)((longlong)&p_Var37->CriticalSection + 4);
      if ((int)uVar28 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar28 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      p_Var13 = (_LIST_ENTRY *)(ulonglong)*(uint *)(lVar15 + 8);
      if (((*(uint *)(lVar15 + 8) >> 0x1c & 1) == 0) &&
         (uVar16._0_4_ = p_Var37->EntryCount, uVar16._4_4_ = p_Var37->ContentionCount,
         p_Var13 = (_LIST_ENTRY *)FUN_140278fd0(&local_468,uVar16), plVar25 = local_4e0,
         p_Var18 = local_4f0, puVar31 = local_4d0, (char)p_Var13 != '\0')) goto LAB_1402780c6;
    }
    else {
      p_Var13 = (p_Var37->ProcessLocksList).Flink;
      if ((local_4e4 & 2) == 0) {
        if ((*(int *)&p_Var18[3].Blink <= *(int *)&p_Var13[3].Blink) &&
           (p_Var13 = p_Var13[3].Flink, (&p_Var13->Flink)[*(int *)&p_Var18[3].Blink] == local_4c0))
        goto LAB_140278758;
      }
      else if (p_Var13 == p_Var18) goto LAB_140278758;
    }
LAB_1402787c3:
    if ((char)local_4d8 != '\0') {
      uVar5 = uVar5 & ~(uint)uVar26;
      puVar27 = *(uint **)(puVar31 + 4);
      if (*(uint **)(puVar31 + 4) == (uint *)0x0) {
        puVar27 = puVar31;
      }
      uVar28 = puVar31[6];
      iVar30 = (int)plVar32;
      lVar15 = (longlong)iVar30;
      uVar4 = puVar27[lVar15] & uVar5;
      if (uVar4 == 0) {
        iVar6 = uVar28 + 0x1e;
        if (-1 < (int)(uVar28 - 1)) {
          iVar6 = uVar28 - 1;
        }
        iVar6 = iVar6 >> 5;
        local_4f8 = (ulonglong)((int)local_4f8 + 0x20);
        iVar7 = iVar6;
        if (iVar6 < iVar30) {
          iVar7 = iVar30;
        }
        if (iVar30 < iVar6) {
          lVar19 = 0;
          do {
            uVar4 = puVar27[lVar15 + lVar19 + 1];
            if (uVar4 != 0) {
              plVar32 = (longlong *)(ulonglong)(iVar30 + (int)lVar19 + 1);
              uVar5 = 0xffffffff;
              goto LAB_140278849;
            }
            local_4f8 = (ulonglong)((int)local_4f8 + 0x20);
            lVar19 = lVar19 + 1;
          } while (iVar7 - lVar15 != lVar19);
          uVar5 = 0xffffffff;
          iVar30 = iVar7;
        }
        plVar32 = (longlong *)(ulonglong)(iVar30 + 1);
        p_Var18 = local_4f0;
        puVar31 = local_4d0;
        uVar4 = uVar28;
      }
      else {
LAB_140278849:
        uVar26 = (ulonglong)(-uVar4 & uVar4);
        uVar33 = uVar26 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar33 != 0) {
          for (; uVar33 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar4 = ((int)local_4f8 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar28 <= (int)uVar4) {
          uVar4 = uVar28;
        }
      }
      goto LAB_1402786de;
    }
    local_4e8 = CONCAT31(local_4e8._1_3_,1);
    uVar33 = (ulonglong)local_4b8 & 1;
    uVar17 = (undefined7)((ulonglong)p_Var13 >> 8);
    local_4b8 = (_LIST_ENTRY *)CONCAT71(uVar17,1);
    if (uVar33 == 0) {
      local_4e8 = CONCAT31(local_4e8._1_3_,*(longlong *)(lVar23 + 0x10) == 0);
      local_4b8 = (_LIST_ENTRY *)CONCAT71(uVar17,1);
    }
  } while( true );
  while( true ) {
    uVar28 = uVar28 + 0x20;
    uVar5 = puVar31[uVar33 + 1];
    uVar33 = uVar33 + 1;
    if (uVar5 != 0) break;
LAB_140277fc4:
    if (uVar26 == uVar33) {
      plVar25 = &DAT_14c964320;
      uVar5 = DAT_14c964348;
      goto LAB_1402788de;
    }
  }
  uVar33 = uVar33 & 0xffffffff;
LAB_140277fe1:
  uVar26 = (ulonglong)(-uVar5 & uVar5);
  uVar35 = uVar26 * 2 + 1;
  lVar19 = 0x3f;
  if (uVar35 != 0) {
    for (; uVar35 >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
  }
  uVar5 = (uVar28 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
  if ((int)DAT_14c964348 <= (int)uVar5) {
    uVar5 = DAT_14c964348;
  }
  puVar31 = (uint *)(ulonglong)uVar28;
  plVar25 = &DAT_14c964320;
  goto LAB_140278217;
  while( true ) {
    uVar29 = uVar29 + 0x20;
    uVar28 = puVar31[uVar33 + 1];
    uVar33 = uVar33 + 1;
    if (uVar28 != 0) break;
LAB_1402781c4:
    if (uVar26 == uVar33) goto LAB_1402788de;
  }
  uVar33 = uVar33 & 0xffffffff;
LAB_1402781e1:
  uVar26 = (ulonglong)(-uVar28 & uVar28);
  uVar35 = uVar26 * 2 + 1;
  lVar19 = 0x3f;
  if (uVar35 != 0) {
    for (; uVar35 >> lVar19 == 0; lVar19 = lVar19 + -1) {
    }
  }
  uVar28 = (uVar29 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
  if ((int)uVar5 <= (int)uVar28) {
    uVar28 = uVar5;
  }
  uVar5 = uVar28;
  puVar31 = (uint *)(ulonglong)uVar29;
LAB_140278217:
  local_4f8 = CONCAT71(local_4f8._1_7_,plVar2 == (longlong *)0x0 && lVar15 == 0);
  local_4b8 = local_4f0 + 3;
  local_490 = 0;
  uVar35 = 0xffffffff;
  local_4c0 = (_LIST_ENTRY *)((ulonglong)local_4c0 & 0xffffffff00000000);
  p_Var18 = local_4f0;
  local_4f9 = (char)param_4;
  local_4e8 = uVar4 | 0x10000000;
  local_4e4 = param_3;
  local_4e0 = plVar25;
  local_4a4 = uVar36;
  local_498 = param_2;
  do {
    local_4d8 = (longlong *)(local_4b0 + (local_490 & 0xff) * 8);
LAB_14027826b:
    iVar30 = (int)uVar33;
    if (lVar15 != 0 || plVar2 == (longlong *)0x0) {
      plVar32 = local_4d8;
      if ((local_4f8 & 1) != 0) goto LAB_14027845b;
    }
    else {
      if ((int)puVar27[6] <= (int)uVar5) {
LAB_14027845b:
        bVar39 = (int)local_4c0 != 0;
        param_4 = (undefined4)CONCAT71((int7)(uVar35 >> 8),local_4f9);
        p_Var24 = local_4c8;
        param_2 = local_498;
        uVar36 = local_4a4;
        param_3 = local_4e4;
        goto LAB_140277e00;
      }
      plVar32 = (longlong *)((longlong)(int)uVar5 * 0x10 + *plVar25);
    }
    p_Var13 = (_LIST_ENTRY *)*plVar32;
    p_Var11 = p_Var13[1].Blink;
    if (p_Var13[1].Blink != local_468) goto LAB_140278312;
    if (p_Var18 == (_LIST_ENTRY *)0x0) {
LAB_1402782dc:
      uVar4 = *(uint *)((longlong)&p_Var13->Blink + 4);
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      p_Var11 = (_LIST_ENTRY *)(ulonglong)*(uint *)(lVar19 + 8);
      if (((local_4e8 & *(uint *)(lVar19 + 8)) == 0) &&
         (local_4d0 = puVar31, p_Var11 = (_LIST_ENTRY *)FUN_140278fd0(&local_468,p_Var13[2].Flink),
         puVar31 = local_4d0, p_Var18 = local_4f0, plVar25 = local_4e0, (char)p_Var11 != '\0')) {
        lVar19 = (longlong)(int)uStack_470;
        uVar4 = (int)uStack_470 + 1;
        uStack_470 = CONCAT44(uStack_470._4_4_,uVar4);
        if (uStack_470._4_4_ < uVar4) {
          local_4a0 = lVar19;
          FUN_1447f76d2(&local_478,lVar19);
          lVar19 = local_4a0;
        }
        (&local_478->Flink)[lVar19] = p_Var13;
        local_4c0 = (_LIST_ENTRY *)CONCAT44(local_4c0._4_4_,(int)local_4c0 + 1);
        p_Var11 = local_478;
        puVar31 = local_4d0;
        p_Var18 = local_4f0;
        plVar25 = local_4e0;
      }
    }
    else {
      p_Var3 = p_Var13[1].Flink;
      p_Var11 = p_Var3;
      if ((local_4e4 & 2) == 0) {
        if ((*(int *)&p_Var18[3].Blink <= *(int *)&p_Var3[3].Blink) &&
           (p_Var11 = p_Var3[3].Flink,
           (&(p_Var3[3].Flink)->Flink)[*(int *)&p_Var18[3].Blink] == local_4b8)) goto LAB_1402782dc;
      }
      else if (p_Var3 == p_Var18) goto LAB_1402782dc;
    }
LAB_140278312:
    if (lVar15 == 0 && plVar2 != (longlong *)0x0) {
      uVar4 = (uint)uVar35 & ~(uint)uVar26;
      uVar35 = (ulonglong)uVar4;
      puVar21 = *(uint **)(puVar27 + 4);
      if (*(uint **)(puVar27 + 4) == (uint *)0x0) {
        puVar21 = puVar27;
      }
      uVar28 = puVar27[6];
      lVar19 = (longlong)iVar30;
      uVar4 = puVar21[lVar19] & uVar4;
      if (uVar4 == 0) {
        iVar6 = uVar28 + 0x1e;
        if (-1 < (int)(uVar28 - 1)) {
          iVar6 = uVar28 - 1;
        }
        iVar6 = iVar6 >> 5;
        puVar31 = (uint *)(ulonglong)((int)puVar31 + 0x20);
        iVar7 = iVar6;
        if (iVar6 < iVar30) {
          iVar7 = iVar30;
        }
        if (iVar30 < iVar6) {
          lVar22 = 0;
          do {
            uVar4 = puVar21[lVar19 + lVar22 + 1];
            if (uVar4 != 0) {
              uVar33 = (ulonglong)(iVar30 + (int)lVar22 + 1);
              uVar35 = 0xffffffff;
              goto LAB_14027838d;
            }
            puVar31 = (uint *)(ulonglong)((int)puVar31 + 0x20);
            lVar22 = lVar22 + 1;
          } while (iVar7 - lVar19 != lVar22);
          uVar35 = 0xffffffff;
          iVar30 = iVar7;
        }
        uVar33 = (ulonglong)(iVar30 + 1);
        p_Var18 = local_4f0;
        uVar5 = uVar28;
      }
      else {
LAB_14027838d:
        uVar26 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar26 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar5 = ((int)puVar31 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if ((int)uVar28 <= (int)uVar5) {
          uVar5 = uVar28;
        }
      }
      goto LAB_14027826b;
    }
    local_4f8 = CONCAT71(local_4f8._1_7_,1);
    uVar1 = local_490 & 1;
    uVar17 = (undefined7)((ulonglong)p_Var11 >> 8);
    local_490 = CONCAT71(uVar17,1);
    if (uVar1 == 0) {
      local_4f8 = CONCAT71(local_4f8._1_7_,*(longlong *)(lVar23 + 0x10) == 0);
      local_490 = CONCAT71(uVar17,1);
    }
  } while( true );
LAB_1402788de:
  uVar33 = (ulonglong)(iVar30 + 1);
  uVar26 = 1;
  puVar31 = (uint *)(ulonglong)(iVar30 * 0x20 + 0x20);
  goto LAB_140278217;
}



// FUNCTION 140278f2a FUN_140278f2a body=165 status=ok
// SIG undefined FUN_140278f2a(void)

ushort FUN_140278f2a(uint *param_1,void *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *param_1;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  puVar1 = (ushort *)((&DAT_14c87eb10)[uVar3 >> 0x10] + (ulonglong)(uVar3 & 0xffff) * 2);
  uVar2 = *puVar1;
  if ((uVar2 & 1) == 0) {
    memcpy(param_2,puVar1 + 1,(ulonglong)(uVar2 >> 6));
    if (0x3f < *puVar1) {
      uVar2 = *puVar1 >> 6;
      uVar3 = (uint)uVar2;
      uVar4 = (ulonglong)(uVar2 - 1);
      do {
        *(short *)((longlong)param_2 + uVar4 * 2) = (short)*(char *)((longlong)param_2 + uVar4);
        uVar4 = uVar4 - 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  else {
    memcpy(param_2,puVar1 + 1,(ulonglong)(uVar2 >> 5 & 0xfffffffe));
  }
  *(undefined2 *)((longlong)param_2 + (ulonglong)(*puVar1 >> 6) * 2) = 0;
  return *puVar1 >> 6;
}



// FUNCTION 140278fd0 FUN_140278fd0 body=285 status=ok
// SIG undefined FUN_140278fd0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_140278fd0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_1048 [32];
  ulonglong local_1028;
  ulonglong local_1020;
  undefined1 local_1018 [2048];
  undefined1 local_818 [2056];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_1048;
  uVar1 = *(uint *)(param_1 + 0x50);
  bVar6 = true;
  if ((ulonglong)uVar1 != 0) {
    if (1 < (int)uVar1) {
      uVar5 = (ulonglong)uVar1 + 1;
      do {
        if (param_2 == 0) goto LAB_1402790e7;
        puVar4 = *(ulonglong **)(param_1 + 0x48);
        if (*(ulonglong **)(param_1 + 0x48) == (ulonglong *)0x0) {
          puVar4 = (ulonglong *)(param_1 + 8);
        }
        if (*(ulonglong *)(param_2 + 0x18) != puVar4[uVar5 - 2]) goto LAB_1402790e7;
        param_2 = *(longlong *)(param_2 + 0x20);
        uVar5 = uVar5 - 1;
      } while (2 < uVar5);
    }
    if (param_2 != 0) {
      puVar4 = (ulonglong *)(param_1 + 8);
      if (*(ulonglong **)(param_1 + 0x48) != (ulonglong *)0x0) {
        puVar4 = *(ulonglong **)(param_1 + 0x48);
      }
      local_1028 = *puVar4;
      local_1020 = *(ulonglong *)(param_2 + 0x18);
      bVar6 = true;
      if (local_1020 == local_1028) goto LAB_140278ffb;
      if ((local_1020 ^ local_1028) >> 0x20 == 0) {
        uVar1 = FUN_140278f2a(&local_1020,local_818);
        uVar2 = FUN_140278f2a(&local_1028,local_1018);
        if (uVar2 <= uVar1) {
          iVar3 = FUN_144a54874(local_818 + (ulonglong)uVar2 * -2 + (ulonglong)uVar1 * 2,local_1018)
          ;
          bVar6 = iVar3 == 0;
          goto LAB_140278ffb;
        }
      }
    }
LAB_1402790e7:
    bVar6 = false;
  }
LAB_140278ffb:
  if ((local_10 ^ (ulonglong)auStack_1048) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 1402790ee FUN_1402790ee body=197 status=ok
// SIG undefined FUN_1402790ee(void)

undefined8 * FUN_1402790ee(undefined8 *param_1,uint param_2,longlong param_3,int param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  uint local_30;
  undefined1 local_2c;
  longlong local_28;
  uint local_20;
  undefined1 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = 0;
  if (param_4 == 0) {
    if (0 < (int)param_2) {
      uVar2 = 0;
      do {
        uVar1 = uVar1 | *(ushort *)(param_3 + uVar2 * 2);
        uVar2 = uVar2 + 1;
      } while (param_2 != uVar2);
      uVar1 = (ushort)(0x7f < uVar1);
    }
    local_2c = (undefined1)uVar1;
    local_38 = param_3;
    local_30 = param_2;
    FUN_1456eb9fe(&local_18,&local_38,1);
  }
  else {
    if (0 < (int)param_2) {
      uVar2 = 0;
      do {
        uVar1 = uVar1 | *(ushort *)(param_3 + uVar2 * 2);
        uVar2 = uVar2 + 1;
      } while (param_2 != uVar2);
      uVar1 = (ushort)(0x7f < uVar1);
    }
    local_1c = (undefined1)uVar1;
    local_28 = param_3;
    local_20 = param_2;
    FUN_144aa127e(&local_18,&local_28,1);
  }
  *param_1 = local_18;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402791b4 FUN_1402791b4 body=643 status=ok
// SIG undefined FUN_1402791b4(void)

undefined8
FUN_1402791b4(longlong param_1,wchar_t *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_a0;
  uint local_98;
  wchar_t *local_90;
  undefined4 local_88;
  wchar_t *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  uint local_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_60 = local_60 & 0xffffff00;
  local_68 = 0;
  if ((param_2 == (wchar_t *)0x0) || (*param_2 == L'\0')) {
    uVar3 = 0;
    if (param_1 == 0) goto LAB_140279409;
    local_58 = *(wchar_t **)(param_1 + 0x18);
    FUN_1400021e4(&local_58,&local_80);
    iVar4 = local_78 + -1;
    if (local_78 == 0) {
      iVar4 = 0;
    }
    local_a0 = 0;
    local_98 = local_98 & 0xffffff00;
    local_58 = local_80;
    uStack_50 = CONCAT44(uStack_50._4_4_,iVar4);
    FUN_1414176ea(&local_58,&local_a0);
    local_68 = local_a0;
    local_60 = local_98;
    if (local_80 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
LAB_1402793cf:
    local_b8 = param_5;
    uVar3 = FUN_14283eb0f(param_1,&local_68,param_3,param_4);
  }
  else {
    local_58 = (wchar_t *)0x0;
    uStack_50 = 0;
    sVar2 = wcslen(param_2);
    if ((int)sVar2 != 0) {
      lVar5 = 0;
      do {
        if (*(short *)((longlong)param_2 + lVar5) == 0x2f) goto LAB_14027939b;
        lVar5 = lVar5 + 2;
      } while ((longlong)(int)sVar2 * 2 != lVar5);
    }
    FUN_14020fad6(&local_58,param_2);
    pwVar6 = local_58;
    if ((int)uStack_50 == 0) {
      pwVar6 = L"";
    }
    FUN_1446f470e(&local_70,pwVar6,1);
    lVar5 = FUN_144923238(local_70);
    if (lVar5 == 0) {
      cVar1 = FUN_1427b6f8e(&local_58,&local_58,0);
      if (cVar1 != '\0') {
        local_90 = local_58;
        local_78 = (int)uStack_50;
        goto joined_r0x000140279377;
      }
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_1400021e4(lVar5,&local_80);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      uStack_50 = CONCAT44(local_74,local_78);
      local_90 = local_80;
joined_r0x000140279377:
      local_58 = local_90;
      if (local_78 == 0) {
        param_2 = L"";
LAB_14027939b:
        local_90 = param_2;
        sVar2 = wcslen(param_2);
        local_88 = (int)sVar2;
      }
      else {
        param_2 = local_90;
        if (local_90 != (wchar_t *)0x0) goto LAB_14027939b;
        local_88 = 0;
      }
      cVar1 = FUN_140b1a3de(&local_90,&local_68);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (cVar1 != '\0') goto LAB_1402793cf;
    }
    uVar3 = 0;
  }
LAB_140279409:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140279438 FUN_140279438 body=148 status=ok
// SIG undefined FUN_140279438(void)

void FUN_140279438(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x10) = param_2;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1402794cc(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 8),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146d9e082(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146d9e0e4(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1402794cc FUN_1402794cc body=360 status=ok
// SIG undefined FUN_1402794cc(void)

void FUN_1402794cc(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar2 < 2) {
    uVar7 = 1;
  }
  else {
    if (*(uint *)(param_1 + 0x14) < 2) {
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14027955a;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_14027955a:
    uVar7 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar5 >> 3)) {
      uVar7 = uVar5 >> 3 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x14) = (int)uVar7;
  FUN_140279634(param_1,param_2,uVar7,8);
  return;
}



// FUNCTION 140279634 FUN_140279634 body=133 status=ok
// SIG undefined FUN_140279634(void)

void FUN_140279634(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 1402796c0 FUN_1402796c0 body=57 status=ok
// SIG undefined FUN_1402796c0(void)

void FUN_1402796c0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ff70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ff70 = FUN_140002ddd(FUN_1464ea79a,uVar1,L"GbxLevelRoadDef");
  }
  return;
}



// FUNCTION 1402796f9 FUN_1402796f9 body=49 status=ok
// SIG undefined FUN_1402796f9(void)

void FUN_1402796f9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
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



// FUNCTION 14027972a FUN_14027972a body=228 status=ok
// SIG undefined FUN_14027972a(void)

longlong FUN_14027972a(void)

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
  if (DAT_14cb5d078 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148692cff;
    local_40 = FUN_1464d9d4c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryLocationInterface",&DAT_14cb5d078,&DAT_148692cfe)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d078;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140279810 FUN_140279810 body=187 status=ok
// SIG undefined FUN_140279810(void)

void FUN_140279810(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

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
        goto LAB_1402798b3;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1402798b3:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1402798cc FUN_1402798cc body=106 status=ok
// SIG undefined FUN_1402798cc(void)

void FUN_1402798cc(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined8 uStack_28;
  ulonglong uStack_20;
  
  *(undefined1 *)(param_1 + 0x79) = 1;
  if ((((*(int *)(param_1 + 0x2c) != 0) && (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x2c))) &&
      ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
      lVar4 = *plVar6;
    }
    else {
      lVar4 = 0;
    }
    lVar4 = *(longlong *)(lVar4 + 0x30);
    if (lVar4 != 0) {
      uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
      if (*(char *)(lVar4 + 0x1a4) == '\x01') {
        lVar4 = lVar4 + 0x328;
        uStack_28 = 0;
        FUN_14485c47a(&uStack_28);
      }
      else {
        lVar4 = lVar4 + 0x318;
        if (param_1 == 0) {
          uStack_28._0_4_ = 0;
          iVar2 = 0;
          uVar1 = (uint)uStack_28;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0xc);
          uStack_28 = (ulonglong)uVar1;
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
            iVar5 = DAT_14c964868 + 1;
            bVar7 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar2;
            if (bVar7) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar5);
            }
            LOCK();
            iVar2 = *(int *)(lVar3 + 0x10);
            bVar7 = iVar2 == 0;
            if (bVar7) {
              *(int *)(lVar3 + 0x10) = iVar5;
              iVar2 = 0;
            }
            UNLOCK();
            uVar1 = (uint)uStack_28;
            if (bVar7) {
              iVar2 = iVar5;
            }
          }
        }
        uStack_28._0_4_ = uVar1;
        uStack_28 = CONCAT44(iVar2,(uint)uStack_28);
      }
      FUN_144925e5c(lVar4,&uStack_28);
      if ((uStack_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
  return;
}



// FUNCTION 140279936 FUN_140279936 body=138 status=ok
// SIG undefined FUN_140279936(void)

ulonglong FUN_140279936(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x16a) == '\x01') {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((1 < *(int *)(param_1 + 0x120) - 1U) || (*(longlong **)(param_1 + 0x138) == (longlong *)0x0)
       ) goto LAB_1402799b8;
    if ((*(int *)(param_1 + 0x134) == 0) ||
       ((uVar1 = *(uint *)(param_1 + 0x130), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1))))
    goto LAB_1402799b8;
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((lVar4 == 0) ||
       ((*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0x134) ||
        ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))) goto LAB_1402799b8;
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x48))();
    if (cVar2 != '\0') goto LAB_1402799b8;
  }
  uVar3 = 0;
LAB_1402799b8:
  return uVar3 & 0xffffffff;
}



// FUNCTION 1402799c0 FUN_1402799c0 body=151 status=ok
// SIG undefined FUN_1402799c0(void)

ulonglong FUN_1402799c0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x138);
  if ((plVar2 == (longlong *)0x0) || (*(int *)(param_1 + 0x134) == 0)) {
LAB_140279a21:
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x130);
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar5 == 0) || (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0x134))) ||
         ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)) goto LAB_140279a21;
      uVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (*(int *)(param_1 + 0x120) != 1) {
    if (*(int *)(param_1 + 0x120) == 2) {
      cVar3 = FUN_1418a32ab(uVar4);
      if (cVar3 != '\0') goto LAB_140279a41;
    }
    uVar6 = 0;
  }
LAB_140279a41:
  return uVar6 & 0xffffffff;
}



// FUNCTION 140279a58 FUN_140279a58 body=108 status=ok
// SIG undefined FUN_140279a58(void)

int FUN_140279a58(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar1 = FUN_14027ac7a(lVar3 + (longlong)iVar4 * 0x40,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x38 + (longlong)iVar4 * 0x40);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 140279ac4 FUN_140279ac4 body=132 status=ok
// SIG undefined FUN_140279ac4(void)

longlong FUN_140279ac4(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (lVar4 == 0) {
    uVar3 = FUN_14073f72a();
    lVar4 = FUN_14477b664(uVar3);
    param_1[1] = lVar4;
  }
  if (param_1[2] == 0) {
    if ((*param_1 != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,param_1);
      }
      param_1[2] = lVar4;
      return lVar4;
    }
    return 0;
  }
  return param_1[2];
}



// FUNCTION 140279b48 FUN_140279b48 body=353 status=ok
// SIG undefined FUN_140279b48(void)

void FUN_140279b48(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140279bcf;
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
LAB_140279bcf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140279caa FUN_140279caa body=1047 status=ok
// SIG undefined FUN_140279caa(void)

void FUN_140279caa(longlong *param_1,longlong param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    return;
  }
  uVar4 = *(uint *)(param_2 + 8);
  if ((int)uVar4 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar4) {
    return;
  }
  puVar11 = (undefined8 *)
            ((ulonglong)((uVar4 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
  if (puVar11 == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)(puVar11 + 2) != *(int *)(param_2 + 0xc)) {
    return;
  }
  if ((*(uint *)(puVar11 + 1) & 0x10200000) != 0) {
    return;
  }
  piVar1 = (int *)(param_2 + 0x10);
  iVar5 = *(int *)(param_2 + 0x10);
  iVar6 = *(int *)(param_2 + 0x14);
  iVar7 = *(int *)(param_2 + 0x18);
  lVar8 = *(longlong *)(param_2 + 0x20);
  cVar2 = *(char *)(param_2 + 0x28);
  cVar3 = *(char *)(param_2 + 0x29);
  if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
    uVar12 = *puVar11;
  }
  else {
    uVar12 = 0;
  }
  FUN_140a981c4(uVar12,(int)param_1[0x24],param_1 + 0x30,piVar1);
  if (*(int *)(param_2 + 0xc) == 0) {
LAB_140279fbe:
    uVar12 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 8);
    uVar12 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)(param_2 + 0xc) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_140279fbe;
      uVar12 = *puVar11;
    }
  }
  (**(code **)(*param_1 + 0x68))(param_1,uVar12,param_1 + 0x30,piVar1);
  if (*(int *)(param_2 + 0xc) == 0) {
LAB_140279fc5:
    lVar9 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 8);
    lVar9 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar10 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar10 == (longlong *)0x0) ||
         (((int)plVar10[2] != *(int *)(param_2 + 0xc) ||
          ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_140279fc5;
      lVar9 = *plVar10;
    }
  }
  if (*(char *)(lVar9 + 0x60) == '\x01') {
    *(undefined4 *)(lVar9 + 0x40) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(lVar9 + 0x44) = *(undefined4 *)(param_2 + 0x14);
  }
  if (((*piVar1 == 0) && (*(char *)(param_2 + 0x28) == '\0')) && (*(int *)(param_2 + 0x14) == 0)) {
LAB_140279e54:
    if (*(char *)(param_2 + 0x30) == '\x01') {
      *(undefined1 *)(param_2 + 0x30) = 0;
      (**(code **)(*param_1 + 0x80))(param_1,param_2);
      FUN_140993ccc(param_1 + 6,param_2);
    }
  }
  else {
    lVar9 = *(longlong *)(param_2 + 0x20);
    if ((lVar9 == 0) || (*(char *)(param_2 + 0x30) != '\0')) {
      if (*piVar1 == 0) {
        if (((*(byte *)(param_2 + 0x28) & 1) == 0) && (*(int *)(param_2 + 0x14) == 0))
        goto LAB_140279e54;
        lVar9 = *(longlong *)(param_2 + 0x20);
      }
      if (lVar9 == 0) goto LAB_140279e54;
    }
    else {
      *(undefined1 *)(param_2 + 0x30) = 1;
      if (*(int *)(param_2 + 0xc) == 0) {
LAB_14027a097:
        uVar12 = 0;
      }
      else {
        uVar4 = *(uint *)(param_2 + 8);
        uVar12 = 0;
        if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if ((puVar11 == (undefined8 *)0x0) ||
             ((*(int *)(puVar11 + 2) != *(int *)(param_2 + 0xc) ||
              ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_14027a097;
          uVar12 = *puVar11;
        }
      }
      (**(code **)(*param_1 + 0x70))(param_1,param_2,uVar12);
      if (*(int *)(param_2 + 0xc) == 0) {
LAB_14027a09c:
        uVar12 = 0;
      }
      else {
        uVar4 = *(uint *)(param_2 + 8);
        uVar12 = 0;
        if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if ((puVar11 == (undefined8 *)0x0) ||
             ((*(int *)(puVar11 + 2) != *(int *)(param_2 + 0xc) ||
              ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_14027a09c;
          uVar12 = *puVar11;
        }
      }
      FUN_140a1989c(param_1 + 3,param_2,uVar12);
    }
  }
  if ((*(char *)(param_2 + 0x30) != '\x01') ||
     (((((iVar5 == *(int *)(param_2 + 0x10) && (iVar6 == *(int *)(param_2 + 0x14))) &&
        (iVar7 == *(int *)(param_2 + 0x18))) &&
       ((cVar2 == *(char *)(param_2 + 0x28) && (cVar3 == *(char *)(param_2 + 0x29))))) &&
      (lVar8 == *(longlong *)(param_2 + 0x20))))) {
    return;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
LAB_14027a087:
    uVar12 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 8);
    uVar12 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)(param_2 + 0xc) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_14027a087;
      uVar12 = *puVar11;
    }
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_2,uVar12);
  if (*(int *)(param_2 + 0xc) != 0) {
    uVar4 = *(uint *)(param_2 + 8);
    uVar12 = 0;
    if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_140279f6c;
    puVar11 = (undefined8 *)
              ((ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if ((puVar11 != (undefined8 *)0x0) &&
       ((*(int *)(puVar11 + 2) == *(int *)(param_2 + 0xc) &&
        ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)))) {
      uVar12 = *puVar11;
      goto LAB_140279f6c;
    }
  }
  uVar12 = 0;
LAB_140279f6c:
  FUN_140a1989c(param_1 + 9,param_2,uVar12);
  return;
}



// FUNCTION 14027a0c2 FUN_14027a0c2 body=501 status=ok
// SIG undefined FUN_14027a0c2(void)

uint FUN_14027a0c2(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar9 = 0;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    if (iVar1 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)param_1[3];
    }
    lVar7 = 0;
    uVar9 = 0;
    do {
      uVar8 = ((uint)(0x19 < (ushort)puVar4[lVar7] - 0x61) * 0x20 + (uint)(ushort)puVar4[lVar7]) -
              0x20;
      uVar9 = uVar9 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar9 ^ uVar8) & 0xff) * 4);
      uVar9 = uVar9 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar8 >> 8 & 0xff) * 4);
      lVar7 = lVar7 + 1;
    } while (iVar6 != (int)lVar7);
  }
  lVar7 = param_1[1];
  if (lVar7 == 0) {
    lVar7 = FUN_14073f72a();
  }
  uVar2 = *param_1;
  uVar5 = FUN_14477b664(lVar7);
  uVar8 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar10 = (uint)uVar2 & 0xffff;
  uVar8 = uVar3 >> 0xd ^
          (((uint)uVar2 << 0x10 | uVar10) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar10 >> 4)) - uVar3;
  uVar10 = uVar8 << 8 ^ (-0x61c88647 - uVar3) - uVar8;
  uVar11 = uVar10 >> 0xd ^ (uVar3 - uVar8) - uVar10;
  uVar8 = uVar11 >> 0xc ^ (uVar8 - uVar10) - uVar11;
  uVar3 = uVar8 << 0x10 ^ (uVar10 - uVar11) - uVar8;
  uVar10 = uVar3 >> 5 ^ (uVar11 - uVar8) - uVar3;
  uVar11 = uVar10 >> 3 ^ (uVar8 - uVar3) - uVar10;
  uVar8 = uVar11 << 10 ^ (uVar3 - uVar10) - uVar11;
  uVar3 = uVar9 >> 0xd ^ (uVar8 >> 0xf ^ uVar10 - (uVar11 + uVar8)) - uVar9;
  uVar8 = uVar3 << 8 ^ (-0x61c88647 - uVar9) - uVar3;
  uVar9 = uVar8 >> 0xd ^ (uVar9 - uVar3) - uVar8;
  uVar10 = uVar9 >> 0xc ^ (uVar3 - uVar8) - uVar9;
  uVar3 = uVar10 << 0x10 ^ (uVar8 - uVar9) - uVar10;
  uVar8 = uVar3 >> 5 ^ (uVar9 - uVar10) - uVar3;
  uVar10 = uVar8 >> 3 ^ (uVar10 - uVar3) - uVar8;
  uVar9 = uVar10 << 10 ^ (uVar3 - uVar8) - uVar10;
  return uVar9 >> 0xf ^ uVar8 - (uVar10 + uVar9);
}



// FUNCTION 14027a2b8 FUN_14027a2b8 body=367 status=ok
// SIG undefined FUN_14027a2b8(void)

void FUN_14027a2b8(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14027a382;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14027a382:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
    }
  }
  return;
}



// FUNCTION 14027a428 FUN_14027a428 body=221 status=ok
// SIG undefined FUN_14027a428(void)

longlong FUN_14027a428(void)

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
  if (DAT_14cb5d248 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486962bd;
    local_40 = FUN_1464da804;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryProvider",&DAT_14cb5d248,&DAT_1486962bc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d248;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14027a506 FUN_14027a506 body=272 status=ok
// SIG undefined FUN_14027a506(void)

void FUN_14027a506(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x1a4) == '\x01') {
    param_1 = param_1 + 0x328;
    local_28 = 0;
    FUN_14485c47a(&local_28);
  }
  else {
    param_1 = param_1 + 0x318;
    if (param_2 == 0) {
      local_28._0_4_ = 0;
      iVar2 = 0;
      uVar1 = (uint)local_28;
    }
    else {
      uVar1 = *(uint *)(param_2 + 0xc);
      local_28 = (ulonglong)uVar1;
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
        uVar1 = (uint)local_28;
        if (bVar5) {
          iVar2 = iVar4;
        }
      }
    }
    local_28._0_4_ = uVar1;
    local_28 = CONCAT44(iVar2,(uint)local_28);
  }
  FUN_144925e5c(param_1,&local_28);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14027a618 FUN_14027a618 body=408 status=ok
// SIG undefined FUN_14027a618(void)

longlong FUN_14027a618(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x160);
  if (lVar3 == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(lVar3 + 0xa0);
  if (lVar4 == 0) {
    uVar5 = FUN_145733170();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(lVar3 + 0xa0) = lVar4;
  }
  if (*(longlong *)(lVar3 + 0xa8) == 0) {
    if ((lVar4 == 0) || (*(longlong *)(lVar3 + 0x98) == 0)) goto LAB_14027a702;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(lVar3 + 0xa8) = 0;
      goto LAB_14027a702;
    }
    uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(uVar5,(longlong *)(lVar3 + 0x98));
    *(longlong *)(lVar3 + 0xa8) = lVar4;
    if (lVar4 == 0) goto LAB_14027a702;
  }
  lVar3 = *(longlong *)(param_1 + 0x160);
  lVar4 = *(longlong *)(lVar3 + 0xa0);
  if (lVar4 == 0) {
    uVar5 = FUN_145733170();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(lVar3 + 0xa0) = lVar4;
  }
  lVar6 = *(longlong *)(lVar3 + 0xa8);
  if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*(longlong *)(lVar3 + 0x98) != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar1 + 0x108))(), cVar2 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar3 + 0x98));
    }
    *(longlong *)(lVar3 + 0xa8) = lVar6;
  }
  lVar3 = FUN_14027a7b0(lVar6,param_2);
  if (lVar3 != 0) {
    return lVar3;
  }
LAB_14027a702:
  if (*(longlong *)(param_1 + 0x160) == 0) {
    return 0;
  }
  lVar3 = FUN_1457331aa();
  return lVar3;
}



// FUNCTION 14027a7b0 FUN_14027a7b0 body=461 status=ok
// SIG undefined FUN_14027a7b0(void)

longlong FUN_14027a7b0(longlong param_1,double *param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  
  dVar12 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
  if (ABS(dVar12) <= 1e-08) {
    dVar12 = (double)(-(ulonglong)(*(double *)(param_1 + 0x38) <= *param_2) & 0x3ff0000000000000);
  }
  else {
    dVar12 = (*param_2 - *(double *)(param_1 + 0x20)) / dVar12;
  }
  iVar4 = *(int *)(param_1 + 0x58);
  dVar13 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
  if (ABS(dVar13) <= 1e-08) {
    dVar13 = (double)(-(ulonglong)(*(double *)(param_1 + 0x40) <= param_2[1]) & 0x3ff0000000000000);
  }
  else {
    dVar13 = (param_2[1] - *(double *)(param_1 + 0x28)) / dVar13;
  }
  auVar10._0_8_ = dVar12 * (double)iVar4 + 0.0;
  auVar10._8_8_ = 0;
  auVar10 = roundpd(auVar10,auVar10,1);
  uVar6 = (uint)auVar10._0_8_;
  if (((int)uVar6 < 0) || (iVar4 <= (int)uVar6)) {
LAB_14027a8d3:
    iVar4 = *(int *)(param_1 + 0x78);
  }
  else {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = dVar13 * (double)*(int *)(param_1 + 0x5c) + 0.0;
    auVar10 = roundpd(auVar11,auVar11,1);
    iVar9 = (int)auVar10._0_8_;
    if ((iVar9 < 0) ||
       ((*(int *)(param_1 + 0x5c) <= iVar9 ||
        (lVar7 = (ulonglong)uVar6 + (ulonglong)(uint)(iVar4 * iVar9),
        *(int *)(param_1 + 0x68) <= (int)lVar7)))) goto LAB_14027a8d3;
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x60) + lVar7);
    iVar4 = *(int *)(param_1 + 0x78);
    if ((int)(uint)bVar1 < iVar4) {
      plVar8 = (longlong *)(*(longlong *)(param_1 + 0x70) + (ulonglong)bVar1 * 0x18);
      goto LAB_14027a8b1;
    }
  }
  if (iVar4 < 1) {
    return 0;
  }
  plVar8 = *(longlong **)(param_1 + 0x70);
LAB_14027a8b1:
  lVar7 = plVar8[1];
  if (lVar7 == 0) {
    uVar5 = FUN_141030812();
    lVar7 = FUN_14477b664(uVar5);
    plVar8[1] = lVar7;
  }
  if (plVar8[2] != 0) {
    return plVar8[2];
  }
  if (lVar7 == 0) {
    return 0;
  }
  if (*plVar8 != 0) {
    plVar2 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar7 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar7 = FUN_144aff482(uVar5,plVar8);
    }
    plVar8[2] = lVar7;
    return lVar7;
  }
  return 0;
}



// FUNCTION 14027a97e FUN_14027a97e body=452 status=ok
// SIG undefined FUN_14027a97e(void)

void FUN_14027a97e(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 uVar8;
  
  lVar6 = FUN_140279ac4(param_2);
  if ((lVar6 != 0) && (lVar6 = FUN_140279ac4(param_2), *(longlong *)(lVar6 + 0x228) != 0)) {
    return;
  }
  cVar3 = FUN_1402799c0(param_1);
  if (cVar3 == '\0') {
    plVar1 = (longlong *)(param_1 + 0x270);
    uVar4 = FUN_14027a0c2(param_2);
    iVar5 = FUN_140279a58(plVar1,uVar4,param_2);
    if (iVar5 != -1) {
      uVar4 = FUN_14027a0c2(param_2);
      iVar5 = FUN_140279a58(plVar1,uVar4,param_2);
      if (iVar5 == -1) {
        lVar6 = 0;
      }
      else {
        lVar6 = (longlong)iVar5 * 0x40 + *plVar1;
      }
      if (param_3 <= *(int *)(lVar6 + 0x30)) {
        return;
      }
    }
    uVar4 = FUN_14027a0c2(param_2);
    piVar7 = (int *)FUN_140ebd788(plVar1,uVar4,param_2);
    *piVar7 = param_3;
    *(undefined1 *)(param_1 + 0x1b8) = 1;
    plVar1 = *(longlong **)(param_1 + 0x138);
    if (((((plVar1 != (longlong *)0x0) && (*(int *)(param_1 + 0x134) != 0)) &&
         ((uVar2 = *(uint *)(param_1 + 0x130), -1 < (int)uVar2 &&
          (((int)uVar2 < DAT_14c9647dc &&
           (lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 != 0))))))
        && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x134))) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014027ab31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
      return;
    }
    return;
  }
  if ((*(longlong **)(param_1 + 0x138) != (longlong *)0x0) && (*(int *)(param_1 + 0x134) != 0)) {
    uVar2 = *(uint *)(param_1 + 0x130);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14027aa24;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x134))) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
      uVar8 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))();
      goto LAB_14027aa24;
    }
  }
  uVar8 = 0;
LAB_14027aa24:
  FUN_143d13efe(param_1,param_2,param_3,uVar8);
  return;
}



// FUNCTION 14027ab42 FUN_14027ab42 body=310 status=ok
// SIG undefined FUN_14027ab42(void)

longlong * FUN_14027ab42(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb786a8;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14027ac7a FUN_14027ac7a body=674 status=ok
// SIG undefined FUN_14027ac7a(void)

undefined8 FUN_14027ac7a(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined **ppuVar16;
  uint uVar17;
  bool bVar18;
  
  if (param_1[1] == 0) {
    uVar13 = FUN_14073f72a();
    lVar10 = FUN_14477b664(uVar13);
    param_1[1] = lVar10;
  }
  lVar10 = param_2[1];
  if (lVar10 == 0) {
    lVar10 = FUN_14073f72a();
  }
  lVar3 = *param_2;
  lVar10 = FUN_14477b664(lVar10);
  iVar9 = 0;
  iVar8 = 0;
  if ((lVar10 != 0) && (plVar4 = *(longlong **)(lVar10 + 0xb8), plVar4 != (longlong *)0x0)) {
    lVar11 = *plVar4;
    pcVar5 = *(code **)(lVar11 + 0x108);
    if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
      cVar7 = (*pcVar5)(plVar4);
      iVar8 = 0;
      if (cVar7 == '\0') goto LAB_14027ad25;
      lVar11 = *plVar4;
    }
    pcVar5 = *(code **)(lVar11 + 0x110);
    if (pcVar5 == (code *)&LAB_144783426) {
      ppuVar16 = &PTR_PTR_14c763408;
    }
    else if (pcVar5 == (code *)&LAB_144783432) {
      ppuVar16 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar16 = (undefined **)(*pcVar5)(plVar4);
    }
    iVar8 = FUN_144aff48c(ppuVar16);
  }
LAB_14027ad25:
  lVar11 = *param_1;
  lVar6 = param_1[1];
  if ((lVar6 != 0) && (plVar4 = *(longlong **)(lVar6 + 0xb8), plVar4 != (longlong *)0x0)) {
    lVar12 = *plVar4;
    pcVar5 = *(code **)(lVar12 + 0x108);
    if (pcVar5 != (code *)&LAB_14478342e && pcVar5 != (code *)&LAB_144783422) {
      cVar7 = (*pcVar5)(plVar4);
      if (cVar7 == '\0') goto LAB_14027ad8c;
      lVar12 = *plVar4;
    }
    pcVar5 = *(code **)(lVar12 + 0x110);
    if (pcVar5 == (code *)&LAB_144783426) {
      ppuVar16 = &PTR_PTR_14c763408;
    }
    else if (pcVar5 == (code *)&LAB_144783432) {
      ppuVar16 = &PTR_PTR_14c75f798;
    }
    else {
      ppuVar16 = (undefined **)(*pcVar5)(plVar4);
    }
    iVar9 = FUN_144aff48c(ppuVar16);
  }
LAB_14027ad8c:
  if (iVar9 != iVar8) {
    return 0;
  }
  if (lVar11 != lVar3) {
    return 0;
  }
  if (lVar6 != lVar10) {
    if (lVar10 == 0) {
      return 0;
    }
    if (lVar6 == 0) {
      return 0;
    }
    iVar8 = *(int *)(lVar10 + 0x38);
    iVar9 = *(int *)(lVar6 + 0x38);
    if (((iVar9 < iVar8) ||
        (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar8 * 8) != lVar10 + 0x30)) &&
       ((iVar8 < iVar9 ||
        (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar9 * 8) != lVar6 + 0x30)))) {
      return 0;
    }
  }
  iVar8 = (int)param_1[4];
  iVar9 = (int)param_2[4];
  if (iVar8 == iVar9) {
    if (iVar8 < 2) {
      return CONCAT71((uint7)(uint3)((uint)iVar9 >> 8),1);
    }
    uVar14 = param_2[3];
    lVar10 = 0;
    while( true ) {
      uVar1 = *(ushort *)(param_1[3] + lVar10);
      uVar15 = (uint)uVar1;
      uVar2 = *(ushort *)(uVar14 + lVar10);
      uVar17 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14027ae6b;
        }
        iVar8 = uVar15 - uVar17;
        goto LAB_14027af12;
      }
      if (uVar1 == 0) break;
LAB_14027ae6b:
      lVar10 = lVar10 + 2;
    }
    iVar8 = 0;
LAB_14027af12:
    bVar18 = iVar8 == 0;
  }
  else {
    uVar14 = (ulonglong)(uint)(iVar9 + iVar8);
    bVar18 = iVar9 + iVar8 == 1;
  }
  return CONCAT71((int7)(uVar14 >> 8),bVar18);
}



// FUNCTION 14027af1c FUN_14027af1c body=4139 status=ok
// SIG undefined FUN_14027af1c(void)

void FUN_14027af1c(longlong param_1,longlong *param_2,longlong *param_3,char param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  char cVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auStack_378 [32];
  undefined4 *local_358;
  longlong *local_350;
  int local_348;
  int local_344;
  ulonglong local_340;
  ulonglong local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  void *local_320;
  int local_318;
  void *local_310;
  int local_308;
  void *local_300;
  int local_2f8;
  void *local_2f0;
  int local_2e8;
  void *local_2e0;
  int local_2d8;
  longlong local_2d0;
  longlong *local_2c8;
  undefined4 local_2c0 [8];
  undefined1 local_2a0;
  undefined1 local_298 [16];
  longlong local_288;
  undefined1 local_278 [32];
  byte local_258;
  undefined4 local_250;
  undefined4 uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  byte local_230;
  undefined1 local_228 [16];
  longlong local_218;
  undefined1 local_208 [32];
  byte local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  undefined4 uStack_1d4;
  byte local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  undefined1 local_198 [32];
  byte local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  undefined1 local_150 [32];
  byte local_130;
  undefined1 local_128 [32];
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e0;
  int iStack_d8;
  undefined4 uStack_d4;
  char local_d0;
  longlong local_70;
  uint local_68;
  uint local_64;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_2c8 = param_3;
  FUN_140212f8e(&local_2d0);
  local_350 = param_2;
  if (*param_2 == 0) {
    uVar18 = 0;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x470) != 0) {
      uVar18 = 0;
      lVar15 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x468) + lVar15) == *param_2) goto LAB_14027afb7;
        lVar15 = lVar15 + 8;
      } while ((longlong)*(int *)(param_1 + 0x470) * 8 != lVar15);
    }
    FUN_140721fbe(param_1 + 0x468);
    uVar18 = 1;
  }
LAB_14027afb7:
  if (param_3 == (longlong *)0x0) {
    uVar19 = 0;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x480) != 0) {
      uVar19 = 0;
      lVar15 = 0;
      do {
        if (*(longlong **)(*(longlong *)(param_1 + 0x478) + lVar15) == param_3) goto LAB_14027b006;
        lVar15 = lVar15 + 8;
      } while ((longlong)*(int *)(param_1 + 0x480) * 8 != lVar15);
    }
    FUN_141427f78(param_1 + 0x478,&local_2c8);
    uVar19 = 1;
  }
LAB_14027b006:
  if ((((*(longlong **)(param_1 + 0x138) != (longlong *)0x0) && (*(int *)(param_1 + 0x134) != 0)) &&
      (uVar8 = *(uint *)(param_1 + 0x130), -1 < (int)uVar8)) &&
     (((((int)uVar8 < DAT_14c9647dc &&
        (lVar15 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8), lVar15 != 0)) &&
       ((*(int *)(lVar15 + 0x10) == *(int *)(param_1 + 0x134) &&
        (((*(uint *)(lVar15 + 8) & 0x10200000) == 0 &&
         (lVar15 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))(), lVar15 != 0)))))) &&
      (lVar15 = *(longlong *)(lVar15 + 0x398), lVar15 != 0)))) {
    lVar11 = FUN_140082f10();
    if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8
         ) == lVar11 + 0x30)) {
      FUN_14027c39a(lVar15,param_3);
    }
  }
  lVar15 = local_2d0 - *(longlong *)(param_1 + 0x450);
  plVar12 = *(longlong **)(param_1 + 0x438);
  if ((plVar12 == (longlong *)0x0) &&
     (plVar12 = *(longlong **)(param_1 + 0x460), plVar12 == (longlong *)0x0)) {
    FUN_140056680(&local_2e0,&DAT_149dfb77a);
  }
  else {
    (**(code **)(*plVar12 + 0x20))(plVar12,&local_2e0);
  }
  plVar12 = *(longlong **)(param_1 + 0x438);
  if ((plVar12 == (longlong *)0x0) &&
     (plVar12 = *(longlong **)(param_1 + 0x460), plVar12 == (longlong *)0x0)) {
    FUN_140056680(&local_2f0,&DAT_149dfb77a);
  }
  else {
    (**(code **)(*plVar12 + 0x28))(plVar12,&local_2f0);
  }
  if (param_3 == (longlong *)0x0) {
    FUN_140056680(&local_300,&DAT_149dfb77a);
    FUN_140056680(&local_310,&DAT_149dfb77a);
  }
  else {
    (**(code **)(*param_3 + 0x20))(param_3,&local_300);
    (**(code **)(*param_3 + 0x28))(param_3,&local_310);
  }
  FUN_140056680(&local_320,L"region");
  if (*(longlong *)(param_1 + 0x430) != *local_350) {
    FUN_14020fad6(&local_320,&DAT_14b3f9006);
  }
  if (local_2d8 < 2) {
    FUN_14020fad6(&local_320,&DAT_149ec90e4);
  }
  if (*local_350 == 0) {
    FUN_14020fad6(&local_320,L"holding_or_quit");
  }
  if (param_4 != '\0') {
    FUN_14020fad6(&local_320,L"periodic_report");
  }
  local_1c0 = 0;
  FUN_140056680(&local_e0,&DAT_149dfb77a);
  (*(code *)(&PTR_FUN_14a1842f0)[local_1c0])(&local_1e0);
  local_1e0 = (undefined4)local_e0;
  uStack_1dc = local_e0._4_4_;
  iStack_1d8 = iStack_d8;
  uStack_1d4 = uStack_d4;
  local_1c0 = 4;
  local_358 = &local_1e0;
  FUN_140d767d6(&local_1b8,&DAT_14cb77ed8,3,L"discovery_transition");
  if ((*(longlong *)(local_1b8 + 0x3c) == 0) || (*(char *)(local_1b8 + 0x38) < local_1b0)) {
    local_2a0 = 0;
    FUN_14101bd16(local_2c0,&DAT_149dfb77a);
    local_358 = local_2c0;
    FUN_140d767d6(local_298,&DAT_14cb77ed8,3,L"discovery_transition");
    FUN_140d76846(&local_170,local_298);
    bVar2 = false;
  }
  else {
    local_344 = (int)*(double *)(param_1 + 0x448);
    local_348 = (int)*(double *)(param_1 + 0x440);
    local_340 = uVar19;
    local_338 = uVar18;
    FUN_1400021e4(local_350,&local_330);
    local_230 = 0;
    FUN_140056680(&local_e0,&DAT_149dfb77a);
    (*(code *)(&PTR_FUN_14a1842f0)[local_230])(&local_250);
    local_250 = (undefined4)local_e0;
    uStack_24c = local_e0._4_4_;
    iStack_248 = iStack_d8;
    uStack_244 = uStack_d4;
    local_230 = 4;
    local_358 = &local_250;
    FUN_140d767d6(local_228,&DAT_14cb77ed8,3,L"discovery_transition");
    FUN_14027c0e6(&local_170,local_228);
    bVar2 = true;
    if (((*(longlong *)(local_170 + 0x3c) != 0) && (local_168 <= *(char *)(local_170 + 0x38))) &&
       (FUN_140d76916(&local_170), *(longlong *)(local_170 + 0x3c) != 0)) {
      cVar13 = *(char *)(local_170 + 0x38);
      if (local_168 <= cVar13) {
        plVar12 = (longlong *)FUN_14027bf48();
        lVar11 = plVar12[1];
        uVar8 = (int)lVar11 + 1;
        *(uint *)(plVar12 + 1) = uVar8;
        if (*(uint *)((longlong)plVar12 + 0xc) < uVar8) {
          FUN_140eed74c();
        }
        pvVar7 = local_320;
        puVar17 = (undefined8 *)((longlong)(int)lVar11 * 0x30 + *plVar12);
        local_e0 = (void *)0x0;
        iStack_d8 = local_318;
        if ((longlong)local_318 == 0) {
          uVar9 = 0;
          iVar14 = 0;
        }
        else {
          FUN_1446dd670(&local_e0,local_318,0);
          memcpy(local_e0,pvVar7,(longlong)local_318 * 2);
          iVar14 = iStack_d8;
          uVar9 = uStack_d4;
        }
        *puVar17 = local_e0;
        *(int *)(puVar17 + 1) = iVar14;
        *(undefined4 *)((longlong)puVar17 + 0xc) = uVar9;
        *(undefined1 *)(puVar17 + 4) = 4;
        puVar17[5] = DAT_14cb78090;
        if (*(longlong *)(local_170 + 0x3c) == 0) {
          bVar2 = true;
          goto LAB_14027b9c3;
        }
        cVar13 = *(char *)(local_170 + 0x38);
      }
      bVar2 = true;
      if (local_168 <= cVar13) {
        plVar12 = (longlong *)FUN_14027bf48(&local_170);
        iVar14 = (int)plVar12[1];
        *(uint *)(plVar12 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar12 + 0xc) < iVar14 + 1U) {
          FUN_140eed74c(plVar12,iVar14);
        }
        lVar11 = *plVar12;
        lVar20 = (longlong)iVar14 * 0x30;
        *(undefined1 *)(lVar11 + 0x20 + lVar20) = 0;
        FUN_140aec01a(lVar11 + lVar20);
        *(undefined8 *)(lVar11 + 0x28 + lVar20) = DAT_14cb780a0;
        if (*(longlong *)(local_170 + 0x3c) == 0) goto LAB_14027b9c3;
        cVar13 = *(char *)(local_170 + 0x38);
      }
      if (local_168 <= cVar13) {
        plVar12 = (longlong *)FUN_14027bf48();
        lVar11 = plVar12[1];
        uVar8 = (int)lVar11 + 1;
        *(uint *)(plVar12 + 1) = uVar8;
        if (*(uint *)((longlong)plVar12 + 0xc) < uVar8) {
          FUN_140eed74c();
        }
        pvVar7 = local_2f0;
        puVar17 = (undefined8 *)((longlong)(int)lVar11 * 0x30 + *plVar12);
        local_e0 = (void *)0x0;
        iStack_d8 = local_2e8;
        if ((longlong)local_2e8 == 0) {
          uVar9 = 0;
          iVar14 = 0;
        }
        else {
          FUN_1446dd670(&local_e0,local_2e8,0);
          memcpy(local_e0,pvVar7,(longlong)local_2e8 * 2);
          iVar14 = iStack_d8;
          uVar9 = uStack_d4;
        }
        *puVar17 = local_e0;
        *(int *)(puVar17 + 1) = iVar14;
        *(undefined4 *)((longlong)puVar17 + 0xc) = uVar9;
        *(undefined1 *)(puVar17 + 4) = 4;
        puVar17[5] = DAT_14cb780b0;
        if (*(longlong *)(local_170 + 0x3c) == 0) goto LAB_14027b9c3;
        cVar13 = *(char *)(local_170 + 0x38);
      }
      if (local_168 <= cVar13) {
        plVar12 = (longlong *)FUN_14027bf48();
        lVar11 = plVar12[1];
        uVar8 = (int)lVar11 + 1;
        *(uint *)(plVar12 + 1) = uVar8;
        if (*(uint *)((longlong)plVar12 + 0xc) < uVar8) {
          FUN_140eed74c();
        }
        pvVar7 = local_2e0;
        puVar17 = (undefined8 *)((longlong)(int)lVar11 * 0x30 + *plVar12);
        local_e0 = (void *)0x0;
        iStack_d8 = local_2d8;
        if ((longlong)local_2d8 == 0) {
          uVar9 = 0;
          iVar14 = 0;
        }
        else {
          FUN_1446dd670(&local_e0,local_2d8,0);
          memcpy(local_e0,pvVar7,(longlong)local_2d8 * 2);
          iVar14 = iStack_d8;
          uVar9 = uStack_d4;
        }
        *puVar17 = local_e0;
        *(int *)(puVar17 + 1) = iVar14;
        *(undefined4 *)((longlong)puVar17 + 0xc) = uVar9;
        *(undefined1 *)(puVar17 + 4) = 4;
        puVar17[5] = DAT_14cb780c0;
        if (*(longlong *)(local_170 + 0x3c) == 0) goto LAB_14027b9c3;
        cVar13 = *(char *)(local_170 + 0x38);
      }
      if (local_168 <= cVar13) {
        plVar12 = (longlong *)FUN_14027bf48(&local_170);
        iVar14 = (int)plVar12[1];
        *(uint *)(plVar12 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar12 + 0xc) < iVar14 + 1U) {
          FUN_140eed74c(plVar12,iVar14);
        }
        lVar11 = *plVar12;
        lVar20 = (longlong)iVar14 * 0x30;
        uVar9 = (undefined4)local_330;
        uVar4 = local_330._4_4_;
        uVar5 = (undefined4)uStack_328;
        uVar6 = uStack_328._4_4_;
        local_330 = 0;
        uStack_328 = 0;
        puVar1 = (undefined4 *)(lVar11 + lVar20);
        *puVar1 = uVar9;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        *(undefined1 *)(lVar11 + 0x20 + lVar20) = 4;
        *(undefined8 *)(lVar11 + 0x28 + lVar20) = DAT_14cb780d0;
        if (*(longlong *)(local_170 + 0x3c) == 0) goto LAB_14027b9c3;
        cVar13 = *(char *)(local_170 + 0x38);
      }
      if (local_168 <= cVar13) {
        plVar12 = (longlong *)FUN_14027bf48();
        lVar11 = plVar12[1];
        uVar8 = (int)lVar11 + 1;
        *(uint *)(plVar12 + 1) = uVar8;
        if (*(uint *)((longlong)plVar12 + 0xc) < uVar8) {
          FUN_140eed74c();
        }
        pvVar7 = local_310;
        puVar17 = (undefined8 *)((longlong)(int)lVar11 * 0x30 + *plVar12);
        local_e0 = (void *)0x0;
        iStack_d8 = local_308;
        if ((longlong)local_308 == 0) {
          uVar9 = 0;
          iVar14 = 0;
        }
        else {
          FUN_1446dd670(&local_e0,local_308,0);
          memcpy(local_e0,pvVar7,(longlong)local_308 * 2);
          iVar14 = iStack_d8;
          uVar9 = uStack_d4;
        }
        *puVar17 = local_e0;
        *(int *)(puVar17 + 1) = iVar14;
        *(undefined4 *)((longlong)puVar17 + 0xc) = uVar9;
        *(undefined1 *)(puVar17 + 4) = 4;
        puVar17[5] = DAT_14cb780e0;
        if (*(longlong *)(local_170 + 0x3c) == 0) goto LAB_14027b9c3;
        cVar13 = *(char *)(local_170 + 0x38);
      }
      if (local_168 <= cVar13) {
        plVar12 = (longlong *)FUN_14027bf48();
        lVar11 = plVar12[1];
        uVar8 = (int)lVar11 + 1;
        *(uint *)(plVar12 + 1) = uVar8;
        if (*(uint *)((longlong)plVar12 + 0xc) < uVar8) {
          FUN_140eed74c();
        }
        pvVar7 = local_300;
        puVar17 = (undefined8 *)((longlong)(int)lVar11 * 0x30 + *plVar12);
        local_e0 = (void *)0x0;
        iStack_d8 = local_2f8;
        if ((longlong)local_2f8 == 0) {
          uVar9 = 0;
          iVar14 = 0;
        }
        else {
          FUN_1446dd670(&local_e0,local_2f8,0);
          memcpy(local_e0,pvVar7,(longlong)local_2f8 * 2);
          iVar14 = iStack_d8;
          uVar9 = uStack_d4;
        }
        *puVar17 = local_e0;
        *(int *)(puVar17 + 1) = iVar14;
        *(undefined4 *)((longlong)puVar17 + 0xc) = uVar9;
        *(undefined1 *)(puVar17 + 4) = 4;
        puVar17[5] = DAT_14cb780f0;
        if (*(longlong *)(local_170 + 0x3c) == 0) goto LAB_14027b9c3;
        cVar13 = *(char *)(local_170 + 0x38);
      }
      if (local_168 <= cVar13) {
        uVar18 = local_340 | local_338;
        plVar12 = (longlong *)FUN_14027bf48(&local_170);
        iVar14 = (int)plVar12[1];
        *(uint *)(plVar12 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar12 + 0xc) < iVar14 + 1U) {
          FUN_140eed74c(plVar12,iVar14);
        }
        lVar11 = *plVar12;
        lVar20 = (longlong)iVar14 * 0x30;
        *(ulonglong *)(lVar11 + lVar20) = uVar18;
        *(undefined1 *)(lVar11 + 0x20 + lVar20) = 2;
        *(undefined8 *)(lVar11 + 0x28 + lVar20) = DAT_14cb78100;
        if (*(longlong *)(local_170 + 0x3c) == 0) goto LAB_14027b9c3;
        cVar13 = *(char *)(local_170 + 0x38);
      }
      if (local_168 <= cVar13) {
        plVar12 = (longlong *)FUN_14027bf48(&local_170);
        iVar14 = (int)plVar12[1];
        *(uint *)(plVar12 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar12 + 0xc) < iVar14 + 1U) {
          FUN_140eed74c(plVar12,iVar14);
        }
        lVar11 = *plVar12;
        lVar20 = (longlong)iVar14 * 0x30;
        *(longlong *)(lVar11 + lVar20) = (longlong)(int)((double)lVar15 / 10000000.0);
        *(undefined1 *)(lVar11 + 0x20 + lVar20) = 2;
        *(undefined8 *)(lVar11 + 0x28 + lVar20) = DAT_14cb78110;
        if (*(longlong *)(local_170 + 0x3c) == 0) goto LAB_14027b9c3;
        cVar13 = *(char *)(local_170 + 0x38);
      }
      if (local_168 <= cVar13) {
        plVar12 = (longlong *)FUN_14027bf48(&local_170);
        iVar14 = (int)plVar12[1];
        *(uint *)(plVar12 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar12 + 0xc) < iVar14 + 1U) {
          FUN_140eed74c(plVar12,iVar14);
        }
        lVar15 = *plVar12;
        lVar11 = (longlong)iVar14 * 0x30;
        *(longlong *)(lVar15 + lVar11) = (longlong)local_348;
        *(undefined1 *)(lVar15 + 0x20 + lVar11) = 2;
        *(undefined8 *)(lVar15 + 0x28 + lVar11) = DAT_14cb78120;
        if (*(longlong *)(local_170 + 0x3c) == 0) goto LAB_14027b9c3;
        cVar13 = *(char *)(local_170 + 0x38);
      }
      if (local_168 <= cVar13) {
        plVar12 = (longlong *)FUN_14027bf48(&local_170);
        iVar14 = (int)plVar12[1];
        *(uint *)(plVar12 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)plVar12 + 0xc) < iVar14 + 1U) {
          FUN_140eed74c(plVar12,iVar14);
        }
        lVar15 = *plVar12;
        lVar11 = (longlong)iVar14 * 0x30;
        *(longlong *)(lVar15 + lVar11) = (longlong)local_344;
        *(undefined1 *)(lVar15 + 0x20 + lVar11) = 2;
        *(undefined8 *)(lVar15 + 0x28 + lVar11) = DAT_14cb78130;
      }
    }
  }
LAB_14027b9c3:
  FUN_14027c224(&local_e0,&local_170);
  uVar8 = 0;
  if ((((*(longlong **)(param_1 + 0x138) == (longlong *)0x0) || (*(int *)(param_1 + 0x134) == 0)) ||
      ((uVar16 = *(uint *)(param_1 + 0x130), (int)uVar16 < 0 ||
       ((DAT_14c9647dc <= (int)uVar16 ||
        (lVar15 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar15 == 0))))))
     || ((*(int *)(lVar15 + 0x10) != *(int *)(param_1 + 0x134) ||
         ((*(uint *)(lVar15 + 8) & 0x10200000) != 0)))) {
    uVar18 = 0;
  }
  else {
    lVar15 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
    uVar18 = 0;
    uVar8 = 0;
    if (lVar15 != 0) {
      uVar8 = *(uint *)(lVar15 + 0xc);
      if ((int)uVar8 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      uVar18 = (ulonglong)*(uint *)(lVar15 + 0x10);
      if (*(uint *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar14 = DAT_14c964868 + 1;
        UNLOCK();
        uVar16 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar14;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar16);
        }
        LOCK();
        uVar10 = *(uint *)(lVar15 + 0x10);
        bVar21 = uVar10 == 0;
        if (bVar21) {
          *(uint *)(lVar15 + 0x10) = uVar16;
          uVar10 = 0;
        }
        UNLOCK();
        if (bVar21) {
          uVar10 = uVar16;
        }
        uVar18 = (ulonglong)uVar10;
      }
    }
  }
  uVar16 = local_68;
  uVar3 = DAT_14c9a3c28;
  if ((((char)local_e0 == '\x01') && (*(longlong *)(CONCAT44(uStack_d4,iStack_d8) + 0x3c) != 0)) &&
     (local_d0 <= *(char *)(CONCAT44(uStack_d4,iStack_d8) + 0x38))) {
    lVar15 = (longlong)(int)local_68;
    local_68 = local_68 + 1;
    if (local_64 < local_68) {
      FUN_141225836(&local_70,uVar16);
    }
    lVar15 = lVar15 * 0x40;
    *(undefined8 *)(local_70 + lVar15) = uVar3;
    *(ulonglong *)(local_70 + 8 + lVar15) = (ulonglong)uVar8 | uVar18 << 0x20;
    puVar17 = (undefined8 *)(local_70 + 0x10 + lVar15);
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17 = (undefined8 *)(local_70 + 0x20 + lVar15);
    *puVar17 = 0;
    puVar17[1] = 0;
    puVar17 = (undefined8 *)(local_70 + 0x30 + lVar15);
    *puVar17 = 0;
    puVar17[1] = 0;
    FUN_1404eec70(0,0);
  }
  FUN_14027c198(&local_e0);
  FUN_1404eec70(local_f8,local_f0);
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(local_108,local_100);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(local_128);
  (*(code *)(&PTR_FUN_14a1842f0)[local_130])(local_150);
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  if (bVar2) {
    (*(code *)(&PTR_FUN_14a1842f0)[local_1e8])(local_208);
    if (local_218 != 0) {
      FUN_1400020a8();
    }
    if (local_330 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    (*(code *)(&PTR_FUN_14a1842f0)[local_258])(local_278);
    if (local_288 != 0) {
      FUN_1400020a8();
    }
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_178])(local_198);
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  *(longlong *)(param_1 + 0x430) = *local_350;
  *(longlong **)(param_1 + 0x438) = local_2c8;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(longlong *)(param_1 + 0x450) = local_2d0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  if (local_320 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_310 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_300 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_2f0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_2e0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14027bf48 FUN_14027bf48 body=60 status=ok
// SIG undefined FUN_14027bf48(void)

longlong FUN_14027bf48(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 == 0) {
    FUN_140d76a74(param_1);
    iVar1 = *(int *)(param_1 + 0x60);
  }
  lVar2 = param_1 + 0x48;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x58);
  }
  return (longlong)(iVar1 + -1) * 0x10 + lVar2;
}



// FUNCTION 14027bf84 FUN_14027bf84 body=353 status=ok
// SIG undefined FUN_14027bf84(void)

void FUN_14027bf84(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14027c009;
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
LAB_14027c009:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 14027c0e6 FUN_14027c0e6 body=178 status=ok
// SIG undefined FUN_14027c0e6(void)

undefined8 * FUN_14027c0e6(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  void *_Src;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar2 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar2,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar2 * 2);
  }
  bVar1 = *(byte *)(param_2 + 8);
  *(byte *)(param_1 + 8) = bVar1;
  (*(code *)(&PTR_LAB_14a184290)[bVar1])(param_1 + 4,param_2 + 4);
  param_1[0xb] = 0;
  param_1[0xc] = 0x100000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 14027c198 FUN_14027c198 body=139 status=ok
// SIG undefined FUN_14027c198(void)

void FUN_14027c198(char *param_1)

{
  if (*param_1 == '\x01') {
    FUN_14027c70a(param_1 + 8);
  }
  FUN_1404eec70(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_1404eecb3(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_1404eec06(param_1 + 0x50);
  (*(code *)(&PTR_FUN_14a1842f0)[(byte)param_1[0x48]])(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14027c224 FUN_14027c224 body=374 status=ok
// SIG undefined FUN_14027c224(void)

longlong FUN_14027c224(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(longlong *)(*param_2 + 0x3c) == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = (char)param_2[1] <= *(char *)(*param_2 + 0x38);
  }
  *(bool *)param_1 = bVar4;
  *(longlong *)(param_1 + 8) = *param_2;
  *(char *)(param_1 + 0x10) = (char)param_2[1];
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(longlong *)(param_1 + 0x18) = param_2[2];
  param_2[2] = 0;
  *(int *)(param_1 + 0x20) = (int)param_2[3];
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  bVar1 = *(byte *)(param_2 + 8);
  *(byte *)(param_1 + 0x48) = bVar1;
  (*(code *)(&PTR_LAB_14a184230)[bVar1])(param_1 + 0x28,param_2 + 4);
  *(undefined8 *)(param_1 + 0x60) = 0;
  lVar5 = param_2[0xb];
  if (lVar5 == 0) {
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x4c);
    lVar5 = param_2[10];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x54);
    *(int *)(param_1 + 0x50) = (int)param_2[9];
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(int *)(param_1 + 0x58) = (int)lVar5;
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    lVar5 = param_2[0xb];
  }
  *(longlong *)(param_1 + 0x60) = lVar5;
  param_2[0xb] = 0;
  *(int *)(param_1 + 0x68) = (int)param_2[0xc];
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 100);
  param_2[0xc] = 0x100000000;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(longlong *)(param_1 + 0x70) = param_2[0xd];
  param_2[0xd] = 0;
  *(int *)(param_1 + 0x78) = (int)param_2[0xe];
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x74);
  param_2[0xe] = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(longlong *)(param_1 + 0x80) = param_2[0xf];
  param_2[0xf] = 0;
  *(int *)(param_1 + 0x88) = (int)param_2[0x10];
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x84);
  param_2[0x10] = 0;
  *(longlong *)(param_1 + 0x90) = param_2[0x11];
  plVar6 = (longlong *)param_2[0xb];
  if ((longlong *)param_2[0xb] == (longlong *)0x0) {
    plVar6 = param_2 + 9;
  }
  FUN_1404eec3a(plVar6,(int)param_2[0xc]);
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (*(int *)((longlong)param_2 + 100) != 0) {
    FUN_140df29ac(param_2 + 9,0);
  }
  FUN_1404eecb3(param_2[0xd],(int)param_2[0xe]);
  *(undefined4 *)(param_2 + 0xe) = 0;
  if (*(int *)((longlong)param_2 + 0x74) != 0) {
    FUN_1470b02ee(param_2 + 0xd);
  }
  return param_1;
}


