// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144b6b8e0 FUN_144b6b8e0 body=106 status=ok
// SIG undefined FUN_144b6b8e0(void)

void FUN_144b6b8e0(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = Imf_3_2::OStream::vftable;
  uVar1 = param_1[4];
  if (0xf < uVar1) {
    lVar2 = param_1[1];
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
  }
  param_1[3] = 0;
  param_1[4] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 144b6b950 FUN_144b6b950 body=15 status=ok
// SIG undefined FUN_144b6b950(void)

longlong * FUN_144b6b950(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (0xf < *(ulonglong *)(param_1 + 0x20)) {
    plVar1 = (longlong *)*plVar1;
  }
  return plVar1;
}



// FUNCTION 144b6b960 FUN_144b6b960 body=71 status=ok
// SIG undefined FUN_144b6b960(void)

undefined8 * FUN_144b6b960(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = Imf_3_2::OStream::vftable;
  lVar1 = -1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  FUN_140cd1a74();
  return param_1;
}



// FUNCTION 144b6b9b0 FUN_144b6b9b0 body=139 status=ok
// SIG undefined FUN_144b6b9b0(void)

undefined8 * FUN_144b6b9b0(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_1 = Imf_3_2::OStream::vftable;
  uVar1 = param_1[4];
  if (0xf < uVar1) {
    lVar2 = param_1[1];
    uVar4 = uVar1 + 1;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      uVar4 = uVar1 + 0x28;
      if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
  }
  param_1[3] = 0;
  param_1[4] = 0xf;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 144b6ba40 FUN_144b6ba40 body=503 status=ok
// SIG undefined FUN_144b6ba40(void)

void FUN_144b6ba40(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_1a8 = param_1;
  local_1a0 = param_2;
  FUN_144e66980();
  *param_1 = Imf_3_2::InputFile::vftable;
  local_198 = FUN_14494321d(0xf0);
  if (local_198 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_144b6ce90(local_198,param_3);
  }
  puVar5 = (undefined8 *)0x0;
  param_1[1] = lVar3;
  *(undefined8 *)(lVar3 + 0xe0) = 0;
  *(undefined1 *)(param_1[1] + 0xe8) = 0;
  FUN_144e66990(param_1,param_2,param_1[1] + 0x68);
  if ((*(uint *)(param_1[1] + 0x68) >> 0xc & 1) == 0) {
    puVar4 = (undefined8 *)FUN_14494321d(0x60);
    if (puVar4 != (undefined8 *)0x0) {
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
      puVar5 = puVar4;
    }
    *(undefined8 **)(param_1[1] + 0xe0) = puVar5;
    *(undefined8 *)(*(longlong *)(param_1[1] + 0xe0) + 0x50) = param_2;
    lVar3 = param_1[1];
    FUN_144b69700(lVar3 + 0x50,*(undefined8 *)(*(longlong *)(lVar3 + 0xe0) + 0x50),lVar3 + 0x68);
    if (((*(uint *)(param_1[1] + 0x68) >> 0xb & 1) != 0) &&
       (cVar2 = FUN_144b68010(param_1[1] + 0x50), cVar2 == '\0')) {
      FUN_144e41060(local_88,"Non-image files must have a \'type\' attribute");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_88,(ThrowInfo *)&DAT_14c6d51d8);
    }
    uVar1 = *(uint *)(param_1[1] + 0x68);
    if ((((uVar1 >> 0xb & 1) == 0) && ((uVar1 >> 0xc & 1) == 0)) &&
       (cVar2 = FUN_144b68010(param_1[1] + 0x50), cVar2 != '\0')) {
      puVar5 = &DAT_14c6d9588;
      if ((*(uint *)(param_1[1] + 0x68) >> 9 & 1) != 0) {
        puVar5 = &DAT_14c6d95a8;
      }
      FUN_144b67d10(param_1[1] + 0x50,puVar5);
    }
    FUN_144b683a0(param_1[1] + 0x50,*(uint *)(param_1[1] + 0x68) >> 9 & 0xffffff01,0);
    FUN_144b6c4f0(param_1);
  }
  else {
    FUN_144b6cb00(param_1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 144b6bc50 FUN_144b6bc50 body=146 status=ok
// SIG undefined FUN_144b6bc50(void)

void FUN_144b6bc50(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = Imf_3_2::InputFile::vftable;
  if ((*(char *)(param_1[1] + 0xe8) != '\0') &&
     (puVar1 = *(undefined8 **)(*(longlong *)(param_1[1] + 0xe0) + 0x50),
     puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((*(int *)(param_1[1] + 0xc4) == -1) && (lVar2 = *(longlong *)(param_1[1] + 0xe0), lVar2 != 0))
  {
    _Mtx_destroy_in_situ(lVar2);
    thunk_FUN_1400020a8(lVar2,0x60);
  }
  if (param_1[1] != 0) {
    FUN_144b6d130(param_1[1],1);
  }
  FUN_144e66970(param_1);
  return;
}



// FUNCTION 144b6bcf0 FUN_144b6bcf0 body=20 status=ok
// SIG undefined FUN_144b6bcf0(void)

void FUN_144b6bcf0(longlong param_1)

{
  FUN_144b6b7f0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xe0) + 0x50));
  return;
}



// FUNCTION 144b6bd10 FUN_144b6bd10 body=9 status=ok
// SIG undefined FUN_144b6bd10(void)

longlong FUN_144b6bd10(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + 0x50;
}



// FUNCTION 144b6bd20 FUN_144b6bd20 body=1252 status=ok
// SIG undefined FUN_144b6bd20(void)

void FUN_144b6bd20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 local_110;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined1 local_e0 [8];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  ulonglong local_68;
  
  local_68 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar3 + 0x6c) == '\0') {
    if (*(longlong *)(lVar3 + 0xb0) == 0) {
      FUN_144e6eef0(*(undefined8 *)(lVar3 + 0x78));
      FUN_144b6cce0(*(longlong *)(param_1 + 8) + 0x98,param_2);
    }
    else {
      FUN_144e76c30();
    }
  }
  else {
    local_e8 = lVar3;
    iVar4 = _Mtx_lock(lVar3);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(lVar3 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(lVar3 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    lVar10 = *(longlong *)(param_1 + 8) + 0x98;
    FUN_144b72eb0(lVar10,&local_100);
    FUN_144b72eb0(param_2,&local_f0);
    plVar6 = (longlong *)FUN_144b72ed0(lVar10,&local_108);
    if (local_100 != *plVar6) {
      while (plVar6 = (longlong *)FUN_144b72ed0(param_2,&local_f8), local_f0 != *plVar6) {
        pcVar12 = (char *)(local_100 + 0x20);
        lVar11 = (local_f0 + 0x20) - (longlong)pcVar12;
        do {
          cVar1 = *pcVar12;
          cVar2 = pcVar12[lVar11];
          if (cVar1 != cVar2) break;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        if ((cVar1 != cVar2) || (*(int *)(local_100 + 0x120) != *(int *)(local_f0 + 0x120))) break;
        FUN_144b6cdf0(&local_100);
        FUN_144b6cdf0(&local_f0);
        plVar6 = (longlong *)FUN_144b72ed0(lVar10,&local_108);
        if (local_100 == *plVar6) break;
      }
    }
    plVar6 = (longlong *)FUN_144b72ed0(lVar10);
    if ((local_100 != *plVar6) || (plVar6 = (longlong *)FUN_144b72ed0(param_2), local_f0 != *plVar6)
       ) {
      FUN_144b6cfa0(*(undefined8 *)(param_1 + 8));
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xb8) = 0xffffffff;
      piVar7 = (int *)FUN_144b67b00(*(longlong *)(param_1 + 8) + 0x50);
      plVar6 = (longlong *)FUN_14494321d(0x10);
      local_f8 = plVar6;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        *plVar6 = 0;
        plVar6[1] = 0;
        *plVar6 = 0;
        plVar6[1] = 0;
        lVar10 = FUN_14494321d(0x158);
        *(longlong *)lVar10 = lVar10;
        *(longlong *)(lVar10 + 8) = lVar10;
        *(longlong *)(lVar10 + 0x10) = lVar10;
        *(undefined2 *)(lVar10 + 0x18) = 0x101;
        *plVar6 = lVar10;
      }
      *(longlong **)(*(longlong *)(param_1 + 8) + 0xa8) = plVar6;
      *(int *)(*(longlong *)(param_1 + 8) + 0xbc) = *piVar7;
      uVar5 = FUN_144e74530(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70));
      uVar14 = (piVar7[2] - *piVar7) + 1;
      if ((uVar14 != 0) && ((uint)(0xffffffff / (ulonglong)uVar14) < uVar5)) {
        FUN_144e47140(local_c8,"Integer multiplication overflow.");
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_c8,(ThrowInfo *)&DAT_14c6d5240);
      }
      uVar14 = uVar14 * uVar5;
      FUN_144b72eb0(param_2,&local_108);
      while (plVar6 = (longlong *)FUN_144b72ed0(param_2,&local_f8), local_108 != *plVar6) {
        iVar4 = *(int *)(local_108 + 0x120);
        local_b8 = *(undefined8 *)(local_108 + 0x130);
        uStack_b0 = *(undefined8 *)(local_108 + 0x138);
        uVar9 = *(undefined8 *)(local_108 + 0x148);
        local_98 = *(undefined8 *)(local_108 + 0x150);
        uVar8 = FUN_144b67b60(*(longlong *)(param_1 + 8) + 0x50);
        plVar6 = (longlong *)FUN_144b65f30(uVar8,local_e0);
        lVar11 = local_108;
        lVar10 = *plVar6;
        uVar8 = FUN_144b67b60(*(longlong *)(param_1 + 8) + 0x50);
        plVar6 = (longlong *)FUN_144b65f50(uVar8,local_d8,lVar11 + 0x20);
        if (*plVar6 != lVar10) {
          if (iVar4 == 0) {
            uVar8 = SUB168(ZEXT816(4) * ZEXT416(uVar14),0);
            if (SUB168(ZEXT816(4) * ZEXT416(uVar14),8) != 0) {
              uVar8 = 0xffffffffffffffff;
            }
            lVar11 = FUN_144a7d36f(uVar8);
            lVar10 = local_108;
            iVar4 = FUN_144e74540(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70),0);
            lVar11 = lVar11 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0xbc) * -4;
            uVar8 = 0;
LAB_144b6c0d6:
            local_138 = (longlong)iVar4 << 2;
            uVar13 = 4;
          }
          else {
            if (iVar4 != 1) {
              if (iVar4 != 2) {
                FUN_144e40d70(local_c8,"Unknown pixel data type.");
                    /* WARNING: Subroutine does not return */
                _CxxThrowException(local_c8,(ThrowInfo *)&DAT_14c6d50e0);
              }
              uVar8 = SUB168(ZEXT816(4) * ZEXT416(uVar14),0);
              if (SUB168(ZEXT816(4) * ZEXT416(uVar14),8) != 0) {
                uVar8 = 0xffffffffffffffff;
              }
              lVar11 = FUN_144a7d36f(uVar8);
              lVar10 = local_108;
              iVar4 = FUN_144e74540(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70),0);
              lVar11 = lVar11 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0xbc) * -4;
              uVar8 = 2;
              goto LAB_144b6c0d6;
            }
            uVar8 = SUB168(ZEXT816(2) * ZEXT416(uVar14),0);
            if (SUB168(ZEXT816(2) * ZEXT416(uVar14),8) != 0) {
              uVar8 = 0xffffffffffffffff;
            }
            lVar11 = FUN_144a7d36f(uVar8);
            lVar10 = local_108;
            iVar4 = FUN_144e74540(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70),0);
            local_138 = (longlong)iVar4 * 2;
            lVar11 = lVar11 + (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0xbc) * -2;
            uVar13 = 2;
            uVar8 = 1;
          }
          local_110 = 1;
          local_118 = 0;
          local_128 = 1;
          local_130 = 1;
          local_120 = uVar9;
          uVar9 = FUN_144b72800(local_c8,uVar8,lVar11,uVar13);
          FUN_144b72840(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa8),lVar10 + 0x20,uVar9);
        }
        FUN_144b6cdf0(&local_108);
      }
      FUN_144e73e00(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70),
                    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa8));
    }
    FUN_144b6cce0(*(longlong *)(param_1 + 8) + 0x98,param_2);
    _Mtx_unlock(lVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_68 ^ (ulonglong)auStack_158);
}



// FUNCTION 144b6c230 FUN_144b6c230 body=146 status=ok
// SIG undefined FUN_144b6c230(void)

longlong FUN_144b6c230(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar3 + 0xb0) != 0) {
    lVar3 = FUN_144e77220();
    return lVar3;
  }
  if (*(char *)(lVar3 + 0x6c) == '\0') {
    lVar3 = FUN_144e6fa10(*(undefined8 *)(lVar3 + 0x78));
    return lVar3;
  }
  iVar2 = _Mtx_lock(lVar3);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar3 + 0x4c) != 0x7fffffff) {
    lVar1 = *(longlong *)(param_1 + 8);
    _Mtx_unlock(lVar3);
    return lVar1 + 0x98;
  }
  *(undefined4 *)(lVar3 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  std::_Throw_Cpp_error(6);
}



// FUNCTION 144b6c2d0 FUN_144b6c2d0 body=164 status=ok
// SIG undefined FUN_144b6c2d0(void)

void FUN_144b6c2d0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar1 + 0xb0) == 0) {
    if (*(char *)(lVar1 + 0x6c) == '\0') {
      FUN_144e6fa70(*(undefined8 *)(lVar1 + 0x78));
    }
    else {
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
      FUN_144b6d250(*(undefined8 *)(param_1 + 8),param_2,param_3);
      _Mtx_unlock(lVar1);
    }
  }
  else {
    FUN_144e77230();
  }
  return;
}



// FUNCTION 144b6c380 FUN_144b6c380 body=182 status=ok
// SIG undefined FUN_144b6c380(void)

void FUN_144b6c380(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 & 0xffffffff;
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar1 + 0xb0) != 0) {
    FUN_144e77230(*(longlong *)(lVar1 + 0xb0),param_2,param_2 & 0xffffffff);
    return;
  }
  if (*(char *)(lVar1 + 0x6c) == '\0') {
    FUN_144e6fa70(*(undefined8 *)(lVar1 + 0x78),param_2,uVar3);
    return;
  }
  iVar2 = _Mtx_lock(lVar1);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar1 + 0x4c) != 0x7fffffff) {
    FUN_144b6d250(*(undefined8 *)(param_1 + 8),uVar3,uVar3);
    _Mtx_unlock(lVar1);
    return;
  }
  *(undefined4 *)(lVar1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  std::_Throw_Cpp_error(6);
}



// FUNCTION 144b6c440 FUN_144b6c440 body=168 status=ok
// SIG undefined FUN_144b6c440(void)

undefined8 * FUN_144b6c440(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_144e66980();
  *param_1 = Imf_3_2::InputFile::vftable;
  lVar1 = FUN_14494321d(0xf0);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = FUN_144b6ce90(lVar1,*(undefined4 *)(param_2 + 0x18));
  }
  param_1[1] = lVar2;
  *(undefined1 *)(lVar2 + 0xe8) = 0;
  *(undefined8 *)(param_1[1] + 0xe0) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1[1] + 0x68) = *(undefined4 *)(param_2 + 0x20);
  FUN_144b67310(param_1[1] + 0x50,param_2);
  *(undefined4 *)(param_1[1] + 0xc4) = *(undefined4 *)(param_2 + 0x1c);
  *(longlong *)(param_1[1] + 200) = param_2;
  FUN_144b6c4f0(param_1);
  return param_1;
}



// FUNCTION 144b6c4f0 FUN_144b6c4f0 body=1518 status=ok
// SIG undefined FUN_144b6c4f0(void)

void FUN_144b6c4f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  longlong local_188;
  undefined1 local_178 [16];
  undefined1 local_168 [240];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar4 = *(longlong *)(param_1 + 8) + 0x50;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 200) == 0) {
    cVar1 = FUN_144b68010(lVar4);
    if (cVar1 != '\0') {
      puVar3 = (undefined8 *)FUN_144b67ef0(*(longlong *)(param_1 + 8) + 0x50);
      puVar9 = &DAT_14c6d95c8;
      if (0xf < DAT_14c6d95e0) {
        puVar9 = DAT_14c6d95c8;
      }
      puVar8 = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar8 = (undefined8 *)*puVar3;
      }
      if ((puVar3[2] == DAT_14c6d95d8) && (iVar2 = memcmp(puVar8,puVar9,puVar3[2]), iVar2 == 0)) {
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x6c) = 0;
        lVar4 = FUN_144b67b00(*(longlong *)(param_1 + 8) + 0x50);
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x8c) = *(undefined4 *)(lVar4 + 4);
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x90) = *(undefined4 *)(lVar4 + 0xc);
        local_188 = FUN_14494321d(0x10);
        uVar6 = 0;
        uVar5 = uVar6;
        if (local_188 != 0) {
          lVar4 = *(longlong *)(param_1 + 8);
          local_198 = *(undefined4 *)(lVar4 + 0xc0);
          uVar5 = FUN_144e7a610(local_188,lVar4 + 0x50,
                                *(undefined8 *)(*(longlong *)(lVar4 + 0xe0) + 0x50),
                                *(undefined4 *)(lVar4 + 0x68));
        }
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x80) = uVar5;
        local_188 = FUN_14494321d(0x10);
        if (local_188 != 0) {
          uVar6 = FUN_144e76ac0(local_188);
        }
LAB_144b6c864:
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0) = uVar6;
        FUN_144e76bd0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xb0),
                      *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x80));
        goto LAB_144b6ca00;
      }
    }
    lVar4 = *(longlong *)(param_1 + 8);
    if (((*(uint *)(lVar4 + 0x68) >> 9 & 1) != 0) && ((*(uint *)(lVar4 + 0x68) >> 0xb & 1) == 0)) {
      *(undefined1 *)(lVar4 + 0x6c) = 1;
      puVar7 = (undefined4 *)FUN_144b67ba0(*(longlong *)(param_1 + 8) + 0x50);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x88) = *puVar7;
      lVar4 = FUN_144b67b00(*(longlong *)(param_1 + 8) + 0x50);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x8c) = *(undefined4 *)(lVar4 + 4);
      *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x90) = *(undefined4 *)(lVar4 + 0xc);
      local_188 = FUN_14494321d(0x10);
      if (local_188 == 0) {
        uVar5 = 0;
      }
      else {
        lVar4 = *(longlong *)(param_1 + 8);
        local_198 = *(undefined4 *)(lVar4 + 0xc0);
        uVar5 = FUN_144e74d10(local_188,lVar4 + 0x50,
                              *(undefined8 *)(*(longlong *)(lVar4 + 0xe0) + 0x50),
                              *(undefined4 *)(lVar4 + 0x68));
      }
      *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70) = uVar5;
      goto LAB_144b6ca00;
    }
    cVar1 = FUN_144b68010(lVar4 + 0x50);
    if (cVar1 != '\0') {
      puVar3 = (undefined8 *)FUN_144b67ef0(*(longlong *)(param_1 + 8) + 0x50);
      puVar9 = &DAT_14c6d9588;
      if (0xf < DAT_14c6d95a0) {
        puVar9 = DAT_14c6d9588;
      }
      puVar8 = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar8 = (undefined8 *)*puVar3;
      }
      if ((puVar3[2] != DAT_14c6d9598) || (iVar2 = memcmp(puVar8,puVar9,puVar3[2]), iVar2 != 0)) {
        FUN_144e47110();
        FUN_1470a639e(local_178,1);
        uVar5 = FUN_144b67ef0(*(longlong *)(param_1 + 8) + 0x50);
        uVar6 = FUN_141302cc4(local_168,"InputFile cannot handle parts of type ");
        FUN_144b6d940(uVar6,uVar5);
        FUN_144e40dd0(local_78,local_178);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
      }
    }
    local_188 = FUN_14494321d(0x18);
    if (local_188 == 0) {
      uVar5 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 8);
      uVar5 = FUN_144e6ed50(local_188,lVar4 + 0x50,
                            *(undefined8 *)(*(longlong *)(lVar4 + 0xe0) + 0x50),
                            *(undefined4 *)(lVar4 + 0xc0));
    }
  }
  else {
    cVar1 = FUN_144b68010(lVar4);
    if (cVar1 != '\0') {
      puVar3 = (undefined8 *)FUN_144b67ef0(*(longlong *)(param_1 + 8) + 0x50);
      puVar9 = &DAT_14c6d95c8;
      if (0xf < DAT_14c6d95e0) {
        puVar9 = DAT_14c6d95c8;
      }
      puVar8 = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar8 = (undefined8 *)*puVar3;
      }
      if ((puVar3[2] == DAT_14c6d95d8) && (iVar2 = memcmp(puVar8,puVar9,puVar3[2]), iVar2 == 0)) {
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x6c) = 0;
        lVar4 = FUN_144b67b00(*(longlong *)(param_1 + 8) + 0x50);
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x8c) = *(undefined4 *)(lVar4 + 4);
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x90) = *(undefined4 *)(lVar4 + 0xc);
        local_188 = FUN_14494321d(0x10);
        uVar6 = 0;
        uVar5 = uVar6;
        if (local_188 != 0) {
          uVar5 = FUN_144e7b4c0(local_188,*(undefined8 *)(*(longlong *)(param_1 + 8) + 200));
        }
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x80) = uVar5;
        local_188 = FUN_14494321d(0x10);
        if (local_188 != 0) {
          uVar6 = FUN_144e76ac0(local_188);
        }
        goto LAB_144b6c864;
      }
    }
    cVar1 = FUN_144b68010(*(longlong *)(param_1 + 8) + 0x50);
    if (cVar1 != '\0') {
      puVar3 = (undefined8 *)FUN_144b67ef0(*(longlong *)(param_1 + 8) + 0x50);
      puVar9 = &DAT_14c6d95a8;
      if (0xf < DAT_14c6d95c0) {
        puVar9 = DAT_14c6d95a8;
      }
      puVar8 = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar8 = (undefined8 *)*puVar3;
      }
      if ((puVar3[2] == DAT_14c6d95b8) && (iVar2 = memcmp(puVar8,puVar9,puVar3[2]), iVar2 == 0)) {
        *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x6c) = 1;
        puVar7 = (undefined4 *)FUN_144b67ba0(*(longlong *)(param_1 + 8) + 0x50);
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x88) = *puVar7;
        lVar4 = FUN_144b67b00(*(longlong *)(param_1 + 8) + 0x50);
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x8c) = *(undefined4 *)(lVar4 + 4);
        *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x90) = *(undefined4 *)(lVar4 + 0xc);
        local_188 = FUN_14494321d(0x10);
        if (local_188 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_144e74ca0(local_188,*(undefined8 *)(*(longlong *)(param_1 + 8) + 200));
        }
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70) = uVar5;
        goto LAB_144b6ca00;
      }
    }
    cVar1 = FUN_144b68010(*(longlong *)(param_1 + 8) + 0x50);
    if (cVar1 != '\0') {
      puVar3 = (undefined8 *)FUN_144b67ef0(*(longlong *)(param_1 + 8) + 0x50);
      puVar9 = &DAT_14c6d9588;
      if (0xf < DAT_14c6d95a0) {
        puVar9 = DAT_14c6d9588;
      }
      puVar8 = puVar3;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar8 = (undefined8 *)*puVar3;
      }
      if ((puVar3[2] != DAT_14c6d9598) || (iVar2 = memcmp(puVar8,puVar9,puVar3[2]), iVar2 != 0)) {
        FUN_144e47110();
        FUN_1470a639e(local_178,1);
        uVar5 = FUN_144b67ef0(*(longlong *)(param_1 + 8) + 0x50);
        uVar6 = FUN_141302cc4(local_168,"InputFile cannot handle parts of type ");
        FUN_144b6d940(uVar6,uVar5);
        FUN_144e40dd0(local_78,local_178);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
      }
    }
    local_188 = FUN_14494321d(0x18);
    if (local_188 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_144e6fce0(local_188,*(undefined8 *)(*(longlong *)(param_1 + 8) + 200));
    }
  }
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x78) = uVar5;
LAB_144b6ca00:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_1b8);
}



// FUNCTION 144b6cb00 FUN_144b6cb00 body=205 status=ok
// SIG undefined FUN_144b6cb00(void)

void FUN_144b6cb00(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  (**(code **)(*param_2 + 0x28))(param_2,0);
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0xd0) = 1;
  lVar1 = FUN_14494321d();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144e6b040(lVar1,param_2,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc0),1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xd8) = uVar2;
  lVar1 = FUN_144e6b0d0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0xd8),0);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xe0) = *(undefined8 *)(lVar1 + 0x28);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x68) = *(undefined4 *)(lVar1 + 0x20);
  FUN_144b67310(*(longlong *)(param_1 + 8) + 0x50,lVar1);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xc4) = *(undefined4 *)(lVar1 + 0x1c);
  *(longlong *)(*(longlong *)(param_1 + 8) + 200) = lVar1;
  FUN_144b6c4f0(param_1);
  return;
}



// FUNCTION 144b6cbd0 FUN_144b6cbd0 body=181 status=ok
// SIG undefined FUN_144b6cbd0(void)

undefined8 * FUN_144b6cbd0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = Imf_3_2::InputFile::vftable;
  if ((*(char *)(param_1[1] + 0xe8) != '\0') &&
     (puVar1 = *(undefined8 **)(*(longlong *)(param_1[1] + 0xe0) + 0x50),
     puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((*(int *)(param_1[1] + 0xc4) == -1) && (lVar2 = *(longlong *)(param_1[1] + 0xe0), lVar2 != 0))
  {
    _Mtx_destroy_in_situ(lVar2);
    thunk_FUN_1400020a8(lVar2,0x60);
  }
  if (param_1[1] != 0) {
    FUN_144b6d130(param_1[1],1);
  }
  FUN_144e66970(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144b6cc90 FUN_144b6cc90 body=52 status=ok
// SIG undefined FUN_144b6cc90(void)

undefined8 FUN_144b6cc90(undefined8 param_1,ulonglong param_2)

{
  _Mtx_destroy_in_situ();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 144b6ccd0 FUN_144b6ccd0 body=4 status=ok
// SIG undefined FUN_144b6ccd0(void)

undefined8 FUN_144b6ccd0(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 144b6cce0 FUN_144b6cce0 body=268 status=ok
// SIG undefined FUN_144b6cce0(void)

longlong * FUN_144b6cce0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  if (param_1 != param_2) {
    lVar2 = *param_1;
    cVar1 = *(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19);
    plVar4 = *(longlong **)(lVar2 + 8);
    while (cVar1 == '\0') {
      FUN_14698d1ae(param_1,param_1,plVar4[2]);
      plVar3 = (longlong *)*plVar4;
      thunk_FUN_1400020a8(plVar4,0x158);
      plVar4 = plVar3;
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
    }
    *(longlong *)(lVar2 + 8) = lVar2;
    *(longlong *)lVar2 = lVar2;
    *(longlong *)(lVar2 + 0x10) = lVar2;
    param_1[1] = 0;
    uVar7 = FUN_144b6d960(param_1,*(undefined8 *)(*param_2 + 8),*param_1);
    *(undefined8 *)(*param_1 + 8) = uVar7;
    plVar4 = (longlong *)*param_1;
    param_1[1] = param_2[1];
    plVar3 = (longlong *)plVar4[1];
    if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar3 + 0x19);
      plVar6 = (longlong *)*plVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar6 + 0x19);
        plVar3 = plVar6;
        plVar6 = (longlong *)*plVar6;
      }
      *plVar4 = (longlong)plVar3;
      lVar2 = *(longlong *)(*param_1 + 8);
      lVar5 = *(longlong *)(lVar2 + 0x10);
      cVar1 = *(char *)(lVar5 + 0x19);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(longlong *)(lVar5 + 0x10) + 0x19);
        lVar2 = lVar5;
        lVar5 = *(longlong *)(lVar5 + 0x10);
      }
      *(longlong *)(*param_1 + 0x10) = lVar2;
      return param_1;
    }
    *plVar4 = (longlong)plVar4;
    *(longlong *)(*param_1 + 0x10) = *param_1;
  }
  return param_1;
}



// FUNCTION 144b6cdf0 FUN_144b6cdf0 body=102 status=ok
// SIG undefined FUN_144b6cdf0(void)

longlong * FUN_144b6cdf0(longlong *param_1)

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



// FUNCTION 144b6ce60 FUN_144b6ce60 body=47 status=ok
// SIG undefined FUN_144b6ce60(void)

ulonglong FUN_144b6ce60(uint param_1,int param_2)

{
  if (-1 < (int)param_1) {
    return (longlong)(int)param_1 / (longlong)param_2 & 0xffffffff;
  }
  if (-1 < param_2) {
    return (ulonglong)(uint)-((int)((param_2 - param_1) + -1) / param_2);
  }
  return (ulonglong)(uint)-((int)(~param_1 - param_2) / param_2);
}



// FUNCTION 144b6ce90 FUN_144b6ce90 body=257 status=ok
// SIG undefined FUN_144b6ce90(void)

longlong FUN_144b6ce90(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 local_res18;
  longlong *local_res20;
  
  _Mtx_init_in_situ(param_1,2);
  local_res18 = 0;
  FUN_144b66f80(param_1 + 0x50,0x40,0x40,0x3f800000,&local_res18,0x3f800000,0,3);
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  plVar1 = (longlong *)(param_1 + 0x98);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  local_res20 = plVar1;
  lVar2 = FUN_14494321d(0x158);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *plVar1 = lVar2;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  return param_1;
}



// FUNCTION 144b6cfa0 FUN_144b6cfa0 body=380 status=ok
// SIG undefined FUN_144b6cfa0(void)

void FUN_144b6cfa0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_80 [8];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_144b72ea0(*(longlong *)(param_1 + 0xa8),&local_88);
    plVar5 = (longlong *)FUN_144b72ec0(*(undefined8 *)(param_1 + 0xa8),local_80);
    if (local_88 != *plVar5) {
      do {
        iVar2 = *(int *)(local_88 + 0x120);
        if (iVar2 == 0) {
LAB_144b6d026:
          lVar6 = *(longlong *)(local_88 + 0x128) + (longlong)*(int *)(param_1 + 0xbc) * 4;
LAB_144b6d038:
          thunk_FUN_1400020a8(lVar6);
        }
        else {
          if (iVar2 == 1) {
            lVar6 = *(longlong *)(local_88 + 0x128) + (longlong)*(int *)(param_1 + 0xbc) * 2;
            goto LAB_144b6d038;
          }
          if (iVar2 == 2) goto LAB_144b6d026;
          if (iVar2 == 3) {
            FUN_144e40d70(local_78,"Invalid pixel type");
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d50e0);
          }
        }
        FUN_144b6cdf0(&local_88);
        plVar5 = (longlong *)FUN_144b72ec0(*(undefined8 *)(param_1 + 0xa8),local_80);
      } while (local_88 != *plVar5);
    }
    plVar5 = *(longlong **)(param_1 + 0xa8);
    if (plVar5 != (longlong *)0x0) {
      cVar1 = *(char *)((longlong)*(longlong **)(*plVar5 + 8) + 0x19);
      plVar4 = *(longlong **)(*plVar5 + 8);
      while (cVar1 == '\0') {
        FUN_14698d1ae(plVar5,plVar5,plVar4[2]);
        plVar3 = (longlong *)*plVar4;
        thunk_FUN_1400020a8(plVar4,0x158);
        plVar4 = plVar3;
        cVar1 = *(char *)((longlong)plVar3 + 0x19);
      }
      thunk_FUN_1400020a8(*plVar5,0x158);
      thunk_FUN_1400020a8(plVar5,0x10);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
}



// FUNCTION 144b6d130 FUN_144b6d130 body=286 status=ok
// SIG undefined FUN_144b6d130(void)

longlong FUN_144b6d130(longlong param_1,uint param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x70);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x80);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_144b6cfa0(param_1);
  if ((*(char *)(param_1 + 0xd0) != '\0') &&
     (puVar2 = *(undefined8 **)(param_1 + 0xd8), puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x98) + 8);
  cVar1 = *(char *)((longlong)plVar3 + 0x19);
  while (cVar1 == '\0') {
    FUN_14698d1ae(param_1 + 0x98,param_1 + 0x98,plVar3[2]);
    plVar4 = (longlong *)*plVar3;
    thunk_FUN_1400020a8(plVar3,0x158);
    plVar3 = plVar4;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x98),0x158);
  FUN_144b67220(param_1 + 0x50);
  _Mtx_destroy_in_situ(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 144b6d250 FUN_144b6d250 body=1760 status=ok
// SIG undefined FUN_144b6d250(void)

void FUN_144b6d250(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 *puVar14;
  float *pfVar15;
  longlong lVar16;
  float fVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auStack_1e8 [32];
  uint local_1c8;
  undefined4 local_1c0;
  int local_1b8;
  uint local_1b4;
  float local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  int local_1a0;
  uint local_19c;
  uint local_198;
  longlong local_190;
  longlong local_188;
  int local_180 [2];
  int local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  undefined1 local_158 [8];
  undefined1 local_150 [4];
  uint local_14c;
  uint local_144;
  int local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  longlong local_130;
  longlong lStack_128;
  undefined1 local_120 [24];
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  undefined1 local_f0 [8];
  undefined1 local_e8 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong lStack_c0;
  ulonglong local_78;
  
  local_78 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar20 = param_2;
  if ((int)param_3 < (int)param_2) {
    uVar20 = param_3;
  }
  if ((int)param_2 < (int)param_3) {
    param_2 = param_3;
  }
  local_1a4 = param_2;
  local_198 = uVar20;
  local_190 = param_1;
  if ((*(int *)(param_1 + 0x8c) <= (int)uVar20) && ((int)param_2 <= *(int *)(param_1 + 0x90))) {
    uVar5 = FUN_144e74530(*(undefined8 *)(param_1 + 0x70));
    uVar1 = (ulonglong)(uVar20 - *(int *)(param_1 + 0x8c)) / (ulonglong)uVar5;
    uVar5 = FUN_144e74530(*(undefined8 *)(param_1 + 0x70));
    uVar12 = (ulonglong)(param_2 - *(int *)(param_1 + 0x8c)) / (ulonglong)uVar5;
    local_1a0 = -1;
    iVar6 = (int)uVar12;
    if (*(int *)(param_1 + 0x88) != 1) {
      local_1a0 = 1;
      uVar12 = uVar1;
    }
    uVar5 = (int)uVar1 - 1;
    if (*(int *)(param_1 + 0x88) != 1) {
      uVar5 = iVar6 + 1;
    }
    local_1a8 = (uint)uVar12;
    local_19c = uVar5;
    FUN_144e74660(*(undefined8 *)(param_1 + 0x70),local_180,0);
    if ((uint)uVar12 != uVar5) {
      lVar21 = param_1 + 0x98;
      do {
        uVar5 = (uint)uVar12;
        local_1c8 = 0;
        FUN_144e746e0(*(undefined8 *)(param_1 + 0x70),local_150,0,uVar12);
        if ((int)uVar20 < (int)local_14c) {
          uVar20 = local_14c;
        }
        uVar18 = param_2;
        if ((int)local_144 < (int)param_2) {
          uVar18 = local_144;
        }
        local_1b4 = uVar18;
        local_1ac = uVar20;
        if (uVar5 != *(uint *)(param_1 + 0xb8)) {
          if (*(longlong *)(param_1 + 0xa8) != 0) {
            plVar8 = (longlong *)FUN_144b72ec0(*(longlong *)(param_1 + 0xa8),local_108);
            lVar11 = *plVar8;
            plVar8 = (longlong *)FUN_144b72ea0(*(undefined8 *)(param_1 + 0xa8),local_100);
            if (*plVar8 != lVar11) {
              iVar6 = FUN_144e74580(*(undefined8 *)(param_1 + 0x70),0);
              local_1c0 = 0;
              local_1c8 = uVar5;
              FUN_144e74c70(*(undefined8 *)(param_1 + 0x70),0,iVar6 + -1,uVar12);
            }
          }
          *(uint *)(param_1 + 0xb8) = uVar5;
        }
        plVar8 = (longlong *)FUN_144b72ea0(lVar21,local_f8);
        lVar11 = *plVar8;
        local_170 = lVar11;
        plVar8 = (longlong *)FUN_144b72ec0(lVar21,local_158);
        if (lVar11 != *plVar8) {
          do {
            local_120._0_16_ = *(undefined1 (*) [16])(lVar11 + 0x140);
            iVar6 = local_120._0_4_;
            iVar2 = local_120._4_4_;
            iVar7 = *(int *)(lVar11 + 0x120);
            uStack_13c = *(undefined4 *)(lVar11 + 0x124);
            uStack_138 = *(undefined4 *)(lVar11 + 0x128);
            uStack_134 = *(undefined4 *)(lVar11 + 300);
            lVar21 = *(longlong *)(lVar11 + 0x130);
            lStack_128 = *(longlong *)(lVar11 + 0x138);
            iVar13 = iVar6 - local_180[0];
            iVar19 = local_180[0];
            while( true ) {
              iVar13 = iVar13 + -1;
              if (iVar19 < 0) {
                iVar9 = iVar13;
                if (iVar6 < 0) {
                  iVar9 = (-1 - iVar6) - iVar19;
                }
                iVar9 = -(iVar9 / iVar6);
              }
              else {
                iVar9 = iVar19 / iVar6;
              }
              if (iVar19 == iVar9 * iVar6) break;
              iVar19 = iVar19 + 1;
            }
            iVar13 = iVar2 - local_1ac;
            while( true ) {
              iVar13 = iVar13 + -1;
              if ((int)uVar20 < 0) {
                iVar9 = iVar13;
                if (iVar2 < 0) {
                  iVar9 = (-1 - iVar2) - uVar20;
                }
                iVar9 = -(iVar9 / iVar2);
              }
              else {
                iVar9 = (int)uVar20 / iVar2;
              }
              if (uVar20 == iVar9 * iVar2) break;
              uVar20 = uVar20 + 1;
            }
            local_1b8 = iVar19;
            local_140 = iVar7;
            local_130 = lVar21;
            plVar8 = (longlong *)FUN_144b72ee0(*(undefined8 *)(param_1 + 0xa8),local_f0);
            lVar11 = *plVar8;
            plVar8 = (longlong *)FUN_144b72ec0(*(undefined8 *)(param_1 + 0xa8),local_e8);
            if (lVar11 == *plVar8) {
              if ((int)uVar20 <= (int)uVar18) {
                iVar7 = FUN_144b6ce60(iVar19,iVar6);
                local_188 = iVar7 * lVar21;
                iVar7 = (iVar2 - uVar20) + -1;
                do {
                  if ((int)uVar20 < 0) {
                    iVar19 = iVar7;
                    if (iVar2 < 0) {
                      iVar19 = ~uVar20 - iVar2;
                    }
                    iVar19 = -(iVar19 / iVar2);
                  }
                  else {
                    iVar19 = (int)uVar20 / iVar2;
                  }
                  pfVar15 = (float *)(iVar19 * lStack_128 + local_188 +
                                     CONCAT44(uStack_134,uStack_138));
                  if (local_140 == 0) {
                    for (iVar19 = local_1b8; iVar19 <= local_178; iVar19 = iVar19 + iVar6) {
                      *pfVar15 = (float)(longlong)(double)local_120._8_8_;
                      pfVar15 = (float *)((longlong)pfVar15 + lVar21);
                    }
                  }
                  else if (local_140 == 1) {
                    local_1b0 = (float)(double)local_120._8_8_;
                    fVar17 = ABS(local_1b0);
                    uVar4 = (ushort)((uint)local_1b0 >> 0x10) & 0x8000;
                    iVar19 = local_1b8;
                    if ((uint)fVar17 < 0x38800000) {
                      if (0x33000000 < (uint)fVar17) {
                        bVar3 = 0x7e - (char)((uint)fVar17 >> 0x17);
                        uVar18 = (uint)local_1b0 & 0x7fffff | 0x800000;
                        uVar5 = uVar18 << (0x20 - bVar3 & 0x1f);
                        uVar18 = uVar18 >> (bVar3 & 0x1f);
                        uVar4 = uVar4 | (ushort)uVar18;
                        if ((0x80000000 < uVar5) || ((uVar5 == 0x80000000 && ((uVar18 & 1) != 0))))
                        {
                          uVar4 = uVar4 + 1;
                        }
                      }
                    }
                    else if ((uint)fVar17 < 0x7f800000) {
                      if ((uint)fVar17 < 0x477ff000) {
                        uVar4 = uVar4 | (ushort)((int)fVar17 + -0x37fff001 +
                                                 ((int)fVar17 + 0xc8000000U >> 0xd & 1) >> 0xd);
                      }
                      else {
                        uVar4 = uVar4 | 0x7c00;
                      }
                    }
                    else {
                      uVar4 = uVar4 | 0x7c00;
                      if (fVar17 != INFINITY) {
                        uVar5 = (uint)fVar17 >> 0xd & 0x3ff;
                        uVar4 = uVar4 | (ushort)(uVar5 == 0) | (ushort)uVar5;
                      }
                    }
                    for (; iVar19 <= local_178; iVar19 = iVar19 + iVar6) {
                      *(ushort *)pfVar15 = uVar4;
                      pfVar15 = (float *)((longlong)pfVar15 + lVar21);
                    }
                  }
                  else if (local_140 == 2) {
                    for (iVar19 = local_1b8; iVar19 <= local_178; iVar19 = iVar19 + iVar6) {
                      *pfVar15 = (float)(double)local_120._8_8_;
                      pfVar15 = (float *)((longlong)pfVar15 + lVar21);
                    }
                  }
                  uVar20 = uVar20 + iVar2;
                  iVar7 = iVar7 - iVar2;
                  param_1 = local_190;
                  uVar18 = local_1b4;
                } while ((int)uVar20 <= (int)local_1b4);
              }
            }
            else {
              local_d8 = *(undefined4 *)(lVar11 + 0x120);
              uStack_d4 = *(undefined4 *)(lVar11 + 0x124);
              uStack_d0 = *(undefined4 *)(lVar11 + 0x128);
              uStack_cc = *(undefined4 *)(lVar11 + 300);
              lVar16 = *(longlong *)(lVar11 + 0x130);
              lStack_c0 = *(longlong *)(lVar11 + 0x138);
              local_c8 = lVar16;
              iVar7 = FUN_144e66f70(iVar7);
              param_1 = local_190;
              if ((int)uVar20 <= (int)uVar18) {
                lVar11 = iVar19 * lVar16;
                local_168 = lVar16;
                local_160 = lVar11;
                iVar19 = FUN_144b6ce60(iVar19,iVar6);
                local_188 = iVar19 * lVar21;
                local_1b0 = (float)-iVar2;
                iVar19 = (iVar2 - uVar20) + -1;
                do {
                  lVar16 = (int)(uVar20 - local_14c) * lStack_c0 + lVar11 +
                           CONCAT44(uStack_cc,uStack_d0);
                  if ((int)uVar20 < 0) {
                    iVar13 = iVar19;
                    if (iVar2 < 0) {
                      iVar13 = ~uVar20 - iVar2;
                    }
                    iVar13 = -(iVar13 / iVar2);
                  }
                  else {
                    iVar13 = (int)uVar20 / iVar2;
                  }
                  puVar14 = (undefined1 *)
                            (iVar13 * lStack_128 + local_188 + CONCAT44(uStack_134,uStack_138));
                  if (local_1b8 <= local_178) {
                    iVar13 = local_1b8;
                    do {
                      if (0 < (longlong)iVar7) {
                        puVar10 = puVar14;
                        lVar11 = (longlong)iVar7;
                        do {
                          *puVar10 = puVar10[lVar16 - (longlong)puVar14];
                          puVar10 = puVar10 + 1;
                          lVar11 = lVar11 + -1;
                        } while (lVar11 != 0);
                      }
                      lVar16 = lVar16 + iVar6 * local_168;
                      puVar14 = puVar14 + lVar21;
                      iVar13 = iVar13 + iVar6;
                      lVar11 = local_160;
                    } while (iVar13 <= local_178);
                  }
                  iVar19 = iVar19 + (int)local_1b0;
                  uVar20 = uVar20 + iVar2;
                  param_1 = local_190;
                  uVar18 = local_1b4;
                } while ((int)uVar20 <= (int)local_1b4);
              }
            }
            FUN_144b6cdf0(&local_170);
            lVar21 = param_1 + 0x98;
            plVar8 = (longlong *)FUN_144b72ec0(lVar21,local_158);
            lVar11 = local_170;
            uVar5 = local_1a8;
            param_2 = local_1a4;
            uVar20 = local_1ac;
          } while (local_170 != *plVar8);
        }
        local_1a8 = uVar5 + local_1a0;
        uVar12 = (ulonglong)local_1a8;
        uVar20 = local_198;
      } while (local_1a8 != local_19c);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_78 ^ (ulonglong)auStack_1e8);
  }
  FUN_144e40d70(&local_d8,"Tried to read scan line outside the image file\'s data window.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_d8,(ThrowInfo *)&DAT_14c6d50e0);
}



// FUNCTION 144b6d940 FUN_144b6d940 body=25 status=ok
// SIG undefined FUN_144b6d940(void)

void FUN_144b6d940(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  FUN_1470ab2a8(param_1,puVar1,param_2[2]);
  return;
}



// FUNCTION 144b6d960 FUN_144b6d960 body=305 status=ok
// SIG undefined FUN_144b6d960(void)

longlong *
FUN_144b6d960(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  plVar10 = (longlong *)*param_1;
  if (*(char *)((longlong)param_2 + 0x19) == '\0') {
    plVar6 = (longlong *)FUN_14494321d(0x158,param_2,param_3,param_4,param_1,0);
    lVar8 = 2;
    plVar4 = param_2 + 4;
    plVar5 = plVar6 + 4;
    do {
      plVar9 = plVar5;
      plVar7 = plVar4;
      lVar3 = plVar7[1];
      *plVar9 = *plVar7;
      plVar9[1] = lVar3;
      lVar3 = plVar7[3];
      plVar9[2] = plVar7[2];
      plVar9[3] = lVar3;
      lVar3 = plVar7[5];
      plVar9[4] = plVar7[4];
      plVar9[5] = lVar3;
      lVar3 = plVar7[7];
      plVar9[6] = plVar7[6];
      plVar9[7] = lVar3;
      lVar3 = plVar7[9];
      plVar9[8] = plVar7[8];
      plVar9[9] = lVar3;
      lVar3 = plVar7[0xb];
      plVar9[10] = plVar7[10];
      plVar9[0xb] = lVar3;
      lVar3 = plVar7[0xd];
      plVar9[0xc] = plVar7[0xc];
      plVar9[0xd] = lVar3;
      lVar3 = plVar7[0xf];
      plVar9[0xe] = plVar7[0xe];
      plVar9[0xf] = lVar3;
      lVar8 = lVar8 + -1;
      plVar4 = plVar7 + 0x10;
      plVar5 = plVar9 + 0x10;
    } while (lVar8 != 0);
    lVar8 = plVar7[0x11];
    plVar9[0x10] = plVar7[0x10];
    plVar9[0x11] = lVar8;
    uVar1 = *(undefined4 *)((longlong)plVar7 + 0x94);
    lVar8 = plVar7[0x13];
    uVar2 = *(undefined4 *)((longlong)plVar7 + 0x9c);
    *(int *)(plVar9 + 0x12) = (int)plVar7[0x12];
    *(undefined4 *)((longlong)plVar9 + 0x94) = uVar1;
    *(int *)(plVar9 + 0x13) = (int)lVar8;
    *(undefined4 *)((longlong)plVar9 + 0x9c) = uVar2;
    uVar1 = *(undefined4 *)((longlong)plVar7 + 0xa4);
    lVar8 = plVar7[0x15];
    uVar2 = *(undefined4 *)((longlong)plVar7 + 0xac);
    *(int *)(plVar9 + 0x14) = (int)plVar7[0x14];
    *(undefined4 *)((longlong)plVar9 + 0xa4) = uVar1;
    *(int *)(plVar9 + 0x15) = (int)lVar8;
    *(undefined4 *)((longlong)plVar9 + 0xac) = uVar2;
    plVar9[0x16] = plVar7[0x16];
    *plVar6 = (longlong)plVar10;
    plVar6[2] = (longlong)plVar10;
    *(undefined2 *)(plVar6 + 3) = 0;
    plVar6[1] = param_3;
    *(undefined1 *)(plVar6 + 3) = *(undefined1 *)(param_2 + 3);
    if (*(char *)((longlong)plVar10 + 0x19) != '\0') {
      plVar10 = plVar6;
    }
    lVar8 = FUN_144b6d960(param_1,*param_2,plVar6);
    *plVar6 = lVar8;
    lVar8 = FUN_144b6d960(param_1,param_2[2],plVar6);
    plVar6[2] = lVar8;
  }
  return plVar10;
}



// FUNCTION 144b6daa0 FUN_144b6daa0 body=85 status=ok
// SIG undefined FUN_144b6daa0(void)

void FUN_144b6daa0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_144b6daa0(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    thunk_FUN_1400020a8(param_3,0x158);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



// FUNCTION 144b6db20 FUN_144b6db20 body=383 status=ok
// SIG undefined FUN_144b6db20(void)

undefined8 *
FUN_144b6db20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_144e7e250();
  *param_1 = Imf_3_2::OutputFile::vftable;
  lVar1 = FUN_14494321d(0x108);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_144b6f0d0(lVar1,param_4);
  }
  param_1[1] = uVar2;
  puVar3 = (undefined8 *)FUN_14494321d(0x60);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    _Mtx_init_in_situ(puVar3,2);
    puVar3[10] = 0;
    puVar3[0xb] = 0;
  }
  *(undefined8 **)(param_1[1] + 0xf8) = puVar3;
  *(undefined1 *)(param_1[1] + 0x100) = 0;
  FUN_144b683a0(param_3,0,0);
  *(undefined8 *)(*(longlong *)(param_1[1] + 0xf8) + 0x50) = param_2;
  *(undefined1 *)(param_1[1] + 0x18) = 0;
  FUN_144b6e870(param_1,param_3);
  uVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1[1] + 0xf8) + 0x50) + 0x10))();
  *(undefined8 *)(*(longlong *)(param_1[1] + 0xf8) + 0x58) = uVar2;
  FUN_144e7e260(param_1,*(undefined8 *)(*(longlong *)(param_1[1] + 0xf8) + 0x50));
  uVar2 = FUN_144b694c0(param_1[1],*(undefined8 *)(*(longlong *)(param_1[1] + 0xf8) + 0x50),0);
  *(undefined8 *)(param_1[1] + 0x20) = uVar2;
  uVar2 = FUN_144b6f530(*(undefined8 *)(*(longlong *)(param_1[1] + 0xf8) + 0x50),param_1[1] + 0x58);
  *(undefined8 *)(param_1[1] + 0xc0) = uVar2;
  return param_1;
}



// FUNCTION 144b6dca0 FUN_144b6dca0 body=371 status=ok
// SIG undefined FUN_144b6dca0(void)

void FUN_144b6dca0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  
  *param_1 = Imf_3_2::OutputFile::vftable;
  plVar1 = param_1 + 1;
  if (*plVar1 != 0) {
    lVar2 = *(longlong *)(*plVar1 + 0xf8);
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
    uVar6 = (**(code **)(**(longlong **)(*(longlong *)(*plVar1 + 0xf8) + 0x50) + 0x10))();
    if (*(longlong *)(*plVar1 + 0xc0) != 0) {
      (**(code **)(**(longlong **)(*(longlong *)(*plVar1 + 0xf8) + 0x50) + 0x18))();
      FUN_144b6f530(*(undefined8 *)(*(longlong *)(*plVar1 + 0xf8) + 0x50),*plVar1 + 0x58);
      plVar3 = *(longlong **)(*(longlong *)(*plVar1 + 0xf8) + 0x50);
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar6);
    }
    _Mtx_unlock(lVar2);
    if (((*(char *)(*plVar1 + 0x100) != '\0') && (lVar2 = *(longlong *)(*plVar1 + 0xf8), lVar2 != 0)
        ) && (puVar4 = *(undefined8 **)(lVar2 + 0x50), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
    if ((*(int *)(*plVar1 + 0xf0) == -1) && (lVar2 = *(longlong *)(*plVar1 + 0xf8), lVar2 != 0)) {
      _Mtx_destroy_in_situ(lVar2);
      thunk_FUN_1400020a8(lVar2,0x60);
    }
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      FUN_144b6f250(lVar2);
      thunk_FUN_1400020a8(lVar2,0x108);
    }
  }
  FUN_144e7e240(param_1);
  return;
}



// FUNCTION 144b6de30 FUN_144b6de30 body=20 status=ok
// SIG undefined FUN_144b6de30(void)

void FUN_144b6de30(longlong param_1)

{
  FUN_144b6b950(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xf8) + 0x50));
  return;
}



// FUNCTION 144b6de50 FUN_144b6de50 body=1359 status=ok
// SIG undefined FUN_144b6de50(void)

void FUN_144b6de50(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_218 [32];
  longlong local_1f8;
  longlong local_1f0;
  undefined8 *puStack_1e8;
  undefined8 *local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined1 local_1c0 [8];
  longlong local_1b8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [240];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xf8);
  local_1c8 = param_1;
  local_1b8 = lVar2;
  iVar7 = _Mtx_lock(lVar2);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(5);
  }
  if (*(int *)(lVar2 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(lVar2 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    std::_Throw_Cpp_error(6);
  }
  uVar8 = FUN_144b67b60(*(undefined8 *)(param_1 + 8));
  FUN_144b65f20(uVar8,&local_1f8);
  do {
    plVar9 = (longlong *)FUN_144b65f40(uVar8,&local_1d0);
    if (local_1f8 == *plVar9) {
      local_1f0 = 0;
      puStack_1e8 = (undefined8 *)0x0;
      puVar15 = (undefined8 *)0x0;
      local_1e0 = (undefined8 *)0x0;
      FUN_144b65f20(uVar8,&local_1f8);
      plVar9 = (longlong *)FUN_144b65f40(uVar8,&local_1d8);
      puVar14 = puStack_1e8;
      if (local_1f8 != *plVar9) {
        do {
          FUN_144b72fe0(param_2,&local_1d0,local_1f8 + 0x1c);
          plVar9 = (longlong *)FUN_144b72ed0(param_2,local_1c0);
          if (local_1d0 == *plVar9) {
            uStack_84 = *(undefined4 *)(local_1f8 + 0x124);
            local_88 = *(undefined4 *)(local_1f8 + 0x120);
            local_a8 = *(undefined4 *)(local_1f8 + 0x11c);
            uStack_a0 = 0;
            local_98 = 0;
            uStack_90 = 0;
            iStack_80 = CONCAT31(iStack_80._1_3_,1);
          }
          else {
            uStack_84 = *(undefined4 *)(local_1d0 + 0x144);
            local_88 = *(undefined4 *)(local_1d0 + 0x140);
            uStack_90 = *(undefined8 *)(local_1d0 + 0x138);
            local_98 = *(undefined8 *)(local_1d0 + 0x130);
            uStack_a0 = *(undefined8 *)(local_1d0 + 0x128);
            local_a8 = *(undefined4 *)(local_1d0 + 0x120);
            iStack_80 = (uint)iStack_80._1_3_ << 8;
          }
          if (puVar14 == puVar15) {
            FUN_144b70130(&local_1f0,puVar14,&local_a8);
            puVar15 = local_1e0;
          }
          else {
            *puVar14 = CONCAT44(uStack_a4,local_a8);
            puVar14[1] = uStack_a0;
            puVar14[2] = local_98;
            puVar14[3] = uStack_90;
            *(undefined4 *)(puVar14 + 4) = local_88;
            *(undefined4 *)((longlong)puVar14 + 0x24) = uStack_84;
            *(int *)(puVar14 + 5) = iStack_80;
            *(undefined4 *)((longlong)puVar14 + 0x2c) = uStack_7c;
            puStack_1e8 = puVar14 + 6;
          }
          puVar14 = puStack_1e8;
          FUN_144b663b0(&local_1f8);
          plVar9 = (longlong *)FUN_144b65f40(uVar8,&local_1d8);
        } while (local_1f8 != *plVar9);
      }
      lVar3 = *(longlong *)(local_1c8 + 8);
      plVar9 = (longlong *)(lVar3 + 0x28);
      if (plVar9 != param_2) {
        lVar12 = *plVar9;
        cVar1 = *(char *)((longlong)*(longlong **)(lVar12 + 8) + 0x19);
        plVar5 = *(longlong **)(lVar12 + 8);
        while (cVar1 == '\0') {
          FUN_14698d1ae(plVar9,plVar9,plVar5[2]);
          plVar4 = (longlong *)*plVar5;
          thunk_FUN_1400020a8(plVar5,0x158);
          plVar5 = plVar4;
          cVar1 = *(char *)((longlong)plVar4 + 0x19);
        }
        *(longlong *)(lVar12 + 8) = lVar12;
        *(longlong *)lVar12 = lVar12;
        *(longlong *)(lVar12 + 0x10) = lVar12;
        *(undefined8 *)(lVar3 + 0x30) = 0;
        uVar8 = FUN_144b6d960(plVar9,*(undefined8 *)(*param_2 + 8),*plVar9);
        *(undefined8 *)(*plVar9 + 8) = uVar8;
        *(longlong *)(lVar3 + 0x30) = param_2[1];
        plVar5 = (longlong *)*plVar9;
        plVar4 = (longlong *)plVar5[1];
        if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
          cVar1 = *(char *)(*plVar4 + 0x19);
          plVar6 = (longlong *)*plVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*plVar6 + 0x19);
            plVar4 = plVar6;
            plVar6 = (longlong *)*plVar6;
          }
          *plVar5 = (longlong)plVar4;
          lVar3 = *(longlong *)(*plVar9 + 8);
          lVar12 = *(longlong *)(lVar3 + 0x10);
          cVar1 = *(char *)(lVar12 + 0x19);
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*(longlong *)(lVar12 + 0x10) + 0x19);
            lVar3 = lVar12;
            lVar12 = *(longlong *)(lVar12 + 0x10);
          }
          *(longlong *)(*plVar9 + 0x10) = lVar3;
        }
        else {
          *plVar5 = (longlong)plVar5;
          *(longlong *)(*plVar9 + 0x10) = *plVar9;
        }
      }
      lVar3 = local_1f0;
      plVar9 = (longlong *)(*(longlong *)(local_1c8 + 8) + 0xa8);
      if (plVar9 != &local_1f0) {
        lVar12 = ((longlong)puVar14 - local_1f0) / 6 + ((longlong)puVar14 - local_1f0 >> 0x3f);
        FUN_144b6fe20(plVar9,local_1f0,(lVar12 >> 3) - (lVar12 >> 0x3f));
      }
      if (lVar3 != 0) {
        uVar13 = (((longlong)puVar15 - lVar3) / 0x30) * 0x30;
        lVar12 = lVar3;
        if (0xfff < uVar13) {
          uVar13 = uVar13 + 0x27;
          lVar12 = *(longlong *)(lVar3 + -8);
          if (0x1f < (lVar3 - lVar12) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(lVar12,uVar13);
      }
      _Mtx_unlock(lVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_218);
    }
    FUN_144b72fe0(param_2,&local_1d8,local_1f8 + 0x1c);
    plVar9 = (longlong *)FUN_144b72ed0(param_2,local_1c0);
    if (local_1d8 != *plVar9) {
      if (*(int *)(local_1f8 + 0x11c) != *(int *)(local_1d8 + 0x120)) {
        FUN_144e47110();
        FUN_1470a639e(local_1a8,1);
        uVar8 = FUN_144b6de30(param_1);
        uVar10 = FUN_144b66f30(&local_1f8);
        uVar11 = FUN_141302cc4(local_198,"Pixel type of \"");
        uVar10 = FUN_141302cc4(uVar11,uVar10);
        uVar10 = FUN_141302cc4(uVar10,"\" channel of output file \"");
        uVar8 = FUN_141302cc4(uVar10,uVar8);
        FUN_141302cc4(uVar8,"\" is not compatible with the frame buffer\'s pixel type.");
        FUN_144e40dd0(&local_a8,local_1a8);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_a8,(ThrowInfo *)&DAT_14c6d50e0);
      }
      if ((*(int *)(local_1f8 + 0x120) != *(int *)(local_1d8 + 0x140)) ||
         (*(int *)(local_1f8 + 0x124) != *(int *)(local_1d8 + 0x144))) {
        FUN_144e47110();
        FUN_1470a639e(local_1a8,1);
        uVar8 = FUN_144b6de30(param_1);
        uVar10 = FUN_144b66f30(&local_1f8);
        uVar11 = FUN_141302cc4(local_198,"X and/or y subsampling factors of \"");
        uVar10 = FUN_141302cc4(uVar11,uVar10);
        uVar10 = FUN_141302cc4(uVar10,"\" channel of output file \"");
        uVar8 = FUN_141302cc4(uVar10,uVar8);
        FUN_141302cc4(uVar8,"\" are not compatible with the frame buffer\'s subsampling factors.");
        FUN_144e40dd0(&local_a8,local_1a8);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_a8,(ThrowInfo *)&DAT_14c6d50e0);
      }
    }
    FUN_144b663b0(&local_1f8);
  } while( true );
}



// FUNCTION 144b6e3c0 FUN_144b6e3c0 body=1153 status=ok
// SIG undefined FUN_144b6e3c0(void)

void FUN_144b6e3c0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_2c8 [32];
  int local_2a8;
  int local_2a0;
  uint local_298;
  int local_294;
  ulonglong local_290;
  int local_288;
  undefined1 local_280 [8];
  longlong local_278;
  longlong local_270;
  longlong local_268;
  undefined1 local_158 [96];
  undefined1 local_f8 [96];
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xf8);
  local_270 = param_1;
  local_268 = lVar2;
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
  lVar8 = *(longlong *)(param_1 + 8);
  lVar7 = *(longlong *)(lVar8 + 0xb0) - *(longlong *)(lVar8 + 0xa8);
  lVar3 = lVar7 >> 0x3f;
  if (lVar7 / 0x30 + lVar3 == lVar3) {
    FUN_144e40d70(local_158,"No frame buffer specified as pixel data source.");
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_158,(ThrowInfo *)&DAT_14c6d50e0);
  }
  lVar3 = (longlong)(*(int *)(lVar8 + 0x38) - *(int *)(lVar8 + 0x4c));
  uVar5 = lVar3 / (longlong)*(int *)(lVar8 + 0xe0);
  uVar11 = uVar5 & 0xffffffff;
  FUN_144e7f920(local_280,lVar3 % (longlong)*(int *)(lVar8 + 0xe0) & 0xffffffff);
  lVar8 = *(longlong *)(param_1 + 8);
  iVar4 = *(int *)(lVar8 + 0x38);
  iVar9 = (int)uVar5;
  if (*(int *)(lVar8 + 0x40) == 0) {
    local_298 = ((iVar4 - *(int *)(lVar8 + 0x4c)) + -1 + param_2) / *(int *)(lVar8 + 0xe0);
    local_294 = param_2 + -1 + iVar4;
    iVar6 = (local_298 - iVar9) + 1;
    iVar13 = (int)(*(longlong *)(lVar8 + 0xd0) - *(longlong *)(lVar8 + 200) >> 3);
    if (iVar6 < iVar13) {
      iVar13 = iVar6;
    }
    local_278 = CONCAT44(local_278._4_4_,1);
    if (iVar13 < 1) {
      iVar13 = 1;
    }
    uVar5 = 0;
    local_288 = iVar4;
    while (iVar6 = (int)uVar5, iVar6 < iVar13) {
      local_290 = FUN_14494321d(0x20);
      uVar5 = 0;
      if (local_290 != 0) {
        local_2a0 = local_294;
        local_2a8 = iVar4;
        uVar5 = FUN_144b6f9d0(local_290,local_280,*(undefined8 *)(param_1 + 8),iVar6 + iVar9);
      }
      FUN_144e7f670(uVar5);
      uVar5 = (ulonglong)(iVar6 + 1);
    }
    uVar12 = iVar13 + iVar9;
    local_298 = local_298 + 1;
  }
  else {
    local_298 = (((iVar4 - param_2) - *(int *)(lVar8 + 0x4c)) + 1) / *(int *)(lVar8 + 0xe0);
    iVar13 = (iVar4 - param_2) + 1;
    uVar10 = (iVar9 - local_298) + 1;
    uVar12 = (uint)(*(longlong *)(lVar8 + 0xd0) - *(longlong *)(lVar8 + 200) >> 3);
    if ((int)uVar10 < (int)uVar12) {
      uVar12 = uVar10;
    }
    if ((int)uVar12 < 1) {
      uVar12 = 1;
    }
    local_290 = (ulonglong)uVar12;
    uVar5 = 0;
    local_294 = iVar4;
    local_288 = iVar13;
    while( true ) {
      iVar6 = (int)uVar5;
      if ((int)local_290 <= iVar6) break;
      local_278 = FUN_14494321d(0x20);
      uVar5 = 0;
      if (local_278 != 0) {
        local_2a8 = iVar13;
        local_2a0 = iVar4;
        uVar5 = FUN_144b6f9d0(local_278,local_280,*(undefined8 *)(param_1 + 8),iVar9 - iVar6);
      }
      FUN_144e7f670(uVar5);
      uVar5 = (ulonglong)(iVar6 + 1);
    }
    uVar12 = iVar9 - (int)local_290;
    local_298 = local_298 - 1;
    local_278 = CONCAT44(local_278._4_4_,0xffffffff);
  }
  while( true ) {
    uVar5 = 0;
    lVar8 = *(longlong *)(param_1 + 8);
    if (*(int *)(lVar8 + 0x3c) < 1) {
      FUN_144e40d70(local_f8,"Tried to write more scan lines than specified by the data window.");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_f8,(ThrowInfo *)&DAT_14c6d50e0);
    }
    lVar8 = *(longlong *)
             (*(longlong *)(lVar8 + 200) +
             ((ulonglong)(longlong)(int)uVar11 %
             (ulonglong)(*(longlong *)(lVar8 + 0xd0) - *(longlong *)(lVar8 + 200) >> 3)) * 8);
    local_290 = lVar8 + 0x68;
    FUN_144e80ef0(local_290);
    iVar4 = (*(int *)(lVar8 + 0x34) - *(int *)(lVar8 + 0x30)) + 1;
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x3c);
    *piVar1 = *piVar1 - iVar4;
    lVar3 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar8 + 0x40) != '\0') break;
    local_2a8 = *(int *)(lVar8 + 0x18);
    FUN_144b6f6f0(*(undefined8 *)(lVar3 + 0xf8),lVar3,*(undefined4 *)(lVar8 + 0x28),
                  *(undefined8 *)(lVar8 + 0x10));
    iVar9 = (int)local_278;
    uVar10 = (int)uVar11 + (int)local_278;
    uVar11 = (ulonglong)uVar10;
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x38);
    *piVar1 = *piVar1 + iVar4 * (int)local_278;
    FUN_144e80fc0(local_290);
    if (uVar10 == local_298) {
      FUN_144e7f970(local_280);
      lVar8 = *(longlong *)(param_1 + 8);
      uVar11 = uVar5;
      if (*(longlong *)(lVar8 + 0xd0) - *(longlong *)(lVar8 + 200) >> 3 != 0) {
        do {
          lVar8 = *(longlong *)(*(longlong *)(lVar8 + 200) + uVar5 * 8);
          if ((*(char *)(lVar8 + 0x41) != '\0') && (uVar11 == 0)) {
            uVar11 = lVar8 + 0x48;
          }
          *(undefined1 *)(lVar8 + 0x41) = 0;
          uVar5 = uVar5 + 1;
          lVar8 = *(longlong *)(param_1 + 8);
        } while (uVar5 < (ulonglong)(*(longlong *)(lVar8 + 0xd0) - *(longlong *)(lVar8 + 200) >> 3))
        ;
        if (uVar11 != 0) {
          FUN_144e41220(local_98,uVar11);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_98,(ThrowInfo *)&DAT_14c6d52d8);
        }
      }
      _Mtx_unlock(lVar2);
LAB_144b6e74e:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_2c8);
    }
    if (uVar12 != local_298) {
      local_290 = FUN_14494321d(0x20);
      if (local_290 != 0) {
        local_2a0 = local_294;
        local_2a8 = local_288;
        uVar5 = FUN_144b6f9d0(local_290,local_280,*(undefined8 *)(param_1 + 8),uVar12);
      }
      FUN_144e7f670(uVar5);
      uVar12 = uVar12 + iVar9;
    }
  }
  *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + iVar4 * (int)local_278;
  FUN_144e80fc0(local_290);
  FUN_144e7f970(local_280);
  _Mtx_unlock(lVar2);
  goto LAB_144b6e74e;
}



// FUNCTION 144b6e870 FUN_144b6e870 body=757 status=ok
// SIG undefined FUN_144b6e870(void)

void FUN_144b6e870(longlong param_1,undefined8 param_2)

{
  size_t _Size;
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  void *pvVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined4 *local_res8;
  
  FUN_144b67310(*(undefined8 *)(param_1 + 8));
  cVar2 = FUN_144b68010(*(undefined8 *)(param_1 + 8));
  if (cVar2 != '\0') {
    FUN_144b67d10(*(undefined8 *)(param_1 + 8),&DAT_14c6d9608);
  }
  puVar4 = (undefined4 *)FUN_144b67b20(param_2);
  piVar5 = (int *)FUN_144b67bc0(param_2);
  if (*piVar5 == 0) {
    uVar3 = puVar4[1];
  }
  else {
    uVar3 = puVar4[3];
  }
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x38) = uVar3;
  *(int *)(*(longlong *)(param_1 + 8) + 0x3c) = (puVar4[3] - puVar4[1]) + 1;
  puVar6 = (undefined4 *)FUN_144b67bc0(param_2);
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x40) = *puVar6;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x44) = *puVar4;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x48) = puVar4[2];
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x4c) = puVar4[1];
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x50) = puVar4[3];
  lVar7 = FUN_144e67080(*(longlong *)(param_1 + 8),*(longlong *)(param_1 + 8) + 0x70);
  puVar15 = (undefined4 *)0x0;
  lVar13 = *(longlong *)(param_1 + 8);
  puVar6 = puVar15;
  if (*(longlong *)(lVar13 + 0xd0) - *(longlong *)(lVar13 + 200) >> 3 != 0) {
    do {
      puVar8 = (undefined4 *)FUN_14494321d(0x78);
      puVar9 = puVar15;
      local_res8 = puVar8;
      if (puVar8 != (undefined4 *)0x0) {
        uVar10 = *(undefined8 *)(param_1 + 8);
        puVar9 = (undefined4 *)FUN_144b67be0(uVar10);
        uVar10 = FUN_144e498d0(*puVar9,lVar7,uVar10);
        *(undefined8 *)(puVar8 + 2) = 0;
        *puVar8 = 0;
        *(undefined8 *)(puVar8 + 4) = 0;
        puVar8[6] = 0;
        *(undefined8 *)(puVar8 + 0xe) = uVar10;
        *(undefined2 *)(puVar8 + 0x10) = 0;
        *(undefined8 *)(puVar8 + 0x12) = 0;
        *(undefined8 *)(puVar8 + 0x14) = 0;
        *(undefined8 *)(puVar8 + 0x16) = 0;
        *(undefined8 *)(puVar8 + 0x18) = 0xf;
        *(undefined1 *)(puVar8 + 0x12) = 0;
        FUN_144e80de0(puVar8 + 0x1a,1);
        puVar9 = puVar8;
      }
      *(undefined4 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 200) + (longlong)puVar6 * 8) =
           puVar9;
      puVar6 = (undefined4 *)((longlong)puVar6 + 1);
      lVar13 = *(longlong *)(param_1 + 8);
    } while (puVar6 < (undefined4 *)
                      (*(longlong *)(lVar13 + 0xd0) - *(longlong *)(lVar13 + 200) >> 3));
  }
  lVar13 = **(longlong **)(lVar13 + 200);
  uVar3 = FUN_144e67550(*(undefined8 *)(lVar13 + 0x38));
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xa0) = uVar3;
  uVar3 = FUN_144e67570(*(undefined8 *)(lVar13 + 0x38));
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0xe0) = uVar3;
  *(longlong *)(*(longlong *)(param_1 + 8) + 0xe8) =
       *(int *)(*(longlong *)(param_1 + 8) + 0xe0) * lVar7;
  lVar13 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar13 + 0xd0) - *(longlong *)(lVar13 + 200) >> 3 != 0) {
    do {
      iVar1 = *(int *)(lVar13 + 0xe8);
      piVar5 = *(int **)(*(longlong *)(lVar13 + 200) + (longlong)puVar15 * 8);
      uVar10 = FUN_144a7d36f((longlong)iVar1);
      thunk_FUN_1400020a8(*(undefined8 *)(piVar5 + 2));
      *piVar5 = iVar1;
      *(undefined8 *)(piVar5 + 2) = uVar10;
      puVar15 = (undefined4 *)((longlong)puVar15 + 1);
      lVar13 = *(longlong *)(param_1 + 8);
    } while (puVar15 < (undefined4 *)
                       (*(longlong *)(lVar13 + 0xd0) - *(longlong *)(lVar13 + 200) >> 3));
  }
  uVar14 = (ulonglong)
           (((*(int *)(lVar13 + 0xe0) - puVar4[1]) + puVar4[3]) / *(int *)(lVar13 + 0xe0));
  pvVar11 = *(void **)(lVar13 + 0x60);
  lVar7 = *(longlong *)(lVar13 + 0x58);
  uVar12 = (longlong)pvVar11 - lVar7 >> 3;
  if (uVar14 < uVar12) {
    pvVar11 = (void *)(lVar7 + uVar14 * 8);
  }
  else {
    if (uVar14 <= uVar12) goto LAB_144b6eb35;
    if ((ulonglong)(*(longlong *)(lVar13 + 0x68) - lVar7 >> 3) < uVar14) {
      FUN_144b702f0((longlong *)(lVar13 + 0x58),uVar14,&local_res8);
      goto LAB_144b6eb35;
    }
    _Size = (uVar14 - uVar12) * 8;
    memset(pvVar11,0,_Size);
    pvVar11 = (void *)(_Size + (longlong)pvVar11);
  }
  *(void **)(lVar13 + 0x60) = pvVar11;
LAB_144b6eb35:
  lVar13 = *(longlong *)(param_1 + 8);
  FUN_144e674c0(lVar13 + 0x70,*(undefined4 *)(lVar13 + 0xe0),lVar13 + 0x88);
  return;
}



// FUNCTION 144b6eb70 FUN_144b6eb70 body=52 status=ok
// SIG undefined FUN_144b6eb70(void)

undefined8 FUN_144b6eb70(undefined8 param_1,ulonglong param_2)

{
  FUN_144b6dca0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144b6ebb0 FUN_144b6ebb0 body=350 status=ok
// SIG undefined FUN_144b6ebb0(void)

longlong * FUN_144b6ebb0(longlong *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *_Dst;
  ulonglong uVar6;
  void *_Dst_00;
  
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    _Dst = param_1;
    if (0xf < uVar2) {
      _Dst = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(_Dst,param_2,param_3);
    *(undefined1 *)((longlong)_Dst + param_3) = 0;
    return param_1;
  }
  uVar6 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_146eb22ad();
  }
  uVar4 = param_3 | 0xf;
  if ((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar6 = uVar4;
    if (uVar4 < uVar1) {
      uVar6 = uVar1;
    }
    uVar1 = uVar6 + 1;
    if (0xfff < uVar1) {
      uVar4 = uVar6 + 0x28;
      if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_14694ac37();
      }
      goto LAB_144b6ec61;
    }
    if (uVar1 == 0) {
      _Dst_00 = (void *)0x0;
    }
    else {
      _Dst_00 = (void *)FUN_14494321d(uVar1);
    }
  }
  else {
    uVar4 = 0x8000000000000027;
LAB_144b6ec61:
    lVar3 = FUN_14494321d(uVar4);
    if (lVar3 == 0) goto LAB_144b6ecfe;
    _Dst_00 = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst_00 - 8) = lVar3;
  }
  param_1[2] = param_3;
  param_1[3] = uVar6;
  memcpy(_Dst_00,param_2,param_3);
  *(undefined1 *)((longlong)_Dst_00 + param_3) = 0;
  if (0xf < uVar2) {
    lVar3 = *param_1;
    uVar6 = uVar2 + 1;
    lVar5 = lVar3;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar3 + -8);
      uVar6 = uVar2 + 0x28;
      if (0x1f < (lVar3 - lVar5) - 8U) {
LAB_144b6ecfe:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar5,uVar6);
  }
  *param_1 = (longlong)_Dst_00;
  return param_1;
}



// FUNCTION 144b6ed20 FUN_144b6ed20 body=92 status=ok
// SIG undefined FUN_144b6ed20(void)

void FUN_144b6ed20(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_14698d1ae(param_1,param_1,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    thunk_FUN_1400020a8(plVar3,0x158);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_1400020a8(*param_1,0x158);
  return;
}



// FUNCTION 144b6ed80 FUN_144b6ed80 body=52 status=ok
// SIG undefined FUN_144b6ed80(void)

undefined8 FUN_144b6ed80(undefined8 param_1,ulonglong param_2)

{
  _Mtx_destroy_in_situ();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 144b6edd0 deallocate body=66 status=ok
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



// FUNCTION 144b6ee20 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
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



// FUNCTION 144b6ee80 FUN_144b6ee80 body=16 status=ok
// SIG undefined FUN_144b6ee80(void)

void FUN_144b6ee80(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144b6eea0 deallocate body=66 status=ok
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
  
  uVar2 = param_3 * 0x30;
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



// FUNCTION 144b6eef0 FUN_144b6eef0 body=110 status=ok
// SIG undefined FUN_144b6eef0(void)

ulonglong FUN_144b6eef0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x555555555555556) {
    param_2 = param_2 * 0x30;
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



// FUNCTION 144b6ef60 FID_conflict:~vector<GSISymbolEntry,std::allocator<GSISymbolEntry>_> body=122 status=ok
// SIG undefined FID_conflict:~vector<GSISymbolEntry,std::allocator<GSISymbolEntry>_>(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::vector<struct GSISymbolEntry,class std::allocator<struct GSISymbolEntry>
   >::~vector<struct GSISymbolEntry,class std::allocator<struct GSISymbolEntry> >(void) __ptr64
    private: void __cdecl std::vector<struct GSISymbolEntry,class std::allocator<struct
   GSISymbolEntry> >::_Tidy(void) __ptr64
   
   Library: Visual Studio 2019 Release */

void FID_conflict__vector<GSISymbolEntry,std::allocator<GSISymbolEntry>_>(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = ((param_1[2] - lVar1) / 0x30) * 0x30;
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



// FUNCTION 144b6efe0 FUN_144b6efe0 body=16 status=ok
// SIG undefined FUN_144b6efe0(void)

void FUN_144b6efe0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144b6f000 deallocate body=66 status=ok
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



// FUNCTION 144b6f050 FID_conflict:~vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> body=91 status=ok
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



// FUNCTION 144b6f0b0 FUN_144b6f0b0 body=16 status=ok
// SIG undefined FUN_144b6f0b0(void)

void FUN_144b6f0b0(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 144b6f0d0 FUN_144b6f0d0 body=369 status=ok
// SIG undefined FUN_144b6f0d0(void)

longlong FUN_144b6f0d0(longlong param_1,int param_2)

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
  
  local_res18 = 0;
  FUN_144b66f80(param_1,0x40,0x40,0x3f800000,&local_res18,0x3f800000,0,3);
  plVar1 = (longlong *)(param_1 + 0x28);
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  local_res20 = plVar1;
  lVar3 = FUN_14494321d(0x158);
  *(longlong *)lVar3 = lVar3;
  *(longlong *)(lVar3 + 8) = lVar3;
  *(longlong *)(lVar3 + 0x10) = lVar3;
  *(undefined2 *)(lVar3 + 0x18) = 0x101;
  *plVar1 = lVar3;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  iVar2 = 1;
  if (1 < param_2 * 2) {
    iVar2 = param_2 * 2;
  }
  uVar6 = (ulonglong)iVar2;
  pvVar4 = *(void **)(param_1 + 0xd0);
  uVar5 = (longlong)pvVar4 >> 3;
  if (uVar6 < uVar5) {
    pvVar4 = (void *)(uVar6 * 8);
  }
  else {
    if (uVar6 <= uVar5) {
      return param_1;
    }
    if ((ulonglong)(*(longlong *)(param_1 + 0xd8) >> 3) < uVar6) {
      FUN_144b6ffb0((undefined8 *)(param_1 + 200),uVar6,&local_res18);
      return param_1;
    }
    _Size = (uVar6 - uVar5) * 8;
    memset(pvVar4,0,_Size);
    pvVar4 = (void *)(_Size + (longlong)pvVar4);
  }
  *(void **)(param_1 + 0xd0) = pvVar4;
  return param_1;
}



// FUNCTION 144b6f250 FUN_144b6f250 body=665 status=ok
// SIG undefined FUN_144b6f250(void)

void FUN_144b6f250(longlong param_1)

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
  lVar6 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xd0) - lVar6 >> 3 != 0) {
    do {
      lVar6 = *(longlong *)(lVar6 + uVar10 * 8);
      if (lVar6 != 0) {
        puVar2 = *(undefined8 **)(lVar6 + 0x38);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        FUN_144e80ed0(lVar6 + 0x68);
        uVar3 = *(ulonglong *)(lVar6 + 0x60);
        if (0xf < uVar3) {
          lVar8 = *(longlong *)(lVar6 + 0x48);
          uVar9 = uVar3 + 1;
          lVar7 = lVar8;
          if (0xfff < uVar9) {
            lVar7 = *(longlong *)(lVar8 + -8);
            uVar9 = uVar3 + 0x28;
            if (0x1f < (lVar8 - lVar7) - 8U) goto LAB_144b6f4e3;
          }
          thunk_FUN_1400020a8(lVar7,uVar9);
        }
        *(undefined8 *)(lVar6 + 0x58) = 0;
        *(undefined8 *)(lVar6 + 0x60) = 0xf;
        *(undefined1 *)(lVar6 + 0x48) = 0;
        thunk_FUN_1400020a8(*(undefined8 *)(lVar6 + 8));
        thunk_FUN_1400020a8(lVar6,0x78);
      }
      lVar6 = *(longlong *)(param_1 + 200);
      uVar10 = uVar10 + 1;
    } while (uVar10 < (ulonglong)(*(longlong *)(param_1 + 0xd0) - lVar6 >> 3));
  }
  if (lVar6 != 0) {
    uVar10 = *(longlong *)(param_1 + 0xd8) - lVar6 & 0xfffffffffffffff8;
    lVar8 = lVar6;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(lVar6 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (lVar6 - lVar8) - 8U) goto LAB_144b6f4e3;
    }
    thunk_FUN_1400020a8(lVar8,uVar10);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  FID_conflict__vector<GSISymbolEntry,std::allocator<GSISymbolEntry>_>(param_1 + 0xa8);
  lVar6 = *(longlong *)(param_1 + 0x88);
  if (lVar6 != 0) {
    uVar10 = *(longlong *)(param_1 + 0x98) - lVar6 & 0xfffffffffffffff8;
    lVar8 = lVar6;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(lVar6 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (lVar6 - lVar8) - 8U) goto LAB_144b6f4e3;
    }
    thunk_FUN_1400020a8(lVar8,uVar10);
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x70);
  if (lVar6 != 0) {
    uVar10 = *(longlong *)(param_1 + 0x80) - lVar6 & 0xfffffffffffffff8;
    lVar8 = lVar6;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(lVar6 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (lVar6 - lVar8) - 8U) goto LAB_144b6f4e3;
    }
    thunk_FUN_1400020a8(lVar8,uVar10);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  lVar6 = *(longlong *)(param_1 + 0x58);
  if (lVar6 != 0) {
    uVar10 = *(longlong *)(param_1 + 0x68) - lVar6 & 0xfffffffffffffff8;
    lVar8 = lVar6;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(lVar6 + -8);
      uVar10 = uVar10 + 0x27;
      if (0x1f < (lVar6 - lVar8) - 8U) {
LAB_144b6f4e3:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar8,uVar10);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 8);
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  while (cVar1 == '\0') {
    FUN_14698d1ae(param_1 + 0x28,param_1 + 0x28,plVar4[2]);
    plVar5 = (longlong *)*plVar4;
    thunk_FUN_1400020a8(plVar4,0x158);
    plVar4 = plVar5;
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
  }
  thunk_FUN_1400020a8(*(undefined8 *)(param_1 + 0x28),0x158);
  FUN_144b67220(param_1);
  return;
}



// FUNCTION 144b6f4f0 FUN_144b6f4f0 body=52 status=ok
// SIG undefined FUN_144b6f4f0(void)

undefined8 FUN_144b6f4f0(undefined8 param_1,ulonglong param_2)

{
  FUN_144b6f250();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 144b6f530 FUN_144b6f530 body=412 status=ok
// SIG undefined FUN_144b6f530(void)

void FUN_144b6f530(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = (**(code **)(*param_1 + 0x10))();
  uVar5 = 0;
  if (lVar2 == -1) {
    local_38 = (char *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0xf;
    local_38 = (char *)FUN_144b659f0(&local_38,0x30);
    local_28 = 0x2c;
    local_20 = 0x2f;
    builtin_strncpy(local_38,"Cannot determine current file position (%T).",0x2d);
    FUN_144e7f060(&local_38);
    if (0xf < local_20) {
      uVar4 = local_20 + 1;
      pcVar3 = local_38;
      if (0xfff < uVar4) {
        uVar4 = local_20 + 0x28;
        pcVar3 = *(char **)(local_38 + -8);
        if ((char *)0x1f < local_38 + (-8 - (longlong)pcVar3)) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(pcVar3,uVar4);
    }
  }
  lVar2 = *param_2;
  if (param_2[1] - lVar2 >> 3 != 0) {
    do {
      uVar1 = *(undefined8 *)(lVar2 + uVar5 * 8);
      local_18 = (undefined1)uVar1;
      local_17 = (undefined1)((ulonglong)uVar1 >> 8);
      local_16 = (undefined1)((ulonglong)uVar1 >> 0x10);
      local_15 = (undefined1)((ulonglong)uVar1 >> 0x18);
      local_14 = (undefined1)((ulonglong)uVar1 >> 0x20);
      local_13 = (undefined1)((ulonglong)uVar1 >> 0x28);
      local_12 = (undefined1)((ulonglong)uVar1 >> 0x30);
      local_11 = (undefined1)((ulonglong)uVar1 >> 0x38);
      (**(code **)(*param_1 + 8))(param_1,&local_18,8);
      uVar5 = (ulonglong)((int)uVar5 + 1);
      lVar2 = *param_2;
    } while (uVar5 < (ulonglong)(param_2[1] - lVar2 >> 3));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 144b6f6f0 FUN_144b6f6f0 body=325 status=ok
// SIG undefined FUN_144b6f6f0(void)

void FUN_144b6f6f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res18;
  undefined1 local_res19;
  undefined1 local_res1a;
  undefined1 local_res1b;
  
  lVar3 = *(longlong *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar3 == 0) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  }
  *(longlong *)
   (*(longlong *)(param_2 + 0x58) +
   (longlong)((*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x4c)) / *(int *)(param_2 + 0xe0)) * 8)
       = lVar3;
  if (*(char *)(param_2 + 0x18) != '\0') {
    uVar1 = *(undefined4 *)(param_2 + 0xf0);
    local_res19 = (undefined1)((uint)uVar1 >> 8);
    local_res18 = (undefined1)uVar1;
    local_res1a = (undefined1)((uint)uVar1 >> 0x10);
    local_res1b = (undefined1)((uint)uVar1 >> 0x18);
    (**(code **)(**(longlong **)(param_1 + 0x50) + 8))
              (*(longlong **)(param_1 + 0x50),&local_res18,4);
  }
  local_res19 = (undefined1)((ulonglong)param_3 >> 8);
  local_res1a = (undefined1)((ulonglong)param_3 >> 0x10);
  local_res1b = (undefined1)((ulonglong)param_3 >> 0x18);
  local_res18 = (char)param_3;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 8))(*(longlong **)(param_1 + 0x50),&local_res18,4);
  iVar2 = param_5;
  lVar4 = (longlong)param_5;
  (**(code **)(**(longlong **)(param_1 + 0x50) + 8))(*(longlong **)(param_1 + 0x50),&param_5,4);
  (**(code **)(**(longlong **)(param_1 + 0x50) + 8))(*(longlong **)(param_1 + 0x50),param_4,iVar2);
  lVar3 = lVar4 + 8 + lVar3;
  *(longlong *)(param_1 + 0x58) = lVar3;
  if (*(char *)(param_2 + 0x18) != '\0') {
    *(longlong *)(param_1 + 0x58) = lVar3 + 4;
  }
  return;
}



// FUNCTION 144b6f840 FUN_144b6f840 body=386 status=ok
// SIG undefined FUN_144b6f840(void)

void FUN_144b6f840(longlong param_1,longlong param_2,int param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 local_res10;
  undefined8 local_28 [2];
  
  local_res10 = *(undefined8 *)(param_2 + 8);
  local_28[0] = local_res10;
  for (; param_3 <= param_4; param_3 = param_3 + 1) {
    lVar10 = *(longlong *)(param_1 + 0xa8);
    uVar6 = 0;
    lVar5 = *(longlong *)(param_1 + 0xb0) - lVar10;
    lVar2 = lVar5 >> 0x3f;
    uVar9 = local_28[0];
    if (lVar5 / 0x30 + lVar2 != lVar2) {
      uVar8 = 0;
      do {
        puVar11 = (undefined4 *)(uVar8 * 0x30 + lVar10);
        uVar1 = puVar11[9];
        if (param_3 < 0) {
          if ((int)uVar1 < 0) {
            iVar4 = ~uVar1 - param_3;
          }
          else {
            iVar4 = (uVar1 - param_3) + -1;
          }
          iVar4 = -(iVar4 / (int)uVar1);
        }
        else {
          iVar4 = param_3 / (int)uVar1;
        }
        if (param_3 == iVar4 * uVar1) {
          uVar1 = *(uint *)(param_1 + 0x44);
          iVar4 = puVar11[8];
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
          uVar1 = *(uint *)(param_1 + 0x48);
          if ((int)uVar1 < 0) {
            if (iVar4 < 0) {
              iVar3 = ~uVar1 - iVar4;
            }
            else {
              iVar3 = (iVar4 - uVar1) + -1;
            }
            iVar4 = -(iVar3 / iVar4);
          }
          else {
            iVar4 = (int)uVar1 / iVar4;
          }
          FUN_144e697d0(&local_res10,local_28,*puVar11,(longlong)((iVar4 - iVar7) + 1));
        }
        lVar10 = *(longlong *)(param_1 + 0xa8);
        uVar6 = uVar6 + 1;
        uVar8 = (ulonglong)uVar6;
        uVar9 = local_res10;
      } while (uVar8 < (ulonglong)((*(longlong *)(param_1 + 0xb0) - lVar10) / 0x30));
    }
    local_28[0] = uVar9;
  }
  return;
}



// FUNCTION 144b6f9d0 FUN_144b6f9d0 body=267 status=ok
// SIG undefined FUN_144b6f9d0(void)

undefined8 *
FUN_144b6f9d0(undefined8 *param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
             int param_6)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  int local_res20 [2];
  
  FUN_144e7f890();
  *param_1 = Imf_3_2::_anon_29922A21::LineBufferTask::vftable;
  param_1[2] = param_3;
  lVar2 = *(longlong *)
           (*(longlong *)(param_3 + 200) +
           ((ulonglong)(longlong)param_4 %
           (ulonglong)(*(longlong *)(param_3 + 0xd0) - *(longlong *)(param_3 + 200) >> 3)) * 8);
  param_1[3] = lVar2;
  FUN_144e80ef0(lVar2 + 0x68);
  lVar2 = param_1[3];
  if (*(char *)(lVar2 + 0x40) == '\0') {
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar2 + 8);
    *(int *)(param_1[3] + 0x28) =
         param_4 * *(int *)(param_1[2] + 0xe0) + *(int *)(param_1[2] + 0x4c);
    local_res20[0] = *(int *)(param_1[3] + 0x28) + *(int *)(param_1[2] + 0xe0) + -1;
    piVar1 = (int *)(param_1[2] + 0x50);
    piVar3 = local_res20;
    if (*piVar1 < local_res20[0]) {
      piVar3 = piVar1;
    }
    *(int *)(param_1[3] + 0x2c) = *piVar3;
    *(undefined1 *)(param_1[3] + 0x40) = 1;
  }
  piVar1 = (int *)(param_1[3] + 0x28);
  piVar3 = &param_5;
  if (param_5 <= *piVar1) {
    piVar3 = piVar1;
  }
  *(int *)(param_1[3] + 0x30) = *piVar3;
  piVar1 = (int *)(param_1[3] + 0x2c);
  piVar3 = &param_6;
  if (*piVar1 <= param_6) {
    piVar3 = piVar1;
  }
  *(int *)(param_1[3] + 0x34) = *piVar3;
  return param_1;
}



// FUNCTION 144b6fae0 FUN_144b6fae0 body=735 status=ok
// SIG undefined FUN_144b6fae0(void)

void FUN_144b6fae0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong local_res10;
  ulonglong local_res18 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x40) == 0) {
    iVar8 = *(int *)(lVar3 + 0x30);
    iVar14 = *(int *)(lVar3 + 0x34) + 1;
    iVar13 = 1;
  }
  else {
    iVar8 = *(int *)(lVar3 + 0x34);
    iVar14 = *(int *)(lVar3 + 0x30) + -1;
    iVar13 = -1;
  }
  do {
    if (iVar8 == iVar14) {
      lVar3 = *(longlong *)(param_1 + 0x18);
      if ((iVar8 < *(int *)(lVar3 + 0x28)) || (*(int *)(lVar3 + 0x2c) < iVar8)) {
        *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar3 + 8);
        lVar3 = *(longlong *)(param_1 + 0x18);
        *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x20) - *(int *)(lVar3 + 8);
        lVar3 = *(longlong *)(param_1 + 0x18);
        plVar5 = *(longlong **)(lVar3 + 0x38);
        if (plVar5 != (longlong *)0x0) {
          iVar8 = (**(code **)(*plVar5 + 0x18))
                            (plVar5,*(undefined8 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x18),
                             *(undefined4 *)(lVar3 + 0x28),&local_res10);
          lVar3 = *(longlong *)(param_1 + 0x18);
          if (iVar8 < *(int *)(lVar3 + 0x18)) {
            *(int *)(lVar3 + 0x18) = iVar8;
            *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) = local_res10;
          }
          else if (*(int *)(*(longlong *)(param_1 + 0x10) + 0xa0) == 0) {
            FUN_144b6f840(*(longlong *)(param_1 + 0x10),lVar3,*(undefined4 *)(lVar3 + 0x28),
                          *(undefined4 *)(lVar3 + 0x2c),*(int *)(lVar3 + 0x18));
          }
        }
        *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x40) = 0;
      }
      return;
    }
    local_res18[0] =
         *(longlong *)(*(longlong *)(param_1 + 0x18) + 8) +
         *(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
          (longlong)(iVar8 - *(int *)(*(longlong *)(param_1 + 0x10) + 0x4c)) * 8);
    uVar9 = 0;
    while( true ) {
      lVar3 = *(longlong *)(param_1 + 0x10);
      if ((ulonglong)((*(longlong *)(lVar3 + 0xb0) - *(longlong *)(lVar3 + 0xa8)) / 0x30) <= uVar9)
      break;
      puVar11 = (undefined4 *)(uVar9 * 0x30 + *(longlong *)(lVar3 + 0xa8));
      uVar1 = puVar11[9];
      if (iVar8 < 0) {
        if ((int)uVar1 < 0) {
          iVar10 = ~uVar1 - iVar8;
        }
        else {
          iVar10 = (uVar1 - iVar8) + -1;
        }
        iVar10 = -(iVar10 / (int)uVar1);
      }
      else {
        iVar10 = iVar8 / (int)uVar1;
      }
      if (iVar8 == iVar10 * uVar1) {
        iVar10 = puVar11[8];
        uVar2 = *(uint *)(lVar3 + 0x44);
        if ((int)uVar2 < 0) {
          if (iVar10 < 0) {
            iVar12 = ~uVar2 - iVar10;
          }
          else {
            iVar12 = (iVar10 - uVar2) + -1;
          }
          iVar12 = -(iVar12 / iVar10);
        }
        else {
          iVar12 = (int)uVar2 / iVar10;
        }
        uVar2 = *(uint *)(lVar3 + 0x48);
        if ((int)uVar2 < 0) {
          if (iVar10 < 0) {
            iVar6 = ~uVar2 - iVar10;
          }
          else {
            iVar6 = (iVar10 - uVar2) + -1;
          }
          iVar10 = -(iVar6 / iVar10);
        }
        else {
          iVar10 = (int)uVar2 / iVar10;
        }
        if (*(char *)(puVar11 + 10) == '\0') {
          if (iVar8 < 0) {
            if ((int)uVar1 < 0) {
              iVar6 = ~uVar1 - iVar8;
            }
            else {
              iVar6 = (uVar1 - iVar8) + -1;
            }
            iVar6 = -(iVar6 / (int)uVar1);
          }
          else {
            iVar6 = iVar8 / (int)uVar1;
          }
          lVar7 = (longlong)iVar6 * *(longlong *)(puVar11 + 6) + *(longlong *)(puVar11 + 2);
          lVar4 = *(longlong *)(puVar11 + 4);
          local_res10 = iVar12 * lVar4 + lVar7;
          FUN_144e69920(local_res18,&local_res10,iVar10 * lVar4 + lVar7,lVar4,
                        *(undefined4 *)(lVar3 + 0xa0),*puVar11);
          goto LAB_144b6fcee;
        }
        FUN_144e69b70(local_res18,*(undefined4 *)(lVar3 + 0xa0),*puVar11,
                      (longlong)((iVar10 - iVar12) + 1));
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
      else {
LAB_144b6fcee:
        uVar9 = (ulonglong)((int)uVar9 + 1);
      }
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x20) < local_res18[0]) {
      *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 0x20) = local_res18[0];
    }
    iVar8 = iVar8 + iVar13;
  } while( true );
}



// FUNCTION 144b6fdd0 FUN_144b6fdd0 body=79 status=ok
// SIG undefined FUN_144b6fdd0(void)

undefined8 * FUN_144b6fdd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = Imf_3_2::_anon_29922A21::LineBufferTask::vftable;
  FUN_144e80fc0(param_1[3] + 0x68);
  FUN_144e7f8e0(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144b6fe20 FUN_144b6fe20 body=388 status=ok
// SIG undefined FUN_144b6fe20(void)

void FUN_144b6fe20(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  code *pcVar1;
  void *_Dst;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  size_t _Size;
  void *pvVar5;
  
  _Dst = (void *)*param_1;
  uVar2 = (param_1[2] - (longlong)_Dst) / 0x30;
  if (uVar2 < param_3) {
    if (0x555555555555555 < param_3) {
      FUN_144b6efe0();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar4 = 0x555555555555555;
    if ((uVar2 <= 0x555555555555555 - (uVar2 >> 1)) &&
       (uVar4 = (uVar2 >> 1) + uVar2, uVar4 < param_3)) {
      uVar4 = param_3;
    }
    if (_Dst != (void *)0x0) {
      uVar2 = uVar2 * 0x30;
      pvVar5 = _Dst;
      if (0xfff < uVar2) {
        pvVar5 = *(void **)((longlong)_Dst + -8);
        uVar2 = uVar2 + 0x27;
        if (0x1f < (ulonglong)((longlong)_Dst + (-8 - (longlong)pvVar5))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(pvVar5,uVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    _Dst = (void *)FUN_144b6eef0(param_1,uVar4);
    *param_1 = _Dst;
    param_1[1] = _Dst;
    _Size = param_3 * 0x30;
    param_1[2] = (void *)(uVar4 * 0x30 + (longlong)_Dst);
    memmove(_Dst,param_2,_Size);
  }
  else {
    lVar3 = (param_1[1] - (longlong)_Dst) / 6 + (param_1[1] - (longlong)_Dst >> 0x3f);
    uVar2 = (lVar3 >> 3) - (lVar3 >> 0x3f);
    if (uVar2 < param_3) {
      memmove(_Dst,param_2,uVar2 * 0x30);
      _Dst = (void *)param_1[1];
      param_2 = (void *)(uVar2 * 0x30 + (longlong)param_2);
      param_3 = param_3 - uVar2;
    }
    _Size = param_3 * 0x30;
    memmove(_Dst,param_2,_Size);
  }
  param_1[1] = _Size + (longlong)_Dst;
  return;
}



// FUNCTION 144b6ffb0 FUN_144b6ffb0 body=371 status=ok
// SIG undefined FUN_144b6ffb0(void)

void FUN_144b6ffb0(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  longlong lVar5;
  
  if (0x1fffffffffffffff < param_2) {
    FUN_144b6f0b0();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar3 = param_1[2] - *param_1 >> 3;
  if ((0x1fffffffffffffff - (uVar3 >> 1) < uVar3) ||
     ((uVar3 = (uVar3 >> 1) + uVar3, uVar4 = param_2, param_2 <= uVar3 &&
      (uVar4 = uVar3, 0x1fffffffffffffff < uVar3)))) {
LAB_144b70119:
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
    if (uVar4 + 0x27 <= uVar4) goto LAB_144b70119;
    lVar2 = FUN_14494321d();
    if (lVar2 == 0) goto LAB_144b70112;
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
LAB_144b70112:
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



// FUNCTION 144b70130 FUN_144b70130 body=446 status=ok
// SIG undefined FUN_144b70130(void)

undefined8 * FUN_144b70130(longlong *param_1,void *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *_Src;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *_Dst;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  size_t _Size;
  longlong lVar9;
  undefined8 *puVar10;
  
  lVar2 = *param_1;
  lVar6 = ((longlong)param_2 - lVar2) / 6 + ((longlong)param_2 - lVar2 >> 0x3f);
  lVar9 = (param_1[1] - lVar2) / 0x30;
  if (lVar9 == 0x555555555555555) {
    FUN_144b6efe0();
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  uVar1 = lVar9 + 1;
  uVar7 = (param_1[2] - lVar2) / 0x30;
  uVar8 = 0x555555555555555;
  if ((uVar7 <= 0x555555555555555 - (uVar7 >> 1)) && (uVar8 = (uVar7 >> 1) + uVar7, uVar8 < uVar1))
  {
    uVar8 = uVar1;
  }
  puVar5 = (undefined8 *)FUN_144b6eef0(param_1,uVar8);
  puVar10 = puVar5 + ((lVar6 >> 3) - (lVar6 >> 0x3f)) * 6;
  uVar4 = param_3[1];
  *puVar10 = *param_3;
  puVar10[1] = uVar4;
  uVar4 = param_3[3];
  puVar10[2] = param_3[2];
  puVar10[3] = uVar4;
  uVar4 = param_3[5];
  puVar10[4] = param_3[4];
  puVar10[5] = uVar4;
  _Src = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)_Src;
    _Dst = puVar5;
    param_2 = _Src;
  }
  else {
    memmove(puVar5,_Src,(longlong)param_2 - (longlong)_Src);
    _Dst = puVar10 + 6;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  lVar2 = *param_1;
  if (lVar2 != 0) {
    uVar7 = ((param_1[2] - lVar2) / 0x30) * 0x30;
    lVar9 = lVar2;
    if (0xfff < uVar7) {
      uVar7 = uVar7 + 0x27;
      lVar9 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar9) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar9,uVar7);
  }
  *param_1 = (longlong)puVar5;
  param_1[1] = (longlong)(puVar5 + uVar1 * 6);
  param_1[2] = (longlong)(puVar5 + uVar8 * 6);
  return puVar10;
}



// FUNCTION 144b702f0 FUN_144b702f0 body=370 status=ok
// SIG undefined FUN_144b702f0(void)

void FUN_144b702f0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  longlong lVar4;
  
  if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_144b6ee80();
  }
  lVar4 = param_1[1] - *param_1 >> 3;
  uVar2 = param_1[2] - *param_1 >> 3;
  if ((0x1fffffffffffffff - (uVar2 >> 1) < uVar2) ||
     ((uVar2 = (uVar2 >> 1) + uVar2, uVar3 = param_2, param_2 <= uVar2 &&
      (uVar3 = uVar2, 0x1fffffffffffffff < uVar2)))) {
LAB_144b70459:
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  uVar3 = uVar3 * 8;
  if (uVar3 < 0x1000) {
    if (uVar3 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      _Dst = (void *)FUN_14494321d(uVar3);
    }
  }
  else {
    if (uVar3 + 0x27 <= uVar3) goto LAB_144b70459;
    lVar1 = FUN_14494321d();
    if (lVar1 == 0) goto LAB_144b70452;
    _Dst = (void *)(lVar1 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar1;
  }
  memset((void *)((longlong)_Dst + lVar4 * 8),0,(param_2 - lVar4) * 8);
  memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
  lVar4 = *param_1;
  if (lVar4 != 0) {
    uVar2 = param_1[2] - lVar4 & 0xfffffffffffffff8;
    lVar1 = lVar4;
    if (0xfff < uVar2) {
      uVar2 = uVar2 + 0x27;
      lVar1 = *(longlong *)(lVar4 + -8);
      if (0x1f < (lVar4 - lVar1) - 8U) {
LAB_144b70452:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar1,uVar2);
  }
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)((longlong)_Dst + param_2 * 8);
  param_1[2] = (longlong)(uVar3 + (longlong)_Dst);
  return;
}



// FUNCTION 144b70470 FUN_144b70470 body=139 status=ok
// SIG undefined FUN_144b70470(void)

longlong * FUN_144b70470(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (param_1 != param_2) {
    uVar1 = param_1[3];
    if (0xf < uVar1) {
      lVar2 = *param_1;
      uVar4 = uVar1 + 1;
      lVar3 = lVar2;
      if (0xfff < uVar4) {
        lVar3 = *(longlong *)(lVar2 + -8);
        uVar4 = uVar1 + 0x28;
        if (0x1f < (lVar2 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar3,uVar4);
    }
    param_1[3] = 0xf;
    param_1[2] = 0;
    *(undefined1 *)param_1 = 0;
    lVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar2;
    lVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar2;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  return param_1;
}



// FUNCTION 144b70500 FUN_144b70500 body=92 status=ok
// SIG undefined FUN_144b70500(void)

void FUN_144b70500(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_14698d0c2(param_1,param_1,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    thunk_FUN_1400020a8(plVar3,0x130);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_1400020a8(*param_1,0x130);
  return;
}



// FUNCTION 144b70560 FUN_144b70560 body=41 status=ok
// SIG undefined FUN_144b70560(void)

undefined8 * FUN_144b70560(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_144b70590(param_1,0,param_2,param_3);
  *param_1 = Imf_3_2::RgbaInputFile::vftable;
  return param_1;
}



// FUNCTION 144b70590 FUN_144b70590 body=275 status=ok
// SIG undefined FUN_144b70590(void)

undefined8 *
FUN_144b70590(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = Imf_3_2::RgbaInputFile::vftable;
  lVar2 = FUN_14494321d(0x10);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144e6af80(lVar2,param_3,param_4,1,lVar2);
  }
  uVar4 = 0;
  param_1[1] = uVar3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  lVar2 = FUN_14494321d(8);
  uVar3 = uVar4;
  if (lVar2 != 0) {
    uVar3 = FUN_144e81180(lVar2,param_1[1],param_2);
  }
  param_1[2] = uVar3;
  uVar3 = FUN_144e811c0(uVar3);
  uVar3 = FUN_144b67b80(uVar3);
  uVar1 = FUN_144b70e90(uVar3,param_1 + 4);
  if ((uVar1 & 0x20) != 0) {
    lVar2 = FUN_14494321d(0x1b0);
    if (lVar2 != 0) {
      uVar4 = FUN_144b71370(lVar2,param_1[2],uVar1);
    }
    param_1[3] = uVar4;
  }
  return param_1;
}



// FUNCTION 144b706b0 FUN_144b706b0 body=207 status=ok
// SIG undefined FUN_144b706b0(void)

void FUN_144b706b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *param_1 = Imf_3_2::RgbaInputFile::vftable;
  if (param_1[2] != 0) {
    thunk_FUN_1400020a8(param_1[2],8);
  }
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    thunk_FUN_1400020a8(*(undefined8 *)(lVar2 + 0x88));
    thunk_FUN_1400020a8(*(undefined8 *)(lVar2 + 400));
    _Mtx_destroy_in_situ(lVar2);
    thunk_FUN_1400020a8(lVar2,0x1b0);
  }
  uVar3 = param_1[7];
  if (0xf < uVar3) {
    lVar2 = param_1[4];
    uVar5 = uVar3 + 1;
    lVar4 = lVar2;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar2 + -8);
      uVar5 = uVar3 + 0x28;
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
  return;
}



// FUNCTION 144b70780 FUN_144b70780 body=1157 status=ok
// SIG undefined FUN_144b70780(void)

void FUN_144b70780(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [56];
  longlong local_70 [3];
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (lVar8 != 0) {
    local_b8 = lVar8;
    iVar4 = _Mtx_lock(lVar8);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(lVar8 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(lVar8 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    local_e8 = param_1 + 0x20;
    FUN_144b716e0(*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4);
    _Mtx_unlock(lVar8);
    goto LAB_144b70be5;
  }
  param_3 = param_3 * 8;
  param_4 = param_4 * 8;
  local_b8 = 0;
  local_b0 = 0;
  local_b8 = FUN_14494321d(0x158);
  *(longlong *)local_b8 = local_b8;
  *(longlong *)(local_b8 + 8) = local_b8;
  *(longlong *)(local_b8 + 0x10) = local_b8;
  *(undefined2 *)(local_b8 + 0x18) = 0x101;
  uVar5 = FUN_144e811c0(*(undefined8 *)(param_1 + 0x10));
  uVar5 = FUN_144b67b80(uVar5);
  uVar6 = FUN_144b70e90(uVar5,param_1 + 0x20);
  local_e8 = param_4;
  if ((uVar6 & 0x10) == 0) {
    uVar5 = FUN_14895e1c3(local_70,param_1 + 0x20,&DAT_1499720bc);
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 1;
    local_e0 = 1;
    uVar7 = FUN_144b72800(local_a8,1,param_2,param_3);
    FUN_144b72ae0(&local_b8,uVar5,uVar7);
    if (0xf < local_58) {
      uVar6 = local_58 + 1;
      lVar8 = local_70[0];
      if (0xfff < uVar6) {
        uVar6 = local_58 + 0x28;
        lVar8 = *(longlong *)(local_70[0] + -8);
        if (0x1f < (local_70[0] - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar8,uVar6);
    }
    uVar5 = FUN_14895e1c3(local_70,param_1 + 0x20,&DAT_1499720c0);
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 1;
    local_e0 = 1;
    local_e8 = param_4;
    uVar7 = FUN_144b72800(local_a8,1,param_2 + 2,param_3);
    FUN_144b72ae0(&local_b8,uVar5,uVar7);
    if (0xf < local_58) {
      uVar6 = local_58 + 1;
      lVar8 = local_70[0];
      if (0xfff < uVar6) {
        uVar6 = local_58 + 0x28;
        lVar8 = *(longlong *)(local_70[0] + -8);
        if (0x1f < (local_70[0] - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar8,uVar6);
    }
    uVar5 = FUN_14895e1c3(local_70,param_1 + 0x20,&DAT_1499720c4);
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 1;
    local_e0 = 1;
    local_e8 = param_4;
    uVar7 = FUN_144b72800(local_a8,1,param_2 + 4,param_3);
    FUN_144b72ae0(&local_b8,uVar5,uVar7);
    if (0xf < local_58) {
      uVar6 = local_58 + 1;
      lVar8 = local_70[0];
      if (0xfff < uVar6) {
        uVar6 = local_58 + 0x28;
        lVar8 = *(longlong *)(local_70[0] + -8);
        if (0x1f < (local_70[0] - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      goto LAB_144b70ae5;
    }
  }
  else {
    uVar5 = FUN_14895e1c3(local_70,param_1 + 0x20,&DAT_1499720b0);
    local_c0 = 0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = 1;
    local_e0 = 1;
    uVar7 = FUN_144b72800(local_a8,1,param_2,param_3);
    FUN_144b72ae0(&local_b8,uVar5,uVar7);
    if (0xf < local_58) {
      uVar6 = local_58 + 1;
      lVar8 = local_70[0];
      if (0xfff < uVar6) {
        uVar6 = local_58 + 0x28;
        lVar8 = *(longlong *)(local_70[0] + -8);
        if (0x1f < (local_70[0] - *(longlong *)(local_70[0] + -8)) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
LAB_144b70ae5:
      thunk_FUN_1400020a8(lVar8,uVar6);
    }
  }
  uVar5 = FUN_14895e1c3(local_70,param_1 + 0x20,&DAT_1499720c8);
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0x3ff0000000000000;
  local_d8 = 1;
  local_e0 = 1;
  local_e8 = param_4;
  uVar7 = FUN_144b72800(local_a8,1,param_2 + 6,param_3);
  FUN_144b72ae0(&local_b8,uVar5,uVar7);
  if (0xf < local_58) {
    uVar6 = local_58 + 1;
    lVar8 = local_70[0];
    if (0xfff < uVar6) {
      uVar6 = local_58 + 0x28;
      lVar8 = *(longlong *)(local_70[0] + -8);
      if (0x1f < (local_70[0] - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar8,uVar6);
  }
  FUN_144e811d0(*(undefined8 *)(param_1 + 0x10),&local_b8);
  cVar1 = *(char *)((longlong)*(longlong **)(local_b8 + 8) + 0x19);
  plVar3 = *(longlong **)(local_b8 + 8);
  while (cVar1 == '\0') {
    FUN_14698d1ae(&local_b8,&local_b8,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    thunk_FUN_1400020a8(plVar3,0x158);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  thunk_FUN_1400020a8(local_b8,0x158);
LAB_144b70be5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_108);
}



// FUNCTION 144b70c30 FUN_144b70c30 body=495 status=ok
// SIG undefined FUN_144b70c30(void)

void FUN_144b70c30(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar11 = (longlong)param_2;
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    FUN_144e811f0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    uVar3 = FUN_144e811c0(*(undefined8 *)(param_1 + 0x10));
    uVar3 = FUN_144b67b80(uVar3);
    uVar4 = FUN_144b70e90(uVar3,param_1 + 0x20);
    if ((uVar4 & 0x10) != 0) {
      uVar3 = FUN_14895e1c3(&local_50,param_1 + 0x20,&DAT_1499720b0);
      uVar5 = FUN_144e811e0(*(undefined8 *)(param_1 + 0x10));
      lVar6 = FUN_144b72d90(uVar5,uVar3);
      if (0xf < uStack_38) {
        uVar4 = uStack_38 + 1;
        lVar12 = CONCAT71(uStack_4f,local_50);
        lVar8 = lVar12;
        if (0xfff < uVar4) {
          uVar4 = uStack_38 + 0x28;
          lVar8 = *(longlong *)(lVar12 + -8);
          if (0x1f < (lVar12 - lVar8) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(lVar8,uVar4);
      }
      local_40 = 0;
      uStack_38 = 0xf;
      local_50 = 0;
      uVar3 = FUN_144e811c0(*(undefined8 *)(param_1 + 0x10));
      piVar7 = (int *)FUN_144b67b20(uVar3);
      iVar2 = *piVar7;
      iVar1 = piVar7[2];
      lVar8 = *(longlong *)(lVar6 + 8);
      for (; lVar11 <= param_3; lVar11 = lVar11 + 1) {
        lVar12 = lVar11 * *(longlong *)(lVar6 + 0x18) + lVar8;
        if (iVar2 <= iVar1) {
          uVar4 = (ulonglong)((iVar1 - iVar2) + 1);
          lVar10 = (longlong)iVar2;
          do {
            lVar9 = lVar10 * *(longlong *)(lVar6 + 0x10);
            *(undefined2 *)(lVar9 + 2 + lVar12) = *(undefined2 *)(lVar9 + lVar12);
            *(undefined2 *)(lVar9 + 4 + lVar12) = *(undefined2 *)(lVar9 + lVar12);
            lVar10 = lVar10 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
    }
  }
  else {
    local_58 = lVar6;
    iVar2 = _Mtx_lock(lVar6);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(5);
    }
    if (*(int *)(lVar6 + 0x4c) == 0x7fffffff) {
      *(undefined4 *)(lVar6 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      std::_Throw_Cpp_error(6);
    }
    lVar11 = *(longlong *)(param_1 + 0x18);
    iVar2 = param_2;
    if (param_3 < param_2) {
      iVar2 = param_3;
    }
    if (param_2 < param_3) {
      param_2 = param_3;
    }
    if (*(int *)(lVar11 + 0x74) == 0) {
      for (; iVar2 <= param_2; iVar2 = iVar2 + 1) {
        FUN_144b71af0(lVar11,iVar2);
      }
    }
    else {
      for (; iVar2 <= param_2; param_2 = param_2 + -1) {
        FUN_144b71af0(lVar11,param_2);
      }
    }
    _Mtx_unlock(lVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 144b70e30 FUN_144b70e30 body=25 status=ok
// SIG undefined FUN_144b70e30(void)

void FUN_144b70e30(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144e811c0(*(undefined8 *)(param_1 + 0x10));
  FUN_144b67b20(uVar1);
  return;
}



// FUNCTION 144b70e50 FUN_144b70e50 body=52 status=ok
// SIG undefined FUN_144b70e50(void)

undefined8 FUN_144b70e50(undefined8 param_1,ulonglong param_2)

{
  FUN_144b706b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 144b70e90 FUN_144b70e90 body=838 status=ok
// SIG undefined FUN_144b70e90(void)

void FUN_144b70e90(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 local_60;
  ulonglong uStack_58;
  longlong local_50 [3];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uVar2 = FUN_14895e1c3(&local_70,param_2,&DAT_1499720bc);
  FUN_144b65e00(param_1,uVar2);
  if (0xf < uStack_58) {
    uVar4 = uStack_58 + 1;
    lVar1 = CONCAT71(uStack_6f,local_70);
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      uVar4 = uStack_58 + 0x28;
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
  }
  uVar2 = FUN_14895e1c3(&local_70,param_2,&DAT_1499720c0);
  FUN_144b65e00(param_1,uVar2);
  if (0xf < uStack_58) {
    uVar4 = uStack_58 + 1;
    lVar1 = CONCAT71(uStack_6f,local_70);
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      uVar4 = uStack_58 + 0x28;
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
  }
  uVar2 = FUN_14895e1c3(&local_70,param_2,&DAT_1499720c4);
  FUN_144b65e00(param_1,uVar2);
  if (0xf < uStack_58) {
    uVar4 = uStack_58 + 1;
    lVar1 = CONCAT71(uStack_6f,local_70);
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      uVar4 = uStack_58 + 0x28;
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
  }
  uVar2 = FUN_14895e1c3(&local_70,param_2,&DAT_1499720c8);
  FUN_144b65e00(param_1,uVar2);
  if (0xf < uStack_58) {
    uVar4 = uStack_58 + 1;
    lVar1 = CONCAT71(uStack_6f,local_70);
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      uVar4 = uStack_58 + 0x28;
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
  }
  uVar2 = FUN_14895e1c3(&local_70,param_2,&DAT_1499720b0);
  FUN_144b65e00(param_1,uVar2);
  if (0xf < uStack_58) {
    uVar4 = uStack_58 + 1;
    lVar1 = CONCAT71(uStack_6f,local_70);
    lVar3 = lVar1;
    if (0xfff < uVar4) {
      uVar4 = uStack_58 + 0x28;
      lVar3 = *(longlong *)(lVar1 + -8);
      if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
  }
  uVar2 = FUN_14895e1c3(local_50,param_2,&DAT_1499720b4);
  local_78 = 1;
  lVar3 = FUN_144b65e00(param_1,uVar2);
  if (lVar3 == 0) {
    uVar2 = FUN_14895e1c3(&local_70,param_2,&DAT_1499720b8);
    local_78 = 3;
    FUN_144b65e00(param_1,uVar2);
    if (0xf < uStack_58) {
      uVar4 = uStack_58 + 1;
      lVar1 = CONCAT71(uStack_6f,local_70);
      lVar3 = lVar1;
      if (0xfff < uVar4) {
        uVar4 = uStack_58 + 0x28;
        lVar3 = *(longlong *)(lVar1 + -8);
        if (0x1f < (lVar1 - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar3,uVar4);
    }
    local_60 = 0;
    uStack_58 = 0xf;
    local_70 = 0;
  }
  if (0xf < local_38) {
    uVar4 = local_38 + 1;
    lVar3 = local_50[0];
    if (0xfff < uVar4) {
      uVar4 = local_38 + 0x28;
      lVar3 = *(longlong *)(local_50[0] + -8);
      if (0x1f < (local_50[0] - lVar3) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar3,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 144b71200 FUN_144b71200 body=245 status=ok
// SIG undefined FUN_144b71200(void)

undefined8 FUN_144b71200(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res18;
  undefined4 local_res1c;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_res8 = 0x3ea01a37;
  local_resc = 0x3ea872b0;
  local_res18 = 0x3e19999a;
  local_res1c = 0x3d75c28f;
  local_res20 = 0x3e99999a;
  local_res24 = 0x3f19999a;
  local_38 = 0x3f23d70a;
  local_34 = 0x3ea8f5c3;
  FUN_144b66ad0(&local_30,&local_38,&local_res20,&local_res18,&local_res8);
  cVar1 = FUN_144b735a0(param_2);
  if (cVar1 != '\0') {
    puVar2 = (undefined4 *)FUN_144b736b0(param_2);
    local_30 = *puVar2;
    local_2c = puVar2[1];
    local_28 = puVar2[2];
    local_24 = puVar2[3];
    local_20 = puVar2[4];
    local_1c = puVar2[5];
    local_18 = puVar2[6];
    local_14 = puVar2[7];
  }
  FUN_144e81210(param_1,&local_30);
  return param_1;
}



// FUNCTION 144b71300 FUN_144b71300 body=107 status=ok
// SIG undefined FUN_144b71300(void)

longlong FUN_144b71300(longlong param_1)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  
  iVar1 = DAT_14c6d9688 + 2;
  bVar2 = (byte)iVar1;
  while (1 < param_1 >> (bVar2 & 0x3f)) {
    iVar1 = iVar1 + 1;
    bVar2 = (byte)iVar1;
  }
  lVar3 = 1L << (bVar2 + 1 & 0x3f);
  if (param_1 <= lVar3 + -0x40) {
    lVar3 = 1L << (bVar2 & 0x3f);
    if (lVar3 + 0x40 <= param_1) {
      return 0;
    }
    return (lVar3 - param_1) + 0x40;
  }
  return (lVar3 - param_1) + 0x40;
}



// FUNCTION 144b71370 FUN_144b71370 body=869 status=ok
// SIG undefined FUN_144b71370(void)

longlong FUN_144b71370(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 local_18 [16];
  
  _Mtx_init_in_situ(param_1,2);
  *(undefined8 *)(param_1 + 0x50) = param_2;
  *(byte *)(param_1 + 0x58) = (byte)(param_3 >> 5) & 1;
  uVar7 = FUN_144e811c0(param_2);
  piVar8 = (int *)FUN_144b67b20(uVar7);
  iVar1 = *piVar8;
  iVar2 = piVar8[1];
  iVar3 = piVar8[2];
  iVar4 = piVar8[3];
  *(int *)(param_1 + 0x5c) = iVar1;
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 100) = iVar4;
  *(int *)(param_1 + 0x68) = (iVar3 - iVar1) + 1;
  *(int *)(param_1 + 0x6c) = (iVar4 - iVar2) + 1;
  *(int *)(param_1 + 0x70) = iVar2 + -0x1d;
  uVar7 = FUN_144e811c0(*(undefined8 *)(param_1 + 0x50));
  puVar9 = (undefined4 *)FUN_144b67bc0(uVar7);
  *(undefined4 *)(param_1 + 0x74) = *puVar9;
  uVar7 = FUN_144e811c0(*(undefined8 *)(param_1 + 0x50));
  puVar9 = (undefined4 *)FUN_144b71200(local_18,uVar7);
  *(undefined4 *)(param_1 + 0x78) = *puVar9;
  *(undefined4 *)(param_1 + 0x7c) = puVar9[1];
  *(undefined4 *)(param_1 + 0x80) = puVar9[2];
  lVar12 = (longlong)*(int *)(param_1 + 0x68);
  uVar10 = FUN_144b71300(lVar12 * 8);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (lVar12 + (uVar10 >> 3)) * 0x20;
  uVar7 = SUB168(ZEXT816(8) * auVar5,0);
  if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  lVar11 = FUN_144a7d36f(uVar7);
  *(longlong *)(param_1 + 0x88) = lVar11;
  *(longlong *)(param_1 + 0x90) = lVar11;
  lVar12 = (uVar10 >> 3) + (longlong)*(int *)(param_1 + 0x68);
  *(longlong *)(param_1 + 0x98) = lVar11 + lVar12 * 8;
  *(longlong *)(param_1 + 0xa0) = lVar12 * 0x10 + lVar11;
  *(longlong *)(param_1 + 0xa8) = lVar11 + lVar12 * 0x18;
  *(longlong *)(param_1 + 0xb0) = lVar12 * 0x20 + lVar11;
  *(longlong *)(param_1 + 0xb8) = lVar11 + lVar12 * 0x28;
  *(longlong *)(param_1 + 0xc0) = lVar12 * 0x30 + lVar11;
  *(longlong *)(param_1 + 200) = lVar12 * 0x38 + lVar11;
  *(longlong *)(param_1 + 0xd0) = lVar11 + lVar12 * 0x40;
  *(longlong *)(param_1 + 0xd8) = lVar11 + lVar12 * 0x48;
  *(longlong *)(param_1 + 0xe0) = lVar12 * 0x50 + lVar11;
  *(longlong *)(param_1 + 0xe8) = lVar12 * 0x58 + lVar11;
  *(longlong *)(param_1 + 0xf0) = lVar12 * 0x60 + lVar11;
  *(longlong *)(param_1 + 0xf8) = lVar12 * 0x68 + lVar11;
  *(longlong *)(param_1 + 0x100) = lVar12 * 0x70 + lVar11;
  *(longlong *)(param_1 + 0x108) = lVar12 * 0x78 + lVar11;
  *(longlong *)(param_1 + 0x110) = lVar12 * 0x80 + lVar11;
  *(longlong *)(param_1 + 0x118) = lVar12 * 0x88 + lVar11;
  *(longlong *)(param_1 + 0x120) = lVar12 * 0x90 + lVar11;
  *(longlong *)(param_1 + 0x128) = lVar12 * 0x98 + lVar11;
  *(longlong *)(param_1 + 0x130) = lVar12 * 0xa0 + lVar11;
  *(longlong *)(param_1 + 0x138) = lVar12 * 0xa8 + lVar11;
  *(longlong *)(param_1 + 0x140) = lVar12 * 0xb0 + lVar11;
  *(longlong *)(param_1 + 0x148) = lVar12 * 0xb8 + lVar11;
  *(longlong *)(param_1 + 0x150) = lVar12 * 0xc0 + lVar11;
  *(longlong *)(param_1 + 0x158) = lVar12 * 200 + lVar11;
  *(longlong *)(param_1 + 0x160) = lVar12 * 0xd0 + lVar11;
  *(longlong *)(param_1 + 0x168) = lVar12 * 0xd8 + lVar11;
  *(longlong *)(param_1 + 0x170) = lVar12 * 0xe0 + lVar11;
  *(longlong *)(param_1 + 0x178) = lVar12 * 0xe8 + lVar11;
  *(longlong *)(param_1 + 0x180) = lVar12 * 0xf0 + lVar11;
  *(longlong *)(param_1 + 0x188) = lVar12 * 0xf8 + lVar11;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (longlong)(*(int *)(param_1 + 0x68) + 0x1a);
  uVar7 = SUB168(ZEXT816(8) * auVar6,0);
  if (SUB168(ZEXT816(8) * auVar6,8) != 0) {
    uVar7 = 0xffffffffffffffff;
  }
  uVar7 = FUN_144a7d36f(uVar7);
  *(undefined8 *)(param_1 + 400) = uVar7;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  return param_1;
}



// FUNCTION 144b716e0 FUN_144b716e0 body=994 status=ok
// SIG undefined FUN_144b716e0(void)

void FUN_144b716e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98 [56];
  longlong local_60 [3];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x198) == 0) {
    local_a8 = 0;
    local_a0 = 0;
    local_a8 = FUN_14494321d(0x158);
    *(longlong *)local_a8 = local_a8;
    *(longlong *)(local_a8 + 8) = local_a8;
    *(longlong *)(local_a8 + 0x10) = local_a8;
    *(undefined2 *)(local_a8 + 0x18) = 0x101;
    uVar4 = FUN_14895e1c3(local_60,param_5,&DAT_1499720b0);
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0x3fe0000000000000;
    local_c8 = 1;
    local_d0 = 1;
    local_d8 = 0;
    uVar5 = FUN_144b72800(local_98,1,
                          *(longlong *)(param_1 + 400) + 2 +
                          (longlong)(0xd - *(int *)(param_1 + 0x5c)) * 8,8);
    FUN_144b72ae0(&local_a8,uVar4,uVar5);
    if (0xf < local_48) {
      uVar7 = local_48 + 1;
      lVar6 = local_60[0];
      if (0xfff < uVar7) {
        uVar7 = local_48 + 0x28;
        lVar6 = *(longlong *)(local_60[0] + -8);
        if (0x1f < (local_60[0] - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar6,uVar7);
    }
    if (*(char *)(param_1 + 0x58) != '\0') {
      uVar4 = FUN_14895e1c3(local_60,param_5,&DAT_1499720b4);
      local_b0 = 0;
      local_b8 = 0;
      local_c0 = 0;
      local_c8 = 2;
      local_d0 = 2;
      local_d8 = 0;
      uVar5 = FUN_144b72800(local_98,1,
                            *(longlong *)(param_1 + 400) +
                            (longlong)(0xd - *(int *)(param_1 + 0x5c)) * 8,0x10);
      FUN_144b72ae0(&local_a8,uVar4,uVar5);
      if (0xf < local_48) {
        uVar7 = local_48 + 1;
        lVar6 = local_60[0];
        if (0xfff < uVar7) {
          uVar7 = local_48 + 0x28;
          lVar6 = *(longlong *)(local_60[0] + -8);
          if (0x1f < (local_60[0] - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(lVar6,uVar7);
      }
      uVar4 = FUN_14895e1c3(local_60,param_5,&DAT_1499720b8);
      local_b0 = 0;
      local_b8 = 0;
      local_c0 = 0;
      local_c8 = 2;
      local_d0 = 2;
      local_d8 = 0;
      uVar5 = FUN_144b72800(local_98,1,
                            *(longlong *)(param_1 + 400) + 4 +
                            (longlong)(0xd - *(int *)(param_1 + 0x5c)) * 8,0x10);
      FUN_144b72ae0(&local_a8,uVar4,uVar5);
      if (0xf < local_48) {
        uVar7 = local_48 + 1;
        lVar6 = local_60[0];
        if (0xfff < uVar7) {
          uVar7 = local_48 + 0x28;
          lVar6 = *(longlong *)(local_60[0] + -8);
          if (0x1f < (local_60[0] - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
        }
        thunk_FUN_1400020a8(lVar6,uVar7);
      }
    }
    uVar4 = FUN_14895e1c3(local_60,param_5,&DAT_1499720c8);
    local_b0 = 0;
    local_b8 = 0;
    local_c0 = 0x3ff0000000000000;
    local_c8 = 1;
    local_d0 = 1;
    local_d8 = 0;
    uVar5 = FUN_144b72800(local_98,1,
                          (longlong)(0xd - *(int *)(param_1 + 0x5c)) * 8 + 6 +
                          *(longlong *)(param_1 + 400),8);
    FUN_144b72ae0(&local_a8,uVar4,uVar5);
    if (0xf < local_48) {
      uVar7 = local_48 + 1;
      lVar6 = local_60[0];
      if (0xfff < uVar7) {
        uVar7 = local_48 + 0x28;
        lVar6 = *(longlong *)(local_60[0] + -8);
        if (0x1f < (local_60[0] - lVar6) - 8U) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
      }
      thunk_FUN_1400020a8(lVar6,uVar7);
    }
    FUN_144e811d0(*(undefined8 *)(param_1 + 0x50),&local_a8);
    cVar1 = *(char *)((longlong)*(longlong **)(local_a8 + 8) + 0x19);
    plVar3 = *(longlong **)(local_a8 + 8);
    while (cVar1 == '\0') {
      FUN_14698d1ae(&local_a8,&local_a8,plVar3[2]);
      plVar2 = (longlong *)*plVar3;
      thunk_FUN_1400020a8(plVar3,0x158);
      plVar3 = plVar2;
      cVar1 = *(char *)((longlong)plVar2 + 0x19);
    }
    thunk_FUN_1400020a8(local_a8,0x158);
  }
  *(undefined8 *)(param_1 + 0x198) = param_2;
  *(undefined8 *)(param_1 + 0x1a0) = param_3;
  *(undefined8 *)(param_1 + 0x1a8) = param_4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
}



// FUNCTION 144b71af0 FUN_144b71af0 body=945 status=ok
// SIG undefined FUN_144b71af0(void)

void FUN_144b71af0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [240];
  undefined1 local_b8 [96];
  ulonglong local_58 [4];
  uint uVar7;
  
  local_58[3] = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(longlong *)(param_1 + 0x198) == 0) {
    FUN_144e47110();
    FUN_1470a639e(local_1b8,1);
    uVar1 = FUN_144e811b0(*(undefined8 *)(param_1 + 0x50));
    uVar2 = FUN_141302cc4(local_1a8,
                          "No frame buffer was specified as the pixel data destination for image file \""
                         );
    uVar1 = FUN_141302cc4(uVar2,uVar1);
    FUN_141302cc4(uVar1,&DAT_149971260);
    FUN_144e40dd0(local_b8,local_1b8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_b8,(ThrowInfo *)&DAT_14c6d50e0);
  }
  uVar9 = param_2 - *(int *)(param_1 + 0x70);
  iVar5 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
  if (iVar5 < 0x1d) {
    FUN_144b71ec0(param_1,uVar9);
  }
  iVar6 = 2;
  if (iVar5 < 3) {
    if ((int)uVar9 < 0) {
      uVar3 = (ulonglong)
              (uint)((int)((int)((ulonglong)((longlong)(int)(2 - uVar9) * 0x55555555) >> 0x20) -
                          (2 - uVar9)) >> 1);
    }
    else {
      uVar3 = (longlong)(int)uVar9 / 3 + ((longlong)(int)uVar9 >> 0x3f) & 0xffffffff;
    }
    iVar11 = uVar9 + ((int)uVar3 + (int)(uVar3 >> 0x1f)) * -3;
    local_58[0] = *(ulonglong *)(param_1 + 0x178);
    local_58[1] = *(undefined8 *)(param_1 + 0x180);
    local_58[2] = *(ulonglong *)(param_1 + 0x188);
    *(ulonglong *)(param_1 + 0x178) =
         local_58[iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                           (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU)
                                >> 0x1f)) * -3];
    iVar5 = iVar11 + 1;
    *(ulonglong *)(param_1 + 0x180) =
         local_58[iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                          (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3];
    iVar11 = iVar11 + 2;
    *(ulonglong *)(param_1 + 0x188) =
         local_58[iVar11 + (iVar11 / 3 + (iVar11 >> 0x1f) +
                           (int)(((longlong)iVar11 / 3 + ((longlong)iVar11 >> 0x3f) & 0xffffffffU)
                                >> 0x1f)) * -3];
  }
  puVar10 = (undefined8 *)(param_1 + 0x178);
  puVar8 = (undefined8 *)(param_1 + 0x188);
  iVar5 = 0;
  if ((int)uVar9 < 0) {
    uVar9 = -uVar9;
    uVar7 = uVar9;
    if (0x1d < (int)uVar9) {
      uVar7 = 0x1d;
    }
    iVar6 = uVar7 - 1;
    lVar4 = (longlong)iVar6;
    if (-1 < iVar6) {
      puVar8 = (undefined8 *)(param_1 + 0x90 + lVar4 * 8);
      do {
        FUN_144b72540(param_1,param_2 + -0xe + iVar6,*puVar8);
        iVar6 = iVar6 + -1;
        puVar8 = puVar8 + -1;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    if (3 < (int)uVar9) {
      uVar9 = 3;
    }
    lVar4 = (longlong)(int)uVar9;
    if (0 < (int)uVar9) {
      do {
        if ((param_2 + iVar5 & 1U) == 0) {
          FUN_144e815e0(*(undefined4 *)(param_1 + 0x68),param_1 + ((longlong)iVar5 + 0x12) * 8,
                        *puVar10);
          uVar1 = *puVar10;
          uVar2 = uVar1;
        }
        else {
          uVar1 = puVar10[-0x10];
          uVar2 = *puVar10;
        }
        FUN_144e819a0(param_1 + 0x78,*(undefined4 *)(param_1 + 0x68),uVar1,uVar2);
        iVar5 = iVar5 + 1;
        puVar10 = puVar10 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  else {
    uVar7 = uVar9;
    if (0x1d < (int)uVar9) {
      uVar7 = 0x1d;
    }
    iVar5 = uVar7 - 1;
    lVar4 = (longlong)iVar5;
    if (-1 < iVar5) {
      iVar5 = (param_2 + 0xe) - iVar5;
      puVar10 = (undefined8 *)(param_1 + (0x2e - lVar4) * 8);
      do {
        FUN_144b72540(param_1,iVar5,*puVar10);
        iVar5 = iVar5 + 1;
        puVar10 = puVar10 + 1;
        lVar4 = lVar4 + -1;
      } while (-1 < lVar4);
    }
    if (3 < (int)uVar9) {
      uVar9 = 3;
    }
    if ((int)(2 - uVar9) < 2) {
      lVar4 = 0x10;
      do {
        if ((param_2 + iVar6 & 1U) == 0) {
          FUN_144e815e0(*(undefined4 *)(param_1 + 0x68),param_1 + 0x90 + lVar4,*puVar8);
          uVar1 = *puVar8;
          uVar2 = uVar1;
        }
        else {
          uVar1 = puVar8[-0x10];
          uVar2 = *puVar8;
        }
        FUN_144e819a0(param_1 + 0x78,*(undefined4 *)(param_1 + 0x68),uVar1,uVar2);
        iVar6 = iVar6 + -1;
        lVar4 = lVar4 + -8;
        puVar8 = puVar8 + -1;
      } while ((int)(2 - uVar9) < iVar6);
    }
  }
  uVar3 = 0;
  FUN_144e81b00(param_1 + 0x78,*(undefined4 *)(param_1 + 0x68),param_1 + 0x178,
                *(undefined8 *)(param_1 + 400));
  lVar4 = *(longlong *)(param_1 + 0x198);
  uVar12 = uVar3;
  if (0 < *(int *)(param_1 + 0x68)) {
    do {
      *(undefined8 *)
       (lVar4 + ((longlong)(*(int *)(param_1 + 0x5c) + (int)uVar12) * *(longlong *)(param_1 + 0x1a0)
                + (longlong)param_2 * *(longlong *)(param_1 + 0x1a8)) * 8) =
           *(undefined8 *)(uVar3 + *(longlong *)(param_1 + 400));
      uVar9 = (int)uVar12 + 1;
      uVar3 = uVar3 + 8;
      uVar12 = (ulonglong)uVar9;
    } while ((int)uVar9 < *(int *)(param_1 + 0x68));
  }
  *(int *)(param_1 + 0x70) = param_2;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58[3] ^ (ulonglong)auStack_1d8);
}



// FUNCTION 144b71ec0 FUN_144b71ec0 body=1642 status=ok
// SIG undefined FUN_144b71ec0(void)

void FUN_144b71ec0(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 local_108 [4];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)local_108;
  if ((int)param_2 < 0) {
    iVar2 = (int)((ulonglong)((longlong)(int)(0x1c - param_2) * 0x72c234f7) >> 0x20) -
            (0x1c - param_2);
    uVar1 = (iVar2 >> 4) - (iVar2 >> 0x1f);
  }
  else {
    uVar1 = param_2 / 0x1d;
  }
  iVar2 = param_2 + uVar1 * -0x1d;
  local_108[0] = *(undefined8 *)(param_1 + 0x90);
  local_108[1] = *(undefined8 *)(param_1 + 0x98);
  local_108[2] = *(undefined8 *)(param_1 + 0xa0);
  local_108[3] = *(undefined8 *)(param_1 + 0xa8);
  local_e8 = *(undefined8 *)(param_1 + 0xb0);
  local_e0 = *(undefined8 *)(param_1 + 0xb8);
  local_d8 = *(undefined8 *)(param_1 + 0xc0);
  local_d0 = *(undefined8 *)(param_1 + 200);
  local_c8 = *(undefined8 *)(param_1 + 0xd0);
  local_c0 = *(undefined8 *)(param_1 + 0xd8);
  local_b8 = *(undefined8 *)(param_1 + 0xe0);
  local_b0 = *(undefined8 *)(param_1 + 0xe8);
  local_a8 = *(undefined8 *)(param_1 + 0xf0);
  local_a0 = *(undefined8 *)(param_1 + 0xf8);
  local_98 = *(undefined8 *)(param_1 + 0x100);
  local_90 = *(undefined8 *)(param_1 + 0x108);
  local_88 = *(undefined8 *)(param_1 + 0x110);
  local_80 = *(undefined8 *)(param_1 + 0x118);
  local_78 = *(undefined8 *)(param_1 + 0x120);
  local_70 = *(undefined8 *)(param_1 + 0x128);
  local_68 = *(undefined8 *)(param_1 + 0x130);
  local_60 = *(undefined8 *)(param_1 + 0x138);
  local_58 = *(undefined8 *)(param_1 + 0x140);
  local_50 = *(undefined8 *)(param_1 + 0x148);
  local_48 = *(undefined8 *)(param_1 + 0x150);
  local_40 = *(undefined8 *)(param_1 + 0x158);
  local_38 = *(undefined8 *)(param_1 + 0x160);
  local_30 = *(undefined8 *)(param_1 + 0x168);
  local_28 = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(param_1 + 0x90) = local_108[iVar2 % 0x1d];
  *(undefined8 *)(param_1 + 0x98) = local_108[(iVar2 + 1) % 0x1d];
  *(undefined8 *)(param_1 + 0xa0) = local_108[(iVar2 + 2) % 0x1d];
  *(undefined8 *)(param_1 + 0xa8) = local_108[(iVar2 + 3) % 0x1d];
  *(undefined8 *)(param_1 + 0xb0) = local_108[(iVar2 + 4) % 0x1d];
  *(undefined8 *)(param_1 + 0xb8) = local_108[(iVar2 + 5) % 0x1d];
  *(undefined8 *)(param_1 + 0xc0) = local_108[(iVar2 + 6) % 0x1d];
  *(undefined8 *)(param_1 + 200) = local_108[(iVar2 + 7) % 0x1d];
  *(undefined8 *)(param_1 + 0xd0) = local_108[(iVar2 + 8) % 0x1d];
  *(undefined8 *)(param_1 + 0xd8) = local_108[(iVar2 + 9) % 0x1d];
  *(undefined8 *)(param_1 + 0xe0) = local_108[(iVar2 + 10) % 0x1d];
  *(undefined8 *)(param_1 + 0xe8) = local_108[(iVar2 + 0xb) % 0x1d];
  *(undefined8 *)(param_1 + 0xf0) = local_108[(iVar2 + 0xc) % 0x1d];
  *(undefined8 *)(param_1 + 0xf8) = local_108[(iVar2 + 0xd) % 0x1d];
  *(undefined8 *)(param_1 + 0x100) = local_108[(iVar2 + 0xe) % 0x1d];
  *(undefined8 *)(param_1 + 0x108) = local_108[(iVar2 + 0xf) % 0x1d];
  *(undefined8 *)(param_1 + 0x110) = local_108[(iVar2 + 0x10) % 0x1d];
  *(undefined8 *)(param_1 + 0x118) = local_108[(iVar2 + 0x11) % 0x1d];
  *(undefined8 *)(param_1 + 0x120) = local_108[(iVar2 + 0x12) % 0x1d];
  *(undefined8 *)(param_1 + 0x128) = local_108[(iVar2 + 0x13) % 0x1d];
  *(undefined8 *)(param_1 + 0x130) = local_108[(iVar2 + 0x14) % 0x1d];
  *(undefined8 *)(param_1 + 0x138) = local_108[(iVar2 + 0x15) % 0x1d];
  *(undefined8 *)(param_1 + 0x140) = local_108[(iVar2 + 0x16) % 0x1d];
  *(undefined8 *)(param_1 + 0x148) = local_108[(iVar2 + 0x17) % 0x1d];
  *(undefined8 *)(param_1 + 0x150) = local_108[(iVar2 + 0x18) % 0x1d];
  *(undefined8 *)(param_1 + 0x158) = local_108[(iVar2 + 0x19) % 0x1d];
  *(undefined8 *)(param_1 + 0x160) = local_108[(iVar2 + 0x1a) % 0x1d];
  *(undefined8 *)(param_1 + 0x168) = local_108[(iVar2 + 0x1b) % 0x1d];
  *(undefined8 *)(param_1 + 0x170) = local_108[(iVar2 + 0x1c) % 0x1d];
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)local_108);
}



// FUNCTION 144b72540 FUN_144b72540 body=695 status=ok
// SIG undefined FUN_144b72540(void)

void FUN_144b72540(longlong param_1,uint param_2,void *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  if (((int)uVar3 <= (int)param_2) && (uVar3 = param_2, *(int *)(param_1 + 100) < (int)param_2)) {
    uVar3 = *(int *)(param_1 + 100) - 1;
  }
  FUN_144e81200(*(undefined8 *)(param_1 + 0x50),uVar3);
  if ((*(char *)(param_1 + 0x58) == '\0') && (iVar2 = 0, 0 < *(int *)(param_1 + 0x68))) {
    lVar1 = 0x68;
    do {
      iVar2 = iVar2 + 1;
      *(undefined2 *)(lVar1 + *(longlong *)(param_1 + 400)) = 0;
      *(undefined2 *)(*(longlong *)(param_1 + 400) + -4 + lVar1 + 8) = 0;
      lVar1 = lVar1 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x68));
  }
  if ((uVar3 & 1) == 0) {
    **(undefined8 **)(param_1 + 400) = (*(undefined8 **)(param_1 + 400))[0xd];
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x68 + (longlong)*(int *)(param_1 + 0x68) * 8) =
         *(undefined8 *)
          (*(longlong *)(param_1 + 400) + 0x58 + (longlong)*(int *)(param_1 + 0x68) * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 8) =
         *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x68);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x70 + (longlong)*(int *)(param_1 + 0x68) * 8) =
         *(undefined8 *)
          (*(longlong *)(param_1 + 400) + 0x58 + (longlong)*(int *)(param_1 + 0x68) * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x10) =
         *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x68);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x78 + (longlong)*(int *)(param_1 + 0x68) * 8) =
         *(undefined8 *)
          (*(longlong *)(param_1 + 400) + 0x58 + (longlong)*(int *)(param_1 + 0x68) * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x18) =
         *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x68);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x80 + (longlong)*(int *)(param_1 + 0x68) * 8) =
         *(undefined8 *)
          (*(longlong *)(param_1 + 400) + 0x58 + (longlong)*(int *)(param_1 + 0x68) * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x20) =
         *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x68);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x88 + (longlong)*(int *)(param_1 + 0x68) * 8) =
         *(undefined8 *)
          (*(longlong *)(param_1 + 400) + 0x58 + (longlong)*(int *)(param_1 + 0x68) * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x28) =
         *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x68);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x90 + (longlong)*(int *)(param_1 + 0x68) * 8) =
         *(undefined8 *)
          (*(longlong *)(param_1 + 400) + 0x58 + (longlong)*(int *)(param_1 + 0x68) * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x30) =
         *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x68);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x98 + (longlong)*(int *)(param_1 + 0x68) * 8) =
         *(undefined8 *)
          (*(longlong *)(param_1 + 400) + 0x58 + (longlong)*(int *)(param_1 + 0x68) * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x38) =
         *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x68);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0xa0 + (longlong)*(int *)(param_1 + 0x68) * 8) =
         *(undefined8 *)
          (*(longlong *)(param_1 + 400) + 0x58 + (longlong)*(int *)(param_1 + 0x68) * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x40) =
         *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x68);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0xa8 + (longlong)*(int *)(param_1 + 0x68) * 8) =
         *(undefined8 *)
          (*(longlong *)(param_1 + 400) + 0x58 + (longlong)*(int *)(param_1 + 0x68) * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x48) =
         *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x68);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0xb0 + (longlong)*(int *)(param_1 + 0x68) * 8) =
         *(undefined8 *)
          (*(longlong *)(param_1 + 400) + 0x58 + (longlong)*(int *)(param_1 + 0x68) * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x50) =
         *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x68);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0xb8 + (longlong)*(int *)(param_1 + 0x68) * 8) =
         *(undefined8 *)
          (*(longlong *)(param_1 + 400) + 0x58 + (longlong)*(int *)(param_1 + 0x68) * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x58) =
         *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x68);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0xc0 + (longlong)*(int *)(param_1 + 0x68) * 8) =
         *(undefined8 *)
          (*(longlong *)(param_1 + 400) + 0x58 + (longlong)*(int *)(param_1 + 0x68) * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x60) =
         *(undefined8 *)(*(longlong *)(param_1 + 400) + 0x68);
    *(undefined8 *)(*(longlong *)(param_1 + 400) + 200 + (longlong)*(int *)(param_1 + 0x68) * 8) =
         *(undefined8 *)
          (*(longlong *)(param_1 + 400) + 0x58 + (longlong)*(int *)(param_1 + 0x68) * 8);
    FUN_144e81290(*(undefined4 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 400),param_3);
    return;
  }
  memcpy(param_3,(void *)(*(longlong *)(param_1 + 400) + 0x68),
         (longlong)*(int *)(param_1 + 0x68) << 3);
  return;
}



// FUNCTION 144b72800 FUN_144b72800 body=64 status=ok
// SIG undefined FUN_144b72800(void)

undefined4 *
FUN_144b72800(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined1 param_9,undefined1 param_10)

{
  *(undefined8 *)(param_1 + 6) = param_5;
  param_1[8] = param_6;
  param_1[9] = param_7;
  *(undefined1 *)(param_1 + 0xc) = param_9;
  *(undefined1 *)((longlong)param_1 + 0x31) = param_10;
  *(undefined8 *)(param_1 + 10) = param_8;
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 2) = param_3;
  *(undefined8 *)(param_1 + 4) = param_4;
  return param_1;
}



// FUNCTION 144b72840 FUN_144b72840 body=643 status=ok
// SIG undefined FUN_144b72840(void)

void FUN_144b72840(longlong *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte *pbVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_2d8 [32];
  longlong *local_2b8;
  undefined8 uStack_2b0;
  longlong *local_2a8;
  uint uStack_2a0;
  undefined4 uStack_29c;
  undefined1 local_288 [16];
  undefined1 local_278 [240];
  undefined1 local_188 [96];
  byte local_128 [255];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if (*param_2 == '\0') {
    FUN_144e47110();
    FUN_1470a639e(local_288,1);
    FUN_141302cc4(local_278,"Frame buffer slice name cannot be an empty string.");
    FUN_144e40dd0(local_188,local_288);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_188,(ThrowInfo *)&DAT_14c6d50e0);
  }
  strncpy((char *)local_128,param_2,0xff);
  local_29 = 0;
  plVar3 = (longlong *)*param_1;
  plVar11 = (longlong *)plVar3[1];
  uStack_2a0 = 0;
  cVar1 = *(char *)((longlong)plVar11 + 0x19);
  plVar10 = plVar3;
  local_2a8 = plVar11;
  while (plVar8 = plVar11, cVar1 == '\0') {
    pbVar9 = (byte *)(plVar8 + 4);
    lVar13 = -(longlong)pbVar9;
    do {
      bVar2 = *pbVar9;
      uVar12 = (uint)pbVar9[(longlong)(local_128 + lVar13)];
      if (bVar2 != uVar12) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar12 != 0);
    bVar14 = -1 < (int)(bVar2 - uVar12);
    if (bVar14) {
      plVar11 = (longlong *)*plVar8;
      plVar10 = plVar8;
    }
    else {
      plVar11 = (longlong *)plVar8[2];
    }
    uStack_2a0 = (uint)bVar14;
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
    local_2a8 = plVar8;
  }
  if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
    pbVar9 = local_128;
    lVar13 = 0x20 - (longlong)pbVar9;
    do {
      bVar2 = *pbVar9;
      uVar12 = (uint)pbVar9[(longlong)plVar10 + lVar13];
      if (bVar2 != uVar12) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar12 != 0);
    if (-1 < (int)(bVar2 - uVar12)) goto LAB_144b72a31;
  }
  if (param_1[1] == 0xbe82fa0be82fa0) {
                    /* WARNING: Subroutine does not return */
    FUN_1470a938d();
  }
  uStack_2b0 = 0;
  local_2b8 = param_1;
  plVar10 = (longlong *)FUN_14494321d(0x158);
  pbVar9 = local_128;
  lVar13 = 2;
  plVar11 = plVar10 + 4;
  do {
    lVar7 = *(longlong *)(pbVar9 + 8);
    *plVar11 = *(longlong *)pbVar9;
    plVar11[1] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x18);
    plVar11[2] = *(longlong *)(pbVar9 + 0x10);
    plVar11[3] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x28);
    plVar11[4] = *(longlong *)(pbVar9 + 0x20);
    plVar11[5] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x38);
    plVar11[6] = *(longlong *)(pbVar9 + 0x30);
    plVar11[7] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x48);
    plVar11[8] = *(longlong *)(pbVar9 + 0x40);
    plVar11[9] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x58);
    plVar11[10] = *(longlong *)(pbVar9 + 0x50);
    plVar11[0xb] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x68);
    plVar11[0xc] = *(longlong *)(pbVar9 + 0x60);
    plVar11[0xd] = lVar7;
    uVar4 = *(undefined4 *)(pbVar9 + 0x74);
    uVar5 = *(undefined4 *)(pbVar9 + 0x78);
    uVar6 = *(undefined4 *)(pbVar9 + 0x7c);
    *(undefined4 *)(plVar11 + 0xe) = *(undefined4 *)(pbVar9 + 0x70);
    *(undefined4 *)((longlong)plVar11 + 0x74) = uVar4;
    *(undefined4 *)(plVar11 + 0xf) = uVar5;
    *(undefined4 *)((longlong)plVar11 + 0x7c) = uVar6;
    pbVar9 = pbVar9 + 0x80;
    lVar13 = lVar13 + -1;
    plVar11 = plVar11 + 0x10;
  } while (lVar13 != 0);
  *(undefined4 *)(plVar10 + 0x24) = 1;
  plVar10[0x25] = 0;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  *(undefined4 *)(plVar10 + 0x28) = 1;
  *(undefined4 *)((longlong)plVar10 + 0x144) = 1;
  plVar10[0x29] = 0;
  *(undefined2 *)(plVar10 + 0x2a) = 0;
  *plVar10 = (longlong)plVar3;
  plVar10[1] = (longlong)plVar3;
  plVar10[2] = (longlong)plVar3;
  *(undefined2 *)(plVar10 + 3) = 0;
  local_2b8 = local_2a8;
  uStack_2b0 = CONCAT44(uStack_29c,uStack_2a0);
  plVar10 = (longlong *)FUN_144b730e0(param_1,&local_2b8);
LAB_144b72a31:
  lVar13 = param_3[1];
  plVar10[0x24] = *param_3;
  plVar10[0x25] = lVar13;
  lVar13 = param_3[3];
  plVar10[0x26] = param_3[2];
  plVar10[0x27] = lVar13;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar13 = param_3[5];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(int *)(plVar10 + 0x28) = (int)param_3[4];
  *(undefined4 *)((longlong)plVar10 + 0x144) = uVar4;
  *(int *)(plVar10 + 0x29) = (int)lVar13;
  *(undefined4 *)((longlong)plVar10 + 0x14c) = uVar5;
  plVar10[0x2a] = param_3[6];
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_2d8);
}



// FUNCTION 144b72ae0 FUN_144b72ae0 body=659 status=ok
// SIG undefined FUN_144b72ae0(void)

void FUN_144b72ae0(longlong *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte *pbVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_2d8 [32];
  longlong *local_2b8;
  undefined8 uStack_2b0;
  longlong *local_2a8;
  uint uStack_2a0;
  undefined4 uStack_29c;
  undefined1 local_288 [16];
  undefined1 local_278 [240];
  undefined1 local_188 [96];
  byte local_128 [255];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  if (*param_2 == '\0') {
    FUN_144e47110();
    FUN_1470a639e(local_288,1);
    FUN_141302cc4(local_278,"Frame buffer slice name cannot be an empty string.");
    FUN_144e40dd0(local_188,local_288);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_188,(ThrowInfo *)&DAT_14c6d50e0);
  }
  strncpy((char *)local_128,param_2,0xff);
  local_29 = 0;
  plVar3 = (longlong *)*param_1;
  plVar11 = (longlong *)plVar3[1];
  uStack_2a0 = 0;
  cVar1 = *(char *)((longlong)plVar11 + 0x19);
  plVar10 = plVar3;
  local_2a8 = plVar11;
  while (plVar8 = plVar11, cVar1 == '\0') {
    pbVar9 = (byte *)(plVar8 + 4);
    lVar13 = -(longlong)pbVar9;
    do {
      bVar2 = *pbVar9;
      uVar12 = (uint)pbVar9[(longlong)(local_128 + lVar13)];
      if (bVar2 != uVar12) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar12 != 0);
    bVar14 = -1 < (int)(bVar2 - uVar12);
    if (bVar14) {
      plVar11 = (longlong *)*plVar8;
      plVar10 = plVar8;
    }
    else {
      plVar11 = (longlong *)plVar8[2];
    }
    uStack_2a0 = (uint)bVar14;
    cVar1 = *(char *)((longlong)plVar11 + 0x19);
    local_2a8 = plVar8;
  }
  if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
    pbVar9 = local_128;
    lVar13 = 0x20 - (longlong)pbVar9;
    do {
      bVar2 = *pbVar9;
      uVar12 = (uint)pbVar9[(longlong)plVar10 + lVar13];
      if (bVar2 != uVar12) break;
      pbVar9 = pbVar9 + 1;
    } while (uVar12 != 0);
    if (-1 < (int)(bVar2 - uVar12)) goto LAB_144b72ce1;
  }
  if (param_1[1] == 0xbe82fa0be82fa0) {
                    /* WARNING: Subroutine does not return */
    FUN_1470a938d();
  }
  uStack_2b0 = 0;
  local_2b8 = param_1;
  plVar10 = (longlong *)FUN_14494321d(0x158);
  pbVar9 = local_128;
  lVar13 = 2;
  plVar11 = plVar10 + 4;
  do {
    lVar7 = *(longlong *)(pbVar9 + 8);
    *plVar11 = *(longlong *)pbVar9;
    plVar11[1] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x18);
    plVar11[2] = *(longlong *)(pbVar9 + 0x10);
    plVar11[3] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x28);
    plVar11[4] = *(longlong *)(pbVar9 + 0x20);
    plVar11[5] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x38);
    plVar11[6] = *(longlong *)(pbVar9 + 0x30);
    plVar11[7] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x48);
    plVar11[8] = *(longlong *)(pbVar9 + 0x40);
    plVar11[9] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x58);
    plVar11[10] = *(longlong *)(pbVar9 + 0x50);
    plVar11[0xb] = lVar7;
    lVar7 = *(longlong *)(pbVar9 + 0x68);
    plVar11[0xc] = *(longlong *)(pbVar9 + 0x60);
    plVar11[0xd] = lVar7;
    uVar4 = *(undefined4 *)(pbVar9 + 0x74);
    uVar5 = *(undefined4 *)(pbVar9 + 0x78);
    uVar6 = *(undefined4 *)(pbVar9 + 0x7c);
    *(undefined4 *)(plVar11 + 0xe) = *(undefined4 *)(pbVar9 + 0x70);
    *(undefined4 *)((longlong)plVar11 + 0x74) = uVar4;
    *(undefined4 *)(plVar11 + 0xf) = uVar5;
    *(undefined4 *)((longlong)plVar11 + 0x7c) = uVar6;
    pbVar9 = pbVar9 + 0x80;
    lVar13 = lVar13 + -1;
    plVar11 = plVar11 + 0x10;
  } while (lVar13 != 0);
  *(undefined4 *)(plVar10 + 0x24) = 1;
  plVar10[0x25] = 0;
  plVar10[0x26] = 0;
  plVar10[0x27] = 0;
  *(undefined4 *)(plVar10 + 0x28) = 1;
  *(undefined4 *)((longlong)plVar10 + 0x144) = 1;
  plVar10[0x29] = 0;
  *(undefined2 *)(plVar10 + 0x2a) = 0;
  *plVar10 = (longlong)plVar3;
  plVar10[1] = (longlong)plVar3;
  plVar10[2] = (longlong)plVar3;
  *(undefined2 *)(plVar10 + 3) = 0;
  local_2b8 = local_2a8;
  uStack_2b0 = CONCAT44(uStack_29c,uStack_2a0);
  plVar10 = (longlong *)FUN_144b730e0(param_1,&local_2b8);
LAB_144b72ce1:
  lVar13 = param_3[1];
  plVar10[0x24] = *param_3;
  plVar10[0x25] = lVar13;
  lVar13 = param_3[3];
  plVar10[0x26] = param_3[2];
  plVar10[0x27] = lVar13;
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar13 = param_3[5];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x2c);
  *(int *)(plVar10 + 0x28) = (int)param_3[4];
  *(undefined4 *)((longlong)plVar10 + 0x144) = uVar4;
  *(int *)(plVar10 + 0x29) = (int)lVar13;
  *(undefined4 *)((longlong)plVar10 + 0x14c) = uVar5;
  plVar10[0x2a] = param_3[6];
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_2d8);
}



// FUNCTION 144b72d90 FUN_144b72d90 body=249 status=ok
// SIG undefined FUN_144b72d90(void)

void FUN_144b72d90(longlong *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  strncpy((char *)local_118,param_2,0xff);
  puVar3 = (undefined8 *)*param_1;
  local_19 = 0;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar7 = puVar3;
  puVar6 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar8 = (byte *)(puVar6 + 4);
    lVar4 = -(longlong)pbVar8;
    do {
      bVar2 = *pbVar8;
      uVar9 = (uint)pbVar8[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar9) break;
      pbVar8 = pbVar8 + 1;
    } while (uVar9 != 0);
    if ((int)(bVar2 - uVar9) < 0) {
      puVar10 = (undefined8 *)puVar6[2];
      puVar6 = puVar7;
    }
    else {
      puVar10 = (undefined8 *)*puVar6;
    }
    puVar7 = puVar6;
    puVar6 = puVar10;
    cVar1 = *(char *)((longlong)puVar10 + 0x19);
  }
  if (*(char *)((longlong)puVar7 + 0x19) == '\0') {
    pbVar8 = local_118;
    lVar4 = 0x20 - (longlong)pbVar8;
    do {
      bVar2 = *pbVar8;
      uVar9 = (uint)pbVar8[(longlong)puVar7 + lVar4];
      if (bVar2 != uVar9) break;
      pbVar8 = pbVar8 + 1;
    } while (uVar9 != 0);
    if (-1 < (int)(bVar2 - uVar9)) {
      bVar5 = true;
      goto LAB_144b72e60;
    }
  }
  bVar5 = false;
LAB_144b72e60:
  if (!bVar5) {
    puVar7 = puVar3;
  }
  puVar6 = (undefined8 *)0x0;
  if (puVar7 != puVar3) {
    puVar6 = puVar7 + 0x24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_138,puVar6);
}



// FUNCTION 144b72ea0 FUN_144b72ea0 body=13 status=ok
// SIG undefined FUN_144b72ea0(void)

undefined8 * FUN_144b72ea0(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)*param_1;
  return param_2;
}



// FUNCTION 144b72eb0 FUN_144b72eb0 body=13 status=ok
// SIG undefined FUN_144b72eb0(void)

undefined8 * FUN_144b72eb0(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)*param_1;
  return param_2;
}



// FUNCTION 144b72ec0 FUN_144b72ec0 body=10 status=ok
// SIG undefined FUN_144b72ec0(void)

undefined8 * FUN_144b72ec0(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 144b72ed0 FUN_144b72ed0 body=10 status=ok
// SIG undefined FUN_144b72ed0(void)

undefined8 * FUN_144b72ed0(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 144b72ee0 FUN_144b72ee0 body=233 status=ok
// SIG undefined FUN_144b72ee0(void)

void FUN_144b72ee0(longlong *param_1,longlong *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  strncpy((char *)local_118,param_3,0xff);
  puVar3 = (undefined8 *)*param_1;
  local_19 = 0;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar10 = puVar3;
  puVar9 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar6 = (byte *)(puVar9 + 4);
    lVar4 = -(longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if ((int)(bVar2 - uVar7) < 0) {
      puVar8 = (undefined8 *)puVar9[2];
      puVar9 = puVar10;
    }
    else {
      puVar8 = (undefined8 *)*puVar9;
    }
    puVar10 = puVar9;
    puVar9 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (*(char *)((longlong)puVar10 + 0x19) == '\0') {
    pbVar6 = local_118;
    lVar4 = 0x20 - (longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[(longlong)puVar10 + lVar4];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar2 - uVar7)) {
      bVar5 = true;
      goto LAB_144b72fad;
    }
  }
  bVar5 = false;
LAB_144b72fad:
  if (!bVar5) {
    puVar10 = puVar3;
  }
  *param_2 = (longlong)puVar10;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_138);
}



// FUNCTION 144b72fe0 FUN_144b72fe0 body=233 status=ok
// SIG undefined FUN_144b72fe0(void)

void FUN_144b72fe0(longlong *param_1,longlong *param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  byte *pbVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  strncpy((char *)local_118,param_3,0xff);
  puVar3 = (undefined8 *)*param_1;
  local_19 = 0;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar10 = puVar3;
  puVar9 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar6 = (byte *)(puVar9 + 4);
    lVar4 = -(longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if ((int)(bVar2 - uVar7) < 0) {
      puVar8 = (undefined8 *)puVar9[2];
      puVar9 = puVar10;
    }
    else {
      puVar8 = (undefined8 *)*puVar9;
    }
    puVar10 = puVar9;
    puVar9 = puVar8;
    cVar1 = *(char *)((longlong)puVar8 + 0x19);
  }
  if (*(char *)((longlong)puVar10 + 0x19) == '\0') {
    pbVar6 = local_118;
    lVar4 = 0x20 - (longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar7 = (uint)pbVar6[(longlong)puVar10 + lVar4];
      if (bVar2 != uVar7) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar7 != 0);
    if (-1 < (int)(bVar2 - uVar7)) {
      bVar5 = true;
      goto LAB_144b730ad;
    }
  }
  bVar5 = false;
LAB_144b730ad:
  if (!bVar5) {
    puVar10 = puVar3;
  }
  *param_2 = (longlong)puVar10;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_138);
}



// FUNCTION 144b730e0 FUN_144b730e0 body=603 status=ok
// SIG undefined FUN_144b730e0(void)

longlong * FUN_144b730e0(longlong *param_1,longlong *param_2,longlong *param_3)

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
LAB_144b7331d:
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
        goto LAB_144b7331d;
      }
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(plVar6[1] + 8);
    }
    cVar1 = *(char *)(plVar6[1] + 0x18);
  } while( true );
}



// FUNCTION 144b73340 FUN_144b73340 body=418 status=ok
// SIG undefined FUN_144b73340(void)

void FUN_144b73340(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  if (plVar7 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    for (; plVar7 != plVar1; plVar7 = plVar7 + 3) {
      plVar6 = (longlong *)*plVar7;
      if (plVar6 != (longlong *)0x0) {
        plVar2 = (longlong *)plVar7[1];
        for (; plVar6 != plVar2; plVar6 = plVar6 + 3) {
          lVar3 = *plVar6;
          if (lVar3 != 0) {
            uVar5 = plVar6[2] - lVar3 & 0xfffffffffffffff8;
            lVar4 = lVar3;
            if (0xfff < uVar5) {
              lVar4 = *(longlong *)(lVar3 + -8);
              uVar5 = uVar5 + 0x27;
              if (0x1f < (lVar3 - lVar4) - 8U) goto LAB_144b734dc;
            }
            thunk_FUN_1400020a8(lVar4,uVar5);
            *plVar6 = 0;
            plVar6[1] = 0;
            plVar6[2] = 0;
          }
        }
        lVar3 = *plVar7;
        uVar5 = ((plVar7[2] - lVar3) / 0x18) * 0x18;
        lVar4 = lVar3;
        if (0xfff < uVar5) {
          lVar4 = *(longlong *)(lVar3 + -8);
          uVar5 = uVar5 + 0x27;
          if (0x1f < (lVar3 - lVar4) - 8U) goto LAB_144b734dc;
        }
        thunk_FUN_1400020a8(lVar4,uVar5);
        *plVar7 = 0;
        plVar7[1] = 0;
        plVar7[2] = 0;
      }
    }
    lVar3 = *param_1;
    uVar5 = ((param_1[2] - lVar3) / 0x18) * 0x18;
    lVar4 = lVar3;
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(lVar3 + -8);
      uVar5 = uVar5 + 0x27;
      if (0x1f < (lVar3 - lVar4) - 8U) {
LAB_144b734dc:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1400020a8(lVar4,uVar5);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 144b73500 FUN_144b73500 body=91 status=ok
// SIG undefined FUN_144b73500(void)

void FUN_144b73500(longlong *param_1)

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



// FUNCTION 144b73560 FUN_144b73560 body=55 status=ok
// SIG undefined FUN_144b73560(void)

void FUN_144b73560(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  uVar1 = FUN_144e48e00(local_38);
  FUN_144b674a0(param_1,"chromaticities",uVar1);
  FUN_144e48e60(local_38);
  return;
}



// FUNCTION 144b735a0 FUN_144b735a0 body=251 status=ok
// SIG undefined FUN_144b735a0(void)

void FUN_144b735a0(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  strncpy((char *)local_118,"chromaticities",0xff);
  puVar3 = (undefined8 *)*param_1;
  local_19 = 0;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar5 = puVar3;
  puVar7 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar6 = (byte *)(puVar7 + 4);
    lVar4 = -(longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar8 = (uint)pbVar6[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar8) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar8 != 0);
    if ((int)(bVar2 - uVar8) < 0) {
      puVar9 = (undefined8 *)puVar7[2];
      puVar7 = puVar5;
    }
    else {
      puVar9 = (undefined8 *)*puVar7;
    }
    puVar5 = puVar7;
    puVar7 = puVar9;
    cVar1 = *(char *)((longlong)puVar9 + 0x19);
  }
  if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
    pbVar6 = local_118;
    lVar4 = 0x20 - (longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar8 = (uint)pbVar6[(longlong)puVar5 + lVar4];
      if (bVar2 != uVar8) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar8 != 0);
    if ((-1 < (int)(bVar2 - uVar8)) && (puVar5 != puVar3)) {
      local_128 = 0;
      __RTDynamicCast(puVar5[0x24],0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                      &Imf_3_2::TypedAttribute<Imf_3_2::Chromaticities>::RTTI_Type_Descriptor);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_148);
}



// FUNCTION 144b736b0 FUN_144b736b0 body=132 status=ok
// SIG undefined FUN_144b736b0(void)

void FUN_144b736b0(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = FUN_144b67950(param_1,"chromaticities");
  local_88 = 0;
  lVar2 = __RTDynamicCast(uVar1,0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                          &Imf_3_2::TypedAttribute<Imf_3_2::Chromaticities>::RTTI_Type_Descriptor);
  if (lVar2 != 0) {
    FUN_144e48e70(lVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  FUN_144e416a0(local_78,"Unexpected attribute type.");
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_78,(ThrowInfo *)&DAT_14c6d5050);
}



// FUNCTION 144b73740 FUN_144b73740 body=247 status=ok
// SIG undefined FUN_144b73740(void)

void FUN_144b73740(longlong *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  strncpy((char *)local_118,param_2,0xff);
  puVar3 = (undefined8 *)*param_1;
  local_19 = 0;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar5 = puVar3;
  puVar7 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar6 = (byte *)(puVar7 + 4);
    lVar4 = -(longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar8 = (uint)pbVar6[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar8) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar8 != 0);
    if ((int)(bVar2 - uVar8) < 0) {
      puVar9 = (undefined8 *)puVar7[2];
      puVar7 = puVar5;
    }
    else {
      puVar9 = (undefined8 *)*puVar7;
    }
    puVar5 = puVar7;
    puVar7 = puVar9;
    cVar1 = *(char *)((longlong)puVar9 + 0x19);
  }
  if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
    pbVar6 = local_118;
    lVar4 = 0x20 - (longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar8 = (uint)pbVar6[(longlong)puVar5 + lVar4];
      if (bVar2 != uVar8) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar8 != 0);
    if ((-1 < (int)(bVar2 - uVar8)) && (puVar5 != puVar3)) {
      local_128 = 0;
      __RTDynamicCast(puVar5[0x24],0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                      &Imf_3_2::TypedAttribute<Imf_3_2::TimeCode>::RTTI_Type_Descriptor);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_148);
}



// FUNCTION 144b73840 FUN_144b73840 body=247 status=ok
// SIG undefined FUN_144b73840(void)

void FUN_144b73840(longlong *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  byte local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_148;
  strncpy((char *)local_118,param_2,0xff);
  puVar3 = (undefined8 *)*param_1;
  local_19 = 0;
  cVar1 = *(char *)((longlong)puVar3[1] + 0x19);
  puVar5 = puVar3;
  puVar7 = (undefined8 *)puVar3[1];
  while (cVar1 == '\0') {
    pbVar6 = (byte *)(puVar7 + 4);
    lVar4 = -(longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar8 = (uint)pbVar6[(longlong)(local_118 + lVar4)];
      if (bVar2 != uVar8) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar8 != 0);
    if ((int)(bVar2 - uVar8) < 0) {
      puVar9 = (undefined8 *)puVar7[2];
      puVar7 = puVar5;
    }
    else {
      puVar9 = (undefined8 *)*puVar7;
    }
    puVar5 = puVar7;
    puVar7 = puVar9;
    cVar1 = *(char *)((longlong)puVar9 + 0x19);
  }
  if (*(char *)((longlong)puVar5 + 0x19) == '\0') {
    pbVar6 = local_118;
    lVar4 = 0x20 - (longlong)pbVar6;
    do {
      bVar2 = *pbVar6;
      uVar8 = (uint)pbVar6[(longlong)puVar5 + lVar4];
      if (bVar2 != uVar8) break;
      pbVar6 = pbVar6 + 1;
    } while (uVar8 != 0);
    if ((-1 < (int)(bVar2 - uVar8)) && (puVar5 != puVar3)) {
      local_128 = 0;
      __RTDynamicCast(puVar5[0x24],0,&Imf_3_2::Attribute::RTTI_Type_Descriptor,
                      &Imf_3_2::TypedAttribute<Imf_3_2::Chromaticities>::RTTI_Type_Descriptor);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_148);
}



// FUNCTION 144b73940 FUN_144b73940 body=21 status=ok
// SIG undefined FUN_144b73940(void)

void FUN_144b73940(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144e7f5c0();
  FUN_144e7f370(uVar1);
  return;
}



// FUNCTION 144b73960 FUN_144b73960 body=28 status=ok
// SIG undefined FUN_144b73960(void)

void FUN_144b73960(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144e7f5c0();
  FUN_144e7f400(uVar1,param_1);
  return;
}



// FUNCTION 144b73980 FUN_144b73980 body=555 status=ok
// SIG undefined FUN_144b73980(void)

undefined4 FUN_144b73980(undefined8 *param_1)

{
  char *pcVar1;
  BOOL BVar2;
  DWORD dwMessageId;
  int iVar3;
  undefined4 uVar4;
  LPCWSTR pWVar5;
  LPCWSTR lpReplacedFileName;
  HLOCAL hMem;
  longlong lVar6;
  bool bVar7;
  LPCSTR local_res8;
  
  uVar4 = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 2;
  }
  pcVar1 = (char *)*param_1;
  if (pcVar1 != (char *)0x0) {
    bVar7 = (*pcVar1 - 1U & 0xfd) == 0;
    if (*pcVar1 != '\0') {
      if (bVar7) {
        if (*(code **)(pcVar1 + 0x90) == FUN_144b74150) {
          lVar6 = *(longlong *)(pcVar1 + 0x20);
          if (lVar6 == 0) {
            lVar6 = *(longlong *)(pcVar1 + 0x10);
          }
          pWVar5 = (LPCWSTR)FUN_144b740a0(pcVar1,lVar6);
          if (pWVar5 != (LPCWSTR)0x0) {
            DeleteFileW(pWVar5);
            (**(code **)(pcVar1 + 0x60))(pWVar5);
          }
        }
      }
      else if (*(longlong *)(pcVar1 + 0x20) != 0) {
        pWVar5 = (LPCWSTR)FUN_144b740a0(pcVar1);
        lpReplacedFileName = (LPCWSTR)FUN_144b740a0(pcVar1,*(undefined8 *)(pcVar1 + 0x10));
        BVar2 = 0;
        if ((lpReplacedFileName != (LPCWSTR)0x0) && (pWVar5 != (LPCWSTR)0x0)) {
          BVar2 = ReplaceFileW(lpReplacedFileName,pWVar5,(LPCWSTR)0x0,0,(LPVOID)0x0,(LPVOID)0x0);
        }
        (**(code **)(pcVar1 + 0x60))(lpReplacedFileName);
        (**(code **)(pcVar1 + 0x60))(pWVar5);
        if (BVar2 == 0) {
          dwMessageId = GetLastError();
          FormatMessageA(0x1300,(LPCVOID)0x0,dwMessageId,0x400,(LPSTR)&local_res8,0,(va_list *)0x0);
          iVar3 = lstrlenA(local_res8);
          hMem = LocalAlloc(0x40,(longlong)iVar3 + 0x48);
          iVar3 = FUN_144b73fe0(hMem,(longlong)iVar3 + 0x48,"%s: (%lld) %s",
                                "Unable to rename temporary file to final destination",dwMessageId,
                                local_res8);
          if (iVar3 < 0) {
            uVar4 = (**(code **)(pcVar1 + 0x48))(pcVar1,1,"Unable to format message print");
          }
          else {
            uVar4 = 5;
            (**(code **)(pcVar1 + 0x48))(pcVar1,5,&DAT_149972340,hMem);
            LocalFree(local_res8);
            LocalFree(hMem);
          }
        }
      }
    }
    if (*(code **)(pcVar1 + 0x90) != (code *)0x0) {
      (**(code **)(pcVar1 + 0x90))(*param_1,*(undefined8 *)(pcVar1 + 0x88),bVar7);
    }
    FUN_144e85f10(pcVar1);
  }
  *param_1 = 0;
  return uVar4;
}



// FUNCTION 144b73bb0 FUN_144b73bb0 body=940 status=ok
// SIG undefined FUN_144b73bb0(void)

void FUN_144b73bb0(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  BOOL BVar3;
  DWORD dwMessageId;
  undefined8 *puVar4;
  undefined8 uVar5;
  LPCWSTR pWVar6;
  LPCWSTR lpReplacedFileName;
  HLOCAL hMem;
  longlong lVar7;
  bool bVar8;
  undefined1 auStackY_178 [32];
  char *local_138;
  LPCSTR local_130;
  undefined8 *local_128;
  undefined1 local_120 [104];
  undefined8 local_b8;
  code *pcStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  code *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_178;
  local_138 = (char *)0x0;
  local_128 = param_1;
  puVar4 = (undefined8 *)FUN_144b74700(local_120,param_3);
  local_b8 = *puVar4;
  pcStack_b0 = (code *)puVar4[1];
  local_a8 = puVar4[2];
  uStack_a0 = puVar4[3];
  local_98 = puVar4[4];
  lStack_90 = puVar4[5];
  local_88 = (code *)puVar4[6];
  uStack_80 = puVar4[7];
  local_78 = puVar4[8];
  uStack_70 = puVar4[9];
  local_68 = *(undefined4 *)(puVar4 + 10);
  uStack_64 = *(undefined4 *)((longlong)puVar4 + 0x54);
  uStack_60 = *(undefined4 *)(puVar4 + 0xb);
  uStack_5c = *(undefined4 *)((longlong)puVar4 + 0x5c);
  local_58 = puVar4[0xc];
  if (param_1 == (undefined8 *)0x0) {
    if ((local_58 & 2) == 0) {
      (*pcStack_b0)(0,3,"Invalid context handle passed to start_read function");
    }
    goto LAB_144b73f4e;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    if ((local_58 & 2) == 0) {
      (*pcStack_b0)(0,3,"Invalid filename passed to start_read function");
    }
  }
  else {
    iVar2 = FUN_144e85a80(&local_138,&local_b8,0,8);
    if (iVar2 == 0) {
      *(code **)(local_138 + 0x28) = FUN_144b74610;
      iVar2 = FUN_144e83dd0(local_138,local_138 + 8,param_2);
      if (iVar2 == 0) {
        if (lStack_90 == 0) {
          local_88 = FUN_144b745d0;
          iVar2 = FUN_144b74390(local_138);
          if (iVar2 != 0) goto LAB_144b73d0e;
        }
        pcVar1 = local_138;
        if (local_88 == (code *)0x0) {
          uVar5 = 0xffffffffffffffff;
        }
        else {
          uVar5 = (*local_88)(local_138,*(undefined8 *)(local_138 + 0x88));
        }
        *(undefined8 *)(pcVar1 + 0x98) = uVar5;
        iVar2 = FUN_144e86380(local_138);
        if (iVar2 == 0) goto LAB_144b73f3e;
      }
LAB_144b73d0e:
      pcVar1 = local_138;
      if (local_138 != (char *)0x0) {
        bVar8 = (*local_138 - 1U & 0xfd) == 0;
        if (*local_138 != '\0') {
          if (bVar8) {
            if (*(code **)(local_138 + 0x90) == FUN_144b74150) {
              lVar7 = *(longlong *)(local_138 + 0x20);
              if (lVar7 == 0) {
                lVar7 = *(longlong *)(local_138 + 0x10);
              }
              pWVar6 = (LPCWSTR)FUN_144b740a0(local_138,lVar7);
              if (pWVar6 != (LPCWSTR)0x0) {
                DeleteFileW(pWVar6);
                (**(code **)(pcVar1 + 0x60))(pWVar6);
              }
            }
          }
          else if (*(longlong *)(local_138 + 0x20) != 0) {
            pWVar6 = (LPCWSTR)FUN_144b740a0(local_138);
            lpReplacedFileName = (LPCWSTR)FUN_144b740a0(pcVar1,*(undefined8 *)(pcVar1 + 0x10));
            BVar3 = 0;
            if ((lpReplacedFileName != (LPCWSTR)0x0) && (pWVar6 != (LPCWSTR)0x0)) {
              BVar3 = ReplaceFileW(lpReplacedFileName,pWVar6,(LPCWSTR)0x0,0,(LPVOID)0x0,(LPVOID)0x0)
              ;
            }
            (**(code **)(pcVar1 + 0x60))(lpReplacedFileName);
            (**(code **)(pcVar1 + 0x60))(pWVar6);
            if (BVar3 == 0) {
              dwMessageId = GetLastError();
              FormatMessageA(0x1300,(LPCVOID)0x0,dwMessageId,0x400,(LPSTR)&local_130,0,
                             (va_list *)0x0);
              iVar2 = lstrlenA(local_130);
              hMem = LocalAlloc(0x40,(longlong)iVar2 + 0x48);
              iVar2 = FUN_144b73fe0(hMem,(longlong)iVar2 + 0x48,"%s: (%lld) %s",
                                    "Unable to rename temporary file to final destination");
              if (iVar2 < 0) {
                (**(code **)(pcVar1 + 0x48))(pcVar1,1,"Unable to format message print");
              }
              else {
                (**(code **)(pcVar1 + 0x48))(pcVar1,5,&DAT_149972340,hMem);
                LocalFree(local_130);
                LocalFree(hMem);
              }
            }
          }
        }
        if (*(code **)(pcVar1 + 0x90) != (code *)0x0) {
          (**(code **)(pcVar1 + 0x90))(local_138,*(undefined8 *)(pcVar1 + 0x88),bVar8);
        }
        FUN_144e85f10(pcVar1);
        param_1 = local_128;
      }
      local_138 = (char *)0x0;
    }
  }
LAB_144b73f3e:
  *param_1 = local_138;
LAB_144b73f4e:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStackY_178);
}



// FUNCTION 144b73f70 _snwprintf_s body=98 status=ok
// SIG int _snwprintf_s(wchar_t * _DstBuf, size_t _SizeInWords, size_t _MaxCount, wchar_t * _Format, ...)

/* Library Function - Single Match
    _snwprintf_s
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl _snwprintf_s(wchar_t *_DstBuf,size_t _SizeInWords,size_t _MaxCount,wchar_t *_Format,...)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144737586();
  iVar1 = __stdio_common_vsnprintf_s
                    (*puVar2,_DstBuf,_SizeInWords,_MaxCount,_Format,0,&stack0x00000028);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 144b73fe0 FUN_144b73fe0 body=183 status=ok
// SIG undefined FUN_144b73fe0(void)

undefined8 FUN_144b73fe0(undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined8 local_res20;
  
  if (param_2 - 1U < 0x7fffffff) {
    uVar1 = param_2 - 1;
    uVar3 = 0;
    local_res20 = param_4;
    puVar4 = (ulonglong *)FUN_144737586();
    iVar2 = __stdio_common_vsprintf(*puVar4 | 1,param_1,uVar1,param_3,0,&local_res20);
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    if ((iVar2 < 0) || (uVar1 < (ulonglong)(longlong)iVar2)) {
      param_1[uVar1] = 0;
      uVar3 = 0x8007007a;
    }
    else if ((longlong)iVar2 == uVar1) {
      param_1[uVar1] = 0;
    }
  }
  else {
    uVar3 = 0x80070057;
    if (param_2 != 0) {
      *param_1 = 0;
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 144b740a0 FUN_144b740a0 body=161 status=ok
// SIG undefined FUN_144b740a0(void)

LPWSTR FUN_144b740a0(longlong param_1,LPCSTR param_2)

{
  int cchWideChar;
  LPWSTR lpWideCharStr;
  longlong lVar1;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (param_2[lVar1] != '\0');
  cchWideChar = MultiByteToWideChar(0xfde9,0,param_2,(int)lVar1,(LPWSTR)0x0,0);
  lpWideCharStr = (LPWSTR)(**(code **)(param_1 + 0x58))((longlong)cchWideChar * 2 + 2);
  if (lpWideCharStr != (LPWSTR)0x0) {
    MultiByteToWideChar(0xfde9,0,param_2,(int)lVar1,lpWideCharStr,cchWideChar);
    lpWideCharStr[cchWideChar] = L'\0';
  }
  return lpWideCharStr;
}



// FUNCTION 144b74150 FUN_144b74150 body=41 status=ok
// SIG undefined FUN_144b74150(void)

void FUN_144b74150(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    if ((HANDLE)*param_2 != (HANDLE)0xffffffffffffffff) {
      CloseHandle((HANDLE)*param_2);
    }
    *param_2 = 0xffffffffffffffff;
  }
  return;
}



// FUNCTION 144b74180 FUN_144b74180 body=524 status=ok
// SIG undefined FUN_144b74180(void)

ulonglong FUN_144b74180(longlong param_1,undefined8 *param_2,LPVOID param_3,ulonglong param_4,
                       undefined8 param_5,code *param_6)

{
  BOOL BVar1;
  DWORD dwMessageId;
  int iVar2;
  HLOCAL hMem;
  ulonglong uVar3;
  DWORD local_res10 [2];
  LPCSTR local_48;
  _OVERLAPPED local_40;
  
  local_res10[0] = 0;
  local_40.Internal = 0;
  local_40.InternalHigh = 0;
  uVar3 = 0xffffffffffffffff;
  local_40.hEvent = (HANDLE)0x0;
  if (param_2 == (undefined8 *)0x0) {
    if (param_6 != (code *)0x0) {
      (*param_6)(param_1,3,"Invalid file handle pointer");
      return 0xffffffffffffffff;
    }
  }
  else if ((HANDLE)*param_2 == (HANDLE)0xffffffffffffffff) {
    if (param_6 != (code *)0x0) {
      (*param_6)(param_1,3,"Invalid file descriptor");
      return 0xffffffffffffffff;
    }
  }
  else if (param_4 < 0x80000000) {
    local_40.u.s.Offset = (DWORD)param_5;
    local_40.u.s.OffsetHigh = (DWORD)((ulonglong)param_5 >> 0x20);
    BVar1 = ReadFile((HANDLE)*param_2,param_3,(DWORD)param_4,local_res10,&local_40);
    if (BVar1 == 0) {
      dwMessageId = GetLastError();
      if (dwMessageId == 0x26) {
        uVar3 = (ulonglong)local_res10[0];
      }
      else {
        FormatMessageA(0x1300,(LPCVOID)0x0,dwMessageId,0x400,(LPSTR)&local_48,0,(va_list *)0x0);
        iVar2 = lstrlenA(local_48);
        hMem = LocalAlloc(0x40,(longlong)iVar2 + 0x31);
        iVar2 = FUN_144b73fe0(hMem,(longlong)iVar2 + 0x31,"%s: (%lld) %s",
                              "Unable to read requested data",dwMessageId,local_48);
        if (iVar2 < 0) {
          (**(code **)(param_1 + 0x48))(param_1,1,"Unable to format message print");
        }
        else {
          if (param_6 == (code *)0x0) {
            (**(code **)(param_1 + 0x48))(param_1,10,&DAT_149972340,hMem);
          }
          else {
            (*param_6)();
          }
          LocalFree(local_48);
          LocalFree(hMem);
        }
      }
    }
    else {
      uVar3 = (ulonglong)local_res10[0];
    }
  }
  else if (param_6 != (code *)0x0) {
    (*param_6)(param_1,3,"Read request too large for win32 api");
    return 0xffffffffffffffff;
  }
  return uVar3;
}



// FUNCTION 144b74390 FUN_144b74390 body=572 status=ok
// SIG undefined FUN_144b74390(void)

ulonglong FUN_144b74390(longlong param_1)

{
  longlong *plVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  HLOCAL pvVar7;
  ulonglong uVar8;
  LPCSTR local_res8;
  
  plVar1 = *(longlong **)(param_1 + 0x88);
  *plVar1 = -1;
  *(code **)(param_1 + 0x90) = FUN_144b74150;
  *(code **)(param_1 + 0xa0) = FUN_144b74180;
  lVar5 = FUN_144b740a0(param_1,*(undefined8 *)(param_1 + 0x10));
  if (lVar5 == 0) {
    DVar2 = GetLastError();
    FormatMessageA(0x1300,(LPCVOID)0x0,DVar2,0x400,(LPSTR)&local_res8,0,(va_list *)0x0);
    iVar3 = lstrlenA(local_res8);
    pvVar7 = LocalAlloc(0x40,(longlong)iVar3 + 0x37);
    iVar3 = FUN_144b73fe0(pvVar7,(longlong)iVar3 + 0x37,"%s: (%lld) %s",
                          "Unable to allocate unicode filename",DVar2,local_res8);
    if (iVar3 < 0) {
      uVar4 = (**(code **)(param_1 + 0x48))(param_1,1,"Unable to format message print");
      uVar8 = (ulonglong)uVar4;
    }
    else {
      uVar8 = 1;
      (**(code **)(param_1 + 0x48))(param_1,1,&DAT_149972340,pvVar7);
      LocalFree(local_res8);
      LocalFree(pvVar7);
    }
  }
  else {
    lVar6 = CreateFile2(lVar5,0x80000000,1,3,0);
    (**(code **)(param_1 + 0x60))(lVar5);
    if (lVar6 == -1) {
      DVar2 = GetLastError();
      FormatMessageA(0x1300,(LPCVOID)0x0,DVar2,0x400,(LPSTR)&local_res8,0,(va_list *)0x0);
      iVar3 = lstrlenA(local_res8);
      pvVar7 = LocalAlloc(0x40,(longlong)iVar3 + 0x30);
      iVar3 = FUN_144b73fe0(pvVar7,(longlong)iVar3 + 0x30,"%s: (%lld) %s",
                            "Unable to open file for read",DVar2,local_res8);
      if (iVar3 < 0) {
        uVar8 = (**(code **)(param_1 + 0x48))(param_1,1,"Unable to format message print");
      }
      else {
        (**(code **)(param_1 + 0x48))(param_1,5,&DAT_149972340,pvVar7);
        LocalFree(local_res8);
        LocalFree(pvVar7);
        uVar8 = 5;
      }
    }
    else {
      *plVar1 = lVar6;
      uVar8 = 0;
    }
  }
  return uVar8;
}



// FUNCTION 144b745d0 FUN_144b745d0 body=58 status=ok
// SIG undefined FUN_144b745d0(void)

LARGE_INTEGER FUN_144b745d0(undefined8 param_1,undefined8 *param_2)

{
  BOOL BVar1;
  LARGE_INTEGER LVar2;
  LARGE_INTEGER local_res10 [3];
  
  LVar2.QuadPart = -1;
  if ((HANDLE)*param_2 != (HANDLE)0xffffffffffffffff) {
    local_res10[0].QuadPart = 0;
    BVar1 = GetFileSizeEx((HANDLE)*param_2,local_res10);
    if (BVar1 != 0) {
      LVar2 = local_res10[0];
    }
  }
  return (LARGE_INTEGER)LVar2.s;
}



// FUNCTION 144b74610 FUN_144b74610 body=237 status=ok
// SIG undefined FUN_144b74610(void)

undefined8
FUN_144b74610(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4,
             longlong *param_5,int param_6)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_5 != (longlong *)0x0) {
    *param_5 = -1;
  }
  if (param_1 == 0) {
    return 2;
  }
  if (param_4 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144b7466c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x40))(param_1,3,"read requested with no output offset pointer");
    return uVar1;
  }
  if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
    lVar2 = (**(code **)(param_1 + 0xa0))
                      (param_1,*(undefined8 *)(param_1 + 0x88),param_2,param_3,*param_4,
                       *(undefined8 *)(param_1 + 0x48));
    if (param_5 != (longlong *)0x0) {
      *param_5 = lVar2;
    }
    if (0 < lVar2) {
      *param_4 = *param_4 + lVar2;
    }
    if ((lVar2 != param_3) && ((param_6 != 1 || (lVar2 < 0)))) {
      return 10;
    }
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144b746f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 0x38))(param_1,7);
  return uVar1;
}



// FUNCTION 144b74700 FUN_144b74700 body=213 status=ok
// SIG undefined FUN_144b74700(void)

undefined8 * FUN_144b74700(undefined8 *param_1,ulonglong *param_2)

{
  *param_1 = 0x68;
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
  *(undefined4 *)(param_1 + 0xb) = 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xbf800000;
  param_1[0xc] = 0;
  if (param_2 != (ulonglong *)0x0) {
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    *(int *)(param_1 + 9) = (int)param_2[9];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    *(int *)(param_1 + 10) = (int)param_2[10];
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    if (0x5f < *param_2) {
      *(int *)(param_1 + 0xb) = (int)param_2[0xb];
      *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    }
    if (0x67 < *param_2) {
      *(int *)(param_1 + 0xc) = (int)param_2[0xc];
    }
  }
  FUN_144e85830();
  return param_1;
}



// FUNCTION 144b747e0 FUN_144b747e0 body=243 status=ok
// SIG undefined FUN_144b747e0(void)

ulonglong FUN_144b747e0(char *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 local_res8;
  
  if (param_1 != (char *)0x0) {
    if (*param_1 == '\x01') {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
    }
    if ((param_2 < 0) || (*(int *)(param_1 + 0xc4) <= param_2)) {
      if (*param_1 == '\x01') {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
      }
      uVar2 = (**(code **)(param_1 + 0x48))(param_1,4,"Part index (%d) out of range",param_2);
    }
    else if (param_4 == (undefined8 *)0x0) {
      if (*param_1 == '\x01') {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
      }
      uVar2 = (**(code **)(param_1 + 0x38))(param_1,3);
    }
    else {
      uVar1 = FUN_144e840f0(param_1,*(longlong *)
                                     (*(longlong *)(param_1 + 0x1d8) + (longlong)param_2 * 8) + 8,
                            param_3,&local_res8);
      uVar2 = (ulonglong)uVar1;
      if (uVar1 == 0) {
        *param_4 = local_res8;
      }
      if (*param_1 == '\x01') {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f8));
      }
    }
    return uVar2;
  }
  return 2;
}



// FUNCTION 144b748e0 FUN_144b748e0 body=356 status=ok
// SIG undefined FUN_144b748e0(void)

undefined8 FUN_144b748e0(uint param_1)

{
  void *_Dst;
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 < 3) {
    _Dst = malloc(0x740);
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,0x740);
      _snwprintf_s((wchar_t *)((longlong)_Dst + 0x614),200,0xffffffffffffffff,(wchar_t *)"No error")
      ;
      *(undefined1 **)((longlong)_Dst + 0x720) = &DAT_100000001;
      *(undefined8 *)((longlong)_Dst + 0x6e0) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)_Dst + 0x6e8) = 0xffffffffffffffff;
      *(undefined4 *)((longlong)_Dst + 0x6f0) = 8;
      *(undefined4 *)((longlong)_Dst + 0x6f4) = 0xffffffff;
      *(undefined4 *)((longlong)_Dst + 0x704) = 1;
      *(undefined4 *)((longlong)_Dst + 0x714) = 1;
      *(undefined4 *)((longlong)_Dst + 0x718) = 1;
      if (param_1 == 0) {
        uVar3 = FUN_144b764e0(_Dst);
        return uVar3;
      }
      if (param_1 != 1) {
        if (param_1 != 2) {
          return 0;
        }
        lVar2 = FUN_144b764e0(_Dst);
        if (lVar2 == 0) {
          return 0;
        }
      }
      uVar3 = FUN_144b765e0(_Dst);
      return uVar3;
    }
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pcVar1 = "Memory allocation failure";
  }
  else {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pcVar1 = "Invalid argument";
  }
  _snwprintf_s((wchar_t *)(lVar2 + 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): %s",&DAT_1499728d0
               ,pcVar1);
  return 0;
}



// FUNCTION 144b74a50 FUN_144b74a50 body=850 status=ok
// SIG undefined FUN_144b74a50(void)

undefined4
FUN_144b74a50(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5,uint param_6,
             longlong param_7,undefined8 *param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong *_Memory;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  char cVar11;
  char *pcVar12;
  int local_res20;
  undefined1 auStack_88 [32];
  char *local_68;
  char *local_60;
  char local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  
  local_54 = 0;
  local_58 = '\x01';
  local_50 = (longlong *)0x0;
  local_40 = param_1;
  if (param_1 == 0) {
    local_68 = "tj3Compress8";
    _snwprintf_s((wchar_t *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): Invalid handle");
    return 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x608) = 0;
  *(undefined1 *)(param_1 + 0x6dc) = 0;
  local_48 = param_1;
  if ((*(byte *)(param_1 + 0x610) & 1) == 0) {
    pcVar12 = "Instance has not been initialized for compression";
LAB_144b74cee:
    _Memory = local_50;
    local_68 = "tj3Compress8";
    local_60 = pcVar12;
    _snwprintf_s((wchar_t *)(param_1 + 0x614),200,0xffffffffffffffff,(wchar_t *)"%s(): %s");
    local_68 = "tj3Compress8";
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined1 *)(param_1 + 0x6dc) = 1;
    local_60 = pcVar12;
    _snwprintf_s((wchar_t *)(lVar7 + 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): %s");
    lVar7 = param_1;
    cVar11 = '\x01';
  }
  else {
    if ((((param_2 == 0) || (param_3 < 1)) || (param_4 < 0)) ||
       ((((int)param_5 < 1 || (0xb < param_6)) || ((param_7 == 0 || (param_8 == (undefined8 *)0x0)))
        ))) {
      pcVar12 = "Invalid argument";
      goto LAB_144b74cee;
    }
    if (*(char *)(param_1 + 0x701) == '\0') {
      if (*(int *)(param_1 + 0x6e0) == -1) {
        pcVar12 = "TJPARAM_QUALITY must be specified";
      }
      else {
        if (*(int *)(param_1 + 0x6e4) != -1) goto LAB_144b74b88;
        pcVar12 = "TJPARAM_SUBSAMP must be specified";
      }
      goto LAB_144b74cee;
    }
LAB_144b74b88:
    local_res20 = param_4;
    if (param_4 == 0) {
      local_res20 = param_3 * *(int *)(&DAT_149972a08 + (longlong)(int)param_6 * 4);
    }
    local_50 = malloc((longlong)(int)param_5 << 3);
    if (local_50 == (longlong *)0x0) {
      pcVar12 = "Memory allocation failure";
      goto LAB_144b74cee;
    }
    iVar1 = __intrinsic_setjmp(param_1 + 0x500,auStack_88);
    lVar7 = local_40;
    param_1 = local_48;
    _Memory = local_50;
    cVar11 = local_58;
    if (iVar1 == 0) {
      uVar10 = (ulonglong)param_5;
      *(int *)(local_48 + 0x30) = param_3;
      *(uint *)(local_48 + 0x34) = param_5;
      *(undefined4 *)(local_48 + 0x48) = 8;
      FUN_144b767a0(local_40,param_6);
      cVar11 = local_58;
      if (*(char *)(lVar7 + 0x6de) != '\0') {
        local_58 = '\0';
        uVar3 = FUN_144b74db0(param_3,param_5,*(undefined4 *)(lVar7 + 0x6e4));
        *param_8 = uVar3;
        cVar11 = '\0';
      }
      FUN_144e92a20(param_1,param_7,param_8,cVar11);
      FUN_144e8d370(param_1,1);
      _Memory = local_50;
      if (0 < (int)param_5) {
        lVar9 = (longlong)local_res20;
        lVar6 = (int)(param_5 - 1) * lVar9 + param_2;
        plVar8 = local_50;
        do {
          lVar4 = lVar6;
          if (*(char *)(lVar7 + 0x6dd) == '\0') {
            lVar4 = param_2;
          }
          lVar6 = lVar6 - lVar9;
          param_2 = param_2 + lVar9;
          *plVar8 = lVar4;
          uVar10 = uVar10 - 1;
          plVar8 = plVar8 + 1;
        } while (uVar10 != 0);
      }
      uVar5 = *(uint *)(param_1 + 0x34);
      if (*(uint *)(param_1 + 0x120) < uVar5) {
        do {
          FUN_144e8d400(param_1,_Memory + *(uint *)(param_1 + 0x120),
                        uVar5 - *(uint *)(param_1 + 0x120));
          uVar5 = *(uint *)(param_1 + 0x34);
        } while (*(uint *)(param_1 + 0x120) < uVar5);
      }
      FUN_144e8b500(param_1);
      goto LAB_144b74d57;
    }
  }
  local_54 = 0xffffffff;
LAB_144b74d57:
  uVar2 = local_54;
  if (100 < *(int *)(param_1 + 0x24)) {
    if (cVar11 != '\0') {
      (**(code **)(*(longlong *)(param_1 + 0x28) + 0x20))(param_1);
    }
    thunk_FUN_144e8d2e0(param_1);
  }
  free(_Memory);
  if (*(char *)(lVar7 + 0x608) != '\0') {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144b74db0 FUN_144b74db0 body=290 status=ok
// SIG undefined FUN_144b74db0(void)

ulonglong FUN_144b74db0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  ulonglong uVar5;
  int iVar6;
  
  if (((param_1 < 1) || (param_2 < 1)) || (7 < param_3 + 1U)) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pcVar4 = "Invalid argument";
  }
  else {
    iVar6 = 0;
    if (param_3 != -1) {
      iVar6 = param_3;
    }
    iVar1 = (&DAT_1499729c8)[iVar6];
    iVar2 = (&DAT_1499729e8)[iVar6];
    if (iVar6 == 3) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0x100 / (longlong)(iVar2 * iVar1));
    }
    uVar5 = (longlong)((param_2 + -1 + iVar2 & -iVar2) * (param_1 + -1 + iVar1 & -iVar1)) *
            ((longlong)iVar6 + 2) + 0x800;
    if (uVar5 < 0x100000000) {
      return uVar5;
    }
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pcVar4 = "Image is too large";
  }
  _snwprintf_s((wchar_t *)(lVar3 + 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): %s",
               "tj3JPEGBufSize",pcVar4);
  return 0;
}



// FUNCTION 144b74ee0 FUN_144b74ee0 body=503 status=ok
// SIG undefined FUN_144b74ee0(void)

ulonglong FUN_144b74ee0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  wchar_t *_DstBuf;
  char *pcVar3;
  undefined1 auStack_68 [32];
  char *local_48;
  char *local_40;
  uint local_38;
  longlong local_30;
  longlong local_28;
  
  local_38 = 0;
  local_28 = param_1;
  if (param_1 == 0) {
    local_48 = "tj3DecompressHeader";
    _snwprintf_s((wchar_t *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): Invalid handle");
    return 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x608) = 0;
  local_30 = param_1 + 0x1f8;
  *(undefined1 *)(param_1 + 0x6dc) = 0;
  if ((*(byte *)(param_1 + 0x610) & 2) == 0) {
    pcVar3 = "Instance has not been initialized for decompression";
LAB_144b75055:
    _DstBuf = (wchar_t *)(param_1 + 0x614);
  }
  else {
    if ((param_2 == 0) || (param_3 == 0)) {
      pcVar3 = "Invalid argument";
      goto LAB_144b75055;
    }
    iVar2 = __intrinsic_setjmp(param_1 + 0x500,auStack_68);
    lVar1 = local_30;
    if (iVar2 != 0) {
      return 0xffffffffffffffff;
    }
    FUN_144e92c90(local_30,param_2,param_3);
    iVar2 = FUN_144e8b840(lVar1,0);
    param_1 = local_28;
    if (iVar2 == 2) {
      return 0;
    }
    FUN_144b76c70(local_28);
    thunk_FUN_144e8d2e0(lVar1);
    if (*(int *)(param_1 + 0x6f4) < 0) {
      _DstBuf = (wchar_t *)(param_1 + 0x614);
      pcVar3 = "Could not determine colorspace of JPEG image";
    }
    else {
      if ((0 < *(int *)(param_1 + 0x6e8)) && (0 < *(int *)(param_1 + 0x6ec))) goto LAB_144b750c0;
      _DstBuf = (wchar_t *)(param_1 + 0x614);
      pcVar3 = "Invalid data returned in header";
    }
  }
  local_48 = "tj3DecompressHeader";
  local_40 = pcVar3;
  _snwprintf_s(_DstBuf,200,0xffffffffffffffff,(wchar_t *)"%s(): %s");
  local_48 = "tj3DecompressHeader";
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined1 *)(param_1 + 0x6dc) = 1;
  local_40 = pcVar3;
  _snwprintf_s((wchar_t *)(lVar1 + 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): %s");
  local_38 = 0xffffffff;
LAB_144b750c0:
  if (*(char *)(param_1 + 0x608) != '\0') {
    local_38 = 0xffffffff;
  }
  return (ulonglong)local_38;
}



// FUNCTION 144b750e0 FUN_144b750e0 body=402 status=ok
// SIG undefined FUN_144b750e0(void)

undefined4 FUN_144b750e0(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  char *pcVar7;
  int iStackX_14;
  
  if (param_1 == 0) {
    _snwprintf_s((wchar_t *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): Invalid handle",
                 "tj3SetScalingFactor");
    return 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x608) = 0;
  *(undefined1 *)(param_1 + 0x6dc) = 0;
  if ((*(byte *)(param_1 + 0x610) & 2) == 0) {
    pcVar7 = "Instance has not been initialized for decompression";
  }
  else {
    iStackX_14 = (int)((ulonglong)param_2 >> 0x20);
    piVar2 = &DAT_149972854;
    iVar3 = 0;
    do {
      iVar5 = (int)param_2;
      if (((((iVar5 == piVar2[-1]) && (iVar4 = iVar3, iStackX_14 == *piVar2)) ||
           ((iVar4 = iVar3 + 1, iVar5 == piVar2[1] && (iStackX_14 == piVar2[2])))) ||
          ((iVar4 = iVar3 + 2, iVar5 == piVar2[3] && (iStackX_14 == piVar2[4])))) ||
         ((iVar4 = iVar3 + 3, iVar5 == piVar2[5] && (iStackX_14 == piVar2[6])))) break;
      iVar4 = iVar3 + 4;
      piVar2 = piVar2 + 8;
      iVar3 = iVar4;
    } while ((longlong)piVar2 < 0x1499728d4);
    if (iVar4 < 0x10) {
      *(undefined8 *)(param_1 + 0x720) = param_2;
      return 0;
    }
    pcVar7 = "Unsupported scaling factor";
  }
  _snwprintf_s((wchar_t *)(param_1 + 0x614),200,0xffffffffffffffff,(wchar_t *)"%s(): %s",
               "tj3SetScalingFactor",pcVar7);
  pvVar1 = ThreadLocalStoragePointer;
  uVar6 = (ulonglong)_tls_index;
  *(undefined1 *)(param_1 + 0x6dc) = 1;
  _snwprintf_s((wchar_t *)(*(longlong *)((longlong)pvVar1 + uVar6 * 8) + 0x10),200,
               0xffffffffffffffff,(wchar_t *)"%s(): %s","tj3SetScalingFactor",pcVar7);
  return 0xffffffff;
}



// FUNCTION 144b75280 FUN_144b75280 body=860 status=ok
// SIG undefined FUN_144b75280(void)

undefined4 FUN_144b75280(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 in_stack_ffffffffffffffc0;
  undefined8 uVar11;
  
  if (param_1 == 0) {
    _snwprintf_s((wchar_t *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): Invalid handle",
                 "tj3SetCroppingRegion");
    return 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x608) = 0;
  *(undefined1 *)(param_1 + 0x6dc) = 0;
  if ((*(byte *)(param_1 + 0x610) & 2) == 0) {
    pcVar5 = "Instance has not been initialized for decompression";
    goto LAB_144b7554d;
  }
  iVar1 = *param_2;
  if (iVar1 == 0) {
    if (((param_2[1] == 0) && (param_2[2] == 0)) && (param_2[3] == 0)) {
      uVar11 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 0x728) = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 0x730) = uVar11;
      return 0;
    }
LAB_144b75349:
    iVar2 = param_2[1];
    if (((-1 < iVar2) && (iVar6 = param_2[2], -1 < iVar6)) && (iVar8 = param_2[3], -1 < iVar8)) {
      if ((*(int *)(param_1 + 0x6e8) < 0) || (*(int *)(param_1 + 0x6ec) < 0)) {
        pcVar5 = "JPEG header has not yet been read";
      }
      else if ((*(int *)(param_1 + 0x6f0) == 0x10) || (*(char *)(param_1 + 0x701) != '\0')) {
        pcVar5 = "Cannot partially decompress lossless JPEG images";
      }
      else if (*(int *)(param_1 + 0x6e4) == -1) {
        pcVar5 = "Could not determine subsampling level of JPEG image";
      }
      else {
        iVar7 = *(int *)(param_1 + 0x724);
        iVar3 = *(int *)(param_1 + 0x720);
        iVar10 = (iVar3 * *(int *)(param_1 + 0x6e8) + -1 + iVar7) / iVar7;
        iVar9 = (iVar7 + -1 + iVar3 * *(int *)(param_1 + 0x6ec)) / iVar7;
        iVar7 = (iVar7 + -1 + iVar3 * (&DAT_1499729c8)[*(int *)(param_1 + 0x6e4)]) / iVar7;
        if (iVar1 % iVar7 != 0) {
          uVar11 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20),iVar1);
          _snwprintf_s((wchar_t *)(param_1 + 0x614),200,0xffffffffffffffff,
                       (wchar_t *)
                       "%s(): The left boundary of the cropping region (%d) is not\ndivisible by the scaled MCU width (%d)"
                       ,"tj3SetCroppingRegion",uVar11,iVar7);
          *(undefined1 *)(param_1 + 0x6dc) = 1;
          _snwprintf_s((wchar_t *)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10),
                       200,0xffffffffffffffff,
                       (wchar_t *)
                       "%s(): The left boundary of the cropping region (%d) is not\ndivisible by the scaled MCU width (%d)"
                       ,"tj3SetCroppingRegion",CONCAT44((int)((ulonglong)uVar11 >> 0x20),iVar1),
                       (*(int *)(param_1 + 0x724) + -1 +
                       (&DAT_1499729c8)[*(int *)(param_1 + 0x6e4)] * *(int *)(param_1 + 0x720)) /
                       *(int *)(param_1 + 0x724));
          return 0xffffffff;
        }
        if (iVar6 == 0) {
          iVar6 = iVar10 - iVar1;
          param_2[2] = iVar6;
        }
        if (iVar8 == 0) {
          iVar8 = iVar9 - iVar2;
          param_2[3] = iVar8;
        }
        if ((((-1 < iVar6) && (-1 < iVar8)) && (iVar1 + iVar6 <= iVar10)) &&
           (iVar2 + iVar8 <= iVar9)) {
          uVar11 = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)(param_1 + 0x728) = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 0x730) = uVar11;
          return 0;
        }
        pcVar5 = "The cropping region exceeds the scaled image dimensions";
      }
      goto LAB_144b7554d;
    }
  }
  else if (-1 < iVar1) goto LAB_144b75349;
  pcVar5 = "Invalid cropping region";
LAB_144b7554d:
  _snwprintf_s((wchar_t *)(param_1 + 0x614),200,0xffffffffffffffff,(wchar_t *)"%s(): %s",
               "tj3SetCroppingRegion",pcVar5);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined1 *)(param_1 + 0x6dc) = 1;
  _snwprintf_s((wchar_t *)(lVar4 + 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): %s",
               "tj3SetCroppingRegion",pcVar5);
  return 0xffffffff;
}



// FUNCTION 144b755e0 FUN_144b755e0 body=1705 status=ok
// SIG undefined FUN_144b755e0(void)

undefined4
FUN_144b755e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
             uint param_6)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *_Memory;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  undefined1 auStack_c8 [32];
  char *local_a8;
  char *local_a0;
  int local_98;
  undefined4 local_88;
  int local_84;
  int local_80;
  uint local_7c;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  
  local_78 = (longlong *)0x0;
  local_88 = 0;
  local_68 = param_1;
  if (param_1 == 0) {
    local_a8 = "tj3Decompress8";
    _snwprintf_s((wchar_t *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): Invalid handle");
    return 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x608) = 0;
  lVar9 = param_1 + 0x1f8;
  *(undefined1 *)(param_1 + 0x6dc) = 0;
  local_70 = lVar9;
  if ((*(byte *)(param_1 + 0x610) & 2) == 0) {
    pcVar13 = "Instance has not been initialized for decompression";
LAB_144b75bde:
    _Memory = local_78;
    local_a8 = "tj3Decompress8";
    local_a0 = pcVar13;
    _snwprintf_s((wchar_t *)(param_1 + 0x614),200,0xffffffffffffffff,(wchar_t *)"%s(): %s");
    local_a8 = "tj3Decompress8";
    lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined1 *)(param_1 + 0x6dc) = 1;
    local_a0 = pcVar13;
    _snwprintf_s((wchar_t *)(lVar8 + 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): %s");
  }
  else {
    if ((((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) || ((param_5 < 0 || (0xb < param_6)))
       ) {
      pcVar13 = "Invalid argument";
      goto LAB_144b75bde;
    }
    if (*(int *)(param_1 + 0x6fc) == 0) {
      *(undefined8 *)(param_1 + 0x208) = 0;
    }
    else {
      local_60 = FUN_144b766e0;
      local_58 = 0;
      uStack_50 = 0;
      *(code ***)(param_1 + 0x208) = &local_60;
      local_48 = param_1;
    }
    iVar2 = __intrinsic_setjmp(param_1 + 0x500);
    lVar9 = local_70;
    _Memory = local_78;
    param_1 = local_68;
    if (iVar2 == 0) {
      if (*(int *)(local_70 + 0x24) < 0xc9) {
        FUN_144e92c90(local_70,param_2,param_3);
        FUN_144e8b840(lVar9);
      }
      param_1 = local_68;
      FUN_144b76c70(local_68);
      *(undefined4 *)(param_1 + 0x238) =
           *(undefined4 *)(&DAT_14c6d97f8 + (longlong)(int)param_6 * 4);
      uVar7 = *(uint *)(param_1 + 0x724);
      uVar3 = *(int *)(lVar9 + 0x30) * *(int *)(param_1 + 0x720) + -1 + uVar7;
      *(bool *)(lVar9 + 0x60) = *(char *)(param_1 + 0x6f8) == '\0';
      *(uint *)(param_1 + 0x254) = (uint)(*(char *)(param_1 + 0x6f9) != '\0');
      *(undefined4 *)(lVar9 + 0x44) = *(undefined4 *)(param_1 + 0x720);
      *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)(param_1 + 0x724);
      FUN_144e8d640(lVar9,(ulonglong)uVar3 % (ulonglong)uVar7);
      if ((*(int *)(param_1 + 0x728) == 0) &&
         ((*(uint *)(param_1 + 0x730) == 0 || (*(uint *)(param_1 + 0x730) == uVar3 / uVar7)))) {
LAB_144b758ee:
        if (param_5 == 0) {
          param_5 = *(int *)(&DAT_149972a08 + (longlong)(int)param_6 * 4) * *(int *)(lVar9 + 0x74);
        }
        local_7c = *(uint *)(lVar9 + 0x78);
        if ((*(int *)(param_1 + 0x72c) != 0) || (*(int *)(param_1 + 0x734) != 0)) {
          local_7c = *(uint *)(param_1 + 0x734);
        }
        local_78 = malloc((longlong)(int)local_7c << 3);
        if (local_78 == (longlong *)0x0) {
          pcVar13 = "Memory allocation failure";
          goto LAB_144b75bde;
        }
        iVar2 = __intrinsic_setjmp(param_1 + 0x500,auStack_c8);
        param_1 = local_68;
        lVar9 = local_70;
        _Memory = local_78;
        if (iVar2 != 0) goto LAB_144b75c40;
        uVar12 = (ulonglong)local_7c;
        if (0 < (int)local_7c) {
          lVar11 = (longlong)param_5;
          lVar8 = (int)(local_7c - 1) * lVar11 + param_4;
          plVar10 = local_78;
          do {
            lVar6 = lVar8;
            if (*(char *)(local_68 + 0x6dd) == '\0') {
              lVar6 = param_4;
            }
            lVar8 = lVar8 - lVar11;
            param_4 = param_4 + lVar11;
            *plVar10 = lVar6;
            uVar12 = uVar12 - 1;
            plVar10 = plVar10 + 1;
          } while (uVar12 != 0);
        }
        if ((*(int *)(local_68 + 0x72c) == 0) && (*(int *)(local_68 + 0x734) == 0)) {
          uVar7 = *(uint *)(local_70 + 0x78);
          if (*(uint *)(local_70 + 0x98) < uVar7) {
            do {
              FUN_144e8d740(lVar9,_Memory + *(uint *)(lVar9 + 0x98),uVar7 - *(uint *)(lVar9 + 0x98))
              ;
              uVar7 = *(uint *)(lVar9 + 0x78);
            } while (*(uint *)(lVar9 + 0x98) < uVar7);
          }
        }
        else {
          iVar2 = 0;
          if (*(int *)(local_68 + 0x72c) != 0) {
            iVar5 = FUN_144e8d830(local_70);
            iVar2 = *(int *)(param_1 + 0x72c);
            if (iVar5 == iVar2) goto LAB_144b75ab5;
            local_a8 = "tj3Decompress8";
            local_98 = iVar5;
            local_a0._0_4_ = iVar2;
            _snwprintf_s((wchar_t *)(param_1 + 0x614),200,0xffffffffffffffff,
                         (wchar_t *)
                         "%s(): Unexplained mismatch between specified (%d) and\nactual (%d) cropping region upper boundary"
                        );
            pvVar1 = ThreadLocalStoragePointer;
            pcVar13 = 
            "%s(): Unexplained mismatch between specified (%d) and\nactual (%d) cropping region upper boundary"
            ;
            uVar12 = (ulonglong)_tls_index;
            *(undefined1 *)(param_1 + 0x6dc) = 1;
            lVar8 = *(longlong *)((longlong)pvVar1 + uVar12 * 8);
            local_a0 = (char *)CONCAT44(local_a0._4_4_,*(undefined4 *)(param_1 + 0x72c));
            local_98 = iVar5;
LAB_144b75a9e:
            local_a8 = "tj3Decompress8";
            _snwprintf_s((wchar_t *)(lVar8 + 0x10),200,0xffffffffffffffff,(wchar_t *)pcVar13);
            goto LAB_144b75c40;
          }
LAB_144b75ab5:
          iVar5 = *(int *)(param_1 + 0x734);
          if (*(int *)(lVar9 + 0x98) < iVar5 + iVar2) {
            do {
              FUN_144e8d740(lVar9,_Memory + (uint)(*(int *)(lVar9 + 0x98) - iVar2),
                            iVar2 + (iVar5 - *(int *)(lVar9 + 0x98)));
              iVar2 = *(int *)(param_1 + 0x72c);
              iVar5 = *(int *)(param_1 + 0x734);
            } while (*(int *)(lVar9 + 0x98) < iVar5 + iVar2);
          }
          if (iVar5 + iVar2 != *(int *)(lVar9 + 0x78)) {
            iVar2 = FUN_144e8d830(lVar9,(*(int *)(lVar9 + 0x78) - iVar5) - iVar2);
            if (iVar2 != (*(int *)(lVar9 + 0x78) - *(int *)(param_1 + 0x734)) -
                         *(int *)(param_1 + 0x72c)) {
              local_98 = *(int *)(lVar9 + 0x78) - iVar2;
              local_a8 = "tj3Decompress8";
              local_a0._0_4_ = *(int *)(param_1 + 0x72c) + *(int *)(param_1 + 0x734);
              _snwprintf_s((wchar_t *)(param_1 + 0x614),200,0xffffffffffffffff,
                           (wchar_t *)
                           "%s(): Unexplained mismatch between specified (%d) and\nactual (%d) cropping region lower boundary"
                          );
              pvVar1 = ThreadLocalStoragePointer;
              uVar12 = (ulonglong)_tls_index;
              pcVar13 = 
              "%s(): Unexplained mismatch between specified (%d) and\nactual (%d) cropping region lower boundary"
              ;
              *(undefined1 *)(param_1 + 0x6dc) = 1;
              local_98 = *(int *)(lVar9 + 0x78) - iVar2;
              lVar8 = *(longlong *)((longlong)pvVar1 + uVar12 * 8);
              local_a0 = (char *)CONCAT44(local_a0._4_4_,
                                          *(int *)(param_1 + 0x734) + *(int *)(param_1 + 0x72c));
              goto LAB_144b75a9e;
            }
          }
        }
        FUN_144e8b9c0(lVar9);
        goto LAB_144b75c47;
      }
      local_80 = *(int *)(param_1 + 0x730);
      local_84 = *(int *)(param_1 + 0x728);
      FUN_144e8dd90(lVar9,&local_84,&local_80);
      if (local_84 == *(int *)(param_1 + 0x728)) {
        if (local_80 == *(int *)(param_1 + 0x730)) goto LAB_144b758ee;
        local_98 = local_80;
        local_a0 = (char *)CONCAT44(local_a0._4_4_,*(int *)(param_1 + 0x730));
        local_a8 = "tj3Decompress8";
        _snwprintf_s((wchar_t *)(param_1 + 0x614),200,0xffffffffffffffff,
                     (wchar_t *)
                     "%s(): Unexplained mismatch between specified (%d) and\nactual (%d) cropping region width"
                    );
        pvVar1 = ThreadLocalStoragePointer;
        pcVar13 = 
        "%s(): Unexplained mismatch between specified (%d) and\nactual (%d) cropping region width";
        uVar12 = (ulonglong)_tls_index;
        *(undefined1 *)(param_1 + 0x6dc) = 1;
        lVar8 = *(longlong *)((longlong)pvVar1 + uVar12 * 8);
        local_98 = local_80;
        uVar4 = *(undefined4 *)(param_1 + 0x730);
      }
      else {
        local_98 = local_84;
        local_a0 = (char *)CONCAT44(local_a0._4_4_,*(int *)(param_1 + 0x728));
        local_a8 = "tj3Decompress8";
        _snwprintf_s((wchar_t *)(param_1 + 0x614),200,0xffffffffffffffff,
                     (wchar_t *)
                     "%s(): Unexplained mismatch between specified (%d) and\nactual (%d) cropping region left boundary"
                    );
        pvVar1 = ThreadLocalStoragePointer;
        pcVar13 = 
        "%s(): Unexplained mismatch between specified (%d) and\nactual (%d) cropping region left boundary"
        ;
        uVar12 = (ulonglong)_tls_index;
        *(undefined1 *)(param_1 + 0x6dc) = 1;
        lVar8 = *(longlong *)((longlong)pvVar1 + uVar12 * 8);
        local_98 = local_84;
        uVar4 = *(undefined4 *)(param_1 + 0x728);
      }
      local_a0 = (char *)CONCAT44(local_a0._4_4_,uVar4);
      local_a8 = "tj3Decompress8";
      _snwprintf_s((wchar_t *)(lVar8 + 0x10),200,0xffffffffffffffff,(wchar_t *)pcVar13);
      _Memory = local_78;
    }
  }
LAB_144b75c40:
  local_88 = 0xffffffff;
LAB_144b75c47:
  uVar4 = local_88;
  if (200 < *(int *)(lVar9 + 0x24)) {
    thunk_FUN_144e8d2e0(lVar9);
  }
  free(_Memory);
  if (*(char *)(param_1 + 0x608) != '\0') {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}



// FUNCTION 144b75c90 FUN_144b75c90 body=124 status=ok
// SIG undefined FUN_144b75c90(void)

void FUN_144b75c90(void *param_1)

{
  void *_Memory;
  int iVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  void *local_28;
  void *local_20;
  longlong local_18;
  
  if (param_1 != (void *)0x0) {
    *(undefined1 *)((longlong)param_1 + 0x608) = 0;
    local_18 = (longlong)param_1 + 0x1f8;
    *(undefined1 *)((longlong)param_1 + 0x6dc) = 0;
    local_28 = param_1;
    local_20 = param_1;
    iVar1 = __intrinsic_setjmp((longlong)param_1 + 0x500,auStack_48);
    _Memory = local_28;
    if (iVar1 == 0) {
      uVar2 = *(uint *)((longlong)local_28 + 0x610);
      if ((uVar2 & 1) != 0) {
        thunk_FUN_144e8d330(local_20);
        uVar2 = *(uint *)((longlong)_Memory + 0x610);
      }
      if ((uVar2 & 2) != 0) {
        thunk_FUN_144e8d330(local_18);
      }
      free(_Memory);
    }
  }
  return;
}



// FUNCTION 144b75d10 FUN_144b75d10 body=204 status=ok
// SIG undefined FUN_144b75d10(void)

undefined8 FUN_144b75d10(longlong param_1)

{
  int iVar1;
  wchar_t *_DstBuf;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 == 0) {
    _snwprintf_s((wchar_t *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): %s","tjDestroy","Invalid handle");
    return 0xffffffff;
  }
  _DstBuf = (wchar_t *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10);
  _snwprintf_s(_DstBuf,200,0xffffffffffffffff,(wchar_t *)"No error");
  FUN_144b75c90(param_1);
  iVar1 = strcmp((char *)_DstBuf,"No error");
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144b75de0 FUN_144b75de0 body=7 status=ok
// SIG undefined FUN_144b75de0(void)

void FUN_144b75de0(void)

{
  FUN_144b748e0(0);
  return;
}



// FUNCTION 144b75df0 FUN_144b75df0 body=10 status=ok
// SIG undefined FUN_144b75df0(void)

void FUN_144b75df0(void)

{
  FUN_144b748e0(1);
  return;
}



// FUNCTION 144b75e00 FUN_144b75e00 body=120 status=ok
// SIG undefined FUN_144b75e00(void)

ulonglong FUN_144b75e00(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (-1 < param_3) {
    uVar1 = FUN_144b74db0();
    uVar2 = uVar1 & 0xffffffff;
    if (uVar1 == 0) {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  _snwprintf_s((wchar_t *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): %s","tjBufSize","Invalid argument");
  return 0xffffffff;
}



// FUNCTION 144b75e80 FUN_144b75e80 body=406 status=ok
// SIG undefined FUN_144b75e80(void)

undefined4
FUN_144b75e80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,uint *param_8,uint param_9,
             uint param_10,undefined4 param_11)

{
  void *pvVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong local_res8;
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar4;
  
  uVar2 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
    _snwprintf_s((wchar_t *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): Invalid handle","tjCompress2");
  }
  else {
    *(undefined1 *)(param_1 + 0x608) = 0;
    *(undefined1 *)(param_1 + 0x6dc) = 0;
    if (((param_8 == (uint *)0x0) || (6 < param_9)) || (100 < param_10)) {
      uVar2 = 0xffffffff;
      _snwprintf_s((wchar_t *)(param_1 + 0x614),200,0xffffffffffffffff,(wchar_t *)"%s(): %s",
                   "tjCompress2","Invalid argument");
      pvVar1 = ThreadLocalStoragePointer;
      uVar3 = (ulonglong)_tls_index;
      *(undefined1 *)(param_1 + 0x6dc) = 1;
      _snwprintf_s((wchar_t *)(*(longlong *)((longlong)pvVar1 + uVar3 * 8) + 0x10),200,
                   0xffffffffffffffff,(wchar_t *)"%s(): %s","tjCompress2","Invalid argument");
    }
    else {
      *(uint *)(param_1 + 0x6e4) = param_9;
      *(uint *)(param_1 + 0x6e0) = param_10;
      FUN_144b76d90(param_1,param_11,1);
      local_res8 = (ulonglong)*param_8;
      uVar2 = FUN_144b74a50(param_1,param_2,param_3,param_4,CONCAT44(uVar2,param_5),
                            CONCAT44(uVar4,param_6),param_7,&local_res8);
      *param_8 = (uint)local_res8;
    }
  }
  return uVar2;
}



// FUNCTION 144b76020 FUN_144b76020 body=675 status=ok
// SIG undefined FUN_144b76020(void)

undefined8
FUN_144b76020(longlong param_1,longlong param_2,int param_3,undefined8 param_4,int param_5,
             undefined4 param_6,int param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 auStack_88 [32];
  char *local_68;
  char *local_60;
  longlong local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_50 = param_1;
  if (param_1 == 0) {
    local_68 = "tjDecompress2";
    _snwprintf_s((wchar_t *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): Invalid handle");
    return 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x608) = 0;
  lVar7 = param_1 + 0x1f8;
  *(undefined1 *)(param_1 + 0x6dc) = 0;
  local_58 = lVar7;
  if ((*(byte *)(param_1 + 0x610) & 2) == 0) {
    pcVar8 = "Instance has not been initialized for decompression";
  }
  else if ((((param_2 == 0) || (param_3 == 0)) || (param_5 < 0)) || (param_7 < 0)) {
    pcVar8 = "Invalid argument";
  }
  else {
    iVar4 = __intrinsic_setjmp(param_1 + 0x500,auStack_88);
    lVar7 = local_58;
    if (iVar4 != 0) goto LAB_144b762a0;
    FUN_144e92c90(local_58,param_2,param_3);
    FUN_144e8b840(lVar7,1);
    piVar6 = &DAT_149972854;
    if (param_5 == 0) {
      param_5 = *(int *)(lVar7 + 0x30);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(lVar7 + 0x34);
    }
    iVar4 = 0;
    do {
      iVar1 = *piVar6;
      if (((piVar6[-1] * *(int *)(lVar7 + 0x30) + -1 + iVar1) / iVar1 <= param_5) &&
         ((iVar1 + -1 + piVar6[-1] * *(int *)(lVar7 + 0x34)) / iVar1 <= param_7)) break;
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 2;
    } while (iVar4 < 0x10);
    if (iVar4 < 0x10) {
      FUN_144b76d90(param_1,param_9,2);
      iVar4 = FUN_144b750e0(param_1,*(undefined8 *)(&DAT_149972850 + (longlong)iVar4 * 2));
      if (iVar4 == -1) {
        return 0xffffffff;
      }
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      iVar4 = FUN_144b75280(param_1,&local_48);
      if (iVar4 == -1) {
        return 0xffffffff;
      }
      local_60 = (char *)CONCAT44(local_60._4_4_,param_8);
      local_68 = (char *)CONCAT44(local_68._4_4_,param_6);
      uVar5 = FUN_144b755e0(param_1,param_2,param_3,param_4);
      return uVar5;
    }
    pcVar8 = "Could not scale down to desired image dimensions";
  }
  lVar3 = local_50;
  local_68 = "tjDecompress2";
  local_60 = pcVar8;
  _snwprintf_s((wchar_t *)(local_50 + 0x614),200,0xffffffffffffffff,(wchar_t *)"%s(): %s");
  local_68 = "tjDecompress2";
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined1 *)(lVar3 + 0x6dc) = 1;
  local_60 = pcVar8;
  _snwprintf_s((wchar_t *)(lVar2 + 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): %s");
LAB_144b762a0:
  if (200 < *(int *)(lVar7 + 0x24)) {
    thunk_FUN_144e8d2e0(lVar7);
  }
  return 0xffffffff;
}



// FUNCTION 144b762d0 FUN_144b762d0 body=375 status=ok
// SIG undefined FUN_144b762d0(void)

undefined4
FUN_144b762d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
             undefined4 *param_5,int *param_6,undefined4 *param_7)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  if (param_1 == 0) {
    _snwprintf_s((wchar_t *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): Invalid handle",
                 "tjDecompressHeader3");
    return 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x608) = 0;
  *(undefined1 *)(param_1 + 0x6dc) = 0;
  if ((((param_4 == (undefined4 *)0x0) || (param_5 == (undefined4 *)0x0)) || (param_6 == (int *)0x0)
      ) || (param_7 == (undefined4 *)0x0)) {
    pcVar4 = "Invalid argument";
  }
  else {
    uVar3 = FUN_144b74ee0(param_1,param_2,param_3);
    *param_4 = *(undefined4 *)(param_1 + 0x6e8);
    *param_5 = *(undefined4 *)(param_1 + 0x6ec);
    iVar1 = *(int *)(param_1 + 0x6e4);
    *param_6 = iVar1;
    if (iVar1 != -1) {
      *param_7 = *(undefined4 *)(param_1 + 0x6f4);
      return uVar3;
    }
    pcVar4 = "Could not determine subsampling level of JPEG image";
  }
  _snwprintf_s((wchar_t *)(param_1 + 0x614),200,0xffffffffffffffff,(wchar_t *)"%s(): %s",
               "tjDecompressHeader3",pcVar4);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined1 *)(param_1 + 0x6dc) = 1;
  _snwprintf_s((wchar_t *)(lVar2 + 0x10),200,0xffffffffffffffff,(wchar_t *)"%s(): %s",
               "tjDecompressHeader3",pcVar4);
  return 0xffffffff;
}



// FUNCTION 144b76450 FUN_144b76450 body=29 status=ok
// SIG undefined FUN_144b76450(void)

void FUN_144b76450(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Subroutine does not return */
  longjmp((_JBTYPE *)(lVar1 + 0xb0),1);
}



// FUNCTION 144b76490 FUN_144b76490 body=69 status=ok
// SIG undefined FUN_144b76490(void)

void FUN_144b76490(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x1b0))();
  if ((param_2 < 0) && (*(undefined1 *)(lVar1 + 0x1b8) = 1, *(char *)(lVar1 + 0x1b9) != '\0')) {
                    /* WARNING: Subroutine does not return */
    longjmp((_JBTYPE *)(lVar1 + 0xb0),1);
  }
  return;
}



// FUNCTION 144b764e0 FUN_144b764e0 body=252 status=ok
// SIG undefined FUN_144b764e0(void)

undefined8 * FUN_144b764e0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined *local_10;
  
  local_18 = 1;
  local_10 = &DAT_14c77efe0;
  uVar2 = FUN_144e8b040(param_1 + 0x8a);
  *param_1 = uVar2;
  *(undefined4 *)(param_1 + 0x9e) = 1000;
  param_1[0x8a] = FUN_144b76450;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0x404;
  param_1[0x8c] = &LAB_144b76470;
  param_1[0xc0] = param_1[0x8b];
  param_1[0x8b] = FUN_144b76490;
  param_1[0x9d] = &DAT_14c6d9710;
  iVar1 = __intrinsic_setjmp(param_1 + 0xa0,auStack_38);
  if (iVar1 != 0) {
    free(param_1);
    return (undefined8 *)0x0;
  }
  FUN_144e8b2c0(param_1,0x3e,0x1f8);
  FUN_144e92a20(param_1,&local_10,&local_18,0);
  *(uint *)(param_1 + 0xc2) = *(uint *)(param_1 + 0xc2) | 1;
  return param_1;
}



// FUNCTION 144b765e0 FUN_144b765e0 body=243 status=ok
// SIG undefined FUN_144b765e0(void)

void * FUN_144b765e0(void *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [32];
  
  uVar2 = FUN_144e8b040((longlong)param_1 + 0x450);
  *(undefined8 *)((longlong)param_1 + 0x1f8) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x4f0) = 1000;
  *(code **)((longlong)param_1 + 0x450) = FUN_144b76450;
  *(undefined4 *)((longlong)param_1 + 0x4f4) = 0x404;
  *(undefined1 **)((longlong)param_1 + 0x460) = &LAB_144b76470;
  *(undefined8 *)((longlong)param_1 + 0x600) = *(undefined8 *)((longlong)param_1 + 0x458);
  *(code **)((longlong)param_1 + 0x458) = FUN_144b76490;
  *(undefined **)((longlong)param_1 + 0x4e8) = &DAT_14c6d9710;
  iVar1 = __intrinsic_setjmp((longlong)param_1 + 0x500,auStack_28);
  if (iVar1 != 0) {
    free(param_1);
    return (void *)0x0;
  }
  FUN_144e8b6b0((longlong)param_1 + 0x1f8,0x3e,600);
  FUN_144e92c90((longlong)param_1 + 0x1f8,&DAT_14c77efe1,1);
  *(uint *)((longlong)param_1 + 0x610) = *(uint *)((longlong)param_1 + 0x610) | 2;
  return param_1;
}



// FUNCTION 144b766e0 FUN_144b766e0 body=187 status=ok
// SIG undefined FUN_144b766e0(void)

void FUN_144b766e0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if ((char)param_1[4] != '\0') {
    lVar3 = param_1[2];
    iVar1 = *(int *)(*(longlong *)(lVar3 + 0x18) + 0x6fc);
    if (iVar1 < *(int *)((longlong)param_1 + 0x9c)) {
      _snwprintf_s((wchar_t *)(*(longlong *)(lVar3 + 0x18) + 0x614),200,0xffffffffffffffff,
                   (wchar_t *)"Progressive JPEG image has more than %d scans",iVar1);
      _snwprintf_s((wchar_t *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x10),200,0xffffffffffffffff,
                   (wchar_t *)"Progressive JPEG image has more than %d scans",
                   *(undefined4 *)(*(longlong *)(lVar3 + 0x18) + 0x6fc));
      *(undefined1 *)(*(longlong *)(lVar3 + 0x18) + 0x6dc) = 1;
      *(undefined1 *)(lVar2 + 0x1b8) = 0;
                    /* WARNING: Subroutine does not return */
      longjmp((_JBTYPE *)(lVar2 + 0xb0),1);
    }
  }
  return;
}



// FUNCTION 144b767a0 FUN_144b767a0 body=603 status=ok
// SIG undefined FUN_144b767a0(void)

void FUN_144b767a0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(&DAT_14c6d97f8 + (longlong)param_2 * 4);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(&DAT_149972a08 + (longlong)param_2 * 4);
  FUN_144e8bcd0();
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x70c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x710);
  *(undefined2 *)(param_1 + 0x118) = *(undefined2 *)(param_1 + 0x714);
  *(undefined2 *)(param_1 + 0x11a) = *(undefined2 *)(param_1 + 0x718);
  *(undefined1 *)(param_1 + 0x117) = *(undefined1 *)(param_1 + 0x71c);
  if (*(char *)(param_1 + 0x701) != '\0') {
    FUN_144e8cc60(param_1,*(undefined4 *)(param_1 + 0x704),*(undefined4 *)(param_1 + 0x708));
    if (param_2 == 6) {
      *(undefined4 *)(param_1 + 0x6e4) = 3;
      return;
    }
    if (*(int *)(param_1 + 0x6e4) == 3) {
      return;
    }
    *(undefined4 *)(param_1 + 0x6e4) = 0;
    return;
  }
  FUN_144e8c6d0(param_1,*(undefined4 *)(param_1 + 0x6e0),1);
  iVar1 = *(int *)(param_1 + 0x6f4);
  *(uint *)(param_1 + 0x108) = (uint)(*(char *)(param_1 + 0x6f9) != '\0');
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else if (iVar1 == 1) {
    uVar2 = 3;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        uVar2 = 4;
        goto LAB_144b768fc;
      }
      if (iVar1 == 4) {
        uVar2 = 5;
        goto LAB_144b768fc;
      }
      if (*(int *)(param_1 + 0x6e4) != 3) {
        uVar2 = 3;
        if (param_2 == 0xb) {
          uVar2 = 5;
        }
        goto LAB_144b768fc;
      }
    }
    uVar2 = 1;
  }
LAB_144b768fc:
  FUN_144e8bec0(param_1,uVar2);
  *(undefined1 *)(param_1 + 0x102) = *(undefined1 *)(param_1 + 0x6fa);
  if (*(char *)(param_1 + 0x6fb) != '\0') {
    FUN_144e8cd20(param_1);
  }
  *(undefined1 *)(param_1 + 0x101) = *(undefined1 *)(param_1 + 0x700);
  *(int *)(*(longlong *)(param_1 + 0x58) + 8) =
       (int)((&DAT_1499729c8)[*(int *)(param_1 + 0x6e4)] +
            ((int)(&DAT_1499729c8)[*(int *)(param_1 + 0x6e4)] >> 0x1f & 7U)) >> 3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x68) = 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 200) = 1;
  if (3 < *(int *)(param_1 + 0x4c)) {
    *(int *)(*(longlong *)(param_1 + 0x58) + 0x128) =
         (int)((&DAT_1499729c8)[*(int *)(param_1 + 0x6e4)] +
              ((int)(&DAT_1499729c8)[*(int *)(param_1 + 0x6e4)] >> 0x1f & 7U)) >> 3;
  }
  *(int *)(*(longlong *)(param_1 + 0x58) + 0xc) =
       (int)((&DAT_1499729e8)[*(int *)(param_1 + 0x6e4)] +
            ((int)(&DAT_1499729e8)[*(int *)(param_1 + 0x6e4)] >> 0x1f & 7U)) >> 3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0x6c) = 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x58) + 0xcc) = 1;
  if (3 < *(int *)(param_1 + 0x4c)) {
    *(int *)(*(longlong *)(param_1 + 0x58) + 300) =
         (int)((&DAT_1499729e8)[*(int *)(param_1 + 0x6e4)] +
              ((int)(&DAT_1499729e8)[*(int *)(param_1 + 0x6e4)] >> 0x1f & 7U)) >> 3;
  }
  return;
}



// FUNCTION 144b76a00 FUN_144b76a00 body=612 status=ok
// SIG undefined FUN_144b76a00(void)

int FUN_144b76a00(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int local_res8;
  longlong local_res10;
  
  iVar1 = *(int *)(param_1 + 0x38);
  lVar12 = (longlong)iVar1;
  local_res8 = -1;
  if ((iVar1 == 1) && (*(int *)(param_1 + 0x3c) == 1)) {
    return 3;
  }
  iVar11 = 0;
  local_res10 = 0;
  do {
    if ((iVar11 != 3) && ((iVar1 == 3 || ((*(int *)(param_1 + 0x3c) - 4U < 2 && (iVar1 == 4)))))) {
      lVar3 = *(longlong *)(param_1 + 0x120);
      iVar4 = (int)(*(int *)((longlong)&DAT_1499729c8 + local_res10) +
                   (*(int *)((longlong)&DAT_1499729c8 + local_res10) >> 0x1f & 7U)) >> 3;
      iVar2 = *(int *)(lVar3 + 8);
      if ((iVar2 == iVar4) &&
         (iVar5 = (int)(*(int *)((longlong)&DAT_1499729e8 + local_res10) +
                       (*(int *)((longlong)&DAT_1499729e8 + local_res10) >> 0x1f & 7U)) >> 3,
         *(int *)(lVar3 + 0xc) == iVar5)) {
        iVar10 = 0;
        lVar7 = 1;
        if (1 < lVar12) {
          do {
            iVar9 = 1;
            iVar8 = 1;
            if ((*(int *)(param_1 + 0x3c) - 4U < 2) && (iVar9 = 1, lVar7 == 3)) {
              iVar9 = iVar5;
              iVar8 = iVar4;
            }
            if ((*(int *)(lVar7 * 0x60 + 8 + lVar3) == iVar8) &&
               (*(int *)(lVar7 * 0x60 + 0xc + lVar3) == iVar9)) {
              iVar10 = iVar10 + 1;
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < lVar12);
        }
        if (iVar10 == iVar1 + -1) {
          return iVar11;
        }
      }
      if (((iVar2 == 2) && (*(int *)(lVar3 + 0xc) == 2)) && ((iVar11 == 1 || (iVar11 == 4)))) {
        iVar10 = 0;
        lVar7 = 1;
        iVar5 = iVar1;
        if (1 < lVar12) {
          iVar5 = (int)((*(int *)((longlong)&DAT_1499729e8 + local_res10) >> 0x1f & 7U) +
                       *(int *)((longlong)&DAT_1499729e8 + local_res10)) >> 3;
          do {
            iVar9 = iVar4;
            iVar8 = iVar5;
            if ((*(int *)(param_1 + 0x3c) - 4U < 2) && (lVar7 == 3)) {
              iVar8 = 2;
              iVar9 = 2;
            }
            if ((*(int *)(lVar7 * 0x60 + 8 + lVar3) == iVar8) &&
               (*(int *)(lVar7 * 0x60 + 0xc + lVar3) == iVar9)) {
              iVar10 = iVar10 + 1;
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < lVar12);
          iVar5 = *(int *)(param_1 + 0x38);
        }
        if (iVar10 == iVar5 + -1) {
          return iVar11;
        }
      }
      if ((*(int *)(lVar3 + 0xc) * iVar2 < 4) && (iVar11 == 0)) {
        iVar4 = 0;
        lVar7 = 1;
        if (1 < iVar1) {
          piVar6 = (int *)(lVar3 + 0x6c);
          do {
            if ((piVar6[-1] == iVar2) && (*piVar6 == *(int *)(lVar3 + 0xc))) {
              iVar4 = iVar4 + 1;
            }
            if (iVar4 == iVar1 + -1) {
              local_res8 = 0;
              break;
            }
            lVar7 = lVar7 + 1;
            piVar6 = piVar6 + 0x18;
          } while (lVar7 < lVar12);
        }
      }
    }
    local_res10 = local_res10 + 4;
    iVar11 = iVar11 + 1;
    if (6 < iVar11) {
      return local_res8;
    }
  } while( true );
}



// FUNCTION 144b76c70 FUN_144b76c70 body=276 status=ok
// SIG undefined FUN_144b76c70(void)

void FUN_144b76c70(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_144b76a00(param_1 + 0x1f8);
  iVar2 = *(int *)(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x6e4) = uVar3;
  *(undefined4 *)(param_1 + 0x6e8) = *(undefined4 *)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x6ec) = *(undefined4 *)(param_1 + 0x22c);
  *(undefined4 *)(param_1 + 0x6f0) = *(undefined4 *)(param_1 + 0x310);
  if (iVar2 == 1) {
    *(undefined4 *)(param_1 + 0x6f4) = 2;
  }
  else if (iVar2 == 2) {
    *(undefined4 *)(param_1 + 0x6f4) = 0;
  }
  else if (iVar2 == 3) {
    *(undefined4 *)(param_1 + 0x6f4) = 1;
  }
  else if (iVar2 == 4) {
    *(undefined4 *)(param_1 + 0x6f4) = 3;
  }
  else if (iVar2 == 5) {
    *(undefined4 *)(param_1 + 0x6f4) = 4;
  }
  else {
    *(undefined4 *)(param_1 + 0x6f4) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x6fb) = *(undefined1 *)(param_1 + 800);
  *(undefined1 *)(param_1 + 0x700) = *(undefined1 *)(param_1 + 0x321);
  uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x3f8) + 0x11);
  *(undefined4 *)(param_1 + 0x704) = *(undefined4 *)(param_1 + 0x3e4);
  *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_1 + 0x3f0);
  *(uint *)(param_1 + 0x714) = (uint)*(ushort *)(param_1 + 0x35c);
  *(uint *)(param_1 + 0x718) = (uint)*(ushort *)(param_1 + 0x35e);
  *(uint *)(param_1 + 0x71c) = (uint)*(byte *)(param_1 + 0x35b);
  *(undefined1 *)(param_1 + 0x701) = uVar1;
  return;
}



// FUNCTION 144b76d90 FUN_144b76d90 body=214 status=ok
// SIG undefined FUN_144b76d90(void)

void FUN_144b76d90(longlong param_1,uint param_2,int param_3)

{
  byte bVar1;
  char *_Name;
  
  *(byte *)(param_1 + 0x6dd) = (byte)(param_2 >> 1) & 1;
  if ((param_2 & 8) == 0) {
    if ((param_2 & 0x10) == 0) {
      if ((param_2 & 0x20) == 0) goto LAB_144b76de7;
      _Name = "JSIMD_FORCESSE2";
    }
    else {
      _Name = "JSIMD_FORCESSE";
    }
  }
  else {
    _Name = "JSIMD_FORCEMMX";
  }
  _putenv_s(_Name,"1");
LAB_144b76de7:
  *(byte *)(param_1 + 0x6f8) = (byte)(param_2 >> 8) & 1;
  *(byte *)(param_1 + 0x6de) = (byte)(param_2 >> 10) & 1;
  if (param_3 == 1) {
    if ((*(int *)(param_1 + 0x6e0) < 0x60) && ((param_2 >> 0xc & 1) == 0)) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
  }
  else {
    bVar1 = (byte)(param_2 >> 0xb) & 1;
  }
  *(byte *)(param_1 + 0x6f9) = bVar1;
  *(byte *)(param_1 + 0x609) = (byte)(param_2 >> 0xd) & 1;
  *(byte *)(param_1 + 0x6fb) = (byte)(param_2 >> 0xe) & 1;
  if ((param_2 >> 0xf & 1) != 0) {
    *(undefined4 *)(param_1 + 0x6fc) = 500;
  }
  return;
}



// FUNCTION 144b76e70 FUN_144b76e70 body=10 status=ok
// SIG undefined FUN_144b76e70(void)

uint FUN_144b76e70(longlong param_1)

{
  return *(uint *)(param_1 + 0x10) >> 10 & 1;
}



// FUNCTION 144b76e80 FUN_144b76e80 body=1765 status=ok
// SIG undefined FUN_144b76e80(void)

longlong *
FUN_144b76e80(char *param_1,char *param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6,longlong param_7,longlong param_8,code *param_9,undefined *param_10)

{
  char *pcVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *_Memory;
  ulonglong uVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  char *pcVar12;
  undefined2 uVar13;
  longlong local_res10;
  longlong lVar11;
  
  cVar2 = *param_2;
  if (cVar2 == 'a') {
LAB_144b76eea:
    uVar8 = 0x102;
    if (cVar2 == 'w') {
      uVar8 = 0x302;
    }
  }
  else {
    if (cVar2 != 'r') {
      if (cVar2 != 'w') {
        FUN_144e92fd0(0,"TIFFClientOpen","\"%s\": Bad mode",param_2);
        return (longlong *)0x0;
      }
      goto LAB_144b76eea;
    }
    uVar8 = 2;
    if (param_2[1] != '+') {
      uVar8 = 0;
    }
  }
  lVar10 = -1;
  do {
    lVar11 = lVar10;
    lVar10 = lVar11 + 1;
  } while (param_1[lVar10] != '\0');
  _Memory = (longlong *)FUN_144e92f50(lVar11 + 0x4ba);
  if (_Memory == (longlong *)0x0) {
    FUN_144e92fd0(param_3,"TIFFClientOpen","%s: Out of memory (TIFF structure)",param_1);
    return (longlong *)0x0;
  }
  FUN_144e92f90(_Memory,0,0x4b8);
  *_Memory = (longlong)(_Memory + 0x97);
  pcVar12 = param_1;
  do {
    cVar2 = *pcVar12;
    pcVar12[(longlong)_Memory + (0x4b8 - (longlong)param_1)] = cVar2;
    pcVar12 = pcVar12 + 1;
  } while (cVar2 != '\0');
  _Memory[0x61] = 0;
  *(undefined4 *)((longlong)_Memory + 0x304) = 0xffffffff;
  *(uint *)((longlong)_Memory + 0xc) = uVar8 & 0xfffffcff;
  *(undefined2 *)(_Memory + 0x60) = 0xffff;
  *(undefined4 *)((longlong)_Memory + 0x2fc) = 0xffffffff;
  _Memory[0x87] = param_3;
  if ((((param_4 == 0) || (param_5 == 0)) || (param_6 == 0)) || ((param_7 == 0 || (param_8 == 0))))
  {
    FUN_144e92fd0(param_3,"TIFFClientOpen","One of the client procedures is NULL pointer.");
    free(_Memory);
    return (longlong *)0x0;
  }
  _Memory[0x89] = param_5;
  _Memory[0x8a] = param_6;
  _Memory[0x88] = param_4;
  if (param_9 == (code *)0x0) {
    param_9 = FUN_144b775e0;
  }
  _Memory[0x8b] = param_7;
  _Memory[0x8c] = param_8;
  _Memory[0x85] = (longlong)param_9;
  if (param_10 == (undefined *)0x0) {
    param_10 = &DAT_144b775f0;
  }
  _Memory[0x86] = (longlong)param_10;
  FUN_144e93410(_Memory);
  uVar4 = 1;
  *(undefined4 *)(_Memory + 2) = 1;
  if (uVar8 == 0) {
    uVar4 = 0x801;
LAB_144b77074:
    *(undefined4 *)(_Memory + 2) = uVar4;
  }
  else if (uVar8 == 2) goto LAB_144b77074;
  cVar2 = *param_2;
  pcVar12 = param_2;
  while (cVar2 != '\0') {
    switch(cVar2) {
    case '8':
      if ((uVar8 >> 8 & 1) != 0) {
        *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) | 0x80000;
      }
      break;
    case 'B':
      *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) & 0xfffffffd;
      *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) | 1;
      break;
    case 'C':
      if (uVar8 == 0) {
        *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) | 0x8000;
      }
      break;
    case 'D':
      *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) | 0x1000000;
      break;
    case 'H':
    case 'L':
      *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) & 0xfffffffe;
      *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) | 2;
      break;
    case 'M':
      if (uVar8 == 0) {
        *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) | 0x800;
      }
      break;
    case 'O':
      if (uVar8 == 0) {
        *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) | 0x3000000;
      }
      break;
    case 'b':
      if ((uVar8 >> 8 & 1) != 0) {
        *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) | 0x80;
      }
      break;
    case 'c':
      if (uVar8 == 0) {
        *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) & 0xffff7fff;
      }
      break;
    case 'h':
      *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) | 0x10000;
      break;
    case 'm':
      if (uVar8 == 0) {
        *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) & 0xfffff7ff;
      }
    }
    pcVar1 = pcVar12 + 1;
    pcVar12 = pcVar12 + 1;
    cVar2 = *pcVar1;
  }
  uVar13 = 8;
  if ((uVar8 >> 9 != 0) ||
     (lVar10 = (*(code *)_Memory[0x88])(_Memory[0x87],_Memory + 0x5d,8), lVar10 != 8)) {
    if (*(int *)((longlong)_Memory + 0xc) == 0) {
LAB_144b773e7:
      FUN_144e92fd0(_Memory[0x87],param_1,"Cannot read TIFF header");
      *(undefined4 *)((longlong)_Memory + 0xc) = 0;
      FUN_144b77600(_Memory);
      return (longlong *)0x0;
    }
    uVar7 = 0x4949;
    uVar8 = *(uint *)(_Memory + 2) & 0x80;
    if (uVar8 != 0) {
      uVar7 = 0x4d4d;
    }
    *(undefined2 *)(_Memory + 0x5d) = uVar7;
    if ((*(uint *)(_Memory + 2) & 0x80000) == 0) {
      *(undefined4 *)((longlong)_Memory + 0x2ec) = 0;
      *(undefined2 *)((longlong)_Memory + 0x2ea) = 0x2a;
      if (uVar8 != 0) {
        FUN_144e93040();
      }
    }
    else {
      *(undefined4 *)((longlong)_Memory + 0x2ec) = 8;
      *(undefined2 *)((longlong)_Memory + 0x2ea) = 0x2b;
      _Memory[0x5e] = 0;
      if (uVar8 != 0) {
        FUN_144e93040();
        FUN_144e93040((longlong)_Memory + 0x2ec);
      }
      uVar13 = 0x10;
    }
    *(undefined2 *)(_Memory + 0x5f) = uVar13;
    (*(code *)_Memory[0x8a])(_Memory[0x87],0,0);
    uVar6 = (*(code *)_Memory[0x89])(_Memory[0x87],_Memory + 0x5d,(short)_Memory[0x5f]);
    if (uVar6 != *(ushort *)(_Memory + 0x5f)) {
      FUN_144e92fd0(_Memory[0x87],param_1,"Error writing TIFF header");
      *(undefined4 *)((longlong)_Memory + 0xc) = 0;
      FUN_144b77600(_Memory);
      return (longlong *)0x0;
    }
    if ((short)_Memory[0x5d] == 0x4d4d) {
      *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) | 0x80;
    }
    iVar5 = FUN_144b78240(_Memory);
    if (iVar5 != 0) {
      _Memory[3] = 0;
      _Memory[5] = 0;
      *(undefined4 *)(_Memory + 6) = 0;
      return _Memory;
    }
    goto LAB_144b77509;
  }
  sVar3 = (short)_Memory[0x5d];
  if (sVar3 == 0x4d4d) {
    *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) | 0x80;
  }
  else if ((sVar3 != 0x4949) && (sVar3 != 0x5045)) {
    FUN_144e92fd0(_Memory[0x87],param_1,"Not a TIFF or MDI file, bad magic number %d (0x%x)",sVar3,
                  sVar3);
    *(undefined4 *)((longlong)_Memory + 0xc) = 0;
    FUN_144b77600(_Memory);
    return (longlong *)0x0;
  }
  if ((char)(int)_Memory[2] < '\0') {
    FUN_144e93040((longlong)_Memory + 0x2ea);
  }
  sVar3 = *(short *)((longlong)_Memory + 0x2ea);
  if (sVar3 == 0x2a) {
    uVar8 = *(uint *)(_Memory + 2);
    if ((char)uVar8 < '\0') {
      FUN_144e93050((longlong)_Memory + 0x2ec);
      uVar8 = *(uint *)(_Memory + 2);
    }
    uVar13 = 8;
  }
  else {
    if (sVar3 != 0x2b) {
      FUN_144e92fd0(_Memory[0x87],param_1,"Not a TIFF file, bad version number %d (0x%x)",sVar3,
                    sVar3);
      *(undefined4 *)((longlong)_Memory + 0xc) = 0;
      FUN_144b77600(_Memory);
      return (longlong *)0x0;
    }
    lVar10 = (*(code *)_Memory[0x88])(_Memory[0x87],_Memory + 0x5e,8);
    if (lVar10 != 8) goto LAB_144b773e7;
    if ((*(byte *)(_Memory + 2) & 0x80) != 0) {
      FUN_144e93040((longlong)_Memory + 0x2ec);
      FUN_144e93070(_Memory + 0x5e);
    }
    sVar3 = *(short *)((longlong)_Memory + 0x2ec);
    if (sVar3 != 8) {
      FUN_144e92fd0(_Memory[0x87],param_1,"Not a TIFF file, bad BigTIFF offsetsize %d (0x%x)",sVar3,
                    sVar3);
      *(undefined4 *)((longlong)_Memory + 0xc) = 0;
      FUN_144b77600(_Memory);
      return (longlong *)0x0;
    }
    sVar3 = *(short *)((longlong)_Memory + 0x2ee);
    if (sVar3 != 0) {
      FUN_144e92fd0(_Memory[0x87],param_1,"Not a TIFF file, bad BigTIFF unused %d (0x%x)",sVar3,
                    sVar3);
      *(undefined4 *)((longlong)_Memory + 0xc) = 0;
      FUN_144b77600(_Memory);
      return (longlong *)0x0;
    }
    uVar13 = 0x10;
    uVar8 = *(uint *)(_Memory + 2) | 0x80000;
  }
  *(undefined2 *)(_Memory + 0x5f) = uVar13;
  uVar9 = uVar8 | 0x200;
  *(uint *)(_Memory + 2) = uVar9;
  _Memory[0x7d] = 0;
  _Memory[0x81] = 0;
  _Memory[0x7e] = 0;
  _Memory[0x7f] = 0;
  _Memory[0x80] = 0;
  if (*param_2 == 'a') {
    iVar5 = FUN_144b78240(_Memory);
    if (iVar5 != 0) {
      return _Memory;
    }
    goto LAB_144b77509;
  }
  if (*param_2 != 'r') goto LAB_144b77509;
  if ((uVar8 & 0x80000) == 0) {
    uVar6 = (ulonglong)*(uint *)((longlong)_Memory + 0x2ec);
  }
  else {
    uVar6 = _Memory[0x5e];
  }
  _Memory[4] = uVar6;
  if ((uVar8 & 0x800) != 0) {
    if ((code *)_Memory[0x85] != FUN_144b775e0) {
      iVar5 = (*(code *)_Memory[0x85])(_Memory[0x87],_Memory + 0x83,&local_res10);
      uVar9 = *(uint *)(_Memory + 2);
      if (iVar5 != 0) {
        _Memory[0x84] = local_res10;
        goto LAB_144b7739c;
      }
    }
    uVar9 = uVar9 & 0xfffff7ff;
    *(uint *)(_Memory + 2) = uVar9;
  }
LAB_144b7739c:
  if ((uVar9 >> 0x10 & 1) != 0) {
    return _Memory;
  }
  iVar5 = FUN_144b7b190(_Memory);
  if (iVar5 != 0) {
    *(uint *)(_Memory + 2) = *(uint *)(_Memory + 2) | 0x10;
    _Memory[0x82] = -1;
    return _Memory;
  }
LAB_144b77509:
  *(undefined4 *)((longlong)_Memory + 0xc) = 0;
  FUN_144b77600(_Memory);
  return (longlong *)0x0;
}



// FUNCTION 144b775d0 FUN_144b775d0 body=4 status=ok
// SIG undefined FUN_144b775d0(void)

undefined8 FUN_144b775d0(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 144b775e0 FUN_144b775e0 body=3 status=ok
// SIG undefined FUN_144b775e0(void)

undefined8 FUN_144b775e0(void)

{
  return 0;
}



// FUNCTION 144b77600 FUN_144b77600 body=391 status=ok
// SIG undefined FUN_144b77600(void)

void FUN_144b77600(void *param_1)

{
  longlong lVar1;
  undefined8 *_Memory;
  void *_Memory_00;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144e937d0();
  }
  (**(code **)((longlong)param_1 + 0x3b8))(param_1);
  FUN_144b77f10(param_1);
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x28));
  }
  lVar1 = *(longlong *)((longlong)param_1 + 0x4a0);
  while (lVar1 != 0) {
    _Memory = *(undefined8 **)((longlong)param_1 + 0x4a0);
    *(undefined8 *)((longlong)param_1 + 0x4a0) = *_Memory;
    free((void *)_Memory[2]);
    free(_Memory);
    lVar1 = *(longlong *)((longlong)param_1 + 0x4a0);
  }
  if ((*(void **)((longlong)param_1 + 1000) != (void *)0x0) &&
     ((*(uint *)((longlong)param_1 + 0x10) & 0x200) != 0)) {
    free(*(void **)((longlong)param_1 + 1000));
  }
  if ((*(uint *)((longlong)param_1 + 0x10) & 0x800) != 0) {
    (**(code **)((longlong)param_1 + 0x430))
              (*(undefined8 *)((longlong)param_1 + 0x438),*(undefined8 *)((longlong)param_1 + 0x418)
               ,*(undefined8 *)((longlong)param_1 + 0x420));
  }
  uVar4 = 0;
  if ((*(longlong *)((longlong)param_1 + 0x470) != 0) &&
     (uVar3 = uVar4, *(longlong *)((longlong)param_1 + 0x478) != 0)) {
    do {
      _Memory_00 = *(void **)(*(longlong *)((longlong)param_1 + 0x470) + uVar3 * 8);
      if ((*(short *)((longlong)_Memory_00 + 0x18) == 0x41) &&
         (iVar2 = strncmp("Tag ",*(char **)((longlong)_Memory_00 + 0x20),4), iVar2 == 0)) {
        free(*(void **)((longlong)_Memory_00 + 0x20));
        free(_Memory_00);
      }
      uVar3 = (ulonglong)((int)uVar3 + 1);
    } while (uVar3 < *(ulonglong *)((longlong)param_1 + 0x478));
    free(*(void **)((longlong)param_1 + 0x470));
  }
  if (*(longlong *)((longlong)param_1 + 0x4b0) != 0) {
    do {
      if (*(int *)(*(longlong *)((longlong)param_1 + 0x4a8) + 4 + uVar4 * 0x18) != 0) {
        free(*(void **)(*(longlong *)((longlong)param_1 + 0x4a8) + 0x10 + uVar4 * 0x18));
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < *(ulonglong *)((longlong)param_1 + 0x4b0));
    free(*(void **)((longlong)param_1 + 0x4a8));
  }
  free(param_1);
  return;
}



// FUNCTION 144b77790 FUN_144b77790 body=420 status=ok
// SIG undefined FUN_144b77790(void)

void FUN_144b77790(void *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *_Memory;
  void *_Memory_00;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  UNRECOVERED_JUMPTABLE = *(code **)((longlong)param_1 + 0x458);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x438);
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144e937d0();
  }
  (**(code **)((longlong)param_1 + 0x3b8))(param_1);
  FUN_144b77f10(param_1);
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    free(*(void **)((longlong)param_1 + 0x28));
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x4a0);
  while (lVar2 != 0) {
    _Memory = *(undefined8 **)((longlong)param_1 + 0x4a0);
    *(undefined8 *)((longlong)param_1 + 0x4a0) = *_Memory;
    free((void *)_Memory[2]);
    free(_Memory);
    lVar2 = *(longlong *)((longlong)param_1 + 0x4a0);
  }
  if ((*(void **)((longlong)param_1 + 1000) != (void *)0x0) &&
     ((*(uint *)((longlong)param_1 + 0x10) & 0x200) != 0)) {
    free(*(void **)((longlong)param_1 + 1000));
  }
  if ((*(uint *)((longlong)param_1 + 0x10) & 0x800) != 0) {
    (**(code **)((longlong)param_1 + 0x430))
              (*(undefined8 *)((longlong)param_1 + 0x438),*(undefined8 *)((longlong)param_1 + 0x418)
               ,*(undefined8 *)((longlong)param_1 + 0x420));
  }
  uVar5 = 0;
  if ((*(longlong *)((longlong)param_1 + 0x470) != 0) &&
     (uVar4 = uVar5, *(longlong *)((longlong)param_1 + 0x478) != 0)) {
    do {
      _Memory_00 = *(void **)(*(longlong *)((longlong)param_1 + 0x470) + uVar4 * 8);
      if ((*(short *)((longlong)_Memory_00 + 0x18) == 0x41) &&
         (iVar3 = strncmp("Tag ",*(char **)((longlong)_Memory_00 + 0x20),4), iVar3 == 0)) {
        free(*(void **)((longlong)_Memory_00 + 0x20));
        free(_Memory_00);
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
    } while (uVar4 < *(ulonglong *)((longlong)param_1 + 0x478));
    free(*(void **)((longlong)param_1 + 0x470));
  }
  if (*(longlong *)((longlong)param_1 + 0x4b0) != 0) {
    do {
      if (*(int *)(*(longlong *)((longlong)param_1 + 0x4a8) + 4 + uVar5 * 0x18) != 0) {
        free(*(void **)(*(longlong *)((longlong)param_1 + 0x4a8) + 0x10 + uVar5 * 0x18));
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
    } while (uVar5 < *(ulonglong *)((longlong)param_1 + 0x4b0));
    free(*(void **)((longlong)param_1 + 0x4a8));
  }
  free(param_1);
                    /* WARNING: Could not recover jumptable at 0x000144b77931. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 144b77940 FUN_144b77940 body=341 status=ok
// SIG undefined FUN_144b77940(void)

ulonglong FUN_144b77940(longlong param_1)

{
  undefined2 uVar1;
  short sVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 local_res8;
  
  if (*(short *)(param_1 + 0x9a) == 1) {
    if (((*(short *)(param_1 + 0x6a) != 6) || (*(short *)(param_1 + 0x72) != 3)) ||
       ((*(uint *)(param_1 + 0x10) & 0x4000) != 0)) {
      uVar5 = FUN_144b7a850(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined2 *)(param_1 + 0x72),
                            "TIFFScanlineSize64");
      uVar1 = *(undefined2 *)(param_1 + 100);
      goto LAB_144b77a5a;
    }
    FUN_144b7a120(param_1,0x212,&local_res8,(longlong)&local_res8 + 2);
    sVar2 = (short)local_res8;
    if ((((sVar2 - 1U & 0xfffc) != 0) || (sVar2 == 3)) ||
       (((local_res8._2_2_ - 1 & 0xfffc) != 0 || (local_res8._2_2_ == 3)))) {
      pcVar7 = "Invalid YCbCr subsampling";
      goto LAB_144b77a7a;
    }
    uVar6 = local_res8 & 0xffff;
    if (*(uint *)(param_1 + 0x48) < -uVar6) {
      uVar6 = ((uVar6 - 1) + *(uint *)(param_1 + 0x48)) / uVar6;
    }
    else {
      uVar6 = 0;
    }
    uVar3 = FUN_144b7a850(param_1,uVar6,local_res8._2_2_ * sVar2 + 2,"TIFFScanlineSize64");
    lVar4 = FUN_144b7a850(param_1,uVar3,*(undefined2 *)(param_1 + 100),"TIFFScanlineSize64");
    uVar5 = (lVar4 + 7U >> 3) / (ulonglong)local_res8._2_2_;
  }
  else {
    uVar1 = *(undefined2 *)(param_1 + 100);
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
LAB_144b77a5a:
    lVar4 = FUN_144b7a850(param_1,uVar5,uVar1,"TIFFScanlineSize64");
    uVar5 = lVar4 + 7U >> 3;
  }
  if (uVar5 != 0) {
    return uVar5;
  }
  pcVar7 = "Computed scanline size is zero";
LAB_144b77a7a:
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFScanlineSize64",pcVar7);
  return 0;
}



// FUNCTION 144b77aa0 FUN_144b77aa0 body=37 status=ok
// SIG undefined FUN_144b77aa0(void)

void FUN_144b77aa0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b77940();
  FUN_144b7a920(param_1,uVar1,"TIFFScanlineSize");
  return;
}



// FUNCTION 144b77ad0 FUN_144b77ad0 body=15 status=ok
// SIG undefined FUN_144b77ad0(void)

void FUN_144b77ad0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x4c);
  if (*(uint *)(param_1 + 0x74) <= *(uint *)(param_1 + 0x4c)) {
    uVar1 = *(uint *)(param_1 + 0x74);
  }
  FUN_144b77b10(param_1,uVar1);
  return;
}



// FUNCTION 144b77ae0 FUN_144b77ae0 body=47 status=ok
// SIG undefined FUN_144b77ae0(void)

void FUN_144b77ae0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x4c);
  if (*(uint *)(param_1 + 0x74) <= *(uint *)(param_1 + 0x4c)) {
    uVar1 = *(uint *)(param_1 + 0x74);
  }
  uVar2 = FUN_144b77b10(param_1,uVar1);
  FUN_144b7a920(param_1,uVar2,"TIFFStripSize");
  return;
}



// FUNCTION 144b77b10 FUN_144b77b10 body=480 status=ok
// SIG undefined FUN_144b77b10(void)

undefined8 FUN_144b77b10(longlong param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 local_res10;
  
  if (param_2 == 0xffffffff) {
    param_2 = *(uint *)(param_1 + 0x4c);
  }
  if (((*(short *)(param_1 + 0x9a) != 1) || (*(short *)(param_1 + 0x6a) != 6)) ||
     ((*(uint *)(param_1 + 0x10) & 0x4000) != 0)) {
    uVar4 = FUN_144b77940();
    uVar4 = FUN_144b7a850(param_1,param_2,uVar4,"TIFFVStripSize64");
    return uVar4;
  }
  if (*(short *)(param_1 + 0x72) != 3) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFVStripSize64",
                  "Invalid td_samplesperpixel value");
    return 0;
  }
  FUN_144b7a120(param_1,0x212,&local_res10,(longlong)&local_res10 + 2);
  uVar3 = (uint)local_res10._2_2_;
  sVar1 = (short)local_res10;
  if ((((sVar1 - 1U & 0xfffc) == 0) && (sVar1 != 3)) &&
     (((local_res10._2_2_ - 1 & 0xfffc) == 0 && (local_res10._2_2_ != 3)))) {
    uVar6 = local_res10 & 0xffff;
    uVar2 = 0;
    if (*(uint *)(param_1 + 0x48) < -uVar6) {
      uVar5 = (ulonglong)((uVar6 - 1) + *(uint *)(param_1 + 0x48)) / (ulonglong)uVar6;
    }
    else {
      uVar5 = 0;
    }
    if (param_2 < -uVar3) {
      uVar2 = ((uVar3 - 1) + param_2) / uVar3;
    }
    uVar4 = FUN_144b7a850(param_1,uVar5,local_res10._2_2_ * sVar1 + 2,"TIFFVStripSize64");
    uVar3 = FUN_144b7a850(param_1,uVar4,*(undefined2 *)(param_1 + 100),"TIFFVStripSize64");
    if ((uVar3 & 7) == 0) {
      uVar5 = FUN_144b7a850(param_1,uVar4,*(undefined2 *)(param_1 + 100),"TIFFVStripSize64");
      uVar5 = uVar5 >> 3;
    }
    else {
      uVar5 = FUN_144b7a850(param_1,uVar4,*(undefined2 *)(param_1 + 100),"TIFFVStripSize64");
      uVar5 = (uVar5 >> 3) + 1;
    }
    uVar4 = FUN_144b7a850(param_1,uVar5,uVar2,"TIFFVStripSize64");
    return uVar4;
  }
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFVStripSize64",
                "Invalid YCbCr subsampling (%dx%d)",local_res10 & 0xffff,uVar3);
  return 0;
}



// FUNCTION 144b77cf0 FUN_144b77cf0 body=37 status=ok
// SIG undefined FUN_144b77cf0(void)

void FUN_144b77cf0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b77b10();
  FUN_144b7a920(param_1,uVar1,"TIFFVStripSize");
  return;
}



// FUNCTION 144b77d20 FUN_144b77d20 body=91 status=ok
// SIG undefined FUN_144b77d20(void)

ulonglong FUN_144b77d20(longlong param_1,uint param_2,ushort param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2 / (ulonglong)*(uint *)(param_1 + 0x74);
  if (*(short *)(param_1 + 0x9a) == 2) {
    if (*(ushort *)(param_1 + 0x72) <= param_3) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFComputeStrip",
                    "%lu: Sample out of range, max %lu",param_3,*(ushort *)(param_1 + 0x72));
      return 0;
    }
    uVar1 = (ulonglong)((int)uVar1 + (uint)param_3 * *(int *)(param_1 + 0xd0));
  }
  return uVar1;
}



// FUNCTION 144b77d80 FUN_144b77d80 body=74 status=ok
// SIG undefined FUN_144b77d80(void)

void FUN_144b77d80(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x74);
  if (uVar1 == 0xffffffff) {
    uVar1 = 1;
  }
  else if (*(uint *)(param_1 + 0x4c) < -uVar1) {
    uVar1 = ((*(uint *)(param_1 + 0x4c) - 1) + uVar1) / uVar1;
  }
  else {
    uVar1 = 0;
  }
  if (*(short *)(param_1 + 0x9a) == 2) {
    FUN_144b7a800(param_1,uVar1,*(undefined2 *)(param_1 + 0x72),"TIFFNumberOfStrips");
    return;
  }
  return;
}



// FUNCTION 144b77dd0 FUN_144b77dd0 body=71 status=ok
// SIG undefined FUN_144b77dd0(void)

ulonglong FUN_144b77dd0(undefined8 param_1,ulonglong param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  
  if ((int)param_2 < 1) {
    uVar2 = FUN_144b77940();
    param_2 = 0x2000;
    if (uVar2 != 0) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      uVar2 = SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x2000)) / auVar1,0);
      if (uVar2 == 0) {
        return 1;
      }
      if (0xffffffff < uVar2) {
        uVar2 = 0xffffffff;
      }
      return uVar2;
    }
  }
  else {
    param_2 = param_2 & 0xffffffff;
  }
  return param_2;
}



// FUNCTION 144b77e20 FUN_144b77e20 body=112 status=ok
// SIG undefined FUN_144b77e20(void)

undefined8 FUN_144b77e20(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  lVar1 = FUN_144e939e0(param_1,param_2,0);
  if ((lVar1 != 0) &&
     ((0xffff < (uint)param_2 ||
      ((*(uint *)(param_1 + 0x38 + (ulonglong)(*(ushort *)(lVar1 + 0x18) >> 5) * 4) >>
        (*(ushort *)(lVar1 + 0x18) & 0x1f) & 1) != 0)))) {
    uVar2 = (**(code **)(param_1 + 0x490))(param_1,param_2 & 0xffffffff,&local_res18);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144b77e90 FUN_144b77e90 body=123 status=ok
// SIG undefined FUN_144b77e90(void)

undefined8 FUN_144b77e90(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144e939e0(param_1,param_2,0);
  if ((lVar1 != 0) &&
     ((0xffff < (uint)param_2 ||
      ((*(uint *)(param_1 + 0x38 + (ulonglong)(*(ushort *)(lVar1 + 0x18) >> 5) * 4) >>
        (*(ushort *)(lVar1 + 0x18) & 0x1f) & 1) != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x000144b77ef6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 0x490))(param_1,param_2 & 0xffffffff,param_3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 144b77f10 FUN_144b77f10 body=538 status=ok
// SIG undefined FUN_144b77f10(void)

void FUN_144b77f10(longlong param_1)

{
  void *_Memory;
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  FUN_144e92f90(param_1 + 0x38,0,4);
  uVar1 = 0;
  if (*(void **)(param_1 + 0x80) != (void *)0x0) {
    free(*(void **)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
    free(*(void **)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(void **)(param_1 + 0xa8) != (void *)0x0) {
    free(*(void **)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(void **)(param_1 + 0xb0) != (void *)0x0) {
    free(*(void **)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(void **)(param_1 + 0xb8) != (void *)0x0) {
    free(*(void **)(param_1 + 0xb8));
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(void **)(param_1 + 200) != (void *)0x0) {
    free(*(void **)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
  }
  if (*(void **)(param_1 + 0x138) != (void *)0x0) {
    free(*(void **)(param_1 + 0x138));
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  if (*(void **)(param_1 + 0x170) != (void *)0x0) {
    free(*(void **)(param_1 + 0x170));
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  if (*(void **)(param_1 + 0x160) != (void *)0x0) {
    free(*(void **)(param_1 + 0x160));
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  if (*(void **)(param_1 + 0x148) != (void *)0x0) {
    free(*(void **)(param_1 + 0x148));
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  if (*(void **)(param_1 + 0x150) != (void *)0x0) {
    free(*(void **)(param_1 + 0x150));
    *(undefined8 *)(param_1 + 0x150) = 0;
  }
  if (*(void **)(param_1 + 0x158) != (void *)0x0) {
    free(*(void **)(param_1 + 0x158));
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  if (*(void **)(param_1 + 0xd8) != (void *)0x0) {
    free(*(void **)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
    free(*(void **)(param_1 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffe7f;
  uVar3 = uVar1;
  if (0 < *(int *)(param_1 + 0x178)) {
    do {
      _Memory = *(void **)(uVar1 + 0x10 + *(longlong *)(param_1 + 0x180));
      if (_Memory != (void *)0x0) {
        free(_Memory);
      }
      uVar2 = (int)uVar3 + 1;
      uVar1 = uVar1 + 0x18;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < *(int *)(param_1 + 0x178));
  }
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(void **)(param_1 + 0x180) != (void *)0x0) {
    free(*(void **)(param_1 + 0x180));
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  FUN_144e92f90(param_1 + 0xf0,0,0x20);
  FUN_144e92f90(param_1 + 0x110,0,0x20);
  return;
}



// FUNCTION 144b78130 FUN_144b78130 body=57 status=ok
// SIG undefined FUN_144b78130(void)

void FUN_144b78130(longlong param_1)

{
  FUN_144b78240();
  *(undefined4 *)(param_1 + 0x2fc) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0xffffffff;
  return;
}



// FUNCTION 144b78170 FUN_144b78170 body=206 status=ok
// SIG undefined FUN_144b78170(void)

undefined8
FUN_144b78170(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  
  uVar4 = (uint)param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  lVar1 = FUN_144e939e0(param_1,param_2,0);
  if (lVar1 == 0) {
    pcVar2 = "";
    if (0xffff < uVar4) {
      pcVar2 = "pseudo-";
    }
    FUN_144e92fd0(param_1[0x87],"TIFFSetField","%s: Unknown %stag %u",*param_1,pcVar2,uVar4);
    return 0;
  }
  if (((uVar4 != 0x101) && ((*(byte *)(param_1 + 2) & 0x40) != 0)) &&
     (*(char *)(lVar1 + 0x1a) == '\0')) {
    FUN_144e92fd0(param_1[0x87],"TIFFSetField","%s: Cannot modify tag \"%s\" while writing",*param_1
                  ,*(undefined8 *)(lVar1 + 0x20));
    return 0;
  }
  uVar3 = (*(code *)param_1[0x91])(param_1,param_2 & 0xffffffff,&local_res18);
  return uVar3;
}



// FUNCTION 144b78240 FUN_144b78240 body=337 status=ok
// SIG undefined FUN_144b78240(void)

undefined8 FUN_144b78240(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144e93ba0();
  FUN_144e93bb0(param_1,uVar1);
  FUN_144e92f90(param_1 + 0x38,0,0x158);
  *(undefined4 *)(param_1 + 0x6c) = 0x10001;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 100) = 0x10001;
  *(undefined4 *)(param_1 + 0x70) = 0x10001;
  *(undefined2 *)(param_1 + 0x98) = 2;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x140) = 0x20002;
  *(undefined2 *)(param_1 + 0x144) = 1;
  *(undefined **)(param_1 + 0x468) = &DAT_144b83080;
  *(code **)(param_1 + 0x488) = FUN_144b784a0;
  *(code **)(param_1 + 0x490) = FUN_144b796f0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined8 *)(param_1 + 0x498) = 0;
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x4a8) + 4 + uVar2 * 0x18) != 0) {
        free(*(void **)(*(longlong *)(param_1 + 0x4a8) + 0x10 + uVar2 * 0x18));
      }
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < *(ulonglong *)(param_1 + 0x4b0));
    free(*(void **)(param_1 + 0x4a8));
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    *(undefined8 *)(param_1 + 0x4a8) = 0;
  }
  if (DAT_14c77eff0 != (code *)0x0) {
    (*DAT_14c77eff0)(param_1);
  }
  FUN_144b78170(param_1,0x103,1);
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffbf7;
  return 1;
}



// FUNCTION 144b783a0 FUN_144b783a0 body=120 status=ok
// SIG undefined FUN_144b783a0(void)

void FUN_144b783a0(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  if (param_2 != 0) {
    lVar1 = FUN_144b7a8a0(0,param_3,1);
    if (lVar1 != 0) {
      lVar2 = FUN_144e92f50(lVar1);
      *param_1 = lVar2;
    }
    if (*param_1 != 0) {
      FUN_144e92fa0(*param_1,param_2,lVar1);
    }
  }
  return;
}



// FUNCTION 144b78420 FUN_144b78420 body=120 status=ok
// SIG undefined FUN_144b78420(void)

void FUN_144b78420(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((void *)*param_1 != (void *)0x0) {
    free((void *)*param_1);
    *param_1 = 0;
  }
  if (param_2 != 0) {
    lVar1 = FUN_144b7a8a0(0,param_3,2);
    if (lVar1 != 0) {
      lVar2 = FUN_144e92f50(lVar1);
      *param_1 = lVar2;
    }
    if (*param_1 != 0) {
      FUN_144e92fa0(*param_1,param_2,lVar1);
    }
  }
  return;
}



// FUNCTION 144b784a0 FUN_144b784a0 body=4394 status=ok
// SIG undefined FUN_144b784a0(void)

uint FUN_144b784a0(undefined8 *param_1,ulonglong param_2,double *param_3)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  ushort *puVar9;
  longlong lVar10;
  void *pvVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  double dVar24;
  ushort uVar25;
  char *pcVar26;
  longlong lVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined8 local_res8;
  uint local_res10;
  undefined8 in_stack_ffffffffffffff98;
  undefined8 in_stack_ffffffffffffffa0;
  ulonglong uVar17;
  
  uVar29 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uVar28 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  uVar20 = (uint)param_2;
  uVar19 = param_2 & 0xffffffff;
  uVar16 = 1;
  local_res10 = uVar20;
  piVar8 = (int *)FUN_144e939e0(param_1,param_2,0);
  if (piVar8 == (int *)0x0) {
    return 0;
  }
  uVar17 = 0;
  uVar15 = 0;
  if ((short)piVar8[6] != 0x41) {
    uVar15 = uVar20;
  }
  uVar14 = 1;
  if (0x212 < uVar15) {
    if (uVar15 < 0x80e5) {
      if (uVar15 == 0x80e4) {
        uVar3 = *(ushort *)param_3;
        uVar20 = (uint)uVar3;
        if (uVar3 == 0) {
          *(undefined2 *)((longlong)param_1 + 0x66) = 4;
          goto LAB_144b793c0;
        }
        if (uVar3 == 1) {
          *(undefined2 *)((longlong)param_1 + 0x66) = 2;
          goto LAB_144b793c0;
        }
        if (uVar3 == 2) {
          *(undefined2 *)((longlong)param_1 + 0x66) = 1;
          goto LAB_144b793c0;
        }
        if (uVar3 == 3) {
          *(undefined2 *)((longlong)param_1 + 0x66) = 3;
          goto LAB_144b793c0;
        }
        goto LAB_144b79057;
      }
      if (uVar15 == 0x213) {
        *(undefined2 *)((longlong)param_1 + 0x144) = *(undefined2 *)param_3;
        goto LAB_144b793c0;
      }
      if (uVar15 == 0x214) {
        dVar24 = *param_3;
        if ((void *)param_1[0x2c] != (void *)0x0) {
          free((void *)param_1[0x2c]);
          param_1[0x2c] = 0;
        }
        if (dVar24 != 0.0) {
          lVar12 = FUN_144b7a8a0(0,6,4);
          if (lVar12 != 0) {
            uVar13 = FUN_144e92f50(lVar12);
            param_1[0x2c] = uVar13;
          }
          if (param_1[0x2c] != 0) {
            FUN_144e92fa0(param_1[0x2c],dVar24,lVar12);
          }
        }
        goto LAB_144b793c0;
      }
      if (uVar15 == 0x80e3) {
        sVar4 = *(short *)param_3;
        *(ushort *)((longlong)param_1 + 0xc4) = (ushort)(sVar4 != 0);
        if (sVar4 != 0) {
          local_res8 = (double)CONCAT62(local_res8._2_6_,1);
          if ((void *)param_1[0x19] != (void *)0x0) {
            free((void *)param_1[0x19]);
            param_1[0x19] = 0;
          }
          lVar12 = FUN_144b7a8a0(0,1,2);
          if (lVar12 != 0) {
            uVar13 = FUN_144e92f50(lVar12);
            param_1[0x19] = uVar13;
          }
          if (param_1[0x19] != 0) {
            FUN_144e92fa0(param_1[0x19],&local_res8,lVar12);
          }
        }
        goto LAB_144b793c0;
      }
    }
    else {
      if (uVar15 == 0x80e5) {
        *(undefined4 *)(param_1 + 10) = *(undefined4 *)param_3;
        goto LAB_144b793c0;
      }
      if (uVar15 == 0x80e6) {
        uVar20 = 0;
        if (*(int *)param_3 != 0) {
          *(int *)((longlong)param_1 + 0x5c) = *(int *)param_3;
          goto LAB_144b793c0;
        }
        goto LAB_144b7956e;
      }
      if (uVar15 == 0x1001b) {
        uVar20 = *(uint *)(param_1 + 2) | 0x400000;
        if (*(short *)param_3 != 1) {
          uVar20 = *(uint *)(param_1 + 2) & 0xffbfffff;
        }
        *(uint *)(param_1 + 2) = uVar20;
        goto LAB_144b793c0;
      }
    }
switchD_144b7853f_caseD_ff:
    if ((short)piVar8[6] != 0x41) {
      pcVar18 = "";
      if (0xffff < uVar20) {
        pcVar18 = "pseudo-";
      }
      FUN_144e92fd0(param_1[0x87],"_TIFFVSetField",
                    "%s: Invalid %stag \"%s\" (not supported by codec)",*param_1,pcVar18,
                    *(undefined8 *)(piVar8 + 8));
      return 0;
    }
    iVar6 = *(int *)(param_1 + 0x2f);
    if (0 < iVar6) {
      puVar22 = (undefined8 *)param_1[0x30];
      puVar21 = puVar22;
      do {
        if (*(uint *)*puVar21 == uVar20) {
          puVar21 = puVar22 + uVar17 * 3;
          if ((void *)puVar22[uVar17 * 3 + 2] == (void *)0x0) goto LAB_144b791cf;
          free((void *)puVar22[uVar17 * 3 + 2]);
          goto LAB_144b791c7;
        }
        uVar15 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar15;
        puVar21 = puVar21 + 3;
      } while ((int)uVar15 < iVar6);
    }
    *(int *)(param_1 + 0x2f) = iVar6 + 1;
    pvVar11 = realloc((void *)param_1[0x30],(longlong)(iVar6 + 1) * 0x18);
    if (pvVar11 == (void *)0x0) {
      pcVar18 = "%s: Failed to allocate space for list of custom values";
LAB_144b7916a:
      FUN_144e92fd0(param_1[0x87],"_TIFFVSetField",pcVar18,*param_1);
      return 0;
    }
    param_1[0x30] = pvVar11;
    puVar21 = (undefined8 *)((longlong)pvVar11 + (longlong)(*(int *)(param_1 + 0x2f) + -1) * 0x18);
    *puVar21 = piVar8;
    *(undefined4 *)(puVar21 + 1) = 0;
LAB_144b791c7:
    puVar21[2] = 0;
LAB_144b791cf:
    iVar6 = FUN_144e94430(piVar8[2]);
    if ((piVar8[2] == 5) || (piVar8[2] == 10)) {
      iVar6 = FUN_144e944b0(piVar8[4]);
    }
    if (iVar6 == 0) {
      FUN_144e92fd0(param_1[0x87],"_TIFFVSetField","%s: Bad field type %d for \"%s\"",*param_1,
                    CONCAT44(uVar28,piVar8[2]),*(undefined8 *)(piVar8 + 8));
      return 0;
    }
    if (piVar8[2] == 2) {
      if (*(char *)((longlong)piVar8 + 0x1b) == '\0') {
        dVar24 = *param_3;
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (*(char *)((longlong)dVar24 + lVar12) != '\0');
        iVar6 = (int)lVar12 + 1;
      }
      else {
        iVar6 = *(int *)param_3;
        dVar24 = param_3[1];
      }
      *(int *)(puVar21 + 1) = iVar6;
      if ((void *)puVar21[2] != (void *)0x0) {
        free((void *)puVar21[2]);
        puVar21[2] = 0;
      }
      if (dVar24 != 0.0) {
        lVar12 = FUN_144b7a8a0(0,iVar6,1,0);
        if (lVar12 != 0) {
          uVar13 = FUN_144e92f50(lVar12);
          puVar21[2] = uVar13;
        }
        if (puVar21[2] != 0) {
          FUN_144e92fa0(puVar21[2],dVar24,lVar12);
        }
      }
      goto LAB_144b793c0;
    }
    sVar4 = *(short *)((longlong)piVar8 + 6);
    uVar16 = (uint)sVar4;
    if (*(char *)((longlong)piVar8 + 0x1b) == '\0') {
      if ((sVar4 + 3U & 0xfffd) != 0) {
        if (sVar4 == -2) {
          uVar16 = (uint)*(ushort *)((longlong)param_1 + 0x72);
          *(uint *)(puVar21 + 1) = uVar16;
        }
        else {
          *(uint *)(puVar21 + 1) = uVar16;
        }
        goto LAB_144b792fc;
      }
      *(undefined4 *)(puVar21 + 1) = 1;
    }
    else {
      uVar16 = *(uint *)param_3;
      param_3 = param_3 + 1;
      *(uint *)(puVar21 + 1) = uVar16;
LAB_144b792fc:
      uVar14 = uVar16;
      if (uVar16 == 0) {
        FUN_144e92fd0(param_1[0x87],"_TIFFVSetField",
                      "%s: Null count for \"%s\" (type %d, writecount %d, passcount %d)",*param_1,
                      *(undefined8 *)(piVar8 + 8),CONCAT44(uVar29,piVar8[2]),
                      (int)*(short *)((longlong)piVar8 + 6),*(undefined1 *)((longlong)piVar8 + 0x1b)
                     );
        return 0;
      }
    }
    lVar27 = (longlong)iVar6;
    lVar12 = FUN_144b7a970(param_1,(longlong)(int)uVar14,lVar27,"custom tag binary object");
    puVar21[2] = lVar12;
    if (lVar12 == 0) {
      return 0;
    }
    if ((*piVar8 == 0x150) && (iVar7 = strcmp(*(char **)(piVar8 + 8),"DotRange"), iVar7 == 0)) {
      lVar27 = 4;
      local_res8._0_4_ = CONCAT22(*(undefined2 *)(param_3 + 1),*(undefined2 *)param_3);
LAB_144b793ae:
      puVar22 = &local_res8;
      goto LAB_144b793b5;
    }
    if (((*(char *)((longlong)piVar8 + 0x1b) != '\0') ||
        ((ushort)(*(short *)((longlong)piVar8 + 6) + 3U) < 3)) || (1 < *(int *)(puVar21 + 1))) {
      puVar22 = (undefined8 *)*param_3;
      lVar27 = (longlong)(iVar6 * *(int *)(puVar21 + 1));
      goto LAB_144b793b5;
    }
    switch(piVar8[2]) {
    case 1:
    case 6:
    case 7:
      puVar22 = &local_res8;
      local_res8 = (double)CONCAT71(local_res8._1_7_,*(undefined1 *)param_3);
      break;
    default:
      FUN_144e92f90(lVar12,0,lVar27);
      return 0;
    case 3:
    case 8:
      puVar22 = &local_res8;
      local_res8 = (double)CONCAT62(local_res8._2_6_,*(undefined2 *)param_3);
      break;
    case 4:
    case 9:
    case 0xd:
      local_res8 = (double)CONCAT44(local_res8._4_4_,*(undefined4 *)param_3);
      goto LAB_144b793ae;
    case 5:
    case 10:
      if (iVar6 == 8) {
        puVar22 = &local_res8;
        local_res8 = *param_3;
        break;
      }
      local_res8 = (double)CONCAT44(local_res8._4_4_,(float)*param_3);
      FUN_144e92fa0(lVar12,&local_res8,lVar27);
      if (iVar6 != 4) {
        FUN_144e92fd0(0,"TIFFLib: _TIFFVSetField()",
                      "Rational2Double: .set_field_type in not 4 but %d",iVar6);
      }
      goto LAB_144b793ba;
    case 0xb:
      uVar28 = FUN_144b7aab0(*param_3);
      local_res8 = (double)CONCAT44(local_res8._4_4_,uVar28);
      puVar22 = &local_res8;
      break;
    case 0xc:
      local_res8 = *param_3;
      puVar22 = &local_res8;
      break;
    case 0x10:
    case 0x11:
    case 0x12:
      local_res8 = *param_3;
      puVar22 = &local_res8;
    }
LAB_144b793b5:
    FUN_144e92fa0(lVar12,puVar22,lVar27);
LAB_144b793ba:
    uVar16 = 1;
    goto LAB_144b793c0;
  }
  if (uVar15 == 0x212) {
    *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)param_3;
    *(undefined2 *)((longlong)param_1 + 0x142) = *(undefined2 *)(param_3 + 1);
    goto LAB_144b793c0;
  }
  switch(uVar15) {
  case 0xfe:
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)param_3;
    break;
  default:
    goto switchD_144b7853f_caseD_ff;
  case 0x100:
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)param_3;
    break;
  case 0x101:
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)param_3;
    break;
  case 0x102:
    sVar4 = *(short *)param_3;
    *(short *)((longlong)param_1 + 100) = sVar4;
    if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
      if (sVar4 == 8) {
        param_1[0x8d] = &DAT_144b83080;
      }
      else if (sVar4 == 0x10) {
        param_1[0x8d] = &LAB_144b83090;
      }
      else if (sVar4 == 0x18) {
        param_1[0x8d] = &LAB_144b830b0;
      }
      else if (sVar4 == 0x20) {
        param_1[0x8d] = &LAB_144b830d0;
      }
      else if (sVar4 == 0x40) {
        param_1[0x8d] = &LAB_144b830f0;
      }
      else if (sVar4 == 0x80) {
        param_1[0x8d] = &LAB_144b830f0;
      }
    }
    break;
  case 0x103:
    sVar4 = *(short *)param_3;
    if ((*(byte *)(param_1 + 7) & 0x80) != 0) {
      if (*(short *)(param_1 + 0xd) == sVar4) break;
      (*(code *)param_1[0x77])(param_1);
      *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xffffffdf;
    }
    uVar16 = FUN_144e93500(param_1,sVar4);
    if (uVar16 == 0) {
      return 0;
    }
    *(short *)(param_1 + 0xd) = sVar4;
    break;
  case 0x106:
    *(undefined2 *)((longlong)param_1 + 0x6a) = *(undefined2 *)param_3;
    break;
  case 0x107:
    *(undefined2 *)((longlong)param_1 + 0x6c) = *(undefined2 *)param_3;
    break;
  case 0x10a:
    uVar3 = *(ushort *)param_3;
    uVar20 = (uint)uVar3;
    if (uVar3 == 1 || uVar3 == 2) {
      *(ushort *)((longlong)param_1 + 0x6e) = uVar3;
      break;
    }
    goto LAB_144b79057;
  case 0x112:
    uVar3 = *(ushort *)param_3;
    uVar20 = (uint)uVar3;
    if (uVar3 - 1 < 8) {
      *(ushort *)(param_1 + 0xe) = uVar3;
      break;
    }
    goto LAB_144b79057;
  case 0x115:
    uVar3 = *(ushort *)param_3;
    uVar20 = (uint)uVar3;
    if (uVar3 != 0) {
      uVar20 = (uint)uVar3;
      if (uVar20 != *(ushort *)((longlong)param_1 + 0x72)) {
        if (param_1[0x10] != 0) {
          FUN_144e94570(param_1[0x87],"_TIFFVSetField",
                        "SamplesPerPixel tag value is changing, but SMinSampleValue tag was read with a different value. Canceling it"
                       );
          *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xfffffffd;
          free((void *)param_1[0x10]);
          param_1[0x10] = 0;
        }
        if (param_1[0x11] != 0) {
          FUN_144e94570(param_1[0x87],"_TIFFVSetField",
                        "SamplesPerPixel tag value is changing, but SMaxSampleValue tag was read with a different value. Canceling it"
                       );
          *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xfffffffb;
          free((void *)param_1[0x11]);
          param_1[0x11] = 0;
        }
        if (((param_1[0x29] != 0) &&
            (uVar15 = (uint)*(ushort *)((longlong)param_1 + 0xc4),
            uVar20 != uVar15 && uVar20 - uVar15 != 1)) &&
           ((int)(*(ushort *)((longlong)param_1 + 0x72) - uVar15) < 2)) {
          FUN_144e94570(param_1[0x87],"_TIFFVSetField",
                        "SamplesPerPixel tag value is changing, but TransferFunction was read with a different value. Canceling it"
                       );
          *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xffffefff;
          free((void *)param_1[0x29]);
          param_1[0x29] = 0;
        }
      }
      *(ushort *)((longlong)param_1 + 0x72) = uVar3;
      break;
    }
    goto LAB_144b79057;
  case 0x116:
    iVar6 = *(int *)param_3;
    uVar20 = 0;
    if (iVar6 != 0) {
      *(int *)((longlong)param_1 + 0x74) = iVar6;
      if ((*(byte *)(param_1 + 7) & 4) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_1 + 9);
        *(int *)(param_1 + 0xb) = iVar6;
      }
      break;
    }
LAB_144b7956e:
    lVar12 = FUN_144e93aa0(param_1,param_2 & 0xffffffff);
    if (lVar12 == 0) goto LAB_144b79584;
    pcVar18 = *(char **)(lVar12 + 0x20);
    goto LAB_144b7958b;
  case 0x118:
    *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)param_3;
    break;
  case 0x119:
    *(undefined2 *)((longlong)param_1 + 0x7a) = *(undefined2 *)param_3;
    break;
  case 0x11a:
    dVar24 = *param_3;
    uVar28 = SUB84(dVar24,0);
    uVar29 = (undefined4)((ulonglong)dVar24 >> 0x20);
    if (0.0 <= dVar24) {
      uVar28 = FUN_144b7aab0(dVar24);
      *(undefined4 *)(param_1 + 0x12) = uVar28;
      break;
    }
    goto LAB_144b78985;
  case 0x11b:
    dVar24 = *param_3;
    uVar28 = SUB84(dVar24,0);
    uVar29 = (undefined4)((ulonglong)dVar24 >> 0x20);
    if (0.0 <= dVar24) {
      uVar28 = FUN_144b7aab0(dVar24);
      *(undefined4 *)((longlong)param_1 + 0x94) = uVar28;
      break;
    }
LAB_144b78985:
    lVar12 = FUN_144e93aa0(param_1,param_2 & 0xffffffff);
    if (lVar12 == 0) {
      pcVar18 = "Unknown";
    }
    else {
      pcVar18 = *(char **)(lVar12 + 0x20);
    }
    pcVar26 = "%s: Bad value %f for \"%s\" tag";
    uVar13 = CONCAT44(uVar29,uVar28);
    goto LAB_144b7959b;
  case 0x11c:
    uVar3 = *(ushort *)param_3;
    uVar20 = (uint)uVar3;
    if (uVar3 == 1 || uVar3 == 2) {
      *(ushort *)((longlong)param_1 + 0x9a) = uVar3;
      break;
    }
    goto LAB_144b79057;
  case 0x11e:
    uVar28 = FUN_144b7aab0(*param_3);
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar28;
    break;
  case 0x11f:
    uVar28 = FUN_144b7aab0(*param_3);
    *(undefined4 *)(param_1 + 0x14) = uVar28;
    break;
  case 0x128:
    uVar3 = *(ushort *)param_3;
    uVar20 = (uint)uVar3;
    if (uVar3 - 1 < 3) {
      *(ushort *)(param_1 + 0x13) = uVar3;
      break;
    }
    goto LAB_144b79057;
  case 0x129:
    *(undefined2 *)((longlong)param_1 + 0xa4) = *(undefined2 *)param_3;
    *(undefined2 *)((longlong)param_1 + 0xa6) = *(undefined2 *)(param_3 + 1);
    break;
  case 0x12d:
    param_3 = param_3 + -1;
    plVar23 = param_1 + 0x29;
    lVar12 = 1;
    if (1 < (int)((uint)*(ushort *)((longlong)param_1 + 0x72) -
                 (uint)*(ushort *)((longlong)param_1 + 0xc4))) {
      lVar12 = 3;
    }
    do {
      bVar1 = *(byte *)((longlong)param_1 + 100);
      param_3 = param_3 + 1;
      dVar24 = *param_3;
      if ((void *)*plVar23 != (void *)0x0) {
        free((void *)*plVar23);
        *plVar23 = 0;
      }
      if (dVar24 != 0.0) {
        lVar27 = FUN_144b7a8a0(0,1 << (bVar1 & 0x1f),2,0);
        if (lVar27 != 0) {
          lVar10 = FUN_144e92f50(lVar27);
          *plVar23 = lVar10;
        }
        if (*plVar23 != 0) {
          FUN_144e92fa0(*plVar23,dVar24,lVar27);
        }
      }
      plVar23 = plVar23 + 1;
      uVar16 = 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    break;
  case 0x140:
    iVar6 = 1 << (*(byte *)((longlong)param_1 + 100) & 0x1f);
    FUN_144b78420(param_1 + 0x15,*param_3,iVar6);
    FUN_144b78420(param_1 + 0x16,param_3[1],iVar6);
    FUN_144b78420(param_1 + 0x17,param_3[2],iVar6);
    break;
  case 0x141:
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)param_3;
    *(undefined2 *)((longlong)param_1 + 0xc2) = *(undefined2 *)(param_3 + 1);
    break;
  case 0x142:
    uVar20 = *(uint *)param_3;
    if ((uVar20 & 0xf) != 0) {
      if (*(int *)((longlong)param_1 + 0xc) != 0) goto LAB_144b7956e;
      FUN_144e94570(param_1[0x87],*param_1,"Nonstandard tile width %u, convert file",uVar20);
    }
    *(uint *)((longlong)param_1 + 0x54) = uVar20;
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x400;
    break;
  case 0x143:
    uVar20 = *(uint *)param_3;
    if ((uVar20 & 0xf) != 0) {
      if (*(int *)((longlong)param_1 + 0xc) != 0) goto LAB_144b7956e;
      FUN_144e94570(param_1[0x87],*param_1,"Nonstandard tile length %u, convert file",uVar20);
    }
    *(uint *)(param_1 + 0xb) = uVar20;
    *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 0x400;
    break;
  case 0x14a:
    if ((*(uint *)(param_1 + 2) & 0x2000) == 0) {
      uVar2 = *(undefined2 *)param_3;
      *(undefined2 *)(param_1 + 0x26) = uVar2;
      dVar24 = param_3[1];
      if ((void *)param_1[0x27] != (void *)0x0) {
        free((void *)param_1[0x27]);
        param_1[0x27] = 0;
      }
      if (dVar24 != 0.0) {
        lVar12 = FUN_144b7a8a0(0,uVar2,8);
        if (lVar12 != 0) {
          uVar13 = FUN_144e92f50(lVar12);
          param_1[0x27] = uVar13;
        }
        if (param_1[0x27] != 0) {
          FUN_144e92fa0(param_1[0x27],dVar24,lVar12);
        }
      }
      break;
    }
    pcVar18 = "%s: Sorry, cannot nest SubIFDs";
    goto LAB_144b7916a;
  case 0x14d:
    uVar3 = *(ushort *)((longlong)param_1 + 0x72);
    pcVar18 = (char *)param_3[1];
    uVar25 = uVar3;
    if (*(ushort *)param_3 == 0) {
LAB_144b78e22:
      FUN_144e92fd0(param_1[0x87],"TIFFSetField",
                    "%s: Invalid InkNames value; expecting %d names, found %d",*param_1,
                    CONCAT44(uVar28,(uint)uVar3),CONCAT44(uVar29,(uint)uVar3 - (uint)uVar25));
      uVar16 = 0;
    }
    else {
      pcVar26 = pcVar18;
      iVar6 = (int)pcVar18;
      for (; uVar25 != 0; uVar25 = uVar25 - 1) {
        while( true ) {
          if (pcVar18 + *(ushort *)param_3 <= pcVar26) goto LAB_144b78e22;
          if (*pcVar26 == '\0') break;
          pcVar26 = pcVar26 + 1;
        }
        pcVar26 = pcVar26 + 1;
        iVar6 = (int)pcVar26;
      }
      iVar6 = iVar6 - (int)pcVar18;
      uVar16 = (uint)(iVar6 != 0);
      if (iVar6 != 0) {
        if ((void *)param_1[0x2e] != (void *)0x0) {
          free((void *)param_1[0x2e]);
          param_1[0x2e] = 0;
        }
        if (pcVar18 != (char *)0x0) {
          lVar12 = FUN_144b7a8a0(0,iVar6,1,0);
          if (lVar12 != 0) {
            uVar13 = FUN_144e92f50(lVar12);
            param_1[0x2e] = uVar13;
          }
          if (param_1[0x2e] != 0) {
            FUN_144e92fa0(param_1[0x2e],pcVar18,lVar12);
          }
        }
        *(int *)(param_1 + 0x2d) = iVar6;
      }
    }
    if (uVar16 == 0) {
      return 0;
    }
    break;
  case 0x152:
    uVar3 = *(ushort *)param_3;
    uVar20 = (uint)uVar3;
    if ((uVar3 <= *(ushort *)((longlong)param_1 + 0x72)) &&
       ((puVar5 = (ushort *)param_3[1], uVar3 == 0 || (puVar5 != (ushort *)0x0)))) {
      uVar15 = (uint)uVar3;
      puVar9 = puVar5;
      if (uVar3 != 0) {
        do {
          if (2 < *puVar9) {
            if (*puVar9 != 999) {
              uVar19 = (ulonglong)local_res10;
              goto LAB_144b79057;
            }
            *puVar9 = 2;
          }
          uVar14 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar14;
          puVar9 = puVar9 + 1;
        } while (uVar14 < uVar15);
      }
      if (((param_1[0x29] != 0) &&
          (uVar25 = *(ushort *)((longlong)param_1 + 0x72), uVar25 != uVar15 && uVar25 - uVar15 != 1)
          ) && ((int)((uint)uVar25 - (uint)*(ushort *)((longlong)param_1 + 0xc4)) < 2)) {
        FUN_144e94570(param_1[0x87],"setExtraSamples",
                      "ExtraSamples tag value is changing, but TransferFunction was read with a different value. Canceling it"
                     );
        *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xffffefff;
        free((void *)param_1[0x29]);
        param_1[0x29] = 0;
      }
      *(ushort *)((longlong)param_1 + 0xc4) = uVar3;
      if ((void *)param_1[0x19] != (void *)0x0) {
        free((void *)param_1[0x19]);
        param_1[0x19] = 0;
      }
      if (puVar5 != (ushort *)0x0) {
        lVar12 = FUN_144b7a8a0(0,uVar3,2,0);
        if (lVar12 != 0) {
          uVar13 = FUN_144e92f50(lVar12);
          param_1[0x19] = uVar13;
        }
        if (param_1[0x19] != 0) {
          FUN_144e92fa0(param_1[0x19],puVar5,lVar12);
        }
      }
      break;
    }
    goto LAB_144b79057;
  case 0x153:
    uVar3 = *(ushort *)param_3;
    uVar20 = (uint)uVar3;
    if (uVar3 - 1 < 6) {
      *(ushort *)((longlong)param_1 + 0x66) = uVar3;
      if (uVar3 == 5) {
        if ((*(short *)((longlong)param_1 + 100) == 0x20) &&
           ((undefined1 *)param_1[0x8d] == &LAB_144b830d0)) {
          param_1[0x8d] = &LAB_144b83090;
          break;
        }
      }
      else if (uVar3 != 6) break;
      if ((*(short *)((longlong)param_1 + 100) == 0x40) &&
         ((undefined1 *)param_1[0x8d] == &LAB_144b830f0)) {
        param_1[0x8d] = &LAB_144b830d0;
      }
      break;
    }
LAB_144b79057:
    lVar12 = FUN_144e93aa0(param_1,uVar19);
    if (lVar12 == 0) {
LAB_144b79584:
      pcVar18 = "Unknown";
    }
    else {
      pcVar18 = *(char **)(lVar12 + 0x20);
    }
LAB_144b7958b:
    pcVar26 = "%s: Bad value %u for \"%s\" tag";
    uVar13 = CONCAT44(uVar28,uVar20);
LAB_144b7959b:
    FUN_144e92fd0(param_1[0x87],"_TIFFVSetField",pcVar26,*param_1,uVar13,pcVar18);
    return 0;
  case 0x154:
    uVar19 = (ulonglong)*(ushort *)((longlong)param_1 + 0x72);
    pvVar11 = (void *)param_1[0x10];
    if ((*(uint *)(param_1 + 2) & 0x400000) == 0) {
      dVar24 = *param_3;
      if (pvVar11 != (void *)0x0) {
        free(pvVar11);
      }
      lVar12 = FUN_144e92f50(uVar19 * 8);
      param_1[0x10] = lVar12;
      if (lVar12 != 0) {
        while (uVar19 != 0) {
          uVar19 = uVar19 - 1;
          *(double *)(param_1[0x10] + uVar19 * 8) = dVar24;
        }
      }
    }
    else {
      dVar24 = *param_3;
      if (pvVar11 != (void *)0x0) {
        free(pvVar11);
        param_1[0x10] = 0;
      }
      if (dVar24 != 0.0) {
        lVar12 = FUN_144b7a8a0(0,uVar19,8);
        if (lVar12 != 0) {
          uVar13 = FUN_144e92f50(lVar12);
          param_1[0x10] = uVar13;
        }
        if (param_1[0x10] != 0) {
          FUN_144e92fa0(param_1[0x10],dVar24,lVar12);
        }
      }
    }
    break;
  case 0x155:
    uVar19 = (ulonglong)*(ushort *)((longlong)param_1 + 0x72);
    pvVar11 = (void *)param_1[0x11];
    if ((*(uint *)(param_1 + 2) & 0x400000) == 0) {
      dVar24 = *param_3;
      if (pvVar11 != (void *)0x0) {
        free(pvVar11);
      }
      lVar12 = FUN_144e92f50(uVar19 * 8);
      param_1[0x11] = lVar12;
      if (lVar12 != 0) {
        while (uVar19 != 0) {
          uVar19 = uVar19 - 1;
          *(double *)(param_1[0x11] + uVar19 * 8) = dVar24;
        }
      }
    }
    else {
      dVar24 = *param_3;
      if (pvVar11 != (void *)0x0) {
        free(pvVar11);
        param_1[0x11] = 0;
      }
      if (dVar24 != 0.0) {
        lVar12 = FUN_144b7a8a0(0,uVar19,8);
        if (lVar12 != 0) {
          uVar13 = FUN_144e92f50(lVar12);
          param_1[0x11] = uVar13;
        }
        if (param_1[0x11] != 0) {
          FUN_144e92fa0(param_1[0x11],dVar24,lVar12);
        }
      }
    }
  }
LAB_144b793c0:
  lVar12 = FUN_144e93aa0(param_1,local_res10);
  if (lVar12 != 0) {
    uVar19 = (ulonglong)(*(ushort *)(lVar12 + 0x18) >> 5);
    *(uint *)((longlong)param_1 + uVar19 * 4 + 0x38) =
         *(uint *)((longlong)param_1 + uVar19 * 4 + 0x38) | 1 << (*(ushort *)(lVar12 + 0x18) & 0x1f)
    ;
  }
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) | 8;
  return uVar16;
}



// FUNCTION 144b796f0 FUN_144b796f0 body=2300 status=ok
// SIG undefined FUN_144b796f0(void)

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_144b796f0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  double *pdVar5;
  ushort uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong lVar10;
  undefined2 uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar15;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar11 = 1;
  piVar4 = (int *)FUN_144e939e0(param_1,param_2,0);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  lVar10 = 0;
  uVar12 = (uint)param_2;
  uVar2 = 0;
  if ((short)piVar4[6] != 0x41) {
    uVar2 = uVar12;
  }
  if (uVar2 == 0x14e) {
    if (*(int *)(param_1 + 0x2f) < 1) {
      return 0;
    }
    puVar7 = (undefined8 *)param_1[0x30];
    do {
      if (*(int *)*puVar7 == 0x14e) {
        if ((ushort *)puVar7[2] == (ushort *)0x0) {
          return 0;
        }
        uVar6 = *(ushort *)puVar7[2];
        if (*(ushort *)((longlong)param_1 + 0x72) < uVar6) {
          FUN_144e94570(param_1[0x87],"_TIFFVGetField","Truncating NumberOfInks from %u to %u",uVar6
                        ,CONCAT44(uVar15,(uint)*(ushort *)((longlong)param_1 + 0x72)));
          uVar6 = *(ushort *)((longlong)param_1 + 0x72);
        }
        *(ushort *)*param_3 = uVar6;
        return 1;
      }
      lVar10 = lVar10 + 1;
      puVar7 = puVar7 + 3;
    } while (lVar10 < *(int *)(param_1 + 0x2f));
    return 0;
  }
  if (0x212 < uVar2) {
    if (uVar2 < 0x80e5) {
      if (uVar2 == 0x80e4) {
        sVar1 = *(short *)((longlong)param_1 + 0x66);
        if (sVar1 == 1) {
          *(undefined2 *)*param_3 = 2;
          return 1;
        }
        if (sVar1 != 2) {
          if (sVar1 == 3) {
            *(undefined2 *)*param_3 = 3;
            return 1;
          }
          if (sVar1 != 4) {
            return 1;
          }
          *(undefined2 *)*param_3 = 0;
          return 1;
        }
      }
      else {
        if (uVar2 == 0x213) {
          *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x144);
          return 1;
        }
        if (uVar2 == 0x214) {
          *(undefined8 *)*param_3 = param_1[0x2c];
          return 1;
        }
        if (uVar2 != 0x80e3) goto switchD_144b79813_caseD_ff;
        if ((*(short *)((longlong)param_1 + 0xc4) != 1) || (*(short *)param_1[0x19] != 1)) {
          uVar11 = 0;
        }
      }
      *(undefined2 *)*param_3 = uVar11;
      return 1;
    }
    if (uVar2 == 0x80e5) {
      *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 10);
      return 1;
    }
    if (uVar2 == 0x80e6) {
      *(undefined4 *)*param_3 = *(undefined4 *)((longlong)param_1 + 0x5c);
      return 1;
    }
switchD_144b79813_caseD_ff:
    if ((short)piVar4[6] != 0x41) {
      pcVar9 = "";
      if (0xffff < uVar12) {
        pcVar9 = "pseudo-";
      }
      FUN_144e92fd0(param_1[0x87],"_TIFFVGetField",
                    "%s: Invalid %stag \"%s\" (not supported by codec)",*param_1,pcVar9,
                    *(undefined8 *)(piVar4 + 8));
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x2f)) {
      puVar7 = (undefined8 *)param_1[0x30];
      while (*(uint *)*puVar7 != uVar12) {
        lVar10 = lVar10 + 1;
        puVar7 = puVar7 + 3;
        if (*(int *)(param_1 + 0x2f) <= lVar10) {
          return 0;
        }
      }
      if (*(char *)((longlong)piVar4 + 0x1b) != '\0') {
        if ((short)piVar4[1] != -3) {
          *(undefined2 *)*param_3 = *(undefined2 *)(puVar7 + 1);
          *(undefined8 *)param_3[1] = puVar7[2];
          return 1;
        }
        *(undefined4 *)*param_3 = *(undefined4 *)(puVar7 + 1);
        *(undefined8 *)param_3[1] = puVar7[2];
        return 1;
      }
      if ((*piVar4 == 0x150) && (iVar3 = strcmp(*(char **)(piVar4 + 8),"DotRange"), iVar3 == 0)) {
        *(undefined2 *)*param_3 = *(undefined2 *)puVar7[2];
        *(undefined2 *)param_3[1] = *(undefined2 *)(puVar7[2] + 2);
        return 1;
      }
      if (((piVar4[2] == 2) || ((ushort)((short)piVar4[1] + 3U) < 3)) || (1 < *(int *)(puVar7 + 1)))
      {
        *(undefined8 *)*param_3 = puVar7[2];
        return 1;
      }
      puVar7 = (undefined8 *)puVar7[2];
      switch(piVar4[2]) {
      case 1:
      case 6:
      case 7:
        *(undefined1 *)*param_3 = *(undefined1 *)puVar7;
        return 1;
      case 3:
      case 8:
        *(undefined2 *)*param_3 = *(undefined2 *)puVar7;
        return 1;
      case 4:
      case 9:
      case 0xb:
      case 0xd:
        *(undefined4 *)*param_3 = *(undefined4 *)puVar7;
        return 1;
      case 5:
      case 10:
        iVar3 = FUN_144e944b0(piVar4[4]);
        if (iVar3 != 8) {
          *(undefined4 *)*param_3 = *(undefined4 *)puVar7;
          if (iVar3 != 4) {
            FUN_144e92fd0(0,"TIFFLib: _TIFFVGetField()",
                          "Rational2Double: .set_field_type in not 4 but %d");
          }
          return 1;
        }
        *(undefined8 *)*param_3 = *puVar7;
        return 1;
      case 0xc:
      case 0x10:
      case 0x11:
      case 0x12:
        *(undefined8 *)*param_3 = *puVar7;
        return 1;
      }
    }
    return 0;
  }
  if (uVar2 == 0x212) {
    *(undefined2 *)*param_3 = *(undefined2 *)(param_1 + 0x28);
    *(undefined2 *)param_3[1] = *(undefined2 *)((longlong)param_1 + 0x142);
    return 1;
  }
  switch(uVar2) {
  case 0xfe:
    *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xc);
    break;
  default:
    goto switchD_144b79813_caseD_ff;
  case 0x100:
    *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 9);
    break;
  case 0x101:
    *(undefined4 *)*param_3 = *(undefined4 *)((longlong)param_1 + 0x4c);
    break;
  case 0x102:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 100);
    break;
  case 0x103:
    *(undefined2 *)*param_3 = *(undefined2 *)(param_1 + 0xd);
    break;
  case 0x106:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x6a);
    break;
  case 0x107:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x6c);
    break;
  case 0x10a:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x6e);
    break;
  case 0x111:
  case 0x144:
    FUN_144b7c870(param_1);
    *(undefined8 *)*param_3 = param_1[0x1b];
    break;
  case 0x112:
    *(undefined2 *)*param_3 = *(undefined2 *)(param_1 + 0xe);
    break;
  case 0x115:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x72);
    break;
  case 0x116:
    *(undefined4 *)*param_3 = *(undefined4 *)((longlong)param_1 + 0x74);
    break;
  case 0x117:
  case 0x145:
    FUN_144b7c870(param_1);
    *(undefined8 *)*param_3 = param_1[0x1c];
    break;
  case 0x118:
    *(undefined2 *)*param_3 = *(undefined2 *)(param_1 + 0xf);
    break;
  case 0x119:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x7a);
    break;
  case 0x11a:
    *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0x12);
    break;
  case 0x11b:
    *(undefined4 *)*param_3 = *(undefined4 *)((longlong)param_1 + 0x94);
    break;
  case 0x11c:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x9a);
    break;
  case 0x11e:
    *(undefined4 *)*param_3 = *(undefined4 *)((longlong)param_1 + 0x9c);
    break;
  case 0x11f:
    *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0x14);
    break;
  case 0x128:
    *(undefined2 *)*param_3 = *(undefined2 *)(param_1 + 0x13);
    break;
  case 0x129:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0xa4);
    *(undefined2 *)param_3[1] = *(undefined2 *)((longlong)param_1 + 0xa6);
    break;
  case 0x12d:
    *(undefined8 *)*param_3 = param_1[0x29];
    if ((int)((uint)*(ushort *)((longlong)param_1 + 0x72) -
             (uint)*(ushort *)((longlong)param_1 + 0xc4)) < 2) {
      *(undefined8 *)param_3[1] = 0;
      *(undefined8 *)param_3[2] = 0;
    }
    else {
      *(undefined8 *)param_3[1] = param_1[0x2a];
      *(undefined8 *)param_3[2] = param_1[0x2b];
    }
    break;
  case 0x140:
    *(undefined8 *)*param_3 = param_1[0x15];
    *(undefined8 *)param_3[1] = param_1[0x16];
    *(undefined8 *)param_3[2] = param_1[0x17];
    break;
  case 0x141:
    *(undefined2 *)*param_3 = *(undefined2 *)(param_1 + 0x18);
    *(undefined2 *)param_3[1] = *(undefined2 *)((longlong)param_1 + 0xc2);
    break;
  case 0x142:
    *(undefined4 *)*param_3 = *(undefined4 *)((longlong)param_1 + 0x54);
    break;
  case 0x143:
    *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xb);
    break;
  case 0x14a:
    *(undefined2 *)*param_3 = *(undefined2 *)(param_1 + 0x26);
    *(undefined8 *)param_3[1] = param_1[0x27];
    break;
  case 0x14d:
    *(undefined8 *)*param_3 = param_1[0x2e];
    break;
  case 0x152:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0xc4);
    *(undefined8 *)param_3[1] = param_1[0x19];
    break;
  case 0x153:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x66);
    break;
  case 0x154:
    pdVar5 = (double *)param_1[0x10];
    if ((*(uint *)(param_1 + 2) & 0x400000) == 0) {
      dVar13 = *pdVar5;
      if (1 < *(ushort *)((longlong)param_1 + 0x72)) {
        uVar8 = (ulonglong)(ushort)(*(ushort *)((longlong)param_1 + 0x72) - 1);
        dVar14 = dVar13;
        do {
          pdVar5 = pdVar5 + 1;
          dVar13 = *pdVar5;
          if (dVar14 <= *pdVar5) {
            dVar13 = dVar14;
          }
          uVar8 = uVar8 - 1;
          dVar14 = dVar13;
        } while (uVar8 != 0);
      }
LAB_144b79994:
      *(double *)*param_3 = dVar13;
      return 1;
    }
    goto LAB_144b79948;
  case 0x155:
    pdVar5 = (double *)param_1[0x11];
    if ((*(uint *)(param_1 + 2) & 0x400000) == 0) {
      dVar13 = *pdVar5;
      if (1 < *(ushort *)((longlong)param_1 + 0x72)) {
        uVar8 = (ulonglong)(ushort)(*(ushort *)((longlong)param_1 + 0x72) - 1);
        do {
          pdVar5 = pdVar5 + 1;
          dVar14 = *pdVar5;
          if (*pdVar5 <= dVar13) {
            dVar14 = dVar13;
          }
          uVar8 = uVar8 - 1;
          dVar13 = dVar14;
        } while (uVar8 != 0);
        *(double *)*param_3 = dVar14;
        return 1;
      }
      goto LAB_144b79994;
    }
LAB_144b79948:
    *(double **)*param_3 = pdVar5;
  }
  return 1;
}



// FUNCTION 144b7a120 FUN_144b7a120 body=33 status=ok
// SIG undefined FUN_144b7a120(void)

void FUN_144b7a120(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_144b7a150(param_1,param_2,&local_res18);
  return;
}



// FUNCTION 144b7a150 FUN_144b7a150 body=1544 status=ok
// SIG undefined FUN_144b7a150(void)

undefined8 FUN_144b7a150(undefined8 *param_1,uint param_2,undefined8 *param_3)

{
  short sVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  
  iVar2 = FUN_144b77e90();
  if (iVar2 != 0) {
    return 1;
  }
  if (0x211 < param_2) {
    if (0x80e3 < param_2) {
      if (param_2 == 0x80e4) {
        *(short *)*param_3 = *(short *)((longlong)param_1 + 0x66) + -1;
        return 1;
      }
      if (param_2 != 0x80e5) {
        if (param_2 != 0x80e6) {
          return 0;
        }
        *(undefined4 *)*param_3 = *(undefined4 *)((longlong)param_1 + 0x5c);
        return 1;
      }
      *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 10);
      return 1;
    }
    if (param_2 == 0x80e3) {
      if ((*(short *)((longlong)param_1 + 0xc4) == 1) && (*(short *)param_1[0x19] == 1)) {
        *(undefined2 *)*param_3 = 1;
        return 1;
      }
      *(undefined2 *)*param_3 = 0;
      return 1;
    }
    if (param_2 == 0x212) {
      *(undefined2 *)*param_3 = *(undefined2 *)(param_1 + 0x28);
      *(undefined2 *)param_3[1] = *(undefined2 *)((longlong)param_1 + 0x142);
      return 1;
    }
    if (param_2 != 0x213) {
      if (param_2 != 0x214) {
        return 0;
      }
      lVar5 = param_1[0x2c];
      if (lVar5 == 0) {
        puVar4 = (undefined4 *)FUN_144e92f50(0x18);
        param_1[0x2c] = puVar4;
        if (puVar4 == (undefined4 *)0x0) {
          return 0;
        }
        sVar1 = *(short *)((longlong)param_1 + 0x6a);
        *puVar4 = 0;
        if (sVar1 == 6) {
          *(undefined4 *)(param_1[0x2c] + 0x14) = 0x437f0000;
          *(undefined4 *)(param_1[0x2c] + 0xc) = 0x437f0000;
          *(undefined4 *)(param_1[0x2c] + 4) = 0x437f0000;
          *(undefined4 *)(param_1[0x2c] + 0x10) = 0x43000000;
          *(undefined4 *)(param_1[0x2c] + 8) = 0x43000000;
          *(undefined8 *)*param_3 = param_1[0x2c];
          return 1;
        }
        *(float *)(param_1[0x2c] + 4) =
             (float)((1 << (*(byte *)((longlong)param_1 + 100) & 0x1f)) + -1);
        *(undefined4 *)(param_1[0x2c] + 8) = 0;
        *(float *)(param_1[0x2c] + 0xc) =
             (float)((1 << (*(byte *)((longlong)param_1 + 100) & 0x1f)) + -1);
        *(undefined4 *)(param_1[0x2c] + 0x10) = 0;
        *(float *)(param_1[0x2c] + 0x14) =
             (float)((1 << (*(byte *)((longlong)param_1 + 100) & 0x1f)) + -1);
        lVar5 = param_1[0x2c];
      }
      *(longlong *)*param_3 = lVar5;
      return 1;
    }
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x144);
    return 1;
  }
  if (param_2 == 0x211) {
    *(undefined **)*param_3 = &DAT_149973c48;
    return 1;
  }
  switch(param_2) {
  case 0xfe:
    *(undefined4 *)*param_3 = *(undefined4 *)(param_1 + 0xc);
    break;
  default:
    return 0;
  case 0x102:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 100);
    break;
  case 0x107:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x6c);
    break;
  case 0x10a:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x6e);
    break;
  case 0x112:
    *(undefined2 *)*param_3 = *(undefined2 *)(param_1 + 0xe);
    break;
  case 0x115:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x72);
    break;
  case 0x116:
    *(undefined4 *)*param_3 = *(undefined4 *)((longlong)param_1 + 0x74);
    break;
  case 0x118:
    *(undefined2 *)*param_3 = *(undefined2 *)(param_1 + 0xf);
    break;
  case 0x119:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x7a);
    break;
  case 0x11c:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x9a);
    break;
  case 0x128:
    *(undefined2 *)*param_3 = *(undefined2 *)(param_1 + 0x13);
    break;
  case 0x12d:
    lVar5 = param_1[0x29];
    if (lVar5 == 0) {
      param_1[0x2b] = 0;
      param_1[0x2a] = 0;
      param_1[0x29] = 0;
      if (0x3d < *(ushort *)((longlong)param_1 + 100)) goto LAB_144b7a541;
      lVar7 = 1L << ((byte)*(ushort *)((longlong)param_1 + 100) & 0x3f);
      lVar5 = lVar7 * 2;
      puVar3 = (undefined2 *)FUN_144e92f50(lVar5);
      param_1[0x29] = puVar3;
      if (puVar3 == (undefined2 *)0x0) goto LAB_144b7a541;
      lVar6 = 1;
      *puVar3 = 0;
      if (1 < lVar7) {
        do {
          dVar8 = pow((double)lVar6 / ((double)lVar7 - 1.0),2.2);
          dVar8 = floor(dVar8 * 65535.0 + 0.5);
          *(short *)(param_1[0x29] + lVar6 * 2) = (short)(int)dVar8;
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar7);
      }
      if (1 < (int)((uint)*(ushort *)((longlong)param_1 + 0x72) -
                   (uint)*(ushort *)((longlong)param_1 + 0xc4))) {
        lVar7 = FUN_144e92f50(lVar5);
        param_1[0x2a] = lVar7;
        if (lVar7 != 0) {
          FUN_144e92fa0(lVar7,param_1[0x29],lVar5);
          lVar7 = FUN_144e92f50(lVar5);
          param_1[0x2b] = lVar7;
          if (lVar7 != 0) {
            FUN_144e92fa0(lVar7,param_1[0x29],lVar5);
            goto LAB_144b7a4b6;
          }
        }
        if ((void *)param_1[0x29] != (void *)0x0) {
          free((void *)param_1[0x29]);
        }
        if ((void *)param_1[0x2a] != (void *)0x0) {
          free((void *)param_1[0x2a]);
        }
        if ((void *)param_1[0x2b] != (void *)0x0) {
          free((void *)param_1[0x2b]);
        }
        param_1[0x2b] = 0;
        param_1[0x2a] = 0;
        param_1[0x29] = 0;
LAB_144b7a541:
        FUN_144e92fd0(param_1[0x87],*param_1,"No space for \"TransferFunction\" tag");
        return 0;
      }
LAB_144b7a4b6:
      lVar5 = param_1[0x29];
    }
    *(longlong *)*param_3 = lVar5;
    if (1 < (int)((uint)*(ushort *)((longlong)param_1 + 0x72) -
                 (uint)*(ushort *)((longlong)param_1 + 0xc4))) {
      *(undefined8 *)param_3[1] = param_1[0x2a];
      *(undefined8 *)param_3[2] = param_1[0x2b];
    }
    break;
  case 0x13d:
    if ((undefined2 *)param_1[0x7a] == (undefined2 *)0x0) {
      FUN_144e92fd0(param_1[0x87],*param_1,
                    "Cannot get \"Predictor\" tag as plugin is not configured");
      *(undefined2 *)*param_3 = 0;
      return 0;
    }
    *(undefined2 *)*param_3 = *(undefined2 *)param_1[0x7a];
    return 1;
  case 0x13e:
    *(undefined **)*param_3 = &DAT_149973c58;
    break;
  case 0x14c:
    *(undefined2 *)*param_3 = 1;
    break;
  case 0x14e:
    *(undefined2 *)*param_3 = 4;
    break;
  case 0x150:
    *(undefined2 *)*param_3 = 0;
    *(short *)param_3[1] = (1 << (*(byte *)((longlong)param_1 + 100) & 0x1f)) + -1;
    break;
  case 0x152:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0xc4);
    *(undefined8 *)param_3[1] = param_1[0x19];
    break;
  case 0x153:
    *(undefined2 *)*param_3 = *(undefined2 *)((longlong)param_1 + 0x66);
  }
  return 1;
}



// FUNCTION 144b7a800 FUN_144b7a800 body=68 status=ok
// SIG undefined FUN_144b7a800(void)

int FUN_144b7a800(longlong param_1,uint param_2,uint param_3,undefined8 param_4)

{
  if ((param_3 != 0) && ((uint)(0xffffffff / (ulonglong)param_3) < param_2)) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_4,"Integer overflow in %s");
    return 0;
  }
  return param_2 * param_3;
}



// FUNCTION 144b7a850 FUN_144b7a850 body=70 status=ok
// SIG undefined FUN_144b7a850(void)

longlong FUN_144b7a850(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  if ((param_3 != 0) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0) < param_2)) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_4,"Integer overflow in %s");
    return 0;
  }
  return param_2 * param_3;
}



// FUNCTION 144b7a8a0 FUN_144b7a8a0 body=113 status=ok
// SIG undefined FUN_144b7a8a0(void)

longlong FUN_144b7a8a0(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  
  if ((param_2 < 1) || ((longlong)param_3 < 1)) {
    if (param_1 == 0) {
      return 0;
    }
    if (param_4 == 0) {
      return 0;
    }
    pcVar2 = "Invalid argument to _TIFFMultiplySSize() in %s";
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    if (param_2 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / auVar1,0)) {
      return param_2 * param_3;
    }
    if (param_1 == 0) {
      return 0;
    }
    if (param_4 == 0) {
      return 0;
    }
    pcVar2 = "Integer overflow in %s";
  }
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_4,pcVar2,param_4);
  return 0;
}



// FUNCTION 144b7a920 FUN_144b7a920 body=69 status=ok
// SIG undefined FUN_144b7a920(void)

ulonglong FUN_144b7a920(longlong param_1,ulonglong param_2,longlong param_3)

{
  if (0x7fffffffffffffff < param_2) {
    if ((param_1 != 0) && (param_3 != 0)) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_3,"Integer overflow");
    }
    return 0;
  }
  return param_2;
}



// FUNCTION 144b7a970 FUN_144b7a970 body=160 status=ok
// SIG undefined FUN_144b7a970(void)

void * FUN_144b7a970(undefined8 *param_1,longlong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  
  if ((((0 < param_2) && (0 < (longlong)param_3)) &&
      (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
      param_2 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / auVar1,0))) &&
     ((param_2 * param_3 != 0 &&
      (pvVar2 = realloc((void *)0x0,param_2 * param_3), pvVar2 != (void *)0x0)))) {
    return pvVar2;
  }
  FUN_144e92fd0(param_1[0x87],*param_1,
                "Failed to allocate memory for %s (%ld elements of %ld bytes each)",param_4,
                (int)param_2,(int)param_3);
  return (void *)0x0;
}



// FUNCTION 144b7aa10 FUN_144b7aa10 body=153 status=ok
// SIG undefined FUN_144b7aa10(void)

void * FUN_144b7aa10(undefined8 *param_1,void *param_2,longlong param_3,ulonglong param_4,
                    undefined8 param_5)

{
  undefined1 auVar1 [16];
  void *pvVar2;
  
  if ((((0 < param_3) && (0 < (longlong)param_4)) &&
      (auVar1._8_8_ = 0, auVar1._0_8_ = param_4,
      param_3 <= SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / auVar1,0))) &&
     ((param_3 * param_4 != 0 &&
      (pvVar2 = realloc(param_2,param_3 * param_4), pvVar2 != (void *)0x0)))) {
    return pvVar2;
  }
  FUN_144e92fd0(param_1[0x87],*param_1,
                "Failed to allocate memory for %s (%ld elements of %ld bytes each)",param_5,
                (int)param_3,(int)param_4);
  return (void *)0x0;
}



// FUNCTION 144b7aab0 FUN_144b7aab0 body=53 status=ok
// SIG undefined FUN_144b7aab0(void)

float FUN_144b7aab0(double param_1)

{
  if (3.4028234663852886e+38 < param_1) {
    return 3.4028235e+38;
  }
  if (param_1 < -3.4028234663852886e+38) {
    return -3.4028235e+38;
  }
  return (float)param_1;
}



// FUNCTION 144b7aaf0 FUN_144b7aaf0 body=67 status=ok
// SIG undefined FUN_144b7aaf0(void)

undefined8 FUN_144b7aaf0(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (param_2 < 0x8000000000000000) {
    uVar1 = (**(code **)(param_1 + 0x450))(*(undefined8 *)(param_1 + 0x438),param_2,0);
    if (uVar1 == param_2) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144b7ab40 FUN_144b7ab40 body=194 status=ok
// SIG undefined FUN_144b7ab40(void)

ulonglong FUN_144b7ab40(longlong param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    pcVar4 = "Tile length is zero";
  }
  else {
    if (*(int *)(param_1 + 0x54) != 0) {
      uVar1 = FUN_144b7a850(param_1,*(undefined2 *)(param_1 + 100),*(int *)(param_1 + 0x54),
                            "TIFFTileRowSize");
      if (*(short *)(param_1 + 0x9a) == 1) {
        if (*(short *)(param_1 + 0x72) == 0) {
          uVar2 = *(undefined8 *)(param_1 + 0x438);
          pcVar4 = "Samples per pixel is zero";
          goto LAB_144b7ab5d;
        }
        uVar1 = FUN_144b7a850(param_1,uVar1,*(short *)(param_1 + 0x72),"TIFFTileRowSize");
      }
      uVar3 = (uVar1 >> 3) + 1;
      if ((uVar1 & 7) == 0) {
        uVar3 = uVar1 >> 3;
      }
      if (uVar3 != 0) {
        return uVar3;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x438);
      pcVar4 = "Computed tile row size is zero";
      goto LAB_144b7ab5d;
    }
    pcVar4 = "Tile width is zero";
  }
  uVar2 = *(undefined8 *)(param_1 + 0x438);
LAB_144b7ab5d:
  FUN_144e92fd0(uVar2,"TIFFTileRowSize64",pcVar4);
  return 0;
}



// FUNCTION 144b7ac10 FUN_144b7ac10 body=37 status=ok
// SIG undefined FUN_144b7ac10(void)

void FUN_144b7ac10(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b7ab40();
  FUN_144b7a920(param_1,uVar1,"TIFFTileRowSize");
  return;
}



// FUNCTION 144b7ac40 FUN_144b7ac40 body=8 status=ok
// SIG undefined FUN_144b7ac40(void)

void FUN_144b7ac40(longlong param_1)

{
  FUN_144b7ac80(param_1,*(undefined4 *)(param_1 + 0x58));
  return;
}



// FUNCTION 144b7ac50 FUN_144b7ac50 body=40 status=ok
// SIG undefined FUN_144b7ac50(void)

void FUN_144b7ac50(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144b7ac80(param_1,*(undefined4 *)(param_1 + 0x58));
  FUN_144b7a920(param_1,uVar1,"TIFFTileSize");
  return;
}



// FUNCTION 144b7ac80 FUN_144b7ac80 body=467 status=ok
// SIG undefined FUN_144b7ac80(void)

undefined8 FUN_144b7ac80(longlong param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 local_res8;
  
  if (((*(int *)(param_1 + 0x58) != 0) && (*(int *)(param_1 + 0x54) != 0)) &&
     (*(int *)(param_1 + 0x5c) != 0)) {
    if (((*(short *)(param_1 + 0x9a) != 1) || (*(short *)(param_1 + 0x6a) != 6)) ||
       ((*(short *)(param_1 + 0x72) != 3 || ((*(uint *)(param_1 + 0x10) & 0x4000) != 0)))) {
      uVar4 = FUN_144b7ab40();
      uVar4 = FUN_144b7a850(param_1,param_2,uVar4,"TIFFVTileSize64");
      return uVar4;
    }
    FUN_144b7a120(param_1,0x212,&local_res8,(longlong)&local_res8 + 2);
    uVar3 = (uint)local_res8._2_2_;
    sVar1 = (short)local_res8;
    if ((((sVar1 - 1U & 0xfffc) == 0) && (sVar1 != 3)) &&
       (((local_res8._2_2_ - 1 & 0xfffc) == 0 && (local_res8._2_2_ != 3)))) {
      uVar6 = local_res8 & 0xffff;
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x54) < -uVar6) {
        uVar5 = (ulonglong)((uVar6 - 1) + *(uint *)(param_1 + 0x54)) / (ulonglong)uVar6;
      }
      else {
        uVar5 = 0;
      }
      if (param_2 < -uVar3) {
        uVar2 = ((param_2 - 1) + uVar3) / uVar3;
      }
      uVar4 = FUN_144b7a850(param_1,uVar5,local_res8._2_2_ * sVar1 + 2,"TIFFVTileSize64");
      uVar3 = FUN_144b7a850(param_1,uVar4,*(undefined2 *)(param_1 + 100),"TIFFVTileSize64");
      if ((uVar3 & 7) == 0) {
        uVar5 = FUN_144b7a850(param_1,uVar4,*(undefined2 *)(param_1 + 100),"TIFFVTileSize64");
        uVar5 = uVar5 >> 3;
      }
      else {
        uVar5 = FUN_144b7a850(param_1,uVar4,*(undefined2 *)(param_1 + 100),"TIFFVTileSize64");
        uVar5 = (uVar5 >> 3) + 1;
      }
      uVar4 = FUN_144b7a850(param_1,uVar5,uVar2,"TIFFVTileSize64");
      return uVar4;
    }
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFVTileSize64",
                  "Invalid YCbCr subsampling (%dx%d)",local_res8 & 0xffff,uVar3);
  }
  return 0;
}



// FUNCTION 144b7ae60 FUN_144b7ae60 body=298 status=ok
// SIG undefined FUN_144b7ae60(void)

int FUN_144b7ae60(longlong param_1,uint param_2,uint param_3,ulonglong param_4,ushort param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  uVar3 = 0;
  uVar5 = *(uint *)(param_1 + 0x54);
  uVar9 = *(uint *)(param_1 + 0x58);
  uVar6 = 0;
  if (uVar1 != 1) {
    uVar6 = param_4 & 0xffffffff;
  }
  if (uVar5 == 0xffffffff) {
    uVar5 = *(uint *)(param_1 + 0x48);
  }
  if (uVar9 == 0xffffffff) {
    uVar9 = *(uint *)(param_1 + 0x4c);
  }
  uVar2 = uVar1;
  if (*(uint *)(param_1 + 0x5c) != 0xffffffff) {
    uVar2 = *(uint *)(param_1 + 0x5c);
  }
  if (((uVar5 == 0) || (uVar9 == 0)) || (uVar2 == 0)) {
    iVar4 = 1;
  }
  else {
    if (*(uint *)(param_1 + 0x48) < -uVar5) {
      uVar8 = ((*(uint *)(param_1 + 0x48) - 1) + uVar5) / uVar5;
    }
    else {
      uVar8 = 0;
    }
    if (*(uint *)(param_1 + 0x4c) < -uVar9) {
      uVar7 = ((*(uint *)(param_1 + 0x4c) - 1) + uVar9) / uVar9;
    }
    else {
      uVar7 = 0;
    }
    if (uVar1 < -uVar2) {
      uVar3 = ((uVar1 - 1) + uVar2) / uVar2;
    }
    iVar4 = (int)(uVar6 / uVar2);
    if (*(short *)(param_1 + 0x9a) == 2) {
      iVar4 = ((param_5 * uVar3 + iVar4) * uVar7 + param_3 / uVar9) * uVar8 + param_2 / uVar5;
    }
    else {
      iVar4 = (param_3 / uVar9 + iVar4 * uVar7) * uVar8 + param_2 / uVar5;
    }
  }
  return iVar4;
}



// FUNCTION 144b7af90 FUN_144b7af90 body=134 status=ok
// SIG undefined FUN_144b7af90(void)

undefined8
FUN_144b7af90(undefined8 *param_1,uint param_2,uint param_3,ulonglong param_4,ushort param_5)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = *(uint *)(param_1 + 9);
  if (param_2 < uVar1) {
    uVar1 = *(uint *)((longlong)param_1 + 0x4c);
    if (param_3 < uVar1) {
      uVar1 = *(uint *)(param_1 + 10);
      if ((uint)param_4 < uVar1) {
        if ((*(short *)((longlong)param_1 + 0x9a) != 2) ||
           (param_5 < *(ushort *)((longlong)param_1 + 0x72))) {
          return 1;
        }
        uVar1 = (uint)*(ushort *)((longlong)param_1 + 0x72);
        pcVar2 = "%lu: Sample out of range, max %lu";
        param_4 = (ulonglong)param_5;
      }
      else {
        pcVar2 = "%lu: Depth out of range, max %lu";
      }
    }
    else {
      param_4 = (ulonglong)param_3;
      pcVar2 = "%lu: Row out of range, max %lu";
    }
  }
  else {
    param_4 = (ulonglong)param_2;
    pcVar2 = "%lu: Col out of range, max %lu";
  }
  FUN_144e92fd0(param_1[0x87],*param_1,pcVar2,param_4,uVar1 - 1);
  return 0;
}



// FUNCTION 144b7b020 FUN_144b7b020 body=263 status=ok
// SIG undefined FUN_144b7b020(void)

ulonglong FUN_144b7b020(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x54);
  uVar7 = *(uint *)(param_1 + 0x58);
  uVar6 = *(uint *)(param_1 + 0x5c);
  if (uVar2 == 0xffffffff) {
    uVar2 = *(uint *)(param_1 + 0x48);
  }
  if (uVar7 == 0xffffffff) {
    uVar7 = *(uint *)(param_1 + 0x4c);
  }
  if (uVar6 == 0xffffffff) {
    uVar6 = *(uint *)(param_1 + 0x50);
  }
  if (((uVar2 == 0) || (uVar7 == 0)) || (uVar6 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = uVar4;
    if (*(uint *)(param_1 + 0x50) < -uVar6) {
      uVar5 = ((*(uint *)(param_1 + 0x50) - 1) + uVar6) / uVar6;
    }
    if (*(uint *)(param_1 + 0x4c) < -uVar7) {
      uVar3 = (ulonglong)((*(uint *)(param_1 + 0x4c) - 1) + uVar7) / (ulonglong)uVar7;
    }
    if (*(uint *)(param_1 + 0x48) < -uVar2) {
      uVar4 = ((*(uint *)(param_1 + 0x48) - 1) + uVar2) / uVar2;
    }
    uVar1 = FUN_144b7a800(param_1,uVar4,uVar3,"TIFFNumberOfTiles");
    uVar2 = FUN_144b7a800(param_1,uVar1,uVar5,"TIFFNumberOfTiles");
    uVar3 = (ulonglong)uVar2;
  }
  if (*(short *)(param_1 + 0x9a) != 2) {
    return uVar3;
  }
  uVar3 = FUN_144b7a800(param_1,uVar3,*(undefined2 *)(param_1 + 0x72),"TIFFNumberOfTiles");
  return uVar3;
}



// FUNCTION 144b7b190 FUN_144b7b190 body=4886 status=ok
// SIG undefined FUN_144b7b190(void)

undefined8 FUN_144b7b190(longlong param_1)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort *puVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  ushort *puVar14;
  void *pvVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ushort uVar19;
  undefined8 *puVar20;
  short *psVar21;
  ushort uVar22;
  ushort uVar23;
  ulonglong uVar24;
  uint uVar25;
  char *pcVar26;
  char *pcVar27;
  ulonglong uVar28;
  ushort *puVar29;
  bool bVar30;
  short local_res8;
  undefined6 uStackX_a;
  short local_res10 [4];
  int local_res18;
  ushort *local_res20;
  char *in_stack_ffffffffffffff98;
  undefined4 uVar31;
  void *local_58;
  short *local_50 [2];
  
  lVar17 = *(longlong *)(param_1 + 0x20);
  local_res18 = 0;
  *(longlong *)(param_1 + 0x18) = lVar17;
  if (lVar17 == 0) {
    return 0;
  }
  uVar22 = *(ushort *)(param_1 + 0x32);
  sVar6 = -1;
  if (uVar22 == 0xffff) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFCheckDirOffset",
                  "Cannot handle more than 65535 TIFF directories");
    return 0;
  }
  uVar28 = 0;
  if (uVar22 != 0) {
    do {
      if (*(longlong *)(param_1 + 0x28) == 0) break;
      if (*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar28 * 8) == lVar17) {
        return 0;
      }
      uVar19 = (short)uVar28 + 1;
      uVar28 = (ulonglong)uVar19;
    } while (uVar19 < uVar22);
  }
  lVar12 = *(longlong *)(param_1 + 0x28);
  uVar22 = uVar22 + 1;
  *(ushort *)(param_1 + 0x32) = uVar22;
  if ((lVar12 == 0) || (*(ushort *)(param_1 + 0x30) < uVar22)) {
    in_stack_ffffffffffffff98 = "for IFD list";
    lVar12 = FUN_144b7aa10(param_1,lVar12,uVar22,0x10,"for IFD list");
    if (lVar12 == 0) {
      return 0;
    }
    uVar22 = *(ushort *)(param_1 + 0x32);
    if (uVar22 < 0x8000) {
      sVar6 = uVar22 * 2;
    }
    *(short *)(param_1 + 0x30) = sVar6;
    *(longlong *)(param_1 + 0x28) = lVar12;
  }
  *(longlong *)(lVar12 + -8 + (ulonglong)uVar22 * 8) = lVar17;
  (**(code **)(param_1 + 0x3b8))(param_1);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  *(short *)(param_1 + 0x300) = *(short *)(param_1 + 0x300) + 1;
  uVar22 = FUN_144b80690(param_1,uVar13,&local_res8,param_1 + 0x20);
  uVar28 = (ulonglong)uVar22;
  if (uVar22 == 0) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                  "Failed to read directory at offset %llu",uVar13);
    return 0;
  }
  puVar29 = (ushort *)CONCAT62(uStackX_a,local_res8);
  uVar19 = 0;
  uVar23 = 0;
  puVar14 = puVar29;
  local_res20 = puVar29;
  if (uVar22 != 0) {
    do {
      if (*puVar14 < uVar19) {
        FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectoryCheckOrder",
                      "Invalid TIFF directory; tags are not sorted in ascending order");
        break;
      }
      uVar23 = uVar23 + 1;
      uVar19 = *puVar14 + 1;
      puVar14 = puVar14 + 0x10;
    } while (uVar23 < uVar22);
    uVar19 = 1;
    puVar14 = puVar29;
    do {
      if (uVar19 < uVar22) {
        uVar24 = (ulonglong)(ushort)(uVar22 - uVar19);
        puVar4 = puVar14;
        do {
          if (*puVar14 == puVar4[0x10]) {
            *(undefined1 *)(puVar4 + 0x1c) = 1;
          }
          uVar24 = uVar24 - 1;
          puVar4 = puVar4 + 0x10;
        } while (uVar24 != 0);
      }
      puVar14 = puVar14 + 0x10;
      uVar19 = uVar19 + 1;
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfbefffbf;
  FUN_144b77f10(param_1);
  FUN_144b78240(param_1);
  FUN_144b78170(param_1,0x11c,1);
  uVar19 = 0;
  puVar14 = puVar29;
  if (uVar22 != 0) {
    do {
      if (*puVar14 == 0x115) {
        iVar7 = FUN_144b80c70(param_1,puVar14,0);
        if (iVar7 == 0) goto LAB_144b7b4ff;
        *(undefined1 *)(puVar14 + 0xc) = 1;
        break;
      }
      puVar14 = puVar14 + 0x10;
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar22);
    uVar19 = 0;
    puVar14 = puVar29;
    do {
      if (*puVar14 == 0x103) {
        iVar7 = FUN_144b7c880(param_1,puVar14,&local_res8);
        if (iVar7 == 1) {
          iVar7 = FUN_144b7fd10(param_1,puVar14,&local_res8);
        }
        if (iVar7 != 0) {
          pcVar26 = "Compression";
          goto LAB_144b7b4fa;
        }
        iVar7 = FUN_144b78170(param_1,0x103,local_res8);
        if (iVar7 == 0) goto LAB_144b7b4ff;
        *(undefined1 *)(puVar14 + 0xc) = 1;
        goto LAB_144b7b445;
      }
      puVar14 = puVar14 + 0x10;
      uVar19 = uVar19 + 1;
    } while (uVar19 < uVar22);
  }
  iVar7 = FUN_144b78170(param_1,0x103,1);
  if (iVar7 == 0) goto LAB_144b7b4ff;
  if (uVar22 != 0) {
LAB_144b7b445:
    puVar14 = puVar29 + 0xc;
    uVar19 = 0;
LAB_144b7b450:
    if ((char)*puVar14 == '\0') {
      iVar7 = *(int *)(param_1 + 0x478);
      iVar10 = -1;
      uVar23 = puVar14[-0xc];
      if (iVar7 != 0) {
        do {
          iVar8 = (iVar7 + iVar10) / 2;
          uVar28 = (ulonglong)iVar8;
          uVar9 = **(uint **)(*(longlong *)(param_1 + 0x470) + uVar28 * 8);
          if (uVar9 == uVar23) {
            if (iVar8 == 0) goto LAB_144b7b555;
            puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x470) + -8 + uVar28 * 8);
            uVar24 = uVar28;
            goto LAB_144b7b543;
          }
          iVar5 = iVar8;
          if (uVar23 <= uVar9) {
            iVar5 = iVar10;
            iVar7 = iVar8;
          }
          iVar10 = iVar5;
        } while (iVar10 + 1 != iVar7);
      }
      goto LAB_144b7b55e;
    }
    goto LAB_144b7b6f3;
  }
LAB_144b7b710:
  iVar10 = 0;
  if ((*(short *)(param_1 + 0x68) == 6) && (*(short *)(param_1 + 0x9a) == 2)) {
    iVar7 = FUN_144b81dc0(param_1);
    if (iVar7 == 0) goto LAB_144b7b4ff;
    uVar19 = 0;
    puVar14 = puVar29;
    if (uVar22 != 0) {
      do {
        if (*puVar14 == 0x111) {
          if (*(longlong *)(puVar14 + 4) == 1) {
            uVar19 = 0;
            puVar14 = puVar29;
            goto LAB_144b7b776;
          }
          break;
        }
        uVar19 = uVar19 + 1;
        puVar14 = puVar14 + 0x10;
      } while (uVar19 < uVar22);
    }
  }
  goto LAB_144b7b7b2;
  while( true ) {
    uVar28 = (ulonglong)((int)uVar28 - 1);
    puVar20 = puVar20 + -1;
    uVar24 = uVar24 - 1;
    if (uVar24 == 0) break;
LAB_144b7b543:
    if (*(uint *)*puVar20 != (uint)uVar23) break;
  }
LAB_144b7b555:
  if ((int)uVar28 != -1) goto LAB_144b7b61f;
LAB_144b7b55e:
  in_stack_ffffffffffffff98 =
       (char *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff98 >> 0x20),(uint)uVar23);
  FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                "Unknown field with tag %d (0x%x) encountered",uVar23,in_stack_ffffffffffffff98);
  uVar13 = FUN_144e94010(param_1,puVar14[-0xc],puVar14[-0xb]);
  iVar7 = FUN_144e93e30(param_1,uVar13,1);
  uVar23 = puVar14[-0xc];
  uVar9 = (uint)uVar23;
  if (iVar7 != 0) {
    iVar7 = *(int *)(param_1 + 0x478);
    iVar10 = -1;
    if (iVar7 != 0) {
      do {
        iVar8 = (iVar7 + iVar10) / 2;
        uVar24 = (ulonglong)iVar8;
        uVar11 = **(uint **)(*(longlong *)(param_1 + 0x470) + uVar24 * 8);
        if (uVar11 == uVar9) {
          uVar28 = uVar24;
          if (iVar8 == 0) goto LAB_144b7b61f;
          puVar20 = (undefined8 *)(*(longlong *)(param_1 + 0x470) + -8 + uVar24 * 8);
          goto LAB_144b7b690;
        }
        iVar5 = iVar8;
        if (uVar9 <= uVar11) {
          iVar5 = iVar10;
          iVar7 = iVar8;
        }
        iVar10 = iVar5;
      } while (iVar10 + 1 != iVar7);
    }
    uVar28 = 0xffffffff;
    goto LAB_144b7b61f;
  }
  in_stack_ffffffffffffff98 =
       (char *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff98 >> 0x20),uVar9);
  FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                "Registering anonymous field with tag %d (0x%x) failed",uVar23,
                in_stack_ffffffffffffff98);
  goto LAB_144b7b6f0;
  while( true ) {
    uVar28 = (ulonglong)((int)uVar28 - 1);
    puVar20 = puVar20 + -1;
    uVar24 = uVar24 - 1;
    if (uVar24 == 0) break;
LAB_144b7b690:
    if (*(uint *)*puVar20 != uVar9) break;
  }
LAB_144b7b61f:
  if ((char)*puVar14 != '\0') goto LAB_144b7b6f3;
  uVar1 = *(ushort *)
           (*(longlong *)(*(longlong *)(param_1 + 0x470) + (uVar28 & 0xffffffff) * 8) + 0x18);
  if (uVar1 != 0) {
    if (uVar23 < 0x80e6) {
      if (uVar23 != 0x80e5) {
        switch(uVar23) {
        case 0x100:
        case 0x101:
        case 0x116:
        case 0x11c:
        case 0x142:
        case 0x143:
        case 0x152:
          break;
        default:
          goto switchD_144b7b681_caseD_102;
        case 0x111:
        case 0x117:
        case 0x144:
        case 0x145:
          *(uint *)(param_1 + (ulonglong)(uVar1 >> 5) * 4 + 0x38) =
               *(uint *)(param_1 + 0x38 + (ulonglong)(uVar1 >> 5) * 4) | 1 << (uVar1 & 0x1f);
          goto LAB_144b7b6f3;
        }
      }
    }
    else if (uVar23 != 0x80e6) {
switchD_144b7b681_caseD_102:
      iVar7 = FUN_144e94200(param_1);
      if (iVar7 != 0) goto LAB_144b7b6f3;
      goto LAB_144b7b6f0;
    }
    iVar7 = FUN_144b80c70(param_1,puVar14 + -0xc,0);
    if (iVar7 == 0) goto LAB_144b7b4ff;
  }
LAB_144b7b6f0:
  *(char *)puVar14 = '\x01';
LAB_144b7b6f3:
  uVar19 = uVar19 + 1;
  puVar14 = puVar14 + 0x10;
  puVar29 = local_res20;
  if (uVar22 <= uVar19) goto LAB_144b7b710;
  goto LAB_144b7b450;
  while( true ) {
    puVar14 = puVar14 + 0x10;
    uVar19 = uVar19 + 1;
    if (uVar22 <= uVar19) break;
LAB_144b7b776:
    if (*puVar14 == 0x117) {
      if (*(longlong *)(puVar14 + 4) == 1) {
        *(undefined2 *)(param_1 + 0x9a) = 1;
        FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                      "Planarconfig tag value assumed incorrect, assuming data is contig instead of chunky"
                     );
      }
      break;
    }
  }
LAB_144b7b7b2:
  if ((*(uint *)(param_1 + 0x38) & 2) == 0) {
    pcVar26 = "ImageLength";
LAB_144b7b7c0:
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"MissingRequired",
                  "TIFF directory is missing required \"%s\" field",pcVar26);
    goto LAB_144b7b4ff;
  }
  if ((*(uint *)(param_1 + 0x38) & 4) == 0) {
    uVar9 = FUN_144b77d80();
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffbff;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x50);
  }
  else {
    uVar9 = FUN_144b7b020(param_1);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x400;
  }
  uVar11 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0xd4) = uVar9;
  if (uVar9 == 0) {
    pcVar26 = "strips";
    if ((uVar11 >> 10 & 1) != 0) {
      pcVar26 = "tiles";
    }
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                  "Cannot handle zero number of %s",pcVar26);
    goto LAB_144b7b4ff;
  }
  *(uint *)(param_1 + 0xd0) = uVar9;
  if (*(short *)(param_1 + 0x9a) == 2) {
    *(uint *)(param_1 + 0xd0) = uVar9 / *(ushort *)(param_1 + 0x72);
  }
  if ((*(uint *)(param_1 + 0x38) >> 0x19 & 1) == 0) {
    if (*(short *)(param_1 + 0x68) == 6) {
      bVar30 = false;
      if ((uVar11 & 0x400) == 0) {
        if (uVar9 == 1) {
          *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x2000000;
          goto LAB_144b7b8ac;
        }
        goto LAB_144b7b924;
      }
    }
    else {
LAB_144b7b924:
      bVar30 = (uVar11 & 0x400) == 0;
    }
    pcVar26 = "StripOffsets";
    if (!bVar30) {
      pcVar26 = "TileOffsets";
    }
    goto LAB_144b7b7c0;
  }
LAB_144b7b8ac:
  uVar19 = 0;
  puVar14 = puVar29;
  if (uVar22 != 0) {
    pcVar26 = "unknown tagname";
    do {
      uVar31 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
      if ((char)puVar29[0xc] != '\0') goto LAB_144b7bd37;
      uVar23 = *puVar29;
      if (0x80e4 < uVar23) {
switchD_144b7b922_caseD_100:
        FUN_144b80c70(param_1,puVar29,1);
        goto LAB_144b7bd37;
      }
      if (uVar23 == 0x80e4) {
switchD_144b7b922_caseD_102:
        iVar7 = FUN_144b7c880(param_1,puVar29,&local_res8);
        if (iVar7 == 1) {
          if (*(ulonglong *)(puVar29 + 4) < (ulonglong)*(ushort *)(param_1 + 0x72)) {
LAB_144b7bdbc:
            iVar7 = 1;
            goto LAB_144b7bdc1;
          }
          iVar7 = FUN_144b7d890(param_1,puVar29,local_50);
          if ((iVar7 == 0) && (local_50[0] != (short *)0x0)) {
            sVar6 = *(short *)(param_1 + 0x72);
            local_res8 = *local_50[0];
            psVar21 = local_50[0];
            do {
              sVar6 = sVar6 + -1;
              if (sVar6 == 0) goto LAB_144b7bcce;
              psVar21 = psVar21 + 1;
            } while (*psVar21 == local_res8);
            iVar7 = 5;
LAB_144b7bcce:
            free(local_50[0]);
          }
        }
        uVar23 = *puVar29;
        if (iVar7 != 0) {
LAB_144b7bdc5:
          lVar17 = FUN_144e93aa0(param_1,uVar23);
          if (lVar17 != 0) {
            pcVar26 = *(char **)(lVar17 + 0x20);
          }
LAB_144b7b4fa:
          FUN_144b80210(param_1,iVar7,"TIFFReadDirectory",pcVar26,
                        (ulonglong)in_stack_ffffffffffffff98 & 0xffffffff00000000);
          goto LAB_144b7b4ff;
        }
        iVar7 = FUN_144b78170(param_1,uVar23,local_res8);
        if (iVar7 != 0) {
          if (*puVar29 == 0x102) {
            local_res18 = 1;
            iVar10 = 1;
          }
          goto LAB_144b7bd37;
        }
        goto LAB_144b7b4ff;
      }
      switch(uVar23) {
      case 0xff:
        iVar7 = FUN_144b7c880(param_1,puVar29,local_res10);
        if (iVar7 == 0) {
          if (local_res10[0] == 2) {
            FUN_144b78170(param_1,0xfe,1);
          }
          else if (local_res10[0] == 3) {
            FUN_144b78170(param_1,0xfe,2);
          }
        }
        break;
      default:
        goto switchD_144b7b922_caseD_100;
      case 0x102:
      case 0x118:
      case 0x119:
      case 0x153:
        goto switchD_144b7b922_caseD_102;
      case 0x111:
      case 0x144:
        uVar23 = puVar29[1];
        if (((uVar23 != 3) && (uVar23 != 4)) &&
           ((uVar23 != 0x10 &&
            ((((*(int *)(param_1 + 0xc) != 2 || (*(longlong *)(puVar29 + 4) != 0)) || (uVar23 != 0))
             || (*(longlong *)(puVar29 + 8) != 0)))))) {
          FUN_144e93aa0(param_1);
          FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                        "Invalid data type for tag %s");
        }
        lVar17 = param_1 + 0xf0;
        goto LAB_144b7ba21;
      case 0x117:
      case 0x145:
        uVar23 = puVar29[1];
        if ((((uVar23 != 3) && (uVar23 != 4)) && (uVar23 != 0x10)) &&
           (((*(int *)(param_1 + 0xc) != 2 || (*(longlong *)(puVar29 + 4) != 0)) ||
            ((uVar23 != 0 || (*(longlong *)(puVar29 + 8) != 0)))))) {
          FUN_144e93aa0(param_1);
          FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                        "Invalid data type for tag %s");
        }
        lVar17 = param_1 + 0x110;
LAB_144b7ba21:
        FUN_144e92fa0(lVar17,puVar29,0x20);
        break;
      case 0x12d:
      case 0x140:
        local_58 = (void *)0x0;
        if (iVar10 == 0) {
          FUN_144e93aa0(param_1);
          FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                        "Ignoring %s since BitsPerSample tag not found");
        }
        else if (*(ushort *)(param_1 + 100) < 0x19) {
          uVar9 = 1 << ((byte)*(ushort *)(param_1 + 100) & 0x1f);
          if ((uVar23 == 0x12d) && (uVar28 = *(ulonglong *)(puVar29 + 4), uVar28 == uVar9)) {
            uVar25 = 0;
            uVar11 = uVar9;
          }
          else {
            uVar28 = *(ulonglong *)(puVar29 + 4);
            uVar11 = uVar9 * 3;
            uVar25 = uVar9;
          }
          if (uVar28 == uVar11) {
            iVar7 = FUN_144b7d890(param_1,puVar29,&local_58);
            pvVar15 = local_58;
            uVar23 = *puVar29;
            if (iVar7 == 0) {
              in_stack_ffffffffffffff98 = (char *)((longlong)local_58 + (ulonglong)(uVar25 * 2) * 2)
              ;
              FUN_144b78170(param_1,uVar23,local_58,
                            (void *)((longlong)local_58 + (ulonglong)uVar25 * 2),
                            in_stack_ffffffffffffff98);
              free(pvVar15);
              break;
            }
          }
          else {
            iVar7 = 1;
          }
          lVar17 = FUN_144e93aa0(param_1,uVar23);
          if (lVar17 == 0) {
            pcVar27 = "unknown tagname";
          }
          else {
            pcVar27 = *(char **)(lVar17 + 0x20);
          }
          in_stack_ffffffffffffff98 = (char *)CONCAT44(uVar31,1);
          FUN_144b80210(param_1,iVar7,"TIFFReadDirectory",pcVar27,in_stack_ffffffffffffff98);
        }
        else {
          lVar17 = FUN_144e93aa0(param_1);
          if (lVar17 == 0) {
            pcVar27 = "unknown tagname";
          }
          else {
            pcVar27 = *(char **)(lVar17 + 0x20);
          }
          in_stack_ffffffffffffff98 = (char *)CONCAT44(uVar31,(uint)*(ushort *)(param_1 + 100));
          FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                        "Ignoring %s because BitsPerSample=%d>24",pcVar27,in_stack_ffffffffffffff98)
          ;
        }
        break;
      case 0x154:
      case 0x155:
        local_58 = (void *)0x0;
        if (*(ulonglong *)(puVar29 + 4) != (ulonglong)*(ushort *)(param_1 + 0x72))
        goto LAB_144b7bdbc;
        iVar7 = FUN_144b7f620(param_1,puVar29,&local_58);
        if (iVar7 != 0) {
LAB_144b7bdc1:
          uVar23 = *puVar29;
          goto LAB_144b7bdc5;
        }
        uVar9 = *(uint *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x10) = uVar9 | 0x400000;
        iVar7 = FUN_144b78170(param_1,*puVar29,local_58);
        *(uint *)(param_1 + 0x10) = uVar9;
        free(local_58);
        iVar10 = local_res18;
        if (iVar7 != 0) break;
        goto LAB_144b7b4ff;
      }
LAB_144b7bd37:
      uVar19 = uVar19 + 1;
      puVar29 = puVar29 + 0x10;
      puVar14 = local_res20;
    } while (uVar19 < uVar22);
  }
  if ((((*(int *)(param_1 + 0xc) == 2) && (*(short *)(param_1 + 0xf0) != 0)) &&
      ((*(longlong *)(param_1 + 0xf8) == 0 &&
       ((((*(short *)(param_1 + 0xf2) == 0 && (*(longlong *)(param_1 + 0x100) == 0)) &&
         (*(short *)(param_1 + 0x110) != 0)) &&
        ((*(longlong *)(param_1 + 0x118) == 0 && (*(short *)(param_1 + 0x112) == 0)))))))) &&
     (*(longlong *)(param_1 + 0x120) == 0)) {
    FUN_144e945e0(param_1);
  }
  else if (((*(uint *)(param_1 + 0x10) & 0x1000000) == 0) &&
          (((*(short *)(param_1 + 0xf0) != 0 &&
            (iVar7 = FUN_144b81a60(param_1,(short *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xd4)
                                   ,param_1 + 0xd8), iVar7 == 0)) ||
           ((*(short *)(param_1 + 0x110) != 0 &&
            (iVar7 = FUN_144b81a60(param_1,(short *)(param_1 + 0x110),
                                   *(undefined4 *)(param_1 + 0xd4),param_1 + 0xe0), iVar7 == 0))))))
  goto LAB_144b7b4ff;
  iVar7 = 3;
  if (*(short *)(param_1 + 0x68) == 6) {
    if ((*(uint *)(param_1 + 0x38) & 0x100) == 0) {
      FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                    "Photometric tag is missing, assuming data is YCbCr");
      iVar10 = FUN_144b78170(param_1,0x106,6);
      if (iVar10 == 0) goto LAB_144b7b4ff;
    }
    else if (*(short *)(param_1 + 0x6a) == 2) {
      *(undefined2 *)(param_1 + 0x6a) = 6;
      FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                    "Photometric tag value assumed incorrect, assuming data is YCbCr instead of RGB"
                   );
    }
    if ((*(byte *)(param_1 + 0x38) & 0x40) == 0) {
      FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                    "BitsPerSample tag is missing, assuming 8 bits per sample");
      iVar10 = FUN_144b78170(param_1,0x102,8);
      if (iVar10 == 0) goto LAB_144b7b4ff;
    }
    if ((*(uint *)(param_1 + 0x38) & 0x10000) == 0) {
      if (*(short *)(param_1 + 0x6a) == 2) {
        FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                      "SamplesPerPixel tag is missing, assuming correct SamplesPerPixel value is 3")
        ;
        iVar10 = FUN_144b78170(param_1,0x115,3);
        if (iVar10 == 0) goto LAB_144b7b4ff;
      }
      if (*(ushort *)(param_1 + 0x6a) == 6) {
        FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                      "SamplesPerPixel tag is missing, applying correct SamplesPerPixel value of 3")
        ;
        iVar10 = FUN_144b78170(param_1,0x115,3);
      }
      else {
        if (1 < *(ushort *)(param_1 + 0x6a)) goto LAB_144b7bf85;
        iVar10 = FUN_144b78170(param_1,0x115,1);
      }
      if (iVar10 == 0) goto LAB_144b7b4ff;
    }
  }
LAB_144b7bf85:
  uVar19 = *(ushort *)(param_1 + 0x6a);
  if (uVar19 < 0x8024) {
    switch(uVar19) {
    case 0:
    case 1:
    case 3:
      iVar7 = 1;
      break;
    case 2:
    case 6:
    case 8:
    case 9:
    case 10:
      break;
    case 4:
    case 5:
      iVar7 = 4;
      break;
    default:
      goto switchD_144b7bfb2_caseD_7;
    }
switchD_144b7bfb2_caseD_2:
    if ((int)((uint)*(ushort *)(param_1 + 0x72) - (uint)*(ushort *)(param_1 + 0xc4)) <= iVar7)
    goto switchD_144b7bfb2_caseD_7;
    FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                  "Sum of Photometric type-related color channels and ExtraSamples doesn\'t match SamplesPerPixel. Defining non-color channels as ExtraSamples."
                 );
    uVar19 = *(ushort *)(param_1 + 0xc4);
    sVar6 = *(short *)(param_1 + 0x72) - (short)iVar7;
    *(short *)(param_1 + 0xc4) = sVar6;
    pvVar15 = (void *)FUN_144e92f60(sVar6,2);
    if (pvVar15 == (void *)0x0) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",
                    "Failed to allocate memory for temporary new sampleinfo array (%d 16 bit elements)"
                    ,*(undefined2 *)(param_1 + 0xc4));
      goto LAB_144b7b4ff;
    }
    memcpy(pvVar15,*(void **)(param_1 + 200),(ulonglong)uVar19 * 2);
    FUN_144b78420(param_1 + 200,pvVar15,*(undefined2 *)(param_1 + 0xc4));
    free(pvVar15);
    uVar19 = *(ushort *)(param_1 + 0x6a);
  }
  else {
    if ((uVar19 != 0x804c) && (uVar19 == 0x804d)) goto switchD_144b7bfb2_caseD_2;
switchD_144b7bfb2_caseD_7:
  }
  if ((uVar19 == 3) && ((*(uint *)(param_1 + 0x38) & 0x4000000) == 0)) {
    if (*(ushort *)(param_1 + 100) < 8) {
      pcVar26 = "Colormap";
      goto LAB_144b7b7c0;
    }
    if (*(short *)(param_1 + 0x72) == 3) {
      *(undefined2 *)(param_1 + 0x6a) = 2;
    }
    else {
      *(undefined2 *)(param_1 + 0x6a) = 1;
    }
  }
  if (*(short *)(param_1 + 0x68) != 6) {
    if ((*(uint *)(param_1 + 0x38) & 0x1000000) == 0) {
      if (*(short *)(param_1 + 0x9a) == 1) {
        if (1 < *(uint *)(param_1 + 0xd4)) {
LAB_144b7c13d:
          pcVar26 = "StripByteCounts";
          goto LAB_144b7b7c0;
        }
      }
      else if ((*(short *)(param_1 + 0x9a) == 2) &&
              (*(uint *)(param_1 + 0xd4) != (uint)*(ushort *)(param_1 + 0x72))) goto LAB_144b7c13d;
      pcVar26 = 
      "TIFF directory is missing required \"StripByteCounts\" field, calculating from imagelength";
LAB_144b7c24f:
      FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",pcVar26);
      iVar7 = FUN_144b803c0(param_1,puVar14,uVar22);
      if (iVar7 < 0) {
LAB_144b7b4ff:
        if (local_res20 != (ushort *)0x0) {
          free(local_res20);
        }
        return 0;
      }
    }
    else {
      if ((*(int *)(param_1 + 0xd4) == 1) && ((*(uint *)(param_1 + 0x10) & 0x400) == 0)) {
        uVar28 = FUN_144b7c650(param_1);
        uVar24 = FUN_144b7c5b0(param_1);
        if (uVar24 != 0) {
          if (uVar28 == 0) {
LAB_144b7c1dc:
            pcVar26 = "Bogus \"StripByteCounts\" field, ignoring and calculating from imagelength";
            goto LAB_144b7c24f;
          }
          if (*(short *)(param_1 + 0x68) == 1) {
            uVar16 = (**(code **)(param_1 + 0x460))(*(undefined8 *)(param_1 + 0x438));
            if ((uVar24 <= uVar16) && (uVar16 - uVar24 < uVar28)) goto LAB_144b7c1dc;
            if (*(int *)(param_1 + 0xc) == 0) {
              uVar24 = FUN_144b77940(param_1);
              uVar16 = CONCAT44(0,*(uint *)(param_1 + 0x4c));
              if (((*(uint *)(param_1 + 0x4c) != 0) &&
                  (auVar2._8_8_ = 0, auVar2._0_8_ = uVar16,
                  SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar2,0) < uVar24))
                 || (uVar28 < uVar24 * uVar16)) goto LAB_144b7c1dc;
            }
          }
        }
      }
      if ((((*(uint *)(param_1 + 0x10) & 0x1000000) == 0) && (*(short *)(param_1 + 0x9a) == 1)) &&
         ((2 < *(uint *)(param_1 + 0xd4) && (*(short *)(param_1 + 0x68) == 1)))) {
        lVar17 = FUN_144b7c650(param_1,1);
        lVar12 = FUN_144b7c650(param_1,0);
        if (((lVar12 != lVar17) && (lVar17 = FUN_144b7c650(param_1,0), lVar17 != 0)) &&
           (lVar17 = FUN_144b7c650(param_1,1), lVar17 != 0)) {
          pcVar26 = "Wrong \"StripByteCounts\" field, ignoring and calculating from imagelength";
          goto LAB_144b7c24f;
        }
      }
    }
  }
  if (puVar14 != (ushort *)0x0) {
    free(puVar14);
  }
  if ((*(uint *)(param_1 + 0x38) & 0x80000) == 0) {
    if (*(ushort *)(param_1 + 100) < 0x10) {
      sVar6 = (1 << ((byte)*(ushort *)(param_1 + 100) & 0x1f)) + -1;
    }
    else {
      sVar6 = -1;
    }
    *(short *)(param_1 + 0x7a) = sVar6;
  }
  (**(code **)(param_1 + 0x340))(param_1);
  if (*(short *)(param_1 + 0x9a) != 1) goto LAB_144b7c401;
  if ((((*(int *)(param_1 + 0xd4) == 1) && (*(short *)(param_1 + 0x68) == 1)) &&
      ((*(uint *)(param_1 + 0x10) & 0x8400) == 0x8000)) &&
     ((lVar17 = FUN_144b7c650(param_1,0), lVar17 != 0 || (*(int *)(param_1 + 0xc) == 0)))) {
    uVar28 = FUN_144b7c650(param_1,0);
    if ((*(short *)(param_1 + 0x6a) == 6) && ((*(uint *)(param_1 + 0x10) & 0x4000) == 0)) {
      uVar9 = (uint)*(ushort *)(param_1 + 0x142);
    }
    else {
      uVar9 = 1;
    }
    uVar24 = FUN_144b7ac80(param_1);
    if (uVar24 < 0x2001) {
      if (uVar24 == 0) goto LAB_144b7c3c9;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar24;
      uVar11 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x2000)) / auVar3,0);
      uVar9 = uVar9 * uVar11;
      uVar24 = uVar24 * uVar11;
    }
    if ((uVar9 < *(uint *)(param_1 + 0x74)) && (*(uint *)(param_1 + 0x4c) < -uVar9)) {
      uVar16 = (ulonglong)((*(uint *)(param_1 + 0x4c) - 1) + uVar9) / (ulonglong)uVar9;
      uVar11 = (uint)uVar16;
      if ((uVar11 != 0) &&
         (((*(int *)(param_1 + 0xc) != 0 || (uVar11 < 0xf4241)) ||
          ((uVar18 = (**(code **)(param_1 + 0x460))(*(undefined8 *)(param_1 + 0x438)),
           uVar28 < uVar18 &&
           (lVar17 = (**(code **)(param_1 + 0x460))(*(undefined8 *)(param_1 + 0x438)),
           uVar24 <= (lVar17 - uVar28) / (ulonglong)(uVar11 - 1))))))) {
        FUN_144b82550(param_1,uVar16,uVar24,uVar9);
      }
    }
  }
LAB_144b7c3c9:
  if ((((*(short *)(param_1 + 0x9a) == 1) && (*(short *)(param_1 + 0x68) == 1)) &&
      ((*(uint *)(param_1 + 0x10) & 0x8400) == 0x8000)) &&
     (uVar28 = FUN_144b77ad0(param_1), 0x7fffffff < uVar28)) {
    FUN_144b81be0(param_1);
  }
LAB_144b7c401:
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffdffff7;
  *(undefined4 *)(param_1 + 0x2fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x304) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x328) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x330) = 0xffffffffffffffff;
  lVar17 = FUN_144b77aa0(param_1);
  *(longlong *)(param_1 + 0x3d8) = lVar17;
  if (lVar17 == 0) {
    pcVar26 = "Cannot handle zero scanline size";
  }
  else if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
    lVar17 = FUN_144b77ae0(param_1);
    if (lVar17 != 0) {
      return 1;
    }
    pcVar26 = "Cannot handle zero strip size";
  }
  else {
    lVar17 = FUN_144b7ac50();
    *(longlong *)(param_1 + 0x330) = lVar17;
    if (lVar17 != 0) {
      return 1;
    }
    pcVar26 = "Cannot handle zero tile size";
  }
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFReadDirectory",pcVar26);
  return 0;
}



// FUNCTION 144b7c5b0 FUN_144b7c5b0 body=149 status=ok
// SIG undefined FUN_144b7c5b0(void)

undefined8 FUN_144b7c5b0(longlong param_1,uint param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x10) & 0x5000000) == 0x1000000) {
    if (((*(uint *)(param_1 + 0x10) >> 0x19 & 1) == 0) || (*(ulonglong *)(param_1 + 0xf8) < 5)) {
      FUN_144b81dc0(param_1,1);
    }
    else {
      iVar1 = FUN_144b82a20(param_1,(ulonglong)param_2,param_1 + 0xf0,param_1 + 0xd8);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  if ((*(longlong *)(param_1 + 0xd8) != 0) && (param_2 < *(uint *)(param_1 + 0xd4))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 144b7c650 FUN_144b7c650 body=149 status=ok
// SIG undefined FUN_144b7c650(void)

undefined8 FUN_144b7c650(longlong param_1,uint param_2)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x10) & 0x5000000) == 0x1000000) {
    if (((*(uint *)(param_1 + 0x10) >> 0x19 & 1) == 0) || (*(ulonglong *)(param_1 + 0x118) < 5)) {
      FUN_144b81dc0(param_1,1);
    }
    else {
      iVar1 = FUN_144b82a20(param_1,(ulonglong)param_2,param_1 + 0x110,param_1 + 0xe0);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  if ((*(longlong *)(param_1 + 0xe0) != 0) && (param_2 < *(uint *)(param_1 + 0xd4))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 144b7c6f0 FUN_144b7c6f0 body=187 status=ok
// SIG undefined FUN_144b7c6f0(void)

undefined8 FUN_144b7c6f0(longlong param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x5000000) == 0x1000000) {
    if (((*(uint *)(param_1 + 0x10) >> 0x19 & 1) == 0) || (*(ulonglong *)(param_1 + 0xf8) < 5)) {
      iVar1 = FUN_144b81dc0(param_1,1);
      if ((iVar1 == 0) && (param_3 != (undefined4 *)0x0)) {
        *param_3 = 1;
      }
    }
    else {
      iVar1 = FUN_144b82a20(param_1,(ulonglong)param_2,param_1 + 0xf0,param_1 + 0xd8);
      if (iVar1 == 0) goto LAB_144b7c752;
    }
  }
  if ((*(longlong *)(param_1 + 0xd8) != 0) && (param_2 < *(uint *)(param_1 + 0xd4))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)param_2 * 8);
  }
LAB_144b7c752:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 1;
  }
  return 0;
}



// FUNCTION 144b7c7b0 FUN_144b7c7b0 body=187 status=ok
// SIG undefined FUN_144b7c7b0(void)

undefined8 FUN_144b7c7b0(longlong param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if ((*(uint *)(param_1 + 0x10) & 0x5000000) == 0x1000000) {
    if (((*(uint *)(param_1 + 0x10) >> 0x19 & 1) == 0) || (*(ulonglong *)(param_1 + 0x118) < 5)) {
      iVar1 = FUN_144b81dc0(param_1,1);
      if ((iVar1 == 0) && (param_3 != (undefined4 *)0x0)) {
        *param_3 = 1;
      }
    }
    else {
      iVar1 = FUN_144b82a20(param_1,(ulonglong)param_2,param_1 + 0x110,param_1 + 0xe0);
      if (iVar1 == 0) goto LAB_144b7c812;
    }
  }
  if ((*(longlong *)(param_1 + 0xe0) != 0) && (param_2 < *(uint *)(param_1 + 0xd4))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)param_2 * 8);
  }
LAB_144b7c812:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 1;
  }
  return 0;
}



// FUNCTION 144b7c870 FUN_144b7c870 body=10 status=ok
// SIG undefined FUN_144b7c870(void)

void FUN_144b7c870(undefined8 param_1)

{
  FUN_144b81dc0(param_1,1);
  return;
}



// FUNCTION 144b7c880 FUN_144b7c880 body=314 status=ok
// SIG undefined FUN_144b7c880(void)

undefined8 FUN_144b7c880(longlong param_1,longlong param_2,short *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  short local_res10;
  undefined2 uStackX_12;
  undefined4 uStackX_14;
  
  if (*(longlong *)(param_2 + 8) != 1) {
    return 1;
  }
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    uVar2 = (ulonglong)*(byte *)(param_2 + 0x10);
    break;
  default:
    return 2;
  case 3:
    *param_3 = *(short *)(param_2 + 0x10);
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93040(param_3);
    }
    return 0;
  case 4:
  case 9:
    uVar1 = *(uint *)(param_2 + 0x10);
    local_res10 = (short)uVar1;
    uStackX_12 = (undefined2)(uVar1 >> 0x10);
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93050(&local_res10);
      uVar1 = CONCAT22(uStackX_12,local_res10);
    }
    uVar2 = (ulonglong)uVar1;
    bVar4 = uVar1 < 0xffff;
    bVar5 = uVar1 == 0xffff;
    goto LAB_144b7c957;
  case 6:
    if (*(char *)(param_2 + 0x10) < '\0') {
      return 4;
    }
    *param_3 = (short)*(char *)(param_2 + 0x10);
    return 0;
  case 8:
    local_res10 = *(short *)(param_2 + 0x10);
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93040(&local_res10);
    }
    if (local_res10 < 0) {
      return 4;
    }
    *param_3 = local_res10;
    return 0;
  case 0x10:
    uVar3 = FUN_144b7fdc0(param_1,param_2,&local_res10);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar2 = CONCAT44(uStackX_14,CONCAT22(uStackX_12,local_res10));
    bVar4 = uVar2 < 0xffff;
    bVar5 = uVar2 == 0xffff;
LAB_144b7c957:
    if (!bVar4 && !bVar5) {
      return 4;
    }
    *param_3 = (short)uVar2;
    return 0;
  case 0x11:
    uVar3 = FUN_144b7fe40(param_1,param_2,&local_res10);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar2 = CONCAT44(uStackX_14,CONCAT22(uStackX_12,local_res10));
    if (0xffff < uVar2) {
      return 4;
    }
  }
  *param_3 = (short)uVar2;
  return 0;
}



// FUNCTION 144b7ca00 FUN_144b7ca00 body=878 status=ok
// SIG undefined FUN_144b7ca00(void)

undefined8 FUN_144b7ca00(longlong param_1,longlong param_2,float *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort local_res10;
  undefined2 uStackX_12;
  int iStackX_14;
  double local_res20;
  
  if (*(longlong *)(param_2 + 8) != 1) {
    return 1;
  }
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    *param_3 = (float)*(byte *)(param_2 + 0x10);
    return 0;
  default:
    uVar5 = 2;
    break;
  case 3:
    local_res10 = *(ushort *)(param_2 + 0x10);
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93040(&local_res10);
    }
    *param_3 = (float)local_res10;
    return 0;
  case 4:
    uVar6 = *(uint *)(param_2 + 0x10);
    local_res10 = (ushort)uVar6;
    uStackX_12 = (undefined2)(uVar6 >> 0x10);
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93050(&local_res10);
      uVar6 = CONCAT22(uStackX_12,local_res10);
    }
    *param_3 = (float)uVar6;
    return 0;
  case 5:
    uVar5 = FUN_144b7fec0(param_1,param_2,&local_res10);
    goto LAB_144b7cc1b;
  case 6:
    *param_3 = (float)(int)*(char *)(param_2 + 0x10);
    return 0;
  case 8:
    local_res10 = *(ushort *)(param_2 + 0x10);
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93040(&local_res10);
    }
    *param_3 = (float)(int)(short)local_res10;
    return 0;
  case 9:
    iVar3 = *(int *)(param_2 + 0x10);
    local_res10 = (ushort)iVar3;
    uStackX_12 = (undefined2)((uint)iVar3 >> 0x10);
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93050(&local_res10);
      iVar3 = CONCAT22(uStackX_12,local_res10);
    }
    *param_3 = (float)iVar3;
    return 0;
  case 10:
    uVar5 = FUN_144b7ffe0(param_1,param_2,&local_res10);
LAB_144b7cc1b:
    if ((int)uVar5 == 0) {
      local_res20 = (double)CONCAT44(iStackX_14,CONCAT22(uStackX_12,local_res10));
LAB_144b7cc2c:
      *param_3 = (float)local_res20;
      return 0;
    }
    break;
  case 0xb:
    *param_3 = *(float *)(param_2 + 0x10);
    if ((*(byte *)(param_1 + 0x10) & 0x80) == 0) {
      return 0;
    }
    FUN_144e93050(param_3);
    return 0;
  case 0xc:
    uVar6 = *(uint *)(param_1 + 0x10);
    if ((uVar6 >> 0x13 & 1) == 0) {
      uVar2 = *(uint *)(param_2 + 0x10);
      local_res10 = (ushort)uVar2;
      uStackX_12 = (undefined2)(uVar2 >> 0x10);
      if ((char)uVar6 < '\0') {
        FUN_144e93050(&local_res10);
        uVar6 = *(uint *)(param_1 + 0x10);
        uVar2 = CONCAT22(uStackX_12,local_res10);
      }
      if ((uVar6 >> 0xb & 1) == 0) {
        iVar3 = FUN_144b7aaf0(param_1);
        if ((iVar3 == 0) ||
           (lVar4 = (**(code **)(param_1 + 0x440))(*(undefined8 *)(param_1 + 0x438),&local_res20,8),
           lVar4 != 8)) {
          return 3;
        }
      }
      else {
        if (*(ulonglong *)(param_1 + 0x420) < (ulonglong)uVar2 + 8) {
          return 3;
        }
        FUN_144e92fa0(&local_res20,(ulonglong)uVar2 + *(longlong *)(param_1 + 0x418),8);
      }
      uVar6 = *(uint *)(param_1 + 0x10);
    }
    else {
      local_res20 = *(double *)(param_2 + 0x10);
    }
    if ((char)uVar6 < '\0') {
      FUN_144e93070(&local_res20);
    }
    if ((3.4028234663852886e+38 < local_res20) || (local_res20 < -3.4028234663852886e+38)) {
      return 4;
    }
    goto LAB_144b7cc2c;
  case 0x10:
    uVar5 = FUN_144b7fdc0(param_1,param_2,&local_res10);
    if ((int)uVar5 == 0) {
      uVar1 = CONCAT44(iStackX_14,CONCAT22(uStackX_12,local_res10));
      if (iStackX_14 < 0) {
        *param_3 = (float)uVar1;
        return 0;
      }
      *param_3 = (float)(longlong)uVar1;
      return uVar5;
    }
    break;
  case 0x11:
    uVar5 = FUN_144b7fe40(param_1,param_2,&local_res10);
    if ((int)uVar5 == 0) {
      *param_3 = (float)CONCAT44(iStackX_14,CONCAT22(uStackX_12,local_res10));
      return uVar5;
    }
  }
  return uVar5;
}



// FUNCTION 144b7cdc0 FUN_144b7cdc0 body=540 status=ok
// SIG undefined FUN_144b7cdc0(void)

undefined8 FUN_144b7cdc0(longlong param_1,longlong param_2,double *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  ushort local_res10;
  undefined2 uStackX_12;
  int iStackX_14;
  
  if (*(longlong *)(param_2 + 8) != 1) {
    return 1;
  }
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    *param_3 = (double)*(byte *)(param_2 + 0x10);
    return 0;
  default:
    uVar4 = 2;
    break;
  case 3:
    local_res10 = *(ushort *)(param_2 + 0x10);
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93040(&local_res10);
    }
    *param_3 = (double)local_res10;
    return 0;
  case 4:
    uVar1 = *(uint *)(param_2 + 0x10);
    local_res10 = (ushort)uVar1;
    uStackX_12 = (undefined2)(uVar1 >> 0x10);
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93050(&local_res10);
      uVar1 = CONCAT22(uStackX_12,local_res10);
    }
    *param_3 = (double)uVar1;
    return 0;
  case 5:
    uVar4 = FUN_144b7fec0(param_1,param_2,param_3);
    return uVar4;
  case 6:
    *param_3 = (double)(int)*(char *)(param_2 + 0x10);
    return 0;
  case 8:
    local_res10 = *(ushort *)(param_2 + 0x10);
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93040(&local_res10);
    }
    *param_3 = (double)(int)(short)local_res10;
    return 0;
  case 9:
    iVar3 = *(int *)(param_2 + 0x10);
    local_res10 = (ushort)iVar3;
    uStackX_12 = (undefined2)((uint)iVar3 >> 0x10);
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93050(&local_res10);
      iVar3 = CONCAT22(uStackX_12,local_res10);
    }
    *param_3 = (double)iVar3;
    return 0;
  case 10:
    uVar4 = FUN_144b7ffe0(param_1,param_2,param_3);
    return uVar4;
  case 0xb:
    local_res10 = (ushort)*(undefined4 *)(param_2 + 0x10);
    uStackX_12 = (undefined2)((uint)*(undefined4 *)(param_2 + 0x10) >> 0x10);
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93050(&local_res10);
    }
    *param_3 = (double)(float)CONCAT22(uStackX_12,local_res10);
    return 0;
  case 0xc:
    uVar4 = FUN_144b80100(param_1,param_2,param_3);
    return uVar4;
  case 0x10:
    uVar4 = FUN_144b7fdc0(param_1,param_2,&local_res10);
    if ((int)uVar4 == 0) {
      uVar2 = CONCAT44(iStackX_14,CONCAT22(uStackX_12,local_res10));
      if (-1 < iStackX_14) {
        *param_3 = (double)(longlong)uVar2;
        return uVar4;
      }
      *param_3 = (double)uVar2;
      return 0;
    }
    break;
  case 0x11:
    uVar4 = FUN_144b7fe40(param_1,param_2,&local_res10);
    if ((int)uVar4 == 0) {
      *param_3 = (double)CONCAT44(iStackX_14,CONCAT22(uStackX_12,local_res10));
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 144b7d020 FUN_144b7d020 body=1001 status=ok
// SIG undefined FUN_144b7d020(void)

ulonglong FUN_144b7d020(longlong param_1,longlong param_2,undefined8 *param_3)

{
  short sVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 *local_res10;
  undefined8 *local_res18;
  ulonglong *local_res20;
  
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0x10:
  case 0x11:
    goto switchD_144b7d064_caseD_1;
  default:
    return 2;
  }
LAB_144b7d185:
  uVar6 = 4;
  param_3 = local_res18;
  puVar2 = local_res10;
switchD_144b7d130_caseD_5:
  local_res10 = puVar2;
  puVar4 = local_res10;
  free(local_res20);
  if ((int)uVar6 == 0) {
    *param_3 = puVar4;
    uVar6 = 0;
  }
  else {
LAB_144b7d365:
    free(local_res10);
  }
  return uVar6;
switchD_144b7d064_caseD_1:
  local_res18 = param_3;
  uVar3 = FUN_144b81fb0(param_1,param_2,&local_res10,1,&local_res20,0xffffffffffffffff);
  uVar6 = uVar3 & 0xffffffff;
  if (((int)uVar3 != 0) || (local_res20 == (ulonglong *)0x0)) {
    *param_3 = 0;
    return uVar3;
  }
  sVar1 = *(short *)(param_2 + 2);
  if ((sVar1 != 1) && (sVar1 != 2)) {
    uVar8 = (uint)local_res10;
    if (sVar1 == 6) {
      uVar8 = 0;
      puVar5 = local_res20;
      if ((uint)local_res10 != 0) {
        do {
          if ((char)*puVar5 < '\0') {
            free(local_res20);
            return 4;
          }
          puVar5 = (ulonglong *)((longlong)puVar5 + 1);
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)local_res10);
      }
    }
    else if (sVar1 != 7) {
      puVar4 = (undefined1 *)FUN_144e92f50((ulonglong)local_res10 & 0xffffffff);
      local_res10 = puVar4;
      if (puVar4 == (undefined1 *)0x0) {
        free(local_res20);
        return 7;
      }
      puVar2 = puVar4;
      switch(*(undefined2 *)(param_2 + 2)) {
      case 3:
        uVar7 = 0;
        bVar9 = (uint)local_res10 != 0;
        puVar5 = local_res20;
        param_3 = local_res18;
        if (bVar9) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93040(puVar5);
            }
            if (0xff < (ushort)*puVar5) goto LAB_144b7d185;
            *puVar4 = (char)(ushort)*puVar5;
            puVar4 = puVar4 + 1;
            uVar7 = uVar7 + 1;
            uVar6 = 0;
            puVar5 = (ulonglong *)((longlong)puVar5 + 2);
            param_3 = local_res18;
            puVar2 = local_res10;
          } while (uVar7 < uVar8);
        }
        break;
      case 4:
        uVar7 = 0;
        bVar9 = (uint)local_res10 != 0;
        puVar5 = local_res20;
        param_3 = local_res18;
        if (bVar9) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93050(puVar5);
            }
            if (0xff < (uint)*puVar5) goto LAB_144b7d185;
            *puVar4 = (char)(uint)*puVar5;
            puVar4 = puVar4 + 1;
            uVar7 = uVar7 + 1;
            uVar6 = 0;
            puVar5 = (ulonglong *)((longlong)puVar5 + 4);
            param_3 = local_res18;
            puVar2 = local_res10;
          } while (uVar7 < uVar8);
        }
        break;
      case 8:
        uVar7 = 0;
        bVar9 = (uint)local_res10 != 0;
        puVar5 = local_res20;
        param_3 = local_res18;
        if (bVar9) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93040(puVar5);
            }
            if (0xff < (ushort)*puVar5) goto LAB_144b7d185;
            *puVar4 = (char)(ushort)*puVar5;
            puVar4 = puVar4 + 1;
            uVar7 = uVar7 + 1;
            uVar6 = 0;
            puVar5 = (ulonglong *)((longlong)puVar5 + 2);
            param_3 = local_res18;
            puVar2 = local_res10;
          } while (uVar7 < uVar8);
        }
        break;
      case 9:
        uVar7 = 0;
        bVar9 = (uint)local_res10 != 0;
        puVar5 = local_res20;
        param_3 = local_res18;
        if (bVar9) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93050(puVar5);
            }
            if (0xff < (uint)*puVar5) goto LAB_144b7d185;
            *puVar4 = (char)(uint)*puVar5;
            puVar4 = puVar4 + 1;
            uVar7 = uVar7 + 1;
            uVar6 = 0;
            puVar5 = (ulonglong *)((longlong)puVar5 + 4);
            param_3 = local_res18;
            puVar2 = local_res10;
          } while (uVar7 < uVar8);
        }
        break;
      case 0x10:
        uVar7 = 0;
        bVar9 = (uint)local_res10 != 0;
        puVar5 = local_res20;
        param_3 = local_res18;
        if (bVar9) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93070(puVar5);
            }
            if (0xff < *puVar5) goto LAB_144b7d185;
            *puVar4 = (char)*puVar5;
            puVar4 = puVar4 + 1;
            uVar7 = uVar7 + 1;
            uVar6 = 0;
            puVar5 = puVar5 + 1;
            param_3 = local_res18;
            puVar2 = local_res10;
          } while (uVar7 < uVar8);
        }
        break;
      case 0x11:
        uVar7 = 0;
        bVar9 = (uint)local_res10 != 0;
        puVar5 = local_res20;
        param_3 = local_res18;
        if (bVar9) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93070(puVar5);
            }
            if (0xff < *puVar5) {
              uVar6 = 4;
              free(local_res20);
              goto LAB_144b7d365;
            }
            *puVar4 = (char)*puVar5;
            puVar4 = puVar4 + 1;
            uVar7 = uVar7 + 1;
            uVar6 = 0;
            puVar5 = puVar5 + 1;
            param_3 = local_res18;
            puVar2 = local_res10;
          } while (uVar7 < uVar8);
        }
      }
      goto switchD_144b7d130_caseD_5;
    }
  }
  *param_3 = local_res20;
  return 0;
}



// FUNCTION 144b7d470 FUN_144b7d470 body=966 status=ok
// SIG undefined FUN_144b7d470(void)

ulonglong FUN_144b7d470(longlong param_1,longlong param_2,undefined8 *param_3)

{
  short sVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong *_Memory;
  uint uVar8;
  bool bVar9;
  undefined1 *local_res10;
  undefined8 *local_res18;
  ulonglong *local_res20;
  
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
  case 3:
  case 4:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0x10:
  case 0x11:
    goto switchD_144b7d4b4_caseD_1;
  default:
    return 2;
  }
LAB_144b7d632:
  uVar6 = 4;
  param_3 = local_res18;
  _Memory = local_res20;
  puVar2 = local_res10;
  goto switchD_144b7d58a_caseD_5;
switchD_144b7d4b4_caseD_1:
  local_res18 = param_3;
  uVar3 = FUN_144b81fb0(param_1,param_2,&local_res10,1,&local_res20,0xffffffffffffffff);
  puVar5 = local_res20;
  if (((int)uVar3 != 0) || (local_res20 == (ulonglong *)0x0)) {
    *param_3 = 0;
    return uVar3;
  }
  sVar1 = *(short *)(param_2 + 2);
  uVar7 = (uint)local_res10;
  if (sVar1 != 1) {
    if (sVar1 == 6) goto LAB_144b7d800;
    if (sVar1 != 7) {
      puVar4 = (undefined1 *)FUN_144e92f50((ulonglong)local_res10 & 0xffffffff);
      local_res10 = puVar4;
      if (puVar4 == (undefined1 *)0x0) {
        free(puVar5);
        return 7;
      }
      uVar6 = 0;
      _Memory = puVar5;
      puVar2 = puVar4;
      switch(*(undefined2 *)(param_2 + 2)) {
      case 3:
        uVar8 = 0;
        bVar9 = (uint)local_res10 != 0;
        param_3 = local_res18;
        if (bVar9) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93040(puVar5);
            }
            if (0x7f < (ushort)*puVar5) goto LAB_144b7d5d7;
            *puVar4 = (char)(ushort)*puVar5;
            puVar5 = (ulonglong *)((longlong)puVar5 + 2);
            puVar4 = puVar4 + 1;
            uVar8 = uVar8 + 1;
            uVar6 = 0;
            param_3 = local_res18;
            puVar2 = local_res10;
          } while (uVar8 < uVar7);
        }
        break;
      case 4:
        uVar8 = 0;
        bVar9 = (uint)local_res10 != 0;
        param_3 = local_res18;
        if (bVar9) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93050(puVar5);
            }
            if (0x7f < (uint)*puVar5) goto LAB_144b7d5d7;
            *puVar4 = (char)(uint)*puVar5;
            puVar5 = (ulonglong *)((longlong)puVar5 + 4);
            puVar4 = puVar4 + 1;
            uVar8 = uVar8 + 1;
            uVar6 = 0;
            param_3 = local_res18;
            puVar2 = local_res10;
          } while (uVar8 < uVar7);
        }
        break;
      case 8:
        uVar8 = 0;
        bVar9 = (uint)local_res10 != 0;
        param_3 = local_res18;
        if (bVar9) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93040(puVar5);
            }
            if (0xff < (ushort)((ushort)*puVar5 + 0x80)) goto LAB_144b7d632;
            *puVar4 = (char)(ushort)*puVar5;
            puVar5 = (ulonglong *)((longlong)puVar5 + 2);
            puVar4 = puVar4 + 1;
            uVar8 = uVar8 + 1;
            uVar6 = 0;
            param_3 = local_res18;
            _Memory = local_res20;
            puVar2 = local_res10;
          } while (uVar8 < uVar7);
        }
        break;
      case 9:
        uVar8 = 0;
        bVar9 = (uint)local_res10 != 0;
        param_3 = local_res18;
        if (bVar9) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93050(puVar5);
            }
            if (0xff < (uint)*puVar5 + 0x80) goto LAB_144b7d632;
            *puVar4 = (char)(uint)*puVar5;
            puVar5 = (ulonglong *)((longlong)puVar5 + 4);
            puVar4 = puVar4 + 1;
            uVar8 = uVar8 + 1;
            uVar6 = 0;
            param_3 = local_res18;
            _Memory = local_res20;
            puVar2 = local_res10;
          } while (uVar8 < uVar7);
        }
        break;
      case 0x10:
        uVar8 = 0;
        bVar9 = (uint)local_res10 != 0;
        param_3 = local_res18;
        if (bVar9) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93070(puVar5);
            }
            if (0x7f < *puVar5) goto LAB_144b7d5d7;
            *puVar4 = (char)*puVar5;
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 1;
            uVar8 = uVar8 + 1;
            uVar6 = 0;
            param_3 = local_res18;
            puVar2 = local_res10;
          } while (uVar8 < uVar7);
        }
        break;
      case 0x11:
        uVar8 = 0;
        bVar9 = (uint)local_res10 != 0;
        param_3 = local_res18;
        if (bVar9) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93070(puVar5);
            }
            if (0xff < *puVar5 + 0x80) {
              free(local_res20);
              free(local_res10);
              return 4;
            }
            *puVar4 = (char)*puVar5;
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 1;
            uVar8 = uVar8 + 1;
            uVar6 = 0;
            param_3 = local_res18;
            _Memory = local_res20;
            puVar2 = local_res10;
          } while (uVar8 < uVar7);
        }
      }
      goto switchD_144b7d58a_caseD_5;
    }
  }
  uVar7 = 0;
  if ((uint)local_res10 != 0) {
    do {
      if (0x7f < (byte)*puVar5) {
        free(local_res20);
        return 4;
      }
      puVar5 = (ulonglong *)((longlong)puVar5 + 1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)local_res10);
  }
LAB_144b7d800:
  *param_3 = local_res20;
  return 0;
LAB_144b7d5d7:
  uVar6 = 4;
  param_3 = local_res18;
  puVar2 = local_res10;
switchD_144b7d58a_caseD_5:
  local_res10 = puVar2;
  puVar4 = local_res10;
  free(_Memory);
  if (uVar6 == 0) {
    *param_3 = puVar4;
    uVar3 = 0;
  }
  else {
    free(local_res10);
    uVar3 = (ulonglong)uVar6;
  }
  return uVar3;
}



// FUNCTION 144b7d890 FUN_144b7d890 body=1040 status=ok
// SIG undefined FUN_144b7d890(void)

ulonglong FUN_144b7d890(longlong param_1,longlong param_2,ulonglong *param_3)

{
  undefined1 auVar1 [15];
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  ulonglong uVar41;
  ulonglong uVar42;
  undefined1 (*pauVar43) [16];
  uint uVar44;
  uint uVar45;
  ulonglong *puVar46;
  undefined1 (*pauVar47) [16];
  uint uVar48;
  bool bVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 (*local_res10) [16];
  ulonglong *local_res18;
  ulonglong *local_res20;
  
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
  case 3:
  case 4:
  case 6:
  case 8:
  case 9:
  case 0x10:
  case 0x11:
    goto switchD_144b7d8d4_caseD_1;
  default:
    return 2;
  }
LAB_144b7daf9:
  uVar44 = 4;
  param_3 = local_res18;
  pauVar47 = local_res10;
  goto switchD_144b7d9a3_caseD_2;
switchD_144b7d8d4_caseD_1:
  local_res18 = param_3;
  uVar42 = FUN_144b81fb0(param_1,param_2,&local_res10,2,&local_res20,0xffffffffffffffff);
  if (((int)uVar42 != 0) || (local_res20 == (ulonglong *)0x0)) {
    *param_3 = 0;
    return uVar42;
  }
  uVar45 = (uint)local_res10;
  if (*(short *)(param_2 + 2) == 3) {
    *param_3 = (ulonglong)local_res20;
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e930b0(local_res20,(ulonglong)local_res10 & 0xffffffff);
    }
    return 0;
  }
  if (*(short *)(param_2 + 2) == 8) {
    uVar45 = 0;
    puVar46 = local_res20;
    if ((uint)local_res10 != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93040(puVar46);
        }
        if ((short)*puVar46 < 0) {
          free(local_res20);
          return 4;
        }
        puVar46 = (ulonglong *)((longlong)puVar46 + 2);
        uVar45 = uVar45 + 1;
      } while (uVar45 < (uint)local_res10);
    }
    *param_3 = (ulonglong)local_res20;
    return 0;
  }
  pauVar43 = (undefined1 (*) [16])FUN_144e92f50((uint)local_res10 * 2);
  local_res10 = pauVar43;
  if (pauVar43 == (undefined1 (*) [16])0x0) {
    free(local_res20);
    return 7;
  }
  uVar44 = 0;
  pauVar47 = pauVar43;
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    uVar45 = 0;
    if ((uint)local_res10 != 0) {
      puVar46 = local_res20;
      uVar44 = uVar45;
      if ((0x1f < (uint)local_res10) &&
         (((undefined1 (*) [16])((ulonglong)((uint)local_res10 - 1) + (longlong)local_res20) <
           pauVar43 ||
          (uVar44 = 0, *pauVar43 + (ulonglong)((uint)local_res10 - 1) * 2 < local_res20)))) {
        do {
          uVar42 = *puVar46;
          auVar1._8_6_ = 0;
          auVar1._0_8_ = uVar42;
          auVar1[0xe] = (char)(uVar42 >> 0x38);
          auVar5._8_4_ = 0;
          auVar5._0_8_ = uVar42;
          auVar5[0xc] = (char)(uVar42 >> 0x30);
          auVar5._13_2_ = auVar1._13_2_;
          auVar9._8_4_ = 0;
          auVar9._0_8_ = uVar42;
          auVar9._12_3_ = auVar5._12_3_;
          auVar13._8_2_ = 0;
          auVar13._0_8_ = uVar42;
          auVar13[10] = (char)(uVar42 >> 0x28);
          auVar13._11_4_ = auVar9._11_4_;
          auVar17._8_2_ = 0;
          auVar17._0_8_ = uVar42;
          auVar17._10_5_ = auVar13._10_5_;
          auVar21[8] = (char)(uVar42 >> 0x20);
          auVar21._0_8_ = uVar42;
          auVar21._9_6_ = auVar17._9_6_;
          auVar29._7_8_ = 0;
          auVar29._0_7_ = auVar21._8_7_;
          auVar33._1_8_ = SUB158(auVar29 << 0x40,7);
          auVar33[0] = (char)(uVar42 >> 0x18);
          auVar33._9_6_ = 0;
          auVar34._1_10_ = SUB1510(auVar33 << 0x30,5);
          auVar34[0] = (char)(uVar42 >> 0x10);
          auVar34._11_4_ = 0;
          auVar25[2] = (char)(uVar42 >> 8);
          auVar25._0_2_ = (ushort)uVar42;
          auVar25._3_12_ = SUB1512(auVar34 << 0x20,3);
          auVar50._0_2_ = (ushort)uVar42 & 0xff;
          auVar50._2_13_ = auVar25._2_13_;
          auVar50[0xf] = 0;
          uVar45 = uVar45 + 0x20;
          *pauVar47 = auVar50;
          uVar42 = puVar46[1];
          auVar2._8_6_ = 0;
          auVar2._0_8_ = uVar42;
          auVar2[0xe] = (char)(uVar42 >> 0x38);
          auVar6._8_4_ = 0;
          auVar6._0_8_ = uVar42;
          auVar6[0xc] = (char)(uVar42 >> 0x30);
          auVar6._13_2_ = auVar2._13_2_;
          auVar10._8_4_ = 0;
          auVar10._0_8_ = uVar42;
          auVar10._12_3_ = auVar6._12_3_;
          auVar14._8_2_ = 0;
          auVar14._0_8_ = uVar42;
          auVar14[10] = (char)(uVar42 >> 0x28);
          auVar14._11_4_ = auVar10._11_4_;
          auVar18._8_2_ = 0;
          auVar18._0_8_ = uVar42;
          auVar18._10_5_ = auVar14._10_5_;
          auVar22[8] = (char)(uVar42 >> 0x20);
          auVar22._0_8_ = uVar42;
          auVar22._9_6_ = auVar18._9_6_;
          auVar30._7_8_ = 0;
          auVar30._0_7_ = auVar22._8_7_;
          auVar35._1_8_ = SUB158(auVar30 << 0x40,7);
          auVar35[0] = (char)(uVar42 >> 0x18);
          auVar35._9_6_ = 0;
          auVar36._1_10_ = SUB1510(auVar35 << 0x30,5);
          auVar36[0] = (char)(uVar42 >> 0x10);
          auVar36._11_4_ = 0;
          auVar26[2] = (char)(uVar42 >> 8);
          auVar26._0_2_ = (ushort)uVar42;
          auVar26._3_12_ = SUB1512(auVar36 << 0x20,3);
          auVar51._0_2_ = (ushort)uVar42 & 0xff;
          auVar51._2_13_ = auVar26._2_13_;
          auVar51[0xf] = 0;
          pauVar47[1] = auVar51;
          uVar42 = puVar46[2];
          auVar3._8_6_ = 0;
          auVar3._0_8_ = uVar42;
          auVar3[0xe] = (char)(uVar42 >> 0x38);
          auVar7._8_4_ = 0;
          auVar7._0_8_ = uVar42;
          auVar7[0xc] = (char)(uVar42 >> 0x30);
          auVar7._13_2_ = auVar3._13_2_;
          auVar11._8_4_ = 0;
          auVar11._0_8_ = uVar42;
          auVar11._12_3_ = auVar7._12_3_;
          auVar15._8_2_ = 0;
          auVar15._0_8_ = uVar42;
          auVar15[10] = (char)(uVar42 >> 0x28);
          auVar15._11_4_ = auVar11._11_4_;
          auVar19._8_2_ = 0;
          auVar19._0_8_ = uVar42;
          auVar19._10_5_ = auVar15._10_5_;
          auVar23[8] = (char)(uVar42 >> 0x20);
          auVar23._0_8_ = uVar42;
          auVar23._9_6_ = auVar19._9_6_;
          auVar31._7_8_ = 0;
          auVar31._0_7_ = auVar23._8_7_;
          auVar37._1_8_ = SUB158(auVar31 << 0x40,7);
          auVar37[0] = (char)(uVar42 >> 0x18);
          auVar37._9_6_ = 0;
          auVar38._1_10_ = SUB1510(auVar37 << 0x30,5);
          auVar38[0] = (char)(uVar42 >> 0x10);
          auVar38._11_4_ = 0;
          auVar27[2] = (char)(uVar42 >> 8);
          auVar27._0_2_ = (ushort)uVar42;
          auVar27._3_12_ = SUB1512(auVar38 << 0x20,3);
          auVar52._0_2_ = (ushort)uVar42 & 0xff;
          auVar52._2_13_ = auVar27._2_13_;
          auVar52[0xf] = 0;
          pauVar47[2] = auVar52;
          uVar42 = puVar46[3];
          puVar46 = puVar46 + 4;
          auVar4._8_6_ = 0;
          auVar4._0_8_ = uVar42;
          auVar4[0xe] = (char)(uVar42 >> 0x38);
          auVar8._8_4_ = 0;
          auVar8._0_8_ = uVar42;
          auVar8[0xc] = (char)(uVar42 >> 0x30);
          auVar8._13_2_ = auVar4._13_2_;
          auVar12._8_4_ = 0;
          auVar12._0_8_ = uVar42;
          auVar12._12_3_ = auVar8._12_3_;
          auVar16._8_2_ = 0;
          auVar16._0_8_ = uVar42;
          auVar16[10] = (char)(uVar42 >> 0x28);
          auVar16._11_4_ = auVar12._11_4_;
          auVar20._8_2_ = 0;
          auVar20._0_8_ = uVar42;
          auVar20._10_5_ = auVar16._10_5_;
          auVar24[8] = (char)(uVar42 >> 0x20);
          auVar24._0_8_ = uVar42;
          auVar24._9_6_ = auVar20._9_6_;
          auVar32._7_8_ = 0;
          auVar32._0_7_ = auVar24._8_7_;
          auVar39._1_8_ = SUB158(auVar32 << 0x40,7);
          auVar39[0] = (char)(uVar42 >> 0x18);
          auVar39._9_6_ = 0;
          auVar40._1_10_ = SUB1510(auVar39 << 0x30,5);
          auVar40[0] = (char)(uVar42 >> 0x10);
          auVar40._11_4_ = 0;
          auVar28[2] = (char)(uVar42 >> 8);
          auVar28._0_2_ = (ushort)uVar42;
          auVar28._3_12_ = SUB1512(auVar40 << 0x20,3);
          auVar53._0_2_ = (ushort)uVar42 & 0xff;
          auVar53._2_13_ = auVar28._2_13_;
          auVar53[0xf] = 0;
          pauVar47[3] = auVar53;
          pauVar47 = pauVar47 + 4;
          uVar44 = uVar45;
        } while (uVar45 < ((uint)local_res10 & 0xffffffe0));
      }
      if (uVar44 < (uint)local_res10) {
        uVar42 = (ulonglong)((uint)local_res10 - uVar44);
        do {
          uVar41 = *puVar46;
          puVar46 = (ulonglong *)((longlong)puVar46 + 1);
          *(ushort *)*pauVar47 = (ushort)(byte)uVar41;
          pauVar47 = (undefined1 (*) [16])(*pauVar47 + 2);
          uVar42 = uVar42 - 1;
        } while (uVar42 != 0);
      }
    }
    free(local_res20);
    goto LAB_144b7da5d;
  case 4:
    uVar48 = 0;
    bVar49 = (uint)local_res10 != 0;
    puVar46 = local_res20;
    param_3 = local_res18;
    if (bVar49) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93050(puVar46);
        }
        if (0xffff < (uint)*puVar46) goto LAB_144b7daf9;
        *(short *)*pauVar43 = (short)(uint)*puVar46;
        pauVar43 = (undefined1 (*) [16])(*pauVar43 + 2);
        uVar48 = uVar48 + 1;
        uVar44 = 0;
        puVar46 = (ulonglong *)((longlong)puVar46 + 4);
        param_3 = local_res18;
        pauVar47 = local_res10;
      } while (uVar48 < uVar45);
    }
    break;
  case 6:
    uVar45 = 0;
    puVar46 = local_res20;
    if ((uint)local_res10 != 0) {
      do {
        if ((char)*puVar46 < '\0') {
          uVar44 = 4;
          break;
        }
        *(short *)*pauVar43 = (short)(char)*puVar46;
        uVar45 = uVar45 + 1;
        uVar44 = 0;
        puVar46 = (ulonglong *)((longlong)puVar46 + 1);
        pauVar43 = (undefined1 (*) [16])(*pauVar43 + 2);
      } while (uVar45 < (uint)local_res10);
    }
    break;
  case 9:
    uVar48 = 0;
    bVar49 = (uint)local_res10 != 0;
    puVar46 = local_res20;
    param_3 = local_res18;
    if (bVar49) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93050(puVar46);
        }
        if (0xffff < (uint)*puVar46) goto LAB_144b7daf9;
        *(short *)*pauVar43 = (short)(uint)*puVar46;
        puVar46 = (ulonglong *)((longlong)puVar46 + 4);
        pauVar43 = (undefined1 (*) [16])(*pauVar43 + 2);
        uVar48 = uVar48 + 1;
        uVar44 = 0;
        param_3 = local_res18;
        pauVar47 = local_res10;
      } while (uVar48 < uVar45);
    }
    break;
  case 0x10:
    uVar48 = 0;
    bVar49 = (uint)local_res10 != 0;
    puVar46 = local_res20;
    param_3 = local_res18;
    if (bVar49) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93070(puVar46);
        }
        if (0xffff < *puVar46) goto LAB_144b7daf9;
        *(short *)*pauVar43 = (short)*puVar46;
        puVar46 = puVar46 + 1;
        pauVar43 = (undefined1 (*) [16])(*pauVar43 + 2);
        uVar48 = uVar48 + 1;
        uVar44 = 0;
        param_3 = local_res18;
        pauVar47 = local_res10;
      } while (uVar48 < uVar45);
    }
    break;
  case 0x11:
    uVar48 = 0;
    bVar49 = (uint)local_res10 != 0;
    puVar46 = local_res20;
    param_3 = local_res18;
    if (bVar49) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93070(puVar46);
        }
        if (0xffff < *puVar46) {
          free(local_res20);
          free(local_res10);
          return 4;
        }
        *(short *)*pauVar43 = (short)*puVar46;
        puVar46 = puVar46 + 1;
        pauVar43 = (undefined1 (*) [16])(*pauVar43 + 2);
        uVar48 = uVar48 + 1;
        uVar44 = 0;
        param_3 = local_res18;
        pauVar47 = local_res10;
      } while (uVar48 < uVar45);
    }
  }
switchD_144b7d9a3_caseD_2:
  local_res10 = pauVar47;
  pauVar43 = local_res10;
  free(local_res20);
  if (uVar44 == 0) {
LAB_144b7da5d:
    *param_3 = (ulonglong)pauVar43;
    uVar42 = 0;
  }
  else {
    free(local_res10);
    uVar42 = (ulonglong)uVar44;
  }
  return uVar42;
}



// FUNCTION 144b7dd00 FUN_144b7dd00 body=1220 status=ok
// SIG undefined FUN_144b7dd00(void)

ulonglong FUN_144b7dd00(longlong param_1,longlong param_2,ulonglong *param_3)

{
  undefined1 auVar1 [15];
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  void *pvVar37;
  ulonglong uVar38;
  undefined1 (*pauVar39) [16];
  uint uVar40;
  uint uVar41;
  undefined1 (*pauVar42) [16];
  undefined1 (*pauVar43) [16];
  uint uVar44;
  undefined1 (*pauVar45) [16];
  undefined1 auVar46 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar62 [16];
  undefined1 auVar70 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  uint local_res10 [2];
  ulonglong *local_res18;
  undefined1 (*local_res20) [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 uVar78;
  
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
  case 3:
  case 4:
  case 6:
  case 8:
  case 9:
  case 0x10:
  case 0x11:
    goto switchD_144b7dd44_caseD_1;
  default:
    return 2;
  }
LAB_144b7dfe6:
  uVar40 = 4;
  param_3 = local_res18;
  pauVar43 = local_res20;
  goto switchD_144b7ddfc_caseD_2;
switchD_144b7dd44_caseD_1:
  local_res18 = param_3;
  uVar38 = FUN_144b81fb0(param_1,param_2,local_res10,2,&local_res20,0xffffffffffffffff);
  pauVar42 = local_res20;
  uVar41 = local_res10[0];
  if (((int)uVar38 != 0) || (local_res20 == (undefined1 (*) [16])0x0)) {
    *param_3 = 0;
    return uVar38;
  }
  if (*(short *)(param_2 + 2) == 3) {
    uVar41 = 0;
    if (local_res10[0] != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93040(pauVar42);
        }
        if (0x7fff < *(ushort *)*pauVar42) {
          free(local_res20);
          return 4;
        }
        uVar41 = uVar41 + 1;
        pauVar42 = (undefined1 (*) [16])((longlong)*pauVar42 + 2);
      } while (uVar41 < local_res10[0]);
    }
    *param_3 = (ulonglong)local_res20;
    goto LAB_144b7deb0;
  }
  if (*(short *)(param_2 + 2) == 8) {
    *param_3 = (ulonglong)local_res20;
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e930b0(local_res20,local_res10[0]);
    }
    goto LAB_144b7deb0;
  }
  pauVar39 = (undefined1 (*) [16])FUN_144e92f50(local_res10[0] * 2);
  if (pauVar39 == (undefined1 (*) [16])0x0) {
    local_res20 = pauVar39;
    free(pauVar42);
    return 7;
  }
  uVar40 = 0;
  pauVar43 = pauVar39;
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    uVar40 = 0;
    if (uVar41 != 0) {
      uVar44 = uVar40;
      if ((0x1f < uVar41) &&
         (((undefined1 (*) [16])((longlong)*local_res20 + (ulonglong)(uVar41 - 1)) < pauVar39 ||
          (uVar44 = 0, (undefined1 (*) [16])(*pauVar39 + (ulonglong)(uVar41 - 1) * 2) < local_res20)
          ))) {
        do {
          uVar38 = *(ulonglong *)*local_res20;
          auVar1._8_6_ = 0;
          auVar1._0_8_ = uVar38;
          auVar1[0xe] = (char)(uVar38 >> 0x38);
          auVar5._8_4_ = 0;
          auVar5._0_8_ = uVar38;
          auVar5[0xc] = (char)(uVar38 >> 0x30);
          auVar5._13_2_ = auVar1._13_2_;
          auVar9._8_4_ = 0;
          auVar9._0_8_ = uVar38;
          auVar9._12_3_ = auVar5._12_3_;
          auVar13._8_2_ = 0;
          auVar13._0_8_ = uVar38;
          auVar13[10] = (char)(uVar38 >> 0x28);
          auVar13._11_4_ = auVar9._11_4_;
          auVar17._8_2_ = 0;
          auVar17._0_8_ = uVar38;
          auVar17._10_5_ = auVar13._10_5_;
          auVar21[8] = (char)(uVar38 >> 0x20);
          auVar21._0_8_ = uVar38;
          auVar21._9_6_ = auVar17._9_6_;
          auVar25._7_8_ = 0;
          auVar25._0_7_ = auVar21._8_7_;
          auVar29._1_8_ = SUB158(auVar25 << 0x40,7);
          auVar29[0] = (char)(uVar38 >> 0x18);
          auVar29._9_6_ = 0;
          auVar30._1_10_ = SUB1510(auVar29 << 0x30,5);
          auVar30[0] = (char)(uVar38 >> 0x10);
          auVar30._11_4_ = 0;
          auVar79._3_12_ = SUB1512(auVar30 << 0x20,3);
          auVar79[2] = (char)(uVar38 >> 8);
          auVar79[0] = (byte)uVar38;
          auVar79[1] = 0;
          auVar79[0xf] = 0;
          uVar40 = uVar40 + 0x20;
          *pauVar43 = auVar79;
          uVar38 = *(ulonglong *)((longlong)*local_res20 + 8);
          auVar2._8_6_ = 0;
          auVar2._0_8_ = uVar38;
          auVar2[0xe] = (char)(uVar38 >> 0x38);
          auVar6._8_4_ = 0;
          auVar6._0_8_ = uVar38;
          auVar6[0xc] = (char)(uVar38 >> 0x30);
          auVar6._13_2_ = auVar2._13_2_;
          auVar10._8_4_ = 0;
          auVar10._0_8_ = uVar38;
          auVar10._12_3_ = auVar6._12_3_;
          auVar14._8_2_ = 0;
          auVar14._0_8_ = uVar38;
          auVar14[10] = (char)(uVar38 >> 0x28);
          auVar14._11_4_ = auVar10._11_4_;
          auVar18._8_2_ = 0;
          auVar18._0_8_ = uVar38;
          auVar18._10_5_ = auVar14._10_5_;
          auVar22[8] = (char)(uVar38 >> 0x20);
          auVar22._0_8_ = uVar38;
          auVar22._9_6_ = auVar18._9_6_;
          auVar26._7_8_ = 0;
          auVar26._0_7_ = auVar22._8_7_;
          auVar31._1_8_ = SUB158(auVar26 << 0x40,7);
          auVar31[0] = (char)(uVar38 >> 0x18);
          auVar31._9_6_ = 0;
          auVar32._1_10_ = SUB1510(auVar31 << 0x30,5);
          auVar32[0] = (char)(uVar38 >> 0x10);
          auVar32._11_4_ = 0;
          auVar80._3_12_ = SUB1512(auVar32 << 0x20,3);
          auVar80[2] = (char)(uVar38 >> 8);
          auVar80[0] = (byte)uVar38;
          auVar80[1] = 0;
          auVar80[0xf] = 0;
          pauVar43[1] = auVar80;
          uVar38 = *(ulonglong *)local_res20[1];
          auVar3._8_6_ = 0;
          auVar3._0_8_ = uVar38;
          auVar3[0xe] = (char)(uVar38 >> 0x38);
          auVar7._8_4_ = 0;
          auVar7._0_8_ = uVar38;
          auVar7[0xc] = (char)(uVar38 >> 0x30);
          auVar7._13_2_ = auVar3._13_2_;
          auVar11._8_4_ = 0;
          auVar11._0_8_ = uVar38;
          auVar11._12_3_ = auVar7._12_3_;
          auVar15._8_2_ = 0;
          auVar15._0_8_ = uVar38;
          auVar15[10] = (char)(uVar38 >> 0x28);
          auVar15._11_4_ = auVar11._11_4_;
          auVar19._8_2_ = 0;
          auVar19._0_8_ = uVar38;
          auVar19._10_5_ = auVar15._10_5_;
          auVar23[8] = (char)(uVar38 >> 0x20);
          auVar23._0_8_ = uVar38;
          auVar23._9_6_ = auVar19._9_6_;
          auVar27._7_8_ = 0;
          auVar27._0_7_ = auVar23._8_7_;
          auVar33._1_8_ = SUB158(auVar27 << 0x40,7);
          auVar33[0] = (char)(uVar38 >> 0x18);
          auVar33._9_6_ = 0;
          auVar34._1_10_ = SUB1510(auVar33 << 0x30,5);
          auVar34[0] = (char)(uVar38 >> 0x10);
          auVar34._11_4_ = 0;
          auVar81._3_12_ = SUB1512(auVar34 << 0x20,3);
          auVar81[2] = (char)(uVar38 >> 8);
          auVar81[0] = (byte)uVar38;
          auVar81[1] = 0;
          auVar81[0xf] = 0;
          pauVar43[2] = auVar81;
          uVar38 = *(ulonglong *)(local_res20[1] + 8);
          local_res20 = local_res20 + 2;
          auVar4._8_6_ = 0;
          auVar4._0_8_ = uVar38;
          auVar4[0xe] = (char)(uVar38 >> 0x38);
          auVar8._8_4_ = 0;
          auVar8._0_8_ = uVar38;
          auVar8[0xc] = (char)(uVar38 >> 0x30);
          auVar8._13_2_ = auVar4._13_2_;
          auVar12._8_4_ = 0;
          auVar12._0_8_ = uVar38;
          auVar12._12_3_ = auVar8._12_3_;
          auVar16._8_2_ = 0;
          auVar16._0_8_ = uVar38;
          auVar16[10] = (char)(uVar38 >> 0x28);
          auVar16._11_4_ = auVar12._11_4_;
          auVar20._8_2_ = 0;
          auVar20._0_8_ = uVar38;
          auVar20._10_5_ = auVar16._10_5_;
          auVar24[8] = (char)(uVar38 >> 0x20);
          auVar24._0_8_ = uVar38;
          auVar24._9_6_ = auVar20._9_6_;
          auVar28._7_8_ = 0;
          auVar28._0_7_ = auVar24._8_7_;
          auVar35._1_8_ = SUB158(auVar28 << 0x40,7);
          auVar35[0] = (char)(uVar38 >> 0x18);
          auVar35._9_6_ = 0;
          auVar36._1_10_ = SUB1510(auVar35 << 0x30,5);
          auVar36[0] = (char)(uVar38 >> 0x10);
          auVar36._11_4_ = 0;
          auVar82._3_12_ = SUB1512(auVar36 << 0x20,3);
          auVar82[2] = (char)(uVar38 >> 8);
          auVar82[0] = (byte)uVar38;
          auVar82[1] = 0;
          auVar82[0xf] = 0;
          pauVar43[3] = auVar82;
          pauVar43 = pauVar43 + 4;
          uVar44 = uVar40;
        } while (uVar40 < (uVar41 & 0xffffffe0));
      }
      if (uVar44 < uVar41) {
        uVar38 = (ulonglong)(uVar41 - uVar44);
        do {
          pvVar37 = *local_res20;
          local_res20 = (undefined1 (*) [16])((longlong)*local_res20 + 1);
          *(ushort *)*pauVar43 = (ushort)*(byte *)pvVar37;
          pauVar43 = (undefined1 (*) [16])(*pauVar43 + 2);
          uVar38 = uVar38 - 1;
        } while (uVar38 != 0);
      }
    }
    goto LAB_144b7dea5;
  case 4:
    local_res10[0] = 0;
    pauVar45 = local_res20;
    param_3 = local_res18;
    local_res20 = pauVar39;
    if (uVar41 != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93050(pauVar45);
        }
        if (0x7fff < *(uint *)*pauVar45) goto LAB_144b7dfe6;
        local_res10[0] = local_res10[0] + 1;
        *(short *)*pauVar39 = (short)*(uint *)*pauVar45;
        pauVar39 = (undefined1 (*) [16])(*pauVar39 + 2);
        uVar40 = 0;
        pauVar45 = (undefined1 (*) [16])((longlong)*pauVar45 + 4);
        param_3 = local_res18;
        pauVar43 = local_res20;
      } while (local_res10[0] < uVar41);
    }
    break;
  case 6:
    uVar40 = 0;
    if (uVar41 != 0) {
      uVar44 = uVar40;
      if ((0x1f < uVar41) &&
         (((undefined1 (*) [16])((longlong)*local_res20 + (ulonglong)(uVar41 - 1)) < pauVar39 ||
          (uVar44 = 0, (undefined1 (*) [16])(*pauVar39 + (ulonglong)(uVar41 - 1) * 2) < local_res20)
          ))) {
        do {
          uVar38 = *(ulonglong *)*local_res20;
          uVar40 = uVar40 + 0x20;
          uVar78 = (undefined1)(uVar38 >> 0x38);
          auVar52._8_6_ = 0;
          auVar52._0_8_ = uVar38;
          auVar52[0xe] = uVar78;
          auVar52[0xf] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x30);
          auVar51._14_2_ = auVar52._14_2_;
          auVar51._8_5_ = 0;
          auVar51._0_8_ = uVar38;
          auVar51[0xd] = uVar78;
          auVar50._13_3_ = auVar51._13_3_;
          auVar50._8_4_ = 0;
          auVar50._0_8_ = uVar38;
          auVar50[0xc] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x28);
          auVar49._12_4_ = auVar50._12_4_;
          auVar49._8_3_ = 0;
          auVar49._0_8_ = uVar38;
          auVar49[0xb] = uVar78;
          auVar48._11_5_ = auVar49._11_5_;
          auVar48._8_2_ = 0;
          auVar48._0_8_ = uVar38;
          auVar48[10] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x20);
          auVar47._10_6_ = auVar48._10_6_;
          auVar47[8] = 0;
          auVar47._0_8_ = uVar38;
          auVar47[9] = uVar78;
          auVar53._9_7_ = auVar47._9_7_;
          auVar53[8] = uVar78;
          auVar53._0_8_ = uVar38;
          uVar78 = (undefined1)(uVar38 >> 0x18);
          auVar46._8_8_ = auVar53._8_8_;
          auVar46[7] = uVar78;
          auVar46[6] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x10);
          auVar46[5] = uVar78;
          auVar46[4] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 8);
          auVar46[3] = uVar78;
          auVar46[2] = uVar78;
          auVar46[0] = (undefined1)uVar38;
          auVar46[1] = auVar46[0];
          auVar53 = psraw(auVar46,8);
          *pauVar43 = auVar53;
          uVar38 = *(ulonglong *)((longlong)*local_res20 + 8);
          uVar78 = (undefined1)(uVar38 >> 0x38);
          auVar61._8_6_ = 0;
          auVar61._0_8_ = uVar38;
          auVar61[0xe] = uVar78;
          auVar61[0xf] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x30);
          auVar60._14_2_ = auVar61._14_2_;
          auVar60._8_5_ = 0;
          auVar60._0_8_ = uVar38;
          auVar60[0xd] = uVar78;
          auVar59._13_3_ = auVar60._13_3_;
          auVar59._8_4_ = 0;
          auVar59._0_8_ = uVar38;
          auVar59[0xc] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x28);
          auVar58._12_4_ = auVar59._12_4_;
          auVar58._8_3_ = 0;
          auVar58._0_8_ = uVar38;
          auVar58[0xb] = uVar78;
          auVar57._11_5_ = auVar58._11_5_;
          auVar57._8_2_ = 0;
          auVar57._0_8_ = uVar38;
          auVar57[10] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x20);
          auVar56._10_6_ = auVar57._10_6_;
          auVar56[8] = 0;
          auVar56._0_8_ = uVar38;
          auVar56[9] = uVar78;
          auVar55._9_7_ = auVar56._9_7_;
          auVar55[8] = uVar78;
          auVar55._0_8_ = uVar38;
          uVar78 = (undefined1)(uVar38 >> 0x18);
          auVar54._8_8_ = auVar55._8_8_;
          auVar54[7] = uVar78;
          auVar54[6] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x10);
          auVar54[5] = uVar78;
          auVar54[4] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 8);
          auVar54[3] = uVar78;
          auVar54[2] = uVar78;
          auVar54[0] = (undefined1)uVar38;
          auVar54[1] = auVar54[0];
          auVar53 = psraw(auVar54,8);
          pauVar43[1] = auVar53;
          uVar38 = *(ulonglong *)local_res20[1];
          uVar78 = (undefined1)(uVar38 >> 0x38);
          auVar69._8_6_ = 0;
          auVar69._0_8_ = uVar38;
          auVar69[0xe] = uVar78;
          auVar69[0xf] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x30);
          auVar68._14_2_ = auVar69._14_2_;
          auVar68._8_5_ = 0;
          auVar68._0_8_ = uVar38;
          auVar68[0xd] = uVar78;
          auVar67._13_3_ = auVar68._13_3_;
          auVar67._8_4_ = 0;
          auVar67._0_8_ = uVar38;
          auVar67[0xc] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x28);
          auVar66._12_4_ = auVar67._12_4_;
          auVar66._8_3_ = 0;
          auVar66._0_8_ = uVar38;
          auVar66[0xb] = uVar78;
          auVar65._11_5_ = auVar66._11_5_;
          auVar65._8_2_ = 0;
          auVar65._0_8_ = uVar38;
          auVar65[10] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x20);
          auVar64._10_6_ = auVar65._10_6_;
          auVar64[8] = 0;
          auVar64._0_8_ = uVar38;
          auVar64[9] = uVar78;
          auVar63._9_7_ = auVar64._9_7_;
          auVar63[8] = uVar78;
          auVar63._0_8_ = uVar38;
          uVar78 = (undefined1)(uVar38 >> 0x18);
          auVar62._8_8_ = auVar63._8_8_;
          auVar62[7] = uVar78;
          auVar62[6] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x10);
          auVar62[5] = uVar78;
          auVar62[4] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 8);
          auVar62[3] = uVar78;
          auVar62[2] = uVar78;
          auVar62[0] = (undefined1)uVar38;
          auVar62[1] = auVar62[0];
          auVar53 = psraw(auVar62,8);
          pauVar43[2] = auVar53;
          uVar38 = *(ulonglong *)(local_res20[1] + 8);
          local_res20 = local_res20 + 2;
          uVar78 = (undefined1)(uVar38 >> 0x38);
          auVar77._8_6_ = 0;
          auVar77._0_8_ = uVar38;
          auVar77[0xe] = uVar78;
          auVar77[0xf] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x30);
          auVar76._14_2_ = auVar77._14_2_;
          auVar76._8_5_ = 0;
          auVar76._0_8_ = uVar38;
          auVar76[0xd] = uVar78;
          auVar75._13_3_ = auVar76._13_3_;
          auVar75._8_4_ = 0;
          auVar75._0_8_ = uVar38;
          auVar75[0xc] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x28);
          auVar74._12_4_ = auVar75._12_4_;
          auVar74._8_3_ = 0;
          auVar74._0_8_ = uVar38;
          auVar74[0xb] = uVar78;
          auVar73._11_5_ = auVar74._11_5_;
          auVar73._8_2_ = 0;
          auVar73._0_8_ = uVar38;
          auVar73[10] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x20);
          auVar72._10_6_ = auVar73._10_6_;
          auVar72[8] = 0;
          auVar72._0_8_ = uVar38;
          auVar72[9] = uVar78;
          auVar71._9_7_ = auVar72._9_7_;
          auVar71[8] = uVar78;
          auVar71._0_8_ = uVar38;
          uVar78 = (undefined1)(uVar38 >> 0x18);
          auVar70._8_8_ = auVar71._8_8_;
          auVar70[7] = uVar78;
          auVar70[6] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 0x10);
          auVar70[5] = uVar78;
          auVar70[4] = uVar78;
          uVar78 = (undefined1)(uVar38 >> 8);
          auVar70[3] = uVar78;
          auVar70[2] = uVar78;
          auVar70[0] = (undefined1)uVar38;
          auVar70[1] = auVar70[0];
          auVar53 = psraw(auVar70,8);
          pauVar43[3] = auVar53;
          pauVar43 = pauVar43 + 4;
          uVar44 = uVar40;
        } while (uVar40 < (uVar41 & 0xffffffe0));
      }
      if (uVar44 < uVar41) {
        uVar38 = (ulonglong)(uVar41 - uVar44);
        do {
          pvVar37 = *local_res20;
          local_res20 = (undefined1 (*) [16])((longlong)*local_res20 + 1);
          *(short *)*pauVar43 = (short)*(char *)pvVar37;
          pauVar43 = (undefined1 (*) [16])(*pauVar43 + 2);
          uVar38 = uVar38 - 1;
        } while (uVar38 != 0);
      }
    }
LAB_144b7dea5:
    local_res20 = pauVar39;
    free(pauVar42);
    goto LAB_144b7dead;
  case 9:
    uVar44 = 0;
    pauVar45 = local_res20;
    param_3 = local_res18;
    local_res20 = pauVar39;
    if (uVar41 != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93050(pauVar45);
        }
        if (0xffff < *(int *)*pauVar45 + 0x8000U) goto LAB_144b7dfe6;
        *(short *)*pauVar39 = (short)*(int *)*pauVar45;
        pauVar45 = (undefined1 (*) [16])((longlong)*pauVar45 + 4);
        pauVar39 = (undefined1 (*) [16])(*pauVar39 + 2);
        uVar44 = uVar44 + 1;
        uVar40 = 0;
        param_3 = local_res18;
        pauVar43 = local_res20;
      } while (uVar44 < uVar41);
    }
    break;
  case 0x10:
    local_res10[0] = 0;
    pauVar45 = local_res20;
    param_3 = local_res18;
    local_res20 = pauVar39;
    if (uVar41 != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93070(pauVar45);
        }
        if (0x7fff < *(ulonglong *)*pauVar45) goto LAB_144b7dfe6;
        local_res10[0] = local_res10[0] + 1;
        *(short *)*pauVar39 = (short)*(ulonglong *)*pauVar45;
        pauVar39 = (undefined1 (*) [16])(*pauVar39 + 2);
        uVar40 = 0;
        pauVar45 = (undefined1 (*) [16])((longlong)*pauVar45 + 8);
        param_3 = local_res18;
        pauVar43 = local_res20;
      } while (local_res10[0] < uVar41);
    }
    break;
  case 0x11:
    uVar44 = 0;
    pauVar45 = local_res20;
    param_3 = local_res18;
    local_res20 = pauVar39;
    if (uVar41 != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93070(pauVar45);
        }
        if (0xffff < *(longlong *)*pauVar45 + 0x8000U) {
          free(pauVar42);
          free(local_res20);
          return 4;
        }
        *(short *)*pauVar39 = (short)*(longlong *)*pauVar45;
        pauVar45 = (undefined1 (*) [16])((longlong)*pauVar45 + 8);
        pauVar39 = (undefined1 (*) [16])(*pauVar39 + 2);
        uVar44 = uVar44 + 1;
        uVar40 = 0;
        param_3 = local_res18;
        pauVar43 = local_res20;
      } while (uVar44 < uVar41);
    }
  }
switchD_144b7ddfc_caseD_2:
  local_res20 = pauVar43;
  pauVar39 = local_res20;
  free(pauVar42);
  if (uVar40 == 0) {
LAB_144b7dead:
    *param_3 = (ulonglong)pauVar39;
LAB_144b7deb0:
    uVar38 = 0;
  }
  else {
    free(local_res20);
    uVar38 = (ulonglong)uVar40;
  }
  return uVar38;
}



// FUNCTION 144b7e230 FUN_144b7e230 body=1029 status=ok
// SIG undefined FUN_144b7e230(void)

ulonglong FUN_144b7e230(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined1 auVar5 [13];
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  undefined1 auVar15 [13];
  undefined1 auVar16 [13];
  undefined1 auVar17 [13];
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  uint uVar21;
  uint uVar22;
  undefined1 (*pauVar23) [16];
  ulonglong *puVar24;
  uint uVar25;
  bool bVar26;
  undefined1 uVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 (*local_res10) [16];
  undefined8 *local_res18;
  ulonglong *local_res20;
  
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
  case 3:
  case 4:
  case 6:
  case 8:
  case 9:
  case 0x10:
  case 0x11:
    goto switchD_144b7e274_caseD_1;
  default:
    return 2;
  }
LAB_144b7e4dd:
  uVar21 = 4;
  param_3 = local_res18;
  pauVar23 = local_res10;
  goto switchD_144b7e347_caseD_2;
switchD_144b7e274_caseD_1:
  local_res18 = param_3;
  uVar19 = FUN_144b81fb0(param_1,param_2,&local_res10,4,&local_res20,0xffffffffffffffff);
  if (((int)uVar19 != 0) || (local_res20 == (ulonglong *)0x0)) {
    *param_3 = 0;
    return uVar19;
  }
  uVar22 = (uint)local_res10;
  if (*(short *)(param_2 + 2) == 4) {
    *param_3 = local_res20;
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93110(local_res20,(ulonglong)local_res10 & 0xffffffff);
    }
    return 0;
  }
  if (*(short *)(param_2 + 2) == 9) {
    uVar22 = 0;
    puVar24 = local_res20;
    if ((uint)local_res10 != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93050(puVar24);
        }
        if ((int)*puVar24 < 0) {
          free(local_res20);
          return 4;
        }
        puVar24 = (ulonglong *)((longlong)puVar24 + 4);
        uVar22 = uVar22 + 1;
      } while (uVar22 < (uint)local_res10);
    }
    *param_3 = local_res20;
    return 0;
  }
  uVar19 = (ulonglong)local_res10 & 0xffffffff;
  pauVar20 = (undefined1 (*) [16])FUN_144e92f50((uint)local_res10 * 4);
  local_res10 = pauVar20;
  if (pauVar20 == (undefined1 (*) [16])0x0) {
    free(local_res20);
    return 7;
  }
  uVar21 = 0;
  pauVar23 = pauVar20;
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    uVar22 = 0;
    if ((uint)local_res10 != 0) {
      puVar24 = local_res20;
      uVar21 = uVar22;
      if ((0xf < (uint)local_res10) &&
         (((undefined1 (*) [16])((ulonglong)((uint)local_res10 - 1) + (longlong)local_res20) <
           pauVar20 ||
          (uVar21 = 0, *pauVar20 + (ulonglong)((uint)local_res10 - 1) * 4 < local_res20)))) {
        do {
          uVar1 = (undefined4)*puVar24;
          uVar31 = (undefined1)((uint)uVar1 >> 8);
          uVar19 = (ulonglong)CONCAT12(uVar31,(short)uVar1) & 0xffffffffffff00ff;
          uVar22 = uVar22 + 0x10;
          auVar2._8_4_ = 0;
          auVar2._0_8_ = uVar19;
          auVar2[0xc] = (char)((uint)uVar1 >> 0x18);
          auVar3[8] = (char)((uint)uVar1 >> 0x10);
          auVar3._0_8_ = uVar19;
          auVar3[9] = 0;
          auVar3._10_3_ = auVar2._10_3_;
          auVar14._5_8_ = 0;
          auVar14._0_5_ = auVar3._8_5_;
          auVar4[4] = uVar31;
          auVar4._0_4_ = (uint)uVar19;
          auVar4[5] = 0;
          auVar4._6_7_ = SUB137(auVar14 << 0x40,6);
          auVar27._0_4_ = (uint)uVar19 & 0xffff;
          auVar27._4_9_ = auVar4._4_9_;
          auVar27._13_3_ = 0;
          *pauVar23 = auVar27;
          uVar1 = *(undefined4 *)((longlong)puVar24 + 4);
          uVar31 = (undefined1)((uint)uVar1 >> 8);
          uVar19 = (ulonglong)CONCAT12(uVar31,(short)uVar1) & 0xffffffffffff00ff;
          auVar5._8_4_ = 0;
          auVar5._0_8_ = uVar19;
          auVar5[0xc] = (char)((uint)uVar1 >> 0x18);
          auVar6[8] = (char)((uint)uVar1 >> 0x10);
          auVar6._0_8_ = uVar19;
          auVar6[9] = 0;
          auVar6._10_3_ = auVar5._10_3_;
          auVar15._5_8_ = 0;
          auVar15._0_5_ = auVar6._8_5_;
          auVar7[4] = uVar31;
          auVar7._0_4_ = (uint)uVar19;
          auVar7[5] = 0;
          auVar7._6_7_ = SUB137(auVar15 << 0x40,6);
          auVar28._0_4_ = (uint)uVar19 & 0xffff;
          auVar28._4_9_ = auVar7._4_9_;
          auVar28._13_3_ = 0;
          pauVar23[1] = auVar28;
          uVar1 = (undefined4)puVar24[1];
          uVar31 = (undefined1)((uint)uVar1 >> 8);
          uVar19 = (ulonglong)CONCAT12(uVar31,(short)uVar1) & 0xffffffffffff00ff;
          auVar8._8_4_ = 0;
          auVar8._0_8_ = uVar19;
          auVar8[0xc] = (char)((uint)uVar1 >> 0x18);
          auVar9[8] = (char)((uint)uVar1 >> 0x10);
          auVar9._0_8_ = uVar19;
          auVar9[9] = 0;
          auVar9._10_3_ = auVar8._10_3_;
          auVar16._5_8_ = 0;
          auVar16._0_5_ = auVar9._8_5_;
          auVar10[4] = uVar31;
          auVar10._0_4_ = (uint)uVar19;
          auVar10[5] = 0;
          auVar10._6_7_ = SUB137(auVar16 << 0x40,6);
          auVar29._0_4_ = (uint)uVar19 & 0xffff;
          auVar29._4_9_ = auVar10._4_9_;
          auVar29._13_3_ = 0;
          pauVar23[2] = auVar29;
          uVar1 = *(undefined4 *)((longlong)puVar24 + 0xc);
          puVar24 = puVar24 + 2;
          uVar31 = (undefined1)((uint)uVar1 >> 8);
          uVar19 = (ulonglong)CONCAT12(uVar31,(short)uVar1) & 0xffffffffffff00ff;
          auVar11._8_4_ = 0;
          auVar11._0_8_ = uVar19;
          auVar11[0xc] = (char)((uint)uVar1 >> 0x18);
          auVar12[8] = (char)((uint)uVar1 >> 0x10);
          auVar12._0_8_ = uVar19;
          auVar12[9] = 0;
          auVar12._10_3_ = auVar11._10_3_;
          auVar17._5_8_ = 0;
          auVar17._0_5_ = auVar12._8_5_;
          auVar13[4] = uVar31;
          auVar13._0_4_ = (uint)uVar19;
          auVar13[5] = 0;
          auVar13._6_7_ = SUB137(auVar17 << 0x40,6);
          auVar30._0_4_ = (uint)uVar19 & 0xffff;
          auVar30._4_9_ = auVar13._4_9_;
          auVar30._13_3_ = 0;
          pauVar23[3] = auVar30;
          pauVar23 = pauVar23 + 4;
          uVar21 = uVar22;
        } while (uVar22 < ((uint)local_res10 & 0xfffffff0));
      }
      if (uVar21 < (uint)local_res10) {
        uVar19 = (ulonglong)((uint)local_res10 - uVar21);
        do {
          uVar18 = *puVar24;
          puVar24 = (ulonglong *)((longlong)puVar24 + 1);
          *(uint *)*pauVar23 = (uint)(byte)uVar18;
          pauVar23 = (undefined1 (*) [16])(*pauVar23 + 4);
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
    }
    goto LAB_144b7e404;
  case 3:
    bVar26 = (uint)local_res10 != 0;
    puVar24 = local_res20;
    if (bVar26) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93040(puVar24);
        }
        uVar18 = *puVar24;
        puVar24 = (ulonglong *)((longlong)puVar24 + 2);
        *(uint *)*pauVar23 = (uint)(ushort)uVar18;
        pauVar23 = (undefined1 (*) [16])(*pauVar23 + 4);
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
      free(local_res20);
      *param_3 = pauVar20;
      return 0;
    }
LAB_144b7e404:
    free(local_res20);
    goto LAB_144b7e40c;
  case 6:
    uVar22 = 0;
    puVar24 = local_res20;
    if ((uint)local_res10 != 0) {
      do {
        if ((char)(byte)*puVar24 < '\0') {
          uVar21 = 4;
          break;
        }
        *(int *)*pauVar20 = (int)(char)(byte)*puVar24;
        puVar24 = (ulonglong *)((longlong)puVar24 + 1);
        pauVar20 = (undefined1 (*) [16])(*pauVar20 + 4);
        uVar22 = uVar22 + 1;
        uVar21 = 0;
      } while (uVar22 < (uint)local_res10);
    }
    break;
  case 8:
    uVar25 = 0;
    bVar26 = (uint)local_res10 != 0;
    puVar24 = local_res20;
    param_3 = local_res18;
    if (bVar26) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93040(puVar24);
        }
        if ((short)(ushort)*puVar24 < 0) goto LAB_144b7e4dd;
        *(int *)*pauVar20 = (int)(short)(ushort)*puVar24;
        puVar24 = (ulonglong *)((longlong)puVar24 + 2);
        pauVar20 = (undefined1 (*) [16])(*pauVar20 + 4);
        uVar25 = uVar25 + 1;
        uVar21 = 0;
        param_3 = local_res18;
        pauVar23 = local_res10;
      } while (uVar25 < uVar22);
    }
    break;
  case 0x10:
    uVar25 = 0;
    bVar26 = (uint)local_res10 != 0;
    puVar24 = local_res20;
    param_3 = local_res18;
    if (bVar26) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93070(puVar24);
        }
        if (0xffffffff < *puVar24) goto LAB_144b7e4dd;
        *(int *)*pauVar20 = (int)*puVar24;
        puVar24 = puVar24 + 1;
        pauVar20 = (undefined1 (*) [16])(*pauVar20 + 4);
        uVar25 = uVar25 + 1;
        uVar21 = 0;
        param_3 = local_res18;
        pauVar23 = local_res10;
      } while (uVar25 < uVar22);
    }
    break;
  case 0x11:
    uVar25 = 0;
    bVar26 = (uint)local_res10 != 0;
    puVar24 = local_res20;
    param_3 = local_res18;
    if (bVar26) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93070(puVar24);
        }
        if (0xffffffff < *puVar24) {
          free(local_res20);
          free(local_res10);
          return 4;
        }
        *(int *)*pauVar20 = (int)*puVar24;
        puVar24 = puVar24 + 1;
        pauVar20 = (undefined1 (*) [16])(*pauVar20 + 4);
        uVar25 = uVar25 + 1;
        uVar21 = 0;
        param_3 = local_res18;
        pauVar23 = local_res10;
      } while (uVar25 < uVar22);
    }
  }
switchD_144b7e347_caseD_2:
  local_res10 = pauVar23;
  pauVar20 = local_res10;
  free(local_res20);
  if (uVar21 == 0) {
LAB_144b7e40c:
    *param_3 = pauVar20;
    uVar19 = 0;
  }
  else {
    free(local_res10);
    uVar19 = (ulonglong)uVar21;
  }
  return uVar19;
}



// FUNCTION 144b7e6a0 FUN_144b7e6a0 body=1225 status=ok
// SIG undefined FUN_144b7e6a0(void)

ulonglong FUN_144b7e6a0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auVar1 [13];
  undefined1 auVar2 [13];
  undefined1 auVar3 [13];
  undefined1 auVar4 [13];
  undefined8 uVar5;
  undefined6 uVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [16];
  uint uVar18;
  uint uVar19;
  ulonglong *puVar20;
  undefined1 (*pauVar21) [16];
  uint uVar22;
  bool bVar23;
  short sVar24;
  undefined1 auVar25 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 (*local_res10) [16];
  undefined8 *local_res18;
  ulonglong *local_res20;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 uVar37;
  undefined2 uVar38;
  
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
  case 3:
  case 4:
  case 6:
  case 8:
  case 9:
  case 0x10:
  case 0x11:
    break;
  default:
    return 2;
  }
  local_res18 = param_3;
  uVar16 = FUN_144b81fb0(param_1,param_2,&local_res10,4,&local_res20,0xffffffffffffffff);
  if (((int)uVar16 != 0) || (local_res20 == (ulonglong *)0x0)) {
    *param_3 = 0;
    return uVar16;
  }
  uVar19 = (uint)local_res10;
  if (*(short *)(param_2 + 2) == 4) {
    uVar19 = 0;
    puVar20 = local_res20;
    if ((uint)local_res10 != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93050(puVar20);
        }
        if (0x7fffffff < (uint)*puVar20) {
          free(local_res20);
          return 4;
        }
        uVar19 = uVar19 + 1;
        puVar20 = (ulonglong *)((longlong)puVar20 + 4);
      } while (uVar19 < (uint)local_res10);
    }
    *param_3 = local_res20;
    return 0;
  }
  if (*(short *)(param_2 + 2) == 9) {
    *param_3 = local_res20;
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93110(local_res20,(ulonglong)local_res10 & 0xffffffff);
    }
    return 0;
  }
  uVar16 = (ulonglong)local_res10 & 0xffffffff;
  pauVar17 = (undefined1 (*) [16])FUN_144e92f50((uint)local_res10 * 4);
  local_res10 = pauVar17;
  if (pauVar17 == (undefined1 (*) [16])0x0) {
    free(local_res20);
    return 7;
  }
  uVar18 = 0;
  pauVar21 = pauVar17;
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    uVar19 = 0;
    if ((uint)local_res10 != 0) {
      puVar20 = local_res20;
      uVar18 = uVar19;
      if ((0xf < (uint)local_res10) &&
         (((undefined1 (*) [16])((ulonglong)((uint)local_res10 - 1) + (longlong)local_res20) <
           pauVar17 ||
          (uVar18 = 0, *pauVar17 + (ulonglong)((uint)local_res10 - 1) * 4 < local_res20)))) {
        do {
          uVar18 = (uint)*puVar20;
          uVar19 = uVar19 + 0x10;
          auVar1[0xc] = (char)(uVar18 >> 0x18);
          auVar1._0_12_ = ZEXT712(0);
          auVar11[1] = 0;
          auVar11[0] = (byte)(uVar18 >> 0x10);
          auVar11._2_3_ = auVar1._10_3_;
          auVar11._5_8_ = 0;
          auVar39[5] = 0;
          auVar39[4] = (byte)(uVar18 >> 8);
          auVar39._6_7_ = SUB137(auVar11 << 0x40,6);
          auVar39._0_4_ = uVar18 & 0xff;
          auVar39._13_3_ = 0;
          *pauVar21 = auVar39;
          uVar18 = *(uint *)((longlong)puVar20 + 4);
          auVar2[0xc] = (char)(uVar18 >> 0x18);
          auVar2._0_12_ = ZEXT712(0);
          auVar12[1] = 0;
          auVar12[0] = (byte)(uVar18 >> 0x10);
          auVar12._2_3_ = auVar2._10_3_;
          auVar12._5_8_ = 0;
          auVar40[5] = 0;
          auVar40[4] = (byte)(uVar18 >> 8);
          auVar40._6_7_ = SUB137(auVar12 << 0x40,6);
          auVar40._0_4_ = uVar18 & 0xff;
          auVar40._13_3_ = 0;
          pauVar21[1] = auVar40;
          uVar18 = (uint)puVar20[1];
          auVar3[0xc] = (char)(uVar18 >> 0x18);
          auVar3._0_12_ = ZEXT712(0);
          auVar13[1] = 0;
          auVar13[0] = (byte)(uVar18 >> 0x10);
          auVar13._2_3_ = auVar3._10_3_;
          auVar13._5_8_ = 0;
          auVar41[5] = 0;
          auVar41[4] = (byte)(uVar18 >> 8);
          auVar41._6_7_ = SUB137(auVar13 << 0x40,6);
          auVar41._0_4_ = uVar18 & 0xff;
          auVar41._13_3_ = 0;
          pauVar21[2] = auVar41;
          uVar18 = *(uint *)((longlong)puVar20 + 0xc);
          puVar20 = puVar20 + 2;
          auVar4[0xc] = (char)(uVar18 >> 0x18);
          auVar4._0_12_ = ZEXT712(0);
          auVar14[1] = 0;
          auVar14[0] = (byte)(uVar18 >> 0x10);
          auVar14._2_3_ = auVar4._10_3_;
          auVar14._5_8_ = 0;
          auVar42[5] = 0;
          auVar42[4] = (byte)(uVar18 >> 8);
          auVar42._6_7_ = SUB137(auVar14 << 0x40,6);
          auVar42._0_4_ = uVar18 & 0xff;
          auVar42._13_3_ = 0;
          pauVar21[3] = auVar42;
          pauVar21 = pauVar21 + 4;
          uVar18 = uVar19;
        } while (uVar19 < ((uint)local_res10 & 0xfffffff0));
      }
      if (uVar18 < (uint)local_res10) {
        uVar16 = (ulonglong)((uint)local_res10 - uVar18);
        do {
          uVar15 = *puVar20;
          puVar20 = (ulonglong *)((longlong)puVar20 + 1);
          *(uint *)*pauVar21 = (uint)(byte)uVar15;
          pauVar21 = (undefined1 (*) [16])(*pauVar21 + 4);
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    break;
  default:
    goto switchD_144b7e7b9_caseD_2;
  case 3:
    bVar23 = (uint)local_res10 != 0;
    puVar20 = local_res20;
    if (bVar23) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93040(puVar20);
        }
        uVar15 = *puVar20;
        puVar20 = (ulonglong *)((longlong)puVar20 + 2);
        *(uint *)*pauVar21 = (uint)(ushort)uVar15;
        pauVar21 = (undefined1 (*) [16])(*pauVar21 + 4);
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      free(local_res20);
      *param_3 = pauVar17;
      return 0;
    }
    break;
  case 6:
    uVar19 = 0;
    if ((uint)local_res10 != 0) {
      puVar20 = local_res20;
      uVar18 = uVar19;
      if ((0xf < (uint)local_res10) &&
         (((undefined1 (*) [16])((ulonglong)((uint)local_res10 - 1) + (longlong)local_res20) <
           pauVar17 ||
          (uVar18 = 0, *pauVar17 + (ulonglong)((uint)local_res10 - 1) * 4 < local_res20)))) {
        do {
          uVar18 = (uint)*puVar20;
          uVar19 = uVar19 + 0x10;
          uVar37 = (undefined1)(uVar18 >> 0x18);
          uVar38 = CONCAT11(uVar37,uVar37);
          uVar37 = (undefined1)(uVar18 >> 0x10);
          uVar5 = CONCAT35(CONCAT21(uVar38,uVar37),CONCAT14(uVar37,uVar18));
          uVar37 = (undefined1)(uVar18 >> 8);
          uVar6 = CONCAT51(CONCAT41((int)((ulonglong)uVar5 >> 0x20),uVar37),uVar37);
          sVar24 = CONCAT11((char)uVar18,(char)uVar18);
          uVar16 = CONCAT62(uVar6,sVar24);
          auVar27._8_4_ = 0;
          auVar27._0_8_ = uVar16;
          auVar27._12_2_ = uVar38;
          auVar27._14_2_ = uVar38;
          uVar38 = (undefined2)((ulonglong)uVar5 >> 0x20);
          auVar26._12_4_ = auVar27._12_4_;
          auVar26._8_2_ = 0;
          auVar26._0_8_ = uVar16;
          auVar26._10_2_ = uVar38;
          auVar25._10_6_ = auVar26._10_6_;
          auVar25._8_2_ = uVar38;
          auVar25._0_8_ = uVar16;
          uVar38 = (undefined2)uVar6;
          auVar7._4_8_ = auVar25._8_8_;
          auVar7._2_2_ = uVar38;
          auVar7._0_2_ = uVar38;
          *(int *)*pauVar21 = (int)sVar24 >> 8;
          *(int *)(*pauVar21 + 4) = auVar7._0_4_ >> 0x18;
          *(int *)(*pauVar21 + 8) = auVar25._8_4_ >> 0x18;
          *(int *)(*pauVar21 + 0xc) = auVar26._12_4_ >> 0x18;
          uVar18 = *(uint *)((longlong)puVar20 + 4);
          uVar37 = (undefined1)(uVar18 >> 0x18);
          uVar38 = CONCAT11(uVar37,uVar37);
          uVar37 = (undefined1)(uVar18 >> 0x10);
          uVar5 = CONCAT35(CONCAT21(uVar38,uVar37),CONCAT14(uVar37,uVar18));
          uVar37 = (undefined1)(uVar18 >> 8);
          uVar6 = CONCAT51(CONCAT41((int)((ulonglong)uVar5 >> 0x20),uVar37),uVar37);
          sVar24 = CONCAT11((char)uVar18,(char)uVar18);
          uVar16 = CONCAT62(uVar6,sVar24);
          auVar30._8_4_ = 0;
          auVar30._0_8_ = uVar16;
          auVar30._12_2_ = uVar38;
          auVar30._14_2_ = uVar38;
          uVar38 = (undefined2)((ulonglong)uVar5 >> 0x20);
          auVar29._12_4_ = auVar30._12_4_;
          auVar29._8_2_ = 0;
          auVar29._0_8_ = uVar16;
          auVar29._10_2_ = uVar38;
          auVar28._10_6_ = auVar29._10_6_;
          auVar28._8_2_ = uVar38;
          auVar28._0_8_ = uVar16;
          uVar38 = (undefined2)uVar6;
          auVar8._4_8_ = auVar28._8_8_;
          auVar8._2_2_ = uVar38;
          auVar8._0_2_ = uVar38;
          *(int *)pauVar21[1] = (int)sVar24 >> 8;
          *(int *)(pauVar21[1] + 4) = auVar8._0_4_ >> 0x18;
          *(int *)(pauVar21[1] + 8) = auVar28._8_4_ >> 0x18;
          *(int *)(pauVar21[1] + 0xc) = auVar29._12_4_ >> 0x18;
          uVar18 = (uint)puVar20[1];
          uVar37 = (undefined1)(uVar18 >> 0x18);
          uVar38 = CONCAT11(uVar37,uVar37);
          uVar37 = (undefined1)(uVar18 >> 0x10);
          uVar5 = CONCAT35(CONCAT21(uVar38,uVar37),CONCAT14(uVar37,uVar18));
          uVar37 = (undefined1)(uVar18 >> 8);
          uVar6 = CONCAT51(CONCAT41((int)((ulonglong)uVar5 >> 0x20),uVar37),uVar37);
          sVar24 = CONCAT11((char)uVar18,(char)uVar18);
          uVar16 = CONCAT62(uVar6,sVar24);
          auVar33._8_4_ = 0;
          auVar33._0_8_ = uVar16;
          auVar33._12_2_ = uVar38;
          auVar33._14_2_ = uVar38;
          uVar38 = (undefined2)((ulonglong)uVar5 >> 0x20);
          auVar32._12_4_ = auVar33._12_4_;
          auVar32._8_2_ = 0;
          auVar32._0_8_ = uVar16;
          auVar32._10_2_ = uVar38;
          auVar31._10_6_ = auVar32._10_6_;
          auVar31._8_2_ = uVar38;
          auVar31._0_8_ = uVar16;
          uVar38 = (undefined2)uVar6;
          auVar9._4_8_ = auVar31._8_8_;
          auVar9._2_2_ = uVar38;
          auVar9._0_2_ = uVar38;
          *(int *)pauVar21[2] = (int)sVar24 >> 8;
          *(int *)(pauVar21[2] + 4) = auVar9._0_4_ >> 0x18;
          *(int *)(pauVar21[2] + 8) = auVar31._8_4_ >> 0x18;
          *(int *)(pauVar21[2] + 0xc) = auVar32._12_4_ >> 0x18;
          uVar18 = *(uint *)((longlong)puVar20 + 0xc);
          puVar20 = puVar20 + 2;
          uVar37 = (undefined1)(uVar18 >> 0x18);
          uVar38 = CONCAT11(uVar37,uVar37);
          uVar37 = (undefined1)(uVar18 >> 0x10);
          uVar5 = CONCAT35(CONCAT21(uVar38,uVar37),CONCAT14(uVar37,uVar18));
          uVar37 = (undefined1)(uVar18 >> 8);
          uVar6 = CONCAT51(CONCAT41((int)((ulonglong)uVar5 >> 0x20),uVar37),uVar37);
          sVar24 = CONCAT11((char)uVar18,(char)uVar18);
          uVar16 = CONCAT62(uVar6,sVar24);
          auVar36._8_4_ = 0;
          auVar36._0_8_ = uVar16;
          auVar36._12_2_ = uVar38;
          auVar36._14_2_ = uVar38;
          uVar38 = (undefined2)((ulonglong)uVar5 >> 0x20);
          auVar35._12_4_ = auVar36._12_4_;
          auVar35._8_2_ = 0;
          auVar35._0_8_ = uVar16;
          auVar35._10_2_ = uVar38;
          auVar34._10_6_ = auVar35._10_6_;
          auVar34._8_2_ = uVar38;
          auVar34._0_8_ = uVar16;
          uVar38 = (undefined2)uVar6;
          auVar10._4_8_ = auVar34._8_8_;
          auVar10._2_2_ = uVar38;
          auVar10._0_2_ = uVar38;
          *(int *)pauVar21[3] = (int)sVar24 >> 8;
          *(int *)(pauVar21[3] + 4) = auVar10._0_4_ >> 0x18;
          *(int *)(pauVar21[3] + 8) = auVar34._8_4_ >> 0x18;
          *(int *)(pauVar21[3] + 0xc) = auVar35._12_4_ >> 0x18;
          pauVar21 = pauVar21 + 4;
          uVar18 = uVar19;
        } while (uVar19 < ((uint)local_res10 & 0xfffffff0));
      }
      if (uVar18 < (uint)local_res10) {
        uVar16 = (ulonglong)((uint)local_res10 - uVar18);
        do {
          uVar15 = *puVar20;
          puVar20 = (ulonglong *)((longlong)puVar20 + 1);
          *(int *)*pauVar21 = (int)(char)(byte)uVar15;
          pauVar21 = (undefined1 (*) [16])(*pauVar21 + 4);
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
        free(local_res20);
        *param_3 = pauVar17;
        return 0;
      }
    }
    break;
  case 8:
    bVar23 = (uint)local_res10 != 0;
    puVar20 = local_res20;
    if (bVar23) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93040(puVar20);
        }
        uVar15 = *puVar20;
        puVar20 = (ulonglong *)((longlong)puVar20 + 2);
        *(int *)*pauVar21 = (int)(short)(ushort)uVar15;
        pauVar21 = (undefined1 (*) [16])(*pauVar21 + 4);
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      free(local_res20);
      *param_3 = pauVar17;
      return 0;
    }
    break;
  case 0x10:
    uVar22 = 0;
    bVar23 = (uint)local_res10 != 0;
    param_3 = local_res18;
    puVar20 = local_res20;
    if (bVar23) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93070(puVar20);
        }
        param_3 = local_res18;
        pauVar21 = local_res10;
        if (0x7fffffff < *puVar20) {
          uVar18 = 4;
          break;
        }
        *(int *)*pauVar17 = (int)*puVar20;
        puVar20 = puVar20 + 1;
        pauVar17 = (undefined1 (*) [16])(*pauVar17 + 4);
        uVar22 = uVar22 + 1;
        uVar18 = 0;
      } while (uVar22 < uVar19);
    }
    goto switchD_144b7e7b9_caseD_2;
  case 0x11:
    uVar22 = 0;
    bVar23 = (uint)local_res10 != 0;
    param_3 = local_res18;
    puVar20 = local_res20;
    if (bVar23) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93070(puVar20);
        }
        if (0xffffffff < *puVar20 + 0x80000000) {
          free(local_res20);
          free(local_res10);
          return 4;
        }
        *(int *)*pauVar17 = (int)*puVar20;
        puVar20 = puVar20 + 1;
        pauVar17 = (undefined1 (*) [16])(*pauVar17 + 4);
        uVar22 = uVar22 + 1;
        uVar18 = 0;
        param_3 = local_res18;
        pauVar21 = local_res10;
      } while (uVar22 < uVar19);
    }
switchD_144b7e7b9_caseD_2:
    local_res10 = pauVar21;
    pauVar17 = local_res10;
    free(local_res20);
    if (uVar18 != 0) {
      free(local_res10);
      return (ulonglong)uVar18;
    }
    goto LAB_144b7e87c;
  }
  free(local_res20);
LAB_144b7e87c:
  *param_3 = pauVar17;
  return 0;
}



// FUNCTION 144b7ebd0 FUN_144b7ebd0 body=705 status=ok
// SIG undefined FUN_144b7ebd0(void)

undefined8 FUN_144b7ebd0(longlong param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint local_res10 [2];
  ulonglong *local_res20;
  
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
  case 3:
  case 4:
  case 6:
  case 8:
  case 9:
  case 0x10:
  case 0x11:
    break;
  default:
    return 2;
  }
  uVar2 = FUN_144b81fb0(param_1,param_2,local_res10,8,&local_res20,0xffffffffffffffff);
  if (((int)uVar2 == 0) && (local_res20 != (ulonglong *)0x0)) {
    if (*(short *)(param_2 + 2) == 0x10) {
      uVar6 = 0;
      puVar3 = local_res20;
      if (local_res10[0] != 0) {
        do {
          if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
            FUN_144e93070(puVar3);
          }
          if (0x7fffffffffffffff < *puVar3) {
            free(local_res20);
            return 4;
          }
          uVar6 = uVar6 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar6 < local_res10[0]);
      }
      *param_3 = (longlong)local_res20;
    }
    else if (*(short *)(param_2 + 2) == 0x11) {
      *param_3 = (longlong)local_res20;
      if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
        FUN_144e93150(local_res20,local_res10[0]);
      }
    }
    else {
      uVar7 = (ulonglong)local_res10[0];
      puVar3 = (ulonglong *)FUN_144e92f50(local_res10[0] * 8);
      if (puVar3 == (ulonglong *)0x0) {
        free(local_res20);
        return 7;
      }
      switch(*(undefined2 *)(param_2 + 2)) {
      case 1:
        puVar5 = local_res20;
        puVar4 = puVar3;
        if (local_res10[0] != 0) {
          do {
            *puVar4 = (ulonglong)(byte)*puVar5;
            uVar7 = uVar7 - 1;
            puVar5 = (ulonglong *)((longlong)puVar5 + 1);
            puVar4 = puVar4 + 1;
          } while (uVar7 != 0);
        }
        break;
      case 3:
        puVar5 = local_res20;
        puVar4 = puVar3;
        if (local_res10[0] != 0) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93040(puVar5);
            }
            uVar1 = *puVar5;
            puVar5 = (ulonglong *)((longlong)puVar5 + 2);
            *puVar4 = (ulonglong)(ushort)uVar1;
            puVar4 = puVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        break;
      case 4:
        puVar5 = local_res20;
        puVar4 = puVar3;
        if (local_res10[0] != 0) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93050(puVar5);
            }
            uVar1 = *puVar5;
            puVar5 = (ulonglong *)((longlong)puVar5 + 4);
            *puVar4 = (ulonglong)(uint)uVar1;
            puVar4 = puVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        break;
      case 6:
        puVar5 = local_res20;
        puVar4 = puVar3;
        if (local_res10[0] != 0) {
          do {
            *puVar4 = (longlong)(char)(byte)*puVar5;
            uVar7 = uVar7 - 1;
            puVar5 = (ulonglong *)((longlong)puVar5 + 1);
            puVar4 = puVar4 + 1;
          } while (uVar7 != 0);
        }
        break;
      case 8:
        puVar5 = local_res20;
        puVar4 = puVar3;
        if (local_res10[0] != 0) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93040(puVar5);
            }
            uVar1 = *puVar5;
            puVar5 = (ulonglong *)((longlong)puVar5 + 2);
            *puVar4 = (longlong)(short)(ushort)uVar1;
            puVar4 = puVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        break;
      case 9:
        puVar5 = local_res20;
        puVar4 = puVar3;
        if (local_res10[0] != 0) {
          do {
            if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
              FUN_144e93050(puVar5);
            }
            uVar1 = *puVar5;
            puVar5 = (ulonglong *)((longlong)puVar5 + 4);
            *puVar4 = (longlong)(int)(uint)uVar1;
            puVar4 = puVar4 + 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
      }
      free(local_res20);
      *param_3 = (longlong)puVar3;
    }
    uVar2 = 0;
  }
  else {
    *param_3 = 0;
  }
  return uVar2;
}



// FUNCTION 144b7eee0 FUN_144b7eee0 body=1750 status=ok
// SIG undefined FUN_144b7eee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144b7eee0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined6 uVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 *puVar15;
  char cVar16;
  undefined8 uVar17;
  float *pfVar18;
  undefined1 (*pauVar19) [16];
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  float *pfVar23;
  short sVar24;
  undefined1 auVar25 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  float fVar38;
  undefined1 auVar39 [16];
  uint local_res10 [2];
  undefined8 *local_res18;
  undefined1 (*local_res20) [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 uVar36;
  undefined2 uVar37;
  
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x11:
    break;
  default:
    return 2;
  }
  local_res18 = param_3;
  uVar17 = FUN_144b81fb0(param_1,param_2,local_res10,4,&local_res20,0xffffffffffffffff);
  if (((int)uVar17 != 0) || (local_res20 == (undefined1 (*) [16])0x0)) {
    *param_3 = 0;
    return uVar17;
  }
  if (*(short *)(param_2 + 2) == 0xb) {
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93110(local_res20,local_res10[0]);
    }
    *param_3 = local_res20;
    return 0;
  }
  uVar22 = (ulonglong)local_res10[0];
  pfVar18 = (float *)FUN_144e92f50(uVar22 * 4);
  if (pfVar18 == (float *)0x0) {
    free(local_res20);
    return 7;
  }
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    uVar21 = 0;
    if (local_res10[0] != 0) {
      pauVar19 = local_res20;
      pfVar23 = pfVar18;
      uVar20 = uVar21;
      if ((0xf < local_res10[0]) &&
         ((*local_res20 + (local_res10[0] - 1) < pfVar18 ||
          (uVar20 = 0, (undefined1 (*) [16])(pfVar18 + (local_res10[0] - 1)) < local_res20)))) {
        do {
          uVar20 = *(uint *)*pauVar19;
          uVar21 = uVar21 + 0x10;
          auVar6[0xc] = (char)(uVar20 >> 0x18);
          auVar6._0_12_ = ZEXT712(0);
          uVar1 = *(uint *)(*pauVar19 + 4);
          *pfVar23 = (float)(uVar20 & 0xff);
          pfVar23[1] = (float)(uVar20 >> 8 & 0xff);
          pfVar23[2] = (float)(int)CONCAT32(auVar6._10_3_,(ushort)(byte)(uVar20 >> 0x10));
          pfVar23[3] = (float)(uint3)(auVar6._10_3_ >> 0x10);
          auVar7[0xc] = (char)(uVar1 >> 0x18);
          auVar7._0_12_ = ZEXT712(0);
          uVar20 = *(uint *)(*pauVar19 + 8);
          pfVar23[4] = (float)(uVar1 & 0xff);
          pfVar23[5] = (float)(uVar1 >> 8 & 0xff);
          pfVar23[6] = (float)(int)CONCAT32(auVar7._10_3_,(ushort)(byte)(uVar1 >> 0x10));
          pfVar23[7] = (float)(uint3)(auVar7._10_3_ >> 0x10);
          auVar8[0xc] = (char)(uVar20 >> 0x18);
          auVar8._0_12_ = ZEXT712(0);
          uVar1 = *(uint *)(*pauVar19 + 0xc);
          pauVar19 = pauVar19 + 1;
          pfVar23[8] = (float)(uVar20 & 0xff);
          pfVar23[9] = (float)(uVar20 >> 8 & 0xff);
          pfVar23[10] = (float)(int)CONCAT32(auVar8._10_3_,(ushort)(byte)(uVar20 >> 0x10));
          pfVar23[0xb] = (float)(uint3)(auVar8._10_3_ >> 0x10);
          auVar9[0xc] = (char)(uVar1 >> 0x18);
          auVar9._0_12_ = ZEXT712(0);
          pfVar23[0xc] = (float)(uVar1 & 0xff);
          pfVar23[0xd] = (float)(uVar1 >> 8 & 0xff);
          pfVar23[0xe] = (float)(int)CONCAT32(auVar9._10_3_,(ushort)(byte)(uVar1 >> 0x10));
          pfVar23[0xf] = (float)(uint3)(auVar9._10_3_ >> 0x10);
          pfVar23 = pfVar23 + 0x10;
          uVar20 = uVar21;
        } while (uVar21 < (local_res10[0] & 0xfffffff0));
      }
      if (uVar20 < local_res10[0]) {
        uVar22 = (ulonglong)(local_res10[0] - uVar20);
        do {
          puVar15 = *pauVar19;
          pauVar19 = (undefined1 (*) [16])(*pauVar19 + 1);
          *pfVar23 = (float)(byte)*puVar15;
          uVar22 = uVar22 - 1;
          pfVar23 = pfVar23 + 1;
        } while (uVar22 != 0);
      }
    }
    break;
  case 2:
  case 7:
  case 0xb:
  case 0xd:
  case 0xe:
  case 0xf:
    break;
  case 3:
    pauVar19 = local_res20;
    pfVar23 = pfVar18;
    if (local_res10[0] != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93040(pauVar19);
        }
        puVar15 = *pauVar19;
        pauVar19 = (undefined1 (*) [16])(*pauVar19 + 2);
        *pfVar23 = (float)*(ushort *)puVar15;
        pfVar23 = pfVar23 + 1;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    break;
  case 4:
    if (local_res10[0] != 0) {
      pauVar19 = local_res20;
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93050(pauVar19);
        }
        *(float *)(((longlong)pfVar18 - (longlong)local_res20) + (longlong)pauVar19) =
             (float)*(uint *)*pauVar19;
        pauVar19 = (undefined1 (*) [16])(*pauVar19 + 4);
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    break;
  case 5:
    uVar21 = 0;
    pfVar23 = pfVar18;
    pauVar19 = local_res20;
    if (local_res10[0] != 0) {
      do {
        cVar16 = (char)*(undefined4 *)(param_1 + 0x10);
        if (cVar16 < '\0') {
          FUN_144e93050(pauVar19);
          cVar16 = (char)*(undefined4 *)(param_1 + 0x10);
        }
        uVar20 = *(uint *)*pauVar19;
        if (cVar16 < '\0') {
          FUN_144e93050(*pauVar19 + 4);
        }
        if (*(uint *)(*pauVar19 + 4) == 0) {
          fVar38 = 0.0;
        }
        else {
          fVar38 = (float)uVar20 / (float)*(uint *)(*pauVar19 + 4);
        }
        *pfVar23 = fVar38;
        uVar21 = uVar21 + 1;
        pfVar23 = pfVar23 + 1;
        pauVar19 = (undefined1 (*) [16])(*pauVar19 + 8);
      } while (uVar21 < local_res10[0]);
    }
    break;
  case 6:
    uVar21 = 0;
    if (local_res10[0] != 0) {
      pauVar19 = local_res20;
      pfVar23 = pfVar18;
      uVar20 = uVar21;
      if ((0xf < local_res10[0]) &&
         ((*local_res20 + (local_res10[0] - 1) < pfVar18 ||
          (uVar20 = 0, (undefined1 (*) [16])(pfVar18 + (local_res10[0] - 1)) < local_res20)))) {
        do {
          uVar2 = *(undefined4 *)*pauVar19;
          uVar21 = uVar21 + 0x10;
          uVar36 = (undefined1)((uint)uVar2 >> 0x18);
          uVar37 = CONCAT11(uVar36,uVar36);
          uVar36 = (undefined1)((uint)uVar2 >> 0x10);
          uVar17 = CONCAT35(CONCAT21(uVar37,uVar36),CONCAT14(uVar36,uVar2));
          uVar36 = (undefined1)((uint)uVar2 >> 8);
          uVar10 = CONCAT51(CONCAT41((int)((ulonglong)uVar17 >> 0x20),uVar36),uVar36);
          sVar24 = CONCAT11((char)uVar2,(char)uVar2);
          uVar22 = CONCAT62(uVar10,sVar24);
          auVar26._8_4_ = 0;
          auVar26._0_8_ = uVar22;
          auVar26._12_2_ = uVar37;
          auVar26._14_2_ = uVar37;
          uVar37 = (undefined2)((ulonglong)uVar17 >> 0x20);
          auVar25._12_4_ = auVar26._12_4_;
          auVar25._8_2_ = 0;
          auVar25._0_8_ = uVar22;
          auVar25._10_2_ = uVar37;
          auVar39._10_6_ = auVar25._10_6_;
          auVar39._8_2_ = uVar37;
          auVar39._0_8_ = uVar22;
          uVar37 = (undefined2)uVar10;
          auVar11._4_8_ = auVar39._8_8_;
          auVar11._2_2_ = uVar37;
          auVar11._0_2_ = uVar37;
          *pfVar23 = (float)((int)sVar24 >> 8);
          pfVar23[1] = (float)(auVar11._0_4_ >> 0x18);
          pfVar23[2] = (float)(auVar39._8_4_ >> 0x18);
          pfVar23[3] = (float)(auVar25._12_4_ >> 0x18);
          uVar2 = *(undefined4 *)(*pauVar19 + 4);
          uVar36 = (undefined1)((uint)uVar2 >> 0x18);
          uVar37 = CONCAT11(uVar36,uVar36);
          uVar36 = (undefined1)((uint)uVar2 >> 0x10);
          uVar17 = CONCAT35(CONCAT21(uVar37,uVar36),CONCAT14(uVar36,uVar2));
          uVar36 = (undefined1)((uint)uVar2 >> 8);
          uVar10 = CONCAT51(CONCAT41((int)((ulonglong)uVar17 >> 0x20),uVar36),uVar36);
          sVar24 = CONCAT11((char)uVar2,(char)uVar2);
          uVar22 = CONCAT62(uVar10,sVar24);
          auVar35._8_4_ = 0;
          auVar35._0_8_ = uVar22;
          auVar35._12_2_ = uVar37;
          auVar35._14_2_ = uVar37;
          uVar37 = (undefined2)((ulonglong)uVar17 >> 0x20);
          auVar28._12_4_ = auVar35._12_4_;
          auVar28._8_2_ = 0;
          auVar28._0_8_ = uVar22;
          auVar28._10_2_ = uVar37;
          auVar27._10_6_ = auVar28._10_6_;
          auVar27._8_2_ = uVar37;
          auVar27._0_8_ = uVar22;
          uVar37 = (undefined2)uVar10;
          auVar12._4_8_ = auVar27._8_8_;
          auVar12._2_2_ = uVar37;
          auVar12._0_2_ = uVar37;
          pfVar23[4] = (float)((int)sVar24 >> 8);
          pfVar23[5] = (float)(auVar12._0_4_ >> 0x18);
          pfVar23[6] = (float)(auVar27._8_4_ >> 0x18);
          pfVar23[7] = (float)(auVar28._12_4_ >> 0x18);
          uVar2 = *(undefined4 *)(*pauVar19 + 8);
          uVar36 = (undefined1)((uint)uVar2 >> 0x18);
          uVar37 = CONCAT11(uVar36,uVar36);
          uVar36 = (undefined1)((uint)uVar2 >> 0x10);
          uVar17 = CONCAT35(CONCAT21(uVar37,uVar36),CONCAT14(uVar36,uVar2));
          uVar36 = (undefined1)((uint)uVar2 >> 8);
          uVar10 = CONCAT51(CONCAT41((int)((ulonglong)uVar17 >> 0x20),uVar36),uVar36);
          sVar24 = CONCAT11((char)uVar2,(char)uVar2);
          uVar22 = CONCAT62(uVar10,sVar24);
          auVar31._8_4_ = 0;
          auVar31._0_8_ = uVar22;
          auVar31._12_2_ = uVar37;
          auVar31._14_2_ = uVar37;
          uVar37 = (undefined2)((ulonglong)uVar17 >> 0x20);
          auVar30._12_4_ = auVar31._12_4_;
          auVar30._8_2_ = 0;
          auVar30._0_8_ = uVar22;
          auVar30._10_2_ = uVar37;
          auVar29._10_6_ = auVar30._10_6_;
          auVar29._8_2_ = uVar37;
          auVar29._0_8_ = uVar22;
          uVar37 = (undefined2)uVar10;
          auVar13._4_8_ = auVar29._8_8_;
          auVar13._2_2_ = uVar37;
          auVar13._0_2_ = uVar37;
          pfVar23[8] = (float)((int)sVar24 >> 8);
          pfVar23[9] = (float)(auVar13._0_4_ >> 0x18);
          pfVar23[10] = (float)(auVar29._8_4_ >> 0x18);
          pfVar23[0xb] = (float)(auVar30._12_4_ >> 0x18);
          uVar2 = *(undefined4 *)(*pauVar19 + 0xc);
          pauVar19 = pauVar19 + 1;
          uVar36 = (undefined1)((uint)uVar2 >> 0x18);
          uVar37 = CONCAT11(uVar36,uVar36);
          uVar36 = (undefined1)((uint)uVar2 >> 0x10);
          uVar17 = CONCAT35(CONCAT21(uVar37,uVar36),CONCAT14(uVar36,uVar2));
          uVar36 = (undefined1)((uint)uVar2 >> 8);
          uVar10 = CONCAT51(CONCAT41((int)((ulonglong)uVar17 >> 0x20),uVar36),uVar36);
          sVar24 = CONCAT11((char)uVar2,(char)uVar2);
          uVar22 = CONCAT62(uVar10,sVar24);
          auVar34._8_4_ = 0;
          auVar34._0_8_ = uVar22;
          auVar34._12_2_ = uVar37;
          auVar34._14_2_ = uVar37;
          uVar37 = (undefined2)((ulonglong)uVar17 >> 0x20);
          auVar33._12_4_ = auVar34._12_4_;
          auVar33._8_2_ = 0;
          auVar33._0_8_ = uVar22;
          auVar33._10_2_ = uVar37;
          auVar32._10_6_ = auVar33._10_6_;
          auVar32._8_2_ = uVar37;
          auVar32._0_8_ = uVar22;
          uVar37 = (undefined2)uVar10;
          auVar14._4_8_ = auVar32._8_8_;
          auVar14._2_2_ = uVar37;
          auVar14._0_2_ = uVar37;
          pfVar23[0xc] = (float)((int)sVar24 >> 8);
          pfVar23[0xd] = (float)(auVar14._0_4_ >> 0x18);
          pfVar23[0xe] = (float)(auVar32._8_4_ >> 0x18);
          pfVar23[0xf] = (float)(auVar33._12_4_ >> 0x18);
          pfVar23 = pfVar23 + 0x10;
          uVar20 = uVar21;
        } while (uVar21 < (local_res10[0] & 0xfffffff0));
      }
      if (uVar20 < local_res10[0]) {
        uVar22 = (ulonglong)(local_res10[0] - uVar20);
        do {
          puVar15 = *pauVar19;
          pauVar19 = (undefined1 (*) [16])(*pauVar19 + 1);
          *pfVar23 = (float)(int)(char)*puVar15;
          uVar22 = uVar22 - 1;
          pfVar23 = pfVar23 + 1;
        } while (uVar22 != 0);
      }
    }
    break;
  case 8:
    pauVar19 = local_res20;
    pfVar23 = pfVar18;
    if (local_res10[0] != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93040(pauVar19);
        }
        puVar15 = *pauVar19;
        pauVar19 = (undefined1 (*) [16])(*pauVar19 + 2);
        *pfVar23 = (float)(int)*(short *)puVar15;
        pfVar23 = pfVar23 + 1;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    break;
  case 9:
    if (local_res10[0] != 0) {
      pauVar19 = local_res20;
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93050(pauVar19);
        }
        *(float *)(((longlong)pfVar18 - (longlong)local_res20) + (longlong)pauVar19) =
             (float)*(int *)*pauVar19;
        pauVar19 = (undefined1 (*) [16])(*pauVar19 + 4);
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    break;
  case 10:
    uVar21 = 0;
    pfVar23 = pfVar18;
    pauVar19 = local_res20;
    if (local_res10[0] != 0) {
      do {
        cVar16 = (char)*(undefined4 *)(param_1 + 0x10);
        if (cVar16 < '\0') {
          FUN_144e93050(pauVar19);
          cVar16 = (char)*(undefined4 *)(param_1 + 0x10);
        }
        iVar3 = *(int *)*pauVar19;
        if (cVar16 < '\0') {
          FUN_144e93050(*pauVar19 + 4);
        }
        if (*(uint *)(*pauVar19 + 4) == 0) {
          fVar38 = 0.0;
        }
        else {
          fVar38 = (float)iVar3 / (float)*(uint *)(*pauVar19 + 4);
        }
        *pfVar23 = fVar38;
        uVar21 = uVar21 + 1;
        pfVar23 = pfVar23 + 1;
        pauVar19 = (undefined1 (*) [16])(*pauVar19 + 8);
      } while (uVar21 < local_res10[0]);
    }
    break;
  case 0xc:
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93150(local_res20,uVar22);
    }
    auVar25 = _DAT_149974e00;
    auVar26 = _DAT_149934db0;
    uVar21 = 0;
    if (local_res10[0] != 0) {
      pauVar19 = local_res20;
      pfVar23 = pfVar18;
      uVar20 = uVar21;
      if ((7 < local_res10[0]) &&
         ((*local_res20 + (ulonglong)(local_res10[0] - 1) * 8 < pfVar18 ||
          (uVar20 = 0, (undefined1 (*) [16])(pfVar18 + (local_res10[0] - 1)) < local_res20)))) {
        do {
          uVar21 = uVar21 + 8;
          auVar39 = maxpd(auVar25,*pauVar19);
          auVar35 = minpd(auVar26,auVar39);
          auVar39 = pauVar19[1];
          *(ulonglong *)pfVar23 = CONCAT44((float)auVar35._8_8_,(float)auVar35._0_8_);
          auVar39 = maxpd(auVar25,auVar39);
          auVar35 = minpd(auVar26,auVar39);
          auVar39 = pauVar19[2];
          *(ulonglong *)(pfVar23 + 2) = CONCAT44((float)auVar35._8_8_,(float)auVar35._0_8_);
          auVar39 = maxpd(auVar25,auVar39);
          auVar35 = minpd(auVar26,auVar39);
          auVar39 = pauVar19[3];
          pauVar19 = pauVar19 + 4;
          *(ulonglong *)(pfVar23 + 4) = CONCAT44((float)auVar35._8_8_,(float)auVar35._0_8_);
          auVar39 = maxpd(auVar25,auVar39);
          auVar39 = minpd(auVar26,auVar39);
          *(ulonglong *)(pfVar23 + 6) = CONCAT44((float)auVar39._8_8_,(float)auVar39._0_8_);
          pfVar23 = pfVar23 + 8;
          uVar20 = uVar21;
        } while (uVar21 < (local_res10[0] & 0xfffffff8));
      }
      if (uVar20 < local_res10[0]) {
        uVar22 = (ulonglong)(local_res10[0] - uVar20);
        do {
          dVar4 = -3.4028234663852886e+38;
          if (-3.4028234663852886e+38 <= *(double *)*pauVar19) {
            dVar4 = *(double *)*pauVar19;
          }
          pauVar19 = (undefined1 (*) [16])(*pauVar19 + 8);
          dVar5 = 3.4028234663852886e+38;
          if (dVar4 <= 3.4028234663852886e+38) {
            dVar5 = dVar4;
          }
          *pfVar23 = (float)dVar5;
          uVar22 = uVar22 - 1;
          pfVar23 = pfVar23 + 1;
        } while (uVar22 != 0);
      }
    }
    break;
  case 0x10:
    pfVar23 = pfVar18;
    pauVar19 = local_res20;
    if (local_res10[0] != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93070(pauVar19);
        }
        *pfVar23 = (float)*(ulonglong *)*pauVar19;
        pauVar19 = (undefined1 (*) [16])(*pauVar19 + 8);
        pfVar23 = pfVar23 + 1;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
    break;
  case 0x11:
    pauVar19 = local_res20;
    pfVar23 = pfVar18;
    if (local_res10[0] != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93070(pauVar19);
        }
        *pfVar23 = (float)*(longlong *)*pauVar19;
        uVar22 = uVar22 - 1;
        pauVar19 = (undefined1 (*) [16])(*pauVar19 + 8);
        pfVar23 = pfVar23 + 1;
      } while (uVar22 != 0);
    }
    break;
  default:
    goto switchD_144b7eff2_default;
  }
switchD_144b7eff2_default:
  free(local_res20);
  *local_res18 = pfVar18;
                    /* WARNING: Read-only address (ram,0x000149934db0) is written */
                    /* WARNING: Read-only address (ram,0x000149974e00) is written */
  return 0;
}



// FUNCTION 144b7f620 FUN_144b7f620 body=1289 status=ok
// SIG undefined FUN_144b7f620(void)

undefined8 FUN_144b7f620(longlong param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  undefined8 uVar5;
  double *pdVar6;
  double *pdVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  double *pdVar11;
  double dVar12;
  uint local_res10 [2];
  undefined8 *local_res18;
  double *local_res20;
  
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0x10:
  case 0x11:
    break;
  default:
    return 2;
  }
  local_res18 = param_3;
  uVar5 = FUN_144b81fb0(param_1,param_2,local_res10,8,&local_res20,0xffffffffffffffff);
  if (((int)uVar5 != 0) || (local_res20 == (double *)0x0)) {
    *param_3 = 0;
    return uVar5;
  }
  if (*(short *)(param_2 + 2) == 0xc) {
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93150(local_res20,local_res10[0]);
    }
    *param_3 = local_res20;
    return 0;
  }
  uVar10 = (ulonglong)local_res10[0];
  pdVar6 = (double *)FUN_144e92f50(uVar10 * 8);
  if (pdVar6 == (double *)0x0) {
    free(local_res20);
    return 7;
  }
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    pdVar11 = local_res20;
    pdVar7 = pdVar6;
    if (local_res10[0] != 0) {
      do {
        *pdVar7 = (double)*(byte *)pdVar11;
        uVar10 = uVar10 - 1;
        pdVar11 = (double *)((longlong)pdVar11 + 1);
        pdVar7 = pdVar7 + 1;
      } while (uVar10 != 0);
    }
    break;
  case 2:
  case 7:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    break;
  case 3:
    pdVar11 = local_res20;
    pdVar7 = pdVar6;
    if (local_res10[0] != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93040(pdVar11);
        }
        uVar2 = *(ushort *)pdVar11;
        pdVar11 = (double *)((longlong)pdVar11 + 2);
        *pdVar7 = (double)uVar2;
        pdVar7 = pdVar7 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    break;
  case 4:
    pdVar11 = local_res20;
    pdVar7 = pdVar6;
    if (local_res10[0] != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93050(pdVar11);
        }
        fVar1 = *(float *)pdVar11;
        pdVar11 = (double *)((longlong)pdVar11 + 4);
        *pdVar7 = (double)(uint)fVar1;
        pdVar7 = pdVar7 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    break;
  case 5:
    uVar8 = 0;
    pdVar11 = local_res20;
    pdVar7 = pdVar6;
    if (local_res10[0] != 0) {
      do {
        cVar4 = (char)*(undefined4 *)(param_1 + 0x10);
        if (cVar4 < '\0') {
          FUN_144e93050(pdVar11);
          cVar4 = (char)*(undefined4 *)(param_1 + 0x10);
        }
        fVar1 = *(float *)pdVar11;
        if (cVar4 < '\0') {
          FUN_144e93050((float *)((longlong)pdVar11 + 4));
        }
        if (*(float *)((longlong)pdVar11 + 4) == 0.0) {
          dVar12 = 0.0;
        }
        else {
          dVar12 = (double)(uint)fVar1 / (double)(uint)*(float *)((longlong)pdVar11 + 4);
        }
        *pdVar7 = dVar12;
        uVar8 = uVar8 + 1;
        pdVar11 = pdVar11 + 1;
        pdVar7 = pdVar7 + 1;
      } while (uVar8 < local_res10[0]);
    }
    break;
  case 6:
    pdVar11 = local_res20;
    pdVar7 = pdVar6;
    if (local_res10[0] != 0) {
      do {
        cVar4 = *(char *)pdVar11;
        pdVar11 = (double *)((longlong)pdVar11 + 1);
        *pdVar7 = (double)(int)cVar4;
        uVar10 = uVar10 - 1;
        pdVar7 = pdVar7 + 1;
      } while (uVar10 != 0);
    }
    break;
  case 8:
    pdVar11 = local_res20;
    pdVar7 = pdVar6;
    if (local_res10[0] != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93040(pdVar11);
        }
        sVar3 = *(short *)pdVar11;
        pdVar11 = (double *)((longlong)pdVar11 + 2);
        *pdVar7 = (double)(int)sVar3;
        pdVar7 = pdVar7 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    break;
  case 9:
    pdVar11 = local_res20;
    pdVar7 = pdVar6;
    if (local_res10[0] != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93050(pdVar11);
        }
        fVar1 = *(float *)pdVar11;
        pdVar11 = (double *)((longlong)pdVar11 + 4);
        *pdVar7 = (double)(int)fVar1;
        pdVar7 = pdVar7 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    break;
  case 10:
    uVar8 = 0;
    pdVar11 = local_res20;
    pdVar7 = pdVar6;
    if (local_res10[0] != 0) {
      do {
        cVar4 = (char)*(undefined4 *)(param_1 + 0x10);
        if (cVar4 < '\0') {
          FUN_144e93050(pdVar11);
          cVar4 = (char)*(undefined4 *)(param_1 + 0x10);
        }
        fVar1 = *(float *)pdVar11;
        if (cVar4 < '\0') {
          FUN_144e93050((float *)((longlong)pdVar11 + 4));
        }
        if (*(float *)((longlong)pdVar11 + 4) == 0.0) {
          dVar12 = 0.0;
        }
        else {
          dVar12 = (double)(int)fVar1 / (double)(uint)*(float *)((longlong)pdVar11 + 4);
        }
        *pdVar7 = dVar12;
        uVar8 = uVar8 + 1;
        pdVar11 = pdVar11 + 1;
        pdVar7 = pdVar7 + 1;
      } while (uVar8 < local_res10[0]);
    }
    break;
  case 0xb:
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93110(local_res20,uVar10);
    }
    uVar8 = 0;
    if (local_res10[0] != 0) {
      pdVar11 = local_res20;
      pdVar7 = pdVar6;
      uVar9 = uVar8;
      if ((7 < local_res10[0]) &&
         (((double *)((longlong)local_res20 + (ulonglong)(local_res10[0] - 1) * 4) < pdVar6 ||
          (uVar9 = 0, pdVar6 + (local_res10[0] - 1) < local_res20)))) {
        do {
          dVar12 = *pdVar11;
          uVar8 = uVar8 + 8;
          *pdVar7 = (double)SUB84(dVar12,0);
          pdVar7[1] = (double)(float)((ulonglong)dVar12 >> 0x20);
          dVar12 = pdVar11[1];
          pdVar7[2] = (double)SUB84(dVar12,0);
          pdVar7[3] = (double)(float)((ulonglong)dVar12 >> 0x20);
          dVar12 = pdVar11[2];
          pdVar7[4] = (double)SUB84(dVar12,0);
          pdVar7[5] = (double)(float)((ulonglong)dVar12 >> 0x20);
          dVar12 = pdVar11[3];
          pdVar11 = pdVar11 + 4;
          pdVar7[6] = (double)SUB84(dVar12,0);
          pdVar7[7] = (double)(float)((ulonglong)dVar12 >> 0x20);
          pdVar7 = pdVar7 + 8;
          uVar9 = uVar8;
        } while (uVar8 < (local_res10[0] & 0xfffffff8));
      }
      if (uVar9 < local_res10[0]) {
        uVar10 = (ulonglong)(local_res10[0] - uVar9);
        do {
          fVar1 = *(float *)pdVar11;
          pdVar11 = (double *)((longlong)pdVar11 + 4);
          *pdVar7 = (double)fVar1;
          uVar10 = uVar10 - 1;
          pdVar7 = pdVar7 + 1;
        } while (uVar10 != 0);
      }
    }
    break;
  case 0x10:
    if (local_res10[0] != 0) {
      pdVar11 = local_res20;
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93070(pdVar11);
        }
        *(double *)((longlong)pdVar11 + ((longlong)pdVar6 - (longlong)local_res20)) =
             (double)(ulonglong)*pdVar11;
        pdVar11 = pdVar11 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    break;
  case 0x11:
    if (local_res10[0] != 0) {
      pdVar11 = local_res20;
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93070(pdVar11);
        }
        *(double *)((longlong)pdVar11 + ((longlong)pdVar6 - (longlong)local_res20)) =
             (double)(longlong)*pdVar11;
        pdVar11 = pdVar11 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    break;
  default:
    goto switchD_144b7f732_default;
  }
switchD_144b7f732_default:
  free(local_res20);
  *local_res18 = pdVar6;
  return 0;
}



// FUNCTION 144b7fb90 FUN_144b7fb90 body=371 status=ok
// SIG undefined FUN_144b7fb90(void)

undefined8 FUN_144b7fb90(longlong param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  uint local_res10 [2];
  uint *local_res20;
  
  uVar1 = *(ushort *)(param_2 + 2);
  if (((0x10 < uVar1) || ((0x12010U >> (uVar1 & 0x1f) & 1) == 0)) && (uVar1 != 0x12)) {
    return 2;
  }
  uVar3 = FUN_144b81fb0(param_1,param_2,local_res10,8,&local_res20,0xffffffffffffffff);
  if (((int)uVar3 != 0) || (local_res20 == (uint *)0x0)) {
    *param_3 = 0;
    return uVar3;
  }
  if ((*(short *)(param_2 + 2) != 0x10) && (*(short *)(param_2 + 2) != 0x12)) {
    uVar6 = (ulonglong)local_res10[0];
    puVar4 = (ulonglong *)FUN_144e92f50(local_res10[0] * 8);
    if (puVar4 == (ulonglong *)0x0) {
      free(local_res20);
      uVar3 = 7;
    }
    else {
      if (((*(short *)(param_2 + 2) == 4) || (*(short *)(param_2 + 2) == 0xd)) &&
         (puVar5 = local_res20, puVar7 = puVar4, local_res10[0] != 0)) {
        do {
          if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
            FUN_144e93050(puVar5);
          }
          uVar2 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar7 = (ulonglong)uVar2;
          puVar7 = puVar7 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      free(local_res20);
      uVar3 = 0;
      *param_3 = (longlong)puVar4;
    }
    return uVar3;
  }
  *param_3 = (longlong)local_res20;
  if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
    FUN_144e93150(local_res20,local_res10[0]);
  }
  return 0;
}



// FUNCTION 144b7fd10 FUN_144b7fd10 body=164 status=ok
// SIG undefined FUN_144b7fd10(void)

ulonglong FUN_144b7fd10(longlong param_1,longlong param_2,short *param_3)

{
  short sVar1;
  short sVar2;
  ulonglong uVar3;
  short *psVar4;
  ulonglong uVar5;
  short *local_res8;
  
  if (*(ulonglong *)(param_2 + 8) < (ulonglong)*(ushort *)(param_1 + 0x72)) {
    return 1;
  }
  uVar3 = FUN_144b7d890(param_1,param_2,&local_res8);
  uVar5 = uVar3 & 0xffffffff;
  if (((int)uVar3 == 0) && (local_res8 != (short *)0x0)) {
    sVar1 = *(short *)(param_1 + 0x72);
    sVar2 = *local_res8;
    *param_3 = sVar2;
    psVar4 = local_res8;
    do {
      sVar1 = sVar1 + -1;
      uVar3 = uVar5;
      if (sVar1 == 0) goto LAB_144b7fd9a;
      psVar4 = psVar4 + 1;
    } while (*psVar4 == sVar2);
    uVar3 = 5;
LAB_144b7fd9a:
    free(local_res8);
  }
  return uVar3;
}



// FUNCTION 144b7fdc0 FUN_144b7fdc0 body=118 status=ok
// SIG undefined FUN_144b7fdc0(void)

undefined8 FUN_144b7fdc0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  
  if ((*(uint *)(param_1 + 0x10) >> 0x13 & 1) == 0) {
    local_res8[0] = *(undefined4 *)(param_2 + 0x10);
    if ((char)*(uint *)(param_1 + 0x10) < '\0') {
      FUN_144e93050(local_res8);
    }
    uVar1 = FUN_144b80180(param_1,local_res8[0],8,param_3);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    *param_3 = *(undefined8 *)(param_2 + 0x10);
  }
  if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
    FUN_144e93070(param_3);
  }
  return 0;
}



// FUNCTION 144b7fe40 FUN_144b7fe40 body=118 status=ok
// SIG undefined FUN_144b7fe40(void)

undefined8 FUN_144b7fe40(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  
  if ((*(uint *)(param_1 + 0x10) >> 0x13 & 1) == 0) {
    local_res8[0] = *(undefined4 *)(param_2 + 0x10);
    if ((char)*(uint *)(param_1 + 0x10) < '\0') {
      FUN_144e93050(local_res8);
    }
    uVar1 = FUN_144b80180(param_1,local_res8[0],8,param_3);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    *param_3 = *(undefined8 *)(param_2 + 0x10);
  }
  if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
    FUN_144e93070(param_3);
  }
  return 0;
}



// FUNCTION 144b7fec0 FUN_144b7fec0 body=266 status=ok
// SIG undefined FUN_144b7fec0(void)

void FUN_144b7fec0(longlong param_1,longlong param_2,double *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  double dVar5;
  undefined1 auStack_48 [32];
  uint local_28 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 >> 0x13 & 1) == 0) {
    local_28[0] = *(uint *)(param_2 + 0x10);
    if ((char)uVar4 < '\0') {
      FUN_144e93050(local_28);
      uVar4 = *(uint *)(param_1 + 0x10);
    }
    if ((uVar4 >> 0xb & 1) == 0) {
      iVar1 = FUN_144b7aaf0(param_1);
      if ((iVar1 == 0) ||
         (lVar3 = (**(code **)(param_1 + 0x440))(*(undefined8 *)(param_1 + 0x438),&local_20,8),
         lVar3 != 8)) goto LAB_144b7ffbd;
    }
    else {
      if (*(ulonglong *)(param_1 + 0x420) < (ulonglong)local_28[0] + 8) goto LAB_144b7ffbd;
      FUN_144e92fa0(&local_20,(ulonglong)local_28[0] + *(longlong *)(param_1 + 0x418),8);
    }
    uVar4 = *(uint *)(param_1 + 0x10);
  }
  else {
    local_20 = *(undefined8 *)(param_2 + 0x10);
  }
  uVar2 = (uint)local_20;
  if ((char)uVar4 < '\0') {
    FUN_144e93110(&local_20,2);
    uVar2 = (uint)local_20;
  }
  if (uVar2 == 0) {
LAB_144b7ffb4:
    dVar5 = 0.0;
  }
  else {
    if (local_20._4_4_ == 0) goto LAB_144b7ffb4;
    dVar5 = (double)uVar2 / (double)local_20._4_4_;
  }
  *param_3 = dVar5;
LAB_144b7ffbd:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 144b7ffe0 FUN_144b7ffe0 body=264 status=ok
// SIG undefined FUN_144b7ffe0(void)

void FUN_144b7ffe0(longlong param_1,longlong param_2,double *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  double dVar4;
  undefined1 auStack_48 [32];
  uint local_28 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 >> 0x13 & 1) == 0) {
    local_28[0] = *(uint *)(param_2 + 0x10);
    if ((char)uVar3 < '\0') {
      FUN_144e93050(local_28);
      uVar3 = *(uint *)(param_1 + 0x10);
    }
    if ((uVar3 >> 0xb & 1) == 0) {
      iVar1 = FUN_144b7aaf0(param_1);
      if ((iVar1 == 0) ||
         (lVar2 = (**(code **)(param_1 + 0x440))(*(undefined8 *)(param_1 + 0x438),&local_20,8),
         lVar2 != 8)) goto LAB_144b800db;
    }
    else {
      if (*(ulonglong *)(param_1 + 0x420) < (ulonglong)local_28[0] + 8) goto LAB_144b800db;
      FUN_144e92fa0(&local_20,(ulonglong)local_28[0] + *(longlong *)(param_1 + 0x418),8);
    }
    uVar3 = *(uint *)(param_1 + 0x10);
  }
  else {
    local_20 = *(undefined8 *)(param_2 + 0x10);
  }
  iVar1 = (int)local_20;
  if ((char)uVar3 < '\0') {
    FUN_144e93110(&local_20,2);
    iVar1 = (int)local_20;
  }
  if (iVar1 == 0) {
LAB_144b800d2:
    dVar4 = 0.0;
  }
  else {
    if (local_20._4_4_ == 0) goto LAB_144b800d2;
    dVar4 = (double)iVar1 / (double)local_20._4_4_;
  }
  *param_3 = dVar4;
LAB_144b800db:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 144b80100 FUN_144b80100 body=118 status=ok
// SIG undefined FUN_144b80100(void)

undefined8 FUN_144b80100(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  
  if ((*(uint *)(param_1 + 0x10) >> 0x13 & 1) == 0) {
    local_res8[0] = *(undefined4 *)(param_2 + 0x10);
    if ((char)*(uint *)(param_1 + 0x10) < '\0') {
      FUN_144e93050(local_res8);
    }
    uVar1 = FUN_144b80180(param_1,local_res8[0],8,param_3);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    *param_3 = *(undefined8 *)(param_2 + 0x10);
  }
  if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
    FUN_144e93070(param_3);
  }
  return 0;
}



// FUNCTION 144b80180 FUN_144b80180 body=144 status=ok
// SIG undefined FUN_144b80180(void)

undefined8 FUN_144b80180(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  if ((*(uint *)(param_1 + 0x10) & 0x800) == 0) {
    iVar1 = FUN_144b7aaf0();
    if ((iVar1 != 0) &&
       (uVar2 = (**(code **)(param_1 + 0x440))(*(undefined8 *)(param_1 + 0x438),param_4,param_3),
       uVar2 == param_3)) {
      return 0;
    }
  }
  else if ((param_2 <= ~param_3) && (param_2 + param_3 <= *(ulonglong *)(param_1 + 0x420))) {
    FUN_144e92fa0(param_4,param_2 + *(longlong *)(param_1 + 0x418));
    return 0;
  }
  return 3;
}



// FUNCTION 144b80210 FUN_144b80210 body=368 status=ok
// SIG undefined FUN_144b80210(void)

void FUN_144b80210(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  if (6 < param_2 - 1U) {
    return;
  }
  if (param_5 == 0) {
    switch(param_2) {
    case 1:
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_3,"Incorrect count for \"%s\"");
      return;
    case 2:
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_3,"Incompatible type for \"%s\"");
      return;
    case 3:
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_3,"IO error during reading of \"%s\"");
      return;
    case 4:
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_3,"Incorrect value for \"%s\"");
      return;
    case 5:
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_3,
                    "Cannot handle different values per sample for \"%s\"");
      return;
    case 6:
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_3,
                    "Sanity check on size of \"%s\" value failed");
      return;
    case 7:
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_3,"Out of memory reading of \"%s\"");
      return;
    }
  }
  switch(param_2) {
  case 1:
    FUN_144e94570(*(undefined8 *)(param_1 + 0x438),param_3,"Incorrect count for \"%s\"; tag ignored"
                 );
    return;
  case 2:
    FUN_144e94570(*(undefined8 *)(param_1 + 0x438),param_3,
                  "Incompatible type for \"%s\"; tag ignored");
    return;
  case 3:
    FUN_144e94570(*(undefined8 *)(param_1 + 0x438),param_3,
                  "IO error during reading of \"%s\"; tag ignored");
    return;
  case 4:
    FUN_144e94570(*(undefined8 *)(param_1 + 0x438),param_3,"Incorrect value for \"%s\"; tag ignored"
                 );
    return;
  case 5:
    FUN_144e94570(*(undefined8 *)(param_1 + 0x438),param_3,
                  "Cannot handle different values per sample for \"%s\"; tag ignored");
    return;
  case 6:
    FUN_144e94570(*(undefined8 *)(param_1 + 0x438),param_3,
                  "Sanity check on size of \"%s\" value failed; tag ignored");
    return;
  case 7:
    FUN_144e94570(*(undefined8 *)(param_1 + 0x438),param_3,
                  "Out of memory reading of \"%s\"; tag ignored");
    return;
  }
}



// FUNCTION 144b803c0 FUN_144b803c0 body=712 status=ok
// SIG undefined FUN_144b803c0(void)

undefined8 FUN_144b803c0(longlong param_1,longlong param_2,ushort param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  iVar4 = FUN_144b81dc0(param_1,0);
  if (iVar4 != 0) {
    if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
      free(*(void **)(param_1 + 0xe0));
    }
    lVar6 = FUN_144b7a970(param_1,*(undefined4 *)(param_1 + 0xd4),8,"for \"StripByteCounts\" array")
    ;
    *(longlong *)(param_1 + 0xe0) = lVar6;
    if (lVar6 != 0) {
      if (*(short *)(param_1 + 0x68) == 1) {
        if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
          uVar7 = FUN_144b77940(param_1);
          uVar5 = 0;
          if (*(int *)(param_1 + 0xd4) != 0) {
            uVar11 = (ulonglong)*(uint *)(param_1 + 0x4c) / (ulonglong)*(uint *)(param_1 + 0xd0);
            do {
              if ((uVar7 != 0) &&
                 (auVar3._8_8_ = 0, auVar3._0_8_ = uVar7,
                 SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar3,0) < uVar11)) {
                return 0xffffffff;
              }
              uVar10 = (ulonglong)uVar5;
              uVar5 = uVar5 + 1;
              *(ulonglong *)(*(longlong *)(param_1 + 0xe0) + uVar10 * 8) = uVar11 * uVar7;
            } while (uVar5 < *(uint *)(param_1 + 0xd4));
          }
        }
        else {
          uVar8 = FUN_144b7ac40();
          uVar5 = 0;
          if (*(int *)(param_1 + 0xd4) != 0) {
            do {
              uVar7 = (ulonglong)uVar5;
              uVar5 = uVar5 + 1;
              *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + uVar7 * 8) = uVar8;
            } while (uVar5 < *(uint *)(param_1 + 0xd4));
          }
        }
      }
      else {
        uVar7 = (**(code **)(param_1 + 0x460))(*(undefined8 *)(param_1 + 0x438));
        if ((*(uint *)(param_1 + 0x10) & 0x80000) == 0) {
          uVar11 = (ulonglong)((uint)param_3 * 0xc) + 0xe;
        }
        else {
          uVar11 = (ulonglong)((uint)param_3 * 0x14) + 0x20;
        }
        uVar10 = 0;
        for (; param_3 != 0; param_3 = param_3 - 1) {
          uVar5 = FUN_144e93b10(*(undefined2 *)(param_2 + 2));
          if (uVar5 == 0) {
            FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"EstimateStripByteCounts",
                          "Cannot determine size of unknown tag type %d",
                          *(undefined2 *)(param_2 + 2));
            return 0xffffffff;
          }
          auVar2._8_8_ = 0;
          auVar2._0_8_ = CONCAT44(0,uVar5);
          if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar2,0) <
              *(ulonglong *)(param_2 + 8)) {
            return 0xffffffff;
          }
          uVar12 = *(ulonglong *)(param_2 + 8) * CONCAT44(0,uVar5);
          if ((*(uint *)(param_1 + 0x10) & 0x80000) == 0) {
            uVar9 = uVar10;
            if (4 < uVar12) {
              uVar9 = uVar12;
            }
          }
          else {
            uVar9 = uVar12;
            if (uVar12 < 9) {
              uVar9 = uVar10;
            }
          }
          if (~uVar9 < uVar11) {
            return 0xffffffff;
          }
          uVar11 = uVar11 + uVar9;
          param_2 = param_2 + 0x20;
        }
        uVar12 = uVar7 - uVar11;
        if (uVar7 < uVar11) {
          uVar12 = uVar7;
        }
        if (*(short *)(param_1 + 0x9a) == 2) {
          uVar12 = uVar12 / *(ushort *)(param_1 + 0x72);
        }
        uVar5 = 0;
        if (*(int *)(param_1 + 0xd4) != 0) {
          do {
            uVar5 = (int)uVar10 + 1;
            *(ulonglong *)(*(longlong *)(param_1 + 0xe0) + uVar10 * 8) = uVar12;
            uVar10 = (ulonglong)uVar5;
          } while (uVar5 < *(uint *)(param_1 + 0xd4));
        }
        uVar10 = (ulonglong)(uVar5 - 1);
        uVar11 = *(ulonglong *)(*(longlong *)(param_1 + 0xe0) + uVar10 * 8);
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0xe0) + uVar10 * 8);
        uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0xd8) + uVar10 * 8);
        if (~uVar11 < uVar10) {
          return 0xffffffff;
        }
        if (uVar7 < uVar10 + uVar11) {
          if (uVar10 < uVar7) {
            *plVar1 = uVar7 - uVar10;
          }
          else {
            *plVar1 = 0;
          }
        }
      }
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) | 0x1000000;
      if ((*(uint *)(param_1 + 0x38) & 0x20000) == 0) {
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x4c);
      }
      return 1;
    }
  }
  return 0xffffffff;
}



// FUNCTION 144b80690 FUN_144b80690 body=1492 status=ok
// SIG undefined FUN_144b80690(void)

ushort FUN_144b80690(undefined8 *param_1,ulonglong param_2,longlong *param_3,ulonglong *param_4)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *_Memory;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined2 *puVar9;
  ulonglong *puVar10;
  char *pcVar11;
  ushort uVar12;
  ushort local_res8 [4];
  undefined1 local_res10;
  undefined1 uStackX_11;
  undefined1 uStackX_12;
  undefined1 uStackX_13;
  undefined1 uStackX_14;
  undefined1 uStackX_15;
  undefined1 uStackX_16;
  undefined1 uStackX_17;
  longlong *local_res18;
  undefined1 local_res20;
  undefined1 uStackX_21;
  undefined1 uStackX_22;
  undefined1 uStackX_23;
  undefined1 uStackX_24;
  undefined1 uStackX_25;
  undefined1 uStackX_26;
  undefined1 uStackX_27;
  
  param_1[3] = param_2;
  if (param_4 != (ulonglong *)0x0) {
    *param_4 = 0;
    param_2 = param_1[3];
  }
  local_res18 = param_3;
  if ((*(uint *)(param_1 + 2) >> 0xb & 1) == 0) {
    iVar4 = FUN_144b7aaf0();
    uVar3 = param_1[0x87];
    if (iVar4 == 0) {
      FUN_144e92fd0(uVar3,"TIFFFetchDirectory","%s: Seek error accessing TIFF directory",*param_1);
      return 0;
    }
    if ((*(uint *)(param_1 + 2) & 0x80000) == 0) {
      lVar5 = (*(code *)param_1[0x88])(uVar3,local_res8,2);
      if (lVar5 == 2) {
        if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
          FUN_144e93040(local_res8);
        }
        uVar6 = (ulonglong)local_res8[0];
        if (0x1000 < local_res8[0]) goto LAB_144b80767;
        iVar4 = 0xc;
LAB_144b807b4:
        _Memory = (undefined2 *)FUN_144b7a970(param_1,uVar6 & 0xffff,iVar4,"to read TIFF directory")
        ;
        if (_Memory == (undefined2 *)0x0) {
          return 0;
        }
        uVar6 = (*(code *)param_1[0x88])(param_1[0x87],_Memory,(uint)local_res8[0] * iVar4);
        if (uVar6 != (uint)local_res8[0] * iVar4) {
          FUN_144e92fd0(param_1[0x87],"TIFFFetchDirectory","%.100s: Can not read TIFF directory",
                        *param_1);
          free(_Memory);
          return 0;
        }
        if (param_4 == (ulonglong *)0x0) goto LAB_144b80896;
        if ((*(uint *)(param_1 + 2) & 0x80000) == 0) {
          lVar5 = (*(code *)param_1[0x88])(param_1[0x87],&local_res10,4);
          uVar6 = (ulonglong)
                  CONCAT13(uStackX_13,CONCAT12(uStackX_12,CONCAT11(uStackX_11,local_res10)));
          if (lVar5 != 4) {
            uVar6 = 0;
          }
          local_res10 = (undefined1)uVar6;
          uStackX_11 = (undefined1)(uVar6 >> 8);
          uStackX_12 = (undefined1)(uVar6 >> 0x10);
          uStackX_13 = (undefined1)(uVar6 >> 0x18);
          if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
            FUN_144e93050(&local_res10);
            uVar6 = (ulonglong)
                    CONCAT13(uStackX_13,CONCAT12(uStackX_12,CONCAT11(uStackX_11,local_res10)));
          }
          *param_4 = uVar6;
          goto LAB_144b80896;
        }
        lVar5 = (*(code *)param_1[0x88])(param_1[0x87],param_4,8);
        if (lVar5 != 8) {
LAB_144b80885:
          *param_4 = 0;
        }
LAB_144b80888:
        if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
          FUN_144e93070(param_4);
        }
LAB_144b80896:
        lVar5 = FUN_144b7a970(param_1,local_res8[0],0x20,"to read TIFF directory");
        if (lVar5 != 0) {
          uVar12 = 0;
          if (local_res8[0] != 0) {
            puVar10 = (ulonglong *)(lVar5 + 8);
            puVar9 = _Memory;
            do {
              *(undefined1 *)(puVar10 + 2) = 0;
              if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
                FUN_144e93040(puVar9);
              }
              *(undefined2 *)(puVar10 + -1) = *puVar9;
              if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
                FUN_144e93040(puVar9 + 1);
              }
              *(undefined2 *)((longlong)puVar10 + -6) = puVar9[1];
              if ((*(uint *)(param_1 + 2) & 0x80000) == 0) {
                if ((*(uint *)(param_1 + 2) & 0x80) != 0) {
                  FUN_144e93050(puVar9 + 2);
                }
                uVar8 = *(uint *)(puVar9 + 2);
                puVar10[1] = 0;
                *puVar10 = (ulonglong)uVar8;
                puVar1 = (undefined4 *)(puVar9 + 4);
                puVar9 = puVar9 + 6;
                *(undefined4 *)(puVar10 + 1) = *puVar1;
              }
              else {
                if ((*(uint *)(param_1 + 2) & 0x80) != 0) {
                  FUN_144e93070(puVar9 + 2);
                }
                local_res10 = (undefined1)*(ulonglong *)(puVar9 + 2);
                uStackX_11 = *(undefined1 *)((longlong)puVar9 + 5);
                uStackX_12 = *(undefined1 *)(puVar9 + 3);
                uStackX_13 = *(undefined1 *)((longlong)puVar9 + 7);
                uStackX_14 = *(undefined1 *)(puVar9 + 4);
                uStackX_15 = *(undefined1 *)((longlong)puVar9 + 9);
                uStackX_16 = *(undefined1 *)(puVar9 + 5);
                uStackX_17 = *(undefined1 *)((longlong)puVar9 + 0xb);
                *puVar10 = *(ulonglong *)(puVar9 + 2);
                puVar2 = (ulonglong *)(puVar9 + 6);
                local_res20 = (undefined1)*puVar2;
                uStackX_21 = *(undefined1 *)((longlong)puVar9 + 0xd);
                uStackX_22 = *(undefined1 *)(puVar9 + 7);
                uStackX_23 = *(undefined1 *)((longlong)puVar9 + 0xf);
                uStackX_24 = *(undefined1 *)(puVar9 + 8);
                uStackX_25 = *(undefined1 *)((longlong)puVar9 + 0x11);
                uStackX_26 = *(undefined1 *)(puVar9 + 9);
                uStackX_27 = *(undefined1 *)((longlong)puVar9 + 0x13);
                puVar9 = puVar9 + 10;
                puVar10[1] = *puVar2;
              }
              puVar10 = puVar10 + 4;
              uVar12 = uVar12 + 1;
              param_3 = local_res18;
            } while (uVar12 < local_res8[0]);
          }
          free(_Memory);
          *param_3 = lVar5;
          return local_res8[0];
        }
        free(_Memory);
        return 0;
      }
    }
    else {
      lVar5 = (*(code *)param_1[0x88])(uVar3,&local_res10,8);
      if (lVar5 == 8) {
        if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
          FUN_144e93070(&local_res10);
        }
        local_res8[0] = CONCAT11(uStackX_11,local_res10);
        uVar6 = CONCAT17(uStackX_17,
                         CONCAT16(uStackX_16,
                                  CONCAT15(uStackX_15,
                                           CONCAT14(uStackX_14,
                                                    CONCAT13(uStackX_13,
                                                             CONCAT12(uStackX_12,local_res8[0]))))))
        ;
        if (0x1000 < uVar6) goto LAB_144b80767;
        iVar4 = 0x14;
        goto LAB_144b807b4;
      }
    }
    FUN_144e92fd0(param_1[0x87],"TIFFFetchDirectory","%s: Can not read TIFF directory count",
                  *param_1);
  }
  else {
    if (param_2 < 0x8000000000000000) {
      if ((*(uint *)(param_1 + 2) >> 0x13 & 1) == 0) {
        lVar5 = param_2 + 2;
        if (((lVar5 < (longlong)param_2) || (lVar5 < 2)) || ((longlong)param_1[0x84] < lVar5))
        goto LAB_144b80c2b;
        FUN_144e92fa0(local_res8,param_2 + param_1[0x83],2);
        if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
          FUN_144e93040(local_res8);
        }
        uVar6 = (ulonglong)local_res8[0];
        if (0x1000 < local_res8[0]) goto LAB_144b80767;
        iVar4 = 0xc;
LAB_144b809ab:
        if ((short)uVar6 == 0) {
          pcVar11 = "Sanity check on directory count failed, zero tag directories not supported";
          goto LAB_144b80c32;
        }
        _Memory = (undefined2 *)FUN_144b7a970(param_1,uVar6 & 0xffff,iVar4,"to read TIFF directory")
        ;
        if (_Memory == (undefined2 *)0x0) {
          return 0;
        }
        lVar7 = (ulonglong)((uint)local_res8[0] * iVar4) + lVar5;
        if (((lVar7 < lVar5) || (lVar7 < (longlong)(ulonglong)((uint)local_res8[0] * iVar4))) ||
           ((longlong)param_1[0x84] < lVar7)) {
          FUN_144e92fd0(param_1[0x87],"TIFFFetchDirectory","Can not read TIFF directory");
          free(_Memory);
          return 0;
        }
        FUN_144e92fa0(_Memory,param_1[0x83] + lVar5);
        if (param_4 == (ulonglong *)0x0) goto LAB_144b80896;
        uVar8 = *(uint *)(param_1 + 2);
        lVar5 = lVar5 + (ulonglong)((uint)local_res8[0] * iVar4);
        if ((uVar8 >> 0x13 & 1) == 0) {
          lVar7 = lVar5 + 4;
          if (((lVar7 < lVar5) || (lVar7 < 4)) || ((longlong)param_1[0x84] < lVar7)) {
            local_res10 = 0;
            uStackX_11 = 0;
            uStackX_12 = 0;
            uStackX_13 = 0;
          }
          else {
            FUN_144e92fa0(&local_res10,param_1[0x83] + lVar5,4);
            uVar8 = *(uint *)(param_1 + 2);
          }
          if ((char)uVar8 < '\0') {
            FUN_144e93050(&local_res10);
          }
          *param_4 = (ulonglong)
                     CONCAT13(uStackX_13,CONCAT12(uStackX_12,CONCAT11(uStackX_11,local_res10)));
          goto LAB_144b80896;
        }
        lVar7 = lVar5 + 8;
        if (((lVar7 < lVar5) || (lVar7 < 8)) || ((longlong)param_1[0x84] < lVar7))
        goto LAB_144b80885;
        FUN_144e92fa0(param_4,param_1[0x83] + lVar5,8);
        goto LAB_144b80888;
      }
      lVar5 = param_2 + 8;
      if (((lVar5 < (longlong)param_2) || (lVar5 < 8)) || ((longlong)param_1[0x84] < lVar5))
      goto LAB_144b80c2b;
      FUN_144e92fa0(&local_res20,param_2 + param_1[0x83],8);
      if ((*(byte *)(param_1 + 2) & 0x80) != 0) {
        FUN_144e93070(&local_res20);
      }
      local_res8[0] = CONCAT11(uStackX_21,local_res20);
      uVar6 = CONCAT17(uStackX_27,
                       CONCAT16(uStackX_26,
                                CONCAT15(uStackX_25,
                                         CONCAT14(uStackX_24,
                                                  CONCAT13(uStackX_23,
                                                           CONCAT12(uStackX_22,local_res8[0]))))));
      if (uVar6 < 0x1001) {
        iVar4 = 0x14;
        goto LAB_144b809ab;
      }
LAB_144b80767:
      pcVar11 = "Sanity check on directory count failed, this is probably not a valid IFD offset";
    }
    else {
LAB_144b80c2b:
      pcVar11 = "Can not read TIFF directory count";
    }
LAB_144b80c32:
    FUN_144e92fd0(param_1[0x87],"TIFFFetchDirectory",pcVar11);
  }
  return 0;
}



// FUNCTION 144b80c70 FUN_144b80c70 body=3164 status=ok
// SIG undefined FUN_144b80c70(void)

undefined8 FUN_144b80c70(longlong param_1,ushort *param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  char *_Memory;
  int iVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  char *local_res8;
  char *local_res10;
  
  iVar8 = *(int *)(param_1 + 0x478);
  uVar4 = *param_2;
  iVar15 = -1;
  if (iVar8 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x470);
    do {
      iVar5 = (iVar8 + iVar15) / 2;
      uVar13 = (ulonglong)iVar5;
      uVar12 = **(uint **)(lVar2 + uVar13 * 8);
      if (uVar12 == uVar4) {
        uVar12 = 0;
        if (iVar5 == 0) goto LAB_144b80d33;
        puVar10 = (undefined8 *)(lVar2 + -8 + uVar13 * 8);
        uVar14 = uVar13;
        goto LAB_144b80d20;
      }
      iVar3 = iVar5;
      if (uVar4 <= uVar12) {
        iVar3 = iVar15;
        iVar8 = iVar5;
      }
      iVar15 = iVar3;
    } while (iVar15 + 1 != iVar8);
  }
LAB_144b80cda:
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFetchNormalTag",
                "No definition found for tag %d",uVar4);
  return 0;
  while( true ) {
    uVar12 = uVar12 - 1;
    uVar13 = (ulonglong)uVar12;
    puVar10 = puVar10 + -1;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) break;
LAB_144b80d20:
    uVar12 = (uint)uVar13;
    if (*(uint *)*puVar10 != (uint)uVar4) break;
  }
LAB_144b80d33:
  if (uVar12 == 0xffffffff) goto LAB_144b80cda;
  lVar2 = *(longlong *)(lVar2 + (ulonglong)uVar12 * 8);
  uVar7 = local_res8._4_4_;
  switch(*(undefined4 *)(lVar2 + 0x10)) {
  case 1:
    iVar8 = FUN_144b7d020(param_1,param_2,&local_res8);
    _Memory = local_res8;
    if (iVar8 != 0) goto LAB_144b80fcf;
    uVar6 = 0;
    uVar12 = uVar6;
    if ((local_res8 != (char *)0x0) &&
       (pcVar11 = local_res8, uVar12 = 0, *(uint *)(param_2 + 4) != 0)) {
      do {
        uVar12 = uVar6;
        if (*pcVar11 == '\0') break;
        pcVar11 = pcVar11 + 1;
        uVar6 = uVar6 + 1;
        uVar12 = uVar6;
      } while (uVar6 < *(uint *)(param_2 + 4));
    }
    if (uVar12 + 1 < *(uint *)(param_2 + 4)) {
      FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFFetchNormalTag",
                    "ASCII value for tag \"%s\" contains null byte in value; value incorrectly truncated during reading due to implementation limitations"
                    ,*(undefined8 *)(lVar2 + 0x20));
LAB_144b80dc8:
      iVar8 = FUN_144b78170(param_1,*param_2,_Memory);
      pcVar11 = _Memory;
    }
    else {
      if (uVar12 + 1 <= *(uint *)(param_2 + 4)) goto LAB_144b80dc8;
      FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFFetchNormalTag",
                    "ASCII value for tag \"%s\" does not end in null byte",
                    *(undefined8 *)(lVar2 + 0x20));
      if (((ulonglong)(*(int *)(param_2 + 4) + 1) != *(longlong *)(param_2 + 4) + 1U) ||
         (pcVar11 = (char *)FUN_144e92f50(), pcVar11 == (char *)0x0)) {
        if (_Memory == (char *)0x0) {
          return 0;
        }
        free(_Memory);
        return 0;
      }
      FUN_144e92fa0(pcVar11,_Memory,*(undefined4 *)(param_2 + 4));
      pcVar11[*(uint *)(param_2 + 4)] = '\0';
      if (_Memory != (char *)0x0) {
        free(_Memory);
      }
      iVar8 = FUN_144b78170(param_1,*param_2,pcVar11);
    }
    goto LAB_144b818ab;
  case 2:
    if (*(longlong *)(param_2 + 4) != 1) {
LAB_144b80e70:
      iVar8 = 1;
      goto LAB_144b80fcf;
    }
    switch(param_2[1]) {
    case 1:
    case 7:
      pcVar11 = (char *)(ulonglong)(byte)param_2[8];
      goto LAB_144b80f4a;
    default:
switchD_144b810f7_caseD_2:
      iVar8 = 2;
      break;
    case 3:
    case 8:
      local_res8 = (char *)CONCAT62(local_res8._2_6_,param_2[8]);
      uVar4 = param_2[8];
      if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
        FUN_144e93040(&local_res8);
        uVar4 = (ushort)local_res8;
      }
      pcVar11 = (char *)(ulonglong)uVar4;
      bVar17 = uVar4 < 0xff;
      bVar16 = uVar4 == 0xff;
      goto LAB_144b80ed4;
    case 4:
    case 9:
      local_res8 = (char *)CONCAT44(uVar7,*(uint *)(param_2 + 8));
      uVar12 = *(uint *)(param_2 + 8);
      if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
        FUN_144e93050(&local_res8);
        uVar12 = (uint)local_res8._0_4_;
      }
      pcVar11 = (char *)(ulonglong)uVar12;
      bVar17 = uVar12 < 0xff;
      bVar16 = uVar12 == 0xff;
LAB_144b80ed4:
      if (bVar17 || bVar16) goto LAB_144b80f4a;
LAB_144b80fca:
      iVar8 = 4;
      break;
    case 6:
      pcVar11 = (char *)(ulonglong)(byte)param_2[8];
      if ((char)(byte)param_2[8] < '\0') goto LAB_144b80fca;
LAB_144b80f4a:
      iVar8 = FUN_144b78170(param_1,*param_2,(ulonglong)pcVar11 & 0xff);
      bVar17 = iVar8 == 0;
      goto LAB_144b818bc;
    case 0x10:
      iVar8 = FUN_144b7fdc0(param_1,param_2,&local_res8);
      if (iVar8 == 0) {
        bVar17 = local_res8 < (char *)0xff;
        bVar16 = local_res8 == (char *)0xff;
        pcVar11 = local_res8;
        goto LAB_144b80ed4;
      }
      break;
    case 0x11:
      iVar8 = FUN_144b7fe40(param_1,param_2,&local_res8);
      if (iVar8 == 0) {
        pcVar11 = local_res8;
        if ((char *)0xff < local_res8) goto LAB_144b80fca;
        goto LAB_144b80f4a;
      }
    }
    goto LAB_144b80fcf;
  default:
    goto LAB_144b80cf9;
  case 4:
    iVar8 = FUN_144b7c880(param_1,param_2,&local_res8);
    if (iVar8 == 0) {
      iVar8 = FUN_144b78170(param_1,*param_2,(ulonglong)local_res8 & 0xffff);
      bVar17 = iVar8 == 0;
      goto LAB_144b818bc;
    }
    goto LAB_144b80fcf;
  case 6:
    if (*(longlong *)(param_2 + 4) != 1) goto LAB_144b80e70;
    switch(param_2[1]) {
    case 1:
      pcVar11 = (char *)(ulonglong)(byte)param_2[8];
      break;
    default:
      goto switchD_144b810f7_caseD_2;
    case 3:
      local_res8 = (char *)CONCAT62(local_res8._2_6_,param_2[8]);
      uVar4 = param_2[8];
      if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
        FUN_144e93040(&local_res8);
        uVar4 = (ushort)local_res8;
      }
      pcVar11 = (char *)(ulonglong)uVar4;
      break;
    case 4:
      local_res10 = (char *)CONCAT44(local_res10._4_4_,*(undefined4 *)(param_2 + 8));
      uVar7 = *(undefined4 *)(param_2 + 8);
      if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
        FUN_144e93050(&local_res10);
        uVar7 = local_res10._0_4_;
      }
      goto LAB_144b810bc;
    case 6:
      uVar12 = (uint)(char)param_2[8];
      bVar17 = (char)param_2[8] < '\0';
      goto LAB_144b80fc4;
    case 8:
      local_res8 = (char *)CONCAT62(local_res8._2_6_,param_2[8]);
      uVar4 = param_2[8];
      if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
        FUN_144e93040(&local_res8);
        uVar4 = (ushort)local_res8;
      }
      if ((short)uVar4 < 0) goto LAB_144b80fca;
      pcVar11 = (char *)(ulonglong)(uint)(int)(short)uVar4;
      break;
    case 9:
      local_res8 = (char *)CONCAT44(uVar7,*(uint *)(param_2 + 8));
      uVar12 = *(uint *)(param_2 + 8);
      if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
        FUN_144e93050(&local_res8);
        uVar12 = (uint)local_res8._0_4_;
      }
      bVar17 = (int)uVar12 < 0;
LAB_144b80fc4:
      pcVar11 = (char *)(ulonglong)uVar12;
      if (!bVar17) break;
      goto LAB_144b80fca;
    case 0x10:
      iVar8 = FUN_144b7fdc0(param_1,param_2,&local_res8);
      if (iVar8 != 0) goto LAB_144b80fcf;
      pcVar11 = local_res8;
      if (&DAT_ffffffff < local_res8) goto LAB_144b80fca;
      break;
    case 0x11:
      iVar8 = FUN_144b7fe40(param_1,param_2,&local_res8);
      if (iVar8 != 0) goto LAB_144b80fcf;
      pcVar11 = local_res8;
      if (&DAT_ffffffff < local_res8) goto LAB_144b80fca;
    }
    local_res10 = (char *)CONCAT44(local_res10._4_4_,(int)pcVar11);
    uVar7 = (int)pcVar11;
LAB_144b810bc:
    iVar8 = FUN_144b78170(param_1,*param_2,uVar7);
    bVar17 = iVar8 == 0;
    goto LAB_144b818bc;
  case 8:
    if (*(longlong *)(param_2 + 4) != 1) goto LAB_144b80e70;
    switch(param_2[1]) {
    case 1:
      pcVar11 = (char *)(ulonglong)(byte)param_2[8];
      break;
    default:
      goto switchD_144b810f7_caseD_2;
    case 3:
      local_res8 = (char *)CONCAT62(local_res8._2_6_,param_2[8]);
      uVar4 = param_2[8];
      if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
        FUN_144e93040(&local_res8);
        uVar4 = (ushort)local_res8;
      }
      pcVar11 = (char *)(ulonglong)uVar4;
      break;
    case 4:
      local_res8 = (char *)CONCAT44(uVar7,*(uint *)(param_2 + 8));
      uVar12 = *(uint *)(param_2 + 8);
      if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
        FUN_144e93050(&local_res8);
        uVar12 = (uint)local_res8._0_4_;
      }
      pcVar11 = (char *)(ulonglong)uVar12;
      break;
    case 6:
      cVar1 = (char)param_2[8];
      if (-1 < cVar1) {
        local_res10 = (char *)(longlong)cVar1;
        iVar8 = FUN_144b78170(param_1,*param_2,(char *)(longlong)cVar1);
        bVar17 = iVar8 == 0;
        goto LAB_144b818bc;
      }
      goto LAB_144b80fca;
    case 8:
      local_res8 = (char *)CONCAT62(local_res8._2_6_,param_2[8]);
      uVar4 = param_2[8];
      if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
        FUN_144e93040(&local_res8);
        uVar4 = (ushort)local_res8;
      }
      if ((short)uVar4 < 0) goto LAB_144b80fca;
      pcVar11 = (char *)(longlong)(short)uVar4;
      break;
    case 9:
      local_res8 = (char *)CONCAT44(uVar7,*(int *)(param_2 + 8));
      iVar8 = *(int *)(param_2 + 8);
      if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
        FUN_144e93050(&local_res8);
        iVar8 = (int)local_res8._0_4_;
      }
      if (iVar8 < 0) goto LAB_144b80fca;
      pcVar11 = (char *)(longlong)iVar8;
      break;
    case 0x10:
      iVar8 = FUN_144b7fdc0(param_1,param_2,&local_res10);
      if (iVar8 != 0) goto LAB_144b80fcf;
      iVar8 = FUN_144b78170(param_1,*param_2,local_res10);
      bVar17 = iVar8 == 0;
      goto LAB_144b818bc;
    case 0x11:
      iVar8 = FUN_144b7fe40(param_1,param_2,&local_res8);
      if (iVar8 != 0) goto LAB_144b80fcf;
      pcVar11 = local_res8;
      if ((longlong)local_res8 < 0) goto LAB_144b80fca;
    }
    local_res10 = pcVar11;
    iVar8 = FUN_144b78170(param_1,*param_2);
    bVar17 = iVar8 == 0;
    goto LAB_144b818bc;
  case 10:
    iVar8 = FUN_144b7ca00(param_1,param_2,&local_res8);
    if (iVar8 == 0) {
      iVar8 = FUN_144b78170(param_1,*param_2,(double)local_res8._0_4_);
      bVar17 = iVar8 == 0;
      goto LAB_144b818bc;
    }
    goto LAB_144b80fcf;
  case 0xb:
    iVar8 = FUN_144b7cdc0(param_1,param_2,&local_res8);
    if (iVar8 == 0) {
      iVar8 = FUN_144b78170(param_1,*param_2,local_res8);
      bVar17 = iVar8 == 0;
      goto LAB_144b818bc;
    }
    goto LAB_144b80fcf;
  case 0xc:
    if (*(longlong *)(param_2 + 4) != 1) goto LAB_144b80e70;
    uVar4 = param_2[1];
    if ((uVar4 == 4) || (uVar4 == 0xd)) {
      local_res8 = (char *)CONCAT44(uVar7,*(uint *)(param_2 + 8));
      uVar12 = *(uint *)(param_2 + 8);
      if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
        FUN_144e93050(&local_res8);
        uVar12 = (uint)local_res8._0_4_;
      }
      local_res10 = (char *)(ulonglong)uVar12;
    }
    else {
      if ((uVar4 != 0x10) && (uVar4 != 0x12)) goto switchD_144b810f7_caseD_2;
      uVar12 = *(uint *)(param_1 + 0x10);
      if ((uVar12 >> 0x13 & 1) == 0) {
        local_res8 = (char *)CONCAT44(uVar7,*(uint *)(param_2 + 8));
        uVar6 = *(uint *)(param_2 + 8);
        if ((char)uVar12 < '\0') {
          FUN_144e93050(&local_res8);
          uVar12 = *(uint *)(param_1 + 0x10);
          uVar6 = (uint)local_res8._0_4_;
        }
        if ((uVar12 >> 0xb & 1) != 0) {
          if (*(ulonglong *)(param_1 + 0x420) < (ulonglong)uVar6 + 8) goto LAB_144b8132a;
          FUN_144e92fa0(&local_res10,(ulonglong)uVar6 + *(longlong *)(param_1 + 0x418),8);
LAB_144b81347:
          uVar12 = *(uint *)(param_1 + 0x10);
          goto LAB_144b81354;
        }
        iVar8 = FUN_144b7aaf0(param_1);
        if (iVar8 == 0) {
LAB_144b8132a:
          iVar8 = 3;
        }
        else {
          lVar9 = (**(code **)(param_1 + 0x440))(*(undefined8 *)(param_1 + 0x438),&local_res10,8);
          if (lVar9 == 8) goto LAB_144b81347;
          iVar8 = 3;
        }
      }
      else {
        local_res10 = *(char **)(param_2 + 8);
LAB_144b81354:
        if ((char)uVar12 < '\0') {
          FUN_144e93070(&local_res10);
        }
        iVar8 = 0;
      }
      if (iVar8 != 0) goto LAB_144b80fcf;
    }
    iVar8 = FUN_144b78170(param_1,*param_2,local_res10);
    bVar17 = iVar8 == 0;
    goto LAB_144b818bc;
  case 0xe:
    if (*(longlong *)(param_2 + 4) != 2) {
      FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFFetchNormalTag",
                    "incorrect count for field \"%s\", expected 2, got %d",
                    *(undefined8 *)(lVar2 + 0x20),(int)*(longlong *)(param_2 + 4));
      return 0;
    }
    iVar8 = FUN_144b7d890(param_1,param_2,&local_res8);
    pcVar11 = local_res8;
    if (iVar8 != 0) goto LAB_144b80fcf;
    iVar8 = FUN_144b78170(param_1,*param_2,*(undefined2 *)local_res8,*(undefined2 *)(local_res8 + 2)
                         );
    goto LAB_144b818b2;
  case 0x10:
    if (*(longlong *)(param_2 + 4) != (longlong)*(short *)(lVar2 + 4)) {
      FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFFetchNormalTag",
                    "incorrect count for field \"%s\", expected %d, got %d",
                    *(undefined8 *)(lVar2 + 0x20),(int)*(short *)(lVar2 + 4),
                    (int)*(longlong *)(param_2 + 4));
      return 0;
    }
    iVar8 = FUN_144b7d020(param_1,param_2,&local_res8);
    goto LAB_144b8144e;
  case 0x12:
    if (*(longlong *)(param_2 + 4) != (longlong)*(short *)(lVar2 + 4)) {
      return 1;
    }
    iVar8 = FUN_144b7d890(param_1,param_2,&local_res8);
    goto LAB_144b8144e;
  case 0x14:
    if (*(longlong *)(param_2 + 4) != (longlong)*(short *)(lVar2 + 4)) {
      return 1;
    }
    iVar8 = FUN_144b7e230(param_1,param_2,&local_res8);
    goto LAB_144b8144e;
  case 0x18:
    if (*(longlong *)(param_2 + 4) != (longlong)*(short *)(lVar2 + 4)) {
      return 1;
    }
    iVar8 = FUN_144b7eee0(param_1,param_2,&local_res8);
    goto LAB_144b8144e;
  case 0x19:
    if (*(longlong *)(param_2 + 4) != (longlong)*(short *)(lVar2 + 4)) {
      return 1;
    }
    iVar8 = FUN_144b7f620(param_1,param_2,&local_res8);
LAB_144b8144e:
    if (iVar8 != 0) goto LAB_144b80fcf;
    iVar8 = FUN_144b78170(param_1,*param_2,local_res8);
LAB_144b81468:
    if (local_res8 != (char *)0x0) {
      free(local_res8);
    }
    bVar17 = iVar8 == 0;
    goto LAB_144b818bc;
  case 0x1b:
    if (0xffff < *(ulonglong *)(param_2 + 4)) goto LAB_144b80e70;
    iVar8 = FUN_144b7d020(param_1,param_2,&local_res8);
    pcVar11 = local_res8;
    if (iVar8 != 0) goto LAB_144b80fcf;
    if (((local_res8 != (char *)0x0) && (*(longlong *)(param_2 + 4) != 0)) &&
       (local_res8[*(longlong *)(param_2 + 4) + -1] != '\0')) {
      FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFFetchNormalTag",
                    "ASCII value for tag \"%s\" does not end in null byte. Forcing it to be null",
                    *(undefined8 *)(lVar2 + 0x20));
      pcVar11[*(longlong *)(param_2 + 4) + -1] = '\0';
    }
    uVar12 = (uint)param_2[4];
    goto LAB_144b8189d;
  case 0x1c:
    if (0xffff < *(ulonglong *)(param_2 + 4)) goto LAB_144b80e70;
    iVar8 = FUN_144b7d020(param_1,param_2,&local_res8);
    if (iVar8 != 0) goto LAB_144b80fcf;
    iVar8 = FUN_144b78170(param_1,*param_2,param_2[4],local_res8);
    goto LAB_144b81468;
  case 0x1e:
    if (0xffff < *(ulonglong *)(param_2 + 4)) goto LAB_144b80e70;
    iVar8 = FUN_144b7d890(param_1,param_2,&local_res8);
    if (iVar8 == 0) {
      iVar8 = FUN_144b78170(param_1,*param_2,param_2[4],local_res8);
      goto LAB_144b81468;
    }
    goto LAB_144b80fcf;
  case 0x20:
    if (0xffff < *(ulonglong *)(param_2 + 4)) goto LAB_144b80e70;
    iVar8 = FUN_144b7e230(param_1,param_2,&local_res8);
    if (iVar8 == 0) {
      iVar8 = FUN_144b78170(param_1,*param_2,param_2[4],local_res8);
      goto LAB_144b81468;
    }
    goto LAB_144b80fcf;
  case 0x22:
    if (0xffff < *(ulonglong *)(param_2 + 4)) goto LAB_144b80e70;
    iVar8 = FUN_144b82180(param_1,param_2,&local_res8,0xffffffffffffffff);
    if (iVar8 == 0) {
      iVar8 = FUN_144b78170(param_1,*param_2,param_2[4],local_res8);
      goto LAB_144b81468;
    }
    goto LAB_144b80fcf;
  case 0x24:
    if (0xffff < *(ulonglong *)(param_2 + 4)) goto LAB_144b80e70;
    iVar8 = FUN_144b7eee0(param_1,param_2,&local_res8);
    if (iVar8 == 0) {
      iVar8 = FUN_144b78170(param_1,*param_2,param_2[4],local_res8);
      goto LAB_144b81468;
    }
    goto LAB_144b80fcf;
  case 0x25:
    if (0xffff < *(ulonglong *)(param_2 + 4)) goto LAB_144b80e70;
    iVar8 = FUN_144b7f620(param_1,param_2,&local_res8);
    if (iVar8 == 0) {
      iVar8 = FUN_144b78170(param_1,*param_2,param_2[4],local_res8);
      goto LAB_144b81468;
    }
    goto LAB_144b80fcf;
  case 0x26:
    if (0xffff < *(ulonglong *)(param_2 + 4)) goto LAB_144b80e70;
    iVar8 = FUN_144b7fb90(param_1,param_2,&local_res8);
    if (iVar8 == 0) {
      iVar8 = FUN_144b78170(param_1,*param_2,param_2[4],local_res8);
      goto LAB_144b81468;
    }
    goto LAB_144b80fcf;
  case 0x27:
    iVar8 = FUN_144b7d020(param_1,param_2,&local_res8);
    pcVar11 = local_res8;
    if (iVar8 != 0) goto LAB_144b80fcf;
    if (((local_res8 != (char *)0x0) && (*(longlong *)(param_2 + 4) != 0)) &&
       (local_res8[*(longlong *)(param_2 + 4) + -1] != '\0')) {
      FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFFetchNormalTag",
                    "ASCII value for tag \"%s\" does not end in null byte. Forcing it to be null",
                    *(undefined8 *)(lVar2 + 0x20));
      pcVar11[*(longlong *)(param_2 + 4) + -1] = '\0';
    }
    goto LAB_144b81899;
  case 0x28:
    iVar8 = FUN_144b7d020(param_1,param_2,&local_res8);
    break;
  case 0x29:
    local_res8 = (char *)0x0;
    iVar8 = FUN_144b7d470(param_1,param_2,&local_res8);
    break;
  case 0x2a:
    iVar8 = FUN_144b7d890(param_1,param_2,&local_res8);
    break;
  case 0x2b:
    local_res8 = (char *)0x0;
    iVar8 = FUN_144b7dd00(param_1,param_2,&local_res8);
    break;
  case 0x2c:
    iVar8 = FUN_144b7e230(param_1,param_2,&local_res8);
    break;
  case 0x2d:
    local_res8 = (char *)0x0;
    iVar8 = FUN_144b7e6a0(param_1,param_2,&local_res8);
    break;
  case 0x2e:
    iVar8 = FUN_144b82180(param_1,param_2,&local_res8,0xffffffffffffffff);
    break;
  case 0x2f:
    local_res8 = (char *)0x0;
    iVar8 = FUN_144b7ebd0(param_1,param_2,&local_res8);
    break;
  case 0x30:
    iVar8 = FUN_144b7eee0(param_1,param_2,&local_res8);
    break;
  case 0x31:
    iVar8 = FUN_144b7f620(param_1,param_2,&local_res8);
    break;
  case 0x32:
    iVar8 = FUN_144b7fb90(param_1,param_2,&local_res8);
  }
  pcVar11 = local_res8;
  if (iVar8 == 0) {
LAB_144b81899:
    uVar12 = *(uint *)(param_2 + 4);
LAB_144b8189d:
    iVar8 = FUN_144b78170(param_1,*param_2,uVar12,pcVar11);
LAB_144b818ab:
    if (pcVar11 != (char *)0x0) {
LAB_144b818b2:
      free(pcVar11);
    }
    bVar17 = iVar8 == 0;
LAB_144b818bc:
    if (!bVar17) {
LAB_144b80cf9:
      return 1;
    }
  }
  else {
LAB_144b80fcf:
    FUN_144b80210(param_1,iVar8,"TIFFFetchNormalTag",*(undefined8 *)(lVar2 + 0x20),param_3);
  }
  return 0;
}



// FUNCTION 144b81a60 FUN_144b81a60 body=372 status=ok
// SIG undefined FUN_144b81a60(void)

undefined8 FUN_144b81a60(longlong param_1,undefined2 *param_2,uint param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  char *pcVar6;
  void *local_28 [2];
  
  iVar1 = FUN_144b82180(param_1,param_2,local_28,param_3);
  if (iVar1 != 0) {
    lVar3 = FUN_144e93aa0(param_1,*param_2);
    if (lVar3 == 0) {
      pcVar6 = "unknown tagname";
    }
    else {
      pcVar6 = *(char **)(lVar3 + 0x20);
    }
    FUN_144b80210(param_1,iVar1,"TIFFFetchStripThing",pcVar6,0);
    return 0;
  }
  if (*(ulonglong *)(param_2 + 4) < (ulonglong)param_3) {
    lVar3 = FUN_144e93aa0(param_1,*param_2);
    pcVar6 = getenv("LIBTIFF_STRILE_ARRAY_MAX_RESIZE_COUNT");
    uVar2 = 1000000;
    if (pcVar6 != (char *)0x0) {
      uVar2 = atoi(pcVar6);
    }
    if (lVar3 == 0) {
      pcVar6 = "unknown tagname";
    }
    else {
      pcVar6 = *(char **)(lVar3 + 0x20);
    }
    if (uVar2 < param_3) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFetchStripThing",
                    "Incorrect count for \"%s\"");
    }
    else {
      FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFFetchStripThing",
                    "Incorrect count for \"%s\"; tag ignored",pcVar6);
      pvVar4 = (void *)FUN_144b7a970(param_1,(ulonglong)param_3,8,"for strip array");
      if (pvVar4 != (void *)0x0) {
        FUN_144e92fa0(pvVar4,local_28[0],(ulonglong)*(uint *)(param_2 + 4) << 3);
        FUN_144e92f90((void *)((longlong)pvVar4 + (ulonglong)*(uint *)(param_2 + 4) * 8),0,
                      (ulonglong)(param_3 - *(uint *)(param_2 + 4)) << 3);
        free(local_28[0]);
        local_28[0] = pvVar4;
        goto LAB_144b81bb3;
      }
    }
    free(local_28[0]);
    uVar5 = 0;
  }
  else {
LAB_144b81bb3:
    *param_4 = (longlong)local_28[0];
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 144b81be0 FUN_144b81be0 body=474 status=ok
// SIG undefined FUN_144b81be0(void)

void FUN_144b81be0(longlong param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  lVar3 = FUN_144b77ad0();
  lVar4 = FUN_144b7c650(param_1,0);
  if ((lVar4 != 0) || (*(int *)(param_1 + 0xc) == 0)) {
    if ((*(short *)(param_1 + 0x6a) == 6) && ((*(uint *)(param_1 + 0x10) & 0x4000) == 0)) {
      uVar14 = (uint)*(ushort *)(param_1 + 0x142);
    }
    else {
      uVar14 = 1;
    }
    uVar5 = FUN_144b77b10(param_1);
    if (uVar5 - 1 < 0x7fffffff) {
      uVar2 = *(uint *)(param_1 + 0xd4);
      uVar13 = 0;
      uVar12 = 0;
      if (uVar2 != 0) {
        do {
          if (uVar13 == uVar2 - 1) {
            uVar6 = FUN_144b77b10(param_1,*(int *)(param_1 + 0x4c) -
                                          uVar13 * *(int *)(param_1 + 0x74));
            uVar7 = FUN_144b7c650(param_1);
            if (uVar7 < uVar6) {
              return;
            }
          }
          else {
            lVar4 = FUN_144b7c650(param_1);
            if (lVar4 != lVar3) {
              return;
            }
            if (uVar13 != 0) {
              lVar4 = FUN_144b7c5b0(param_1,uVar13 - 1);
              lVar8 = FUN_144b7c650(param_1,uVar13 - 1);
              lVar9 = FUN_144b7c5b0(param_1);
              if (lVar9 != lVar4 + lVar8) {
                return;
              }
            }
          }
          uVar12 = *(uint *)(param_1 + 0xd4);
          uVar13 = uVar13 + 1;
          uVar2 = uVar12;
        } while (uVar13 < uVar12);
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      uVar2 = SUB164((ZEXT816(0) << 0x40 | ZEXT816(0x20000000)) / auVar1,0);
      if (uVar2 == 0) {
        uVar2 = 1;
      }
      uVar14 = uVar2 * uVar14;
      if (*(uint *)(param_1 + 0x4c) < -uVar14) {
        uVar6 = (ulonglong)((*(uint *)(param_1 + 0x4c) - 1) + uVar14) / (ulonglong)uVar14;
        uVar13 = (uint)uVar6;
        if (uVar13 != 0) {
          if ((*(int *)(param_1 + 0xc) == 0) && (1000000 < uVar13)) {
            uVar7 = FUN_144b7c5b0(param_1,uVar12 - 1);
            uVar10 = (**(code **)(param_1 + 0x460))(*(undefined8 *)(param_1 + 0x438));
            uVar11 = FUN_144b7c650(param_1,*(int *)(param_1 + 0xd4) + -1);
            if (uVar10 < uVar7) {
              return;
            }
            if (uVar10 - uVar7 < uVar11) {
              return;
            }
          }
          FUN_144b82550(param_1,uVar6,uVar2 * uVar5,uVar14);
        }
      }
    }
  }
  return;
}



// FUNCTION 144b81dc0 FUN_144b81dc0 body=286 status=ok
// SIG undefined FUN_144b81dc0(void)

bool FUN_144b81dc0(longlong param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if ((*(uint *)(param_1 + 0x10) & 0x5000000) == 0x1000000) {
    if ((*(uint *)(param_1 + 0x10) >> 0x19 & 1) == 0) {
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        return true;
      }
    }
    else {
      free(*(void **)(param_1 + 0xd8));
      free(*(void **)(param_1 + 0xe0));
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfdffffff;
    }
    if (*(longlong *)(param_1 + 0xf8) == 0) {
      bVar2 = false;
    }
    else {
      iVar1 = FUN_144b81a60(param_1,param_1 + 0xf0,*(undefined4 *)(param_1 + 0xd4),param_1 + 0xd8);
      bVar2 = iVar1 != 0;
      if ((param_2 != 0) &&
         (iVar1 = FUN_144b81a60(param_1,param_1 + 0x110,*(undefined4 *)(param_1 + 0xd4),
                                param_1 + 0xe0), iVar1 == 0)) {
        bVar2 = false;
      }
      FUN_144e92f90(param_1 + 0xf0,0,0x20);
      FUN_144e92f90(param_1 + 0x110,0,0x20);
    }
  }
  return bVar2;
}



// FUNCTION 144b81ee0 FUN_144b81ee0 body=197 status=ok
// SIG undefined FUN_144b81ee0(void)

undefined8 FUN_144b81ee0(undefined8 *param_1,undefined8 param_2,size_t param_3,undefined8 *param_4)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = 0;
  iVar1 = FUN_144b7aaf0();
  if (iVar1 == 0) {
LAB_144b81f85:
    uVar4 = 3;
  }
  else {
    if (0 < (longlong)param_3) {
      do {
        lVar6 = param_3 - lVar5;
        pvVar2 = realloc((void *)*param_4,param_3);
        if (pvVar2 == (void *)0x0) {
          FUN_144e92fd0(param_1[0x87],*param_1,
                        "Failed to allocate memory for %s (%ld elements of %ld bytes each)",
                        "TIFFReadDirEntryArray",1,(int)lVar5 + (int)lVar6);
          return 7;
        }
        *param_4 = pvVar2;
        lVar3 = (*(code *)param_1[0x88])(param_1[0x87],(longlong)pvVar2 + lVar5,lVar6);
        lVar5 = lVar5 + lVar3;
        if (lVar3 != lVar6) goto LAB_144b81f85;
      } while (lVar5 < (longlong)param_3);
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 144b81fb0 FUN_144b81fb0 body=458 status=ok
// SIG undefined FUN_144b81fb0(void)

int FUN_144b81fb0(longlong param_1,longlong param_2,int *param_3,ulonglong param_4,longlong *param_5
                 ,ulonglong param_6)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  void *_Memory;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  void *local_res10;
  
  iVar1 = FUN_144e93b10(*(undefined2 *)(param_2 + 2));
  uVar3 = *(ulonglong *)(param_2 + 8);
  uVar6 = uVar3;
  if (param_6 < uVar3) {
    uVar6 = param_6;
  }
  if ((uVar6 == 0) || (iVar1 == 0)) {
    _Memory = (void *)0x0;
    goto LAB_144b82157;
  }
  iVar4 = (int)uVar3;
  if (10 < uVar3) {
    iVar4 = 10;
  }
  if (((ulonglong)(longlong)(int)(0x7fffffff / (longlong)iVar1) < uVar6) ||
     (0x7fffffff / (param_4 & 0xffffffff) < uVar6)) {
    return 6;
  }
  *param_3 = (int)uVar6;
  uVar5 = (int)uVar6 * iVar1;
  if ((*(uint *)(param_1 + 0x10) >> 0xb & 1) == 0) {
    if ((*(uint *)(param_1 + 0x10) >> 0x13 & 1) == 0) {
      if (4 < uVar5) goto LAB_144b8209a;
      goto LAB_144b8206b;
    }
    if (uVar5 < 9) goto LAB_144b8206b;
LAB_144b8209a:
    local_res10 = (void *)0x0;
  }
  else {
    if (*(ulonglong *)(param_1 + 0x420) < (ulonglong)uVar5) {
      return 3;
    }
LAB_144b8206b:
    local_res10 = (void *)FUN_144b7a970(param_1,uVar6 & 0xffffffff,(longlong)iVar1,
                                        "ReadDirEntryArray");
    if (local_res10 == (void *)0x0) {
      return 7;
    }
  }
  _Memory = local_res10;
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 >> 0x13 & 1) == 0) {
    if (iVar4 * iVar1 < 5) {
LAB_144b82108:
      FUN_144e92fa0(local_res10,param_2 + 0x10,uVar5);
      goto LAB_144b82157;
    }
    uVar3 = (ulonglong)*(uint *)(param_2 + 0x10);
    param_6 = CONCAT44(param_6._4_4_,*(uint *)(param_2 + 0x10));
    if ((char)uVar2 < '\0') {
      FUN_144e93050(&param_6);
      uVar2 = *(uint *)(param_1 + 0x10);
      uVar3 = param_6 & 0xffffffff;
    }
    if ((uVar2 >> 0xb & 1) == 0) {
LAB_144b820e2:
      iVar1 = FUN_144b81ee0(param_1,uVar3,uVar5,&local_res10);
      _Memory = local_res10;
    }
    else {
      iVar1 = FUN_144b80180();
    }
  }
  else {
    if (iVar4 * iVar1 < 9) goto LAB_144b82108;
    param_6 = *(ulonglong *)(param_2 + 0x10);
    if ((char)uVar2 < '\0') {
      FUN_144e93070(&param_6);
      uVar2 = *(uint *)(param_1 + 0x10);
    }
    uVar3 = param_6;
    if ((uVar2 >> 0xb & 1) == 0) goto LAB_144b820e2;
    iVar1 = FUN_144b80180(param_1,param_6,uVar5,_Memory);
  }
  if (iVar1 != 0) {
    free(_Memory);
    return iVar1;
  }
LAB_144b82157:
  *param_5 = (longlong)_Memory;
  return 0;
}



// FUNCTION 144b82180 FUN_144b82180 body=901 status=ok
// SIG undefined FUN_144b82180(void)

ulonglong FUN_144b82180(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  ulonglong *local_res10;
  longlong *local_res18;
  uint *local_48 [2];
  
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
  case 3:
  case 4:
  case 6:
  case 8:
  case 9:
  case 0x10:
  case 0x11:
    break;
  default:
    return 2;
  }
  local_res18 = param_3;
  uVar1 = FUN_144b81fb0(param_1,param_2,&local_res10,8,local_48,param_4);
  if (((int)uVar1 != 0) || (local_48[0] == (uint *)0x0)) {
    *param_3 = 0;
    return uVar1;
  }
  uVar5 = (uint)local_res10;
  if (*(short *)(param_2 + 2) == 0x10) {
    *param_3 = (longlong)local_48[0];
    if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
      FUN_144e93150(local_48[0],(ulonglong)local_res10 & 0xffffffff);
    }
    return 0;
  }
  if (*(short *)(param_2 + 2) == 0x11) {
    uVar5 = 0;
    puVar7 = local_48[0];
    if ((uint)local_res10 != 0) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93070(puVar7);
        }
        if (*(longlong *)puVar7 < 0) {
          free(local_48[0]);
          return 4;
        }
        puVar7 = puVar7 + 2;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)local_res10);
    }
    *param_3 = (longlong)local_48[0];
    return 0;
  }
  uVar1 = (ulonglong)local_res10 & 0xffffffff;
  puVar2 = (ulonglong *)FUN_144e92f50((uint)local_res10 * 8);
  local_res10 = puVar2;
  if (puVar2 == (ulonglong *)0x0) {
    free(local_48[0]);
    return 7;
  }
  uVar4 = 0;
  puVar3 = puVar2;
  switch(*(undefined2 *)(param_2 + 2)) {
  case 1:
    puVar7 = local_48[0];
    if ((uint)local_res10 != 0) {
      do {
        *puVar3 = (ulonglong)(byte)*puVar7;
        uVar1 = uVar1 - 1;
        puVar7 = (uint *)((longlong)puVar7 + 1);
        puVar3 = puVar3 + 1;
      } while (uVar1 != 0);
    }
    goto LAB_144b822c4;
  case 3:
    bVar8 = (uint)local_res10 != 0;
    puVar7 = local_48[0];
    if (bVar8) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93040(puVar7);
        }
        *puVar3 = (ulonglong)(ushort)*puVar7;
        uVar1 = uVar1 - 1;
        puVar7 = (uint *)((longlong)puVar7 + 2);
        puVar3 = puVar3 + 1;
      } while (uVar1 != 0);
      free(local_48[0]);
      *param_3 = (longlong)puVar2;
      return 0;
    }
    goto LAB_144b822c4;
  case 4:
    bVar8 = (uint)local_res10 != 0;
    puVar7 = local_48[0];
    if (bVar8) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93050(puVar7);
        }
        uVar5 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar3 = (ulonglong)uVar5;
        puVar3 = puVar3 + 1;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
      free(local_48[0]);
      *param_3 = (longlong)puVar2;
      return 0;
    }
LAB_144b822c4:
    free(local_48[0]);
    goto LAB_144b822cc;
  case 6:
    uVar5 = 0;
    puVar7 = local_48[0];
    if ((uint)local_res10 != 0) {
      do {
        if ((char)(byte)*puVar7 < '\0') {
          uVar4 = 4;
          break;
        }
        *puVar2 = (longlong)(char)(byte)*puVar7;
        puVar7 = (uint *)((longlong)puVar7 + 1);
        puVar2 = puVar2 + 1;
        uVar5 = uVar5 + 1;
        uVar4 = 0;
      } while (uVar5 < (uint)local_res10);
    }
    break;
  case 8:
    uVar6 = 0;
    bVar8 = (uint)local_res10 != 0;
    puVar7 = local_48[0];
    param_3 = local_res18;
    if (bVar8) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93040(puVar7);
        }
        param_3 = local_res18;
        puVar3 = local_res10;
        if ((short)(ushort)*puVar7 < 0) {
          uVar4 = 4;
          break;
        }
        *puVar2 = (longlong)(short)(ushort)*puVar7;
        puVar7 = (uint *)((longlong)puVar7 + 2);
        puVar2 = puVar2 + 1;
        uVar6 = uVar6 + 1;
        uVar4 = 0;
      } while (uVar6 < uVar5);
    }
    break;
  case 9:
    uVar6 = 0;
    bVar8 = (uint)local_res10 != 0;
    puVar7 = local_48[0];
    param_3 = local_res18;
    if (bVar8) {
      do {
        if ((*(byte *)(param_1 + 0x10) & 0x80) != 0) {
          FUN_144e93050(puVar7);
        }
        if ((int)*puVar7 < 0) {
          free(local_48[0]);
          free(local_res10);
          return 4;
        }
        *puVar2 = (longlong)(int)*puVar7;
        puVar7 = puVar7 + 1;
        puVar2 = puVar2 + 1;
        uVar6 = uVar6 + 1;
        uVar4 = 0;
        param_3 = local_res18;
        puVar3 = local_res10;
      } while (uVar6 < uVar5);
    }
  }
  local_res10 = puVar3;
  puVar2 = local_res10;
  free(local_48[0]);
  if (uVar4 == 0) {
LAB_144b822cc:
    *param_3 = (longlong)puVar2;
    uVar1 = 0;
  }
  else {
    free(local_res10);
    uVar1 = (ulonglong)uVar4;
  }
  return uVar1;
}



// FUNCTION 144b82550 FUN_144b82550 body=395 status=ok
// SIG undefined FUN_144b82550(void)

void FUN_144b82550(longlong param_1,uint param_2,ulonglong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong *_Memory;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  
  uVar1 = FUN_144b7c5b0(param_1,0);
  uVar2 = FUN_144b7c5b0(param_1,*(int *)(param_1 + 0xd4) + -1);
  lVar3 = FUN_144b7c650(param_1,*(int *)(param_1 + 0xd4) + -1);
  if ((uVar2 <= -lVar3 - 1U) && (uVar1 <= lVar3 + uVar2)) {
    uVar2 = (lVar3 - uVar1) + uVar2;
    uVar8 = (ulonglong)param_2;
    _Memory = (ulonglong *)FUN_144b7a970(param_1,param_2,8,"for chopped \"StripByteCounts\" array");
    puVar4 = (ulonglong *)FUN_144b7a970(param_1,param_2,8,"for chopped \"StripOffsets\" array");
    if (_Memory == (ulonglong *)0x0) {
      _Memory = puVar4;
      if (puVar4 == (ulonglong *)0x0) {
        return;
      }
    }
    else if (puVar4 != (ulonglong *)0x0) {
      if (param_2 != 0) {
        puVar7 = puVar4;
        do {
          uVar5 = uVar2;
          if (param_3 <= uVar2) {
            uVar5 = param_3;
          }
          *(ulonglong *)((longlong)_Memory + (-8 - (longlong)puVar4) + (longlong)(puVar7 + 1)) =
               uVar5;
          uVar6 = 0;
          if (uVar5 != 0) {
            uVar6 = uVar1;
          }
          uVar1 = uVar1 + uVar5;
          uVar2 = uVar2 - uVar5;
          *puVar7 = uVar6;
          uVar8 = uVar8 - 1;
          puVar7 = puVar7 + 1;
          param_3 = uVar5;
        } while (uVar8 != 0);
      }
      *(uint *)(param_1 + 0xd4) = param_2;
      *(uint *)(param_1 + 0xd0) = param_2;
      FUN_144b78170(param_1,0x116,param_4);
      free(*(void **)(param_1 + 0xe0));
      free(*(void **)(param_1 + 0xd8));
      *(ulonglong **)(param_1 + 0xe0) = _Memory;
      *(ulonglong **)(param_1 + 0xd8) = puVar4;
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x4000000;
      return;
    }
    free(_Memory);
  }
  return;
}



// FUNCTION 144b826e0 FUN_144b826e0 body=801 status=ok
// SIG undefined FUN_144b826e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b826e0(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  ulonglong *puVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ushort uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_2098 [32];
  ulonglong local_2078;
  uint local_2070;
  longlong local_2068;
  ulonglong local_2060;
  ulonglong local_2058 [1024];
  ulonglong local_58;
  
  local_58 = DAT_14c707940 ^ (ulonglong)auStack_2098;
  sVar2 = *(short *)(param_2 + 2);
  lVar13 = (longlong)param_3;
  local_2070 = *(uint *)(param_1 + 0xe8);
  uVar9 = (ulonglong)local_2070;
  uVar14 = *(uint *)(param_1 + 0x10) >> 7 & 1;
  local_2068 = param_2;
  if (sVar2 == 3) {
    uVar16 = 2;
  }
  else if (sVar2 == 4) {
    uVar16 = 4;
  }
  else {
    if ((sVar2 != 0x10) && (sVar2 != 0x11)) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"_TIFFPartialReadStripArray",
                    "Invalid type for [Strip|Tile][Offset/ByteCount] tag");
      *(undefined8 *)(param_4 + lVar13 * 8) = 0;
      goto LAB_144b82877;
    }
    uVar16 = 8;
  }
  if ((*(uint *)(param_1 + 0x10) >> 0x13 & 1) == 0) {
    local_2078 = CONCAT44(local_2078._4_4_,*(uint *)(param_2 + 0x10));
    uVar12 = *(uint *)(param_2 + 0x10);
    if (uVar14 != 0) {
      FUN_144e93050(&local_2078);
      uVar12 = (uint)local_2078;
    }
    uVar10 = (ulonglong)uVar12;
  }
  else {
    local_2078 = *(ulonglong *)(param_2 + 0x10);
    uVar10 = local_2078;
    if (uVar14 != 0) {
      FUN_144e93070(&local_2078);
      uVar10 = local_2078;
    }
  }
  if (uVar10 < 0x8000000000000000) {
    uVar18 = lVar13 * uVar16 + uVar10;
    uVar17 = uVar18 & 0xfffffffffffff000;
    lVar8 = 0x2000;
    if (uVar18 + uVar16 <= uVar17 + 0x1000) {
      lVar8 = 0x1000;
    }
    uVar10 = uVar9 * uVar16 + uVar10;
    if (lVar8 + uVar17 <= uVar10) {
      uVar10 = lVar8 + uVar17;
    }
    local_2078 = uVar17;
    local_2060 = uVar10;
    if (uVar17 < uVar10) {
      iVar4 = FUN_144b7aaf0(param_1,uVar17);
      if (iVar4 != 0) {
        lVar6 = (**(code **)(param_1 + 0x440))
                          (*(undefined8 *)(param_1 + 0x438),local_2058,uVar10 - uVar17);
        lVar8 = local_2068;
        uVar9 = local_2078;
        if (lVar6 < (longlong)(uVar10 - uVar17)) {
          FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"_TIFFPartialReadStripArray",
                        "Cannot read offset/size for strile around ~%d",param_3);
        }
        else {
          iVar5 = (int)((uVar18 - uVar17) / uVar16);
          iVar4 = param_3;
          if (-1 < param_3 - iVar5) {
            iVar4 = iVar5;
          }
          iVar4 = -iVar4;
          uVar12 = iVar4 + param_3;
          if (uVar12 < local_2070) {
            puVar11 = (ulonglong *)((iVar4 + lVar13) * 8 + param_4);
            iVar4 = iVar4 * (int)uVar16;
            uVar15 = local_2070;
            do {
              iVar5 = iVar4 + (int)uVar16;
              if (local_2060 < (longlong)iVar5 + uVar18) break;
              lVar13 = ((longlong)iVar4 - uVar9) + uVar18;
              if (*(short *)(lVar8 + 2) == 3) {
                uVar7 = *(ushort *)((longlong)local_2058 + lVar13);
                local_2078 = CONCAT62(local_2078._2_6_,uVar7);
                if (uVar14 != 0) {
                  FUN_144e93040(&local_2078);
                  uVar7 = (ushort)local_2078;
                  uVar15 = local_2070;
                }
                uVar10 = (ulonglong)uVar7;
              }
              else {
                puVar1 = (ulonglong *)((longlong)local_2058 + lVar13);
                if (*(short *)(lVar8 + 2) == 4) {
                  uVar3 = (uint)*puVar1;
                  local_2078 = CONCAT44(local_2078._4_4_,uVar3);
                  uVar10 = (ulonglong)uVar3;
                  if (uVar14 != 0) {
                    FUN_144e93050(&local_2078);
                    uVar10 = local_2078 & 0xffffffff;
                    uVar15 = local_2070;
                  }
                }
                else {
                  local_2078 = *puVar1;
                  uVar10 = local_2078;
                  if (uVar14 != 0) {
                    FUN_144e93070(&local_2078);
                    uVar10 = local_2078;
                    uVar15 = local_2070;
                  }
                }
              }
              *puVar11 = uVar10;
              uVar12 = uVar12 + 1;
              puVar11 = puVar11 + 1;
              iVar4 = iVar5;
            } while (uVar12 < uVar15);
          }
        }
        goto LAB_144b82877;
      }
    }
    else {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"_TIFFPartialReadStripArray",
                    "Cannot read offset/size for strile %d",param_3);
    }
    *(undefined8 *)(param_4 + lVar13 * 8) = 0;
  }
  else {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"_TIFFPartialReadStripArray",
                  "Cannot read offset/size for strile %d",param_3);
    *(undefined8 *)(param_4 + lVar13 * 8) = 0;
  }
LAB_144b82877:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_58 ^ (ulonglong)auStack_2098);
}



// FUNCTION 144b82a20 FUN_144b82a20 body=534 status=ok
// SIG undefined FUN_144b82a20(void)

undefined8 FUN_144b82a20(longlong param_1,uint param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = (ulonglong)param_2;
  if (uVar8 < *(ulonglong *)(param_3 + 8)) {
    uVar1 = *(uint *)(param_1 + 0xe8);
    if (uVar1 <= param_2) {
      if ((1000000 < param_2) &&
         (uVar4 = (**(code **)(param_1 + 0x460))(*(undefined8 *)(param_1 + 0x438)),
         uVar4 >> 2 < uVar8)) {
        FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"_TIFFFetchStrileValue","File too short");
        return 0;
      }
      if ((*(int *)(param_1 + 0xe8) != 0) ||
         (uVar7 = *(uint *)(param_1 + 0xd4), 0xfffff < *(uint *)(param_1 + 0xd4))) {
        uVar7 = 0x80000;
        if (0x80000 < param_2 + 1) {
          uVar7 = param_2 + 1;
        }
        uVar2 = uVar7 * 2;
        if (0x7ffffffe < uVar7) {
          uVar2 = uVar7;
        }
        uVar7 = *(uint *)(param_1 + 0xd4);
        if (uVar2 < *(uint *)(param_1 + 0xd4)) {
          uVar7 = uVar2;
        }
      }
      pvVar5 = realloc(*(void **)(param_1 + 0xd8),(ulonglong)uVar7 << 3);
      pvVar6 = realloc(*(void **)(param_1 + 0xe0),(ulonglong)uVar7 << 3);
      if (pvVar5 != (void *)0x0) {
        *(void **)(param_1 + 0xd8) = pvVar5;
      }
      if (pvVar6 != (void *)0x0) {
        *(void **)(param_1 + 0xe0) = pvVar6;
      }
      if ((pvVar5 == (void *)0x0) || (pvVar6 == (void *)0x0)) {
        FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"_TIFFFetchStrileValue",
                      "Cannot allocate strip offset and bytecount arrays");
        free(*(void **)(param_1 + 0xd8));
        *(undefined8 *)(param_1 + 0xd8) = 0;
        free(*(void **)(param_1 + 0xe0));
        *(undefined8 *)(param_1 + 0xe0) = 0;
        *(undefined4 *)(param_1 + 0xe8) = 0;
      }
      else {
        *(uint *)(param_1 + 0xe8) = uVar7;
        memset((void *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)uVar1 * 8),0xff,
               (ulonglong)(uVar7 - uVar1) << 3);
        memset((void *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar1 * 8),0xff,
               (ulonglong)(*(int *)(param_1 + 0xe8) - uVar1) << 3);
      }
    }
    if ((*param_4 != 0) && (param_2 < *(uint *)(param_1 + 0xe8))) {
      if ((*(longlong *)(*param_4 + uVar8 * 8) != -1) ||
         (iVar3 = FUN_144b826e0(param_1,param_3,param_2), iVar3 != 0)) {
        return 1;
      }
      *(undefined8 *)(*param_4 + uVar8 * 8) = 0;
    }
  }
  return 0;
}



// FUNCTION 144b82c40 FUN_144b82c40 body=273 status=ok
// SIG undefined FUN_144b82c40(void)

undefined8 FUN_144b82c40(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10) & 0xff7fffff;
  *(uint *)(param_1 + 0x10) = uVar1;
  if (*(void **)(param_1 + 1000) != (void *)0x0) {
    if ((uVar1 >> 9 & 1) != 0) {
      free(*(void **)(param_1 + 1000));
    }
    *(undefined8 *)(param_1 + 1000) = 0;
  }
  if (param_2 == 0) {
    uVar3 = param_3 + 0x3ffU & 0xfffffffffffffc00;
    *(ulonglong *)(param_1 + 0x3f0) = uVar3;
    if (uVar3 == 0) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFReadBufferSetup","Invalid buffer size");
      return 0;
    }
    lVar2 = FUN_144e92f60(1);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
    *(longlong *)(param_1 + 1000) = lVar2;
    if (lVar2 == 0) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFReadBufferSetup",
                    "No space for data buffer at scanline %lu",*(undefined4 *)(param_1 + 0x2fc));
      *(undefined8 *)(param_1 + 0x3f0) = 0;
      return 0;
    }
  }
  else {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffdff;
    *(longlong *)(param_1 + 0x3f0) = param_3;
    *(longlong *)(param_1 + 1000) = param_2;
  }
  return 1;
}



// FUNCTION 144b82d60 FUN_144b82d60 body=195 status=ok
// SIG undefined FUN_144b82d60(void)

undefined8
FUN_144b82d60(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined2 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (*(int *)((longlong)param_1 + 0xc) == 1) {
    pcVar4 = "File not open for reading";
  }
  else {
    if ((~(*(uint *)(param_1 + 2) >> 10) & 1) == 0) {
      iVar1 = FUN_144b7af90(param_1,param_3,param_4,param_5,param_6);
      if (iVar1 == 0) {
        return 0xffffffffffffffff;
      }
      uVar2 = FUN_144b7ae60(param_1,param_3,param_4,param_5,param_6);
      uVar3 = FUN_144b82f20(param_1,uVar2,param_2,0xffffffffffffffff);
      return uVar3;
    }
    pcVar4 = "Can not read tiles from a striped image";
  }
  FUN_144e92fd0(param_1[0x87],*param_1,pcVar4);
  return 0xffffffffffffffff;
}



// FUNCTION 144b82e30 FUN_144b82e30 body=235 status=ok
// SIG undefined FUN_144b82e30(void)

longlong FUN_144b82e30(longlong param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 local_res8 [4];
  
  lVar2 = FUN_144b84300(param_1,param_2,local_res8);
  if (lVar2 == -1) {
LAB_144b82f01:
    lVar2 = -1;
  }
  else {
    if (param_4 == -1) {
LAB_144b82ed9:
      iVar1 = FUN_144b834a0(param_1,param_2 & 0xffffffff);
      if ((iVar1 == 0) ||
         (iVar1 = (**(code **)(param_1 + 0x388))(param_1,param_3,lVar2,local_res8[0]), iVar1 < 1))
      goto LAB_144b82f01;
    }
    else {
      if ((*(short *)(param_1 + 0x68) != 1) || (param_4 < lVar2)) {
        if (param_4 < lVar2) {
          lVar2 = param_4;
        }
        goto LAB_144b82ed9;
      }
      if ((*(uint *)(param_1 + 0x10) & 0x20800) != 0) goto LAB_144b82ed9;
      lVar3 = FUN_144b83fd0(param_1,param_2 & 0xffffffff,param_3,lVar2,"TIFFReadEncodedStrip");
      if (lVar3 != lVar2) goto LAB_144b82f01;
      if (((*(uint *)(param_1 + 0x10) & (uint)*(ushort *)(param_1 + 0x6e)) == 0) &&
         ((*(uint *)(param_1 + 0x10) >> 8 & 1) == 0)) {
        FUN_144e93250(param_3,lVar2);
      }
    }
    (**(code **)(param_1 + 0x468))(param_1,param_3,lVar2);
  }
  return lVar2;
}



// FUNCTION 144b82f20 FUN_144b82f20 body=347 status=ok
// SIG undefined FUN_144b82f20(void)

longlong FUN_144b82f20(undefined8 *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = param_1[0x66];
  if (*(int *)((longlong)param_1 + 0xc) == 1) {
    FUN_144e92fd0(param_1[0x87],*param_1,"File not open for reading");
    return -1;
  }
  if ((~(*(uint *)(param_1 + 2) >> 10) & 1) != 0) {
    FUN_144e92fd0(param_1[0x87],*param_1,"Can not read tiles from a striped image");
    return -1;
  }
  if (*(uint *)((longlong)param_1 + 0xd4) <= (uint)param_2) {
    FUN_144e92fd0(param_1[0x87],"TIFFReadEncodedTile","%lu: Tile out of range, max %lu",
                  param_2 & 0xffffffff,*(uint *)((longlong)param_1 + 0xd4));
    return -1;
  }
  lVar4 = lVar1;
  if (*(short *)(param_1 + 0xd) == 1) {
    if (param_4 != -1) {
      if ((lVar1 <= param_4) && ((*(uint *)(param_1 + 2) & 0x20800) == 0)) {
        lVar3 = FUN_144b84160(param_1,param_2,param_3,lVar1,"TIFFReadEncodedTile");
        if (lVar3 != lVar1) {
          return -1;
        }
        if (((*(uint *)(param_1 + 2) & (uint)*(ushort *)((longlong)param_1 + 0x6e)) == 0) &&
           ((*(uint *)(param_1 + 2) >> 8 & 1) == 0)) {
          FUN_144e93250(param_3,lVar1);
        }
        goto LAB_144b8300f;
      }
      goto LAB_144b8302c;
    }
  }
  else if (param_4 != -1) {
LAB_144b8302c:
    lVar4 = param_4;
    if (lVar1 < param_4) {
      lVar4 = lVar1;
    }
  }
  iVar2 = FUN_144b83930(param_1);
  if ((iVar2 == 0) ||
     (iVar2 = (*(code *)param_1[0x73])
                        (param_1,param_3,lVar4,
                         (param_2 & 0xffffffff) / (ulonglong)*(uint *)(param_1 + 0x1a)), iVar2 == 0)
     ) {
    return -1;
  }
LAB_144b8300f:
  (*(code *)param_1[0x8d])(param_1,param_3,lVar4);
  return lVar4;
}



// FUNCTION 144b83110 FUN_144b83110 body=418 status=ok
// SIG undefined FUN_144b83110(void)

longlong FUN_144b83110(longlong param_1,ulonglong param_2,longlong *param_3,undefined8 param_4,
                      longlong param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined2 local_res18 [8];
  
  lVar4 = *param_3;
  uVar6 = param_2 & 0xffffffff;
  lVar2 = FUN_144b84300(param_1,param_2,local_res18);
  if (lVar4 == 0) {
    if (lVar2 != -1) {
      if ((param_5 != -1) && (param_5 < lVar2)) {
        lVar2 = param_5;
      }
      iVar1 = FUN_144b834a0(param_1,uVar6);
      if (iVar1 != 0) {
        lVar4 = FUN_144e92f50(param_4);
        *param_3 = lVar4;
        if (lVar4 == 0) {
          uVar5 = FUN_144b775d0(param_1);
          FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),uVar5,"No space for strip buffer");
        }
        else {
          FUN_144e92f90(lVar4,0,param_4);
          iVar1 = (**(code **)(param_1 + 0x388))(param_1,*param_3,lVar2,local_res18[0]);
          if (0 < iVar1) {
            (**(code **)(param_1 + 0x468))(param_1,*param_3,lVar2);
            return lVar2;
          }
        }
      }
    }
    return -1;
  }
  if (lVar2 == -1) {
LAB_144b83159:
    lVar2 = -1;
  }
  else {
    if (param_5 == -1) {
LAB_144b831ca:
      iVar1 = FUN_144b834a0(param_1,uVar6);
      if ((iVar1 == 0) ||
         (iVar1 = (**(code **)(param_1 + 0x388))(param_1,lVar4,lVar2,local_res18[0]), iVar1 < 1))
      goto LAB_144b83159;
    }
    else {
      if ((*(short *)(param_1 + 0x68) != 1) || (param_5 < lVar2)) {
        if (param_5 < lVar2) {
          lVar2 = param_5;
        }
        goto LAB_144b831ca;
      }
      if ((*(uint *)(param_1 + 0x10) & 0x20800) != 0) goto LAB_144b831ca;
      lVar3 = FUN_144b83fd0(param_1,uVar6,lVar4,lVar2,"TIFFReadEncodedStrip");
      if (lVar3 != lVar2) goto LAB_144b83159;
      if (((*(uint *)(param_1 + 0x10) & (uint)*(ushort *)(param_1 + 0x6e)) == 0) &&
         ((*(uint *)(param_1 + 0x10) >> 8 & 1) == 0)) {
        FUN_144e93250(lVar4,lVar2);
      }
    }
    (**(code **)(param_1 + 0x468))(param_1,lVar4,lVar2);
  }
  return lVar2;
}



// FUNCTION 144b832c0 FUN_144b832c0 body=466 status=ok
// SIG undefined FUN_144b832c0(void)

undefined8
FUN_144b832c0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined2 param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  
  if (*(int *)((longlong)param_1 + 0xc) == 1) {
    pcVar5 = "File not open for reading";
LAB_144b832f3:
    FUN_144e92fd0(param_1[0x87],*param_1,pcVar5);
    return 0xffffffffffffffff;
  }
  if ((~(*(uint *)(param_1 + 2) >> 10) & 1) != 0) {
    pcVar5 = "Can not read tiles from a striped image";
    goto LAB_144b832f3;
  }
  iVar1 = FUN_144b7af90(param_1,param_4,param_5,param_6,param_7);
  if (iVar1 == 0) {
    return 0xffffffffffffffff;
  }
  uVar2 = FUN_144b7ae60(param_1,param_4,param_5,param_6,param_7);
  uVar3 = param_1[0x66];
  if (*param_2 != 0) {
    uVar3 = FUN_144b82f20(param_1,uVar2,*param_2,0xffffffffffffffff);
    return uVar3;
  }
  if (*(int *)((longlong)param_1 + 0xc) == 1) {
    pcVar5 = "File not open for reading";
  }
  else {
    if ((~(*(uint *)(param_1 + 2) >> 10) & 1) == 0) {
      if (*(uint *)((longlong)param_1 + 0xd4) <= uVar2) {
        FUN_144e92fd0(param_1[0x87],"_TIFFReadEncodedTileAndAllocBuffer",
                      "%lu: Tile out of range, max %lu",uVar2,*(uint *)((longlong)param_1 + 0xd4));
        return 0xffffffffffffffff;
      }
      iVar1 = FUN_144b83930(param_1,uVar2);
      if (iVar1 == 0) {
        return 0xffffffffffffffff;
      }
      lVar4 = FUN_144e92f50(param_3);
      *param_2 = lVar4;
      if (lVar4 != 0) {
        FUN_144e92f90(lVar4,0,param_3);
        iVar1 = (*(code *)param_1[0x73])
                          (param_1,*param_2,uVar3,
                           (ulonglong)uVar2 / (ulonglong)*(uint *)(param_1 + 0x1a));
        if (iVar1 == 0) {
          return 0xffffffffffffffff;
        }
        (*(code *)param_1[0x8d])(param_1,*param_2,uVar3);
        return uVar3;
      }
      uVar3 = FUN_144b775d0(param_1);
      pcVar5 = "No space for tile buffer";
      goto LAB_144b833c0;
    }
    pcVar5 = "Can not read tiles from a striped image";
  }
  uVar3 = *param_1;
LAB_144b833c0:
  FUN_144e92fd0(param_1[0x87],uVar3,pcVar5);
  return 0xffffffffffffffff;
}



// FUNCTION 144b834a0 FUN_144b834a0 body=1160 status=ok
// SIG undefined FUN_144b834a0(void)

undefined8 FUN_144b834a0(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar12;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if ((*(uint *)(param_1 + 0x10) & 0x20000) != 0) goto LAB_144b8365b;
  uVar3 = FUN_144b7c650();
  if (0x7ffffffffffffffe < uVar3 - 1) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillStrip",
                  "Invalid strip byte count %I64u, strip %lu",uVar3,CONCAT44(uVar12,param_2));
    return 0;
  }
  if ((((0x100000 < uVar3) && (uVar4 = FUN_144b77ae0(param_1), uVar4 != 0)) &&
      (uVar4 < (uVar3 - 0x1000) / 10)) &&
     (uVar1 = uVar4 * 10 + 0x1000, 0x7ffffffffffffffe < uVar4 * 10 + 0xfff)) {
    uVar6 = CONCAT44(uVar12,param_2);
    FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFFillStrip",
                  "Too large strip byte count %I64u, strip %lu. Limiting to %I64u",uVar3,uVar6,uVar1
                 );
    uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar3 = uVar1;
  }
  if (((*(uint *)(param_1 + 0x10) & 0x800) != 0) &&
     ((*(ulonglong *)(param_1 + 0x420) < uVar3 ||
      (uVar4 = FUN_144b7c5b0(param_1,param_2), *(longlong *)(param_1 + 0x420) - uVar3 < uVar4)))) {
    lVar5 = FUN_144b7c5b0(param_1,param_2);
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillStrip",
                  "Read error on strip %lu; got %I64u bytes, expected %I64u",param_2,
                  *(longlong *)(param_1 + 0x420) - lVar5,uVar3);
    *(undefined4 *)(param_1 + 0x304) = 0xffffffff;
    return 0;
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if (((uVar9 >> 0xb & 1) != 0) &&
     (((uVar9 & *(ushort *)(param_1 + 0x6e)) != 0 || ((uVar9 >> 8 & 1) != 0)))) {
    if (((uVar9 >> 9 & 1) != 0) && (*(void **)(param_1 + 1000) != (void *)0x0)) {
      free(*(void **)(param_1 + 1000));
      uVar9 = *(uint *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 1000) = 0;
    }
    *(ulonglong *)(param_1 + 0x3f0) = uVar3;
    *(uint *)(param_1 + 0x10) = uVar9 & 0xfffffdff;
    lVar5 = FUN_144b7c5b0(param_1,param_2);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x800000;
    *(longlong *)(param_1 + 1000) = lVar5 + *(longlong *)(param_1 + 0x418);
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(ulonglong *)(param_1 + 0x400) = uVar3;
    goto LAB_144b8365b;
  }
  if ((*(longlong *)(param_1 + 0x3f0) < (longlong)uVar3) &&
     (*(undefined4 *)(param_1 + 0x304) = 0xffffffff, (uVar9 >> 9 & 1) == 0)) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillStrip",
                  "Data buffer too small to hold strip %lu",param_2);
    return 0;
  }
  lVar10 = 0;
  lVar5 = *(longlong *)(param_1 + 0x3f0);
  if ((uVar9 >> 0x17 & 1) != 0) {
    uVar9 = uVar9 & 0xff7fffff;
    *(undefined4 *)(param_1 + 0x304) = 0xffffffff;
    *(uint *)(param_1 + 0x10) = uVar9;
    *(undefined8 *)(param_1 + 1000) = 0;
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    lVar5 = lVar10;
  }
  if ((uVar9 >> 0xb & 1) == 0) {
    uVar6 = FUN_144b7c5b0(param_1,param_2);
    iVar2 = FUN_144b7aaf0(param_1,uVar6);
    if (iVar2 == 0) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillStrip",
                    "Seek error at scanline %lu, strip %lu",*(undefined4 *)(param_1 + 0x2fc),
                    CONCAT44(uVar12,param_2));
LAB_144b838be:
      bVar11 = uVar3 == 0xffffffffffffffff;
      goto LAB_144b838c2;
    }
    if ((longlong)uVar3 < 0x3b9aca01) {
      if (0 < (longlong)uVar3) goto LAB_144b837b0;
    }
    else {
      uVar4 = (**(code **)(param_1 + 0x460))(*(undefined8 *)(param_1 + 0x438));
      if (uVar4 <= uVar3) {
        FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillStrip",
                      "Chunk size requested is larger than file size.");
        return 0;
      }
LAB_144b837b0:
      do {
        lVar5 = uVar3 - lVar10;
        if (*(longlong *)(param_1 + 0x3f0) < (longlong)uVar3) {
          uVar4 = lVar5 + 0x3ff + lVar10 & 0xfffffffffffffc00;
          *(ulonglong *)(param_1 + 0x3f0) = uVar4;
          if (uVar4 == 0) {
            FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillStrip","Invalid buffer size");
            goto LAB_144b838be;
          }
          pvVar7 = realloc(*(void **)(param_1 + 1000),uVar4);
          if (pvVar7 == (void *)0x0) {
            FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillStrip",
                          "No space for data buffer at scanline %lu",
                          *(undefined4 *)(param_1 + 0x2fc));
            free(*(void **)(param_1 + 1000));
            *(undefined8 *)(param_1 + 1000) = 0;
            *(undefined8 *)(param_1 + 0x3f0) = 0;
            goto LAB_144b838be;
          }
          *(void **)(param_1 + 1000) = pvVar7;
        }
        if (*(longlong *)(param_1 + 1000) == 0) goto LAB_144b838be;
        lVar8 = (**(code **)(param_1 + 0x440))
                          (*(undefined8 *)(param_1 + 0x438),*(longlong *)(param_1 + 1000) + lVar10,
                           lVar5);
        lVar10 = lVar10 + lVar8;
        if (lVar8 != lVar5) {
          memset((void *)(*(longlong *)(param_1 + 1000) + lVar10),0,
                 *(longlong *)(param_1 + 0x3f0) - lVar10);
          FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillStrip",
                        "Read error at scanline %lu; got %I64u bytes, expected %I64u",
                        *(undefined4 *)(param_1 + 0x2fc),lVar10,uVar3);
          goto LAB_144b838be;
        }
      } while (lVar10 < (longlong)uVar3);
    }
  }
  else {
    if ((lVar5 < (longlong)uVar3) && (iVar2 = FUN_144b82c40(param_1,0,uVar3), iVar2 == 0)) {
      return 0;
    }
    uVar4 = FUN_144b83fd0(param_1,param_2,*(undefined8 *)(param_1 + 1000),uVar3,"TIFFFillStrip");
    bVar11 = uVar4 == uVar3;
LAB_144b838c2:
    if (!bVar11) {
      return 0;
    }
  }
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(ulonglong *)(param_1 + 0x400) = uVar3;
  if (((*(uint *)(param_1 + 0x10) & (uint)*(ushort *)(param_1 + 0x6e)) == 0) &&
     ((*(uint *)(param_1 + 0x10) >> 8 & 1) == 0)) {
    FUN_144e93250(*(undefined8 *)(param_1 + 1000),uVar3);
  }
LAB_144b8365b:
  uVar6 = FUN_144b83db0(param_1,param_2);
  return uVar6;
}



// FUNCTION 144b83930 FUN_144b83930 body=1152 status=ok
// SIG undefined FUN_144b83930(void)

undefined8 FUN_144b83930(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar12;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar13;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  if ((*(uint *)(param_1 + 0x10) & 0x20000) != 0) goto LAB_144b83ab3;
  uVar3 = FUN_144b7c650();
  if (0x7ffffffffffffffe < uVar3 - 1) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillTile",
                  "%I64u: Invalid tile byte count, tile %lu",uVar3,CONCAT44(uVar12,param_2));
    return 0;
  }
  if ((((0x100000 < uVar3) && (uVar4 = FUN_144b7ac50(param_1), uVar4 != 0)) &&
      (uVar4 < (uVar3 - 0x1000) / 10)) &&
     (uVar1 = uVar4 * 10 + 0x1000, 0x7ffffffffffffffe < uVar4 * 10 + 0xfff)) {
    uVar6 = CONCAT44(uVar12,param_2);
    uVar4 = uVar1;
    FUN_144e94570(*(undefined8 *)(param_1 + 0x438),"TIFFFillTile",
                  "Too large tile byte count %I64u, tile %lu. Limiting to %I64u",uVar3,uVar6,uVar1);
    uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar13 = (undefined4)(uVar4 >> 0x20);
    uVar3 = uVar1;
  }
  if (((*(uint *)(param_1 + 0x10) & 0x800) != 0) &&
     ((*(ulonglong *)(param_1 + 0x420) < uVar3 ||
      (uVar4 = FUN_144b7c5b0(param_1,param_2), *(longlong *)(param_1 + 0x420) - uVar3 < uVar4)))) {
    *(undefined4 *)(param_1 + 0x32c) = 0xffffffff;
    return 0;
  }
  uVar9 = *(uint *)(param_1 + 0x10);
  if (((uVar9 >> 0xb & 1) != 0) &&
     (((uVar9 & *(ushort *)(param_1 + 0x6e)) != 0 || ((uVar9 >> 8 & 1) != 0)))) {
    if (((uVar9 >> 9 & 1) != 0) && (*(void **)(param_1 + 1000) != (void *)0x0)) {
      free(*(void **)(param_1 + 1000));
      uVar9 = *(uint *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 1000) = 0;
    }
    *(ulonglong *)(param_1 + 0x3f0) = uVar3;
    *(uint *)(param_1 + 0x10) = uVar9 & 0xfffffdff;
    lVar5 = FUN_144b7c5b0(param_1,param_2);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x800000;
    *(longlong *)(param_1 + 1000) = lVar5 + *(longlong *)(param_1 + 0x418);
    *(undefined8 *)(param_1 + 0x3f8) = 0;
    *(ulonglong *)(param_1 + 0x400) = uVar3;
    goto LAB_144b83ab3;
  }
  if ((*(longlong *)(param_1 + 0x3f0) < (longlong)uVar3) &&
     (*(undefined4 *)(param_1 + 0x32c) = 0xffffffff, (uVar9 >> 9 & 1) == 0)) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillTile",
                  "Data buffer too small to hold tile %lu",param_2);
    return 0;
  }
  lVar10 = 0;
  lVar5 = *(longlong *)(param_1 + 0x3f0);
  if ((uVar9 >> 0x17 & 1) != 0) {
    uVar9 = uVar9 & 0xff7fffff;
    *(undefined4 *)(param_1 + 0x32c) = 0xffffffff;
    *(uint *)(param_1 + 0x10) = uVar9;
    *(undefined8 *)(param_1 + 1000) = 0;
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    lVar5 = lVar10;
  }
  if ((uVar9 >> 0xb & 1) == 0) {
    uVar6 = FUN_144b7c5b0(param_1,param_2);
    iVar2 = FUN_144b7aaf0(param_1,uVar6);
    if (iVar2 == 0) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillTile",
                    "Seek error at row %lu, col %lu, tile %lu",*(undefined4 *)(param_1 + 0x2fc),
                    CONCAT44(uVar12,*(undefined4 *)(param_1 + 0x328)),CONCAT44(uVar13,param_2));
LAB_144b83d3d:
      bVar11 = uVar3 == 0xffffffffffffffff;
      goto LAB_144b83d41;
    }
    if ((longlong)uVar3 < 0x3b9aca01) {
      if (0 < (longlong)uVar3) goto LAB_144b83c20;
    }
    else {
      uVar4 = (**(code **)(param_1 + 0x460))(*(undefined8 *)(param_1 + 0x438));
      if (uVar4 <= uVar3) {
        FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillTile",
                      "Chunk size requested is larger than file size.");
        return 0;
      }
LAB_144b83c20:
      do {
        lVar5 = uVar3 - lVar10;
        if (*(longlong *)(param_1 + 0x3f0) < (longlong)uVar3) {
          uVar4 = lVar5 + 0x3ff + lVar10 & 0xfffffffffffffc00;
          *(ulonglong *)(param_1 + 0x3f0) = uVar4;
          if (uVar4 == 0) {
            FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillTile","Invalid buffer size");
            goto LAB_144b83d3d;
          }
          pvVar7 = realloc(*(void **)(param_1 + 1000),uVar4);
          if (pvVar7 == (void *)0x0) {
            FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillTile",
                          "No space for data buffer at scanline %lu",
                          *(undefined4 *)(param_1 + 0x2fc));
            free(*(void **)(param_1 + 1000));
            *(undefined8 *)(param_1 + 1000) = 0;
            *(undefined8 *)(param_1 + 0x3f0) = 0;
            goto LAB_144b83d3d;
          }
          *(void **)(param_1 + 1000) = pvVar7;
        }
        if (*(longlong *)(param_1 + 1000) == 0) goto LAB_144b83d3d;
        lVar8 = (**(code **)(param_1 + 0x440))
                          (*(undefined8 *)(param_1 + 0x438),*(longlong *)(param_1 + 1000) + lVar10,
                           lVar5);
        lVar10 = lVar10 + lVar8;
        if (lVar8 != lVar5) {
          memset((void *)(*(longlong *)(param_1 + 1000) + lVar10),0,
                 *(longlong *)(param_1 + 0x3f0) - lVar10);
          FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFFillTile",
                        "Read error at row %lu, col %lu, tile %lu; got %I64u bytes, expected %I64u",
                        *(undefined4 *)(param_1 + 0x2fc),*(undefined4 *)(param_1 + 0x328),param_2,
                        lVar10,uVar3);
          goto LAB_144b83d3d;
        }
      } while (lVar10 < (longlong)uVar3);
    }
  }
  else {
    if ((lVar5 < (longlong)uVar3) && (iVar2 = FUN_144b82c40(param_1,0,uVar3), iVar2 == 0)) {
      return 0;
    }
    uVar4 = FUN_144b84160(param_1,param_2,*(undefined8 *)(param_1 + 1000),uVar3,"TIFFFillTile");
    bVar11 = uVar4 == uVar3;
LAB_144b83d41:
    if (!bVar11) {
      return 0;
    }
  }
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(ulonglong *)(param_1 + 0x400) = uVar3;
  if (((*(longlong *)(param_1 + 1000) != 0) &&
      ((*(uint *)(param_1 + 0x10) & (uint)*(ushort *)(param_1 + 0x6e)) == 0)) &&
     ((*(uint *)(param_1 + 0x10) >> 8 & 1) == 0)) {
    FUN_144e93250(*(longlong *)(param_1 + 1000),uVar3);
  }
LAB_144b83ab3:
  uVar6 = FUN_144b83e90(param_1,param_2);
  return uVar6;
}



// FUNCTION 144b83db0 FUN_144b83db0 body=211 status=ok
// SIG undefined FUN_144b83db0(void)

undefined8 FUN_144b83db0(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 & 0x20) == 0) {
    iVar1 = (**(code **)(param_1 + 0x348))(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = *(uint *)(param_1 + 0x10) | 0x20;
  }
  *(uint *)(param_1 + 0x304) = param_2;
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xd0);
  *(uint *)(param_1 + 0x10) = uVar3 & 0xffefffff;
  *(uint *)(param_1 + 0x2fc) = (param_2 % *(uint *)(param_1 + 0xd0)) * *(int *)(param_1 + 0x74);
  if (((uVar3 & 0xffefffff) >> 0x11 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_1 + 1000);
    lVar2 = *(longlong *)(param_1 + 0x400);
    if (lVar2 < 1) {
      lVar2 = FUN_144b7c650(param_1,param_2);
      uVar4 = (ulonglong)*(uint *)(param_1 + 0xd0);
    }
  }
  else {
    lVar2 = 0;
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  *(longlong *)(param_1 + 0x410) = lVar2;
  iVar1 = (**(code **)(param_1 + 0x350))(param_1,param_2 / uVar4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x304) = 0xffffffff;
    return 0;
  }
  return 1;
}



// FUNCTION 144b83e90 FUN_144b83e90 body=308 status=ok
// SIG undefined FUN_144b83e90(void)

undefined8 FUN_144b83e90(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  uVar7 = *(uint *)(param_1 + 0x10);
  if ((uVar7 & 0x20) == 0) {
    iVar4 = (**(code **)(param_1 + 0x348))(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
    uVar7 = *(uint *)(param_1 + 0x10);
  }
  *(uint *)(param_1 + 0x32c) = param_2;
  uVar1 = *(uint *)(param_1 + 0x54);
  if ((*(uint *)(param_1 + 0x48) < -uVar1) &&
     (uVar3 = (ulonglong)((*(uint *)(param_1 + 0x48) - 1) + uVar1) / (ulonglong)uVar1,
     (int)uVar3 != 0)) {
    uVar2 = *(uint *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x2fc) = (int)((ulonglong)param_2 % uVar3) * uVar2;
    if ((*(uint *)(param_1 + 0x4c) < -uVar2) &&
       (uVar3 = (ulonglong)((*(uint *)(param_1 + 0x4c) - 1) + uVar2) / (ulonglong)uVar2,
       (int)uVar3 != 0)) {
      *(uint *)(param_1 + 0x10) = uVar7 & 0xffefffff;
      *(uint *)(param_1 + 0x328) = (int)((ulonglong)param_2 % uVar3) * uVar1;
      if (((uVar7 & 0xffefffff) >> 0x11 & 1) == 0) {
        *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(param_1 + 1000);
        lVar5 = *(longlong *)(param_1 + 0x400);
        if (lVar5 < 1) {
          lVar5 = FUN_144b7c650(param_1,param_2);
        }
      }
      else {
        lVar5 = 0;
        *(undefined8 *)(param_1 + 0x408) = 0;
      }
      *(longlong *)(param_1 + 0x410) = lVar5;
                    /* WARNING: Could not recover jumptable at 0x000144b83f9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(param_1 + 0x350))
                        (param_1,(ulonglong)param_2 / (ulonglong)*(uint *)(param_1 + 0xd0));
      return uVar6;
    }
  }
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),"TIFFStartTile","Zero tiles");
  return 0;
}



// FUNCTION 144b83fd0 FUN_144b83fd0 body=390 status=ok
// SIG undefined FUN_144b83fd0(void)

longlong FUN_144b83fd0(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  if ((*(uint *)(param_1 + 0x10) & 0x800) == 0) {
    uVar3 = FUN_144b7c5b0();
    iVar2 = FUN_144b7aaf0(param_1,uVar3);
    if (iVar2 == 0) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_5,"Seek error at scanline %lu, strip %lu"
                    ,*(undefined4 *)(param_1 + 0x2fc),CONCAT44(uVar7,param_2));
      return -1;
    }
    lVar4 = (**(code **)(param_1 + 0x440))(*(undefined8 *)(param_1 + 0x438),param_3,param_4);
    if (lVar4 == param_4) {
      return param_4;
    }
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_5,
                  "Read error at scanline %lu; got %I64u bytes, expected %I64u",
                  *(undefined4 *)(param_1 + 0x2fc),lVar4,param_4);
    return -1;
  }
  lVar6 = 0;
  uVar5 = FUN_144b7c5b0();
  lVar4 = lVar6;
  if (uVar5 < 0x8000000000000000) {
    lVar4 = FUN_144b7c5b0(param_1,param_2);
    lVar1 = *(longlong *)(param_1 + 0x420);
    if ((lVar4 <= lVar1) && (lVar4 <= 0x7fffffffffffffff - param_4)) {
      if (lVar4 + param_4 <= lVar1) goto LAB_144b8411f;
      lVar6 = lVar1 - lVar4;
    }
  }
  if (lVar6 != param_4) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_5,
                  "Read error at scanline %lu, strip %lu; got %I64u bytes, expected %I64u",
                  *(undefined4 *)(param_1 + 0x2fc),CONCAT44(uVar7,param_2),lVar6,param_4);
    return -1;
  }
LAB_144b8411f:
  FUN_144e92fa0(param_3,*(longlong *)(param_1 + 0x418) + lVar4,param_4);
  return param_4;
}



// FUNCTION 144b84160 FUN_144b84160 body=411 status=ok
// SIG undefined FUN_144b84160(void)

longlong FUN_144b84160(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 in_stack_ffffffffffffffd0;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  if ((*(uint *)(param_1 + 0x10) & 0x800) == 0) {
    uVar2 = FUN_144b7c5b0();
    iVar1 = FUN_144b7aaf0(param_1,uVar2);
    if (iVar1 == 0) {
      FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_5,
                    "Seek error at row %lu, col %lu, tile %lu",*(undefined4 *)(param_1 + 0x2fc),
                    *(undefined4 *)(param_1 + 0x328),CONCAT44(uVar7,param_2));
      return -1;
    }
    lVar3 = (**(code **)(param_1 + 0x440))(*(undefined8 *)(param_1 + 0x438),param_3,param_4);
    if (lVar3 == param_4) {
      return param_4;
    }
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_5,
                  "Read error at row %lu, col %lu; got %I64u bytes, expected %I64u",
                  *(undefined4 *)(param_1 + 0x2fc),*(undefined4 *)(param_1 + 0x328),lVar3,param_4);
    return -1;
  }
  lVar4 = FUN_144b7c5b0();
  lVar3 = lVar4 + param_4;
  uVar5 = FUN_144b7c5b0(param_1,param_2);
  if ((uVar5 < 0x8000000000000000) && (lVar6 = *(longlong *)(param_1 + 0x420), lVar4 <= lVar6)) {
    if (((lVar4 <= lVar3) && (param_4 <= lVar3)) && (lVar3 <= lVar6)) goto LAB_144b842ca;
    lVar6 = lVar6 - lVar4;
  }
  else {
    lVar6 = 0;
  }
  if (lVar6 != param_4) {
    FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),param_5,
                  "Read error at row %lu, col %lu, tile %lu; got %I64u bytes, expected %I64u",
                  *(undefined4 *)(param_1 + 0x2fc),*(undefined4 *)(param_1 + 0x328),
                  CONCAT44(uVar7,param_2),lVar6,param_4);
    return -1;
  }
LAB_144b842ca:
  FUN_144e92fa0(param_3,*(longlong *)(param_1 + 0x418) + lVar4,param_4);
  return param_4;
}



// FUNCTION 144b84300 FUN_144b84300 body=227 status=ok
// SIG undefined FUN_144b84300(void)

longlong FUN_144b84300(undefined8 *param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  if (*(int *)((longlong)param_1 + 0xc) == 1) {
    pcVar5 = "File not open for reading";
  }
  else {
    if ((*(uint *)(param_1 + 2) & 0x400) == 0) {
      if (*(uint *)((longlong)param_1 + 0xd4) <= param_2) {
        FUN_144e92fd0(param_1[0x87],"TIFFReadEncodedStrip","%lu: Strip out of range, max %lu",
                      param_2,*(uint *)((longlong)param_1 + 0xd4));
        return -1;
      }
      uVar4 = *(uint *)((longlong)param_1 + 0x4c);
      uVar1 = uVar4;
      if (*(uint *)((longlong)param_1 + 0x74) <= uVar4) {
        uVar1 = *(uint *)((longlong)param_1 + 0x74);
      }
      uVar3 = (uint)(uVar4 % uVar1 != 0) + uVar4 / uVar1;
      if (param_3 != (undefined2 *)0x0) {
        *param_3 = (short)(param_2 / uVar3);
        uVar4 = *(uint *)((longlong)param_1 + 0x4c);
      }
      uVar4 = uVar4 - uVar1 * (param_2 % uVar3);
      if (uVar1 < uVar4) {
        uVar4 = uVar1;
      }
      lVar2 = FUN_144b77cf0(param_1,uVar4);
      if (lVar2 == 0) {
        lVar2 = -1;
      }
      return lVar2;
    }
    pcVar5 = "Can not read scanlines from a tiled image";
  }
  FUN_144e92fd0(param_1[0x87],*param_1,pcVar5);
  return -1;
}



// FUNCTION 144b843f0 FUN_144b843f0 body=323 status=ok
// SIG undefined FUN_144b843f0(void)

void FUN_144b843f0(longlong param_1,int param_2,int param_3,longlong param_4,undefined2 param_5,
                  undefined4 param_6)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auStack_4e8 [32];
  longlong local_4c8 [3];
  int local_4b0;
  undefined2 local_4a6;
  code *local_488;
  longlong local_480;
  undefined1 local_438 [1024];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  memset(local_438,0,0x400);
  iVar1 = FUN_144b84540(param_1,local_438);
  if (iVar1 != 0) {
    iVar1 = FUN_144b848e0(local_4c8,param_1,param_6,local_438);
    if (iVar1 != 0) {
      local_4a6 = param_5;
      if (local_488 == (code *)0x0) {
        uVar2 = FUN_144b775d0(local_4c8[0]);
        pcVar3 = "No \"get\" routine setup";
      }
      else {
        if (local_480 != 0) {
          (*local_488)(local_4c8,param_4 + (ulonglong)(uint)((param_3 - local_4b0) * param_2) * 4,
                       param_2);
          FUN_144b85150(local_4c8);
          goto LAB_144b84521;
        }
        uVar2 = FUN_144b775d0(local_4c8[0]);
        pcVar3 = "No \"put\" routine setupl; probably can not handle image format";
      }
      FUN_144e92fd0(*(undefined8 *)(local_4c8[0] + 0x438),uVar2,pcVar3);
      FUN_144b85150(local_4c8);
      goto LAB_144b84521;
    }
  }
  uVar2 = FUN_144b775d0(param_1);
  FUN_144e92fd0(*(undefined8 *)(param_1 + 0x438),uVar2,&DAT_149972340,local_438);
LAB_144b84521:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_4e8);
}



// FUNCTION 144b84540 FUN_144b84540 body=878 status=ok
// SIG undefined FUN_144b84540(void)

undefined8 FUN_144b84540(longlong param_1,undefined8 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ushort local_res8 [4];
  short local_res18 [8];
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  if (*(int *)(param_1 + 0x338) == 0) {
    FUN_1424c2e40(param_2,"Sorry, requested compression method is not configured");
    return 0;
  }
  sVar1 = *(short *)(param_1 + 100);
  if ((((sVar1 != 1) && (sVar1 != 2)) && (sVar1 != 4)) && ((sVar1 != 8 && (sVar1 != 0x10)))) {
    FUN_1424c2e40(param_2,"Sorry, can not handle images with %d-bit samples");
    return 0;
  }
  if (*(short *)(param_1 + 0x66) == 3) {
    FUN_1424c2e40(param_2,"Sorry, can not handle images with IEEE floating-point samples");
    return 0;
  }
  iVar3 = (uint)*(ushort *)(param_1 + 0x72) - (uint)*(ushort *)(param_1 + 0xc4);
  iVar2 = FUN_144b77e20(param_1,0x106,local_res8);
  if (iVar2 == 0) {
    if (iVar3 == 1) {
      local_res8[0] = 1;
    }
    else {
      if (iVar3 != 3) {
        FUN_1424c2e40(param_2,"Missing needed %s tag","PhotometricInterpretation");
        return 0;
      }
      local_res8[0] = 2;
    }
  }
  if (local_res8[0] < 0x804d) {
    if (local_res8[0] == 0x804c) {
      if (*(short *)(param_1 + 0x68) != -0x788c) {
        FUN_1424c2e40(param_2,"Sorry, LogL data must have %s=%d","Compression");
        return 0;
      }
switchD_144b8466c_caseD_6:
      return 1;
    }
    switch(local_res8[0]) {
    case 0:
    case 1:
    case 3:
      if (*(short *)(param_1 + 0x9a) != 1) {
        return 1;
      }
      if (*(short *)(param_1 + 0x72) == 1) {
        return 1;
      }
      if (7 < *(ushort *)(param_1 + 100)) {
        return 1;
      }
      FUN_1424c2e40(param_2,
                    "Sorry, can not handle contiguous data with %s=%d, and %s=%d and Bits/Sample=%d"
                    ,"PhotometricInterpretation",local_res8[0],"Samples/pixel",
                    *(short *)(param_1 + 0x72),CONCAT44(uVar5,(uint)*(ushort *)(param_1 + 100)));
      break;
    case 2:
      if (2 < iVar3) {
        return 1;
      }
      FUN_1424c2e40(param_2,"Sorry, can not handle RGB image with %s=%d","Color channels",iVar3);
      break;
    default:
      goto switchD_144b8466c_caseD_4;
    case 5:
      FUN_144b7a120(param_1,0x14c,local_res18);
      if (local_res18[0] == 1) {
        if (3 < *(ushort *)(param_1 + 0x72)) {
          return 1;
        }
        FUN_1424c2e40(param_2,"Sorry, can not handle separated image with %s=%d","Samples/pixel",
                      *(ushort *)(param_1 + 0x72));
      }
      else {
        FUN_1424c2e40(param_2,"Sorry, can not handle separated image with %s=%d","InkSet",
                      local_res18[0]);
      }
      break;
    case 6:
      goto switchD_144b8466c_caseD_6;
    case 8:
      if (((*(short *)(param_1 + 0x72) == 3) && (iVar3 == 3)) && (*(short *)(param_1 + 100) == 8)) {
        return 1;
      }
      FUN_1424c2e40(param_2,"Sorry, can not handle image with %s=%d, %s=%d and %s=%d",
                    "Samples/pixel",*(short *)(param_1 + 0x72),"colorchannels",iVar3,"Bits/sample",
                    *(undefined2 *)(param_1 + 100));
    }
  }
  else {
    if (local_res8[0] == 0x804d) {
      if (1 < (ushort)(*(short *)(param_1 + 0x68) + 0x788cU)) {
        FUN_1424c2e40(param_2,"Sorry, LogLuv data must have %s=%d or %d","Compression",0x8774,
                      CONCAT44(uVar4,0x8775));
        return 0;
      }
      if (*(short *)(param_1 + 0x9a) != 1) {
        FUN_1424c2e40(param_2,"Sorry, can not handle LogLuv images with %s=%d","Planarconfiguration"
                      ,*(short *)(param_1 + 0x9a));
        return 0;
      }
      if ((*(short *)(param_1 + 0x72) == 3) && (iVar3 == 3)) {
        return 1;
      }
      FUN_1424c2e40(param_2,"Sorry, can not handle image with %s=%d, %s=%d","Samples/pixel",
                    *(short *)(param_1 + 0x72),"colorchannels",iVar3);
      return 0;
    }
switchD_144b8466c_caseD_4:
    FUN_1424c2e40(param_2,"Sorry, can not handle image with %s=%d","PhotometricInterpretation");
  }
  return 0;
}



// FUNCTION 144b848e0 FUN_144b848e0 body=2110 status=ok
// SIG undefined FUN_144b848e0(void)

undefined8
FUN_144b848e0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar10;
  ushort local_68 [2];
  short local_64 [2];
  ushort local_60 [2];
  short local_5c [2];
  uint local_58 [2];
  ushort *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar4 = FUN_144b84540(param_2,param_4);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  *(undefined2 *)((longlong)param_1 + 0x22) = 4;
  param_1[0x11] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  FUN_144b7a120(param_2,0x102,(longlong)param_1 + 0x1c);
  sVar1 = *(short *)((longlong)param_1 + 0x1c);
  if ((((sVar1 != 1) && (sVar1 != 2)) && (sVar1 != 4)) && ((sVar1 != 8 && (sVar1 != 0x10)))) {
    FUN_1424c2e40(param_4,"Sorry, can not handle images with %d-bit samples");
    goto LAB_144b85042;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_144b7a120(param_2,0x115,(longlong)param_1 + 0x1e);
  FUN_144b7a120(param_2,0x152,local_60,&local_50);
  if (local_60[0] != 0) {
    uVar2 = *local_50;
    if (uVar2 == 0) {
      if (3 < *(ushort *)((longlong)param_1 + 0x1e)) {
        *(undefined4 *)(param_1 + 2) = 1;
      }
    }
    else if ((uVar2 == 1) || (uVar2 == 2)) {
      *(uint *)(param_1 + 2) = (uint)uVar2;
    }
  }
  iVar3 = FUN_144b77e20(param_2,0x106,(longlong)param_1 + 0x24);
  if (iVar3 == 0) {
    *(undefined2 *)((longlong)param_1 + 0x24) = 0;
  }
  if (((local_60[0] == 0) && (*(short *)((longlong)param_1 + 0x1e) == 4)) &&
     (*(short *)((longlong)param_1 + 0x24) == 2)) {
    *(undefined4 *)(param_1 + 2) = 1;
    local_60[0] = 1;
  }
  iVar8 = (uint)*(ushort *)((longlong)param_1 + 0x1e) - (uint)local_60[0];
  FUN_144b7a120(param_2,0x103,local_5c);
  FUN_144b7a120(param_2,0x11c,local_64);
  iVar3 = FUN_144b77e20(param_2,0x106,(longlong)param_1 + 0x24);
  if (iVar3 == 0) {
    if (iVar8 == 1) {
      FUN_144b77e20(param_2,0x103,local_68);
      if (((ushort)(local_68[0] - 2) < 3) || (local_68[0] == 0x8003)) {
        *(undefined2 *)((longlong)param_1 + 0x24) = 0;
      }
      else {
        *(undefined2 *)((longlong)param_1 + 0x24) = 1;
      }
    }
    else {
      if (iVar8 != 3) {
        FUN_1424c2e40(param_4,"Missing needed %s tag","PhotometricInterpretation");
        goto LAB_144b85042;
      }
      *(undefined2 *)((longlong)param_1 + 0x24) = 2;
    }
  }
  uVar2 = *(ushort *)((longlong)param_1 + 0x24);
  if (0x804c < uVar2) {
    if (uVar2 != 0x804d) {
switchD_144b84b36_caseD_4:
      FUN_1424c2e40(param_4,"Sorry, can not handle image with %s=%d","PhotometricInterpretation");
      goto LAB_144b85042;
    }
    if (1 < (ushort)(local_5c[0] + 0x788cU)) {
      FUN_1424c2e40(param_4,"Sorry, LogLuv data must have %s=%d or %d","Compression",0x8774,
                    CONCAT44(uVar10,0x8775));
      goto LAB_144b85042;
    }
    if (local_64[0] != 1) {
      FUN_1424c2e40(param_4,"Sorry, can not handle LogLuv images with %s=%d","Planarconfiguration",
                    local_64[0]);
      return 0;
    }
    FUN_144b78170(param_2,0x10018,3);
    *(undefined2 *)((longlong)param_1 + 0x24) = 2;
    *(undefined2 *)((longlong)param_1 + 0x1c) = 8;
    goto switchD_144b84b36_caseD_8;
  }
  if (uVar2 == 0x804c) {
    if (local_5c[0] != -0x788c) {
      FUN_1424c2e40(param_4,"Sorry, LogL data must have %s=%d","Compression");
      goto LAB_144b85042;
    }
    FUN_144b78170(param_2,0x10018,3);
    *(undefined2 *)((longlong)param_1 + 0x1c) = 8;
    *(undefined2 *)((longlong)param_1 + 0x24) = 1;
  }
  else {
    switch(uVar2) {
    case 0:
    case 1:
switchD_144b84b36_caseD_0:
      if (((local_64[0] == 1) && (*(short *)((longlong)param_1 + 0x1e) != 1)) &&
         (*(ushort *)((longlong)param_1 + 0x1c) < 8)) {
        FUN_1424c2e40(param_4,
                      "Sorry, can not handle contiguous data with %s=%d, and %s=%d and Bits/Sample=%d"
                      ,"PhotometricInterpretation",*(undefined2 *)((longlong)param_1 + 0x24),
                      "Samples/pixel",*(short *)((longlong)param_1 + 0x1e),
                      *(ushort *)((longlong)param_1 + 0x1c));
        goto LAB_144b85042;
      }
      break;
    case 2:
      if (iVar8 < 3) {
        FUN_1424c2e40(param_4,"Sorry, can not handle RGB image with %s=%d","Color channels",iVar8);
        goto LAB_144b85042;
      }
      break;
    case 3:
      iVar3 = FUN_144b77e20(param_2,0x140,&local_48,&local_40,local_38);
      if (iVar3 == 0) {
        pcVar7 = "Missing required \"Colormap\" tag";
      }
      else {
        local_58[0] = 1 << (*(byte *)((longlong)param_1 + 0x1c) & 0x1f);
        lVar5 = (longlong)(int)local_58[0] * 2;
        uVar4 = FUN_144e92f50(lVar5);
        param_1[5] = uVar4;
        uVar4 = FUN_144e92f50(lVar5);
        param_1[6] = uVar4;
        lVar5 = FUN_144e92f50(lVar5);
        param_1[7] = lVar5;
        if (((param_1[5] != 0) && (param_1[6] != 0)) && (lVar5 != 0)) {
          lVar5 = (longlong)(int)(local_58[0] * 2);
          FUN_144e92fa0(param_1[5],local_48,lVar5);
          FUN_144e92fa0(param_1[6],local_40,lVar5);
          FUN_144e92fa0(param_1[7],local_38[0],lVar5);
          goto switchD_144b84b36_caseD_0;
        }
        pcVar7 = "Out of memory for colormap copy";
      }
      goto LAB_144b8503a;
    default:
      goto switchD_144b84b36_caseD_4;
    case 5:
      FUN_144b7a120(param_2,0x14c,local_68);
      if (local_68[0] != 1) {
        FUN_1424c2e40(param_4,"Sorry, can not handle separated image with %s=%d","InkSet",
                      local_68[0]);
        goto LAB_144b85042;
      }
      if (*(ushort *)((longlong)param_1 + 0x1e) < 4) {
        FUN_1424c2e40(param_4,"Sorry, can not handle separated image with %s=%d","Samples/pixel",
                      *(ushort *)((longlong)param_1 + 0x1e));
        goto LAB_144b85042;
      }
      break;
    case 6:
      if ((local_64[0] == 1) && (local_5c[0] == 7)) {
        FUN_144b78170(param_2,0x10002,1);
        *(undefined2 *)((longlong)param_1 + 0x24) = 2;
      }
      break;
    case 8:
      break;
    }
switchD_144b84b36_caseD_8:
  }
  FUN_144b77e20(param_2,0x100,(longlong)param_1 + 0x14);
  FUN_144b77e20(param_2,0x101,param_1 + 3);
  FUN_144b7a120(param_2,0x112,param_1 + 4);
  if ((local_64[0] == 2) && (1 < *(ushort *)((longlong)param_1 + 0x1e))) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    iVar3 = FUN_144b76e70(*param_1);
    param_1[9] = 0;
    pcVar6 = FUN_144b85f20;
    if (iVar3 != 0) {
      pcVar6 = FUN_144b855e0;
    }
    param_1[8] = pcVar6;
    sVar1 = *(short *)((longlong)param_1 + 0x24);
    if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 2)) {
      if (*(short *)((longlong)param_1 + 0x1c) == 8) {
        if (*(int *)(param_1 + 2) == 1) {
          pcVar6 = FUN_144b88f60;
        }
        else {
          if (*(int *)(param_1 + 2) == 2) {
            iVar3 = FUN_144b86980(param_1);
            if (iVar3 != 0) {
              param_1[9] = FUN_144b89450;
            }
            goto LAB_144b85014;
          }
          pcVar6 = FUN_144b88c20;
        }
        param_1[9] = pcVar6;
      }
      else if (*(short *)((longlong)param_1 + 0x1c) == 0x10) {
        if (*(int *)(param_1 + 2) == 1) {
          iVar3 = FUN_144b86a40(param_1);
          if (iVar3 != 0) {
            param_1[9] = FUN_144b89640;
          }
        }
        else if (*(int *)(param_1 + 2) == 2) {
          iVar3 = FUN_144b86a40(param_1);
          if ((iVar3 != 0) && (iVar3 = FUN_144b86980(param_1), iVar3 != 0)) {
            param_1[9] = FUN_144b89740;
          }
        }
        else {
          iVar3 = FUN_144b86a40(param_1);
          if (iVar3 != 0) {
            param_1[9] = FUN_144b89560;
          }
        }
      }
    }
    else if (sVar1 == 5) {
      if ((*(short *)((longlong)param_1 + 0x1c) == 8) && (*(short *)((longlong)param_1 + 0x1e) == 4)
         ) {
        *(undefined4 *)(param_1 + 2) = 1;
        param_1[9] = FUN_144b892f0;
      }
    }
    else if (((sVar1 == 6) && (*(short *)((longlong)param_1 + 0x1c) == 8)) &&
            ((*(short *)((longlong)param_1 + 0x1e) == 3 &&
             ((iVar3 = FUN_144b8b910(param_1), iVar3 != 0 &&
              (FUN_144b7a120(*param_1,0x212,local_68,local_58),
              ((uint)local_68[0] << 4 | local_58[0] & 0xffff) == 0x11)))))) {
      param_1[9] = FUN_144b8b7e0;
    }
LAB_144b85014:
    if (param_1[8] != 0) {
      bVar9 = param_1[9] == 0;
      goto LAB_144b8502d;
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0xc) = 1;
    iVar3 = FUN_144b86450(param_1);
    bVar9 = iVar3 == 0;
LAB_144b8502d:
    if (!bVar9) {
      return 1;
    }
  }
  pcVar7 = "Sorry, can not handle image";
LAB_144b8503a:
  FUN_1424c2e40(param_4,pcVar7);
LAB_144b85042:
  if ((void *)param_1[10] != (void *)0x0) {
    free((void *)param_1[10]);
    param_1[10] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    free((void *)param_1[0xb]);
    param_1[0xb] = 0;
  }
  if ((void *)param_1[0xc] != (void *)0x0) {
    free((void *)param_1[0xc]);
    param_1[0xc] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    free((void *)param_1[0xd]);
    param_1[0xd] = 0;
  }
  if ((void *)param_1[0xe] != (void *)0x0) {
    free((void *)param_1[0xe]);
    param_1[0xe] = 0;
  }
  if ((void *)param_1[0xf] != (void *)0x0) {
    free((void *)param_1[0xf]);
    param_1[0xf] = 0;
  }
  if ((void *)param_1[0x10] != (void *)0x0) {
    free((void *)param_1[0x10]);
    param_1[0x10] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    free((void *)param_1[5]);
    free((void *)param_1[6]);
    free((void *)param_1[7]);
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
  }
  return 0;
}



// FUNCTION 144b85150 FUN_144b85150 body=202 status=ok
// SIG undefined FUN_144b85150(void)

void FUN_144b85150(longlong param_1)

{
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    free(*(void **)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    free(*(void **)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    free(*(void **)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    free(*(void **)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    free(*(void **)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(void **)(param_1 + 0x78) != (void *)0x0) {
    free(*(void **)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(void **)(param_1 + 0x80) != (void *)0x0) {
    free(*(void **)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    free(*(void **)(param_1 + 0x28));
    free(*(void **)(param_1 + 0x30));
    free(*(void **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 144b85220 FUN_144b85220 body=955 status=ok
// SIG undefined FUN_144b85220(void)

int FUN_144b85220(longlong *param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  char *pcVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  int local_res8;
  uint in_stack_ffffffffffffff58;
  uint uVar17;
  uint local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  int local_68;
  void *local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  longlong local_48;
  code *local_40;
  
  local_40 = (code *)param_1[9];
  lVar2 = *param_1;
  uVar10 = 0;
  local_60 = (void *)0x0;
  local_78 = 1;
  local_48 = FUN_144b7ac50(lVar2);
  if (local_48 == 0) {
    uVar4 = FUN_144b775d0();
    pcVar13 = "No space for tile buffer";
  }
  else {
    FUN_144b77e20(lVar2,0x142,&local_88);
    FUN_144b77e20(lVar2,0x143,&local_74);
    local_50 = FUN_144b86c40(param_1);
    local_58 = local_50 & 1;
    if (local_58 == 0) {
      if (local_88 <= param_3 + 0x7fffffff) {
        local_res8 = 0;
        local_84 = param_3 - local_88;
        goto LAB_144b8533c;
      }
    }
    else if (local_88 + param_3 < 0x80000000) {
      local_res8 = param_4 - 1;
      local_84 = -(local_88 + param_3);
LAB_144b8533c:
      uVar9 = (ulonglong)*(uint *)((longlong)param_1 + 0x8c) % (ulonglong)local_88;
      local_6c = (uint)uVar9;
      local_54 = local_88 - local_6c;
      local_68 = local_6c + local_84;
      uVar15 = uVar10;
      iVar7 = 1;
      iVar14 = local_68;
      do {
        uVar3 = (uint)uVar15;
        if (param_4 <= uVar3) break;
        iVar7 = local_74 - ((int)param_1[0x11] + uVar3) % local_74;
        local_70 = *(int *)((longlong)param_1 + 0x8c);
        local_7c = param_4 - uVar3;
        if (iVar7 + uVar3 <= param_4) {
          local_7c = iVar7;
        }
        uVar15 = uVar10;
        uVar11 = local_54;
        uVar17 = in_stack_ffffffffffffff58;
        local_80 = iVar14;
        if (param_3 != 0) {
          do {
            in_stack_ffffffffffffff58 = (uint)uVar9;
            uVar17 = uVar17 & 0xffff0000;
            lVar5 = FUN_144b832c0(lVar2,&local_60,local_48,local_70,(int)param_1[0x11] + uVar3,0,
                                  uVar17);
            if ((lVar5 == -1) && ((local_60 == (void *)0x0 || ((int)param_1[1] != 0)))) {
              uVar9 = (ulonglong)local_6c;
              local_78 = 0;
              in_stack_ffffffffffffff58 = uVar17;
              iVar14 = local_68;
              goto LAB_144b854fe;
            }
            lVar5 = FUN_144b7ac10(lVar2);
            lVar6 = (longlong)(int)in_stack_ffffffffffffff58;
            iVar7 = (int)uVar15;
            if (param_3 < iVar7 + uVar11) {
              in_stack_ffffffffffffff58 = (iVar7 - param_3) + local_88;
              uVar11 = local_88 - in_stack_ffffffffffffff58;
              local_80 = local_84 + in_stack_ffffffffffffff58;
            }
            (*local_40)(param_1,param_2 + (local_res8 * param_3 + uVar15) * 4,uVar15,local_res8,
                        uVar11,local_7c,in_stack_ffffffffffffff58,local_80,
                        (longlong)local_60 +
                        (ulonglong)*(ushort *)((longlong)param_1 + 0x1e) * lVar6 +
                        lVar5 * ((ulonglong)((int)param_1[0x11] + uVar3) % (ulonglong)local_74));
            uVar16 = iVar7 + uVar11;
            uVar15 = (ulonglong)uVar16;
            local_70 = local_70 + uVar11;
            local_80 = local_84;
            uVar9 = uVar10;
            uVar11 = local_88;
            uVar17 = in_stack_ffffffffffffff58;
          } while (uVar16 < param_3);
          uVar9 = (ulonglong)local_6c;
          iVar14 = local_68;
        }
LAB_144b854fe:
        iVar7 = local_7c;
        if (local_58 != 0) {
          iVar7 = -local_7c;
        }
        local_res8 = local_res8 + iVar7;
        uVar15 = (ulonglong)(uVar3 + local_7c);
        iVar7 = local_78;
      } while (local_78 != 0);
      free(local_60);
      if (((local_50 & 2) != 0) && (param_4 != 0)) {
        do {
          uVar3 = (int)uVar10 * param_3;
          puVar12 = (undefined4 *)(param_2 + (ulonglong)uVar3 * 4);
          puVar8 = (undefined4 *)(param_2 + (((ulonglong)uVar3 - 1) + (ulonglong)param_3) * 4);
          if (puVar12 < puVar8) {
            do {
              uVar1 = *puVar12;
              *puVar12 = *puVar8;
              puVar12 = puVar12 + 1;
              *puVar8 = uVar1;
              puVar8 = puVar8 + -1;
            } while (puVar12 < puVar8);
          }
          uVar3 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar3;
        } while (uVar3 < param_4);
      }
      return iVar7;
    }
    uVar4 = FUN_144b775d0(lVar2);
    pcVar13 = "unsupported tile size (too wide)";
  }
  FUN_144e92fd0(*(undefined8 *)(lVar2 + 0x438),uVar4,&DAT_149972340,pcVar13);
  return 0;
}



// FUNCTION 144b855e0 FUN_144b855e0 body=1518 status=ok
// SIG undefined FUN_144b855e0(void)

int FUN_144b855e0(longlong *param_1,longlong param_2,uint param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  undefined4 *puVar15;
  uint uVar16;
  void *pvVar17;
  uint uVar18;
  void *pvVar19;
  int local_res8;
  uint in_stack_ffffffffffffff10;
  undefined2 uVar20;
  uint in_stack_ffffffffffffff18;
  int local_ac;
  ushort local_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  int local_94;
  int local_90;
  uint local_8c;
  void *local_88;
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  void *local_70;
  longlong local_68;
  longlong local_60;
  code *local_58;
  
  local_58 = (code *)param_1[9];
  pvVar12 = (void *)0x0;
  iVar2 = (int)param_1[2];
  lVar4 = *param_1;
  local_88 = (void *)0x0;
  local_70 = (void *)0x0;
  local_res8 = 1;
  local_68 = FUN_144b7ac50(lVar4);
  local_60 = FUN_144b7a8a0(lVar4,(iVar2 != 0) + '\x03',local_68,"gtTileSeparate");
  if (local_60 != 0) {
    FUN_144b77e20(lVar4,0x142,&local_9c);
    FUN_144b77e20(lVar4,0x143,&local_8c);
    local_74 = FUN_144b86c40(param_1);
    local_7c = local_74 & 1;
    if (local_7c == 0) {
      if (local_9c <= param_3 + 0x7fffffff) {
        local_94 = param_3 - local_9c;
        local_ac = 0;
        goto LAB_144b8573e;
      }
    }
    else if (local_9c + param_3 < 0x80000000) {
      local_94 = -(local_9c + param_3);
      local_ac = param_4 - 1;
LAB_144b8573e:
      sVar1 = *(short *)((longlong)param_1 + 0x24);
      if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 3)) {
        local_a8 = 1;
      }
      else {
        local_a8 = 3;
      }
      local_80 = *(uint *)((longlong)param_1 + 0x8c) % local_9c;
      uVar16 = local_9c - local_80;
      local_78 = local_94 + local_80;
      pvVar13 = pvVar12;
      pvVar14 = pvVar12;
      pvVar17 = pvVar12;
      pvVar19 = pvVar12;
      do {
        uVar18 = (uint)pvVar17;
        if (param_4 <= uVar18) break;
        uVar9 = local_8c - ((int)param_1[0x11] + uVar18) % local_8c;
        local_a0 = 0;
        uVar5 = param_4 - uVar18;
        if (uVar9 + uVar18 <= param_4) {
          uVar5 = uVar9;
        }
        iVar10 = *(int *)((longlong)param_1 + 0x8c);
        uVar9 = local_80;
        local_98 = uVar16;
        local_90 = local_78;
        if (param_3 != 0) {
          do {
            if (local_88 != (void *)0x0) {
              in_stack_ffffffffffffff10 = in_stack_ffffffffffffff10 & 0xffff0000;
              lVar8 = FUN_144b82d60(lVar4,local_70,iVar10,(int)param_1[0x11] + uVar18,0,
                                    in_stack_ffffffffffffff10);
              uVar20 = (undefined2)(in_stack_ffffffffffffff10 >> 0x10);
              if ((lVar8 != -1) || ((int)param_1[1] == 0)) {
LAB_144b858ed:
                if (local_a8 < 2) {
LAB_144b85963:
                  if (iVar2 != 0) goto LAB_144b85969;
                  goto LAB_144b8599f;
                }
                in_stack_ffffffffffffff10 = CONCAT22(uVar20,1);
                lVar8 = FUN_144b82d60(lVar4,pvVar14,iVar10,(int)param_1[0x11] + uVar18,0,
                                      in_stack_ffffffffffffff10);
                if ((lVar8 != -1) || ((int)param_1[1] == 0)) {
                  in_stack_ffffffffffffff10 = CONCAT22((short)(in_stack_ffffffffffffff10 >> 0x10),2)
                  ;
                  lVar8 = FUN_144b82d60(lVar4,pvVar19,iVar10,(int)param_1[0x11] + uVar18,0,
                                        in_stack_ffffffffffffff10);
                  uVar20 = (undefined2)(in_stack_ffffffffffffff10 >> 0x10);
                  if ((lVar8 != -1) || ((int)param_1[1] == 0)) goto LAB_144b85963;
                }
              }
LAB_144b85baa:
              local_res8 = 0;
              break;
            }
            in_stack_ffffffffffffff18 = in_stack_ffffffffffffff18 & 0xffff0000;
            in_stack_ffffffffffffff10 = 0;
            lVar8 = FUN_144b832c0(lVar4,&local_88,local_60,iVar10,(int)param_1[0x11] + uVar18,0,
                                  in_stack_ffffffffffffff18);
            uVar20 = (undefined2)(in_stack_ffffffffffffff10 >> 0x10);
            if ((lVar8 == -1) && ((local_88 == (void *)0x0 || ((int)param_1[1] != 0))))
            goto LAB_144b85baa;
            local_70 = local_88;
            if (local_a8 != 1) {
              pvVar14 = (void *)((longlong)local_88 + local_68);
              pvVar19 = (void *)(local_68 + (longlong)pvVar14);
              pvVar13 = pvVar12;
              if (iVar2 != 0) {
                pvVar13 = (void *)(local_68 + (longlong)pvVar19);
              }
              goto LAB_144b858ed;
            }
            pvVar13 = pvVar12;
            pvVar14 = local_88;
            pvVar19 = local_88;
            if (iVar2 != 0) {
              pvVar13 = (void *)((longlong)local_88 + local_68 * 3);
LAB_144b85969:
              in_stack_ffffffffffffff10 = CONCAT22(uVar20,local_a8);
              lVar8 = FUN_144b82d60(lVar4,pvVar13,iVar10,(int)param_1[0x11] + uVar18,0,
                                    in_stack_ffffffffffffff10);
              if ((lVar8 == -1) && ((int)param_1[1] != 0)) goto LAB_144b85baa;
            }
LAB_144b8599f:
            lVar8 = FUN_144b7ac10(lVar4);
            lVar8 = (ulonglong)*(ushort *)((longlong)param_1 + 0x1e) * (longlong)(int)uVar9 +
                    lVar8 * ((ulonglong)((int)param_1[0x11] + uVar18) % (ulonglong)local_8c);
            if (param_3 < local_98 + local_a0) {
              uVar9 = (local_a0 - param_3) + local_9c;
              local_98 = local_9c - uVar9;
              local_90 = local_94 + uVar9;
            }
            uVar6 = local_98;
            pvVar17 = (void *)(lVar8 + (longlong)pvVar13);
            if (iVar2 == 0) {
              pvVar17 = pvVar12;
            }
            in_stack_ffffffffffffff10 = uVar5;
            in_stack_ffffffffffffff18 = uVar9;
            (*local_58)(param_1,param_2 + ((ulonglong)(local_ac * param_3) + (ulonglong)local_a0) *
                                          4,local_a0,local_ac,local_98,uVar5,uVar9,local_90,
                        (longlong)local_70 + lVar8,lVar8 + (longlong)pvVar14,
                        lVar8 + (longlong)pvVar19,pvVar17);
            local_a0 = local_a0 + uVar6;
            iVar10 = iVar10 + uVar6;
            local_98 = local_9c;
            local_90 = local_94;
            uVar9 = 0;
          } while (local_a0 < param_3);
        }
        uVar9 = uVar5;
        if (local_7c != 0) {
          uVar9 = -uVar5;
        }
        local_ac = local_ac + uVar9;
        pvVar17 = (void *)(ulonglong)(uVar18 + uVar5);
      } while (local_res8 != 0);
      if (((local_74 & 2) != 0) && (param_4 != 0)) {
        do {
          uVar16 = (int)pvVar12 * param_3;
          puVar15 = (undefined4 *)(param_2 + (ulonglong)uVar16 * 4);
          puVar11 = (undefined4 *)(param_2 + (((ulonglong)uVar16 - 1) + (ulonglong)param_3) * 4);
          if (puVar15 < puVar11) {
            do {
              uVar3 = *puVar15;
              *puVar15 = *puVar11;
              puVar15 = puVar15 + 1;
              *puVar11 = uVar3;
              puVar11 = puVar11 + -1;
            } while (puVar15 < puVar11);
          }
          uVar16 = (int)pvVar12 + 1;
          pvVar12 = (void *)(ulonglong)uVar16;
        } while (uVar16 < param_4);
      }
      free(local_88);
      return local_res8;
    }
    uVar7 = FUN_144b775d0(lVar4);
    FUN_144e92fd0(*(undefined8 *)(lVar4 + 0x438),uVar7,&DAT_149972340,
                  "unsupported tile size (too wide)");
  }
  return 0;
}



// FUNCTION 144b85bd0 FUN_144b85bd0 body=847 status=ok
// SIG undefined FUN_144b85bd0(void)

uint FUN_144b85bd0(longlong *param_1,longlong param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  ushort local_res8 [4];
  longlong local_res10;
  uint local_res18;
  uint local_78;
  int local_74;
  void *local_70;
  undefined1 local_68 [4];
  int local_64;
  uint local_60;
  uint local_5c;
  longlong local_58;
  undefined8 local_50;
  code *local_48;
  
  local_48 = (code *)param_1[9];
  lVar1 = *param_1;
  uVar15 = *(uint *)((longlong)param_1 + 0x14);
  uVar10 = 0;
  local_70 = (void *)0x0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_144b7a120(lVar1,0x212,local_68,local_res8);
  if (local_res8[0] == 0) {
    uVar5 = FUN_144b775d0();
    FUN_144e92fd0(*(undefined8 *)(lVar1 + 0x438),uVar5,"Invalid vertical YCbCr subsampling");
    return 0;
  }
  local_50 = FUN_144b77ae0(lVar1);
  local_5c = FUN_144b86c40(param_1);
  local_60 = local_5c & 1;
  if (local_60 == 0) {
    local_74 = 0;
    iVar14 = 0;
  }
  else {
    if (0x7fffffff < param_3) {
      uVar5 = FUN_144b775d0(lVar1);
      FUN_144e92fd0(*(undefined8 *)(lVar1 + 0x438),uVar5,"Width overflow");
      return 0;
    }
    local_74 = param_3 * -2;
    iVar14 = param_4 - 1;
  }
  FUN_144b7a120(lVar1,0x116,&local_78);
  local_58 = FUN_144b77aa0(lVar1);
  local_64 = uVar15 - param_3;
  if (uVar15 <= param_3) {
    local_64 = 0;
  }
  uVar15 = uVar10;
  if (param_4 == 0) {
LAB_144b85e8d:
    uVar6 = 1;
LAB_144b85e97:
    if (((local_5c & 2) != 0) && (param_4 != 0)) {
      do {
        puVar12 = (undefined4 *)(local_res10 + (ulonglong)(uVar10 * param_3) * 4);
        puVar8 = (undefined4 *)
                 (local_res10 + (((ulonglong)(uVar10 * param_3) - 1) + (ulonglong)param_3) * 4);
        if (puVar12 < puVar8) {
          do {
            uVar4 = *puVar12;
            *puVar12 = *puVar8;
            puVar12 = puVar12 + 1;
            *puVar8 = uVar4;
            puVar8 = puVar8 + -1;
          } while (puVar12 < puVar8);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_4);
    }
    free(local_70);
  }
  else {
    while( true ) {
      uVar13 = (int)param_1[0x11] + uVar15;
      uVar7 = uVar13 % local_78;
      uVar6 = local_78 - uVar7;
      uVar3 = param_4 - uVar15;
      if (uVar6 + uVar15 <= param_4) {
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
      if (uVar3 % (uint)local_res8[0] != 0) {
        uVar6 = uVar3 + ((uint)local_res8[0] - uVar3 % (uint)local_res8[0]);
      }
      uVar11 = (ulonglong)(uVar7 + uVar6);
      if ((0 < local_58) &&
         (auVar2._8_8_ = 0, auVar2._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8),
         auVar2 = auVar2 << 0x40 | ZEXT816(0x7fffffffffffffff),
         SUB168(auVar2 / SEXT816(local_58),0) < uVar11)) break;
      lVar9 = uVar11 * local_58;
      uVar4 = FUN_144b77d20(lVar1,uVar13,0);
      lVar9 = FUN_144b83110(lVar1,uVar4,&local_70,local_50,lVar9);
      param_3 = local_res18;
      if ((lVar9 == -1) && ((uVar6 = uVar10, local_70 == (void *)0x0 || ((int)param_1[1] != 0))))
      goto LAB_144b85e97;
      (*local_48)(param_1,local_res10 + (ulonglong)(iVar14 * local_res18) * 4,0,iVar14,local_res18,
                  uVar3,local_64,local_74,
                  (longlong)local_70 +
                  ((ulonglong)((int)param_1[0x11] + uVar15) % (ulonglong)local_78) * local_58 +
                  (longlong)*(int *)((longlong)param_1 + 0x8c) *
                  (ulonglong)*(ushort *)((longlong)param_1 + 0x1e));
      uVar6 = uVar3;
      if (local_60 != 0) {
        uVar6 = -uVar3;
      }
      iVar14 = iVar14 + uVar6;
      uVar15 = uVar15 + uVar3;
      if (param_4 <= uVar15) goto LAB_144b85e8d;
    }
    uVar5 = FUN_144b775d0(lVar1,SUB168(auVar2 % SEXT816(local_58),0));
    FUN_144e92fd0(*(undefined8 *)(lVar1 + 0x438),uVar5,"Integer overflow in gtStripContig");
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 144b85f20 FUN_144b85f20 body=1318 status=ok
// SIG undefined FUN_144b85f20(void)

undefined1 * FUN_144b85f20(longlong *param_1,longlong param_2,uint param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined1 *puVar20;
  int iVar21;
  longlong lVar22;
  undefined8 in_stack_ffffffffffffff18;
  int local_a8;
  ushort local_a4;
  uint local_9c;
  int local_98;
  uint local_94;
  undefined1 *local_90;
  int local_88;
  uint local_84;
  uint local_80;
  undefined1 *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  code *local_58;
  
  local_58 = (code *)param_1[9];
  puVar14 = (undefined1 *)0x0;
  lVar3 = *param_1;
  uVar19 = *(uint *)((longlong)param_1 + 0x14);
  iVar2 = (int)param_1[2];
  local_90 = (undefined1 *)0x0;
  local_78 = (undefined1 *)0x0;
  local_70 = FUN_144b77ae0(lVar3);
  local_60 = FUN_144b7a8a0(lVar3,(iVar2 != 0) + '\x03',local_70,"gtStripSeparate");
  if (local_60 == 0) {
LAB_144b86000:
    puVar9 = (undefined1 *)0x0;
  }
  else {
    local_80 = FUN_144b86c40(param_1);
    local_84 = local_80 & 1;
    if (local_84 == 0) {
      local_a8 = 0;
      local_98 = 0;
    }
    else {
      if (0x7fffffff < param_3) {
        uVar8 = FUN_144b775d0(lVar3);
        FUN_144e92fd0(*(undefined8 *)(lVar3 + 0x438),uVar8,"Width overflow");
        goto LAB_144b86000;
      }
      local_a8 = param_4 - 1;
      local_98 = param_3 * -2;
    }
    sVar1 = *(short *)((longlong)param_1 + 0x24);
    if (((sVar1 == 0) || (sVar1 == 1)) || (sVar1 == 3)) {
      local_a4 = 1;
    }
    else {
      local_a4 = 3;
    }
    FUN_144b7a120(lVar3,0x116,&local_9c);
    local_68 = FUN_144b77aa0(lVar3);
    local_88 = uVar19 - param_3;
    local_94 = 0;
    if (uVar19 <= param_3) {
      local_88 = 0;
    }
    puVar15 = puVar14;
    puVar16 = puVar14;
    puVar20 = puVar14;
    puVar9 = puVar14;
    if (param_4 == 0) {
LAB_144b863b5:
      puVar9 = &DAT_00000001;
LAB_144b863ba:
      if (((local_80 & 2) != 0) && (param_4 != 0)) {
        do {
          uVar19 = (int)puVar14 * param_3;
          puVar18 = (undefined4 *)(param_2 + (ulonglong)uVar19 * 4);
          puVar13 = (undefined4 *)(param_2 + (((ulonglong)uVar19 - 1) + (ulonglong)param_3) * 4);
          if (puVar18 < puVar13) {
            do {
              uVar6 = *puVar18;
              *puVar18 = *puVar13;
              puVar18 = puVar18 + 1;
              *puVar13 = uVar6;
              puVar13 = puVar13 + -1;
            } while (puVar18 < puVar13);
          }
          uVar19 = (int)puVar14 + 1;
          puVar14 = (undefined1 *)(ulonglong)uVar19;
        } while (uVar19 < param_4);
      }
      free(local_90);
    }
    else {
      while( true ) {
        uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff18 >> 0x20);
        iVar21 = (int)puVar9;
        uVar19 = (int)param_1[0x11] + iVar21;
        iVar12 = local_9c - uVar19 % local_9c;
        iVar5 = param_4 - iVar21;
        if ((uint)(iVar12 + iVar21) <= param_4) {
          iVar5 = iVar12;
        }
        uVar17 = (ulonglong)(uVar19 % local_9c + iVar5);
        if ((0 < local_68) &&
           (auVar4._8_8_ = 0, auVar4._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8),
           auVar4 = auVar4 << 0x40 | ZEXT816(0x7fffffffffffffff),
           SUB168(auVar4 / SEXT816(local_68),0) < uVar17)) break;
        lVar22 = uVar17 * local_68;
        puVar9 = puVar14;
        if (local_90 == (undefined1 *)0x0) {
          uVar6 = FUN_144b77d20(lVar3,uVar19,0);
          lVar11 = lVar22;
          lVar10 = FUN_144b83110(lVar3,uVar6,&local_90,local_60,lVar22);
          uVar6 = (undefined4)((ulonglong)lVar11 >> 0x20);
          if ((lVar10 == -1) && ((local_90 == (undefined1 *)0x0 || ((int)param_1[1] != 0))))
          goto LAB_144b863ba;
          local_78 = local_90;
          if (local_a4 != 1) {
            puVar16 = local_90 + local_70;
            puVar20 = puVar16 + local_70;
            puVar15 = puVar14;
            if (iVar2 != 0) {
              puVar15 = puVar20 + local_70;
            }
            goto LAB_144b861e8;
          }
          puVar15 = puVar14;
          puVar16 = local_90;
          puVar20 = local_90;
          if (iVar2 != 0) {
            puVar15 = local_90 + local_70 * 3;
            goto LAB_144b8625d;
          }
        }
        else {
          uVar7 = FUN_144b77d20(lVar3,uVar19,0);
          lVar11 = FUN_144b82e30(lVar3,uVar7,local_78,lVar22);
          if ((lVar11 == -1) && ((int)param_1[1] != 0)) goto LAB_144b863ba;
LAB_144b861e8:
          if (1 < local_a4) {
            uVar7 = FUN_144b77d20(lVar3,uVar19,1);
            lVar11 = FUN_144b82e30(lVar3,uVar7,puVar16,lVar22);
            if ((lVar11 == -1) && ((int)param_1[1] != 0)) goto LAB_144b863ba;
            uVar7 = FUN_144b77d20(lVar3,uVar19,2);
            lVar11 = FUN_144b82e30(lVar3,uVar7,puVar20,lVar22);
            if ((lVar11 == -1) && ((int)param_1[1] != 0)) goto LAB_144b863ba;
          }
          if (iVar2 != 0) {
LAB_144b8625d:
            uVar7 = FUN_144b77d20(lVar3,uVar19,local_a4);
            lVar22 = FUN_144b82e30(lVar3,uVar7,puVar15,lVar22);
            if ((lVar22 == -1) && ((int)param_1[1] != 0)) goto LAB_144b863ba;
          }
        }
        uVar19 = local_94;
        lVar22 = (longlong)*(int *)((longlong)param_1 + 0x8c) *
                 (ulonglong)*(ushort *)((longlong)param_1 + 0x1e) +
                 ((ulonglong)((int)param_1[0x11] + local_94) % (ulonglong)local_9c) * local_68;
        puVar9 = puVar15 + lVar22;
        if (iVar2 == 0) {
          puVar9 = puVar14;
        }
        in_stack_ffffffffffffff18 = CONCAT44(uVar6,param_3);
        (*local_58)(param_1,param_2 + (ulonglong)(local_a8 * param_3) * 4,0,local_a8,
                    in_stack_ffffffffffffff18,iVar5,local_88,local_98,local_78 + lVar22,
                    puVar16 + lVar22,puVar20 + lVar22,puVar9);
        iVar12 = iVar5;
        if (local_84 != 0) {
          iVar12 = -iVar5;
        }
        local_a8 = local_a8 + iVar12;
        local_94 = uVar19 + iVar5;
        puVar9 = (undefined1 *)(ulonglong)local_94;
        if (param_4 <= local_94) goto LAB_144b863b5;
      }
      uVar8 = FUN_144b775d0(lVar3,SUB168(auVar4 % SEXT816(local_68),0));
      FUN_144e92fd0(*(undefined8 *)(lVar3 + 0x438),uVar8,"Integer overflow in gtStripSeparate");
      puVar9 = (undefined1 *)0x0;
    }
  }
  return puVar9;
}



// FUNCTION 144b86450 FUN_144b86450 body=1189 status=ok
// SIG undefined FUN_144b86450(void)

void FUN_144b86450(longlong *param_1)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  char *pcVar5;
  undefined1 auStack_58 [32];
  ushort local_38 [2];
  ushort local_34 [2];
  float *local_30;
  float local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = FUN_144b76e70(*param_1);
  param_1[9] = 0;
  pcVar4 = FUN_144b85bd0;
  if (iVar2 != 0) {
    pcVar4 = FUN_144b85220;
  }
  param_1[8] = (longlong)pcVar4;
  switch(*(undefined2 *)((longlong)param_1 + 0x24)) {
  case 0:
  case 1:
    iVar2 = FUN_144b8c1b0(param_1);
    if (iVar2 != 0) {
      sVar1 = *(short *)((longlong)param_1 + 0x1c);
      if (sVar1 == 1) {
        pcVar4 = FUN_144b872d0;
      }
      else if (sVar1 == 2) {
        pcVar4 = FUN_144b87460;
      }
      else if (sVar1 == 4) {
        pcVar4 = FUN_144b87560;
      }
      else if (sVar1 == 8) {
        if (((int)param_1[2] == 0) ||
           (pcVar4 = FUN_144b87190, *(short *)((longlong)param_1 + 0x1e) != 2)) {
          pcVar4 = FUN_144b87100;
        }
      }
      else {
        if (sVar1 != 0x10) break;
        pcVar4 = FUN_144b87230;
      }
      goto LAB_144b868bd;
    }
    break;
  case 2:
    if (*(short *)((longlong)param_1 + 0x1c) == 8) {
      if ((int)param_1[2] == 1) {
        if (*(ushort *)((longlong)param_1 + 0x1e) < 4) {
LAB_144b8659a:
          if (*(ushort *)((longlong)param_1 + 0x1e) < 3) break;
          pcVar4 = FUN_144b87610;
        }
        else {
          pcVar4 = FUN_144b87910;
        }
      }
      else {
        if (((int)param_1[2] != 2) || (*(ushort *)((longlong)param_1 + 0x1e) < 4))
        goto LAB_144b8659a;
        iVar2 = FUN_144b86980(param_1);
        if (iVar2 == 0) break;
        pcVar4 = FUN_144b87c30;
      }
      goto LAB_144b868bd;
    }
    if (*(short *)((longlong)param_1 + 0x1c) == 0x10) {
      if ((int)param_1[2] == 1) {
        if (*(ushort *)((longlong)param_1 + 0x1e) < 4) {
LAB_144b86530:
          if ((2 < *(ushort *)((longlong)param_1 + 0x1e)) &&
             (iVar2 = FUN_144b86a40(param_1), iVar2 != 0)) {
            pcVar4 = FUN_144b87d10;
            goto LAB_144b868bd;
          }
        }
        else {
          iVar2 = FUN_144b86a40(param_1);
          if (iVar2 != 0) {
            pcVar4 = FUN_144b87de0;
            goto LAB_144b868bd;
          }
        }
      }
      else {
        if (((int)param_1[2] != 2) || (*(ushort *)((longlong)param_1 + 0x1e) < 4))
        goto LAB_144b86530;
        iVar2 = FUN_144b86a40(param_1);
        if ((iVar2 != 0) && (iVar2 = FUN_144b86980(param_1), iVar2 != 0)) {
          pcVar4 = FUN_144b87ec0;
          goto LAB_144b868bd;
        }
      }
    }
    break;
  case 3:
    iVar2 = FUN_144b8c1b0(param_1);
    if (iVar2 != 0) {
      sVar1 = *(short *)((longlong)param_1 + 0x1c);
      if (sVar1 == 1) {
        pcVar4 = FUN_144b86f70;
      }
      else if (sVar1 == 2) {
        pcVar4 = FUN_144b86e70;
      }
      else if (sVar1 == 4) {
        pcVar4 = FUN_144b86dc0;
      }
      else {
        if (sVar1 != 8) break;
        pcVar4 = FUN_144b86d30;
      }
      goto LAB_144b868bd;
    }
    break;
  case 4:
  case 7:
    break;
  case 5:
    if (((3 < *(ushort *)((longlong)param_1 + 0x1e)) && (iVar2 = FUN_144b8c1b0(param_1), iVar2 != 0)
        ) && (*(short *)((longlong)param_1 + 0x1c) == 8)) {
      pcVar4 = FUN_144b88ab0;
      if (param_1[10] == 0) {
        pcVar4 = FUN_144b87fd0;
      }
      goto LAB_144b868bd;
    }
    break;
  case 6:
    if (((*(short *)((longlong)param_1 + 0x1c) == 8) && (*(short *)((longlong)param_1 + 0x1e) == 3))
       && (iVar2 = FUN_144b8b910(param_1), iVar2 != 0)) {
      FUN_144b7a120(*param_1,0x212,local_38,local_34);
      switch((uint)local_38[0] << 4 | (uint)local_34[0]) {
      case 0x11:
        pcVar4 = FUN_144b8b6e0;
        break;
      case 0x12:
        pcVar4 = FUN_144b8b4a0;
        break;
      default:
        goto switchD_144b864b3_caseD_4;
      case 0x21:
        pcVar4 = FUN_144b8b2b0;
        break;
      case 0x22:
        pcVar4 = FUN_144b8aec0;
        break;
      case 0x41:
        pcVar4 = FUN_144b8abd0;
        break;
      case 0x42:
        pcVar4 = FUN_144b8a5a0;
        break;
      case 0x44:
        pcVar4 = FUN_144b899c0;
      }
LAB_144b868bd:
      param_1[9] = (longlong)pcVar4;
    }
    break;
  case 8:
    if (((*(short *)((longlong)param_1 + 0x1e) == 3) && (iVar2 = FUN_144b8c1b0(param_1), iVar2 != 0)
        ) && (*(short *)((longlong)param_1 + 0x1c) == 8)) {
      FUN_144b7a120(*param_1,0x13e,&local_30);
      if (local_30[1] == 0.0) {
        pcVar5 = "Invalid value for WhitePoint tag.";
LAB_144b867ea:
        FUN_144e92fd0(*(undefined8 *)(*param_1 + 0x438),"initCIELabConversion",pcVar5);
        pcVar4 = (code *)0x0;
      }
      else {
        lVar3 = param_1[0xe];
        if (lVar3 == 0) {
          lVar3 = FUN_144e92f50(0x46cc);
          param_1[0xe] = lVar3;
          if (lVar3 == 0) {
            pcVar5 = "No space for CIE L*a*b*->RGB conversion state.";
            goto LAB_144b867ea;
          }
        }
        local_28[1] = 100.0;
        local_28[0] = (*local_30 / local_30[1]) * 100.0;
        local_28[2] = (((1.0 - *local_30) - local_30[1]) / local_30[1]) * 100.0;
        iVar2 = FUN_144e97c90(lVar3,&DAT_1499753b0,local_28);
        if (iVar2 < 0) {
          FUN_144e92fd0(*(undefined8 *)(*param_1 + 0x438),"initCIELabConversion",
                        "Failed to initialize CIE L*a*b*->RGB conversion state.");
          free((void *)param_1[0xe]);
          pcVar4 = (code *)0x0;
        }
        else {
          pcVar4 = FUN_144b89870;
        }
      }
      goto LAB_144b868bd;
    }
    break;
  default:
    goto switchD_144b864b3_default;
  }
switchD_144b864b3_caseD_4:
switchD_144b864b3_default:
  if ((param_1[8] != 0) && (param_1[9] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 144b86980 FUN_144b86980 body=185 status=ok
// SIG undefined FUN_144b86980(void)

undefined8 FUN_144b86980(longlong *param_1)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  
  pcVar1 = (char *)FUN_144e92f50(0x10000);
  param_1[0xf] = (longlong)pcVar1;
  if (pcVar1 == (char *)0x0) {
    FUN_144e92fd0(*(undefined8 *)(*param_1 + 0x438),"BuildMapUaToAa","Out of memory");
    return 0;
  }
  uVar5 = 0;
  do {
    uVar2 = 0;
    do {
      uVar3 = (uint)uVar2;
      uVar2 = uVar2 + 1;
      iVar4 = uVar3 * uVar5 + 0x7f;
      *pcVar1 = ((char)(iVar4 / 0xff) + (char)(iVar4 >> 0x1f)) -
                (char)((longlong)iVar4 * 0x80808081 >> 0x3f);
      pcVar1 = pcVar1 + 1;
    } while (uVar2 < 0x100);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x100);
  return 1;
}



// FUNCTION 144b86a40 FUN_144b86a40 body=512 status=ok
// SIG undefined FUN_144b86a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144b86a40(longlong *param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iVar23;
  uint uVar24;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  puVar7 = (undefined4 *)FUN_144e92f50(0x10000);
  param_1[0x10] = (longlong)puVar7;
  if (puVar7 == (undefined4 *)0x0) {
    FUN_144e92fd0(*(undefined8 *)(*param_1 + 0x438),"BuildMapBitdepth16To8","Out of memory");
    return 0;
  }
  uVar8 = 0x8f;
  do {
    iVar1 = uVar8 - 2;
    iVar23 = uVar8 - 0xe;
    auVar10._4_4_ = iVar23;
    auVar10._0_4_ = uVar8 - 0xf;
    uVar24 = uVar8 - 0xd;
    auVar17._12_4_ = uVar8 - 0xc;
    auVar10._8_4_ = iVar23;
    auVar10._12_4_ = iVar23;
    auVar17._4_4_ = uVar24;
    auVar17._0_4_ = uVar24;
    auVar17._8_4_ = auVar17._12_4_;
    auVar18._0_8_ = (ulonglong)uVar24 * 0xff00ff01;
    uVar6 = auVar17._8_8_ & 0xffffffff;
    auVar18._8_8_ = uVar6 * 0xff00ff01;
    auVar9._0_4_ = (uVar8 - 0xf) / 0x101;
    auVar9._4_4_ = (undefined4)((auVar10._8_8_ & 0xffffffff) / 0x101);
    auVar9._8_4_ = uVar24 / 0x101;
    auVar9._12_4_ = (undefined4)(uVar6 / 0x101);
    auVar10 = pshuflw(auVar9,auVar9,0xd8);
    auVar10 = pshufhw(auVar18,auVar10,0xd8);
    auVar26._4_4_ = auVar10._8_4_;
    auVar26._0_4_ = auVar10._0_4_;
    auVar26._8_4_ = auVar10._4_4_;
    auVar26._12_4_ = auVar10._12_4_;
    auVar26 = auVar26 & _DAT_149975ad0;
    sVar2 = auVar26._0_2_;
    sVar3 = auVar26._2_2_;
    sVar4 = auVar26._4_2_;
    sVar5 = auVar26._6_2_;
    *puVar7 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar26[6] - (0xff < sVar5),
                       CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar26[4] - (0xff < sVar4),
                                CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar26[2] - (0xff < sVar3)
                                         ,(0 < sVar2) * (sVar2 < 0x100) * auVar26[0] -
                                          (0xff < sVar2))));
    iVar23 = uVar8 - 10;
    auVar11._4_4_ = iVar23;
    auVar11._0_4_ = uVar8 - 0xb;
    uVar24 = uVar8 - 9;
    auVar19._12_4_ = uVar8 - 8;
    auVar11._8_4_ = iVar23;
    auVar11._12_4_ = iVar23;
    auVar19._4_4_ = uVar24;
    auVar19._0_4_ = uVar24;
    auVar19._8_4_ = auVar19._12_4_;
    auVar20._0_8_ = (ulonglong)uVar24 * 0xff00ff01;
    uVar6 = auVar19._8_8_ & 0xffffffff;
    auVar20._8_8_ = uVar6 * 0xff00ff01;
    auVar12._0_4_ = (uVar8 - 0xb) / 0x101;
    auVar12._4_4_ = (undefined4)((auVar11._8_8_ & 0xffffffff) / 0x101);
    auVar12._8_4_ = uVar24 / 0x101;
    auVar12._12_4_ = (undefined4)(uVar6 / 0x101);
    auVar10 = pshuflw(auVar12,auVar12,0xd8);
    auVar10 = pshufhw(auVar20,auVar10,0xd8);
    auVar27._4_4_ = auVar10._8_4_;
    auVar27._0_4_ = auVar10._0_4_;
    auVar27._8_4_ = auVar10._4_4_;
    auVar27._12_4_ = auVar10._12_4_;
    auVar27 = auVar27 & _DAT_149975ad0;
    sVar2 = auVar27._0_2_;
    sVar3 = auVar27._2_2_;
    sVar4 = auVar27._4_2_;
    sVar5 = auVar27._6_2_;
    puVar7[1] = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar27[6] - (0xff < sVar5),
                         CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar27[4] - (0xff < sVar4),
                                  CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar27[2] -
                                           (0xff < sVar3),
                                           (0 < sVar2) * (sVar2 < 0x100) * auVar27[0] -
                                           (0xff < sVar2))));
    uVar24 = uVar8 - 1;
    iVar23 = uVar8 - 6;
    auVar13._4_4_ = iVar23;
    auVar13._0_4_ = uVar8 - 7;
    uVar25 = uVar8 - 5;
    auVar21._12_4_ = uVar8 - 4;
    auVar13._8_4_ = iVar23;
    auVar13._12_4_ = iVar23;
    auVar21._4_4_ = uVar25;
    auVar21._0_4_ = uVar25;
    auVar21._8_4_ = auVar21._12_4_;
    auVar22._0_8_ = (ulonglong)uVar25 * 0xff00ff01;
    uVar6 = auVar21._8_8_ & 0xffffffff;
    auVar22._8_8_ = uVar6 * 0xff00ff01;
    auVar14._0_4_ = (uVar8 - 7) / 0x101;
    auVar14._4_4_ = (undefined4)((auVar13._8_8_ & 0xffffffff) / 0x101);
    auVar14._8_4_ = uVar25 / 0x101;
    auVar14._12_4_ = (undefined4)(uVar6 / 0x101);
    auVar10 = pshuflw(auVar14,auVar14,0xd8);
    auVar10 = pshufhw(auVar22,auVar10,0xd8);
    auVar28._4_4_ = auVar10._8_4_;
    auVar28._0_4_ = auVar10._0_4_;
    auVar28._8_4_ = auVar10._4_4_;
    auVar28._12_4_ = auVar10._12_4_;
    auVar28 = auVar28 & _DAT_149975ad0;
    sVar2 = auVar28._0_2_;
    sVar3 = auVar28._2_2_;
    sVar4 = auVar28._4_2_;
    sVar5 = auVar28._6_2_;
    puVar7[2] = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar28[6] - (0xff < sVar5),
                         CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar28[4] - (0xff < sVar4),
                                  CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar28[2] -
                                           (0xff < sVar3),
                                           (0 < sVar2) * (sVar2 < 0x100) * auVar28[0] -
                                           (0xff < sVar2))));
    auVar15._4_4_ = iVar1;
    auVar15._0_4_ = uVar8 - 3;
    uVar25 = uVar8 - 0x7f;
    auVar15._8_4_ = iVar1;
    auVar15._12_4_ = iVar1;
    auVar30._4_4_ = uVar24;
    auVar30._0_4_ = uVar24;
    auVar30._8_4_ = uVar8;
    auVar30._12_4_ = uVar8;
    auVar16._0_4_ = (uVar8 - 3) / 0x101;
    auVar16._4_4_ = (undefined4)((auVar15._8_8_ & 0xffffffff) / 0x101);
    auVar16._8_4_ = uVar24 / 0x101;
    auVar16._12_4_ = (undefined4)((auVar30._8_8_ & 0xffffffff) / 0x101);
    auVar10 = pshuflw(auVar16,auVar16,0xd8);
    auVar10 = pshufhw(ZEXT416(uVar8),auVar10,0xd8);
    auVar29._4_4_ = auVar10._8_4_;
    auVar29._0_4_ = auVar10._0_4_;
    auVar29._8_4_ = auVar10._4_4_;
    auVar29._12_4_ = auVar10._12_4_;
    auVar29 = auVar29 & _DAT_149975ad0;
    sVar2 = auVar29._0_2_;
    sVar3 = auVar29._2_2_;
    sVar4 = auVar29._4_2_;
    sVar5 = auVar29._6_2_;
    puVar7[3] = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar29[6] - (0xff < sVar5),
                         CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar29[4] - (0xff < sVar4),
                                  CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar29[2] -
                                           (0xff < sVar3),
                                           (0 < sVar2) * (sVar2 < 0x100) * auVar29[0] -
                                           (0xff < sVar2))));
    puVar7 = puVar7 + 4;
    uVar8 = uVar8 + 0x10;
  } while (uVar25 < 0x10000);
  return 1;
}



// FUNCTION 144b86c40 FUN_144b86c40 body=197 status=ok
// SIG undefined FUN_144b86c40(void)

undefined8 FUN_144b86c40(longlong param_1)

{
  short sVar1;
  
  switch(*(undefined2 *)(param_1 + 0x20)) {
  case 1:
  case 5:
    sVar1 = *(short *)(param_1 + 0x22);
    if ((sVar1 - 2U & 0xfffb) == 0) {
      return 2;
    }
    if ((sVar1 - 3U & 0xfffb) == 0) {
      return 3;
    }
    if ((sVar1 - 4U & 0xfffb) == 0) {
      return 1;
    }
    break;
  case 2:
  case 6:
    sVar1 = *(short *)(param_1 + 0x22);
    if ((sVar1 - 1U & 0xfffb) == 0) {
      return 2;
    }
    if ((sVar1 - 3U & 0xfffb) == 0) {
      return 1;
    }
    if ((sVar1 - 4U & 0xfffb) == 0) {
      return 3;
    }
    break;
  case 3:
  case 7:
    sVar1 = *(short *)(param_1 + 0x22);
    if ((sVar1 - 1U & 0xfffb) == 0) {
      return 3;
    }
    if ((sVar1 - 2U & 0xfffb) == 0) {
      return 1;
    }
    if ((sVar1 - 4U & 0xfffb) == 0) {
      return 2;
    }
    return 0;
  case 4:
  case 8:
    sVar1 = *(short *)(param_1 + 0x22);
    if ((sVar1 - 1U & 0xfffb) == 0) {
      return 1;
    }
    if ((sVar1 - 2U & 0xfffb) == 0) {
      return 3;
    }
    if ((sVar1 - 3U & 0xfffb) == 0) {
      return 2;
    }
  }
  return 0;
}



// FUNCTION 144b86d30 FUN_144b86d30 body=139 status=ok
// SIG undefined FUN_144b86d30(void)

void FUN_144b86d30(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6,int param_7,int param_8,byte *param_9)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x60);
  uVar2 = *(ushort *)(param_1 + 0x1e);
  if (param_6 != 0) {
    iVar4 = param_5;
    do {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        bVar1 = *param_9;
        param_9 = param_9 + uVar2;
        *param_2 = **(undefined4 **)(lVar3 + (ulonglong)bVar1 * 8);
        param_2 = param_2 + 1;
      }
      param_2 = param_2 + param_8;
      param_9 = param_9 + param_7;
      param_6 = param_6 + -1;
      iVar4 = param_5;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b86dc0 FUN_144b86dc0 body=168 status=ok
// SIG undefined FUN_144b86dc0(void)

void FUN_144b86dc0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,int param_6,int param_7,int param_8,byte *param_9)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (param_6 != 0) {
    do {
      uVar5 = param_5;
      if (1 < param_5) {
        uVar4 = (ulonglong)(param_5 >> 1);
        do {
          bVar1 = *param_9;
          uVar5 = uVar5 - 2;
          param_9 = param_9 + 1;
          puVar3 = *(undefined4 **)(lVar2 + (ulonglong)bVar1 * 8);
          *param_2 = *puVar3;
          param_2[1] = puVar3[1];
          param_2 = param_2 + 2;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      if (uVar5 != 0) {
        bVar1 = *param_9;
        param_9 = param_9 + 1;
        *param_2 = **(undefined4 **)(lVar2 + (ulonglong)bVar1 * 8);
        param_2 = param_2 + 1;
      }
      param_2 = param_2 + param_8;
      param_9 = param_9 + param_7 / 2;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b86e70 FUN_144b86e70 body=243 status=ok
// SIG undefined FUN_144b86e70(void)

void FUN_144b86e70(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,int param_6,int param_7,int param_8,byte *param_9)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (param_6 != 0) {
    do {
      uVar4 = param_5;
      if (3 < param_5) {
        uVar5 = (ulonglong)(param_5 >> 2);
        do {
          bVar1 = *param_9;
          uVar4 = uVar4 - 4;
          param_9 = param_9 + 1;
          puVar3 = *(undefined4 **)(lVar2 + (ulonglong)bVar1 * 8);
          *param_2 = *puVar3;
          param_2[1] = puVar3[1];
          param_2[2] = puVar3[2];
          param_2[3] = puVar3[3];
          param_2 = param_2 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uVar4 != 0) {
        bVar1 = *param_9;
        param_9 = param_9 + 1;
        puVar3 = *(undefined4 **)(lVar2 + (ulonglong)bVar1 * 8);
        if (uVar4 != 1) {
          if (uVar4 != 2) {
            if (uVar4 != 3) goto LAB_144b86f43;
            *param_2 = *puVar3;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          *param_2 = *puVar3;
          param_2 = param_2 + 1;
          puVar3 = puVar3 + 1;
        }
        *param_2 = *puVar3;
        param_2 = param_2 + 1;
      }
LAB_144b86f43:
      param_2 = param_2 + param_8;
      param_9 = param_9 + ((int)(param_7 + (param_7 >> 0x1f & 3U)) >> 2);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b86f70 FUN_144b86f70 body=358 status=ok
// SIG undefined FUN_144b86f70(void)

void FUN_144b86f70(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,int param_6,int param_7,int param_8,byte *param_9)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x60);
  if (param_6 != 0) {
    do {
      uVar5 = param_5;
      if (7 < param_5) {
        uVar3 = (ulonglong)(param_5 >> 3);
        do {
          bVar1 = *param_9;
          uVar5 = uVar5 - 8;
          param_9 = param_9 + 1;
          puVar4 = *(undefined4 **)(lVar2 + (ulonglong)bVar1 * 8);
          *param_2 = *puVar4;
          param_2[1] = puVar4[1];
          param_2[2] = puVar4[2];
          param_2[3] = puVar4[3];
          param_2[4] = puVar4[4];
          param_2[5] = puVar4[5];
          param_2[6] = puVar4[6];
          param_2[7] = puVar4[7];
          param_2 = param_2 + 8;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      if (uVar5 != 0) {
        bVar1 = *param_9;
        param_9 = param_9 + 1;
        puVar4 = *(undefined4 **)(lVar2 + (ulonglong)bVar1 * 8);
        switch(uVar5) {
        case 7:
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
          puVar4 = puVar4 + 1;
        case 6:
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
          puVar4 = puVar4 + 1;
        case 5:
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
          puVar4 = puVar4 + 1;
        case 4:
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
          puVar4 = puVar4 + 1;
        case 3:
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
          puVar4 = puVar4 + 1;
        case 2:
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
          puVar4 = puVar4 + 1;
        case 1:
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
        }
      }
      param_2 = param_2 + param_8;
      param_9 = param_9 + ((int)(param_7 + (param_7 >> 0x1f & 7U)) >> 3);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b87100 FUN_144b87100 body=139 status=ok
// SIG undefined FUN_144b87100(void)

void FUN_144b87100(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,int param_6,int param_7,int param_8,byte *param_9)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x1e);
  lVar3 = *(longlong *)(param_1 + 0x58);
  if (param_6 != 0) {
    iVar4 = param_5;
    do {
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        bVar1 = *param_9;
        param_9 = param_9 + uVar2;
        *param_2 = **(undefined4 **)(lVar3 + (ulonglong)bVar1 * 8);
        param_2 = param_2 + 1;
      }
      param_2 = param_2 + param_8;
      param_9 = param_9 + param_7;
      param_6 = param_6 + -1;
      iVar4 = param_5;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b87190 FUN_144b87190 body=159 status=ok
// SIG undefined FUN_144b87190(void)

void FUN_144b87190(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  int param_6,int param_7,int param_8,byte *param_9)

{
  byte *pbVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar3 = *(ushort *)(param_1 + 0x1e);
  lVar4 = *(longlong *)(param_1 + 0x58);
  if (param_6 != 0) {
    iVar5 = param_5;
    do {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        bVar2 = *param_9;
        pbVar1 = param_9 + 1;
        param_9 = param_9 + uVar3;
        *param_2 = **(uint **)(lVar4 + (ulonglong)bVar2 * 8) & ((uint)*pbVar1 << 0x18 | 0xffffff);
        param_2 = param_2 + 1;
      }
      param_2 = param_2 + param_8;
      param_9 = param_9 + param_7;
      param_6 = param_6 + -1;
      iVar5 = param_5;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b87230 FUN_144b87230 body=157 status=ok
// SIG undefined FUN_144b87230(void)

void FUN_144b87230(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,int param_6,int param_7,int param_8,longlong param_9)

{
  byte *pbVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar2 = *(ushort *)(param_1 + 0x1e);
  lVar3 = *(longlong *)(param_1 + 0x58);
  if (param_6 != 0) {
    do {
      lVar5 = param_9;
      if (param_5 != 0) {
        lVar5 = param_9 + (ulonglong)((uint)uVar2 + (uint)uVar2) * (ulonglong)param_5;
        uVar4 = param_5;
        do {
          pbVar1 = (byte *)(param_9 + 1);
          param_9 = param_9 + (ulonglong)uVar2 * 2;
          *param_2 = **(undefined4 **)(lVar3 + (ulonglong)*pbVar1 * 8);
          param_2 = param_2 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      param_2 = param_2 + param_8;
      param_9 = lVar5 + param_7;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b872d0 FUN_144b872d0 body=358 status=ok
// SIG undefined FUN_144b872d0(void)

void FUN_144b872d0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,int param_6,int param_7,int param_8,byte *param_9)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  if (param_6 != 0) {
    do {
      uVar5 = param_5;
      if (7 < param_5) {
        uVar3 = (ulonglong)(param_5 >> 3);
        do {
          bVar1 = *param_9;
          uVar5 = uVar5 - 8;
          param_9 = param_9 + 1;
          puVar4 = *(undefined4 **)(lVar2 + (ulonglong)bVar1 * 8);
          *param_2 = *puVar4;
          param_2[1] = puVar4[1];
          param_2[2] = puVar4[2];
          param_2[3] = puVar4[3];
          param_2[4] = puVar4[4];
          param_2[5] = puVar4[5];
          param_2[6] = puVar4[6];
          param_2[7] = puVar4[7];
          param_2 = param_2 + 8;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      if (uVar5 != 0) {
        bVar1 = *param_9;
        param_9 = param_9 + 1;
        puVar4 = *(undefined4 **)(lVar2 + (ulonglong)bVar1 * 8);
        switch(uVar5) {
        case 7:
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
          puVar4 = puVar4 + 1;
        case 6:
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
          puVar4 = puVar4 + 1;
        case 5:
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
          puVar4 = puVar4 + 1;
        case 4:
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
          puVar4 = puVar4 + 1;
        case 3:
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
          puVar4 = puVar4 + 1;
        case 2:
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
          puVar4 = puVar4 + 1;
        case 1:
          *param_2 = *puVar4;
          param_2 = param_2 + 1;
        }
      }
      param_2 = param_2 + param_8;
      param_9 = param_9 + ((int)(param_7 + (param_7 >> 0x1f & 7U)) >> 3);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}



// FUNCTION 144b87460 FUN_144b87460 body=243 status=ok
// SIG undefined FUN_144b87460(void)

void FUN_144b87460(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,int param_6,int param_7,int param_8,byte *param_9)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x58);
  if (param_6 != 0) {
    do {
      uVar4 = param_5;
      if (3 < param_5) {
        uVar5 = (ulonglong)(param_5 >> 2);
        do {
          bVar1 = *param_9;
          uVar4 = uVar4 - 4;
          param_9 = param_9 + 1;
          puVar3 = *(undefined4 **)(lVar2 + (ulonglong)bVar1 * 8);
          *param_2 = *puVar3;
          param_2[1] = puVar3[1];
          param_2[2] = puVar3[2];
          param_2[3] = puVar3[3];
          param_2 = param_2 + 4;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if (uVar4 != 0) {
        bVar1 = *param_9;
        param_9 = param_9 + 1;
        puVar3 = *(undefined4 **)(lVar2 + (ulonglong)bVar1 * 8);
        if (uVar4 != 1) {
          if (uVar4 != 2) {
            if (uVar4 != 3) goto LAB_144b87533;
            *param_2 = *puVar3;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          *param_2 = *puVar3;
          param_2 = param_2 + 1;
          puVar3 = puVar3 + 1;
        }
        *param_2 = *puVar3;
        param_2 = param_2 + 1;
      }
LAB_144b87533:
      param_2 = param_2 + param_8;
      param_9 = param_9 + ((int)(param_7 + (param_7 >> 0x1f & 3U)) >> 2);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}


